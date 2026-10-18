#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_403(u8* __restrict R,Cpu& c);
u32 body_405(u8* __restrict R,Cpu& c);
u32 body_409(u8* __restrict R,Cpu& c);
u32 body_40a(u8* __restrict R,Cpu& c);
u32 body_40e(u8* __restrict R,Cpu& c);
u32 body_40f(u8* __restrict R,Cpu& c);
u32 body_414(u8* __restrict R,Cpu& c);
u32 body_419(u8* __restrict R,Cpu& c);
u32 body_41b(u8* __restrict R,Cpu& c);
u32 body_41d(u8* __restrict R,Cpu& c);
u32 body_420(u8* __restrict R,Cpu& c);
u32 body_423(u8* __restrict R,Cpu& c);
u32 body_428(u8* __restrict R,Cpu& c);
u32 body_429(u8* __restrict R,Cpu& c);
u32 body_42a(u8* __restrict R,Cpu& c);
u32 body_42c(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_591(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_59f(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5d5(u8* __restrict R,Cpu& c);
u32 body_5ee(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_60b(u8* __restrict R,Cpu& c);
u32 body_60c(u8* __restrict R,Cpu& c);
u32 body_614(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x42b,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x42b,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_42b(u8* __restrict R,Cpu& c);
u32 page_42b(Cpu& c){return body_42b(c.regs.data(),c);}
__attribute__((noinline)) u32 body_42b(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x42b002:goto L42b002;
case 0x42b006:c.instructions+=4;goto B42b006;
case 0x42b00c:c.instructions+=3;goto B42b00c;
case 0x42b00f:c.instructions+=2;goto B42b00f;
case 0x42b011:c.instructions+=1;goto B42b011;
case 0x42b013:goto L42b013;
case 0x42b017:c.instructions+=2;goto B42b017;
case 0x42b01a:c.instructions+=1;goto B42b01a;
case 0x42b01c:goto L42b01c;
case 0x42b022:goto L42b022;
case 0x42b024:c.instructions+=5;goto B42b024;
case 0x42b026:c.instructions+=4;goto B42b026;
case 0x42b028:c.instructions+=3;goto B42b028;
case 0x42b02a:c.instructions+=2;goto B42b02a;
case 0x42b02d:c.instructions+=1;goto B42b02d;
case 0x42b02f:goto L42b02f;
case 0x42b031:c.instructions+=1;goto B42b031;
case 0x42b036:goto L42b036;
case 0x42b039:c.instructions+=6;goto B42b039;
case 0x42b03b:c.instructions+=5;goto B42b03b;
case 0x42b03d:c.instructions+=4;goto B42b03d;
case 0x42b03f:c.instructions+=3;goto B42b03f;
case 0x42b041:c.instructions+=2;goto B42b041;
case 0x42b043:c.instructions+=1;goto B42b043;
case 0x42b046:goto L42b046;
case 0x42b048:c.instructions+=2;goto B42b048;
case 0x42b04f:c.instructions+=1;goto B42b04f;
case 0x42b054:goto L42b054;
case 0x42b05b:c.instructions+=7;goto B42b05b;
case 0x42b062:c.instructions+=6;goto B42b062;
case 0x42b063:c.instructions+=5;goto B42b063;
case 0x42b064:c.instructions+=4;goto B42b064;
case 0x42b065:c.instructions+=3;goto B42b065;
case 0x42b067:c.instructions+=2;goto B42b067;
case 0x42b068:c.instructions+=1;goto B42b068;
case 0x42b06b:goto L42b06b;
case 0x42b072:c.instructions+=9;goto B42b072;
case 0x42b075:c.instructions+=8;goto B42b075;
case 0x42b078:c.instructions+=7;goto B42b078;
case 0x42b07b:c.instructions+=6;goto B42b07b;
case 0x42b07c:c.instructions+=5;goto B42b07c;
case 0x42b080:c.instructions+=4;goto B42b080;
case 0x42b084:c.instructions+=3;goto B42b084;
case 0x42b088:c.instructions+=2;goto B42b088;
case 0x42b089:c.instructions+=1;goto B42b089;
case 0x42b08e:goto L42b08e;
case 0x42b090:c.instructions+=1;goto B42b090;
case 0x42b092:goto L42b092;
case 0x42b099:goto L42b099;
case 0x42b09f:c.instructions+=2;goto B42b09f;
case 0x42b0a1:c.instructions+=1;goto B42b0a1;
case 0x42b0a3:goto L42b0a3;
case 0x42b0a5:c.instructions+=1;goto B42b0a5;
case 0x42b0aa:goto L42b0aa;
case 0x42b0ac:c.instructions+=1;goto B42b0ac;
case 0x42b0b1:goto L42b0b1;
case 0x42b0b4:c.instructions+=6;goto B42b0b4;
case 0x42b0b6:c.instructions+=5;goto B42b0b6;
case 0x42b0b8:c.instructions+=4;goto B42b0b8;
case 0x42b0ba:c.instructions+=3;goto B42b0ba;
case 0x42b0bc:c.instructions+=2;goto B42b0bc;
case 0x42b0be:c.instructions+=1;goto B42b0be;
case 0x42b0c1:goto L42b0c1;
case 0x42b0c3:c.instructions+=2;goto B42b0c3;
case 0x42b0ca:c.instructions+=1;goto B42b0ca;
case 0x42b0cf:goto L42b0cf;
case 0x42b0d6:c.instructions+=7;goto B42b0d6;
case 0x42b0dd:c.instructions+=6;goto B42b0dd;
case 0x42b0de:c.instructions+=5;goto B42b0de;
case 0x42b0df:c.instructions+=4;goto B42b0df;
case 0x42b0e0:c.instructions+=3;goto B42b0e0;
case 0x42b0e2:c.instructions+=2;goto B42b0e2;
case 0x42b0e3:c.instructions+=1;goto B42b0e3;
case 0x42b0e6:goto L42b0e6;
case 0x42b0e9:c.instructions+=2;goto B42b0e9;
case 0x42b0ed:c.instructions+=1;goto B42b0ed;
case 0x42b0ef:goto L42b0ef;
case 0x42b0f2:c.instructions+=1;goto B42b0f2;
case 0x42b0f7:goto L42b0f7;
case 0x42b0f9:c.instructions+=1;goto B42b0f9;
case 0x42b0fb:goto L42b0fb;
case 0x42b0fd:c.instructions+=4;goto B42b0fd;
case 0x42b100:c.instructions+=3;goto B42b100;
case 0x42b101:c.instructions+=2;goto B42b101;
case 0x42b103:c.instructions+=1;goto B42b103;
case 0x42b109:goto L42b109;
case 0x42b10b:c.instructions+=1;goto B42b10b;
case 0x42b10d:goto L42b10d;
case 0x42b10f:c.instructions+=2;goto B42b10f;
case 0x42b111:c.instructions+=1;goto B42b111;
case 0x42b117:goto L42b117;
case 0x42b119:c.instructions+=1;goto B42b119;
case 0x42b11b:goto L42b11b;
case 0x42b11e:c.instructions+=2;goto B42b11e;
case 0x42b121:c.instructions+=1;goto B42b121;
case 0x42b126:goto L42b126;
case 0x42b128:c.instructions+=2;goto B42b128;
case 0x42b12a:c.instructions+=1;goto B42b12a;
case 0x42b130:goto L42b130;
case 0x42b135:c.instructions+=3;goto B42b135;
case 0x42b137:c.instructions+=2;goto B42b137;
case 0x42b139:c.instructions+=1;goto B42b139;
case 0x42b13f:goto L42b13f;
case 0x42b141:c.instructions+=1;goto B42b141;
case 0x42b143:goto L42b143;
case 0x42b148:c.instructions+=2;goto B42b148;
case 0x42b149:c.instructions+=1;goto B42b149;
case 0x42b14e:goto L42b14e;
case 0x42b151:c.instructions+=4;goto B42b151;
case 0x42b155:c.instructions+=3;goto B42b155;
case 0x42b157:c.instructions+=2;goto B42b157;
case 0x42b162:c.instructions+=1;goto B42b162;
case 0x42b164:goto L42b164;
case 0x42b169:c.instructions+=3;goto B42b169;
case 0x42b16b:c.instructions+=2;goto B42b16b;
case 0x42b16d:c.instructions+=1;goto B42b16d;
case 0x42b172:goto L42b172;
case 0x42b17d:c.instructions+=2;goto B42b17d;
case 0x42b17f:c.instructions+=1;goto B42b17f;
case 0x42b184:goto L42b184;
case 0x42b186:c.instructions+=3;goto B42b186;
case 0x42b191:c.instructions+=2;goto B42b191;
case 0x42b193:c.instructions+=1;goto B42b193;
case 0x42b198:goto L42b198;
case 0x42b19f:c.instructions+=2;goto B42b19f;
case 0x42b1a1:c.instructions+=1;goto B42b1a1;
case 0x42b1a3:goto L42b1a3;
case 0x42b1a5:c.instructions+=1;goto B42b1a5;
case 0x42b1a7:goto L42b1a7;
case 0x42b1a9:c.instructions+=5;goto B42b1a9;
case 0x42b1ab:c.instructions+=4;goto B42b1ab;
case 0x42b1ac:c.instructions+=3;goto B42b1ac;
case 0x42b1ae:c.instructions+=2;goto B42b1ae;
case 0x42b1b4:c.instructions+=1;goto B42b1b4;
case 0x42b1ba:goto L42b1ba;
case 0x42b1bf:goto L42b1bf;
case 0x42b1c2:c.instructions+=2;goto B42b1c2;
case 0x42b1c3:c.instructions+=1;goto B42b1c3;
case 0x42b1c6:goto L42b1c6;
case 0x42b1cb:goto L42b1cb;
case 0x42b1ce:c.instructions+=2;goto B42b1ce;
case 0x42b1cf:c.instructions+=1;goto B42b1cf;
case 0x42b1d4:goto L42b1d4;
case 0x42b1d6:c.instructions+=2;goto B42b1d6;
case 0x42b1d8:c.instructions+=1;goto B42b1d8;
case 0x42b1dd:goto L42b1dd;
case 0x42b1df:c.instructions+=1;goto B42b1df;
case 0x42b1e1:goto L42b1e1;
case 0x42b1e3:c.instructions+=4;goto B42b1e3;
case 0x42b1e6:c.instructions+=3;goto B42b1e6;
case 0x42b1e7:c.instructions+=2;goto B42b1e7;
case 0x42b1e9:c.instructions+=1;goto B42b1e9;
case 0x42b1ec:goto L42b1ec;
case 0x42b1ee:c.instructions+=3;goto B42b1ee;
case 0x42b1f0:c.instructions+=2;goto B42b1f0;
case 0x42b1f8:c.instructions+=1;goto B42b1f8;
case 0x42b1fa:goto L42b1fa;
case 0x42b1fc:c.instructions+=2;goto B42b1fc;
case 0x42b1fe:c.instructions+=1;goto B42b1fe;
case 0x42b200:goto L42b200;
case 0x42b202:c.instructions+=6;goto B42b202;
case 0x42b204:c.instructions+=5;goto B42b204;
case 0x42b208:c.instructions+=4;goto B42b208;
case 0x42b209:c.instructions+=3;goto B42b209;
case 0x42b20b:c.instructions+=2;goto B42b20b;
case 0x42b211:c.instructions+=1;goto B42b211;
case 0x42b217:goto L42b217;
case 0x42b21b:c.instructions+=2;goto B42b21b;
case 0x42b21d:c.instructions+=1;goto B42b21d;
case 0x42b21f:goto L42b21f;
case 0x42b221:c.instructions+=1;goto B42b221;
case 0x42b226:goto L42b226;
case 0x42b228:c.instructions+=2;goto B42b228;
case 0x42b22a:c.instructions+=1;goto B42b22a;
case 0x42b22c:goto L42b22c;
case 0x42b22e:c.instructions+=4;goto B42b22e;
case 0x42b230:c.instructions+=3;goto B42b230;
case 0x42b233:c.instructions+=2;goto B42b233;
case 0x42b234:c.instructions+=1;goto B42b234;
case 0x42b237:goto L42b237;
case 0x42b239:c.instructions+=2;goto B42b239;
case 0x42b23b:c.instructions+=1;goto B42b23b;
case 0x42b23d:goto L42b23d;
case 0x42b23f:c.instructions+=2;goto B42b23f;
case 0x42b241:c.instructions+=1;goto B42b241;
case 0x42b243:goto L42b243;
case 0x42b245:goto L42b245;
case 0x42b247:c.instructions+=4;goto B42b247;
case 0x42b249:c.instructions+=3;goto B42b249;
case 0x42b24a:c.instructions+=2;goto B42b24a;
case 0x42b24c:c.instructions+=1;goto B42b24c;
case 0x42b252:goto L42b252;
case 0x42b254:c.instructions+=1;goto B42b254;
case 0x42b259:goto L42b259;
case 0x42b25d:c.instructions+=2;goto B42b25d;
case 0x42b25f:c.instructions+=1;goto B42b25f;
case 0x42b261:goto L42b261;
case 0x42b266:c.instructions+=2;goto B42b266;
case 0x42b268:c.instructions+=1;goto B42b268;
case 0x42b26a:goto L42b26a;
case 0x42b26c:c.instructions+=1;goto B42b26c;
case 0x42b271:goto L42b271;
case 0x42b273:c.instructions+=1;goto B42b273;
case 0x42b275:goto L42b275;
case 0x42b278:c.instructions+=2;goto B42b278;
case 0x42b27c:c.instructions+=1;goto B42b27c;
case 0x42b27e:goto L42b27e;
case 0x42b280:c.instructions+=1;goto B42b280;
case 0x42b285:goto L42b285;
case 0x42b287:goto L42b287;
case 0x42b28a:c.instructions+=1;goto B42b28a;
case 0x42b28c:goto L42b28c;
case 0x42b28f:c.instructions+=2;goto B42b28f;
case 0x42b293:c.instructions+=1;goto B42b293;
case 0x42b295:goto L42b295;
case 0x42b296:c.instructions+=1;goto B42b296;
case 0x42b29b:goto L42b29b;
case 0x42b29e:c.instructions+=3;goto B42b29e;
case 0x42b2a1:c.instructions+=2;goto B42b2a1;
case 0x42b2a2:c.instructions+=1;goto B42b2a2;
case 0x42b2a7:goto L42b2a7;
case 0x42b2a9:goto L42b2a9;
case 0x42b2ac:c.instructions+=2;goto B42b2ac;
case 0x42b2b0:c.instructions+=1;goto B42b2b0;
case 0x42b2b2:goto L42b2b2;
case 0x42b2b5:goto L42b2b5;
case 0x42b2ba:goto L42b2ba;
case 0x42b2bc:c.instructions+=1;goto B42b2bc;
case 0x42b2c1:goto L42b2c1;
case 0x42b2c7:c.instructions+=2;goto B42b2c7;
case 0x42b2c9:c.instructions+=1;goto B42b2c9;
case 0x42b2cb:goto L42b2cb;
case 0x42b2d0:c.instructions+=1;goto B42b2d0;
case 0x42b2d2:goto L42b2d2;
case 0x42b2d7:c.instructions+=8;goto B42b2d7;
case 0x42b2dd:c.instructions+=7;goto B42b2dd;
case 0x42b2e1:c.instructions+=6;goto B42b2e1;
case 0x42b2e5:c.instructions+=5;goto B42b2e5;
case 0x42b2eb:c.instructions+=4;goto B42b2eb;
case 0x42b2f1:c.instructions+=3;goto B42b2f1;
case 0x42b2f3:c.instructions+=2;goto B42b2f3;
case 0x42b2f6:c.instructions+=1;goto B42b2f6;
case 0x42b2f8:goto L42b2f8;
case 0x42b2fb:c.instructions+=7;goto B42b2fb;
case 0x42b2fd:c.instructions+=6;goto B42b2fd;
case 0x42b2ff:c.instructions+=5;goto B42b2ff;
case 0x42b301:c.instructions+=4;goto B42b301;
case 0x42b303:c.instructions+=3;goto B42b303;
case 0x42b305:c.instructions+=2;goto B42b305;
case 0x42b307:c.instructions+=1;goto B42b307;
case 0x42b30a:goto L42b30a;
case 0x42b311:c.instructions+=7;goto B42b311;
case 0x42b312:c.instructions+=6;goto B42b312;
case 0x42b313:c.instructions+=5;goto B42b313;
case 0x42b31a:c.instructions+=4;goto B42b31a;
case 0x42b31b:c.instructions+=3;goto B42b31b;
case 0x42b31d:c.instructions+=2;goto B42b31d;
case 0x42b31e:c.instructions+=1;goto B42b31e;
case 0x42b330:goto L42b330;
case 0x42b332:c.instructions+=1;goto B42b332;
case 0x42b337:goto L42b337;
case 0x42b340:goto L42b340;
case 0x42b341:c.instructions+=15;goto B42b341;
case 0x42b343:c.instructions+=14;goto B42b343;
case 0x42b346:c.instructions+=13;goto B42b346;
case 0x42b34c:c.instructions+=12;goto B42b34c;
case 0x42b34d:c.instructions+=11;goto B42b34d;
case 0x42b350:c.instructions+=10;goto B42b350;
case 0x42b352:c.instructions+=9;goto B42b352;
case 0x42b353:c.instructions+=8;goto B42b353;
case 0x42b357:c.instructions+=7;goto B42b357;
case 0x42b35d:c.instructions+=6;goto B42b35d;
case 0x42b35e:c.instructions+=5;goto B42b35e;
case 0x42b364:c.instructions+=4;goto B42b364;
case 0x42b366:c.instructions+=3;goto B42b366;
case 0x42b368:c.instructions+=2;goto B42b368;
case 0x42b36c:c.instructions+=1;goto B42b36c;
case 0x42b36e:goto L42b36e;
case 0x42b374:c.instructions+=1;goto B42b374;
case 0x42b376:goto L42b376;
case 0x42b37c:c.instructions+=2;goto B42b37c;
case 0x42b380:c.instructions+=1;goto B42b380;
case 0x42b382:goto L42b382;
case 0x42b388:c.instructions+=1;goto B42b388;
case 0x42b38c:goto L42b38c;
case 0x42b38f:c.instructions+=2;goto B42b38f;
case 0x42b392:c.instructions+=1;goto B42b392;
case 0x42b397:goto L42b397;
case 0x42b39b:c.instructions+=10;goto B42b39b;
case 0x42b3a1:c.instructions+=9;goto B42b3a1;
case 0x42b3a5:c.instructions+=8;goto B42b3a5;
case 0x42b3a9:c.instructions+=7;goto B42b3a9;
case 0x42b3ad:c.instructions+=6;goto B42b3ad;
case 0x42b3af:c.instructions+=5;goto B42b3af;
case 0x42b3b7:c.instructions+=4;goto B42b3b7;
case 0x42b3bd:c.instructions+=3;goto B42b3bd;
case 0x42b3bf:c.instructions+=2;goto B42b3bf;
case 0x42b3c2:c.instructions+=1;goto B42b3c2;
case 0x42b3c4:goto L42b3c4;
case 0x42b3ca:c.instructions+=2;goto B42b3ca;
case 0x42b3ce:c.instructions+=1;goto B42b3ce;
case 0x42b3d0:goto L42b3d0;
case 0x42b3d4:goto L42b3d4;
case 0x42b3db:c.instructions+=3;goto B42b3db;
case 0x42b3dd:c.instructions+=2;goto B42b3dd;
case 0x42b3e5:c.instructions+=1;goto B42b3e5;
case 0x42b3e7:goto L42b3e7;
case 0x42b3ea:c.instructions+=2;goto B42b3ea;
case 0x42b3ec:c.instructions+=1;goto B42b3ec;
case 0x42b3f0:goto L42b3f0;
case 0x42b3f1:c.instructions+=2;goto B42b3f1;
case 0x42b3f3:c.instructions+=1;goto B42b3f3;
case 0x42b3f8:goto L42b3f8;
case 0x42b3fc:c.instructions+=9;goto B42b3fc;
case 0x42b3ff:c.instructions+=8;goto B42b3ff;
case 0x42b405:c.instructions+=7;goto B42b405;
case 0x42b409:c.instructions+=6;goto B42b409;
case 0x42b40d:c.instructions+=5;goto B42b40d;
case 0x42b40f:c.instructions+=4;goto B42b40f;
case 0x42b415:c.instructions+=3;goto B42b415;
case 0x42b417:c.instructions+=2;goto B42b417;
case 0x42b41a:c.instructions+=1;goto B42b41a;
case 0x42b41c:goto L42b41c;
case 0x42b41e:c.instructions+=7;goto B42b41e;
case 0x42b424:c.instructions+=6;goto B42b424;
case 0x42b428:c.instructions+=5;goto B42b428;
case 0x42b42c:c.instructions+=4;goto B42b42c;
case 0x42b432:c.instructions+=3;goto B42b432;
case 0x42b434:c.instructions+=2;goto B42b434;
case 0x42b437:c.instructions+=1;goto B42b437;
case 0x42b439:goto L42b439;
case 0x42b43d:c.instructions+=3;goto B42b43d;
case 0x42b43f:c.instructions+=2;goto B42b43f;
case 0x42b442:c.instructions+=1;goto B42b442;
case 0x42b444:goto L42b444;
case 0x42b448:c.instructions+=1;goto B42b448;
case 0x42b44a:goto L42b44a;
case 0x42b44c:goto L42b44c;
case 0x42b44f:c.instructions+=2;goto B42b44f;
case 0x42b450:c.instructions+=1;goto B42b450;
case 0x42b452:goto L42b452;
case 0x42b456:c.instructions+=1;goto B42b456;
case 0x42b458:goto L42b458;
case 0x42b45c:c.instructions+=4;goto B42b45c;
case 0x42b462:c.instructions+=3;goto B42b462;
case 0x42b464:c.instructions+=2;goto B42b464;
case 0x42b467:c.instructions+=1;goto B42b467;
case 0x42b46d:goto L42b46d;
case 0x42b46f:c.instructions+=2;goto B42b46f;
case 0x42b472:c.instructions+=1;goto B42b472;
case 0x42b474:goto L42b474;
case 0x42b476:c.instructions+=1;goto B42b476;
case 0x42b478:goto L42b478;
case 0x42b47b:c.instructions+=5;goto B42b47b;
case 0x42b47d:c.instructions+=4;goto B42b47d;
case 0x42b483:c.instructions+=3;goto B42b483;
case 0x42b485:c.instructions+=2;goto B42b485;
case 0x42b488:c.instructions+=1;goto B42b488;
case 0x42b48a:goto L42b48a;
case 0x42b48d:c.instructions+=6;goto B42b48d;
case 0x42b491:c.instructions+=5;goto B42b491;
case 0x42b493:c.instructions+=4;goto B42b493;
case 0x42b499:c.instructions+=3;goto B42b499;
case 0x42b49b:c.instructions+=2;goto B42b49b;
case 0x42b49e:c.instructions+=1;goto B42b49e;
case 0x42b4a4:goto L42b4a4;
case 0x42b4a6:c.instructions+=6;goto B42b4a6;
case 0x42b4ad:c.instructions+=5;goto B42b4ad;
case 0x42b4b4:c.instructions+=4;goto B42b4b4;
case 0x42b4bb:c.instructions+=3;goto B42b4bb;
case 0x42b4c0:c.instructions+=2;goto B42b4c0;
case 0x42b4c4:c.instructions+=1;goto B42b4c4;
case 0x42b4c5:goto L42b4c5;
case 0x42b4c7:goto L42b4c7;
case 0x42b4c8:c.instructions+=2;goto B42b4c8;
case 0x42b4cc:c.instructions+=1;goto B42b4cc;
case 0x42b4d1:goto L42b4d1;
case 0x42b4d7:c.instructions+=12;goto B42b4d7;
case 0x42b4db:c.instructions+=11;goto B42b4db;
case 0x42b4dc:c.instructions+=10;goto B42b4dc;
case 0x42b4e0:c.instructions+=9;goto B42b4e0;
case 0x42b4e1:c.instructions+=8;goto B42b4e1;
case 0x42b4e2:c.instructions+=7;goto B42b4e2;
case 0x42b4e3:c.instructions+=6;goto B42b4e3;
case 0x42b4e7:c.instructions+=5;goto B42b4e7;
case 0x42b4e8:c.instructions+=4;goto B42b4e8;
case 0x42b4ec:c.instructions+=3;goto B42b4ec;
case 0x42b4f4:c.instructions+=2;goto B42b4f4;
case 0x42b4fc:c.instructions+=1;goto B42b4fc;
case 0x42b501:goto L42b501;
case 0x42b503:c.instructions+=1;goto B42b503;
case 0x42b505:goto L42b505;
case 0x42b509:c.instructions+=3;goto B42b509;
case 0x42b50a:c.instructions+=2;goto B42b50a;
case 0x42b50e:c.instructions+=1;goto B42b50e;
case 0x42b513:goto L42b513;
case 0x42b517:c.instructions+=4;goto B42b517;
case 0x42b51b:c.instructions+=3;goto B42b51b;
case 0x42b51c:c.instructions+=2;goto B42b51c;
case 0x42b51f:c.instructions+=1;goto B42b51f;
case 0x42b524:goto L42b524;
case 0x42b525:c.instructions+=5;goto B42b525;
case 0x42b526:c.instructions+=4;goto B42b526;
case 0x42b527:c.instructions+=3;goto B42b527;
case 0x42b529:c.instructions+=2;goto B42b529;
case 0x42b52a:c.instructions+=1;goto B42b52a;
case 0x42b52d:goto L42b52d;
case 0x42b531:c.instructions+=1;goto B42b531;
case 0x42b533:goto L42b533;
case 0x42b535:c.instructions+=2;goto B42b535;
case 0x42b537:c.instructions+=1;goto B42b537;
case 0x42b539:goto L42b539;
case 0x42b53c:c.instructions+=1;goto B42b53c;
case 0x42b53e:goto L42b53e;
case 0x42b542:c.instructions+=3;goto B42b542;
case 0x42b543:c.instructions+=2;goto B42b543;
case 0x42b545:c.instructions+=1;goto B42b545;
case 0x42b54a:goto L42b54a;
case 0x42b54e:c.instructions+=5;goto B42b54e;
case 0x42b551:c.instructions+=4;goto B42b551;
case 0x42b552:c.instructions+=3;goto B42b552;
case 0x42b553:c.instructions+=2;goto B42b553;
case 0x42b555:c.instructions+=1;goto B42b555;
case 0x42b55a:goto L42b55a;
case 0x42b55b:c.instructions+=5;goto B42b55b;
case 0x42b55c:c.instructions+=4;goto B42b55c;
case 0x42b55d:c.instructions+=3;goto B42b55d;
case 0x42b55f:c.instructions+=2;goto B42b55f;
case 0x42b560:c.instructions+=1;goto B42b560;
case 0x42b570:goto L42b570;
case 0x42b571:c.instructions+=5;goto B42b571;
case 0x42b572:c.instructions+=4;goto B42b572;
case 0x42b576:c.instructions+=3;goto B42b576;
case 0x42b577:c.instructions+=2;goto B42b577;
case 0x42b579:c.instructions+=1;goto B42b579;
case 0x42b57e:goto L42b57e;
case 0x42b57f:c.instructions+=2;goto B42b57f;
case 0x42b581:c.instructions+=1;goto B42b581;
case 0x42b586:goto L42b586;
case 0x42b588:c.instructions+=7;goto B42b588;
case 0x42b589:c.instructions+=6;goto B42b589;
case 0x42b58f:c.instructions+=5;goto B42b58f;
case 0x42b599:c.instructions+=4;goto B42b599;
case 0x42b59f:c.instructions+=3;goto B42b59f;
case 0x42b5a5:c.instructions+=2;goto B42b5a5;
case 0x42b5a6:c.instructions+=1;goto B42b5a6;
case 0x42b5b0:goto L42b5b0;
case 0x42b5b1:c.instructions+=12;goto B42b5b1;
case 0x42b5b3:c.instructions+=11;goto B42b5b3;
case 0x42b5b6:c.instructions+=10;goto B42b5b6;
case 0x42b5bc:c.instructions+=9;goto B42b5bc;
case 0x42b5c2:c.instructions+=8;goto B42b5c2;
case 0x42b5c9:c.instructions+=7;goto B42b5c9;
case 0x42b5ca:c.instructions+=6;goto B42b5ca;
case 0x42b5cb:c.instructions+=5;goto B42b5cb;
case 0x42b5ce:c.instructions+=4;goto B42b5ce;
case 0x42b5d0:c.instructions+=3;goto B42b5d0;
case 0x42b5d1:c.instructions+=2;goto B42b5d1;
case 0x42b5d6:c.instructions+=1;goto B42b5d6;
case 0x42b5d8:goto L42b5d8;
case 0x42b5de:c.instructions+=2;goto B42b5de;
case 0x42b5df:c.instructions+=1;goto B42b5df;
case 0x42b5e4:goto L42b5e4;
case 0x42b5e6:c.instructions+=1;goto B42b5e6;
case 0x42b5ec:goto L42b5ec;
case 0x42b5f2:c.instructions+=4;goto B42b5f2;
case 0x42b5f5:c.instructions+=3;goto B42b5f5;
case 0x42b5f7:c.instructions+=2;goto B42b5f7;
case 0x42b5f9:c.instructions+=1;goto B42b5f9;
case 0x42b5ff:goto L42b5ff;
case 0x42b604:c.instructions+=1;goto B42b604;
case 0x42b60a:goto L42b60a;
case 0x42b610:c.instructions+=8;goto B42b610;
case 0x42b612:c.instructions+=7;goto B42b612;
case 0x42b616:c.instructions+=6;goto B42b616;
case 0x42b61a:c.instructions+=5;goto B42b61a;
case 0x42b620:c.instructions+=4;goto B42b620;
case 0x42b626:c.instructions+=3;goto B42b626;
case 0x42b628:c.instructions+=2;goto B42b628;
case 0x42b62b:c.instructions+=1;goto B42b62b;
case 0x42b631:goto L42b631;
case 0x42b633:c.instructions+=6;goto B42b633;
case 0x42b639:c.instructions+=5;goto B42b639;
case 0x42b63b:c.instructions+=4;goto B42b63b;
case 0x42b63c:c.instructions+=3;goto B42b63c;
case 0x42b63d:c.instructions+=2;goto B42b63d;
case 0x42b641:c.instructions+=1;goto B42b641;
case 0x42b646:goto L42b646;
case 0x42b64a:c.instructions+=9;goto B42b64a;
case 0x42b651:c.instructions+=8;goto B42b651;
case 0x42b654:c.instructions+=7;goto B42b654;
case 0x42b657:c.instructions+=6;goto B42b657;
case 0x42b65b:c.instructions+=5;goto B42b65b;
case 0x42b65e:c.instructions+=4;goto B42b65e;
case 0x42b661:c.instructions+=3;goto B42b661;
case 0x42b662:c.instructions+=2;goto B42b662;
case 0x42b666:c.instructions+=1;goto B42b666;
case 0x42b66c:goto L42b66c;
case 0x42b66f:c.instructions+=5;goto B42b66f;
case 0x42b672:c.instructions+=4;goto B42b672;
case 0x42b673:c.instructions+=3;goto B42b673;
case 0x42b677:c.instructions+=2;goto B42b677;
case 0x42b67b:c.instructions+=1;goto B42b67b;
case 0x42b680:goto L42b680;
case 0x42b683:c.instructions+=8;goto B42b683;
case 0x42b687:c.instructions+=7;goto B42b687;
case 0x42b68a:c.instructions+=6;goto B42b68a;
case 0x42b68e:c.instructions+=5;goto B42b68e;
case 0x42b691:c.instructions+=4;goto B42b691;
case 0x42b692:c.instructions+=3;goto B42b692;
case 0x42b694:c.instructions+=2;goto B42b694;
case 0x42b698:c.instructions+=1;goto B42b698;
case 0x42b69d:goto L42b69d;
case 0x42b6a1:c.instructions+=9;goto B42b6a1;
case 0x42b6a4:c.instructions+=8;goto B42b6a4;
case 0x42b6a8:c.instructions+=7;goto B42b6a8;
case 0x42b6ac:c.instructions+=6;goto B42b6ac;
case 0x42b6b0:c.instructions+=5;goto B42b6b0;
case 0x42b6b4:c.instructions+=4;goto B42b6b4;
case 0x42b6ba:c.instructions+=3;goto B42b6ba;
case 0x42b6bc:c.instructions+=2;goto B42b6bc;
case 0x42b6bf:c.instructions+=1;goto B42b6bf;
case 0x42b6c5:goto L42b6c5;
case 0x42b6c8:c.instructions+=2;goto B42b6c8;
case 0x42b6cf:c.instructions+=1;goto B42b6cf;
case 0x42b6d4:goto L42b6d4;
case 0x42b6d6:c.instructions+=1;goto B42b6d6;
case 0x42b6dc:goto L42b6dc;
case 0x42b6df:c.instructions+=12;goto B42b6df;
case 0x42b6e6:c.instructions+=11;goto B42b6e6;
case 0x42b6ea:c.instructions+=10;goto B42b6ea;
case 0x42b6ec:c.instructions+=9;goto B42b6ec;
case 0x42b6ee:c.instructions+=8;goto B42b6ee;
case 0x42b6ef:c.instructions+=7;goto B42b6ef;
case 0x42b6f2:c.instructions+=6;goto B42b6f2;
case 0x42b6f3:c.instructions+=5;goto B42b6f3;
case 0x42b6f7:c.instructions+=4;goto B42b6f7;
case 0x42b6f8:c.instructions+=3;goto B42b6f8;
case 0x42b6f9:c.instructions+=2;goto B42b6f9;
case 0x42b6fa:c.instructions+=1;goto B42b6fa;
case 0x42b6ff:goto L42b6ff;
case 0x42b702:c.instructions+=2;goto B42b702;
case 0x42b704:c.instructions+=1;goto B42b704;
case 0x42b706:goto L42b706;
case 0x42b70a:c.instructions+=4;goto B42b70a;
case 0x42b710:c.instructions+=3;goto B42b710;
case 0x42b712:c.instructions+=2;goto B42b712;
case 0x42b715:c.instructions+=1;goto B42b715;
case 0x42b71b:goto L42b71b;
case 0x42b71f:c.instructions+=4;goto B42b71f;
case 0x42b725:c.instructions+=3;goto B42b725;
case 0x42b727:c.instructions+=2;goto B42b727;
case 0x42b72a:c.instructions+=1;goto B42b72a;
case 0x42b730:goto L42b730;
case 0x42b732:c.instructions+=6;goto B42b732;
case 0x42b739:c.instructions+=5;goto B42b739;
case 0x42b740:c.instructions+=4;goto B42b740;
case 0x42b747:c.instructions+=3;goto B42b747;
case 0x42b74c:c.instructions+=2;goto B42b74c;
case 0x42b750:c.instructions+=1;goto B42b750;
case 0x42b751:goto L42b751;
case 0x42b753:goto L42b753;
case 0x42b754:c.instructions+=2;goto B42b754;
case 0x42b758:c.instructions+=1;goto B42b758;
case 0x42b75d:goto L42b75d;
case 0x42b763:c.instructions+=16;goto B42b763;
case 0x42b766:c.instructions+=15;goto B42b766;
case 0x42b768:c.instructions+=14;goto B42b768;
case 0x42b76e:c.instructions+=13;goto B42b76e;
case 0x42b771:c.instructions+=12;goto B42b771;
case 0x42b777:c.instructions+=11;goto B42b777;
case 0x42b77a:c.instructions+=10;goto B42b77a;
case 0x42b77f:c.instructions+=9;goto B42b77f;
case 0x42b785:c.instructions+=8;goto B42b785;
case 0x42b786:c.instructions+=7;goto B42b786;
case 0x42b787:c.instructions+=6;goto B42b787;
case 0x42b78a:c.instructions+=5;goto B42b78a;
case 0x42b78d:c.instructions+=4;goto B42b78d;
case 0x42b78e:c.instructions+=3;goto B42b78e;
case 0x42b792:c.instructions+=2;goto B42b792;
case 0x42b793:c.instructions+=1;goto B42b793;
case 0x42b798:goto L42b798;
case 0x42b79a:c.instructions+=2;goto B42b79a;
case 0x42b79c:c.instructions+=1;goto B42b79c;
case 0x42b79e:goto L42b79e;
case 0x42b7a1:c.instructions+=4;goto B42b7a1;
case 0x42b7a8:c.instructions+=3;goto B42b7a8;
case 0x42b7ab:c.instructions+=2;goto B42b7ab;
case 0x42b7ad:c.instructions+=1;goto B42b7ad;
case 0x42b7b2:goto L42b7b2;
case 0x42b7b6:c.instructions+=4;goto B42b7b6;
case 0x42b7b9:c.instructions+=3;goto B42b7b9;
case 0x42b7ba:c.instructions+=2;goto B42b7ba;
case 0x42b7be:c.instructions+=1;goto B42b7be;
case 0x42b7c4:goto L42b7c4;
case 0x42b7c8:c.instructions+=2;goto B42b7c8;
case 0x42b7ca:c.instructions+=1;goto B42b7ca;
case 0x42b7cc:goto L42b7cc;
case 0x42b7d1:c.instructions+=6;goto B42b7d1;
case 0x42b7d2:c.instructions+=5;goto B42b7d2;
case 0x42b7d3:c.instructions+=4;goto B42b7d3;
case 0x42b7d4:c.instructions+=3;goto B42b7d4;
case 0x42b7d6:c.instructions+=2;goto B42b7d6;
case 0x42b7d7:c.instructions+=1;goto B42b7d7;
case 0x42b7d8:goto L42b7d8;
case 0x42b7d9:c.instructions+=6;goto B42b7d9;
case 0x42b7da:c.instructions+=5;goto B42b7da;
case 0x42b7dd:c.instructions+=4;goto B42b7dd;
case 0x42b7de:c.instructions+=3;goto B42b7de;
case 0x42b7e0:c.instructions+=2;goto B42b7e0;
case 0x42b7e1:c.instructions+=1;goto B42b7e1;
case 0x42b7f0:goto L42b7f0;
case 0x42b7f3:c.instructions+=7;goto B42b7f3;
case 0x42b7f4:c.instructions+=6;goto B42b7f4;
case 0x42b7f8:c.instructions+=5;goto B42b7f8;
case 0x42b7fb:c.instructions+=4;goto B42b7fb;
case 0x42b7fd:c.instructions+=3;goto B42b7fd;
case 0x42b7fe:c.instructions+=2;goto B42b7fe;
case 0x42b800:c.instructions+=1;goto B42b800;
case 0x42b806:goto L42b806;
case 0x42b80a:c.instructions+=4;goto B42b80a;
case 0x42b810:c.instructions+=3;goto B42b810;
case 0x42b817:c.instructions+=2;goto B42b817;
case 0x42b818:c.instructions+=1;goto B42b818;
case 0x42b81d:goto L42b81d;
case 0x42b81f:c.instructions+=1;goto B42b81f;
case 0x42b825:goto L42b825;
case 0x42b829:c.instructions+=10;goto B42b829;
case 0x42b82a:c.instructions+=9;goto B42b82a;
case 0x42b82e:c.instructions+=8;goto B42b82e;
case 0x42b82f:c.instructions+=7;goto B42b82f;
case 0x42b830:c.instructions+=6;goto B42b830;
case 0x42b838:c.instructions+=5;goto B42b838;
case 0x42b840:c.instructions+=4;goto B42b840;
case 0x42b848:c.instructions+=3;goto B42b848;
case 0x42b850:c.instructions+=2;goto B42b850;
case 0x42b858:c.instructions+=1;goto B42b858;
case 0x42b85d:goto L42b85d;
case 0x42b860:c.instructions+=2;goto B42b860;
case 0x42b863:c.instructions+=1;goto B42b863;
case 0x42b865:goto L42b865;
case 0x42b86b:c.instructions+=5;goto B42b86b;
case 0x42b86c:c.instructions+=4;goto B42b86c;
case 0x42b870:c.instructions+=3;goto B42b870;
case 0x42b871:c.instructions+=2;goto B42b871;
case 0x42b873:c.instructions+=1;goto B42b873;
case 0x42b878:goto L42b878;
case 0x42b87a:c.instructions+=1;goto B42b87a;
case 0x42b87c:goto L42b87c;
case 0x42b880:c.instructions+=10;goto B42b880;
case 0x42b884:c.instructions+=9;goto B42b884;
case 0x42b888:c.instructions+=8;goto B42b888;
case 0x42b88e:c.instructions+=7;goto B42b88e;
case 0x42b892:c.instructions+=6;goto B42b892;
case 0x42b898:c.instructions+=5;goto B42b898;
case 0x42b89e:c.instructions+=4;goto B42b89e;
case 0x42b8a4:c.instructions+=3;goto B42b8a4;
case 0x42b8a5:c.instructions+=2;goto B42b8a5;
case 0x42b8ab:c.instructions+=1;goto B42b8ab;
case 0x42b8b0:goto L42b8b0;
case 0x42b8b6:c.instructions+=1;goto B42b8b6;
case 0x42b8bc:goto L42b8bc;
case 0x42b8bd:goto L42b8bd;
case 0x42b8c2:c.instructions+=8;goto B42b8c2;
case 0x42b8c8:c.instructions+=7;goto B42b8c8;
case 0x42b8cc:c.instructions+=6;goto B42b8cc;
case 0x42b8d0:c.instructions+=5;goto B42b8d0;
case 0x42b8d6:c.instructions+=4;goto B42b8d6;
case 0x42b8dc:c.instructions+=3;goto B42b8dc;
case 0x42b8de:c.instructions+=2;goto B42b8de;
case 0x42b8e1:c.instructions+=1;goto B42b8e1;
case 0x42b8e3:goto L42b8e3;
case 0x42b8e9:c.instructions+=3;goto B42b8e9;
case 0x42b8ea:c.instructions+=2;goto B42b8ea;
case 0x42b8ec:c.instructions+=1;goto B42b8ec;
case 0x42b8f1:goto L42b8f1;
case 0x42b8f3:c.instructions+=1;goto B42b8f3;
case 0x42b8f5:goto L42b8f5;
case 0x42b8fc:c.instructions+=9;goto B42b8fc;
case 0x42b8ff:c.instructions+=8;goto B42b8ff;
case 0x42b902:c.instructions+=7;goto B42b902;
case 0x42b903:c.instructions+=6;goto B42b903;
case 0x42b907:c.instructions+=5;goto B42b907;
case 0x42b90a:c.instructions+=4;goto B42b90a;
case 0x42b90c:c.instructions+=3;goto B42b90c;
case 0x42b912:c.instructions+=2;goto B42b912;
case 0x42b916:c.instructions+=1;goto B42b916;
case 0x42b91b:goto L42b91b;
case 0x42b91f:c.instructions+=5;goto B42b91f;
case 0x42b921:c.instructions+=4;goto B42b921;
case 0x42b923:c.instructions+=3;goto B42b923;
case 0x42b925:c.instructions+=2;goto B42b925;
case 0x42b928:c.instructions+=1;goto B42b928;
case 0x42b92a:goto L42b92a;
case 0x42b92b:c.instructions+=4;goto B42b92b;
case 0x42b92d:c.instructions+=3;goto B42b92d;
case 0x42b92e:c.instructions+=2;goto B42b92e;
case 0x42b931:c.instructions+=1;goto B42b931;
case 0x42b934:goto L42b934;
case 0x42b935:c.instructions+=4;goto B42b935;
case 0x42b937:c.instructions+=3;goto B42b937;
case 0x42b938:c.instructions+=2;goto B42b938;
case 0x42b93b:c.instructions+=1;goto B42b93b;
case 0x42b940:goto L42b940;
case 0x42b943:c.instructions+=11;goto B42b943;
case 0x42b944:c.instructions+=10;goto B42b944;
case 0x42b945:c.instructions+=9;goto B42b945;
case 0x42b946:c.instructions+=8;goto B42b946;
case 0x42b948:c.instructions+=7;goto B42b948;
case 0x42b94e:c.instructions+=6;goto B42b94e;
case 0x42b94f:c.instructions+=5;goto B42b94f;
case 0x42b953:c.instructions+=4;goto B42b953;
case 0x42b954:c.instructions+=3;goto B42b954;
case 0x42b956:c.instructions+=2;goto B42b956;
case 0x42b95c:c.instructions+=1;goto B42b95c;
case 0x42b961:goto L42b961;
case 0x42b963:c.instructions+=2;goto B42b963;
case 0x42b965:c.instructions+=1;goto B42b965;
case 0x42b96b:goto L42b96b;
case 0x42b971:c.instructions+=2;goto B42b971;
case 0x42b973:c.instructions+=1;goto B42b973;
case 0x42b975:goto L42b975;
case 0x42b976:c.instructions+=2;goto B42b976;
case 0x42b978:c.instructions+=1;goto B42b978;
case 0x42b97d:goto L42b97d;
case 0x42b983:c.instructions+=3;goto B42b983;
case 0x42b985:c.instructions+=2;goto B42b985;
case 0x42b988:c.instructions+=1;goto B42b988;
case 0x42b98a:goto L42b98a;
case 0x42b98b:c.instructions+=3;goto B42b98b;
case 0x42b98f:c.instructions+=2;goto B42b98f;
case 0x42b997:c.instructions+=1;goto B42b997;
case 0x42b99c:goto L42b99c;
case 0x42b9a2:c.instructions+=7;goto B42b9a2;
case 0x42b9a3:c.instructions+=6;goto B42b9a3;
case 0x42b9a4:c.instructions+=5;goto B42b9a4;
case 0x42b9a7:c.instructions+=4;goto B42b9a7;
case 0x42b9a8:c.instructions+=3;goto B42b9a8;
case 0x42b9a9:c.instructions+=2;goto B42b9a9;
case 0x42b9ad:c.instructions+=1;goto B42b9ad;
case 0x42b9b2:goto L42b9b2;
case 0x42b9b4:c.instructions+=2;goto B42b9b4;
case 0x42b9b6:c.instructions+=1;goto B42b9b6;
case 0x42b9b8:goto L42b9b8;
case 0x42b9bc:c.instructions+=2;goto B42b9bc;
case 0x42b9bd:c.instructions+=1;goto B42b9bd;
case 0x42b9c2:goto L42b9c2;
case 0x42b9c4:goto L42b9c4;
case 0x42b9c5:c.instructions+=3;goto B42b9c5;
case 0x42b9c8:c.instructions+=2;goto B42b9c8;
case 0x42b9c9:c.instructions+=1;goto B42b9c9;
case 0x42b9ce:goto L42b9ce;
case 0x42b9d1:c.instructions+=5;goto B42b9d1;
case 0x42b9d3:c.instructions+=4;goto B42b9d3;
case 0x42b9d9:c.instructions+=3;goto B42b9d9;
case 0x42b9db:c.instructions+=2;goto B42b9db;
case 0x42b9de:c.instructions+=1;goto B42b9de;
case 0x42b9e0:goto L42b9e0;
case 0x42b9e1:c.instructions+=2;goto B42b9e1;
case 0x42b9e3:c.instructions+=1;goto B42b9e3;
case 0x42b9e8:goto L42b9e8;
case 0x42b9ea:goto L42b9ea;
case 0x42b9eb:c.instructions+=3;goto B42b9eb;
case 0x42b9ee:c.instructions+=2;goto B42b9ee;
case 0x42b9ef:c.instructions+=1;goto B42b9ef;
case 0x42b9f1:goto L42b9f1;
case 0x42b9f2:c.instructions+=2;goto B42b9f2;
case 0x42b9f5:c.instructions+=1;goto B42b9f5;
case 0x42b9f6:goto L42b9f6;
case 0x42b9f8:c.instructions+=1;goto B42b9f8;
case 0x42b9fd:goto L42b9fd;
case 0x42b9ff:c.instructions+=9;goto B42b9ff;
case 0x42ba00:c.instructions+=8;goto B42ba00;
case 0x42ba06:c.instructions+=7;goto B42ba06;
case 0x42ba0c:c.instructions+=6;goto B42ba0c;
case 0x42ba12:c.instructions+=5;goto B42ba12;
case 0x42ba13:c.instructions+=4;goto B42ba13;
case 0x42ba14:c.instructions+=3;goto B42ba14;
case 0x42ba15:c.instructions+=2;goto B42ba15;
case 0x42ba18:c.instructions+=1;goto B42ba18;
case 0x42ba20:goto L42ba20;
case 0x42ba24:c.instructions+=15;goto B42ba24;
case 0x42ba25:c.instructions+=14;goto B42ba25;
case 0x42ba29:c.instructions+=13;goto B42ba29;
case 0x42ba2d:c.instructions+=12;goto B42ba2d;
case 0x42ba2e:c.instructions+=11;goto B42ba2e;
case 0x42ba34:c.instructions+=10;goto B42ba34;
case 0x42ba3a:c.instructions+=9;goto B42ba3a;
case 0x42ba3c:c.instructions+=8;goto B42ba3c;
case 0x42ba3f:c.instructions+=7;goto B42ba3f;
case 0x42ba40:c.instructions+=6;goto B42ba40;
case 0x42ba43:c.instructions+=5;goto B42ba43;
case 0x42ba44:c.instructions+=4;goto B42ba44;
case 0x42ba45:c.instructions+=3;goto B42ba45;
case 0x42ba4a:c.instructions+=2;goto B42ba4a;
case 0x42ba52:c.instructions+=1;goto B42ba52;
case 0x42ba57:goto L42ba57;
case 0x42ba59:c.instructions+=1;goto B42ba59;
case 0x42ba5b:goto L42ba5b;
case 0x42ba5f:c.instructions+=6;goto B42ba5f;
case 0x42ba61:c.instructions+=5;goto B42ba61;
case 0x42ba65:c.instructions+=4;goto B42ba65;
case 0x42ba67:c.instructions+=3;goto B42ba67;
case 0x42ba6c:c.instructions+=2;goto B42ba6c;
case 0x42ba6d:c.instructions+=1;goto B42ba6d;
case 0x42ba6e:goto L42ba6e;
case 0x42ba71:c.instructions+=2;goto B42ba71;
case 0x42ba72:c.instructions+=1;goto B42ba72;
case 0x42ba80:goto L42ba80;
case 0x42ba83:c.instructions+=20;goto B42ba83;
case 0x42ba84:c.instructions+=19;goto B42ba84;
case 0x42ba85:c.instructions+=18;goto B42ba85;
case 0x42ba86:c.instructions+=17;goto B42ba86;
case 0x42ba8a:c.instructions+=16;goto B42ba8a;
case 0x42ba91:c.instructions+=15;goto B42ba91;
case 0x42ba94:c.instructions+=14;goto B42ba94;
case 0x42ba97:c.instructions+=13;goto B42ba97;
case 0x42ba99:c.instructions+=12;goto B42ba99;
case 0x42ba9f:c.instructions+=11;goto B42ba9f;
case 0x42baa3:c.instructions+=10;goto B42baa3;
case 0x42baa9:c.instructions+=9;goto B42baa9;
case 0x42baad:c.instructions+=8;goto B42baad;
case 0x42bab5:c.instructions+=7;goto B42bab5;
case 0x42bab9:c.instructions+=6;goto B42bab9;
case 0x42babe:c.instructions+=5;goto B42babe;
case 0x42bac4:c.instructions+=4;goto B42bac4;
case 0x42baca:c.instructions+=3;goto B42baca;
case 0x42bacc:c.instructions+=2;goto B42bacc;
case 0x42bacf:c.instructions+=1;goto B42bacf;
case 0x42bad1:goto L42bad1;
case 0x42bad6:goto L42bad6;
case 0x42badc:c.instructions+=3;goto B42badc;
case 0x42badd:c.instructions+=2;goto B42badd;
case 0x42badf:c.instructions+=1;goto B42badf;
case 0x42bae4:goto L42bae4;
case 0x42baea:c.instructions+=2;goto B42baea;
case 0x42baec:c.instructions+=1;goto B42baec;
case 0x42baf2:goto L42baf2;
case 0x42baf4:c.instructions+=1;goto B42baf4;
case 0x42bafa:goto L42bafa;
case 0x42bafc:c.instructions+=11;goto B42bafc;
case 0x42baff:c.instructions+=10;goto B42baff;
case 0x42bb05:c.instructions+=9;goto B42bb05;
case 0x42bb06:c.instructions+=8;goto B42bb06;
case 0x42bb0a:c.instructions+=7;goto B42bb0a;
case 0x42bb0b:c.instructions+=6;goto B42bb0b;
case 0x42bb0c:c.instructions+=5;goto B42bb0c;
case 0x42bb0d:c.instructions+=4;goto B42bb0d;
case 0x42bb10:c.instructions+=3;goto B42bb10;
case 0x42bb11:c.instructions+=2;goto B42bb11;
case 0x42bb16:c.instructions+=1;goto B42bb16;
case 0x42bb1b:goto L42bb1b;
case 0x42bb1d:c.instructions+=3;goto B42bb1d;
case 0x42bb22:c.instructions+=2;goto B42bb22;
case 0x42bb24:c.instructions+=1;goto B42bb24;
case 0x42bb26:goto L42bb26;
case 0x42bb2b:c.instructions+=2;goto B42bb2b;
case 0x42bb2d:c.instructions+=1;goto B42bb2d;
case 0x42bb2f:goto L42bb2f;
case 0x42bb31:c.instructions+=1;goto B42bb31;
case 0x42bb37:goto L42bb37;
case 0x42bb38:c.instructions+=2;goto B42bb38;
case 0x42bb39:c.instructions+=1;goto B42bb39;
case 0x42bb3e:goto L42bb3e;
case 0x42bb41:c.instructions+=2;goto B42bb41;
case 0x42bb43:c.instructions+=1;goto B42bb43;
case 0x42bb49:goto L42bb49;
case 0x42bb4b:c.instructions+=2;goto B42bb4b;
case 0x42bb4d:c.instructions+=1;goto B42bb4d;
case 0x42bb4f:goto L42bb4f;
case 0x42bb50:c.instructions+=2;goto B42bb50;
case 0x42bb56:c.instructions+=1;goto B42bb56;
case 0x42bb5b:goto L42bb5b;
case 0x42bb5f:c.instructions+=1;goto B42bb5f;
case 0x42bb65:goto L42bb65;
case 0x42bb66:c.instructions+=6;goto B42bb66;
case 0x42bb67:c.instructions+=5;goto B42bb67;
case 0x42bb68:c.instructions+=4;goto B42bb68;
case 0x42bb6a:c.instructions+=3;goto B42bb6a;
case 0x42bb6b:c.instructions+=2;goto B42bb6b;
case 0x42bb6e:c.instructions+=1;goto B42bb6e;
case 0x42bb71:goto L42bb71;
case 0x42bb77:c.instructions+=2;goto B42bb77;
case 0x42bb79:c.instructions+=1;goto B42bb79;
case 0x42bb7b:goto L42bb7b;
case 0x42bb7f:c.instructions+=2;goto B42bb7f;
case 0x42bb86:c.instructions+=1;goto B42bb86;
case 0x42bb8b:goto L42bb8b;
case 0x42bb8c:c.instructions+=3;goto B42bb8c;
case 0x42bb92:c.instructions+=2;goto B42bb92;
case 0x42bb95:c.instructions+=1;goto B42bb95;
case 0x42bb9a:goto L42bb9a;
case 0x42bb9b:c.instructions+=3;goto B42bb9b;
case 0x42bba0:c.instructions+=2;goto B42bba0;
case 0x42bba3:c.instructions+=1;goto B42bba3;
case 0x42bba8:goto L42bba8;
case 0x42bbac:c.instructions+=2;goto B42bbac;
case 0x42bbb2:c.instructions+=1;goto B42bbb2;
case 0x42bbb7:goto L42bbb7;
case 0x42bbba:c.instructions+=5;goto B42bbba;
case 0x42bbbc:c.instructions+=4;goto B42bbbc;
case 0x42bbc0:c.instructions+=3;goto B42bbc0;
case 0x42bbc2:c.instructions+=2;goto B42bbc2;
case 0x42bbc5:c.instructions+=1;goto B42bbc5;
case 0x42bbc7:goto L42bbc7;
case 0x42bbc9:goto L42bbc9;
case 0x42bbcf:c.instructions+=3;goto B42bbcf;
case 0x42bbd1:c.instructions+=2;goto B42bbd1;
case 0x42bbd4:c.instructions+=1;goto B42bbd4;
case 0x42bbd9:goto L42bbd9;
case 0x42bbdb:c.instructions+=1;goto B42bbdb;
case 0x42bbdd:goto L42bbdd;
case 0x42bbe3:c.instructions+=3;goto B42bbe3;
case 0x42bbe4:c.instructions+=2;goto B42bbe4;
case 0x42bbe6:c.instructions+=1;goto B42bbe6;
case 0x42bbeb:goto L42bbeb;
case 0x42bbed:c.instructions+=1;goto B42bbed;
case 0x42bbef:goto L42bbef;
case 0x42bbf1:c.instructions+=1;goto B42bbf1;
case 0x42bbf7:goto L42bbf7;
case 0x42bbf8:c.instructions+=2;goto B42bbf8;
case 0x42bbfa:c.instructions+=1;goto B42bbfa;
case 0x42bbff:goto L42bbff;
case 0x42bc05:c.instructions+=3;goto B42bc05;
case 0x42bc07:c.instructions+=2;goto B42bc07;
case 0x42bc0a:c.instructions+=1;goto B42bc0a;
case 0x42bc0c:goto L42bc0c;
case 0x42bc11:goto L42bc11;
case 0x42bc13:c.instructions+=1;goto B42bc13;
case 0x42bc19:goto L42bc19;
case 0x42bc1e:c.instructions+=2;goto B42bc1e;
case 0x42bc20:c.instructions+=1;goto B42bc20;
case 0x42bc22:goto L42bc22;
case 0x42bc27:c.instructions+=2;goto B42bc27;
case 0x42bc29:c.instructions+=1;goto B42bc29;
case 0x42bc2b:goto L42bc2b;
case 0x42bc2f:c.instructions+=2;goto B42bc2f;
case 0x42bc31:c.instructions+=1;goto B42bc31;
case 0x42bc37:goto L42bc37;
case 0x42bc38:c.instructions+=6;goto B42bc38;
case 0x42bc39:c.instructions+=5;goto B42bc39;
case 0x42bc3a:c.instructions+=4;goto B42bc3a;
case 0x42bc3c:c.instructions+=3;goto B42bc3c;
case 0x42bc3d:c.instructions+=2;goto B42bc3d;
case 0x42bc40:c.instructions+=1;goto B42bc40;
case 0x42bc43:goto L42bc43;
case 0x42bc44:c.instructions+=5;goto B42bc44;
case 0x42bc45:c.instructions+=4;goto B42bc45;
case 0x42bc47:c.instructions+=3;goto B42bc47;
case 0x42bc48:c.instructions+=2;goto B42bc48;
case 0x42bc4b:c.instructions+=1;goto B42bc4b;
case 0x42bc50:goto L42bc50;
case 0x42bc51:c.instructions+=13;goto B42bc51;
case 0x42bc52:c.instructions+=12;goto B42bc52;
case 0x42bc53:c.instructions+=11;goto B42bc53;
case 0x42bc54:c.instructions+=10;goto B42bc54;
case 0x42bc55:c.instructions+=9;goto B42bc55;
case 0x42bc59:c.instructions+=8;goto B42bc59;
case 0x42bc5b:c.instructions+=7;goto B42bc5b;
case 0x42bc5e:c.instructions+=6;goto B42bc5e;
case 0x42bc60:c.instructions+=5;goto B42bc60;
case 0x42bc66:c.instructions+=4;goto B42bc66;
case 0x42bc67:c.instructions+=3;goto B42bc67;
case 0x42bc69:c.instructions+=2;goto B42bc69;
case 0x42bc6d:c.instructions+=1;goto B42bc6d;
case 0x42bc72:goto L42bc72;
case 0x42bc74:c.instructions+=3;goto B42bc74;
case 0x42bc76:c.instructions+=2;goto B42bc76;
case 0x42bc7a:c.instructions+=1;goto B42bc7a;
case 0x42bc7c:goto L42bc7c;
case 0x42bc7d:c.instructions+=2;goto B42bc7d;
case 0x42bc7f:c.instructions+=1;goto B42bc7f;
case 0x42bc84:goto L42bc84;
case 0x42bc8a:c.instructions+=4;goto B42bc8a;
case 0x42bc90:c.instructions+=3;goto B42bc90;
case 0x42bc92:c.instructions+=2;goto B42bc92;
case 0x42bc94:c.instructions+=1;goto B42bc94;
case 0x42bc96:goto L42bc96;
case 0x42bc98:c.instructions+=4;goto B42bc98;
case 0x42bc9e:c.instructions+=3;goto B42bc9e;
case 0x42bca0:c.instructions+=2;goto B42bca0;
case 0x42bca3:c.instructions+=1;goto B42bca3;
case 0x42bca5:goto L42bca5;
case 0x42bcaf:c.instructions+=1;goto B42bcaf;
case 0x42bcb1:goto L42bcb1;
case 0x42bcb4:c.instructions+=1;goto B42bcb4;
case 0x42bcb6:goto L42bcb6;
case 0x42bcb8:c.instructions+=4;goto B42bcb8;
case 0x42bcbe:c.instructions+=3;goto B42bcbe;
case 0x42bcc0:c.instructions+=2;goto B42bcc0;
case 0x42bcc3:c.instructions+=1;goto B42bcc3;
case 0x42bcc5:goto L42bcc5;
case 0x42bccf:c.instructions+=1;goto B42bccf;
case 0x42bcd1:goto L42bcd1;
case 0x42bcd3:goto L42bcd3;
case 0x42bcd9:c.instructions+=2;goto B42bcd9;
case 0x42bcdc:c.instructions+=1;goto B42bcdc;
case 0x42bce2:goto L42bce2;
case 0x42bce5:c.instructions+=2;goto B42bce5;
case 0x42bce8:c.instructions+=1;goto B42bce8;
case 0x42bced:goto L42bced;
case 0x42bcef:c.instructions+=2;goto B42bcef;
case 0x42bcf1:c.instructions+=1;goto B42bcf1;
case 0x42bcf6:goto L42bcf6;
case 0x42bcfc:c.instructions+=6;goto B42bcfc;
case 0x42bcff:c.instructions+=5;goto B42bcff;
case 0x42bd02:c.instructions+=4;goto B42bd02;
case 0x42bd05:c.instructions+=3;goto B42bd05;
case 0x42bd09:c.instructions+=2;goto B42bd09;
case 0x42bd0c:c.instructions+=1;goto B42bd0c;
case 0x42bd11:goto L42bd11;
case 0x42bd17:c.instructions+=6;goto B42bd17;
case 0x42bd1b:c.instructions+=5;goto B42bd1b;
case 0x42bd1c:c.instructions+=4;goto B42bd1c;
case 0x42bd1d:c.instructions+=3;goto B42bd1d;
case 0x42bd1f:c.instructions+=2;goto B42bd1f;
case 0x42bd25:c.instructions+=1;goto B42bd25;
case 0x42bd2a:goto L42bd2a;
case 0x42bd2c:c.instructions+=3;goto B42bd2c;
case 0x42bd2d:c.instructions+=2;goto B42bd2d;
case 0x42bd33:c.instructions+=1;goto B42bd33;
case 0x42bd38:goto L42bd38;
case 0x42bd3c:c.instructions+=6;goto B42bd3c;
case 0x42bd43:c.instructions+=5;goto B42bd43;
case 0x42bd46:c.instructions+=4;goto B42bd46;
case 0x42bd49:c.instructions+=3;goto B42bd49;
case 0x42bd4b:c.instructions+=2;goto B42bd4b;
case 0x42bd4f:c.instructions+=1;goto B42bd4f;
case 0x42bd54:goto L42bd54;
case 0x42bd58:c.instructions+=5;goto B42bd58;
case 0x42bd5a:c.instructions+=4;goto B42bd5a;
case 0x42bd60:c.instructions+=3;goto B42bd60;
case 0x42bd62:c.instructions+=2;goto B42bd62;
case 0x42bd65:c.instructions+=1;goto B42bd65;
case 0x42bd67:goto L42bd67;
case 0x42bd6d:c.instructions+=5;goto B42bd6d;
case 0x42bd73:c.instructions+=4;goto B42bd73;
case 0x42bd79:c.instructions+=3;goto B42bd79;
case 0x42bd7b:c.instructions+=2;goto B42bd7b;
case 0x42bd7e:c.instructions+=1;goto B42bd7e;
case 0x42bd80:goto L42bd80;
case 0x42bd84:c.instructions+=1;goto B42bd84;
case 0x42bd86:goto L42bd86;
case 0x42bd8c:c.instructions+=2;goto B42bd8c;
case 0x42bd8e:c.instructions+=1;goto B42bd8e;
case 0x42bd92:goto L42bd92;
case 0x42bd95:c.instructions+=2;goto B42bd95;
case 0x42bd96:c.instructions+=1;goto B42bd96;
case 0x42bd9b:goto L42bd9b;
case 0x42bd9f:c.instructions+=5;goto B42bd9f;
case 0x42bda0:c.instructions+=4;goto B42bda0;
case 0x42bda3:c.instructions+=3;goto B42bda3;
case 0x42bda4:c.instructions+=2;goto B42bda4;
case 0x42bda6:c.instructions+=1;goto B42bda6;
case 0x42bdab:goto L42bdab;
case 0x42bdb1:c.instructions+=11;goto B42bdb1;
case 0x42bdb7:c.instructions+=10;goto B42bdb7;
case 0x42bdbd:c.instructions+=9;goto B42bdbd;
case 0x42bdc0:c.instructions+=8;goto B42bdc0;
case 0x42bdc4:c.instructions+=7;goto B42bdc4;
case 0x42bdca:c.instructions+=6;goto B42bdca;
case 0x42bdcd:c.instructions+=5;goto B42bdcd;
case 0x42bdce:c.instructions+=4;goto B42bdce;
case 0x42bdcf:c.instructions+=3;goto B42bdcf;
case 0x42bdd0:c.instructions+=2;goto B42bdd0;
case 0x42bdd1:c.instructions+=1;goto B42bdd1;
case 0x42bdd6:goto L42bdd6;
case 0x42bdd9:c.instructions+=1;goto B42bdd9;
case 0x42bddb:goto L42bddb;
case 0x42bddc:c.instructions+=4;goto B42bddc;
case 0x42bddf:c.instructions+=3;goto B42bddf;
case 0x42bde0:c.instructions+=2;goto B42bde0;
case 0x42bde6:c.instructions+=1;goto B42bde6;
case 0x42bdeb:goto L42bdeb;
case 0x42bdef:c.instructions+=3;goto B42bdef;
case 0x42bdf0:c.instructions+=2;goto B42bdf0;
case 0x42bdf2:c.instructions+=1;goto B42bdf2;
case 0x42bdf7:goto L42bdf7;
case 0x42bdfd:c.instructions+=7;goto B42bdfd;
case 0x42bdff:c.instructions+=6;goto B42bdff;
case 0x42be01:c.instructions+=5;goto B42be01;
case 0x42be03:c.instructions+=4;goto B42be03;
case 0x42be09:c.instructions+=3;goto B42be09;
case 0x42be0b:c.instructions+=2;goto B42be0b;
case 0x42be0e:c.instructions+=1;goto B42be0e;
case 0x42be10:goto L42be10;
case 0x42be16:c.instructions+=3;goto B42be16;
case 0x42be18:c.instructions+=2;goto B42be18;
case 0x42be1e:c.instructions+=1;goto B42be1e;
case 0x42be20:goto L42be20;
case 0x42be26:c.instructions+=3;goto B42be26;
case 0x42be28:c.instructions+=2;goto B42be28;
case 0x42be2b:c.instructions+=1;goto B42be2b;
case 0x42be2d:goto L42be2d;
case 0x42be33:c.instructions+=3;goto B42be33;
case 0x42be39:c.instructions+=2;goto B42be39;
case 0x42be3f:c.instructions+=1;goto B42be3f;
case 0x42be41:goto L42be41;
case 0x42be47:c.instructions+=2;goto B42be47;
case 0x42be4d:c.instructions+=1;goto B42be4d;
case 0x42be53:goto L42be53;
case 0x42be59:c.instructions+=5;goto B42be59;
case 0x42be5f:c.instructions+=4;goto B42be5f;
case 0x42be65:c.instructions+=3;goto B42be65;
case 0x42be67:c.instructions+=2;goto B42be67;
case 0x42be6a:c.instructions+=1;goto B42be6a;
case 0x42be6c:goto L42be6c;
case 0x42be6e:c.instructions+=1;goto B42be6e;
case 0x42be74:goto L42be74;
case 0x42be7a:c.instructions+=3;goto B42be7a;
case 0x42be7d:c.instructions+=2;goto B42be7d;
case 0x42be81:c.instructions+=1;goto B42be81;
case 0x42be83:goto L42be83;
case 0x42be89:c.instructions+=3;goto B42be89;
case 0x42be8b:c.instructions+=2;goto B42be8b;
case 0x42be8e:c.instructions+=1;goto B42be8e;
case 0x42be90:goto L42be90;
case 0x42be92:c.instructions+=1;goto B42be92;
case 0x42be98:goto L42be98;
case 0x42be9e:c.instructions+=2;goto B42be9e;
case 0x42bea5:c.instructions+=1;goto B42bea5;
case 0x42bea7:goto L42bea7;
case 0x42bea9:c.instructions+=2;goto B42bea9;
case 0x42beb0:c.instructions+=1;goto B42beb0;
case 0x42beb2:goto L42beb2;
case 0x42beb4:c.instructions+=1;goto B42beb4;
case 0x42beb6:goto L42beb6;
case 0x42beb7:c.instructions+=2;goto B42beb7;
case 0x42beb9:c.instructions+=1;goto B42beb9;
case 0x42bebe:goto L42bebe;
case 0x42bec2:c.instructions+=2;goto B42bec2;
case 0x42bec4:c.instructions+=1;goto B42bec4;
case 0x42bec7:goto L42bec7;
case 0x42becd:c.instructions+=1;goto B42becd;
case 0x42bed4:goto L42bed4;
case 0x42bed5:c.instructions+=9;goto B42bed5;
case 0x42bedf:c.instructions+=8;goto B42bedf;
case 0x42bee9:c.instructions+=7;goto B42bee9;
case 0x42bef0:c.instructions+=6;goto B42bef0;
case 0x42bef7:c.instructions+=5;goto B42bef7;
case 0x42bef8:c.instructions+=4;goto B42bef8;
case 0x42bef9:c.instructions+=3;goto B42bef9;
case 0x42befa:c.instructions+=2;goto B42befa;
case 0x42befb:c.instructions+=1;goto B42befb;
case 0x42bf00:goto L42bf00;
case 0x42bf01:c.instructions+=11;goto B42bf01;
case 0x42bf03:c.instructions+=10;goto B42bf03;
case 0x42bf06:c.instructions+=9;goto B42bf06;
case 0x42bf0c:c.instructions+=8;goto B42bf0c;
case 0x42bf0f:c.instructions+=7;goto B42bf0f;
case 0x42bf10:c.instructions+=6;goto B42bf10;
case 0x42bf11:c.instructions+=5;goto B42bf11;
case 0x42bf12:c.instructions+=4;goto B42bf12;
case 0x42bf14:c.instructions+=3;goto B42bf14;
case 0x42bf15:c.instructions+=2;goto B42bf15;
case 0x42bf19:c.instructions+=1;goto B42bf19;
case 0x42bf1e:goto L42bf1e;
case 0x42bf20:c.instructions+=2;goto B42bf20;
case 0x42bf23:c.instructions+=1;goto B42bf23;
case 0x42bf25:goto L42bf25;
case 0x42bf28:c.instructions+=1;goto B42bf28;
case 0x42bf2a:goto L42bf2a;
case 0x42bf2d:c.instructions+=5;goto B42bf2d;
case 0x42bf2e:c.instructions+=4;goto B42bf2e;
case 0x42bf32:c.instructions+=3;goto B42bf32;
case 0x42bf33:c.instructions+=2;goto B42bf33;
case 0x42bf35:c.instructions+=1;goto B42bf35;
case 0x42bf3a:goto L42bf3a;
case 0x42bf3c:c.instructions+=1;goto B42bf3c;
case 0x42bf3e:goto L42bf3e;
case 0x42bf40:c.instructions+=4;goto B42bf40;
case 0x42bf48:c.instructions+=3;goto B42bf48;
case 0x42bf4b:c.instructions+=2;goto B42bf4b;
case 0x42bf4e:c.instructions+=1;goto B42bf4e;
case 0x42bf50:goto L42bf50;
case 0x42bf53:c.instructions+=4;goto B42bf53;
case 0x42bf55:c.instructions+=3;goto B42bf55;
case 0x42bf57:c.instructions+=2;goto B42bf57;
case 0x42bf5b:c.instructions+=1;goto B42bf5b;
case 0x42bf5d:goto L42bf5d;
case 0x42bf5f:c.instructions+=1;goto B42bf5f;
case 0x42bf63:goto L42bf63;
case 0x42bf66:c.instructions+=8;goto B42bf66;
case 0x42bf69:c.instructions+=7;goto B42bf69;
case 0x42bf6a:c.instructions+=6;goto B42bf6a;
case 0x42bf6b:c.instructions+=5;goto B42bf6b;
case 0x42bf6c:c.instructions+=4;goto B42bf6c;
case 0x42bf70:c.instructions+=3;goto B42bf70;
case 0x42bf71:c.instructions+=2;goto B42bf71;
case 0x42bf73:c.instructions+=1;goto B42bf73;
case 0x42bf78:goto L42bf78;
case 0x42bf7a:c.instructions+=1;goto B42bf7a;
case 0x42bf7c:goto L42bf7c;
case 0x42bf7f:c.instructions+=9;goto B42bf7f;
case 0x42bf83:c.instructions+=8;goto B42bf83;
case 0x42bf86:c.instructions+=7;goto B42bf86;
case 0x42bf87:c.instructions+=6;goto B42bf87;
case 0x42bf88:c.instructions+=5;goto B42bf88;
case 0x42bf89:c.instructions+=4;goto B42bf89;
case 0x42bf8d:c.instructions+=3;goto B42bf8d;
case 0x42bf8e:c.instructions+=2;goto B42bf8e;
case 0x42bf90:c.instructions+=1;goto B42bf90;
case 0x42bf95:goto L42bf95;
case 0x42bf97:c.instructions+=1;goto B42bf97;
case 0x42bf99:goto L42bf99;
case 0x42bf9d:c.instructions+=6;goto B42bf9d;
case 0x42bf9e:c.instructions+=5;goto B42bf9e;
case 0x42bf9f:c.instructions+=4;goto B42bf9f;
case 0x42bfa0:c.instructions+=3;goto B42bfa0;
case 0x42bfa3:c.instructions+=2;goto B42bfa3;
case 0x42bfa7:c.instructions+=1;goto B42bfa7;
case 0x42bfa9:goto L42bfa9;
case 0x42bfac:c.instructions+=5;goto B42bfac;
case 0x42bfaf:c.instructions+=4;goto B42bfaf;
case 0x42bfb0:c.instructions+=3;goto B42bfb0;
case 0x42bfb1:c.instructions+=2;goto B42bfb1;
case 0x42bfb3:c.instructions+=1;goto B42bfb3;
case 0x42bfb8:goto L42bfb8;
case 0x42bfba:c.instructions+=6;goto B42bfba;
case 0x42bfbb:c.instructions+=5;goto B42bfbb;
case 0x42bfbc:c.instructions+=4;goto B42bfbc;
case 0x42bfbd:c.instructions+=3;goto B42bfbd;
case 0x42bfbf:c.instructions+=2;goto B42bfbf;
case 0x42bfc0:c.instructions+=1;goto B42bfc0;
case 0x42bfc3:goto L42bfc3;
case 0x42bfc6:c.instructions+=4;goto B42bfc6;
case 0x42bfca:c.instructions+=3;goto B42bfca;
case 0x42bfcb:c.instructions+=2;goto B42bfcb;
case 0x42bfcd:c.instructions+=1;goto B42bfcd;
case 0x42bfd2:goto L42bfd2;
case 0x42bfd3:c.instructions+=6;goto B42bfd3;
case 0x42bfd4:c.instructions+=5;goto B42bfd4;
case 0x42bfd6:c.instructions+=4;goto B42bfd6;
case 0x42bfd7:c.instructions+=3;goto B42bfd7;
case 0x42bfd9:c.instructions+=2;goto B42bfd9;
case 0x42bfda:c.instructions+=1;goto B42bfda;
case 0x42bfe0:goto L42bfe0;
case 0x42bfe1:c.instructions+=7;goto B42bfe1;
case 0x42bfe5:c.instructions+=6;goto B42bfe5;
case 0x42bfe6:c.instructions+=5;goto B42bfe6;
case 0x42bfeb:c.instructions+=4;goto B42bfeb;
case 0x42bfed:c.instructions+=3;goto B42bfed;
case 0x42bfef:c.instructions+=2;goto B42bfef;
case 0x42bff1:c.instructions+=1;goto B42bff1;
case 0x42bff6:goto L42bff6;
case 0x42bff7:c.instructions+=2;goto B42bff7;
case 0x42bff9:c.instructions+=1;goto B42bff9;
case 0x42bffe:goto L42bffe;
default:missing_instruction(c.pc);}
B42b002:L42b002:{c.instructions+=5;NFSU2_TR(0x42b002);
{u32 ea_=u32(r4(R+8)+r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42b006:{NFSU2_TR(0x42b006);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42b00c:{NFSU2_TR(0x42b00c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42b00f:{NFSU2_TR(0x42b00f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42b011:{NFSU2_TR(0x42b011);
if(r1(R+518)){{goto L42b01c;}}
}
B42b013:L42b013:{c.instructions+=3;NFSU2_TR(0x42b013);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B42b017:{NFSU2_TR(0x42b017);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42b01a:{NFSU2_TR(0x42b01a);
{goto L42b022;}
}
B42b01c:L42b01c:{c.instructions+=1;NFSU2_TR(0x42b01c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42b022:L42b022:{c.instructions+=6;NFSU2_TR(0x42b022);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B42b024:{NFSU2_TR(0x42b024);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B42b026:{NFSU2_TR(0x42b026);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42b028:{NFSU2_TR(0x42b028);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B42b02a:{NFSU2_TR(0x42b02a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42b02d:{NFSU2_TR(0x42b02d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42b06b;}}
}
B42b02f:L42b02f:{c.instructions+=2;NFSU2_TR(0x42b02f);
__builtin_memmove((R+4),(R+24),4);
}
B42b031:{NFSU2_TR(0x42b031);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b036ull));
TAIL_STATIC(0x4023e0u,402);
}
B42b036:L42b036:{c.instructions+=7;NFSU2_TR(0x42b036);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42b039:{NFSU2_TR(0x42b039);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42b03b:{NFSU2_TR(0x42b03b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b03d:{NFSU2_TR(0x42b03d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b03f:{NFSU2_TR(0x42b03f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b041:{NFSU2_TR(0x42b041);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b043:{NFSU2_TR(0x42b043);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b046ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42b046:L42b046:{c.instructions+=3;NFSU2_TR(0x42b046);
__builtin_memmove((R+4),(R+24),4);
}
B42b048:{NFSU2_TR(0x42b048);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x710ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42b04f:{NFSU2_TR(0x42b04f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b054ull));
TAIL_STATIC(0x41bf80u,41b);
}
B42b054:L42b054:{c.instructions+=8;NFSU2_TR(0x42b054);
u8 U[8];
w4(U+0,u32(u32(u32(0x1f4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42b05b:{NFSU2_TR(0x42b05b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42b062:{NFSU2_TR(0x42b062);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42b063:{NFSU2_TR(0x42b063);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42b064:{NFSU2_TR(0x42b064);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42b065:{NFSU2_TR(0x42b065);
__builtin_memmove((R+16),(R+20),4);
}
B42b067:{NFSU2_TR(0x42b067);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42b068:{NFSU2_TR(0x42b068);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42b06b:L42b06b:{c.instructions+=10;NFSU2_TR(0x42b06b);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B42b072:{NFSU2_TR(0x42b072);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B42b075:{NFSU2_TR(0x42b075);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B42b078:{NFSU2_TR(0x42b078);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B42b07b:{NFSU2_TR(0x42b07b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b07c:{NFSU2_TR(0x42b07c);
{u32 ea_=u32(r4(R+8)+r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42b080:{NFSU2_TR(0x42b080);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42b084:{NFSU2_TR(0x42b084);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42b088:{NFSU2_TR(0x42b088);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b089:{NFSU2_TR(0x42b089);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b08eull));
TAIL_STATIC(0x40abb0u,40a);
}
B42b08e:L42b08e:{c.instructions+=2;NFSU2_TR(0x42b08e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42b090:{NFSU2_TR(0x42b090);
if(r1(R+518)){{goto L42b099;}}
}
B42b092:L42b092:{c.instructions+=1;NFSU2_TR(0x42b092);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x77cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42b099:L42b099:{c.instructions+=3;NFSU2_TR(0x42b099);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x77cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B42b09f:{NFSU2_TR(0x42b09f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42b0a1:{NFSU2_TR(0x42b0a1);
if(r1(R+518)){{goto L42b0e6;}}
}
B42b0a3:L42b0a3:{c.instructions+=2;NFSU2_TR(0x42b0a3);
__builtin_memmove((R+4),(R+24),4);
}
B42b0a5:{NFSU2_TR(0x42b0a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b0aaull));
TAIL_STATIC(0x4020d0u,402);
}
B42b0aa:L42b0aa:{c.instructions+=2;NFSU2_TR(0x42b0aa);
__builtin_memmove((R+4),(R+24),4);
}
B42b0ac:{NFSU2_TR(0x42b0ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b0b1ull));
TAIL_STATIC(0x4023e0u,402);
}
B42b0b1:L42b0b1:{c.instructions+=7;NFSU2_TR(0x42b0b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42b0b4:{NFSU2_TR(0x42b0b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42b0b6:{NFSU2_TR(0x42b0b6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b0b8:{NFSU2_TR(0x42b0b8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b0ba:{NFSU2_TR(0x42b0ba);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b0bc:{NFSU2_TR(0x42b0bc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b0be:{NFSU2_TR(0x42b0be);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b0c1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42b0c1:L42b0c1:{c.instructions+=3;NFSU2_TR(0x42b0c1);
__builtin_memmove((R+4),(R+24),4);
}
B42b0c3:{NFSU2_TR(0x42b0c3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x710ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42b0ca:{NFSU2_TR(0x42b0ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b0cfull));
TAIL_STATIC(0x41bf80u,41b);
}
B42b0cf:L42b0cf:{c.instructions+=8;NFSU2_TR(0x42b0cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x1f4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42b0d6:{NFSU2_TR(0x42b0d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42b0dd:{NFSU2_TR(0x42b0dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42b0de:{NFSU2_TR(0x42b0de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42b0df:{NFSU2_TR(0x42b0df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42b0e0:{NFSU2_TR(0x42b0e0);
__builtin_memmove((R+16),(R+20),4);
}
B42b0e2:{NFSU2_TR(0x42b0e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42b0e3:{NFSU2_TR(0x42b0e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42b0e6:L42b0e6:{c.instructions+=3;NFSU2_TR(0x42b0e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42b0e9:{NFSU2_TR(0x42b0e9);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B42b0ed:{NFSU2_TR(0x42b0ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42b130;}}
}
B42b0ef:L42b0ef:{c.instructions+=2;NFSU2_TR(0x42b0ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B42b0f2:{NFSU2_TR(0x42b0f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b0f7ull));
TAIL_STATIC(0x59fa30u,59f);
}
B42b0f7:L42b0f7:{c.instructions+=2;NFSU2_TR(0x42b0f7);
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
B42b0f9:{NFSU2_TR(0x42b0f9);
if(r1(R+518)){{goto L42b130;}}
}
B42b0fb:L42b0fb:{c.instructions+=5;NFSU2_TR(0x42b0fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42b0fd:{NFSU2_TR(0x42b0fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+0),(U+0),4);
}
B42b100:{NFSU2_TR(0x42b100);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b101:{NFSU2_TR(0x42b101);
__builtin_memmove((R+4),(R+24),4);
}
B42b103:{NFSU2_TR(0x42b103);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b109ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42b109:L42b109:{c.instructions+=2;NFSU2_TR(0x42b109);
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
B42b10b:{NFSU2_TR(0x42b10b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42b130;}}
}
B42b10d:L42b10d:{c.instructions+=3;NFSU2_TR(0x42b10d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42b10f:{NFSU2_TR(0x42b10f);
__builtin_memmove((R+4),(R+24),4);
}
B42b111:{NFSU2_TR(0x42b111);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b117ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42b117:L42b117:{c.instructions+=2;NFSU2_TR(0x42b117);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42b119:{NFSU2_TR(0x42b119);
if(r1(R+518)){{goto L42b130;}}
}
B42b11b:L42b11b:{c.instructions+=3;NFSU2_TR(0x42b11b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42b11e:{NFSU2_TR(0x42b11e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B42b121:{NFSU2_TR(0x42b121);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b126ull));
TAIL_STATIC(0x592500u,592);
}
B42b126:L42b126:{c.instructions+=3;NFSU2_TR(0x42b126);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42b128:{NFSU2_TR(0x42b128);
__builtin_memmove((R+4),(R+24),4);
}
B42b12a:{NFSU2_TR(0x42b12a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b130ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42b130:L42b130:{c.instructions+=4;NFSU2_TR(0x42b130);
__builtin_memmove((R+0),gp(0x81cb88),4);
}
B42b135:{NFSU2_TR(0x42b135);
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
B42b137:{NFSU2_TR(0x42b137);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B42b139:{NFSU2_TR(0x42b139);
if(r1(R+518)){{goto L42b1cb;}}
}
B42b13f:L42b13f:{c.instructions+=2;NFSU2_TR(0x42b13f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42b141:{NFSU2_TR(0x42b141);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42b198;}}
}
B42b143:L42b143:{c.instructions+=3;NFSU2_TR(0x42b143);
__builtin_memmove((R+0),gp(0x81cb6c),4);
}
B42b148:{NFSU2_TR(0x42b148);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b149:{NFSU2_TR(0x42b149);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b14eull));
TAIL_STATIC(0x440e50u,440);
}
B42b14e:L42b14e:{c.instructions+=5;NFSU2_TR(0x42b14e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42b151:{NFSU2_TR(0x42b151);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42b155:{NFSU2_TR(0x42b155);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42b157:{NFSU2_TR(0x42b157);
u8 U[8];
w4(U+0,u32(u32(u32(0x1fcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42b162:{NFSU2_TR(0x42b162);
if(r1(R+518)){{goto L42b184;}}
}
B42b164:L42b164:{c.instructions+=4;NFSU2_TR(0x42b164);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b169:{NFSU2_TR(0x42b169);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b16b:{NFSU2_TR(0x42b16b);
__builtin_memmove((R+4),(R+0),4);
}
B42b16d:{NFSU2_TR(0x42b16d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b172ull));
TAIL_STATIC(0x4235a0u,423);
}
B42b172:L42b172:{c.instructions+=3;NFSU2_TR(0x42b172);
u8 U[8];
w4(U+0,u32(u32(u32(0x1fcull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B42b17d:{NFSU2_TR(0x42b17d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B42b17f:{NFSU2_TR(0x42b17f);
{goto L42b252;}
}
B42b184:L42b184:{c.instructions+=4;NFSU2_TR(0x42b184);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B42b186:{NFSU2_TR(0x42b186);
u8 U[8];
w4(U+0,u32(u32(u32(0x1fcull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B42b191:{NFSU2_TR(0x42b191);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B42b193:{NFSU2_TR(0x42b193);
{goto L42b252;}
}
B42b198:L42b198:{c.instructions+=3;NFSU2_TR(0x42b198);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x204ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x6ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B42b19f:{NFSU2_TR(0x42b19f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42b1a1:{NFSU2_TR(0x42b1a1);
if(r1(R+518)){{goto L42b1bf;}}
}
B42b1a3:L42b1a3:{c.instructions+=2;NFSU2_TR(0x42b1a3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b1a5:{NFSU2_TR(0x42b1a5);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b1a7ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B42b1a7:L42b1a7:{c.instructions+=6;NFSU2_TR(0x42b1a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42b1a9:{NFSU2_TR(0x42b1a9);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b1ab:{NFSU2_TR(0x42b1ab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b1ac:{NFSU2_TR(0x42b1ac);
__builtin_memmove((R+4),(R+24),4);
}
B42b1ae:{NFSU2_TR(0x42b1ae);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B42b1b4:{NFSU2_TR(0x42b1b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b1baull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42b1ba:L42b1ba:{c.instructions+=1;NFSU2_TR(0x42b1ba);
{goto L42b252;}
}
B42b1bf:L42b1bf:{c.instructions+=3;NFSU2_TR(0x42b1bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+0),(U+0),4);
}
B42b1c2:{NFSU2_TR(0x42b1c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b1c3:{NFSU2_TR(0x42b1c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b1c6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42b1c6:L42b1c6:{c.instructions+=1;NFSU2_TR(0x42b1c6);
{goto L42b252;}
}
B42b1cb:L42b1cb:{c.instructions+=3;NFSU2_TR(0x42b1cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+0),(U+0),4);
}
B42b1ce:{NFSU2_TR(0x42b1ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b1cf:{NFSU2_TR(0x42b1cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b1d4ull));
TAIL_STATIC(0x403120u,403);
}
B42b1d4:L42b1d4:{c.instructions+=3;NFSU2_TR(0x42b1d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+12),(U+0),4);
}
B42b1d6:{NFSU2_TR(0x42b1d6);
__builtin_memmove((R+4),(R+12),4);
}
B42b1d8:{NFSU2_TR(0x42b1d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b1ddull));
TAIL_STATIC(0x401990u,401);
}
B42b1dd:L42b1dd:{c.instructions+=2;NFSU2_TR(0x42b1dd);
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
B42b1df:{NFSU2_TR(0x42b1df);
if(r1(R+518)){{goto L42b21f;}}
}
B42b1e1:L42b1e1:{c.instructions+=5;NFSU2_TR(0x42b1e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42b1e3:{NFSU2_TR(0x42b1e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+0),(U+0),4);
}
B42b1e6:{NFSU2_TR(0x42b1e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b1e7:{NFSU2_TR(0x42b1e7);
__builtin_memmove((R+4),(R+12),4);
}
B42b1e9:{NFSU2_TR(0x42b1e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b1ecull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42b1ec:L42b1ec:{c.instructions+=4;NFSU2_TR(0x42b1ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B42b1ee:{NFSU2_TR(0x42b1ee);
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
B42b1f0:{NFSU2_TR(0x42b1f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42b1f8:{NFSU2_TR(0x42b1f8);
if(r1(R+518)){{goto L42b200;}}
}
B42b1fa:L42b1fa:{c.instructions+=3;NFSU2_TR(0x42b1fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42b1fc:{NFSU2_TR(0x42b1fc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b1fe:{NFSU2_TR(0x42b1fe);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b200ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B42b200:L42b200:{c.instructions+=7;NFSU2_TR(0x42b200);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42b202:{NFSU2_TR(0x42b202);
u8 U[4];
w4(U+0,u32(0x16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b204:{NFSU2_TR(0x42b204);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B42b208:{NFSU2_TR(0x42b208);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b209:{NFSU2_TR(0x42b209);
__builtin_memmove((R+4),(R+24),4);
}
B42b20b:{NFSU2_TR(0x42b20b);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B42b211:{NFSU2_TR(0x42b211);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b217ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42b217:L42b217:{c.instructions+=3;NFSU2_TR(0x42b217);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42b21b:{NFSU2_TR(0x42b21b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B42b21d:{NFSU2_TR(0x42b21d);
{goto L42b245;}
}
B42b21f:L42b21f:{c.instructions+=2;NFSU2_TR(0x42b21f);
__builtin_memmove((R+4),(R+24),4);
}
B42b221:{NFSU2_TR(0x42b221);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b226ull));
TAIL_STATIC(0x402360u,402);
}
B42b226:L42b226:{c.instructions+=3;NFSU2_TR(0x42b226);
__builtin_memmove((R+12),(R+0),4);
}
B42b228:{NFSU2_TR(0x42b228);
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
B42b22a:{NFSU2_TR(0x42b22a);
if(r1(R+518)){{goto L42b245;}}
}
B42b22c:L42b22c:{c.instructions+=5;NFSU2_TR(0x42b22c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B42b22e:{NFSU2_TR(0x42b22e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42b230:{NFSU2_TR(0x42b230);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+0),(U+0),4);
}
B42b233:{NFSU2_TR(0x42b233);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b234:{NFSU2_TR(0x42b234);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b237ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42b237:L42b237:{c.instructions+=3;NFSU2_TR(0x42b237);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B42b239:{NFSU2_TR(0x42b239);
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
B42b23b:{NFSU2_TR(0x42b23b);
if(r1(R+518)){{goto L42b243;}}
}
B42b23d:L42b23d:{c.instructions+=3;NFSU2_TR(0x42b23d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42b23f:{NFSU2_TR(0x42b23f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b241:{NFSU2_TR(0x42b241);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b243ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B42b243:L42b243:{c.instructions+=1;NFSU2_TR(0x42b243);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B42b245:L42b245:{c.instructions+=5;NFSU2_TR(0x42b245);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42b247:{NFSU2_TR(0x42b247);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42b249:{NFSU2_TR(0x42b249);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b24a:{NFSU2_TR(0x42b24a);
__builtin_memmove((R+4),(R+24),4);
}
B42b24c:{NFSU2_TR(0x42b24c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b252ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42b252:L42b252:{c.instructions+=2;NFSU2_TR(0x42b252);
__builtin_memmove((R+4),(R+24),4);
}
B42b254:{NFSU2_TR(0x42b254);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b259ull));
TAIL_STATIC(0x420810u,420);
}
B42b259:L42b259:{c.instructions+=3;NFSU2_TR(0x42b259);
u8 U[5];
w4(U+0,u32(u32(u32(0x1bull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B42b25d:{NFSU2_TR(0x42b25d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42b25f:{NFSU2_TR(0x42b25f);
if(r1(R+518)){{goto L42b2a9;}}
}
B42b261:L42b261:{c.instructions+=3;NFSU2_TR(0x42b261);
__builtin_memmove((R+0),gp(0x7e8d70),4);
}
B42b266:{NFSU2_TR(0x42b266);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42b268:{NFSU2_TR(0x42b268);
if(r1(R+518)){{goto L42b28c;}}
}
B42b26a:L42b26a:{c.instructions+=2;NFSU2_TR(0x42b26a);
__builtin_memmove((R+4),(R+24),4);
}
B42b26c:{NFSU2_TR(0x42b26c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b271ull));
TAIL_STATIC(0x402180u,402);
}
B42b271:L42b271:{c.instructions+=2;NFSU2_TR(0x42b271);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42b273:{NFSU2_TR(0x42b273);
if(r1(R+518)){{goto L42b28c;}}
}
B42b275:L42b275:{c.instructions+=3;NFSU2_TR(0x42b275);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42b278:{NFSU2_TR(0x42b278);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B42b27c:{NFSU2_TR(0x42b27c);
if(r1(R+518)){{goto L42b287;}}
}
B42b27e:L42b27e:{c.instructions+=2;NFSU2_TR(0x42b27e);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b280:{NFSU2_TR(0x42b280);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b285ull));
TAIL_STATIC(0x5f46a0u,5f4);
}
B42b285:L42b285:{c.instructions+=1;NFSU2_TR(0x42b285);
{goto L42b2ba;}
}
B42b287:L42b287:{c.instructions+=2;NFSU2_TR(0x42b287);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42b28a:{NFSU2_TR(0x42b28a);
{goto L42b2b5;}
}
B42b28c:L42b28c:{c.instructions+=3;NFSU2_TR(0x42b28c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42b28f:{NFSU2_TR(0x42b28f);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B42b293:{NFSU2_TR(0x42b293);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42b2ba;}}
}
B42b295:L42b295:{c.instructions+=2;NFSU2_TR(0x42b295);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b296:{NFSU2_TR(0x42b296);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b29bull));
TAIL_STATIC(0x5f4400u,5f4);
}
B42b29b:L42b29b:{c.instructions+=4;NFSU2_TR(0x42b29b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42b29e:{NFSU2_TR(0x42b29e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42b2a1:{NFSU2_TR(0x42b2a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b2a2:{NFSU2_TR(0x42b2a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b2a7ull));
TAIL_STATIC(0x5f46a0u,5f4);
}
B42b2a7:L42b2a7:{c.instructions+=1;NFSU2_TR(0x42b2a7);
{goto L42b2ba;}
}
B42b2a9:L42b2a9:{c.instructions+=3;NFSU2_TR(0x42b2a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42b2ac:{NFSU2_TR(0x42b2ac);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B42b2b0:{NFSU2_TR(0x42b2b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42b2ba;}}
}
B42b2b2:L42b2b2:{c.instructions+=1;NFSU2_TR(0x42b2b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42b2b5:L42b2b5:{c.instructions+=1;NFSU2_TR(0x42b2b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b2baull));
TAIL_STATIC(0x5918a0u,591);
}
B42b2ba:L42b2ba:{c.instructions+=2;NFSU2_TR(0x42b2ba);
__builtin_memmove((R+4),(R+24),4);
}
B42b2bc:{NFSU2_TR(0x42b2bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b2c1ull));
TAIL_STATIC(0x41bf80u,41b);
}
B42b2c1:L42b2c1:{c.instructions+=3;NFSU2_TR(0x42b2c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x71cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42b2c7:{NFSU2_TR(0x42b2c7);
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
B42b2c9:{NFSU2_TR(0x42b2c9);
if(r1(R+518)){{goto L42b30a;}}
}
B42b2cb:L42b2cb:{c.instructions+=2;NFSU2_TR(0x42b2cb);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7fffffffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffffffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B42b2d0:{NFSU2_TR(0x42b2d0);
if(r1(R+518)){{goto L42b30a;}}
}
B42b2d2:L42b2d2:{c.instructions+=9;NFSU2_TR(0x42b2d2);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B42b2d7:{NFSU2_TR(0x42b2d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x71cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B42b2dd:{NFSU2_TR(0x42b2dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42b2e1:{NFSU2_TR(0x42b2e1);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B42b2e5:{NFSU2_TR(0x42b2e5);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42b2eb:{NFSU2_TR(0x42b2eb);
{u32 ea_=u32(u32(7877812u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42b2f1:{NFSU2_TR(0x42b2f1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42b2f3:{NFSU2_TR(0x42b2f3);
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
B42b2f6:{NFSU2_TR(0x42b2f6);
if(r1(R+514)){{goto L42b30a;}}
}
B42b2f8:L42b2f8:{c.instructions+=8;NFSU2_TR(0x42b2f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B42b2fb:{NFSU2_TR(0x42b2fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42b2fd:{NFSU2_TR(0x42b2fd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b2ff:{NFSU2_TR(0x42b2ff);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b301:{NFSU2_TR(0x42b301);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b303:{NFSU2_TR(0x42b303);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b305:{NFSU2_TR(0x42b305);
__builtin_memmove((R+4),(R+24),4);
}
B42b307:{NFSU2_TR(0x42b307);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b30aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42b30a:L42b30a:{c.instructions+=8;NFSU2_TR(0x42b30a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1f4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42b311:{NFSU2_TR(0x42b311);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42b312:{NFSU2_TR(0x42b312);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42b313:{NFSU2_TR(0x42b313);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42b31a:{NFSU2_TR(0x42b31a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42b31b:{NFSU2_TR(0x42b31b);
__builtin_memmove((R+16),(R+20),4);
}
B42b31d:{NFSU2_TR(0x42b31d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42b31e:{NFSU2_TR(0x42b31e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42b330:L42b330:{c.instructions+=2;NFSU2_TR(0x42b330);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b332:{NFSU2_TR(0x42b332);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b337ull));
TAIL_STATIC(0x42aa20u,42a);
}
B42b337:L42b337:{c.instructions+=1;NFSU2_TR(0x42b337);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42b340:L42b340:{c.instructions+=16;NFSU2_TR(0x42b340);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b341:{NFSU2_TR(0x42b341);
__builtin_memmove((R+20),(R+16),4);
}
B42b343:{NFSU2_TR(0x42b343);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B42b346:{NFSU2_TR(0x42b346);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x204ull))));
}
B42b34c:{NFSU2_TR(0x42b34c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b34d:{NFSU2_TR(0x42b34d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B42b350:{NFSU2_TR(0x42b350);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42b352:{NFSU2_TR(0x42b352);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b353:{NFSU2_TR(0x42b353);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42b357:{NFSU2_TR(0x42b357);
__builtin_memmove((R+4),gp(0x89e7e3),1);
}
B42b35d:{NFSU2_TR(0x42b35d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b35e:{NFSU2_TR(0x42b35e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30cull))));
__builtin_memmove((R+24),(U+0),4);
}
B42b364:{NFSU2_TR(0x42b364);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B42b366:{NFSU2_TR(0x42b366);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42b368:{NFSU2_TR(0x42b368);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42b36c:{NFSU2_TR(0x42b36c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42b376;}}
}
B42b36e:L42b36e:{c.instructions+=2;NFSU2_TR(0x42b36e);
u8 U[8];
__builtin_memmove((U+0),gp(0x89010c),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42b374:{NFSU2_TR(0x42b374);
if(r1(R+518)){{goto L42b382;}}
}
B42b376:L42b376:{c.instructions+=3;NFSU2_TR(0x42b376);
__builtin_memmove((R+4),gp(0x783680),4);
}
B42b37c:{NFSU2_TR(0x42b37c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42b380:{NFSU2_TR(0x42b380);
{goto L42b38c;}
}
B42b382:L42b382:{c.instructions+=2;NFSU2_TR(0x42b382);
__builtin_memmove((R+8),gp(0x7e8e64),4);
}
B42b388:{NFSU2_TR(0x42b388);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42b38c:L42b38c:{c.instructions+=3;NFSU2_TR(0x42b38c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42b38f:{NFSU2_TR(0x42b38f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B42b392:{NFSU2_TR(0x42b392);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b397ull));
TAIL_STATIC(0x5b5330u,5b5);
}
B42b397:L42b397:{c.instructions+=11;NFSU2_TR(0x42b397);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42b39b:{NFSU2_TR(0x42b39b);
{u32 ea_=u32(u32(8293992u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B42b3a1:{NFSU2_TR(0x42b3a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42b3a5:{NFSU2_TR(0x42b3a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42b3a9:{NFSU2_TR(0x42b3a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42b3ad:{NFSU2_TR(0x42b3ad);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B42b3af:{NFSU2_TR(0x42b3af);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42b3b7:{NFSU2_TR(0x42b3b7);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42b3bd:{NFSU2_TR(0x42b3bd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42b3bf:{NFSU2_TR(0x42b3bf);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42b3c2:{NFSU2_TR(0x42b3c2);
if(r1(R+514)){{goto L42b3d0;}}
}
B42b3c4:L42b3c4:{c.instructions+=3;NFSU2_TR(0x42b3c4);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B42b3ca:{NFSU2_TR(0x42b3ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42b3ce:{NFSU2_TR(0x42b3ce);
{goto L42b3d4;}
}
B42b3d0:L42b3d0:{c.instructions+=1;NFSU2_TR(0x42b3d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42b3d4:L42b3d4:{c.instructions+=4;NFSU2_TR(0x42b3d4);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B42b3db:{NFSU2_TR(0x42b3db);
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
B42b3dd:{NFSU2_TR(0x42b3dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x47c34f80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42b3e5:{NFSU2_TR(0x42b3e5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L42b458;}}
}
B42b3e7:L42b3e7:{c.instructions+=3;NFSU2_TR(0x42b3e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42b3ea:{NFSU2_TR(0x42b3ea);
__builtin_memmove((R+28),(R+0),4);
}
B42b3ec:{NFSU2_TR(0x42b3ec);
__builtin_memmove((R+16),(R+16),4);
}
B42b3f0:L42b3f0:{c.instructions+=3;NFSU2_TR(0x42b3f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b3f1:{NFSU2_TR(0x42b3f1);
__builtin_memmove((R+4),(R+12),4);
}
B42b3f3:{NFSU2_TR(0x42b3f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b3f8ull));
TAIL_STATIC(0x60bff0u,60b);
}
B42b3f8:L42b3f8:{c.instructions+=10;NFSU2_TR(0x42b3f8);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42b3fc:{NFSU2_TR(0x42b3fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42b3ff:{NFSU2_TR(0x42b3ff);
{u32 ea_=u32(u32(7881568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42b405:{NFSU2_TR(0x42b405);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42b409:{NFSU2_TR(0x42b409);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42b40d:{NFSU2_TR(0x42b40d);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B42b40f:{NFSU2_TR(0x42b40f);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42b415:{NFSU2_TR(0x42b415);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42b417:{NFSU2_TR(0x42b417);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42b41a:{NFSU2_TR(0x42b41a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42b439;}}
}
B42b41c:L42b41c:{c.instructions+=8;NFSU2_TR(0x42b41c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B42b41e:{NFSU2_TR(0x42b41e);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42b424:{NFSU2_TR(0x42b424);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B42b428:{NFSU2_TR(0x42b428);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42b42c:{NFSU2_TR(0x42b42c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B42b432:{NFSU2_TR(0x42b432);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42b434:{NFSU2_TR(0x42b434);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42b437:{NFSU2_TR(0x42b437);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42b44a;}}
}
B42b439:L42b439:{c.instructions+=4;NFSU2_TR(0x42b439);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B42b43d:{NFSU2_TR(0x42b43d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42b43f:{NFSU2_TR(0x42b43f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42b442:{NFSU2_TR(0x42b442);
if(r1(R+514)){{goto L42b44a;}}
}
B42b444:L42b444:{c.instructions+=2;NFSU2_TR(0x42b444);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42b448:{NFSU2_TR(0x42b448);
{goto L42b44c;}
}
B42b44a:L42b44a:{c.instructions+=1;NFSU2_TR(0x42b44a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B42b44c:L42b44c:{c.instructions+=3;NFSU2_TR(0x42b44c);
w1(R+512,carry<u32>(r4(R+24),u32(0x30ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x30ull))));
}
B42b44f:{NFSU2_TR(0x42b44f);
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
B42b450:{NFSU2_TR(0x42b450);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42b3f0u);}goto L42b3f0;}}
}
B42b452:L42b452:{c.instructions+=2;NFSU2_TR(0x42b452);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B42b456:{NFSU2_TR(0x42b456);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B42b458:L42b458:{c.instructions+=5;NFSU2_TR(0x42b458);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42b45c:{NFSU2_TR(0x42b45c);
{u32 ea_=u32(u32(7878268u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42b462:{NFSU2_TR(0x42b462);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42b464:{NFSU2_TR(0x42b464);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42b467:{NFSU2_TR(0x42b467);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42b533;}}
}
B42b46d:L42b46d:{c.instructions+=3;NFSU2_TR(0x42b46d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42b46f:{NFSU2_TR(0x42b46f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42b472:{NFSU2_TR(0x42b472);
if(r1(R+518)){{goto L42b4a4;}}
}
B42b474:L42b474:{c.instructions+=2;NFSU2_TR(0x42b474);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42b476:{NFSU2_TR(0x42b476);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42b4a4;}}
}
B42b478:L42b478:{c.instructions+=6;NFSU2_TR(0x42b478);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42b47b:{NFSU2_TR(0x42b47b);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B42b47d:{NFSU2_TR(0x42b47d);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42b483:{NFSU2_TR(0x42b483);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42b485:{NFSU2_TR(0x42b485);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42b488:{NFSU2_TR(0x42b488);
if(r1(R+514)){{goto L42b4a4;}}
}
B42b48a:L42b48a:{c.instructions+=7;NFSU2_TR(0x42b48a);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42b48d:{NFSU2_TR(0x42b48d);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B42b491:{NFSU2_TR(0x42b491);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B42b493:{NFSU2_TR(0x42b493);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42b499:{NFSU2_TR(0x42b499);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42b49b:{NFSU2_TR(0x42b49b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42b49e:{NFSU2_TR(0x42b49e);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L42b533;}}
}
B42b4a4:L42b4a4:{c.instructions+=7;NFSU2_TR(0x42b4a4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B42b4a6:{NFSU2_TR(0x42b4a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1f8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42b4ad:{NFSU2_TR(0x42b4ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x1fcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42b4b4:{NFSU2_TR(0x42b4b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x200ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42b4bb:{NFSU2_TR(0x42b4bb);
w4(R+4,u32(0x74ull));
}
B42b4c0:{NFSU2_TR(0x42b4c0);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B42b4c4:{NFSU2_TR(0x42b4c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b4c5:L42b4c5:{c.instructions+=1;NFSU2_TR(0x42b4c5);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L42b4c7;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42b4c5u);}goto L42b4c5;}
}
B42b4c7:L42b4c7:{c.instructions+=3;NFSU2_TR(0x42b4c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b4c8:{NFSU2_TR(0x42b4c8);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B42b4cc:{NFSU2_TR(0x42b4cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b4d1ull));
TAIL_STATIC(0x41d160u,41d);
}
B42b4d1:L42b4d1:{c.instructions+=13;NFSU2_TR(0x42b4d1);
__builtin_memmove((R+8),gp(0x783670),4);
}
B42b4d7:{NFSU2_TR(0x42b4d7);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B42b4db:{NFSU2_TR(0x42b4db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b4dc:{NFSU2_TR(0x42b4dc);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B42b4e0:{NFSU2_TR(0x42b4e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b4e1:{NFSU2_TR(0x42b4e1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b4e2:{NFSU2_TR(0x42b4e2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b4e3:{NFSU2_TR(0x42b4e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B42b4e7:{NFSU2_TR(0x42b4e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b4e8:{NFSU2_TR(0x42b4e8);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B42b4ec:{NFSU2_TR(0x42b4ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42b4f4:{NFSU2_TR(0x42b4f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x47c34f80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42b4fc:{NFSU2_TR(0x42b4fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b501ull));
TAIL_STATIC(0x428df0u,428);
}
B42b501:L42b501:{c.instructions+=2;NFSU2_TR(0x42b501);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42b503:{NFSU2_TR(0x42b503);
if(r1(R+518)){{goto L42b52d;}}
}
B42b505:L42b505:{c.instructions+=4;NFSU2_TR(0x42b505);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B42b509:{NFSU2_TR(0x42b509);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b50a:{NFSU2_TR(0x42b50a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42b50e:{NFSU2_TR(0x42b50e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b513ull));
TAIL_STATIC(0x40fbe0u,40f);
}
B42b513:L42b513:{c.instructions+=5;NFSU2_TR(0x42b513);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42b517:{NFSU2_TR(0x42b517);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B42b51b:{NFSU2_TR(0x42b51b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b51c:{NFSU2_TR(0x42b51c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B42b51f:{NFSU2_TR(0x42b51f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b524ull));
TAIL_STATIC(0x401d40u,401);
}
B42b524:L42b524:{c.instructions+=6;NFSU2_TR(0x42b524);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42b525:{NFSU2_TR(0x42b525);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42b526:{NFSU2_TR(0x42b526);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42b527:{NFSU2_TR(0x42b527);
__builtin_memmove((R+16),(R+20),4);
}
B42b529:{NFSU2_TR(0x42b529);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42b52a:{NFSU2_TR(0x42b52a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42b52d:L42b52d:{c.instructions+=2;NFSU2_TR(0x42b52d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B42b531:{NFSU2_TR(0x42b531);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B42b533:L42b533:{c.instructions+=3;NFSU2_TR(0x42b533);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42b535:{NFSU2_TR(0x42b535);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B42b537:{NFSU2_TR(0x42b537);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L42b53e;}}
}
B42b539:L42b539:{c.instructions+=2;NFSU2_TR(0x42b539);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B42b53c:{NFSU2_TR(0x42b53c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L42b54a;}}
}
B42b53e:L42b53e:{c.instructions+=4;NFSU2_TR(0x42b53e);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B42b542:{NFSU2_TR(0x42b542);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b543:{NFSU2_TR(0x42b543);
__builtin_memmove((R+4),(R+24),4);
}
B42b545:{NFSU2_TR(0x42b545);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b54aull));
TAIL_STATIC(0x40fbe0u,40f);
}
B42b54a:L42b54a:{c.instructions+=6;NFSU2_TR(0x42b54a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42b54e:{NFSU2_TR(0x42b54e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B42b551:{NFSU2_TR(0x42b551);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b552:{NFSU2_TR(0x42b552);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b553:{NFSU2_TR(0x42b553);
__builtin_memmove((R+4),(R+24),4);
}
B42b555:{NFSU2_TR(0x42b555);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b55aull));
TAIL_STATIC(0x420d40u,420);
}
B42b55a:L42b55a:{c.instructions+=6;NFSU2_TR(0x42b55a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42b55b:{NFSU2_TR(0x42b55b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42b55c:{NFSU2_TR(0x42b55c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42b55d:{NFSU2_TR(0x42b55d);
__builtin_memmove((R+16),(R+20),4);
}
B42b55f:{NFSU2_TR(0x42b55f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42b560:{NFSU2_TR(0x42b560);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42b570:L42b570:{c.instructions+=6;NFSU2_TR(0x42b570);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b571:{NFSU2_TR(0x42b571);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b572:{NFSU2_TR(0x42b572);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B42b576:{NFSU2_TR(0x42b576);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b577:{NFSU2_TR(0x42b577);
__builtin_memmove((R+24),(R+4),4);
}
B42b579:{NFSU2_TR(0x42b579);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b57eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42b340u);}goto L42b340;}
}
B42b57e:L42b57e:{c.instructions+=3;NFSU2_TR(0x42b57e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b57f:{NFSU2_TR(0x42b57f);
__builtin_memmove((R+4),(R+24),4);
}
B42b581:{NFSU2_TR(0x42b581);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b586ull));
TAIL_STATIC(0x40e390u,40e);
}
B42b586:L42b586:{c.instructions+=8;NFSU2_TR(0x42b586);
w1(R+0,u8(0x1ull));
}
B42b588:{NFSU2_TR(0x42b588);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42b589:{NFSU2_TR(0x42b589);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fcull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42b58f:{NFSU2_TR(0x42b58f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42b599:{NFSU2_TR(0x42b599);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fdull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42b59f:{NFSU2_TR(0x42b59f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1feull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42b5a5:{NFSU2_TR(0x42b5a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42b5a6:{NFSU2_TR(0x42b5a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42b5b0:L42b5b0:{c.instructions+=13;NFSU2_TR(0x42b5b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b5b1:{NFSU2_TR(0x42b5b1);
__builtin_memmove((R+20),(R+16),4);
}
B42b5b3:{NFSU2_TR(0x42b5b3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B42b5b6:{NFSU2_TR(0x42b5b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1f4ull))));
}
B42b5bc:{NFSU2_TR(0x42b5bc);
__builtin_memmove((R+4),gp(0x883dac),4);
}
B42b5c2:{NFSU2_TR(0x42b5c2);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B42b5c9:{NFSU2_TR(0x42b5c9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b5ca:{NFSU2_TR(0x42b5ca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b5cb:{NFSU2_TR(0x42b5cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B42b5ce:{NFSU2_TR(0x42b5ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42b5d0:{NFSU2_TR(0x42b5d0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b5d1:{NFSU2_TR(0x42b5d1);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42b5d6:{NFSU2_TR(0x42b5d6);
if(r1(R+518)){{goto L42b5ec;}}
}
B42b5d8:L42b5d8:{c.instructions+=3;NFSU2_TR(0x42b5d8);
__builtin_memmove((R+4),gp(0x890118),4);
}
B42b5de:{NFSU2_TR(0x42b5de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b5df:{NFSU2_TR(0x42b5df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b5e4ull));
TAIL_STATIC(0x5eeff0u,5ee);
}
B42b5e4:L42b5e4:{c.instructions+=2;NFSU2_TR(0x42b5e4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42b5e6:{NFSU2_TR(0x42b5e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42b7d8;}}
}
B42b5ec:L42b5ec:{c.instructions+=5;NFSU2_TR(0x42b5ec);
__builtin_memmove((R+4),gp(0x890118),4);
}
B42b5f2:{NFSU2_TR(0x42b5f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42b5f5:{NFSU2_TR(0x42b5f5);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B42b5f7:{NFSU2_TR(0x42b5f7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42b5f9:{NFSU2_TR(0x42b5f9);
if(r1(R+518)){{goto L42b7d8;}}
}
B42b5ff:L42b5ff:{c.instructions+=2;NFSU2_TR(0x42b5ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42b604:{NFSU2_TR(0x42b604);
if(r1(R+518)){{goto L42b7d8;}}
}
B42b60a:L42b60a:{c.instructions+=9;NFSU2_TR(0x42b60a);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B42b610:{NFSU2_TR(0x42b610);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B42b612:{NFSU2_TR(0x42b612);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42b616:{NFSU2_TR(0x42b616);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B42b61a:{NFSU2_TR(0x42b61a);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42b620:{NFSU2_TR(0x42b620);
{u32 ea_=u32(u32(7881704u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42b626:{NFSU2_TR(0x42b626);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42b628:{NFSU2_TR(0x42b628);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42b62b:{NFSU2_TR(0x42b62b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42b7d8;}}
}
B42b631:L42b631:{c.instructions+=7;NFSU2_TR(0x42b631);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42b633:{NFSU2_TR(0x42b633);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42b639:{NFSU2_TR(0x42b639);
__builtin_memmove((R+8),(R+4),4);
}
B42b63b:{NFSU2_TR(0x42b63b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b63c:{NFSU2_TR(0x42b63c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b63d:{NFSU2_TR(0x42b63d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42b641:{NFSU2_TR(0x42b641);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b646ull));
TAIL_STATIC(0x4038d0u,403);
}
B42b646:L42b646:{c.instructions+=10;NFSU2_TR(0x42b646);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42b64a:{NFSU2_TR(0x42b64a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B42b651:{NFSU2_TR(0x42b651);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B42b654:{NFSU2_TR(0x42b654);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B42b657:{NFSU2_TR(0x42b657);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B42b65b:{NFSU2_TR(0x42b65b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42b65e:{NFSU2_TR(0x42b65e);
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B42b661:{NFSU2_TR(0x42b661);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B42b662:{NFSU2_TR(0x42b662);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42b666:{NFSU2_TR(0x42b666);
if(r1(R+519)){{goto L42b7d8;}}
}
B42b66c:L42b66c:{c.instructions+=6;NFSU2_TR(0x42b66c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B42b66f:{NFSU2_TR(0x42b66f);
u8 U[23];
w4(U+15,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+19),(R+8),4);
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+15))));
w1(U+5,u8((r4(U+15))==(u32(0x0ull))));
w4(U+6,u32(u32(r4(U+15))-u32(u32(0x1ull))));
w4(U+10,shl<u32>(r4(U+19),u64(r4(U+6))));
w1(U+14,u8(s32(r4(U+10))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+5),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+5))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+14))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
}
B42b672:{NFSU2_TR(0x42b672);
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
B42b673:{NFSU2_TR(0x42b673);
u8 U[12];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B42b677:{NFSU2_TR(0x42b677);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42b67b:{NFSU2_TR(0x42b67b);
{goto L42b680;}
}
B42b680:L42b680:{c.instructions+=9;NFSU2_TR(0x42b680);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42b683:{NFSU2_TR(0x42b683);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42b687:{NFSU2_TR(0x42b687);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42b68a:{NFSU2_TR(0x42b68a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42b68e:{NFSU2_TR(0x42b68e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B42b691:{NFSU2_TR(0x42b691);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b692:{NFSU2_TR(0x42b692);
__builtin_memmove((R+4),(R+24),4);
}
B42b694:{NFSU2_TR(0x42b694);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42b698:{NFSU2_TR(0x42b698);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b69dull));
TAIL_STATIC(0x60bff0u,60b);
}
B42b69d:L42b69d:{c.instructions+=10;NFSU2_TR(0x42b69d);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B42b6a1:{NFSU2_TR(0x42b6a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42b6a4:{NFSU2_TR(0x42b6a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42b6a8:{NFSU2_TR(0x42b6a8);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B42b6ac:{NFSU2_TR(0x42b6ac);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42b6b0:{NFSU2_TR(0x42b6b0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42b6b4:{NFSU2_TR(0x42b6b4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42b6ba:{NFSU2_TR(0x42b6ba);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42b6bc:{NFSU2_TR(0x42b6bc);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42b6bf:{NFSU2_TR(0x42b6bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42b7b2;}}
}
B42b6c5:L42b6c5:{c.instructions+=3;NFSU2_TR(0x42b6c5);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
w4(R+4,u32(s32(s16(r2(U+0)))));
}
B42b6c8:{NFSU2_TR(0x42b6c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e970ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B42b6cf:{NFSU2_TR(0x42b6cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b6d4ull));
TAIL_STATIC(0x60bea0u,60b);
}
B42b6d4:L42b6d4:{c.instructions+=2;NFSU2_TR(0x42b6d4);
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
B42b6d6:{NFSU2_TR(0x42b6d6);
if(r1(R+518)){{goto L42b7b2;}}
}
B42b6dc:L42b6dc:{c.instructions+=13;NFSU2_TR(0x42b6dc);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B42b6df:{NFSU2_TR(0x42b6df);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e970ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B42b6e6:{NFSU2_TR(0x42b6e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42b6ea:{NFSU2_TR(0x42b6ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42b6ec:{NFSU2_TR(0x42b6ec);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b6ee:{NFSU2_TR(0x42b6ee);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b6ef:{NFSU2_TR(0x42b6ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42b6f2:{NFSU2_TR(0x42b6f2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b6f3:{NFSU2_TR(0x42b6f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42b6f7:{NFSU2_TR(0x42b6f7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b6f8:{NFSU2_TR(0x42b6f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b6f9:{NFSU2_TR(0x42b6f9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b6fa:{NFSU2_TR(0x42b6fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b6ffull));
TAIL_STATIC(0x403a40u,403);
}
B42b6ff:L42b6ff:{c.instructions+=3;NFSU2_TR(0x42b6ff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B42b702:{NFSU2_TR(0x42b702);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42b704:{NFSU2_TR(0x42b704);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42b730;}}
}
B42b706:L42b706:{c.instructions+=5;NFSU2_TR(0x42b706);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42b70a:{NFSU2_TR(0x42b70a);
{u32 ea_=u32(u32(7878284u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42b710:{NFSU2_TR(0x42b710);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42b712:{NFSU2_TR(0x42b712);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42b715:{NFSU2_TR(0x42b715);
if(r1(R+514)){{goto L42b7b2;}}
}
B42b71b:L42b71b:{c.instructions+=5;NFSU2_TR(0x42b71b);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42b71f:{NFSU2_TR(0x42b71f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42b725:{NFSU2_TR(0x42b725);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42b727:{NFSU2_TR(0x42b727);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42b72a:{NFSU2_TR(0x42b72a);
if(r1(R+514)){{goto L42b7b2;}}
}
B42b730:L42b730:{c.instructions+=7;NFSU2_TR(0x42b730);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B42b732:{NFSU2_TR(0x42b732);
u8 U[8];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42b739:{NFSU2_TR(0x42b739);
u8 U[8];
w4(U+0,u32(u32(u32(0x1ecull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42b740:{NFSU2_TR(0x42b740);
u8 U[8];
w4(U+0,u32(u32(u32(0x1f0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42b747:{NFSU2_TR(0x42b747);
w4(R+4,u32(0x74ull));
}
B42b74c:{NFSU2_TR(0x42b74c);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B42b750:{NFSU2_TR(0x42b750);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b751:L42b751:{c.instructions+=1;NFSU2_TR(0x42b751);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L42b753;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42b751u);}goto L42b751;}
}
B42b753:L42b753:{c.instructions+=3;NFSU2_TR(0x42b753);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b754:{NFSU2_TR(0x42b754);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B42b758:{NFSU2_TR(0x42b758);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b75dull));
TAIL_STATIC(0x41d160u,41d);
}
B42b75d:L42b75d:{c.instructions+=17;NFSU2_TR(0x42b75d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42b763:{NFSU2_TR(0x42b763);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42b766:{NFSU2_TR(0x42b766);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B42b768:{NFSU2_TR(0x42b768);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x310ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42b76e:{NFSU2_TR(0x42b76e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42b771:{NFSU2_TR(0x42b771);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x314ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42b777:{NFSU2_TR(0x42b777);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42b77a:{NFSU2_TR(0x42b77a);
__builtin_memmove((R+0),gp(0x783670),4);
}
B42b77f:{NFSU2_TR(0x42b77f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x318ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42b785:{NFSU2_TR(0x42b785);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b786:{NFSU2_TR(0x42b786);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b787:{NFSU2_TR(0x42b787);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B42b78a:{NFSU2_TR(0x42b78a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42b78d:{NFSU2_TR(0x42b78d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b78e:{NFSU2_TR(0x42b78e);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B42b792:{NFSU2_TR(0x42b792);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b793:{NFSU2_TR(0x42b793);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b798ull));
TAIL_STATIC(0x429890u,429);
}
B42b798:L42b798:{c.instructions+=3;NFSU2_TR(0x42b798);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B42b79a:{NFSU2_TR(0x42b79a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42b79c:{NFSU2_TR(0x42b79c);
if(r1(R+518)){{goto L42b7b2;}}
}
B42b79e:L42b79e:{c.instructions+=5;NFSU2_TR(0x42b79e);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B42b7a1:{NFSU2_TR(0x42b7a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e970ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B42b7a8:{NFSU2_TR(0x42b7a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42b7ab:{NFSU2_TR(0x42b7ab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B42b7ad:{NFSU2_TR(0x42b7ad);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42b7b2:L42b7b2:{c.instructions+=5;NFSU2_TR(0x42b7b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42b7b6:{NFSU2_TR(0x42b7b6);
w1(R+512,u8((r4(R+12))<(u32(0x30ull))));
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x30ull))));
}
B42b7b9:{NFSU2_TR(0x42b7b9);
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
B42b7ba:{NFSU2_TR(0x42b7ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42b7be:{NFSU2_TR(0x42b7be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42b680u);}goto L42b680;}}
}
B42b7c4:L42b7c4:{c.instructions+=3;NFSU2_TR(0x42b7c4);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B42b7c8:{NFSU2_TR(0x42b7c8);
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
B42b7ca:{NFSU2_TR(0x42b7ca);
if(r1(R+518)){{goto L42b7d8;}}
}
B42b7cc:L42b7cc:{c.instructions+=7;NFSU2_TR(0x42b7cc);
w4(R+0,u32(0x64ull));
}
B42b7d1:{NFSU2_TR(0x42b7d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42b7d2:{NFSU2_TR(0x42b7d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42b7d3:{NFSU2_TR(0x42b7d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42b7d4:{NFSU2_TR(0x42b7d4);
__builtin_memmove((R+16),(R+20),4);
}
B42b7d6:{NFSU2_TR(0x42b7d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42b7d7:{NFSU2_TR(0x42b7d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42b7d8:L42b7d8:{c.instructions+=7;NFSU2_TR(0x42b7d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42b7d9:{NFSU2_TR(0x42b7d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42b7da:{NFSU2_TR(0x42b7da);
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
B42b7dd:{NFSU2_TR(0x42b7dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42b7de:{NFSU2_TR(0x42b7de);
__builtin_memmove((R+16),(R+20),4);
}
B42b7e0:{NFSU2_TR(0x42b7e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42b7e1:{NFSU2_TR(0x42b7e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42b7f0:L42b7f0:{c.instructions+=8;NFSU2_TR(0x42b7f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B42b7f3:{NFSU2_TR(0x42b7f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b7f4:{NFSU2_TR(0x42b7f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B42b7f8:{NFSU2_TR(0x42b7f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42b7fb:{NFSU2_TR(0x42b7fb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42b7fd:{NFSU2_TR(0x42b7fd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b7fe:{NFSU2_TR(0x42b7fe);
__builtin_memmove((R+28),(R+4),4);
}
B42b800:{NFSU2_TR(0x42b800);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L42b8bd;}}
}
B42b806:L42b806:{c.instructions+=5;NFSU2_TR(0x42b806);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B42b80a:{NFSU2_TR(0x42b80a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42b810:{NFSU2_TR(0x42b810);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e970ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B42b817:{NFSU2_TR(0x42b817);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b818:{NFSU2_TR(0x42b818);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b81dull));
TAIL_STATIC(0x60be90u,60b);
}
B42b81d:L42b81d:{c.instructions+=2;NFSU2_TR(0x42b81d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42b81f:{NFSU2_TR(0x42b81f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42b8bd;}}
}
B42b825:L42b825:{c.instructions+=11;NFSU2_TR(0x42b825);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B42b829:{NFSU2_TR(0x42b829);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b82a:{NFSU2_TR(0x42b82a);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B42b82e:{NFSU2_TR(0x42b82e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b82f:{NFSU2_TR(0x42b82f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b830:{NFSU2_TR(0x42b830);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B42b838:{NFSU2_TR(0x42b838);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42b840:{NFSU2_TR(0x42b840);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42b848:{NFSU2_TR(0x42b848);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42b850:{NFSU2_TR(0x42b850);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42b858:{NFSU2_TR(0x42b858);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b85dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42b5b0u);}goto L42b5b0;}
}
B42b85d:L42b85d:{c.instructions+=3;NFSU2_TR(0x42b85d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B42b860:{NFSU2_TR(0x42b860);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xffffffffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42b863:{NFSU2_TR(0x42b863);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L42b8bd;}}
}
B42b865:L42b865:{c.instructions+=6;NFSU2_TR(0x42b865);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42b86b:{NFSU2_TR(0x42b86b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b86c:{NFSU2_TR(0x42b86c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B42b870:{NFSU2_TR(0x42b870);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b871:{NFSU2_TR(0x42b871);
__builtin_memmove((R+4),(R+20),4);
}
B42b873:{NFSU2_TR(0x42b873);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b878ull));
TAIL_STATIC(0x60be90u,60b);
}
B42b878:L42b878:{c.instructions+=2;NFSU2_TR(0x42b878);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42b87a:{NFSU2_TR(0x42b87a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42b8bc;}}
}
B42b87c:L42b87c:{c.instructions+=11;NFSU2_TR(0x42b87c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42b880:{NFSU2_TR(0x42b880);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42b884:{NFSU2_TR(0x42b884);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42b888:{NFSU2_TR(0x42b888);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42b88e:{NFSU2_TR(0x42b88e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42b892:{NFSU2_TR(0x42b892);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x310ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42b898:{NFSU2_TR(0x42b898);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x314ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42b89e:{NFSU2_TR(0x42b89e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x318ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42b8a4:{NFSU2_TR(0x42b8a4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b8a5:{NFSU2_TR(0x42b8a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x210ull))));
__builtin_memmove((R+4),(U+0),4);
}
B42b8ab:{NFSU2_TR(0x42b8ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b8b0ull));
TAIL_STATIC(0x41bc60u,41b);
}
B42b8b0:L42b8b0:{c.instructions+=2;NFSU2_TR(0x42b8b0);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B42b8b6:{NFSU2_TR(0x42b8b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x21cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42b8bc:L42b8bc:{c.instructions+=1;NFSU2_TR(0x42b8bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42b8bd:L42b8bd:{c.instructions+=9;NFSU2_TR(0x42b8bd);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B42b8c2:{NFSU2_TR(0x42b8c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x21cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B42b8c8:{NFSU2_TR(0x42b8c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42b8cc:{NFSU2_TR(0x42b8cc);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B42b8d0:{NFSU2_TR(0x42b8d0);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42b8d6:{NFSU2_TR(0x42b8d6);
{u32 ea_=u32(u32(7878280u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42b8dc:{NFSU2_TR(0x42b8dc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42b8de:{NFSU2_TR(0x42b8de);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42b8e1:{NFSU2_TR(0x42b8e1);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L42b934;}}
}
B42b8e3:L42b8e3:{c.instructions+=4;NFSU2_TR(0x42b8e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B42b8e9:{NFSU2_TR(0x42b8e9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b8ea:{NFSU2_TR(0x42b8ea);
__builtin_memmove((R+4),(R+24),4);
}
B42b8ec:{NFSU2_TR(0x42b8ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b8f1ull));
TAIL_STATIC(0x60c120u,60c);
}
B42b8f1:L42b8f1:{c.instructions+=2;NFSU2_TR(0x42b8f1);
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
B42b8f3:{NFSU2_TR(0x42b8f3);
if(r1(R+518)){{goto L42b92a;}}
}
B42b8f5:L42b8f5:{c.instructions+=10;NFSU2_TR(0x42b8f5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B42b8fc:{NFSU2_TR(0x42b8fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B42b8ff:{NFSU2_TR(0x42b8ff);
u8 U[45];
w4(U+37,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+4),4);
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+4))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B42b902:{NFSU2_TR(0x42b902);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b903:{NFSU2_TR(0x42b903);
{u32 ea_=u32(r4(R+24)+r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42b907:{NFSU2_TR(0x42b907);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B42b90a:{NFSU2_TR(0x42b90a);
__builtin_memmove((R+4),(R+24),4);
}
B42b90c:{NFSU2_TR(0x42b90c);
{u32 ea_=u32(u32(7878276u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B42b912:{NFSU2_TR(0x42b912);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42b916:{NFSU2_TR(0x42b916);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b91bull));
TAIL_STATIC(0x60bff0u,60b);
}
B42b91b:L42b91b:{c.instructions+=6;NFSU2_TR(0x42b91b);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42b91f:{NFSU2_TR(0x42b91f);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B42b921:{NFSU2_TR(0x42b921);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B42b923:{NFSU2_TR(0x42b923);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42b925:{NFSU2_TR(0x42b925);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42b928:{NFSU2_TR(0x42b928);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42b934;}}
}
B42b92a:L42b92a:{c.instructions+=5;NFSU2_TR(0x42b92a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42b92b:{NFSU2_TR(0x42b92b);
w1(R+0,u8(0x1ull));
}
B42b92d:{NFSU2_TR(0x42b92d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42b92e:{NFSU2_TR(0x42b92e);
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
B42b931:{NFSU2_TR(0x42b931);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42b934:L42b934:{c.instructions+=5;NFSU2_TR(0x42b934);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42b935:{NFSU2_TR(0x42b935);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B42b937:{NFSU2_TR(0x42b937);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42b938:{NFSU2_TR(0x42b938);
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
B42b93b:{NFSU2_TR(0x42b93b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42b940:L42b940:{c.instructions+=12;NFSU2_TR(0x42b940);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B42b943:{NFSU2_TR(0x42b943);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b944:{NFSU2_TR(0x42b944);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b945:{NFSU2_TR(0x42b945);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b946:{NFSU2_TR(0x42b946);
__builtin_memmove((R+24),(R+4),4);
}
B42b948:{NFSU2_TR(0x42b948);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42b94e:{NFSU2_TR(0x42b94e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b94f:{NFSU2_TR(0x42b94f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B42b953:{NFSU2_TR(0x42b953);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b954:{NFSU2_TR(0x42b954);
__builtin_memmove((R+4),(R+28),4);
}
B42b956:{NFSU2_TR(0x42b956);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30cull))));
__builtin_memmove((R+12),(U+0),4);
}
B42b95c:{NFSU2_TR(0x42b95c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b961ull));
TAIL_STATIC(0x60c120u,60c);
}
B42b961:L42b961:{c.instructions+=3;NFSU2_TR(0x42b961);
__builtin_memmove((R+20),(R+0),4);
}
B42b963:{NFSU2_TR(0x42b963);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42b965:{NFSU2_TR(0x42b965);
if(r1(R+518)){{goto L42b9f1;}}
}
B42b96b:L42b96b:{c.instructions+=3;NFSU2_TR(0x42b96b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42b971:{NFSU2_TR(0x42b971);
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
B42b973:{NFSU2_TR(0x42b973);
if(r1(R+518)){{goto L42b9f1;}}
}
B42b975:L42b975:{c.instructions+=3;NFSU2_TR(0x42b975);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b976:{NFSU2_TR(0x42b976);
__builtin_memmove((R+4),(R+28),4);
}
B42b978:{NFSU2_TR(0x42b978);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b97dull));
TAIL_STATIC(0x60bff0u,60b);
}
B42b97d:L42b97d:{c.instructions+=4;NFSU2_TR(0x42b97d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42b983:{NFSU2_TR(0x42b983);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42b985:{NFSU2_TR(0x42b985);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42b988:{NFSU2_TR(0x42b988);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42b9ea;}}
}
B42b98a:L42b98a:{c.instructions+=4;NFSU2_TR(0x42b98a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b98b:{NFSU2_TR(0x42b98b);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B42b98f:{NFSU2_TR(0x42b98f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42b997:{NFSU2_TR(0x42b997);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b99cull));
TAIL_STATIC(0x40fbe0u,40f);
}
B42b99c:L42b99c:{c.instructions+=8;NFSU2_TR(0x42b99c);
__builtin_memmove((R+4),gp(0x783670),4);
}
B42b9a2:{NFSU2_TR(0x42b9a2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b9a3:{NFSU2_TR(0x42b9a3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b9a4:{NFSU2_TR(0x42b9a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B42b9a7:{NFSU2_TR(0x42b9a7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b9a8:{NFSU2_TR(0x42b9a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b9a9:{NFSU2_TR(0x42b9a9);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B42b9ad:{NFSU2_TR(0x42b9ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b9b2ull));
TAIL_STATIC(0x429890u,429);
}
B42b9b2:L42b9b2:{c.instructions+=3;NFSU2_TR(0x42b9b2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42b9b4:{NFSU2_TR(0x42b9b4);
__builtin_memmove((R+4),(R+12),4);
}
B42b9b6:{NFSU2_TR(0x42b9b6);
if(r1(R+518)){{goto L42b9c4;}}
}
B42b9b8:L42b9b8:{c.instructions+=3;NFSU2_TR(0x42b9b8);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B42b9bc:{NFSU2_TR(0x42b9bc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b9bd:{NFSU2_TR(0x42b9bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b9c2ull));
TAIL_STATIC(0x40fbe0u,40f);
}
B42b9c2:L42b9c2:{c.instructions+=1;NFSU2_TR(0x42b9c2);
{goto L42b9ce;}
}
B42b9c4:L42b9c4:{c.instructions+=4;NFSU2_TR(0x42b9c4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b9c5:{NFSU2_TR(0x42b9c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B42b9c8:{NFSU2_TR(0x42b9c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b9c9:{NFSU2_TR(0x42b9c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b9ceull));
TAIL_STATIC(0x420d40u,420);
}
B42b9ce:L42b9ce:{c.instructions+=6;NFSU2_TR(0x42b9ce);
{u32 ea_=u32(r4(R+20)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42b9d1:{NFSU2_TR(0x42b9d1);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B42b9d3:{NFSU2_TR(0x42b9d3);
{u32 ea_=u32(u32(7881704u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42b9d9:{NFSU2_TR(0x42b9d9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42b9db:{NFSU2_TR(0x42b9db);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42b9de:{NFSU2_TR(0x42b9de);
if(r1(R+514)){{goto L42b9fd;}}
}
B42b9e0:L42b9e0:{c.instructions+=3;NFSU2_TR(0x42b9e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b9e1:{NFSU2_TR(0x42b9e1);
__builtin_memmove((R+4),(R+24),4);
}
B42b9e3:{NFSU2_TR(0x42b9e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b9e8ull));
TAIL_STATIC(0x40e390u,40e);
}
B42b9e8:L42b9e8:{c.instructions+=1;NFSU2_TR(0x42b9e8);
{goto L42b9fd;}
}
B42b9ea:L42b9ea:{c.instructions+=4;NFSU2_TR(0x42b9ea);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b9eb:{NFSU2_TR(0x42b9eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B42b9ee:{NFSU2_TR(0x42b9ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b9ef:{NFSU2_TR(0x42b9ef);
{goto L42b9f6;}
}
B42b9f1:L42b9f1:{c.instructions+=3;NFSU2_TR(0x42b9f1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b9f2:{NFSU2_TR(0x42b9f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B42b9f5:{NFSU2_TR(0x42b9f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42b9f6:L42b9f6:{c.instructions+=2;NFSU2_TR(0x42b9f6);
__builtin_memmove((R+4),(R+12),4);
}
B42b9f8:{NFSU2_TR(0x42b9f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42b9fdull));
TAIL_STATIC(0x420d40u,420);
}
B42b9fd:L42b9fd:{c.instructions+=10;NFSU2_TR(0x42b9fd);
w1(R+0,u8(0x1ull));
}
B42b9ff:{NFSU2_TR(0x42b9ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42ba00:{NFSU2_TR(0x42ba00);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fdull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42ba06:{NFSU2_TR(0x42ba06);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1feull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42ba0c:{NFSU2_TR(0x42ba0c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fcull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42ba12:{NFSU2_TR(0x42ba12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42ba13:{NFSU2_TR(0x42ba13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42ba14:{NFSU2_TR(0x42ba14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42ba15:{NFSU2_TR(0x42ba15);
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
B42ba18:{NFSU2_TR(0x42ba18);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42ba20:L42ba20:{c.instructions+=16;NFSU2_TR(0x42ba20);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42ba24:{NFSU2_TR(0x42ba24);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ba25:{NFSU2_TR(0x42ba25);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B42ba29:{NFSU2_TR(0x42ba29);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B42ba2d:{NFSU2_TR(0x42ba2d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ba2e:{NFSU2_TR(0x42ba2e);
__builtin_memmove((R+8),gp(0x783670),4);
}
B42ba34:{NFSU2_TR(0x42ba34);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B42ba3a:{NFSU2_TR(0x42ba3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B42ba3c:{NFSU2_TR(0x42ba3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42ba3f:{NFSU2_TR(0x42ba3f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ba40:{NFSU2_TR(0x42ba40);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B42ba43:{NFSU2_TR(0x42ba43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ba44:{NFSU2_TR(0x42ba44);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ba45:{NFSU2_TR(0x42ba45);
w4(R+4,u32(0x827a00ull));
}
B42ba4a:{NFSU2_TR(0x42ba4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42ba52:{NFSU2_TR(0x42ba52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ba57ull));
TAIL_STATIC(0x428ce0u,428);
}
B42ba57:L42ba57:{c.instructions+=2;NFSU2_TR(0x42ba57);
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
B42ba59:{NFSU2_TR(0x42ba59);
if(r1(R+518)){{goto L42ba6e;}}
}
B42ba5b:L42ba5b:{c.instructions+=7;NFSU2_TR(0x42ba5b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42ba5f:{NFSU2_TR(0x42ba5f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B42ba61:{NFSU2_TR(0x42ba61);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42ba65:{NFSU2_TR(0x42ba65);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42ba67:{NFSU2_TR(0x42ba67);
w4(R+0,u32(0x12cull));
}
B42ba6c:{NFSU2_TR(0x42ba6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42ba6d:{NFSU2_TR(0x42ba6d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42ba6e:L42ba6e:{c.instructions+=3;NFSU2_TR(0x42ba6e);
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
B42ba71:{NFSU2_TR(0x42ba71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42ba72:{NFSU2_TR(0x42ba72);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42ba80:L42ba80:{c.instructions+=21;NFSU2_TR(0x42ba80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B42ba83:{NFSU2_TR(0x42ba83);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ba84:{NFSU2_TR(0x42ba84);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ba85:{NFSU2_TR(0x42ba85);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ba86:{NFSU2_TR(0x42ba86);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B42ba8a:{NFSU2_TR(0x42ba8a);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B42ba91:{NFSU2_TR(0x42ba91);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B42ba94:{NFSU2_TR(0x42ba94);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B42ba97:{NFSU2_TR(0x42ba97);
__builtin_memmove((R+24),(R+4),4);
}
B42ba99:{NFSU2_TR(0x42ba99);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B42ba9f:{NFSU2_TR(0x42ba9f);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B42baa3:{NFSU2_TR(0x42baa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x228ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B42baa9:{NFSU2_TR(0x42baa9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42baad:{NFSU2_TR(0x42baad);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x47c34f80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42bab5:{NFSU2_TR(0x42bab5);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B42bab9:{NFSU2_TR(0x42bab9);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42babe:{NFSU2_TR(0x42babe);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42bac4:{NFSU2_TR(0x42bac4);
{u32 ea_=u32(r4(R+24)+u32(556u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42baca:{NFSU2_TR(0x42baca);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42bacc:{NFSU2_TR(0x42bacc);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42bacf:{NFSU2_TR(0x42bacf);
if(r1(R+518)){{goto L42bad6;}}
}
B42bad1:L42bad1:{c.instructions+=1;NFSU2_TR(0x42bad1);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42bad6:L42bad6:{c.instructions+=4;NFSU2_TR(0x42bad6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42badc:{NFSU2_TR(0x42badc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42badd:{NFSU2_TR(0x42badd);
__builtin_memmove((R+4),(R+28),4);
}
B42badf:{NFSU2_TR(0x42badf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42bae4ull));
TAIL_STATIC(0x60c120u,60c);
}
B42bae4:L42bae4:{c.instructions+=3;NFSU2_TR(0x42bae4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42baea:{NFSU2_TR(0x42baea);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42baec:{NFSU2_TR(0x42baec);
if(r1(R+518)){{goto L42bc43;}}
}
B42baf2:L42baf2:{c.instructions+=2;NFSU2_TR(0x42baf2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42baf4:{NFSU2_TR(0x42baf4);
if(r1(R+518)){{goto L42bc43;}}
}
B42bafa:L42bafa:{c.instructions+=12;NFSU2_TR(0x42bafa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42bafc:{NFSU2_TR(0x42bafc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42baff:{NFSU2_TR(0x42baff);
__builtin_memmove((R+8),gp(0x783670),4);
}
B42bb05:{NFSU2_TR(0x42bb05);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bb06:{NFSU2_TR(0x42bb06);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B42bb0a:{NFSU2_TR(0x42bb0a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bb0b:{NFSU2_TR(0x42bb0b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bb0c:{NFSU2_TR(0x42bb0c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bb0d:{NFSU2_TR(0x42bb0d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B42bb10:{NFSU2_TR(0x42bb10);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bb11:{NFSU2_TR(0x42bb11);
w4(R+4,u32(0x827a00ull));
}
B42bb16:{NFSU2_TR(0x42bb16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42bb1bull));
TAIL_STATIC(0x428ce0u,428);
}
B42bb1b:L42bb1b:{c.instructions+=4;NFSU2_TR(0x42bb1b);
__builtin_memmove((R+20),(R+0),4);
}
B42bb1d:{NFSU2_TR(0x42bb1d);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B42bb22:{NFSU2_TR(0x42bb22);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42bb24:{NFSU2_TR(0x42bb24);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42bb2f;}}
}
B42bb26:L42bb26:{c.instructions+=3;NFSU2_TR(0x42bb26);
__builtin_memmove((R+0),gp(0x890108),4);
}
B42bb2b:{NFSU2_TR(0x42bb2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42bb2d:{NFSU2_TR(0x42bb2d);
if(r1(R+518)){{goto L42bb71;}}
}
B42bb2f:L42bb2f:{c.instructions+=2;NFSU2_TR(0x42bb2f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42bb31:{NFSU2_TR(0x42bb31);
if(r1(R+518)){{goto L42bc19;}}
}
B42bb37:L42bb37:{c.instructions+=3;NFSU2_TR(0x42bb37);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bb38:{NFSU2_TR(0x42bb38);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bb39:{NFSU2_TR(0x42bb39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42bb3eull));
TAIL_STATIC(0x4140e0u,414);
}
B42bb3e:L42bb3e:{c.instructions+=3;NFSU2_TR(0x42bb3e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B42bb41:{NFSU2_TR(0x42bb41);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42bb43:{NFSU2_TR(0x42bb43);
if(r1(R+518)){{goto L42bc19;}}
}
B42bb49:L42bb49:{c.instructions+=3;NFSU2_TR(0x42bb49);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B42bb4b:{NFSU2_TR(0x42bb4b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42bb4d:{NFSU2_TR(0x42bb4d);
if(r1(R+518)){{goto L42bb65;}}
}
B42bb4f:L42bb4f:{c.instructions+=3;NFSU2_TR(0x42bb4f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bb50:{NFSU2_TR(0x42bb50);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((R+4),(U+0),4);
}
B42bb56:{NFSU2_TR(0x42bb56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42bb5bull));
TAIL_STATIC(0x41bc60u,41b);
}
B42bb5b:L42bb5b:{c.instructions+=2;NFSU2_TR(0x42bb5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42bb5f:{NFSU2_TR(0x42bb5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42bb65:L42bb65:{c.instructions+=7;NFSU2_TR(0x42bb65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42bb66:{NFSU2_TR(0x42bb66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42bb67:{NFSU2_TR(0x42bb67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42bb68:{NFSU2_TR(0x42bb68);
__builtin_memmove((R+0),(R+12),1);
}
B42bb6a:{NFSU2_TR(0x42bb6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42bb6b:{NFSU2_TR(0x42bb6b);
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
B42bb6e:{NFSU2_TR(0x42bb6e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42bb71:L42bb71:{c.instructions+=3;NFSU2_TR(0x42bb71);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42bb77:{NFSU2_TR(0x42bb77);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42bb79:{NFSU2_TR(0x42bb79);
if(r1(R+518)){{goto L42bbc9;}}
}
B42bb7b:L42bb7b:{c.instructions+=3;NFSU2_TR(0x42bb7b);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B42bb7f:{NFSU2_TR(0x42bb7f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e970ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B42bb86:{NFSU2_TR(0x42bb86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42bb8bull));
TAIL_STATIC(0x60bf80u,60b);
}
B42bb8b:L42bb8b:{c.instructions+=4;NFSU2_TR(0x42bb8b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bb8c:{NFSU2_TR(0x42bb8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42bb92:{NFSU2_TR(0x42bb92);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42bb95:{NFSU2_TR(0x42bb95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42bb9aull));
TAIL_STATIC(0x409320u,409);
}
B42bb9a:L42bb9a:{c.instructions+=4;NFSU2_TR(0x42bb9a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bb9b:{NFSU2_TR(0x42bb9b);
w4(R+4,u32(0x88f298ull));
}
B42bba0:{NFSU2_TR(0x42bba0);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42bba3:{NFSU2_TR(0x42bba3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42bba8ull));
TAIL_STATIC(0x5d5cd0u,5d5);
}
B42bba8:L42bba8:{c.instructions+=3;NFSU2_TR(0x42bba8);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42bbac:{NFSU2_TR(0x42bbac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42bbb2:{NFSU2_TR(0x42bbb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42bbb7ull));
TAIL_STATIC(0x409360u,409);
}
B42bbb7:L42bbb7:{c.instructions+=6;NFSU2_TR(0x42bbb7);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B42bbba:{NFSU2_TR(0x42bbba);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B42bbbc:{NFSU2_TR(0x42bbbc);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42bbc0:{NFSU2_TR(0x42bbc0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42bbc2:{NFSU2_TR(0x42bbc2);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42bbc5:{NFSU2_TR(0x42bbc5);
if(r1(R+518)){{goto L42bc19;}}
}
B42bbc7:L42bbc7:{c.instructions+=1;NFSU2_TR(0x42bbc7);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42bb49u);}goto L42bb49;}
}
B42bbc9:L42bbc9:{c.instructions+=4;NFSU2_TR(0x42bbc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42bbcf:{NFSU2_TR(0x42bbcf);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42bbd1:{NFSU2_TR(0x42bbd1);
__builtin_memmove((R+12),(R+518),1);
}
B42bbd4:{NFSU2_TR(0x42bbd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42bbd9ull));
TAIL_STATIC(0x6148c0u,614);
}
B42bbd9:L42bbd9:{c.instructions+=2;NFSU2_TR(0x42bbd9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42bbdb:{NFSU2_TR(0x42bbdb);
if(r1(R+518)){{goto L42bc11;}}
}
B42bbdd:L42bbdd:{c.instructions+=4;NFSU2_TR(0x42bbdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42bbe3:{NFSU2_TR(0x42bbe3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bbe4:{NFSU2_TR(0x42bbe4);
__builtin_memmove((R+4),(R+28),4);
}
B42bbe6:{NFSU2_TR(0x42bbe6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42bbebull));
TAIL_STATIC(0x60c120u,60c);
}
B42bbeb:L42bbeb:{c.instructions+=2;NFSU2_TR(0x42bbeb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42bbed:{NFSU2_TR(0x42bbed);
if(r1(R+518)){{goto L42bc11;}}
}
B42bbef:L42bbef:{c.instructions+=2;NFSU2_TR(0x42bbef);
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
B42bbf1:{NFSU2_TR(0x42bbf1);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42bb49u);}goto L42bb49;}}
}
B42bbf7:L42bbf7:{c.instructions+=3;NFSU2_TR(0x42bbf7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bbf8:{NFSU2_TR(0x42bbf8);
__builtin_memmove((R+4),(R+28),4);
}
B42bbfa:{NFSU2_TR(0x42bbfa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42bbffull));
TAIL_STATIC(0x60bff0u,60b);
}
B42bbff:L42bbff:{c.instructions+=4;NFSU2_TR(0x42bbff);
{u32 ea_=u32(u32(7887788u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42bc05:{NFSU2_TR(0x42bc05);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42bc07:{NFSU2_TR(0x42bc07);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42bc0a:{NFSU2_TR(0x42bc0a);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L42bc19;}}
}
B42bc0c:L42bc0c:{c.instructions+=1;NFSU2_TR(0x42bc0c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42bb49u);}goto L42bb49;}
}
B42bc11:L42bc11:{c.instructions+=2;NFSU2_TR(0x42bc11);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42bc13:{NFSU2_TR(0x42bc13);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42bb49u);}goto L42bb49;}}
}
B42bc19:L42bc19:{c.instructions+=3;NFSU2_TR(0x42bc19);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B42bc1e:{NFSU2_TR(0x42bc1e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42bc20:{NFSU2_TR(0x42bc20);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42bc37;}}
}
B42bc22:L42bc22:{c.instructions+=3;NFSU2_TR(0x42bc22);
__builtin_memmove((R+0),gp(0x890108),4);
}
B42bc27:{NFSU2_TR(0x42bc27);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42bc29:{NFSU2_TR(0x42bc29);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42bc37;}}
}
B42bc2b:L42bc2b:{c.instructions+=3;NFSU2_TR(0x42bc2b);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B42bc2f:{NFSU2_TR(0x42bc2f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42bc31:{NFSU2_TR(0x42bc31);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42bb49u);}goto L42bb49;}}
}
B42bc37:L42bc37:{c.instructions+=7;NFSU2_TR(0x42bc37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42bc38:{NFSU2_TR(0x42bc38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42bc39:{NFSU2_TR(0x42bc39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42bc3a:{NFSU2_TR(0x42bc3a);
w1(R+0,u8(0x1ull));
}
B42bc3c:{NFSU2_TR(0x42bc3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42bc3d:{NFSU2_TR(0x42bc3d);
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
B42bc40:{NFSU2_TR(0x42bc40);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42bc43:L42bc43:{c.instructions+=6;NFSU2_TR(0x42bc43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42bc44:{NFSU2_TR(0x42bc44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42bc45:{NFSU2_TR(0x42bc45);
w1(R+0,u8(0x1ull));
}
B42bc47:{NFSU2_TR(0x42bc47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42bc48:{NFSU2_TR(0x42bc48);
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
B42bc4b:{NFSU2_TR(0x42bc4b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42bc50:L42bc50:{c.instructions+=14;NFSU2_TR(0x42bc50);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bc51:{NFSU2_TR(0x42bc51);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bc52:{NFSU2_TR(0x42bc52);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bc53:{NFSU2_TR(0x42bc53);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bc54:{NFSU2_TR(0x42bc54);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bc55:{NFSU2_TR(0x42bc55);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B42bc59:{NFSU2_TR(0x42bc59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+12),(U+0),4);
}
B42bc5b:{NFSU2_TR(0x42bc5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42bc5e:{NFSU2_TR(0x42bc5e);
__builtin_memmove((R+24),(R+4),4);
}
B42bc60:{NFSU2_TR(0x42bc60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42bc66:{NFSU2_TR(0x42bc66);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bc67:{NFSU2_TR(0x42bc67);
__builtin_memmove((R+4),(R+28),4);
}
B42bc69:{NFSU2_TR(0x42bc69);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42bc6d:{NFSU2_TR(0x42bc6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42bc72ull));
TAIL_STATIC(0x60c0f0u,60c);
}
B42bc72:L42bc72:{c.instructions+=4;NFSU2_TR(0x42bc72);
__builtin_memmove((R+20),(R+0),4);
}
B42bc74:{NFSU2_TR(0x42bc74);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B42bc76:{NFSU2_TR(0x42bc76);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42bc7a:{NFSU2_TR(0x42bc7a);
if(r1(R+518)){{goto L42bcc5;}}
}
B42bc7c:L42bc7c:{c.instructions+=3;NFSU2_TR(0x42bc7c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bc7d:{NFSU2_TR(0x42bc7d);
__builtin_memmove((R+4),(R+28),4);
}
B42bc7f:{NFSU2_TR(0x42bc7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42bc84ull));
TAIL_STATIC(0x60bff0u,60b);
}
B42bc84:L42bc84:{c.instructions+=5;NFSU2_TR(0x42bc84);
{u32 ea_=u32(r4(R+24)+u32(532u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B42bc8a:{NFSU2_TR(0x42bc8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42bc90:{NFSU2_TR(0x42bc90);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42bc92:{NFSU2_TR(0x42bc92);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B42bc94:{NFSU2_TR(0x42bc94);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42bcb1;}}
}
B42bc96:L42bc96:{c.instructions+=5;NFSU2_TR(0x42bc96);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B42bc98:{NFSU2_TR(0x42bc98);
{u32 ea_=u32(u32(7878068u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42bc9e:{NFSU2_TR(0x42bc9e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42bca0:{NFSU2_TR(0x42bca0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42bca3:{NFSU2_TR(0x42bca3);
if(r1(R+514)){{goto L42bcd3;}}
}
B42bca5:L42bca5:{c.instructions+=2;NFSU2_TR(0x42bca5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42bcaf:{NFSU2_TR(0x42bcaf);
{goto L42bcd3;}
}
B42bcb1:L42bcb1:{c.instructions+=2;NFSU2_TR(0x42bcb1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42bcb4:{NFSU2_TR(0x42bcb4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42bcd1;}}
}
B42bcb6:L42bcb6:{c.instructions+=5;NFSU2_TR(0x42bcb6);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B42bcb8:{NFSU2_TR(0x42bcb8);
{u32 ea_=u32(u32(7878072u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42bcbe:{NFSU2_TR(0x42bcbe);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42bcc0:{NFSU2_TR(0x42bcc0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42bcc3:{NFSU2_TR(0x42bcc3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42bcd3;}}
}
B42bcc5:L42bcc5:{c.instructions+=2;NFSU2_TR(0x42bcc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42bccf:{NFSU2_TR(0x42bccf);
{goto L42bcd3;}
}
B42bcd1:L42bcd1:{c.instructions+=1;NFSU2_TR(0x42bcd1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B42bcd3:L42bcd3:{c.instructions+=3;NFSU2_TR(0x42bcd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42bcd9:{NFSU2_TR(0x42bcd9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42bcdc:{NFSU2_TR(0x42bcdc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42beb2;}}
}
B42bce2:L42bce2:{c.instructions+=3;NFSU2_TR(0x42bce2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42bce5:{NFSU2_TR(0x42bce5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B42bce8:{NFSU2_TR(0x42bce8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42bcedull));
TAIL_STATIC(0x5b5330u,5b5);
}
B42bced:L42bced:{c.instructions+=3;NFSU2_TR(0x42bced);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bcef:{NFSU2_TR(0x42bcef);
__builtin_memmove((R+4),(R+20),4);
}
B42bcf1:{NFSU2_TR(0x42bcf1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42bcf6ull));
TAIL_STATIC(0x60bfa0u,60b);
}
B42bcf6:L42bcf6:{c.instructions+=7;NFSU2_TR(0x42bcf6);
{u32 ea_=u32(r4(R+24)+u32(536u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B42bcfc:{NFSU2_TR(0x42bcfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42bcff:{NFSU2_TR(0x42bcff);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B42bd02:{NFSU2_TR(0x42bd02);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B42bd05:{NFSU2_TR(0x42bd05);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42bd09:{NFSU2_TR(0x42bd09);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B42bd0c:{NFSU2_TR(0x42bd0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42bd11ull));
TAIL_STATIC(0x5b5330u,5b5);
}
B42bd11:L42bd11:{c.instructions+=7;NFSU2_TR(0x42bd11);
__builtin_memmove((R+8),gp(0x783760),4);
}
B42bd17:{NFSU2_TR(0x42bd17);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42bd1b:{NFSU2_TR(0x42bd1b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bd1c:{NFSU2_TR(0x42bd1c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bd1d:{NFSU2_TR(0x42bd1d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bd1f:{NFSU2_TR(0x42bd1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30cull))));
__builtin_memmove((R+4),(U+0),4);
}
B42bd25:{NFSU2_TR(0x42bd25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42bd2aull));
TAIL_STATIC(0x4053b0u,405);
}
B42bd2a:L42bd2a:{c.instructions+=4;NFSU2_TR(0x42bd2a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bd2c:{NFSU2_TR(0x42bd2c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bd2d:{NFSU2_TR(0x42bd2d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x31cull))));
__builtin_memmove((R+4),(U+0),4);
}
B42bd33:{NFSU2_TR(0x42bd33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42bd38ull));
TAIL_STATIC(0x419c60u,419);
}
B42bd38:L42bd38:{c.instructions+=7;NFSU2_TR(0x42bd38);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42bd3c:{NFSU2_TR(0x42bd3c);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B42bd43:{NFSU2_TR(0x42bd43);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B42bd46:{NFSU2_TR(0x42bd46);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B42bd49:{NFSU2_TR(0x42bd49);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bd4b:{NFSU2_TR(0x42bd4b);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B42bd4f:{NFSU2_TR(0x42bd4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42bd54ull));
TAIL_STATIC(0x60bfa0u,60b);
}
B42bd54:L42bd54:{c.instructions+=6;NFSU2_TR(0x42bd54);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B42bd58:{NFSU2_TR(0x42bd58);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B42bd5a:{NFSU2_TR(0x42bd5a);
{u32 ea_=u32(u32(8293780u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42bd60:{NFSU2_TR(0x42bd60);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42bd62:{NFSU2_TR(0x42bd62);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42bd65:{NFSU2_TR(0x42bd65);
if(r1(R+514)){{goto L42bddb;}}
}
B42bd67:L42bd67:{c.instructions+=6;NFSU2_TR(0x42bd67);
{u32 ea_=u32(r4(R+12)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42bd6d:{NFSU2_TR(0x42bd6d);
{u32 ea_=u32(u32(7878500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42bd73:{NFSU2_TR(0x42bd73);
{u32 ea_=u32(u32(7878504u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B42bd79:{NFSU2_TR(0x42bd79);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42bd7b:{NFSU2_TR(0x42bd7b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42bd7e:{NFSU2_TR(0x42bd7e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42bd86;}}
}
B42bd80:L42bd80:{c.instructions+=2;NFSU2_TR(0x42bd80);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42bd84:{NFSU2_TR(0x42bd84);
{goto L42bd92;}
}
B42bd86:L42bd86:{c.instructions+=3;NFSU2_TR(0x42bd86);
__builtin_memmove((R+8),gp(0x783768),4);
}
B42bd8c:{NFSU2_TR(0x42bd8c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B42bd8e:{NFSU2_TR(0x42bd8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42bd92:L42bd92:{c.instructions+=3;NFSU2_TR(0x42bd92);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B42bd95:{NFSU2_TR(0x42bd95);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bd96:{NFSU2_TR(0x42bd96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42bd9bull));
TAIL_STATIC(0x401d40u,401);
}
B42bd9b:L42bd9b:{c.instructions+=6;NFSU2_TR(0x42bd9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42bd9f:{NFSU2_TR(0x42bd9f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bda0:{NFSU2_TR(0x42bda0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42bda3:{NFSU2_TR(0x42bda3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bda4:{NFSU2_TR(0x42bda4);
__builtin_memmove((R+4),(R+20),4);
}
B42bda6:{NFSU2_TR(0x42bda6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42bdabull));
TAIL_STATIC(0x41d160u,41d);
}
B42bdab:L42bdab:{c.instructions+=12;NFSU2_TR(0x42bdab);
{u32 ea_=u32(r4(R+28)+u32(788u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42bdb1:{NFSU2_TR(0x42bdb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42bdb7:{NFSU2_TR(0x42bdb7);
__builtin_memmove((R+8),gp(0x78375c),4);
}
B42bdbd:{NFSU2_TR(0x42bdbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B42bdc0:{NFSU2_TR(0x42bdc0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42bdc4:{NFSU2_TR(0x42bdc4);
{u32 ea_=u32(r4(R+28)+u32(784u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42bdca:{NFSU2_TR(0x42bdca);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42bdcd:{NFSU2_TR(0x42bdcd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bdce:{NFSU2_TR(0x42bdce);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bdcf:{NFSU2_TR(0x42bdcf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bdd0:{NFSU2_TR(0x42bdd0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bdd1:{NFSU2_TR(0x42bdd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42bdd6ull));
TAIL_STATIC(0x41d530u,41d);
}
B42bdd6:L42bdd6:{c.instructions+=2;NFSU2_TR(0x42bdd6);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B42bdd9:{NFSU2_TR(0x42bdd9);
{goto L42bdeb;}
}
B42bddb:L42bddb:{c.instructions+=5;NFSU2_TR(0x42bddb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bddc:{NFSU2_TR(0x42bddc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B42bddf:{NFSU2_TR(0x42bddf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bde0:{NFSU2_TR(0x42bde0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30cull))));
__builtin_memmove((R+4),(U+0),4);
}
B42bde6:{NFSU2_TR(0x42bde6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42bdebull));
TAIL_STATIC(0x420d40u,420);
}
B42bdeb:L42bdeb:{c.instructions+=4;NFSU2_TR(0x42bdeb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42bdef:{NFSU2_TR(0x42bdef);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bdf0:{NFSU2_TR(0x42bdf0);
__builtin_memmove((R+4),(R+28),4);
}
B42bdf2:{NFSU2_TR(0x42bdf2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42bdf7ull));
TAIL_STATIC(0x60bff0u,60b);
}
B42bdf7:L42bdf7:{c.instructions+=8;NFSU2_TR(0x42bdf7);
{u32 ea_=u32(r4(R+24)+u32(532u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B42bdfd:{NFSU2_TR(0x42bdfd);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B42bdff:{NFSU2_TR(0x42bdff);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B42be01:{NFSU2_TR(0x42be01);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B42be03:{NFSU2_TR(0x42be03);
{u32 ea_=u32(u32(7878508u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42be09:{NFSU2_TR(0x42be09);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42be0b:{NFSU2_TR(0x42be0b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42be0e:{NFSU2_TR(0x42be0e);
if(r1(R+514)){{goto L42be20;}}
}
B42be10:L42be10:{c.instructions+=4;NFSU2_TR(0x42be10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42be16:{NFSU2_TR(0x42be16);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B42be18:{NFSU2_TR(0x42be18);
{u32 ea_=u32(r4(R+8)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42be1e:{NFSU2_TR(0x42be1e);
{goto L42be53;}
}
B42be20:L42be20:{c.instructions+=4;NFSU2_TR(0x42be20);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42be26:{NFSU2_TR(0x42be26);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42be28:{NFSU2_TR(0x42be28);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42be2b:{NFSU2_TR(0x42be2b);
if(r1(R+514)){{goto L42be41;}}
}
B42be2d:L42be2d:{c.instructions+=4;NFSU2_TR(0x42be2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42be33:{NFSU2_TR(0x42be33);
{u32 ea_=u32(r4(R+0)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42be39:{NFSU2_TR(0x42be39);
{u32 ea_=u32(u32(7878512u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B42be3f:{NFSU2_TR(0x42be3f);
{goto L42be53;}
}
B42be41:L42be41:{c.instructions+=3;NFSU2_TR(0x42be41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42be47:{NFSU2_TR(0x42be47);
{u32 ea_=u32(r4(R+4)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42be4d:{NFSU2_TR(0x42be4d);
{u32 ea_=u32(u32(7878512u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B42be53:L42be53:{c.instructions+=6;NFSU2_TR(0x42be53);
{u32 ea_=u32(r4(R+24)+u32(496u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42be59:{NFSU2_TR(0x42be59);
{u32 ea_=u32(r4(R+24)+u32(496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42be5f:{NFSU2_TR(0x42be5f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B42be65:{NFSU2_TR(0x42be65);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42be67:{NFSU2_TR(0x42be67);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42be6a:{NFSU2_TR(0x42be6a);
if(r1(R+518)){{goto L42be74;}}
}
B42be6c:L42be6c:{c.instructions+=2;NFSU2_TR(0x42be6c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B42be6e:{NFSU2_TR(0x42be6e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42be74:L42be74:{c.instructions+=4;NFSU2_TR(0x42be74);
{u32 ea_=u32(r4(R+24)+u32(496u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B42be7a:{NFSU2_TR(0x42be7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42be7d:{NFSU2_TR(0x42be7d);
u8 U[22];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
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
B42be81:{NFSU2_TR(0x42be81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42bea7;}}
}
B42be83:L42be83:{c.instructions+=4;NFSU2_TR(0x42be83);
{u32 ea_=u32(u32(7878084u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B42be89:{NFSU2_TR(0x42be89);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42be8b:{NFSU2_TR(0x42be8b);
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
B42be8e:{NFSU2_TR(0x42be8e);
if(r1(R+518)){{goto L42be98;}}
}
B42be90:L42be90:{c.instructions+=2;NFSU2_TR(0x42be90);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B42be92:{NFSU2_TR(0x42be92);
{u32 ea_=u32(u32(7878084u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42be98:L42be98:{c.instructions+=3;NFSU2_TR(0x42be98);
{u32 ea_=u32(r4(R+24)+u32(496u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42be9e:{NFSU2_TR(0x42be9e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fcull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42bea5:{NFSU2_TR(0x42bea5);
{goto L42bed4;}
}
B42bea7:L42bea7:{c.instructions+=3;NFSU2_TR(0x42bea7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B42bea9:{NFSU2_TR(0x42bea9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fcull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42beb0:{NFSU2_TR(0x42beb0);
{goto L42bed4;}
}
B42beb2:L42beb2:{c.instructions+=2;NFSU2_TR(0x42beb2);
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
B42beb4:{NFSU2_TR(0x42beb4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42bed4;}}
}
B42beb6:L42beb6:{c.instructions+=3;NFSU2_TR(0x42beb6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42beb7:{NFSU2_TR(0x42beb7);
__builtin_memmove((R+4),(R+24),4);
}
B42beb9:{NFSU2_TR(0x42beb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42bebeull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42b340u);}goto L42b340;}
}
B42bebe:L42bebe:{c.instructions+=3;NFSU2_TR(0x42bebe);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42bec2:{NFSU2_TR(0x42bec2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42bec4:{NFSU2_TR(0x42bec4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42bec7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42bec7:L42bec7:{c.instructions+=2;NFSU2_TR(0x42bec7);
{u32 ea_=u32(r4(R+24)+u32(496u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42becd:{NFSU2_TR(0x42becd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42bed4:L42bed4:{c.instructions+=10;NFSU2_TR(0x42bed4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42bed5:{NFSU2_TR(0x42bed5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42bedf:{NFSU2_TR(0x42bedf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
w4(U+4,u32(0x40000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42bee9:{NFSU2_TR(0x42bee9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fdull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42bef0:{NFSU2_TR(0x42bef0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1feull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42bef7:{NFSU2_TR(0x42bef7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42bef8:{NFSU2_TR(0x42bef8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42bef9:{NFSU2_TR(0x42bef9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42befa:{NFSU2_TR(0x42befa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B42befb:{NFSU2_TR(0x42befb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42bf00:L42bf00:{c.instructions+=12;NFSU2_TR(0x42bf00);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bf01:{NFSU2_TR(0x42bf01);
__builtin_memmove((R+20),(R+16),4);
}
B42bf03:{NFSU2_TR(0x42bf03);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B42bf06:{NFSU2_TR(0x42bf06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1e4ull))));
}
B42bf0c:{NFSU2_TR(0x42bf0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42bf0f:{NFSU2_TR(0x42bf0f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bf10:{NFSU2_TR(0x42bf10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bf11:{NFSU2_TR(0x42bf11);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bf12:{NFSU2_TR(0x42bf12);
__builtin_memmove((R+24),(R+4),4);
}
B42bf14:{NFSU2_TR(0x42bf14);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bf15:{NFSU2_TR(0x42bf15);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B42bf19:{NFSU2_TR(0x42bf19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42bf1eull));
TAIL_STATIC(0x403fc0u,403);
}
B42bf1e:L42bf1e:{c.instructions+=3;NFSU2_TR(0x42bf1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42bf20:{NFSU2_TR(0x42bf20);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B42bf23:{NFSU2_TR(0x42bf23);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L42bf2a;}}
}
B42bf25:L42bf25:{c.instructions+=2;NFSU2_TR(0x42bf25);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B42bf28:{NFSU2_TR(0x42bf28);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L42bf3e;}}
}
B42bf2a:L42bf2a:{c.instructions+=6;NFSU2_TR(0x42bf2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42bf2d:{NFSU2_TR(0x42bf2d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bf2e:{NFSU2_TR(0x42bf2e);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B42bf32:{NFSU2_TR(0x42bf32);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bf33:{NFSU2_TR(0x42bf33);
__builtin_memmove((R+4),(R+24),4);
}
B42bf35:{NFSU2_TR(0x42bf35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42bf3aull));
TAIL_STATIC(0x420ed0u,420);
}
B42bf3a:L42bf3a:{c.instructions+=2;NFSU2_TR(0x42bf3a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42bf3c:{NFSU2_TR(0x42bf3c);
if(r1(R+518)){{goto L42bfa9;}}
}
B42bf3e:L42bf3e:{c.instructions+=5;NFSU2_TR(0x42bf3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42bf40:{NFSU2_TR(0x42bf40);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42bf48:{NFSU2_TR(0x42bf48);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42bf4b:{NFSU2_TR(0x42bf4b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+28),(U+0),4);
}
B42bf4e:{NFSU2_TR(0x42bf4e);
__builtin_memmove((R+28),(R+28),4);
}
B42bf50:L42bf50:{c.instructions+=5;NFSU2_TR(0x42bf50);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B42bf53:{NFSU2_TR(0x42bf53);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42bf55:{NFSU2_TR(0x42bf55);
__builtin_memmove((R+0),(R+12),4);
}
B42bf57:{NFSU2_TR(0x42bf57);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42bf5b:{NFSU2_TR(0x42bf5b);
if(r1(R+518)){{goto L42bf63;}}
}
B42bf5d:L42bf5d:{c.instructions+=2;NFSU2_TR(0x42bf5d);
__builtin_memmove((R+0),(R+28),4);
}
B42bf5f:{NFSU2_TR(0x42bf5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42bf63:L42bf63:{c.instructions+=9;NFSU2_TR(0x42bf63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42bf66:{NFSU2_TR(0x42bf66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42bf69:{NFSU2_TR(0x42bf69);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bf6a:{NFSU2_TR(0x42bf6a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bf6b:{NFSU2_TR(0x42bf6b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bf6c:{NFSU2_TR(0x42bf6c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B42bf70:{NFSU2_TR(0x42bf70);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bf71:{NFSU2_TR(0x42bf71);
__builtin_memmove((R+4),(R+24),4);
}
B42bf73:{NFSU2_TR(0x42bf73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42bf78ull));
TAIL_STATIC(0x428e70u,428);
}
B42bf78:L42bf78:{c.instructions+=2;NFSU2_TR(0x42bf78);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42bf7a:{NFSU2_TR(0x42bf7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42bfc3;}}
}
B42bf7c:L42bf7c:{c.instructions+=10;NFSU2_TR(0x42bf7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42bf7f:{NFSU2_TR(0x42bf7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42bf83:{NFSU2_TR(0x42bf83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42bf86:{NFSU2_TR(0x42bf86);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bf87:{NFSU2_TR(0x42bf87);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bf88:{NFSU2_TR(0x42bf88);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bf89:{NFSU2_TR(0x42bf89);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B42bf8d:{NFSU2_TR(0x42bf8d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bf8e:{NFSU2_TR(0x42bf8e);
__builtin_memmove((R+4),(R+24),4);
}
B42bf90:{NFSU2_TR(0x42bf90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42bf95ull));
TAIL_STATIC(0x428e70u,428);
}
B42bf95:L42bf95:{c.instructions+=2;NFSU2_TR(0x42bf95);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42bf97:{NFSU2_TR(0x42bf97);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42bfc3;}}
}
B42bf99:L42bf99:{c.instructions+=7;NFSU2_TR(0x42bf99);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42bf9d:{NFSU2_TR(0x42bf9d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B42bf9e:{NFSU2_TR(0x42bf9e);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B42bf9f:{NFSU2_TR(0x42bf9f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B42bfa0:{NFSU2_TR(0x42bfa0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B42bfa3:{NFSU2_TR(0x42bfa3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42bfa7:{NFSU2_TR(0x42bfa7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42bf50u);}goto L42bf50;}}
}
B42bfa9:L42bfa9:{c.instructions+=6;NFSU2_TR(0x42bfa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42bfac:{NFSU2_TR(0x42bfac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42bfaf:{NFSU2_TR(0x42bfaf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bfb0:{NFSU2_TR(0x42bfb0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bfb1:{NFSU2_TR(0x42bfb1);
__builtin_memmove((R+4),(R+24),4);
}
B42bfb3:{NFSU2_TR(0x42bfb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42bfb8ull));
TAIL_STATIC(0x420d40u,420);
}
B42bfb8:L42bfb8:{c.instructions+=7;NFSU2_TR(0x42bfb8);
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
B42bfba:{NFSU2_TR(0x42bfba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42bfbb:{NFSU2_TR(0x42bfbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42bfbc:{NFSU2_TR(0x42bfbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42bfbd:{NFSU2_TR(0x42bfbd);
__builtin_memmove((R+16),(R+20),4);
}
B42bfbf:{NFSU2_TR(0x42bfbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42bfc0:{NFSU2_TR(0x42bfc0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42bfc3:L42bfc3:{c.instructions+=5;NFSU2_TR(0x42bfc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42bfc6:{NFSU2_TR(0x42bfc6);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B42bfca:{NFSU2_TR(0x42bfca);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bfcb:{NFSU2_TR(0x42bfcb);
w1(R+12,u8(0x1ull));
}
B42bfcd:{NFSU2_TR(0x42bfcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42bfd2ull));
TAIL_STATIC(0x401d40u,401);
}
B42bfd2:L42bfd2:{c.instructions+=7;NFSU2_TR(0x42bfd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42bfd3:{NFSU2_TR(0x42bfd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42bfd4:{NFSU2_TR(0x42bfd4);
__builtin_memmove((R+0),(R+12),1);
}
B42bfd6:{NFSU2_TR(0x42bfd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42bfd7:{NFSU2_TR(0x42bfd7);
__builtin_memmove((R+16),(R+20),4);
}
B42bfd9:{NFSU2_TR(0x42bfd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42bfda:{NFSU2_TR(0x42bfda);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42bfe0:L42bfe0:{c.instructions+=8;NFSU2_TR(0x42bfe0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bfe1:{NFSU2_TR(0x42bfe1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B42bfe5:{NFSU2_TR(0x42bfe5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bfe6:{NFSU2_TR(0x42bfe6);
u8 U[4];
w4(U+0,u32(0x785bb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bfeb:{NFSU2_TR(0x42bfeb);
__builtin_memmove((R+28),(R+4),4);
}
B42bfed:{NFSU2_TR(0x42bfed);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bfef:{NFSU2_TR(0x42bfef);
__builtin_memmove((R+4),(R+24),4);
}
B42bff1:{NFSU2_TR(0x42bff1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42bff6ull));
TAIL_STATIC(0x578ce0u,578);
}
B42bff6:L42bff6:{c.instructions+=3;NFSU2_TR(0x42bff6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42bff7:{NFSU2_TR(0x42bff7);
__builtin_memmove((R+4),(R+28),4);
}
B42bff9:{NFSU2_TR(0x42bff9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42bffeull));
TAIL_STATIC(0x429a70u,429);
}
B42bffe:L42bffe:{c.instructions+=1;NFSU2_TR(0x42bffe);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x42c000u,42c);
}
XIT:NFSU2_TR_EXIT(0x42b,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
