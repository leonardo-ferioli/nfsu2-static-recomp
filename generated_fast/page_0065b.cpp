#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_65c(u8* __restrict R,Cpu& c);
u32 body_663(u8* __restrict R,Cpu& c);
u32 body_670(u8* __restrict R,Cpu& c);
u32 body_671(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x65b,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x65b,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_65b(u8* __restrict R,Cpu& c);
u32 page_65b(Cpu& c){return body_65b(c.regs.data(),c);}
__attribute__((noinline)) u32 body_65b(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x65b001:goto L65b001;
case 0x65b003:c.instructions+=3;goto B65b003;
case 0x65b006:c.instructions+=2;goto B65b006;
case 0x65b008:c.instructions+=1;goto B65b008;
case 0x65b00a:goto L65b00a;
case 0x65b00c:c.instructions+=2;goto B65b00c;
case 0x65b00d:c.instructions+=1;goto B65b00d;
case 0x65b010:goto L65b010;
case 0x65b011:c.instructions+=5;goto B65b011;
case 0x65b013:c.instructions+=4;goto B65b013;
case 0x65b014:c.instructions+=3;goto B65b014;
case 0x65b015:c.instructions+=2;goto B65b015;
case 0x65b016:c.instructions+=1;goto B65b016;
case 0x65b019:goto L65b019;
case 0x65b01b:c.instructions+=11;goto B65b01b;
case 0x65b01c:c.instructions+=10;goto B65b01c;
case 0x65b01e:c.instructions+=9;goto B65b01e;
case 0x65b01f:c.instructions+=8;goto B65b01f;
case 0x65b020:c.instructions+=7;goto B65b020;
case 0x65b023:c.instructions+=6;goto B65b023;
case 0x65b025:c.instructions+=5;goto B65b025;
case 0x65b028:c.instructions+=4;goto B65b028;
case 0x65b02a:c.instructions+=3;goto B65b02a;
case 0x65b02d:c.instructions+=2;goto B65b02d;
case 0x65b02e:c.instructions+=1;goto B65b02e;
case 0x65b030:goto L65b030;
case 0x65b031:goto L65b031;
case 0x65b033:c.instructions+=1;goto B65b033;
case 0x65b035:goto L65b035;
case 0x65b038:c.instructions+=1;goto B65b038;
case 0x65b03a:goto L65b03a;
case 0x65b03d:c.instructions+=1;goto B65b03d;
case 0x65b03f:goto L65b03f;
case 0x65b042:c.instructions+=1;goto B65b042;
case 0x65b044:goto L65b044;
case 0x65b047:c.instructions+=5;goto B65b047;
case 0x65b04a:c.instructions+=4;goto B65b04a;
case 0x65b04c:c.instructions+=3;goto B65b04c;
case 0x65b04e:c.instructions+=2;goto B65b04e;
case 0x65b050:c.instructions+=1;goto B65b050;
case 0x65b052:goto L65b052;
case 0x65b055:goto L65b055;
case 0x65b058:c.instructions+=2;goto B65b058;
case 0x65b059:c.instructions+=1;goto B65b059;
case 0x65b05e:goto L65b05e;
case 0x65b060:c.instructions+=2;goto B65b060;
case 0x65b063:c.instructions+=1;goto B65b063;
case 0x65b065:goto L65b065;
case 0x65b067:c.instructions+=2;goto B65b067;
case 0x65b06a:c.instructions+=1;goto B65b06a;
case 0x65b06c:goto L65b06c;
case 0x65b06f:c.instructions+=13;goto B65b06f;
case 0x65b071:c.instructions+=12;goto B65b071;
case 0x65b074:c.instructions+=11;goto B65b074;
case 0x65b077:c.instructions+=10;goto B65b077;
case 0x65b07a:c.instructions+=9;goto B65b07a;
case 0x65b07c:c.instructions+=8;goto B65b07c;
case 0x65b07e:c.instructions+=7;goto B65b07e;
case 0x65b080:c.instructions+=6;goto B65b080;
case 0x65b083:c.instructions+=5;goto B65b083;
case 0x65b085:c.instructions+=4;goto B65b085;
case 0x65b088:c.instructions+=3;goto B65b088;
case 0x65b08b:c.instructions+=2;goto B65b08b;
case 0x65b08d:c.instructions+=1;goto B65b08d;
case 0x65b08f:goto L65b08f;
case 0x65b091:goto L65b091;
case 0x65b092:c.instructions+=4;goto B65b092;
case 0x65b093:c.instructions+=3;goto B65b093;
case 0x65b094:c.instructions+=2;goto B65b094;
case 0x65b095:c.instructions+=1;goto B65b095;
case 0x65b098:goto L65b098;
case 0x65b09a:c.instructions+=10;goto B65b09a;
case 0x65b09b:c.instructions+=9;goto B65b09b;
case 0x65b09d:c.instructions+=8;goto B65b09d;
case 0x65b09e:c.instructions+=7;goto B65b09e;
case 0x65b09f:c.instructions+=6;goto B65b09f;
case 0x65b0a2:c.instructions+=5;goto B65b0a2;
case 0x65b0a4:c.instructions+=4;goto B65b0a4;
case 0x65b0a7:c.instructions+=3;goto B65b0a7;
case 0x65b0a9:c.instructions+=2;goto B65b0a9;
case 0x65b0aa:c.instructions+=1;goto B65b0aa;
case 0x65b0ac:goto L65b0ac;
case 0x65b0af:c.instructions+=1;goto B65b0af;
case 0x65b0b1:goto L65b0b1;
case 0x65b0b4:c.instructions+=1;goto B65b0b4;
case 0x65b0b6:goto L65b0b6;
case 0x65b0b9:c.instructions+=1;goto B65b0b9;
case 0x65b0bb:goto L65b0bb;
case 0x65b0be:c.instructions+=1;goto B65b0be;
case 0x65b0c0:goto L65b0c0;
case 0x65b0c3:c.instructions+=5;goto B65b0c3;
case 0x65b0c6:c.instructions+=4;goto B65b0c6;
case 0x65b0c8:c.instructions+=3;goto B65b0c8;
case 0x65b0ca:c.instructions+=2;goto B65b0ca;
case 0x65b0cc:c.instructions+=1;goto B65b0cc;
case 0x65b0ce:goto L65b0ce;
case 0x65b0cf:c.instructions+=1;goto B65b0cf;
case 0x65b0d4:goto L65b0d4;
case 0x65b0d6:c.instructions+=1;goto B65b0d6;
case 0x65b0d8:goto L65b0d8;
case 0x65b0d9:c.instructions+=2;goto B65b0d9;
case 0x65b0db:c.instructions+=1;goto B65b0db;
case 0x65b0dd:goto L65b0dd;
case 0x65b0df:goto L65b0df;
case 0x65b0e2:c.instructions+=1;goto B65b0e2;
case 0x65b0e4:goto L65b0e4;
case 0x65b0e6:c.instructions+=2;goto B65b0e6;
case 0x65b0e7:c.instructions+=1;goto B65b0e7;
case 0x65b0e9:goto L65b0e9;
case 0x65b0eb:goto L65b0eb;
case 0x65b0ec:c.instructions+=4;goto B65b0ec;
case 0x65b0ed:c.instructions+=3;goto B65b0ed;
case 0x65b0ee:c.instructions+=2;goto B65b0ee;
case 0x65b0ef:c.instructions+=1;goto B65b0ef;
case 0x65b0f2:goto L65b0f2;
case 0x65b0f4:c.instructions+=15;goto B65b0f4;
case 0x65b0f5:c.instructions+=14;goto B65b0f5;
case 0x65b0f7:c.instructions+=13;goto B65b0f7;
case 0x65b0fa:c.instructions+=12;goto B65b0fa;
case 0x65b0fd:c.instructions+=11;goto B65b0fd;
case 0x65b0ff:c.instructions+=10;goto B65b0ff;
case 0x65b102:c.instructions+=9;goto B65b102;
case 0x65b103:c.instructions+=8;goto B65b103;
case 0x65b104:c.instructions+=7;goto B65b104;
case 0x65b107:c.instructions+=6;goto B65b107;
case 0x65b108:c.instructions+=5;goto B65b108;
case 0x65b10a:c.instructions+=4;goto B65b10a;
case 0x65b10c:c.instructions+=3;goto B65b10c;
case 0x65b10f:c.instructions+=2;goto B65b10f;
case 0x65b112:c.instructions+=1;goto B65b112;
case 0x65b114:goto L65b114;
case 0x65b11b:goto L65b11b;
case 0x65b11d:c.instructions+=1;goto B65b11d;
case 0x65b123:goto L65b123;
case 0x65b126:c.instructions+=1;goto B65b126;
case 0x65b128:goto L65b128;
case 0x65b12b:c.instructions+=1;goto B65b12b;
case 0x65b131:goto L65b131;
case 0x65b135:c.instructions+=5;goto B65b135;
case 0x65b139:c.instructions+=4;goto B65b139;
case 0x65b13c:c.instructions+=3;goto B65b13c;
case 0x65b13f:c.instructions+=2;goto B65b13f;
case 0x65b141:c.instructions+=1;goto B65b141;
case 0x65b147:goto L65b147;
case 0x65b14a:c.instructions+=1;goto B65b14a;
case 0x65b14c:goto L65b14c;
case 0x65b14f:goto L65b14f;
case 0x65b152:c.instructions+=1;goto B65b152;
case 0x65b158:goto L65b158;
case 0x65b15c:c.instructions+=3;goto B65b15c;
case 0x65b15e:c.instructions+=2;goto B65b15e;
case 0x65b160:c.instructions+=1;goto B65b160;
case 0x65b162:goto L65b162;
case 0x65b165:c.instructions+=1;goto B65b165;
case 0x65b167:goto L65b167;
case 0x65b168:c.instructions+=4;goto B65b168;
case 0x65b16b:c.instructions+=3;goto B65b16b;
case 0x65b16e:c.instructions+=2;goto B65b16e;
case 0x65b171:c.instructions+=1;goto B65b171;
case 0x65b176:goto L65b176;
case 0x65b178:c.instructions+=2;goto B65b178;
case 0x65b17b:c.instructions+=1;goto B65b17b;
case 0x65b181:goto L65b181;
case 0x65b184:c.instructions+=2;goto B65b184;
case 0x65b187:c.instructions+=1;goto B65b187;
case 0x65b189:goto L65b189;
case 0x65b18c:c.instructions+=3;goto B65b18c;
case 0x65b18f:c.instructions+=2;goto B65b18f;
case 0x65b192:c.instructions+=1;goto B65b192;
case 0x65b194:goto L65b194;
case 0x65b199:goto L65b199;
case 0x65b19c:c.instructions+=16;goto B65b19c;
case 0x65b19f:c.instructions+=15;goto B65b19f;
case 0x65b1a1:c.instructions+=14;goto B65b1a1;
case 0x65b1a3:c.instructions+=13;goto B65b1a3;
case 0x65b1a6:c.instructions+=12;goto B65b1a6;
case 0x65b1a8:c.instructions+=11;goto B65b1a8;
case 0x65b1aa:c.instructions+=10;goto B65b1aa;
case 0x65b1ad:c.instructions+=9;goto B65b1ad;
case 0x65b1b0:c.instructions+=8;goto B65b1b0;
case 0x65b1b2:c.instructions+=7;goto B65b1b2;
case 0x65b1b4:c.instructions+=6;goto B65b1b4;
case 0x65b1b7:c.instructions+=5;goto B65b1b7;
case 0x65b1b9:c.instructions+=4;goto B65b1b9;
case 0x65b1ba:c.instructions+=3;goto B65b1ba;
case 0x65b1bd:c.instructions+=2;goto B65b1bd;
case 0x65b1c0:c.instructions+=1;goto B65b1c0;
case 0x65b1c6:goto L65b1c6;
case 0x65b1c7:c.instructions+=1;goto B65b1c7;
case 0x65b1cd:goto L65b1cd;
case 0x65b1ce:c.instructions+=1;goto B65b1ce;
case 0x65b1d4:goto L65b1d4;
case 0x65b1d7:c.instructions+=2;goto B65b1d7;
case 0x65b1da:c.instructions+=1;goto B65b1da;
case 0x65b1e0:goto L65b1e0;
case 0x65b1e3:c.instructions+=1;goto B65b1e3;
case 0x65b1e6:goto L65b1e6;
case 0x65b1e8:c.instructions+=2;goto B65b1e8;
case 0x65b1ea:c.instructions+=1;goto B65b1ea;
case 0x65b1f0:goto L65b1f0;
case 0x65b1f2:c.instructions+=1;goto B65b1f2;
case 0x65b1f4:goto L65b1f4;
case 0x65b1f6:c.instructions+=2;goto B65b1f6;
case 0x65b1f8:c.instructions+=1;goto B65b1f8;
case 0x65b1fa:goto L65b1fa;
case 0x65b1fd:c.instructions+=1;goto B65b1fd;
case 0x65b1ff:goto L65b1ff;
case 0x65b201:c.instructions+=3;goto B65b201;
case 0x65b204:c.instructions+=2;goto B65b204;
case 0x65b207:c.instructions+=1;goto B65b207;
case 0x65b20a:goto L65b20a;
case 0x65b20e:c.instructions+=1;goto B65b20e;
case 0x65b210:goto L65b210;
case 0x65b213:c.instructions+=5;goto B65b213;
case 0x65b215:c.instructions+=4;goto B65b215;
case 0x65b217:c.instructions+=3;goto B65b217;
case 0x65b21a:c.instructions+=2;goto B65b21a;
case 0x65b21d:c.instructions+=1;goto B65b21d;
case 0x65b220:goto L65b220;
case 0x65b222:c.instructions+=14;goto B65b222;
case 0x65b225:c.instructions+=13;goto B65b225;
case 0x65b228:c.instructions+=12;goto B65b228;
case 0x65b22a:c.instructions+=11;goto B65b22a;
case 0x65b22c:c.instructions+=10;goto B65b22c;
case 0x65b22f:c.instructions+=9;goto B65b22f;
case 0x65b231:c.instructions+=8;goto B65b231;
case 0x65b234:c.instructions+=7;goto B65b234;
case 0x65b236:c.instructions+=6;goto B65b236;
case 0x65b238:c.instructions+=5;goto B65b238;
case 0x65b23a:c.instructions+=4;goto B65b23a;
case 0x65b23d:c.instructions+=3;goto B65b23d;
case 0x65b23f:c.instructions+=2;goto B65b23f;
case 0x65b242:c.instructions+=1;goto B65b242;
case 0x65b244:goto L65b244;
case 0x65b247:goto L65b247;
case 0x65b24a:c.instructions+=4;goto B65b24a;
case 0x65b24c:c.instructions+=3;goto B65b24c;
case 0x65b24d:c.instructions+=2;goto B65b24d;
case 0x65b24f:c.instructions+=1;goto B65b24f;
case 0x65b251:goto L65b251;
case 0x65b254:c.instructions+=11;goto B65b254;
case 0x65b256:c.instructions+=10;goto B65b256;
case 0x65b25a:c.instructions+=9;goto B65b25a;
case 0x65b25d:c.instructions+=8;goto B65b25d;
case 0x65b25f:c.instructions+=7;goto B65b25f;
case 0x65b262:c.instructions+=6;goto B65b262;
case 0x65b265:c.instructions+=5;goto B65b265;
case 0x65b267:c.instructions+=4;goto B65b267;
case 0x65b26a:c.instructions+=3;goto B65b26a;
case 0x65b26d:c.instructions+=2;goto B65b26d;
case 0x65b270:c.instructions+=1;goto B65b270;
case 0x65b276:goto L65b276;
case 0x65b27b:goto L65b27b;
case 0x65b27e:c.instructions+=2;goto B65b27e;
case 0x65b281:c.instructions+=1;goto B65b281;
case 0x65b287:goto L65b287;
case 0x65b289:goto L65b289;
case 0x65b28b:goto L65b28b;
case 0x65b28e:c.instructions+=2;goto B65b28e;
case 0x65b290:c.instructions+=1;goto B65b290;
case 0x65b296:goto L65b296;
case 0x65b298:c.instructions+=1;goto B65b298;
case 0x65b29a:goto L65b29a;
case 0x65b29c:c.instructions+=2;goto B65b29c;
case 0x65b29e:c.instructions+=1;goto B65b29e;
case 0x65b2a0:goto L65b2a0;
case 0x65b2a3:c.instructions+=1;goto B65b2a3;
case 0x65b2a5:goto L65b2a5;
case 0x65b2a7:c.instructions+=3;goto B65b2a7;
case 0x65b2aa:c.instructions+=2;goto B65b2aa;
case 0x65b2ad:c.instructions+=1;goto B65b2ad;
case 0x65b2b0:goto L65b2b0;
case 0x65b2b4:c.instructions+=1;goto B65b2b4;
case 0x65b2b6:goto L65b2b6;
case 0x65b2b8:c.instructions+=6;goto B65b2b8;
case 0x65b2bb:c.instructions+=5;goto B65b2bb;
case 0x65b2be:c.instructions+=4;goto B65b2be;
case 0x65b2c1:c.instructions+=3;goto B65b2c1;
case 0x65b2c3:c.instructions+=2;goto B65b2c3;
case 0x65b2c6:c.instructions+=1;goto B65b2c6;
case 0x65b2c9:goto L65b2c9;
case 0x65b2cc:c.instructions+=3;goto B65b2cc;
case 0x65b2ce:c.instructions+=2;goto B65b2ce;
case 0x65b2d1:c.instructions+=1;goto B65b2d1;
case 0x65b2d6:goto L65b2d6;
case 0x65b2d9:c.instructions+=11;goto B65b2d9;
case 0x65b2dc:c.instructions+=10;goto B65b2dc;
case 0x65b2de:c.instructions+=9;goto B65b2de;
case 0x65b2e1:c.instructions+=8;goto B65b2e1;
case 0x65b2e3:c.instructions+=7;goto B65b2e3;
case 0x65b2e6:c.instructions+=6;goto B65b2e6;
case 0x65b2e8:c.instructions+=5;goto B65b2e8;
case 0x65b2ea:c.instructions+=4;goto B65b2ea;
case 0x65b2ed:c.instructions+=3;goto B65b2ed;
case 0x65b2f0:c.instructions+=2;goto B65b2f0;
case 0x65b2f3:c.instructions+=1;goto B65b2f3;
case 0x65b2f5:goto L65b2f5;
case 0x65b2f8:goto L65b2f8;
case 0x65b2fb:c.instructions+=4;goto B65b2fb;
case 0x65b2fd:c.instructions+=3;goto B65b2fd;
case 0x65b2fe:c.instructions+=2;goto B65b2fe;
case 0x65b300:c.instructions+=1;goto B65b300;
case 0x65b302:goto L65b302;
case 0x65b305:c.instructions+=12;goto B65b305;
case 0x65b308:c.instructions+=11;goto B65b308;
case 0x65b30a:c.instructions+=10;goto B65b30a;
case 0x65b30e:c.instructions+=9;goto B65b30e;
case 0x65b311:c.instructions+=8;goto B65b311;
case 0x65b313:c.instructions+=7;goto B65b313;
case 0x65b316:c.instructions+=6;goto B65b316;
case 0x65b319:c.instructions+=5;goto B65b319;
case 0x65b31b:c.instructions+=4;goto B65b31b;
case 0x65b31e:c.instructions+=3;goto B65b31e;
case 0x65b321:c.instructions+=2;goto B65b321;
case 0x65b324:c.instructions+=1;goto B65b324;
case 0x65b32a:goto L65b32a;
case 0x65b32f:goto L65b32f;
case 0x65b332:c.instructions+=2;goto B65b332;
case 0x65b335:c.instructions+=1;goto B65b335;
case 0x65b33b:goto L65b33b;
case 0x65b33d:goto L65b33d;
case 0x65b33f:goto L65b33f;
case 0x65b342:c.instructions+=2;goto B65b342;
case 0x65b344:c.instructions+=1;goto B65b344;
case 0x65b34a:goto L65b34a;
case 0x65b34c:c.instructions+=1;goto B65b34c;
case 0x65b34e:goto L65b34e;
case 0x65b350:c.instructions+=2;goto B65b350;
case 0x65b352:c.instructions+=1;goto B65b352;
case 0x65b354:goto L65b354;
case 0x65b357:c.instructions+=1;goto B65b357;
case 0x65b359:goto L65b359;
case 0x65b35b:c.instructions+=3;goto B65b35b;
case 0x65b35e:c.instructions+=2;goto B65b35e;
case 0x65b361:c.instructions+=1;goto B65b361;
case 0x65b364:goto L65b364;
case 0x65b368:c.instructions+=1;goto B65b368;
case 0x65b36a:goto L65b36a;
case 0x65b36c:c.instructions+=6;goto B65b36c;
case 0x65b36f:c.instructions+=5;goto B65b36f;
case 0x65b372:c.instructions+=4;goto B65b372;
case 0x65b375:c.instructions+=3;goto B65b375;
case 0x65b377:c.instructions+=2;goto B65b377;
case 0x65b37a:c.instructions+=1;goto B65b37a;
case 0x65b37d:goto L65b37d;
case 0x65b380:c.instructions+=3;goto B65b380;
case 0x65b382:c.instructions+=2;goto B65b382;
case 0x65b385:c.instructions+=1;goto B65b385;
case 0x65b38a:goto L65b38a;
case 0x65b38d:c.instructions+=11;goto B65b38d;
case 0x65b390:c.instructions+=10;goto B65b390;
case 0x65b392:c.instructions+=9;goto B65b392;
case 0x65b395:c.instructions+=8;goto B65b395;
case 0x65b397:c.instructions+=7;goto B65b397;
case 0x65b39a:c.instructions+=6;goto B65b39a;
case 0x65b39c:c.instructions+=5;goto B65b39c;
case 0x65b39e:c.instructions+=4;goto B65b39e;
case 0x65b3a1:c.instructions+=3;goto B65b3a1;
case 0x65b3a4:c.instructions+=2;goto B65b3a4;
case 0x65b3a7:c.instructions+=1;goto B65b3a7;
case 0x65b3a9:goto L65b3a9;
case 0x65b3ac:goto L65b3ac;
case 0x65b3af:c.instructions+=4;goto B65b3af;
case 0x65b3b1:c.instructions+=3;goto B65b3b1;
case 0x65b3b2:c.instructions+=2;goto B65b3b2;
case 0x65b3b4:c.instructions+=1;goto B65b3b4;
case 0x65b3b6:goto L65b3b6;
case 0x65b3b9:c.instructions+=12;goto B65b3b9;
case 0x65b3bc:c.instructions+=11;goto B65b3bc;
case 0x65b3be:c.instructions+=10;goto B65b3be;
case 0x65b3c2:c.instructions+=9;goto B65b3c2;
case 0x65b3c5:c.instructions+=8;goto B65b3c5;
case 0x65b3c7:c.instructions+=7;goto B65b3c7;
case 0x65b3ca:c.instructions+=6;goto B65b3ca;
case 0x65b3cd:c.instructions+=5;goto B65b3cd;
case 0x65b3cf:c.instructions+=4;goto B65b3cf;
case 0x65b3d2:c.instructions+=3;goto B65b3d2;
case 0x65b3d5:c.instructions+=2;goto B65b3d5;
case 0x65b3d8:c.instructions+=1;goto B65b3d8;
case 0x65b3de:goto L65b3de;
case 0x65b3e1:c.instructions+=2;goto B65b3e1;
case 0x65b3e4:c.instructions+=1;goto B65b3e4;
case 0x65b3e6:goto L65b3e6;
case 0x65b3ed:goto L65b3ed;
case 0x65b3f0:c.instructions+=5;goto B65b3f0;
case 0x65b3f1:c.instructions+=4;goto B65b3f1;
case 0x65b3f2:c.instructions+=3;goto B65b3f2;
case 0x65b3f3:c.instructions+=2;goto B65b3f3;
case 0x65b3f4:c.instructions+=1;goto B65b3f4;
case 0x65b3f7:goto L65b3f7;
case 0x65b3f9:c.instructions+=27;goto B65b3f9;
case 0x65b3fa:c.instructions+=26;goto B65b3fa;
case 0x65b3fc:c.instructions+=25;goto B65b3fc;
case 0x65b3fd:c.instructions+=24;goto B65b3fd;
case 0x65b400:c.instructions+=23;goto B65b400;
case 0x65b402:c.instructions+=22;goto B65b402;
case 0x65b403:c.instructions+=21;goto B65b403;
case 0x65b406:c.instructions+=20;goto B65b406;
case 0x65b407:c.instructions+=19;goto B65b407;
case 0x65b40a:c.instructions+=18;goto B65b40a;
case 0x65b40b:c.instructions+=17;goto B65b40b;
case 0x65b40e:c.instructions+=16;goto B65b40e;
case 0x65b411:c.instructions+=15;goto B65b411;
case 0x65b415:c.instructions+=14;goto B65b415;
case 0x65b419:c.instructions+=13;goto B65b419;
case 0x65b41d:c.instructions+=12;goto B65b41d;
case 0x65b422:c.instructions+=11;goto B65b422;
case 0x65b428:c.instructions+=10;goto B65b428;
case 0x65b42e:c.instructions+=9;goto B65b42e;
case 0x65b434:c.instructions+=8;goto B65b434;
case 0x65b437:c.instructions+=7;goto B65b437;
case 0x65b43a:c.instructions+=6;goto B65b43a;
case 0x65b43e:c.instructions+=5;goto B65b43e;
case 0x65b442:c.instructions+=4;goto B65b442;
case 0x65b446:c.instructions+=3;goto B65b446;
case 0x65b449:c.instructions+=2;goto B65b449;
case 0x65b44b:c.instructions+=1;goto B65b44b;
case 0x65b451:goto L65b451;
case 0x65b454:c.instructions+=7;goto B65b454;
case 0x65b457:c.instructions+=6;goto B65b457;
case 0x65b458:c.instructions+=5;goto B65b458;
case 0x65b45b:c.instructions+=4;goto B65b45b;
case 0x65b45c:c.instructions+=3;goto B65b45c;
case 0x65b461:c.instructions+=2;goto B65b461;
case 0x65b464:c.instructions+=1;goto B65b464;
case 0x65b469:goto L65b469;
case 0x65b46b:c.instructions+=1;goto B65b46b;
case 0x65b46d:goto L65b46d;
case 0x65b46f:c.instructions+=1;goto B65b46f;
case 0x65b474:goto L65b474;
case 0x65b477:c.instructions+=2;goto B65b477;
case 0x65b479:c.instructions+=1;goto B65b479;
case 0x65b47f:goto L65b47f;
case 0x65b483:c.instructions+=1;goto B65b483;
case 0x65b485:goto L65b485;
case 0x65b48c:c.instructions+=1;goto B65b48c;
case 0x65b491:goto L65b491;
case 0x65b494:c.instructions+=3;goto B65b494;
case 0x65b49b:c.instructions+=2;goto B65b49b;
case 0x65b49e:c.instructions+=1;goto B65b49e;
case 0x65b4a0:goto L65b4a0;
case 0x65b4a3:c.instructions+=4;goto B65b4a3;
case 0x65b4a7:c.instructions+=3;goto B65b4a7;
case 0x65b4a9:c.instructions+=2;goto B65b4a9;
case 0x65b4ab:c.instructions+=1;goto B65b4ab;
case 0x65b4b1:goto L65b4b1;
case 0x65b4b5:c.instructions+=2;goto B65b4b5;
case 0x65b4b7:c.instructions+=1;goto B65b4b7;
case 0x65b4b9:goto L65b4b9;
case 0x65b4bc:c.instructions+=2;goto B65b4bc;
case 0x65b4c0:c.instructions+=1;goto B65b4c0;
case 0x65b4c2:goto L65b4c2;
case 0x65b4c5:c.instructions+=1;goto B65b4c5;
case 0x65b4c6:goto L65b4c6;
case 0x65b4c9:c.instructions+=1;goto B65b4c9;
case 0x65b4cb:goto L65b4cb;
case 0x65b4cd:c.instructions+=4;goto B65b4cd;
case 0x65b4d0:c.instructions+=3;goto B65b4d0;
case 0x65b4d2:c.instructions+=2;goto B65b4d2;
case 0x65b4d5:c.instructions+=1;goto B65b4d5;
case 0x65b4d7:goto L65b4d7;
case 0x65b4db:c.instructions+=2;goto B65b4db;
case 0x65b4de:c.instructions+=1;goto B65b4de;
case 0x65b4e4:goto L65b4e4;
case 0x65b4e5:c.instructions+=1;goto B65b4e5;
case 0x65b4eb:goto L65b4eb;
case 0x65b4ec:c.instructions+=1;goto B65b4ec;
case 0x65b4ee:goto L65b4ee;
case 0x65b4ef:c.instructions+=1;goto B65b4ef;
case 0x65b4f1:goto L65b4f1;
case 0x65b4f5:c.instructions+=8;goto B65b4f5;
case 0x65b4f9:c.instructions+=7;goto B65b4f9;
case 0x65b4fd:c.instructions+=6;goto B65b4fd;
case 0x65b501:c.instructions+=5;goto B65b501;
case 0x65b505:c.instructions+=4;goto B65b505;
case 0x65b507:c.instructions+=3;goto B65b507;
case 0x65b50b:c.instructions+=2;goto B65b50b;
case 0x65b50d:c.instructions+=1;goto B65b50d;
case 0x65b50f:goto L65b50f;
case 0x65b513:c.instructions+=2;goto B65b513;
case 0x65b517:c.instructions+=1;goto B65b517;
case 0x65b519:goto L65b519;
case 0x65b51d:c.instructions+=5;goto B65b51d;
case 0x65b521:c.instructions+=4;goto B65b521;
case 0x65b525:c.instructions+=3;goto B65b525;
case 0x65b528:c.instructions+=2;goto B65b528;
case 0x65b52b:c.instructions+=1;goto B65b52b;
case 0x65b52d:goto L65b52d;
case 0x65b530:goto L65b530;
case 0x65b534:c.instructions+=1;goto B65b534;
case 0x65b539:goto L65b539;
case 0x65b53d:c.instructions+=8;goto B65b53d;
case 0x65b540:c.instructions+=7;goto B65b540;
case 0x65b544:c.instructions+=6;goto B65b544;
case 0x65b548:c.instructions+=5;goto B65b548;
case 0x65b54a:c.instructions+=4;goto B65b54a;
case 0x65b54d:c.instructions+=3;goto B65b54d;
case 0x65b54f:c.instructions+=2;goto B65b54f;
case 0x65b556:c.instructions+=1;goto B65b556;
case 0x65b558:goto L65b558;
case 0x65b55c:c.instructions+=2;goto B65b55c;
case 0x65b560:c.instructions+=1;goto B65b560;
case 0x65b562:goto L65b562;
case 0x65b565:c.instructions+=5;goto B65b565;
case 0x65b568:c.instructions+=4;goto B65b568;
case 0x65b56c:c.instructions+=3;goto B65b56c;
case 0x65b56f:c.instructions+=2;goto B65b56f;
case 0x65b572:c.instructions+=1;goto B65b572;
case 0x65b574:goto L65b574;
case 0x65b577:goto L65b577;
case 0x65b57a:c.instructions+=1;goto B65b57a;
case 0x65b57f:goto L65b57f;
case 0x65b583:c.instructions+=8;goto B65b583;
case 0x65b587:c.instructions+=7;goto B65b587;
case 0x65b58b:c.instructions+=6;goto B65b58b;
case 0x65b58f:c.instructions+=5;goto B65b58f;
case 0x65b591:c.instructions+=4;goto B65b591;
case 0x65b595:c.instructions+=3;goto B65b595;
case 0x65b597:c.instructions+=2;goto B65b597;
case 0x65b59e:c.instructions+=1;goto B65b59e;
case 0x65b5a0:goto L65b5a0;
case 0x65b5a4:c.instructions+=2;goto B65b5a4;
case 0x65b5a8:c.instructions+=1;goto B65b5a8;
case 0x65b5aa:goto L65b5aa;
case 0x65b5ae:c.instructions+=5;goto B65b5ae;
case 0x65b5b2:c.instructions+=4;goto B65b5b2;
case 0x65b5b6:c.instructions+=3;goto B65b5b6;
case 0x65b5b9:c.instructions+=2;goto B65b5b9;
case 0x65b5bc:c.instructions+=1;goto B65b5bc;
case 0x65b5be:goto L65b5be;
case 0x65b5c1:goto L65b5c1;
case 0x65b5c5:c.instructions+=1;goto B65b5c5;
case 0x65b5c7:goto L65b5c7;
case 0x65b5cb:c.instructions+=8;goto B65b5cb;
case 0x65b5cf:c.instructions+=7;goto B65b5cf;
case 0x65b5d3:c.instructions+=6;goto B65b5d3;
case 0x65b5d7:c.instructions+=5;goto B65b5d7;
case 0x65b5d9:c.instructions+=4;goto B65b5d9;
case 0x65b5dd:c.instructions+=3;goto B65b5dd;
case 0x65b5df:c.instructions+=2;goto B65b5df;
case 0x65b5e6:c.instructions+=1;goto B65b5e6;
case 0x65b5e8:goto L65b5e8;
case 0x65b5ec:c.instructions+=2;goto B65b5ec;
case 0x65b5f0:c.instructions+=1;goto B65b5f0;
case 0x65b5f2:goto L65b5f2;
case 0x65b5f6:c.instructions+=5;goto B65b5f6;
case 0x65b5fa:c.instructions+=4;goto B65b5fa;
case 0x65b5fe:c.instructions+=3;goto B65b5fe;
case 0x65b601:c.instructions+=2;goto B65b601;
case 0x65b604:c.instructions+=1;goto B65b604;
case 0x65b606:goto L65b606;
case 0x65b609:goto L65b609;
case 0x65b60d:goto L65b60d;
case 0x65b611:c.instructions+=3;goto B65b611;
case 0x65b615:c.instructions+=2;goto B65b615;
case 0x65b617:c.instructions+=1;goto B65b617;
case 0x65b619:goto L65b619;
case 0x65b61c:c.instructions+=3;goto B65b61c;
case 0x65b61e:c.instructions+=2;goto B65b61e;
case 0x65b621:c.instructions+=1;goto B65b621;
case 0x65b627:goto L65b627;
case 0x65b62a:c.instructions+=5;goto B65b62a;
case 0x65b62d:c.instructions+=4;goto B65b62d;
case 0x65b630:c.instructions+=3;goto B65b630;
case 0x65b633:c.instructions+=2;goto B65b633;
case 0x65b636:c.instructions+=1;goto B65b636;
case 0x65b63c:goto L65b63c;
case 0x65b63f:c.instructions+=1;goto B65b63f;
case 0x65b641:goto L65b641;
case 0x65b644:goto L65b644;
case 0x65b645:c.instructions+=4;goto B65b645;
case 0x65b646:c.instructions+=3;goto B65b646;
case 0x65b647:c.instructions+=2;goto B65b647;
case 0x65b648:c.instructions+=1;goto B65b648;
case 0x65b64b:goto L65b64b;
case 0x65b64d:c.instructions+=13;goto B65b64d;
case 0x65b64e:c.instructions+=12;goto B65b64e;
case 0x65b650:c.instructions+=11;goto B65b650;
case 0x65b653:c.instructions+=10;goto B65b653;
case 0x65b655:c.instructions+=9;goto B65b655;
case 0x65b658:c.instructions+=8;goto B65b658;
case 0x65b65a:c.instructions+=7;goto B65b65a;
case 0x65b65e:c.instructions+=6;goto B65b65e;
case 0x65b665:c.instructions+=5;goto B65b665;
case 0x65b666:c.instructions+=4;goto B65b666;
case 0x65b66a:c.instructions+=3;goto B65b66a;
case 0x65b671:c.instructions+=2;goto B65b671;
case 0x65b672:c.instructions+=1;goto B65b672;
case 0x65b674:goto L65b674;
case 0x65b678:c.instructions+=2;goto B65b678;
case 0x65b67c:c.instructions+=1;goto B65b67c;
case 0x65b67e:goto L65b67e;
case 0x65b67f:c.instructions+=1;goto B65b67f;
case 0x65b680:goto L65b680;
case 0x65b682:c.instructions+=7;goto B65b682;
case 0x65b684:c.instructions+=6;goto B65b684;
case 0x65b687:c.instructions+=5;goto B65b687;
case 0x65b68a:c.instructions+=4;goto B65b68a;
case 0x65b68d:c.instructions+=3;goto B65b68d;
case 0x65b690:c.instructions+=2;goto B65b690;
case 0x65b693:c.instructions+=1;goto B65b693;
case 0x65b694:goto L65b694;
case 0x65b696:c.instructions+=7;goto B65b696;
case 0x65b69a:c.instructions+=6;goto B65b69a;
case 0x65b69c:c.instructions+=5;goto B65b69c;
case 0x65b69f:c.instructions+=4;goto B65b69f;
case 0x65b6a2:c.instructions+=3;goto B65b6a2;
case 0x65b6a4:c.instructions+=2;goto B65b6a4;
case 0x65b6a7:c.instructions+=1;goto B65b6a7;
case 0x65b6a8:goto L65b6a8;
case 0x65b6aa:c.instructions+=5;goto B65b6aa;
case 0x65b6ab:c.instructions+=4;goto B65b6ab;
case 0x65b6ad:c.instructions+=3;goto B65b6ad;
case 0x65b6ae:c.instructions+=2;goto B65b6ae;
case 0x65b6b0:c.instructions+=1;goto B65b6b0;
case 0x65b6b5:goto L65b6b5;
case 0x65b6b9:c.instructions+=1;goto B65b6b9;
case 0x65b6bb:goto L65b6bb;
case 0x65b6bc:c.instructions+=1;goto B65b6bc;
case 0x65b6c1:goto L65b6c1;
case 0x65b6c2:goto L65b6c2;
case 0x65b6c4:c.instructions+=3;goto B65b6c4;
case 0x65b6c5:c.instructions+=2;goto B65b6c5;
case 0x65b6c6:c.instructions+=1;goto B65b6c6;
case 0x65b6c9:goto L65b6c9;
case 0x65b6cb:c.instructions+=23;goto B65b6cb;
case 0x65b6cc:c.instructions+=22;goto B65b6cc;
case 0x65b6ce:c.instructions+=21;goto B65b6ce;
case 0x65b6cf:c.instructions+=20;goto B65b6cf;
case 0x65b6d1:c.instructions+=19;goto B65b6d1;
case 0x65b6d5:c.instructions+=18;goto B65b6d5;
case 0x65b6d7:c.instructions+=17;goto B65b6d7;
case 0x65b6dd:c.instructions+=16;goto B65b6dd;
case 0x65b6de:c.instructions+=15;goto B65b6de;
case 0x65b6df:c.instructions+=14;goto B65b6df;
case 0x65b6e0:c.instructions+=13;goto B65b6e0;
case 0x65b6e2:c.instructions+=12;goto B65b6e2;
case 0x65b6e5:c.instructions+=11;goto B65b6e5;
case 0x65b6e8:c.instructions+=10;goto B65b6e8;
case 0x65b6eb:c.instructions+=9;goto B65b6eb;
case 0x65b6ef:c.instructions+=8;goto B65b6ef;
case 0x65b6f3:c.instructions+=7;goto B65b6f3;
case 0x65b6f7:c.instructions+=6;goto B65b6f7;
case 0x65b6fb:c.instructions+=5;goto B65b6fb;
case 0x65b6ff:c.instructions+=4;goto B65b6ff;
case 0x65b702:c.instructions+=3;goto B65b702;
case 0x65b705:c.instructions+=2;goto B65b705;
case 0x65b708:c.instructions+=1;goto B65b708;
case 0x65b70f:goto L65b70f;
case 0x65b714:c.instructions+=1;goto B65b714;
case 0x65b716:goto L65b716;
case 0x65b719:c.instructions+=6;goto B65b719;
case 0x65b71c:c.instructions+=5;goto B65b71c;
case 0x65b71d:c.instructions+=4;goto B65b71d;
case 0x65b71e:c.instructions+=3;goto B65b71e;
case 0x65b71f:c.instructions+=2;goto B65b71f;
case 0x65b722:c.instructions+=1;goto B65b722;
case 0x65b724:goto L65b724;
case 0x65b725:c.instructions+=4;goto B65b725;
case 0x65b726:c.instructions+=3;goto B65b726;
case 0x65b729:c.instructions+=2;goto B65b729;
case 0x65b72c:c.instructions+=1;goto B65b72c;
case 0x65b72e:goto L65b72e;
case 0x65b72f:c.instructions+=4;goto B65b72f;
case 0x65b730:c.instructions+=3;goto B65b730;
case 0x65b731:c.instructions+=2;goto B65b731;
case 0x65b732:c.instructions+=1;goto B65b732;
case 0x65b733:goto L65b733;
case 0x65b735:c.instructions+=15;goto B65b735;
case 0x65b736:c.instructions+=14;goto B65b736;
case 0x65b737:c.instructions+=13;goto B65b737;
case 0x65b739:c.instructions+=12;goto B65b739;
case 0x65b73c:c.instructions+=11;goto B65b73c;
case 0x65b73e:c.instructions+=10;goto B65b73e;
case 0x65b740:c.instructions+=9;goto B65b740;
case 0x65b743:c.instructions+=8;goto B65b743;
case 0x65b746:c.instructions+=7;goto B65b746;
case 0x65b74a:c.instructions+=6;goto B65b74a;
case 0x65b74d:c.instructions+=5;goto B65b74d;
case 0x65b750:c.instructions+=4;goto B65b750;
case 0x65b752:c.instructions+=3;goto B65b752;
case 0x65b755:c.instructions+=2;goto B65b755;
case 0x65b758:c.instructions+=1;goto B65b758;
case 0x65b75a:goto L65b75a;
case 0x65b75b:c.instructions+=2;goto B65b75b;
case 0x65b75c:c.instructions+=1;goto B65b75c;
case 0x65b761:goto L65b761;
case 0x65b763:c.instructions+=3;goto B65b763;
case 0x65b765:c.instructions+=2;goto B65b765;
case 0x65b766:c.instructions+=1;goto B65b766;
case 0x65b768:goto L65b768;
case 0x65b76d:c.instructions+=1;goto B65b76d;
case 0x65b76f:goto L65b76f;
case 0x65b771:c.instructions+=2;goto B65b771;
case 0x65b773:c.instructions+=1;goto B65b773;
case 0x65b775:goto L65b775;
case 0x65b776:c.instructions+=1;goto B65b776;
case 0x65b77b:goto L65b77b;
case 0x65b77e:c.instructions+=1;goto B65b77e;
case 0x65b77f:goto L65b77f;
case 0x65b782:c.instructions+=2;goto B65b782;
case 0x65b784:c.instructions+=1;goto B65b784;
case 0x65b787:goto L65b787;
case 0x65b788:goto L65b788;
case 0x65b789:c.instructions+=3;goto B65b789;
case 0x65b78b:c.instructions+=2;goto B65b78b;
case 0x65b78c:c.instructions+=1;goto B65b78c;
case 0x65b78d:goto L65b78d;
case 0x65b78f:c.instructions+=10;goto B65b78f;
case 0x65b791:c.instructions+=9;goto B65b791;
case 0x65b794:c.instructions+=8;goto B65b794;
case 0x65b797:c.instructions+=7;goto B65b797;
case 0x65b79a:c.instructions+=6;goto B65b79a;
case 0x65b79d:c.instructions+=5;goto B65b79d;
case 0x65b7a0:c.instructions+=4;goto B65b7a0;
case 0x65b7a3:c.instructions+=3;goto B65b7a3;
case 0x65b7a9:c.instructions+=2;goto B65b7a9;
case 0x65b7ac:c.instructions+=1;goto B65b7ac;
case 0x65b7ad:goto L65b7ad;
case 0x65b7af:c.instructions+=7;goto B65b7af;
case 0x65b7b0:c.instructions+=6;goto B65b7b0;
case 0x65b7b2:c.instructions+=5;goto B65b7b2;
case 0x65b7b5:c.instructions+=4;goto B65b7b5;
case 0x65b7b6:c.instructions+=3;goto B65b7b6;
case 0x65b7b8:c.instructions+=2;goto B65b7b8;
case 0x65b7ba:c.instructions+=1;goto B65b7ba;
case 0x65b7bc:goto L65b7bc;
case 0x65b7be:c.instructions+=2;goto B65b7be;
case 0x65b7c1:c.instructions+=1;goto B65b7c1;
case 0x65b7c3:goto L65b7c3;
case 0x65b7c5:goto L65b7c5;
case 0x65b7c8:c.instructions+=1;goto B65b7c8;
case 0x65b7ca:goto L65b7ca;
case 0x65b7cd:c.instructions+=1;goto B65b7cd;
case 0x65b7cf:goto L65b7cf;
case 0x65b7d2:c.instructions+=1;goto B65b7d2;
case 0x65b7d4:goto L65b7d4;
case 0x65b7d6:c.instructions+=2;goto B65b7d6;
case 0x65b7d7:c.instructions+=1;goto B65b7d7;
case 0x65b7da:goto L65b7da;
case 0x65b7dd:goto L65b7dd;
case 0x65b7e0:c.instructions+=2;goto B65b7e0;
case 0x65b7e2:c.instructions+=1;goto B65b7e2;
case 0x65b7e4:goto L65b7e4;
case 0x65b7e6:c.instructions+=2;goto B65b7e6;
case 0x65b7e7:c.instructions+=1;goto B65b7e7;
case 0x65b7ea:goto L65b7ea;
case 0x65b7ed:goto L65b7ed;
case 0x65b7ee:c.instructions+=2;goto B65b7ee;
case 0x65b7ef:c.instructions+=1;goto B65b7ef;
case 0x65b7f0:goto L65b7f0;
case 0x65b7f2:c.instructions+=7;goto B65b7f2;
case 0x65b7f3:c.instructions+=6;goto B65b7f3;
case 0x65b7f4:c.instructions+=5;goto B65b7f4;
case 0x65b7f6:c.instructions+=4;goto B65b7f6;
case 0x65b7f8:c.instructions+=3;goto B65b7f8;
case 0x65b7fe:c.instructions+=2;goto B65b7fe;
case 0x65b7ff:c.instructions+=1;goto B65b7ff;
case 0x65b801:goto L65b801;
case 0x65b807:c.instructions+=1;goto B65b807;
case 0x65b809:goto L65b809;
case 0x65b80f:c.instructions+=8;goto B65b80f;
case 0x65b815:c.instructions+=7;goto B65b815;
case 0x65b817:c.instructions+=6;goto B65b817;
case 0x65b81a:c.instructions+=5;goto B65b81a;
case 0x65b81d:c.instructions+=4;goto B65b81d;
case 0x65b81f:c.instructions+=3;goto B65b81f;
case 0x65b821:c.instructions+=2;goto B65b821;
case 0x65b827:c.instructions+=1;goto B65b827;
case 0x65b829:goto L65b829;
case 0x65b82f:c.instructions+=2;goto B65b82f;
case 0x65b832:c.instructions+=1;goto B65b832;
case 0x65b837:goto L65b837;
case 0x65b838:c.instructions+=3;goto B65b838;
case 0x65b83e:c.instructions+=2;goto B65b83e;
case 0x65b83f:c.instructions+=1;goto B65b83f;
case 0x65b841:goto L65b841;
case 0x65b842:c.instructions+=2;goto B65b842;
case 0x65b848:c.instructions+=1;goto B65b848;
case 0x65b84a:goto L65b84a;
case 0x65b850:c.instructions+=1;goto B65b850;
case 0x65b855:goto L65b855;
case 0x65b857:c.instructions+=2;goto B65b857;
case 0x65b858:c.instructions+=1;goto B65b858;
case 0x65b85e:goto L65b85e;
case 0x65b864:c.instructions+=1;goto B65b864;
case 0x65b866:goto L65b866;
case 0x65b86c:c.instructions+=1;goto B65b86c;
case 0x65b86e:goto L65b86e;
case 0x65b874:c.instructions+=8;goto B65b874;
case 0x65b87a:c.instructions+=7;goto B65b87a;
case 0x65b87c:c.instructions+=6;goto B65b87c;
case 0x65b87f:c.instructions+=5;goto B65b87f;
case 0x65b882:c.instructions+=4;goto B65b882;
case 0x65b884:c.instructions+=3;goto B65b884;
case 0x65b886:c.instructions+=2;goto B65b886;
case 0x65b88c:c.instructions+=1;goto B65b88c;
case 0x65b88e:goto L65b88e;
case 0x65b894:c.instructions+=2;goto B65b894;
case 0x65b897:c.instructions+=1;goto B65b897;
case 0x65b89c:goto L65b89c;
case 0x65b89d:c.instructions+=3;goto B65b89d;
case 0x65b8a3:c.instructions+=2;goto B65b8a3;
case 0x65b8a4:c.instructions+=1;goto B65b8a4;
case 0x65b8a6:goto L65b8a6;
case 0x65b8a7:c.instructions+=2;goto B65b8a7;
case 0x65b8ad:c.instructions+=1;goto B65b8ad;
case 0x65b8af:goto L65b8af;
case 0x65b8b5:c.instructions+=1;goto B65b8b5;
case 0x65b8ba:goto L65b8ba;
case 0x65b8c1:c.instructions+=1;goto B65b8c1;
case 0x65b8c2:goto L65b8c2;
case 0x65b8c3:c.instructions+=3;goto B65b8c3;
case 0x65b8c4:c.instructions+=2;goto B65b8c4;
case 0x65b8c5:c.instructions+=1;goto B65b8c5;
case 0x65b8c6:goto L65b8c6;
case 0x65b8c8:c.instructions+=7;goto B65b8c8;
case 0x65b8c9:c.instructions+=6;goto B65b8c9;
case 0x65b8cb:c.instructions+=5;goto B65b8cb;
case 0x65b8ce:c.instructions+=4;goto B65b8ce;
case 0x65b8d1:c.instructions+=3;goto B65b8d1;
case 0x65b8d4:c.instructions+=2;goto B65b8d4;
case 0x65b8d5:c.instructions+=1;goto B65b8d5;
case 0x65b8d8:goto L65b8d8;
case 0x65b8da:c.instructions+=7;goto B65b8da;
case 0x65b8db:c.instructions+=6;goto B65b8db;
case 0x65b8dd:c.instructions+=5;goto B65b8dd;
case 0x65b8e0:c.instructions+=4;goto B65b8e0;
case 0x65b8e1:c.instructions+=3;goto B65b8e1;
case 0x65b8e3:c.instructions+=2;goto B65b8e3;
case 0x65b8e5:c.instructions+=1;goto B65b8e5;
case 0x65b8e7:goto L65b8e7;
case 0x65b8ec:c.instructions+=1;goto B65b8ec;
case 0x65b8ee:goto L65b8ee;
case 0x65b8ef:c.instructions+=6;goto B65b8ef;
case 0x65b8f2:c.instructions+=5;goto B65b8f2;
case 0x65b8f3:c.instructions+=4;goto B65b8f3;
case 0x65b8f5:c.instructions+=3;goto B65b8f5;
case 0x65b8f6:c.instructions+=2;goto B65b8f6;
case 0x65b8fb:c.instructions+=1;goto B65b8fb;
case 0x65b8fd:goto L65b8fd;
case 0x65b8ff:goto L65b8ff;
case 0x65b901:goto L65b901;
case 0x65b904:c.instructions+=4;goto B65b904;
case 0x65b906:c.instructions+=3;goto B65b906;
case 0x65b907:c.instructions+=2;goto B65b907;
case 0x65b90c:c.instructions+=1;goto B65b90c;
case 0x65b90e:goto L65b90e;
case 0x65b910:goto L65b910;
case 0x65b912:goto L65b912;
case 0x65b915:c.instructions+=4;goto B65b915;
case 0x65b917:c.instructions+=3;goto B65b917;
case 0x65b919:c.instructions+=2;goto B65b919;
case 0x65b91a:c.instructions+=1;goto B65b91a;
case 0x65b91d:goto L65b91d;
case 0x65b91f:goto L65b91f;
case 0x65b924:goto L65b924;
case 0x65b925:c.instructions+=1;goto B65b925;
case 0x65b926:goto L65b926;
case 0x65b928:c.instructions+=3;goto B65b928;
case 0x65b929:c.instructions+=2;goto B65b929;
case 0x65b92a:c.instructions+=1;goto B65b92a;
case 0x65b92d:goto L65b92d;
case 0x65b92f:c.instructions+=6;goto B65b92f;
case 0x65b930:c.instructions+=5;goto B65b930;
case 0x65b931:c.instructions+=4;goto B65b931;
case 0x65b933:c.instructions+=3;goto B65b933;
case 0x65b939:c.instructions+=2;goto B65b939;
case 0x65b93b:c.instructions+=1;goto B65b93b;
case 0x65b940:goto L65b940;
case 0x65b947:c.instructions+=1;goto B65b947;
case 0x65b94c:goto L65b94c;
case 0x65b94e:c.instructions+=3;goto B65b94e;
case 0x65b94f:c.instructions+=2;goto B65b94f;
case 0x65b951:c.instructions+=1;goto B65b951;
case 0x65b953:goto L65b953;
case 0x65b958:c.instructions+=1;goto B65b958;
case 0x65b95a:goto L65b95a;
case 0x65b961:c.instructions+=2;goto B65b961;
case 0x65b96b:c.instructions+=1;goto B65b96b;
case 0x65b96d:goto L65b96d;
case 0x65b96e:c.instructions+=2;goto B65b96e;
case 0x65b96f:c.instructions+=1;goto B65b96f;
case 0x65b970:goto L65b970;
case 0x65b972:c.instructions+=6;goto B65b972;
case 0x65b973:c.instructions+=5;goto B65b973;
case 0x65b975:c.instructions+=4;goto B65b975;
case 0x65b976:c.instructions+=3;goto B65b976;
case 0x65b978:c.instructions+=2;goto B65b978;
case 0x65b97a:c.instructions+=1;goto B65b97a;
case 0x65b97f:goto L65b97f;
case 0x65b986:c.instructions+=1;goto B65b986;
case 0x65b988:goto L65b988;
case 0x65b98b:c.instructions+=10;goto B65b98b;
case 0x65b98c:c.instructions+=9;goto B65b98c;
case 0x65b98e:c.instructions+=8;goto B65b98e;
case 0x65b98f:c.instructions+=7;goto B65b98f;
case 0x65b992:c.instructions+=6;goto B65b992;
case 0x65b995:c.instructions+=5;goto B65b995;
case 0x65b998:c.instructions+=4;goto B65b998;
case 0x65b999:c.instructions+=3;goto B65b999;
case 0x65b99b:c.instructions+=2;goto B65b99b;
case 0x65b99c:c.instructions+=1;goto B65b99c;
case 0x65b99f:goto L65b99f;
case 0x65b9a0:c.instructions+=2;goto B65b9a0;
case 0x65b9a3:c.instructions+=1;goto B65b9a3;
case 0x65b9a9:goto L65b9a9;
case 0x65b9ab:c.instructions+=2;goto B65b9ab;
case 0x65b9ad:c.instructions+=1;goto B65b9ad;
case 0x65b9af:goto L65b9af;
case 0x65b9b4:goto L65b9b4;
case 0x65b9b8:c.instructions+=1;goto B65b9b8;
case 0x65b9ba:goto L65b9ba;
case 0x65b9bf:goto L65b9bf;
case 0x65b9c3:c.instructions+=1;goto B65b9c3;
case 0x65b9c7:goto L65b9c7;
case 0x65b9c8:c.instructions+=1;goto B65b9c8;
case 0x65b9c9:goto L65b9c9;
case 0x65b9ca:c.instructions+=2;goto B65b9ca;
case 0x65b9cb:c.instructions+=1;goto B65b9cb;
case 0x65b9ce:goto L65b9ce;
case 0x65b9d0:c.instructions+=6;goto B65b9d0;
case 0x65b9d1:c.instructions+=5;goto B65b9d1;
case 0x65b9d3:c.instructions+=4;goto B65b9d3;
case 0x65b9d4:c.instructions+=3;goto B65b9d4;
case 0x65b9d6:c.instructions+=2;goto B65b9d6;
case 0x65b9d8:c.instructions+=1;goto B65b9d8;
case 0x65b9dd:goto L65b9dd;
case 0x65b9e4:c.instructions+=1;goto B65b9e4;
case 0x65b9e6:goto L65b9e6;
case 0x65b9e9:c.instructions+=10;goto B65b9e9;
case 0x65b9ea:c.instructions+=9;goto B65b9ea;
case 0x65b9ec:c.instructions+=8;goto B65b9ec;
case 0x65b9ed:c.instructions+=7;goto B65b9ed;
case 0x65b9f0:c.instructions+=6;goto B65b9f0;
case 0x65b9f3:c.instructions+=5;goto B65b9f3;
case 0x65b9f6:c.instructions+=4;goto B65b9f6;
case 0x65b9f7:c.instructions+=3;goto B65b9f7;
case 0x65b9f9:c.instructions+=2;goto B65b9f9;
case 0x65b9fa:c.instructions+=1;goto B65b9fa;
case 0x65b9fd:goto L65b9fd;
case 0x65b9fe:c.instructions+=2;goto B65b9fe;
case 0x65ba01:c.instructions+=1;goto B65ba01;
case 0x65ba07:goto L65ba07;
case 0x65ba09:c.instructions+=2;goto B65ba09;
case 0x65ba0b:c.instructions+=1;goto B65ba0b;
case 0x65ba0d:goto L65ba0d;
case 0x65ba12:goto L65ba12;
case 0x65ba16:c.instructions+=1;goto B65ba16;
case 0x65ba18:goto L65ba18;
case 0x65ba1d:goto L65ba1d;
case 0x65ba21:c.instructions+=1;goto B65ba21;
case 0x65ba25:goto L65ba25;
case 0x65ba26:c.instructions+=1;goto B65ba26;
case 0x65ba27:goto L65ba27;
case 0x65ba28:c.instructions+=2;goto B65ba28;
case 0x65ba29:c.instructions+=1;goto B65ba29;
case 0x65ba2c:goto L65ba2c;
case 0x65ba2e:c.instructions+=11;goto B65ba2e;
case 0x65ba2f:c.instructions+=10;goto B65ba2f;
case 0x65ba31:c.instructions+=9;goto B65ba31;
case 0x65ba34:c.instructions+=8;goto B65ba34;
case 0x65ba35:c.instructions+=7;goto B65ba35;
case 0x65ba38:c.instructions+=6;goto B65ba38;
case 0x65ba39:c.instructions+=5;goto B65ba39;
case 0x65ba3c:c.instructions+=4;goto B65ba3c;
case 0x65ba3e:c.instructions+=3;goto B65ba3e;
case 0x65ba3f:c.instructions+=2;goto B65ba3f;
case 0x65ba42:c.instructions+=1;goto B65ba42;
case 0x65ba44:goto L65ba44;
case 0x65ba46:c.instructions+=2;goto B65ba46;
case 0x65ba47:c.instructions+=1;goto B65ba47;
case 0x65ba4a:goto L65ba4a;
case 0x65ba4c:c.instructions+=3;goto B65ba4c;
case 0x65ba4d:c.instructions+=2;goto B65ba4d;
case 0x65ba4f:c.instructions+=1;goto B65ba4f;
case 0x65ba51:goto L65ba51;
case 0x65ba53:c.instructions+=2;goto B65ba53;
case 0x65ba54:c.instructions+=1;goto B65ba54;
case 0x65ba57:goto L65ba57;
case 0x65ba59:c.instructions+=3;goto B65ba59;
case 0x65ba5c:c.instructions+=2;goto B65ba5c;
case 0x65ba5f:c.instructions+=1;goto B65ba5f;
case 0x65ba61:goto L65ba61;
case 0x65ba64:goto L65ba64;
case 0x65ba66:c.instructions+=2;goto B65ba66;
case 0x65ba68:c.instructions+=1;goto B65ba68;
case 0x65ba6a:goto L65ba6a;
case 0x65ba6c:c.instructions+=2;goto B65ba6c;
case 0x65ba6d:c.instructions+=1;goto B65ba6d;
case 0x65ba70:goto L65ba70;
case 0x65ba72:c.instructions+=3;goto B65ba72;
case 0x65ba73:c.instructions+=2;goto B65ba73;
case 0x65ba75:c.instructions+=1;goto B65ba75;
case 0x65ba77:goto L65ba77;
case 0x65ba79:c.instructions+=2;goto B65ba79;
case 0x65ba7a:c.instructions+=1;goto B65ba7a;
case 0x65ba7d:goto L65ba7d;
case 0x65ba7f:c.instructions+=2;goto B65ba7f;
case 0x65ba82:c.instructions+=1;goto B65ba82;
case 0x65ba85:goto L65ba85;
case 0x65ba87:c.instructions+=2;goto B65ba87;
case 0x65ba89:c.instructions+=1;goto B65ba89;
case 0x65ba8b:goto L65ba8b;
case 0x65ba8d:c.instructions+=2;goto B65ba8d;
case 0x65ba8e:c.instructions+=1;goto B65ba8e;
case 0x65ba91:goto L65ba91;
case 0x65ba93:c.instructions+=1;goto B65ba93;
case 0x65ba95:goto L65ba95;
case 0x65ba98:c.instructions+=2;goto B65ba98;
case 0x65ba9b:c.instructions+=1;goto B65ba9b;
case 0x65ba9d:goto L65ba9d;
case 0x65baa4:c.instructions+=1;goto B65baa4;
case 0x65baa9:goto L65baa9;
case 0x65baac:c.instructions+=1;goto B65baac;
case 0x65bab1:goto L65bab1;
case 0x65bab3:c.instructions+=3;goto B65bab3;
case 0x65bab4:c.instructions+=2;goto B65bab4;
case 0x65bab7:c.instructions+=1;goto B65bab7;
case 0x65bab9:goto L65bab9;
case 0x65bac0:c.instructions+=1;goto B65bac0;
case 0x65bac5:goto L65bac5;
case 0x65bac9:c.instructions+=1;goto B65bac9;
case 0x65bacb:goto L65bacb;
case 0x65bace:c.instructions+=11;goto B65bace;
case 0x65bad1:c.instructions+=10;goto B65bad1;
case 0x65bad4:c.instructions+=9;goto B65bad4;
case 0x65bad6:c.instructions+=8;goto B65bad6;
case 0x65bad7:c.instructions+=7;goto B65bad7;
case 0x65bad9:c.instructions+=6;goto B65bad9;
case 0x65badb:c.instructions+=5;goto B65badb;
case 0x65bade:c.instructions+=4;goto B65bade;
case 0x65bae1:c.instructions+=3;goto B65bae1;
case 0x65bae3:c.instructions+=2;goto B65bae3;
case 0x65bae6:c.instructions+=1;goto B65bae6;
case 0x65bae9:goto L65bae9;
case 0x65baeb:c.instructions+=3;goto B65baeb;
case 0x65baed:c.instructions+=2;goto B65baed;
case 0x65baef:c.instructions+=1;goto B65baef;
case 0x65baf1:goto L65baf1;
case 0x65baf3:c.instructions+=2;goto B65baf3;
case 0x65baf4:c.instructions+=1;goto B65baf4;
case 0x65baf7:goto L65baf7;
case 0x65baf9:c.instructions+=5;goto B65baf9;
case 0x65bafc:c.instructions+=4;goto B65bafc;
case 0x65baff:c.instructions+=3;goto B65baff;
case 0x65bb02:c.instructions+=2;goto B65bb02;
case 0x65bb04:c.instructions+=1;goto B65bb04;
case 0x65bb07:goto L65bb07;
case 0x65bb09:goto L65bb09;
case 0x65bb0b:c.instructions+=1;goto B65bb0b;
case 0x65bb0e:goto L65bb0e;
case 0x65bb10:goto L65bb10;
case 0x65bb13:c.instructions+=1;goto B65bb13;
case 0x65bb16:goto L65bb16;
case 0x65bb18:c.instructions+=1;goto B65bb18;
case 0x65bb1b:goto L65bb1b;
case 0x65bb1d:c.instructions+=2;goto B65bb1d;
case 0x65bb1e:c.instructions+=1;goto B65bb1e;
case 0x65bb21:goto L65bb21;
case 0x65bb23:c.instructions+=1;goto B65bb23;
case 0x65bb29:goto L65bb29;
case 0x65bb2c:c.instructions+=7;goto B65bb2c;
case 0x65bb2f:c.instructions+=6;goto B65bb2f;
case 0x65bb33:c.instructions+=5;goto B65bb33;
case 0x65bb36:c.instructions+=4;goto B65bb36;
case 0x65bb39:c.instructions+=3;goto B65bb39;
case 0x65bb3c:c.instructions+=2;goto B65bb3c;
case 0x65bb3f:c.instructions+=1;goto B65bb3f;
case 0x65bb45:goto L65bb45;
case 0x65bb48:c.instructions+=2;goto B65bb48;
case 0x65bb4b:c.instructions+=1;goto B65bb4b;
case 0x65bb51:goto L65bb51;
case 0x65bb54:c.instructions+=2;goto B65bb54;
case 0x65bb56:c.instructions+=1;goto B65bb56;
case 0x65bb5c:goto L65bb5c;
case 0x65bb5e:c.instructions+=2;goto B65bb5e;
case 0x65bb61:c.instructions+=1;goto B65bb61;
case 0x65bb67:goto L65bb67;
case 0x65bb6a:c.instructions+=1;goto B65bb6a;
case 0x65bb70:goto L65bb70;
case 0x65bb73:c.instructions+=1;goto B65bb73;
case 0x65bb79:goto L65bb79;
case 0x65bb7a:c.instructions+=2;goto B65bb7a;
case 0x65bb7b:c.instructions+=1;goto B65bb7b;
case 0x65bb80:goto L65bb80;
case 0x65bb82:c.instructions+=2;goto B65bb82;
case 0x65bb85:c.instructions+=1;goto B65bb85;
case 0x65bb8b:goto L65bb8b;
case 0x65bb8d:c.instructions+=4;goto B65bb8d;
case 0x65bb8f:c.instructions+=3;goto B65bb8f;
case 0x65bb92:c.instructions+=2;goto B65bb92;
case 0x65bb93:c.instructions+=1;goto B65bb93;
case 0x65bb96:goto L65bb96;
case 0x65bb99:c.instructions+=3;goto B65bb99;
case 0x65bb9b:c.instructions+=2;goto B65bb9b;
case 0x65bb9d:c.instructions+=1;goto B65bb9d;
case 0x65bba0:goto L65bba0;
case 0x65bba2:goto L65bba2;
case 0x65bba4:c.instructions+=1;goto B65bba4;
case 0x65bba7:goto L65bba7;
case 0x65bba9:goto L65bba9;
case 0x65bbab:c.instructions+=2;goto B65bbab;
case 0x65bbae:c.instructions+=1;goto B65bbae;
case 0x65bbb0:goto L65bbb0;
case 0x65bbb3:c.instructions+=3;goto B65bbb3;
case 0x65bbb4:c.instructions+=2;goto B65bbb4;
case 0x65bbb6:c.instructions+=1;goto B65bbb6;
case 0x65bbbb:goto L65bbbb;
case 0x65bbbf:c.instructions+=4;goto B65bbbf;
case 0x65bbc2:c.instructions+=3;goto B65bbc2;
case 0x65bbc5:c.instructions+=2;goto B65bbc5;
case 0x65bbcb:c.instructions+=1;goto B65bbcb;
case 0x65bbcd:goto L65bbcd;
case 0x65bbd0:c.instructions+=1;goto B65bbd0;
case 0x65bbd2:goto L65bbd2;
case 0x65bbd5:c.instructions+=3;goto B65bbd5;
case 0x65bbd6:c.instructions+=2;goto B65bbd6;
case 0x65bbd8:c.instructions+=1;goto B65bbd8;
case 0x65bbdd:goto L65bbdd;
case 0x65bbe1:c.instructions+=3;goto B65bbe1;
case 0x65bbe4:c.instructions+=2;goto B65bbe4;
case 0x65bbe7:c.instructions+=1;goto B65bbe7;
case 0x65bbed:goto L65bbed;
case 0x65bbf1:c.instructions+=6;goto B65bbf1;
case 0x65bbf4:c.instructions+=5;goto B65bbf4;
case 0x65bbf7:c.instructions+=4;goto B65bbf7;
case 0x65bbfa:c.instructions+=3;goto B65bbfa;
case 0x65bbfe:c.instructions+=2;goto B65bbfe;
case 0x65bc04:c.instructions+=1;goto B65bc04;
case 0x65bc06:goto L65bc06;
case 0x65bc09:c.instructions+=2;goto B65bc09;
case 0x65bc0e:c.instructions+=1;goto B65bc0e;
case 0x65bc10:goto L65bc10;
case 0x65bc11:c.instructions+=2;goto B65bc11;
case 0x65bc12:c.instructions+=1;goto B65bc12;
case 0x65bc17:goto L65bc17;
case 0x65bc19:c.instructions+=2;goto B65bc19;
case 0x65bc1c:c.instructions+=1;goto B65bc1c;
case 0x65bc1e:goto L65bc1e;
case 0x65bc20:c.instructions+=4;goto B65bc20;
case 0x65bc22:c.instructions+=3;goto B65bc22;
case 0x65bc25:c.instructions+=2;goto B65bc25;
case 0x65bc26:c.instructions+=1;goto B65bc26;
case 0x65bc29:goto L65bc29;
case 0x65bc2c:c.instructions+=3;goto B65bc2c;
case 0x65bc2e:c.instructions+=2;goto B65bc2e;
case 0x65bc30:c.instructions+=1;goto B65bc30;
case 0x65bc33:goto L65bc33;
case 0x65bc35:goto L65bc35;
case 0x65bc37:c.instructions+=1;goto B65bc37;
case 0x65bc3a:goto L65bc3a;
case 0x65bc3c:goto L65bc3c;
case 0x65bc3e:goto L65bc3e;
case 0x65bc45:goto L65bc45;
case 0x65bc49:c.instructions+=1;goto B65bc49;
case 0x65bc4b:goto L65bc4b;
case 0x65bc4e:c.instructions+=1;goto B65bc4e;
case 0x65bc53:goto L65bc53;
case 0x65bc54:goto L65bc54;
case 0x65bc57:c.instructions+=5;goto B65bc57;
case 0x65bc58:c.instructions+=4;goto B65bc58;
case 0x65bc59:c.instructions+=3;goto B65bc59;
case 0x65bc5a:c.instructions+=2;goto B65bc5a;
case 0x65bc5b:c.instructions+=1;goto B65bc5b;
case 0x65bc5e:goto L65bc5e;
case 0x65bc60:c.instructions+=15;goto B65bc60;
case 0x65bc61:c.instructions+=14;goto B65bc61;
case 0x65bc63:c.instructions+=13;goto B65bc63;
case 0x65bc66:c.instructions+=12;goto B65bc66;
case 0x65bc69:c.instructions+=11;goto B65bc69;
case 0x65bc6a:c.instructions+=10;goto B65bc6a;
case 0x65bc6b:c.instructions+=9;goto B65bc6b;
case 0x65bc6c:c.instructions+=8;goto B65bc6c;
case 0x65bc6f:c.instructions+=7;goto B65bc6f;
case 0x65bc72:c.instructions+=6;goto B65bc72;
case 0x65bc76:c.instructions+=5;goto B65bc76;
case 0x65bc78:c.instructions+=4;goto B65bc78;
case 0x65bc7a:c.instructions+=3;goto B65bc7a;
case 0x65bc7f:c.instructions+=2;goto B65bc7f;
case 0x65bc81:c.instructions+=1;goto B65bc81;
case 0x65bc83:goto L65bc83;
case 0x65bc86:c.instructions+=4;goto B65bc86;
case 0x65bc89:c.instructions+=3;goto B65bc89;
case 0x65bc8c:c.instructions+=2;goto B65bc8c;
case 0x65bc8e:c.instructions+=1;goto B65bc8e;
case 0x65bc90:goto L65bc90;
case 0x65bc93:c.instructions+=8;goto B65bc93;
case 0x65bc96:c.instructions+=7;goto B65bc96;
case 0x65bc99:c.instructions+=6;goto B65bc99;
case 0x65bc9b:c.instructions+=5;goto B65bc9b;
case 0x65bc9d:c.instructions+=4;goto B65bc9d;
case 0x65bc9f:c.instructions+=3;goto B65bc9f;
case 0x65bca1:c.instructions+=2;goto B65bca1;
case 0x65bca3:c.instructions+=1;goto B65bca3;
case 0x65bca5:goto L65bca5;
case 0x65bca8:c.instructions+=3;goto B65bca8;
case 0x65bcaa:c.instructions+=2;goto B65bcaa;
case 0x65bcaf:c.instructions+=1;goto B65bcaf;
case 0x65bcb1:goto L65bcb1;
case 0x65bcb3:goto L65bcb3;
case 0x65bcb4:c.instructions+=4;goto B65bcb4;
case 0x65bcb5:c.instructions+=3;goto B65bcb5;
case 0x65bcb6:c.instructions+=2;goto B65bcb6;
case 0x65bcb7:c.instructions+=1;goto B65bcb7;
case 0x65bcba:goto L65bcba;
case 0x65bcbc:c.instructions+=14;goto B65bcbc;
case 0x65bcbd:c.instructions+=13;goto B65bcbd;
case 0x65bcbf:c.instructions+=12;goto B65bcbf;
case 0x65bcc2:c.instructions+=11;goto B65bcc2;
case 0x65bcc5:c.instructions+=10;goto B65bcc5;
case 0x65bcc6:c.instructions+=9;goto B65bcc6;
case 0x65bcc9:c.instructions+=8;goto B65bcc9;
case 0x65bccb:c.instructions+=7;goto B65bccb;
case 0x65bccf:c.instructions+=6;goto B65bccf;
case 0x65bcd1:c.instructions+=5;goto B65bcd1;
case 0x65bcd2:c.instructions+=4;goto B65bcd2;
case 0x65bcd4:c.instructions+=3;goto B65bcd4;
case 0x65bcd9:c.instructions+=2;goto B65bcd9;
case 0x65bcdb:c.instructions+=1;goto B65bcdb;
case 0x65bcdd:goto L65bcdd;
case 0x65bce0:c.instructions+=3;goto B65bce0;
case 0x65bce3:c.instructions+=2;goto B65bce3;
case 0x65bce6:c.instructions+=1;goto B65bce6;
case 0x65bce8:goto L65bce8;
case 0x65bce9:c.instructions+=1;goto B65bce9;
case 0x65bcee:goto L65bcee;
case 0x65bcf0:c.instructions+=1;goto B65bcf0;
case 0x65bcf2:goto L65bcf2;
case 0x65bcf5:c.instructions+=1;goto B65bcf5;
case 0x65bcf7:goto L65bcf7;
case 0x65bcfa:c.instructions+=2;goto B65bcfa;
case 0x65bcfd:c.instructions+=1;goto B65bcfd;
case 0x65bcff:goto L65bcff;
case 0x65bd02:c.instructions+=1;goto B65bd02;
case 0x65bd04:goto L65bd04;
case 0x65bd07:c.instructions+=1;goto B65bd07;
case 0x65bd09:goto L65bd09;
case 0x65bd0a:c.instructions+=2;goto B65bd0a;
case 0x65bd0b:c.instructions+=1;goto B65bd0b;
case 0x65bd0d:goto L65bd0d;
case 0x65bd0e:goto L65bd0e;
case 0x65bd10:c.instructions+=2;goto B65bd10;
case 0x65bd12:c.instructions+=1;goto B65bd12;
case 0x65bd14:goto L65bd14;
case 0x65bd16:goto L65bd16;
case 0x65bd18:goto L65bd18;
case 0x65bd19:c.instructions+=3;goto B65bd19;
case 0x65bd1a:c.instructions+=2;goto B65bd1a;
case 0x65bd1b:c.instructions+=1;goto B65bd1b;
case 0x65bd1e:goto L65bd1e;
case 0x65bd20:c.instructions+=29;goto B65bd20;
case 0x65bd21:c.instructions+=28;goto B65bd21;
case 0x65bd23:c.instructions+=27;goto B65bd23;
case 0x65bd24:c.instructions+=26;goto B65bd24;
case 0x65bd27:c.instructions+=25;goto B65bd27;
case 0x65bd28:c.instructions+=24;goto B65bd28;
case 0x65bd2b:c.instructions+=23;goto B65bd2b;
case 0x65bd2c:c.instructions+=22;goto B65bd2c;
case 0x65bd2f:c.instructions+=21;goto B65bd2f;
case 0x65bd31:c.instructions+=20;goto B65bd31;
case 0x65bd34:c.instructions+=19;goto B65bd34;
case 0x65bd36:c.instructions+=18;goto B65bd36;
case 0x65bd39:c.instructions+=17;goto B65bd39;
case 0x65bd3d:c.instructions+=16;goto B65bd3d;
case 0x65bd40:c.instructions+=15;goto B65bd40;
case 0x65bd43:c.instructions+=14;goto B65bd43;
case 0x65bd46:c.instructions+=13;goto B65bd46;
case 0x65bd49:c.instructions+=12;goto B65bd49;
case 0x65bd4c:c.instructions+=11;goto B65bd4c;
case 0x65bd4f:c.instructions+=10;goto B65bd4f;
case 0x65bd52:c.instructions+=9;goto B65bd52;
case 0x65bd58:c.instructions+=8;goto B65bd58;
case 0x65bd5b:c.instructions+=7;goto B65bd5b;
case 0x65bd5f:c.instructions+=6;goto B65bd5f;
case 0x65bd63:c.instructions+=5;goto B65bd63;
case 0x65bd66:c.instructions+=4;goto B65bd66;
case 0x65bd6c:c.instructions+=3;goto B65bd6c;
case 0x65bd6f:c.instructions+=2;goto B65bd6f;
case 0x65bd73:c.instructions+=1;goto B65bd73;
case 0x65bd75:goto L65bd75;
case 0x65bd78:c.instructions+=21;goto B65bd78;
case 0x65bd7b:c.instructions+=20;goto B65bd7b;
case 0x65bd7e:c.instructions+=19;goto B65bd7e;
case 0x65bd81:c.instructions+=18;goto B65bd81;
case 0x65bd84:c.instructions+=17;goto B65bd84;
case 0x65bd8a:c.instructions+=16;goto B65bd8a;
case 0x65bd8d:c.instructions+=15;goto B65bd8d;
case 0x65bd90:c.instructions+=14;goto B65bd90;
case 0x65bd93:c.instructions+=13;goto B65bd93;
case 0x65bd96:c.instructions+=12;goto B65bd96;
case 0x65bd9c:c.instructions+=11;goto B65bd9c;
case 0x65bd9f:c.instructions+=10;goto B65bd9f;
case 0x65bda2:c.instructions+=9;goto B65bda2;
case 0x65bda5:c.instructions+=8;goto B65bda5;
case 0x65bda8:c.instructions+=7;goto B65bda8;
case 0x65bdab:c.instructions+=6;goto B65bdab;
case 0x65bdae:c.instructions+=5;goto B65bdae;
case 0x65bdb4:c.instructions+=4;goto B65bdb4;
case 0x65bdb7:c.instructions+=3;goto B65bdb7;
case 0x65bdba:c.instructions+=2;goto B65bdba;
case 0x65bdbd:c.instructions+=1;goto B65bdbd;
case 0x65bdbf:goto L65bdbf;
case 0x65bdc2:goto L65bdc2;
case 0x65bdc5:c.instructions+=6;goto B65bdc5;
case 0x65bdcb:c.instructions+=5;goto B65bdcb;
case 0x65bdce:c.instructions+=4;goto B65bdce;
case 0x65bdd0:c.instructions+=3;goto B65bdd0;
case 0x65bdd1:c.instructions+=2;goto B65bdd1;
case 0x65bdd4:c.instructions+=1;goto B65bdd4;
case 0x65bdd6:goto L65bdd6;
case 0x65bdd9:c.instructions+=3;goto B65bdd9;
case 0x65bddc:c.instructions+=2;goto B65bddc;
case 0x65bde1:c.instructions+=1;goto B65bde1;
case 0x65bde3:goto L65bde3;
case 0x65bde8:c.instructions+=1;goto B65bde8;
case 0x65bdea:goto L65bdea;
case 0x65bded:goto L65bded;
case 0x65bdf4:c.instructions+=4;goto B65bdf4;
case 0x65bdf5:c.instructions+=3;goto B65bdf5;
case 0x65bdf6:c.instructions+=2;goto B65bdf6;
case 0x65bdf7:c.instructions+=1;goto B65bdf7;
case 0x65bdf9:goto L65bdf9;
case 0x65be00:c.instructions+=1;goto B65be00;
case 0x65be02:goto L65be02;
case 0x65be07:goto L65be07;
case 0x65be09:c.instructions+=2;goto B65be09;
case 0x65be0a:c.instructions+=1;goto B65be0a;
case 0x65be0d:goto L65be0d;
case 0x65be0f:c.instructions+=11;goto B65be0f;
case 0x65be10:c.instructions+=10;goto B65be10;
case 0x65be12:c.instructions+=9;goto B65be12;
case 0x65be13:c.instructions+=8;goto B65be13;
case 0x65be14:c.instructions+=7;goto B65be14;
case 0x65be17:c.instructions+=6;goto B65be17;
case 0x65be19:c.instructions+=5;goto B65be19;
case 0x65be1e:c.instructions+=4;goto B65be1e;
case 0x65be20:c.instructions+=3;goto B65be20;
case 0x65be21:c.instructions+=2;goto B65be21;
case 0x65be23:c.instructions+=1;goto B65be23;
case 0x65be25:goto L65be25;
case 0x65be27:c.instructions+=1;goto B65be27;
case 0x65be2c:goto L65be2c;
case 0x65be2d:c.instructions+=3;goto B65be2d;
case 0x65be2f:c.instructions+=2;goto B65be2f;
case 0x65be31:c.instructions+=1;goto B65be31;
case 0x65be37:goto L65be37;
case 0x65be3d:c.instructions+=2;goto B65be3d;
case 0x65be40:c.instructions+=1;goto B65be40;
case 0x65be42:goto L65be42;
case 0x65be48:c.instructions+=1;goto B65be48;
case 0x65be4b:goto L65be4b;
case 0x65be4e:c.instructions+=1;goto B65be4e;
case 0x65be50:goto L65be50;
case 0x65be53:c.instructions+=1;goto B65be53;
case 0x65be55:goto L65be55;
case 0x65be58:c.instructions+=1;goto B65be58;
case 0x65be5b:goto L65be5b;
case 0x65be5d:c.instructions+=4;goto B65be5d;
case 0x65be61:c.instructions+=3;goto B65be61;
case 0x65be63:c.instructions+=2;goto B65be63;
case 0x65be65:c.instructions+=1;goto B65be65;
case 0x65be67:goto L65be67;
case 0x65be6a:c.instructions+=2;goto B65be6a;
case 0x65be6c:c.instructions+=1;goto B65be6c;
case 0x65be6e:goto L65be6e;
case 0x65be70:c.instructions+=1;goto B65be70;
case 0x65be72:goto L65be72;
case 0x65be74:c.instructions+=3;goto B65be74;
case 0x65be76:c.instructions+=2;goto B65be76;
case 0x65be78:c.instructions+=1;goto B65be78;
case 0x65be7a:goto L65be7a;
case 0x65be7c:c.instructions+=1;goto B65be7c;
case 0x65be7e:goto L65be7e;
case 0x65be81:c.instructions+=3;goto B65be81;
case 0x65be83:c.instructions+=2;goto B65be83;
case 0x65be86:c.instructions+=1;goto B65be86;
case 0x65be88:goto L65be88;
case 0x65be89:c.instructions+=5;goto B65be89;
case 0x65be8a:c.instructions+=4;goto B65be8a;
case 0x65be8b:c.instructions+=3;goto B65be8b;
case 0x65be8c:c.instructions+=2;goto B65be8c;
case 0x65be8e:c.instructions+=1;goto B65be8e;
case 0x65be90:goto L65be90;
case 0x65be92:c.instructions+=1;goto B65be92;
case 0x65be94:goto L65be94;
case 0x65be96:c.instructions+=1;goto B65be96;
case 0x65be99:goto L65be99;
case 0x65be9b:c.instructions+=2;goto B65be9b;
case 0x65be9d:c.instructions+=1;goto B65be9d;
case 0x65be9f:goto L65be9f;
case 0x65bea2:c.instructions+=1;goto B65bea2;
case 0x65bea4:goto L65bea4;
case 0x65bea6:c.instructions+=1;goto B65bea6;
case 0x65bea8:goto L65bea8;
case 0x65beab:c.instructions+=4;goto B65beab;
case 0x65beae:c.instructions+=3;goto B65beae;
case 0x65beb1:c.instructions+=2;goto B65beb1;
case 0x65beb7:c.instructions+=1;goto B65beb7;
case 0x65beb9:goto L65beb9;
case 0x65bebc:c.instructions+=2;goto B65bebc;
case 0x65bec2:c.instructions+=1;goto B65bec2;
case 0x65bec4:goto L65bec4;
case 0x65bec7:c.instructions+=3;goto B65bec7;
case 0x65beca:c.instructions+=2;goto B65beca;
case 0x65bed0:c.instructions+=1;goto B65bed0;
case 0x65bed2:goto L65bed2;
case 0x65bed4:c.instructions+=3;goto B65bed4;
case 0x65bed6:c.instructions+=2;goto B65bed6;
case 0x65beda:c.instructions+=1;goto B65beda;
case 0x65bedc:goto L65bedc;
case 0x65bedf:c.instructions+=2;goto B65bedf;
case 0x65bee5:c.instructions+=1;goto B65bee5;
case 0x65bee7:goto L65bee7;
case 0x65beea:c.instructions+=1;goto B65beea;
case 0x65beec:goto L65beec;
case 0x65beef:c.instructions+=1;goto B65beef;
case 0x65bef1:goto L65bef1;
case 0x65bef5:c.instructions+=1;goto B65bef5;
case 0x65bef7:goto L65bef7;
case 0x65befd:c.instructions+=8;goto B65befd;
case 0x65bf00:c.instructions+=7;goto B65bf00;
case 0x65bf03:c.instructions+=6;goto B65bf03;
case 0x65bf05:c.instructions+=5;goto B65bf05;
case 0x65bf07:c.instructions+=4;goto B65bf07;
case 0x65bf09:c.instructions+=3;goto B65bf09;
case 0x65bf0b:c.instructions+=2;goto B65bf0b;
case 0x65bf0d:c.instructions+=1;goto B65bf0d;
case 0x65bf0f:goto L65bf0f;
case 0x65bf11:goto L65bf11;
case 0x65bf12:goto L65bf12;
case 0x65bf13:c.instructions+=3;goto B65bf13;
case 0x65bf14:c.instructions+=2;goto B65bf14;
case 0x65bf15:c.instructions+=1;goto B65bf15;
case 0x65bf18:goto L65bf18;
case 0x65bf1a:c.instructions+=13;goto B65bf1a;
case 0x65bf1b:c.instructions+=12;goto B65bf1b;
case 0x65bf1d:c.instructions+=11;goto B65bf1d;
case 0x65bf1e:c.instructions+=10;goto B65bf1e;
case 0x65bf21:c.instructions+=9;goto B65bf21;
case 0x65bf22:c.instructions+=8;goto B65bf22;
case 0x65bf23:c.instructions+=7;goto B65bf23;
case 0x65bf26:c.instructions+=6;goto B65bf26;
case 0x65bf28:c.instructions+=5;goto B65bf28;
case 0x65bf2a:c.instructions+=4;goto B65bf2a;
case 0x65bf2d:c.instructions+=3;goto B65bf2d;
case 0x65bf2f:c.instructions+=2;goto B65bf2f;
case 0x65bf32:c.instructions+=1;goto B65bf32;
case 0x65bf34:goto L65bf34;
case 0x65bf35:goto L65bf35;
case 0x65bf37:c.instructions+=1;goto B65bf37;
case 0x65bf3d:goto L65bf3d;
case 0x65bf40:c.instructions+=1;goto B65bf40;
case 0x65bf46:goto L65bf46;
case 0x65bf49:c.instructions+=1;goto B65bf49;
case 0x65bf4f:goto L65bf4f;
case 0x65bf52:c.instructions+=1;goto B65bf52;
case 0x65bf54:goto L65bf54;
case 0x65bf57:c.instructions+=1;goto B65bf57;
case 0x65bf5d:goto L65bf5d;
case 0x65bf60:c.instructions+=9;goto B65bf60;
case 0x65bf63:c.instructions+=8;goto B65bf63;
case 0x65bf64:c.instructions+=7;goto B65bf64;
case 0x65bf67:c.instructions+=6;goto B65bf67;
case 0x65bf6b:c.instructions+=5;goto B65bf6b;
case 0x65bf6d:c.instructions+=4;goto B65bf6d;
case 0x65bf6f:c.instructions+=3;goto B65bf6f;
case 0x65bf71:c.instructions+=2;goto B65bf71;
case 0x65bf74:c.instructions+=1;goto B65bf74;
case 0x65bf76:goto L65bf76;
case 0x65bf79:goto L65bf79;
case 0x65bf7a:c.instructions+=3;goto B65bf7a;
case 0x65bf7b:c.instructions+=2;goto B65bf7b;
case 0x65bf7e:c.instructions+=1;goto B65bf7e;
case 0x65bf83:goto L65bf83;
case 0x65bf86:c.instructions+=2;goto B65bf86;
case 0x65bf89:c.instructions+=1;goto B65bf89;
case 0x65bf8b:goto L65bf8b;
case 0x65bf8d:c.instructions+=10;goto B65bf8d;
case 0x65bf8f:c.instructions+=9;goto B65bf8f;
case 0x65bf92:c.instructions+=8;goto B65bf92;
case 0x65bf95:c.instructions+=7;goto B65bf95;
case 0x65bf98:c.instructions+=6;goto B65bf98;
case 0x65bf9a:c.instructions+=5;goto B65bf9a;
case 0x65bf9d:c.instructions+=4;goto B65bf9d;
case 0x65bf9f:c.instructions+=3;goto B65bf9f;
case 0x65bfa2:c.instructions+=2;goto B65bfa2;
case 0x65bfa3:c.instructions+=1;goto B65bfa3;
case 0x65bfa8:goto L65bfa8;
case 0x65bfaa:c.instructions+=2;goto B65bfaa;
case 0x65bfad:c.instructions+=1;goto B65bfad;
case 0x65bfaf:goto L65bfaf;
case 0x65bfb2:c.instructions+=1;goto B65bfb2;
case 0x65bfb4:goto L65bfb4;
case 0x65bfb6:c.instructions+=1;goto B65bfb6;
case 0x65bfb8:goto L65bfb8;
case 0x65bfba:c.instructions+=1;goto B65bfba;
case 0x65bfbb:goto L65bfbb;
case 0x65bfbe:c.instructions+=7;goto B65bfbe;
case 0x65bfc0:c.instructions+=6;goto B65bfc0;
case 0x65bfc3:c.instructions+=5;goto B65bfc3;
case 0x65bfc5:c.instructions+=4;goto B65bfc5;
case 0x65bfc8:c.instructions+=3;goto B65bfc8;
case 0x65bfca:c.instructions+=2;goto B65bfca;
case 0x65bfcd:c.instructions+=1;goto B65bfcd;
case 0x65bfcf:goto L65bfcf;
case 0x65bfd1:c.instructions+=2;goto B65bfd1;
case 0x65bfd2:c.instructions+=1;goto B65bfd2;
case 0x65bfd4:goto L65bfd4;
case 0x65bfd5:c.instructions+=1;goto B65bfd5;
case 0x65bfd7:goto L65bfd7;
case 0x65bfd8:c.instructions+=1;goto B65bfd8;
case 0x65bfda:goto L65bfda;
case 0x65bfdc:c.instructions+=2;goto B65bfdc;
case 0x65bfde:c.instructions+=1;goto B65bfde;
case 0x65bfe0:goto L65bfe0;
case 0x65bfe2:c.instructions+=3;goto B65bfe2;
case 0x65bfe3:c.instructions+=2;goto B65bfe3;
case 0x65bfe4:c.instructions+=1;goto B65bfe4;
case 0x65bfe5:goto L65bfe5;
case 0x65bfe8:c.instructions+=8;goto B65bfe8;
case 0x65bfeb:c.instructions+=7;goto B65bfeb;
case 0x65bfee:c.instructions+=6;goto B65bfee;
case 0x65bff0:c.instructions+=5;goto B65bff0;
case 0x65bff3:c.instructions+=4;goto B65bff3;
case 0x65bff6:c.instructions+=3;goto B65bff6;
case 0x65bff8:c.instructions+=2;goto B65bff8;
case 0x65bffb:c.instructions+=1;goto B65bffb;
case 0x65bffd:goto L65bffd;
case 0x65bfff:c.instructions+=1;goto B65bfff;
default:missing_instruction(c.pc);}
B65b001:L65b001:{c.instructions+=4;NFSU2_TR(0x65b001);
__builtin_memmove((R+24),(R+0),4);
}
B65b003:{NFSU2_TR(0x65b003);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65b006:{NFSU2_TR(0x65b006);
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
B65b008:{NFSU2_TR(0x65b008);
if(r1(R+518)){{goto L65b010;}}
}
B65b00a:L65b00a:{c.instructions+=3;NFSU2_TR(0x65b00a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65b00c:{NFSU2_TR(0x65b00c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b00d:{NFSU2_TR(0x65b00d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65b010ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65b010:L65b010:{c.instructions+=6;NFSU2_TR(0x65b010);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65b011:{NFSU2_TR(0x65b011);
__builtin_memmove((R+0),(R+24),4);
}
B65b013:{NFSU2_TR(0x65b013);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65b014:{NFSU2_TR(0x65b014);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65b015:{NFSU2_TR(0x65b015);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B65b016:{NFSU2_TR(0x65b016);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65b019:L65b019:{c.instructions+=12;NFSU2_TR(0x65b019);
__builtin_memmove((R+28),(R+28),4);
}
B65b01b:{NFSU2_TR(0x65b01b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b01c:{NFSU2_TR(0x65b01c);
__builtin_memmove((R+20),(R+16),4);
}
B65b01e:{NFSU2_TR(0x65b01e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b01f:{NFSU2_TR(0x65b01f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b020:{NFSU2_TR(0x65b020);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65b023:{NFSU2_TR(0x65b023);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65b025:{NFSU2_TR(0x65b025);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65b028:{NFSU2_TR(0x65b028);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65b02a:{NFSU2_TR(0x65b02a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65b02d:{NFSU2_TR(0x65b02d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b02e:{NFSU2_TR(0x65b02e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65b031;}}
}
B65b030:L65b030:{c.instructions+=1;NFSU2_TR(0x65b030);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B65b031:L65b031:{c.instructions+=2;NFSU2_TR(0x65b031);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B65b033:{NFSU2_TR(0x65b033);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65b08f;}}
}
B65b035:L65b035:{c.instructions+=2;NFSU2_TR(0x65b035);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65b038:{NFSU2_TR(0x65b038);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L65b06c;}}
}
B65b03a:L65b03a:{c.instructions+=2;NFSU2_TR(0x65b03a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65b03d:{NFSU2_TR(0x65b03d);
if(r1(R+518)){{goto L65b08f;}}
}
B65b03f:L65b03f:{c.instructions+=2;NFSU2_TR(0x65b03f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65b042:{NFSU2_TR(0x65b042);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65b08f;}}
}
B65b044:L65b044:{c.instructions+=6;NFSU2_TR(0x65b044);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65b047:{NFSU2_TR(0x65b047);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B65b04a:{NFSU2_TR(0x65b04a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B65b04c:{NFSU2_TR(0x65b04c);
u8 U[10];
w1(R+512,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65b04e:{NFSU2_TR(0x65b04e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B65b050:{NFSU2_TR(0x65b050);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65b065;}}
}
B65b052:L65b052:{c.instructions+=1;NFSU2_TR(0x65b052);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65b055:L65b055:{c.instructions+=3;NFSU2_TR(0x65b055);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65b058:{NFSU2_TR(0x65b058);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b059:{NFSU2_TR(0x65b059);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65b05eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65b019u);}goto L65b019;}
}
B65b05e:L65b05e:{c.instructions+=3;NFSU2_TR(0x65b05e);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B65b060:{NFSU2_TR(0x65b060);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
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
B65b063:{NFSU2_TR(0x65b063);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65b055u);}goto L65b055;}}
}
B65b065:L65b065:{c.instructions+=3;NFSU2_TR(0x65b065);
__builtin_memmove((R+0),(R+28),4);
}
B65b067:{NFSU2_TR(0x65b067);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(r4(R+12)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B65b06a:{NFSU2_TR(0x65b06a);
{goto L65b091;}
}
B65b06c:L65b06c:{c.instructions+=14;NFSU2_TR(0x65b06c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65b06f:{NFSU2_TR(0x65b06f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B65b071:{NFSU2_TR(0x65b071);
u8 U[64];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x65b071);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x65b071);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B65b074:{NFSU2_TR(0x65b074);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65b077:{NFSU2_TR(0x65b077);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1cull))));
}
B65b07a:{NFSU2_TR(0x65b07a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B65b07c:{NFSU2_TR(0x65b07c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B65b07e:{NFSU2_TR(0x65b07e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65b080:{NFSU2_TR(0x65b080);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B65b083:{NFSU2_TR(0x65b083);
u8 U[6];
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65b085:{NFSU2_TR(0x65b085);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B65b088:{NFSU2_TR(0x65b088);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(s64(s32(r4(R+12)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+4)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B65b08b:{NFSU2_TR(0x65b08b);
__builtin_memmove((R+0),(R+4),4);
}
B65b08d:{NFSU2_TR(0x65b08d);
{goto L65b091;}
}
B65b08f:L65b08f:{c.instructions+=1;NFSU2_TR(0x65b08f);
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
B65b091:L65b091:{c.instructions+=5;NFSU2_TR(0x65b091);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65b092:{NFSU2_TR(0x65b092);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65b093:{NFSU2_TR(0x65b093);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65b094:{NFSU2_TR(0x65b094);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65b095:{NFSU2_TR(0x65b095);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65b098:L65b098:{c.instructions+=11;NFSU2_TR(0x65b098);
__builtin_memmove((R+28),(R+28),4);
}
B65b09a:{NFSU2_TR(0x65b09a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b09b:{NFSU2_TR(0x65b09b);
__builtin_memmove((R+20),(R+16),4);
}
B65b09d:{NFSU2_TR(0x65b09d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b09e:{NFSU2_TR(0x65b09e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b09f:{NFSU2_TR(0x65b09f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65b0a2:{NFSU2_TR(0x65b0a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65b0a4:{NFSU2_TR(0x65b0a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65b0a7:{NFSU2_TR(0x65b0a7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B65b0a9:{NFSU2_TR(0x65b0a9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b0aa:{NFSU2_TR(0x65b0aa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65b0e9;}}
}
B65b0ac:L65b0ac:{c.instructions+=2;NFSU2_TR(0x65b0ac);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65b0af:{NFSU2_TR(0x65b0af);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L65b0df;}}
}
B65b0b1:L65b0b1:{c.instructions+=2;NFSU2_TR(0x65b0b1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65b0b4:{NFSU2_TR(0x65b0b4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L65b0e9;}}
}
B65b0b6:L65b0b6:{c.instructions+=2;NFSU2_TR(0x65b0b6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65b0b9:{NFSU2_TR(0x65b0b9);
if(r1(R+518)){{goto L65b0e9;}}
}
B65b0bb:L65b0bb:{c.instructions+=2;NFSU2_TR(0x65b0bb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65b0be:{NFSU2_TR(0x65b0be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65b0e9;}}
}
B65b0c0:L65b0c0:{c.instructions+=6;NFSU2_TR(0x65b0c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65b0c3:{NFSU2_TR(0x65b0c3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
}
B65b0c6:{NFSU2_TR(0x65b0c6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B65b0c8:{NFSU2_TR(0x65b0c8);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65b0ca:{NFSU2_TR(0x65b0ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B65b0cc:{NFSU2_TR(0x65b0cc);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65b0e4;}}
}
B65b0ce:L65b0ce:{c.instructions+=2;NFSU2_TR(0x65b0ce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b0cf:{NFSU2_TR(0x65b0cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65b0d4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65b098u);}goto L65b098;}
}
B65b0d4:L65b0d4:{c.instructions+=2;NFSU2_TR(0x65b0d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65b0d6:{NFSU2_TR(0x65b0d6);
if(r1(R+518)){{goto L65b0e9;}}
}
B65b0d8:L65b0d8:{c.instructions+=3;NFSU2_TR(0x65b0d8);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B65b0d9:{NFSU2_TR(0x65b0d9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B65b0db:{NFSU2_TR(0x65b0db);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65b0ceu);}goto L65b0ce;}}
}
B65b0dd:L65b0dd:{c.instructions+=1;NFSU2_TR(0x65b0dd);
{goto L65b0e4;}
}
B65b0df:L65b0df:{c.instructions+=2;NFSU2_TR(0x65b0df);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
}
B65b0e2:{NFSU2_TR(0x65b0e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B65b0e4:L65b0e4:{c.instructions+=3;NFSU2_TR(0x65b0e4);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65b0e6:{NFSU2_TR(0x65b0e6);
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
B65b0e7:{NFSU2_TR(0x65b0e7);
{goto L65b0eb;}
}
B65b0e9:L65b0e9:{c.instructions+=1;NFSU2_TR(0x65b0e9);
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
B65b0eb:L65b0eb:{c.instructions+=5;NFSU2_TR(0x65b0eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65b0ec:{NFSU2_TR(0x65b0ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65b0ed:{NFSU2_TR(0x65b0ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65b0ee:{NFSU2_TR(0x65b0ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65b0ef:{NFSU2_TR(0x65b0ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65b0f2:L65b0f2:{c.instructions+=16;NFSU2_TR(0x65b0f2);
__builtin_memmove((R+28),(R+28),4);
}
B65b0f4:{NFSU2_TR(0x65b0f4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b0f5:{NFSU2_TR(0x65b0f5);
__builtin_memmove((R+20),(R+16),4);
}
B65b0f7:{NFSU2_TR(0x65b0f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B65b0fa:{NFSU2_TR(0x65b0fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65b0fd:{NFSU2_TR(0x65b0fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65b0ff:{NFSU2_TR(0x65b0ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65b102:{NFSU2_TR(0x65b102);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b103:{NFSU2_TR(0x65b103);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b104:{NFSU2_TR(0x65b104);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65b107:{NFSU2_TR(0x65b107);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b108:{NFSU2_TR(0x65b108);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B65b10a:{NFSU2_TR(0x65b10a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65b10c:{NFSU2_TR(0x65b10c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65b10f:{NFSU2_TR(0x65b10f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65b112:{NFSU2_TR(0x65b112);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65b11b;}}
}
B65b114:L65b114:{c.instructions+=1;NFSU2_TR(0x65b114);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B65b11b:L65b11b:{c.instructions+=2;NFSU2_TR(0x65b11b);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B65b11d:{NFSU2_TR(0x65b11d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65b3e6;}}
}
B65b123:L65b123:{c.instructions+=2;NFSU2_TR(0x65b123);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65b126:{NFSU2_TR(0x65b126);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L65b199;}}
}
B65b128:L65b128:{c.instructions+=2;NFSU2_TR(0x65b128);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65b12b:{NFSU2_TR(0x65b12b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65b3e6;}}
}
B65b131:L65b131:{c.instructions+=6;NFSU2_TR(0x65b131);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65b135:{NFSU2_TR(0x65b135);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
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
B65b139:{NFSU2_TR(0x65b139);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65b13c:{NFSU2_TR(0x65b13c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65b13f:{NFSU2_TR(0x65b13f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B65b141:{NFSU2_TR(0x65b141);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65b3ed;}}
}
B65b147:L65b147:{c.instructions+=2;NFSU2_TR(0x65b147);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65b14a:{NFSU2_TR(0x65b14a);
{goto L65b14f;}
}
B65b14c:L65b14c:{c.instructions+=1;NFSU2_TR(0x65b14c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65b14f:L65b14f:{c.instructions+=2;NFSU2_TR(0x65b14f);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
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
B65b152:{NFSU2_TR(0x65b152);
if(r1(R+518)){{goto L65b3ed;}}
}
B65b158:L65b158:{c.instructions+=4;NFSU2_TR(0x65b158);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65b15c:{NFSU2_TR(0x65b15c);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65b15e:{NFSU2_TR(0x65b15e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B65b160:{NFSU2_TR(0x65b160);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65b189;}}
}
B65b162:L65b162:{c.instructions+=2;NFSU2_TR(0x65b162);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B65b165:{NFSU2_TR(0x65b165);
if(r1(R+518)){{goto L65b189;}}
}
B65b167:L65b167:{c.instructions+=5;NFSU2_TR(0x65b167);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b168:{NFSU2_TR(0x65b168);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65b16b:{NFSU2_TR(0x65b16b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65b16e:{NFSU2_TR(0x65b16e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65b171:{NFSU2_TR(0x65b171);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65b176ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65b0f2u);}goto L65b0f2;}
}
B65b176:L65b176:{c.instructions+=3;NFSU2_TR(0x65b176);
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
B65b178:{NFSU2_TR(0x65b178);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65b17b:{NFSU2_TR(0x65b17b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65b3ed;}}
}
B65b181:L65b181:{c.instructions+=3;NFSU2_TR(0x65b181);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65b184:{NFSU2_TR(0x65b184);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B65b187:{NFSU2_TR(0x65b187);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65b162u);}goto L65b162;}}
}
B65b189:L65b189:{c.instructions+=4;NFSU2_TR(0x65b189);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65b18c:{NFSU2_TR(0x65b18c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65b18f:{NFSU2_TR(0x65b18f);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
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
B65b192:{NFSU2_TR(0x65b192);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65b14cu);}goto L65b14c;}}
}
B65b194:L65b194:{c.instructions+=1;NFSU2_TR(0x65b194);
{goto L65b3ed;}
}
B65b199:L65b199:{c.instructions+=17;NFSU2_TR(0x65b199);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65b19c:{NFSU2_TR(0x65b19c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65b19f:{NFSU2_TR(0x65b19f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65b1a1:{NFSU2_TR(0x65b1a1);
__builtin_memmove((R+8),(R+4),4);
}
B65b1a3:{NFSU2_TR(0x65b1a3);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ull))));
}
B65b1a6:{NFSU2_TR(0x65b1a6);
w1(R+512,u8((r1(R+8))!=(u8(0x0ull))));
w1(R+8,u8(0-u32(r1(R+8))));
}
B65b1a8:{NFSU2_TR(0x65b1a8);
__builtin_memmove((R+12),(R+4),4);
}
B65b1aa:{NFSU2_TR(0x65b1aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65b1ad:{NFSU2_TR(0x65b1ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65b1b0:{NFSU2_TR(0x65b1b0);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(R+8))));
w4(R+8,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B65b1b2:{NFSU2_TR(0x65b1b2);
w4(R+8,u32(0-u32(r4(R+8))));
}
B65b1b4:{NFSU2_TR(0x65b1b4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B65b1b7:{NFSU2_TR(0x65b1b7);
w1(R+512,carry<u32>(r4(R+12),r4(R+8)));
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B65b1b9:{NFSU2_TR(0x65b1b9);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B65b1ba:{NFSU2_TR(0x65b1ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65b1bd:{NFSU2_TR(0x65b1bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65b1c0:{NFSU2_TR(0x65b1c0);
if(r1(R+518)){{goto L65b32f;}}
}
B65b1c6:L65b1c6:{c.instructions+=2;NFSU2_TR(0x65b1c6);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B65b1c7:{NFSU2_TR(0x65b1c7);
if(r1(R+518)){{goto L65b27b;}}
}
B65b1cd:L65b1cd:{c.instructions+=2;NFSU2_TR(0x65b1cd);
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
B65b1ce:{NFSU2_TR(0x65b1ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65b3e6;}}
}
B65b1d4:L65b1d4:{c.instructions+=3;NFSU2_TR(0x65b1d4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65b1d7:{NFSU2_TR(0x65b1d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65b1da:{NFSU2_TR(0x65b1da);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65b3de;}}
}
B65b1e0:L65b1e0:{c.instructions+=2;NFSU2_TR(0x65b1e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65b1e3:{NFSU2_TR(0x65b1e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65b1e6:L65b1e6:{c.instructions+=3;NFSU2_TR(0x65b1e6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65b1e8:{NFSU2_TR(0x65b1e8);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B65b1ea:{NFSU2_TR(0x65b1ea);
if(r1(R+518)){{goto L65b3de;}}
}
B65b1f0:L65b1f0:{c.instructions+=2;NFSU2_TR(0x65b1f0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65b1f2:{NFSU2_TR(0x65b1f2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65b251;}}
}
B65b1f4:L65b1f4:{c.instructions+=3;NFSU2_TR(0x65b1f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65b1f6:{NFSU2_TR(0x65b1f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65b1f8:{NFSU2_TR(0x65b1f8);
if(r1(R+518)){{goto L65b251;}}
}
B65b1fa:L65b1fa:{c.instructions+=2;NFSU2_TR(0x65b1fa);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65b1fd:{NFSU2_TR(0x65b1fd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65b20a;}}
}
B65b1ff:L65b1ff:{c.instructions+=4;NFSU2_TR(0x65b1ff);
__builtin_memmove((R+12),(R+4),4);
}
B65b201:{NFSU2_TR(0x65b201);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B65b204:{NFSU2_TR(0x65b204);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65b207:{NFSU2_TR(0x65b207);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65b20a:L65b20a:{c.instructions+=2;NFSU2_TR(0x65b20a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65b20e:{NFSU2_TR(0x65b20e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65b247;}}
}
B65b210:L65b210:{c.instructions+=6;NFSU2_TR(0x65b210);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65b213:{NFSU2_TR(0x65b213);
__builtin_memmove((R+8),(R+0),4);
}
B65b215:{NFSU2_TR(0x65b215);
__builtin_memmove((R+4),(R+0),4);
}
B65b217:{NFSU2_TR(0x65b217);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B65b21a:{NFSU2_TR(0x65b21a);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B65b21d:{NFSU2_TR(0x65b21d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65b220:L65b220:{c.instructions+=15;NFSU2_TR(0x65b220);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+12),(U+0),4);
}
B65b222:{NFSU2_TR(0x65b222);
{u32 ea_=u32(r4(R+12)+r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B65b225:{NFSU2_TR(0x65b225);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65b228:{NFSU2_TR(0x65b228);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B65b22a:{NFSU2_TR(0x65b22a);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B65b22c:{NFSU2_TR(0x65b22c);
{u32 ea_=u32(r4(R+12)+r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B65b22f:{NFSU2_TR(0x65b22f);
__builtin_memmove((R+12),(R+24),4);
}
B65b231:{NFSU2_TR(0x65b231);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B65b234:{NFSU2_TR(0x65b234);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B65b236:{NFSU2_TR(0x65b236);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B65b238:{NFSU2_TR(0x65b238);
__builtin_memmove((R+12),(R+24),4);
}
B65b23a:{NFSU2_TR(0x65b23a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B65b23d:{NFSU2_TR(0x65b23d);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B65b23f:{NFSU2_TR(0x65b23f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65b242:{NFSU2_TR(0x65b242);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65b220u);}goto L65b220;}}
}
B65b244:L65b244:{c.instructions+=1;NFSU2_TR(0x65b244);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65b247:L65b247:{c.instructions+=5;NFSU2_TR(0x65b247);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65b24a:{NFSU2_TR(0x65b24a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+0,u32(u32(r4(U+0))-u32(r4(R+12))));
s4(u32(r4(R+8)),r4(U+0));
}
B65b24c:{NFSU2_TR(0x65b24c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B65b24d:{NFSU2_TR(0x65b24d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B65b24f:{NFSU2_TR(0x65b24f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65b1f4u);}goto L65b1f4;}}
}
B65b251:L65b251:{c.instructions+=12;NFSU2_TR(0x65b251);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B65b254:{NFSU2_TR(0x65b254);
__builtin_memmove((R+4),(R+24),4);
}
B65b256:{NFSU2_TR(0x65b256);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B65b25a:{NFSU2_TR(0x65b25a);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B65b25d:{NFSU2_TR(0x65b25d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+0))));
s4(u32(r4(R+28)),r4(U+0));
}
B65b25f:{NFSU2_TR(0x65b25f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65b262:{NFSU2_TR(0x65b262);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B65b265:{NFSU2_TR(0x65b265);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+4))));
s4(u32(r4(R+0)),r4(U+0));
}
B65b267:{NFSU2_TR(0x65b267);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65b26a:{NFSU2_TR(0x65b26a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65b26d:{NFSU2_TR(0x65b26d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B65b270:{NFSU2_TR(0x65b270);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65b1e6u);}goto L65b1e6;}}
}
B65b276:L65b276:{c.instructions+=1;NFSU2_TR(0x65b276);
{goto L65b3de;}
}
B65b27b:L65b27b:{c.instructions+=3;NFSU2_TR(0x65b27b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65b27e:{NFSU2_TR(0x65b27e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65b281:{NFSU2_TR(0x65b281);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65b3de;}}
}
B65b287:L65b287:{c.instructions+=1;NFSU2_TR(0x65b287);
{goto L65b28b;}
}
B65b289:L65b289:{c.instructions+=1;NFSU2_TR(0x65b289);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B65b28b:L65b28b:{c.instructions+=3;NFSU2_TR(0x65b28b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65b28e:{NFSU2_TR(0x65b28e);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B65b290:{NFSU2_TR(0x65b290);
if(r1(R+518)){{goto L65b3de;}}
}
B65b296:L65b296:{c.instructions+=2;NFSU2_TR(0x65b296);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65b298:{NFSU2_TR(0x65b298);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65b302;}}
}
B65b29a:L65b29a:{c.instructions+=3;NFSU2_TR(0x65b29a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65b29c:{NFSU2_TR(0x65b29c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65b29e:{NFSU2_TR(0x65b29e);
if(r1(R+518)){{goto L65b302;}}
}
B65b2a0:L65b2a0:{c.instructions+=2;NFSU2_TR(0x65b2a0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65b2a3:{NFSU2_TR(0x65b2a3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65b2b0;}}
}
B65b2a5:L65b2a5:{c.instructions+=4;NFSU2_TR(0x65b2a5);
__builtin_memmove((R+8),(R+4),4);
}
B65b2a7:{NFSU2_TR(0x65b2a7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B65b2aa:{NFSU2_TR(0x65b2aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65b2ad:{NFSU2_TR(0x65b2ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65b2b0:L65b2b0:{c.instructions+=2;NFSU2_TR(0x65b2b0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65b2b4:{NFSU2_TR(0x65b2b4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65b2f8;}}
}
B65b2b6:L65b2b6:{c.instructions+=7;NFSU2_TR(0x65b2b6);
__builtin_memmove((R+0),(R+28),4);
}
B65b2b8:{NFSU2_TR(0x65b2b8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B65b2bb:{NFSU2_TR(0x65b2bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65b2be:{NFSU2_TR(0x65b2be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65b2c1:{NFSU2_TR(0x65b2c1);
__builtin_memmove((R+12),(R+28),4);
}
B65b2c3:{NFSU2_TR(0x65b2c3);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B65b2c6:{NFSU2_TR(0x65b2c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65b2c9:L65b2c9:{c.instructions+=4;NFSU2_TR(0x65b2c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65b2cc:{NFSU2_TR(0x65b2cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65b2ce:{NFSU2_TR(0x65b2ce);
{u32 ea_=u32(r4(R+0)+r4(R+12));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B65b2d1:{NFSU2_TR(0x65b2d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65b2d6ull));
TAIL_STATIC(0x75dd28u,75d);
}
B65b2d6:L65b2d6:{c.instructions+=12;NFSU2_TR(0x65b2d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65b2d9:{NFSU2_TR(0x65b2d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65b2dc:{NFSU2_TR(0x65b2dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65b2de:{NFSU2_TR(0x65b2de);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B65b2e1:{NFSU2_TR(0x65b2e1);
__builtin_memmove((R+0),(R+24),4);
}
B65b2e3:{NFSU2_TR(0x65b2e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B65b2e6:{NFSU2_TR(0x65b2e6);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B65b2e8:{NFSU2_TR(0x65b2e8);
__builtin_memmove((R+0),(R+24),4);
}
B65b2ea:{NFSU2_TR(0x65b2ea);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B65b2ed:{NFSU2_TR(0x65b2ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B65b2f0:{NFSU2_TR(0x65b2f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65b2f3:{NFSU2_TR(0x65b2f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65b2c9u);}goto L65b2c9;}}
}
B65b2f5:L65b2f5:{c.instructions+=1;NFSU2_TR(0x65b2f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65b2f8:L65b2f8:{c.instructions+=5;NFSU2_TR(0x65b2f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65b2fb:{NFSU2_TR(0x65b2fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))-u32(r4(R+12))));
s4(u32(r4(R+0)),r4(U+0));
}
B65b2fd:{NFSU2_TR(0x65b2fd);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B65b2fe:{NFSU2_TR(0x65b2fe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B65b300:{NFSU2_TR(0x65b300);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65b29au);}goto L65b29a;}}
}
B65b302:L65b302:{c.instructions+=13;NFSU2_TR(0x65b302);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65b305:{NFSU2_TR(0x65b305);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B65b308:{NFSU2_TR(0x65b308);
__builtin_memmove((R+4),(R+24),4);
}
B65b30a:{NFSU2_TR(0x65b30a);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B65b30e:{NFSU2_TR(0x65b30e);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B65b311:{NFSU2_TR(0x65b311);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+28))));
s4(u32(r4(R+0)),r4(U+0));
}
B65b313:{NFSU2_TR(0x65b313);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65b316:{NFSU2_TR(0x65b316);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B65b319:{NFSU2_TR(0x65b319);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+4))));
s4(u32(r4(R+0)),r4(U+0));
}
B65b31b:{NFSU2_TR(0x65b31b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65b31e:{NFSU2_TR(0x65b31e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65b321:{NFSU2_TR(0x65b321);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B65b324:{NFSU2_TR(0x65b324);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65b289u);}goto L65b289;}}
}
B65b32a:L65b32a:{c.instructions+=1;NFSU2_TR(0x65b32a);
{goto L65b3de;}
}
B65b32f:L65b32f:{c.instructions+=3;NFSU2_TR(0x65b32f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65b332:{NFSU2_TR(0x65b332);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65b335:{NFSU2_TR(0x65b335);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65b3de;}}
}
B65b33b:L65b33b:{c.instructions+=1;NFSU2_TR(0x65b33b);
{goto L65b33f;}
}
B65b33d:L65b33d:{c.instructions+=1;NFSU2_TR(0x65b33d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B65b33f:L65b33f:{c.instructions+=3;NFSU2_TR(0x65b33f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65b342:{NFSU2_TR(0x65b342);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B65b344:{NFSU2_TR(0x65b344);
if(r1(R+518)){{goto L65b3de;}}
}
B65b34a:L65b34a:{c.instructions+=2;NFSU2_TR(0x65b34a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65b34c:{NFSU2_TR(0x65b34c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65b3b6;}}
}
B65b34e:L65b34e:{c.instructions+=3;NFSU2_TR(0x65b34e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65b350:{NFSU2_TR(0x65b350);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65b352:{NFSU2_TR(0x65b352);
if(r1(R+518)){{goto L65b3b6;}}
}
B65b354:L65b354:{c.instructions+=2;NFSU2_TR(0x65b354);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65b357:{NFSU2_TR(0x65b357);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65b364;}}
}
B65b359:L65b359:{c.instructions+=4;NFSU2_TR(0x65b359);
__builtin_memmove((R+8),(R+4),4);
}
B65b35b:{NFSU2_TR(0x65b35b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B65b35e:{NFSU2_TR(0x65b35e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65b361:{NFSU2_TR(0x65b361);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65b364:L65b364:{c.instructions+=2;NFSU2_TR(0x65b364);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65b368:{NFSU2_TR(0x65b368);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65b3ac;}}
}
B65b36a:L65b36a:{c.instructions+=7;NFSU2_TR(0x65b36a);
__builtin_memmove((R+0),(R+28),4);
}
B65b36c:{NFSU2_TR(0x65b36c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B65b36f:{NFSU2_TR(0x65b36f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65b372:{NFSU2_TR(0x65b372);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65b375:{NFSU2_TR(0x65b375);
__builtin_memmove((R+12),(R+28),4);
}
B65b377:{NFSU2_TR(0x65b377);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B65b37a:{NFSU2_TR(0x65b37a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65b37d:L65b37d:{c.instructions+=4;NFSU2_TR(0x65b37d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65b380:{NFSU2_TR(0x65b380);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65b382:{NFSU2_TR(0x65b382);
{u32 ea_=u32(r4(R+0)+r4(R+12));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B65b385:{NFSU2_TR(0x65b385);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65b38aull));
TAIL_STATIC(0x75dd28u,75d);
}
B65b38a:L65b38a:{c.instructions+=12;NFSU2_TR(0x65b38a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65b38d:{NFSU2_TR(0x65b38d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65b390:{NFSU2_TR(0x65b390);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65b392:{NFSU2_TR(0x65b392);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B65b395:{NFSU2_TR(0x65b395);
__builtin_memmove((R+0),(R+24),4);
}
B65b397:{NFSU2_TR(0x65b397);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B65b39a:{NFSU2_TR(0x65b39a);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B65b39c:{NFSU2_TR(0x65b39c);
__builtin_memmove((R+0),(R+24),4);
}
B65b39e:{NFSU2_TR(0x65b39e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B65b3a1:{NFSU2_TR(0x65b3a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B65b3a4:{NFSU2_TR(0x65b3a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65b3a7:{NFSU2_TR(0x65b3a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65b37du);}goto L65b37d;}}
}
B65b3a9:L65b3a9:{c.instructions+=1;NFSU2_TR(0x65b3a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65b3ac:L65b3ac:{c.instructions+=5;NFSU2_TR(0x65b3ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65b3af:{NFSU2_TR(0x65b3af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))-u32(r4(R+12))));
s4(u32(r4(R+0)),r4(U+0));
}
B65b3b1:{NFSU2_TR(0x65b3b1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B65b3b2:{NFSU2_TR(0x65b3b2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B65b3b4:{NFSU2_TR(0x65b3b4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65b34eu);}goto L65b34e;}}
}
B65b3b6:L65b3b6:{c.instructions+=13;NFSU2_TR(0x65b3b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65b3b9:{NFSU2_TR(0x65b3b9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B65b3bc:{NFSU2_TR(0x65b3bc);
__builtin_memmove((R+4),(R+24),4);
}
B65b3be:{NFSU2_TR(0x65b3be);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B65b3c2:{NFSU2_TR(0x65b3c2);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B65b3c5:{NFSU2_TR(0x65b3c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+28))));
s4(u32(r4(R+0)),r4(U+0));
}
B65b3c7:{NFSU2_TR(0x65b3c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65b3ca:{NFSU2_TR(0x65b3ca);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B65b3cd:{NFSU2_TR(0x65b3cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+4))));
s4(u32(r4(R+0)),r4(U+0));
}
B65b3cf:{NFSU2_TR(0x65b3cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65b3d2:{NFSU2_TR(0x65b3d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65b3d5:{NFSU2_TR(0x65b3d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B65b3d8:{NFSU2_TR(0x65b3d8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65b33du);}goto L65b33d;}}
}
B65b3de:L65b3de:{c.instructions+=3;NFSU2_TR(0x65b3de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65b3e1:{NFSU2_TR(0x65b3e1);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+512,carry<u32>(r4(U+0),u32(0x1cull)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+523,scarry<u32>(r4(U+0),u32(0x1cull)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1cull))));
s4(u32(r4(R+0)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B65b3e4:{NFSU2_TR(0x65b3e4);
{goto L65b3ed;}
}
B65b3e6:L65b3e6:{c.instructions+=1;NFSU2_TR(0x65b3e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B65b3ed:L65b3ed:{c.instructions+=6;NFSU2_TR(0x65b3ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65b3f0:{NFSU2_TR(0x65b3f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65b3f1:{NFSU2_TR(0x65b3f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65b3f2:{NFSU2_TR(0x65b3f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65b3f3:{NFSU2_TR(0x65b3f3);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B65b3f4:{NFSU2_TR(0x65b3f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65b3f7:L65b3f7:{c.instructions+=28;NFSU2_TR(0x65b3f7);
__builtin_memmove((R+28),(R+28),4);
}
B65b3f9:{NFSU2_TR(0x65b3f9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b3fa:{NFSU2_TR(0x65b3fa);
__builtin_memmove((R+20),(R+16),4);
}
B65b3fc:{NFSU2_TR(0x65b3fc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b3fd:{NFSU2_TR(0x65b3fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65b400:{NFSU2_TR(0x65b400);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65b402:{NFSU2_TR(0x65b402);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b403:{NFSU2_TR(0x65b403);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65b406:{NFSU2_TR(0x65b406);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b407:{NFSU2_TR(0x65b407);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65b40a:{NFSU2_TR(0x65b40a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b40b:{NFSU2_TR(0x65b40b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65b40e:{NFSU2_TR(0x65b40e);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+28)),r2(U+0));
}
B65b411:{NFSU2_TR(0x65b411);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B65b415:{NFSU2_TR(0x65b415);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B65b419:{NFSU2_TR(0x65b419);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B65b41d:{NFSU2_TR(0x65b41d);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
w2(U+0,u16(u32(r2(U+0))|u32(u16(0xffffull))));
s2(u32(r4(R+12)),r2(U+0));
}
B65b422:{NFSU2_TR(0x65b422);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(u16(0xffffull))));
s2(u32(r4(U+0)),r2(U+4));
}
B65b428:{NFSU2_TR(0x65b428);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(u16(0xffffull))));
s2(u32(r4(U+0)),r2(U+4));
}
B65b42e:{NFSU2_TR(0x65b42e);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(u16(0xffffull))));
s2(u32(r4(U+0)),r2(U+4));
}
B65b434:{NFSU2_TR(0x65b434);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B65b437:{NFSU2_TR(0x65b437);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+24)),r2(U+0));
}
B65b43a:{NFSU2_TR(0x65b43a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B65b43e:{NFSU2_TR(0x65b43e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B65b442:{NFSU2_TR(0x65b442);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B65b446:{NFSU2_TR(0x65b446);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65b449:{NFSU2_TR(0x65b449);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B65b44b:{NFSU2_TR(0x65b44b);
if(r1(R+518)){{goto L65b641;}}
}
B65b451:L65b451:{c.instructions+=8;NFSU2_TR(0x65b451);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65b454:{NFSU2_TR(0x65b454);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B65b457:{NFSU2_TR(0x65b457);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b458:{NFSU2_TR(0x65b458);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B65b45b:{NFSU2_TR(0x65b45b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b45c:{NFSU2_TR(0x65b45c);
u8 U[4];
w4(U+0,u32(0x42415443ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b461:{NFSU2_TR(0x65b461);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65b464:{NFSU2_TR(0x65b464);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65b469ull));
TAIL_STATIC(0x671db5u,671);
}
B65b469:L65b469:{c.instructions+=2;NFSU2_TR(0x65b469);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B65b46b:{NFSU2_TR(0x65b46b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L65b474;}}
}
B65b46d:L65b46d:{c.instructions+=2;NFSU2_TR(0x65b46d);
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
B65b46f:{NFSU2_TR(0x65b46f);
{goto L65b644;}
}
B65b474:L65b474:{c.instructions+=3;NFSU2_TR(0x65b474);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65b477:{NFSU2_TR(0x65b477);
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
B65b479:{NFSU2_TR(0x65b479);
if(r1(R+518)){{goto L65b641;}}
}
B65b47f:L65b47f:{c.instructions+=2;NFSU2_TR(0x65b47f);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1cull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1cull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B65b483:{NFSU2_TR(0x65b483);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L65b491;}}
}
B65b485:L65b485:{c.instructions+=2;NFSU2_TR(0x65b485);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B65b48c:{NFSU2_TR(0x65b48c);
{goto L65b641;}
}
B65b491:L65b491:{c.instructions+=4;NFSU2_TR(0x65b491);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65b494:{NFSU2_TR(0x65b494);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x1cull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B65b49b:{NFSU2_TR(0x65b49b);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B65b49e:{NFSU2_TR(0x65b49e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65b485u);}goto L65b485;}}
}
B65b4a0:L65b4a0:{c.instructions+=5;NFSU2_TR(0x65b4a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65b4a3:{NFSU2_TR(0x65b4a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65b4a7:{NFSU2_TR(0x65b4a7);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B65b4a9:{NFSU2_TR(0x65b4a9);
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
B65b4ab:{NFSU2_TR(0x65b4ab);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65b63c;}}
}
B65b4b1:L65b4b1:{c.instructions+=3;NFSU2_TR(0x65b4b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65b4b5:{NFSU2_TR(0x65b4b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65b4b7:{NFSU2_TR(0x65b4b7);
{goto L65b4c6;}
}
B65b4b9:L65b4b9:{c.instructions+=3;NFSU2_TR(0x65b4b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65b4bc:{NFSU2_TR(0x65b4bc);
u8 U[11];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((U+9),(U+8),1);
w1(U+10,u8(u32(r1(U+9))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+10))==(u8(0x0ull))));
}
B65b4c0:{NFSU2_TR(0x65b4c0);
if(r1(R+518)){{goto L65b4cb;}}
}
B65b4c2:L65b4c2:{c.instructions+=2;NFSU2_TR(0x65b4c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65b4c5:{NFSU2_TR(0x65b4c5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B65b4c6:L65b4c6:{c.instructions+=2;NFSU2_TR(0x65b4c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B65b4c9:{NFSU2_TR(0x65b4c9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65b4b9u);}goto L65b4b9;}}
}
B65b4cb:L65b4cb:{c.instructions+=5;NFSU2_TR(0x65b4cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65b4cd:{NFSU2_TR(0x65b4cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65b4d0:{NFSU2_TR(0x65b4d0);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B65b4d2:{NFSU2_TR(0x65b4d2);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+4)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B65b4d5:{NFSU2_TR(0x65b4d5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65b485u);}goto L65b485;}}
}
B65b4d7:L65b4d7:{c.instructions+=3;NFSU2_TR(0x65b4d7);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B65b4db:{NFSU2_TR(0x65b4db);
w1(R+512,u8((r4(R+4))<(u32(0x0ull))));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B65b4de:{NFSU2_TR(0x65b4de);
if(r1(R+518)){{goto L65b5c7;}}
}
B65b4e4:L65b4e4:{c.instructions+=2;NFSU2_TR(0x65b4e4);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B65b4e5:{NFSU2_TR(0x65b4e5);
if(r1(R+518)){{goto L65b57f;}}
}
B65b4eb:L65b4eb:{c.instructions+=2;NFSU2_TR(0x65b4eb);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B65b4ec:{NFSU2_TR(0x65b4ec);
if(r1(R+518)){{goto L65b539;}}
}
B65b4ee:L65b4ee:{c.instructions+=2;NFSU2_TR(0x65b4ee);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65b4ef:{NFSU2_TR(0x65b4ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65b485u);}goto L65b485;}}
}
B65b4f1:L65b4f1:{c.instructions+=9;NFSU2_TR(0x65b4f1);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B65b4f5:{NFSU2_TR(0x65b4f5);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(r2(R+4))));
s2(u32(r4(U+0)),r2(U+4));
}
B65b4f9:{NFSU2_TR(0x65b4f9);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B65b4fd:{NFSU2_TR(0x65b4fd);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B65b501:{NFSU2_TR(0x65b501);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65b505:{NFSU2_TR(0x65b505);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B65b507:{NFSU2_TR(0x65b507);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B65b50b:{NFSU2_TR(0x65b50b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65b50d:{NFSU2_TR(0x65b50d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L65b519;}}
}
B65b50f:L65b50f:{c.instructions+=3;NFSU2_TR(0x65b50f);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B65b513:{NFSU2_TR(0x65b513);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B65b517:{NFSU2_TR(0x65b517);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B65b519:L65b519:{c.instructions+=6;NFSU2_TR(0x65b519);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B65b51d:{NFSU2_TR(0x65b51d);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B65b521:{NFSU2_TR(0x65b521);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B65b525:{NFSU2_TR(0x65b525);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
w1(R+512,u8((r2(R+4))<(r2(U+0))));
}
B65b528:{NFSU2_TR(0x65b528);
w4(R+4,u32(r2(R+4)));
}
B65b52b:{NFSU2_TR(0x65b52b);
if(r1(R+512)){{goto L65b530;}}
}
B65b52d:L65b52d:{c.instructions+=1;NFSU2_TR(0x65b52d);
w4(R+4,u32(r2(R+8)));
}
B65b530:L65b530:{c.instructions+=2;NFSU2_TR(0x65b530);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B65b534:{NFSU2_TR(0x65b534);
{goto L65b60d;}
}
B65b539:L65b539:{c.instructions+=9;NFSU2_TR(0x65b539);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B65b53d:{NFSU2_TR(0x65b53d);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w2(U+0,u16(u32(r2(U+0))+u32(r2(R+4))));
s2(u32(r4(R+28)),r2(U+0));
}
B65b540:{NFSU2_TR(0x65b540);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B65b544:{NFSU2_TR(0x65b544);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B65b548:{NFSU2_TR(0x65b548);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B65b54a:{NFSU2_TR(0x65b54a);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+4,u32(r2(U+0)));
}
B65b54d:{NFSU2_TR(0x65b54d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65b54f:{NFSU2_TR(0x65b54f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B65b556:{NFSU2_TR(0x65b556);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L65b562;}}
}
B65b558:L65b558:{c.instructions+=3;NFSU2_TR(0x65b558);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B65b55c:{NFSU2_TR(0x65b55c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B65b560:{NFSU2_TR(0x65b560);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B65b562:L65b562:{c.instructions+=6;NFSU2_TR(0x65b562);
u8 U[2];
__builtin_memmove((U+0),(R+4),2);
s2(u32(r4(R+24)),r2(U+0));
}
B65b565:{NFSU2_TR(0x65b565);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
__builtin_memmove((R+4),(U+0),2);
}
B65b568:{NFSU2_TR(0x65b568);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B65b56c:{NFSU2_TR(0x65b56c);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
w1(R+512,u8((r2(R+4))<(r2(U+0))));
}
B65b56f:{NFSU2_TR(0x65b56f);
w4(R+4,u32(r2(R+4)));
}
B65b572:{NFSU2_TR(0x65b572);
if(r1(R+512)){{goto L65b577;}}
}
B65b574:L65b574:{c.instructions+=1;NFSU2_TR(0x65b574);
w4(R+4,u32(r2(R+8)));
}
B65b577:L65b577:{c.instructions+=2;NFSU2_TR(0x65b577);
u8 U[2];
__builtin_memmove((U+0),(R+4),2);
s2(u32(r4(R+12)),r2(U+0));
}
B65b57a:{NFSU2_TR(0x65b57a);
{goto L65b60d;}
}
B65b57f:L65b57f:{c.instructions+=9;NFSU2_TR(0x65b57f);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B65b583:{NFSU2_TR(0x65b583);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(r2(R+4))));
s2(u32(r4(U+0)),r2(U+4));
}
B65b587:{NFSU2_TR(0x65b587);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B65b58b:{NFSU2_TR(0x65b58b);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B65b58f:{NFSU2_TR(0x65b58f);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B65b591:{NFSU2_TR(0x65b591);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B65b595:{NFSU2_TR(0x65b595);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65b597:{NFSU2_TR(0x65b597);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B65b59e:{NFSU2_TR(0x65b59e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L65b5aa;}}
}
B65b5a0:L65b5a0:{c.instructions+=3;NFSU2_TR(0x65b5a0);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B65b5a4:{NFSU2_TR(0x65b5a4);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B65b5a8:{NFSU2_TR(0x65b5a8);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B65b5aa:L65b5aa:{c.instructions+=6;NFSU2_TR(0x65b5aa);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B65b5ae:{NFSU2_TR(0x65b5ae);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B65b5b2:{NFSU2_TR(0x65b5b2);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B65b5b6:{NFSU2_TR(0x65b5b6);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
w1(R+512,u8((r2(R+4))<(r2(U+0))));
}
B65b5b9:{NFSU2_TR(0x65b5b9);
w4(R+4,u32(r2(R+4)));
}
B65b5bc:{NFSU2_TR(0x65b5bc);
if(r1(R+512)){{goto L65b5c1;}}
}
B65b5be:L65b5be:{c.instructions+=1;NFSU2_TR(0x65b5be);
w4(R+4,u32(r2(R+8)));
}
B65b5c1:L65b5c1:{c.instructions+=2;NFSU2_TR(0x65b5c1);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B65b5c5:{NFSU2_TR(0x65b5c5);
{goto L65b60d;}
}
B65b5c7:L65b5c7:{c.instructions+=9;NFSU2_TR(0x65b5c7);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B65b5cb:{NFSU2_TR(0x65b5cb);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(r2(R+4))));
s2(u32(r4(U+0)),r2(U+4));
}
B65b5cf:{NFSU2_TR(0x65b5cf);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B65b5d3:{NFSU2_TR(0x65b5d3);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B65b5d7:{NFSU2_TR(0x65b5d7);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B65b5d9:{NFSU2_TR(0x65b5d9);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B65b5dd:{NFSU2_TR(0x65b5dd);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65b5df:{NFSU2_TR(0x65b5df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B65b5e6:{NFSU2_TR(0x65b5e6);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L65b5f2;}}
}
B65b5e8:L65b5e8:{c.instructions+=3;NFSU2_TR(0x65b5e8);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B65b5ec:{NFSU2_TR(0x65b5ec);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B65b5f0:{NFSU2_TR(0x65b5f0);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B65b5f2:L65b5f2:{c.instructions+=6;NFSU2_TR(0x65b5f2);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B65b5f6:{NFSU2_TR(0x65b5f6);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B65b5fa:{NFSU2_TR(0x65b5fa);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B65b5fe:{NFSU2_TR(0x65b5fe);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
w1(R+512,u8((r2(R+4))<(r2(U+0))));
}
B65b601:{NFSU2_TR(0x65b601);
w4(R+4,u32(r2(R+4)));
}
B65b604:{NFSU2_TR(0x65b604);
if(r1(R+512)){{goto L65b609;}}
}
B65b606:L65b606:{c.instructions+=1;NFSU2_TR(0x65b606);
w4(R+4,u32(r2(R+8)));
}
B65b609:L65b609:{c.instructions+=1;NFSU2_TR(0x65b609);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B65b60d:L65b60d:{c.instructions+=4;NFSU2_TR(0x65b60d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B65b611:{NFSU2_TR(0x65b611);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B65b615:{NFSU2_TR(0x65b615);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65b617:{NFSU2_TR(0x65b617);
if(r1(R+518)){{goto L65b627;}}
}
B65b619:L65b619:{c.instructions+=4;NFSU2_TR(0x65b619);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65b61c:{NFSU2_TR(0x65b61c);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B65b61e:{NFSU2_TR(0x65b61e);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+8)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B65b621:{NFSU2_TR(0x65b621);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65b485u);}goto L65b485;}}
}
B65b627:L65b627:{c.instructions+=6;NFSU2_TR(0x65b627);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65b62a:{NFSU2_TR(0x65b62a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65b62d:{NFSU2_TR(0x65b62d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65b630:{NFSU2_TR(0x65b630);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
}
B65b633:{NFSU2_TR(0x65b633);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+14)));
w4(U+18,u32(u32(r4(R+8))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B65b636:{NFSU2_TR(0x65b636);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65b4b1u);}goto L65b4b1;}}
}
B65b63c:L65b63c:{c.instructions+=2;NFSU2_TR(0x65b63c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65b63f:{NFSU2_TR(0x65b63f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B65b641:L65b641:{c.instructions+=1;NFSU2_TR(0x65b641);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65b644:L65b644:{c.instructions+=5;NFSU2_TR(0x65b644);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65b645:{NFSU2_TR(0x65b645);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65b646:{NFSU2_TR(0x65b646);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65b647:{NFSU2_TR(0x65b647);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B65b648:{NFSU2_TR(0x65b648);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65b64b:L65b64b:{c.instructions+=14;NFSU2_TR(0x65b64b);
__builtin_memmove((R+28),(R+28),4);
}
B65b64d:{NFSU2_TR(0x65b64d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b64e:{NFSU2_TR(0x65b64e);
__builtin_memmove((R+20),(R+16),4);
}
B65b650:{NFSU2_TR(0x65b650);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65b653:{NFSU2_TR(0x65b653);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65b655:{NFSU2_TR(0x65b655);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65b658:{NFSU2_TR(0x65b658);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B65b65a:{NFSU2_TR(0x65b65a);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B65b65e:{NFSU2_TR(0x65b65e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7b5048ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B65b665:{NFSU2_TR(0x65b665);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b666:{NFSU2_TR(0x65b666);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B65b66a:{NFSU2_TR(0x65b66a);
u8 U[18];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7b5048ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B65b671:{NFSU2_TR(0x65b671);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65b672:{NFSU2_TR(0x65b672);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65b67e;}}
}
B65b674:L65b674:{c.instructions+=3;NFSU2_TR(0x65b674);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B65b678:{NFSU2_TR(0x65b678);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B65b67c:{NFSU2_TR(0x65b67c);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65b67e:L65b67e:{c.instructions+=2;NFSU2_TR(0x65b67e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65b67f:{NFSU2_TR(0x65b67f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65b680:L65b680:{c.instructions+=8;NFSU2_TR(0x65b680);
__builtin_memmove((R+0),(R+4),4);
}
B65b682:{NFSU2_TR(0x65b682);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65b684:{NFSU2_TR(0x65b684);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65b687:{NFSU2_TR(0x65b687);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65b68a:{NFSU2_TR(0x65b68a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65b68d:{NFSU2_TR(0x65b68d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65b690:{NFSU2_TR(0x65b690);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65b693:{NFSU2_TR(0x65b693);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65b694:L65b694:{c.instructions+=8;NFSU2_TR(0x65b694);
__builtin_memmove((R+0),(R+4),4);
}
B65b696:{NFSU2_TR(0x65b696);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65b69a:{NFSU2_TR(0x65b69a);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65b69c:{NFSU2_TR(0x65b69c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65b69f:{NFSU2_TR(0x65b69f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65b6a2:{NFSU2_TR(0x65b6a2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B65b6a4:{NFSU2_TR(0x65b6a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65b6a7:{NFSU2_TR(0x65b6a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65b6a8:L65b6a8:{c.instructions+=6;NFSU2_TR(0x65b6a8);
__builtin_memmove((R+28),(R+28),4);
}
B65b6aa:{NFSU2_TR(0x65b6aa);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b6ab:{NFSU2_TR(0x65b6ab);
__builtin_memmove((R+20),(R+16),4);
}
B65b6ad:{NFSU2_TR(0x65b6ad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b6ae:{NFSU2_TR(0x65b6ae);
__builtin_memmove((R+24),(R+4),4);
}
B65b6b0:{NFSU2_TR(0x65b6b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65b6b5ull));
TAIL_STATIC(0x663e90u,663);
}
B65b6b5:L65b6b5:{c.instructions+=2;NFSU2_TR(0x65b6b5);
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
B65b6b9:{NFSU2_TR(0x65b6b9);
if(r1(R+518)){{goto L65b6c2;}}
}
B65b6bb:L65b6bb:{c.instructions+=2;NFSU2_TR(0x65b6bb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b6bc:{NFSU2_TR(0x65b6bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65b6c1ull));
TAIL_STATIC(0x575630u,575);
}
B65b6c1:L65b6c1:{c.instructions+=1;NFSU2_TR(0x65b6c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65b6c2:L65b6c2:{c.instructions+=4;NFSU2_TR(0x65b6c2);
__builtin_memmove((R+0),(R+24),4);
}
B65b6c4:{NFSU2_TR(0x65b6c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65b6c5:{NFSU2_TR(0x65b6c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65b6c6:{NFSU2_TR(0x65b6c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65b6c9:L65b6c9:{c.instructions+=24;NFSU2_TR(0x65b6c9);
__builtin_memmove((R+28),(R+28),4);
}
B65b6cb:{NFSU2_TR(0x65b6cb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b6cc:{NFSU2_TR(0x65b6cc);
__builtin_memmove((R+20),(R+16),4);
}
B65b6ce:{NFSU2_TR(0x65b6ce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b6cf:{NFSU2_TR(0x65b6cf);
__builtin_memmove((R+0),(R+4),4);
}
B65b6d1:{NFSU2_TR(0x65b6d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xffffffe0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65b6d5:{NFSU2_TR(0x65b6d5);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B65b6d7:{NFSU2_TR(0x65b6d7);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(u16(0xffffull))));
s2(u32(r4(U+0)),r2(U+4));
}
B65b6dd:{NFSU2_TR(0x65b6dd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b6de:{NFSU2_TR(0x65b6de);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b6df:{NFSU2_TR(0x65b6df);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b6e0:{NFSU2_TR(0x65b6e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B65b6e2:{NFSU2_TR(0x65b6e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65b6e5:{NFSU2_TR(0x65b6e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65b6e8:{NFSU2_TR(0x65b6e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65b6eb:{NFSU2_TR(0x65b6eb);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B65b6ef:{NFSU2_TR(0x65b6ef);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x36ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B65b6f3:{NFSU2_TR(0x65b6f3);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B65b6f7:{NFSU2_TR(0x65b6f7);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B65b6fb:{NFSU2_TR(0x65b6fb);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3aull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B65b6ff:{NFSU2_TR(0x65b6ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((R+24),(U+0),4);
}
B65b702:{NFSU2_TR(0x65b702);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((R+28),(U+0),4);
}
B65b705:{NFSU2_TR(0x65b705);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((R+8),(U+0),4);
}
B65b708:{NFSU2_TR(0x65b708);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B65b70f:L65b70f:{c.instructions+=2;NFSU2_TR(0x65b70f);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w2(U+0,u16(u32(r2(U+0))|u32(u16(0xffffull))));
s2(u32(r4(R+8)),r2(U+0));
}
B65b714:{NFSU2_TR(0x65b714);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B65b716:L65b716:{c.instructions+=7;NFSU2_TR(0x65b716);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B65b719:{NFSU2_TR(0x65b719);
u8 U[2];
__builtin_memmove((U+0),(R+4),2);
s2(u32(r4(R+28)),r2(U+0));
}
B65b71c:{NFSU2_TR(0x65b71c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B65b71d:{NFSU2_TR(0x65b71d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B65b71e:{NFSU2_TR(0x65b71e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B65b71f:{NFSU2_TR(0x65b71f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B65b722:{NFSU2_TR(0x65b722);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65b716u);}goto L65b716;}}
}
B65b724:L65b724:{c.instructions+=5;NFSU2_TR(0x65b724);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B65b725:{NFSU2_TR(0x65b725);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B65b726:{NFSU2_TR(0x65b726);
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B65b729:{NFSU2_TR(0x65b729);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
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
B65b72c:{NFSU2_TR(0x65b72c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65b70fu);}goto L65b70f;}}
}
B65b72e:L65b72e:{c.instructions+=5;NFSU2_TR(0x65b72e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65b72f:{NFSU2_TR(0x65b72f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65b730:{NFSU2_TR(0x65b730);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65b731:{NFSU2_TR(0x65b731);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B65b732:{NFSU2_TR(0x65b732);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65b733:L65b733:{c.instructions+=16;NFSU2_TR(0x65b733);
__builtin_memmove((R+28),(R+28),4);
}
B65b735:{NFSU2_TR(0x65b735);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b736:{NFSU2_TR(0x65b736);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b737:{NFSU2_TR(0x65b737);
__builtin_memmove((R+24),(R+4),4);
}
B65b739:{NFSU2_TR(0x65b739);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65b73c:{NFSU2_TR(0x65b73c);
__builtin_memmove((R+4),(R+0),4);
}
B65b73e:{NFSU2_TR(0x65b73e);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B65b740:{NFSU2_TR(0x65b740);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
}
B65b743:{NFSU2_TR(0x65b743);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B65b746:{NFSU2_TR(0x65b746);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B65b74a:{NFSU2_TR(0x65b74a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65b74d:{NFSU2_TR(0x65b74d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B65b750:{NFSU2_TR(0x65b750);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B65b752:{NFSU2_TR(0x65b752);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
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
B65b755:{NFSU2_TR(0x65b755);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65b758:{NFSU2_TR(0x65b758);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L65b788;}}
}
B65b75a:L65b75a:{c.instructions+=3;NFSU2_TR(0x65b75a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b75b:{NFSU2_TR(0x65b75b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b75c:{NFSU2_TR(0x65b75c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65b761ull));
TAIL_STATIC(0x575620u,575);
}
B65b761:L65b761:{c.instructions+=4;NFSU2_TR(0x65b761);
__builtin_memmove((R+28),(R+0),4);
}
B65b763:{NFSU2_TR(0x65b763);
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
B65b765:{NFSU2_TR(0x65b765);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65b766:{NFSU2_TR(0x65b766);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65b76f;}}
}
B65b768:L65b768:{c.instructions+=2;NFSU2_TR(0x65b768);
w4(R+12,u32(0x8007000eull));
}
B65b76d:{NFSU2_TR(0x65b76d);
{goto L65b787;}
}
B65b76f:L65b76f:{c.instructions+=3;NFSU2_TR(0x65b76f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65b771:{NFSU2_TR(0x65b771);
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
B65b773:{NFSU2_TR(0x65b773);
if(r1(R+518)){{goto L65b77f;}}
}
B65b775:L65b775:{c.instructions+=2;NFSU2_TR(0x65b775);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b776:{NFSU2_TR(0x65b776);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65b77bull));
TAIL_STATIC(0x575630u,575);
}
B65b77b:L65b77b:{c.instructions+=2;NFSU2_TR(0x65b77b);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+24)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B65b77e:{NFSU2_TR(0x65b77e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65b77f:L65b77f:{c.instructions+=3;NFSU2_TR(0x65b77f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65b782:{NFSU2_TR(0x65b782);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B65b784:{NFSU2_TR(0x65b784);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65b787:L65b787:{c.instructions+=1;NFSU2_TR(0x65b787);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65b788:L65b788:{c.instructions+=4;NFSU2_TR(0x65b788);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65b789:{NFSU2_TR(0x65b789);
__builtin_memmove((R+0),(R+12),4);
}
B65b78b:{NFSU2_TR(0x65b78b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65b78c:{NFSU2_TR(0x65b78c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65b78d:L65b78d:{c.instructions+=11;NFSU2_TR(0x65b78d);
__builtin_memmove((R+0),(R+4),4);
}
B65b78f:{NFSU2_TR(0x65b78f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B65b791:{NFSU2_TR(0x65b791);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65b794:{NFSU2_TR(0x65b794);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65b797:{NFSU2_TR(0x65b797);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65b79a:{NFSU2_TR(0x65b79a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65b79d:{NFSU2_TR(0x65b79d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B65b7a0:{NFSU2_TR(0x65b7a0);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65b7a3:{NFSU2_TR(0x65b7a3);
u8 U[4];
w4(U+0,u32(0x7fffffffull));
s4(u32(r4(R+0)),r4(U+0));
}
B65b7a9:{NFSU2_TR(0x65b7a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65b7ac:{NFSU2_TR(0x65b7ac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65b7ad:L65b7ad:{c.instructions+=8;NFSU2_TR(0x65b7ad);
__builtin_memmove((R+28),(R+28),4);
}
B65b7af:{NFSU2_TR(0x65b7af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b7b0:{NFSU2_TR(0x65b7b0);
__builtin_memmove((R+24),(R+4),4);
}
B65b7b2:{NFSU2_TR(0x65b7b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65b7b5:{NFSU2_TR(0x65b7b5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b7b6:{NFSU2_TR(0x65b7b6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B65b7b8:{NFSU2_TR(0x65b7b8);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65b7ba:{NFSU2_TR(0x65b7ba);
if(r1(R+518)){{goto L65b7dd;}}
}
B65b7bc:L65b7bc:{c.instructions+=3;NFSU2_TR(0x65b7bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65b7be:{NFSU2_TR(0x65b7be);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B65b7c1:{NFSU2_TR(0x65b7c1);
if(r1(R+518)){{goto L65b7d4;}}
}
B65b7c3:L65b7c3:{c.instructions+=1;NFSU2_TR(0x65b7c3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L65b7dd;}}
}
B65b7c5:L65b7c5:{c.instructions+=2;NFSU2_TR(0x65b7c5);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x9ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x9ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65b7c8:{NFSU2_TR(0x65b7c8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L65b7d4;}}
}
B65b7ca:L65b7ca:{c.instructions+=2;NFSU2_TR(0x65b7ca);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xfull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xfull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65b7cd:{NFSU2_TR(0x65b7cd);
if(r1(R+518)){{goto L65b7d4;}}
}
B65b7cf:L65b7cf:{c.instructions+=2;NFSU2_TR(0x65b7cf);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x10ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65b7d2:{NFSU2_TR(0x65b7d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65b7dd;}}
}
B65b7d4:L65b7d4:{c.instructions+=3;NFSU2_TR(0x65b7d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65b7d6:{NFSU2_TR(0x65b7d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b7d7:{NFSU2_TR(0x65b7d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65b7daull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65b7da:L65b7da:{c.instructions+=1;NFSU2_TR(0x65b7da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65b7dd:L65b7dd:{c.instructions+=3;NFSU2_TR(0x65b7dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65b7e0:{NFSU2_TR(0x65b7e0);
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
B65b7e2:{NFSU2_TR(0x65b7e2);
if(r1(R+518)){{goto L65b7ed;}}
}
B65b7e4:L65b7e4:{c.instructions+=3;NFSU2_TR(0x65b7e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65b7e6:{NFSU2_TR(0x65b7e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b7e7:{NFSU2_TR(0x65b7e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65b7eaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65b7ea:L65b7ea:{c.instructions+=1;NFSU2_TR(0x65b7ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65b7ed:L65b7ed:{c.instructions+=3;NFSU2_TR(0x65b7ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65b7ee:{NFSU2_TR(0x65b7ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65b7ef:{NFSU2_TR(0x65b7ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65b7f0:L65b7f0:{c.instructions+=8;NFSU2_TR(0x65b7f0);
__builtin_memmove((R+28),(R+28),4);
}
B65b7f2:{NFSU2_TR(0x65b7f2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b7f3:{NFSU2_TR(0x65b7f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b7f4:{NFSU2_TR(0x65b7f4);
__builtin_memmove((R+24),(R+4),4);
}
B65b7f6:{NFSU2_TR(0x65b7f6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B65b7f8:{NFSU2_TR(0x65b7f8);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65b7fe:{NFSU2_TR(0x65b7fe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b7ff:{NFSU2_TR(0x65b7ff);
if(r1(R+518)){{goto L65b85e;}}
}
B65b801:L65b801:{c.instructions+=2;NFSU2_TR(0x65b801);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65b807:{NFSU2_TR(0x65b807);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65b84a;}}
}
B65b809:L65b809:{c.instructions+=9;NFSU2_TR(0x65b809);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65b80f:{NFSU2_TR(0x65b80f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65b815:{NFSU2_TR(0x65b815);
__builtin_memmove((R+4),(R+0),4);
}
B65b817:{NFSU2_TR(0x65b817);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B65b81a:{NFSU2_TR(0x65b81a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B65b81d:{NFSU2_TR(0x65b81d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B65b81f:{NFSU2_TR(0x65b81f);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65b821:{NFSU2_TR(0x65b821);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65b827:{NFSU2_TR(0x65b827);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65b841;}}
}
B65b829:L65b829:{c.instructions+=3;NFSU2_TR(0x65b829);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65b82f:{NFSU2_TR(0x65b82f);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B65b832:{NFSU2_TR(0x65b832);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65b837ull));
TAIL_STATIC(0x575630u,575);
}
B65b837:L65b837:{c.instructions+=4;NFSU2_TR(0x65b837);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B65b838:{NFSU2_TR(0x65b838);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B65b83e:{NFSU2_TR(0x65b83e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65b83f:{NFSU2_TR(0x65b83f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65b829u);}goto L65b829;}}
}
B65b841:L65b841:{c.instructions+=3;NFSU2_TR(0x65b841);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B65b842:{NFSU2_TR(0x65b842);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B65b848:{NFSU2_TR(0x65b848);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65b809u);}goto L65b809;}}
}
B65b84a:L65b84a:{c.instructions+=2;NFSU2_TR(0x65b84a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65b850:{NFSU2_TR(0x65b850);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65b855ull));
TAIL_STATIC(0x575630u,575);
}
B65b855:L65b855:{c.instructions+=3;NFSU2_TR(0x65b855);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B65b857:{NFSU2_TR(0x65b857);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65b858:{NFSU2_TR(0x65b858);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65b85e:L65b85e:{c.instructions+=2;NFSU2_TR(0x65b85e);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
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
B65b864:{NFSU2_TR(0x65b864);
if(r1(R+518)){{goto L65b8c2;}}
}
B65b866:L65b866:{c.instructions+=2;NFSU2_TR(0x65b866);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65b86c:{NFSU2_TR(0x65b86c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65b8af;}}
}
B65b86e:L65b86e:{c.instructions+=9;NFSU2_TR(0x65b86e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65b874:{NFSU2_TR(0x65b874);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65b87a:{NFSU2_TR(0x65b87a);
__builtin_memmove((R+4),(R+0),4);
}
B65b87c:{NFSU2_TR(0x65b87c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B65b87f:{NFSU2_TR(0x65b87f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B65b882:{NFSU2_TR(0x65b882);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B65b884:{NFSU2_TR(0x65b884);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65b886:{NFSU2_TR(0x65b886);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65b88c:{NFSU2_TR(0x65b88c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65b8a6;}}
}
B65b88e:L65b88e:{c.instructions+=3;NFSU2_TR(0x65b88e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65b894:{NFSU2_TR(0x65b894);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B65b897:{NFSU2_TR(0x65b897);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65b89cull));
TAIL_STATIC(0x575630u,575);
}
B65b89c:L65b89c:{c.instructions+=4;NFSU2_TR(0x65b89c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B65b89d:{NFSU2_TR(0x65b89d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B65b8a3:{NFSU2_TR(0x65b8a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65b8a4:{NFSU2_TR(0x65b8a4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65b88eu);}goto L65b88e;}}
}
B65b8a6:L65b8a6:{c.instructions+=3;NFSU2_TR(0x65b8a6);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B65b8a7:{NFSU2_TR(0x65b8a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B65b8ad:{NFSU2_TR(0x65b8ad);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65b86eu);}goto L65b86e;}}
}
B65b8af:L65b8af:{c.instructions+=2;NFSU2_TR(0x65b8af);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65b8b5:{NFSU2_TR(0x65b8b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65b8baull));
TAIL_STATIC(0x575630u,575);
}
B65b8ba:L65b8ba:{c.instructions+=2;NFSU2_TR(0x65b8ba);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
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
B65b8c1:{NFSU2_TR(0x65b8c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65b8c2:L65b8c2:{c.instructions+=4;NFSU2_TR(0x65b8c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65b8c3:{NFSU2_TR(0x65b8c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65b8c4:{NFSU2_TR(0x65b8c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65b8c5:{NFSU2_TR(0x65b8c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65b8c6:L65b8c6:{c.instructions+=8;NFSU2_TR(0x65b8c6);
__builtin_memmove((R+28),(R+28),4);
}
B65b8c8:{NFSU2_TR(0x65b8c8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b8c9:{NFSU2_TR(0x65b8c9);
__builtin_memmove((R+20),(R+16),4);
}
B65b8cb:{NFSU2_TR(0x65b8cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65b8ce:{NFSU2_TR(0x65b8ce);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
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
B65b8d1:{NFSU2_TR(0x65b8d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65b8d4:{NFSU2_TR(0x65b8d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65b8d5:{NFSU2_TR(0x65b8d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65b8d8:L65b8d8:{c.instructions+=8;NFSU2_TR(0x65b8d8);
__builtin_memmove((R+28),(R+28),4);
}
B65b8da:{NFSU2_TR(0x65b8da);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b8db:{NFSU2_TR(0x65b8db);
__builtin_memmove((R+20),(R+16),4);
}
B65b8dd:{NFSU2_TR(0x65b8dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65b8e0:{NFSU2_TR(0x65b8e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b8e1:{NFSU2_TR(0x65b8e1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B65b8e3:{NFSU2_TR(0x65b8e3);
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
B65b8e5:{NFSU2_TR(0x65b8e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65b8ee;}}
}
B65b8e7:L65b8e7:{c.instructions+=2;NFSU2_TR(0x65b8e7);
w4(R+12,u32(0x80004005ull));
}
B65b8ec:{NFSU2_TR(0x65b8ec);
{goto L65b926;}
}
B65b8ee:L65b8ee:{c.instructions+=7;NFSU2_TR(0x65b8ee);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b8ef:{NFSU2_TR(0x65b8ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65b8f2:{NFSU2_TR(0x65b8f2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b8f3:{NFSU2_TR(0x65b8f3);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b8f5:{NFSU2_TR(0x65b8f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65b8f6:{NFSU2_TR(0x65b8f6);
w4(R+28,u32(0x7b7400ull));
}
B65b8fb:{NFSU2_TR(0x65b8fb);
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
B65b8fd:L65b8fd:{c.instructions+=1;NFSU2_TR(0x65b8fd);
u8 U[59];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L65b8ff;}}
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
__builtin_memmove((U+36),gp(u32(r4(U+20))),4);
__builtin_memmove((U+47),(U+36),4);
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+51),(U+16),4);
w1(R+512,u8((r4(U+51))<(r4(U+47))));
w1(R+523,sborrow<u32>(r4(U+51),r4(U+47)));
w4(U+55,u32(u32(r4(U+51))-u32(r4(U+47))));
w1(R+519,u8(s32(r4(U+55))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+55))==(u32(0x0ull))));
w4(U+41,u32(u32(r4(U+55))&u32(u32(0xffull))));
w1(U+45,u8(__builtin_popcountll(u64(r4(U+41)))));
w1(U+46,u8(u32(r1(U+45))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+46))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65b8fdu);}goto L65b8fd;}}
}
B65b8ff:L65b8ff:{c.instructions+=1;NFSU2_TR(0x65b8ff);
if(r1(R+518)){{goto L65b912;}}
}
B65b901:L65b901:{c.instructions+=5;NFSU2_TR(0x65b901);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65b904:{NFSU2_TR(0x65b904);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b906:{NFSU2_TR(0x65b906);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65b907:{NFSU2_TR(0x65b907);
w4(R+28,u32(0x7d9904ull));
}
B65b90c:{NFSU2_TR(0x65b90c);
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
B65b90e:L65b90e:{c.instructions+=1;NFSU2_TR(0x65b90e);
u8 U[59];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L65b910;}}
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
__builtin_memmove((U+36),gp(u32(r4(U+20))),4);
__builtin_memmove((U+47),(U+36),4);
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+51),(U+16),4);
w1(R+512,u8((r4(U+51))<(r4(U+47))));
w1(R+523,sborrow<u32>(r4(U+51),r4(U+47)));
w4(U+55,u32(u32(r4(U+51))-u32(r4(U+47))));
w1(R+519,u8(s32(r4(U+55))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+55))==(u32(0x0ull))));
w4(U+41,u32(u32(r4(U+55))&u32(u32(0xffull))));
w1(U+45,u8(__builtin_popcountll(u64(r4(U+41)))));
w1(U+46,u8(u32(r1(U+45))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+46))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65b90eu);}goto L65b90e;}}
}
B65b910:L65b910:{c.instructions+=1;NFSU2_TR(0x65b910);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65b91f;}}
}
B65b912:L65b912:{c.instructions+=5;NFSU2_TR(0x65b912);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65b915:{NFSU2_TR(0x65b915);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B65b917:{NFSU2_TR(0x65b917);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65b919:{NFSU2_TR(0x65b919);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b91a:{NFSU2_TR(0x65b91a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65b91dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65b91d:L65b91d:{c.instructions+=1;NFSU2_TR(0x65b91d);
{goto L65b924;}
}
B65b91f:L65b91f:{c.instructions+=1;NFSU2_TR(0x65b91f);
w4(R+12,u32(0x80004002ull));
}
B65b924:L65b924:{c.instructions+=2;NFSU2_TR(0x65b924);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65b925:{NFSU2_TR(0x65b925);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65b926:L65b926:{c.instructions+=4;NFSU2_TR(0x65b926);
__builtin_memmove((R+0),(R+12),4);
}
B65b928:{NFSU2_TR(0x65b928);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65b929:{NFSU2_TR(0x65b929);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65b92a:{NFSU2_TR(0x65b92a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65b92d:L65b92d:{c.instructions+=7;NFSU2_TR(0x65b92d);
__builtin_memmove((R+28),(R+28),4);
}
B65b92f:{NFSU2_TR(0x65b92f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b930:{NFSU2_TR(0x65b930);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b931:{NFSU2_TR(0x65b931);
__builtin_memmove((R+28),(R+4),4);
}
B65b933:{NFSU2_TR(0x65b933);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x108ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65b939:{NFSU2_TR(0x65b939);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B65b93b:{NFSU2_TR(0x65b93b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65b940ull));
TAIL_STATIC(0x575630u,575);
}
B65b940:L65b940:{c.instructions+=2;NFSU2_TR(0x65b940);
u8 U[4];
w4(U+0,u32(0x400ull));
s4(u32(r4(R+16)),r4(U+0));
}
B65b947:{NFSU2_TR(0x65b947);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65b94cull));
TAIL_STATIC(0x575620u,575);
}
B65b94c:L65b94c:{c.instructions+=4;NFSU2_TR(0x65b94c);
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
B65b94e:{NFSU2_TR(0x65b94e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65b94f:{NFSU2_TR(0x65b94f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B65b951:{NFSU2_TR(0x65b951);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65b95a;}}
}
B65b953:L65b953:{c.instructions+=2;NFSU2_TR(0x65b953);
w4(R+0,u32(0x8007000eull));
}
B65b958:{NFSU2_TR(0x65b958);
{goto L65b96d;}
}
B65b95a:L65b95a:{c.instructions+=3;NFSU2_TR(0x65b95a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65b961:{NFSU2_TR(0x65b961);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x110ull))));
w4(U+4,u32(0x100ull));
s4(u32(r4(U+0)),r4(U+4));
}
B65b96b:{NFSU2_TR(0x65b96b);
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
B65b96d:L65b96d:{c.instructions+=3;NFSU2_TR(0x65b96d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65b96e:{NFSU2_TR(0x65b96e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65b96f:{NFSU2_TR(0x65b96f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65b970:L65b970:{c.instructions+=7;NFSU2_TR(0x65b970);
__builtin_memmove((R+28),(R+28),4);
}
B65b972:{NFSU2_TR(0x65b972);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b973:{NFSU2_TR(0x65b973);
__builtin_memmove((R+20),(R+16),4);
}
B65b975:{NFSU2_TR(0x65b975);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b976:{NFSU2_TR(0x65b976);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b978:{NFSU2_TR(0x65b978);
__builtin_memmove((R+28),(R+4),4);
}
B65b97a:{NFSU2_TR(0x65b97a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65b97full));
TAIL_STATIC(0x671aedu,671);
}
B65b97f:L65b97f:{c.instructions+=2;NFSU2_TR(0x65b97f);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x119ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B65b986:{NFSU2_TR(0x65b986);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65b9c9;}}
}
B65b988:L65b988:{c.instructions+=11;NFSU2_TR(0x65b988);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65b98b:{NFSU2_TR(0x65b98b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b98c:{NFSU2_TR(0x65b98c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B65b98e:{NFSU2_TR(0x65b98e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b98f:{NFSU2_TR(0x65b98f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65b992:{NFSU2_TR(0x65b992);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65b995:{NFSU2_TR(0x65b995);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65b998:{NFSU2_TR(0x65b998);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b999:{NFSU2_TR(0x65b999);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65b99b:{NFSU2_TR(0x65b99b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b99c:{NFSU2_TR(0x65b99c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65b99full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65b99f:L65b99f:{c.instructions+=3;NFSU2_TR(0x65b99f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b9a0:{NFSU2_TR(0x65b9a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65b9a3:{NFSU2_TR(0x65b9a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x16cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65b9a9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65b9a9:L65b9a9:{c.instructions+=3;NFSU2_TR(0x65b9a9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B65b9ab:{NFSU2_TR(0x65b9ab);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b9ad:{NFSU2_TR(0x65b9ad);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65b9ba;}}
}
B65b9af:L65b9af:{c.instructions+=1;NFSU2_TR(0x65b9af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65b9b4ull));
TAIL_STATIC(0x671aedu,671);
}
B65b9b4:L65b9b4:{c.instructions+=2;NFSU2_TR(0x65b9b4);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x3ull))));
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
B65b9b8:{NFSU2_TR(0x65b9b8);
{goto L65b9c7;}
}
B65b9ba:L65b9ba:{c.instructions+=1;NFSU2_TR(0x65b9ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65b9bfull));
TAIL_STATIC(0x671aedu,671);
}
B65b9bf:L65b9bf:{c.instructions+=2;NFSU2_TR(0x65b9bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65b9c3:{NFSU2_TR(0x65b9c3);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffffcull))));
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
B65b9c7:L65b9c7:{c.instructions+=2;NFSU2_TR(0x65b9c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65b9c8:{NFSU2_TR(0x65b9c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65b9c9:L65b9c9:{c.instructions+=3;NFSU2_TR(0x65b9c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65b9ca:{NFSU2_TR(0x65b9ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65b9cb:{NFSU2_TR(0x65b9cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65b9ce:L65b9ce:{c.instructions+=7;NFSU2_TR(0x65b9ce);
__builtin_memmove((R+28),(R+28),4);
}
B65b9d0:{NFSU2_TR(0x65b9d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b9d1:{NFSU2_TR(0x65b9d1);
__builtin_memmove((R+20),(R+16),4);
}
B65b9d3:{NFSU2_TR(0x65b9d3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b9d4:{NFSU2_TR(0x65b9d4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b9d6:{NFSU2_TR(0x65b9d6);
__builtin_memmove((R+28),(R+4),4);
}
B65b9d8:{NFSU2_TR(0x65b9d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65b9ddull));
TAIL_STATIC(0x671aedu,671);
}
B65b9dd:L65b9dd:{c.instructions+=2;NFSU2_TR(0x65b9dd);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x119ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B65b9e4:{NFSU2_TR(0x65b9e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65ba27;}}
}
B65b9e6:L65b9e6:{c.instructions+=11;NFSU2_TR(0x65b9e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65b9e9:{NFSU2_TR(0x65b9e9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b9ea:{NFSU2_TR(0x65b9ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B65b9ec:{NFSU2_TR(0x65b9ec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b9ed:{NFSU2_TR(0x65b9ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65b9f0:{NFSU2_TR(0x65b9f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65b9f3:{NFSU2_TR(0x65b9f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65b9f6:{NFSU2_TR(0x65b9f6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b9f7:{NFSU2_TR(0x65b9f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65b9f9:{NFSU2_TR(0x65b9f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b9fa:{NFSU2_TR(0x65b9fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65b9fdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65b9fd:L65b9fd:{c.instructions+=3;NFSU2_TR(0x65b9fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65b9fe:{NFSU2_TR(0x65b9fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65ba01:{NFSU2_TR(0x65ba01);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65ba07ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65ba07:L65ba07:{c.instructions+=3;NFSU2_TR(0x65ba07);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B65ba09:{NFSU2_TR(0x65ba09);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ba0b:{NFSU2_TR(0x65ba0b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65ba18;}}
}
B65ba0d:L65ba0d:{c.instructions+=1;NFSU2_TR(0x65ba0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65ba12ull));
TAIL_STATIC(0x671aedu,671);
}
B65ba12:L65ba12:{c.instructions+=2;NFSU2_TR(0x65ba12);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x3ull))));
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
B65ba16:{NFSU2_TR(0x65ba16);
{goto L65ba25;}
}
B65ba18:L65ba18:{c.instructions+=1;NFSU2_TR(0x65ba18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65ba1dull));
TAIL_STATIC(0x671aedu,671);
}
B65ba1d:L65ba1d:{c.instructions+=2;NFSU2_TR(0x65ba1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65ba21:{NFSU2_TR(0x65ba21);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffffcull))));
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
B65ba25:L65ba25:{c.instructions+=2;NFSU2_TR(0x65ba25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65ba26:{NFSU2_TR(0x65ba26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65ba27:L65ba27:{c.instructions+=3;NFSU2_TR(0x65ba27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65ba28:{NFSU2_TR(0x65ba28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65ba29:{NFSU2_TR(0x65ba29);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65ba2c:L65ba2c:{c.instructions+=12;NFSU2_TR(0x65ba2c);
__builtin_memmove((R+28),(R+28),4);
}
B65ba2e:{NFSU2_TR(0x65ba2e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ba2f:{NFSU2_TR(0x65ba2f);
__builtin_memmove((R+20),(R+16),4);
}
B65ba31:{NFSU2_TR(0x65ba31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B65ba34:{NFSU2_TR(0x65ba34);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ba35:{NFSU2_TR(0x65ba35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65ba38:{NFSU2_TR(0x65ba38);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ba39:{NFSU2_TR(0x65ba39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65ba3c:{NFSU2_TR(0x65ba3c);
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
B65ba3e:{NFSU2_TR(0x65ba3e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ba3f:{NFSU2_TR(0x65ba3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65ba42:{NFSU2_TR(0x65ba42);
if(r1(R+518)){{goto L65ba61;}}
}
B65ba44:L65ba44:{c.instructions+=3;NFSU2_TR(0x65ba44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65ba46:{NFSU2_TR(0x65ba46);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ba47:{NFSU2_TR(0x65ba47);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65ba4aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65ba4a:L65ba4a:{c.instructions+=4;NFSU2_TR(0x65ba4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65ba4c:{NFSU2_TR(0x65ba4c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B65ba4d:{NFSU2_TR(0x65ba4d);
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
B65ba4f:{NFSU2_TR(0x65ba4f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L65ba61;}}
}
B65ba51:L65ba51:{c.instructions+=3;NFSU2_TR(0x65ba51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65ba53:{NFSU2_TR(0x65ba53);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ba54:{NFSU2_TR(0x65ba54);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65ba57ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65ba57:L65ba57:{c.instructions+=4;NFSU2_TR(0x65ba57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65ba59:{NFSU2_TR(0x65ba59);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B65ba5c:{NFSU2_TR(0x65ba5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65ba5f:{NFSU2_TR(0x65ba5f);
{goto L65ba64;}
}
B65ba61:L65ba61:{c.instructions+=1;NFSU2_TR(0x65ba61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65ba64:L65ba64:{c.instructions+=3;NFSU2_TR(0x65ba64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+12)),r4(U+0));
}
B65ba66:{NFSU2_TR(0x65ba66);
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
B65ba68:{NFSU2_TR(0x65ba68);
if(r1(R+518)){{goto L65ba85;}}
}
B65ba6a:L65ba6a:{c.instructions+=3;NFSU2_TR(0x65ba6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65ba6c:{NFSU2_TR(0x65ba6c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ba6d:{NFSU2_TR(0x65ba6d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65ba70ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65ba70:L65ba70:{c.instructions+=4;NFSU2_TR(0x65ba70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65ba72:{NFSU2_TR(0x65ba72);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B65ba73:{NFSU2_TR(0x65ba73);
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
B65ba75:{NFSU2_TR(0x65ba75);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L65ba85;}}
}
B65ba77:L65ba77:{c.instructions+=3;NFSU2_TR(0x65ba77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65ba79:{NFSU2_TR(0x65ba79);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ba7a:{NFSU2_TR(0x65ba7a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65ba7dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65ba7d:L65ba7d:{c.instructions+=3;NFSU2_TR(0x65ba7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65ba7f:{NFSU2_TR(0x65ba7f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B65ba82:{NFSU2_TR(0x65ba82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65ba85:L65ba85:{c.instructions+=3;NFSU2_TR(0x65ba85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+12)),r4(U+0));
}
B65ba87:{NFSU2_TR(0x65ba87);
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
B65ba89:{NFSU2_TR(0x65ba89);
if(r1(R+518)){{goto L65ba9d;}}
}
B65ba8b:L65ba8b:{c.instructions+=3;NFSU2_TR(0x65ba8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65ba8d:{NFSU2_TR(0x65ba8d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ba8e:{NFSU2_TR(0x65ba8e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65ba91ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65ba91:L65ba91:{c.instructions+=2;NFSU2_TR(0x65ba91);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(R+0))<(r4(U+10))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+10)));
w4(U+14,u32(u32(r4(R+0))-u32(r4(U+10))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B65ba93:{NFSU2_TR(0x65ba93);
if(r1(R+512)){{goto L65ba9d;}}
}
B65ba95:L65ba95:{c.instructions+=3;NFSU2_TR(0x65ba95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ba98:{NFSU2_TR(0x65ba98);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+14)));
w4(U+18,u32(u32(r4(R+28))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B65ba9b:{NFSU2_TR(0x65ba9b);
if(r1(R+512)){{goto L65baa9;}}
}
B65ba9d:L65ba9d:{c.instructions+=2;NFSU2_TR(0x65ba9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B65baa4:{NFSU2_TR(0x65baa4);
{goto L65bc54;}
}
B65baa9:L65baa9:{c.instructions+=2;NFSU2_TR(0x65baa9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65baac:{NFSU2_TR(0x65baac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65bab1ull));
TAIL_STATIC(0x575620u,575);
}
B65bab1:L65bab1:{c.instructions+=4;NFSU2_TR(0x65bab1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65bab3:{NFSU2_TR(0x65bab3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65bab4:{NFSU2_TR(0x65bab4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65bab7:{NFSU2_TR(0x65bab7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65bac5;}}
}
B65bab9:L65bab9:{c.instructions+=2;NFSU2_TR(0x65bab9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B65bac0:{NFSU2_TR(0x65bac0);
{goto L65bc45;}
}
B65bac5:L65bac5:{c.instructions+=2;NFSU2_TR(0x65bac5);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
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
B65bac9:{NFSU2_TR(0x65bac9);
if(r1(R+518)){{goto L65bb1b;}}
}
B65bacb:L65bacb:{c.instructions+=12;NFSU2_TR(0x65bacb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65bace:{NFSU2_TR(0x65bace);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65bad1:{NFSU2_TR(0x65bad1);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B65bad4:{NFSU2_TR(0x65bad4);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B65bad6:{NFSU2_TR(0x65bad6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65bad7:{NFSU2_TR(0x65bad7);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B65bad9:{NFSU2_TR(0x65bad9);
u8 U[6];
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65badb:{NFSU2_TR(0x65badb);
u8 U[48];
w4(U+40,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+44),(R+4),4);
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+40))));
w1(U+24,u8((r4(U+40))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+40))-u32(u32(0x1ull))));
w4(U+29,shr<u32>(r4(U+44),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+40))==(u32(0x1ull))));
w1(U+39,u8(s32(r4(U+44))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+40))!=(u32(0x0ull))));
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
B65bade:{NFSU2_TR(0x65bade);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B65bae1:{NFSU2_TR(0x65bae1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65bae3:{NFSU2_TR(0x65bae3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65bae6:{NFSU2_TR(0x65bae6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65bae9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65bae9:L65bae9:{c.instructions+=4;NFSU2_TR(0x65bae9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65baeb:{NFSU2_TR(0x65baeb);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B65baed:{NFSU2_TR(0x65baed);
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
B65baef:{NFSU2_TR(0x65baef);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L65bb16;}}
}
B65baf1:L65baf1:{c.instructions+=3;NFSU2_TR(0x65baf1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65baf3:{NFSU2_TR(0x65baf3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65baf4:{NFSU2_TR(0x65baf4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65baf7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65baf7:L65baf7:{c.instructions+=6;NFSU2_TR(0x65baf7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65baf9:{NFSU2_TR(0x65baf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65bafc:{NFSU2_TR(0x65bafc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B65baff:{NFSU2_TR(0x65baff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65bb02:{NFSU2_TR(0x65bb02);
__builtin_memmove((R+0),(R+4),4);
}
B65bb04:{NFSU2_TR(0x65bb04);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B65bb07:L65bb07:{c.instructions+=1;NFSU2_TR(0x65bb07);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L65bb09;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65bb07u);}goto L65bb07;}
}
B65bb09:L65bb09:{c.instructions+=2;NFSU2_TR(0x65bb09);
__builtin_memmove((R+4),(R+0),4);
}
B65bb0b:{NFSU2_TR(0x65bb0b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B65bb0e:L65bb0e:{c.instructions+=1;NFSU2_TR(0x65bb0e);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L65bb10;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65bb0eu);}goto L65bb0e;}
}
B65bb10:L65bb10:{c.instructions+=2;NFSU2_TR(0x65bb10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65bb13:{NFSU2_TR(0x65bb13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65bb16:L65bb16:{c.instructions+=2;NFSU2_TR(0x65bb16);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w1(R+512,carry<u32>(r4(U+0),r4(R+28)));
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w1(R+523,scarry<u32>(r4(U+0),r4(R+28)));
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+28))));
s4(u32(r4(R+12)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B65bb18:{NFSU2_TR(0x65bb18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65bb1b:L65bb1b:{c.instructions+=3;NFSU2_TR(0x65bb1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65bb1d:{NFSU2_TR(0x65bb1d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65bb1e:{NFSU2_TR(0x65bb1e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65bb21ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65bb21:L65bb21:{c.instructions+=2;NFSU2_TR(0x65bb21);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(R+0))<(r4(U+4))));
}
B65bb23:{NFSU2_TR(0x65bb23);
if(r1(R+512)){{goto L65bc3e;}}
}
B65bb29:L65bb29:{c.instructions+=8;NFSU2_TR(0x65bb29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65bb2c:{NFSU2_TR(0x65bb2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65bb2f:{NFSU2_TR(0x65bb2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65bb33:{NFSU2_TR(0x65bb33);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B65bb36:{NFSU2_TR(0x65bb36);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B65bb39:{NFSU2_TR(0x65bb39);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65bb3c:{NFSU2_TR(0x65bb3c);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B65bb3f:{NFSU2_TR(0x65bb3f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65bc3e;}}
}
B65bb45:L65bb45:{c.instructions+=3;NFSU2_TR(0x65bb45);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65bb48:{NFSU2_TR(0x65bb48);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B65bb4b:{NFSU2_TR(0x65bb4b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65bc3e;}}
}
B65bb51:L65bb51:{c.instructions+=3;NFSU2_TR(0x65bb51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65bb54:{NFSU2_TR(0x65bb54);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65bb56:{NFSU2_TR(0x65bb56);
if(r1(R+518)){{goto L65bc45;}}
}
B65bb5c:L65bb5c:{c.instructions+=3;NFSU2_TR(0x65bb5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65bb5e:{NFSU2_TR(0x65bb5e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65bb61:{NFSU2_TR(0x65bb61);
if(r1(R+518)){{goto L65bc06;}}
}
B65bb67:L65bb67:{c.instructions+=2;NFSU2_TR(0x65bb67);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xeull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xeull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65bb6a:{NFSU2_TR(0x65bb6a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L65bc3e;}}
}
B65bb70:L65bb70:{c.instructions+=2;NFSU2_TR(0x65bb70);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65bb73:{NFSU2_TR(0x65bb73);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L65bc3e;}}
}
B65bb79:L65bb79:{c.instructions+=3;NFSU2_TR(0x65bb79);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65bb7a:{NFSU2_TR(0x65bb7a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65bb7b:{NFSU2_TR(0x65bb7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65bb80ull));
TAIL_STATIC(0x670f08u,670);
}
B65bb80:L65bb80:{c.instructions+=3;NFSU2_TR(0x65bb80);
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
B65bb82:{NFSU2_TR(0x65bb82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65bb85:{NFSU2_TR(0x65bb85);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65bc45;}}
}
B65bb8b:L65bb8b:{c.instructions+=5;NFSU2_TR(0x65bb8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65bb8d:{NFSU2_TR(0x65bb8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65bb8f:{NFSU2_TR(0x65bb8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65bb92:{NFSU2_TR(0x65bb92);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65bb93:{NFSU2_TR(0x65bb93);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65bb96ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65bb96:L65bb96:{c.instructions+=4;NFSU2_TR(0x65bb96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65bb99:{NFSU2_TR(0x65bb99);
__builtin_memmove((R+28),(R+0),4);
}
B65bb9b:{NFSU2_TR(0x65bb9b);
__builtin_memmove((R+0),(R+4),4);
}
B65bb9d:{NFSU2_TR(0x65bb9d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B65bba0:L65bba0:{c.instructions+=1;NFSU2_TR(0x65bba0);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L65bba2;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65bba0u);}goto L65bba0;}
}
B65bba2:L65bba2:{c.instructions+=2;NFSU2_TR(0x65bba2);
__builtin_memmove((R+4),(R+0),4);
}
B65bba4:{NFSU2_TR(0x65bba4);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B65bba7:L65bba7:{c.instructions+=1;NFSU2_TR(0x65bba7);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L65bba9;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65bba7u);}goto L65bba7;}
}
B65bba9:L65bba9:{c.instructions+=3;NFSU2_TR(0x65bba9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65bbab:{NFSU2_TR(0x65bbab);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65bbae:{NFSU2_TR(0x65bbae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65bbcd;}}
}
B65bbb0:L65bbb0:{c.instructions+=4;NFSU2_TR(0x65bbb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65bbb3:{NFSU2_TR(0x65bbb3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65bbb4:{NFSU2_TR(0x65bbb4);
__builtin_memmove((R+4),(R+24),4);
}
B65bbb6:{NFSU2_TR(0x65bbb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65bbbbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65b970u);}goto L65b970;}
}
B65bbbb:L65bbbb:{c.instructions+=5;NFSU2_TR(0x65bbbb);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B65bbbf:{NFSU2_TR(0x65bbbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65bbc2:{NFSU2_TR(0x65bbc2);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B65bbc5:{NFSU2_TR(0x65bbc5);
u8 U[14];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w2(U+12,u16(u32(r2(U+12))&u32(u16(0x0ull))));
s2(u32(r4(U+8)),r2(U+12));
}
B65bbcb:{NFSU2_TR(0x65bbcb);
{goto L65bbed;}
}
B65bbcd:L65bbcd:{c.instructions+=2;NFSU2_TR(0x65bbcd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65bbd0:{NFSU2_TR(0x65bbd0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65bbed;}}
}
B65bbd2:L65bbd2:{c.instructions+=4;NFSU2_TR(0x65bbd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65bbd5:{NFSU2_TR(0x65bbd5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65bbd6:{NFSU2_TR(0x65bbd6);
__builtin_memmove((R+4),(R+24),4);
}
B65bbd8:{NFSU2_TR(0x65bbd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65bbddull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65b9ceu);}goto L65b9ce;}
}
B65bbdd:L65bbdd:{c.instructions+=4;NFSU2_TR(0x65bbdd);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B65bbe1:{NFSU2_TR(0x65bbe1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65bbe4:{NFSU2_TR(0x65bbe4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B65bbe7:{NFSU2_TR(0x65bbe7);
u8 U[14];
w4(U+0,u32(u32(u32(0x1aull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w2(U+12,u16(u32(r2(U+12))&u32(u16(0x0ull))));
s2(u32(r4(U+8)),r2(U+12));
}
B65bbed:L65bbed:{c.instructions+=7;NFSU2_TR(0x65bbed);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B65bbf1:{NFSU2_TR(0x65bbf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65bbf4:{NFSU2_TR(0x65bbf4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B65bbf7:{NFSU2_TR(0x65bbf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65bbfa:{NFSU2_TR(0x65bbfa);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B65bbfe:{NFSU2_TR(0x65bbfe);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+0)),r4(U+0));
}
B65bc04:{NFSU2_TR(0x65bc04);
{goto L65bc45;}
}
B65bc06:L65bc06:{c.instructions+=3;NFSU2_TR(0x65bc06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65bc09:{NFSU2_TR(0x65bc09);
u8 U[15];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+13),(U+12),1);
w1(U+14,u8(u32(r1(U+13))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+14))==(u8(0x0ull))));
}
B65bc0e:{NFSU2_TR(0x65bc0e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65bc3e;}}
}
B65bc10:L65bc10:{c.instructions+=3;NFSU2_TR(0x65bc10);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65bc11:{NFSU2_TR(0x65bc11);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65bc12:{NFSU2_TR(0x65bc12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65bc17ull));
TAIL_STATIC(0x670f08u,670);
}
B65bc17:L65bc17:{c.instructions+=3;NFSU2_TR(0x65bc17);
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
B65bc19:{NFSU2_TR(0x65bc19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65bc1c:{NFSU2_TR(0x65bc1c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65bc45;}}
}
B65bc1e:L65bc1e:{c.instructions+=5;NFSU2_TR(0x65bc1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B65bc20:{NFSU2_TR(0x65bc20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65bc22:{NFSU2_TR(0x65bc22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65bc25:{NFSU2_TR(0x65bc25);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65bc26:{NFSU2_TR(0x65bc26);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65bc29ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65bc29:L65bc29:{c.instructions+=4;NFSU2_TR(0x65bc29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65bc2c:{NFSU2_TR(0x65bc2c);
__builtin_memmove((R+28),(R+0),4);
}
B65bc2e:{NFSU2_TR(0x65bc2e);
__builtin_memmove((R+0),(R+4),4);
}
B65bc30:{NFSU2_TR(0x65bc30);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B65bc33:L65bc33:{c.instructions+=1;NFSU2_TR(0x65bc33);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L65bc35;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65bc33u);}goto L65bc33;}
}
B65bc35:L65bc35:{c.instructions+=2;NFSU2_TR(0x65bc35);
__builtin_memmove((R+4),(R+0),4);
}
B65bc37:{NFSU2_TR(0x65bc37);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B65bc3a:L65bc3a:{c.instructions+=1;NFSU2_TR(0x65bc3a);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L65bc3c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65bc3au);}goto L65bc3a;}
}
B65bc3c:L65bc3c:{c.instructions+=1;NFSU2_TR(0x65bc3c);
{goto L65bc45;}
}
B65bc3e:L65bc3e:{c.instructions+=1;NFSU2_TR(0x65bc3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B65bc45:L65bc45:{c.instructions+=2;NFSU2_TR(0x65bc45);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B65bc49:{NFSU2_TR(0x65bc49);
if(r1(R+518)){{goto L65bc54;}}
}
B65bc4b:L65bc4b:{c.instructions+=2;NFSU2_TR(0x65bc4b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65bc4e:{NFSU2_TR(0x65bc4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65bc53ull));
TAIL_STATIC(0x575630u,575);
}
B65bc53:L65bc53:{c.instructions+=1;NFSU2_TR(0x65bc53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65bc54:L65bc54:{c.instructions+=6;NFSU2_TR(0x65bc54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65bc57:{NFSU2_TR(0x65bc57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65bc58:{NFSU2_TR(0x65bc58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65bc59:{NFSU2_TR(0x65bc59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65bc5a:{NFSU2_TR(0x65bc5a);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B65bc5b:{NFSU2_TR(0x65bc5b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65bc5e:L65bc5e:{c.instructions+=16;NFSU2_TR(0x65bc5e);
__builtin_memmove((R+28),(R+28),4);
}
B65bc60:{NFSU2_TR(0x65bc60);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65bc61:{NFSU2_TR(0x65bc61);
__builtin_memmove((R+20),(R+16),4);
}
B65bc63:{NFSU2_TR(0x65bc63);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65bc66:{NFSU2_TR(0x65bc66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65bc69:{NFSU2_TR(0x65bc69);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65bc6a:{NFSU2_TR(0x65bc6a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65bc6b:{NFSU2_TR(0x65bc6b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65bc6c:{NFSU2_TR(0x65bc6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65bc6f:{NFSU2_TR(0x65bc6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B65bc72:{NFSU2_TR(0x65bc72);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B65bc76:{NFSU2_TR(0x65bc76);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B65bc78:{NFSU2_TR(0x65bc78);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B65bc7a:{NFSU2_TR(0x65bc7a);
w4(R+12,u32(0x80004005ull));
}
B65bc7f:{NFSU2_TR(0x65bc7f);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65bc81:{NFSU2_TR(0x65bc81);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65bcb3;}}
}
B65bc83:L65bc83:{c.instructions+=5;NFSU2_TR(0x65bc83);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65bc86:{NFSU2_TR(0x65bc86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65bc89:{NFSU2_TR(0x65bc89);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B65bc8c:{NFSU2_TR(0x65bc8c);
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
B65bc8e:{NFSU2_TR(0x65bc8e);
if(r1(R+518)){{goto L65bcb3;}}
}
B65bc90:L65bc90:{c.instructions+=9;NFSU2_TR(0x65bc90);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65bc93:{NFSU2_TR(0x65bc93);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B65bc96:{NFSU2_TR(0x65bc96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B65bc99:{NFSU2_TR(0x65bc99);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B65bc9b:{NFSU2_TR(0x65bc9b);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B65bc9d:{NFSU2_TR(0x65bc9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B65bc9f:{NFSU2_TR(0x65bc9f);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B65bca1:{NFSU2_TR(0x65bca1);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65bca3:{NFSU2_TR(0x65bca3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65bcb3;}}
}
B65bca5:L65bca5:{c.instructions+=4;NFSU2_TR(0x65bca5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65bca8:{NFSU2_TR(0x65bca8);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B65bcaa:{NFSU2_TR(0x65bcaa);
u8 U[18];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+16),(U+12),1);
w1(R+512,u8((r1(U+16))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+16),u8(0x0ull)));
w1(U+17,u8(u32(r1(U+16))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+17))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+17))==(u8(0x0ull))));
w1(U+13,u8(u32(r1(U+17))&u32(u8(0xffull))));
w1(U+14,u8(__builtin_popcountll(u64(r1(U+13)))));
w1(U+15,u8(u32(r1(U+14))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+15))==(u8(0x0ull))));
}
B65bcaf:{NFSU2_TR(0x65bcaf);
if(r1(R+518)){{goto L65bcb3;}}
}
B65bcb1:L65bcb1:{c.instructions+=1;NFSU2_TR(0x65bcb1);
__builtin_memmove((R+0),(R+12),4);
}
B65bcb3:L65bcb3:{c.instructions+=5;NFSU2_TR(0x65bcb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65bcb4:{NFSU2_TR(0x65bcb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65bcb5:{NFSU2_TR(0x65bcb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65bcb6:{NFSU2_TR(0x65bcb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65bcb7:{NFSU2_TR(0x65bcb7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65bcba:L65bcba:{c.instructions+=15;NFSU2_TR(0x65bcba);
__builtin_memmove((R+28),(R+28),4);
}
B65bcbc:{NFSU2_TR(0x65bcbc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65bcbd:{NFSU2_TR(0x65bcbd);
__builtin_memmove((R+20),(R+16),4);
}
B65bcbf:{NFSU2_TR(0x65bcbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65bcc2:{NFSU2_TR(0x65bcc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65bcc5:{NFSU2_TR(0x65bcc5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65bcc6:{NFSU2_TR(0x65bcc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65bcc9:{NFSU2_TR(0x65bcc9);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B65bccb:{NFSU2_TR(0x65bccb);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B65bccf:{NFSU2_TR(0x65bccf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B65bcd1:{NFSU2_TR(0x65bcd1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65bcd2:{NFSU2_TR(0x65bcd2);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B65bcd4:{NFSU2_TR(0x65bcd4);
w4(R+28,u32(0x80004005ull));
}
B65bcd9:{NFSU2_TR(0x65bcd9);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65bcdb:{NFSU2_TR(0x65bcdb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65bd18;}}
}
B65bcdd:L65bcdd:{c.instructions+=4;NFSU2_TR(0x65bcdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65bce0:{NFSU2_TR(0x65bce0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B65bce3:{NFSU2_TR(0x65bce3);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x2ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B65bce6:{NFSU2_TR(0x65bce6);
if(r1(R+512)){{goto L65bd16;}}
}
B65bce8:L65bce8:{c.instructions+=2;NFSU2_TR(0x65bce8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65bce9:{NFSU2_TR(0x65bce9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65bceeull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65bc5eu);}goto L65bc5e;}
}
B65bcee:L65bcee:{c.instructions+=2;NFSU2_TR(0x65bcee);
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
B65bcf0:{NFSU2_TR(0x65bcf0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65bd18;}}
}
B65bcf2:L65bcf2:{c.instructions+=2;NFSU2_TR(0x65bcf2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65bcf5:{NFSU2_TR(0x65bcf5);
{goto L65bd0e;}
}
B65bcf7:L65bcf7:{c.instructions+=3;NFSU2_TR(0x65bcf7);
w4(R+8,u32(r1(R+8)));
}
B65bcfa:{NFSU2_TR(0x65bcfa);
u8 U[6];
w1(R+512,u8((r4(R+8))<(u32(0x2eull))));
w1(R+523,sborrow<u32>(r4(R+8),u32(0x2eull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x2eull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65bcfd:{NFSU2_TR(0x65bcfd);
if(r1(R+518)){{goto L65bd16;}}
}
B65bcff:L65bcff:{c.instructions+=2;NFSU2_TR(0x65bcff);
u8 U[6];
w1(R+512,u8((r4(R+8))<(u32(0x12ull))));
w1(R+523,sborrow<u32>(r4(R+8),u32(0x12ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x12ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65bd02:{NFSU2_TR(0x65bd02);
if(r1(R+518)){{goto L65bd16;}}
}
B65bd04:L65bd04:{c.instructions+=2;NFSU2_TR(0x65bd04);
u8 U[6];
w1(R+512,u8((r4(R+8))<(u32(0x1bull))));
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1bull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1bull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65bd07:{NFSU2_TR(0x65bd07);
if(r1(R+518)){{goto L65bd16;}}
}
B65bd09:L65bd09:{c.instructions+=3;NFSU2_TR(0x65bd09);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B65bd0a:{NFSU2_TR(0x65bd0a);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65bd0b:{NFSU2_TR(0x65bd0b);
if(r1(R+518)){{goto L65bd16;}}
}
B65bd0d:L65bd0d:{c.instructions+=1;NFSU2_TR(0x65bd0d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B65bd0e:L65bd0e:{c.instructions+=3;NFSU2_TR(0x65bd0e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B65bd10:{NFSU2_TR(0x65bd10);
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
B65bd12:{NFSU2_TR(0x65bd12);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65bcf7u);}goto L65bcf7;}}
}
B65bd14:L65bd14:{c.instructions+=1;NFSU2_TR(0x65bd14);
{goto L65bd18;}
}
B65bd16:L65bd16:{c.instructions+=1;NFSU2_TR(0x65bd16);
__builtin_memmove((R+0),(R+28),4);
}
B65bd18:L65bd18:{c.instructions+=4;NFSU2_TR(0x65bd18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65bd19:{NFSU2_TR(0x65bd19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65bd1a:{NFSU2_TR(0x65bd1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65bd1b:{NFSU2_TR(0x65bd1b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65bd1e:L65bd1e:{c.instructions+=30;NFSU2_TR(0x65bd1e);
__builtin_memmove((R+28),(R+28),4);
}
B65bd20:{NFSU2_TR(0x65bd20);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65bd21:{NFSU2_TR(0x65bd21);
__builtin_memmove((R+20),(R+16),4);
}
B65bd23:{NFSU2_TR(0x65bd23);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65bd24:{NFSU2_TR(0x65bd24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65bd27:{NFSU2_TR(0x65bd27);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65bd28:{NFSU2_TR(0x65bd28);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65bd2b:{NFSU2_TR(0x65bd2b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65bd2c:{NFSU2_TR(0x65bd2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65bd2f:{NFSU2_TR(0x65bd2f);
__builtin_memmove((R+0),(R+28),4);
}
B65bd31:{NFSU2_TR(0x65bd31);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B65bd34:{NFSU2_TR(0x65bd34);
__builtin_memmove((R+8),(R+12),4);
}
B65bd36:{NFSU2_TR(0x65bd36);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B65bd39:{NFSU2_TR(0x65bd39);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+12))));
}
B65bd3d:{NFSU2_TR(0x65bd3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65bd40:{NFSU2_TR(0x65bd40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65bd43:{NFSU2_TR(0x65bd43);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B65bd46:{NFSU2_TR(0x65bd46);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B65bd49:{NFSU2_TR(0x65bd49);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65bd4c:{NFSU2_TR(0x65bd4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65bd4f:{NFSU2_TR(0x65bd4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65bd52:{NFSU2_TR(0x65bd52);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+0)),r4(U+0));
}
B65bd58:{NFSU2_TR(0x65bd58);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65bd5b:{NFSU2_TR(0x65bd5b);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B65bd5f:{NFSU2_TR(0x65bd5f);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B65bd63:{NFSU2_TR(0x65bd63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65bd66:{NFSU2_TR(0x65bd66);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65bd6c:{NFSU2_TR(0x65bd6c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B65bd6f:{NFSU2_TR(0x65bd6f);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65bd73:{NFSU2_TR(0x65bd73);
if(r1(R+518)){{goto L65bdbf;}}
}
B65bd75:L65bd75:{c.instructions+=22;NFSU2_TR(0x65bd75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65bd78:{NFSU2_TR(0x65bd78);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B65bd7b:{NFSU2_TR(0x65bd7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65bd7e:{NFSU2_TR(0x65bd7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65bd81:{NFSU2_TR(0x65bd81);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65bd84:{NFSU2_TR(0x65bd84);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65bd8a:{NFSU2_TR(0x65bd8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65bd8d:{NFSU2_TR(0x65bd8d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B65bd90:{NFSU2_TR(0x65bd90);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65bd93:{NFSU2_TR(0x65bd93);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65bd96:{NFSU2_TR(0x65bd96);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65bd9c:{NFSU2_TR(0x65bd9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65bd9f:{NFSU2_TR(0x65bd9f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B65bda2:{NFSU2_TR(0x65bda2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65bda5:{NFSU2_TR(0x65bda5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65bda8:{NFSU2_TR(0x65bda8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65bdab:{NFSU2_TR(0x65bdab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65bdae:{NFSU2_TR(0x65bdae);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65bdb4:{NFSU2_TR(0x65bdb4);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B65bdb7:{NFSU2_TR(0x65bdb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65bdba:{NFSU2_TR(0x65bdba);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65bdbd:{NFSU2_TR(0x65bdbd);
{goto L65bdc2;}
}
B65bdbf:L65bdbf:{c.instructions+=1;NFSU2_TR(0x65bdbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65bdc2:L65bdc2:{c.instructions+=7;NFSU2_TR(0x65bdc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65bdc5:{NFSU2_TR(0x65bdc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65bdcb:{NFSU2_TR(0x65bdcb);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B65bdce:{NFSU2_TR(0x65bdce);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B65bdd0:{NFSU2_TR(0x65bdd0);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B65bdd1:{NFSU2_TR(0x65bdd1);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(r1(R+12))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B65bdd4:{NFSU2_TR(0x65bdd4);
if(r1(R+518)){{goto L65bded;}}
}
B65bdd6:L65bdd6:{c.instructions+=4;NFSU2_TR(0x65bdd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65bdd9:{NFSU2_TR(0x65bdd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65bddc:{NFSU2_TR(0x65bddc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xa000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65bde1:{NFSU2_TR(0x65bde1);
if(r1(R+518)){{goto L65bded;}}
}
B65bde3:L65bde3:{c.instructions+=2;NFSU2_TR(0x65bde3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65bde8:{NFSU2_TR(0x65bde8);
if(r1(R+518)){{goto L65bded;}}
}
B65bdea:L65bdea:{c.instructions+=1;NFSU2_TR(0x65bdea);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65bded:L65bded:{c.instructions+=5;NFSU2_TR(0x65bded);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x119ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B65bdf4:{NFSU2_TR(0x65bdf4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65bdf5:{NFSU2_TR(0x65bdf5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65bdf6:{NFSU2_TR(0x65bdf6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65bdf7:{NFSU2_TR(0x65bdf7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65be07;}}
}
B65bdf9:L65bdf9:{c.instructions+=2;NFSU2_TR(0x65bdf9);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65be00:{NFSU2_TR(0x65be00);
if(r1(R+518)){{goto L65be07;}}
}
B65be02:L65be02:{c.instructions+=1;NFSU2_TR(0x65be02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65be07ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65b7f0u);}goto L65b7f0;}
}
B65be07:L65be07:{c.instructions+=3;NFSU2_TR(0x65be07);
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
B65be09:{NFSU2_TR(0x65be09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65be0a:{NFSU2_TR(0x65be0a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65be0d:L65be0d:{c.instructions+=12;NFSU2_TR(0x65be0d);
__builtin_memmove((R+28),(R+28),4);
}
B65be0f:{NFSU2_TR(0x65be0f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65be10:{NFSU2_TR(0x65be10);
__builtin_memmove((R+20),(R+16),4);
}
B65be12:{NFSU2_TR(0x65be12);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65be13:{NFSU2_TR(0x65be13);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65be14:{NFSU2_TR(0x65be14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65be17:{NFSU2_TR(0x65be17);
__builtin_memmove((R+0),(R+24),4);
}
B65be19:{NFSU2_TR(0x65be19);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B65be1e:{NFSU2_TR(0x65be1e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65be20:{NFSU2_TR(0x65be20);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65be21:{NFSU2_TR(0x65be21);
__builtin_memmove((R+28),(R+4),4);
}
B65be23:{NFSU2_TR(0x65be23);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65be2c;}}
}
B65be25:L65be25:{c.instructions+=2;NFSU2_TR(0x65be25);
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
B65be27:{NFSU2_TR(0x65be27);
{goto L65bf12;}
}
B65be2c:L65be2c:{c.instructions+=4;NFSU2_TR(0x65be2c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65be2d:{NFSU2_TR(0x65be2d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B65be2f:{NFSU2_TR(0x65be2f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65be31:{NFSU2_TR(0x65be31);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L65bed2;}}
}
B65be37:L65be37:{c.instructions+=3;NFSU2_TR(0x65be37);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65be3d:{NFSU2_TR(0x65be3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65be40:{NFSU2_TR(0x65be40);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65beb9;}}
}
B65be42:L65be42:{c.instructions+=2;NFSU2_TR(0x65be42);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65be48:{NFSU2_TR(0x65be48);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2cull))));
}
B65be4b:L65be4b:{c.instructions+=2;NFSU2_TR(0x65be4b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65be4e:{NFSU2_TR(0x65be4e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65be55;}}
}
B65be50:L65be50:{c.instructions+=2;NFSU2_TR(0x65be50);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65be53:{NFSU2_TR(0x65be53);
{goto L65be5b;}
}
B65be55:L65be55:{c.instructions+=2;NFSU2_TR(0x65be55);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65be58:{NFSU2_TR(0x65be58);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65be5b:L65be5b:{c.instructions+=5;NFSU2_TR(0x65be5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B65be5d:{NFSU2_TR(0x65be5d);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B65be61:{NFSU2_TR(0x65be61);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B65be63:{NFSU2_TR(0x65be63);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B65be65:{NFSU2_TR(0x65be65);
if(r1(R+518)){{goto L65bea4;}}
}
B65be67:L65be67:{c.instructions+=3;NFSU2_TR(0x65be67);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B65be6a:{NFSU2_TR(0x65be6a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65be6c:{NFSU2_TR(0x65be6c);
if(r1(R+518)){{goto L65bea4;}}
}
B65be6e:L65be6e:{c.instructions+=2;NFSU2_TR(0x65be6e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65be70:{NFSU2_TR(0x65be70);
if(r1(R+518)){{goto L65bea8;}}
}
B65be72:L65be72:{c.instructions+=4;NFSU2_TR(0x65be72);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+12),(U+0),1);
}
B65be74:{NFSU2_TR(0x65be74);
__builtin_memmove((R+8),(R+12),1);
}
B65be76:{NFSU2_TR(0x65be76);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+12))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+12))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B65be78:{NFSU2_TR(0x65be78);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65be94;}}
}
B65be7a:L65be7a:{c.instructions+=2;NFSU2_TR(0x65be7a);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B65be7c:{NFSU2_TR(0x65be7c);
if(r1(R+518)){{goto L65be90;}}
}
B65be7e:L65be7e:{c.instructions+=4;NFSU2_TR(0x65be7e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B65be81:{NFSU2_TR(0x65be81);
__builtin_memmove((R+8),(R+12),1);
}
B65be83:{NFSU2_TR(0x65be83);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+12))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+12))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B65be86:{NFSU2_TR(0x65be86);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65be94;}}
}
B65be88:L65be88:{c.instructions+=6;NFSU2_TR(0x65be88);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B65be89:{NFSU2_TR(0x65be89);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B65be8a:{NFSU2_TR(0x65be8a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B65be8b:{NFSU2_TR(0x65be8b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B65be8c:{NFSU2_TR(0x65be8c);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B65be8e:{NFSU2_TR(0x65be8e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65be72u);}goto L65be72;}}
}
B65be90:L65be90:{c.instructions+=2;NFSU2_TR(0x65be90);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65be92:{NFSU2_TR(0x65be92);
{goto L65be99;}
}
B65be94:L65be94:{c.instructions+=2;NFSU2_TR(0x65be94);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B65be96:{NFSU2_TR(0x65be96);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B65be99:L65be99:{c.instructions+=3;NFSU2_TR(0x65be99);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B65be9b:{NFSU2_TR(0x65be9b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65be9d:{NFSU2_TR(0x65be9d);
if(r1(R+518)){{goto L65beb9;}}
}
B65be9f:L65be9f:{c.instructions+=2;NFSU2_TR(0x65be9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65bea2:{NFSU2_TR(0x65bea2);
{goto L65bea8;}
}
B65bea4:L65bea4:{c.instructions+=2;NFSU2_TR(0x65bea4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65bea6:{NFSU2_TR(0x65bea6);
if(r1(R+518)){{goto L65beb9;}}
}
B65bea8:L65bea8:{c.instructions+=5;NFSU2_TR(0x65bea8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65beab:{NFSU2_TR(0x65beab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65beae:{NFSU2_TR(0x65beae);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x50ull))));
}
B65beb1:{NFSU2_TR(0x65beb1);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B65beb7:{NFSU2_TR(0x65beb7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65be4bu);}goto L65be4b;}}
}
B65beb9:L65beb9:{c.instructions+=3;NFSU2_TR(0x65beb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65bebc:{NFSU2_TR(0x65bebc);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65bec2:{NFSU2_TR(0x65bec2);
if(r1(R+518)){{goto L65bf0f;}}
}
B65bec4:L65bec4:{c.instructions+=4;NFSU2_TR(0x65bec4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B65bec7:{NFSU2_TR(0x65bec7);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B65beca:{NFSU2_TR(0x65beca);
u8 U[14];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9cull))));
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
B65bed0:{NFSU2_TR(0x65bed0);
{goto L65bf11;}
}
B65bed2:L65bed2:{c.instructions+=4;NFSU2_TR(0x65bed2);
w4(R+24,u32(~u32(r4(R+24))));
}
B65bed4:{NFSU2_TR(0x65bed4);
__builtin_memmove((R+0),(R+24),4);
}
B65bed6:{NFSU2_TR(0x65bed6);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65beda:{NFSU2_TR(0x65beda);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65bf0f;}}
}
B65bedc:L65bedc:{c.instructions+=3;NFSU2_TR(0x65bedc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65bedf:{NFSU2_TR(0x65bedf);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B65bee5:{NFSU2_TR(0x65bee5);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L65bf0f;}}
}
B65bee7:L65bee7:{c.instructions+=2;NFSU2_TR(0x65bee7);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65beea:{NFSU2_TR(0x65beea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65bf0f;}}
}
B65beec:L65beec:{c.instructions+=2;NFSU2_TR(0x65beec);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65beef:{NFSU2_TR(0x65beef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65bf0f;}}
}
B65bef1:L65bef1:{c.instructions+=2;NFSU2_TR(0x65bef1);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65bef5:{NFSU2_TR(0x65bef5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65bf0f;}}
}
B65bef7:L65bef7:{c.instructions+=9;NFSU2_TR(0x65bef7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65befd:{NFSU2_TR(0x65befd);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B65bf00:{NFSU2_TR(0x65bf00);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B65bf03:{NFSU2_TR(0x65bf03);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x4ull))));
}
B65bf05:{NFSU2_TR(0x65bf05);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B65bf07:{NFSU2_TR(0x65bf07);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B65bf09:{NFSU2_TR(0x65bf09);
w4(R+0,u32(~u32(r4(R+0))));
}
B65bf0b:{NFSU2_TR(0x65bf0b);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65bf0d:{NFSU2_TR(0x65bf0d);
{goto L65bf11;}
}
B65bf0f:L65bf0f:{c.instructions+=1;NFSU2_TR(0x65bf0f);
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
B65bf11:L65bf11:{c.instructions+=1;NFSU2_TR(0x65bf11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65bf12:L65bf12:{c.instructions+=4;NFSU2_TR(0x65bf12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65bf13:{NFSU2_TR(0x65bf13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65bf14:{NFSU2_TR(0x65bf14);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B65bf15:{NFSU2_TR(0x65bf15);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65bf18:L65bf18:{c.instructions+=14;NFSU2_TR(0x65bf18);
__builtin_memmove((R+28),(R+28),4);
}
B65bf1a:{NFSU2_TR(0x65bf1a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65bf1b:{NFSU2_TR(0x65bf1b);
__builtin_memmove((R+20),(R+16),4);
}
B65bf1d:{NFSU2_TR(0x65bf1d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65bf1e:{NFSU2_TR(0x65bf1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65bf21:{NFSU2_TR(0x65bf21);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65bf22:{NFSU2_TR(0x65bf22);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65bf23:{NFSU2_TR(0x65bf23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65bf26:{NFSU2_TR(0x65bf26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65bf28:{NFSU2_TR(0x65bf28);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B65bf2a:{NFSU2_TR(0x65bf2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65bf2d:{NFSU2_TR(0x65bf2d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65bf2f:{NFSU2_TR(0x65bf2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65bf32:{NFSU2_TR(0x65bf32);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65bf35;}}
}
B65bf34:L65bf34:{c.instructions+=1;NFSU2_TR(0x65bf34);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B65bf35:L65bf35:{c.instructions+=2;NFSU2_TR(0x65bf35);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B65bf37:{NFSU2_TR(0x65bf37);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x65c02bu,65c);}
}
B65bf3d:L65bf3d:{c.instructions+=2;NFSU2_TR(0x65bf3d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65bf40:{NFSU2_TR(0x65bf40);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L65bffd;}}
}
B65bf46:L65bf46:{c.instructions+=2;NFSU2_TR(0x65bf46);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65bf49:{NFSU2_TR(0x65bf49);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L65bfcf;}}
}
B65bf4f:L65bf4f:{c.instructions+=2;NFSU2_TR(0x65bf4f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65bf52:{NFSU2_TR(0x65bf52);
if(r1(R+518)){{goto L65bfa8;}}
}
B65bf54:L65bf54:{c.instructions+=2;NFSU2_TR(0x65bf54);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65bf57:{NFSU2_TR(0x65bf57);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x65c02bu,65c);}
}
B65bf5d:L65bf5d:{c.instructions+=10;NFSU2_TR(0x65bf5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65bf60:{NFSU2_TR(0x65bf60);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B65bf63:{NFSU2_TR(0x65bf63);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65bf64:{NFSU2_TR(0x65bf64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65bf67:{NFSU2_TR(0x65bf67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65bf6b:{NFSU2_TR(0x65bf6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65bf6d:{NFSU2_TR(0x65bf6d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B65bf6f:{NFSU2_TR(0x65bf6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65bf71:{NFSU2_TR(0x65bf71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65bf74:{NFSU2_TR(0x65bf74);
if(r1(R+518)){{goto L65bf8b;}}
}
B65bf76:L65bf76:{c.instructions+=1;NFSU2_TR(0x65bf76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65bf79:L65bf79:{c.instructions+=4;NFSU2_TR(0x65bf79);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65bf7a:{NFSU2_TR(0x65bf7a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65bf7b:{NFSU2_TR(0x65bf7b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65bf7e:{NFSU2_TR(0x65bf7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65bf83ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65bf18u);}goto L65bf18;}
}
B65bf83:L65bf83:{c.instructions+=3;NFSU2_TR(0x65bf83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B65bf86:{NFSU2_TR(0x65bf86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65bf89:{NFSU2_TR(0x65bf89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65bf79u);}goto L65bf79;}}
}
B65bf8b:L65bf8b:{c.instructions+=11;NFSU2_TR(0x65bf8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65bf8d:{NFSU2_TR(0x65bf8d);
__builtin_memmove((R+4),(R+0),4);
}
B65bf8f:{NFSU2_TR(0x65bf8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B65bf92:{NFSU2_TR(0x65bf92);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B65bf95:{NFSU2_TR(0x65bf95);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B65bf98:{NFSU2_TR(0x65bf98);
u8 U[6];
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65bf9a:{NFSU2_TR(0x65bf9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65bf9d:{NFSU2_TR(0x65bf9d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B65bf9f:{NFSU2_TR(0x65bf9f);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(r4(R+12)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B65bfa2:{NFSU2_TR(0x65bfa2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65bfa3:{NFSU2_TR(0x65bfa3);
TAIL_STATIC(0x65c02du,65c);
}
B65bfa8:L65bfa8:{c.instructions+=3;NFSU2_TR(0x65bfa8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65bfaa:{NFSU2_TR(0x65bfaa);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B65bfad:{NFSU2_TR(0x65bfad);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65bfb8;}}
}
B65bfaf:L65bfaf:{c.instructions+=2;NFSU2_TR(0x65bfaf);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xeull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xeull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65bfb2:{NFSU2_TR(0x65bfb2);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L65bfb8;}}
}
B65bfb4:L65bfb4:{c.instructions+=2;NFSU2_TR(0x65bfb4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65bfb6:{NFSU2_TR(0x65bfb6);
{goto L65bfbb;}
}
B65bfb8:L65bfb8:{c.instructions+=2;NFSU2_TR(0x65bfb8);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65bfba:{NFSU2_TR(0x65bfba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B65bfbb:L65bfbb:{c.instructions+=8;NFSU2_TR(0x65bfbb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x14ull))));
}
B65bfbe:{NFSU2_TR(0x65bfbe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B65bfc0:{NFSU2_TR(0x65bfc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65bfc3:{NFSU2_TR(0x65bfc3);
__builtin_memmove((R+8),(R+12),4);
}
B65bfc5:{NFSU2_TR(0x65bfc5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B65bfc8:{NFSU2_TR(0x65bfc8);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+8))));
s4(u32(r4(R+4)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B65bfca:{NFSU2_TR(0x65bfca);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(r4(R+12)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B65bfcd:{NFSU2_TR(0x65bfcd);
TAIL_STATIC(0x65c02du,65c);
}
B65bfcf:L65bfcf:{c.instructions+=3;NFSU2_TR(0x65bfcf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65bfd1:{NFSU2_TR(0x65bfd1);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B65bfd2:{NFSU2_TR(0x65bfd2);
if(r1(R+518)){{goto L65bfe0;}}
}
B65bfd4:L65bfd4:{c.instructions+=2;NFSU2_TR(0x65bfd4);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B65bfd5:{NFSU2_TR(0x65bfd5);
if(r1(R+518)){{goto L65bfe0;}}
}
B65bfd7:L65bfd7:{c.instructions+=2;NFSU2_TR(0x65bfd7);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B65bfd8:{NFSU2_TR(0x65bfd8);
if(r1(R+518)){{goto L65bfe0;}}
}
B65bfda:L65bfda:{c.instructions+=3;NFSU2_TR(0x65bfda);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65bfdc:{NFSU2_TR(0x65bfdc);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B65bfde:{NFSU2_TR(0x65bfde);
{goto L65bfe5;}
}
B65bfe0:L65bfe0:{c.instructions+=4;NFSU2_TR(0x65bfe0);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65bfe2:{NFSU2_TR(0x65bfe2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B65bfe3:{NFSU2_TR(0x65bfe3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65bfe4:{NFSU2_TR(0x65bfe4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B65bfe5:L65bfe5:{c.instructions+=9;NFSU2_TR(0x65bfe5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B65bfe8:{NFSU2_TR(0x65bfe8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B65bfeb:{NFSU2_TR(0x65bfeb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1cull))));
}
B65bfee:{NFSU2_TR(0x65bfee);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B65bff0:{NFSU2_TR(0x65bff0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65bff3:{NFSU2_TR(0x65bff3);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B65bff6:{NFSU2_TR(0x65bff6);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w1(R+512,carry<u32>(r4(U+0),r4(R+8)));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w1(R+523,scarry<u32>(r4(U+0),r4(R+8)));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+8))));
s4(u32(r4(R+4)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B65bff8:{NFSU2_TR(0x65bff8);
u8 U[45];
w4(U+37,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
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
B65bffb:{NFSU2_TR(0x65bffb);
TAIL_STATIC(0x65c02du,65c);
}
B65bffd:L65bffd:{c.instructions+=2;NFSU2_TR(0x65bffd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65bfff:{NFSU2_TR(0x65bfff);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
TAIL_STATIC(0x65c000u,65c);
}
XIT:NFSU2_TR_EXIT(0x65b,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
