#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_430(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_457(u8* __restrict R,Cpu& c);
u32 body_4d8(u8* __restrict R,Cpu& c);
u32 body_501(u8* __restrict R,Cpu& c);
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_572(u8* __restrict R,Cpu& c);
u32 body_573(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_57d(u8* __restrict R,Cpu& c);
u32 body_57e(u8* __restrict R,Cpu& c);
u32 body_589(u8* __restrict R,Cpu& c);
u32 body_5a9(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5d7(u8* __restrict R,Cpu& c);
u32 body_5dd(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5f1(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_5f8(u8* __restrict R,Cpu& c);
u32 body_5f9(u8* __restrict R,Cpu& c);
u32 body_5fb(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5fa,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5fa,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5fa(u8* __restrict R,Cpu& c);
u32 page_5fa(Cpu& c){return body_5fa(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5fa(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5fa002:goto L5fa002;
case 0x5fa008:c.instructions+=6;goto B5fa008;
case 0x5fa00e:c.instructions+=5;goto B5fa00e;
case 0x5fa012:c.instructions+=4;goto B5fa012;
case 0x5fa016:c.instructions+=3;goto B5fa016;
case 0x5fa018:c.instructions+=2;goto B5fa018;
case 0x5fa01b:c.instructions+=1;goto B5fa01b;
case 0x5fa01d:goto L5fa01d;
case 0x5fa021:c.instructions+=4;goto B5fa021;
case 0x5fa027:c.instructions+=3;goto B5fa027;
case 0x5fa029:c.instructions+=2;goto B5fa029;
case 0x5fa02c:c.instructions+=1;goto B5fa02c;
case 0x5fa032:goto L5fa032;
case 0x5fa034:c.instructions+=4;goto B5fa034;
case 0x5fa036:c.instructions+=3;goto B5fa036;
case 0x5fa03a:c.instructions+=2;goto B5fa03a;
case 0x5fa03b:c.instructions+=1;goto B5fa03b;
case 0x5fa040:goto L5fa040;
case 0x5fa044:c.instructions+=4;goto B5fa044;
case 0x5fa048:c.instructions+=3;goto B5fa048;
case 0x5fa049:c.instructions+=2;goto B5fa049;
case 0x5fa04a:c.instructions+=1;goto B5fa04a;
case 0x5fa04f:goto L5fa04f;
case 0x5fa053:c.instructions+=5;goto B5fa053;
case 0x5fa059:c.instructions+=4;goto B5fa059;
case 0x5fa05c:c.instructions+=3;goto B5fa05c;
case 0x5fa05e:c.instructions+=2;goto B5fa05e;
case 0x5fa061:c.instructions+=1;goto B5fa061;
case 0x5fa067:goto L5fa067;
case 0x5fa06b:c.instructions+=4;goto B5fa06b;
case 0x5fa06f:c.instructions+=3;goto B5fa06f;
case 0x5fa071:c.instructions+=2;goto B5fa071;
case 0x5fa074:c.instructions+=1;goto B5fa074;
case 0x5fa07a:goto L5fa07a;
case 0x5fa07c:c.instructions+=1;goto B5fa07c;
case 0x5fa081:goto L5fa081;
case 0x5fa083:c.instructions+=12;goto B5fa083;
case 0x5fa086:c.instructions+=11;goto B5fa086;
case 0x5fa08a:c.instructions+=10;goto B5fa08a;
case 0x5fa08e:c.instructions+=9;goto B5fa08e;
case 0x5fa092:c.instructions+=8;goto B5fa092;
case 0x5fa096:c.instructions+=7;goto B5fa096;
case 0x5fa09a:c.instructions+=6;goto B5fa09a;
case 0x5fa09e:c.instructions+=5;goto B5fa09e;
case 0x5fa0a0:c.instructions+=4;goto B5fa0a0;
case 0x5fa0a6:c.instructions+=3;goto B5fa0a6;
case 0x5fa0a8:c.instructions+=2;goto B5fa0a8;
case 0x5fa0ab:c.instructions+=1;goto B5fa0ab;
case 0x5fa0ad:goto L5fa0ad;
case 0x5fa0af:c.instructions+=1;goto B5fa0af;
case 0x5fa0b4:goto L5fa0b4;
case 0x5fa0b6:c.instructions+=4;goto B5fa0b6;
case 0x5fa0b9:c.instructions+=3;goto B5fa0b9;
case 0x5fa0bb:c.instructions+=2;goto B5fa0bb;
case 0x5fa0bf:c.instructions+=1;goto B5fa0bf;
case 0x5fa0c3:goto L5fa0c3;
case 0x5fa0c7:c.instructions+=8;goto B5fa0c7;
case 0x5fa0ca:c.instructions+=7;goto B5fa0ca;
case 0x5fa0ce:c.instructions+=6;goto B5fa0ce;
case 0x5fa0d1:c.instructions+=5;goto B5fa0d1;
case 0x5fa0d3:c.instructions+=4;goto B5fa0d3;
case 0x5fa0d9:c.instructions+=3;goto B5fa0d9;
case 0x5fa0db:c.instructions+=2;goto B5fa0db;
case 0x5fa0de:c.instructions+=1;goto B5fa0de;
case 0x5fa0e4:goto L5fa0e4;
case 0x5fa0e8:c.instructions+=5;goto B5fa0e8;
case 0x5fa0e9:c.instructions+=4;goto B5fa0e9;
case 0x5fa0ed:c.instructions+=3;goto B5fa0ed;
case 0x5fa0ee:c.instructions+=2;goto B5fa0ee;
case 0x5fa0f2:c.instructions+=1;goto B5fa0f2;
case 0x5fa0f7:goto L5fa0f7;
case 0x5fa0fb:c.instructions+=11;goto B5fa0fb;
case 0x5fa0fe:c.instructions+=10;goto B5fa0fe;
case 0x5fa102:c.instructions+=9;goto B5fa102;
case 0x5fa105:c.instructions+=8;goto B5fa105;
case 0x5fa107:c.instructions+=7;goto B5fa107;
case 0x5fa10b:c.instructions+=6;goto B5fa10b;
case 0x5fa10e:c.instructions+=5;goto B5fa10e;
case 0x5fa110:c.instructions+=4;goto B5fa110;
case 0x5fa116:c.instructions+=3;goto B5fa116;
case 0x5fa118:c.instructions+=2;goto B5fa118;
case 0x5fa11b:c.instructions+=1;goto B5fa11b;
case 0x5fa121:goto L5fa121;
case 0x5fa125:c.instructions+=1;goto B5fa125;
case 0x5fa12a:goto L5fa12a;
case 0x5fa12e:c.instructions+=4;goto B5fa12e;
case 0x5fa130:c.instructions+=3;goto B5fa130;
case 0x5fa134:c.instructions+=2;goto B5fa134;
case 0x5fa135:c.instructions+=1;goto B5fa135;
case 0x5fa13a:goto L5fa13a;
case 0x5fa13c:c.instructions+=1;goto B5fa13c;
case 0x5fa141:goto L5fa141;
case 0x5fa145:c.instructions+=8;goto B5fa145;
case 0x5fa148:c.instructions+=7;goto B5fa148;
case 0x5fa14c:c.instructions+=6;goto B5fa14c;
case 0x5fa14e:c.instructions+=5;goto B5fa14e;
case 0x5fa150:c.instructions+=4;goto B5fa150;
case 0x5fa156:c.instructions+=3;goto B5fa156;
case 0x5fa158:c.instructions+=2;goto B5fa158;
case 0x5fa15b:c.instructions+=1;goto B5fa15b;
case 0x5fa161:goto L5fa161;
case 0x5fa163:goto L5fa163;
case 0x5fa168:goto L5fa168;
case 0x5fa169:c.instructions+=4;goto B5fa169;
case 0x5fa16d:c.instructions+=3;goto B5fa16d;
case 0x5fa16e:c.instructions+=2;goto B5fa16e;
case 0x5fa172:c.instructions+=1;goto B5fa172;
case 0x5fa177:goto L5fa177;
case 0x5fa17a:c.instructions+=11;goto B5fa17a;
case 0x5fa17c:c.instructions+=10;goto B5fa17c;
case 0x5fa180:c.instructions+=9;goto B5fa180;
case 0x5fa183:c.instructions+=8;goto B5fa183;
case 0x5fa187:c.instructions+=7;goto B5fa187;
case 0x5fa18b:c.instructions+=6;goto B5fa18b;
case 0x5fa18e:c.instructions+=5;goto B5fa18e;
case 0x5fa190:c.instructions+=4;goto B5fa190;
case 0x5fa196:c.instructions+=3;goto B5fa196;
case 0x5fa198:c.instructions+=2;goto B5fa198;
case 0x5fa19b:c.instructions+=1;goto B5fa19b;
case 0x5fa1a1:goto L5fa1a1;
case 0x5fa1a5:c.instructions+=5;goto B5fa1a5;
case 0x5fa1a9:c.instructions+=4;goto B5fa1a9;
case 0x5fa1aa:c.instructions+=3;goto B5fa1aa;
case 0x5fa1ab:c.instructions+=2;goto B5fa1ab;
case 0x5fa1ad:c.instructions+=1;goto B5fa1ad;
case 0x5fa1b2:goto L5fa1b2;
case 0x5fa1b6:c.instructions+=5;goto B5fa1b6;
case 0x5fa1ba:c.instructions+=4;goto B5fa1ba;
case 0x5fa1bb:c.instructions+=3;goto B5fa1bb;
case 0x5fa1bc:c.instructions+=2;goto B5fa1bc;
case 0x5fa1be:c.instructions+=1;goto B5fa1be;
case 0x5fa1c3:goto L5fa1c3;
case 0x5fa1c7:c.instructions+=4;goto B5fa1c7;
case 0x5fa1cd:c.instructions+=3;goto B5fa1cd;
case 0x5fa1cf:c.instructions+=2;goto B5fa1cf;
case 0x5fa1d2:c.instructions+=1;goto B5fa1d2;
case 0x5fa1d4:goto L5fa1d4;
case 0x5fa1d8:c.instructions+=2;goto B5fa1d8;
case 0x5fa1da:c.instructions+=1;goto B5fa1da;
case 0x5fa1dc:goto L5fa1dc;
case 0x5fa1e0:c.instructions+=4;goto B5fa1e0;
case 0x5fa1e2:c.instructions+=3;goto B5fa1e2;
case 0x5fa1e4:c.instructions+=2;goto B5fa1e4;
case 0x5fa1e7:c.instructions+=1;goto B5fa1e7;
case 0x5fa1e9:goto L5fa1e9;
case 0x5fa1ed:c.instructions+=3;goto B5fa1ed;
case 0x5fa1f1:c.instructions+=2;goto B5fa1f1;
case 0x5fa1f5:c.instructions+=1;goto B5fa1f5;
case 0x5fa1f7:goto L5fa1f7;
case 0x5fa1fd:c.instructions+=3;goto B5fa1fd;
case 0x5fa1ff:c.instructions+=2;goto B5fa1ff;
case 0x5fa202:c.instructions+=1;goto B5fa202;
case 0x5fa204:goto L5fa204;
case 0x5fa206:c.instructions+=1;goto B5fa206;
case 0x5fa20b:goto L5fa20b;
case 0x5fa20d:c.instructions+=1;goto B5fa20d;
case 0x5fa212:goto L5fa212;
case 0x5fa214:c.instructions+=12;goto B5fa214;
case 0x5fa217:c.instructions+=11;goto B5fa217;
case 0x5fa21b:c.instructions+=10;goto B5fa21b;
case 0x5fa21d:c.instructions+=9;goto B5fa21d;
case 0x5fa21f:c.instructions+=8;goto B5fa21f;
case 0x5fa223:c.instructions+=7;goto B5fa223;
case 0x5fa225:c.instructions+=6;goto B5fa225;
case 0x5fa227:c.instructions+=5;goto B5fa227;
case 0x5fa22d:c.instructions+=4;goto B5fa22d;
case 0x5fa22f:c.instructions+=3;goto B5fa22f;
case 0x5fa231:c.instructions+=2;goto B5fa231;
case 0x5fa234:c.instructions+=1;goto B5fa234;
case 0x5fa23a:goto L5fa23a;
case 0x5fa23c:c.instructions+=1;goto B5fa23c;
case 0x5fa241:goto L5fa241;
case 0x5fa243:goto L5fa243;
case 0x5fa247:c.instructions+=7;goto B5fa247;
case 0x5fa24b:c.instructions+=6;goto B5fa24b;
case 0x5fa24c:c.instructions+=5;goto B5fa24c;
case 0x5fa24f:c.instructions+=4;goto B5fa24f;
case 0x5fa252:c.instructions+=3;goto B5fa252;
case 0x5fa256:c.instructions+=2;goto B5fa256;
case 0x5fa25a:c.instructions+=1;goto B5fa25a;
case 0x5fa260:goto L5fa260;
case 0x5fa264:c.instructions+=2;goto B5fa264;
case 0x5fa266:c.instructions+=1;goto B5fa266;
case 0x5fa268:goto L5fa268;
case 0x5fa26c:c.instructions+=3;goto B5fa26c;
case 0x5fa26d:c.instructions+=2;goto B5fa26d;
case 0x5fa26f:c.instructions+=1;goto B5fa26f;
case 0x5fa274:goto L5fa274;
case 0x5fa275:c.instructions+=5;goto B5fa275;
case 0x5fa276:c.instructions+=4;goto B5fa276;
case 0x5fa277:c.instructions+=3;goto B5fa277;
case 0x5fa279:c.instructions+=2;goto B5fa279;
case 0x5fa27a:c.instructions+=1;goto B5fa27a;
case 0x5fa27b:goto L5fa27b;
case 0x5fa27f:c.instructions+=2;goto B5fa27f;
case 0x5fa281:c.instructions+=1;goto B5fa281;
case 0x5fa283:goto L5fa283;
case 0x5fa288:c.instructions+=9;goto B5fa288;
case 0x5fa28e:c.instructions+=8;goto B5fa28e;
case 0x5fa290:c.instructions+=7;goto B5fa290;
case 0x5fa294:c.instructions+=6;goto B5fa294;
case 0x5fa298:c.instructions+=5;goto B5fa298;
case 0x5fa29e:c.instructions+=4;goto B5fa29e;
case 0x5fa2a4:c.instructions+=3;goto B5fa2a4;
case 0x5fa2a6:c.instructions+=2;goto B5fa2a6;
case 0x5fa2a9:c.instructions+=1;goto B5fa2a9;
case 0x5fa2ab:goto L5fa2ab;
case 0x5fa2b2:c.instructions+=15;goto B5fa2b2;
case 0x5fa2b6:c.instructions+=14;goto B5fa2b6;
case 0x5fa2bc:c.instructions+=13;goto B5fa2bc;
case 0x5fa2c3:c.instructions+=12;goto B5fa2c3;
case 0x5fa2c5:c.instructions+=11;goto B5fa2c5;
case 0x5fa2c7:c.instructions+=10;goto B5fa2c7;
case 0x5fa2c9:c.instructions+=9;goto B5fa2c9;
case 0x5fa2cf:c.instructions+=8;goto B5fa2cf;
case 0x5fa2d5:c.instructions+=7;goto B5fa2d5;
case 0x5fa2db:c.instructions+=6;goto B5fa2db;
case 0x5fa2e1:c.instructions+=5;goto B5fa2e1;
case 0x5fa2e7:c.instructions+=4;goto B5fa2e7;
case 0x5fa2ee:c.instructions+=3;goto B5fa2ee;
case 0x5fa2ef:c.instructions+=2;goto B5fa2ef;
case 0x5fa2f0:c.instructions+=1;goto B5fa2f0;
case 0x5fa2f5:goto L5fa2f5;
case 0x5fa2f8:goto L5fa2f8;
case 0x5fa2f9:c.instructions+=5;goto B5fa2f9;
case 0x5fa2fa:c.instructions+=4;goto B5fa2fa;
case 0x5fa2fb:c.instructions+=3;goto B5fa2fb;
case 0x5fa2fd:c.instructions+=2;goto B5fa2fd;
case 0x5fa2fe:c.instructions+=1;goto B5fa2fe;
case 0x5fa300:goto L5fa300;
case 0x5fa305:c.instructions+=4;goto B5fa305;
case 0x5fa307:c.instructions+=3;goto B5fa307;
case 0x5fa308:c.instructions+=2;goto B5fa308;
case 0x5fa30a:c.instructions+=1;goto B5fa30a;
case 0x5fa30c:goto L5fa30c;
case 0x5fa311:c.instructions+=1;goto B5fa311;
case 0x5fa317:goto L5fa317;
case 0x5fa319:c.instructions+=2;goto B5fa319;
case 0x5fa31e:c.instructions+=1;goto B5fa31e;
case 0x5fa320:goto L5fa320;
case 0x5fa321:c.instructions+=4;goto B5fa321;
case 0x5fa327:c.instructions+=3;goto B5fa327;
case 0x5fa32c:c.instructions+=2;goto B5fa32c;
case 0x5fa32d:c.instructions+=1;goto B5fa32d;
case 0x5fa32f:goto L5fa32f;
case 0x5fa334:c.instructions+=4;goto B5fa334;
case 0x5fa339:c.instructions+=3;goto B5fa339;
case 0x5fa33e:c.instructions+=2;goto B5fa33e;
case 0x5fa33f:c.instructions+=1;goto B5fa33f;
case 0x5fa341:goto L5fa341;
case 0x5fa347:c.instructions+=4;goto B5fa347;
case 0x5fa34c:c.instructions+=3;goto B5fa34c;
case 0x5fa34d:c.instructions+=2;goto B5fa34d;
case 0x5fa352:c.instructions+=1;goto B5fa352;
case 0x5fa354:goto L5fa354;
case 0x5fa35a:c.instructions+=4;goto B5fa35a;
case 0x5fa35c:c.instructions+=3;goto B5fa35c;
case 0x5fa361:c.instructions+=2;goto B5fa361;
case 0x5fa362:c.instructions+=1;goto B5fa362;
case 0x5fa364:goto L5fa364;
case 0x5fa36a:c.instructions+=2;goto B5fa36a;
case 0x5fa36c:c.instructions+=1;goto B5fa36c;
case 0x5fa36e:goto L5fa36e;
case 0x5fa370:c.instructions+=1;goto B5fa370;
case 0x5fa372:goto L5fa372;
case 0x5fa374:c.instructions+=1;goto B5fa374;
case 0x5fa379:goto L5fa379;
case 0x5fa37b:c.instructions+=2;goto B5fa37b;
case 0x5fa37c:c.instructions+=1;goto B5fa37c;
case 0x5fa37f:goto L5fa37f;
case 0x5fa384:goto L5fa384;
case 0x5fa386:goto L5fa386;
case 0x5fa388:c.instructions+=1;goto B5fa388;
case 0x5fa38a:goto L5fa38a;
case 0x5fa38c:c.instructions+=2;goto B5fa38c;
case 0x5fa38e:c.instructions+=1;goto B5fa38e;
case 0x5fa393:goto L5fa393;
case 0x5fa397:c.instructions+=3;goto B5fa397;
case 0x5fa398:c.instructions+=2;goto B5fa398;
case 0x5fa399:c.instructions+=1;goto B5fa399;
case 0x5fa39f:goto L5fa39f;
case 0x5fa3a2:c.instructions+=2;goto B5fa3a2;
case 0x5fa3a4:c.instructions+=1;goto B5fa3a4;
case 0x5fa3a6:goto L5fa3a6;
case 0x5fa3a8:c.instructions+=2;goto B5fa3a8;
case 0x5fa3a9:c.instructions+=1;goto B5fa3a9;
case 0x5fa3b0:goto L5fa3b0;
case 0x5fa3b1:c.instructions+=9;goto B5fa3b1;
case 0x5fa3b2:c.instructions+=8;goto B5fa3b2;
case 0x5fa3b6:c.instructions+=7;goto B5fa3b6;
case 0x5fa3b8:c.instructions+=6;goto B5fa3b8;
case 0x5fa3bb:c.instructions+=5;goto B5fa3bb;
case 0x5fa3bf:c.instructions+=4;goto B5fa3bf;
case 0x5fa3c2:c.instructions+=3;goto B5fa3c2;
case 0x5fa3c4:c.instructions+=2;goto B5fa3c4;
case 0x5fa3c6:c.instructions+=1;goto B5fa3c6;
case 0x5fa3cc:goto L5fa3cc;
case 0x5fa3cd:c.instructions+=2;goto B5fa3cd;
case 0x5fa3ce:c.instructions+=1;goto B5fa3ce;
case 0x5fa3d0:goto L5fa3d0;
case 0x5fa3d2:c.instructions+=4;goto B5fa3d2;
case 0x5fa3d4:c.instructions+=3;goto B5fa3d4;
case 0x5fa3da:c.instructions+=2;goto B5fa3da;
case 0x5fa3dd:c.instructions+=1;goto B5fa3dd;
case 0x5fa3e3:goto L5fa3e3;
case 0x5fa3ea:goto L5fa3ea;
case 0x5fa3ed:c.instructions+=7;goto B5fa3ed;
case 0x5fa3f0:c.instructions+=6;goto B5fa3f0;
case 0x5fa3f3:c.instructions+=5;goto B5fa3f3;
case 0x5fa3f6:c.instructions+=4;goto B5fa3f6;
case 0x5fa3f9:c.instructions+=3;goto B5fa3f9;
case 0x5fa3fc:c.instructions+=2;goto B5fa3fc;
case 0x5fa3ff:c.instructions+=1;goto B5fa3ff;
case 0x5fa404:goto L5fa404;
case 0x5fa407:c.instructions+=2;goto B5fa407;
case 0x5fa409:c.instructions+=1;goto B5fa409;
case 0x5fa40f:goto L5fa40f;
case 0x5fa412:c.instructions+=4;goto B5fa412;
case 0x5fa415:c.instructions+=3;goto B5fa415;
case 0x5fa418:c.instructions+=2;goto B5fa418;
case 0x5fa41a:c.instructions+=1;goto B5fa41a;
case 0x5fa420:goto L5fa420;
case 0x5fa423:c.instructions+=2;goto B5fa423;
case 0x5fa426:c.instructions+=1;goto B5fa426;
case 0x5fa428:goto L5fa428;
case 0x5fa42b:c.instructions+=2;goto B5fa42b;
case 0x5fa42d:c.instructions+=1;goto B5fa42d;
case 0x5fa42f:goto L5fa42f;
case 0x5fa432:c.instructions+=4;goto B5fa432;
case 0x5fa435:c.instructions+=3;goto B5fa435;
case 0x5fa438:c.instructions+=2;goto B5fa438;
case 0x5fa43a:c.instructions+=1;goto B5fa43a;
case 0x5fa43c:goto L5fa43c;
case 0x5fa43f:c.instructions+=2;goto B5fa43f;
case 0x5fa442:c.instructions+=1;goto B5fa442;
case 0x5fa444:goto L5fa444;
case 0x5fa447:c.instructions+=2;goto B5fa447;
case 0x5fa449:c.instructions+=1;goto B5fa449;
case 0x5fa44b:goto L5fa44b;
case 0x5fa44e:c.instructions+=1;goto B5fa44e;
case 0x5fa450:goto L5fa450;
case 0x5fa453:c.instructions+=1;goto B5fa453;
case 0x5fa455:goto L5fa455;
case 0x5fa458:c.instructions+=3;goto B5fa458;
case 0x5fa45c:c.instructions+=2;goto B5fa45c;
case 0x5fa45f:c.instructions+=1;goto B5fa45f;
case 0x5fa461:goto L5fa461;
case 0x5fa464:c.instructions+=2;goto B5fa464;
case 0x5fa467:c.instructions+=1;goto B5fa467;
case 0x5fa469:goto L5fa469;
case 0x5fa46c:c.instructions+=2;goto B5fa46c;
case 0x5fa46e:c.instructions+=1;goto B5fa46e;
case 0x5fa470:goto L5fa470;
case 0x5fa473:c.instructions+=4;goto B5fa473;
case 0x5fa476:c.instructions+=3;goto B5fa476;
case 0x5fa479:c.instructions+=2;goto B5fa479;
case 0x5fa47b:c.instructions+=1;goto B5fa47b;
case 0x5fa47d:goto L5fa47d;
case 0x5fa480:c.instructions+=2;goto B5fa480;
case 0x5fa483:c.instructions+=1;goto B5fa483;
case 0x5fa485:goto L5fa485;
case 0x5fa488:c.instructions+=2;goto B5fa488;
case 0x5fa48a:c.instructions+=1;goto B5fa48a;
case 0x5fa48c:goto L5fa48c;
case 0x5fa48f:c.instructions+=4;goto B5fa48f;
case 0x5fa492:c.instructions+=3;goto B5fa492;
case 0x5fa495:c.instructions+=2;goto B5fa495;
case 0x5fa497:c.instructions+=1;goto B5fa497;
case 0x5fa499:goto L5fa499;
case 0x5fa49c:c.instructions+=1;goto B5fa49c;
case 0x5fa49f:goto L5fa49f;
case 0x5fa4a1:c.instructions+=5;goto B5fa4a1;
case 0x5fa4a4:c.instructions+=4;goto B5fa4a4;
case 0x5fa4a8:c.instructions+=3;goto B5fa4a8;
case 0x5fa4aa:c.instructions+=2;goto B5fa4aa;
case 0x5fa4ac:c.instructions+=1;goto B5fa4ac;
case 0x5fa4b2:goto L5fa4b2;
case 0x5fa4b3:c.instructions+=1;goto B5fa4b3;
case 0x5fa4b4:goto L5fa4b4;
case 0x5fa4b5:c.instructions+=2;goto B5fa4b5;
case 0x5fa4b6:c.instructions+=1;goto B5fa4b6;
case 0x5fa4e0:goto L5fa4e0;
case 0x5fa4e1:c.instructions+=5;goto B5fa4e1;
case 0x5fa4e3:c.instructions+=4;goto B5fa4e3;
case 0x5fa4e6:c.instructions+=3;goto B5fa4e6;
case 0x5fa4e8:c.instructions+=2;goto B5fa4e8;
case 0x5fa4ea:c.instructions+=1;goto B5fa4ea;
case 0x5fa4ec:goto L5fa4ec;
case 0x5fa4f0:c.instructions+=5;goto B5fa4f0;
case 0x5fa4f4:c.instructions+=4;goto B5fa4f4;
case 0x5fa4f5:c.instructions+=3;goto B5fa4f5;
case 0x5fa4f6:c.instructions+=2;goto B5fa4f6;
case 0x5fa4f8:c.instructions+=1;goto B5fa4f8;
case 0x5fa4fd:goto L5fa4fd;
case 0x5fa500:c.instructions+=6;goto B5fa500;
case 0x5fa502:c.instructions+=5;goto B5fa502;
case 0x5fa505:c.instructions+=4;goto B5fa505;
case 0x5fa508:c.instructions+=3;goto B5fa508;
case 0x5fa50b:c.instructions+=2;goto B5fa50b;
case 0x5fa50c:c.instructions+=1;goto B5fa50c;
case 0x5fa50f:goto L5fa50f;
case 0x5fa512:c.instructions+=2;goto B5fa512;
case 0x5fa514:c.instructions+=1;goto B5fa514;
case 0x5fa516:goto L5fa516;
case 0x5fa51a:c.instructions+=5;goto B5fa51a;
case 0x5fa51e:c.instructions+=4;goto B5fa51e;
case 0x5fa51f:c.instructions+=3;goto B5fa51f;
case 0x5fa520:c.instructions+=2;goto B5fa520;
case 0x5fa522:c.instructions+=1;goto B5fa522;
case 0x5fa527:goto L5fa527;
case 0x5fa529:goto L5fa529;
case 0x5fa52c:c.instructions+=5;goto B5fa52c;
case 0x5fa52f:c.instructions+=4;goto B5fa52f;
case 0x5fa532:c.instructions+=3;goto B5fa532;
case 0x5fa535:c.instructions+=2;goto B5fa535;
case 0x5fa536:c.instructions+=1;goto B5fa536;
case 0x5fa540:goto L5fa540;
case 0x5fa541:c.instructions+=4;goto B5fa541;
case 0x5fa543:c.instructions+=3;goto B5fa543;
case 0x5fa546:c.instructions+=2;goto B5fa546;
case 0x5fa548:c.instructions+=1;goto B5fa548;
case 0x5fa54a:goto L5fa54a;
case 0x5fa54e:c.instructions+=4;goto B5fa54e;
case 0x5fa552:c.instructions+=3;goto B5fa552;
case 0x5fa553:c.instructions+=2;goto B5fa553;
case 0x5fa554:c.instructions+=1;goto B5fa554;
case 0x5fa559:goto L5fa559;
case 0x5fa55c:c.instructions+=2;goto B5fa55c;
case 0x5fa55d:c.instructions+=1;goto B5fa55d;
case 0x5fa560:goto L5fa560;
case 0x5fa567:c.instructions+=2;goto B5fa567;
case 0x5fa568:c.instructions+=1;goto B5fa568;
case 0x5fa570:goto L5fa570;
case 0x5fa571:c.instructions+=6;goto B5fa571;
case 0x5fa572:c.instructions+=5;goto B5fa572;
case 0x5fa574:c.instructions+=4;goto B5fa574;
case 0x5fa577:c.instructions+=3;goto B5fa577;
case 0x5fa579:c.instructions+=2;goto B5fa579;
case 0x5fa57a:c.instructions+=1;goto B5fa57a;
case 0x5fa580:goto L5fa580;
case 0x5fa583:c.instructions+=2;goto B5fa583;
case 0x5fa585:c.instructions+=1;goto B5fa585;
case 0x5fa58b:goto L5fa58b;
case 0x5fa58f:c.instructions+=6;goto B5fa58f;
case 0x5fa593:c.instructions+=5;goto B5fa593;
case 0x5fa594:c.instructions+=4;goto B5fa594;
case 0x5fa595:c.instructions+=3;goto B5fa595;
case 0x5fa596:c.instructions+=2;goto B5fa596;
case 0x5fa598:c.instructions+=1;goto B5fa598;
case 0x5fa59d:goto L5fa59d;
case 0x5fa59f:c.instructions+=3;goto B5fa59f;
case 0x5fa5a2:c.instructions+=2;goto B5fa5a2;
case 0x5fa5a4:c.instructions+=1;goto B5fa5a4;
case 0x5fa5a6:goto L5fa5a6;
case 0x5fa5a9:c.instructions+=2;goto B5fa5a9;
case 0x5fa5ab:c.instructions+=1;goto B5fa5ab;
case 0x5fa5ad:goto L5fa5ad;
case 0x5fa5b0:c.instructions+=1;goto B5fa5b0;
case 0x5fa5b2:goto L5fa5b2;
case 0x5fa5b4:goto L5fa5b4;
case 0x5fa5b6:c.instructions+=1;goto B5fa5b6;
case 0x5fa5b9:goto L5fa5b9;
case 0x5fa5bb:goto L5fa5bb;
case 0x5fa5bd:c.instructions+=1;goto B5fa5bd;
case 0x5fa5c0:goto L5fa5c0;
case 0x5fa5c2:goto L5fa5c2;
case 0x5fa5c9:goto L5fa5c9;
case 0x5fa5cc:c.instructions+=6;goto B5fa5cc;
case 0x5fa5cd:c.instructions+=5;goto B5fa5cd;
case 0x5fa5ce:c.instructions+=4;goto B5fa5ce;
case 0x5fa5d1:c.instructions+=3;goto B5fa5d1;
case 0x5fa5d2:c.instructions+=2;goto B5fa5d2;
case 0x5fa5d3:c.instructions+=1;goto B5fa5d3;
case 0x5fa5d6:goto L5fa5d6;
case 0x5fa5d8:goto L5fa5d8;
case 0x5fa5db:c.instructions+=3;goto B5fa5db;
case 0x5fa5de:c.instructions+=2;goto B5fa5de;
case 0x5fa5e0:c.instructions+=1;goto B5fa5e0;
case 0x5fa5e2:goto L5fa5e2;
case 0x5fa5e5:c.instructions+=1;goto B5fa5e5;
case 0x5fa5e7:goto L5fa5e7;
case 0x5fa5e9:goto L5fa5e9;
case 0x5fa5eb:c.instructions+=1;goto B5fa5eb;
case 0x5fa5ed:goto L5fa5ed;
case 0x5fa5f0:c.instructions+=2;goto B5fa5f0;
case 0x5fa5f2:c.instructions+=1;goto B5fa5f2;
case 0x5fa5f4:goto L5fa5f4;
case 0x5fa5f7:c.instructions+=1;goto B5fa5f7;
case 0x5fa5f9:goto L5fa5f9;
case 0x5fa5fc:goto L5fa5fc;
case 0x5fa5ff:c.instructions+=2;goto B5fa5ff;
case 0x5fa601:c.instructions+=1;goto B5fa601;
case 0x5fa603:goto L5fa603;
case 0x5fa606:c.instructions+=2;goto B5fa606;
case 0x5fa608:c.instructions+=1;goto B5fa608;
case 0x5fa60a:goto L5fa60a;
case 0x5fa60d:c.instructions+=3;goto B5fa60d;
case 0x5fa60f:c.instructions+=2;goto B5fa60f;
case 0x5fa612:c.instructions+=1;goto B5fa612;
case 0x5fa614:goto L5fa614;
case 0x5fa615:c.instructions+=1;goto B5fa615;
case 0x5fa617:goto L5fa617;
case 0x5fa61d:c.instructions+=7;goto B5fa61d;
case 0x5fa621:c.instructions+=6;goto B5fa621;
case 0x5fa623:c.instructions+=5;goto B5fa623;
case 0x5fa625:c.instructions+=4;goto B5fa625;
case 0x5fa628:c.instructions+=3;goto B5fa628;
case 0x5fa62c:c.instructions+=2;goto B5fa62c;
case 0x5fa62e:c.instructions+=1;goto B5fa62e;
case 0x5fa633:goto L5fa633;
case 0x5fa635:c.instructions+=2;goto B5fa635;
case 0x5fa636:c.instructions+=1;goto B5fa636;
case 0x5fa638:goto L5fa638;
case 0x5fa63e:c.instructions+=6;goto B5fa63e;
case 0x5fa642:c.instructions+=5;goto B5fa642;
case 0x5fa644:c.instructions+=4;goto B5fa644;
case 0x5fa648:c.instructions+=3;goto B5fa648;
case 0x5fa64b:c.instructions+=2;goto B5fa64b;
case 0x5fa64d:c.instructions+=1;goto B5fa64d;
case 0x5fa64f:goto L5fa64f;
case 0x5fa650:c.instructions+=1;goto B5fa650;
case 0x5fa652:goto L5fa652;
case 0x5fa653:c.instructions+=4;goto B5fa653;
case 0x5fa65a:c.instructions+=3;goto B5fa65a;
case 0x5fa65b:c.instructions+=2;goto B5fa65b;
case 0x5fa65c:c.instructions+=1;goto B5fa65c;
case 0x5fa660:goto L5fa660;
case 0x5fa661:c.instructions+=6;goto B5fa661;
case 0x5fa662:c.instructions+=5;goto B5fa662;
case 0x5fa664:c.instructions+=4;goto B5fa664;
case 0x5fa667:c.instructions+=3;goto B5fa667;
case 0x5fa669:c.instructions+=2;goto B5fa669;
case 0x5fa671:c.instructions+=1;goto B5fa671;
case 0x5fa673:goto L5fa673;
case 0x5fa677:c.instructions+=4;goto B5fa677;
case 0x5fa67d:c.instructions+=3;goto B5fa67d;
case 0x5fa67f:c.instructions+=2;goto B5fa67f;
case 0x5fa682:c.instructions+=1;goto B5fa682;
case 0x5fa684:goto L5fa684;
case 0x5fa688:c.instructions+=15;goto B5fa688;
case 0x5fa68b:c.instructions+=14;goto B5fa68b;
case 0x5fa68f:c.instructions+=13;goto B5fa68f;
case 0x5fa692:c.instructions+=12;goto B5fa692;
case 0x5fa694:c.instructions+=11;goto B5fa694;
case 0x5fa696:c.instructions+=10;goto B5fa696;
case 0x5fa698:c.instructions+=9;goto B5fa698;
case 0x5fa69a:c.instructions+=8;goto B5fa69a;
case 0x5fa69c:c.instructions+=7;goto B5fa69c;
case 0x5fa69e:c.instructions+=6;goto B5fa69e;
case 0x5fa6a0:c.instructions+=5;goto B5fa6a0;
case 0x5fa6a2:c.instructions+=4;goto B5fa6a2;
case 0x5fa6a6:c.instructions+=3;goto B5fa6a6;
case 0x5fa6a8:c.instructions+=2;goto B5fa6a8;
case 0x5fa6ab:c.instructions+=1;goto B5fa6ab;
case 0x5fa6ad:goto L5fa6ad;
case 0x5fa6b1:c.instructions+=2;goto B5fa6b1;
case 0x5fa6b5:c.instructions+=1;goto B5fa6b5;
case 0x5fa6b7:goto L5fa6b7;
case 0x5fa6b9:goto L5fa6b9;
case 0x5fa6bd:c.instructions+=7;goto B5fa6bd;
case 0x5fa6c1:c.instructions+=6;goto B5fa6c1;
case 0x5fa6c5:c.instructions+=5;goto B5fa6c5;
case 0x5fa6c6:c.instructions+=4;goto B5fa6c6;
case 0x5fa6c7:c.instructions+=3;goto B5fa6c7;
case 0x5fa6c8:c.instructions+=2;goto B5fa6c8;
case 0x5fa6ca:c.instructions+=1;goto B5fa6ca;
case 0x5fa6cf:goto L5fa6cf;
case 0x5fa6d3:c.instructions+=7;goto B5fa6d3;
case 0x5fa6d7:c.instructions+=6;goto B5fa6d7;
case 0x5fa6de:c.instructions+=5;goto B5fa6de;
case 0x5fa6e1:c.instructions+=4;goto B5fa6e1;
case 0x5fa6e4:c.instructions+=3;goto B5fa6e4;
case 0x5fa6e5:c.instructions+=2;goto B5fa6e5;
case 0x5fa6e6:c.instructions+=1;goto B5fa6e6;
case 0x5fa6f0:goto L5fa6f0;
case 0x5fa6f1:c.instructions+=5;goto B5fa6f1;
case 0x5fa6f2:c.instructions+=4;goto B5fa6f2;
case 0x5fa6f4:c.instructions+=3;goto B5fa6f4;
case 0x5fa6f6:c.instructions+=2;goto B5fa6f6;
case 0x5fa6f8:c.instructions+=1;goto B5fa6f8;
case 0x5fa6fa:goto L5fa6fa;
case 0x5fa700:goto L5fa700;
case 0x5fa703:c.instructions+=5;goto B5fa703;
case 0x5fa705:c.instructions+=4;goto B5fa705;
case 0x5fa707:c.instructions+=3;goto B5fa707;
case 0x5fa70a:c.instructions+=2;goto B5fa70a;
case 0x5fa70c:c.instructions+=1;goto B5fa70c;
case 0x5fa711:goto L5fa711;
case 0x5fa716:c.instructions+=3;goto B5fa716;
case 0x5fa717:c.instructions+=2;goto B5fa717;
case 0x5fa718:c.instructions+=1;goto B5fa718;
case 0x5fa71d:goto L5fa71d;
case 0x5fa71f:c.instructions+=3;goto B5fa71f;
case 0x5fa722:c.instructions+=2;goto B5fa722;
case 0x5fa724:c.instructions+=1;goto B5fa724;
case 0x5fa726:goto L5fa726;
case 0x5fa727:c.instructions+=2;goto B5fa727;
case 0x5fa728:c.instructions+=1;goto B5fa728;
case 0x5fa730:goto L5fa730;
case 0x5fa731:c.instructions+=4;goto B5fa731;
case 0x5fa733:c.instructions+=3;goto B5fa733;
case 0x5fa735:c.instructions+=2;goto B5fa735;
case 0x5fa737:c.instructions+=1;goto B5fa737;
case 0x5fa739:goto L5fa739;
case 0x5fa740:goto L5fa740;
case 0x5fa742:c.instructions+=7;goto B5fa742;
case 0x5fa745:c.instructions+=6;goto B5fa745;
case 0x5fa747:c.instructions+=5;goto B5fa747;
case 0x5fa748:c.instructions+=4;goto B5fa748;
case 0x5fa74b:c.instructions+=3;goto B5fa74b;
case 0x5fa750:c.instructions+=2;goto B5fa750;
case 0x5fa751:c.instructions+=1;goto B5fa751;
case 0x5fa756:goto L5fa756;
case 0x5fa758:c.instructions+=3;goto B5fa758;
case 0x5fa75b:c.instructions+=2;goto B5fa75b;
case 0x5fa75d:c.instructions+=1;goto B5fa75d;
case 0x5fa75f:goto L5fa75f;
case 0x5fa760:c.instructions+=1;goto B5fa760;
case 0x5fa770:goto L5fa770;
case 0x5fa771:c.instructions+=4;goto B5fa771;
case 0x5fa772:c.instructions+=3;goto B5fa772;
case 0x5fa773:c.instructions+=2;goto B5fa773;
case 0x5fa775:c.instructions+=1;goto B5fa775;
case 0x5fa77a:goto L5fa77a;
case 0x5fa77c:c.instructions+=6;goto B5fa77c;
case 0x5fa77e:c.instructions+=5;goto B5fa77e;
case 0x5fa780:c.instructions+=4;goto B5fa780;
case 0x5fa785:c.instructions+=3;goto B5fa785;
case 0x5fa787:c.instructions+=2;goto B5fa787;
case 0x5fa78b:c.instructions+=1;goto B5fa78b;
case 0x5fa78d:goto L5fa78d;
case 0x5fa792:goto L5fa792;
case 0x5fa795:c.instructions+=2;goto B5fa795;
case 0x5fa798:c.instructions+=1;goto B5fa798;
case 0x5fa79a:goto L5fa79a;
case 0x5fa79f:goto L5fa79f;
case 0x5fa7a1:goto L5fa7a1;
case 0x5fa7a4:c.instructions+=2;goto B5fa7a4;
case 0x5fa7a5:c.instructions+=1;goto B5fa7a5;
case 0x5fa7aa:goto L5fa7aa;
case 0x5fa7ad:goto L5fa7ad;
case 0x5fa7b3:c.instructions+=8;goto B5fa7b3;
case 0x5fa7b7:c.instructions+=7;goto B5fa7b7;
case 0x5fa7b9:c.instructions+=6;goto B5fa7b9;
case 0x5fa7bb:c.instructions+=5;goto B5fa7bb;
case 0x5fa7bd:c.instructions+=4;goto B5fa7bd;
case 0x5fa7c3:c.instructions+=3;goto B5fa7c3;
case 0x5fa7c6:c.instructions+=2;goto B5fa7c6;
case 0x5fa7c8:c.instructions+=1;goto B5fa7c8;
case 0x5fa7ca:goto L5fa7ca;
case 0x5fa7cc:c.instructions+=4;goto B5fa7cc;
case 0x5fa7cf:c.instructions+=3;goto B5fa7cf;
case 0x5fa7d1:c.instructions+=2;goto B5fa7d1;
case 0x5fa7d2:c.instructions+=1;goto B5fa7d2;
case 0x5fa7d7:goto L5fa7d7;
case 0x5fa7d8:c.instructions+=3;goto B5fa7d8;
case 0x5fa7d9:c.instructions+=2;goto B5fa7d9;
case 0x5fa7da:c.instructions+=1;goto B5fa7da;
case 0x5fa7db:goto L5fa7db;
case 0x5fa7de:c.instructions+=1;goto B5fa7de;
case 0x5fa7e0:goto L5fa7e0;
case 0x5fa7e2:c.instructions+=2;goto B5fa7e2;
case 0x5fa7e4:c.instructions+=1;goto B5fa7e4;
case 0x5fa7e9:goto L5fa7e9;
case 0x5fa7eb:c.instructions+=1;goto B5fa7eb;
case 0x5fa7ed:goto L5fa7ed;
case 0x5fa7f2:c.instructions+=5;goto B5fa7f2;
case 0x5fa7f4:c.instructions+=4;goto B5fa7f4;
case 0x5fa7fb:c.instructions+=3;goto B5fa7fb;
case 0x5fa801:c.instructions+=2;goto B5fa801;
case 0x5fa803:c.instructions+=1;goto B5fa803;
case 0x5fa808:goto L5fa808;
case 0x5fa809:c.instructions+=3;goto B5fa809;
case 0x5fa80a:c.instructions+=2;goto B5fa80a;
case 0x5fa80d:c.instructions+=1;goto B5fa80d;
case 0x5fa820:goto L5fa820;
case 0x5fa821:c.instructions+=10;goto B5fa821;
case 0x5fa823:c.instructions+=9;goto B5fa823;
case 0x5fa824:c.instructions+=8;goto B5fa824;
case 0x5fa825:c.instructions+=7;goto B5fa825;
case 0x5fa827:c.instructions+=6;goto B5fa827;
case 0x5fa82d:c.instructions+=5;goto B5fa82d;
case 0x5fa82f:c.instructions+=4;goto B5fa82f;
case 0x5fa830:c.instructions+=3;goto B5fa830;
case 0x5fa835:c.instructions+=2;goto B5fa835;
case 0x5fa837:c.instructions+=1;goto B5fa837;
case 0x5fa839:goto L5fa839;
case 0x5fa83c:goto L5fa83c;
case 0x5fa841:c.instructions+=1;goto B5fa841;
case 0x5fa846:goto L5fa846;
case 0x5fa848:c.instructions+=1;goto B5fa848;
case 0x5fa84a:goto L5fa84a;
case 0x5fa84f:goto L5fa84f;
case 0x5fa851:c.instructions+=3;goto B5fa851;
case 0x5fa852:c.instructions+=2;goto B5fa852;
case 0x5fa854:c.instructions+=1;goto B5fa854;
case 0x5fa859:goto L5fa859;
case 0x5fa85b:c.instructions+=1;goto B5fa85b;
case 0x5fa85d:goto L5fa85d;
case 0x5fa862:goto L5fa862;
case 0x5fa867:goto L5fa867;
case 0x5fa86d:c.instructions+=2;goto B5fa86d;
case 0x5fa86f:c.instructions+=1;goto B5fa86f;
case 0x5fa871:goto L5fa871;
case 0x5fa873:c.instructions+=1;goto B5fa873;
case 0x5fa876:goto L5fa876;
case 0x5fa877:c.instructions+=4;goto B5fa877;
case 0x5fa878:c.instructions+=3;goto B5fa878;
case 0x5fa879:c.instructions+=2;goto B5fa879;
case 0x5fa87a:c.instructions+=1;goto B5fa87a;
case 0x5fa880:goto L5fa880;
case 0x5fa884:c.instructions+=2;goto B5fa884;
case 0x5fa889:c.instructions+=1;goto B5fa889;
case 0x5fa88b:goto L5fa88b;
case 0x5fa88d:goto L5fa88d;
case 0x5fa892:c.instructions+=1;goto B5fa892;
case 0x5fa894:goto L5fa894;
case 0x5fa899:c.instructions+=2;goto B5fa899;
case 0x5fa89b:c.instructions+=1;goto B5fa89b;
case 0x5fa89d:goto L5fa89d;
case 0x5fa8a4:c.instructions+=1;goto B5fa8a4;
case 0x5fa8a6:goto L5fa8a6;
case 0x5fa8ab:c.instructions+=1;goto B5fa8ab;
case 0x5fa8b0:goto L5fa8b0;
case 0x5fa8b5:c.instructions+=1;goto B5fa8b5;
case 0x5fa8ba:goto L5fa8ba;
case 0x5fa8bf:c.instructions+=2;goto B5fa8bf;
case 0x5fa8c4:c.instructions+=1;goto B5fa8c4;
case 0x5fa8c9:goto L5fa8c9;
case 0x5fa8cd:c.instructions+=3;goto B5fa8cd;
case 0x5fa8d0:c.instructions+=2;goto B5fa8d0;
case 0x5fa8d2:c.instructions+=1;goto B5fa8d2;
case 0x5fa8d4:goto L5fa8d4;
case 0x5fa8d9:c.instructions+=1;goto B5fa8d9;
case 0x5fa8de:goto L5fa8de;
case 0x5fa8e0:c.instructions+=1;goto B5fa8e0;
case 0x5fa8e2:goto L5fa8e2;
case 0x5fa8e6:c.instructions+=4;goto B5fa8e6;
case 0x5fa8e7:c.instructions+=3;goto B5fa8e7;
case 0x5fa8ed:c.instructions+=2;goto B5fa8ed;
case 0x5fa8ef:c.instructions+=1;goto B5fa8ef;
case 0x5fa8f4:goto L5fa8f4;
case 0x5fa900:goto L5fa900;
case 0x5fa904:c.instructions+=2;goto B5fa904;
case 0x5fa909:c.instructions+=1;goto B5fa909;
case 0x5fa90b:goto L5fa90b;
case 0x5fa90d:goto L5fa90d;
case 0x5fa912:c.instructions+=1;goto B5fa912;
case 0x5fa914:goto L5fa914;
case 0x5fa919:c.instructions+=2;goto B5fa919;
case 0x5fa91b:c.instructions+=1;goto B5fa91b;
case 0x5fa91d:goto L5fa91d;
case 0x5fa922:c.instructions+=1;goto B5fa922;
case 0x5fa927:goto L5fa927;
case 0x5fa92c:c.instructions+=2;goto B5fa92c;
case 0x5fa92f:c.instructions+=1;goto B5fa92f;
case 0x5fa931:goto L5fa931;
case 0x5fa936:c.instructions+=1;goto B5fa936;
case 0x5fa93b:goto L5fa93b;
case 0x5fa93d:c.instructions+=1;goto B5fa93d;
case 0x5fa93f:goto L5fa93f;
case 0x5fa945:c.instructions+=1;goto B5fa945;
case 0x5fa94a:goto L5fa94a;
case 0x5fa94c:c.instructions+=1;goto B5fa94c;
case 0x5fa94e:goto L5fa94e;
case 0x5fa953:c.instructions+=1;goto B5fa953;
case 0x5fa958:goto L5fa958;
case 0x5fa95a:c.instructions+=1;goto B5fa95a;
case 0x5fa95c:goto L5fa95c;
case 0x5fa960:c.instructions+=4;goto B5fa960;
case 0x5fa961:c.instructions+=3;goto B5fa961;
case 0x5fa967:c.instructions+=2;goto B5fa967;
case 0x5fa969:c.instructions+=1;goto B5fa969;
case 0x5fa96e:goto L5fa96e;
case 0x5fa970:goto L5fa970;
case 0x5fa973:c.instructions+=20;goto B5fa973;
case 0x5fa974:c.instructions+=19;goto B5fa974;
case 0x5fa976:c.instructions+=18;goto B5fa976;
case 0x5fa979:c.instructions+=17;goto B5fa979;
case 0x5fa97a:c.instructions+=16;goto B5fa97a;
case 0x5fa97e:c.instructions+=15;goto B5fa97e;
case 0x5fa981:c.instructions+=14;goto B5fa981;
case 0x5fa985:c.instructions+=13;goto B5fa985;
case 0x5fa989:c.instructions+=12;goto B5fa989;
case 0x5fa98d:c.instructions+=11;goto B5fa98d;
case 0x5fa98f:c.instructions+=10;goto B5fa98f;
case 0x5fa993:c.instructions+=9;goto B5fa993;
case 0x5fa994:c.instructions+=8;goto B5fa994;
case 0x5fa99a:c.instructions+=7;goto B5fa99a;
case 0x5fa99e:c.instructions+=6;goto B5fa99e;
case 0x5fa9a6:c.instructions+=5;goto B5fa9a6;
case 0x5fa9ae:c.instructions+=4;goto B5fa9ae;
case 0x5fa9b6:c.instructions+=3;goto B5fa9b6;
case 0x5fa9ba:c.instructions+=2;goto B5fa9ba;
case 0x5fa9be:c.instructions+=1;goto B5fa9be;
case 0x5fa9c3:goto L5fa9c3;
case 0x5fa9c9:c.instructions+=11;goto B5fa9c9;
case 0x5fa9cc:c.instructions+=10;goto B5fa9cc;
case 0x5fa9d0:c.instructions+=9;goto B5fa9d0;
case 0x5fa9d8:c.instructions+=8;goto B5fa9d8;
case 0x5fa9dc:c.instructions+=7;goto B5fa9dc;
case 0x5fa9e4:c.instructions+=6;goto B5fa9e4;
case 0x5fa9e8:c.instructions+=5;goto B5fa9e8;
case 0x5fa9e9:c.instructions+=4;goto B5fa9e9;
case 0x5fa9f1:c.instructions+=3;goto B5fa9f1;
case 0x5fa9f9:c.instructions+=2;goto B5fa9f9;
case 0x5fa9fd:c.instructions+=1;goto B5fa9fd;
case 0x5faa02:goto L5faa02;
case 0x5faa04:c.instructions+=15;goto B5faa04;
case 0x5faa06:c.instructions+=14;goto B5faa06;
case 0x5faa07:c.instructions+=13;goto B5faa07;
case 0x5faa0b:c.instructions+=12;goto B5faa0b;
case 0x5faa0f:c.instructions+=11;goto B5faa0f;
case 0x5faa13:c.instructions+=10;goto B5faa13;
case 0x5faa17:c.instructions+=9;goto B5faa17;
case 0x5faa1f:c.instructions+=8;goto B5faa1f;
case 0x5faa23:c.instructions+=7;goto B5faa23;
case 0x5faa27:c.instructions+=6;goto B5faa27;
case 0x5faa2d:c.instructions+=5;goto B5faa2d;
case 0x5faa31:c.instructions+=4;goto B5faa31;
case 0x5faa34:c.instructions+=3;goto B5faa34;
case 0x5faa36:c.instructions+=2;goto B5faa36;
case 0x5faa39:c.instructions+=1;goto B5faa39;
case 0x5faa3e:goto L5faa3e;
case 0x5faa42:c.instructions+=8;goto B5faa42;
case 0x5faa46:c.instructions+=7;goto B5faa46;
case 0x5faa48:c.instructions+=6;goto B5faa48;
case 0x5faa4c:c.instructions+=5;goto B5faa4c;
case 0x5faa4d:c.instructions+=4;goto B5faa4d;
case 0x5faa4f:c.instructions+=3;goto B5faa4f;
case 0x5faa50:c.instructions+=2;goto B5faa50;
case 0x5faa53:c.instructions+=1;goto B5faa53;
case 0x5faa60:goto L5faa60;
case 0x5faa61:c.instructions+=9;goto B5faa61;
case 0x5faa63:c.instructions+=8;goto B5faa63;
case 0x5faa66:c.instructions+=7;goto B5faa66;
case 0x5faa69:c.instructions+=6;goto B5faa69;
case 0x5faa6e:c.instructions+=5;goto B5faa6e;
case 0x5faa70:c.instructions+=4;goto B5faa70;
case 0x5faa71:c.instructions+=3;goto B5faa71;
case 0x5faa74:c.instructions+=2;goto B5faa74;
case 0x5faa75:c.instructions+=1;goto B5faa75;
case 0x5faa77:goto L5faa77;
case 0x5faa7a:c.instructions+=1;goto B5faa7a;
case 0x5faa7c:goto L5faa7c;
case 0x5faa7f:c.instructions+=2;goto B5faa7f;
case 0x5faa83:c.instructions+=1;goto B5faa83;
case 0x5faa89:goto L5faa89;
case 0x5faa8c:c.instructions+=8;goto B5faa8c;
case 0x5faa92:c.instructions+=7;goto B5faa92;
case 0x5faa95:c.instructions+=6;goto B5faa95;
case 0x5faa9b:c.instructions+=5;goto B5faa9b;
case 0x5faa9d:c.instructions+=4;goto B5faa9d;
case 0x5faaa0:c.instructions+=3;goto B5faaa0;
case 0x5faaa2:c.instructions+=2;goto B5faaa2;
case 0x5faaa5:c.instructions+=1;goto B5faaa5;
case 0x5faaab:goto L5faaab;
case 0x5faaae:c.instructions+=4;goto B5faaae;
case 0x5faaaf:c.instructions+=3;goto B5faaaf;
case 0x5faab3:c.instructions+=2;goto B5faab3;
case 0x5faab4:c.instructions+=1;goto B5faab4;
case 0x5faab9:goto L5faab9;
case 0x5faabc:c.instructions+=4;goto B5faabc;
case 0x5faabd:c.instructions+=3;goto B5faabd;
case 0x5faac1:c.instructions+=2;goto B5faac1;
case 0x5faac2:c.instructions+=1;goto B5faac2;
case 0x5faac7:goto L5faac7;
case 0x5faacb:c.instructions+=12;goto B5faacb;
case 0x5faacf:c.instructions+=11;goto B5faacf;
case 0x5faad2:c.instructions+=10;goto B5faad2;
case 0x5faad6:c.instructions+=9;goto B5faad6;
case 0x5faada:c.instructions+=8;goto B5faada;
case 0x5faadc:c.instructions+=7;goto B5faadc;
case 0x5faae0:c.instructions+=6;goto B5faae0;
case 0x5faae4:c.instructions+=5;goto B5faae4;
case 0x5faae6:c.instructions+=4;goto B5faae6;
case 0x5faae8:c.instructions+=3;goto B5faae8;
case 0x5faaea:c.instructions+=2;goto B5faaea;
case 0x5faaed:c.instructions+=1;goto B5faaed;
case 0x5faaf3:goto L5faaf3;
case 0x5faaf6:c.instructions+=6;goto B5faaf6;
case 0x5faaf9:c.instructions+=5;goto B5faaf9;
case 0x5faafa:c.instructions+=4;goto B5faafa;
case 0x5faafb:c.instructions+=3;goto B5faafb;
case 0x5faaff:c.instructions+=2;goto B5faaff;
case 0x5fab00:c.instructions+=1;goto B5fab00;
case 0x5fab05:goto L5fab05;
case 0x5fab08:c.instructions+=8;goto B5fab08;
case 0x5fab0c:c.instructions+=7;goto B5fab0c;
case 0x5fab0d:c.instructions+=6;goto B5fab0d;
case 0x5fab11:c.instructions+=5;goto B5fab11;
case 0x5fab12:c.instructions+=4;goto B5fab12;
case 0x5fab16:c.instructions+=3;goto B5fab16;
case 0x5fab17:c.instructions+=2;goto B5fab17;
case 0x5fab19:c.instructions+=1;goto B5fab19;
case 0x5fab1e:goto L5fab1e;
case 0x5fab22:c.instructions+=4;goto B5fab22;
case 0x5fab28:c.instructions+=3;goto B5fab28;
case 0x5fab2a:c.instructions+=2;goto B5fab2a;
case 0x5fab2d:c.instructions+=1;goto B5fab2d;
case 0x5fab2f:goto L5fab2f;
case 0x5fab33:c.instructions+=5;goto B5fab33;
case 0x5fab39:c.instructions+=4;goto B5fab39;
case 0x5fab3d:c.instructions+=3;goto B5fab3d;
case 0x5fab3f:c.instructions+=2;goto B5fab3f;
case 0x5fab42:c.instructions+=1;goto B5fab42;
case 0x5fab44:goto L5fab44;
case 0x5fab46:c.instructions+=1;goto B5fab46;
case 0x5fab4c:goto L5fab4c;
case 0x5fab50:c.instructions+=5;goto B5fab50;
case 0x5fab52:c.instructions+=4;goto B5fab52;
case 0x5fab54:c.instructions+=3;goto B5fab54;
case 0x5fab56:c.instructions+=2;goto B5fab56;
case 0x5fab59:c.instructions+=1;goto B5fab59;
case 0x5fab5b:goto L5fab5b;
case 0x5fab5f:c.instructions+=4;goto B5fab5f;
case 0x5fab65:c.instructions+=3;goto B5fab65;
case 0x5fab67:c.instructions+=2;goto B5fab67;
case 0x5fab6a:c.instructions+=1;goto B5fab6a;
case 0x5fab6c:goto L5fab6c;
case 0x5fab70:c.instructions+=5;goto B5fab70;
case 0x5fab76:c.instructions+=4;goto B5fab76;
case 0x5fab7a:c.instructions+=3;goto B5fab7a;
case 0x5fab7c:c.instructions+=2;goto B5fab7c;
case 0x5fab7f:c.instructions+=1;goto B5fab7f;
case 0x5fab81:goto L5fab81;
case 0x5fab83:c.instructions+=1;goto B5fab83;
case 0x5fab89:goto L5fab89;
case 0x5fab8d:c.instructions+=5;goto B5fab8d;
case 0x5fab8f:c.instructions+=4;goto B5fab8f;
case 0x5fab91:c.instructions+=3;goto B5fab91;
case 0x5fab93:c.instructions+=2;goto B5fab93;
case 0x5fab96:c.instructions+=1;goto B5fab96;
case 0x5fab98:goto L5fab98;
case 0x5fab9a:c.instructions+=5;goto B5fab9a;
case 0x5fab9b:c.instructions+=4;goto B5fab9b;
case 0x5fab9c:c.instructions+=3;goto B5fab9c;
case 0x5fab9e:c.instructions+=2;goto B5fab9e;
case 0x5fab9f:c.instructions+=1;goto B5fab9f;
case 0x5faba2:goto L5faba2;
case 0x5faba8:c.instructions+=1;goto B5faba8;
case 0x5fabaa:goto L5fabaa;
case 0x5fabb0:c.instructions+=1;goto B5fabb0;
case 0x5fabb2:goto L5fabb2;
case 0x5fabb3:c.instructions+=5;goto B5fabb3;
case 0x5fabb5:c.instructions+=4;goto B5fabb5;
case 0x5fabb6:c.instructions+=3;goto B5fabb6;
case 0x5fabb8:c.instructions+=2;goto B5fabb8;
case 0x5fabb9:c.instructions+=1;goto B5fabb9;
case 0x5fabc0:goto L5fabc0;
case 0x5fabc1:c.instructions+=11;goto B5fabc1;
case 0x5fabc3:c.instructions+=10;goto B5fabc3;
case 0x5fabc6:c.instructions+=9;goto B5fabc6;
case 0x5fabcc:c.instructions+=8;goto B5fabcc;
case 0x5fabcd:c.instructions+=7;goto B5fabcd;
case 0x5fabce:c.instructions+=6;goto B5fabce;
case 0x5fabcf:c.instructions+=5;goto B5fabcf;
case 0x5fabd1:c.instructions+=4;goto B5fabd1;
case 0x5fabd4:c.instructions+=3;goto B5fabd4;
case 0x5fabd8:c.instructions+=2;goto B5fabd8;
case 0x5fabd9:c.instructions+=1;goto B5fabd9;
case 0x5fabde:goto L5fabde;
case 0x5fabe2:c.instructions+=4;goto B5fabe2;
case 0x5fabe3:c.instructions+=3;goto B5fabe3;
case 0x5fabe7:c.instructions+=2;goto B5fabe7;
case 0x5fabe8:c.instructions+=1;goto B5fabe8;
case 0x5fabed:goto L5fabed;
case 0x5fabf2:c.instructions+=4;goto B5fabf2;
case 0x5fabf4:c.instructions+=3;goto B5fabf4;
case 0x5fabf7:c.instructions+=2;goto B5fabf7;
case 0x5fabf9:c.instructions+=1;goto B5fabf9;
case 0x5fabfb:goto L5fabfb;
case 0x5fac01:c.instructions+=2;goto B5fac01;
case 0x5fac03:c.instructions+=1;goto B5fac03;
case 0x5fac05:goto L5fac05;
case 0x5fac0a:c.instructions+=5;goto B5fac0a;
case 0x5fac0b:c.instructions+=4;goto B5fac0b;
case 0x5fac0f:c.instructions+=3;goto B5fac0f;
case 0x5fac10:c.instructions+=2;goto B5fac10;
case 0x5fac12:c.instructions+=1;goto B5fac12;
case 0x5fac17:goto L5fac17;
case 0x5fac19:c.instructions+=1;goto B5fac19;
case 0x5fac1b:goto L5fac1b;
case 0x5fac21:c.instructions+=4;goto B5fac21;
case 0x5fac27:c.instructions+=3;goto B5fac27;
case 0x5fac2e:c.instructions+=2;goto B5fac2e;
case 0x5fac32:c.instructions+=1;goto B5fac32;
case 0x5fac34:goto L5fac34;
case 0x5fac36:c.instructions+=2;goto B5fac36;
case 0x5fac37:c.instructions+=1;goto B5fac37;
case 0x5fac3a:goto L5fac3a;
case 0x5fac40:c.instructions+=2;goto B5fac40;
case 0x5fac42:c.instructions+=1;goto B5fac42;
case 0x5fac44:goto L5fac44;
case 0x5fac4a:c.instructions+=1;goto B5fac4a;
case 0x5fac4c:goto L5fac4c;
case 0x5fac4e:c.instructions+=1;goto B5fac4e;
case 0x5fac50:goto L5fac50;
case 0x5fac52:goto L5fac52;
case 0x5fac58:c.instructions+=2;goto B5fac58;
case 0x5fac5a:c.instructions+=1;goto B5fac5a;
case 0x5fac5c:goto L5fac5c;
case 0x5fac61:c.instructions+=1;goto B5fac61;
case 0x5fac63:goto L5fac63;
case 0x5fac68:c.instructions+=8;goto B5fac68;
case 0x5fac6e:c.instructions+=7;goto B5fac6e;
case 0x5fac72:c.instructions+=6;goto B5fac72;
case 0x5fac76:c.instructions+=5;goto B5fac76;
case 0x5fac7c:c.instructions+=4;goto B5fac7c;
case 0x5fac82:c.instructions+=3;goto B5fac82;
case 0x5fac84:c.instructions+=2;goto B5fac84;
case 0x5fac87:c.instructions+=1;goto B5fac87;
case 0x5fac89:goto L5fac89;
case 0x5fac8b:c.instructions+=1;goto B5fac8b;
case 0x5fac8d:goto L5fac8d;
case 0x5fac93:c.instructions+=3;goto B5fac93;
case 0x5fac96:c.instructions+=2;goto B5fac96;
case 0x5fac9a:c.instructions+=1;goto B5fac9a;
case 0x5fac9c:goto L5fac9c;
case 0x5faca1:goto L5faca1;
case 0x5faca7:c.instructions+=3;goto B5faca7;
case 0x5faca9:c.instructions+=2;goto B5faca9;
case 0x5facac:c.instructions+=1;goto B5facac;
case 0x5facae:goto L5facae;
case 0x5facb0:c.instructions+=1;goto B5facb0;
case 0x5facb2:goto L5facb2;
case 0x5facb7:c.instructions+=5;goto B5facb7;
case 0x5facb8:c.instructions+=4;goto B5facb8;
case 0x5facbc:c.instructions+=3;goto B5facbc;
case 0x5facbd:c.instructions+=2;goto B5facbd;
case 0x5facbf:c.instructions+=1;goto B5facbf;
case 0x5facc4:goto L5facc4;
case 0x5facc6:c.instructions+=1;goto B5facc6;
case 0x5facc8:goto L5facc8;
case 0x5facce:goto L5facce;
case 0x5facd2:c.instructions+=6;goto B5facd2;
case 0x5facd5:c.instructions+=5;goto B5facd5;
case 0x5facd6:c.instructions+=4;goto B5facd6;
case 0x5facd9:c.instructions+=3;goto B5facd9;
case 0x5facdb:c.instructions+=2;goto B5facdb;
case 0x5facdf:c.instructions+=1;goto B5facdf;
case 0x5face1:goto L5face1;
case 0x5face3:goto L5face3;
case 0x5face9:c.instructions+=2;goto B5face9;
case 0x5facef:c.instructions+=1;goto B5facef;
case 0x5facf5:goto L5facf5;
case 0x5facfb:c.instructions+=3;goto B5facfb;
case 0x5facfd:c.instructions+=2;goto B5facfd;
case 0x5facff:c.instructions+=1;goto B5facff;
case 0x5fad01:goto L5fad01;
case 0x5fad07:goto L5fad07;
case 0x5fad0d:c.instructions+=2;goto B5fad0d;
case 0x5fad0f:c.instructions+=1;goto B5fad0f;
case 0x5fad11:goto L5fad11;
case 0x5fad13:c.instructions+=2;goto B5fad13;
case 0x5fad19:c.instructions+=1;goto B5fad19;
case 0x5fad1b:goto L5fad1b;
case 0x5fad1e:c.instructions+=2;goto B5fad1e;
case 0x5fad21:c.instructions+=1;goto B5fad21;
case 0x5fad23:goto L5fad23;
case 0x5fad26:c.instructions+=1;goto B5fad26;
case 0x5fad28:goto L5fad28;
case 0x5fad2b:c.instructions+=6;goto B5fad2b;
case 0x5fad2c:c.instructions+=5;goto B5fad2c;
case 0x5fad2d:c.instructions+=4;goto B5fad2d;
case 0x5fad2e:c.instructions+=3;goto B5fad2e;
case 0x5fad30:c.instructions+=2;goto B5fad30;
case 0x5fad31:c.instructions+=1;goto B5fad31;
case 0x5fad32:goto L5fad32;
case 0x5fad35:c.instructions+=1;goto B5fad35;
case 0x5fad37:goto L5fad37;
case 0x5fad39:c.instructions+=3;goto B5fad39;
case 0x5fad3b:c.instructions+=2;goto B5fad3b;
case 0x5fad3d:c.instructions+=1;goto B5fad3d;
case 0x5fad42:goto L5fad42;
case 0x5fad43:c.instructions+=5;goto B5fad43;
case 0x5fad44:c.instructions+=4;goto B5fad44;
case 0x5fad45:c.instructions+=3;goto B5fad45;
case 0x5fad47:c.instructions+=2;goto B5fad47;
case 0x5fad48:c.instructions+=1;goto B5fad48;
case 0x5fad49:goto L5fad49;
case 0x5fad4c:c.instructions+=2;goto B5fad4c;
case 0x5fad4f:c.instructions+=1;goto B5fad4f;
case 0x5fad51:goto L5fad51;
case 0x5fad54:c.instructions+=1;goto B5fad54;
case 0x5fad56:goto L5fad56;
case 0x5fad5d:c.instructions+=6;goto B5fad5d;
case 0x5fad5e:c.instructions+=5;goto B5fad5e;
case 0x5fad5f:c.instructions+=4;goto B5fad5f;
case 0x5fad60:c.instructions+=3;goto B5fad60;
case 0x5fad62:c.instructions+=2;goto B5fad62;
case 0x5fad63:c.instructions+=1;goto B5fad63;
case 0x5fad64:goto L5fad64;
case 0x5fad67:c.instructions+=1;goto B5fad67;
case 0x5fad69:goto L5fad69;
case 0x5fad6b:c.instructions+=2;goto B5fad6b;
case 0x5fad6d:c.instructions+=1;goto B5fad6d;
case 0x5fad72:goto L5fad72;
case 0x5fad73:c.instructions+=5;goto B5fad73;
case 0x5fad74:c.instructions+=4;goto B5fad74;
case 0x5fad75:c.instructions+=3;goto B5fad75;
case 0x5fad77:c.instructions+=2;goto B5fad77;
case 0x5fad78:c.instructions+=1;goto B5fad78;
case 0x5fad80:goto L5fad80;
case 0x5fad86:c.instructions+=5;goto B5fad86;
case 0x5fad87:c.instructions+=4;goto B5fad87;
case 0x5fad89:c.instructions+=3;goto B5fad89;
case 0x5fad8f:c.instructions+=2;goto B5fad8f;
case 0x5fad91:c.instructions+=1;goto B5fad91;
case 0x5fad93:goto L5fad93;
case 0x5fad95:c.instructions+=1;goto B5fad95;
case 0x5fad97:goto L5fad97;
case 0x5fad9c:c.instructions+=2;goto B5fad9c;
case 0x5fad9e:c.instructions+=1;goto B5fad9e;
case 0x5fada0:goto L5fada0;
case 0x5fada6:c.instructions+=3;goto B5fada6;
case 0x5fada8:c.instructions+=2;goto B5fada8;
case 0x5fadaa:c.instructions+=1;goto B5fadaa;
case 0x5fadac:goto L5fadac;
case 0x5fadaf:goto L5fadaf;
case 0x5fadb1:c.instructions+=1;goto B5fadb1;
case 0x5fadb3:goto L5fadb3;
case 0x5fadb8:c.instructions+=1;goto B5fadb8;
case 0x5fadbd:goto L5fadbd;
case 0x5fadbf:c.instructions+=2;goto B5fadbf;
case 0x5fadc1:c.instructions+=1;goto B5fadc1;
case 0x5fadc6:goto L5fadc6;
case 0x5fadc7:c.instructions+=1;goto B5fadc7;
case 0x5fadca:goto L5fadca;
case 0x5fadcc:c.instructions+=2;goto B5fadcc;
case 0x5fadcf:c.instructions+=1;goto B5fadcf;
case 0x5fadd1:goto L5fadd1;
case 0x5fadd2:c.instructions+=1;goto B5fadd2;
case 0x5fadd4:goto L5fadd4;
case 0x5fadd5:c.instructions+=3;goto B5fadd5;
case 0x5fadd7:c.instructions+=2;goto B5fadd7;
case 0x5fadd9:c.instructions+=1;goto B5fadd9;
case 0x5faddb:goto L5faddb;
case 0x5faddd:c.instructions+=1;goto B5faddd;
case 0x5fade2:goto L5fade2;
case 0x5fade3:c.instructions+=1;goto B5fade3;
case 0x5fade6:goto L5fade6;
case 0x5fade8:c.instructions+=1;goto B5fade8;
case 0x5faded:goto L5faded;
case 0x5fadee:c.instructions+=1;goto B5fadee;
case 0x5fadf1:goto L5fadf1;
case 0x5fadf6:c.instructions+=1;goto B5fadf6;
case 0x5fadfb:goto L5fadfb;
case 0x5fadfd:c.instructions+=2;goto B5fadfd;
case 0x5fadff:c.instructions+=1;goto B5fadff;
case 0x5fae04:goto L5fae04;
case 0x5fae05:c.instructions+=1;goto B5fae05;
case 0x5fae08:goto L5fae08;
case 0x5fae0a:c.instructions+=3;goto B5fae0a;
case 0x5fae0c:c.instructions+=2;goto B5fae0c;
case 0x5fae0e:c.instructions+=1;goto B5fae0e;
case 0x5fae13:goto L5fae13;
case 0x5fae14:c.instructions+=1;goto B5fae14;
case 0x5fae20:goto L5fae20;
case 0x5fae21:c.instructions+=5;goto B5fae21;
case 0x5fae22:c.instructions+=4;goto B5fae22;
case 0x5fae24:c.instructions+=3;goto B5fae24;
case 0x5fae27:c.instructions+=2;goto B5fae27;
case 0x5fae29:c.instructions+=1;goto B5fae29;
case 0x5fae2f:goto L5fae2f;
case 0x5fae33:c.instructions+=1;goto B5fae33;
case 0x5fae39:goto L5fae39;
case 0x5fae3b:c.instructions+=1;goto B5fae3b;
case 0x5fae40:goto L5fae40;
case 0x5fae46:c.instructions+=5;goto B5fae46;
case 0x5fae4c:c.instructions+=4;goto B5fae4c;
case 0x5fae51:c.instructions+=3;goto B5fae51;
case 0x5fae53:c.instructions+=2;goto B5fae53;
case 0x5fae56:c.instructions+=1;goto B5fae56;
case 0x5fae58:goto L5fae58;
case 0x5fae5d:c.instructions+=2;goto B5fae5d;
case 0x5fae5f:c.instructions+=1;goto B5fae5f;
case 0x5fae61:goto L5fae61;
case 0x5fae63:c.instructions+=1;goto B5fae63;
case 0x5fae65:goto L5fae65;
case 0x5fae6a:goto L5fae6a;
case 0x5fae6b:c.instructions+=2;goto B5fae6b;
case 0x5fae6e:c.instructions+=1;goto B5fae6e;
case 0x5fae73:goto L5fae73;
case 0x5fae76:c.instructions+=3;goto B5fae76;
case 0x5fae79:c.instructions+=2;goto B5fae79;
case 0x5fae7b:c.instructions+=1;goto B5fae7b;
case 0x5fae7d:goto L5fae7d;
case 0x5fae81:goto L5fae81;
case 0x5fae84:c.instructions+=6;goto B5fae84;
case 0x5fae85:c.instructions+=5;goto B5fae85;
case 0x5fae88:c.instructions+=4;goto B5fae88;
case 0x5fae8a:c.instructions+=3;goto B5fae8a;
case 0x5fae8c:c.instructions+=2;goto B5fae8c;
case 0x5fae8e:c.instructions+=1;goto B5fae8e;
case 0x5fae91:goto L5fae91;
case 0x5fae94:c.instructions+=6;goto B5fae94;
case 0x5fae9a:c.instructions+=5;goto B5fae9a;
case 0x5fae9d:c.instructions+=4;goto B5fae9d;
case 0x5faea3:c.instructions+=3;goto B5faea3;
case 0x5faea5:c.instructions+=2;goto B5faea5;
case 0x5faea8:c.instructions+=1;goto B5faea8;
case 0x5faeaa:goto L5faeaa;
case 0x5faeb0:goto L5faeb0;
case 0x5faeb3:c.instructions+=2;goto B5faeb3;
case 0x5faeb5:c.instructions+=1;goto B5faeb5;
case 0x5faeb7:goto L5faeb7;
case 0x5faebb:c.instructions+=15;goto B5faebb;
case 0x5faebf:c.instructions+=14;goto B5faebf;
case 0x5faec3:c.instructions+=13;goto B5faec3;
case 0x5faec7:c.instructions+=12;goto B5faec7;
case 0x5faecb:c.instructions+=11;goto B5faecb;
case 0x5faed1:c.instructions+=10;goto B5faed1;
case 0x5faed5:c.instructions+=9;goto B5faed5;
case 0x5faedb:c.instructions+=8;goto B5faedb;
case 0x5faede:c.instructions+=7;goto B5faede;
case 0x5faee0:c.instructions+=6;goto B5faee0;
case 0x5faee2:c.instructions+=5;goto B5faee2;
case 0x5faee4:c.instructions+=4;goto B5faee4;
case 0x5faeea:c.instructions+=3;goto B5faeea;
case 0x5faeec:c.instructions+=2;goto B5faeec;
case 0x5faeef:c.instructions+=1;goto B5faeef;
case 0x5faef1:goto L5faef1;
case 0x5faef3:c.instructions+=7;goto B5faef3;
case 0x5faef5:c.instructions+=6;goto B5faef5;
case 0x5faef8:c.instructions+=5;goto B5faef8;
case 0x5faefb:c.instructions+=4;goto B5faefb;
case 0x5faefc:c.instructions+=3;goto B5faefc;
case 0x5faefd:c.instructions+=2;goto B5faefd;
case 0x5faefe:c.instructions+=1;goto B5faefe;
case 0x5faeff:goto L5faeff;
case 0x5faf04:c.instructions+=3;goto B5faf04;
case 0x5faf06:c.instructions+=2;goto B5faf06;
case 0x5faf09:c.instructions+=1;goto B5faf09;
case 0x5faf0c:goto L5faf0c;
case 0x5faf0d:goto L5faf0d;
case 0x5faf0e:c.instructions+=2;goto B5faf0e;
case 0x5faf0f:c.instructions+=1;goto B5faf0f;
case 0x5faf10:goto L5faf10;
case 0x5faf11:c.instructions+=4;goto B5faf11;
case 0x5faf13:c.instructions+=3;goto B5faf13;
case 0x5faf16:c.instructions+=2;goto B5faf16;
case 0x5faf18:c.instructions+=1;goto B5faf18;
case 0x5faf1a:goto L5faf1a;
case 0x5faf1e:c.instructions+=1;goto B5faf1e;
case 0x5faf20:goto L5faf20;
case 0x5faf21:c.instructions+=2;goto B5faf21;
case 0x5faf23:c.instructions+=1;goto B5faf23;
case 0x5faf28:goto L5faf28;
case 0x5faf2b:c.instructions+=2;goto B5faf2b;
case 0x5faf2d:c.instructions+=1;goto B5faf2d;
case 0x5faf32:goto L5faf32;
case 0x5faf35:c.instructions+=3;goto B5faf35;
case 0x5faf38:c.instructions+=2;goto B5faf38;
case 0x5faf3a:c.instructions+=1;goto B5faf3a;
case 0x5faf3c:goto L5faf3c;
case 0x5faf3f:c.instructions+=4;goto B5faf3f;
case 0x5faf41:c.instructions+=3;goto B5faf41;
case 0x5faf42:c.instructions+=2;goto B5faf42;
case 0x5faf44:c.instructions+=1;goto B5faf44;
case 0x5faf47:goto L5faf47;
case 0x5faf49:c.instructions+=3;goto B5faf49;
case 0x5faf4b:c.instructions+=2;goto B5faf4b;
case 0x5faf4d:c.instructions+=1;goto B5faf4d;
case 0x5faf50:goto L5faf50;
case 0x5faf57:c.instructions+=1;goto B5faf57;
case 0x5faf59:goto L5faf59;
case 0x5faf5e:c.instructions+=3;goto B5faf5e;
case 0x5faf60:c.instructions+=2;goto B5faf60;
case 0x5faf65:c.instructions+=1;goto B5faf65;
case 0x5faf67:goto L5faf67;
case 0x5faf6b:goto L5faf6b;
case 0x5faf6d:c.instructions+=3;goto B5faf6d;
case 0x5faf6e:c.instructions+=2;goto B5faf6e;
case 0x5faf70:c.instructions+=1;goto B5faf70;
case 0x5faf73:goto L5faf73;
case 0x5faf74:goto L5faf74;
case 0x5faf75:c.instructions+=1;goto B5faf75;
case 0x5faf80:goto L5faf80;
case 0x5faf81:c.instructions+=4;goto B5faf81;
case 0x5faf83:c.instructions+=3;goto B5faf83;
case 0x5faf85:c.instructions+=2;goto B5faf85;
case 0x5faf8f:c.instructions+=1;goto B5faf8f;
case 0x5faf94:goto L5faf94;
case 0x5faf9e:c.instructions+=8;goto B5faf9e;
case 0x5fafa8:c.instructions+=7;goto B5fafa8;
case 0x5fafaf:c.instructions+=6;goto B5fafaf;
case 0x5fafb4:c.instructions+=5;goto B5fafb4;
case 0x5fafba:c.instructions+=4;goto B5fafba;
case 0x5fafc0:c.instructions+=3;goto B5fafc0;
case 0x5fafc6:c.instructions+=2;goto B5fafc6;
case 0x5fafc7:c.instructions+=1;goto B5fafc7;
case 0x5fafd0:goto L5fafd0;
case 0x5fafd1:c.instructions+=10;goto B5fafd1;
case 0x5fafd3:c.instructions+=9;goto B5fafd3;
case 0x5fafd9:c.instructions+=8;goto B5fafd9;
case 0x5fafdc:c.instructions+=7;goto B5fafdc;
case 0x5fafdd:c.instructions+=6;goto B5fafdd;
case 0x5fafde:c.instructions+=5;goto B5fafde;
case 0x5fafe3:c.instructions+=4;goto B5fafe3;
case 0x5fafe5:c.instructions+=3;goto B5fafe5;
case 0x5fafe7:c.instructions+=2;goto B5fafe7;
case 0x5fafed:c.instructions+=1;goto B5fafed;
case 0x5fafef:goto L5fafef;
case 0x5faff1:c.instructions+=1;goto B5faff1;
case 0x5faff3:goto L5faff3;
case 0x5faff9:c.instructions+=2;goto B5faff9;
case 0x5faffb:c.instructions+=1;goto B5faffb;
case 0x5faffd:goto L5faffd;
default:missing_instruction(c.pc);}
B5fa002:L5fa002:{c.instructions+=7;NFSU2_TR(0x5fa002);
__builtin_memmove((R+8),gp(0x7a56a8),4);
}
B5fa008:{NFSU2_TR(0x5fa008);
{u32 ea_=u32(u32(8017576u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fa00e:{NFSU2_TR(0x5fa00e);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fa012:{NFSU2_TR(0x5fa012);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fa016:{NFSU2_TR(0x5fa016);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fa018:{NFSU2_TR(0x5fa018);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5fa01b:{NFSU2_TR(0x5fa01b);
if(r1(R+514)){{goto L5fa032;}}
}
B5fa01d:L5fa01d:{c.instructions+=5;NFSU2_TR(0x5fa01d);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fa021:{NFSU2_TR(0x5fa021);
{u32 ea_=u32(u32(8017576u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fa027:{NFSU2_TR(0x5fa027);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fa029:{NFSU2_TR(0x5fa029);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5fa02c:{NFSU2_TR(0x5fa02c);
if(r1(R+514)){{goto L5fa243;}}
}
B5fa032:L5fa032:{c.instructions+=5;NFSU2_TR(0x5fa032);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa034:{NFSU2_TR(0x5fa034);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa036:{NFSU2_TR(0x5fa036);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5fa03a:{NFSU2_TR(0x5fa03a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa03b:{NFSU2_TR(0x5fa03b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa040ull));
TAIL_STATIC(0x5dd360u,5dd);
}
B5fa040:L5fa040:{c.instructions+=5;NFSU2_TR(0x5fa040);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fa044:{NFSU2_TR(0x5fa044);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5fa048:{NFSU2_TR(0x5fa048);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa049:{NFSU2_TR(0x5fa049);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa04a:{NFSU2_TR(0x5fa04a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa04full));
TAIL_STATIC(0x43ce10u,43c);
}
B5fa04f:L5fa04f:{c.instructions+=6;NFSU2_TR(0x5fa04f);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5fa053:{NFSU2_TR(0x5fa053);
{u32 ea_=u32(u32(8017584u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fa059:{NFSU2_TR(0x5fa059);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5fa05c:{NFSU2_TR(0x5fa05c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fa05e:{NFSU2_TR(0x5fa05e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fa061:{NFSU2_TR(0x5fa061);
if(r1(R+518)){{goto L5fa243;}}
}
B5fa067:L5fa067:{c.instructions+=5;NFSU2_TR(0x5fa067);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fa06b:{NFSU2_TR(0x5fa06b);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fa06f:{NFSU2_TR(0x5fa06f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fa071:{NFSU2_TR(0x5fa071);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5fa074:{NFSU2_TR(0x5fa074);
if(r1(R+514)){{goto L5fa12a;}}
}
B5fa07a:L5fa07a:{c.instructions+=2;NFSU2_TR(0x5fa07a);
__builtin_memmove((R+4),(R+28),4);
}
B5fa07c:{NFSU2_TR(0x5fa07c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa081ull));
TAIL_STATIC(0x4018a0u,401);
}
B5fa081:L5fa081:{c.instructions+=13;NFSU2_TR(0x5fa081);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5fa083:{NFSU2_TR(0x5fa083);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fa086:{NFSU2_TR(0x5fa086);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fa08a:{NFSU2_TR(0x5fa08a);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fa08e:{NFSU2_TR(0x5fa08e);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fa092:{NFSU2_TR(0x5fa092);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fa096:{NFSU2_TR(0x5fa096);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fa09a:{NFSU2_TR(0x5fa09a);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fa09e:{NFSU2_TR(0x5fa09e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5fa0a0:{NFSU2_TR(0x5fa0a0);
{u32 ea_=u32(u32(8020836u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fa0a6:{NFSU2_TR(0x5fa0a6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fa0a8:{NFSU2_TR(0x5fa0a8);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5fa0ab:{NFSU2_TR(0x5fa0ab);
if(r1(R+514)){{goto L5fa0c3;}}
}
B5fa0ad:L5fa0ad:{c.instructions+=2;NFSU2_TR(0x5fa0ad);
__builtin_memmove((R+4),(R+28),4);
}
B5fa0af:{NFSU2_TR(0x5fa0af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa0b4ull));
TAIL_STATIC(0x4018b0u,401);
}
B5fa0b4:L5fa0b4:{c.instructions+=5;NFSU2_TR(0x5fa0b4);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fa0b6:{NFSU2_TR(0x5fa0b6);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fa0b9:{NFSU2_TR(0x5fa0b9);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5fa0bb:{NFSU2_TR(0x5fa0bb);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fa0bf:{NFSU2_TR(0x5fa0bf);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fa0c3:L5fa0c3:{c.instructions+=9;NFSU2_TR(0x5fa0c3);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fa0c7:{NFSU2_TR(0x5fa0c7);
{u32 ea_=u32(r4(R+12)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fa0ca:{NFSU2_TR(0x5fa0ca);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fa0ce:{NFSU2_TR(0x5fa0ce);
{u32 ea_=u32(r4(R+12)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fa0d1:{NFSU2_TR(0x5fa0d1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5fa0d3:{NFSU2_TR(0x5fa0d3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fa0d9:{NFSU2_TR(0x5fa0d9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fa0db:{NFSU2_TR(0x5fa0db);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5fa0de:{NFSU2_TR(0x5fa0de);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5fa243;}}
}
B5fa0e4:L5fa0e4:{c.instructions+=6;NFSU2_TR(0x5fa0e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fa0e8:{NFSU2_TR(0x5fa0e8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa0e9:{NFSU2_TR(0x5fa0e9);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5fa0ed:{NFSU2_TR(0x5fa0ed);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa0ee:{NFSU2_TR(0x5fa0ee);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5fa0f2:{NFSU2_TR(0x5fa0f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa0f7ull));
TAIL_STATIC(0x401250u,401);
}
B5fa0f7:L5fa0f7:{c.instructions+=12;NFSU2_TR(0x5fa0f7);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fa0fb:{NFSU2_TR(0x5fa0fb);
{u32 ea_=u32(r4(R+12)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fa0fe:{NFSU2_TR(0x5fa0fe);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fa102:{NFSU2_TR(0x5fa102);
{u32 ea_=u32(r4(R+12)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fa105:{NFSU2_TR(0x5fa105);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5fa107:{NFSU2_TR(0x5fa107);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fa10b:{NFSU2_TR(0x5fa10b);
{u32 ea_=u32(r4(R+12)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fa10e:{NFSU2_TR(0x5fa10e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5fa110:{NFSU2_TR(0x5fa110);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fa116:{NFSU2_TR(0x5fa116);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fa118:{NFSU2_TR(0x5fa118);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5fa11b:{NFSU2_TR(0x5fa11b);
if(r1(R+514)){{goto L5fa243;}}
}
B5fa121:L5fa121:{c.instructions+=2;NFSU2_TR(0x5fa121);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fa125:{NFSU2_TR(0x5fa125);
{goto L5fa1d4;}
}
B5fa12a:L5fa12a:{c.instructions+=5;NFSU2_TR(0x5fa12a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fa12e:{NFSU2_TR(0x5fa12e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa130:{NFSU2_TR(0x5fa130);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5fa134:{NFSU2_TR(0x5fa134);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa135:{NFSU2_TR(0x5fa135);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa13aull));
TAIL_STATIC(0x401b20u,401);
}
B5fa13a:L5fa13a:{c.instructions+=2;NFSU2_TR(0x5fa13a);
__builtin_memmove((R+4),(R+28),4);
}
B5fa13c:{NFSU2_TR(0x5fa13c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa141ull));
TAIL_STATIC(0x4018a0u,401);
}
B5fa141:L5fa141:{c.instructions+=9;NFSU2_TR(0x5fa141);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fa145:{NFSU2_TR(0x5fa145);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fa148:{NFSU2_TR(0x5fa148);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fa14c:{NFSU2_TR(0x5fa14c);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fa14e:{NFSU2_TR(0x5fa14e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5fa150:{NFSU2_TR(0x5fa150);
{u32 ea_=u32(u32(8020832u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5fa156:{NFSU2_TR(0x5fa156);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fa158:{NFSU2_TR(0x5fa158);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5fa15b:{NFSU2_TR(0x5fa15b);
if(r1(R+514)){{goto L5fa1f7;}}
}
B5fa161:L5fa161:{c.instructions+=1;NFSU2_TR(0x5fa161);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5fa163:L5fa163:{c.instructions+=1;NFSU2_TR(0x5fa163);
w4(R+28,u32(0x1ull));
}
B5fa168:L5fa168:{c.instructions+=5;NFSU2_TR(0x5fa168);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa169:{NFSU2_TR(0x5fa169);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5fa16d:{NFSU2_TR(0x5fa16d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa16e:{NFSU2_TR(0x5fa16e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fa172:{NFSU2_TR(0x5fa172);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa177ull));
TAIL_STATIC(0x401b20u,401);
}
B5fa177:L5fa177:{c.instructions+=12;NFSU2_TR(0x5fa177);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fa17a:{NFSU2_TR(0x5fa17a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5fa17c:{NFSU2_TR(0x5fa17c);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5fa180:{NFSU2_TR(0x5fa180);
{u32 ea_=u32(r4(R+12)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fa183:{NFSU2_TR(0x5fa183);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fa187:{NFSU2_TR(0x5fa187);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fa18b:{NFSU2_TR(0x5fa18b);
{u32 ea_=u32(r4(R+12)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fa18e:{NFSU2_TR(0x5fa18e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5fa190:{NFSU2_TR(0x5fa190);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fa196:{NFSU2_TR(0x5fa196);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fa198:{NFSU2_TR(0x5fa198);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5fa19b:{NFSU2_TR(0x5fa19b);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5fa243;}}
}
B5fa1a1:L5fa1a1:{c.instructions+=6;NFSU2_TR(0x5fa1a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fa1a5:{NFSU2_TR(0x5fa1a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5fa1a9:{NFSU2_TR(0x5fa1a9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa1aa:{NFSU2_TR(0x5fa1aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa1ab:{NFSU2_TR(0x5fa1ab);
__builtin_memmove((R+4),(R+12),4);
}
B5fa1ad:{NFSU2_TR(0x5fa1ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa1b2ull));
TAIL_STATIC(0x40cbc0u,40c);
}
B5fa1b2:L5fa1b2:{c.instructions+=6;NFSU2_TR(0x5fa1b2);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fa1b6:{NFSU2_TR(0x5fa1b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fa1ba:{NFSU2_TR(0x5fa1ba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa1bb:{NFSU2_TR(0x5fa1bb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa1bc:{NFSU2_TR(0x5fa1bc);
__builtin_memmove((R+4),(R+12),4);
}
B5fa1be:{NFSU2_TR(0x5fa1be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa1c3ull));
TAIL_STATIC(0x40cbc0u,40c);
}
B5fa1c3:L5fa1c3:{c.instructions+=5;NFSU2_TR(0x5fa1c3);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5fa1c7:{NFSU2_TR(0x5fa1c7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5fa1cd:{NFSU2_TR(0x5fa1cd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fa1cf:{NFSU2_TR(0x5fa1cf);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5fa1d2:{NFSU2_TR(0x5fa1d2);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5fa241;}}
}
B5fa1d4:L5fa1d4:{c.instructions+=3;NFSU2_TR(0x5fa1d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fa1d8:{NFSU2_TR(0x5fa1d8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5fa1da:{NFSU2_TR(0x5fa1da);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5fa1e9;}}
}
B5fa1dc:L5fa1dc:{c.instructions+=5;NFSU2_TR(0x5fa1dc);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fa1e0:{NFSU2_TR(0x5fa1e0);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5fa1e2:{NFSU2_TR(0x5fa1e2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fa1e4:{NFSU2_TR(0x5fa1e4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5fa1e7:{NFSU2_TR(0x5fa1e7);
if(r1(R+514)){{goto L5fa241;}}
}
B5fa1e9:L5fa1e9:{c.instructions+=4;NFSU2_TR(0x5fa1e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fa1ed:{NFSU2_TR(0x5fa1ed);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fa1f1:{NFSU2_TR(0x5fa1f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fa1f5:{NFSU2_TR(0x5fa1f5);
{goto L5fa243;}
}
B5fa1f7:L5fa1f7:{c.instructions+=4;NFSU2_TR(0x5fa1f7);
{u32 ea_=u32(u32(8020828u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fa1fd:{NFSU2_TR(0x5fa1fd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fa1ff:{NFSU2_TR(0x5fa1ff);
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
B5fa202:{NFSU2_TR(0x5fa202);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fa20b;}}
}
B5fa204:L5fa204:{c.instructions+=2;NFSU2_TR(0x5fa204);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5fa206:{NFSU2_TR(0x5fa206);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fa168u);}goto L5fa168;}
}
B5fa20b:L5fa20b:{c.instructions+=2;NFSU2_TR(0x5fa20b);
__builtin_memmove((R+4),(R+28),4);
}
B5fa20d:{NFSU2_TR(0x5fa20d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa212ull));
TAIL_STATIC(0x4018b0u,401);
}
B5fa212:L5fa212:{c.instructions+=13;NFSU2_TR(0x5fa212);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fa214:{NFSU2_TR(0x5fa214);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fa217:{NFSU2_TR(0x5fa217);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fa21b:{NFSU2_TR(0x5fa21b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5fa21d:{NFSU2_TR(0x5fa21d);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5fa21f:{NFSU2_TR(0x5fa21f);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fa223:{NFSU2_TR(0x5fa223);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B5fa225:{NFSU2_TR(0x5fa225);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5fa227:{NFSU2_TR(0x5fa227);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fa22d:{NFSU2_TR(0x5fa22d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fa22f:{NFSU2_TR(0x5fa22f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5fa231:{NFSU2_TR(0x5fa231);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fa234:{NFSU2_TR(0x5fa234);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fa163u);}goto L5fa163;}}
}
B5fa23a:L5fa23a:{c.instructions+=2;NFSU2_TR(0x5fa23a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5fa23c:{NFSU2_TR(0x5fa23c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fa168u);}goto L5fa168;}
}
B5fa241:L5fa241:{c.instructions+=1;NFSU2_TR(0x5fa241);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5fa243:L5fa243:{c.instructions+=8;NFSU2_TR(0x5fa243);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fa247:{NFSU2_TR(0x5fa247);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fa24b:{NFSU2_TR(0x5fa24b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5fa24c:{NFSU2_TR(0x5fa24c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B5fa24f:{NFSU2_TR(0x5fa24f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5fa252:{NFSU2_TR(0x5fa252);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fa256:{NFSU2_TR(0x5fa256);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fa25a:{NFSU2_TR(0x5fa25a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x5f9f30u,5f9);}
}
B5fa260:L5fa260:{c.instructions+=3;NFSU2_TR(0x5fa260);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fa264:{NFSU2_TR(0x5fa264);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fa266:{NFSU2_TR(0x5fa266);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fa27b;}}
}
B5fa268:L5fa268:{c.instructions+=4;NFSU2_TR(0x5fa268);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fa26c:{NFSU2_TR(0x5fa26c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa26d:{NFSU2_TR(0x5fa26d);
__builtin_memmove((R+4),(R+24),4);
}
B5fa26f:{NFSU2_TR(0x5fa26f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa274ull));
TAIL_STATIC(0x5f9c80u,5f9);
}
B5fa274:L5fa274:{c.instructions+=6;NFSU2_TR(0x5fa274);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fa275:{NFSU2_TR(0x5fa275);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fa276:{NFSU2_TR(0x5fa276);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fa277:{NFSU2_TR(0x5fa277);
__builtin_memmove((R+16),(R+20),4);
}
B5fa279:{NFSU2_TR(0x5fa279);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5fa27a:{NFSU2_TR(0x5fa27a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fa27b:L5fa27b:{c.instructions+=3;NFSU2_TR(0x5fa27b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fa27f:{NFSU2_TR(0x5fa27f);
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
B5fa281:{NFSU2_TR(0x5fa281);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5fa2f8;}}
}
B5fa283:L5fa283:{c.instructions+=10;NFSU2_TR(0x5fa283);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B5fa288:{NFSU2_TR(0x5fa288);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fa28e:{NFSU2_TR(0x5fa28e);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B5fa290:{NFSU2_TR(0x5fa290);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fa294:{NFSU2_TR(0x5fa294);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5fa298:{NFSU2_TR(0x5fa298);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fa29e:{NFSU2_TR(0x5fa29e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fa2a4:{NFSU2_TR(0x5fa2a4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fa2a6:{NFSU2_TR(0x5fa2a6);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5fa2a9:{NFSU2_TR(0x5fa2a9);
if(r1(R+514)){{goto L5fa2f8;}}
}
B5fa2ab:L5fa2ab:{c.instructions+=16;NFSU2_TR(0x5fa2ab);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5fa2b2:{NFSU2_TR(0x5fa2b2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fa2b6:{NFSU2_TR(0x5fa2b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5fa2bc:{NFSU2_TR(0x5fa2bc);
u8 U[12];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5fa2c3:{NFSU2_TR(0x5fa2c3);
__builtin_memmove((R+28),(R+4),4);
}
B5fa2c5:{NFSU2_TR(0x5fa2c5);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+12))));
}
B5fa2c7:{NFSU2_TR(0x5fa2c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+28))));
s4(u32(r4(R+0)),r4(U+0));
}
B5fa2c9:{NFSU2_TR(0x5fa2c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fa2cf:{NFSU2_TR(0x5fa2cf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5fa2d5:{NFSU2_TR(0x5fa2d5);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B5fa2db:{NFSU2_TR(0x5fa2db);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1f40ull))));
}
B5fa2e1:{NFSU2_TR(0x5fa2e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fa2e7:{NFSU2_TR(0x5fa2e7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5fa2ee:{NFSU2_TR(0x5fa2ee);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa2ef:{NFSU2_TR(0x5fa2ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa2f0:{NFSU2_TR(0x5fa2f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa2f5ull));
TAIL_STATIC(0x589750u,589);
}
B5fa2f5:L5fa2f5:{c.instructions+=1;NFSU2_TR(0x5fa2f5);
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
B5fa2f8:L5fa2f8:{c.instructions+=6;NFSU2_TR(0x5fa2f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fa2f9:{NFSU2_TR(0x5fa2f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fa2fa:{NFSU2_TR(0x5fa2fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fa2fb:{NFSU2_TR(0x5fa2fb);
__builtin_memmove((R+16),(R+20),4);
}
B5fa2fd:{NFSU2_TR(0x5fa2fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5fa2fe:{NFSU2_TR(0x5fa2fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fa300:L5fa300:{c.instructions+=5;NFSU2_TR(0x5fa300);
__builtin_memmove((R+0),gp(0x89011c),4);
}
B5fa305:{NFSU2_TR(0x5fa305);
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
B5fa307:{NFSU2_TR(0x5fa307);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa308:{NFSU2_TR(0x5fa308);
__builtin_memmove((R+28),(R+4),4);
}
B5fa30a:{NFSU2_TR(0x5fa30a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fa37f;}}
}
B5fa30c:L5fa30c:{c.instructions+=2;NFSU2_TR(0x5fa30c);
u8 U[4];
w4(U+0,u32(0x7a6390ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa311:{NFSU2_TR(0x5fa311);
u8 U[4];
__builtin_memmove((U+0),gp(0x783198),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa317ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5fa317:L5fa317:{c.instructions+=3;NFSU2_TR(0x5fa317);
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
B5fa319:{NFSU2_TR(0x5fa319);
__builtin_memmove(gp(0x89011c),(R+0),4);
}
B5fa31e:{NFSU2_TR(0x5fa31e);
if(r1(R+518)){{goto L5fa379;}}
}
B5fa320:L5fa320:{c.instructions+=5;NFSU2_TR(0x5fa320);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa321:{NFSU2_TR(0x5fa321);
__builtin_memmove((R+24),gp(0x783194),4);
}
B5fa327:{NFSU2_TR(0x5fa327);
u8 U[4];
w4(U+0,u32(0x7a6384ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa32c:{NFSU2_TR(0x5fa32c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa32d:{NFSU2_TR(0x5fa32d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa32full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5fa32f:L5fa32f:{c.instructions+=5;NFSU2_TR(0x5fa32f);
__builtin_memmove(gp(0x890120),(R+0),4);
}
B5fa334:{NFSU2_TR(0x5fa334);
__builtin_memmove((R+0),gp(0x89011c),4);
}
B5fa339:{NFSU2_TR(0x5fa339);
u8 U[4];
w4(U+0,u32(0x7a6378ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa33e:{NFSU2_TR(0x5fa33e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa33f:{NFSU2_TR(0x5fa33f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa341ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5fa341:L5fa341:{c.instructions+=5;NFSU2_TR(0x5fa341);
__builtin_memmove((R+4),gp(0x89011c),4);
}
B5fa347:{NFSU2_TR(0x5fa347);
u8 U[4];
w4(U+0,u32(0x7a6368ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa34c:{NFSU2_TR(0x5fa34c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa34d:{NFSU2_TR(0x5fa34d);
__builtin_memmove(gp(0x890124),(R+0),4);
}
B5fa352:{NFSU2_TR(0x5fa352);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa354ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5fa354:L5fa354:{c.instructions+=5;NFSU2_TR(0x5fa354);
__builtin_memmove((R+4),gp(0x890120),4);
}
B5fa35a:{NFSU2_TR(0x5fa35a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fa35c:{NFSU2_TR(0x5fa35c);
__builtin_memmove(gp(0x890128),(R+0),4);
}
B5fa361:{NFSU2_TR(0x5fa361);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fa362:{NFSU2_TR(0x5fa362);
if(r1(R+518)){{goto L5fa372;}}
}
B5fa364:L5fa364:{c.instructions+=3;NFSU2_TR(0x5fa364);
__builtin_memmove((R+4),gp(0x890124),4);
}
B5fa36a:{NFSU2_TR(0x5fa36a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fa36c:{NFSU2_TR(0x5fa36c);
if(r1(R+518)){{goto L5fa372;}}
}
B5fa36e:L5fa36e:{c.instructions+=2;NFSU2_TR(0x5fa36e);
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
B5fa370:{NFSU2_TR(0x5fa370);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fa384;}}
}
B5fa372:L5fa372:{c.instructions+=2;NFSU2_TR(0x5fa372);
__builtin_memmove((R+4),(R+28),4);
}
B5fa374:{NFSU2_TR(0x5fa374);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa379ull));
TAIL_STATIC(0x5f08f0u,5f0);
}
B5fa379:L5fa379:{c.instructions+=3;NFSU2_TR(0x5fa379);
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
B5fa37b:{NFSU2_TR(0x5fa37b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fa37c:{NFSU2_TR(0x5fa37c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fa37f:L5fa37f:{c.instructions+=1;NFSU2_TR(0x5fa37f);
__builtin_memmove((R+0),gp(0x890128),4);
}
B5fa384:L5fa384:{c.instructions+=1;NFSU2_TR(0x5fa384);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa386ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5fa386:L5fa386:{c.instructions+=2;NFSU2_TR(0x5fa386);
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
B5fa388:{NFSU2_TR(0x5fa388);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fa3a6;}}
}
B5fa38a:L5fa38a:{c.instructions+=3;NFSU2_TR(0x5fa38a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa38c:{NFSU2_TR(0x5fa38c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa38e:{NFSU2_TR(0x5fa38e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa393ull));
TAIL_STATIC(0x570a30u,570);
}
B5fa393:L5fa393:{c.instructions+=4;NFSU2_TR(0x5fa393);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fa397:{NFSU2_TR(0x5fa397);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa398:{NFSU2_TR(0x5fa398);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa399:{NFSU2_TR(0x5fa399);
u8 U[4];
__builtin_memmove((U+0),gp(0x890120),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa39full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5fa39f:L5fa39f:{c.instructions+=3;NFSU2_TR(0x5fa39f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5fa3a2:{NFSU2_TR(0x5fa3a2);
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
B5fa3a4:{NFSU2_TR(0x5fa3a4);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fa379u);}goto L5fa379;}}
}
B5fa3a6:L5fa3a6:{c.instructions+=3;NFSU2_TR(0x5fa3a6);
w1(R+0,u8(0x1ull));
}
B5fa3a8:{NFSU2_TR(0x5fa3a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fa3a9:{NFSU2_TR(0x5fa3a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fa3b0:L5fa3b0:{c.instructions+=10;NFSU2_TR(0x5fa3b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa3b1:{NFSU2_TR(0x5fa3b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa3b2:{NFSU2_TR(0x5fa3b2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5fa3b6:{NFSU2_TR(0x5fa3b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5fa3b8:{NFSU2_TR(0x5fa3b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fa3bb:{NFSU2_TR(0x5fa3bb);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B5fa3bf:{NFSU2_TR(0x5fa3bf);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B5fa3c2:{NFSU2_TR(0x5fa3c2);
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
B5fa3c4:{NFSU2_TR(0x5fa3c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5fa3c6:{NFSU2_TR(0x5fa3c6);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5fa4b4;}}
}
B5fa3cc:L5fa3cc:{c.instructions+=3;NFSU2_TR(0x5fa3cc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa3cd:{NFSU2_TR(0x5fa3cd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa3ce:{NFSU2_TR(0x5fa3ce);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5fa3d0:L5fa3d0:{c.instructions+=5;NFSU2_TR(0x5fa3d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5fa3d2:{NFSU2_TR(0x5fa3d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5fa3d4:{NFSU2_TR(0x5fa3d4);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xfffc49feull))));
}
B5fa3da:{NFSU2_TR(0x5fa3da);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B5fa3dd:{NFSU2_TR(0x5fa3dd);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5fa49f;}}
}
B5fa3e3:L5fa3e3:{c.instructions+=1;NFSU2_TR(0x5fa3e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5fa4bcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5fa3ea:L5fa3ea:{c.instructions+=8;NFSU2_TR(0x5fa3ea);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B5fa3ed:{NFSU2_TR(0x5fa3ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fa3f0:{NFSU2_TR(0x5fa3f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fa3f3:{NFSU2_TR(0x5fa3f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fa3f6:{NFSU2_TR(0x5fa3f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fa3f9:{NFSU2_TR(0x5fa3f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fa3fc:{NFSU2_TR(0x5fa3fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fa3ff:{NFSU2_TR(0x5fa3ff);
{goto L5fa49f;}
}
B5fa404:L5fa404:{c.instructions+=3;NFSU2_TR(0x5fa404);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fa407:{NFSU2_TR(0x5fa407);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fa409:{NFSU2_TR(0x5fa409);
if(r1(R+518)){{goto L5fa49f;}}
}
B5fa40f:L5fa40f:{c.instructions+=5;NFSU2_TR(0x5fa40f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fa412:{NFSU2_TR(0x5fa412);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5fa415:{NFSU2_TR(0x5fa415);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5fa418:{NFSU2_TR(0x5fa418);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fa41a:{NFSU2_TR(0x5fa41a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fa49f;}}
}
B5fa420:L5fa420:{c.instructions+=3;NFSU2_TR(0x5fa420);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B5fa423:{NFSU2_TR(0x5fa423);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fa426:{NFSU2_TR(0x5fa426);
{goto L5fa49f;}
}
B5fa428:L5fa428:{c.instructions+=3;NFSU2_TR(0x5fa428);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fa42b:{NFSU2_TR(0x5fa42b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fa42d:{NFSU2_TR(0x5fa42d);
if(r1(R+518)){{goto L5fa49f;}}
}
B5fa42f:L5fa42f:{c.instructions+=5;NFSU2_TR(0x5fa42f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fa432:{NFSU2_TR(0x5fa432);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5fa435:{NFSU2_TR(0x5fa435);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5fa438:{NFSU2_TR(0x5fa438);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fa43a:{NFSU2_TR(0x5fa43a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fa49f;}}
}
B5fa43c:L5fa43c:{c.instructions+=3;NFSU2_TR(0x5fa43c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B5fa43f:{NFSU2_TR(0x5fa43f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fa442:{NFSU2_TR(0x5fa442);
{goto L5fa49f;}
}
B5fa444:L5fa444:{c.instructions+=3;NFSU2_TR(0x5fa444);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fa447:{NFSU2_TR(0x5fa447);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fa449:{NFSU2_TR(0x5fa449);
if(r1(R+518)){{goto L5fa49f;}}
}
B5fa44b:L5fa44b:{c.instructions+=2;NFSU2_TR(0x5fa44b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5fa44e:{NFSU2_TR(0x5fa44e);
if(r1(R+518)){{goto L5fa49f;}}
}
B5fa450:L5fa450:{c.instructions+=2;NFSU2_TR(0x5fa450);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5fa453:{NFSU2_TR(0x5fa453);
if(r1(R+518)){{goto L5fa49f;}}
}
B5fa455:L5fa455:{c.instructions+=4;NFSU2_TR(0x5fa455);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5fa458:{NFSU2_TR(0x5fa458);
u8 U[32];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
w8(U+8,u64(s64(s32(r4(R+20)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+20,u32(r8(U+24)));
}
B5fa45c:{NFSU2_TR(0x5fa45c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5fa45f:{NFSU2_TR(0x5fa45f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fa49f;}}
}
B5fa461:L5fa461:{c.instructions+=3;NFSU2_TR(0x5fa461);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B5fa464:{NFSU2_TR(0x5fa464);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fa467:{NFSU2_TR(0x5fa467);
{goto L5fa49f;}
}
B5fa469:L5fa469:{c.instructions+=3;NFSU2_TR(0x5fa469);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fa46c:{NFSU2_TR(0x5fa46c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fa46e:{NFSU2_TR(0x5fa46e);
if(r1(R+518)){{goto L5fa49f;}}
}
B5fa470:L5fa470:{c.instructions+=5;NFSU2_TR(0x5fa470);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fa473:{NFSU2_TR(0x5fa473);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5fa476:{NFSU2_TR(0x5fa476);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5fa479:{NFSU2_TR(0x5fa479);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fa47b:{NFSU2_TR(0x5fa47b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fa49f;}}
}
B5fa47d:L5fa47d:{c.instructions+=3;NFSU2_TR(0x5fa47d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B5fa480:{NFSU2_TR(0x5fa480);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fa483:{NFSU2_TR(0x5fa483);
{goto L5fa49f;}
}
B5fa485:L5fa485:{c.instructions+=3;NFSU2_TR(0x5fa485);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fa488:{NFSU2_TR(0x5fa488);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fa48a:{NFSU2_TR(0x5fa48a);
if(r1(R+518)){{goto L5fa49f;}}
}
B5fa48c:L5fa48c:{c.instructions+=5;NFSU2_TR(0x5fa48c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fa48f:{NFSU2_TR(0x5fa48f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5fa492:{NFSU2_TR(0x5fa492);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5fa495:{NFSU2_TR(0x5fa495);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fa497:{NFSU2_TR(0x5fa497);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fa49f;}}
}
B5fa499:L5fa499:{c.instructions+=2;NFSU2_TR(0x5fa499);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B5fa49c:{NFSU2_TR(0x5fa49c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fa49f:L5fa49f:{c.instructions+=6;NFSU2_TR(0x5fa49f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5fa4a1:{NFSU2_TR(0x5fa4a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fa4a4:{NFSU2_TR(0x5fa4a4);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5fa4a8:{NFSU2_TR(0x5fa4a8);
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
B5fa4aa:{NFSU2_TR(0x5fa4aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5fa4ac:{NFSU2_TR(0x5fa4ac);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fa3d0u);}goto L5fa3d0;}}
}
B5fa4b2:L5fa4b2:{c.instructions+=2;NFSU2_TR(0x5fa4b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fa4b3:{NFSU2_TR(0x5fa4b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5fa4b4:L5fa4b4:{c.instructions+=3;NFSU2_TR(0x5fa4b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fa4b5:{NFSU2_TR(0x5fa4b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fa4b6:{NFSU2_TR(0x5fa4b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fa4e0:L5fa4e0:{c.instructions+=6;NFSU2_TR(0x5fa4e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa4e1:{NFSU2_TR(0x5fa4e1);
__builtin_memmove((R+24),(R+4),4);
}
B5fa4e3:{NFSU2_TR(0x5fa4e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fa4e6:{NFSU2_TR(0x5fa4e6);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5fa4e8:{NFSU2_TR(0x5fa4e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fa4ea:{NFSU2_TR(0x5fa4ea);
if(r1(R+518)){{goto L5fa50f;}}
}
B5fa4ec:L5fa4ec:{c.instructions+=6;NFSU2_TR(0x5fa4ec);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fa4f0:{NFSU2_TR(0x5fa4f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fa4f4:{NFSU2_TR(0x5fa4f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa4f5:{NFSU2_TR(0x5fa4f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa4f6:{NFSU2_TR(0x5fa4f6);
__builtin_memmove((R+4),(R+24),4);
}
B5fa4f8:{NFSU2_TR(0x5fa4f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa4fdull));
TAIL_STATIC(0x5f0930u,5f0);
}
B5fa4fd:L5fa4fd:{c.instructions+=7;NFSU2_TR(0x5fa4fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fa500:{NFSU2_TR(0x5fa500);
__builtin_memmove((R+4),(R+0),4);
}
B5fa502:{NFSU2_TR(0x5fa502);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fa505:{NFSU2_TR(0x5fa505);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5fa508:{NFSU2_TR(0x5fa508);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5fa50b:{NFSU2_TR(0x5fa50b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fa50c:{NFSU2_TR(0x5fa50c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fa50f:L5fa50f:{c.instructions+=3;NFSU2_TR(0x5fa50f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fa512:{NFSU2_TR(0x5fa512);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fa514:{NFSU2_TR(0x5fa514);
if(r1(R+518)){{goto L5fa529;}}
}
B5fa516:L5fa516:{c.instructions+=6;NFSU2_TR(0x5fa516);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fa51a:{NFSU2_TR(0x5fa51a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fa51e:{NFSU2_TR(0x5fa51e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa51f:{NFSU2_TR(0x5fa51f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa520:{NFSU2_TR(0x5fa520);
__builtin_memmove((R+4),(R+24),4);
}
B5fa522:{NFSU2_TR(0x5fa522);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa527ull));
TAIL_STATIC(0x5f0a30u,5f0);
}
B5fa527:L5fa527:{c.instructions+=1;NFSU2_TR(0x5fa527);
__builtin_memmove((R+4),(R+0),4);
}
B5fa529:L5fa529:{c.instructions+=6;NFSU2_TR(0x5fa529);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fa52c:{NFSU2_TR(0x5fa52c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fa52f:{NFSU2_TR(0x5fa52f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5fa532:{NFSU2_TR(0x5fa532);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5fa535:{NFSU2_TR(0x5fa535);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fa536:{NFSU2_TR(0x5fa536);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fa540:L5fa540:{c.instructions+=5;NFSU2_TR(0x5fa540);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa541:{NFSU2_TR(0x5fa541);
__builtin_memmove((R+24),(R+4),4);
}
B5fa543:{NFSU2_TR(0x5fa543);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fa546:{NFSU2_TR(0x5fa546);
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
B5fa548:{NFSU2_TR(0x5fa548);
if(r1(R+518)){{goto L5fa560;}}
}
B5fa54a:L5fa54a:{c.instructions+=5;NFSU2_TR(0x5fa54a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fa54e:{NFSU2_TR(0x5fa54e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fa552:{NFSU2_TR(0x5fa552);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa553:{NFSU2_TR(0x5fa553);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa554:{NFSU2_TR(0x5fa554);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa559ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fa4e0u);}goto L5fa4e0;}
}
B5fa559:L5fa559:{c.instructions+=3;NFSU2_TR(0x5fa559);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fa55c:{NFSU2_TR(0x5fa55c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fa55d:{NFSU2_TR(0x5fa55d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fa560:L5fa560:{c.instructions+=3;NFSU2_TR(0x5fa560);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fa567:{NFSU2_TR(0x5fa567);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fa568:{NFSU2_TR(0x5fa568);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fa570:L5fa570:{c.instructions+=7;NFSU2_TR(0x5fa570);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa571:{NFSU2_TR(0x5fa571);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa572:{NFSU2_TR(0x5fa572);
__builtin_memmove((R+20),(R+4),4);
}
B5fa574:{NFSU2_TR(0x5fa574);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5fa577:{NFSU2_TR(0x5fa577);
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
B5fa579:{NFSU2_TR(0x5fa579);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa57a:{NFSU2_TR(0x5fa57a);
if(r1(R+518)){{goto L5fa652;}}
}
B5fa580:L5fa580:{c.instructions+=3;NFSU2_TR(0x5fa580);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5fa583:{NFSU2_TR(0x5fa583);
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
B5fa585:{NFSU2_TR(0x5fa585);
if(r1(R+518)){{goto L5fa652;}}
}
B5fa58b:L5fa58b:{c.instructions+=7;NFSU2_TR(0x5fa58b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fa58f:{NFSU2_TR(0x5fa58f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fa593:{NFSU2_TR(0x5fa593);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa594:{NFSU2_TR(0x5fa594);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa595:{NFSU2_TR(0x5fa595);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa596:{NFSU2_TR(0x5fa596);
__builtin_memmove((R+4),(R+12),4);
}
B5fa598:{NFSU2_TR(0x5fa598);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa59dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fa4e0u);}goto L5fa4e0;}
}
B5fa59d:L5fa59d:{c.instructions+=4;NFSU2_TR(0x5fa59d);
__builtin_memmove((R+24),(R+0),4);
}
B5fa59f:{NFSU2_TR(0x5fa59f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fa5a2:{NFSU2_TR(0x5fa5a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fa5a4:{NFSU2_TR(0x5fa5a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fa5d6;}}
}
B5fa5a6:L5fa5a6:{c.instructions+=3;NFSU2_TR(0x5fa5a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5fa5a9:{NFSU2_TR(0x5fa5a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fa5ab:{NFSU2_TR(0x5fa5ab);
if(r1(R+518)){{goto L5fa5b2;}}
}
B5fa5ad:L5fa5ad:{c.instructions+=2;NFSU2_TR(0x5fa5ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fa5b0:{NFSU2_TR(0x5fa5b0);
{goto L5fa5b4;}
}
B5fa5b2:L5fa5b2:{c.instructions+=1;NFSU2_TR(0x5fa5b2);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5fa5b4:L5fa5b4:{c.instructions+=2;NFSU2_TR(0x5fa5b4);
__builtin_memmove((R+8),(R+4),4);
}
B5fa5b6:{NFSU2_TR(0x5fa5b6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5fa5b9:L5fa5b9:{c.instructions+=1;NFSU2_TR(0x5fa5b9);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5fa5bb;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fa5b9u);}goto L5fa5b9;}
}
B5fa5bb:L5fa5bb:{c.instructions+=2;NFSU2_TR(0x5fa5bb);
__builtin_memmove((R+4),(R+8),4);
}
B5fa5bd:{NFSU2_TR(0x5fa5bd);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5fa5c0:L5fa5c0:{c.instructions+=1;NFSU2_TR(0x5fa5c0);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L5fa5c2;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fa5c0u);}goto L5fa5c0;}
}
B5fa5c2:L5fa5c2:{c.instructions+=1;NFSU2_TR(0x5fa5c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fa5c9:L5fa5c9:{c.instructions+=7;NFSU2_TR(0x5fa5c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fa5cc:{NFSU2_TR(0x5fa5cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fa5cd:{NFSU2_TR(0x5fa5cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fa5ce:{NFSU2_TR(0x5fa5ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fa5d1:{NFSU2_TR(0x5fa5d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5fa5d2:{NFSU2_TR(0x5fa5d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fa5d3:{NFSU2_TR(0x5fa5d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fa5d6:L5fa5d6:{c.instructions+=1;NFSU2_TR(0x5fa5d6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5fa5d8:L5fa5d8:{c.instructions+=4;NFSU2_TR(0x5fa5d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fa5db:{NFSU2_TR(0x5fa5db);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fa5de:{NFSU2_TR(0x5fa5de);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fa5e0:{NFSU2_TR(0x5fa5e0);
if(r1(R+518)){{goto L5fa5e7;}}
}
B5fa5e2:L5fa5e2:{c.instructions+=2;NFSU2_TR(0x5fa5e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fa5e5:{NFSU2_TR(0x5fa5e5);
{goto L5fa5e9;}
}
B5fa5e7:L5fa5e7:{c.instructions+=1;NFSU2_TR(0x5fa5e7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5fa5e9:L5fa5e9:{c.instructions+=2;NFSU2_TR(0x5fa5e9);
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
B5fa5eb:{NFSU2_TR(0x5fa5eb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fa5c9u);}goto L5fa5c9;}}
}
B5fa5ed:L5fa5ed:{c.instructions+=3;NFSU2_TR(0x5fa5ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fa5f0:{NFSU2_TR(0x5fa5f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fa5f2:{NFSU2_TR(0x5fa5f2);
if(r1(R+518)){{goto L5fa5f9;}}
}
B5fa5f4:L5fa5f4:{c.instructions+=2;NFSU2_TR(0x5fa5f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5fa5f7:{NFSU2_TR(0x5fa5f7);
{goto L5fa5fc;}
}
B5fa5f9:L5fa5f9:{c.instructions+=1;NFSU2_TR(0x5fa5f9);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B5fa5fc:L5fa5fc:{c.instructions+=3;NFSU2_TR(0x5fa5fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fa5ff:{NFSU2_TR(0x5fa5ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fa601:{NFSU2_TR(0x5fa601);
if(r1(R+518)){{goto L5fa64f;}}
}
B5fa603:L5fa603:{c.instructions+=3;NFSU2_TR(0x5fa603);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5fa606:{NFSU2_TR(0x5fa606);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5fa608:{NFSU2_TR(0x5fa608);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5fa64f;}}
}
B5fa60a:L5fa60a:{c.instructions+=4;NFSU2_TR(0x5fa60a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5fa60d:{NFSU2_TR(0x5fa60d);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B5fa60f:{NFSU2_TR(0x5fa60f);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5fa612:{NFSU2_TR(0x5fa612);
if(r1(R+518)){{goto L5fa638;}}
}
B5fa614:L5fa614:{c.instructions+=2;NFSU2_TR(0x5fa614);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5fa615:{NFSU2_TR(0x5fa615);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fa64f;}}
}
B5fa617:L5fa617:{c.instructions+=8;NFSU2_TR(0x5fa617);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fa61d:{NFSU2_TR(0x5fa61d);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5fa621:{NFSU2_TR(0x5fa621);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5fa623:{NFSU2_TR(0x5fa623);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5fa625:{NFSU2_TR(0x5fa625);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5fa628:{NFSU2_TR(0x5fa628);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fa62c:{NFSU2_TR(0x5fa62c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5fa62e:{NFSU2_TR(0x5fa62e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa633ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5fa633:L5fa633:{c.instructions+=3;NFSU2_TR(0x5fa633);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5fa635:{NFSU2_TR(0x5fa635);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5fa636:{NFSU2_TR(0x5fa636);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fa5d8u);}goto L5fa5d8;}
}
B5fa638:L5fa638:{c.instructions+=7;NFSU2_TR(0x5fa638);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fa63e:{NFSU2_TR(0x5fa63e);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5fa642:{NFSU2_TR(0x5fa642);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fa644:{NFSU2_TR(0x5fa644);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fa648:{NFSU2_TR(0x5fa648);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fa64b:{NFSU2_TR(0x5fa64b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5fa64d:{NFSU2_TR(0x5fa64d);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fa64f:L5fa64f:{c.instructions+=2;NFSU2_TR(0x5fa64f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5fa650:{NFSU2_TR(0x5fa650);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fa5d8u);}goto L5fa5d8;}
}
B5fa652:L5fa652:{c.instructions+=5;NFSU2_TR(0x5fa652);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fa653:{NFSU2_TR(0x5fa653);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fa65a:{NFSU2_TR(0x5fa65a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5fa65b:{NFSU2_TR(0x5fa65b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fa65c:{NFSU2_TR(0x5fa65c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fa660:L5fa660:{c.instructions+=7;NFSU2_TR(0x5fa660);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa661:{NFSU2_TR(0x5fa661);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa662:{NFSU2_TR(0x5fa662);
__builtin_memmove((R+24),(R+4),4);
}
B5fa664:{NFSU2_TR(0x5fa664);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fa667:{NFSU2_TR(0x5fa667);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fa669:{NFSU2_TR(0x5fa669);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fa671:{NFSU2_TR(0x5fa671);
if(r1(R+518)){{goto L5fa6b9;}}
}
B5fa673:L5fa673:{c.instructions+=5;NFSU2_TR(0x5fa673);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fa677:{NFSU2_TR(0x5fa677);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fa67d:{NFSU2_TR(0x5fa67d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fa67f:{NFSU2_TR(0x5fa67f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5fa682:{NFSU2_TR(0x5fa682);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5fa6b9;}}
}
B5fa684:L5fa684:{c.instructions+=16;NFSU2_TR(0x5fa684);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fa688:{NFSU2_TR(0x5fa688);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5fa68b:{NFSU2_TR(0x5fa68b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fa68f:{NFSU2_TR(0x5fa68f);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5fa692:{NFSU2_TR(0x5fa692);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5fa694:{NFSU2_TR(0x5fa694);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5fa696:{NFSU2_TR(0x5fa696);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5fa698:{NFSU2_TR(0x5fa698);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5fa69a:{NFSU2_TR(0x5fa69a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5fa69c:{NFSU2_TR(0x5fa69c);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5fa69e:{NFSU2_TR(0x5fa69e);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5fa6a0:{NFSU2_TR(0x5fa6a0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5fa6a2:{NFSU2_TR(0x5fa6a2);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5fa6a6:{NFSU2_TR(0x5fa6a6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fa6a8:{NFSU2_TR(0x5fa6a8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5fa6ab:{NFSU2_TR(0x5fa6ab);
if(r1(R+514)){{goto L5fa6b7;}}
}
B5fa6ad:L5fa6ad:{c.instructions+=3;NFSU2_TR(0x5fa6ad);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5fa6b1:{NFSU2_TR(0x5fa6b1);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fa6b5:{NFSU2_TR(0x5fa6b5);
{goto L5fa6b9;}
}
B5fa6b7:L5fa6b7:{c.instructions+=1;NFSU2_TR(0x5fa6b7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5fa6b9:L5fa6b9:{c.instructions+=8;NFSU2_TR(0x5fa6b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fa6bd:{NFSU2_TR(0x5fa6bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fa6c1:{NFSU2_TR(0x5fa6c1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fa6c5:{NFSU2_TR(0x5fa6c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa6c6:{NFSU2_TR(0x5fa6c6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa6c7:{NFSU2_TR(0x5fa6c7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa6c8:{NFSU2_TR(0x5fa6c8);
__builtin_memmove((R+4),(R+24),4);
}
B5fa6ca:{NFSU2_TR(0x5fa6ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa6cfull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fa570u);}goto L5fa570;}
}
B5fa6cf:L5fa6cf:{c.instructions+=8;NFSU2_TR(0x5fa6cf);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fa6d3:{NFSU2_TR(0x5fa6d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fa6d7:{NFSU2_TR(0x5fa6d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fa6de:{NFSU2_TR(0x5fa6de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fa6e1:{NFSU2_TR(0x5fa6e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fa6e4:{NFSU2_TR(0x5fa6e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fa6e5:{NFSU2_TR(0x5fa6e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fa6e6:{NFSU2_TR(0x5fa6e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fa6f0:L5fa6f0:{c.instructions+=6;NFSU2_TR(0x5fa6f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa6f1:{NFSU2_TR(0x5fa6f1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa6f2:{NFSU2_TR(0x5fa6f2);
__builtin_memmove((R+28),(R+4),4);
}
B5fa6f4:{NFSU2_TR(0x5fa6f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5fa6f6:{NFSU2_TR(0x5fa6f6);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B5fa6f8:{NFSU2_TR(0x5fa6f8);
if(r1(R+518)){{goto L5fa726;}}
}
B5fa6fa:L5fa6fa:{c.instructions+=1;NFSU2_TR(0x5fa6fa);
__builtin_memmove((R+12),(R+12),4);
}
B5fa700:L5fa700:{c.instructions+=6;NFSU2_TR(0x5fa700);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fa703:{NFSU2_TR(0x5fa703);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5fa705:{NFSU2_TR(0x5fa705);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5fa707:{NFSU2_TR(0x5fa707);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fa70a:{NFSU2_TR(0x5fa70a);
__builtin_memmove((R+4),(R+24),4);
}
B5fa70c:{NFSU2_TR(0x5fa70c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa711ull));
TAIL_STATIC(0x5a9570u,5a9);
}
B5fa711:L5fa711:{c.instructions+=4;NFSU2_TR(0x5fa711);
__builtin_memmove((R+0),gp(0x86b240),4);
}
B5fa716:{NFSU2_TR(0x5fa716);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa717:{NFSU2_TR(0x5fa717);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa718:{NFSU2_TR(0x5fa718);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa71dull));
TAIL_STATIC(0x43f920u,43f);
}
B5fa71d:L5fa71d:{c.instructions+=4;NFSU2_TR(0x5fa71d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5fa71f:{NFSU2_TR(0x5fa71f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5fa722:{NFSU2_TR(0x5fa722);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B5fa724:{NFSU2_TR(0x5fa724);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fa700u);}goto L5fa700;}}
}
B5fa726:L5fa726:{c.instructions+=3;NFSU2_TR(0x5fa726);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fa727:{NFSU2_TR(0x5fa727);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fa728:{NFSU2_TR(0x5fa728);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fa730:L5fa730:{c.instructions+=5;NFSU2_TR(0x5fa730);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa731:{NFSU2_TR(0x5fa731);
__builtin_memmove((R+24),(R+4),4);
}
B5fa733:{NFSU2_TR(0x5fa733);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5fa735:{NFSU2_TR(0x5fa735);
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
B5fa737:{NFSU2_TR(0x5fa737);
if(r1(R+518)){{goto L5fa75f;}}
}
B5fa739:L5fa739:{c.instructions+=1;NFSU2_TR(0x5fa739);
__builtin_memmove((R+16),(R+16),4);
}
B5fa740:L5fa740:{c.instructions+=8;NFSU2_TR(0x5fa740);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5fa742:{NFSU2_TR(0x5fa742);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fa745:{NFSU2_TR(0x5fa745);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5fa747:{NFSU2_TR(0x5fa747);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa748:{NFSU2_TR(0x5fa748);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fa74b:{NFSU2_TR(0x5fa74b);
__builtin_memmove((R+0),gp(0x89012c),4);
}
B5fa750:{NFSU2_TR(0x5fa750);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa751:{NFSU2_TR(0x5fa751);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa756ull));
TAIL_STATIC(0x43f920u,43f);
}
B5fa756:L5fa756:{c.instructions+=4;NFSU2_TR(0x5fa756);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5fa758:{NFSU2_TR(0x5fa758);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5fa75b:{NFSU2_TR(0x5fa75b);
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
B5fa75d:{NFSU2_TR(0x5fa75d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fa740u);}goto L5fa740;}}
}
B5fa75f:L5fa75f:{c.instructions+=2;NFSU2_TR(0x5fa75f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fa760:{NFSU2_TR(0x5fa760);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fa770:L5fa770:{c.instructions+=5;NFSU2_TR(0x5fa770);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa771:{NFSU2_TR(0x5fa771);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa772:{NFSU2_TR(0x5fa772);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa773:{NFSU2_TR(0x5fa773);
__builtin_memmove((R+24),(R+4),4);
}
B5fa775:{NFSU2_TR(0x5fa775);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa77aull));
TAIL_STATIC(0x5f0f70u,5f0);
}
B5fa77a:L5fa77a:{c.instructions+=7;NFSU2_TR(0x5fa77a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa77c:{NFSU2_TR(0x5fa77c);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa77e:{NFSU2_TR(0x5fa77e);
__builtin_memmove((R+12),(R+0),4);
}
B5fa780:{NFSU2_TR(0x5fa780);
__builtin_memmove((R+0),gp(0x8650d0),4);
}
B5fa785:{NFSU2_TR(0x5fa785);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fa787:{NFSU2_TR(0x5fa787);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fa78b:{NFSU2_TR(0x5fa78b);
if(r1(R+518)){{goto L5fa7a1;}}
}
B5fa78d:L5fa78d:{c.instructions+=1;NFSU2_TR(0x5fa78d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa792ull));
TAIL_STATIC(0x57e3b0u,57e);
}
B5fa792:L5fa792:{c.instructions+=3;NFSU2_TR(0x5fa792);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5fa795:{NFSU2_TR(0x5fa795);
u8 U[4];
__builtin_memmove((U+0),(R+12),2);
w2(U+2,u16(u32(r2(R+0))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B5fa798:{NFSU2_TR(0x5fa798);
if(r1(R+518)){{goto L5fa7ad;}}
}
B5fa79a:L5fa79a:{c.instructions+=1;NFSU2_TR(0x5fa79a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa79full));
TAIL_STATIC(0x573070u,573);
}
B5fa79f:L5fa79f:{c.instructions+=1;NFSU2_TR(0x5fa79f);
{goto L5fa7ad;}
}
B5fa7a1:L5fa7a1:{c.instructions+=3;NFSU2_TR(0x5fa7a1);
w4(R+0,u32(r2(R+12)));
}
B5fa7a4:{NFSU2_TR(0x5fa7a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa7a5:{NFSU2_TR(0x5fa7a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa7aaull));
TAIL_STATIC(0x57d670u,57d);
}
B5fa7aa:L5fa7aa:{c.instructions+=1;NFSU2_TR(0x5fa7aa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5fa7ad:L5fa7ad:{c.instructions+=9;NFSU2_TR(0x5fa7ad);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5fa7b3:{NFSU2_TR(0x5fa7b3);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5fa7b7:{NFSU2_TR(0x5fa7b7);
__builtin_memmove((R+12),(R+13),1);
}
B5fa7b9:{NFSU2_TR(0x5fa7b9);
w1(R+12,u8(u32(r1(R+12))+u32(r1(R+8))));
}
B5fa7bb:{NFSU2_TR(0x5fa7bb);
w1(R+12,u8(u32(r1(R+12))+u32(r1(R+4))));
}
B5fa7bd:{NFSU2_TR(0x5fa7bd);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B5fa7c3:{NFSU2_TR(0x5fa7c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fa7c6:{NFSU2_TR(0x5fa7c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fa7c8:{NFSU2_TR(0x5fa7c8);
if(r1(R+518)){{goto L5fa7db;}}
}
B5fa7ca:L5fa7ca:{c.instructions+=5;NFSU2_TR(0x5fa7ca);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa7cc:{NFSU2_TR(0x5fa7cc);
w4(R+8,u32(r1(R+12)));
}
B5fa7cf:{NFSU2_TR(0x5fa7cf);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa7d1:{NFSU2_TR(0x5fa7d1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa7d2:{NFSU2_TR(0x5fa7d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa7d7ull));
TAIL_STATIC(0x579130u,579);
}
B5fa7d7:L5fa7d7:{c.instructions+=4;NFSU2_TR(0x5fa7d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fa7d8:{NFSU2_TR(0x5fa7d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fa7d9:{NFSU2_TR(0x5fa7d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fa7da:{NFSU2_TR(0x5fa7da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fa7db:L5fa7db:{c.instructions+=2;NFSU2_TR(0x5fa7db);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x0ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5fa7de:{NFSU2_TR(0x5fa7de);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fa7d7u);}goto L5fa7d7;}}
}
B5fa7e0:L5fa7e0:{c.instructions+=3;NFSU2_TR(0x5fa7e0);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa7e2:{NFSU2_TR(0x5fa7e2);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa7e4:{NFSU2_TR(0x5fa7e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa7e9ull));
TAIL_STATIC(0x5790e0u,579);
}
B5fa7e9:L5fa7e9:{c.instructions+=2;NFSU2_TR(0x5fa7e9);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
w1(R+512,u8((r1(R+0))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+0),r1(U+3)));
w1(U+4,u8(u32(r1(R+0))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5fa7eb:{NFSU2_TR(0x5fa7eb);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fa7d7u);}goto L5fa7d7;}}
}
B5fa7ed:L5fa7ed:{c.instructions+=6;NFSU2_TR(0x5fa7ed);
__builtin_memmove((R+0),gp(0x8650b8),4);
}
B5fa7f2:{NFSU2_TR(0x5fa7f2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa7f4:{NFSU2_TR(0x5fa7f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fa7fb:{NFSU2_TR(0x5fa7fb);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B5fa801:{NFSU2_TR(0x5fa801);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa803:{NFSU2_TR(0x5fa803);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa808ull));
TAIL_STATIC(0x5f41e0u,5f4);
}
B5fa808:L5fa808:{c.instructions+=4;NFSU2_TR(0x5fa808);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fa809:{NFSU2_TR(0x5fa809);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fa80a:{NFSU2_TR(0x5fa80a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5fa80d:{NFSU2_TR(0x5fa80d);
TAIL_STATIC(0x4d8020u,4d8);
}
B5fa820:L5fa820:{c.instructions+=11;NFSU2_TR(0x5fa820);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa821:{NFSU2_TR(0x5fa821);
__builtin_memmove((R+20),(R+16),4);
}
B5fa823:{NFSU2_TR(0x5fa823);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa824:{NFSU2_TR(0x5fa824);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa825:{NFSU2_TR(0x5fa825);
__builtin_memmove((R+24),(R+4),4);
}
B5fa827:{NFSU2_TR(0x5fa827);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fa82d:{NFSU2_TR(0x5fa82d);
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
B5fa82f:{NFSU2_TR(0x5fa82f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa830:{NFSU2_TR(0x5fa830);
w4(R+28,u32(0x1ull));
}
B5fa835:{NFSU2_TR(0x5fa835);
__builtin_memmove((R+12),(R+28),4);
}
B5fa837:{NFSU2_TR(0x5fa837);
if(r1(R+518)){{goto L5fa83c;}}
}
B5fa839:L5fa839:{c.instructions+=1;NFSU2_TR(0x5fa839);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5fa83c:L5fa83c:{c.instructions+=2;NFSU2_TR(0x5fa83c);
w4(R+4,u32(0x85ef50ull));
}
B5fa841:{NFSU2_TR(0x5fa841);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa846ull));
TAIL_STATIC(0x5012c0u,501);
}
B5fa846:L5fa846:{c.instructions+=2;NFSU2_TR(0x5fa846);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fa848:{NFSU2_TR(0x5fa848);
if(r1(R+518)){{goto L5fa84f;}}
}
B5fa84a:L5fa84a:{c.instructions+=1;NFSU2_TR(0x5fa84a);
w4(R+28,u32(0x14ull));
}
B5fa84f:L5fa84f:{c.instructions+=4;NFSU2_TR(0x5fa84f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa851:{NFSU2_TR(0x5fa851);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa852:{NFSU2_TR(0x5fa852);
__builtin_memmove((R+4),(R+24),4);
}
B5fa854:{NFSU2_TR(0x5fa854);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa859ull));
TAIL_STATIC(0x5f1fd0u,5f1);
}
B5fa859:L5fa859:{c.instructions+=2;NFSU2_TR(0x5fa859);
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
B5fa85b:{NFSU2_TR(0x5fa85b);
if(r1(R+518)){{goto L5fa876;}}
}
B5fa85d:L5fa85d:{c.instructions+=1;NFSU2_TR(0x5fa85d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa862ull));
TAIL_STATIC(0x5d7ae0u,5d7);
}
B5fa862:L5fa862:{c.instructions+=1;NFSU2_TR(0x5fa862);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa867ull));
TAIL_STATIC(0x5729e0u,572);
}
B5fa867:L5fa867:{c.instructions+=3;NFSU2_TR(0x5fa867);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fa86d:{NFSU2_TR(0x5fa86d);
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
B5fa86f:{NFSU2_TR(0x5fa86f);
if(r1(R+518)){{goto L5fa876;}}
}
B5fa871:L5fa871:{c.instructions+=2;NFSU2_TR(0x5fa871);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5fa873:{NFSU2_TR(0x5fa873);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa876ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5fa876:L5fa876:{c.instructions+=5;NFSU2_TR(0x5fa876);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fa877:{NFSU2_TR(0x5fa877);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fa878:{NFSU2_TR(0x5fa878);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fa879:{NFSU2_TR(0x5fa879);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5fa87a:{NFSU2_TR(0x5fa87a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fa880:L5fa880:{c.instructions+=3;NFSU2_TR(0x5fa880);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fa884:{NFSU2_TR(0x5fa884);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xbdull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xbdull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xbdull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5fa889:{NFSU2_TR(0x5fa889);
if(r1(R+518)){{goto L5fa8c9;}}
}
B5fa88b:L5fa88b:{c.instructions+=1;NFSU2_TR(0x5fa88b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5fa8f4;}}
}
B5fa88d:L5fa88d:{c.instructions+=2;NFSU2_TR(0x5fa88d);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xbfull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xbfull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xbfull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5fa892:{NFSU2_TR(0x5fa892);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5fa8f4;}}
}
B5fa894:L5fa894:{c.instructions+=3;NFSU2_TR(0x5fa894);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B5fa899:{NFSU2_TR(0x5fa899);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fa89b:{NFSU2_TR(0x5fa89b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fa8ba;}}
}
B5fa89d:L5fa89d:{c.instructions+=2;NFSU2_TR(0x5fa89d);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fa8a4:{NFSU2_TR(0x5fa8a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fa8ba;}}
}
B5fa8a6:L5fa8a6:{c.instructions+=2;NFSU2_TR(0x5fa8a6);
w4(R+4,u32(0x827e88ull));
}
B5fa8ab:{NFSU2_TR(0x5fa8ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa8b0ull));
TAIL_STATIC(0x43bc30u,43b);
}
B5fa8b0:L5fa8b0:{c.instructions+=2;NFSU2_TR(0x5fa8b0);
w4(R+4,u32(0x827e88ull));
}
B5fa8b5:{NFSU2_TR(0x5fa8b5);
TAIL_STATIC(0x43bb10u,43b);
}
B5fa8ba:L5fa8ba:{c.instructions+=3;NFSU2_TR(0x5fa8ba);
__builtin_memmove((R+0),gp(0x89e7e6),1);
}
B5fa8bf:{NFSU2_TR(0x5fa8bf);
w4(R+4,u32(0x827e88ull));
}
B5fa8c4:{NFSU2_TR(0x5fa8c4);
TAIL_STATIC(0x43b460u,43b);
}
B5fa8c9:L5fa8c9:{c.instructions+=4;NFSU2_TR(0x5fa8c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fa8cd:{NFSU2_TR(0x5fa8cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fa8d0:{NFSU2_TR(0x5fa8d0);
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
B5fa8d2:{NFSU2_TR(0x5fa8d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fa8f4;}}
}
B5fa8d4:L5fa8d4:{c.instructions+=2;NFSU2_TR(0x5fa8d4);
w4(R+4,u32(0x827e88ull));
}
B5fa8d9:{NFSU2_TR(0x5fa8d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa8deull));
TAIL_STATIC(0x430560u,430);
}
B5fa8de:L5fa8de:{c.instructions+=2;NFSU2_TR(0x5fa8de);
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
B5fa8e0:{NFSU2_TR(0x5fa8e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fa8f4;}}
}
B5fa8e2:L5fa8e2:{c.instructions+=5;NFSU2_TR(0x5fa8e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fa8e6:{NFSU2_TR(0x5fa8e6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa8e7:{NFSU2_TR(0x5fa8e7);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B5fa8ed:{NFSU2_TR(0x5fa8ed);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa8ef:{NFSU2_TR(0x5fa8ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa8f4ull));
TAIL_STATIC(0x5f41e0u,5f4);
}
B5fa8f4:L5fa8f4:{c.instructions+=1;NFSU2_TR(0x5fa8f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fa900:L5fa900:{c.instructions+=3;NFSU2_TR(0x5fa900);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fa904:{NFSU2_TR(0x5fa904);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xbdull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xbdull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xbdull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5fa909:{NFSU2_TR(0x5fa909);
if(r1(R+518)){{goto L5fa927;}}
}
B5fa90b:L5fa90b:{c.instructions+=1;NFSU2_TR(0x5fa90b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5fa96e;}}
}
B5fa90d:L5fa90d:{c.instructions+=2;NFSU2_TR(0x5fa90d);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xbfull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xbfull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xbfull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5fa912:{NFSU2_TR(0x5fa912);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5fa96e;}}
}
B5fa914:L5fa914:{c.instructions+=3;NFSU2_TR(0x5fa914);
__builtin_memmove((R+0),gp(0x89e7e6),1);
}
B5fa919:{NFSU2_TR(0x5fa919);
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
B5fa91b:{NFSU2_TR(0x5fa91b);
if(r1(R+518)){{goto L5fa96e;}}
}
B5fa91d:L5fa91d:{c.instructions+=2;NFSU2_TR(0x5fa91d);
w4(R+4,u32(0x827e88ull));
}
B5fa922:{NFSU2_TR(0x5fa922);
TAIL_STATIC(0x43b760u,43b);
}
B5fa927:L5fa927:{c.instructions+=3;NFSU2_TR(0x5fa927);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B5fa92c:{NFSU2_TR(0x5fa92c);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x5ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5fa92f:{NFSU2_TR(0x5fa92f);
if(r1(R+518)){{goto L5fa96e;}}
}
B5fa931:L5fa931:{c.instructions+=2;NFSU2_TR(0x5fa931);
w4(R+4,u32(0x827e88ull));
}
B5fa936:{NFSU2_TR(0x5fa936);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa93bull));
TAIL_STATIC(0x430560u,430);
}
B5fa93b:L5fa93b:{c.instructions+=2;NFSU2_TR(0x5fa93b);
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
B5fa93d:{NFSU2_TR(0x5fa93d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fa96e;}}
}
B5fa93f:L5fa93f:{c.instructions+=2;NFSU2_TR(0x5fa93f);
__builtin_memmove((R+4),gp(0x890118),4);
}
B5fa945:{NFSU2_TR(0x5fa945);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa94aull));
TAIL_STATIC(0x5f85b0u,5f8);
}
B5fa94a:L5fa94a:{c.instructions+=2;NFSU2_TR(0x5fa94a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fa94c:{NFSU2_TR(0x5fa94c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fa95c;}}
}
B5fa94e:L5fa94e:{c.instructions+=2;NFSU2_TR(0x5fa94e);
w4(R+4,u32(0x89cf48ull));
}
B5fa953:{NFSU2_TR(0x5fa953);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa958ull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B5fa958:L5fa958:{c.instructions+=2;NFSU2_TR(0x5fa958);
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
B5fa95a:{NFSU2_TR(0x5fa95a);
if(r1(R+518)){{goto L5fa96e;}}
}
B5fa95c:L5fa95c:{c.instructions+=5;NFSU2_TR(0x5fa95c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fa960:{NFSU2_TR(0x5fa960);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa961:{NFSU2_TR(0x5fa961);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B5fa967:{NFSU2_TR(0x5fa967);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa969:{NFSU2_TR(0x5fa969);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa96eull));
TAIL_STATIC(0x5f41e0u,5f4);
}
B5fa96e:L5fa96e:{c.instructions+=1;NFSU2_TR(0x5fa96e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fa970:L5fa970:{c.instructions+=21;NFSU2_TR(0x5fa970);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B5fa973:{NFSU2_TR(0x5fa973);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa974:{NFSU2_TR(0x5fa974);
__builtin_memmove((R+24),(R+4),4);
}
B5fa976:{NFSU2_TR(0x5fa976);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fa979:{NFSU2_TR(0x5fa979);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa97a:{NFSU2_TR(0x5fa97a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fa97e:{NFSU2_TR(0x5fa97e);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fa981:{NFSU2_TR(0x5fa981);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5fa985:{NFSU2_TR(0x5fa985);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5fa989:{NFSU2_TR(0x5fa989);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5fa98d:{NFSU2_TR(0x5fa98d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5fa98f:{NFSU2_TR(0x5fa98f);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5fa993:{NFSU2_TR(0x5fa993);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa994:{NFSU2_TR(0x5fa994);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5fa99a:{NFSU2_TR(0x5fa99a);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5fa99e:{NFSU2_TR(0x5fa99e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0xbc23d70aull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fa9a6:{NFSU2_TR(0x5fa9a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f8147aeull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fa9ae:{NFSU2_TR(0x5fa9ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fa9b6:{NFSU2_TR(0x5fa9b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fa9ba:{NFSU2_TR(0x5fa9ba);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fa9be:{NFSU2_TR(0x5fa9be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fa9c3ull));
TAIL_STATIC(0x5764d0u,576);
}
B5fa9c3:L5fa9c3:{c.instructions+=12;NFSU2_TR(0x5fa9c3);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5fa9c9:{NFSU2_TR(0x5fa9c9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B5fa9cc:{NFSU2_TR(0x5fa9cc);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5fa9d0:{NFSU2_TR(0x5fa9d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fa9d8:{NFSU2_TR(0x5fa9d8);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fa9dc:{NFSU2_TR(0x5fa9dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fa9e4:{NFSU2_TR(0x5fa9e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fa9e8:{NFSU2_TR(0x5fa9e8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fa9e9:{NFSU2_TR(0x5fa9e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fa9f1:{NFSU2_TR(0x5fa9f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fa9f9:{NFSU2_TR(0x5fa9f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fa9fd:{NFSU2_TR(0x5fa9fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5faa02ull));
TAIL_STATIC(0x5764d0u,576);
}
B5faa02:L5faa02:{c.instructions+=16;NFSU2_TR(0x5faa02);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5faa04:{NFSU2_TR(0x5faa04);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5faa06:{NFSU2_TR(0x5faa06);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5faa07:{NFSU2_TR(0x5faa07);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5faa0b:{NFSU2_TR(0x5faa0b);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5faa0f:{NFSU2_TR(0x5faa0f);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5faa13:{NFSU2_TR(0x5faa13);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5faa17:{NFSU2_TR(0x5faa17);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5faa1f:{NFSU2_TR(0x5faa1f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5faa23:{NFSU2_TR(0x5faa23);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5faa27:{NFSU2_TR(0x5faa27);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5faa2d:{NFSU2_TR(0x5faa2d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5faa31:{NFSU2_TR(0x5faa31);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5faa34:{NFSU2_TR(0x5faa34);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5faa36:{NFSU2_TR(0x5faa36);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5faa39:{NFSU2_TR(0x5faa39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5faa3eull));
TAIL_STATIC(0x5764d0u,576);
}
B5faa3e:L5faa3e:{c.instructions+=9;NFSU2_TR(0x5faa3e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5faa42:{NFSU2_TR(0x5faa42);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5faa46:{NFSU2_TR(0x5faa46);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5faa48:{NFSU2_TR(0x5faa48);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5faa4c:{NFSU2_TR(0x5faa4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5faa4d:{NFSU2_TR(0x5faa4d);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5faa4f:{NFSU2_TR(0x5faa4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5faa50:{NFSU2_TR(0x5faa50);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5faa53:{NFSU2_TR(0x5faa53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5faa60:L5faa60:{c.instructions+=10;NFSU2_TR(0x5faa60);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5faa61:{NFSU2_TR(0x5faa61);
__builtin_memmove((R+20),(R+16),4);
}
B5faa63:{NFSU2_TR(0x5faa63);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5faa66:{NFSU2_TR(0x5faa66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x38ull))));
}
B5faa69:{NFSU2_TR(0x5faa69);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B5faa6e:{NFSU2_TR(0x5faa6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5faa70:{NFSU2_TR(0x5faa70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5faa71:{NFSU2_TR(0x5faa71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5faa74:{NFSU2_TR(0x5faa74);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5faa75:{NFSU2_TR(0x5faa75);
if(r1(R+518)){{goto L5faa7c;}}
}
B5faa77:L5faa77:{c.instructions+=2;NFSU2_TR(0x5faa77);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5faa7a:{NFSU2_TR(0x5faa7a);
if(r1(R+518)){{goto L5faa89;}}
}
B5faa7c:L5faa7c:{c.instructions+=3;NFSU2_TR(0x5faa7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5faa7f:{NFSU2_TR(0x5faa7f);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5faa83:{NFSU2_TR(0x5faa83);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fab98;}}
}
B5faa89:L5faa89:{c.instructions+=9;NFSU2_TR(0x5faa89);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5faa8c:{NFSU2_TR(0x5faa8c);
{u32 ea_=u32(r4(R+4)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5faa92:{NFSU2_TR(0x5faa92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5faa95:{NFSU2_TR(0x5faa95);
{u32 ea_=u32(r4(R+24)+u32(1072u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5faa9b:{NFSU2_TR(0x5faa9b);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5faa9d:{NFSU2_TR(0x5faa9d);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5faaa0:{NFSU2_TR(0x5faaa0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5faaa2:{NFSU2_TR(0x5faaa2);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5faaa5:{NFSU2_TR(0x5faaa5);
if(r1(R+518)){{goto L5fab98;}}
}
B5faaab:L5faaab:{c.instructions+=5;NFSU2_TR(0x5faaab);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x70ull))));
}
B5faaae:{NFSU2_TR(0x5faaae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5faaaf:{NFSU2_TR(0x5faaaf);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5faab3:{NFSU2_TR(0x5faab3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5faab4:{NFSU2_TR(0x5faab4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5faab9ull));
TAIL_STATIC(0x43cf10u,43c);
}
B5faab9:L5faab9:{c.instructions+=5;NFSU2_TR(0x5faab9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5faabc:{NFSU2_TR(0x5faabc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5faabd:{NFSU2_TR(0x5faabd);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5faac1:{NFSU2_TR(0x5faac1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5faac2:{NFSU2_TR(0x5faac2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5faac7ull));
TAIL_STATIC(0x43cf10u,43c);
}
B5faac7:L5faac7:{c.instructions+=13;NFSU2_TR(0x5faac7);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5faacb:{NFSU2_TR(0x5faacb);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5faacf:{NFSU2_TR(0x5faacf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5faad2:{NFSU2_TR(0x5faad2);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5faad6:{NFSU2_TR(0x5faad6);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5faada:{NFSU2_TR(0x5faada);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5faadc:{NFSU2_TR(0x5faadc);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5faae0:{NFSU2_TR(0x5faae0);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5faae4:{NFSU2_TR(0x5faae4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5faae6:{NFSU2_TR(0x5faae6);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5faae8:{NFSU2_TR(0x5faae8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5faaea:{NFSU2_TR(0x5faaea);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5faaed:{NFSU2_TR(0x5faaed);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5fab98;}}
}
B5faaf3:L5faaf3:{c.instructions+=7;NFSU2_TR(0x5faaf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5faaf6:{NFSU2_TR(0x5faaf6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x60ull))));
}
B5faaf9:{NFSU2_TR(0x5faaf9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5faafa:{NFSU2_TR(0x5faafa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5faafb:{NFSU2_TR(0x5faafb);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5faaff:{NFSU2_TR(0x5faaff);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fab00:{NFSU2_TR(0x5fab00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fab05ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B5fab05:L5fab05:{c.instructions+=9;NFSU2_TR(0x5fab05);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5fab08:{NFSU2_TR(0x5fab08);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5fab0c:{NFSU2_TR(0x5fab0c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fab0d:{NFSU2_TR(0x5fab0d);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5fab11:{NFSU2_TR(0x5fab11);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fab12:{NFSU2_TR(0x5fab12);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5fab16:{NFSU2_TR(0x5fab16);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fab17:{NFSU2_TR(0x5fab17);
__builtin_memmove((R+4),(R+28),4);
}
B5fab19:{NFSU2_TR(0x5fab19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fab1eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fa970u);}goto L5fa970;}
}
B5fab1e:L5fab1e:{c.instructions+=5;NFSU2_TR(0x5fab1e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fab22:{NFSU2_TR(0x5fab22);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fab28:{NFSU2_TR(0x5fab28);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fab2a:{NFSU2_TR(0x5fab2a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fab2d:{NFSU2_TR(0x5fab2d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5faba2;}}
}
B5fab2f:L5fab2f:{c.instructions+=6;NFSU2_TR(0x5fab2f);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fab33:{NFSU2_TR(0x5fab33);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fab39:{NFSU2_TR(0x5fab39);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fab3d:{NFSU2_TR(0x5fab3d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fab3f:{NFSU2_TR(0x5fab3f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5fab42:{NFSU2_TR(0x5fab42);
if(r1(R+514)){{goto L5fab4c;}}
}
B5fab44:L5fab44:{c.instructions+=2;NFSU2_TR(0x5fab44);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5fab46:{NFSU2_TR(0x5fab46);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fab4c:L5fab4c:{c.instructions+=6;NFSU2_TR(0x5fab4c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fab50:{NFSU2_TR(0x5fab50);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5fab52:{NFSU2_TR(0x5fab52);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fab54:{NFSU2_TR(0x5fab54);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5fab56:{NFSU2_TR(0x5fab56);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5fab59:{NFSU2_TR(0x5fab59);
if(r1(R+514)){{goto L5fab98;}}
}
B5fab5b:L5fab5b:{c.instructions+=5;NFSU2_TR(0x5fab5b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fab5f:{NFSU2_TR(0x5fab5f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fab65:{NFSU2_TR(0x5fab65);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fab67:{NFSU2_TR(0x5fab67);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fab6a:{NFSU2_TR(0x5fab6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fabaa;}}
}
B5fab6c:L5fab6c:{c.instructions+=6;NFSU2_TR(0x5fab6c);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fab70:{NFSU2_TR(0x5fab70);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fab76:{NFSU2_TR(0x5fab76);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fab7a:{NFSU2_TR(0x5fab7a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fab7c:{NFSU2_TR(0x5fab7c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5fab7f:{NFSU2_TR(0x5fab7f);
if(r1(R+514)){{goto L5fab89;}}
}
B5fab81:L5fab81:{c.instructions+=2;NFSU2_TR(0x5fab81);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5fab83:{NFSU2_TR(0x5fab83);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fab89:L5fab89:{c.instructions+=6;NFSU2_TR(0x5fab89);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fab8d:{NFSU2_TR(0x5fab8d);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5fab8f:{NFSU2_TR(0x5fab8f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fab91:{NFSU2_TR(0x5fab91);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5fab93:{NFSU2_TR(0x5fab93);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5fab96:{NFSU2_TR(0x5fab96);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5fabb2;}}
}
B5fab98:L5fab98:{c.instructions+=6;NFSU2_TR(0x5fab98);
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
B5fab9a:{NFSU2_TR(0x5fab9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fab9b:{NFSU2_TR(0x5fab9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fab9c:{NFSU2_TR(0x5fab9c);
__builtin_memmove((R+16),(R+20),4);
}
B5fab9e:{NFSU2_TR(0x5fab9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5fab9f:{NFSU2_TR(0x5fab9f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5faba2:L5faba2:{c.instructions+=2;NFSU2_TR(0x5faba2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5faba8:{NFSU2_TR(0x5faba8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fab4cu);}goto L5fab4c;}
}
B5fabaa:L5fabaa:{c.instructions+=2;NFSU2_TR(0x5fabaa);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fabb0:{NFSU2_TR(0x5fabb0);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fab89u);}goto L5fab89;}
}
B5fabb2:L5fabb2:{c.instructions+=6;NFSU2_TR(0x5fabb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fabb3:{NFSU2_TR(0x5fabb3);
w1(R+0,u8(0x1ull));
}
B5fabb5:{NFSU2_TR(0x5fabb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fabb6:{NFSU2_TR(0x5fabb6);
__builtin_memmove((R+16),(R+20),4);
}
B5fabb8:{NFSU2_TR(0x5fabb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5fabb9:{NFSU2_TR(0x5fabb9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fabc0:L5fabc0:{c.instructions+=12;NFSU2_TR(0x5fabc0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fabc1:{NFSU2_TR(0x5fabc1);
__builtin_memmove((R+20),(R+16),4);
}
B5fabc3:{NFSU2_TR(0x5fabc3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5fabc6:{NFSU2_TR(0x5fabc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x84ull))));
}
B5fabcc:{NFSU2_TR(0x5fabcc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fabcd:{NFSU2_TR(0x5fabcd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fabce:{NFSU2_TR(0x5fabce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fabcf:{NFSU2_TR(0x5fabcf);
__builtin_memmove((R+24),(R+4),4);
}
B5fabd1:{NFSU2_TR(0x5fabd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fabd4:{NFSU2_TR(0x5fabd4);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5fabd8:{NFSU2_TR(0x5fabd8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fabd9:{NFSU2_TR(0x5fabd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fabdeull));
TAIL_STATIC(0x5ecc00u,5ec);
}
B5fabde:L5fabde:{c.instructions+=5;NFSU2_TR(0x5fabde);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5fabe2:{NFSU2_TR(0x5fabe2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fabe3:{NFSU2_TR(0x5fabe3);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5fabe7:{NFSU2_TR(0x5fabe7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fabe8:{NFSU2_TR(0x5fabe8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fabedull));
TAIL_STATIC(0x5baf90u,5ba);
}
B5fabed:L5fabed:{c.instructions+=5;NFSU2_TR(0x5fabed);
__builtin_memmove((R+0),gp(0x7ebec0),4);
}
B5fabf2:{NFSU2_TR(0x5fabf2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5fabf4:{NFSU2_TR(0x5fabf4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5fabf7:{NFSU2_TR(0x5fabf7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fabf9:{NFSU2_TR(0x5fabf9);
if(r1(R+518)){{goto L5fac1b;}}
}
B5fabfb:L5fabfb:{c.instructions+=3;NFSU2_TR(0x5fabfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fac01:{NFSU2_TR(0x5fac01);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fac03:{NFSU2_TR(0x5fac03);
if(r1(R+518)){{goto L5fac3a;}}
}
B5fac05:L5fac05:{c.instructions+=6;NFSU2_TR(0x5fac05);
u8 U[4];
w4(U+0,u32(0x802108ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fac0a:{NFSU2_TR(0x5fac0a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fac0b:{NFSU2_TR(0x5fac0b);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5fac0f:{NFSU2_TR(0x5fac0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fac10:{NFSU2_TR(0x5fac10);
__builtin_memmove((R+4),(R+24),4);
}
B5fac12:{NFSU2_TR(0x5fac12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fac17ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5faa60u);}goto L5faa60;}
}
B5fac17:L5fac17:{c.instructions+=2;NFSU2_TR(0x5fac17);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fac19:{NFSU2_TR(0x5fac19);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fac3a;}}
}
B5fac1b:L5fac1b:{c.instructions+=5;NFSU2_TR(0x5fac1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fac21:{NFSU2_TR(0x5fac21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fac27:{NFSU2_TR(0x5fac27);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x249ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5fac2e:{NFSU2_TR(0x5fac2e);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5fac32:{NFSU2_TR(0x5fac32);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fac3a;}}
}
B5fac34:L5fac34:{c.instructions+=3;NFSU2_TR(0x5fac34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5fac36:{NFSU2_TR(0x5fac36);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fac37:{NFSU2_TR(0x5fac37);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fac3aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5fac3a:L5fac3a:{c.instructions+=3;NFSU2_TR(0x5fac3a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x249ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5fac40:{NFSU2_TR(0x5fac40);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fac42:{NFSU2_TR(0x5fac42);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fac50;}}
}
B5fac44:L5fac44:{c.instructions+=2;NFSU2_TR(0x5fac44);
u8 U[8];
__builtin_memmove((U+0),gp(0x7ebec0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fac4a:{NFSU2_TR(0x5fac4a);
if(r1(R+518)){{goto L5fac50;}}
}
B5fac4c:L5fac4c:{c.instructions+=2;NFSU2_TR(0x5fac4c);
w1(R+4,u8(0x1ull));
}
B5fac4e:{NFSU2_TR(0x5fac4e);
{goto L5fac52;}
}
B5fac50:L5fac50:{c.instructions+=1;NFSU2_TR(0x5fac50);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B5fac52:L5fac52:{c.instructions+=3;NFSU2_TR(0x5fac52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fac58:{NFSU2_TR(0x5fac58);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fac5a:{NFSU2_TR(0x5fac5a);
if(r1(R+518)){{goto L5fac89;}}
}
B5fac5c:L5fac5c:{c.instructions+=2;NFSU2_TR(0x5fac5c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fac61:{NFSU2_TR(0x5fac61);
if(r1(R+518)){{goto L5fac89;}}
}
B5fac63:L5fac63:{c.instructions+=9;NFSU2_TR(0x5fac63);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B5fac68:{NFSU2_TR(0x5fac68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B5fac6e:{NFSU2_TR(0x5fac6e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fac72:{NFSU2_TR(0x5fac72);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5fac76:{NFSU2_TR(0x5fac76);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fac7c:{NFSU2_TR(0x5fac7c);
{u32 ea_=u32(u32(8017196u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fac82:{NFSU2_TR(0x5fac82);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fac84:{NFSU2_TR(0x5fac84);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5fac87:{NFSU2_TR(0x5fac87);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5facf5;}}
}
B5fac89:L5fac89:{c.instructions+=2;NFSU2_TR(0x5fac89);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fac8b:{NFSU2_TR(0x5fac8b);
if(r1(R+518)){{goto L5facf5;}}
}
B5fac8d:L5fac8d:{c.instructions+=4;NFSU2_TR(0x5fac8d);
__builtin_memmove((R+4),gp(0x890080),4);
}
B5fac93:{NFSU2_TR(0x5fac93);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+28)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5fac96:{NFSU2_TR(0x5fac96);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fac9a:{NFSU2_TR(0x5fac9a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5facf5;}}
}
B5fac9c:L5fac9c:{c.instructions+=1;NFSU2_TR(0x5fac9c);
w4(R+12,u32(0x1cull));
}
B5faca1:L5faca1:{c.instructions+=4;NFSU2_TR(0x5faca1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5faca7:{NFSU2_TR(0x5faca7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5faca9:{NFSU2_TR(0x5faca9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B5facac:{NFSU2_TR(0x5facac);
if(r1(R+518)){{goto L5facb2;}}
}
B5facae:L5facae:{c.instructions+=2;NFSU2_TR(0x5facae);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5facb0:{NFSU2_TR(0x5facb0);
if(r1(R+518)){{goto L5facce;}}
}
B5facb2:L5facb2:{c.instructions+=6;NFSU2_TR(0x5facb2);
u8 U[4];
w4(U+0,u32(0x8020f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5facb7:{NFSU2_TR(0x5facb7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5facb8:{NFSU2_TR(0x5facb8);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5facbc:{NFSU2_TR(0x5facbc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5facbd:{NFSU2_TR(0x5facbd);
__builtin_memmove((R+4),(R+24),4);
}
B5facbf:{NFSU2_TR(0x5facbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5facc4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5faa60u);}goto L5faa60;}
}
B5facc4:L5facc4:{c.instructions+=2;NFSU2_TR(0x5facc4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5facc6:{NFSU2_TR(0x5facc6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5face3;}}
}
B5facc8:L5facc8:{c.instructions+=1;NFSU2_TR(0x5facc8);
__builtin_memmove((R+4),gp(0x890080),4);
}
B5facce:L5facce:{c.instructions+=7;NFSU2_TR(0x5facce);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5facd2:{NFSU2_TR(0x5facd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5facd5:{NFSU2_TR(0x5facd5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5facd6:{NFSU2_TR(0x5facd6);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B5facd9:{NFSU2_TR(0x5facd9);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5facdb:{NFSU2_TR(0x5facdb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5facdf:{NFSU2_TR(0x5facdf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5faca1u);}goto L5faca1;}}
}
B5face1:L5face1:{c.instructions+=1;NFSU2_TR(0x5face1);
{goto L5facf5;}
}
B5face3:L5face3:{c.instructions+=3;NFSU2_TR(0x5face3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5face9:{NFSU2_TR(0x5face9);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B5facef:{NFSU2_TR(0x5facef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5facf5:L5facf5:{c.instructions+=4;NFSU2_TR(0x5facf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5facfb:{NFSU2_TR(0x5facfb);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B5facfd:{NFSU2_TR(0x5facfd);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5facff:{NFSU2_TR(0x5facff);
if(r1(R+518)){{goto L5fad07;}}
}
B5fad01:L5fad01:{c.instructions+=1;NFSU2_TR(0x5fad01);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x249ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5fad07:L5fad07:{c.instructions+=3;NFSU2_TR(0x5fad07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fad0d:{NFSU2_TR(0x5fad0d);
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
B5fad0f:{NFSU2_TR(0x5fad0f);
if(r1(R+518)){{goto L5fad72;}}
}
B5fad11:L5fad11:{c.instructions+=3;NFSU2_TR(0x5fad11);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fad13:{NFSU2_TR(0x5fad13);
__builtin_memmove((R+4),gp(0x7ebec0),4);
}
B5fad19:{NFSU2_TR(0x5fad19);
if(r1(R+518)){{goto L5fad49;}}
}
B5fad1b:L5fad1b:{c.instructions+=3;NFSU2_TR(0x5fad1b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fad1e:{NFSU2_TR(0x5fad1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fad21:{NFSU2_TR(0x5fad21);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fad32;}}
}
B5fad23:L5fad23:{c.instructions+=2;NFSU2_TR(0x5fad23);
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
B5fad26:{NFSU2_TR(0x5fad26);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fad72;}}
}
B5fad28:L5fad28:{c.instructions+=7;NFSU2_TR(0x5fad28);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fad2b:{NFSU2_TR(0x5fad2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fad2c:{NFSU2_TR(0x5fad2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fad2d:{NFSU2_TR(0x5fad2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fad2e:{NFSU2_TR(0x5fad2e);
__builtin_memmove((R+16),(R+20),4);
}
B5fad30:{NFSU2_TR(0x5fad30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5fad31:{NFSU2_TR(0x5fad31);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fad32:L5fad32:{c.instructions+=2;NFSU2_TR(0x5fad32);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x13ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x13ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5fad35:{NFSU2_TR(0x5fad35);
if(r1(R+518)){{goto L5fad72;}}
}
B5fad37:L5fad37:{c.instructions+=4;NFSU2_TR(0x5fad37);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fad39:{NFSU2_TR(0x5fad39);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fad3b:{NFSU2_TR(0x5fad3b);
__builtin_memmove((R+4),(R+24),4);
}
B5fad3d:{NFSU2_TR(0x5fad3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fad42ull));
TAIL_STATIC(0x5f1fd0u,5f1);
}
B5fad42:L5fad42:{c.instructions+=6;NFSU2_TR(0x5fad42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fad43:{NFSU2_TR(0x5fad43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fad44:{NFSU2_TR(0x5fad44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fad45:{NFSU2_TR(0x5fad45);
__builtin_memmove((R+16),(R+20),4);
}
B5fad47:{NFSU2_TR(0x5fad47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5fad48:{NFSU2_TR(0x5fad48);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fad49:L5fad49:{c.instructions+=3;NFSU2_TR(0x5fad49);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fad4c:{NFSU2_TR(0x5fad4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fad4f:{NFSU2_TR(0x5fad4f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fad64;}}
}
B5fad51:L5fad51:{c.instructions+=2;NFSU2_TR(0x5fad51);
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
B5fad54:{NFSU2_TR(0x5fad54);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fad72;}}
}
B5fad56:L5fad56:{c.instructions+=7;NFSU2_TR(0x5fad56);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fad5d:{NFSU2_TR(0x5fad5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fad5e:{NFSU2_TR(0x5fad5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fad5f:{NFSU2_TR(0x5fad5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fad60:{NFSU2_TR(0x5fad60);
__builtin_memmove((R+16),(R+20),4);
}
B5fad62:{NFSU2_TR(0x5fad62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5fad63:{NFSU2_TR(0x5fad63);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fad64:L5fad64:{c.instructions+=2;NFSU2_TR(0x5fad64);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x13ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x13ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5fad67:{NFSU2_TR(0x5fad67);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fad72;}}
}
B5fad69:L5fad69:{c.instructions+=3;NFSU2_TR(0x5fad69);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fad6b:{NFSU2_TR(0x5fad6b);
__builtin_memmove((R+4),(R+24),4);
}
B5fad6d:{NFSU2_TR(0x5fad6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fad72ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fa820u);}goto L5fa820;}
}
B5fad72:L5fad72:{c.instructions+=6;NFSU2_TR(0x5fad72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fad73:{NFSU2_TR(0x5fad73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fad74:{NFSU2_TR(0x5fad74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fad75:{NFSU2_TR(0x5fad75);
__builtin_memmove((R+16),(R+20),4);
}
B5fad77:{NFSU2_TR(0x5fad77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5fad78:{NFSU2_TR(0x5fad78);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fad80:L5fad80:{c.instructions+=6;NFSU2_TR(0x5fad80);
__builtin_memmove((R+8),gp(0x82a3a4),4);
}
B5fad86:{NFSU2_TR(0x5fad86);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fad87:{NFSU2_TR(0x5fad87);
__builtin_memmove((R+24),(R+4),4);
}
B5fad89:{NFSU2_TR(0x5fad89);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x234ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fad8f:{NFSU2_TR(0x5fad8f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fad91:{NFSU2_TR(0x5fad91);
if(r1(R+518)){{goto L5fad97;}}
}
B5fad93:L5fad93:{c.instructions+=2;NFSU2_TR(0x5fad93);
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
B5fad95:{NFSU2_TR(0x5fad95);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5fae13;}}
}
B5fad97:L5fad97:{c.instructions+=3;NFSU2_TR(0x5fad97);
__builtin_memmove((R+0),gp(0x865098),4);
}
B5fad9c:{NFSU2_TR(0x5fad9c);
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
B5fad9e:{NFSU2_TR(0x5fad9e);
if(r1(R+518)){{goto L5fae13;}}
}
B5fada0:L5fada0:{c.instructions+=4;NFSU2_TR(0x5fada0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fada6:{NFSU2_TR(0x5fada6);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5fada8:{NFSU2_TR(0x5fada8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fadaa:{NFSU2_TR(0x5fadaa);
if(r1(R+518)){{goto L5fadaf;}}
}
B5fadac:L5fadac:{c.instructions+=1;NFSU2_TR(0x5fadac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fadaf:L5fadaf:{c.instructions+=2;NFSU2_TR(0x5fadaf);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fadb1:{NFSU2_TR(0x5fadb1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5fadca;}}
}
B5fadb3:L5fadb3:{c.instructions+=2;NFSU2_TR(0x5fadb3);
w4(R+4,u32(0x828770ull));
}
B5fadb8:{NFSU2_TR(0x5fadb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fadbdull));
TAIL_STATIC(0x457a40u,457);
}
B5fadbd:L5fadbd:{c.instructions+=3;NFSU2_TR(0x5fadbd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fadbf:{NFSU2_TR(0x5fadbf);
__builtin_memmove((R+4),(R+24),4);
}
B5fadc1:{NFSU2_TR(0x5fadc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fadc6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fa820u);}goto L5fa820;}
}
B5fadc6:L5fadc6:{c.instructions+=2;NFSU2_TR(0x5fadc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fadc7:{NFSU2_TR(0x5fadc7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fadca:L5fadca:{c.instructions+=3;NFSU2_TR(0x5fadca);
__builtin_memmove((R+0),(R+4),4);
}
B5fadcc:{NFSU2_TR(0x5fadcc);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5fadcf:{NFSU2_TR(0x5fadcf);
if(r1(R+518)){{goto L5fae08;}}
}
B5fadd1:L5fadd1:{c.instructions+=2;NFSU2_TR(0x5fadd1);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5fadd2:{NFSU2_TR(0x5fadd2);
if(r1(R+518)){{goto L5fadf1;}}
}
B5fadd4:L5fadd4:{c.instructions+=4;NFSU2_TR(0x5fadd4);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5fadd5:{NFSU2_TR(0x5fadd5);
__builtin_memmove((R+4),(R+24),4);
}
B5fadd7:{NFSU2_TR(0x5fadd7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fadd9:{NFSU2_TR(0x5fadd9);
if(r1(R+518)){{goto L5fade6;}}
}
B5faddb:L5faddb:{c.instructions+=2;NFSU2_TR(0x5faddb);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5faddd:{NFSU2_TR(0x5faddd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fade2ull));
TAIL_STATIC(0x5f1fd0u,5f1);
}
B5fade2:L5fade2:{c.instructions+=2;NFSU2_TR(0x5fade2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fade3:{NFSU2_TR(0x5fade3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fade6:L5fade6:{c.instructions+=2;NFSU2_TR(0x5fade6);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fade8:{NFSU2_TR(0x5fade8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fadedull));
TAIL_STATIC(0x5f1fd0u,5f1);
}
B5faded:L5faded:{c.instructions+=2;NFSU2_TR(0x5faded);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fadee:{NFSU2_TR(0x5fadee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fadf1:L5fadf1:{c.instructions+=2;NFSU2_TR(0x5fadf1);
w4(R+4,u32(0x828770ull));
}
B5fadf6:{NFSU2_TR(0x5fadf6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fadfbull));
TAIL_STATIC(0x457a20u,457);
}
B5fadfb:L5fadfb:{c.instructions+=3;NFSU2_TR(0x5fadfb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fadfd:{NFSU2_TR(0x5fadfd);
__builtin_memmove((R+4),(R+24),4);
}
B5fadff:{NFSU2_TR(0x5fadff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fae04ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fa820u);}goto L5fa820;}
}
B5fae04:L5fae04:{c.instructions+=2;NFSU2_TR(0x5fae04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fae05:{NFSU2_TR(0x5fae05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fae08:L5fae08:{c.instructions+=4;NFSU2_TR(0x5fae08);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fae0a:{NFSU2_TR(0x5fae0a);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fae0c:{NFSU2_TR(0x5fae0c);
__builtin_memmove((R+4),(R+24),4);
}
B5fae0e:{NFSU2_TR(0x5fae0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fae13ull));
TAIL_STATIC(0x5f1fd0u,5f1);
}
B5fae13:L5fae13:{c.instructions+=2;NFSU2_TR(0x5fae13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fae14:{NFSU2_TR(0x5fae14);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fae20:L5fae20:{c.instructions+=6;NFSU2_TR(0x5fae20);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fae21:{NFSU2_TR(0x5fae21);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fae22:{NFSU2_TR(0x5fae22);
__builtin_memmove((R+24),(R+4),4);
}
B5fae24:{NFSU2_TR(0x5fae24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fae27:{NFSU2_TR(0x5fae27);
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
B5fae29:{NFSU2_TR(0x5fae29);
if(r1(R+518)){{goto L5faf0d;}}
}
B5fae2f:L5fae2f:{c.instructions+=2;NFSU2_TR(0x5fae2f);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x3ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5fae33:{NFSU2_TR(0x5fae33);
if(r1(R+518)){{goto L5faf0d;}}
}
B5fae39:L5fae39:{c.instructions+=2;NFSU2_TR(0x5fae39);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fae3b:{NFSU2_TR(0x5fae3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fae40ull));
TAIL_STATIC(0x5eba30u,5eb);
}
B5fae40:L5fae40:{c.instructions+=6;NFSU2_TR(0x5fae40);
{u32 ea_=u32(u32(9037752u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fae46:{NFSU2_TR(0x5fae46);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fae4c:{NFSU2_TR(0x5fae4c);
w4(R+4,u32(0x3ull));
}
B5fae51:{NFSU2_TR(0x5fae51);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fae53:{NFSU2_TR(0x5fae53);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fae56:{NFSU2_TR(0x5fae56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fae6a;}}
}
B5fae58:L5fae58:{c.instructions+=3;NFSU2_TR(0x5fae58);
__builtin_memmove((R+0),gp(0x890118),4);
}
B5fae5d:{NFSU2_TR(0x5fae5d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fae5f:{NFSU2_TR(0x5fae5f);
if(r1(R+518)){{goto L5fae6a;}}
}
B5fae61:L5fae61:{c.instructions+=2;NFSU2_TR(0x5fae61);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5fae63:{NFSU2_TR(0x5fae63);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fae6a;}}
}
B5fae65:L5fae65:{c.instructions+=1;NFSU2_TR(0x5fae65);
w4(R+4,u32(0x1ull));
}
B5fae6a:L5fae6a:{c.instructions+=3;NFSU2_TR(0x5fae6a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fae6b:{NFSU2_TR(0x5fae6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fae6e:{NFSU2_TR(0x5fae6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fae73ull));
TAIL_STATIC(0x5f46a0u,5f4);
}
B5fae73:L5fae73:{c.instructions+=4;NFSU2_TR(0x5fae73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fae76:{NFSU2_TR(0x5fae76);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fae79:{NFSU2_TR(0x5fae79);
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
B5fae7b:{NFSU2_TR(0x5fae7b);
if(r1(R+518)){{goto L5fae81;}}
}
B5fae7d:L5fae7d:{c.instructions+=1;NFSU2_TR(0x5fae7d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x19ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5fae81:L5fae81:{c.instructions+=7;NFSU2_TR(0x5fae81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fae84:{NFSU2_TR(0x5fae84);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fae85:{NFSU2_TR(0x5fae85);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5fae88:{NFSU2_TR(0x5fae88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5fae8a:{NFSU2_TR(0x5fae8a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fae8c:{NFSU2_TR(0x5fae8c);
__builtin_memmove((R+4),(R+28),4);
}
B5fae8e:{NFSU2_TR(0x5fae8e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fae91ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5fae91:L5fae91:{c.instructions+=7;NFSU2_TR(0x5fae91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5fae94:{NFSU2_TR(0x5fae94);
{u32 ea_=u32(r4(R+24)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fae9a:{NFSU2_TR(0x5fae9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fae9d:{NFSU2_TR(0x5fae9d);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5faea3:{NFSU2_TR(0x5faea3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5faea5:{NFSU2_TR(0x5faea5);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5faea8:{NFSU2_TR(0x5faea8);
if(r1(R+518)){{goto L5faeb0;}}
}
B5faeaa:L5faeaa:{c.instructions+=1;NFSU2_TR(0x5faeaa);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5faeb0:L5faeb0:{c.instructions+=3;NFSU2_TR(0x5faeb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5faeb3:{NFSU2_TR(0x5faeb3);
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
B5faeb5:{NFSU2_TR(0x5faeb5);
if(r1(R+518)){{goto L5faf0c;}}
}
B5faeb7:L5faeb7:{c.instructions+=16;NFSU2_TR(0x5faeb7);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5faebb:{NFSU2_TR(0x5faebb);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5faebf:{NFSU2_TR(0x5faebf);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5faec3:{NFSU2_TR(0x5faec3);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5faec7:{NFSU2_TR(0x5faec7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5faecb:{NFSU2_TR(0x5faecb);
{u32 ea_=u32(u32(9031432u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5faed1:{NFSU2_TR(0x5faed1);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5faed5:{NFSU2_TR(0x5faed5);
{u32 ea_=u32(u32(9031432u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5faedb:{NFSU2_TR(0x5faedb);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5faede:{NFSU2_TR(0x5faede);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5faee0:{NFSU2_TR(0x5faee0);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5faee2:{NFSU2_TR(0x5faee2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5faee4:{NFSU2_TR(0x5faee4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5faeea:{NFSU2_TR(0x5faeea);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5faeec:{NFSU2_TR(0x5faeec);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5faeef:{NFSU2_TR(0x5faeef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5faeff;}}
}
B5faef1:L5faef1:{c.instructions+=8;NFSU2_TR(0x5faef1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5faef3:{NFSU2_TR(0x5faef3);
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
B5faef5:{NFSU2_TR(0x5faef5);
__builtin_memmove((R+4),(R+518),1);
}
B5faef8:{NFSU2_TR(0x5faef8);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5faefb:{NFSU2_TR(0x5faefb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5faefc:{NFSU2_TR(0x5faefc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5faefd:{NFSU2_TR(0x5faefd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5faefe:{NFSU2_TR(0x5faefe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5faeff:L5faeff:{c.instructions+=4;NFSU2_TR(0x5faeff);
w4(R+0,u32(0x1ull));
}
B5faf04:{NFSU2_TR(0x5faf04);
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
B5faf06:{NFSU2_TR(0x5faf06);
__builtin_memmove((R+4),(R+518),1);
}
B5faf09:{NFSU2_TR(0x5faf09);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5faf0c:L5faf0c:{c.instructions+=1;NFSU2_TR(0x5faf0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5faf0d:L5faf0d:{c.instructions+=3;NFSU2_TR(0x5faf0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5faf0e:{NFSU2_TR(0x5faf0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5faf0f:{NFSU2_TR(0x5faf0f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5faf10:L5faf10:{c.instructions+=5;NFSU2_TR(0x5faf10);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5faf11:{NFSU2_TR(0x5faf11);
__builtin_memmove((R+28),(R+4),4);
}
B5faf13:{NFSU2_TR(0x5faf13);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5faf16:{NFSU2_TR(0x5faf16);
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
B5faf18:{NFSU2_TR(0x5faf18);
if(r1(R+518)){{goto L5faf74;}}
}
B5faf1a:L5faf1a:{c.instructions+=2;NFSU2_TR(0x5faf1a);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5faf1e:{NFSU2_TR(0x5faf1e);
if(r1(R+518)){{goto L5faf74;}}
}
B5faf20:L5faf20:{c.instructions+=3;NFSU2_TR(0x5faf20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5faf21:{NFSU2_TR(0x5faf21);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5faf23:{NFSU2_TR(0x5faf23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5faf28ull));
TAIL_STATIC(0x5eba30u,5eb);
}
B5faf28:L5faf28:{c.instructions+=3;NFSU2_TR(0x5faf28);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5faf2b:{NFSU2_TR(0x5faf2b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5faf2d:{NFSU2_TR(0x5faf2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5faf32ull));
TAIL_STATIC(0x5f46a0u,5f4);
}
B5faf32:L5faf32:{c.instructions+=4;NFSU2_TR(0x5faf32);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5faf35:{NFSU2_TR(0x5faf35);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5faf38:{NFSU2_TR(0x5faf38);
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
B5faf3a:{NFSU2_TR(0x5faf3a);
if(r1(R+518)){{goto L5faf73;}}
}
B5faf3c:L5faf3c:{c.instructions+=5;NFSU2_TR(0x5faf3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5faf3f:{NFSU2_TR(0x5faf3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5faf41:{NFSU2_TR(0x5faf41);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5faf42:{NFSU2_TR(0x5faf42);
__builtin_memmove((R+4),(R+24),4);
}
B5faf44:{NFSU2_TR(0x5faf44);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5faf47ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5faf47:L5faf47:{c.instructions+=4;NFSU2_TR(0x5faf47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5faf49:{NFSU2_TR(0x5faf49);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5faf4b:{NFSU2_TR(0x5faf4b);
__builtin_memmove((R+4),(R+24),4);
}
B5faf4d:{NFSU2_TR(0x5faf4d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5faf50ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5faf50:L5faf50:{c.instructions+=2;NFSU2_TR(0x5faf50);
u8 U[5];
__builtin_memmove((U+3),gp(0x89e7d8),1);
w1(R+512,u8((r1(U+3))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x1ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5faf57:{NFSU2_TR(0x5faf57);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5faf67;}}
}
B5faf59:L5faf59:{c.instructions+=4;NFSU2_TR(0x5faf59);
__builtin_memmove((R+0),gp(0x864fac),4);
}
B5faf5e:{NFSU2_TR(0x5faf5e);
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
B5faf60:{NFSU2_TR(0x5faf60);
w4(R+0,u32(0x1ull));
}
B5faf65:{NFSU2_TR(0x5faf65);
if(r1(R+518)){{goto L5faf6b;}}
}
B5faf67:L5faf67:{c.instructions+=1;NFSU2_TR(0x5faf67);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B5faf6b:L5faf6b:{c.instructions+=4;NFSU2_TR(0x5faf6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5faf6d:{NFSU2_TR(0x5faf6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5faf6e:{NFSU2_TR(0x5faf6e);
__builtin_memmove((R+4),(R+24),4);
}
B5faf70:{NFSU2_TR(0x5faf70);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5faf73ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5faf73:L5faf73:{c.instructions+=1;NFSU2_TR(0x5faf73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5faf74:L5faf74:{c.instructions+=2;NFSU2_TR(0x5faf74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5faf75:{NFSU2_TR(0x5faf75);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5faf80:L5faf80:{c.instructions+=5;NFSU2_TR(0x5faf80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5faf81:{NFSU2_TR(0x5faf81);
__builtin_memmove((R+24),(R+4),4);
}
B5faf83:{NFSU2_TR(0x5faf83);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5faf85:{NFSU2_TR(0x5faf85);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5faf8f:{NFSU2_TR(0x5faf8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5faf94ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fa820u);}goto L5fa820;}
}
B5faf94:L5faf94:{c.instructions+=9;NFSU2_TR(0x5faf94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5faf9e:{NFSU2_TR(0x5faf9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fafa8:{NFSU2_TR(0x5fafa8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5fafaf:{NFSU2_TR(0x5fafaf);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B5fafb4:{NFSU2_TR(0x5fafb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fafba:{NFSU2_TR(0x5fafba);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B5fafc0:{NFSU2_TR(0x5fafc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fafc6:{NFSU2_TR(0x5fafc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fafc7:{NFSU2_TR(0x5fafc7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fafd0:L5fafd0:{c.instructions+=11;NFSU2_TR(0x5fafd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fafd1:{NFSU2_TR(0x5fafd1);
__builtin_memmove((R+24),(R+4),4);
}
B5fafd3:{NFSU2_TR(0x5fafd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fafd9:{NFSU2_TR(0x5fafd9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5fafdc:{NFSU2_TR(0x5fafdc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fafdd:{NFSU2_TR(0x5fafdd);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5fafde:{NFSU2_TR(0x5fafde);
w4(R+28,u32(0x6ull));
}
B5fafe3:{NFSU2_TR(0x5fafe3);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5fafe3);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5fafe3);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B5fafe5:{NFSU2_TR(0x5fafe5);
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
B5fafe7:{NFSU2_TR(0x5fafe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fafed:{NFSU2_TR(0x5fafed);
if(r1(R+518)){TAIL_STATIC(0x5fb04au,5fb);}
}
B5fafef:L5fafef:{c.instructions+=2;NFSU2_TR(0x5fafef);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5faff1:{NFSU2_TR(0x5faff1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5fb024u,5fb);}
}
B5faff3:L5faff3:{c.instructions+=3;NFSU2_TR(0x5faff3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5faff9:{NFSU2_TR(0x5faff9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5faffb:{NFSU2_TR(0x5faffb);
if(r1(R+518)){TAIL_STATIC(0x5fb024u,5fb);}
}
B5faffd:L5faffd:{c.instructions+=1;NFSU2_TR(0x5faffd);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
TAIL_STATIC(0x5fb001u,5fb);
}
XIT:NFSU2_TR_EXIT(0x5fa,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
