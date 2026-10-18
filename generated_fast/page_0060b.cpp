#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_403(u8* __restrict R,Cpu& c);
u32 body_404(u8* __restrict R,Cpu& c);
u32 body_430(u8* __restrict R,Cpu& c);
u32 body_431(u8* __restrict R,Cpu& c);
u32 body_437(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_457(u8* __restrict R,Cpu& c);
u32 body_481(u8* __restrict R,Cpu& c);
u32 body_4ec(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_513(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_57a(u8* __restrict R,Cpu& c);
u32 body_583(u8* __restrict R,Cpu& c);
u32 body_58c(u8* __restrict R,Cpu& c);
u32 body_58f(u8* __restrict R,Cpu& c);
u32 body_5d5(u8* __restrict R,Cpu& c);
u32 body_5da(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_5ee(u8* __restrict R,Cpu& c);
u32 body_5ef(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_5f8(u8* __restrict R,Cpu& c);
u32 body_5f9(u8* __restrict R,Cpu& c);
u32 body_5fa(u8* __restrict R,Cpu& c);
u32 body_5fe(u8* __restrict R,Cpu& c);
u32 body_601(u8* __restrict R,Cpu& c);
u32 body_602(u8* __restrict R,Cpu& c);
u32 body_603(u8* __restrict R,Cpu& c);
u32 body_605(u8* __restrict R,Cpu& c);
u32 body_609(u8* __restrict R,Cpu& c);
u32 body_60a(u8* __restrict R,Cpu& c);
u32 body_60c(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x60b,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x60b,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_60b(u8* __restrict R,Cpu& c);
u32 page_60b(Cpu& c){return body_60b(c.regs.data(),c);}
__attribute__((noinline)) u32 body_60b(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x60b000:goto L60b000;
case 0x60b002:c.instructions+=1;goto B60b002;
case 0x60b007:goto L60b007;
case 0x60b009:c.instructions+=1;goto B60b009;
case 0x60b00f:goto L60b00f;
case 0x60b014:goto L60b014;
case 0x60b019:goto L60b019;
case 0x60b01b:c.instructions+=1;goto B60b01b;
case 0x60b020:goto L60b020;
case 0x60b022:c.instructions+=1;goto B60b022;
case 0x60b024:goto L60b024;
case 0x60b027:c.instructions+=1;goto B60b027;
case 0x60b02c:goto L60b02c;
case 0x60b02e:c.instructions+=1;goto B60b02e;
case 0x60b030:goto L60b030;
case 0x60b032:c.instructions+=2;goto B60b032;
case 0x60b034:c.instructions+=1;goto B60b034;
case 0x60b039:goto L60b039;
case 0x60b03c:c.instructions+=3;goto B60b03c;
case 0x60b041:c.instructions+=2;goto B60b041;
case 0x60b043:c.instructions+=1;goto B60b043;
case 0x60b047:goto L60b047;
case 0x60b04a:c.instructions+=2;goto B60b04a;
case 0x60b04c:c.instructions+=1;goto B60b04c;
case 0x60b04e:goto L60b04e;
case 0x60b050:c.instructions+=2;goto B60b050;
case 0x60b053:c.instructions+=1;goto B60b053;
case 0x60b055:goto L60b055;
case 0x60b058:c.instructions+=1;goto B60b058;
case 0x60b05a:goto L60b05a;
case 0x60b05c:c.instructions+=1;goto B60b05c;
case 0x60b05e:goto L60b05e;
case 0x60b061:c.instructions+=1;goto B60b061;
case 0x60b063:goto L60b063;
case 0x60b066:c.instructions+=1;goto B60b066;
case 0x60b068:goto L60b068;
case 0x60b06f:c.instructions+=1;goto B60b06f;
case 0x60b071:goto L60b071;
case 0x60b074:c.instructions+=1;goto B60b074;
case 0x60b076:goto L60b076;
case 0x60b079:c.instructions+=1;goto B60b079;
case 0x60b07b:goto L60b07b;
case 0x60b07d:c.instructions+=1;goto B60b07d;
case 0x60b07f:goto L60b07f;
case 0x60b082:c.instructions+=1;goto B60b082;
case 0x60b084:goto L60b084;
case 0x60b089:goto L60b089;
case 0x60b08b:c.instructions+=1;goto B60b08b;
case 0x60b090:goto L60b090;
case 0x60b095:c.instructions+=1;goto B60b095;
case 0x60b097:goto L60b097;
case 0x60b09c:c.instructions+=2;goto B60b09c;
case 0x60b09e:c.instructions+=1;goto B60b09e;
case 0x60b0a0:goto L60b0a0;
case 0x60b0a1:c.instructions+=1;goto B60b0a1;
case 0x60b0a6:goto L60b0a6;
case 0x60b0a8:c.instructions+=5;goto B60b0a8;
case 0x60b0ab:c.instructions+=4;goto B60b0ab;
case 0x60b0ad:c.instructions+=3;goto B60b0ad;
case 0x60b0ae:c.instructions+=2;goto B60b0ae;
case 0x60b0b0:c.instructions+=1;goto B60b0b0;
case 0x60b0b5:goto L60b0b5;
case 0x60b0b6:c.instructions+=3;goto B60b0b6;
case 0x60b0b9:c.instructions+=2;goto B60b0b9;
case 0x60b0bc:c.instructions+=1;goto B60b0bc;
case 0x60b0be:goto L60b0be;
case 0x60b0c2:c.instructions+=2;goto B60b0c2;
case 0x60b0c4:c.instructions+=1;goto B60b0c4;
case 0x60b0c6:goto L60b0c6;
case 0x60b0cc:c.instructions+=2;goto B60b0cc;
case 0x60b0ce:c.instructions+=1;goto B60b0ce;
case 0x60b0d0:goto L60b0d0;
case 0x60b0da:goto L60b0da;
case 0x60b0dc:c.instructions+=2;goto B60b0dc;
case 0x60b0de:c.instructions+=1;goto B60b0de;
case 0x60b0e3:goto L60b0e3;
case 0x60b0e8:goto L60b0e8;
case 0x60b0ed:c.instructions+=2;goto B60b0ed;
case 0x60b0ef:c.instructions+=1;goto B60b0ef;
case 0x60b0f1:goto L60b0f1;
case 0x60b0f6:c.instructions+=4;goto B60b0f6;
case 0x60b0f9:c.instructions+=3;goto B60b0f9;
case 0x60b0fa:c.instructions+=2;goto B60b0fa;
case 0x60b0fc:c.instructions+=1;goto B60b0fc;
case 0x60b101:goto L60b101;
case 0x60b103:c.instructions+=1;goto B60b103;
case 0x60b105:goto L60b105;
case 0x60b107:c.instructions+=1;goto B60b107;
case 0x60b10c:goto L60b10c;
case 0x60b112:c.instructions+=3;goto B60b112;
case 0x60b118:c.instructions+=2;goto B60b118;
case 0x60b11e:c.instructions+=1;goto B60b11e;
case 0x60b123:goto L60b123;
case 0x60b125:goto L60b125;
case 0x60b12b:c.instructions+=4;goto B60b12b;
case 0x60b12e:c.instructions+=3;goto B60b12e;
case 0x60b12f:c.instructions+=2;goto B60b12f;
case 0x60b131:c.instructions+=1;goto B60b131;
case 0x60b136:goto L60b136;
case 0x60b138:c.instructions+=1;goto B60b138;
case 0x60b13a:goto L60b13a;
case 0x60b13c:c.instructions+=1;goto B60b13c;
case 0x60b141:goto L60b141;
case 0x60b147:c.instructions+=3;goto B60b147;
case 0x60b14d:c.instructions+=2;goto B60b14d;
case 0x60b153:c.instructions+=1;goto B60b153;
case 0x60b158:goto L60b158;
case 0x60b15a:goto L60b15a;
case 0x60b160:c.instructions+=9;goto B60b160;
case 0x60b166:c.instructions+=8;goto B60b166;
case 0x60b168:c.instructions+=7;goto B60b168;
case 0x60b16c:c.instructions+=6;goto B60b16c;
case 0x60b170:c.instructions+=5;goto B60b170;
case 0x60b176:c.instructions+=4;goto B60b176;
case 0x60b17c:c.instructions+=3;goto B60b17c;
case 0x60b17e:c.instructions+=2;goto B60b17e;
case 0x60b181:c.instructions+=1;goto B60b181;
case 0x60b183:goto L60b183;
case 0x60b185:c.instructions+=1;goto B60b185;
case 0x60b18a:goto L60b18a;
case 0x60b18f:c.instructions+=1;goto B60b18f;
case 0x60b195:goto L60b195;
case 0x60b19a:c.instructions+=2;goto B60b19a;
case 0x60b19c:c.instructions+=1;goto B60b19c;
case 0x60b19e:goto L60b19e;
case 0x60b1a5:c.instructions+=1;goto B60b1a5;
case 0x60b1a7:goto L60b1a7;
case 0x60b1a9:c.instructions+=1;goto B60b1a9;
case 0x60b1ae:goto L60b1ae;
case 0x60b1b1:c.instructions+=3;goto B60b1b1;
case 0x60b1b3:c.instructions+=2;goto B60b1b3;
case 0x60b1b6:c.instructions+=1;goto B60b1b6;
case 0x60b1bc:goto L60b1bc;
case 0x60b1c1:c.instructions+=2;goto B60b1c1;
case 0x60b1c3:c.instructions+=1;goto B60b1c3;
case 0x60b1c9:goto L60b1c9;
case 0x60b1cb:c.instructions+=1;goto B60b1cb;
case 0x60b1d1:goto L60b1d1;
case 0x60b1d4:c.instructions+=1;goto B60b1d4;
case 0x60b1da:goto L60b1da;
case 0x60b1e0:c.instructions+=2;goto B60b1e0;
case 0x60b1e1:c.instructions+=1;goto B60b1e1;
case 0x60b1e6:goto L60b1e6;
case 0x60b1eb:c.instructions+=2;goto B60b1eb;
case 0x60b1ed:c.instructions+=1;goto B60b1ed;
case 0x60b1ef:goto L60b1ef;
case 0x60b1f4:c.instructions+=2;goto B60b1f4;
case 0x60b1f6:c.instructions+=1;goto B60b1f6;
case 0x60b1fc:goto L60b1fc;
case 0x60b201:c.instructions+=2;goto B60b201;
case 0x60b203:c.instructions+=1;goto B60b203;
case 0x60b209:goto L60b209;
case 0x60b20c:c.instructions+=7;goto B60b20c;
case 0x60b212:c.instructions+=6;goto B60b212;
case 0x60b218:c.instructions+=5;goto B60b218;
case 0x60b21a:c.instructions+=4;goto B60b21a;
case 0x60b21c:c.instructions+=3;goto B60b21c;
case 0x60b21e:c.instructions+=2;goto B60b21e;
case 0x60b221:c.instructions+=1;goto B60b221;
case 0x60b227:goto L60b227;
case 0x60b22b:c.instructions+=2;goto B60b22b;
case 0x60b22d:c.instructions+=1;goto B60b22d;
case 0x60b230:goto L60b230;
case 0x60b232:c.instructions+=2;goto B60b232;
case 0x60b234:c.instructions+=1;goto B60b234;
case 0x60b236:goto L60b236;
case 0x60b238:c.instructions+=2;goto B60b238;
case 0x60b23b:c.instructions+=1;goto B60b23b;
case 0x60b23d:goto L60b23d;
case 0x60b23f:c.instructions+=1;goto B60b23f;
case 0x60b241:goto L60b241;
case 0x60b243:c.instructions+=1;goto B60b243;
case 0x60b245:goto L60b245;
case 0x60b248:c.instructions+=1;goto B60b248;
case 0x60b24a:goto L60b24a;
case 0x60b24d:c.instructions+=1;goto B60b24d;
case 0x60b24f:goto L60b24f;
case 0x60b255:c.instructions+=1;goto B60b255;
case 0x60b257:goto L60b257;
case 0x60b25a:c.instructions+=1;goto B60b25a;
case 0x60b25c:goto L60b25c;
case 0x60b25e:c.instructions+=2;goto B60b25e;
case 0x60b260:c.instructions+=1;goto B60b260;
case 0x60b265:goto L60b265;
case 0x60b267:c.instructions+=3;goto B60b267;
case 0x60b269:c.instructions+=2;goto B60b269;
case 0x60b26b:c.instructions+=1;goto B60b26b;
case 0x60b270:goto L60b270;
case 0x60b273:c.instructions+=2;goto B60b273;
case 0x60b274:c.instructions+=1;goto B60b274;
case 0x60b276:goto L60b276;
case 0x60b278:goto L60b278;
case 0x60b27b:c.instructions+=2;goto B60b27b;
case 0x60b27d:c.instructions+=1;goto B60b27d;
case 0x60b27f:goto L60b27f;
case 0x60b284:c.instructions+=1;goto B60b284;
case 0x60b286:goto L60b286;
case 0x60b28c:c.instructions+=2;goto B60b28c;
case 0x60b28f:c.instructions+=1;goto B60b28f;
case 0x60b291:goto L60b291;
case 0x60b297:c.instructions+=2;goto B60b297;
case 0x60b29a:c.instructions+=1;goto B60b29a;
case 0x60b29c:goto L60b29c;
case 0x60b2a1:c.instructions+=1;goto B60b2a1;
case 0x60b2a4:goto L60b2a4;
case 0x60b2a5:c.instructions+=6;goto B60b2a5;
case 0x60b2a9:c.instructions+=5;goto B60b2a9;
case 0x60b2ab:c.instructions+=4;goto B60b2ab;
case 0x60b2ac:c.instructions+=3;goto B60b2ac;
case 0x60b2ad:c.instructions+=2;goto B60b2ad;
case 0x60b2ae:c.instructions+=1;goto B60b2ae;
case 0x60b2b0:goto L60b2b0;
case 0x60b2b5:goto L60b2b5;
case 0x60b2b7:c.instructions+=1;goto B60b2b7;
case 0x60b2b9:goto L60b2b9;
case 0x60b2be:goto L60b2be;
case 0x60b2c3:goto L60b2c3;
case 0x60b2c5:c.instructions+=1;goto B60b2c5;
case 0x60b2c7:goto L60b2c7;
case 0x60b2cc:goto L60b2cc;
case 0x60b2cf:c.instructions+=1;goto B60b2cf;
case 0x60b2f0:goto L60b2f0;
case 0x60b2f2:c.instructions+=13;goto B60b2f2;
case 0x60b2f7:c.instructions+=12;goto B60b2f7;
case 0x60b2fd:c.instructions+=11;goto B60b2fd;
case 0x60b2fe:c.instructions+=10;goto B60b2fe;
case 0x60b305:c.instructions+=9;goto B60b305;
case 0x60b308:c.instructions+=8;goto B60b308;
case 0x60b309:c.instructions+=7;goto B60b309;
case 0x60b30b:c.instructions+=6;goto B60b30b;
case 0x60b30c:c.instructions+=5;goto B60b30c;
case 0x60b310:c.instructions+=4;goto B60b310;
case 0x60b313:c.instructions+=3;goto B60b313;
case 0x60b315:c.instructions+=2;goto B60b315;
case 0x60b31d:c.instructions+=1;goto B60b31d;
case 0x60b31f:goto L60b31f;
case 0x60b320:goto L60b320;
case 0x60b322:c.instructions+=7;goto B60b322;
case 0x60b325:c.instructions+=6;goto B60b325;
case 0x60b327:c.instructions+=5;goto B60b327;
case 0x60b32a:c.instructions+=4;goto B60b32a;
case 0x60b32e:c.instructions+=3;goto B60b32e;
case 0x60b330:c.instructions+=2;goto B60b330;
case 0x60b335:c.instructions+=1;goto B60b335;
case 0x60b33a:goto L60b33a;
case 0x60b33d:c.instructions+=4;goto B60b33d;
case 0x60b340:c.instructions+=3;goto B60b340;
case 0x60b342:c.instructions+=2;goto B60b342;
case 0x60b347:c.instructions+=1;goto B60b347;
case 0x60b349:goto L60b349;
case 0x60b350:goto L60b350;
case 0x60b352:c.instructions+=6;goto B60b352;
case 0x60b355:c.instructions+=5;goto B60b355;
case 0x60b357:c.instructions+=4;goto B60b357;
case 0x60b35a:c.instructions+=3;goto B60b35a;
case 0x60b35d:c.instructions+=2;goto B60b35d;
case 0x60b35f:c.instructions+=1;goto B60b35f;
case 0x60b361:goto L60b361;
case 0x60b363:c.instructions+=2;goto B60b363;
case 0x60b365:c.instructions+=1;goto B60b365;
case 0x60b367:goto L60b367;
case 0x60b369:c.instructions+=2;goto B60b369;
case 0x60b36b:c.instructions+=1;goto B60b36b;
case 0x60b36d:goto L60b36d;
case 0x60b36e:c.instructions+=1;goto B60b36e;
case 0x60b373:goto L60b373;
case 0x60b376:c.instructions+=3;goto B60b376;
case 0x60b379:c.instructions+=2;goto B60b379;
case 0x60b37b:c.instructions+=1;goto B60b37b;
case 0x60b37d:goto L60b37d;
case 0x60b37e:goto L60b37e;
case 0x60b380:c.instructions+=2;goto B60b380;
case 0x60b388:c.instructions+=1;goto B60b388;
case 0x60b38d:goto L60b38d;
case 0x60b391:c.instructions+=5;goto B60b391;
case 0x60b392:c.instructions+=4;goto B60b392;
case 0x60b393:c.instructions+=3;goto B60b393;
case 0x60b39a:c.instructions+=2;goto B60b39a;
case 0x60b39d:c.instructions+=1;goto B60b39d;
case 0x60b3a0:goto L60b3a0;
case 0x60b3a1:c.instructions+=7;goto B60b3a1;
case 0x60b3a3:c.instructions+=6;goto B60b3a3;
case 0x60b3a6:c.instructions+=5;goto B60b3a6;
case 0x60b3a7:c.instructions+=4;goto B60b3a7;
case 0x60b3a9:c.instructions+=3;goto B60b3a9;
case 0x60b3ac:c.instructions+=2;goto B60b3ac;
case 0x60b3af:c.instructions+=1;goto B60b3af;
case 0x60b3b5:goto L60b3b5;
case 0x60b3bc:c.instructions+=1;goto B60b3bc;
case 0x60b3c3:goto L60b3c3;
case 0x60b3ca:c.instructions+=1;goto B60b3ca;
case 0x60b3cc:goto L60b3cc;
case 0x60b3d1:c.instructions+=1;goto B60b3d1;
case 0x60b3d6:goto L60b3d6;
case 0x60b3db:c.instructions+=3;goto B60b3db;
case 0x60b3dc:c.instructions+=2;goto B60b3dc;
case 0x60b3dd:c.instructions+=1;goto B60b3dd;
case 0x60b3e0:goto L60b3e0;
case 0x60b3e5:c.instructions+=1;goto B60b3e5;
case 0x60b3ea:goto L60b3ea;
case 0x60b3ec:c.instructions+=1;goto B60b3ec;
case 0x60b3ee:goto L60b3ee;
case 0x60b3f3:c.instructions+=1;goto B60b3f3;
case 0x60b3f8:goto L60b3f8;
case 0x60b3fd:c.instructions+=3;goto B60b3fd;
case 0x60b3fe:c.instructions+=2;goto B60b3fe;
case 0x60b3ff:c.instructions+=1;goto B60b3ff;
case 0x60b402:goto L60b402;
case 0x60b407:c.instructions+=1;goto B60b407;
case 0x60b40c:goto L60b40c;
case 0x60b40e:c.instructions+=2;goto B60b40e;
case 0x60b413:c.instructions+=1;goto B60b413;
case 0x60b415:goto L60b415;
case 0x60b41a:goto L60b41a;
case 0x60b41f:c.instructions+=1;goto B60b41f;
case 0x60b424:goto L60b424;
case 0x60b429:c.instructions+=1;goto B60b429;
case 0x60b42e:goto L60b42e;
case 0x60b430:goto L60b430;
case 0x60b435:goto L60b435;
case 0x60b437:c.instructions+=2;goto B60b437;
case 0x60b43c:c.instructions+=1;goto B60b43c;
case 0x60b43e:goto L60b43e;
case 0x60b443:goto L60b443;
case 0x60b448:c.instructions+=1;goto B60b448;
case 0x60b44d:goto L60b44d;
case 0x60b452:c.instructions+=1;goto B60b452;
case 0x60b457:goto L60b457;
case 0x60b459:goto L60b459;
case 0x60b45e:goto L60b45e;
case 0x60b460:c.instructions+=2;goto B60b460;
case 0x60b465:c.instructions+=1;goto B60b465;
case 0x60b467:goto L60b467;
case 0x60b46c:goto L60b46c;
case 0x60b471:c.instructions+=1;goto B60b471;
case 0x60b476:goto L60b476;
case 0x60b47b:c.instructions+=1;goto B60b47b;
case 0x60b480:goto L60b480;
case 0x60b482:goto L60b482;
case 0x60b487:goto L60b487;
case 0x60b489:c.instructions+=1;goto B60b489;
case 0x60b48b:goto L60b48b;
case 0x60b48d:c.instructions+=2;goto B60b48d;
case 0x60b48f:c.instructions+=1;goto B60b48f;
case 0x60b494:goto L60b494;
case 0x60b496:c.instructions+=3;goto B60b496;
case 0x60b498:c.instructions+=2;goto B60b498;
case 0x60b49a:c.instructions+=1;goto B60b49a;
case 0x60b49f:goto L60b49f;
case 0x60b4a5:c.instructions+=2;goto B60b4a5;
case 0x60b4a8:c.instructions+=1;goto B60b4a8;
case 0x60b4aa:goto L60b4aa;
case 0x60b4af:c.instructions+=1;goto B60b4af;
case 0x60b4b4:goto L60b4b4;
case 0x60b4b7:c.instructions+=2;goto B60b4b7;
case 0x60b4b9:c.instructions+=1;goto B60b4b9;
case 0x60b4bb:goto L60b4bb;
case 0x60b4bd:c.instructions+=6;goto B60b4bd;
case 0x60b4bf:c.instructions+=5;goto B60b4bf;
case 0x60b4c3:c.instructions+=4;goto B60b4c3;
case 0x60b4c6:c.instructions+=3;goto B60b4c6;
case 0x60b4cc:c.instructions+=2;goto B60b4cc;
case 0x60b4ce:c.instructions+=1;goto B60b4ce;
case 0x60b4d3:goto L60b4d3;
case 0x60b4d5:c.instructions+=2;goto B60b4d5;
case 0x60b4d7:c.instructions+=1;goto B60b4d7;
case 0x60b4dc:goto L60b4dc;
case 0x60b4e1:c.instructions+=1;goto B60b4e1;
case 0x60b4e6:goto L60b4e6;
case 0x60b4e9:c.instructions+=2;goto B60b4e9;
case 0x60b4eb:c.instructions+=1;goto B60b4eb;
case 0x60b4f1:goto L60b4f1;
case 0x60b4f7:c.instructions+=2;goto B60b4f7;
case 0x60b4fa:c.instructions+=1;goto B60b4fa;
case 0x60b4fc:goto L60b4fc;
case 0x60b500:c.instructions+=3;goto B60b500;
case 0x60b505:c.instructions+=2;goto B60b505;
case 0x60b508:c.instructions+=1;goto B60b508;
case 0x60b50a:goto L60b50a;
case 0x60b50f:c.instructions+=1;goto B60b50f;
case 0x60b511:goto L60b511;
case 0x60b517:c.instructions+=1;goto B60b517;
case 0x60b51c:goto L60b51c;
case 0x60b521:c.instructions+=2;goto B60b521;
case 0x60b523:c.instructions+=1;goto B60b523;
case 0x60b525:goto L60b525;
case 0x60b52a:goto L60b52a;
case 0x60b52c:c.instructions+=1;goto B60b52c;
case 0x60b52e:goto L60b52e;
case 0x60b533:goto L60b533;
case 0x60b535:c.instructions+=1;goto B60b535;
case 0x60b537:goto L60b537;
case 0x60b53c:goto L60b53c;
case 0x60b53e:c.instructions+=1;goto B60b53e;
case 0x60b540:goto L60b540;
case 0x60b545:c.instructions+=1;goto B60b545;
case 0x60b54a:goto L60b54a;
case 0x60b54d:c.instructions+=2;goto B60b54d;
case 0x60b54f:c.instructions+=1;goto B60b54f;
case 0x60b551:goto L60b551;
case 0x60b553:c.instructions+=2;goto B60b553;
case 0x60b558:c.instructions+=1;goto B60b558;
case 0x60b55a:goto L60b55a;
case 0x60b55f:c.instructions+=1;goto B60b55f;
case 0x60b564:goto L60b564;
case 0x60b567:c.instructions+=2;goto B60b567;
case 0x60b569:c.instructions+=1;goto B60b569;
case 0x60b56b:goto L60b56b;
case 0x60b56d:c.instructions+=1;goto B60b56d;
case 0x60b572:goto L60b572;
case 0x60b577:goto L60b577;
case 0x60b57a:goto L60b57a;
case 0x60b57b:c.instructions+=3;goto B60b57b;
case 0x60b581:c.instructions+=2;goto B60b581;
case 0x60b583:c.instructions+=1;goto B60b583;
case 0x60b588:goto L60b588;
case 0x60b58a:c.instructions+=1;goto B60b58a;
case 0x60b58c:goto L60b58c;
case 0x60b591:c.instructions+=2;goto B60b591;
case 0x60b593:c.instructions+=1;goto B60b593;
case 0x60b595:goto L60b595;
case 0x60b59a:c.instructions+=1;goto B60b59a;
case 0x60b59f:goto L60b59f;
case 0x60b5a1:c.instructions+=1;goto B60b5a1;
case 0x60b5a3:goto L60b5a3;
case 0x60b5a5:c.instructions+=1;goto B60b5a5;
case 0x60b5aa:goto L60b5aa;
case 0x60b5ad:c.instructions+=5;goto B60b5ad;
case 0x60b5b0:c.instructions+=4;goto B60b5b0;
case 0x60b5b5:c.instructions+=3;goto B60b5b5;
case 0x60b5b7:c.instructions+=2;goto B60b5b7;
case 0x60b5b9:c.instructions+=1;goto B60b5b9;
case 0x60b5bb:goto L60b5bb;
case 0x60b5bd:c.instructions+=1;goto B60b5bd;
case 0x60b5c2:goto L60b5c2;
case 0x60b5c3:c.instructions+=4;goto B60b5c3;
case 0x60b5c8:c.instructions+=3;goto B60b5c8;
case 0x60b5c9:c.instructions+=2;goto B60b5c9;
case 0x60b5ca:c.instructions+=1;goto B60b5ca;
case 0x60b5cd:goto L60b5cd;
case 0x60b5d3:c.instructions+=1;goto B60b5d3;
case 0x60b5d8:goto L60b5d8;
case 0x60b5da:c.instructions+=1;goto B60b5da;
case 0x60b5dc:goto L60b5dc;
case 0x60b5de:c.instructions+=1;goto B60b5de;
case 0x60b5e3:goto L60b5e3;
case 0x60b5e8:c.instructions+=3;goto B60b5e8;
case 0x60b5e9:c.instructions+=2;goto B60b5e9;
case 0x60b5ea:c.instructions+=1;goto B60b5ea;
case 0x60b5ed:goto L60b5ed;
case 0x60b5ef:c.instructions+=1;goto B60b5ef;
case 0x60b5f4:goto L60b5f4;
case 0x60b5f9:c.instructions+=3;goto B60b5f9;
case 0x60b5fa:c.instructions+=2;goto B60b5fa;
case 0x60b5fb:c.instructions+=1;goto B60b5fb;
case 0x60b5fe:goto L60b5fe;
case 0x60b600:c.instructions+=2;goto B60b600;
case 0x60b602:c.instructions+=1;goto B60b602;
case 0x60b607:goto L60b607;
case 0x60b609:c.instructions+=3;goto B60b609;
case 0x60b60b:c.instructions+=2;goto B60b60b;
case 0x60b60d:c.instructions+=1;goto B60b60d;
case 0x60b612:goto L60b612;
case 0x60b617:c.instructions+=3;goto B60b617;
case 0x60b618:c.instructions+=2;goto B60b618;
case 0x60b619:c.instructions+=1;goto B60b619;
case 0x60b61c:goto L60b61c;
case 0x60b61e:c.instructions+=3;goto B60b61e;
case 0x60b620:c.instructions+=2;goto B60b620;
case 0x60b62a:c.instructions+=1;goto B60b62a;
case 0x60b62f:goto L60b62f;
case 0x60b631:c.instructions+=3;goto B60b631;
case 0x60b633:c.instructions+=2;goto B60b633;
case 0x60b635:c.instructions+=1;goto B60b635;
case 0x60b63a:goto L60b63a;
case 0x60b63f:c.instructions+=3;goto B60b63f;
case 0x60b640:c.instructions+=2;goto B60b640;
case 0x60b641:c.instructions+=1;goto B60b641;
case 0x60b644:goto L60b644;
case 0x60b646:c.instructions+=2;goto B60b646;
case 0x60b648:c.instructions+=1;goto B60b648;
case 0x60b64d:goto L60b64d;
case 0x60b652:c.instructions+=3;goto B60b652;
case 0x60b653:c.instructions+=2;goto B60b653;
case 0x60b654:c.instructions+=1;goto B60b654;
case 0x60b657:goto L60b657;
case 0x60b659:c.instructions+=7;goto B60b659;
case 0x60b65c:c.instructions+=6;goto B60b65c;
case 0x60b65f:c.instructions+=5;goto B60b65f;
case 0x60b662:c.instructions+=4;goto B60b662;
case 0x60b664:c.instructions+=3;goto B60b664;
case 0x60b666:c.instructions+=2;goto B60b666;
case 0x60b669:c.instructions+=1;goto B60b669;
case 0x60b66e:goto L60b66e;
case 0x60b673:c.instructions+=3;goto B60b673;
case 0x60b674:c.instructions+=2;goto B60b674;
case 0x60b675:c.instructions+=1;goto B60b675;
case 0x60b678:goto L60b678;
case 0x60b67b:c.instructions+=2;goto B60b67b;
case 0x60b67e:c.instructions+=1;goto B60b67e;
case 0x60b681:goto L60b681;
case 0x60b683:c.instructions+=5;goto B60b683;
case 0x60b685:c.instructions+=4;goto B60b685;
case 0x60b688:c.instructions+=3;goto B60b688;
case 0x60b68e:c.instructions+=2;goto B60b68e;
case 0x60b68f:c.instructions+=1;goto B60b68f;
case 0x60b694:goto L60b694;
case 0x60b696:c.instructions+=2;goto B60b696;
case 0x60b698:c.instructions+=1;goto B60b698;
case 0x60b69d:goto L60b69d;
case 0x60b6a2:c.instructions+=3;goto B60b6a2;
case 0x60b6a3:c.instructions+=2;goto B60b6a3;
case 0x60b6a4:c.instructions+=1;goto B60b6a4;
case 0x60b6a7:goto L60b6a7;
case 0x60b6aa:c.instructions+=5;goto B60b6aa;
case 0x60b6ac:c.instructions+=4;goto B60b6ac;
case 0x60b6af:c.instructions+=3;goto B60b6af;
case 0x60b6b2:c.instructions+=2;goto B60b6b2;
case 0x60b6b5:c.instructions+=1;goto B60b6b5;
case 0x60b6b7:goto L60b6b7;
case 0x60b6bb:c.instructions+=1;goto B60b6bb;
case 0x60b6bd:goto L60b6bd;
case 0x60b6bf:c.instructions+=2;goto B60b6bf;
case 0x60b6c1:c.instructions+=1;goto B60b6c1;
case 0x60b6c6:goto L60b6c6;
case 0x60b6c9:c.instructions+=4;goto B60b6c9;
case 0x60b6ca:c.instructions+=3;goto B60b6ca;
case 0x60b6cc:c.instructions+=2;goto B60b6cc;
case 0x60b6ce:c.instructions+=1;goto B60b6ce;
case 0x60b6d3:goto L60b6d3;
case 0x60b6d8:c.instructions+=3;goto B60b6d8;
case 0x60b6d9:c.instructions+=2;goto B60b6d9;
case 0x60b6da:c.instructions+=1;goto B60b6da;
case 0x60b6dd:goto L60b6dd;
case 0x60b6df:c.instructions+=3;goto B60b6df;
case 0x60b6e0:c.instructions+=2;goto B60b6e0;
case 0x60b6e1:c.instructions+=1;goto B60b6e1;
case 0x60b740:goto L60b740;
case 0x60b746:c.instructions+=3;goto B60b746;
case 0x60b74b:c.instructions+=2;goto B60b74b;
case 0x60b74d:c.instructions+=1;goto B60b74d;
case 0x60b74f:goto L60b74f;
case 0x60b755:c.instructions+=7;goto B60b755;
case 0x60b757:c.instructions+=6;goto B60b757;
case 0x60b75c:c.instructions+=5;goto B60b75c;
case 0x60b761:c.instructions+=4;goto B60b761;
case 0x60b767:c.instructions+=3;goto B60b767;
case 0x60b76c:c.instructions+=2;goto B60b76c;
case 0x60b771:c.instructions+=1;goto B60b771;
case 0x60b776:goto L60b776;
case 0x60b779:goto L60b779;
case 0x60b77e:c.instructions+=1;goto B60b77e;
case 0x60b780:goto L60b780;
case 0x60b784:c.instructions+=11;goto B60b784;
case 0x60b785:c.instructions+=10;goto B60b785;
case 0x60b787:c.instructions+=9;goto B60b787;
case 0x60b788:c.instructions+=8;goto B60b788;
case 0x60b78a:c.instructions+=7;goto B60b78a;
case 0x60b78b:c.instructions+=6;goto B60b78b;
case 0x60b791:c.instructions+=5;goto B60b791;
case 0x60b794:c.instructions+=4;goto B60b794;
case 0x60b797:c.instructions+=3;goto B60b797;
case 0x60b79a:c.instructions+=2;goto B60b79a;
case 0x60b79d:c.instructions+=1;goto B60b79d;
case 0x60b7a2:goto L60b7a2;
case 0x60b7a5:c.instructions+=5;goto B60b7a5;
case 0x60b7a6:c.instructions+=4;goto B60b7a6;
case 0x60b7a7:c.instructions+=3;goto B60b7a7;
case 0x60b7a8:c.instructions+=2;goto B60b7a8;
case 0x60b7ab:c.instructions+=1;goto B60b7ab;
case 0x60b7b0:goto L60b7b0;
case 0x60b7b2:c.instructions+=1;goto B60b7b2;
case 0x60b7b7:goto L60b7b7;
case 0x60b7b9:c.instructions+=1;goto B60b7b9;
case 0x60b7bb:goto L60b7bb;
case 0x60b7be:c.instructions+=1;goto B60b7be;
case 0x60b7c3:goto L60b7c3;
case 0x60b7c6:c.instructions+=4;goto B60b7c6;
case 0x60b7c8:c.instructions+=3;goto B60b7c8;
case 0x60b7cb:c.instructions+=2;goto B60b7cb;
case 0x60b7ce:c.instructions+=1;goto B60b7ce;
case 0x60b7d0:goto L60b7d0;
case 0x60b7d1:c.instructions+=3;goto B60b7d1;
case 0x60b7d3:c.instructions+=2;goto B60b7d3;
case 0x60b7d4:c.instructions+=1;goto B60b7d4;
case 0x60b7e0:goto L60b7e0;
case 0x60b7e4:c.instructions+=4;goto B60b7e4;
case 0x60b7e5:c.instructions+=3;goto B60b7e5;
case 0x60b7e6:c.instructions+=2;goto B60b7e6;
case 0x60b7e8:c.instructions+=1;goto B60b7e8;
case 0x60b7ed:goto L60b7ed;
case 0x60b7ef:c.instructions+=9;goto B60b7ef;
case 0x60b7f2:c.instructions+=8;goto B60b7f2;
case 0x60b7f5:c.instructions+=7;goto B60b7f5;
case 0x60b7f8:c.instructions+=6;goto B60b7f8;
case 0x60b7fb:c.instructions+=5;goto B60b7fb;
case 0x60b7fe:c.instructions+=4;goto B60b7fe;
case 0x60b804:c.instructions+=3;goto B60b804;
case 0x60b806:c.instructions+=2;goto B60b806;
case 0x60b807:c.instructions+=1;goto B60b807;
case 0x60b810:goto L60b810;
case 0x60b814:c.instructions+=4;goto B60b814;
case 0x60b816:c.instructions+=3;goto B60b816;
case 0x60b819:c.instructions+=2;goto B60b819;
case 0x60b81f:c.instructions+=1;goto B60b81f;
case 0x60b825:goto L60b825;
case 0x60b828:c.instructions+=10;goto B60b828;
case 0x60b829:c.instructions+=9;goto B60b829;
case 0x60b82a:c.instructions+=8;goto B60b82a;
case 0x60b82b:c.instructions+=7;goto B60b82b;
case 0x60b82c:c.instructions+=6;goto B60b82c;
case 0x60b830:c.instructions+=5;goto B60b830;
case 0x60b833:c.instructions+=4;goto B60b833;
case 0x60b835:c.instructions+=3;goto B60b835;
case 0x60b839:c.instructions+=2;goto B60b839;
case 0x60b83e:c.instructions+=1;goto B60b83e;
case 0x60b844:goto L60b844;
case 0x60b84a:c.instructions+=1;goto B60b84a;
case 0x60b850:goto L60b850;
case 0x60b852:c.instructions+=1;goto B60b852;
case 0x60b857:goto L60b857;
case 0x60b859:c.instructions+=3;goto B60b859;
case 0x60b85c:c.instructions+=2;goto B60b85c;
case 0x60b85e:c.instructions+=1;goto B60b85e;
case 0x60b860:goto L60b860;
case 0x60b863:c.instructions+=9;goto B60b863;
case 0x60b866:c.instructions+=8;goto B60b866;
case 0x60b869:c.instructions+=7;goto B60b869;
case 0x60b86c:c.instructions+=6;goto B60b86c;
case 0x60b86f:c.instructions+=5;goto B60b86f;
case 0x60b872:c.instructions+=4;goto B60b872;
case 0x60b875:c.instructions+=3;goto B60b875;
case 0x60b877:c.instructions+=2;goto B60b877;
case 0x60b87a:c.instructions+=1;goto B60b87a;
case 0x60b87c:goto L60b87c;
case 0x60b880:c.instructions+=3;goto B60b880;
case 0x60b881:c.instructions+=2;goto B60b881;
case 0x60b883:c.instructions+=1;goto B60b883;
case 0x60b888:goto L60b888;
case 0x60b88f:c.instructions+=1;goto B60b88f;
case 0x60b891:goto L60b891;
case 0x60b897:c.instructions+=6;goto B60b897;
case 0x60b89a:c.instructions+=5;goto B60b89a;
case 0x60b89f:c.instructions+=4;goto B60b89f;
case 0x60b8a5:c.instructions+=3;goto B60b8a5;
case 0x60b8ab:c.instructions+=2;goto B60b8ab;
case 0x60b8b1:c.instructions+=1;goto B60b8b1;
case 0x60b8b6:goto L60b8b6;
case 0x60b8b9:goto L60b8b9;
case 0x60b8be:c.instructions+=5;goto B60b8be;
case 0x60b8c0:c.instructions+=4;goto B60b8c0;
case 0x60b8c6:c.instructions+=3;goto B60b8c6;
case 0x60b8c9:c.instructions+=2;goto B60b8c9;
case 0x60b8cd:c.instructions+=1;goto B60b8cd;
case 0x60b8d3:goto L60b8d3;
case 0x60b8d5:c.instructions+=1;goto B60b8d5;
case 0x60b8db:goto L60b8db;
case 0x60b8e2:c.instructions+=2;goto B60b8e2;
case 0x60b8e7:c.instructions+=1;goto B60b8e7;
case 0x60b8e9:goto L60b8e9;
case 0x60b8ef:c.instructions+=6;goto B60b8ef;
case 0x60b8f2:c.instructions+=5;goto B60b8f2;
case 0x60b8f7:c.instructions+=4;goto B60b8f7;
case 0x60b8fd:c.instructions+=3;goto B60b8fd;
case 0x60b903:c.instructions+=2;goto B60b903;
case 0x60b909:c.instructions+=1;goto B60b909;
case 0x60b90e:goto L60b90e;
case 0x60b911:goto L60b911;
case 0x60b917:c.instructions+=2;goto B60b917;
case 0x60b919:c.instructions+=1;goto B60b919;
case 0x60b91b:goto L60b91b;
case 0x60b91e:c.instructions+=1;goto B60b91e;
case 0x60b920:goto L60b920;
case 0x60b922:goto L60b922;
case 0x60b927:c.instructions+=1;goto B60b927;
case 0x60b92c:goto L60b92c;
case 0x60b930:goto L60b930;
case 0x60b937:c.instructions+=1;goto B60b937;
case 0x60b939:goto L60b939;
case 0x60b93f:c.instructions+=6;goto B60b93f;
case 0x60b942:c.instructions+=5;goto B60b942;
case 0x60b947:c.instructions+=4;goto B60b947;
case 0x60b94d:c.instructions+=3;goto B60b94d;
case 0x60b953:c.instructions+=2;goto B60b953;
case 0x60b959:c.instructions+=1;goto B60b959;
case 0x60b95e:goto L60b95e;
case 0x60b961:goto L60b961;
case 0x60b965:c.instructions+=1;goto B60b965;
case 0x60b96b:goto L60b96b;
case 0x60b96e:c.instructions+=3;goto B60b96e;
case 0x60b970:c.instructions+=2;goto B60b970;
case 0x60b973:c.instructions+=1;goto B60b973;
case 0x60b975:goto L60b975;
case 0x60b978:c.instructions+=2;goto B60b978;
case 0x60b97c:c.instructions+=1;goto B60b97c;
case 0x60b97e:goto L60b97e;
case 0x60b986:goto L60b986;
case 0x60b989:c.instructions+=3;goto B60b989;
case 0x60b98b:c.instructions+=2;goto B60b98b;
case 0x60b98f:c.instructions+=1;goto B60b98f;
case 0x60b995:goto L60b995;
case 0x60b997:c.instructions+=5;goto B60b997;
case 0x60b99a:c.instructions+=4;goto B60b99a;
case 0x60b99c:c.instructions+=3;goto B60b99c;
case 0x60b99f:c.instructions+=2;goto B60b99f;
case 0x60b9a6:c.instructions+=1;goto B60b9a6;
case 0x60b9a8:goto L60b9a8;
case 0x60b9ae:c.instructions+=6;goto B60b9ae;
case 0x60b9b1:c.instructions+=5;goto B60b9b1;
case 0x60b9b6:c.instructions+=4;goto B60b9b6;
case 0x60b9bc:c.instructions+=3;goto B60b9bc;
case 0x60b9c2:c.instructions+=2;goto B60b9c2;
case 0x60b9c8:c.instructions+=1;goto B60b9c8;
case 0x60b9cd:goto L60b9cd;
case 0x60b9d0:goto L60b9d0;
case 0x60b9d6:c.instructions+=2;goto B60b9d6;
case 0x60b9db:c.instructions+=1;goto B60b9db;
case 0x60b9e0:goto L60b9e0;
case 0x60b9e2:c.instructions+=1;goto B60b9e2;
case 0x60b9e4:goto L60b9e4;
case 0x60b9e8:goto L60b9e8;
case 0x60b9eb:c.instructions+=2;goto B60b9eb;
case 0x60b9ed:c.instructions+=1;goto B60b9ed;
case 0x60b9ef:goto L60b9ef;
case 0x60b9f1:c.instructions+=1;goto B60b9f1;
case 0x60b9f3:goto L60b9f3;
case 0x60b9f5:goto L60b9f5;
case 0x60b9f7:c.instructions+=1;goto B60b9f7;
case 0x60b9f9:goto L60b9f9;
case 0x60b9fb:c.instructions+=2;goto B60b9fb;
case 0x60b9fd:c.instructions+=1;goto B60b9fd;
case 0x60b9ff:goto L60b9ff;
case 0x60ba06:c.instructions+=2;goto B60ba06;
case 0x60ba0b:c.instructions+=1;goto B60ba0b;
case 0x60ba0d:goto L60ba0d;
case 0x60ba13:c.instructions+=6;goto B60ba13;
case 0x60ba16:c.instructions+=5;goto B60ba16;
case 0x60ba1b:c.instructions+=4;goto B60ba1b;
case 0x60ba21:c.instructions+=3;goto B60ba21;
case 0x60ba27:c.instructions+=2;goto B60ba27;
case 0x60ba2d:c.instructions+=1;goto B60ba2d;
case 0x60ba32:goto L60ba32;
case 0x60ba35:goto L60ba35;
case 0x60ba3a:c.instructions+=5;goto B60ba3a;
case 0x60ba40:c.instructions+=4;goto B60ba40;
case 0x60ba43:c.instructions+=3;goto B60ba43;
case 0x60ba4a:c.instructions+=2;goto B60ba4a;
case 0x60ba4c:c.instructions+=1;goto B60ba4c;
case 0x60ba51:goto L60ba51;
case 0x60ba55:c.instructions+=1;goto B60ba55;
case 0x60ba5a:goto L60ba5a;
case 0x60ba5c:c.instructions+=2;goto B60ba5c;
case 0x60ba5e:c.instructions+=1;goto B60ba5e;
case 0x60ba61:goto L60ba61;
case 0x60ba64:c.instructions+=2;goto B60ba64;
case 0x60ba66:c.instructions+=1;goto B60ba66;
case 0x60ba68:goto L60ba68;
case 0x60ba6a:c.instructions+=3;goto B60ba6a;
case 0x60ba6d:c.instructions+=2;goto B60ba6d;
case 0x60ba6f:c.instructions+=1;goto B60ba6f;
case 0x60ba72:goto L60ba72;
case 0x60ba74:c.instructions+=3;goto B60ba74;
case 0x60ba76:c.instructions+=2;goto B60ba76;
case 0x60ba79:c.instructions+=1;goto B60ba79;
case 0x60ba7c:goto L60ba7c;
case 0x60ba7f:c.instructions+=10;goto B60ba7f;
case 0x60ba82:c.instructions+=9;goto B60ba82;
case 0x60ba85:c.instructions+=8;goto B60ba85;
case 0x60ba89:c.instructions+=7;goto B60ba89;
case 0x60ba8b:c.instructions+=6;goto B60ba8b;
case 0x60ba8e:c.instructions+=5;goto B60ba8e;
case 0x60ba91:c.instructions+=4;goto B60ba91;
case 0x60ba96:c.instructions+=3;goto B60ba96;
case 0x60ba98:c.instructions+=2;goto B60ba98;
case 0x60ba9d:c.instructions+=1;goto B60ba9d;
case 0x60baa2:goto L60baa2;
case 0x60baa3:c.instructions+=6;goto B60baa3;
case 0x60baa4:c.instructions+=5;goto B60baa4;
case 0x60baa5:c.instructions+=4;goto B60baa5;
case 0x60baaa:c.instructions+=3;goto B60baaa;
case 0x60baab:c.instructions+=2;goto B60baab;
case 0x60baae:c.instructions+=1;goto B60baae;
case 0x60baaf:goto L60baaf;
case 0x60bab1:c.instructions+=2;goto B60bab1;
case 0x60bab4:c.instructions+=1;goto B60bab4;
case 0x60bac0:goto L60bac0;
case 0x60bac4:c.instructions+=2;goto B60bac4;
case 0x60baca:c.instructions+=1;goto B60baca;
case 0x60bacc:goto L60bacc;
case 0x60bad1:goto L60bad1;
case 0x60bad3:c.instructions+=1;goto B60bad3;
case 0x60bad8:goto L60bad8;
case 0x60badd:c.instructions+=1;goto B60badd;
case 0x60bade:goto L60bade;
case 0x60bae0:c.instructions+=1;goto B60bae0;
case 0x60baf0:goto L60baf0;
case 0x60baf4:c.instructions+=4;goto B60baf4;
case 0x60bafa:c.instructions+=3;goto B60bafa;
case 0x60bafb:c.instructions+=2;goto B60bafb;
case 0x60bafc:c.instructions+=1;goto B60bafc;
case 0x60bb01:goto L60bb01;
case 0x60bb04:c.instructions+=1;goto B60bb04;
case 0x60bb10:goto L60bb10;
case 0x60bb11:c.instructions+=9;goto B60bb11;
case 0x60bb13:c.instructions+=8;goto B60bb13;
case 0x60bb16:c.instructions+=7;goto B60bb16;
case 0x60bb19:c.instructions+=6;goto B60bb19;
case 0x60bb1a:c.instructions+=5;goto B60bb1a;
case 0x60bb1c:c.instructions+=4;goto B60bb1c;
case 0x60bb1d:c.instructions+=3;goto B60bb1d;
case 0x60bb23:c.instructions+=2;goto B60bb23;
case 0x60bb25:c.instructions+=1;goto B60bb25;
case 0x60bb2b:goto L60bb2b;
case 0x60bb31:c.instructions+=2;goto B60bb31;
case 0x60bb33:c.instructions+=1;goto B60bb33;
case 0x60bb35:goto L60bb35;
case 0x60bb37:c.instructions+=1;goto B60bb37;
case 0x60bb3c:goto L60bb3c;
case 0x60bb3f:c.instructions+=6;goto B60bb3f;
case 0x60bb40:c.instructions+=5;goto B60bb40;
case 0x60bb43:c.instructions+=4;goto B60bb43;
case 0x60bb46:c.instructions+=3;goto B60bb46;
case 0x60bb47:c.instructions+=2;goto B60bb47;
case 0x60bb48:c.instructions+=1;goto B60bb48;
case 0x60bb4d:goto L60bb4d;
case 0x60bb53:c.instructions+=4;goto B60bb53;
case 0x60bb59:c.instructions+=3;goto B60bb59;
case 0x60bb5c:c.instructions+=2;goto B60bb5c;
case 0x60bb5e:c.instructions+=1;goto B60bb5e;
case 0x60bb60:goto L60bb60;
case 0x60bb62:c.instructions+=1;goto B60bb62;
case 0x60bb67:goto L60bb67;
case 0x60bb6d:c.instructions+=6;goto B60bb6d;
case 0x60bb6e:c.instructions+=5;goto B60bb6e;
case 0x60bb71:c.instructions+=4;goto B60bb71;
case 0x60bb75:c.instructions+=3;goto B60bb75;
case 0x60bb76:c.instructions+=2;goto B60bb76;
case 0x60bb77:c.instructions+=1;goto B60bb77;
case 0x60bb7c:goto L60bb7c;
case 0x60bb82:c.instructions+=4;goto B60bb82;
case 0x60bb88:c.instructions+=3;goto B60bb88;
case 0x60bb8b:c.instructions+=2;goto B60bb8b;
case 0x60bb8d:c.instructions+=1;goto B60bb8d;
case 0x60bb8f:goto L60bb8f;
case 0x60bb91:c.instructions+=1;goto B60bb91;
case 0x60bb96:goto L60bb96;
case 0x60bb99:c.instructions+=16;goto B60bb99;
case 0x60bb9c:c.instructions+=15;goto B60bb9c;
case 0x60bba0:c.instructions+=14;goto B60bba0;
case 0x60bba3:c.instructions+=13;goto B60bba3;
case 0x60bba9:c.instructions+=12;goto B60bba9;
case 0x60bbad:c.instructions+=11;goto B60bbad;
case 0x60bbb1:c.instructions+=10;goto B60bbb1;
case 0x60bbb3:c.instructions+=9;goto B60bbb3;
case 0x60bbb7:c.instructions+=8;goto B60bbb7;
case 0x60bbbb:c.instructions+=7;goto B60bbbb;
case 0x60bbbd:c.instructions+=6;goto B60bbbd;
case 0x60bbc1:c.instructions+=5;goto B60bbc1;
case 0x60bbc7:c.instructions+=4;goto B60bbc7;
case 0x60bbc9:c.instructions+=3;goto B60bbc9;
case 0x60bbcb:c.instructions+=2;goto B60bbcb;
case 0x60bbcd:c.instructions+=1;goto B60bbcd;
case 0x60bbcf:goto L60bbcf;
case 0x60bbd1:c.instructions+=1;goto B60bbd1;
case 0x60bbd6:goto L60bbd6;
case 0x60bbda:c.instructions+=17;goto B60bbda;
case 0x60bbe0:c.instructions+=16;goto B60bbe0;
case 0x60bbe6:c.instructions+=15;goto B60bbe6;
case 0x60bbea:c.instructions+=14;goto B60bbea;
case 0x60bbf0:c.instructions+=13;goto B60bbf0;
case 0x60bbf4:c.instructions+=12;goto B60bbf4;
case 0x60bbf8:c.instructions+=11;goto B60bbf8;
case 0x60bbfc:c.instructions+=10;goto B60bbfc;
case 0x60bbfe:c.instructions+=9;goto B60bbfe;
case 0x60bc04:c.instructions+=8;goto B60bc04;
case 0x60bc0a:c.instructions+=7;goto B60bc0a;
case 0x60bc10:c.instructions+=6;goto B60bc10;
case 0x60bc1a:c.instructions+=5;goto B60bc1a;
case 0x60bc1b:c.instructions+=4;goto B60bc1b;
case 0x60bc1c:c.instructions+=3;goto B60bc1c;
case 0x60bc1e:c.instructions+=2;goto B60bc1e;
case 0x60bc1f:c.instructions+=1;goto B60bc1f;
case 0x60bc20:goto L60bc20;
case 0x60bc23:c.instructions+=4;goto B60bc23;
case 0x60bc24:c.instructions+=3;goto B60bc24;
case 0x60bc27:c.instructions+=2;goto B60bc27;
case 0x60bc28:c.instructions+=1;goto B60bc28;
case 0x60bc2d:goto L60bc2d;
case 0x60bc33:c.instructions+=13;goto B60bc33;
case 0x60bc39:c.instructions+=12;goto B60bc39;
case 0x60bc3f:c.instructions+=11;goto B60bc3f;
case 0x60bc41:c.instructions+=10;goto B60bc41;
case 0x60bc44:c.instructions+=9;goto B60bc44;
case 0x60bc4a:c.instructions+=8;goto B60bc4a;
case 0x60bc50:c.instructions+=7;goto B60bc50;
case 0x60bc51:c.instructions+=6;goto B60bc51;
case 0x60bc57:c.instructions+=5;goto B60bc57;
case 0x60bc61:c.instructions+=4;goto B60bc61;
case 0x60bc62:c.instructions+=3;goto B60bc62;
case 0x60bc64:c.instructions+=2;goto B60bc64;
case 0x60bc65:c.instructions+=1;goto B60bc65;
case 0x60bc70:goto L60bc70;
case 0x60bc72:c.instructions+=4;goto B60bc72;
case 0x60bc77:c.instructions+=3;goto B60bc77;
case 0x60bc7c:c.instructions+=2;goto B60bc7c;
case 0x60bc81:c.instructions+=1;goto B60bc81;
case 0x60bc86:goto L60bc86;
case 0x60bc89:c.instructions+=2;goto B60bc89;
case 0x60bc8e:c.instructions+=1;goto B60bc8e;
case 0x60bc90:goto L60bc90;
case 0x60bc92:c.instructions+=5;goto B60bc92;
case 0x60bc96:c.instructions+=4;goto B60bc96;
case 0x60bc9b:c.instructions+=3;goto B60bc9b;
case 0x60bc9d:c.instructions+=2;goto B60bc9d;
case 0x60bca3:c.instructions+=1;goto B60bca3;
case 0x60bca5:goto L60bca5;
case 0x60bcaa:c.instructions+=1;goto B60bcaa;
case 0x60bcad:goto L60bcad;
case 0x60bcb0:c.instructions+=1;goto B60bcb0;
case 0x60bcc0:goto L60bcc0;
case 0x60bcc2:c.instructions+=5;goto B60bcc2;
case 0x60bcc6:c.instructions+=4;goto B60bcc6;
case 0x60bccb:c.instructions+=3;goto B60bccb;
case 0x60bccd:c.instructions+=2;goto B60bccd;
case 0x60bcd3:c.instructions+=1;goto B60bcd3;
case 0x60bcd5:goto L60bcd5;
case 0x60bcda:c.instructions+=1;goto B60bcda;
case 0x60bcdd:goto L60bcdd;
case 0x60bce2:c.instructions+=1;goto B60bce2;
case 0x60bcf0:goto L60bcf0;
case 0x60bcf4:c.instructions+=8;goto B60bcf4;
case 0x60bcf8:c.instructions+=7;goto B60bcf8;
case 0x60bcfb:c.instructions+=6;goto B60bcfb;
case 0x60bcff:c.instructions+=5;goto B60bcff;
case 0x60bd02:c.instructions+=4;goto B60bd02;
case 0x60bd06:c.instructions+=3;goto B60bd06;
case 0x60bd09:c.instructions+=2;goto B60bd09;
case 0x60bd0c:c.instructions+=1;goto B60bd0c;
case 0x60bd10:goto L60bd10;
case 0x60bd11:c.instructions+=6;goto B60bd11;
case 0x60bd12:c.instructions+=5;goto B60bd12;
case 0x60bd16:c.instructions+=4;goto B60bd16;
case 0x60bd18:c.instructions+=3;goto B60bd18;
case 0x60bd1a:c.instructions+=2;goto B60bd1a;
case 0x60bd1f:c.instructions+=1;goto B60bd1f;
case 0x60bd21:goto L60bd21;
case 0x60bd24:c.instructions+=1;goto B60bd24;
case 0x60bd28:goto L60bd28;
case 0x60bd29:c.instructions+=5;goto B60bd29;
case 0x60bd2d:c.instructions+=4;goto B60bd2d;
case 0x60bd31:c.instructions+=3;goto B60bd31;
case 0x60bd32:c.instructions+=2;goto B60bd32;
case 0x60bd34:c.instructions+=1;goto B60bd34;
case 0x60bd39:goto L60bd39;
case 0x60bd3c:c.instructions+=3;goto B60bd3c;
case 0x60bd3e:c.instructions+=2;goto B60bd3e;
case 0x60bd3f:c.instructions+=1;goto B60bd3f;
case 0x60bd41:goto L60bd41;
case 0x60bd46:c.instructions+=2;goto B60bd46;
case 0x60bd4d:c.instructions+=1;goto B60bd4d;
case 0x60bd4f:goto L60bd4f;
case 0x60bd50:c.instructions+=2;goto B60bd50;
case 0x60bd51:c.instructions+=1;goto B60bd51;
case 0x60bd60:goto L60bd60;
case 0x60bd62:c.instructions+=13;goto B60bd62;
case 0x60bd67:c.instructions+=12;goto B60bd67;
case 0x60bd6d:c.instructions+=11;goto B60bd6d;
case 0x60bd6e:c.instructions+=10;goto B60bd6e;
case 0x60bd75:c.instructions+=9;goto B60bd75;
case 0x60bd76:c.instructions+=8;goto B60bd76;
case 0x60bd77:c.instructions+=7;goto B60bd77;
case 0x60bd78:c.instructions+=6;goto B60bd78;
case 0x60bd7c:c.instructions+=5;goto B60bd7c;
case 0x60bd81:c.instructions+=4;goto B60bd81;
case 0x60bd83:c.instructions+=3;goto B60bd83;
case 0x60bd85:c.instructions+=2;goto B60bd85;
case 0x60bd87:c.instructions+=1;goto B60bd87;
case 0x60bd8c:goto L60bd8c;
case 0x60bd8f:c.instructions+=10;goto B60bd8f;
case 0x60bd91:c.instructions+=9;goto B60bd91;
case 0x60bd93:c.instructions+=8;goto B60bd93;
case 0x60bd95:c.instructions+=7;goto B60bd95;
case 0x60bd97:c.instructions+=6;goto B60bd97;
case 0x60bd9b:c.instructions+=5;goto B60bd9b;
case 0x60bd9e:c.instructions+=4;goto B60bd9e;
case 0x60bd9f:c.instructions+=3;goto B60bd9f;
case 0x60bda1:c.instructions+=2;goto B60bda1;
case 0x60bda5:c.instructions+=1;goto B60bda5;
case 0x60bdaa:goto L60bdaa;
case 0x60bdad:c.instructions+=2;goto B60bdad;
case 0x60bdaf:c.instructions+=1;goto B60bdaf;
case 0x60bdb1:goto L60bdb1;
case 0x60bdb5:c.instructions+=2;goto B60bdb5;
case 0x60bdb7:c.instructions+=1;goto B60bdb7;
case 0x60bdb9:goto L60bdb9;
case 0x60bdbb:c.instructions+=1;goto B60bdbb;
case 0x60bdc0:goto L60bdc0;
case 0x60bdc3:c.instructions+=4;goto B60bdc3;
case 0x60bdc7:c.instructions+=3;goto B60bdc7;
case 0x60bdc9:c.instructions+=2;goto B60bdc9;
case 0x60bdd1:c.instructions+=1;goto B60bdd1;
case 0x60bdd3:goto L60bdd3;
case 0x60bdd5:c.instructions+=1;goto B60bdd5;
case 0x60bdda:goto L60bdda;
case 0x60bddc:goto L60bddc;
case 0x60bdde:goto L60bdde;
case 0x60bde6:c.instructions+=1;goto B60bde6;
case 0x60bde9:goto L60bde9;
case 0x60bdec:c.instructions+=2;goto B60bdec;
case 0x60bdee:c.instructions+=1;goto B60bdee;
case 0x60bdf0:goto L60bdf0;
case 0x60bdf1:c.instructions+=1;goto B60bdf1;
case 0x60bdf6:goto L60bdf6;
case 0x60bdf8:c.instructions+=1;goto B60bdf8;
case 0x60bdfd:goto L60bdfd;
case 0x60be01:c.instructions+=5;goto B60be01;
case 0x60be02:c.instructions+=4;goto B60be02;
case 0x60be03:c.instructions+=3;goto B60be03;
case 0x60be0a:c.instructions+=2;goto B60be0a;
case 0x60be0d:c.instructions+=1;goto B60be0d;
case 0x60be10:goto L60be10;
case 0x60be13:c.instructions+=2;goto B60be13;
case 0x60be15:c.instructions+=1;goto B60be15;
case 0x60be17:goto L60be17;
case 0x60be1a:c.instructions+=2;goto B60be1a;
case 0x60be1c:c.instructions+=1;goto B60be1c;
case 0x60be1e:goto L60be1e;
case 0x60be21:c.instructions+=1;goto B60be21;
case 0x60be22:goto L60be22;
case 0x60be24:c.instructions+=1;goto B60be24;
case 0x60be30:goto L60be30;
case 0x60be33:c.instructions+=21;goto B60be33;
case 0x60be36:c.instructions+=20;goto B60be36;
case 0x60be39:c.instructions+=19;goto B60be39;
case 0x60be3c:c.instructions+=18;goto B60be3c;
case 0x60be3d:c.instructions+=17;goto B60be3d;
case 0x60be3f:c.instructions+=16;goto B60be3f;
case 0x60be41:c.instructions+=15;goto B60be41;
case 0x60be43:c.instructions+=14;goto B60be43;
case 0x60be45:c.instructions+=13;goto B60be45;
case 0x60be47:c.instructions+=12;goto B60be47;
case 0x60be49:c.instructions+=11;goto B60be49;
case 0x60be4b:c.instructions+=10;goto B60be4b;
case 0x60be4d:c.instructions+=9;goto B60be4d;
case 0x60be4f:c.instructions+=8;goto B60be4f;
case 0x60be51:c.instructions+=7;goto B60be51;
case 0x60be53:c.instructions+=6;goto B60be53;
case 0x60be55:c.instructions+=5;goto B60be55;
case 0x60be57:c.instructions+=4;goto B60be57;
case 0x60be5a:c.instructions+=3;goto B60be5a;
case 0x60be5b:c.instructions+=2;goto B60be5b;
case 0x60be5c:c.instructions+=1;goto B60be5c;
case 0x60be61:goto L60be61;
case 0x60be64:c.instructions+=1;goto B60be64;
case 0x60be70:goto L60be70;
case 0x60be74:c.instructions+=2;goto B60be74;
case 0x60be76:c.instructions+=1;goto B60be76;
case 0x60be78:goto L60be78;
case 0x60be7b:c.instructions+=1;goto B60be7b;
case 0x60be7d:goto L60be7d;
case 0x60be82:c.instructions+=1;goto B60be82;
case 0x60be85:goto L60be85;
case 0x60be87:c.instructions+=1;goto B60be87;
case 0x60be90:goto L60be90;
case 0x60be94:c.instructions+=4;goto B60be94;
case 0x60be96:c.instructions+=3;goto B60be96;
case 0x60be98:c.instructions+=2;goto B60be98;
case 0x60be9b:c.instructions+=1;goto B60be9b;
case 0x60bea0:goto L60bea0;
case 0x60bea3:c.instructions+=3;goto B60bea3;
case 0x60bea5:c.instructions+=2;goto B60bea5;
case 0x60bea7:c.instructions+=1;goto B60bea7;
case 0x60bea9:goto L60bea9;
case 0x60beac:c.instructions+=2;goto B60beac;
case 0x60beae:c.instructions+=1;goto B60beae;
case 0x60beb1:goto L60beb1;
case 0x60bec0:goto L60bec0;
case 0x60bec3:c.instructions+=3;goto B60bec3;
case 0x60bec5:c.instructions+=2;goto B60bec5;
case 0x60bec7:c.instructions+=1;goto B60bec7;
case 0x60bec9:goto L60bec9;
case 0x60becc:c.instructions+=2;goto B60becc;
case 0x60bed3:c.instructions+=1;goto B60bed3;
case 0x60bed6:goto L60bed6;
case 0x60bee0:goto L60bee0;
case 0x60bee3:c.instructions+=3;goto B60bee3;
case 0x60bee5:c.instructions+=2;goto B60bee5;
case 0x60bee7:c.instructions+=1;goto B60bee7;
case 0x60bee9:goto L60bee9;
case 0x60beec:goto L60beec;
case 0x60bef0:goto L60bef0;
case 0x60bef3:c.instructions+=2;goto B60bef3;
case 0x60bef5:c.instructions+=1;goto B60bef5;
case 0x60bef7:goto L60bef7;
case 0x60befd:c.instructions+=5;goto B60befd;
case 0x60beff:c.instructions+=4;goto B60beff;
case 0x60bf02:c.instructions+=3;goto B60bf02;
case 0x60bf05:c.instructions+=2;goto B60bf05;
case 0x60bf07:c.instructions+=1;goto B60bf07;
case 0x60bf08:goto L60bf08;
case 0x60bf0a:c.instructions+=1;goto B60bf0a;
case 0x60bf10:goto L60bf10;
case 0x60bf13:c.instructions+=2;goto B60bf13;
case 0x60bf15:c.instructions+=1;goto B60bf15;
case 0x60bf17:goto L60bf17;
case 0x60bf1a:c.instructions+=2;goto B60bf1a;
case 0x60bf1c:c.instructions+=1;goto B60bf1c;
case 0x60bf1e:goto L60bf1e;
case 0x60bf20:c.instructions+=1;goto B60bf20;
case 0x60bf25:goto L60bf25;
case 0x60bf28:c.instructions+=20;goto B60bf28;
case 0x60bf2b:c.instructions+=19;goto B60bf2b;
case 0x60bf2e:c.instructions+=18;goto B60bf2e;
case 0x60bf30:c.instructions+=17;goto B60bf30;
case 0x60bf32:c.instructions+=16;goto B60bf32;
case 0x60bf34:c.instructions+=15;goto B60bf34;
case 0x60bf36:c.instructions+=14;goto B60bf36;
case 0x60bf38:c.instructions+=13;goto B60bf38;
case 0x60bf3a:c.instructions+=12;goto B60bf3a;
case 0x60bf3c:c.instructions+=11;goto B60bf3c;
case 0x60bf3e:c.instructions+=10;goto B60bf3e;
case 0x60bf40:c.instructions+=9;goto B60bf40;
case 0x60bf42:c.instructions+=8;goto B60bf42;
case 0x60bf44:c.instructions+=7;goto B60bf44;
case 0x60bf46:c.instructions+=6;goto B60bf46;
case 0x60bf48:c.instructions+=5;goto B60bf48;
case 0x60bf4e:c.instructions+=4;goto B60bf4e;
case 0x60bf54:c.instructions+=3;goto B60bf54;
case 0x60bf56:c.instructions+=2;goto B60bf56;
case 0x60bf59:c.instructions+=1;goto B60bf59;
case 0x60bf5b:goto L60bf5b;
case 0x60bf5d:c.instructions+=1;goto B60bf5d;
case 0x60bf63:goto L60bf63;
case 0x60bf70:goto L60bf70;
case 0x60bf73:c.instructions+=2;goto B60bf73;
case 0x60bf75:c.instructions+=1;goto B60bf75;
case 0x60bf77:goto L60bf77;
case 0x60bf7c:goto L60bf7c;
case 0x60bf7e:c.instructions+=1;goto B60bf7e;
case 0x60bf80:goto L60bf80;
case 0x60bf83:c.instructions+=2;goto B60bf83;
case 0x60bf85:c.instructions+=1;goto B60bf85;
case 0x60bf87:goto L60bf87;
case 0x60bf8d:c.instructions+=1;goto B60bf8d;
case 0x60bf8e:goto L60bf8e;
case 0x60bf94:c.instructions+=1;goto B60bf94;
case 0x60bfa0:goto L60bfa0;
case 0x60bfa1:c.instructions+=5;goto B60bfa1;
case 0x60bfa5:c.instructions+=4;goto B60bfa5;
case 0x60bfa6:c.instructions+=3;goto B60bfa6;
case 0x60bfa7:c.instructions+=2;goto B60bfa7;
case 0x60bfa9:c.instructions+=1;goto B60bfa9;
case 0x60bfae:goto L60bfae;
case 0x60bfb1:c.instructions+=3;goto B60bfb1;
case 0x60bfb3:c.instructions+=2;goto B60bfb3;
case 0x60bfb4:c.instructions+=1;goto B60bfb4;
case 0x60bfb6:goto L60bfb6;
case 0x60bfbb:goto L60bfbb;
case 0x60bfbf:c.instructions+=4;goto B60bfbf;
case 0x60bfc2:c.instructions+=3;goto B60bfc2;
case 0x60bfc3:c.instructions+=2;goto B60bfc3;
case 0x60bfc4:c.instructions+=1;goto B60bfc4;
case 0x60bfc7:goto L60bfc7;
case 0x60bfcc:goto L60bfcc;
case 0x60bfcf:c.instructions+=2;goto B60bfcf;
case 0x60bfd1:c.instructions+=1;goto B60bfd1;
case 0x60bfd3:goto L60bfd3;
case 0x60bfd4:c.instructions+=1;goto B60bfd4;
case 0x60bfd9:goto L60bfd9;
case 0x60bfdd:c.instructions+=4;goto B60bfdd;
case 0x60bfe0:c.instructions+=3;goto B60bfe0;
case 0x60bfe1:c.instructions+=2;goto B60bfe1;
case 0x60bfe2:c.instructions+=1;goto B60bfe2;
case 0x60bfe5:goto L60bfe5;
case 0x60bfeb:c.instructions+=3;goto B60bfeb;
case 0x60bfec:c.instructions+=2;goto B60bfec;
case 0x60bfed:c.instructions+=1;goto B60bfed;
case 0x60bff0:goto L60bff0;
case 0x60bff4:c.instructions+=3;goto B60bff4;
case 0x60bff7:c.instructions+=2;goto B60bff7;
case 0x60bffe:c.instructions+=1;goto B60bffe;
default:missing_instruction(c.pc);}
B60b000:L60b000:{c.instructions+=2;NFSU2_TR(0x60b000);
__builtin_memmove((R+4),(R+28),4);
}
B60b002:{NFSU2_TR(0x60b002);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b007ull));
TAIL_STATIC(0x5f9790u,5f9);
}
B60b007:L60b007:{c.instructions+=2;NFSU2_TR(0x60b007);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60b009:{NFSU2_TR(0x60b009);
if(r1(R+518)){{goto L60b2a4;}}
}
B60b00f:L60b00f:{c.instructions+=1;NFSU2_TR(0x60b00f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b014ull));
TAIL_STATIC(0x6097d0u,609);
}
B60b014:L60b014:{c.instructions+=1;NFSU2_TR(0x60b014);
{goto L60b2a4;}
}
B60b019:L60b019:{c.instructions+=2;NFSU2_TR(0x60b019);
__builtin_memmove((R+4),(R+28),4);
}
B60b01b:{NFSU2_TR(0x60b01b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b020ull));
TAIL_STATIC(0x5f9790u,5f9);
}
B60b020:L60b020:{c.instructions+=2;NFSU2_TR(0x60b020);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60b022:{NFSU2_TR(0x60b022);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60b039;}}
}
B60b024:L60b024:{c.instructions+=2;NFSU2_TR(0x60b024);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60b027:{NFSU2_TR(0x60b027);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b02cull));
TAIL_STATIC(0x5efa00u,5ef);
}
B60b02c:L60b02c:{c.instructions+=2;NFSU2_TR(0x60b02c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60b02e:{NFSU2_TR(0x60b02e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60b039;}}
}
B60b030:L60b030:{c.instructions+=3;NFSU2_TR(0x60b030);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b032:{NFSU2_TR(0x60b032);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b034:{NFSU2_TR(0x60b034);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b039ull));
TAIL_STATIC(0x6090f0u,609);
}
B60b039:L60b039:{c.instructions+=4;NFSU2_TR(0x60b039);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60b03c:{NFSU2_TR(0x60b03c);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B60b041:{NFSU2_TR(0x60b041);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B60b043:{NFSU2_TR(0x60b043);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60b047:L60b047:{c.instructions+=3;NFSU2_TR(0x60b047);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+24),(U+0),4);
}
B60b04a:{NFSU2_TR(0x60b04a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60b04c:{NFSU2_TR(0x60b04c);
if(r1(R+518)){{goto L60b0b5;}}
}
B60b04e:L60b04e:{c.instructions+=3;NFSU2_TR(0x60b04e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B60b050:{NFSU2_TR(0x60b050);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60b053:{NFSU2_TR(0x60b053);
if(r1(R+518)){{goto L60b089;}}
}
B60b055:L60b055:{c.instructions+=2;NFSU2_TR(0x60b055);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60b058:{NFSU2_TR(0x60b058);
if(r1(R+518)){{goto L60b089;}}
}
B60b05a:L60b05a:{c.instructions+=2;NFSU2_TR(0x60b05a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60b05c:{NFSU2_TR(0x60b05c);
if(r1(R+518)){{goto L60b076;}}
}
B60b05e:L60b05e:{c.instructions+=2;NFSU2_TR(0x60b05e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60b061:{NFSU2_TR(0x60b061);
if(r1(R+518)){{goto L60b076;}}
}
B60b063:L60b063:{c.instructions+=2;NFSU2_TR(0x60b063);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60b066:{NFSU2_TR(0x60b066);
if(r1(R+518)){{goto L60b076;}}
}
B60b068:L60b068:{c.instructions+=2;NFSU2_TR(0x60b068);
u8 U[8];
__builtin_memmove((U+0),gp(0x89cf48),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B60b06f:{NFSU2_TR(0x60b06f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L60b0e8;}}
}
B60b071:L60b071:{c.instructions+=2;NFSU2_TR(0x60b071);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B60b074:{NFSU2_TR(0x60b074);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L60b0e8;}}
}
B60b076:L60b076:{c.instructions+=2;NFSU2_TR(0x60b076);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60b079:{NFSU2_TR(0x60b079);
if(r1(R+518)){{goto L60b089;}}
}
B60b07b:L60b07b:{c.instructions+=2;NFSU2_TR(0x60b07b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60b07d:{NFSU2_TR(0x60b07d);
if(r1(R+518)){{goto L60b089;}}
}
B60b07f:L60b07f:{c.instructions+=2;NFSU2_TR(0x60b07f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60b082:{NFSU2_TR(0x60b082);
if(r1(R+518)){{goto L60b089;}}
}
B60b084:L60b084:{c.instructions+=1;NFSU2_TR(0x60b084);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B60b089:L60b089:{c.instructions+=2;NFSU2_TR(0x60b089);
__builtin_memmove((R+4),(R+24),4);
}
B60b08b:{NFSU2_TR(0x60b08b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b090ull));
TAIL_STATIC(0x5fe0f0u,5fe);
}
B60b090:L60b090:{c.instructions+=2;NFSU2_TR(0x60b090);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B60b095:{NFSU2_TR(0x60b095);
if(r1(R+518)){{goto L60b0a0;}}
}
B60b097:L60b097:{c.instructions+=3;NFSU2_TR(0x60b097);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B60b09c:{NFSU2_TR(0x60b09c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60b09e:{NFSU2_TR(0x60b09e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60b0b5;}}
}
B60b0a0:L60b0a0:{c.instructions+=2;NFSU2_TR(0x60b0a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b0a1:{NFSU2_TR(0x60b0a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b0a6ull));
TAIL_STATIC(0x4ec4a0u,4ec);
}
B60b0a6:L60b0a6:{c.instructions+=6;NFSU2_TR(0x60b0a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B60b0a8:{NFSU2_TR(0x60b0a8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60b0ab:{NFSU2_TR(0x60b0ab);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b0ad:{NFSU2_TR(0x60b0ad);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b0ae:{NFSU2_TR(0x60b0ae);
__builtin_memmove((R+4),(R+24),4);
}
B60b0b0:{NFSU2_TR(0x60b0b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b0b5ull));
TAIL_STATIC(0x6090f0u,609);
}
B60b0b5:L60b0b5:{c.instructions+=4;NFSU2_TR(0x60b0b5);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B60b0b6:{NFSU2_TR(0x60b0b6);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B60b0b9:{NFSU2_TR(0x60b0b9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B60b0bc:{NFSU2_TR(0x60b0bc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60b047u);}goto L60b047;}}
}
B60b0be:L60b0be:{c.instructions+=3;NFSU2_TR(0x60b0be);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B60b0c2:{NFSU2_TR(0x60b0c2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60b0c4:{NFSU2_TR(0x60b0c4);
if(r1(R+518)){{goto L60b0da;}}
}
B60b0c6:L60b0c6:{c.instructions+=3;NFSU2_TR(0x60b0c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60b0cc:{NFSU2_TR(0x60b0cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60b0ce:{NFSU2_TR(0x60b0ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60b0da;}}
}
B60b0d0:L60b0d0:{c.instructions+=1;NFSU2_TR(0x60b0d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60b0da:L60b0da:{c.instructions+=3;NFSU2_TR(0x60b0da);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b0dc:{NFSU2_TR(0x60b0dc);
__builtin_memmove((R+4),(R+28),4);
}
B60b0de:{NFSU2_TR(0x60b0de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b0e3ull));
TAIL_STATIC(0x609360u,609);
}
B60b0e3:L60b0e3:{c.instructions+=1;NFSU2_TR(0x60b0e3);
{goto L60b1ae;}
}
B60b0e8:L60b0e8:{c.instructions+=3;NFSU2_TR(0x60b0e8);
__builtin_memmove((R+0),gp(0x86676c),4);
}
B60b0ed:{NFSU2_TR(0x60b0ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60b0ef:{NFSU2_TR(0x60b0ef);
if(r1(R+518)){{goto L60b125;}}
}
B60b0f1:L60b0f1:{c.instructions+=5;NFSU2_TR(0x60b0f1);
__builtin_memmove((R+0),gp(0x865198),4);
}
B60b0f6:{NFSU2_TR(0x60b0f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((R+24),(U+0),4);
}
B60b0f9:{NFSU2_TR(0x60b0f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b0fa:{NFSU2_TR(0x60b0fa);
__builtin_memmove((R+4),(R+24),4);
}
B60b0fc:{NFSU2_TR(0x60b0fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b101ull));
TAIL_STATIC(0x577310u,577);
}
B60b101:L60b101:{c.instructions+=2;NFSU2_TR(0x60b101);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60b103:{NFSU2_TR(0x60b103);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60b125;}}
}
B60b105:L60b105:{c.instructions+=2;NFSU2_TR(0x60b105);
__builtin_memmove((R+4),(R+28),4);
}
B60b107:{NFSU2_TR(0x60b107);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b10cull));
TAIL_STATIC(0x5f06b0u,5f0);
}
B60b10c:L60b10c:{c.instructions+=4;NFSU2_TR(0x60b10c);
{u32 ea_=u32(u32(8017656u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60b112:{NFSU2_TR(0x60b112);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60b118:{NFSU2_TR(0x60b118);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60b11e:{NFSU2_TR(0x60b11e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b123ull));
TAIL_STATIC(0x75bed4u,75b);
}
B60b123:L60b123:{c.instructions+=1;NFSU2_TR(0x60b123);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B60b125:L60b125:{c.instructions+=5;NFSU2_TR(0x60b125);
__builtin_memmove((R+4),gp(0x865198),4);
}
B60b12b:{NFSU2_TR(0x60b12b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60b12e:{NFSU2_TR(0x60b12e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b12f:{NFSU2_TR(0x60b12f);
__builtin_memmove((R+4),(R+24),4);
}
B60b131:{NFSU2_TR(0x60b131);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b136ull));
TAIL_STATIC(0x577310u,577);
}
B60b136:L60b136:{c.instructions+=2;NFSU2_TR(0x60b136);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60b138:{NFSU2_TR(0x60b138);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60b15a;}}
}
B60b13a:L60b13a:{c.instructions+=2;NFSU2_TR(0x60b13a);
__builtin_memmove((R+4),(R+28),4);
}
B60b13c:{NFSU2_TR(0x60b13c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b141ull));
TAIL_STATIC(0x5f9ad0u,5f9);
}
B60b141:L60b141:{c.instructions+=4;NFSU2_TR(0x60b141);
{u32 ea_=u32(u32(8017660u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60b147:{NFSU2_TR(0x60b147);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60b14d:{NFSU2_TR(0x60b14d);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60b153:{NFSU2_TR(0x60b153);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b158ull));
TAIL_STATIC(0x75bed4u,75b);
}
B60b158:L60b158:{c.instructions+=1;NFSU2_TR(0x60b158);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B60b15a:L60b15a:{c.instructions+=10;NFSU2_TR(0x60b15a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60b160:{NFSU2_TR(0x60b160);
__builtin_memmove((R+8),gp(0x8651ac),4);
}
B60b166:{NFSU2_TR(0x60b166);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B60b168:{NFSU2_TR(0x60b168);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60b16c:{NFSU2_TR(0x60b16c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B60b170:{NFSU2_TR(0x60b170);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60b176:{NFSU2_TR(0x60b176);
{u32 ea_=u32(u32(8017700u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B60b17c:{NFSU2_TR(0x60b17c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60b17e:{NFSU2_TR(0x60b17e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60b181:{NFSU2_TR(0x60b181);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60b195;}}
}
B60b183:L60b183:{c.instructions+=2;NFSU2_TR(0x60b183);
__builtin_memmove((R+4),(R+28),4);
}
B60b185:{NFSU2_TR(0x60b185);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b18aull));
TAIL_STATIC(0x5f9a10u,5f9);
}
B60b18a:L60b18a:{c.instructions+=2;NFSU2_TR(0x60b18a);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B60b18f:{NFSU2_TR(0x60b18f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60b195:L60b195:{c.instructions+=3;NFSU2_TR(0x60b195);
__builtin_memmove((R+0),gp(0x86676c),4);
}
B60b19a:{NFSU2_TR(0x60b19a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60b19c:{NFSU2_TR(0x60b19c);
if(r1(R+518)){{goto L60b1ae;}}
}
B60b19e:L60b19e:{c.instructions+=2;NFSU2_TR(0x60b19e);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7b0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60b1a5:{NFSU2_TR(0x60b1a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60b1ae;}}
}
B60b1a7:L60b1a7:{c.instructions+=2;NFSU2_TR(0x60b1a7);
__builtin_memmove((R+4),(R+28),4);
}
B60b1a9:{NFSU2_TR(0x60b1a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b1aeull));
TAIL_STATIC(0x5f9cd0u,5f9);
}
B60b1ae:L60b1ae:{c.instructions+=4;NFSU2_TR(0x60b1ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60b1b1:{NFSU2_TR(0x60b1b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B60b1b3:{NFSU2_TR(0x60b1b3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60b1b6:{NFSU2_TR(0x60b1b6);
if(r1(R+518)){{goto L60b2a4;}}
}
B60b1bc:L60b1bc:{c.instructions+=3;NFSU2_TR(0x60b1bc);
w4(R+12,u32(0x6ull));
}
B60b1c1:{NFSU2_TR(0x60b1c1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60b1c3:{NFSU2_TR(0x60b1c3);
if(r1(R+518)){{goto L60b2a4;}}
}
B60b1c9:L60b1c9:{c.instructions+=2;NFSU2_TR(0x60b1c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60b1cb:{NFSU2_TR(0x60b1cb);
if(r1(R+518)){{goto L60b2a4;}}
}
B60b1d1:L60b1d1:{c.instructions+=2;NFSU2_TR(0x60b1d1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60b1d4:{NFSU2_TR(0x60b1d4);
if(r1(R+518)){{goto L60b2a4;}}
}
B60b1da:L60b1da:{c.instructions+=3;NFSU2_TR(0x60b1da);
__builtin_memmove((R+8),gp(0x865154),4);
}
B60b1e0:{NFSU2_TR(0x60b1e0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b1e1:{NFSU2_TR(0x60b1e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b1e6ull));
TAIL_STATIC(0x6091d0u,609);
}
B60b1e6:L60b1e6:{c.instructions+=3;NFSU2_TR(0x60b1e6);
__builtin_memmove((R+0),gp(0x850098),1);
}
B60b1eb:{NFSU2_TR(0x60b1eb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60b1ed:{NFSU2_TR(0x60b1ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60b1fc;}}
}
B60b1ef:L60b1ef:{c.instructions+=3;NFSU2_TR(0x60b1ef);
__builtin_memmove((R+0),gp(0x864fac),4);
}
B60b1f4:{NFSU2_TR(0x60b1f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60b1f6:{NFSU2_TR(0x60b1f6);
if(r1(R+518)){{goto L60b2a4;}}
}
B60b1fc:L60b1fc:{c.instructions+=3;NFSU2_TR(0x60b1fc);
__builtin_memmove((R+0),gp(0x89d061),1);
}
B60b201:{NFSU2_TR(0x60b201);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60b203:{NFSU2_TR(0x60b203);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60b2a4;}}
}
B60b209:L60b209:{c.instructions+=8;NFSU2_TR(0x60b209);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60b20c:{NFSU2_TR(0x60b20c);
{u32 ea_=u32(r4(R+0)+u32(644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60b212:{NFSU2_TR(0x60b212);
{u32 ea_=u32(u32(8017688u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60b218:{NFSU2_TR(0x60b218);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B60b21a:{NFSU2_TR(0x60b21a);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B60b21c:{NFSU2_TR(0x60b21c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60b21e:{NFSU2_TR(0x60b21e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60b221:{NFSU2_TR(0x60b221);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60b2a4;}}
}
B60b227:L60b227:{c.instructions+=3;NFSU2_TR(0x60b227);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B60b22b:{NFSU2_TR(0x60b22b);
__builtin_memmove((R+20),(R+12),4);
}
B60b22d:{NFSU2_TR(0x60b22d);
__builtin_memmove((R+4),(R+4),4);
}
B60b230:L60b230:{c.instructions+=3;NFSU2_TR(0x60b230);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B60b232:{NFSU2_TR(0x60b232);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60b234:{NFSU2_TR(0x60b234);
if(r1(R+518)){{goto L60b270;}}
}
B60b236:L60b236:{c.instructions+=3;NFSU2_TR(0x60b236);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B60b238:{NFSU2_TR(0x60b238);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60b23b:{NFSU2_TR(0x60b23b);
if(r1(R+518)){{goto L60b270;}}
}
B60b23d:L60b23d:{c.instructions+=2;NFSU2_TR(0x60b23d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60b23f:{NFSU2_TR(0x60b23f);
if(r1(R+518)){{goto L60b270;}}
}
B60b241:L60b241:{c.instructions+=2;NFSU2_TR(0x60b241);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60b243:{NFSU2_TR(0x60b243);
if(r1(R+518)){{goto L60b270;}}
}
B60b245:L60b245:{c.instructions+=2;NFSU2_TR(0x60b245);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60b248:{NFSU2_TR(0x60b248);
if(r1(R+518)){{goto L60b270;}}
}
B60b24a:L60b24a:{c.instructions+=2;NFSU2_TR(0x60b24a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60b24d:{NFSU2_TR(0x60b24d);
if(r1(R+518)){{goto L60b270;}}
}
B60b24f:L60b24f:{c.instructions+=2;NFSU2_TR(0x60b24f);
u8 U[8];
__builtin_memmove((U+0),gp(0x89cf48),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+12)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B60b255:{NFSU2_TR(0x60b255);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L60b25c;}}
}
B60b257:L60b257:{c.instructions+=2;NFSU2_TR(0x60b257);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B60b25a:{NFSU2_TR(0x60b25a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L60b270;}}
}
B60b25c:L60b25c:{c.instructions+=3;NFSU2_TR(0x60b25c);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b25e:{NFSU2_TR(0x60b25e);
__builtin_memmove((R+4),(R+24),4);
}
B60b260:{NFSU2_TR(0x60b260);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b265ull));
TAIL_STATIC(0x5f9010u,5f9);
}
B60b265:L60b265:{c.instructions+=4;NFSU2_TR(0x60b265);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b267:{NFSU2_TR(0x60b267);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b269:{NFSU2_TR(0x60b269);
__builtin_memmove((R+4),(R+24),4);
}
B60b26b:{NFSU2_TR(0x60b26b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b270ull));
TAIL_STATIC(0x6090f0u,609);
}
B60b270:L60b270:{c.instructions+=3;NFSU2_TR(0x60b270);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B60b273:{NFSU2_TR(0x60b273);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B60b274:{NFSU2_TR(0x60b274);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60b230u);}goto L60b230;}}
}
B60b276:L60b276:{c.instructions+=1;NFSU2_TR(0x60b276);
{goto L60b2a4;}
}
B60b278:L60b278:{c.instructions+=3;NFSU2_TR(0x60b278);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60b27b:{NFSU2_TR(0x60b27b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60b27d:{NFSU2_TR(0x60b27d);
if(r1(R+518)){{goto L60b286;}}
}
B60b27f:L60b27f:{c.instructions+=2;NFSU2_TR(0x60b27f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60b284:{NFSU2_TR(0x60b284);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60b2a4;}}
}
B60b286:L60b286:{c.instructions+=3;NFSU2_TR(0x60b286);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B60b28c:{NFSU2_TR(0x60b28c);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B60b28f:{NFSU2_TR(0x60b28f);
if(r1(R+518)){{goto L60b2a4;}}
}
B60b291:L60b291:{c.instructions+=3;NFSU2_TR(0x60b291);
__builtin_memmove((R+8),gp(0x890118),4);
}
B60b297:{NFSU2_TR(0x60b297);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B60b29a:{NFSU2_TR(0x60b29a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60b2a4;}}
}
B60b29c:L60b29c:{c.instructions+=2;NFSU2_TR(0x60b29c);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B60b2a1:{NFSU2_TR(0x60b2a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60b2a4:L60b2a4:{c.instructions+=7;NFSU2_TR(0x60b2a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60b2a5:{NFSU2_TR(0x60b2a5);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B60b2a9:{NFSU2_TR(0x60b2a9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60b2ab:{NFSU2_TR(0x60b2ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60b2ac:{NFSU2_TR(0x60b2ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60b2ad:{NFSU2_TR(0x60b2ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B60b2ae:{NFSU2_TR(0x60b2ae);
if(r1(R+518)){{goto L60b2cc;}}
}
B60b2b0:L60b2b0:{c.instructions+=1;NFSU2_TR(0x60b2b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b2b5ull));
TAIL_STATIC(0x5838a0u,583);
}
B60b2b5:L60b2b5:{c.instructions+=2;NFSU2_TR(0x60b2b5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60b2b7:{NFSU2_TR(0x60b2b7);
if(r1(R+518)){{goto L60b2be;}}
}
B60b2b9:L60b2b9:{c.instructions+=1;NFSU2_TR(0x60b2b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b2beull));
TAIL_STATIC(0x58f690u,58f);
}
B60b2be:L60b2be:{c.instructions+=1;NFSU2_TR(0x60b2be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b2c3ull));
TAIL_STATIC(0x5838a0u,583);
}
B60b2c3:L60b2c3:{c.instructions+=2;NFSU2_TR(0x60b2c3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60b2c5:{NFSU2_TR(0x60b2c5);
if(r1(R+518)){{goto L60b2cc;}}
}
B60b2c7:L60b2c7:{c.instructions+=1;NFSU2_TR(0x60b2c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b2ccull));
TAIL_STATIC(0x58c220u,58c);
}
B60b2cc:L60b2cc:{c.instructions+=2;NFSU2_TR(0x60b2cc);
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
B60b2cf:{NFSU2_TR(0x60b2cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60b2f0:L60b2f0:{c.instructions+=14;NFSU2_TR(0x60b2f0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b2f2:{NFSU2_TR(0x60b2f2);
u8 U[4];
w4(U+0,u32(0x77a143ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b2f7:{NFSU2_TR(0x60b2f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60b2fd:{NFSU2_TR(0x60b2fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b2fe:{NFSU2_TR(0x60b2fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60b305:{NFSU2_TR(0x60b305);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B60b308:{NFSU2_TR(0x60b308);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b309:{NFSU2_TR(0x60b309);
__builtin_memmove((R+20),(R+4),4);
}
B60b30b:{NFSU2_TR(0x60b30b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b30c:{NFSU2_TR(0x60b30c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60b310:{NFSU2_TR(0x60b310);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+24),(U+0),4);
}
B60b313:{NFSU2_TR(0x60b313);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60b315:{NFSU2_TR(0x60b315);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60b31d:{NFSU2_TR(0x60b31d);
if(r1(R+518)){{goto L60b37e;}}
}
B60b31f:L60b31f:{c.instructions+=1;NFSU2_TR(0x60b31f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b320:L60b320:{c.instructions+=8;NFSU2_TR(0x60b320);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B60b322:{NFSU2_TR(0x60b322);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60b325:{NFSU2_TR(0x60b325);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B60b327:{NFSU2_TR(0x60b327);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60b32a:{NFSU2_TR(0x60b32a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60b32e:{NFSU2_TR(0x60b32e);
__builtin_memmove((R+4),(R+24),4);
}
B60b330:{NFSU2_TR(0x60b330);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B60b335:{NFSU2_TR(0x60b335);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b33aull));
TAIL_STATIC(0x605320u,605);
}
B60b33a:L60b33a:{c.instructions+=5;NFSU2_TR(0x60b33a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60b33d:{NFSU2_TR(0x60b33d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60b340:{NFSU2_TR(0x60b340);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60b342:{NFSU2_TR(0x60b342);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B60b347:{NFSU2_TR(0x60b347);
if(r1(R+518)){{goto L60b36d;}}
}
B60b349:L60b349:{c.instructions+=1;NFSU2_TR(0x60b349);
__builtin_memmove((R+16),(R+16),4);
}
B60b350:L60b350:{c.instructions+=7;NFSU2_TR(0x60b350);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B60b352:{NFSU2_TR(0x60b352);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60b355:{NFSU2_TR(0x60b355);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B60b357:{NFSU2_TR(0x60b357);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60b35a:{NFSU2_TR(0x60b35a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B60b35d:{NFSU2_TR(0x60b35d);
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
B60b35f:{NFSU2_TR(0x60b35f);
if(r1(R+518)){{goto L60b367;}}
}
B60b361:L60b361:{c.instructions+=3;NFSU2_TR(0x60b361);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B60b363:{NFSU2_TR(0x60b363);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b365:{NFSU2_TR(0x60b365);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b367ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B60b367:L60b367:{c.instructions+=3;NFSU2_TR(0x60b367);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B60b369:{NFSU2_TR(0x60b369);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60b36b:{NFSU2_TR(0x60b36b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60b350u);}goto L60b350;}}
}
B60b36d:L60b36d:{c.instructions+=2;NFSU2_TR(0x60b36d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b36e:{NFSU2_TR(0x60b36e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b373ull));
TAIL_STATIC(0x575630u,575);
}
B60b373:L60b373:{c.instructions+=4;NFSU2_TR(0x60b373);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+24),(U+0),4);
}
B60b376:{NFSU2_TR(0x60b376);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60b379:{NFSU2_TR(0x60b379);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60b37b:{NFSU2_TR(0x60b37b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60b320u);}goto L60b320;}}
}
B60b37d:L60b37d:{c.instructions+=1;NFSU2_TR(0x60b37d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60b37e:L60b37e:{c.instructions+=3;NFSU2_TR(0x60b37e);
__builtin_memmove((R+4),(R+20),4);
}
B60b380:{NFSU2_TR(0x60b380);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B60b388:{NFSU2_TR(0x60b388);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b38dull));
TAIL_STATIC(0x609ca0u,609);
}
B60b38d:L60b38d:{c.instructions+=6;NFSU2_TR(0x60b38d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60b391:{NFSU2_TR(0x60b391);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60b392:{NFSU2_TR(0x60b392);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60b393:{NFSU2_TR(0x60b393);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60b39a:{NFSU2_TR(0x60b39a);
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
B60b39d:{NFSU2_TR(0x60b39d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60b3a0:L60b3a0:{c.instructions+=8;NFSU2_TR(0x60b3a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b3a1:{NFSU2_TR(0x60b3a1);
__builtin_memmove((R+20),(R+16),4);
}
B60b3a3:{NFSU2_TR(0x60b3a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60b3a6:{NFSU2_TR(0x60b3a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b3a7:{NFSU2_TR(0x60b3a7);
__builtin_memmove((R+24),(R+4),4);
}
B60b3a9:{NFSU2_TR(0x60b3a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B60b3ac:{NFSU2_TR(0x60b3ac);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x16ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x16ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x16ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60b3af:{NFSU2_TR(0x60b3af);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L60b6dd;}}
}
B60b3b5:L60b3b5:{c.instructions+=2;NFSU2_TR(0x60b3b5);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60b71cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B60b3bc:{NFSU2_TR(0x60b3bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x60b6e4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B60b3c3:L60b3c3:{c.instructions+=2;NFSU2_TR(0x60b3c3);
u8 U[14];
__builtin_memmove((U+6),gp(0x850078),4);
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
B60b3ca:{NFSU2_TR(0x60b3ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60b3d6;}}
}
B60b3cc:L60b3cc:{c.instructions+=2;NFSU2_TR(0x60b3cc);
w4(R+4,u32(0x85ad40ull));
}
B60b3d1:{NFSU2_TR(0x60b3d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b3d6ull));
TAIL_STATIC(0x513bc0u,513);
}
B60b3d6:L60b3d6:{c.instructions+=4;NFSU2_TR(0x60b3d6);
w4(R+0,u32(0x1ull));
}
B60b3db:{NFSU2_TR(0x60b3db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60b3dc:{NFSU2_TR(0x60b3dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60b3dd:{NFSU2_TR(0x60b3dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60b3e0:L60b3e0:{c.instructions+=2;NFSU2_TR(0x60b3e0);
w4(R+4,u32(0x85ad40ull));
}
B60b3e5:{NFSU2_TR(0x60b3e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b3eaull));
TAIL_STATIC(0x500aa0u,500);
}
B60b3ea:L60b3ea:{c.instructions+=2;NFSU2_TR(0x60b3ea);
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
B60b3ec:{NFSU2_TR(0x60b3ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60b3f8;}}
}
B60b3ee:L60b3ee:{c.instructions+=2;NFSU2_TR(0x60b3ee);
w4(R+4,u32(0x827e88ull));
}
B60b3f3:{NFSU2_TR(0x60b3f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b3f8ull));
TAIL_STATIC(0x43b7a0u,43b);
}
B60b3f8:L60b3f8:{c.instructions+=4;NFSU2_TR(0x60b3f8);
w4(R+0,u32(0x1ull));
}
B60b3fd:{NFSU2_TR(0x60b3fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60b3fe:{NFSU2_TR(0x60b3fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60b3ff:{NFSU2_TR(0x60b3ff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60b402:L60b402:{c.instructions+=2;NFSU2_TR(0x60b402);
w4(R+4,u32(0x827e88ull));
}
B60b407:{NFSU2_TR(0x60b407);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b40cull));
TAIL_STATIC(0x430590u,430);
}
B60b40c:L60b40c:{c.instructions+=3;NFSU2_TR(0x60b40c);
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
B60b40e:{NFSU2_TR(0x60b40e);
w4(R+4,u32(0x827e88ull));
}
B60b413:{NFSU2_TR(0x60b413);
if(r1(R+518)){{goto L60b430;}}
}
B60b415:L60b415:{c.instructions+=1;NFSU2_TR(0x60b415);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b41aull));
TAIL_STATIC(0x437270u,437);
}
B60b41a:L60b41a:{c.instructions+=2;NFSU2_TR(0x60b41a);
w4(R+4,u32(0x827e88ull));
}
B60b41f:{NFSU2_TR(0x60b41f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b424ull));
TAIL_STATIC(0x437370u,437);
}
B60b424:L60b424:{c.instructions+=2;NFSU2_TR(0x60b424);
w4(R+4,u32(0x827e88ull));
}
B60b429:{NFSU2_TR(0x60b429);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b42eull));
TAIL_STATIC(0x4305a0u,430);
}
B60b42e:L60b42e:{c.instructions+=1;NFSU2_TR(0x60b42e);
{goto L60b49f;}
}
B60b430:L60b430:{c.instructions+=1;NFSU2_TR(0x60b430);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b435ull));
TAIL_STATIC(0x4305b0u,430);
}
B60b435:L60b435:{c.instructions+=3;NFSU2_TR(0x60b435);
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
B60b437:{NFSU2_TR(0x60b437);
w4(R+4,u32(0x827e88ull));
}
B60b43c:{NFSU2_TR(0x60b43c);
if(r1(R+518)){{goto L60b459;}}
}
B60b43e:L60b43e:{c.instructions+=1;NFSU2_TR(0x60b43e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b443ull));
TAIL_STATIC(0x437270u,437);
}
B60b443:L60b443:{c.instructions+=2;NFSU2_TR(0x60b443);
w4(R+4,u32(0x827e88ull));
}
B60b448:{NFSU2_TR(0x60b448);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b44dull));
TAIL_STATIC(0x437370u,437);
}
B60b44d:L60b44d:{c.instructions+=2;NFSU2_TR(0x60b44d);
w4(R+4,u32(0x827e88ull));
}
B60b452:{NFSU2_TR(0x60b452);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b457ull));
TAIL_STATIC(0x4305c0u,430);
}
B60b457:L60b457:{c.instructions+=1;NFSU2_TR(0x60b457);
{goto L60b49f;}
}
B60b459:L60b459:{c.instructions+=1;NFSU2_TR(0x60b459);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b45eull));
TAIL_STATIC(0x4305e0u,430);
}
B60b45e:L60b45e:{c.instructions+=3;NFSU2_TR(0x60b45e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60b460:{NFSU2_TR(0x60b460);
w4(R+4,u32(0x827e88ull));
}
B60b465:{NFSU2_TR(0x60b465);
if(r1(R+518)){{goto L60b482;}}
}
B60b467:L60b467:{c.instructions+=1;NFSU2_TR(0x60b467);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b46cull));
TAIL_STATIC(0x437270u,437);
}
B60b46c:L60b46c:{c.instructions+=2;NFSU2_TR(0x60b46c);
w4(R+4,u32(0x827e88ull));
}
B60b471:{NFSU2_TR(0x60b471);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b476ull));
TAIL_STATIC(0x437370u,437);
}
B60b476:L60b476:{c.instructions+=2;NFSU2_TR(0x60b476);
w4(R+4,u32(0x827e88ull));
}
B60b47b:{NFSU2_TR(0x60b47b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b480ull));
TAIL_STATIC(0x4305f0u,430);
}
B60b480:L60b480:{c.instructions+=1;NFSU2_TR(0x60b480);
{goto L60b49f;}
}
B60b482:L60b482:{c.instructions+=1;NFSU2_TR(0x60b482);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b487ull));
TAIL_STATIC(0x43bb10u,43b);
}
B60b487:L60b487:{c.instructions+=2;NFSU2_TR(0x60b487);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60b489:{NFSU2_TR(0x60b489);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60b49f;}}
}
B60b48b:L60b48b:{c.instructions+=3;NFSU2_TR(0x60b48b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b48d:{NFSU2_TR(0x60b48d);
__builtin_memmove((R+4),(R+24),4);
}
B60b48f:{NFSU2_TR(0x60b48f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b494ull));
TAIL_STATIC(0x603630u,603);
}
B60b494:L60b494:{c.instructions+=4;NFSU2_TR(0x60b494);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b496:{NFSU2_TR(0x60b496);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b498:{NFSU2_TR(0x60b498);
__builtin_memmove((R+4),(R+24),4);
}
B60b49a:{NFSU2_TR(0x60b49a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b49full));
TAIL_STATIC(0x601020u,601);
}
B60b49f:L60b49f:{c.instructions+=3;NFSU2_TR(0x60b49f);
__builtin_memmove((R+8),gp(0x890118),4);
}
B60b4a5:{NFSU2_TR(0x60b4a5);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B60b4a8:{NFSU2_TR(0x60b4a8);
if(r1(R+518)){{goto L60b4dc;}}
}
B60b4aa:L60b4aa:{c.instructions+=2;NFSU2_TR(0x60b4aa);
w4(R+4,u32(0x827e88ull));
}
B60b4af:{NFSU2_TR(0x60b4af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b4b4ull));
TAIL_STATIC(0x43b9a0u,43b);
}
B60b4b4:L60b4b4:{c.instructions+=3;NFSU2_TR(0x60b4b4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x29ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B60b4b7:{NFSU2_TR(0x60b4b7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60b4b9:{NFSU2_TR(0x60b4b9);
if(r1(R+518)){{goto L60b4dc;}}
}
B60b4bb:L60b4bb:{c.instructions+=7;NFSU2_TR(0x60b4bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B60b4bd:{NFSU2_TR(0x60b4bd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b4bf:{NFSU2_TR(0x60b4bf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x29ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B60b4c3:{NFSU2_TR(0x60b4c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60b4c6:{NFSU2_TR(0x60b4c6);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B60b4cc:{NFSU2_TR(0x60b4cc);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b4ce:{NFSU2_TR(0x60b4ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b4d3ull));
TAIL_STATIC(0x4810f0u,481);
}
B60b4d3:L60b4d3:{c.instructions+=3;NFSU2_TR(0x60b4d3);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b4d5:{NFSU2_TR(0x60b4d5);
__builtin_memmove((R+4),(R+24),4);
}
B60b4d7:{NFSU2_TR(0x60b4d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b4dcull));
TAIL_STATIC(0x603630u,603);
}
B60b4dc:L60b4dc:{c.instructions+=2;NFSU2_TR(0x60b4dc);
w4(R+4,u32(0x827e88ull));
}
B60b4e1:{NFSU2_TR(0x60b4e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b4e6ull));
TAIL_STATIC(0x43b4e0u,43b);
}
B60b4e6:L60b4e6:{c.instructions+=3;NFSU2_TR(0x60b4e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B60b4e9:{NFSU2_TR(0x60b4e9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60b4eb:{NFSU2_TR(0x60b4eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60b57a;}}
}
B60b4f1:L60b4f1:{c.instructions+=3;NFSU2_TR(0x60b4f1);
__builtin_memmove((R+4),gp(0x890118),4);
}
B60b4f7:{NFSU2_TR(0x60b4f7);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B60b4fa:{NFSU2_TR(0x60b4fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60b57a;}}
}
B60b4fc:L60b4fc:{c.instructions+=4;NFSU2_TR(0x60b4fc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B60b500:{NFSU2_TR(0x60b500);
__builtin_memmove((R+0),gp(0x850078),4);
}
B60b505:{NFSU2_TR(0x60b505);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60b508:{NFSU2_TR(0x60b508);
if(r1(R+518)){{goto L60b51c;}}
}
B60b50a:L60b50a:{c.instructions+=2;NFSU2_TR(0x60b50a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60b50f:{NFSU2_TR(0x60b50f);
if(r1(R+518)){{goto L60b51c;}}
}
B60b511:L60b511:{c.instructions+=2;NFSU2_TR(0x60b511);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B60b517:{NFSU2_TR(0x60b517);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b51cull));
TAIL_STATIC(0x57aad0u,57a);
}
B60b51c:L60b51c:{c.instructions+=3;NFSU2_TR(0x60b51c);
__builtin_memmove((R+0),gp(0x89e7e6),1);
}
B60b521:{NFSU2_TR(0x60b521);
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
B60b523:{NFSU2_TR(0x60b523);
if(r1(R+518)){{goto L60b57a;}}
}
B60b525:L60b525:{c.instructions+=1;NFSU2_TR(0x60b525);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b52aull));
TAIL_STATIC(0x510050u,510);
}
B60b52a:L60b52a:{c.instructions+=2;NFSU2_TR(0x60b52a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60b52c:{NFSU2_TR(0x60b52c);
if(r1(R+518)){{goto L60b57a;}}
}
B60b52e:L60b52e:{c.instructions+=1;NFSU2_TR(0x60b52e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b533ull));
TAIL_STATIC(0x510080u,510);
}
B60b533:L60b533:{c.instructions+=2;NFSU2_TR(0x60b533);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60b535:{NFSU2_TR(0x60b535);
if(r1(R+518)){{goto L60b57a;}}
}
B60b537:L60b537:{c.instructions+=1;NFSU2_TR(0x60b537);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b53cull));
TAIL_STATIC(0x510060u,510);
}
B60b53c:L60b53c:{c.instructions+=2;NFSU2_TR(0x60b53c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60b53e:{NFSU2_TR(0x60b53e);
if(r1(R+518)){{goto L60b55a;}}
}
B60b540:L60b540:{c.instructions+=2;NFSU2_TR(0x60b540);
u8 U[4];
w4(U+0,u32(0x799b08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b545:{NFSU2_TR(0x60b545);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b54aull));
TAIL_STATIC(0x52cf60u,52c);
}
B60b54a:L60b54a:{c.instructions+=3;NFSU2_TR(0x60b54a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60b54d:{NFSU2_TR(0x60b54d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60b54f:{NFSU2_TR(0x60b54f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60b55a;}}
}
B60b551:L60b551:{c.instructions+=3;NFSU2_TR(0x60b551);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b553:{NFSU2_TR(0x60b553);
u8 U[4];
w4(U+0,u32(0x799b08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b558:{NFSU2_TR(0x60b558);
{goto L60b572;}
}
B60b55a:L60b55a:{c.instructions+=2;NFSU2_TR(0x60b55a);
u8 U[4];
w4(U+0,u32(0x7906f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b55f:{NFSU2_TR(0x60b55f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b564ull));
TAIL_STATIC(0x52cf60u,52c);
}
B60b564:L60b564:{c.instructions+=3;NFSU2_TR(0x60b564);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60b567:{NFSU2_TR(0x60b567);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60b569:{NFSU2_TR(0x60b569);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60b57a;}}
}
B60b56b:L60b56b:{c.instructions+=2;NFSU2_TR(0x60b56b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b56d:{NFSU2_TR(0x60b56d);
u8 U[4];
w4(U+0,u32(0x7906f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b572:L60b572:{c.instructions+=1;NFSU2_TR(0x60b572);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b577ull));
TAIL_STATIC(0x555e80u,555);
}
B60b577:L60b577:{c.instructions+=1;NFSU2_TR(0x60b577);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B60b57a:L60b57a:{c.instructions+=4;NFSU2_TR(0x60b57a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b57b:{NFSU2_TR(0x60b57b);
__builtin_memmove((R+28),gp(0x890118),4);
}
B60b581:{NFSU2_TR(0x60b581);
__builtin_memmove((R+4),(R+28),4);
}
B60b583:{NFSU2_TR(0x60b583);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b588ull));
TAIL_STATIC(0x5f85b0u,5f8);
}
B60b588:L60b588:{c.instructions+=2;NFSU2_TR(0x60b588);
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
B60b58a:{NFSU2_TR(0x60b58a);
if(r1(R+518)){{goto L60b5c2;}}
}
B60b58c:L60b58c:{c.instructions+=3;NFSU2_TR(0x60b58c);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B60b591:{NFSU2_TR(0x60b591);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60b593:{NFSU2_TR(0x60b593);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60b5a3;}}
}
B60b595:L60b595:{c.instructions+=2;NFSU2_TR(0x60b595);
w4(R+4,u32(0x83a9d0ull));
}
B60b59a:{NFSU2_TR(0x60b59a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b59full));
TAIL_STATIC(0x457ba0u,457);
}
B60b59f:L60b59f:{c.instructions+=2;NFSU2_TR(0x60b59f);
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
B60b5a1:{NFSU2_TR(0x60b5a1);
if(r1(R+518)){{goto L60b5c2;}}
}
B60b5a3:L60b5a3:{c.instructions+=2;NFSU2_TR(0x60b5a3);
__builtin_memmove((R+4),(R+28),4);
}
B60b5a5:{NFSU2_TR(0x60b5a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b5aaull));
TAIL_STATIC(0x5eef20u,5ee);
}
B60b5aa:L60b5aa:{c.instructions+=6;NFSU2_TR(0x60b5aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60b5ad:{NFSU2_TR(0x60b5ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60b5b0:{NFSU2_TR(0x60b5b0);
__builtin_memmove((R+0),gp(0x7fb720),4);
}
B60b5b5:{NFSU2_TR(0x60b5b5);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B60b5b7:{NFSU2_TR(0x60b5b7);
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
B60b5b9:{NFSU2_TR(0x60b5b9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L60b5c2;}}
}
B60b5bb:L60b5bb:{c.instructions+=2;NFSU2_TR(0x60b5bb);
__builtin_memmove((R+4),(R+24),4);
}
B60b5bd:{NFSU2_TR(0x60b5bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b5c2ull));
TAIL_STATIC(0x60aaa0u,60a);
}
B60b5c2:L60b5c2:{c.instructions+=5;NFSU2_TR(0x60b5c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60b5c3:{NFSU2_TR(0x60b5c3);
w4(R+0,u32(0x1ull));
}
B60b5c8:{NFSU2_TR(0x60b5c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60b5c9:{NFSU2_TR(0x60b5c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60b5ca:{NFSU2_TR(0x60b5ca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60b5cd:L60b5cd:{c.instructions+=2;NFSU2_TR(0x60b5cd);
__builtin_memmove((R+4),gp(0x890118),4);
}
B60b5d3:{NFSU2_TR(0x60b5d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b5d8ull));
TAIL_STATIC(0x5f85b0u,5f8);
}
B60b5d8:L60b5d8:{c.instructions+=2;NFSU2_TR(0x60b5d8);
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
B60b5da:{NFSU2_TR(0x60b5da);
if(r1(R+518)){{goto L60b5e3;}}
}
B60b5dc:L60b5dc:{c.instructions+=2;NFSU2_TR(0x60b5dc);
__builtin_memmove((R+4),(R+24),4);
}
B60b5de:{NFSU2_TR(0x60b5de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b5e3ull));
TAIL_STATIC(0x60aaa0u,60a);
}
B60b5e3:L60b5e3:{c.instructions+=4;NFSU2_TR(0x60b5e3);
w4(R+0,u32(0x1ull));
}
B60b5e8:{NFSU2_TR(0x60b5e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60b5e9:{NFSU2_TR(0x60b5e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60b5ea:{NFSU2_TR(0x60b5ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60b5ed:L60b5ed:{c.instructions+=2;NFSU2_TR(0x60b5ed);
__builtin_memmove((R+4),(R+24),4);
}
B60b5ef:{NFSU2_TR(0x60b5ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b5f4ull));
TAIL_STATIC(0x603de0u,603);
}
B60b5f4:L60b5f4:{c.instructions+=4;NFSU2_TR(0x60b5f4);
w4(R+0,u32(0x1ull));
}
B60b5f9:{NFSU2_TR(0x60b5f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60b5fa:{NFSU2_TR(0x60b5fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60b5fb:{NFSU2_TR(0x60b5fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60b5fe:L60b5fe:{c.instructions+=3;NFSU2_TR(0x60b5fe);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b600:{NFSU2_TR(0x60b600);
__builtin_memmove((R+4),(R+24),4);
}
B60b602:{NFSU2_TR(0x60b602);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b607ull));
TAIL_STATIC(0x603630u,603);
}
B60b607:L60b607:{c.instructions+=4;NFSU2_TR(0x60b607);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b609:{NFSU2_TR(0x60b609);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b60b:{NFSU2_TR(0x60b60b);
__builtin_memmove((R+4),(R+24),4);
}
B60b60d:{NFSU2_TR(0x60b60d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b612ull));
TAIL_STATIC(0x5f41e0u,5f4);
}
B60b612:L60b612:{c.instructions+=4;NFSU2_TR(0x60b612);
w4(R+0,u32(0x1ull));
}
B60b617:{NFSU2_TR(0x60b617);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60b618:{NFSU2_TR(0x60b618);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60b619:{NFSU2_TR(0x60b619);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60b61c:L60b61c:{c.instructions+=4;NFSU2_TR(0x60b61c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b61e:{NFSU2_TR(0x60b61e);
__builtin_memmove((R+4),(R+24),4);
}
B60b620:{NFSU2_TR(0x60b620);
s4(0x89e7b0,u32(0x0ull));
}
B60b62a:{NFSU2_TR(0x60b62a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b62full));
TAIL_STATIC(0x603630u,603);
}
B60b62f:L60b62f:{c.instructions+=4;NFSU2_TR(0x60b62f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b631:{NFSU2_TR(0x60b631);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b633:{NFSU2_TR(0x60b633);
__builtin_memmove((R+4),(R+24),4);
}
B60b635:{NFSU2_TR(0x60b635);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b63aull));
TAIL_STATIC(0x601020u,601);
}
B60b63a:L60b63a:{c.instructions+=4;NFSU2_TR(0x60b63a);
w4(R+0,u32(0x1ull));
}
B60b63f:{NFSU2_TR(0x60b63f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60b640:{NFSU2_TR(0x60b640);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60b641:{NFSU2_TR(0x60b641);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60b644:L60b644:{c.instructions+=3;NFSU2_TR(0x60b644);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b646:{NFSU2_TR(0x60b646);
__builtin_memmove((R+4),(R+24),4);
}
B60b648:{NFSU2_TR(0x60b648);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b64dull));
TAIL_STATIC(0x603630u,603);
}
B60b64d:L60b64d:{c.instructions+=4;NFSU2_TR(0x60b64d);
w4(R+0,u32(0x1ull));
}
B60b652:{NFSU2_TR(0x60b652);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60b653:{NFSU2_TR(0x60b653);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60b654:{NFSU2_TR(0x60b654);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60b657:L60b657:{c.instructions+=8;NFSU2_TR(0x60b657);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B60b659:{NFSU2_TR(0x60b659);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60b65c:{NFSU2_TR(0x60b65c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60b65f:{NFSU2_TR(0x60b65f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60b662:{NFSU2_TR(0x60b662);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b664:{NFSU2_TR(0x60b664);
__builtin_memmove((R+4),(R+24),4);
}
B60b666:{NFSU2_TR(0x60b666);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60b669:{NFSU2_TR(0x60b669);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b66eull));
TAIL_STATIC(0x603630u,603);
}
B60b66e:L60b66e:{c.instructions+=4;NFSU2_TR(0x60b66e);
w4(R+0,u32(0x1ull));
}
B60b673:{NFSU2_TR(0x60b673);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60b674:{NFSU2_TR(0x60b674);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60b675:{NFSU2_TR(0x60b675);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60b678:L60b678:{c.instructions+=3;NFSU2_TR(0x60b678);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60b67b:{NFSU2_TR(0x60b67b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60b67e:{NFSU2_TR(0x60b67e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60b681:L60b681:{c.instructions+=6;NFSU2_TR(0x60b681);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B60b683:{NFSU2_TR(0x60b683);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b685:{NFSU2_TR(0x60b685);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60b688:{NFSU2_TR(0x60b688);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B60b68e:{NFSU2_TR(0x60b68e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b68f:{NFSU2_TR(0x60b68f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b694ull));
TAIL_STATIC(0x4810f0u,481);
}
B60b694:L60b694:{c.instructions+=3;NFSU2_TR(0x60b694);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b696:{NFSU2_TR(0x60b696);
__builtin_memmove((R+4),(R+24),4);
}
B60b698:{NFSU2_TR(0x60b698);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b69dull));
TAIL_STATIC(0x603630u,603);
}
B60b69d:L60b69d:{c.instructions+=4;NFSU2_TR(0x60b69d);
w4(R+0,u32(0x1ull));
}
B60b6a2:{NFSU2_TR(0x60b6a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60b6a3:{NFSU2_TR(0x60b6a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60b6a4:{NFSU2_TR(0x60b6a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60b6a7:L60b6a7:{c.instructions+=6;NFSU2_TR(0x60b6a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B60b6aa:{NFSU2_TR(0x60b6aa);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60b6ac:{NFSU2_TR(0x60b6ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60b6af:{NFSU2_TR(0x60b6af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60b6b2:{NFSU2_TR(0x60b6b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60b6b5:{NFSU2_TR(0x60b6b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60b6dd;}}
}
B60b6b7:L60b6b7:{c.instructions+=2;NFSU2_TR(0x60b6b7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B60b6bb:{NFSU2_TR(0x60b6bb);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60b681u);}goto L60b681;}
}
B60b6bd:L60b6bd:{c.instructions+=3;NFSU2_TR(0x60b6bd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b6bf:{NFSU2_TR(0x60b6bf);
__builtin_memmove((R+4),(R+24),4);
}
B60b6c1:{NFSU2_TR(0x60b6c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b6c6ull));
TAIL_STATIC(0x603630u,603);
}
B60b6c6:L60b6c6:{c.instructions+=5;NFSU2_TR(0x60b6c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60b6c9:{NFSU2_TR(0x60b6c9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b6ca:{NFSU2_TR(0x60b6ca);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b6cc:{NFSU2_TR(0x60b6cc);
__builtin_memmove((R+4),(R+24),4);
}
B60b6ce:{NFSU2_TR(0x60b6ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b6d3ull));
TAIL_STATIC(0x601020u,601);
}
B60b6d3:L60b6d3:{c.instructions+=4;NFSU2_TR(0x60b6d3);
w4(R+0,u32(0x1ull));
}
B60b6d8:{NFSU2_TR(0x60b6d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60b6d9:{NFSU2_TR(0x60b6d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60b6da:{NFSU2_TR(0x60b6da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60b6dd:L60b6dd:{c.instructions+=4;NFSU2_TR(0x60b6dd);
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
B60b6df:{NFSU2_TR(0x60b6df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60b6e0:{NFSU2_TR(0x60b6e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60b6e1:{NFSU2_TR(0x60b6e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60b740:L60b740:{c.instructions+=4;NFSU2_TR(0x60b740);
__builtin_memmove((R+4),gp(0x89e84c),1);
}
B60b746:{NFSU2_TR(0x60b746);
w4(R+0,u32(0x1ull));
}
B60b74b:{NFSU2_TR(0x60b74b);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B60b74d:{NFSU2_TR(0x60b74d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60b779;}}
}
B60b74f:L60b74f:{c.instructions+=8;NFSU2_TR(0x60b74f);
__builtin_memmove((R+8),gp(0x89e84c),4);
}
B60b755:{NFSU2_TR(0x60b755);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B60b757:{NFSU2_TR(0x60b757);
w4(R+0,u32(0x89e844ull));
}
B60b75c:{NFSU2_TR(0x60b75c);
u8 U[4];
w4(U+0,u32(0x782710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b761:{NFSU2_TR(0x60b761);
__builtin_memmove(gp(0x89e84c),(R+8),4);
}
B60b767:{NFSU2_TR(0x60b767);
__builtin_memmove(gp(0x89e844),(R+0),4);
}
B60b76c:{NFSU2_TR(0x60b76c);
__builtin_memmove(gp(0x89e848),(R+0),4);
}
B60b771:{NFSU2_TR(0x60b771);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b776ull));
TAIL_STATIC(0x75c5edu,75c);
}
B60b776:L60b776:{c.instructions+=1;NFSU2_TR(0x60b776);
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
B60b779:L60b779:{c.instructions+=2;NFSU2_TR(0x60b779);
w4(R+0,u32(0x89e844ull));
}
B60b77e:{NFSU2_TR(0x60b77e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60b780:L60b780:{c.instructions+=12;NFSU2_TR(0x60b780);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60b784:{NFSU2_TR(0x60b784);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b785:{NFSU2_TR(0x60b785);
__builtin_memmove((R+24),(R+4),4);
}
B60b787:{NFSU2_TR(0x60b787);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b788:{NFSU2_TR(0x60b788);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B60b78a:{NFSU2_TR(0x60b78a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b78b:{NFSU2_TR(0x60b78b);
u8 U[4];
w4(U+0,u32(0x7a6398ull));
s4(u32(r4(R+24)),r4(U+0));
}
B60b791:{NFSU2_TR(0x60b791);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60b794:{NFSU2_TR(0x60b794);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60b797:{NFSU2_TR(0x60b797);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60b79a:{NFSU2_TR(0x60b79a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60b79d:{NFSU2_TR(0x60b79d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b7a2ull));
TAIL_STATIC(0x43db50u,43d);
}
B60b7a2:L60b7a2:{c.instructions+=6;NFSU2_TR(0x60b7a2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60b7a5:{NFSU2_TR(0x60b7a5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b7a6:{NFSU2_TR(0x60b7a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b7a7:{NFSU2_TR(0x60b7a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b7a8:{NFSU2_TR(0x60b7a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60b7ab:{NFSU2_TR(0x60b7ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b7b0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60b740u);}goto L60b740;}
}
B60b7b0:L60b7b0:{c.instructions+=2;NFSU2_TR(0x60b7b0);
__builtin_memmove((R+4),(R+0),4);
}
B60b7b2:{NFSU2_TR(0x60b7b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b7b7ull));
TAIL_STATIC(0x6021e0u,602);
}
B60b7b7:L60b7b7:{c.instructions+=2;NFSU2_TR(0x60b7b7);
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
B60b7b9:{NFSU2_TR(0x60b7b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60b7d0;}}
}
B60b7bb:L60b7bb:{c.instructions+=2;NFSU2_TR(0x60b7bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60b7be:{NFSU2_TR(0x60b7be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b7c3ull));
TAIL_STATIC(0x602130u,602);
}
B60b7c3:L60b7c3:{c.instructions+=5;NFSU2_TR(0x60b7c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60b7c6:{NFSU2_TR(0x60b7c6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B60b7c8:{NFSU2_TR(0x60b7c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60b7cb:{NFSU2_TR(0x60b7cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60b7ce:{NFSU2_TR(0x60b7ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B60b7d0:L60b7d0:{c.instructions+=4;NFSU2_TR(0x60b7d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60b7d1:{NFSU2_TR(0x60b7d1);
__builtin_memmove((R+0),(R+24),4);
}
B60b7d3:{NFSU2_TR(0x60b7d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60b7d4:{NFSU2_TR(0x60b7d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60b7e0:L60b7e0:{c.instructions+=5;NFSU2_TR(0x60b7e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60b7e4:{NFSU2_TR(0x60b7e4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b7e5:{NFSU2_TR(0x60b7e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b7e6:{NFSU2_TR(0x60b7e6);
__builtin_memmove((R+24),(R+4),4);
}
B60b7e8:{NFSU2_TR(0x60b7e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b7edull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60b780u);}goto L60b780;}
}
B60b7ed:L60b7ed:{c.instructions+=10;NFSU2_TR(0x60b7ed);
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
B60b7ef:{NFSU2_TR(0x60b7ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60b7f2:{NFSU2_TR(0x60b7f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60b7f5:{NFSU2_TR(0x60b7f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60b7f8:{NFSU2_TR(0x60b7f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60b7fb:{NFSU2_TR(0x60b7fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60b7fe:{NFSU2_TR(0x60b7fe);
u8 U[4];
w4(U+0,u32(0x7a653cull));
s4(u32(r4(R+24)),r4(U+0));
}
B60b804:{NFSU2_TR(0x60b804);
__builtin_memmove((R+0),(R+24),4);
}
B60b806:{NFSU2_TR(0x60b806);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60b807:{NFSU2_TR(0x60b807);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60b810:L60b810:{c.instructions+=5;NFSU2_TR(0x60b810);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60b814:{NFSU2_TR(0x60b814);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B60b816:{NFSU2_TR(0x60b816);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B60b819:{NFSU2_TR(0x60b819);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8003b600ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60b81f:{NFSU2_TR(0x60b81f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60baaf;}}
}
B60b825:L60b825:{c.instructions+=11;NFSU2_TR(0x60b825);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60b828:{NFSU2_TR(0x60b828);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b829:{NFSU2_TR(0x60b829);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b82a:{NFSU2_TR(0x60b82a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b82b:{NFSU2_TR(0x60b82b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b82c:{NFSU2_TR(0x60b82c);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B60b830:{NFSU2_TR(0x60b830);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B60b833:{NFSU2_TR(0x60b833);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B60b835:{NFSU2_TR(0x60b835);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60b839:{NFSU2_TR(0x60b839);
w4(R+20,u32(0x89e844ull));
}
B60b83e:{NFSU2_TR(0x60b83e);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L60b8db;}}
}
B60b844:L60b844:{c.instructions+=2;NFSU2_TR(0x60b844);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x8003b601ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B60b84a:{NFSU2_TR(0x60b84a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60b8d3;}}
}
B60b850:L60b850:{c.instructions+=2;NFSU2_TR(0x60b850);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b852:{NFSU2_TR(0x60b852);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b857ull));
TAIL_STATIC(0x575620u,575);
}
B60b857:L60b857:{c.instructions+=4;NFSU2_TR(0x60b857);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B60b859:{NFSU2_TR(0x60b859);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60b85c:{NFSU2_TR(0x60b85c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60b85e:{NFSU2_TR(0x60b85e);
if(r1(R+518)){{goto L60b87c;}}
}
B60b860:L60b860:{c.instructions+=10;NFSU2_TR(0x60b860);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60b863:{NFSU2_TR(0x60b863);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60b866:{NFSU2_TR(0x60b866);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60b869:{NFSU2_TR(0x60b869);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60b86c:{NFSU2_TR(0x60b86c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60b86f:{NFSU2_TR(0x60b86f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60b872:{NFSU2_TR(0x60b872);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B60b875:{NFSU2_TR(0x60b875);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B60b877:{NFSU2_TR(0x60b877);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60b87a:{NFSU2_TR(0x60b87a);
__builtin_memmove((R+24),(R+0),4);
}
B60b87c:L60b87c:{c.instructions+=4;NFSU2_TR(0x60b87c);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B60b880:{NFSU2_TR(0x60b880);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b881:{NFSU2_TR(0x60b881);
__builtin_memmove((R+4),(R+24),4);
}
B60b883:{NFSU2_TR(0x60b883);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b888ull));
TAIL_STATIC(0x5fa3b0u,5fa);
}
B60b888:L60b888:{c.instructions+=2;NFSU2_TR(0x60b888);
u8 U[1];
w1(U+0,u8(u32(m1(0x89e84c))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60b88f:{NFSU2_TR(0x60b88f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60b8b9;}}
}
B60b891:L60b891:{c.instructions+=7;NFSU2_TR(0x60b891);
__builtin_memmove((R+8),gp(0x89e84c),4);
}
B60b897:{NFSU2_TR(0x60b897);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x1ull))));
}
B60b89a:{NFSU2_TR(0x60b89a);
u8 U[4];
w4(U+0,u32(0x782710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b89f:{NFSU2_TR(0x60b89f);
__builtin_memmove(gp(0x89e84c),(R+8),4);
}
B60b8a5:{NFSU2_TR(0x60b8a5);
__builtin_memmove(gp(0x89e844),(R+20),4);
}
B60b8ab:{NFSU2_TR(0x60b8ab);
__builtin_memmove(gp(0x89e848),(R+20),4);
}
B60b8b1:{NFSU2_TR(0x60b8b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b8b6ull));
TAIL_STATIC(0x75c5edu,75c);
}
B60b8b6:L60b8b6:{c.instructions+=1;NFSU2_TR(0x60b8b6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60b8b9:L60b8b9:{c.instructions+=6;NFSU2_TR(0x60b8b9);
__builtin_memmove((R+0),gp(0x89e848),4);
}
B60b8be:{NFSU2_TR(0x60b8be);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B60b8c0:{NFSU2_TR(0x60b8c0);
__builtin_memmove(gp(0x89e848),(R+24),4);
}
B60b8c6:{NFSU2_TR(0x60b8c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60b8c9:{NFSU2_TR(0x60b8c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60b8cd:{NFSU2_TR(0x60b8cd);
u8 U[4];
w4(U+0,u32(0x89e844ull));
s4(u32(r4(R+24)),r4(U+0));
}
B60b8d3:L60b8d3:{c.instructions+=2;NFSU2_TR(0x60b8d3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B60b8d5:{NFSU2_TR(0x60b8d5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60b844u);}goto L60b844;}}
}
B60b8db:L60b8db:{c.instructions+=3;NFSU2_TR(0x60b8db);
u8 U[1];
w1(U+0,u8(u32(m1(0x89e840))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60b8e2:{NFSU2_TR(0x60b8e2);
w4(R+12,u32(0x89e838ull));
}
B60b8e7:{NFSU2_TR(0x60b8e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60b911;}}
}
B60b8e9:L60b8e9:{c.instructions+=7;NFSU2_TR(0x60b8e9);
__builtin_memmove((R+8),gp(0x89e840),4);
}
B60b8ef:{NFSU2_TR(0x60b8ef);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x1ull))));
}
B60b8f2:{NFSU2_TR(0x60b8f2);
u8 U[4];
w4(U+0,u32(0x782700ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b8f7:{NFSU2_TR(0x60b8f7);
__builtin_memmove(gp(0x89e840),(R+8),4);
}
B60b8fd:{NFSU2_TR(0x60b8fd);
__builtin_memmove(gp(0x89e838),(R+12),4);
}
B60b903:{NFSU2_TR(0x60b903);
__builtin_memmove(gp(0x89e83c),(R+12),4);
}
B60b909:{NFSU2_TR(0x60b909);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b90eull));
TAIL_STATIC(0x75c5edu,75c);
}
B60b90e:L60b90e:{c.instructions+=1;NFSU2_TR(0x60b90e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60b911:L60b911:{c.instructions+=3;NFSU2_TR(0x60b911);
__builtin_memmove((R+28),gp(0x89e838),4);
}
B60b917:{NFSU2_TR(0x60b917);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60b919:{NFSU2_TR(0x60b919);
if(r1(R+518)){{goto L60b920;}}
}
B60b91b:L60b91b:{c.instructions+=2;NFSU2_TR(0x60b91b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
}
B60b91e:{NFSU2_TR(0x60b91e);
{goto L60b922;}
}
B60b920:L60b920:{c.instructions+=1;NFSU2_TR(0x60b920);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B60b922:L60b922:{c.instructions+=2;NFSU2_TR(0x60b922);
w4(R+4,u32(0x89e838ull));
}
B60b927:{NFSU2_TR(0x60b927);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b92cull));
TAIL_STATIC(0x431780u,431);
}
B60b92c:L60b92c:{c.instructions+=1;NFSU2_TR(0x60b92c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60b930:L60b930:{c.instructions+=2;NFSU2_TR(0x60b930);
u8 U[1];
w1(U+0,u8(u32(m1(0x89e840))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60b937:{NFSU2_TR(0x60b937);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60b961;}}
}
B60b939:L60b939:{c.instructions+=7;NFSU2_TR(0x60b939);
__builtin_memmove((R+8),gp(0x89e840),4);
}
B60b93f:{NFSU2_TR(0x60b93f);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x1ull))));
}
B60b942:{NFSU2_TR(0x60b942);
u8 U[4];
w4(U+0,u32(0x782700ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b947:{NFSU2_TR(0x60b947);
__builtin_memmove(gp(0x89e840),(R+8),4);
}
B60b94d:{NFSU2_TR(0x60b94d);
__builtin_memmove(gp(0x89e838),(R+12),4);
}
B60b953:{NFSU2_TR(0x60b953);
__builtin_memmove(gp(0x89e83c),(R+12),4);
}
B60b959:{NFSU2_TR(0x60b959);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b95eull));
TAIL_STATIC(0x75c5edu,75c);
}
B60b95e:L60b95e:{c.instructions+=1;NFSU2_TR(0x60b95e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60b961:L60b961:{c.instructions+=2;NFSU2_TR(0x60b961);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60b965:{NFSU2_TR(0x60b965);
if(r1(R+518)){{goto L60baa2;}}
}
B60b96b:L60b96b:{c.instructions+=4;NFSU2_TR(0x60b96b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60b96e:{NFSU2_TR(0x60b96e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60b970:{NFSU2_TR(0x60b970);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60b973:{NFSU2_TR(0x60b973);
if(r1(R+518)){{goto L60b97e;}}
}
B60b975:L60b975:{c.instructions+=3;NFSU2_TR(0x60b975);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B60b978:{NFSU2_TR(0x60b978);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60b97c:{NFSU2_TR(0x60b97c);
{goto L60b986;}
}
B60b97e:L60b97e:{c.instructions+=1;NFSU2_TR(0x60b97e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60b986:L60b986:{c.instructions+=4;NFSU2_TR(0x60b986);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60b989:{NFSU2_TR(0x60b989);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60b98b:{NFSU2_TR(0x60b98b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60b98f:{NFSU2_TR(0x60b98f);
if(r1(R+518)){{goto L60ba51;}}
}
B60b995:L60b995:{c.instructions+=6;NFSU2_TR(0x60b995);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B60b997:{NFSU2_TR(0x60b997);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60b99a:{NFSU2_TR(0x60b99a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B60b99c:{NFSU2_TR(0x60b99c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60b99f:{NFSU2_TR(0x60b99f);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(m1(0x89e84c))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B60b9a6:{NFSU2_TR(0x60b9a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60b9d0;}}
}
B60b9a8:L60b9a8:{c.instructions+=7;NFSU2_TR(0x60b9a8);
__builtin_memmove((R+8),gp(0x89e84c),4);
}
B60b9ae:{NFSU2_TR(0x60b9ae);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x1ull))));
}
B60b9b1:{NFSU2_TR(0x60b9b1);
u8 U[4];
w4(U+0,u32(0x782710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60b9b6:{NFSU2_TR(0x60b9b6);
__builtin_memmove(gp(0x89e84c),(R+8),4);
}
B60b9bc:{NFSU2_TR(0x60b9bc);
__builtin_memmove(gp(0x89e844),(R+20),4);
}
B60b9c2:{NFSU2_TR(0x60b9c2);
__builtin_memmove(gp(0x89e848),(R+20),4);
}
B60b9c8:{NFSU2_TR(0x60b9c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b9cdull));
TAIL_STATIC(0x75c5edu,75c);
}
B60b9cd:L60b9cd:{c.instructions+=1;NFSU2_TR(0x60b9cd);
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
B60b9d0:L60b9d0:{c.instructions+=3;NFSU2_TR(0x60b9d0);
__builtin_memmove((R+12),gp(0x89e844),4);
}
B60b9d6:{NFSU2_TR(0x60b9d6);
w4(R+4,u32(0x89e844ull));
}
B60b9db:{NFSU2_TR(0x60b9db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60b9e0ull));
TAIL_STATIC(0x502fd0u,502);
}
B60b9e0:L60b9e0:{c.instructions+=2;NFSU2_TR(0x60b9e0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60b9e2:{NFSU2_TR(0x60b9e2);
if(r1(R+518)){{goto L60b9ff;}}
}
B60b9e4:L60b9e4:{c.instructions+=1;NFSU2_TR(0x60b9e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60b9e8:L60b9e8:{c.instructions+=3;NFSU2_TR(0x60b9e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60b9eb:{NFSU2_TR(0x60b9eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60b9ed:{NFSU2_TR(0x60b9ed);
if(r1(R+518)){{goto L60b9f3;}}
}
B60b9ef:L60b9ef:{c.instructions+=2;NFSU2_TR(0x60b9ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B60b9f1:{NFSU2_TR(0x60b9f1);
{goto L60b9f5;}
}
B60b9f3:L60b9f3:{c.instructions+=1;NFSU2_TR(0x60b9f3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B60b9f5:L60b9f5:{c.instructions+=2;NFSU2_TR(0x60b9f5);
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
B60b9f7:{NFSU2_TR(0x60b9f7);
if(r1(R+518)){{goto L60ba5a;}}
}
B60b9f9:L60b9f9:{c.instructions+=3;NFSU2_TR(0x60b9f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B60b9fb:{NFSU2_TR(0x60b9fb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60b9fd:{NFSU2_TR(0x60b9fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60b9e8u);}goto L60b9e8;}}
}
B60b9ff:L60b9ff:{c.instructions+=3;NFSU2_TR(0x60b9ff);
u8 U[1];
w1(U+0,u8(u32(m1(0x89e840))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60ba06:{NFSU2_TR(0x60ba06);
w4(R+12,u32(0x89e838ull));
}
B60ba0b:{NFSU2_TR(0x60ba0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60ba35;}}
}
B60ba0d:L60ba0d:{c.instructions+=7;NFSU2_TR(0x60ba0d);
__builtin_memmove((R+8),gp(0x89e840),4);
}
B60ba13:{NFSU2_TR(0x60ba13);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x1ull))));
}
B60ba16:{NFSU2_TR(0x60ba16);
u8 U[4];
w4(U+0,u32(0x782700ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60ba1b:{NFSU2_TR(0x60ba1b);
__builtin_memmove(gp(0x89e840),(R+8),4);
}
B60ba21:{NFSU2_TR(0x60ba21);
__builtin_memmove(gp(0x89e838),(R+12),4);
}
B60ba27:{NFSU2_TR(0x60ba27);
__builtin_memmove(gp(0x89e83c),(R+12),4);
}
B60ba2d:{NFSU2_TR(0x60ba2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60ba32ull));
TAIL_STATIC(0x75c5edu,75c);
}
B60ba32:L60ba32:{c.instructions+=1;NFSU2_TR(0x60ba32);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60ba35:L60ba35:{c.instructions+=6;NFSU2_TR(0x60ba35);
__builtin_memmove((R+0),gp(0x89e838),4);
}
B60ba3a:{NFSU2_TR(0x60ba3a);
__builtin_memmove(gp(0x89e838),(R+24),4);
}
B60ba40:{NFSU2_TR(0x60ba40);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ba43:{NFSU2_TR(0x60ba43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x89e838ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60ba4a:{NFSU2_TR(0x60ba4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B60ba4c:{NFSU2_TR(0x60ba4c);
w4(R+20,u32(0x89e844ull));
}
B60ba51:L60ba51:{c.instructions+=2;NFSU2_TR(0x60ba51);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B60ba55:{NFSU2_TR(0x60ba55);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60b930u);}goto L60b930;}
}
B60ba5a:L60ba5a:{c.instructions+=3;NFSU2_TR(0x60ba5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B60ba5c:{NFSU2_TR(0x60ba5c);
__builtin_memmove((R+4),(R+28),4);
}
B60ba5e:{NFSU2_TR(0x60ba5e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60ba61ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B60ba61:L60ba61:{c.instructions+=3;NFSU2_TR(0x60ba61);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60ba64:{NFSU2_TR(0x60ba64);
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
B60ba66:{NFSU2_TR(0x60ba66);
if(r1(R+518)){{goto L60ba72;}}
}
B60ba68:L60ba68:{c.instructions+=4;NFSU2_TR(0x60ba68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B60ba6a:{NFSU2_TR(0x60ba6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60ba6d:{NFSU2_TR(0x60ba6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B60ba6f:{NFSU2_TR(0x60ba6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ba72:L60ba72:{c.instructions+=4;NFSU2_TR(0x60ba72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B60ba74:{NFSU2_TR(0x60ba74);
__builtin_memmove((R+4),(R+28),4);
}
B60ba76:{NFSU2_TR(0x60ba76);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ba79:{NFSU2_TR(0x60ba79);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60ba7cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B60ba7c:L60ba7c:{c.instructions+=11;NFSU2_TR(0x60ba7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B60ba7f:{NFSU2_TR(0x60ba7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60ba82:{NFSU2_TR(0x60ba82);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B60ba85:{NFSU2_TR(0x60ba85);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B60ba89:{NFSU2_TR(0x60ba89);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B60ba8b:{NFSU2_TR(0x60ba8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ba8e:{NFSU2_TR(0x60ba8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ba91:{NFSU2_TR(0x60ba91);
w4(R+12,u32(0x89e838ull));
}
B60ba96:{NFSU2_TR(0x60ba96);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B60ba98:{NFSU2_TR(0x60ba98);
w4(R+20,u32(0x89e844ull));
}
B60ba9d:{NFSU2_TR(0x60ba9d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60b930u);}goto L60b930;}
}
B60baa2:L60baa2:{c.instructions+=7;NFSU2_TR(0x60baa2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60baa3:{NFSU2_TR(0x60baa3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60baa4:{NFSU2_TR(0x60baa4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60baa5:{NFSU2_TR(0x60baa5);
w4(R+0,u32(0x1ull));
}
B60baaa:{NFSU2_TR(0x60baaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B60baab:{NFSU2_TR(0x60baab);
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
B60baae:{NFSU2_TR(0x60baae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60baaf:L60baaf:{c.instructions+=3;NFSU2_TR(0x60baaf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B60bab1:{NFSU2_TR(0x60bab1);
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
B60bab4:{NFSU2_TR(0x60bab4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60bac0:L60bac0:{c.instructions+=3;NFSU2_TR(0x60bac0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60bac4:{NFSU2_TR(0x60bac4);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x8003b600ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B60baca:{NFSU2_TR(0x60baca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60bade;}}
}
B60bacc:L60bacc:{c.instructions+=1;NFSU2_TR(0x60bacc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60bad1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60b740u);}goto L60b740;}
}
B60bad1:L60bad1:{c.instructions+=2;NFSU2_TR(0x60bad1);
__builtin_memmove((R+4),(R+0),4);
}
B60bad3:{NFSU2_TR(0x60bad3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60bad8ull));
TAIL_STATIC(0x609c50u,609);
}
B60bad8:L60bad8:{c.instructions+=2;NFSU2_TR(0x60bad8);
w4(R+0,u32(0x1ull));
}
B60badd:{NFSU2_TR(0x60badd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60bade:L60bade:{c.instructions+=2;NFSU2_TR(0x60bade);
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
B60bae0:{NFSU2_TR(0x60bae0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60baf0:L60baf0:{c.instructions+=5;NFSU2_TR(0x60baf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60baf4:{NFSU2_TR(0x60baf4);
__builtin_memmove((R+4),gp(0x8a1bcc),4);
}
B60bafa:{NFSU2_TR(0x60bafa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60bafb:{NFSU2_TR(0x60bafb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60bafc:{NFSU2_TR(0x60bafc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60bb01ull));
TAIL_STATIC(0x43f920u,43f);
}
B60bb01:L60bb01:{c.instructions+=2;NFSU2_TR(0x60bb01);
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
B60bb04:{NFSU2_TR(0x60bb04);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60bb10:L60bb10:{c.instructions+=10;NFSU2_TR(0x60bb10);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60bb11:{NFSU2_TR(0x60bb11);
__builtin_memmove((R+20),(R+16),4);
}
B60bb13:{NFSU2_TR(0x60bb13);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B60bb16:{NFSU2_TR(0x60bb16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B60bb19:{NFSU2_TR(0x60bb19);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60bb1a:{NFSU2_TR(0x60bb1a);
__builtin_memmove((R+24),(R+4),4);
}
B60bb1c:{NFSU2_TR(0x60bb1c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60bb1d:{NFSU2_TR(0x60bb1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B60bb23:{NFSU2_TR(0x60bb23);
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
B60bb25:{NFSU2_TR(0x60bb25);
if(r1(R+518)){{goto L60bc20;}}
}
B60bb2b:L60bb2b:{c.instructions+=3;NFSU2_TR(0x60bb2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60bb31:{NFSU2_TR(0x60bb31);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60bb33:{NFSU2_TR(0x60bb33);
if(r1(R+518)){{goto L60bb3c;}}
}
B60bb35:L60bb35:{c.instructions+=2;NFSU2_TR(0x60bb35);
__builtin_memmove((R+4),(R+28),4);
}
B60bb37:{NFSU2_TR(0x60bb37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60bb3cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60bb10u);}goto L60bb10;}
}
B60bb3c:L60bb3c:{c.instructions+=7;NFSU2_TR(0x60bb3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B60bb3f:{NFSU2_TR(0x60bb3f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60bb40:{NFSU2_TR(0x60bb40);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B60bb43:{NFSU2_TR(0x60bb43);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B60bb46:{NFSU2_TR(0x60bb46);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60bb47:{NFSU2_TR(0x60bb47);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60bb48:{NFSU2_TR(0x60bb48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60bb4dull));
TAIL_STATIC(0x43c990u,43c);
}
B60bb4d:L60bb4d:{c.instructions+=5;NFSU2_TR(0x60bb4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B60bb53:{NFSU2_TR(0x60bb53);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60bb59:{NFSU2_TR(0x60bb59);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B60bb5c:{NFSU2_TR(0x60bb5c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60bb5e:{NFSU2_TR(0x60bb5e);
if(r1(R+518)){{goto L60bb67;}}
}
B60bb60:L60bb60:{c.instructions+=2;NFSU2_TR(0x60bb60);
__builtin_memmove((R+4),(R+28),4);
}
B60bb62:{NFSU2_TR(0x60bb62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60bb67ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60bb10u);}goto L60bb10;}
}
B60bb67:L60bb67:{c.instructions+=7;NFSU2_TR(0x60bb67);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B60bb6d:{NFSU2_TR(0x60bb6d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60bb6e:{NFSU2_TR(0x60bb6e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B60bb71:{NFSU2_TR(0x60bb71);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B60bb75:{NFSU2_TR(0x60bb75);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60bb76:{NFSU2_TR(0x60bb76);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60bb77:{NFSU2_TR(0x60bb77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60bb7cull));
TAIL_STATIC(0x43c9c0u,43c);
}
B60bb7c:L60bb7c:{c.instructions+=5;NFSU2_TR(0x60bb7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B60bb82:{NFSU2_TR(0x60bb82);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60bb88:{NFSU2_TR(0x60bb88);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B60bb8b:{NFSU2_TR(0x60bb8b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60bb8d:{NFSU2_TR(0x60bb8d);
if(r1(R+518)){{goto L60bb96;}}
}
B60bb8f:L60bb8f:{c.instructions+=2;NFSU2_TR(0x60bb8f);
__builtin_memmove((R+4),(R+28),4);
}
B60bb91:{NFSU2_TR(0x60bb91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60bb96ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60bb10u);}goto L60bb10;}
}
B60bb96:L60bb96:{c.instructions+=17;NFSU2_TR(0x60bb96);
{u32 ea_=u32(r4(R+28)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60bb99:{NFSU2_TR(0x60bb99);
{u32 ea_=u32(r4(R+28)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60bb9c:{NFSU2_TR(0x60bb9c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60bba0:{NFSU2_TR(0x60bba0);
{u32 ea_=u32(r4(R+28)+u32(64u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60bba3:{NFSU2_TR(0x60bba3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B60bba9:{NFSU2_TR(0x60bba9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60bbad:{NFSU2_TR(0x60bbad);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60bbb1:{NFSU2_TR(0x60bbb1);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B60bbb3:{NFSU2_TR(0x60bbb3);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60bbb7:{NFSU2_TR(0x60bbb7);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60bbbb:{NFSU2_TR(0x60bbbb);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B60bbbd:{NFSU2_TR(0x60bbbd);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60bbc1:{NFSU2_TR(0x60bbc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60bbc7:{NFSU2_TR(0x60bbc7);
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
B60bbc9:{NFSU2_TR(0x60bbc9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60bbcb:{NFSU2_TR(0x60bbcb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60bbcd:{NFSU2_TR(0x60bbcd);
if(r1(R+518)){{goto L60bbd6;}}
}
B60bbcf:L60bbcf:{c.instructions+=2;NFSU2_TR(0x60bbcf);
__builtin_memmove((R+4),(R+28),4);
}
B60bbd1:{NFSU2_TR(0x60bbd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60bbd6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60bb10u);}goto L60bb10;}
}
B60bbd6:L60bbd6:{c.instructions+=18;NFSU2_TR(0x60bbd6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60bbda:{NFSU2_TR(0x60bbda);
{u32 ea_=u32(r4(R+28)+u32(144u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60bbe0:{NFSU2_TR(0x60bbe0);
{u32 ea_=u32(r4(R+28)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60bbe6:{NFSU2_TR(0x60bbe6);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60bbea:{NFSU2_TR(0x60bbea);
{u32 ea_=u32(r4(R+28)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60bbf0:{NFSU2_TR(0x60bbf0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60bbf4:{NFSU2_TR(0x60bbf4);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60bbf8:{NFSU2_TR(0x60bbf8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60bbfc:{NFSU2_TR(0x60bbfc);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60bbfe:{NFSU2_TR(0x60bbfe);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60bc04:{NFSU2_TR(0x60bc04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60bc0a:{NFSU2_TR(0x60bc0a);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60bc10:{NFSU2_TR(0x60bc10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60bc1a:{NFSU2_TR(0x60bc1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60bc1b:{NFSU2_TR(0x60bc1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60bc1c:{NFSU2_TR(0x60bc1c);
__builtin_memmove((R+16),(R+20),4);
}
B60bc1e:{NFSU2_TR(0x60bc1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60bc1f:{NFSU2_TR(0x60bc1f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60bc20:L60bc20:{c.instructions+=5;NFSU2_TR(0x60bc20);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+8),(U+0),4);
}
B60bc23:{NFSU2_TR(0x60bc23);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60bc24:{NFSU2_TR(0x60bc24);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B60bc27:{NFSU2_TR(0x60bc27);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60bc28:{NFSU2_TR(0x60bc28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60bc2dull));
TAIL_STATIC(0x4012b0u,401);
}
B60bc2d:L60bc2d:{c.instructions+=14;NFSU2_TR(0x60bc2d);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60bc33:{NFSU2_TR(0x60bc33);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60bc39:{NFSU2_TR(0x60bc39);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60bc3f:{NFSU2_TR(0x60bc3f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60bc41:{NFSU2_TR(0x60bc41);
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
B60bc44:{NFSU2_TR(0x60bc44);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60bc4a:{NFSU2_TR(0x60bc4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60bc50:{NFSU2_TR(0x60bc50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60bc51:{NFSU2_TR(0x60bc51);
{u32 ea_=u32(r4(R+24)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60bc57:{NFSU2_TR(0x60bc57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60bc61:{NFSU2_TR(0x60bc61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60bc62:{NFSU2_TR(0x60bc62);
__builtin_memmove((R+16),(R+20),4);
}
B60bc64:{NFSU2_TR(0x60bc64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60bc65:{NFSU2_TR(0x60bc65);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60bc70:L60bc70:{c.instructions+=5;NFSU2_TR(0x60bc70);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60bc72:{NFSU2_TR(0x60bc72);
u8 U[4];
w4(U+0,u32(0x7a8380ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60bc77:{NFSU2_TR(0x60bc77);
u8 U[4];
w4(U+0,u32(0xe0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60bc7c:{NFSU2_TR(0x60bc7c);
u8 U[4];
w4(U+0,u32(0xf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60bc81:{NFSU2_TR(0x60bc81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60bc86ull));
TAIL_STATIC(0x440df0u,440);
}
B60bc86:L60bc86:{c.instructions+=3;NFSU2_TR(0x60bc86);
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
B60bc89:{NFSU2_TR(0x60bc89);
__builtin_memmove(gp(0x8a1bcc),(R+0),4);
}
B60bc8e:{NFSU2_TR(0x60bc8e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60bc90:L60bc90:{c.instructions+=6;NFSU2_TR(0x60bc90);
__builtin_memmove((R+0),(R+4),4);
}
B60bc92:{NFSU2_TR(0x60bc92);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60bc96:{NFSU2_TR(0x60bc96);
w4(R+8,u32(0x1ull));
}
B60bc9b:{NFSU2_TR(0x60bc9b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B60bc9d:{NFSU2_TR(0x60bc9d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B60bca3:{NFSU2_TR(0x60bca3);
if(r1(R+518)){{goto L60bcad;}}
}
B60bca5:L60bca5:{c.instructions+=2;NFSU2_TR(0x60bca5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x5a0ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x5a0ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x5a0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60bcaa:{NFSU2_TR(0x60bcaa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60bcad:L60bcad:{c.instructions+=2;NFSU2_TR(0x60bcad);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x50ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x50ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60bcb0:{NFSU2_TR(0x60bcb0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60bcc0:L60bcc0:{c.instructions+=6;NFSU2_TR(0x60bcc0);
__builtin_memmove((R+0),(R+4),4);
}
B60bcc2:{NFSU2_TR(0x60bcc2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60bcc6:{NFSU2_TR(0x60bcc6);
w4(R+8,u32(0x1ull));
}
B60bccb:{NFSU2_TR(0x60bccb);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B60bccd:{NFSU2_TR(0x60bccd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B60bcd3:{NFSU2_TR(0x60bcd3);
if(r1(R+518)){{goto L60bcdd;}}
}
B60bcd5:L60bcd5:{c.instructions+=2;NFSU2_TR(0x60bcd5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x560ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x560ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x560ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60bcda:{NFSU2_TR(0x60bcda);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60bcdd:L60bcdd:{c.instructions+=2;NFSU2_TR(0x60bcdd);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xd0ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xd0ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60bce2:{NFSU2_TR(0x60bce2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60bcf0:L60bcf0:{c.instructions+=9;NFSU2_TR(0x60bcf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60bcf4:{NFSU2_TR(0x60bcf4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60bcf8:{NFSU2_TR(0x60bcf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60bcfb:{NFSU2_TR(0x60bcfb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60bcff:{NFSU2_TR(0x60bcff);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60bd02:{NFSU2_TR(0x60bd02);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60bd06:{NFSU2_TR(0x60bd06);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60bd09:{NFSU2_TR(0x60bd09);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60bd0c:{NFSU2_TR(0x60bd0c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60bd10:L60bd10:{c.instructions+=7;NFSU2_TR(0x60bd10);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60bd11:{NFSU2_TR(0x60bd11);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60bd12:{NFSU2_TR(0x60bd12);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B60bd16:{NFSU2_TR(0x60bd16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B60bd18:{NFSU2_TR(0x60bd18);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60bd1a:{NFSU2_TR(0x60bd1a);
u8 U[5];
w4(U+0,u32(u32(u32(0x7ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B60bd1f:{NFSU2_TR(0x60bd1f);
if(r1(R+518)){{goto L60bd28;}}
}
B60bd21:L60bd21:{c.instructions+=2;NFSU2_TR(0x60bd21);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B60bd24:{NFSU2_TR(0x60bd24);
u8 U[5];
w4(U+0,u32(u32(u32(0x7ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B60bd28:L60bd28:{c.instructions+=6;NFSU2_TR(0x60bd28);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60bd29:{NFSU2_TR(0x60bd29);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B60bd2d:{NFSU2_TR(0x60bd2d);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B60bd31:{NFSU2_TR(0x60bd31);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60bd32:{NFSU2_TR(0x60bd32);
__builtin_memmove((R+4),(R+24),4);
}
B60bd34:{NFSU2_TR(0x60bd34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60bd39ull));
TAIL_STATIC(0x5716c0u,571);
}
B60bd39:L60bd39:{c.instructions+=4;NFSU2_TR(0x60bd39);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B60bd3c:{NFSU2_TR(0x60bd3c);
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
B60bd3e:{NFSU2_TR(0x60bd3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60bd3f:{NFSU2_TR(0x60bd3f);
if(r1(R+518)){{goto L60bd4f;}}
}
B60bd41:L60bd41:{c.instructions+=3;NFSU2_TR(0x60bd41);
u8 U[5];
w4(U+0,u32(u32(u32(0x7ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B60bd46:{NFSU2_TR(0x60bd46);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e970ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B60bd4d:{NFSU2_TR(0x60bd4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B60bd4f:L60bd4f:{c.instructions+=3;NFSU2_TR(0x60bd4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60bd50:{NFSU2_TR(0x60bd50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B60bd51:{NFSU2_TR(0x60bd51);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60bd60:L60bd60:{c.instructions+=14;NFSU2_TR(0x60bd60);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60bd62:{NFSU2_TR(0x60bd62);
u8 U[4];
w4(U+0,u32(0x77a164ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60bd67:{NFSU2_TR(0x60bd67);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60bd6d:{NFSU2_TR(0x60bd6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60bd6e:{NFSU2_TR(0x60bd6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60bd75:{NFSU2_TR(0x60bd75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60bd76:{NFSU2_TR(0x60bd76);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60bd77:{NFSU2_TR(0x60bd77);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60bd78:{NFSU2_TR(0x60bd78);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B60bd7c:{NFSU2_TR(0x60bd7c);
u8 U[4];
w4(U+0,u32(0x7a6498ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60bd81:{NFSU2_TR(0x60bd81);
__builtin_memmove((R+24),(R+4),4);
}
B60bd83:{NFSU2_TR(0x60bd83);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60bd85:{NFSU2_TR(0x60bd85);
__builtin_memmove((R+4),(R+28),4);
}
B60bd87:{NFSU2_TR(0x60bd87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60bd8cull));
TAIL_STATIC(0x578ce0u,578);
}
B60bd8c:L60bd8c:{c.instructions+=11;NFSU2_TR(0x60bd8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60bd8f:{NFSU2_TR(0x60bd8f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60bd91:{NFSU2_TR(0x60bd91);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60bd93:{NFSU2_TR(0x60bd93);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60bd95:{NFSU2_TR(0x60bd95);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60bd97:{NFSU2_TR(0x60bd97);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B60bd9b:{NFSU2_TR(0x60bd9b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B60bd9e:{NFSU2_TR(0x60bd9e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60bd9f:{NFSU2_TR(0x60bd9f);
__builtin_memmove((R+4),(R+28),4);
}
B60bda1:{NFSU2_TR(0x60bda1);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B60bda5:{NFSU2_TR(0x60bda5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60bdaaull));
TAIL_STATIC(0x571640u,571);
}
B60bdaa:L60bdaa:{c.instructions+=3;NFSU2_TR(0x60bdaa);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B60bdad:{NFSU2_TR(0x60bdad);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60bdaf:{NFSU2_TR(0x60bdaf);
if(r1(R+518)){{goto L60bde9;}}
}
B60bdb1:L60bdb1:{c.instructions+=3;NFSU2_TR(0x60bdb1);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B60bdb5:{NFSU2_TR(0x60bdb5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60bdb7:{NFSU2_TR(0x60bdb7);
if(r1(R+518)){{goto L60bde9;}}
}
B60bdb9:L60bdb9:{c.instructions+=2;NFSU2_TR(0x60bdb9);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60bdbb:{NFSU2_TR(0x60bdbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60bdc0ull));
TAIL_STATIC(0x575620u,575);
}
B60bdc0:L60bdc0:{c.instructions+=5;NFSU2_TR(0x60bdc0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60bdc3:{NFSU2_TR(0x60bdc3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60bdc7:{NFSU2_TR(0x60bdc7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60bdc9:{NFSU2_TR(0x60bdc9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60bdd1:{NFSU2_TR(0x60bdd1);
if(r1(R+518)){{goto L60bddc;}}
}
B60bdd3:L60bdd3:{c.instructions+=2;NFSU2_TR(0x60bdd3);
__builtin_memmove((R+4),(R+0),4);
}
B60bdd5:{NFSU2_TR(0x60bdd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60bddaull));
TAIL_STATIC(0x5da2f0u,5da);
}
B60bdda:L60bdda:{c.instructions+=1;NFSU2_TR(0x60bdda);
{goto L60bdde;}
}
B60bddc:L60bddc:{c.instructions+=1;NFSU2_TR(0x60bddc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B60bdde:L60bdde:{c.instructions+=2;NFSU2_TR(0x60bdde);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B60bde6:{NFSU2_TR(0x60bde6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60bde9:L60bde9:{c.instructions+=3;NFSU2_TR(0x60bde9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60bdec:{NFSU2_TR(0x60bdec);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60bdee:{NFSU2_TR(0x60bdee);
if(r1(R+518)){{goto L60bdf6;}}
}
B60bdf0:L60bdf0:{c.instructions+=2;NFSU2_TR(0x60bdf0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60bdf1:{NFSU2_TR(0x60bdf1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60bdf6ull));
TAIL_STATIC(0x5d5e20u,5d5);
}
B60bdf6:L60bdf6:{c.instructions+=2;NFSU2_TR(0x60bdf6);
__builtin_memmove((R+4),(R+28),4);
}
B60bdf8:{NFSU2_TR(0x60bdf8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60bdfdull));
TAIL_STATIC(0x578d90u,578);
}
B60bdfd:L60bdfd:{c.instructions+=6;NFSU2_TR(0x60bdfd);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60be01:{NFSU2_TR(0x60be01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60be02:{NFSU2_TR(0x60be02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60be03:{NFSU2_TR(0x60be03);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60be0a:{NFSU2_TR(0x60be0a);
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
B60be0d:{NFSU2_TR(0x60be0d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60be10:L60be10:{c.instructions+=3;NFSU2_TR(0x60be10);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60be13:{NFSU2_TR(0x60be13);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60be15:{NFSU2_TR(0x60be15);
if(r1(R+518)){{goto L60be22;}}
}
B60be17:L60be17:{c.instructions+=3;NFSU2_TR(0x60be17);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60be1a:{NFSU2_TR(0x60be1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60be1c:{NFSU2_TR(0x60be1c);
if(r1(R+518)){{goto L60be22;}}
}
B60be1e:L60be1e:{c.instructions+=2;NFSU2_TR(0x60be1e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x10ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60be21:{NFSU2_TR(0x60be21);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60be22:L60be22:{c.instructions+=2;NFSU2_TR(0x60be22);
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
B60be24:{NFSU2_TR(0x60be24);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60be30:L60be30:{c.instructions+=22;NFSU2_TR(0x60be30);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60be33:{NFSU2_TR(0x60be33);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60be36:{NFSU2_TR(0x60be36);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60be39:{NFSU2_TR(0x60be39);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60be3c:{NFSU2_TR(0x60be3c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60be3d:{NFSU2_TR(0x60be3d);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60be3f:{NFSU2_TR(0x60be3f);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B60be41:{NFSU2_TR(0x60be41);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B60be43:{NFSU2_TR(0x60be43);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B60be45:{NFSU2_TR(0x60be45);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B60be47:{NFSU2_TR(0x60be47);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B60be49:{NFSU2_TR(0x60be49);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B60be4b:{NFSU2_TR(0x60be4b);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B60be4d:{NFSU2_TR(0x60be4d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B60be4f:{NFSU2_TR(0x60be4f);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B60be51:{NFSU2_TR(0x60be51);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60be53:{NFSU2_TR(0x60be53);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60be55:{NFSU2_TR(0x60be55);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B60be57:{NFSU2_TR(0x60be57);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60be5a:{NFSU2_TR(0x60be5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60be5b:{NFSU2_TR(0x60be5b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60be5c:{NFSU2_TR(0x60be5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60be61ull));
TAIL_STATIC(0x5ec330u,5ec);
}
B60be61:L60be61:{c.instructions+=2;NFSU2_TR(0x60be61);
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
B60be64:{NFSU2_TR(0x60be64);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60be70:L60be70:{c.instructions+=3;NFSU2_TR(0x60be70);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60be74:{NFSU2_TR(0x60be74);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60be76:{NFSU2_TR(0x60be76);
if(r1(R+518)){{goto L60be85;}}
}
B60be78:L60be78:{c.instructions+=2;NFSU2_TR(0x60be78);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
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
B60be7b:{NFSU2_TR(0x60be7b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60be85;}}
}
B60be7d:L60be7d:{c.instructions+=2;NFSU2_TR(0x60be7d);
w4(R+0,u32(0x1ull));
}
B60be82:{NFSU2_TR(0x60be82);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60be85:L60be85:{c.instructions+=2;NFSU2_TR(0x60be85);
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
B60be87:{NFSU2_TR(0x60be87);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60be90:L60be90:{c.instructions+=5;NFSU2_TR(0x60be90);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60be94:{NFSU2_TR(0x60be94);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B60be96:{NFSU2_TR(0x60be96);
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
B60be98:{NFSU2_TR(0x60be98);
__builtin_memmove((R+0),(R+518),1);
}
B60be9b:{NFSU2_TR(0x60be9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60bea0:L60bea0:{c.instructions+=4;NFSU2_TR(0x60bea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60bea3:{NFSU2_TR(0x60bea3);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B60bea5:{NFSU2_TR(0x60bea5);
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
B60bea7:{NFSU2_TR(0x60bea7);
if(r1(R+518)){{goto L60beb1;}}
}
B60bea9:L60bea9:{c.instructions+=3;NFSU2_TR(0x60bea9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60beac:{NFSU2_TR(0x60beac);
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
B60beae:{NFSU2_TR(0x60beae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B60beb1:L60beb1:{c.instructions+=1;NFSU2_TR(0x60beb1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60bec0:L60bec0:{c.instructions+=4;NFSU2_TR(0x60bec0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60bec3:{NFSU2_TR(0x60bec3);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B60bec5:{NFSU2_TR(0x60bec5);
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
B60bec7:{NFSU2_TR(0x60bec7);
if(r1(R+518)){{goto L60bed6;}}
}
B60bec9:L60bec9:{c.instructions+=3;NFSU2_TR(0x60bec9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60becc:{NFSU2_TR(0x60becc);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x844ull))));
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
B60bed3:{NFSU2_TR(0x60bed3);
__builtin_memmove((R+0),(R+518),1);
}
B60bed6:L60bed6:{c.instructions+=1;NFSU2_TR(0x60bed6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60bee0:L60bee0:{c.instructions+=4;NFSU2_TR(0x60bee0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60bee3:{NFSU2_TR(0x60bee3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B60bee5:{NFSU2_TR(0x60bee5);
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
B60bee7:{NFSU2_TR(0x60bee7);
if(r1(R+518)){{goto L60beec;}}
}
B60bee9:L60bee9:{c.instructions+=1;NFSU2_TR(0x60bee9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60beec:L60beec:{c.instructions+=1;NFSU2_TR(0x60beec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60bef0:L60bef0:{c.instructions+=3;NFSU2_TR(0x60bef0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60bef3:{NFSU2_TR(0x60bef3);
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
B60bef5:{NFSU2_TR(0x60bef5);
if(r1(R+518)){{goto L60bf08;}}
}
B60bef7:L60bef7:{c.instructions+=6;NFSU2_TR(0x60bef7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60befd:{NFSU2_TR(0x60befd);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B60beff:{NFSU2_TR(0x60beff);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B60bf02:{NFSU2_TR(0x60bf02);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
__builtin_memmove((R+4),(U+0),1);
}
B60bf05:{NFSU2_TR(0x60bf05);
__builtin_memmove((R+0),(R+4),1);
}
B60bf07:{NFSU2_TR(0x60bf07);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60bf08:L60bf08:{c.instructions+=2;NFSU2_TR(0x60bf08);
w1(R+0,u8(0x1ull));
}
B60bf0a:{NFSU2_TR(0x60bf0a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60bf10:L60bf10:{c.instructions+=3;NFSU2_TR(0x60bf10);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60bf13:{NFSU2_TR(0x60bf13);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60bf15:{NFSU2_TR(0x60bf15);
if(r1(R+518)){{goto L60bf25;}}
}
B60bf17:L60bf17:{c.instructions+=3;NFSU2_TR(0x60bf17);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60bf1a:{NFSU2_TR(0x60bf1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60bf1c:{NFSU2_TR(0x60bf1c);
if(r1(R+518)){{goto L60bf25;}}
}
B60bf1e:L60bf1e:{c.instructions+=2;NFSU2_TR(0x60bf1e);
__builtin_memmove((R+4),(R+0),4);
}
B60bf20:{NFSU2_TR(0x60bf20);
TAIL_STATIC(0x404910u,404);
}
B60bf25:L60bf25:{c.instructions+=21;NFSU2_TR(0x60bf25);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60bf28:{NFSU2_TR(0x60bf28);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60bf2b:{NFSU2_TR(0x60bf2b);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60bf2e:{NFSU2_TR(0x60bf2e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60bf30:{NFSU2_TR(0x60bf30);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B60bf32:{NFSU2_TR(0x60bf32);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B60bf34:{NFSU2_TR(0x60bf34);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B60bf36:{NFSU2_TR(0x60bf36);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B60bf38:{NFSU2_TR(0x60bf38);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B60bf3a:{NFSU2_TR(0x60bf3a);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B60bf3c:{NFSU2_TR(0x60bf3c);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B60bf3e:{NFSU2_TR(0x60bf3e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B60bf40:{NFSU2_TR(0x60bf40);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B60bf42:{NFSU2_TR(0x60bf42);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B60bf44:{NFSU2_TR(0x60bf44);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60bf46:{NFSU2_TR(0x60bf46);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60bf48:{NFSU2_TR(0x60bf48);
{u32 ea_=u32(u32(8021468u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60bf4e:{NFSU2_TR(0x60bf4e);
{u32 ea_=u32(u32(8293984u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B60bf54:{NFSU2_TR(0x60bf54);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60bf56:{NFSU2_TR(0x60bf56);
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
B60bf59:{NFSU2_TR(0x60bf59);
if(r1(R+518)){{goto L60bf63;}}
}
B60bf5b:L60bf5b:{c.instructions+=2;NFSU2_TR(0x60bf5b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60bf5d:{NFSU2_TR(0x60bf5d);
{u32 ea_=u32(u32(8293984u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60bf63:L60bf63:{c.instructions+=1;NFSU2_TR(0x60bf63);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60bf70:L60bf70:{c.instructions+=3;NFSU2_TR(0x60bf70);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60bf73:{NFSU2_TR(0x60bf73);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60bf75:{NFSU2_TR(0x60bf75);
if(r1(R+518)){{goto L60bf7c;}}
}
B60bf77:L60bf77:{c.instructions+=1;NFSU2_TR(0x60bf77);
TAIL_STATIC(0x5ebfa0u,5eb);
}
B60bf7c:L60bf7c:{c.instructions+=2;NFSU2_TR(0x60bf7c);
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
B60bf7e:{NFSU2_TR(0x60bf7e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60bf80:L60bf80:{c.instructions+=3;NFSU2_TR(0x60bf80);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60bf83:{NFSU2_TR(0x60bf83);
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
B60bf85:{NFSU2_TR(0x60bf85);
if(r1(R+518)){{goto L60bf8e;}}
}
B60bf87:L60bf87:{c.instructions+=2;NFSU2_TR(0x60bf87);
{u32 ea_=u32(r4(R+0)+u32(2300u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60bf8d:{NFSU2_TR(0x60bf8d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60bf8e:L60bf8e:{c.instructions+=2;NFSU2_TR(0x60bf8e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60bf94:{NFSU2_TR(0x60bf94);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60bfa0:L60bfa0:{c.instructions+=6;NFSU2_TR(0x60bfa0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60bfa1:{NFSU2_TR(0x60bfa1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B60bfa5:{NFSU2_TR(0x60bfa5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60bfa6:{NFSU2_TR(0x60bfa6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60bfa7:{NFSU2_TR(0x60bfa7);
__builtin_memmove((R+28),(R+4),4);
}
B60bfa9:{NFSU2_TR(0x60bfa9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60bfaeull));
TAIL_STATIC(0x403d60u,403);
}
B60bfae:L60bfae:{c.instructions+=4;NFSU2_TR(0x60bfae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60bfb1:{NFSU2_TR(0x60bfb1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60bfb3:{NFSU2_TR(0x60bfb3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60bfb4:{NFSU2_TR(0x60bfb4);
if(r1(R+518)){{goto L60bfc7;}}
}
B60bfb6:L60bfb6:{c.instructions+=1;NFSU2_TR(0x60bfb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60bfbbull));
TAIL_STATIC(0x50d510u,50d);
}
B60bfbb:L60bfbb:{c.instructions+=5;NFSU2_TR(0x60bfbb);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60bfbf:{NFSU2_TR(0x60bfbf);
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
B60bfc2:{NFSU2_TR(0x60bfc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60bfc3:{NFSU2_TR(0x60bfc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60bfc4:{NFSU2_TR(0x60bfc4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60bfc7:L60bfc7:{c.instructions+=1;NFSU2_TR(0x60bfc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60bfccull));
TAIL_STATIC(0x403d80u,403);
}
B60bfcc:L60bfcc:{c.instructions+=3;NFSU2_TR(0x60bfcc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60bfcf:{NFSU2_TR(0x60bfcf);
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
B60bfd1:{NFSU2_TR(0x60bfd1);
if(r1(R+518)){{goto L60bfe5;}}
}
B60bfd3:L60bfd3:{c.instructions+=2;NFSU2_TR(0x60bfd3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60bfd4:{NFSU2_TR(0x60bfd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60bfd9ull));
TAIL_STATIC(0x403da0u,403);
}
B60bfd9:L60bfd9:{c.instructions+=5;NFSU2_TR(0x60bfd9);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60bfdd:{NFSU2_TR(0x60bfdd);
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
B60bfe0:{NFSU2_TR(0x60bfe0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60bfe1:{NFSU2_TR(0x60bfe1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60bfe2:{NFSU2_TR(0x60bfe2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60bfe5:L60bfe5:{c.instructions+=4;NFSU2_TR(0x60bfe5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60bfeb:{NFSU2_TR(0x60bfeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60bfec:{NFSU2_TR(0x60bfec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60bfed:{NFSU2_TR(0x60bfed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60bff0:L60bff0:{c.instructions+=4;NFSU2_TR(0x60bff0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60bff4:{NFSU2_TR(0x60bff4);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60bff7:{NFSU2_TR(0x60bff7);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B60bffe:{NFSU2_TR(0x60bffe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
TAIL_STATIC(0x60c001u,60c);
}
XIT:NFSU2_TR_EXIT(0x60b,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
