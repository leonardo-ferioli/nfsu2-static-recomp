#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_4a7(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_572(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_57a(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_6f6(u8* __restrict R,Cpu& c);
u32 body_6f7(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x57b,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x57b,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_57b(u8* __restrict R,Cpu& c);
u32 page_57b(Cpu& c){return body_57b(c.regs.data(),c);}
__attribute__((noinline)) u32 body_57b(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x57b002:goto L57b002;
case 0x57b004:c.instructions+=3;goto B57b004;
case 0x57b006:c.instructions+=2;goto B57b006;
case 0x57b008:c.instructions+=1;goto B57b008;
case 0x57b00a:goto L57b00a;
case 0x57b010:goto L57b010;
case 0x57b013:c.instructions+=3;goto B57b013;
case 0x57b018:c.instructions+=2;goto B57b018;
case 0x57b019:c.instructions+=1;goto B57b019;
case 0x57b01e:goto L57b01e;
case 0x57b021:c.instructions+=2;goto B57b021;
case 0x57b023:c.instructions+=1;goto B57b023;
case 0x57b025:goto L57b025;
case 0x57b027:c.instructions+=1;goto B57b027;
case 0x57b029:goto L57b029;
case 0x57b02a:goto L57b02a;
case 0x57b02c:c.instructions+=2;goto B57b02c;
case 0x57b02e:c.instructions+=1;goto B57b02e;
case 0x57b030:goto L57b030;
case 0x57b036:goto L57b036;
case 0x57b038:c.instructions+=3;goto B57b038;
case 0x57b03d:c.instructions+=2;goto B57b03d;
case 0x57b03f:c.instructions+=1;goto B57b03f;
case 0x57b044:goto L57b044;
case 0x57b046:c.instructions+=2;goto B57b046;
case 0x57b048:c.instructions+=1;goto B57b048;
case 0x57b04a:goto L57b04a;
case 0x57b04c:c.instructions+=9;goto B57b04c;
case 0x57b04f:c.instructions+=8;goto B57b04f;
case 0x57b051:c.instructions+=7;goto B57b051;
case 0x57b054:c.instructions+=6;goto B57b054;
case 0x57b05a:c.instructions+=5;goto B57b05a;
case 0x57b060:c.instructions+=4;goto B57b060;
case 0x57b062:c.instructions+=3;goto B57b062;
case 0x57b065:c.instructions+=2;goto B57b065;
case 0x57b068:c.instructions+=1;goto B57b068;
case 0x57b06a:goto L57b06a;
case 0x57b06e:c.instructions+=9;goto B57b06e;
case 0x57b071:c.instructions+=8;goto B57b071;
case 0x57b074:c.instructions+=7;goto B57b074;
case 0x57b075:c.instructions+=6;goto B57b075;
case 0x57b076:c.instructions+=5;goto B57b076;
case 0x57b077:c.instructions+=4;goto B57b077;
case 0x57b07b:c.instructions+=3;goto B57b07b;
case 0x57b07c:c.instructions+=2;goto B57b07c;
case 0x57b07d:c.instructions+=1;goto B57b07d;
case 0x57b07e:goto L57b07e;
case 0x57b080:c.instructions+=1;goto B57b080;
case 0x57b082:goto L57b082;
case 0x57b084:c.instructions+=10;goto B57b084;
case 0x57b087:c.instructions+=9;goto B57b087;
case 0x57b089:c.instructions+=8;goto B57b089;
case 0x57b08c:c.instructions+=7;goto B57b08c;
case 0x57b092:c.instructions+=6;goto B57b092;
case 0x57b098:c.instructions+=5;goto B57b098;
case 0x57b09a:c.instructions+=4;goto B57b09a;
case 0x57b09d:c.instructions+=3;goto B57b09d;
case 0x57b0a0:c.instructions+=2;goto B57b0a0;
case 0x57b0a2:c.instructions+=1;goto B57b0a2;
case 0x57b0b0:goto L57b0b0;
case 0x57b0b3:c.instructions+=11;goto B57b0b3;
case 0x57b0b4:c.instructions+=10;goto B57b0b4;
case 0x57b0b8:c.instructions+=9;goto B57b0b8;
case 0x57b0b9:c.instructions+=8;goto B57b0b9;
case 0x57b0ba:c.instructions+=7;goto B57b0ba;
case 0x57b0bb:c.instructions+=6;goto B57b0bb;
case 0x57b0bd:c.instructions+=5;goto B57b0bd;
case 0x57b0c3:c.instructions+=4;goto B57b0c3;
case 0x57b0c5:c.instructions+=3;goto B57b0c5;
case 0x57b0c7:c.instructions+=2;goto B57b0c7;
case 0x57b0cb:c.instructions+=1;goto B57b0cb;
case 0x57b0d1:goto L57b0d1;
case 0x57b0d7:c.instructions+=1;goto B57b0d7;
case 0x57b0d9:goto L57b0d9;
case 0x57b0df:c.instructions+=1;goto B57b0df;
case 0x57b0e5:goto L57b0e5;
case 0x57b0e6:c.instructions+=6;goto B57b0e6;
case 0x57b0e7:c.instructions+=5;goto B57b0e7;
case 0x57b0e8:c.instructions+=4;goto B57b0e8;
case 0x57b0ea:c.instructions+=3;goto B57b0ea;
case 0x57b0eb:c.instructions+=2;goto B57b0eb;
case 0x57b0ee:c.instructions+=1;goto B57b0ee;
case 0x57b0f1:goto L57b0f1;
case 0x57b0f7:c.instructions+=5;goto B57b0f7;
case 0x57b0f8:c.instructions+=4;goto B57b0f8;
case 0x57b0fa:c.instructions+=3;goto B57b0fa;
case 0x57b0fd:c.instructions+=2;goto B57b0fd;
case 0x57b103:c.instructions+=1;goto B57b103;
case 0x57b105:goto L57b105;
case 0x57b10b:c.instructions+=2;goto B57b10b;
case 0x57b10e:c.instructions+=1;goto B57b10e;
case 0x57b110:goto L57b110;
case 0x57b111:c.instructions+=3;goto B57b111;
case 0x57b112:c.instructions+=2;goto B57b112;
case 0x57b113:c.instructions+=1;goto B57b113;
case 0x57b118:goto L57b118;
case 0x57b11b:c.instructions+=4;goto B57b11b;
case 0x57b11c:c.instructions+=3;goto B57b11c;
case 0x57b11f:c.instructions+=2;goto B57b11f;
case 0x57b122:c.instructions+=1;goto B57b122;
case 0x57b124:goto L57b124;
case 0x57b126:c.instructions+=2;goto B57b126;
case 0x57b128:c.instructions+=1;goto B57b128;
case 0x57b12d:goto L57b12d;
case 0x57b12f:c.instructions+=2;goto B57b12f;
case 0x57b131:c.instructions+=1;goto B57b131;
case 0x57b133:goto L57b133;
case 0x57b140:goto L57b140;
case 0x57b146:c.instructions+=6;goto B57b146;
case 0x57b14c:c.instructions+=5;goto B57b14c;
case 0x57b14f:c.instructions+=4;goto B57b14f;
case 0x57b150:c.instructions+=3;goto B57b150;
case 0x57b151:c.instructions+=2;goto B57b151;
case 0x57b152:c.instructions+=1;goto B57b152;
case 0x57b157:goto L57b157;
case 0x57b15a:c.instructions+=6;goto B57b15a;
case 0x57b161:c.instructions+=5;goto B57b161;
case 0x57b168:c.instructions+=4;goto B57b168;
case 0x57b16a:c.instructions+=3;goto B57b16a;
case 0x57b16d:c.instructions+=2;goto B57b16d;
case 0x57b16f:c.instructions+=1;goto B57b16f;
case 0x57b171:goto L57b171;
case 0x57b176:c.instructions+=2;goto B57b176;
case 0x57b178:c.instructions+=1;goto B57b178;
case 0x57b17a:goto L57b17a;
case 0x57b17d:c.instructions+=1;goto B57b17d;
case 0x57b17f:goto L57b17f;
case 0x57b184:c.instructions+=3;goto B57b184;
case 0x57b187:c.instructions+=2;goto B57b187;
case 0x57b18f:c.instructions+=1;goto B57b18f;
case 0x57b191:goto L57b191;
case 0x57b199:goto L57b199;
case 0x57b19b:c.instructions+=2;goto B57b19b;
case 0x57b19d:c.instructions+=1;goto B57b19d;
case 0x57b1a2:goto L57b1a2;
case 0x57b1a4:c.instructions+=3;goto B57b1a4;
case 0x57b1a6:c.instructions+=2;goto B57b1a6;
case 0x57b1aa:c.instructions+=1;goto B57b1aa;
case 0x57b1b0:goto L57b1b0;
case 0x57b1b4:goto L57b1b4;
case 0x57b1b7:c.instructions+=2;goto B57b1b7;
case 0x57b1b9:c.instructions+=1;goto B57b1b9;
case 0x57b1bb:goto L57b1bb;
case 0x57b1be:c.instructions+=2;goto B57b1be;
case 0x57b1c0:c.instructions+=1;goto B57b1c0;
case 0x57b1c2:goto L57b1c2;
case 0x57b1c6:c.instructions+=2;goto B57b1c6;
case 0x57b1c8:c.instructions+=1;goto B57b1c8;
case 0x57b1ca:goto L57b1ca;
case 0x57b1cd:c.instructions+=2;goto B57b1cd;
case 0x57b1cf:c.instructions+=1;goto B57b1cf;
case 0x57b1d1:goto L57b1d1;
case 0x57b1d5:c.instructions+=7;goto B57b1d5;
case 0x57b1d6:c.instructions+=6;goto B57b1d6;
case 0x57b1d7:c.instructions+=5;goto B57b1d7;
case 0x57b1db:c.instructions+=4;goto B57b1db;
case 0x57b1dc:c.instructions+=3;goto B57b1dc;
case 0x57b1dd:c.instructions+=2;goto B57b1dd;
case 0x57b1de:c.instructions+=1;goto B57b1de;
case 0x57b1e0:goto L57b1e0;
case 0x57b1e3:c.instructions+=2;goto B57b1e3;
case 0x57b1e6:c.instructions+=1;goto B57b1e6;
case 0x57b1e8:goto L57b1e8;
case 0x57b1eb:c.instructions+=3;goto B57b1eb;
case 0x57b1f1:c.instructions+=2;goto B57b1f1;
case 0x57b1f7:c.instructions+=1;goto B57b1f7;
case 0x57b1f9:goto L57b1f9;
case 0x57b1fc:c.instructions+=11;goto B57b1fc;
case 0x57b200:c.instructions+=10;goto B57b200;
case 0x57b201:c.instructions+=9;goto B57b201;
case 0x57b204:c.instructions+=8;goto B57b204;
case 0x57b207:c.instructions+=7;goto B57b207;
case 0x57b20a:c.instructions+=6;goto B57b20a;
case 0x57b20d:c.instructions+=5;goto B57b20d;
case 0x57b210:c.instructions+=4;goto B57b210;
case 0x57b213:c.instructions+=3;goto B57b213;
case 0x57b216:c.instructions+=2;goto B57b216;
case 0x57b219:c.instructions+=1;goto B57b219;
case 0x57b21c:goto L57b21c;
case 0x57b220:c.instructions+=3;goto B57b220;
case 0x57b224:c.instructions+=2;goto B57b224;
case 0x57b225:c.instructions+=1;goto B57b225;
case 0x57b229:goto L57b229;
case 0x57b22b:c.instructions+=2;goto B57b22b;
case 0x57b22d:c.instructions+=1;goto B57b22d;
case 0x57b22f:goto L57b22f;
case 0x57b233:c.instructions+=6;goto B57b233;
case 0x57b234:c.instructions+=5;goto B57b234;
case 0x57b235:c.instructions+=4;goto B57b235;
case 0x57b236:c.instructions+=3;goto B57b236;
case 0x57b237:c.instructions+=2;goto B57b237;
case 0x57b23a:c.instructions+=1;goto B57b23a;
case 0x57b240:goto L57b240;
case 0x57b241:c.instructions+=8;goto B57b241;
case 0x57b242:c.instructions+=7;goto B57b242;
case 0x57b243:c.instructions+=6;goto B57b243;
case 0x57b247:c.instructions+=5;goto B57b247;
case 0x57b248:c.instructions+=4;goto B57b248;
case 0x57b24d:c.instructions+=3;goto B57b24d;
case 0x57b24f:c.instructions+=2;goto B57b24f;
case 0x57b251:c.instructions+=1;goto B57b251;
case 0x57b256:goto L57b256;
case 0x57b259:c.instructions+=2;goto B57b259;
case 0x57b25b:c.instructions+=1;goto B57b25b;
case 0x57b25d:goto L57b25d;
case 0x57b263:c.instructions+=4;goto B57b263;
case 0x57b269:c.instructions+=3;goto B57b269;
case 0x57b26c:c.instructions+=2;goto B57b26c;
case 0x57b26e:c.instructions+=1;goto B57b26e;
case 0x57b270:goto L57b270;
case 0x57b276:c.instructions+=3;goto B57b276;
case 0x57b27d:c.instructions+=2;goto B57b27d;
case 0x57b283:c.instructions+=1;goto B57b283;
case 0x57b28a:goto L57b28a;
case 0x57b290:c.instructions+=1;goto B57b290;
case 0x57b292:goto L57b292;
case 0x57b295:c.instructions+=2;goto B57b295;
case 0x57b297:c.instructions+=1;goto B57b297;
case 0x57b299:goto L57b299;
case 0x57b29b:c.instructions+=5;goto B57b29b;
case 0x57b29d:c.instructions+=4;goto B57b29d;
case 0x57b29f:c.instructions+=3;goto B57b29f;
case 0x57b2a4:c.instructions+=2;goto B57b2a4;
case 0x57b2a6:c.instructions+=1;goto B57b2a6;
case 0x57b2ab:goto L57b2ab;
case 0x57b2ad:goto L57b2ad;
case 0x57b2b0:c.instructions+=2;goto B57b2b0;
case 0x57b2b2:c.instructions+=1;goto B57b2b2;
case 0x57b2b4:goto L57b2b4;
case 0x57b2bb:c.instructions+=13;goto B57b2bb;
case 0x57b2be:c.instructions+=12;goto B57b2be;
case 0x57b2c1:c.instructions+=11;goto B57b2c1;
case 0x57b2c4:c.instructions+=10;goto B57b2c4;
case 0x57b2c6:c.instructions+=9;goto B57b2c6;
case 0x57b2c9:c.instructions+=8;goto B57b2c9;
case 0x57b2cb:c.instructions+=7;goto B57b2cb;
case 0x57b2cd:c.instructions+=6;goto B57b2cd;
case 0x57b2cf:c.instructions+=5;goto B57b2cf;
case 0x57b2d3:c.instructions+=4;goto B57b2d3;
case 0x57b2d4:c.instructions+=3;goto B57b2d4;
case 0x57b2d6:c.instructions+=2;goto B57b2d6;
case 0x57b2da:c.instructions+=1;goto B57b2da;
case 0x57b2df:goto L57b2df;
case 0x57b2e4:c.instructions+=1;goto B57b2e4;
case 0x57b2f0:goto L57b2f0;
case 0x57b2f5:c.instructions+=1;goto B57b2f5;
case 0x57b300:goto L57b300;
case 0x57b302:c.instructions+=4;goto B57b302;
case 0x57b309:c.instructions+=3;goto B57b309;
case 0x57b30c:c.instructions+=2;goto B57b30c;
case 0x57b30e:c.instructions+=1;goto B57b30e;
case 0x57b310:goto L57b310;
case 0x57b316:c.instructions+=4;goto B57b316;
case 0x57b31c:c.instructions+=3;goto B57b31c;
case 0x57b31f:c.instructions+=2;goto B57b31f;
case 0x57b321:c.instructions+=1;goto B57b321;
case 0x57b323:goto L57b323;
case 0x57b325:c.instructions+=1;goto B57b325;
case 0x57b32c:goto L57b32c;
case 0x57b332:c.instructions+=1;goto B57b332;
case 0x57b334:goto L57b334;
case 0x57b337:c.instructions+=2;goto B57b337;
case 0x57b339:c.instructions+=1;goto B57b339;
case 0x57b33b:goto L57b33b;
case 0x57b341:c.instructions+=4;goto B57b341;
case 0x57b347:c.instructions+=3;goto B57b347;
case 0x57b34a:c.instructions+=2;goto B57b34a;
case 0x57b34c:c.instructions+=1;goto B57b34c;
case 0x57b34e:goto L57b34e;
case 0x57b355:c.instructions+=2;goto B57b355;
case 0x57b357:c.instructions+=1;goto B57b357;
case 0x57b359:goto L57b359;
case 0x57b35f:c.instructions+=1;goto B57b35f;
case 0x57b361:goto L57b361;
case 0x57b364:c.instructions+=2;goto B57b364;
case 0x57b366:c.instructions+=1;goto B57b366;
case 0x57b368:goto L57b368;
case 0x57b36b:c.instructions+=6;goto B57b36b;
case 0x57b371:c.instructions+=5;goto B57b371;
case 0x57b377:c.instructions+=4;goto B57b377;
case 0x57b37a:c.instructions+=3;goto B57b37a;
case 0x57b37d:c.instructions+=2;goto B57b37d;
case 0x57b37f:c.instructions+=1;goto B57b37f;
case 0x57b381:goto L57b381;
case 0x57b388:c.instructions+=1;goto B57b388;
case 0x57b38f:goto L57b38f;
case 0x57b395:goto L57b395;
case 0x57b398:c.instructions+=2;goto B57b398;
case 0x57b39e:c.instructions+=1;goto B57b39e;
case 0x57b3a4:goto L57b3a4;
case 0x57b3aa:c.instructions+=2;goto B57b3aa;
case 0x57b3b0:c.instructions+=1;goto B57b3b0;
case 0x57b3b6:goto L57b3b6;
case 0x57b3b7:c.instructions+=5;goto B57b3b7;
case 0x57b3b9:c.instructions+=4;goto B57b3b9;
case 0x57b3ba:c.instructions+=3;goto B57b3ba;
case 0x57b3bb:c.instructions+=2;goto B57b3bb;
case 0x57b3bc:c.instructions+=1;goto B57b3bc;
case 0x57b3d0:goto L57b3d0;
case 0x57b3d3:c.instructions+=2;goto B57b3d3;
case 0x57b3d5:c.instructions+=1;goto B57b3d5;
case 0x57b3d7:goto L57b3d7;
case 0x57b3da:c.instructions+=2;goto B57b3da;
case 0x57b3dc:c.instructions+=1;goto B57b3dc;
case 0x57b3de:goto L57b3de;
case 0x57b3e1:c.instructions+=6;goto B57b3e1;
case 0x57b3e4:c.instructions+=5;goto B57b3e4;
case 0x57b3e5:c.instructions+=4;goto B57b3e5;
case 0x57b3e9:c.instructions+=3;goto B57b3e9;
case 0x57b3ea:c.instructions+=2;goto B57b3ea;
case 0x57b3eb:c.instructions+=1;goto B57b3eb;
case 0x57b3ed:goto L57b3ed;
case 0x57b3f0:c.instructions+=1;goto B57b3f0;
case 0x57b3f3:goto L57b3f3;
case 0x57b3f7:c.instructions+=4;goto B57b3f7;
case 0x57b3fa:c.instructions+=3;goto B57b3fa;
case 0x57b3fb:c.instructions+=2;goto B57b3fb;
case 0x57b3fc:c.instructions+=1;goto B57b3fc;
case 0x57b3fe:goto L57b3fe;
case 0x57b401:goto L57b401;
case 0x57b410:goto L57b410;
case 0x57b414:c.instructions+=17;goto B57b414;
case 0x57b418:c.instructions+=16;goto B57b418;
case 0x57b419:c.instructions+=15;goto B57b419;
case 0x57b41b:c.instructions+=14;goto B57b41b;
case 0x57b41f:c.instructions+=13;goto B57b41f;
case 0x57b420:c.instructions+=12;goto B57b420;
case 0x57b423:c.instructions+=11;goto B57b423;
case 0x57b427:c.instructions+=10;goto B57b427;
case 0x57b42a:c.instructions+=9;goto B57b42a;
case 0x57b42b:c.instructions+=8;goto B57b42b;
case 0x57b42e:c.instructions+=7;goto B57b42e;
case 0x57b430:c.instructions+=6;goto B57b430;
case 0x57b431:c.instructions+=5;goto B57b431;
case 0x57b434:c.instructions+=4;goto B57b434;
case 0x57b437:c.instructions+=3;goto B57b437;
case 0x57b43e:c.instructions+=2;goto B57b43e;
case 0x57b445:c.instructions+=1;goto B57b445;
case 0x57b44a:goto L57b44a;
case 0x57b44e:c.instructions+=17;goto B57b44e;
case 0x57b452:c.instructions+=16;goto B57b452;
case 0x57b455:c.instructions+=15;goto B57b455;
case 0x57b458:c.instructions+=14;goto B57b458;
case 0x57b45b:c.instructions+=13;goto B57b45b;
case 0x57b45e:c.instructions+=12;goto B57b45e;
case 0x57b461:c.instructions+=11;goto B57b461;
case 0x57b467:c.instructions+=10;goto B57b467;
case 0x57b46a:c.instructions+=9;goto B57b46a;
case 0x57b46d:c.instructions+=8;goto B57b46d;
case 0x57b470:c.instructions+=7;goto B57b470;
case 0x57b475:c.instructions+=6;goto B57b475;
case 0x57b478:c.instructions+=5;goto B57b478;
case 0x57b479:c.instructions+=4;goto B57b479;
case 0x57b47e:c.instructions+=3;goto B57b47e;
case 0x57b483:c.instructions+=2;goto B57b483;
case 0x57b485:c.instructions+=1;goto B57b485;
case 0x57b487:goto L57b487;
case 0x57b491:goto L57b491;
case 0x57b492:c.instructions+=2;goto B57b492;
case 0x57b493:c.instructions+=1;goto B57b493;
case 0x57b4a0:goto L57b4a0;
case 0x57b4a2:c.instructions+=8;goto B57b4a2;
case 0x57b4a7:c.instructions+=7;goto B57b4a7;
case 0x57b4ad:c.instructions+=6;goto B57b4ad;
case 0x57b4ae:c.instructions+=5;goto B57b4ae;
case 0x57b4b5:c.instructions+=4;goto B57b4b5;
case 0x57b4b6:c.instructions+=3;goto B57b4b6;
case 0x57b4bb:c.instructions+=2;goto B57b4bb;
case 0x57b4bc:c.instructions+=1;goto B57b4bc;
case 0x57b4c1:goto L57b4c1;
case 0x57b4c4:c.instructions+=4;goto B57b4c4;
case 0x57b4c8:c.instructions+=3;goto B57b4c8;
case 0x57b4ca:c.instructions+=2;goto B57b4ca;
case 0x57b4d2:c.instructions+=1;goto B57b4d2;
case 0x57b4d4:goto L57b4d4;
case 0x57b4d8:c.instructions+=13;goto B57b4d8;
case 0x57b4dc:c.instructions+=12;goto B57b4dc;
case 0x57b4dd:c.instructions+=11;goto B57b4dd;
case 0x57b4e1:c.instructions+=10;goto B57b4e1;
case 0x57b4e2:c.instructions+=9;goto B57b4e2;
case 0x57b4e6:c.instructions+=8;goto B57b4e6;
case 0x57b4e7:c.instructions+=7;goto B57b4e7;
case 0x57b4eb:c.instructions+=6;goto B57b4eb;
case 0x57b4ec:c.instructions+=5;goto B57b4ec;
case 0x57b4f0:c.instructions+=4;goto B57b4f0;
case 0x57b4f1:c.instructions+=3;goto B57b4f1;
case 0x57b4f2:c.instructions+=2;goto B57b4f2;
case 0x57b4f4:c.instructions+=1;goto B57b4f4;
case 0x57b4f9:goto L57b4f9;
case 0x57b4fb:goto L57b4fb;
case 0x57b4fd:goto L57b4fd;
case 0x57b503:c.instructions+=9;goto B57b503;
case 0x57b505:c.instructions+=8;goto B57b505;
case 0x57b50a:c.instructions+=7;goto B57b50a;
case 0x57b50d:c.instructions+=6;goto B57b50d;
case 0x57b511:c.instructions+=5;goto B57b511;
case 0x57b517:c.instructions+=4;goto B57b517;
case 0x57b51a:c.instructions+=3;goto B57b51a;
case 0x57b521:c.instructions+=2;goto B57b521;
case 0x57b524:c.instructions+=1;goto B57b524;
case 0x57b530:goto L57b530;
case 0x57b532:c.instructions+=8;goto B57b532;
case 0x57b537:c.instructions+=7;goto B57b537;
case 0x57b53d:c.instructions+=6;goto B57b53d;
case 0x57b53e:c.instructions+=5;goto B57b53e;
case 0x57b545:c.instructions+=4;goto B57b545;
case 0x57b546:c.instructions+=3;goto B57b546;
case 0x57b54b:c.instructions+=2;goto B57b54b;
case 0x57b54c:c.instructions+=1;goto B57b54c;
case 0x57b551:goto L57b551;
case 0x57b554:c.instructions+=4;goto B57b554;
case 0x57b558:c.instructions+=3;goto B57b558;
case 0x57b55a:c.instructions+=2;goto B57b55a;
case 0x57b562:c.instructions+=1;goto B57b562;
case 0x57b564:goto L57b564;
case 0x57b568:c.instructions+=13;goto B57b568;
case 0x57b56c:c.instructions+=12;goto B57b56c;
case 0x57b56d:c.instructions+=11;goto B57b56d;
case 0x57b571:c.instructions+=10;goto B57b571;
case 0x57b572:c.instructions+=9;goto B57b572;
case 0x57b576:c.instructions+=8;goto B57b576;
case 0x57b577:c.instructions+=7;goto B57b577;
case 0x57b57b:c.instructions+=6;goto B57b57b;
case 0x57b57c:c.instructions+=5;goto B57b57c;
case 0x57b580:c.instructions+=4;goto B57b580;
case 0x57b581:c.instructions+=3;goto B57b581;
case 0x57b582:c.instructions+=2;goto B57b582;
case 0x57b584:c.instructions+=1;goto B57b584;
case 0x57b589:goto L57b589;
case 0x57b58b:goto L57b58b;
case 0x57b58d:goto L57b58d;
case 0x57b591:c.instructions+=12;goto B57b591;
case 0x57b594:c.instructions+=11;goto B57b594;
case 0x57b59b:c.instructions+=10;goto B57b59b;
case 0x57b5a1:c.instructions+=9;goto B57b5a1;
case 0x57b5a3:c.instructions+=8;goto B57b5a3;
case 0x57b5a8:c.instructions+=7;goto B57b5a8;
case 0x57b5ab:c.instructions+=6;goto B57b5ab;
case 0x57b5af:c.instructions+=5;goto B57b5af;
case 0x57b5b5:c.instructions+=4;goto B57b5b5;
case 0x57b5b8:c.instructions+=3;goto B57b5b8;
case 0x57b5bf:c.instructions+=2;goto B57b5bf;
case 0x57b5c2:c.instructions+=1;goto B57b5c2;
case 0x57b5d0:goto L57b5d0;
case 0x57b5d1:c.instructions+=3;goto B57b5d1;
case 0x57b5d2:c.instructions+=2;goto B57b5d2;
case 0x57b5d7:c.instructions+=1;goto B57b5d7;
case 0x57b5dc:goto L57b5dc;
case 0x57b5de:c.instructions+=1;goto B57b5de;
case 0x57b5e0:goto L57b5e0;
case 0x57b5e6:c.instructions+=2;goto B57b5e6;
case 0x57b5e8:c.instructions+=1;goto B57b5e8;
case 0x57b5ea:goto L57b5ea;
case 0x57b5f0:goto L57b5f0;
case 0x57b5f3:c.instructions+=2;goto B57b5f3;
case 0x57b5f5:c.instructions+=1;goto B57b5f5;
case 0x57b5f7:goto L57b5f7;
case 0x57b5f9:c.instructions+=2;goto B57b5f9;
case 0x57b5fb:c.instructions+=1;goto B57b5fb;
case 0x57b5fd:goto L57b5fd;
case 0x57b5fe:c.instructions+=2;goto B57b5fe;
case 0x57b5ff:c.instructions+=1;goto B57b5ff;
case 0x57b600:goto L57b600;
case 0x57b603:c.instructions+=5;goto B57b603;
case 0x57b605:c.instructions+=4;goto B57b605;
case 0x57b607:c.instructions+=3;goto B57b607;
case 0x57b60a:c.instructions+=2;goto B57b60a;
case 0x57b60c:c.instructions+=1;goto B57b60c;
case 0x57b611:goto L57b611;
case 0x57b616:c.instructions+=3;goto B57b616;
case 0x57b617:c.instructions+=2;goto B57b617;
case 0x57b618:c.instructions+=1;goto B57b618;
case 0x57b61d:goto L57b61d;
case 0x57b620:c.instructions+=1;goto B57b620;
case 0x57b630:goto L57b630;
case 0x57b632:c.instructions+=1;goto B57b632;
case 0x57b637:goto L57b637;
case 0x57b638:c.instructions+=1;goto B57b638;
case 0x57b640:goto L57b640;
case 0x57b642:c.instructions+=8;goto B57b642;
case 0x57b647:c.instructions+=7;goto B57b647;
case 0x57b64d:c.instructions+=6;goto B57b64d;
case 0x57b64e:c.instructions+=5;goto B57b64e;
case 0x57b655:c.instructions+=4;goto B57b655;
case 0x57b656:c.instructions+=3;goto B57b656;
case 0x57b65b:c.instructions+=2;goto B57b65b;
case 0x57b65d:c.instructions+=1;goto B57b65d;
case 0x57b663:goto L57b663;
case 0x57b664:c.instructions+=2;goto B57b664;
case 0x57b669:c.instructions+=1;goto B57b669;
case 0x57b66e:goto L57b66e;
case 0x57b670:c.instructions+=5;goto B57b670;
case 0x57b673:c.instructions+=4;goto B57b673;
case 0x57b677:c.instructions+=3;goto B57b677;
case 0x57b679:c.instructions+=2;goto B57b679;
case 0x57b681:c.instructions+=1;goto B57b681;
case 0x57b683:goto L57b683;
case 0x57b688:c.instructions+=2;goto B57b688;
case 0x57b68a:c.instructions+=1;goto B57b68a;
case 0x57b68f:goto L57b68f;
case 0x57b695:c.instructions+=2;goto B57b695;
case 0x57b697:c.instructions+=1;goto B57b697;
case 0x57b699:goto L57b699;
case 0x57b69b:goto L57b69b;
case 0x57b69f:c.instructions+=6;goto B57b69f;
case 0x57b6a3:c.instructions+=5;goto B57b6a3;
case 0x57b6a4:c.instructions+=4;goto B57b6a4;
case 0x57b6a5:c.instructions+=3;goto B57b6a5;
case 0x57b6ad:c.instructions+=2;goto B57b6ad;
case 0x57b6b3:c.instructions+=1;goto B57b6b3;
case 0x57b6b8:goto L57b6b8;
case 0x57b6ba:c.instructions+=2;goto B57b6ba;
case 0x57b6bb:c.instructions+=1;goto B57b6bb;
case 0x57b6bd:goto L57b6bd;
case 0x57b6c2:c.instructions+=4;goto B57b6c2;
case 0x57b6c6:c.instructions+=3;goto B57b6c6;
case 0x57b6cd:c.instructions+=2;goto B57b6cd;
case 0x57b6d0:c.instructions+=1;goto B57b6d0;
case 0x57b6d1:goto L57b6d1;
case 0x57b6d7:c.instructions+=2;goto B57b6d7;
case 0x57b6d9:c.instructions+=1;goto B57b6d9;
case 0x57b6db:goto L57b6db;
case 0x57b6dd:c.instructions+=2;goto B57b6dd;
case 0x57b6df:c.instructions+=1;goto B57b6df;
case 0x57b6e1:goto L57b6e1;
case 0x57b6eb:goto L57b6eb;
case 0x57b6ef:c.instructions+=4;goto B57b6ef;
case 0x57b6f1:c.instructions+=3;goto B57b6f1;
case 0x57b6f8:c.instructions+=2;goto B57b6f8;
case 0x57b6fb:c.instructions+=1;goto B57b6fb;
case 0x57b700:goto L57b700;
case 0x57b701:c.instructions+=13;goto B57b701;
case 0x57b702:c.instructions+=12;goto B57b702;
case 0x57b703:c.instructions+=11;goto B57b703;
case 0x57b707:c.instructions+=10;goto B57b707;
case 0x57b70d:c.instructions+=9;goto B57b70d;
case 0x57b713:c.instructions+=8;goto B57b713;
case 0x57b719:c.instructions+=7;goto B57b719;
case 0x57b71a:c.instructions+=6;goto B57b71a;
case 0x57b720:c.instructions+=5;goto B57b720;
case 0x57b722:c.instructions+=4;goto B57b722;
case 0x57b724:c.instructions+=3;goto B57b724;
case 0x57b726:c.instructions+=2;goto B57b726;
case 0x57b728:c.instructions+=1;goto B57b728;
case 0x57b72a:goto L57b72a;
case 0x57b72c:goto L57b72c;
case 0x57b730:c.instructions+=2;goto B57b730;
case 0x57b732:c.instructions+=1;goto B57b732;
case 0x57b734:goto L57b734;
case 0x57b73a:c.instructions+=3;goto B57b73a;
case 0x57b740:c.instructions+=2;goto B57b740;
case 0x57b744:c.instructions+=1;goto B57b744;
case 0x57b746:goto L57b746;
case 0x57b74a:goto L57b74a;
case 0x57b750:c.instructions+=14;goto B57b750;
case 0x57b752:c.instructions+=13;goto B57b752;
case 0x57b754:c.instructions+=12;goto B57b754;
case 0x57b756:c.instructions+=11;goto B57b756;
case 0x57b75a:c.instructions+=10;goto B57b75a;
case 0x57b75e:c.instructions+=9;goto B57b75e;
case 0x57b761:c.instructions+=8;goto B57b761;
case 0x57b764:c.instructions+=7;goto B57b764;
case 0x57b766:c.instructions+=6;goto B57b766;
case 0x57b76c:c.instructions+=5;goto B57b76c;
case 0x57b76e:c.instructions+=4;goto B57b76e;
case 0x57b770:c.instructions+=3;goto B57b770;
case 0x57b772:c.instructions+=2;goto B57b772;
case 0x57b774:c.instructions+=1;goto B57b774;
case 0x57b776:goto L57b776;
case 0x57b778:goto L57b778;
case 0x57b77e:c.instructions+=19;goto B57b77e;
case 0x57b784:c.instructions+=18;goto B57b784;
case 0x57b78a:c.instructions+=17;goto B57b78a;
case 0x57b790:c.instructions+=16;goto B57b790;
case 0x57b796:c.instructions+=15;goto B57b796;
case 0x57b79a:c.instructions+=14;goto B57b79a;
case 0x57b79c:c.instructions+=13;goto B57b79c;
case 0x57b79e:c.instructions+=12;goto B57b79e;
case 0x57b7a1:c.instructions+=11;goto B57b7a1;
case 0x57b7a2:c.instructions+=10;goto B57b7a2;
case 0x57b7a4:c.instructions+=9;goto B57b7a4;
case 0x57b7a6:c.instructions+=8;goto B57b7a6;
case 0x57b7a8:c.instructions+=7;goto B57b7a8;
case 0x57b7aa:c.instructions+=6;goto B57b7aa;
case 0x57b7ae:c.instructions+=5;goto B57b7ae;
case 0x57b7af:c.instructions+=4;goto B57b7af;
case 0x57b7b0:c.instructions+=3;goto B57b7b0;
case 0x57b7b1:c.instructions+=2;goto B57b7b1;
case 0x57b7b3:c.instructions+=1;goto B57b7b3;
case 0x57b7b6:goto L57b7b6;
case 0x57b7ba:c.instructions+=9;goto B57b7ba;
case 0x57b7be:c.instructions+=8;goto B57b7be;
case 0x57b7c0:c.instructions+=7;goto B57b7c0;
case 0x57b7c2:c.instructions+=6;goto B57b7c2;
case 0x57b7c4:c.instructions+=5;goto B57b7c4;
case 0x57b7c5:c.instructions+=4;goto B57b7c5;
case 0x57b7c6:c.instructions+=3;goto B57b7c6;
case 0x57b7c7:c.instructions+=2;goto B57b7c7;
case 0x57b7c9:c.instructions+=1;goto B57b7c9;
case 0x57b7cc:goto L57b7cc;
case 0x57b7d2:c.instructions+=13;goto B57b7d2;
case 0x57b7d4:c.instructions+=12;goto B57b7d4;
case 0x57b7d5:c.instructions+=11;goto B57b7d5;
case 0x57b7d7:c.instructions+=10;goto B57b7d7;
case 0x57b7dd:c.instructions+=9;goto B57b7dd;
case 0x57b7e3:c.instructions+=8;goto B57b7e3;
case 0x57b7e5:c.instructions+=7;goto B57b7e5;
case 0x57b7e6:c.instructions+=6;goto B57b7e6;
case 0x57b7ec:c.instructions+=5;goto B57b7ec;
case 0x57b7ed:c.instructions+=4;goto B57b7ed;
case 0x57b7ee:c.instructions+=3;goto B57b7ee;
case 0x57b7f0:c.instructions+=2;goto B57b7f0;
case 0x57b7f1:c.instructions+=1;goto B57b7f1;
case 0x57b800:goto L57b800;
case 0x57b801:c.instructions+=2;goto B57b801;
case 0x57b802:c.instructions+=1;goto B57b802;
case 0x57b807:goto L57b807;
case 0x57b80b:c.instructions+=3;goto B57b80b;
case 0x57b80e:c.instructions+=2;goto B57b80e;
case 0x57b80f:c.instructions+=1;goto B57b80f;
case 0x57b814:goto L57b814;
case 0x57b817:c.instructions+=10;goto B57b817;
case 0x57b81a:c.instructions+=9;goto B57b81a;
case 0x57b81b:c.instructions+=8;goto B57b81b;
case 0x57b81d:c.instructions+=7;goto B57b81d;
case 0x57b81e:c.instructions+=6;goto B57b81e;
case 0x57b820:c.instructions+=5;goto B57b820;
case 0x57b823:c.instructions+=4;goto B57b823;
case 0x57b824:c.instructions+=3;goto B57b824;
case 0x57b825:c.instructions+=2;goto B57b825;
case 0x57b826:c.instructions+=1;goto B57b826;
case 0x57b82b:goto L57b82b;
case 0x57b82e:c.instructions+=5;goto B57b82e;
case 0x57b831:c.instructions+=4;goto B57b831;
case 0x57b834:c.instructions+=3;goto B57b834;
case 0x57b837:c.instructions+=2;goto B57b837;
case 0x57b839:c.instructions+=1;goto B57b839;
case 0x57b83b:goto L57b83b;
case 0x57b840:c.instructions+=3;goto B57b840;
case 0x57b841:c.instructions+=2;goto B57b841;
case 0x57b844:c.instructions+=1;goto B57b844;
case 0x57b849:goto L57b849;
case 0x57b84c:c.instructions+=3;goto B57b84c;
case 0x57b84d:c.instructions+=2;goto B57b84d;
case 0x57b84e:c.instructions+=1;goto B57b84e;
case 0x57b84f:goto L57b84f;
case 0x57b854:c.instructions+=3;goto B57b854;
case 0x57b855:c.instructions+=2;goto B57b855;
case 0x57b858:c.instructions+=1;goto B57b858;
case 0x57b85d:goto L57b85d;
case 0x57b860:c.instructions+=3;goto B57b860;
case 0x57b861:c.instructions+=2;goto B57b861;
case 0x57b862:c.instructions+=1;goto B57b862;
case 0x57b870:goto L57b870;
case 0x57b871:c.instructions+=2;goto B57b871;
case 0x57b873:c.instructions+=1;goto B57b873;
case 0x57b878:goto L57b878;
case 0x57b87a:c.instructions+=3;goto B57b87a;
case 0x57b87d:c.instructions+=2;goto B57b87d;
case 0x57b87f:c.instructions+=1;goto B57b87f;
case 0x57b881:goto L57b881;
case 0x57b886:c.instructions+=2;goto B57b886;
case 0x57b889:c.instructions+=1;goto B57b889;
case 0x57b88e:goto L57b88e;
case 0x57b891:c.instructions+=5;goto B57b891;
case 0x57b898:c.instructions+=4;goto B57b898;
case 0x57b89b:c.instructions+=3;goto B57b89b;
case 0x57b8a1:c.instructions+=2;goto B57b8a1;
case 0x57b8a2:c.instructions+=1;goto B57b8a2;
case 0x57b8a3:goto L57b8a3;
case 0x57b8a5:c.instructions+=3;goto B57b8a5;
case 0x57b8aa:c.instructions+=2;goto B57b8aa;
case 0x57b8ab:c.instructions+=1;goto B57b8ab;
case 0x57b8b0:goto L57b8b0;
case 0x57b8b1:c.instructions+=5;goto B57b8b1;
case 0x57b8b2:c.instructions+=4;goto B57b8b2;
case 0x57b8b4:c.instructions+=3;goto B57b8b4;
case 0x57b8b7:c.instructions+=2;goto B57b8b7;
case 0x57b8b9:c.instructions+=1;goto B57b8b9;
case 0x57b8bf:goto L57b8bf;
case 0x57b8c2:c.instructions+=11;goto B57b8c2;
case 0x57b8c6:c.instructions+=10;goto B57b8c6;
case 0x57b8c9:c.instructions+=9;goto B57b8c9;
case 0x57b8cd:c.instructions+=8;goto B57b8cd;
case 0x57b8d0:c.instructions+=7;goto B57b8d0;
case 0x57b8d3:c.instructions+=6;goto B57b8d3;
case 0x57b8d5:c.instructions+=5;goto B57b8d5;
case 0x57b8d6:c.instructions+=4;goto B57b8d6;
case 0x57b8d8:c.instructions+=3;goto B57b8d8;
case 0x57b8db:c.instructions+=2;goto B57b8db;
case 0x57b8df:c.instructions+=1;goto B57b8df;
case 0x57b8e5:goto L57b8e5;
case 0x57b8e6:c.instructions+=4;goto B57b8e6;
case 0x57b8e7:c.instructions+=3;goto B57b8e7;
case 0x57b8eb:c.instructions+=2;goto B57b8eb;
case 0x57b8ec:c.instructions+=1;goto B57b8ec;
case 0x57b8f0:goto L57b8f0;
case 0x57b8f3:c.instructions+=3;goto B57b8f3;
case 0x57b8f7:c.instructions+=2;goto B57b8f7;
case 0x57b8f8:c.instructions+=1;goto B57b8f8;
case 0x57b8fd:goto L57b8fd;
case 0x57b900:c.instructions+=3;goto B57b900;
case 0x57b903:c.instructions+=2;goto B57b903;
case 0x57b905:c.instructions+=1;goto B57b905;
case 0x57b907:goto L57b907;
case 0x57b909:c.instructions+=3;goto B57b909;
case 0x57b90b:c.instructions+=2;goto B57b90b;
case 0x57b90d:c.instructions+=1;goto B57b90d;
case 0x57b90f:goto L57b90f;
case 0x57b911:c.instructions+=1;goto B57b911;
case 0x57b913:goto L57b913;
case 0x57b916:c.instructions+=2;goto B57b916;
case 0x57b919:c.instructions+=1;goto B57b919;
case 0x57b91b:goto L57b91b;
case 0x57b91e:c.instructions+=1;goto B57b91e;
case 0x57b920:goto L57b920;
case 0x57b923:goto L57b923;
case 0x57b925:c.instructions+=4;goto B57b925;
case 0x57b928:c.instructions+=3;goto B57b928;
case 0x57b92c:c.instructions+=2;goto B57b92c;
case 0x57b92f:c.instructions+=1;goto B57b92f;
case 0x57b931:goto L57b931;
case 0x57b934:c.instructions+=1;goto B57b934;
case 0x57b936:goto L57b936;
case 0x57b939:goto L57b939;
case 0x57b93b:c.instructions+=1;goto B57b93b;
case 0x57b93d:goto L57b93d;
case 0x57b93e:c.instructions+=3;goto B57b93e;
case 0x57b93f:c.instructions+=2;goto B57b93f;
case 0x57b941:c.instructions+=1;goto B57b941;
case 0x57b943:goto L57b943;
case 0x57b947:c.instructions+=3;goto B57b947;
case 0x57b948:c.instructions+=2;goto B57b948;
case 0x57b94a:c.instructions+=1;goto B57b94a;
case 0x57b94f:goto L57b94f;
case 0x57b953:c.instructions+=8;goto B57b953;
case 0x57b957:c.instructions+=7;goto B57b957;
case 0x57b95a:c.instructions+=6;goto B57b95a;
case 0x57b95b:c.instructions+=5;goto B57b95b;
case 0x57b95e:c.instructions+=4;goto B57b95e;
case 0x57b960:c.instructions+=3;goto B57b960;
case 0x57b964:c.instructions+=2;goto B57b964;
case 0x57b968:c.instructions+=1;goto B57b968;
case 0x57b96a:goto L57b96a;
case 0x57b96b:c.instructions+=2;goto B57b96b;
case 0x57b96c:c.instructions+=1;goto B57b96c;
case 0x57b96d:goto L57b96d;
case 0x57b96e:c.instructions+=2;goto B57b96e;
case 0x57b96f:c.instructions+=1;goto B57b96f;
case 0x57b980:goto L57b980;
case 0x57b981:c.instructions+=7;goto B57b981;
case 0x57b985:c.instructions+=6;goto B57b985;
case 0x57b986:c.instructions+=5;goto B57b986;
case 0x57b98b:c.instructions+=4;goto B57b98b;
case 0x57b98d:c.instructions+=3;goto B57b98d;
case 0x57b98f:c.instructions+=2;goto B57b98f;
case 0x57b991:c.instructions+=1;goto B57b991;
case 0x57b996:goto L57b996;
case 0x57b997:c.instructions+=2;goto B57b997;
case 0x57b999:c.instructions+=1;goto B57b999;
case 0x57b99e:goto L57b99e;
case 0x57b9a1:c.instructions+=4;goto B57b9a1;
case 0x57b9a3:c.instructions+=3;goto B57b9a3;
case 0x57b9a7:c.instructions+=2;goto B57b9a7;
case 0x57b9a9:c.instructions+=1;goto B57b9a9;
case 0x57b9ab:goto L57b9ab;
case 0x57b9af:c.instructions+=4;goto B57b9af;
case 0x57b9b0:c.instructions+=3;goto B57b9b0;
case 0x57b9b1:c.instructions+=2;goto B57b9b1;
case 0x57b9b3:c.instructions+=1;goto B57b9b3;
case 0x57b9b8:goto L57b9b8;
case 0x57b9ba:goto L57b9ba;
case 0x57b9be:c.instructions+=7;goto B57b9be;
case 0x57b9c1:c.instructions+=6;goto B57b9c1;
case 0x57b9c4:c.instructions+=5;goto B57b9c4;
case 0x57b9c6:c.instructions+=4;goto B57b9c6;
case 0x57b9c7:c.instructions+=3;goto B57b9c7;
case 0x57b9c8:c.instructions+=2;goto B57b9c8;
case 0x57b9ca:c.instructions+=1;goto B57b9ca;
case 0x57b9cf:goto L57b9cf;
case 0x57b9d2:c.instructions+=2;goto B57b9d2;
case 0x57b9d4:c.instructions+=1;goto B57b9d4;
case 0x57b9d6:goto L57b9d6;
case 0x57b9d9:c.instructions+=2;goto B57b9d9;
case 0x57b9db:c.instructions+=1;goto B57b9db;
case 0x57b9dd:goto L57b9dd;
case 0x57b9df:c.instructions+=2;goto B57b9df;
case 0x57b9e1:c.instructions+=1;goto B57b9e1;
case 0x57b9e4:goto L57b9e4;
case 0x57b9e6:c.instructions+=1;goto B57b9e6;
case 0x57b9eb:goto L57b9eb;
case 0x57b9ec:c.instructions+=2;goto B57b9ec;
case 0x57b9ed:c.instructions+=1;goto B57b9ed;
case 0x57b9f0:goto L57b9f0;
case 0x57b9f1:c.instructions+=7;goto B57b9f1;
case 0x57b9f5:c.instructions+=6;goto B57b9f5;
case 0x57b9f6:c.instructions+=5;goto B57b9f6;
case 0x57b9fb:c.instructions+=4;goto B57b9fb;
case 0x57b9fd:c.instructions+=3;goto B57b9fd;
case 0x57b9ff:c.instructions+=2;goto B57b9ff;
case 0x57ba01:c.instructions+=1;goto B57ba01;
case 0x57ba06:goto L57ba06;
case 0x57ba07:c.instructions+=2;goto B57ba07;
case 0x57ba09:c.instructions+=1;goto B57ba09;
case 0x57ba0e:goto L57ba0e;
case 0x57ba11:c.instructions+=2;goto B57ba11;
case 0x57ba13:c.instructions+=1;goto B57ba13;
case 0x57ba15:goto L57ba15;
case 0x57ba16:c.instructions+=3;goto B57ba16;
case 0x57ba18:c.instructions+=2;goto B57ba18;
case 0x57ba1a:c.instructions+=1;goto B57ba1a;
case 0x57ba1c:goto L57ba1c;
case 0x57ba20:goto L57ba20;
case 0x57ba23:c.instructions+=4;goto B57ba23;
case 0x57ba26:c.instructions+=3;goto B57ba26;
case 0x57ba27:c.instructions+=2;goto B57ba27;
case 0x57ba29:c.instructions+=1;goto B57ba29;
case 0x57ba2e:goto L57ba2e;
case 0x57ba32:c.instructions+=3;goto B57ba32;
case 0x57ba33:c.instructions+=2;goto B57ba33;
case 0x57ba35:c.instructions+=1;goto B57ba35;
case 0x57ba37:goto L57ba37;
case 0x57ba38:goto L57ba38;
case 0x57ba3b:c.instructions+=2;goto B57ba3b;
case 0x57ba3d:c.instructions+=1;goto B57ba3d;
case 0x57ba3f:goto L57ba3f;
case 0x57ba42:c.instructions+=2;goto B57ba42;
case 0x57ba44:c.instructions+=1;goto B57ba44;
case 0x57ba46:goto L57ba46;
case 0x57ba48:c.instructions+=2;goto B57ba48;
case 0x57ba4a:c.instructions+=1;goto B57ba4a;
case 0x57ba4d:goto L57ba4d;
case 0x57ba4f:c.instructions+=1;goto B57ba4f;
case 0x57ba54:goto L57ba54;
case 0x57ba55:c.instructions+=2;goto B57ba55;
case 0x57ba56:c.instructions+=1;goto B57ba56;
case 0x57ba60:goto L57ba60;
case 0x57ba61:c.instructions+=7;goto B57ba61;
case 0x57ba62:c.instructions+=6;goto B57ba62;
case 0x57ba66:c.instructions+=5;goto B57ba66;
case 0x57ba6b:c.instructions+=4;goto B57ba6b;
case 0x57ba6d:c.instructions+=3;goto B57ba6d;
case 0x57ba6f:c.instructions+=2;goto B57ba6f;
case 0x57ba71:c.instructions+=1;goto B57ba71;
case 0x57ba76:goto L57ba76;
case 0x57ba79:c.instructions+=3;goto B57ba79;
case 0x57ba7b:c.instructions+=2;goto B57ba7b;
case 0x57ba7e:c.instructions+=1;goto B57ba7e;
case 0x57ba80:goto L57ba80;
case 0x57ba86:c.instructions+=5;goto B57ba86;
case 0x57ba8c:c.instructions+=4;goto B57ba8c;
case 0x57ba8d:c.instructions+=3;goto B57ba8d;
case 0x57ba90:c.instructions+=2;goto B57ba90;
case 0x57ba92:c.instructions+=1;goto B57ba92;
case 0x57ba94:goto L57ba94;
case 0x57ba96:c.instructions+=7;goto B57ba96;
case 0x57ba9d:c.instructions+=6;goto B57ba9d;
case 0x57baa0:c.instructions+=5;goto B57baa0;
case 0x57baa7:c.instructions+=4;goto B57baa7;
case 0x57baaa:c.instructions+=3;goto B57baaa;
case 0x57bab1:c.instructions+=2;goto B57bab1;
case 0x57bab4:c.instructions+=1;goto B57bab4;
case 0x57babb:goto L57babb;
case 0x57bac1:c.instructions+=2;goto B57bac1;
case 0x57bac2:c.instructions+=1;goto B57bac2;
case 0x57bac4:goto L57bac4;
case 0x57bac7:c.instructions+=2;goto B57bac7;
case 0x57bac9:c.instructions+=1;goto B57bac9;
case 0x57bacb:goto L57bacb;
case 0x57bacd:c.instructions+=5;goto B57bacd;
case 0x57bacf:c.instructions+=4;goto B57bacf;
case 0x57bad1:c.instructions+=3;goto B57bad1;
case 0x57bad2:c.instructions+=2;goto B57bad2;
case 0x57bad4:c.instructions+=1;goto B57bad4;
case 0x57bad9:goto L57bad9;
case 0x57badb:goto L57badb;
case 0x57bade:c.instructions+=2;goto B57bade;
case 0x57bae0:c.instructions+=1;goto B57bae0;
case 0x57bae2:goto L57bae2;
case 0x57bae5:c.instructions+=18;goto B57bae5;
case 0x57bae9:c.instructions+=17;goto B57bae9;
case 0x57baec:c.instructions+=16;goto B57baec;
case 0x57baef:c.instructions+=15;goto B57baef;
case 0x57baf1:c.instructions+=14;goto B57baf1;
case 0x57baf5:c.instructions+=13;goto B57baf5;
case 0x57baf8:c.instructions+=12;goto B57baf8;
case 0x57bafc:c.instructions+=11;goto B57bafc;
case 0x57bafe:c.instructions+=10;goto B57bafe;
case 0x57bb01:c.instructions+=9;goto B57bb01;
case 0x57bb03:c.instructions+=8;goto B57bb03;
case 0x57bb05:c.instructions+=7;goto B57bb05;
case 0x57bb07:c.instructions+=6;goto B57bb07;
case 0x57bb09:c.instructions+=5;goto B57bb09;
case 0x57bb0d:c.instructions+=4;goto B57bb0d;
case 0x57bb0e:c.instructions+=3;goto B57bb0e;
case 0x57bb10:c.instructions+=2;goto B57bb10;
case 0x57bb14:c.instructions+=1;goto B57bb14;
case 0x57bb19:goto L57bb19;
case 0x57bb1d:c.instructions+=5;goto B57bb1d;
case 0x57bb20:c.instructions+=4;goto B57bb20;
case 0x57bb23:c.instructions+=3;goto B57bb23;
case 0x57bb26:c.instructions+=2;goto B57bb26;
case 0x57bb28:c.instructions+=1;goto B57bb28;
case 0x57bb2a:goto L57bb2a;
case 0x57bb2c:c.instructions+=4;goto B57bb2c;
case 0x57bb2d:c.instructions+=3;goto B57bb2d;
case 0x57bb2e:c.instructions+=2;goto B57bb2e;
case 0x57bb2f:c.instructions+=1;goto B57bb2f;
case 0x57bb31:goto L57bb31;
case 0x57bb34:c.instructions+=2;goto B57bb34;
case 0x57bb36:c.instructions+=1;goto B57bb36;
case 0x57bb38:goto L57bb38;
case 0x57bb3a:c.instructions+=5;goto B57bb3a;
case 0x57bb3b:c.instructions+=4;goto B57bb3b;
case 0x57bb3c:c.instructions+=3;goto B57bb3c;
case 0x57bb3d:c.instructions+=2;goto B57bb3d;
case 0x57bb3f:c.instructions+=1;goto B57bb3f;
case 0x57bb44:goto L57bb44;
case 0x57bb45:c.instructions+=2;goto B57bb45;
case 0x57bb47:c.instructions+=1;goto B57bb47;
case 0x57bb4c:goto L57bb4c;
case 0x57bb4e:c.instructions+=1;goto B57bb4e;
case 0x57bb53:goto L57bb53;
case 0x57bb54:c.instructions+=2;goto B57bb54;
case 0x57bb55:c.instructions+=1;goto B57bb55;
case 0x57bb58:goto L57bb58;
case 0x57bb5b:c.instructions+=2;goto B57bb5b;
case 0x57bb5d:c.instructions+=1;goto B57bb5d;
case 0x57bb5f:goto L57bb5f;
case 0x57bb60:c.instructions+=4;goto B57bb60;
case 0x57bb61:c.instructions+=3;goto B57bb61;
case 0x57bb62:c.instructions+=2;goto B57bb62;
case 0x57bb64:c.instructions+=1;goto B57bb64;
case 0x57bb69:goto L57bb69;
case 0x57bb6b:c.instructions+=5;goto B57bb6b;
case 0x57bb6d:c.instructions+=4;goto B57bb6d;
case 0x57bb6f:c.instructions+=3;goto B57bb6f;
case 0x57bb73:c.instructions+=2;goto B57bb73;
case 0x57bb77:c.instructions+=1;goto B57bb77;
case 0x57bb78:goto L57bb78;
case 0x57bb7a:c.instructions+=1;goto B57bb7a;
case 0x57bb7f:goto L57bb7f;
case 0x57bb80:c.instructions+=2;goto B57bb80;
case 0x57bb82:c.instructions+=1;goto B57bb82;
case 0x57bb87:goto L57bb87;
case 0x57bb89:c.instructions+=1;goto B57bb89;
case 0x57bb8e:goto L57bb8e;
case 0x57bb8f:c.instructions+=2;goto B57bb8f;
case 0x57bb90:c.instructions+=1;goto B57bb90;
case 0x57bba0:goto L57bba0;
case 0x57bba1:c.instructions+=5;goto B57bba1;
case 0x57bba5:c.instructions+=4;goto B57bba5;
case 0x57bbaa:c.instructions+=3;goto B57bbaa;
case 0x57bbac:c.instructions+=2;goto B57bbac;
case 0x57bbae:c.instructions+=1;goto B57bbae;
case 0x57bbb3:goto L57bbb3;
case 0x57bbb8:c.instructions+=2;goto B57bbb8;
case 0x57bbba:c.instructions+=1;goto B57bbba;
case 0x57bbbf:goto L57bbbf;
case 0x57bbc4:c.instructions+=2;goto B57bbc4;
case 0x57bbc6:c.instructions+=1;goto B57bbc6;
case 0x57bbcb:goto L57bbcb;
case 0x57bbd0:c.instructions+=2;goto B57bbd0;
case 0x57bbd2:c.instructions+=1;goto B57bbd2;
case 0x57bbd7:goto L57bbd7;
case 0x57bbdc:c.instructions+=2;goto B57bbdc;
case 0x57bbde:c.instructions+=1;goto B57bbde;
case 0x57bbe3:goto L57bbe3;
case 0x57bbe8:c.instructions+=2;goto B57bbe8;
case 0x57bbea:c.instructions+=1;goto B57bbea;
case 0x57bbef:goto L57bbef;
case 0x57bbf4:c.instructions+=2;goto B57bbf4;
case 0x57bbf6:c.instructions+=1;goto B57bbf6;
case 0x57bbfb:goto L57bbfb;
case 0x57bc00:c.instructions+=2;goto B57bc00;
case 0x57bc02:c.instructions+=1;goto B57bc02;
case 0x57bc07:goto L57bc07;
case 0x57bc09:c.instructions+=2;goto B57bc09;
case 0x57bc0a:c.instructions+=1;goto B57bc0a;
case 0x57bc10:goto L57bc10;
case 0x57bc11:c.instructions+=4;goto B57bc11;
case 0x57bc13:c.instructions+=3;goto B57bc13;
case 0x57bc15:c.instructions+=2;goto B57bc15;
case 0x57bc17:c.instructions+=1;goto B57bc17;
case 0x57bc19:goto L57bc19;
case 0x57bc20:goto L57bc20;
case 0x57bc22:c.instructions+=7;goto B57bc22;
case 0x57bc25:c.instructions+=6;goto B57bc25;
case 0x57bc27:c.instructions+=5;goto B57bc27;
case 0x57bc28:c.instructions+=4;goto B57bc28;
case 0x57bc2b:c.instructions+=3;goto B57bc2b;
case 0x57bc30:c.instructions+=2;goto B57bc30;
case 0x57bc31:c.instructions+=1;goto B57bc31;
case 0x57bc36:goto L57bc36;
case 0x57bc38:c.instructions+=3;goto B57bc38;
case 0x57bc3b:c.instructions+=2;goto B57bc3b;
case 0x57bc3d:c.instructions+=1;goto B57bc3d;
case 0x57bc3f:goto L57bc3f;
case 0x57bc40:c.instructions+=1;goto B57bc40;
case 0x57bc50:goto L57bc50;
case 0x57bc51:c.instructions+=4;goto B57bc51;
case 0x57bc53:c.instructions+=3;goto B57bc53;
case 0x57bc55:c.instructions+=2;goto B57bc55;
case 0x57bc57:c.instructions+=1;goto B57bc57;
case 0x57bc59:goto L57bc59;
case 0x57bc60:goto L57bc60;
case 0x57bc62:c.instructions+=7;goto B57bc62;
case 0x57bc65:c.instructions+=6;goto B57bc65;
case 0x57bc67:c.instructions+=5;goto B57bc67;
case 0x57bc68:c.instructions+=4;goto B57bc68;
case 0x57bc6b:c.instructions+=3;goto B57bc6b;
case 0x57bc70:c.instructions+=2;goto B57bc70;
case 0x57bc71:c.instructions+=1;goto B57bc71;
case 0x57bc76:goto L57bc76;
case 0x57bc78:c.instructions+=3;goto B57bc78;
case 0x57bc7b:c.instructions+=2;goto B57bc7b;
case 0x57bc7d:c.instructions+=1;goto B57bc7d;
case 0x57bc7f:goto L57bc7f;
case 0x57bc80:c.instructions+=1;goto B57bc80;
case 0x57bc90:goto L57bc90;
case 0x57bc91:c.instructions+=4;goto B57bc91;
case 0x57bc93:c.instructions+=3;goto B57bc93;
case 0x57bc95:c.instructions+=2;goto B57bc95;
case 0x57bc97:c.instructions+=1;goto B57bc97;
case 0x57bc99:goto L57bc99;
case 0x57bca0:goto L57bca0;
case 0x57bca2:c.instructions+=7;goto B57bca2;
case 0x57bca5:c.instructions+=6;goto B57bca5;
case 0x57bca7:c.instructions+=5;goto B57bca7;
case 0x57bca8:c.instructions+=4;goto B57bca8;
case 0x57bcab:c.instructions+=3;goto B57bcab;
case 0x57bcb0:c.instructions+=2;goto B57bcb0;
case 0x57bcb1:c.instructions+=1;goto B57bcb1;
case 0x57bcb6:goto L57bcb6;
case 0x57bcb8:c.instructions+=3;goto B57bcb8;
case 0x57bcbb:c.instructions+=2;goto B57bcbb;
case 0x57bcbd:c.instructions+=1;goto B57bcbd;
case 0x57bcbf:goto L57bcbf;
case 0x57bcc0:c.instructions+=1;goto B57bcc0;
case 0x57bcd0:goto L57bcd0;
case 0x57bcd2:c.instructions+=3;goto B57bcd2;
case 0x57bcd4:c.instructions+=2;goto B57bcd4;
case 0x57bcd7:c.instructions+=1;goto B57bcd7;
case 0x57bce0:goto L57bce0;
case 0x57bce1:c.instructions+=3;goto B57bce1;
case 0x57bce5:c.instructions+=2;goto B57bce5;
case 0x57bceb:c.instructions+=1;goto B57bceb;
case 0x57bced:goto L57bced;
case 0x57bcf0:c.instructions+=5;goto B57bcf0;
case 0x57bcf1:c.instructions+=4;goto B57bcf1;
case 0x57bcf4:c.instructions+=3;goto B57bcf4;
case 0x57bcf8:c.instructions+=2;goto B57bcf8;
case 0x57bcfa:c.instructions+=1;goto B57bcfa;
case 0x57bcfc:goto L57bcfc;
case 0x57bcfd:c.instructions+=2;goto B57bcfd;
case 0x57bd02:c.instructions+=1;goto B57bd02;
case 0x57bd07:goto L57bd07;
case 0x57bd09:c.instructions+=1;goto B57bd09;
case 0x57bd10:goto L57bd10;
case 0x57bd15:c.instructions+=5;goto B57bd15;
case 0x57bd18:c.instructions+=4;goto B57bd18;
case 0x57bd1b:c.instructions+=3;goto B57bd1b;
case 0x57bd1d:c.instructions+=2;goto B57bd1d;
case 0x57bd1f:c.instructions+=1;goto B57bd1f;
case 0x57bd21:goto L57bd21;
case 0x57bd24:c.instructions+=2;goto B57bd24;
case 0x57bd26:c.instructions+=1;goto B57bd26;
case 0x57bd28:goto L57bd28;
case 0x57bd2a:c.instructions+=2;goto B57bd2a;
case 0x57bd2c:c.instructions+=1;goto B57bd2c;
case 0x57bd2e:goto L57bd2e;
case 0x57bd30:goto L57bd30;
case 0x57bd32:c.instructions+=5;goto B57bd32;
case 0x57bd35:c.instructions+=4;goto B57bd35;
case 0x57bd37:c.instructions+=3;goto B57bd37;
case 0x57bd38:c.instructions+=2;goto B57bd38;
case 0x57bd3b:c.instructions+=1;goto B57bd3b;
case 0x57bd40:goto L57bd40;
case 0x57bd43:goto L57bd43;
case 0x57bd46:c.instructions+=5;goto B57bd46;
case 0x57bd49:c.instructions+=4;goto B57bd49;
case 0x57bd4d:c.instructions+=3;goto B57bd4d;
case 0x57bd51:c.instructions+=2;goto B57bd51;
case 0x57bd53:c.instructions+=1;goto B57bd53;
case 0x57bd55:goto L57bd55;
case 0x57bd56:goto L57bd56;
case 0x57bd57:c.instructions+=3;goto B57bd57;
case 0x57bd5c:c.instructions+=2;goto B57bd5c;
case 0x57bd5d:c.instructions+=1;goto B57bd5d;
case 0x57bd5e:goto L57bd5e;
case 0x57bd60:c.instructions+=2;goto B57bd60;
case 0x57bd61:c.instructions+=1;goto B57bd61;
case 0x57bd70:goto L57bd70;
case 0x57bd74:c.instructions+=9;goto B57bd74;
case 0x57bd75:c.instructions+=8;goto B57bd75;
case 0x57bd77:c.instructions+=7;goto B57bd77;
case 0x57bd7b:c.instructions+=6;goto B57bd7b;
case 0x57bd81:c.instructions+=5;goto B57bd81;
case 0x57bd87:c.instructions+=4;goto B57bd87;
case 0x57bd8d:c.instructions+=3;goto B57bd8d;
case 0x57bd93:c.instructions+=2;goto B57bd93;
case 0x57bd95:c.instructions+=1;goto B57bd95;
case 0x57bd97:goto L57bd97;
case 0x57bd9a:c.instructions+=7;goto B57bd9a;
case 0x57bd9c:c.instructions+=6;goto B57bd9c;
case 0x57bd9f:c.instructions+=5;goto B57bd9f;
case 0x57bda0:c.instructions+=4;goto B57bda0;
case 0x57bda6:c.instructions+=3;goto B57bda6;
case 0x57bda8:c.instructions+=2;goto B57bda8;
case 0x57bdaa:c.instructions+=1;goto B57bdaa;
case 0x57bdac:goto L57bdac;
case 0x57bdaf:c.instructions+=2;goto B57bdaf;
case 0x57bdb5:c.instructions+=1;goto B57bdb5;
case 0x57bdb7:goto L57bdb7;
case 0x57bdba:goto L57bdba;
case 0x57bdbc:c.instructions+=1;goto B57bdbc;
case 0x57bdbe:goto L57bdbe;
case 0x57bdc1:goto L57bdc1;
case 0x57bdc2:c.instructions+=2;goto B57bdc2;
case 0x57bdc3:c.instructions+=1;goto B57bdc3;
case 0x57bdc8:goto L57bdc8;
case 0x57bdcb:c.instructions+=1;goto B57bdcb;
case 0x57bdd1:goto L57bdd1;
case 0x57bdd2:goto L57bdd2;
case 0x57bdd8:c.instructions+=2;goto B57bdd8;
case 0x57bdda:c.instructions+=1;goto B57bdda;
case 0x57bddc:goto L57bddc;
case 0x57bde2:c.instructions+=12;goto B57bde2;
case 0x57bde5:c.instructions+=11;goto B57bde5;
case 0x57bde6:c.instructions+=10;goto B57bde6;
case 0x57bdeb:c.instructions+=9;goto B57bdeb;
case 0x57bdec:c.instructions+=8;goto B57bdec;
case 0x57bded:c.instructions+=7;goto B57bded;
case 0x57bdee:c.instructions+=6;goto B57bdee;
case 0x57bdf1:c.instructions+=5;goto B57bdf1;
case 0x57bdf7:c.instructions+=4;goto B57bdf7;
case 0x57bdfd:c.instructions+=3;goto B57bdfd;
case 0x57bdfe:c.instructions+=2;goto B57bdfe;
case 0x57bdff:c.instructions+=1;goto B57bdff;
case 0x57be04:goto L57be04;
case 0x57be05:c.instructions+=1;goto B57be05;
case 0x57be0a:goto L57be0a;
case 0x57be0d:c.instructions+=2;goto B57be0d;
case 0x57be0f:c.instructions+=1;goto B57be0f;
case 0x57be11:goto L57be11;
case 0x57be18:c.instructions+=1;goto B57be18;
case 0x57be1f:goto L57be1f;
case 0x57be20:c.instructions+=1;goto B57be20;
case 0x57be30:goto L57be30;
case 0x57be31:c.instructions+=7;goto B57be31;
case 0x57be32:c.instructions+=6;goto B57be32;
case 0x57be34:c.instructions+=5;goto B57be34;
case 0x57be37:c.instructions+=4;goto B57be37;
case 0x57be3d:c.instructions+=3;goto B57be3d;
case 0x57be3f:c.instructions+=2;goto B57be3f;
case 0x57be41:c.instructions+=1;goto B57be41;
case 0x57be47:goto L57be47;
case 0x57be4d:c.instructions+=1;goto B57be4d;
case 0x57be4f:goto L57be4f;
case 0x57be52:c.instructions+=3;goto B57be52;
case 0x57be53:c.instructions+=2;goto B57be53;
case 0x57be55:c.instructions+=1;goto B57be55;
case 0x57be57:goto L57be57;
case 0x57be5e:c.instructions+=5;goto B57be5e;
case 0x57be5f:c.instructions+=4;goto B57be5f;
case 0x57be65:c.instructions+=3;goto B57be65;
case 0x57be69:c.instructions+=2;goto B57be69;
case 0x57be6e:c.instructions+=1;goto B57be6e;
case 0x57be73:goto L57be73;
case 0x57be75:c.instructions+=1;goto B57be75;
case 0x57be77:goto L57be77;
case 0x57be78:c.instructions+=2;goto B57be78;
case 0x57be7b:c.instructions+=1;goto B57be7b;
case 0x57be80:goto L57be80;
case 0x57be85:c.instructions+=13;goto B57be85;
case 0x57be88:c.instructions+=12;goto B57be88;
case 0x57be8d:c.instructions+=11;goto B57be8d;
case 0x57be90:c.instructions+=10;goto B57be90;
case 0x57be91:c.instructions+=9;goto B57be91;
case 0x57be96:c.instructions+=8;goto B57be96;
case 0x57be97:c.instructions+=7;goto B57be97;
case 0x57be9a:c.instructions+=6;goto B57be9a;
case 0x57be9b:c.instructions+=5;goto B57be9b;
case 0x57bea0:c.instructions+=4;goto B57bea0;
case 0x57bea1:c.instructions+=3;goto B57bea1;
case 0x57bea4:c.instructions+=2;goto B57bea4;
case 0x57bea5:c.instructions+=1;goto B57bea5;
case 0x57beaa:goto L57beaa;
case 0x57beac:c.instructions+=1;goto B57beac;
case 0x57beae:goto L57beae;
case 0x57beb0:c.instructions+=1;goto B57beb0;
case 0x57beb1:goto L57beb1;
case 0x57beb8:c.instructions+=8;goto B57beb8;
case 0x57beb9:c.instructions+=7;goto B57beb9;
case 0x57bebc:c.instructions+=6;goto B57bebc;
case 0x57bebd:c.instructions+=5;goto B57bebd;
case 0x57bec0:c.instructions+=4;goto B57bec0;
case 0x57bec3:c.instructions+=3;goto B57bec3;
case 0x57bec4:c.instructions+=2;goto B57bec4;
case 0x57bec5:c.instructions+=1;goto B57bec5;
case 0x57bec6:goto L57bec6;
case 0x57bec9:c.instructions+=1;goto B57bec9;
case 0x57becb:goto L57becb;
case 0x57bed1:c.instructions+=4;goto B57bed1;
case 0x57bed4:c.instructions+=3;goto B57bed4;
case 0x57bed5:c.instructions+=2;goto B57bed5;
case 0x57bed6:c.instructions+=1;goto B57bed6;
case 0x57bed7:goto L57bed7;
case 0x57beda:c.instructions+=1;goto B57beda;
case 0x57bedc:goto L57bedc;
case 0x57bedf:c.instructions+=1;goto B57bedf;
case 0x57bee5:goto L57bee5;
case 0x57beec:c.instructions+=3;goto B57beec;
case 0x57beed:c.instructions+=2;goto B57beed;
case 0x57beee:c.instructions+=1;goto B57beee;
case 0x57beef:goto L57beef;
case 0x57bef2:c.instructions+=1;goto B57bef2;
case 0x57bef8:goto L57bef8;
case 0x57befb:c.instructions+=1;goto B57befb;
case 0x57bf01:goto L57bf01;
case 0x57bf04:c.instructions+=5;goto B57bf04;
case 0x57bf07:c.instructions+=4;goto B57bf07;
case 0x57bf0c:c.instructions+=3;goto B57bf0c;
case 0x57bf0e:c.instructions+=2;goto B57bf0e;
case 0x57bf11:c.instructions+=1;goto B57bf11;
case 0x57bf16:goto L57bf16;
case 0x57bf1b:c.instructions+=2;goto B57bf1b;
case 0x57bf1d:c.instructions+=1;goto B57bf1d;
case 0x57bf22:goto L57bf22;
case 0x57bf27:c.instructions+=2;goto B57bf27;
case 0x57bf29:c.instructions+=1;goto B57bf29;
case 0x57bf2e:goto L57bf2e;
case 0x57bf33:c.instructions+=2;goto B57bf33;
case 0x57bf35:c.instructions+=1;goto B57bf35;
case 0x57bf3a:goto L57bf3a;
case 0x57bf3e:c.instructions+=31;goto B57bf3e;
case 0x57bf44:c.instructions+=30;goto B57bf44;
case 0x57bf4a:c.instructions+=29;goto B57bf4a;
case 0x57bf4e:c.instructions+=28;goto B57bf4e;
case 0x57bf52:c.instructions+=27;goto B57bf52;
case 0x57bf56:c.instructions+=26;goto B57bf56;
case 0x57bf5a:c.instructions+=25;goto B57bf5a;
case 0x57bf5e:c.instructions+=24;goto B57bf5e;
case 0x57bf62:c.instructions+=23;goto B57bf62;
case 0x57bf66:c.instructions+=22;goto B57bf66;
case 0x57bf6a:c.instructions+=21;goto B57bf6a;
case 0x57bf6e:c.instructions+=20;goto B57bf6e;
case 0x57bf72:c.instructions+=19;goto B57bf72;
case 0x57bf76:c.instructions+=18;goto B57bf76;
case 0x57bf7a:c.instructions+=17;goto B57bf7a;
case 0x57bf7e:c.instructions+=16;goto B57bf7e;
case 0x57bf82:c.instructions+=15;goto B57bf82;
case 0x57bf86:c.instructions+=14;goto B57bf86;
case 0x57bf8a:c.instructions+=13;goto B57bf8a;
case 0x57bf8e:c.instructions+=12;goto B57bf8e;
case 0x57bf92:c.instructions+=11;goto B57bf92;
case 0x57bf96:c.instructions+=10;goto B57bf96;
case 0x57bf9c:c.instructions+=9;goto B57bf9c;
case 0x57bf9f:c.instructions+=8;goto B57bf9f;
case 0x57bfa0:c.instructions+=7;goto B57bfa0;
case 0x57bfa3:c.instructions+=6;goto B57bfa3;
case 0x57bfa6:c.instructions+=5;goto B57bfa6;
case 0x57bfad:c.instructions+=4;goto B57bfad;
case 0x57bfb0:c.instructions+=3;goto B57bfb0;
case 0x57bfb1:c.instructions+=2;goto B57bfb1;
case 0x57bfb2:c.instructions+=1;goto B57bfb2;
case 0x57bfb3:goto L57bfb3;
case 0x57bfb6:c.instructions+=1;goto B57bfb6;
case 0x57bfb8:goto L57bfb8;
case 0x57bfbb:c.instructions+=2;goto B57bfbb;
case 0x57bfbe:c.instructions+=1;goto B57bfbe;
case 0x57bfc0:goto L57bfc0;
case 0x57bfc6:c.instructions+=2;goto B57bfc6;
case 0x57bfc9:c.instructions+=1;goto B57bfc9;
case 0x57bfcb:goto L57bfcb;
case 0x57bfd5:c.instructions+=1;goto B57bfd5;
case 0x57bfd8:goto L57bfd8;
case 0x57bfd9:c.instructions+=2;goto B57bfd9;
case 0x57bfda:c.instructions+=1;goto B57bfda;
case 0x57bfe0:goto L57bfe0;
case 0x57bfe1:c.instructions+=8;goto B57bfe1;
case 0x57bfe5:c.instructions+=7;goto B57bfe5;
case 0x57bfe6:c.instructions+=6;goto B57bfe6;
case 0x57bfe9:c.instructions+=5;goto B57bfe9;
case 0x57bfeb:c.instructions+=4;goto B57bfeb;
case 0x57bff0:c.instructions+=3;goto B57bff0;
case 0x57bff1:c.instructions+=2;goto B57bff1;
case 0x57bff7:c.instructions+=1;goto B57bff7;
case 0x57bffc:goto L57bffc;
case 0x57bfff:c.instructions+=1;goto B57bfff;
default:missing_instruction(c.pc);}
B57b002:L57b002:{c.instructions+=4;NFSU2_TR(0x57b002);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B57b004:{NFSU2_TR(0x57b004);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57b006:{NFSU2_TR(0x57b006);
__builtin_memmove((R+12),(R+4),4);
}
B57b008:{NFSU2_TR(0x57b008);
if(r1(R+518)){{goto L57b036;}}
}
B57b00a:L57b00a:{c.instructions+=1;NFSU2_TR(0x57b00a);
__builtin_memmove((R+12),(R+12),4);
}
B57b010:L57b010:{c.instructions+=4;NFSU2_TR(0x57b010);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B57b013:{NFSU2_TR(0x57b013);
u8 U[4];
w4(U+0,u32(0x7a0844ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b018:{NFSU2_TR(0x57b018);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b019:{NFSU2_TR(0x57b019);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57b01eull));
TAIL_STATIC(0x43dc30u,43d);
}
B57b01e:L57b01e:{c.instructions+=3;NFSU2_TR(0x57b01e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B57b021:{NFSU2_TR(0x57b021);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57b023:{NFSU2_TR(0x57b023);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57b02a;}}
}
B57b025:L57b025:{c.instructions+=2;NFSU2_TR(0x57b025);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57b027:{NFSU2_TR(0x57b027);
if(r1(R+518)){{goto L57b07e;}}
}
B57b029:L57b029:{c.instructions+=1;NFSU2_TR(0x57b029);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
}
B57b02a:L57b02a:{c.instructions+=3;NFSU2_TR(0x57b02a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B57b02c:{NFSU2_TR(0x57b02c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57b02e:{NFSU2_TR(0x57b02e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57b010u);}goto L57b010;}}
}
B57b030:L57b030:{c.instructions+=1;NFSU2_TR(0x57b030);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B57b036:L57b036:{c.instructions+=4;NFSU2_TR(0x57b036);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b038:{NFSU2_TR(0x57b038);
u8 U[4];
w4(U+0,u32(0x7a08c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b03d:{NFSU2_TR(0x57b03d);
__builtin_memmove((R+24),(R+4),4);
}
B57b03f:{NFSU2_TR(0x57b03f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57b044ull));
TAIL_STATIC(0x578fd0u,578);
}
B57b044:L57b044:{c.instructions+=3;NFSU2_TR(0x57b044);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B57b046:{NFSU2_TR(0x57b046);
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
B57b048:{NFSU2_TR(0x57b048);
if(r1(R+518)){{goto L57b06a;}}
}
B57b04a:L57b04a:{c.instructions+=10;NFSU2_TR(0x57b04a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B57b04c:{NFSU2_TR(0x57b04c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57b04f:{NFSU2_TR(0x57b04f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B57b051:{NFSU2_TR(0x57b051);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b054:{NFSU2_TR(0x57b054);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57b05a:{NFSU2_TR(0x57b05a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((R+4),(U+0),4);
}
B57b060:{NFSU2_TR(0x57b060);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B57b062:{NFSU2_TR(0x57b062);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b065:{NFSU2_TR(0x57b065);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b068:{NFSU2_TR(0x57b068);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B57b06a:L57b06a:{c.instructions+=10;NFSU2_TR(0x57b06a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57b06e:{NFSU2_TR(0x57b06e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b071:{NFSU2_TR(0x57b071);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b074:{NFSU2_TR(0x57b074);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57b075:{NFSU2_TR(0x57b075);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57b076:{NFSU2_TR(0x57b076);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57b077:{NFSU2_TR(0x57b077);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B57b07b:{NFSU2_TR(0x57b07b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57b07c:{NFSU2_TR(0x57b07c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B57b07d:{NFSU2_TR(0x57b07d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57b07e:L57b07e:{c.instructions+=2;NFSU2_TR(0x57b07e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57b080:{NFSU2_TR(0x57b080);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57b030u);}goto L57b030;}}
}
B57b082:L57b082:{c.instructions+=11;NFSU2_TR(0x57b082);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57b084:{NFSU2_TR(0x57b084);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57b087:{NFSU2_TR(0x57b087);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B57b089:{NFSU2_TR(0x57b089);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b08c:{NFSU2_TR(0x57b08c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57b092:{NFSU2_TR(0x57b092);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x90ull))));
__builtin_memmove((R+0),(U+0),4);
}
B57b098:{NFSU2_TR(0x57b098);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B57b09a:{NFSU2_TR(0x57b09a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b09d:{NFSU2_TR(0x57b09d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b0a0:{NFSU2_TR(0x57b0a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B57b0a2:{NFSU2_TR(0x57b0a2);
TAIL_STATIC(0x57aff0u,57a);
}
B57b0b0:L57b0b0:{c.instructions+=12;NFSU2_TR(0x57b0b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B57b0b3:{NFSU2_TR(0x57b0b3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b0b4:{NFSU2_TR(0x57b0b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B57b0b8:{NFSU2_TR(0x57b0b8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b0b9:{NFSU2_TR(0x57b0b9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b0ba:{NFSU2_TR(0x57b0ba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b0bb:{NFSU2_TR(0x57b0bb);
__builtin_memmove((R+28),(R+4),4);
}
B57b0bd:{NFSU2_TR(0x57b0bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57b0c3:{NFSU2_TR(0x57b0c3);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B57b0c5:{NFSU2_TR(0x57b0c5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57b0c7:{NFSU2_TR(0x57b0c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b0cb:{NFSU2_TR(0x57b0cb);
if(r1(R+518)){{goto L57b171;}}
}
B57b0d1:L57b0d1:{c.instructions+=2;NFSU2_TR(0x57b0d1);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B57b0d7:{NFSU2_TR(0x57b0d7);
if(r1(R+518)){{goto L57b0f1;}}
}
B57b0d9:L57b0d9:{c.instructions+=2;NFSU2_TR(0x57b0d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b0df:{NFSU2_TR(0x57b0df);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b0e5:L57b0e5:{c.instructions+=7;NFSU2_TR(0x57b0e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57b0e6:{NFSU2_TR(0x57b0e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57b0e7:{NFSU2_TR(0x57b0e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57b0e8:{NFSU2_TR(0x57b0e8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B57b0ea:{NFSU2_TR(0x57b0ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57b0eb:{NFSU2_TR(0x57b0eb);
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
B57b0ee:{NFSU2_TR(0x57b0ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57b0f1:L57b0f1:{c.instructions+=6;NFSU2_TR(0x57b0f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57b0f7:{NFSU2_TR(0x57b0f7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B57b0f8:{NFSU2_TR(0x57b0f8);
__builtin_memmove((R+0),(R+4),4);
}
B57b0fa:{NFSU2_TR(0x57b0fa);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x20ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57b0fd:{NFSU2_TR(0x57b0fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b103:{NFSU2_TR(0x57b103);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57b0e5u);}goto L57b0e5;}}
}
B57b105:L57b105:{c.instructions+=3;NFSU2_TR(0x57b105);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b10b:{NFSU2_TR(0x57b10b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57b10e:{NFSU2_TR(0x57b10e);
__builtin_memmove((R+28),(R+28),4);
}
B57b110:L57b110:{c.instructions+=4;NFSU2_TR(0x57b110);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b111:{NFSU2_TR(0x57b111);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b112:{NFSU2_TR(0x57b112);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b113:{NFSU2_TR(0x57b113);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57b118ull));
TAIL_STATIC(0x572210u,572);
}
B57b118:L57b118:{c.instructions+=5;NFSU2_TR(0x57b118);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B57b11b:{NFSU2_TR(0x57b11b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B57b11c:{NFSU2_TR(0x57b11c);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x2cull))));
}
B57b11f:{NFSU2_TR(0x57b11f);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B57b122:{NFSU2_TR(0x57b122);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57b110u);}goto L57b110;}}
}
B57b124:L57b124:{c.instructions+=3;NFSU2_TR(0x57b124);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B57b126:{NFSU2_TR(0x57b126);
__builtin_memmove((R+4),(R+28),4);
}
B57b128:{NFSU2_TR(0x57b128);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57b12dull));
TAIL_STATIC(0x502fd0u,502);
}
B57b12d:L57b12d:{c.instructions+=3;NFSU2_TR(0x57b12d);
__builtin_memmove((R+12),(R+0),4);
}
B57b12f:{NFSU2_TR(0x57b12f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57b131:{NFSU2_TR(0x57b131);
if(r1(R+518)){{goto L57b171;}}
}
B57b133:L57b133:{c.instructions+=1;NFSU2_TR(0x57b133);
{goto L57b140;}
}
B57b140:L57b140:{c.instructions+=7;NFSU2_TR(0x57b140);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57b146:{NFSU2_TR(0x57b146);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57b14c:{NFSU2_TR(0x57b14c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57b14f:{NFSU2_TR(0x57b14f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b150:{NFSU2_TR(0x57b150);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b151:{NFSU2_TR(0x57b151);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b152:{NFSU2_TR(0x57b152);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57b157ull));
TAIL_STATIC(0x572120u,572);
}
B57b157:L57b157:{c.instructions+=7;NFSU2_TR(0x57b157);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b15a:{NFSU2_TR(0x57b15a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57b161:{NFSU2_TR(0x57b161);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57b168:{NFSU2_TR(0x57b168);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B57b16a:{NFSU2_TR(0x57b16a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B57b16d:{NFSU2_TR(0x57b16d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57b16f:{NFSU2_TR(0x57b16f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57b140u);}goto L57b140;}}
}
B57b171:L57b171:{c.instructions+=3;NFSU2_TR(0x57b171);
__builtin_memmove((R+0),gp(0x8650b8),4);
}
B57b176:{NFSU2_TR(0x57b176);
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
B57b178:{NFSU2_TR(0x57b178);
if(r1(R+518)){{goto L57b191;}}
}
B57b17a:L57b17a:{c.instructions+=2;NFSU2_TR(0x57b17a);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
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
B57b17d:{NFSU2_TR(0x57b17d);
if(r1(R+518)){{goto L57b191;}}
}
B57b17f:L57b17f:{c.instructions+=4;NFSU2_TR(0x57b17f);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B57b184:{NFSU2_TR(0x57b184);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x7ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x7ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B57b187:{NFSU2_TR(0x57b187);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57b18f:{NFSU2_TR(0x57b18f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57b199;}}
}
B57b191:L57b191:{c.instructions+=1;NFSU2_TR(0x57b191);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57b199:L57b199:{c.instructions+=3;NFSU2_TR(0x57b199);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B57b19b:{NFSU2_TR(0x57b19b);
__builtin_memmove((R+4),(R+28),4);
}
B57b19d:{NFSU2_TR(0x57b19d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57b1a2ull));
TAIL_STATIC(0x502fd0u,502);
}
B57b1a2:L57b1a2:{c.instructions+=4;NFSU2_TR(0x57b1a2);
__builtin_memmove((R+12),(R+0),4);
}
B57b1a4:{NFSU2_TR(0x57b1a4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57b1a6:{NFSU2_TR(0x57b1a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b1aa:{NFSU2_TR(0x57b1aa);
if(r1(R+518)){{goto L57b22f;}}
}
B57b1b0:L57b1b0:{c.instructions+=1;NFSU2_TR(0x57b1b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B57b1b4:L57b1b4:{c.instructions+=3;NFSU2_TR(0x57b1b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57b1b7:{NFSU2_TR(0x57b1b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57b1b9:{NFSU2_TR(0x57b1b9);
if(r1(R+518)){{goto L57b229;}}
}
B57b1bb:L57b1bb:{c.instructions+=3;NFSU2_TR(0x57b1bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57b1be:{NFSU2_TR(0x57b1be);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57b1c0:{NFSU2_TR(0x57b1c0);
if(r1(R+518)){{goto L57b229;}}
}
B57b1c2:L57b1c2:{c.instructions+=3;NFSU2_TR(0x57b1c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57b1c6:{NFSU2_TR(0x57b1c6);
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
B57b1c8:{NFSU2_TR(0x57b1c8);
if(r1(R+518)){{goto L57b1d1;}}
}
B57b1ca:L57b1ca:{c.instructions+=3;NFSU2_TR(0x57b1ca);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B57b1cd:{NFSU2_TR(0x57b1cd);
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
B57b1cf:{NFSU2_TR(0x57b1cf);
if(r1(R+518)){{goto L57b229;}}
}
B57b1d1:L57b1d1:{c.instructions+=8;NFSU2_TR(0x57b1d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57b1d5:{NFSU2_TR(0x57b1d5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b1d6:{NFSU2_TR(0x57b1d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b1d7:{NFSU2_TR(0x57b1d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57b1db:{NFSU2_TR(0x57b1db);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b1dc:{NFSU2_TR(0x57b1dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b1dd:{NFSU2_TR(0x57b1dd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b1de:{NFSU2_TR(0x57b1de);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57b1e0ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B57b1e0:L57b1e0:{c.instructions+=3;NFSU2_TR(0x57b1e0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B57b1e3:{NFSU2_TR(0x57b1e3);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B57b1e6:{NFSU2_TR(0x57b1e6);
if(r1(R+518)){{goto L57b229;}}
}
B57b1e8:L57b1e8:{c.instructions+=4;NFSU2_TR(0x57b1e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B57b1eb:{NFSU2_TR(0x57b1eb);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x100ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57b1f1:{NFSU2_TR(0x57b1f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B57b1f7:{NFSU2_TR(0x57b1f7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L57b21c;}}
}
B57b1f9:L57b1f9:{c.instructions+=12;NFSU2_TR(0x57b1f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B57b1fc:{NFSU2_TR(0x57b1fc);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B57b200:{NFSU2_TR(0x57b200);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B57b201:{NFSU2_TR(0x57b201);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+20)),r4(U+0));
}
B57b204:{NFSU2_TR(0x57b204);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+4)),r2(U+0));
}
B57b207:{NFSU2_TR(0x57b207);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B57b20a:{NFSU2_TR(0x57b20a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B57b20d:{NFSU2_TR(0x57b20d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B57b210:{NFSU2_TR(0x57b210);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57b213:{NFSU2_TR(0x57b213);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b216:{NFSU2_TR(0x57b216);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57b219:{NFSU2_TR(0x57b219);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b21c:L57b21c:{c.instructions+=4;NFSU2_TR(0x57b21c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57b220:{NFSU2_TR(0x57b220);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B57b224:{NFSU2_TR(0x57b224);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B57b225:{NFSU2_TR(0x57b225);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b229:L57b229:{c.instructions+=3;NFSU2_TR(0x57b229);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B57b22b:{NFSU2_TR(0x57b22b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57b22d:{NFSU2_TR(0x57b22d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57b1b4u);}goto L57b1b4;}}
}
B57b22f:L57b22f:{c.instructions+=7;NFSU2_TR(0x57b22f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57b233:{NFSU2_TR(0x57b233);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57b234:{NFSU2_TR(0x57b234);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57b235:{NFSU2_TR(0x57b235);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57b236:{NFSU2_TR(0x57b236);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57b237:{NFSU2_TR(0x57b237);
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
B57b23a:{NFSU2_TR(0x57b23a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57b240:L57b240:{c.instructions+=9;NFSU2_TR(0x57b240);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b241:{NFSU2_TR(0x57b241);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b242:{NFSU2_TR(0x57b242);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b243:{NFSU2_TR(0x57b243);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B57b247:{NFSU2_TR(0x57b247);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b248:{NFSU2_TR(0x57b248);
u8 U[4];
w4(U+0,u32(0x7a08d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b24d:{NFSU2_TR(0x57b24d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b24f:{NFSU2_TR(0x57b24f);
__builtin_memmove((R+4),(R+24),4);
}
B57b251:{NFSU2_TR(0x57b251);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57b256ull));
TAIL_STATIC(0x578ce0u,578);
}
B57b256:L57b256:{c.instructions+=3;NFSU2_TR(0x57b256);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B57b259:{NFSU2_TR(0x57b259);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57b25b:{NFSU2_TR(0x57b25b);
if(r1(R+518)){{goto L57b292;}}
}
B57b25d:L57b25d:{c.instructions+=5;NFSU2_TR(0x57b25d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57b263:{NFSU2_TR(0x57b263);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57b269:{NFSU2_TR(0x57b269);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((R+4),(U+0),4);
}
B57b26c:{NFSU2_TR(0x57b26c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57b26e:{NFSU2_TR(0x57b26e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L57b28a;}}
}
B57b270:L57b270:{c.instructions+=4;NFSU2_TR(0x57b270);
__builtin_memmove((R+8),gp(0x864788),1);
}
B57b276:{NFSU2_TR(0x57b276);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B57b27d:{NFSU2_TR(0x57b27d);
__builtin_memmove((R+8),gp(0x864789),1);
}
B57b283:{NFSU2_TR(0x57b283);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e9ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B57b28a:L57b28a:{c.instructions+=2;NFSU2_TR(0x57b28a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b290:{NFSU2_TR(0x57b290);
{goto L57b2df;}
}
B57b292:L57b292:{c.instructions+=3;NFSU2_TR(0x57b292);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B57b295:{NFSU2_TR(0x57b295);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57b297:{NFSU2_TR(0x57b297);
if(r1(R+518)){{goto L57b2ad;}}
}
B57b299:L57b299:{c.instructions+=6;NFSU2_TR(0x57b299);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b29b:{NFSU2_TR(0x57b29b);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b29d:{NFSU2_TR(0x57b29d);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b29f:{NFSU2_TR(0x57b29f);
u8 U[4];
w4(U+0,u32(0x864788ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b2a4:{NFSU2_TR(0x57b2a4);
__builtin_memmove((R+4),(R+24),4);
}
B57b2a6:{NFSU2_TR(0x57b2a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57b2abull));
TAIL_STATIC(0x5715b0u,571);
}
B57b2ab:L57b2ab:{c.instructions+=1;NFSU2_TR(0x57b2ab);
{goto L57b2df;}
}
B57b2ad:L57b2ad:{c.instructions+=3;NFSU2_TR(0x57b2ad);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B57b2b0:{NFSU2_TR(0x57b2b0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57b2b2:{NFSU2_TR(0x57b2b2);
if(r1(R+518)){{goto L57b2df;}}
}
B57b2b4:L57b2b4:{c.instructions+=14;NFSU2_TR(0x57b2b4);
__builtin_memmove((R+4),gp(0x864788),2);
}
B57b2bb:{NFSU2_TR(0x57b2bb);
w4(R+0,u32(r1(R+4)));
}
B57b2be:{NFSU2_TR(0x57b2be);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x21ull))));
}
B57b2c1:{NFSU2_TR(0x57b2c1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B57b2c4:{NFSU2_TR(0x57b2c4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b2c6:{NFSU2_TR(0x57b2c6);
w4(R+4,u32(r1(R+5)));
}
B57b2c9:{NFSU2_TR(0x57b2c9);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b2cb:{NFSU2_TR(0x57b2cb);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B57b2cd:{NFSU2_TR(0x57b2cd);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b2cf:{NFSU2_TR(0x57b2cf);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B57b2d3:{NFSU2_TR(0x57b2d3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b2d4:{NFSU2_TR(0x57b2d4);
__builtin_memmove((R+4),(R+24),4);
}
B57b2d6:{NFSU2_TR(0x57b2d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b2da:{NFSU2_TR(0x57b2da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57b2dfull));
TAIL_STATIC(0x571550u,571);
}
B57b2df:L57b2df:{c.instructions+=2;NFSU2_TR(0x57b2df);
w4(R+20,u32(0x8655a0ull));
}
B57b2e4:{NFSU2_TR(0x57b2e4);
{goto L57b2f0;}
}
B57b2f0:L57b2f0:{c.instructions+=2;NFSU2_TR(0x57b2f0);
w4(R+28,u32(0x7fab48ull));
}
B57b2f5:{NFSU2_TR(0x57b2f5);
{goto L57b300;}
}
B57b300:L57b300:{c.instructions+=5;NFSU2_TR(0x57b300);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57b302:{NFSU2_TR(0x57b302);
u8 U[12];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B57b309:{NFSU2_TR(0x57b309);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B57b30c:{NFSU2_TR(0x57b30c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57b30e:{NFSU2_TR(0x57b30e);
if(r1(R+518)){{goto L57b334;}}
}
B57b310:L57b310:{c.instructions+=5;NFSU2_TR(0x57b310);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57b316:{NFSU2_TR(0x57b316);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B57b31c:{NFSU2_TR(0x57b31c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B57b31f:{NFSU2_TR(0x57b31f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57b321:{NFSU2_TR(0x57b321);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L57b32c;}}
}
B57b323:L57b323:{c.instructions+=2;NFSU2_TR(0x57b323);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+4),(U+0),1);
}
B57b325:{NFSU2_TR(0x57b325);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B57b32c:L57b32c:{c.instructions+=2;NFSU2_TR(0x57b32c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b332:{NFSU2_TR(0x57b332);
{goto L57b395;}
}
B57b334:L57b334:{c.instructions+=3;NFSU2_TR(0x57b334);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B57b337:{NFSU2_TR(0x57b337);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57b339:{NFSU2_TR(0x57b339);
if(r1(R+518)){{goto L57b361;}}
}
B57b33b:L57b33b:{c.instructions+=5;NFSU2_TR(0x57b33b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57b341:{NFSU2_TR(0x57b341);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B57b347:{NFSU2_TR(0x57b347);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B57b34a:{NFSU2_TR(0x57b34a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57b34c:{NFSU2_TR(0x57b34c);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L57b359;}}
}
B57b34e:L57b34e:{c.instructions+=3;NFSU2_TR(0x57b34e);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+12),(U+12),1);
}
B57b355:{NFSU2_TR(0x57b355);
__builtin_memmove((R+0),(R+8),4);
}
B57b357:{NFSU2_TR(0x57b357);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+4)),r1(U+0));
}
B57b359:L57b359:{c.instructions+=2;NFSU2_TR(0x57b359);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b35f:{NFSU2_TR(0x57b35f);
{goto L57b395;}
}
B57b361:L57b361:{c.instructions+=3;NFSU2_TR(0x57b361);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B57b364:{NFSU2_TR(0x57b364);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57b366:{NFSU2_TR(0x57b366);
if(r1(R+518)){{goto L57b395;}}
}
B57b368:L57b368:{c.instructions+=7;NFSU2_TR(0x57b368);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+0,u32(r1(U+0)));
}
B57b36b:{NFSU2_TR(0x57b36b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57b371:{NFSU2_TR(0x57b371);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B57b377:{NFSU2_TR(0x57b377);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((R+8),(U+0),4);
}
B57b37a:{NFSU2_TR(0x57b37a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x21ull))));
}
B57b37d:{NFSU2_TR(0x57b37d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57b37f:{NFSU2_TR(0x57b37f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L57b38f;}}
}
B57b381:L57b381:{c.instructions+=2;NFSU2_TR(0x57b381);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B57b388:{NFSU2_TR(0x57b388);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e9ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+1),1);
s1(u32(r4(U+8)),r1(U+12));
}
B57b38f:L57b38f:{c.instructions+=1;NFSU2_TR(0x57b38f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b395:L57b395:{c.instructions+=3;NFSU2_TR(0x57b395);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B57b398:{NFSU2_TR(0x57b398);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7faba8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7faba8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57b39e:{NFSU2_TR(0x57b39e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57b300u);}goto L57b300;}}
}
B57b3a4:L57b3a4:{c.instructions+=3;NFSU2_TR(0x57b3a4);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1c8ull))));
}
B57b3aa:{NFSU2_TR(0x57b3aa);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x865930ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x865930ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57b3b0:{NFSU2_TR(0x57b3b0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57b2f0u);}goto L57b2f0;}}
}
B57b3b6:L57b3b6:{c.instructions+=6;NFSU2_TR(0x57b3b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57b3b7:{NFSU2_TR(0x57b3b7);
__builtin_memmove((R+4),(R+24),4);
}
B57b3b9:{NFSU2_TR(0x57b3b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57b3ba:{NFSU2_TR(0x57b3ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57b3bb:{NFSU2_TR(0x57b3bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57b3bc:{NFSU2_TR(0x57b3bc);
TAIL_STATIC(0x578d90u,578);
}
B57b3d0:L57b3d0:{c.instructions+=3;NFSU2_TR(0x57b3d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57b3d3:{NFSU2_TR(0x57b3d3);
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
B57b3d5:{NFSU2_TR(0x57b3d5);
if(r1(R+518)){{goto L57b401;}}
}
B57b3d7:L57b3d7:{c.instructions+=3;NFSU2_TR(0x57b3d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57b3da:{NFSU2_TR(0x57b3da);
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
B57b3dc:{NFSU2_TR(0x57b3dc);
if(r1(R+518)){{goto L57b3f3;}}
}
B57b3de:L57b3de:{c.instructions+=7;NFSU2_TR(0x57b3de);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57b3e1:{NFSU2_TR(0x57b3e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57b3e4:{NFSU2_TR(0x57b3e4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b3e5:{NFSU2_TR(0x57b3e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57b3e9:{NFSU2_TR(0x57b3e9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b3ea:{NFSU2_TR(0x57b3ea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b3eb:{NFSU2_TR(0x57b3eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57b3edull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B57b3ed:L57b3ed:{c.instructions+=2;NFSU2_TR(0x57b3ed);
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
B57b3f0:{NFSU2_TR(0x57b3f0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57b3f3:L57b3f3:{c.instructions+=5;NFSU2_TR(0x57b3f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57b3f7:{NFSU2_TR(0x57b3f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57b3fa:{NFSU2_TR(0x57b3fa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b3fb:{NFSU2_TR(0x57b3fb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b3fc:{NFSU2_TR(0x57b3fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57b3feull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B57b3fe:L57b3fe:{c.instructions+=1;NFSU2_TR(0x57b3fe);
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
B57b401:L57b401:{c.instructions+=1;NFSU2_TR(0x57b401);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57b410:L57b410:{c.instructions+=18;NFSU2_TR(0x57b410);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57b414:{NFSU2_TR(0x57b414);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57b418:{NFSU2_TR(0x57b418);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b419:{NFSU2_TR(0x57b419);
__builtin_memmove((R+24),(R+4),4);
}
B57b41b:{NFSU2_TR(0x57b41b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57b41f:{NFSU2_TR(0x57b41f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b420:{NFSU2_TR(0x57b420);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b423:{NFSU2_TR(0x57b423);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57b427:{NFSU2_TR(0x57b427);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b42a:{NFSU2_TR(0x57b42a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b42b:{NFSU2_TR(0x57b42b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B57b42e:{NFSU2_TR(0x57b42e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B57b430:{NFSU2_TR(0x57b430);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b431:{NFSU2_TR(0x57b431);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b434:{NFSU2_TR(0x57b434);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b437:{NFSU2_TR(0x57b437);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w4(U+4,u32(0x100000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57b43e:{NFSU2_TR(0x57b43e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57b445:{NFSU2_TR(0x57b445);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57b44aull));
TAIL_STATIC(0x43dbd0u,43d);
}
B57b44a:L57b44a:{c.instructions+=18;NFSU2_TR(0x57b44a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57b44e:{NFSU2_TR(0x57b44e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57b452:{NFSU2_TR(0x57b452);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b455:{NFSU2_TR(0x57b455);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b458:{NFSU2_TR(0x57b458);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b45b:{NFSU2_TR(0x57b45b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b45e:{NFSU2_TR(0x57b45e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b461:{NFSU2_TR(0x57b461);
__builtin_memmove((R+4),gp(0x7fb538),4);
}
B57b467:{NFSU2_TR(0x57b467);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b46a:{NFSU2_TR(0x57b46a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b46d:{NFSU2_TR(0x57b46d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b470:{NFSU2_TR(0x57b470);
__builtin_memmove((R+0),gp(0x7fb538),4);
}
B57b475:{NFSU2_TR(0x57b475);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B57b478:{NFSU2_TR(0x57b478);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B57b479:{NFSU2_TR(0x57b479);
__builtin_memmove(gp(0x7fb538),(R+0),4);
}
B57b47e:{NFSU2_TR(0x57b47e);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x186a0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x186a0ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x186a0ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B57b483:{NFSU2_TR(0x57b483);
__builtin_memmove((R+0),(R+24),4);
}
B57b485:{NFSU2_TR(0x57b485);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57b491;}}
}
B57b487:L57b487:{c.instructions+=1;NFSU2_TR(0x57b487);
s4(0x7fb538,u32(0x1ull));
}
B57b491:L57b491:{c.instructions+=3;NFSU2_TR(0x57b491);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57b492:{NFSU2_TR(0x57b492);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57b493:{NFSU2_TR(0x57b493);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57b4a0:L57b4a0:{c.instructions+=9;NFSU2_TR(0x57b4a0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b4a2:{NFSU2_TR(0x57b4a2);
u8 U[4];
w4(U+0,u32(0x77883bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b4a7:{NFSU2_TR(0x57b4a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57b4ad:{NFSU2_TR(0x57b4ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b4ae:{NFSU2_TR(0x57b4ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b4b5:{NFSU2_TR(0x57b4b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b4b6:{NFSU2_TR(0x57b4b6);
__builtin_memmove((R+0),gp(0x8650f0),4);
}
B57b4bb:{NFSU2_TR(0x57b4bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b4bc:{NFSU2_TR(0x57b4bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57b4c1ull));
TAIL_STATIC(0x440e50u,440);
}
B57b4c1:L57b4c1:{c.instructions+=5;NFSU2_TR(0x57b4c1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57b4c4:{NFSU2_TR(0x57b4c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B57b4c8:{NFSU2_TR(0x57b4c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57b4ca:{NFSU2_TR(0x57b4ca);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57b4d2:{NFSU2_TR(0x57b4d2);
if(r1(R+518)){{goto L57b4fb;}}
}
B57b4d4:L57b4d4:{c.instructions+=14;NFSU2_TR(0x57b4d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57b4d8:{NFSU2_TR(0x57b4d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57b4dc:{NFSU2_TR(0x57b4dc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b4dd:{NFSU2_TR(0x57b4dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57b4e1:{NFSU2_TR(0x57b4e1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b4e2:{NFSU2_TR(0x57b4e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57b4e6:{NFSU2_TR(0x57b4e6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b4e7:{NFSU2_TR(0x57b4e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57b4eb:{NFSU2_TR(0x57b4eb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b4ec:{NFSU2_TR(0x57b4ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57b4f0:{NFSU2_TR(0x57b4f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b4f1:{NFSU2_TR(0x57b4f1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b4f2:{NFSU2_TR(0x57b4f2);
__builtin_memmove((R+4),(R+0),4);
}
B57b4f4:{NFSU2_TR(0x57b4f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57b4f9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57b410u);}goto L57b410;}
}
B57b4f9:L57b4f9:{c.instructions+=1;NFSU2_TR(0x57b4f9);
{goto L57b4fd;}
}
B57b4fb:L57b4fb:{c.instructions+=1;NFSU2_TR(0x57b4fb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B57b4fd:L57b4fd:{c.instructions+=10;NFSU2_TR(0x57b4fd);
__builtin_memmove((R+4),gp(0x865224),4);
}
B57b503:{NFSU2_TR(0x57b503);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B57b505:{NFSU2_TR(0x57b505);
__builtin_memmove(gp(0x865224),(R+0),4);
}
B57b50a:{NFSU2_TR(0x57b50a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b50d:{NFSU2_TR(0x57b50d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57b511:{NFSU2_TR(0x57b511);
u8 U[4];
w4(U+0,u32(0x865220ull));
s4(u32(r4(R+0)),r4(U+0));
}
B57b517:{NFSU2_TR(0x57b517);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57b51a:{NFSU2_TR(0x57b51a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b521:{NFSU2_TR(0x57b521);
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
B57b524:{NFSU2_TR(0x57b524);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57b530:L57b530:{c.instructions+=9;NFSU2_TR(0x57b530);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b532:{NFSU2_TR(0x57b532);
u8 U[4];
w4(U+0,u32(0x77883bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b537:{NFSU2_TR(0x57b537);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57b53d:{NFSU2_TR(0x57b53d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b53e:{NFSU2_TR(0x57b53e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b545:{NFSU2_TR(0x57b545);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b546:{NFSU2_TR(0x57b546);
__builtin_memmove((R+0),gp(0x8650f0),4);
}
B57b54b:{NFSU2_TR(0x57b54b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b54c:{NFSU2_TR(0x57b54c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57b551ull));
TAIL_STATIC(0x440e50u,440);
}
B57b551:L57b551:{c.instructions+=5;NFSU2_TR(0x57b551);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57b554:{NFSU2_TR(0x57b554);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B57b558:{NFSU2_TR(0x57b558);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57b55a:{NFSU2_TR(0x57b55a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57b562:{NFSU2_TR(0x57b562);
if(r1(R+518)){{goto L57b58b;}}
}
B57b564:L57b564:{c.instructions+=14;NFSU2_TR(0x57b564);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57b568:{NFSU2_TR(0x57b568);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57b56c:{NFSU2_TR(0x57b56c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b56d:{NFSU2_TR(0x57b56d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57b571:{NFSU2_TR(0x57b571);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b572:{NFSU2_TR(0x57b572);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57b576:{NFSU2_TR(0x57b576);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b577:{NFSU2_TR(0x57b577);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57b57b:{NFSU2_TR(0x57b57b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b57c:{NFSU2_TR(0x57b57c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57b580:{NFSU2_TR(0x57b580);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b581:{NFSU2_TR(0x57b581);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b582:{NFSU2_TR(0x57b582);
__builtin_memmove((R+4),(R+0),4);
}
B57b584:{NFSU2_TR(0x57b584);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57b589ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57b410u);}goto L57b410;}
}
B57b589:L57b589:{c.instructions+=1;NFSU2_TR(0x57b589);
{goto L57b58d;}
}
B57b58b:L57b58b:{c.instructions+=1;NFSU2_TR(0x57b58b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B57b58d:L57b58d:{c.instructions+=13;NFSU2_TR(0x57b58d);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57b591:{NFSU2_TR(0x57b591);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b594:{NFSU2_TR(0x57b594);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57b59b:{NFSU2_TR(0x57b59b);
__builtin_memmove((R+4),gp(0x865224),4);
}
B57b5a1:{NFSU2_TR(0x57b5a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B57b5a3:{NFSU2_TR(0x57b5a3);
__builtin_memmove(gp(0x865224),(R+0),4);
}
B57b5a8:{NFSU2_TR(0x57b5a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b5ab:{NFSU2_TR(0x57b5ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57b5af:{NFSU2_TR(0x57b5af);
u8 U[4];
w4(U+0,u32(0x865220ull));
s4(u32(r4(R+0)),r4(U+0));
}
B57b5b5:{NFSU2_TR(0x57b5b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57b5b8:{NFSU2_TR(0x57b5b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b5bf:{NFSU2_TR(0x57b5bf);
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
B57b5c2:{NFSU2_TR(0x57b5c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57b5d0:L57b5d0:{c.instructions+=4;NFSU2_TR(0x57b5d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b5d1:{NFSU2_TR(0x57b5d1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b5d2:{NFSU2_TR(0x57b5d2);
w4(R+4,u32(0x866584ull));
}
B57b5d7:{NFSU2_TR(0x57b5d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57b5dcull));
TAIL_STATIC(0x502fd0u,502);
}
B57b5dc:L57b5dc:{c.instructions+=2;NFSU2_TR(0x57b5dc);
__builtin_memmove((R+28),(R+0),4);
}
B57b5de:{NFSU2_TR(0x57b5de);
__builtin_memmove((R+28),(R+28),4);
}
B57b5e0:L57b5e0:{c.instructions+=3;NFSU2_TR(0x57b5e0);
__builtin_memmove((R+24),gp(0x866584),4);
}
B57b5e6:{NFSU2_TR(0x57b5e6);
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
B57b5e8:{NFSU2_TR(0x57b5e8);
if(r1(R+518)){{goto L57b5fd;}}
}
B57b5ea:L57b5ea:{c.instructions+=1;NFSU2_TR(0x57b5ea);
__builtin_memmove((R+12),(R+12),4);
}
B57b5f0:L57b5f0:{c.instructions+=3;NFSU2_TR(0x57b5f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57b5f3:{NFSU2_TR(0x57b5f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57b5f5:{NFSU2_TR(0x57b5f5);
if(r1(R+518)){{goto L57b600;}}
}
B57b5f7:L57b5f7:{c.instructions+=3;NFSU2_TR(0x57b5f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B57b5f9:{NFSU2_TR(0x57b5f9);
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
B57b5fb:{NFSU2_TR(0x57b5fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57b5f0u);}goto L57b5f0;}}
}
B57b5fd:L57b5fd:{c.instructions+=3;NFSU2_TR(0x57b5fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57b5fe:{NFSU2_TR(0x57b5fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57b5ff:{NFSU2_TR(0x57b5ff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57b600:L57b600:{c.instructions+=6;NFSU2_TR(0x57b600);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57b603:{NFSU2_TR(0x57b603);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57b605:{NFSU2_TR(0x57b605);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B57b607:{NFSU2_TR(0x57b607);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b60a:{NFSU2_TR(0x57b60a);
__builtin_memmove((R+4),(R+24),4);
}
B57b60c:{NFSU2_TR(0x57b60c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57b611ull));
TAIL_STATIC(0x5798c0u,579);
}
B57b611:L57b611:{c.instructions+=4;NFSU2_TR(0x57b611);
__builtin_memmove((R+0),gp(0x865104),4);
}
B57b616:{NFSU2_TR(0x57b616);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b617:{NFSU2_TR(0x57b617);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b618:{NFSU2_TR(0x57b618);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57b61dull));
TAIL_STATIC(0x43f920u,43f);
}
B57b61d:L57b61d:{c.instructions+=2;NFSU2_TR(0x57b61d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B57b620:{NFSU2_TR(0x57b620);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57b5e0u);}goto L57b5e0;}
}
B57b630:L57b630:{c.instructions+=2;NFSU2_TR(0x57b630);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b632:{NFSU2_TR(0x57b632);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57b637ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57b5d0u);}goto L57b5d0;}
}
B57b637:L57b637:{c.instructions+=2;NFSU2_TR(0x57b637);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B57b638:{NFSU2_TR(0x57b638);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57b640:L57b640:{c.instructions+=9;NFSU2_TR(0x57b640);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b642:{NFSU2_TR(0x57b642);
u8 U[4];
w4(U+0,u32(0x77885bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b647:{NFSU2_TR(0x57b647);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57b64d:{NFSU2_TR(0x57b64d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b64e:{NFSU2_TR(0x57b64e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b655:{NFSU2_TR(0x57b655);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b656:{NFSU2_TR(0x57b656);
__builtin_memmove((R+0),gp(0x86510c),4);
}
B57b65b:{NFSU2_TR(0x57b65b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57b65d:{NFSU2_TR(0x57b65d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57b6eb;}}
}
B57b663:L57b663:{c.instructions+=3;NFSU2_TR(0x57b663);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b664:{NFSU2_TR(0x57b664);
u8 U[4];
w4(U+0,u32(0x464ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b669:{NFSU2_TR(0x57b669);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57b66eull));
TAIL_STATIC(0x75c6c8u,75c);
}
B57b66e:L57b66e:{c.instructions+=6;NFSU2_TR(0x57b66e);
__builtin_memmove((R+24),(R+0),4);
}
B57b670:{NFSU2_TR(0x57b670);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57b673:{NFSU2_TR(0x57b673);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b677:{NFSU2_TR(0x57b677);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57b679:{NFSU2_TR(0x57b679);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57b681:{NFSU2_TR(0x57b681);
if(r1(R+518)){{goto L57b699;}}
}
B57b683:L57b683:{c.instructions+=3;NFSU2_TR(0x57b683);
u8 U[4];
w4(U+0,u32(0x7a0460ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b688:{NFSU2_TR(0x57b688);
__builtin_memmove((R+4),(R+24),4);
}
B57b68a:{NFSU2_TR(0x57b68a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57b68full));
TAIL_STATIC(0x6f6c23u,6f6);
}
B57b68f:L57b68f:{c.instructions+=3;NFSU2_TR(0x57b68f);
u8 U[4];
w4(U+0,u32(0x7a0428ull));
s4(u32(r4(R+24)),r4(U+0));
}
B57b695:{NFSU2_TR(0x57b695);
__builtin_memmove((R+4),(R+24),4);
}
B57b697:{NFSU2_TR(0x57b697);
{goto L57b69b;}
}
B57b699:L57b699:{c.instructions+=1;NFSU2_TR(0x57b699);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B57b69b:L57b69b:{c.instructions+=7;NFSU2_TR(0x57b69b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57b69f:{NFSU2_TR(0x57b69f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57b6a3:{NFSU2_TR(0x57b6a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b6a4:{NFSU2_TR(0x57b6a4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b6a5:{NFSU2_TR(0x57b6a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B57b6ad:{NFSU2_TR(0x57b6ad);
__builtin_memmove(gp(0x86510c),(R+4),4);
}
B57b6b3:{NFSU2_TR(0x57b6b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57b6b8ull));
TAIL_STATIC(0x579a40u,579);
}
B57b6b8:L57b6b8:{c.instructions+=3;NFSU2_TR(0x57b6b8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57b6ba:{NFSU2_TR(0x57b6ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57b6bb:{NFSU2_TR(0x57b6bb);
if(r1(R+518)){{goto L57b6d1;}}
}
B57b6bd:L57b6bd:{c.instructions+=5;NFSU2_TR(0x57b6bd);
__builtin_memmove((R+0),gp(0x86510c),4);
}
B57b6c2:{NFSU2_TR(0x57b6c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57b6c6:{NFSU2_TR(0x57b6c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b6cd:{NFSU2_TR(0x57b6cd);
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
B57b6d0:{NFSU2_TR(0x57b6d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57b6d1:L57b6d1:{c.instructions+=3;NFSU2_TR(0x57b6d1);
__builtin_memmove((R+4),gp(0x86510c),4);
}
B57b6d7:{NFSU2_TR(0x57b6d7);
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
B57b6d9:{NFSU2_TR(0x57b6d9);
if(r1(R+518)){{goto L57b6e1;}}
}
B57b6db:L57b6db:{c.instructions+=3;NFSU2_TR(0x57b6db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57b6dd:{NFSU2_TR(0x57b6dd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b6df:{NFSU2_TR(0x57b6df);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57b6e1ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B57b6e1:L57b6e1:{c.instructions+=1;NFSU2_TR(0x57b6e1);
s4(0x86510c,u32(0x0ull));
}
B57b6eb:L57b6eb:{c.instructions+=5;NFSU2_TR(0x57b6eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57b6ef:{NFSU2_TR(0x57b6ef);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B57b6f1:{NFSU2_TR(0x57b6f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b6f8:{NFSU2_TR(0x57b6f8);
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
B57b6fb:{NFSU2_TR(0x57b6fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57b700:L57b700:{c.instructions+=14;NFSU2_TR(0x57b700);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b701:{NFSU2_TR(0x57b701);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b702:{NFSU2_TR(0x57b702);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b703:{NFSU2_TR(0x57b703);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B57b707:{NFSU2_TR(0x57b707);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57b70d:{NFSU2_TR(0x57b70d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B57b713:{NFSU2_TR(0x57b713);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57b719:{NFSU2_TR(0x57b719);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b71a:{NFSU2_TR(0x57b71a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B57b720:{NFSU2_TR(0x57b720);
w1(R+512,u8((r4(R+12))<(r4(R+8))));
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+8))));
}
B57b722:{NFSU2_TR(0x57b722);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(R+0))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B57b724:{NFSU2_TR(0x57b724);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B57b726:{NFSU2_TR(0x57b726);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+20))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57b728:{NFSU2_TR(0x57b728);
if(r1(R+512)){{goto L57b746;}}
}
B57b72a:L57b72a:{c.instructions+=1;NFSU2_TR(0x57b72a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L57b734;}}
}
B57b72c:L57b72c:{c.instructions+=3;NFSU2_TR(0x57b72c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B57b730:{NFSU2_TR(0x57b730);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57b732:{NFSU2_TR(0x57b732);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L57b74a;}}
}
B57b734:L57b734:{c.instructions+=4;NFSU2_TR(0x57b734);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B57b73a:{NFSU2_TR(0x57b73a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B57b740:{NFSU2_TR(0x57b740);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b744:{NFSU2_TR(0x57b744);
{goto L57b74a;}
}
B57b746:L57b746:{c.instructions+=1;NFSU2_TR(0x57b746);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B57b74a:L57b74a:{c.instructions+=15;NFSU2_TR(0x57b74a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B57b750:{NFSU2_TR(0x57b750);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B57b752:{NFSU2_TR(0x57b752);
w1(R+512,carry<u32>(r4(R+28),r4(R+8)));
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B57b754:{NFSU2_TR(0x57b754);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+20))+u32(r4(R+0))));
w4(R+20,u32(u32(r4(U+4))+u32(r4(U+0))));
}
B57b756:{NFSU2_TR(0x57b756);
u8 U[16];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(U+4,shr<u32>(r4(R+28),u64(r4(U+0))));
w4(U+8,u32(u32(u32(0x20ull))-u32(r4(U+0))));
w4(U+12,shl<u32>(r4(R+20),u64(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))|u32(r4(U+12))));
}
B57b75a:{NFSU2_TR(0x57b75a);
u8 U[16];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(U+4,shr<u32>(r4(R+8),u64(r4(U+0))));
w4(U+8,u32(u32(u32(0x20ull))-u32(r4(U+0))));
w4(U+12,shl<u32>(r4(R+0),u64(r4(U+8))));
w4(R+8,u32(u32(r4(U+4))|u32(r4(U+12))));
}
B57b75e:{NFSU2_TR(0x57b75e);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B57b761:{NFSU2_TR(0x57b761);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+20,shr<u32>(r4(R+20),u64(r4(U+0))));
}
B57b764:{NFSU2_TR(0x57b764);
__builtin_memmove((R+20),(R+0),4);
}
B57b766:{NFSU2_TR(0x57b766);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x45cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B57b76c:{NFSU2_TR(0x57b76c);
__builtin_memmove((R+0),(R+8),4);
}
B57b76e:{NFSU2_TR(0x57b76e);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+20))));
}
B57b770:{NFSU2_TR(0x57b770);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B57b772:{NFSU2_TR(0x57b772);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B57b774:{NFSU2_TR(0x57b774);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L57b778;}}
}
B57b776:L57b776:{c.instructions+=1;NFSU2_TR(0x57b776);
w4(R+0,u32(0-u32(r4(R+0))));
}
B57b778:L57b778:{c.instructions+=20;NFSU2_TR(0x57b778);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x460ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B57b77e:{NFSU2_TR(0x57b77e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x45cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b784:{NFSU2_TR(0x57b784);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57b78a:{NFSU2_TR(0x57b78a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57b790:{NFSU2_TR(0x57b790);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B57b796:{NFSU2_TR(0x57b796);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B57b79a:{NFSU2_TR(0x57b79a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+20),(U+0),4);
}
B57b79c:{NFSU2_TR(0x57b79c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b79e:{NFSU2_TR(0x57b79e);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B57b7a1:{NFSU2_TR(0x57b7a1);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B57b7a2:{NFSU2_TR(0x57b7a2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b7a4:{NFSU2_TR(0x57b7a4);
w1(R+512,carry<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B57b7a6:{NFSU2_TR(0x57b7a6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b7a8:{NFSU2_TR(0x57b7a8);
u8 U[16];
w4(U+0,u32(r1(R+512)));
w1(R+512,carry<u32>(r4(R+8),r4(R+12)));
w1(R+523,scarry<u32>(r4(R+8),r4(R+12)));
w4(U+4,u32(u32(r4(R+8))+u32(r4(R+12))));
w1(U+8,carry<u32>(r4(U+4),r4(U+0)));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w1(U+9,scarry<u32>(r4(U+4),r4(U+0)));
w1(R+523,u8(((r1(R+523))!=0)!=((r1(U+9))!=0)));
w4(R+8,u32(u32(r4(U+4))+u32(r4(U+0))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+10,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+14,u8(__builtin_popcountll(u64(r4(U+10)))));
w1(U+15,u8(u32(r1(U+14))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+15))==(u8(0x0ull))));
}
B57b7aa:{NFSU2_TR(0x57b7aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B57b7ae:{NFSU2_TR(0x57b7ae);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b7af:{NFSU2_TR(0x57b7af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b7b0:{NFSU2_TR(0x57b7b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b7b1:{NFSU2_TR(0x57b7b1);
__builtin_memmove((R+4),(R+28),4);
}
B57b7b3:{NFSU2_TR(0x57b7b3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57b7b6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B57b7b6:L57b7b6:{c.instructions+=10;NFSU2_TR(0x57b7b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57b7ba:{NFSU2_TR(0x57b7ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57b7be:{NFSU2_TR(0x57b7be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57b7c0:{NFSU2_TR(0x57b7c0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b7c2:{NFSU2_TR(0x57b7c2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b7c4:{NFSU2_TR(0x57b7c4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b7c5:{NFSU2_TR(0x57b7c5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b7c6:{NFSU2_TR(0x57b7c6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b7c7:{NFSU2_TR(0x57b7c7);
__builtin_memmove((R+4),(R+28),4);
}
B57b7c9:{NFSU2_TR(0x57b7c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57b7ccull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B57b7cc:L57b7cc:{c.instructions+=14;NFSU2_TR(0x57b7cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B57b7d2:{NFSU2_TR(0x57b7d2);
__builtin_memmove((R+4),(R+0),4);
}
B57b7d4:{NFSU2_TR(0x57b7d4);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B57b7d5:{NFSU2_TR(0x57b7d5);
w1(R+512,carry<u32>(r4(R+28),r4(R+0)));
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B57b7d7:{NFSU2_TR(0x57b7d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57b7dd:{NFSU2_TR(0x57b7dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b7e3:{NFSU2_TR(0x57b7e3);
u8 U[16];
w4(U+0,u32(r1(R+512)));
w1(R+512,carry<u32>(r4(R+0),r4(R+8)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+8)));
w4(U+4,u32(u32(r4(R+0))+u32(r4(R+8))));
w1(U+8,carry<u32>(r4(U+4),r4(U+0)));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w1(U+9,scarry<u32>(r4(U+4),r4(U+0)));
w1(R+523,u8(((r1(R+523))!=0)!=((r1(U+9))!=0)));
w4(R+0,u32(u32(r4(U+4))+u32(r4(U+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+10,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+14,u8(__builtin_popcountll(u64(r4(U+10)))));
w1(U+15,u8(u32(r1(U+14))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+15))==(u8(0x0ull))));
}
B57b7e5:{NFSU2_TR(0x57b7e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57b7e6:{NFSU2_TR(0x57b7e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b7ec:{NFSU2_TR(0x57b7ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57b7ed:{NFSU2_TR(0x57b7ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57b7ee:{NFSU2_TR(0x57b7ee);
__builtin_memmove((R+0),(R+4),4);
}
B57b7f0:{NFSU2_TR(0x57b7f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57b7f1:{NFSU2_TR(0x57b7f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57b800:L57b800:{c.instructions+=3;NFSU2_TR(0x57b800);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b801:{NFSU2_TR(0x57b801);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b802:{NFSU2_TR(0x57b802);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57b807ull));
TAIL_STATIC(0x43bdf0u,43b);
}
B57b807:L57b807:{c.instructions+=4;NFSU2_TR(0x57b807);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B57b80b:{NFSU2_TR(0x57b80b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57b80e:{NFSU2_TR(0x57b80e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b80f:{NFSU2_TR(0x57b80f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57b814ull));
TAIL_STATIC(0x6f76e9u,6f7);
}
B57b814:L57b814:{c.instructions+=11;NFSU2_TR(0x57b814);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57b817:{NFSU2_TR(0x57b817);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57b81a:{NFSU2_TR(0x57b81a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b81b:{NFSU2_TR(0x57b81b);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b81d:{NFSU2_TR(0x57b81d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b81e:{NFSU2_TR(0x57b81e);
__builtin_memmove((R+28),(R+0),4);
}
B57b820:{NFSU2_TR(0x57b820);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57b823:{NFSU2_TR(0x57b823);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b824:{NFSU2_TR(0x57b824);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b825:{NFSU2_TR(0x57b825);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b826:{NFSU2_TR(0x57b826);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57b82bull));
TAIL_STATIC(0x6f77bcu,6f7);
}
B57b82b:L57b82b:{c.instructions+=6;NFSU2_TR(0x57b82b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57b82e:{NFSU2_TR(0x57b82e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b831:{NFSU2_TR(0x57b831);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57b834:{NFSU2_TR(0x57b834);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B57b837:{NFSU2_TR(0x57b837);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57b839:{NFSU2_TR(0x57b839);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57b84f;}}
}
B57b83b:L57b83b:{c.instructions+=4;NFSU2_TR(0x57b83b);
u8 U[4];
w4(U+0,u32(0x579b20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b840:{NFSU2_TR(0x57b840);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b841:{NFSU2_TR(0x57b841);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b844:{NFSU2_TR(0x57b844);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57b849ull));
TAIL_STATIC(0x6f76f2u,6f7);
}
B57b849:L57b849:{c.instructions+=4;NFSU2_TR(0x57b849);
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
B57b84c:{NFSU2_TR(0x57b84c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57b84d:{NFSU2_TR(0x57b84d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57b84e:{NFSU2_TR(0x57b84e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57b84f:L57b84f:{c.instructions+=4;NFSU2_TR(0x57b84f);
u8 U[4];
w4(U+0,u32(0x579b20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b854:{NFSU2_TR(0x57b854);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b855:{NFSU2_TR(0x57b855);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b858:{NFSU2_TR(0x57b858);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57b85dull));
TAIL_STATIC(0x6f76f2u,6f7);
}
B57b85d:L57b85d:{c.instructions+=4;NFSU2_TR(0x57b85d);
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
B57b860:{NFSU2_TR(0x57b860);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57b861:{NFSU2_TR(0x57b861);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57b862:{NFSU2_TR(0x57b862);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57b870:L57b870:{c.instructions+=3;NFSU2_TR(0x57b870);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b871:{NFSU2_TR(0x57b871);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b873:{NFSU2_TR(0x57b873);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57b878ull));
TAIL_STATIC(0x75c6c8u,75c);
}
B57b878:L57b878:{c.instructions+=4;NFSU2_TR(0x57b878);
__builtin_memmove((R+24),(R+0),4);
}
B57b87a:{NFSU2_TR(0x57b87a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57b87d:{NFSU2_TR(0x57b87d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57b87f:{NFSU2_TR(0x57b87f);
if(r1(R+518)){{goto L57b8a3;}}
}
B57b881:L57b881:{c.instructions+=3;NFSU2_TR(0x57b881);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b886:{NFSU2_TR(0x57b886);
u8 U[1];
w1(U+0,u8(0x1ull));
s1(u32(r4(R+24)),r1(U+0));
}
B57b889:{NFSU2_TR(0x57b889);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57b88eull));
TAIL_STATIC(0x75c6c8u,75c);
}
B57b88e:L57b88e:{c.instructions+=6;NFSU2_TR(0x57b88e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b891:{NFSU2_TR(0x57b891);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57b898:{NFSU2_TR(0x57b898);
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
B57b89b:{NFSU2_TR(0x57b89b);
__builtin_memmove(gp(0x865128),(R+24),4);
}
B57b8a1:{NFSU2_TR(0x57b8a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57b8a2:{NFSU2_TR(0x57b8a2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57b8a3:L57b8a3:{c.instructions+=4;NFSU2_TR(0x57b8a3);
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
B57b8a5:{NFSU2_TR(0x57b8a5);
__builtin_memmove(gp(0x865128),(R+0),4);
}
B57b8aa:{NFSU2_TR(0x57b8aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57b8ab:{NFSU2_TR(0x57b8ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57b8b0:L57b8b0:{c.instructions+=6;NFSU2_TR(0x57b8b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b8b1:{NFSU2_TR(0x57b8b1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b8b2:{NFSU2_TR(0x57b8b2);
__builtin_memmove((R+12),(R+4),4);
}
B57b8b4:{NFSU2_TR(0x57b8b4);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B57b8b7:{NFSU2_TR(0x57b8b7);
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
B57b8b9:{NFSU2_TR(0x57b8b9);
if(r1(R+518)){{goto L57b96d;}}
}
B57b8bf:L57b8bf:{c.instructions+=12;NFSU2_TR(0x57b8bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57b8c2:{NFSU2_TR(0x57b8c2);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B57b8c6:{NFSU2_TR(0x57b8c6);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
}
B57b8c9:{NFSU2_TR(0x57b8c9);
u8 U[13];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B57b8cd:{NFSU2_TR(0x57b8cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57b8d0:{NFSU2_TR(0x57b8d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57b8d3:{NFSU2_TR(0x57b8d3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B57b8d5:{NFSU2_TR(0x57b8d5);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B57b8d6:{NFSU2_TR(0x57b8d6);
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
B57b8d8:{NFSU2_TR(0x57b8d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b8db:{NFSU2_TR(0x57b8db);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b8df:{NFSU2_TR(0x57b8df);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L57b96d;}}
}
B57b8e5:L57b8e5:{c.instructions+=5;NFSU2_TR(0x57b8e5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b8e6:{NFSU2_TR(0x57b8e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b8e7:{NFSU2_TR(0x57b8e7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b8eb:{NFSU2_TR(0x57b8eb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b8ec:{NFSU2_TR(0x57b8ec);
__builtin_memmove((R+16),(R+16),4);
}
B57b8f0:L57b8f0:{c.instructions+=4;NFSU2_TR(0x57b8f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B57b8f3:{NFSU2_TR(0x57b8f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B57b8f7:{NFSU2_TR(0x57b8f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b8f8:{NFSU2_TR(0x57b8f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57b8fdull));
TAIL_STATIC(0x43dbb0u,43d);
}
B57b8fd:L57b8fd:{c.instructions+=4;NFSU2_TR(0x57b8fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57b900:{NFSU2_TR(0x57b900);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57b903:{NFSU2_TR(0x57b903);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B57b905:{NFSU2_TR(0x57b905);
if(r1(R+512)){{goto L57b94f;}}
}
B57b907:L57b907:{c.instructions+=4;NFSU2_TR(0x57b907);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B57b909:{NFSU2_TR(0x57b909);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B57b90b:{NFSU2_TR(0x57b90b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57b90d:{NFSU2_TR(0x57b90d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57b943;}}
}
B57b90f:L57b90f:{c.instructions+=2;NFSU2_TR(0x57b90f);
__builtin_memmove((R+28),(R+4),4);
}
B57b911:{NFSU2_TR(0x57b911);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+4))));
}
B57b913:L57b913:{c.instructions+=3;NFSU2_TR(0x57b913);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B57b916:{NFSU2_TR(0x57b916);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x61ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B57b919:{NFSU2_TR(0x57b919);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L57b923;}}
}
B57b91b:L57b91b:{c.instructions+=2;NFSU2_TR(0x57b91b);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x7aull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B57b91e:{NFSU2_TR(0x57b91e);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L57b923;}}
}
B57b920:L57b920:{c.instructions+=1;NFSU2_TR(0x57b920);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0x5full))));
}
B57b923:L57b923:{c.instructions+=5;NFSU2_TR(0x57b923);
__builtin_memmove((R+4),(R+28),4);
}
B57b925:{NFSU2_TR(0x57b925);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B57b928:{NFSU2_TR(0x57b928);
u8 U[13];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B57b92c:{NFSU2_TR(0x57b92c);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x61ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B57b92f:{NFSU2_TR(0x57b92f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L57b939;}}
}
B57b931:L57b931:{c.instructions+=2;NFSU2_TR(0x57b931);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x7aull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B57b934:{NFSU2_TR(0x57b934);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L57b939;}}
}
B57b936:L57b936:{c.instructions+=1;NFSU2_TR(0x57b936);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x5full))));
}
B57b939:L57b939:{c.instructions+=2;NFSU2_TR(0x57b939);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(R+8))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B57b93b:{NFSU2_TR(0x57b93b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57b94f;}}
}
B57b93d:L57b93d:{c.instructions+=4;NFSU2_TR(0x57b93d);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B57b93e:{NFSU2_TR(0x57b93e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B57b93f:{NFSU2_TR(0x57b93f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57b941:{NFSU2_TR(0x57b941);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57b913u);}goto L57b913;}}
}
B57b943:L57b943:{c.instructions+=4;NFSU2_TR(0x57b943);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57b947:{NFSU2_TR(0x57b947);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b948:{NFSU2_TR(0x57b948);
__builtin_memmove((R+4),(R+12),4);
}
B57b94a:{NFSU2_TR(0x57b94a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57b94full));
TAIL_STATIC(0x579cb0u,579);
}
B57b94f:L57b94f:{c.instructions+=9;NFSU2_TR(0x57b94f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57b953:{NFSU2_TR(0x57b953);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57b957:{NFSU2_TR(0x57b957);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57b95a:{NFSU2_TR(0x57b95a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B57b95b:{NFSU2_TR(0x57b95b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x34ull))));
}
B57b95e:{NFSU2_TR(0x57b95e);
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
B57b960:{NFSU2_TR(0x57b960);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b964:{NFSU2_TR(0x57b964);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57b968:{NFSU2_TR(0x57b968);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57b8f0u);}goto L57b8f0;}}
}
B57b96a:L57b96a:{c.instructions+=3;NFSU2_TR(0x57b96a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57b96b:{NFSU2_TR(0x57b96b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57b96c:{NFSU2_TR(0x57b96c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57b96d:L57b96d:{c.instructions+=3;NFSU2_TR(0x57b96d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57b96e:{NFSU2_TR(0x57b96e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B57b96f:{NFSU2_TR(0x57b96f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57b980:L57b980:{c.instructions+=8;NFSU2_TR(0x57b980);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b981:{NFSU2_TR(0x57b981);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B57b985:{NFSU2_TR(0x57b985);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b986:{NFSU2_TR(0x57b986);
u8 U[4];
w4(U+0,u32(0x7a08e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b98b:{NFSU2_TR(0x57b98b);
__builtin_memmove((R+28),(R+4),4);
}
B57b98d:{NFSU2_TR(0x57b98d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b98f:{NFSU2_TR(0x57b98f);
__builtin_memmove((R+4),(R+24),4);
}
B57b991:{NFSU2_TR(0x57b991);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57b996ull));
TAIL_STATIC(0x578ce0u,578);
}
B57b996:L57b996:{c.instructions+=3;NFSU2_TR(0x57b996);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b997:{NFSU2_TR(0x57b997);
__builtin_memmove((R+4),(R+28),4);
}
B57b999:{NFSU2_TR(0x57b999);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57b99eull));
TAIL_STATIC(0x579df0u,579);
}
B57b99e:L57b99e:{c.instructions+=5;NFSU2_TR(0x57b99e);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B57b9a1:{NFSU2_TR(0x57b9a1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57b9a3:{NFSU2_TR(0x57b9a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57b9a7:{NFSU2_TR(0x57b9a7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b9a9:{NFSU2_TR(0x57b9a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57b9ba;}}
}
B57b9ab:L57b9ab:{c.instructions+=5;NFSU2_TR(0x57b9ab);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B57b9af:{NFSU2_TR(0x57b9af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b9b0:{NFSU2_TR(0x57b9b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b9b1:{NFSU2_TR(0x57b9b1);
__builtin_memmove((R+4),(R+24),4);
}
B57b9b3:{NFSU2_TR(0x57b9b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57b9b8ull));
TAIL_STATIC(0x578a00u,578);
}
B57b9b8:L57b9b8:{c.instructions+=1;NFSU2_TR(0x57b9b8);
{goto L57b9cf;}
}
B57b9ba:L57b9ba:{c.instructions+=8;NFSU2_TR(0x57b9ba);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B57b9be:{NFSU2_TR(0x57b9be);
w4(R+0,u32(r1(R+0)));
}
B57b9c1:{NFSU2_TR(0x57b9c1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B57b9c4:{NFSU2_TR(0x57b9c4);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b9c6:{NFSU2_TR(0x57b9c6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b9c7:{NFSU2_TR(0x57b9c7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b9c8:{NFSU2_TR(0x57b9c8);
__builtin_memmove((R+4),(R+24),4);
}
B57b9ca:{NFSU2_TR(0x57b9ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57b9cfull));
TAIL_STATIC(0x571640u,571);
}
B57b9cf:L57b9cf:{c.instructions+=3;NFSU2_TR(0x57b9cf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B57b9d2:{NFSU2_TR(0x57b9d2);
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
B57b9d4:{NFSU2_TR(0x57b9d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57b9dd;}}
}
B57b9d6:L57b9d6:{c.instructions+=3;NFSU2_TR(0x57b9d6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B57b9d9:{NFSU2_TR(0x57b9d9);
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
B57b9db:{NFSU2_TR(0x57b9db);
if(r1(R+518)){{goto L57b9e4;}}
}
B57b9dd:L57b9dd:{c.instructions+=3;NFSU2_TR(0x57b9dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B57b9df:{NFSU2_TR(0x57b9df);
__builtin_memmove((R+4),(R+28),4);
}
B57b9e1:{NFSU2_TR(0x57b9e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57b9e4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B57b9e4:L57b9e4:{c.instructions+=2;NFSU2_TR(0x57b9e4);
__builtin_memmove((R+4),(R+24),4);
}
B57b9e6:{NFSU2_TR(0x57b9e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57b9ebull));
TAIL_STATIC(0x578d90u,578);
}
B57b9eb:L57b9eb:{c.instructions+=3;NFSU2_TR(0x57b9eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57b9ec:{NFSU2_TR(0x57b9ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57b9ed:{NFSU2_TR(0x57b9ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57b9f0:L57b9f0:{c.instructions+=8;NFSU2_TR(0x57b9f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b9f1:{NFSU2_TR(0x57b9f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B57b9f5:{NFSU2_TR(0x57b9f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b9f6:{NFSU2_TR(0x57b9f6);
u8 U[4];
w4(U+0,u32(0x7a08f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b9fb:{NFSU2_TR(0x57b9fb);
__builtin_memmove((R+24),(R+4),4);
}
B57b9fd:{NFSU2_TR(0x57b9fd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57b9ff:{NFSU2_TR(0x57b9ff);
__builtin_memmove((R+4),(R+12),4);
}
B57ba01:{NFSU2_TR(0x57ba01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ba06ull));
TAIL_STATIC(0x578ce0u,578);
}
B57ba06:L57ba06:{c.instructions+=3;NFSU2_TR(0x57ba06);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ba07:{NFSU2_TR(0x57ba07);
__builtin_memmove((R+4),(R+24),4);
}
B57ba09:{NFSU2_TR(0x57ba09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ba0eull));
TAIL_STATIC(0x579df0u,579);
}
B57ba0e:L57ba0e:{c.instructions+=3;NFSU2_TR(0x57ba0e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B57ba11:{NFSU2_TR(0x57ba11);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57ba13:{NFSU2_TR(0x57ba13);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L57ba38;}}
}
B57ba15:L57ba15:{c.instructions+=4;NFSU2_TR(0x57ba15);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ba16:{NFSU2_TR(0x57ba16);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B57ba18:{NFSU2_TR(0x57ba18);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57ba1a:{NFSU2_TR(0x57ba1a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L57ba37;}}
}
B57ba1c:L57ba1c:{c.instructions+=1;NFSU2_TR(0x57ba1c);
__builtin_memmove((R+16),(R+16),4);
}
B57ba20:L57ba20:{c.instructions+=5;NFSU2_TR(0x57ba20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57ba23:{NFSU2_TR(0x57ba23);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B57ba26:{NFSU2_TR(0x57ba26);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ba27:{NFSU2_TR(0x57ba27);
__builtin_memmove((R+4),(R+12),4);
}
B57ba29:{NFSU2_TR(0x57ba29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ba2eull));
TAIL_STATIC(0x571770u,571);
}
B57ba2e:L57ba2e:{c.instructions+=4;NFSU2_TR(0x57ba2e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B57ba32:{NFSU2_TR(0x57ba32);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B57ba33:{NFSU2_TR(0x57ba33);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57ba35:{NFSU2_TR(0x57ba35);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57ba20u);}goto L57ba20;}}
}
B57ba37:L57ba37:{c.instructions+=1;NFSU2_TR(0x57ba37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57ba38:L57ba38:{c.instructions+=3;NFSU2_TR(0x57ba38);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B57ba3b:{NFSU2_TR(0x57ba3b);
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
B57ba3d:{NFSU2_TR(0x57ba3d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57ba46;}}
}
B57ba3f:L57ba3f:{c.instructions+=3;NFSU2_TR(0x57ba3f);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B57ba42:{NFSU2_TR(0x57ba42);
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
B57ba44:{NFSU2_TR(0x57ba44);
if(r1(R+518)){{goto L57ba4d;}}
}
B57ba46:L57ba46:{c.instructions+=3;NFSU2_TR(0x57ba46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57ba48:{NFSU2_TR(0x57ba48);
__builtin_memmove((R+4),(R+24),4);
}
B57ba4a:{NFSU2_TR(0x57ba4a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ba4dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B57ba4d:L57ba4d:{c.instructions+=2;NFSU2_TR(0x57ba4d);
__builtin_memmove((R+4),(R+12),4);
}
B57ba4f:{NFSU2_TR(0x57ba4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ba54ull));
TAIL_STATIC(0x578d90u,578);
}
B57ba54:L57ba54:{c.instructions+=3;NFSU2_TR(0x57ba54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57ba55:{NFSU2_TR(0x57ba55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57ba56:{NFSU2_TR(0x57ba56);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57ba60:L57ba60:{c.instructions+=8;NFSU2_TR(0x57ba60);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ba61:{NFSU2_TR(0x57ba61);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ba62:{NFSU2_TR(0x57ba62);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B57ba66:{NFSU2_TR(0x57ba66);
u8 U[4];
w4(U+0,u32(0x7845d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ba6b:{NFSU2_TR(0x57ba6b);
__builtin_memmove((R+20),(R+4),4);
}
B57ba6d:{NFSU2_TR(0x57ba6d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ba6f:{NFSU2_TR(0x57ba6f);
__builtin_memmove((R+4),(R+24),4);
}
B57ba71:{NFSU2_TR(0x57ba71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ba76ull));
TAIL_STATIC(0x578ce0u,578);
}
B57ba76:L57ba76:{c.instructions+=4;NFSU2_TR(0x57ba76);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B57ba79:{NFSU2_TR(0x57ba79);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57ba7b:{NFSU2_TR(0x57ba7b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((R+0),(U+0),4);
}
B57ba7e:{NFSU2_TR(0x57ba7e);
if(r1(R+518)){{goto L57bac4;}}
}
B57ba80:L57ba80:{c.instructions+=6;NFSU2_TR(0x57ba80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57ba86:{NFSU2_TR(0x57ba86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57ba8c:{NFSU2_TR(0x57ba8c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ba8d:{NFSU2_TR(0x57ba8d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57ba90:{NFSU2_TR(0x57ba90);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57ba92:{NFSU2_TR(0x57ba92);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L57babb;}}
}
B57ba94:L57ba94:{c.instructions+=8;NFSU2_TR(0x57ba94);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B57ba96:{NFSU2_TR(0x57ba96);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B57ba9d:{NFSU2_TR(0x57ba9d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B57baa0:{NFSU2_TR(0x57baa0);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e9ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B57baa7:{NFSU2_TR(0x57baa7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B57baaa:{NFSU2_TR(0x57baaa);
u8 U[13];
w4(U+0,u32(u32(u32(0x1eaull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B57bab1:{NFSU2_TR(0x57bab1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B57bab4:{NFSU2_TR(0x57bab4);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ebull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B57babb:L57babb:{c.instructions+=3;NFSU2_TR(0x57babb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57bac1:{NFSU2_TR(0x57bac1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57bac2:{NFSU2_TR(0x57bac2);
{goto L57bb19;}
}
B57bac4:L57bac4:{c.instructions+=3;NFSU2_TR(0x57bac4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B57bac7:{NFSU2_TR(0x57bac7);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57bac9:{NFSU2_TR(0x57bac9);
if(r1(R+518)){{goto L57badb;}}
}
B57bacb:L57bacb:{c.instructions+=6;NFSU2_TR(0x57bacb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bacd:{NFSU2_TR(0x57bacd);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bacf:{NFSU2_TR(0x57bacf);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bad1:{NFSU2_TR(0x57bad1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bad2:{NFSU2_TR(0x57bad2);
__builtin_memmove((R+4),(R+24),4);
}
B57bad4:{NFSU2_TR(0x57bad4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57bad9ull));
TAIL_STATIC(0x5715b0u,571);
}
B57bad9:L57bad9:{c.instructions+=1;NFSU2_TR(0x57bad9);
{goto L57bb19;}
}
B57badb:L57badb:{c.instructions+=3;NFSU2_TR(0x57badb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B57bade:{NFSU2_TR(0x57bade);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57bae0:{NFSU2_TR(0x57bae0);
if(r1(R+518)){{goto L57bb19;}}
}
B57bae2:L57bae2:{c.instructions+=19;NFSU2_TR(0x57bae2);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+4,u32(r1(U+0)));
}
B57bae5:{NFSU2_TR(0x57bae5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B57bae9:{NFSU2_TR(0x57bae9);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x21ull))));
}
B57baec:{NFSU2_TR(0x57baec);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B57baef:{NFSU2_TR(0x57baef);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B57baf1:{NFSU2_TR(0x57baf1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B57baf5:{NFSU2_TR(0x57baf5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B57baf8:{NFSU2_TR(0x57baf8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B57bafc:{NFSU2_TR(0x57bafc);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B57bafe:{NFSU2_TR(0x57bafe);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B57bb01:{NFSU2_TR(0x57bb01);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bb03:{NFSU2_TR(0x57bb03);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B57bb05:{NFSU2_TR(0x57bb05);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bb07:{NFSU2_TR(0x57bb07);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bb09:{NFSU2_TR(0x57bb09);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B57bb0d:{NFSU2_TR(0x57bb0d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bb0e:{NFSU2_TR(0x57bb0e);
__builtin_memmove((R+4),(R+24),4);
}
B57bb10:{NFSU2_TR(0x57bb10);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57bb14:{NFSU2_TR(0x57bb14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57bb19ull));
TAIL_STATIC(0x571550u,571);
}
B57bb19:L57bb19:{c.instructions+=6;NFSU2_TR(0x57bb19);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B57bb1d:{NFSU2_TR(0x57bb1d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B57bb20:{NFSU2_TR(0x57bb20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57bb23:{NFSU2_TR(0x57bb23);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B57bb26:{NFSU2_TR(0x57bb26);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57bb28:{NFSU2_TR(0x57bb28);
if(r1(R+518)){{goto L57bb31;}}
}
B57bb2a:L57bb2a:{c.instructions+=5;NFSU2_TR(0x57bb2a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bb2c:{NFSU2_TR(0x57bb2c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bb2d:{NFSU2_TR(0x57bb2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bb2e:{NFSU2_TR(0x57bb2e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bb2f:{NFSU2_TR(0x57bb2f);
{goto L57bb78;}
}
B57bb31:L57bb31:{c.instructions+=3;NFSU2_TR(0x57bb31);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B57bb34:{NFSU2_TR(0x57bb34);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57bb36:{NFSU2_TR(0x57bb36);
if(r1(R+518)){{goto L57bb58;}}
}
B57bb38:L57bb38:{c.instructions+=6;NFSU2_TR(0x57bb38);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bb3a:{NFSU2_TR(0x57bb3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bb3b:{NFSU2_TR(0x57bb3b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bb3c:{NFSU2_TR(0x57bb3c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bb3d:{NFSU2_TR(0x57bb3d);
__builtin_memmove((R+4),(R+24),4);
}
B57bb3f:{NFSU2_TR(0x57bb3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57bb44ull));
TAIL_STATIC(0x5715b0u,571);
}
B57bb44:L57bb44:{c.instructions+=3;NFSU2_TR(0x57bb44);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bb45:{NFSU2_TR(0x57bb45);
__builtin_memmove((R+4),(R+20),4);
}
B57bb47:{NFSU2_TR(0x57bb47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57bb4cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57b9f0u);}goto L57b9f0;}
}
B57bb4c:L57bb4c:{c.instructions+=2;NFSU2_TR(0x57bb4c);
__builtin_memmove((R+4),(R+24),4);
}
B57bb4e:{NFSU2_TR(0x57bb4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57bb53ull));
TAIL_STATIC(0x578d90u,578);
}
B57bb53:L57bb53:{c.instructions+=3;NFSU2_TR(0x57bb53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57bb54:{NFSU2_TR(0x57bb54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57bb55:{NFSU2_TR(0x57bb55);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57bb58:L57bb58:{c.instructions+=3;NFSU2_TR(0x57bb58);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B57bb5b:{NFSU2_TR(0x57bb5b);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57bb5d:{NFSU2_TR(0x57bb5d);
if(r1(R+518)){{goto L57bb7f;}}
}
B57bb5f:L57bb5f:{c.instructions+=5;NFSU2_TR(0x57bb5f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bb60:{NFSU2_TR(0x57bb60);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bb61:{NFSU2_TR(0x57bb61);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bb62:{NFSU2_TR(0x57bb62);
__builtin_memmove((R+4),(R+24),4);
}
B57bb64:{NFSU2_TR(0x57bb64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57bb69ull));
TAIL_STATIC(0x571520u,571);
}
B57bb69:L57bb69:{c.instructions+=6;NFSU2_TR(0x57bb69);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bb6b:{NFSU2_TR(0x57bb6b);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bb6d:{NFSU2_TR(0x57bb6d);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bb6f:{NFSU2_TR(0x57bb6f);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B57bb73:{NFSU2_TR(0x57bb73);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57bb77:{NFSU2_TR(0x57bb77);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bb78:L57bb78:{c.instructions+=2;NFSU2_TR(0x57bb78);
__builtin_memmove((R+4),(R+24),4);
}
B57bb7a:{NFSU2_TR(0x57bb7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57bb7full));
TAIL_STATIC(0x571550u,571);
}
B57bb7f:L57bb7f:{c.instructions+=3;NFSU2_TR(0x57bb7f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bb80:{NFSU2_TR(0x57bb80);
__builtin_memmove((R+4),(R+20),4);
}
B57bb82:{NFSU2_TR(0x57bb82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57bb87ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57b9f0u);}goto L57b9f0;}
}
B57bb87:L57bb87:{c.instructions+=2;NFSU2_TR(0x57bb87);
__builtin_memmove((R+4),(R+24),4);
}
B57bb89:{NFSU2_TR(0x57bb89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57bb8eull));
TAIL_STATIC(0x578d90u,578);
}
B57bb8e:L57bb8e:{c.instructions+=3;NFSU2_TR(0x57bb8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57bb8f:{NFSU2_TR(0x57bb8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57bb90:{NFSU2_TR(0x57bb90);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57bba0:L57bba0:{c.instructions+=6;NFSU2_TR(0x57bba0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bba1:{NFSU2_TR(0x57bba1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B57bba5:{NFSU2_TR(0x57bba5);
u8 U[4];
w4(U+0,u32(0x7a0904ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bbaa:{NFSU2_TR(0x57bbaa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bbac:{NFSU2_TR(0x57bbac);
__builtin_memmove((R+4),(R+24),4);
}
B57bbae:{NFSU2_TR(0x57bbae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57bbb3ull));
TAIL_STATIC(0x578ce0u,578);
}
B57bbb3:L57bbb3:{c.instructions+=3;NFSU2_TR(0x57bbb3);
u8 U[4];
w4(U+0,u32(0x86518cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bbb8:{NFSU2_TR(0x57bbb8);
__builtin_memmove((R+4),(R+24),4);
}
B57bbba:{NFSU2_TR(0x57bbba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57bbbfull));
TAIL_STATIC(0x571770u,571);
}
B57bbbf:L57bbbf:{c.instructions+=3;NFSU2_TR(0x57bbbf);
u8 U[4];
w4(U+0,u32(0x7fb718ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bbc4:{NFSU2_TR(0x57bbc4);
__builtin_memmove((R+4),(R+24),4);
}
B57bbc6:{NFSU2_TR(0x57bbc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57bbcbull));
TAIL_STATIC(0x571770u,571);
}
B57bbcb:L57bbcb:{c.instructions+=3;NFSU2_TR(0x57bbcb);
u8 U[4];
w4(U+0,u32(0x7fb724ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bbd0:{NFSU2_TR(0x57bbd0);
__builtin_memmove((R+4),(R+24),4);
}
B57bbd2:{NFSU2_TR(0x57bbd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57bbd7ull));
TAIL_STATIC(0x571770u,571);
}
B57bbd7:L57bbd7:{c.instructions+=3;NFSU2_TR(0x57bbd7);
u8 U[4];
w4(U+0,u32(0x7fb720ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bbdc:{NFSU2_TR(0x57bbdc);
__builtin_memmove((R+4),(R+24),4);
}
B57bbde:{NFSU2_TR(0x57bbde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57bbe3ull));
TAIL_STATIC(0x571770u,571);
}
B57bbe3:L57bbe3:{c.instructions+=3;NFSU2_TR(0x57bbe3);
u8 U[4];
w4(U+0,u32(0x865150ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bbe8:{NFSU2_TR(0x57bbe8);
__builtin_memmove((R+4),(R+24),4);
}
B57bbea:{NFSU2_TR(0x57bbea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57bbefull));
TAIL_STATIC(0x571770u,571);
}
B57bbef:L57bbef:{c.instructions+=3;NFSU2_TR(0x57bbef);
u8 U[4];
w4(U+0,u32(0x7fb71cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bbf4:{NFSU2_TR(0x57bbf4);
__builtin_memmove((R+4),(R+24),4);
}
B57bbf6:{NFSU2_TR(0x57bbf6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57bbfbull));
TAIL_STATIC(0x571770u,571);
}
B57bbfb:L57bbfb:{c.instructions+=3;NFSU2_TR(0x57bbfb);
u8 U[4];
w4(U+0,u32(0x865158ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bc00:{NFSU2_TR(0x57bc00);
__builtin_memmove((R+4),(R+24),4);
}
B57bc02:{NFSU2_TR(0x57bc02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57bc07ull));
TAIL_STATIC(0x571770u,571);
}
B57bc07:L57bc07:{c.instructions+=3;NFSU2_TR(0x57bc07);
__builtin_memmove((R+4),(R+24),4);
}
B57bc09:{NFSU2_TR(0x57bc09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57bc0a:{NFSU2_TR(0x57bc0a);
TAIL_STATIC(0x578d90u,578);
}
B57bc10:L57bc10:{c.instructions+=5;NFSU2_TR(0x57bc10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bc11:{NFSU2_TR(0x57bc11);
__builtin_memmove((R+24),(R+4),4);
}
B57bc13:{NFSU2_TR(0x57bc13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57bc15:{NFSU2_TR(0x57bc15);
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
B57bc17:{NFSU2_TR(0x57bc17);
if(r1(R+518)){{goto L57bc3f;}}
}
B57bc19:L57bc19:{c.instructions+=1;NFSU2_TR(0x57bc19);
__builtin_memmove((R+16),(R+16),4);
}
B57bc20:L57bc20:{c.instructions+=8;NFSU2_TR(0x57bc20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B57bc22:{NFSU2_TR(0x57bc22);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57bc25:{NFSU2_TR(0x57bc25);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B57bc27:{NFSU2_TR(0x57bc27);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bc28:{NFSU2_TR(0x57bc28);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57bc2b:{NFSU2_TR(0x57bc2b);
__builtin_memmove((R+0),gp(0x8650bc),4);
}
B57bc30:{NFSU2_TR(0x57bc30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bc31:{NFSU2_TR(0x57bc31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57bc36ull));
TAIL_STATIC(0x43f920u,43f);
}
B57bc36:L57bc36:{c.instructions+=4;NFSU2_TR(0x57bc36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57bc38:{NFSU2_TR(0x57bc38);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B57bc3b:{NFSU2_TR(0x57bc3b);
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
B57bc3d:{NFSU2_TR(0x57bc3d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57bc20u);}goto L57bc20;}}
}
B57bc3f:L57bc3f:{c.instructions+=2;NFSU2_TR(0x57bc3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57bc40:{NFSU2_TR(0x57bc40);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57bc50:L57bc50:{c.instructions+=5;NFSU2_TR(0x57bc50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bc51:{NFSU2_TR(0x57bc51);
__builtin_memmove((R+24),(R+4),4);
}
B57bc53:{NFSU2_TR(0x57bc53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57bc55:{NFSU2_TR(0x57bc55);
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
B57bc57:{NFSU2_TR(0x57bc57);
if(r1(R+518)){{goto L57bc7f;}}
}
B57bc59:L57bc59:{c.instructions+=1;NFSU2_TR(0x57bc59);
__builtin_memmove((R+16),(R+16),4);
}
B57bc60:L57bc60:{c.instructions+=8;NFSU2_TR(0x57bc60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B57bc62:{NFSU2_TR(0x57bc62);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57bc65:{NFSU2_TR(0x57bc65);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B57bc67:{NFSU2_TR(0x57bc67);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bc68:{NFSU2_TR(0x57bc68);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57bc6b:{NFSU2_TR(0x57bc6b);
__builtin_memmove((R+0),gp(0x8650f0),4);
}
B57bc70:{NFSU2_TR(0x57bc70);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bc71:{NFSU2_TR(0x57bc71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57bc76ull));
TAIL_STATIC(0x43f920u,43f);
}
B57bc76:L57bc76:{c.instructions+=4;NFSU2_TR(0x57bc76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57bc78:{NFSU2_TR(0x57bc78);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B57bc7b:{NFSU2_TR(0x57bc7b);
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
B57bc7d:{NFSU2_TR(0x57bc7d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57bc60u);}goto L57bc60;}}
}
B57bc7f:L57bc7f:{c.instructions+=2;NFSU2_TR(0x57bc7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57bc80:{NFSU2_TR(0x57bc80);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57bc90:L57bc90:{c.instructions+=5;NFSU2_TR(0x57bc90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bc91:{NFSU2_TR(0x57bc91);
__builtin_memmove((R+24),(R+4),4);
}
B57bc93:{NFSU2_TR(0x57bc93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57bc95:{NFSU2_TR(0x57bc95);
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
B57bc97:{NFSU2_TR(0x57bc97);
if(r1(R+518)){{goto L57bcbf;}}
}
B57bc99:L57bc99:{c.instructions+=1;NFSU2_TR(0x57bc99);
__builtin_memmove((R+16),(R+16),4);
}
B57bca0:L57bca0:{c.instructions+=8;NFSU2_TR(0x57bca0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B57bca2:{NFSU2_TR(0x57bca2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57bca5:{NFSU2_TR(0x57bca5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B57bca7:{NFSU2_TR(0x57bca7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bca8:{NFSU2_TR(0x57bca8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57bcab:{NFSU2_TR(0x57bcab);
__builtin_memmove((R+0),gp(0x865104),4);
}
B57bcb0:{NFSU2_TR(0x57bcb0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bcb1:{NFSU2_TR(0x57bcb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57bcb6ull));
TAIL_STATIC(0x43f920u,43f);
}
B57bcb6:L57bcb6:{c.instructions+=4;NFSU2_TR(0x57bcb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57bcb8:{NFSU2_TR(0x57bcb8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B57bcbb:{NFSU2_TR(0x57bcbb);
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
B57bcbd:{NFSU2_TR(0x57bcbd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57bca0u);}goto L57bca0;}}
}
B57bcbf:L57bcbf:{c.instructions+=2;NFSU2_TR(0x57bcbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57bcc0:{NFSU2_TR(0x57bcc0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57bcd0:L57bcd0:{c.instructions+=4;NFSU2_TR(0x57bcd0);
__builtin_memmove((R+0),(R+4),4);
}
B57bcd2:{NFSU2_TR(0x57bcd2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B57bcd4:{NFSU2_TR(0x57bcd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57bcd7:{NFSU2_TR(0x57bcd7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57bce0:L57bce0:{c.instructions+=4;NFSU2_TR(0x57bce0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bce1:{NFSU2_TR(0x57bce1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B57bce5:{NFSU2_TR(0x57bce5);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x8003b000ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B57bceb:{NFSU2_TR(0x57bceb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57bd5e;}}
}
B57bced:L57bced:{c.instructions+=6;NFSU2_TR(0x57bced);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57bcf0:{NFSU2_TR(0x57bcf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bcf1:{NFSU2_TR(0x57bcf1);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57bcf4:{NFSU2_TR(0x57bcf4);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B57bcf8:{NFSU2_TR(0x57bcf8);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B57bcfa:{NFSU2_TR(0x57bcfa);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L57bd56;}}
}
B57bcfc:L57bcfc:{c.instructions+=3;NFSU2_TR(0x57bcfc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bcfd:{NFSU2_TR(0x57bcfd);
w4(R+4,u32(0x865210ull));
}
B57bd02:{NFSU2_TR(0x57bd02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57bd07ull));
TAIL_STATIC(0x502fd0u,502);
}
B57bd07:L57bd07:{c.instructions+=2;NFSU2_TR(0x57bd07);
__builtin_memmove((R+28),(R+0),4);
}
B57bd09:{NFSU2_TR(0x57bd09);
__builtin_memmove((R+16),(R+16),4);
}
B57bd10:L57bd10:{c.instructions+=6;NFSU2_TR(0x57bd10);
__builtin_memmove((R+0),gp(0x865210),4);
}
B57bd15:{NFSU2_TR(0x57bd15);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1full))));
__builtin_memmove((R+8),(U+0),4);
}
B57bd18:{NFSU2_TR(0x57bd18);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffff0ull))));
}
B57bd1b:{NFSU2_TR(0x57bd1b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57bd1d:{NFSU2_TR(0x57bd1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B57bd1f:{NFSU2_TR(0x57bd1f);
if(r1(R+518)){{goto L57bd43;}}
}
B57bd21:L57bd21:{c.instructions+=3;NFSU2_TR(0x57bd21);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57bd24:{NFSU2_TR(0x57bd24);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+4))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B57bd26:{NFSU2_TR(0x57bd26);
if(r1(R+518)){{goto L57bd30;}}
}
B57bd28:L57bd28:{c.instructions+=3;NFSU2_TR(0x57bd28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57bd2a:{NFSU2_TR(0x57bd2a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57bd2c:{NFSU2_TR(0x57bd2c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57bd21u);}goto L57bd21;}}
}
B57bd2e:L57bd2e:{c.instructions+=1;NFSU2_TR(0x57bd2e);
{goto L57bd43;}
}
B57bd30:L57bd30:{c.instructions+=6;NFSU2_TR(0x57bd30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B57bd32:{NFSU2_TR(0x57bd32);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57bd35:{NFSU2_TR(0x57bd35);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B57bd37:{NFSU2_TR(0x57bd37);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bd38:{NFSU2_TR(0x57bd38);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57bd3b:{NFSU2_TR(0x57bd3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57bd40ull));
TAIL_STATIC(0x440ef0u,440);
}
B57bd40:L57bd40:{c.instructions+=1;NFSU2_TR(0x57bd40);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57bd43:L57bd43:{c.instructions+=6;NFSU2_TR(0x57bd43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57bd46:{NFSU2_TR(0x57bd46);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57bd49:{NFSU2_TR(0x57bd49);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B57bd4d:{NFSU2_TR(0x57bd4d);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B57bd51:{NFSU2_TR(0x57bd51);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B57bd53:{NFSU2_TR(0x57bd53);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57bd10u);}goto L57bd10;}}
}
B57bd55:L57bd55:{c.instructions+=1;NFSU2_TR(0x57bd55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57bd56:L57bd56:{c.instructions+=4;NFSU2_TR(0x57bd56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57bd57:{NFSU2_TR(0x57bd57);
w4(R+0,u32(0x1ull));
}
B57bd5c:{NFSU2_TR(0x57bd5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57bd5d:{NFSU2_TR(0x57bd5d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57bd5e:L57bd5e:{c.instructions+=3;NFSU2_TR(0x57bd5e);
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
B57bd60:{NFSU2_TR(0x57bd60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57bd61:{NFSU2_TR(0x57bd61);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57bd70:L57bd70:{c.instructions+=10;NFSU2_TR(0x57bd70);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57bd74:{NFSU2_TR(0x57bd74);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bd75:{NFSU2_TR(0x57bd75);
__builtin_memmove((R+24),(R+4),4);
}
B57bd77:{NFSU2_TR(0x57bd77);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57bd7b:{NFSU2_TR(0x57bd7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57bd81:{NFSU2_TR(0x57bd81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57bd87:{NFSU2_TR(0x57bd87);
s4(0x864f54,u32(u32(m4(0x864f54))+u32(u32(0x1ull))));
}
B57bd8d:{NFSU2_TR(0x57bd8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57bd93:{NFSU2_TR(0x57bd93);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57bd95:{NFSU2_TR(0x57bd95);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57bdd2;}}
}
B57bd97:L57bd97:{c.instructions+=8;NFSU2_TR(0x57bd97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57bd9a:{NFSU2_TR(0x57bd9a);
__builtin_memmove((R+0),(R+4),4);
}
B57bd9c:{NFSU2_TR(0x57bd9c);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B57bd9f:{NFSU2_TR(0x57bd9f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bda0:{NFSU2_TR(0x57bda0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B57bda6:{NFSU2_TR(0x57bda6);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
}
B57bda8:{NFSU2_TR(0x57bda8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57bdaa:{NFSU2_TR(0x57bdaa);
if(r1(R+518)){{goto L57bdd1;}}
}
B57bdac:L57bdac:{c.instructions+=3;NFSU2_TR(0x57bdac);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57bdaf:{NFSU2_TR(0x57bdaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57bdb5:{NFSU2_TR(0x57bdb5);
if(r1(R+518)){{goto L57bdba;}}
}
B57bdb7:L57bdb7:{c.instructions+=1;NFSU2_TR(0x57bdb7);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x8ull))));
}
B57bdba:L57bdba:{c.instructions+=2;NFSU2_TR(0x57bdba);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57bdbc:{NFSU2_TR(0x57bdbc);
if(r1(R+518)){{goto L57bdc1;}}
}
B57bdbe:L57bdbe:{c.instructions+=1;NFSU2_TR(0x57bdbe);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x8ull))));
}
B57bdc1:L57bdc1:{c.instructions+=3;NFSU2_TR(0x57bdc1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bdc2:{NFSU2_TR(0x57bdc2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bdc3:{NFSU2_TR(0x57bdc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57bdc8ull));
TAIL_STATIC(0x440820u,440);
}
B57bdc8:L57bdc8:{c.instructions+=2;NFSU2_TR(0x57bdc8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B57bdcb:{NFSU2_TR(0x57bdcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57bdd1:L57bdd1:{c.instructions+=1;NFSU2_TR(0x57bdd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57bdd2:L57bdd2:{c.instructions+=3;NFSU2_TR(0x57bdd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57bdd8:{NFSU2_TR(0x57bdd8);
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
B57bdda:{NFSU2_TR(0x57bdda);
if(r1(R+518)){{goto L57be1f;}}
}
B57bddc:L57bddc:{c.instructions+=13;NFSU2_TR(0x57bddc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57bde2:{NFSU2_TR(0x57bde2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57bde5:{NFSU2_TR(0x57bde5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bde6:{NFSU2_TR(0x57bde6);
u8 U[4];
w4(U+0,u32(0x571050ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bdeb:{NFSU2_TR(0x57bdeb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bdec:{NFSU2_TR(0x57bdec);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B57bded:{NFSU2_TR(0x57bded);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bdee:{NFSU2_TR(0x57bdee);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B57bdf1:{NFSU2_TR(0x57bdf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57bdf7:{NFSU2_TR(0x57bdf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57bdfd:{NFSU2_TR(0x57bdfd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bdfe:{NFSU2_TR(0x57bdfe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bdff:{NFSU2_TR(0x57bdff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57be04ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57b4a0u);}goto L57b4a0;}
}
B57be04:L57be04:{c.instructions+=2;NFSU2_TR(0x57be04);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57be05:{NFSU2_TR(0x57be05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57be0aull));
TAIL_STATIC(0x5797b0u,579);
}
B57be0a:L57be0a:{c.instructions+=3;NFSU2_TR(0x57be0a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B57be0d:{NFSU2_TR(0x57be0d);
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
B57be0f:{NFSU2_TR(0x57be0f);
if(r1(R+518)){{goto L57be1f;}}
}
B57be11:L57be11:{c.instructions+=2;NFSU2_TR(0x57be11);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57be18:{NFSU2_TR(0x57be18);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
w4(U+4,u32(0x2000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57be1f:L57be1f:{c.instructions+=2;NFSU2_TR(0x57be1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57be20:{NFSU2_TR(0x57be20);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57be30:L57be30:{c.instructions+=8;NFSU2_TR(0x57be30);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57be31:{NFSU2_TR(0x57be31);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57be32:{NFSU2_TR(0x57be32);
__builtin_memmove((R+28),(R+4),4);
}
B57be34:{NFSU2_TR(0x57be34);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57be37:{NFSU2_TR(0x57be37);
__builtin_memmove((R+4),gp(0x7fb724),4);
}
B57be3d:{NFSU2_TR(0x57be3d);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B57be3f:{NFSU2_TR(0x57be3f);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57be41:{NFSU2_TR(0x57be41);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57bec6;}}
}
B57be47:L57be47:{c.instructions+=2;NFSU2_TR(0x57be47);
u8 U[8];
__builtin_memmove((U+0),gp(0x8650d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+20))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57be4d:{NFSU2_TR(0x57be4d);
if(r1(R+518)){{goto L57bec6;}}
}
B57be4f:L57be4f:{c.instructions+=4;NFSU2_TR(0x57be4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57be52:{NFSU2_TR(0x57be52);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B57be53:{NFSU2_TR(0x57be53);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57be55:{NFSU2_TR(0x57be55);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57bec6;}}
}
B57be57:L57be57:{c.instructions+=6;NFSU2_TR(0x57be57);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57be5e:{NFSU2_TR(0x57be5e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57be5f:{NFSU2_TR(0x57be5f);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
w2(U+4,u16(0x1bdull));
s2(u32(r4(U+0)),r2(U+4));
}
B57be65:{NFSU2_TR(0x57be65);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x36ull))));
__builtin_memmove((U+4),(R+20),2);
s2(u32(r4(U+0)),r2(U+4));
}
B57be69:{NFSU2_TR(0x57be69);
w4(R+12,u32(0x2ull));
}
B57be6e:{NFSU2_TR(0x57be6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57be73ull));
TAIL_STATIC(0x4a7c40u,4a7);
}
B57be73:L57be73:{c.instructions+=2;NFSU2_TR(0x57be73);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57be75:{NFSU2_TR(0x57be75);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57beb1;}}
}
B57be77:L57be77:{c.instructions+=3;NFSU2_TR(0x57be77);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57be78:{NFSU2_TR(0x57be78);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57be7b:{NFSU2_TR(0x57be7b);
{goto L57be80;}
}
B57be80:L57be80:{c.instructions+=14;NFSU2_TR(0x57be80);
u8 U[2];
w2(U+0,u16(0x12dull));
s2(u32(r4(R+24)),r2(U+0));
}
B57be85:{NFSU2_TR(0x57be85);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B57be88:{NFSU2_TR(0x57be88);
u8 U[2];
w2(U+0,u16(0x2dull));
s2(u32(r4(R+24)),r2(U+0));
}
B57be8d:{NFSU2_TR(0x57be8d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B57be90:{NFSU2_TR(0x57be90);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B57be91:{NFSU2_TR(0x57be91);
u8 U[2];
w2(U+0,u16(0x0ull));
s2(u32(r4(R+24)),r2(U+0));
}
B57be96:{NFSU2_TR(0x57be96);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B57be97:{NFSU2_TR(0x57be97);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B57be9a:{NFSU2_TR(0x57be9a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B57be9b:{NFSU2_TR(0x57be9b);
u8 U[2];
w2(U+0,u16(0x0ull));
s2(u32(r4(R+24)),r2(U+0));
}
B57bea0:{NFSU2_TR(0x57bea0);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B57bea1:{NFSU2_TR(0x57bea1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B57bea4:{NFSU2_TR(0x57bea4);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B57bea5:{NFSU2_TR(0x57bea5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57beaaull));
TAIL_STATIC(0x4a7c40u,4a7);
}
B57beaa:L57beaa:{c.instructions+=2;NFSU2_TR(0x57beaa);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57beac:{NFSU2_TR(0x57beac);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57be80u);}goto L57be80;}}
}
B57beae:L57beae:{c.instructions+=2;NFSU2_TR(0x57beae);
w1(R+512,u8(0x0ull));
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B57beb0:{NFSU2_TR(0x57beb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57beb1:L57beb1:{c.instructions+=9;NFSU2_TR(0x57beb1);
u8 U[14];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w2(U+12,u16(0x125ull));
s2(u32(r4(U+8)),r2(U+12));
}
B57beb8:{NFSU2_TR(0x57beb8);
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
B57beb9:{NFSU2_TR(0x57beb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57bebc:{NFSU2_TR(0x57bebc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57bebd:{NFSU2_TR(0x57bebd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57bec0:{NFSU2_TR(0x57bec0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57bec3:{NFSU2_TR(0x57bec3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57bec4:{NFSU2_TR(0x57bec4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57bec5:{NFSU2_TR(0x57bec5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57bec6:L57bec6:{c.instructions+=2;NFSU2_TR(0x57bec6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57bec9:{NFSU2_TR(0x57bec9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57bed7;}}
}
B57becb:L57becb:{c.instructions+=5;NFSU2_TR(0x57becb);
__builtin_memmove(gp(0x8650d0),(R+20),4);
}
B57bed1:{NFSU2_TR(0x57bed1);
u8 U[14];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
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
B57bed4:{NFSU2_TR(0x57bed4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57bed5:{NFSU2_TR(0x57bed5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57bed6:{NFSU2_TR(0x57bed6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57bed7:L57bed7:{c.instructions+=2;NFSU2_TR(0x57bed7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57beda:{NFSU2_TR(0x57beda);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57beef;}}
}
B57bedc:L57bedc:{c.instructions+=2;NFSU2_TR(0x57bedc);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7cull))));
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
B57bedf:{NFSU2_TR(0x57bedf);
if(r1(R+518)){{goto L57bfd8;}}
}
B57bee5:L57bee5:{c.instructions+=4;NFSU2_TR(0x57bee5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57beec:{NFSU2_TR(0x57beec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57beed:{NFSU2_TR(0x57beed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57beee:{NFSU2_TR(0x57beee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57beef:L57beef:{c.instructions+=2;NFSU2_TR(0x57beef);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57bef2:{NFSU2_TR(0x57bef2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57bfb3;}}
}
B57bef8:L57bef8:{c.instructions+=2;NFSU2_TR(0x57bef8);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7cull))));
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
B57befb:{NFSU2_TR(0x57befb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57bfd8;}}
}
B57bf01:L57bf01:{c.instructions+=6;NFSU2_TR(0x57bf01);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57bf04:{NFSU2_TR(0x57bf04);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
}
B57bf07:{NFSU2_TR(0x57bf07);
u8 U[4];
w4(U+0,u32(0x7a0934ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bf0c:{NFSU2_TR(0x57bf0c);
__builtin_memmove((R+4),(R+28),4);
}
B57bf0e:{NFSU2_TR(0x57bf0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57bf11:{NFSU2_TR(0x57bf11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57bf16ull));
TAIL_STATIC(0x57ad30u,57a);
}
B57bf16:L57bf16:{c.instructions+=3;NFSU2_TR(0x57bf16);
u8 U[4];
w4(U+0,u32(0x7a0928ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bf1b:{NFSU2_TR(0x57bf1b);
__builtin_memmove((R+4),(R+28),4);
}
B57bf1d:{NFSU2_TR(0x57bf1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57bf22ull));
TAIL_STATIC(0x57ad30u,57a);
}
B57bf22:L57bf22:{c.instructions+=3;NFSU2_TR(0x57bf22);
u8 U[4];
w4(U+0,u32(0x7a091cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bf27:{NFSU2_TR(0x57bf27);
__builtin_memmove((R+4),(R+28),4);
}
B57bf29:{NFSU2_TR(0x57bf29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57bf2eull));
TAIL_STATIC(0x57ad30u,57a);
}
B57bf2e:L57bf2e:{c.instructions+=3;NFSU2_TR(0x57bf2e);
u8 U[4];
w4(U+0,u32(0x7a0910ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bf33:{NFSU2_TR(0x57bf33);
__builtin_memmove((R+4),(R+28),4);
}
B57bf35:{NFSU2_TR(0x57bf35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57bf3aull));
TAIL_STATIC(0x57ad30u,57a);
}
B57bf3a:L57bf3a:{c.instructions+=32;NFSU2_TR(0x57bf3a);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+20),2);
s2(u32(r4(U+0)),r2(U+4));
}
B57bf3e:{NFSU2_TR(0x57bf3e);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x36ull))));
w2(U+4,u16(0x11eull));
s2(u32(r4(U+0)),r2(U+4));
}
B57bf44:{NFSU2_TR(0x57bf44);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
w2(U+4,u16(0x1eull));
s2(u32(r4(U+0)),r2(U+4));
}
B57bf4a:{NFSU2_TR(0x57bf4a);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3aull))));
__builtin_memmove((U+4),(R+20),2);
s2(u32(r4(U+0)),r2(U+4));
}
B57bf4e:{NFSU2_TR(0x57bf4e);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+20),2);
s2(u32(r4(U+0)),r2(U+4));
}
B57bf52:{NFSU2_TR(0x57bf52);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3eull))));
__builtin_memmove((U+4),(R+20),2);
s2(u32(r4(U+0)),r2(U+4));
}
B57bf56:{NFSU2_TR(0x57bf56);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+20),2);
s2(u32(r4(U+0)),r2(U+4));
}
B57bf5a:{NFSU2_TR(0x57bf5a);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x42ull))));
__builtin_memmove((U+4),(R+20),2);
s2(u32(r4(U+0)),r2(U+4));
}
B57bf5e:{NFSU2_TR(0x57bf5e);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+20),2);
s2(u32(r4(U+0)),r2(U+4));
}
B57bf62:{NFSU2_TR(0x57bf62);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x46ull))));
__builtin_memmove((U+4),(R+20),2);
s2(u32(r4(U+0)),r2(U+4));
}
B57bf66:{NFSU2_TR(0x57bf66);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+20),2);
s2(u32(r4(U+0)),r2(U+4));
}
B57bf6a:{NFSU2_TR(0x57bf6a);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4aull))));
__builtin_memmove((U+4),(R+20),2);
s2(u32(r4(U+0)),r2(U+4));
}
B57bf6e:{NFSU2_TR(0x57bf6e);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+20),2);
s2(u32(r4(U+0)),r2(U+4));
}
B57bf72:{NFSU2_TR(0x57bf72);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4eull))));
__builtin_memmove((U+4),(R+20),2);
s2(u32(r4(U+0)),r2(U+4));
}
B57bf76:{NFSU2_TR(0x57bf76);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+20),2);
s2(u32(r4(U+0)),r2(U+4));
}
B57bf7a:{NFSU2_TR(0x57bf7a);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x52ull))));
__builtin_memmove((U+4),(R+20),2);
s2(u32(r4(U+0)),r2(U+4));
}
B57bf7e:{NFSU2_TR(0x57bf7e);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+20),2);
s2(u32(r4(U+0)),r2(U+4));
}
B57bf82:{NFSU2_TR(0x57bf82);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x56ull))));
__builtin_memmove((U+4),(R+20),2);
s2(u32(r4(U+0)),r2(U+4));
}
B57bf86:{NFSU2_TR(0x57bf86);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+20),2);
s2(u32(r4(U+0)),r2(U+4));
}
B57bf8a:{NFSU2_TR(0x57bf8a);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5aull))));
__builtin_memmove((U+4),(R+20),2);
s2(u32(r4(U+0)),r2(U+4));
}
B57bf8e:{NFSU2_TR(0x57bf8e);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+20),2);
s2(u32(r4(U+0)),r2(U+4));
}
B57bf92:{NFSU2_TR(0x57bf92);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5eull))));
__builtin_memmove((U+4),(R+20),2);
s2(u32(r4(U+0)),r2(U+4));
}
B57bf96:{NFSU2_TR(0x57bf96);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
w2(U+4,u16(0x125ull));
s2(u32(r4(U+0)),r2(U+4));
}
B57bf9c:{NFSU2_TR(0x57bf9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57bf9f:{NFSU2_TR(0x57bf9f);
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
B57bfa0:{NFSU2_TR(0x57bfa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57bfa3:{NFSU2_TR(0x57bfa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57bfa6:{NFSU2_TR(0x57bfa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
w4(U+4,u32(0x17ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57bfad:{NFSU2_TR(0x57bfad);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57bfb0:{NFSU2_TR(0x57bfb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57bfb1:{NFSU2_TR(0x57bfb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57bfb2:{NFSU2_TR(0x57bfb2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57bfb3:L57bfb3:{c.instructions+=2;NFSU2_TR(0x57bfb3);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B57bfb6:{NFSU2_TR(0x57bfb6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57bfd8;}}
}
B57bfb8:L57bfb8:{c.instructions+=3;NFSU2_TR(0x57bfb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57bfbb:{NFSU2_TR(0x57bfbb);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B57bfbe:{NFSU2_TR(0x57bfbe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L57bfd8;}}
}
B57bfc0:L57bfc0:{c.instructions+=3;NFSU2_TR(0x57bfc0);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B57bfc6:{NFSU2_TR(0x57bfc6);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x4ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B57bfc9:{NFSU2_TR(0x57bfc9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57bfd8;}}
}
B57bfcb:L57bfcb:{c.instructions+=2;NFSU2_TR(0x57bfcb);
s4(0x8650d0,u32(0x1ull));
}
B57bfd5:{NFSU2_TR(0x57bfd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57bfd8:L57bfd8:{c.instructions+=3;NFSU2_TR(0x57bfd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57bfd9:{NFSU2_TR(0x57bfd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57bfda:{NFSU2_TR(0x57bfda);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57bfe0:L57bfe0:{c.instructions+=9;NFSU2_TR(0x57bfe0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bfe1:{NFSU2_TR(0x57bfe1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B57bfe5:{NFSU2_TR(0x57bfe5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bfe6:{NFSU2_TR(0x57bfe6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B57bfe9:{NFSU2_TR(0x57bfe9);
__builtin_memmove((R+28),(R+4),4);
}
B57bfeb:{NFSU2_TR(0x57bfeb);
u8 U[4];
w4(U+0,u32(0x7a08c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bff0:{NFSU2_TR(0x57bff0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57bff1:{NFSU2_TR(0x57bff1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57bff7:{NFSU2_TR(0x57bff7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57bffcull));
TAIL_STATIC(0x43dc30u,43d);
}
B57bffc:L57bffc:{c.instructions+=2;NFSU2_TR(0x57bffc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B57bfff:{NFSU2_TR(0x57bfff);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
TAIL_STATIC(0x57c001u,57c);
}
XIT:NFSU2_TR_EXIT(0x57b,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
