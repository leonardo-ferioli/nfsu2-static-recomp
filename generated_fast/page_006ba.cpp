#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69e(u8* __restrict R,Cpu& c);
u32 body_69f(u8* __restrict R,Cpu& c);
u32 body_6af(u8* __restrict R,Cpu& c);
u32 body_6b0(u8* __restrict R,Cpu& c);
u32 body_6b1(u8* __restrict R,Cpu& c);
u32 body_6b2(u8* __restrict R,Cpu& c);
u32 body_6b3(u8* __restrict R,Cpu& c);
u32 body_6b4(u8* __restrict R,Cpu& c);
u32 body_6b5(u8* __restrict R,Cpu& c);
u32 body_6b7(u8* __restrict R,Cpu& c);
u32 body_6b8(u8* __restrict R,Cpu& c);
u32 body_6b9(u8* __restrict R,Cpu& c);
u32 body_6bb(u8* __restrict R,Cpu& c);
u32 body_6c2(u8* __restrict R,Cpu& c);
u32 body_6c3(u8* __restrict R,Cpu& c);
u32 body_6c4(u8* __restrict R,Cpu& c);
u32 body_6c6(u8* __restrict R,Cpu& c);
u32 body_6c8(u8* __restrict R,Cpu& c);
u32 body_6c9(u8* __restrict R,Cpu& c);
u32 body_6ca(u8* __restrict R,Cpu& c);
u32 body_6cc(u8* __restrict R,Cpu& c);
u32 body_6cd(u8* __restrict R,Cpu& c);
u32 body_6ce(u8* __restrict R,Cpu& c);
u32 body_6cf(u8* __restrict R,Cpu& c);
u32 body_6d0(u8* __restrict R,Cpu& c);
u32 body_6d1(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6ba,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6ba,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6ba(u8* __restrict R,Cpu& c);
u32 page_6ba(Cpu& c){return body_6ba(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6ba(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6ba004:goto L6ba004;
case 0x6ba006:goto L6ba006;
case 0x6ba00b:c.instructions+=1;goto B6ba00b;
case 0x6ba00d:goto L6ba00d;
case 0x6ba012:c.instructions+=1;goto B6ba012;
case 0x6ba014:goto L6ba014;
case 0x6ba019:c.instructions+=1;goto B6ba019;
case 0x6ba01b:goto L6ba01b;
case 0x6ba01d:c.instructions+=1;goto B6ba01d;
case 0x6ba022:goto L6ba022;
case 0x6ba024:goto L6ba024;
case 0x6ba026:c.instructions+=1;goto B6ba026;
case 0x6ba028:goto L6ba028;
case 0x6ba02a:c.instructions+=1;goto B6ba02a;
case 0x6ba02c:goto L6ba02c;
case 0x6ba02e:c.instructions+=1;goto B6ba02e;
case 0x6ba030:goto L6ba030;
case 0x6ba032:c.instructions+=1;goto B6ba032;
case 0x6ba034:goto L6ba034;
case 0x6ba036:goto L6ba036;
case 0x6ba038:c.instructions+=1;goto B6ba038;
case 0x6ba03d:goto L6ba03d;
case 0x6ba042:c.instructions+=1;goto B6ba042;
case 0x6ba044:goto L6ba044;
case 0x6ba046:c.instructions+=1;goto B6ba046;
case 0x6ba048:goto L6ba048;
case 0x6ba049:c.instructions+=2;goto B6ba049;
case 0x6ba04c:c.instructions+=1;goto B6ba04c;
case 0x6ba052:goto L6ba052;
case 0x6ba054:goto L6ba054;
case 0x6ba055:c.instructions+=4;goto B6ba055;
case 0x6ba056:c.instructions+=3;goto B6ba056;
case 0x6ba057:c.instructions+=2;goto B6ba057;
case 0x6ba058:c.instructions+=1;goto B6ba058;
case 0x6ba05b:goto L6ba05b;
case 0x6ba061:c.instructions+=5;goto B6ba061;
case 0x6ba066:c.instructions+=4;goto B6ba066;
case 0x6ba06b:c.instructions+=3;goto B6ba06b;
case 0x6ba06e:c.instructions+=2;goto B6ba06e;
case 0x6ba06f:c.instructions+=1;goto B6ba06f;
case 0x6ba074:goto L6ba074;
case 0x6ba077:c.instructions+=2;goto B6ba077;
case 0x6ba07c:c.instructions+=1;goto B6ba07c;
case 0x6ba07e:goto L6ba07e;
case 0x6ba084:c.instructions+=5;goto B6ba084;
case 0x6ba089:c.instructions+=4;goto B6ba089;
case 0x6ba08e:c.instructions+=3;goto B6ba08e;
case 0x6ba091:c.instructions+=2;goto B6ba091;
case 0x6ba092:c.instructions+=1;goto B6ba092;
case 0x6ba097:goto L6ba097;
case 0x6ba09a:c.instructions+=2;goto B6ba09a;
case 0x6ba09f:c.instructions+=1;goto B6ba09f;
case 0x6ba0a1:goto L6ba0a1;
case 0x6ba0a3:c.instructions+=5;goto B6ba0a3;
case 0x6ba0a4:c.instructions+=4;goto B6ba0a4;
case 0x6ba0a6:c.instructions+=3;goto B6ba0a6;
case 0x6ba0ac:c.instructions+=2;goto B6ba0ac;
case 0x6ba0ae:c.instructions+=1;goto B6ba0ae;
case 0x6ba0b0:goto L6ba0b0;
case 0x6ba0b6:c.instructions+=2;goto B6ba0b6;
case 0x6ba0b8:c.instructions+=1;goto B6ba0b8;
case 0x6ba0ba:goto L6ba0ba;
case 0x6ba0c0:c.instructions+=3;goto B6ba0c0;
case 0x6ba0c6:c.instructions+=2;goto B6ba0c6;
case 0x6ba0cc:c.instructions+=1;goto B6ba0cc;
case 0x6ba0ce:goto L6ba0ce;
case 0x6ba0d3:c.instructions+=2;goto B6ba0d3;
case 0x6ba0d4:c.instructions+=1;goto B6ba0d4;
case 0x6ba0d5:goto L6ba0d5;
case 0x6ba0d6:c.instructions+=3;goto B6ba0d6;
case 0x6ba0d7:c.instructions+=2;goto B6ba0d7;
case 0x6ba0d9:c.instructions+=1;goto B6ba0d9;
case 0x6ba0de:goto L6ba0de;
case 0x6ba0e3:c.instructions+=2;goto B6ba0e3;
case 0x6ba0e5:c.instructions+=1;goto B6ba0e5;
case 0x6ba0ea:goto L6ba0ea;
case 0x6ba0ec:c.instructions+=1;goto B6ba0ec;
case 0x6ba0ee:goto L6ba0ee;
case 0x6ba0f0:c.instructions+=1;goto B6ba0f0;
case 0x6ba0f5:goto L6ba0f5;
case 0x6ba0f7:c.instructions+=1;goto B6ba0f7;
case 0x6ba0f9:goto L6ba0f9;
case 0x6ba0ff:c.instructions+=3;goto B6ba0ff;
case 0x6ba101:c.instructions+=2;goto B6ba101;
case 0x6ba107:c.instructions+=1;goto B6ba107;
case 0x6ba10c:goto L6ba10c;
case 0x6ba10d:c.instructions+=1;goto B6ba10d;
case 0x6ba10e:goto L6ba10e;
case 0x6ba110:c.instructions+=5;goto B6ba110;
case 0x6ba111:c.instructions+=4;goto B6ba111;
case 0x6ba113:c.instructions+=3;goto B6ba113;
case 0x6ba114:c.instructions+=2;goto B6ba114;
case 0x6ba116:c.instructions+=1;goto B6ba116;
case 0x6ba11b:goto L6ba11b;
case 0x6ba11f:c.instructions+=1;goto B6ba11f;
case 0x6ba121:goto L6ba121;
case 0x6ba122:c.instructions+=1;goto B6ba122;
case 0x6ba127:goto L6ba127;
case 0x6ba128:goto L6ba128;
case 0x6ba12a:c.instructions+=3;goto B6ba12a;
case 0x6ba12b:c.instructions+=2;goto B6ba12b;
case 0x6ba12c:c.instructions+=1;goto B6ba12c;
case 0x6ba12f:goto L6ba12f;
case 0x6ba131:c.instructions+=12;goto B6ba131;
case 0x6ba132:c.instructions+=11;goto B6ba132;
case 0x6ba134:c.instructions+=10;goto B6ba134;
case 0x6ba137:c.instructions+=9;goto B6ba137;
case 0x6ba138:c.instructions+=8;goto B6ba138;
case 0x6ba139:c.instructions+=7;goto B6ba139;
case 0x6ba13a:c.instructions+=6;goto B6ba13a;
case 0x6ba13c:c.instructions+=5;goto B6ba13c;
case 0x6ba13e:c.instructions+=4;goto B6ba13e;
case 0x6ba143:c.instructions+=3;goto B6ba143;
case 0x6ba148:c.instructions+=2;goto B6ba148;
case 0x6ba14a:c.instructions+=1;goto B6ba14a;
case 0x6ba14f:goto L6ba14f;
case 0x6ba151:c.instructions+=10;goto B6ba151;
case 0x6ba152:c.instructions+=9;goto B6ba152;
case 0x6ba153:c.instructions+=8;goto B6ba153;
case 0x6ba156:c.instructions+=7;goto B6ba156;
case 0x6ba158:c.instructions+=6;goto B6ba158;
case 0x6ba159:c.instructions+=5;goto B6ba159;
case 0x6ba15b:c.instructions+=4;goto B6ba15b;
case 0x6ba15c:c.instructions+=3;goto B6ba15c;
case 0x6ba15d:c.instructions+=2;goto B6ba15d;
case 0x6ba15f:c.instructions+=1;goto B6ba15f;
case 0x6ba164:goto L6ba164;
case 0x6ba166:c.instructions+=9;goto B6ba166;
case 0x6ba167:c.instructions+=8;goto B6ba167;
case 0x6ba168:c.instructions+=7;goto B6ba168;
case 0x6ba16b:c.instructions+=6;goto B6ba16b;
case 0x6ba16d:c.instructions+=5;goto B6ba16d;
case 0x6ba16e:c.instructions+=4;goto B6ba16e;
case 0x6ba16f:c.instructions+=3;goto B6ba16f;
case 0x6ba171:c.instructions+=2;goto B6ba171;
case 0x6ba177:c.instructions+=1;goto B6ba177;
case 0x6ba17c:goto L6ba17c;
case 0x6ba182:c.instructions+=5;goto B6ba182;
case 0x6ba188:c.instructions+=4;goto B6ba188;
case 0x6ba18d:c.instructions+=3;goto B6ba18d;
case 0x6ba192:c.instructions+=2;goto B6ba192;
case 0x6ba198:c.instructions+=1;goto B6ba198;
case 0x6ba19a:goto L6ba19a;
case 0x6ba19c:c.instructions+=2;goto B6ba19c;
case 0x6ba19f:c.instructions+=1;goto B6ba19f;
case 0x6ba1a1:goto L6ba1a1;
case 0x6ba1a4:c.instructions+=7;goto B6ba1a4;
case 0x6ba1aa:c.instructions+=6;goto B6ba1aa;
case 0x6ba1ad:c.instructions+=5;goto B6ba1ad;
case 0x6ba1b3:c.instructions+=4;goto B6ba1b3;
case 0x6ba1b5:c.instructions+=3;goto B6ba1b5;
case 0x6ba1ba:c.instructions+=2;goto B6ba1ba;
case 0x6ba1bf:c.instructions+=1;goto B6ba1bf;
case 0x6ba1c1:goto L6ba1c1;
case 0x6ba1c3:c.instructions+=1;goto B6ba1c3;
case 0x6ba1c8:goto L6ba1c8;
case 0x6ba1ca:c.instructions+=2;goto B6ba1ca;
case 0x6ba1cc:c.instructions+=1;goto B6ba1cc;
case 0x6ba1d2:goto L6ba1d2;
case 0x6ba1d4:goto L6ba1d4;
case 0x6ba1d5:c.instructions+=2;goto B6ba1d5;
case 0x6ba1d8:c.instructions+=1;goto B6ba1d8;
case 0x6ba1da:goto L6ba1da;
case 0x6ba1dc:c.instructions+=1;goto B6ba1dc;
case 0x6ba1e1:goto L6ba1e1;
case 0x6ba1e3:c.instructions+=1;goto B6ba1e3;
case 0x6ba1e8:goto L6ba1e8;
case 0x6ba1eb:c.instructions+=3;goto B6ba1eb;
case 0x6ba1ee:c.instructions+=2;goto B6ba1ee;
case 0x6ba1f1:c.instructions+=1;goto B6ba1f1;
case 0x6ba1f7:goto L6ba1f7;
case 0x6ba1fa:c.instructions+=6;goto B6ba1fa;
case 0x6ba1fd:c.instructions+=5;goto B6ba1fd;
case 0x6ba200:c.instructions+=4;goto B6ba200;
case 0x6ba206:c.instructions+=3;goto B6ba206;
case 0x6ba209:c.instructions+=2;goto B6ba209;
case 0x6ba20c:c.instructions+=1;goto B6ba20c;
case 0x6ba212:goto L6ba212;
case 0x6ba215:goto L6ba215;
case 0x6ba217:c.instructions+=8;goto B6ba217;
case 0x6ba21a:c.instructions+=7;goto B6ba21a;
case 0x6ba21d:c.instructions+=6;goto B6ba21d;
case 0x6ba220:c.instructions+=5;goto B6ba220;
case 0x6ba223:c.instructions+=4;goto B6ba223;
case 0x6ba226:c.instructions+=3;goto B6ba226;
case 0x6ba229:c.instructions+=2;goto B6ba229;
case 0x6ba22c:c.instructions+=1;goto B6ba22c;
case 0x6ba22e:goto L6ba22e;
case 0x6ba231:c.instructions+=1;goto B6ba231;
case 0x6ba233:goto L6ba233;
case 0x6ba237:c.instructions+=1;goto B6ba237;
case 0x6ba239:goto L6ba239;
case 0x6ba23d:c.instructions+=1;goto B6ba23d;
case 0x6ba23f:goto L6ba23f;
case 0x6ba241:c.instructions+=3;goto B6ba241;
case 0x6ba247:c.instructions+=2;goto B6ba247;
case 0x6ba24d:c.instructions+=1;goto B6ba24d;
case 0x6ba24f:goto L6ba24f;
case 0x6ba253:c.instructions+=1;goto B6ba253;
case 0x6ba255:goto L6ba255;
case 0x6ba258:c.instructions+=5;goto B6ba258;
case 0x6ba25e:c.instructions+=4;goto B6ba25e;
case 0x6ba261:c.instructions+=3;goto B6ba261;
case 0x6ba264:c.instructions+=2;goto B6ba264;
case 0x6ba267:c.instructions+=1;goto B6ba267;
case 0x6ba269:goto L6ba269;
case 0x6ba26b:goto L6ba26b;
case 0x6ba271:c.instructions+=8;goto B6ba271;
case 0x6ba277:c.instructions+=7;goto B6ba277;
case 0x6ba278:c.instructions+=6;goto B6ba278;
case 0x6ba27d:c.instructions+=5;goto B6ba27d;
case 0x6ba282:c.instructions+=4;goto B6ba282;
case 0x6ba285:c.instructions+=3;goto B6ba285;
case 0x6ba28c:c.instructions+=2;goto B6ba28c;
case 0x6ba28d:c.instructions+=1;goto B6ba28d;
case 0x6ba292:goto L6ba292;
case 0x6ba295:goto L6ba295;
case 0x6ba297:goto L6ba297;
case 0x6ba29d:c.instructions+=4;goto B6ba29d;
case 0x6ba29f:c.instructions+=3;goto B6ba29f;
case 0x6ba2a5:c.instructions+=2;goto B6ba2a5;
case 0x6ba2ab:c.instructions+=1;goto B6ba2ab;
case 0x6ba2ad:goto L6ba2ad;
case 0x6ba2b3:c.instructions+=1;goto B6ba2b3;
case 0x6ba2b5:goto L6ba2b5;
case 0x6ba2bb:c.instructions+=1;goto B6ba2bb;
case 0x6ba2bd:goto L6ba2bd;
case 0x6ba2c3:c.instructions+=1;goto B6ba2c3;
case 0x6ba2c5:goto L6ba2c5;
case 0x6ba2ca:c.instructions+=4;goto B6ba2ca;
case 0x6ba2cf:c.instructions+=3;goto B6ba2cf;
case 0x6ba2d2:c.instructions+=2;goto B6ba2d2;
case 0x6ba2d3:c.instructions+=1;goto B6ba2d3;
case 0x6ba2d8:goto L6ba2d8;
case 0x6ba2db:c.instructions+=1;goto B6ba2db;
case 0x6ba2e2:goto L6ba2e2;
case 0x6ba2e5:c.instructions+=3;goto B6ba2e5;
case 0x6ba2e8:c.instructions+=2;goto B6ba2e8;
case 0x6ba2eb:c.instructions+=1;goto B6ba2eb;
case 0x6ba2f1:goto L6ba2f1;
case 0x6ba2f4:c.instructions+=1;goto B6ba2f4;
case 0x6ba2f6:goto L6ba2f6;
case 0x6ba2fb:c.instructions+=1;goto B6ba2fb;
case 0x6ba300:goto L6ba300;
case 0x6ba302:c.instructions+=4;goto B6ba302;
case 0x6ba305:c.instructions+=3;goto B6ba305;
case 0x6ba307:c.instructions+=2;goto B6ba307;
case 0x6ba308:c.instructions+=1;goto B6ba308;
case 0x6ba30a:goto L6ba30a;
case 0x6ba30d:c.instructions+=7;goto B6ba30d;
case 0x6ba310:c.instructions+=6;goto B6ba310;
case 0x6ba314:c.instructions+=5;goto B6ba314;
case 0x6ba317:c.instructions+=4;goto B6ba317;
case 0x6ba31a:c.instructions+=3;goto B6ba31a;
case 0x6ba31d:c.instructions+=2;goto B6ba31d;
case 0x6ba323:c.instructions+=1;goto B6ba323;
case 0x6ba325:goto L6ba325;
case 0x6ba329:c.instructions+=1;goto B6ba329;
case 0x6ba32b:goto L6ba32b;
case 0x6ba32d:goto L6ba32d;
case 0x6ba333:c.instructions+=3;goto B6ba333;
case 0x6ba338:c.instructions+=2;goto B6ba338;
case 0x6ba33d:c.instructions+=1;goto B6ba33d;
case 0x6ba33f:goto L6ba33f;
case 0x6ba342:c.instructions+=3;goto B6ba342;
case 0x6ba345:c.instructions+=2;goto B6ba345;
case 0x6ba349:c.instructions+=1;goto B6ba349;
case 0x6ba34b:goto L6ba34b;
case 0x6ba34d:goto L6ba34d;
case 0x6ba34e:c.instructions+=2;goto B6ba34e;
case 0x6ba351:c.instructions+=1;goto B6ba351;
case 0x6ba353:goto L6ba353;
case 0x6ba355:c.instructions+=2;goto B6ba355;
case 0x6ba358:c.instructions+=1;goto B6ba358;
case 0x6ba35a:goto L6ba35a;
case 0x6ba35d:c.instructions+=7;goto B6ba35d;
case 0x6ba363:c.instructions+=6;goto B6ba363;
case 0x6ba366:c.instructions+=5;goto B6ba366;
case 0x6ba36c:c.instructions+=4;goto B6ba36c;
case 0x6ba36e:c.instructions+=3;goto B6ba36e;
case 0x6ba374:c.instructions+=2;goto B6ba374;
case 0x6ba37a:c.instructions+=1;goto B6ba37a;
case 0x6ba37c:goto L6ba37c;
case 0x6ba382:c.instructions+=1;goto B6ba382;
case 0x6ba384:goto L6ba384;
case 0x6ba38a:c.instructions+=1;goto B6ba38a;
case 0x6ba38c:goto L6ba38c;
case 0x6ba392:c.instructions+=1;goto B6ba392;
case 0x6ba394:goto L6ba394;
case 0x6ba396:c.instructions+=2;goto B6ba396;
case 0x6ba399:c.instructions+=1;goto B6ba399;
case 0x6ba39b:goto L6ba39b;
case 0x6ba3a1:c.instructions+=9;goto B6ba3a1;
case 0x6ba3a4:c.instructions+=8;goto B6ba3a4;
case 0x6ba3a7:c.instructions+=7;goto B6ba3a7;
case 0x6ba3aa:c.instructions+=6;goto B6ba3aa;
case 0x6ba3ad:c.instructions+=5;goto B6ba3ad;
case 0x6ba3b3:c.instructions+=4;goto B6ba3b3;
case 0x6ba3b9:c.instructions+=3;goto B6ba3b9;
case 0x6ba3ba:c.instructions+=2;goto B6ba3ba;
case 0x6ba3bd:c.instructions+=1;goto B6ba3bd;
case 0x6ba3bf:goto L6ba3bf;
case 0x6ba3c5:c.instructions+=4;goto B6ba3c5;
case 0x6ba3c6:c.instructions+=3;goto B6ba3c6;
case 0x6ba3c9:c.instructions+=2;goto B6ba3c9;
case 0x6ba3cc:c.instructions+=1;goto B6ba3cc;
case 0x6ba3ce:goto L6ba3ce;
case 0x6ba3d0:c.instructions+=2;goto B6ba3d0;
case 0x6ba3d3:c.instructions+=1;goto B6ba3d3;
case 0x6ba3d5:goto L6ba3d5;
case 0x6ba3d8:c.instructions+=7;goto B6ba3d8;
case 0x6ba3de:c.instructions+=6;goto B6ba3de;
case 0x6ba3e1:c.instructions+=5;goto B6ba3e1;
case 0x6ba3e7:c.instructions+=4;goto B6ba3e7;
case 0x6ba3e9:c.instructions+=3;goto B6ba3e9;
case 0x6ba3ee:c.instructions+=2;goto B6ba3ee;
case 0x6ba3f3:c.instructions+=1;goto B6ba3f3;
case 0x6ba3f5:goto L6ba3f5;
case 0x6ba3fa:c.instructions+=1;goto B6ba3fa;
case 0x6ba3fc:goto L6ba3fc;
case 0x6ba401:c.instructions+=1;goto B6ba401;
case 0x6ba403:goto L6ba403;
case 0x6ba405:c.instructions+=1;goto B6ba405;
case 0x6ba40a:goto L6ba40a;
case 0x6ba40c:c.instructions+=2;goto B6ba40c;
case 0x6ba40e:c.instructions+=1;goto B6ba40e;
case 0x6ba414:goto L6ba414;
case 0x6ba416:goto L6ba416;
case 0x6ba417:c.instructions+=2;goto B6ba417;
case 0x6ba41a:c.instructions+=1;goto B6ba41a;
case 0x6ba41c:goto L6ba41c;
case 0x6ba41e:c.instructions+=2;goto B6ba41e;
case 0x6ba421:c.instructions+=1;goto B6ba421;
case 0x6ba423:goto L6ba423;
case 0x6ba426:c.instructions+=7;goto B6ba426;
case 0x6ba42c:c.instructions+=6;goto B6ba42c;
case 0x6ba42f:c.instructions+=5;goto B6ba42f;
case 0x6ba435:c.instructions+=4;goto B6ba435;
case 0x6ba437:c.instructions+=3;goto B6ba437;
case 0x6ba43c:c.instructions+=2;goto B6ba43c;
case 0x6ba441:c.instructions+=1;goto B6ba441;
case 0x6ba443:goto L6ba443;
case 0x6ba448:c.instructions+=1;goto B6ba448;
case 0x6ba44a:goto L6ba44a;
case 0x6ba44c:c.instructions+=1;goto B6ba44c;
case 0x6ba451:goto L6ba451;
case 0x6ba453:goto L6ba453;
case 0x6ba455:c.instructions+=1;goto B6ba455;
case 0x6ba45a:goto L6ba45a;
case 0x6ba45c:c.instructions+=2;goto B6ba45c;
case 0x6ba45e:c.instructions+=1;goto B6ba45e;
case 0x6ba464:goto L6ba464;
case 0x6ba466:goto L6ba466;
case 0x6ba467:c.instructions+=2;goto B6ba467;
case 0x6ba46a:c.instructions+=1;goto B6ba46a;
case 0x6ba46c:goto L6ba46c;
case 0x6ba46e:c.instructions+=1;goto B6ba46e;
case 0x6ba473:goto L6ba473;
case 0x6ba475:c.instructions+=2;goto B6ba475;
case 0x6ba478:c.instructions+=1;goto B6ba478;
case 0x6ba47e:goto L6ba47e;
case 0x6ba481:c.instructions+=7;goto B6ba481;
case 0x6ba487:c.instructions+=6;goto B6ba487;
case 0x6ba48a:c.instructions+=5;goto B6ba48a;
case 0x6ba490:c.instructions+=4;goto B6ba490;
case 0x6ba492:c.instructions+=3;goto B6ba492;
case 0x6ba497:c.instructions+=2;goto B6ba497;
case 0x6ba49c:c.instructions+=1;goto B6ba49c;
case 0x6ba49e:goto L6ba49e;
case 0x6ba4a3:c.instructions+=1;goto B6ba4a3;
case 0x6ba4a5:goto L6ba4a5;
case 0x6ba4aa:c.instructions+=1;goto B6ba4aa;
case 0x6ba4ac:goto L6ba4ac;
case 0x6ba4b1:c.instructions+=1;goto B6ba4b1;
case 0x6ba4b3:goto L6ba4b3;
case 0x6ba4b5:c.instructions+=1;goto B6ba4b5;
case 0x6ba4ba:goto L6ba4ba;
case 0x6ba4bc:goto L6ba4bc;
case 0x6ba4be:c.instructions+=1;goto B6ba4be;
case 0x6ba4c3:goto L6ba4c3;
case 0x6ba4c5:goto L6ba4c5;
case 0x6ba4c7:c.instructions+=1;goto B6ba4c7;
case 0x6ba4cc:goto L6ba4cc;
case 0x6ba4ce:c.instructions+=1;goto B6ba4ce;
case 0x6ba4d3:goto L6ba4d3;
case 0x6ba4d5:c.instructions+=2;goto B6ba4d5;
case 0x6ba4d7:c.instructions+=1;goto B6ba4d7;
case 0x6ba4dc:goto L6ba4dc;
case 0x6ba4de:c.instructions+=1;goto B6ba4de;
case 0x6ba4e3:goto L6ba4e3;
case 0x6ba4e5:goto L6ba4e5;
case 0x6ba4e7:c.instructions+=2;goto B6ba4e7;
case 0x6ba4e9:c.instructions+=1;goto B6ba4e9;
case 0x6ba4ee:goto L6ba4ee;
case 0x6ba4f0:c.instructions+=1;goto B6ba4f0;
case 0x6ba4f5:goto L6ba4f5;
case 0x6ba4f7:c.instructions+=2;goto B6ba4f7;
case 0x6ba4f9:c.instructions+=1;goto B6ba4f9;
case 0x6ba4ff:goto L6ba4ff;
case 0x6ba500:c.instructions+=2;goto B6ba500;
case 0x6ba503:c.instructions+=1;goto B6ba503;
case 0x6ba509:goto L6ba509;
case 0x6ba50b:c.instructions+=1;goto B6ba50b;
case 0x6ba510:goto L6ba510;
case 0x6ba512:c.instructions+=2;goto B6ba512;
case 0x6ba515:c.instructions+=1;goto B6ba515;
case 0x6ba517:goto L6ba517;
case 0x6ba51a:c.instructions+=7;goto B6ba51a;
case 0x6ba520:c.instructions+=6;goto B6ba520;
case 0x6ba523:c.instructions+=5;goto B6ba523;
case 0x6ba529:c.instructions+=4;goto B6ba529;
case 0x6ba52b:c.instructions+=3;goto B6ba52b;
case 0x6ba530:c.instructions+=2;goto B6ba530;
case 0x6ba535:c.instructions+=1;goto B6ba535;
case 0x6ba537:goto L6ba537;
case 0x6ba53c:c.instructions+=1;goto B6ba53c;
case 0x6ba53e:goto L6ba53e;
case 0x6ba540:c.instructions+=1;goto B6ba540;
case 0x6ba545:goto L6ba545;
case 0x6ba547:c.instructions+=2;goto B6ba547;
case 0x6ba549:c.instructions+=1;goto B6ba549;
case 0x6ba54f:goto L6ba54f;
case 0x6ba550:c.instructions+=2;goto B6ba550;
case 0x6ba553:c.instructions+=1;goto B6ba553;
case 0x6ba555:goto L6ba555;
case 0x6ba557:c.instructions+=1;goto B6ba557;
case 0x6ba55c:goto L6ba55c;
case 0x6ba55e:c.instructions+=2;goto B6ba55e;
case 0x6ba561:c.instructions+=1;goto B6ba561;
case 0x6ba563:goto L6ba563;
case 0x6ba566:c.instructions+=7;goto B6ba566;
case 0x6ba56c:c.instructions+=6;goto B6ba56c;
case 0x6ba56f:c.instructions+=5;goto B6ba56f;
case 0x6ba575:c.instructions+=4;goto B6ba575;
case 0x6ba577:c.instructions+=3;goto B6ba577;
case 0x6ba57c:c.instructions+=2;goto B6ba57c;
case 0x6ba581:c.instructions+=1;goto B6ba581;
case 0x6ba583:goto L6ba583;
case 0x6ba585:c.instructions+=2;goto B6ba585;
case 0x6ba587:c.instructions+=1;goto B6ba587;
case 0x6ba58c:goto L6ba58c;
case 0x6ba58e:c.instructions+=2;goto B6ba58e;
case 0x6ba590:c.instructions+=1;goto B6ba590;
case 0x6ba596:goto L6ba596;
case 0x6ba598:c.instructions+=2;goto B6ba598;
case 0x6ba59a:c.instructions+=1;goto B6ba59a;
case 0x6ba59f:goto L6ba59f;
case 0x6ba5a1:c.instructions+=2;goto B6ba5a1;
case 0x6ba5a3:c.instructions+=1;goto B6ba5a3;
case 0x6ba5a9:goto L6ba5a9;
case 0x6ba5aa:c.instructions+=2;goto B6ba5aa;
case 0x6ba5ad:c.instructions+=1;goto B6ba5ad;
case 0x6ba5af:goto L6ba5af;
case 0x6ba5b1:c.instructions+=1;goto B6ba5b1;
case 0x6ba5b6:goto L6ba5b6;
case 0x6ba5b8:c.instructions+=2;goto B6ba5b8;
case 0x6ba5bb:c.instructions+=1;goto B6ba5bb;
case 0x6ba5bd:goto L6ba5bd;
case 0x6ba5c0:c.instructions+=7;goto B6ba5c0;
case 0x6ba5c6:c.instructions+=6;goto B6ba5c6;
case 0x6ba5c9:c.instructions+=5;goto B6ba5c9;
case 0x6ba5cf:c.instructions+=4;goto B6ba5cf;
case 0x6ba5d1:c.instructions+=3;goto B6ba5d1;
case 0x6ba5d6:c.instructions+=2;goto B6ba5d6;
case 0x6ba5db:c.instructions+=1;goto B6ba5db;
case 0x6ba5dd:goto L6ba5dd;
case 0x6ba5df:c.instructions+=1;goto B6ba5df;
case 0x6ba5e4:goto L6ba5e4;
case 0x6ba5e6:c.instructions+=2;goto B6ba5e6;
case 0x6ba5e8:c.instructions+=1;goto B6ba5e8;
case 0x6ba5ee:goto L6ba5ee;
case 0x6ba5ef:c.instructions+=2;goto B6ba5ef;
case 0x6ba5f2:c.instructions+=1;goto B6ba5f2;
case 0x6ba5f4:goto L6ba5f4;
case 0x6ba5f6:c.instructions+=1;goto B6ba5f6;
case 0x6ba5fb:goto L6ba5fb;
case 0x6ba5fd:c.instructions+=2;goto B6ba5fd;
case 0x6ba600:c.instructions+=1;goto B6ba600;
case 0x6ba602:goto L6ba602;
case 0x6ba605:c.instructions+=7;goto B6ba605;
case 0x6ba60b:c.instructions+=6;goto B6ba60b;
case 0x6ba60e:c.instructions+=5;goto B6ba60e;
case 0x6ba614:c.instructions+=4;goto B6ba614;
case 0x6ba616:c.instructions+=3;goto B6ba616;
case 0x6ba61b:c.instructions+=2;goto B6ba61b;
case 0x6ba620:c.instructions+=1;goto B6ba620;
case 0x6ba622:goto L6ba622;
case 0x6ba624:c.instructions+=1;goto B6ba624;
case 0x6ba629:goto L6ba629;
case 0x6ba62b:c.instructions+=2;goto B6ba62b;
case 0x6ba62d:c.instructions+=1;goto B6ba62d;
case 0x6ba632:goto L6ba632;
case 0x6ba634:c.instructions+=2;goto B6ba634;
case 0x6ba636:c.instructions+=1;goto B6ba636;
case 0x6ba63c:goto L6ba63c;
case 0x6ba63d:c.instructions+=2;goto B6ba63d;
case 0x6ba640:c.instructions+=1;goto B6ba640;
case 0x6ba642:goto L6ba642;
case 0x6ba645:c.instructions+=4;goto B6ba645;
case 0x6ba647:c.instructions+=3;goto B6ba647;
case 0x6ba649:c.instructions+=2;goto B6ba649;
case 0x6ba64c:c.instructions+=1;goto B6ba64c;
case 0x6ba64e:goto L6ba64e;
case 0x6ba651:c.instructions+=5;goto B6ba651;
case 0x6ba657:c.instructions+=4;goto B6ba657;
case 0x6ba65a:c.instructions+=3;goto B6ba65a;
case 0x6ba65c:c.instructions+=2;goto B6ba65c;
case 0x6ba662:c.instructions+=1;goto B6ba662;
case 0x6ba667:goto L6ba667;
case 0x6ba669:c.instructions+=2;goto B6ba669;
case 0x6ba66b:c.instructions+=1;goto B6ba66b;
case 0x6ba671:goto L6ba671;
case 0x6ba672:c.instructions+=2;goto B6ba672;
case 0x6ba675:c.instructions+=1;goto B6ba675;
case 0x6ba677:goto L6ba677;
case 0x6ba679:c.instructions+=1;goto B6ba679;
case 0x6ba67e:goto L6ba67e;
case 0x6ba680:c.instructions+=1;goto B6ba680;
case 0x6ba685:goto L6ba685;
case 0x6ba687:c.instructions+=3;goto B6ba687;
case 0x6ba689:c.instructions+=2;goto B6ba689;
case 0x6ba68b:c.instructions+=1;goto B6ba68b;
case 0x6ba691:goto L6ba691;
case 0x6ba693:c.instructions+=1;goto B6ba693;
case 0x6ba698:goto L6ba698;
case 0x6ba69a:c.instructions+=2;goto B6ba69a;
case 0x6ba69c:c.instructions+=1;goto B6ba69c;
case 0x6ba6a2:goto L6ba6a2;
case 0x6ba6a4:c.instructions+=1;goto B6ba6a4;
case 0x6ba6a9:goto L6ba6a9;
case 0x6ba6ab:c.instructions+=2;goto B6ba6ab;
case 0x6ba6ad:c.instructions+=1;goto B6ba6ad;
case 0x6ba6b3:goto L6ba6b3;
case 0x6ba6b9:c.instructions+=4;goto B6ba6b9;
case 0x6ba6bb:c.instructions+=3;goto B6ba6bb;
case 0x6ba6c1:c.instructions+=2;goto B6ba6c1;
case 0x6ba6c7:c.instructions+=1;goto B6ba6c7;
case 0x6ba6cd:goto L6ba6cd;
case 0x6ba6d2:c.instructions+=2;goto B6ba6d2;
case 0x6ba6d3:c.instructions+=1;goto B6ba6d3;
case 0x6ba6d8:goto L6ba6d8;
case 0x6ba6da:c.instructions+=3;goto B6ba6da;
case 0x6ba6db:c.instructions+=2;goto B6ba6db;
case 0x6ba6e1:c.instructions+=1;goto B6ba6e1;
case 0x6ba6e3:goto L6ba6e3;
case 0x6ba6e4:c.instructions+=1;goto B6ba6e4;
case 0x6ba6e9:goto L6ba6e9;
case 0x6ba6eb:c.instructions+=3;goto B6ba6eb;
case 0x6ba6ec:c.instructions+=2;goto B6ba6ec;
case 0x6ba6f2:c.instructions+=1;goto B6ba6f2;
case 0x6ba6f4:goto L6ba6f4;
case 0x6ba6f9:c.instructions+=1;goto B6ba6f9;
case 0x6ba6fe:goto L6ba6fe;
case 0x6ba704:c.instructions+=5;goto B6ba704;
case 0x6ba709:c.instructions+=4;goto B6ba709;
case 0x6ba70b:c.instructions+=3;goto B6ba70b;
case 0x6ba711:c.instructions+=2;goto B6ba711;
case 0x6ba717:c.instructions+=1;goto B6ba717;
case 0x6ba719:goto L6ba719;
case 0x6ba71b:goto L6ba71b;
case 0x6ba721:c.instructions+=1;goto B6ba721;
case 0x6ba723:goto L6ba723;
case 0x6ba725:goto L6ba725;
case 0x6ba727:c.instructions+=1;goto B6ba727;
case 0x6ba72c:goto L6ba72c;
case 0x6ba72e:c.instructions+=2;goto B6ba72e;
case 0x6ba730:c.instructions+=1;goto B6ba730;
case 0x6ba736:goto L6ba736;
case 0x6ba738:c.instructions+=1;goto B6ba738;
case 0x6ba73d:goto L6ba73d;
case 0x6ba73f:c.instructions+=2;goto B6ba73f;
case 0x6ba741:c.instructions+=1;goto B6ba741;
case 0x6ba747:goto L6ba747;
case 0x6ba749:c.instructions+=1;goto B6ba749;
case 0x6ba74e:goto L6ba74e;
case 0x6ba750:c.instructions+=1;goto B6ba750;
case 0x6ba756:goto L6ba756;
case 0x6ba758:c.instructions+=1;goto B6ba758;
case 0x6ba75d:goto L6ba75d;
case 0x6ba760:c.instructions+=2;goto B6ba760;
case 0x6ba763:c.instructions+=1;goto B6ba763;
case 0x6ba765:goto L6ba765;
case 0x6ba76a:goto L6ba76a;
case 0x6ba76f:c.instructions+=4;goto B6ba76f;
case 0x6ba770:c.instructions+=3;goto B6ba770;
case 0x6ba771:c.instructions+=2;goto B6ba771;
case 0x6ba776:c.instructions+=1;goto B6ba776;
case 0x6ba77b:goto L6ba77b;
case 0x6ba77e:c.instructions+=1;goto B6ba77e;
case 0x6ba783:goto L6ba783;
case 0x6ba785:c.instructions+=1;goto B6ba785;
case 0x6ba78a:goto L6ba78a;
case 0x6ba78d:c.instructions+=1;goto B6ba78d;
case 0x6ba793:goto L6ba793;
case 0x6ba794:c.instructions+=8;goto B6ba794;
case 0x6ba796:c.instructions+=7;goto B6ba796;
case 0x6ba797:c.instructions+=6;goto B6ba797;
case 0x6ba79a:c.instructions+=5;goto B6ba79a;
case 0x6ba79b:c.instructions+=4;goto B6ba79b;
case 0x6ba79c:c.instructions+=3;goto B6ba79c;
case 0x6ba7a2:c.instructions+=2;goto B6ba7a2;
case 0x6ba7a4:c.instructions+=1;goto B6ba7a4;
case 0x6ba7a9:goto L6ba7a9;
case 0x6ba7ac:c.instructions+=2;goto B6ba7ac;
case 0x6ba7ae:c.instructions+=1;goto B6ba7ae;
case 0x6ba7b4:goto L6ba7b4;
case 0x6ba7b7:c.instructions+=6;goto B6ba7b7;
case 0x6ba7ba:c.instructions+=5;goto B6ba7ba;
case 0x6ba7bd:c.instructions+=4;goto B6ba7bd;
case 0x6ba7c0:c.instructions+=3;goto B6ba7c0;
case 0x6ba7c4:c.instructions+=2;goto B6ba7c4;
case 0x6ba7c7:c.instructions+=1;goto B6ba7c7;
case 0x6ba7c9:goto L6ba7c9;
case 0x6ba7cd:c.instructions+=6;goto B6ba7cd;
case 0x6ba7d1:c.instructions+=5;goto B6ba7d1;
case 0x6ba7d3:c.instructions+=4;goto B6ba7d3;
case 0x6ba7d5:c.instructions+=3;goto B6ba7d5;
case 0x6ba7d8:c.instructions+=2;goto B6ba7d8;
case 0x6ba7de:c.instructions+=1;goto B6ba7de;
case 0x6ba7df:goto L6ba7df;
case 0x6ba7e1:goto L6ba7e1;
case 0x6ba7e4:c.instructions+=1;goto B6ba7e4;
case 0x6ba7ea:goto L6ba7ea;
case 0x6ba7f0:c.instructions+=3;goto B6ba7f0;
case 0x6ba7f5:c.instructions+=2;goto B6ba7f5;
case 0x6ba7f7:c.instructions+=1;goto B6ba7f7;
case 0x6ba7f9:goto L6ba7f9;
case 0x6ba7fb:goto L6ba7fb;
case 0x6ba801:c.instructions+=1;goto B6ba801;
case 0x6ba803:goto L6ba803;
case 0x6ba805:goto L6ba805;
case 0x6ba807:c.instructions+=5;goto B6ba807;
case 0x6ba80a:c.instructions+=4;goto B6ba80a;
case 0x6ba80c:c.instructions+=3;goto B6ba80c;
case 0x6ba812:c.instructions+=2;goto B6ba812;
case 0x6ba818:c.instructions+=1;goto B6ba818;
case 0x6ba81d:goto L6ba81d;
case 0x6ba81f:c.instructions+=1;goto B6ba81f;
case 0x6ba825:goto L6ba825;
case 0x6ba827:c.instructions+=3;goto B6ba827;
case 0x6ba82d:c.instructions+=2;goto B6ba82d;
case 0x6ba833:c.instructions+=1;goto B6ba833;
case 0x6ba838:goto L6ba838;
case 0x6ba83b:c.instructions+=6;goto B6ba83b;
case 0x6ba83c:c.instructions+=5;goto B6ba83c;
case 0x6ba842:c.instructions+=4;goto B6ba842;
case 0x6ba844:c.instructions+=3;goto B6ba844;
case 0x6ba846:c.instructions+=2;goto B6ba846;
case 0x6ba84c:c.instructions+=1;goto B6ba84c;
case 0x6ba851:goto L6ba851;
case 0x6ba854:c.instructions+=6;goto B6ba854;
case 0x6ba855:c.instructions+=5;goto B6ba855;
case 0x6ba85b:c.instructions+=4;goto B6ba85b;
case 0x6ba85d:c.instructions+=3;goto B6ba85d;
case 0x6ba85f:c.instructions+=2;goto B6ba85f;
case 0x6ba865:c.instructions+=1;goto B6ba865;
case 0x6ba86a:goto L6ba86a;
case 0x6ba870:c.instructions+=1;goto B6ba870;
case 0x6ba877:goto L6ba877;
case 0x6ba879:c.instructions+=2;goto B6ba879;
case 0x6ba87b:c.instructions+=1;goto B6ba87b;
case 0x6ba87d:goto L6ba87d;
case 0x6ba87f:c.instructions+=1;goto B6ba87f;
case 0x6ba884:goto L6ba884;
case 0x6ba886:c.instructions+=3;goto B6ba886;
case 0x6ba889:c.instructions+=2;goto B6ba889;
case 0x6ba88c:c.instructions+=1;goto B6ba88c;
case 0x6ba88e:goto L6ba88e;
case 0x6ba890:c.instructions+=1;goto B6ba890;
case 0x6ba895:goto L6ba895;
case 0x6ba897:c.instructions+=2;goto B6ba897;
case 0x6ba899:c.instructions+=1;goto B6ba899;
case 0x6ba89f:goto L6ba89f;
case 0x6ba8a2:c.instructions+=1;goto B6ba8a2;
case 0x6ba8a8:goto L6ba8a8;
case 0x6ba8a9:c.instructions+=2;goto B6ba8a9;
case 0x6ba8ab:c.instructions+=1;goto B6ba8ab;
case 0x6ba8b0:goto L6ba8b0;
case 0x6ba8b2:c.instructions+=1;goto B6ba8b2;
case 0x6ba8b8:goto L6ba8b8;
case 0x6ba8ba:c.instructions+=3;goto B6ba8ba;
case 0x6ba8bc:c.instructions+=2;goto B6ba8bc;
case 0x6ba8be:c.instructions+=1;goto B6ba8be;
case 0x6ba8c3:goto L6ba8c3;
case 0x6ba8c5:c.instructions+=1;goto B6ba8c5;
case 0x6ba8cb:goto L6ba8cb;
case 0x6ba8ce:c.instructions+=6;goto B6ba8ce;
case 0x6ba8cf:c.instructions+=5;goto B6ba8cf;
case 0x6ba8d5:c.instructions+=4;goto B6ba8d5;
case 0x6ba8d7:c.instructions+=3;goto B6ba8d7;
case 0x6ba8d9:c.instructions+=2;goto B6ba8d9;
case 0x6ba8df:c.instructions+=1;goto B6ba8df;
case 0x6ba8e4:goto L6ba8e4;
case 0x6ba8e7:c.instructions+=6;goto B6ba8e7;
case 0x6ba8e8:c.instructions+=5;goto B6ba8e8;
case 0x6ba8ee:c.instructions+=4;goto B6ba8ee;
case 0x6ba8f0:c.instructions+=3;goto B6ba8f0;
case 0x6ba8f2:c.instructions+=2;goto B6ba8f2;
case 0x6ba8f8:c.instructions+=1;goto B6ba8f8;
case 0x6ba8fd:goto L6ba8fd;
case 0x6ba903:c.instructions+=5;goto B6ba903;
case 0x6ba909:c.instructions+=4;goto B6ba909;
case 0x6ba90b:c.instructions+=3;goto B6ba90b;
case 0x6ba90e:c.instructions+=2;goto B6ba90e;
case 0x6ba910:c.instructions+=1;goto B6ba910;
case 0x6ba917:goto L6ba917;
case 0x6ba91a:c.instructions+=1;goto B6ba91a;
case 0x6ba91c:goto L6ba91c;
case 0x6ba91d:goto L6ba91d;
case 0x6ba91f:c.instructions+=1;goto B6ba91f;
case 0x6ba921:goto L6ba921;
case 0x6ba924:goto L6ba924;
case 0x6ba927:c.instructions+=2;goto B6ba927;
case 0x6ba92a:c.instructions+=1;goto B6ba92a;
case 0x6ba92c:goto L6ba92c;
case 0x6ba92f:c.instructions+=4;goto B6ba92f;
case 0x6ba932:c.instructions+=3;goto B6ba932;
case 0x6ba934:c.instructions+=2;goto B6ba934;
case 0x6ba937:c.instructions+=1;goto B6ba937;
case 0x6ba939:goto L6ba939;
case 0x6ba93c:goto L6ba93c;
case 0x6ba93f:c.instructions+=4;goto B6ba93f;
case 0x6ba942:c.instructions+=3;goto B6ba942;
case 0x6ba944:c.instructions+=2;goto B6ba944;
case 0x6ba947:c.instructions+=1;goto B6ba947;
case 0x6ba949:goto L6ba949;
case 0x6ba94b:goto L6ba94b;
case 0x6ba94e:c.instructions+=7;goto B6ba94e;
case 0x6ba950:c.instructions+=6;goto B6ba950;
case 0x6ba952:c.instructions+=5;goto B6ba952;
case 0x6ba955:c.instructions+=4;goto B6ba955;
case 0x6ba957:c.instructions+=3;goto B6ba957;
case 0x6ba95a:c.instructions+=2;goto B6ba95a;
case 0x6ba95d:c.instructions+=1;goto B6ba95d;
case 0x6ba95f:goto L6ba95f;
case 0x6ba962:goto L6ba962;
case 0x6ba966:c.instructions+=1;goto B6ba966;
case 0x6ba968:goto L6ba968;
case 0x6ba96b:goto L6ba96b;
case 0x6ba96e:c.instructions+=1;goto B6ba96e;
case 0x6ba970:goto L6ba970;
case 0x6ba973:c.instructions+=2;goto B6ba973;
case 0x6ba976:c.instructions+=1;goto B6ba976;
case 0x6ba979:goto L6ba979;
case 0x6ba97f:goto L6ba97f;
case 0x6ba982:c.instructions+=3;goto B6ba982;
case 0x6ba985:c.instructions+=2;goto B6ba985;
case 0x6ba988:c.instructions+=1;goto B6ba988;
case 0x6ba98e:goto L6ba98e;
case 0x6ba994:c.instructions+=3;goto B6ba994;
case 0x6ba999:c.instructions+=2;goto B6ba999;
case 0x6ba99b:c.instructions+=1;goto B6ba99b;
case 0x6ba99d:goto L6ba99d;
case 0x6ba99f:goto L6ba99f;
case 0x6ba9a5:c.instructions+=1;goto B6ba9a5;
case 0x6ba9a7:goto L6ba9a7;
case 0x6ba9a9:goto L6ba9a9;
case 0x6ba9af:c.instructions+=3;goto B6ba9af;
case 0x6ba9b5:c.instructions+=2;goto B6ba9b5;
case 0x6ba9bb:c.instructions+=1;goto B6ba9bb;
case 0x6ba9c2:goto L6ba9c2;
case 0x6ba9c4:c.instructions+=2;goto B6ba9c4;
case 0x6ba9c6:c.instructions+=1;goto B6ba9c6;
case 0x6ba9c8:goto L6ba9c8;
case 0x6ba9ca:c.instructions+=1;goto B6ba9ca;
case 0x6ba9cf:goto L6ba9cf;
case 0x6ba9d1:c.instructions+=3;goto B6ba9d1;
case 0x6ba9d4:c.instructions+=2;goto B6ba9d4;
case 0x6ba9d7:c.instructions+=1;goto B6ba9d7;
case 0x6ba9d9:goto L6ba9d9;
case 0x6ba9dd:c.instructions+=1;goto B6ba9dd;
case 0x6ba9df:goto L6ba9df;
case 0x6ba9e4:c.instructions+=1;goto B6ba9e4;
case 0x6ba9e9:goto L6ba9e9;
case 0x6ba9ee:c.instructions+=1;goto B6ba9ee;
case 0x6ba9f3:goto L6ba9f3;
case 0x6ba9f4:c.instructions+=3;goto B6ba9f4;
case 0x6ba9f7:c.instructions+=2;goto B6ba9f7;
case 0x6ba9f9:c.instructions+=1;goto B6ba9f9;
case 0x6ba9fe:goto L6ba9fe;
case 0x6baa00:c.instructions+=1;goto B6baa00;
case 0x6baa05:goto L6baa05;
case 0x6baa07:c.instructions+=1;goto B6baa07;
case 0x6baa0c:goto L6baa0c;
case 0x6baa0d:c.instructions+=2;goto B6baa0d;
case 0x6baa0f:c.instructions+=1;goto B6baa0f;
case 0x6baa14:goto L6baa14;
case 0x6baa16:c.instructions+=2;goto B6baa16;
case 0x6baa18:c.instructions+=1;goto B6baa18;
case 0x6baa1e:goto L6baa1e;
case 0x6baa1f:c.instructions+=3;goto B6baa1f;
case 0x6baa20:c.instructions+=2;goto B6baa20;
case 0x6baa22:c.instructions+=1;goto B6baa22;
case 0x6baa27:goto L6baa27;
case 0x6baa29:c.instructions+=2;goto B6baa29;
case 0x6baa2b:c.instructions+=1;goto B6baa2b;
case 0x6baa31:goto L6baa31;
case 0x6baa37:c.instructions+=1;goto B6baa37;
case 0x6baa39:goto L6baa39;
case 0x6baa3b:c.instructions+=1;goto B6baa3b;
case 0x6baa3d:goto L6baa3d;
case 0x6baa3e:c.instructions+=3;goto B6baa3e;
case 0x6baa41:c.instructions+=2;goto B6baa41;
case 0x6baa44:c.instructions+=1;goto B6baa44;
case 0x6baa46:goto L6baa46;
case 0x6baa4d:c.instructions+=1;goto B6baa4d;
case 0x6baa53:goto L6baa53;
case 0x6baa56:c.instructions+=1;goto B6baa56;
case 0x6baa5c:goto L6baa5c;
case 0x6baa62:c.instructions+=1;goto B6baa62;
case 0x6baa67:goto L6baa67;
case 0x6baa6e:c.instructions+=1;goto B6baa6e;
case 0x6baa70:goto L6baa70;
case 0x6baa75:c.instructions+=6;goto B6baa75;
case 0x6baa76:c.instructions+=5;goto B6baa76;
case 0x6baa7b:c.instructions+=4;goto B6baa7b;
case 0x6baa80:c.instructions+=3;goto B6baa80;
case 0x6baa81:c.instructions+=2;goto B6baa81;
case 0x6baa82:c.instructions+=1;goto B6baa82;
case 0x6baa87:goto L6baa87;
case 0x6baa8a:c.instructions+=1;goto B6baa8a;
case 0x6baa8f:goto L6baa8f;
case 0x6baa91:c.instructions+=1;goto B6baa91;
case 0x6baa96:goto L6baa96;
case 0x6baa98:c.instructions+=2;goto B6baa98;
case 0x6baa9a:c.instructions+=1;goto B6baa9a;
case 0x6baaa0:goto L6baaa0;
case 0x6baaa6:c.instructions+=1;goto B6baaa6;
case 0x6baaa8:goto L6baaa8;
case 0x6baaaa:c.instructions+=1;goto B6baaaa;
case 0x6baaaf:goto L6baaaf;
case 0x6baab1:c.instructions+=2;goto B6baab1;
case 0x6baab3:c.instructions+=1;goto B6baab3;
case 0x6baab9:goto L6baab9;
case 0x6baabf:c.instructions+=1;goto B6baabf;
case 0x6baac1:goto L6baac1;
case 0x6baac7:c.instructions+=3;goto B6baac7;
case 0x6baacc:c.instructions+=2;goto B6baacc;
case 0x6baad1:c.instructions+=1;goto B6baad1;
case 0x6baad3:goto L6baad3;
case 0x6baad5:c.instructions+=1;goto B6baad5;
case 0x6baada:goto L6baada;
case 0x6baadc:c.instructions+=2;goto B6baadc;
case 0x6baade:c.instructions+=1;goto B6baade;
case 0x6baae4:goto L6baae4;
case 0x6baaea:c.instructions+=1;goto B6baaea;
case 0x6baaec:goto L6baaec;
case 0x6baaf2:c.instructions+=3;goto B6baaf2;
case 0x6baaf7:c.instructions+=2;goto B6baaf7;
case 0x6baafc:c.instructions+=1;goto B6baafc;
case 0x6baafe:goto L6baafe;
case 0x6bab00:c.instructions+=1;goto B6bab00;
case 0x6bab05:goto L6bab05;
case 0x6bab07:c.instructions+=2;goto B6bab07;
case 0x6bab09:c.instructions+=1;goto B6bab09;
case 0x6bab0f:goto L6bab0f;
case 0x6bab11:c.instructions+=1;goto B6bab11;
case 0x6bab16:goto L6bab16;
case 0x6bab18:c.instructions+=2;goto B6bab18;
case 0x6bab1a:c.instructions+=1;goto B6bab1a;
case 0x6bab20:goto L6bab20;
case 0x6bab22:c.instructions+=1;goto B6bab22;
case 0x6bab27:goto L6bab27;
case 0x6bab29:c.instructions+=2;goto B6bab29;
case 0x6bab2b:c.instructions+=1;goto B6bab2b;
case 0x6bab31:goto L6bab31;
case 0x6bab32:c.instructions+=4;goto B6bab32;
case 0x6bab33:c.instructions+=3;goto B6bab33;
case 0x6bab35:c.instructions+=2;goto B6bab35;
case 0x6bab3b:c.instructions+=1;goto B6bab3b;
case 0x6bab40:goto L6bab40;
case 0x6bab42:c.instructions+=2;goto B6bab42;
case 0x6bab44:c.instructions+=1;goto B6bab44;
case 0x6bab4a:goto L6bab4a;
case 0x6bab4c:c.instructions+=2;goto B6bab4c;
case 0x6bab56:c.instructions+=1;goto B6bab56;
case 0x6bab5b:goto L6bab5b;
case 0x6bab5d:c.instructions+=2;goto B6bab5d;
case 0x6bab5f:c.instructions+=1;goto B6bab5f;
case 0x6bab61:goto L6bab61;
case 0x6bab62:c.instructions+=5;goto B6bab62;
case 0x6bab68:c.instructions+=4;goto B6bab68;
case 0x6bab6a:c.instructions+=3;goto B6bab6a;
case 0x6bab6b:c.instructions+=2;goto B6bab6b;
case 0x6bab71:c.instructions+=1;goto B6bab71;
case 0x6bab76:goto L6bab76;
case 0x6bab78:c.instructions+=2;goto B6bab78;
case 0x6bab7a:c.instructions+=1;goto B6bab7a;
case 0x6bab7c:goto L6bab7c;
case 0x6bab7d:c.instructions+=5;goto B6bab7d;
case 0x6bab83:c.instructions+=4;goto B6bab83;
case 0x6bab85:c.instructions+=3;goto B6bab85;
case 0x6bab86:c.instructions+=2;goto B6bab86;
case 0x6bab8c:c.instructions+=1;goto B6bab8c;
case 0x6bab91:goto L6bab91;
case 0x6bab93:c.instructions+=2;goto B6bab93;
case 0x6bab95:c.instructions+=1;goto B6bab95;
case 0x6bab97:goto L6bab97;
case 0x6bab99:c.instructions+=1;goto B6bab99;
case 0x6bab9e:goto L6bab9e;
case 0x6baba0:c.instructions+=2;goto B6baba0;
case 0x6baba2:c.instructions+=1;goto B6baba2;
case 0x6baba4:goto L6baba4;
case 0x6babaa:c.instructions+=1;goto B6babaa;
case 0x6babac:goto L6babac;
case 0x6babb2:c.instructions+=3;goto B6babb2;
case 0x6babb7:c.instructions+=2;goto B6babb7;
case 0x6babbc:c.instructions+=1;goto B6babbc;
case 0x6babbe:goto L6babbe;
case 0x6babc3:goto L6babc3;
case 0x6babc5:c.instructions+=2;goto B6babc5;
case 0x6babc7:c.instructions+=1;goto B6babc7;
case 0x6babc9:goto L6babc9;
case 0x6babcb:goto L6babcb;
case 0x6babcd:goto L6babcd;
case 0x6babce:c.instructions+=4;goto B6babce;
case 0x6babcf:c.instructions+=3;goto B6babcf;
case 0x6babd0:c.instructions+=2;goto B6babd0;
case 0x6babd1:c.instructions+=1;goto B6babd1;
case 0x6babd2:goto L6babd2;
case 0x6babd4:c.instructions+=5;goto B6babd4;
case 0x6babd5:c.instructions+=4;goto B6babd5;
case 0x6babd7:c.instructions+=3;goto B6babd7;
case 0x6babd8:c.instructions+=2;goto B6babd8;
case 0x6babda:c.instructions+=1;goto B6babda;
case 0x6babdf:goto L6babdf;
case 0x6babe2:c.instructions+=9;goto B6babe2;
case 0x6babe9:c.instructions+=8;goto B6babe9;
case 0x6babef:c.instructions+=7;goto B6babef;
case 0x6babf5:c.instructions+=6;goto B6babf5;
case 0x6babff:c.instructions+=5;goto B6babff;
case 0x6bac09:c.instructions+=4;goto B6bac09;
case 0x6bac0b:c.instructions+=3;goto B6bac0b;
case 0x6bac0c:c.instructions+=2;goto B6bac0c;
case 0x6bac0d:c.instructions+=1;goto B6bac0d;
case 0x6bac10:goto L6bac10;
case 0x6bac12:c.instructions+=8;goto B6bac12;
case 0x6bac13:c.instructions+=7;goto B6bac13;
case 0x6bac15:c.instructions+=6;goto B6bac15;
case 0x6bac16:c.instructions+=5;goto B6bac16;
case 0x6bac18:c.instructions+=4;goto B6bac18;
case 0x6bac1a:c.instructions+=3;goto B6bac1a;
case 0x6bac1b:c.instructions+=2;goto B6bac1b;
case 0x6bac1d:c.instructions+=1;goto B6bac1d;
case 0x6bac23:goto L6bac23;
case 0x6bac25:goto L6bac25;
case 0x6bac2b:c.instructions+=6;goto B6bac2b;
case 0x6bac2c:c.instructions+=5;goto B6bac2c;
case 0x6bac2d:c.instructions+=4;goto B6bac2d;
case 0x6bac2e:c.instructions+=3;goto B6bac2e;
case 0x6bac30:c.instructions+=2;goto B6bac30;
case 0x6bac31:c.instructions+=1;goto B6bac31;
case 0x6bac36:goto L6bac36;
case 0x6bac3c:c.instructions+=5;goto B6bac3c;
case 0x6bac41:c.instructions+=4;goto B6bac41;
case 0x6bac43:c.instructions+=3;goto B6bac43;
case 0x6bac49:c.instructions+=2;goto B6bac49;
case 0x6bac4a:c.instructions+=1;goto B6bac4a;
case 0x6bac50:goto L6bac50;
case 0x6bac55:c.instructions+=1;goto B6bac55;
case 0x6bac57:goto L6bac57;
case 0x6bac5c:c.instructions+=1;goto B6bac5c;
case 0x6bac5e:goto L6bac5e;
case 0x6bac63:c.instructions+=1;goto B6bac63;
case 0x6bac65:goto L6bac65;
case 0x6bac6a:c.instructions+=4;goto B6bac6a;
case 0x6bac6c:c.instructions+=3;goto B6bac6c;
case 0x6bac6e:c.instructions+=2;goto B6bac6e;
case 0x6bac6f:c.instructions+=1;goto B6bac6f;
case 0x6bac74:goto L6bac74;
case 0x6bac77:c.instructions+=2;goto B6bac77;
case 0x6bac7c:c.instructions+=1;goto B6bac7c;
case 0x6bac7d:goto L6bac7d;
case 0x6bac80:c.instructions+=7;goto B6bac80;
case 0x6bac83:c.instructions+=6;goto B6bac83;
case 0x6bac86:c.instructions+=5;goto B6bac86;
case 0x6bac8d:c.instructions+=4;goto B6bac8d;
case 0x6bac94:c.instructions+=3;goto B6bac94;
case 0x6bac9b:c.instructions+=2;goto B6bac9b;
case 0x6bac9e:c.instructions+=1;goto B6bac9e;
case 0x6baca0:goto L6baca0;
case 0x6baca7:c.instructions+=2;goto B6baca7;
case 0x6bacb1:c.instructions+=1;goto B6bacb1;
case 0x6bacb3:goto L6bacb3;
case 0x6bacb6:c.instructions+=7;goto B6bacb6;
case 0x6bacb9:c.instructions+=6;goto B6bacb9;
case 0x6bacbc:c.instructions+=5;goto B6bacbc;
case 0x6bacc3:c.instructions+=4;goto B6bacc3;
case 0x6bacca:c.instructions+=3;goto B6bacca;
case 0x6baccd:c.instructions+=2;goto B6baccd;
case 0x6bacd7:c.instructions+=1;goto B6bacd7;
case 0x6bacd9:goto L6bacd9;
case 0x6bace0:goto L6bace0;
case 0x6bace3:c.instructions+=1;goto B6bace3;
case 0x6bacea:goto L6bacea;
case 0x6baced:c.instructions+=10;goto B6baced;
case 0x6bacf4:c.instructions+=9;goto B6bacf4;
case 0x6bacfa:c.instructions+=8;goto B6bacfa;
case 0x6bad01:c.instructions+=7;goto B6bad01;
case 0x6bad04:c.instructions+=6;goto B6bad04;
case 0x6bad0b:c.instructions+=5;goto B6bad0b;
case 0x6bad12:c.instructions+=4;goto B6bad12;
case 0x6bad19:c.instructions+=3;goto B6bad19;
case 0x6bad20:c.instructions+=2;goto B6bad20;
case 0x6bad22:c.instructions+=1;goto B6bad22;
case 0x6bad23:goto L6bad23;
case 0x6bad25:c.instructions+=10;goto B6bad25;
case 0x6bad26:c.instructions+=9;goto B6bad26;
case 0x6bad28:c.instructions+=8;goto B6bad28;
case 0x6bad29:c.instructions+=7;goto B6bad29;
case 0x6bad2a:c.instructions+=6;goto B6bad2a;
case 0x6bad2b:c.instructions+=5;goto B6bad2b;
case 0x6bad2c:c.instructions+=4;goto B6bad2c;
case 0x6bad2e:c.instructions+=3;goto B6bad2e;
case 0x6bad30:c.instructions+=2;goto B6bad30;
case 0x6bad37:c.instructions+=1;goto B6bad37;
case 0x6bad39:goto L6bad39;
case 0x6bad3e:goto L6bad3e;
case 0x6bad41:c.instructions+=1;goto B6bad41;
case 0x6bad43:goto L6bad43;
case 0x6bad46:c.instructions+=7;goto B6bad46;
case 0x6bad4c:c.instructions+=6;goto B6bad4c;
case 0x6bad4f:c.instructions+=5;goto B6bad4f;
case 0x6bad55:c.instructions+=4;goto B6bad55;
case 0x6bad57:c.instructions+=3;goto B6bad57;
case 0x6bad5c:c.instructions+=2;goto B6bad5c;
case 0x6bad61:c.instructions+=1;goto B6bad61;
case 0x6bad63:goto L6bad63;
case 0x6bad65:c.instructions+=1;goto B6bad65;
case 0x6bad6a:goto L6bad6a;
case 0x6bad6b:c.instructions+=2;goto B6bad6b;
case 0x6bad6e:c.instructions+=1;goto B6bad6e;
case 0x6bad70:goto L6bad70;
case 0x6bad72:c.instructions+=1;goto B6bad72;
case 0x6bad77:goto L6bad77;
case 0x6bad7e:c.instructions+=1;goto B6bad7e;
case 0x6bad84:goto L6bad84;
case 0x6bad86:c.instructions+=2;goto B6bad86;
case 0x6bad89:c.instructions+=1;goto B6bad89;
case 0x6bad8b:goto L6bad8b;
case 0x6bad8e:c.instructions+=7;goto B6bad8e;
case 0x6bad94:c.instructions+=6;goto B6bad94;
case 0x6bad97:c.instructions+=5;goto B6bad97;
case 0x6bad9d:c.instructions+=4;goto B6bad9d;
case 0x6bad9f:c.instructions+=3;goto B6bad9f;
case 0x6bada4:c.instructions+=2;goto B6bada4;
case 0x6bada9:c.instructions+=1;goto B6bada9;
case 0x6badab:goto L6badab;
case 0x6badb0:c.instructions+=1;goto B6badb0;
case 0x6badb2:goto L6badb2;
case 0x6badb7:c.instructions+=1;goto B6badb7;
case 0x6badb9:goto L6badb9;
case 0x6badbe:c.instructions+=1;goto B6badbe;
case 0x6badc0:goto L6badc0;
case 0x6badc2:c.instructions+=2;goto B6badc2;
case 0x6badc3:c.instructions+=1;goto B6badc3;
case 0x6badc5:goto L6badc5;
case 0x6badc7:c.instructions+=1;goto B6badc7;
case 0x6badcc:goto L6badcc;
case 0x6badce:c.instructions+=2;goto B6badce;
case 0x6badd0:c.instructions+=1;goto B6badd0;
case 0x6badd5:goto L6badd5;
case 0x6badd7:goto L6badd7;
case 0x6badd9:c.instructions+=2;goto B6badd9;
case 0x6baddb:c.instructions+=1;goto B6baddb;
case 0x6bade0:goto L6bade0;
case 0x6bade2:goto L6bade2;
case 0x6bade4:c.instructions+=1;goto B6bade4;
case 0x6badea:goto L6badea;
case 0x6badeb:c.instructions+=2;goto B6badeb;
case 0x6badee:c.instructions+=1;goto B6badee;
case 0x6badf0:goto L6badf0;
case 0x6badf2:goto L6badf2;
case 0x6badf5:goto L6badf5;
case 0x6badf7:c.instructions+=2;goto B6badf7;
case 0x6badfa:c.instructions+=1;goto B6badfa;
case 0x6badfc:goto L6badfc;
case 0x6badff:c.instructions+=7;goto B6badff;
case 0x6bae05:c.instructions+=6;goto B6bae05;
case 0x6bae08:c.instructions+=5;goto B6bae08;
case 0x6bae0e:c.instructions+=4;goto B6bae0e;
case 0x6bae10:c.instructions+=3;goto B6bae10;
case 0x6bae15:c.instructions+=2;goto B6bae15;
case 0x6bae1a:c.instructions+=1;goto B6bae1a;
case 0x6bae1c:goto L6bae1c;
case 0x6bae1e:c.instructions+=2;goto B6bae1e;
case 0x6bae1f:c.instructions+=1;goto B6bae1f;
case 0x6bae21:goto L6bae21;
case 0x6bae23:c.instructions+=1;goto B6bae23;
case 0x6bae29:goto L6bae29;
case 0x6bae2b:c.instructions+=5;goto B6bae2b;
case 0x6bae2c:c.instructions+=4;goto B6bae2c;
case 0x6bae2d:c.instructions+=3;goto B6bae2d;
case 0x6bae2e:c.instructions+=2;goto B6bae2e;
case 0x6bae30:c.instructions+=1;goto B6bae30;
case 0x6bae35:goto L6bae35;
case 0x6bae37:c.instructions+=2;goto B6bae37;
case 0x6bae39:c.instructions+=1;goto B6bae39;
case 0x6bae3f:goto L6bae3f;
case 0x6bae41:c.instructions+=5;goto B6bae41;
case 0x6bae42:c.instructions+=4;goto B6bae42;
case 0x6bae43:c.instructions+=3;goto B6bae43;
case 0x6bae44:c.instructions+=2;goto B6bae44;
case 0x6bae46:c.instructions+=1;goto B6bae46;
case 0x6bae4b:goto L6bae4b;
case 0x6bae4d:c.instructions+=2;goto B6bae4d;
case 0x6bae4f:c.instructions+=1;goto B6bae4f;
case 0x6bae55:goto L6bae55;
case 0x6bae56:c.instructions+=2;goto B6bae56;
case 0x6bae59:c.instructions+=1;goto B6bae59;
case 0x6bae5b:goto L6bae5b;
case 0x6bae5d:c.instructions+=1;goto B6bae5d;
case 0x6bae62:goto L6bae62;
case 0x6bae64:c.instructions+=2;goto B6bae64;
case 0x6bae66:c.instructions+=1;goto B6bae66;
case 0x6bae6c:goto L6bae6c;
case 0x6bae6e:c.instructions+=1;goto B6bae6e;
case 0x6bae73:goto L6bae73;
case 0x6bae75:c.instructions+=2;goto B6bae75;
case 0x6bae78:c.instructions+=1;goto B6bae78;
case 0x6bae7a:goto L6bae7a;
case 0x6bae7d:c.instructions+=7;goto B6bae7d;
case 0x6bae83:c.instructions+=6;goto B6bae83;
case 0x6bae86:c.instructions+=5;goto B6bae86;
case 0x6bae8c:c.instructions+=4;goto B6bae8c;
case 0x6bae8e:c.instructions+=3;goto B6bae8e;
case 0x6bae93:c.instructions+=2;goto B6bae93;
case 0x6bae98:c.instructions+=1;goto B6bae98;
case 0x6bae9a:goto L6bae9a;
case 0x6bae9f:c.instructions+=1;goto B6bae9f;
case 0x6baea1:goto L6baea1;
case 0x6baea3:c.instructions+=1;goto B6baea3;
case 0x6baea8:goto L6baea8;
case 0x6baeaa:c.instructions+=2;goto B6baeaa;
case 0x6baeac:c.instructions+=1;goto B6baeac;
case 0x6baeb1:goto L6baeb1;
case 0x6baeb3:c.instructions+=1;goto B6baeb3;
case 0x6baeb9:goto L6baeb9;
case 0x6baeba:c.instructions+=2;goto B6baeba;
case 0x6baebd:c.instructions+=1;goto B6baebd;
case 0x6baebf:goto L6baebf;
case 0x6baec1:c.instructions+=2;goto B6baec1;
case 0x6baec4:c.instructions+=1;goto B6baec4;
case 0x6baeca:goto L6baeca;
case 0x6baecd:c.instructions+=7;goto B6baecd;
case 0x6baed3:c.instructions+=6;goto B6baed3;
case 0x6baed6:c.instructions+=5;goto B6baed6;
case 0x6baedc:c.instructions+=4;goto B6baedc;
case 0x6baede:c.instructions+=3;goto B6baede;
case 0x6baee3:c.instructions+=2;goto B6baee3;
case 0x6baee8:c.instructions+=1;goto B6baee8;
case 0x6baeea:goto L6baeea;
case 0x6baeef:c.instructions+=1;goto B6baeef;
case 0x6baef1:goto L6baef1;
case 0x6baef6:c.instructions+=1;goto B6baef6;
case 0x6baef8:goto L6baef8;
case 0x6baefd:c.instructions+=1;goto B6baefd;
case 0x6baeff:goto L6baeff;
case 0x6baf01:c.instructions+=1;goto B6baf01;
case 0x6baf06:goto L6baf06;
case 0x6baf08:c.instructions+=2;goto B6baf08;
case 0x6baf0a:c.instructions+=1;goto B6baf0a;
case 0x6baf0c:goto L6baf0c;
case 0x6baf0e:c.instructions+=1;goto B6baf0e;
case 0x6baf13:goto L6baf13;
case 0x6baf15:goto L6baf15;
case 0x6baf17:c.instructions+=1;goto B6baf17;
case 0x6baf1c:goto L6baf1c;
case 0x6baf1e:c.instructions+=2;goto B6baf1e;
case 0x6baf20:c.instructions+=1;goto B6baf20;
case 0x6baf22:goto L6baf22;
case 0x6baf24:c.instructions+=2;goto B6baf24;
case 0x6baf26:c.instructions+=1;goto B6baf26;
case 0x6baf2b:goto L6baf2b;
case 0x6baf2d:goto L6baf2d;
case 0x6baf2f:c.instructions+=1;goto B6baf2f;
case 0x6baf34:goto L6baf34;
case 0x6baf36:goto L6baf36;
case 0x6baf38:c.instructions+=1;goto B6baf38;
case 0x6baf3d:goto L6baf3d;
case 0x6baf3f:c.instructions+=2;goto B6baf3f;
case 0x6baf41:c.instructions+=1;goto B6baf41;
case 0x6baf47:goto L6baf47;
case 0x6baf48:c.instructions+=2;goto B6baf48;
case 0x6baf4b:c.instructions+=1;goto B6baf4b;
case 0x6baf51:goto L6baf51;
case 0x6baf53:c.instructions+=1;goto B6baf53;
case 0x6baf58:goto L6baf58;
case 0x6baf5a:c.instructions+=2;goto B6baf5a;
case 0x6baf5c:c.instructions+=1;goto B6baf5c;
case 0x6baf62:goto L6baf62;
case 0x6baf64:c.instructions+=1;goto B6baf64;
case 0x6baf69:goto L6baf69;
case 0x6baf6b:c.instructions+=2;goto B6baf6b;
case 0x6baf6e:c.instructions+=1;goto B6baf6e;
case 0x6baf70:goto L6baf70;
case 0x6baf73:c.instructions+=7;goto B6baf73;
case 0x6baf79:c.instructions+=6;goto B6baf79;
case 0x6baf7c:c.instructions+=5;goto B6baf7c;
case 0x6baf82:c.instructions+=4;goto B6baf82;
case 0x6baf84:c.instructions+=3;goto B6baf84;
case 0x6baf89:c.instructions+=2;goto B6baf89;
case 0x6baf8e:c.instructions+=1;goto B6baf8e;
case 0x6baf90:goto L6baf90;
case 0x6baf95:c.instructions+=1;goto B6baf95;
case 0x6baf97:goto L6baf97;
case 0x6baf9c:c.instructions+=1;goto B6baf9c;
case 0x6baf9e:goto L6baf9e;
case 0x6bafa3:c.instructions+=1;goto B6bafa3;
case 0x6bafa5:goto L6bafa5;
case 0x6bafaa:c.instructions+=1;goto B6bafaa;
case 0x6bafac:goto L6bafac;
case 0x6bafae:c.instructions+=1;goto B6bafae;
case 0x6bafb3:goto L6bafb3;
case 0x6bafb5:goto L6bafb5;
case 0x6bafb7:c.instructions+=2;goto B6bafb7;
case 0x6bafb9:c.instructions+=1;goto B6bafb9;
case 0x6bafbe:goto L6bafbe;
case 0x6bafc0:goto L6bafc0;
case 0x6bafc2:c.instructions+=1;goto B6bafc2;
case 0x6bafc7:goto L6bafc7;
case 0x6bafc9:goto L6bafc9;
case 0x6bafcb:c.instructions+=1;goto B6bafcb;
case 0x6bafd0:goto L6bafd0;
case 0x6bafd2:c.instructions+=2;goto B6bafd2;
case 0x6bafd4:c.instructions+=1;goto B6bafd4;
case 0x6bafda:goto L6bafda;
case 0x6bafdb:c.instructions+=2;goto B6bafdb;
case 0x6bafde:c.instructions+=1;goto B6bafde;
case 0x6bafe0:goto L6bafe0;
case 0x6bafe2:c.instructions+=1;goto B6bafe2;
case 0x6bafe7:goto L6bafe7;
case 0x6bafe9:c.instructions+=2;goto B6bafe9;
case 0x6bafec:c.instructions+=1;goto B6bafec;
case 0x6bafee:goto L6bafee;
case 0x6baff1:c.instructions+=3;goto B6baff1;
case 0x6baff7:c.instructions+=2;goto B6baff7;
case 0x6baffa:c.instructions+=1;goto B6baffa;
default:missing_instruction(c.pc);}
B6ba004:L6ba004:{c.instructions+=1;NFSU2_TR(0x6ba004);
if(r1(R+518)){{goto L6ba02c;}}
}
B6ba006:L6ba006:{c.instructions+=2;NFSU2_TR(0x6ba006);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x72a00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ba00b:{NFSU2_TR(0x6ba00b);
if(r1(R+518)){{goto L6ba028;}}
}
B6ba00d:L6ba00d:{c.instructions+=2;NFSU2_TR(0x6ba00d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x72b00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ba012:{NFSU2_TR(0x6ba012);
if(r1(R+518)){{goto L6ba024;}}
}
B6ba014:L6ba014:{c.instructions+=2;NFSU2_TR(0x6ba014);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x72e00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ba019:{NFSU2_TR(0x6ba019);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ba07e;}}
}
B6ba01b:L6ba01b:{c.instructions+=2;NFSU2_TR(0x6ba01b);
__builtin_memmove((R+4),(R+24),4);
}
B6ba01d:{NFSU2_TR(0x6ba01d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba022ull));
TAIL_STATIC(0x6b7a16u,6b7);
}
B6ba022:L6ba022:{c.instructions+=1;NFSU2_TR(0x6ba022);
{goto L6ba03d;}
}
B6ba024:L6ba024:{c.instructions+=2;NFSU2_TR(0x6ba024);
u8 U[4];
w4(U+0,u32(0x53ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba026:{NFSU2_TR(0x6ba026);
{goto L6ba036;}
}
B6ba028:L6ba028:{c.instructions+=2;NFSU2_TR(0x6ba028);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba02a:{NFSU2_TR(0x6ba02a);
{goto L6ba036;}
}
B6ba02c:L6ba02c:{c.instructions+=2;NFSU2_TR(0x6ba02c);
u8 U[4];
w4(U+0,u32(0x4dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba02e:{NFSU2_TR(0x6ba02e);
{goto L6ba036;}
}
B6ba030:L6ba030:{c.instructions+=2;NFSU2_TR(0x6ba030);
u8 U[4];
w4(U+0,u32(0x46ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba032:{NFSU2_TR(0x6ba032);
{goto L6ba036;}
}
B6ba034:L6ba034:{c.instructions+=1;NFSU2_TR(0x6ba034);
u8 U[4];
w4(U+0,u32(0x45ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba036:L6ba036:{c.instructions+=2;NFSU2_TR(0x6ba036);
__builtin_memmove((R+4),(R+24),4);
}
B6ba038:{NFSU2_TR(0x6ba038);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba03dull));
TAIL_STATIC(0x6b78d1u,6b7);
}
B6ba03d:L6ba03d:{c.instructions+=2;NFSU2_TR(0x6ba03d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x80004001ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ba042:{NFSU2_TR(0x6ba042);
if(r1(R+518)){{goto L6ba07e;}}
}
B6ba044:L6ba044:{c.instructions+=2;NFSU2_TR(0x6ba044);
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
B6ba046:{NFSU2_TR(0x6ba046);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ba054;}}
}
B6ba048:L6ba048:{c.instructions+=3;NFSU2_TR(0x6ba048);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6ba049:{NFSU2_TR(0x6ba049);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6ba04c:{NFSU2_TR(0x6ba04c);
if(r1(R+512)){TAIL_STATIC(0x6b9d53u,6b9);}
}
B6ba052:L6ba052:{c.instructions+=1;NFSU2_TR(0x6ba052);
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
B6ba054:L6ba054:{c.instructions+=5;NFSU2_TR(0x6ba054);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ba055:{NFSU2_TR(0x6ba055);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ba056:{NFSU2_TR(0x6ba056);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ba057:{NFSU2_TR(0x6ba057);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ba058:{NFSU2_TR(0x6ba058);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ba05b:L6ba05b:{c.instructions+=6;NFSU2_TR(0x6ba05b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ba061:{NFSU2_TR(0x6ba061);
u8 U[4];
w4(U+0,u32(0x7bcee4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba066:{NFSU2_TR(0x6ba066);
u8 U[4];
w4(U+0,u32(0x119full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba06b:{NFSU2_TR(0x6ba06b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ba06e:{NFSU2_TR(0x6ba06e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba06f:{NFSU2_TR(0x6ba06f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba074ull));
TAIL_STATIC(0x69e936u,69e);
}
B6ba074:L6ba074:{c.instructions+=3;NFSU2_TR(0x6ba074);
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
B6ba077:{NFSU2_TR(0x6ba077);
w4(R+0,u32(0x80004005ull));
}
B6ba07c:{NFSU2_TR(0x6ba07c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ba054u);}goto L6ba054;}
}
B6ba07e:L6ba07e:{c.instructions+=6;NFSU2_TR(0x6ba07e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ba084:{NFSU2_TR(0x6ba084);
u8 U[4];
w4(U+0,u32(0x7bb258ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba089:{NFSU2_TR(0x6ba089);
u8 U[4];
w4(U+0,u32(0x11b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba08e:{NFSU2_TR(0x6ba08e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ba091:{NFSU2_TR(0x6ba091);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba092:{NFSU2_TR(0x6ba092);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba097ull));
TAIL_STATIC(0x69e936u,69e);
}
B6ba097:L6ba097:{c.instructions+=3;NFSU2_TR(0x6ba097);
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
B6ba09a:{NFSU2_TR(0x6ba09a);
w4(R+0,u32(0x80004001ull));
}
B6ba09f:{NFSU2_TR(0x6ba09f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ba054u);}goto L6ba054;}
}
B6ba0a1:L6ba0a1:{c.instructions+=6;NFSU2_TR(0x6ba0a1);
__builtin_memmove((R+28),(R+28),4);
}
B6ba0a3:{NFSU2_TR(0x6ba0a3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba0a4:{NFSU2_TR(0x6ba0a4);
__builtin_memmove((R+24),(R+4),4);
}
B6ba0a6:{NFSU2_TR(0x6ba0a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ba0ac:{NFSU2_TR(0x6ba0ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ba0ae:{NFSU2_TR(0x6ba0ae);
if(r1(R+518)){{goto L6ba0f9;}}
}
B6ba0b0:L6ba0b0:{c.instructions+=3;NFSU2_TR(0x6ba0b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ba0b6:{NFSU2_TR(0x6ba0b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ba0b8:{NFSU2_TR(0x6ba0b8);
if(r1(R+518)){{goto L6ba0f9;}}
}
B6ba0ba:L6ba0ba:{c.instructions+=4;NFSU2_TR(0x6ba0ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ba0c0:{NFSU2_TR(0x6ba0c0);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffffull))));
}
B6ba0c6:{NFSU2_TR(0x6ba0c6);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x104ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x104ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x104ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ba0cc:{NFSU2_TR(0x6ba0cc);
if(r1(R+518)){{goto L6ba0d5;}}
}
B6ba0ce:L6ba0ce:{c.instructions+=3;NFSU2_TR(0x6ba0ce);
w4(R+0,u32(0x80004005ull));
}
B6ba0d3:{NFSU2_TR(0x6ba0d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ba0d4:{NFSU2_TR(0x6ba0d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ba0d5:L6ba0d5:{c.instructions+=4;NFSU2_TR(0x6ba0d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba0d6:{NFSU2_TR(0x6ba0d6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba0d7:{NFSU2_TR(0x6ba0d7);
__builtin_memmove((R+4),(R+24),4);
}
B6ba0d9:{NFSU2_TR(0x6ba0d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba0deull));
TAIL_STATIC(0x6b9d3eu,6b9);
}
B6ba0de:L6ba0de:{c.instructions+=3;NFSU2_TR(0x6ba0de);
u8 U[4];
w4(U+0,u32(0xfffdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba0e3:{NFSU2_TR(0x6ba0e3);
__builtin_memmove((R+4),(R+24),4);
}
B6ba0e5:{NFSU2_TR(0x6ba0e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba0eaull));
TAIL_STATIC(0x6d18eau,6d1);
}
B6ba0ea:L6ba0ea:{c.instructions+=2;NFSU2_TR(0x6ba0ea);
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
B6ba0ec:{NFSU2_TR(0x6ba0ec);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ba10c;}}
}
B6ba0ee:L6ba0ee:{c.instructions+=2;NFSU2_TR(0x6ba0ee);
__builtin_memmove((R+4),(R+24),4);
}
B6ba0f0:{NFSU2_TR(0x6ba0f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba0f5ull));
TAIL_STATIC(0x6ccd02u,6cc);
}
B6ba0f5:L6ba0f5:{c.instructions+=2;NFSU2_TR(0x6ba0f5);
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
B6ba0f7:{NFSU2_TR(0x6ba0f7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ba10c;}}
}
B6ba0f9:L6ba0f9:{c.instructions+=4;NFSU2_TR(0x6ba0f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ba0ff:{NFSU2_TR(0x6ba0ff);
__builtin_memmove((R+4),(R+24),4);
}
B6ba101:{NFSU2_TR(0x6ba101);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ba107:{NFSU2_TR(0x6ba107);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba10cull));
TAIL_STATIC(0x6b9d3eu,6b9);
}
B6ba10c:L6ba10c:{c.instructions+=2;NFSU2_TR(0x6ba10c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ba10d:{NFSU2_TR(0x6ba10d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ba10e:L6ba10e:{c.instructions+=6;NFSU2_TR(0x6ba10e);
__builtin_memmove((R+28),(R+28),4);
}
B6ba110:{NFSU2_TR(0x6ba110);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba111:{NFSU2_TR(0x6ba111);
__builtin_memmove((R+20),(R+16),4);
}
B6ba113:{NFSU2_TR(0x6ba113);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba114:{NFSU2_TR(0x6ba114);
__builtin_memmove((R+24),(R+4),4);
}
B6ba116:{NFSU2_TR(0x6ba116);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba11bull));
TAIL_STATIC(0x6b8c82u,6b8);
}
B6ba11b:L6ba11b:{c.instructions+=2;NFSU2_TR(0x6ba11b);
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
B6ba11f:{NFSU2_TR(0x6ba11f);
if(r1(R+518)){{goto L6ba128;}}
}
B6ba121:L6ba121:{c.instructions+=2;NFSU2_TR(0x6ba121);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba122:{NFSU2_TR(0x6ba122);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba127ull));
TAIL_STATIC(0x575630u,575);
}
B6ba127:L6ba127:{c.instructions+=1;NFSU2_TR(0x6ba127);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ba128:L6ba128:{c.instructions+=4;NFSU2_TR(0x6ba128);
__builtin_memmove((R+0),(R+24),4);
}
B6ba12a:{NFSU2_TR(0x6ba12a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ba12b:{NFSU2_TR(0x6ba12b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ba12c:{NFSU2_TR(0x6ba12c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ba12f:L6ba12f:{c.instructions+=13;NFSU2_TR(0x6ba12f);
__builtin_memmove((R+28),(R+28),4);
}
B6ba131:{NFSU2_TR(0x6ba131);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba132:{NFSU2_TR(0x6ba132);
__builtin_memmove((R+20),(R+16),4);
}
B6ba134:{NFSU2_TR(0x6ba134);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B6ba137:{NFSU2_TR(0x6ba137);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba138:{NFSU2_TR(0x6ba138);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba139:{NFSU2_TR(0x6ba139);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba13a:{NFSU2_TR(0x6ba13a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba13c:{NFSU2_TR(0x6ba13c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba13e:{NFSU2_TR(0x6ba13e);
u8 U[4];
w4(U+0,u32(0x311ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba143:{NFSU2_TR(0x6ba143);
u8 U[4];
w4(U+0,u32(0x7b3a84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba148:{NFSU2_TR(0x6ba148);
__builtin_memmove((R+24),(R+4),4);
}
B6ba14a:{NFSU2_TR(0x6ba14a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba14full));
TAIL_STATIC(0x699be0u,699);
}
B6ba14f:L6ba14f:{c.instructions+=11;NFSU2_TR(0x6ba14f);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6ba151:{NFSU2_TR(0x6ba151);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba152:{NFSU2_TR(0x6ba152);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba153:{NFSU2_TR(0x6ba153);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6ba156:{NFSU2_TR(0x6ba156);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6ba158:{NFSU2_TR(0x6ba158);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba159:{NFSU2_TR(0x6ba159);
__builtin_memmove((R+12),(R+0),4);
}
B6ba15b:{NFSU2_TR(0x6ba15b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba15c:{NFSU2_TR(0x6ba15c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba15d:{NFSU2_TR(0x6ba15d);
__builtin_memmove((R+4),(R+24),4);
}
B6ba15f:{NFSU2_TR(0x6ba15f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba164ull));
TAIL_STATIC(0x699c39u,699);
}
B6ba164:L6ba164:{c.instructions+=10;NFSU2_TR(0x6ba164);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B6ba166:{NFSU2_TR(0x6ba166);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba167:{NFSU2_TR(0x6ba167);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba168:{NFSU2_TR(0x6ba168);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6ba16b:{NFSU2_TR(0x6ba16b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba16d:{NFSU2_TR(0x6ba16d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba16e:{NFSU2_TR(0x6ba16e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba16f:{NFSU2_TR(0x6ba16f);
__builtin_memmove((R+4),(R+24),4);
}
B6ba171:{NFSU2_TR(0x6ba171);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x440ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba177:{NFSU2_TR(0x6ba177);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba17cull));
TAIL_STATIC(0x699c39u,699);
}
B6ba17c:L6ba17c:{c.instructions+=6;NFSU2_TR(0x6ba17c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x444ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba182:{NFSU2_TR(0x6ba182);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ba188:{NFSU2_TR(0x6ba188);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6ba18d:{NFSU2_TR(0x6ba18d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x104ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ba192:{NFSU2_TR(0x6ba192);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba198:{NFSU2_TR(0x6ba198);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ba1e8;}}
}
B6ba19a:L6ba19a:{c.instructions+=3;NFSU2_TR(0x6ba19a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6ba19c:{NFSU2_TR(0x6ba19c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ba19f:{NFSU2_TR(0x6ba19f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ba1da;}}
}
B6ba1a1:L6ba1a1:{c.instructions+=8;NFSU2_TR(0x6ba1a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ba1a4:{NFSU2_TR(0x6ba1a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba1aa:{NFSU2_TR(0x6ba1aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ba1ad:{NFSU2_TR(0x6ba1ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba1b3:{NFSU2_TR(0x6ba1b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ba1b5:{NFSU2_TR(0x6ba1b5);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6ba1ba:{NFSU2_TR(0x6ba1ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ba1bf:{NFSU2_TR(0x6ba1bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ba1d4;}}
}
B6ba1c1:L6ba1c1:{c.instructions+=2;NFSU2_TR(0x6ba1c1);
__builtin_memmove((R+4),(R+24),4);
}
B6ba1c3:{NFSU2_TR(0x6ba1c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba1c8ull));
TAIL_STATIC(0x6af377u,6af);
}
B6ba1c8:L6ba1c8:{c.instructions+=3;NFSU2_TR(0x6ba1c8);
__builtin_memmove((R+28),(R+0),4);
}
B6ba1ca:{NFSU2_TR(0x6ba1ca);
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
B6ba1cc:{NFSU2_TR(0x6ba1cc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6babcb;}}
}
B6ba1d2:L6ba1d2:{c.instructions+=1;NFSU2_TR(0x6ba1d2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6ba1d4:L6ba1d4:{c.instructions+=3;NFSU2_TR(0x6ba1d4);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6ba1d5:{NFSU2_TR(0x6ba1d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6ba1d8:{NFSU2_TR(0x6ba1d8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ba1a1u);}goto L6ba1a1;}}
}
B6ba1da:L6ba1da:{c.instructions+=2;NFSU2_TR(0x6ba1da);
__builtin_memmove((R+4),(R+24),4);
}
B6ba1dc:{NFSU2_TR(0x6ba1dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba1e1ull));
TAIL_STATIC(0x6c29d2u,6c2);
}
B6ba1e1:L6ba1e1:{c.instructions+=2;NFSU2_TR(0x6ba1e1);
__builtin_memmove((R+4),(R+24),4);
}
B6ba1e3:{NFSU2_TR(0x6ba1e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba1e8ull));
TAIL_STATIC(0x69f745u,69f);
}
B6ba1e8:L6ba1e8:{c.instructions+=4;NFSU2_TR(0x6ba1e8);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ba1eb:{NFSU2_TR(0x6ba1eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba1ee:{NFSU2_TR(0x6ba1ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba1f1:{NFSU2_TR(0x6ba1f1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ba300;}}
}
B6ba1f7:L6ba1f7:{c.instructions+=7;NFSU2_TR(0x6ba1f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ba1fa:{NFSU2_TR(0x6ba1fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ba1fd:{NFSU2_TR(0x6ba1fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ba200:{NFSU2_TR(0x6ba200);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba206:{NFSU2_TR(0x6ba206);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ba209:{NFSU2_TR(0x6ba209);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba20c:{NFSU2_TR(0x6ba20c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ba297;}}
}
B6ba212:L6ba212:{c.instructions+=1;NFSU2_TR(0x6ba212);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ba215:L6ba215:{c.instructions+=9;NFSU2_TR(0x6ba215);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6ba217:{NFSU2_TR(0x6ba217);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ba21a:{NFSU2_TR(0x6ba21a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6ba21d:{NFSU2_TR(0x6ba21d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ba220:{NFSU2_TR(0x6ba220);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ba223:{NFSU2_TR(0x6ba223);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6ba226:{NFSU2_TR(0x6ba226);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ba229:{NFSU2_TR(0x6ba229);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ba22c:{NFSU2_TR(0x6ba22c);
if(r1(R+518)){{goto L6ba255;}}
}
B6ba22e:L6ba22e:{c.instructions+=2;NFSU2_TR(0x6ba22e);
u8 U[1];
w1(U+0,u8(u32(r1(R+13))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ba231:{NFSU2_TR(0x6ba231);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ba255;}}
}
B6ba233:L6ba233:{c.instructions+=2;NFSU2_TR(0x6ba233);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ba237:{NFSU2_TR(0x6ba237);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ba255;}}
}
B6ba239:L6ba239:{c.instructions+=2;NFSU2_TR(0x6ba239);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6ba23d:{NFSU2_TR(0x6ba23d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ba255;}}
}
B6ba23f:L6ba23f:{c.instructions+=4;NFSU2_TR(0x6ba23f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6ba241:{NFSU2_TR(0x6ba241);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
}
B6ba247:{NFSU2_TR(0x6ba247);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60700000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ba24d:{NFSU2_TR(0x6ba24d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ba26b;}}
}
B6ba24f:L6ba24f:{c.instructions+=2;NFSU2_TR(0x6ba24f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ba253:{NFSU2_TR(0x6ba253);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ba26b;}}
}
B6ba255:L6ba255:{c.instructions+=6;NFSU2_TR(0x6ba255);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ba258:{NFSU2_TR(0x6ba258);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ba25e:{NFSU2_TR(0x6ba25e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ba261:{NFSU2_TR(0x6ba261);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6ba264:{NFSU2_TR(0x6ba264);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6ba267:{NFSU2_TR(0x6ba267);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ba215u);}goto L6ba215;}}
}
B6ba269:L6ba269:{c.instructions+=1;NFSU2_TR(0x6ba269);
{goto L6ba295;}
}
B6ba26b:L6ba26b:{c.instructions+=9;NFSU2_TR(0x6ba26b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ba271:{NFSU2_TR(0x6ba271);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffull))));
}
B6ba277:{NFSU2_TR(0x6ba277);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba278:{NFSU2_TR(0x6ba278);
u8 U[4];
w4(U+0,u32(0x7bcfc8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba27d:{NFSU2_TR(0x6ba27d);
u8 U[4];
w4(U+0,u32(0x11a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba282:{NFSU2_TR(0x6ba282);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ba285:{NFSU2_TR(0x6ba285);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ba28c:{NFSU2_TR(0x6ba28c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba28d:{NFSU2_TR(0x6ba28d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba292ull));
TAIL_STATIC(0x69e936u,69e);
}
B6ba292:L6ba292:{c.instructions+=1;NFSU2_TR(0x6ba292);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6ba295:L6ba295:{c.instructions+=1;NFSU2_TR(0x6ba295);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6ba297:L6ba297:{c.instructions+=5;NFSU2_TR(0x6ba297);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ba29d:{NFSU2_TR(0x6ba29d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6ba29f:{NFSU2_TR(0x6ba29f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
}
B6ba2a5:{NFSU2_TR(0x6ba2a5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60600000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ba2ab:{NFSU2_TR(0x6ba2ab);
if(r1(R+518)){{goto L6ba2c5;}}
}
B6ba2ad:L6ba2ad:{c.instructions+=2;NFSU2_TR(0x6ba2ad);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60b00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ba2b3:{NFSU2_TR(0x6ba2b3);
if(r1(R+518)){{goto L6ba2c5;}}
}
B6ba2b5:L6ba2b5:{c.instructions+=2;NFSU2_TR(0x6ba2b5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ba2bb:{NFSU2_TR(0x6ba2bb);
if(r1(R+518)){{goto L6ba2c5;}}
}
B6ba2bd:L6ba2bd:{c.instructions+=2;NFSU2_TR(0x6ba2bd);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x61000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ba2c3:{NFSU2_TR(0x6ba2c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ba2e2;}}
}
B6ba2c5:L6ba2c5:{c.instructions+=5;NFSU2_TR(0x6ba2c5);
u8 U[4];
w4(U+0,u32(0x7bb258ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba2ca:{NFSU2_TR(0x6ba2ca);
u8 U[4];
w4(U+0,u32(0x11b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba2cf:{NFSU2_TR(0x6ba2cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ba2d2:{NFSU2_TR(0x6ba2d2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba2d3:{NFSU2_TR(0x6ba2d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba2d8ull));
TAIL_STATIC(0x69e936u,69e);
}
B6ba2d8:L6ba2d8:{c.instructions+=2;NFSU2_TR(0x6ba2d8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6ba2db:{NFSU2_TR(0x6ba2db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ba2e2:L6ba2e2:{c.instructions+=4;NFSU2_TR(0x6ba2e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ba2e5:{NFSU2_TR(0x6ba2e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ba2e8:{NFSU2_TR(0x6ba2e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6ba2eb:{NFSU2_TR(0x6ba2eb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ba1f7u);}goto L6ba1f7;}}
}
B6ba2f1:L6ba2f1:{c.instructions+=2;NFSU2_TR(0x6ba2f1);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+28)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6ba2f4:{NFSU2_TR(0x6ba2f4);
if(r1(R+518)){{goto L6ba300;}}
}
B6ba2f6:L6ba2f6:{c.instructions+=2;NFSU2_TR(0x6ba2f6);
w4(R+28,u32(0x80004005ull));
}
B6ba2fb:{NFSU2_TR(0x6ba2fb);
{goto L6babcb;}
}
B6ba300:L6ba300:{c.instructions+=5;NFSU2_TR(0x6ba300);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ba302:{NFSU2_TR(0x6ba302);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ba305:{NFSU2_TR(0x6ba305);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba307:{NFSU2_TR(0x6ba307);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6ba308:{NFSU2_TR(0x6ba308);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ba353;}}
}
B6ba30a:L6ba30a:{c.instructions+=8;NFSU2_TR(0x6ba30a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ba30d:{NFSU2_TR(0x6ba30d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ba310:{NFSU2_TR(0x6ba310);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ba314:{NFSU2_TR(0x6ba314);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ba317:{NFSU2_TR(0x6ba317);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ba31a:{NFSU2_TR(0x6ba31a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ba31d:{NFSU2_TR(0x6ba31d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ba323:{NFSU2_TR(0x6ba323);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ba34d;}}
}
B6ba325:L6ba325:{c.instructions+=2;NFSU2_TR(0x6ba325);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6ba329:{NFSU2_TR(0x6ba329);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ba32d;}}
}
B6ba32b:L6ba32b:{c.instructions+=1;NFSU2_TR(0x6ba32b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6ba32d:L6ba32d:{c.instructions+=4;NFSU2_TR(0x6ba32d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ba333:{NFSU2_TR(0x6ba333);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6ba338:{NFSU2_TR(0x6ba338);
w1(R+512,u8((r4(R+0))<(u32(0x104ull))));
}
B6ba33d:{NFSU2_TR(0x6ba33d);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6ba34d;}}
}
B6ba33f:L6ba33f:{c.instructions+=4;NFSU2_TR(0x6ba33f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ba342:{NFSU2_TR(0x6ba342);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ba345:{NFSU2_TR(0x6ba345);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6ba349:{NFSU2_TR(0x6ba349);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ba34d;}}
}
B6ba34b:L6ba34b:{c.instructions+=1;NFSU2_TR(0x6ba34b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6ba34d:L6ba34d:{c.instructions+=3;NFSU2_TR(0x6ba34d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6ba34e:{NFSU2_TR(0x6ba34e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6ba351:{NFSU2_TR(0x6ba351);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ba30au);}goto L6ba30a;}}
}
B6ba353:L6ba353:{c.instructions+=3;NFSU2_TR(0x6ba353);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ba355:{NFSU2_TR(0x6ba355);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ba358:{NFSU2_TR(0x6ba358);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ba3ce;}}
}
B6ba35a:L6ba35a:{c.instructions+=8;NFSU2_TR(0x6ba35a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ba35d:{NFSU2_TR(0x6ba35d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba363:{NFSU2_TR(0x6ba363);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ba366:{NFSU2_TR(0x6ba366);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba36c:{NFSU2_TR(0x6ba36c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ba36e:{NFSU2_TR(0x6ba36e);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
}
B6ba374:{NFSU2_TR(0x6ba374);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ba37a:{NFSU2_TR(0x6ba37a);
if(r1(R+518)){{goto L6ba394;}}
}
B6ba37c:L6ba37c:{c.instructions+=2;NFSU2_TR(0x6ba37c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60500000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ba382:{NFSU2_TR(0x6ba382);
if(r1(R+518)){{goto L6ba394;}}
}
B6ba384:L6ba384:{c.instructions+=2;NFSU2_TR(0x6ba384);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60a00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ba38a:{NFSU2_TR(0x6ba38a);
if(r1(R+518)){{goto L6ba394;}}
}
B6ba38c:L6ba38c:{c.instructions+=2;NFSU2_TR(0x6ba38c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60f00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ba392:{NFSU2_TR(0x6ba392);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ba3bf;}}
}
B6ba394:L6ba394:{c.instructions+=3;NFSU2_TR(0x6ba394);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6ba396:{NFSU2_TR(0x6ba396);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ba399:{NFSU2_TR(0x6ba399);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ba3bf;}}
}
B6ba39b:L6ba39b:{c.instructions+=10;NFSU2_TR(0x6ba39b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ba3a1:{NFSU2_TR(0x6ba3a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ba3a4:{NFSU2_TR(0x6ba3a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ba3a7:{NFSU2_TR(0x6ba3a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ba3aa:{NFSU2_TR(0x6ba3aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ba3ad:{NFSU2_TR(0x6ba3ad);
u8 U[4];
w4(U+0,u32(0x14ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6ba3b3:{NFSU2_TR(0x6ba3b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ba3b9:{NFSU2_TR(0x6ba3b9);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6ba3ba:{NFSU2_TR(0x6ba3ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6ba3bd:{NFSU2_TR(0x6ba3bd);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ba39bu);}goto L6ba39b;}}
}
B6ba3bf:L6ba3bf:{c.instructions+=5;NFSU2_TR(0x6ba3bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ba3c5:{NFSU2_TR(0x6ba3c5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6ba3c6:{NFSU2_TR(0x6ba3c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba3c9:{NFSU2_TR(0x6ba3c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6ba3cc:{NFSU2_TR(0x6ba3cc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ba35au);}goto L6ba35a;}}
}
B6ba3ce:L6ba3ce:{c.instructions+=3;NFSU2_TR(0x6ba3ce);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6ba3d0:{NFSU2_TR(0x6ba3d0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ba3d3:{NFSU2_TR(0x6ba3d3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ba41c;}}
}
B6ba3d5:L6ba3d5:{c.instructions+=8;NFSU2_TR(0x6ba3d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ba3d8:{NFSU2_TR(0x6ba3d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba3de:{NFSU2_TR(0x6ba3de);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ba3e1:{NFSU2_TR(0x6ba3e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba3e7:{NFSU2_TR(0x6ba3e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ba3e9:{NFSU2_TR(0x6ba3e9);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6ba3ee:{NFSU2_TR(0x6ba3ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ba3f3:{NFSU2_TR(0x6ba3f3);
if(r1(R+518)){{goto L6ba403;}}
}
B6ba3f5:L6ba3f5:{c.instructions+=2;NFSU2_TR(0x6ba3f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ba3fa:{NFSU2_TR(0x6ba3fa);
if(r1(R+518)){{goto L6ba403;}}
}
B6ba3fc:L6ba3fc:{c.instructions+=2;NFSU2_TR(0x6ba3fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x30000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ba401:{NFSU2_TR(0x6ba401);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ba416;}}
}
B6ba403:L6ba403:{c.instructions+=2;NFSU2_TR(0x6ba403);
__builtin_memmove((R+4),(R+24),4);
}
B6ba405:{NFSU2_TR(0x6ba405);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba40aull));
TAIL_STATIC(0x6c44a4u,6c4);
}
B6ba40a:L6ba40a:{c.instructions+=3;NFSU2_TR(0x6ba40a);
__builtin_memmove((R+28),(R+0),4);
}
B6ba40c:{NFSU2_TR(0x6ba40c);
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
B6ba40e:{NFSU2_TR(0x6ba40e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6babcb;}}
}
B6ba414:L6ba414:{c.instructions+=1;NFSU2_TR(0x6ba414);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6ba416:L6ba416:{c.instructions+=3;NFSU2_TR(0x6ba416);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6ba417:{NFSU2_TR(0x6ba417);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6ba41a:{NFSU2_TR(0x6ba41a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ba3d5u);}goto L6ba3d5;}}
}
B6ba41c:L6ba41c:{c.instructions+=3;NFSU2_TR(0x6ba41c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6ba41e:{NFSU2_TR(0x6ba41e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ba421:{NFSU2_TR(0x6ba421);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ba46c;}}
}
B6ba423:L6ba423:{c.instructions+=8;NFSU2_TR(0x6ba423);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ba426:{NFSU2_TR(0x6ba426);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba42c:{NFSU2_TR(0x6ba42c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ba42f:{NFSU2_TR(0x6ba42f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba435:{NFSU2_TR(0x6ba435);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ba437:{NFSU2_TR(0x6ba437);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6ba43c:{NFSU2_TR(0x6ba43c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ba441:{NFSU2_TR(0x6ba441);
if(r1(R+518)){{goto L6ba453;}}
}
B6ba443:L6ba443:{c.instructions+=2;NFSU2_TR(0x6ba443);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ba448:{NFSU2_TR(0x6ba448);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ba466;}}
}
B6ba44a:L6ba44a:{c.instructions+=2;NFSU2_TR(0x6ba44a);
__builtin_memmove((R+4),(R+24),4);
}
B6ba44c:{NFSU2_TR(0x6ba44c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba451ull));
TAIL_STATIC(0x6af905u,6af);
}
B6ba451:L6ba451:{c.instructions+=1;NFSU2_TR(0x6ba451);
{goto L6ba45a;}
}
B6ba453:L6ba453:{c.instructions+=2;NFSU2_TR(0x6ba453);
__builtin_memmove((R+4),(R+24),4);
}
B6ba455:{NFSU2_TR(0x6ba455);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba45aull));
TAIL_STATIC(0x6af7d9u,6af);
}
B6ba45a:L6ba45a:{c.instructions+=3;NFSU2_TR(0x6ba45a);
__builtin_memmove((R+28),(R+0),4);
}
B6ba45c:{NFSU2_TR(0x6ba45c);
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
B6ba45e:{NFSU2_TR(0x6ba45e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6babcb;}}
}
B6ba464:L6ba464:{c.instructions+=1;NFSU2_TR(0x6ba464);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6ba466:L6ba466:{c.instructions+=3;NFSU2_TR(0x6ba466);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6ba467:{NFSU2_TR(0x6ba467);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6ba46a:{NFSU2_TR(0x6ba46a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ba423u);}goto L6ba423;}}
}
B6ba46c:L6ba46c:{c.instructions+=2;NFSU2_TR(0x6ba46c);
__builtin_memmove((R+4),(R+24),4);
}
B6ba46e:{NFSU2_TR(0x6ba46e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba473ull));
TAIL_STATIC(0x6c29d2u,6c2);
}
B6ba473:L6ba473:{c.instructions+=3;NFSU2_TR(0x6ba473);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6ba475:{NFSU2_TR(0x6ba475);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ba478:{NFSU2_TR(0x6ba478);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ba509;}}
}
B6ba47e:L6ba47e:{c.instructions+=8;NFSU2_TR(0x6ba47e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ba481:{NFSU2_TR(0x6ba481);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba487:{NFSU2_TR(0x6ba487);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ba48a:{NFSU2_TR(0x6ba48a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba490:{NFSU2_TR(0x6ba490);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ba492:{NFSU2_TR(0x6ba492);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6ba497:{NFSU2_TR(0x6ba497);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ba49c:{NFSU2_TR(0x6ba49c);
if(r1(R+518)){{goto L6ba4e5;}}
}
B6ba49e:L6ba49e:{c.instructions+=2;NFSU2_TR(0x6ba49e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ba4a3:{NFSU2_TR(0x6ba4a3);
if(r1(R+518)){{goto L6ba4c5;}}
}
B6ba4a5:L6ba4a5:{c.instructions+=2;NFSU2_TR(0x6ba4a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ba4aa:{NFSU2_TR(0x6ba4aa);
if(r1(R+518)){{goto L6ba4bc;}}
}
B6ba4ac:L6ba4ac:{c.instructions+=2;NFSU2_TR(0x6ba4ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x50000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ba4b1:{NFSU2_TR(0x6ba4b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ba4ff;}}
}
B6ba4b3:L6ba4b3:{c.instructions+=2;NFSU2_TR(0x6ba4b3);
__builtin_memmove((R+4),(R+24),4);
}
B6ba4b5:{NFSU2_TR(0x6ba4b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba4baull));
TAIL_STATIC(0x6c62ddu,6c6);
}
B6ba4ba:L6ba4ba:{c.instructions+=1;NFSU2_TR(0x6ba4ba);
{goto L6ba4f5;}
}
B6ba4bc:L6ba4bc:{c.instructions+=2;NFSU2_TR(0x6ba4bc);
__builtin_memmove((R+4),(R+24),4);
}
B6ba4be:{NFSU2_TR(0x6ba4be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba4c3ull));
TAIL_STATIC(0x6cf19fu,6cf);
}
B6ba4c3:L6ba4c3:{c.instructions+=1;NFSU2_TR(0x6ba4c3);
{goto L6ba4ee;}
}
B6ba4c5:L6ba4c5:{c.instructions+=2;NFSU2_TR(0x6ba4c5);
__builtin_memmove((R+4),(R+24),4);
}
B6ba4c7:{NFSU2_TR(0x6ba4c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba4ccull));
TAIL_STATIC(0x6cf529u,6cf);
}
B6ba4cc:L6ba4cc:{c.instructions+=2;NFSU2_TR(0x6ba4cc);
__builtin_memmove((R+4),(R+24),4);
}
B6ba4ce:{NFSU2_TR(0x6ba4ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba4d3ull));
TAIL_STATIC(0x6ceea2u,6ce);
}
B6ba4d3:L6ba4d3:{c.instructions+=3;NFSU2_TR(0x6ba4d3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba4d5:{NFSU2_TR(0x6ba4d5);
__builtin_memmove((R+4),(R+24),4);
}
B6ba4d7:{NFSU2_TR(0x6ba4d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba4dcull));
TAIL_STATIC(0x6cf301u,6cf);
}
B6ba4dc:L6ba4dc:{c.instructions+=2;NFSU2_TR(0x6ba4dc);
__builtin_memmove((R+4),(R+24),4);
}
B6ba4de:{NFSU2_TR(0x6ba4de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba4e3ull));
TAIL_STATIC(0x6cf19fu,6cf);
}
B6ba4e3:L6ba4e3:{c.instructions+=1;NFSU2_TR(0x6ba4e3);
{goto L6ba4f5;}
}
B6ba4e5:L6ba4e5:{c.instructions+=3;NFSU2_TR(0x6ba4e5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba4e7:{NFSU2_TR(0x6ba4e7);
__builtin_memmove((R+4),(R+24),4);
}
B6ba4e9:{NFSU2_TR(0x6ba4e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba4eeull));
TAIL_STATIC(0x6ce15cu,6ce);
}
B6ba4ee:L6ba4ee:{c.instructions+=2;NFSU2_TR(0x6ba4ee);
__builtin_memmove((R+4),(R+24),4);
}
B6ba4f0:{NFSU2_TR(0x6ba4f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba4f5ull));
TAIL_STATIC(0x6cf489u,6cf);
}
B6ba4f5:L6ba4f5:{c.instructions+=3;NFSU2_TR(0x6ba4f5);
__builtin_memmove((R+28),(R+0),4);
}
B6ba4f7:{NFSU2_TR(0x6ba4f7);
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
B6ba4f9:{NFSU2_TR(0x6ba4f9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6babcb;}}
}
B6ba4ff:L6ba4ff:{c.instructions+=3;NFSU2_TR(0x6ba4ff);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6ba500:{NFSU2_TR(0x6ba500);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6ba503:{NFSU2_TR(0x6ba503);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ba47eu);}goto L6ba47e;}}
}
B6ba509:L6ba509:{c.instructions+=2;NFSU2_TR(0x6ba509);
__builtin_memmove((R+4),(R+24),4);
}
B6ba50b:{NFSU2_TR(0x6ba50b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba510ull));
TAIL_STATIC(0x6c29d2u,6c2);
}
B6ba510:L6ba510:{c.instructions+=3;NFSU2_TR(0x6ba510);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6ba512:{NFSU2_TR(0x6ba512);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ba515:{NFSU2_TR(0x6ba515);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ba555;}}
}
B6ba517:L6ba517:{c.instructions+=8;NFSU2_TR(0x6ba517);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ba51a:{NFSU2_TR(0x6ba51a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba520:{NFSU2_TR(0x6ba520);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ba523:{NFSU2_TR(0x6ba523);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba529:{NFSU2_TR(0x6ba529);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ba52b:{NFSU2_TR(0x6ba52b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6ba530:{NFSU2_TR(0x6ba530);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ba535:{NFSU2_TR(0x6ba535);
if(r1(R+518)){{goto L6ba53e;}}
}
B6ba537:L6ba537:{c.instructions+=2;NFSU2_TR(0x6ba537);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ba53c:{NFSU2_TR(0x6ba53c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ba54f;}}
}
B6ba53e:L6ba53e:{c.instructions+=2;NFSU2_TR(0x6ba53e);
__builtin_memmove((R+4),(R+24),4);
}
B6ba540:{NFSU2_TR(0x6ba540);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba545ull));
TAIL_STATIC(0x6b1b27u,6b1);
}
B6ba545:L6ba545:{c.instructions+=3;NFSU2_TR(0x6ba545);
__builtin_memmove((R+28),(R+0),4);
}
B6ba547:{NFSU2_TR(0x6ba547);
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
B6ba549:{NFSU2_TR(0x6ba549);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6babcb;}}
}
B6ba54f:L6ba54f:{c.instructions+=3;NFSU2_TR(0x6ba54f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6ba550:{NFSU2_TR(0x6ba550);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6ba553:{NFSU2_TR(0x6ba553);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ba517u);}goto L6ba517;}}
}
B6ba555:L6ba555:{c.instructions+=2;NFSU2_TR(0x6ba555);
__builtin_memmove((R+4),(R+24),4);
}
B6ba557:{NFSU2_TR(0x6ba557);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba55cull));
TAIL_STATIC(0x6c29d2u,6c2);
}
B6ba55c:L6ba55c:{c.instructions+=3;NFSU2_TR(0x6ba55c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6ba55e:{NFSU2_TR(0x6ba55e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ba561:{NFSU2_TR(0x6ba561);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ba5af;}}
}
B6ba563:L6ba563:{c.instructions+=8;NFSU2_TR(0x6ba563);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ba566:{NFSU2_TR(0x6ba566);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba56c:{NFSU2_TR(0x6ba56c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ba56f:{NFSU2_TR(0x6ba56f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba575:{NFSU2_TR(0x6ba575);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ba577:{NFSU2_TR(0x6ba577);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6ba57c:{NFSU2_TR(0x6ba57c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60f00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ba581:{NFSU2_TR(0x6ba581);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ba5a9;}}
}
B6ba583:L6ba583:{c.instructions+=3;NFSU2_TR(0x6ba583);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba585:{NFSU2_TR(0x6ba585);
__builtin_memmove((R+4),(R+24),4);
}
B6ba587:{NFSU2_TR(0x6ba587);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba58cull));
TAIL_STATIC(0x6b106fu,6b1);
}
B6ba58c:L6ba58c:{c.instructions+=3;NFSU2_TR(0x6ba58c);
__builtin_memmove((R+28),(R+0),4);
}
B6ba58e:{NFSU2_TR(0x6ba58e);
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
B6ba590:{NFSU2_TR(0x6ba590);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6babcb;}}
}
B6ba596:L6ba596:{c.instructions+=3;NFSU2_TR(0x6ba596);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba598:{NFSU2_TR(0x6ba598);
__builtin_memmove((R+4),(R+24),4);
}
B6ba59a:{NFSU2_TR(0x6ba59a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba59full));
TAIL_STATIC(0x6b106fu,6b1);
}
B6ba59f:L6ba59f:{c.instructions+=3;NFSU2_TR(0x6ba59f);
__builtin_memmove((R+28),(R+0),4);
}
B6ba5a1:{NFSU2_TR(0x6ba5a1);
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
B6ba5a3:{NFSU2_TR(0x6ba5a3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6babcb;}}
}
B6ba5a9:L6ba5a9:{c.instructions+=3;NFSU2_TR(0x6ba5a9);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6ba5aa:{NFSU2_TR(0x6ba5aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6ba5ad:{NFSU2_TR(0x6ba5ad);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ba563u);}goto L6ba563;}}
}
B6ba5af:L6ba5af:{c.instructions+=2;NFSU2_TR(0x6ba5af);
__builtin_memmove((R+4),(R+24),4);
}
B6ba5b1:{NFSU2_TR(0x6ba5b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba5b6ull));
TAIL_STATIC(0x6c29d2u,6c2);
}
B6ba5b6:L6ba5b6:{c.instructions+=3;NFSU2_TR(0x6ba5b6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6ba5b8:{NFSU2_TR(0x6ba5b8);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ba5bb:{NFSU2_TR(0x6ba5bb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ba5f4;}}
}
B6ba5bd:L6ba5bd:{c.instructions+=8;NFSU2_TR(0x6ba5bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ba5c0:{NFSU2_TR(0x6ba5c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba5c6:{NFSU2_TR(0x6ba5c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ba5c9:{NFSU2_TR(0x6ba5c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba5cf:{NFSU2_TR(0x6ba5cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ba5d1:{NFSU2_TR(0x6ba5d1);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6ba5d6:{NFSU2_TR(0x6ba5d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ba5db:{NFSU2_TR(0x6ba5db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ba5ee;}}
}
B6ba5dd:L6ba5dd:{c.instructions+=2;NFSU2_TR(0x6ba5dd);
__builtin_memmove((R+4),(R+24),4);
}
B6ba5df:{NFSU2_TR(0x6ba5df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba5e4ull));
TAIL_STATIC(0x6b174bu,6b1);
}
B6ba5e4:L6ba5e4:{c.instructions+=3;NFSU2_TR(0x6ba5e4);
__builtin_memmove((R+28),(R+0),4);
}
B6ba5e6:{NFSU2_TR(0x6ba5e6);
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
B6ba5e8:{NFSU2_TR(0x6ba5e8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6babcb;}}
}
B6ba5ee:L6ba5ee:{c.instructions+=3;NFSU2_TR(0x6ba5ee);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6ba5ef:{NFSU2_TR(0x6ba5ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6ba5f2:{NFSU2_TR(0x6ba5f2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ba5bdu);}goto L6ba5bd;}}
}
B6ba5f4:L6ba5f4:{c.instructions+=2;NFSU2_TR(0x6ba5f4);
__builtin_memmove((R+4),(R+24),4);
}
B6ba5f6:{NFSU2_TR(0x6ba5f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba5fbull));
TAIL_STATIC(0x6c29d2u,6c2);
}
B6ba5fb:L6ba5fb:{c.instructions+=3;NFSU2_TR(0x6ba5fb);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6ba5fd:{NFSU2_TR(0x6ba5fd);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ba600:{NFSU2_TR(0x6ba600);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ba642;}}
}
B6ba602:L6ba602:{c.instructions+=8;NFSU2_TR(0x6ba602);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ba605:{NFSU2_TR(0x6ba605);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba60b:{NFSU2_TR(0x6ba60b);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ba60e:{NFSU2_TR(0x6ba60e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba614:{NFSU2_TR(0x6ba614);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ba616:{NFSU2_TR(0x6ba616);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6ba61b:{NFSU2_TR(0x6ba61b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ba620:{NFSU2_TR(0x6ba620);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ba63c;}}
}
B6ba622:L6ba622:{c.instructions+=2;NFSU2_TR(0x6ba622);
__builtin_memmove((R+4),(R+24),4);
}
B6ba624:{NFSU2_TR(0x6ba624);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba629ull));
TAIL_STATIC(0x6cf6c6u,6cf);
}
B6ba629:L6ba629:{c.instructions+=3;NFSU2_TR(0x6ba629);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba62b:{NFSU2_TR(0x6ba62b);
__builtin_memmove((R+4),(R+24),4);
}
B6ba62d:{NFSU2_TR(0x6ba62d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba632ull));
TAIL_STATIC(0x6c9b3du,6c9);
}
B6ba632:L6ba632:{c.instructions+=3;NFSU2_TR(0x6ba632);
__builtin_memmove((R+28),(R+0),4);
}
B6ba634:{NFSU2_TR(0x6ba634);
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
B6ba636:{NFSU2_TR(0x6ba636);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6babcb;}}
}
B6ba63c:L6ba63c:{c.instructions+=3;NFSU2_TR(0x6ba63c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6ba63d:{NFSU2_TR(0x6ba63d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6ba640:{NFSU2_TR(0x6ba640);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ba602u);}goto L6ba602;}}
}
B6ba642:L6ba642:{c.instructions+=5;NFSU2_TR(0x6ba642);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ba645:{NFSU2_TR(0x6ba645);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6ba647:{NFSU2_TR(0x6ba647);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ba649:{NFSU2_TR(0x6ba649);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba64c:{NFSU2_TR(0x6ba64c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ba677;}}
}
B6ba64e:L6ba64e:{c.instructions+=6;NFSU2_TR(0x6ba64e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ba651:{NFSU2_TR(0x6ba651);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba657:{NFSU2_TR(0x6ba657);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ba65a:{NFSU2_TR(0x6ba65a);
__builtin_memmove((R+4),(R+24),4);
}
B6ba65c:{NFSU2_TR(0x6ba65c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba662:{NFSU2_TR(0x6ba662);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba667ull));
TAIL_STATIC(0x6b0ab4u,6b0);
}
B6ba667:L6ba667:{c.instructions+=3;NFSU2_TR(0x6ba667);
__builtin_memmove((R+28),(R+0),4);
}
B6ba669:{NFSU2_TR(0x6ba669);
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
B6ba66b:{NFSU2_TR(0x6ba66b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6babcb;}}
}
B6ba671:L6ba671:{c.instructions+=3;NFSU2_TR(0x6ba671);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6ba672:{NFSU2_TR(0x6ba672);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6ba675:{NFSU2_TR(0x6ba675);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ba64eu);}goto L6ba64e;}}
}
B6ba677:L6ba677:{c.instructions+=2;NFSU2_TR(0x6ba677);
__builtin_memmove((R+4),(R+24),4);
}
B6ba679:{NFSU2_TR(0x6ba679);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba67eull));
TAIL_STATIC(0x6c29d2u,6c2);
}
B6ba67e:L6ba67e:{c.instructions+=2;NFSU2_TR(0x6ba67e);
__builtin_memmove((R+4),(R+24),4);
}
B6ba680:{NFSU2_TR(0x6ba680);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba685ull));
TAIL_STATIC(0x6ca70eu,6ca);
}
B6ba685:L6ba685:{c.instructions+=4;NFSU2_TR(0x6ba685);
__builtin_memmove((R+28),(R+0),4);
}
B6ba687:{NFSU2_TR(0x6ba687);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6ba689:{NFSU2_TR(0x6ba689);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B6ba68b:{NFSU2_TR(0x6ba68b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6babcb;}}
}
B6ba691:L6ba691:{c.instructions+=2;NFSU2_TR(0x6ba691);
__builtin_memmove((R+4),(R+24),4);
}
B6ba693:{NFSU2_TR(0x6ba693);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba698ull));
TAIL_STATIC(0x6b14fcu,6b1);
}
B6ba698:L6ba698:{c.instructions+=3;NFSU2_TR(0x6ba698);
__builtin_memmove((R+28),(R+0),4);
}
B6ba69a:{NFSU2_TR(0x6ba69a);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B6ba69c:{NFSU2_TR(0x6ba69c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6babcb;}}
}
B6ba6a2:L6ba6a2:{c.instructions+=2;NFSU2_TR(0x6ba6a2);
__builtin_memmove((R+4),(R+24),4);
}
B6ba6a4:{NFSU2_TR(0x6ba6a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba6a9ull));
TAIL_STATIC(0x6afef4u,6af);
}
B6ba6a9:L6ba6a9:{c.instructions+=3;NFSU2_TR(0x6ba6a9);
__builtin_memmove((R+28),(R+0),4);
}
B6ba6ab:{NFSU2_TR(0x6ba6ab);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B6ba6ad:{NFSU2_TR(0x6ba6ad);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6babcb;}}
}
B6ba6b3:L6ba6b3:{c.instructions+=5;NFSU2_TR(0x6ba6b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ba6b9:{NFSU2_TR(0x6ba6b9);
__builtin_memmove((R+4),(R+0),4);
}
B6ba6bb:{NFSU2_TR(0x6ba6bb);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffffull))));
}
B6ba6c1:{NFSU2_TR(0x6ba6c1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x104ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ba6c7:{NFSU2_TR(0x6ba6c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6baa67;}}
}
B6ba6cd:L6ba6cd:{c.instructions+=3;NFSU2_TR(0x6ba6cd);
w4(R+28,u32(0x800ull));
}
B6ba6d2:{NFSU2_TR(0x6ba6d2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba6d3:{NFSU2_TR(0x6ba6d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba6d8ull));
TAIL_STATIC(0x575620u,575);
}
B6ba6d8:L6ba6d8:{c.instructions+=4;NFSU2_TR(0x6ba6d8);
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
B6ba6da:{NFSU2_TR(0x6ba6da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ba6db:{NFSU2_TR(0x6ba6db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba6e1:{NFSU2_TR(0x6ba6e1);
if(r1(R+518)){{goto L6ba6f4;}}
}
B6ba6e3:L6ba6e3:{c.instructions+=2;NFSU2_TR(0x6ba6e3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba6e4:{NFSU2_TR(0x6ba6e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba6e9ull));
TAIL_STATIC(0x575620u,575);
}
B6ba6e9:L6ba6e9:{c.instructions+=4;NFSU2_TR(0x6ba6e9);
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
B6ba6eb:{NFSU2_TR(0x6ba6eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ba6ec:{NFSU2_TR(0x6ba6ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba6f2:{NFSU2_TR(0x6ba6f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ba6fe;}}
}
B6ba6f4:L6ba6f4:{c.instructions+=2;NFSU2_TR(0x6ba6f4);
w4(R+0,u32(0x8007000eull));
}
B6ba6f9:{NFSU2_TR(0x6ba6f9);
{goto L6babcd;}
}
B6ba6fe:L6ba6fe:{c.instructions+=6;NFSU2_TR(0x6ba6fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ba704:{NFSU2_TR(0x6ba704);
w4(R+8,u32(0x200ull));
}
B6ba709:{NFSU2_TR(0x6ba709);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ba70b:{NFSU2_TR(0x6ba70b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba711:{NFSU2_TR(0x6ba711);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba717:{NFSU2_TR(0x6ba717);
__builtin_memmove((R+4),(R+8),4);
}
B6ba719:L6ba719:{c.instructions+=1;NFSU2_TR(0x6ba719);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6ba71b;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ba719u);}goto L6ba719;}
}
B6ba71b:L6ba71b:{c.instructions+=2;NFSU2_TR(0x6ba71b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ba721:{NFSU2_TR(0x6ba721);
__builtin_memmove((R+4),(R+8),4);
}
B6ba723:L6ba723:{c.instructions+=1;NFSU2_TR(0x6ba723);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6ba725;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ba723u);}goto L6ba723;}
}
B6ba725:L6ba725:{c.instructions+=2;NFSU2_TR(0x6ba725);
__builtin_memmove((R+4),(R+24),4);
}
B6ba727:{NFSU2_TR(0x6ba727);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba72cull));
TAIL_STATIC(0x6b344eu,6b3);
}
B6ba72c:L6ba72c:{c.instructions+=3;NFSU2_TR(0x6ba72c);
__builtin_memmove((R+28),(R+0),4);
}
B6ba72e:{NFSU2_TR(0x6ba72e);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B6ba730:{NFSU2_TR(0x6ba730);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6babcb;}}
}
B6ba736:L6ba736:{c.instructions+=2;NFSU2_TR(0x6ba736);
__builtin_memmove((R+4),(R+24),4);
}
B6ba738:{NFSU2_TR(0x6ba738);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba73dull));
TAIL_STATIC(0x6b39aeu,6b3);
}
B6ba73d:L6ba73d:{c.instructions+=3;NFSU2_TR(0x6ba73d);
__builtin_memmove((R+28),(R+0),4);
}
B6ba73f:{NFSU2_TR(0x6ba73f);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B6ba741:{NFSU2_TR(0x6ba741);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6babcb;}}
}
B6ba747:L6ba747:{c.instructions+=2;NFSU2_TR(0x6ba747);
__builtin_memmove((R+4),(R+24),4);
}
B6ba749:{NFSU2_TR(0x6ba749);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba74eull));
TAIL_STATIC(0x6b3b16u,6b3);
}
B6ba74e:L6ba74e:{c.instructions+=2;NFSU2_TR(0x6ba74e);
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
B6ba750:{NFSU2_TR(0x6ba750);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ba2f6u);}goto L6ba2f6;}}
}
B6ba756:L6ba756:{c.instructions+=2;NFSU2_TR(0x6ba756);
__builtin_memmove((R+4),(R+24),4);
}
B6ba758:{NFSU2_TR(0x6ba758);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba75dull));
TAIL_STATIC(0x6b3a3cu,6b3);
}
B6ba75d:L6ba75d:{c.instructions+=3;NFSU2_TR(0x6ba75d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ba760:{NFSU2_TR(0x6ba760);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba763:{NFSU2_TR(0x6ba763);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ba783;}}
}
B6ba765:L6ba765:{c.instructions+=1;NFSU2_TR(0x6ba765);
u8 U[4];
w4(U+0,u32(0x7bcf84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba76a:L6ba76a:{c.instructions+=5;NFSU2_TR(0x6ba76a);
u8 U[4];
w4(U+0,u32(0x1194ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba76f:{NFSU2_TR(0x6ba76f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba770:{NFSU2_TR(0x6ba770);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba771:{NFSU2_TR(0x6ba771);
w4(R+28,u32(0x80004005ull));
}
B6ba776:{NFSU2_TR(0x6ba776);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba77bull));
TAIL_STATIC(0x69e936u,69e);
}
B6ba77b:L6ba77b:{c.instructions+=2;NFSU2_TR(0x6ba77b);
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
B6ba77e:{NFSU2_TR(0x6ba77e);
{goto L6babcb;}
}
B6ba783:L6ba783:{c.instructions+=2;NFSU2_TR(0x6ba783);
__builtin_memmove((R+4),(R+24),4);
}
B6ba785:{NFSU2_TR(0x6ba785);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba78aull));
TAIL_STATIC(0x6b32a8u,6b3);
}
B6ba78a:L6ba78a:{c.instructions+=2;NFSU2_TR(0x6ba78a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba78d:{NFSU2_TR(0x6ba78d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x304ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ba793:L6ba793:{c.instructions+=9;NFSU2_TR(0x6ba793);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba794:{NFSU2_TR(0x6ba794);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6ba796:{NFSU2_TR(0x6ba796);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba797:{NFSU2_TR(0x6ba797);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6ba79a:{NFSU2_TR(0x6ba79a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba79b:{NFSU2_TR(0x6ba79b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba79c:{NFSU2_TR(0x6ba79c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ba7a2:{NFSU2_TR(0x6ba7a2);
__builtin_memmove((R+4),(R+24),4);
}
B6ba7a4:{NFSU2_TR(0x6ba7a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba7a9ull));
TAIL_STATIC(0x699c39u,699);
}
B6ba7a9:L6ba7a9:{c.instructions+=3;NFSU2_TR(0x6ba7a9);
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
B6ba7ac:{NFSU2_TR(0x6ba7ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6ba7ae:{NFSU2_TR(0x6ba7ae);
if(r1(R+518)){{goto L6ba9e9;}}
}
B6ba7b4:L6ba7b4:{c.instructions+=7;NFSU2_TR(0x6ba7b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ba7b7:{NFSU2_TR(0x6ba7b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ba7ba:{NFSU2_TR(0x6ba7ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ba7bd:{NFSU2_TR(0x6ba7bd);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6ba7c0:{NFSU2_TR(0x6ba7c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x40ull))));
}
B6ba7c4:{NFSU2_TR(0x6ba7c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba7c7:{NFSU2_TR(0x6ba7c7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ba793u);}goto L6ba793;}}
}
B6ba7c9:L6ba7c9:{c.instructions+=7;NFSU2_TR(0x6ba7c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ba7cd:{NFSU2_TR(0x6ba7cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ba7d1:{NFSU2_TR(0x6ba7d1);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba7d3:{NFSU2_TR(0x6ba7d3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ba7d5:{NFSU2_TR(0x6ba7d5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ba7d8:{NFSU2_TR(0x6ba7d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ba7de:{NFSU2_TR(0x6ba7de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ba7df:L6ba7df:{c.instructions+=1;NFSU2_TR(0x6ba7df);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6ba7e1;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ba7dfu);}goto L6ba7df;}
}
B6ba7e1:L6ba7e1:{c.instructions+=2;NFSU2_TR(0x6ba7e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba7e4:{NFSU2_TR(0x6ba7e4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ba98e;}}
}
B6ba7ea:L6ba7ea:{c.instructions+=4;NFSU2_TR(0x6ba7ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ba7f0:{NFSU2_TR(0x6ba7f0);
w4(R+8,u32(0x200ull));
}
B6ba7f5:{NFSU2_TR(0x6ba7f5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ba7f7:{NFSU2_TR(0x6ba7f7);
__builtin_memmove((R+4),(R+8),4);
}
B6ba7f9:L6ba7f9:{c.instructions+=1;NFSU2_TR(0x6ba7f9);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6ba7fb;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ba7f9u);}goto L6ba7f9;}
}
B6ba7fb:L6ba7fb:{c.instructions+=2;NFSU2_TR(0x6ba7fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ba801:{NFSU2_TR(0x6ba801);
__builtin_memmove((R+4),(R+8),4);
}
B6ba803:L6ba803:{c.instructions+=1;NFSU2_TR(0x6ba803);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6ba805;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ba803u);}goto L6ba803;}
}
B6ba805:L6ba805:{c.instructions+=6;NFSU2_TR(0x6ba805);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba807:{NFSU2_TR(0x6ba807);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ba80a:{NFSU2_TR(0x6ba80a);
__builtin_memmove((R+4),(R+24),4);
}
B6ba80c:{NFSU2_TR(0x6ba80c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba812:{NFSU2_TR(0x6ba812);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba818:{NFSU2_TR(0x6ba818);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba81dull));
TAIL_STATIC(0x6b3dbfu,6b3);
}
B6ba81d:L6ba81d:{c.instructions+=2;NFSU2_TR(0x6ba81d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ba81f:{NFSU2_TR(0x6ba81f);
if(r1(R+518)){{goto L6ba97f;}}
}
B6ba825:L6ba825:{c.instructions+=4;NFSU2_TR(0x6ba825);
__builtin_memmove((R+4),(R+24),4);
}
B6ba827:{NFSU2_TR(0x6ba827);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x408ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba82d:{NFSU2_TR(0x6ba82d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x404ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba833:{NFSU2_TR(0x6ba833);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba838ull));
TAIL_STATIC(0x6b33a1u,6b3);
}
B6ba838:L6ba838:{c.instructions+=7;NFSU2_TR(0x6ba838);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ba83b:{NFSU2_TR(0x6ba83b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba83c:{NFSU2_TR(0x6ba83c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ba842:{NFSU2_TR(0x6ba842);
__builtin_memmove((R+4),(R+24),4);
}
B6ba844:{NFSU2_TR(0x6ba844);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba846:{NFSU2_TR(0x6ba846);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ba84c:{NFSU2_TR(0x6ba84c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba851ull));
TAIL_STATIC(0x6b866cu,6b8);
}
B6ba851:L6ba851:{c.instructions+=7;NFSU2_TR(0x6ba851);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ba854:{NFSU2_TR(0x6ba854);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba855:{NFSU2_TR(0x6ba855);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ba85b:{NFSU2_TR(0x6ba85b);
__builtin_memmove((R+4),(R+24),4);
}
B6ba85d:{NFSU2_TR(0x6ba85d);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba85f:{NFSU2_TR(0x6ba85f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ba865:{NFSU2_TR(0x6ba865);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba86aull));
TAIL_STATIC(0x6b866cu,6b8);
}
B6ba86a:L6ba86a:{c.instructions+=2;NFSU2_TR(0x6ba86a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ba870:{NFSU2_TR(0x6ba870);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ba877:L6ba877:{c.instructions+=3;NFSU2_TR(0x6ba877);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6ba879:{NFSU2_TR(0x6ba879);
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
B6ba87b:{NFSU2_TR(0x6ba87b);
if(r1(R+518)){{goto L6ba884;}}
}
B6ba87d:L6ba87d:{c.instructions+=2;NFSU2_TR(0x6ba87d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba87f:{NFSU2_TR(0x6ba87f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba884ull));
TAIL_STATIC(0x6739efu,673);
}
B6ba884:L6ba884:{c.instructions+=4;NFSU2_TR(0x6ba884);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6ba886:{NFSU2_TR(0x6ba886);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6ba889:{NFSU2_TR(0x6ba889);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ba88c:{NFSU2_TR(0x6ba88c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ba877u);}goto L6ba877;}}
}
B6ba88e:L6ba88e:{c.instructions+=2;NFSU2_TR(0x6ba88e);
__builtin_memmove((R+4),(R+24),4);
}
B6ba890:{NFSU2_TR(0x6ba890);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba895ull));
TAIL_STATIC(0x6b9711u,6b9);
}
B6ba895:L6ba895:{c.instructions+=3;NFSU2_TR(0x6ba895);
__builtin_memmove((R+28),(R+0),4);
}
B6ba897:{NFSU2_TR(0x6ba897);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B6ba899:{NFSU2_TR(0x6ba899);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6babcb;}}
}
B6ba89f:L6ba89f:{c.instructions+=2;NFSU2_TR(0x6ba89f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ba8a2:{NFSU2_TR(0x6ba8a2);
if(r1(R+518)){{goto L6ba97f;}}
}
B6ba8a8:L6ba8a8:{c.instructions+=3;NFSU2_TR(0x6ba8a8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba8a9:{NFSU2_TR(0x6ba8a9);
__builtin_memmove((R+4),(R+24),4);
}
B6ba8ab:{NFSU2_TR(0x6ba8ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba8b0ull));
TAIL_STATIC(0x6b419eu,6b4);
}
B6ba8b0:L6ba8b0:{c.instructions+=2;NFSU2_TR(0x6ba8b0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6ba8b2:{NFSU2_TR(0x6ba8b2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ba97f;}}
}
B6ba8b8:L6ba8b8:{c.instructions+=4;NFSU2_TR(0x6ba8b8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba8ba:{NFSU2_TR(0x6ba8ba);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba8bc:{NFSU2_TR(0x6ba8bc);
__builtin_memmove((R+4),(R+24),4);
}
B6ba8be:{NFSU2_TR(0x6ba8be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba8c3ull));
TAIL_STATIC(0x6b5928u,6b5);
}
B6ba8c3:L6ba8c3:{c.instructions+=2;NFSU2_TR(0x6ba8c3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6ba8c5:{NFSU2_TR(0x6ba8c5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ba97f;}}
}
B6ba8cb:L6ba8cb:{c.instructions+=7;NFSU2_TR(0x6ba8cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ba8ce:{NFSU2_TR(0x6ba8ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba8cf:{NFSU2_TR(0x6ba8cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ba8d5:{NFSU2_TR(0x6ba8d5);
__builtin_memmove((R+4),(R+24),4);
}
B6ba8d7:{NFSU2_TR(0x6ba8d7);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba8d9:{NFSU2_TR(0x6ba8d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ba8df:{NFSU2_TR(0x6ba8df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba8e4ull));
TAIL_STATIC(0x6b866cu,6b8);
}
B6ba8e4:L6ba8e4:{c.instructions+=7;NFSU2_TR(0x6ba8e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ba8e7:{NFSU2_TR(0x6ba8e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba8e8:{NFSU2_TR(0x6ba8e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ba8ee:{NFSU2_TR(0x6ba8ee);
__builtin_memmove((R+4),(R+24),4);
}
B6ba8f0:{NFSU2_TR(0x6ba8f0);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba8f2:{NFSU2_TR(0x6ba8f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ba8f8:{NFSU2_TR(0x6ba8f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba8fdull));
TAIL_STATIC(0x6b866cu,6b8);
}
B6ba8fd:L6ba8fd:{c.instructions+=6;NFSU2_TR(0x6ba8fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ba903:{NFSU2_TR(0x6ba903);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ba909:{NFSU2_TR(0x6ba909);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6ba90b:{NFSU2_TR(0x6ba90b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba90e:{NFSU2_TR(0x6ba90e);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B6ba910:{NFSU2_TR(0x6ba910);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ba917:L6ba917:{c.instructions+=2;NFSU2_TR(0x6ba917);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6ba91a:{NFSU2_TR(0x6ba91a);
if(r1(R+518)){{goto L6ba91d;}}
}
B6ba91c:L6ba91c:{c.instructions+=1;NFSU2_TR(0x6ba91c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6ba91d:L6ba91d:{c.instructions+=2;NFSU2_TR(0x6ba91d);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6ba91f:{NFSU2_TR(0x6ba91f);
if(r1(R+518)){{goto L6ba924;}}
}
B6ba921:L6ba921:{c.instructions+=1;NFSU2_TR(0x6ba921);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ba924:L6ba924:{c.instructions+=3;NFSU2_TR(0x6ba924);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6ba927:{NFSU2_TR(0x6ba927);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ba92a:{NFSU2_TR(0x6ba92a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ba917u);}goto L6ba917;}}
}
B6ba92c:L6ba92c:{c.instructions+=5;NFSU2_TR(0x6ba92c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ba92f:{NFSU2_TR(0x6ba92f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6ba932:{NFSU2_TR(0x6ba932);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ba934:{NFSU2_TR(0x6ba934);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba937:{NFSU2_TR(0x6ba937);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6ba93c;}}
}
B6ba939:L6ba939:{c.instructions+=1;NFSU2_TR(0x6ba939);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba93c:L6ba93c:{c.instructions+=5;NFSU2_TR(0x6ba93c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ba93f:{NFSU2_TR(0x6ba93f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ba942:{NFSU2_TR(0x6ba942);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+0))));
}
B6ba944:{NFSU2_TR(0x6ba944);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ba947:{NFSU2_TR(0x6ba947);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6ba94b;}}
}
B6ba949:L6ba949:{c.instructions+=1;NFSU2_TR(0x6ba949);
__builtin_memmove((R+28),(R+0),4);
}
B6ba94b:L6ba94b:{c.instructions+=8;NFSU2_TR(0x6ba94b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6ba94e:{NFSU2_TR(0x6ba94e);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B6ba950:{NFSU2_TR(0x6ba950);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6ba952:{NFSU2_TR(0x6ba952);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xaull))));
}
B6ba955:{NFSU2_TR(0x6ba955);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B6ba957:{NFSU2_TR(0x6ba957);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6ba95a:{NFSU2_TR(0x6ba95a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x8ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ba95d:{NFSU2_TR(0x6ba95d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ba962;}}
}
B6ba95f:L6ba95f:{c.instructions+=1;NFSU2_TR(0x6ba95f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
}
B6ba962:L6ba962:{c.instructions+=2;NFSU2_TR(0x6ba962);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x8ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ba966:{NFSU2_TR(0x6ba966);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ba96b;}}
}
B6ba968:L6ba968:{c.instructions+=1;NFSU2_TR(0x6ba968);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
}
B6ba96b:L6ba96b:{c.instructions+=2;NFSU2_TR(0x6ba96b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6ba96e:{NFSU2_TR(0x6ba96e);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6ba979;}}
}
B6ba970:L6ba970:{c.instructions+=3;NFSU2_TR(0x6ba970);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ba973:{NFSU2_TR(0x6ba973);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba976:{NFSU2_TR(0x6ba976);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba979:L6ba979:{c.instructions+=1;NFSU2_TR(0x6ba979);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x404ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba97f:L6ba97f:{c.instructions+=4;NFSU2_TR(0x6ba97f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ba982:{NFSU2_TR(0x6ba982);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ba985:{NFSU2_TR(0x6ba985);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6ba988:{NFSU2_TR(0x6ba988);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ba7eau);}goto L6ba7ea;}}
}
B6ba98e:L6ba98e:{c.instructions+=4;NFSU2_TR(0x6ba98e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ba994:{NFSU2_TR(0x6ba994);
w4(R+8,u32(0x200ull));
}
B6ba999:{NFSU2_TR(0x6ba999);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ba99b:{NFSU2_TR(0x6ba99b);
__builtin_memmove((R+4),(R+8),4);
}
B6ba99d:L6ba99d:{c.instructions+=1;NFSU2_TR(0x6ba99d);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6ba99f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ba99du);}goto L6ba99d;}
}
B6ba99f:L6ba99f:{c.instructions+=2;NFSU2_TR(0x6ba99f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ba9a5:{NFSU2_TR(0x6ba9a5);
__builtin_memmove((R+4),(R+8),4);
}
B6ba9a7:L6ba9a7:{c.instructions+=1;NFSU2_TR(0x6ba9a7);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6ba9a9;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ba9a7u);}goto L6ba9a7;}
}
B6ba9a9:L6ba9a9:{c.instructions+=4;NFSU2_TR(0x6ba9a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba9af:{NFSU2_TR(0x6ba9af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ba9b5:{NFSU2_TR(0x6ba9b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ba9bb:{NFSU2_TR(0x6ba9bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0xcull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ba9c2:L6ba9c2:{c.instructions+=3;NFSU2_TR(0x6ba9c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6ba9c4:{NFSU2_TR(0x6ba9c4);
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
B6ba9c6:{NFSU2_TR(0x6ba9c6);
if(r1(R+518)){{goto L6ba9cf;}}
}
B6ba9c8:L6ba9c8:{c.instructions+=2;NFSU2_TR(0x6ba9c8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba9ca:{NFSU2_TR(0x6ba9ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba9cfull));
TAIL_STATIC(0x6739efu,673);
}
B6ba9cf:L6ba9cf:{c.instructions+=4;NFSU2_TR(0x6ba9cf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6ba9d1:{NFSU2_TR(0x6ba9d1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6ba9d4:{NFSU2_TR(0x6ba9d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ba9d7:{NFSU2_TR(0x6ba9d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ba9c2u);}goto L6ba9c2;}}
}
B6ba9d9:L6ba9d9:{c.instructions+=2;NFSU2_TR(0x6ba9d9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ba9dd:{NFSU2_TR(0x6ba9dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ba9f3;}}
}
B6ba9df:L6ba9df:{c.instructions+=2;NFSU2_TR(0x6ba9df);
u8 U[4];
w4(U+0,u32(0x7bcf58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba9e4:{NFSU2_TR(0x6ba9e4);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ba76au);}goto L6ba76a;}
}
B6ba9e9:L6ba9e9:{c.instructions+=2;NFSU2_TR(0x6ba9e9);
w4(R+28,u32(0x8007000eull));
}
B6ba9ee:{NFSU2_TR(0x6ba9ee);
{goto L6babcb;}
}
B6ba9f3:L6ba9f3:{c.instructions+=4;NFSU2_TR(0x6ba9f3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ba9f4:{NFSU2_TR(0x6ba9f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ba9f7:{NFSU2_TR(0x6ba9f7);
__builtin_memmove((R+4),(R+24),4);
}
B6ba9f9:{NFSU2_TR(0x6ba9f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ba9feull));
TAIL_STATIC(0x6b3dbfu,6b3);
}
B6ba9fe:L6ba9fe:{c.instructions+=2;NFSU2_TR(0x6ba9fe);
__builtin_memmove((R+4),(R+24),4);
}
B6baa00:{NFSU2_TR(0x6baa00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6baa05ull));
TAIL_STATIC(0x6b33a1u,6b3);
}
B6baa05:L6baa05:{c.instructions+=2;NFSU2_TR(0x6baa05);
__builtin_memmove((R+4),(R+24),4);
}
B6baa07:{NFSU2_TR(0x6baa07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6baa0cull));
TAIL_STATIC(0x6b9711u,6b9);
}
B6baa0c:L6baa0c:{c.instructions+=3;NFSU2_TR(0x6baa0c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6baa0d:{NFSU2_TR(0x6baa0d);
__builtin_memmove((R+4),(R+24),4);
}
B6baa0f:{NFSU2_TR(0x6baa0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6baa14ull));
TAIL_STATIC(0x6b419eu,6b4);
}
B6baa14:L6baa14:{c.instructions+=3;NFSU2_TR(0x6baa14);
__builtin_memmove((R+28),(R+0),4);
}
B6baa16:{NFSU2_TR(0x6baa16);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B6baa18:{NFSU2_TR(0x6baa18);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6babcb;}}
}
B6baa1e:L6baa1e:{c.instructions+=4;NFSU2_TR(0x6baa1e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6baa1f:{NFSU2_TR(0x6baa1f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6baa20:{NFSU2_TR(0x6baa20);
__builtin_memmove((R+4),(R+24),4);
}
B6baa22:{NFSU2_TR(0x6baa22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6baa27ull));
TAIL_STATIC(0x6b5928u,6b5);
}
B6baa27:L6baa27:{c.instructions+=3;NFSU2_TR(0x6baa27);
__builtin_memmove((R+28),(R+0),4);
}
B6baa29:{NFSU2_TR(0x6baa29);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B6baa2b:{NFSU2_TR(0x6baa2b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6babcb;}}
}
B6baa31:L6baa31:{c.instructions+=2;NFSU2_TR(0x6baa31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6baa37:{NFSU2_TR(0x6baa37);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6baa39:L6baa39:{c.instructions+=2;NFSU2_TR(0x6baa39);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6baa3b:{NFSU2_TR(0x6baa3b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6baa46;}}
}
B6baa3d:L6baa3d:{c.instructions+=4;NFSU2_TR(0x6baa3d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6baa3e:{NFSU2_TR(0x6baa3e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6baa41:{NFSU2_TR(0x6baa41);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x6ull))));
}
B6baa44:{NFSU2_TR(0x6baa44);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6baa39u);}goto L6baa39;}}
}
B6baa46:L6baa46:{c.instructions+=2;NFSU2_TR(0x6baa46);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6baa4d:{NFSU2_TR(0x6baa4d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bab4a;}}
}
B6baa53:L6baa53:{c.instructions+=2;NFSU2_TR(0x6baa53);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6baa56:{NFSU2_TR(0x6baa56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bab4a;}}
}
B6baa5c:L6baa5c:{c.instructions+=2;NFSU2_TR(0x6baa5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6baa62:{NFSU2_TR(0x6baa62);
{goto L6bab4a;}
}
B6baa67:L6baa67:{c.instructions+=2;NFSU2_TR(0x6baa67);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x80ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x80ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6baa6e:{NFSU2_TR(0x6baa6e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6baa8f;}}
}
B6baa70:L6baa70:{c.instructions+=7;NFSU2_TR(0x6baa70);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B6baa75:{NFSU2_TR(0x6baa75);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6baa76:{NFSU2_TR(0x6baa76);
u8 U[4];
w4(U+0,u32(0x7bcf18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6baa7b:{NFSU2_TR(0x6baa7b);
u8 U[4];
w4(U+0,u32(0x1194ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6baa80:{NFSU2_TR(0x6baa80);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6baa81:{NFSU2_TR(0x6baa81);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6baa82:{NFSU2_TR(0x6baa82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6baa87ull));
TAIL_STATIC(0x69e936u,69e);
}
B6baa87:L6baa87:{c.instructions+=2;NFSU2_TR(0x6baa87);
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
B6baa8a:{NFSU2_TR(0x6baa8a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ba2f6u);}goto L6ba2f6;}
}
B6baa8f:L6baa8f:{c.instructions+=2;NFSU2_TR(0x6baa8f);
__builtin_memmove((R+4),(R+24),4);
}
B6baa91:{NFSU2_TR(0x6baa91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6baa96ull));
TAIL_STATIC(0x6b2cf2u,6b2);
}
B6baa96:L6baa96:{c.instructions+=3;NFSU2_TR(0x6baa96);
__builtin_memmove((R+28),(R+0),4);
}
B6baa98:{NFSU2_TR(0x6baa98);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B6baa9a:{NFSU2_TR(0x6baa9a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6babcb;}}
}
B6baaa0:L6baaa0:{c.instructions+=2;NFSU2_TR(0x6baaa0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6baaa6:{NFSU2_TR(0x6baaa6);
if(r1(R+518)){{goto L6baae4;}}
}
B6baaa8:L6baaa8:{c.instructions+=2;NFSU2_TR(0x6baaa8);
__builtin_memmove((R+4),(R+24),4);
}
B6baaaa:{NFSU2_TR(0x6baaaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6baaafull));
TAIL_STATIC(0x6afd41u,6af);
}
B6baaaf:L6baaaf:{c.instructions+=3;NFSU2_TR(0x6baaaf);
__builtin_memmove((R+28),(R+0),4);
}
B6baab1:{NFSU2_TR(0x6baab1);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B6baab3:{NFSU2_TR(0x6baab3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6babcb;}}
}
B6baab9:L6baab9:{c.instructions+=2;NFSU2_TR(0x6baab9);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6baabf:{NFSU2_TR(0x6baabf);
if(r1(R+518)){{goto L6baae4;}}
}
B6baac1:L6baac1:{c.instructions+=4;NFSU2_TR(0x6baac1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6baac7:{NFSU2_TR(0x6baac7);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6baacc:{NFSU2_TR(0x6baacc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x104ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6baad1:{NFSU2_TR(0x6baad1);
if(r1(R+518)){{goto L6baae4;}}
}
B6baad3:L6baad3:{c.instructions+=2;NFSU2_TR(0x6baad3);
__builtin_memmove((R+4),(R+24),4);
}
B6baad5:{NFSU2_TR(0x6baad5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6baadaull));
TAIL_STATIC(0x6b9af4u,6b9);
}
B6baada:L6baada:{c.instructions+=3;NFSU2_TR(0x6baada);
__builtin_memmove((R+28),(R+0),4);
}
B6baadc:{NFSU2_TR(0x6baadc);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B6baade:{NFSU2_TR(0x6baade);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6babcb;}}
}
B6baae4:L6baae4:{c.instructions+=2;NFSU2_TR(0x6baae4);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6baaea:{NFSU2_TR(0x6baaea);
if(r1(R+518)){{goto L6bab31;}}
}
B6baaec:L6baaec:{c.instructions+=4;NFSU2_TR(0x6baaec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6baaf2:{NFSU2_TR(0x6baaf2);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6baaf7:{NFSU2_TR(0x6baaf7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x104ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6baafc:{NFSU2_TR(0x6baafc);
if(r1(R+518)){{goto L6bab31;}}
}
B6baafe:L6baafe:{c.instructions+=2;NFSU2_TR(0x6baafe);
__builtin_memmove((R+4),(R+24),4);
}
B6bab00:{NFSU2_TR(0x6bab00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bab05ull));
TAIL_STATIC(0x6b0167u,6b0);
}
B6bab05:L6bab05:{c.instructions+=3;NFSU2_TR(0x6bab05);
__builtin_memmove((R+28),(R+0),4);
}
B6bab07:{NFSU2_TR(0x6bab07);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B6bab09:{NFSU2_TR(0x6bab09);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6babcb;}}
}
B6bab0f:L6bab0f:{c.instructions+=2;NFSU2_TR(0x6bab0f);
__builtin_memmove((R+4),(R+24),4);
}
B6bab11:{NFSU2_TR(0x6bab11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bab16ull));
TAIL_STATIC(0x6b8e03u,6b8);
}
B6bab16:L6bab16:{c.instructions+=3;NFSU2_TR(0x6bab16);
__builtin_memmove((R+28),(R+0),4);
}
B6bab18:{NFSU2_TR(0x6bab18);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B6bab1a:{NFSU2_TR(0x6bab1a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6babcb;}}
}
B6bab20:L6bab20:{c.instructions+=2;NFSU2_TR(0x6bab20);
__builtin_memmove((R+4),(R+24),4);
}
B6bab22:{NFSU2_TR(0x6bab22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bab27ull));
TAIL_STATIC(0x6b053cu,6b0);
}
B6bab27:L6bab27:{c.instructions+=3;NFSU2_TR(0x6bab27);
__builtin_memmove((R+28),(R+0),4);
}
B6bab29:{NFSU2_TR(0x6bab29);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B6bab2b:{NFSU2_TR(0x6bab2b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6babcb;}}
}
B6bab31:L6bab31:{c.instructions+=5;NFSU2_TR(0x6bab31);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bab32:{NFSU2_TR(0x6bab32);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bab33:{NFSU2_TR(0x6bab33);
__builtin_memmove((R+4),(R+24),4);
}
B6bab35:{NFSU2_TR(0x6bab35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bab3b:{NFSU2_TR(0x6bab3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bab40ull));
TAIL_STATIC(0x6b5928u,6b5);
}
B6bab40:L6bab40:{c.instructions+=3;NFSU2_TR(0x6bab40);
__builtin_memmove((R+28),(R+0),4);
}
B6bab42:{NFSU2_TR(0x6bab42);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B6bab44:{NFSU2_TR(0x6bab44);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6babcb;}}
}
B6bab4a:L6bab4a:{c.instructions+=3;NFSU2_TR(0x6bab4a);
__builtin_memmove((R+4),(R+24),4);
}
B6bab4c:{NFSU2_TR(0x6bab4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bab56:{NFSU2_TR(0x6bab56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bab5bull));
TAIL_STATIC(0x6b4e32u,6b4);
}
B6bab5b:L6bab5b:{c.instructions+=3;NFSU2_TR(0x6bab5b);
__builtin_memmove((R+28),(R+0),4);
}
B6bab5d:{NFSU2_TR(0x6bab5d);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B6bab5f:{NFSU2_TR(0x6bab5f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6babcb;}}
}
B6bab61:L6bab61:{c.instructions+=6;NFSU2_TR(0x6bab61);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bab62:{NFSU2_TR(0x6bab62);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bab68:{NFSU2_TR(0x6bab68);
__builtin_memmove((R+4),(R+24),4);
}
B6bab6a:{NFSU2_TR(0x6bab6a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bab6b:{NFSU2_TR(0x6bab6b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bab71:{NFSU2_TR(0x6bab71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bab76ull));
TAIL_STATIC(0x6b866cu,6b8);
}
B6bab76:L6bab76:{c.instructions+=3;NFSU2_TR(0x6bab76);
__builtin_memmove((R+28),(R+0),4);
}
B6bab78:{NFSU2_TR(0x6bab78);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B6bab7a:{NFSU2_TR(0x6bab7a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6babcb;}}
}
B6bab7c:L6bab7c:{c.instructions+=6;NFSU2_TR(0x6bab7c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bab7d:{NFSU2_TR(0x6bab7d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bab83:{NFSU2_TR(0x6bab83);
__builtin_memmove((R+4),(R+24),4);
}
B6bab85:{NFSU2_TR(0x6bab85);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bab86:{NFSU2_TR(0x6bab86);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bab8c:{NFSU2_TR(0x6bab8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bab91ull));
TAIL_STATIC(0x6b866cu,6b8);
}
B6bab91:L6bab91:{c.instructions+=3;NFSU2_TR(0x6bab91);
__builtin_memmove((R+28),(R+0),4);
}
B6bab93:{NFSU2_TR(0x6bab93);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B6bab95:{NFSU2_TR(0x6bab95);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6babcb;}}
}
B6bab97:L6bab97:{c.instructions+=2;NFSU2_TR(0x6bab97);
__builtin_memmove((R+4),(R+24),4);
}
B6bab99:{NFSU2_TR(0x6bab99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bab9eull));
TAIL_STATIC(0x6afaffu,6af);
}
B6bab9e:L6bab9e:{c.instructions+=3;NFSU2_TR(0x6bab9e);
__builtin_memmove((R+28),(R+0),4);
}
B6baba0:{NFSU2_TR(0x6baba0);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B6baba2:{NFSU2_TR(0x6baba2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6babcb;}}
}
B6baba4:L6baba4:{c.instructions+=2;NFSU2_TR(0x6baba4);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6babaa:{NFSU2_TR(0x6babaa);
if(r1(R+518)){{goto L6babc9;}}
}
B6babac:L6babac:{c.instructions+=4;NFSU2_TR(0x6babac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6babb2:{NFSU2_TR(0x6babb2);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6babb7:{NFSU2_TR(0x6babb7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x104ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6babbc:{NFSU2_TR(0x6babbc);
if(r1(R+518)){{goto L6babc9;}}
}
B6babbe:L6babbe:{c.instructions+=1;NFSU2_TR(0x6babbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6babc3ull));
TAIL_STATIC(0x6af298u,6af);
}
B6babc3:L6babc3:{c.instructions+=3;NFSU2_TR(0x6babc3);
__builtin_memmove((R+28),(R+0),4);
}
B6babc5:{NFSU2_TR(0x6babc5);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B6babc7:{NFSU2_TR(0x6babc7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6babcb;}}
}
B6babc9:L6babc9:{c.instructions+=1;NFSU2_TR(0x6babc9);
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
B6babcb:L6babcb:{c.instructions+=1;NFSU2_TR(0x6babcb);
__builtin_memmove((R+0),(R+28),4);
}
B6babcd:L6babcd:{c.instructions+=5;NFSU2_TR(0x6babcd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6babce:{NFSU2_TR(0x6babce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6babcf:{NFSU2_TR(0x6babcf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6babd0:{NFSU2_TR(0x6babd0);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6babd1:{NFSU2_TR(0x6babd1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6babd2:L6babd2:{c.instructions+=6;NFSU2_TR(0x6babd2);
__builtin_memmove((R+28),(R+28),4);
}
B6babd4:{NFSU2_TR(0x6babd4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6babd5:{NFSU2_TR(0x6babd5);
__builtin_memmove((R+20),(R+16),4);
}
B6babd7:{NFSU2_TR(0x6babd7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6babd8:{NFSU2_TR(0x6babd8);
__builtin_memmove((R+24),(R+4),4);
}
B6babda:{NFSU2_TR(0x6babda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6babdfull));
TAIL_STATIC(0x6cd15fu,6cd);
}
B6babdf:L6babdf:{c.instructions+=10;NFSU2_TR(0x6babdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6babe2:{NFSU2_TR(0x6babe2);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x228ull))));
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
B6babe9:{NFSU2_TR(0x6babe9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6babef:{NFSU2_TR(0x6babef);
u8 U[4];
w4(U+0,u32(0x7bd020ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6babf5:{NFSU2_TR(0x6babf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
w4(U+4,u32(0x80b650ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6babff:{NFSU2_TR(0x6babff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
w4(U+4,u32(0x80b770ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bac09:{NFSU2_TR(0x6bac09);
__builtin_memmove((R+0),(R+24),4);
}
B6bac0b:{NFSU2_TR(0x6bac0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6bac0c:{NFSU2_TR(0x6bac0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6bac0d:{NFSU2_TR(0x6bac0d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6bac10:L6bac10:{c.instructions+=9;NFSU2_TR(0x6bac10);
__builtin_memmove((R+28),(R+28),4);
}
B6bac12:{NFSU2_TR(0x6bac12);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bac13:{NFSU2_TR(0x6bac13);
__builtin_memmove((R+20),(R+16),4);
}
B6bac15:{NFSU2_TR(0x6bac15);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bac16:{NFSU2_TR(0x6bac16);
__builtin_memmove((R+8),(R+4),4);
}
B6bac18:{NFSU2_TR(0x6bac18);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bac1a:{NFSU2_TR(0x6bac1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6bac1b:{NFSU2_TR(0x6bac1b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6bac1d:{NFSU2_TR(0x6bac1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1f8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bac23:L6bac23:{c.instructions+=1;NFSU2_TR(0x6bac23);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6bac25;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bac23u);}goto L6bac23;}
}
B6bac25:L6bac25:{c.instructions+=7;NFSU2_TR(0x6bac25);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x218ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bac2b:{NFSU2_TR(0x6bac2b);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bac2c:{NFSU2_TR(0x6bac2c);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bac2d:{NFSU2_TR(0x6bac2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bac2e:{NFSU2_TR(0x6bac2e);
__builtin_memmove((R+4),(R+8),4);
}
B6bac30:{NFSU2_TR(0x6bac30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6bac31:{NFSU2_TR(0x6bac31);
TAIL_STATIC(0x6d0d29u,6d0);
}
B6bac36:L6bac36:{c.instructions+=6;NFSU2_TR(0x6bac36);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bac3c:{NFSU2_TR(0x6bac3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffff0200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bac41:{NFSU2_TR(0x6bac41);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bac43:{NFSU2_TR(0x6bac43);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bac49:{NFSU2_TR(0x6bac49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6bac4a:{NFSU2_TR(0x6bac4a);
if(r1(R+518)){{goto L6bacd9;}}
}
B6bac50:L6bac50:{c.instructions+=2;NFSU2_TR(0x6bac50);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffff0202ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bac55:{NFSU2_TR(0x6bac55);
if(r1(R+518)){{goto L6bacb3;}}
}
B6bac57:L6bac57:{c.instructions+=2;NFSU2_TR(0x6bac57);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffff0203ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bac5c:{NFSU2_TR(0x6bac5c);
if(r1(R+518)){{goto L6baca0;}}
}
B6bac5e:L6bac5e:{c.instructions+=2;NFSU2_TR(0x6bac5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffff02ffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bac63:{NFSU2_TR(0x6bac63);
if(r1(R+518)){{goto L6bac7d;}}
}
B6bac65:L6bac65:{c.instructions+=5;NFSU2_TR(0x6bac65);
u8 U[4];
w4(U+0,u32(0x7bd0c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bac6a:{NFSU2_TR(0x6bac6a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bac6c:{NFSU2_TR(0x6bac6c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bac6e:{NFSU2_TR(0x6bac6e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bac6f:{NFSU2_TR(0x6bac6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bac74ull));
TAIL_STATIC(0x69e936u,69e);
}
B6bac74:L6bac74:{c.instructions+=3;NFSU2_TR(0x6bac74);
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
B6bac77:{NFSU2_TR(0x6bac77);
w4(R+0,u32(0x80004005ull));
}
B6bac7c:{NFSU2_TR(0x6bac7c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6bac7d:L6bac7d:{c.instructions+=8;NFSU2_TR(0x6bac7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bac80:{NFSU2_TR(0x6bac80);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffdfull))));
}
B6bac83:{NFSU2_TR(0x6bac83);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10ull))));
}
B6bac86:{NFSU2_TR(0x6bac86);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x40000100ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bac8d:{NFSU2_TR(0x6bac8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bac94:{NFSU2_TR(0x6bac94);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
w4(U+4,u32(0x800ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bac9b:{NFSU2_TR(0x6bac9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bac9e:{NFSU2_TR(0x6bac9e);
{goto L6bacea;}
}
B6baca0:L6baca0:{c.instructions+=3;NFSU2_TR(0x6baca0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6baca7:{NFSU2_TR(0x6baca7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
w4(U+4,u32(0xffff0201ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bacb1:{NFSU2_TR(0x6bacb1);
{goto L6bace0;}
}
B6bacb3:L6bacb3:{c.instructions+=8;NFSU2_TR(0x6bacb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bacb6:{NFSU2_TR(0x6bacb6);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffdfull))));
}
B6bacb9:{NFSU2_TR(0x6bacb9);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x11ull))));
}
B6bacbc:{NFSU2_TR(0x6bacbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x48000100ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bacc3:{NFSU2_TR(0x6bacc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
w4(U+4,u32(0x16ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bacca:{NFSU2_TR(0x6bacca);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6baccd:{NFSU2_TR(0x6baccd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
w4(U+4,u32(0xffff0201ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bacd7:{NFSU2_TR(0x6bacd7);
{goto L6bacea;}
}
B6bacd9:L6bacd9:{c.instructions+=1;NFSU2_TR(0x6bacd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
w4(U+4,u32(0xcull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bace0:L6bace0:{c.instructions+=2;NFSU2_TR(0x6bace0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bace3:{NFSU2_TR(0x6bace3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x4000102ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bacea:L6bacea:{c.instructions+=11;NFSU2_TR(0x6bacea);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6baced:{NFSU2_TR(0x6baced);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x2000a1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bacf4:{NFSU2_TR(0x6bacf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bacfa:{NFSU2_TR(0x6bacfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bad01:{NFSU2_TR(0x6bad01);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bad04:{NFSU2_TR(0x6bad04);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
w4(U+4,u32(0x2000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bad0b:{NFSU2_TR(0x6bad0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bad12:{NFSU2_TR(0x6bad12);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bad19:{NFSU2_TR(0x6bad19);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bad20:{NFSU2_TR(0x6bad20);
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
B6bad22:{NFSU2_TR(0x6bad22);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6bad23:L6bad23:{c.instructions+=11;NFSU2_TR(0x6bad23);
__builtin_memmove((R+28),(R+28),4);
}
B6bad25:{NFSU2_TR(0x6bad25);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bad26:{NFSU2_TR(0x6bad26);
__builtin_memmove((R+20),(R+16),4);
}
B6bad28:{NFSU2_TR(0x6bad28);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bad29:{NFSU2_TR(0x6bad29);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bad2a:{NFSU2_TR(0x6bad2a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bad2b:{NFSU2_TR(0x6bad2b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bad2c:{NFSU2_TR(0x6bad2c);
__builtin_memmove((R+24),(R+4),4);
}
B6bad2e:{NFSU2_TR(0x6bad2e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6bad30:{NFSU2_TR(0x6bad30);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6bad37:{NFSU2_TR(0x6bad37);
if(r1(R+518)){{goto L6bad84;}}
}
B6bad39:L6bad39:{c.instructions+=1;NFSU2_TR(0x6bad39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bad3eull));
TAIL_STATIC(0x69e7abu,69e);
}
B6bad3e:L6bad3e:{c.instructions+=2;NFSU2_TR(0x6bad3e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bad41:{NFSU2_TR(0x6bad41);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bad70;}}
}
B6bad43:L6bad43:{c.instructions+=8;NFSU2_TR(0x6bad43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bad46:{NFSU2_TR(0x6bad46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bad4c:{NFSU2_TR(0x6bad4c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bad4f:{NFSU2_TR(0x6bad4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bad55:{NFSU2_TR(0x6bad55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bad57:{NFSU2_TR(0x6bad57);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6bad5c:{NFSU2_TR(0x6bad5c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bad61:{NFSU2_TR(0x6bad61);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bad6a;}}
}
B6bad63:L6bad63:{c.instructions+=2;NFSU2_TR(0x6bad63);
__builtin_memmove((R+4),(R+24),4);
}
B6bad65:{NFSU2_TR(0x6bad65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bad6aull));
TAIL_STATIC(0x6c3ac6u,6c3);
}
B6bad6a:L6bad6a:{c.instructions+=3;NFSU2_TR(0x6bad6a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6bad6b:{NFSU2_TR(0x6bad6b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6bad6e:{NFSU2_TR(0x6bad6e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bad43u);}goto L6bad43;}}
}
B6bad70:L6bad70:{c.instructions+=2;NFSU2_TR(0x6bad70);
__builtin_memmove((R+4),(R+24),4);
}
B6bad72:{NFSU2_TR(0x6bad72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bad77ull));
TAIL_STATIC(0x69e7c4u,69e);
}
B6bad77:L6bad77:{c.instructions+=2;NFSU2_TR(0x6bad77);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6bad7e:{NFSU2_TR(0x6bad7e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6bb083u,6bb);}
}
B6bad84:L6bad84:{c.instructions+=3;NFSU2_TR(0x6bad84);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6bad86:{NFSU2_TR(0x6bad86);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bad89:{NFSU2_TR(0x6bad89);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6badf2;}}
}
B6bad8b:L6bad8b:{c.instructions+=8;NFSU2_TR(0x6bad8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bad8e:{NFSU2_TR(0x6bad8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bad94:{NFSU2_TR(0x6bad94);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bad97:{NFSU2_TR(0x6bad97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bad9d:{NFSU2_TR(0x6bad9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bad9f:{NFSU2_TR(0x6bad9f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6bada4:{NFSU2_TR(0x6bada4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bada9:{NFSU2_TR(0x6bada9);
if(r1(R+518)){{goto L6badd7;}}
}
B6badab:L6badab:{c.instructions+=2;NFSU2_TR(0x6badab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6badb0:{NFSU2_TR(0x6badb0);
if(r1(R+518)){{goto L6badc5;}}
}
B6badb2:L6badb2:{c.instructions+=2;NFSU2_TR(0x6badb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6badb7:{NFSU2_TR(0x6badb7);
if(r1(R+518)){{goto L6badc5;}}
}
B6badb9:L6badb9:{c.instructions+=2;NFSU2_TR(0x6badb9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x30000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6badbe:{NFSU2_TR(0x6badbe);
if(r1(R+518)){{goto L6badc5;}}
}
B6badc0:L6badc0:{c.instructions+=3;NFSU2_TR(0x6badc0);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6badc2:{NFSU2_TR(0x6badc2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6badc3:{NFSU2_TR(0x6badc3);
{goto L6badea;}
}
B6badc5:L6badc5:{c.instructions+=2;NFSU2_TR(0x6badc5);
__builtin_memmove((R+4),(R+24),4);
}
B6badc7:{NFSU2_TR(0x6badc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6badccull));
TAIL_STATIC(0x6c44a4u,6c4);
}
B6badcc:L6badcc:{c.instructions+=3;NFSU2_TR(0x6badcc);
__builtin_memmove((R+4),(R+24),4);
}
B6badce:{NFSU2_TR(0x6badce);
__builtin_memmove((R+28),(R+0),4);
}
B6badd0:{NFSU2_TR(0x6badd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6badd5ull));
TAIL_STATIC(0x6c29d2u,6c2);
}
B6badd5:L6badd5:{c.instructions+=1;NFSU2_TR(0x6badd5);
{goto L6bade2;}
}
B6badd7:L6badd7:{c.instructions+=3;NFSU2_TR(0x6badd7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6badd9:{NFSU2_TR(0x6badd9);
__builtin_memmove((R+4),(R+24),4);
}
B6baddb:{NFSU2_TR(0x6baddb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bade0ull));
TAIL_STATIC(0x6ce15cu,6ce);
}
B6bade0:L6bade0:{c.instructions+=1;NFSU2_TR(0x6bade0);
__builtin_memmove((R+28),(R+0),4);
}
B6bade2:L6bade2:{c.instructions+=2;NFSU2_TR(0x6bade2);
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
B6bade4:{NFSU2_TR(0x6bade4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6bb0fau,6bb);}
}
B6badea:L6badea:{c.instructions+=3;NFSU2_TR(0x6badea);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6badeb:{NFSU2_TR(0x6badeb);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6badee:{NFSU2_TR(0x6badee);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bad8bu);}goto L6bad8b;}}
}
B6badf0:L6badf0:{c.instructions+=1;NFSU2_TR(0x6badf0);
{goto L6badf5;}
}
B6badf2:L6badf2:{c.instructions+=1;NFSU2_TR(0x6badf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6badf5:L6badf5:{c.instructions+=3;NFSU2_TR(0x6badf5);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6badf7:{NFSU2_TR(0x6badf7);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6badfa:{NFSU2_TR(0x6badfa);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bae5b;}}
}
B6badfc:L6badfc:{c.instructions+=8;NFSU2_TR(0x6badfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6badff:{NFSU2_TR(0x6badff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bae05:{NFSU2_TR(0x6bae05);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bae08:{NFSU2_TR(0x6bae08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bae0e:{NFSU2_TR(0x6bae0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bae10:{NFSU2_TR(0x6bae10);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6bae15:{NFSU2_TR(0x6bae15);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x30000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bae1a:{NFSU2_TR(0x6bae1a);
if(r1(R+518)){{goto L6bae21;}}
}
B6bae1c:L6bae1c:{c.instructions+=3;NFSU2_TR(0x6bae1c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6bae1e:{NFSU2_TR(0x6bae1e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6bae1f:{NFSU2_TR(0x6bae1f);
{goto L6bae55;}
}
B6bae21:L6bae21:{c.instructions+=2;NFSU2_TR(0x6bae21);
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
B6bae23:{NFSU2_TR(0x6bae23);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6bb0fau,6bb);}
}
B6bae29:L6bae29:{c.instructions+=6;NFSU2_TR(0x6bae29);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6bae2b:{NFSU2_TR(0x6bae2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bae2c:{NFSU2_TR(0x6bae2c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bae2d:{NFSU2_TR(0x6bae2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bae2e:{NFSU2_TR(0x6bae2e);
__builtin_memmove((R+4),(R+24),4);
}
B6bae30:{NFSU2_TR(0x6bae30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bae35ull));
TAIL_STATIC(0x6c3b49u,6c3);
}
B6bae35:L6bae35:{c.instructions+=3;NFSU2_TR(0x6bae35);
__builtin_memmove((R+28),(R+0),4);
}
B6bae37:{NFSU2_TR(0x6bae37);
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
B6bae39:{NFSU2_TR(0x6bae39);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6bb0fau,6bb);}
}
B6bae3f:L6bae3f:{c.instructions+=6;NFSU2_TR(0x6bae3f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6bae41:{NFSU2_TR(0x6bae41);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bae42:{NFSU2_TR(0x6bae42);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bae43:{NFSU2_TR(0x6bae43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bae44:{NFSU2_TR(0x6bae44);
__builtin_memmove((R+4),(R+24),4);
}
B6bae46:{NFSU2_TR(0x6bae46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bae4bull));
TAIL_STATIC(0x6c4145u,6c4);
}
B6bae4b:L6bae4b:{c.instructions+=3;NFSU2_TR(0x6bae4b);
__builtin_memmove((R+28),(R+0),4);
}
B6bae4d:{NFSU2_TR(0x6bae4d);
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
B6bae4f:{NFSU2_TR(0x6bae4f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6bb0fau,6bb);}
}
B6bae55:L6bae55:{c.instructions+=3;NFSU2_TR(0x6bae55);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6bae56:{NFSU2_TR(0x6bae56);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6bae59:{NFSU2_TR(0x6bae59);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6badfcu);}goto L6badfc;}}
}
B6bae5b:L6bae5b:{c.instructions+=2;NFSU2_TR(0x6bae5b);
__builtin_memmove((R+4),(R+24),4);
}
B6bae5d:{NFSU2_TR(0x6bae5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bae62ull));
TAIL_STATIC(0x69f745u,69f);
}
B6bae62:L6bae62:{c.instructions+=3;NFSU2_TR(0x6bae62);
__builtin_memmove((R+28),(R+0),4);
}
B6bae64:{NFSU2_TR(0x6bae64);
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
B6bae66:{NFSU2_TR(0x6bae66);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6bb0fau,6bb);}
}
B6bae6c:L6bae6c:{c.instructions+=2;NFSU2_TR(0x6bae6c);
__builtin_memmove((R+4),(R+24),4);
}
B6bae6e:{NFSU2_TR(0x6bae6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bae73ull));
TAIL_STATIC(0x6c29d2u,6c2);
}
B6bae73:L6bae73:{c.instructions+=3;NFSU2_TR(0x6bae73);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6bae75:{NFSU2_TR(0x6bae75);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bae78:{NFSU2_TR(0x6bae78);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6baebf;}}
}
B6bae7a:L6bae7a:{c.instructions+=8;NFSU2_TR(0x6bae7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bae7d:{NFSU2_TR(0x6bae7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bae83:{NFSU2_TR(0x6bae83);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bae86:{NFSU2_TR(0x6bae86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bae8c:{NFSU2_TR(0x6bae8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bae8e:{NFSU2_TR(0x6bae8e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6bae93:{NFSU2_TR(0x6bae93);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bae98:{NFSU2_TR(0x6bae98);
if(r1(R+518)){{goto L6baea1;}}
}
B6bae9a:L6bae9a:{c.instructions+=2;NFSU2_TR(0x6bae9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70b00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bae9f:{NFSU2_TR(0x6bae9f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6baeb9;}}
}
B6baea1:L6baea1:{c.instructions+=2;NFSU2_TR(0x6baea1);
__builtin_memmove((R+4),(R+24),4);
}
B6baea3:{NFSU2_TR(0x6baea3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6baea8ull));
TAIL_STATIC(0x6c44a4u,6c4);
}
B6baea8:L6baea8:{c.instructions+=3;NFSU2_TR(0x6baea8);
__builtin_memmove((R+4),(R+24),4);
}
B6baeaa:{NFSU2_TR(0x6baeaa);
__builtin_memmove((R+28),(R+0),4);
}
B6baeac:{NFSU2_TR(0x6baeac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6baeb1ull));
TAIL_STATIC(0x6c29d2u,6c2);
}
B6baeb1:L6baeb1:{c.instructions+=2;NFSU2_TR(0x6baeb1);
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
B6baeb3:{NFSU2_TR(0x6baeb3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6bb0fau,6bb);}
}
B6baeb9:L6baeb9:{c.instructions+=3;NFSU2_TR(0x6baeb9);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6baeba:{NFSU2_TR(0x6baeba);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6baebd:{NFSU2_TR(0x6baebd);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bae7au);}goto L6bae7a;}}
}
B6baebf:L6baebf:{c.instructions+=3;NFSU2_TR(0x6baebf);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6baec1:{NFSU2_TR(0x6baec1);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6baec4:{NFSU2_TR(0x6baec4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6baf51;}}
}
B6baeca:L6baeca:{c.instructions+=8;NFSU2_TR(0x6baeca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6baecd:{NFSU2_TR(0x6baecd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6baed3:{NFSU2_TR(0x6baed3);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6baed6:{NFSU2_TR(0x6baed6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6baedc:{NFSU2_TR(0x6baedc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6baede:{NFSU2_TR(0x6baede);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6baee3:{NFSU2_TR(0x6baee3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6baee8:{NFSU2_TR(0x6baee8);
if(r1(R+518)){{goto L6baf36;}}
}
B6baeea:L6baeea:{c.instructions+=2;NFSU2_TR(0x6baeea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10f00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6baeef:{NFSU2_TR(0x6baeef);
if(r1(R+518)){{goto L6baf2d;}}
}
B6baef1:L6baef1:{c.instructions+=2;NFSU2_TR(0x6baef1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6baef6:{NFSU2_TR(0x6baef6);
if(r1(R+518)){{goto L6baf15;}}
}
B6baef8:L6baef8:{c.instructions+=2;NFSU2_TR(0x6baef8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x30000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6baefd:{NFSU2_TR(0x6baefd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6baf47;}}
}
B6baeff:L6baeff:{c.instructions+=2;NFSU2_TR(0x6baeff);
__builtin_memmove((R+4),(R+24),4);
}
B6baf01:{NFSU2_TR(0x6baf01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6baf06ull));
TAIL_STATIC(0x6c94c2u,6c9);
}
B6baf06:L6baf06:{c.instructions+=3;NFSU2_TR(0x6baf06);
__builtin_memmove((R+28),(R+0),4);
}
B6baf08:{NFSU2_TR(0x6baf08);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6baf0a:{NFSU2_TR(0x6baf0a);
if(r1(R+518)){{goto L6baf47;}}
}
B6baf0c:L6baf0c:{c.instructions+=2;NFSU2_TR(0x6baf0c);
__builtin_memmove((R+4),(R+24),4);
}
B6baf0e:{NFSU2_TR(0x6baf0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6baf13ull));
TAIL_STATIC(0x6c9594u,6c9);
}
B6baf13:L6baf13:{c.instructions+=1;NFSU2_TR(0x6baf13);
{goto L6baf3d;}
}
B6baf15:L6baf15:{c.instructions+=2;NFSU2_TR(0x6baf15);
__builtin_memmove((R+4),(R+24),4);
}
B6baf17:{NFSU2_TR(0x6baf17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6baf1cull));
TAIL_STATIC(0x6c8e44u,6c8);
}
B6baf1c:L6baf1c:{c.instructions+=3;NFSU2_TR(0x6baf1c);
__builtin_memmove((R+28),(R+0),4);
}
B6baf1e:{NFSU2_TR(0x6baf1e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6baf20:{NFSU2_TR(0x6baf20);
if(r1(R+518)){{goto L6baf47;}}
}
B6baf22:L6baf22:{c.instructions+=3;NFSU2_TR(0x6baf22);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6baf24:{NFSU2_TR(0x6baf24);
__builtin_memmove((R+4),(R+24),4);
}
B6baf26:{NFSU2_TR(0x6baf26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6baf2bull));
TAIL_STATIC(0x6ce216u,6ce);
}
B6baf2b:L6baf2b:{c.instructions+=1;NFSU2_TR(0x6baf2b);
{goto L6baf3d;}
}
B6baf2d:L6baf2d:{c.instructions+=2;NFSU2_TR(0x6baf2d);
__builtin_memmove((R+4),(R+24),4);
}
B6baf2f:{NFSU2_TR(0x6baf2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6baf34ull));
TAIL_STATIC(0x6c69c1u,6c6);
}
B6baf34:L6baf34:{c.instructions+=1;NFSU2_TR(0x6baf34);
{goto L6baf3d;}
}
B6baf36:L6baf36:{c.instructions+=2;NFSU2_TR(0x6baf36);
__builtin_memmove((R+4),(R+24),4);
}
B6baf38:{NFSU2_TR(0x6baf38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6baf3dull));
TAIL_STATIC(0x6c363du,6c3);
}
B6baf3d:L6baf3d:{c.instructions+=3;NFSU2_TR(0x6baf3d);
__builtin_memmove((R+28),(R+0),4);
}
B6baf3f:{NFSU2_TR(0x6baf3f);
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
B6baf41:{NFSU2_TR(0x6baf41);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6bb0fau,6bb);}
}
B6baf47:L6baf47:{c.instructions+=3;NFSU2_TR(0x6baf47);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6baf48:{NFSU2_TR(0x6baf48);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6baf4b:{NFSU2_TR(0x6baf4b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6baecau);}goto L6baeca;}}
}
B6baf51:L6baf51:{c.instructions+=2;NFSU2_TR(0x6baf51);
__builtin_memmove((R+4),(R+24),4);
}
B6baf53:{NFSU2_TR(0x6baf53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6baf58ull));
TAIL_STATIC(0x69f745u,69f);
}
B6baf58:L6baf58:{c.instructions+=3;NFSU2_TR(0x6baf58);
__builtin_memmove((R+28),(R+0),4);
}
B6baf5a:{NFSU2_TR(0x6baf5a);
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
B6baf5c:{NFSU2_TR(0x6baf5c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6bb0fau,6bb);}
}
B6baf62:L6baf62:{c.instructions+=2;NFSU2_TR(0x6baf62);
__builtin_memmove((R+4),(R+24),4);
}
B6baf64:{NFSU2_TR(0x6baf64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6baf69ull));
TAIL_STATIC(0x6c29d2u,6c2);
}
B6baf69:L6baf69:{c.instructions+=3;NFSU2_TR(0x6baf69);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6baf6b:{NFSU2_TR(0x6baf6b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6baf6e:{NFSU2_TR(0x6baf6e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bafe0;}}
}
B6baf70:L6baf70:{c.instructions+=8;NFSU2_TR(0x6baf70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6baf73:{NFSU2_TR(0x6baf73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6baf79:{NFSU2_TR(0x6baf79);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6baf7c:{NFSU2_TR(0x6baf7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6baf82:{NFSU2_TR(0x6baf82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6baf84:{NFSU2_TR(0x6baf84);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6baf89:{NFSU2_TR(0x6baf89);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6baf8e:{NFSU2_TR(0x6baf8e);
if(r1(R+518)){{goto L6bafc9;}}
}
B6baf90:L6baf90:{c.instructions+=2;NFSU2_TR(0x6baf90);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x50000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6baf95:{NFSU2_TR(0x6baf95);
if(r1(R+518)){{goto L6bafc0;}}
}
B6baf97:L6baf97:{c.instructions+=2;NFSU2_TR(0x6baf97);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6baf9c:{NFSU2_TR(0x6baf9c);
if(r1(R+518)){{goto L6bafb5;}}
}
B6baf9e:L6baf9e:{c.instructions+=2;NFSU2_TR(0x6baf9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bafa3:{NFSU2_TR(0x6bafa3);
if(r1(R+518)){{goto L6bafac;}}
}
B6bafa5:L6bafa5:{c.instructions+=2;NFSU2_TR(0x6bafa5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73600000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bafaa:{NFSU2_TR(0x6bafaa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bafda;}}
}
B6bafac:L6bafac:{c.instructions+=2;NFSU2_TR(0x6bafac);
__builtin_memmove((R+4),(R+24),4);
}
B6bafae:{NFSU2_TR(0x6bafae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bafb3ull));
TAIL_STATIC(0x6c6d02u,6c6);
}
B6bafb3:L6bafb3:{c.instructions+=1;NFSU2_TR(0x6bafb3);
{goto L6bafd0;}
}
B6bafb5:L6bafb5:{c.instructions+=3;NFSU2_TR(0x6bafb5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bafb7:{NFSU2_TR(0x6bafb7);
__builtin_memmove((R+4),(R+24),4);
}
B6bafb9:{NFSU2_TR(0x6bafb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bafbeull));
TAIL_STATIC(0x6c9b3du,6c9);
}
B6bafbe:L6bafbe:{c.instructions+=1;NFSU2_TR(0x6bafbe);
{goto L6bafd0;}
}
B6bafc0:L6bafc0:{c.instructions+=2;NFSU2_TR(0x6bafc0);
__builtin_memmove((R+4),(R+24),4);
}
B6bafc2:{NFSU2_TR(0x6bafc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bafc7ull));
TAIL_STATIC(0x6c9104u,6c9);
}
B6bafc7:L6bafc7:{c.instructions+=1;NFSU2_TR(0x6bafc7);
{goto L6bafd0;}
}
B6bafc9:L6bafc9:{c.instructions+=2;NFSU2_TR(0x6bafc9);
__builtin_memmove((R+4),(R+24),4);
}
B6bafcb:{NFSU2_TR(0x6bafcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bafd0ull));
TAIL_STATIC(0x6c8841u,6c8);
}
B6bafd0:L6bafd0:{c.instructions+=3;NFSU2_TR(0x6bafd0);
__builtin_memmove((R+28),(R+0),4);
}
B6bafd2:{NFSU2_TR(0x6bafd2);
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
B6bafd4:{NFSU2_TR(0x6bafd4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6bb0fau,6bb);}
}
B6bafda:L6bafda:{c.instructions+=3;NFSU2_TR(0x6bafda);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6bafdb:{NFSU2_TR(0x6bafdb);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6bafde:{NFSU2_TR(0x6bafde);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6baf70u);}goto L6baf70;}}
}
B6bafe0:L6bafe0:{c.instructions+=2;NFSU2_TR(0x6bafe0);
__builtin_memmove((R+4),(R+24),4);
}
B6bafe2:{NFSU2_TR(0x6bafe2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bafe7ull));
TAIL_STATIC(0x6c29d2u,6c2);
}
B6bafe7:L6bafe7:{c.instructions+=3;NFSU2_TR(0x6bafe7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6bafe9:{NFSU2_TR(0x6bafe9);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bafec:{NFSU2_TR(0x6bafec);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6bb01bu,6bb);}
}
B6bafee:L6bafee:{c.instructions+=4;NFSU2_TR(0x6bafee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6baff1:{NFSU2_TR(0x6baff1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6baff7:{NFSU2_TR(0x6baff7);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6baffa:{NFSU2_TR(0x6baffa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x6bb000u,6bb);
}
XIT:NFSU2_TR_EXIT(0x6ba,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
