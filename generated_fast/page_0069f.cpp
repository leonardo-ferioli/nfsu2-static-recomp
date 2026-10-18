#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69a(u8* __restrict R,Cpu& c);
u32 body_69e(u8* __restrict R,Cpu& c);
u32 body_6a0(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x69f,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x69f,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_69f(u8* __restrict R,Cpu& c);
u32 page_69f(Cpu& c){return body_69f(c.regs.data(),c);}
__attribute__((noinline)) u32 body_69f(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x69f005:goto L69f005;
case 0x69f009:c.instructions+=2;goto B69f009;
case 0x69f00d:c.instructions+=1;goto B69f00d;
case 0x69f00f:goto L69f00f;
case 0x69f012:c.instructions+=6;goto B69f012;
case 0x69f015:c.instructions+=5;goto B69f015;
case 0x69f018:c.instructions+=4;goto B69f018;
case 0x69f01b:c.instructions+=3;goto B69f01b;
case 0x69f01e:c.instructions+=2;goto B69f01e;
case 0x69f021:c.instructions+=1;goto B69f021;
case 0x69f023:goto L69f023;
case 0x69f026:goto L69f026;
case 0x69f029:c.instructions+=3;goto B69f029;
case 0x69f02c:c.instructions+=2;goto B69f02c;
case 0x69f02e:c.instructions+=1;goto B69f02e;
case 0x69f030:goto L69f030;
case 0x69f033:c.instructions+=4;goto B69f033;
case 0x69f036:c.instructions+=3;goto B69f036;
case 0x69f039:c.instructions+=2;goto B69f039;
case 0x69f03c:c.instructions+=1;goto B69f03c;
case 0x69f03e:goto L69f03e;
case 0x69f041:goto L69f041;
case 0x69f043:c.instructions+=4;goto B69f043;
case 0x69f046:c.instructions+=3;goto B69f046;
case 0x69f049:c.instructions+=2;goto B69f049;
case 0x69f04c:c.instructions+=1;goto B69f04c;
case 0x69f04e:goto L69f04e;
case 0x69f051:goto L69f051;
case 0x69f054:c.instructions+=2;goto B69f054;
case 0x69f057:c.instructions+=1;goto B69f057;
case 0x69f059:goto L69f059;
case 0x69f05c:goto L69f05c;
case 0x69f05f:c.instructions+=1;goto B69f05f;
case 0x69f061:goto L69f061;
case 0x69f063:c.instructions+=4;goto B69f063;
case 0x69f066:c.instructions+=3;goto B69f066;
case 0x69f069:c.instructions+=2;goto B69f069;
case 0x69f06c:c.instructions+=1;goto B69f06c;
case 0x69f06e:goto L69f06e;
case 0x69f071:goto L69f071;
case 0x69f074:goto L69f074;
case 0x69f077:c.instructions+=1;goto B69f077;
case 0x69f079:goto L69f079;
case 0x69f07c:c.instructions+=3;goto B69f07c;
case 0x69f07f:c.instructions+=2;goto B69f07f;
case 0x69f082:c.instructions+=1;goto B69f082;
case 0x69f084:goto L69f084;
case 0x69f088:c.instructions+=2;goto B69f088;
case 0x69f08c:c.instructions+=1;goto B69f08c;
case 0x69f092:goto L69f092;
case 0x69f095:c.instructions+=6;goto B69f095;
case 0x69f098:c.instructions+=5;goto B69f098;
case 0x69f09b:c.instructions+=4;goto B69f09b;
case 0x69f09e:c.instructions+=3;goto B69f09e;
case 0x69f0a1:c.instructions+=2;goto B69f0a1;
case 0x69f0a4:c.instructions+=1;goto B69f0a4;
case 0x69f0a6:goto L69f0a6;
case 0x69f0a9:goto L69f0a9;
case 0x69f0ad:c.instructions+=2;goto B69f0ad;
case 0x69f0af:c.instructions+=1;goto B69f0af;
case 0x69f0b1:goto L69f0b1;
case 0x69f0b4:c.instructions+=4;goto B69f0b4;
case 0x69f0b7:c.instructions+=3;goto B69f0b7;
case 0x69f0ba:c.instructions+=2;goto B69f0ba;
case 0x69f0bd:c.instructions+=1;goto B69f0bd;
case 0x69f0bf:goto L69f0bf;
case 0x69f0c2:goto L69f0c2;
case 0x69f0c5:c.instructions+=4;goto B69f0c5;
case 0x69f0c8:c.instructions+=3;goto B69f0c8;
case 0x69f0cb:c.instructions+=2;goto B69f0cb;
case 0x69f0ce:c.instructions+=1;goto B69f0ce;
case 0x69f0d0:goto L69f0d0;
case 0x69f0d3:goto L69f0d3;
case 0x69f0d7:c.instructions+=1;goto B69f0d7;
case 0x69f0d9:goto L69f0d9;
case 0x69f0dc:c.instructions+=4;goto B69f0dc;
case 0x69f0df:c.instructions+=3;goto B69f0df;
case 0x69f0e2:c.instructions+=2;goto B69f0e2;
case 0x69f0e5:c.instructions+=1;goto B69f0e5;
case 0x69f0e7:goto L69f0e7;
case 0x69f0ea:goto L69f0ea;
case 0x69f0ed:c.instructions+=4;goto B69f0ed;
case 0x69f0f0:c.instructions+=3;goto B69f0f0;
case 0x69f0f3:c.instructions+=2;goto B69f0f3;
case 0x69f0f6:c.instructions+=1;goto B69f0f6;
case 0x69f0f8:goto L69f0f8;
case 0x69f0fb:goto L69f0fb;
case 0x69f0ff:c.instructions+=1;goto B69f0ff;
case 0x69f101:goto L69f101;
case 0x69f104:c.instructions+=1;goto B69f104;
case 0x69f106:goto L69f106;
case 0x69f108:c.instructions+=4;goto B69f108;
case 0x69f10b:c.instructions+=3;goto B69f10b;
case 0x69f10e:c.instructions+=2;goto B69f10e;
case 0x69f111:c.instructions+=1;goto B69f111;
case 0x69f113:goto L69f113;
case 0x69f116:goto L69f116;
case 0x69f119:c.instructions+=2;goto B69f119;
case 0x69f11c:c.instructions+=1;goto B69f11c;
case 0x69f11e:goto L69f11e;
case 0x69f121:c.instructions+=3;goto B69f121;
case 0x69f124:c.instructions+=2;goto B69f124;
case 0x69f127:c.instructions+=1;goto B69f127;
case 0x69f12d:goto L69f12d;
case 0x69f12e:c.instructions+=2;goto B69f12e;
case 0x69f131:c.instructions+=1;goto B69f131;
case 0x69f137:goto L69f137;
case 0x69f139:c.instructions+=1;goto B69f139;
case 0x69f13e:goto L69f13e;
case 0x69f142:c.instructions+=2;goto B69f142;
case 0x69f146:c.instructions+=1;goto B69f146;
case 0x69f14c:goto L69f14c;
case 0x69f14e:goto L69f14e;
case 0x69f151:c.instructions+=8;goto B69f151;
case 0x69f154:c.instructions+=7;goto B69f154;
case 0x69f157:c.instructions+=6;goto B69f157;
case 0x69f15a:c.instructions+=5;goto B69f15a;
case 0x69f15d:c.instructions+=4;goto B69f15d;
case 0x69f160:c.instructions+=3;goto B69f160;
case 0x69f163:c.instructions+=2;goto B69f163;
case 0x69f166:c.instructions+=1;goto B69f166;
case 0x69f168:goto L69f168;
case 0x69f16b:goto L69f16b;
case 0x69f16e:c.instructions+=2;goto B69f16e;
case 0x69f171:c.instructions+=1;goto B69f171;
case 0x69f173:goto L69f173;
case 0x69f176:goto L69f176;
case 0x69f179:c.instructions+=3;goto B69f179;
case 0x69f17b:c.instructions+=2;goto B69f17b;
case 0x69f17e:c.instructions+=1;goto B69f17e;
case 0x69f180:goto L69f180;
case 0x69f183:c.instructions+=2;goto B69f183;
case 0x69f186:c.instructions+=1;goto B69f186;
case 0x69f188:goto L69f188;
case 0x69f18b:c.instructions+=1;goto B69f18b;
case 0x69f18d:goto L69f18d;
case 0x69f190:c.instructions+=2;goto B69f190;
case 0x69f192:c.instructions+=1;goto B69f192;
case 0x69f194:goto L69f194;
case 0x69f198:c.instructions+=1;goto B69f198;
case 0x69f19a:goto L69f19a;
case 0x69f19d:c.instructions+=2;goto B69f19d;
case 0x69f19f:c.instructions+=1;goto B69f19f;
case 0x69f1a1:goto L69f1a1;
case 0x69f1a5:c.instructions+=1;goto B69f1a5;
case 0x69f1a7:goto L69f1a7;
case 0x69f1aa:c.instructions+=1;goto B69f1aa;
case 0x69f1b0:goto L69f1b0;
case 0x69f1b3:c.instructions+=7;goto B69f1b3;
case 0x69f1b6:c.instructions+=6;goto B69f1b6;
case 0x69f1b9:c.instructions+=5;goto B69f1b9;
case 0x69f1be:c.instructions+=4;goto B69f1be;
case 0x69f1c3:c.instructions+=3;goto B69f1c3;
case 0x69f1c6:c.instructions+=2;goto B69f1c6;
case 0x69f1c7:c.instructions+=1;goto B69f1c7;
case 0x69f1cc:goto L69f1cc;
case 0x69f1d3:c.instructions+=1;goto B69f1d3;
case 0x69f1d8:goto L69f1d8;
case 0x69f1d9:c.instructions+=3;goto B69f1d9;
case 0x69f1dc:c.instructions+=2;goto B69f1dc;
case 0x69f1e1:c.instructions+=1;goto B69f1e1;
case 0x69f1e3:goto L69f1e3;
case 0x69f1e5:c.instructions+=1;goto B69f1e5;
case 0x69f1e7:goto L69f1e7;
case 0x69f1eb:c.instructions+=1;goto B69f1eb;
case 0x69f1ed:goto L69f1ed;
case 0x69f1f0:c.instructions+=2;goto B69f1f0;
case 0x69f1f5:c.instructions+=1;goto B69f1f5;
case 0x69f1fa:goto L69f1fa;
case 0x69f1fc:c.instructions+=1;goto B69f1fc;
case 0x69f1fe:goto L69f1fe;
case 0x69f201:c.instructions+=2;goto B69f201;
case 0x69f204:c.instructions+=1;goto B69f204;
case 0x69f206:goto L69f206;
case 0x69f207:c.instructions+=2;goto B69f207;
case 0x69f20a:c.instructions+=1;goto B69f20a;
case 0x69f20f:goto L69f20f;
case 0x69f210:c.instructions+=3;goto B69f210;
case 0x69f211:c.instructions+=2;goto B69f211;
case 0x69f212:c.instructions+=1;goto B69f212;
case 0x69f217:goto L69f217;
case 0x69f21a:c.instructions+=1;goto B69f21a;
case 0x69f21f:goto L69f21f;
case 0x69f221:c.instructions+=1;goto B69f221;
case 0x69f223:goto L69f223;
case 0x69f227:c.instructions+=1;goto B69f227;
case 0x69f229:goto L69f229;
case 0x69f22c:c.instructions+=2;goto B69f22c;
case 0x69f231:c.instructions+=1;goto B69f231;
case 0x69f233:goto L69f233;
case 0x69f239:c.instructions+=1;goto B69f239;
case 0x69f23b:goto L69f23b;
case 0x69f240:c.instructions+=1;goto B69f240;
case 0x69f242:goto L69f242;
case 0x69f246:c.instructions+=1;goto B69f246;
case 0x69f248:goto L69f248;
case 0x69f24a:c.instructions+=1;goto B69f24a;
case 0x69f24c:goto L69f24c;
case 0x69f24f:c.instructions+=2;goto B69f24f;
case 0x69f252:c.instructions+=1;goto B69f252;
case 0x69f254:goto L69f254;
case 0x69f257:c.instructions+=2;goto B69f257;
case 0x69f25a:c.instructions+=1;goto B69f25a;
case 0x69f25f:goto L69f25f;
case 0x69f261:c.instructions+=1;goto B69f261;
case 0x69f263:goto L69f263;
case 0x69f266:c.instructions+=6;goto B69f266;
case 0x69f269:c.instructions+=5;goto B69f269;
case 0x69f26c:c.instructions+=4;goto B69f26c;
case 0x69f26e:c.instructions+=3;goto B69f26e;
case 0x69f273:c.instructions+=2;goto B69f273;
case 0x69f278:c.instructions+=1;goto B69f278;
case 0x69f27a:goto L69f27a;
case 0x69f27d:c.instructions+=2;goto B69f27d;
case 0x69f280:c.instructions+=1;goto B69f280;
case 0x69f282:goto L69f282;
case 0x69f283:c.instructions+=3;goto B69f283;
case 0x69f286:c.instructions+=2;goto B69f286;
case 0x69f28b:c.instructions+=1;goto B69f28b;
case 0x69f28d:goto L69f28d;
case 0x69f290:c.instructions+=1;goto B69f290;
case 0x69f295:goto L69f295;
case 0x69f296:c.instructions+=3;goto B69f296;
case 0x69f297:c.instructions+=2;goto B69f297;
case 0x69f298:c.instructions+=1;goto B69f298;
case 0x69f29d:goto L69f29d;
case 0x69f2a0:goto L69f2a0;
case 0x69f2a7:goto L69f2a7;
case 0x69f2aa:c.instructions+=3;goto B69f2aa;
case 0x69f2ad:c.instructions+=2;goto B69f2ad;
case 0x69f2b0:c.instructions+=1;goto B69f2b0;
case 0x69f2b6:goto L69f2b6;
case 0x69f2b9:c.instructions+=1;goto B69f2b9;
case 0x69f2bb:goto L69f2bb;
case 0x69f2c0:c.instructions+=1;goto B69f2c0;
case 0x69f2c2:goto L69f2c2;
case 0x69f2c4:goto L69f2c4;
case 0x69f2c5:c.instructions+=4;goto B69f2c5;
case 0x69f2c6:c.instructions+=3;goto B69f2c6;
case 0x69f2c7:c.instructions+=2;goto B69f2c7;
case 0x69f2c8:c.instructions+=1;goto B69f2c8;
case 0x69f2c9:goto L69f2c9;
case 0x69f2cb:c.instructions+=12;goto B69f2cb;
case 0x69f2cc:c.instructions+=11;goto B69f2cc;
case 0x69f2ce:c.instructions+=10;goto B69f2ce;
case 0x69f2d1:c.instructions+=9;goto B69f2d1;
case 0x69f2d2:c.instructions+=8;goto B69f2d2;
case 0x69f2d3:c.instructions+=7;goto B69f2d3;
case 0x69f2d5:c.instructions+=6;goto B69f2d5;
case 0x69f2d8:c.instructions+=5;goto B69f2d8;
case 0x69f2da:c.instructions+=4;goto B69f2da;
case 0x69f2dc:c.instructions+=3;goto B69f2dc;
case 0x69f2dd:c.instructions+=2;goto B69f2dd;
case 0x69f2e0:c.instructions+=1;goto B69f2e0;
case 0x69f2e2:goto L69f2e2;
case 0x69f2e5:goto L69f2e5;
case 0x69f2e7:c.instructions+=3;goto B69f2e7;
case 0x69f2ea:c.instructions+=2;goto B69f2ea;
case 0x69f2ed:c.instructions+=1;goto B69f2ed;
case 0x69f2ef:goto L69f2ef;
case 0x69f2f2:c.instructions+=1;goto B69f2f2;
case 0x69f2f4:goto L69f2f4;
case 0x69f2f7:goto L69f2f7;
case 0x69f2fa:c.instructions+=2;goto B69f2fa;
case 0x69f2fb:c.instructions+=1;goto B69f2fb;
case 0x69f2fd:goto L69f2fd;
case 0x69f300:c.instructions+=3;goto B69f300;
case 0x69f303:c.instructions+=2;goto B69f303;
case 0x69f306:c.instructions+=1;goto B69f306;
case 0x69f30c:goto L69f30c;
case 0x69f30f:c.instructions+=5;goto B69f30f;
case 0x69f312:c.instructions+=4;goto B69f312;
case 0x69f315:c.instructions+=3;goto B69f315;
case 0x69f318:c.instructions+=2;goto B69f318;
case 0x69f31a:c.instructions+=1;goto B69f31a;
case 0x69f31c:goto L69f31c;
case 0x69f31f:c.instructions+=1;goto B69f31f;
case 0x69f322:goto L69f322;
case 0x69f324:c.instructions+=4;goto B69f324;
case 0x69f327:c.instructions+=3;goto B69f327;
case 0x69f32a:c.instructions+=2;goto B69f32a;
case 0x69f32e:c.instructions+=1;goto B69f32e;
case 0x69f330:goto L69f330;
case 0x69f333:c.instructions+=4;goto B69f333;
case 0x69f336:c.instructions+=3;goto B69f336;
case 0x69f339:c.instructions+=2;goto B69f339;
case 0x69f33d:c.instructions+=1;goto B69f33d;
case 0x69f33f:goto L69f33f;
case 0x69f340:goto L69f340;
case 0x69f343:c.instructions+=2;goto B69f343;
case 0x69f346:c.instructions+=1;goto B69f346;
case 0x69f348:goto L69f348;
case 0x69f34a:goto L69f34a;
case 0x69f34d:c.instructions+=1;goto B69f34d;
case 0x69f353:goto L69f353;
case 0x69f355:c.instructions+=2;goto B69f355;
case 0x69f358:c.instructions+=1;goto B69f358;
case 0x69f35a:goto L69f35a;
case 0x69f35b:c.instructions+=6;goto B69f35b;
case 0x69f35c:c.instructions+=5;goto B69f35c;
case 0x69f361:c.instructions+=4;goto B69f361;
case 0x69f366:c.instructions+=3;goto B69f366;
case 0x69f367:c.instructions+=2;goto B69f367;
case 0x69f369:c.instructions+=1;goto B69f369;
case 0x69f36e:goto L69f36e;
case 0x69f371:c.instructions+=1;goto B69f371;
case 0x69f377:goto L69f377;
case 0x69f37a:c.instructions+=5;goto B69f37a;
case 0x69f37d:c.instructions+=4;goto B69f37d;
case 0x69f37e:c.instructions+=3;goto B69f37e;
case 0x69f380:c.instructions+=2;goto B69f380;
case 0x69f383:c.instructions+=1;goto B69f383;
case 0x69f388:goto L69f388;
case 0x69f38b:c.instructions+=2;goto B69f38b;
case 0x69f38e:c.instructions+=1;goto B69f38e;
case 0x69f390:goto L69f390;
case 0x69f393:goto L69f393;
case 0x69f396:c.instructions+=17;goto B69f396;
case 0x69f398:c.instructions+=16;goto B69f398;
case 0x69f39b:c.instructions+=15;goto B69f39b;
case 0x69f39e:c.instructions+=14;goto B69f39e;
case 0x69f3a1:c.instructions+=13;goto B69f3a1;
case 0x69f3a4:c.instructions+=12;goto B69f3a4;
case 0x69f3a7:c.instructions+=11;goto B69f3a7;
case 0x69f3aa:c.instructions+=10;goto B69f3aa;
case 0x69f3ad:c.instructions+=9;goto B69f3ad;
case 0x69f3ae:c.instructions+=8;goto B69f3ae;
case 0x69f3af:c.instructions+=7;goto B69f3af;
case 0x69f3b2:c.instructions+=6;goto B69f3b2;
case 0x69f3b5:c.instructions+=5;goto B69f3b5;
case 0x69f3b7:c.instructions+=4;goto B69f3b7;
case 0x69f3ba:c.instructions+=3;goto B69f3ba;
case 0x69f3bd:c.instructions+=2;goto B69f3bd;
case 0x69f3c3:c.instructions+=1;goto B69f3c3;
case 0x69f3c8:goto L69f3c8;
case 0x69f3cc:c.instructions+=1;goto B69f3cc;
case 0x69f3ce:goto L69f3ce;
case 0x69f3d1:c.instructions+=2;goto B69f3d1;
case 0x69f3d5:c.instructions+=1;goto B69f3d5;
case 0x69f3d7:goto L69f3d7;
case 0x69f3da:c.instructions+=11;goto B69f3da;
case 0x69f3dd:c.instructions+=10;goto B69f3dd;
case 0x69f3e0:c.instructions+=9;goto B69f3e0;
case 0x69f3e3:c.instructions+=8;goto B69f3e3;
case 0x69f3e6:c.instructions+=7;goto B69f3e6;
case 0x69f3e9:c.instructions+=6;goto B69f3e9;
case 0x69f3ec:c.instructions+=5;goto B69f3ec;
case 0x69f3ef:c.instructions+=4;goto B69f3ef;
case 0x69f3f2:c.instructions+=3;goto B69f3f2;
case 0x69f3f5:c.instructions+=2;goto B69f3f5;
case 0x69f3f8:c.instructions+=1;goto B69f3f8;
case 0x69f3fb:goto L69f3fb;
case 0x69f3fe:c.instructions+=6;goto B69f3fe;
case 0x69f401:c.instructions+=5;goto B69f401;
case 0x69f404:c.instructions+=4;goto B69f404;
case 0x69f405:c.instructions+=3;goto B69f405;
case 0x69f408:c.instructions+=2;goto B69f408;
case 0x69f40b:c.instructions+=1;goto B69f40b;
case 0x69f40d:goto L69f40d;
case 0x69f40f:goto L69f40f;
case 0x69f412:goto L69f412;
case 0x69f415:c.instructions+=3;goto B69f415;
case 0x69f418:c.instructions+=2;goto B69f418;
case 0x69f41b:c.instructions+=1;goto B69f41b;
case 0x69f421:goto L69f421;
case 0x69f423:c.instructions+=1;goto B69f423;
case 0x69f428:goto L69f428;
case 0x69f42a:c.instructions+=1;goto B69f42a;
case 0x69f42c:goto L69f42c;
case 0x69f42e:c.instructions+=2;goto B69f42e;
case 0x69f431:c.instructions+=1;goto B69f431;
case 0x69f433:goto L69f433;
case 0x69f436:c.instructions+=3;goto B69f436;
case 0x69f439:c.instructions+=2;goto B69f439;
case 0x69f43d:c.instructions+=1;goto B69f43d;
case 0x69f43f:goto L69f43f;
case 0x69f443:c.instructions+=1;goto B69f443;
case 0x69f445:goto L69f445;
case 0x69f448:c.instructions+=1;goto B69f448;
case 0x69f44b:goto L69f44b;
case 0x69f44c:c.instructions+=2;goto B69f44c;
case 0x69f44f:c.instructions+=1;goto B69f44f;
case 0x69f451:goto L69f451;
case 0x69f453:goto L69f453;
case 0x69f454:c.instructions+=4;goto B69f454;
case 0x69f455:c.instructions+=3;goto B69f455;
case 0x69f456:c.instructions+=2;goto B69f456;
case 0x69f457:c.instructions+=1;goto B69f457;
case 0x69f458:goto L69f458;
case 0x69f45d:c.instructions+=1;goto B69f45d;
case 0x69f45f:goto L69f45f;
case 0x69f461:c.instructions+=10;goto B69f461;
case 0x69f462:c.instructions+=9;goto B69f462;
case 0x69f464:c.instructions+=8;goto B69f464;
case 0x69f467:c.instructions+=7;goto B69f467;
case 0x69f468:c.instructions+=6;goto B69f468;
case 0x69f469:c.instructions+=5;goto B69f469;
case 0x69f46b:c.instructions+=4;goto B69f46b;
case 0x69f46c:c.instructions+=3;goto B69f46c;
case 0x69f46e:c.instructions+=2;goto B69f46e;
case 0x69f471:c.instructions+=1;goto B69f471;
case 0x69f476:goto L69f476;
case 0x69f479:c.instructions+=2;goto B69f479;
case 0x69f47c:c.instructions+=1;goto B69f47c;
case 0x69f482:goto L69f482;
case 0x69f485:c.instructions+=6;goto B69f485;
case 0x69f488:c.instructions+=5;goto B69f488;
case 0x69f48b:c.instructions+=4;goto B69f48b;
case 0x69f48e:c.instructions+=3;goto B69f48e;
case 0x69f491:c.instructions+=2;goto B69f491;
case 0x69f495:c.instructions+=1;goto B69f495;
case 0x69f497:goto L69f497;
case 0x69f498:c.instructions+=8;goto B69f498;
case 0x69f49a:c.instructions+=7;goto B69f49a;
case 0x69f49b:c.instructions+=6;goto B69f49b;
case 0x69f49e:c.instructions+=5;goto B69f49e;
case 0x69f4a0:c.instructions+=4;goto B69f4a0;
case 0x69f4a2:c.instructions+=3;goto B69f4a2;
case 0x69f4a8:c.instructions+=2;goto B69f4a8;
case 0x69f4aa:c.instructions+=1;goto B69f4aa;
case 0x69f4af:goto L69f4af;
case 0x69f4b2:c.instructions+=2;goto B69f4b2;
case 0x69f4b5:c.instructions+=1;goto B69f4b5;
case 0x69f4bb:goto L69f4bb;
case 0x69f4be:c.instructions+=10;goto B69f4be;
case 0x69f4c1:c.instructions+=9;goto B69f4c1;
case 0x69f4c4:c.instructions+=8;goto B69f4c4;
case 0x69f4c7:c.instructions+=7;goto B69f4c7;
case 0x69f4ca:c.instructions+=6;goto B69f4ca;
case 0x69f4cd:c.instructions+=5;goto B69f4cd;
case 0x69f4d0:c.instructions+=4;goto B69f4d0;
case 0x69f4d3:c.instructions+=3;goto B69f4d3;
case 0x69f4d6:c.instructions+=2;goto B69f4d6;
case 0x69f4d9:c.instructions+=1;goto B69f4d9;
case 0x69f4db:goto L69f4db;
case 0x69f4de:goto L69f4de;
case 0x69f4df:c.instructions+=2;goto B69f4df;
case 0x69f4e2:c.instructions+=1;goto B69f4e2;
case 0x69f4e4:goto L69f4e4;
case 0x69f4e8:c.instructions+=1;goto B69f4e8;
case 0x69f4ea:goto L69f4ea;
case 0x69f4ec:c.instructions+=1;goto B69f4ec;
case 0x69f4f1:goto L69f4f1;
case 0x69f4f4:c.instructions+=3;goto B69f4f4;
case 0x69f4f7:c.instructions+=2;goto B69f4f7;
case 0x69f4f8:c.instructions+=1;goto B69f4f8;
case 0x69f4fd:goto L69f4fd;
case 0x69f4ff:c.instructions+=4;goto B69f4ff;
case 0x69f501:c.instructions+=3;goto B69f501;
case 0x69f502:c.instructions+=2;goto B69f502;
case 0x69f505:c.instructions+=1;goto B69f505;
case 0x69f50b:goto L69f50b;
case 0x69f50d:c.instructions+=3;goto B69f50d;
case 0x69f510:c.instructions+=2;goto B69f510;
case 0x69f513:c.instructions+=1;goto B69f513;
case 0x69f515:goto L69f515;
case 0x69f518:c.instructions+=6;goto B69f518;
case 0x69f51b:c.instructions+=5;goto B69f51b;
case 0x69f51e:c.instructions+=4;goto B69f51e;
case 0x69f521:c.instructions+=3;goto B69f521;
case 0x69f524:c.instructions+=2;goto B69f524;
case 0x69f528:c.instructions+=1;goto B69f528;
case 0x69f52a:goto L69f52a;
case 0x69f52d:c.instructions+=3;goto B69f52d;
case 0x69f530:c.instructions+=2;goto B69f530;
case 0x69f533:c.instructions+=1;goto B69f533;
case 0x69f536:goto L69f536;
case 0x69f537:c.instructions+=2;goto B69f537;
case 0x69f53a:c.instructions+=1;goto B69f53a;
case 0x69f53c:goto L69f53c;
case 0x69f53d:c.instructions+=4;goto B69f53d;
case 0x69f540:c.instructions+=3;goto B69f540;
case 0x69f543:c.instructions+=2;goto B69f543;
case 0x69f548:c.instructions+=1;goto B69f548;
case 0x69f54d:goto L69f54d;
case 0x69f54f:c.instructions+=3;goto B69f54f;
case 0x69f552:c.instructions+=2;goto B69f552;
case 0x69f555:c.instructions+=1;goto B69f555;
case 0x69f557:goto L69f557;
case 0x69f55b:goto L69f55b;
case 0x69f55e:c.instructions+=1;goto B69f55e;
case 0x69f563:goto L69f563;
case 0x69f566:c.instructions+=6;goto B69f566;
case 0x69f567:c.instructions+=5;goto B69f567;
case 0x69f568:c.instructions+=4;goto B69f568;
case 0x69f569:c.instructions+=3;goto B69f569;
case 0x69f56a:c.instructions+=2;goto B69f56a;
case 0x69f56b:c.instructions+=1;goto B69f56b;
case 0x69f56c:goto L69f56c;
case 0x69f56f:goto L69f56f;
case 0x69f572:c.instructions+=9;goto B69f572;
case 0x69f575:c.instructions+=8;goto B69f575;
case 0x69f578:c.instructions+=7;goto B69f578;
case 0x69f57a:c.instructions+=6;goto B69f57a;
case 0x69f57d:c.instructions+=5;goto B69f57d;
case 0x69f57e:c.instructions+=4;goto B69f57e;
case 0x69f581:c.instructions+=3;goto B69f581;
case 0x69f584:c.instructions+=2;goto B69f584;
case 0x69f58b:c.instructions+=1;goto B69f58b;
case 0x69f58d:goto L69f58d;
case 0x69f590:c.instructions+=2;goto B69f590;
case 0x69f593:c.instructions+=1;goto B69f593;
case 0x69f596:goto L69f596;
case 0x69f599:c.instructions+=5;goto B69f599;
case 0x69f59b:c.instructions+=4;goto B69f59b;
case 0x69f59e:c.instructions+=3;goto B69f59e;
case 0x69f5a1:c.instructions+=2;goto B69f5a1;
case 0x69f5a4:c.instructions+=1;goto B69f5a4;
case 0x69f5a6:goto L69f5a6;
case 0x69f5a9:c.instructions+=2;goto B69f5a9;
case 0x69f5ac:c.instructions+=1;goto B69f5ac;
case 0x69f5ae:goto L69f5ae;
case 0x69f5b1:c.instructions+=2;goto B69f5b1;
case 0x69f5b4:c.instructions+=1;goto B69f5b4;
case 0x69f5b6:goto L69f5b6;
case 0x69f5b9:c.instructions+=5;goto B69f5b9;
case 0x69f5bc:c.instructions+=4;goto B69f5bc;
case 0x69f5bf:c.instructions+=3;goto B69f5bf;
case 0x69f5c3:c.instructions+=2;goto B69f5c3;
case 0x69f5c6:c.instructions+=1;goto B69f5c6;
case 0x69f5c8:goto L69f5c8;
case 0x69f5cb:c.instructions+=7;goto B69f5cb;
case 0x69f5cd:c.instructions+=6;goto B69f5cd;
case 0x69f5d2:c.instructions+=5;goto B69f5d2;
case 0x69f5d4:c.instructions+=4;goto B69f5d4;
case 0x69f5d9:c.instructions+=3;goto B69f5d9;
case 0x69f5da:c.instructions+=2;goto B69f5da;
case 0x69f5dc:c.instructions+=1;goto B69f5dc;
case 0x69f5e1:goto L69f5e1;
case 0x69f5e4:c.instructions+=1;goto B69f5e4;
case 0x69f5ea:goto L69f5ea;
case 0x69f5ed:c.instructions+=5;goto B69f5ed;
case 0x69f5f0:c.instructions+=4;goto B69f5f0;
case 0x69f5f4:c.instructions+=3;goto B69f5f4;
case 0x69f5f8:c.instructions+=2;goto B69f5f8;
case 0x69f5fb:c.instructions+=1;goto B69f5fb;
case 0x69f601:goto L69f601;
case 0x69f604:goto L69f604;
case 0x69f607:c.instructions+=7;goto B69f607;
case 0x69f609:c.instructions+=6;goto B69f609;
case 0x69f60c:c.instructions+=5;goto B69f60c;
case 0x69f60f:c.instructions+=4;goto B69f60f;
case 0x69f612:c.instructions+=3;goto B69f612;
case 0x69f615:c.instructions+=2;goto B69f615;
case 0x69f618:c.instructions+=1;goto B69f618;
case 0x69f61a:goto L69f61a;
case 0x69f61d:c.instructions+=3;goto B69f61d;
case 0x69f620:c.instructions+=2;goto B69f620;
case 0x69f624:c.instructions+=1;goto B69f624;
case 0x69f626:goto L69f626;
case 0x69f629:c.instructions+=2;goto B69f629;
case 0x69f62a:c.instructions+=1;goto B69f62a;
case 0x69f62f:goto L69f62f;
case 0x69f631:c.instructions+=2;goto B69f631;
case 0x69f634:c.instructions+=1;goto B69f634;
case 0x69f63a:goto L69f63a;
case 0x69f63c:c.instructions+=3;goto B69f63c;
case 0x69f641:c.instructions+=2;goto B69f641;
case 0x69f646:c.instructions+=1;goto B69f646;
case 0x69f648:goto L69f648;
case 0x69f64b:c.instructions+=3;goto B69f64b;
case 0x69f64d:c.instructions+=2;goto B69f64d;
case 0x69f64f:c.instructions+=1;goto B69f64f;
case 0x69f651:goto L69f651;
case 0x69f654:goto L69f654;
case 0x69f656:c.instructions+=1;goto B69f656;
case 0x69f658:goto L69f658;
case 0x69f659:c.instructions+=3;goto B69f659;
case 0x69f65c:c.instructions+=2;goto B69f65c;
case 0x69f65e:c.instructions+=1;goto B69f65e;
case 0x69f660:goto L69f660;
case 0x69f663:c.instructions+=6;goto B69f663;
case 0x69f666:c.instructions+=5;goto B69f666;
case 0x69f669:c.instructions+=4;goto B69f669;
case 0x69f66c:c.instructions+=3;goto B69f66c;
case 0x69f66f:c.instructions+=2;goto B69f66f;
case 0x69f672:c.instructions+=1;goto B69f672;
case 0x69f674:goto L69f674;
case 0x69f677:goto L69f677;
case 0x69f67a:c.instructions+=2;goto B69f67a;
case 0x69f67e:c.instructions+=1;goto B69f67e;
case 0x69f680:goto L69f680;
case 0x69f683:c.instructions+=4;goto B69f683;
case 0x69f686:c.instructions+=3;goto B69f686;
case 0x69f68a:c.instructions+=2;goto B69f68a;
case 0x69f68d:c.instructions+=1;goto B69f68d;
case 0x69f693:goto L69f693;
case 0x69f695:c.instructions+=2;goto B69f695;
case 0x69f698:c.instructions+=1;goto B69f698;
case 0x69f69a:goto L69f69a;
case 0x69f69c:goto L69f69c;
case 0x69f69e:c.instructions+=14;goto B69f69e;
case 0x69f6a1:c.instructions+=13;goto B69f6a1;
case 0x69f6a4:c.instructions+=12;goto B69f6a4;
case 0x69f6a7:c.instructions+=11;goto B69f6a7;
case 0x69f6aa:c.instructions+=10;goto B69f6aa;
case 0x69f6ad:c.instructions+=9;goto B69f6ad;
case 0x69f6b0:c.instructions+=8;goto B69f6b0;
case 0x69f6b3:c.instructions+=7;goto B69f6b3;
case 0x69f6b5:c.instructions+=6;goto B69f6b5;
case 0x69f6b8:c.instructions+=5;goto B69f6b8;
case 0x69f6bb:c.instructions+=4;goto B69f6bb;
case 0x69f6bc:c.instructions+=3;goto B69f6bc;
case 0x69f6bf:c.instructions+=2;goto B69f6bf;
case 0x69f6c2:c.instructions+=1;goto B69f6c2;
case 0x69f6c4:goto L69f6c4;
case 0x69f6c7:c.instructions+=4;goto B69f6c7;
case 0x69f6ca:c.instructions+=3;goto B69f6ca;
case 0x69f6cd:c.instructions+=2;goto B69f6cd;
case 0x69f6d0:c.instructions+=1;goto B69f6d0;
case 0x69f6d6:goto L69f6d6;
case 0x69f6db:goto L69f6db;
case 0x69f6e2:c.instructions+=1;goto B69f6e2;
case 0x69f6e7:goto L69f6e7;
case 0x69f6e9:c.instructions+=7;goto B69f6e9;
case 0x69f6ea:c.instructions+=6;goto B69f6ea;
case 0x69f6ec:c.instructions+=5;goto B69f6ec;
case 0x69f6ef:c.instructions+=4;goto B69f6ef;
case 0x69f6f1:c.instructions+=3;goto B69f6f1;
case 0x69f6f2:c.instructions+=2;goto B69f6f2;
case 0x69f6f4:c.instructions+=1;goto B69f6f4;
case 0x69f6f6:goto L69f6f6;
case 0x69f6f9:c.instructions+=1;goto B69f6f9;
case 0x69f6fa:goto L69f6fa;
case 0x69f6fd:c.instructions+=1;goto B69f6fd;
case 0x69f6ff:goto L69f6ff;
case 0x69f702:c.instructions+=4;goto B69f702;
case 0x69f705:c.instructions+=3;goto B69f705;
case 0x69f708:c.instructions+=2;goto B69f708;
case 0x69f70b:c.instructions+=1;goto B69f70b;
case 0x69f70d:goto L69f70d;
case 0x69f70f:goto L69f70f;
case 0x69f712:c.instructions+=3;goto B69f712;
case 0x69f715:c.instructions+=2;goto B69f715;
case 0x69f718:c.instructions+=1;goto B69f718;
case 0x69f71a:goto L69f71a;
case 0x69f71d:goto L69f71d;
case 0x69f720:c.instructions+=2;goto B69f720;
case 0x69f723:c.instructions+=1;goto B69f723;
case 0x69f725:goto L69f725;
case 0x69f728:c.instructions+=3;goto B69f728;
case 0x69f72a:c.instructions+=2;goto B69f72a;
case 0x69f72b:c.instructions+=1;goto B69f72b;
case 0x69f730:goto L69f730;
case 0x69f733:c.instructions+=2;goto B69f733;
case 0x69f736:c.instructions+=1;goto B69f736;
case 0x69f738:goto L69f738;
case 0x69f73b:c.instructions+=2;goto B69f73b;
case 0x69f73d:c.instructions+=1;goto B69f73d;
case 0x69f73f:goto L69f73f;
case 0x69f740:goto L69f740;
case 0x69f741:c.instructions+=2;goto B69f741;
case 0x69f742:c.instructions+=1;goto B69f742;
case 0x69f745:goto L69f745;
case 0x69f747:c.instructions+=10;goto B69f747;
case 0x69f748:c.instructions+=9;goto B69f748;
case 0x69f74a:c.instructions+=8;goto B69f74a;
case 0x69f74d:c.instructions+=7;goto B69f74d;
case 0x69f74e:c.instructions+=6;goto B69f74e;
case 0x69f74f:c.instructions+=5;goto B69f74f;
case 0x69f750:c.instructions+=4;goto B69f750;
case 0x69f752:c.instructions+=3;goto B69f752;
case 0x69f754:c.instructions+=2;goto B69f754;
case 0x69f757:c.instructions+=1;goto B69f757;
case 0x69f75c:goto L69f75c;
case 0x69f75e:c.instructions+=2;goto B69f75e;
case 0x69f761:c.instructions+=1;goto B69f761;
case 0x69f763:goto L69f763;
case 0x69f766:c.instructions+=13;goto B69f766;
case 0x69f769:c.instructions+=12;goto B69f769;
case 0x69f76c:c.instructions+=11;goto B69f76c;
case 0x69f76f:c.instructions+=10;goto B69f76f;
case 0x69f772:c.instructions+=9;goto B69f772;
case 0x69f775:c.instructions+=8;goto B69f775;
case 0x69f77b:c.instructions+=7;goto B69f77b;
case 0x69f77d:c.instructions+=6;goto B69f77d;
case 0x69f77f:c.instructions+=5;goto B69f77f;
case 0x69f782:c.instructions+=4;goto B69f782;
case 0x69f783:c.instructions+=3;goto B69f783;
case 0x69f786:c.instructions+=2;goto B69f786;
case 0x69f789:c.instructions+=1;goto B69f789;
case 0x69f78b:goto L69f78b;
case 0x69f78e:c.instructions+=1;goto B69f78e;
case 0x69f790:goto L69f790;
case 0x69f793:c.instructions+=6;goto B69f793;
case 0x69f794:c.instructions+=5;goto B69f794;
case 0x69f797:c.instructions+=4;goto B69f797;
case 0x69f799:c.instructions+=3;goto B69f799;
case 0x69f79f:c.instructions+=2;goto B69f79f;
case 0x69f7a5:c.instructions+=1;goto B69f7a5;
case 0x69f7a7:goto L69f7a7;
case 0x69f7aa:c.instructions+=1;goto B69f7aa;
case 0x69f7ac:goto L69f7ac;
case 0x69f7af:c.instructions+=5;goto B69f7af;
case 0x69f7b2:c.instructions+=4;goto B69f7b2;
case 0x69f7b5:c.instructions+=3;goto B69f7b5;
case 0x69f7b8:c.instructions+=2;goto B69f7b8;
case 0x69f7bc:c.instructions+=1;goto B69f7bc;
case 0x69f7be:goto L69f7be;
case 0x69f7c5:goto L69f7c5;
case 0x69f7c6:c.instructions+=2;goto B69f7c6;
case 0x69f7c9:c.instructions+=1;goto B69f7c9;
case 0x69f7cb:goto L69f7cb;
case 0x69f7cd:goto L69f7cd;
case 0x69f7cf:c.instructions+=1;goto B69f7cf;
case 0x69f7d1:goto L69f7d1;
case 0x69f7d4:c.instructions+=4;goto B69f7d4;
case 0x69f7d8:c.instructions+=3;goto B69f7d8;
case 0x69f7da:c.instructions+=2;goto B69f7da;
case 0x69f7dd:c.instructions+=1;goto B69f7dd;
case 0x69f7e3:goto L69f7e3;
case 0x69f7e6:c.instructions+=6;goto B69f7e6;
case 0x69f7e9:c.instructions+=5;goto B69f7e9;
case 0x69f7ec:c.instructions+=4;goto B69f7ec;
case 0x69f7ef:c.instructions+=3;goto B69f7ef;
case 0x69f7f1:c.instructions+=2;goto B69f7f1;
case 0x69f7f7:c.instructions+=1;goto B69f7f7;
case 0x69f7fd:goto L69f7fd;
case 0x69f7ff:c.instructions+=3;goto B69f7ff;
case 0x69f804:c.instructions+=2;goto B69f804;
case 0x69f809:c.instructions+=1;goto B69f809;
case 0x69f80f:goto L69f80f;
case 0x69f814:c.instructions+=1;goto B69f814;
case 0x69f816:goto L69f816;
case 0x69f819:c.instructions+=7;goto B69f819;
case 0x69f81f:c.instructions+=6;goto B69f81f;
case 0x69f821:c.instructions+=5;goto B69f821;
case 0x69f823:c.instructions+=4;goto B69f823;
case 0x69f827:c.instructions+=3;goto B69f827;
case 0x69f82b:c.instructions+=2;goto B69f82b;
case 0x69f82e:c.instructions+=1;goto B69f82e;
case 0x69f834:goto L69f834;
case 0x69f837:c.instructions+=9;goto B69f837;
case 0x69f83a:c.instructions+=8;goto B69f83a;
case 0x69f83d:c.instructions+=7;goto B69f83d;
case 0x69f840:c.instructions+=6;goto B69f840;
case 0x69f843:c.instructions+=5;goto B69f843;
case 0x69f846:c.instructions+=4;goto B69f846;
case 0x69f848:c.instructions+=3;goto B69f848;
case 0x69f849:c.instructions+=2;goto B69f849;
case 0x69f84b:c.instructions+=1;goto B69f84b;
case 0x69f84d:goto L69f84d;
case 0x69f850:goto L69f850;
case 0x69f851:c.instructions+=3;goto B69f851;
case 0x69f852:c.instructions+=2;goto B69f852;
case 0x69f854:c.instructions+=1;goto B69f854;
case 0x69f859:goto L69f859;
case 0x69f85d:c.instructions+=2;goto B69f85d;
case 0x69f861:c.instructions+=1;goto B69f861;
case 0x69f863:goto L69f863;
case 0x69f866:c.instructions+=7;goto B69f866;
case 0x69f86a:c.instructions+=6;goto B69f86a;
case 0x69f86d:c.instructions+=5;goto B69f86d;
case 0x69f870:c.instructions+=4;goto B69f870;
case 0x69f871:c.instructions+=3;goto B69f871;
case 0x69f874:c.instructions+=2;goto B69f874;
case 0x69f876:c.instructions+=1;goto B69f876;
case 0x69f87b:goto L69f87b;
case 0x69f87e:c.instructions+=3;goto B69f87e;
case 0x69f881:c.instructions+=2;goto B69f881;
case 0x69f884:c.instructions+=1;goto B69f884;
case 0x69f886:goto L69f886;
case 0x69f889:c.instructions+=3;goto B69f889;
case 0x69f88c:c.instructions+=2;goto B69f88c;
case 0x69f88f:c.instructions+=1;goto B69f88f;
case 0x69f891:goto L69f891;
case 0x69f893:goto L69f893;
case 0x69f896:c.instructions+=3;goto B69f896;
case 0x69f89a:c.instructions+=2;goto B69f89a;
case 0x69f89c:c.instructions+=1;goto B69f89c;
case 0x69f89e:goto L69f89e;
case 0x69f8a1:c.instructions+=2;goto B69f8a1;
case 0x69f8a4:c.instructions+=1;goto B69f8a4;
case 0x69f8a7:goto L69f8a7;
case 0x69f8a9:c.instructions+=4;goto B69f8a9;
case 0x69f8ac:c.instructions+=3;goto B69f8ac;
case 0x69f8af:c.instructions+=2;goto B69f8af;
case 0x69f8b2:c.instructions+=1;goto B69f8b2;
case 0x69f8b4:goto L69f8b4;
case 0x69f8b7:goto L69f8b7;
case 0x69f8ba:c.instructions+=2;goto B69f8ba;
case 0x69f8bd:c.instructions+=1;goto B69f8bd;
case 0x69f8bf:goto L69f8bf;
case 0x69f8c1:c.instructions+=3;goto B69f8c1;
case 0x69f8c2:c.instructions+=2;goto B69f8c2;
case 0x69f8c5:c.instructions+=1;goto B69f8c5;
case 0x69f8c7:goto L69f8c7;
case 0x69f8ca:goto L69f8ca;
case 0x69f8cc:c.instructions+=2;goto B69f8cc;
case 0x69f8ce:c.instructions+=1;goto B69f8ce;
case 0x69f8d0:goto L69f8d0;
case 0x69f8d3:c.instructions+=4;goto B69f8d3;
case 0x69f8d6:c.instructions+=3;goto B69f8d6;
case 0x69f8d9:c.instructions+=2;goto B69f8d9;
case 0x69f8db:c.instructions+=1;goto B69f8db;
case 0x69f8e0:goto L69f8e0;
case 0x69f8e1:c.instructions+=2;goto B69f8e1;
case 0x69f8e4:c.instructions+=1;goto B69f8e4;
case 0x69f8e6:goto L69f8e6;
case 0x69f8e8:c.instructions+=2;goto B69f8e8;
case 0x69f8eb:c.instructions+=1;goto B69f8eb;
case 0x69f8ed:goto L69f8ed;
case 0x69f8f0:c.instructions+=4;goto B69f8f0;
case 0x69f8f3:c.instructions+=3;goto B69f8f3;
case 0x69f8f6:c.instructions+=2;goto B69f8f6;
case 0x69f8f8:c.instructions+=1;goto B69f8f8;
case 0x69f8fd:goto L69f8fd;
case 0x69f8fe:c.instructions+=2;goto B69f8fe;
case 0x69f901:c.instructions+=1;goto B69f901;
case 0x69f903:goto L69f903;
case 0x69f907:c.instructions+=1;goto B69f907;
case 0x69f90d:goto L69f90d;
case 0x69f911:c.instructions+=1;goto B69f911;
case 0x69f917:goto L69f917;
case 0x69f919:c.instructions+=4;goto B69f919;
case 0x69f91c:c.instructions+=3;goto B69f91c;
case 0x69f91f:c.instructions+=2;goto B69f91f;
case 0x69f922:c.instructions+=1;goto B69f922;
case 0x69f928:goto L69f928;
case 0x69f92b:c.instructions+=6;goto B69f92b;
case 0x69f92e:c.instructions+=5;goto B69f92e;
case 0x69f931:c.instructions+=4;goto B69f931;
case 0x69f933:c.instructions+=3;goto B69f933;
case 0x69f938:c.instructions+=2;goto B69f938;
case 0x69f93d:c.instructions+=1;goto B69f93d;
case 0x69f943:goto L69f943;
case 0x69f946:c.instructions+=3;goto B69f946;
case 0x69f94a:c.instructions+=2;goto B69f94a;
case 0x69f94c:c.instructions+=1;goto B69f94c;
case 0x69f952:goto L69f952;
case 0x69f955:c.instructions+=7;goto B69f955;
case 0x69f958:c.instructions+=6;goto B69f958;
case 0x69f95b:c.instructions+=5;goto B69f95b;
case 0x69f95e:c.instructions+=4;goto B69f95e;
case 0x69f961:c.instructions+=3;goto B69f961;
case 0x69f965:c.instructions+=2;goto B69f965;
case 0x69f968:c.instructions+=1;goto B69f968;
case 0x69f96e:goto L69f96e;
case 0x69f970:c.instructions+=5;goto B69f970;
case 0x69f972:c.instructions+=4;goto B69f972;
case 0x69f975:c.instructions+=3;goto B69f975;
case 0x69f978:c.instructions+=2;goto B69f978;
case 0x69f97b:c.instructions+=1;goto B69f97b;
case 0x69f97d:goto L69f97d;
case 0x69f980:c.instructions+=3;goto B69f980;
case 0x69f983:c.instructions+=2;goto B69f983;
case 0x69f986:c.instructions+=1;goto B69f986;
case 0x69f988:goto L69f988;
case 0x69f98a:goto L69f98a;
case 0x69f98d:c.instructions+=7;goto B69f98d;
case 0x69f991:c.instructions+=6;goto B69f991;
case 0x69f994:c.instructions+=5;goto B69f994;
case 0x69f997:c.instructions+=4;goto B69f997;
case 0x69f99a:c.instructions+=3;goto B69f99a;
case 0x69f99d:c.instructions+=2;goto B69f99d;
case 0x69f9a1:c.instructions+=1;goto B69f9a1;
case 0x69f9a3:goto L69f9a3;
case 0x69f9a6:c.instructions+=1;goto B69f9a6;
case 0x69f9a8:goto L69f9a8;
case 0x69f9ab:goto L69f9ab;
case 0x69f9ae:c.instructions+=2;goto B69f9ae;
case 0x69f9b0:c.instructions+=1;goto B69f9b0;
case 0x69f9b2:goto L69f9b2;
case 0x69f9b5:c.instructions+=5;goto B69f9b5;
case 0x69f9b8:c.instructions+=4;goto B69f9b8;
case 0x69f9bb:c.instructions+=3;goto B69f9bb;
case 0x69f9be:c.instructions+=2;goto B69f9be;
case 0x69f9c1:c.instructions+=1;goto B69f9c1;
case 0x69f9c3:goto L69f9c3;
case 0x69f9c6:c.instructions+=4;goto B69f9c6;
case 0x69f9c9:c.instructions+=3;goto B69f9c9;
case 0x69f9cc:c.instructions+=2;goto B69f9cc;
case 0x69f9cf:c.instructions+=1;goto B69f9cf;
case 0x69f9d1:goto L69f9d1;
case 0x69f9d4:c.instructions+=3;goto B69f9d4;
case 0x69f9d7:c.instructions+=2;goto B69f9d7;
case 0x69f9da:c.instructions+=1;goto B69f9da;
case 0x69f9dc:goto L69f9dc;
case 0x69f9de:goto L69f9de;
case 0x69f9e1:c.instructions+=5;goto B69f9e1;
case 0x69f9e4:c.instructions+=4;goto B69f9e4;
case 0x69f9e6:c.instructions+=3;goto B69f9e6;
case 0x69f9e7:c.instructions+=2;goto B69f9e7;
case 0x69f9e9:c.instructions+=1;goto B69f9e9;
case 0x69f9eb:goto L69f9eb;
case 0x69f9ee:c.instructions+=2;goto B69f9ee;
case 0x69f9f1:c.instructions+=1;goto B69f9f1;
case 0x69f9f4:goto L69f9f4;
case 0x69f9f7:c.instructions+=3;goto B69f9f7;
case 0x69f9fa:c.instructions+=2;goto B69f9fa;
case 0x69f9fd:c.instructions+=1;goto B69f9fd;
case 0x69fa03:goto L69fa03;
case 0x69fa06:c.instructions+=3;goto B69fa06;
case 0x69fa09:c.instructions+=2;goto B69fa09;
case 0x69fa0c:c.instructions+=1;goto B69fa0c;
case 0x69fa12:goto L69fa12;
case 0x69fa16:c.instructions+=1;goto B69fa16;
case 0x69fa1c:goto L69fa1c;
case 0x69fa20:c.instructions+=2;goto B69fa20;
case 0x69fa24:c.instructions+=1;goto B69fa24;
case 0x69fa2a:goto L69fa2a;
case 0x69fa2d:c.instructions+=5;goto B69fa2d;
case 0x69fa30:c.instructions+=4;goto B69fa30;
case 0x69fa33:c.instructions+=3;goto B69fa33;
case 0x69fa35:c.instructions+=2;goto B69fa35;
case 0x69fa3b:c.instructions+=1;goto B69fa3b;
case 0x69fa41:goto L69fa41;
case 0x69fa43:c.instructions+=3;goto B69fa43;
case 0x69fa48:c.instructions+=2;goto B69fa48;
case 0x69fa4d:c.instructions+=1;goto B69fa4d;
case 0x69fa53:goto L69fa53;
case 0x69fa58:c.instructions+=1;goto B69fa58;
case 0x69fa5e:goto L69fa5e;
case 0x69fa61:c.instructions+=8;goto B69fa61;
case 0x69fa67:c.instructions+=7;goto B69fa67;
case 0x69fa69:c.instructions+=6;goto B69fa69;
case 0x69fa6b:c.instructions+=5;goto B69fa6b;
case 0x69fa6d:c.instructions+=4;goto B69fa6d;
case 0x69fa70:c.instructions+=3;goto B69fa70;
case 0x69fa73:c.instructions+=2;goto B69fa73;
case 0x69fa76:c.instructions+=1;goto B69fa76;
case 0x69fa78:goto L69fa78;
case 0x69fa7b:c.instructions+=6;goto B69fa7b;
case 0x69fa7e:c.instructions+=5;goto B69fa7e;
case 0x69fa81:c.instructions+=4;goto B69fa81;
case 0x69fa84:c.instructions+=3;goto B69fa84;
case 0x69fa87:c.instructions+=2;goto B69fa87;
case 0x69fa8b:c.instructions+=1;goto B69fa8b;
case 0x69fa8d:goto L69fa8d;
case 0x69fa91:c.instructions+=3;goto B69fa91;
case 0x69fa95:c.instructions+=2;goto B69fa95;
case 0x69fa98:c.instructions+=1;goto B69fa98;
case 0x69fa9a:goto L69fa9a;
case 0x69fa9d:c.instructions+=11;goto B69fa9d;
case 0x69faa1:c.instructions+=10;goto B69faa1;
case 0x69faa4:c.instructions+=9;goto B69faa4;
case 0x69faa7:c.instructions+=8;goto B69faa7;
case 0x69faa9:c.instructions+=7;goto B69faa9;
case 0x69faac:c.instructions+=6;goto B69faac;
case 0x69faae:c.instructions+=5;goto B69faae;
case 0x69fab1:c.instructions+=4;goto B69fab1;
case 0x69fab4:c.instructions+=3;goto B69fab4;
case 0x69fab7:c.instructions+=2;goto B69fab7;
case 0x69faba:c.instructions+=1;goto B69faba;
case 0x69fabc:goto L69fabc;
case 0x69fabd:goto L69fabd;
case 0x69fac0:c.instructions+=3;goto B69fac0;
case 0x69fac3:c.instructions+=2;goto B69fac3;
case 0x69fac6:c.instructions+=1;goto B69fac6;
case 0x69fac8:goto L69fac8;
case 0x69facb:goto L69facb;
case 0x69fad1:goto L69fad1;
case 0x69fad3:c.instructions+=1;goto B69fad3;
case 0x69fad5:goto L69fad5;
case 0x69fad7:c.instructions+=4;goto B69fad7;
case 0x69fad9:c.instructions+=3;goto B69fad9;
case 0x69fade:c.instructions+=2;goto B69fade;
case 0x69fae0:c.instructions+=1;goto B69fae0;
case 0x69fae2:goto L69fae2;
case 0x69fae4:goto L69fae4;
case 0x69fae6:c.instructions+=5;goto B69fae6;
case 0x69fae8:c.instructions+=4;goto B69fae8;
case 0x69fae9:c.instructions+=3;goto B69fae9;
case 0x69faec:c.instructions+=2;goto B69faec;
case 0x69faef:c.instructions+=1;goto B69faef;
case 0x69faf1:goto L69faf1;
case 0x69faf3:c.instructions+=2;goto B69faf3;
case 0x69faf6:c.instructions+=1;goto B69faf6;
case 0x69faf9:goto L69faf9;
case 0x69fafd:c.instructions+=2;goto B69fafd;
case 0x69faff:c.instructions+=1;goto B69faff;
case 0x69fb01:goto L69fb01;
case 0x69fb04:goto L69fb04;
case 0x69fb07:c.instructions+=9;goto B69fb07;
case 0x69fb0b:c.instructions+=8;goto B69fb0b;
case 0x69fb0e:c.instructions+=7;goto B69fb0e;
case 0x69fb11:c.instructions+=6;goto B69fb11;
case 0x69fb14:c.instructions+=5;goto B69fb14;
case 0x69fb17:c.instructions+=4;goto B69fb17;
case 0x69fb1a:c.instructions+=3;goto B69fb1a;
case 0x69fb1d:c.instructions+=2;goto B69fb1d;
case 0x69fb20:c.instructions+=1;goto B69fb20;
case 0x69fb22:goto L69fb22;
case 0x69fb25:c.instructions+=6;goto B69fb25;
case 0x69fb27:c.instructions+=5;goto B69fb27;
case 0x69fb2a:c.instructions+=4;goto B69fb2a;
case 0x69fb2d:c.instructions+=3;goto B69fb2d;
case 0x69fb30:c.instructions+=2;goto B69fb30;
case 0x69fb33:c.instructions+=1;goto B69fb33;
case 0x69fb35:goto L69fb35;
case 0x69fb37:c.instructions+=3;goto B69fb37;
case 0x69fb3b:c.instructions+=2;goto B69fb3b;
case 0x69fb3e:c.instructions+=1;goto B69fb3e;
case 0x69fb40:goto L69fb40;
case 0x69fb42:c.instructions+=2;goto B69fb42;
case 0x69fb45:c.instructions+=1;goto B69fb45;
case 0x69fb47:goto L69fb47;
case 0x69fb4a:c.instructions+=1;goto B69fb4a;
case 0x69fb4d:goto L69fb4d;
case 0x69fb4f:c.instructions+=3;goto B69fb4f;
case 0x69fb52:c.instructions+=2;goto B69fb52;
case 0x69fb56:c.instructions+=1;goto B69fb56;
case 0x69fb58:goto L69fb58;
case 0x69fb59:c.instructions+=3;goto B69fb59;
case 0x69fb5c:c.instructions+=2;goto B69fb5c;
case 0x69fb5f:c.instructions+=1;goto B69fb5f;
case 0x69fb61:goto L69fb61;
case 0x69fb64:goto L69fb64;
case 0x69fb66:goto L69fb66;
case 0x69fb68:c.instructions+=2;goto B69fb68;
case 0x69fb6a:c.instructions+=1;goto B69fb6a;
case 0x69fb6d:goto L69fb6d;
case 0x69fb70:c.instructions+=1;goto B69fb70;
case 0x69fb77:goto L69fb77;
case 0x69fb7a:c.instructions+=3;goto B69fb7a;
case 0x69fb7d:c.instructions+=2;goto B69fb7d;
case 0x69fb80:c.instructions+=1;goto B69fb80;
case 0x69fb86:goto L69fb86;
case 0x69fb88:c.instructions+=2;goto B69fb88;
case 0x69fb8b:c.instructions+=1;goto B69fb8b;
case 0x69fb8d:goto L69fb8d;
case 0x69fb90:c.instructions+=3;goto B69fb90;
case 0x69fb93:c.instructions+=2;goto B69fb93;
case 0x69fb96:c.instructions+=1;goto B69fb96;
case 0x69fb98:goto L69fb98;
case 0x69fb9b:c.instructions+=2;goto B69fb9b;
case 0x69fb9e:c.instructions+=1;goto B69fb9e;
case 0x69fba0:goto L69fba0;
case 0x69fba2:goto L69fba2;
case 0x69fba5:c.instructions+=2;goto B69fba5;
case 0x69fba9:c.instructions+=1;goto B69fba9;
case 0x69fbab:goto L69fbab;
case 0x69fbae:c.instructions+=3;goto B69fbae;
case 0x69fbb1:c.instructions+=2;goto B69fbb1;
case 0x69fbb3:c.instructions+=1;goto B69fbb3;
case 0x69fbb5:goto L69fbb5;
case 0x69fbb9:c.instructions+=1;goto B69fbb9;
case 0x69fbbb:goto L69fbbb;
case 0x69fbbe:c.instructions+=3;goto B69fbbe;
case 0x69fbc1:c.instructions+=2;goto B69fbc1;
case 0x69fbc5:c.instructions+=1;goto B69fbc5;
case 0x69fbc7:goto L69fbc7;
case 0x69fbca:c.instructions+=4;goto B69fbca;
case 0x69fbcd:c.instructions+=3;goto B69fbcd;
case 0x69fbd0:c.instructions+=2;goto B69fbd0;
case 0x69fbd3:c.instructions+=1;goto B69fbd3;
case 0x69fbd5:goto L69fbd5;
case 0x69fbd8:c.instructions+=1;goto B69fbd8;
case 0x69fbda:goto L69fbda;
case 0x69fbdd:c.instructions+=1;goto B69fbdd;
case 0x69fbe4:goto L69fbe4;
case 0x69fbe5:c.instructions+=2;goto B69fbe5;
case 0x69fbe8:c.instructions+=1;goto B69fbe8;
case 0x69fbea:goto L69fbea;
case 0x69fbec:c.instructions+=7;goto B69fbec;
case 0x69fbef:c.instructions+=6;goto B69fbef;
case 0x69fbf0:c.instructions+=5;goto B69fbf0;
case 0x69fbf1:c.instructions+=4;goto B69fbf1;
case 0x69fbf4:c.instructions+=3;goto B69fbf4;
case 0x69fbf5:c.instructions+=2;goto B69fbf5;
case 0x69fbf6:c.instructions+=1;goto B69fbf6;
case 0x69fbf7:goto L69fbf7;
case 0x69fbf9:c.instructions+=10;goto B69fbf9;
case 0x69fbfa:c.instructions+=9;goto B69fbfa;
case 0x69fbfc:c.instructions+=8;goto B69fbfc;
case 0x69fbff:c.instructions+=7;goto B69fbff;
case 0x69fc00:c.instructions+=6;goto B69fc00;
case 0x69fc02:c.instructions+=5;goto B69fc02;
case 0x69fc05:c.instructions+=4;goto B69fc05;
case 0x69fc08:c.instructions+=3;goto B69fc08;
case 0x69fc09:c.instructions+=2;goto B69fc09;
case 0x69fc0a:c.instructions+=1;goto B69fc0a;
case 0x69fc0f:goto L69fc0f;
case 0x69fc11:c.instructions+=4;goto B69fc11;
case 0x69fc13:c.instructions+=3;goto B69fc13;
case 0x69fc14:c.instructions+=2;goto B69fc14;
case 0x69fc17:c.instructions+=1;goto B69fc17;
case 0x69fc19:goto L69fc19;
case 0x69fc1e:c.instructions+=1;goto B69fc1e;
case 0x69fc23:goto L69fc23;
case 0x69fc24:c.instructions+=5;goto B69fc24;
case 0x69fc27:c.instructions+=4;goto B69fc27;
case 0x69fc29:c.instructions+=3;goto B69fc29;
case 0x69fc2c:c.instructions+=2;goto B69fc2c;
case 0x69fc2f:c.instructions+=1;goto B69fc2f;
case 0x69fc34:goto L69fc34;
case 0x69fc36:c.instructions+=1;goto B69fc36;
case 0x69fc3b:goto L69fc3b;
case 0x69fc3e:c.instructions+=2;goto B69fc3e;
case 0x69fc41:c.instructions+=1;goto B69fc41;
case 0x69fc47:goto L69fc47;
case 0x69fc4a:c.instructions+=5;goto B69fc4a;
case 0x69fc4d:c.instructions+=4;goto B69fc4d;
case 0x69fc50:c.instructions+=3;goto B69fc50;
case 0x69fc54:c.instructions+=2;goto B69fc54;
case 0x69fc57:c.instructions+=1;goto B69fc57;
case 0x69fc5d:goto L69fc5d;
case 0x69fc60:c.instructions+=2;goto B69fc60;
case 0x69fc63:c.instructions+=1;goto B69fc63;
case 0x69fc69:goto L69fc69;
case 0x69fc6c:c.instructions+=5;goto B69fc6c;
case 0x69fc6f:c.instructions+=4;goto B69fc6f;
case 0x69fc72:c.instructions+=3;goto B69fc72;
case 0x69fc75:c.instructions+=2;goto B69fc75;
case 0x69fc77:c.instructions+=1;goto B69fc77;
case 0x69fc7d:goto L69fc7d;
case 0x69fc7f:c.instructions+=1;goto B69fc7f;
case 0x69fc85:goto L69fc85;
case 0x69fc88:c.instructions+=6;goto B69fc88;
case 0x69fc8b:c.instructions+=5;goto B69fc8b;
case 0x69fc8d:c.instructions+=4;goto B69fc8d;
case 0x69fc8f:c.instructions+=3;goto B69fc8f;
case 0x69fc94:c.instructions+=2;goto B69fc94;
case 0x69fc99:c.instructions+=1;goto B69fc99;
case 0x69fc9f:goto L69fc9f;
case 0x69fca4:c.instructions+=1;goto B69fca4;
case 0x69fcaa:goto L69fcaa;
case 0x69fcac:c.instructions+=4;goto B69fcac;
case 0x69fcb2:c.instructions+=3;goto B69fcb2;
case 0x69fcb7:c.instructions+=2;goto B69fcb7;
case 0x69fcb9:c.instructions+=1;goto B69fcb9;
case 0x69fcbb:goto L69fcbb;
case 0x69fcc1:goto L69fcc1;
case 0x69fcc7:c.instructions+=1;goto B69fcc7;
case 0x69fccd:goto L69fccd;
case 0x69fcd3:c.instructions+=1;goto B69fcd3;
case 0x69fcd9:goto L69fcd9;
case 0x69fcdf:c.instructions+=1;goto B69fcdf;
case 0x69fce5:goto L69fce5;
case 0x69fceb:c.instructions+=1;goto B69fceb;
case 0x69fced:goto L69fced;
case 0x69fcf3:c.instructions+=1;goto B69fcf3;
case 0x69fcf9:goto L69fcf9;
case 0x69fcff:c.instructions+=1;goto B69fcff;
case 0x69fd05:goto L69fd05;
case 0x69fd0b:c.instructions+=1;goto B69fd0b;
case 0x69fd11:goto L69fd11;
case 0x69fd17:goto L69fd17;
case 0x69fd19:goto L69fd19;
case 0x69fd1d:c.instructions+=2;goto B69fd1d;
case 0x69fd21:c.instructions+=1;goto B69fd21;
case 0x69fd23:goto L69fd23;
case 0x69fd26:goto L69fd26;
case 0x69fd29:c.instructions+=2;goto B69fd29;
case 0x69fd2b:c.instructions+=1;goto B69fd2b;
case 0x69fd2d:goto L69fd2d;
case 0x69fd30:c.instructions+=4;goto B69fd30;
case 0x69fd33:c.instructions+=3;goto B69fd33;
case 0x69fd36:c.instructions+=2;goto B69fd36;
case 0x69fd39:c.instructions+=1;goto B69fd39;
case 0x69fd3b:goto L69fd3b;
case 0x69fd3e:c.instructions+=6;goto B69fd3e;
case 0x69fd44:c.instructions+=5;goto B69fd44;
case 0x69fd46:c.instructions+=4;goto B69fd46;
case 0x69fd48:c.instructions+=3;goto B69fd48;
case 0x69fd4a:c.instructions+=2;goto B69fd4a;
case 0x69fd4d:c.instructions+=1;goto B69fd4d;
case 0x69fd52:goto L69fd52;
case 0x69fd56:c.instructions+=3;goto B69fd56;
case 0x69fd5a:c.instructions+=2;goto B69fd5a;
case 0x69fd5d:c.instructions+=1;goto B69fd5d;
case 0x69fd5f:goto L69fd5f;
case 0x69fd62:c.instructions+=5;goto B69fd62;
case 0x69fd64:c.instructions+=4;goto B69fd64;
case 0x69fd67:c.instructions+=3;goto B69fd67;
case 0x69fd6a:c.instructions+=2;goto B69fd6a;
case 0x69fd6b:c.instructions+=1;goto B69fd6b;
case 0x69fd70:goto L69fd70;
case 0x69fd76:c.instructions+=5;goto B69fd76;
case 0x69fd78:c.instructions+=4;goto B69fd78;
case 0x69fd7b:c.instructions+=3;goto B69fd7b;
case 0x69fd7e:c.instructions+=2;goto B69fd7e;
case 0x69fd81:c.instructions+=1;goto B69fd81;
case 0x69fd83:goto L69fd83;
case 0x69fd86:c.instructions+=6;goto B69fd86;
case 0x69fd89:c.instructions+=5;goto B69fd89;
case 0x69fd8c:c.instructions+=4;goto B69fd8c;
case 0x69fd8f:c.instructions+=3;goto B69fd8f;
case 0x69fd92:c.instructions+=2;goto B69fd92;
case 0x69fd95:c.instructions+=1;goto B69fd95;
case 0x69fd98:goto L69fd98;
case 0x69fd9b:c.instructions+=3;goto B69fd9b;
case 0x69fd9e:c.instructions+=2;goto B69fd9e;
case 0x69fda1:c.instructions+=1;goto B69fda1;
case 0x69fda7:goto L69fda7;
case 0x69fdaa:c.instructions+=6;goto B69fdaa;
case 0x69fdad:c.instructions+=5;goto B69fdad;
case 0x69fdae:c.instructions+=4;goto B69fdae;
case 0x69fdaf:c.instructions+=3;goto B69fdaf;
case 0x69fdb0:c.instructions+=2;goto B69fdb0;
case 0x69fdb5:c.instructions+=1;goto B69fdb5;
case 0x69fdba:goto L69fdba;
case 0x69fdbc:c.instructions+=1;goto B69fdbc;
case 0x69fdc2:goto L69fdc2;
case 0x69fdc9:c.instructions+=13;goto B69fdc9;
case 0x69fdcc:c.instructions+=12;goto B69fdcc;
case 0x69fdcf:c.instructions+=11;goto B69fdcf;
case 0x69fdd2:c.instructions+=10;goto B69fdd2;
case 0x69fdd4:c.instructions+=9;goto B69fdd4;
case 0x69fdd7:c.instructions+=8;goto B69fdd7;
case 0x69fdda:c.instructions+=7;goto B69fdda;
case 0x69fddd:c.instructions+=6;goto B69fddd;
case 0x69fde0:c.instructions+=5;goto B69fde0;
case 0x69fde3:c.instructions+=4;goto B69fde3;
case 0x69fde6:c.instructions+=3;goto B69fde6;
case 0x69fde9:c.instructions+=2;goto B69fde9;
case 0x69fdec:c.instructions+=1;goto B69fdec;
case 0x69fdf2:goto L69fdf2;
case 0x69fdf5:c.instructions+=2;goto B69fdf5;
case 0x69fdf8:c.instructions+=1;goto B69fdf8;
case 0x69fdfd:goto L69fdfd;
case 0x69fe00:c.instructions+=8;goto B69fe00;
case 0x69fe03:c.instructions+=7;goto B69fe03;
case 0x69fe06:c.instructions+=6;goto B69fe06;
case 0x69fe09:c.instructions+=5;goto B69fe09;
case 0x69fe0c:c.instructions+=4;goto B69fe0c;
case 0x69fe0f:c.instructions+=3;goto B69fe0f;
case 0x69fe12:c.instructions+=2;goto B69fe12;
case 0x69fe15:c.instructions+=1;goto B69fe15;
case 0x69fe1b:goto L69fe1b;
case 0x69fe1e:c.instructions+=1;goto B69fe1e;
case 0x69fe24:goto L69fe24;
case 0x69fe27:c.instructions+=2;goto B69fe27;
case 0x69fe2a:c.instructions+=1;goto B69fe2a;
case 0x69fe30:goto L69fe30;
case 0x69fe33:c.instructions+=2;goto B69fe33;
case 0x69fe36:c.instructions+=1;goto B69fe36;
case 0x69fe3c:goto L69fe3c;
case 0x69fe3f:c.instructions+=2;goto B69fe3f;
case 0x69fe42:c.instructions+=1;goto B69fe42;
case 0x69fe48:goto L69fe48;
case 0x69fe4b:c.instructions+=2;goto B69fe4b;
case 0x69fe4e:c.instructions+=1;goto B69fe4e;
case 0x69fe54:goto L69fe54;
case 0x69fe57:c.instructions+=6;goto B69fe57;
case 0x69fe5a:c.instructions+=5;goto B69fe5a;
case 0x69fe5c:c.instructions+=4;goto B69fe5c;
case 0x69fe5e:c.instructions+=3;goto B69fe5e;
case 0x69fe60:c.instructions+=2;goto B69fe60;
case 0x69fe66:c.instructions+=1;goto B69fe66;
case 0x69fe6c:goto L69fe6c;
case 0x69fe6f:c.instructions+=6;goto B69fe6f;
case 0x69fe75:c.instructions+=5;goto B69fe75;
case 0x69fe77:c.instructions+=4;goto B69fe77;
case 0x69fe79:c.instructions+=3;goto B69fe79;
case 0x69fe7b:c.instructions+=2;goto B69fe7b;
case 0x69fe7e:c.instructions+=1;goto B69fe7e;
case 0x69fe83:goto L69fe83;
case 0x69fe87:c.instructions+=1;goto B69fe87;
case 0x69fe8a:goto L69fe8a;
case 0x69fe8e:c.instructions+=2;goto B69fe8e;
case 0x69fe91:c.instructions+=1;goto B69fe91;
case 0x69fe93:goto L69fe93;
case 0x69fe96:goto L69fe96;
case 0x69fe9a:c.instructions+=4;goto B69fe9a;
case 0x69fe9d:c.instructions+=3;goto B69fe9d;
case 0x69fea0:c.instructions+=2;goto B69fea0;
case 0x69fea3:c.instructions+=1;goto B69fea3;
case 0x69fea5:goto L69fea5;
case 0x69fea8:goto L69fea8;
case 0x69feab:c.instructions+=7;goto B69feab;
case 0x69feae:c.instructions+=6;goto B69feae;
case 0x69feb1:c.instructions+=5;goto B69feb1;
case 0x69feb4:c.instructions+=4;goto B69feb4;
case 0x69feb8:c.instructions+=3;goto B69feb8;
case 0x69febc:c.instructions+=2;goto B69febc;
case 0x69febf:c.instructions+=1;goto B69febf;
case 0x69fec5:goto L69fec5;
case 0x69fec8:c.instructions+=1;goto B69fec8;
case 0x69fecb:goto L69fecb;
case 0x69fece:c.instructions+=5;goto B69fece;
case 0x69fed0:c.instructions+=4;goto B69fed0;
case 0x69fed3:c.instructions+=3;goto B69fed3;
case 0x69fed6:c.instructions+=2;goto B69fed6;
case 0x69fed9:c.instructions+=1;goto B69fed9;
case 0x69fedf:goto L69fedf;
case 0x69fee3:c.instructions+=2;goto B69fee3;
case 0x69fee7:c.instructions+=1;goto B69fee7;
case 0x69fee9:goto L69fee9;
case 0x69feed:c.instructions+=2;goto B69feed;
case 0x69fef1:c.instructions+=1;goto B69fef1;
case 0x69fef3:goto L69fef3;
case 0x69fef5:goto L69fef5;
case 0x69fef8:goto L69fef8;
case 0x69fefb:c.instructions+=5;goto B69fefb;
case 0x69fefd:c.instructions+=4;goto B69fefd;
case 0x69ff00:c.instructions+=3;goto B69ff00;
case 0x69ff03:c.instructions+=2;goto B69ff03;
case 0x69ff04:c.instructions+=1;goto B69ff04;
case 0x69ff09:goto L69ff09;
case 0x69ff0c:c.instructions+=6;goto B69ff0c;
case 0x69ff0e:c.instructions+=5;goto B69ff0e;
case 0x69ff11:c.instructions+=4;goto B69ff11;
case 0x69ff14:c.instructions+=3;goto B69ff14;
case 0x69ff17:c.instructions+=2;goto B69ff17;
case 0x69ff18:c.instructions+=1;goto B69ff18;
case 0x69ff1d:goto L69ff1d;
case 0x69ff20:c.instructions+=2;goto B69ff20;
case 0x69ff22:c.instructions+=1;goto B69ff22;
case 0x69ff24:goto L69ff24;
case 0x69ff27:c.instructions+=3;goto B69ff27;
case 0x69ff2a:c.instructions+=2;goto B69ff2a;
case 0x69ff2d:c.instructions+=1;goto B69ff2d;
case 0x69ff2f:goto L69ff2f;
case 0x69ff32:goto L69ff32;
case 0x69ff35:c.instructions+=2;goto B69ff35;
case 0x69ff38:c.instructions+=1;goto B69ff38;
case 0x69ff3a:goto L69ff3a;
case 0x69ff3d:c.instructions+=3;goto B69ff3d;
case 0x69ff40:c.instructions+=2;goto B69ff40;
case 0x69ff43:c.instructions+=1;goto B69ff43;
case 0x69ff45:goto L69ff45;
case 0x69ff48:goto L69ff48;
case 0x69ff4b:c.instructions+=2;goto B69ff4b;
case 0x69ff4e:c.instructions+=1;goto B69ff4e;
case 0x69ff50:goto L69ff50;
case 0x69ff53:c.instructions+=4;goto B69ff53;
case 0x69ff56:c.instructions+=3;goto B69ff56;
case 0x69ff5a:c.instructions+=2;goto B69ff5a;
case 0x69ff5d:c.instructions+=1;goto B69ff5d;
case 0x69ff63:goto L69ff63;
case 0x69ff66:c.instructions+=2;goto B69ff66;
case 0x69ff69:c.instructions+=1;goto B69ff69;
case 0x69ff6b:goto L69ff6b;
case 0x69ff6e:c.instructions+=2;goto B69ff6e;
case 0x69ff72:c.instructions+=1;goto B69ff72;
case 0x69ff78:goto L69ff78;
case 0x69ff7d:goto L69ff7d;
case 0x69ff81:c.instructions+=2;goto B69ff81;
case 0x69ff85:c.instructions+=1;goto B69ff85;
case 0x69ff8b:goto L69ff8b;
case 0x69ff8f:c.instructions+=2;goto B69ff8f;
case 0x69ff93:c.instructions+=1;goto B69ff93;
case 0x69ff95:goto L69ff95;
case 0x69ff99:c.instructions+=2;goto B69ff99;
case 0x69ff9d:c.instructions+=1;goto B69ff9d;
case 0x69ff9f:goto L69ff9f;
case 0x69ffa1:goto L69ffa1;
case 0x69ffa4:goto L69ffa4;
case 0x69ffa7:c.instructions+=5;goto B69ffa7;
case 0x69ffa9:c.instructions+=4;goto B69ffa9;
case 0x69ffac:c.instructions+=3;goto B69ffac;
case 0x69ffaf:c.instructions+=2;goto B69ffaf;
case 0x69ffb0:c.instructions+=1;goto B69ffb0;
case 0x69ffb5:goto L69ffb5;
case 0x69ffb8:c.instructions+=6;goto B69ffb8;
case 0x69ffba:c.instructions+=5;goto B69ffba;
case 0x69ffbd:c.instructions+=4;goto B69ffbd;
case 0x69ffbf:c.instructions+=3;goto B69ffbf;
case 0x69ffc2:c.instructions+=2;goto B69ffc2;
case 0x69ffc3:c.instructions+=1;goto B69ffc3;
case 0x69ffc8:goto L69ffc8;
case 0x69ffca:c.instructions+=1;goto B69ffca;
case 0x69ffcc:goto L69ffcc;
case 0x69ffcf:c.instructions+=3;goto B69ffcf;
case 0x69ffd2:c.instructions+=2;goto B69ffd2;
case 0x69ffd5:c.instructions+=1;goto B69ffd5;
case 0x69ffd7:goto L69ffd7;
case 0x69ffda:goto L69ffda;
case 0x69ffdd:c.instructions+=2;goto B69ffdd;
case 0x69ffe0:c.instructions+=1;goto B69ffe0;
case 0x69ffe2:goto L69ffe2;
case 0x69ffe5:c.instructions+=3;goto B69ffe5;
case 0x69ffe8:c.instructions+=2;goto B69ffe8;
case 0x69ffeb:c.instructions+=1;goto B69ffeb;
case 0x69ffed:goto L69ffed;
case 0x69fff0:c.instructions+=6;goto B69fff0;
case 0x69fff3:c.instructions+=5;goto B69fff3;
case 0x69fff6:c.instructions+=4;goto B69fff6;
case 0x69fff9:c.instructions+=3;goto B69fff9;
case 0x69fffc:c.instructions+=2;goto B69fffc;
case 0x69ffff:c.instructions+=1;goto B69ffff;
default:missing_instruction(c.pc);}
B69f005:L69f005:{c.instructions+=3;NFSU2_TR(0x69f005);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69f009:{NFSU2_TR(0x69f009);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69f00d:{NFSU2_TR(0x69f00d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69f084;}}
}
B69f00f:L69f00f:{c.instructions+=7;NFSU2_TR(0x69f00f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69f012:{NFSU2_TR(0x69f012);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f015:{NFSU2_TR(0x69f015);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69f018:{NFSU2_TR(0x69f018);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69f01b:{NFSU2_TR(0x69f01b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69f01e:{NFSU2_TR(0x69f01e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69f021:{NFSU2_TR(0x69f021);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69f026;}}
}
B69f023:L69f023:{c.instructions+=1;NFSU2_TR(0x69f023);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f026:L69f026:{c.instructions+=4;NFSU2_TR(0x69f026);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B69f029:{NFSU2_TR(0x69f029);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B69f02c:{NFSU2_TR(0x69f02c);
__builtin_memmove((R+4),(R+28),4);
}
B69f02e:{NFSU2_TR(0x69f02e);
if(r1(R+518)){{goto L69f05c;}}
}
B69f030:L69f030:{c.instructions+=5;NFSU2_TR(0x69f030);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f033:{NFSU2_TR(0x69f033);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69f036:{NFSU2_TR(0x69f036);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69f039:{NFSU2_TR(0x69f039);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69f03c:{NFSU2_TR(0x69f03c);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69f041;}}
}
B69f03e:L69f03e:{c.instructions+=1;NFSU2_TR(0x69f03e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f041:L69f041:{c.instructions+=5;NFSU2_TR(0x69f041);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B69f043:{NFSU2_TR(0x69f043);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69f046:{NFSU2_TR(0x69f046);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69f049:{NFSU2_TR(0x69f049);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69f04c:{NFSU2_TR(0x69f04c);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69f051;}}
}
B69f04e:L69f04e:{c.instructions+=1;NFSU2_TR(0x69f04e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f051:L69f051:{c.instructions+=3;NFSU2_TR(0x69f051);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B69f054:{NFSU2_TR(0x69f054);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B69f057:{NFSU2_TR(0x69f057);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69f030u);}goto L69f030;}}
}
B69f059:L69f059:{c.instructions+=1;NFSU2_TR(0x69f059);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69f05c:L69f05c:{c.instructions+=2;NFSU2_TR(0x69f05c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((R+4),(U+0),4);
}
B69f05f:{NFSU2_TR(0x69f05f);
{goto L69f074;}
}
B69f061:L69f061:{c.instructions+=5;NFSU2_TR(0x69f061);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B69f063:{NFSU2_TR(0x69f063);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69f066:{NFSU2_TR(0x69f066);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69f069:{NFSU2_TR(0x69f069);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69f06c:{NFSU2_TR(0x69f06c);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69f071;}}
}
B69f06e:L69f06e:{c.instructions+=1;NFSU2_TR(0x69f06e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f071:L69f071:{c.instructions+=1;NFSU2_TR(0x69f071);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x14ull))));
}
B69f074:L69f074:{c.instructions+=2;NFSU2_TR(0x69f074);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B69f077:{NFSU2_TR(0x69f077);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69f061u);}goto L69f061;}}
}
B69f079:L69f079:{c.instructions+=4;NFSU2_TR(0x69f079);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69f07c:{NFSU2_TR(0x69f07c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f07f:{NFSU2_TR(0x69f07f);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B69f082:{NFSU2_TR(0x69f082);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69f00fu);}goto L69f00f;}}
}
B69f084:L69f084:{c.instructions+=3;NFSU2_TR(0x69f084);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69f088:{NFSU2_TR(0x69f088);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69f08c:{NFSU2_TR(0x69f08c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69f12d;}}
}
B69f092:L69f092:{c.instructions+=7;NFSU2_TR(0x69f092);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69f095:{NFSU2_TR(0x69f095);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f098:{NFSU2_TR(0x69f098);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69f09b:{NFSU2_TR(0x69f09b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69f09e:{NFSU2_TR(0x69f09e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69f0a1:{NFSU2_TR(0x69f0a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69f0a4:{NFSU2_TR(0x69f0a4);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69f0a9;}}
}
B69f0a6:L69f0a6:{c.instructions+=1;NFSU2_TR(0x69f0a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f0a9:L69f0a9:{c.instructions+=3;NFSU2_TR(0x69f0a9);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69f0ad:{NFSU2_TR(0x69f0ad);
__builtin_memmove((R+4),(R+8),4);
}
B69f0af:{NFSU2_TR(0x69f0af);
if(r1(R+518)){{goto L69f0d3;}}
}
B69f0b1:L69f0b1:{c.instructions+=5;NFSU2_TR(0x69f0b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f0b4:{NFSU2_TR(0x69f0b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69f0b7:{NFSU2_TR(0x69f0b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69f0ba:{NFSU2_TR(0x69f0ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69f0bd:{NFSU2_TR(0x69f0bd);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69f0c2;}}
}
B69f0bf:L69f0bf:{c.instructions+=1;NFSU2_TR(0x69f0bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f0c2:L69f0c2:{c.instructions+=5;NFSU2_TR(0x69f0c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f0c5:{NFSU2_TR(0x69f0c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69f0c8:{NFSU2_TR(0x69f0c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69f0cb:{NFSU2_TR(0x69f0cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69f0ce:{NFSU2_TR(0x69f0ce);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69f0d3;}}
}
B69f0d0:L69f0d0:{c.instructions+=1;NFSU2_TR(0x69f0d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f0d3:L69f0d3:{c.instructions+=2;NFSU2_TR(0x69f0d3);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69f0d7:{NFSU2_TR(0x69f0d7);
if(r1(R+518)){{goto L69f116;}}
}
B69f0d9:L69f0d9:{c.instructions+=5;NFSU2_TR(0x69f0d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69f0dc:{NFSU2_TR(0x69f0dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69f0df:{NFSU2_TR(0x69f0df);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69f0e2:{NFSU2_TR(0x69f0e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69f0e5:{NFSU2_TR(0x69f0e5);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69f0ea;}}
}
B69f0e7:L69f0e7:{c.instructions+=1;NFSU2_TR(0x69f0e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f0ea:L69f0ea:{c.instructions+=5;NFSU2_TR(0x69f0ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f0ed:{NFSU2_TR(0x69f0ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69f0f0:{NFSU2_TR(0x69f0f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69f0f3:{NFSU2_TR(0x69f0f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69f0f6:{NFSU2_TR(0x69f0f6);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69f0fb;}}
}
B69f0f8:L69f0f8:{c.instructions+=1;NFSU2_TR(0x69f0f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f0fb:L69f0fb:{c.instructions+=2;NFSU2_TR(0x69f0fb);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69f0ff:{NFSU2_TR(0x69f0ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69f0d9u);}goto L69f0d9;}}
}
B69f101:L69f101:{c.instructions+=2;NFSU2_TR(0x69f101);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69f104:{NFSU2_TR(0x69f104);
{goto L69f116;}
}
B69f106:L69f106:{c.instructions+=5;NFSU2_TR(0x69f106);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B69f108:{NFSU2_TR(0x69f108);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69f10b:{NFSU2_TR(0x69f10b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69f10e:{NFSU2_TR(0x69f10e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69f111:{NFSU2_TR(0x69f111);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69f116;}}
}
B69f113:L69f113:{c.instructions+=1;NFSU2_TR(0x69f113);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f116:L69f116:{c.instructions+=3;NFSU2_TR(0x69f116);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x14ull))));
}
B69f119:{NFSU2_TR(0x69f119);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B69f11c:{NFSU2_TR(0x69f11c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69f106u);}goto L69f106;}}
}
B69f11e:L69f11e:{c.instructions+=4;NFSU2_TR(0x69f11e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69f121:{NFSU2_TR(0x69f121);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f124:{NFSU2_TR(0x69f124);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B69f127:{NFSU2_TR(0x69f127);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69f092u);}goto L69f092;}}
}
B69f12d:L69f12d:{c.instructions+=3;NFSU2_TR(0x69f12d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B69f12e:{NFSU2_TR(0x69f12e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69f131:{NFSU2_TR(0x69f131);
if(r1(R+512)){TAIL_STATIC(0x69eff0u,69e);}
}
B69f137:L69f137:{c.instructions+=2;NFSU2_TR(0x69f137);
__builtin_memmove((R+4),(R+24),4);
}
B69f139:{NFSU2_TR(0x69f139);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69f13eull));
TAIL_STATIC(0x69e14eu,69e);
}
B69f13e:L69f13e:{c.instructions+=3;NFSU2_TR(0x69f13e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69f142:{NFSU2_TR(0x69f142);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69f146:{NFSU2_TR(0x69f146);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69f2c2;}}
}
B69f14c:L69f14c:{c.instructions+=1;NFSU2_TR(0x69f14c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B69f14e:L69f14e:{c.instructions+=9;NFSU2_TR(0x69f14e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f151:{NFSU2_TR(0x69f151);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f154:{NFSU2_TR(0x69f154);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69f157:{NFSU2_TR(0x69f157);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f15a:{NFSU2_TR(0x69f15a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f15d:{NFSU2_TR(0x69f15d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69f160:{NFSU2_TR(0x69f160);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f163:{NFSU2_TR(0x69f163);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B69f166:{NFSU2_TR(0x69f166);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69f16b;}}
}
B69f168:L69f168:{c.instructions+=1;NFSU2_TR(0x69f168);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f16b:L69f16b:{c.instructions+=3;NFSU2_TR(0x69f16b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f16e:{NFSU2_TR(0x69f16e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B69f171:{NFSU2_TR(0x69f171);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69f176;}}
}
B69f173:L69f173:{c.instructions+=1;NFSU2_TR(0x69f173);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f176:L69f176:{c.instructions+=4;NFSU2_TR(0x69f176);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f179:{NFSU2_TR(0x69f179);
__builtin_memmove((R+8),(R+0),4);
}
B69f17b:{NFSU2_TR(0x69f17b);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x10ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B69f17e:{NFSU2_TR(0x69f17e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69f1e3;}}
}
B69f180:L69f180:{c.instructions+=3;NFSU2_TR(0x69f180);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f183:{NFSU2_TR(0x69f183);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69f186:{NFSU2_TR(0x69f186);
if(r1(R+518)){{goto L69f1e3;}}
}
B69f188:L69f188:{c.instructions+=2;NFSU2_TR(0x69f188);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69f18b:{NFSU2_TR(0x69f18b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L69f1e3;}}
}
B69f18d:L69f18d:{c.instructions+=3;NFSU2_TR(0x69f18d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69f190:{NFSU2_TR(0x69f190);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69f192:{NFSU2_TR(0x69f192);
if(r1(R+518)){{goto L69f1d8;}}
}
B69f194:L69f194:{c.instructions+=2;NFSU2_TR(0x69f194);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69f198:{NFSU2_TR(0x69f198);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69f1d8;}}
}
B69f19a:L69f19a:{c.instructions+=3;NFSU2_TR(0x69f19a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f19d:{NFSU2_TR(0x69f19d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69f19f:{NFSU2_TR(0x69f19f);
if(r1(R+518)){{goto L69f1d8;}}
}
B69f1a1:L69f1a1:{c.instructions+=2;NFSU2_TR(0x69f1a1);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69f1a5:{NFSU2_TR(0x69f1a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69f1d8;}}
}
B69f1a7:L69f1a7:{c.instructions+=2;NFSU2_TR(0x69f1a7);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69f1aa:{NFSU2_TR(0x69f1aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69f2a0;}}
}
B69f1b0:L69f1b0:{c.instructions+=8;NFSU2_TR(0x69f1b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69f1b3:{NFSU2_TR(0x69f1b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f1b6:{NFSU2_TR(0x69f1b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69f1b9:{NFSU2_TR(0x69f1b9);
u8 U[4];
w4(U+0,u32(0x7badbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f1be:{NFSU2_TR(0x69f1be);
u8 U[4];
w4(U+0,u32(0xfa0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f1c3:{NFSU2_TR(0x69f1c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69f1c6:{NFSU2_TR(0x69f1c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f1c7:{NFSU2_TR(0x69f1c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69f1ccull));
TAIL_STATIC(0x69e936u,69e);
}
B69f1cc:L69f1cc:{c.instructions+=2;NFSU2_TR(0x69f1cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B69f1d3:{NFSU2_TR(0x69f1d3);
{goto L69f29d;}
}
B69f1d8:L69f1d8:{c.instructions+=4;NFSU2_TR(0x69f1d8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f1d9:{NFSU2_TR(0x69f1d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69f1dc:{NFSU2_TR(0x69f1dc);
u8 U[4];
w4(U+0,u32(0x7bad70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f1e1:{NFSU2_TR(0x69f1e1);
{goto L69f20f;}
}
B69f1e3:L69f1e3:{c.instructions+=2;NFSU2_TR(0x69f1e3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B69f1e5:{NFSU2_TR(0x69f1e5);
if(r1(R+518)){{goto L69f1fa;}}
}
B69f1e7:L69f1e7:{c.instructions+=2;NFSU2_TR(0x69f1e7);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69f1eb:{NFSU2_TR(0x69f1eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69f1fa;}}
}
B69f1ed:L69f1ed:{c.instructions+=3;NFSU2_TR(0x69f1ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69f1f0:{NFSU2_TR(0x69f1f0);
u8 U[4];
w4(U+0,u32(0x7bad30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f1f5:{NFSU2_TR(0x69f1f5);
{goto L69f295;}
}
B69f1fa:L69f1fa:{c.instructions+=2;NFSU2_TR(0x69f1fa);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B69f1fc:{NFSU2_TR(0x69f1fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69f21f;}}
}
B69f1fe:L69f1fe:{c.instructions+=3;NFSU2_TR(0x69f1fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f201:{NFSU2_TR(0x69f201);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69f204:{NFSU2_TR(0x69f204);
if(r1(R+518)){{goto L69f21f;}}
}
B69f206:L69f206:{c.instructions+=3;NFSU2_TR(0x69f206);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f207:{NFSU2_TR(0x69f207);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69f20a:{NFSU2_TR(0x69f20a);
u8 U[4];
w4(U+0,u32(0x7bacf4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f20f:L69f20f:{c.instructions+=4;NFSU2_TR(0x69f20f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f210:{NFSU2_TR(0x69f210);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f211:{NFSU2_TR(0x69f211);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f212:{NFSU2_TR(0x69f212);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69f217ull));
TAIL_STATIC(0x69e936u,69e);
}
B69f217:L69f217:{c.instructions+=2;NFSU2_TR(0x69f217);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B69f21a:{NFSU2_TR(0x69f21a);
{goto L69f2a0;}
}
B69f21f:L69f21f:{c.instructions+=2;NFSU2_TR(0x69f21f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xdull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B69f221:{NFSU2_TR(0x69f221);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69f233;}}
}
B69f223:L69f223:{c.instructions+=2;NFSU2_TR(0x69f223);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69f227:{NFSU2_TR(0x69f227);
if(r1(R+518)){{goto L69f233;}}
}
B69f229:L69f229:{c.instructions+=3;NFSU2_TR(0x69f229);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69f22c:{NFSU2_TR(0x69f22c);
u8 U[4];
w4(U+0,u32(0x7bacbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f231:{NFSU2_TR(0x69f231);
{goto L69f295;}
}
B69f233:L69f233:{c.instructions+=2;NFSU2_TR(0x69f233);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69f239:{NFSU2_TR(0x69f239);
if(r1(R+518)){{goto L69f2a7;}}
}
B69f23b:L69f23b:{c.instructions+=2;NFSU2_TR(0x69f23b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x10120ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69f240:{NFSU2_TR(0x69f240);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69f2a7;}}
}
B69f242:L69f242:{c.instructions+=2;NFSU2_TR(0x69f242);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69f246:{NFSU2_TR(0x69f246);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69f2a7;}}
}
B69f248:L69f248:{c.instructions+=2;NFSU2_TR(0x69f248);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69f24a:{NFSU2_TR(0x69f24a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69f27a;}}
}
B69f24c:L69f24c:{c.instructions+=3;NFSU2_TR(0x69f24c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f24f:{NFSU2_TR(0x69f24f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69f252:{NFSU2_TR(0x69f252);
if(r1(R+518)){{goto L69f2a7;}}
}
B69f254:L69f254:{c.instructions+=3;NFSU2_TR(0x69f254);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f257:{NFSU2_TR(0x69f257);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69f25a:{NFSU2_TR(0x69f25a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69f25full));
TAIL_STATIC(0x698f0fu,698);
}
B69f25f:L69f25f:{c.instructions+=2;NFSU2_TR(0x69f25f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69f261:{NFSU2_TR(0x69f261);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69f2a7;}}
}
B69f263:L69f263:{c.instructions+=7;NFSU2_TR(0x69f263);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f266:{NFSU2_TR(0x69f266);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f269:{NFSU2_TR(0x69f269);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69f26c:{NFSU2_TR(0x69f26c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69f26e:{NFSU2_TR(0x69f26e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B69f273:{NFSU2_TR(0x69f273);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20900000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69f278:{NFSU2_TR(0x69f278);
if(r1(R+518)){{goto L69f2a7;}}
}
B69f27a:L69f27a:{c.instructions+=3;NFSU2_TR(0x69f27a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69f27d:{NFSU2_TR(0x69f27d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69f280:{NFSU2_TR(0x69f280);
if(r1(R+518)){{goto L69f28d;}}
}
B69f282:L69f282:{c.instructions+=4;NFSU2_TR(0x69f282);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f283:{NFSU2_TR(0x69f283);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69f286:{NFSU2_TR(0x69f286);
u8 U[4];
w4(U+0,u32(0x7bac88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f28b:{NFSU2_TR(0x69f28b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69f20fu);}goto L69f20f;}
}
B69f28d:L69f28d:{c.instructions+=2;NFSU2_TR(0x69f28d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69f290:{NFSU2_TR(0x69f290);
u8 U[4];
w4(U+0,u32(0x7bac58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f295:L69f295:{c.instructions+=4;NFSU2_TR(0x69f295);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f296:{NFSU2_TR(0x69f296);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f297:{NFSU2_TR(0x69f297);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f298:{NFSU2_TR(0x69f298);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69f29dull));
TAIL_STATIC(0x69e936u,69e);
}
B69f29d:L69f29d:{c.instructions+=1;NFSU2_TR(0x69f29d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B69f2a0:L69f2a0:{c.instructions+=1;NFSU2_TR(0x69f2a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B69f2a7:L69f2a7:{c.instructions+=4;NFSU2_TR(0x69f2a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69f2aa:{NFSU2_TR(0x69f2aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f2ad:{NFSU2_TR(0x69f2ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69f2b0:{NFSU2_TR(0x69f2b0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69f14eu);}goto L69f14e;}}
}
B69f2b6:L69f2b6:{c.instructions+=2;NFSU2_TR(0x69f2b6);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
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
B69f2b9:{NFSU2_TR(0x69f2b9);
if(r1(R+518)){{goto L69f2c2;}}
}
B69f2bb:L69f2bb:{c.instructions+=2;NFSU2_TR(0x69f2bb);
w4(R+0,u32(0x80004005ull));
}
B69f2c0:{NFSU2_TR(0x69f2c0);
{goto L69f2c4;}
}
B69f2c2:L69f2c2:{c.instructions+=1;NFSU2_TR(0x69f2c2);
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
B69f2c4:L69f2c4:{c.instructions+=5;NFSU2_TR(0x69f2c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69f2c5:{NFSU2_TR(0x69f2c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69f2c6:{NFSU2_TR(0x69f2c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69f2c7:{NFSU2_TR(0x69f2c7);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B69f2c8:{NFSU2_TR(0x69f2c8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69f2c9:L69f2c9:{c.instructions+=13;NFSU2_TR(0x69f2c9);
__builtin_memmove((R+28),(R+28),4);
}
B69f2cb:{NFSU2_TR(0x69f2cb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f2cc:{NFSU2_TR(0x69f2cc);
__builtin_memmove((R+20),(R+16),4);
}
B69f2ce:{NFSU2_TR(0x69f2ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B69f2d1:{NFSU2_TR(0x69f2d1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f2d2:{NFSU2_TR(0x69f2d2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f2d3:{NFSU2_TR(0x69f2d3);
__builtin_memmove((R+24),(R+4),4);
}
B69f2d5:{NFSU2_TR(0x69f2d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f2d8:{NFSU2_TR(0x69f2d8);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B69f2da:{NFSU2_TR(0x69f2da);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69f2dc:{NFSU2_TR(0x69f2dc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f2dd:{NFSU2_TR(0x69f2dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f2e0:{NFSU2_TR(0x69f2e0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69f2fd;}}
}
B69f2e2:L69f2e2:{c.instructions+=1;NFSU2_TR(0x69f2e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f2e5:L69f2e5:{c.instructions+=4;NFSU2_TR(0x69f2e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B69f2e7:{NFSU2_TR(0x69f2e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69f2ea:{NFSU2_TR(0x69f2ea);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69f2ed:{NFSU2_TR(0x69f2ed);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69f2f7;}}
}
B69f2ef:L69f2ef:{c.instructions+=2;NFSU2_TR(0x69f2ef);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69f2f2:{NFSU2_TR(0x69f2f2);
if(r1(R+518)){{goto L69f2f7;}}
}
B69f2f4:L69f2f4:{c.instructions+=1;NFSU2_TR(0x69f2f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f2f7:L69f2f7:{c.instructions+=3;NFSU2_TR(0x69f2f7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B69f2fa:{NFSU2_TR(0x69f2fa);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B69f2fb:{NFSU2_TR(0x69f2fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69f2e5u);}goto L69f2e5;}}
}
B69f2fd:L69f2fd:{c.instructions+=4;NFSU2_TR(0x69f2fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69f300:{NFSU2_TR(0x69f300);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69f303:{NFSU2_TR(0x69f303);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f306:{NFSU2_TR(0x69f306);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69f421;}}
}
B69f30c:L69f30c:{c.instructions+=6;NFSU2_TR(0x69f30c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f30f:{NFSU2_TR(0x69f30f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f312:{NFSU2_TR(0x69f312);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69f315:{NFSU2_TR(0x69f315);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f318:{NFSU2_TR(0x69f318);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69f31a:{NFSU2_TR(0x69f31a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69f34a;}}
}
B69f31c:L69f31c:{c.instructions+=2;NFSU2_TR(0x69f31c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69f31f:{NFSU2_TR(0x69f31f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f322:L69f322:{c.instructions+=5;NFSU2_TR(0x69f322);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B69f324:{NFSU2_TR(0x69f324);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f327:{NFSU2_TR(0x69f327);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69f32a:{NFSU2_TR(0x69f32a);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69f32e:{NFSU2_TR(0x69f32e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69f340;}}
}
B69f330:L69f330:{c.instructions+=5;NFSU2_TR(0x69f330);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f333:{NFSU2_TR(0x69f333);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69f336:{NFSU2_TR(0x69f336);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69f339:{NFSU2_TR(0x69f339);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B69f33d:{NFSU2_TR(0x69f33d);
if(r1(R+518)){{goto L69f340;}}
}
B69f33f:L69f33f:{c.instructions+=1;NFSU2_TR(0x69f33f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B69f340:L69f340:{c.instructions+=3;NFSU2_TR(0x69f340);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B69f343:{NFSU2_TR(0x69f343);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69f346:{NFSU2_TR(0x69f346);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69f322u);}goto L69f322;}}
}
B69f348:L69f348:{c.instructions+=1;NFSU2_TR(0x69f348);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B69f34a:L69f34a:{c.instructions+=2;NFSU2_TR(0x69f34a);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69f34d:{NFSU2_TR(0x69f34d);
if(r1(R+518)){{goto L69f412;}}
}
B69f353:L69f353:{c.instructions+=3;NFSU2_TR(0x69f353);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69f355:{NFSU2_TR(0x69f355);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f358:{NFSU2_TR(0x69f358);
if(r1(R+518)){{goto L69f388;}}
}
B69f35a:L69f35a:{c.instructions+=7;NFSU2_TR(0x69f35a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f35b:{NFSU2_TR(0x69f35b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f35c:{NFSU2_TR(0x69f35c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B69f361:{NFSU2_TR(0x69f361);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10000000ull))));
}
B69f366:{NFSU2_TR(0x69f366);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f367:{NFSU2_TR(0x69f367);
__builtin_memmove((R+4),(R+24),4);
}
B69f369:{NFSU2_TR(0x69f369);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69f36eull));
TAIL_STATIC(0x699c99u,699);
}
B69f36e:L69f36e:{c.instructions+=2;NFSU2_TR(0x69f36e);
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
B69f371:{NFSU2_TR(0x69f371);
if(r1(R+518)){{goto L69f458;}}
}
B69f377:L69f377:{c.instructions+=6;NFSU2_TR(0x69f377);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f37a:{NFSU2_TR(0x69f37a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69f37d:{NFSU2_TR(0x69f37d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f37e:{NFSU2_TR(0x69f37e);
__builtin_memmove((R+4),(R+0),4);
}
B69f380:{NFSU2_TR(0x69f380);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f383:{NFSU2_TR(0x69f383);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69f388ull));
TAIL_STATIC(0x698eb3u,698);
}
B69f388:L69f388:{c.instructions+=3;NFSU2_TR(0x69f388);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69f38b:{NFSU2_TR(0x69f38b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f38e:{NFSU2_TR(0x69f38e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69f40f;}}
}
B69f390:L69f390:{c.instructions+=1;NFSU2_TR(0x69f390);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f393:L69f393:{c.instructions+=18;NFSU2_TR(0x69f393);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f396:{NFSU2_TR(0x69f396);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B69f398:{NFSU2_TR(0x69f398);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f39b:{NFSU2_TR(0x69f39b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69f39e:{NFSU2_TR(0x69f39e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f3a1:{NFSU2_TR(0x69f3a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B69f3a4:{NFSU2_TR(0x69f3a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f3a7:{NFSU2_TR(0x69f3a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f3aa:{NFSU2_TR(0x69f3aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69f3ad:{NFSU2_TR(0x69f3ad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f3ae:{NFSU2_TR(0x69f3ae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f3af:{NFSU2_TR(0x69f3af);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B69f3b2:{NFSU2_TR(0x69f3b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69f3b5:{NFSU2_TR(0x69f3b5);
__builtin_memmove((R+4),(R+24),4);
}
B69f3b7:{NFSU2_TR(0x69f3b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69f3ba:{NFSU2_TR(0x69f3ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f3bd:{NFSU2_TR(0x69f3bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69f3c3:{NFSU2_TR(0x69f3c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69f3c8ull));
TAIL_STATIC(0x699c39u,699);
}
B69f3c8:L69f3c8:{c.instructions+=2;NFSU2_TR(0x69f3c8);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69f3cc:{NFSU2_TR(0x69f3cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69f3d7;}}
}
B69f3ce:L69f3ce:{c.instructions+=3;NFSU2_TR(0x69f3ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f3d1:{NFSU2_TR(0x69f3d1);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B69f3d5:{NFSU2_TR(0x69f3d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69f3fb;}}
}
B69f3d7:L69f3d7:{c.instructions+=12;NFSU2_TR(0x69f3d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f3da:{NFSU2_TR(0x69f3da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69f3dd:{NFSU2_TR(0x69f3dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B69f3e0:{NFSU2_TR(0x69f3e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f3e3:{NFSU2_TR(0x69f3e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69f3e6:{NFSU2_TR(0x69f3e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69f3e9:{NFSU2_TR(0x69f3e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69f3ec:{NFSU2_TR(0x69f3ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69f3ef:{NFSU2_TR(0x69f3ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69f3f2:{NFSU2_TR(0x69f3f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69f3f5:{NFSU2_TR(0x69f3f5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B69f3f8:{NFSU2_TR(0x69f3f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f3fb:L69f3fb:{c.instructions+=7;NFSU2_TR(0x69f3fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f3fe:{NFSU2_TR(0x69f3fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69f401:{NFSU2_TR(0x69f401);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69f404:{NFSU2_TR(0x69f404);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B69f405:{NFSU2_TR(0x69f405);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B69f408:{NFSU2_TR(0x69f408);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f40b:{NFSU2_TR(0x69f40b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69f393u);}goto L69f393;}}
}
B69f40d:L69f40d:{c.instructions+=1;NFSU2_TR(0x69f40d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B69f40f:L69f40f:{c.instructions+=1;NFSU2_TR(0x69f40f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69f412:L69f412:{c.instructions+=4;NFSU2_TR(0x69f412);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69f415:{NFSU2_TR(0x69f415);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f418:{NFSU2_TR(0x69f418);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69f41b:{NFSU2_TR(0x69f41b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69f30cu);}goto L69f30c;}}
}
B69f421:L69f421:{c.instructions+=2;NFSU2_TR(0x69f421);
__builtin_memmove((R+4),(R+24),4);
}
B69f423:{NFSU2_TR(0x69f423);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69f428ull));
TAIL_STATIC(0x69e219u,69e);
}
B69f428:L69f428:{c.instructions+=2;NFSU2_TR(0x69f428);
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
B69f42a:{NFSU2_TR(0x69f42a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L69f453;}}
}
B69f42c:L69f42c:{c.instructions+=3;NFSU2_TR(0x69f42c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B69f42e:{NFSU2_TR(0x69f42e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69f431:{NFSU2_TR(0x69f431);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69f451;}}
}
B69f433:L69f433:{c.instructions+=4;NFSU2_TR(0x69f433);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f436:{NFSU2_TR(0x69f436);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69f439:{NFSU2_TR(0x69f439);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69f43d:{NFSU2_TR(0x69f43d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69f44b;}}
}
B69f43f:L69f43f:{c.instructions+=2;NFSU2_TR(0x69f43f);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69f443:{NFSU2_TR(0x69f443);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69f44b;}}
}
B69f445:L69f445:{c.instructions+=2;NFSU2_TR(0x69f445);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69f448:{NFSU2_TR(0x69f448);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f44b:L69f44b:{c.instructions+=3;NFSU2_TR(0x69f44b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B69f44c:{NFSU2_TR(0x69f44c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B69f44f:{NFSU2_TR(0x69f44f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69f433u);}goto L69f433;}}
}
B69f451:L69f451:{c.instructions+=1;NFSU2_TR(0x69f451);
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
B69f453:L69f453:{c.instructions+=5;NFSU2_TR(0x69f453);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69f454:{NFSU2_TR(0x69f454);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69f455:{NFSU2_TR(0x69f455);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69f456:{NFSU2_TR(0x69f456);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B69f457:{NFSU2_TR(0x69f457);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69f458:L69f458:{c.instructions+=2;NFSU2_TR(0x69f458);
w4(R+0,u32(0x8007000eull));
}
B69f45d:{NFSU2_TR(0x69f45d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69f453u);}goto L69f453;}
}
B69f45f:L69f45f:{c.instructions+=11;NFSU2_TR(0x69f45f);
__builtin_memmove((R+28),(R+28),4);
}
B69f461:{NFSU2_TR(0x69f461);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f462:{NFSU2_TR(0x69f462);
__builtin_memmove((R+20),(R+16),4);
}
B69f464:{NFSU2_TR(0x69f464);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B69f467:{NFSU2_TR(0x69f467);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f468:{NFSU2_TR(0x69f468);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f469:{NFSU2_TR(0x69f469);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B69f46b:{NFSU2_TR(0x69f46b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f46c:{NFSU2_TR(0x69f46c);
__builtin_memmove((R+24),(R+4),4);
}
B69f46e:{NFSU2_TR(0x69f46e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f471:{NFSU2_TR(0x69f471);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69f476ull));
TAIL_STATIC(0x69e219u,69e);
}
B69f476:L69f476:{c.instructions+=3;NFSU2_TR(0x69f476);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69f479:{NFSU2_TR(0x69f479);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f47c:{NFSU2_TR(0x69f47c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69f557;}}
}
B69f482:L69f482:{c.instructions+=7;NFSU2_TR(0x69f482);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f485:{NFSU2_TR(0x69f485);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69f488:{NFSU2_TR(0x69f488);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f48b:{NFSU2_TR(0x69f48b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f48e:{NFSU2_TR(0x69f48e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69f491:{NFSU2_TR(0x69f491);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B69f495:{NFSU2_TR(0x69f495);
if(r1(R+518)){{goto L69f4db;}}
}
B69f497:L69f497:{c.instructions+=9;NFSU2_TR(0x69f497);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f498:{NFSU2_TR(0x69f498);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B69f49a:{NFSU2_TR(0x69f49a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f49b:{NFSU2_TR(0x69f49b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B69f49e:{NFSU2_TR(0x69f49e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f4a0:{NFSU2_TR(0x69f4a0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f4a2:{NFSU2_TR(0x69f4a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69f4a8:{NFSU2_TR(0x69f4a8);
__builtin_memmove((R+4),(R+24),4);
}
B69f4aa:{NFSU2_TR(0x69f4aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69f4afull));
TAIL_STATIC(0x699c39u,699);
}
B69f4af:L69f4af:{c.instructions+=3;NFSU2_TR(0x69f4af);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69f4b2:{NFSU2_TR(0x69f4b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f4b5:{NFSU2_TR(0x69f4b5);
if(r1(R+518)){{goto L69f6db;}}
}
B69f4bb:L69f4bb:{c.instructions+=11;NFSU2_TR(0x69f4bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f4be:{NFSU2_TR(0x69f4be);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69f4c1:{NFSU2_TR(0x69f4c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f4c4:{NFSU2_TR(0x69f4c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69f4c7:{NFSU2_TR(0x69f4c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f4ca:{NFSU2_TR(0x69f4ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f4cd:{NFSU2_TR(0x69f4cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f4d0:{NFSU2_TR(0x69f4d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69f4d3:{NFSU2_TR(0x69f4d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f4d6:{NFSU2_TR(0x69f4d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f4d9:{NFSU2_TR(0x69f4d9);
{goto L69f4de;}
}
B69f4db:L69f4db:{c.instructions+=1;NFSU2_TR(0x69f4db);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f4de:L69f4de:{c.instructions+=3;NFSU2_TR(0x69f4de);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B69f4df:{NFSU2_TR(0x69f4df);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B69f4e2:{NFSU2_TR(0x69f4e2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69f482u);}goto L69f482;}}
}
B69f4e4:L69f4e4:{c.instructions+=2;NFSU2_TR(0x69f4e4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69f4e8:{NFSU2_TR(0x69f4e8);
if(r1(R+518)){{goto L69f557;}}
}
B69f4ea:L69f4ea:{c.instructions+=2;NFSU2_TR(0x69f4ea);
__builtin_memmove((R+4),(R+24),4);
}
B69f4ec:{NFSU2_TR(0x69f4ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69f4f1ull));
TAIL_STATIC(0x69e7c4u,69e);
}
B69f4f1:L69f4f1:{c.instructions+=4;NFSU2_TR(0x69f4f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f4f4:{NFSU2_TR(0x69f4f4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B69f4f7:{NFSU2_TR(0x69f4f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f4f8:{NFSU2_TR(0x69f4f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69f4fdull));
TAIL_STATIC(0x575620u,575);
}
B69f4fd:L69f4fd:{c.instructions+=5;NFSU2_TR(0x69f4fd);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B69f4ff:{NFSU2_TR(0x69f4ff);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69f501:{NFSU2_TR(0x69f501);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B69f502:{NFSU2_TR(0x69f502);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f505:{NFSU2_TR(0x69f505);
if(r1(R+518)){{goto L69f6db;}}
}
B69f50b:L69f50b:{c.instructions+=4;NFSU2_TR(0x69f50b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69f50d:{NFSU2_TR(0x69f50d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69f510:{NFSU2_TR(0x69f510);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f513:{NFSU2_TR(0x69f513);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69f53c;}}
}
B69f515:L69f515:{c.instructions+=7;NFSU2_TR(0x69f515);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f518:{NFSU2_TR(0x69f518);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69f51b:{NFSU2_TR(0x69f51b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f51e:{NFSU2_TR(0x69f51e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69f521:{NFSU2_TR(0x69f521);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69f524:{NFSU2_TR(0x69f524);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B69f528:{NFSU2_TR(0x69f528);
if(r1(R+518)){{goto L69f536;}}
}
B69f52a:L69f52a:{c.instructions+=4;NFSU2_TR(0x69f52a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69f52d:{NFSU2_TR(0x69f52d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f530:{NFSU2_TR(0x69f530);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69f533:{NFSU2_TR(0x69f533);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69f536:L69f536:{c.instructions+=3;NFSU2_TR(0x69f536);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B69f537:{NFSU2_TR(0x69f537);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69f53a:{NFSU2_TR(0x69f53a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69f515u);}goto L69f515;}}
}
B69f53c:L69f53c:{c.instructions+=5;NFSU2_TR(0x69f53c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f53d:{NFSU2_TR(0x69f53d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69f540:{NFSU2_TR(0x69f540);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69f543:{NFSU2_TR(0x69f543);
u8 U[4];
w4(U+0,u32(0x69a035ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f548:{NFSU2_TR(0x69f548);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69f54dull));
TAIL_STATIC(0x69a41du,69a);
}
B69f54d:L69f54d:{c.instructions+=4;NFSU2_TR(0x69f54d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B69f54f:{NFSU2_TR(0x69f54f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69f552:{NFSU2_TR(0x69f552);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f555:{NFSU2_TR(0x69f555);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L69f56f;}}
}
B69f557:L69f557:{c.instructions+=1;NFSU2_TR(0x69f557);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69f55b:L69f55b:{c.instructions+=2;NFSU2_TR(0x69f55b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69f55e:{NFSU2_TR(0x69f55e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69f563ull));
TAIL_STATIC(0x575630u,575);
}
B69f563:L69f563:{c.instructions+=7;NFSU2_TR(0x69f563);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f566:{NFSU2_TR(0x69f566);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B69f567:{NFSU2_TR(0x69f567);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69f568:{NFSU2_TR(0x69f568);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69f569:{NFSU2_TR(0x69f569);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69f56a:{NFSU2_TR(0x69f56a);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B69f56b:{NFSU2_TR(0x69f56b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69f56c:L69f56c:{c.instructions+=1;NFSU2_TR(0x69f56c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69f56f:L69f56f:{c.instructions+=10;NFSU2_TR(0x69f56f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f572:{NFSU2_TR(0x69f572);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B69f575:{NFSU2_TR(0x69f575);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f578:{NFSU2_TR(0x69f578);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B69f57a:{NFSU2_TR(0x69f57a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69f57d:{NFSU2_TR(0x69f57d);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B69f57e:{NFSU2_TR(0x69f57e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B69f581:{NFSU2_TR(0x69f581);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f584:{NFSU2_TR(0x69f584);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B69f58b:{NFSU2_TR(0x69f58b);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69f5c8;}}
}
B69f58d:L69f58d:{c.instructions+=3;NFSU2_TR(0x69f58d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f590:{NFSU2_TR(0x69f590);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B69f593:{NFSU2_TR(0x69f593);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f596:L69f596:{c.instructions+=6;NFSU2_TR(0x69f596);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69f599:{NFSU2_TR(0x69f599);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B69f59b:{NFSU2_TR(0x69f59b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69f59e:{NFSU2_TR(0x69f59e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69f5a1:{NFSU2_TR(0x69f5a1);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69f5a4:{NFSU2_TR(0x69f5a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69f5c8;}}
}
B69f5a6:L69f5a6:{c.instructions+=3;NFSU2_TR(0x69f5a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69f5a9:{NFSU2_TR(0x69f5a9);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69f5ac:{NFSU2_TR(0x69f5ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69f5c8;}}
}
B69f5ae:L69f5ae:{c.instructions+=3;NFSU2_TR(0x69f5ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69f5b1:{NFSU2_TR(0x69f5b1);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69f5b4:{NFSU2_TR(0x69f5b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69f5c8;}}
}
B69f5b6:L69f5b6:{c.instructions+=6;NFSU2_TR(0x69f5b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69f5b9:{NFSU2_TR(0x69f5b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69f5bc:{NFSU2_TR(0x69f5bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69f5bf:{NFSU2_TR(0x69f5bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69f5c3:{NFSU2_TR(0x69f5c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B69f5c6:{NFSU2_TR(0x69f5c6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69f596u);}goto L69f596;}}
}
B69f5c8:L69f5c8:{c.instructions+=8;NFSU2_TR(0x69f5c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f5cb:{NFSU2_TR(0x69f5cb);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f5cd:{NFSU2_TR(0x69f5cd);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B69f5d2:{NFSU2_TR(0x69f5d2);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f5d4:{NFSU2_TR(0x69f5d4);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10000000ull))));
}
B69f5d9:{NFSU2_TR(0x69f5d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f5da:{NFSU2_TR(0x69f5da);
__builtin_memmove((R+4),(R+24),4);
}
B69f5dc:{NFSU2_TR(0x69f5dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69f5e1ull));
TAIL_STATIC(0x699c99u,699);
}
B69f5e1:L69f5e1:{c.instructions+=2;NFSU2_TR(0x69f5e1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69f5e4:{NFSU2_TR(0x69f5e4);
if(r1(R+518)){{goto L69f6db;}}
}
B69f5ea:L69f5ea:{c.instructions+=6;NFSU2_TR(0x69f5ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f5ed:{NFSU2_TR(0x69f5ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69f5f0:{NFSU2_TR(0x69f5f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69f5f4:{NFSU2_TR(0x69f5f4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69f5f8:{NFSU2_TR(0x69f5f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f5fb:{NFSU2_TR(0x69f5fb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69f693;}}
}
B69f601:L69f601:{c.instructions+=1;NFSU2_TR(0x69f601);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f604:L69f604:{c.instructions+=8;NFSU2_TR(0x69f604);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f607:{NFSU2_TR(0x69f607);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69f609:{NFSU2_TR(0x69f609);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f60c:{NFSU2_TR(0x69f60c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69f60f:{NFSU2_TR(0x69f60f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69f612:{NFSU2_TR(0x69f612);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f615:{NFSU2_TR(0x69f615);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69f618:{NFSU2_TR(0x69f618);
if(r1(R+518)){{goto L69f677;}}
}
B69f61a:L69f61a:{c.instructions+=4;NFSU2_TR(0x69f61a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f61d:{NFSU2_TR(0x69f61d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69f620:{NFSU2_TR(0x69f620);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69f624:{NFSU2_TR(0x69f624);
if(r1(R+518)){{goto L69f63a;}}
}
B69f626:L69f626:{c.instructions+=3;NFSU2_TR(0x69f626);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f629:{NFSU2_TR(0x69f629);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f62a:{NFSU2_TR(0x69f62a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69f62full));
TAIL_STATIC(0x698eb3u,698);
}
B69f62f:L69f62f:{c.instructions+=3;NFSU2_TR(0x69f62f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B69f631:{NFSU2_TR(0x69f631);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f634:{NFSU2_TR(0x69f634);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69f55bu);}goto L69f55b;}}
}
B69f63a:L69f63a:{c.instructions+=4;NFSU2_TR(0x69f63a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69f63c:{NFSU2_TR(0x69f63c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B69f641:{NFSU2_TR(0x69f641);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69f646:{NFSU2_TR(0x69f646);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69f674;}}
}
B69f648:L69f648:{c.instructions+=4;NFSU2_TR(0x69f648);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f64b:{NFSU2_TR(0x69f64b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69f64d:{NFSU2_TR(0x69f64d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69f64f:{NFSU2_TR(0x69f64f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69f660;}}
}
B69f651:L69f651:{c.instructions+=1;NFSU2_TR(0x69f651);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69f654:L69f654:{c.instructions+=2;NFSU2_TR(0x69f654);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+12))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B69f656:{NFSU2_TR(0x69f656);
if(r1(R+518)){{goto L69f660;}}
}
B69f658:L69f658:{c.instructions+=4;NFSU2_TR(0x69f658);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B69f659:{NFSU2_TR(0x69f659);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B69f65c:{NFSU2_TR(0x69f65c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B69f65e:{NFSU2_TR(0x69f65e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69f654u);}goto L69f654;}}
}
B69f660:L69f660:{c.instructions+=7;NFSU2_TR(0x69f660);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f663:{NFSU2_TR(0x69f663);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B69f666:{NFSU2_TR(0x69f666);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f669:{NFSU2_TR(0x69f669);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69f66c:{NFSU2_TR(0x69f66c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f66f:{NFSU2_TR(0x69f66f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69f672:{NFSU2_TR(0x69f672);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69f61au);}goto L69f61a;}}
}
B69f674:L69f674:{c.instructions+=1;NFSU2_TR(0x69f674);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69f677:L69f677:{c.instructions+=3;NFSU2_TR(0x69f677);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f67a:{NFSU2_TR(0x69f67a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69f67e:{NFSU2_TR(0x69f67e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69f693;}}
}
B69f680:L69f680:{c.instructions+=5;NFSU2_TR(0x69f680);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69f683:{NFSU2_TR(0x69f683);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f686:{NFSU2_TR(0x69f686);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69f68a:{NFSU2_TR(0x69f68a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69f68d:{NFSU2_TR(0x69f68d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69f604u);}goto L69f604;}}
}
B69f693:L69f693:{c.instructions+=3;NFSU2_TR(0x69f693);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B69f695:{NFSU2_TR(0x69f695);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69f698:{NFSU2_TR(0x69f698);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69f6c4;}}
}
B69f69a:L69f69a:{c.instructions+=1;NFSU2_TR(0x69f69a);
__builtin_memmove((R+0),(R+28),4);
}
B69f69c:L69f69c:{c.instructions+=15;NFSU2_TR(0x69f69c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B69f69e:{NFSU2_TR(0x69f69e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69f6a1:{NFSU2_TR(0x69f6a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69f6a4:{NFSU2_TR(0x69f6a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f6a7:{NFSU2_TR(0x69f6a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69f6aa:{NFSU2_TR(0x69f6aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69f6ad:{NFSU2_TR(0x69f6ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69f6b0:{NFSU2_TR(0x69f6b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f6b3:{NFSU2_TR(0x69f6b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B69f6b5:{NFSU2_TR(0x69f6b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f6b8:{NFSU2_TR(0x69f6b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69f6bb:{NFSU2_TR(0x69f6bb);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B69f6bc:{NFSU2_TR(0x69f6bc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B69f6bf:{NFSU2_TR(0x69f6bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B69f6c2:{NFSU2_TR(0x69f6c2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69f69cu);}goto L69f69c;}}
}
B69f6c4:L69f6c4:{c.instructions+=5;NFSU2_TR(0x69f6c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f6c7:{NFSU2_TR(0x69f6c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B69f6ca:{NFSU2_TR(0x69f6ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f6cd:{NFSU2_TR(0x69f6cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69f6d0:{NFSU2_TR(0x69f6d0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69f56cu);}goto L69f56c;}}
}
B69f6d6:L69f6d6:{c.instructions+=1;NFSU2_TR(0x69f6d6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69f557u);}goto L69f557;}
}
B69f6db:L69f6db:{c.instructions+=2;NFSU2_TR(0x69f6db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B69f6e2:{NFSU2_TR(0x69f6e2);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69f55bu);}goto L69f55b;}
}
B69f6e7:L69f6e7:{c.instructions+=8;NFSU2_TR(0x69f6e7);
__builtin_memmove((R+28),(R+28),4);
}
B69f6e9:{NFSU2_TR(0x69f6e9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f6ea:{NFSU2_TR(0x69f6ea);
__builtin_memmove((R+20),(R+16),4);
}
B69f6ec:{NFSU2_TR(0x69f6ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f6ef:{NFSU2_TR(0x69f6ef);
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
B69f6f1:{NFSU2_TR(0x69f6f1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f6f2:{NFSU2_TR(0x69f6f2);
__builtin_memmove((R+28),(R+4),4);
}
B69f6f4:{NFSU2_TR(0x69f6f4);
if(r1(R+518)){{goto L69f740;}}
}
B69f6f6:L69f6f6:{c.instructions+=2;NFSU2_TR(0x69f6f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f6f9:{NFSU2_TR(0x69f6f9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f6fa:L69f6fa:{c.instructions+=2;NFSU2_TR(0x69f6fa);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69f6fd:{NFSU2_TR(0x69f6fd);
if(r1(R+518)){{goto L69f70f;}}
}
B69f6ff:L69f6ff:{c.instructions+=5;NFSU2_TR(0x69f6ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69f702:{NFSU2_TR(0x69f702);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69f705:{NFSU2_TR(0x69f705);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69f708:{NFSU2_TR(0x69f708);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69f70b:{NFSU2_TR(0x69f70b);
if(r1(R+518)){{goto L69f70f;}}
}
B69f70d:L69f70d:{c.instructions+=1;NFSU2_TR(0x69f70d);
__builtin_memmove((R+4),(R+8),4);
}
B69f70f:L69f70f:{c.instructions+=4;NFSU2_TR(0x69f70f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69f712:{NFSU2_TR(0x69f712);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69f715:{NFSU2_TR(0x69f715);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B69f718:{NFSU2_TR(0x69f718);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69f71d;}}
}
B69f71a:L69f71a:{c.instructions+=1;NFSU2_TR(0x69f71a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f71d:L69f71d:{c.instructions+=3;NFSU2_TR(0x69f71d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f720:{NFSU2_TR(0x69f720);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69f723:{NFSU2_TR(0x69f723);
if(r1(R+518)){{goto L69f730;}}
}
B69f725:L69f725:{c.instructions+=4;NFSU2_TR(0x69f725);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69f728:{NFSU2_TR(0x69f728);
__builtin_memmove((R+4),(R+28),4);
}
B69f72a:{NFSU2_TR(0x69f72a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f72b:{NFSU2_TR(0x69f72b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69f730ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69f6e7u);}goto L69f6e7;}
}
B69f730:L69f730:{c.instructions+=3;NFSU2_TR(0x69f730);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f733:{NFSU2_TR(0x69f733);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B69f736:{NFSU2_TR(0x69f736);
if(r1(R+518)){{goto L69f73f;}}
}
B69f738:L69f738:{c.instructions+=3;NFSU2_TR(0x69f738);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f73b:{NFSU2_TR(0x69f73b);
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
B69f73d:{NFSU2_TR(0x69f73d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69f6fau);}goto L69f6fa;}}
}
B69f73f:L69f73f:{c.instructions+=1;NFSU2_TR(0x69f73f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69f740:L69f740:{c.instructions+=3;NFSU2_TR(0x69f740);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69f741:{NFSU2_TR(0x69f741);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B69f742:{NFSU2_TR(0x69f742);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69f745:L69f745:{c.instructions+=11;NFSU2_TR(0x69f745);
__builtin_memmove((R+28),(R+28),4);
}
B69f747:{NFSU2_TR(0x69f747);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f748:{NFSU2_TR(0x69f748);
__builtin_memmove((R+20),(R+16),4);
}
B69f74a:{NFSU2_TR(0x69f74a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B69f74d:{NFSU2_TR(0x69f74d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f74e:{NFSU2_TR(0x69f74e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f74f:{NFSU2_TR(0x69f74f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f750:{NFSU2_TR(0x69f750);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B69f752:{NFSU2_TR(0x69f752);
__builtin_memmove((R+28),(R+4),4);
}
B69f754:{NFSU2_TR(0x69f754);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f757:{NFSU2_TR(0x69f757);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69f75cull));
TAIL_STATIC(0x69e219u,69e);
}
B69f75c:L69f75c:{c.instructions+=3;NFSU2_TR(0x69f75c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B69f75e:{NFSU2_TR(0x69f75e);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69f761:{NFSU2_TR(0x69f761);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69f78b;}}
}
B69f763:L69f763:{c.instructions+=14;NFSU2_TR(0x69f763);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f766:{NFSU2_TR(0x69f766);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69f769:{NFSU2_TR(0x69f769);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69f76c:{NFSU2_TR(0x69f76c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69f76f:{NFSU2_TR(0x69f76f);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69f772:{NFSU2_TR(0x69f772);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69f775:{NFSU2_TR(0x69f775);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x10020ull))));
}
B69f77b:{NFSU2_TR(0x69f77b);
w1(R+512,u8((r4(R+8))!=(u32(0x0ull))));
w4(R+8,u32(0-u32(r4(R+8))));
}
B69f77d:{NFSU2_TR(0x69f77d);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(R+8))));
w4(R+8,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B69f77f:{NFSU2_TR(0x69f77f);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x2ull))));
}
B69f782:{NFSU2_TR(0x69f782);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B69f783:{NFSU2_TR(0x69f783);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f786:{NFSU2_TR(0x69f786);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B69f789:{NFSU2_TR(0x69f789);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69f763u);}goto L69f763;}}
}
B69f78b:L69f78b:{c.instructions+=2;NFSU2_TR(0x69f78b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69f78e:{NFSU2_TR(0x69f78e);
{goto L69f7cd;}
}
B69f790:L69f790:{c.instructions+=7;NFSU2_TR(0x69f790);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f793:{NFSU2_TR(0x69f793);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B69f794:{NFSU2_TR(0x69f794);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69f797:{NFSU2_TR(0x69f797);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B69f799:{NFSU2_TR(0x69f799);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
}
B69f79f:{NFSU2_TR(0x69f79f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20900000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69f7a5:{NFSU2_TR(0x69f7a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69f7cb;}}
}
B69f7a7:L69f7a7:{c.instructions+=2;NFSU2_TR(0x69f7a7);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69f7aa:{NFSU2_TR(0x69f7aa);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69f7cb;}}
}
B69f7ac:L69f7ac:{c.instructions+=6;NFSU2_TR(0x69f7ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f7af:{NFSU2_TR(0x69f7af);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69f7b2:{NFSU2_TR(0x69f7b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69f7b5:{NFSU2_TR(0x69f7b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69f7b8:{NFSU2_TR(0x69f7b8);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69f7bc:{NFSU2_TR(0x69f7bc);
if(r1(R+518)){{goto L69f7c5;}}
}
B69f7be:L69f7be:{c.instructions+=1;NFSU2_TR(0x69f7be);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B69f7c5:L69f7c5:{c.instructions+=3;NFSU2_TR(0x69f7c5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B69f7c6:{NFSU2_TR(0x69f7c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B69f7c9:{NFSU2_TR(0x69f7c9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69f7acu);}goto L69f7ac;}}
}
B69f7cb:L69f7cb:{c.instructions+=1;NFSU2_TR(0x69f7cb);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B69f7cd:L69f7cd:{c.instructions+=2;NFSU2_TR(0x69f7cd);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69f7cf:{NFSU2_TR(0x69f7cf);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69f790u);}goto L69f790;}}
}
B69f7d1:L69f7d1:{c.instructions+=5;NFSU2_TR(0x69f7d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f7d4:{NFSU2_TR(0x69f7d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69f7d8:{NFSU2_TR(0x69f7d8);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69f7da:{NFSU2_TR(0x69f7da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f7dd:{NFSU2_TR(0x69f7dd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69fa1c;}}
}
B69f7e3:L69f7e3:{c.instructions+=7;NFSU2_TR(0x69f7e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69f7e6:{NFSU2_TR(0x69f7e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f7e9:{NFSU2_TR(0x69f7e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f7ec:{NFSU2_TR(0x69f7ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69f7ef:{NFSU2_TR(0x69f7ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B69f7f1:{NFSU2_TR(0x69f7f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69f7f7:{NFSU2_TR(0x69f7f7);
if(r1(R+518)){{goto L69f903;}}
}
B69f7fd:L69f7fd:{c.instructions+=4;NFSU2_TR(0x69f7fd);
__builtin_memmove((R+0),(R+4),4);
}
B69f7ff:{NFSU2_TR(0x69f7ff);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf0000000ull))));
}
B69f804:{NFSU2_TR(0x69f804);
w1(R+512,u8((r4(R+0))<(u32(0x10000000ull))));
}
B69f809:{NFSU2_TR(0x69f809);
if(r1(R+512)){{goto L69f893;}}
}
B69f80f:L69f80f:{c.instructions+=2;NFSU2_TR(0x69f80f);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x40000000ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x40000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69f814:{NFSU2_TR(0x69f814);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L69f893;}}
}
B69f816:L69f816:{c.instructions+=8;NFSU2_TR(0x69f816);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f819:{NFSU2_TR(0x69f819);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
}
B69f81f:{NFSU2_TR(0x69f81f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B69f821:{NFSU2_TR(0x69f821);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x69f821);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x69f821);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B69f823:{NFSU2_TR(0x69f823);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69f827:{NFSU2_TR(0x69f827);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69f82b:{NFSU2_TR(0x69f82b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f82e:{NFSU2_TR(0x69f82e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69f903;}}
}
B69f834:L69f834:{c.instructions+=10;NFSU2_TR(0x69f834);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f837:{NFSU2_TR(0x69f837);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f83a:{NFSU2_TR(0x69f83a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69f83d:{NFSU2_TR(0x69f83d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f840:{NFSU2_TR(0x69f840);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69f843:{NFSU2_TR(0x69f843);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69f846:{NFSU2_TR(0x69f846);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B69f848:{NFSU2_TR(0x69f848);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B69f849:{NFSU2_TR(0x69f849);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69f84b:{NFSU2_TR(0x69f84b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69f850;}}
}
B69f84d:L69f84d:{c.instructions+=1;NFSU2_TR(0x69f84d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f850:L69f850:{c.instructions+=4;NFSU2_TR(0x69f850);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f851:{NFSU2_TR(0x69f851);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f852:{NFSU2_TR(0x69f852);
__builtin_memmove((R+4),(R+28),4);
}
B69f854:{NFSU2_TR(0x69f854);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69f859ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69f6e7u);}goto L69f6e7;}
}
B69f859:L69f859:{c.instructions+=3;NFSU2_TR(0x69f859);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69f85d:{NFSU2_TR(0x69f85d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69f861:{NFSU2_TR(0x69f861);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69f886;}}
}
B69f863:L69f863:{c.instructions+=8;NFSU2_TR(0x69f863);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f866:{NFSU2_TR(0x69f866);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B69f86a:{NFSU2_TR(0x69f86a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B69f86d:{NFSU2_TR(0x69f86d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f870:{NFSU2_TR(0x69f870);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69f871:{NFSU2_TR(0x69f871);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B69f874:{NFSU2_TR(0x69f874);
__builtin_memmove((R+4),(R+28),4);
}
B69f876:{NFSU2_TR(0x69f876);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69f87bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69f6e7u);}goto L69f6e7;}
}
B69f87b:L69f87b:{c.instructions+=4;NFSU2_TR(0x69f87b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69f87e:{NFSU2_TR(0x69f87e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f881:{NFSU2_TR(0x69f881);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69f884:{NFSU2_TR(0x69f884);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69f863u);}goto L69f863;}}
}
B69f886:L69f886:{c.instructions+=4;NFSU2_TR(0x69f886);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69f889:{NFSU2_TR(0x69f889);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f88c:{NFSU2_TR(0x69f88c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69f88f:{NFSU2_TR(0x69f88f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69f834u);}goto L69f834;}}
}
B69f891:L69f891:{c.instructions+=1;NFSU2_TR(0x69f891);
{goto L69f903;}
}
B69f893:L69f893:{c.instructions+=4;NFSU2_TR(0x69f893);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69f896:{NFSU2_TR(0x69f896);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69f89a:{NFSU2_TR(0x69f89a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69f89c:{NFSU2_TR(0x69f89c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69f8ca;}}
}
B69f89e:L69f89e:{c.instructions+=3;NFSU2_TR(0x69f89e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f8a1:{NFSU2_TR(0x69f8a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f8a4:{NFSU2_TR(0x69f8a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f8a7:L69f8a7:{c.instructions+=5;NFSU2_TR(0x69f8a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B69f8a9:{NFSU2_TR(0x69f8a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B69f8ac:{NFSU2_TR(0x69f8ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69f8af:{NFSU2_TR(0x69f8af);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B69f8b2:{NFSU2_TR(0x69f8b2);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69f8b7;}}
}
B69f8b4:L69f8b4:{c.instructions+=1;NFSU2_TR(0x69f8b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f8b7:L69f8b7:{c.instructions+=3;NFSU2_TR(0x69f8b7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B69f8ba:{NFSU2_TR(0x69f8ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69f8bd:{NFSU2_TR(0x69f8bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69f8a7u);}goto L69f8a7;}}
}
B69f8bf:L69f8bf:{c.instructions+=4;NFSU2_TR(0x69f8bf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69f8c1:{NFSU2_TR(0x69f8c1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B69f8c2:{NFSU2_TR(0x69f8c2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69f8c5:{NFSU2_TR(0x69f8c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69f8ca;}}
}
B69f8c7:L69f8c7:{c.instructions+=1;NFSU2_TR(0x69f8c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f8ca:L69f8ca:{c.instructions+=3;NFSU2_TR(0x69f8ca);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B69f8cc:{NFSU2_TR(0x69f8cc);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69f8ce:{NFSU2_TR(0x69f8ce);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69f8e6;}}
}
B69f8d0:L69f8d0:{c.instructions+=5;NFSU2_TR(0x69f8d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69f8d3:{NFSU2_TR(0x69f8d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f8d6:{NFSU2_TR(0x69f8d6);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B69f8d9:{NFSU2_TR(0x69f8d9);
__builtin_memmove((R+4),(R+28),4);
}
B69f8db:{NFSU2_TR(0x69f8db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69f8e0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69f6e7u);}goto L69f6e7;}
}
B69f8e0:L69f8e0:{c.instructions+=3;NFSU2_TR(0x69f8e0);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B69f8e1:{NFSU2_TR(0x69f8e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B69f8e4:{NFSU2_TR(0x69f8e4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69f8d0u);}goto L69f8d0;}}
}
B69f8e6:L69f8e6:{c.instructions+=3;NFSU2_TR(0x69f8e6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B69f8e8:{NFSU2_TR(0x69f8e8);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69f8eb:{NFSU2_TR(0x69f8eb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69f903;}}
}
B69f8ed:L69f8ed:{c.instructions+=5;NFSU2_TR(0x69f8ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69f8f0:{NFSU2_TR(0x69f8f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f8f3:{NFSU2_TR(0x69f8f3);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B69f8f6:{NFSU2_TR(0x69f8f6);
__builtin_memmove((R+4),(R+28),4);
}
B69f8f8:{NFSU2_TR(0x69f8f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69f8fdull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69f6e7u);}goto L69f6e7;}
}
B69f8fd:L69f8fd:{c.instructions+=3;NFSU2_TR(0x69f8fd);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B69f8fe:{NFSU2_TR(0x69f8fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B69f901:{NFSU2_TR(0x69f901);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69f8edu);}goto L69f8ed;}}
}
B69f903:L69f903:{c.instructions+=2;NFSU2_TR(0x69f903);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69f907:{NFSU2_TR(0x69f907);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69f7e3u);}goto L69f7e3;}}
}
B69f90d:L69f90d:{c.instructions+=2;NFSU2_TR(0x69f90d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69f911:{NFSU2_TR(0x69f911);
if(r1(R+518)){{goto L69fa1c;}}
}
B69f917:L69f917:{c.instructions+=5;NFSU2_TR(0x69f917);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69f919:{NFSU2_TR(0x69f919);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69f91c:{NFSU2_TR(0x69f91c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f91f:{NFSU2_TR(0x69f91f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f922:{NFSU2_TR(0x69f922);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69fa1c;}}
}
B69f928:L69f928:{c.instructions+=7;NFSU2_TR(0x69f928);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f92b:{NFSU2_TR(0x69f92b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f92e:{NFSU2_TR(0x69f92e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69f931:{NFSU2_TR(0x69f931);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69f933:{NFSU2_TR(0x69f933);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B69f938:{NFSU2_TR(0x69f938);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20900000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69f93d:{NFSU2_TR(0x69f93d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69fa03;}}
}
B69f943:L69f943:{c.instructions+=4;NFSU2_TR(0x69f943);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f946:{NFSU2_TR(0x69f946);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69f94a:{NFSU2_TR(0x69f94a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69f94c:{NFSU2_TR(0x69f94c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69fa03;}}
}
B69f952:L69f952:{c.instructions+=8;NFSU2_TR(0x69f952);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69f955:{NFSU2_TR(0x69f955);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69f958:{NFSU2_TR(0x69f958);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f95b:{NFSU2_TR(0x69f95b);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69f95e:{NFSU2_TR(0x69f95e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69f961:{NFSU2_TR(0x69f961);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69f965:{NFSU2_TR(0x69f965);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f968:{NFSU2_TR(0x69f968);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69f9f4;}}
}
B69f96e:L69f96e:{c.instructions+=6;NFSU2_TR(0x69f96e);
__builtin_memmove((R+24),(R+12),4);
}
B69f970:{NFSU2_TR(0x69f970);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B69f972:{NFSU2_TR(0x69f972);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69f975:{NFSU2_TR(0x69f975);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69f978:{NFSU2_TR(0x69f978);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69f97b:{NFSU2_TR(0x69f97b);
if(r1(R+518)){{goto L69f98a;}}
}
B69f97d:L69f97d:{c.instructions+=4;NFSU2_TR(0x69f97d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69f980:{NFSU2_TR(0x69f980);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69f983:{NFSU2_TR(0x69f983);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69f986:{NFSU2_TR(0x69f986);
if(r1(R+518)){{goto L69f98a;}}
}
B69f988:L69f988:{c.instructions+=1;NFSU2_TR(0x69f988);
__builtin_memmove((R+4),(R+24),4);
}
B69f98a:L69f98a:{c.instructions+=8;NFSU2_TR(0x69f98a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69f98d:{NFSU2_TR(0x69f98d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69f991:{NFSU2_TR(0x69f991);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f994:{NFSU2_TR(0x69f994);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69f997:{NFSU2_TR(0x69f997);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f99a:{NFSU2_TR(0x69f99a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69f99d:{NFSU2_TR(0x69f99d);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69f9a1:{NFSU2_TR(0x69f9a1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69f9c3;}}
}
B69f9a3:L69f9a3:{c.instructions+=2;NFSU2_TR(0x69f9a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69f9a6:{NFSU2_TR(0x69f9a6);
{goto L69f9ab;}
}
B69f9a8:L69f9a8:{c.instructions+=1;NFSU2_TR(0x69f9a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69f9ab:L69f9ab:{c.instructions+=3;NFSU2_TR(0x69f9ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69f9ae:{NFSU2_TR(0x69f9ae);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B69f9b0:{NFSU2_TR(0x69f9b0);
if(r1(R+518)){{goto L69f9c3;}}
}
B69f9b2:L69f9b2:{c.instructions+=6;NFSU2_TR(0x69f9b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69f9b5:{NFSU2_TR(0x69f9b5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B69f9b8:{NFSU2_TR(0x69f9b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f9bb:{NFSU2_TR(0x69f9bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69f9be:{NFSU2_TR(0x69f9be);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B69f9c1:{NFSU2_TR(0x69f9c1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69f9a8u);}goto L69f9a8;}}
}
B69f9c3:L69f9c3:{c.instructions+=5;NFSU2_TR(0x69f9c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f9c6:{NFSU2_TR(0x69f9c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69f9c9:{NFSU2_TR(0x69f9c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69f9cc:{NFSU2_TR(0x69f9cc);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69f9cf:{NFSU2_TR(0x69f9cf);
if(r1(R+518)){{goto L69f9de;}}
}
B69f9d1:L69f9d1:{c.instructions+=4;NFSU2_TR(0x69f9d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69f9d4:{NFSU2_TR(0x69f9d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69f9d7:{NFSU2_TR(0x69f9d7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69f9da:{NFSU2_TR(0x69f9da);
if(r1(R+518)){{goto L69f9de;}}
}
B69f9dc:L69f9dc:{c.instructions+=1;NFSU2_TR(0x69f9dc);
__builtin_memmove((R+4),(R+24),4);
}
B69f9de:L69f9de:{c.instructions+=6;NFSU2_TR(0x69f9de);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69f9e1:{NFSU2_TR(0x69f9e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69f9e4:{NFSU2_TR(0x69f9e4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B69f9e6:{NFSU2_TR(0x69f9e6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B69f9e7:{NFSU2_TR(0x69f9e7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69f9e9:{NFSU2_TR(0x69f9e9);
if(r1(R+518)){{goto L69f9f4;}}
}
B69f9eb:L69f9eb:{c.instructions+=3;NFSU2_TR(0x69f9eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69f9ee:{NFSU2_TR(0x69f9ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f9f1:{NFSU2_TR(0x69f9f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69f9f4:L69f9f4:{c.instructions+=4;NFSU2_TR(0x69f9f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69f9f7:{NFSU2_TR(0x69f9f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69f9fa:{NFSU2_TR(0x69f9fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B69f9fd:{NFSU2_TR(0x69f9fd);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69f952u);}goto L69f952;}}
}
B69fa03:L69fa03:{c.instructions+=4;NFSU2_TR(0x69fa03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69fa06:{NFSU2_TR(0x69fa06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69fa09:{NFSU2_TR(0x69fa09);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69fa0c:{NFSU2_TR(0x69fa0c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69f928u);}goto L69f928;}}
}
B69fa12:L69fa12:{c.instructions+=2;NFSU2_TR(0x69fa12);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69fa16:{NFSU2_TR(0x69fa16);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69f7d1u);}goto L69f7d1;}}
}
B69fa1c:L69fa1c:{c.instructions+=3;NFSU2_TR(0x69fa1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69fa20:{NFSU2_TR(0x69fa20);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69fa24:{NFSU2_TR(0x69fa24);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69fb86;}}
}
B69fa2a:L69fa2a:{c.instructions+=6;NFSU2_TR(0x69fa2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69fa2d:{NFSU2_TR(0x69fa2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69fa30:{NFSU2_TR(0x69fa30);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69fa33:{NFSU2_TR(0x69fa33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B69fa35:{NFSU2_TR(0x69fa35);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xfff00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69fa3b:{NFSU2_TR(0x69fa3b);
if(r1(R+518)){{goto L69fb77;}}
}
B69fa41:L69fa41:{c.instructions+=4;NFSU2_TR(0x69fa41);
__builtin_memmove((R+0),(R+24),4);
}
B69fa43:{NFSU2_TR(0x69fa43);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf0000000ull))));
}
B69fa48:{NFSU2_TR(0x69fa48);
w1(R+512,u8((r4(R+0))<(u32(0x10000000ull))));
}
B69fa4d:{NFSU2_TR(0x69fa4d);
if(r1(R+512)){{goto L69fb40;}}
}
B69fa53:L69fa53:{c.instructions+=2;NFSU2_TR(0x69fa53);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x40000000ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x40000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69fa58:{NFSU2_TR(0x69fa58);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L69fb40;}}
}
B69fa5e:L69fa5e:{c.instructions+=9;NFSU2_TR(0x69fa5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69fa61:{NFSU2_TR(0x69fa61);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffull))));
}
B69fa67:{NFSU2_TR(0x69fa67);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B69fa69:{NFSU2_TR(0x69fa69);
u8 U[56];
w8(U+0,u64(r4(R+24)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x69fa69);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x69fa69);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B69fa6b:{NFSU2_TR(0x69fa6b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B69fa6d:{NFSU2_TR(0x69fa6d);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69fa70:{NFSU2_TR(0x69fa70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69fa73:{NFSU2_TR(0x69fa73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69fa76:{NFSU2_TR(0x69fa76);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69facb;}}
}
B69fa78:L69fa78:{c.instructions+=7;NFSU2_TR(0x69fa78);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69fa7b:{NFSU2_TR(0x69fa7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69fa7e:{NFSU2_TR(0x69fa7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69fa81:{NFSU2_TR(0x69fa81);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69fa84:{NFSU2_TR(0x69fa84);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B69fa87:{NFSU2_TR(0x69fa87);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69fa8b:{NFSU2_TR(0x69fa8b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69fabd;}}
}
B69fa8d:L69fa8d:{c.instructions+=4;NFSU2_TR(0x69fa8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69fa91:{NFSU2_TR(0x69fa91);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69fa95:{NFSU2_TR(0x69fa95);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69fa98:{NFSU2_TR(0x69fa98);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69fabc;}}
}
B69fa9a:L69fa9a:{c.instructions+=12;NFSU2_TR(0x69fa9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69fa9d:{NFSU2_TR(0x69fa9d);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w8(U+8,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
}
B69faa1:{NFSU2_TR(0x69faa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69faa4:{NFSU2_TR(0x69faa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69faa7:{NFSU2_TR(0x69faa7);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B69faa9:{NFSU2_TR(0x69faa9);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B69faac:{NFSU2_TR(0x69faac);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B69faae:{NFSU2_TR(0x69faae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69fab1:{NFSU2_TR(0x69fab1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69fab4:{NFSU2_TR(0x69fab4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69fab7:{NFSU2_TR(0x69fab7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69faba:{NFSU2_TR(0x69faba);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69fa9au);}goto L69fa9a;}}
}
B69fabc:L69fabc:{c.instructions+=1;NFSU2_TR(0x69fabc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B69fabd:L69fabd:{c.instructions+=4;NFSU2_TR(0x69fabd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69fac0:{NFSU2_TR(0x69fac0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69fac3:{NFSU2_TR(0x69fac3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69fac6:{NFSU2_TR(0x69fac6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69fa78u);}goto L69fa78;}}
}
B69fac8:L69fac8:{c.instructions+=1;NFSU2_TR(0x69fac8);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69facb:L69facb:{c.instructions+=1;NFSU2_TR(0x69facb);
if(r1(R+518)){{goto L69fb77;}}
}
B69fad1:L69fad1:{c.instructions+=2;NFSU2_TR(0x69fad1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69fad3:{NFSU2_TR(0x69fad3);
if(r1(R+518)){{goto L69fae2;}}
}
B69fad5:L69fad5:{c.instructions+=5;NFSU2_TR(0x69fad5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69fad7:{NFSU2_TR(0x69fad7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+24))));
}
B69fad9:{NFSU2_TR(0x69fad9);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B69fade:{NFSU2_TR(0x69fade);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+0))));
}
B69fae0:{NFSU2_TR(0x69fae0);
{goto L69fae4;}
}
B69fae2:L69fae2:{c.instructions+=1;NFSU2_TR(0x69fae2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69fae4:L69fae4:{c.instructions+=6;NFSU2_TR(0x69fae4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B69fae6:{NFSU2_TR(0x69fae6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69fae8:{NFSU2_TR(0x69fae8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B69fae9:{NFSU2_TR(0x69fae9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69faec:{NFSU2_TR(0x69faec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69faef:{NFSU2_TR(0x69faef);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69fb35;}}
}
B69faf1:L69faf1:{c.instructions+=3;NFSU2_TR(0x69faf1);
__builtin_memmove((R+0),(R+24),4);
}
B69faf3:{NFSU2_TR(0x69faf3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B69faf6:{NFSU2_TR(0x69faf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69faf9:L69faf9:{c.instructions+=3;NFSU2_TR(0x69faf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69fafd:{NFSU2_TR(0x69fafd);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69faff:{NFSU2_TR(0x69faff);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69fb22;}}
}
B69fb01:L69fb01:{c.instructions+=1;NFSU2_TR(0x69fb01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69fb04:L69fb04:{c.instructions+=10;NFSU2_TR(0x69fb04);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69fb07:{NFSU2_TR(0x69fb07);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w8(U+8,u64(s64(s32(r4(R+12)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+12,u32(r8(U+24)));
}
B69fb0b:{NFSU2_TR(0x69fb0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B69fb0e:{NFSU2_TR(0x69fb0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69fb11:{NFSU2_TR(0x69fb11);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B69fb14:{NFSU2_TR(0x69fb14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69fb17:{NFSU2_TR(0x69fb17);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69fb1a:{NFSU2_TR(0x69fb1a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B69fb1d:{NFSU2_TR(0x69fb1d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
}
B69fb20:{NFSU2_TR(0x69fb20);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69fb04u);}goto L69fb04;}}
}
B69fb22:L69fb22:{c.instructions+=7;NFSU2_TR(0x69fb22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69fb25:{NFSU2_TR(0x69fb25);
__builtin_memmove((R+0),(R+24),4);
}
B69fb27:{NFSU2_TR(0x69fb27);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B69fb2a:{NFSU2_TR(0x69fb2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B69fb2d:{NFSU2_TR(0x69fb2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69fb30:{NFSU2_TR(0x69fb30);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69fb33:{NFSU2_TR(0x69fb33);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69faf9u);}goto L69faf9;}}
}
B69fb35:L69fb35:{c.instructions+=4;NFSU2_TR(0x69fb35);
__builtin_memmove((R+0),(R+24),4);
}
B69fb37:{NFSU2_TR(0x69fb37);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B69fb3b:{NFSU2_TR(0x69fb3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69fb3e:{NFSU2_TR(0x69fb3e);
{goto L69fb6d;}
}
B69fb40:L69fb40:{c.instructions+=3;NFSU2_TR(0x69fb40);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B69fb42:{NFSU2_TR(0x69fb42);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69fb45:{NFSU2_TR(0x69fb45);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69fb64;}}
}
B69fb47:L69fb47:{c.instructions+=2;NFSU2_TR(0x69fb47);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69fb4a:{NFSU2_TR(0x69fb4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69fb4d:L69fb4d:{c.instructions+=4;NFSU2_TR(0x69fb4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B69fb4f:{NFSU2_TR(0x69fb4f);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B69fb52:{NFSU2_TR(0x69fb52);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69fb56:{NFSU2_TR(0x69fb56);
if(r1(R+518)){{goto L69fb61;}}
}
B69fb58:L69fb58:{c.instructions+=4;NFSU2_TR(0x69fb58);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B69fb59:{NFSU2_TR(0x69fb59);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B69fb5c:{NFSU2_TR(0x69fb5c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B69fb5f:{NFSU2_TR(0x69fb5f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69fb4du);}goto L69fb4d;}}
}
B69fb61:L69fb61:{c.instructions+=1;NFSU2_TR(0x69fb61);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69fb64:L69fb64:{c.instructions+=1;NFSU2_TR(0x69fb64);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69fb77;}}
}
B69fb66:L69fb66:{c.instructions+=3;NFSU2_TR(0x69fb66);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69fb68:{NFSU2_TR(0x69fb68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B69fb6a:{NFSU2_TR(0x69fb6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69fb6d:L69fb6d:{c.instructions+=2;NFSU2_TR(0x69fb6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69fb70:{NFSU2_TR(0x69fb70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B69fb77:L69fb77:{c.instructions+=4;NFSU2_TR(0x69fb77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69fb7a:{NFSU2_TR(0x69fb7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69fb7d:{NFSU2_TR(0x69fb7d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69fb80:{NFSU2_TR(0x69fb80);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69fa2au);}goto L69fa2a;}}
}
B69fb86:L69fb86:{c.instructions+=3;NFSU2_TR(0x69fb86);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B69fb88:{NFSU2_TR(0x69fb88);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69fb8b:{NFSU2_TR(0x69fb8b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69fbea;}}
}
B69fb8d:L69fb8d:{c.instructions+=4;NFSU2_TR(0x69fb8d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69fb90:{NFSU2_TR(0x69fb90);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69fb93:{NFSU2_TR(0x69fb93);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69fb96:{NFSU2_TR(0x69fb96);
if(r1(R+518)){{goto L69fba0;}}
}
B69fb98:L69fb98:{c.instructions+=3;NFSU2_TR(0x69fb98);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69fb9b:{NFSU2_TR(0x69fb9b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69fb9e:{NFSU2_TR(0x69fb9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69fba2;}}
}
B69fba0:L69fba0:{c.instructions+=1;NFSU2_TR(0x69fba0);
__builtin_memmove((R+8),(R+24),4);
}
B69fba2:L69fba2:{c.instructions+=3;NFSU2_TR(0x69fba2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69fba5:{NFSU2_TR(0x69fba5);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69fba9:{NFSU2_TR(0x69fba9);
if(r1(R+518)){{goto L69fbe4;}}
}
B69fbab:L69fbab:{c.instructions+=4;NFSU2_TR(0x69fbab);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69fbae:{NFSU2_TR(0x69fbae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69fbb1:{NFSU2_TR(0x69fbb1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69fbb3:{NFSU2_TR(0x69fbb3);
if(r1(R+518)){{goto L69fbe4;}}
}
B69fbb5:L69fbb5:{c.instructions+=2;NFSU2_TR(0x69fbb5);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69fbb9:{NFSU2_TR(0x69fbb9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69fbc7;}}
}
B69fbbb:L69fbbb:{c.instructions+=4;NFSU2_TR(0x69fbbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69fbbe:{NFSU2_TR(0x69fbbe);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B69fbc1:{NFSU2_TR(0x69fbc1);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B69fbc5:{NFSU2_TR(0x69fbc5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69fbe4;}}
}
B69fbc7:L69fbc7:{c.instructions+=5;NFSU2_TR(0x69fbc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69fbca:{NFSU2_TR(0x69fbca);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69fbcd:{NFSU2_TR(0x69fbcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69fbd0:{NFSU2_TR(0x69fbd0);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B69fbd3:{NFSU2_TR(0x69fbd3);
if(r1(R+518)){{goto L69fbda;}}
}
B69fbd5:L69fbd5:{c.instructions+=2;NFSU2_TR(0x69fbd5);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B69fbd8:{NFSU2_TR(0x69fbd8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69fbe4;}}
}
B69fbda:L69fbda:{c.instructions+=2;NFSU2_TR(0x69fbda);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69fbdd:{NFSU2_TR(0x69fbdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B69fbe4:L69fbe4:{c.instructions+=3;NFSU2_TR(0x69fbe4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B69fbe5:{NFSU2_TR(0x69fbe5);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B69fbe8:{NFSU2_TR(0x69fbe8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69fb8du);}goto L69fb8d;}}
}
B69fbea:L69fbea:{c.instructions+=8;NFSU2_TR(0x69fbea);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69fbec:{NFSU2_TR(0x69fbec);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
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
B69fbef:{NFSU2_TR(0x69fbef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69fbf0:{NFSU2_TR(0x69fbf0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69fbf1:{NFSU2_TR(0x69fbf1);
__builtin_memmove((R+0),(R+518),1);
}
B69fbf4:{NFSU2_TR(0x69fbf4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69fbf5:{NFSU2_TR(0x69fbf5);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B69fbf6:{NFSU2_TR(0x69fbf6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69fbf7:L69fbf7:{c.instructions+=11;NFSU2_TR(0x69fbf7);
__builtin_memmove((R+28),(R+28),4);
}
B69fbf9:{NFSU2_TR(0x69fbf9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69fbfa:{NFSU2_TR(0x69fbfa);
__builtin_memmove((R+20),(R+16),4);
}
B69fbfc:{NFSU2_TR(0x69fbfc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x54ull))));
}
B69fbff:{NFSU2_TR(0x69fbff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69fc00:{NFSU2_TR(0x69fc00);
__builtin_memmove((R+24),(R+4),4);
}
B69fc02:{NFSU2_TR(0x69fc02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69fc05:{NFSU2_TR(0x69fc05);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B69fc08:{NFSU2_TR(0x69fc08);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69fc09:{NFSU2_TR(0x69fc09);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69fc0a:{NFSU2_TR(0x69fc0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69fc0full));
TAIL_STATIC(0x575620u,575);
}
B69fc0f:L69fc0f:{c.instructions+=5;NFSU2_TR(0x69fc0f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B69fc11:{NFSU2_TR(0x69fc11);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69fc13:{NFSU2_TR(0x69fc13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B69fc14:{NFSU2_TR(0x69fc14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69fc17:{NFSU2_TR(0x69fc17);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69fc23;}}
}
B69fc19:L69fc19:{c.instructions+=2;NFSU2_TR(0x69fc19);
w4(R+24,u32(0x8007000eull));
}
B69fc1e:{NFSU2_TR(0x69fc1e);
TAIL_STATIC(0x6a0097u,6a0);
}
B69fc23:L69fc23:{c.instructions+=6;NFSU2_TR(0x69fc23);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69fc24:{NFSU2_TR(0x69fc24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69fc27:{NFSU2_TR(0x69fc27);
__builtin_memmove((R+4),(R+24),4);
}
B69fc29:{NFSU2_TR(0x69fc29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69fc2c:{NFSU2_TR(0x69fc2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69fc2f:{NFSU2_TR(0x69fc2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69fc34ull));
TAIL_STATIC(0x69e219u,69e);
}
B69fc34:L69fc34:{c.instructions+=2;NFSU2_TR(0x69fc34);
__builtin_memmove((R+4),(R+24),4);
}
B69fc36:{NFSU2_TR(0x69fc36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69fc3bull));
TAIL_STATIC(0x69e7abu,69e);
}
B69fc3b:L69fc3b:{c.instructions+=3;NFSU2_TR(0x69fc3b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69fc3e:{NFSU2_TR(0x69fc3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69fc41:{NFSU2_TR(0x69fc41);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69fda7;}}
}
B69fc47:L69fc47:{c.instructions+=6;NFSU2_TR(0x69fc47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69fc4a:{NFSU2_TR(0x69fc4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69fc4d:{NFSU2_TR(0x69fc4d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69fc50:{NFSU2_TR(0x69fc50);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69fc54:{NFSU2_TR(0x69fc54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69fc57:{NFSU2_TR(0x69fc57);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69fd98;}}
}
B69fc5d:L69fc5d:{c.instructions+=3;NFSU2_TR(0x69fc5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69fc60:{NFSU2_TR(0x69fc60);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69fc63:{NFSU2_TR(0x69fc63);
if(r1(R+518)){{goto L69fd98;}}
}
B69fc69:L69fc69:{c.instructions+=6;NFSU2_TR(0x69fc69);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69fc6c:{NFSU2_TR(0x69fc6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69fc6f:{NFSU2_TR(0x69fc6f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69fc72:{NFSU2_TR(0x69fc72);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69fc75:{NFSU2_TR(0x69fc75);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B69fc77:{NFSU2_TR(0x69fc77);
if(r1(R+518)){{goto L69fd98;}}
}
B69fc7d:L69fc7d:{c.instructions+=2;NFSU2_TR(0x69fc7d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B69fc7f:{NFSU2_TR(0x69fc7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69fd98;}}
}
B69fc85:L69fc85:{c.instructions+=7;NFSU2_TR(0x69fc85);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69fc88:{NFSU2_TR(0x69fc88);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69fc8b:{NFSU2_TR(0x69fc8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B69fc8d:{NFSU2_TR(0x69fc8d);
__builtin_memmove((R+0),(R+4),4);
}
B69fc8f:{NFSU2_TR(0x69fc8f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf0000000ull))));
}
B69fc94:{NFSU2_TR(0x69fc94);
w1(R+512,u8((r4(R+0))<(u32(0x10000000ull))));
}
B69fc99:{NFSU2_TR(0x69fc99);
if(r1(R+512)){{goto L69fd98;}}
}
B69fc9f:L69fc9f:{c.instructions+=2;NFSU2_TR(0x69fc9f);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x40000000ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x40000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69fca4:{NFSU2_TR(0x69fca4);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L69fd98;}}
}
B69fcaa:L69fcaa:{c.instructions+=5;NFSU2_TR(0x69fcaa);
__builtin_memmove((R+12),(R+4),4);
}
B69fcac:{NFSU2_TR(0x69fcac);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfff00000ull))));
}
B69fcb2:{NFSU2_TR(0x69fcb2);
w4(R+0,u32(0x11400000ull));
}
B69fcb7:{NFSU2_TR(0x69fcb7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69fcb9:{NFSU2_TR(0x69fcb9);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L69fced;}}
}
B69fcbb:L69fcbb:{c.instructions+=1;NFSU2_TR(0x69fcbb);
if(r1(R+518)){{goto L69fd98;}}
}
B69fcc1:L69fcc1:{c.instructions+=2;NFSU2_TR(0x69fcc1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10f00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69fcc7:{NFSU2_TR(0x69fcc7);
if(r1(R+518)){{goto L69fd98;}}
}
B69fccd:L69fccd:{c.instructions+=2;NFSU2_TR(0x69fccd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69fcd3:{NFSU2_TR(0x69fcd3);
if(r1(R+518)){{goto L69fd98;}}
}
B69fcd9:L69fcd9:{c.instructions+=2;NFSU2_TR(0x69fcd9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11200000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69fcdf:{NFSU2_TR(0x69fcdf);
if(r1(R+518)){{goto L69fd98;}}
}
B69fce5:L69fce5:{c.instructions+=2;NFSU2_TR(0x69fce5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11300000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69fceb:{NFSU2_TR(0x69fceb);
{goto L69fd17;}
}
B69fced:L69fced:{c.instructions+=2;NFSU2_TR(0x69fced);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11500000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69fcf3:{NFSU2_TR(0x69fcf3);
if(r1(R+518)){{goto L69fd98;}}
}
B69fcf9:L69fcf9:{c.instructions+=2;NFSU2_TR(0x69fcf9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20700000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69fcff:{NFSU2_TR(0x69fcff);
if(r1(R+518)){{goto L69fd98;}}
}
B69fd05:L69fd05:{c.instructions+=2;NFSU2_TR(0x69fd05);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20800000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69fd0b:{NFSU2_TR(0x69fd0b);
if(r1(R+518)){{goto L69fd98;}}
}
B69fd11:L69fd11:{c.instructions+=1;NFSU2_TR(0x69fd11);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20900000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69fd17:L69fd17:{c.instructions+=1;NFSU2_TR(0x69fd17);
if(r1(R+518)){{goto L69fd98;}}
}
B69fd19:L69fd19:{c.instructions+=3;NFSU2_TR(0x69fd19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69fd1d:{NFSU2_TR(0x69fd1d);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69fd21:{NFSU2_TR(0x69fd21);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69fd3b;}}
}
B69fd23:L69fd23:{c.instructions+=1;NFSU2_TR(0x69fd23);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69fd26:L69fd26:{c.instructions+=3;NFSU2_TR(0x69fd26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69fd29:{NFSU2_TR(0x69fd29);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B69fd2b:{NFSU2_TR(0x69fd2b);
if(r1(R+518)){{goto L69fd3b;}}
}
B69fd2d:L69fd2d:{c.instructions+=5;NFSU2_TR(0x69fd2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69fd30:{NFSU2_TR(0x69fd30);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69fd33:{NFSU2_TR(0x69fd33);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B69fd36:{NFSU2_TR(0x69fd36);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B69fd39:{NFSU2_TR(0x69fd39);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69fd26u);}goto L69fd26;}}
}
B69fd3b:L69fd3b:{c.instructions+=7;NFSU2_TR(0x69fd3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69fd3e:{NFSU2_TR(0x69fd3e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
}
B69fd44:{NFSU2_TR(0x69fd44);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B69fd46:{NFSU2_TR(0x69fd46);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x69fd46);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x69fd46);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B69fd48:{NFSU2_TR(0x69fd48);
__builtin_memmove((R+4),(R+28),4);
}
B69fd4a:{NFSU2_TR(0x69fd4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69fd4d:{NFSU2_TR(0x69fd4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69fd52ull));
TAIL_STATIC(0x698f6cu,698);
}
B69fd52:L69fd52:{c.instructions+=4;NFSU2_TR(0x69fd52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69fd56:{NFSU2_TR(0x69fd56);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69fd5a:{NFSU2_TR(0x69fd5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69fd5d:{NFSU2_TR(0x69fd5d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69fd83;}}
}
B69fd5f:L69fd5f:{c.instructions+=6;NFSU2_TR(0x69fd5f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69fd62:{NFSU2_TR(0x69fd62);
__builtin_memmove((R+4),(R+24),4);
}
B69fd64:{NFSU2_TR(0x69fd64);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69fd67:{NFSU2_TR(0x69fd67);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69fd6a:{NFSU2_TR(0x69fd6a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69fd6b:{NFSU2_TR(0x69fd6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69fd70ull));
TAIL_STATIC(0x69a696u,69a);
}
B69fd70:L69fd70:{c.instructions+=6;NFSU2_TR(0x69fd70);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0x83full)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B69fd76:{NFSU2_TR(0x69fd76);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B69fd78:{NFSU2_TR(0x69fd78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69fd7b:{NFSU2_TR(0x69fd7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69fd7e:{NFSU2_TR(0x69fd7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69fd81:{NFSU2_TR(0x69fd81);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69fd5fu);}goto L69fd5f;}}
}
B69fd83:L69fd83:{c.instructions+=7;NFSU2_TR(0x69fd83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69fd86:{NFSU2_TR(0x69fd86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69fd89:{NFSU2_TR(0x69fd89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69fd8c:{NFSU2_TR(0x69fd8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69fd8f:{NFSU2_TR(0x69fd8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69fd92:{NFSU2_TR(0x69fd92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69fd95:{NFSU2_TR(0x69fd95);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69fd98:L69fd98:{c.instructions+=4;NFSU2_TR(0x69fd98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69fd9b:{NFSU2_TR(0x69fd9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69fd9e:{NFSU2_TR(0x69fd9e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69fda1:{NFSU2_TR(0x69fda1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69fc47u);}goto L69fc47;}}
}
B69fda7:L69fda7:{c.instructions+=7;NFSU2_TR(0x69fda7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69fdaa:{NFSU2_TR(0x69fdaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69fdad:{NFSU2_TR(0x69fdad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69fdae:{NFSU2_TR(0x69fdae);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69fdaf:{NFSU2_TR(0x69fdaf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69fdb0:{NFSU2_TR(0x69fdb0);
u8 U[4];
w4(U+0,u32(0x69a3efull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69fdb5:{NFSU2_TR(0x69fdb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69fdbaull));
TAIL_STATIC(0x69a41du,69a);
}
B69fdba:L69fdba:{c.instructions+=2;NFSU2_TR(0x69fdba);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69fdbc:{NFSU2_TR(0x69fdbc);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6a008cu,6a0);}
}
B69fdc2:L69fdc2:{c.instructions+=14;NFSU2_TR(0x69fdc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B69fdc9:{NFSU2_TR(0x69fdc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69fdcc:{NFSU2_TR(0x69fdcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69fdcf:{NFSU2_TR(0x69fdcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69fdd2:{NFSU2_TR(0x69fdd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B69fdd4:{NFSU2_TR(0x69fdd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69fdd7:{NFSU2_TR(0x69fdd7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69fdda:{NFSU2_TR(0x69fdda);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69fddd:{NFSU2_TR(0x69fddd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69fde0:{NFSU2_TR(0x69fde0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69fde3:{NFSU2_TR(0x69fde3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69fde6:{NFSU2_TR(0x69fde6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69fde9:{NFSU2_TR(0x69fde9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69fdec:{NFSU2_TR(0x69fdec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6a0036u,6a0);}
}
B69fdf2:L69fdf2:{c.instructions+=3;NFSU2_TR(0x69fdf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69fdf5:{NFSU2_TR(0x69fdf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69fdf8:{NFSU2_TR(0x69fdf8);
TAIL_STATIC(0x6a002du,6a0);
}
B69fdfd:L69fdfd:{c.instructions+=9;NFSU2_TR(0x69fdfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69fe00:{NFSU2_TR(0x69fe00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69fe03:{NFSU2_TR(0x69fe03);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69fe06:{NFSU2_TR(0x69fe06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69fe09:{NFSU2_TR(0x69fe09);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69fe0c:{NFSU2_TR(0x69fe0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69fe0f:{NFSU2_TR(0x69fe0f);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69fe12:{NFSU2_TR(0x69fe12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69fe15:{NFSU2_TR(0x69fe15);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6a0036u,6a0);}
}
B69fe1b:L69fe1b:{c.instructions+=2;NFSU2_TR(0x69fe1b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69fe1e:{NFSU2_TR(0x69fe1e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6a0027u,6a0);}
}
B69fe24:L69fe24:{c.instructions+=3;NFSU2_TR(0x69fe24);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69fe27:{NFSU2_TR(0x69fe27);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69fe2a:{NFSU2_TR(0x69fe2a);
if(r1(R+518)){TAIL_STATIC(0x6a0027u,6a0);}
}
B69fe30:L69fe30:{c.instructions+=3;NFSU2_TR(0x69fe30);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69fe33:{NFSU2_TR(0x69fe33);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69fe36:{NFSU2_TR(0x69fe36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6a0027u,6a0);}
}
B69fe3c:L69fe3c:{c.instructions+=3;NFSU2_TR(0x69fe3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69fe3f:{NFSU2_TR(0x69fe3f);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69fe42:{NFSU2_TR(0x69fe42);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6a0027u,6a0);}
}
B69fe48:L69fe48:{c.instructions+=3;NFSU2_TR(0x69fe48);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69fe4b:{NFSU2_TR(0x69fe4b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69fe4e:{NFSU2_TR(0x69fe4e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6a0027u,6a0);}
}
B69fe54:L69fe54:{c.instructions+=7;NFSU2_TR(0x69fe54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69fe57:{NFSU2_TR(0x69fe57);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69fe5a:{NFSU2_TR(0x69fe5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B69fe5c:{NFSU2_TR(0x69fe5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B69fe5e:{NFSU2_TR(0x69fe5e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+4))));
}
B69fe60:{NFSU2_TR(0x69fe60);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69fe66:{NFSU2_TR(0x69fe66);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6a0027u,6a0);}
}
B69fe6c:L69fe6c:{c.instructions+=7;NFSU2_TR(0x69fe6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69fe6f:{NFSU2_TR(0x69fe6f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
}
B69fe75:{NFSU2_TR(0x69fe75);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B69fe77:{NFSU2_TR(0x69fe77);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x69fe77);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x69fe77);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B69fe79:{NFSU2_TR(0x69fe79);
__builtin_memmove((R+4),(R+28),4);
}
B69fe7b:{NFSU2_TR(0x69fe7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69fe7e:{NFSU2_TR(0x69fe7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69fe83ull));
TAIL_STATIC(0x698f6cu,698);
}
B69fe83:L69fe83:{c.instructions+=2;NFSU2_TR(0x69fe83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69fe87:{NFSU2_TR(0x69fe87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69fe8a:L69fe8a:{c.instructions+=3;NFSU2_TR(0x69fe8a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69fe8e:{NFSU2_TR(0x69fe8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69fe91:{NFSU2_TR(0x69fe91);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69fe96;}}
}
B69fe93:L69fe93:{c.instructions+=1;NFSU2_TR(0x69fe93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69fe96:L69fe96:{c.instructions+=5;NFSU2_TR(0x69fe96);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69fe9a:{NFSU2_TR(0x69fe9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69fe9d:{NFSU2_TR(0x69fe9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69fea0:{NFSU2_TR(0x69fea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69fea3:{NFSU2_TR(0x69fea3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69fea8;}}
}
B69fea5:L69fea5:{c.instructions+=1;NFSU2_TR(0x69fea5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69fea8:L69fea8:{c.instructions+=8;NFSU2_TR(0x69fea8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69feab:{NFSU2_TR(0x69feab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69feae:{NFSU2_TR(0x69feae);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69feb1:{NFSU2_TR(0x69feb1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B69feb4:{NFSU2_TR(0x69feb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69feb8:{NFSU2_TR(0x69feb8);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69febc:{NFSU2_TR(0x69febc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69febf:{NFSU2_TR(0x69febf);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69ff63;}}
}
B69fec5:L69fec5:{c.instructions+=2;NFSU2_TR(0x69fec5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69fec8:{NFSU2_TR(0x69fec8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69fecb:L69fecb:{c.instructions+=6;NFSU2_TR(0x69fecb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69fece:{NFSU2_TR(0x69fece);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B69fed0:{NFSU2_TR(0x69fed0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69fed3:{NFSU2_TR(0x69fed3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69fed6:{NFSU2_TR(0x69fed6);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69fed9:{NFSU2_TR(0x69fed9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69ff63;}}
}
B69fedf:L69fedf:{c.instructions+=3;NFSU2_TR(0x69fedf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69fee3:{NFSU2_TR(0x69fee3);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69fee7:{NFSU2_TR(0x69fee7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69ff48;}}
}
B69fee9:L69fee9:{c.instructions+=3;NFSU2_TR(0x69fee9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69feed:{NFSU2_TR(0x69feed);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69fef1:{NFSU2_TR(0x69fef1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69ff32;}}
}
B69fef3:L69fef3:{c.instructions+=1;NFSU2_TR(0x69fef3);
{goto L69fef8;}
}
B69fef5:L69fef5:{c.instructions+=1;NFSU2_TR(0x69fef5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69fef8:L69fef8:{c.instructions+=6;NFSU2_TR(0x69fef8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69fefb:{NFSU2_TR(0x69fefb);
__builtin_memmove((R+4),(R+24),4);
}
B69fefd:{NFSU2_TR(0x69fefd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69ff00:{NFSU2_TR(0x69ff00);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69ff03:{NFSU2_TR(0x69ff03);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ff04:{NFSU2_TR(0x69ff04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69ff09ull));
TAIL_STATIC(0x69a696u,69a);
}
B69ff09:L69ff09:{c.instructions+=7;NFSU2_TR(0x69ff09);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69ff0c:{NFSU2_TR(0x69ff0c);
__builtin_memmove((R+4),(R+24),4);
}
B69ff0e:{NFSU2_TR(0x69ff0e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69ff11:{NFSU2_TR(0x69ff11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ff14:{NFSU2_TR(0x69ff14);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69ff17:{NFSU2_TR(0x69ff17);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ff18:{NFSU2_TR(0x69ff18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69ff1dull));
TAIL_STATIC(0x69a696u,69a);
}
B69ff1d:L69ff1d:{c.instructions+=3;NFSU2_TR(0x69ff1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69ff20:{NFSU2_TR(0x69ff20);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69ff22:{NFSU2_TR(0x69ff22);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69ff2f;}}
}
B69ff24:L69ff24:{c.instructions+=4;NFSU2_TR(0x69ff24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69ff27:{NFSU2_TR(0x69ff27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ff2a:{NFSU2_TR(0x69ff2a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69ff2d:{NFSU2_TR(0x69ff2d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69fef5u);}goto L69fef5;}}
}
B69ff2f:L69ff2f:{c.instructions+=1;NFSU2_TR(0x69ff2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69ff32:L69ff32:{c.instructions+=3;NFSU2_TR(0x69ff32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ff35:{NFSU2_TR(0x69ff35);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69ff38:{NFSU2_TR(0x69ff38);
if(r1(R+518)){{goto L69ff45;}}
}
B69ff3a:L69ff3a:{c.instructions+=4;NFSU2_TR(0x69ff3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69ff3d:{NFSU2_TR(0x69ff3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ff40:{NFSU2_TR(0x69ff40);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69ff43:{NFSU2_TR(0x69ff43);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69fee9u);}goto L69fee9;}}
}
B69ff45:L69ff45:{c.instructions+=1;NFSU2_TR(0x69ff45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69ff48:L69ff48:{c.instructions+=3;NFSU2_TR(0x69ff48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ff4b:{NFSU2_TR(0x69ff4b);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69ff4e:{NFSU2_TR(0x69ff4e);
if(r1(R+518)){{goto L69ff63;}}
}
B69ff50:L69ff50:{c.instructions+=5;NFSU2_TR(0x69ff50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69ff53:{NFSU2_TR(0x69ff53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ff56:{NFSU2_TR(0x69ff56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69ff5a:{NFSU2_TR(0x69ff5a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69ff5d:{NFSU2_TR(0x69ff5d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69fecbu);}goto L69fecb;}}
}
B69ff63:L69ff63:{c.instructions+=3;NFSU2_TR(0x69ff63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ff66:{NFSU2_TR(0x69ff66);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69ff69:{NFSU2_TR(0x69ff69);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69ff7d;}}
}
B69ff6b:L69ff6b:{c.instructions+=3;NFSU2_TR(0x69ff6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69ff6e:{NFSU2_TR(0x69ff6e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
}
B69ff72:{NFSU2_TR(0x69ff72);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69fe8au);}goto L69fe8a;}}
}
B69ff78:L69ff78:{c.instructions+=1;NFSU2_TR(0x69ff78);
TAIL_STATIC(0x6a0021u,6a0);
}
B69ff7d:L69ff7d:{c.instructions+=3;NFSU2_TR(0x69ff7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69ff81:{NFSU2_TR(0x69ff81);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69ff85:{NFSU2_TR(0x69ff85);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6a0017u,6a0);}
}
B69ff8b:L69ff8b:{c.instructions+=3;NFSU2_TR(0x69ff8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69ff8f:{NFSU2_TR(0x69ff8f);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69ff93:{NFSU2_TR(0x69ff93);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69ffed;}}
}
B69ff95:L69ff95:{c.instructions+=3;NFSU2_TR(0x69ff95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69ff99:{NFSU2_TR(0x69ff99);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69ff9d:{NFSU2_TR(0x69ff9d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69ffda;}}
}
B69ff9f:L69ff9f:{c.instructions+=1;NFSU2_TR(0x69ff9f);
{goto L69ffa4;}
}
B69ffa1:L69ffa1:{c.instructions+=1;NFSU2_TR(0x69ffa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69ffa4:L69ffa4:{c.instructions+=6;NFSU2_TR(0x69ffa4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69ffa7:{NFSU2_TR(0x69ffa7);
__builtin_memmove((R+4),(R+24),4);
}
B69ffa9:{NFSU2_TR(0x69ffa9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69ffac:{NFSU2_TR(0x69ffac);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69ffaf:{NFSU2_TR(0x69ffaf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ffb0:{NFSU2_TR(0x69ffb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69ffb5ull));
TAIL_STATIC(0x69a696u,69a);
}
B69ffb5:L69ffb5:{c.instructions+=7;NFSU2_TR(0x69ffb5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69ffb8:{NFSU2_TR(0x69ffb8);
__builtin_memmove((R+4),(R+24),4);
}
B69ffba:{NFSU2_TR(0x69ffba);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69ffbd:{NFSU2_TR(0x69ffbd);
__builtin_memmove((R+12),(R+0),4);
}
B69ffbf:{NFSU2_TR(0x69ffbf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69ffc2:{NFSU2_TR(0x69ffc2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ffc3:{NFSU2_TR(0x69ffc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69ffc8ull));
TAIL_STATIC(0x69a696u,69a);
}
B69ffc8:L69ffc8:{c.instructions+=2;NFSU2_TR(0x69ffc8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69ffca:{NFSU2_TR(0x69ffca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69ffd7;}}
}
B69ffcc:L69ffcc:{c.instructions+=4;NFSU2_TR(0x69ffcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69ffcf:{NFSU2_TR(0x69ffcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ffd2:{NFSU2_TR(0x69ffd2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69ffd5:{NFSU2_TR(0x69ffd5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69ffa1u);}goto L69ffa1;}}
}
B69ffd7:L69ffd7:{c.instructions+=1;NFSU2_TR(0x69ffd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69ffda:L69ffda:{c.instructions+=3;NFSU2_TR(0x69ffda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ffdd:{NFSU2_TR(0x69ffdd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69ffe0:{NFSU2_TR(0x69ffe0);
if(r1(R+518)){{goto L69ffed;}}
}
B69ffe2:L69ffe2:{c.instructions+=4;NFSU2_TR(0x69ffe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69ffe5:{NFSU2_TR(0x69ffe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ffe8:{NFSU2_TR(0x69ffe8);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69ffeb:{NFSU2_TR(0x69ffeb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69ff95u);}goto L69ff95;}}
}
B69ffed:L69ffed:{c.instructions+=7;NFSU2_TR(0x69ffed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69fff0:{NFSU2_TR(0x69fff0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69fff3:{NFSU2_TR(0x69fff3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69fff6:{NFSU2_TR(0x69fff6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69fff9:{NFSU2_TR(0x69fff9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69fffc:{NFSU2_TR(0x69fffc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ffff:{NFSU2_TR(0x69ffff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
TAIL_STATIC(0x6a0002u,6a0);
}
XIT:NFSU2_TR_EXIT(0x69f,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
