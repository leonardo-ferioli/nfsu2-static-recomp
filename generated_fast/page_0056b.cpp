#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_479(u8* __restrict R,Cpu& c);
u32 body_480(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4ae(u8* __restrict R,Cpu& c);
u32 body_4c2(u8* __restrict R,Cpu& c);
u32 body_4de(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_50f(u8* __restrict R,Cpu& c);
u32 body_514(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_51e(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_521(u8* __restrict R,Cpu& c);
u32 body_524(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52e(u8* __restrict R,Cpu& c);
u32 body_52f(u8* __restrict R,Cpu& c);
u32 body_530(u8* __restrict R,Cpu& c);
u32 body_531(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_53a(u8* __restrict R,Cpu& c);
u32 body_53d(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_543(u8* __restrict R,Cpu& c);
u32 body_546(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_54f(u8* __restrict R,Cpu& c);
u32 body_550(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55b(u8* __restrict R,Cpu& c);
u32 body_55c(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_55f(u8* __restrict R,Cpu& c);
u32 body_560(u8* __restrict R,Cpu& c);
u32 body_565(u8* __restrict R,Cpu& c);
u32 body_567(u8* __restrict R,Cpu& c);
u32 body_568(u8* __restrict R,Cpu& c);
u32 body_56c(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x56b,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x56b,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_56b(u8* __restrict R,Cpu& c);
u32 page_56b(Cpu& c){return body_56b(c.regs.data(),c);}
__attribute__((noinline)) u32 body_56b(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x56b002:goto L56b002;
case 0x56b004:c.instructions+=1;goto B56b004;
case 0x56b006:goto L56b006;
case 0x56b00b:c.instructions+=2;goto B56b00b;
case 0x56b00d:c.instructions+=1;goto B56b00d;
case 0x56b012:goto L56b012;
case 0x56b014:c.instructions+=1;goto B56b014;
case 0x56b016:goto L56b016;
case 0x56b01b:c.instructions+=2;goto B56b01b;
case 0x56b01d:c.instructions+=1;goto B56b01d;
case 0x56b01f:goto L56b01f;
case 0x56b022:c.instructions+=3;goto B56b022;
case 0x56b023:c.instructions+=2;goto B56b023;
case 0x56b028:c.instructions+=1;goto B56b028;
case 0x56b02d:goto L56b02d;
case 0x56b02f:goto L56b02f;
case 0x56b031:goto L56b031;
case 0x56b037:c.instructions+=3;goto B56b037;
case 0x56b038:c.instructions+=2;goto B56b038;
case 0x56b03e:c.instructions+=1;goto B56b03e;
case 0x56b043:goto L56b043;
case 0x56b049:c.instructions+=2;goto B56b049;
case 0x56b04a:c.instructions+=1;goto B56b04a;
case 0x56b04f:goto L56b04f;
case 0x56b053:c.instructions+=8;goto B56b053;
case 0x56b056:c.instructions+=7;goto B56b056;
case 0x56b057:c.instructions+=6;goto B56b057;
case 0x56b059:c.instructions+=5;goto B56b059;
case 0x56b05a:c.instructions+=4;goto B56b05a;
case 0x56b05b:c.instructions+=3;goto B56b05b;
case 0x56b062:c.instructions+=2;goto B56b062;
case 0x56b065:c.instructions+=1;goto B56b065;
case 0x56b070:goto L56b070;
case 0x56b071:c.instructions+=2;goto B56b071;
case 0x56b073:c.instructions+=1;goto B56b073;
case 0x56b078:goto L56b078;
case 0x56b07d:c.instructions+=1;goto B56b07d;
case 0x56b07f:goto L56b07f;
case 0x56b080:c.instructions+=1;goto B56b080;
case 0x56b085:goto L56b085;
case 0x56b088:goto L56b088;
case 0x56b08a:c.instructions+=2;goto B56b08a;
case 0x56b08b:c.instructions+=1;goto B56b08b;
case 0x56b090:goto L56b090;
case 0x56b092:c.instructions+=15;goto B56b092;
case 0x56b097:c.instructions+=14;goto B56b097;
case 0x56b09d:c.instructions+=13;goto B56b09d;
case 0x56b09e:c.instructions+=12;goto B56b09e;
case 0x56b0a5:c.instructions+=11;goto B56b0a5;
case 0x56b0a6:c.instructions+=10;goto B56b0a6;
case 0x56b0a7:c.instructions+=9;goto B56b0a7;
case 0x56b0a8:c.instructions+=8;goto B56b0a8;
case 0x56b0aa:c.instructions+=7;goto B56b0aa;
case 0x56b0ae:c.instructions+=6;goto B56b0ae;
case 0x56b0b4:c.instructions+=5;goto B56b0b4;
case 0x56b0ba:c.instructions+=4;goto B56b0ba;
case 0x56b0c0:c.instructions+=3;goto B56b0c0;
case 0x56b0c2:c.instructions+=2;goto B56b0c2;
case 0x56b0ca:c.instructions+=1;goto B56b0ca;
case 0x56b0cc:goto L56b0cc;
case 0x56b0d0:goto L56b0d0;
case 0x56b0d2:c.instructions+=5;goto B56b0d2;
case 0x56b0d5:c.instructions+=4;goto B56b0d5;
case 0x56b0d7:c.instructions+=3;goto B56b0d7;
case 0x56b0d8:c.instructions+=2;goto B56b0d8;
case 0x56b0db:c.instructions+=1;goto B56b0db;
case 0x56b0e0:goto L56b0e0;
case 0x56b0e2:c.instructions+=3;goto B56b0e2;
case 0x56b0e5:c.instructions+=2;goto B56b0e5;
case 0x56b0e7:c.instructions+=1;goto B56b0e7;
case 0x56b0e9:goto L56b0e9;
case 0x56b0ef:c.instructions+=4;goto B56b0ef;
case 0x56b0f5:c.instructions+=3;goto B56b0f5;
case 0x56b0f7:c.instructions+=2;goto B56b0f7;
case 0x56b0fc:c.instructions+=1;goto B56b0fc;
case 0x56b0fe:goto L56b0fe;
case 0x56b100:goto L56b100;
case 0x56b102:c.instructions+=5;goto B56b102;
case 0x56b105:c.instructions+=4;goto B56b105;
case 0x56b107:c.instructions+=3;goto B56b107;
case 0x56b108:c.instructions+=2;goto B56b108;
case 0x56b10b:c.instructions+=1;goto B56b10b;
case 0x56b110:goto L56b110;
case 0x56b112:c.instructions+=3;goto B56b112;
case 0x56b115:c.instructions+=2;goto B56b115;
case 0x56b117:c.instructions+=1;goto B56b117;
case 0x56b119:goto L56b119;
case 0x56b11b:c.instructions+=2;goto B56b11b;
case 0x56b123:c.instructions+=1;goto B56b123;
case 0x56b128:goto L56b128;
case 0x56b12c:c.instructions+=5;goto B56b12c;
case 0x56b12d:c.instructions+=4;goto B56b12d;
case 0x56b12e:c.instructions+=3;goto B56b12e;
case 0x56b135:c.instructions+=2;goto B56b135;
case 0x56b138:c.instructions+=1;goto B56b138;
case 0x56b140:goto L56b140;
case 0x56b142:c.instructions+=7;goto B56b142;
case 0x56b147:c.instructions+=6;goto B56b147;
case 0x56b14d:c.instructions+=5;goto B56b14d;
case 0x56b14e:c.instructions+=4;goto B56b14e;
case 0x56b155:c.instructions+=3;goto B56b155;
case 0x56b156:c.instructions+=2;goto B56b156;
case 0x56b15b:c.instructions+=1;goto B56b15b;
case 0x56b160:goto L56b160;
case 0x56b163:c.instructions+=4;goto B56b163;
case 0x56b167:c.instructions+=3;goto B56b167;
case 0x56b169:c.instructions+=2;goto B56b169;
case 0x56b171:c.instructions+=1;goto B56b171;
case 0x56b173:goto L56b173;
case 0x56b177:c.instructions+=3;goto B56b177;
case 0x56b178:c.instructions+=2;goto B56b178;
case 0x56b17a:c.instructions+=1;goto B56b17a;
case 0x56b17f:goto L56b17f;
case 0x56b183:c.instructions+=3;goto B56b183;
case 0x56b18a:c.instructions+=2;goto B56b18a;
case 0x56b18d:c.instructions+=1;goto B56b18d;
case 0x56b18e:goto L56b18e;
case 0x56b192:c.instructions+=4;goto B56b192;
case 0x56b194:c.instructions+=3;goto B56b194;
case 0x56b19b:c.instructions+=2;goto B56b19b;
case 0x56b19e:c.instructions+=1;goto B56b19e;
case 0x56b1a0:goto L56b1a0;
case 0x56b1a1:c.instructions+=2;goto B56b1a1;
case 0x56b1a3:c.instructions+=1;goto B56b1a3;
case 0x56b1a8:goto L56b1a8;
case 0x56b1ad:c.instructions+=1;goto B56b1ad;
case 0x56b1af:goto L56b1af;
case 0x56b1b0:c.instructions+=1;goto B56b1b0;
case 0x56b1b5:goto L56b1b5;
case 0x56b1b8:goto L56b1b8;
case 0x56b1ba:c.instructions+=2;goto B56b1ba;
case 0x56b1bb:c.instructions+=1;goto B56b1bb;
case 0x56b1c0:goto L56b1c0;
case 0x56b1c4:c.instructions+=4;goto B56b1c4;
case 0x56b1c9:c.instructions+=3;goto B56b1c9;
case 0x56b1ca:c.instructions+=2;goto B56b1ca;
case 0x56b1cc:c.instructions+=1;goto B56b1cc;
case 0x56b1d2:goto L56b1d2;
case 0x56b1d8:goto L56b1d8;
case 0x56b1dd:c.instructions+=1;goto B56b1dd;
case 0x56b1df:goto L56b1df;
case 0x56b1e5:goto L56b1e5;
case 0x56b1ea:c.instructions+=1;goto B56b1ea;
case 0x56b1ec:goto L56b1ec;
case 0x56b1f1:c.instructions+=1;goto B56b1f1;
case 0x56b1f3:goto L56b1f3;
case 0x56b1f8:c.instructions+=1;goto B56b1f8;
case 0x56b1fe:goto L56b1fe;
case 0x56b201:c.instructions+=4;goto B56b201;
case 0x56b204:c.instructions+=3;goto B56b204;
case 0x56b205:c.instructions+=2;goto B56b205;
case 0x56b20b:c.instructions+=1;goto B56b20b;
case 0x56b210:goto L56b210;
case 0x56b213:c.instructions+=5;goto B56b213;
case 0x56b216:c.instructions+=4;goto B56b216;
case 0x56b217:c.instructions+=3;goto B56b217;
case 0x56b219:c.instructions+=2;goto B56b219;
case 0x56b21a:c.instructions+=1;goto B56b21a;
case 0x56b21f:goto L56b21f;
case 0x56b222:c.instructions+=2;goto B56b222;
case 0x56b223:c.instructions+=1;goto B56b223;
case 0x56b226:goto L56b226;
case 0x56b229:c.instructions+=1;goto B56b229;
case 0x56b22e:goto L56b22e;
case 0x56b22f:c.instructions+=1;goto B56b22f;
case 0x56b232:goto L56b232;
case 0x56b237:c.instructions+=1;goto B56b237;
case 0x56b239:goto L56b239;
case 0x56b23e:c.instructions+=1;goto B56b23e;
case 0x56b244:goto L56b244;
case 0x56b24a:c.instructions+=1;goto B56b24a;
case 0x56b24f:goto L56b24f;
case 0x56b252:c.instructions+=5;goto B56b252;
case 0x56b255:c.instructions+=4;goto B56b255;
case 0x56b256:c.instructions+=3;goto B56b256;
case 0x56b258:c.instructions+=2;goto B56b258;
case 0x56b259:c.instructions+=1;goto B56b259;
case 0x56b25e:goto L56b25e;
case 0x56b261:c.instructions+=4;goto B56b261;
case 0x56b263:c.instructions+=3;goto B56b263;
case 0x56b268:c.instructions+=2;goto B56b268;
case 0x56b269:c.instructions+=1;goto B56b269;
case 0x56b26e:goto L56b26e;
case 0x56b274:c.instructions+=3;goto B56b274;
case 0x56b277:c.instructions+=2;goto B56b277;
case 0x56b279:c.instructions+=1;goto B56b279;
case 0x56b27e:goto L56b27e;
case 0x56b27f:c.instructions+=1;goto B56b27f;
case 0x56b282:goto L56b282;
case 0x56b288:c.instructions+=4;goto B56b288;
case 0x56b28a:c.instructions+=3;goto B56b28a;
case 0x56b28b:c.instructions+=2;goto B56b28b;
case 0x56b28d:c.instructions+=1;goto B56b28d;
case 0x56b28f:goto L56b28f;
case 0x56b294:goto L56b294;
case 0x56b295:c.instructions+=1;goto B56b295;
case 0x56b298:goto L56b298;
case 0x56b29d:goto L56b29d;
case 0x56b29e:c.instructions+=1;goto B56b29e;
case 0x56b2a1:goto L56b2a1;
case 0x56b2a6:c.instructions+=1;goto B56b2a6;
case 0x56b2a8:goto L56b2a8;
case 0x56b2aa:goto L56b2aa;
case 0x56b2af:c.instructions+=1;goto B56b2af;
case 0x56b2b1:goto L56b2b1;
case 0x56b2b6:c.instructions+=1;goto B56b2b6;
case 0x56b2b8:goto L56b2b8;
case 0x56b2bd:c.instructions+=1;goto B56b2bd;
case 0x56b2c3:goto L56b2c3;
case 0x56b2c4:c.instructions+=2;goto B56b2c4;
case 0x56b2c6:c.instructions+=1;goto B56b2c6;
case 0x56b2cb:goto L56b2cb;
case 0x56b2cc:c.instructions+=1;goto B56b2cc;
case 0x56b2cf:goto L56b2cf;
case 0x56b2d1:c.instructions+=1;goto B56b2d1;
case 0x56b2d6:goto L56b2d6;
case 0x56b2d7:c.instructions+=1;goto B56b2d7;
case 0x56b2da:goto L56b2da;
case 0x56b2e0:c.instructions+=3;goto B56b2e0;
case 0x56b2e2:c.instructions+=2;goto B56b2e2;
case 0x56b2e4:c.instructions+=1;goto B56b2e4;
case 0x56b2e6:goto L56b2e6;
case 0x56b2eb:goto L56b2eb;
case 0x56b2ed:goto L56b2ed;
case 0x56b2ef:c.instructions+=1;goto B56b2ef;
case 0x56b2f4:goto L56b2f4;
case 0x56b2f7:c.instructions+=3;goto B56b2f7;
case 0x56b2fe:c.instructions+=2;goto B56b2fe;
case 0x56b301:c.instructions+=1;goto B56b301;
case 0x56b303:goto L56b303;
case 0x56b309:c.instructions+=2;goto B56b309;
case 0x56b30a:c.instructions+=1;goto B56b30a;
case 0x56b30f:goto L56b30f;
case 0x56b310:c.instructions+=1;goto B56b310;
case 0x56b313:goto L56b313;
case 0x56b318:c.instructions+=1;goto B56b318;
case 0x56b31a:goto L56b31a;
case 0x56b31f:c.instructions+=1;goto B56b31f;
case 0x56b321:goto L56b321;
case 0x56b322:c.instructions+=2;goto B56b322;
case 0x56b324:c.instructions+=1;goto B56b324;
case 0x56b329:goto L56b329;
case 0x56b32a:c.instructions+=1;goto B56b32a;
case 0x56b32d:goto L56b32d;
case 0x56b330:c.instructions+=2;goto B56b330;
case 0x56b332:c.instructions+=1;goto B56b332;
case 0x56b334:goto L56b334;
case 0x56b337:c.instructions+=3;goto B56b337;
case 0x56b33c:c.instructions+=2;goto B56b33c;
case 0x56b33d:c.instructions+=1;goto B56b33d;
case 0x56b342:goto L56b342;
case 0x56b344:c.instructions+=1;goto B56b344;
case 0x56b349:goto L56b349;
case 0x56b34a:c.instructions+=1;goto B56b34a;
case 0x56b350:goto L56b350;
case 0x56b352:c.instructions+=7;goto B56b352;
case 0x56b357:c.instructions+=6;goto B56b357;
case 0x56b35d:c.instructions+=5;goto B56b35d;
case 0x56b35e:c.instructions+=4;goto B56b35e;
case 0x56b365:c.instructions+=3;goto B56b365;
case 0x56b366:c.instructions+=2;goto B56b366;
case 0x56b36b:c.instructions+=1;goto B56b36b;
case 0x56b370:goto L56b370;
case 0x56b373:c.instructions+=4;goto B56b373;
case 0x56b377:c.instructions+=3;goto B56b377;
case 0x56b379:c.instructions+=2;goto B56b379;
case 0x56b381:c.instructions+=1;goto B56b381;
case 0x56b383:goto L56b383;
case 0x56b387:c.instructions+=3;goto B56b387;
case 0x56b388:c.instructions+=2;goto B56b388;
case 0x56b38a:c.instructions+=1;goto B56b38a;
case 0x56b38f:goto L56b38f;
case 0x56b393:c.instructions+=3;goto B56b393;
case 0x56b39a:c.instructions+=2;goto B56b39a;
case 0x56b39d:c.instructions+=1;goto B56b39d;
case 0x56b39e:goto L56b39e;
case 0x56b3a2:c.instructions+=4;goto B56b3a2;
case 0x56b3a4:c.instructions+=3;goto B56b3a4;
case 0x56b3ab:c.instructions+=2;goto B56b3ab;
case 0x56b3ae:c.instructions+=1;goto B56b3ae;
case 0x56b3b0:goto L56b3b0;
case 0x56b3b1:c.instructions+=7;goto B56b3b1;
case 0x56b3b3:c.instructions+=6;goto B56b3b3;
case 0x56b3b4:c.instructions+=5;goto B56b3b4;
case 0x56b3b5:c.instructions+=4;goto B56b3b5;
case 0x56b3b8:c.instructions+=3;goto B56b3b8;
case 0x56b3be:c.instructions+=2;goto B56b3be;
case 0x56b3c0:c.instructions+=1;goto B56b3c0;
case 0x56b3c2:goto L56b3c2;
case 0x56b3c9:c.instructions+=2;goto B56b3c9;
case 0x56b3d0:c.instructions+=1;goto B56b3d0;
case 0x56b3d2:goto L56b3d2;
case 0x56b3d8:c.instructions+=1;goto B56b3d8;
case 0x56b3da:goto L56b3da;
case 0x56b3e0:c.instructions+=1;goto B56b3e0;
case 0x56b3e2:goto L56b3e2;
case 0x56b3e5:c.instructions+=5;goto B56b3e5;
case 0x56b3e6:c.instructions+=4;goto B56b3e6;
case 0x56b3e9:c.instructions+=3;goto B56b3e9;
case 0x56b3ee:c.instructions+=2;goto B56b3ee;
case 0x56b3f4:c.instructions+=1;goto B56b3f4;
case 0x56b3f9:goto L56b3f9;
case 0x56b3fa:c.instructions+=4;goto B56b3fa;
case 0x56b3ff:c.instructions+=3;goto B56b3ff;
case 0x56b404:c.instructions+=2;goto B56b404;
case 0x56b405:c.instructions+=1;goto B56b405;
case 0x56b40a:goto L56b40a;
case 0x56b40d:c.instructions+=1;goto B56b40d;
case 0x56b40e:goto L56b40e;
case 0x56b414:c.instructions+=2;goto B56b414;
case 0x56b416:c.instructions+=1;goto B56b416;
case 0x56b418:goto L56b418;
case 0x56b41b:c.instructions+=8;goto B56b41b;
case 0x56b41e:c.instructions+=7;goto B56b41e;
case 0x56b421:c.instructions+=6;goto B56b421;
case 0x56b422:c.instructions+=5;goto B56b422;
case 0x56b423:c.instructions+=4;goto B56b423;
case 0x56b424:c.instructions+=3;goto B56b424;
case 0x56b425:c.instructions+=2;goto B56b425;
case 0x56b427:c.instructions+=1;goto B56b427;
case 0x56b42c:goto L56b42c;
case 0x56b432:c.instructions+=1;goto B56b432;
case 0x56b438:goto L56b438;
case 0x56b43e:goto L56b43e;
case 0x56b444:c.instructions+=1;goto B56b444;
case 0x56b44a:goto L56b44a;
case 0x56b450:goto L56b450;
case 0x56b456:c.instructions+=1;goto B56b456;
case 0x56b458:goto L56b458;
case 0x56b45e:c.instructions+=1;goto B56b45e;
case 0x56b460:goto L56b460;
case 0x56b466:c.instructions+=1;goto B56b466;
case 0x56b46c:goto L56b46c;
case 0x56b472:c.instructions+=2;goto B56b472;
case 0x56b474:c.instructions+=1;goto B56b474;
case 0x56b47a:goto L56b47a;
case 0x56b47b:c.instructions+=4;goto B56b47b;
case 0x56b47f:c.instructions+=3;goto B56b47f;
case 0x56b480:c.instructions+=2;goto B56b480;
case 0x56b481:c.instructions+=1;goto B56b481;
case 0x56b484:goto L56b484;
case 0x56b489:goto L56b489;
case 0x56b48b:c.instructions+=1;goto B56b48b;
case 0x56b490:goto L56b490;
case 0x56b491:c.instructions+=3;goto B56b491;
case 0x56b492:c.instructions+=2;goto B56b492;
case 0x56b493:c.instructions+=1;goto B56b493;
case 0x56b496:goto L56b496;
case 0x56b49c:c.instructions+=2;goto B56b49c;
case 0x56b49e:c.instructions+=1;goto B56b49e;
case 0x56b4a0:goto L56b4a0;
case 0x56b4a6:c.instructions+=2;goto B56b4a6;
case 0x56b4a7:c.instructions+=1;goto B56b4a7;
case 0x56b4ac:goto L56b4ac;
case 0x56b4af:c.instructions+=2;goto B56b4af;
case 0x56b4b1:c.instructions+=1;goto B56b4b1;
case 0x56b4b7:goto L56b4b7;
case 0x56b4bd:c.instructions+=3;goto B56b4bd;
case 0x56b4be:c.instructions+=2;goto B56b4be;
case 0x56b4c3:c.instructions+=1;goto B56b4c3;
case 0x56b4c8:goto L56b4c8;
case 0x56b4cb:c.instructions+=4;goto B56b4cb;
case 0x56b4cc:c.instructions+=3;goto B56b4cc;
case 0x56b4cd:c.instructions+=2;goto B56b4cd;
case 0x56b4ce:c.instructions+=1;goto B56b4ce;
case 0x56b4d1:goto L56b4d1;
case 0x56b4d7:c.instructions+=2;goto B56b4d7;
case 0x56b4d9:c.instructions+=1;goto B56b4d9;
case 0x56b4df:goto L56b4df;
case 0x56b4e5:c.instructions+=2;goto B56b4e5;
case 0x56b4e7:c.instructions+=1;goto B56b4e7;
case 0x56b4ed:goto L56b4ed;
case 0x56b4f0:c.instructions+=4;goto B56b4f0;
case 0x56b4f5:c.instructions+=3;goto B56b4f5;
case 0x56b4fa:c.instructions+=2;goto B56b4fa;
case 0x56b4fb:c.instructions+=1;goto B56b4fb;
case 0x56b500:goto L56b500;
case 0x56b503:c.instructions+=2;goto B56b503;
case 0x56b505:c.instructions+=1;goto B56b505;
case 0x56b50b:goto L56b50b;
case 0x56b50e:c.instructions+=4;goto B56b50e;
case 0x56b513:c.instructions+=3;goto B56b513;
case 0x56b518:c.instructions+=2;goto B56b518;
case 0x56b519:c.instructions+=1;goto B56b519;
case 0x56b51e:goto L56b51e;
case 0x56b521:c.instructions+=2;goto B56b521;
case 0x56b523:c.instructions+=1;goto B56b523;
case 0x56b529:goto L56b529;
case 0x56b52c:c.instructions+=3;goto B56b52c;
case 0x56b52f:c.instructions+=2;goto B56b52f;
case 0x56b531:c.instructions+=1;goto B56b531;
case 0x56b537:goto L56b537;
case 0x56b539:c.instructions+=2;goto B56b539;
case 0x56b53e:c.instructions+=1;goto B56b53e;
case 0x56b543:goto L56b543;
case 0x56b546:c.instructions+=2;goto B56b546;
case 0x56b54d:c.instructions+=1;goto B56b54d;
case 0x56b54f:goto L56b54f;
case 0x56b551:c.instructions+=1;goto B56b551;
case 0x56b553:goto L56b553;
case 0x56b557:c.instructions+=1;goto B56b557;
case 0x56b559:goto L56b559;
case 0x56b55e:goto L56b55e;
case 0x56b561:c.instructions+=4;goto B56b561;
case 0x56b566:c.instructions+=3;goto B56b566;
case 0x56b56b:c.instructions+=2;goto B56b56b;
case 0x56b56c:c.instructions+=1;goto B56b56c;
case 0x56b571:goto L56b571;
case 0x56b574:c.instructions+=5;goto B56b574;
case 0x56b575:c.instructions+=4;goto B56b575;
case 0x56b57f:c.instructions+=3;goto B56b57f;
case 0x56b580:c.instructions+=2;goto B56b580;
case 0x56b581:c.instructions+=1;goto B56b581;
case 0x56b584:goto L56b584;
case 0x56b587:c.instructions+=2;goto B56b587;
case 0x56b589:c.instructions+=1;goto B56b589;
case 0x56b58b:goto L56b58b;
case 0x56b58d:c.instructions+=1;goto B56b58d;
case 0x56b592:goto L56b592;
case 0x56b594:c.instructions+=1;goto B56b594;
case 0x56b596:goto L56b596;
case 0x56b598:c.instructions+=1;goto B56b598;
case 0x56b59d:goto L56b59d;
case 0x56b59f:c.instructions+=1;goto B56b59f;
case 0x56b5a1:goto L56b5a1;
case 0x56b5a6:goto L56b5a6;
case 0x56b5a9:c.instructions+=10;goto B56b5a9;
case 0x56b5ae:c.instructions+=9;goto B56b5ae;
case 0x56b5b0:c.instructions+=8;goto B56b5b0;
case 0x56b5b5:c.instructions+=7;goto B56b5b5;
case 0x56b5ba:c.instructions+=6;goto B56b5ba;
case 0x56b5bf:c.instructions+=5;goto B56b5bf;
case 0x56b5c4:c.instructions+=4;goto B56b5c4;
case 0x56b5c9:c.instructions+=3;goto B56b5c9;
case 0x56b5ce:c.instructions+=2;goto B56b5ce;
case 0x56b5cf:c.instructions+=1;goto B56b5cf;
case 0x56b5d4:goto L56b5d4;
case 0x56b5d7:c.instructions+=3;goto B56b5d7;
case 0x56b5d9:c.instructions+=2;goto B56b5d9;
case 0x56b5e3:c.instructions+=1;goto B56b5e3;
case 0x56b5e8:goto L56b5e8;
case 0x56b5e9:c.instructions+=3;goto B56b5e9;
case 0x56b5ea:c.instructions+=2;goto B56b5ea;
case 0x56b5eb:c.instructions+=1;goto B56b5eb;
case 0x56b5ee:goto L56b5ee;
case 0x56b5f0:c.instructions+=1;goto B56b5f0;
case 0x56b5f5:goto L56b5f5;
case 0x56b5fa:c.instructions+=2;goto B56b5fa;
case 0x56b5fc:c.instructions+=1;goto B56b5fc;
case 0x56b601:goto L56b601;
case 0x56b602:c.instructions+=3;goto B56b602;
case 0x56b603:c.instructions+=2;goto B56b603;
case 0x56b604:c.instructions+=1;goto B56b604;
case 0x56b607:goto L56b607;
case 0x56b60d:c.instructions+=2;goto B56b60d;
case 0x56b60f:c.instructions+=1;goto B56b60f;
case 0x56b611:goto L56b611;
case 0x56b614:c.instructions+=3;goto B56b614;
case 0x56b616:c.instructions+=2;goto B56b616;
case 0x56b617:c.instructions+=1;goto B56b617;
case 0x56b61c:goto L56b61c;
case 0x56b61f:goto L56b61f;
case 0x56b624:c.instructions+=2;goto B56b624;
case 0x56b626:c.instructions+=1;goto B56b626;
case 0x56b62b:goto L56b62b;
case 0x56b62c:c.instructions+=3;goto B56b62c;
case 0x56b62d:c.instructions+=2;goto B56b62d;
case 0x56b62e:c.instructions+=1;goto B56b62e;
case 0x56b631:goto L56b631;
case 0x56b633:c.instructions+=2;goto B56b633;
case 0x56b638:c.instructions+=1;goto B56b638;
case 0x56b63d:goto L56b63d;
case 0x56b641:c.instructions+=2;goto B56b641;
case 0x56b648:c.instructions+=1;goto B56b648;
case 0x56b64d:goto L56b64d;
case 0x56b64e:c.instructions+=3;goto B56b64e;
case 0x56b64f:c.instructions+=2;goto B56b64f;
case 0x56b650:c.instructions+=1;goto B56b650;
case 0x56b653:goto L56b653;
case 0x56b659:c.instructions+=1;goto B56b659;
case 0x56b65b:goto L56b65b;
case 0x56b661:c.instructions+=1;goto B56b661;
case 0x56b667:goto L56b667;
case 0x56b66d:c.instructions+=2;goto B56b66d;
case 0x56b66f:c.instructions+=1;goto B56b66f;
case 0x56b675:goto L56b675;
case 0x56b67b:c.instructions+=2;goto B56b67b;
case 0x56b67d:c.instructions+=1;goto B56b67d;
case 0x56b683:goto L56b683;
case 0x56b686:c.instructions+=4;goto B56b686;
case 0x56b68b:c.instructions+=3;goto B56b68b;
case 0x56b690:c.instructions+=2;goto B56b690;
case 0x56b691:c.instructions+=1;goto B56b691;
case 0x56b696:goto L56b696;
case 0x56b699:c.instructions+=2;goto B56b699;
case 0x56b69b:c.instructions+=1;goto B56b69b;
case 0x56b6a1:goto L56b6a1;
case 0x56b6a4:c.instructions+=4;goto B56b6a4;
case 0x56b6a9:c.instructions+=3;goto B56b6a9;
case 0x56b6ae:c.instructions+=2;goto B56b6ae;
case 0x56b6af:c.instructions+=1;goto B56b6af;
case 0x56b6b4:goto L56b6b4;
case 0x56b6b7:c.instructions+=2;goto B56b6b7;
case 0x56b6b9:c.instructions+=1;goto B56b6b9;
case 0x56b6bf:goto L56b6bf;
case 0x56b6c0:c.instructions+=2;goto B56b6c0;
case 0x56b6c2:c.instructions+=1;goto B56b6c2;
case 0x56b6c7:goto L56b6c7;
case 0x56b6c8:c.instructions+=3;goto B56b6c8;
case 0x56b6c9:c.instructions+=2;goto B56b6c9;
case 0x56b6ca:c.instructions+=1;goto B56b6ca;
case 0x56b6cd:goto L56b6cd;
case 0x56b6ce:c.instructions+=4;goto B56b6ce;
case 0x56b6d5:c.instructions+=3;goto B56b6d5;
case 0x56b6d6:c.instructions+=2;goto B56b6d6;
case 0x56b6d7:c.instructions+=1;goto B56b6d7;
case 0x56b6da:goto L56b6da;
case 0x56b6e0:c.instructions+=1;goto B56b6e0;
case 0x56b6e6:goto L56b6e6;
case 0x56b6ec:goto L56b6ec;
case 0x56b6f2:c.instructions+=1;goto B56b6f2;
case 0x56b6f8:goto L56b6f8;
case 0x56b6fe:c.instructions+=1;goto B56b6fe;
case 0x56b704:goto L56b704;
case 0x56b70a:c.instructions+=1;goto B56b70a;
case 0x56b710:goto L56b710;
case 0x56b716:c.instructions+=2;goto B56b716;
case 0x56b718:c.instructions+=1;goto B56b718;
case 0x56b71a:goto L56b71a;
case 0x56b720:c.instructions+=3;goto B56b720;
case 0x56b721:c.instructions+=2;goto B56b721;
case 0x56b722:c.instructions+=1;goto B56b722;
case 0x56b727:goto L56b727;
case 0x56b72a:c.instructions+=4;goto B56b72a;
case 0x56b72b:c.instructions+=3;goto B56b72b;
case 0x56b72c:c.instructions+=2;goto B56b72c;
case 0x56b72d:c.instructions+=1;goto B56b72d;
case 0x56b730:goto L56b730;
case 0x56b736:c.instructions+=2;goto B56b736;
case 0x56b738:c.instructions+=1;goto B56b738;
case 0x56b73e:goto L56b73e;
case 0x56b744:c.instructions+=2;goto B56b744;
case 0x56b746:c.instructions+=1;goto B56b746;
case 0x56b74c:goto L56b74c;
case 0x56b74f:c.instructions+=3;goto B56b74f;
case 0x56b752:c.instructions+=2;goto B56b752;
case 0x56b754:c.instructions+=1;goto B56b754;
case 0x56b75a:goto L56b75a;
case 0x56b75f:goto L56b75f;
case 0x56b762:c.instructions+=10;goto B56b762;
case 0x56b767:c.instructions+=9;goto B56b767;
case 0x56b769:c.instructions+=8;goto B56b769;
case 0x56b76e:c.instructions+=7;goto B56b76e;
case 0x56b773:c.instructions+=6;goto B56b773;
case 0x56b778:c.instructions+=5;goto B56b778;
case 0x56b77d:c.instructions+=4;goto B56b77d;
case 0x56b782:c.instructions+=3;goto B56b782;
case 0x56b787:c.instructions+=2;goto B56b787;
case 0x56b788:c.instructions+=1;goto B56b788;
case 0x56b78d:goto L56b78d;
case 0x56b790:c.instructions+=3;goto B56b790;
case 0x56b792:c.instructions+=2;goto B56b792;
case 0x56b79c:c.instructions+=1;goto B56b79c;
case 0x56b7a1:goto L56b7a1;
case 0x56b7a2:c.instructions+=3;goto B56b7a2;
case 0x56b7a3:c.instructions+=2;goto B56b7a3;
case 0x56b7a4:c.instructions+=1;goto B56b7a4;
case 0x56b7a7:goto L56b7a7;
case 0x56b7ad:c.instructions+=3;goto B56b7ad;
case 0x56b7af:c.instructions+=2;goto B56b7af;
case 0x56b7b9:c.instructions+=1;goto B56b7b9;
case 0x56b7bb:goto L56b7bb;
case 0x56b7be:c.instructions+=4;goto B56b7be;
case 0x56b7c3:c.instructions+=3;goto B56b7c3;
case 0x56b7c4:c.instructions+=2;goto B56b7c4;
case 0x56b7cb:c.instructions+=1;goto B56b7cb;
case 0x56b7d0:goto L56b7d0;
case 0x56b7d3:c.instructions+=4;goto B56b7d3;
case 0x56b7d7:c.instructions+=3;goto B56b7d7;
case 0x56b7dd:c.instructions+=2;goto B56b7dd;
case 0x56b7df:c.instructions+=1;goto B56b7df;
case 0x56b7e4:goto L56b7e4;
case 0x56b7e7:c.instructions+=5;goto B56b7e7;
case 0x56b7ea:c.instructions+=4;goto B56b7ea;
case 0x56b7f0:c.instructions+=3;goto B56b7f0;
case 0x56b7f1:c.instructions+=2;goto B56b7f1;
case 0x56b7f2:c.instructions+=1;goto B56b7f2;
case 0x56b7f7:goto L56b7f7;
case 0x56b7f8:c.instructions+=3;goto B56b7f8;
case 0x56b7f9:c.instructions+=2;goto B56b7f9;
case 0x56b7fa:c.instructions+=1;goto B56b7fa;
case 0x56b7fd:goto L56b7fd;
case 0x56b803:c.instructions+=2;goto B56b803;
case 0x56b804:c.instructions+=1;goto B56b804;
case 0x56b809:goto L56b809;
case 0x56b80c:c.instructions+=2;goto B56b80c;
case 0x56b80e:c.instructions+=1;goto B56b80e;
case 0x56b810:goto L56b810;
case 0x56b815:c.instructions+=4;goto B56b815;
case 0x56b818:c.instructions+=3;goto B56b818;
case 0x56b81b:c.instructions+=2;goto B56b81b;
case 0x56b81e:c.instructions+=1;goto B56b81e;
case 0x56b821:goto L56b821;
case 0x56b823:c.instructions+=1;goto B56b823;
case 0x56b828:goto L56b828;
case 0x56b82e:c.instructions+=8;goto B56b82e;
case 0x56b830:c.instructions+=7;goto B56b830;
case 0x56b833:c.instructions+=6;goto B56b833;
case 0x56b83a:c.instructions+=5;goto B56b83a;
case 0x56b83d:c.instructions+=4;goto B56b83d;
case 0x56b840:c.instructions+=3;goto B56b840;
case 0x56b846:c.instructions+=2;goto B56b846;
case 0x56b849:c.instructions+=1;goto B56b849;
case 0x56b84e:goto L56b84e;
case 0x56b851:c.instructions+=5;goto B56b851;
case 0x56b853:c.instructions+=4;goto B56b853;
case 0x56b858:c.instructions+=3;goto B56b858;
case 0x56b85d:c.instructions+=2;goto B56b85d;
case 0x56b85e:c.instructions+=1;goto B56b85e;
case 0x56b863:goto L56b863;
case 0x56b866:c.instructions+=6;goto B56b866;
case 0x56b86d:c.instructions+=5;goto B56b86d;
case 0x56b86e:c.instructions+=4;goto B56b86e;
case 0x56b878:c.instructions+=3;goto B56b878;
case 0x56b879:c.instructions+=2;goto B56b879;
case 0x56b87a:c.instructions+=1;goto B56b87a;
case 0x56b87d:goto L56b87d;
case 0x56b883:c.instructions+=1;goto B56b883;
case 0x56b885:goto L56b885;
case 0x56b88b:c.instructions+=1;goto B56b88b;
case 0x56b88d:goto L56b88d;
case 0x56b892:goto L56b892;
case 0x56b894:c.instructions+=1;goto B56b894;
case 0x56b899:goto L56b899;
case 0x56b89b:c.instructions+=1;goto B56b89b;
case 0x56b8a0:goto L56b8a0;
case 0x56b8a1:c.instructions+=3;goto B56b8a1;
case 0x56b8a2:c.instructions+=2;goto B56b8a2;
case 0x56b8a3:c.instructions+=1;goto B56b8a3;
case 0x56b8a6:goto L56b8a6;
case 0x56b8ac:c.instructions+=2;goto B56b8ac;
case 0x56b8ae:c.instructions+=1;goto B56b8ae;
case 0x56b8b0:goto L56b8b0;
case 0x56b8b5:goto L56b8b5;
case 0x56b8b7:c.instructions+=1;goto B56b8b7;
case 0x56b8bc:goto L56b8bc;
case 0x56b8be:c.instructions+=2;goto B56b8be;
case 0x56b8c0:c.instructions+=1;goto B56b8c0;
case 0x56b8c5:goto L56b8c5;
case 0x56b8c8:c.instructions+=4;goto B56b8c8;
case 0x56b8c9:c.instructions+=3;goto B56b8c9;
case 0x56b8ca:c.instructions+=2;goto B56b8ca;
case 0x56b8cb:c.instructions+=1;goto B56b8cb;
case 0x56b8ce:goto L56b8ce;
case 0x56b8d0:c.instructions+=3;goto B56b8d0;
case 0x56b8d2:c.instructions+=2;goto B56b8d2;
case 0x56b8d9:c.instructions+=1;goto B56b8d9;
case 0x56b8dc:goto L56b8dc;
case 0x56b8df:c.instructions+=5;goto B56b8df;
case 0x56b8e1:c.instructions+=4;goto B56b8e1;
case 0x56b8e6:c.instructions+=3;goto B56b8e6;
case 0x56b8eb:c.instructions+=2;goto B56b8eb;
case 0x56b8ec:c.instructions+=1;goto B56b8ec;
case 0x56b8f1:goto L56b8f1;
case 0x56b8f4:goto L56b8f4;
case 0x56b8f5:c.instructions+=3;goto B56b8f5;
case 0x56b8f6:c.instructions+=2;goto B56b8f6;
case 0x56b8f7:c.instructions+=1;goto B56b8f7;
case 0x56b900:goto L56b900;
case 0x56b902:c.instructions+=7;goto B56b902;
case 0x56b907:c.instructions+=6;goto B56b907;
case 0x56b90d:c.instructions+=5;goto B56b90d;
case 0x56b90e:c.instructions+=4;goto B56b90e;
case 0x56b915:c.instructions+=3;goto B56b915;
case 0x56b916:c.instructions+=2;goto B56b916;
case 0x56b91b:c.instructions+=1;goto B56b91b;
case 0x56b920:goto L56b920;
case 0x56b923:c.instructions+=4;goto B56b923;
case 0x56b927:c.instructions+=3;goto B56b927;
case 0x56b929:c.instructions+=2;goto B56b929;
case 0x56b931:c.instructions+=1;goto B56b931;
case 0x56b933:goto L56b933;
case 0x56b937:c.instructions+=3;goto B56b937;
case 0x56b938:c.instructions+=2;goto B56b938;
case 0x56b93a:c.instructions+=1;goto B56b93a;
case 0x56b93f:goto L56b93f;
case 0x56b943:c.instructions+=3;goto B56b943;
case 0x56b94a:c.instructions+=2;goto B56b94a;
case 0x56b94d:c.instructions+=1;goto B56b94d;
case 0x56b94e:goto L56b94e;
case 0x56b952:c.instructions+=4;goto B56b952;
case 0x56b954:c.instructions+=3;goto B56b954;
case 0x56b95b:c.instructions+=2;goto B56b95b;
case 0x56b95e:c.instructions+=1;goto B56b95e;
case 0x56b960:goto L56b960;
case 0x56b961:c.instructions+=8;goto B56b961;
case 0x56b963:c.instructions+=7;goto B56b963;
case 0x56b966:c.instructions+=6;goto B56b966;
case 0x56b96b:c.instructions+=5;goto B56b96b;
case 0x56b96c:c.instructions+=4;goto B56b96c;
case 0x56b96d:c.instructions+=3;goto B56b96d;
case 0x56b96e:c.instructions+=2;goto B56b96e;
case 0x56b970:c.instructions+=1;goto B56b970;
case 0x56b976:goto L56b976;
case 0x56b97c:goto L56b97c;
case 0x56b981:c.instructions+=1;goto B56b981;
case 0x56b987:goto L56b987;
case 0x56b98d:goto L56b98d;
case 0x56b992:c.instructions+=1;goto B56b992;
case 0x56b998:goto L56b998;
case 0x56b99e:goto L56b99e;
case 0x56b9a3:c.instructions+=1;goto B56b9a3;
case 0x56b9a5:goto L56b9a5;
case 0x56b9aa:c.instructions+=1;goto B56b9aa;
case 0x56b9b0:goto L56b9b0;
case 0x56b9b3:c.instructions+=5;goto B56b9b3;
case 0x56b9b5:c.instructions+=4;goto B56b9b5;
case 0x56b9ba:c.instructions+=3;goto B56b9ba;
case 0x56b9bf:c.instructions+=2;goto B56b9bf;
case 0x56b9c0:c.instructions+=1;goto B56b9c0;
case 0x56b9c5:goto L56b9c5;
case 0x56b9ca:c.instructions+=2;goto B56b9ca;
case 0x56b9cf:c.instructions+=1;goto B56b9cf;
case 0x56b9d4:goto L56b9d4;
case 0x56b9d7:c.instructions+=4;goto B56b9d7;
case 0x56b9da:c.instructions+=3;goto B56b9da;
case 0x56b9dc:c.instructions+=2;goto B56b9dc;
case 0x56b9e0:c.instructions+=1;goto B56b9e0;
case 0x56b9e5:goto L56b9e5;
case 0x56b9e6:c.instructions+=4;goto B56b9e6;
case 0x56b9e7:c.instructions+=3;goto B56b9e7;
case 0x56b9e8:c.instructions+=2;goto B56b9e8;
case 0x56b9e9:c.instructions+=1;goto B56b9e9;
case 0x56b9ec:goto L56b9ec;
case 0x56b9f2:c.instructions+=2;goto B56b9f2;
case 0x56b9f4:c.instructions+=1;goto B56b9f4;
case 0x56b9fa:goto L56b9fa;
case 0x56ba00:c.instructions+=2;goto B56ba00;
case 0x56ba02:c.instructions+=1;goto B56ba02;
case 0x56ba08:goto L56ba08;
case 0x56ba0b:c.instructions+=4;goto B56ba0b;
case 0x56ba10:c.instructions+=3;goto B56ba10;
case 0x56ba15:c.instructions+=2;goto B56ba15;
case 0x56ba16:c.instructions+=1;goto B56ba16;
case 0x56ba1b:goto L56ba1b;
case 0x56ba1e:c.instructions+=2;goto B56ba1e;
case 0x56ba20:c.instructions+=1;goto B56ba20;
case 0x56ba26:goto L56ba26;
case 0x56ba2b:c.instructions+=1;goto B56ba2b;
case 0x56ba30:goto L56ba30;
case 0x56ba33:c.instructions+=2;goto B56ba33;
case 0x56ba35:c.instructions+=1;goto B56ba35;
case 0x56ba3b:goto L56ba3b;
case 0x56ba3e:c.instructions+=3;goto B56ba3e;
case 0x56ba40:c.instructions+=2;goto B56ba40;
case 0x56ba43:c.instructions+=1;goto B56ba43;
case 0x56ba48:goto L56ba48;
case 0x56ba4b:c.instructions+=1;goto B56ba4b;
case 0x56ba51:goto L56ba51;
case 0x56ba54:c.instructions+=3;goto B56ba54;
case 0x56ba55:c.instructions+=2;goto B56ba55;
case 0x56ba5a:c.instructions+=1;goto B56ba5a;
case 0x56ba5f:goto L56ba5f;
case 0x56ba61:c.instructions+=1;goto B56ba61;
case 0x56ba63:goto L56ba63;
case 0x56ba66:c.instructions+=2;goto B56ba66;
case 0x56ba69:c.instructions+=1;goto B56ba69;
case 0x56ba6b:goto L56ba6b;
case 0x56ba71:c.instructions+=1;goto B56ba71;
case 0x56ba73:goto L56ba73;
case 0x56ba78:c.instructions+=2;goto B56ba78;
case 0x56ba7d:c.instructions+=1;goto B56ba7d;
case 0x56ba7f:goto L56ba7f;
case 0x56ba80:goto L56ba80;
case 0x56ba83:c.instructions+=1;goto B56ba83;
case 0x56ba85:goto L56ba85;
case 0x56ba87:c.instructions+=2;goto B56ba87;
case 0x56ba8c:c.instructions+=1;goto B56ba8c;
case 0x56ba8e:goto L56ba8e;
case 0x56ba91:c.instructions+=4;goto B56ba91;
case 0x56ba96:c.instructions+=3;goto B56ba96;
case 0x56ba9b:c.instructions+=2;goto B56ba9b;
case 0x56ba9c:c.instructions+=1;goto B56ba9c;
case 0x56baa1:goto L56baa1;
case 0x56baa4:c.instructions+=2;goto B56baa4;
case 0x56baae:c.instructions+=1;goto B56baae;
case 0x56bab0:goto L56bab0;
case 0x56bab3:c.instructions+=10;goto B56bab3;
case 0x56bab8:c.instructions+=9;goto B56bab8;
case 0x56baba:c.instructions+=8;goto B56baba;
case 0x56babf:c.instructions+=7;goto B56babf;
case 0x56bac4:c.instructions+=6;goto B56bac4;
case 0x56bac9:c.instructions+=5;goto B56bac9;
case 0x56bace:c.instructions+=4;goto B56bace;
case 0x56bad3:c.instructions+=3;goto B56bad3;
case 0x56bad8:c.instructions+=2;goto B56bad8;
case 0x56bad9:c.instructions+=1;goto B56bad9;
case 0x56bade:goto L56bade;
case 0x56bae1:c.instructions+=1;goto B56bae1;
case 0x56baeb:goto L56baeb;
case 0x56baf0:c.instructions+=2;goto B56baf0;
case 0x56baf5:c.instructions+=1;goto B56baf5;
case 0x56bafa:goto L56bafa;
case 0x56bafd:c.instructions+=5;goto B56bafd;
case 0x56baff:c.instructions+=4;goto B56baff;
case 0x56bb04:c.instructions+=3;goto B56bb04;
case 0x56bb09:c.instructions+=2;goto B56bb09;
case 0x56bb0a:c.instructions+=1;goto B56bb0a;
case 0x56bb0f:goto L56bb0f;
case 0x56bb12:c.instructions+=4;goto B56bb12;
case 0x56bb14:c.instructions+=3;goto B56bb14;
case 0x56bb16:c.instructions+=2;goto B56bb16;
case 0x56bb1a:c.instructions+=1;goto B56bb1a;
case 0x56bb1f:goto L56bb1f;
case 0x56bb20:c.instructions+=4;goto B56bb20;
case 0x56bb21:c.instructions+=3;goto B56bb21;
case 0x56bb22:c.instructions+=2;goto B56bb22;
case 0x56bb23:c.instructions+=1;goto B56bb23;
case 0x56bb26:goto L56bb26;
case 0x56bb29:c.instructions+=6;goto B56bb29;
case 0x56bb2c:c.instructions+=5;goto B56bb2c;
case 0x56bb2f:c.instructions+=4;goto B56bb2f;
case 0x56bb30:c.instructions+=3;goto B56bb30;
case 0x56bb31:c.instructions+=2;goto B56bb31;
case 0x56bb36:c.instructions+=1;goto B56bb36;
case 0x56bb3b:goto L56bb3b;
case 0x56bb3d:c.instructions+=1;goto B56bb3d;
case 0x56bb43:goto L56bb43;
case 0x56bb46:c.instructions+=4;goto B56bb46;
case 0x56bb47:c.instructions+=3;goto B56bb47;
case 0x56bb48:c.instructions+=2;goto B56bb48;
case 0x56bb4d:c.instructions+=1;goto B56bb4d;
case 0x56bb52:goto L56bb52;
case 0x56bb54:c.instructions+=1;goto B56bb54;
case 0x56bb5a:goto L56bb5a;
case 0x56bb61:c.instructions+=1;goto B56bb61;
case 0x56bb63:goto L56bb63;
case 0x56bb64:c.instructions+=3;goto B56bb64;
case 0x56bb65:c.instructions+=2;goto B56bb65;
case 0x56bb6a:c.instructions+=1;goto B56bb6a;
case 0x56bb6f:goto L56bb6f;
case 0x56bb74:c.instructions+=2;goto B56bb74;
case 0x56bb76:c.instructions+=1;goto B56bb76;
case 0x56bb7b:goto L56bb7b;
case 0x56bb7d:c.instructions+=2;goto B56bb7d;
case 0x56bb83:c.instructions+=1;goto B56bb83;
case 0x56bb85:goto L56bb85;
case 0x56bb88:c.instructions+=4;goto B56bb88;
case 0x56bb8d:c.instructions+=3;goto B56bb8d;
case 0x56bb92:c.instructions+=2;goto B56bb92;
case 0x56bb93:c.instructions+=1;goto B56bb93;
case 0x56bb98:goto L56bb98;
case 0x56bb9b:c.instructions+=1;goto B56bb9b;
case 0x56bba0:goto L56bba0;
case 0x56bba3:c.instructions+=9;goto B56bba3;
case 0x56bba8:c.instructions+=8;goto B56bba8;
case 0x56bbaa:c.instructions+=7;goto B56bbaa;
case 0x56bbaf:c.instructions+=6;goto B56bbaf;
case 0x56bbb4:c.instructions+=5;goto B56bbb4;
case 0x56bbb9:c.instructions+=4;goto B56bbb9;
case 0x56bbbe:c.instructions+=3;goto B56bbbe;
case 0x56bbc3:c.instructions+=2;goto B56bbc3;
case 0x56bbc8:c.instructions+=1;goto B56bbc8;
case 0x56bbc9:goto L56bbc9;
case 0x56bbce:goto L56bbce;
case 0x56bbd1:c.instructions+=3;goto B56bbd1;
case 0x56bbd4:c.instructions+=2;goto B56bbd4;
case 0x56bbde:c.instructions+=1;goto B56bbde;
case 0x56bbe0:goto L56bbe0;
case 0x56bbe3:c.instructions+=10;goto B56bbe3;
case 0x56bbe8:c.instructions+=9;goto B56bbe8;
case 0x56bbea:c.instructions+=8;goto B56bbea;
case 0x56bbef:c.instructions+=7;goto B56bbef;
case 0x56bbf4:c.instructions+=6;goto B56bbf4;
case 0x56bbf9:c.instructions+=5;goto B56bbf9;
case 0x56bbfe:c.instructions+=4;goto B56bbfe;
case 0x56bc03:c.instructions+=3;goto B56bc03;
case 0x56bc08:c.instructions+=2;goto B56bc08;
case 0x56bc09:c.instructions+=1;goto B56bc09;
case 0x56bc0b:goto L56bc0b;
case 0x56bc0e:goto L56bc0e;
case 0x56bc11:c.instructions+=4;goto B56bc11;
case 0x56bc16:c.instructions+=3;goto B56bc16;
case 0x56bc1b:c.instructions+=2;goto B56bc1b;
case 0x56bc1c:c.instructions+=1;goto B56bc1c;
case 0x56bc21:goto L56bc21;
case 0x56bc24:c.instructions+=1;goto B56bc24;
case 0x56bc2e:goto L56bc2e;
case 0x56bc30:c.instructions+=3;goto B56bc30;
case 0x56bc32:c.instructions+=2;goto B56bc32;
case 0x56bc36:c.instructions+=1;goto B56bc36;
case 0x56bc3b:goto L56bc3b;
case 0x56bc40:c.instructions+=2;goto B56bc40;
case 0x56bc45:c.instructions+=1;goto B56bc45;
case 0x56bc4a:goto L56bc4a;
case 0x56bc4d:c.instructions+=5;goto B56bc4d;
case 0x56bc4f:c.instructions+=4;goto B56bc4f;
case 0x56bc54:c.instructions+=3;goto B56bc54;
case 0x56bc59:c.instructions+=2;goto B56bc59;
case 0x56bc5a:c.instructions+=1;goto B56bc5a;
case 0x56bc5f:goto L56bc5f;
case 0x56bc62:c.instructions+=5;goto B56bc62;
case 0x56bc63:c.instructions+=4;goto B56bc63;
case 0x56bc64:c.instructions+=3;goto B56bc64;
case 0x56bc65:c.instructions+=2;goto B56bc65;
case 0x56bc66:c.instructions+=1;goto B56bc66;
case 0x56bc69:goto L56bc69;
case 0x56bc6c:c.instructions+=5;goto B56bc6c;
case 0x56bc6e:c.instructions+=4;goto B56bc6e;
case 0x56bc73:c.instructions+=3;goto B56bc73;
case 0x56bc78:c.instructions+=2;goto B56bc78;
case 0x56bc79:c.instructions+=1;goto B56bc79;
case 0x56bc7e:goto L56bc7e;
case 0x56bc81:c.instructions+=4;goto B56bc81;
case 0x56bc84:c.instructions+=3;goto B56bc84;
case 0x56bc86:c.instructions+=2;goto B56bc86;
case 0x56bc8a:c.instructions+=1;goto B56bc8a;
case 0x56bc8f:goto L56bc8f;
case 0x56bc90:c.instructions+=4;goto B56bc90;
case 0x56bc91:c.instructions+=3;goto B56bc91;
case 0x56bc92:c.instructions+=2;goto B56bc92;
case 0x56bc93:c.instructions+=1;goto B56bc93;
case 0x56bc96:goto L56bc96;
case 0x56bc9b:c.instructions+=1;goto B56bc9b;
case 0x56bca1:goto L56bca1;
case 0x56bca2:c.instructions+=4;goto B56bca2;
case 0x56bca3:c.instructions+=3;goto B56bca3;
case 0x56bca4:c.instructions+=2;goto B56bca4;
case 0x56bca5:c.instructions+=1;goto B56bca5;
case 0x56bca8:goto L56bca8;
case 0x56bcaa:c.instructions+=1;goto B56bcaa;
case 0x56bcaf:goto L56bcaf;
case 0x56bcb1:c.instructions+=2;goto B56bcb1;
case 0x56bcb8:c.instructions+=1;goto B56bcb8;
case 0x56bcbd:goto L56bcbd;
case 0x56bcc0:c.instructions+=2;goto B56bcc0;
case 0x56bcc2:c.instructions+=1;goto B56bcc2;
case 0x56bcc7:goto L56bcc7;
case 0x56bcc9:c.instructions+=1;goto B56bcc9;
case 0x56bccb:goto L56bccb;
case 0x56bcd1:c.instructions+=2;goto B56bcd1;
case 0x56bcd2:c.instructions+=1;goto B56bcd2;
case 0x56bcd7:goto L56bcd7;
case 0x56bcda:c.instructions+=5;goto B56bcda;
case 0x56bcdb:c.instructions+=4;goto B56bcdb;
case 0x56bcdc:c.instructions+=3;goto B56bcdc;
case 0x56bcdd:c.instructions+=2;goto B56bcdd;
case 0x56bcde:c.instructions+=1;goto B56bcde;
case 0x56bce1:goto L56bce1;
case 0x56bce3:c.instructions+=1;goto B56bce3;
case 0x56bce8:goto L56bce8;
case 0x56bcea:c.instructions+=1;goto B56bcea;
case 0x56bcec:goto L56bcec;
case 0x56bcf2:c.instructions+=2;goto B56bcf2;
case 0x56bcf3:c.instructions+=1;goto B56bcf3;
case 0x56bcf8:goto L56bcf8;
case 0x56bcfb:c.instructions+=5;goto B56bcfb;
case 0x56bcfc:c.instructions+=4;goto B56bcfc;
case 0x56bcfd:c.instructions+=3;goto B56bcfd;
case 0x56bcfe:c.instructions+=2;goto B56bcfe;
case 0x56bcff:c.instructions+=1;goto B56bcff;
case 0x56bd02:goto L56bd02;
case 0x56bd08:c.instructions+=2;goto B56bd08;
case 0x56bd09:c.instructions+=1;goto B56bd09;
case 0x56bd0e:goto L56bd0e;
case 0x56bd14:c.instructions+=2;goto B56bd14;
case 0x56bd15:c.instructions+=1;goto B56bd15;
case 0x56bd1a:goto L56bd1a;
case 0x56bd1d:c.instructions+=5;goto B56bd1d;
case 0x56bd1e:c.instructions+=4;goto B56bd1e;
case 0x56bd1f:c.instructions+=3;goto B56bd1f;
case 0x56bd20:c.instructions+=2;goto B56bd20;
case 0x56bd21:c.instructions+=1;goto B56bd21;
case 0x56bd24:goto L56bd24;
case 0x56bd29:c.instructions+=1;goto B56bd29;
case 0x56bd2b:goto L56bd2b;
case 0x56bd30:c.instructions+=1;goto B56bd30;
case 0x56bd32:goto L56bd32;
case 0x56bd37:c.instructions+=1;goto B56bd37;
case 0x56bd3d:goto L56bd3d;
case 0x56bd43:c.instructions+=2;goto B56bd43;
case 0x56bd45:c.instructions+=1;goto B56bd45;
case 0x56bd4b:goto L56bd4b;
case 0x56bd4c:c.instructions+=2;goto B56bd4c;
case 0x56bd4e:c.instructions+=1;goto B56bd4e;
case 0x56bd53:goto L56bd53;
case 0x56bd54:c.instructions+=4;goto B56bd54;
case 0x56bd55:c.instructions+=3;goto B56bd55;
case 0x56bd56:c.instructions+=2;goto B56bd56;
case 0x56bd57:c.instructions+=1;goto B56bd57;
case 0x56bd5a:goto L56bd5a;
case 0x56bd5d:c.instructions+=5;goto B56bd5d;
case 0x56bd5f:c.instructions+=4;goto B56bd5f;
case 0x56bd64:c.instructions+=3;goto B56bd64;
case 0x56bd69:c.instructions+=2;goto B56bd69;
case 0x56bd6a:c.instructions+=1;goto B56bd6a;
case 0x56bd6f:goto L56bd6f;
case 0x56bd72:c.instructions+=1;goto B56bd72;
case 0x56bd77:goto L56bd77;
case 0x56bd7d:c.instructions+=1;goto B56bd7d;
case 0x56bd82:goto L56bd82;
case 0x56bd88:c.instructions+=5;goto B56bd88;
case 0x56bd8e:c.instructions+=4;goto B56bd8e;
case 0x56bd94:c.instructions+=3;goto B56bd94;
case 0x56bd96:c.instructions+=2;goto B56bd96;
case 0x56bd99:c.instructions+=1;goto B56bd99;
case 0x56bd9b:goto L56bd9b;
case 0x56bda1:c.instructions+=3;goto B56bda1;
case 0x56bda3:c.instructions+=2;goto B56bda3;
case 0x56bda6:c.instructions+=1;goto B56bda6;
case 0x56bda8:goto L56bda8;
case 0x56bdab:c.instructions+=1;goto B56bdab;
case 0x56bdad:goto L56bdad;
case 0x56bdb0:c.instructions+=1;goto B56bdb0;
case 0x56bdb6:goto L56bdb6;
case 0x56bdbb:c.instructions+=2;goto B56bdbb;
case 0x56bdbd:c.instructions+=1;goto B56bdbd;
case 0x56bdc2:goto L56bdc2;
case 0x56bdc3:c.instructions+=4;goto B56bdc3;
case 0x56bdc4:c.instructions+=3;goto B56bdc4;
case 0x56bdc5:c.instructions+=2;goto B56bdc5;
case 0x56bdc6:c.instructions+=1;goto B56bdc6;
case 0x56bdc9:goto L56bdc9;
case 0x56bdce:c.instructions+=3;goto B56bdce;
case 0x56bdd0:c.instructions+=2;goto B56bdd0;
case 0x56bdd2:c.instructions+=1;goto B56bdd2;
case 0x56bdd7:goto L56bdd7;
case 0x56bdd8:c.instructions+=4;goto B56bdd8;
case 0x56bdd9:c.instructions+=3;goto B56bdd9;
case 0x56bdda:c.instructions+=2;goto B56bdda;
case 0x56bddb:c.instructions+=1;goto B56bddb;
case 0x56bdde:goto L56bdde;
case 0x56bde3:c.instructions+=2;goto B56bde3;
case 0x56bde5:c.instructions+=1;goto B56bde5;
case 0x56bdea:goto L56bdea;
case 0x56bdeb:c.instructions+=4;goto B56bdeb;
case 0x56bdec:c.instructions+=3;goto B56bdec;
case 0x56bded:c.instructions+=2;goto B56bded;
case 0x56bdee:c.instructions+=1;goto B56bdee;
case 0x56bdf1:goto L56bdf1;
case 0x56bdf6:c.instructions+=1;goto B56bdf6;
case 0x56bdfc:goto L56bdfc;
case 0x56bdfe:goto L56bdfe;
case 0x56be03:c.instructions+=1;goto B56be03;
case 0x56be09:goto L56be09;
case 0x56be0e:c.instructions+=1;goto B56be0e;
case 0x56be10:goto L56be10;
case 0x56be15:c.instructions+=1;goto B56be15;
case 0x56be1b:goto L56be1b;
case 0x56be1d:c.instructions+=1;goto B56be1d;
case 0x56be22:goto L56be22;
case 0x56be23:c.instructions+=4;goto B56be23;
case 0x56be24:c.instructions+=3;goto B56be24;
case 0x56be25:c.instructions+=2;goto B56be25;
case 0x56be26:c.instructions+=1;goto B56be26;
case 0x56be29:goto L56be29;
case 0x56be2e:c.instructions+=1;goto B56be2e;
case 0x56be33:goto L56be33;
case 0x56be34:c.instructions+=5;goto B56be34;
case 0x56be3b:c.instructions+=4;goto B56be3b;
case 0x56be3c:c.instructions+=3;goto B56be3c;
case 0x56be3d:c.instructions+=2;goto B56be3d;
case 0x56be3e:c.instructions+=1;goto B56be3e;
case 0x56be41:goto L56be41;
case 0x56be47:c.instructions+=2;goto B56be47;
case 0x56be49:c.instructions+=1;goto B56be49;
case 0x56be4b:goto L56be4b;
case 0x56be52:c.instructions+=3;goto B56be52;
case 0x56be58:c.instructions+=2;goto B56be58;
case 0x56be5a:c.instructions+=1;goto B56be5a;
case 0x56be5c:goto L56be5c;
case 0x56be5f:c.instructions+=2;goto B56be5f;
case 0x56be60:c.instructions+=1;goto B56be60;
case 0x56be65:goto L56be65;
case 0x56be6a:c.instructions+=2;goto B56be6a;
case 0x56be6f:c.instructions+=1;goto B56be6f;
case 0x56be74:goto L56be74;
case 0x56be77:c.instructions+=5;goto B56be77;
case 0x56be78:c.instructions+=4;goto B56be78;
case 0x56be79:c.instructions+=3;goto B56be79;
case 0x56be7a:c.instructions+=2;goto B56be7a;
case 0x56be7b:c.instructions+=1;goto B56be7b;
case 0x56be7e:goto L56be7e;
case 0x56be81:c.instructions+=1;goto B56be81;
case 0x56be86:goto L56be86;
case 0x56be87:c.instructions+=4;goto B56be87;
case 0x56be88:c.instructions+=3;goto B56be88;
case 0x56be89:c.instructions+=2;goto B56be89;
case 0x56be8a:c.instructions+=1;goto B56be8a;
case 0x56be8d:goto L56be8d;
case 0x56be92:c.instructions+=1;goto B56be92;
case 0x56be94:goto L56be94;
case 0x56be99:c.instructions+=1;goto B56be99;
case 0x56be9b:goto L56be9b;
case 0x56bea0:c.instructions+=1;goto B56bea0;
case 0x56bea6:goto L56bea6;
case 0x56bea9:c.instructions+=3;goto B56bea9;
case 0x56beaa:c.instructions+=2;goto B56beaa;
case 0x56beaf:c.instructions+=1;goto B56beaf;
case 0x56beb4:goto L56beb4;
case 0x56beb9:c.instructions+=2;goto B56beb9;
case 0x56bebe:c.instructions+=1;goto B56bebe;
case 0x56bec3:goto L56bec3;
case 0x56bec6:c.instructions+=6;goto B56bec6;
case 0x56bec7:c.instructions+=5;goto B56bec7;
case 0x56bece:c.instructions+=4;goto B56bece;
case 0x56becf:c.instructions+=3;goto B56becf;
case 0x56bed0:c.instructions+=2;goto B56bed0;
case 0x56bed1:c.instructions+=1;goto B56bed1;
case 0x56bed4:goto L56bed4;
case 0x56bed9:c.instructions+=1;goto B56bed9;
case 0x56bede:goto L56bede;
case 0x56bee3:c.instructions+=3;goto B56bee3;
case 0x56bee8:c.instructions+=2;goto B56bee8;
case 0x56beed:c.instructions+=1;goto B56beed;
case 0x56bef2:goto L56bef2;
case 0x56bef3:c.instructions+=5;goto B56bef3;
case 0x56befa:c.instructions+=4;goto B56befa;
case 0x56befb:c.instructions+=3;goto B56befb;
case 0x56befc:c.instructions+=2;goto B56befc;
case 0x56befd:c.instructions+=1;goto B56befd;
case 0x56bf00:goto L56bf00;
case 0x56bf03:c.instructions+=6;goto B56bf03;
case 0x56bf06:c.instructions+=5;goto B56bf06;
case 0x56bf09:c.instructions+=4;goto B56bf09;
case 0x56bf0a:c.instructions+=3;goto B56bf0a;
case 0x56bf0b:c.instructions+=2;goto B56bf0b;
case 0x56bf10:c.instructions+=1;goto B56bf10;
case 0x56bf15:goto L56bf15;
case 0x56bf1a:c.instructions+=1;goto B56bf1a;
case 0x56bf1f:goto L56bf1f;
case 0x56bf25:c.instructions+=5;goto B56bf25;
case 0x56bf26:c.instructions+=4;goto B56bf26;
case 0x56bf2b:c.instructions+=3;goto B56bf2b;
case 0x56bf30:c.instructions+=2;goto B56bf30;
case 0x56bf31:c.instructions+=1;goto B56bf31;
case 0x56bf36:goto L56bf36;
case 0x56bf3b:c.instructions+=2;goto B56bf3b;
case 0x56bf40:c.instructions+=1;goto B56bf40;
case 0x56bf45:goto L56bf45;
case 0x56bf48:c.instructions+=1;goto B56bf48;
case 0x56bf4f:goto L56bf4f;
case 0x56bf52:c.instructions+=5;goto B56bf52;
case 0x56bf55:c.instructions+=4;goto B56bf55;
case 0x56bf5b:c.instructions+=3;goto B56bf5b;
case 0x56bf5c:c.instructions+=2;goto B56bf5c;
case 0x56bf5d:c.instructions+=1;goto B56bf5d;
case 0x56bf62:goto L56bf62;
case 0x56bf63:c.instructions+=4;goto B56bf63;
case 0x56bf64:c.instructions+=3;goto B56bf64;
case 0x56bf65:c.instructions+=2;goto B56bf65;
case 0x56bf66:c.instructions+=1;goto B56bf66;
case 0x56bf70:goto L56bf70;
case 0x56bf72:c.instructions+=14;goto B56bf72;
case 0x56bf77:c.instructions+=13;goto B56bf77;
case 0x56bf7d:c.instructions+=12;goto B56bf7d;
case 0x56bf7e:c.instructions+=11;goto B56bf7e;
case 0x56bf85:c.instructions+=10;goto B56bf85;
case 0x56bf86:c.instructions+=9;goto B56bf86;
case 0x56bf87:c.instructions+=8;goto B56bf87;
case 0x56bf88:c.instructions+=7;goto B56bf88;
case 0x56bf8c:c.instructions+=6;goto B56bf8c;
case 0x56bf8d:c.instructions+=5;goto B56bf8d;
case 0x56bf8e:c.instructions+=4;goto B56bf8e;
case 0x56bf90:c.instructions+=3;goto B56bf90;
case 0x56bf91:c.instructions+=2;goto B56bf91;
case 0x56bf95:c.instructions+=1;goto B56bf95;
case 0x56bf9a:goto L56bf9a;
case 0x56bf9f:c.instructions+=13;goto B56bf9f;
case 0x56bfa4:c.instructions+=12;goto B56bfa4;
case 0x56bfa6:c.instructions+=11;goto B56bfa6;
case 0x56bfa8:c.instructions+=10;goto B56bfa8;
case 0x56bfad:c.instructions+=9;goto B56bfad;
case 0x56bfb3:c.instructions+=8;goto B56bfb3;
case 0x56bfb6:c.instructions+=7;goto B56bfb6;
case 0x56bfb9:c.instructions+=6;goto B56bfb9;
case 0x56bfbe:c.instructions+=5;goto B56bfbe;
case 0x56bfc1:c.instructions+=4;goto B56bfc1;
case 0x56bfc2:c.instructions+=3;goto B56bfc2;
case 0x56bfc4:c.instructions+=2;goto B56bfc4;
case 0x56bfc8:c.instructions+=1;goto B56bfc8;
case 0x56bfcd:goto L56bfcd;
case 0x56bfd0:c.instructions+=8;goto B56bfd0;
case 0x56bfd1:c.instructions+=7;goto B56bfd1;
case 0x56bfd2:c.instructions+=6;goto B56bfd2;
case 0x56bfd4:c.instructions+=5;goto B56bfd4;
case 0x56bfd9:c.instructions+=4;goto B56bfd9;
case 0x56bfda:c.instructions+=3;goto B56bfda;
case 0x56bfe0:c.instructions+=2;goto B56bfe0;
case 0x56bfe5:c.instructions+=1;goto B56bfe5;
case 0x56bfea:goto L56bfea;
case 0x56bff0:c.instructions+=3;goto B56bff0;
case 0x56bff6:c.instructions+=2;goto B56bff6;
case 0x56bffc:c.instructions+=1;goto B56bffc;
default:missing_instruction(c.pc);}
B56b002:L56b002:{c.instructions+=2;NFSU2_TR(0x56b002);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56b004:{NFSU2_TR(0x56b004);
if(r1(R+518)){{goto L56b016;}}
}
B56b006:L56b006:{c.instructions+=3;NFSU2_TR(0x56b006);
u8 U[4];
w4(U+0,u32(0xaba93d3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b00b:{NFSU2_TR(0x56b00b);
__builtin_memmove((R+4),(R+0),4);
}
B56b00d:{NFSU2_TR(0x56b00d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b012ull));
TAIL_STATIC(0x517f80u,517);
}
B56b012:L56b012:{c.instructions+=2;NFSU2_TR(0x56b012);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56b014:{NFSU2_TR(0x56b014);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56b031;}}
}
B56b016:L56b016:{c.instructions+=3;NFSU2_TR(0x56b016);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B56b01b:{NFSU2_TR(0x56b01b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56b01d:{NFSU2_TR(0x56b01d);
if(r1(R+518)){{goto L56b02f;}}
}
B56b01f:L56b01f:{c.instructions+=4;NFSU2_TR(0x56b01f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56b022:{NFSU2_TR(0x56b022);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b023:{NFSU2_TR(0x56b023);
u8 U[4];
w4(U+0,u32(0xaba93d3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b028:{NFSU2_TR(0x56b028);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b02dull));
TAIL_STATIC(0x52c570u,52c);
}
B56b02d:L56b02d:{c.instructions+=1;NFSU2_TR(0x56b02d);
{goto L56b031;}
}
B56b02f:L56b02f:{c.instructions+=1;NFSU2_TR(0x56b02f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B56b031:L56b031:{c.instructions+=4;NFSU2_TR(0x56b031);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56b037:{NFSU2_TR(0x56b037);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b038:{NFSU2_TR(0x56b038);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56b03e:{NFSU2_TR(0x56b03e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b043ull));
TAIL_STATIC(0x50ca00u,50c);
}
B56b043:L56b043:{c.instructions+=3;NFSU2_TR(0x56b043);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56b049:{NFSU2_TR(0x56b049);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b04a:{NFSU2_TR(0x56b04a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b04full));
TAIL_STATIC(0x50ca00u,50c);
}
B56b04f:L56b04f:{c.instructions+=9;NFSU2_TR(0x56b04f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56b053:{NFSU2_TR(0x56b053);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B56b056:{NFSU2_TR(0x56b056);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56b057:{NFSU2_TR(0x56b057);
__builtin_memmove((R+0),(R+24),4);
}
B56b059:{NFSU2_TR(0x56b059);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56b05a:{NFSU2_TR(0x56b05a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56b05b:{NFSU2_TR(0x56b05b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56b062:{NFSU2_TR(0x56b062);
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
B56b065:{NFSU2_TR(0x56b065);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56b070:L56b070:{c.instructions+=3;NFSU2_TR(0x56b070);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b071:{NFSU2_TR(0x56b071);
__builtin_memmove((R+24),(R+4),4);
}
B56b073:{NFSU2_TR(0x56b073);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b078ull));
{goto L56b090;}
}
B56b078:L56b078:{c.instructions+=2;NFSU2_TR(0x56b078);
u8 U[9];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
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
B56b07d:{NFSU2_TR(0x56b07d);
if(r1(R+518)){{goto L56b088;}}
}
B56b07f:L56b07f:{c.instructions+=2;NFSU2_TR(0x56b07f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b080:{NFSU2_TR(0x56b080);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b085ull));
TAIL_STATIC(0x575630u,575);
}
B56b085:L56b085:{c.instructions+=1;NFSU2_TR(0x56b085);
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
B56b088:L56b088:{c.instructions+=3;NFSU2_TR(0x56b088);
__builtin_memmove((R+0),(R+24),4);
}
B56b08a:{NFSU2_TR(0x56b08a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56b08b:{NFSU2_TR(0x56b08b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56b090:L56b090:{c.instructions+=16;NFSU2_TR(0x56b090);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b092:{NFSU2_TR(0x56b092);
u8 U[4];
w4(U+0,u32(0x7785f6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b097:{NFSU2_TR(0x56b097);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56b09d:{NFSU2_TR(0x56b09d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b09e:{NFSU2_TR(0x56b09e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56b0a5:{NFSU2_TR(0x56b0a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b0a6:{NFSU2_TR(0x56b0a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b0a7:{NFSU2_TR(0x56b0a7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b0a8:{NFSU2_TR(0x56b0a8);
__builtin_memmove((R+28),(R+4),4);
}
B56b0aa:{NFSU2_TR(0x56b0aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56b0ae:{NFSU2_TR(0x56b0ae);
u8 U[4];
w4(U+0,u32(0x79d8ecull));
s4(u32(r4(R+28)),r4(U+0));
}
B56b0b4:{NFSU2_TR(0x56b0b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56b0ba:{NFSU2_TR(0x56b0ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x160ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56b0c0:{NFSU2_TR(0x56b0c0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56b0c2:{NFSU2_TR(0x56b0c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56b0ca:{NFSU2_TR(0x56b0ca);
if(r1(R+518)){{goto L56b0e9;}}
}
B56b0cc:L56b0cc:{c.instructions+=1;NFSU2_TR(0x56b0cc);
__builtin_memmove((R+16),(R+16),4);
}
B56b0d0:L56b0d0:{c.instructions+=6;NFSU2_TR(0x56b0d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B56b0d2:{NFSU2_TR(0x56b0d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56b0d5:{NFSU2_TR(0x56b0d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B56b0d7:{NFSU2_TR(0x56b0d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b0d8:{NFSU2_TR(0x56b0d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56b0db:{NFSU2_TR(0x56b0db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b0e0ull));
TAIL_STATIC(0x575630u,575);
}
B56b0e0:L56b0e0:{c.instructions+=4;NFSU2_TR(0x56b0e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56b0e2:{NFSU2_TR(0x56b0e2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B56b0e5:{NFSU2_TR(0x56b0e5);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56b0e7:{NFSU2_TR(0x56b0e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56b0d0u);}goto L56b0d0;}}
}
B56b0e9:L56b0e9:{c.instructions+=5;NFSU2_TR(0x56b0e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56b0ef:{NFSU2_TR(0x56b0ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x158ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56b0f5:{NFSU2_TR(0x56b0f5);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56b0f7:{NFSU2_TR(0x56b0f7);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56b0fc:{NFSU2_TR(0x56b0fc);
if(r1(R+518)){{goto L56b119;}}
}
B56b0fe:L56b0fe:{c.instructions+=1;NFSU2_TR(0x56b0fe);
__builtin_memmove((R+28),(R+28),4);
}
B56b100:L56b100:{c.instructions+=6;NFSU2_TR(0x56b100);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B56b102:{NFSU2_TR(0x56b102);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56b105:{NFSU2_TR(0x56b105);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B56b107:{NFSU2_TR(0x56b107);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b108:{NFSU2_TR(0x56b108);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56b10b:{NFSU2_TR(0x56b10b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b110ull));
TAIL_STATIC(0x575630u,575);
}
B56b110:L56b110:{c.instructions+=4;NFSU2_TR(0x56b110);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56b112:{NFSU2_TR(0x56b112);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B56b115:{NFSU2_TR(0x56b115);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56b117:{NFSU2_TR(0x56b117);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56b100u);}goto L56b100;}}
}
B56b119:L56b119:{c.instructions+=3;NFSU2_TR(0x56b119);
__builtin_memmove((R+4),(R+28),4);
}
B56b11b:{NFSU2_TR(0x56b11b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B56b123:{NFSU2_TR(0x56b123);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b128ull));
TAIL_STATIC(0x4defb0u,4de);
}
B56b128:L56b128:{c.instructions+=6;NFSU2_TR(0x56b128);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56b12c:{NFSU2_TR(0x56b12c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56b12d:{NFSU2_TR(0x56b12d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56b12e:{NFSU2_TR(0x56b12e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56b135:{NFSU2_TR(0x56b135);
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
B56b138:{NFSU2_TR(0x56b138);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56b140:L56b140:{c.instructions+=8;NFSU2_TR(0x56b140);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b142:{NFSU2_TR(0x56b142);
u8 U[4];
w4(U+0,u32(0x778614ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b147:{NFSU2_TR(0x56b147);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56b14d:{NFSU2_TR(0x56b14d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b14e:{NFSU2_TR(0x56b14e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56b155:{NFSU2_TR(0x56b155);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b156:{NFSU2_TR(0x56b156);
u8 U[4];
w4(U+0,u32(0xacull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b15b:{NFSU2_TR(0x56b15b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b160ull));
TAIL_STATIC(0x575620u,575);
}
B56b160:L56b160:{c.instructions+=5;NFSU2_TR(0x56b160);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B56b163:{NFSU2_TR(0x56b163);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B56b167:{NFSU2_TR(0x56b167);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56b169:{NFSU2_TR(0x56b169);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56b171:{NFSU2_TR(0x56b171);
if(r1(R+518)){{goto L56b18e;}}
}
B56b173:L56b173:{c.instructions+=4;NFSU2_TR(0x56b173);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56b177:{NFSU2_TR(0x56b177);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b178:{NFSU2_TR(0x56b178);
__builtin_memmove((R+4),(R+0),4);
}
B56b17a:{NFSU2_TR(0x56b17a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b17full));
TAIL_STATIC(0x565750u,565);
}
B56b17f:L56b17f:{c.instructions+=4;NFSU2_TR(0x56b17f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56b183:{NFSU2_TR(0x56b183);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56b18a:{NFSU2_TR(0x56b18a);
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
B56b18d:{NFSU2_TR(0x56b18d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56b18e:L56b18e:{c.instructions+=5;NFSU2_TR(0x56b18e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56b192:{NFSU2_TR(0x56b192);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B56b194:{NFSU2_TR(0x56b194);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56b19b:{NFSU2_TR(0x56b19b);
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
B56b19e:{NFSU2_TR(0x56b19e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56b1a0:L56b1a0:{c.instructions+=3;NFSU2_TR(0x56b1a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b1a1:{NFSU2_TR(0x56b1a1);
__builtin_memmove((R+24),(R+4),4);
}
B56b1a3:{NFSU2_TR(0x56b1a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b1a8ull));
TAIL_STATIC(0x565ab0u,565);
}
B56b1a8:L56b1a8:{c.instructions+=2;NFSU2_TR(0x56b1a8);
u8 U[9];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
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
B56b1ad:{NFSU2_TR(0x56b1ad);
if(r1(R+518)){{goto L56b1b8;}}
}
B56b1af:L56b1af:{c.instructions+=2;NFSU2_TR(0x56b1af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b1b0:{NFSU2_TR(0x56b1b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b1b5ull));
TAIL_STATIC(0x575630u,575);
}
B56b1b5:L56b1b5:{c.instructions+=1;NFSU2_TR(0x56b1b5);
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
B56b1b8:L56b1b8:{c.instructions+=3;NFSU2_TR(0x56b1b8);
__builtin_memmove((R+0),(R+24),4);
}
B56b1ba:{NFSU2_TR(0x56b1ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56b1bb:{NFSU2_TR(0x56b1bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56b1c0:L56b1c0:{c.instructions+=5;NFSU2_TR(0x56b1c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56b1c4:{NFSU2_TR(0x56b1c4);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x911c0a4bull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911c0a4bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56b1c9:{NFSU2_TR(0x56b1c9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b1ca:{NFSU2_TR(0x56b1ca);
__builtin_memmove((R+24),(R+4),4);
}
B56b1cc:{NFSU2_TR(0x56b1cc);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L56b2a1;}}
}
B56b1d2:L56b1d2:{c.instructions+=1;NFSU2_TR(0x56b1d2);
if(r1(R+518)){{goto L56b282;}}
}
B56b1d8:L56b1d8:{c.instructions+=2;NFSU2_TR(0x56b1d8);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x5073ef13ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x5073ef13ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56b1dd:{NFSU2_TR(0x56b1dd);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L56b232;}}
}
B56b1df:L56b1df:{c.instructions+=1;NFSU2_TR(0x56b1df);
if(r1(R+518)){{goto L56b321;}}
}
B56b1e5:L56b1e5:{c.instructions+=2;NFSU2_TR(0x56b1e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56b1ea:{NFSU2_TR(0x56b1ea);
if(r1(R+518)){{goto L56b1fe;}}
}
B56b1ec:L56b1ec:{c.instructions+=2;NFSU2_TR(0x56b1ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x35f8620bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56b1f1:{NFSU2_TR(0x56b1f1);
if(r1(R+518)){{goto L56b226;}}
}
B56b1f3:L56b1f3:{c.instructions+=2;NFSU2_TR(0x56b1f3);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x406415e3ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x406415e3ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x406415e3ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56b1f8:{NFSU2_TR(0x56b1f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56b349;}}
}
B56b1fe:L56b1fe:{c.instructions+=5;NFSU2_TR(0x56b1fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56b201:{NFSU2_TR(0x56b201);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56b204:{NFSU2_TR(0x56b204);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b205:{NFSU2_TR(0x56b205);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B56b20b:{NFSU2_TR(0x56b20b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b210ull));
TAIL_STATIC(0x480c10u,480);
}
B56b210:L56b210:{c.instructions+=6;NFSU2_TR(0x56b210);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56b213:{NFSU2_TR(0x56b213);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56b216:{NFSU2_TR(0x56b216);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b217:{NFSU2_TR(0x56b217);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b219:{NFSU2_TR(0x56b219);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b21a:{NFSU2_TR(0x56b21a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b21full));
TAIL_STATIC(0x50d150u,50d);
}
B56b21f:L56b21f:{c.instructions+=3;NFSU2_TR(0x56b21f);
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
B56b222:{NFSU2_TR(0x56b222);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56b223:{NFSU2_TR(0x56b223);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56b226:L56b226:{c.instructions+=2;NFSU2_TR(0x56b226);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B56b229:{NFSU2_TR(0x56b229);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b22eull));
TAIL_STATIC(0x4958d0u,495);
}
B56b22e:L56b22e:{c.instructions+=2;NFSU2_TR(0x56b22e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56b22f:{NFSU2_TR(0x56b22f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56b232:L56b232:{c.instructions+=2;NFSU2_TR(0x56b232);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x72619778ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56b237:{NFSU2_TR(0x56b237);
if(r1(R+518)){{goto L56b282;}}
}
B56b239:L56b239:{c.instructions+=2;NFSU2_TR(0x56b239);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x911ab364ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x911ab364ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56b23e:{NFSU2_TR(0x56b23e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56b349;}}
}
B56b244:L56b244:{c.instructions+=2;NFSU2_TR(0x56b244);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B56b24a:{NFSU2_TR(0x56b24a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b24full));
TAIL_STATIC(0x479220u,479);
}
B56b24f:L56b24f:{c.instructions+=6;NFSU2_TR(0x56b24f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56b252:{NFSU2_TR(0x56b252);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56b255:{NFSU2_TR(0x56b255);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b256:{NFSU2_TR(0x56b256);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b258:{NFSU2_TR(0x56b258);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b259:{NFSU2_TR(0x56b259);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b25eull));
TAIL_STATIC(0x50d150u,50d);
}
B56b25e:L56b25e:{c.instructions+=5;NFSU2_TR(0x56b25e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56b261:{NFSU2_TR(0x56b261);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b263:{NFSU2_TR(0x56b263);
u8 U[4];
w4(U+0,u32(0x78fa3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b268:{NFSU2_TR(0x56b268);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b269:{NFSU2_TR(0x56b269);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b26eull));
TAIL_STATIC(0x537980u,537);
}
B56b26e:L56b26e:{c.instructions+=4;NFSU2_TR(0x56b26e);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B56b274:{NFSU2_TR(0x56b274);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B56b277:{NFSU2_TR(0x56b277);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b279:{NFSU2_TR(0x56b279);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b27eull));
TAIL_STATIC(0x480c30u,480);
}
B56b27e:L56b27e:{c.instructions+=2;NFSU2_TR(0x56b27e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56b27f:{NFSU2_TR(0x56b27f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56b282:L56b282:{c.instructions+=5;NFSU2_TR(0x56b282);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B56b288:{NFSU2_TR(0x56b288);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56b28a:{NFSU2_TR(0x56b28a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b28b:{NFSU2_TR(0x56b28b);
__builtin_memmove((R+4),(R+24),4);
}
B56b28d:{NFSU2_TR(0x56b28d);
if(r1(R+518)){{goto L56b298;}}
}
B56b28f:L56b28f:{c.instructions+=1;NFSU2_TR(0x56b28f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b294ull));
TAIL_STATIC(0x550f10u,550);
}
B56b294:L56b294:{c.instructions+=2;NFSU2_TR(0x56b294);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56b295:{NFSU2_TR(0x56b295);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56b298:L56b298:{c.instructions+=1;NFSU2_TR(0x56b298);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b29dull));
TAIL_STATIC(0x550e60u,550);
}
B56b29d:L56b29d:{c.instructions+=2;NFSU2_TR(0x56b29d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56b29e:{NFSU2_TR(0x56b29e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56b2a1:L56b2a1:{c.instructions+=2;NFSU2_TR(0x56b2a1);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xc519bfc0ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc519bfc0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56b2a6:{NFSU2_TR(0x56b2a6);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L56b313;}}
}
B56b2a8:L56b2a8:{c.instructions+=1;NFSU2_TR(0x56b2a8);
if(r1(R+518)){{goto L56b2da;}}
}
B56b2aa:L56b2aa:{c.instructions+=2;NFSU2_TR(0x56b2aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56b2af:{NFSU2_TR(0x56b2af);
if(r1(R+518)){{goto L56b2c3;}}
}
B56b2b1:L56b2b1:{c.instructions+=2;NFSU2_TR(0x56b2b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9803f6e2ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56b2b6:{NFSU2_TR(0x56b2b6);
if(r1(R+518)){{goto L56b2cf;}}
}
B56b2b8:L56b2b8:{c.instructions+=2;NFSU2_TR(0x56b2b8);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb5971bf1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56b2bd:{NFSU2_TR(0x56b2bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56b349;}}
}
B56b2c3:L56b2c3:{c.instructions+=3;NFSU2_TR(0x56b2c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b2c4:{NFSU2_TR(0x56b2c4);
__builtin_memmove((R+4),(R+24),4);
}
B56b2c6:{NFSU2_TR(0x56b2c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b2cbull));
TAIL_STATIC(0x53deb0u,53d);
}
B56b2cb:L56b2cb:{c.instructions+=2;NFSU2_TR(0x56b2cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56b2cc:{NFSU2_TR(0x56b2cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56b2cf:L56b2cf:{c.instructions+=2;NFSU2_TR(0x56b2cf);
__builtin_memmove((R+4),(R+24),4);
}
B56b2d1:{NFSU2_TR(0x56b2d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b2d6ull));
TAIL_STATIC(0x565d90u,565);
}
B56b2d6:L56b2d6:{c.instructions+=2;NFSU2_TR(0x56b2d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56b2d7:{NFSU2_TR(0x56b2d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56b2da:L56b2da:{c.instructions+=4;NFSU2_TR(0x56b2da);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56b2e0:{NFSU2_TR(0x56b2e0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56b2e2:{NFSU2_TR(0x56b2e2);
__builtin_memmove((R+4),(R+24),4);
}
B56b2e4:{NFSU2_TR(0x56b2e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56b2ed;}}
}
B56b2e6:L56b2e6:{c.instructions+=1;NFSU2_TR(0x56b2e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b2ebull));
TAIL_STATIC(0x531630u,531);
}
B56b2eb:L56b2eb:{c.instructions+=1;NFSU2_TR(0x56b2eb);
{goto L56b2f4;}
}
B56b2ed:L56b2ed:{c.instructions+=2;NFSU2_TR(0x56b2ed);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b2ef:{NFSU2_TR(0x56b2ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b2f4ull));
TAIL_STATIC(0x5316b0u,531);
}
B56b2f4:L56b2f4:{c.instructions+=4;NFSU2_TR(0x56b2f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56b2f7:{NFSU2_TR(0x56b2f7);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8380b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B56b2fe:{NFSU2_TR(0x56b2fe);
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
B56b301:{NFSU2_TR(0x56b301);
if(r1(R+518)){{goto L56b349;}}
}
B56b303:L56b303:{c.instructions+=3;NFSU2_TR(0x56b303);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B56b309:{NFSU2_TR(0x56b309);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b30a:{NFSU2_TR(0x56b30a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b30full));
TAIL_STATIC(0x458520u,458);
}
B56b30f:L56b30f:{c.instructions+=2;NFSU2_TR(0x56b30f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56b310:{NFSU2_TR(0x56b310);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56b313:L56b313:{c.instructions+=2;NFSU2_TR(0x56b313);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56b318:{NFSU2_TR(0x56b318);
if(r1(R+518)){{goto L56b32d;}}
}
B56b31a:L56b31a:{c.instructions+=2;NFSU2_TR(0x56b31a);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xd9feec59ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xd9feec59ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xd9feec59ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56b31f:{NFSU2_TR(0x56b31f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56b349;}}
}
B56b321:L56b321:{c.instructions+=3;NFSU2_TR(0x56b321);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b322:{NFSU2_TR(0x56b322);
__builtin_memmove((R+4),(R+24),4);
}
B56b324:{NFSU2_TR(0x56b324);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b329ull));
TAIL_STATIC(0x5241e0u,524);
}
B56b329:L56b329:{c.instructions+=2;NFSU2_TR(0x56b329);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56b32a:{NFSU2_TR(0x56b32a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56b32d:L56b32d:{c.instructions+=3;NFSU2_TR(0x56b32d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56b330:{NFSU2_TR(0x56b330);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56b332:{NFSU2_TR(0x56b332);
if(r1(R+518)){{goto L56b342;}}
}
B56b334:L56b334:{c.instructions+=4;NFSU2_TR(0x56b334);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56b337:{NFSU2_TR(0x56b337);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b33c:{NFSU2_TR(0x56b33c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b33d:{NFSU2_TR(0x56b33d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b342ull));
TAIL_STATIC(0x51ee80u,51e);
}
B56b342:L56b342:{c.instructions+=2;NFSU2_TR(0x56b342);
__builtin_memmove((R+4),(R+24),4);
}
B56b344:{NFSU2_TR(0x56b344);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b349ull));
TAIL_STATIC(0x524170u,524);
}
B56b349:L56b349:{c.instructions+=2;NFSU2_TR(0x56b349);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56b34a:{NFSU2_TR(0x56b34a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56b350:L56b350:{c.instructions+=8;NFSU2_TR(0x56b350);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b352:{NFSU2_TR(0x56b352);
u8 U[4];
w4(U+0,u32(0x778634ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b357:{NFSU2_TR(0x56b357);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56b35d:{NFSU2_TR(0x56b35d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b35e:{NFSU2_TR(0x56b35e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56b365:{NFSU2_TR(0x56b365);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b366:{NFSU2_TR(0x56b366);
u8 U[4];
w4(U+0,u32(0x218ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b36b:{NFSU2_TR(0x56b36b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b370ull));
TAIL_STATIC(0x575620u,575);
}
B56b370:L56b370:{c.instructions+=5;NFSU2_TR(0x56b370);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B56b373:{NFSU2_TR(0x56b373);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B56b377:{NFSU2_TR(0x56b377);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56b379:{NFSU2_TR(0x56b379);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56b381:{NFSU2_TR(0x56b381);
if(r1(R+518)){{goto L56b39e;}}
}
B56b383:L56b383:{c.instructions+=4;NFSU2_TR(0x56b383);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56b387:{NFSU2_TR(0x56b387);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b388:{NFSU2_TR(0x56b388);
__builtin_memmove((R+4),(R+0),4);
}
B56b38a:{NFSU2_TR(0x56b38a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b38full));
TAIL_STATIC(0x5678e0u,567);
}
B56b38f:L56b38f:{c.instructions+=4;NFSU2_TR(0x56b38f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56b393:{NFSU2_TR(0x56b393);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56b39a:{NFSU2_TR(0x56b39a);
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
B56b39d:{NFSU2_TR(0x56b39d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56b39e:L56b39e:{c.instructions+=5;NFSU2_TR(0x56b39e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56b3a2:{NFSU2_TR(0x56b3a2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B56b3a4:{NFSU2_TR(0x56b3a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56b3ab:{NFSU2_TR(0x56b3ab);
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
B56b3ae:{NFSU2_TR(0x56b3ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56b3b0:L56b3b0:{c.instructions+=8;NFSU2_TR(0x56b3b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b3b1:{NFSU2_TR(0x56b3b1);
__builtin_memmove((R+20),(R+16),4);
}
B56b3b3:{NFSU2_TR(0x56b3b3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b3b4:{NFSU2_TR(0x56b3b4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b3b5:{NFSU2_TR(0x56b3b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B56b3b8:{NFSU2_TR(0x56b3b8);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x251bf83eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56b3be:{NFSU2_TR(0x56b3be);
__builtin_memmove((R+24),(R+4),4);
}
B56b3c0:{NFSU2_TR(0x56b3c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56b3d2;}}
}
B56b3c2:L56b3c2:{c.instructions+=3;NFSU2_TR(0x56b3c2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x171ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56b3c9:{NFSU2_TR(0x56b3c9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x173ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56b3d0:{NFSU2_TR(0x56b3d0);
{goto L56b40e;}
}
B56b3d2:L56b3d2:{c.instructions+=2;NFSU2_TR(0x56b3d2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56b3d8:{NFSU2_TR(0x56b3d8);
if(r1(R+518)){{goto L56b3e2;}}
}
B56b3da:L56b3da:{c.instructions+=2;NFSU2_TR(0x56b3da);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56b3e0:{NFSU2_TR(0x56b3e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56b40e;}}
}
B56b3e2:L56b3e2:{c.instructions+=6;NFSU2_TR(0x56b3e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56b3e5:{NFSU2_TR(0x56b3e5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b3e6:{NFSU2_TR(0x56b3e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B56b3e9:{NFSU2_TR(0x56b3e9);
w4(R+4,u32(0x838980ull));
}
B56b3ee:{NFSU2_TR(0x56b3ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56b3f4:{NFSU2_TR(0x56b3f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b3f9ull));
TAIL_STATIC(0x521530u,521);
}
B56b3f9:L56b3f9:{c.instructions+=5;NFSU2_TR(0x56b3f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b3fa:{NFSU2_TR(0x56b3fa);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b3ff:{NFSU2_TR(0x56b3ff);
u8 U[4];
w4(U+0,u32(0x2f5e7da3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b404:{NFSU2_TR(0x56b404);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b405:{NFSU2_TR(0x56b405);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b40aull));
TAIL_STATIC(0x537b80u,537);
}
B56b40a:L56b40a:{c.instructions+=2;NFSU2_TR(0x56b40a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B56b40d:{NFSU2_TR(0x56b40d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56b40e:L56b40e:{c.instructions+=3;NFSU2_TR(0x56b40e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56b414:{NFSU2_TR(0x56b414);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56b416:{NFSU2_TR(0x56b416);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56b42c;}}
}
B56b418:L56b418:{c.instructions+=9;NFSU2_TR(0x56b418);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56b41b:{NFSU2_TR(0x56b41b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56b41e:{NFSU2_TR(0x56b41e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56b421:{NFSU2_TR(0x56b421);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b422:{NFSU2_TR(0x56b422);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b423:{NFSU2_TR(0x56b423);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b424:{NFSU2_TR(0x56b424);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b425:{NFSU2_TR(0x56b425);
__builtin_memmove((R+4),(R+24),4);
}
B56b427:{NFSU2_TR(0x56b427);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b42cull));
TAIL_STATIC(0x543d40u,543);
}
B56b42c:L56b42c:{c.instructions+=2;NFSU2_TR(0x56b42c);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x96dda9e6ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x96dda9e6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x96dda9e6ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56b432:{NFSU2_TR(0x56b432);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L56b6da;}}
}
B56b438:L56b438:{c.instructions+=1;NFSU2_TR(0x56b438);
if(r1(R+518)){{goto L56b6cd;}}
}
B56b43e:L56b43e:{c.instructions+=2;NFSU2_TR(0x56b43e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x35f8620bull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x35f8620bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56b444:{NFSU2_TR(0x56b444);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L56b653;}}
}
B56b44a:L56b44a:{c.instructions+=1;NFSU2_TR(0x56b44a);
if(r1(R+518)){{goto L56b631;}}
}
B56b450:L56b450:{c.instructions+=2;NFSU2_TR(0x56b450);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56b456:{NFSU2_TR(0x56b456);
if(r1(R+518)){{goto L56b496;}}
}
B56b458:L56b458:{c.instructions+=2;NFSU2_TR(0x56b458);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1fab5998ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56b45e:{NFSU2_TR(0x56b45e);
if(r1(R+518)){{goto L56b484;}}
}
B56b460:L56b460:{c.instructions+=2;NFSU2_TR(0x56b460);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x251bf83eull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x251bf83eull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x251bf83eull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56b466:{NFSU2_TR(0x56b466);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56b8f4;}}
}
B56b46c:L56b46c:{c.instructions+=3;NFSU2_TR(0x56b46c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56b472:{NFSU2_TR(0x56b472);
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
B56b474:{NFSU2_TR(0x56b474);
if(r1(R+518)){{goto L56b8f4;}}
}
B56b47a:L56b47a:{c.instructions+=5;NFSU2_TR(0x56b47a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56b47b:{NFSU2_TR(0x56b47b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56b47f:{NFSU2_TR(0x56b47f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56b480:{NFSU2_TR(0x56b480);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56b481:{NFSU2_TR(0x56b481);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56b484:L56b484:{c.instructions+=1;NFSU2_TR(0x56b484);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b489ull));
TAIL_STATIC(0x53a790u,53a);
}
B56b489:L56b489:{c.instructions+=2;NFSU2_TR(0x56b489);
__builtin_memmove((R+4),(R+24),4);
}
B56b48b:{NFSU2_TR(0x56b48b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b490ull));
TAIL_STATIC(0x538ca0u,538);
}
B56b490:L56b490:{c.instructions+=4;NFSU2_TR(0x56b490);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56b491:{NFSU2_TR(0x56b491);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56b492:{NFSU2_TR(0x56b492);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56b493:{NFSU2_TR(0x56b493);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56b496:L56b496:{c.instructions+=3;NFSU2_TR(0x56b496);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56b49c:{NFSU2_TR(0x56b49c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56b49e:{NFSU2_TR(0x56b49e);
if(r1(R+518)){{goto L56b4d1;}}
}
B56b4a0:L56b4a0:{c.instructions+=3;NFSU2_TR(0x56b4a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56b4a6:{NFSU2_TR(0x56b4a6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b4a7:{NFSU2_TR(0x56b4a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b4acull));
TAIL_STATIC(0x52cf60u,52c);
}
B56b4ac:L56b4ac:{c.instructions+=3;NFSU2_TR(0x56b4ac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B56b4af:{NFSU2_TR(0x56b4af);
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
B56b4b1:{NFSU2_TR(0x56b4b1);
if(r1(R+518)){{goto L56b8f4;}}
}
B56b4b7:L56b4b7:{c.instructions+=4;NFSU2_TR(0x56b4b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56b4bd:{NFSU2_TR(0x56b4bd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b4be:{NFSU2_TR(0x56b4be);
u8 U[4];
w4(U+0,u32(0xc407210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b4c3:{NFSU2_TR(0x56b4c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b4c8ull));
TAIL_STATIC(0x55dda0u,55d);
}
B56b4c8:L56b4c8:{c.instructions+=5;NFSU2_TR(0x56b4c8);
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
B56b4cb:{NFSU2_TR(0x56b4cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56b4cc:{NFSU2_TR(0x56b4cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56b4cd:{NFSU2_TR(0x56b4cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56b4ce:{NFSU2_TR(0x56b4ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56b4d1:L56b4d1:{c.instructions+=3;NFSU2_TR(0x56b4d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x173ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56b4d7:{NFSU2_TR(0x56b4d7);
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
B56b4d9:{NFSU2_TR(0x56b4d9);
if(r1(R+518)){{goto L56b8f4;}}
}
B56b4df:L56b4df:{c.instructions+=3;NFSU2_TR(0x56b4df);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x171ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56b4e5:{NFSU2_TR(0x56b4e5);
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
B56b4e7:{NFSU2_TR(0x56b4e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56b8f4;}}
}
B56b4ed:L56b4ed:{c.instructions+=5;NFSU2_TR(0x56b4ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56b4f0:{NFSU2_TR(0x56b4f0);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b4f5:{NFSU2_TR(0x56b4f5);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b4fa:{NFSU2_TR(0x56b4fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b4fb:{NFSU2_TR(0x56b4fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b500ull));
TAIL_STATIC(0x537d40u,537);
}
B56b500:L56b500:{c.instructions+=3;NFSU2_TR(0x56b500);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B56b503:{NFSU2_TR(0x56b503);
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
B56b505:{NFSU2_TR(0x56b505);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56b8f4;}}
}
B56b50b:L56b50b:{c.instructions+=5;NFSU2_TR(0x56b50b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56b50e:{NFSU2_TR(0x56b50e);
u8 U[4];
w4(U+0,u32(0x78fab8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b513:{NFSU2_TR(0x56b513);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b518:{NFSU2_TR(0x56b518);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b519:{NFSU2_TR(0x56b519);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b51eull));
TAIL_STATIC(0x537cc0u,537);
}
B56b51e:L56b51e:{c.instructions+=3;NFSU2_TR(0x56b51e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B56b521:{NFSU2_TR(0x56b521);
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
B56b523:{NFSU2_TR(0x56b523);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56b8f4;}}
}
B56b529:L56b529:{c.instructions+=4;NFSU2_TR(0x56b529);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56b52c:{NFSU2_TR(0x56b52c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B56b52f:{NFSU2_TR(0x56b52f);
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
B56b531:{NFSU2_TR(0x56b531);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56b8f4;}}
}
B56b537:L56b537:{c.instructions+=3;NFSU2_TR(0x56b537);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b539:{NFSU2_TR(0x56b539);
w4(R+4,u32(0x8392c0ull));
}
B56b53e:{NFSU2_TR(0x56b53e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b543ull));
TAIL_STATIC(0x6102f0u,610);
}
B56b543:L56b543:{c.instructions+=3;NFSU2_TR(0x56b543);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56b546:{NFSU2_TR(0x56b546);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x10005ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B56b54d:{NFSU2_TR(0x56b54d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56b584;}}
}
B56b54f:L56b54f:{c.instructions+=2;NFSU2_TR(0x56b54f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56b551:{NFSU2_TR(0x56b551);
if(r1(R+518)){{goto L56b584;}}
}
B56b553:L56b553:{c.instructions+=2;NFSU2_TR(0x56b553);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0xe0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B56b557:{NFSU2_TR(0x56b557);
if(r1(R+518)){{goto L56b584;}}
}
B56b559:L56b559:{c.instructions+=1;NFSU2_TR(0x56b559);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b55eull));
TAIL_STATIC(0x53a760u,53a);
}
B56b55e:L56b55e:{c.instructions+=5;NFSU2_TR(0x56b55e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56b561:{NFSU2_TR(0x56b561);
u8 U[4];
w4(U+0,u32(0xd104ad36ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b566:{NFSU2_TR(0x56b566);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b56b:{NFSU2_TR(0x56b56b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b56c:{NFSU2_TR(0x56b56c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b571ull));
TAIL_STATIC(0x558430u,558);
}
B56b571:L56b571:{c.instructions+=6;NFSU2_TR(0x56b571);
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
B56b574:{NFSU2_TR(0x56b574);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56b575:{NFSU2_TR(0x56b575);
s4(0x838970,u32(0x34dc1becull));
}
B56b57f:{NFSU2_TR(0x56b57f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56b580:{NFSU2_TR(0x56b580);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56b581:{NFSU2_TR(0x56b581);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56b584:L56b584:{c.instructions+=3;NFSU2_TR(0x56b584);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56b587:{NFSU2_TR(0x56b587);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56b589:{NFSU2_TR(0x56b589);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56b607;}}
}
B56b58b:L56b58b:{c.instructions+=2;NFSU2_TR(0x56b58b);
__builtin_memmove((R+4),(R+24),4);
}
B56b58d:{NFSU2_TR(0x56b58d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b592ull));
TAIL_STATIC(0x53a7c0u,53a);
}
B56b592:L56b592:{c.instructions+=2;NFSU2_TR(0x56b592);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56b594:{NFSU2_TR(0x56b594);
if(r1(R+518)){{goto L56b607;}}
}
B56b596:L56b596:{c.instructions+=2;NFSU2_TR(0x56b596);
__builtin_memmove((R+4),(R+24),4);
}
B56b598:{NFSU2_TR(0x56b598);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b59dull));
TAIL_STATIC(0x53a890u,53a);
}
B56b59d:L56b59d:{c.instructions+=2;NFSU2_TR(0x56b59d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56b59f:{NFSU2_TR(0x56b59f);
if(r1(R+518)){{goto L56b5ee;}}
}
B56b5a1:L56b5a1:{c.instructions+=1;NFSU2_TR(0x56b5a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b5a6ull));
TAIL_STATIC(0x53a760u,53a);
}
B56b5a6:L56b5a6:{c.instructions+=11;NFSU2_TR(0x56b5a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56b5a9:{NFSU2_TR(0x56b5a9);
u8 U[4];
w4(U+0,u32(0x10b83327ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b5ae:{NFSU2_TR(0x56b5ae);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b5b0:{NFSU2_TR(0x56b5b0);
u8 U[4];
w4(U+0,u32(0x1fab5998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b5b5:{NFSU2_TR(0x56b5b5);
u8 U[4];
w4(U+0,u32(0x1fab5998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b5ba:{NFSU2_TR(0x56b5ba);
u8 U[4];
w4(U+0,u32(0xd05fc3a3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b5bf:{NFSU2_TR(0x56b5bf);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b5c4:{NFSU2_TR(0x56b5c4);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b5c9:{NFSU2_TR(0x56b5c9);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b5ce:{NFSU2_TR(0x56b5ce);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b5cf:{NFSU2_TR(0x56b5cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b5d4ull));
TAIL_STATIC(0x558790u,558);
}
B56b5d4:L56b5d4:{c.instructions+=4;NFSU2_TR(0x56b5d4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B56b5d7:{NFSU2_TR(0x56b5d7);
__builtin_memmove((R+4),(R+24),4);
}
B56b5d9:{NFSU2_TR(0x56b5d9);
s4(0x838970,u32(0x1fab5998ull));
}
B56b5e3:{NFSU2_TR(0x56b5e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b5e8ull));
TAIL_STATIC(0x538c00u,538);
}
B56b5e8:L56b5e8:{c.instructions+=4;NFSU2_TR(0x56b5e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56b5e9:{NFSU2_TR(0x56b5e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56b5ea:{NFSU2_TR(0x56b5ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56b5eb:{NFSU2_TR(0x56b5eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56b5ee:L56b5ee:{c.instructions+=2;NFSU2_TR(0x56b5ee);
__builtin_memmove((R+4),(R+24),4);
}
B56b5f0:{NFSU2_TR(0x56b5f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b5f5ull));
TAIL_STATIC(0x55fe90u,55f);
}
B56b5f5:L56b5f5:{c.instructions+=3;NFSU2_TR(0x56b5f5);
u8 U[4];
w4(U+0,u32(0xc407210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b5fa:{NFSU2_TR(0x56b5fa);
__builtin_memmove((R+4),(R+24),4);
}
B56b5fc:{NFSU2_TR(0x56b5fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b601ull));
TAIL_STATIC(0x5682a0u,568);
}
B56b601:L56b601:{c.instructions+=4;NFSU2_TR(0x56b601);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56b602:{NFSU2_TR(0x56b602);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56b603:{NFSU2_TR(0x56b603);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56b604:{NFSU2_TR(0x56b604);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56b607:L56b607:{c.instructions+=3;NFSU2_TR(0x56b607);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56b60d:{NFSU2_TR(0x56b60d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56b60f:{NFSU2_TR(0x56b60f);
if(r1(R+518)){{goto L56b61f;}}
}
B56b611:L56b611:{c.instructions+=4;NFSU2_TR(0x56b611);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56b614:{NFSU2_TR(0x56b614);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b616:{NFSU2_TR(0x56b616);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b617:{NFSU2_TR(0x56b617);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b61cull));
TAIL_STATIC(0x51de60u,51d);
}
B56b61c:L56b61c:{c.instructions+=1;NFSU2_TR(0x56b61c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B56b61f:L56b61f:{c.instructions+=3;NFSU2_TR(0x56b61f);
u8 U[4];
w4(U+0,u32(0xc407210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b624:{NFSU2_TR(0x56b624);
__builtin_memmove((R+4),(R+24),4);
}
B56b626:{NFSU2_TR(0x56b626);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b62bull));
TAIL_STATIC(0x5682a0u,568);
}
B56b62b:L56b62b:{c.instructions+=4;NFSU2_TR(0x56b62b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56b62c:{NFSU2_TR(0x56b62c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56b62d:{NFSU2_TR(0x56b62d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56b62e:{NFSU2_TR(0x56b62e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56b631:L56b631:{c.instructions+=3;NFSU2_TR(0x56b631);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b633:{NFSU2_TR(0x56b633);
w4(R+4,u32(0x8635bcull));
}
B56b638:{NFSU2_TR(0x56b638);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b63dull));
TAIL_STATIC(0x5243d0u,524);
}
B56b63d:L56b63d:{c.instructions+=3;NFSU2_TR(0x56b63d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56b641:{NFSU2_TR(0x56b641);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x173ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56b648:{NFSU2_TR(0x56b648);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b64dull));
TAIL_STATIC(0x53a790u,53a);
}
B56b64d:L56b64d:{c.instructions+=4;NFSU2_TR(0x56b64d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56b64e:{NFSU2_TR(0x56b64e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56b64f:{NFSU2_TR(0x56b64f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56b650:{NFSU2_TR(0x56b650);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56b653:L56b653:{c.instructions+=2;NFSU2_TR(0x56b653);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56b659:{NFSU2_TR(0x56b659);
if(r1(R+518)){{goto L56b667;}}
}
B56b65b:L56b65b:{c.instructions+=2;NFSU2_TR(0x56b65b);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x9120409eull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x9120409eull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x9120409eull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56b661:{NFSU2_TR(0x56b661);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56b8f4;}}
}
B56b667:L56b667:{c.instructions+=3;NFSU2_TR(0x56b667);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x173ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56b66d:{NFSU2_TR(0x56b66d);
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
B56b66f:{NFSU2_TR(0x56b66f);
if(r1(R+518)){{goto L56b8f4;}}
}
B56b675:L56b675:{c.instructions+=3;NFSU2_TR(0x56b675);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x171ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56b67b:{NFSU2_TR(0x56b67b);
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
B56b67d:{NFSU2_TR(0x56b67d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56b8f4;}}
}
B56b683:L56b683:{c.instructions+=5;NFSU2_TR(0x56b683);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56b686:{NFSU2_TR(0x56b686);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b68b:{NFSU2_TR(0x56b68b);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b690:{NFSU2_TR(0x56b690);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b691:{NFSU2_TR(0x56b691);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b696ull));
TAIL_STATIC(0x537d40u,537);
}
B56b696:L56b696:{c.instructions+=3;NFSU2_TR(0x56b696);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B56b699:{NFSU2_TR(0x56b699);
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
B56b69b:{NFSU2_TR(0x56b69b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56b8f4;}}
}
B56b6a1:L56b6a1:{c.instructions+=5;NFSU2_TR(0x56b6a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56b6a4:{NFSU2_TR(0x56b6a4);
u8 U[4];
w4(U+0,u32(0x78fab8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b6a9:{NFSU2_TR(0x56b6a9);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b6ae:{NFSU2_TR(0x56b6ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b6af:{NFSU2_TR(0x56b6af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b6b4ull));
TAIL_STATIC(0x537cc0u,537);
}
B56b6b4:L56b6b4:{c.instructions+=3;NFSU2_TR(0x56b6b4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B56b6b7:{NFSU2_TR(0x56b6b7);
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
B56b6b9:{NFSU2_TR(0x56b6b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56b8f4;}}
}
B56b6bf:L56b6bf:{c.instructions+=3;NFSU2_TR(0x56b6bf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b6c0:{NFSU2_TR(0x56b6c0);
__builtin_memmove((R+4),(R+24),4);
}
B56b6c2:{NFSU2_TR(0x56b6c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b6c7ull));
TAIL_STATIC(0x5682a0u,568);
}
B56b6c7:L56b6c7:{c.instructions+=4;NFSU2_TR(0x56b6c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56b6c8:{NFSU2_TR(0x56b6c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56b6c9:{NFSU2_TR(0x56b6c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56b6ca:{NFSU2_TR(0x56b6ca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56b6cd:L56b6cd:{c.instructions+=5;NFSU2_TR(0x56b6cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56b6ce:{NFSU2_TR(0x56b6ce);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x171ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56b6d5:{NFSU2_TR(0x56b6d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56b6d6:{NFSU2_TR(0x56b6d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56b6d7:{NFSU2_TR(0x56b6d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56b6da:L56b6da:{c.instructions+=2;NFSU2_TR(0x56b6da);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0xd05fc3a3ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xd05fc3a3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56b6e0:{NFSU2_TR(0x56b6e0);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L56b87d;}}
}
B56b6e6:L56b6e6:{c.instructions+=1;NFSU2_TR(0x56b6e6);
if(r1(R+518)){{goto L56b7fd;}}
}
B56b6ec:L56b6ec:{c.instructions+=2;NFSU2_TR(0x56b6ec);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9fbbd1d4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56b6f2:{NFSU2_TR(0x56b6f2);
if(r1(R+518)){{goto L56b7a7;}}
}
B56b6f8:L56b6f8:{c.instructions+=2;NFSU2_TR(0x56b6f8);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56b6fe:{NFSU2_TR(0x56b6fe);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56b667u);}goto L56b667;}}
}
B56b704:L56b704:{c.instructions+=2;NFSU2_TR(0x56b704);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xc519bfc0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xc519bfc0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xc519bfc0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56b70a:{NFSU2_TR(0x56b70a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56b8f4;}}
}
B56b710:L56b710:{c.instructions+=3;NFSU2_TR(0x56b710);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56b716:{NFSU2_TR(0x56b716);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56b718:{NFSU2_TR(0x56b718);
if(r1(R+518)){{goto L56b730;}}
}
B56b71a:L56b71a:{c.instructions+=4;NFSU2_TR(0x56b71a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56b720:{NFSU2_TR(0x56b720);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b721:{NFSU2_TR(0x56b721);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b722:{NFSU2_TR(0x56b722);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b727ull));
TAIL_STATIC(0x55dda0u,55d);
}
B56b727:L56b727:{c.instructions+=5;NFSU2_TR(0x56b727);
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
B56b72a:{NFSU2_TR(0x56b72a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56b72b:{NFSU2_TR(0x56b72b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56b72c:{NFSU2_TR(0x56b72c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56b72d:{NFSU2_TR(0x56b72d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56b730:L56b730:{c.instructions+=3;NFSU2_TR(0x56b730);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x173ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56b736:{NFSU2_TR(0x56b736);
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
B56b738:{NFSU2_TR(0x56b738);
if(r1(R+518)){{goto L56b8f4;}}
}
B56b73e:L56b73e:{c.instructions+=3;NFSU2_TR(0x56b73e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x171ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56b744:{NFSU2_TR(0x56b744);
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
B56b746:{NFSU2_TR(0x56b746);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56b8f4;}}
}
B56b74c:L56b74c:{c.instructions+=4;NFSU2_TR(0x56b74c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56b74f:{NFSU2_TR(0x56b74f);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56b752:{NFSU2_TR(0x56b752);
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
B56b754:{NFSU2_TR(0x56b754);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56b8f4;}}
}
B56b75a:L56b75a:{c.instructions+=1;NFSU2_TR(0x56b75a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b75full));
TAIL_STATIC(0x53a760u,53a);
}
B56b75f:L56b75f:{c.instructions+=11;NFSU2_TR(0x56b75f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56b762:{NFSU2_TR(0x56b762);
u8 U[4];
w4(U+0,u32(0x30f7037full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b767:{NFSU2_TR(0x56b767);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b769:{NFSU2_TR(0x56b769);
u8 U[4];
w4(U+0,u32(0x1fab5998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b76e:{NFSU2_TR(0x56b76e);
u8 U[4];
w4(U+0,u32(0x1fab5998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b773:{NFSU2_TR(0x56b773);
u8 U[4];
w4(U+0,u32(0xe75749d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b778:{NFSU2_TR(0x56b778);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b77d:{NFSU2_TR(0x56b77d);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b782:{NFSU2_TR(0x56b782);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b787:{NFSU2_TR(0x56b787);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b788:{NFSU2_TR(0x56b788);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b78dull));
TAIL_STATIC(0x558790u,558);
}
B56b78d:L56b78d:{c.instructions+=4;NFSU2_TR(0x56b78d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B56b790:{NFSU2_TR(0x56b790);
__builtin_memmove((R+4),(R+24),4);
}
B56b792:{NFSU2_TR(0x56b792);
s4(0x838970,u32(0x1fab5998ull));
}
B56b79c:{NFSU2_TR(0x56b79c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b7a1ull));
TAIL_STATIC(0x538c00u,538);
}
B56b7a1:L56b7a1:{c.instructions+=4;NFSU2_TR(0x56b7a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56b7a2:{NFSU2_TR(0x56b7a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56b7a3:{NFSU2_TR(0x56b7a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56b7a4:{NFSU2_TR(0x56b7a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56b7a7:L56b7a7:{c.instructions+=4;NFSU2_TR(0x56b7a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56b7ad:{NFSU2_TR(0x56b7ad);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56b7af:{NFSU2_TR(0x56b7af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56b7b9:{NFSU2_TR(0x56b7b9);
if(r1(R+518)){{goto L56b7e4;}}
}
B56b7bb:L56b7bb:{c.instructions+=5;NFSU2_TR(0x56b7bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56b7be:{NFSU2_TR(0x56b7be);
u8 U[4];
w4(U+0,u32(0xdf422345ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b7c3:{NFSU2_TR(0x56b7c3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b7c4:{NFSU2_TR(0x56b7c4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56b7cb:{NFSU2_TR(0x56b7cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b7d0ull));
TAIL_STATIC(0x495520u,495);
}
B56b7d0:L56b7d0:{c.instructions+=5;NFSU2_TR(0x56b7d0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B56b7d3:{NFSU2_TR(0x56b7d3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56b7d7:{NFSU2_TR(0x56b7d7);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B56b7dd:{NFSU2_TR(0x56b7dd);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b7df:{NFSU2_TR(0x56b7df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b7e4ull));
TAIL_STATIC(0x458520u,458);
}
B56b7e4:L56b7e4:{c.instructions+=6;NFSU2_TR(0x56b7e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56b7e7:{NFSU2_TR(0x56b7e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56b7ea:{NFSU2_TR(0x56b7ea);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B56b7f0:{NFSU2_TR(0x56b7f0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b7f1:{NFSU2_TR(0x56b7f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b7f2:{NFSU2_TR(0x56b7f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b7f7ull));
TAIL_STATIC(0x54e6e0u,54e);
}
B56b7f7:L56b7f7:{c.instructions+=4;NFSU2_TR(0x56b7f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56b7f8:{NFSU2_TR(0x56b7f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56b7f9:{NFSU2_TR(0x56b7f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56b7fa:{NFSU2_TR(0x56b7fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56b7fd:L56b7fd:{c.instructions+=3;NFSU2_TR(0x56b7fd);
__builtin_memmove((R+4),gp(0x7fa1e0),4);
}
B56b803:{NFSU2_TR(0x56b803);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b804:{NFSU2_TR(0x56b804);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b809ull));
TAIL_STATIC(0x52cef0u,52c);
}
B56b809:L56b809:{c.instructions+=3;NFSU2_TR(0x56b809);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B56b80c:{NFSU2_TR(0x56b80c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56b80e:{NFSU2_TR(0x56b80e);
if(r1(R+518)){{goto L56b821;}}
}
B56b810:L56b810:{c.instructions+=5;NFSU2_TR(0x56b810);
w4(R+4,u32(0xffull));
}
B56b815:{NFSU2_TR(0x56b815);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56b818:{NFSU2_TR(0x56b818);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56b81b:{NFSU2_TR(0x56b81b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56b81e:{NFSU2_TR(0x56b81e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56b821:L56b821:{c.instructions+=2;NFSU2_TR(0x56b821);
__builtin_memmove((R+4),(R+24),4);
}
B56b823:{NFSU2_TR(0x56b823);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b828ull));
TAIL_STATIC(0x55fe90u,55f);
}
B56b828:L56b828:{c.instructions+=9;NFSU2_TR(0x56b828);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56b82e:{NFSU2_TR(0x56b82e);
__builtin_memmove((R+8),(R+0),4);
}
B56b830:{NFSU2_TR(0x56b830);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B56b833:{NFSU2_TR(0x56b833);
u8 U[16];
w4(U+0,u32(u32(u32(0x158ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B56b83a:{NFSU2_TR(0x56b83a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56b83d:{NFSU2_TR(0x56b83d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56b840:{NFSU2_TR(0x56b840);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56b846:{NFSU2_TR(0x56b846);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B56b849:{NFSU2_TR(0x56b849);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b84eull));
TAIL_STATIC(0x52f390u,52f);
}
B56b84e:L56b84e:{c.instructions+=6;NFSU2_TR(0x56b84e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56b851:{NFSU2_TR(0x56b851);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b853:{NFSU2_TR(0x56b853);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b858:{NFSU2_TR(0x56b858);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b85d:{NFSU2_TR(0x56b85d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b85e:{NFSU2_TR(0x56b85e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b863ull));
TAIL_STATIC(0x537c60u,537);
}
B56b863:L56b863:{c.instructions+=7;NFSU2_TR(0x56b863);
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
B56b866:{NFSU2_TR(0x56b866);
s1(0x7fa1fc,u8(0x1ull));
}
B56b86d:{NFSU2_TR(0x56b86d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56b86e:{NFSU2_TR(0x56b86e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
w4(U+4,u32(0x799c30ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56b878:{NFSU2_TR(0x56b878);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56b879:{NFSU2_TR(0x56b879);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56b87a:{NFSU2_TR(0x56b87a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56b87d:L56b87d:{c.instructions+=2;NFSU2_TR(0x56b87d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xe1fde1d1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56b883:{NFSU2_TR(0x56b883);
if(r1(R+518)){{goto L56b8a6;}}
}
B56b885:L56b885:{c.instructions+=2;NFSU2_TR(0x56b885);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xe75749d4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xe75749d4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xe75749d4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56b88b:{NFSU2_TR(0x56b88b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56b8f4;}}
}
B56b88d:L56b88d:{c.instructions+=1;NFSU2_TR(0x56b88d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b892ull));
TAIL_STATIC(0x53a790u,53a);
}
B56b892:L56b892:{c.instructions+=2;NFSU2_TR(0x56b892);
__builtin_memmove((R+4),(R+24),4);
}
B56b894:{NFSU2_TR(0x56b894);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b899ull));
TAIL_STATIC(0x55ff70u,55f);
}
B56b899:L56b899:{c.instructions+=2;NFSU2_TR(0x56b899);
__builtin_memmove((R+4),(R+24),4);
}
B56b89b:{NFSU2_TR(0x56b89b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b8a0ull));
TAIL_STATIC(0x538ca0u,538);
}
B56b8a0:L56b8a0:{c.instructions+=4;NFSU2_TR(0x56b8a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56b8a1:{NFSU2_TR(0x56b8a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56b8a2:{NFSU2_TR(0x56b8a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56b8a3:{NFSU2_TR(0x56b8a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56b8a6:L56b8a6:{c.instructions+=3;NFSU2_TR(0x56b8a6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56b8ac:{NFSU2_TR(0x56b8ac);
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
B56b8ae:{NFSU2_TR(0x56b8ae);
if(r1(R+518)){{goto L56b8ce;}}
}
B56b8b0:L56b8b0:{c.instructions+=1;NFSU2_TR(0x56b8b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b8b5ull));
TAIL_STATIC(0x54f980u,54f);
}
B56b8b5:L56b8b5:{c.instructions+=2;NFSU2_TR(0x56b8b5);
__builtin_memmove((R+4),(R+0),4);
}
B56b8b7:{NFSU2_TR(0x56b8b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b8bcull));
TAIL_STATIC(0x55bdf0u,55b);
}
B56b8bc:L56b8bc:{c.instructions+=3;NFSU2_TR(0x56b8bc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b8be:{NFSU2_TR(0x56b8be);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b8c0:{NFSU2_TR(0x56b8c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b8c5ull));
TAIL_STATIC(0x4c2140u,4c2);
}
B56b8c5:L56b8c5:{c.instructions+=5;NFSU2_TR(0x56b8c5);
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
B56b8c8:{NFSU2_TR(0x56b8c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56b8c9:{NFSU2_TR(0x56b8c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56b8ca:{NFSU2_TR(0x56b8ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56b8cb:{NFSU2_TR(0x56b8cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56b8ce:L56b8ce:{c.instructions+=4;NFSU2_TR(0x56b8ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56b8d0:{NFSU2_TR(0x56b8d0);
__builtin_memmove((R+4),(R+24),4);
}
B56b8d2:{NFSU2_TR(0x56b8d2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x172ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56b8d9:{NFSU2_TR(0x56b8d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b8dcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B56b8dc:L56b8dc:{c.instructions+=6;NFSU2_TR(0x56b8dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56b8df:{NFSU2_TR(0x56b8df);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b8e1:{NFSU2_TR(0x56b8e1);
u8 U[4];
w4(U+0,u32(0x78fab8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b8e6:{NFSU2_TR(0x56b8e6);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b8eb:{NFSU2_TR(0x56b8eb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b8ec:{NFSU2_TR(0x56b8ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b8f1ull));
TAIL_STATIC(0x537c00u,537);
}
B56b8f1:L56b8f1:{c.instructions+=1;NFSU2_TR(0x56b8f1);
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
B56b8f4:L56b8f4:{c.instructions+=4;NFSU2_TR(0x56b8f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56b8f5:{NFSU2_TR(0x56b8f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56b8f6:{NFSU2_TR(0x56b8f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56b8f7:{NFSU2_TR(0x56b8f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56b900:L56b900:{c.instructions+=8;NFSU2_TR(0x56b900);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b902:{NFSU2_TR(0x56b902);
u8 U[4];
w4(U+0,u32(0x778654ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b907:{NFSU2_TR(0x56b907);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56b90d:{NFSU2_TR(0x56b90d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b90e:{NFSU2_TR(0x56b90e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56b915:{NFSU2_TR(0x56b915);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b916:{NFSU2_TR(0x56b916);
u8 U[4];
w4(U+0,u32(0x11cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b91b:{NFSU2_TR(0x56b91b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b920ull));
TAIL_STATIC(0x575620u,575);
}
B56b920:L56b920:{c.instructions+=5;NFSU2_TR(0x56b920);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B56b923:{NFSU2_TR(0x56b923);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B56b927:{NFSU2_TR(0x56b927);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56b929:{NFSU2_TR(0x56b929);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56b931:{NFSU2_TR(0x56b931);
if(r1(R+518)){{goto L56b94e;}}
}
B56b933:L56b933:{c.instructions+=4;NFSU2_TR(0x56b933);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56b937:{NFSU2_TR(0x56b937);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b938:{NFSU2_TR(0x56b938);
__builtin_memmove((R+4),(R+0),4);
}
B56b93a:{NFSU2_TR(0x56b93a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b93full));
TAIL_STATIC(0x568450u,568);
}
B56b93f:L56b93f:{c.instructions+=4;NFSU2_TR(0x56b93f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56b943:{NFSU2_TR(0x56b943);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56b94a:{NFSU2_TR(0x56b94a);
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
B56b94d:{NFSU2_TR(0x56b94d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56b94e:L56b94e:{c.instructions+=5;NFSU2_TR(0x56b94e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56b952:{NFSU2_TR(0x56b952);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B56b954:{NFSU2_TR(0x56b954);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56b95b:{NFSU2_TR(0x56b95b);
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
B56b95e:{NFSU2_TR(0x56b95e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56b960:L56b960:{c.instructions+=9;NFSU2_TR(0x56b960);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b961:{NFSU2_TR(0x56b961);
__builtin_memmove((R+20),(R+16),4);
}
B56b963:{NFSU2_TR(0x56b963);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56b966:{NFSU2_TR(0x56b966);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x9803f6e2ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9803f6e2ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56b96b:{NFSU2_TR(0x56b96b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b96c:{NFSU2_TR(0x56b96c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b96d:{NFSU2_TR(0x56b96d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b96e:{NFSU2_TR(0x56b96e);
__builtin_memmove((R+24),(R+4),4);
}
B56b970:{NFSU2_TR(0x56b970);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L56bdf1;}}
}
B56b976:L56b976:{c.instructions+=1;NFSU2_TR(0x56b976);
if(r1(R+518)){{goto L56bd77;}}
}
B56b97c:L56b97c:{c.instructions+=2;NFSU2_TR(0x56b97c);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x35f8620bull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x35f8620bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56b981:{NFSU2_TR(0x56b981);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L56bd24;}}
}
B56b987:L56b987:{c.instructions+=1;NFSU2_TR(0x56b987);
if(r1(R+518)){{goto L56bca8;}}
}
B56b98d:L56b98d:{c.instructions+=2;NFSU2_TR(0x56b98d);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x251bf83eull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x251bf83eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56b992:{NFSU2_TR(0x56b992);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L56bc96;}}
}
B56b998:L56b998:{c.instructions+=1;NFSU2_TR(0x56b998);
if(r1(R+518)){{goto L56bc69;}}
}
B56b99e:L56b99e:{c.instructions+=2;NFSU2_TR(0x56b99e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56b9a3:{NFSU2_TR(0x56b9a3);
if(r1(R+518)){{goto L56b9ec;}}
}
B56b9a5:L56b9a5:{c.instructions+=2;NFSU2_TR(0x56b9a5);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x1fab5998ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1fab5998ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x1fab5998ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56b9aa:{NFSU2_TR(0x56b9aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56bf62;}}
}
B56b9b0:L56b9b0:{c.instructions+=6;NFSU2_TR(0x56b9b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56b9b3:{NFSU2_TR(0x56b9b3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b9b5:{NFSU2_TR(0x56b9b5);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b9ba:{NFSU2_TR(0x56b9ba);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b9bf:{NFSU2_TR(0x56b9bf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b9c0:{NFSU2_TR(0x56b9c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b9c5ull));
TAIL_STATIC(0x537c00u,537);
}
B56b9c5:L56b9c5:{c.instructions+=3;NFSU2_TR(0x56b9c5);
u8 U[4];
w4(U+0,u32(0x799c64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b9ca:{NFSU2_TR(0x56b9ca);
u8 U[4];
w4(U+0,u32(0x251bf83eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b9cf:{NFSU2_TR(0x56b9cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b9d4ull));
TAIL_STATIC(0x55dda0u,55d);
}
B56b9d4:L56b9d4:{c.instructions+=5;NFSU2_TR(0x56b9d4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B56b9d7:{NFSU2_TR(0x56b9d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56b9da:{NFSU2_TR(0x56b9da);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56b9dc:{NFSU2_TR(0x56b9dc);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56b9e0:{NFSU2_TR(0x56b9e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56b9e5ull));
TAIL_STATIC(0x52eb90u,52e);
}
B56b9e5:L56b9e5:{c.instructions+=5;NFSU2_TR(0x56b9e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56b9e6:{NFSU2_TR(0x56b9e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56b9e7:{NFSU2_TR(0x56b9e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56b9e8:{NFSU2_TR(0x56b9e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56b9e9:{NFSU2_TR(0x56b9e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56b9ec:L56b9ec:{c.instructions+=3;NFSU2_TR(0x56b9ec);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x111ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56b9f2:{NFSU2_TR(0x56b9f2);
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
B56b9f4:{NFSU2_TR(0x56b9f4);
if(r1(R+518)){{goto L56bf62;}}
}
B56b9fa:L56b9fa:{c.instructions+=3;NFSU2_TR(0x56b9fa);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56ba00:{NFSU2_TR(0x56ba00);
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
B56ba02:{NFSU2_TR(0x56ba02);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56bf62;}}
}
B56ba08:L56ba08:{c.instructions+=5;NFSU2_TR(0x56ba08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56ba0b:{NFSU2_TR(0x56ba0b);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ba10:{NFSU2_TR(0x56ba10);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ba15:{NFSU2_TR(0x56ba15);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ba16:{NFSU2_TR(0x56ba16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ba1bull));
TAIL_STATIC(0x537d40u,537);
}
B56ba1b:L56ba1b:{c.instructions+=3;NFSU2_TR(0x56ba1b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B56ba1e:{NFSU2_TR(0x56ba1e);
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
B56ba20:{NFSU2_TR(0x56ba20);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56bf62;}}
}
B56ba26:L56ba26:{c.instructions+=2;NFSU2_TR(0x56ba26);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ba2b:{NFSU2_TR(0x56ba2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ba30ull));
TAIL_STATIC(0x52cf60u,52c);
}
B56ba30:L56ba30:{c.instructions+=3;NFSU2_TR(0x56ba30);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B56ba33:{NFSU2_TR(0x56ba33);
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
B56ba35:{NFSU2_TR(0x56ba35);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56bf62;}}
}
B56ba3b:L56ba3b:{c.instructions+=4;NFSU2_TR(0x56ba3b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56ba3e:{NFSU2_TR(0x56ba3e);
__builtin_memmove((R+4),(R+12),4);
}
B56ba40:{NFSU2_TR(0x56ba40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56ba43:{NFSU2_TR(0x56ba43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ba48ull));
TAIL_STATIC(0x51f7e0u,51f);
}
B56ba48:L56ba48:{c.instructions+=2;NFSU2_TR(0x56ba48);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56ba4b:{NFSU2_TR(0x56ba4b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56bb26;}}
}
B56ba51:L56ba51:{c.instructions+=4;NFSU2_TR(0x56ba51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56ba54:{NFSU2_TR(0x56ba54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ba55:{NFSU2_TR(0x56ba55);
w4(R+4,u32(0x838980ull));
}
B56ba5a:{NFSU2_TR(0x56ba5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ba5full));
TAIL_STATIC(0x50f0b0u,50f);
}
B56ba5f:L56ba5f:{c.instructions+=2;NFSU2_TR(0x56ba5f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56ba61:{NFSU2_TR(0x56ba61);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56bab0;}}
}
B56ba63:L56ba63:{c.instructions+=3;NFSU2_TR(0x56ba63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56ba66:{NFSU2_TR(0x56ba66);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x61ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x61ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B56ba69:{NFSU2_TR(0x56ba69);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L56ba8e;}}
}
B56ba6b:L56ba6b:{c.instructions+=2;NFSU2_TR(0x56ba6b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x98ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x98ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56ba71:{NFSU2_TR(0x56ba71);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L56ba8e;}}
}
B56ba73:L56ba73:{c.instructions+=3;NFSU2_TR(0x56ba73);
__builtin_memmove((R+0),gp(0x8389c8),4);
}
B56ba78:{NFSU2_TR(0x56ba78);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8389c8ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56ba7d:{NFSU2_TR(0x56ba7d);
if(r1(R+518)){{goto L56ba8e;}}
}
B56ba7f:L56ba7f:{c.instructions+=1;NFSU2_TR(0x56ba7f);
}
B56ba80:L56ba80:{c.instructions+=2;NFSU2_TR(0x56ba80);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B56ba83:{NFSU2_TR(0x56ba83);
if(r1(R+518)){{goto L56bab0;}}
}
B56ba85:L56ba85:{c.instructions+=3;NFSU2_TR(0x56ba85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56ba87:{NFSU2_TR(0x56ba87);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8389c8ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56ba8c:{NFSU2_TR(0x56ba8c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56ba80u);}goto L56ba80;}}
}
B56ba8e:L56ba8e:{c.instructions+=5;NFSU2_TR(0x56ba8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56ba91:{NFSU2_TR(0x56ba91);
u8 U[4];
w4(U+0,u32(0x91bb4eaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ba96:{NFSU2_TR(0x56ba96);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ba9b:{NFSU2_TR(0x56ba9b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ba9c:{NFSU2_TR(0x56ba9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56baa1ull));
TAIL_STATIC(0x558430u,558);
}
B56baa1:L56baa1:{c.instructions+=3;NFSU2_TR(0x56baa1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B56baa4:{NFSU2_TR(0x56baa4);
s4(0x838970,u32(0x34dc1becull));
}
B56baae:{NFSU2_TR(0x56baae);
{goto L56baeb;}
}
B56bab0:L56bab0:{c.instructions+=11;NFSU2_TR(0x56bab0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56bab3:{NFSU2_TR(0x56bab3);
u8 U[4];
w4(U+0,u32(0x74e34714ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bab8:{NFSU2_TR(0x56bab8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56baba:{NFSU2_TR(0x56baba);
u8 U[4];
w4(U+0,u32(0x1fab5998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56babf:{NFSU2_TR(0x56babf);
u8 U[4];
w4(U+0,u32(0x1fab5998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bac4:{NFSU2_TR(0x56bac4);
u8 U[4];
w4(U+0,u32(0xe75749d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bac9:{NFSU2_TR(0x56bac9);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bace:{NFSU2_TR(0x56bace);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bad3:{NFSU2_TR(0x56bad3);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bad8:{NFSU2_TR(0x56bad8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bad9:{NFSU2_TR(0x56bad9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56badeull));
TAIL_STATIC(0x558790u,558);
}
B56bade:L56bade:{c.instructions+=2;NFSU2_TR(0x56bade);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B56bae1:{NFSU2_TR(0x56bae1);
s4(0x838970,u32(0x1fab5998ull));
}
B56baeb:L56baeb:{c.instructions+=3;NFSU2_TR(0x56baeb);
u8 U[4];
w4(U+0,u32(0x799c64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56baf0:{NFSU2_TR(0x56baf0);
u8 U[4];
w4(U+0,u32(0x96dda9e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56baf5:{NFSU2_TR(0x56baf5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56bafaull));
TAIL_STATIC(0x55dda0u,55d);
}
B56bafa:L56bafa:{c.instructions+=6;NFSU2_TR(0x56bafa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56bafd:{NFSU2_TR(0x56bafd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56baff:{NFSU2_TR(0x56baff);
u8 U[4];
w4(U+0,u32(0x78fef4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bb04:{NFSU2_TR(0x56bb04);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bb09:{NFSU2_TR(0x56bb09);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bb0a:{NFSU2_TR(0x56bb0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56bb0full));
TAIL_STATIC(0x537c00u,537);
}
B56bb0f:L56bb0f:{c.instructions+=5;NFSU2_TR(0x56bb0f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B56bb12:{NFSU2_TR(0x56bb12);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bb14:{NFSU2_TR(0x56bb14);
__builtin_memmove((R+4),(R+12),4);
}
B56bb16:{NFSU2_TR(0x56bb16);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2full))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56bb1a:{NFSU2_TR(0x56bb1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56bb1full));
TAIL_STATIC(0x52eb90u,52e);
}
B56bb1f:L56bb1f:{c.instructions+=5;NFSU2_TR(0x56bb1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56bb20:{NFSU2_TR(0x56bb20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56bb21:{NFSU2_TR(0x56bb21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56bb22:{NFSU2_TR(0x56bb22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56bb23:{NFSU2_TR(0x56bb23);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56bb26:L56bb26:{c.instructions+=7;NFSU2_TR(0x56bb26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56bb29:{NFSU2_TR(0x56bb29);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B56bb2c:{NFSU2_TR(0x56bb2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56bb2f:{NFSU2_TR(0x56bb2f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bb30:{NFSU2_TR(0x56bb30);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bb31:{NFSU2_TR(0x56bb31);
w4(R+4,u32(0x838980ull));
}
B56bb36:{NFSU2_TR(0x56bb36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56bb3bull));
TAIL_STATIC(0x50f1b0u,50f);
}
B56bb3b:L56bb3b:{c.instructions+=2;NFSU2_TR(0x56bb3b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56bb3d:{NFSU2_TR(0x56bb3d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56bc0e;}}
}
B56bb43:L56bb43:{c.instructions+=5;NFSU2_TR(0x56bb43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B56bb46:{NFSU2_TR(0x56bb46);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bb47:{NFSU2_TR(0x56bb47);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bb48:{NFSU2_TR(0x56bb48);
w4(R+4,u32(0x838980ull));
}
B56bb4d:{NFSU2_TR(0x56bb4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56bb52ull));
TAIL_STATIC(0x5219e0u,521);
}
B56bb52:L56bb52:{c.instructions+=2;NFSU2_TR(0x56bb52);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56bb54:{NFSU2_TR(0x56bb54);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56bc0b;}}
}
B56bb5a:L56bb5a:{c.instructions+=2;NFSU2_TR(0x56bb5a);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56bb61:{NFSU2_TR(0x56bb61);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56bbe0;}}
}
B56bb63:L56bb63:{c.instructions+=4;NFSU2_TR(0x56bb63);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bb64:{NFSU2_TR(0x56bb64);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bb65:{NFSU2_TR(0x56bb65);
w4(R+4,u32(0x85ad40ull));
}
B56bb6a:{NFSU2_TR(0x56bb6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56bb6full));
TAIL_STATIC(0x514280u,514);
}
B56bb6f:L56bb6f:{c.instructions+=3;NFSU2_TR(0x56bb6f);
w4(R+4,u32(0x838980ull));
}
B56bb74:{NFSU2_TR(0x56bb74);
__builtin_memmove((R+28),(R+0),4);
}
B56bb76:{NFSU2_TR(0x56bb76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56bb7bull));
TAIL_STATIC(0x521530u,521);
}
B56bb7b:L56bb7b:{c.instructions+=3;NFSU2_TR(0x56bb7b);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B56bb7d:{NFSU2_TR(0x56bb7d);
u8 U[8];
__builtin_memmove((U+0),gp(0x861e74),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+28)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B56bb83:{NFSU2_TR(0x56bb83);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L56bba0;}}
}
B56bb85:L56bb85:{c.instructions+=5;NFSU2_TR(0x56bb85);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56bb88:{NFSU2_TR(0x56bb88);
u8 U[4];
w4(U+0,u32(0xd1ac60beull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bb8d:{NFSU2_TR(0x56bb8d);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bb92:{NFSU2_TR(0x56bb92);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bb93:{NFSU2_TR(0x56bb93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56bb98ull));
TAIL_STATIC(0x558430u,558);
}
B56bb98:L56bb98:{c.instructions+=2;NFSU2_TR(0x56bb98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B56bb9b:{NFSU2_TR(0x56bb9b);
{goto L56bc21;}
}
B56bba0:L56bba0:{c.instructions+=10;NFSU2_TR(0x56bba0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56bba3:{NFSU2_TR(0x56bba3);
u8 U[4];
w4(U+0,u32(0x44b7167full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bba8:{NFSU2_TR(0x56bba8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bbaa:{NFSU2_TR(0x56bbaa);
u8 U[4];
w4(U+0,u32(0x1fab5998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bbaf:{NFSU2_TR(0x56bbaf);
u8 U[4];
w4(U+0,u32(0x1fab5998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bbb4:{NFSU2_TR(0x56bbb4);
u8 U[4];
w4(U+0,u32(0xd05fc3a3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bbb9:{NFSU2_TR(0x56bbb9);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bbbe:{NFSU2_TR(0x56bbbe);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bbc3:{NFSU2_TR(0x56bbc3);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bbc8:{NFSU2_TR(0x56bbc8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bbc9:L56bbc9:{c.instructions+=1;NFSU2_TR(0x56bbc9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56bbceull));
TAIL_STATIC(0x558790u,558);
}
B56bbce:L56bbce:{c.instructions+=4;NFSU2_TR(0x56bbce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B56bbd1:{NFSU2_TR(0x56bbd1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B56bbd4:{NFSU2_TR(0x56bbd4);
s4(0x838970,u32(0x1fab5998ull));
}
B56bbde:{NFSU2_TR(0x56bbde);
{goto L56bc2e;}
}
B56bbe0:L56bbe0:{c.instructions+=11;NFSU2_TR(0x56bbe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56bbe3:{NFSU2_TR(0x56bbe3);
u8 U[4];
w4(U+0,u32(0xf5ac2b2aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bbe8:{NFSU2_TR(0x56bbe8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bbea:{NFSU2_TR(0x56bbea);
u8 U[4];
w4(U+0,u32(0x1fab5998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bbef:{NFSU2_TR(0x56bbef);
u8 U[4];
w4(U+0,u32(0x1fab5998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bbf4:{NFSU2_TR(0x56bbf4);
u8 U[4];
w4(U+0,u32(0xd05fc3a3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bbf9:{NFSU2_TR(0x56bbf9);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bbfe:{NFSU2_TR(0x56bbfe);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bc03:{NFSU2_TR(0x56bc03);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bc08:{NFSU2_TR(0x56bc08);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bc09:{NFSU2_TR(0x56bc09);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56bbc9u);}goto L56bbc9;}
}
B56bc0b:L56bc0b:{c.instructions+=1;NFSU2_TR(0x56bc0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B56bc0e:L56bc0e:{c.instructions+=5;NFSU2_TR(0x56bc0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56bc11:{NFSU2_TR(0x56bc11);
u8 U[4];
w4(U+0,u32(0xda15d7e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bc16:{NFSU2_TR(0x56bc16);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bc1b:{NFSU2_TR(0x56bc1b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bc1c:{NFSU2_TR(0x56bc1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56bc21ull));
TAIL_STATIC(0x558430u,558);
}
B56bc21:L56bc21:{c.instructions+=2;NFSU2_TR(0x56bc21);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B56bc24:{NFSU2_TR(0x56bc24);
s4(0x838970,u32(0x34dc1becull));
}
B56bc2e:L56bc2e:{c.instructions+=4;NFSU2_TR(0x56bc2e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bc30:{NFSU2_TR(0x56bc30);
__builtin_memmove((R+4),(R+12),4);
}
B56bc32:{NFSU2_TR(0x56bc32);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2full))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56bc36:{NFSU2_TR(0x56bc36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56bc3bull));
TAIL_STATIC(0x52eb90u,52e);
}
B56bc3b:L56bc3b:{c.instructions+=3;NFSU2_TR(0x56bc3b);
u8 U[4];
w4(U+0,u32(0x799c64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bc40:{NFSU2_TR(0x56bc40);
u8 U[4];
w4(U+0,u32(0x96dda9e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bc45:{NFSU2_TR(0x56bc45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56bc4aull));
TAIL_STATIC(0x55dda0u,55d);
}
B56bc4a:L56bc4a:{c.instructions+=6;NFSU2_TR(0x56bc4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56bc4d:{NFSU2_TR(0x56bc4d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bc4f:{NFSU2_TR(0x56bc4f);
u8 U[4];
w4(U+0,u32(0x78fef4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bc54:{NFSU2_TR(0x56bc54);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bc59:{NFSU2_TR(0x56bc59);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bc5a:{NFSU2_TR(0x56bc5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56bc5full));
TAIL_STATIC(0x537c00u,537);
}
B56bc5f:L56bc5f:{c.instructions+=6;NFSU2_TR(0x56bc5f);
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
B56bc62:{NFSU2_TR(0x56bc62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56bc63:{NFSU2_TR(0x56bc63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56bc64:{NFSU2_TR(0x56bc64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56bc65:{NFSU2_TR(0x56bc65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56bc66:{NFSU2_TR(0x56bc66);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56bc69:L56bc69:{c.instructions+=6;NFSU2_TR(0x56bc69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56bc6c:{NFSU2_TR(0x56bc6c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bc6e:{NFSU2_TR(0x56bc6e);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bc73:{NFSU2_TR(0x56bc73);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bc78:{NFSU2_TR(0x56bc78);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bc79:{NFSU2_TR(0x56bc79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56bc7eull));
TAIL_STATIC(0x537c00u,537);
}
B56bc7e:L56bc7e:{c.instructions+=5;NFSU2_TR(0x56bc7e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B56bc81:{NFSU2_TR(0x56bc81);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56bc84:{NFSU2_TR(0x56bc84);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bc86:{NFSU2_TR(0x56bc86);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56bc8a:{NFSU2_TR(0x56bc8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56bc8full));
TAIL_STATIC(0x52eb90u,52e);
}
B56bc8f:L56bc8f:{c.instructions+=5;NFSU2_TR(0x56bc8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56bc90:{NFSU2_TR(0x56bc90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56bc91:{NFSU2_TR(0x56bc91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56bc92:{NFSU2_TR(0x56bc92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56bc93:{NFSU2_TR(0x56bc93);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56bc96:L56bc96:{c.instructions+=2;NFSU2_TR(0x56bc96);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x34dc1becull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x34dc1becull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x34dc1becull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56bc9b:{NFSU2_TR(0x56bc9b);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56b9b0u);}goto L56b9b0;}}
}
B56bca1:L56bca1:{c.instructions+=5;NFSU2_TR(0x56bca1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56bca2:{NFSU2_TR(0x56bca2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56bca3:{NFSU2_TR(0x56bca3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56bca4:{NFSU2_TR(0x56bca4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56bca5:{NFSU2_TR(0x56bca5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56bca8:L56bca8:{c.instructions+=2;NFSU2_TR(0x56bca8);
__builtin_memmove((R+4),(R+24),4);
}
B56bcaa:{NFSU2_TR(0x56bcaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56bcafull));
TAIL_STATIC(0x53a9a0u,53a);
}
B56bcaf:L56bcaf:{c.instructions+=3;NFSU2_TR(0x56bcaf);
__builtin_memmove((R+4),(R+24),4);
}
B56bcb1:{NFSU2_TR(0x56bcb1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x111ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56bcb8:{NFSU2_TR(0x56bcb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56bcbdull));
TAIL_STATIC(0x546f40u,546);
}
B56bcbd:L56bcbd:{c.instructions+=3;NFSU2_TR(0x56bcbd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56bcc0:{NFSU2_TR(0x56bcc0);
__builtin_memmove((R+4),(R+28),4);
}
B56bcc2:{NFSU2_TR(0x56bcc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56bcc7ull));
TAIL_STATIC(0x4aeb90u,4ae);
}
B56bcc7:L56bcc7:{c.instructions+=2;NFSU2_TR(0x56bcc7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56bcc9:{NFSU2_TR(0x56bcc9);
if(r1(R+518)){{goto L56bce1;}}
}
B56bccb:L56bccb:{c.instructions+=3;NFSU2_TR(0x56bccb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56bcd1:{NFSU2_TR(0x56bcd1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bcd2:{NFSU2_TR(0x56bcd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56bcd7ull));
TAIL_STATIC(0x50ca00u,50c);
}
B56bcd7:L56bcd7:{c.instructions+=6;NFSU2_TR(0x56bcd7);
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
B56bcda:{NFSU2_TR(0x56bcda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56bcdb:{NFSU2_TR(0x56bcdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56bcdc:{NFSU2_TR(0x56bcdc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56bcdd:{NFSU2_TR(0x56bcdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56bcde:{NFSU2_TR(0x56bcde);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56bce1:L56bce1:{c.instructions+=2;NFSU2_TR(0x56bce1);
__builtin_memmove((R+4),(R+28),4);
}
B56bce3:{NFSU2_TR(0x56bce3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56bce8ull));
TAIL_STATIC(0x4aebc0u,4ae);
}
B56bce8:L56bce8:{c.instructions+=2;NFSU2_TR(0x56bce8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56bcea:{NFSU2_TR(0x56bcea);
if(r1(R+518)){{goto L56bd02;}}
}
B56bcec:L56bcec:{c.instructions+=3;NFSU2_TR(0x56bcec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56bcf2:{NFSU2_TR(0x56bcf2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bcf3:{NFSU2_TR(0x56bcf3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56bcf8ull));
TAIL_STATIC(0x50ca00u,50c);
}
B56bcf8:L56bcf8:{c.instructions+=6;NFSU2_TR(0x56bcf8);
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
B56bcfb:{NFSU2_TR(0x56bcfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56bcfc:{NFSU2_TR(0x56bcfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56bcfd:{NFSU2_TR(0x56bcfd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56bcfe:{NFSU2_TR(0x56bcfe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56bcff:{NFSU2_TR(0x56bcff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56bd02:L56bd02:{c.instructions+=3;NFSU2_TR(0x56bd02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56bd08:{NFSU2_TR(0x56bd08);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bd09:{NFSU2_TR(0x56bd09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56bd0eull));
TAIL_STATIC(0x50ca50u,50c);
}
B56bd0e:L56bd0e:{c.instructions+=3;NFSU2_TR(0x56bd0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56bd14:{NFSU2_TR(0x56bd14);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bd15:{NFSU2_TR(0x56bd15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56bd1aull));
TAIL_STATIC(0x50ca50u,50c);
}
B56bd1a:L56bd1a:{c.instructions+=6;NFSU2_TR(0x56bd1a);
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
B56bd1d:{NFSU2_TR(0x56bd1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56bd1e:{NFSU2_TR(0x56bd1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56bd1f:{NFSU2_TR(0x56bd1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56bd20:{NFSU2_TR(0x56bd20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56bd21:{NFSU2_TR(0x56bd21);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56bd24:L56bd24:{c.instructions+=2;NFSU2_TR(0x56bd24);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x72619778ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56bd29:{NFSU2_TR(0x56bd29);
if(r1(R+518)){{goto L56bd3d;}}
}
B56bd2b:L56bd2b:{c.instructions+=2;NFSU2_TR(0x56bd2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x81f0b71aull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56bd30:{NFSU2_TR(0x56bd30);
if(r1(R+518)){{goto L56bd5a;}}
}
B56bd32:L56bd32:{c.instructions+=2;NFSU2_TR(0x56bd32);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x911c0a4bull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x911c0a4bull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x911c0a4bull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56bd37:{NFSU2_TR(0x56bd37);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56bf62;}}
}
B56bd3d:L56bd3d:{c.instructions+=3;NFSU2_TR(0x56bd3d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x111ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B56bd43:{NFSU2_TR(0x56bd43);
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
B56bd45:{NFSU2_TR(0x56bd45);
if(r1(R+518)){{goto L56bf62;}}
}
B56bd4b:L56bd4b:{c.instructions+=3;NFSU2_TR(0x56bd4b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bd4c:{NFSU2_TR(0x56bd4c);
__builtin_memmove((R+4),(R+24),4);
}
B56bd4e:{NFSU2_TR(0x56bd4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56bd53ull));
TAIL_STATIC(0x560100u,560);
}
B56bd53:L56bd53:{c.instructions+=5;NFSU2_TR(0x56bd53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56bd54:{NFSU2_TR(0x56bd54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56bd55:{NFSU2_TR(0x56bd55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56bd56:{NFSU2_TR(0x56bd56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56bd57:{NFSU2_TR(0x56bd57);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56bd5a:L56bd5a:{c.instructions+=6;NFSU2_TR(0x56bd5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56bd5d:{NFSU2_TR(0x56bd5d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bd5f:{NFSU2_TR(0x56bd5f);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bd64:{NFSU2_TR(0x56bd64);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bd69:{NFSU2_TR(0x56bd69);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bd6a:{NFSU2_TR(0x56bd6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56bd6full));
TAIL_STATIC(0x537c60u,537);
}
B56bd6f:L56bd6f:{c.instructions+=2;NFSU2_TR(0x56bd6f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B56bd72:{NFSU2_TR(0x56bd72);
{goto L56bf4f;}
}
B56bd77:L56bd77:{c.instructions+=2;NFSU2_TR(0x56bd77);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56bd7d:{NFSU2_TR(0x56bd7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56bd82ull));
TAIL_STATIC(0x538130u,538);
}
B56bd82:L56bd82:{c.instructions+=6;NFSU2_TR(0x56bd82);
{u32 ea_=u32(u32(8872940u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B56bd88:{NFSU2_TR(0x56bd88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56bd8e:{NFSU2_TR(0x56bd8e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B56bd94:{NFSU2_TR(0x56bd94);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56bd96:{NFSU2_TR(0x56bd96);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56bd99:{NFSU2_TR(0x56bd99);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L56bdc9;}}
}
B56bd9b:L56bd9b:{c.instructions+=4;NFSU2_TR(0x56bd9b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56bda1:{NFSU2_TR(0x56bda1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56bda3:{NFSU2_TR(0x56bda3);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56bda6:{NFSU2_TR(0x56bda6);
if(r1(R+518)){{goto L56bdde;}}
}
B56bda8:L56bda8:{c.instructions+=2;NFSU2_TR(0x56bda8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56bdab:{NFSU2_TR(0x56bdab);
if(r1(R+518)){{goto L56bdde;}}
}
B56bdad:L56bdad:{c.instructions+=2;NFSU2_TR(0x56bdad);
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
B56bdb0:{NFSU2_TR(0x56bdb0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56bf62;}}
}
B56bdb6:L56bdb6:{c.instructions+=3;NFSU2_TR(0x56bdb6);
u8 U[4];
w4(U+0,u32(0x911c0a4bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bdbb:{NFSU2_TR(0x56bdbb);
__builtin_memmove((R+4),(R+24),4);
}
B56bdbd:{NFSU2_TR(0x56bdbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56bdc2ull));
TAIL_STATIC(0x560100u,560);
}
B56bdc2:L56bdc2:{c.instructions+=5;NFSU2_TR(0x56bdc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56bdc3:{NFSU2_TR(0x56bdc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56bdc4:{NFSU2_TR(0x56bdc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56bdc5:{NFSU2_TR(0x56bdc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56bdc6:{NFSU2_TR(0x56bdc6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56bdc9:L56bdc9:{c.instructions+=4;NFSU2_TR(0x56bdc9);
u8 U[4];
w4(U+0,u32(0x911c0a4bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bdce:{NFSU2_TR(0x56bdce);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B56bdd0:{NFSU2_TR(0x56bdd0);
__builtin_memmove((R+4),(R+24),4);
}
B56bdd2:{NFSU2_TR(0x56bdd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56bdd7ull));
TAIL_STATIC(0x560100u,560);
}
B56bdd7:L56bdd7:{c.instructions+=5;NFSU2_TR(0x56bdd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56bdd8:{NFSU2_TR(0x56bdd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56bdd9:{NFSU2_TR(0x56bdd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56bdda:{NFSU2_TR(0x56bdda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56bddb:{NFSU2_TR(0x56bddb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56bdde:L56bdde:{c.instructions+=3;NFSU2_TR(0x56bdde);
u8 U[4];
w4(U+0,u32(0x72619778ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bde3:{NFSU2_TR(0x56bde3);
__builtin_memmove((R+4),(R+24),4);
}
B56bde5:{NFSU2_TR(0x56bde5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56bdeaull));
TAIL_STATIC(0x560100u,560);
}
B56bdea:L56bdea:{c.instructions+=5;NFSU2_TR(0x56bdea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56bdeb:{NFSU2_TR(0x56bdeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56bdec:{NFSU2_TR(0x56bdec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56bded:{NFSU2_TR(0x56bded);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56bdee:{NFSU2_TR(0x56bdee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56bdf1:L56bdf1:{c.instructions+=2;NFSU2_TR(0x56bdf1);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xc98356baull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56bdf6:{NFSU2_TR(0x56bdf6);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L56be8d;}}
}
B56bdfc:L56bdfc:{c.instructions+=1;NFSU2_TR(0x56bdfc);
if(r1(R+518)){{goto L56be41;}}
}
B56bdfe:L56bdfe:{c.instructions+=2;NFSU2_TR(0x56bdfe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb4edeb6dull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56be03:{NFSU2_TR(0x56be03);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56b9b0u);}goto L56b9b0;}}
}
B56be09:L56be09:{c.instructions+=2;NFSU2_TR(0x56be09);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc0faf20bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56be0e:{NFSU2_TR(0x56be0e);
if(r1(R+518)){{goto L56be29;}}
}
B56be10:L56be10:{c.instructions+=2;NFSU2_TR(0x56be10);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc519bfc0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc519bfc0ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc519bfc0ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56be15:{NFSU2_TR(0x56be15);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56bf62;}}
}
B56be1b:L56be1b:{c.instructions+=2;NFSU2_TR(0x56be1b);
__builtin_memmove((R+4),(R+24),4);
}
B56be1d:{NFSU2_TR(0x56be1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56be22ull));
TAIL_STATIC(0x568710u,568);
}
B56be22:L56be22:{c.instructions+=5;NFSU2_TR(0x56be22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56be23:{NFSU2_TR(0x56be23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56be24:{NFSU2_TR(0x56be24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56be25:{NFSU2_TR(0x56be25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56be26:{NFSU2_TR(0x56be26);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56be29:L56be29:{c.instructions+=2;NFSU2_TR(0x56be29);
w4(R+4,u32(0x838980ull));
}
B56be2e:{NFSU2_TR(0x56be2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56be33ull));
TAIL_STATIC(0x55c460u,55c);
}
B56be33:L56be33:{c.instructions+=6;NFSU2_TR(0x56be33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56be34:{NFSU2_TR(0x56be34);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56be3b:{NFSU2_TR(0x56be3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56be3c:{NFSU2_TR(0x56be3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56be3d:{NFSU2_TR(0x56be3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56be3e:{NFSU2_TR(0x56be3e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56be41:L56be41:{c.instructions+=3;NFSU2_TR(0x56be41);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56be47:{NFSU2_TR(0x56be47);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56be49:{NFSU2_TR(0x56be49);
if(r1(R+518)){{goto L56be7e;}}
}
B56be4b:L56be4b:{c.instructions+=4;NFSU2_TR(0x56be4b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56be52:{NFSU2_TR(0x56be52);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B56be58:{NFSU2_TR(0x56be58);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56be5a:{NFSU2_TR(0x56be5a);
if(r1(R+518)){{goto L56be65;}}
}
B56be5c:L56be5c:{c.instructions+=3;NFSU2_TR(0x56be5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56be5f:{NFSU2_TR(0x56be5f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56be60:{NFSU2_TR(0x56be60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56be65ull));
TAIL_STATIC(0x5376f0u,537);
}
B56be65:L56be65:{c.instructions+=3;NFSU2_TR(0x56be65);
u8 U[4];
w4(U+0,u32(0x799c64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56be6a:{NFSU2_TR(0x56be6a);
u8 U[4];
w4(U+0,u32(0x9fbbd1d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56be6f:{NFSU2_TR(0x56be6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56be74ull));
TAIL_STATIC(0x55dda0u,55d);
}
B56be74:L56be74:{c.instructions+=6;NFSU2_TR(0x56be74);
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
B56be77:{NFSU2_TR(0x56be77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56be78:{NFSU2_TR(0x56be78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56be79:{NFSU2_TR(0x56be79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56be7a:{NFSU2_TR(0x56be7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56be7b:{NFSU2_TR(0x56be7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56be7e:L56be7e:{c.instructions+=2;NFSU2_TR(0x56be7e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56be81:{NFSU2_TR(0x56be81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56be86ull));
TAIL_STATIC(0x538760u,538);
}
B56be86:L56be86:{c.instructions+=5;NFSU2_TR(0x56be86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56be87:{NFSU2_TR(0x56be87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56be88:{NFSU2_TR(0x56be88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56be89:{NFSU2_TR(0x56be89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56be8a:{NFSU2_TR(0x56be8a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56be8d:L56be8d:{c.instructions+=2;NFSU2_TR(0x56be8d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xd05fc3a3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56be92:{NFSU2_TR(0x56be92);
if(r1(R+518)){{goto L56bf00;}}
}
B56be94:L56be94:{c.instructions+=2;NFSU2_TR(0x56be94);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xe1fde1d1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56be99:{NFSU2_TR(0x56be99);
if(r1(R+518)){{goto L56bed4;}}
}
B56be9b:L56be9b:{c.instructions+=2;NFSU2_TR(0x56be9b);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xe75749d4ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xe75749d4ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xe75749d4ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56bea0:{NFSU2_TR(0x56bea0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56bf62;}}
}
B56bea6:L56bea6:{c.instructions+=4;NFSU2_TR(0x56bea6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56bea9:{NFSU2_TR(0x56bea9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56beaa:{NFSU2_TR(0x56beaa);
w4(R+4,u32(0x838980ull));
}
B56beaf:{NFSU2_TR(0x56beaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56beb4ull));
TAIL_STATIC(0x530290u,530);
}
B56beb4:L56beb4:{c.instructions+=3;NFSU2_TR(0x56beb4);
u8 U[4];
w4(U+0,u32(0x799c64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56beb9:{NFSU2_TR(0x56beb9);
u8 U[4];
w4(U+0,u32(0x251bf83eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bebe:{NFSU2_TR(0x56bebe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56bec3ull));
TAIL_STATIC(0x55dda0u,55d);
}
B56bec3:L56bec3:{c.instructions+=7;NFSU2_TR(0x56bec3);
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
B56bec6:{NFSU2_TR(0x56bec6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56bec7:{NFSU2_TR(0x56bec7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56bece:{NFSU2_TR(0x56bece);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56becf:{NFSU2_TR(0x56becf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56bed0:{NFSU2_TR(0x56bed0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56bed1:{NFSU2_TR(0x56bed1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56bed4:L56bed4:{c.instructions+=2;NFSU2_TR(0x56bed4);
w4(R+4,u32(0x838980ull));
}
B56bed9:{NFSU2_TR(0x56bed9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56bedeull));
TAIL_STATIC(0x55c460u,55c);
}
B56bede:L56bede:{c.instructions+=4;NFSU2_TR(0x56bede);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bee3:{NFSU2_TR(0x56bee3);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bee8:{NFSU2_TR(0x56bee8);
w4(R+4,u32(0x8637d0ull));
}
B56beed:{NFSU2_TR(0x56beed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56bef2ull));
TAIL_STATIC(0x55b1a0u,55b);
}
B56bef2:L56bef2:{c.instructions+=6;NFSU2_TR(0x56bef2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56bef3:{NFSU2_TR(0x56bef3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56befa:{NFSU2_TR(0x56befa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56befb:{NFSU2_TR(0x56befb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56befc:{NFSU2_TR(0x56befc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56befd:{NFSU2_TR(0x56befd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56bf00:L56bf00:{c.instructions+=7;NFSU2_TR(0x56bf00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56bf03:{NFSU2_TR(0x56bf03);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56bf06:{NFSU2_TR(0x56bf06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56bf09:{NFSU2_TR(0x56bf09);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bf0a:{NFSU2_TR(0x56bf0a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bf0b:{NFSU2_TR(0x56bf0b);
w4(R+4,u32(0x838980ull));
}
B56bf10:{NFSU2_TR(0x56bf10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56bf15ull));
TAIL_STATIC(0x53af20u,53a);
}
B56bf15:L56bf15:{c.instructions+=2;NFSU2_TR(0x56bf15);
w4(R+4,u32(0x838980ull));
}
B56bf1a:{NFSU2_TR(0x56bf1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56bf1full));
TAIL_STATIC(0x521530u,521);
}
B56bf1f:L56bf1f:{c.instructions+=6;NFSU2_TR(0x56bf1f);
__builtin_memmove((R+4),gp(0x7fa1e0),4);
}
B56bf25:{NFSU2_TR(0x56bf25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bf26:{NFSU2_TR(0x56bf26);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bf2b:{NFSU2_TR(0x56bf2b);
u8 U[4];
w4(U+0,u32(0x2f5e7da3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bf30:{NFSU2_TR(0x56bf30);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bf31:{NFSU2_TR(0x56bf31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56bf36ull));
TAIL_STATIC(0x537b80u,537);
}
B56bf36:L56bf36:{c.instructions+=3;NFSU2_TR(0x56bf36);
u8 U[4];
w4(U+0,u32(0x799c64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bf3b:{NFSU2_TR(0x56bf3b);
u8 U[4];
w4(U+0,u32(0x251bf83eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bf40:{NFSU2_TR(0x56bf40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56bf45ull));
TAIL_STATIC(0x55dda0u,55d);
}
B56bf45:L56bf45:{c.instructions+=2;NFSU2_TR(0x56bf45);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B56bf48:{NFSU2_TR(0x56bf48);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56bf4f:L56bf4f:{c.instructions+=6;NFSU2_TR(0x56bf4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56bf52:{NFSU2_TR(0x56bf52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56bf55:{NFSU2_TR(0x56bf55);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B56bf5b:{NFSU2_TR(0x56bf5b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bf5c:{NFSU2_TR(0x56bf5c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bf5d:{NFSU2_TR(0x56bf5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56bf62ull));
TAIL_STATIC(0x54e6e0u,54e);
}
B56bf62:L56bf62:{c.instructions+=5;NFSU2_TR(0x56bf62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56bf63:{NFSU2_TR(0x56bf63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56bf64:{NFSU2_TR(0x56bf64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56bf65:{NFSU2_TR(0x56bf65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56bf66:{NFSU2_TR(0x56bf66);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56bf70:L56bf70:{c.instructions+=15;NFSU2_TR(0x56bf70);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bf72:{NFSU2_TR(0x56bf72);
u8 U[4];
w4(U+0,u32(0x777dc3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bf77:{NFSU2_TR(0x56bf77);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56bf7d:{NFSU2_TR(0x56bf7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bf7e:{NFSU2_TR(0x56bf7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56bf85:{NFSU2_TR(0x56bf85);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bf86:{NFSU2_TR(0x56bf86);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bf87:{NFSU2_TR(0x56bf87);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bf88:{NFSU2_TR(0x56bf88);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B56bf8c:{NFSU2_TR(0x56bf8c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bf8d:{NFSU2_TR(0x56bf8d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bf8e:{NFSU2_TR(0x56bf8e);
__builtin_memmove((R+24),(R+4),4);
}
B56bf90:{NFSU2_TR(0x56bf90);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bf91:{NFSU2_TR(0x56bf91);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56bf95:{NFSU2_TR(0x56bf95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56bf9aull));
TAIL_STATIC(0x551de0u,551);
}
B56bf9a:L56bf9a:{c.instructions+=14;NFSU2_TR(0x56bf9a);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bf9f:{NFSU2_TR(0x56bf9f);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bfa4:{NFSU2_TR(0x56bfa4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bfa6:{NFSU2_TR(0x56bfa6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B56bfa8:{NFSU2_TR(0x56bfa8);
u8 U[4];
w4(U+0,u32(0x79caf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bfad:{NFSU2_TR(0x56bfad);
u8 U[4];
w4(U+0,u32(0x79ba14ull));
s4(u32(r4(R+24)),r4(U+0));
}
B56bfb3:{NFSU2_TR(0x56bfb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56bfb6:{NFSU2_TR(0x56bfb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56bfb9:{NFSU2_TR(0x56bfb9);
u8 U[4];
w4(U+0,u32(0x797f30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bfbe:{NFSU2_TR(0x56bfbe);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56bfc1:{NFSU2_TR(0x56bfc1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bfc2:{NFSU2_TR(0x56bfc2);
__builtin_memmove((R+4),(R+28),4);
}
B56bfc4:{NFSU2_TR(0x56bfc4);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56bfc8:{NFSU2_TR(0x56bfc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56bfcdull));
TAIL_STATIC(0x5435d0u,543);
}
B56bfcd:L56bfcd:{c.instructions+=9;NFSU2_TR(0x56bfcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56bfd0:{NFSU2_TR(0x56bfd0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bfd1:{NFSU2_TR(0x56bfd1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bfd2:{NFSU2_TR(0x56bfd2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bfd4:{NFSU2_TR(0x56bfd4);
u8 U[4];
w4(U+0,u32(0x78f814ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bfd9:{NFSU2_TR(0x56bfd9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56bfda:{NFSU2_TR(0x56bfda);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56bfe0:{NFSU2_TR(0x56bfe0);
u8 U[5];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56bfe5:{NFSU2_TR(0x56bfe5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56bfeaull));
TAIL_STATIC(0x542ac0u,542);
}
B56bfea:L56bfea:{c.instructions+=4;NFSU2_TR(0x56bfea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56bff0:{NFSU2_TR(0x56bff0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56bff6:{NFSU2_TR(0x56bff6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x116ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56bffc:{NFSU2_TR(0x56bffc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x56c002u,56c);
}
XIT:NFSU2_TR_EXIT(0x56b,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
