#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_6f5(u8* __restrict R,Cpu& c);
u32 body_6f6(u8* __restrict R,Cpu& c);
u32 body_6f7(u8* __restrict R,Cpu& c);
u32 body_6f8(u8* __restrict R,Cpu& c);
u32 body_6f9(u8* __restrict R,Cpu& c);
u32 body_6fb(u8* __restrict R,Cpu& c);
u32 body_6fe(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6fa,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6fa,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6fa(u8* __restrict R,Cpu& c);
u32 page_6fa(Cpu& c){return body_6fa(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6fa(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6fa000:goto L6fa000;
case 0x6fa002:goto L6fa002;
case 0x6fa004:c.instructions+=4;goto B6fa004;
case 0x6fa007:c.instructions+=3;goto B6fa007;
case 0x6fa008:c.instructions+=2;goto B6fa008;
case 0x6fa00a:c.instructions+=1;goto B6fa00a;
case 0x6fa00c:goto L6fa00c;
case 0x6fa010:c.instructions+=4;goto B6fa010;
case 0x6fa017:c.instructions+=3;goto B6fa017;
case 0x6fa01e:c.instructions+=2;goto B6fa01e;
case 0x6fa021:c.instructions+=1;goto B6fa021;
case 0x6fa023:goto L6fa023;
case 0x6fa025:goto L6fa025;
case 0x6fa027:c.instructions+=2;goto B6fa027;
case 0x6fa02a:c.instructions+=1;goto B6fa02a;
case 0x6fa02f:goto L6fa02f;
case 0x6fa030:c.instructions+=8;goto B6fa030;
case 0x6fa031:c.instructions+=7;goto B6fa031;
case 0x6fa033:c.instructions+=6;goto B6fa033;
case 0x6fa039:c.instructions+=5;goto B6fa039;
case 0x6fa03a:c.instructions+=4;goto B6fa03a;
case 0x6fa03b:c.instructions+=3;goto B6fa03b;
case 0x6fa03c:c.instructions+=2;goto B6fa03c;
case 0x6fa03d:c.instructions+=1;goto B6fa03d;
case 0x6fa03e:goto L6fa03e;
case 0x6fa03f:c.instructions+=5;goto B6fa03f;
case 0x6fa041:c.instructions+=4;goto B6fa041;
case 0x6fa047:c.instructions+=3;goto B6fa047;
case 0x6fa04a:c.instructions+=2;goto B6fa04a;
case 0x6fa04e:c.instructions+=1;goto B6fa04e;
case 0x6fa053:goto L6fa053;
case 0x6fa055:c.instructions+=1;goto B6fa055;
case 0x6fa057:goto L6fa057;
case 0x6fa059:c.instructions+=2;goto B6fa059;
case 0x6fa05a:c.instructions+=1;goto B6fa05a;
case 0x6fa05b:goto L6fa05b;
case 0x6fa05c:c.instructions+=5;goto B6fa05c;
case 0x6fa05e:c.instructions+=4;goto B6fa05e;
case 0x6fa061:c.instructions+=3;goto B6fa061;
case 0x6fa062:c.instructions+=2;goto B6fa062;
case 0x6fa063:c.instructions+=1;goto B6fa063;
case 0x6fa065:goto L6fa065;
case 0x6fa068:c.instructions+=2;goto B6fa068;
case 0x6fa06b:c.instructions+=1;goto B6fa06b;
case 0x6fa070:goto L6fa070;
case 0x6fa071:c.instructions+=3;goto B6fa071;
case 0x6fa072:c.instructions+=2;goto B6fa072;
case 0x6fa075:c.instructions+=1;goto B6fa075;
case 0x6fa07a:goto L6fa07a;
case 0x6fa080:c.instructions+=1;goto B6fa080;
case 0x6fa085:goto L6fa085;
case 0x6fa087:c.instructions+=5;goto B6fa087;
case 0x6fa08c:c.instructions+=4;goto B6fa08c;
case 0x6fa08e:c.instructions+=3;goto B6fa08e;
case 0x6fa08f:c.instructions+=2;goto B6fa08f;
case 0x6fa091:c.instructions+=1;goto B6fa091;
case 0x6fa093:goto L6fa093;
case 0x6fa096:c.instructions+=3;goto B6fa096;
case 0x6fa099:c.instructions+=2;goto B6fa099;
case 0x6fa09c:c.instructions+=1;goto B6fa09c;
case 0x6fa09e:goto L6fa09e;
case 0x6fa0a2:goto L6fa0a2;
case 0x6fa0a5:c.instructions+=9;goto B6fa0a5;
case 0x6fa0a6:c.instructions+=8;goto B6fa0a6;
case 0x6fa0a8:c.instructions+=7;goto B6fa0a8;
case 0x6fa0ab:c.instructions+=6;goto B6fa0ab;
case 0x6fa0ad:c.instructions+=5;goto B6fa0ad;
case 0x6fa0af:c.instructions+=4;goto B6fa0af;
case 0x6fa0b2:c.instructions+=3;goto B6fa0b2;
case 0x6fa0b5:c.instructions+=2;goto B6fa0b5;
case 0x6fa0bb:c.instructions+=1;goto B6fa0bb;
case 0x6fa0c1:goto L6fa0c1;
case 0x6fa0c3:goto L6fa0c3;
case 0x6fa0c9:c.instructions+=1;goto B6fa0c9;
case 0x6fa0cf:goto L6fa0cf;
case 0x6fa0d2:c.instructions+=3;goto B6fa0d2;
case 0x6fa0d4:c.instructions+=2;goto B6fa0d4;
case 0x6fa0da:c.instructions+=1;goto B6fa0da;
case 0x6fa0e0:goto L6fa0e0;
case 0x6fa0e2:goto L6fa0e2;
case 0x6fa0e8:c.instructions+=1;goto B6fa0e8;
case 0x6fa0ee:goto L6fa0ee;
case 0x6fa0f3:c.instructions+=2;goto B6fa0f3;
case 0x6fa0f9:c.instructions+=1;goto B6fa0f9;
case 0x6fa0fb:goto L6fa0fb;
case 0x6fa0fd:c.instructions+=4;goto B6fa0fd;
case 0x6fa100:c.instructions+=3;goto B6fa100;
case 0x6fa101:c.instructions+=2;goto B6fa101;
case 0x6fa103:c.instructions+=1;goto B6fa103;
case 0x6fa105:goto L6fa105;
case 0x6fa108:c.instructions+=1;goto B6fa108;
case 0x6fa10a:goto L6fa10a;
case 0x6fa10c:c.instructions+=3;goto B6fa10c;
case 0x6fa10d:c.instructions+=2;goto B6fa10d;
case 0x6fa10f:c.instructions+=1;goto B6fa10f;
case 0x6fa111:goto L6fa111;
case 0x6fa117:c.instructions+=2;goto B6fa117;
case 0x6fa119:c.instructions+=1;goto B6fa119;
case 0x6fa11a:goto L6fa11a;
case 0x6fa11d:c.instructions+=3;goto B6fa11d;
case 0x6fa11e:c.instructions+=2;goto B6fa11e;
case 0x6fa120:c.instructions+=1;goto B6fa120;
case 0x6fa122:goto L6fa122;
case 0x6fa124:c.instructions+=2;goto B6fa124;
case 0x6fa127:c.instructions+=1;goto B6fa127;
case 0x6fa129:goto L6fa129;
case 0x6fa12b:goto L6fa12b;
case 0x6fa12d:c.instructions+=2;goto B6fa12d;
case 0x6fa130:c.instructions+=1;goto B6fa130;
case 0x6fa136:goto L6fa136;
case 0x6fa138:goto L6fa138;
case 0x6fa13d:goto L6fa13d;
case 0x6fa13f:c.instructions+=9;goto B6fa13f;
case 0x6fa140:c.instructions+=8;goto B6fa140;
case 0x6fa145:c.instructions+=7;goto B6fa145;
case 0x6fa147:c.instructions+=6;goto B6fa147;
case 0x6fa148:c.instructions+=5;goto B6fa148;
case 0x6fa149:c.instructions+=4;goto B6fa149;
case 0x6fa14e:c.instructions+=3;goto B6fa14e;
case 0x6fa154:c.instructions+=2;goto B6fa154;
case 0x6fa155:c.instructions+=1;goto B6fa155;
case 0x6fa15b:goto L6fa15b;
case 0x6fa15d:c.instructions+=2;goto B6fa15d;
case 0x6fa160:c.instructions+=1;goto B6fa160;
case 0x6fa166:goto L6fa166;
case 0x6fa169:c.instructions+=1;goto B6fa169;
case 0x6fa16e:goto L6fa16e;
case 0x6fa16f:c.instructions+=9;goto B6fa16f;
case 0x6fa170:c.instructions+=8;goto B6fa170;
case 0x6fa173:c.instructions+=7;goto B6fa173;
case 0x6fa175:c.instructions+=6;goto B6fa175;
case 0x6fa178:c.instructions+=5;goto B6fa178;
case 0x6fa179:c.instructions+=4;goto B6fa179;
case 0x6fa17a:c.instructions+=3;goto B6fa17a;
case 0x6fa17d:c.instructions+=2;goto B6fa17d;
case 0x6fa17e:c.instructions+=1;goto B6fa17e;
case 0x6fa184:goto L6fa184;
case 0x6fa185:c.instructions+=1;goto B6fa185;
case 0x6fa18b:goto L6fa18b;
case 0x6fa18e:c.instructions+=1;goto B6fa18e;
case 0x6fa190:goto L6fa190;
case 0x6fa195:c.instructions+=2;goto B6fa195;
case 0x6fa197:c.instructions+=1;goto B6fa197;
case 0x6fa19c:goto L6fa19c;
case 0x6fa1a1:c.instructions+=6;goto B6fa1a1;
case 0x6fa1a4:c.instructions+=5;goto B6fa1a4;
case 0x6fa1a7:c.instructions+=4;goto B6fa1a7;
case 0x6fa1aa:c.instructions+=3;goto B6fa1aa;
case 0x6fa1ad:c.instructions+=2;goto B6fa1ad;
case 0x6fa1b3:c.instructions+=1;goto B6fa1b3;
case 0x6fa1b5:goto L6fa1b5;
case 0x6fa1b7:goto L6fa1b7;
case 0x6fa1bd:c.instructions+=1;goto B6fa1bd;
case 0x6fa1bf:goto L6fa1bf;
case 0x6fa1c2:c.instructions+=4;goto B6fa1c2;
case 0x6fa1c5:c.instructions+=3;goto B6fa1c5;
case 0x6fa1cc:c.instructions+=2;goto B6fa1cc;
case 0x6fa1d0:c.instructions+=1;goto B6fa1d0;
case 0x6fa1d2:goto L6fa1d2;
case 0x6fa1d8:c.instructions+=2;goto B6fa1d8;
case 0x6fa1d9:c.instructions+=1;goto B6fa1d9;
case 0x6fa1df:goto L6fa1df;
case 0x6fa1e1:c.instructions+=1;goto B6fa1e1;
case 0x6fa1e6:goto L6fa1e6;
case 0x6fa1e8:goto L6fa1e8;
case 0x6fa1ee:c.instructions+=2;goto B6fa1ee;
case 0x6fa1ef:c.instructions+=1;goto B6fa1ef;
case 0x6fa1f5:goto L6fa1f5;
case 0x6fa1f8:c.instructions+=1;goto B6fa1f8;
case 0x6fa1fa:goto L6fa1fa;
case 0x6fa1fc:goto L6fa1fc;
case 0x6fa1fd:c.instructions+=4;goto B6fa1fd;
case 0x6fa1fe:c.instructions+=3;goto B6fa1fe;
case 0x6fa1ff:c.instructions+=2;goto B6fa1ff;
case 0x6fa200:c.instructions+=1;goto B6fa200;
case 0x6fa201:goto L6fa201;
case 0x6fa202:c.instructions+=5;goto B6fa202;
case 0x6fa203:c.instructions+=4;goto B6fa203;
case 0x6fa204:c.instructions+=3;goto B6fa204;
case 0x6fa209:c.instructions+=2;goto B6fa209;
case 0x6fa20a:c.instructions+=1;goto B6fa20a;
case 0x6fa20f:goto L6fa20f;
case 0x6fa211:c.instructions+=1;goto B6fa211;
case 0x6fa213:goto L6fa213;
case 0x6fa218:c.instructions+=1;goto B6fa218;
case 0x6fa21d:goto L6fa21d;
case 0x6fa21f:c.instructions+=2;goto B6fa21f;
case 0x6fa221:c.instructions+=1;goto B6fa221;
case 0x6fa223:goto L6fa223;
case 0x6fa228:c.instructions+=5;goto B6fa228;
case 0x6fa229:c.instructions+=4;goto B6fa229;
case 0x6fa22c:c.instructions+=3;goto B6fa22c;
case 0x6fa22d:c.instructions+=2;goto B6fa22d;
case 0x6fa22e:c.instructions+=1;goto B6fa22e;
case 0x6fa233:goto L6fa233;
case 0x6fa239:c.instructions+=5;goto B6fa239;
case 0x6fa23b:c.instructions+=4;goto B6fa23b;
case 0x6fa23e:c.instructions+=3;goto B6fa23e;
case 0x6fa23f:c.instructions+=2;goto B6fa23f;
case 0x6fa240:c.instructions+=1;goto B6fa240;
case 0x6fa243:goto L6fa243;
case 0x6fa249:c.instructions+=1;goto B6fa249;
case 0x6fa24b:goto L6fa24b;
case 0x6fa250:goto L6fa250;
case 0x6fa256:c.instructions+=3;goto B6fa256;
case 0x6fa25c:c.instructions+=2;goto B6fa25c;
case 0x6fa262:c.instructions+=1;goto B6fa262;
case 0x6fa264:goto L6fa264;
case 0x6fa265:c.instructions+=1;goto B6fa265;
case 0x6fa26a:goto L6fa26a;
case 0x6fa271:c.instructions+=3;goto B6fa271;
case 0x6fa277:c.instructions+=2;goto B6fa277;
case 0x6fa278:c.instructions+=1;goto B6fa278;
case 0x6fa27a:goto L6fa27a;
case 0x6fa27f:goto L6fa27f;
case 0x6fa280:c.instructions+=4;goto B6fa280;
case 0x6fa281:c.instructions+=3;goto B6fa281;
case 0x6fa283:c.instructions+=2;goto B6fa283;
case 0x6fa284:c.instructions+=1;goto B6fa284;
case 0x6fa285:goto L6fa285;
case 0x6fa286:c.instructions+=14;goto B6fa286;
case 0x6fa288:c.instructions+=13;goto B6fa288;
case 0x6fa28e:c.instructions+=12;goto B6fa28e;
case 0x6fa28f:c.instructions+=11;goto B6fa28f;
case 0x6fa291:c.instructions+=10;goto B6fa291;
case 0x6fa292:c.instructions+=9;goto B6fa292;
case 0x6fa298:c.instructions+=8;goto B6fa298;
case 0x6fa29e:c.instructions+=7;goto B6fa29e;
case 0x6fa29f:c.instructions+=6;goto B6fa29f;
case 0x6fa2a4:c.instructions+=5;goto B6fa2a4;
case 0x6fa2a7:c.instructions+=4;goto B6fa2a7;
case 0x6fa2ad:c.instructions+=3;goto B6fa2ad;
case 0x6fa2b4:c.instructions+=2;goto B6fa2b4;
case 0x6fa2ba:c.instructions+=1;goto B6fa2ba;
case 0x6fa2bf:goto L6fa2bf;
case 0x6fa2c4:c.instructions+=1;goto B6fa2c4;
case 0x6fa2c9:goto L6fa2c9;
case 0x6fa2cb:c.instructions+=6;goto B6fa2cb;
case 0x6fa2cc:c.instructions+=5;goto B6fa2cc;
case 0x6fa2cd:c.instructions+=4;goto B6fa2cd;
case 0x6fa2ce:c.instructions+=3;goto B6fa2ce;
case 0x6fa2d3:c.instructions+=2;goto B6fa2d3;
case 0x6fa2d8:c.instructions+=1;goto B6fa2d8;
case 0x6fa2dd:goto L6fa2dd;
case 0x6fa2e2:c.instructions+=5;goto B6fa2e2;
case 0x6fa2e8:c.instructions+=4;goto B6fa2e8;
case 0x6fa2eb:c.instructions+=3;goto B6fa2eb;
case 0x6fa2f2:c.instructions+=2;goto B6fa2f2;
case 0x6fa2f4:c.instructions+=1;goto B6fa2f4;
case 0x6fa2f6:goto L6fa2f6;
case 0x6fa2f8:c.instructions+=4;goto B6fa2f8;
case 0x6fa2fb:c.instructions+=3;goto B6fa2fb;
case 0x6fa2fc:c.instructions+=2;goto B6fa2fc;
case 0x6fa2fe:c.instructions+=1;goto B6fa2fe;
case 0x6fa300:goto L6fa300;
case 0x6fa305:c.instructions+=1;goto B6fa305;
case 0x6fa307:goto L6fa307;
case 0x6fa309:c.instructions+=3;goto B6fa309;
case 0x6fa30a:c.instructions+=2;goto B6fa30a;
case 0x6fa30c:c.instructions+=1;goto B6fa30c;
case 0x6fa30e:goto L6fa30e;
case 0x6fa314:c.instructions+=2;goto B6fa314;
case 0x6fa316:c.instructions+=1;goto B6fa316;
case 0x6fa317:goto L6fa317;
case 0x6fa31a:c.instructions+=3;goto B6fa31a;
case 0x6fa31b:c.instructions+=2;goto B6fa31b;
case 0x6fa31d:c.instructions+=1;goto B6fa31d;
case 0x6fa31f:goto L6fa31f;
case 0x6fa321:c.instructions+=2;goto B6fa321;
case 0x6fa324:c.instructions+=1;goto B6fa324;
case 0x6fa326:goto L6fa326;
case 0x6fa328:goto L6fa328;
case 0x6fa32a:c.instructions+=5;goto B6fa32a;
case 0x6fa32b:c.instructions+=4;goto B6fa32b;
case 0x6fa331:c.instructions+=3;goto B6fa331;
case 0x6fa334:c.instructions+=2;goto B6fa334;
case 0x6fa335:c.instructions+=1;goto B6fa335;
case 0x6fa336:goto L6fa336;
case 0x6fa338:goto L6fa338;
case 0x6fa33d:goto L6fa33d;
case 0x6fa33f:c.instructions+=4;goto B6fa33f;
case 0x6fa342:c.instructions+=3;goto B6fa342;
case 0x6fa344:c.instructions+=2;goto B6fa344;
case 0x6fa34a:c.instructions+=1;goto B6fa34a;
case 0x6fa34c:goto L6fa34c;
case 0x6fa352:c.instructions+=3;goto B6fa352;
case 0x6fa355:c.instructions+=2;goto B6fa355;
case 0x6fa357:c.instructions+=1;goto B6fa357;
case 0x6fa359:goto L6fa359;
case 0x6fa35c:c.instructions+=4;goto B6fa35c;
case 0x6fa35f:c.instructions+=3;goto B6fa35f;
case 0x6fa362:c.instructions+=2;goto B6fa362;
case 0x6fa364:c.instructions+=1;goto B6fa364;
case 0x6fa366:goto L6fa366;
case 0x6fa369:c.instructions+=3;goto B6fa369;
case 0x6fa36c:c.instructions+=2;goto B6fa36c;
case 0x6fa36e:c.instructions+=1;goto B6fa36e;
case 0x6fa370:goto L6fa370;
case 0x6fa373:c.instructions+=6;goto B6fa373;
case 0x6fa379:c.instructions+=5;goto B6fa379;
case 0x6fa37a:c.instructions+=4;goto B6fa37a;
case 0x6fa37b:c.instructions+=3;goto B6fa37b;
case 0x6fa381:c.instructions+=2;goto B6fa381;
case 0x6fa382:c.instructions+=1;goto B6fa382;
case 0x6fa387:goto L6fa387;
case 0x6fa38d:c.instructions+=5;goto B6fa38d;
case 0x6fa390:c.instructions+=4;goto B6fa390;
case 0x6fa393:c.instructions+=3;goto B6fa393;
case 0x6fa396:c.instructions+=2;goto B6fa396;
case 0x6fa398:c.instructions+=1;goto B6fa398;
case 0x6fa39a:goto L6fa39a;
case 0x6fa3a0:c.instructions+=4;goto B6fa3a0;
case 0x6fa3a2:c.instructions+=3;goto B6fa3a2;
case 0x6fa3a3:c.instructions+=2;goto B6fa3a3;
case 0x6fa3a4:c.instructions+=1;goto B6fa3a4;
case 0x6fa3a7:goto L6fa3a7;
case 0x6fa3ad:goto L6fa3ad;
case 0x6fa3ae:c.instructions+=4;goto B6fa3ae;
case 0x6fa3b1:c.instructions+=3;goto B6fa3b1;
case 0x6fa3b2:c.instructions+=2;goto B6fa3b2;
case 0x6fa3b5:c.instructions+=1;goto B6fa3b5;
case 0x6fa3ba:goto L6fa3ba;
case 0x6fa3bd:c.instructions+=4;goto B6fa3bd;
case 0x6fa3c0:c.instructions+=3;goto B6fa3c0;
case 0x6fa3c3:c.instructions+=2;goto B6fa3c3;
case 0x6fa3c6:c.instructions+=1;goto B6fa3c6;
case 0x6fa3cc:goto L6fa3cc;
case 0x6fa3cf:c.instructions+=1;goto B6fa3cf;
case 0x6fa3d1:goto L6fa3d1;
case 0x6fa3d7:c.instructions+=16;goto B6fa3d7;
case 0x6fa3da:c.instructions+=15;goto B6fa3da;
case 0x6fa3dd:c.instructions+=14;goto B6fa3dd;
case 0x6fa3e0:c.instructions+=13;goto B6fa3e0;
case 0x6fa3e3:c.instructions+=12;goto B6fa3e3;
case 0x6fa3e4:c.instructions+=11;goto B6fa3e4;
case 0x6fa3eb:c.instructions+=10;goto B6fa3eb;
case 0x6fa3f2:c.instructions+=9;goto B6fa3f2;
case 0x6fa3f9:c.instructions+=8;goto B6fa3f9;
case 0x6fa400:c.instructions+=7;goto B6fa400;
case 0x6fa407:c.instructions+=6;goto B6fa407;
case 0x6fa40e:c.instructions+=5;goto B6fa40e;
case 0x6fa411:c.instructions+=4;goto B6fa411;
case 0x6fa414:c.instructions+=3;goto B6fa414;
case 0x6fa416:c.instructions+=2;goto B6fa416;
case 0x6fa41b:c.instructions+=1;goto B6fa41b;
case 0x6fa41d:goto L6fa41d;
case 0x6fa420:goto L6fa420;
case 0x6fa422:c.instructions+=2;goto B6fa422;
case 0x6fa425:c.instructions+=1;goto B6fa425;
case 0x6fa42a:goto L6fa42a;
case 0x6fa42c:c.instructions+=4;goto B6fa42c;
case 0x6fa42d:c.instructions+=3;goto B6fa42d;
case 0x6fa42f:c.instructions+=2;goto B6fa42f;
case 0x6fa430:c.instructions+=1;goto B6fa430;
case 0x6fa435:goto L6fa435;
case 0x6fa437:c.instructions+=3;goto B6fa437;
case 0x6fa438:c.instructions+=2;goto B6fa438;
case 0x6fa43a:c.instructions+=1;goto B6fa43a;
case 0x6fa43f:goto L6fa43f;
case 0x6fa442:c.instructions+=5;goto B6fa442;
case 0x6fa443:c.instructions+=4;goto B6fa443;
case 0x6fa445:c.instructions+=3;goto B6fa445;
case 0x6fa446:c.instructions+=2;goto B6fa446;
case 0x6fa44c:c.instructions+=1;goto B6fa44c;
case 0x6fa451:goto L6fa451;
case 0x6fa454:c.instructions+=3;goto B6fa454;
case 0x6fa457:c.instructions+=2;goto B6fa457;
case 0x6fa459:c.instructions+=1;goto B6fa459;
case 0x6fa45b:goto L6fa45b;
case 0x6fa45d:c.instructions+=4;goto B6fa45d;
case 0x6fa460:c.instructions+=3;goto B6fa460;
case 0x6fa461:c.instructions+=2;goto B6fa461;
case 0x6fa463:c.instructions+=1;goto B6fa463;
case 0x6fa465:goto L6fa465;
case 0x6fa468:c.instructions+=3;goto B6fa468;
case 0x6fa46f:c.instructions+=2;goto B6fa46f;
case 0x6fa472:c.instructions+=1;goto B6fa472;
case 0x6fa478:goto L6fa478;
case 0x6fa47b:c.instructions+=4;goto B6fa47b;
case 0x6fa47d:c.instructions+=3;goto B6fa47d;
case 0x6fa480:c.instructions+=2;goto B6fa480;
case 0x6fa481:c.instructions+=1;goto B6fa481;
case 0x6fa486:goto L6fa486;
case 0x6fa488:c.instructions+=3;goto B6fa488;
case 0x6fa489:c.instructions+=2;goto B6fa489;
case 0x6fa48a:c.instructions+=1;goto B6fa48a;
case 0x6fa490:goto L6fa490;
case 0x6fa492:c.instructions+=2;goto B6fa492;
case 0x6fa493:c.instructions+=1;goto B6fa493;
case 0x6fa498:goto L6fa498;
case 0x6fa49a:c.instructions+=3;goto B6fa49a;
case 0x6fa49b:c.instructions+=2;goto B6fa49b;
case 0x6fa49c:c.instructions+=1;goto B6fa49c;
case 0x6fa4a2:goto L6fa4a2;
case 0x6fa4a4:c.instructions+=1;goto B6fa4a4;
case 0x6fa4a9:goto L6fa4a9;
case 0x6fa4ab:c.instructions+=1;goto B6fa4ab;
case 0x6fa4b1:goto L6fa4b1;
case 0x6fa4b6:c.instructions+=2;goto B6fa4b6;
case 0x6fa4bc:c.instructions+=1;goto B6fa4bc;
case 0x6fa4be:goto L6fa4be;
case 0x6fa4c0:c.instructions+=4;goto B6fa4c0;
case 0x6fa4c3:c.instructions+=3;goto B6fa4c3;
case 0x6fa4c4:c.instructions+=2;goto B6fa4c4;
case 0x6fa4c6:c.instructions+=1;goto B6fa4c6;
case 0x6fa4c8:goto L6fa4c8;
case 0x6fa4cb:c.instructions+=2;goto B6fa4cb;
case 0x6fa4ce:c.instructions+=1;goto B6fa4ce;
case 0x6fa4d0:goto L6fa4d0;
case 0x6fa4d2:c.instructions+=3;goto B6fa4d2;
case 0x6fa4d3:c.instructions+=2;goto B6fa4d3;
case 0x6fa4d5:c.instructions+=1;goto B6fa4d5;
case 0x6fa4d7:goto L6fa4d7;
case 0x6fa4dd:c.instructions+=2;goto B6fa4dd;
case 0x6fa4df:c.instructions+=1;goto B6fa4df;
case 0x6fa4e0:goto L6fa4e0;
case 0x6fa4e3:c.instructions+=3;goto B6fa4e3;
case 0x6fa4e4:c.instructions+=2;goto B6fa4e4;
case 0x6fa4e6:c.instructions+=1;goto B6fa4e6;
case 0x6fa4e8:goto L6fa4e8;
case 0x6fa4ea:c.instructions+=2;goto B6fa4ea;
case 0x6fa4ed:c.instructions+=1;goto B6fa4ed;
case 0x6fa4ee:goto L6fa4ee;
case 0x6fa4f0:goto L6fa4f0;
case 0x6fa4f5:c.instructions+=8;goto B6fa4f5;
case 0x6fa4f7:c.instructions+=7;goto B6fa4f7;
case 0x6fa4f8:c.instructions+=6;goto B6fa4f8;
case 0x6fa4f9:c.instructions+=5;goto B6fa4f9;
case 0x6fa4fb:c.instructions+=4;goto B6fa4fb;
case 0x6fa500:c.instructions+=3;goto B6fa500;
case 0x6fa506:c.instructions+=2;goto B6fa506;
case 0x6fa509:c.instructions+=1;goto B6fa509;
case 0x6fa50a:goto L6fa50a;
case 0x6fa50c:goto L6fa50c;
case 0x6fa512:goto L6fa512;
case 0x6fa514:c.instructions+=2;goto B6fa514;
case 0x6fa517:c.instructions+=1;goto B6fa517;
case 0x6fa519:goto L6fa519;
case 0x6fa51c:c.instructions+=3;goto B6fa51c;
case 0x6fa51f:c.instructions+=2;goto B6fa51f;
case 0x6fa520:c.instructions+=1;goto B6fa520;
case 0x6fa525:goto L6fa525;
case 0x6fa52b:c.instructions+=6;goto B6fa52b;
case 0x6fa52c:c.instructions+=5;goto B6fa52c;
case 0x6fa52d:c.instructions+=4;goto B6fa52d;
case 0x6fa52e:c.instructions+=3;goto B6fa52e;
case 0x6fa531:c.instructions+=2;goto B6fa531;
case 0x6fa534:c.instructions+=1;goto B6fa534;
case 0x6fa53a:goto L6fa53a;
case 0x6fa53c:c.instructions+=5;goto B6fa53c;
case 0x6fa53f:c.instructions+=4;goto B6fa53f;
case 0x6fa540:c.instructions+=3;goto B6fa540;
case 0x6fa543:c.instructions+=2;goto B6fa543;
case 0x6fa54a:c.instructions+=1;goto B6fa54a;
case 0x6fa550:goto L6fa550;
case 0x6fa555:goto L6fa555;
case 0x6fa55a:c.instructions+=3;goto B6fa55a;
case 0x6fa55c:c.instructions+=2;goto B6fa55c;
case 0x6fa55e:c.instructions+=1;goto B6fa55e;
case 0x6fa560:goto L6fa560;
case 0x6fa563:c.instructions+=1;goto B6fa563;
case 0x6fa569:goto L6fa569;
case 0x6fa56f:c.instructions+=1;goto B6fa56f;
case 0x6fa571:goto L6fa571;
case 0x6fa573:c.instructions+=3;goto B6fa573;
case 0x6fa575:c.instructions+=2;goto B6fa575;
case 0x6fa577:c.instructions+=1;goto B6fa577;
case 0x6fa579:goto L6fa579;
case 0x6fa57c:c.instructions+=2;goto B6fa57c;
case 0x6fa581:c.instructions+=1;goto B6fa581;
case 0x6fa586:goto L6fa586;
case 0x6fa589:c.instructions+=1;goto B6fa589;
case 0x6fa58e:goto L6fa58e;
case 0x6fa58f:c.instructions+=3;goto B6fa58f;
case 0x6fa590:c.instructions+=2;goto B6fa590;
case 0x6fa595:c.instructions+=1;goto B6fa595;
case 0x6fa59a:goto L6fa59a;
case 0x6fa59c:goto L6fa59c;
case 0x6fa5a2:c.instructions+=4;goto B6fa5a2;
case 0x6fa5a5:c.instructions+=3;goto B6fa5a5;
case 0x6fa5aa:c.instructions+=2;goto B6fa5aa;
case 0x6fa5b0:c.instructions+=1;goto B6fa5b0;
case 0x6fa5b2:goto L6fa5b2;
case 0x6fa5b4:c.instructions+=4;goto B6fa5b4;
case 0x6fa5b7:c.instructions+=3;goto B6fa5b7;
case 0x6fa5b8:c.instructions+=2;goto B6fa5b8;
case 0x6fa5ba:c.instructions+=1;goto B6fa5ba;
case 0x6fa5bc:goto L6fa5bc;
case 0x6fa5bf:c.instructions+=1;goto B6fa5bf;
case 0x6fa5c1:goto L6fa5c1;
case 0x6fa5c3:c.instructions+=3;goto B6fa5c3;
case 0x6fa5c4:c.instructions+=2;goto B6fa5c4;
case 0x6fa5c6:c.instructions+=1;goto B6fa5c6;
case 0x6fa5c8:goto L6fa5c8;
case 0x6fa5ce:c.instructions+=2;goto B6fa5ce;
case 0x6fa5d0:c.instructions+=1;goto B6fa5d0;
case 0x6fa5d1:goto L6fa5d1;
case 0x6fa5d4:c.instructions+=3;goto B6fa5d4;
case 0x6fa5d5:c.instructions+=2;goto B6fa5d5;
case 0x6fa5d7:c.instructions+=1;goto B6fa5d7;
case 0x6fa5d9:goto L6fa5d9;
case 0x6fa5db:c.instructions+=2;goto B6fa5db;
case 0x6fa5de:c.instructions+=1;goto B6fa5de;
case 0x6fa5e0:goto L6fa5e0;
case 0x6fa5e2:goto L6fa5e2;
case 0x6fa5e4:c.instructions+=1;goto B6fa5e4;
case 0x6fa5e7:goto L6fa5e7;
case 0x6fa5e9:goto L6fa5e9;
case 0x6fa5ec:c.instructions+=3;goto B6fa5ec;
case 0x6fa5ef:c.instructions+=2;goto B6fa5ef;
case 0x6fa5f5:c.instructions+=1;goto B6fa5f5;
case 0x6fa5f7:goto L6fa5f7;
case 0x6fa5f9:c.instructions+=4;goto B6fa5f9;
case 0x6fa5fc:c.instructions+=3;goto B6fa5fc;
case 0x6fa5fd:c.instructions+=2;goto B6fa5fd;
case 0x6fa5ff:c.instructions+=1;goto B6fa5ff;
case 0x6fa601:goto L6fa601;
case 0x6fa607:c.instructions+=1;goto B6fa607;
case 0x6fa60a:goto L6fa60a;
case 0x6fa60c:c.instructions+=3;goto B6fa60c;
case 0x6fa60d:c.instructions+=2;goto B6fa60d;
case 0x6fa60f:c.instructions+=1;goto B6fa60f;
case 0x6fa611:goto L6fa611;
case 0x6fa613:c.instructions+=1;goto B6fa613;
case 0x6fa61a:goto L6fa61a;
case 0x6fa61b:c.instructions+=2;goto B6fa61b;
case 0x6fa61e:c.instructions+=1;goto B6fa61e;
case 0x6fa620:goto L6fa620;
case 0x6fa623:c.instructions+=5;goto B6fa623;
case 0x6fa629:c.instructions+=4;goto B6fa629;
case 0x6fa62a:c.instructions+=3;goto B6fa62a;
case 0x6fa630:c.instructions+=2;goto B6fa630;
case 0x6fa631:c.instructions+=1;goto B6fa631;
case 0x6fa636:goto L6fa636;
case 0x6fa638:c.instructions+=3;goto B6fa638;
case 0x6fa639:c.instructions+=2;goto B6fa639;
case 0x6fa63a:c.instructions+=1;goto B6fa63a;
case 0x6fa640:goto L6fa640;
case 0x6fa647:c.instructions+=1;goto B6fa647;
case 0x6fa64d:goto L6fa64d;
case 0x6fa650:c.instructions+=2;goto B6fa650;
case 0x6fa652:c.instructions+=1;goto B6fa652;
case 0x6fa654:goto L6fa654;
case 0x6fa65a:c.instructions+=16;goto B6fa65a;
case 0x6fa65d:c.instructions+=15;goto B6fa65d;
case 0x6fa660:c.instructions+=14;goto B6fa660;
case 0x6fa663:c.instructions+=13;goto B6fa663;
case 0x6fa666:c.instructions+=12;goto B6fa666;
case 0x6fa667:c.instructions+=11;goto B6fa667;
case 0x6fa66e:c.instructions+=10;goto B6fa66e;
case 0x6fa675:c.instructions+=9;goto B6fa675;
case 0x6fa67c:c.instructions+=8;goto B6fa67c;
case 0x6fa683:c.instructions+=7;goto B6fa683;
case 0x6fa68a:c.instructions+=6;goto B6fa68a;
case 0x6fa691:c.instructions+=5;goto B6fa691;
case 0x6fa694:c.instructions+=4;goto B6fa694;
case 0x6fa697:c.instructions+=3;goto B6fa697;
case 0x6fa699:c.instructions+=2;goto B6fa699;
case 0x6fa69e:c.instructions+=1;goto B6fa69e;
case 0x6fa6a0:goto L6fa6a0;
case 0x6fa6a2:c.instructions+=1;goto B6fa6a2;
case 0x6fa6a5:goto L6fa6a5;
case 0x6fa6ab:c.instructions+=3;goto B6fa6ab;
case 0x6fa6ae:c.instructions+=2;goto B6fa6ae;
case 0x6fa6b0:c.instructions+=1;goto B6fa6b0;
case 0x6fa6b2:goto L6fa6b2;
case 0x6fa6b4:c.instructions+=4;goto B6fa6b4;
case 0x6fa6b7:c.instructions+=3;goto B6fa6b7;
case 0x6fa6b8:c.instructions+=2;goto B6fa6b8;
case 0x6fa6ba:c.instructions+=1;goto B6fa6ba;
case 0x6fa6bc:goto L6fa6bc;
case 0x6fa6c2:c.instructions+=1;goto B6fa6c2;
case 0x6fa6c4:goto L6fa6c4;
case 0x6fa6c6:c.instructions+=3;goto B6fa6c6;
case 0x6fa6c7:c.instructions+=2;goto B6fa6c7;
case 0x6fa6c9:c.instructions+=1;goto B6fa6c9;
case 0x6fa6cb:goto L6fa6cb;
case 0x6fa6cd:c.instructions+=2;goto B6fa6cd;
case 0x6fa6cf:c.instructions+=1;goto B6fa6cf;
case 0x6fa6d2:goto L6fa6d2;
case 0x6fa6d5:c.instructions+=3;goto B6fa6d5;
case 0x6fa6d6:c.instructions+=2;goto B6fa6d6;
case 0x6fa6d8:c.instructions+=1;goto B6fa6d8;
case 0x6fa6da:goto L6fa6da;
case 0x6fa6dc:c.instructions+=2;goto B6fa6dc;
case 0x6fa6df:c.instructions+=1;goto B6fa6df;
case 0x6fa6e1:goto L6fa6e1;
case 0x6fa6e3:goto L6fa6e3;
case 0x6fa6e5:c.instructions+=1;goto B6fa6e5;
case 0x6fa6e8:goto L6fa6e8;
case 0x6fa6ea:goto L6fa6ea;
case 0x6fa6ed:c.instructions+=2;goto B6fa6ed;
case 0x6fa6f0:c.instructions+=1;goto B6fa6f0;
case 0x6fa6f5:goto L6fa6f5;
case 0x6fa6f7:c.instructions+=1;goto B6fa6f7;
case 0x6fa6fd:goto L6fa6fd;
case 0x6fa702:c.instructions+=2;goto B6fa702;
case 0x6fa708:c.instructions+=1;goto B6fa708;
case 0x6fa70a:goto L6fa70a;
case 0x6fa70c:c.instructions+=4;goto B6fa70c;
case 0x6fa70f:c.instructions+=3;goto B6fa70f;
case 0x6fa710:c.instructions+=2;goto B6fa710;
case 0x6fa712:c.instructions+=1;goto B6fa712;
case 0x6fa714:goto L6fa714;
case 0x6fa717:c.instructions+=2;goto B6fa717;
case 0x6fa71a:c.instructions+=1;goto B6fa71a;
case 0x6fa71c:goto L6fa71c;
case 0x6fa71e:c.instructions+=3;goto B6fa71e;
case 0x6fa71f:c.instructions+=2;goto B6fa71f;
case 0x6fa721:c.instructions+=1;goto B6fa721;
case 0x6fa723:goto L6fa723;
case 0x6fa729:c.instructions+=2;goto B6fa729;
case 0x6fa72b:c.instructions+=1;goto B6fa72b;
case 0x6fa72c:goto L6fa72c;
case 0x6fa72f:c.instructions+=3;goto B6fa72f;
case 0x6fa730:c.instructions+=2;goto B6fa730;
case 0x6fa732:c.instructions+=1;goto B6fa732;
case 0x6fa734:goto L6fa734;
case 0x6fa736:c.instructions+=2;goto B6fa736;
case 0x6fa739:c.instructions+=1;goto B6fa739;
case 0x6fa73a:goto L6fa73a;
case 0x6fa73c:goto L6fa73c;
case 0x6fa741:c.instructions+=8;goto B6fa741;
case 0x6fa743:c.instructions+=7;goto B6fa743;
case 0x6fa744:c.instructions+=6;goto B6fa744;
case 0x6fa745:c.instructions+=5;goto B6fa745;
case 0x6fa747:c.instructions+=4;goto B6fa747;
case 0x6fa74c:c.instructions+=3;goto B6fa74c;
case 0x6fa752:c.instructions+=2;goto B6fa752;
case 0x6fa755:c.instructions+=1;goto B6fa755;
case 0x6fa756:goto L6fa756;
case 0x6fa758:goto L6fa758;
case 0x6fa75e:goto L6fa75e;
case 0x6fa760:c.instructions+=2;goto B6fa760;
case 0x6fa763:c.instructions+=1;goto B6fa763;
case 0x6fa765:goto L6fa765;
case 0x6fa768:c.instructions+=3;goto B6fa768;
case 0x6fa76b:c.instructions+=2;goto B6fa76b;
case 0x6fa76c:c.instructions+=1;goto B6fa76c;
case 0x6fa771:goto L6fa771;
case 0x6fa777:c.instructions+=6;goto B6fa777;
case 0x6fa778:c.instructions+=5;goto B6fa778;
case 0x6fa779:c.instructions+=4;goto B6fa779;
case 0x6fa77a:c.instructions+=3;goto B6fa77a;
case 0x6fa77d:c.instructions+=2;goto B6fa77d;
case 0x6fa780:c.instructions+=1;goto B6fa780;
case 0x6fa786:goto L6fa786;
case 0x6fa788:c.instructions+=5;goto B6fa788;
case 0x6fa78b:c.instructions+=4;goto B6fa78b;
case 0x6fa78c:c.instructions+=3;goto B6fa78c;
case 0x6fa78f:c.instructions+=2;goto B6fa78f;
case 0x6fa796:c.instructions+=1;goto B6fa796;
case 0x6fa79c:goto L6fa79c;
case 0x6fa79e:goto L6fa79e;
case 0x6fa7a1:c.instructions+=5;goto B6fa7a1;
case 0x6fa7a4:c.instructions+=4;goto B6fa7a4;
case 0x6fa7aa:c.instructions+=3;goto B6fa7aa;
case 0x6fa7af:c.instructions+=2;goto B6fa7af;
case 0x6fa7b1:c.instructions+=1;goto B6fa7b1;
case 0x6fa7b3:goto L6fa7b3;
case 0x6fa7b9:c.instructions+=1;goto B6fa7b9;
case 0x6fa7bb:goto L6fa7bb;
case 0x6fa7bd:c.instructions+=1;goto B6fa7bd;
case 0x6fa7bf:goto L6fa7bf;
case 0x6fa7c1:c.instructions+=1;goto B6fa7c1;
case 0x6fa7c3:goto L6fa7c3;
case 0x6fa7c4:c.instructions+=2;goto B6fa7c4;
case 0x6fa7c9:c.instructions+=1;goto B6fa7c9;
case 0x6fa7ce:goto L6fa7ce;
case 0x6fa7d1:goto L6fa7d1;
case 0x6fa7d7:c.instructions+=2;goto B6fa7d7;
case 0x6fa7d8:c.instructions+=1;goto B6fa7d8;
case 0x6fa7dd:goto L6fa7dd;
case 0x6fa7df:c.instructions+=2;goto B6fa7df;
case 0x6fa7e0:c.instructions+=1;goto B6fa7e0;
case 0x6fa7e6:goto L6fa7e6;
case 0x6fa7ec:c.instructions+=2;goto B6fa7ec;
case 0x6fa7ed:c.instructions+=1;goto B6fa7ed;
case 0x6fa7f2:goto L6fa7f2;
case 0x6fa7f3:goto L6fa7f3;
case 0x6fa7f6:c.instructions+=3;goto B6fa7f6;
case 0x6fa7f9:c.instructions+=2;goto B6fa7f9;
case 0x6fa7fc:c.instructions+=1;goto B6fa7fc;
case 0x6fa802:goto L6fa802;
case 0x6fa805:c.instructions+=1;goto B6fa805;
case 0x6fa807:goto L6fa807;
case 0x6fa80d:c.instructions+=4;goto B6fa80d;
case 0x6fa80f:c.instructions+=3;goto B6fa80f;
case 0x6fa810:c.instructions+=2;goto B6fa810;
case 0x6fa813:c.instructions+=1;goto B6fa813;
case 0x6fa816:goto L6fa816;
case 0x6fa81c:c.instructions+=4;goto B6fa81c;
case 0x6fa81e:c.instructions+=3;goto B6fa81e;
case 0x6fa81f:c.instructions+=2;goto B6fa81f;
case 0x6fa822:c.instructions+=1;goto B6fa822;
case 0x6fa825:goto L6fa825;
case 0x6fa82a:goto L6fa82a;
case 0x6fa82b:c.instructions+=4;goto B6fa82b;
case 0x6fa82c:c.instructions+=3;goto B6fa82c;
case 0x6fa82d:c.instructions+=2;goto B6fa82d;
case 0x6fa82e:c.instructions+=1;goto B6fa82e;
case 0x6fa82f:goto L6fa82f;
case 0x6fa830:c.instructions+=3;goto B6fa830;
case 0x6fa831:c.instructions+=2;goto B6fa831;
case 0x6fa836:c.instructions+=1;goto B6fa836;
case 0x6fa83b:goto L6fa83b;
case 0x6fa83d:goto L6fa83d;
case 0x6fa83e:c.instructions+=4;goto B6fa83e;
case 0x6fa840:c.instructions+=3;goto B6fa840;
case 0x6fa843:c.instructions+=2;goto B6fa843;
case 0x6fa845:c.instructions+=1;goto B6fa845;
case 0x6fa847:goto L6fa847;
case 0x6fa84a:c.instructions+=1;goto B6fa84a;
case 0x6fa84f:goto L6fa84f;
case 0x6fa851:goto L6fa851;
case 0x6fa854:c.instructions+=2;goto B6fa854;
case 0x6fa857:c.instructions+=1;goto B6fa857;
case 0x6fa859:goto L6fa859;
case 0x6fa85c:goto L6fa85c;
case 0x6fa85d:c.instructions+=5;goto B6fa85d;
case 0x6fa85f:c.instructions+=4;goto B6fa85f;
case 0x6fa861:c.instructions+=3;goto B6fa861;
case 0x6fa863:c.instructions+=2;goto B6fa863;
case 0x6fa866:c.instructions+=1;goto B6fa866;
case 0x6fa867:goto L6fa867;
case 0x6fa868:c.instructions+=1;goto B6fa868;
case 0x6fa86b:goto L6fa86b;
case 0x6fa86c:c.instructions+=8;goto B6fa86c;
case 0x6fa86e:c.instructions+=7;goto B6fa86e;
case 0x6fa86f:c.instructions+=6;goto B6fa86f;
case 0x6fa870:c.instructions+=5;goto B6fa870;
case 0x6fa872:c.instructions+=4;goto B6fa872;
case 0x6fa874:c.instructions+=3;goto B6fa874;
case 0x6fa876:c.instructions+=2;goto B6fa876;
case 0x6fa879:c.instructions+=1;goto B6fa879;
case 0x6fa87b:goto L6fa87b;
case 0x6fa87e:c.instructions+=11;goto B6fa87e;
case 0x6fa882:c.instructions+=10;goto B6fa882;
case 0x6fa886:c.instructions+=9;goto B6fa886;
case 0x6fa889:c.instructions+=8;goto B6fa889;
case 0x6fa88a:c.instructions+=7;goto B6fa88a;
case 0x6fa88c:c.instructions+=6;goto B6fa88c;
case 0x6fa88e:c.instructions+=5;goto B6fa88e;
case 0x6fa88f:c.instructions+=4;goto B6fa88f;
case 0x6fa892:c.instructions+=3;goto B6fa892;
case 0x6fa894:c.instructions+=2;goto B6fa894;
case 0x6fa896:c.instructions+=1;goto B6fa896;
case 0x6fa898:goto L6fa898;
case 0x6fa89a:c.instructions+=5;goto B6fa89a;
case 0x6fa89b:c.instructions+=4;goto B6fa89b;
case 0x6fa89d:c.instructions+=3;goto B6fa89d;
case 0x6fa89e:c.instructions+=2;goto B6fa89e;
case 0x6fa89f:c.instructions+=1;goto B6fa89f;
case 0x6fa8a0:goto L6fa8a0;
case 0x6fa8a1:c.instructions+=5;goto B6fa8a1;
case 0x6fa8a2:c.instructions+=4;goto B6fa8a2;
case 0x6fa8a3:c.instructions+=3;goto B6fa8a3;
case 0x6fa8a5:c.instructions+=2;goto B6fa8a5;
case 0x6fa8a7:c.instructions+=1;goto B6fa8a7;
case 0x6fa8a9:goto L6fa8a9;
case 0x6fa8ac:c.instructions+=1;goto B6fa8ac;
case 0x6fa8ae:goto L6fa8ae;
case 0x6fa8af:c.instructions+=1;goto B6fa8af;
case 0x6fa8b0:goto L6fa8b0;
case 0x6fa8b3:c.instructions+=2;goto B6fa8b3;
case 0x6fa8b4:c.instructions+=1;goto B6fa8b4;
case 0x6fa8b9:goto L6fa8b9;
case 0x6fa8bb:c.instructions+=3;goto B6fa8bb;
case 0x6fa8be:c.instructions+=2;goto B6fa8be;
case 0x6fa8bf:c.instructions+=1;goto B6fa8bf;
case 0x6fa8c4:goto L6fa8c4;
case 0x6fa8c6:c.instructions+=3;goto B6fa8c6;
case 0x6fa8c7:c.instructions+=2;goto B6fa8c7;
case 0x6fa8c8:c.instructions+=1;goto B6fa8c8;
case 0x6fa8ca:goto L6fa8ca;
case 0x6fa8cb:c.instructions+=4;goto B6fa8cb;
case 0x6fa8cd:c.instructions+=3;goto B6fa8cd;
case 0x6fa8ce:c.instructions+=2;goto B6fa8ce;
case 0x6fa8cf:c.instructions+=1;goto B6fa8cf;
case 0x6fa8d0:goto L6fa8d0;
case 0x6fa8d1:c.instructions+=10;goto B6fa8d1;
case 0x6fa8d3:c.instructions+=9;goto B6fa8d3;
case 0x6fa8d4:c.instructions+=8;goto B6fa8d4;
case 0x6fa8d6:c.instructions+=7;goto B6fa8d6;
case 0x6fa8d7:c.instructions+=6;goto B6fa8d7;
case 0x6fa8da:c.instructions+=5;goto B6fa8da;
case 0x6fa8dc:c.instructions+=4;goto B6fa8dc;
case 0x6fa8de:c.instructions+=3;goto B6fa8de;
case 0x6fa8e1:c.instructions+=2;goto B6fa8e1;
case 0x6fa8e6:c.instructions+=1;goto B6fa8e6;
case 0x6fa8e8:goto L6fa8e8;
case 0x6fa8e9:c.instructions+=1;goto B6fa8e9;
case 0x6fa8eb:goto L6fa8eb;
case 0x6fa8ed:c.instructions+=2;goto B6fa8ed;
case 0x6fa8ee:c.instructions+=1;goto B6fa8ee;
case 0x6fa8f3:goto L6fa8f3;
case 0x6fa8f8:c.instructions+=3;goto B6fa8f8;
case 0x6fa8f9:c.instructions+=2;goto B6fa8f9;
case 0x6fa8fa:c.instructions+=1;goto B6fa8fa;
case 0x6fa8fc:goto L6fa8fc;
case 0x6fa8fe:c.instructions+=2;goto B6fa8fe;
case 0x6fa8ff:c.instructions+=1;goto B6fa8ff;
case 0x6fa901:goto L6fa901;
case 0x6fa902:c.instructions+=3;goto B6fa902;
case 0x6fa904:c.instructions+=2;goto B6fa904;
case 0x6fa905:c.instructions+=1;goto B6fa905;
case 0x6fa90a:goto L6fa90a;
case 0x6fa90f:c.instructions+=5;goto B6fa90f;
case 0x6fa911:c.instructions+=4;goto B6fa911;
case 0x6fa916:c.instructions+=3;goto B6fa916;
case 0x6fa917:c.instructions+=2;goto B6fa917;
case 0x6fa918:c.instructions+=1;goto B6fa918;
case 0x6fa91a:goto L6fa91a;
case 0x6fa91c:c.instructions+=1;goto B6fa91c;
case 0x6fa91e:goto L6fa91e;
case 0x6fa920:c.instructions+=2;goto B6fa920;
case 0x6fa921:c.instructions+=1;goto B6fa921;
case 0x6fa926:goto L6fa926;
case 0x6fa928:c.instructions+=4;goto B6fa928;
case 0x6fa92d:c.instructions+=3;goto B6fa92d;
case 0x6fa92e:c.instructions+=2;goto B6fa92e;
case 0x6fa92f:c.instructions+=1;goto B6fa92f;
case 0x6fa931:goto L6fa931;
case 0x6fa933:goto L6fa933;
case 0x6fa934:goto L6fa934;
case 0x6fa935:goto L6fa935;
case 0x6fa936:c.instructions+=4;goto B6fa936;
case 0x6fa938:c.instructions+=3;goto B6fa938;
case 0x6fa939:c.instructions+=2;goto B6fa939;
case 0x6fa93a:c.instructions+=1;goto B6fa93a;
case 0x6fa93b:goto L6fa93b;
case 0x6fa93c:c.instructions+=7;goto B6fa93c;
case 0x6fa93e:c.instructions+=6;goto B6fa93e;
case 0x6fa93f:c.instructions+=5;goto B6fa93f;
case 0x6fa942:c.instructions+=4;goto B6fa942;
case 0x6fa943:c.instructions+=3;goto B6fa943;
case 0x6fa944:c.instructions+=2;goto B6fa944;
case 0x6fa946:c.instructions+=1;goto B6fa946;
case 0x6fa94b:goto L6fa94b;
case 0x6fa94e:c.instructions+=2;goto B6fa94e;
case 0x6fa94f:c.instructions+=1;goto B6fa94f;
case 0x6fa951:goto L6fa951;
case 0x6fa953:goto L6fa953;
case 0x6fa956:c.instructions+=1;goto B6fa956;
case 0x6fa958:goto L6fa958;
case 0x6fa95b:c.instructions+=3;goto B6fa95b;
case 0x6fa95d:c.instructions+=2;goto B6fa95d;
case 0x6fa95e:c.instructions+=1;goto B6fa95e;
case 0x6fa963:goto L6fa963;
case 0x6fa964:c.instructions+=2;goto B6fa964;
case 0x6fa965:c.instructions+=1;goto B6fa965;
case 0x6fa967:goto L6fa967;
case 0x6fa969:c.instructions+=3;goto B6fa969;
case 0x6fa96c:c.instructions+=2;goto B6fa96c;
case 0x6fa96f:c.instructions+=1;goto B6fa96f;
case 0x6fa972:goto L6fa972;
case 0x6fa974:goto L6fa974;
case 0x6fa976:c.instructions+=4;goto B6fa976;
case 0x6fa977:c.instructions+=3;goto B6fa977;
case 0x6fa978:c.instructions+=2;goto B6fa978;
case 0x6fa979:c.instructions+=1;goto B6fa979;
case 0x6fa97a:goto L6fa97a;
case 0x6fa97b:c.instructions+=7;goto B6fa97b;
case 0x6fa97d:c.instructions+=6;goto B6fa97d;
case 0x6fa97e:c.instructions+=5;goto B6fa97e;
case 0x6fa982:c.instructions+=4;goto B6fa982;
case 0x6fa983:c.instructions+=3;goto B6fa983;
case 0x6fa985:c.instructions+=2;goto B6fa985;
case 0x6fa986:c.instructions+=1;goto B6fa986;
case 0x6fa98b:goto L6fa98b;
case 0x6fa98f:c.instructions+=4;goto B6fa98f;
case 0x6fa990:c.instructions+=3;goto B6fa990;
case 0x6fa992:c.instructions+=2;goto B6fa992;
case 0x6fa995:c.instructions+=1;goto B6fa995;
case 0x6fa997:goto L6fa997;
case 0x6fa99a:c.instructions+=1;goto B6fa99a;
case 0x6fa99c:goto L6fa99c;
case 0x6fa99f:c.instructions+=1;goto B6fa99f;
case 0x6fa9a1:goto L6fa9a1;
case 0x6fa9a4:c.instructions+=1;goto B6fa9a4;
case 0x6fa9a6:goto L6fa9a6;
case 0x6fa9a9:c.instructions+=2;goto B6fa9a9;
case 0x6fa9ac:c.instructions+=1;goto B6fa9ac;
case 0x6fa9ae:goto L6fa9ae;
case 0x6fa9b1:c.instructions+=1;goto B6fa9b1;
case 0x6fa9b3:goto L6fa9b3;
case 0x6fa9b4:c.instructions+=3;goto B6fa9b4;
case 0x6fa9b7:c.instructions+=2;goto B6fa9b7;
case 0x6fa9ba:c.instructions+=1;goto B6fa9ba;
case 0x6fa9bc:goto L6fa9bc;
case 0x6fa9bf:c.instructions+=1;goto B6fa9bf;
case 0x6fa9c1:goto L6fa9c1;
case 0x6fa9c4:c.instructions+=2;goto B6fa9c4;
case 0x6fa9c7:c.instructions+=1;goto B6fa9c7;
case 0x6fa9c9:goto L6fa9c9;
case 0x6fa9cc:c.instructions+=1;goto B6fa9cc;
case 0x6fa9ce:goto L6fa9ce;
case 0x6fa9d0:c.instructions+=2;goto B6fa9d0;
case 0x6fa9d7:c.instructions+=1;goto B6fa9d7;
case 0x6fa9d9:goto L6fa9d9;
case 0x6fa9dc:c.instructions+=7;goto B6fa9dc;
case 0x6fa9df:c.instructions+=6;goto B6fa9df;
case 0x6fa9e2:c.instructions+=5;goto B6fa9e2;
case 0x6fa9e5:c.instructions+=4;goto B6fa9e5;
case 0x6fa9e8:c.instructions+=3;goto B6fa9e8;
case 0x6fa9eb:c.instructions+=2;goto B6fa9eb;
case 0x6fa9f2:c.instructions+=1;goto B6fa9f2;
case 0x6fa9f4:goto L6fa9f4;
case 0x6fa9f7:c.instructions+=2;goto B6fa9f7;
case 0x6fa9f9:c.instructions+=1;goto B6fa9f9;
case 0x6fa9fb:goto L6fa9fb;
case 0x6fa9fe:c.instructions+=3;goto B6fa9fe;
case 0x6faa00:c.instructions+=2;goto B6faa00;
case 0x6faa01:c.instructions+=1;goto B6faa01;
case 0x6faa06:goto L6faa06;
case 0x6faa07:c.instructions+=2;goto B6faa07;
case 0x6faa08:c.instructions+=1;goto B6faa08;
case 0x6faa0a:goto L6faa0a;
case 0x6faa0b:goto L6faa0b;
case 0x6faa0e:c.instructions+=3;goto B6faa0e;
case 0x6faa0f:c.instructions+=2;goto B6faa0f;
case 0x6faa10:c.instructions+=1;goto B6faa10;
case 0x6faa11:goto L6faa11;
case 0x6faa12:c.instructions+=8;goto B6faa12;
case 0x6faa14:c.instructions+=7;goto B6faa14;
case 0x6faa15:c.instructions+=6;goto B6faa15;
case 0x6faa18:c.instructions+=5;goto B6faa18;
case 0x6faa1c:c.instructions+=4;goto B6faa1c;
case 0x6faa1d:c.instructions+=3;goto B6faa1d;
case 0x6faa1f:c.instructions+=2;goto B6faa1f;
case 0x6faa22:c.instructions+=1;goto B6faa22;
case 0x6faa27:goto L6faa27;
case 0x6faa2a:c.instructions+=4;goto B6faa2a;
case 0x6faa2b:c.instructions+=3;goto B6faa2b;
case 0x6faa2c:c.instructions+=2;goto B6faa2c;
case 0x6faa2d:c.instructions+=1;goto B6faa2d;
case 0x6faa2e:goto L6faa2e;
case 0x6faa2f:c.instructions+=12;goto B6faa2f;
case 0x6faa31:c.instructions+=11;goto B6faa31;
case 0x6faa32:c.instructions+=10;goto B6faa32;
case 0x6faa33:c.instructions+=9;goto B6faa33;
case 0x6faa37:c.instructions+=8;goto B6faa37;
case 0x6faa38:c.instructions+=7;goto B6faa38;
case 0x6faa3b:c.instructions+=6;goto B6faa3b;
case 0x6faa3c:c.instructions+=5;goto B6faa3c;
case 0x6faa3d:c.instructions+=4;goto B6faa3d;
case 0x6faa3f:c.instructions+=3;goto B6faa3f;
case 0x6faa41:c.instructions+=2;goto B6faa41;
case 0x6faa43:c.instructions+=1;goto B6faa43;
case 0x6faa48:goto L6faa48;
case 0x6faa4a:c.instructions+=6;goto B6faa4a;
case 0x6faa4b:c.instructions+=5;goto B6faa4b;
case 0x6faa4c:c.instructions+=4;goto B6faa4c;
case 0x6faa4f:c.instructions+=3;goto B6faa4f;
case 0x6faa52:c.instructions+=2;goto B6faa52;
case 0x6faa55:c.instructions+=1;goto B6faa55;
case 0x6faa5a:goto L6faa5a;
case 0x6faa5c:c.instructions+=5;goto B6faa5c;
case 0x6faa5f:c.instructions+=4;goto B6faa5f;
case 0x6faa60:c.instructions+=3;goto B6faa60;
case 0x6faa62:c.instructions+=2;goto B6faa62;
case 0x6faa65:c.instructions+=1;goto B6faa65;
case 0x6faa6a:goto L6faa6a;
case 0x6faa6d:c.instructions+=2;goto B6faa6d;
case 0x6faa6e:c.instructions+=1;goto B6faa6e;
case 0x6faa70:goto L6faa70;
case 0x6faa71:c.instructions+=2;goto B6faa71;
case 0x6faa72:c.instructions+=1;goto B6faa72;
case 0x6faa74:goto L6faa74;
case 0x6faa78:c.instructions+=6;goto B6faa78;
case 0x6faa7a:c.instructions+=5;goto B6faa7a;
case 0x6faa7d:c.instructions+=4;goto B6faa7d;
case 0x6faa7e:c.instructions+=3;goto B6faa7e;
case 0x6faa80:c.instructions+=2;goto B6faa80;
case 0x6faa83:c.instructions+=1;goto B6faa83;
case 0x6faa85:goto L6faa85;
case 0x6faa88:c.instructions+=1;goto B6faa88;
case 0x6faa8a:goto L6faa8a;
case 0x6faa8c:c.instructions+=3;goto B6faa8c;
case 0x6faa8d:c.instructions+=2;goto B6faa8d;
case 0x6faa90:c.instructions+=1;goto B6faa90;
case 0x6faa93:goto L6faa93;
case 0x6faa97:c.instructions+=1;goto B6faa97;
case 0x6faa99:goto L6faa99;
case 0x6faa9c:c.instructions+=1;goto B6faa9c;
case 0x6faa9e:goto L6faa9e;
case 0x6faaa1:c.instructions+=2;goto B6faaa1;
case 0x6faaa3:c.instructions+=1;goto B6faaa3;
case 0x6faaa6:goto L6faaa6;
case 0x6faaa9:c.instructions+=4;goto B6faaa9;
case 0x6faaac:c.instructions+=3;goto B6faaac;
case 0x6faaaf:c.instructions+=2;goto B6faaaf;
case 0x6faab1:c.instructions+=1;goto B6faab1;
case 0x6faab6:goto L6faab6;
case 0x6faab8:c.instructions+=1;goto B6faab8;
case 0x6faaba:goto L6faaba;
case 0x6faabc:c.instructions+=1;goto B6faabc;
case 0x6faabf:goto L6faabf;
case 0x6faac1:c.instructions+=3;goto B6faac1;
case 0x6faac2:c.instructions+=2;goto B6faac2;
case 0x6faac4:c.instructions+=1;goto B6faac4;
case 0x6faac6:goto L6faac6;
case 0x6faac8:c.instructions+=3;goto B6faac8;
case 0x6faacc:c.instructions+=2;goto B6faacc;
case 0x6faacf:c.instructions+=1;goto B6faacf;
case 0x6faad1:goto L6faad1;
case 0x6faad4:c.instructions+=2;goto B6faad4;
case 0x6faad6:c.instructions+=1;goto B6faad6;
case 0x6faad8:goto L6faad8;
case 0x6faadb:goto L6faadb;
case 0x6faade:c.instructions+=2;goto B6faade;
case 0x6faae0:c.instructions+=1;goto B6faae0;
case 0x6faae2:goto L6faae2;
case 0x6faae5:goto L6faae5;
case 0x6faae7:goto L6faae7;
case 0x6faae8:c.instructions+=4;goto B6faae8;
case 0x6faae9:c.instructions+=3;goto B6faae9;
case 0x6faaea:c.instructions+=2;goto B6faaea;
case 0x6faaeb:c.instructions+=1;goto B6faaeb;
case 0x6faaec:goto L6faaec;
case 0x6faaef:c.instructions+=1;goto B6faaef;
case 0x6faaf1:goto L6faaf1;
case 0x6faaf4:c.instructions+=1;goto B6faaf4;
case 0x6faaf7:goto L6faaf7;
case 0x6faafa:c.instructions+=3;goto B6faafa;
case 0x6faafd:c.instructions+=2;goto B6faafd;
case 0x6fab00:c.instructions+=1;goto B6fab00;
case 0x6fab02:goto L6fab02;
case 0x6fab04:c.instructions+=1;goto B6fab04;
case 0x6fab07:goto L6fab07;
case 0x6fab09:c.instructions+=3;goto B6fab09;
case 0x6fab0a:c.instructions+=2;goto B6fab0a;
case 0x6fab0c:c.instructions+=1;goto B6fab0c;
case 0x6fab0e:goto L6fab0e;
case 0x6fab10:c.instructions+=4;goto B6fab10;
case 0x6fab13:c.instructions+=3;goto B6fab13;
case 0x6fab17:c.instructions+=2;goto B6fab17;
case 0x6fab1a:c.instructions+=1;goto B6fab1a;
case 0x6fab1c:goto L6fab1c;
case 0x6fab1e:goto L6fab1e;
case 0x6fab22:c.instructions+=1;goto B6fab22;
case 0x6fab24:goto L6fab24;
case 0x6fab25:c.instructions+=2;goto B6fab25;
case 0x6fab26:c.instructions+=1;goto B6fab26;
case 0x6fab2b:goto L6fab2b;
case 0x6fab2c:c.instructions+=3;goto B6fab2c;
case 0x6fab2d:c.instructions+=2;goto B6fab2d;
case 0x6fab30:c.instructions+=1;goto B6fab30;
case 0x6fab32:goto L6fab32;
case 0x6fab36:c.instructions+=1;goto B6fab36;
case 0x6fab38:goto L6fab38;
case 0x6fab3b:c.instructions+=3;goto B6fab3b;
case 0x6fab3d:c.instructions+=2;goto B6fab3d;
case 0x6fab3e:c.instructions+=1;goto B6fab3e;
case 0x6fab43:goto L6fab43;
case 0x6fab44:c.instructions+=3;goto B6fab44;
case 0x6fab45:c.instructions+=2;goto B6fab45;
case 0x6fab48:c.instructions+=1;goto B6fab48;
case 0x6fab4a:goto L6fab4a;
case 0x6fab4c:c.instructions+=1;goto B6fab4c;
case 0x6fab4e:goto L6fab4e;
case 0x6fab4f:c.instructions+=6;goto B6fab4f;
case 0x6fab51:c.instructions+=5;goto B6fab51;
case 0x6fab52:c.instructions+=4;goto B6fab52;
case 0x6fab54:c.instructions+=3;goto B6fab54;
case 0x6fab57:c.instructions+=2;goto B6fab57;
case 0x6fab5a:c.instructions+=1;goto B6fab5a;
case 0x6fab5c:goto L6fab5c;
case 0x6fab5d:c.instructions+=6;goto B6fab5d;
case 0x6fab60:c.instructions+=5;goto B6fab60;
case 0x6fab61:c.instructions+=4;goto B6fab61;
case 0x6fab62:c.instructions+=3;goto B6fab62;
case 0x6fab65:c.instructions+=2;goto B6fab65;
case 0x6fab68:c.instructions+=1;goto B6fab68;
case 0x6fab6d:goto L6fab6d;
case 0x6fab70:goto L6fab70;
case 0x6fab73:c.instructions+=2;goto B6fab73;
case 0x6fab74:c.instructions+=1;goto B6fab74;
case 0x6fab75:goto L6fab75;
case 0x6fab76:c.instructions+=11;goto B6fab76;
case 0x6fab78:c.instructions+=10;goto B6fab78;
case 0x6fab79:c.instructions+=9;goto B6fab79;
case 0x6fab7a:c.instructions+=8;goto B6fab7a;
case 0x6fab7d:c.instructions+=7;goto B6fab7d;
case 0x6fab7f:c.instructions+=6;goto B6fab7f;
case 0x6fab82:c.instructions+=5;goto B6fab82;
case 0x6fab83:c.instructions+=4;goto B6fab83;
case 0x6fab86:c.instructions+=3;goto B6fab86;
case 0x6fab88:c.instructions+=2;goto B6fab88;
case 0x6fab89:c.instructions+=1;goto B6fab89;
case 0x6fab8e:goto L6fab8e;
case 0x6fab91:c.instructions+=2;goto B6fab91;
case 0x6fab93:c.instructions+=1;goto B6fab93;
case 0x6fab95:goto L6fab95;
case 0x6fab98:c.instructions+=2;goto B6fab98;
case 0x6fab9a:c.instructions+=1;goto B6fab9a;
case 0x6fab9c:goto L6fab9c;
case 0x6fab9e:goto L6fab9e;
case 0x6fab9f:c.instructions+=2;goto B6fab9f;
case 0x6faba0:c.instructions+=1;goto B6faba0;
case 0x6faba1:goto L6faba1;
case 0x6faba2:c.instructions+=8;goto B6faba2;
case 0x6faba4:c.instructions+=7;goto B6faba4;
case 0x6faba5:c.instructions+=6;goto B6faba5;
case 0x6faba6:c.instructions+=5;goto B6faba6;
case 0x6faba9:c.instructions+=4;goto B6faba9;
case 0x6fabac:c.instructions+=3;goto B6fabac;
case 0x6fabad:c.instructions+=2;goto B6fabad;
case 0x6fabaf:c.instructions+=1;goto B6fabaf;
case 0x6fabb4:goto L6fabb4;
case 0x6fabb6:c.instructions+=3;goto B6fabb6;
case 0x6fabb7:c.instructions+=2;goto B6fabb7;
case 0x6fabb8:c.instructions+=1;goto B6fabb8;
case 0x6fabba:goto L6fabba;
case 0x6fabbd:goto L6fabbd;
case 0x6fabbe:c.instructions+=4;goto B6fabbe;
case 0x6fabc0:c.instructions+=3;goto B6fabc0;
case 0x6fabc1:c.instructions+=2;goto B6fabc1;
case 0x6fabc2:c.instructions+=1;goto B6fabc2;
case 0x6fabc3:goto L6fabc3;
case 0x6fabc4:c.instructions+=7;goto B6fabc4;
case 0x6fabc6:c.instructions+=6;goto B6fabc6;
case 0x6fabc7:c.instructions+=5;goto B6fabc7;
case 0x6fabca:c.instructions+=4;goto B6fabca;
case 0x6fabcb:c.instructions+=3;goto B6fabcb;
case 0x6fabcc:c.instructions+=2;goto B6fabcc;
case 0x6fabce:c.instructions+=1;goto B6fabce;
case 0x6fabd3:goto L6fabd3;
case 0x6fabd6:c.instructions+=2;goto B6fabd6;
case 0x6fabd7:c.instructions+=1;goto B6fabd7;
case 0x6fabd9:goto L6fabd9;
case 0x6fabdb:goto L6fabdb;
case 0x6fabde:c.instructions+=1;goto B6fabde;
case 0x6fabe0:goto L6fabe0;
case 0x6fabe3:c.instructions+=3;goto B6fabe3;
case 0x6fabe5:c.instructions+=2;goto B6fabe5;
case 0x6fabe6:c.instructions+=1;goto B6fabe6;
case 0x6fabeb:goto L6fabeb;
case 0x6fabec:c.instructions+=2;goto B6fabec;
case 0x6fabed:c.instructions+=1;goto B6fabed;
case 0x6fabef:goto L6fabef;
case 0x6fabf1:c.instructions+=2;goto B6fabf1;
case 0x6fabf4:c.instructions+=1;goto B6fabf4;
case 0x6fabf7:goto L6fabf7;
case 0x6fabf9:goto L6fabf9;
case 0x6fabfb:c.instructions+=4;goto B6fabfb;
case 0x6fabfc:c.instructions+=3;goto B6fabfc;
case 0x6fabfd:c.instructions+=2;goto B6fabfd;
case 0x6fabfe:c.instructions+=1;goto B6fabfe;
case 0x6fabff:goto L6fabff;
case 0x6fac00:c.instructions+=7;goto B6fac00;
case 0x6fac02:c.instructions+=6;goto B6fac02;
case 0x6fac04:c.instructions+=5;goto B6fac04;
case 0x6fac06:c.instructions+=4;goto B6fac06;
case 0x6fac09:c.instructions+=3;goto B6fac09;
case 0x6fac0b:c.instructions+=2;goto B6fac0b;
case 0x6fac0e:c.instructions+=1;goto B6fac0e;
case 0x6fac13:goto L6fac13;
case 0x6fac16:c.instructions+=2;goto B6fac16;
case 0x6fac18:c.instructions+=1;goto B6fac18;
case 0x6fac1a:goto L6fac1a;
case 0x6fac1d:c.instructions+=1;goto B6fac1d;
case 0x6fac1f:goto L6fac1f;
case 0x6fac21:c.instructions+=4;goto B6fac21;
case 0x6fac24:c.instructions+=3;goto B6fac24;
case 0x6fac25:c.instructions+=2;goto B6fac25;
case 0x6fac27:c.instructions+=1;goto B6fac27;
case 0x6fac29:goto L6fac29;
case 0x6fac2c:c.instructions+=2;goto B6fac2c;
case 0x6fac2d:c.instructions+=1;goto B6fac2d;
case 0x6fac2e:goto L6fac2e;
case 0x6fac31:c.instructions+=4;goto B6fac31;
case 0x6fac34:c.instructions+=3;goto B6fac34;
case 0x6fac36:c.instructions+=2;goto B6fac36;
case 0x6fac37:c.instructions+=1;goto B6fac37;
case 0x6fac38:goto L6fac38;
case 0x6fac39:c.instructions+=3;goto B6fac39;
case 0x6fac3b:c.instructions+=2;goto B6fac3b;
case 0x6fac3c:c.instructions+=1;goto B6fac3c;
case 0x6fac41:goto L6fac41;
case 0x6fac42:c.instructions+=6;goto B6fac42;
case 0x6fac44:c.instructions+=5;goto B6fac44;
case 0x6fac45:c.instructions+=4;goto B6fac45;
case 0x6fac47:c.instructions+=3;goto B6fac47;
case 0x6fac4a:c.instructions+=2;goto B6fac4a;
case 0x6fac4d:c.instructions+=1;goto B6fac4d;
case 0x6fac4f:goto L6fac4f;
case 0x6fac50:c.instructions+=6;goto B6fac50;
case 0x6fac53:c.instructions+=5;goto B6fac53;
case 0x6fac54:c.instructions+=4;goto B6fac54;
case 0x6fac55:c.instructions+=3;goto B6fac55;
case 0x6fac58:c.instructions+=2;goto B6fac58;
case 0x6fac5b:c.instructions+=1;goto B6fac5b;
case 0x6fac60:goto L6fac60;
case 0x6fac63:goto L6fac63;
case 0x6fac66:c.instructions+=2;goto B6fac66;
case 0x6fac67:c.instructions+=1;goto B6fac67;
case 0x6fac68:goto L6fac68;
case 0x6fac69:c.instructions+=8;goto B6fac69;
case 0x6fac6b:c.instructions+=7;goto B6fac6b;
case 0x6fac6c:c.instructions+=6;goto B6fac6c;
case 0x6fac6d:c.instructions+=5;goto B6fac6d;
case 0x6fac70:c.instructions+=4;goto B6fac70;
case 0x6fac73:c.instructions+=3;goto B6fac73;
case 0x6fac74:c.instructions+=2;goto B6fac74;
case 0x6fac76:c.instructions+=1;goto B6fac76;
case 0x6fac7b:goto L6fac7b;
case 0x6fac7d:c.instructions+=3;goto B6fac7d;
case 0x6fac7e:c.instructions+=2;goto B6fac7e;
case 0x6fac7f:c.instructions+=1;goto B6fac7f;
case 0x6fac81:goto L6fac81;
case 0x6fac84:goto L6fac84;
case 0x6fac85:c.instructions+=4;goto B6fac85;
case 0x6fac87:c.instructions+=3;goto B6fac87;
case 0x6fac88:c.instructions+=2;goto B6fac88;
case 0x6fac89:c.instructions+=1;goto B6fac89;
case 0x6fac8a:goto L6fac8a;
case 0x6fac8b:c.instructions+=4;goto B6fac8b;
case 0x6fac8d:c.instructions+=3;goto B6fac8d;
case 0x6fac8e:c.instructions+=2;goto B6fac8e;
case 0x6fac8f:c.instructions+=1;goto B6fac8f;
case 0x6fac92:goto L6fac92;
case 0x6fac94:c.instructions+=2;goto B6fac94;
case 0x6fac97:c.instructions+=1;goto B6fac97;
case 0x6fac9c:goto L6fac9c;
case 0x6fac9e:c.instructions+=4;goto B6fac9e;
case 0x6faca0:c.instructions+=3;goto B6faca0;
case 0x6faca1:c.instructions+=2;goto B6faca1;
case 0x6faca2:c.instructions+=1;goto B6faca2;
case 0x6faca4:goto L6faca4;
case 0x6faca7:goto L6faca7;
case 0x6facaa:c.instructions+=2;goto B6facaa;
case 0x6facad:c.instructions+=1;goto B6facad;
case 0x6facb2:goto L6facb2;
case 0x6facb4:c.instructions+=5;goto B6facb4;
case 0x6facb5:c.instructions+=4;goto B6facb5;
case 0x6facb8:c.instructions+=3;goto B6facb8;
case 0x6facba:c.instructions+=2;goto B6facba;
case 0x6facbb:c.instructions+=1;goto B6facbb;
case 0x6facbd:goto L6facbd;
case 0x6facc0:c.instructions+=3;goto B6facc0;
case 0x6facc1:c.instructions+=2;goto B6facc1;
case 0x6facc4:c.instructions+=1;goto B6facc4;
case 0x6facc6:goto L6facc6;
case 0x6facc7:c.instructions+=3;goto B6facc7;
case 0x6facc8:c.instructions+=2;goto B6facc8;
case 0x6facc9:c.instructions+=1;goto B6facc9;
case 0x6facca:goto L6facca;
case 0x6faccb:c.instructions+=7;goto B6faccb;
case 0x6faccd:c.instructions+=6;goto B6faccd;
case 0x6faccf:c.instructions+=5;goto B6faccf;
case 0x6facd1:c.instructions+=4;goto B6facd1;
case 0x6facd4:c.instructions+=3;goto B6facd4;
case 0x6facd6:c.instructions+=2;goto B6facd6;
case 0x6facd9:c.instructions+=1;goto B6facd9;
case 0x6facde:goto L6facde;
case 0x6face1:c.instructions+=2;goto B6face1;
case 0x6face3:c.instructions+=1;goto B6face3;
case 0x6face5:goto L6face5;
case 0x6face8:c.instructions+=1;goto B6face8;
case 0x6facea:goto L6facea;
case 0x6facec:c.instructions+=4;goto B6facec;
case 0x6facef:c.instructions+=3;goto B6facef;
case 0x6facf0:c.instructions+=2;goto B6facf0;
case 0x6facf2:c.instructions+=1;goto B6facf2;
case 0x6facf4:goto L6facf4;
case 0x6facf7:c.instructions+=2;goto B6facf7;
case 0x6facf8:c.instructions+=1;goto B6facf8;
case 0x6facf9:goto L6facf9;
case 0x6facfc:c.instructions+=4;goto B6facfc;
case 0x6facff:c.instructions+=3;goto B6facff;
case 0x6fad01:c.instructions+=2;goto B6fad01;
case 0x6fad02:c.instructions+=1;goto B6fad02;
case 0x6fad03:goto L6fad03;
case 0x6fad04:c.instructions+=8;goto B6fad04;
case 0x6fad06:c.instructions+=7;goto B6fad06;
case 0x6fad0c:c.instructions+=6;goto B6fad0c;
case 0x6fad0f:c.instructions+=5;goto B6fad0f;
case 0x6fad13:c.instructions+=4;goto B6fad13;
case 0x6fad15:c.instructions+=3;goto B6fad15;
case 0x6fad1c:c.instructions+=2;goto B6fad1c;
case 0x6fad23:c.instructions+=1;goto B6fad23;
case 0x6fad25:goto L6fad25;
case 0x6fad2c:c.instructions+=1;goto B6fad2c;
case 0x6fad2e:goto L6fad2e;
case 0x6fad35:goto L6fad35;
case 0x6fad36:c.instructions+=5;goto B6fad36;
case 0x6fad39:c.instructions+=4;goto B6fad39;
case 0x6fad3d:c.instructions+=3;goto B6fad3d;
case 0x6fad3e:c.instructions+=2;goto B6fad3e;
case 0x6fad3f:c.instructions+=1;goto B6fad3f;
case 0x6fad41:goto L6fad41;
case 0x6fad43:c.instructions+=5;goto B6fad43;
case 0x6fad46:c.instructions+=4;goto B6fad46;
case 0x6fad48:c.instructions+=3;goto B6fad48;
case 0x6fad4b:c.instructions+=2;goto B6fad4b;
case 0x6fad4e:c.instructions+=1;goto B6fad4e;
case 0x6fad50:goto L6fad50;
case 0x6fad52:c.instructions+=6;goto B6fad52;
case 0x6fad55:c.instructions+=5;goto B6fad55;
case 0x6fad57:c.instructions+=4;goto B6fad57;
case 0x6fad59:c.instructions+=3;goto B6fad59;
case 0x6fad5c:c.instructions+=2;goto B6fad5c;
case 0x6fad5f:c.instructions+=1;goto B6fad5f;
case 0x6fad61:goto L6fad61;
case 0x6fad63:c.instructions+=1;goto B6fad63;
case 0x6fad65:goto L6fad65;
case 0x6fad6c:goto L6fad6c;
case 0x6fad6e:c.instructions+=1;goto B6fad6e;
case 0x6fad70:goto L6fad70;
case 0x6fad74:goto L6fad74;
case 0x6fad77:c.instructions+=3;goto B6fad77;
case 0x6fad79:c.instructions+=2;goto B6fad79;
case 0x6fad7b:c.instructions+=1;goto B6fad7b;
case 0x6fad7d:goto L6fad7d;
case 0x6fad7f:c.instructions+=1;goto B6fad7f;
case 0x6fad81:goto L6fad81;
case 0x6fad83:c.instructions+=1;goto B6fad83;
case 0x6fad86:goto L6fad86;
case 0x6fad8c:goto L6fad8c;
case 0x6fad8e:c.instructions+=5;goto B6fad8e;
case 0x6fad8f:c.instructions+=4;goto B6fad8f;
case 0x6fad91:c.instructions+=3;goto B6fad91;
case 0x6fad92:c.instructions+=2;goto B6fad92;
case 0x6fad94:c.instructions+=1;goto B6fad94;
case 0x6fad96:goto L6fad96;
case 0x6fad98:c.instructions+=1;goto B6fad98;
case 0x6fad9a:goto L6fad9a;
case 0x6fad9c:c.instructions+=3;goto B6fad9c;
case 0x6fad9d:c.instructions+=2;goto B6fad9d;
case 0x6fad9f:c.instructions+=1;goto B6fad9f;
case 0x6fada1:goto L6fada1;
case 0x6fada7:c.instructions+=2;goto B6fada7;
case 0x6fada9:c.instructions+=1;goto B6fada9;
case 0x6fadaa:goto L6fadaa;
case 0x6fadad:c.instructions+=3;goto B6fadad;
case 0x6fadae:c.instructions+=2;goto B6fadae;
case 0x6fadb0:c.instructions+=1;goto B6fadb0;
case 0x6fadb2:goto L6fadb2;
case 0x6fadb4:c.instructions+=2;goto B6fadb4;
case 0x6fadb7:c.instructions+=1;goto B6fadb7;
case 0x6fadb9:goto L6fadb9;
case 0x6fadbb:goto L6fadbb;
case 0x6fadbd:c.instructions+=1;goto B6fadbd;
case 0x6fadc0:goto L6fadc0;
case 0x6fadc2:goto L6fadc2;
case 0x6fadc8:goto L6fadc8;
case 0x6fadce:c.instructions+=8;goto B6fadce;
case 0x6fadd0:c.instructions+=7;goto B6fadd0;
case 0x6fadd3:c.instructions+=6;goto B6fadd3;
case 0x6fadd4:c.instructions+=5;goto B6fadd4;
case 0x6fadd6:c.instructions+=4;goto B6fadd6;
case 0x6fadd9:c.instructions+=3;goto B6fadd9;
case 0x6faddc:c.instructions+=2;goto B6faddc;
case 0x6faddd:c.instructions+=1;goto B6faddd;
case 0x6faddf:goto L6faddf;
case 0x6fade2:c.instructions+=1;goto B6fade2;
case 0x6fade4:goto L6fade4;
case 0x6fade8:c.instructions+=1;goto B6fade8;
case 0x6fadea:goto L6fadea;
case 0x6fadee:c.instructions+=1;goto B6fadee;
case 0x6fadf0:goto L6fadf0;
case 0x6fadf2:c.instructions+=9;goto B6fadf2;
case 0x6fadf5:c.instructions+=8;goto B6fadf5;
case 0x6fadf8:c.instructions+=7;goto B6fadf8;
case 0x6fadfb:c.instructions+=6;goto B6fadfb;
case 0x6fadfc:c.instructions+=5;goto B6fadfc;
case 0x6fadfe:c.instructions+=4;goto B6fadfe;
case 0x6fae01:c.instructions+=3;goto B6fae01;
case 0x6fae04:c.instructions+=2;goto B6fae04;
case 0x6fae05:c.instructions+=1;goto B6fae05;
case 0x6fae07:goto L6fae07;
case 0x6fae0a:c.instructions+=1;goto B6fae0a;
case 0x6fae0c:goto L6fae0c;
case 0x6fae0f:goto L6fae0f;
case 0x6fae10:c.instructions+=4;goto B6fae10;
case 0x6fae11:c.instructions+=3;goto B6fae11;
case 0x6fae12:c.instructions+=2;goto B6fae12;
case 0x6fae13:c.instructions+=1;goto B6fae13;
case 0x6fae16:goto L6fae16;
case 0x6fae17:c.instructions+=3;goto B6fae17;
case 0x6fae19:c.instructions+=2;goto B6fae19;
case 0x6fae1a:c.instructions+=1;goto B6fae1a;
case 0x6fae20:goto L6fae20;
case 0x6fae21:c.instructions+=8;goto B6fae21;
case 0x6fae23:c.instructions+=7;goto B6fae23;
case 0x6fae25:c.instructions+=6;goto B6fae25;
case 0x6fae28:c.instructions+=5;goto B6fae28;
case 0x6fae29:c.instructions+=4;goto B6fae29;
case 0x6fae2c:c.instructions+=3;goto B6fae2c;
case 0x6fae2f:c.instructions+=2;goto B6fae2f;
case 0x6fae32:c.instructions+=1;goto B6fae32;
case 0x6fae38:goto L6fae38;
case 0x6fae3b:c.instructions+=2;goto B6fae3b;
case 0x6fae3c:c.instructions+=1;goto B6fae3c;
case 0x6fae3f:goto L6fae3f;
case 0x6fae40:c.instructions+=8;goto B6fae40;
case 0x6fae42:c.instructions+=7;goto B6fae42;
case 0x6fae44:c.instructions+=6;goto B6fae44;
case 0x6fae47:c.instructions+=5;goto B6fae47;
case 0x6fae48:c.instructions+=4;goto B6fae48;
case 0x6fae4b:c.instructions+=3;goto B6fae4b;
case 0x6fae4e:c.instructions+=2;goto B6fae4e;
case 0x6fae51:c.instructions+=1;goto B6fae51;
case 0x6fae57:goto L6fae57;
case 0x6fae5a:c.instructions+=2;goto B6fae5a;
case 0x6fae5b:c.instructions+=1;goto B6fae5b;
case 0x6fae5e:goto L6fae5e;
case 0x6fae5f:c.instructions+=4;goto B6fae5f;
case 0x6fae61:c.instructions+=3;goto B6fae61;
case 0x6fae64:c.instructions+=2;goto B6fae64;
case 0x6fae67:c.instructions+=1;goto B6fae67;
case 0x6fae69:goto L6fae69;
case 0x6fae6a:c.instructions+=1;goto B6fae6a;
case 0x6fae6c:goto L6fae6c;
case 0x6fae6d:goto L6fae6d;
case 0x6fae6f:goto L6fae6f;
case 0x6fae70:c.instructions+=4;goto B6fae70;
case 0x6fae72:c.instructions+=3;goto B6fae72;
case 0x6fae75:c.instructions+=2;goto B6fae75;
case 0x6fae78:c.instructions+=1;goto B6fae78;
case 0x6fae7e:goto L6fae7e;
case 0x6fae80:c.instructions+=2;goto B6fae80;
case 0x6fae81:c.instructions+=1;goto B6fae81;
case 0x6fae84:goto L6fae84;
case 0x6fae86:c.instructions+=2;goto B6fae86;
case 0x6fae87:c.instructions+=1;goto B6fae87;
case 0x6fae89:goto L6fae89;
case 0x6fae8a:c.instructions+=4;goto B6fae8a;
case 0x6fae8c:c.instructions+=3;goto B6fae8c;
case 0x6fae8e:c.instructions+=2;goto B6fae8e;
case 0x6fae91:c.instructions+=1;goto B6fae91;
case 0x6fae97:goto L6fae97;
case 0x6fae99:c.instructions+=2;goto B6fae99;
case 0x6fae9a:c.instructions+=1;goto B6fae9a;
case 0x6fae9d:goto L6fae9d;
case 0x6fae9e:c.instructions+=3;goto B6fae9e;
case 0x6faea0:c.instructions+=2;goto B6faea0;
case 0x6faea3:c.instructions+=1;goto B6faea3;
case 0x6faea9:goto L6faea9;
case 0x6faeaa:c.instructions+=5;goto B6faeaa;
case 0x6faeac:c.instructions+=4;goto B6faeac;
case 0x6faeae:c.instructions+=3;goto B6faeae;
case 0x6faeaf:c.instructions+=2;goto B6faeaf;
case 0x6faeb0:c.instructions+=1;goto B6faeb0;
case 0x6faeb3:goto L6faeb3;
case 0x6faeb4:c.instructions+=10;goto B6faeb4;
case 0x6faeb6:c.instructions+=9;goto B6faeb6;
case 0x6faeb9:c.instructions+=8;goto B6faeb9;
case 0x6faebb:c.instructions+=7;goto B6faebb;
case 0x6faebe:c.instructions+=6;goto B6faebe;
case 0x6faebf:c.instructions+=5;goto B6faebf;
case 0x6faec2:c.instructions+=4;goto B6faec2;
case 0x6faec3:c.instructions+=3;goto B6faec3;
case 0x6faec6:c.instructions+=2;goto B6faec6;
case 0x6faec7:c.instructions+=1;goto B6faec7;
case 0x6faecd:goto L6faecd;
case 0x6faecf:c.instructions+=1;goto B6faecf;
case 0x6faed1:goto L6faed1;
case 0x6faed4:c.instructions+=3;goto B6faed4;
case 0x6faed7:c.instructions+=2;goto B6faed7;
case 0x6faed8:c.instructions+=1;goto B6faed8;
case 0x6faed9:goto L6faed9;
case 0x6faedb:c.instructions+=3;goto B6faedb;
case 0x6faedd:c.instructions+=2;goto B6faedd;
case 0x6faede:c.instructions+=1;goto B6faede;
case 0x6faedf:goto L6faedf;
case 0x6faee0:c.instructions+=3;goto B6faee0;
case 0x6faee1:c.instructions+=2;goto B6faee1;
case 0x6faee3:c.instructions+=1;goto B6faee3;
case 0x6faee9:goto L6faee9;
case 0x6faeeb:c.instructions+=3;goto B6faeeb;
case 0x6faef0:c.instructions+=2;goto B6faef0;
case 0x6faef2:c.instructions+=1;goto B6faef2;
case 0x6faef7:goto L6faef7;
case 0x6faef8:c.instructions+=2;goto B6faef8;
case 0x6faef9:c.instructions+=1;goto B6faef9;
case 0x6faefb:goto L6faefb;
case 0x6faefd:c.instructions+=4;goto B6faefd;
case 0x6faefe:c.instructions+=3;goto B6faefe;
case 0x6faf00:c.instructions+=2;goto B6faf00;
case 0x6faf02:c.instructions+=1;goto B6faf02;
case 0x6faf04:goto L6faf04;
case 0x6faf0b:c.instructions+=2;goto B6faf0b;
case 0x6faf12:c.instructions+=1;goto B6faf12;
case 0x6faf13:goto L6faf13;
case 0x6faf14:c.instructions+=2;goto B6faf14;
case 0x6faf17:c.instructions+=1;goto B6faf17;
case 0x6faf19:goto L6faf19;
case 0x6faf1a:c.instructions+=3;goto B6faf1a;
case 0x6faf1c:c.instructions+=2;goto B6faf1c;
case 0x6faf1d:c.instructions+=1;goto B6faf1d;
case 0x6faf1e:goto L6faf1e;
case 0x6faf1f:c.instructions+=6;goto B6faf1f;
case 0x6faf21:c.instructions+=5;goto B6faf21;
case 0x6faf27:c.instructions+=4;goto B6faf27;
case 0x6faf2d:c.instructions+=3;goto B6faf2d;
case 0x6faf2e:c.instructions+=2;goto B6faf2e;
case 0x6faf31:c.instructions+=1;goto B6faf31;
case 0x6faf37:goto L6faf37;
case 0x6faf3a:c.instructions+=1;goto B6faf3a;
case 0x6faf3c:goto L6faf3c;
case 0x6faf3f:c.instructions+=9;goto B6faf3f;
case 0x6faf45:c.instructions+=8;goto B6faf45;
case 0x6faf47:c.instructions+=7;goto B6faf47;
case 0x6faf4d:c.instructions+=6;goto B6faf4d;
case 0x6faf50:c.instructions+=5;goto B6faf50;
case 0x6faf53:c.instructions+=4;goto B6faf53;
case 0x6faf59:c.instructions+=3;goto B6faf59;
case 0x6faf5c:c.instructions+=2;goto B6faf5c;
case 0x6faf5e:c.instructions+=1;goto B6faf5e;
case 0x6faf60:goto L6faf60;
case 0x6faf62:c.instructions+=4;goto B6faf62;
case 0x6faf65:c.instructions+=3;goto B6faf65;
case 0x6faf66:c.instructions+=2;goto B6faf66;
case 0x6faf68:c.instructions+=1;goto B6faf68;
case 0x6faf6a:goto L6faf6a;
case 0x6faf6c:c.instructions+=2;goto B6faf6c;
case 0x6faf6d:c.instructions+=1;goto B6faf6d;
case 0x6faf6e:goto L6faf6e;
case 0x6faf71:c.instructions+=4;goto B6faf71;
case 0x6faf75:c.instructions+=3;goto B6faf75;
case 0x6faf77:c.instructions+=2;goto B6faf77;
case 0x6faf78:c.instructions+=1;goto B6faf78;
case 0x6faf79:goto L6faf79;
case 0x6faf7a:c.instructions+=9;goto B6faf7a;
case 0x6faf7c:c.instructions+=8;goto B6faf7c;
case 0x6faf82:c.instructions+=7;goto B6faf82;
case 0x6faf83:c.instructions+=6;goto B6faf83;
case 0x6faf86:c.instructions+=5;goto B6faf86;
case 0x6faf89:c.instructions+=4;goto B6faf89;
case 0x6faf8f:c.instructions+=3;goto B6faf8f;
case 0x6faf90:c.instructions+=2;goto B6faf90;
case 0x6faf91:c.instructions+=1;goto B6faf91;
case 0x6faf97:goto L6faf97;
case 0x6faf99:c.instructions+=1;goto B6faf99;
case 0x6faf9b:goto L6faf9b;
case 0x6fafa1:c.instructions+=7;goto B6fafa1;
case 0x6fafa3:c.instructions+=6;goto B6fafa3;
case 0x6fafa9:c.instructions+=5;goto B6fafa9;
case 0x6fafac:c.instructions+=4;goto B6fafac;
case 0x6fafb2:c.instructions+=3;goto B6fafb2;
case 0x6fafb5:c.instructions+=2;goto B6fafb5;
case 0x6fafb7:c.instructions+=1;goto B6fafb7;
case 0x6fafb9:goto L6fafb9;
case 0x6fafbb:c.instructions+=4;goto B6fafbb;
case 0x6fafbe:c.instructions+=3;goto B6fafbe;
case 0x6fafbf:c.instructions+=2;goto B6fafbf;
case 0x6fafc1:c.instructions+=1;goto B6fafc1;
case 0x6fafc3:goto L6fafc3;
case 0x6fafc5:c.instructions+=1;goto B6fafc5;
case 0x6fafc7:goto L6fafc7;
case 0x6fafc9:goto L6fafc9;
case 0x6fafca:c.instructions+=2;goto B6fafca;
case 0x6fafcb:c.instructions+=1;goto B6fafcb;
case 0x6fafcc:goto L6fafcc;
case 0x6fafcd:c.instructions+=5;goto B6fafcd;
case 0x6fafcf:c.instructions+=4;goto B6fafcf;
case 0x6fafd2:c.instructions+=3;goto B6fafd2;
case 0x6fafd5:c.instructions+=2;goto B6fafd5;
case 0x6fafd8:c.instructions+=1;goto B6fafd8;
case 0x6fafda:goto L6fafda;
case 0x6fafdb:c.instructions+=1;goto B6fafdb;
case 0x6fafe1:goto L6fafe1;
case 0x6fafe2:c.instructions+=1;goto B6fafe2;
case 0x6fafe3:goto L6fafe3;
case 0x6fafe4:c.instructions+=3;goto B6fafe4;
case 0x6fafe6:c.instructions+=2;goto B6fafe6;
case 0x6fafe7:c.instructions+=1;goto B6fafe7;
case 0x6fafed:goto L6fafed;
case 0x6fafee:c.instructions+=5;goto B6fafee;
case 0x6faff0:c.instructions+=4;goto B6faff0;
case 0x6faff3:c.instructions+=3;goto B6faff3;
case 0x6faff5:c.instructions+=2;goto B6faff5;
case 0x6faff8:c.instructions+=1;goto B6faff8;
case 0x6faffe:goto L6faffe;
default:missing_instruction(c.pc);}
B6fa000:L6fa000:{c.instructions+=1;NFSU2_TR(0x6fa000);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+4))));
}
B6fa002:L6fa002:{c.instructions+=5;NFSU2_TR(0x6fa002);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B6fa004:{NFSU2_TR(0x6fa004);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B6fa007:{NFSU2_TR(0x6fa007);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6fa008:{NFSU2_TR(0x6fa008);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6fa00a:{NFSU2_TR(0x6fa00a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa002u);}goto L6fa002;}}
}
B6fa00c:L6fa00c:{c.instructions+=5;NFSU2_TR(0x6fa00c);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B6fa010:{NFSU2_TR(0x6fa010);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6fa017:{NFSU2_TR(0x6fa017);
s1(0x8ad661,u8(0x1ull));
}
B6fa01e:{NFSU2_TR(0x6fa01e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B6fa021:{NFSU2_TR(0x6fa021);
{goto L6fa025;}
}
B6fa023:L6fa023:{c.instructions+=1;NFSU2_TR(0x6fa023);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B6fa025:L6fa025:{c.instructions+=3;NFSU2_TR(0x6fa025);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa027:{NFSU2_TR(0x6fa027);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fa02a:{NFSU2_TR(0x6fa02a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa02full));
TAIL_STATIC(0x6f879au,6f8);
}
B6fa02f:L6fa02f:{c.instructions+=9;NFSU2_TR(0x6fa02f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fa030:{NFSU2_TR(0x6fa030);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fa031:{NFSU2_TR(0x6fa031);
__builtin_memmove((R+0),(R+12),1);
}
B6fa033:{NFSU2_TR(0x6fa033);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcccull))));
__builtin_memmove((R+16),(U+0),4);
}
B6fa039:{NFSU2_TR(0x6fa039);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fa03a:{NFSU2_TR(0x6fa03a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fa03b:{NFSU2_TR(0x6fa03b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fa03c:{NFSU2_TR(0x6fa03c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6fa03d:{NFSU2_TR(0x6fa03d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fa03e:L6fa03e:{c.instructions+=6;NFSU2_TR(0x6fa03e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa03f:{NFSU2_TR(0x6fa03f);
__builtin_memmove((R+20),(R+16),4);
}
B6fa041:{NFSU2_TR(0x6fa041);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x11cull))));
}
B6fa047:{NFSU2_TR(0x6fa047);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fa04a:{NFSU2_TR(0x6fa04a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6fa04e:{NFSU2_TR(0x6fa04e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa053ull));
TAIL_STATIC(0x6f9aefu,6f9);
}
B6fa053:L6fa053:{c.instructions+=2;NFSU2_TR(0x6fa053);
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
B6fa055:{NFSU2_TR(0x6fa055);
if(r1(R+518)){{goto L6fa05b;}}
}
B6fa057:L6fa057:{c.instructions+=3;NFSU2_TR(0x6fa057);
w1(R+0,u8(0x1ull));
}
B6fa059:{NFSU2_TR(0x6fa059);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6fa05a:{NFSU2_TR(0x6fa05a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fa05b:L6fa05b:{c.instructions+=6;NFSU2_TR(0x6fa05b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa05c:{NFSU2_TR(0x6fa05c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6fa05e:{NFSU2_TR(0x6fa05e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6fa061:{NFSU2_TR(0x6fa061);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa062:{NFSU2_TR(0x6fa062);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa063:{NFSU2_TR(0x6fa063);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fa07a;}}
}
B6fa065:L6fa065:{c.instructions+=3;NFSU2_TR(0x6fa065);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fa068:{NFSU2_TR(0x6fa068);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fa06b:{NFSU2_TR(0x6fa06b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa070ull));
TAIL_STATIC(0x6f9bfcu,6f9);
}
B6fa070:L6fa070:{c.instructions+=4;NFSU2_TR(0x6fa070);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fa071:{NFSU2_TR(0x6fa071);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fa072:{NFSU2_TR(0x6fa072);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6fa075:{NFSU2_TR(0x6fa075);
{goto L6fa1f5;}
}
B6fa07a:L6fa07a:{c.instructions+=2;NFSU2_TR(0x6fa07a);
u8 U[4];
__builtin_memmove((U+0),gp(0x813ad0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa080:{NFSU2_TR(0x6fa080);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa085ull));
TAIL_STATIC(0x6f7997u,6f7);
}
B6fa085:L6fa085:{c.instructions+=6;NFSU2_TR(0x6fa085);
__builtin_memmove((R+24),(R+0),4);
}
B6fa087:{NFSU2_TR(0x6fa087);
__builtin_memmove((R+0),gp(0x8ad67c),4);
}
B6fa08c:{NFSU2_TR(0x6fa08c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6fa08e:{NFSU2_TR(0x6fa08e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fa08f:{NFSU2_TR(0x6fa08f);
__builtin_memmove((R+28),(R+8),4);
}
B6fa091:{NFSU2_TR(0x6fa091);
if(r1(R+518)){{goto L6fa09e;}}
}
B6fa093:L6fa093:{c.instructions+=4;NFSU2_TR(0x6fa093);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6fa096:{NFSU2_TR(0x6fa096);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fa099:{NFSU2_TR(0x6fa099);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fa09c:{NFSU2_TR(0x6fa09c);
{goto L6fa0a2;}
}
B6fa09e:L6fa09e:{c.instructions+=1;NFSU2_TR(0x6fa09e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6fa0a2:L6fa0a2:{c.instructions+=10;NFSU2_TR(0x6fa0a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fa0a5:{NFSU2_TR(0x6fa0a5);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6fa0a6:{NFSU2_TR(0x6fa0a6);
__builtin_memmove((R+4),(R+0),4);
}
B6fa0a8:{NFSU2_TR(0x6fa0a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fa0ab:{NFSU2_TR(0x6fa0ab);
w1(R+512,carry<u32>(r4(R+4),r4(R+12)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B6fa0ad:{NFSU2_TR(0x6fa0ad);
__builtin_memmove((R+0),(R+8),4);
}
B6fa0af:{NFSU2_TR(0x6fa0af);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+8,u32(r1(R+512)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+12,u32(u32(r4(R+0))+u32(r4(U+4))));
w4(R+0,u32(u32(r4(U+12))+u32(r4(U+8))));
}
B6fa0b2:{NFSU2_TR(0x6fa0b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fa0b5:{NFSU2_TR(0x6fa0b5);
u8 U[8];
__builtin_memmove((U+0),gp(0x813adc),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6fa0bb:{NFSU2_TR(0x6fa0bb);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6fa1fa;}}
}
B6fa0c1:L6fa0c1:{c.instructions+=1;NFSU2_TR(0x6fa0c1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6fa0cf;}}
}
B6fa0c3:L6fa0c3:{c.instructions+=2;NFSU2_TR(0x6fa0c3);
u8 U[4];
__builtin_memmove((U+0),gp(0x813ad8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B6fa0c9:{NFSU2_TR(0x6fa0c9);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6fa1fa;}}
}
B6fa0cf:L6fa0cf:{c.instructions+=4;NFSU2_TR(0x6fa0cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,u8((r4(R+24))<(r4(U+4))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))-u32(r4(U+4))));
}
B6fa0d2:{NFSU2_TR(0x6fa0d2);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(R+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6fa0d4:{NFSU2_TR(0x6fa0d4);
u8 U[8];
__builtin_memmove((U+0),gp(0x813ae4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6fa0da:{NFSU2_TR(0x6fa0da);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6fa1fa;}}
}
B6fa0e0:L6fa0e0:{c.instructions+=1;NFSU2_TR(0x6fa0e0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6fa0ee;}}
}
B6fa0e2:L6fa0e2:{c.instructions+=2;NFSU2_TR(0x6fa0e2);
u8 U[8];
__builtin_memmove((U+0),gp(0x813ae0),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6fa0e8:{NFSU2_TR(0x6fa0e8);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6fa1fa;}}
}
B6fa0ee:L6fa0ee:{c.instructions+=3;NFSU2_TR(0x6fa0ee);
__builtin_memmove((R+0),gp(0x813ad0),4);
}
B6fa0f3:{NFSU2_TR(0x6fa0f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6fa0f9:{NFSU2_TR(0x6fa0f9);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B6fa0fb:L6fa0fb:{c.instructions+=5;NFSU2_TR(0x6fa0fb);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6fa0fd:{NFSU2_TR(0x6fa0fd);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B6fa100:{NFSU2_TR(0x6fa100);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fa101:{NFSU2_TR(0x6fa101);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6fa103:{NFSU2_TR(0x6fa103);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa0fbu);}goto L6fa0fb;}}
}
B6fa105:L6fa105:{c.instructions+=2;NFSU2_TR(0x6fa105);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fa108:{NFSU2_TR(0x6fa108);
__builtin_memmove((R+8),(R+0),4);
}
B6fa10a:L6fa10a:{c.instructions+=4;NFSU2_TR(0x6fa10a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6fa10c:{NFSU2_TR(0x6fa10c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fa10d:{NFSU2_TR(0x6fa10d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6fa10f:{NFSU2_TR(0x6fa10f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa10au);}goto L6fa10a;}}
}
B6fa111:L6fa111:{c.instructions+=3;NFSU2_TR(0x6fa111);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fa117:{NFSU2_TR(0x6fa117);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B6fa119:{NFSU2_TR(0x6fa119);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B6fa11a:L6fa11a:{c.instructions+=4;NFSU2_TR(0x6fa11a);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6fa11d:{NFSU2_TR(0x6fa11d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6fa11e:{NFSU2_TR(0x6fa11e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6fa120:{NFSU2_TR(0x6fa120);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa11au);}goto L6fa11a;}}
}
B6fa122:L6fa122:{c.instructions+=3;NFSU2_TR(0x6fa122);
__builtin_memmove((R+4),(R+0),4);
}
B6fa124:{NFSU2_TR(0x6fa124);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6fa127:{NFSU2_TR(0x6fa127);
__builtin_memmove((R+24),(R+8),4);
}
B6fa129:L6fa129:{c.instructions+=1;NFSU2_TR(0x6fa129);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6fa12b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa129u);}goto L6fa129;}
}
B6fa12b:L6fa12b:{c.instructions+=3;NFSU2_TR(0x6fa12b);
__builtin_memmove((R+4),(R+0),4);
}
B6fa12d:{NFSU2_TR(0x6fa12d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6fa130:{NFSU2_TR(0x6fa130);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fa136:L6fa136:{c.instructions+=1;NFSU2_TR(0x6fa136);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6fa138;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa136u);}goto L6fa136;}
}
B6fa138:L6fa138:{c.instructions+=1;NFSU2_TR(0x6fa138);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa13dull));
TAIL_STATIC(0x6f975cu,6f9);
}
B6fa13d:L6fa13d:{c.instructions+=10;NFSU2_TR(0x6fa13d);
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
B6fa13f:{NFSU2_TR(0x6fa13f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa140:{NFSU2_TR(0x6fa140);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa145:{NFSU2_TR(0x6fa145);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa147:{NFSU2_TR(0x6fa147);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa148:{NFSU2_TR(0x6fa148);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa149:{NFSU2_TR(0x6fa149);
u8 U[4];
w4(U+0,u32(0x40000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa14e:{NFSU2_TR(0x6fa14e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fa154:{NFSU2_TR(0x6fa154);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa155:{NFSU2_TR(0x6fa155);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831d0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa15bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6fa15b:L6fa15b:{c.instructions+=3;NFSU2_TR(0x6fa15b);
__builtin_memmove((R+24),(R+0),4);
}
B6fa15d:{NFSU2_TR(0x6fa15d);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6fa160:{NFSU2_TR(0x6fa160);
if(r1(R+518)){{goto L6fa1f5;}}
}
B6fa166:L6fa166:{c.instructions+=2;NFSU2_TR(0x6fa166);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fa169:{NFSU2_TR(0x6fa169);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa16eull));
TAIL_STATIC(0x6f9988u,6f9);
}
B6fa16e:L6fa16e:{c.instructions+=10;NFSU2_TR(0x6fa16e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fa16f:{NFSU2_TR(0x6fa16f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa170:{NFSU2_TR(0x6fa170);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6fa173:{NFSU2_TR(0x6fa173);
__builtin_memmove((R+12),(R+0),4);
}
B6fa175:{NFSU2_TR(0x6fa175);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fa178:{NFSU2_TR(0x6fa178);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa179:{NFSU2_TR(0x6fa179);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa17a:{NFSU2_TR(0x6fa17a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fa17d:{NFSU2_TR(0x6fa17d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa17e:{NFSU2_TR(0x6fa17e);
u8 U[4];
__builtin_memmove((U+0),gp(0x783224),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa184ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6fa184:L6fa184:{c.instructions+=2;NFSU2_TR(0x6fa184);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa185:{NFSU2_TR(0x6fa185);
u8 U[4];
__builtin_memmove((U+0),gp(0x783144),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa18bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6fa18b:L6fa18b:{c.instructions+=2;NFSU2_TR(0x6fa18b);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
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
B6fa18e:{NFSU2_TR(0x6fa18e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fa1e8;}}
}
B6fa190:L6fa190:{c.instructions+=3;NFSU2_TR(0x6fa190);
w4(R+24,u32(0x8ad680ull));
}
B6fa195:{NFSU2_TR(0x6fa195);
__builtin_memmove((R+4),(R+24),4);
}
B6fa197:{NFSU2_TR(0x6fa197);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa19cull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B6fa19c:L6fa19c:{c.instructions+=7;NFSU2_TR(0x6fa19c);
__builtin_memmove((R+0),gp(0x8ad67c),4);
}
B6fa1a1:{NFSU2_TR(0x6fa1a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6fa1a4:{NFSU2_TR(0x6fa1a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+8),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B6fa1a7:{NFSU2_TR(0x6fa1a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fa1aa:{NFSU2_TR(0x6fa1aa);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+8,u32(r1(R+512)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+12,u32(u32(r4(R+4))+u32(r4(U+4))));
w4(R+4,u32(u32(r4(U+12))+u32(r4(U+8))));
}
B6fa1ad:{NFSU2_TR(0x6fa1ad);
u8 U[14];
__builtin_memmove((U+6),gp(0x813adc),4);
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
B6fa1b3:{NFSU2_TR(0x6fa1b3);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6fa1d2;}}
}
B6fa1b5:L6fa1b5:{c.instructions+=1;NFSU2_TR(0x6fa1b5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6fa1bf;}}
}
B6fa1b7:L6fa1b7:{c.instructions+=2;NFSU2_TR(0x6fa1b7);
u8 U[14];
__builtin_memmove((U+6),gp(0x813ad8),4);
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
B6fa1bd:{NFSU2_TR(0x6fa1bd);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6fa1d2;}}
}
B6fa1bf:L6fa1bf:{c.instructions+=5;NFSU2_TR(0x6fa1bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fa1c2:{NFSU2_TR(0x6fa1c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fa1c5:{NFSU2_TR(0x6fa1c5);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x104ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6fa1cc:{NFSU2_TR(0x6fa1cc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6fa1d0:{NFSU2_TR(0x6fa1d0);
{goto L6fa1df;}
}
B6fa1d2:L6fa1d2:{c.instructions+=3;NFSU2_TR(0x6fa1d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fa1d8:{NFSU2_TR(0x6fa1d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa1d9:{NFSU2_TR(0x6fa1d9);
u8 U[4];
__builtin_memmove((U+0),gp(0x78322c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa1dfull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6fa1df:L6fa1df:{c.instructions+=2;NFSU2_TR(0x6fa1df);
__builtin_memmove((R+4),(R+24),4);
}
B6fa1e1:{NFSU2_TR(0x6fa1e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa1e6ull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B6fa1e6:L6fa1e6:{c.instructions+=1;NFSU2_TR(0x6fa1e6);
{goto L6fa1f5;}
}
B6fa1e8:L6fa1e8:{c.instructions+=3;NFSU2_TR(0x6fa1e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fa1ee:{NFSU2_TR(0x6fa1ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa1ef:{NFSU2_TR(0x6fa1ef);
u8 U[4];
__builtin_memmove((U+0),gp(0x78322c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa1f5ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6fa1f5:L6fa1f5:{c.instructions+=2;NFSU2_TR(0x6fa1f5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6fa1f8:{NFSU2_TR(0x6fa1f8);
{goto L6fa1fc;}
}
B6fa1fa:L6fa1fa:{c.instructions+=1;NFSU2_TR(0x6fa1fa);
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
B6fa1fc:L6fa1fc:{c.instructions+=5;NFSU2_TR(0x6fa1fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fa1fd:{NFSU2_TR(0x6fa1fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fa1fe:{NFSU2_TR(0x6fa1fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fa1ff:{NFSU2_TR(0x6fa1ff);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6fa200:{NFSU2_TR(0x6fa200);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fa201:L6fa201:{c.instructions+=6;NFSU2_TR(0x6fa201);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa202:{NFSU2_TR(0x6fa202);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa203:{NFSU2_TR(0x6fa203);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa204:{NFSU2_TR(0x6fa204);
w4(R+24,u32(0x8ad664ull));
}
B6fa209:{NFSU2_TR(0x6fa209);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa20a:{NFSU2_TR(0x6fa20a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa20full));
TAIL_STATIC(0x6f6335u,6f6);
}
B6fa20f:L6fa20f:{c.instructions+=2;NFSU2_TR(0x6fa20f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6fa211:{NFSU2_TR(0x6fa211);
{goto L6fa26a;}
}
B6fa213:L6fa213:{c.instructions+=2;NFSU2_TR(0x6fa213);
w4(R+4,u32(0x8ad69cull));
}
B6fa218:{NFSU2_TR(0x6fa218);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa21dull));
TAIL_STATIC(0x6f6b56u,6f6);
}
B6fa21d:L6fa21d:{c.instructions+=3;NFSU2_TR(0x6fa21d);
__builtin_memmove((R+28),(R+0),4);
}
B6fa21f:{NFSU2_TR(0x6fa21f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6fa221:{NFSU2_TR(0x6fa221);
if(r1(R+518)){{goto L6fa24b;}}
}
B6fa223:L6fa223:{c.instructions+=6;NFSU2_TR(0x6fa223);
u8 U[4];
w4(U+0,u32(0xc8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa228:{NFSU2_TR(0x6fa228);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa229:{NFSU2_TR(0x6fa229);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fa22c:{NFSU2_TR(0x6fa22c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa22d:{NFSU2_TR(0x6fa22d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa22e:{NFSU2_TR(0x6fa22e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa233ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa03eu);}goto L6fa03e;}
}
B6fa233:L6fa233:{c.instructions+=6;NFSU2_TR(0x6fa233);
__builtin_memmove((R+4),gp(0x813aa4),4);
}
B6fa239:{NFSU2_TR(0x6fa239);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fa23b:{NFSU2_TR(0x6fa23b);
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
B6fa23e:{NFSU2_TR(0x6fa23e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa23f:{NFSU2_TR(0x6fa23f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa240:{NFSU2_TR(0x6fa240);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa243ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fa243:L6fa243:{c.instructions+=2;NFSU2_TR(0x6fa243);
u8 U[2];
__builtin_memmove((U+0),gp(0x8ad679),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6fa249:{NFSU2_TR(0x6fa249);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa213u);}goto L6fa213;}}
}
B6fa24b:L6fa24b:{c.instructions+=1;NFSU2_TR(0x6fa24b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa250ull));
TAIL_STATIC(0x6f97ccu,6f9);
}
B6fa250:L6fa250:{c.instructions+=4;NFSU2_TR(0x6fa250);
__builtin_memmove(gp(0x8ad679),(R+12),1);
}
B6fa256:{NFSU2_TR(0x6fa256);
__builtin_memmove(gp(0x8ad678),(R+12),1);
}
B6fa25c:{NFSU2_TR(0x6fa25c);
u8 U[5];
__builtin_memmove((U+3),gp(0x8ad660),1);
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
B6fa262:{NFSU2_TR(0x6fa262);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fa27f;}}
}
B6fa264:L6fa264:{c.instructions+=2;NFSU2_TR(0x6fa264);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa265:{NFSU2_TR(0x6fa265);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa26aull));
TAIL_STATIC(0x6f6335u,6f6);
}
B6fa26a:L6fa26a:{c.instructions+=4;NFSU2_TR(0x6fa26a);
s1(0x8ad678,u8(0x1ull));
}
B6fa271:{NFSU2_TR(0x6fa271);
u8 U[2];
__builtin_memmove((U+0),gp(0x8ad660),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6fa277:{NFSU2_TR(0x6fa277);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fa278:{NFSU2_TR(0x6fa278);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa243u);}goto L6fa243;}}
}
B6fa27a:L6fa27a:{c.instructions+=1;NFSU2_TR(0x6fa27a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa27full));
TAIL_STATIC(0x6f97ccu,6f9);
}
B6fa27f:L6fa27f:{c.instructions+=5;NFSU2_TR(0x6fa27f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fa280:{NFSU2_TR(0x6fa280);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fa281:{NFSU2_TR(0x6fa281);
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
B6fa283:{NFSU2_TR(0x6fa283);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fa284:{NFSU2_TR(0x6fa284);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fa285:L6fa285:{c.instructions+=15;NFSU2_TR(0x6fa285);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa286:{NFSU2_TR(0x6fa286);
__builtin_memmove((R+20),(R+16),4);
}
B6fa288:{NFSU2_TR(0x6fa288);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x478ull))));
}
B6fa28e:{NFSU2_TR(0x6fa28e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa28f:{NFSU2_TR(0x6fa28f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6fa291:{NFSU2_TR(0x6fa291);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa292:{NFSU2_TR(0x6fa292);
__builtin_memmove(gp(0x8ad679),(R+12),1);
}
B6fa298:{NFSU2_TR(0x6fa298);
__builtin_memmove(gp(0x8ad678),(R+12),1);
}
B6fa29e:{NFSU2_TR(0x6fa29e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa29f:{NFSU2_TR(0x6fa29f);
w4(R+4,u32(0x8ad680ull));
}
B6fa2a4:{NFSU2_TR(0x6fa2a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fa2a7:{NFSU2_TR(0x6fa2a7);
__builtin_memmove(gp(0x8ad660),(R+12),1);
}
B6fa2ad:{NFSU2_TR(0x6fa2ad);
s1(0x8ad67a,u8(0x1ull));
}
B6fa2b4:{NFSU2_TR(0x6fa2b4);
__builtin_memmove(gp(0x8ad661),(R+12),1);
}
B6fa2ba:{NFSU2_TR(0x6fa2ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa2bfull));
TAIL_STATIC(0x6f55c7u,6f5);
}
B6fa2bf:L6fa2bf:{c.instructions+=2;NFSU2_TR(0x6fa2bf);
u8 U[4];
w4(U+0,u32(0x8ad664ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa2c4:{NFSU2_TR(0x6fa2c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa2c9ull));
TAIL_STATIC(0x6f62e9u,6f6);
}
B6fa2c9:L6fa2c9:{c.instructions+=7;NFSU2_TR(0x6fa2c9);
u8 U[4];
w4(U+0,u32(0xfffffffdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa2cb:{NFSU2_TR(0x6fa2cb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa2cc:{NFSU2_TR(0x6fa2cc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa2cd:{NFSU2_TR(0x6fa2cd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa2ce:{NFSU2_TR(0x6fa2ce);
u8 U[4];
w4(U+0,u32(0x6fa201ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa2d3:{NFSU2_TR(0x6fa2d3);
u8 U[4];
w4(U+0,u32(0x8ad66cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa2d8:{NFSU2_TR(0x6fa2d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa2ddull));
TAIL_STATIC(0x6f5a40u,6f5);
}
B6fa2dd:L6fa2dd:{c.instructions+=6;NFSU2_TR(0x6fa2dd);
__builtin_memmove((R+0),gp(0x813ad0),4);
}
B6fa2e2:{NFSU2_TR(0x6fa2e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb88ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fa2e8:{NFSU2_TR(0x6fa2e8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B6fa2eb:{NFSU2_TR(0x6fa2eb);
s1(0x8ad67b,u8(0x1ull));
}
B6fa2f2:{NFSU2_TR(0x6fa2f2);
__builtin_memmove((R+24),(R+0),4);
}
B6fa2f4:{NFSU2_TR(0x6fa2f4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B6fa2f6:L6fa2f6:{c.instructions+=5;NFSU2_TR(0x6fa2f6);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6fa2f8:{NFSU2_TR(0x6fa2f8);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),1);
s1(u32(r4(U+4)),r1(U+8));
}
B6fa2fb:{NFSU2_TR(0x6fa2fb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6fa2fc:{NFSU2_TR(0x6fa2fc);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6fa2fe:{NFSU2_TR(0x6fa2fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa2f6u);}goto L6fa2f6;}}
}
B6fa300:L6fa300:{c.instructions+=2;NFSU2_TR(0x6fa300);
__builtin_memmove((R+0),gp(0x813afc),4);
}
B6fa305:{NFSU2_TR(0x6fa305);
__builtin_memmove((R+8),(R+0),4);
}
B6fa307:L6fa307:{c.instructions+=4;NFSU2_TR(0x6fa307);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6fa309:{NFSU2_TR(0x6fa309);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fa30a:{NFSU2_TR(0x6fa30a);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6fa30c:{NFSU2_TR(0x6fa30c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa307u);}goto L6fa307;}}
}
B6fa30e:L6fa30e:{c.instructions+=3;NFSU2_TR(0x6fa30e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb88ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fa314:{NFSU2_TR(0x6fa314);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B6fa316:{NFSU2_TR(0x6fa316);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B6fa317:L6fa317:{c.instructions+=4;NFSU2_TR(0x6fa317);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6fa31a:{NFSU2_TR(0x6fa31a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6fa31b:{NFSU2_TR(0x6fa31b);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6fa31d:{NFSU2_TR(0x6fa31d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa317u);}goto L6fa317;}}
}
B6fa31f:L6fa31f:{c.instructions+=3;NFSU2_TR(0x6fa31f);
__builtin_memmove((R+4),(R+0),4);
}
B6fa321:{NFSU2_TR(0x6fa321);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6fa324:{NFSU2_TR(0x6fa324);
__builtin_memmove((R+24),(R+8),4);
}
B6fa326:L6fa326:{c.instructions+=1;NFSU2_TR(0x6fa326);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6fa328;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa326u);}goto L6fa326;}
}
B6fa328:L6fa328:{c.instructions+=6;NFSU2_TR(0x6fa328);
__builtin_memmove((R+4),(R+0),4);
}
B6fa32a:{NFSU2_TR(0x6fa32a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa32b:{NFSU2_TR(0x6fa32b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb88ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fa331:{NFSU2_TR(0x6fa331);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6fa334:{NFSU2_TR(0x6fa334);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa335:{NFSU2_TR(0x6fa335);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa336:L6fa336:{c.instructions+=1;NFSU2_TR(0x6fa336);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6fa338;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa336u);}goto L6fa336;}
}
B6fa338:L6fa338:{c.instructions+=1;NFSU2_TR(0x6fa338);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa33dull));
TAIL_STATIC(0x6f9271u,6f9);
}
B6fa33d:L6fa33d:{c.instructions+=5;NFSU2_TR(0x6fa33d);
__builtin_memmove((R+8),(R+0),4);
}
B6fa33f:{NFSU2_TR(0x6fa33f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6fa342:{NFSU2_TR(0x6fa342);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6fa344:{NFSU2_TR(0x6fa344);
__builtin_memmove(gp(0x8ad67c),(R+8),4);
}
B6fa34a:{NFSU2_TR(0x6fa34a);
if(r1(R+518)){{goto L6fa3ad;}}
}
B6fa34c:L6fa34c:{c.instructions+=4;NFSU2_TR(0x6fa34c);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x128ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6fa352:{NFSU2_TR(0x6fa352);
__builtin_memmove((R+0),(R+518),1);
}
B6fa355:{NFSU2_TR(0x6fa355);
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
B6fa357:{NFSU2_TR(0x6fa357);
if(r1(R+518)){{goto L6fa39a;}}
}
B6fa359:L6fa359:{c.instructions+=5;NFSU2_TR(0x6fa359);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6fa35c:{NFSU2_TR(0x6fa35c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6fa35f:{NFSU2_TR(0x6fa35f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
__builtin_memmove((R+0),(U+0),1);
}
B6fa362:{NFSU2_TR(0x6fa362);
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
B6fa364:{NFSU2_TR(0x6fa364);
if(r1(R+518)){{goto L6fa39a;}}
}
B6fa366:L6fa366:{c.instructions+=4;NFSU2_TR(0x6fa366);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6fa369:{NFSU2_TR(0x6fa369);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+0),(U+1),1);
}
B6fa36c:{NFSU2_TR(0x6fa36c);
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
B6fa36e:{NFSU2_TR(0x6fa36e);
if(r1(R+518)){{goto L6fa39a;}}
}
B6fa370:L6fa370:{c.instructions+=7;NFSU2_TR(0x6fa370);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fa373:{NFSU2_TR(0x6fa373);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x105ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6fa379:{NFSU2_TR(0x6fa379);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa37a:{NFSU2_TR(0x6fa37a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa37b:{NFSU2_TR(0x6fa37b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x128ull))));
}
B6fa381:{NFSU2_TR(0x6fa381);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa382:{NFSU2_TR(0x6fa382);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa387ull));
TAIL_STATIC(0x6fb137u,6fb);
}
B6fa387:L6fa387:{c.instructions+=6;NFSU2_TR(0x6fa387);
__builtin_memmove((R+8),gp(0x8ad67c),4);
}
B6fa38d:{NFSU2_TR(0x6fa38d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6fa390:{NFSU2_TR(0x6fa390);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6fa393:{NFSU2_TR(0x6fa393);
__builtin_memmove((R+0),(R+518),1);
}
B6fa396:{NFSU2_TR(0x6fa396);
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
B6fa398:{NFSU2_TR(0x6fa398);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fa3ad;}}
}
B6fa39a:L6fa39a:{c.instructions+=5;NFSU2_TR(0x6fa39a);
__builtin_memmove((R+4),gp(0x813aa4),4);
}
B6fa3a0:{NFSU2_TR(0x6fa3a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fa3a2:{NFSU2_TR(0x6fa3a2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa3a3:{NFSU2_TR(0x6fa3a3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa3a4:{NFSU2_TR(0x6fa3a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa3a7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fa3a7:L6fa3a7:{c.instructions+=1;NFSU2_TR(0x6fa3a7);
__builtin_memmove(gp(0x8ad67c),(R+12),4);
}
B6fa3ad:L6fa3ad:{c.instructions+=5;NFSU2_TR(0x6fa3ad);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa3ae:{NFSU2_TR(0x6fa3ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fa3b1:{NFSU2_TR(0x6fa3b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa3b2:{NFSU2_TR(0x6fa3b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fa3b5:{NFSU2_TR(0x6fa3b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa3baull));
TAIL_STATIC(0x6f922fu,6f9);
}
B6fa3ba:L6fa3ba:{c.instructions+=5;NFSU2_TR(0x6fa3ba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6fa3bd:{NFSU2_TR(0x6fa3bd);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
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
B6fa3c0:{NFSU2_TR(0x6fa3c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fa3c3:{NFSU2_TR(0x6fa3c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fa3c6:{NFSU2_TR(0x6fa3c6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6fa816;}}
}
B6fa3cc:L6fa3cc:{c.instructions+=2;NFSU2_TR(0x6fa3cc);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B6fa3cf:{NFSU2_TR(0x6fa3cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fa420;}}
}
B6fa3d1:L6fa3d1:{c.instructions+=17;NFSU2_TR(0x6fa3d1);
__builtin_memmove((R+4),gp(0x813aa4),4);
}
B6fa3d7:{NFSU2_TR(0x6fa3d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fa3da:{NFSU2_TR(0x6fa3da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fa3dd:{NFSU2_TR(0x6fa3dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6fa3e0:{NFSU2_TR(0x6fa3e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fa3e3:{NFSU2_TR(0x6fa3e3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa3e4:{NFSU2_TR(0x6fa3e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fa3eb:{NFSU2_TR(0x6fa3eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
w4(U+4,u32(0x127ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fa3f2:{NFSU2_TR(0x6fa3f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fa3f9:{NFSU2_TR(0x6fa3f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x7c30b0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fa400:{NFSU2_TR(0x6fa400);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fa407:{NFSU2_TR(0x6fa407);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
w4(U+4,u32(0x7c30ecull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fa40e:{NFSU2_TR(0x6fa40e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fa411:{NFSU2_TR(0x6fa411);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fa414:{NFSU2_TR(0x6fa414);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fa416:{NFSU2_TR(0x6fa416);
u8 U[4];
w4(U+0,u32(0x10cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa41b:{NFSU2_TR(0x6fa41b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa41dull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B6fa41d:L6fa41d:{c.instructions+=1;NFSU2_TR(0x6fa41d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fa420:L6fa420:{c.instructions+=3;NFSU2_TR(0x6fa420);
u8 U[4];
w4(U+0,u32(0x2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa422:{NFSU2_TR(0x6fa422);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fa425:{NFSU2_TR(0x6fa425);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa42aull));
TAIL_STATIC(0x75cf10u,75c);
}
B6fa42a:L6fa42a:{c.instructions+=5;NFSU2_TR(0x6fa42a);
__builtin_memmove((R+24),(R+0),4);
}
B6fa42c:{NFSU2_TR(0x6fa42c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6fa42d:{NFSU2_TR(0x6fa42d);
u8 U[4];
w4(U+0,u32(0x2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa42f:{NFSU2_TR(0x6fa42f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa430:{NFSU2_TR(0x6fa430);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa435ull));
TAIL_STATIC(0x75cf10u,75c);
}
B6fa435:L6fa435:{c.instructions+=4;NFSU2_TR(0x6fa435);
__builtin_memmove((R+28),(R+0),4);
}
B6fa437:{NFSU2_TR(0x6fa437);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa438:{NFSU2_TR(0x6fa438);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+28)),r1(U+0));
}
B6fa43a:{NFSU2_TR(0x6fa43a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa43full));
TAIL_STATIC(0x75d65bu,75d);
}
B6fa43f:L6fa43f:{c.instructions+=6;NFSU2_TR(0x6fa43f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6fa442:{NFSU2_TR(0x6fa442);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6fa443:{NFSU2_TR(0x6fa443);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa445:{NFSU2_TR(0x6fa445);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa446:{NFSU2_TR(0x6fa446);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fa44c:{NFSU2_TR(0x6fa44c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa451ull));
TAIL_STATIC(0x75cf10u,75c);
}
B6fa451:L6fa451:{c.instructions+=4;NFSU2_TR(0x6fa451);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fa454:{NFSU2_TR(0x6fa454);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B6fa457:{NFSU2_TR(0x6fa457);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+0)),r1(U+0));
}
B6fa459:{NFSU2_TR(0x6fa459);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B6fa45b:L6fa45b:{c.instructions+=5;NFSU2_TR(0x6fa45b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+8),(U+0),1);
}
B6fa45d:{NFSU2_TR(0x6fa45d);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B6fa460:{NFSU2_TR(0x6fa460);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6fa461:{NFSU2_TR(0x6fa461);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+8))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6fa463:{NFSU2_TR(0x6fa463);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa45bu);}goto L6fa45b;}}
}
B6fa465:L6fa465:{c.instructions+=4;NFSU2_TR(0x6fa465);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6fa468:{NFSU2_TR(0x6fa468);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x1ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6fa46f:{NFSU2_TR(0x6fa46f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fa472:{NFSU2_TR(0x6fa472);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6fa7f3;}}
}
B6fa478:L6fa478:{c.instructions+=5;NFSU2_TR(0x6fa478);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6fa47b:{NFSU2_TR(0x6fa47b);
u8 U[4];
w4(U+0,u32(0x2aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa47d:{NFSU2_TR(0x6fa47d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fa480:{NFSU2_TR(0x6fa480);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa481:{NFSU2_TR(0x6fa481);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa486ull));
TAIL_STATIC(0x75cf10u,75c);
}
B6fa486:L6fa486:{c.instructions+=4;NFSU2_TR(0x6fa486);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fa488:{NFSU2_TR(0x6fa488);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fa489:{NFSU2_TR(0x6fa489);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fa48a:{NFSU2_TR(0x6fa48a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fa59c;}}
}
B6fa490:L6fa490:{c.instructions+=3;NFSU2_TR(0x6fa490);
u8 U[4];
w4(U+0,u32(0x3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa492:{NFSU2_TR(0x6fa492);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa493:{NFSU2_TR(0x6fa493);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa498ull));
TAIL_STATIC(0x75cf10u,75c);
}
B6fa498:L6fa498:{c.instructions+=4;NFSU2_TR(0x6fa498);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fa49a:{NFSU2_TR(0x6fa49a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fa49b:{NFSU2_TR(0x6fa49b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fa49c:{NFSU2_TR(0x6fa49c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fa59c;}}
}
B6fa4a2:L6fa4a2:{c.instructions+=2;NFSU2_TR(0x6fa4a2);
__builtin_memmove((R+4),(R+24),4);
}
B6fa4a4:{NFSU2_TR(0x6fa4a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa4a9ull));
TAIL_STATIC(0x6f9aefu,6f9);
}
B6fa4a9:L6fa4a9:{c.instructions+=2;NFSU2_TR(0x6fa4a9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6fa4ab:{NFSU2_TR(0x6fa4ab);
if(r1(R+518)){{goto L6fa7f3;}}
}
B6fa4b1:L6fa4b1:{c.instructions+=3;NFSU2_TR(0x6fa4b1);
__builtin_memmove((R+0),gp(0x813ad0),4);
}
B6fa4b6:{NFSU2_TR(0x6fa4b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe9cull))));
__builtin_memmove((R+8),(U+0),4);
}
B6fa4bc:{NFSU2_TR(0x6fa4bc);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B6fa4be:L6fa4be:{c.instructions+=5;NFSU2_TR(0x6fa4be);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6fa4c0:{NFSU2_TR(0x6fa4c0);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B6fa4c3:{NFSU2_TR(0x6fa4c3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fa4c4:{NFSU2_TR(0x6fa4c4);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6fa4c6:{NFSU2_TR(0x6fa4c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa4beu);}goto L6fa4be;}}
}
B6fa4c8:L6fa4c8:{c.instructions+=3;NFSU2_TR(0x6fa4c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fa4cb:{NFSU2_TR(0x6fa4cb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6fa4ce:{NFSU2_TR(0x6fa4ce);
__builtin_memmove((R+24),(R+0),4);
}
B6fa4d0:L6fa4d0:{c.instructions+=4;NFSU2_TR(0x6fa4d0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6fa4d2:{NFSU2_TR(0x6fa4d2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fa4d3:{NFSU2_TR(0x6fa4d3);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6fa4d5:{NFSU2_TR(0x6fa4d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa4d0u);}goto L6fa4d0;}}
}
B6fa4d7:L6fa4d7:{c.instructions+=3;NFSU2_TR(0x6fa4d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe9cull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fa4dd:{NFSU2_TR(0x6fa4dd);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B6fa4df:{NFSU2_TR(0x6fa4df);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B6fa4e0:L6fa4e0:{c.instructions+=4;NFSU2_TR(0x6fa4e0);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6fa4e3:{NFSU2_TR(0x6fa4e3);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6fa4e4:{NFSU2_TR(0x6fa4e4);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6fa4e6:{NFSU2_TR(0x6fa4e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa4e0u);}goto L6fa4e0;}}
}
B6fa4e8:L6fa4e8:{c.instructions+=3;NFSU2_TR(0x6fa4e8);
__builtin_memmove((R+4),(R+0),4);
}
B6fa4ea:{NFSU2_TR(0x6fa4ea);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6fa4ed:{NFSU2_TR(0x6fa4ed);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa4ee:L6fa4ee:{c.instructions+=1;NFSU2_TR(0x6fa4ee);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6fa4f0;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa4eeu);}goto L6fa4ee;}
}
B6fa4f0:L6fa4f0:{c.instructions+=9;NFSU2_TR(0x6fa4f0);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa4f5:{NFSU2_TR(0x6fa4f5);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa4f7:{NFSU2_TR(0x6fa4f7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa4f8:{NFSU2_TR(0x6fa4f8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa4f9:{NFSU2_TR(0x6fa4f9);
__builtin_memmove((R+4),(R+0),4);
}
B6fa4fb:{NFSU2_TR(0x6fa4fb);
u8 U[4];
w4(U+0,u32(0x80000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa500:{NFSU2_TR(0x6fa500);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe9cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fa506:{NFSU2_TR(0x6fa506);
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
B6fa509:{NFSU2_TR(0x6fa509);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa50a:L6fa50a:{c.instructions+=1;NFSU2_TR(0x6fa50a);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6fa50c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa50au);}goto L6fa50a;}
}
B6fa50c:L6fa50c:{c.instructions+=1;NFSU2_TR(0x6fa50c);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831d0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa512ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6fa512:L6fa512:{c.instructions+=3;NFSU2_TR(0x6fa512);
__builtin_memmove((R+28),(R+0),4);
}
B6fa514:{NFSU2_TR(0x6fa514);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6fa517:{NFSU2_TR(0x6fa517);
if(r1(R+518)){{goto L6fa555;}}
}
B6fa519:L6fa519:{c.instructions+=4;NFSU2_TR(0x6fa519);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fa51c:{NFSU2_TR(0x6fa51c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6fa51f:{NFSU2_TR(0x6fa51f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa520:{NFSU2_TR(0x6fa520);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa525ull));
TAIL_STATIC(0x6f9988u,6f9);
}
B6fa525:L6fa525:{c.instructions+=7;NFSU2_TR(0x6fa525);
__builtin_memmove((R+24),gp(0x8ad67c),4);
}
B6fa52b:{NFSU2_TR(0x6fa52b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fa52c:{NFSU2_TR(0x6fa52c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa52d:{NFSU2_TR(0x6fa52d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa52e:{NFSU2_TR(0x6fa52e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fa531:{NFSU2_TR(0x6fa531);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fa534:{NFSU2_TR(0x6fa534);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831c8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa53aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6fa53a:L6fa53a:{c.instructions+=6;NFSU2_TR(0x6fa53a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+512,carry<u32>(r4(U+0),r4(R+0)));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+0))));
s4(u32(r4(R+24)),r4(U+0));
}
B6fa53c:{NFSU2_TR(0x6fa53c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fa53f:{NFSU2_TR(0x6fa53f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa540:{NFSU2_TR(0x6fa540);
u8 U[24];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+512)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+12)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),r4(R+12)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+12,u32(u32(r4(U+4))+u32(r4(R+12))));
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
B6fa543:{NFSU2_TR(0x6fa543);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x104ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6fa54a:{NFSU2_TR(0x6fa54a);
u8 U[4];
__builtin_memmove((U+0),gp(0x783144),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa550ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6fa550:L6fa550:{c.instructions+=1;NFSU2_TR(0x6fa550);
{goto L6fa7f3;}
}
B6fa555:L6fa555:{c.instructions+=4;NFSU2_TR(0x6fa555);
__builtin_memmove((R+0),gp(0x8ad69c),4);
}
B6fa55a:{NFSU2_TR(0x6fa55a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6fa55c:{NFSU2_TR(0x6fa55c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6fa55e:{NFSU2_TR(0x6fa55e);
if(r1(R+518)){{goto L6fa579;}}
}
B6fa560:L6fa560:{c.instructions+=2;NFSU2_TR(0x6fa560);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6fa563:{NFSU2_TR(0x6fa563);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fa569:L6fa569:{c.instructions+=2;NFSU2_TR(0x6fa569);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+4)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6fa56f:{NFSU2_TR(0x6fa56f);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6fa58e;}}
}
B6fa571:L6fa571:{c.instructions+=4;NFSU2_TR(0x6fa571);
__builtin_memmove((R+8),(R+0),4);
}
B6fa573:{NFSU2_TR(0x6fa573);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fa575:{NFSU2_TR(0x6fa575);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6fa577:{NFSU2_TR(0x6fa577);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa569u);}goto L6fa569;}}
}
B6fa579:L6fa579:{c.instructions+=3;NFSU2_TR(0x6fa579);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fa57c:{NFSU2_TR(0x6fa57c);
w4(R+4,u32(0x8ad69cull));
}
B6fa581:{NFSU2_TR(0x6fa581);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa586ull));
TAIL_STATIC(0x6f805cu,6f8);
}
B6fa586:L6fa586:{c.instructions+=2;NFSU2_TR(0x6fa586);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fa589:{NFSU2_TR(0x6fa589);
{goto L6fa7f3;}
}
B6fa58e:L6fa58e:{c.instructions+=4;NFSU2_TR(0x6fa58e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa58f:{NFSU2_TR(0x6fa58f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa590:{NFSU2_TR(0x6fa590);
w4(R+4,u32(0x8ad69cull));
}
B6fa595:{NFSU2_TR(0x6fa595);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa59aull));
{goto L6fa83d;}
}
B6fa59a:L6fa59a:{c.instructions+=1;NFSU2_TR(0x6fa59a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa586u);}goto L6fa586;}
}
B6fa59c:L6fa59c:{c.instructions+=5;NFSU2_TR(0x6fa59c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fa5a2:{NFSU2_TR(0x6fa5a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fa5a5:{NFSU2_TR(0x6fa5a5);
__builtin_memmove((R+0),gp(0x813ad4),4);
}
B6fa5aa:{NFSU2_TR(0x6fa5aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe9cull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fa5b0:{NFSU2_TR(0x6fa5b0);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B6fa5b2:L6fa5b2:{c.instructions+=5;NFSU2_TR(0x6fa5b2);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6fa5b4:{NFSU2_TR(0x6fa5b4);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B6fa5b7:{NFSU2_TR(0x6fa5b7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fa5b8:{NFSU2_TR(0x6fa5b8);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6fa5ba:{NFSU2_TR(0x6fa5ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa5b2u);}goto L6fa5b2;}}
}
B6fa5bc:L6fa5bc:{c.instructions+=2;NFSU2_TR(0x6fa5bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fa5bf:{NFSU2_TR(0x6fa5bf);
__builtin_memmove((R+8),(R+0),4);
}
B6fa5c1:L6fa5c1:{c.instructions+=4;NFSU2_TR(0x6fa5c1);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6fa5c3:{NFSU2_TR(0x6fa5c3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fa5c4:{NFSU2_TR(0x6fa5c4);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6fa5c6:{NFSU2_TR(0x6fa5c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa5c1u);}goto L6fa5c1;}}
}
B6fa5c8:L6fa5c8:{c.instructions+=3;NFSU2_TR(0x6fa5c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe9cull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fa5ce:{NFSU2_TR(0x6fa5ce);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B6fa5d0:{NFSU2_TR(0x6fa5d0);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B6fa5d1:L6fa5d1:{c.instructions+=4;NFSU2_TR(0x6fa5d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6fa5d4:{NFSU2_TR(0x6fa5d4);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6fa5d5:{NFSU2_TR(0x6fa5d5);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6fa5d7:{NFSU2_TR(0x6fa5d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa5d1u);}goto L6fa5d1;}}
}
B6fa5d9:L6fa5d9:{c.instructions+=3;NFSU2_TR(0x6fa5d9);
__builtin_memmove((R+4),(R+0),4);
}
B6fa5db:{NFSU2_TR(0x6fa5db);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6fa5de:{NFSU2_TR(0x6fa5de);
__builtin_memmove((R+24),(R+8),4);
}
B6fa5e0:L6fa5e0:{c.instructions+=1;NFSU2_TR(0x6fa5e0);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6fa5e2;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa5e0u);}goto L6fa5e0;}
}
B6fa5e2:L6fa5e2:{c.instructions+=2;NFSU2_TR(0x6fa5e2);
__builtin_memmove((R+4),(R+0),4);
}
B6fa5e4:{NFSU2_TR(0x6fa5e4);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6fa5e7:L6fa5e7:{c.instructions+=1;NFSU2_TR(0x6fa5e7);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6fa5e9;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa5e7u);}goto L6fa5e7;}
}
B6fa5e9:L6fa5e9:{c.instructions+=4;NFSU2_TR(0x6fa5e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6fa5ec:{NFSU2_TR(0x6fa5ec);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6fa5ef:{NFSU2_TR(0x6fa5ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd98ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fa5f5:{NFSU2_TR(0x6fa5f5);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B6fa5f7:L6fa5f7:{c.instructions+=5;NFSU2_TR(0x6fa5f7);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6fa5f9:{NFSU2_TR(0x6fa5f9);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B6fa5fc:{NFSU2_TR(0x6fa5fc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6fa5fd:{NFSU2_TR(0x6fa5fd);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6fa5ff:{NFSU2_TR(0x6fa5ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa5f7u);}goto L6fa5f7;}}
}
B6fa601:L6fa601:{c.instructions+=2;NFSU2_TR(0x6fa601);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd98ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fa607:{NFSU2_TR(0x6fa607);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6fa60a:L6fa60a:{c.instructions+=4;NFSU2_TR(0x6fa60a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6fa60c:{NFSU2_TR(0x6fa60c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fa60d:{NFSU2_TR(0x6fa60d);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6fa60f:{NFSU2_TR(0x6fa60f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa60au);}goto L6fa60a;}}
}
B6fa611:L6fa611:{c.instructions+=2;NFSU2_TR(0x6fa611);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B6fa613:{NFSU2_TR(0x6fa613);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffd97ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6fa61a:L6fa61a:{c.instructions+=3;NFSU2_TR(0x6fa61a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6fa61b:{NFSU2_TR(0x6fa61b);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x5cull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6fa61e:{NFSU2_TR(0x6fa61e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa61au);}goto L6fa61a;}}
}
B6fa620:L6fa620:{c.instructions+=6;NFSU2_TR(0x6fa620);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6fa623:{NFSU2_TR(0x6fa623);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc88ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fa629:{NFSU2_TR(0x6fa629);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa62a:{NFSU2_TR(0x6fa62a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe9cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fa630:{NFSU2_TR(0x6fa630);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa631:{NFSU2_TR(0x6fa631);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa636ull));
{goto L6faf1e;}
}
B6fa636:L6fa636:{c.instructions+=4;NFSU2_TR(0x6fa636);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6fa638:{NFSU2_TR(0x6fa638);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fa639:{NFSU2_TR(0x6fa639);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fa63a:{NFSU2_TR(0x6fa63a);
if(r1(R+518)){{goto L6fa7f3;}}
}
B6fa640:L6fa640:{c.instructions+=2;NFSU2_TR(0x6fa640);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6fa647:{NFSU2_TR(0x6fa647);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fa7d1;}}
}
B6fa64d:L6fa64d:{c.instructions+=3;NFSU2_TR(0x6fa64d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6fa650:{NFSU2_TR(0x6fa650);
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
B6fa652:{NFSU2_TR(0x6fa652);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fa6a5;}}
}
B6fa654:L6fa654:{c.instructions+=17;NFSU2_TR(0x6fa654);
__builtin_memmove((R+4),gp(0x813aa4),4);
}
B6fa65a:{NFSU2_TR(0x6fa65a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fa65d:{NFSU2_TR(0x6fa65d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fa660:{NFSU2_TR(0x6fa660);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6fa663:{NFSU2_TR(0x6fa663);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fa666:{NFSU2_TR(0x6fa666);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa667:{NFSU2_TR(0x6fa667);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fa66e:{NFSU2_TR(0x6fa66e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
w4(U+4,u32(0x162ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fa675:{NFSU2_TR(0x6fa675);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fa67c:{NFSU2_TR(0x6fa67c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
w4(U+4,u32(0x7c30b0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fa683:{NFSU2_TR(0x6fa683);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fa68a:{NFSU2_TR(0x6fa68a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
w4(U+4,u32(0x7c30ecull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fa691:{NFSU2_TR(0x6fa691);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fa694:{NFSU2_TR(0x6fa694);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fa697:{NFSU2_TR(0x6fa697);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fa699:{NFSU2_TR(0x6fa699);
u8 U[4];
w4(U+0,u32(0x10cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa69e:{NFSU2_TR(0x6fa69e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa6a0ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B6fa6a0:L6fa6a0:{c.instructions+=2;NFSU2_TR(0x6fa6a0);
__builtin_memmove((R+28),(R+0),4);
}
B6fa6a2:{NFSU2_TR(0x6fa6a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fa6a5:L6fa6a5:{c.instructions+=4;NFSU2_TR(0x6fa6a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd98ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fa6ab:{NFSU2_TR(0x6fa6ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6fa6ae:{NFSU2_TR(0x6fa6ae);
__builtin_memmove((R+0),(R+4),4);
}
B6fa6b0:{NFSU2_TR(0x6fa6b0);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B6fa6b2:L6fa6b2:{c.instructions+=5;NFSU2_TR(0x6fa6b2);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6fa6b4:{NFSU2_TR(0x6fa6b4);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),1);
s1(u32(r4(U+4)),r1(U+8));
}
B6fa6b7:{NFSU2_TR(0x6fa6b7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6fa6b8:{NFSU2_TR(0x6fa6b8);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6fa6ba:{NFSU2_TR(0x6fa6ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa6b2u);}goto L6fa6b2;}}
}
B6fa6bc:L6fa6bc:{c.instructions+=2;NFSU2_TR(0x6fa6bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc94ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fa6c2:{NFSU2_TR(0x6fa6c2);
__builtin_memmove((R+8),(R+4),4);
}
B6fa6c4:L6fa6c4:{c.instructions+=4;NFSU2_TR(0x6fa6c4);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6fa6c6:{NFSU2_TR(0x6fa6c6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6fa6c7:{NFSU2_TR(0x6fa6c7);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6fa6c9:{NFSU2_TR(0x6fa6c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa6c4u);}goto L6fa6c4;}}
}
B6fa6cb:L6fa6cb:{c.instructions+=3;NFSU2_TR(0x6fa6cb);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B6fa6cd:{NFSU2_TR(0x6fa6cd);
__builtin_memmove((R+0),(R+4),4);
}
B6fa6cf:{NFSU2_TR(0x6fa6cf);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x3ull))));
}
B6fa6d2:L6fa6d2:{c.instructions+=4;NFSU2_TR(0x6fa6d2);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6fa6d5:{NFSU2_TR(0x6fa6d5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6fa6d6:{NFSU2_TR(0x6fa6d6);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6fa6d8:{NFSU2_TR(0x6fa6d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa6d2u);}goto L6fa6d2;}}
}
B6fa6da:L6fa6da:{c.instructions+=3;NFSU2_TR(0x6fa6da);
__builtin_memmove((R+4),(R+0),4);
}
B6fa6dc:{NFSU2_TR(0x6fa6dc);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6fa6df:{NFSU2_TR(0x6fa6df);
__builtin_memmove((R+24),(R+8),4);
}
B6fa6e1:L6fa6e1:{c.instructions+=1;NFSU2_TR(0x6fa6e1);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6fa6e3;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa6e1u);}goto L6fa6e1;}
}
B6fa6e3:L6fa6e3:{c.instructions+=2;NFSU2_TR(0x6fa6e3);
__builtin_memmove((R+4),(R+0),4);
}
B6fa6e5:{NFSU2_TR(0x6fa6e5);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6fa6e8:L6fa6e8:{c.instructions+=1;NFSU2_TR(0x6fa6e8);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6fa6ea;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa6e8u);}goto L6fa6e8;}
}
B6fa6ea:L6fa6ea:{c.instructions+=3;NFSU2_TR(0x6fa6ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fa6ed:{NFSU2_TR(0x6fa6ed);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6fa6f0:{NFSU2_TR(0x6fa6f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa6f5ull));
TAIL_STATIC(0x6f9aefu,6f9);
}
B6fa6f5:L6fa6f5:{c.instructions+=2;NFSU2_TR(0x6fa6f5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6fa6f7:{NFSU2_TR(0x6fa6f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fa7d1;}}
}
B6fa6fd:L6fa6fd:{c.instructions+=3;NFSU2_TR(0x6fa6fd);
__builtin_memmove((R+0),gp(0x813ad0),4);
}
B6fa702:{NFSU2_TR(0x6fa702);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe9cull))));
__builtin_memmove((R+8),(U+0),4);
}
B6fa708:{NFSU2_TR(0x6fa708);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B6fa70a:L6fa70a:{c.instructions+=5;NFSU2_TR(0x6fa70a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6fa70c:{NFSU2_TR(0x6fa70c);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B6fa70f:{NFSU2_TR(0x6fa70f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fa710:{NFSU2_TR(0x6fa710);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6fa712:{NFSU2_TR(0x6fa712);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa70au);}goto L6fa70a;}}
}
B6fa714:L6fa714:{c.instructions+=3;NFSU2_TR(0x6fa714);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fa717:{NFSU2_TR(0x6fa717);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6fa71a:{NFSU2_TR(0x6fa71a);
__builtin_memmove((R+24),(R+0),4);
}
B6fa71c:L6fa71c:{c.instructions+=4;NFSU2_TR(0x6fa71c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6fa71e:{NFSU2_TR(0x6fa71e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fa71f:{NFSU2_TR(0x6fa71f);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6fa721:{NFSU2_TR(0x6fa721);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa71cu);}goto L6fa71c;}}
}
B6fa723:L6fa723:{c.instructions+=3;NFSU2_TR(0x6fa723);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe9cull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fa729:{NFSU2_TR(0x6fa729);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B6fa72b:{NFSU2_TR(0x6fa72b);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B6fa72c:L6fa72c:{c.instructions+=4;NFSU2_TR(0x6fa72c);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6fa72f:{NFSU2_TR(0x6fa72f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6fa730:{NFSU2_TR(0x6fa730);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6fa732:{NFSU2_TR(0x6fa732);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa72cu);}goto L6fa72c;}}
}
B6fa734:L6fa734:{c.instructions+=3;NFSU2_TR(0x6fa734);
__builtin_memmove((R+4),(R+0),4);
}
B6fa736:{NFSU2_TR(0x6fa736);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6fa739:{NFSU2_TR(0x6fa739);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa73a:L6fa73a:{c.instructions+=1;NFSU2_TR(0x6fa73a);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6fa73c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa73au);}goto L6fa73a;}
}
B6fa73c:L6fa73c:{c.instructions+=9;NFSU2_TR(0x6fa73c);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa741:{NFSU2_TR(0x6fa741);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa743:{NFSU2_TR(0x6fa743);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa744:{NFSU2_TR(0x6fa744);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa745:{NFSU2_TR(0x6fa745);
__builtin_memmove((R+4),(R+0),4);
}
B6fa747:{NFSU2_TR(0x6fa747);
u8 U[4];
w4(U+0,u32(0x80000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa74c:{NFSU2_TR(0x6fa74c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe9cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fa752:{NFSU2_TR(0x6fa752);
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
B6fa755:{NFSU2_TR(0x6fa755);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa756:L6fa756:{c.instructions+=1;NFSU2_TR(0x6fa756);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6fa758;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa756u);}goto L6fa756;}
}
B6fa758:L6fa758:{c.instructions+=1;NFSU2_TR(0x6fa758);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831d0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa75eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6fa75e:L6fa75e:{c.instructions+=3;NFSU2_TR(0x6fa75e);
__builtin_memmove((R+28),(R+0),4);
}
B6fa760:{NFSU2_TR(0x6fa760);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6fa763:{NFSU2_TR(0x6fa763);
if(r1(R+518)){{goto L6fa79e;}}
}
B6fa765:L6fa765:{c.instructions+=4;NFSU2_TR(0x6fa765);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fa768:{NFSU2_TR(0x6fa768);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6fa76b:{NFSU2_TR(0x6fa76b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa76c:{NFSU2_TR(0x6fa76c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa771ull));
TAIL_STATIC(0x6f9988u,6f9);
}
B6fa771:L6fa771:{c.instructions+=7;NFSU2_TR(0x6fa771);
__builtin_memmove((R+24),gp(0x8ad67c),4);
}
B6fa777:{NFSU2_TR(0x6fa777);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fa778:{NFSU2_TR(0x6fa778);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa779:{NFSU2_TR(0x6fa779);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa77a:{NFSU2_TR(0x6fa77a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fa77d:{NFSU2_TR(0x6fa77d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fa780:{NFSU2_TR(0x6fa780);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831c8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa786ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6fa786:L6fa786:{c.instructions+=6;NFSU2_TR(0x6fa786);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+512,carry<u32>(r4(U+0),r4(R+0)));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+0))));
s4(u32(r4(R+24)),r4(U+0));
}
B6fa788:{NFSU2_TR(0x6fa788);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fa78b:{NFSU2_TR(0x6fa78b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa78c:{NFSU2_TR(0x6fa78c);
u8 U[24];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+512)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+12)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),r4(R+12)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+12,u32(u32(r4(U+4))+u32(r4(R+12))));
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
B6fa78f:{NFSU2_TR(0x6fa78f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x104ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6fa796:{NFSU2_TR(0x6fa796);
u8 U[4];
__builtin_memmove((U+0),gp(0x783144),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa79cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6fa79c:L6fa79c:{c.instructions+=1;NFSU2_TR(0x6fa79c);
{goto L6fa7d1;}
}
B6fa79e:L6fa79e:{c.instructions+=6;NFSU2_TR(0x6fa79e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fa7a1:{NFSU2_TR(0x6fa7a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6fa7a4:{NFSU2_TR(0x6fa7a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fa7aa:{NFSU2_TR(0x6fa7aa);
__builtin_memmove((R+0),gp(0x8ad69c),4);
}
B6fa7af:{NFSU2_TR(0x6fa7af);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6fa7b1:{NFSU2_TR(0x6fa7b1);
{goto L6fa7bf;}
}
B6fa7b3:L6fa7b3:{c.instructions+=2;NFSU2_TR(0x6fa7b3);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+4)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6fa7b9:{NFSU2_TR(0x6fa7b9);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6fa82f;}}
}
B6fa7bb:L6fa7bb:{c.instructions+=2;NFSU2_TR(0x6fa7bb);
__builtin_memmove((R+24),(R+0),4);
}
B6fa7bd:{NFSU2_TR(0x6fa7bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fa7bf:L6fa7bf:{c.instructions+=2;NFSU2_TR(0x6fa7bf);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6fa7c1:{NFSU2_TR(0x6fa7c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa7b3u);}goto L6fa7b3;}}
}
B6fa7c3:L6fa7c3:{c.instructions+=3;NFSU2_TR(0x6fa7c3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa7c4:{NFSU2_TR(0x6fa7c4);
w4(R+4,u32(0x8ad69cull));
}
B6fa7c9:{NFSU2_TR(0x6fa7c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa7ceull));
TAIL_STATIC(0x6f805cu,6f8);
}
B6fa7ce:L6fa7ce:{c.instructions+=1;NFSU2_TR(0x6fa7ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fa7d1:L6fa7d1:{c.instructions+=3;NFSU2_TR(0x6fa7d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc88ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fa7d7:{NFSU2_TR(0x6fa7d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa7d8:{NFSU2_TR(0x6fa7d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa7ddull));
{goto L6faf79;}
}
B6fa7dd:L6fa7dd:{c.instructions+=3;NFSU2_TR(0x6fa7dd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6fa7df:{NFSU2_TR(0x6fa7df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fa7e0:{NFSU2_TR(0x6fa7e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa640u);}goto L6fa640;}}
}
B6fa7e6:L6fa7e6:{c.instructions+=3;NFSU2_TR(0x6fa7e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc88ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fa7ec:{NFSU2_TR(0x6fa7ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa7ed:{NFSU2_TR(0x6fa7ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa7f2ull));
{goto L6fafcc;}
}
B6fa7f2:L6fa7f2:{c.instructions+=1;NFSU2_TR(0x6fa7f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fa7f3:L6fa7f3:{c.instructions+=4;NFSU2_TR(0x6fa7f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fa7f6:{NFSU2_TR(0x6fa7f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6fa7f9:{NFSU2_TR(0x6fa7f9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B6fa7fc:{NFSU2_TR(0x6fa7fc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa3ccu);}goto L6fa3cc;}}
}
B6fa802:L6fa802:{c.instructions+=2;NFSU2_TR(0x6fa802);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B6fa805:{NFSU2_TR(0x6fa805);
if(r1(R+518)){{goto L6fa816;}}
}
B6fa807:L6fa807:{c.instructions+=5;NFSU2_TR(0x6fa807);
__builtin_memmove((R+4),gp(0x813aa4),4);
}
B6fa80d:{NFSU2_TR(0x6fa80d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fa80f:{NFSU2_TR(0x6fa80f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa810:{NFSU2_TR(0x6fa810);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fa813:{NFSU2_TR(0x6fa813);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa816ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fa816:L6fa816:{c.instructions+=5;NFSU2_TR(0x6fa816);
__builtin_memmove((R+4),gp(0x813aa4),4);
}
B6fa81c:{NFSU2_TR(0x6fa81c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fa81e:{NFSU2_TR(0x6fa81e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa81f:{NFSU2_TR(0x6fa81f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fa822:{NFSU2_TR(0x6fa822);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa825ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fa825:L6fa825:{c.instructions+=1;NFSU2_TR(0x6fa825);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa82aull));
TAIL_STATIC(0x6f9749u,6f9);
}
B6fa82a:L6fa82a:{c.instructions+=5;NFSU2_TR(0x6fa82a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fa82b:{NFSU2_TR(0x6fa82b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fa82c:{NFSU2_TR(0x6fa82c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fa82d:{NFSU2_TR(0x6fa82d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6fa82e:{NFSU2_TR(0x6fa82e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fa82f:L6fa82f:{c.instructions+=4;NFSU2_TR(0x6fa82f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa830:{NFSU2_TR(0x6fa830);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa831:{NFSU2_TR(0x6fa831);
w4(R+4,u32(0x8ad69cull));
}
B6fa836:{NFSU2_TR(0x6fa836);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa83bull));
{goto L6fa83d;}
}
B6fa83b:L6fa83b:{c.instructions+=1;NFSU2_TR(0x6fa83b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa7ceu);}goto L6fa7ce;}
}
B6fa83d:L6fa83d:{c.instructions+=5;NFSU2_TR(0x6fa83d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa83e:{NFSU2_TR(0x6fa83e);
__builtin_memmove((R+20),(R+16),4);
}
B6fa840:{NFSU2_TR(0x6fa840);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fa843:{NFSU2_TR(0x6fa843);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fa845:{NFSU2_TR(0x6fa845);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fa851;}}
}
B6fa847:L6fa847:{c.instructions+=2;NFSU2_TR(0x6fa847);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fa84a:{NFSU2_TR(0x6fa84a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa84full));
TAIL_STATIC(0x6f8041u,6f8);
}
B6fa84f:L6fa84f:{c.instructions+=1;NFSU2_TR(0x6fa84f);
{goto L6fa867;}
}
B6fa851:L6fa851:{c.instructions+=3;NFSU2_TR(0x6fa851);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(U+4))<(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6fa854:{NFSU2_TR(0x6fa854);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6fa857:{NFSU2_TR(0x6fa857);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fa85c;}}
}
B6fa859:L6fa859:{c.instructions+=1;NFSU2_TR(0x6fa859);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fa85c:L6fa85c:{c.instructions+=6;NFSU2_TR(0x6fa85c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa85d:{NFSU2_TR(0x6fa85d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6fa85f:{NFSU2_TR(0x6fa85f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6fa861:{NFSU2_TR(0x6fa861);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6fa863:{NFSU2_TR(0x6fa863);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
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
B6fa866:{NFSU2_TR(0x6fa866);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fa867:L6fa867:{c.instructions+=2;NFSU2_TR(0x6fa867);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fa868:{NFSU2_TR(0x6fa868);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fa86b:L6fa86b:{c.instructions+=9;NFSU2_TR(0x6fa86b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa86c:{NFSU2_TR(0x6fa86c);
__builtin_memmove((R+20),(R+16),4);
}
B6fa86e:{NFSU2_TR(0x6fa86e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa86f:{NFSU2_TR(0x6fa86f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa870:{NFSU2_TR(0x6fa870);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6fa872:{NFSU2_TR(0x6fa872);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6fa874:{NFSU2_TR(0x6fa874);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6fa876:{NFSU2_TR(0x6fa876);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
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
B6fa879:{NFSU2_TR(0x6fa879);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6fa898;}}
}
B6fa87b:L6fa87b:{c.instructions+=12;NFSU2_TR(0x6fa87b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fa87e:{NFSU2_TR(0x6fa87e);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B6fa882:{NFSU2_TR(0x6fa882);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(U+4,shl<u32>(r4(R+28),u64(r4(U+0))));
w4(U+8,u32(u32(u32(0x20ull))-u32(r4(U+0))));
w4(U+12,shr<u32>(r4(R+24),u64(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))|u32(r4(U+12))));
}
B6fa886:{NFSU2_TR(0x6fa886);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6fa889:{NFSU2_TR(0x6fa889);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6fa88a:{NFSU2_TR(0x6fa88a);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+24))));
}
B6fa88c:{NFSU2_TR(0x6fa88c);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B6fa88e:{NFSU2_TR(0x6fa88e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6fa88f:{NFSU2_TR(0x6fa88f);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
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
B6fa892:{NFSU2_TR(0x6fa892);
__builtin_memmove((R+24),(R+0),4);
}
B6fa894:{NFSU2_TR(0x6fa894);
__builtin_memmove((R+28),(R+8),4);
}
B6fa896:{NFSU2_TR(0x6fa896);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa87bu);}goto L6fa87b;}}
}
B6fa898:L6fa898:{c.instructions+=6;NFSU2_TR(0x6fa898);
__builtin_memmove((R+8),(R+28),4);
}
B6fa89a:{NFSU2_TR(0x6fa89a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fa89b:{NFSU2_TR(0x6fa89b);
__builtin_memmove((R+0),(R+24),4);
}
B6fa89d:{NFSU2_TR(0x6fa89d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fa89e:{NFSU2_TR(0x6fa89e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fa89f:{NFSU2_TR(0x6fa89f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fa8a0:L6fa8a0:{c.instructions+=6;NFSU2_TR(0x6fa8a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa8a1:{NFSU2_TR(0x6fa8a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa8a2:{NFSU2_TR(0x6fa8a2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa8a3:{NFSU2_TR(0x6fa8a3);
__builtin_memmove((R+12),(R+0),4);
}
B6fa8a5:{NFSU2_TR(0x6fa8a5);
__builtin_memmove((R+28),(R+4),4);
}
B6fa8a7:{NFSU2_TR(0x6fa8a7);
{goto L6fa8b0;}
}
B6fa8a9:L6fa8a9:{c.instructions+=2;NFSU2_TR(0x6fa8a9);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
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
B6fa8ac:{NFSU2_TR(0x6fa8ac);
if(r1(R+518)){{goto L6fa8ca;}}
}
B6fa8ae:L6fa8ae:{c.instructions+=2;NFSU2_TR(0x6fa8ae);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6fa8af:{NFSU2_TR(0x6fa8af);
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
B6fa8b0:L6fa8b0:{c.instructions+=3;NFSU2_TR(0x6fa8b0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B6fa8b3:{NFSU2_TR(0x6fa8b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa8b4:{NFSU2_TR(0x6fa8b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa8b9ull));
TAIL_STATIC(0x75ded8u,75d);
}
B6fa8b9:L6fa8b9:{c.instructions+=4;NFSU2_TR(0x6fa8b9);
__builtin_memmove((R+24),(R+0),4);
}
B6fa8bb:{NFSU2_TR(0x6fa8bb);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B6fa8be:{NFSU2_TR(0x6fa8be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa8bf:{NFSU2_TR(0x6fa8bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa8c4ull));
TAIL_STATIC(0x75ded8u,75d);
}
B6fa8c4:L6fa8c4:{c.instructions+=4;NFSU2_TR(0x6fa8c4);
u8 U[6];
w1(R+512,u8((r4(R+24))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(R+24),r4(R+0)));
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fa8c6:{NFSU2_TR(0x6fa8c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fa8c7:{NFSU2_TR(0x6fa8c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fa8c8:{NFSU2_TR(0x6fa8c8);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa8a9u);}goto L6fa8a9;}}
}
B6fa8ca:L6fa8ca:{c.instructions+=5;NFSU2_TR(0x6fa8ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fa8cb:{NFSU2_TR(0x6fa8cb);
__builtin_memmove((R+0),(R+24),4);
}
B6fa8cd:{NFSU2_TR(0x6fa8cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fa8ce:{NFSU2_TR(0x6fa8ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fa8cf:{NFSU2_TR(0x6fa8cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fa8d0:L6fa8d0:{c.instructions+=11;NFSU2_TR(0x6fa8d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa8d1:{NFSU2_TR(0x6fa8d1);
__builtin_memmove((R+20),(R+16),4);
}
B6fa8d3:{NFSU2_TR(0x6fa8d3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa8d4:{NFSU2_TR(0x6fa8d4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fa8d6:{NFSU2_TR(0x6fa8d6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa8d7:{NFSU2_TR(0x6fa8d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6fa8da:{NFSU2_TR(0x6fa8da);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+1),(U+0),1);
}
B6fa8dc:{NFSU2_TR(0x6fa8dc);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6fa8de:{NFSU2_TR(0x6fa8de);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6fa8e1:{NFSU2_TR(0x6fa8e1);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xc0fbull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc0fbull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fa8e6:{NFSU2_TR(0x6fa8e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fa8eb;}}
}
B6fa8e8:L6fa8e8:{c.instructions+=2;NFSU2_TR(0x6fa8e8);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+12),u32(0x1ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fa8e9:{NFSU2_TR(0x6fa8e9);
{goto L6fa935;}
}
B6fa8eb:L6fa8eb:{c.instructions+=3;NFSU2_TR(0x6fa8eb);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa8ed:{NFSU2_TR(0x6fa8ed);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa8ee:{NFSU2_TR(0x6fa8ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa8f3ull));
TAIL_STATIC(0x6fe486u,6fe);
}
B6fa8f3:L6fa8f3:{c.instructions+=4;NFSU2_TR(0x6fa8f3);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x42494746ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x42494746ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x42494746ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fa8f8:{NFSU2_TR(0x6fa8f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fa8f9:{NFSU2_TR(0x6fa8f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fa8fa:{NFSU2_TR(0x6fa8fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fa901;}}
}
B6fa8fc:L6fa8fc:{c.instructions+=3;NFSU2_TR(0x6fa8fc);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa8fe:{NFSU2_TR(0x6fa8fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fa8ff:{NFSU2_TR(0x6fa8ff);
{goto L6fa935;}
}
B6fa901:L6fa901:{c.instructions+=4;NFSU2_TR(0x6fa901);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa902:{NFSU2_TR(0x6fa902);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa904:{NFSU2_TR(0x6fa904);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa905:{NFSU2_TR(0x6fa905);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa90aull));
TAIL_STATIC(0x6fe486u,6fe);
}
B6fa90a:L6fa90a:{c.instructions+=6;NFSU2_TR(0x6fa90a);
w4(R+24,u32(0xffffff00ull));
}
B6fa90f:{NFSU2_TR(0x6fa90f);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+24))));
}
B6fa911:{NFSU2_TR(0x6fa911);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x42494700ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x42494700ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x42494700ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fa916:{NFSU2_TR(0x6fa916);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fa917:{NFSU2_TR(0x6fa917);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fa918:{NFSU2_TR(0x6fa918);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fa91e;}}
}
B6fa91a:L6fa91a:{c.instructions+=2;NFSU2_TR(0x6fa91a);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa91c:{NFSU2_TR(0x6fa91c);
{goto L6fa933;}
}
B6fa91e:L6fa91e:{c.instructions+=3;NFSU2_TR(0x6fa91e);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa920:{NFSU2_TR(0x6fa920);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa921:{NFSU2_TR(0x6fa921);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa926ull));
TAIL_STATIC(0x6fe486u,6fe);
}
B6fa926:L6fa926:{c.instructions+=5;NFSU2_TR(0x6fa926);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+24))));
}
B6fa928:{NFSU2_TR(0x6fa928);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x53687000ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x53687000ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x53687000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fa92d:{NFSU2_TR(0x6fa92d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fa92e:{NFSU2_TR(0x6fa92e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fa92f:{NFSU2_TR(0x6fa92f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fa934;}}
}
B6fa931:L6fa931:{c.instructions+=1;NFSU2_TR(0x6fa931);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa933:L6fa933:{c.instructions+=1;NFSU2_TR(0x6fa933);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fa934:L6fa934:{c.instructions+=1;NFSU2_TR(0x6fa934);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fa935:L6fa935:{c.instructions+=5;NFSU2_TR(0x6fa935);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fa936:{NFSU2_TR(0x6fa936);
__builtin_memmove((R+0),(R+12),4);
}
B6fa938:{NFSU2_TR(0x6fa938);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fa939:{NFSU2_TR(0x6fa939);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fa93a:{NFSU2_TR(0x6fa93a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fa93b:L6fa93b:{c.instructions+=8;NFSU2_TR(0x6fa93b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa93c:{NFSU2_TR(0x6fa93c);
__builtin_memmove((R+20),(R+16),4);
}
B6fa93e:{NFSU2_TR(0x6fa93e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa93f:{NFSU2_TR(0x6fa93f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6fa942:{NFSU2_TR(0x6fa942);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa943:{NFSU2_TR(0x6fa943);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa944:{NFSU2_TR(0x6fa944);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6fa946:{NFSU2_TR(0x6fa946);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa94bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa8d0u);}goto L6fa8d0;}
}
B6fa94b:L6fa94b:{c.instructions+=3;NFSU2_TR(0x6fa94b);
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
B6fa94e:{NFSU2_TR(0x6fa94e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fa94f:{NFSU2_TR(0x6fa94f);
if(r1(R+518)){{goto L6fa967;}}
}
B6fa951:L6fa951:{c.instructions+=1;NFSU2_TR(0x6fa951);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6fa974;}}
}
B6fa953:L6fa953:{c.instructions+=2;NFSU2_TR(0x6fa953);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B6fa956:{NFSU2_TR(0x6fa956);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6fa974;}}
}
B6fa958:L6fa958:{c.instructions+=4;NFSU2_TR(0x6fa958);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B6fa95b:{NFSU2_TR(0x6fa95b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa95d:{NFSU2_TR(0x6fa95d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa95e:{NFSU2_TR(0x6fa95e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa963ull));
TAIL_STATIC(0x6fe486u,6fe);
}
B6fa963:L6fa963:{c.instructions+=3;NFSU2_TR(0x6fa963);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fa964:{NFSU2_TR(0x6fa964);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fa965:{NFSU2_TR(0x6fa965);
{goto L6fa972;}
}
B6fa967:L6fa967:{c.instructions+=4;NFSU2_TR(0x6fa967);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fa969:{NFSU2_TR(0x6fa969);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+1),(U+4),1);
}
B6fa96c:{NFSU2_TR(0x6fa96c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6fa96f:{NFSU2_TR(0x6fa96f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fa972:L6fa972:{c.instructions+=1;NFSU2_TR(0x6fa972);
__builtin_memmove((R+28),(R+0),4);
}
B6fa974:L6fa974:{c.instructions+=5;NFSU2_TR(0x6fa974);
__builtin_memmove((R+0),(R+28),4);
}
B6fa976:{NFSU2_TR(0x6fa976);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fa977:{NFSU2_TR(0x6fa977);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fa978:{NFSU2_TR(0x6fa978);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fa979:{NFSU2_TR(0x6fa979);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fa97a:L6fa97a:{c.instructions+=8;NFSU2_TR(0x6fa97a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa97b:{NFSU2_TR(0x6fa97b);
__builtin_memmove((R+20),(R+16),4);
}
B6fa97d:{NFSU2_TR(0x6fa97d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa97e:{NFSU2_TR(0x6fa97e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6fa982:{NFSU2_TR(0x6fa982);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa983:{NFSU2_TR(0x6fa983);
__builtin_memmove((R+24),(R+0),4);
}
B6fa985:{NFSU2_TR(0x6fa985);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa986:{NFSU2_TR(0x6fa986);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fa98bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa93bu);}goto L6fa93b;}
}
B6fa98b:L6fa98b:{c.instructions+=5;NFSU2_TR(0x6fa98b);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffff8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6fa98f:{NFSU2_TR(0x6fa98f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fa990:{NFSU2_TR(0x6fa990);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6fa992:{NFSU2_TR(0x6fa992);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x41ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B6fa995:{NFSU2_TR(0x6fa995);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6fa99c;}}
}
B6fa997:L6fa997:{c.instructions+=2;NFSU2_TR(0x6fa997);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x5aull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x5aull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6fa99a:{NFSU2_TR(0x6fa99a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6fa9a6;}}
}
B6fa99c:L6fa99c:{c.instructions+=2;NFSU2_TR(0x6fa99c);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+512,u8((r1(U+3))<(u8(0x61ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x61ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6fa99f:{NFSU2_TR(0x6fa99f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6faa0b;}}
}
B6fa9a1:L6fa9a1:{c.instructions+=2;NFSU2_TR(0x6fa9a1);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+512,u8((r1(U+3))<(u8(0x7aull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x7aull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6fa9a4:{NFSU2_TR(0x6fa9a4);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6faa0b;}}
}
B6fa9a6:L6fa9a6:{c.instructions+=3;NFSU2_TR(0x6fa9a6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6fa9a9:{NFSU2_TR(0x6fa9a9);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+512,u8((r1(U+3))<(u8(0x30ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x30ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6fa9ac:{NFSU2_TR(0x6fa9ac);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6faa0b;}}
}
B6fa9ae:L6fa9ae:{c.instructions+=2;NFSU2_TR(0x6fa9ae);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+512,u8((r1(U+3))<(u8(0x39ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x39ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6fa9b1:{NFSU2_TR(0x6fa9b1);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6faa0b;}}
}
B6fa9b3:L6fa9b3:{c.instructions+=4;NFSU2_TR(0x6fa9b3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fa9b4:{NFSU2_TR(0x6fa9b4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B6fa9b7:{NFSU2_TR(0x6fa9b7);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
w1(R+512,u8((r1(U+3))<(u8(0x30ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x30ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6fa9ba:{NFSU2_TR(0x6fa9ba);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6faa0a;}}
}
B6fa9bc:L6fa9bc:{c.instructions+=2;NFSU2_TR(0x6fa9bc);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
w1(R+512,u8((r1(U+3))<(u8(0x39ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x39ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6fa9bf:{NFSU2_TR(0x6fa9bf);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6faa0a;}}
}
B6fa9c1:L6fa9c1:{c.instructions+=3;NFSU2_TR(0x6fa9c1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B6fa9c4:{NFSU2_TR(0x6fa9c4);
u8 U[5];
__builtin_memmove((U+3),(R+8),1);
w1(R+512,u8((r1(U+3))<(u8(0x30ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x30ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6fa9c7:{NFSU2_TR(0x6fa9c7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6faa0a;}}
}
B6fa9c9:L6fa9c9:{c.instructions+=2;NFSU2_TR(0x6fa9c9);
u8 U[5];
__builtin_memmove((U+3),(R+8),1);
w1(R+512,u8((r1(U+3))<(u8(0x39ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x39ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6fa9cc:{NFSU2_TR(0x6fa9cc);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6faa0a;}}
}
B6fa9ce:L6fa9ce:{c.instructions+=3;NFSU2_TR(0x6fa9ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fa9d0:{NFSU2_TR(0x6fa9d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fa9d7:{NFSU2_TR(0x6fa9d7);
if(r1(R+518)){{goto L6fa9f4;}}
}
B6fa9d9:L6fa9d9:{c.instructions+=8;NFSU2_TR(0x6fa9d9);
w4(R+4,u32(s32(s8(r1(R+4)))));
}
B6fa9dc:{NFSU2_TR(0x6fa9dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6fa9df:{NFSU2_TR(0x6fa9df);
w4(R+24,u32(s32(s8(r1(R+12)))));
}
B6fa9e2:{NFSU2_TR(0x6fa9e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6fa9e5:{NFSU2_TR(0x6fa9e5);
w4(R+8,u32(s32(s8(r1(R+8)))));
}
B6fa9e8:{NFSU2_TR(0x6fa9e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6fa9eb:{NFSU2_TR(0x6fa9eb);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffeb30ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6fa9f2:{NFSU2_TR(0x6fa9f2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6fa9f4:L6fa9f4:{c.instructions+=3;NFSU2_TR(0x6fa9f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6fa9f7:{NFSU2_TR(0x6fa9f7);
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
B6fa9f9:{NFSU2_TR(0x6fa9f9);
if(r1(R+518)){{goto L6faa0a;}}
}
B6fa9fb:L6fa9fb:{c.instructions+=4;NFSU2_TR(0x6fa9fb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6fa9fe:{NFSU2_TR(0x6fa9fe);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6faa00:{NFSU2_TR(0x6faa00);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6faa01:{NFSU2_TR(0x6faa01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6faa06ull));
TAIL_STATIC(0x6fe486u,6fe);
}
B6faa06:L6faa06:{c.instructions+=3;NFSU2_TR(0x6faa06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6faa07:{NFSU2_TR(0x6faa07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6faa08:{NFSU2_TR(0x6faa08);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6faa0a:L6faa0a:{c.instructions+=1;NFSU2_TR(0x6faa0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6faa0b:L6faa0b:{c.instructions+=4;NFSU2_TR(0x6faa0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6faa0e:{NFSU2_TR(0x6faa0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6faa0f:{NFSU2_TR(0x6faa0f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6faa10:{NFSU2_TR(0x6faa10);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6faa11:L6faa11:{c.instructions+=9;NFSU2_TR(0x6faa11);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6faa12:{NFSU2_TR(0x6faa12);
__builtin_memmove((R+20),(R+16),4);
}
B6faa14:{NFSU2_TR(0x6faa14);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6faa15:{NFSU2_TR(0x6faa15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6faa18:{NFSU2_TR(0x6faa18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6faa1c:{NFSU2_TR(0x6faa1c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6faa1d:{NFSU2_TR(0x6faa1d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6faa1f:{NFSU2_TR(0x6faa1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+28),(U+0),4);
}
B6faa22:{NFSU2_TR(0x6faa22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6faa27ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa97au);}goto L6fa97a;}
}
B6faa27:L6faa27:{c.instructions+=5;NFSU2_TR(0x6faa27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6faa2a:{NFSU2_TR(0x6faa2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6faa2b:{NFSU2_TR(0x6faa2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6faa2c:{NFSU2_TR(0x6faa2c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6faa2d:{NFSU2_TR(0x6faa2d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6faa2e:L6faa2e:{c.instructions+=13;NFSU2_TR(0x6faa2e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6faa2f:{NFSU2_TR(0x6faa2f);
__builtin_memmove((R+20),(R+16),4);
}
B6faa31:{NFSU2_TR(0x6faa31);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6faa32:{NFSU2_TR(0x6faa32);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6faa33:{NFSU2_TR(0x6faa33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6faa37:{NFSU2_TR(0x6faa37);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6faa38:{NFSU2_TR(0x6faa38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6faa3b:{NFSU2_TR(0x6faa3b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6faa3c:{NFSU2_TR(0x6faa3c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6faa3d:{NFSU2_TR(0x6faa3d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6faa3f:{NFSU2_TR(0x6faa3f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6faa41:{NFSU2_TR(0x6faa41);
__builtin_memmove((R+0),(R+12),4);
}
B6faa43:{NFSU2_TR(0x6faa43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6faa48ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa97au);}goto L6fa97a;}
}
B6faa48:L6faa48:{c.instructions+=7;NFSU2_TR(0x6faa48);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6faa4a:{NFSU2_TR(0x6faa4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6faa4b:{NFSU2_TR(0x6faa4b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6faa4c:{NFSU2_TR(0x6faa4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6faa4f:{NFSU2_TR(0x6faa4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6faa52:{NFSU2_TR(0x6faa52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6faa55:{NFSU2_TR(0x6faa55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6faa5aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa93bu);}goto L6fa93b;}
}
B6faa5a:L6faa5a:{c.instructions+=6;NFSU2_TR(0x6faa5a);
__builtin_memmove((R+4),(R+12),4);
}
B6faa5c:{NFSU2_TR(0x6faa5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B6faa5f:{NFSU2_TR(0x6faa5f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6faa60:{NFSU2_TR(0x6faa60);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B6faa62:{NFSU2_TR(0x6faa62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6faa65:{NFSU2_TR(0x6faa65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6faa6aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa8d0u);}goto L6fa8d0;}
}
B6faa6a:L6faa6a:{c.instructions+=3;NFSU2_TR(0x6faa6a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6faa6d:{NFSU2_TR(0x6faa6d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6faa6e:{NFSU2_TR(0x6faa6e);
if(r1(R+518)){{goto L6faa8a;}}
}
B6faa70:L6faa70:{c.instructions+=3;NFSU2_TR(0x6faa70);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6faa71:{NFSU2_TR(0x6faa71);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6faa72:{NFSU2_TR(0x6faa72);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6faa93;}}
}
B6faa74:L6faa74:{c.instructions+=7;NFSU2_TR(0x6faa74);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(s32(s8(r1(U+4)))));
}
B6faa78:{NFSU2_TR(0x6faa78);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6faa7a:{NFSU2_TR(0x6faa7a);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x30ull))));
}
B6faa7d:{NFSU2_TR(0x6faa7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6faa7e:{NFSU2_TR(0x6faa7e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6faa80:{NFSU2_TR(0x6faa80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6faa83:{NFSU2_TR(0x6faa83);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6faa93;}}
}
B6faa85:L6faa85:{c.instructions+=2;NFSU2_TR(0x6faa85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6faa88:{NFSU2_TR(0x6faa88);
{goto L6faa93;}
}
B6faa8a:L6faa8a:{c.instructions+=4;NFSU2_TR(0x6faa8a);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6faa8c:{NFSU2_TR(0x6faa8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6faa8d:{NFSU2_TR(0x6faa8d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6faa90:{NFSU2_TR(0x6faa90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6faa93:L6faa93:{c.instructions+=2;NFSU2_TR(0x6faa93);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6faa97:{NFSU2_TR(0x6faa97);
if(r1(R+518)){{goto L6faaec;}}
}
B6faa99:L6faa99:{c.instructions+=2;NFSU2_TR(0x6faa99);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6faa9c:{NFSU2_TR(0x6faa9c);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6faad1;}}
}
B6faa9e:L6faa9e:{c.instructions+=3;NFSU2_TR(0x6faa9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6faaa1:{NFSU2_TR(0x6faaa1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+28)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6faaa3:{NFSU2_TR(0x6faaa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6faaa6:L6faaa6:{c.instructions+=5;NFSU2_TR(0x6faaa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6faaa9:{NFSU2_TR(0x6faaa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B6faaac:{NFSU2_TR(0x6faaac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6faaaf:{NFSU2_TR(0x6faaaf);
__builtin_memmove((R+4),(R+12),4);
}
B6faab1:{NFSU2_TR(0x6faab1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6faab6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa8a0u);}goto L6fa8a0;}
}
B6faab6:L6faab6:{c.instructions+=2;NFSU2_TR(0x6faab6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6faab8:{NFSU2_TR(0x6faab8);
if(r1(R+518)){{goto L6fab1e;}}
}
B6faaba:L6faaba:{c.instructions+=2;NFSU2_TR(0x6faaba);
__builtin_memmove((R+0),(R+12),4);
}
B6faabc:{NFSU2_TR(0x6faabc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6faabf:L6faabf:{c.instructions+=4;NFSU2_TR(0x6faabf);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6faac1:{NFSU2_TR(0x6faac1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6faac2:{NFSU2_TR(0x6faac2);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6faac4:{NFSU2_TR(0x6faac4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6faabfu);}goto L6faabf;}}
}
B6faac6:L6faac6:{c.instructions+=4;NFSU2_TR(0x6faac6);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B6faac8:{NFSU2_TR(0x6faac8);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B6faacc:{NFSU2_TR(0x6faacc);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+14)));
w4(U+18,u32(u32(r4(R+24))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6faacf:{NFSU2_TR(0x6faacf);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6faaa6u);}goto L6faaa6;}}
}
B6faad1:L6faad1:{c.instructions+=3;NFSU2_TR(0x6faad1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6faad4:{NFSU2_TR(0x6faad4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6faad6:{NFSU2_TR(0x6faad6);
if(r1(R+518)){{goto L6faadb;}}
}
B6faad8:L6faad8:{c.instructions+=1;NFSU2_TR(0x6faad8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6faadb:L6faadb:{c.instructions+=3;NFSU2_TR(0x6faadb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6faade:{NFSU2_TR(0x6faade);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6faae0:{NFSU2_TR(0x6faae0);
if(r1(R+518)){{goto L6faae5;}}
}
B6faae2:L6faae2:{c.instructions+=1;NFSU2_TR(0x6faae2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6faae5:L6faae5:{c.instructions+=1;NFSU2_TR(0x6faae5);
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
B6faae7:L6faae7:{c.instructions+=5;NFSU2_TR(0x6faae7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6faae8:{NFSU2_TR(0x6faae8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6faae9:{NFSU2_TR(0x6faae9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6faaea:{NFSU2_TR(0x6faaea);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6faaeb:{NFSU2_TR(0x6faaeb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6faaec:L6faaec:{c.instructions+=2;NFSU2_TR(0x6faaec);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6faaef:{NFSU2_TR(0x6faaef);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6faad1u);}goto L6faad1;}}
}
B6faaf1:L6faaf1:{c.instructions+=2;NFSU2_TR(0x6faaf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6faaf4:{NFSU2_TR(0x6faaf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6faaf7:L6faaf7:{c.instructions+=4;NFSU2_TR(0x6faaf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6faafa:{NFSU2_TR(0x6faafa);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6faafd:{NFSU2_TR(0x6faafd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B6fab00:{NFSU2_TR(0x6fab00);
if(r1(R+518)){{goto L6fab1e;}}
}
B6fab02:L6fab02:{c.instructions+=2;NFSU2_TR(0x6fab02);
__builtin_memmove((R+0),(R+12),4);
}
B6fab04:{NFSU2_TR(0x6fab04);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fab07:L6fab07:{c.instructions+=4;NFSU2_TR(0x6fab07);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6fab09:{NFSU2_TR(0x6fab09);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fab0a:{NFSU2_TR(0x6fab0a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6fab0c:{NFSU2_TR(0x6fab0c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fab07u);}goto L6fab07;}}
}
B6fab0e:L6fab0e:{c.instructions+=5;NFSU2_TR(0x6fab0e);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B6fab10:{NFSU2_TR(0x6fab10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6fab13:{NFSU2_TR(0x6fab13);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B6fab17:{NFSU2_TR(0x6fab17);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6fab1a:{NFSU2_TR(0x6fab1a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6faaf7u);}goto L6faaf7;}}
}
B6fab1c:L6fab1c:{c.instructions+=1;NFSU2_TR(0x6fab1c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6faad1u);}goto L6faad1;}
}
B6fab1e:L6fab1e:{c.instructions+=2;NFSU2_TR(0x6fab1e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6fab22:{NFSU2_TR(0x6fab22);
if(r1(R+518)){{goto L6fab32;}}
}
B6fab24:L6fab24:{c.instructions+=3;NFSU2_TR(0x6fab24);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fab25:{NFSU2_TR(0x6fab25);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fab26:{NFSU2_TR(0x6fab26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fab2bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa86bu);}goto L6fa86b;}
}
B6fab2b:L6fab2b:{c.instructions+=4;NFSU2_TR(0x6fab2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fab2c:{NFSU2_TR(0x6fab2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fab2d:{NFSU2_TR(0x6fab2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fab30:{NFSU2_TR(0x6fab30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6fab32:L6fab32:{c.instructions+=2;NFSU2_TR(0x6fab32);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
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
B6fab36:{NFSU2_TR(0x6fab36);
if(r1(R+518)){{goto L6fab4a;}}
}
B6fab38:L6fab38:{c.instructions+=4;NFSU2_TR(0x6fab38);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fab3b:{NFSU2_TR(0x6fab3b);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B6fab3d:{NFSU2_TR(0x6fab3d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fab3e:{NFSU2_TR(0x6fab3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fab43ull));
TAIL_STATIC(0x6fe486u,6fe);
}
B6fab43:L6fab43:{c.instructions+=4;NFSU2_TR(0x6fab43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fab44:{NFSU2_TR(0x6fab44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fab45:{NFSU2_TR(0x6fab45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fab48:{NFSU2_TR(0x6fab48);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6fab4a:L6fab4a:{c.instructions+=2;NFSU2_TR(0x6fab4a);
__builtin_memmove((R+0),(R+12),4);
}
B6fab4c:{NFSU2_TR(0x6fab4c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6faae7u);}goto L6faae7;}
}
B6fab4e:L6fab4e:{c.instructions+=7;NFSU2_TR(0x6fab4e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fab4f:{NFSU2_TR(0x6fab4f);
__builtin_memmove((R+20),(R+16),4);
}
B6fab51:{NFSU2_TR(0x6fab51);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fab52:{NFSU2_TR(0x6fab52);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fab54:{NFSU2_TR(0x6fab54);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
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
B6fab57:{NFSU2_TR(0x6fab57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fab5a:{NFSU2_TR(0x6fab5a);
if(r1(R+518)){{goto L6fab70;}}
}
B6fab5c:L6fab5c:{c.instructions+=7;NFSU2_TR(0x6fab5c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fab5d:{NFSU2_TR(0x6fab5d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fab60:{NFSU2_TR(0x6fab60);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fab61:{NFSU2_TR(0x6fab61);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fab62:{NFSU2_TR(0x6fab62);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fab65:{NFSU2_TR(0x6fab65);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fab68:{NFSU2_TR(0x6fab68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fab6dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6faa2eu);}goto L6faa2e;}
}
B6fab6d:L6fab6d:{c.instructions+=1;NFSU2_TR(0x6fab6d);
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
B6fab70:L6fab70:{c.instructions+=3;NFSU2_TR(0x6fab70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fab73:{NFSU2_TR(0x6fab73);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6fab74:{NFSU2_TR(0x6fab74);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fab75:L6fab75:{c.instructions+=12;NFSU2_TR(0x6fab75);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fab76:{NFSU2_TR(0x6fab76);
__builtin_memmove((R+20),(R+16),4);
}
B6fab78:{NFSU2_TR(0x6fab78);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fab79:{NFSU2_TR(0x6fab79);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fab7a:{NFSU2_TR(0x6fab7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6fab7d:{NFSU2_TR(0x6fab7d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fab7f:{NFSU2_TR(0x6fab7f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fab82:{NFSU2_TR(0x6fab82);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fab83:{NFSU2_TR(0x6fab83);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fab86:{NFSU2_TR(0x6fab86);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fab88:{NFSU2_TR(0x6fab88);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fab89:{NFSU2_TR(0x6fab89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fab8eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6faa2eu);}goto L6faa2e;}
}
B6fab8e:L6fab8e:{c.instructions+=3;NFSU2_TR(0x6fab8e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6fab91:{NFSU2_TR(0x6fab91);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fab93:{NFSU2_TR(0x6fab93);
if(r1(R+518)){{goto L6fab9c;}}
}
B6fab95:L6fab95:{c.instructions+=3;NFSU2_TR(0x6fab95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fab98:{NFSU2_TR(0x6fab98);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+24)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+24)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fab9a:{NFSU2_TR(0x6fab9a);
{goto L6fab9e;}
}
B6fab9c:L6fab9c:{c.instructions+=1;NFSU2_TR(0x6fab9c);
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
B6fab9e:L6fab9e:{c.instructions+=3;NFSU2_TR(0x6fab9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fab9f:{NFSU2_TR(0x6fab9f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6faba0:{NFSU2_TR(0x6faba0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6faba1:L6faba1:{c.instructions+=9;NFSU2_TR(0x6faba1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6faba2:{NFSU2_TR(0x6faba2);
__builtin_memmove((R+20),(R+16),4);
}
B6faba4:{NFSU2_TR(0x6faba4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6faba5:{NFSU2_TR(0x6faba5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6faba6:{NFSU2_TR(0x6faba6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6faba9:{NFSU2_TR(0x6faba9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6fabac:{NFSU2_TR(0x6fabac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fabad:{NFSU2_TR(0x6fabad);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6fabaf:{NFSU2_TR(0x6fabaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fabb4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fab4eu);}goto L6fab4e;}
}
B6fabb4:L6fabb4:{c.instructions+=4;NFSU2_TR(0x6fabb4);
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
B6fabb6:{NFSU2_TR(0x6fabb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fabb7:{NFSU2_TR(0x6fabb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fabb8:{NFSU2_TR(0x6fabb8);
if(r1(R+518)){{goto L6fabbd;}}
}
B6fabba:L6fabba:{c.instructions+=1;NFSU2_TR(0x6fabba);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6fabbd:L6fabbd:{c.instructions+=5;NFSU2_TR(0x6fabbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fabbe:{NFSU2_TR(0x6fabbe);
__builtin_memmove((R+0),(R+24),4);
}
B6fabc0:{NFSU2_TR(0x6fabc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fabc1:{NFSU2_TR(0x6fabc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fabc2:{NFSU2_TR(0x6fabc2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fabc3:L6fabc3:{c.instructions+=8;NFSU2_TR(0x6fabc3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fabc4:{NFSU2_TR(0x6fabc4);
__builtin_memmove((R+20),(R+16),4);
}
B6fabc6:{NFSU2_TR(0x6fabc6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fabc7:{NFSU2_TR(0x6fabc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6fabca:{NFSU2_TR(0x6fabca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fabcb:{NFSU2_TR(0x6fabcb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fabcc:{NFSU2_TR(0x6fabcc);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6fabce:{NFSU2_TR(0x6fabce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fabd3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fa8d0u);}goto L6fa8d0;}
}
B6fabd3:L6fabd3:{c.instructions+=3;NFSU2_TR(0x6fabd3);
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
B6fabd6:{NFSU2_TR(0x6fabd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fabd7:{NFSU2_TR(0x6fabd7);
if(r1(R+518)){{goto L6fabef;}}
}
B6fabd9:L6fabd9:{c.instructions+=1;NFSU2_TR(0x6fabd9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6fabf9;}}
}
B6fabdb:L6fabdb:{c.instructions+=2;NFSU2_TR(0x6fabdb);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B6fabde:{NFSU2_TR(0x6fabde);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6fabf9;}}
}
B6fabe0:L6fabe0:{c.instructions+=4;NFSU2_TR(0x6fabe0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B6fabe3:{NFSU2_TR(0x6fabe3);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fabe5:{NFSU2_TR(0x6fabe5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fabe6:{NFSU2_TR(0x6fabe6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fabebull));
TAIL_STATIC(0x6fe486u,6fe);
}
B6fabeb:L6fabeb:{c.instructions+=3;NFSU2_TR(0x6fabeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fabec:{NFSU2_TR(0x6fabec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fabed:{NFSU2_TR(0x6fabed);
{goto L6fabf7;}
}
B6fabef:L6fabef:{c.instructions+=3;NFSU2_TR(0x6fabef);
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
B6fabf1:{NFSU2_TR(0x6fabf1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+1),(U+4),1);
}
B6fabf4:{NFSU2_TR(0x6fabf4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6fabf7:L6fabf7:{c.instructions+=1;NFSU2_TR(0x6fabf7);
__builtin_memmove((R+28),(R+0),4);
}
B6fabf9:L6fabf9:{c.instructions+=5;NFSU2_TR(0x6fabf9);
__builtin_memmove((R+0),(R+28),4);
}
B6fabfb:{NFSU2_TR(0x6fabfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fabfc:{NFSU2_TR(0x6fabfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fabfd:{NFSU2_TR(0x6fabfd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fabfe:{NFSU2_TR(0x6fabfe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fabff:L6fabff:{c.instructions+=8;NFSU2_TR(0x6fabff);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fac00:{NFSU2_TR(0x6fac00);
__builtin_memmove((R+20),(R+16),4);
}
B6fac02:{NFSU2_TR(0x6fac02);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fac04:{NFSU2_TR(0x6fac04);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fac06:{NFSU2_TR(0x6fac06);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fac09:{NFSU2_TR(0x6fac09);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fac0b:{NFSU2_TR(0x6fac0b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fac0e:{NFSU2_TR(0x6fac0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fac13ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6faa2eu);}goto L6faa2e;}
}
B6fac13:L6fac13:{c.instructions+=3;NFSU2_TR(0x6fac13);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6fac16:{NFSU2_TR(0x6fac16);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fac18:{NFSU2_TR(0x6fac18);
if(r1(R+518)){{goto L6fac2e;}}
}
B6fac1a:L6fac1a:{c.instructions+=2;NFSU2_TR(0x6fac1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6fac1d:{NFSU2_TR(0x6fac1d);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B6fac1f:L6fac1f:{c.instructions+=5;NFSU2_TR(0x6fac1f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6fac21:{NFSU2_TR(0x6fac21);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B6fac24:{NFSU2_TR(0x6fac24);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fac25:{NFSU2_TR(0x6fac25);
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
B6fac27:{NFSU2_TR(0x6fac27);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fac1fu);}goto L6fac1f;}}
}
B6fac29:L6fac29:{c.instructions+=3;NFSU2_TR(0x6fac29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fac2c:{NFSU2_TR(0x6fac2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fac2d:{NFSU2_TR(0x6fac2d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fac2e:L6fac2e:{c.instructions+=5;NFSU2_TR(0x6fac2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fac31:{NFSU2_TR(0x6fac31);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B6fac34:{NFSU2_TR(0x6fac34);
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
B6fac36:{NFSU2_TR(0x6fac36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fac37:{NFSU2_TR(0x6fac37);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fac38:L6fac38:{c.instructions+=4;NFSU2_TR(0x6fac38);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fac39:{NFSU2_TR(0x6fac39);
__builtin_memmove((R+20),(R+16),4);
}
B6fac3b:{NFSU2_TR(0x6fac3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fac3c:{NFSU2_TR(0x6fac3c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6faa2eu);}goto L6faa2e;}
}
B6fac41:L6fac41:{c.instructions+=7;NFSU2_TR(0x6fac41);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fac42:{NFSU2_TR(0x6fac42);
__builtin_memmove((R+20),(R+16),4);
}
B6fac44:{NFSU2_TR(0x6fac44);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fac45:{NFSU2_TR(0x6fac45);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fac47:{NFSU2_TR(0x6fac47);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
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
B6fac4a:{NFSU2_TR(0x6fac4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fac4d:{NFSU2_TR(0x6fac4d);
if(r1(R+518)){{goto L6fac63;}}
}
B6fac4f:L6fac4f:{c.instructions+=7;NFSU2_TR(0x6fac4f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fac50:{NFSU2_TR(0x6fac50);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fac53:{NFSU2_TR(0x6fac53);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fac54:{NFSU2_TR(0x6fac54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fac55:{NFSU2_TR(0x6fac55);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fac58:{NFSU2_TR(0x6fac58);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fac5b:{NFSU2_TR(0x6fac5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fac60ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6faa2eu);}goto L6faa2e;}
}
B6fac60:L6fac60:{c.instructions+=1;NFSU2_TR(0x6fac60);
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
B6fac63:L6fac63:{c.instructions+=3;NFSU2_TR(0x6fac63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fac66:{NFSU2_TR(0x6fac66);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6fac67:{NFSU2_TR(0x6fac67);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fac68:L6fac68:{c.instructions+=9;NFSU2_TR(0x6fac68);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fac69:{NFSU2_TR(0x6fac69);
__builtin_memmove((R+20),(R+16),4);
}
B6fac6b:{NFSU2_TR(0x6fac6b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fac6c:{NFSU2_TR(0x6fac6c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fac6d:{NFSU2_TR(0x6fac6d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fac70:{NFSU2_TR(0x6fac70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6fac73:{NFSU2_TR(0x6fac73);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fac74:{NFSU2_TR(0x6fac74);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6fac76:{NFSU2_TR(0x6fac76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fac7bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fac41u);}goto L6fac41;}
}
B6fac7b:L6fac7b:{c.instructions+=4;NFSU2_TR(0x6fac7b);
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
B6fac7d:{NFSU2_TR(0x6fac7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fac7e:{NFSU2_TR(0x6fac7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fac7f:{NFSU2_TR(0x6fac7f);
if(r1(R+518)){{goto L6fac84;}}
}
B6fac81:L6fac81:{c.instructions+=1;NFSU2_TR(0x6fac81);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6fac84:L6fac84:{c.instructions+=5;NFSU2_TR(0x6fac84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fac85:{NFSU2_TR(0x6fac85);
__builtin_memmove((R+0),(R+24),4);
}
B6fac87:{NFSU2_TR(0x6fac87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fac88:{NFSU2_TR(0x6fac88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fac89:{NFSU2_TR(0x6fac89);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fac8a:L6fac8a:{c.instructions+=5;NFSU2_TR(0x6fac8a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fac8b:{NFSU2_TR(0x6fac8b);
__builtin_memmove((R+20),(R+16),4);
}
B6fac8d:{NFSU2_TR(0x6fac8d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fac8e:{NFSU2_TR(0x6fac8e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fac8f:{NFSU2_TR(0x6fac8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6fac92:L6fac92:{c.instructions+=3;NFSU2_TR(0x6fac92);
u8 U[4];
w4(U+0,u32(0x2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fac94:{NFSU2_TR(0x6fac94);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fac97:{NFSU2_TR(0x6fac97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fac9cull));
TAIL_STATIC(0x75cf10u,75c);
}
B6fac9c:L6fac9c:{c.instructions+=5;NFSU2_TR(0x6fac9c);
__builtin_memmove((R+24),(R+0),4);
}
B6fac9e:{NFSU2_TR(0x6fac9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6faca0:{NFSU2_TR(0x6faca0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6faca1:{NFSU2_TR(0x6faca1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6faca2:{NFSU2_TR(0x6faca2);
if(r1(R+518)){{goto L6faca7;}}
}
B6faca4:L6faca4:{c.instructions+=1;NFSU2_TR(0x6faca4);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B6faca7:L6faca7:{c.instructions+=3;NFSU2_TR(0x6faca7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6facaa:{NFSU2_TR(0x6facaa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6facad:{NFSU2_TR(0x6facad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6facb2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fac68u);}goto L6fac68;}
}
B6facb2:L6facb2:{c.instructions+=6;NFSU2_TR(0x6facb2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6facb4:{NFSU2_TR(0x6facb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6facb5:{NFSU2_TR(0x6facb5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6facb8:{NFSU2_TR(0x6facb8);
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
B6facba:{NFSU2_TR(0x6facba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6facbb:{NFSU2_TR(0x6facbb);
if(r1(R+518)){{goto L6facc6;}}
}
B6facbd:L6facbd:{c.instructions+=4;NFSU2_TR(0x6facbd);
u8 U[1];
w1(U+0,u8(0x2cull));
s1(u32(r4(R+24)),r1(U+0));
}
B6facc0:{NFSU2_TR(0x6facc0);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6facc1:{NFSU2_TR(0x6facc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6facc4:{NFSU2_TR(0x6facc4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fac92u);}goto L6fac92;}}
}
B6facc6:L6facc6:{c.instructions+=4;NFSU2_TR(0x6facc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6facc7:{NFSU2_TR(0x6facc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6facc8:{NFSU2_TR(0x6facc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6facc9:{NFSU2_TR(0x6facc9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6facca:L6facca:{c.instructions+=8;NFSU2_TR(0x6facca);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6faccb:{NFSU2_TR(0x6faccb);
__builtin_memmove((R+20),(R+16),4);
}
B6faccd:{NFSU2_TR(0x6faccd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6faccf:{NFSU2_TR(0x6faccf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6facd1:{NFSU2_TR(0x6facd1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6facd4:{NFSU2_TR(0x6facd4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6facd6:{NFSU2_TR(0x6facd6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6facd9:{NFSU2_TR(0x6facd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6facdeull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6faa2eu);}goto L6faa2e;}
}
B6facde:L6facde:{c.instructions+=3;NFSU2_TR(0x6facde);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6face1:{NFSU2_TR(0x6face1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6face3:{NFSU2_TR(0x6face3);
if(r1(R+518)){{goto L6facf9;}}
}
B6face5:L6face5:{c.instructions+=2;NFSU2_TR(0x6face5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6face8:{NFSU2_TR(0x6face8);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B6facea:L6facea:{c.instructions+=5;NFSU2_TR(0x6facea);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6facec:{NFSU2_TR(0x6facec);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B6facef:{NFSU2_TR(0x6facef);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6facf0:{NFSU2_TR(0x6facf0);
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
B6facf2:{NFSU2_TR(0x6facf2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6faceau);}goto L6facea;}}
}
B6facf4:L6facf4:{c.instructions+=3;NFSU2_TR(0x6facf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6facf7:{NFSU2_TR(0x6facf7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6facf8:{NFSU2_TR(0x6facf8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6facf9:L6facf9:{c.instructions+=5;NFSU2_TR(0x6facf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6facfc:{NFSU2_TR(0x6facfc);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B6facff:{NFSU2_TR(0x6facff);
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
B6fad01:{NFSU2_TR(0x6fad01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fad02:{NFSU2_TR(0x6fad02);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fad03:L6fad03:{c.instructions+=9;NFSU2_TR(0x6fad03);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fad04:{NFSU2_TR(0x6fad04);
__builtin_memmove((R+20),(R+16),4);
}
B6fad06:{NFSU2_TR(0x6fad06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x114ull))));
}
B6fad0c:{NFSU2_TR(0x6fad0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fad0f:{NFSU2_TR(0x6fad0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6fad13:{NFSU2_TR(0x6fad13);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6fad15:{NFSU2_TR(0x6fad15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x80000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fad1c:{NFSU2_TR(0x6fad1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fad23:{NFSU2_TR(0x6fad23);
if(r1(R+518)){{goto L6fad2e;}}
}
B6fad25:L6fad25:{c.instructions+=2;NFSU2_TR(0x6fad25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fad2c:{NFSU2_TR(0x6fad2c);
{goto L6fad35;}
}
B6fad2e:L6fad2e:{c.instructions+=1;NFSU2_TR(0x6fad2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0xc0000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fad35:L6fad35:{c.instructions+=6;NFSU2_TR(0x6fad35);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fad36:{NFSU2_TR(0x6fad36);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fad39:{NFSU2_TR(0x6fad39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x2ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6fad3d:{NFSU2_TR(0x6fad3d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fad3e:{NFSU2_TR(0x6fad3e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fad3f:{NFSU2_TR(0x6fad3f);
if(r1(R+518)){{goto L6fad50;}}
}
B6fad41:L6fad41:{c.instructions+=6;NFSU2_TR(0x6fad41);
__builtin_memmove((R+12),(R+0),4);
}
B6fad43:{NFSU2_TR(0x6fad43);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B6fad46:{NFSU2_TR(0x6fad46);
w4(R+12,u32(~u32(r4(R+12))));
}
B6fad48:{NFSU2_TR(0x6fad48);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x1ull))));
}
B6fad4b:{NFSU2_TR(0x6fad4b);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0x2ull))));
}
B6fad4e:{NFSU2_TR(0x6fad4e);
{goto L6fad61;}
}
B6fad50:L6fad50:{c.instructions+=7;NFSU2_TR(0x6fad50);
__builtin_memmove((R+8),(R+0),4);
}
B6fad52:{NFSU2_TR(0x6fad52);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0x4ull))));
}
B6fad55:{NFSU2_TR(0x6fad55);
w1(R+512,u8((r1(R+8))!=(u8(0x0ull))));
w1(R+8,u8(0-u32(r1(R+8))));
}
B6fad57:{NFSU2_TR(0x6fad57);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(R+8))));
w4(R+8,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6fad59:{NFSU2_TR(0x6fad59);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x2ull))));
}
B6fad5c:{NFSU2_TR(0x6fad5c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x3ull))));
}
B6fad5f:{NFSU2_TR(0x6fad5f);
__builtin_memmove((R+12),(R+8),4);
}
B6fad61:L6fad61:{c.instructions+=2;NFSU2_TR(0x6fad61);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6fad63:{NFSU2_TR(0x6fad63);
if(r1(R+518)){{goto L6fad6c;}}
}
B6fad65:L6fad65:{c.instructions+=1;NFSU2_TR(0x6fad65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x20000080ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fad6c:L6fad6c:{c.instructions+=2;NFSU2_TR(0x6fad6c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6fad6e:{NFSU2_TR(0x6fad6e);
if(r1(R+518)){{goto L6fad74;}}
}
B6fad70:L6fad70:{c.instructions+=1;NFSU2_TR(0x6fad70);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x8ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B6fad74:L6fad74:{c.instructions+=4;NFSU2_TR(0x6fad74);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6fad77:{NFSU2_TR(0x6fad77);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6fad79:{NFSU2_TR(0x6fad79);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x2full))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x2full)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x2full))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6fad7b:{NFSU2_TR(0x6fad7b);
if(r1(R+518)){{goto L6fad81;}}
}
B6fad7d:L6fad7d:{c.instructions+=2;NFSU2_TR(0x6fad7d);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x5cull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x5cull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x5cull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6fad7f:{NFSU2_TR(0x6fad7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fadc8;}}
}
B6fad81:L6fad81:{c.instructions+=2;NFSU2_TR(0x6fad81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fad83:{NFSU2_TR(0x6fad83);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fad86ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fad86:L6fad86:{c.instructions+=1;NFSU2_TR(0x6fad86);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeecull))));
__builtin_memmove((R+8),(U+0),4);
}
B6fad8c:L6fad8c:{c.instructions+=6;NFSU2_TR(0x6fad8c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6fad8e:{NFSU2_TR(0x6fad8e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fad8f:{NFSU2_TR(0x6fad8f);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+8)),r1(U+0));
}
B6fad91:{NFSU2_TR(0x6fad91);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6fad92:{NFSU2_TR(0x6fad92);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6fad94:{NFSU2_TR(0x6fad94);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fad8cu);}goto L6fad8c;}}
}
B6fad96:L6fad96:{c.instructions+=2;NFSU2_TR(0x6fad96);
__builtin_memmove((R+0),(R+28),4);
}
B6fad98:{NFSU2_TR(0x6fad98);
__builtin_memmove((R+8),(R+28),4);
}
B6fad9a:L6fad9a:{c.instructions+=4;NFSU2_TR(0x6fad9a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6fad9c:{NFSU2_TR(0x6fad9c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fad9d:{NFSU2_TR(0x6fad9d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6fad9f:{NFSU2_TR(0x6fad9f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fad9au);}goto L6fad9a;}}
}
B6fada1:L6fada1:{c.instructions+=3;NFSU2_TR(0x6fada1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeecull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fada7:{NFSU2_TR(0x6fada7);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B6fada9:{NFSU2_TR(0x6fada9);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B6fadaa:L6fadaa:{c.instructions+=4;NFSU2_TR(0x6fadaa);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6fadad:{NFSU2_TR(0x6fadad);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6fadae:{NFSU2_TR(0x6fadae);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6fadb0:{NFSU2_TR(0x6fadb0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fadaau);}goto L6fadaa;}}
}
B6fadb2:L6fadb2:{c.instructions+=3;NFSU2_TR(0x6fadb2);
__builtin_memmove((R+4),(R+0),4);
}
B6fadb4:{NFSU2_TR(0x6fadb4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6fadb7:{NFSU2_TR(0x6fadb7);
__builtin_memmove((R+24),(R+8),4);
}
B6fadb9:L6fadb9:{c.instructions+=1;NFSU2_TR(0x6fadb9);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6fadbb;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fadb9u);}goto L6fadb9;}
}
B6fadbb:L6fadbb:{c.instructions+=2;NFSU2_TR(0x6fadbb);
__builtin_memmove((R+4),(R+0),4);
}
B6fadbd:{NFSU2_TR(0x6fadbd);
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
B6fadc0:L6fadc0:{c.instructions+=1;NFSU2_TR(0x6fadc0);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6fadc2;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fadc0u);}goto L6fadc0;}
}
B6fadc2:L6fadc2:{c.instructions+=1;NFSU2_TR(0x6fadc2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeecull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fadc8:L6fadc8:{c.instructions+=9;NFSU2_TR(0x6fadc8);
__builtin_memmove((R+24),gp(0x7831d0),4);
}
B6fadce:{NFSU2_TR(0x6fadce);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fadd0:{NFSU2_TR(0x6fadd0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fadd3:{NFSU2_TR(0x6fadd3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fadd4:{NFSU2_TR(0x6fadd4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fadd6:{NFSU2_TR(0x6fadd6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fadd9:{NFSU2_TR(0x6fadd9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6faddc:{NFSU2_TR(0x6faddc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6faddd:{NFSU2_TR(0x6faddd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6faddfull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6faddf:L6faddf:{c.instructions+=2;NFSU2_TR(0x6faddf);
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
B6fade2:{NFSU2_TR(0x6fade2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fae0f;}}
}
B6fade4:L6fade4:{c.instructions+=2;NFSU2_TR(0x6fade4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6fade8:{NFSU2_TR(0x6fade8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fae0c;}}
}
B6fadea:L6fadea:{c.instructions+=2;NFSU2_TR(0x6fadea);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6fadee:{NFSU2_TR(0x6fadee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fae0c;}}
}
B6fadf0:L6fadf0:{c.instructions+=10;NFSU2_TR(0x6fadf0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fadf2:{NFSU2_TR(0x6fadf2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fadf5:{NFSU2_TR(0x6fadf5);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfffffffdull))));
}
B6fadf8:{NFSU2_TR(0x6fadf8);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))|u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fadfb:{NFSU2_TR(0x6fadfb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fadfc:{NFSU2_TR(0x6fadfc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fadfe:{NFSU2_TR(0x6fadfe);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fae01:{NFSU2_TR(0x6fae01);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fae04:{NFSU2_TR(0x6fae04);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fae05:{NFSU2_TR(0x6fae05);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fae07ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6fae07:L6fae07:{c.instructions+=2;NFSU2_TR(0x6fae07);
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
B6fae0a:{NFSU2_TR(0x6fae0a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fae0f;}}
}
B6fae0c:L6fae0c:{c.instructions+=1;NFSU2_TR(0x6fae0c);
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
B6fae0f:L6fae0f:{c.instructions+=5;NFSU2_TR(0x6fae0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fae10:{NFSU2_TR(0x6fae10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fae11:{NFSU2_TR(0x6fae11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fae12:{NFSU2_TR(0x6fae12);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6fae13:{NFSU2_TR(0x6fae13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fae16:L6fae16:{c.instructions+=4;NFSU2_TR(0x6fae16);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fae17:{NFSU2_TR(0x6fae17);
__builtin_memmove((R+20),(R+16),4);
}
B6fae19:{NFSU2_TR(0x6fae19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fae1a:{NFSU2_TR(0x6fae1a);
{u32 t_=u32(m4(0x783144));TAIL_DYNAMIC(t_);}
}
B6fae20:L6fae20:{c.instructions+=9;NFSU2_TR(0x6fae20);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fae21:{NFSU2_TR(0x6fae21);
__builtin_memmove((R+20),(R+16),4);
}
B6fae23:{NFSU2_TR(0x6fae23);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fae25:{NFSU2_TR(0x6fae25);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fae28:{NFSU2_TR(0x6fae28);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fae29:{NFSU2_TR(0x6fae29);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fae2c:{NFSU2_TR(0x6fae2c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fae2f:{NFSU2_TR(0x6fae2f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fae32:{NFSU2_TR(0x6fae32);
u8 U[4];
__builtin_memmove((U+0),gp(0x783234),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fae38ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6fae38:L6fae38:{c.instructions+=3;NFSU2_TR(0x6fae38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fae3b:{NFSU2_TR(0x6fae3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fae3c:{NFSU2_TR(0x6fae3c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fae3f:L6fae3f:{c.instructions+=9;NFSU2_TR(0x6fae3f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fae40:{NFSU2_TR(0x6fae40);
__builtin_memmove((R+20),(R+16),4);
}
B6fae42:{NFSU2_TR(0x6fae42);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fae44:{NFSU2_TR(0x6fae44);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fae47:{NFSU2_TR(0x6fae47);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fae48:{NFSU2_TR(0x6fae48);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fae4b:{NFSU2_TR(0x6fae4b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fae4e:{NFSU2_TR(0x6fae4e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fae51:{NFSU2_TR(0x6fae51);
u8 U[4];
__builtin_memmove((U+0),gp(0x783224),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fae57ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6fae57:L6fae57:{c.instructions+=3;NFSU2_TR(0x6fae57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fae5a:{NFSU2_TR(0x6fae5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fae5b:{NFSU2_TR(0x6fae5b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fae5e:L6fae5e:{c.instructions+=5;NFSU2_TR(0x6fae5e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fae5f:{NFSU2_TR(0x6fae5f);
__builtin_memmove((R+20),(R+16),4);
}
B6fae61:{NFSU2_TR(0x6fae61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fae64:{NFSU2_TR(0x6fae64);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6fae67:{NFSU2_TR(0x6fae67);
if(r1(R+518)){{goto L6fae6d;}}
}
B6fae69:L6fae69:{c.instructions+=2;NFSU2_TR(0x6fae69);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6fae6a:{NFSU2_TR(0x6fae6a);
if(r1(R+518)){{goto L6fae84;}}
}
B6fae6c:L6fae6c:{c.instructions+=1;NFSU2_TR(0x6fae6c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6fae6d:L6fae6d:{c.instructions+=1;NFSU2_TR(0x6fae6d);
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
B6fae6f:L6fae6f:{c.instructions+=5;NFSU2_TR(0x6fae6f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fae70:{NFSU2_TR(0x6fae70);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fae72:{NFSU2_TR(0x6fae72);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fae75:{NFSU2_TR(0x6fae75);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fae78:{NFSU2_TR(0x6fae78);
u8 U[4];
__builtin_memmove((U+0),gp(0x783228),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fae7eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6fae7e:L6fae7e:{c.instructions+=3;NFSU2_TR(0x6fae7e);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fae80:{NFSU2_TR(0x6fae80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fae81:{NFSU2_TR(0x6fae81);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fae84:L6fae84:{c.instructions+=3;NFSU2_TR(0x6fae84);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fae86:{NFSU2_TR(0x6fae86);
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
B6fae87:{NFSU2_TR(0x6fae87);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fae6fu);}goto L6fae6f;}
}
B6fae89:L6fae89:{c.instructions+=5;NFSU2_TR(0x6fae89);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fae8a:{NFSU2_TR(0x6fae8a);
__builtin_memmove((R+20),(R+16),4);
}
B6fae8c:{NFSU2_TR(0x6fae8c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fae8e:{NFSU2_TR(0x6fae8e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fae91:{NFSU2_TR(0x6fae91);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831c8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fae97ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6fae97:L6fae97:{c.instructions+=3;NFSU2_TR(0x6fae97);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fae99:{NFSU2_TR(0x6fae99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fae9a:{NFSU2_TR(0x6fae9a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fae9d:L6fae9d:{c.instructions+=4;NFSU2_TR(0x6fae9d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fae9e:{NFSU2_TR(0x6fae9e);
__builtin_memmove((R+20),(R+16),4);
}
B6faea0:{NFSU2_TR(0x6faea0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6faea3:{NFSU2_TR(0x6faea3);
u8 U[4];
__builtin_memmove((U+0),gp(0x78322c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6faea9ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6faea9:L6faea9:{c.instructions+=6;NFSU2_TR(0x6faea9);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6faeaa:{NFSU2_TR(0x6faeaa);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B6faeac:{NFSU2_TR(0x6faeac);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6faeae:{NFSU2_TR(0x6faeae);
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
B6faeaf:{NFSU2_TR(0x6faeaf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6faeb0:{NFSU2_TR(0x6faeb0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6faeb3:L6faeb3:{c.instructions+=11;NFSU2_TR(0x6faeb3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6faeb4:{NFSU2_TR(0x6faeb4);
__builtin_memmove((R+20),(R+16),4);
}
B6faeb6:{NFSU2_TR(0x6faeb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B6faeb9:{NFSU2_TR(0x6faeb9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6faebb:{NFSU2_TR(0x6faebb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6faebe:{NFSU2_TR(0x6faebe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6faebf:{NFSU2_TR(0x6faebf);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6faec2:{NFSU2_TR(0x6faec2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6faec3:{NFSU2_TR(0x6faec3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x4ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6faec6:{NFSU2_TR(0x6faec6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6faec7:{NFSU2_TR(0x6faec7);
u8 U[4];
__builtin_memmove((U+0),gp(0x783238),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6faecdull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6faecd:L6faecd:{c.instructions+=2;NFSU2_TR(0x6faecd);
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
B6faecf:{NFSU2_TR(0x6faecf);
if(r1(R+518)){{goto L6faed9;}}
}
B6faed1:L6faed1:{c.instructions+=4;NFSU2_TR(0x6faed1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6faed4:{NFSU2_TR(0x6faed4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6faed7:{NFSU2_TR(0x6faed7);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6faed8:{NFSU2_TR(0x6faed8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6faed9:L6faed9:{c.instructions+=4;NFSU2_TR(0x6faed9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6faedb:{NFSU2_TR(0x6faedb);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6faedd:{NFSU2_TR(0x6faedd);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6faede:{NFSU2_TR(0x6faede);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6faedf:L6faedf:{c.instructions+=4;NFSU2_TR(0x6faedf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6faee0:{NFSU2_TR(0x6faee0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6faee1:{NFSU2_TR(0x6faee1);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6faee3:{NFSU2_TR(0x6faee3);
u8 U[4];
__builtin_memmove((U+0),gp(0x783164),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6faee9ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6faee9:L6faee9:{c.instructions+=4;NFSU2_TR(0x6faee9);
u8 U[4];
w4(U+0,u32(0x68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6faeeb:{NFSU2_TR(0x6faeeb);
u8 U[4];
w4(U+0,u32(0x8ad6a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6faef0:{NFSU2_TR(0x6faef0);
__builtin_memmove((R+28),(R+0),4);
}
B6faef2:{NFSU2_TR(0x6faef2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6faef7ull));
{goto L6fafed;}
}
B6faef7:L6faef7:{c.instructions+=3;NFSU2_TR(0x6faef7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6faef8:{NFSU2_TR(0x6faef8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6faef9:{NFSU2_TR(0x6faef9);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6faefb:L6faefb:{c.instructions+=5;NFSU2_TR(0x6faefb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6faefd:{NFSU2_TR(0x6faefd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6faefe:{NFSU2_TR(0x6faefe);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B6faf00:{NFSU2_TR(0x6faf00);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6faf02:{NFSU2_TR(0x6faf02);
if(r1(R+518)){{goto L6faf13;}}
}
B6faf04:L6faf04:{c.instructions+=3;NFSU2_TR(0x6faf04);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x813b08ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6faf0b:{NFSU2_TR(0x6faf0b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8ad6a8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6faf12:{NFSU2_TR(0x6faf12);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6faf13:L6faf13:{c.instructions+=3;NFSU2_TR(0x6faf13);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6faf14:{NFSU2_TR(0x6faf14);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x1aull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1aull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1aull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6faf17:{NFSU2_TR(0x6faf17);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6faefbu);}goto L6faefb;}}
}
B6faf19:L6faf19:{c.instructions+=4;NFSU2_TR(0x6faf19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6faf1a:{NFSU2_TR(0x6faf1a);
__builtin_memmove((R+0),(R+24),4);
}
B6faf1c:{NFSU2_TR(0x6faf1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6faf1d:{NFSU2_TR(0x6faf1d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6faf1e:L6faf1e:{c.instructions+=7;NFSU2_TR(0x6faf1e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6faf1f:{NFSU2_TR(0x6faf1f);
__builtin_memmove((R+20),(R+16),4);
}
B6faf21:{NFSU2_TR(0x6faf21);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x140ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x140ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x140ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6faf27:{NFSU2_TR(0x6faf27);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffec0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6faf2d:{NFSU2_TR(0x6faf2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6faf2e:{NFSU2_TR(0x6faf2e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6faf31:{NFSU2_TR(0x6faf31);
u8 U[4];
__builtin_memmove((U+0),gp(0x783128),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6faf37ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6faf37:L6faf37:{c.instructions+=2;NFSU2_TR(0x6faf37);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6faf3a:{NFSU2_TR(0x6faf3a);
if(r1(R+518)){{goto L6faf6e;}}
}
B6faf3c:L6faf3c:{c.instructions+=10;NFSU2_TR(0x6faf3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6faf3f:{NFSU2_TR(0x6faf3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffec0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6faf45:{NFSU2_TR(0x6faf45);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6faf47:{NFSU2_TR(0x6faf47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6faf4d:{NFSU2_TR(0x6faf4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6faf50:{NFSU2_TR(0x6faf50);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6faf53:{NFSU2_TR(0x6faf53);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeecull))));
__builtin_memmove((R+0),(U+0),4);
}
B6faf59:{NFSU2_TR(0x6faf59);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B6faf5c:{NFSU2_TR(0x6faf5c);
__builtin_memmove((R+8),(R+0),4);
}
B6faf5e:{NFSU2_TR(0x6faf5e);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B6faf60:L6faf60:{c.instructions+=5;NFSU2_TR(0x6faf60);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B6faf62:{NFSU2_TR(0x6faf62);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B6faf65:{NFSU2_TR(0x6faf65);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6faf66:{NFSU2_TR(0x6faf66);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6faf68:{NFSU2_TR(0x6faf68);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6faf60u);}goto L6faf60;}}
}
B6faf6a:L6faf6a:{c.instructions+=3;NFSU2_TR(0x6faf6a);
w1(R+0,u8(0x1ull));
}
B6faf6c:{NFSU2_TR(0x6faf6c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6faf6d:{NFSU2_TR(0x6faf6d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6faf6e:L6faf6e:{c.instructions+=5;NFSU2_TR(0x6faf6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6faf71:{NFSU2_TR(0x6faf71);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6faf75:{NFSU2_TR(0x6faf75);
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
B6faf77:{NFSU2_TR(0x6faf77);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6faf78:{NFSU2_TR(0x6faf78);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6faf79:L6faf79:{c.instructions+=10;NFSU2_TR(0x6faf79);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6faf7a:{NFSU2_TR(0x6faf7a);
__builtin_memmove((R+20),(R+16),4);
}
B6faf7c:{NFSU2_TR(0x6faf7c);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x140ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x140ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x140ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6faf82:{NFSU2_TR(0x6faf82);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6faf83:{NFSU2_TR(0x6faf83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6faf86:{NFSU2_TR(0x6faf86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6faf89:{NFSU2_TR(0x6faf89);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffec0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6faf8f:{NFSU2_TR(0x6faf8f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6faf90:{NFSU2_TR(0x6faf90);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6faf91:{NFSU2_TR(0x6faf91);
u8 U[4];
__builtin_memmove((U+0),gp(0x783124),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6faf97ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6faf97:L6faf97:{c.instructions+=2;NFSU2_TR(0x6faf97);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6faf99:{NFSU2_TR(0x6faf99);
if(r1(R+518)){{goto L6fafc7;}}
}
B6faf9b:L6faf9b:{c.instructions+=8;NFSU2_TR(0x6faf9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffec0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fafa1:{NFSU2_TR(0x6fafa1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6fafa3:{NFSU2_TR(0x6fafa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fafa9:{NFSU2_TR(0x6fafa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fafac:{NFSU2_TR(0x6fafac);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeecull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fafb2:{NFSU2_TR(0x6fafb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B6fafb5:{NFSU2_TR(0x6fafb5);
__builtin_memmove((R+4),(R+0),4);
}
B6fafb7:{NFSU2_TR(0x6fafb7);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B6fafb9:L6fafb9:{c.instructions+=5;NFSU2_TR(0x6fafb9);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6fafbb:{NFSU2_TR(0x6fafbb);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B6fafbe:{NFSU2_TR(0x6fafbe);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fafbf:{NFSU2_TR(0x6fafbf);
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
B6fafc1:{NFSU2_TR(0x6fafc1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fafb9u);}goto L6fafb9;}}
}
B6fafc3:L6fafc3:{c.instructions+=2;NFSU2_TR(0x6fafc3);
w1(R+0,u8(0x1ull));
}
B6fafc5:{NFSU2_TR(0x6fafc5);
{goto L6fafc9;}
}
B6fafc7:L6fafc7:{c.instructions+=1;NFSU2_TR(0x6fafc7);
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
B6fafc9:L6fafc9:{c.instructions+=3;NFSU2_TR(0x6fafc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fafca:{NFSU2_TR(0x6fafca);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6fafcb:{NFSU2_TR(0x6fafcb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fafcc:L6fafcc:{c.instructions+=6;NFSU2_TR(0x6fafcc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fafcd:{NFSU2_TR(0x6fafcd);
__builtin_memmove((R+20),(R+16),4);
}
B6fafcf:{NFSU2_TR(0x6fafcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fafd2:{NFSU2_TR(0x6fafd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fafd5:{NFSU2_TR(0x6fafd5);
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
B6fafd8:{NFSU2_TR(0x6fafd8);
if(r1(R+518)){{goto L6fafe1;}}
}
B6fafda:L6fafda:{c.instructions+=2;NFSU2_TR(0x6fafda);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fafdb:{NFSU2_TR(0x6fafdb);
u8 U[4];
__builtin_memmove((U+0),gp(0x783120),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fafe1ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6fafe1:L6fafe1:{c.instructions+=2;NFSU2_TR(0x6fafe1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fafe2:{NFSU2_TR(0x6fafe2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fafe3:L6fafe3:{c.instructions+=4;NFSU2_TR(0x6fafe3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fafe4:{NFSU2_TR(0x6fafe4);
__builtin_memmove((R+20),(R+16),4);
}
B6fafe6:{NFSU2_TR(0x6fafe6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fafe7:{NFSU2_TR(0x6fafe7);
{u32 t_=u32(m4(0x814374));TAIL_DYNAMIC(t_);}
}
B6fafed:L6fafed:{c.instructions+=6;NFSU2_TR(0x6fafed);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fafee:{NFSU2_TR(0x6fafee);
__builtin_memmove((R+20),(R+16),4);
}
B6faff0:{NFSU2_TR(0x6faff0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6faff3:{NFSU2_TR(0x6faff3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6faff5:{NFSU2_TR(0x6faff5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6faff8:{NFSU2_TR(0x6faff8);
u8 U[4];
__builtin_memmove((U+0),gp(0x814370),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6faffeull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6faffe:L6faffe:{c.instructions+=1;NFSU2_TR(0x6faffe);
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
TAIL_STATIC(0x6fb001u,6fb);
}
XIT:NFSU2_TR_EXIT(0x6fa,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
