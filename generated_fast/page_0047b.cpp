#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_459(u8* __restrict R,Cpu& c);
u32 body_45a(u8* __restrict R,Cpu& c);
u32 body_45b(u8* __restrict R,Cpu& c);
u32 body_468(u8* __restrict R,Cpu& c);
u32 body_469(u8* __restrict R,Cpu& c);
u32 body_46b(u8* __restrict R,Cpu& c);
u32 body_46c(u8* __restrict R,Cpu& c);
u32 body_46d(u8* __restrict R,Cpu& c);
u32 body_46e(u8* __restrict R,Cpu& c);
u32 body_479(u8* __restrict R,Cpu& c);
u32 body_47a(u8* __restrict R,Cpu& c);
u32 body_47c(u8* __restrict R,Cpu& c);
u32 body_4a9(u8* __restrict R,Cpu& c);
u32 body_4ac(u8* __restrict R,Cpu& c);
u32 body_4fe(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_721(u8* __restrict R,Cpu& c);
u32 body_722(u8* __restrict R,Cpu& c);
u32 body_723(u8* __restrict R,Cpu& c);
u32 body_724(u8* __restrict R,Cpu& c);
u32 body_736(u8* __restrict R,Cpu& c);
u32 body_739(u8* __restrict R,Cpu& c);
u32 body_73a(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x47b,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x47b,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_47b(u8* __restrict R,Cpu& c);
u32 page_47b(Cpu& c){return body_47b(c.regs.data(),c);}
__attribute__((noinline)) u32 body_47b(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x47b002:goto L47b002;
case 0x47b005:c.instructions+=7;goto B47b005;
case 0x47b008:c.instructions+=6;goto B47b008;
case 0x47b00b:c.instructions+=5;goto B47b00b;
case 0x47b011:c.instructions+=4;goto B47b011;
case 0x47b014:c.instructions+=3;goto B47b014;
case 0x47b016:c.instructions+=2;goto B47b016;
case 0x47b017:c.instructions+=1;goto B47b017;
case 0x47b01c:goto L47b01c;
case 0x47b021:goto L47b021;
case 0x47b023:c.instructions+=4;goto B47b023;
case 0x47b026:c.instructions+=3;goto B47b026;
case 0x47b02c:c.instructions+=2;goto B47b02c;
case 0x47b02d:c.instructions+=1;goto B47b02d;
case 0x47b032:goto L47b032;
case 0x47b034:c.instructions+=5;goto B47b034;
case 0x47b035:c.instructions+=4;goto B47b035;
case 0x47b036:c.instructions+=3;goto B47b036;
case 0x47b03b:c.instructions+=2;goto B47b03b;
case 0x47b03d:c.instructions+=1;goto B47b03d;
case 0x47b042:goto L47b042;
case 0x47b045:c.instructions+=3;goto B47b045;
case 0x47b04c:c.instructions+=2;goto B47b04c;
case 0x47b053:c.instructions+=1;goto B47b053;
case 0x47b058:goto L47b058;
case 0x47b05e:c.instructions+=3;goto B47b05e;
case 0x47b065:c.instructions+=2;goto B47b065;
case 0x47b066:c.instructions+=1;goto B47b066;
case 0x47b068:goto L47b068;
case 0x47b06a:c.instructions+=3;goto B47b06a;
case 0x47b06c:c.instructions+=2;goto B47b06c;
case 0x47b06e:c.instructions+=1;goto B47b06e;
case 0x47b073:goto L47b073;
case 0x47b074:c.instructions+=2;goto B47b074;
case 0x47b075:c.instructions+=1;goto B47b075;
case 0x47b080:goto L47b080;
case 0x47b085:c.instructions+=5;goto B47b085;
case 0x47b086:c.instructions+=4;goto B47b086;
case 0x47b088:c.instructions+=3;goto B47b088;
case 0x47b08f:c.instructions+=2;goto B47b08f;
case 0x47b090:c.instructions+=1;goto B47b090;
case 0x47b096:goto L47b096;
case 0x47b09d:c.instructions+=1;goto B47b09d;
case 0x47b0a3:goto L47b0a3;
case 0x47b0a9:c.instructions+=2;goto B47b0a9;
case 0x47b0ab:c.instructions+=1;goto B47b0ab;
case 0x47b0b1:goto L47b0b1;
case 0x47b0b8:c.instructions+=1;goto B47b0b8;
case 0x47b0ba:goto L47b0ba;
case 0x47b0c0:c.instructions+=3;goto B47b0c0;
case 0x47b0c6:c.instructions+=2;goto B47b0c6;
case 0x47b0c8:c.instructions+=1;goto B47b0c8;
case 0x47b0ca:goto L47b0ca;
case 0x47b0cd:c.instructions+=3;goto B47b0cd;
case 0x47b0cf:c.instructions+=2;goto B47b0cf;
case 0x47b0d2:c.instructions+=1;goto B47b0d2;
case 0x47b0d7:goto L47b0d7;
case 0x47b0d9:c.instructions+=1;goto B47b0d9;
case 0x47b0df:goto L47b0df;
case 0x47b0e2:c.instructions+=7;goto B47b0e2;
case 0x47b0e8:c.instructions+=6;goto B47b0e8;
case 0x47b0ee:c.instructions+=5;goto B47b0ee;
case 0x47b0f0:c.instructions+=4;goto B47b0f0;
case 0x47b0f4:c.instructions+=3;goto B47b0f4;
case 0x47b0f5:c.instructions+=2;goto B47b0f5;
case 0x47b0f6:c.instructions+=1;goto B47b0f6;
case 0x47b0fb:goto L47b0fb;
case 0x47b101:c.instructions+=3;goto B47b101;
case 0x47b103:c.instructions+=2;goto B47b103;
case 0x47b105:c.instructions+=1;goto B47b105;
case 0x47b108:goto L47b108;
case 0x47b10b:c.instructions+=4;goto B47b10b;
case 0x47b10e:c.instructions+=3;goto B47b10e;
case 0x47b114:c.instructions+=2;goto B47b114;
case 0x47b115:c.instructions+=1;goto B47b115;
case 0x47b11a:goto L47b11a;
case 0x47b11d:goto L47b11d;
case 0x47b123:c.instructions+=5;goto B47b123;
case 0x47b129:c.instructions+=4;goto B47b129;
case 0x47b12c:c.instructions+=3;goto B47b12c;
case 0x47b12f:c.instructions+=2;goto B47b12f;
case 0x47b132:c.instructions+=1;goto B47b132;
case 0x47b137:goto L47b137;
case 0x47b13a:c.instructions+=7;goto B47b13a;
case 0x47b13d:c.instructions+=6;goto B47b13d;
case 0x47b13e:c.instructions+=5;goto B47b13e;
case 0x47b144:c.instructions+=4;goto B47b144;
case 0x47b147:c.instructions+=3;goto B47b147;
case 0x47b149:c.instructions+=2;goto B47b149;
case 0x47b14a:c.instructions+=1;goto B47b14a;
case 0x47b14f:goto L47b14f;
case 0x47b152:c.instructions+=1;goto B47b152;
case 0x47b157:goto L47b157;
case 0x47b15c:goto L47b15c;
case 0x47b162:c.instructions+=2;goto B47b162;
case 0x47b163:c.instructions+=1;goto B47b163;
case 0x47b168:goto L47b168;
case 0x47b16e:c.instructions+=4;goto B47b16e;
case 0x47b171:c.instructions+=3;goto B47b171;
case 0x47b173:c.instructions+=2;goto B47b173;
case 0x47b176:c.instructions+=1;goto B47b176;
case 0x47b17c:goto L47b17c;
case 0x47b182:c.instructions+=2;goto B47b182;
case 0x47b184:c.instructions+=1;goto B47b184;
case 0x47b18a:goto L47b18a;
case 0x47b191:c.instructions+=1;goto B47b191;
case 0x47b196:goto L47b196;
case 0x47b19d:c.instructions+=1;goto B47b19d;
case 0x47b19f:goto L47b19f;
case 0x47b1a4:c.instructions+=2;goto B47b1a4;
case 0x47b1a6:c.instructions+=1;goto B47b1a6;
case 0x47b1a8:goto L47b1a8;
case 0x47b1ae:c.instructions+=3;goto B47b1ae;
case 0x47b1b4:c.instructions+=2;goto B47b1b4;
case 0x47b1b6:c.instructions+=1;goto B47b1b6;
case 0x47b1b8:goto L47b1b8;
case 0x47b1bd:goto L47b1bd;
case 0x47b1bf:c.instructions+=1;goto B47b1bf;
case 0x47b1c1:goto L47b1c1;
case 0x47b1c4:c.instructions+=3;goto B47b1c4;
case 0x47b1c6:c.instructions+=2;goto B47b1c6;
case 0x47b1c9:c.instructions+=1;goto B47b1c9;
case 0x47b1ce:goto L47b1ce;
case 0x47b1d1:c.instructions+=1;goto B47b1d1;
case 0x47b1d3:goto L47b1d3;
case 0x47b1d4:c.instructions+=3;goto B47b1d4;
case 0x47b1d6:c.instructions+=2;goto B47b1d6;
case 0x47b1d7:c.instructions+=1;goto B47b1d7;
case 0x47b1da:goto L47b1da;
case 0x47b1dc:c.instructions+=7;goto B47b1dc;
case 0x47b1df:c.instructions+=6;goto B47b1df;
case 0x47b1e2:c.instructions+=5;goto B47b1e2;
case 0x47b1e3:c.instructions+=4;goto B47b1e3;
case 0x47b1e9:c.instructions+=3;goto B47b1e9;
case 0x47b1ef:c.instructions+=2;goto B47b1ef;
case 0x47b1f0:c.instructions+=1;goto B47b1f0;
case 0x47b1f5:goto L47b1f5;
case 0x47b1fb:c.instructions+=3;goto B47b1fb;
case 0x47b1fd:c.instructions+=2;goto B47b1fd;
case 0x47b1ff:c.instructions+=1;goto B47b1ff;
case 0x47b202:goto L47b202;
case 0x47b205:c.instructions+=4;goto B47b205;
case 0x47b208:c.instructions+=3;goto B47b208;
case 0x47b20e:c.instructions+=2;goto B47b20e;
case 0x47b20f:c.instructions+=1;goto B47b20f;
case 0x47b214:goto L47b214;
case 0x47b217:goto L47b217;
case 0x47b21d:c.instructions+=5;goto B47b21d;
case 0x47b223:c.instructions+=4;goto B47b223;
case 0x47b226:c.instructions+=3;goto B47b226;
case 0x47b229:c.instructions+=2;goto B47b229;
case 0x47b22c:c.instructions+=1;goto B47b22c;
case 0x47b231:goto L47b231;
case 0x47b234:c.instructions+=7;goto B47b234;
case 0x47b237:c.instructions+=6;goto B47b237;
case 0x47b238:c.instructions+=5;goto B47b238;
case 0x47b23e:c.instructions+=4;goto B47b23e;
case 0x47b241:c.instructions+=3;goto B47b241;
case 0x47b243:c.instructions+=2;goto B47b243;
case 0x47b244:c.instructions+=1;goto B47b244;
case 0x47b249:goto L47b249;
case 0x47b24c:c.instructions+=1;goto B47b24c;
case 0x47b251:goto L47b251;
case 0x47b253:goto L47b253;
case 0x47b254:c.instructions+=2;goto B47b254;
case 0x47b255:c.instructions+=1;goto B47b255;
case 0x47b260:goto L47b260;
case 0x47b265:c.instructions+=8;goto B47b265;
case 0x47b268:c.instructions+=7;goto B47b268;
case 0x47b269:c.instructions+=6;goto B47b269;
case 0x47b26a:c.instructions+=5;goto B47b26a;
case 0x47b26c:c.instructions+=4;goto B47b26c;
case 0x47b272:c.instructions+=3;goto B47b272;
case 0x47b277:c.instructions+=2;goto B47b277;
case 0x47b279:c.instructions+=1;goto B47b279;
case 0x47b27f:goto L47b27f;
case 0x47b283:c.instructions+=2;goto B47b283;
case 0x47b285:c.instructions+=1;goto B47b285;
case 0x47b287:goto L47b287;
case 0x47b28c:goto L47b28c;
case 0x47b28e:c.instructions+=1;goto B47b28e;
case 0x47b294:goto L47b294;
case 0x47b297:c.instructions+=14;goto B47b297;
case 0x47b29d:c.instructions+=13;goto B47b29d;
case 0x47b2a0:c.instructions+=12;goto B47b2a0;
case 0x47b2a7:c.instructions+=11;goto B47b2a7;
case 0x47b2ad:c.instructions+=10;goto B47b2ad;
case 0x47b2b0:c.instructions+=9;goto B47b2b0;
case 0x47b2b2:c.instructions+=8;goto B47b2b2;
case 0x47b2b6:c.instructions+=7;goto B47b2b6;
case 0x47b2bc:c.instructions+=6;goto B47b2bc;
case 0x47b2c2:c.instructions+=5;goto B47b2c2;
case 0x47b2c7:c.instructions+=4;goto B47b2c7;
case 0x47b2cd:c.instructions+=3;goto B47b2cd;
case 0x47b2ce:c.instructions+=2;goto B47b2ce;
case 0x47b2cf:c.instructions+=1;goto B47b2cf;
case 0x47b2d4:goto L47b2d4;
case 0x47b2da:c.instructions+=4;goto B47b2da;
case 0x47b2dc:c.instructions+=3;goto B47b2dc;
case 0x47b2df:c.instructions+=2;goto B47b2df;
case 0x47b2e0:c.instructions+=1;goto B47b2e0;
case 0x47b2e3:goto L47b2e3;
case 0x47b2e4:c.instructions+=3;goto B47b2e4;
case 0x47b2e5:c.instructions+=2;goto B47b2e5;
case 0x47b2e8:c.instructions+=1;goto B47b2e8;
case 0x47b2eb:goto L47b2eb;
case 0x47b2f0:goto L47b2f0;
case 0x47b2f2:c.instructions+=1;goto B47b2f2;
case 0x47b2f8:goto L47b2f8;
case 0x47b2fe:c.instructions+=2;goto B47b2fe;
case 0x47b304:c.instructions+=1;goto B47b304;
case 0x47b306:goto L47b306;
case 0x47b30c:c.instructions+=3;goto B47b30c;
case 0x47b312:c.instructions+=2;goto B47b312;
case 0x47b313:c.instructions+=1;goto B47b313;
case 0x47b318:goto L47b318;
case 0x47b31b:goto L47b31b;
case 0x47b322:c.instructions+=1;goto B47b322;
case 0x47b328:goto L47b328;
case 0x47b32d:c.instructions+=3;goto B47b32d;
case 0x47b333:c.instructions+=2;goto B47b333;
case 0x47b335:c.instructions+=1;goto B47b335;
case 0x47b33b:goto L47b33b;
case 0x47b341:c.instructions+=14;goto B47b341;
case 0x47b347:c.instructions+=13;goto B47b347;
case 0x47b34a:c.instructions+=12;goto B47b34a;
case 0x47b34d:c.instructions+=11;goto B47b34d;
case 0x47b353:c.instructions+=10;goto B47b353;
case 0x47b359:c.instructions+=9;goto B47b359;
case 0x47b360:c.instructions+=8;goto B47b360;
case 0x47b363:c.instructions+=7;goto B47b363;
case 0x47b369:c.instructions+=6;goto B47b369;
case 0x47b36b:c.instructions+=5;goto B47b36b;
case 0x47b373:c.instructions+=4;goto B47b373;
case 0x47b379:c.instructions+=3;goto B47b379;
case 0x47b37a:c.instructions+=2;goto B47b37a;
case 0x47b37b:c.instructions+=1;goto B47b37b;
case 0x47b380:goto L47b380;
case 0x47b386:c.instructions+=3;goto B47b386;
case 0x47b388:c.instructions+=2;goto B47b388;
case 0x47b389:c.instructions+=1;goto B47b389;
case 0x47b38c:goto L47b38c;
case 0x47b38e:c.instructions+=2;goto B47b38e;
case 0x47b390:c.instructions+=1;goto B47b390;
case 0x47b395:goto L47b395;
case 0x47b398:c.instructions+=4;goto B47b398;
case 0x47b399:c.instructions+=3;goto B47b399;
case 0x47b39a:c.instructions+=2;goto B47b39a;
case 0x47b39d:c.instructions+=1;goto B47b39d;
case 0x47b3a0:goto L47b3a0;
case 0x47b3a5:goto L47b3a5;
case 0x47b3a7:c.instructions+=1;goto B47b3a7;
case 0x47b3ad:goto L47b3ad;
case 0x47b3b1:c.instructions+=2;goto B47b3b1;
case 0x47b3b3:c.instructions+=1;goto B47b3b3;
case 0x47b3b9:goto L47b3b9;
case 0x47b3be:goto L47b3be;
case 0x47b3c0:c.instructions+=1;goto B47b3c0;
case 0x47b3c6:goto L47b3c6;
case 0x47b3c9:c.instructions+=2;goto B47b3c9;
case 0x47b3ca:c.instructions+=1;goto B47b3ca;
case 0x47b3cf:goto L47b3cf;
case 0x47b3d3:c.instructions+=3;goto B47b3d3;
case 0x47b3d6:c.instructions+=2;goto B47b3d6;
case 0x47b3d7:c.instructions+=1;goto B47b3d7;
case 0x47b3dc:goto L47b3dc;
case 0x47b3e0:c.instructions+=9;goto B47b3e0;
case 0x47b3e4:c.instructions+=8;goto B47b3e4;
case 0x47b3e8:c.instructions+=7;goto B47b3e8;
case 0x47b3eb:c.instructions+=6;goto B47b3eb;
case 0x47b3ed:c.instructions+=5;goto B47b3ed;
case 0x47b3f2:c.instructions+=4;goto B47b3f2;
case 0x47b3f3:c.instructions+=3;goto B47b3f3;
case 0x47b3f4:c.instructions+=2;goto B47b3f4;
case 0x47b3f7:c.instructions+=1;goto B47b3f7;
case 0x47b3fc:goto L47b3fc;
case 0x47b3ff:c.instructions+=18;goto B47b3ff;
case 0x47b405:c.instructions+=17;goto B47b405;
case 0x47b408:c.instructions+=16;goto B47b408;
case 0x47b40f:c.instructions+=15;goto B47b40f;
case 0x47b412:c.instructions+=14;goto B47b412;
case 0x47b418:c.instructions+=13;goto B47b418;
case 0x47b41b:c.instructions+=12;goto B47b41b;
case 0x47b421:c.instructions+=11;goto B47b421;
case 0x47b428:c.instructions+=10;goto B47b428;
case 0x47b42e:c.instructions+=9;goto B47b42e;
case 0x47b430:c.instructions+=8;goto B47b430;
case 0x47b433:c.instructions+=7;goto B47b433;
case 0x47b436:c.instructions+=6;goto B47b436;
case 0x47b43c:c.instructions+=5;goto B47b43c;
case 0x47b442:c.instructions+=4;goto B47b442;
case 0x47b448:c.instructions+=3;goto B47b448;
case 0x47b449:c.instructions+=2;goto B47b449;
case 0x47b44a:c.instructions+=1;goto B47b44a;
case 0x47b44f:goto L47b44f;
case 0x47b455:c.instructions+=4;goto B47b455;
case 0x47b457:c.instructions+=3;goto B47b457;
case 0x47b45a:c.instructions+=2;goto B47b45a;
case 0x47b45b:c.instructions+=1;goto B47b45b;
case 0x47b45e:goto L47b45e;
case 0x47b45f:c.instructions+=3;goto B47b45f;
case 0x47b460:c.instructions+=2;goto B47b460;
case 0x47b463:c.instructions+=1;goto B47b463;
case 0x47b466:goto L47b466;
case 0x47b46b:goto L47b46b;
case 0x47b46d:c.instructions+=1;goto B47b46d;
case 0x47b473:goto L47b473;
case 0x47b476:c.instructions+=2;goto B47b476;
case 0x47b479:c.instructions+=1;goto B47b479;
case 0x47b47b:goto L47b47b;
case 0x47b47e:c.instructions+=3;goto B47b47e;
case 0x47b47f:c.instructions+=2;goto B47b47f;
case 0x47b483:c.instructions+=1;goto B47b483;
case 0x47b488:goto L47b488;
case 0x47b48c:c.instructions+=9;goto B47b48c;
case 0x47b490:c.instructions+=8;goto B47b490;
case 0x47b494:c.instructions+=7;goto B47b494;
case 0x47b497:c.instructions+=6;goto B47b497;
case 0x47b499:c.instructions+=5;goto B47b499;
case 0x47b49e:c.instructions+=4;goto B47b49e;
case 0x47b49f:c.instructions+=3;goto B47b49f;
case 0x47b4a0:c.instructions+=2;goto B47b4a0;
case 0x47b4a3:c.instructions+=1;goto B47b4a3;
case 0x47b4a8:goto L47b4a8;
case 0x47b4ab:c.instructions+=1;goto B47b4ab;
case 0x47b4ae:goto L47b4ae;
case 0x47b4b4:c.instructions+=3;goto B47b4b4;
case 0x47b4ba:c.instructions+=2;goto B47b4ba;
case 0x47b4bc:c.instructions+=1;goto B47b4bc;
case 0x47b4be:goto L47b4be;
case 0x47b4c4:c.instructions+=10;goto B47b4c4;
case 0x47b4c7:c.instructions+=9;goto B47b4c7;
case 0x47b4cd:c.instructions+=8;goto B47b4cd;
case 0x47b4d3:c.instructions+=7;goto B47b4d3;
case 0x47b4d9:c.instructions+=6;goto B47b4d9;
case 0x47b4df:c.instructions+=5;goto B47b4df;
case 0x47b4e5:c.instructions+=4;goto B47b4e5;
case 0x47b4e6:c.instructions+=3;goto B47b4e6;
case 0x47b4e7:c.instructions+=2;goto B47b4e7;
case 0x47b4ea:c.instructions+=1;goto B47b4ea;
case 0x47b4ed:goto L47b4ed;
case 0x47b4f3:c.instructions+=3;goto B47b4f3;
case 0x47b4f5:c.instructions+=2;goto B47b4f5;
case 0x47b4f6:c.instructions+=1;goto B47b4f6;
case 0x47b4fc:goto L47b4fc;
case 0x47b502:c.instructions+=3;goto B47b502;
case 0x47b505:c.instructions+=2;goto B47b505;
case 0x47b507:c.instructions+=1;goto B47b507;
case 0x47b50d:goto L47b50d;
case 0x47b50f:c.instructions+=2;goto B47b50f;
case 0x47b510:c.instructions+=1;goto B47b510;
case 0x47b513:goto L47b513;
case 0x47b519:c.instructions+=6;goto B47b519;
case 0x47b51b:c.instructions+=5;goto B47b51b;
case 0x47b51d:c.instructions+=4;goto B47b51d;
case 0x47b520:c.instructions+=3;goto B47b520;
case 0x47b521:c.instructions+=2;goto B47b521;
case 0x47b524:c.instructions+=1;goto B47b524;
case 0x47b529:goto L47b529;
case 0x47b52b:c.instructions+=1;goto B47b52b;
case 0x47b531:goto L47b531;
case 0x47b534:c.instructions+=8;goto B47b534;
case 0x47b53a:c.instructions+=7;goto B47b53a;
case 0x47b53d:c.instructions+=6;goto B47b53d;
case 0x47b544:c.instructions+=5;goto B47b544;
case 0x47b547:c.instructions+=4;goto B47b547;
case 0x47b54d:c.instructions+=3;goto B47b54d;
case 0x47b553:c.instructions+=2;goto B47b553;
case 0x47b554:c.instructions+=1;goto B47b554;
case 0x47b559:goto L47b559;
case 0x47b55f:c.instructions+=8;goto B47b55f;
case 0x47b561:c.instructions+=7;goto B47b561;
case 0x47b569:c.instructions+=6;goto B47b569;
case 0x47b56c:c.instructions+=5;goto B47b56c;
case 0x47b56d:c.instructions+=4;goto B47b56d;
case 0x47b573:c.instructions+=3;goto B47b573;
case 0x47b579:c.instructions+=2;goto B47b579;
case 0x47b57a:c.instructions+=1;goto B47b57a;
case 0x47b57f:goto L47b57f;
case 0x47b585:c.instructions+=3;goto B47b585;
case 0x47b587:c.instructions+=2;goto B47b587;
case 0x47b588:c.instructions+=1;goto B47b588;
case 0x47b58b:goto L47b58b;
case 0x47b591:c.instructions+=9;goto B47b591;
case 0x47b594:c.instructions+=8;goto B47b594;
case 0x47b59a:c.instructions+=7;goto B47b59a;
case 0x47b59d:c.instructions+=6;goto B47b59d;
case 0x47b59e:c.instructions+=5;goto B47b59e;
case 0x47b5a5:c.instructions+=4;goto B47b5a5;
case 0x47b5a6:c.instructions+=3;goto B47b5a6;
case 0x47b5a7:c.instructions+=2;goto B47b5a7;
case 0x47b5aa:c.instructions+=1;goto B47b5aa;
case 0x47b5ad:goto L47b5ad;
case 0x47b5b4:c.instructions+=1;goto B47b5b4;
case 0x47b5b6:goto L47b5b6;
case 0x47b5bc:c.instructions+=2;goto B47b5bc;
case 0x47b5be:c.instructions+=1;goto B47b5be;
case 0x47b5c0:goto L47b5c0;
case 0x47b5c6:c.instructions+=2;goto B47b5c6;
case 0x47b5cd:c.instructions+=1;goto B47b5cd;
case 0x47b5cf:goto L47b5cf;
case 0x47b5d5:c.instructions+=11;goto B47b5d5;
case 0x47b5d8:c.instructions+=10;goto B47b5d8;
case 0x47b5de:c.instructions+=9;goto B47b5de;
case 0x47b5e1:c.instructions+=8;goto B47b5e1;
case 0x47b5e8:c.instructions+=7;goto B47b5e8;
case 0x47b5eb:c.instructions+=6;goto B47b5eb;
case 0x47b5f3:c.instructions+=5;goto B47b5f3;
case 0x47b5f9:c.instructions+=4;goto B47b5f9;
case 0x47b5ff:c.instructions+=3;goto B47b5ff;
case 0x47b600:c.instructions+=2;goto B47b600;
case 0x47b601:c.instructions+=1;goto B47b601;
case 0x47b606:goto L47b606;
case 0x47b60c:c.instructions+=3;goto B47b60c;
case 0x47b60e:c.instructions+=2;goto B47b60e;
case 0x47b60f:c.instructions+=1;goto B47b60f;
case 0x47b612:goto L47b612;
case 0x47b618:c.instructions+=3;goto B47b618;
case 0x47b61b:c.instructions+=2;goto B47b61b;
case 0x47b61d:c.instructions+=1;goto B47b61d;
case 0x47b61f:goto L47b61f;
case 0x47b621:c.instructions+=2;goto B47b621;
case 0x47b622:c.instructions+=1;goto B47b622;
case 0x47b625:goto L47b625;
case 0x47b628:c.instructions+=4;goto B47b628;
case 0x47b62e:c.instructions+=3;goto B47b62e;
case 0x47b630:c.instructions+=2;goto B47b630;
case 0x47b632:c.instructions+=1;goto B47b632;
case 0x47b637:goto L47b637;
case 0x47b63a:c.instructions+=5;goto B47b63a;
case 0x47b640:c.instructions+=4;goto B47b640;
case 0x47b643:c.instructions+=3;goto B47b643;
case 0x47b644:c.instructions+=2;goto B47b644;
case 0x47b647:c.instructions+=1;goto B47b647;
case 0x47b64c:goto L47b64c;
case 0x47b64d:goto L47b64d;
case 0x47b64e:c.instructions+=3;goto B47b64e;
case 0x47b64f:c.instructions+=2;goto B47b64f;
case 0x47b652:c.instructions+=1;goto B47b652;
case 0x47b660:goto L47b660;
case 0x47b666:c.instructions+=23;goto B47b666;
case 0x47b66d:c.instructions+=22;goto B47b66d;
case 0x47b671:c.instructions+=21;goto B47b671;
case 0x47b678:c.instructions+=20;goto B47b678;
case 0x47b67e:c.instructions+=19;goto B47b67e;
case 0x47b685:c.instructions+=18;goto B47b685;
case 0x47b688:c.instructions+=17;goto B47b688;
case 0x47b689:c.instructions+=16;goto B47b689;
case 0x47b68a:c.instructions+=15;goto B47b68a;
case 0x47b690:c.instructions+=14;goto B47b690;
case 0x47b693:c.instructions+=13;goto B47b693;
case 0x47b69a:c.instructions+=12;goto B47b69a;
case 0x47b69b:c.instructions+=11;goto B47b69b;
case 0x47b69e:c.instructions+=10;goto B47b69e;
case 0x47b6a4:c.instructions+=9;goto B47b6a4;
case 0x47b6a5:c.instructions+=8;goto B47b6a5;
case 0x47b6a6:c.instructions+=7;goto B47b6a6;
case 0x47b6ac:c.instructions+=6;goto B47b6ac;
case 0x47b6b2:c.instructions+=5;goto B47b6b2;
case 0x47b6b3:c.instructions+=4;goto B47b6b3;
case 0x47b6bd:c.instructions+=3;goto B47b6bd;
case 0x47b6bf:c.instructions+=2;goto B47b6bf;
case 0x47b6c0:c.instructions+=1;goto B47b6c0;
case 0x47b6c3:goto L47b6c3;
case 0x47b6c8:c.instructions+=2;goto B47b6c8;
case 0x47b6cd:c.instructions+=1;goto B47b6cd;
case 0x47b6d2:goto L47b6d2;
case 0x47b6d5:c.instructions+=3;goto B47b6d5;
case 0x47b6d6:c.instructions+=2;goto B47b6d6;
case 0x47b6d7:c.instructions+=1;goto B47b6d7;
case 0x47b6e0:goto L47b6e0;
case 0x47b6e1:c.instructions+=5;goto B47b6e1;
case 0x47b6e4:c.instructions+=4;goto B47b6e4;
case 0x47b6ea:c.instructions+=3;goto B47b6ea;
case 0x47b6ed:c.instructions+=2;goto B47b6ed;
case 0x47b6ef:c.instructions+=1;goto B47b6ef;
case 0x47b6f1:goto L47b6f1;
case 0x47b6f3:c.instructions+=1;goto B47b6f3;
case 0x47b6f8:goto L47b6f8;
case 0x47b6fb:c.instructions+=2;goto B47b6fb;
case 0x47b6fd:c.instructions+=1;goto B47b6fd;
case 0x47b6ff:goto L47b6ff;
case 0x47b700:c.instructions+=1;goto B47b700;
case 0x47b705:goto L47b705;
case 0x47b708:goto L47b708;
case 0x47b709:c.instructions+=1;goto B47b709;
case 0x47b710:goto L47b710;
case 0x47b714:c.instructions+=10;goto B47b714;
case 0x47b718:c.instructions+=9;goto B47b718;
case 0x47b719:c.instructions+=8;goto B47b719;
case 0x47b71b:c.instructions+=7;goto B47b71b;
case 0x47b71f:c.instructions+=6;goto B47b71f;
case 0x47b720:c.instructions+=5;goto B47b720;
case 0x47b721:c.instructions+=4;goto B47b721;
case 0x47b722:c.instructions+=3;goto B47b722;
case 0x47b725:c.instructions+=2;goto B47b725;
case 0x47b72f:c.instructions+=1;goto B47b72f;
case 0x47b734:goto L47b734;
case 0x47b736:c.instructions+=1;goto B47b736;
case 0x47b738:goto L47b738;
case 0x47b73b:c.instructions+=4;goto B47b73b;
case 0x47b73e:c.instructions+=3;goto B47b73e;
case 0x47b741:c.instructions+=2;goto B47b741;
case 0x47b742:c.instructions+=1;goto B47b742;
case 0x47b745:goto L47b745;
case 0x47b749:c.instructions+=8;goto B47b749;
case 0x47b74c:c.instructions+=7;goto B47b74c;
case 0x47b74d:c.instructions+=6;goto B47b74d;
case 0x47b754:c.instructions+=5;goto B47b754;
case 0x47b757:c.instructions+=4;goto B47b757;
case 0x47b75b:c.instructions+=3;goto B47b75b;
case 0x47b75d:c.instructions+=2;goto B47b75d;
case 0x47b75e:c.instructions+=1;goto B47b75e;
case 0x47b760:goto L47b760;
case 0x47b764:goto L47b764;
case 0x47b765:c.instructions+=1;goto B47b765;
case 0x47b770:goto L47b770;
case 0x47b774:c.instructions+=2;goto B47b774;
case 0x47b77a:c.instructions+=1;goto B47b77a;
case 0x47b780:goto L47b780;
case 0x47b784:c.instructions+=4;goto B47b784;
case 0x47b785:c.instructions+=3;goto B47b785;
case 0x47b78c:c.instructions+=2;goto B47b78c;
case 0x47b78e:c.instructions+=1;goto B47b78e;
case 0x47b790:goto L47b790;
case 0x47b793:c.instructions+=2;goto B47b793;
case 0x47b795:c.instructions+=1;goto B47b795;
case 0x47b797:goto L47b797;
case 0x47b799:c.instructions+=1;goto B47b799;
case 0x47b79e:goto L47b79e;
case 0x47b7a1:goto L47b7a1;
case 0x47b7a5:c.instructions+=2;goto B47b7a5;
case 0x47b7a7:c.instructions+=1;goto B47b7a7;
case 0x47b7a9:goto L47b7a9;
case 0x47b7ac:c.instructions+=2;goto B47b7ac;
case 0x47b7ad:c.instructions+=1;goto B47b7ad;
case 0x47b7ae:goto L47b7ae;
case 0x47b7b2:c.instructions+=2;goto B47b7b2;
case 0x47b7b4:c.instructions+=1;goto B47b7b4;
case 0x47b7b6:goto L47b7b6;
case 0x47b7b9:c.instructions+=5;goto B47b7b9;
case 0x47b7bc:c.instructions+=4;goto B47b7bc;
case 0x47b7c0:c.instructions+=3;goto B47b7c0;
case 0x47b7c2:c.instructions+=2;goto B47b7c2;
case 0x47b7c5:c.instructions+=1;goto B47b7c5;
case 0x47b7c7:goto L47b7c7;
case 0x47b7ca:c.instructions+=2;goto B47b7ca;
case 0x47b7cb:c.instructions+=1;goto B47b7cb;
case 0x47b7cc:goto L47b7cc;
case 0x47b7d1:c.instructions+=2;goto B47b7d1;
case 0x47b7d2:c.instructions+=1;goto B47b7d2;
case 0x47b7e0:goto L47b7e0;
case 0x47b7e1:c.instructions+=4;goto B47b7e1;
case 0x47b7e5:c.instructions+=3;goto B47b7e5;
case 0x47b7ec:c.instructions+=2;goto B47b7ec;
case 0x47b7ee:c.instructions+=1;goto B47b7ee;
case 0x47b7f0:goto L47b7f0;
case 0x47b7f3:c.instructions+=2;goto B47b7f3;
case 0x47b7f5:c.instructions+=1;goto B47b7f5;
case 0x47b7f7:goto L47b7f7;
case 0x47b7f9:c.instructions+=1;goto B47b7f9;
case 0x47b7fe:goto L47b7fe;
case 0x47b801:goto L47b801;
case 0x47b808:c.instructions+=3;goto B47b808;
case 0x47b80b:c.instructions+=2;goto B47b80b;
case 0x47b80c:c.instructions+=1;goto B47b80c;
case 0x47b80d:goto L47b80d;
case 0x47b812:c.instructions+=2;goto B47b812;
case 0x47b813:c.instructions+=1;goto B47b813;
case 0x47b820:goto L47b820;
case 0x47b824:c.instructions+=9;goto B47b824;
case 0x47b825:c.instructions+=8;goto B47b825;
case 0x47b826:c.instructions+=7;goto B47b826;
case 0x47b827:c.instructions+=6;goto B47b827;
case 0x47b82e:c.instructions+=5;goto B47b82e;
case 0x47b830:c.instructions+=4;goto B47b830;
case 0x47b831:c.instructions+=3;goto B47b831;
case 0x47b837:c.instructions+=2;goto B47b837;
case 0x47b839:c.instructions+=1;goto B47b839;
case 0x47b83e:goto L47b83e;
case 0x47b840:c.instructions+=3;goto B47b840;
case 0x47b843:c.instructions+=2;goto B47b843;
case 0x47b845:c.instructions+=1;goto B47b845;
case 0x47b847:goto L47b847;
case 0x47b848:c.instructions+=1;goto B47b848;
case 0x47b84d:goto L47b84d;
case 0x47b850:goto L47b850;
case 0x47b853:c.instructions+=3;goto B47b853;
case 0x47b855:c.instructions+=2;goto B47b855;
case 0x47b858:c.instructions+=1;goto B47b858;
case 0x47b85a:goto L47b85a;
case 0x47b85c:c.instructions+=1;goto B47b85c;
case 0x47b85e:goto L47b85e;
case 0x47b85f:c.instructions+=4;goto B47b85f;
case 0x47b860:c.instructions+=3;goto B47b860;
case 0x47b865:c.instructions+=2;goto B47b865;
case 0x47b866:c.instructions+=1;goto B47b866;
case 0x47b867:goto L47b867;
case 0x47b868:c.instructions+=4;goto B47b868;
case 0x47b86c:c.instructions+=3;goto B47b86c;
case 0x47b86e:c.instructions+=2;goto B47b86e;
case 0x47b875:c.instructions+=1;goto B47b875;
case 0x47b877:goto L47b877;
case 0x47b879:c.instructions+=1;goto B47b879;
case 0x47b87b:goto L47b87b;
case 0x47b87d:c.instructions+=1;goto B47b87d;
case 0x47b87f:goto L47b87f;
case 0x47b882:c.instructions+=2;goto B47b882;
case 0x47b884:c.instructions+=1;goto B47b884;
case 0x47b886:goto L47b886;
case 0x47b88b:goto L47b88b;
case 0x47b88e:c.instructions+=4;goto B47b88e;
case 0x47b891:c.instructions+=3;goto B47b891;
case 0x47b892:c.instructions+=2;goto B47b892;
case 0x47b893:c.instructions+=1;goto B47b893;
case 0x47b898:goto L47b898;
case 0x47b89b:c.instructions+=1;goto B47b89b;
case 0x47b8a0:goto L47b8a0;
case 0x47b8a3:c.instructions+=6;goto B47b8a3;
case 0x47b8a4:c.instructions+=5;goto B47b8a4;
case 0x47b8a5:c.instructions+=4;goto B47b8a5;
case 0x47b8a7:c.instructions+=3;goto B47b8a7;
case 0x47b8a8:c.instructions+=2;goto B47b8a8;
case 0x47b8a9:c.instructions+=1;goto B47b8a9;
case 0x47b8aa:goto L47b8aa;
case 0x47b8ad:c.instructions+=1;goto B47b8ad;
case 0x47b8b2:goto L47b8b2;
case 0x47b8b5:c.instructions+=7;goto B47b8b5;
case 0x47b8b6:c.instructions+=6;goto B47b8b6;
case 0x47b8b9:c.instructions+=5;goto B47b8b9;
case 0x47b8bf:c.instructions+=4;goto B47b8bf;
case 0x47b8c2:c.instructions+=3;goto B47b8c2;
case 0x47b8c4:c.instructions+=2;goto B47b8c4;
case 0x47b8c5:c.instructions+=1;goto B47b8c5;
case 0x47b8ca:goto L47b8ca;
case 0x47b8cd:c.instructions+=1;goto B47b8cd;
case 0x47b8d2:goto L47b8d2;
case 0x47b8d5:goto L47b8d5;
case 0x47b8d6:c.instructions+=5;goto B47b8d6;
case 0x47b8d7:c.instructions+=4;goto B47b8d7;
case 0x47b8d9:c.instructions+=3;goto B47b8d9;
case 0x47b8da:c.instructions+=2;goto B47b8da;
case 0x47b8db:c.instructions+=1;goto B47b8db;
case 0x47b8e0:goto L47b8e0;
case 0x47b8e1:c.instructions+=5;goto B47b8e1;
case 0x47b8e2:c.instructions+=4;goto B47b8e2;
case 0x47b8e4:c.instructions+=3;goto B47b8e4;
case 0x47b8e7:c.instructions+=2;goto B47b8e7;
case 0x47b8e9:c.instructions+=1;goto B47b8e9;
case 0x47b8eb:goto L47b8eb;
case 0x47b8ee:c.instructions+=2;goto B47b8ee;
case 0x47b8f0:c.instructions+=1;goto B47b8f0;
case 0x47b8f2:goto L47b8f2;
case 0x47b8f7:c.instructions+=6;goto B47b8f7;
case 0x47b8fa:c.instructions+=5;goto B47b8fa;
case 0x47b8fd:c.instructions+=4;goto B47b8fd;
case 0x47b903:c.instructions+=3;goto B47b903;
case 0x47b905:c.instructions+=2;goto B47b905;
case 0x47b908:c.instructions+=1;goto B47b908;
case 0x47b90a:goto L47b90a;
case 0x47b90d:c.instructions+=4;goto B47b90d;
case 0x47b90e:c.instructions+=3;goto B47b90e;
case 0x47b913:c.instructions+=2;goto B47b913;
case 0x47b915:c.instructions+=1;goto B47b915;
case 0x47b91a:goto L47b91a;
case 0x47b91d:c.instructions+=2;goto B47b91d;
case 0x47b91f:c.instructions+=1;goto B47b91f;
case 0x47b924:goto L47b924;
case 0x47b928:goto L47b928;
case 0x47b92b:c.instructions+=2;goto B47b92b;
case 0x47b92d:c.instructions+=1;goto B47b92d;
case 0x47b92f:goto L47b92f;
case 0x47b932:c.instructions+=2;goto B47b932;
case 0x47b935:c.instructions+=1;goto B47b935;
case 0x47b937:goto L47b937;
case 0x47b938:c.instructions+=2;goto B47b938;
case 0x47b93a:c.instructions+=1;goto B47b93a;
case 0x47b93f:goto L47b93f;
case 0x47b943:c.instructions+=4;goto B47b943;
case 0x47b947:c.instructions+=3;goto B47b947;
case 0x47b94d:c.instructions+=2;goto B47b94d;
case 0x47b953:c.instructions+=1;goto B47b953;
case 0x47b958:goto L47b958;
case 0x47b95b:c.instructions+=3;goto B47b95b;
case 0x47b95e:c.instructions+=2;goto B47b95e;
case 0x47b961:c.instructions+=1;goto B47b961;
case 0x47b966:goto L47b966;
case 0x47b969:c.instructions+=7;goto B47b969;
case 0x47b96c:c.instructions+=6;goto B47b96c;
case 0x47b96d:c.instructions+=5;goto B47b96d;
case 0x47b973:c.instructions+=4;goto B47b973;
case 0x47b976:c.instructions+=3;goto B47b976;
case 0x47b978:c.instructions+=2;goto B47b978;
case 0x47b979:c.instructions+=1;goto B47b979;
case 0x47b97e:goto L47b97e;
case 0x47b981:c.instructions+=3;goto B47b981;
case 0x47b982:c.instructions+=2;goto B47b982;
case 0x47b985:c.instructions+=1;goto B47b985;
case 0x47b98a:goto L47b98a;
case 0x47b98b:c.instructions+=2;goto B47b98b;
case 0x47b98c:c.instructions+=1;goto B47b98c;
case 0x47b990:goto L47b990;
case 0x47b993:c.instructions+=3;goto B47b993;
case 0x47b994:c.instructions+=2;goto B47b994;
case 0x47b996:c.instructions+=1;goto B47b996;
case 0x47b99b:goto L47b99b;
case 0x47b9a0:goto L47b9a0;
case 0x47b9a2:c.instructions+=1;goto B47b9a2;
case 0x47b9a4:goto L47b9a4;
case 0x47b9a7:c.instructions+=2;goto B47b9a7;
case 0x47b9ab:c.instructions+=1;goto B47b9ab;
case 0x47b9ad:goto L47b9ad;
case 0x47b9b3:c.instructions+=4;goto B47b9b3;
case 0x47b9b9:c.instructions+=3;goto B47b9b9;
case 0x47b9bc:c.instructions+=2;goto B47b9bc;
case 0x47b9be:c.instructions+=1;goto B47b9be;
case 0x47b9c0:goto L47b9c0;
case 0x47b9c2:c.instructions+=3;goto B47b9c2;
case 0x47b9c5:c.instructions+=2;goto B47b9c5;
case 0x47b9c7:c.instructions+=1;goto B47b9c7;
case 0x47b9cd:goto L47b9cd;
case 0x47b9cf:c.instructions+=1;goto B47b9cf;
case 0x47b9d4:goto L47b9d4;
case 0x47b9d6:c.instructions+=1;goto B47b9d6;
case 0x47b9d8:goto L47b9d8;
case 0x47b9db:c.instructions+=3;goto B47b9db;
case 0x47b9de:c.instructions+=2;goto B47b9de;
case 0x47b9df:c.instructions+=1;goto B47b9df;
case 0x47b9e4:goto L47b9e4;
case 0x47b9e7:c.instructions+=3;goto B47b9e7;
case 0x47b9ea:c.instructions+=2;goto B47b9ea;
case 0x47b9ec:c.instructions+=1;goto B47b9ec;
case 0x47b9ee:goto L47b9ee;
case 0x47b9f1:c.instructions+=4;goto B47b9f1;
case 0x47b9f2:c.instructions+=3;goto B47b9f2;
case 0x47b9f7:c.instructions+=2;goto B47b9f7;
case 0x47b9f9:c.instructions+=1;goto B47b9f9;
case 0x47b9fe:goto L47b9fe;
case 0x47ba01:c.instructions+=2;goto B47ba01;
case 0x47ba02:c.instructions+=1;goto B47ba02;
case 0x47ba07:goto L47ba07;
case 0x47ba0a:c.instructions+=1;goto B47ba0a;
case 0x47ba11:goto L47ba11;
case 0x47ba16:c.instructions+=3;goto B47ba16;
case 0x47ba19:c.instructions+=2;goto B47ba19;
case 0x47ba1b:c.instructions+=1;goto B47ba1b;
case 0x47ba1d:goto L47ba1d;
case 0x47ba20:c.instructions+=2;goto B47ba20;
case 0x47ba22:c.instructions+=1;goto B47ba22;
case 0x47ba24:goto L47ba24;
case 0x47ba27:c.instructions+=2;goto B47ba27;
case 0x47ba2a:c.instructions+=1;goto B47ba2a;
case 0x47ba2c:goto L47ba2c;
case 0x47ba2f:c.instructions+=1;goto B47ba2f;
case 0x47ba31:goto L47ba31;
case 0x47ba34:c.instructions+=2;goto B47ba34;
case 0x47ba37:c.instructions+=1;goto B47ba37;
case 0x47ba3c:goto L47ba3c;
case 0x47ba40:c.instructions+=1;goto B47ba40;
case 0x47ba42:goto L47ba42;
case 0x47ba46:c.instructions+=1;goto B47ba46;
case 0x47ba4c:goto L47ba4c;
case 0x47ba4f:c.instructions+=2;goto B47ba4f;
case 0x47ba51:c.instructions+=1;goto B47ba51;
case 0x47ba53:goto L47ba53;
case 0x47ba56:c.instructions+=2;goto B47ba56;
case 0x47ba58:c.instructions+=1;goto B47ba58;
case 0x47ba5a:goto L47ba5a;
case 0x47ba5f:c.instructions+=3;goto B47ba5f;
case 0x47ba62:c.instructions+=2;goto B47ba62;
case 0x47ba64:c.instructions+=1;goto B47ba64;
case 0x47ba66:goto L47ba66;
case 0x47ba68:c.instructions+=1;goto B47ba68;
case 0x47ba6b:goto L47ba6b;
case 0x47ba6d:goto L47ba6d;
case 0x47ba6f:goto L47ba6f;
case 0x47ba70:c.instructions+=1;goto B47ba70;
case 0x47ba75:goto L47ba75;
case 0x47ba78:c.instructions+=2;goto B47ba78;
case 0x47ba7b:c.instructions+=1;goto B47ba7b;
case 0x47ba82:goto L47ba82;
case 0x47ba88:c.instructions+=4;goto B47ba88;
case 0x47ba8b:c.instructions+=3;goto B47ba8b;
case 0x47ba8d:c.instructions+=2;goto B47ba8d;
case 0x47ba8e:c.instructions+=1;goto B47ba8e;
case 0x47ba90:goto L47ba90;
case 0x47ba93:c.instructions+=2;goto B47ba93;
case 0x47ba95:c.instructions+=1;goto B47ba95;
case 0x47ba97:goto L47ba97;
case 0x47ba9a:c.instructions+=2;goto B47ba9a;
case 0x47ba9d:c.instructions+=1;goto B47ba9d;
case 0x47baa2:goto L47baa2;
case 0x47baa5:c.instructions+=3;goto B47baa5;
case 0x47baaa:c.instructions+=2;goto B47baaa;
case 0x47baab:c.instructions+=1;goto B47baab;
case 0x47bab0:goto L47bab0;
case 0x47bab3:c.instructions+=1;goto B47bab3;
case 0x47bab8:goto L47bab8;
case 0x47babc:goto L47babc;
case 0x47babf:c.instructions+=2;goto B47babf;
case 0x47bac1:c.instructions+=1;goto B47bac1;
case 0x47bac3:goto L47bac3;
case 0x47bac6:c.instructions+=2;goto B47bac6;
case 0x47bac9:c.instructions+=1;goto B47bac9;
case 0x47bace:goto L47bace;
case 0x47bad1:c.instructions+=4;goto B47bad1;
case 0x47bad5:c.instructions+=3;goto B47bad5;
case 0x47bad6:c.instructions+=2;goto B47bad6;
case 0x47bad7:c.instructions+=1;goto B47bad7;
case 0x47badc:goto L47badc;
case 0x47badf:c.instructions+=2;goto B47badf;
case 0x47bae1:c.instructions+=1;goto B47bae1;
case 0x47bae6:goto L47bae6;
case 0x47bae8:c.instructions+=1;goto B47bae8;
case 0x47baea:goto L47baea;
case 0x47baee:c.instructions+=2;goto B47baee;
case 0x47baf0:c.instructions+=1;goto B47baf0;
case 0x47baf2:goto L47baf2;
case 0x47baf5:c.instructions+=4;goto B47baf5;
case 0x47baf6:c.instructions+=3;goto B47baf6;
case 0x47baf7:c.instructions+=2;goto B47baf7;
case 0x47bafa:c.instructions+=1;goto B47bafa;
case 0x47bafd:goto L47bafd;
case 0x47bafe:goto L47bafe;
case 0x47baff:c.instructions+=2;goto B47baff;
case 0x47bb02:c.instructions+=1;goto B47bb02;
case 0x47bb10:goto L47bb10;
case 0x47bb11:c.instructions+=2;goto B47bb11;
case 0x47bb13:c.instructions+=1;goto B47bb13;
case 0x47bb18:goto L47bb18;
case 0x47bb1d:c.instructions+=1;goto B47bb1d;
case 0x47bb1f:goto L47bb1f;
case 0x47bb20:c.instructions+=1;goto B47bb20;
case 0x47bb25:goto L47bb25;
case 0x47bb28:goto L47bb28;
case 0x47bb2a:c.instructions+=2;goto B47bb2a;
case 0x47bb2b:c.instructions+=1;goto B47bb2b;
case 0x47bb30:goto L47bb30;
case 0x47bb31:c.instructions+=4;goto B47bb31;
case 0x47bb33:c.instructions+=3;goto B47bb33;
case 0x47bb36:c.instructions+=2;goto B47bb36;
case 0x47bb38:c.instructions+=1;goto B47bb38;
case 0x47bb3e:goto L47bb3e;
case 0x47bb3f:c.instructions+=4;goto B47bb3f;
case 0x47bb43:c.instructions+=3;goto B47bb43;
case 0x47bb45:c.instructions+=2;goto B47bb45;
case 0x47bb46:c.instructions+=1;goto B47bb46;
case 0x47bb48:goto L47bb48;
case 0x47bb4b:c.instructions+=2;goto B47bb4b;
case 0x47bb4e:c.instructions+=1;goto B47bb4e;
case 0x47bb53:goto L47bb53;
case 0x47bb55:goto L47bb55;
case 0x47bb59:c.instructions+=3;goto B47bb59;
case 0x47bb5c:c.instructions+=2;goto B47bb5c;
case 0x47bb61:c.instructions+=1;goto B47bb61;
case 0x47bb63:goto L47bb63;
case 0x47bb64:c.instructions+=1;goto B47bb64;
case 0x47bb66:goto L47bb66;
case 0x47bb6a:c.instructions+=2;goto B47bb6a;
case 0x47bb72:c.instructions+=1;goto B47bb72;
case 0x47bb74:goto L47bb74;
case 0x47bb78:c.instructions+=1;goto B47bb78;
case 0x47bb80:goto L47bb80;
case 0x47bb83:c.instructions+=3;goto B47bb83;
case 0x47bb86:c.instructions+=2;goto B47bb86;
case 0x47bb89:c.instructions+=1;goto B47bb89;
case 0x47bb8c:goto L47bb8c;
case 0x47bb8f:c.instructions+=5;goto B47bb8f;
case 0x47bb93:c.instructions+=4;goto B47bb93;
case 0x47bb96:c.instructions+=3;goto B47bb96;
case 0x47bb98:c.instructions+=2;goto B47bb98;
case 0x47bb9a:c.instructions+=1;goto B47bb9a;
case 0x47bb9c:goto L47bb9c;
case 0x47bb9f:c.instructions+=1;goto B47bb9f;
case 0x47bba0:goto L47bba0;
case 0x47bba2:c.instructions+=2;goto B47bba2;
case 0x47bba4:c.instructions+=1;goto B47bba4;
case 0x47bba6:goto L47bba6;
case 0x47bba9:c.instructions+=2;goto B47bba9;
case 0x47bbab:c.instructions+=1;goto B47bbab;
case 0x47bbad:goto L47bbad;
case 0x47bbaf:c.instructions+=2;goto B47bbaf;
case 0x47bbb1:c.instructions+=1;goto B47bbb1;
case 0x47bbb3:goto L47bbb3;
case 0x47bbb9:c.instructions+=1;goto B47bbb9;
case 0x47bbbb:goto L47bbbb;
case 0x47bbbe:c.instructions+=2;goto B47bbbe;
case 0x47bbbf:c.instructions+=1;goto B47bbbf;
case 0x47bbc4:goto L47bbc4;
case 0x47bbc8:goto L47bbc8;
case 0x47bbcb:c.instructions+=5;goto B47bbcb;
case 0x47bbcf:c.instructions+=4;goto B47bbcf;
case 0x47bbd0:c.instructions+=3;goto B47bbd0;
case 0x47bbd3:c.instructions+=2;goto B47bbd3;
case 0x47bbd5:c.instructions+=1;goto B47bbd5;
case 0x47bbd7:goto L47bbd7;
case 0x47bbd8:c.instructions+=1;goto B47bbd8;
case 0x47bbd9:goto L47bbd9;
case 0x47bbda:c.instructions+=1;goto B47bbda;
case 0x47bbe0:goto L47bbe0;
case 0x47bbe2:c.instructions+=11;goto B47bbe2;
case 0x47bbe7:c.instructions+=10;goto B47bbe7;
case 0x47bbed:c.instructions+=9;goto B47bbed;
case 0x47bbee:c.instructions+=8;goto B47bbee;
case 0x47bbf5:c.instructions+=7;goto B47bbf5;
case 0x47bbf6:c.instructions+=6;goto B47bbf6;
case 0x47bbf7:c.instructions+=5;goto B47bbf7;
case 0x47bbf9:c.instructions+=4;goto B47bbf9;
case 0x47bbfd:c.instructions+=3;goto B47bbfd;
case 0x47bc03:c.instructions+=2;goto B47bc03;
case 0x47bc0b:c.instructions+=1;goto B47bc0b;
case 0x47bc10:goto L47bc10;
case 0x47bc14:c.instructions+=5;goto B47bc14;
case 0x47bc1a:c.instructions+=4;goto B47bc1a;
case 0x47bc1b:c.instructions+=3;goto B47bc1b;
case 0x47bc22:c.instructions+=2;goto B47bc22;
case 0x47bc25:c.instructions+=1;goto B47bc25;
case 0x47bc30:goto L47bc30;
case 0x47bc34:c.instructions+=5;goto B47bc34;
case 0x47bc3a:c.instructions+=4;goto B47bc3a;
case 0x47bc3b:c.instructions+=3;goto B47bc3b;
case 0x47bc3c:c.instructions+=2;goto B47bc3c;
case 0x47bc3d:c.instructions+=1;goto B47bc3d;
case 0x47bc3f:goto L47bc3f;
case 0x47bc42:c.instructions+=4;goto B47bc42;
case 0x47bc46:c.instructions+=3;goto B47bc46;
case 0x47bc49:c.instructions+=2;goto B47bc49;
case 0x47bc4b:c.instructions+=1;goto B47bc4b;
case 0x47bc4d:goto L47bc4d;
case 0x47bc50:goto L47bc50;
case 0x47bc56:c.instructions+=1;goto B47bc56;
case 0x47bc58:goto L47bc58;
case 0x47bc5d:c.instructions+=3;goto B47bc5d;
case 0x47bc5f:c.instructions+=2;goto B47bc5f;
case 0x47bc62:c.instructions+=1;goto B47bc62;
case 0x47bc64:goto L47bc64;
case 0x47bc6a:c.instructions+=2;goto B47bc6a;
case 0x47bc6c:c.instructions+=1;goto B47bc6c;
case 0x47bc6e:goto L47bc6e;
case 0x47bc72:c.instructions+=3;goto B47bc72;
case 0x47bc73:c.instructions+=2;goto B47bc73;
case 0x47bc77:c.instructions+=1;goto B47bc77;
case 0x47bc7c:goto L47bc7c;
case 0x47bc7f:c.instructions+=7;goto B47bc7f;
case 0x47bc83:c.instructions+=6;goto B47bc83;
case 0x47bc86:c.instructions+=5;goto B47bc86;
case 0x47bc89:c.instructions+=4;goto B47bc89;
case 0x47bc8c:c.instructions+=3;goto B47bc8c;
case 0x47bc8e:c.instructions+=2;goto B47bc8e;
case 0x47bc90:c.instructions+=1;goto B47bc90;
case 0x47bc92:goto L47bc92;
case 0x47bc99:c.instructions+=4;goto B47bc99;
case 0x47bc9d:c.instructions+=3;goto B47bc9d;
case 0x47bc9e:c.instructions+=2;goto B47bc9e;
case 0x47bca0:c.instructions+=1;goto B47bca0;
case 0x47bca2:goto L47bca2;
case 0x47bca5:c.instructions+=3;goto B47bca5;
case 0x47bca9:c.instructions+=2;goto B47bca9;
case 0x47bcab:c.instructions+=1;goto B47bcab;
case 0x47bcad:goto L47bcad;
case 0x47bcae:c.instructions+=4;goto B47bcae;
case 0x47bcaf:c.instructions+=3;goto B47bcaf;
case 0x47bcb4:c.instructions+=2;goto B47bcb4;
case 0x47bcb5:c.instructions+=1;goto B47bcb5;
case 0x47bcb6:goto L47bcb6;
case 0x47bcb7:c.instructions+=4;goto B47bcb7;
case 0x47bcb8:c.instructions+=3;goto B47bcb8;
case 0x47bcba:c.instructions+=2;goto B47bcba;
case 0x47bcbb:c.instructions+=1;goto B47bcbb;
case 0x47bcc0:goto L47bcc0;
case 0x47bcc1:c.instructions+=8;goto B47bcc1;
case 0x47bcc2:c.instructions+=7;goto B47bcc2;
case 0x47bcc3:c.instructions+=6;goto B47bcc3;
case 0x47bcc5:c.instructions+=5;goto B47bcc5;
case 0x47bccb:c.instructions+=4;goto B47bccb;
case 0x47bcce:c.instructions+=3;goto B47bcce;
case 0x47bcd1:c.instructions+=2;goto B47bcd1;
case 0x47bcd2:c.instructions+=1;goto B47bcd2;
case 0x47bcd7:goto L47bcd7;
case 0x47bcda:c.instructions+=8;goto B47bcda;
case 0x47bcde:c.instructions+=7;goto B47bcde;
case 0x47bce2:c.instructions+=6;goto B47bce2;
case 0x47bce8:c.instructions+=5;goto B47bce8;
case 0x47bcec:c.instructions+=4;goto B47bcec;
case 0x47bcf2:c.instructions+=3;goto B47bcf2;
case 0x47bcf4:c.instructions+=2;goto B47bcf4;
case 0x47bcf7:c.instructions+=1;goto B47bcf7;
case 0x47bcf9:goto L47bcf9;
case 0x47bcfd:c.instructions+=2;goto B47bcfd;
case 0x47bd03:c.instructions+=1;goto B47bd03;
case 0x47bd07:goto L47bd07;
case 0x47bd0b:c.instructions+=5;goto B47bd0b;
case 0x47bd0f:c.instructions+=4;goto B47bd0f;
case 0x47bd10:c.instructions+=3;goto B47bd10;
case 0x47bd11:c.instructions+=2;goto B47bd11;
case 0x47bd14:c.instructions+=1;goto B47bd14;
case 0x47bd19:goto L47bd19;
case 0x47bd1a:c.instructions+=3;goto B47bd1a;
case 0x47bd1b:c.instructions+=2;goto B47bd1b;
case 0x47bd1e:c.instructions+=1;goto B47bd1e;
case 0x47bd23:goto L47bd23;
case 0x47bd29:c.instructions+=26;goto B47bd29;
case 0x47bd2c:c.instructions+=25;goto B47bd2c;
case 0x47bd2f:c.instructions+=24;goto B47bd2f;
case 0x47bd35:c.instructions+=23;goto B47bd35;
case 0x47bd36:c.instructions+=22;goto B47bd36;
case 0x47bd3c:c.instructions+=21;goto B47bd3c;
case 0x47bd3d:c.instructions+=20;goto B47bd3d;
case 0x47bd43:c.instructions+=19;goto B47bd43;
case 0x47bd49:c.instructions+=18;goto B47bd49;
case 0x47bd4f:c.instructions+=17;goto B47bd4f;
case 0x47bd51:c.instructions+=16;goto B47bd51;
case 0x47bd53:c.instructions+=15;goto B47bd53;
case 0x47bd55:c.instructions+=14;goto B47bd55;
case 0x47bd57:c.instructions+=13;goto B47bd57;
case 0x47bd59:c.instructions+=12;goto B47bd59;
case 0x47bd5b:c.instructions+=11;goto B47bd5b;
case 0x47bd5d:c.instructions+=10;goto B47bd5d;
case 0x47bd5f:c.instructions+=9;goto B47bd5f;
case 0x47bd61:c.instructions+=8;goto B47bd61;
case 0x47bd63:c.instructions+=7;goto B47bd63;
case 0x47bd65:c.instructions+=6;goto B47bd65;
case 0x47bd67:c.instructions+=5;goto B47bd67;
case 0x47bd69:c.instructions+=4;goto B47bd69;
case 0x47bd6c:c.instructions+=3;goto B47bd6c;
case 0x47bd6e:c.instructions+=2;goto B47bd6e;
case 0x47bd70:c.instructions+=1;goto B47bd70;
case 0x47bd75:goto L47bd75;
case 0x47bd7b:c.instructions+=26;goto B47bd7b;
case 0x47bd7e:c.instructions+=25;goto B47bd7e;
case 0x47bd81:c.instructions+=24;goto B47bd81;
case 0x47bd87:c.instructions+=23;goto B47bd87;
case 0x47bd88:c.instructions+=22;goto B47bd88;
case 0x47bd8e:c.instructions+=21;goto B47bd8e;
case 0x47bd8f:c.instructions+=20;goto B47bd8f;
case 0x47bd95:c.instructions+=19;goto B47bd95;
case 0x47bd9b:c.instructions+=18;goto B47bd9b;
case 0x47bda1:c.instructions+=17;goto B47bda1;
case 0x47bda3:c.instructions+=16;goto B47bda3;
case 0x47bda5:c.instructions+=15;goto B47bda5;
case 0x47bda7:c.instructions+=14;goto B47bda7;
case 0x47bda9:c.instructions+=13;goto B47bda9;
case 0x47bdab:c.instructions+=12;goto B47bdab;
case 0x47bdad:c.instructions+=11;goto B47bdad;
case 0x47bdaf:c.instructions+=10;goto B47bdaf;
case 0x47bdb1:c.instructions+=9;goto B47bdb1;
case 0x47bdb3:c.instructions+=8;goto B47bdb3;
case 0x47bdb5:c.instructions+=7;goto B47bdb5;
case 0x47bdb7:c.instructions+=6;goto B47bdb7;
case 0x47bdb9:c.instructions+=5;goto B47bdb9;
case 0x47bdbb:c.instructions+=4;goto B47bdbb;
case 0x47bdbe:c.instructions+=3;goto B47bdbe;
case 0x47bdc0:c.instructions+=2;goto B47bdc0;
case 0x47bdc2:c.instructions+=1;goto B47bdc2;
case 0x47bdc7:goto L47bdc7;
case 0x47bdcd:c.instructions+=5;goto B47bdcd;
case 0x47bdd3:c.instructions+=4;goto B47bdd3;
case 0x47bdd4:c.instructions+=3;goto B47bdd4;
case 0x47bdd5:c.instructions+=2;goto B47bdd5;
case 0x47bddb:c.instructions+=1;goto B47bddb;
case 0x47bde0:goto L47bde0;
case 0x47bde1:c.instructions+=2;goto B47bde1;
case 0x47bde3:c.instructions+=1;goto B47bde3;
case 0x47bde8:goto L47bde8;
case 0x47bde9:c.instructions+=4;goto B47bde9;
case 0x47bdea:c.instructions+=3;goto B47bdea;
case 0x47bdeb:c.instructions+=2;goto B47bdeb;
case 0x47bdec:c.instructions+=1;goto B47bdec;
case 0x47bdf0:goto L47bdf0;
case 0x47bdf1:c.instructions+=4;goto B47bdf1;
case 0x47bdf3:c.instructions+=3;goto B47bdf3;
case 0x47bdf6:c.instructions+=2;goto B47bdf6;
case 0x47bdf8:c.instructions+=1;goto B47bdf8;
case 0x47bdfa:goto L47bdfa;
case 0x47bdfe:c.instructions+=4;goto B47bdfe;
case 0x47be02:c.instructions+=3;goto B47be02;
case 0x47be05:c.instructions+=2;goto B47be05;
case 0x47be08:c.instructions+=1;goto B47be08;
case 0x47be0b:goto L47be0b;
case 0x47be0c:c.instructions+=2;goto B47be0c;
case 0x47be0e:c.instructions+=1;goto B47be0e;
case 0x47be13:goto L47be13;
case 0x47be19:c.instructions+=16;goto B47be19;
case 0x47be1f:c.instructions+=15;goto B47be1f;
case 0x47be25:c.instructions+=14;goto B47be25;
case 0x47be2b:c.instructions+=13;goto B47be2b;
case 0x47be2d:c.instructions+=12;goto B47be2d;
case 0x47be33:c.instructions+=11;goto B47be33;
case 0x47be35:c.instructions+=10;goto B47be35;
case 0x47be3b:c.instructions+=9;goto B47be3b;
case 0x47be3d:c.instructions+=8;goto B47be3d;
case 0x47be3f:c.instructions+=7;goto B47be3f;
case 0x47be41:c.instructions+=6;goto B47be41;
case 0x47be43:c.instructions+=5;goto B47be43;
case 0x47be46:c.instructions+=4;goto B47be46;
case 0x47be49:c.instructions+=3;goto B47be49;
case 0x47be4c:c.instructions+=2;goto B47be4c;
case 0x47be4d:c.instructions+=1;goto B47be4d;
case 0x47be4f:goto L47be4f;
case 0x47be51:goto L47be51;
case 0x47be53:c.instructions+=1;goto B47be53;
case 0x47be55:goto L47be55;
case 0x47be57:goto L47be57;
case 0x47be5a:c.instructions+=2;goto B47be5a;
case 0x47be5c:c.instructions+=1;goto B47be5c;
case 0x47be5e:goto L47be5e;
case 0x47be60:c.instructions+=3;goto B47be60;
case 0x47be63:c.instructions+=2;goto B47be63;
case 0x47be64:c.instructions+=1;goto B47be64;
case 0x47be67:goto L47be67;
case 0x47be6c:c.instructions+=1;goto B47be6c;
case 0x47be6e:goto L47be6e;
case 0x47be73:goto L47be73;
case 0x47be76:c.instructions+=2;goto B47be76;
case 0x47be77:c.instructions+=1;goto B47be77;
case 0x47be80:goto L47be80;
case 0x47be83:c.instructions+=2;goto B47be83;
case 0x47be85:c.instructions+=1;goto B47be85;
case 0x47be87:goto L47be87;
case 0x47be8b:c.instructions+=4;goto B47be8b;
case 0x47be8f:c.instructions+=3;goto B47be8f;
case 0x47be92:c.instructions+=2;goto B47be92;
case 0x47be95:c.instructions+=1;goto B47be95;
case 0x47be98:goto L47be98;
case 0x47be9d:goto L47be9d;
case 0x47bea0:goto L47bea0;
case 0x47bea1:c.instructions+=6;goto B47bea1;
case 0x47bea2:c.instructions+=5;goto B47bea2;
case 0x47bea4:c.instructions+=4;goto B47bea4;
case 0x47bea7:c.instructions+=3;goto B47bea7;
case 0x47bea8:c.instructions+=2;goto B47bea8;
case 0x47beab:c.instructions+=1;goto B47beab;
case 0x47bead:goto L47bead;
case 0x47beb4:c.instructions+=1;goto B47beb4;
case 0x47bebb:goto L47bebb;
case 0x47bebf:c.instructions+=3;goto B47bebf;
case 0x47bec0:c.instructions+=2;goto B47bec0;
case 0x47bec6:c.instructions+=1;goto B47bec6;
case 0x47becb:goto L47becb;
case 0x47becc:c.instructions+=2;goto B47becc;
case 0x47becd:c.instructions+=1;goto B47becd;
case 0x47bed0:goto L47bed0;
case 0x47bed3:c.instructions+=3;goto B47bed3;
case 0x47bed6:c.instructions+=2;goto B47bed6;
case 0x47bed8:c.instructions+=1;goto B47bed8;
case 0x47bedb:goto L47bedb;
case 0x47bedf:c.instructions+=6;goto B47bedf;
case 0x47bee3:c.instructions+=5;goto B47bee3;
case 0x47bee9:c.instructions+=4;goto B47bee9;
case 0x47beef:c.instructions+=3;goto B47beef;
case 0x47bef0:c.instructions+=2;goto B47bef0;
case 0x47bef2:c.instructions+=1;goto B47bef2;
case 0x47bef7:goto L47bef7;
case 0x47befa:c.instructions+=2;goto B47befa;
case 0x47befc:c.instructions+=1;goto B47befc;
case 0x47befe:goto L47befe;
case 0x47bf02:c.instructions+=1;goto B47bf02;
case 0x47bf05:goto L47bf05;
case 0x47bf06:c.instructions+=2;goto B47bf06;
case 0x47bf07:c.instructions+=1;goto B47bf07;
case 0x47bf20:goto L47bf20;
case 0x47bf21:c.instructions+=6;goto B47bf21;
case 0x47bf25:c.instructions+=5;goto B47bf25;
case 0x47bf26:c.instructions+=4;goto B47bf26;
case 0x47bf28:c.instructions+=3;goto B47bf28;
case 0x47bf2e:c.instructions+=2;goto B47bf2e;
case 0x47bf30:c.instructions+=1;goto B47bf30;
case 0x47bf32:goto L47bf32;
case 0x47bf35:c.instructions+=9;goto B47bf35;
case 0x47bf38:c.instructions+=8;goto B47bf38;
case 0x47bf3b:c.instructions+=7;goto B47bf3b;
case 0x47bf3c:c.instructions+=6;goto B47bf3c;
case 0x47bf42:c.instructions+=5;goto B47bf42;
case 0x47bf46:c.instructions+=4;goto B47bf46;
case 0x47bf47:c.instructions+=3;goto B47bf47;
case 0x47bf4a:c.instructions+=2;goto B47bf4a;
case 0x47bf4c:c.instructions+=1;goto B47bf4c;
case 0x47bf51:goto L47bf51;
case 0x47bf54:c.instructions+=2;goto B47bf54;
case 0x47bf56:c.instructions+=1;goto B47bf56;
case 0x47bf58:goto L47bf58;
case 0x47bf5c:c.instructions+=1;goto B47bf5c;
case 0x47bf5f:goto L47bf5f;
case 0x47bf60:goto L47bf60;
case 0x47bf63:c.instructions+=3;goto B47bf63;
case 0x47bf64:c.instructions+=2;goto B47bf64;
case 0x47bf67:c.instructions+=1;goto B47bf67;
case 0x47bf69:goto L47bf69;
case 0x47bf70:c.instructions+=1;goto B47bf70;
case 0x47bf77:goto L47bf77;
case 0x47bf78:c.instructions+=2;goto B47bf78;
case 0x47bf7e:c.instructions+=1;goto B47bf7e;
case 0x47bf83:goto L47bf83;
case 0x47bf84:c.instructions+=2;goto B47bf84;
case 0x47bf85:c.instructions+=1;goto B47bf85;
case 0x47bf88:goto L47bf88;
case 0x47bf8b:c.instructions+=8;goto B47bf8b;
case 0x47bf8e:c.instructions+=7;goto B47bf8e;
case 0x47bf91:c.instructions+=6;goto B47bf91;
case 0x47bf97:c.instructions+=5;goto B47bf97;
case 0x47bf9b:c.instructions+=4;goto B47bf9b;
case 0x47bf9c:c.instructions+=3;goto B47bf9c;
case 0x47bf9e:c.instructions+=2;goto B47bf9e;
case 0x47bfa1:c.instructions+=1;goto B47bfa1;
case 0x47bfa6:goto L47bfa6;
case 0x47bfa9:c.instructions+=2;goto B47bfa9;
case 0x47bfab:c.instructions+=1;goto B47bfab;
case 0x47bfad:goto L47bfad;
case 0x47bfb1:c.instructions+=1;goto B47bfb1;
case 0x47bfb4:goto L47bfb4;
case 0x47bfb5:c.instructions+=2;goto B47bfb5;
case 0x47bfb6:c.instructions+=1;goto B47bfb6;
case 0x47bfd0:goto L47bfd0;
case 0x47bfd5:c.instructions+=2;goto B47bfd5;
case 0x47bfd6:c.instructions+=1;goto B47bfd6;
case 0x47bfdb:goto L47bfdb;
case 0x47bfde:c.instructions+=2;goto B47bfde;
case 0x47bfe3:c.instructions+=1;goto B47bfe3;
case 0x47bfe5:goto L47bfe5;
case 0x47bfeb:c.instructions+=5;goto B47bfeb;
case 0x47bfee:c.instructions+=4;goto B47bfee;
case 0x47bff4:c.instructions+=3;goto B47bff4;
case 0x47bff5:c.instructions+=2;goto B47bff5;
case 0x47bffa:c.instructions+=1;goto B47bffa;
case 0x47bfff:goto L47bfff;
default:missing_instruction(c.pc);}
B47b002:L47b002:{c.instructions+=8;NFSU2_TR(0x47b002);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B47b005:{NFSU2_TR(0x47b005);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47b008:{NFSU2_TR(0x47b008);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47b00b:{NFSU2_TR(0x47b00b);
{u32 ea_=u32(u32(7907660u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47b011:{NFSU2_TR(0x47b011);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47b014:{NFSU2_TR(0x47b014);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b016:{NFSU2_TR(0x47b016);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b017:{NFSU2_TR(0x47b017);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b01cull));
TAIL_STATIC(0x723e9du,723);
}
B47b01c:L47b01c:{c.instructions+=1;NFSU2_TR(0x47b01c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b021ull));
TAIL_STATIC(0x721fa7u,721);
}
B47b021:L47b021:{c.instructions+=5;NFSU2_TR(0x47b021);
__builtin_memmove((R+4),(R+20),4);
}
B47b023:{NFSU2_TR(0x47b023);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B47b026:{NFSU2_TR(0x47b026);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ecd80ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47b02c:{NFSU2_TR(0x47b02c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b02d:{NFSU2_TR(0x47b02d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b032ull));
TAIL_STATIC(0x4ac9f0u,4ac);
}
B47b032:L47b032:{c.instructions+=6;NFSU2_TR(0x47b032);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47b034:{NFSU2_TR(0x47b034);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b035:{NFSU2_TR(0x47b035);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b036:{NFSU2_TR(0x47b036);
u8 U[4];
w4(U+0,u32(0x78bb6cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b03b:{NFSU2_TR(0x47b03b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b03d:{NFSU2_TR(0x47b03d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b042ull));
TAIL_STATIC(0x4691c0u,469);
}
B47b042:L47b042:{c.instructions+=4;NFSU2_TR(0x47b042);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B47b045:{NFSU2_TR(0x47b045);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa5ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B47b04c:{NFSU2_TR(0x47b04c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B47b053:{NFSU2_TR(0x47b053);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b058ull));
TAIL_STATIC(0x43bdf0u,43b);
}
B47b058:L47b058:{c.instructions+=4;NFSU2_TR(0x47b058);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47b05e:{NFSU2_TR(0x47b05e);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x5ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B47b065:{NFSU2_TR(0x47b065);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47b066:{NFSU2_TR(0x47b066);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47b073;}}
}
B47b068:L47b068:{c.instructions+=4;NFSU2_TR(0x47b068);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b06a:{NFSU2_TR(0x47b06a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b06c:{NFSU2_TR(0x47b06c);
__builtin_memmove((R+4),(R+24),4);
}
B47b06e:{NFSU2_TR(0x47b06e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b073ull));
TAIL_STATIC(0x47ac50u,47a);
}
B47b073:L47b073:{c.instructions+=3;NFSU2_TR(0x47b073);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47b074:{NFSU2_TR(0x47b074);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B47b075:{NFSU2_TR(0x47b075);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47b080:L47b080:{c.instructions+=6;NFSU2_TR(0x47b080);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B47b085:{NFSU2_TR(0x47b085);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b086:{NFSU2_TR(0x47b086);
__builtin_memmove((R+24),(R+4),4);
}
B47b088:{NFSU2_TR(0x47b088);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B47b08f:{NFSU2_TR(0x47b08f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b090:{NFSU2_TR(0x47b090);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47b196;}}
}
B47b096:L47b096:{c.instructions+=2;NFSU2_TR(0x47b096);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47b09d:{NFSU2_TR(0x47b09d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47b15c;}}
}
B47b0a3:L47b0a3:{c.instructions+=3;NFSU2_TR(0x47b0a3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47b0a9:{NFSU2_TR(0x47b0a9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47b0ab:{NFSU2_TR(0x47b0ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47b15c;}}
}
B47b0b1:L47b0b1:{c.instructions+=2;NFSU2_TR(0x47b0b1);
u8 U[8];
__builtin_memmove((U+0),gp(0x82afd4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47b0b8:{NFSU2_TR(0x47b0b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47b11d;}}
}
B47b0ba:L47b0ba:{c.instructions+=4;NFSU2_TR(0x47b0ba);
__builtin_memmove((R+4),gp(0x82b974),4);
}
B47b0c0:{NFSU2_TR(0x47b0c0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47b0c6:{NFSU2_TR(0x47b0c6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47b0c8:{NFSU2_TR(0x47b0c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47b11d;}}
}
B47b0ca:L47b0ca:{c.instructions+=4;NFSU2_TR(0x47b0ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47b0cd:{NFSU2_TR(0x47b0cd);
__builtin_memmove((R+4),(R+24),4);
}
B47b0cf:{NFSU2_TR(0x47b0cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47b0d2:{NFSU2_TR(0x47b0d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b0d7ull));
TAIL_STATIC(0x46b6f0u,46b);
}
B47b0d7:L47b0d7:{c.instructions+=2;NFSU2_TR(0x47b0d7);
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
B47b0d9:{NFSU2_TR(0x47b0d9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47b253;}}
}
B47b0df:L47b0df:{c.instructions+=8;NFSU2_TR(0x47b0df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47b0e2:{NFSU2_TR(0x47b0e2);
__builtin_memmove((R+4),gp(0x82b974),4);
}
B47b0e8:{NFSU2_TR(0x47b0e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47b0ee:{NFSU2_TR(0x47b0ee);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47b0f0:{NFSU2_TR(0x47b0f0);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B47b0f4:{NFSU2_TR(0x47b0f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b0f5:{NFSU2_TR(0x47b0f5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b0f6:{NFSU2_TR(0x47b0f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b0fbull));
TAIL_STATIC(0x4580e0u,458);
}
B47b0fb:L47b0fb:{c.instructions+=4;NFSU2_TR(0x47b0fb);
__builtin_memmove((R+4),gp(0x82b974),4);
}
B47b101:{NFSU2_TR(0x47b101);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47b103:{NFSU2_TR(0x47b103);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b105:{NFSU2_TR(0x47b105);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b108ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47b108:L47b108:{c.instructions+=5;NFSU2_TR(0x47b108);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47b10b:{NFSU2_TR(0x47b10b);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B47b10e:{NFSU2_TR(0x47b10e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x7ecd80ull))));
}
B47b114:{NFSU2_TR(0x47b114);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b115:{NFSU2_TR(0x47b115);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b11aull));
TAIL_STATIC(0x4ac9f0u,4ac);
}
B47b11a:L47b11a:{c.instructions+=1;NFSU2_TR(0x47b11a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47b11d:L47b11d:{c.instructions+=6;NFSU2_TR(0x47b11d);
__builtin_memmove((R+28),gp(0x82b974),4);
}
B47b123:{NFSU2_TR(0x47b123);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47b129:{NFSU2_TR(0x47b129);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B47b12c:{NFSU2_TR(0x47b12c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+28),u32(0x4ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47b12f:{NFSU2_TR(0x47b12f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47b132:{NFSU2_TR(0x47b132);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b137ull));
TAIL_STATIC(0x721f99u,721);
}
B47b137:L47b137:{c.instructions+=8;NFSU2_TR(0x47b137);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B47b13a:{NFSU2_TR(0x47b13a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47b13d:{NFSU2_TR(0x47b13d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b13e:{NFSU2_TR(0x47b13e);
{u32 ea_=u32(u32(7907660u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47b144:{NFSU2_TR(0x47b144);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47b147:{NFSU2_TR(0x47b147);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b149:{NFSU2_TR(0x47b149);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b14a:{NFSU2_TR(0x47b14a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b14full));
TAIL_STATIC(0x723e9du,723);
}
B47b14f:L47b14f:{c.instructions+=2;NFSU2_TR(0x47b14f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B47b152:{NFSU2_TR(0x47b152);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b157ull));
TAIL_STATIC(0x721fa7u,721);
}
B47b157:L47b157:{c.instructions+=1;NFSU2_TR(0x47b157);
{goto L47b217;}
}
B47b15c:L47b15c:{c.instructions+=3;NFSU2_TR(0x47b15c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47b162:{NFSU2_TR(0x47b162);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b163:{NFSU2_TR(0x47b163);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b168ull));
TAIL_STATIC(0x43e5c0u,43e);
}
B47b168:L47b168:{c.instructions+=5;NFSU2_TR(0x47b168);
{u32 ea_=u32(u32(7912340u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B47b16e:{NFSU2_TR(0x47b16e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47b171:{NFSU2_TR(0x47b171);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47b173:{NFSU2_TR(0x47b173);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47b176:{NFSU2_TR(0x47b176);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47b217;}}
}
B47b17c:L47b17c:{c.instructions+=3;NFSU2_TR(0x47b17c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47b182:{NFSU2_TR(0x47b182);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47b184:{NFSU2_TR(0x47b184);
if(r1(R+518)){{goto L47b217;}}
}
B47b18a:L47b18a:{c.instructions+=2;NFSU2_TR(0x47b18a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B47b191:{NFSU2_TR(0x47b191);
{goto L47b217;}
}
B47b196:L47b196:{c.instructions+=2;NFSU2_TR(0x47b196);
u8 U[8];
__builtin_memmove((U+0),gp(0x82afd4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47b19d:{NFSU2_TR(0x47b19d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47b217;}}
}
B47b19f:L47b19f:{c.instructions+=3;NFSU2_TR(0x47b19f);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B47b1a4:{NFSU2_TR(0x47b1a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47b1a6:{NFSU2_TR(0x47b1a6);
if(r1(R+518)){{goto L47b217;}}
}
B47b1a8:L47b1a8:{c.instructions+=4;NFSU2_TR(0x47b1a8);
__builtin_memmove((R+8),gp(0x82b974),4);
}
B47b1ae:{NFSU2_TR(0x47b1ae);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47b1b4:{NFSU2_TR(0x47b1b4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47b1b6:{NFSU2_TR(0x47b1b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47b217;}}
}
B47b1b8:L47b1b8:{c.instructions+=1;NFSU2_TR(0x47b1b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b1bdull));
TAIL_STATIC(0x4a9330u,4a9);
}
B47b1bd:L47b1bd:{c.instructions+=2;NFSU2_TR(0x47b1bd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47b1bf:{NFSU2_TR(0x47b1bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47b217;}}
}
B47b1c1:L47b1c1:{c.instructions+=4;NFSU2_TR(0x47b1c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47b1c4:{NFSU2_TR(0x47b1c4);
__builtin_memmove((R+4),(R+24),4);
}
B47b1c6:{NFSU2_TR(0x47b1c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47b1c9:{NFSU2_TR(0x47b1c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b1ceull));
TAIL_STATIC(0x46b6f0u,46b);
}
B47b1ce:L47b1ce:{c.instructions+=2;NFSU2_TR(0x47b1ce);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47b1d1:{NFSU2_TR(0x47b1d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47b1da;}}
}
B47b1d3:L47b1d3:{c.instructions+=4;NFSU2_TR(0x47b1d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47b1d4:{NFSU2_TR(0x47b1d4);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47b1d6:{NFSU2_TR(0x47b1d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47b1d7:{NFSU2_TR(0x47b1d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47b1da:L47b1da:{c.instructions+=8;NFSU2_TR(0x47b1da);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B47b1dc:{NFSU2_TR(0x47b1dc);
__builtin_memmove((R+4),(R+0),2);
}
B47b1df:{NFSU2_TR(0x47b1df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47b1e2:{NFSU2_TR(0x47b1e2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b1e3:{NFSU2_TR(0x47b1e3);
__builtin_memmove((R+4),gp(0x82b974),4);
}
B47b1e9:{NFSU2_TR(0x47b1e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47b1ef:{NFSU2_TR(0x47b1ef);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b1f0:{NFSU2_TR(0x47b1f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b1f5ull));
TAIL_STATIC(0x4580e0u,458);
}
B47b1f5:L47b1f5:{c.instructions+=4;NFSU2_TR(0x47b1f5);
__builtin_memmove((R+4),gp(0x82b974),4);
}
B47b1fb:{NFSU2_TR(0x47b1fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47b1fd:{NFSU2_TR(0x47b1fd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b1ff:{NFSU2_TR(0x47b1ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b202ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47b202:L47b202:{c.instructions+=5;NFSU2_TR(0x47b202);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47b205:{NFSU2_TR(0x47b205);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B47b208:{NFSU2_TR(0x47b208);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x7ecd80ull))));
}
B47b20e:{NFSU2_TR(0x47b20e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b20f:{NFSU2_TR(0x47b20f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b214ull));
TAIL_STATIC(0x4ac9f0u,4ac);
}
B47b214:L47b214:{c.instructions+=1;NFSU2_TR(0x47b214);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47b217:L47b217:{c.instructions+=6;NFSU2_TR(0x47b217);
__builtin_memmove((R+28),gp(0x82b974),4);
}
B47b21d:{NFSU2_TR(0x47b21d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47b223:{NFSU2_TR(0x47b223);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B47b226:{NFSU2_TR(0x47b226);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+28),u32(0x4ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47b229:{NFSU2_TR(0x47b229);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47b22c:{NFSU2_TR(0x47b22c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b231ull));
TAIL_STATIC(0x721f99u,721);
}
B47b231:L47b231:{c.instructions+=8;NFSU2_TR(0x47b231);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B47b234:{NFSU2_TR(0x47b234);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47b237:{NFSU2_TR(0x47b237);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b238:{NFSU2_TR(0x47b238);
{u32 ea_=u32(u32(7907660u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47b23e:{NFSU2_TR(0x47b23e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47b241:{NFSU2_TR(0x47b241);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b243:{NFSU2_TR(0x47b243);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b244:{NFSU2_TR(0x47b244);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b249ull));
TAIL_STATIC(0x723e9du,723);
}
B47b249:L47b249:{c.instructions+=2;NFSU2_TR(0x47b249);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B47b24c:{NFSU2_TR(0x47b24c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b251ull));
TAIL_STATIC(0x721fa7u,721);
}
B47b251:L47b251:{c.instructions+=1;NFSU2_TR(0x47b251);
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
B47b253:L47b253:{c.instructions+=3;NFSU2_TR(0x47b253);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47b254:{NFSU2_TR(0x47b254);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47b255:{NFSU2_TR(0x47b255);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47b260:L47b260:{c.instructions+=9;NFSU2_TR(0x47b260);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B47b265:{NFSU2_TR(0x47b265);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B47b268:{NFSU2_TR(0x47b268);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b269:{NFSU2_TR(0x47b269);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b26a:{NFSU2_TR(0x47b26a);
__builtin_memmove((R+24),(R+4),4);
}
B47b26c:{NFSU2_TR(0x47b26c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47b272:{NFSU2_TR(0x47b272);
w4(R+12,u32(0x1ull));
}
B47b277:{NFSU2_TR(0x47b277);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47b279:{NFSU2_TR(0x47b279);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47b3a0;}}
}
B47b27f:L47b27f:{c.instructions+=3;NFSU2_TR(0x47b27f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x1bull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1bull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B47b283:{NFSU2_TR(0x47b283);
__builtin_memmove((R+4),(R+24),4);
}
B47b285:{NFSU2_TR(0x47b285);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L47b2eb;}}
}
B47b287:L47b287:{c.instructions+=1;NFSU2_TR(0x47b287);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b28cull));
TAIL_STATIC(0x46b330u,46b);
}
B47b28c:L47b28c:{c.instructions+=2;NFSU2_TR(0x47b28c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47b28e:{NFSU2_TR(0x47b28e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47b64d;}}
}
B47b294:L47b294:{c.instructions+=15;NFSU2_TR(0x47b294);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47b297:{NFSU2_TR(0x47b297);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47b29d:{NFSU2_TR(0x47b29d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47b2a0:{NFSU2_TR(0x47b2a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x7ecc10ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B47b2a7:{NFSU2_TR(0x47b2a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47b2ad:{NFSU2_TR(0x47b2ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47b2b0:{NFSU2_TR(0x47b2b0);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B47b2b2:{NFSU2_TR(0x47b2b2);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B47b2b6:{NFSU2_TR(0x47b2b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47b2bc:{NFSU2_TR(0x47b2bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47b2c2:{NFSU2_TR(0x47b2c2);
__builtin_memmove((R+0),gp(0x82b974),4);
}
B47b2c7:{NFSU2_TR(0x47b2c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47b2cd:{NFSU2_TR(0x47b2cd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b2ce:{NFSU2_TR(0x47b2ce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b2cf:{NFSU2_TR(0x47b2cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b2d4ull));
TAIL_STATIC(0x7399e0u,739);
}
B47b2d4:L47b2d4:{c.instructions+=5;NFSU2_TR(0x47b2d4);
__builtin_memmove((R+4),gp(0x82b974),4);
}
B47b2da:{NFSU2_TR(0x47b2da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47b2dc:{NFSU2_TR(0x47b2dc);
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
B47b2df:{NFSU2_TR(0x47b2df);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b2e0:{NFSU2_TR(0x47b2e0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b2e3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47b2e3:L47b2e3:{c.instructions+=4;NFSU2_TR(0x47b2e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47b2e4:{NFSU2_TR(0x47b2e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47b2e5:{NFSU2_TR(0x47b2e5);
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
B47b2e8:{NFSU2_TR(0x47b2e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47b2eb:L47b2eb:{c.instructions+=1;NFSU2_TR(0x47b2eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b2f0ull));
TAIL_STATIC(0x46b330u,46b);
}
B47b2f0:L47b2f0:{c.instructions+=2;NFSU2_TR(0x47b2f0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47b2f2:{NFSU2_TR(0x47b2f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47b64d;}}
}
B47b2f8:L47b2f8:{c.instructions+=3;NFSU2_TR(0x47b2f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47b2fe:{NFSU2_TR(0x47b2fe);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B47b304:{NFSU2_TR(0x47b304);
if(r1(R+518)){{goto L47b31b;}}
}
B47b306:L47b306:{c.instructions+=4;NFSU2_TR(0x47b306);
__builtin_memmove((R+4),gp(0x82b974),4);
}
B47b30c:{NFSU2_TR(0x47b30c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47b312:{NFSU2_TR(0x47b312);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b313:{NFSU2_TR(0x47b313);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b318ull));
TAIL_STATIC(0x739320u,739);
}
B47b318:L47b318:{c.instructions+=1;NFSU2_TR(0x47b318);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47b31b:L47b31b:{c.instructions+=2;NFSU2_TR(0x47b31b);
u8 U[8];
__builtin_memmove((U+0),gp(0x82afd4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47b322:{NFSU2_TR(0x47b322);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47b64d;}}
}
B47b328:L47b328:{c.instructions+=4;NFSU2_TR(0x47b328);
__builtin_memmove((R+0),gp(0x82b974),4);
}
B47b32d:{NFSU2_TR(0x47b32d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B47b333:{NFSU2_TR(0x47b333);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47b335:{NFSU2_TR(0x47b335);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47b64d;}}
}
B47b33b:L47b33b:{c.instructions+=15;NFSU2_TR(0x47b33b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47b341:{NFSU2_TR(0x47b341);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47b347:{NFSU2_TR(0x47b347);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47b34a:{NFSU2_TR(0x47b34a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47b34d:{NFSU2_TR(0x47b34d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47b353:{NFSU2_TR(0x47b353);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47b359:{NFSU2_TR(0x47b359);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x7ecc10ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B47b360:{NFSU2_TR(0x47b360);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47b363:{NFSU2_TR(0x47b363);
__builtin_memmove((R+4),gp(0x82b974),4);
}
B47b369:{NFSU2_TR(0x47b369);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B47b36b:{NFSU2_TR(0x47b36b);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x7ecc10ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+8),(U+8),2);
}
B47b373:{NFSU2_TR(0x47b373);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47b379:{NFSU2_TR(0x47b379);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b37a:{NFSU2_TR(0x47b37a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b37b:{NFSU2_TR(0x47b37b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b380ull));
TAIL_STATIC(0x4580e0u,458);
}
B47b380:L47b380:{c.instructions+=4;NFSU2_TR(0x47b380);
__builtin_memmove((R+4),gp(0x82b974),4);
}
B47b386:{NFSU2_TR(0x47b386);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47b388:{NFSU2_TR(0x47b388);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b389:{NFSU2_TR(0x47b389);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b38cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47b38c:L47b38c:{c.instructions+=3;NFSU2_TR(0x47b38c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b38e:{NFSU2_TR(0x47b38e);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b390:{NFSU2_TR(0x47b390);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b395ull));
TAIL_STATIC(0x73a450u,73a);
}
B47b395:L47b395:{c.instructions+=5;NFSU2_TR(0x47b395);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47b398:{NFSU2_TR(0x47b398);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47b399:{NFSU2_TR(0x47b399);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47b39a:{NFSU2_TR(0x47b39a);
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
B47b39d:{NFSU2_TR(0x47b39d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47b3a0:L47b3a0:{c.instructions+=1;NFSU2_TR(0x47b3a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b3a5ull));
TAIL_STATIC(0x4a9330u,4a9);
}
B47b3a5:L47b3a5:{c.instructions+=2;NFSU2_TR(0x47b3a5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47b3a7:{NFSU2_TR(0x47b3a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47b64d;}}
}
B47b3ad:L47b3ad:{c.instructions+=3;NFSU2_TR(0x47b3ad);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x1bull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1bull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B47b3b1:{NFSU2_TR(0x47b3b1);
__builtin_memmove((R+4),(R+24),4);
}
B47b3b3:{NFSU2_TR(0x47b3b3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L47b466;}}
}
B47b3b9:L47b3b9:{c.instructions+=1;NFSU2_TR(0x47b3b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b3beull));
TAIL_STATIC(0x46b330u,46b);
}
B47b3be:L47b3be:{c.instructions+=2;NFSU2_TR(0x47b3be);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47b3c0:{NFSU2_TR(0x47b3c0);
if(r1(R+518)){{goto L47b64d;}}
}
B47b3c6:L47b3c6:{c.instructions+=3;NFSU2_TR(0x47b3c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47b3c9:{NFSU2_TR(0x47b3c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b3ca:{NFSU2_TR(0x47b3ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b3cfull));
TAIL_STATIC(0x468140u,468);
}
B47b3cf:L47b3cf:{c.instructions+=4;NFSU2_TR(0x47b3cf);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47b3d3:{NFSU2_TR(0x47b3d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47b3d6:{NFSU2_TR(0x47b3d6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b3d7:{NFSU2_TR(0x47b3d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b3dcull));
TAIL_STATIC(0x468140u,468);
}
B47b3dc:L47b3dc:{c.instructions+=10;NFSU2_TR(0x47b3dc);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47b3e0:{NFSU2_TR(0x47b3e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47b3e4:{NFSU2_TR(0x47b3e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47b3e8:{NFSU2_TR(0x47b3e8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47b3eb:{NFSU2_TR(0x47b3eb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b3ed:{NFSU2_TR(0x47b3ed);
u8 U[4];
w4(U+0,u32(0x12cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b3f2:{NFSU2_TR(0x47b3f2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b3f3:{NFSU2_TR(0x47b3f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b3f4:{NFSU2_TR(0x47b3f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((R+4),(U+0),4);
}
B47b3f7:{NFSU2_TR(0x47b3f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b3fcull));
TAIL_STATIC(0x459990u,459);
}
B47b3fc:L47b3fc:{c.instructions+=19;NFSU2_TR(0x47b3fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47b3ff:{NFSU2_TR(0x47b3ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47b405:{NFSU2_TR(0x47b405);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47b408:{NFSU2_TR(0x47b408);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47b40f:{NFSU2_TR(0x47b40f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47b412:{NFSU2_TR(0x47b412);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47b418:{NFSU2_TR(0x47b418);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47b41b:{NFSU2_TR(0x47b41b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47b421:{NFSU2_TR(0x47b421);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x7ecc10ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B47b428:{NFSU2_TR(0x47b428);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47b42e:{NFSU2_TR(0x47b42e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47b430:{NFSU2_TR(0x47b430);
__builtin_memmove((R+0),(R+4),2);
}
B47b433:{NFSU2_TR(0x47b433);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47b436:{NFSU2_TR(0x47b436);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47b43c:{NFSU2_TR(0x47b43c);
__builtin_memmove((R+4),gp(0x82b974),4);
}
B47b442:{NFSU2_TR(0x47b442);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47b448:{NFSU2_TR(0x47b448);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b449:{NFSU2_TR(0x47b449);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b44a:{NFSU2_TR(0x47b44a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b44full));
TAIL_STATIC(0x7399e0u,739);
}
B47b44f:L47b44f:{c.instructions+=5;NFSU2_TR(0x47b44f);
__builtin_memmove((R+4),gp(0x82b974),4);
}
B47b455:{NFSU2_TR(0x47b455);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47b457:{NFSU2_TR(0x47b457);
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
B47b45a:{NFSU2_TR(0x47b45a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b45b:{NFSU2_TR(0x47b45b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b45eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47b45e:L47b45e:{c.instructions+=4;NFSU2_TR(0x47b45e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47b45f:{NFSU2_TR(0x47b45f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47b460:{NFSU2_TR(0x47b460);
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
B47b463:{NFSU2_TR(0x47b463);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47b466:L47b466:{c.instructions+=1;NFSU2_TR(0x47b466);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b46bull));
TAIL_STATIC(0x46b330u,46b);
}
B47b46b:L47b46b:{c.instructions+=2;NFSU2_TR(0x47b46b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47b46d:{NFSU2_TR(0x47b46d);
if(r1(R+518)){{goto L47b64d;}}
}
B47b473:L47b473:{c.instructions+=3;NFSU2_TR(0x47b473);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47b476:{NFSU2_TR(0x47b476);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B47b479:{NFSU2_TR(0x47b479);
if(r1(R+518)){{goto L47b4ae;}}
}
B47b47b:L47b47b:{c.instructions+=4;NFSU2_TR(0x47b47b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47b47e:{NFSU2_TR(0x47b47e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b47f:{NFSU2_TR(0x47b47f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47b483:{NFSU2_TR(0x47b483);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b488ull));
TAIL_STATIC(0x468140u,468);
}
B47b488:L47b488:{c.instructions+=10;NFSU2_TR(0x47b488);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47b48c:{NFSU2_TR(0x47b48c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47b490:{NFSU2_TR(0x47b490);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47b494:{NFSU2_TR(0x47b494);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47b497:{NFSU2_TR(0x47b497);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b499:{NFSU2_TR(0x47b499);
u8 U[4];
w4(U+0,u32(0x12cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b49e:{NFSU2_TR(0x47b49e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b49f:{NFSU2_TR(0x47b49f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b4a0:{NFSU2_TR(0x47b4a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((R+4),(U+0),4);
}
B47b4a3:{NFSU2_TR(0x47b4a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b4a8ull));
TAIL_STATIC(0x459990u,459);
}
B47b4a8:L47b4a8:{c.instructions+=2;NFSU2_TR(0x47b4a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47b4ab:{NFSU2_TR(0x47b4ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47b4ae:L47b4ae:{c.instructions+=4;NFSU2_TR(0x47b4ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47b4b4:{NFSU2_TR(0x47b4b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47b4ba:{NFSU2_TR(0x47b4ba);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47b4bc:{NFSU2_TR(0x47b4bc);
if(r1(R+518)){{goto L47b4ed;}}
}
B47b4be:L47b4be:{c.instructions+=11;NFSU2_TR(0x47b4be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47b4c4:{NFSU2_TR(0x47b4c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47b4c7:{NFSU2_TR(0x47b4c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47b4cd:{NFSU2_TR(0x47b4cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47b4d3:{NFSU2_TR(0x47b4d3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B47b4d9:{NFSU2_TR(0x47b4d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47b4df:{NFSU2_TR(0x47b4df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47b4e5:{NFSU2_TR(0x47b4e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47b4e6:{NFSU2_TR(0x47b4e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47b4e7:{NFSU2_TR(0x47b4e7);
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
B47b4ea:{NFSU2_TR(0x47b4ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47b4ed:L47b4ed:{c.instructions+=4;NFSU2_TR(0x47b4ed);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B47b4f3:{NFSU2_TR(0x47b4f3);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47b4f5:{NFSU2_TR(0x47b4f5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b4f6:{NFSU2_TR(0x47b4f6);
if(r1(R+518)){{goto L47b5ad;}}
}
B47b4fc:L47b4fc:{c.instructions+=4;NFSU2_TR(0x47b4fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47b502:{NFSU2_TR(0x47b502);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47b505:{NFSU2_TR(0x47b505);
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
B47b507:{NFSU2_TR(0x47b507);
if(r1(R+518)){{goto L47b64c;}}
}
B47b50d:L47b50d:{c.instructions+=3;NFSU2_TR(0x47b50d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47b50f:{NFSU2_TR(0x47b50f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b510:{NFSU2_TR(0x47b510);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b513ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47b513:L47b513:{c.instructions+=7;NFSU2_TR(0x47b513);
__builtin_memmove((R+4),gp(0x82b974),4);
}
B47b519:{NFSU2_TR(0x47b519);
__builtin_memmove((R+28),(R+0),4);
}
B47b51b:{NFSU2_TR(0x47b51b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b51d:{NFSU2_TR(0x47b51d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B47b520:{NFSU2_TR(0x47b520);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b521:{NFSU2_TR(0x47b521);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B47b524:{NFSU2_TR(0x47b524);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b529ull));
TAIL_STATIC(0x46c800u,46c);
}
B47b529:L47b529:{c.instructions+=2;NFSU2_TR(0x47b529);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47b52b:{NFSU2_TR(0x47b52b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47b64c;}}
}
B47b531:L47b531:{c.instructions+=9;NFSU2_TR(0x47b531);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47b534:{NFSU2_TR(0x47b534);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47b53a:{NFSU2_TR(0x47b53a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47b53d:{NFSU2_TR(0x47b53d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x7ecc10ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B47b544:{NFSU2_TR(0x47b544);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47b547:{NFSU2_TR(0x47b547);
__builtin_memmove((R+4),gp(0x82b974),4);
}
B47b54d:{NFSU2_TR(0x47b54d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47b553:{NFSU2_TR(0x47b553);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b554:{NFSU2_TR(0x47b554);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b559ull));
TAIL_STATIC(0x739320u,739);
}
B47b559:L47b559:{c.instructions+=9;NFSU2_TR(0x47b559);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47b55f:{NFSU2_TR(0x47b55f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B47b561:{NFSU2_TR(0x47b561);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x7ecc10ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+4),(U+8),2);
}
B47b569:{NFSU2_TR(0x47b569);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47b56c:{NFSU2_TR(0x47b56c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b56d:{NFSU2_TR(0x47b56d);
__builtin_memmove((R+4),gp(0x82b974),4);
}
B47b573:{NFSU2_TR(0x47b573);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47b579:{NFSU2_TR(0x47b579);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b57a:{NFSU2_TR(0x47b57a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b57full));
TAIL_STATIC(0x4580e0u,458);
}
B47b57f:L47b57f:{c.instructions+=4;NFSU2_TR(0x47b57f);
__builtin_memmove((R+4),gp(0x82b974),4);
}
B47b585:{NFSU2_TR(0x47b585);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47b587:{NFSU2_TR(0x47b587);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b588:{NFSU2_TR(0x47b588);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b58bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47b58b:L47b58b:{c.instructions+=10;NFSU2_TR(0x47b58b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47b591:{NFSU2_TR(0x47b591);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47b594:{NFSU2_TR(0x47b594);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47b59a:{NFSU2_TR(0x47b59a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47b59d:{NFSU2_TR(0x47b59d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47b59e:{NFSU2_TR(0x47b59e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B47b5a5:{NFSU2_TR(0x47b5a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47b5a6:{NFSU2_TR(0x47b5a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47b5a7:{NFSU2_TR(0x47b5a7);
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
B47b5aa:{NFSU2_TR(0x47b5aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47b5ad:L47b5ad:{c.instructions+=2;NFSU2_TR(0x47b5ad);
u8 U[8];
__builtin_memmove((U+0),gp(0x82afd4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47b5b4:{NFSU2_TR(0x47b5b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47b612;}}
}
B47b5b6:L47b5b6:{c.instructions+=3;NFSU2_TR(0x47b5b6);
__builtin_memmove((R+8),gp(0x8900d8),4);
}
B47b5bc:{NFSU2_TR(0x47b5bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47b5be:{NFSU2_TR(0x47b5be);
if(r1(R+518)){{goto L47b612;}}
}
B47b5c0:L47b5c0:{c.instructions+=3;NFSU2_TR(0x47b5c0);
__builtin_memmove((R+8),gp(0x82b974),4);
}
B47b5c6:{NFSU2_TR(0x47b5c6);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47b5cd:{NFSU2_TR(0x47b5cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47b612;}}
}
B47b5cf:L47b5cf:{c.instructions+=12;NFSU2_TR(0x47b5cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47b5d5:{NFSU2_TR(0x47b5d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47b5d8:{NFSU2_TR(0x47b5d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47b5de:{NFSU2_TR(0x47b5de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47b5e1:{NFSU2_TR(0x47b5e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x7ecc10ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B47b5e8:{NFSU2_TR(0x47b5e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47b5eb:{NFSU2_TR(0x47b5eb);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x7ecc10ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(s32(s16(r2(U+8)))));
}
B47b5f3:{NFSU2_TR(0x47b5f3);
__builtin_memmove((R+4),gp(0x82b974),4);
}
B47b5f9:{NFSU2_TR(0x47b5f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47b5ff:{NFSU2_TR(0x47b5ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b600:{NFSU2_TR(0x47b600);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b601:{NFSU2_TR(0x47b601);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b606ull));
TAIL_STATIC(0x4580e0u,458);
}
B47b606:L47b606:{c.instructions+=4;NFSU2_TR(0x47b606);
__builtin_memmove((R+4),gp(0x82b974),4);
}
B47b60c:{NFSU2_TR(0x47b60c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47b60e:{NFSU2_TR(0x47b60e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b60f:{NFSU2_TR(0x47b60f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b612ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47b612:L47b612:{c.instructions+=4;NFSU2_TR(0x47b612);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47b618:{NFSU2_TR(0x47b618);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47b61b:{NFSU2_TR(0x47b61b);
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
B47b61d:{NFSU2_TR(0x47b61d);
if(r1(R+518)){{goto L47b64c;}}
}
B47b61f:L47b61f:{c.instructions+=3;NFSU2_TR(0x47b61f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47b621:{NFSU2_TR(0x47b621);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b622:{NFSU2_TR(0x47b622);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b625ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47b625:L47b625:{c.instructions+=5;NFSU2_TR(0x47b625);
{u32 ea_=u32(r4(R+24)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47b628:{NFSU2_TR(0x47b628);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47b62e:{NFSU2_TR(0x47b62e);
__builtin_memmove((R+28),(R+0),4);
}
B47b630:{NFSU2_TR(0x47b630);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b632:{NFSU2_TR(0x47b632);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b637ull));
TAIL_STATIC(0x75bed4u,75b);
}
B47b637:L47b637:{c.instructions+=6;NFSU2_TR(0x47b637);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B47b63a:{NFSU2_TR(0x47b63a);
__builtin_memmove((R+4),gp(0x82b974),4);
}
B47b640:{NFSU2_TR(0x47b640);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B47b643:{NFSU2_TR(0x47b643);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b644:{NFSU2_TR(0x47b644);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B47b647:{NFSU2_TR(0x47b647);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b64cull));
TAIL_STATIC(0x46c800u,46c);
}
B47b64c:L47b64c:{c.instructions+=1;NFSU2_TR(0x47b64c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47b64d:L47b64d:{c.instructions+=4;NFSU2_TR(0x47b64d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47b64e:{NFSU2_TR(0x47b64e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47b64f:{NFSU2_TR(0x47b64f);
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
B47b652:{NFSU2_TR(0x47b652);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47b660:L47b660:{c.instructions+=24;NFSU2_TR(0x47b660);
__builtin_memmove((R+8),gp(0x7ecd74),4);
}
B47b666:{NFSU2_TR(0x47b666);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82b96cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B47b66d:{NFSU2_TR(0x47b66d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47b671:{NFSU2_TR(0x47b671);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7ecd08ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B47b678:{NFSU2_TR(0x47b678);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x174ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47b67e:{NFSU2_TR(0x47b67e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82b96cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B47b685:{NFSU2_TR(0x47b685);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),u32(0xfffffffeull)));
w1(R+523,scarry<u32>(r4(R+8),u32(0xfffffffeull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47b688:{NFSU2_TR(0x47b688);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b689:{NFSU2_TR(0x47b689);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b68a:{NFSU2_TR(0x47b68a);
__builtin_memmove((R+28),gp(0x7ecd74),4);
}
B47b690:{NFSU2_TR(0x47b690);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B47b693:{NFSU2_TR(0x47b693);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82b984ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B47b69a:{NFSU2_TR(0x47b69a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b69b:{NFSU2_TR(0x47b69b);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B47b69e:{NFSU2_TR(0x47b69e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ecbf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B47b6a4:{NFSU2_TR(0x47b6a4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b6a5:{NFSU2_TR(0x47b6a5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b6a6:{NFSU2_TR(0x47b6a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ecbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47b6ac:{NFSU2_TR(0x47b6ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ecbecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47b6b2:{NFSU2_TR(0x47b6b2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b6b3:{NFSU2_TR(0x47b6b3);
s4(0x7ecf48,u32(0x1ull));
}
B47b6bd:{NFSU2_TR(0x47b6bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B47b6bf:{NFSU2_TR(0x47b6bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b6c0:{NFSU2_TR(0x47b6c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b6c3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47b6c3:L47b6c3:{c.instructions+=3;NFSU2_TR(0x47b6c3);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b6c8:{NFSU2_TR(0x47b6c8);
u8 U[4];
w4(U+0,u32(0x46b5d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b6cd:{NFSU2_TR(0x47b6cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b6d2ull));
TAIL_STATIC(0x73a9f0u,73a);
}
B47b6d2:L47b6d2:{c.instructions+=4;NFSU2_TR(0x47b6d2);
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
B47b6d5:{NFSU2_TR(0x47b6d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47b6d6:{NFSU2_TR(0x47b6d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47b6d7:{NFSU2_TR(0x47b6d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47b6e0:L47b6e0:{c.instructions+=6;NFSU2_TR(0x47b6e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b6e1:{NFSU2_TR(0x47b6e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47b6e4:{NFSU2_TR(0x47b6e4);
u8 U[4];
w4(U+0,u32(0x78bb98ull));
s4(u32(r4(R+4)),r4(U+0));
}
B47b6ea:{NFSU2_TR(0x47b6ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47b6ed:{NFSU2_TR(0x47b6ed);
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
B47b6ef:{NFSU2_TR(0x47b6ef);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47b708;}}
}
B47b6f1:L47b6f1:{c.instructions+=2;NFSU2_TR(0x47b6f1);
__builtin_memmove((R+4),(R+24),4);
}
B47b6f3:{NFSU2_TR(0x47b6f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b6f8ull));
TAIL_STATIC(0x45a630u,45a);
}
B47b6f8:L47b6f8:{c.instructions+=3;NFSU2_TR(0x47b6f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B47b6fb:{NFSU2_TR(0x47b6fb);
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
B47b6fd:{NFSU2_TR(0x47b6fd);
if(r1(R+518)){{goto L47b708;}}
}
B47b6ff:L47b6ff:{c.instructions+=2;NFSU2_TR(0x47b6ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b700:{NFSU2_TR(0x47b700);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b705ull));
TAIL_STATIC(0x440540u,440);
}
B47b705:L47b705:{c.instructions+=1;NFSU2_TR(0x47b705);
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
B47b708:L47b708:{c.instructions+=2;NFSU2_TR(0x47b708);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47b709:{NFSU2_TR(0x47b709);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47b710:L47b710:{c.instructions+=11;NFSU2_TR(0x47b710);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47b714:{NFSU2_TR(0x47b714);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47b718:{NFSU2_TR(0x47b718);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b719:{NFSU2_TR(0x47b719);
__builtin_memmove((R+24),(R+4),4);
}
B47b71b:{NFSU2_TR(0x47b71b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47b71f:{NFSU2_TR(0x47b71f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b720:{NFSU2_TR(0x47b720);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b721:{NFSU2_TR(0x47b721);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b722:{NFSU2_TR(0x47b722);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B47b725:{NFSU2_TR(0x47b725);
s4(0x7ecf48,u32(0x0ull));
}
B47b72f:{NFSU2_TR(0x47b72f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b734ull));
TAIL_STATIC(0x46c6f0u,46c);
}
B47b734:L47b734:{c.instructions+=2;NFSU2_TR(0x47b734);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47b736:{NFSU2_TR(0x47b736);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L47b745;}}
}
B47b738:L47b738:{c.instructions+=5;NFSU2_TR(0x47b738);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47b73b:{NFSU2_TR(0x47b73b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47b73e:{NFSU2_TR(0x47b73e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47b741:{NFSU2_TR(0x47b741);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47b742:{NFSU2_TR(0x47b742);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47b745:L47b745:{c.instructions+=9;NFSU2_TR(0x47b745);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47b749:{NFSU2_TR(0x47b749);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47b74c:{NFSU2_TR(0x47b74c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b74d:{NFSU2_TR(0x47b74d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47b754:{NFSU2_TR(0x47b754);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47b757:{NFSU2_TR(0x47b757);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B47b75b:{NFSU2_TR(0x47b75b);
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
B47b75d:{NFSU2_TR(0x47b75d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47b75e:{NFSU2_TR(0x47b75e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47b764;}}
}
B47b760:L47b760:{c.instructions+=1;NFSU2_TR(0x47b760);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B47b764:L47b764:{c.instructions+=2;NFSU2_TR(0x47b764);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47b765:{NFSU2_TR(0x47b765);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47b770:L47b770:{c.instructions+=3;NFSU2_TR(0x47b770);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47b774:{NFSU2_TR(0x47b774);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B47b77a:{NFSU2_TR(0x47b77a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47b780:L47b780:{c.instructions+=5;NFSU2_TR(0x47b780);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47b784:{NFSU2_TR(0x47b784);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b785:{NFSU2_TR(0x47b785);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82b620ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B47b78c:{NFSU2_TR(0x47b78c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47b78e:{NFSU2_TR(0x47b78e);
if(r1(R+518)){{goto L47b7a1;}}
}
B47b790:L47b790:{c.instructions+=3;NFSU2_TR(0x47b790);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x65ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47b793:{NFSU2_TR(0x47b793);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47b795:{NFSU2_TR(0x47b795);
if(r1(R+518)){{goto L47b7a1;}}
}
B47b797:L47b797:{c.instructions+=2;NFSU2_TR(0x47b797);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b799:{NFSU2_TR(0x47b799);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b79eull));
TAIL_STATIC(0x46c130u,46c);
}
B47b79e:L47b79e:{c.instructions+=1;NFSU2_TR(0x47b79e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47b7a1:L47b7a1:{c.instructions+=3;NFSU2_TR(0x47b7a1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47b7a5:{NFSU2_TR(0x47b7a5);
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
B47b7a7:{NFSU2_TR(0x47b7a7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L47b7ae;}}
}
B47b7a9:L47b7a9:{c.instructions+=3;NFSU2_TR(0x47b7a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47b7ac:{NFSU2_TR(0x47b7ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47b7ad:{NFSU2_TR(0x47b7ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47b7ae:L47b7ae:{c.instructions+=3;NFSU2_TR(0x47b7ae);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x66ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B47b7b2:{NFSU2_TR(0x47b7b2);
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
B47b7b4:{NFSU2_TR(0x47b7b4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L47b7cc;}}
}
B47b7b6:L47b7b6:{c.instructions+=6;NFSU2_TR(0x47b7b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B47b7b9:{NFSU2_TR(0x47b7b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47b7bc:{NFSU2_TR(0x47b7bc);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B47b7c0:{NFSU2_TR(0x47b7c0);
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
B47b7c2:{NFSU2_TR(0x47b7c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B47b7c5:{NFSU2_TR(0x47b7c5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47b7cc;}}
}
B47b7c7:L47b7c7:{c.instructions+=3;NFSU2_TR(0x47b7c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47b7ca:{NFSU2_TR(0x47b7ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47b7cb:{NFSU2_TR(0x47b7cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47b7cc:L47b7cc:{c.instructions+=3;NFSU2_TR(0x47b7cc);
w4(R+0,u32(0xfffffff8ull));
}
B47b7d1:{NFSU2_TR(0x47b7d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47b7d2:{NFSU2_TR(0x47b7d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47b7e0:L47b7e0:{c.instructions+=5;NFSU2_TR(0x47b7e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b7e1:{NFSU2_TR(0x47b7e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B47b7e5:{NFSU2_TR(0x47b7e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82b620ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B47b7ec:{NFSU2_TR(0x47b7ec);
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
B47b7ee:{NFSU2_TR(0x47b7ee);
if(r1(R+518)){{goto L47b80d;}}
}
B47b7f0:L47b7f0:{c.instructions+=3;NFSU2_TR(0x47b7f0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x65ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B47b7f3:{NFSU2_TR(0x47b7f3);
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
B47b7f5:{NFSU2_TR(0x47b7f5);
if(r1(R+518)){{goto L47b801;}}
}
B47b7f7:L47b7f7:{c.instructions+=2;NFSU2_TR(0x47b7f7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b7f9:{NFSU2_TR(0x47b7f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b7feull));
TAIL_STATIC(0x46c130u,46c);
}
B47b7fe:L47b7fe:{c.instructions+=1;NFSU2_TR(0x47b7fe);
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
B47b801:L47b801:{c.instructions+=4;NFSU2_TR(0x47b801);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82b620ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B47b808:{NFSU2_TR(0x47b808);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47b80b:{NFSU2_TR(0x47b80b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47b80c:{NFSU2_TR(0x47b80c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47b80d:L47b80d:{c.instructions+=3;NFSU2_TR(0x47b80d);
w4(R+0,u32(0xfffffff8ull));
}
B47b812:{NFSU2_TR(0x47b812);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47b813:{NFSU2_TR(0x47b813);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47b820:L47b820:{c.instructions+=10;NFSU2_TR(0x47b820);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47b824:{NFSU2_TR(0x47b824);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b825:{NFSU2_TR(0x47b825);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b826:{NFSU2_TR(0x47b826);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b827:{NFSU2_TR(0x47b827);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82b620ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B47b82e:{NFSU2_TR(0x47b82e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B47b830:{NFSU2_TR(0x47b830);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b831:{NFSU2_TR(0x47b831);
__builtin_memmove((R+4),gp(0x82b9c8),4);
}
B47b837:{NFSU2_TR(0x47b837);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B47b839:{NFSU2_TR(0x47b839);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b83eull));
TAIL_STATIC(0x46b670u,46b);
}
B47b83e:L47b83e:{c.instructions+=4;NFSU2_TR(0x47b83e);
__builtin_memmove((R+12),(R+0),4);
}
B47b840:{NFSU2_TR(0x47b840);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x65ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47b843:{NFSU2_TR(0x47b843);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47b845:{NFSU2_TR(0x47b845);
if(r1(R+518)){{goto L47b850;}}
}
B47b847:L47b847:{c.instructions+=2;NFSU2_TR(0x47b847);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b848:{NFSU2_TR(0x47b848);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b84dull));
TAIL_STATIC(0x46c130u,46c);
}
B47b84d:L47b84d:{c.instructions+=1;NFSU2_TR(0x47b84d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47b850:L47b850:{c.instructions+=4;NFSU2_TR(0x47b850);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47b853:{NFSU2_TR(0x47b853);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47b855:{NFSU2_TR(0x47b855);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47b858:{NFSU2_TR(0x47b858);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47b867;}}
}
B47b85a:L47b85a:{c.instructions+=2;NFSU2_TR(0x47b85a);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B47b85c:{NFSU2_TR(0x47b85c);
if(r1(R+518)){{goto L47b867;}}
}
B47b85e:L47b85e:{c.instructions+=5;NFSU2_TR(0x47b85e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47b85f:{NFSU2_TR(0x47b85f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B47b860:{NFSU2_TR(0x47b860);
w4(R+0,u32(0xfffffff8ull));
}
B47b865:{NFSU2_TR(0x47b865);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47b866:{NFSU2_TR(0x47b866);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47b867:L47b867:{c.instructions+=5;NFSU2_TR(0x47b867);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b868:{NFSU2_TR(0x47b868);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B47b86c:{NFSU2_TR(0x47b86c);
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
B47b86e:{NFSU2_TR(0x47b86e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B47b875:{NFSU2_TR(0x47b875);
if(r1(R+518)){{goto L47b8d5;}}
}
B47b877:L47b877:{c.instructions+=2;NFSU2_TR(0x47b877);
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
B47b879:{NFSU2_TR(0x47b879);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47b8d5;}}
}
B47b87b:L47b87b:{c.instructions+=2;NFSU2_TR(0x47b87b);
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
B47b87d:{NFSU2_TR(0x47b87d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47b8d5;}}
}
B47b87f:L47b87f:{c.instructions+=3;NFSU2_TR(0x47b87f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47b882:{NFSU2_TR(0x47b882);
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
B47b884:{NFSU2_TR(0x47b884);
if(r1(R+518)){{goto L47b8aa;}}
}
B47b886:L47b886:{c.instructions+=1;NFSU2_TR(0x47b886);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b88bull));
TAIL_STATIC(0x721f99u,721);
}
B47b88b:L47b88b:{c.instructions+=5;NFSU2_TR(0x47b88b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47b88e:{NFSU2_TR(0x47b88e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47b891:{NFSU2_TR(0x47b891);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b892:{NFSU2_TR(0x47b892);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b893:{NFSU2_TR(0x47b893);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b898ull));
TAIL_STATIC(0x72412au,724);
}
B47b898:L47b898:{c.instructions+=2;NFSU2_TR(0x47b898);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47b89b:{NFSU2_TR(0x47b89b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b8a0ull));
TAIL_STATIC(0x721fa7u,721);
}
B47b8a0:L47b8a0:{c.instructions+=7;NFSU2_TR(0x47b8a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47b8a3:{NFSU2_TR(0x47b8a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47b8a4:{NFSU2_TR(0x47b8a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47b8a5:{NFSU2_TR(0x47b8a5);
__builtin_memmove((R+0),(R+20),4);
}
B47b8a7:{NFSU2_TR(0x47b8a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B47b8a8:{NFSU2_TR(0x47b8a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47b8a9:{NFSU2_TR(0x47b8a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47b8aa:L47b8aa:{c.instructions+=2;NFSU2_TR(0x47b8aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47b8ad:{NFSU2_TR(0x47b8ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b8b2ull));
TAIL_STATIC(0x721f99u,721);
}
B47b8b2:L47b8b2:{c.instructions+=8;NFSU2_TR(0x47b8b2);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B47b8b5:{NFSU2_TR(0x47b8b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b8b6:{NFSU2_TR(0x47b8b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47b8b9:{NFSU2_TR(0x47b8b9);
{u32 ea_=u32(u32(7907660u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47b8bf:{NFSU2_TR(0x47b8bf);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47b8c2:{NFSU2_TR(0x47b8c2);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b8c4:{NFSU2_TR(0x47b8c4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b8c5:{NFSU2_TR(0x47b8c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b8caull));
TAIL_STATIC(0x723e9du,723);
}
B47b8ca:L47b8ca:{c.instructions+=2;NFSU2_TR(0x47b8ca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B47b8cd:{NFSU2_TR(0x47b8cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b8d2ull));
TAIL_STATIC(0x721fa7u,721);
}
B47b8d2:L47b8d2:{c.instructions+=1;NFSU2_TR(0x47b8d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47b8d5:L47b8d5:{c.instructions+=6;NFSU2_TR(0x47b8d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47b8d6:{NFSU2_TR(0x47b8d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47b8d7:{NFSU2_TR(0x47b8d7);
__builtin_memmove((R+0),(R+20),4);
}
B47b8d9:{NFSU2_TR(0x47b8d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B47b8da:{NFSU2_TR(0x47b8da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47b8db:{NFSU2_TR(0x47b8db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47b8e0:L47b8e0:{c.instructions+=6;NFSU2_TR(0x47b8e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b8e1:{NFSU2_TR(0x47b8e1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b8e2:{NFSU2_TR(0x47b8e2);
__builtin_memmove((R+24),(R+4),4);
}
B47b8e4:{NFSU2_TR(0x47b8e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47b8e7:{NFSU2_TR(0x47b8e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47b8e9:{NFSU2_TR(0x47b8e9);
if(r1(R+518)){{goto L47b928;}}
}
B47b8eb:L47b8eb:{c.instructions+=3;NFSU2_TR(0x47b8eb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47b8ee:{NFSU2_TR(0x47b8ee);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47b8f0:{NFSU2_TR(0x47b8f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47b928;}}
}
B47b8f2:L47b8f2:{c.instructions+=7;NFSU2_TR(0x47b8f2);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B47b8f7:{NFSU2_TR(0x47b8f7);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47b8fa:{NFSU2_TR(0x47b8fa);
{u32 ea_=u32(r4(R+24)+u32(88u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B47b8fd:{NFSU2_TR(0x47b8fd);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B47b903:{NFSU2_TR(0x47b903);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47b905:{NFSU2_TR(0x47b905);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47b908:{NFSU2_TR(0x47b908);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47b928;}}
}
B47b90a:L47b90a:{c.instructions+=5;NFSU2_TR(0x47b90a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47b90d:{NFSU2_TR(0x47b90d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b90e:{NFSU2_TR(0x47b90e);
u8 U[4];
w4(U+0,u32(0x78bbc4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b913:{NFSU2_TR(0x47b913);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b915:{NFSU2_TR(0x47b915);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b91aull));
TAIL_STATIC(0x4691c0u,469);
}
B47b91a:L47b91a:{c.instructions+=3;NFSU2_TR(0x47b91a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B47b91d:{NFSU2_TR(0x47b91d);
__builtin_memmove((R+4),(R+24),4);
}
B47b91f:{NFSU2_TR(0x47b91f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b924ull));
TAIL_STATIC(0x46c9d0u,46c);
}
B47b924:L47b924:{c.instructions+=1;NFSU2_TR(0x47b924);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B47b928:L47b928:{c.instructions+=3;NFSU2_TR(0x47b928);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47b92b:{NFSU2_TR(0x47b92b);
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
B47b92d:{NFSU2_TR(0x47b92d);
if(r1(R+518)){{goto L47b98a;}}
}
B47b92f:L47b92f:{c.instructions+=3;NFSU2_TR(0x47b92f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47b932:{NFSU2_TR(0x47b932);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x7ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47b935:{NFSU2_TR(0x47b935);
if(r1(R+518)){{goto L47b98a;}}
}
B47b937:L47b937:{c.instructions+=3;NFSU2_TR(0x47b937);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b938:{NFSU2_TR(0x47b938);
__builtin_memmove((R+4),(R+24),4);
}
B47b93a:{NFSU2_TR(0x47b93a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b93full));
TAIL_STATIC(0x45ac20u,45a);
}
B47b93f:L47b93f:{c.instructions+=5;NFSU2_TR(0x47b93f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47b943:{NFSU2_TR(0x47b943);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B47b947:{NFSU2_TR(0x47b947);
{u32 ea_=u32(u32(7907116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47b94d:{NFSU2_TR(0x47b94d);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47b953:{NFSU2_TR(0x47b953);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b958ull));
TAIL_STATIC(0x75bed4u,75b);
}
B47b958:L47b958:{c.instructions+=4;NFSU2_TR(0x47b958);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B47b95b:{NFSU2_TR(0x47b95b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47b95e:{NFSU2_TR(0x47b95e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47b961:{NFSU2_TR(0x47b961);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b966ull));
TAIL_STATIC(0x721f99u,721);
}
B47b966:L47b966:{c.instructions+=8;NFSU2_TR(0x47b966);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B47b969:{NFSU2_TR(0x47b969);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47b96c:{NFSU2_TR(0x47b96c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b96d:{NFSU2_TR(0x47b96d);
{u32 ea_=u32(u32(7907660u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47b973:{NFSU2_TR(0x47b973);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47b976:{NFSU2_TR(0x47b976);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b978:{NFSU2_TR(0x47b978);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b979:{NFSU2_TR(0x47b979);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b97eull));
TAIL_STATIC(0x723e9du,723);
}
B47b97e:L47b97e:{c.instructions+=4;NFSU2_TR(0x47b97e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B47b981:{NFSU2_TR(0x47b981);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47b982:{NFSU2_TR(0x47b982);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47b985:{NFSU2_TR(0x47b985);
TAIL_STATIC(0x721fa7u,721);
}
B47b98a:L47b98a:{c.instructions+=3;NFSU2_TR(0x47b98a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47b98b:{NFSU2_TR(0x47b98b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B47b98c:{NFSU2_TR(0x47b98c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47b990:L47b990:{c.instructions+=4;NFSU2_TR(0x47b990);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B47b993:{NFSU2_TR(0x47b993);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b994:{NFSU2_TR(0x47b994);
__builtin_memmove((R+24),(R+4),4);
}
B47b996:{NFSU2_TR(0x47b996);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b99bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47b8e0u);}goto L47b8e0;}
}
B47b99b:L47b99b:{c.instructions+=1;NFSU2_TR(0x47b99b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b9a0ull));
TAIL_STATIC(0x4fe4a0u,4fe);
}
B47b9a0:L47b9a0:{c.instructions+=2;NFSU2_TR(0x47b9a0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47b9a2:{NFSU2_TR(0x47b9a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47b9d8;}}
}
B47b9a4:L47b9a4:{c.instructions+=3;NFSU2_TR(0x47b9a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47b9a7:{NFSU2_TR(0x47b9a7);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B47b9ab:{NFSU2_TR(0x47b9ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47ba11;}}
}
B47b9ad:L47b9ad:{c.instructions+=5;NFSU2_TR(0x47b9ad);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B47b9b3:{NFSU2_TR(0x47b9b3);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47b9b9:{NFSU2_TR(0x47b9b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47b9bc:{NFSU2_TR(0x47b9bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47b9be:{NFSU2_TR(0x47b9be);
if(r1(R+518)){{goto L47b9cd;}}
}
B47b9c0:L47b9c0:{c.instructions+=4;NFSU2_TR(0x47b9c0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B47b9c2:{NFSU2_TR(0x47b9c2);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47b9c5:{NFSU2_TR(0x47b9c5);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47b9c7:{NFSU2_TR(0x47b9c7);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47b9cd:L47b9cd:{c.instructions+=2;NFSU2_TR(0x47b9cd);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47b9cf:{NFSU2_TR(0x47b9cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b9d4ull));
TAIL_STATIC(0x75bed4u,75b);
}
B47b9d4:L47b9d4:{c.instructions+=2;NFSU2_TR(0x47b9d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47b9d6:{NFSU2_TR(0x47b9d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47ba11;}}
}
B47b9d8:L47b9d8:{c.instructions+=4;NFSU2_TR(0x47b9d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47b9db:{NFSU2_TR(0x47b9db);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47b9de:{NFSU2_TR(0x47b9de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b9df:{NFSU2_TR(0x47b9df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b9e4ull));
TAIL_STATIC(0x7227cbu,722);
}
B47b9e4:L47b9e4:{c.instructions+=4;NFSU2_TR(0x47b9e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47b9e7:{NFSU2_TR(0x47b9e7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47b9ea:{NFSU2_TR(0x47b9ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47b9ec:{NFSU2_TR(0x47b9ec);
if(r1(R+518)){{goto L47ba11;}}
}
B47b9ee:L47b9ee:{c.instructions+=5;NFSU2_TR(0x47b9ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47b9f1:{NFSU2_TR(0x47b9f1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b9f2:{NFSU2_TR(0x47b9f2);
u8 U[4];
w4(U+0,u32(0x78a950ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b9f7:{NFSU2_TR(0x47b9f7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47b9f9:{NFSU2_TR(0x47b9f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b9feull));
TAIL_STATIC(0x4691c0u,469);
}
B47b9fe:L47b9fe:{c.instructions+=3;NFSU2_TR(0x47b9fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47ba01:{NFSU2_TR(0x47ba01);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ba02:{NFSU2_TR(0x47ba02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ba07ull));
TAIL_STATIC(0x575630u,575);
}
B47ba07:L47ba07:{c.instructions+=2;NFSU2_TR(0x47ba07);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B47ba0a:{NFSU2_TR(0x47ba0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47ba11:L47ba11:{c.instructions+=4;NFSU2_TR(0x47ba11);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B47ba16:{NFSU2_TR(0x47ba16);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B47ba19:{NFSU2_TR(0x47ba19);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47ba1b:{NFSU2_TR(0x47ba1b);
if(r1(R+518)){{goto L47ba42;}}
}
B47ba1d:L47ba1d:{c.instructions+=3;NFSU2_TR(0x47ba1d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B47ba20:{NFSU2_TR(0x47ba20);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47ba22:{NFSU2_TR(0x47ba22);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47ba42;}}
}
B47ba24:L47ba24:{c.instructions+=3;NFSU2_TR(0x47ba24);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47ba27:{NFSU2_TR(0x47ba27);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47ba2a:{NFSU2_TR(0x47ba2a);
if(r1(R+518)){{goto L47ba4c;}}
}
B47ba2c:L47ba2c:{c.instructions+=2;NFSU2_TR(0x47ba2c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47ba2f:{NFSU2_TR(0x47ba2f);
if(r1(R+518)){{goto L47ba4c;}}
}
B47ba31:L47ba31:{c.instructions+=3;NFSU2_TR(0x47ba31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47ba34:{NFSU2_TR(0x47ba34);
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
B47ba37:{NFSU2_TR(0x47ba37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ba3cull));
TAIL_STATIC(0x45a610u,45a);
}
B47ba3c:L47ba3c:{c.instructions+=2;NFSU2_TR(0x47ba3c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B47ba40:{NFSU2_TR(0x47ba40);
{goto L47ba4c;}
}
B47ba42:L47ba42:{c.instructions+=2;NFSU2_TR(0x47ba42);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47ba46:{NFSU2_TR(0x47ba46);
if(r1(R+518)){{goto L47bafe;}}
}
B47ba4c:L47ba4c:{c.instructions+=3;NFSU2_TR(0x47ba4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47ba4f:{NFSU2_TR(0x47ba4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47ba51:{NFSU2_TR(0x47ba51);
if(r1(R+518)){{goto L47ba82;}}
}
B47ba53:L47ba53:{c.instructions+=3;NFSU2_TR(0x47ba53);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47ba56:{NFSU2_TR(0x47ba56);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47ba58:{NFSU2_TR(0x47ba58);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47ba82;}}
}
B47ba5a:L47ba5a:{c.instructions+=4;NFSU2_TR(0x47ba5a);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B47ba5f:{NFSU2_TR(0x47ba5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47ba62:{NFSU2_TR(0x47ba62);
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
B47ba64:{NFSU2_TR(0x47ba64);
if(r1(R+518)){{goto L47ba6d;}}
}
B47ba66:L47ba66:{c.instructions+=2;NFSU2_TR(0x47ba66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47ba68:{NFSU2_TR(0x47ba68);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ba6bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47ba6b:L47ba6b:{c.instructions+=1;NFSU2_TR(0x47ba6b);
{goto L47ba6f;}
}
B47ba6d:L47ba6d:{c.instructions+=1;NFSU2_TR(0x47ba6d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47ba6f:L47ba6f:{c.instructions+=2;NFSU2_TR(0x47ba6f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ba70:{NFSU2_TR(0x47ba70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ba75ull));
TAIL_STATIC(0x736d60u,736);
}
B47ba75:L47ba75:{c.instructions+=3;NFSU2_TR(0x47ba75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47ba78:{NFSU2_TR(0x47ba78);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47ba7b:{NFSU2_TR(0x47ba7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47ba82:L47ba82:{c.instructions+=5;NFSU2_TR(0x47ba82);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B47ba88:{NFSU2_TR(0x47ba88);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47ba8b:{NFSU2_TR(0x47ba8b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47ba8d:{NFSU2_TR(0x47ba8d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ba8e:{NFSU2_TR(0x47ba8e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47babc;}}
}
B47ba90:L47ba90:{c.instructions+=3;NFSU2_TR(0x47ba90);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47ba93:{NFSU2_TR(0x47ba93);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47ba95:{NFSU2_TR(0x47ba95);
if(r1(R+518)){{goto L47babc;}}
}
B47ba97:L47ba97:{c.instructions+=3;NFSU2_TR(0x47ba97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B47ba9a:{NFSU2_TR(0x47ba9a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+28),u32(0x4ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47ba9d:{NFSU2_TR(0x47ba9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47baa2ull));
TAIL_STATIC(0x721f99u,721);
}
B47baa2:L47baa2:{c.instructions+=4;NFSU2_TR(0x47baa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47baa5:{NFSU2_TR(0x47baa5);
u8 U[4];
w4(U+0,u32(0x1000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47baaa:{NFSU2_TR(0x47baaa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47baab:{NFSU2_TR(0x47baab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47bab0ull));
TAIL_STATIC(0x7230a7u,723);
}
B47bab0:L47bab0:{c.instructions+=2;NFSU2_TR(0x47bab0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47bab3:{NFSU2_TR(0x47bab3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47bab8ull));
TAIL_STATIC(0x721fa7u,721);
}
B47bab8:L47bab8:{c.instructions+=1;NFSU2_TR(0x47bab8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B47babc:L47babc:{c.instructions+=3;NFSU2_TR(0x47babc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47babf:{NFSU2_TR(0x47babf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47bac1:{NFSU2_TR(0x47bac1);
if(r1(R+518)){{goto L47bafd;}}
}
B47bac3:L47bac3:{c.instructions+=3;NFSU2_TR(0x47bac3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B47bac6:{NFSU2_TR(0x47bac6);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+28),u32(0x4ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47bac9:{NFSU2_TR(0x47bac9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47baceull));
TAIL_STATIC(0x721f99u,721);
}
B47bace:L47bace:{c.instructions+=5;NFSU2_TR(0x47bace);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47bad1:{NFSU2_TR(0x47bad1);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B47bad5:{NFSU2_TR(0x47bad5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47bad6:{NFSU2_TR(0x47bad6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47bad7:{NFSU2_TR(0x47bad7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47badcull));
TAIL_STATIC(0x722eceu,722);
}
B47badc:L47badc:{c.instructions+=3;NFSU2_TR(0x47badc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47badf:{NFSU2_TR(0x47badf);
__builtin_memmove((R+28),(R+0),4);
}
B47bae1:{NFSU2_TR(0x47bae1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47bae6ull));
TAIL_STATIC(0x721fa7u,721);
}
B47bae6:L47bae6:{c.instructions+=2;NFSU2_TR(0x47bae6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47bae8:{NFSU2_TR(0x47bae8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47bafd;}}
}
B47baea:L47baea:{c.instructions+=3;NFSU2_TR(0x47baea);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47baee:{NFSU2_TR(0x47baee);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47baf0:{NFSU2_TR(0x47baf0);
if(r1(R+518)){{goto L47bafd;}}
}
B47baf2:L47baf2:{c.instructions+=5;NFSU2_TR(0x47baf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47baf5:{NFSU2_TR(0x47baf5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47baf6:{NFSU2_TR(0x47baf6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47baf7:{NFSU2_TR(0x47baf7);
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
B47bafa:{NFSU2_TR(0x47bafa);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B47bafd:L47bafd:{c.instructions+=1;NFSU2_TR(0x47bafd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47bafe:L47bafe:{c.instructions+=3;NFSU2_TR(0x47bafe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47baff:{NFSU2_TR(0x47baff);
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
B47bb02:{NFSU2_TR(0x47bb02);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47bb10:L47bb10:{c.instructions+=3;NFSU2_TR(0x47bb10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47bb11:{NFSU2_TR(0x47bb11);
__builtin_memmove((R+24),(R+4),4);
}
B47bb13:{NFSU2_TR(0x47bb13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47bb18ull));
TAIL_STATIC(0x46cd80u,46c);
}
B47bb18:L47bb18:{c.instructions+=2;NFSU2_TR(0x47bb18);
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
B47bb1d:{NFSU2_TR(0x47bb1d);
if(r1(R+518)){{goto L47bb28;}}
}
B47bb1f:L47bb1f:{c.instructions+=2;NFSU2_TR(0x47bb1f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47bb20:{NFSU2_TR(0x47bb20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47bb25ull));
TAIL_STATIC(0x440540u,440);
}
B47bb25:L47bb25:{c.instructions+=1;NFSU2_TR(0x47bb25);
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
B47bb28:L47bb28:{c.instructions+=3;NFSU2_TR(0x47bb28);
__builtin_memmove((R+0),(R+24),4);
}
B47bb2a:{NFSU2_TR(0x47bb2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47bb2b:{NFSU2_TR(0x47bb2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47bb30:L47bb30:{c.instructions+=5;NFSU2_TR(0x47bb30);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47bb31:{NFSU2_TR(0x47bb31);
__builtin_memmove((R+20),(R+4),4);
}
B47bb33:{NFSU2_TR(0x47bb33);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47bb36:{NFSU2_TR(0x47bb36);
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
B47bb38:{NFSU2_TR(0x47bb38);
if(r1(R+518)){{goto L47bbd9;}}
}
B47bb3e:L47bb3e:{c.instructions+=5;NFSU2_TR(0x47bb3e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47bb3f:{NFSU2_TR(0x47bb3f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B47bb43:{NFSU2_TR(0x47bb43);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47bb45:{NFSU2_TR(0x47bb45);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47bb46:{NFSU2_TR(0x47bb46);
if(r1(R+518)){{goto L47bb8c;}}
}
B47bb48:L47bb48:{c.instructions+=3;NFSU2_TR(0x47bb48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47bb4b:{NFSU2_TR(0x47bb4b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47bb4e:{NFSU2_TR(0x47bb4e);
w4(R+4,u32(0x5ull));
}
B47bb53:L47bb53:{c.instructions+=1;NFSU2_TR(0x47bb53);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L47bb55;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47bb53u);}goto L47bb53;}
}
B47bb55:L47bb55:{c.instructions+=4;NFSU2_TR(0x47bb55);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B47bb59:{NFSU2_TR(0x47bb59);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B47bb5c:{NFSU2_TR(0x47bb5c);
w4(R+8,u32(0x7fffull));
}
B47bb61:{NFSU2_TR(0x47bb61);
if(r1(R+518)){{goto L47bb74;}}
}
B47bb63:L47bb63:{c.instructions+=2;NFSU2_TR(0x47bb63);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B47bb64:{NFSU2_TR(0x47bb64);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47bb80;}}
}
B47bb66:L47bb66:{c.instructions+=3;NFSU2_TR(0x47bb66);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B47bb6a:{NFSU2_TR(0x47bb6a);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x7f36e8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+8,u32(r2(U+8)));
}
B47bb72:{NFSU2_TR(0x47bb72);
{goto L47bb80;}
}
B47bb74:L47bb74:{c.instructions+=2;NFSU2_TR(0x47bb74);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B47bb78:{NFSU2_TR(0x47bb78);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x7f34a0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+8,u32(r2(U+8)));
}
B47bb80:L47bb80:{c.instructions+=4;NFSU2_TR(0x47bb80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47bb83:{NFSU2_TR(0x47bb83);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B47bb86:{NFSU2_TR(0x47bb86);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B47bb89:{NFSU2_TR(0x47bb89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47bb8c:L47bb8c:{c.instructions+=6;NFSU2_TR(0x47bb8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47bb8f:{NFSU2_TR(0x47bb8f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B47bb93:{NFSU2_TR(0x47bb93);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47bb96:{NFSU2_TR(0x47bb96);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B47bb98:{NFSU2_TR(0x47bb98);
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
B47bb9a:{NFSU2_TR(0x47bb9a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L47bbd7;}}
}
B47bb9c:L47bb9c:{c.instructions+=2;NFSU2_TR(0x47bb9c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47bb9f:{NFSU2_TR(0x47bb9f);
}
B47bba0:L47bba0:{c.instructions+=3;NFSU2_TR(0x47bba0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B47bba2:{NFSU2_TR(0x47bba2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47bba4:{NFSU2_TR(0x47bba4);
if(r1(R+518)){{goto L47bbc8;}}
}
B47bba6:L47bba6:{c.instructions+=3;NFSU2_TR(0x47bba6);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47bba9:{NFSU2_TR(0x47bba9);
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
B47bbab:{NFSU2_TR(0x47bbab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47bbbb;}}
}
B47bbad:L47bbad:{c.instructions+=3;NFSU2_TR(0x47bbad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47bbaf:{NFSU2_TR(0x47bbaf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47bbb1:{NFSU2_TR(0x47bbb1);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47bbb3ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B47bbb3:L47bbb3:{c.instructions+=2;NFSU2_TR(0x47bbb3);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B47bbb9:{NFSU2_TR(0x47bbb9);
{goto L47bbc8;}
}
B47bbbb:L47bbbb:{c.instructions+=3;NFSU2_TR(0x47bbbb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B47bbbe:{NFSU2_TR(0x47bbbe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47bbbf:{NFSU2_TR(0x47bbbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47bbc4ull));
TAIL_STATIC(0x46cf70u,46c);
}
B47bbc4:L47bbc4:{c.instructions+=1;NFSU2_TR(0x47bbc4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B47bbc8:L47bbc8:{c.instructions+=6;NFSU2_TR(0x47bbc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47bbcb:{NFSU2_TR(0x47bbcb);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B47bbcf:{NFSU2_TR(0x47bbcf);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B47bbd0:{NFSU2_TR(0x47bbd0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B47bbd3:{NFSU2_TR(0x47bbd3);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B47bbd5:{NFSU2_TR(0x47bbd5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47bba0u);}goto L47bba0;}}
}
B47bbd7:L47bbd7:{c.instructions+=2;NFSU2_TR(0x47bbd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47bbd8:{NFSU2_TR(0x47bbd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47bbd9:L47bbd9:{c.instructions+=2;NFSU2_TR(0x47bbd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B47bbda:{NFSU2_TR(0x47bbda);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47bbe0:L47bbe0:{c.instructions+=12;NFSU2_TR(0x47bbe0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47bbe2:{NFSU2_TR(0x47bbe2);
u8 U[4];
w4(U+0,u32(0x772268ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47bbe7:{NFSU2_TR(0x47bbe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47bbed:{NFSU2_TR(0x47bbed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47bbee:{NFSU2_TR(0x47bbee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47bbf5:{NFSU2_TR(0x47bbf5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47bbf6:{NFSU2_TR(0x47bbf6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47bbf7:{NFSU2_TR(0x47bbf7);
__builtin_memmove((R+24),(R+4),4);
}
B47bbf9:{NFSU2_TR(0x47bbf9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47bbfd:{NFSU2_TR(0x47bbfd);
u8 U[4];
w4(U+0,u32(0x789ec0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B47bc03:{NFSU2_TR(0x47bc03);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47bc0b:{NFSU2_TR(0x47bc0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47bc10ull));
TAIL_STATIC(0x46cef0u,46c);
}
B47bc10:L47bc10:{c.instructions+=6;NFSU2_TR(0x47bc10);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47bc14:{NFSU2_TR(0x47bc14);
u8 U[4];
w4(U+0,u32(0x789ce4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B47bc1a:{NFSU2_TR(0x47bc1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47bc1b:{NFSU2_TR(0x47bc1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47bc22:{NFSU2_TR(0x47bc22);
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
B47bc25:{NFSU2_TR(0x47bc25);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47bc30:L47bc30:{c.instructions+=6;NFSU2_TR(0x47bc30);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47bc34:{NFSU2_TR(0x47bc34);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x8003b500ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B47bc3a:{NFSU2_TR(0x47bc3a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47bc3b:{NFSU2_TR(0x47bc3b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47bc3c:{NFSU2_TR(0x47bc3c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47bc3d:{NFSU2_TR(0x47bc3d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47bcb6;}}
}
B47bc3f:L47bc3f:{c.instructions+=5;NFSU2_TR(0x47bc3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47bc42:{NFSU2_TR(0x47bc42);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B47bc46:{NFSU2_TR(0x47bc46);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47bc49:{NFSU2_TR(0x47bc49);
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
B47bc4b:{NFSU2_TR(0x47bc4b);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L47bcad;}}
}
B47bc4d:L47bc4d:{c.instructions+=1;NFSU2_TR(0x47bc4d);
__builtin_memmove((R+4),(R+4),4);
}
B47bc50:L47bc50:{c.instructions+=2;NFSU2_TR(0x47bc50);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x3b502ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x3b502ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x3b502ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B47bc56:{NFSU2_TR(0x47bc56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47bcad;}}
}
B47bc58:L47bc58:{c.instructions+=4;NFSU2_TR(0x47bc58);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B47bc5d:{NFSU2_TR(0x47bc5d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47bc5f:{NFSU2_TR(0x47bc5f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47bc62:{NFSU2_TR(0x47bc62);
if(r1(R+518)){{goto L47bc7c;}}
}
B47bc64:L47bc64:{c.instructions+=3;NFSU2_TR(0x47bc64);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47bc6a:{NFSU2_TR(0x47bc6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47bc6c:{NFSU2_TR(0x47bc6c);
if(r1(R+518)){{goto L47bc7c;}}
}
B47bc6e:L47bc6e:{c.instructions+=4;NFSU2_TR(0x47bc6e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B47bc72:{NFSU2_TR(0x47bc72);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47bc73:{NFSU2_TR(0x47bc73);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B47bc77:{NFSU2_TR(0x47bc77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47bc7cull));
TAIL_STATIC(0x479130u,479);
}
B47bc7c:L47bc7c:{c.instructions+=8;NFSU2_TR(0x47bc7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47bc7f:{NFSU2_TR(0x47bc7f);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B47bc83:{NFSU2_TR(0x47bc83);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B47bc86:{NFSU2_TR(0x47bc86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47bc89:{NFSU2_TR(0x47bc89);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B47bc8c:{NFSU2_TR(0x47bc8c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47bc8e:{NFSU2_TR(0x47bc8e);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47bc90:{NFSU2_TR(0x47bc90);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L47bca2;}}
}
B47bc92:L47bc92:{c.instructions+=5;NFSU2_TR(0x47bc92);
s4(0x82bb30,u32(u32(m4(0x82bb30))+u32(u32(0x10ull))));
}
B47bc99:{NFSU2_TR(0x47bc99);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B47bc9d:{NFSU2_TR(0x47bc9d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B47bc9e:{NFSU2_TR(0x47bc9e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B47bca0:{NFSU2_TR(0x47bca0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47bc92u);}goto L47bc92;}}
}
B47bca2:L47bca2:{c.instructions+=4;NFSU2_TR(0x47bca2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47bca5:{NFSU2_TR(0x47bca5);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B47bca9:{NFSU2_TR(0x47bca9);
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
B47bcab:{NFSU2_TR(0x47bcab);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47bc50u);}goto L47bc50;}}
}
B47bcad:L47bcad:{c.instructions+=5;NFSU2_TR(0x47bcad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47bcae:{NFSU2_TR(0x47bcae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47bcaf:{NFSU2_TR(0x47bcaf);
w4(R+0,u32(0x1ull));
}
B47bcb4:{NFSU2_TR(0x47bcb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47bcb5:{NFSU2_TR(0x47bcb5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47bcb6:L47bcb6:{c.instructions+=5;NFSU2_TR(0x47bcb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47bcb7:{NFSU2_TR(0x47bcb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47bcb8:{NFSU2_TR(0x47bcb8);
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
B47bcba:{NFSU2_TR(0x47bcba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47bcbb:{NFSU2_TR(0x47bcbb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47bcc0:L47bcc0:{c.instructions+=9;NFSU2_TR(0x47bcc0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47bcc1:{NFSU2_TR(0x47bcc1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47bcc2:{NFSU2_TR(0x47bcc2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47bcc3:{NFSU2_TR(0x47bcc3);
__builtin_memmove((R+24),(R+4),4);
}
B47bcc5:{NFSU2_TR(0x47bcc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47bccb:{NFSU2_TR(0x47bccb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47bcce:{NFSU2_TR(0x47bcce);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47bcd1:{NFSU2_TR(0x47bcd1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47bcd2:{NFSU2_TR(0x47bcd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47bcd7ull));
TAIL_STATIC(0x5ebf50u,5eb);
}
B47bcd7:L47bcd7:{c.instructions+=9;NFSU2_TR(0x47bcd7);
w4(R+8,u32(r2(R+0)));
}
B47bcda:{NFSU2_TR(0x47bcda);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47bcde:{NFSU2_TR(0x47bcde);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B47bce2:{NFSU2_TR(0x47bce2);
{u32 ea_=u32(u32(7912448u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47bce8:{NFSU2_TR(0x47bce8);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B47bcec:{NFSU2_TR(0x47bcec);
{u32 ea_=u32(u32(7882000u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B47bcf2:{NFSU2_TR(0x47bcf2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47bcf4:{NFSU2_TR(0x47bcf4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47bcf7:{NFSU2_TR(0x47bcf7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47bd07;}}
}
B47bcf9:L47bcf9:{c.instructions+=3;NFSU2_TR(0x47bcf9);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47bcfd:{NFSU2_TR(0x47bcfd);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B47bd03:{NFSU2_TR(0x47bd03);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47bd07:L47bd07:{c.instructions+=6;NFSU2_TR(0x47bd07);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B47bd0b:{NFSU2_TR(0x47bd0b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B47bd0f:{NFSU2_TR(0x47bd0f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47bd10:{NFSU2_TR(0x47bd10);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47bd11:{NFSU2_TR(0x47bd11);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B47bd14:{NFSU2_TR(0x47bd14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47bd19ull));
TAIL_STATIC(0x45b4c0u,45b);
}
B47bd19:L47bd19:{c.instructions+=4;NFSU2_TR(0x47bd19);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47bd1a:{NFSU2_TR(0x47bd1a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47bd1b:{NFSU2_TR(0x47bd1b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B47bd1e:{NFSU2_TR(0x47bd1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47bd23ull));
TAIL_STATIC(0x45b4c0u,45b);
}
B47bd23:L47bd23:{c.instructions+=27;NFSU2_TR(0x47bd23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47bd29:{NFSU2_TR(0x47bd29);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47bd2c:{NFSU2_TR(0x47bd2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47bd2f:{NFSU2_TR(0x47bd2f);
{u32 ea_=u32(r4(R+0)+u32(1320u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47bd35:{NFSU2_TR(0x47bd35);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47bd36:{NFSU2_TR(0x47bd36);
{u32 ea_=u32(r4(R+0)+u32(1316u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47bd3c:{NFSU2_TR(0x47bd3c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47bd3d:{NFSU2_TR(0x47bd3d);
{u32 ea_=u32(r4(R+0)+u32(1312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47bd43:{NFSU2_TR(0x47bd43);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((R+4),(U+0),4);
}
B47bd49:{NFSU2_TR(0x47bd49);
{u32 ea_=u32(r4(R+0)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47bd4f:{NFSU2_TR(0x47bd4f);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B47bd51:{NFSU2_TR(0x47bd51);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B47bd53:{NFSU2_TR(0x47bd53);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B47bd55:{NFSU2_TR(0x47bd55);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B47bd57:{NFSU2_TR(0x47bd57);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B47bd59:{NFSU2_TR(0x47bd59);
__asm__ volatile(".byte 0xd9,0xc4":::"memory");
}
B47bd5b:{NFSU2_TR(0x47bd5b);
__asm__ volatile(".byte 0xd8,0xcd":::"memory");
}
B47bd5d:{NFSU2_TR(0x47bd5d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B47bd5f:{NFSU2_TR(0x47bd5f);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B47bd61:{NFSU2_TR(0x47bd61);
__asm__ volatile(".byte 0xdd,0xdc":::"memory");
}
B47bd63:{NFSU2_TR(0x47bd63);
__asm__ volatile(".byte 0xd9,0xcb":::"memory");
}
B47bd65:{NFSU2_TR(0x47bd65);
__asm__ volatile(".byte 0xde,0xeb":::"memory");
}
B47bd67:{NFSU2_TR(0x47bd67);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B47bd69:{NFSU2_TR(0x47bd69);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47bd6c:{NFSU2_TR(0x47bd6c);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B47bd6e:{NFSU2_TR(0x47bd6e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B47bd70:{NFSU2_TR(0x47bd70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47bd75ull));
TAIL_STATIC(0x45b4c0u,45b);
}
B47bd75:L47bd75:{c.instructions+=27;NFSU2_TR(0x47bd75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47bd7b:{NFSU2_TR(0x47bd7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47bd7e:{NFSU2_TR(0x47bd7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47bd81:{NFSU2_TR(0x47bd81);
{u32 ea_=u32(r4(R+0)+u32(1320u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47bd87:{NFSU2_TR(0x47bd87);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47bd88:{NFSU2_TR(0x47bd88);
{u32 ea_=u32(r4(R+0)+u32(1316u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47bd8e:{NFSU2_TR(0x47bd8e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47bd8f:{NFSU2_TR(0x47bd8f);
{u32 ea_=u32(r4(R+0)+u32(1312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47bd95:{NFSU2_TR(0x47bd95);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B47bd9b:{NFSU2_TR(0x47bd9b);
{u32 ea_=u32(r4(R+0)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47bda1:{NFSU2_TR(0x47bda1);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B47bda3:{NFSU2_TR(0x47bda3);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B47bda5:{NFSU2_TR(0x47bda5);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B47bda7:{NFSU2_TR(0x47bda7);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B47bda9:{NFSU2_TR(0x47bda9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B47bdab:{NFSU2_TR(0x47bdab);
__asm__ volatile(".byte 0xd9,0xc4":::"memory");
}
B47bdad:{NFSU2_TR(0x47bdad);
__asm__ volatile(".byte 0xd8,0xcd":::"memory");
}
B47bdaf:{NFSU2_TR(0x47bdaf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B47bdb1:{NFSU2_TR(0x47bdb1);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B47bdb3:{NFSU2_TR(0x47bdb3);
__asm__ volatile(".byte 0xdd,0xdc":::"memory");
}
B47bdb5:{NFSU2_TR(0x47bdb5);
__asm__ volatile(".byte 0xd9,0xcb":::"memory");
}
B47bdb7:{NFSU2_TR(0x47bdb7);
__asm__ volatile(".byte 0xde,0xeb":::"memory");
}
B47bdb9:{NFSU2_TR(0x47bdb9);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B47bdbb:{NFSU2_TR(0x47bdbb);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47bdbe:{NFSU2_TR(0x47bdbe);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B47bdc0:{NFSU2_TR(0x47bdc0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B47bdc2:{NFSU2_TR(0x47bdc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47bdc7ull));
TAIL_STATIC(0x45b4c0u,45b);
}
B47bdc7:L47bdc7:{c.instructions+=6;NFSU2_TR(0x47bdc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47bdcd:{NFSU2_TR(0x47bdcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47bdd3:{NFSU2_TR(0x47bdd3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47bdd4:{NFSU2_TR(0x47bdd4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47bdd5:{NFSU2_TR(0x47bdd5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((R+4),(U+0),4);
}
B47bddb:{NFSU2_TR(0x47bddb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47bde0ull));
TAIL_STATIC(0x45b4c0u,45b);
}
B47bde0:L47bde0:{c.instructions+=3;NFSU2_TR(0x47bde0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47bde1:{NFSU2_TR(0x47bde1);
__builtin_memmove((R+4),(R+24),4);
}
B47bde3:{NFSU2_TR(0x47bde3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47bde8ull));
TAIL_STATIC(0x46d620u,46d);
}
B47bde8:L47bde8:{c.instructions+=5;NFSU2_TR(0x47bde8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47bde9:{NFSU2_TR(0x47bde9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47bdea:{NFSU2_TR(0x47bdea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47bdeb:{NFSU2_TR(0x47bdeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B47bdec:{NFSU2_TR(0x47bdec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47bdf0:L47bdf0:{c.instructions+=5;NFSU2_TR(0x47bdf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47bdf1:{NFSU2_TR(0x47bdf1);
__builtin_memmove((R+24),(R+4),4);
}
B47bdf3:{NFSU2_TR(0x47bdf3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47bdf6:{NFSU2_TR(0x47bdf6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47bdf8:{NFSU2_TR(0x47bdf8);
if(r1(R+518)){{goto L47be0b;}}
}
B47bdfa:L47bdfa:{c.instructions+=5;NFSU2_TR(0x47bdfa);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47bdfe:{NFSU2_TR(0x47bdfe);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47be02:{NFSU2_TR(0x47be02);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B47be05:{NFSU2_TR(0x47be05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47be08:{NFSU2_TR(0x47be08);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47be0b:L47be0b:{c.instructions+=3;NFSU2_TR(0x47be0b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47be0c:{NFSU2_TR(0x47be0c);
__builtin_memmove((R+4),(R+24),4);
}
B47be0e:{NFSU2_TR(0x47be0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47be13ull));
TAIL_STATIC(0x46dfe0u,46d);
}
B47be13:L47be13:{c.instructions+=17;NFSU2_TR(0x47be13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x194ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47be19:{NFSU2_TR(0x47be19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B47be1f:{NFSU2_TR(0x47be1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47be25:{NFSU2_TR(0x47be25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47be2b:{NFSU2_TR(0x47be2b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B47be2d:{NFSU2_TR(0x47be2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47be33:{NFSU2_TR(0x47be33);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B47be35:{NFSU2_TR(0x47be35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B47be3b:{NFSU2_TR(0x47be3b);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B47be3d:{NFSU2_TR(0x47be3d);
w4(R+4,sar<u32>(r4(R+4),u64(u32(0x1ull))));
}
B47be3f:{NFSU2_TR(0x47be3f);
w4(R+8,sar<u32>(r4(R+8),u64(u32(0x1ull))));
}
B47be41:{NFSU2_TR(0x47be41);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47be43:{NFSU2_TR(0x47be43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47be46:{NFSU2_TR(0x47be46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47be49:{NFSU2_TR(0x47be49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47be4c:{NFSU2_TR(0x47be4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47be4d:{NFSU2_TR(0x47be4d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L47be51;}}
}
B47be4f:L47be4f:{c.instructions+=1;NFSU2_TR(0x47be4f);
__builtin_memmove((R+0),(R+4),4);
}
B47be51:L47be51:{c.instructions+=2;NFSU2_TR(0x47be51);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47be53:{NFSU2_TR(0x47be53);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L47be57;}}
}
B47be55:L47be55:{c.instructions+=1;NFSU2_TR(0x47be55);
__builtin_memmove((R+0),(R+8),4);
}
B47be57:L47be57:{c.instructions+=3;NFSU2_TR(0x47be57);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B47be5a:{NFSU2_TR(0x47be5a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47be5c:{NFSU2_TR(0x47be5c);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L47be67;}}
}
B47be5e:L47be5e:{c.instructions+=4;NFSU2_TR(0x47be5e);
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
B47be60:{NFSU2_TR(0x47be60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47be63:{NFSU2_TR(0x47be63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47be64:{NFSU2_TR(0x47be64);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47be67:L47be67:{c.instructions+=2;NFSU2_TR(0x47be67);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7fffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47be6c:{NFSU2_TR(0x47be6c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47be73;}}
}
B47be6e:L47be6e:{c.instructions+=1;NFSU2_TR(0x47be6e);
w4(R+0,u32(0x7fffull));
}
B47be73:L47be73:{c.instructions+=3;NFSU2_TR(0x47be73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47be76:{NFSU2_TR(0x47be76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47be77:{NFSU2_TR(0x47be77);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47be80:L47be80:{c.instructions+=3;NFSU2_TR(0x47be80);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47be83:{NFSU2_TR(0x47be83);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47be85:{NFSU2_TR(0x47be85);
if(r1(R+518)){{goto L47be98;}}
}
B47be87:L47be87:{c.instructions+=5;NFSU2_TR(0x47be87);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47be8b:{NFSU2_TR(0x47be8b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47be8f:{NFSU2_TR(0x47be8f);
{u32 ea_=u32(r4(R+4)+u32(92u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B47be92:{NFSU2_TR(0x47be92);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47be95:{NFSU2_TR(0x47be95);
{u32 ea_=u32(r4(R+4)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47be98:L47be98:{c.instructions+=1;NFSU2_TR(0x47be98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47be9dull));
TAIL_STATIC(0x46ea50u,46e);
}
B47be9d:L47be9d:{c.instructions+=1;NFSU2_TR(0x47be9d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47bea0:L47bea0:{c.instructions+=7;NFSU2_TR(0x47bea0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47bea1:{NFSU2_TR(0x47bea1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47bea2:{NFSU2_TR(0x47bea2);
__builtin_memmove((R+24),(R+4),4);
}
B47bea4:{NFSU2_TR(0x47bea4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47bea7:{NFSU2_TR(0x47bea7);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B47bea8:{NFSU2_TR(0x47bea8);
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
B47beab:{NFSU2_TR(0x47beab);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L47bf05;}}
}
B47bead:L47bead:{c.instructions+=2;NFSU2_TR(0x47bead);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x47bf14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B47beb4:{NFSU2_TR(0x47beb4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x47bf0cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47bebb:L47bebb:{c.instructions+=4;NFSU2_TR(0x47bebb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47bebf:{NFSU2_TR(0x47bebf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47bec0:{NFSU2_TR(0x47bec0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((R+4),(U+0),4);
}
B47bec6:{NFSU2_TR(0x47bec6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47becbull));
TAIL_STATIC(0x46b100u,46b);
}
B47becb:L47becb:{c.instructions+=3;NFSU2_TR(0x47becb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47becc:{NFSU2_TR(0x47becc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B47becd:{NFSU2_TR(0x47becd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47bed0:L47bed0:{c.instructions+=4;NFSU2_TR(0x47bed0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47bed3:{NFSU2_TR(0x47bed3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47bed6:{NFSU2_TR(0x47bed6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47bed8:{NFSU2_TR(0x47bed8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47bedbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47bedb:L47bedb:{c.instructions+=7;NFSU2_TR(0x47bedb);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B47bedf:{NFSU2_TR(0x47bedf);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47bee3:{NFSU2_TR(0x47bee3);
{u32 ea_=u32(r4(R+24)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47bee9:{NFSU2_TR(0x47bee9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xacull))));
}
B47beef:{NFSU2_TR(0x47beef);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47bef0:{NFSU2_TR(0x47bef0);
__builtin_memmove((R+4),(R+24),4);
}
B47bef2:{NFSU2_TR(0x47bef2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47bef7ull));
TAIL_STATIC(0x46b100u,46b);
}
B47bef7:L47bef7:{c.instructions+=3;NFSU2_TR(0x47bef7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47befa:{NFSU2_TR(0x47befa);
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
B47befc:{NFSU2_TR(0x47befc);
if(r1(R+518)){{goto L47bf05;}}
}
B47befe:L47befe:{c.instructions+=2;NFSU2_TR(0x47befe);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47bf02:{NFSU2_TR(0x47bf02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47bf05:L47bf05:{c.instructions+=3;NFSU2_TR(0x47bf05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47bf06:{NFSU2_TR(0x47bf06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B47bf07:{NFSU2_TR(0x47bf07);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47bf20:L47bf20:{c.instructions+=7;NFSU2_TR(0x47bf20);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47bf21:{NFSU2_TR(0x47bf21);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B47bf25:{NFSU2_TR(0x47bf25);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47bf26:{NFSU2_TR(0x47bf26);
__builtin_memmove((R+24),(R+4),4);
}
B47bf28:{NFSU2_TR(0x47bf28);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47bf2e:{NFSU2_TR(0x47bf2e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47bf30:{NFSU2_TR(0x47bf30);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47bf60;}}
}
B47bf32:L47bf32:{c.instructions+=10;NFSU2_TR(0x47bf32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47bf35:{NFSU2_TR(0x47bf35);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47bf38:{NFSU2_TR(0x47bf38);
{u32 ea_=u32(r4(R+4)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47bf3b:{NFSU2_TR(0x47bf3b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47bf3c:{NFSU2_TR(0x47bf3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47bf42:{NFSU2_TR(0x47bf42);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B47bf46:{NFSU2_TR(0x47bf46);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47bf47:{NFSU2_TR(0x47bf47);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47bf4a:{NFSU2_TR(0x47bf4a);
__builtin_memmove((R+4),(R+28),4);
}
B47bf4c:{NFSU2_TR(0x47bf4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47bf51ull));
TAIL_STATIC(0x46b100u,46b);
}
B47bf51:L47bf51:{c.instructions+=3;NFSU2_TR(0x47bf51);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47bf54:{NFSU2_TR(0x47bf54);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47bf56:{NFSU2_TR(0x47bf56);
if(r1(R+518)){{goto L47bf5f;}}
}
B47bf58:L47bf58:{c.instructions+=2;NFSU2_TR(0x47bf58);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47bf5c:{NFSU2_TR(0x47bf5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47bf5f:L47bf5f:{c.instructions+=1;NFSU2_TR(0x47bf5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47bf60:L47bf60:{c.instructions+=4;NFSU2_TR(0x47bf60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47bf63:{NFSU2_TR(0x47bf63);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B47bf64:{NFSU2_TR(0x47bf64);
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
B47bf67:{NFSU2_TR(0x47bf67);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L47bfb4;}}
}
B47bf69:L47bf69:{c.instructions+=2;NFSU2_TR(0x47bf69);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x47bfc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B47bf70:{NFSU2_TR(0x47bf70);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x47bfbcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47bf77:L47bf77:{c.instructions+=3;NFSU2_TR(0x47bf77);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47bf78:{NFSU2_TR(0x47bf78);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B47bf7e:{NFSU2_TR(0x47bf7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47bf83ull));
TAIL_STATIC(0x46b100u,46b);
}
B47bf83:L47bf83:{c.instructions+=3;NFSU2_TR(0x47bf83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47bf84:{NFSU2_TR(0x47bf84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47bf85:{NFSU2_TR(0x47bf85);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47bf88:L47bf88:{c.instructions+=9;NFSU2_TR(0x47bf88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47bf8b:{NFSU2_TR(0x47bf8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47bf8e:{NFSU2_TR(0x47bf8e);
{u32 ea_=u32(r4(R+8)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47bf91:{NFSU2_TR(0x47bf91);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
}
B47bf97:{NFSU2_TR(0x47bf97);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B47bf9b:{NFSU2_TR(0x47bf9b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47bf9c:{NFSU2_TR(0x47bf9c);
__builtin_memmove((R+4),(R+24),4);
}
B47bf9e:{NFSU2_TR(0x47bf9e);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47bfa1:{NFSU2_TR(0x47bfa1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47bfa6ull));
TAIL_STATIC(0x46b100u,46b);
}
B47bfa6:L47bfa6:{c.instructions+=3;NFSU2_TR(0x47bfa6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47bfa9:{NFSU2_TR(0x47bfa9);
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
B47bfab:{NFSU2_TR(0x47bfab);
if(r1(R+518)){{goto L47bfb4;}}
}
B47bfad:L47bfad:{c.instructions+=2;NFSU2_TR(0x47bfad);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47bfb1:{NFSU2_TR(0x47bfb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47bfb4:L47bfb4:{c.instructions+=3;NFSU2_TR(0x47bfb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47bfb5:{NFSU2_TR(0x47bfb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47bfb6:{NFSU2_TR(0x47bfb6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47bfd0:L47bfd0:{c.instructions+=3;NFSU2_TR(0x47bfd0);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B47bfd5:{NFSU2_TR(0x47bfd5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47bfd6:{NFSU2_TR(0x47bfd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47bfdbull));
TAIL_STATIC(0x43e910u,43e);
}
B47bfdb:L47bfdb:{c.instructions+=3;NFSU2_TR(0x47bfdb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47bfde:{NFSU2_TR(0x47bfde);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x5f0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x5f0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47bfe3:{NFSU2_TR(0x47bfe3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x47c00du,47c);}
}
B47bfe5:L47bfe5:{c.instructions+=6;NFSU2_TR(0x47bfe5);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47bfeb:{NFSU2_TR(0x47bfeb);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47bfee:{NFSU2_TR(0x47bfee);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B47bff4:{NFSU2_TR(0x47bff4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47bff5:{NFSU2_TR(0x47bff5);
u8 U[4];
w4(U+0,u32(0x1f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47bffa:{NFSU2_TR(0x47bffa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47bfffull));
TAIL_STATIC(0x440820u,440);
}
B47bfff:L47bfff:{c.instructions+=1;NFSU2_TR(0x47bfff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
TAIL_STATIC(0x47c002u,47c);
}
XIT:NFSU2_TR_EXIT(0x47b,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
