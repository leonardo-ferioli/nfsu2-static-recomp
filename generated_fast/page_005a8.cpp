#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_591(u8* __restrict R,Cpu& c);
u32 body_59b(u8* __restrict R,Cpu& c);
u32 body_59d(u8* __restrict R,Cpu& c);
u32 body_59e(u8* __restrict R,Cpu& c);
u32 body_5a0(u8* __restrict R,Cpu& c);
u32 body_5a9(u8* __restrict R,Cpu& c);
u32 body_5db(u8* __restrict R,Cpu& c);
u32 body_5dc(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5a8,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5a8,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5a8(u8* __restrict R,Cpu& c);
u32 page_5a8(Cpu& c){return body_5a8(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5a8(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5a8002:goto L5a8002;
case 0x5a8004:c.instructions+=22;goto B5a8004;
case 0x5a800a:c.instructions+=21;goto B5a800a;
case 0x5a800d:c.instructions+=20;goto B5a800d;
case 0x5a8013:c.instructions+=19;goto B5a8013;
case 0x5a8019:c.instructions+=18;goto B5a8019;
case 0x5a801f:c.instructions+=17;goto B5a801f;
case 0x5a8025:c.instructions+=16;goto B5a8025;
case 0x5a802b:c.instructions+=15;goto B5a802b;
case 0x5a802d:c.instructions+=14;goto B5a802d;
case 0x5a8032:c.instructions+=13;goto B5a8032;
case 0x5a8038:c.instructions+=12;goto B5a8038;
case 0x5a803e:c.instructions+=11;goto B5a803e;
case 0x5a8044:c.instructions+=10;goto B5a8044;
case 0x5a804a:c.instructions+=9;goto B5a804a;
case 0x5a8050:c.instructions+=8;goto B5a8050;
case 0x5a805a:c.instructions+=7;goto B5a805a;
case 0x5a8060:c.instructions+=6;goto B5a8060;
case 0x5a8066:c.instructions+=5;goto B5a8066;
case 0x5a806c:c.instructions+=4;goto B5a806c;
case 0x5a8072:c.instructions+=3;goto B5a8072;
case 0x5a8078:c.instructions+=2;goto B5a8078;
case 0x5a807a:c.instructions+=1;goto B5a807a;
case 0x5a807f:goto L5a807f;
case 0x5a8082:c.instructions+=3;goto B5a8082;
case 0x5a8087:c.instructions+=2;goto B5a8087;
case 0x5a8088:c.instructions+=1;goto B5a8088;
case 0x5a808d:goto L5a808d;
case 0x5a8091:c.instructions+=7;goto B5a8091;
case 0x5a8094:c.instructions+=6;goto B5a8094;
case 0x5a8095:c.instructions+=5;goto B5a8095;
case 0x5a8097:c.instructions+=4;goto B5a8097;
case 0x5a8098:c.instructions+=3;goto B5a8098;
case 0x5a809f:c.instructions+=2;goto B5a809f;
case 0x5a80a2:c.instructions+=1;goto B5a80a2;
case 0x5a80b0:goto L5a80b0;
case 0x5a80b5:c.instructions+=1;goto B5a80b5;
case 0x5a80c0:goto L5a80c0;
case 0x5a80c3:c.instructions+=1;goto B5a80c3;
case 0x5a80d0:goto L5a80d0;
case 0x5a80d5:c.instructions+=1;goto B5a80d5;
case 0x5a80e0:goto L5a80e0;
case 0x5a80e3:c.instructions+=3;goto B5a80e3;
case 0x5a80e4:c.instructions+=2;goto B5a80e4;
case 0x5a80e8:c.instructions+=1;goto B5a80e8;
case 0x5a80ed:goto L5a80ed;
case 0x5a80f0:goto L5a80f0;
case 0x5a80f1:c.instructions+=15;goto B5a80f1;
case 0x5a80f2:c.instructions+=14;goto B5a80f2;
case 0x5a80f6:c.instructions+=13;goto B5a80f6;
case 0x5a80f9:c.instructions+=12;goto B5a80f9;
case 0x5a80fb:c.instructions+=11;goto B5a80fb;
case 0x5a80fe:c.instructions+=10;goto B5a80fe;
case 0x5a8100:c.instructions+=9;goto B5a8100;
case 0x5a8103:c.instructions+=8;goto B5a8103;
case 0x5a8105:c.instructions+=7;goto B5a8105;
case 0x5a8108:c.instructions+=6;goto B5a8108;
case 0x5a8109:c.instructions+=5;goto B5a8109;
case 0x5a810c:c.instructions+=4;goto B5a810c;
case 0x5a810d:c.instructions+=3;goto B5a810d;
case 0x5a8110:c.instructions+=2;goto B5a8110;
case 0x5a8112:c.instructions+=1;goto B5a8112;
case 0x5a8117:goto L5a8117;
case 0x5a811a:c.instructions+=20;goto B5a811a;
case 0x5a811d:c.instructions+=19;goto B5a811d;
case 0x5a8120:c.instructions+=18;goto B5a8120;
case 0x5a8123:c.instructions+=17;goto B5a8123;
case 0x5a8125:c.instructions+=16;goto B5a8125;
case 0x5a8128:c.instructions+=15;goto B5a8128;
case 0x5a812b:c.instructions+=14;goto B5a812b;
case 0x5a812d:c.instructions+=13;goto B5a812d;
case 0x5a8130:c.instructions+=12;goto B5a8130;
case 0x5a8133:c.instructions+=11;goto B5a8133;
case 0x5a8136:c.instructions+=10;goto B5a8136;
case 0x5a8139:c.instructions+=9;goto B5a8139;
case 0x5a813c:c.instructions+=8;goto B5a813c;
case 0x5a813e:c.instructions+=7;goto B5a813e;
case 0x5a8141:c.instructions+=6;goto B5a8141;
case 0x5a8144:c.instructions+=5;goto B5a8144;
case 0x5a8147:c.instructions+=4;goto B5a8147;
case 0x5a8148:c.instructions+=3;goto B5a8148;
case 0x5a814b:c.instructions+=2;goto B5a814b;
case 0x5a814c:c.instructions+=1;goto B5a814c;
case 0x5a8150:goto L5a8150;
case 0x5a8153:c.instructions+=1;goto B5a8153;
case 0x5a8160:goto L5a8160;
case 0x5a8162:c.instructions+=38;goto B5a8162;
case 0x5a8167:c.instructions+=37;goto B5a8167;
case 0x5a816d:c.instructions+=36;goto B5a816d;
case 0x5a816e:c.instructions+=35;goto B5a816e;
case 0x5a8175:c.instructions+=34;goto B5a8175;
case 0x5a8176:c.instructions+=33;goto B5a8176;
case 0x5a8177:c.instructions+=32;goto B5a8177;
case 0x5a8179:c.instructions+=31;goto B5a8179;
case 0x5a817d:c.instructions+=30;goto B5a817d;
case 0x5a817f:c.instructions+=29;goto B5a817f;
case 0x5a8185:c.instructions+=28;goto B5a8185;
case 0x5a8189:c.instructions+=27;goto B5a8189;
case 0x5a818f:c.instructions+=26;goto B5a818f;
case 0x5a8193:c.instructions+=25;goto B5a8193;
case 0x5a8196:c.instructions+=24;goto B5a8196;
case 0x5a819a:c.instructions+=23;goto B5a819a;
case 0x5a819d:c.instructions+=22;goto B5a819d;
case 0x5a81a1:c.instructions+=21;goto B5a81a1;
case 0x5a81a6:c.instructions+=20;goto B5a81a6;
case 0x5a81ad:c.instructions+=19;goto B5a81ad;
case 0x5a81b3:c.instructions+=18;goto B5a81b3;
case 0x5a81b9:c.instructions+=17;goto B5a81b9;
case 0x5a81bf:c.instructions+=16;goto B5a81bf;
case 0x5a81c5:c.instructions+=15;goto B5a81c5;
case 0x5a81c9:c.instructions+=14;goto B5a81c9;
case 0x5a81cc:c.instructions+=13;goto B5a81cc;
case 0x5a81d0:c.instructions+=12;goto B5a81d0;
case 0x5a81d6:c.instructions+=11;goto B5a81d6;
case 0x5a81db:c.instructions+=10;goto B5a81db;
case 0x5a81de:c.instructions+=9;goto B5a81de;
case 0x5a81e3:c.instructions+=8;goto B5a81e3;
case 0x5a81e4:c.instructions+=7;goto B5a81e4;
case 0x5a81e7:c.instructions+=6;goto B5a81e7;
case 0x5a81ed:c.instructions+=5;goto B5a81ed;
case 0x5a81f3:c.instructions+=4;goto B5a81f3;
case 0x5a81f9:c.instructions+=3;goto B5a81f9;
case 0x5a81ff:c.instructions+=2;goto B5a81ff;
case 0x5a8205:c.instructions+=1;goto B5a8205;
case 0x5a820a:goto L5a820a;
case 0x5a820e:c.instructions+=6;goto B5a820e;
case 0x5a8211:c.instructions+=5;goto B5a8211;
case 0x5a8213:c.instructions+=4;goto B5a8213;
case 0x5a8214:c.instructions+=3;goto B5a8214;
case 0x5a821b:c.instructions+=2;goto B5a821b;
case 0x5a821e:c.instructions+=1;goto B5a821e;
case 0x5a8230:goto L5a8230;
case 0x5a8233:c.instructions+=1;goto B5a8233;
case 0x5a8240:goto L5a8240;
case 0x5a8243:c.instructions+=5;goto B5a8243;
case 0x5a8247:c.instructions+=4;goto B5a8247;
case 0x5a8249:c.instructions+=3;goto B5a8249;
case 0x5a824c:c.instructions+=2;goto B5a824c;
case 0x5a824f:c.instructions+=1;goto B5a824f;
case 0x5a8260:goto L5a8260;
case 0x5a8264:c.instructions+=5;goto B5a8264;
case 0x5a8266:c.instructions+=4;goto B5a8266;
case 0x5a8269:c.instructions+=3;goto B5a8269;
case 0x5a826c:c.instructions+=2;goto B5a826c;
case 0x5a826f:c.instructions+=1;goto B5a826f;
case 0x5a8280:goto L5a8280;
case 0x5a8281:c.instructions+=18;goto B5a8281;
case 0x5a8283:c.instructions+=17;goto B5a8283;
case 0x5a8286:c.instructions+=16;goto B5a8286;
case 0x5a8289:c.instructions+=15;goto B5a8289;
case 0x5a828a:c.instructions+=14;goto B5a828a;
case 0x5a828c:c.instructions+=13;goto B5a828c;
case 0x5a828f:c.instructions+=12;goto B5a828f;
case 0x5a8292:c.instructions+=11;goto B5a8292;
case 0x5a8298:c.instructions+=10;goto B5a8298;
case 0x5a829e:c.instructions+=9;goto B5a829e;
case 0x5a82a1:c.instructions+=8;goto B5a82a1;
case 0x5a82a7:c.instructions+=7;goto B5a82a7;
case 0x5a82ad:c.instructions+=6;goto B5a82ad;
case 0x5a82b1:c.instructions+=5;goto B5a82b1;
case 0x5a82b4:c.instructions+=4;goto B5a82b4;
case 0x5a82ba:c.instructions+=3;goto B5a82ba;
case 0x5a82bc:c.instructions+=2;goto B5a82bc;
case 0x5a82bf:c.instructions+=1;goto B5a82bf;
case 0x5a82c1:goto L5a82c1;
case 0x5a82c3:goto L5a82c3;
case 0x5a82c9:c.instructions+=2;goto B5a82c9;
case 0x5a82cb:c.instructions+=1;goto B5a82cb;
case 0x5a82cd:goto L5a82cd;
case 0x5a82d3:c.instructions+=2;goto B5a82d3;
case 0x5a82d9:c.instructions+=1;goto B5a82d9;
case 0x5a82db:goto L5a82db;
case 0x5a82dd:goto L5a82dd;
case 0x5a82e0:c.instructions+=5;goto B5a82e0;
case 0x5a82e6:c.instructions+=4;goto B5a82e6;
case 0x5a82ea:c.instructions+=3;goto B5a82ea;
case 0x5a82ec:c.instructions+=2;goto B5a82ec;
case 0x5a82ef:c.instructions+=1;goto B5a82ef;
case 0x5a82f1:goto L5a82f1;
case 0x5a82f3:goto L5a82f3;
case 0x5a82f5:c.instructions+=1;goto B5a82f5;
case 0x5a82f7:goto L5a82f7;
case 0x5a82fd:c.instructions+=2;goto B5a82fd;
case 0x5a8303:c.instructions+=1;goto B5a8303;
case 0x5a8305:goto L5a8305;
case 0x5a8307:goto L5a8307;
case 0x5a830a:c.instructions+=4;goto B5a830a;
case 0x5a830b:c.instructions+=3;goto B5a830b;
case 0x5a830f:c.instructions+=2;goto B5a830f;
case 0x5a8310:c.instructions+=1;goto B5a8310;
case 0x5a8315:goto L5a8315;
case 0x5a831b:c.instructions+=9;goto B5a831b;
case 0x5a831c:c.instructions+=8;goto B5a831c;
case 0x5a8320:c.instructions+=7;goto B5a8320;
case 0x5a8321:c.instructions+=6;goto B5a8321;
case 0x5a8325:c.instructions+=5;goto B5a8325;
case 0x5a8326:c.instructions+=4;goto B5a8326;
case 0x5a832e:c.instructions+=3;goto B5a832e;
case 0x5a8336:c.instructions+=2;goto B5a8336;
case 0x5a833e:c.instructions+=1;goto B5a833e;
case 0x5a8343:goto L5a8343;
case 0x5a8347:c.instructions+=4;goto B5a8347;
case 0x5a834b:c.instructions+=3;goto B5a834b;
case 0x5a834c:c.instructions+=2;goto B5a834c;
case 0x5a834d:c.instructions+=1;goto B5a834d;
case 0x5a8352:goto L5a8352;
case 0x5a8355:c.instructions+=9;goto B5a8355;
case 0x5a8359:c.instructions+=8;goto B5a8359;
case 0x5a835c:c.instructions+=7;goto B5a835c;
case 0x5a8360:c.instructions+=6;goto B5a8360;
case 0x5a8366:c.instructions+=5;goto B5a8366;
case 0x5a836a:c.instructions+=4;goto B5a836a;
case 0x5a8370:c.instructions+=3;goto B5a8370;
case 0x5a8372:c.instructions+=2;goto B5a8372;
case 0x5a8375:c.instructions+=1;goto B5a8375;
case 0x5a8377:goto L5a8377;
case 0x5a837d:c.instructions+=3;goto B5a837d;
case 0x5a837f:c.instructions+=2;goto B5a837f;
case 0x5a8383:c.instructions+=1;goto B5a8383;
case 0x5a8387:goto L5a8387;
case 0x5a838b:c.instructions+=4;goto B5a838b;
case 0x5a8391:c.instructions+=3;goto B5a8391;
case 0x5a8393:c.instructions+=2;goto B5a8393;
case 0x5a8396:c.instructions+=1;goto B5a8396;
case 0x5a8398:goto L5a8398;
case 0x5a839e:c.instructions+=6;goto B5a839e;
case 0x5a83a2:c.instructions+=5;goto B5a83a2;
case 0x5a83a6:c.instructions+=4;goto B5a83a6;
case 0x5a83ac:c.instructions+=3;goto B5a83ac;
case 0x5a83ae:c.instructions+=2;goto B5a83ae;
case 0x5a83b1:c.instructions+=1;goto B5a83b1;
case 0x5a83b3:goto L5a83b3;
case 0x5a83b9:c.instructions+=3;goto B5a83b9;
case 0x5a83bb:c.instructions+=2;goto B5a83bb;
case 0x5a83bf:c.instructions+=1;goto B5a83bf;
case 0x5a83c3:goto L5a83c3;
case 0x5a83c6:c.instructions+=11;goto B5a83c6;
case 0x5a83c9:c.instructions+=10;goto B5a83c9;
case 0x5a83cc:c.instructions+=9;goto B5a83cc;
case 0x5a83d0:c.instructions+=8;goto B5a83d0;
case 0x5a83d6:c.instructions+=7;goto B5a83d6;
case 0x5a83dc:c.instructions+=6;goto B5a83dc;
case 0x5a83e2:c.instructions+=5;goto B5a83e2;
case 0x5a83e4:c.instructions+=4;goto B5a83e4;
case 0x5a83ea:c.instructions+=3;goto B5a83ea;
case 0x5a83ec:c.instructions+=2;goto B5a83ec;
case 0x5a83ef:c.instructions+=1;goto B5a83ef;
case 0x5a83f1:goto L5a83f1;
case 0x5a83f7:c.instructions+=4;goto B5a83f7;
case 0x5a83fd:c.instructions+=3;goto B5a83fd;
case 0x5a83ff:c.instructions+=2;goto B5a83ff;
case 0x5a8402:c.instructions+=1;goto B5a8402;
case 0x5a8404:goto L5a8404;
case 0x5a8408:c.instructions+=4;goto B5a8408;
case 0x5a840e:c.instructions+=3;goto B5a840e;
case 0x5a8410:c.instructions+=2;goto B5a8410;
case 0x5a8413:c.instructions+=1;goto B5a8413;
case 0x5a8415:goto L5a8415;
case 0x5a8418:c.instructions+=2;goto B5a8418;
case 0x5a841a:c.instructions+=1;goto B5a841a;
case 0x5a841c:goto L5a841c;
case 0x5a8422:c.instructions+=4;goto B5a8422;
case 0x5a8424:c.instructions+=3;goto B5a8424;
case 0x5a842a:c.instructions+=2;goto B5a842a;
case 0x5a8430:c.instructions+=1;goto B5a8430;
case 0x5a8436:goto L5a8436;
case 0x5a843a:c.instructions+=13;goto B5a843a;
case 0x5a8440:c.instructions+=12;goto B5a8440;
case 0x5a8444:c.instructions+=11;goto B5a8444;
case 0x5a8448:c.instructions+=10;goto B5a8448;
case 0x5a844c:c.instructions+=9;goto B5a844c;
case 0x5a8450:c.instructions+=8;goto B5a8450;
case 0x5a8454:c.instructions+=7;goto B5a8454;
case 0x5a8458:c.instructions+=6;goto B5a8458;
case 0x5a845a:c.instructions+=5;goto B5a845a;
case 0x5a845e:c.instructions+=4;goto B5a845e;
case 0x5a8464:c.instructions+=3;goto B5a8464;
case 0x5a8466:c.instructions+=2;goto B5a8466;
case 0x5a8469:c.instructions+=1;goto B5a8469;
case 0x5a846f:goto L5a846f;
case 0x5a8473:c.instructions+=4;goto B5a8473;
case 0x5a8479:c.instructions+=3;goto B5a8479;
case 0x5a847b:c.instructions+=2;goto B5a847b;
case 0x5a847e:c.instructions+=1;goto B5a847e;
case 0x5a8480:goto L5a8480;
case 0x5a8484:c.instructions+=4;goto B5a8484;
case 0x5a848a:c.instructions+=3;goto B5a848a;
case 0x5a848c:c.instructions+=2;goto B5a848c;
case 0x5a848f:c.instructions+=1;goto B5a848f;
case 0x5a8495:goto L5a8495;
case 0x5a849b:c.instructions+=11;goto B5a849b;
case 0x5a849e:c.instructions+=10;goto B5a849e;
case 0x5a84a4:c.instructions+=9;goto B5a84a4;
case 0x5a84a7:c.instructions+=8;goto B5a84a7;
case 0x5a84ad:c.instructions+=7;goto B5a84ad;
case 0x5a84b3:c.instructions+=6;goto B5a84b3;
case 0x5a84b6:c.instructions+=5;goto B5a84b6;
case 0x5a84bc:c.instructions+=4;goto B5a84bc;
case 0x5a84c2:c.instructions+=3;goto B5a84c2;
case 0x5a84c5:c.instructions+=2;goto B5a84c5;
case 0x5a84c9:c.instructions+=1;goto B5a84c9;
case 0x5a84cb:goto L5a84cb;
case 0x5a84cd:c.instructions+=1;goto B5a84cd;
case 0x5a84d2:goto L5a84d2;
case 0x5a84d6:c.instructions+=1;goto B5a84d6;
case 0x5a84da:goto L5a84da;
case 0x5a84e0:c.instructions+=20;goto B5a84e0;
case 0x5a84e1:c.instructions+=19;goto B5a84e1;
case 0x5a84e5:c.instructions+=18;goto B5a84e5;
case 0x5a84e7:c.instructions+=17;goto B5a84e7;
case 0x5a84ed:c.instructions+=16;goto B5a84ed;
case 0x5a84f1:c.instructions+=15;goto B5a84f1;
case 0x5a84f5:c.instructions+=14;goto B5a84f5;
case 0x5a84f9:c.instructions+=13;goto B5a84f9;
case 0x5a84fd:c.instructions+=12;goto B5a84fd;
case 0x5a8501:c.instructions+=11;goto B5a8501;
case 0x5a8503:c.instructions+=10;goto B5a8503;
case 0x5a8509:c.instructions+=9;goto B5a8509;
case 0x5a850f:c.instructions+=8;goto B5a850f;
case 0x5a8513:c.instructions+=7;goto B5a8513;
case 0x5a8517:c.instructions+=6;goto B5a8517;
case 0x5a8519:c.instructions+=5;goto B5a8519;
case 0x5a851b:c.instructions+=4;goto B5a851b;
case 0x5a851d:c.instructions+=3;goto B5a851d;
case 0x5a851f:c.instructions+=2;goto B5a851f;
case 0x5a8522:c.instructions+=1;goto B5a8522;
case 0x5a8527:goto L5a8527;
case 0x5a852b:c.instructions+=5;goto B5a852b;
case 0x5a852d:c.instructions+=4;goto B5a852d;
case 0x5a8533:c.instructions+=3;goto B5a8533;
case 0x5a8535:c.instructions+=2;goto B5a8535;
case 0x5a8538:c.instructions+=1;goto B5a8538;
case 0x5a853a:goto L5a853a;
case 0x5a853e:c.instructions+=6;goto B5a853e;
case 0x5a8541:c.instructions+=5;goto B5a8541;
case 0x5a8543:c.instructions+=4;goto B5a8543;
case 0x5a8545:c.instructions+=3;goto B5a8545;
case 0x5a8547:c.instructions+=2;goto B5a8547;
case 0x5a854a:c.instructions+=1;goto B5a854a;
case 0x5a854c:goto L5a854c;
case 0x5a8552:c.instructions+=2;goto B5a8552;
case 0x5a8554:c.instructions+=1;goto B5a8554;
case 0x5a855a:goto L5a855a;
case 0x5a855e:c.instructions+=20;goto B5a855e;
case 0x5a8561:c.instructions+=19;goto B5a8561;
case 0x5a8567:c.instructions+=18;goto B5a8567;
case 0x5a856e:c.instructions+=17;goto B5a856e;
case 0x5a8572:c.instructions+=16;goto B5a8572;
case 0x5a8576:c.instructions+=15;goto B5a8576;
case 0x5a857a:c.instructions+=14;goto B5a857a;
case 0x5a857e:c.instructions+=13;goto B5a857e;
case 0x5a8584:c.instructions+=12;goto B5a8584;
case 0x5a858a:c.instructions+=11;goto B5a858a;
case 0x5a858e:c.instructions+=10;goto B5a858e;
case 0x5a8590:c.instructions+=9;goto B5a8590;
case 0x5a8594:c.instructions+=8;goto B5a8594;
case 0x5a8598:c.instructions+=7;goto B5a8598;
case 0x5a859e:c.instructions+=6;goto B5a859e;
case 0x5a85a4:c.instructions+=5;goto B5a85a4;
case 0x5a85aa:c.instructions+=4;goto B5a85aa;
case 0x5a85b0:c.instructions+=3;goto B5a85b0;
case 0x5a85b2:c.instructions+=2;goto B5a85b2;
case 0x5a85b5:c.instructions+=1;goto B5a85b5;
case 0x5a85b7:goto L5a85b7;
case 0x5a85bb:c.instructions+=4;goto B5a85bb;
case 0x5a85c1:c.instructions+=3;goto B5a85c1;
case 0x5a85c3:c.instructions+=2;goto B5a85c3;
case 0x5a85c6:c.instructions+=1;goto B5a85c6;
case 0x5a85c8:goto L5a85c8;
case 0x5a85ce:c.instructions+=6;goto B5a85ce;
case 0x5a85d2:c.instructions+=5;goto B5a85d2;
case 0x5a85d6:c.instructions+=4;goto B5a85d6;
case 0x5a85d8:c.instructions+=3;goto B5a85d8;
case 0x5a85de:c.instructions+=2;goto B5a85de;
case 0x5a85e2:c.instructions+=1;goto B5a85e2;
case 0x5a85e8:goto L5a85e8;
case 0x5a85ec:c.instructions+=7;goto B5a85ec;
case 0x5a85f0:c.instructions+=6;goto B5a85f0;
case 0x5a85f6:c.instructions+=5;goto B5a85f6;
case 0x5a85fc:c.instructions+=4;goto B5a85fc;
case 0x5a85fd:c.instructions+=3;goto B5a85fd;
case 0x5a85ff:c.instructions+=2;goto B5a85ff;
case 0x5a8600:c.instructions+=1;goto B5a8600;
case 0x5a8603:goto L5a8603;
case 0x5a8606:c.instructions+=11;goto B5a8606;
case 0x5a860d:c.instructions+=10;goto B5a860d;
case 0x5a8610:c.instructions+=9;goto B5a8610;
case 0x5a8616:c.instructions+=8;goto B5a8616;
case 0x5a861e:c.instructions+=7;goto B5a861e;
case 0x5a8624:c.instructions+=6;goto B5a8624;
case 0x5a862a:c.instructions+=5;goto B5a862a;
case 0x5a862e:c.instructions+=4;goto B5a862e;
case 0x5a8634:c.instructions+=3;goto B5a8634;
case 0x5a8636:c.instructions+=2;goto B5a8636;
case 0x5a8639:c.instructions+=1;goto B5a8639;
case 0x5a863b:goto L5a863b;
case 0x5a8643:goto L5a8643;
case 0x5a8647:c.instructions+=5;goto B5a8647;
case 0x5a864f:c.instructions+=4;goto B5a864f;
case 0x5a8655:c.instructions+=3;goto B5a8655;
case 0x5a8657:c.instructions+=2;goto B5a8657;
case 0x5a865a:c.instructions+=1;goto B5a865a;
case 0x5a865c:goto L5a865c;
case 0x5a8664:goto L5a8664;
case 0x5a8668:c.instructions+=8;goto B5a8668;
case 0x5a866b:c.instructions+=7;goto B5a866b;
case 0x5a866d:c.instructions+=6;goto B5a866d;
case 0x5a866f:c.instructions+=5;goto B5a866f;
case 0x5a8673:c.instructions+=4;goto B5a8673;
case 0x5a8679:c.instructions+=3;goto B5a8679;
case 0x5a867f:c.instructions+=2;goto B5a867f;
case 0x5a8682:c.instructions+=1;goto B5a8682;
case 0x5a8687:goto L5a8687;
case 0x5a868d:c.instructions+=10;goto B5a868d;
case 0x5a8691:c.instructions+=9;goto B5a8691;
case 0x5a869b:c.instructions+=8;goto B5a869b;
case 0x5a86a1:c.instructions+=7;goto B5a86a1;
case 0x5a86a5:c.instructions+=6;goto B5a86a5;
case 0x5a86a9:c.instructions+=5;goto B5a86a9;
case 0x5a86af:c.instructions+=4;goto B5a86af;
case 0x5a86b0:c.instructions+=3;goto B5a86b0;
case 0x5a86b2:c.instructions+=2;goto B5a86b2;
case 0x5a86b3:c.instructions+=1;goto B5a86b3;
case 0x5a86c0:goto L5a86c0;
case 0x5a86c2:c.instructions+=26;goto B5a86c2;
case 0x5a86c7:c.instructions+=25;goto B5a86c7;
case 0x5a86cd:c.instructions+=24;goto B5a86cd;
case 0x5a86ce:c.instructions+=23;goto B5a86ce;
case 0x5a86d5:c.instructions+=22;goto B5a86d5;
case 0x5a86d6:c.instructions+=21;goto B5a86d6;
case 0x5a86d7:c.instructions+=20;goto B5a86d7;
case 0x5a86d9:c.instructions+=19;goto B5a86d9;
case 0x5a86dd:c.instructions+=18;goto B5a86dd;
case 0x5a86e1:c.instructions+=17;goto B5a86e1;
case 0x5a86e5:c.instructions+=16;goto B5a86e5;
case 0x5a86eb:c.instructions+=15;goto B5a86eb;
case 0x5a86ef:c.instructions+=14;goto B5a86ef;
case 0x5a86f5:c.instructions+=13;goto B5a86f5;
case 0x5a86f9:c.instructions+=12;goto B5a86f9;
case 0x5a86ff:c.instructions+=11;goto B5a86ff;
case 0x5a8701:c.instructions+=10;goto B5a8701;
case 0x5a8707:c.instructions+=9;goto B5a8707;
case 0x5a870b:c.instructions+=8;goto B5a870b;
case 0x5a870e:c.instructions+=7;goto B5a870e;
case 0x5a8713:c.instructions+=6;goto B5a8713;
case 0x5a8714:c.instructions+=5;goto B5a8714;
case 0x5a8718:c.instructions+=4;goto B5a8718;
case 0x5a871e:c.instructions+=3;goto B5a871e;
case 0x5a8721:c.instructions+=2;goto B5a8721;
case 0x5a8724:c.instructions+=1;goto B5a8724;
case 0x5a8729:goto L5a8729;
case 0x5a872d:c.instructions+=6;goto B5a872d;
case 0x5a8730:c.instructions+=5;goto B5a8730;
case 0x5a8732:c.instructions+=4;goto B5a8732;
case 0x5a8733:c.instructions+=3;goto B5a8733;
case 0x5a873a:c.instructions+=2;goto B5a873a;
case 0x5a873d:c.instructions+=1;goto B5a873d;
case 0x5a8740:goto L5a8740;
case 0x5a8743:c.instructions+=1;goto B5a8743;
case 0x5a8750:goto L5a8750;
case 0x5a8753:c.instructions+=5;goto B5a8753;
case 0x5a8757:c.instructions+=4;goto B5a8757;
case 0x5a8759:c.instructions+=3;goto B5a8759;
case 0x5a875c:c.instructions+=2;goto B5a875c;
case 0x5a875f:c.instructions+=1;goto B5a875f;
case 0x5a8770:goto L5a8770;
case 0x5a8774:c.instructions+=5;goto B5a8774;
case 0x5a8776:c.instructions+=4;goto B5a8776;
case 0x5a8779:c.instructions+=3;goto B5a8779;
case 0x5a877c:c.instructions+=2;goto B5a877c;
case 0x5a877f:c.instructions+=1;goto B5a877f;
case 0x5a8790:goto L5a8790;
case 0x5a8791:c.instructions+=15;goto B5a8791;
case 0x5a8793:c.instructions+=14;goto B5a8793;
case 0x5a8796:c.instructions+=13;goto B5a8796;
case 0x5a879c:c.instructions+=12;goto B5a879c;
case 0x5a879d:c.instructions+=11;goto B5a879d;
case 0x5a879e:c.instructions+=10;goto B5a879e;
case 0x5a87a0:c.instructions+=9;goto B5a87a0;
case 0x5a87a6:c.instructions+=8;goto B5a87a6;
case 0x5a87a7:c.instructions+=7;goto B5a87a7;
case 0x5a87ad:c.instructions+=6;goto B5a87ad;
case 0x5a87ae:c.instructions+=5;goto B5a87ae;
case 0x5a87b1:c.instructions+=4;goto B5a87b1;
case 0x5a87b2:c.instructions+=3;goto B5a87b2;
case 0x5a87b6:c.instructions+=2;goto B5a87b6;
case 0x5a87b7:c.instructions+=1;goto B5a87b7;
case 0x5a87bc:goto L5a87bc;
case 0x5a87c0:c.instructions+=23;goto B5a87c0;
case 0x5a87c6:c.instructions+=22;goto B5a87c6;
case 0x5a87c9:c.instructions+=21;goto B5a87c9;
case 0x5a87cf:c.instructions+=20;goto B5a87cf;
case 0x5a87d2:c.instructions+=19;goto B5a87d2;
case 0x5a87d5:c.instructions+=18;goto B5a87d5;
case 0x5a87d9:c.instructions+=17;goto B5a87d9;
case 0x5a87dc:c.instructions+=16;goto B5a87dc;
case 0x5a87df:c.instructions+=15;goto B5a87df;
case 0x5a87e3:c.instructions+=14;goto B5a87e3;
case 0x5a87e4:c.instructions+=13;goto B5a87e4;
case 0x5a87e8:c.instructions+=12;goto B5a87e8;
case 0x5a87ec:c.instructions+=11;goto B5a87ec;
case 0x5a87f0:c.instructions+=10;goto B5a87f0;
case 0x5a87f2:c.instructions+=9;goto B5a87f2;
case 0x5a87f3:c.instructions+=8;goto B5a87f3;
case 0x5a87f7:c.instructions+=7;goto B5a87f7;
case 0x5a87fb:c.instructions+=6;goto B5a87fb;
case 0x5a8801:c.instructions+=5;goto B5a8801;
case 0x5a8805:c.instructions+=4;goto B5a8805;
case 0x5a8806:c.instructions+=3;goto B5a8806;
case 0x5a880c:c.instructions+=2;goto B5a880c;
case 0x5a880d:c.instructions+=1;goto B5a880d;
case 0x5a8812:goto L5a8812;
case 0x5a8818:c.instructions+=9;goto B5a8818;
case 0x5a881b:c.instructions+=8;goto B5a881b;
case 0x5a881e:c.instructions+=7;goto B5a881e;
case 0x5a8821:c.instructions+=6;goto B5a8821;
case 0x5a8824:c.instructions+=5;goto B5a8824;
case 0x5a8828:c.instructions+=4;goto B5a8828;
case 0x5a882b:c.instructions+=3;goto B5a882b;
case 0x5a882d:c.instructions+=2;goto B5a882d;
case 0x5a8830:c.instructions+=1;goto B5a8830;
case 0x5a8832:goto L5a8832;
case 0x5a8835:c.instructions+=3;goto B5a8835;
case 0x5a8837:c.instructions+=2;goto B5a8837;
case 0x5a883a:c.instructions+=1;goto B5a883a;
case 0x5a883c:goto L5a883c;
case 0x5a883f:c.instructions+=3;goto B5a883f;
case 0x5a8841:c.instructions+=2;goto B5a8841;
case 0x5a8844:c.instructions+=1;goto B5a8844;
case 0x5a8846:goto L5a8846;
case 0x5a8849:c.instructions+=4;goto B5a8849;
case 0x5a884b:c.instructions+=3;goto B5a884b;
case 0x5a884e:c.instructions+=2;goto B5a884e;
case 0x5a8858:c.instructions+=1;goto B5a8858;
case 0x5a885a:goto L5a885a;
case 0x5a885d:goto L5a885d;
case 0x5a8867:goto L5a8867;
case 0x5a886d:c.instructions+=4;goto B5a886d;
case 0x5a8873:c.instructions+=3;goto B5a8873;
case 0x5a8875:c.instructions+=2;goto B5a8875;
case 0x5a8878:c.instructions+=1;goto B5a8878;
case 0x5a887a:goto L5a887a;
case 0x5a887d:c.instructions+=3;goto B5a887d;
case 0x5a8881:c.instructions+=2;goto B5a8881;
case 0x5a8887:c.instructions+=1;goto B5a8887;
case 0x5a888a:goto L5a888a;
case 0x5a888d:c.instructions+=13;goto B5a888d;
case 0x5a888f:c.instructions+=12;goto B5a888f;
case 0x5a8892:c.instructions+=11;goto B5a8892;
case 0x5a8895:c.instructions+=10;goto B5a8895;
case 0x5a8897:c.instructions+=9;goto B5a8897;
case 0x5a8899:c.instructions+=8;goto B5a8899;
case 0x5a889c:c.instructions+=7;goto B5a889c;
case 0x5a88a0:c.instructions+=6;goto B5a88a0;
case 0x5a88a1:c.instructions+=5;goto B5a88a1;
case 0x5a88a4:c.instructions+=4;goto B5a88a4;
case 0x5a88a7:c.instructions+=3;goto B5a88a7;
case 0x5a88aa:c.instructions+=2;goto B5a88aa;
case 0x5a88ad:c.instructions+=1;goto B5a88ad;
case 0x5a88b2:goto L5a88b2;
case 0x5a88b8:c.instructions+=7;goto B5a88b8;
case 0x5a88be:c.instructions+=6;goto B5a88be;
case 0x5a88c1:c.instructions+=5;goto B5a88c1;
case 0x5a88c5:c.instructions+=4;goto B5a88c5;
case 0x5a88cb:c.instructions+=3;goto B5a88cb;
case 0x5a88cd:c.instructions+=2;goto B5a88cd;
case 0x5a88d0:c.instructions+=1;goto B5a88d0;
case 0x5a88d6:goto L5a88d6;
case 0x5a88dd:c.instructions+=2;goto B5a88dd;
case 0x5a88de:c.instructions+=1;goto B5a88de;
case 0x5a88e3:goto L5a88e3;
case 0x5a88e9:c.instructions+=5;goto B5a88e9;
case 0x5a88ec:c.instructions+=4;goto B5a88ec;
case 0x5a88ee:c.instructions+=3;goto B5a88ee;
case 0x5a88ef:c.instructions+=2;goto B5a88ef;
case 0x5a88f3:c.instructions+=1;goto B5a88f3;
case 0x5a88f8:goto L5a88f8;
case 0x5a88fe:c.instructions+=6;goto B5a88fe;
case 0x5a8901:c.instructions+=5;goto B5a8901;
case 0x5a8905:c.instructions+=4;goto B5a8905;
case 0x5a8909:c.instructions+=3;goto B5a8909;
case 0x5a890f:c.instructions+=2;goto B5a890f;
case 0x5a8912:c.instructions+=1;goto B5a8912;
case 0x5a8917:goto L5a8917;
case 0x5a891b:c.instructions+=3;goto B5a891b;
case 0x5a891f:c.instructions+=2;goto B5a891f;
case 0x5a8920:c.instructions+=1;goto B5a8920;
case 0x5a8925:goto L5a8925;
case 0x5a8927:c.instructions+=14;goto B5a8927;
case 0x5a892b:c.instructions+=13;goto B5a892b;
case 0x5a892d:c.instructions+=12;goto B5a892d;
case 0x5a892f:c.instructions+=11;goto B5a892f;
case 0x5a8936:c.instructions+=10;goto B5a8936;
case 0x5a893d:c.instructions+=9;goto B5a893d;
case 0x5a8944:c.instructions+=8;goto B5a8944;
case 0x5a894b:c.instructions+=7;goto B5a894b;
case 0x5a894c:c.instructions+=6;goto B5a894c;
case 0x5a8950:c.instructions+=5;goto B5a8950;
case 0x5a8957:c.instructions+=4;goto B5a8957;
case 0x5a8958:c.instructions+=3;goto B5a8958;
case 0x5a895c:c.instructions+=2;goto B5a895c;
case 0x5a895d:c.instructions+=1;goto B5a895d;
case 0x5a8962:goto L5a8962;
case 0x5a8965:goto L5a8965;
case 0x5a8968:c.instructions+=11;goto B5a8968;
case 0x5a896a:c.instructions+=10;goto B5a896a;
case 0x5a896e:c.instructions+=9;goto B5a896e;
case 0x5a8975:c.instructions+=8;goto B5a8975;
case 0x5a8978:c.instructions+=7;goto B5a8978;
case 0x5a8979:c.instructions+=6;goto B5a8979;
case 0x5a897c:c.instructions+=5;goto B5a897c;
case 0x5a8983:c.instructions+=4;goto B5a8983;
case 0x5a8984:c.instructions+=3;goto B5a8984;
case 0x5a898b:c.instructions+=2;goto B5a898b;
case 0x5a8996:c.instructions+=1;goto B5a8996;
case 0x5a899b:goto L5a899b;
case 0x5a89a1:c.instructions+=4;goto B5a89a1;
case 0x5a89a3:c.instructions+=3;goto B5a89a3;
case 0x5a89a6:c.instructions+=2;goto B5a89a6;
case 0x5a89a8:c.instructions+=1;goto B5a89a8;
case 0x5a89aa:goto L5a89aa;
case 0x5a89b0:c.instructions+=9;goto B5a89b0;
case 0x5a89b3:c.instructions+=8;goto B5a89b3;
case 0x5a89b6:c.instructions+=7;goto B5a89b6;
case 0x5a89b8:c.instructions+=6;goto B5a89b8;
case 0x5a89b9:c.instructions+=5;goto B5a89b9;
case 0x5a89bd:c.instructions+=4;goto B5a89bd;
case 0x5a89be:c.instructions+=3;goto B5a89be;
case 0x5a89c2:c.instructions+=2;goto B5a89c2;
case 0x5a89c3:c.instructions+=1;goto B5a89c3;
case 0x5a89c8:goto L5a89c8;
case 0x5a89cb:goto L5a89cb;
case 0x5a89cf:c.instructions+=3;goto B5a89cf;
case 0x5a89d0:c.instructions+=2;goto B5a89d0;
case 0x5a89d6:c.instructions+=1;goto B5a89d6;
case 0x5a89db:goto L5a89db;
case 0x5a89e1:c.instructions+=6;goto B5a89e1;
case 0x5a89e2:c.instructions+=5;goto B5a89e2;
case 0x5a89e5:c.instructions+=4;goto B5a89e5;
case 0x5a89e6:c.instructions+=3;goto B5a89e6;
case 0x5a89ed:c.instructions+=2;goto B5a89ed;
case 0x5a89ee:c.instructions+=1;goto B5a89ee;
case 0x5a89f3:goto L5a89f3;
case 0x5a89f9:c.instructions+=7;goto B5a89f9;
case 0x5a8a00:c.instructions+=6;goto B5a8a00;
case 0x5a8a01:c.instructions+=5;goto B5a8a01;
case 0x5a8a07:c.instructions+=4;goto B5a8a07;
case 0x5a8a08:c.instructions+=3;goto B5a8a08;
case 0x5a8a0c:c.instructions+=2;goto B5a8a0c;
case 0x5a8a0d:c.instructions+=1;goto B5a8a0d;
case 0x5a8a12:goto L5a8a12;
case 0x5a8a16:c.instructions+=26;goto B5a8a16;
case 0x5a8a1c:c.instructions+=25;goto B5a8a1c;
case 0x5a8a22:c.instructions+=24;goto B5a8a22;
case 0x5a8a27:c.instructions+=23;goto B5a8a27;
case 0x5a8a2a:c.instructions+=22;goto B5a8a2a;
case 0x5a8a2e:c.instructions+=21;goto B5a8a2e;
case 0x5a8a32:c.instructions+=20;goto B5a8a32;
case 0x5a8a35:c.instructions+=19;goto B5a8a35;
case 0x5a8a3b:c.instructions+=18;goto B5a8a3b;
case 0x5a8a3f:c.instructions+=17;goto B5a8a3f;
case 0x5a8a44:c.instructions+=16;goto B5a8a44;
case 0x5a8a45:c.instructions+=15;goto B5a8a45;
case 0x5a8a49:c.instructions+=14;goto B5a8a49;
case 0x5a8a4b:c.instructions+=13;goto B5a8a4b;
case 0x5a8a52:c.instructions+=12;goto B5a8a52;
case 0x5a8a59:c.instructions+=11;goto B5a8a59;
case 0x5a8a5d:c.instructions+=10;goto B5a8a5d;
case 0x5a8a5f:c.instructions+=9;goto B5a8a5f;
case 0x5a8a61:c.instructions+=8;goto B5a8a61;
case 0x5a8a65:c.instructions+=7;goto B5a8a65;
case 0x5a8a68:c.instructions+=6;goto B5a8a68;
case 0x5a8a6b:c.instructions+=5;goto B5a8a6b;
case 0x5a8a71:c.instructions+=4;goto B5a8a71;
case 0x5a8a76:c.instructions+=3;goto B5a8a76;
case 0x5a8a77:c.instructions+=2;goto B5a8a77;
case 0x5a8a78:c.instructions+=1;goto B5a8a78;
case 0x5a8a7d:goto L5a8a7d;
case 0x5a8a83:c.instructions+=4;goto B5a8a83;
case 0x5a8a86:c.instructions+=3;goto B5a8a86;
case 0x5a8a8a:c.instructions+=2;goto B5a8a8a;
case 0x5a8a8b:c.instructions+=1;goto B5a8a8b;
case 0x5a8a90:goto L5a8a90;
case 0x5a8a96:c.instructions+=1;goto B5a8a96;
case 0x5a8a98:goto L5a8a98;
case 0x5a8a9b:c.instructions+=4;goto B5a8a9b;
case 0x5a8aa1:c.instructions+=3;goto B5a8aa1;
case 0x5a8aa3:c.instructions+=2;goto B5a8aa3;
case 0x5a8aa6:c.instructions+=1;goto B5a8aa6;
case 0x5a8aa8:goto L5a8aa8;
case 0x5a8aab:c.instructions+=1;goto B5a8aab;
case 0x5a8aad:goto L5a8aad;
case 0x5a8ab3:goto L5a8ab3;
case 0x5a8ab6:c.instructions+=8;goto B5a8ab6;
case 0x5a8ab8:c.instructions+=7;goto B5a8ab8;
case 0x5a8abe:c.instructions+=6;goto B5a8abe;
case 0x5a8ac1:c.instructions+=5;goto B5a8ac1;
case 0x5a8ac4:c.instructions+=4;goto B5a8ac4;
case 0x5a8aca:c.instructions+=3;goto B5a8aca;
case 0x5a8acc:c.instructions+=2;goto B5a8acc;
case 0x5a8acf:c.instructions+=1;goto B5a8acf;
case 0x5a8ad1:goto L5a8ad1;
case 0x5a8ad3:c.instructions+=1;goto B5a8ad3;
case 0x5a8ad5:goto L5a8ad5;
case 0x5a8ada:goto L5a8ada;
case 0x5a8ade:c.instructions+=16;goto B5a8ade;
case 0x5a8ae1:c.instructions+=15;goto B5a8ae1;
case 0x5a8ae4:c.instructions+=14;goto B5a8ae4;
case 0x5a8ae6:c.instructions+=13;goto B5a8ae6;
case 0x5a8ae9:c.instructions+=12;goto B5a8ae9;
case 0x5a8aeb:c.instructions+=11;goto B5a8aeb;
case 0x5a8af1:c.instructions+=10;goto B5a8af1;
case 0x5a8af4:c.instructions+=9;goto B5a8af4;
case 0x5a8af7:c.instructions+=8;goto B5a8af7;
case 0x5a8afa:c.instructions+=7;goto B5a8afa;
case 0x5a8afd:c.instructions+=6;goto B5a8afd;
case 0x5a8aff:c.instructions+=5;goto B5a8aff;
case 0x5a8b02:c.instructions+=4;goto B5a8b02;
case 0x5a8b08:c.instructions+=3;goto B5a8b08;
case 0x5a8b0a:c.instructions+=2;goto B5a8b0a;
case 0x5a8b0d:c.instructions+=1;goto B5a8b0d;
case 0x5a8b0f:goto L5a8b0f;
case 0x5a8b12:goto L5a8b12;
case 0x5a8b13:c.instructions+=5;goto B5a8b13;
case 0x5a8b14:c.instructions+=4;goto B5a8b14;
case 0x5a8b15:c.instructions+=3;goto B5a8b15;
case 0x5a8b17:c.instructions+=2;goto B5a8b17;
case 0x5a8b18:c.instructions+=1;goto B5a8b18;
case 0x5a8b20:goto L5a8b20;
case 0x5a8b21:c.instructions+=4;goto B5a8b21;
case 0x5a8b27:c.instructions+=3;goto B5a8b27;
case 0x5a8b28:c.instructions+=2;goto B5a8b28;
case 0x5a8b2d:c.instructions+=1;goto B5a8b2d;
case 0x5a8b32:goto L5a8b32;
case 0x5a8b34:c.instructions+=1;goto B5a8b34;
case 0x5a8b36:goto L5a8b36;
case 0x5a8b3a:c.instructions+=1;goto B5a8b3a;
case 0x5a8b40:goto L5a8b40;
case 0x5a8b44:c.instructions+=2;goto B5a8b44;
case 0x5a8b46:c.instructions+=1;goto B5a8b46;
case 0x5a8b48:goto L5a8b48;
case 0x5a8b4c:c.instructions+=3;goto B5a8b4c;
case 0x5a8b4e:c.instructions+=2;goto B5a8b4e;
case 0x5a8b50:c.instructions+=1;goto B5a8b50;
case 0x5a8b52:goto L5a8b52;
case 0x5a8b54:c.instructions+=2;goto B5a8b54;
case 0x5a8b56:c.instructions+=1;goto B5a8b56;
case 0x5a8b58:goto L5a8b58;
case 0x5a8b59:c.instructions+=3;goto B5a8b59;
case 0x5a8b5b:c.instructions+=2;goto B5a8b5b;
case 0x5a8b5c:c.instructions+=1;goto B5a8b5c;
case 0x5a8b5d:goto L5a8b5d;
case 0x5a8b61:c.instructions+=6;goto B5a8b61;
case 0x5a8b63:c.instructions+=5;goto B5a8b63;
case 0x5a8b66:c.instructions+=4;goto B5a8b66;
case 0x5a8b67:c.instructions+=3;goto B5a8b67;
case 0x5a8b6b:c.instructions+=2;goto B5a8b6b;
case 0x5a8b6c:c.instructions+=1;goto B5a8b6c;
case 0x5a8b70:goto L5a8b70;
case 0x5a8b71:c.instructions+=6;goto B5a8b71;
case 0x5a8b72:c.instructions+=5;goto B5a8b72;
case 0x5a8b73:c.instructions+=4;goto B5a8b73;
case 0x5a8b74:c.instructions+=3;goto B5a8b74;
case 0x5a8b7a:c.instructions+=2;goto B5a8b7a;
case 0x5a8b7f:c.instructions+=1;goto B5a8b7f;
case 0x5a8b84:goto L5a8b84;
case 0x5a8b86:c.instructions+=2;goto B5a8b86;
case 0x5a8b88:c.instructions+=1;goto B5a8b88;
case 0x5a8b8a:goto L5a8b8a;
case 0x5a8b8e:c.instructions+=1;goto B5a8b8e;
case 0x5a8b90:goto L5a8b90;
case 0x5a8b94:c.instructions+=14;goto B5a8b94;
case 0x5a8b96:c.instructions+=13;goto B5a8b96;
case 0x5a8b98:c.instructions+=12;goto B5a8b98;
case 0x5a8b9b:c.instructions+=11;goto B5a8b9b;
case 0x5a8ba0:c.instructions+=10;goto B5a8ba0;
case 0x5a8ba2:c.instructions+=9;goto B5a8ba2;
case 0x5a8ba4:c.instructions+=8;goto B5a8ba4;
case 0x5a8ba7:c.instructions+=7;goto B5a8ba7;
case 0x5a8ba9:c.instructions+=6;goto B5a8ba9;
case 0x5a8bac:c.instructions+=5;goto B5a8bac;
case 0x5a8bae:c.instructions+=4;goto B5a8bae;
case 0x5a8bb0:c.instructions+=3;goto B5a8bb0;
case 0x5a8bb2:c.instructions+=2;goto B5a8bb2;
case 0x5a8bb4:c.instructions+=1;goto B5a8bb4;
case 0x5a8bb6:goto L5a8bb6;
case 0x5a8bba:c.instructions+=3;goto B5a8bba;
case 0x5a8bbc:c.instructions+=2;goto B5a8bbc;
case 0x5a8bbe:c.instructions+=1;goto B5a8bbe;
case 0x5a8bc0:goto L5a8bc0;
case 0x5a8bc2:c.instructions+=2;goto B5a8bc2;
case 0x5a8bc4:c.instructions+=1;goto B5a8bc4;
case 0x5a8bc6:goto L5a8bc6;
case 0x5a8bc9:goto L5a8bc9;
case 0x5a8bca:c.instructions+=4;goto B5a8bca;
case 0x5a8bcb:c.instructions+=3;goto B5a8bcb;
case 0x5a8bcc:c.instructions+=2;goto B5a8bcc;
case 0x5a8bcd:c.instructions+=1;goto B5a8bcd;
case 0x5a8bd0:goto L5a8bd0;
case 0x5a8bd4:c.instructions+=4;goto B5a8bd4;
case 0x5a8bd6:c.instructions+=3;goto B5a8bd6;
case 0x5a8bdb:c.instructions+=2;goto B5a8bdb;
case 0x5a8bdc:c.instructions+=1;goto B5a8bdc;
case 0x5a8bde:goto L5a8bde;
case 0x5a8be1:c.instructions+=9;goto B5a8be1;
case 0x5a8be4:c.instructions+=8;goto B5a8be4;
case 0x5a8be6:c.instructions+=7;goto B5a8be6;
case 0x5a8be9:c.instructions+=6;goto B5a8be9;
case 0x5a8beb:c.instructions+=5;goto B5a8beb;
case 0x5a8bef:c.instructions+=4;goto B5a8bef;
case 0x5a8bf2:c.instructions+=3;goto B5a8bf2;
case 0x5a8bf5:c.instructions+=2;goto B5a8bf5;
case 0x5a8bf7:c.instructions+=1;goto B5a8bf7;
case 0x5a8bf9:goto L5a8bf9;
case 0x5a8bfb:c.instructions+=1;goto B5a8bfb;
case 0x5a8c00:goto L5a8c00;
case 0x5a8c02:c.instructions+=6;goto B5a8c02;
case 0x5a8c05:c.instructions+=5;goto B5a8c05;
case 0x5a8c0a:c.instructions+=4;goto B5a8c0a;
case 0x5a8c0b:c.instructions+=3;goto B5a8c0b;
case 0x5a8c0d:c.instructions+=2;goto B5a8c0d;
case 0x5a8c10:c.instructions+=1;goto B5a8c10;
case 0x5a8c12:goto L5a8c12;
case 0x5a8c17:c.instructions+=2;goto B5a8c17;
case 0x5a8c18:c.instructions+=1;goto B5a8c18;
case 0x5a8c19:goto L5a8c19;
case 0x5a8c1e:c.instructions+=1;goto B5a8c1e;
case 0x5a8c20:goto L5a8c20;
case 0x5a8c25:c.instructions+=4;goto B5a8c25;
case 0x5a8c28:c.instructions+=3;goto B5a8c28;
case 0x5a8c2b:c.instructions+=2;goto B5a8c2b;
case 0x5a8c2d:c.instructions+=1;goto B5a8c2d;
case 0x5a8c2f:goto L5a8c2f;
case 0x5a8c31:c.instructions+=1;goto B5a8c31;
case 0x5a8c36:goto L5a8c36;
case 0x5a8c3a:c.instructions+=12;goto B5a8c3a;
case 0x5a8c40:c.instructions+=11;goto B5a8c40;
case 0x5a8c42:c.instructions+=10;goto B5a8c42;
case 0x5a8c45:c.instructions+=9;goto B5a8c45;
case 0x5a8c47:c.instructions+=8;goto B5a8c47;
case 0x5a8c4a:c.instructions+=7;goto B5a8c4a;
case 0x5a8c4e:c.instructions+=6;goto B5a8c4e;
case 0x5a8c55:c.instructions+=5;goto B5a8c55;
case 0x5a8c5c:c.instructions+=4;goto B5a8c5c;
case 0x5a8c60:c.instructions+=3;goto B5a8c60;
case 0x5a8c61:c.instructions+=2;goto B5a8c61;
case 0x5a8c66:c.instructions+=1;goto B5a8c66;
case 0x5a8c6b:goto L5a8c6b;
case 0x5a8c70:c.instructions+=2;goto B5a8c70;
case 0x5a8c71:c.instructions+=1;goto B5a8c71;
case 0x5a8c72:goto L5a8c72;
case 0x5a8c74:c.instructions+=2;goto B5a8c74;
case 0x5a8c75:c.instructions+=1;goto B5a8c75;
case 0x5a8c80:goto L5a8c80;
case 0x5a8c81:c.instructions+=6;goto B5a8c81;
case 0x5a8c82:c.instructions+=5;goto B5a8c82;
case 0x5a8c84:c.instructions+=4;goto B5a8c84;
case 0x5a8c8a:c.instructions+=3;goto B5a8c8a;
case 0x5a8c8c:c.instructions+=2;goto B5a8c8c;
case 0x5a8c90:c.instructions+=1;goto B5a8c90;
case 0x5a8c96:goto L5a8c96;
case 0x5a8c98:c.instructions+=4;goto B5a8c98;
case 0x5a8c99:c.instructions+=3;goto B5a8c99;
case 0x5a8c9a:c.instructions+=2;goto B5a8c9a;
case 0x5a8c9b:c.instructions+=1;goto B5a8c9b;
case 0x5a8c9e:goto L5a8c9e;
case 0x5a8ca4:c.instructions+=4;goto B5a8ca4;
case 0x5a8caa:c.instructions+=3;goto B5a8caa;
case 0x5a8cac:c.instructions+=2;goto B5a8cac;
case 0x5a8cae:c.instructions+=1;goto B5a8cae;
case 0x5a8cb0:goto L5a8cb0;
case 0x5a8cb3:c.instructions+=5;goto B5a8cb3;
case 0x5a8cb7:c.instructions+=4;goto B5a8cb7;
case 0x5a8cb8:c.instructions+=3;goto B5a8cb8;
case 0x5a8cbb:c.instructions+=2;goto B5a8cbb;
case 0x5a8cbc:c.instructions+=1;goto B5a8cbc;
case 0x5a8cc1:goto L5a8cc1;
case 0x5a8cc4:c.instructions+=10;goto B5a8cc4;
case 0x5a8cc7:c.instructions+=9;goto B5a8cc7;
case 0x5a8cc9:c.instructions+=8;goto B5a8cc9;
case 0x5a8ccf:c.instructions+=7;goto B5a8ccf;
case 0x5a8cd5:c.instructions+=6;goto B5a8cd5;
case 0x5a8cdf:c.instructions+=5;goto B5a8cdf;
case 0x5a8ce5:c.instructions+=4;goto B5a8ce5;
case 0x5a8ce8:c.instructions+=3;goto B5a8ce8;
case 0x5a8ceb:c.instructions+=2;goto B5a8ceb;
case 0x5a8ced:c.instructions+=1;goto B5a8ced;
case 0x5a8cef:goto L5a8cef;
case 0x5a8cf3:goto L5a8cf3;
case 0x5a8cfa:c.instructions+=1;goto B5a8cfa;
case 0x5a8cfc:goto L5a8cfc;
case 0x5a8d02:c.instructions+=3;goto B5a8d02;
case 0x5a8d08:c.instructions+=2;goto B5a8d08;
case 0x5a8d0a:c.instructions+=1;goto B5a8d0a;
case 0x5a8d0c:goto L5a8d0c;
case 0x5a8d10:goto L5a8d10;
case 0x5a8d13:c.instructions+=11;goto B5a8d13;
case 0x5a8d16:c.instructions+=10;goto B5a8d16;
case 0x5a8d19:c.instructions+=9;goto B5a8d19;
case 0x5a8d1b:c.instructions+=8;goto B5a8d1b;
case 0x5a8d20:c.instructions+=7;goto B5a8d20;
case 0x5a8d23:c.instructions+=6;goto B5a8d23;
case 0x5a8d25:c.instructions+=5;goto B5a8d25;
case 0x5a8d2c:c.instructions+=4;goto B5a8d2c;
case 0x5a8d2f:c.instructions+=3;goto B5a8d2f;
case 0x5a8d31:c.instructions+=2;goto B5a8d31;
case 0x5a8d33:c.instructions+=1;goto B5a8d33;
case 0x5a8d35:goto L5a8d35;
case 0x5a8d3c:goto L5a8d3c;
case 0x5a8d3d:c.instructions+=2;goto B5a8d3d;
case 0x5a8d3e:c.instructions+=1;goto B5a8d3e;
case 0x5a8d3f:goto L5a8d3f;
case 0x5a8d40:c.instructions+=2;goto B5a8d40;
case 0x5a8d41:c.instructions+=1;goto B5a8d41;
case 0x5a8d50:goto L5a8d50;
case 0x5a8d51:c.instructions+=7;goto B5a8d51;
case 0x5a8d52:c.instructions+=6;goto B5a8d52;
case 0x5a8d54:c.instructions+=5;goto B5a8d54;
case 0x5a8d5a:c.instructions+=4;goto B5a8d5a;
case 0x5a8d5b:c.instructions+=3;goto B5a8d5b;
case 0x5a8d61:c.instructions+=2;goto B5a8d61;
case 0x5a8d63:c.instructions+=1;goto B5a8d63;
case 0x5a8d65:goto L5a8d65;
case 0x5a8d68:c.instructions+=3;goto B5a8d68;
case 0x5a8d69:c.instructions+=2;goto B5a8d69;
case 0x5a8d6e:c.instructions+=1;goto B5a8d6e;
case 0x5a8d73:goto L5a8d73;
case 0x5a8d75:c.instructions+=2;goto B5a8d75;
case 0x5a8d77:c.instructions+=1;goto B5a8d77;
case 0x5a8d79:goto L5a8d79;
case 0x5a8d7a:c.instructions+=4;goto B5a8d7a;
case 0x5a8d7b:c.instructions+=3;goto B5a8d7b;
case 0x5a8d82:c.instructions+=2;goto B5a8d82;
case 0x5a8d83:c.instructions+=1;goto B5a8d83;
case 0x5a8d90:goto L5a8d90;
case 0x5a8d91:c.instructions+=7;goto B5a8d91;
case 0x5a8d92:c.instructions+=6;goto B5a8d92;
case 0x5a8d94:c.instructions+=5;goto B5a8d94;
case 0x5a8d97:c.instructions+=4;goto B5a8d97;
case 0x5a8d9a:c.instructions+=3;goto B5a8d9a;
case 0x5a8d9c:c.instructions+=2;goto B5a8d9c;
case 0x5a8d9e:c.instructions+=1;goto B5a8d9e;
case 0x5a8da0:goto L5a8da0;
case 0x5a8da6:c.instructions+=8;goto B5a8da6;
case 0x5a8da9:c.instructions+=7;goto B5a8da9;
case 0x5a8dae:c.instructions+=6;goto B5a8dae;
case 0x5a8daf:c.instructions+=5;goto B5a8daf;
case 0x5a8db5:c.instructions+=4;goto B5a8db5;
case 0x5a8dba:c.instructions+=3;goto B5a8dba;
case 0x5a8dbb:c.instructions+=2;goto B5a8dbb;
case 0x5a8dbe:c.instructions+=1;goto B5a8dbe;
case 0x5a8dc3:goto L5a8dc3;
case 0x5a8dc9:c.instructions+=11;goto B5a8dc9;
case 0x5a8dca:c.instructions+=10;goto B5a8dca;
case 0x5a8dd0:c.instructions+=9;goto B5a8dd0;
case 0x5a8dd2:c.instructions+=8;goto B5a8dd2;
case 0x5a8dd4:c.instructions+=7;goto B5a8dd4;
case 0x5a8dd8:c.instructions+=6;goto B5a8dd8;
case 0x5a8ddc:c.instructions+=5;goto B5a8ddc;
case 0x5a8de2:c.instructions+=4;goto B5a8de2;
case 0x5a8de8:c.instructions+=3;goto B5a8de8;
case 0x5a8dea:c.instructions+=2;goto B5a8dea;
case 0x5a8ded:c.instructions+=1;goto B5a8ded;
case 0x5a8def:goto L5a8def;
case 0x5a8df2:c.instructions+=1;goto B5a8df2;
case 0x5a8df4:goto L5a8df4;
case 0x5a8df5:c.instructions+=2;goto B5a8df5;
case 0x5a8df7:c.instructions+=1;goto B5a8df7;
case 0x5a8dfc:goto L5a8dfc;
case 0x5a8dff:c.instructions+=7;goto B5a8dff;
case 0x5a8e03:c.instructions+=6;goto B5a8e03;
case 0x5a8e07:c.instructions+=5;goto B5a8e07;
case 0x5a8e0d:c.instructions+=4;goto B5a8e0d;
case 0x5a8e13:c.instructions+=3;goto B5a8e13;
case 0x5a8e15:c.instructions+=2;goto B5a8e15;
case 0x5a8e18:c.instructions+=1;goto B5a8e18;
case 0x5a8e1a:goto L5a8e1a;
case 0x5a8e1d:c.instructions+=3;goto B5a8e1d;
case 0x5a8e23:c.instructions+=2;goto B5a8e23;
case 0x5a8e24:c.instructions+=1;goto B5a8e24;
case 0x5a8e29:goto L5a8e29;
case 0x5a8e2f:c.instructions+=4;goto B5a8e2f;
case 0x5a8e32:c.instructions+=3;goto B5a8e32;
case 0x5a8e34:c.instructions+=2;goto B5a8e34;
case 0x5a8e37:c.instructions+=1;goto B5a8e37;
case 0x5a8e39:goto L5a8e39;
case 0x5a8e3f:c.instructions+=2;goto B5a8e3f;
case 0x5a8e40:c.instructions+=1;goto B5a8e40;
case 0x5a8e45:goto L5a8e45;
case 0x5a8e4b:c.instructions+=4;goto B5a8e4b;
case 0x5a8e4e:c.instructions+=3;goto B5a8e4e;
case 0x5a8e50:c.instructions+=2;goto B5a8e50;
case 0x5a8e53:c.instructions+=1;goto B5a8e53;
case 0x5a8e55:goto L5a8e55;
case 0x5a8e5a:c.instructions+=2;goto B5a8e5a;
case 0x5a8e5c:c.instructions+=1;goto B5a8e5c;
case 0x5a8e61:goto L5a8e61;
case 0x5a8e62:c.instructions+=3;goto B5a8e62;
case 0x5a8e63:c.instructions+=2;goto B5a8e63;
case 0x5a8e64:c.instructions+=1;goto B5a8e64;
case 0x5a8e70:goto L5a8e70;
case 0x5a8e71:c.instructions+=7;goto B5a8e71;
case 0x5a8e73:c.instructions+=6;goto B5a8e73;
case 0x5a8e76:c.instructions+=5;goto B5a8e76;
case 0x5a8e79:c.instructions+=4;goto B5a8e79;
case 0x5a8e7a:c.instructions+=3;goto B5a8e7a;
case 0x5a8e7b:c.instructions+=2;goto B5a8e7b;
case 0x5a8e7d:c.instructions+=1;goto B5a8e7d;
case 0x5a8e82:goto L5a8e82;
case 0x5a8e88:c.instructions+=3;goto B5a8e88;
case 0x5a8e8a:c.instructions+=2;goto B5a8e8a;
case 0x5a8e8c:c.instructions+=1;goto B5a8e8c;
case 0x5a8e91:goto L5a8e91;
case 0x5a8e97:c.instructions+=2;goto B5a8e97;
case 0x5a8e99:c.instructions+=1;goto B5a8e99;
case 0x5a8e9f:goto L5a8e9f;
case 0x5a8ea0:c.instructions+=1;goto B5a8ea0;
case 0x5a8ea2:goto L5a8ea2;
case 0x5a8ea3:c.instructions+=1;goto B5a8ea3;
case 0x5a8ea9:goto L5a8ea9;
case 0x5a8eaf:c.instructions+=14;goto B5a8eaf;
case 0x5a8eb2:c.instructions+=13;goto B5a8eb2;
case 0x5a8eb4:c.instructions+=12;goto B5a8eb4;
case 0x5a8eb7:c.instructions+=11;goto B5a8eb7;
case 0x5a8eba:c.instructions+=10;goto B5a8eba;
case 0x5a8ec0:c.instructions+=9;goto B5a8ec0;
case 0x5a8ec5:c.instructions+=8;goto B5a8ec5;
case 0x5a8ec7:c.instructions+=7;goto B5a8ec7;
case 0x5a8eca:c.instructions+=6;goto B5a8eca;
case 0x5a8ecd:c.instructions+=5;goto B5a8ecd;
case 0x5a8ed3:c.instructions+=4;goto B5a8ed3;
case 0x5a8ed9:c.instructions+=3;goto B5a8ed9;
case 0x5a8edf:c.instructions+=2;goto B5a8edf;
case 0x5a8ee4:c.instructions+=1;goto B5a8ee4;
case 0x5a8ee9:goto L5a8ee9;
case 0x5a8eef:c.instructions+=30;goto B5a8eef;
case 0x5a8ef5:c.instructions+=29;goto B5a8ef5;
case 0x5a8ef8:c.instructions+=28;goto B5a8ef8;
case 0x5a8efb:c.instructions+=27;goto B5a8efb;
case 0x5a8f01:c.instructions+=26;goto B5a8f01;
case 0x5a8f04:c.instructions+=25;goto B5a8f04;
case 0x5a8f0a:c.instructions+=24;goto B5a8f0a;
case 0x5a8f0e:c.instructions+=23;goto B5a8f0e;
case 0x5a8f12:c.instructions+=22;goto B5a8f12;
case 0x5a8f15:c.instructions+=21;goto B5a8f15;
case 0x5a8f17:c.instructions+=20;goto B5a8f17;
case 0x5a8f1a:c.instructions+=19;goto B5a8f1a;
case 0x5a8f1d:c.instructions+=18;goto B5a8f1d;
case 0x5a8f23:c.instructions+=17;goto B5a8f23;
case 0x5a8f29:c.instructions+=16;goto B5a8f29;
case 0x5a8f2f:c.instructions+=15;goto B5a8f2f;
case 0x5a8f35:c.instructions+=14;goto B5a8f35;
case 0x5a8f3b:c.instructions+=13;goto B5a8f3b;
case 0x5a8f41:c.instructions+=12;goto B5a8f41;
case 0x5a8f47:c.instructions+=11;goto B5a8f47;
case 0x5a8f4b:c.instructions+=10;goto B5a8f4b;
case 0x5a8f4f:c.instructions+=9;goto B5a8f4f;
case 0x5a8f51:c.instructions+=8;goto B5a8f51;
case 0x5a8f57:c.instructions+=7;goto B5a8f57;
case 0x5a8f5d:c.instructions+=6;goto B5a8f5d;
case 0x5a8f62:c.instructions+=5;goto B5a8f62;
case 0x5a8f68:c.instructions+=4;goto B5a8f68;
case 0x5a8f6e:c.instructions+=3;goto B5a8f6e;
case 0x5a8f78:c.instructions+=2;goto B5a8f78;
case 0x5a8f7e:c.instructions+=1;goto B5a8f7e;
case 0x5a8f80:goto L5a8f80;
case 0x5a8f86:c.instructions+=2;goto B5a8f86;
case 0x5a8f90:c.instructions+=1;goto B5a8f90;
case 0x5a8f97:goto L5a8f97;
case 0x5a8f9d:c.instructions+=4;goto B5a8f9d;
case 0x5a8fa3:c.instructions+=3;goto B5a8fa3;
case 0x5a8fa5:c.instructions+=2;goto B5a8fa5;
case 0x5a8fa8:c.instructions+=1;goto B5a8fa8;
case 0x5a8faa:goto L5a8faa;
case 0x5a8fb0:c.instructions+=2;goto B5a8fb0;
case 0x5a8fb6:c.instructions+=1;goto B5a8fb6;
case 0x5a8fbc:goto L5a8fbc;
case 0x5a8fbe:c.instructions+=1;goto B5a8fbe;
case 0x5a8fc0:goto L5a8fc0;
case 0x5a8fc2:c.instructions+=1;goto B5a8fc2;
case 0x5a8fc7:goto L5a8fc7;
case 0x5a8fc8:c.instructions+=4;goto B5a8fc8;
case 0x5a8fc9:c.instructions+=3;goto B5a8fc9;
case 0x5a8fcb:c.instructions+=2;goto B5a8fcb;
case 0x5a8fcc:c.instructions+=1;goto B5a8fcc;
case 0x5a8fd0:goto L5a8fd0;
case 0x5a8fd1:c.instructions+=4;goto B5a8fd1;
case 0x5a8fd3:c.instructions+=3;goto B5a8fd3;
case 0x5a8fd5:c.instructions+=2;goto B5a8fd5;
case 0x5a8fd7:c.instructions+=1;goto B5a8fd7;
case 0x5a8fd9:goto L5a8fd9;
case 0x5a8fe0:goto L5a8fe0;
case 0x5a8fe2:c.instructions+=6;goto B5a8fe2;
case 0x5a8fe5:c.instructions+=5;goto B5a8fe5;
case 0x5a8fe7:c.instructions+=4;goto B5a8fe7;
case 0x5a8fea:c.instructions+=3;goto B5a8fea;
case 0x5a8ff0:c.instructions+=2;goto B5a8ff0;
case 0x5a8ff2:c.instructions+=1;goto B5a8ff2;
case 0x5a8ff4:goto L5a8ff4;
case 0x5a8ff6:c.instructions+=2;goto B5a8ff6;
case 0x5a8ff8:c.instructions+=1;goto B5a8ff8;
case 0x5a8ffa:goto L5a8ffa;
case 0x5a8ffc:c.instructions+=2;goto B5a8ffc;
case 0x5a8ffe:c.instructions+=1;goto B5a8ffe;
default:missing_instruction(c.pc);}
B5a8002:L5a8002:{c.instructions+=23;NFSU2_TR(0x5a8002);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a8004:{NFSU2_TR(0x5a8004);
{u32 ea_=u32(r4(R+24)+u32(308u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a800a:{NFSU2_TR(0x5a800a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5a800d:{NFSU2_TR(0x5a800d);
{u32 ea_=u32(r4(R+24)+u32(312u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a8013:{NFSU2_TR(0x5a8013);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a8019:{NFSU2_TR(0x5a8019);
{u32 ea_=u32(r4(R+24)+u32(292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a801f:{NFSU2_TR(0x5a801f);
{u32 ea_=u32(r4(R+24)+u32(296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a8025:{NFSU2_TR(0x5a8025);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a802b:{NFSU2_TR(0x5a802b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a802d:{NFSU2_TR(0x5a802d);
w4(R+0,u32(0x1ull));
}
B5a8032:{NFSU2_TR(0x5a8032);
{u32 ea_=u32(r4(R+24)+u32(324u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a8038:{NFSU2_TR(0x5a8038);
{u32 ea_=u32(r4(R+24)+u32(328u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a803e:{NFSU2_TR(0x5a803e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x200ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a8044:{NFSU2_TR(0x5a8044);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x204ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a804a:{NFSU2_TR(0x5a804a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a8050:{NFSU2_TR(0x5a8050);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x208ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a805a:{NFSU2_TR(0x5a805a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a8060:{NFSU2_TR(0x5a8060);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a8066:{NFSU2_TR(0x5a8066);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a806c:{NFSU2_TR(0x5a806c);
__builtin_memmove((R+4),gp(0x7fbef0),4);
}
B5a8072:{NFSU2_TR(0x5a8072);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a8078:{NFSU2_TR(0x5a8078);
__builtin_memmove((R+4),(R+24),4);
}
B5a807a:{NFSU2_TR(0x5a807a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a807full));
TAIL_STATIC(0x59b940u,59b);
}
B5a807f:L5a807f:{c.instructions+=4;NFSU2_TR(0x5a807f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B5a8082:{NFSU2_TR(0x5a8082);
u8 U[4];
w4(U+0,u32(0x7a20bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8087:{NFSU2_TR(0x5a8087);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8088:{NFSU2_TR(0x5a8088);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a808dull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5a808d:L5a808d:{c.instructions+=8;NFSU2_TR(0x5a808d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a8091:{NFSU2_TR(0x5a8091);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5a8094:{NFSU2_TR(0x5a8094);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a8095:{NFSU2_TR(0x5a8095);
__builtin_memmove((R+0),(R+24),4);
}
B5a8097:{NFSU2_TR(0x5a8097);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a8098:{NFSU2_TR(0x5a8098);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a809f:{NFSU2_TR(0x5a809f);
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
B5a80a2:{NFSU2_TR(0x5a80a2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a80b0:L5a80b0:{c.instructions+=2;NFSU2_TR(0x5a80b0);
w4(R+0,u32(0x20ull));
}
B5a80b5:{NFSU2_TR(0x5a80b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a80c0:L5a80c0:{c.instructions+=2;NFSU2_TR(0x5a80c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5a80c3:{NFSU2_TR(0x5a80c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a80d0:L5a80d0:{c.instructions+=2;NFSU2_TR(0x5a80d0);
w4(R+0,u32(0x7fc694ull));
}
B5a80d5:{NFSU2_TR(0x5a80d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a80e0:L5a80e0:{c.instructions+=4;NFSU2_TR(0x5a80e0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x20ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5a80e3:{NFSU2_TR(0x5a80e3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a80e4:{NFSU2_TR(0x5a80e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a80e8:{NFSU2_TR(0x5a80e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a80edull));
{goto L5a80f0;}
}
B5a80ed:L5a80ed:{c.instructions+=1;NFSU2_TR(0x5a80ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a80f0:L5a80f0:{c.instructions+=16;NFSU2_TR(0x5a80f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a80f1:{NFSU2_TR(0x5a80f1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a80f2:{NFSU2_TR(0x5a80f2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a80f6:{NFSU2_TR(0x5a80f6);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a80f9:{NFSU2_TR(0x5a80f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a80fb:{NFSU2_TR(0x5a80fb);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a80fe:{NFSU2_TR(0x5a80fe);
__builtin_memmove((R+24),(R+4),4);
}
B5a8100:{NFSU2_TR(0x5a8100);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5a8103:{NFSU2_TR(0x5a8103);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a8105:{NFSU2_TR(0x5a8105);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a8108:{NFSU2_TR(0x5a8108);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8109:{NFSU2_TR(0x5a8109);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5a810c:{NFSU2_TR(0x5a810c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a810d:{NFSU2_TR(0x5a810d);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a8110:{NFSU2_TR(0x5a8110);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5a8112:{NFSU2_TR(0x5a8112);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a8117ull));
TAIL_STATIC(0x4012b0u,401);
}
B5a8117:L5a8117:{c.instructions+=21;NFSU2_TR(0x5a8117);
{u32 ea_=u32(r4(R+28)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a811a:{NFSU2_TR(0x5a811a);
{u32 ea_=u32(r4(R+28)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a811d:{NFSU2_TR(0x5a811d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a8120:{NFSU2_TR(0x5a8120);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a8123:{NFSU2_TR(0x5a8123);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a8125:{NFSU2_TR(0x5a8125);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a8128:{NFSU2_TR(0x5a8128);
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
B5a812b:{NFSU2_TR(0x5a812b);
__builtin_memmove((R+0),(R+24),4);
}
B5a812d:{NFSU2_TR(0x5a812d);
{u32 ea_=u32(r4(R+24)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a8130:{NFSU2_TR(0x5a8130);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a8133:{NFSU2_TR(0x5a8133);
{u32 ea_=u32(r4(R+28)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a8136:{NFSU2_TR(0x5a8136);
{u32 ea_=u32(r4(R+28)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a8139:{NFSU2_TR(0x5a8139);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a813c:{NFSU2_TR(0x5a813c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a813e:{NFSU2_TR(0x5a813e);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a8141:{NFSU2_TR(0x5a8141);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a8144:{NFSU2_TR(0x5a8144);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a8147:{NFSU2_TR(0x5a8147);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a8148:{NFSU2_TR(0x5a8148);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a814b:{NFSU2_TR(0x5a814b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a814c:{NFSU2_TR(0x5a814c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a8150:L5a8150:{c.instructions+=2;NFSU2_TR(0x5a8150);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x20ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5a8153:{NFSU2_TR(0x5a8153);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a80f0u);}goto L5a80f0;}
}
B5a8160:L5a8160:{c.instructions+=39;NFSU2_TR(0x5a8160);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8162:{NFSU2_TR(0x5a8162);
u8 U[4];
w4(U+0,u32(0x778ba6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8167:{NFSU2_TR(0x5a8167);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a816d:{NFSU2_TR(0x5a816d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a816e:{NFSU2_TR(0x5a816e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a8175:{NFSU2_TR(0x5a8175);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8176:{NFSU2_TR(0x5a8176);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8177:{NFSU2_TR(0x5a8177);
__builtin_memmove((R+24),(R+4),4);
}
B5a8179:{NFSU2_TR(0x5a8179);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a817d:{NFSU2_TR(0x5a817d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5a817f:{NFSU2_TR(0x5a817f);
u8 U[4];
w4(U+0,u32(0x7a20e8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5a8185:{NFSU2_TR(0x5a8185);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a8189:{NFSU2_TR(0x5a8189);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a818f:{NFSU2_TR(0x5a818f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a8193:{NFSU2_TR(0x5a8193);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a8196:{NFSU2_TR(0x5a8196);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a819a:{NFSU2_TR(0x5a819a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a819d:{NFSU2_TR(0x5a819d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a81a1:{NFSU2_TR(0x5a81a1);
w4(R+4,u32(0x1ull));
}
B5a81a6:{NFSU2_TR(0x5a81a6);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x162ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5a81ad:{NFSU2_TR(0x5a81ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a81b3:{NFSU2_TR(0x5a81b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a81b9:{NFSU2_TR(0x5a81b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a81bf:{NFSU2_TR(0x5a81bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a81c5:{NFSU2_TR(0x5a81c5);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5a81c9:{NFSU2_TR(0x5a81c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a81cc:{NFSU2_TR(0x5a81cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a81d0:{NFSU2_TR(0x5a81d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a81d6:{NFSU2_TR(0x5a81d6);
w4(R+4,u32(0x3f800000ull));
}
B5a81db:{NFSU2_TR(0x5a81db);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B5a81de:{NFSU2_TR(0x5a81de);
u8 U[4];
w4(U+0,u32(0x7a1e90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a81e3:{NFSU2_TR(0x5a81e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a81e4:{NFSU2_TR(0x5a81e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a81e7:{NFSU2_TR(0x5a81e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a81ed:{NFSU2_TR(0x5a81ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a81f3:{NFSU2_TR(0x5a81f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x190ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a81f9:{NFSU2_TR(0x5a81f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x194ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a81ff:{NFSU2_TR(0x5a81ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a8205:{NFSU2_TR(0x5a8205);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a820aull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5a820a:L5a820a:{c.instructions+=7;NFSU2_TR(0x5a820a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a820e:{NFSU2_TR(0x5a820e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5a8211:{NFSU2_TR(0x5a8211);
__builtin_memmove((R+0),(R+24),4);
}
B5a8213:{NFSU2_TR(0x5a8213);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a8214:{NFSU2_TR(0x5a8214);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a821b:{NFSU2_TR(0x5a821b);
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
B5a821e:{NFSU2_TR(0x5a821e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a8230:L5a8230:{c.instructions+=2;NFSU2_TR(0x5a8230);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5a8233:{NFSU2_TR(0x5a8233);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a8240:L5a8240:{c.instructions+=6;NFSU2_TR(0x5a8240);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a8243:{NFSU2_TR(0x5a8243);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a8247:{NFSU2_TR(0x5a8247);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5a8249:{NFSU2_TR(0x5a8249);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a824c:{NFSU2_TR(0x5a824c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a824f:{NFSU2_TR(0x5a824f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a8260:L5a8260:{c.instructions+=6;NFSU2_TR(0x5a8260);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a8264:{NFSU2_TR(0x5a8264);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5a8266:{NFSU2_TR(0x5a8266);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a8269:{NFSU2_TR(0x5a8269);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a826c:{NFSU2_TR(0x5a826c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a826f:{NFSU2_TR(0x5a826f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a8280:L5a8280:{c.instructions+=19;NFSU2_TR(0x5a8280);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8281:{NFSU2_TR(0x5a8281);
__builtin_memmove((R+20),(R+16),4);
}
B5a8283:{NFSU2_TR(0x5a8283);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5a8286:{NFSU2_TR(0x5a8286);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x6cull))));
}
B5a8289:{NFSU2_TR(0x5a8289);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a828a:{NFSU2_TR(0x5a828a);
__builtin_memmove((R+24),(R+4),4);
}
B5a828c:{NFSU2_TR(0x5a828c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a828f:{NFSU2_TR(0x5a828f);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a8292:{NFSU2_TR(0x5a8292);
{u32 ea_=u32(r4(R+24)+u32(376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a8298:{NFSU2_TR(0x5a8298);
{u32 ea_=u32(u32(8374024u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a829e:{NFSU2_TR(0x5a829e);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a82a1:{NFSU2_TR(0x5a82a1);
{u32 ea_=u32(r4(R+24)+u32(380u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a82a7:{NFSU2_TR(0x5a82a7);
{u32 ea_=u32(u32(8374028u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a82ad:{NFSU2_TR(0x5a82ad);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a82b1:{NFSU2_TR(0x5a82b1);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a82b4:{NFSU2_TR(0x5a82b4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a82ba:{NFSU2_TR(0x5a82ba);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a82bc:{NFSU2_TR(0x5a82bc);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a82bf:{NFSU2_TR(0x5a82bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a82c3;}}
}
B5a82c1:L5a82c1:{c.instructions+=1;NFSU2_TR(0x5a82c1);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a82c3:L5a82c3:{c.instructions+=3;NFSU2_TR(0x5a82c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a82c9:{NFSU2_TR(0x5a82c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a82cb:{NFSU2_TR(0x5a82cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a82db;}}
}
B5a82cd:L5a82cd:{c.instructions+=3;NFSU2_TR(0x5a82cd);
{u32 ea_=u32(r4(R+24)+u32(264u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a82d3:{NFSU2_TR(0x5a82d3);
{u32 ea_=u32(r4(R+24)+u32(264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a82d9:{NFSU2_TR(0x5a82d9);
{goto L5a82dd;}
}
B5a82db:L5a82db:{c.instructions+=1;NFSU2_TR(0x5a82db);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a82dd:L5a82dd:{c.instructions+=6;NFSU2_TR(0x5a82dd);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a82e0:{NFSU2_TR(0x5a82e0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a82e6:{NFSU2_TR(0x5a82e6);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a82ea:{NFSU2_TR(0x5a82ea);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a82ec:{NFSU2_TR(0x5a82ec);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a82ef:{NFSU2_TR(0x5a82ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a82f3;}}
}
B5a82f1:L5a82f1:{c.instructions+=1;NFSU2_TR(0x5a82f1);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a82f3:L5a82f3:{c.instructions+=2;NFSU2_TR(0x5a82f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a82f5:{NFSU2_TR(0x5a82f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a8305;}}
}
B5a82f7:L5a82f7:{c.instructions+=3;NFSU2_TR(0x5a82f7);
{u32 ea_=u32(r4(R+24)+u32(264u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a82fd:{NFSU2_TR(0x5a82fd);
{u32 ea_=u32(r4(R+24)+u32(264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a8303:{NFSU2_TR(0x5a8303);
{goto L5a8307;}
}
B5a8305:L5a8305:{c.instructions+=1;NFSU2_TR(0x5a8305);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a8307:L5a8307:{c.instructions+=5;NFSU2_TR(0x5a8307);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5a830a:{NFSU2_TR(0x5a830a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a830b:{NFSU2_TR(0x5a830b);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5a830f:{NFSU2_TR(0x5a830f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8310:{NFSU2_TR(0x5a8310);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a8315ull));
TAIL_STATIC(0x43c9d0u,43c);
}
B5a8315:L5a8315:{c.instructions+=10;NFSU2_TR(0x5a8315);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5a831b:{NFSU2_TR(0x5a831b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a831c:{NFSU2_TR(0x5a831c);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a8320:{NFSU2_TR(0x5a8320);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8321:{NFSU2_TR(0x5a8321);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5a8325:{NFSU2_TR(0x5a8325);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8326:{NFSU2_TR(0x5a8326);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a832e:{NFSU2_TR(0x5a832e);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a8336:{NFSU2_TR(0x5a8336);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a833e:{NFSU2_TR(0x5a833e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a8343ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B5a8343:L5a8343:{c.instructions+=5;NFSU2_TR(0x5a8343);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a8347:{NFSU2_TR(0x5a8347);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a834b:{NFSU2_TR(0x5a834b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a834c:{NFSU2_TR(0x5a834c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a834d:{NFSU2_TR(0x5a834d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a8352ull));
TAIL_STATIC(0x43c570u,43c);
}
B5a8352:L5a8352:{c.instructions+=10;NFSU2_TR(0x5a8352);
w4(R+4,u32(r2(R+0)));
}
B5a8355:{NFSU2_TR(0x5a8355);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a8359:{NFSU2_TR(0x5a8359);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B5a835c:{NFSU2_TR(0x5a835c);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5a8360:{NFSU2_TR(0x5a8360);
{u32 ea_=u32(u32(7881280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a8366:{NFSU2_TR(0x5a8366);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a836a:{NFSU2_TR(0x5a836a);
{u32 ea_=u32(u32(8001416u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a8370:{NFSU2_TR(0x5a8370);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a8372:{NFSU2_TR(0x5a8372);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a8375:{NFSU2_TR(0x5a8375);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a8387;}}
}
B5a8377:L5a8377:{c.instructions+=4;NFSU2_TR(0x5a8377);
{u32 ea_=u32(u32(8001416u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a837d:{NFSU2_TR(0x5a837d);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B5a837f:{NFSU2_TR(0x5a837f);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5a8383:{NFSU2_TR(0x5a8383);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a8387:L5a8387:{c.instructions+=5;NFSU2_TR(0x5a8387);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a838b:{NFSU2_TR(0x5a838b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a8391:{NFSU2_TR(0x5a8391);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a8393:{NFSU2_TR(0x5a8393);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a8396:{NFSU2_TR(0x5a8396);
if(r1(R+514)){{goto L5a83c3;}}
}
B5a8398:L5a8398:{c.instructions+=7;NFSU2_TR(0x5a8398);
{u32 ea_=u32(u32(8001416u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a839e:{NFSU2_TR(0x5a839e);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a83a2:{NFSU2_TR(0x5a83a2);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a83a6:{NFSU2_TR(0x5a83a6);
{u32 ea_=u32(u32(8001416u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a83ac:{NFSU2_TR(0x5a83ac);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a83ae:{NFSU2_TR(0x5a83ae);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a83b1:{NFSU2_TR(0x5a83b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a83c3;}}
}
B5a83b3:L5a83b3:{c.instructions+=4;NFSU2_TR(0x5a83b3);
{u32 ea_=u32(u32(8001416u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a83b9:{NFSU2_TR(0x5a83b9);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B5a83bb:{NFSU2_TR(0x5a83bb);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5a83bf:{NFSU2_TR(0x5a83bf);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a83c3:L5a83c3:{c.instructions+=12;NFSU2_TR(0x5a83c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a83c6:{NFSU2_TR(0x5a83c6);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a83c9:{NFSU2_TR(0x5a83c9);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a83cc:{NFSU2_TR(0x5a83cc);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a83d0:{NFSU2_TR(0x5a83d0);
{u32 ea_=u32(r4(R+24)+u32(280u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a83d6:{NFSU2_TR(0x5a83d6);
{u32 ea_=u32(r4(R+24)+u32(364u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a83dc:{NFSU2_TR(0x5a83dc);
{u32 ea_=u32(u32(8374020u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a83e2:{NFSU2_TR(0x5a83e2);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a83e4:{NFSU2_TR(0x5a83e4);
{u32 ea_=u32(r4(R+24)+u32(280u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a83ea:{NFSU2_TR(0x5a83ea);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a83ec:{NFSU2_TR(0x5a83ec);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a83ef:{NFSU2_TR(0x5a83ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a8436;}}
}
B5a83f1:L5a83f1:{c.instructions+=5;NFSU2_TR(0x5a83f1);
{u32 ea_=u32(r4(R+24)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a83f7:{NFSU2_TR(0x5a83f7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a83fd:{NFSU2_TR(0x5a83fd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a83ff:{NFSU2_TR(0x5a83ff);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a8402:{NFSU2_TR(0x5a8402);
if(r1(R+514)){{goto L5a8436;}}
}
B5a8404:L5a8404:{c.instructions+=5;NFSU2_TR(0x5a8404);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a8408:{NFSU2_TR(0x5a8408);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a840e:{NFSU2_TR(0x5a840e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a8410:{NFSU2_TR(0x5a8410);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a8413:{NFSU2_TR(0x5a8413);
if(r1(R+514)){{goto L5a8436;}}
}
B5a8415:L5a8415:{c.instructions+=3;NFSU2_TR(0x5a8415);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a8418:{NFSU2_TR(0x5a8418);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a841a:{NFSU2_TR(0x5a841a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a8436;}}
}
B5a841c:L5a841c:{c.instructions+=5;NFSU2_TR(0x5a841c);
{u32 ea_=u32(r4(R+24)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a8422:{NFSU2_TR(0x5a8422);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a8424:{NFSU2_TR(0x5a8424);
{u32 ea_=u32(u32(8374020u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5a842a:{NFSU2_TR(0x5a842a);
{u32 ea_=u32(r4(R+24)+u32(264u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a8430:{NFSU2_TR(0x5a8430);
{u32 ea_=u32(r4(R+24)+u32(264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a8436:L5a8436:{c.instructions+=14;NFSU2_TR(0x5a8436);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a843a:{NFSU2_TR(0x5a843a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a8440:{NFSU2_TR(0x5a8440);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a8444:{NFSU2_TR(0x5a8444);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a8448:{NFSU2_TR(0x5a8448);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a844c:{NFSU2_TR(0x5a844c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a8450:{NFSU2_TR(0x5a8450);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a8454:{NFSU2_TR(0x5a8454);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a8458:{NFSU2_TR(0x5a8458);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5a845a:{NFSU2_TR(0x5a845a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a845e:{NFSU2_TR(0x5a845e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a8464:{NFSU2_TR(0x5a8464);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a8466:{NFSU2_TR(0x5a8466);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a8469:{NFSU2_TR(0x5a8469);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a8603;}}
}
B5a846f:L5a846f:{c.instructions+=5;NFSU2_TR(0x5a846f);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a8473:{NFSU2_TR(0x5a8473);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a8479:{NFSU2_TR(0x5a8479);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a847b:{NFSU2_TR(0x5a847b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a847e:{NFSU2_TR(0x5a847e);
if(r1(R+514)){{goto L5a8495;}}
}
B5a8480:L5a8480:{c.instructions+=5;NFSU2_TR(0x5a8480);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a8484:{NFSU2_TR(0x5a8484);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a848a:{NFSU2_TR(0x5a848a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a848c:{NFSU2_TR(0x5a848c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a848f:{NFSU2_TR(0x5a848f);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a8603;}}
}
B5a8495:L5a8495:{c.instructions+=12;NFSU2_TR(0x5a8495);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a849b:{NFSU2_TR(0x5a849b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a849e:{NFSU2_TR(0x5a849e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x98ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5a84a4:{NFSU2_TR(0x5a84a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a84a7:{NFSU2_TR(0x5a84a7);
{u32 ea_=u32(r4(R+4)+u32(8392456u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a84ad:{NFSU2_TR(0x5a84ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a84b3:{NFSU2_TR(0x5a84b3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a84b6:{NFSU2_TR(0x5a84b6);
{u32 ea_=u32(r4(R+24)+u32(388u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a84bc:{NFSU2_TR(0x5a84bc);
{u32 ea_=u32(r4(R+24)+u32(384u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a84c2:{NFSU2_TR(0x5a84c2);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a84c5:{NFSU2_TR(0x5a84c5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a84c9:{NFSU2_TR(0x5a84c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a84da;}}
}
B5a84cb:L5a84cb:{c.instructions+=2;NFSU2_TR(0x5a84cb);
__builtin_memmove((R+4),(R+24),4);
}
B5a84cd:{NFSU2_TR(0x5a84cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a84d2ull));
TAIL_STATIC(0x59d490u,59d);
}
B5a84d2:L5a84d2:{c.instructions+=2;NFSU2_TR(0x5a84d2);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a84d6:{NFSU2_TR(0x5a84d6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a84da:L5a84da:{c.instructions+=21;NFSU2_TR(0x5a84da);
{u32 ea_=u32(r4(R+24)+u32(356u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a84e0:{NFSU2_TR(0x5a84e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a84e1:{NFSU2_TR(0x5a84e1);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5a84e5:{NFSU2_TR(0x5a84e5);
__builtin_memmove((R+4),(R+24),4);
}
B5a84e7:{NFSU2_TR(0x5a84e7);
{u32 ea_=u32(u32(8374040u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a84ed:{NFSU2_TR(0x5a84ed);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a84f1:{NFSU2_TR(0x5a84f1);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a84f5:{NFSU2_TR(0x5a84f5);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a84f9:{NFSU2_TR(0x5a84f9);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a84fd:{NFSU2_TR(0x5a84fd);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a8501:{NFSU2_TR(0x5a8501);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5a8503:{NFSU2_TR(0x5a8503);
{u32 ea_=u32(r4(R+24)+u32(356u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5a8509:{NFSU2_TR(0x5a8509);
{u32 ea_=u32(u32(8374040u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a850f:{NFSU2_TR(0x5a850f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a8513:{NFSU2_TR(0x5a8513);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a8517:{NFSU2_TR(0x5a8517);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5a8519:{NFSU2_TR(0x5a8519);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a851b:{NFSU2_TR(0x5a851b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a851d:{NFSU2_TR(0x5a851d);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5a851f:{NFSU2_TR(0x5a851f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a8522:{NFSU2_TR(0x5a8522);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a8527ull));
TAIL_STATIC(0x59d400u,59d);
}
B5a8527:L5a8527:{c.instructions+=6;NFSU2_TR(0x5a8527);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a852b:{NFSU2_TR(0x5a852b);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5a852d:{NFSU2_TR(0x5a852d);
{u32 ea_=u32(u32(8374020u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a8533:{NFSU2_TR(0x5a8533);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a8535:{NFSU2_TR(0x5a8535);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a8538:{NFSU2_TR(0x5a8538);
if(r1(R+518)){{goto L5a855a;}}
}
B5a853a:L5a853a:{c.instructions+=7;NFSU2_TR(0x5a853a);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a853e:{NFSU2_TR(0x5a853e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a8541:{NFSU2_TR(0x5a8541);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5a8543:{NFSU2_TR(0x5a8543);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a8545:{NFSU2_TR(0x5a8545);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a8547:{NFSU2_TR(0x5a8547);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a854a:{NFSU2_TR(0x5a854a);
if(r1(R+518)){{goto L5a855a;}}
}
B5a854c:L5a854c:{c.instructions+=3;NFSU2_TR(0x5a854c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a8552:{NFSU2_TR(0x5a8552);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a8554:{NFSU2_TR(0x5a8554);
if(r1(R+518)){{goto L5a8603;}}
}
B5a855a:L5a855a:{c.instructions+=21;NFSU2_TR(0x5a855a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a855e:{NFSU2_TR(0x5a855e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a8561:{NFSU2_TR(0x5a8561);
{u32 ea_=u32(r4(R+24)+u32(400u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a8567:{NFSU2_TR(0x5a8567);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5a856e:{NFSU2_TR(0x5a856e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a8572:{NFSU2_TR(0x5a8572);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a8576:{NFSU2_TR(0x5a8576);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a857a:{NFSU2_TR(0x5a857a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a857e:{NFSU2_TR(0x5a857e);
{u32 ea_=u32(r4(R+24)+u32(404u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a8584:{NFSU2_TR(0x5a8584);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a858a:{NFSU2_TR(0x5a858a);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a858e:{NFSU2_TR(0x5a858e);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a8590:{NFSU2_TR(0x5a8590);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a8594:{NFSU2_TR(0x5a8594);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a8598:{NFSU2_TR(0x5a8598);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a859e:{NFSU2_TR(0x5a859e);
{u32 ea_=u32(r4(R+4)+u32(1004u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a85a4:{NFSU2_TR(0x5a85a4);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a85aa:{NFSU2_TR(0x5a85aa);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a85b0:{NFSU2_TR(0x5a85b0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a85b2:{NFSU2_TR(0x5a85b2);
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
B5a85b5:{NFSU2_TR(0x5a85b5);
if(r1(R+514)){{goto L5a85e8;}}
}
B5a85b7:L5a85b7:{c.instructions+=5;NFSU2_TR(0x5a85b7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a85bb:{NFSU2_TR(0x5a85bb);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a85c1:{NFSU2_TR(0x5a85c1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a85c3:{NFSU2_TR(0x5a85c3);
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
B5a85c6:{NFSU2_TR(0x5a85c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a85e8;}}
}
B5a85c8:L5a85c8:{c.instructions+=7;NFSU2_TR(0x5a85c8);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a85ce:{NFSU2_TR(0x5a85ce);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5a85d2:{NFSU2_TR(0x5a85d2);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a85d6:{NFSU2_TR(0x5a85d6);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a85d8:{NFSU2_TR(0x5a85d8);
{u32 ea_=u32(r4(R+24)+u32(292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a85de:{NFSU2_TR(0x5a85de);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a85e2:{NFSU2_TR(0x5a85e2);
{u32 ea_=u32(r4(R+24)+u32(296u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a85e8:L5a85e8:{c.instructions+=8;NFSU2_TR(0x5a85e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a85ec:{NFSU2_TR(0x5a85ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a85f0:{NFSU2_TR(0x5a85f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a85f6:{NFSU2_TR(0x5a85f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a85fc:{NFSU2_TR(0x5a85fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a85fd:{NFSU2_TR(0x5a85fd);
__builtin_memmove((R+16),(R+20),4);
}
B5a85ff:{NFSU2_TR(0x5a85ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a8600:{NFSU2_TR(0x5a8600);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a8603:L5a8603:{c.instructions+=12;NFSU2_TR(0x5a8603);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a8606:{NFSU2_TR(0x5a8606);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5a860d:{NFSU2_TR(0x5a860d);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a8610:{NFSU2_TR(0x5a8610);
{u32 ea_=u32(r4(R+24)+u32(400u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5a8616:{NFSU2_TR(0x5a8616);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a861e:{NFSU2_TR(0x5a861e);
{u32 ea_=u32(r4(R+24)+u32(264u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a8624:{NFSU2_TR(0x5a8624);
{u32 ea_=u32(r4(R+24)+u32(292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a862a:{NFSU2_TR(0x5a862a);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a862e:{NFSU2_TR(0x5a862e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a8634:{NFSU2_TR(0x5a8634);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a8636:{NFSU2_TR(0x5a8636);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a8639:{NFSU2_TR(0x5a8639);
if(r1(R+518)){{goto L5a8643;}}
}
B5a863b:L5a863b:{c.instructions+=1;NFSU2_TR(0x5a863b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a8643:L5a8643:{c.instructions+=6;NFSU2_TR(0x5a8643);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a8647:{NFSU2_TR(0x5a8647);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a864f:{NFSU2_TR(0x5a864f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a8655:{NFSU2_TR(0x5a8655);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a8657:{NFSU2_TR(0x5a8657);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a865a:{NFSU2_TR(0x5a865a);
if(r1(R+518)){{goto L5a8664;}}
}
B5a865c:L5a865c:{c.instructions+=1;NFSU2_TR(0x5a865c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a8664:L5a8664:{c.instructions+=9;NFSU2_TR(0x5a8664);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a8668:{NFSU2_TR(0x5a8668);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5a866b:{NFSU2_TR(0x5a866b);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5a866d:{NFSU2_TR(0x5a866d);
__builtin_memmove((R+4),(R+24),4);
}
B5a866f:{NFSU2_TR(0x5a866f);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a8673:{NFSU2_TR(0x5a8673);
{u32 ea_=u32(u32(8374040u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a8679:{NFSU2_TR(0x5a8679);
{u32 ea_=u32(r4(R+24)+u32(356u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a867f:{NFSU2_TR(0x5a867f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a8682:{NFSU2_TR(0x5a8682);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a8687ull));
TAIL_STATIC(0x59d510u,59d);
}
B5a8687:L5a8687:{c.instructions+=11;NFSU2_TR(0x5a8687);
{u32 ea_=u32(r4(R+24)+u32(404u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a868d:{NFSU2_TR(0x5a868d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a8691:{NFSU2_TR(0x5a8691);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a869b:{NFSU2_TR(0x5a869b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a86a1:{NFSU2_TR(0x5a86a1);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a86a5:{NFSU2_TR(0x5a86a5);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a86a9:{NFSU2_TR(0x5a86a9);
{u32 ea_=u32(r4(R+24)+u32(296u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a86af:{NFSU2_TR(0x5a86af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a86b0:{NFSU2_TR(0x5a86b0);
__builtin_memmove((R+16),(R+20),4);
}
B5a86b2:{NFSU2_TR(0x5a86b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a86b3:{NFSU2_TR(0x5a86b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a86c0:L5a86c0:{c.instructions+=27;NFSU2_TR(0x5a86c0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a86c2:{NFSU2_TR(0x5a86c2);
u8 U[4];
w4(U+0,u32(0x778e68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a86c7:{NFSU2_TR(0x5a86c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a86cd:{NFSU2_TR(0x5a86cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a86ce:{NFSU2_TR(0x5a86ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a86d5:{NFSU2_TR(0x5a86d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a86d6:{NFSU2_TR(0x5a86d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a86d7:{NFSU2_TR(0x5a86d7);
__builtin_memmove((R+24),(R+4),4);
}
B5a86d9:{NFSU2_TR(0x5a86d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a86dd:{NFSU2_TR(0x5a86dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a86e1:{NFSU2_TR(0x5a86e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a86e5:{NFSU2_TR(0x5a86e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a86eb:{NFSU2_TR(0x5a86eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a86ef:{NFSU2_TR(0x5a86ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a86f5:{NFSU2_TR(0x5a86f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a86f9:{NFSU2_TR(0x5a86f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a86ff:{NFSU2_TR(0x5a86ff);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5a8701:{NFSU2_TR(0x5a8701);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a8707:{NFSU2_TR(0x5a8707);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a870b:{NFSU2_TR(0x5a870b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B5a870e:{NFSU2_TR(0x5a870e);
u8 U[4];
w4(U+0,u32(0x7a2130ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8713:{NFSU2_TR(0x5a8713);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8714:{NFSU2_TR(0x5a8714);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a8718:{NFSU2_TR(0x5a8718);
u8 U[4];
w4(U+0,u32(0x7a210cull));
s4(u32(r4(R+24)),r4(U+0));
}
B5a871e:{NFSU2_TR(0x5a871e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a8721:{NFSU2_TR(0x5a8721);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a8724:{NFSU2_TR(0x5a8724);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a8729ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5a8729:L5a8729:{c.instructions+=7;NFSU2_TR(0x5a8729);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a872d:{NFSU2_TR(0x5a872d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5a8730:{NFSU2_TR(0x5a8730);
__builtin_memmove((R+0),(R+24),4);
}
B5a8732:{NFSU2_TR(0x5a8732);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a8733:{NFSU2_TR(0x5a8733);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a873a:{NFSU2_TR(0x5a873a);
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
B5a873d:{NFSU2_TR(0x5a873d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a8740:L5a8740:{c.instructions+=2;NFSU2_TR(0x5a8740);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B5a8743:{NFSU2_TR(0x5a8743);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a8750:L5a8750:{c.instructions+=6;NFSU2_TR(0x5a8750);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a8753:{NFSU2_TR(0x5a8753);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a8757:{NFSU2_TR(0x5a8757);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5a8759:{NFSU2_TR(0x5a8759);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a875c:{NFSU2_TR(0x5a875c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a875f:{NFSU2_TR(0x5a875f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a8770:L5a8770:{c.instructions+=6;NFSU2_TR(0x5a8770);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a8774:{NFSU2_TR(0x5a8774);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5a8776:{NFSU2_TR(0x5a8776);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a8779:{NFSU2_TR(0x5a8779);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a877c:{NFSU2_TR(0x5a877c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a877f:{NFSU2_TR(0x5a877f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a8790:L5a8790:{c.instructions+=16;NFSU2_TR(0x5a8790);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8791:{NFSU2_TR(0x5a8791);
__builtin_memmove((R+20),(R+16),4);
}
B5a8793:{NFSU2_TR(0x5a8793);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5a8796:{NFSU2_TR(0x5a8796);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xe4ull))));
}
B5a879c:{NFSU2_TR(0x5a879c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a879d:{NFSU2_TR(0x5a879d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a879e:{NFSU2_TR(0x5a879e);
__builtin_memmove((R+24),(R+4),4);
}
B5a87a0:{NFSU2_TR(0x5a87a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a87a6:{NFSU2_TR(0x5a87a6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a87a7:{NFSU2_TR(0x5a87a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a87ad:{NFSU2_TR(0x5a87ad);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a87ae:{NFSU2_TR(0x5a87ae);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B5a87b1:{NFSU2_TR(0x5a87b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a87b2:{NFSU2_TR(0x5a87b2);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5a87b6:{NFSU2_TR(0x5a87b6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a87b7:{NFSU2_TR(0x5a87b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a87bcull));
TAIL_STATIC(0x43c9c0u,43c);
}
B5a87bc:L5a87bc:{c.instructions+=24;NFSU2_TR(0x5a87bc);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a87c0:{NFSU2_TR(0x5a87c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a87c6:{NFSU2_TR(0x5a87c6);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a87c9:{NFSU2_TR(0x5a87c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a87cf:{NFSU2_TR(0x5a87cf);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a87d2:{NFSU2_TR(0x5a87d2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5a87d5:{NFSU2_TR(0x5a87d5);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a87d9:{NFSU2_TR(0x5a87d9);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a87dc:{NFSU2_TR(0x5a87dc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B5a87df:{NFSU2_TR(0x5a87df);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a87e3:{NFSU2_TR(0x5a87e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a87e4:{NFSU2_TR(0x5a87e4);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a87e8:{NFSU2_TR(0x5a87e8);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a87ec:{NFSU2_TR(0x5a87ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a87f0:{NFSU2_TR(0x5a87f0);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a87f2:{NFSU2_TR(0x5a87f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a87f3:{NFSU2_TR(0x5a87f3);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a87f7:{NFSU2_TR(0x5a87f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a87fb:{NFSU2_TR(0x5a87fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5a8801:{NFSU2_TR(0x5a8801);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a8805:{NFSU2_TR(0x5a8805);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8806:{NFSU2_TR(0x5a8806);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x150ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5a880c:{NFSU2_TR(0x5a880c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a880d:{NFSU2_TR(0x5a880d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a8812ull));
TAIL_STATIC(0x59d250u,59d);
}
B5a8812:L5a8812:{c.instructions+=10;NFSU2_TR(0x5a8812);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a8818:{NFSU2_TR(0x5a8818);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a881b:{NFSU2_TR(0x5a881b);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a881e:{NFSU2_TR(0x5a881e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a8821:{NFSU2_TR(0x5a8821);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a8824:{NFSU2_TR(0x5a8824);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a8828:{NFSU2_TR(0x5a8828);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a882b:{NFSU2_TR(0x5a882b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a882d:{NFSU2_TR(0x5a882d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a8830:{NFSU2_TR(0x5a8830);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a883c;}}
}
B5a8832:L5a8832:{c.instructions+=4;NFSU2_TR(0x5a8832);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a8835:{NFSU2_TR(0x5a8835);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a8837:{NFSU2_TR(0x5a8837);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a883a:{NFSU2_TR(0x5a883a);
{goto L5a885d;}
}
B5a883c:L5a883c:{c.instructions+=4;NFSU2_TR(0x5a883c);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a883f:{NFSU2_TR(0x5a883f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a8841:{NFSU2_TR(0x5a8841);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a8844:{NFSU2_TR(0x5a8844);
if(r1(R+514)){{goto L5a885a;}}
}
B5a8846:L5a8846:{c.instructions+=5;NFSU2_TR(0x5a8846);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a8849:{NFSU2_TR(0x5a8849);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a884b:{NFSU2_TR(0x5a884b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a884e:{NFSU2_TR(0x5a884e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a8858:{NFSU2_TR(0x5a8858);
{goto L5a8867;}
}
B5a885a:L5a885a:{c.instructions+=1;NFSU2_TR(0x5a885a);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a885d:L5a885d:{c.instructions+=1;NFSU2_TR(0x5a885d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a8867:L5a8867:{c.instructions+=5;NFSU2_TR(0x5a8867);
{u32 ea_=u32(u32(8374272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a886d:{NFSU2_TR(0x5a886d);
{u32 ea_=u32(u32(7881708u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a8873:{NFSU2_TR(0x5a8873);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a8875:{NFSU2_TR(0x5a8875);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a8878:{NFSU2_TR(0x5a8878);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a888a;}}
}
B5a887a:L5a887a:{c.instructions+=4;NFSU2_TR(0x5a887a);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a887d:{NFSU2_TR(0x5a887d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a8881:{NFSU2_TR(0x5a8881);
{u32 ea_=u32(u32(8374272u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5a8887:{NFSU2_TR(0x5a8887);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a888a:L5a888a:{c.instructions+=14;NFSU2_TR(0x5a888a);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a888d:{NFSU2_TR(0x5a888d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a888f:{NFSU2_TR(0x5a888f);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a8892:{NFSU2_TR(0x5a8892);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a8895:{NFSU2_TR(0x5a8895);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a8897:{NFSU2_TR(0x5a8897);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5a8899:{NFSU2_TR(0x5a8899);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a889c:{NFSU2_TR(0x5a889c);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5a88a0:{NFSU2_TR(0x5a88a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a88a1:{NFSU2_TR(0x5a88a1);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a88a4:{NFSU2_TR(0x5a88a4);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a88a7:{NFSU2_TR(0x5a88a7);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a88aa:{NFSU2_TR(0x5a88aa);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a88ad:{NFSU2_TR(0x5a88ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a88b2ull));
TAIL_STATIC(0x43c780u,43c);
}
B5a88b2:L5a88b2:{c.instructions+=8;NFSU2_TR(0x5a88b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a88b8:{NFSU2_TR(0x5a88b8);
{u32 ea_=u32(r4(R+8)+u32(372u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a88be:{NFSU2_TR(0x5a88be);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5a88c1:{NFSU2_TR(0x5a88c1);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a88c5:{NFSU2_TR(0x5a88c5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a88cb:{NFSU2_TR(0x5a88cb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a88cd:{NFSU2_TR(0x5a88cd);
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
B5a88d0:{NFSU2_TR(0x5a88d0);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a8965;}}
}
B5a88d6:L5a88d6:{c.instructions+=3;NFSU2_TR(0x5a88d6);
u8 U[4];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a88dd:{NFSU2_TR(0x5a88dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a88de:{NFSU2_TR(0x5a88de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a88e3ull));
TAIL_STATIC(0x43c780u,43c);
}
B5a88e3:L5a88e3:{c.instructions+=6;NFSU2_TR(0x5a88e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a88e9:{NFSU2_TR(0x5a88e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a88ec:{NFSU2_TR(0x5a88ec);
__builtin_memmove((R+0),(R+8),4);
}
B5a88ee:{NFSU2_TR(0x5a88ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a88ef:{NFSU2_TR(0x5a88ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a88f3:{NFSU2_TR(0x5a88f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a88f8ull));
TAIL_STATIC(0x43c350u,43c);
}
B5a88f8:L5a88f8:{c.instructions+=7;NFSU2_TR(0x5a88f8);
{u32 ea_=u32(u32(8002360u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a88fe:{NFSU2_TR(0x5a88fe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5a8901:{NFSU2_TR(0x5a8901);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a8905:{NFSU2_TR(0x5a8905);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a8909:{NFSU2_TR(0x5a8909);
{u32 ea_=u32(u32(7881300u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a890f:{NFSU2_TR(0x5a890f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a8912:{NFSU2_TR(0x5a8912);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a8917ull));
TAIL_STATIC(0x43c350u,43c);
}
B5a8917:L5a8917:{c.instructions+=4;NFSU2_TR(0x5a8917);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a891b:{NFSU2_TR(0x5a891b);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a891f:{NFSU2_TR(0x5a891f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8920:{NFSU2_TR(0x5a8920);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a8925ull));
TAIL_STATIC(0x43c350u,43c);
}
B5a8925:L5a8925:{c.instructions+=15;NFSU2_TR(0x5a8925);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a8927:{NFSU2_TR(0x5a8927);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a892b:{NFSU2_TR(0x5a892b);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a892d:{NFSU2_TR(0x5a892d);
__builtin_memmove((R+0),(R+8),4);
}
B5a892f:{NFSU2_TR(0x5a892f);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a8936:{NFSU2_TR(0x5a8936);
u8 U[4];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5a893d:{NFSU2_TR(0x5a893d);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a8944:{NFSU2_TR(0x5a8944);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a894b:{NFSU2_TR(0x5a894b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a894c:{NFSU2_TR(0x5a894c);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5a8950:{NFSU2_TR(0x5a8950);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a8957:{NFSU2_TR(0x5a8957);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8958:{NFSU2_TR(0x5a8958);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a895c:{NFSU2_TR(0x5a895c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a895d:{NFSU2_TR(0x5a895d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a8962ull));
TAIL_STATIC(0x43c990u,43c);
}
B5a8962:L5a8962:{c.instructions+=1;NFSU2_TR(0x5a8962);
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
B5a8965:L5a8965:{c.instructions+=12;NFSU2_TR(0x5a8965);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a8968:{NFSU2_TR(0x5a8968);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5a896a:{NFSU2_TR(0x5a896a);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5a896e:{NFSU2_TR(0x5a896e);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a8975:{NFSU2_TR(0x5a8975);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a8978:{NFSU2_TR(0x5a8978);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8979:{NFSU2_TR(0x5a8979);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5a897c:{NFSU2_TR(0x5a897c);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a8983:{NFSU2_TR(0x5a8983);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8984:{NFSU2_TR(0x5a8984);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a898b:{NFSU2_TR(0x5a898b);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a8996:{NFSU2_TR(0x5a8996);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a899bull));
TAIL_STATIC(0x4012b0u,401);
}
B5a899b:L5a899b:{c.instructions+=5;NFSU2_TR(0x5a899b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a89a1:{NFSU2_TR(0x5a89a1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5a89a3:{NFSU2_TR(0x5a89a3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5a89a6:{NFSU2_TR(0x5a89a6);
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
B5a89a8:{NFSU2_TR(0x5a89a8);
if(r1(R+518)){{goto L5a89cb;}}
}
B5a89aa:L5a89aa:{c.instructions+=10;NFSU2_TR(0x5a89aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a89b0:{NFSU2_TR(0x5a89b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a89b3:{NFSU2_TR(0x5a89b3);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5a89b6:{NFSU2_TR(0x5a89b6);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B5a89b8:{NFSU2_TR(0x5a89b8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a89b9:{NFSU2_TR(0x5a89b9);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5a89bd:{NFSU2_TR(0x5a89bd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a89be:{NFSU2_TR(0x5a89be);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a89c2:{NFSU2_TR(0x5a89c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a89c3:{NFSU2_TR(0x5a89c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a89c8ull));
TAIL_STATIC(0x43c990u,43c);
}
B5a89c8:L5a89c8:{c.instructions+=1;NFSU2_TR(0x5a89c8);
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
B5a89cb:L5a89cb:{c.instructions+=4;NFSU2_TR(0x5a89cb);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5a89cf:{NFSU2_TR(0x5a89cf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a89d0:{NFSU2_TR(0x5a89d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a89d6:{NFSU2_TR(0x5a89d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a89dbull));
TAIL_STATIC(0x591480u,591);
}
B5a89db:L5a89db:{c.instructions+=7;NFSU2_TR(0x5a89db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a89e1:{NFSU2_TR(0x5a89e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a89e2:{NFSU2_TR(0x5a89e2);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x30ull))));
}
B5a89e5:{NFSU2_TR(0x5a89e5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a89e6:{NFSU2_TR(0x5a89e6);
u8 U[4];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a89ed:{NFSU2_TR(0x5a89ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a89ee:{NFSU2_TR(0x5a89ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a89f3ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B5a89f3:L5a89f3:{c.instructions+=8;NFSU2_TR(0x5a89f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a89f9:{NFSU2_TR(0x5a89f9);
u8 U[4];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5a8a00:{NFSU2_TR(0x5a8a00);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8a01:{NFSU2_TR(0x5a8a01);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),u32(0xc0ull)));
w1(R+523,scarry<u32>(r4(R+8),u32(0xc0ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xc0ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5a8a07:{NFSU2_TR(0x5a8a07);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8a08:{NFSU2_TR(0x5a8a08);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a8a0c:{NFSU2_TR(0x5a8a0c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8a0d:{NFSU2_TR(0x5a8a0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a8a12ull));
TAIL_STATIC(0x43d1e0u,43d);
}
B5a8a12:L5a8a12:{c.instructions+=27;NFSU2_TR(0x5a8a12);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a8a16:{NFSU2_TR(0x5a8a16);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a8a1c:{NFSU2_TR(0x5a8a1c);
{u32 ea_=u32(r4(R+0)+u32(160u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a8a22:{NFSU2_TR(0x5a8a22);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
}
B5a8a27:{NFSU2_TR(0x5a8a27);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a8a2a:{NFSU2_TR(0x5a8a2a);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5a8a2e:{NFSU2_TR(0x5a8a2e);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a8a32:{NFSU2_TR(0x5a8a32);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a8a35:{NFSU2_TR(0x5a8a35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a8a3b:{NFSU2_TR(0x5a8a3b);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a8a3f:{NFSU2_TR(0x5a8a3f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xf0ull))));
}
B5a8a44:{NFSU2_TR(0x5a8a44);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8a45:{NFSU2_TR(0x5a8a45);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a8a49:{NFSU2_TR(0x5a8a49);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a8a4b:{NFSU2_TR(0x5a8a4b);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a8a52:{NFSU2_TR(0x5a8a52);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a8a59:{NFSU2_TR(0x5a8a59);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a8a5d:{NFSU2_TR(0x5a8a5d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5a8a5f:{NFSU2_TR(0x5a8a5f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a8a61:{NFSU2_TR(0x5a8a61);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5a8a65:{NFSU2_TR(0x5a8a65);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a8a68:{NFSU2_TR(0x5a8a68);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a8a6b:{NFSU2_TR(0x5a8a6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a8a71:{NFSU2_TR(0x5a8a71);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
}
B5a8a76:{NFSU2_TR(0x5a8a76);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8a77:{NFSU2_TR(0x5a8a77);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8a78:{NFSU2_TR(0x5a8a78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a8a7dull));
TAIL_STATIC(0x43c990u,43c);
}
B5a8a7d:L5a8a7d:{c.instructions+=5;NFSU2_TR(0x5a8a7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a8a83:{NFSU2_TR(0x5a8a83);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5a8a86:{NFSU2_TR(0x5a8a86);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5a8a8a:{NFSU2_TR(0x5a8a8a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8a8b:{NFSU2_TR(0x5a8a8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a8a90ull));
TAIL_STATIC(0x5913d0u,591);
}
B5a8a90:L5a8a90:{c.instructions+=2;NFSU2_TR(0x5a8a90);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
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
B5a8a96:{NFSU2_TR(0x5a8a96);
if(r1(R+518)){{goto L5a8b0f;}}
}
B5a8a98:L5a8a98:{c.instructions+=5;NFSU2_TR(0x5a8a98);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a8a9b:{NFSU2_TR(0x5a8a9b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a8aa1:{NFSU2_TR(0x5a8aa1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a8aa3:{NFSU2_TR(0x5a8aa3);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a8aa6:{NFSU2_TR(0x5a8aa6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a8aad;}}
}
B5a8aa8:L5a8aa8:{c.instructions+=2;NFSU2_TR(0x5a8aa8);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a8aab:{NFSU2_TR(0x5a8aab);
{goto L5a8ab3;}
}
B5a8aad:L5a8aad:{c.instructions+=1;NFSU2_TR(0x5a8aad);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a8ab3:L5a8ab3:{c.instructions+=9;NFSU2_TR(0x5a8ab3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a8ab6:{NFSU2_TR(0x5a8ab6);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a8ab8:{NFSU2_TR(0x5a8ab8);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a8abe:{NFSU2_TR(0x5a8abe);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a8ac1:{NFSU2_TR(0x5a8ac1);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a8ac4:{NFSU2_TR(0x5a8ac4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a8aca:{NFSU2_TR(0x5a8aca);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a8acc:{NFSU2_TR(0x5a8acc);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a8acf:{NFSU2_TR(0x5a8acf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a8ad5;}}
}
B5a8ad1:L5a8ad1:{c.instructions+=2;NFSU2_TR(0x5a8ad1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5a8ad3:{NFSU2_TR(0x5a8ad3);
{goto L5a8ada;}
}
B5a8ad5:L5a8ad5:{c.instructions+=1;NFSU2_TR(0x5a8ad5);
w4(R+0,u32(0x1ull));
}
B5a8ada:L5a8ada:{c.instructions+=17;NFSU2_TR(0x5a8ada);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a8ade:{NFSU2_TR(0x5a8ade);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a8ae1:{NFSU2_TR(0x5a8ae1);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a8ae4:{NFSU2_TR(0x5a8ae4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a8ae6:{NFSU2_TR(0x5a8ae6);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a8ae9:{NFSU2_TR(0x5a8ae9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a8aeb:{NFSU2_TR(0x5a8aeb);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a8af1:{NFSU2_TR(0x5a8af1);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a8af4:{NFSU2_TR(0x5a8af4);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a8af7:{NFSU2_TR(0x5a8af7);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a8afa:{NFSU2_TR(0x5a8afa);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a8afd:{NFSU2_TR(0x5a8afd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a8aff:{NFSU2_TR(0x5a8aff);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a8b02:{NFSU2_TR(0x5a8b02);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a8b08:{NFSU2_TR(0x5a8b08);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a8b0a:{NFSU2_TR(0x5a8b0a);
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
B5a8b0d:{NFSU2_TR(0x5a8b0d);
if(r1(R+514)){{goto L5a8b12;}}
}
B5a8b0f:L5a8b0f:{c.instructions+=1;NFSU2_TR(0x5a8b0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a8b12:L5a8b12:{c.instructions+=6;NFSU2_TR(0x5a8b12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a8b13:{NFSU2_TR(0x5a8b13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a8b14:{NFSU2_TR(0x5a8b14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a8b15:{NFSU2_TR(0x5a8b15);
__builtin_memmove((R+16),(R+20),4);
}
B5a8b17:{NFSU2_TR(0x5a8b17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a8b18:{NFSU2_TR(0x5a8b18);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a8b20:L5a8b20:{c.instructions+=5;NFSU2_TR(0x5a8b20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8b21:{NFSU2_TR(0x5a8b21);
__builtin_memmove((R+24),gp(0x86b4c0),4);
}
B5a8b27:{NFSU2_TR(0x5a8b27);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8b28:{NFSU2_TR(0x5a8b28);
w4(R+4,u32(0x86b4c0ull));
}
B5a8b2d:{NFSU2_TR(0x5a8b2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a8b32ull));
TAIL_STATIC(0x502fd0u,502);
}
B5a8b32:L5a8b32:{c.instructions+=2;NFSU2_TR(0x5a8b32);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a8b34:{NFSU2_TR(0x5a8b34);
if(r1(R+518)){{goto L5a8b58;}}
}
B5a8b36:L5a8b36:{c.instructions+=2;NFSU2_TR(0x5a8b36);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a8b3a:{NFSU2_TR(0x5a8b3a);
__builtin_memmove((R+12),(R+12),4);
}
B5a8b40:L5a8b40:{c.instructions+=3;NFSU2_TR(0x5a8b40);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5a8b44:{NFSU2_TR(0x5a8b44);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a8b46:{NFSU2_TR(0x5a8b46);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5a8b52;}}
}
B5a8b48:L5a8b48:{c.instructions+=4;NFSU2_TR(0x5a8b48);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B5a8b4c:{NFSU2_TR(0x5a8b4c);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B5a8b4e:{NFSU2_TR(0x5a8b4e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a8b50:{NFSU2_TR(0x5a8b50);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5a8b5d;}}
}
B5a8b52:L5a8b52:{c.instructions+=3;NFSU2_TR(0x5a8b52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5a8b54:{NFSU2_TR(0x5a8b54);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a8b56:{NFSU2_TR(0x5a8b56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a8b40u);}goto L5a8b40;}}
}
B5a8b58:L5a8b58:{c.instructions+=4;NFSU2_TR(0x5a8b58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a8b59:{NFSU2_TR(0x5a8b59);
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
B5a8b5b:{NFSU2_TR(0x5a8b5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a8b5c:{NFSU2_TR(0x5a8b5c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a8b5d:L5a8b5d:{c.instructions+=7;NFSU2_TR(0x5a8b5d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5a8b61:{NFSU2_TR(0x5a8b61);
u8 U[6];
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5a8b63:{NFSU2_TR(0x5a8b63);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(s64(s32(u32(0x70ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+4)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B5a8b66:{NFSU2_TR(0x5a8b66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a8b67:{NFSU2_TR(0x5a8b67);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5a8b6b:{NFSU2_TR(0x5a8b6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a8b6c:{NFSU2_TR(0x5a8b6c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a8b70:L5a8b70:{c.instructions+=7;NFSU2_TR(0x5a8b70);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8b71:{NFSU2_TR(0x5a8b71);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8b72:{NFSU2_TR(0x5a8b72);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8b73:{NFSU2_TR(0x5a8b73);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8b74:{NFSU2_TR(0x5a8b74);
__builtin_memmove((R+28),gp(0x86b4c0),4);
}
B5a8b7a:{NFSU2_TR(0x5a8b7a);
w4(R+4,u32(0x86b4c0ull));
}
B5a8b7f:{NFSU2_TR(0x5a8b7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a8b84ull));
TAIL_STATIC(0x502fd0u,502);
}
B5a8b84:L5a8b84:{c.instructions+=3;NFSU2_TR(0x5a8b84);
__builtin_memmove((R+20),(R+0),4);
}
B5a8b86:{NFSU2_TR(0x5a8b86);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a8b88:{NFSU2_TR(0x5a8b88);
if(r1(R+518)){{goto L5a8bc6;}}
}
B5a8b8a:L5a8b8a:{c.instructions+=2;NFSU2_TR(0x5a8b8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5a8b8e:{NFSU2_TR(0x5a8b8e);
__builtin_memmove((R+28),(R+28),4);
}
B5a8b90:L5a8b90:{c.instructions+=15;NFSU2_TR(0x5a8b90);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B5a8b94:{NFSU2_TR(0x5a8b94);
__builtin_memmove((R+4),(R+12),4);
}
B5a8b96:{NFSU2_TR(0x5a8b96);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B5a8b98:{NFSU2_TR(0x5a8b98);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x10ull))));
}
B5a8b9b:{NFSU2_TR(0x5a8b9b);
w4(R+0,u32(0x92492493ull));
}
B5a8ba0:{NFSU2_TR(0x5a8ba0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5a8ba2:{NFSU2_TR(0x5a8ba2);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B5a8ba4:{NFSU2_TR(0x5a8ba4);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B5a8ba7:{NFSU2_TR(0x5a8ba7);
__builtin_memmove((R+0),(R+8),4);
}
B5a8ba9:{NFSU2_TR(0x5a8ba9);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5a8bac:{NFSU2_TR(0x5a8bac);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B5a8bae:{NFSU2_TR(0x5a8bae);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B5a8bb0:{NFSU2_TR(0x5a8bb0);
__builtin_memmove((R+0),(R+8),4);
}
B5a8bb2:{NFSU2_TR(0x5a8bb2);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a8bb4:{NFSU2_TR(0x5a8bb4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5a8bc0;}}
}
B5a8bb6:L5a8bb6:{c.instructions+=4;NFSU2_TR(0x5a8bb6);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5a8bba:{NFSU2_TR(0x5a8bba);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B5a8bbc:{NFSU2_TR(0x5a8bbc);
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
B5a8bbe:{NFSU2_TR(0x5a8bbe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5a8bc9;}}
}
B5a8bc0:L5a8bc0:{c.instructions+=3;NFSU2_TR(0x5a8bc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5a8bc2:{NFSU2_TR(0x5a8bc2);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a8bc4:{NFSU2_TR(0x5a8bc4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a8b90u);}goto L5a8b90;}}
}
B5a8bc6:L5a8bc6:{c.instructions+=1;NFSU2_TR(0x5a8bc6);
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
B5a8bc9:L5a8bc9:{c.instructions+=5;NFSU2_TR(0x5a8bc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a8bca:{NFSU2_TR(0x5a8bca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a8bcb:{NFSU2_TR(0x5a8bcb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a8bcc:{NFSU2_TR(0x5a8bcc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a8bcd:{NFSU2_TR(0x5a8bcd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a8bd0:L5a8bd0:{c.instructions+=5;NFSU2_TR(0x5a8bd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a8bd4:{NFSU2_TR(0x5a8bd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a8bd6:{NFSU2_TR(0x5a8bd6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34026ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a8bdb:{NFSU2_TR(0x5a8bdb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8bdc:{NFSU2_TR(0x5a8bdc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a8c19;}}
}
B5a8bde:L5a8bde:{c.instructions+=10;NFSU2_TR(0x5a8bde);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5a8be1:{NFSU2_TR(0x5a8be1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x17ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5a8be4:{NFSU2_TR(0x5a8be4);
__builtin_memmove((R+8),(R+0),4);
}
B5a8be6:{NFSU2_TR(0x5a8be6);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffff0ull))));
}
B5a8be9:{NFSU2_TR(0x5a8be9);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
}
B5a8beb:{NFSU2_TR(0x5a8beb);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5a8bef:{NFSU2_TR(0x5a8bef);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5a8bf2:{NFSU2_TR(0x5a8bf2);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff0ull))));
}
B5a8bf5:{NFSU2_TR(0x5a8bf5);
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
B5a8bf7:{NFSU2_TR(0x5a8bf7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5a8c12;}}
}
B5a8bf9:L5a8bf9:{c.instructions+=2;NFSU2_TR(0x5a8bf9);
__builtin_memmove((R+24),(R+4),4);
}
B5a8bfb:{NFSU2_TR(0x5a8bfb);
{goto L5a8c00;}
}
B5a8c00:L5a8c00:{c.instructions+=7;NFSU2_TR(0x5a8c00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5a8c02:{NFSU2_TR(0x5a8c02);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a8c05:{NFSU2_TR(0x5a8c05);
w1(R+512,carry<u32>(r4(R+0),u32(0x100ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
}
B5a8c0a:{NFSU2_TR(0x5a8c0a);
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
B5a8c0b:{NFSU2_TR(0x5a8c0b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5a8c0d:{NFSU2_TR(0x5a8c0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a8c10:{NFSU2_TR(0x5a8c10);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a8c00u);}goto L5a8c00;}}
}
B5a8c12:L5a8c12:{c.instructions+=3;NFSU2_TR(0x5a8c12);
w4(R+0,u32(0x1ull));
}
B5a8c17:{NFSU2_TR(0x5a8c17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a8c18:{NFSU2_TR(0x5a8c18);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a8c19:L5a8c19:{c.instructions+=2;NFSU2_TR(0x5a8c19);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34027ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a8c1e:{NFSU2_TR(0x5a8c1e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a8c72;}}
}
B5a8c20:L5a8c20:{c.instructions+=5;NFSU2_TR(0x5a8c20);
__builtin_memmove((R+0),gp(0x864f60),4);
}
B5a8c25:{NFSU2_TR(0x5a8c25);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x17ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a8c28:{NFSU2_TR(0x5a8c28);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffff0ull))));
}
B5a8c2b:{NFSU2_TR(0x5a8c2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a8c2d:{NFSU2_TR(0x5a8c2d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a8c36;}}
}
B5a8c2f:L5a8c2f:{c.instructions+=2;NFSU2_TR(0x5a8c2f);
__builtin_memmove((R+4),(R+24),4);
}
B5a8c31:{NFSU2_TR(0x5a8c31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a8c36ull));
TAIL_STATIC(0x59e2d0u,59e);
}
B5a8c36:L5a8c36:{c.instructions+=13;NFSU2_TR(0x5a8c36);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5a8c3a:{NFSU2_TR(0x5a8c3a);
s4(0x86b37c,u32(u32(m4(0x86b37c))-u32(r4(R+0))));
}
B5a8c40:{NFSU2_TR(0x5a8c40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a8c42:{NFSU2_TR(0x5a8c42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a8c45:{NFSU2_TR(0x5a8c45);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5a8c47:{NFSU2_TR(0x5a8c47);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a8c4a:{NFSU2_TR(0x5a8c4a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5a8c4e:{NFSU2_TR(0x5a8c4e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x883ec0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5a8c55:{NFSU2_TR(0x5a8c55);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a8c5c:{NFSU2_TR(0x5a8c5c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5a8c60:{NFSU2_TR(0x5a8c60);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8c61:{NFSU2_TR(0x5a8c61);
w4(R+4,u32(0x883e70ull));
}
B5a8c66:{NFSU2_TR(0x5a8c66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a8c6bull));
TAIL_STATIC(0x5db6e0u,5db);
}
B5a8c6b:L5a8c6b:{c.instructions+=3;NFSU2_TR(0x5a8c6b);
w4(R+0,u32(0x1ull));
}
B5a8c70:{NFSU2_TR(0x5a8c70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a8c71:{NFSU2_TR(0x5a8c71);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a8c72:L5a8c72:{c.instructions+=3;NFSU2_TR(0x5a8c72);
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
B5a8c74:{NFSU2_TR(0x5a8c74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a8c75:{NFSU2_TR(0x5a8c75);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a8c80:L5a8c80:{c.instructions+=7;NFSU2_TR(0x5a8c80);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8c81:{NFSU2_TR(0x5a8c81);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8c82:{NFSU2_TR(0x5a8c82);
__builtin_memmove((R+28),(R+4),4);
}
B5a8c84:{NFSU2_TR(0x5a8c84);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x506ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5a8c8a:{NFSU2_TR(0x5a8c8a);
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
B5a8c8c:{NFSU2_TR(0x5a8c8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a8c90:{NFSU2_TR(0x5a8c90);
if(r1(R+518)){{goto L5a8d3f;}}
}
B5a8c96:L5a8c96:{c.instructions+=5;NFSU2_TR(0x5a8c96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a8c98:{NFSU2_TR(0x5a8c98);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8c99:{NFSU2_TR(0x5a8c99);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8c9a:{NFSU2_TR(0x5a8c9a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8c9b:{NFSU2_TR(0x5a8c9b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a8c9eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5a8c9e:L5a8c9e:{c.instructions+=5;NFSU2_TR(0x5a8c9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5a8ca4:{NFSU2_TR(0x5a8ca4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4fcull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a8caa:{NFSU2_TR(0x5a8caa);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(R+20))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+6)));
w4(U+10,u32(u32(r4(R+20))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5a8cac:{NFSU2_TR(0x5a8cac);
__builtin_memmove((R+24),(R+0),4);
}
B5a8cae:{NFSU2_TR(0x5a8cae);
if(r1(R+518)){{goto L5a8cf3;}}
}
B5a8cb0:L5a8cb0:{c.instructions+=6;NFSU2_TR(0x5a8cb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a8cb3:{NFSU2_TR(0x5a8cb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a8cb7:{NFSU2_TR(0x5a8cb7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8cb8:{NFSU2_TR(0x5a8cb8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5a8cbb:{NFSU2_TR(0x5a8cbb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8cbc:{NFSU2_TR(0x5a8cbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a8cc1ull));
TAIL_STATIC(0x4012b0u,401);
}
B5a8cc1:L5a8cc1:{c.instructions+=11;NFSU2_TR(0x5a8cc1);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a8cc4:{NFSU2_TR(0x5a8cc4);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a8cc7:{NFSU2_TR(0x5a8cc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a8cc9:{NFSU2_TR(0x5a8cc9);
{u32 ea_=u32(r4(R+28)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a8ccf:{NFSU2_TR(0x5a8ccf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a8cd5:{NFSU2_TR(0x5a8cd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a8cdf:{NFSU2_TR(0x5a8cdf);
{u32 ea_=u32(r4(R+28)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a8ce5:{NFSU2_TR(0x5a8ce5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+20),(U+0),4);
}
B5a8ce8:{NFSU2_TR(0x5a8ce8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5a8ceb:{NFSU2_TR(0x5a8ceb);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(R+20))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+6)));
w4(U+10,u32(u32(r4(R+20))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5a8ced:{NFSU2_TR(0x5a8ced);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a8cb0u);}goto L5a8cb0;}}
}
B5a8cef:L5a8cef:{c.instructions+=1;NFSU2_TR(0x5a8cef);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a8cf3:L5a8cf3:{c.instructions+=2;NFSU2_TR(0x5a8cf3);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x504ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x1ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B5a8cfa:{NFSU2_TR(0x5a8cfa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a8d3c;}}
}
B5a8cfc:L5a8cfc:{c.instructions+=4;NFSU2_TR(0x5a8cfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a8d02:{NFSU2_TR(0x5a8d02);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4f4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5a8d08:{NFSU2_TR(0x5a8d08);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B5a8d0a:{NFSU2_TR(0x5a8d0a);
if(r1(R+518)){{goto L5a8d35;}}
}
B5a8d0c:L5a8d0c:{c.instructions+=1;NFSU2_TR(0x5a8d0c);
__builtin_memmove((R+16),(R+16),4);
}
B5a8d10:L5a8d10:{c.instructions+=12;NFSU2_TR(0x5a8d10);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a8d13:{NFSU2_TR(0x5a8d13);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a8d16:{NFSU2_TR(0x5a8d16);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a8d19:{NFSU2_TR(0x5a8d19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+12),(U+0),4);
}
B5a8d1b:{NFSU2_TR(0x5a8d1b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
}
B5a8d20:{NFSU2_TR(0x5a8d20);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a8d23:{NFSU2_TR(0x5a8d23);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5a8d25:{NFSU2_TR(0x5a8d25);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a8d2c:{NFSU2_TR(0x5a8d2c);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a8d2f:{NFSU2_TR(0x5a8d2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5a8d31:{NFSU2_TR(0x5a8d31);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B5a8d33:{NFSU2_TR(0x5a8d33);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a8d10u);}goto L5a8d10;}}
}
B5a8d35:L5a8d35:{c.instructions+=1;NFSU2_TR(0x5a8d35);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x504ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5a8d3c:L5a8d3c:{c.instructions+=3;NFSU2_TR(0x5a8d3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a8d3d:{NFSU2_TR(0x5a8d3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a8d3e:{NFSU2_TR(0x5a8d3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a8d3f:L5a8d3f:{c.instructions+=3;NFSU2_TR(0x5a8d3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a8d40:{NFSU2_TR(0x5a8d40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5a8d41:{NFSU2_TR(0x5a8d41);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a8d50:L5a8d50:{c.instructions+=8;NFSU2_TR(0x5a8d50);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8d51:{NFSU2_TR(0x5a8d51);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8d52:{NFSU2_TR(0x5a8d52);
__builtin_memmove((R+12),(R+4),4);
}
B5a8d54:{NFSU2_TR(0x5a8d54);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5a8d5a:{NFSU2_TR(0x5a8d5a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8d5b:{NFSU2_TR(0x5a8d5b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4f4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a8d61:{NFSU2_TR(0x5a8d61);
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
B5a8d63:{NFSU2_TR(0x5a8d63);
if(r1(R+518)){{goto L5a8d79;}}
}
B5a8d65:L5a8d65:{c.instructions+=4;NFSU2_TR(0x5a8d65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a8d68:{NFSU2_TR(0x5a8d68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8d69:{NFSU2_TR(0x5a8d69);
w4(R+4,u32(0x8357e0ull));
}
B5a8d6e:{NFSU2_TR(0x5a8d6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a8d73ull));
TAIL_STATIC(0x48bc50u,48b);
}
B5a8d73:L5a8d73:{c.instructions+=3;NFSU2_TR(0x5a8d73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5a8d75:{NFSU2_TR(0x5a8d75);
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
B5a8d77:{NFSU2_TR(0x5a8d77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a8d65u);}goto L5a8d65;}}
}
B5a8d79:L5a8d79:{c.instructions+=5;NFSU2_TR(0x5a8d79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a8d7a:{NFSU2_TR(0x5a8d7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a8d7b:{NFSU2_TR(0x5a8d7b);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x504ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5a8d82:{NFSU2_TR(0x5a8d82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a8d83:{NFSU2_TR(0x5a8d83);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a8d90:L5a8d90:{c.instructions+=8;NFSU2_TR(0x5a8d90);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8d91:{NFSU2_TR(0x5a8d91);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8d92:{NFSU2_TR(0x5a8d92);
__builtin_memmove((R+24),(R+4),4);
}
B5a8d94:{NFSU2_TR(0x5a8d94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a8d97:{NFSU2_TR(0x5a8d97);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a8d9a:{NFSU2_TR(0x5a8d9a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5a8d9c:{NFSU2_TR(0x5a8d9c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a8d9e:{NFSU2_TR(0x5a8d9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a8dc3;}}
}
B5a8da0:L5a8da0:{c.instructions+=9;NFSU2_TR(0x5a8da0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x506ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5a8da6:{NFSU2_TR(0x5a8da6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5a8da9:{NFSU2_TR(0x5a8da9);
__builtin_memmove((R+0),gp(0x86b378),4);
}
B5a8dae:{NFSU2_TR(0x5a8dae);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5a8daf:{NFSU2_TR(0x5a8daf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5a8db5:{NFSU2_TR(0x5a8db5);
__builtin_memmove(gp(0x86b378),(R+0),4);
}
B5a8dba:{NFSU2_TR(0x5a8dba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a8dbb:{NFSU2_TR(0x5a8dbb);
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
B5a8dbe:{NFSU2_TR(0x5a8dbe);
TAIL_STATIC(0x5dca30u,5dc);
}
B5a8dc3:L5a8dc3:{c.instructions+=12;NFSU2_TR(0x5a8dc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a8dc9:{NFSU2_TR(0x5a8dc9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8dca:{NFSU2_TR(0x5a8dca);
__builtin_memmove((R+28),gp(0x86518c),4);
}
B5a8dd0:{NFSU2_TR(0x5a8dd0);
__builtin_memmove((R+8),(R+28),4);
}
B5a8dd2:{NFSU2_TR(0x5a8dd2);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B5a8dd4:{NFSU2_TR(0x5a8dd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a8dd8:{NFSU2_TR(0x5a8dd8);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5a8ddc:{NFSU2_TR(0x5a8ddc);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a8de2:{NFSU2_TR(0x5a8de2);
{u32 ea_=u32(u32(8002376u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a8de8:{NFSU2_TR(0x5a8de8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a8dea:{NFSU2_TR(0x5a8dea);
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
B5a8ded:{NFSU2_TR(0x5a8ded);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a8e61;}}
}
B5a8def:L5a8def:{c.instructions+=2;NFSU2_TR(0x5a8def);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+4))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+4)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B5a8df2:{NFSU2_TR(0x5a8df2);
if(r1(R+518)){{goto L5a8e61;}}
}
B5a8df4:L5a8df4:{c.instructions+=3;NFSU2_TR(0x5a8df4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8df5:{NFSU2_TR(0x5a8df5);
__builtin_memmove((R+4),(R+24),4);
}
B5a8df7:{NFSU2_TR(0x5a8df7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a8dfcull));
TAIL_STATIC(0x5a0820u,5a0);
}
B5a8dfc:L5a8dfc:{c.instructions+=8;NFSU2_TR(0x5a8dfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B5a8dff:{NFSU2_TR(0x5a8dff);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a8e03:{NFSU2_TR(0x5a8e03);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5a8e07:{NFSU2_TR(0x5a8e07);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a8e0d:{NFSU2_TR(0x5a8e0d);
{u32 ea_=u32(u32(8002372u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a8e13:{NFSU2_TR(0x5a8e13);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a8e15:{NFSU2_TR(0x5a8e15);
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
B5a8e18:{NFSU2_TR(0x5a8e18);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a8e61;}}
}
B5a8e1a:L5a8e1a:{c.instructions+=4;NFSU2_TR(0x5a8e1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a8e1d:{NFSU2_TR(0x5a8e1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5a8e23:{NFSU2_TR(0x5a8e23);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8e24:{NFSU2_TR(0x5a8e24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a8e29ull));
TAIL_STATIC(0x440f70u,440);
}
B5a8e29:L5a8e29:{c.instructions+=5;NFSU2_TR(0x5a8e29);
{u32 ea_=u32(u32(8002364u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a8e2f:{NFSU2_TR(0x5a8e2f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5a8e32:{NFSU2_TR(0x5a8e32);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a8e34:{NFSU2_TR(0x5a8e34);
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
B5a8e37:{NFSU2_TR(0x5a8e37);
if(r1(R+514)){{goto L5a8e61;}}
}
B5a8e39:L5a8e39:{c.instructions+=3;NFSU2_TR(0x5a8e39);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),u32(0xc0ull)));
w1(R+523,scarry<u32>(r4(R+28),u32(0xc0ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xc0ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5a8e3f:{NFSU2_TR(0x5a8e3f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8e40:{NFSU2_TR(0x5a8e40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a8e45ull));
TAIL_STATIC(0x440f70u,440);
}
B5a8e45:L5a8e45:{c.instructions+=5;NFSU2_TR(0x5a8e45);
{u32 ea_=u32(u32(8002368u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a8e4b:{NFSU2_TR(0x5a8e4b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5a8e4e:{NFSU2_TR(0x5a8e4e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a8e50:{NFSU2_TR(0x5a8e50);
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
B5a8e53:{NFSU2_TR(0x5a8e53);
if(r1(R+514)){{goto L5a8e61;}}
}
B5a8e55:L5a8e55:{c.instructions+=3;NFSU2_TR(0x5a8e55);
u8 U[4];
w4(U+0,u32(0x7a2138ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8e5a:{NFSU2_TR(0x5a8e5a);
__builtin_memmove((R+4),(R+24),4);
}
B5a8e5c:{NFSU2_TR(0x5a8e5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a8e61ull));
TAIL_STATIC(0x59e400u,59e);
}
B5a8e61:L5a8e61:{c.instructions+=4;NFSU2_TR(0x5a8e61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a8e62:{NFSU2_TR(0x5a8e62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a8e63:{NFSU2_TR(0x5a8e63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5a8e64:{NFSU2_TR(0x5a8e64);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a8e70:L5a8e70:{c.instructions+=8;NFSU2_TR(0x5a8e70);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8e71:{NFSU2_TR(0x5a8e71);
__builtin_memmove((R+20),(R+16),4);
}
B5a8e73:{NFSU2_TR(0x5a8e73);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5a8e76:{NFSU2_TR(0x5a8e76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B5a8e79:{NFSU2_TR(0x5a8e79);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8e7a:{NFSU2_TR(0x5a8e7a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8e7b:{NFSU2_TR(0x5a8e7b);
__builtin_memmove((R+24),(R+4),4);
}
B5a8e7d:{NFSU2_TR(0x5a8e7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a8e82ull));
TAIL_STATIC(0x5a0d80u,5a0);
}
B5a8e82:L5a8e82:{c.instructions+=4;NFSU2_TR(0x5a8e82);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffed0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5a8e88:{NFSU2_TR(0x5a8e88);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5a8e8a:{NFSU2_TR(0x5a8e8a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5a8e8c:{NFSU2_TR(0x5a8e8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a8e91ull));
TAIL_STATIC(0x59e430u,59e);
}
B5a8e91:L5a8e91:{c.instructions+=3;NFSU2_TR(0x5a8e91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3d8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a8e97:{NFSU2_TR(0x5a8e97);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5a8e99:{NFSU2_TR(0x5a8e99);
if(r1(R+518)){{goto L5a8f80;}}
}
B5a8e9f:L5a8e9f:{c.instructions+=2;NFSU2_TR(0x5a8e9f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5a8ea0:{NFSU2_TR(0x5a8ea0);
if(r1(R+518)){{goto L5a8ee9;}}
}
B5a8ea2:L5a8ea2:{c.instructions+=2;NFSU2_TR(0x5a8ea2);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5a8ea3:{NFSU2_TR(0x5a8ea3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a8f97;}}
}
B5a8ea9:L5a8ea9:{c.instructions+=15;NFSU2_TR(0x5a8ea9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffff38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a8eaf:{NFSU2_TR(0x5a8eaf);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
}
B5a8eb2:{NFSU2_TR(0x5a8eb2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5a8eb4:{NFSU2_TR(0x5a8eb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a8eb7:{NFSU2_TR(0x5a8eb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a8eba:{NFSU2_TR(0x5a8eba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffff38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a8ec0:{NFSU2_TR(0x5a8ec0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
}
B5a8ec5:{NFSU2_TR(0x5a8ec5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5a8ec7:{NFSU2_TR(0x5a8ec7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a8eca:{NFSU2_TR(0x5a8eca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a8ecd:{NFSU2_TR(0x5a8ecd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffff38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a8ed3:{NFSU2_TR(0x5a8ed3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a8ed9:{NFSU2_TR(0x5a8ed9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffee9ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5a8edf:{NFSU2_TR(0x5a8edf);
w4(R+8,u32(0x1ull));
}
B5a8ee4:{NFSU2_TR(0x5a8ee4);
{goto L5a8f97;}
}
B5a8ee9:L5a8ee9:{c.instructions+=31;NFSU2_TR(0x5a8ee9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffff38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a8eef:{NFSU2_TR(0x5a8eef);
{u32 ea_=u32(u32(8002380u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a8ef5:{NFSU2_TR(0x5a8ef5);
{u32 ea_=u32(r4(R+0)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a8ef8:{NFSU2_TR(0x5a8ef8);
{u32 ea_=u32(r4(R+0)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a8efb:{NFSU2_TR(0x5a8efb);
{u32 ea_=u32(u32(8002380u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a8f01:{NFSU2_TR(0x5a8f01);
{u32 ea_=u32(r4(R+0)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a8f04:{NFSU2_TR(0x5a8f04);
{u32 ea_=u32(u32(8002380u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a8f0a:{NFSU2_TR(0x5a8f0a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a8f0e:{NFSU2_TR(0x5a8f0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a8f12:{NFSU2_TR(0x5a8f12);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a8f15:{NFSU2_TR(0x5a8f15);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a8f17:{NFSU2_TR(0x5a8f17);
{u32 ea_=u32(r4(R+0)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a8f1a:{NFSU2_TR(0x5a8f1a);
{u32 ea_=u32(r4(R+0)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a8f1d:{NFSU2_TR(0x5a8f1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffff38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a8f23:{NFSU2_TR(0x5a8f23);
{u32 ea_=u32(u32(8002380u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a8f29:{NFSU2_TR(0x5a8f29);
{u32 ea_=u32(r4(R+0)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a8f2f:{NFSU2_TR(0x5a8f2f);
{u32 ea_=u32(r4(R+0)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a8f35:{NFSU2_TR(0x5a8f35);
{u32 ea_=u32(u32(8002380u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a8f3b:{NFSU2_TR(0x5a8f3b);
{u32 ea_=u32(r4(R+0)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a8f41:{NFSU2_TR(0x5a8f41);
{u32 ea_=u32(u32(8002380u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a8f47:{NFSU2_TR(0x5a8f47);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a8f4b:{NFSU2_TR(0x5a8f4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a8f4f:{NFSU2_TR(0x5a8f4f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a8f51:{NFSU2_TR(0x5a8f51);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a8f57:{NFSU2_TR(0x5a8f57);
{u32 ea_=u32(r4(R+0)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a8f5d:{NFSU2_TR(0x5a8f5d);
w4(R+8,u32(0x1ull));
}
B5a8f62:{NFSU2_TR(0x5a8f62);
{u32 ea_=u32(r4(R+0)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a8f68:{NFSU2_TR(0x5a8f68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffff38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a8f6e:{NFSU2_TR(0x5a8f6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x160ull))));
w4(U+4,u32(0x411ccccdull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a8f78:{NFSU2_TR(0x5a8f78);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffee9ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5a8f7e:{NFSU2_TR(0x5a8f7e);
{goto L5a8f97;}
}
B5a8f80:L5a8f80:{c.instructions+=3;NFSU2_TR(0x5a8f80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffff38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a8f86:{NFSU2_TR(0x5a8f86);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x160ull))));
w4(U+4,u32(0x411ccccdull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a8f90:{NFSU2_TR(0x5a8f90);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffee9ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5a8f97:L5a8f97:{c.instructions+=5;NFSU2_TR(0x5a8f97);
{u32 ea_=u32(u32(8002400u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a8f9d:{NFSU2_TR(0x5a8f9d);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a8fa3:{NFSU2_TR(0x5a8fa3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a8fa5:{NFSU2_TR(0x5a8fa5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a8fa8:{NFSU2_TR(0x5a8fa8);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a8fbc;}}
}
B5a8faa:L5a8faa:{c.instructions+=3;NFSU2_TR(0x5a8faa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffff38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a8fb0:{NFSU2_TR(0x5a8fb0);
__builtin_memmove((R+4),gp(0x7a1b60),4);
}
B5a8fb6:{NFSU2_TR(0x5a8fb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a8fbc:L5a8fbc:{c.instructions+=2;NFSU2_TR(0x5a8fbc);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B5a8fbe:{NFSU2_TR(0x5a8fbe);
if(r1(R+518)){{goto L5a8fc7;}}
}
B5a8fc0:L5a8fc0:{c.instructions+=2;NFSU2_TR(0x5a8fc0);
__builtin_memmove((R+4),(R+24),4);
}
B5a8fc2:{NFSU2_TR(0x5a8fc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a8fc7ull));
TAIL_STATIC(0x5a0d80u,5a0);
}
B5a8fc7:L5a8fc7:{c.instructions+=5;NFSU2_TR(0x5a8fc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a8fc8:{NFSU2_TR(0x5a8fc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a8fc9:{NFSU2_TR(0x5a8fc9);
__builtin_memmove((R+16),(R+20),4);
}
B5a8fcb:{NFSU2_TR(0x5a8fcb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a8fcc:{NFSU2_TR(0x5a8fcc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a8fd0:L5a8fd0:{c.instructions+=5;NFSU2_TR(0x5a8fd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8fd1:{NFSU2_TR(0x5a8fd1);
__builtin_memmove((R+24),(R+4),4);
}
B5a8fd3:{NFSU2_TR(0x5a8fd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a8fd5:{NFSU2_TR(0x5a8fd5);
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
B5a8fd7:{NFSU2_TR(0x5a8fd7);
if(r1(R+518)){TAIL_STATIC(0x5a9000u,5a9);}
}
B5a8fd9:L5a8fd9:{c.instructions+=1;NFSU2_TR(0x5a8fd9);
__builtin_memmove((R+16),(R+16),4);
}
B5a8fe0:L5a8fe0:{c.instructions+=7;NFSU2_TR(0x5a8fe0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5a8fe2:{NFSU2_TR(0x5a8fe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a8fe5:{NFSU2_TR(0x5a8fe5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5a8fe7:{NFSU2_TR(0x5a8fe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a8fea:{NFSU2_TR(0x5a8fea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffdd0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5a8ff0:{NFSU2_TR(0x5a8ff0);
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
B5a8ff2:{NFSU2_TR(0x5a8ff2);
if(r1(R+518)){{goto L5a8ffa;}}
}
B5a8ff4:L5a8ff4:{c.instructions+=3;NFSU2_TR(0x5a8ff4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a8ff6:{NFSU2_TR(0x5a8ff6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a8ff8:{NFSU2_TR(0x5a8ff8);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a8ffaull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5a8ffa:L5a8ffa:{c.instructions+=3;NFSU2_TR(0x5a8ffa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a8ffc:{NFSU2_TR(0x5a8ffc);
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
B5a8ffe:{NFSU2_TR(0x5a8ffe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a8fe0u);}goto L5a8fe0;}}
TAIL_STATIC(0x5a9000u,5a9);
}
XIT:NFSU2_TR_EXIT(0x5a8,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
