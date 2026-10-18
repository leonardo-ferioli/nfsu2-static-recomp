#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_72d(u8* __restrict R,Cpu& c);
u32 body_72e(u8* __restrict R,Cpu& c);
u32 body_72f(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x72b,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x72b,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_72b(u8* __restrict R,Cpu& c);
u32 page_72b(Cpu& c){return body_72b(c.regs.data(),c);}
__attribute__((noinline)) u32 body_72b(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x72b001:goto L72b001;
case 0x72b003:c.instructions+=2;goto B72b003;
case 0x72b007:c.instructions+=1;goto B72b007;
case 0x72b009:goto L72b009;
case 0x72b00a:c.instructions+=1;goto B72b00a;
case 0x72b00b:goto L72b00b;
case 0x72b00e:c.instructions+=13;goto B72b00e;
case 0x72b011:c.instructions+=12;goto B72b011;
case 0x72b014:c.instructions+=11;goto B72b014;
case 0x72b016:c.instructions+=10;goto B72b016;
case 0x72b017:c.instructions+=9;goto B72b017;
case 0x72b019:c.instructions+=8;goto B72b019;
case 0x72b01b:c.instructions+=7;goto B72b01b;
case 0x72b01e:c.instructions+=6;goto B72b01e;
case 0x72b021:c.instructions+=5;goto B72b021;
case 0x72b024:c.instructions+=4;goto B72b024;
case 0x72b025:c.instructions+=3;goto B72b025;
case 0x72b028:c.instructions+=2;goto B72b028;
case 0x72b02b:c.instructions+=1;goto B72b02b;
case 0x72b02d:goto L72b02d;
case 0x72b02e:c.instructions+=1;goto B72b02e;
case 0x72b02f:goto L72b02f;
case 0x72b030:goto L72b030;
case 0x72b031:c.instructions+=5;goto B72b031;
case 0x72b032:c.instructions+=4;goto B72b032;
case 0x72b036:c.instructions+=3;goto B72b036;
case 0x72b038:c.instructions+=2;goto B72b038;
case 0x72b03b:c.instructions+=1;goto B72b03b;
case 0x72b03d:goto L72b03d;
case 0x72b03e:goto L72b03e;
case 0x72b041:c.instructions+=13;goto B72b041;
case 0x72b044:c.instructions+=12;goto B72b044;
case 0x72b047:c.instructions+=11;goto B72b047;
case 0x72b049:c.instructions+=10;goto B72b049;
case 0x72b04a:c.instructions+=9;goto B72b04a;
case 0x72b04c:c.instructions+=8;goto B72b04c;
case 0x72b04e:c.instructions+=7;goto B72b04e;
case 0x72b051:c.instructions+=6;goto B72b051;
case 0x72b054:c.instructions+=5;goto B72b054;
case 0x72b057:c.instructions+=4;goto B72b057;
case 0x72b058:c.instructions+=3;goto B72b058;
case 0x72b05a:c.instructions+=2;goto B72b05a;
case 0x72b05d:c.instructions+=1;goto B72b05d;
case 0x72b05f:goto L72b05f;
case 0x72b060:goto L72b060;
case 0x72b063:c.instructions+=12;goto B72b063;
case 0x72b066:c.instructions+=11;goto B72b066;
case 0x72b068:c.instructions+=10;goto B72b068;
case 0x72b069:c.instructions+=9;goto B72b069;
case 0x72b06b:c.instructions+=8;goto B72b06b;
case 0x72b06d:c.instructions+=7;goto B72b06d;
case 0x72b06f:c.instructions+=6;goto B72b06f;
case 0x72b071:c.instructions+=5;goto B72b071;
case 0x72b073:c.instructions+=4;goto B72b073;
case 0x72b074:c.instructions+=3;goto B72b074;
case 0x72b077:c.instructions+=2;goto B72b077;
case 0x72b078:c.instructions+=1;goto B72b078;
case 0x72b07b:goto L72b07b;
case 0x72b080:c.instructions+=1;goto B72b080;
case 0x72b082:goto L72b082;
case 0x72b084:c.instructions+=1;goto B72b084;
case 0x72b087:goto L72b087;
case 0x72b08c:goto L72b08c;
case 0x72b090:c.instructions+=9;goto B72b090;
case 0x72b092:c.instructions+=8;goto B72b092;
case 0x72b095:c.instructions+=7;goto B72b095;
case 0x72b097:c.instructions+=6;goto B72b097;
case 0x72b099:c.instructions+=5;goto B72b099;
case 0x72b09c:c.instructions+=4;goto B72b09c;
case 0x72b09f:c.instructions+=3;goto B72b09f;
case 0x72b0a2:c.instructions+=2;goto B72b0a2;
case 0x72b0a5:c.instructions+=1;goto B72b0a5;
case 0x72b0a7:goto L72b0a7;
case 0x72b0aa:c.instructions+=8;goto B72b0aa;
case 0x72b0ab:c.instructions+=7;goto B72b0ab;
case 0x72b0af:c.instructions+=6;goto B72b0af;
case 0x72b0b1:c.instructions+=5;goto B72b0b1;
case 0x72b0b2:c.instructions+=4;goto B72b0b2;
case 0x72b0b4:c.instructions+=3;goto B72b0b4;
case 0x72b0b6:c.instructions+=2;goto B72b0b6;
case 0x72b0b9:c.instructions+=1;goto B72b0b9;
case 0x72b0ba:goto L72b0ba;
case 0x72b0bd:goto L72b0bd;
case 0x72b0be:c.instructions+=2;goto B72b0be;
case 0x72b0c0:c.instructions+=1;goto B72b0c0;
case 0x72b0c5:goto L72b0c5;
case 0x72b0cc:c.instructions+=4;goto B72b0cc;
case 0x72b0d2:c.instructions+=3;goto B72b0d2;
case 0x72b0d4:c.instructions+=2;goto B72b0d4;
case 0x72b0d5:c.instructions+=1;goto B72b0d5;
case 0x72b0d6:goto L72b0d6;
case 0x72b0d7:c.instructions+=5;goto B72b0d7;
case 0x72b0d9:c.instructions+=4;goto B72b0d9;
case 0x72b0df:c.instructions+=3;goto B72b0df;
case 0x72b0e1:c.instructions+=2;goto B72b0e1;
case 0x72b0e7:c.instructions+=1;goto B72b0e7;
case 0x72b0e9:goto L72b0e9;
case 0x72b0ea:c.instructions+=1;goto B72b0ea;
case 0x72b0f0:goto L72b0f0;
case 0x72b0f1:goto L72b0f1;
case 0x72b0f3:c.instructions+=2;goto B72b0f3;
case 0x72b0f4:c.instructions+=1;goto B72b0f4;
case 0x72b0f9:goto L72b0f9;
case 0x72b0fa:c.instructions+=8;goto B72b0fa;
case 0x72b0fb:c.instructions+=7;goto B72b0fb;
case 0x72b0fc:c.instructions+=6;goto B72b0fc;
case 0x72b0fe:c.instructions+=5;goto B72b0fe;
case 0x72b100:c.instructions+=4;goto B72b100;
case 0x72b101:c.instructions+=3;goto B72b101;
case 0x72b105:c.instructions+=2;goto B72b105;
case 0x72b106:c.instructions+=1;goto B72b106;
case 0x72b10c:goto L72b10c;
case 0x72b110:c.instructions+=2;goto B72b110;
case 0x72b112:c.instructions+=1;goto B72b112;
case 0x72b114:goto L72b114;
case 0x72b119:goto L72b119;
case 0x72b11b:c.instructions+=2;goto B72b11b;
case 0x72b11e:c.instructions+=1;goto B72b11e;
case 0x72b120:goto L72b120;
case 0x72b123:c.instructions+=22;goto B72b123;
case 0x72b126:c.instructions+=21;goto B72b126;
case 0x72b129:c.instructions+=20;goto B72b129;
case 0x72b12d:c.instructions+=19;goto B72b12d;
case 0x72b12f:c.instructions+=18;goto B72b12f;
case 0x72b132:c.instructions+=17;goto B72b132;
case 0x72b135:c.instructions+=16;goto B72b135;
case 0x72b137:c.instructions+=15;goto B72b137;
case 0x72b13a:c.instructions+=14;goto B72b13a;
case 0x72b13d:c.instructions+=13;goto B72b13d;
case 0x72b140:c.instructions+=12;goto B72b140;
case 0x72b142:c.instructions+=11;goto B72b142;
case 0x72b145:c.instructions+=10;goto B72b145;
case 0x72b148:c.instructions+=9;goto B72b148;
case 0x72b14b:c.instructions+=8;goto B72b14b;
case 0x72b14d:c.instructions+=7;goto B72b14d;
case 0x72b150:c.instructions+=6;goto B72b150;
case 0x72b154:c.instructions+=5;goto B72b154;
case 0x72b158:c.instructions+=4;goto B72b158;
case 0x72b15c:c.instructions+=3;goto B72b15c;
case 0x72b15d:c.instructions+=2;goto B72b15d;
case 0x72b15f:c.instructions+=1;goto B72b15f;
case 0x72b161:goto L72b161;
case 0x72b163:c.instructions+=2;goto B72b163;
case 0x72b167:c.instructions+=1;goto B72b167;
case 0x72b16d:goto L72b16d;
case 0x72b170:c.instructions+=1;goto B72b170;
case 0x72b174:goto L72b174;
case 0x72b176:c.instructions+=2;goto B72b176;
case 0x72b178:c.instructions+=1;goto B72b178;
case 0x72b17d:goto L72b17d;
case 0x72b17f:c.instructions+=2;goto B72b17f;
case 0x72b183:c.instructions+=1;goto B72b183;
case 0x72b188:goto L72b188;
case 0x72b18b:c.instructions+=17;goto B72b18b;
case 0x72b18e:c.instructions+=16;goto B72b18e;
case 0x72b192:c.instructions+=15;goto B72b192;
case 0x72b195:c.instructions+=14;goto B72b195;
case 0x72b198:c.instructions+=13;goto B72b198;
case 0x72b19a:c.instructions+=12;goto B72b19a;
case 0x72b19d:c.instructions+=11;goto B72b19d;
case 0x72b1a0:c.instructions+=10;goto B72b1a0;
case 0x72b1a3:c.instructions+=9;goto B72b1a3;
case 0x72b1a7:c.instructions+=8;goto B72b1a7;
case 0x72b1aa:c.instructions+=7;goto B72b1aa;
case 0x72b1ad:c.instructions+=6;goto B72b1ad;
case 0x72b1af:c.instructions+=5;goto B72b1af;
case 0x72b1b2:c.instructions+=4;goto B72b1b2;
case 0x72b1b6:c.instructions+=3;goto B72b1b6;
case 0x72b1ba:c.instructions+=2;goto B72b1ba;
case 0x72b1bc:c.instructions+=1;goto B72b1bc;
case 0x72b1c1:goto L72b1c1;
case 0x72b1c5:c.instructions+=2;goto B72b1c5;
case 0x72b1c8:c.instructions+=1;goto B72b1c8;
case 0x72b1ca:goto L72b1ca;
case 0x72b1cd:c.instructions+=26;goto B72b1cd;
case 0x72b1d0:c.instructions+=25;goto B72b1d0;
case 0x72b1d3:c.instructions+=24;goto B72b1d3;
case 0x72b1d6:c.instructions+=23;goto B72b1d6;
case 0x72b1d8:c.instructions+=22;goto B72b1d8;
case 0x72b1db:c.instructions+=21;goto B72b1db;
case 0x72b1de:c.instructions+=20;goto B72b1de;
case 0x72b1e0:c.instructions+=19;goto B72b1e0;
case 0x72b1e3:c.instructions+=18;goto B72b1e3;
case 0x72b1e6:c.instructions+=17;goto B72b1e6;
case 0x72b1e9:c.instructions+=16;goto B72b1e9;
case 0x72b1eb:c.instructions+=15;goto B72b1eb;
case 0x72b1ee:c.instructions+=14;goto B72b1ee;
case 0x72b1f1:c.instructions+=13;goto B72b1f1;
case 0x72b1f3:c.instructions+=12;goto B72b1f3;
case 0x72b1f6:c.instructions+=11;goto B72b1f6;
case 0x72b1f9:c.instructions+=10;goto B72b1f9;
case 0x72b1fc:c.instructions+=9;goto B72b1fc;
case 0x72b1fe:c.instructions+=8;goto B72b1fe;
case 0x72b201:c.instructions+=7;goto B72b201;
case 0x72b204:c.instructions+=6;goto B72b204;
case 0x72b207:c.instructions+=5;goto B72b207;
case 0x72b209:c.instructions+=4;goto B72b209;
case 0x72b20c:c.instructions+=3;goto B72b20c;
case 0x72b20f:c.instructions+=2;goto B72b20f;
case 0x72b211:c.instructions+=1;goto B72b211;
case 0x72b217:goto L72b217;
case 0x72b219:c.instructions+=1;goto B72b219;
case 0x72b21b:goto L72b21b;
case 0x72b21f:c.instructions+=1;goto B72b21f;
case 0x72b221:goto L72b221;
case 0x72b225:c.instructions+=1;goto B72b225;
case 0x72b227:goto L72b227;
case 0x72b22b:goto L72b22b;
case 0x72b22d:c.instructions+=2;goto B72b22d;
case 0x72b230:c.instructions+=1;goto B72b230;
case 0x72b232:goto L72b232;
case 0x72b235:c.instructions+=17;goto B72b235;
case 0x72b238:c.instructions+=16;goto B72b238;
case 0x72b23b:c.instructions+=15;goto B72b23b;
case 0x72b23e:c.instructions+=14;goto B72b23e;
case 0x72b240:c.instructions+=13;goto B72b240;
case 0x72b243:c.instructions+=12;goto B72b243;
case 0x72b246:c.instructions+=11;goto B72b246;
case 0x72b249:c.instructions+=10;goto B72b249;
case 0x72b24b:c.instructions+=9;goto B72b24b;
case 0x72b24e:c.instructions+=8;goto B72b24e;
case 0x72b251:c.instructions+=7;goto B72b251;
case 0x72b254:c.instructions+=6;goto B72b254;
case 0x72b256:c.instructions+=5;goto B72b256;
case 0x72b259:c.instructions+=4;goto B72b259;
case 0x72b25c:c.instructions+=3;goto B72b25c;
case 0x72b25f:c.instructions+=2;goto B72b25f;
case 0x72b261:c.instructions+=1;goto B72b261;
case 0x72b265:goto L72b265;
case 0x72b268:c.instructions+=19;goto B72b268;
case 0x72b26b:c.instructions+=18;goto B72b26b;
case 0x72b26e:c.instructions+=17;goto B72b26e;
case 0x72b270:c.instructions+=16;goto B72b270;
case 0x72b273:c.instructions+=15;goto B72b273;
case 0x72b276:c.instructions+=14;goto B72b276;
case 0x72b279:c.instructions+=13;goto B72b279;
case 0x72b27b:c.instructions+=12;goto B72b27b;
case 0x72b27e:c.instructions+=11;goto B72b27e;
case 0x72b281:c.instructions+=10;goto B72b281;
case 0x72b284:c.instructions+=9;goto B72b284;
case 0x72b286:c.instructions+=8;goto B72b286;
case 0x72b289:c.instructions+=7;goto B72b289;
case 0x72b28d:c.instructions+=6;goto B72b28d;
case 0x72b291:c.instructions+=5;goto B72b291;
case 0x72b295:c.instructions+=4;goto B72b295;
case 0x72b296:c.instructions+=3;goto B72b296;
case 0x72b299:c.instructions+=2;goto B72b299;
case 0x72b29b:c.instructions+=1;goto B72b29b;
case 0x72b2a1:goto L72b2a1;
case 0x72b2a3:goto L72b2a3;
case 0x72b2a4:c.instructions+=4;goto B72b2a4;
case 0x72b2a5:c.instructions+=3;goto B72b2a5;
case 0x72b2a6:c.instructions+=2;goto B72b2a6;
case 0x72b2a7:c.instructions+=1;goto B72b2a7;
case 0x72b2aa:goto L72b2aa;
case 0x72b2af:c.instructions+=2;goto B72b2af;
case 0x72b2b3:c.instructions+=1;goto B72b2b3;
case 0x72b2b5:goto L72b2b5;
case 0x72b2b7:c.instructions+=2;goto B72b2b7;
case 0x72b2ba:c.instructions+=1;goto B72b2ba;
case 0x72b2bb:goto L72b2bb;
case 0x72b2bd:c.instructions+=2;goto B72b2bd;
case 0x72b2bf:c.instructions+=1;goto B72b2bf;
case 0x72b2c4:goto L72b2c4;
case 0x72b2c6:c.instructions+=3;goto B72b2c6;
case 0x72b2c8:c.instructions+=2;goto B72b2c8;
case 0x72b2cc:c.instructions+=1;goto B72b2cc;
case 0x72b2d1:goto L72b2d1;
case 0x72b2d3:c.instructions+=3;goto B72b2d3;
case 0x72b2d5:c.instructions+=2;goto B72b2d5;
case 0x72b2d9:c.instructions+=1;goto B72b2d9;
case 0x72b2de:goto L72b2de;
case 0x72b2e0:c.instructions+=3;goto B72b2e0;
case 0x72b2e2:c.instructions+=2;goto B72b2e2;
case 0x72b2e4:c.instructions+=1;goto B72b2e4;
case 0x72b2e9:goto L72b2e9;
case 0x72b2ea:c.instructions+=3;goto B72b2ea;
case 0x72b2ec:c.instructions+=2;goto B72b2ec;
case 0x72b2f0:c.instructions+=1;goto B72b2f0;
case 0x72b2f5:goto L72b2f5;
case 0x72b2f7:c.instructions+=3;goto B72b2f7;
case 0x72b2fa:c.instructions+=2;goto B72b2fa;
case 0x72b2fc:c.instructions+=1;goto B72b2fc;
case 0x72b2fe:goto L72b2fe;
case 0x72b300:c.instructions+=1;goto B72b300;
case 0x72b305:goto L72b305;
case 0x72b306:c.instructions+=3;goto B72b306;
case 0x72b308:c.instructions+=2;goto B72b308;
case 0x72b30b:c.instructions+=1;goto B72b30b;
case 0x72b310:goto L72b310;
case 0x72b311:c.instructions+=3;goto B72b311;
case 0x72b313:c.instructions+=2;goto B72b313;
case 0x72b316:c.instructions+=1;goto B72b316;
case 0x72b31b:goto L72b31b;
case 0x72b31c:c.instructions+=3;goto B72b31c;
case 0x72b31e:c.instructions+=2;goto B72b31e;
case 0x72b321:c.instructions+=1;goto B72b321;
case 0x72b326:goto L72b326;
case 0x72b328:c.instructions+=3;goto B72b328;
case 0x72b32a:c.instructions+=2;goto B72b32a;
case 0x72b32d:c.instructions+=1;goto B72b32d;
case 0x72b332:goto L72b332;
case 0x72b334:c.instructions+=3;goto B72b334;
case 0x72b336:c.instructions+=2;goto B72b336;
case 0x72b339:c.instructions+=1;goto B72b339;
case 0x72b33e:goto L72b33e;
case 0x72b340:c.instructions+=3;goto B72b340;
case 0x72b342:c.instructions+=2;goto B72b342;
case 0x72b345:c.instructions+=1;goto B72b345;
case 0x72b34a:goto L72b34a;
case 0x72b34d:c.instructions+=3;goto B72b34d;
case 0x72b350:c.instructions+=2;goto B72b350;
case 0x72b352:c.instructions+=1;goto B72b352;
case 0x72b358:goto L72b358;
case 0x72b35a:c.instructions+=1;goto B72b35a;
case 0x72b35c:goto L72b35c;
case 0x72b360:c.instructions+=1;goto B72b360;
case 0x72b362:goto L72b362;
case 0x72b366:c.instructions+=1;goto B72b366;
case 0x72b368:goto L72b368;
case 0x72b36c:c.instructions+=2;goto B72b36c;
case 0x72b370:c.instructions+=1;goto B72b370;
case 0x72b372:goto L72b372;
case 0x72b373:c.instructions+=1;goto B72b373;
case 0x72b378:goto L72b378;
case 0x72b379:c.instructions+=3;goto B72b379;
case 0x72b37b:c.instructions+=2;goto B72b37b;
case 0x72b37e:c.instructions+=1;goto B72b37e;
case 0x72b383:goto L72b383;
case 0x72b384:c.instructions+=3;goto B72b384;
case 0x72b386:c.instructions+=2;goto B72b386;
case 0x72b389:c.instructions+=1;goto B72b389;
case 0x72b38e:goto L72b38e;
case 0x72b390:c.instructions+=3;goto B72b390;
case 0x72b392:c.instructions+=2;goto B72b392;
case 0x72b395:c.instructions+=1;goto B72b395;
case 0x72b39a:goto L72b39a;
case 0x72b39c:c.instructions+=3;goto B72b39c;
case 0x72b39e:c.instructions+=2;goto B72b39e;
case 0x72b3a1:c.instructions+=1;goto B72b3a1;
case 0x72b3a6:goto L72b3a6;
case 0x72b3a9:c.instructions+=1;goto B72b3a9;
case 0x72b3ad:goto L72b3ad;
case 0x72b3ae:c.instructions+=2;goto B72b3ae;
case 0x72b3b0:c.instructions+=1;goto B72b3b0;
case 0x72b3b5:goto L72b3b5;
case 0x72b3b6:c.instructions+=3;goto B72b3b6;
case 0x72b3b8:c.instructions+=2;goto B72b3b8;
case 0x72b3bb:c.instructions+=1;goto B72b3bb;
case 0x72b3c0:goto L72b3c0;
case 0x72b3c4:c.instructions+=5;goto B72b3c4;
case 0x72b3c7:c.instructions+=4;goto B72b3c7;
case 0x72b3cb:c.instructions+=3;goto B72b3cb;
case 0x72b3ce:c.instructions+=2;goto B72b3ce;
case 0x72b3d2:c.instructions+=1;goto B72b3d2;
case 0x72b3d8:goto L72b3d8;
case 0x72b3dd:goto L72b3dd;
case 0x72b3df:c.instructions+=1;goto B72b3df;
case 0x72b3e4:goto L72b3e4;
case 0x72b3e5:c.instructions+=20;goto B72b3e5;
case 0x72b3e7:c.instructions+=19;goto B72b3e7;
case 0x72b3ea:c.instructions+=18;goto B72b3ea;
case 0x72b3ed:c.instructions+=17;goto B72b3ed;
case 0x72b3f0:c.instructions+=16;goto B72b3f0;
case 0x72b3f1:c.instructions+=15;goto B72b3f1;
case 0x72b3f2:c.instructions+=14;goto B72b3f2;
case 0x72b3f5:c.instructions+=13;goto B72b3f5;
case 0x72b3f6:c.instructions+=12;goto B72b3f6;
case 0x72b3f8:c.instructions+=11;goto B72b3f8;
case 0x72b3fb:c.instructions+=10;goto B72b3fb;
case 0x72b3ff:c.instructions+=9;goto B72b3ff;
case 0x72b403:c.instructions+=8;goto B72b403;
case 0x72b40a:c.instructions+=7;goto B72b40a;
case 0x72b411:c.instructions+=6;goto B72b411;
case 0x72b414:c.instructions+=5;goto B72b414;
case 0x72b416:c.instructions+=4;goto B72b416;
case 0x72b419:c.instructions+=3;goto B72b419;
case 0x72b41d:c.instructions+=2;goto B72b41d;
case 0x72b424:c.instructions+=1;goto B72b424;
case 0x72b42a:goto L72b42a;
case 0x72b42e:c.instructions+=1;goto B72b42e;
case 0x72b434:goto L72b434;
case 0x72b438:c.instructions+=1;goto B72b438;
case 0x72b43e:goto L72b43e;
case 0x72b442:goto L72b442;
case 0x72b443:c.instructions+=2;goto B72b443;
case 0x72b445:c.instructions+=1;goto B72b445;
case 0x72b44a:goto L72b44a;
case 0x72b44d:c.instructions+=4;goto B72b44d;
case 0x72b450:c.instructions+=3;goto B72b450;
case 0x72b454:c.instructions+=2;goto B72b454;
case 0x72b458:c.instructions+=1;goto B72b458;
case 0x72b45a:goto L72b45a;
case 0x72b45d:c.instructions+=2;goto B72b45d;
case 0x72b460:c.instructions+=1;goto B72b460;
case 0x72b467:goto L72b467;
case 0x72b46a:c.instructions+=2;goto B72b46a;
case 0x72b46d:c.instructions+=1;goto B72b46d;
case 0x72b474:goto L72b474;
case 0x72b475:c.instructions+=2;goto B72b475;
case 0x72b477:c.instructions+=1;goto B72b477;
case 0x72b47c:goto L72b47c;
case 0x72b47f:c.instructions+=4;goto B72b47f;
case 0x72b483:c.instructions+=3;goto B72b483;
case 0x72b486:c.instructions+=2;goto B72b486;
case 0x72b489:c.instructions+=1;goto B72b489;
case 0x72b48b:goto L72b48b;
case 0x72b48f:c.instructions+=2;goto B72b48f;
case 0x72b492:c.instructions+=1;goto B72b492;
case 0x72b494:goto L72b494;
case 0x72b497:c.instructions+=2;goto B72b497;
case 0x72b49a:c.instructions+=1;goto B72b49a;
case 0x72b4a1:goto L72b4a1;
case 0x72b4a4:c.instructions+=1;goto B72b4a4;
case 0x72b4ab:goto L72b4ab;
case 0x72b4ae:c.instructions+=2;goto B72b4ae;
case 0x72b4b0:c.instructions+=1;goto B72b4b0;
case 0x72b4b5:goto L72b4b5;
case 0x72b4b8:c.instructions+=3;goto B72b4b8;
case 0x72b4bb:c.instructions+=2;goto B72b4bb;
case 0x72b4be:c.instructions+=1;goto B72b4be;
case 0x72b4c0:goto L72b4c0;
case 0x72b4c4:c.instructions+=2;goto B72b4c4;
case 0x72b4c7:c.instructions+=1;goto B72b4c7;
case 0x72b4c9:goto L72b4c9;
case 0x72b4cb:c.instructions+=4;goto B72b4cb;
case 0x72b4cf:c.instructions+=3;goto B72b4cf;
case 0x72b4d3:c.instructions+=2;goto B72b4d3;
case 0x72b4d7:c.instructions+=1;goto B72b4d7;
case 0x72b4dc:goto L72b4dc;
case 0x72b4dd:c.instructions+=2;goto B72b4dd;
case 0x72b4df:c.instructions+=1;goto B72b4df;
case 0x72b4e4:goto L72b4e4;
case 0x72b4e5:c.instructions+=3;goto B72b4e5;
case 0x72b4e7:c.instructions+=2;goto B72b4e7;
case 0x72b4eb:c.instructions+=1;goto B72b4eb;
case 0x72b4f0:goto L72b4f0;
case 0x72b4f1:c.instructions+=3;goto B72b4f1;
case 0x72b4f3:c.instructions+=2;goto B72b4f3;
case 0x72b4f7:c.instructions+=1;goto B72b4f7;
case 0x72b4fc:goto L72b4fc;
case 0x72b4fd:c.instructions+=3;goto B72b4fd;
case 0x72b4ff:c.instructions+=2;goto B72b4ff;
case 0x72b503:c.instructions+=1;goto B72b503;
case 0x72b508:goto L72b508;
case 0x72b509:c.instructions+=3;goto B72b509;
case 0x72b50b:c.instructions+=2;goto B72b50b;
case 0x72b50f:c.instructions+=1;goto B72b50f;
case 0x72b514:goto L72b514;
case 0x72b515:c.instructions+=3;goto B72b515;
case 0x72b517:c.instructions+=2;goto B72b517;
case 0x72b51b:c.instructions+=1;goto B72b51b;
case 0x72b520:goto L72b520;
case 0x72b521:c.instructions+=3;goto B72b521;
case 0x72b523:c.instructions+=2;goto B72b523;
case 0x72b527:c.instructions+=1;goto B72b527;
case 0x72b52c:goto L72b52c;
case 0x72b52d:c.instructions+=3;goto B72b52d;
case 0x72b52f:c.instructions+=2;goto B72b52f;
case 0x72b533:c.instructions+=1;goto B72b533;
case 0x72b538:goto L72b538;
case 0x72b539:c.instructions+=3;goto B72b539;
case 0x72b53b:c.instructions+=2;goto B72b53b;
case 0x72b53f:c.instructions+=1;goto B72b53f;
case 0x72b544:goto L72b544;
case 0x72b545:c.instructions+=3;goto B72b545;
case 0x72b547:c.instructions+=2;goto B72b547;
case 0x72b54b:c.instructions+=1;goto B72b54b;
case 0x72b550:goto L72b550;
case 0x72b551:c.instructions+=3;goto B72b551;
case 0x72b553:c.instructions+=2;goto B72b553;
case 0x72b557:c.instructions+=1;goto B72b557;
case 0x72b55c:goto L72b55c;
case 0x72b55d:c.instructions+=3;goto B72b55d;
case 0x72b55f:c.instructions+=2;goto B72b55f;
case 0x72b563:c.instructions+=1;goto B72b563;
case 0x72b568:goto L72b568;
case 0x72b569:c.instructions+=3;goto B72b569;
case 0x72b56b:c.instructions+=2;goto B72b56b;
case 0x72b56f:c.instructions+=1;goto B72b56f;
case 0x72b574:goto L72b574;
case 0x72b575:c.instructions+=3;goto B72b575;
case 0x72b577:c.instructions+=2;goto B72b577;
case 0x72b57b:c.instructions+=1;goto B72b57b;
case 0x72b580:goto L72b580;
case 0x72b581:c.instructions+=3;goto B72b581;
case 0x72b583:c.instructions+=2;goto B72b583;
case 0x72b587:c.instructions+=1;goto B72b587;
case 0x72b58c:goto L72b58c;
case 0x72b58d:c.instructions+=3;goto B72b58d;
case 0x72b58f:c.instructions+=2;goto B72b58f;
case 0x72b593:c.instructions+=1;goto B72b593;
case 0x72b598:goto L72b598;
case 0x72b599:c.instructions+=3;goto B72b599;
case 0x72b59b:c.instructions+=2;goto B72b59b;
case 0x72b59f:c.instructions+=1;goto B72b59f;
case 0x72b5a4:goto L72b5a4;
case 0x72b5a5:c.instructions+=3;goto B72b5a5;
case 0x72b5a7:c.instructions+=2;goto B72b5a7;
case 0x72b5ab:c.instructions+=1;goto B72b5ab;
case 0x72b5b0:goto L72b5b0;
case 0x72b5b3:c.instructions+=4;goto B72b5b3;
case 0x72b5b4:c.instructions+=3;goto B72b5b4;
case 0x72b5b6:c.instructions+=2;goto B72b5b6;
case 0x72b5ba:c.instructions+=1;goto B72b5ba;
case 0x72b5bf:goto L72b5bf;
case 0x72b5c0:c.instructions+=3;goto B72b5c0;
case 0x72b5c2:c.instructions+=2;goto B72b5c2;
case 0x72b5c6:c.instructions+=1;goto B72b5c6;
case 0x72b5cb:goto L72b5cb;
case 0x72b5cf:c.instructions+=3;goto B72b5cf;
case 0x72b5d0:c.instructions+=2;goto B72b5d0;
case 0x72b5d2:c.instructions+=1;goto B72b5d2;
case 0x72b5d7:goto L72b5d7;
case 0x72b5d8:c.instructions+=3;goto B72b5d8;
case 0x72b5da:c.instructions+=2;goto B72b5da;
case 0x72b5de:c.instructions+=1;goto B72b5de;
case 0x72b5e3:goto L72b5e3;
case 0x72b5e4:c.instructions+=3;goto B72b5e4;
case 0x72b5e6:c.instructions+=2;goto B72b5e6;
case 0x72b5ea:c.instructions+=1;goto B72b5ea;
case 0x72b5ef:goto L72b5ef;
case 0x72b5f0:c.instructions+=3;goto B72b5f0;
case 0x72b5f2:c.instructions+=2;goto B72b5f2;
case 0x72b5f6:c.instructions+=1;goto B72b5f6;
case 0x72b5fb:goto L72b5fb;
case 0x72b5fc:c.instructions+=3;goto B72b5fc;
case 0x72b5fe:c.instructions+=2;goto B72b5fe;
case 0x72b602:c.instructions+=1;goto B72b602;
case 0x72b607:goto L72b607;
case 0x72b608:c.instructions+=3;goto B72b608;
case 0x72b60a:c.instructions+=2;goto B72b60a;
case 0x72b60e:c.instructions+=1;goto B72b60e;
case 0x72b613:goto L72b613;
case 0x72b614:c.instructions+=3;goto B72b614;
case 0x72b616:c.instructions+=2;goto B72b616;
case 0x72b61a:c.instructions+=1;goto B72b61a;
case 0x72b61f:goto L72b61f;
case 0x72b620:c.instructions+=3;goto B72b620;
case 0x72b622:c.instructions+=2;goto B72b622;
case 0x72b626:c.instructions+=1;goto B72b626;
case 0x72b62b:goto L72b62b;
case 0x72b62c:c.instructions+=3;goto B72b62c;
case 0x72b62e:c.instructions+=2;goto B72b62e;
case 0x72b632:c.instructions+=1;goto B72b632;
case 0x72b637:goto L72b637;
case 0x72b638:c.instructions+=3;goto B72b638;
case 0x72b63a:c.instructions+=2;goto B72b63a;
case 0x72b63e:c.instructions+=1;goto B72b63e;
case 0x72b643:goto L72b643;
case 0x72b644:c.instructions+=3;goto B72b644;
case 0x72b646:c.instructions+=2;goto B72b646;
case 0x72b64a:c.instructions+=1;goto B72b64a;
case 0x72b64f:goto L72b64f;
case 0x72b650:c.instructions+=3;goto B72b650;
case 0x72b652:c.instructions+=2;goto B72b652;
case 0x72b656:c.instructions+=1;goto B72b656;
case 0x72b65b:goto L72b65b;
case 0x72b65c:c.instructions+=3;goto B72b65c;
case 0x72b65e:c.instructions+=2;goto B72b65e;
case 0x72b662:c.instructions+=1;goto B72b662;
case 0x72b667:goto L72b667;
case 0x72b668:c.instructions+=3;goto B72b668;
case 0x72b66a:c.instructions+=2;goto B72b66a;
case 0x72b66e:c.instructions+=1;goto B72b66e;
case 0x72b673:goto L72b673;
case 0x72b674:c.instructions+=3;goto B72b674;
case 0x72b676:c.instructions+=2;goto B72b676;
case 0x72b67a:c.instructions+=1;goto B72b67a;
case 0x72b67f:goto L72b67f;
case 0x72b680:c.instructions+=3;goto B72b680;
case 0x72b682:c.instructions+=2;goto B72b682;
case 0x72b686:c.instructions+=1;goto B72b686;
case 0x72b68b:goto L72b68b;
case 0x72b68f:c.instructions+=1;goto B72b68f;
case 0x72b694:goto L72b694;
case 0x72b697:c.instructions+=4;goto B72b697;
case 0x72b69b:c.instructions+=3;goto B72b69b;
case 0x72b69e:c.instructions+=2;goto B72b69e;
case 0x72b6a1:c.instructions+=1;goto B72b6a1;
case 0x72b6a3:goto L72b6a3;
case 0x72b6a7:c.instructions+=1;goto B72b6a7;
case 0x72b6a9:goto L72b6a9;
case 0x72b6aa:c.instructions+=2;goto B72b6aa;
case 0x72b6ac:c.instructions+=1;goto B72b6ac;
case 0x72b6b1:goto L72b6b1;
case 0x72b6b2:c.instructions+=3;goto B72b6b2;
case 0x72b6b4:c.instructions+=2;goto B72b6b4;
case 0x72b6b7:c.instructions+=1;goto B72b6b7;
case 0x72b6bc:goto L72b6bc;
case 0x72b6bd:c.instructions+=3;goto B72b6bd;
case 0x72b6bf:c.instructions+=2;goto B72b6bf;
case 0x72b6c3:c.instructions+=1;goto B72b6c3;
case 0x72b6c8:goto L72b6c8;
case 0x72b6c9:c.instructions+=3;goto B72b6c9;
case 0x72b6cb:c.instructions+=2;goto B72b6cb;
case 0x72b6cf:c.instructions+=1;goto B72b6cf;
case 0x72b6d4:goto L72b6d4;
case 0x72b6d5:c.instructions+=3;goto B72b6d5;
case 0x72b6d7:c.instructions+=2;goto B72b6d7;
case 0x72b6db:c.instructions+=1;goto B72b6db;
case 0x72b6e0:goto L72b6e0;
case 0x72b6e1:c.instructions+=3;goto B72b6e1;
case 0x72b6e3:c.instructions+=2;goto B72b6e3;
case 0x72b6e7:c.instructions+=1;goto B72b6e7;
case 0x72b6ec:goto L72b6ec;
case 0x72b6f0:c.instructions+=1;goto B72b6f0;
case 0x72b6f3:goto L72b6f3;
case 0x72b6f7:c.instructions+=1;goto B72b6f7;
case 0x72b6f9:goto L72b6f9;
case 0x72b6fd:c.instructions+=1;goto B72b6fd;
case 0x72b6ff:goto L72b6ff;
case 0x72b700:c.instructions+=2;goto B72b700;
case 0x72b702:c.instructions+=1;goto B72b702;
case 0x72b707:goto L72b707;
case 0x72b708:c.instructions+=3;goto B72b708;
case 0x72b70a:c.instructions+=2;goto B72b70a;
case 0x72b70e:c.instructions+=1;goto B72b70e;
case 0x72b713:goto L72b713;
case 0x72b714:c.instructions+=3;goto B72b714;
case 0x72b716:c.instructions+=2;goto B72b716;
case 0x72b71a:c.instructions+=1;goto B72b71a;
case 0x72b71f:goto L72b71f;
case 0x72b720:c.instructions+=3;goto B72b720;
case 0x72b722:c.instructions+=2;goto B72b722;
case 0x72b726:c.instructions+=1;goto B72b726;
case 0x72b72b:goto L72b72b;
case 0x72b72c:c.instructions+=3;goto B72b72c;
case 0x72b72e:c.instructions+=2;goto B72b72e;
case 0x72b732:c.instructions+=1;goto B72b732;
case 0x72b737:goto L72b737;
case 0x72b73b:c.instructions+=1;goto B72b73b;
case 0x72b73e:goto L72b73e;
case 0x72b742:c.instructions+=1;goto B72b742;
case 0x72b744:goto L72b744;
case 0x72b748:c.instructions+=1;goto B72b748;
case 0x72b74a:goto L72b74a;
case 0x72b74d:c.instructions+=2;goto B72b74d;
case 0x72b74f:c.instructions+=1;goto B72b74f;
case 0x72b754:goto L72b754;
case 0x72b757:c.instructions+=4;goto B72b757;
case 0x72b758:c.instructions+=3;goto B72b758;
case 0x72b75a:c.instructions+=2;goto B72b75a;
case 0x72b75e:c.instructions+=1;goto B72b75e;
case 0x72b763:goto L72b763;
case 0x72b764:c.instructions+=3;goto B72b764;
case 0x72b766:c.instructions+=2;goto B72b766;
case 0x72b76a:c.instructions+=1;goto B72b76a;
case 0x72b76f:goto L72b76f;
case 0x72b770:c.instructions+=3;goto B72b770;
case 0x72b772:c.instructions+=2;goto B72b772;
case 0x72b776:c.instructions+=1;goto B72b776;
case 0x72b77b:goto L72b77b;
case 0x72b77c:c.instructions+=3;goto B72b77c;
case 0x72b77e:c.instructions+=2;goto B72b77e;
case 0x72b782:c.instructions+=1;goto B72b782;
case 0x72b787:goto L72b787;
case 0x72b78b:c.instructions+=1;goto B72b78b;
case 0x72b78e:goto L72b78e;
case 0x72b792:c.instructions+=1;goto B72b792;
case 0x72b794:goto L72b794;
case 0x72b798:c.instructions+=1;goto B72b798;
case 0x72b79a:goto L72b79a;
case 0x72b79d:c.instructions+=2;goto B72b79d;
case 0x72b79f:c.instructions+=1;goto B72b79f;
case 0x72b7a4:goto L72b7a4;
case 0x72b7a7:c.instructions+=4;goto B72b7a7;
case 0x72b7a8:c.instructions+=3;goto B72b7a8;
case 0x72b7aa:c.instructions+=2;goto B72b7aa;
case 0x72b7ae:c.instructions+=1;goto B72b7ae;
case 0x72b7b3:goto L72b7b3;
case 0x72b7b4:c.instructions+=3;goto B72b7b4;
case 0x72b7b6:c.instructions+=2;goto B72b7b6;
case 0x72b7ba:c.instructions+=1;goto B72b7ba;
case 0x72b7bf:goto L72b7bf;
case 0x72b7c0:c.instructions+=3;goto B72b7c0;
case 0x72b7c2:c.instructions+=2;goto B72b7c2;
case 0x72b7c6:c.instructions+=1;goto B72b7c6;
case 0x72b7cb:goto L72b7cb;
case 0x72b7cc:c.instructions+=3;goto B72b7cc;
case 0x72b7ce:c.instructions+=2;goto B72b7ce;
case 0x72b7d2:c.instructions+=1;goto B72b7d2;
case 0x72b7d7:goto L72b7d7;
case 0x72b7db:goto L72b7db;
case 0x72b7e0:c.instructions+=1;goto B72b7e0;
case 0x72b7e5:goto L72b7e5;
case 0x72b7e6:c.instructions+=4;goto B72b7e6;
case 0x72b7e7:c.instructions+=3;goto B72b7e7;
case 0x72b7e8:c.instructions+=2;goto B72b7e8;
case 0x72b7e9:c.instructions+=1;goto B72b7e9;
case 0x72b7ec:goto L72b7ec;
case 0x72b7ed:c.instructions+=18;goto B72b7ed;
case 0x72b7ef:c.instructions+=17;goto B72b7ef;
case 0x72b7f2:c.instructions+=16;goto B72b7f2;
case 0x72b7f5:c.instructions+=15;goto B72b7f5;
case 0x72b7f6:c.instructions+=14;goto B72b7f6;
case 0x72b7f7:c.instructions+=13;goto B72b7f7;
case 0x72b7fa:c.instructions+=12;goto B72b7fa;
case 0x72b7fd:c.instructions+=11;goto B72b7fd;
case 0x72b7fe:c.instructions+=10;goto B72b7fe;
case 0x72b802:c.instructions+=9;goto B72b802;
case 0x72b805:c.instructions+=8;goto B72b805;
case 0x72b808:c.instructions+=7;goto B72b808;
case 0x72b80c:c.instructions+=6;goto B72b80c;
case 0x72b810:c.instructions+=5;goto B72b810;
case 0x72b812:c.instructions+=4;goto B72b812;
case 0x72b814:c.instructions+=3;goto B72b814;
case 0x72b818:c.instructions+=2;goto B72b818;
case 0x72b81b:c.instructions+=1;goto B72b81b;
case 0x72b81d:goto L72b81d;
case 0x72b820:c.instructions+=2;goto B72b820;
case 0x72b822:c.instructions+=1;goto B72b822;
case 0x72b824:goto L72b824;
case 0x72b82b:c.instructions+=1;goto B72b82b;
case 0x72b82d:goto L72b82d;
case 0x72b82f:c.instructions+=7;goto B72b82f;
case 0x72b831:c.instructions+=6;goto B72b831;
case 0x72b833:c.instructions+=5;goto B72b833;
case 0x72b836:c.instructions+=4;goto B72b836;
case 0x72b837:c.instructions+=3;goto B72b837;
case 0x72b838:c.instructions+=2;goto B72b838;
case 0x72b83b:c.instructions+=1;goto B72b83b;
case 0x72b83d:goto L72b83d;
case 0x72b840:goto L72b840;
case 0x72b843:c.instructions+=1;goto B72b843;
case 0x72b845:goto L72b845;
case 0x72b848:c.instructions+=1;goto B72b848;
case 0x72b84a:goto L72b84a;
case 0x72b84e:c.instructions+=1;goto B72b84e;
case 0x72b854:goto L72b854;
case 0x72b85a:c.instructions+=1;goto B72b85a;
case 0x72b85c:goto L72b85c;
case 0x72b85e:c.instructions+=17;goto B72b85e;
case 0x72b861:c.instructions+=16;goto B72b861;
case 0x72b863:c.instructions+=15;goto B72b863;
case 0x72b865:c.instructions+=14;goto B72b865;
case 0x72b866:c.instructions+=13;goto B72b866;
case 0x72b868:c.instructions+=12;goto B72b868;
case 0x72b86b:c.instructions+=11;goto B72b86b;
case 0x72b86e:c.instructions+=10;goto B72b86e;
case 0x72b870:c.instructions+=9;goto B72b870;
case 0x72b873:c.instructions+=8;goto B72b873;
case 0x72b876:c.instructions+=7;goto B72b876;
case 0x72b879:c.instructions+=6;goto B72b879;
case 0x72b87b:c.instructions+=5;goto B72b87b;
case 0x72b87e:c.instructions+=4;goto B72b87e;
case 0x72b881:c.instructions+=3;goto B72b881;
case 0x72b884:c.instructions+=2;goto B72b884;
case 0x72b886:c.instructions+=1;goto B72b886;
case 0x72b888:goto L72b888;
case 0x72b88e:c.instructions+=1;goto B72b88e;
case 0x72b890:goto L72b890;
case 0x72b896:c.instructions+=14;goto B72b896;
case 0x72b899:c.instructions+=13;goto B72b899;
case 0x72b89b:c.instructions+=12;goto B72b89b;
case 0x72b89d:c.instructions+=11;goto B72b89d;
case 0x72b89e:c.instructions+=10;goto B72b89e;
case 0x72b8a0:c.instructions+=9;goto B72b8a0;
case 0x72b8a3:c.instructions+=8;goto B72b8a3;
case 0x72b8a6:c.instructions+=7;goto B72b8a6;
case 0x72b8a9:c.instructions+=6;goto B72b8a9;
case 0x72b8ab:c.instructions+=5;goto B72b8ab;
case 0x72b8ae:c.instructions+=4;goto B72b8ae;
case 0x72b8b0:c.instructions+=3;goto B72b8b0;
case 0x72b8b3:c.instructions+=2;goto B72b8b3;
case 0x72b8b4:c.instructions+=1;goto B72b8b4;
case 0x72b8b6:goto L72b8b6;
case 0x72b8bc:c.instructions+=1;goto B72b8bc;
case 0x72b8be:goto L72b8be;
case 0x72b8c0:c.instructions+=10;goto B72b8c0;
case 0x72b8c1:c.instructions+=9;goto B72b8c1;
case 0x72b8c3:c.instructions+=8;goto B72b8c3;
case 0x72b8c9:c.instructions+=7;goto B72b8c9;
case 0x72b8cb:c.instructions+=6;goto B72b8cb;
case 0x72b8cd:c.instructions+=5;goto B72b8cd;
case 0x72b8d0:c.instructions+=4;goto B72b8d0;
case 0x72b8d4:c.instructions+=3;goto B72b8d4;
case 0x72b8d7:c.instructions+=2;goto B72b8d7;
case 0x72b8da:c.instructions+=1;goto B72b8da;
case 0x72b8db:goto L72b8db;
case 0x72b8de:goto L72b8de;
case 0x72b8e2:c.instructions+=1;goto B72b8e2;
case 0x72b8e4:goto L72b8e4;
case 0x72b8e8:c.instructions+=1;goto B72b8e8;
case 0x72b8ea:goto L72b8ea;
case 0x72b8ee:c.instructions+=1;goto B72b8ee;
case 0x72b8f0:goto L72b8f0;
case 0x72b8f2:c.instructions+=3;goto B72b8f2;
case 0x72b8f4:c.instructions+=2;goto B72b8f4;
case 0x72b8f9:c.instructions+=1;goto B72b8f9;
case 0x72b8fb:goto L72b8fb;
case 0x72b8fd:c.instructions+=13;goto B72b8fd;
case 0x72b8fe:c.instructions+=12;goto B72b8fe;
case 0x72b900:c.instructions+=11;goto B72b900;
case 0x72b902:c.instructions+=10;goto B72b902;
case 0x72b904:c.instructions+=9;goto B72b904;
case 0x72b905:c.instructions+=8;goto B72b905;
case 0x72b907:c.instructions+=7;goto B72b907;
case 0x72b90a:c.instructions+=6;goto B72b90a;
case 0x72b90c:c.instructions+=5;goto B72b90c;
case 0x72b90e:c.instructions+=4;goto B72b90e;
case 0x72b910:c.instructions+=3;goto B72b910;
case 0x72b913:c.instructions+=2;goto B72b913;
case 0x72b916:c.instructions+=1;goto B72b916;
case 0x72b918:goto L72b918;
case 0x72b91d:c.instructions+=1;goto B72b91d;
case 0x72b91f:goto L72b91f;
case 0x72b922:c.instructions+=10;goto B72b922;
case 0x72b925:c.instructions+=9;goto B72b925;
case 0x72b928:c.instructions+=8;goto B72b928;
case 0x72b92b:c.instructions+=7;goto B72b92b;
case 0x72b92e:c.instructions+=6;goto B72b92e;
case 0x72b931:c.instructions+=5;goto B72b931;
case 0x72b934:c.instructions+=4;goto B72b934;
case 0x72b937:c.instructions+=3;goto B72b937;
case 0x72b93a:c.instructions+=2;goto B72b93a;
case 0x72b93c:c.instructions+=1;goto B72b93c;
case 0x72b93e:goto L72b93e;
case 0x72b943:c.instructions+=1;goto B72b943;
case 0x72b945:goto L72b945;
case 0x72b947:c.instructions+=7;goto B72b947;
case 0x72b948:c.instructions+=6;goto B72b948;
case 0x72b94d:c.instructions+=5;goto B72b94d;
case 0x72b94f:c.instructions+=4;goto B72b94f;
case 0x72b951:c.instructions+=3;goto B72b951;
case 0x72b954:c.instructions+=2;goto B72b954;
case 0x72b956:c.instructions+=1;goto B72b956;
case 0x72b959:goto L72b959;
case 0x72b95c:goto L72b95c;
case 0x72b95f:c.instructions+=2;goto B72b95f;
case 0x72b962:c.instructions+=1;goto B72b962;
case 0x72b963:goto L72b963;
case 0x72b966:c.instructions+=3;goto B72b966;
case 0x72b968:c.instructions+=2;goto B72b968;
case 0x72b96a:c.instructions+=1;goto B72b96a;
case 0x72b96b:goto L72b96b;
case 0x72b96d:goto L72b96d;
case 0x72b96e:c.instructions+=6;goto B72b96e;
case 0x72b971:c.instructions+=5;goto B72b971;
case 0x72b974:c.instructions+=4;goto B72b974;
case 0x72b976:c.instructions+=3;goto B72b976;
case 0x72b978:c.instructions+=2;goto B72b978;
case 0x72b97b:c.instructions+=1;goto B72b97b;
case 0x72b982:goto L72b982;
case 0x72b985:c.instructions+=2;goto B72b985;
case 0x72b988:c.instructions+=1;goto B72b988;
case 0x72b98a:goto L72b98a;
case 0x72b98e:c.instructions+=2;goto B72b98e;
case 0x72b991:c.instructions+=1;goto B72b991;
case 0x72b996:goto L72b996;
case 0x72b999:c.instructions+=7;goto B72b999;
case 0x72b99c:c.instructions+=6;goto B72b99c;
case 0x72b99f:c.instructions+=5;goto B72b99f;
case 0x72b9a2:c.instructions+=4;goto B72b9a2;
case 0x72b9a5:c.instructions+=3;goto B72b9a5;
case 0x72b9a9:c.instructions+=2;goto B72b9a9;
case 0x72b9ac:c.instructions+=1;goto B72b9ac;
case 0x72b9ae:goto L72b9ae;
case 0x72b9af:c.instructions+=2;goto B72b9af;
case 0x72b9b2:c.instructions+=1;goto B72b9b2;
case 0x72b9b4:goto L72b9b4;
case 0x72b9b5:c.instructions+=4;goto B72b9b5;
case 0x72b9b6:c.instructions+=3;goto B72b9b6;
case 0x72b9b7:c.instructions+=2;goto B72b9b7;
case 0x72b9b8:c.instructions+=1;goto B72b9b8;
case 0x72b9bb:goto L72b9bb;
case 0x72b9bc:c.instructions+=19;goto B72b9bc;
case 0x72b9be:c.instructions+=18;goto B72b9be;
case 0x72b9c1:c.instructions+=17;goto B72b9c1;
case 0x72b9c4:c.instructions+=16;goto B72b9c4;
case 0x72b9c5:c.instructions+=15;goto B72b9c5;
case 0x72b9c8:c.instructions+=14;goto B72b9c8;
case 0x72b9cc:c.instructions+=13;goto B72b9cc;
case 0x72b9cd:c.instructions+=12;goto B72b9cd;
case 0x72b9ce:c.instructions+=11;goto B72b9ce;
case 0x72b9d1:c.instructions+=10;goto B72b9d1;
case 0x72b9d4:c.instructions+=9;goto B72b9d4;
case 0x72b9d8:c.instructions+=8;goto B72b9d8;
case 0x72b9da:c.instructions+=7;goto B72b9da;
case 0x72b9dd:c.instructions+=6;goto B72b9dd;
case 0x72b9e4:c.instructions+=5;goto B72b9e4;
case 0x72b9e7:c.instructions+=4;goto B72b9e7;
case 0x72b9e8:c.instructions+=3;goto B72b9e8;
case 0x72b9e9:c.instructions+=2;goto B72b9e9;
case 0x72b9ea:c.instructions+=1;goto B72b9ea;
case 0x72b9ef:goto L72b9ef;
case 0x72b9f3:c.instructions+=1;goto B72b9f3;
case 0x72b9f9:goto L72b9f9;
case 0x72b9fd:c.instructions+=1;goto B72b9fd;
case 0x72ba03:goto L72ba03;
case 0x72ba07:c.instructions+=1;goto B72ba07;
case 0x72ba09:goto L72ba09;
case 0x72ba0b:c.instructions+=2;goto B72ba0b;
case 0x72ba0d:c.instructions+=1;goto B72ba0d;
case 0x72ba0e:goto L72ba0e;
case 0x72ba14:c.instructions+=4;goto B72ba14;
case 0x72ba18:c.instructions+=3;goto B72ba18;
case 0x72ba19:c.instructions+=2;goto B72ba19;
case 0x72ba1b:c.instructions+=1;goto B72ba1b;
case 0x72ba1d:goto L72ba1d;
case 0x72ba20:c.instructions+=1;goto B72ba20;
case 0x72ba27:goto L72ba27;
case 0x72ba29:c.instructions+=2;goto B72ba29;
case 0x72ba2b:c.instructions+=1;goto B72ba2b;
case 0x72ba2c:goto L72ba2c;
case 0x72ba32:c.instructions+=5;goto B72ba32;
case 0x72ba35:c.instructions+=4;goto B72ba35;
case 0x72ba36:c.instructions+=3;goto B72ba36;
case 0x72ba39:c.instructions+=2;goto B72ba39;
case 0x72ba3a:c.instructions+=1;goto B72ba3a;
case 0x72ba3c:goto L72ba3c;
case 0x72ba3d:c.instructions+=3;goto B72ba3d;
case 0x72ba3e:c.instructions+=2;goto B72ba3e;
case 0x72ba41:c.instructions+=1;goto B72ba41;
case 0x72ba43:goto L72ba43;
case 0x72ba45:c.instructions+=2;goto B72ba45;
case 0x72ba48:c.instructions+=1;goto B72ba48;
case 0x72ba49:goto L72ba49;
case 0x72ba4d:c.instructions+=3;goto B72ba4d;
case 0x72ba50:c.instructions+=2;goto B72ba50;
case 0x72ba51:c.instructions+=1;goto B72ba51;
case 0x72ba53:goto L72ba53;
case 0x72ba55:goto L72ba55;
case 0x72ba57:c.instructions+=2;goto B72ba57;
case 0x72ba5a:c.instructions+=1;goto B72ba5a;
case 0x72ba5b:goto L72ba5b;
case 0x72ba5d:c.instructions+=2;goto B72ba5d;
case 0x72ba5f:c.instructions+=1;goto B72ba5f;
case 0x72ba60:goto L72ba60;
case 0x72ba63:c.instructions+=6;goto B72ba63;
case 0x72ba69:c.instructions+=5;goto B72ba69;
case 0x72ba6c:c.instructions+=4;goto B72ba6c;
case 0x72ba6f:c.instructions+=3;goto B72ba6f;
case 0x72ba72:c.instructions+=2;goto B72ba72;
case 0x72ba73:c.instructions+=1;goto B72ba73;
case 0x72ba75:goto L72ba75;
case 0x72ba76:c.instructions+=3;goto B72ba76;
case 0x72ba77:c.instructions+=2;goto B72ba77;
case 0x72ba78:c.instructions+=1;goto B72ba78;
case 0x72ba7a:goto L72ba7a;
case 0x72ba7c:c.instructions+=4;goto B72ba7c;
case 0x72ba80:c.instructions+=3;goto B72ba80;
case 0x72ba84:c.instructions+=2;goto B72ba84;
case 0x72ba88:c.instructions+=1;goto B72ba88;
case 0x72ba8a:goto L72ba8a;
case 0x72ba8c:goto L72ba8c;
case 0x72ba92:c.instructions+=4;goto B72ba92;
case 0x72ba96:c.instructions+=3;goto B72ba96;
case 0x72ba97:c.instructions+=2;goto B72ba97;
case 0x72ba9a:c.instructions+=1;goto B72ba9a;
case 0x72ba9c:goto L72ba9c;
case 0x72baa1:c.instructions+=1;goto B72baa1;
case 0x72baa6:goto L72baa6;
case 0x72baa7:c.instructions+=4;goto B72baa7;
case 0x72baa8:c.instructions+=3;goto B72baa8;
case 0x72baa9:c.instructions+=2;goto B72baa9;
case 0x72baaa:c.instructions+=1;goto B72baaa;
case 0x72baad:goto L72baad;
case 0x72baae:c.instructions+=16;goto B72baae;
case 0x72bab0:c.instructions+=15;goto B72bab0;
case 0x72bab3:c.instructions+=14;goto B72bab3;
case 0x72bab6:c.instructions+=13;goto B72bab6;
case 0x72bab7:c.instructions+=12;goto B72bab7;
case 0x72bab8:c.instructions+=11;goto B72bab8;
case 0x72baba:c.instructions+=10;goto B72baba;
case 0x72babd:c.instructions+=9;goto B72babd;
case 0x72bac0:c.instructions+=8;goto B72bac0;
case 0x72bac3:c.instructions+=7;goto B72bac3;
case 0x72bac4:c.instructions+=6;goto B72bac4;
case 0x72bac8:c.instructions+=5;goto B72bac8;
case 0x72bacb:c.instructions+=4;goto B72bacb;
case 0x72bace:c.instructions+=3;goto B72bace;
case 0x72bad2:c.instructions+=2;goto B72bad2;
case 0x72bad5:c.instructions+=1;goto B72bad5;
case 0x72bad7:goto L72bad7;
case 0x72badb:c.instructions+=1;goto B72badb;
case 0x72badd:goto L72badd;
case 0x72bae4:c.instructions+=2;goto B72bae4;
case 0x72baeb:c.instructions+=1;goto B72baeb;
case 0x72baed:goto L72baed;
case 0x72baf1:c.instructions+=10;goto B72baf1;
case 0x72baf5:c.instructions+=9;goto B72baf5;
case 0x72baf8:c.instructions+=8;goto B72baf8;
case 0x72bafb:c.instructions+=7;goto B72bafb;
case 0x72bb03:c.instructions+=6;goto B72bb03;
case 0x72bb06:c.instructions+=5;goto B72bb06;
case 0x72bb0a:c.instructions+=4;goto B72bb0a;
case 0x72bb0c:c.instructions+=3;goto B72bb0c;
case 0x72bb0e:c.instructions+=2;goto B72bb0e;
case 0x72bb16:c.instructions+=1;goto B72bb16;
case 0x72bb19:goto L72bb19;
case 0x72bb1d:c.instructions+=14;goto B72bb1d;
case 0x72bb21:c.instructions+=13;goto B72bb21;
case 0x72bb25:c.instructions+=12;goto B72bb25;
case 0x72bb28:c.instructions+=11;goto B72bb28;
case 0x72bb2d:c.instructions+=10;goto B72bb2d;
case 0x72bb2f:c.instructions+=9;goto B72bb2f;
case 0x72bb31:c.instructions+=8;goto B72bb31;
case 0x72bb34:c.instructions+=7;goto B72bb34;
case 0x72bb36:c.instructions+=6;goto B72bb36;
case 0x72bb38:c.instructions+=5;goto B72bb38;
case 0x72bb3b:c.instructions+=4;goto B72bb3b;
case 0x72bb3e:c.instructions+=3;goto B72bb3e;
case 0x72bb40:c.instructions+=2;goto B72bb40;
case 0x72bb43:c.instructions+=1;goto B72bb43;
case 0x72bb45:goto L72bb45;
case 0x72bb48:c.instructions+=2;goto B72bb48;
case 0x72bb4b:c.instructions+=1;goto B72bb4b;
case 0x72bb4d:goto L72bb4d;
case 0x72bb51:c.instructions+=1;goto B72bb51;
case 0x72bb53:goto L72bb53;
case 0x72bb56:c.instructions+=1;goto B72bb56;
case 0x72bb58:goto L72bb58;
case 0x72bb5c:c.instructions+=1;goto B72bb5c;
case 0x72bb5e:goto L72bb5e;
case 0x72bb62:goto L72bb62;
case 0x72bb69:c.instructions+=4;goto B72bb69;
case 0x72bb6c:c.instructions+=3;goto B72bb6c;
case 0x72bb73:c.instructions+=2;goto B72bb73;
case 0x72bb76:c.instructions+=1;goto B72bb76;
case 0x72bb7c:goto L72bb7c;
case 0x72bb7f:c.instructions+=6;goto B72bb7f;
case 0x72bb81:c.instructions+=5;goto B72bb81;
case 0x72bb84:c.instructions+=4;goto B72bb84;
case 0x72bb87:c.instructions+=3;goto B72bb87;
case 0x72bb8a:c.instructions+=2;goto B72bb8a;
case 0x72bb8c:c.instructions+=1;goto B72bb8c;
case 0x72bb90:goto L72bb90;
case 0x72bb94:c.instructions+=2;goto B72bb94;
case 0x72bb97:c.instructions+=1;goto B72bb97;
case 0x72bb99:goto L72bb99;
case 0x72bb9d:c.instructions+=9;goto B72bb9d;
case 0x72bba0:c.instructions+=8;goto B72bba0;
case 0x72bba7:c.instructions+=7;goto B72bba7;
case 0x72bbaa:c.instructions+=6;goto B72bbaa;
case 0x72bbad:c.instructions+=5;goto B72bbad;
case 0x72bbb0:c.instructions+=4;goto B72bbb0;
case 0x72bbb3:c.instructions+=3;goto B72bbb3;
case 0x72bbb5:c.instructions+=2;goto B72bbb5;
case 0x72bbb7:c.instructions+=1;goto B72bbb7;
case 0x72bbbd:goto L72bbbd;
case 0x72bbc0:c.instructions+=2;goto B72bbc0;
case 0x72bbc3:c.instructions+=1;goto B72bbc3;
case 0x72bbc7:goto L72bbc7;
case 0x72bbce:c.instructions+=1;goto B72bbce;
case 0x72bbd4:goto L72bbd4;
case 0x72bbd7:c.instructions+=1;goto B72bbd7;
case 0x72bbd9:goto L72bbd9;
case 0x72bbdc:c.instructions+=13;goto B72bbdc;
case 0x72bbdf:c.instructions+=12;goto B72bbdf;
case 0x72bbe2:c.instructions+=11;goto B72bbe2;
case 0x72bbe4:c.instructions+=10;goto B72bbe4;
case 0x72bbe5:c.instructions+=9;goto B72bbe5;
case 0x72bbe7:c.instructions+=8;goto B72bbe7;
case 0x72bbe9:c.instructions+=7;goto B72bbe9;
case 0x72bbec:c.instructions+=6;goto B72bbec;
case 0x72bbef:c.instructions+=5;goto B72bbef;
case 0x72bbf2:c.instructions+=4;goto B72bbf2;
case 0x72bbf3:c.instructions+=3;goto B72bbf3;
case 0x72bbf6:c.instructions+=2;goto B72bbf6;
case 0x72bbf9:c.instructions+=1;goto B72bbf9;
case 0x72bbfb:goto L72bbfb;
case 0x72bbfe:goto L72bbfe;
case 0x72bc01:c.instructions+=12;goto B72bc01;
case 0x72bc04:c.instructions+=11;goto B72bc04;
case 0x72bc07:c.instructions+=10;goto B72bc07;
case 0x72bc09:c.instructions+=9;goto B72bc09;
case 0x72bc0b:c.instructions+=8;goto B72bc0b;
case 0x72bc0e:c.instructions+=7;goto B72bc0e;
case 0x72bc12:c.instructions+=6;goto B72bc12;
case 0x72bc15:c.instructions+=5;goto B72bc15;
case 0x72bc18:c.instructions+=4;goto B72bc18;
case 0x72bc1b:c.instructions+=3;goto B72bc1b;
case 0x72bc1e:c.instructions+=2;goto B72bc1e;
case 0x72bc21:c.instructions+=1;goto B72bc21;
case 0x72bc27:goto L72bc27;
case 0x72bc29:c.instructions+=2;goto B72bc29;
case 0x72bc2c:c.instructions+=1;goto B72bc2c;
case 0x72bc2e:goto L72bc2e;
case 0x72bc31:goto L72bc31;
case 0x72bc34:c.instructions+=3;goto B72bc34;
case 0x72bc37:c.instructions+=2;goto B72bc37;
case 0x72bc3a:c.instructions+=1;goto B72bc3a;
case 0x72bc3f:goto L72bc3f;
case 0x72bc42:c.instructions+=12;goto B72bc42;
case 0x72bc45:c.instructions+=11;goto B72bc45;
case 0x72bc47:c.instructions+=10;goto B72bc47;
case 0x72bc48:c.instructions+=9;goto B72bc48;
case 0x72bc4a:c.instructions+=8;goto B72bc4a;
case 0x72bc4d:c.instructions+=7;goto B72bc4d;
case 0x72bc4f:c.instructions+=6;goto B72bc4f;
case 0x72bc52:c.instructions+=5;goto B72bc52;
case 0x72bc53:c.instructions+=4;goto B72bc53;
case 0x72bc56:c.instructions+=3;goto B72bc56;
case 0x72bc59:c.instructions+=2;goto B72bc59;
case 0x72bc5c:c.instructions+=1;goto B72bc5c;
case 0x72bc5f:goto L72bc5f;
case 0x72bc63:c.instructions+=1;goto B72bc63;
case 0x72bc65:goto L72bc65;
case 0x72bc67:c.instructions+=1;goto B72bc67;
case 0x72bc69:goto L72bc69;
case 0x72bc6a:c.instructions+=3;goto B72bc6a;
case 0x72bc6b:c.instructions+=2;goto B72bc6b;
case 0x72bc6f:c.instructions+=1;goto B72bc6f;
case 0x72bc71:goto L72bc71;
case 0x72bc73:c.instructions+=1;goto B72bc73;
case 0x72bc76:goto L72bc76;
case 0x72bc79:c.instructions+=1;goto B72bc79;
case 0x72bc7c:goto L72bc7c;
case 0x72bc7f:c.instructions+=2;goto B72bc7f;
case 0x72bc81:c.instructions+=1;goto B72bc81;
case 0x72bc83:goto L72bc83;
case 0x72bc85:c.instructions+=4;goto B72bc85;
case 0x72bc88:c.instructions+=3;goto B72bc88;
case 0x72bc8b:c.instructions+=2;goto B72bc8b;
case 0x72bc8e:c.instructions+=1;goto B72bc8e;
case 0x72bc90:goto L72bc90;
case 0x72bc94:c.instructions+=1;goto B72bc94;
case 0x72bc96:goto L72bc96;
case 0x72bc99:c.instructions+=2;goto B72bc99;
case 0x72bc9b:c.instructions+=1;goto B72bc9b;
case 0x72bca0:goto L72bca0;
case 0x72bca3:goto L72bca3;
case 0x72bca5:c.instructions+=1;goto B72bca5;
case 0x72bca7:goto L72bca7;
case 0x72bcab:c.instructions+=2;goto B72bcab;
case 0x72bcae:c.instructions+=1;goto B72bcae;
case 0x72bcb0:goto L72bcb0;
case 0x72bcb3:c.instructions+=1;goto B72bcb3;
case 0x72bcb5:goto L72bcb5;
case 0x72bcb8:goto L72bcb8;
case 0x72bcbf:c.instructions+=5;goto B72bcbf;
case 0x72bcc2:c.instructions+=4;goto B72bcc2;
case 0x72bcc5:c.instructions+=3;goto B72bcc5;
case 0x72bcc8:c.instructions+=2;goto B72bcc8;
case 0x72bccb:c.instructions+=1;goto B72bccb;
case 0x72bccd:goto L72bccd;
case 0x72bcd0:c.instructions+=3;goto B72bcd0;
case 0x72bcd2:c.instructions+=2;goto B72bcd2;
case 0x72bcd5:c.instructions+=1;goto B72bcd5;
case 0x72bcd8:goto L72bcd8;
case 0x72bcdb:c.instructions+=1;goto B72bcdb;
case 0x72bcdd:goto L72bcdd;
case 0x72bce1:c.instructions+=1;goto B72bce1;
case 0x72bce3:goto L72bce3;
case 0x72bce6:c.instructions+=2;goto B72bce6;
case 0x72bce8:c.instructions+=1;goto B72bce8;
case 0x72bced:goto L72bced;
case 0x72bcef:c.instructions+=1;goto B72bcef;
case 0x72bcf2:goto L72bcf2;
case 0x72bcf4:c.instructions+=1;goto B72bcf4;
case 0x72bcf6:goto L72bcf6;
case 0x72bcfa:c.instructions+=3;goto B72bcfa;
case 0x72bcfd:c.instructions+=2;goto B72bcfd;
case 0x72bd00:c.instructions+=1;goto B72bd00;
case 0x72bd02:goto L72bd02;
case 0x72bd05:c.instructions+=1;goto B72bd05;
case 0x72bd07:goto L72bd07;
case 0x72bd0a:goto L72bd0a;
case 0x72bd11:c.instructions+=3;goto B72bd11;
case 0x72bd15:c.instructions+=2;goto B72bd15;
case 0x72bd18:c.instructions+=1;goto B72bd18;
case 0x72bd1b:goto L72bd1b;
case 0x72bd1e:c.instructions+=2;goto B72bd1e;
case 0x72bd21:c.instructions+=1;goto B72bd21;
case 0x72bd26:goto L72bd26;
case 0x72bd29:c.instructions+=4;goto B72bd29;
case 0x72bd2b:c.instructions+=3;goto B72bd2b;
case 0x72bd2e:c.instructions+=2;goto B72bd2e;
case 0x72bd32:c.instructions+=1;goto B72bd32;
case 0x72bd34:goto L72bd34;
case 0x72bd36:c.instructions+=1;goto B72bd36;
case 0x72bd39:goto L72bd39;
case 0x72bd3c:c.instructions+=1;goto B72bd3c;
case 0x72bd3e:goto L72bd3e;
case 0x72bd42:c.instructions+=2;goto B72bd42;
case 0x72bd45:c.instructions+=1;goto B72bd45;
case 0x72bd47:goto L72bd47;
case 0x72bd4a:goto L72bd4a;
case 0x72bd4d:c.instructions+=3;goto B72bd4d;
case 0x72bd50:c.instructions+=2;goto B72bd50;
case 0x72bd53:c.instructions+=1;goto B72bd53;
case 0x72bd55:goto L72bd55;
case 0x72bd57:c.instructions+=1;goto B72bd57;
case 0x72bd5a:goto L72bd5a;
case 0x72bd5d:c.instructions+=1;goto B72bd5d;
case 0x72bd5f:goto L72bd5f;
case 0x72bd63:c.instructions+=2;goto B72bd63;
case 0x72bd66:c.instructions+=1;goto B72bd66;
case 0x72bd68:goto L72bd68;
case 0x72bd6b:goto L72bd6b;
case 0x72bd6d:c.instructions+=3;goto B72bd6d;
case 0x72bd70:c.instructions+=2;goto B72bd70;
case 0x72bd73:c.instructions+=1;goto B72bd73;
case 0x72bd75:goto L72bd75;
case 0x72bd77:c.instructions+=1;goto B72bd77;
case 0x72bd79:goto L72bd79;
case 0x72bd7c:c.instructions+=1;goto B72bd7c;
case 0x72bd7e:goto L72bd7e;
case 0x72bd82:c.instructions+=2;goto B72bd82;
case 0x72bd85:c.instructions+=1;goto B72bd85;
case 0x72bd87:goto L72bd87;
case 0x72bd8a:goto L72bd8a;
case 0x72bd8d:c.instructions+=3;goto B72bd8d;
case 0x72bd90:c.instructions+=2;goto B72bd90;
case 0x72bd93:c.instructions+=1;goto B72bd93;
case 0x72bd95:goto L72bd95;
case 0x72bd97:c.instructions+=1;goto B72bd97;
case 0x72bd9a:goto L72bd9a;
case 0x72bd9d:c.instructions+=8;goto B72bd9d;
case 0x72bda0:c.instructions+=7;goto B72bda0;
case 0x72bda3:c.instructions+=6;goto B72bda3;
case 0x72bda7:c.instructions+=5;goto B72bda7;
case 0x72bdaa:c.instructions+=4;goto B72bdaa;
case 0x72bdac:c.instructions+=3;goto B72bdac;
case 0x72bdaf:c.instructions+=2;goto B72bdaf;
case 0x72bdb1:c.instructions+=1;goto B72bdb1;
case 0x72bdb7:goto L72bdb7;
case 0x72bdb9:goto L72bdb9;
case 0x72bdbb:goto L72bdbb;
case 0x72bdbd:c.instructions+=3;goto B72bdbd;
case 0x72bdbe:c.instructions+=2;goto B72bdbe;
case 0x72bdc0:c.instructions+=1;goto B72bdc0;
case 0x72bdc5:goto L72bdc5;
case 0x72bdc9:goto L72bdc9;
case 0x72bdcc:c.instructions+=5;goto B72bdcc;
case 0x72bdcf:c.instructions+=4;goto B72bdcf;
case 0x72bdd2:c.instructions+=3;goto B72bdd2;
case 0x72bdd5:c.instructions+=2;goto B72bdd5;
case 0x72bdd7:c.instructions+=1;goto B72bdd7;
case 0x72bdd9:goto L72bdd9;
case 0x72bddb:c.instructions+=3;goto B72bddb;
case 0x72bddc:c.instructions+=2;goto B72bddc;
case 0x72bdde:c.instructions+=1;goto B72bdde;
case 0x72bde3:goto L72bde3;
case 0x72bde6:c.instructions+=3;goto B72bde6;
case 0x72bdeb:c.instructions+=2;goto B72bdeb;
case 0x72bded:c.instructions+=1;goto B72bded;
case 0x72bdef:goto L72bdef;
case 0x72bdf2:c.instructions+=6;goto B72bdf2;
case 0x72bdf4:c.instructions+=5;goto B72bdf4;
case 0x72bdf7:c.instructions+=4;goto B72bdf7;
case 0x72bdfa:c.instructions+=3;goto B72bdfa;
case 0x72bdfc:c.instructions+=2;goto B72bdfc;
case 0x72bdff:c.instructions+=1;goto B72bdff;
case 0x72be01:goto L72be01;
case 0x72be03:goto L72be03;
case 0x72be05:c.instructions+=1;goto B72be05;
case 0x72be08:goto L72be08;
case 0x72be0a:goto L72be0a;
case 0x72be0b:c.instructions+=4;goto B72be0b;
case 0x72be0c:c.instructions+=3;goto B72be0c;
case 0x72be0d:c.instructions+=2;goto B72be0d;
case 0x72be0e:c.instructions+=1;goto B72be0e;
case 0x72be11:goto L72be11;
case 0x72be12:c.instructions+=32;goto B72be12;
case 0x72be14:c.instructions+=31;goto B72be14;
case 0x72be15:c.instructions+=30;goto B72be15;
case 0x72be16:c.instructions+=29;goto B72be16;
case 0x72be19:c.instructions+=28;goto B72be19;
case 0x72be1b:c.instructions+=27;goto B72be1b;
case 0x72be1e:c.instructions+=26;goto B72be1e;
case 0x72be21:c.instructions+=25;goto B72be21;
case 0x72be24:c.instructions+=24;goto B72be24;
case 0x72be26:c.instructions+=23;goto B72be26;
case 0x72be27:c.instructions+=22;goto B72be27;
case 0x72be29:c.instructions+=21;goto B72be29;
case 0x72be2b:c.instructions+=20;goto B72be2b;
case 0x72be2e:c.instructions+=19;goto B72be2e;
case 0x72be31:c.instructions+=18;goto B72be31;
case 0x72be34:c.instructions+=17;goto B72be34;
case 0x72be37:c.instructions+=16;goto B72be37;
case 0x72be39:c.instructions+=15;goto B72be39;
case 0x72be3c:c.instructions+=14;goto B72be3c;
case 0x72be3f:c.instructions+=13;goto B72be3f;
case 0x72be43:c.instructions+=12;goto B72be43;
case 0x72be46:c.instructions+=11;goto B72be46;
case 0x72be49:c.instructions+=10;goto B72be49;
case 0x72be4d:c.instructions+=9;goto B72be4d;
case 0x72be50:c.instructions+=8;goto B72be50;
case 0x72be53:c.instructions+=7;goto B72be53;
case 0x72be56:c.instructions+=6;goto B72be56;
case 0x72be58:c.instructions+=5;goto B72be58;
case 0x72be5b:c.instructions+=4;goto B72be5b;
case 0x72be5e:c.instructions+=3;goto B72be5e;
case 0x72be62:c.instructions+=2;goto B72be62;
case 0x72be65:c.instructions+=1;goto B72be65;
case 0x72be67:goto L72be67;
case 0x72be6a:c.instructions+=2;goto B72be6a;
case 0x72be6d:c.instructions+=1;goto B72be6d;
case 0x72be6f:goto L72be6f;
case 0x72be72:c.instructions+=11;goto B72be72;
case 0x72be74:c.instructions+=10;goto B72be74;
case 0x72be76:c.instructions+=9;goto B72be76;
case 0x72be79:c.instructions+=8;goto B72be79;
case 0x72be7b:c.instructions+=7;goto B72be7b;
case 0x72be7f:c.instructions+=6;goto B72be7f;
case 0x72be82:c.instructions+=5;goto B72be82;
case 0x72be85:c.instructions+=4;goto B72be85;
case 0x72be87:c.instructions+=3;goto B72be87;
case 0x72be8a:c.instructions+=2;goto B72be8a;
case 0x72be8c:c.instructions+=1;goto B72be8c;
case 0x72be8f:goto L72be8f;
case 0x72be92:c.instructions+=11;goto B72be92;
case 0x72be95:c.instructions+=10;goto B72be95;
case 0x72be97:c.instructions+=9;goto B72be97;
case 0x72be9a:c.instructions+=8;goto B72be9a;
case 0x72be9e:c.instructions+=7;goto B72be9e;
case 0x72bea6:c.instructions+=6;goto B72bea6;
case 0x72bea9:c.instructions+=5;goto B72bea9;
case 0x72beac:c.instructions+=4;goto B72beac;
case 0x72beae:c.instructions+=3;goto B72beae;
case 0x72beaf:c.instructions+=2;goto B72beaf;
case 0x72beb0:c.instructions+=1;goto B72beb0;
case 0x72beb3:goto L72beb3;
case 0x72beb4:c.instructions+=3;goto B72beb4;
case 0x72beb6:c.instructions+=2;goto B72beb6;
case 0x72beba:c.instructions+=1;goto B72beba;
case 0x72bebc:goto L72bebc;
case 0x72bebe:c.instructions+=1;goto B72bebe;
case 0x72bec1:goto L72bec1;
case 0x72bec5:c.instructions+=8;goto B72bec5;
case 0x72bec7:c.instructions+=7;goto B72bec7;
case 0x72becb:c.instructions+=6;goto B72becb;
case 0x72bece:c.instructions+=5;goto B72bece;
case 0x72bed1:c.instructions+=4;goto B72bed1;
case 0x72bed4:c.instructions+=3;goto B72bed4;
case 0x72bed5:c.instructions+=2;goto B72bed5;
case 0x72bed7:c.instructions+=1;goto B72bed7;
case 0x72beda:goto L72beda;
case 0x72bedd:c.instructions+=1;goto B72bedd;
case 0x72bedf:goto L72bedf;
case 0x72bee1:c.instructions+=1;goto B72bee1;
case 0x72bee3:goto L72bee3;
case 0x72bee5:c.instructions+=1;goto B72bee5;
case 0x72beea:goto L72beea;
case 0x72bef1:c.instructions+=1;goto B72bef1;
case 0x72bef3:goto L72bef3;
case 0x72bef7:c.instructions+=5;goto B72bef7;
case 0x72befa:c.instructions+=4;goto B72befa;
case 0x72befd:c.instructions+=3;goto B72befd;
case 0x72befe:c.instructions+=2;goto B72befe;
case 0x72bf01:c.instructions+=1;goto B72bf01;
case 0x72bf07:goto L72bf07;
case 0x72bf08:c.instructions+=1;goto B72bf08;
case 0x72bf0e:goto L72bf0e;
case 0x72bf10:c.instructions+=3;goto B72bf10;
case 0x72bf14:c.instructions+=2;goto B72bf14;
case 0x72bf18:c.instructions+=1;goto B72bf18;
case 0x72bf1d:goto L72bf1d;
case 0x72bf1f:goto L72bf1f;
case 0x72bf20:c.instructions+=1;goto B72bf20;
case 0x72bf23:goto L72bf23;
case 0x72bf24:c.instructions+=3;goto B72bf24;
case 0x72bf26:c.instructions+=2;goto B72bf26;
case 0x72bf2b:c.instructions+=1;goto B72bf2b;
case 0x72bf30:goto L72bf30;
case 0x72bf31:c.instructions+=10;goto B72bf31;
case 0x72bf32:c.instructions+=9;goto B72bf32;
case 0x72bf34:c.instructions+=8;goto B72bf34;
case 0x72bf37:c.instructions+=7;goto B72bf37;
case 0x72bf38:c.instructions+=6;goto B72bf38;
case 0x72bf3b:c.instructions+=5;goto B72bf3b;
case 0x72bf41:c.instructions+=4;goto B72bf41;
case 0x72bf43:c.instructions+=3;goto B72bf43;
case 0x72bf49:c.instructions+=2;goto B72bf49;
case 0x72bf4c:c.instructions+=1;goto B72bf4c;
case 0x72bf51:goto L72bf51;
case 0x72bf53:c.instructions+=3;goto B72bf53;
case 0x72bf54:c.instructions+=2;goto B72bf54;
case 0x72bf56:c.instructions+=1;goto B72bf56;
case 0x72bf5b:goto L72bf5b;
case 0x72bf5e:c.instructions+=9;goto B72bf5e;
case 0x72bf61:c.instructions+=8;goto B72bf61;
case 0x72bf62:c.instructions+=7;goto B72bf62;
case 0x72bf65:c.instructions+=6;goto B72bf65;
case 0x72bf68:c.instructions+=5;goto B72bf68;
case 0x72bf6c:c.instructions+=4;goto B72bf6c;
case 0x72bf6f:c.instructions+=3;goto B72bf6f;
case 0x72bf71:c.instructions+=2;goto B72bf71;
case 0x72bf73:c.instructions+=1;goto B72bf73;
case 0x72bf75:goto L72bf75;
case 0x72bf7a:goto L72bf7a;
case 0x72bf7c:goto L72bf7c;
case 0x72bf81:goto L72bf81;
case 0x72bf84:c.instructions+=6;goto B72bf84;
case 0x72bf8a:c.instructions+=5;goto B72bf8a;
case 0x72bf8b:c.instructions+=4;goto B72bf8b;
case 0x72bf8c:c.instructions+=3;goto B72bf8c;
case 0x72bf8e:c.instructions+=2;goto B72bf8e;
case 0x72bf90:c.instructions+=1;goto B72bf90;
case 0x72bf95:goto L72bf95;
case 0x72bf9b:c.instructions+=5;goto B72bf9b;
case 0x72bf9c:c.instructions+=4;goto B72bf9c;
case 0x72bf9d:c.instructions+=3;goto B72bf9d;
case 0x72bf9f:c.instructions+=2;goto B72bf9f;
case 0x72bfa1:c.instructions+=1;goto B72bfa1;
case 0x72bfa6:goto L72bfa6;
case 0x72bfa9:c.instructions+=3;goto B72bfa9;
case 0x72bfad:c.instructions+=2;goto B72bfad;
case 0x72bfb1:c.instructions+=1;goto B72bfb1;
case 0x72bfb3:goto L72bfb3;
case 0x72bfb7:c.instructions+=1;goto B72bfb7;
case 0x72bfb9:goto L72bfb9;
case 0x72bfbf:c.instructions+=7;goto B72bfbf;
case 0x72bfc0:c.instructions+=6;goto B72bfc0;
case 0x72bfc6:c.instructions+=5;goto B72bfc6;
case 0x72bfc7:c.instructions+=4;goto B72bfc7;
case 0x72bfc8:c.instructions+=3;goto B72bfc8;
case 0x72bfca:c.instructions+=2;goto B72bfca;
case 0x72bfcc:c.instructions+=1;goto B72bfcc;
case 0x72bfd1:goto L72bfd1;
case 0x72bfd7:c.instructions+=2;goto B72bfd7;
case 0x72bfdd:c.instructions+=1;goto B72bfdd;
case 0x72bfe0:goto L72bfe0;
case 0x72bfe1:c.instructions+=4;goto B72bfe1;
case 0x72bfe2:c.instructions+=3;goto B72bfe2;
case 0x72bfe4:c.instructions+=2;goto B72bfe4;
case 0x72bfe6:c.instructions+=1;goto B72bfe6;
case 0x72bfeb:goto L72bfeb;
case 0x72bfee:c.instructions+=2;goto B72bfee;
case 0x72bfef:c.instructions+=1;goto B72bfef;
case 0x72bff4:goto L72bff4;
case 0x72bff5:c.instructions+=6;goto B72bff5;
case 0x72bff6:c.instructions+=5;goto B72bff6;
case 0x72bff9:c.instructions+=4;goto B72bff9;
case 0x72bffb:c.instructions+=3;goto B72bffb;
case 0x72bffc:c.instructions+=2;goto B72bffc;
case 0x72bffe:c.instructions+=1;goto B72bffe;
default:missing_instruction(c.pc);}
B72b001:L72b001:{c.instructions+=3;NFSU2_TR(0x72b001);
__builtin_memmove((R+0),(R+4),4);
}
B72b003:{NFSU2_TR(0x72b003);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x18ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x18ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B72b007:{NFSU2_TR(0x72b007);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72b02f;}}
}
B72b009:L72b009:{c.instructions+=2;NFSU2_TR(0x72b009);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b00a:{NFSU2_TR(0x72b00a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b00b:L72b00b:{c.instructions+=14;NFSU2_TR(0x72b00b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72b00e:{NFSU2_TR(0x72b00e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+28,u32(r1(U+0)));
}
B72b011:{NFSU2_TR(0x72b011);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72b014:{NFSU2_TR(0x72b014);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b016:{NFSU2_TR(0x72b016);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72b017:{NFSU2_TR(0x72b017);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B72b019:{NFSU2_TR(0x72b019);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B72b01b:{NFSU2_TR(0x72b01b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B72b01e:{NFSU2_TR(0x72b01e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72b021:{NFSU2_TR(0x72b021);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B72b024:{NFSU2_TR(0x72b024);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B72b025:{NFSU2_TR(0x72b025);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x18ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x18ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72b028:{NFSU2_TR(0x72b028);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72b02b:{NFSU2_TR(0x72b02b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b00bu);}goto L72b00b;}}
}
B72b02d:L72b02d:{c.instructions+=2;NFSU2_TR(0x72b02d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72b02e:{NFSU2_TR(0x72b02e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72b02f:L72b02f:{c.instructions+=1;NFSU2_TR(0x72b02f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72b030:L72b030:{c.instructions+=6;NFSU2_TR(0x72b030);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b031:{NFSU2_TR(0x72b031);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b032:{NFSU2_TR(0x72b032);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72b036:{NFSU2_TR(0x72b036);
__builtin_memmove((R+8),(R+4),4);
}
B72b038:{NFSU2_TR(0x72b038);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+28)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B72b03b:{NFSU2_TR(0x72b03b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72b060;}}
}
B72b03d:L72b03d:{c.instructions+=1;NFSU2_TR(0x72b03d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b03e:L72b03e:{c.instructions+=14;NFSU2_TR(0x72b03e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72b041:{NFSU2_TR(0x72b041);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+12,u32(r1(U+0)));
}
B72b044:{NFSU2_TR(0x72b044);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72b047:{NFSU2_TR(0x72b047);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b049:{NFSU2_TR(0x72b049);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72b04a:{NFSU2_TR(0x72b04a);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B72b04c:{NFSU2_TR(0x72b04c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B72b04e:{NFSU2_TR(0x72b04e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B72b051:{NFSU2_TR(0x72b051);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72b054:{NFSU2_TR(0x72b054);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B72b057:{NFSU2_TR(0x72b057);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B72b058:{NFSU2_TR(0x72b058);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B72b05a:{NFSU2_TR(0x72b05a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72b05d:{NFSU2_TR(0x72b05d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b03eu);}goto L72b03e;}}
}
B72b05f:L72b05f:{c.instructions+=1;NFSU2_TR(0x72b05f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72b060:L72b060:{c.instructions+=13;NFSU2_TR(0x72b060);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72b063:{NFSU2_TR(0x72b063);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B72b066:{NFSU2_TR(0x72b066);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b068:{NFSU2_TR(0x72b068);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72b069:{NFSU2_TR(0x72b069);
u8 U[6];
w1(R+512,u8((r4(R+4))<(r4(R+28))));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72b06b:{NFSU2_TR(0x72b06b);
__builtin_memmove((R+0),(R+24),4);
}
B72b06d:{NFSU2_TR(0x72b06d);
u8 U[42];
w1(U+37,u8(u32(r1(R+4))&u32(u8(0x1full))));
__builtin_memmove((U+38),(R+0),4);
w4(R+0,shr<u32>(r4(R+0),u64(r1(U+37))));
w1(U+24,u8((r1(U+37))==(u8(0x0ull))));
w1(U+25,u8(u32(r1(U+37))-u32(u8(0x1ull))));
w4(U+26,shr<u32>(r4(U+38),u64(r1(U+25))));
w4(U+30,u32(u32(r4(U+26))&u32(u32(0x1ull))));
w1(U+34,u8((r4(U+30))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+34))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+35,u8((r1(U+37))==(u8(0x1ull))));
w1(U+36,u8(s32(r4(U+38))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+35),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+35))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+36))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r1(U+37))!=(u8(0x0ull))));
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
B72b06f:{NFSU2_TR(0x72b06f);
__builtin_memmove((R+4),(R+28),4);
}
B72b071:{NFSU2_TR(0x72b071);
u8 U[39];
w1(U+34,u8(u32(r1(R+4))&u32(u8(0x1full))));
__builtin_memmove((U+35),(R+24),4);
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+34))));
w1(U+24,u8((r1(U+34))==(u8(0x0ull))));
w1(U+25,u8(u32(r1(U+34))-u32(u8(0x1ull))));
w4(U+26,shl<u32>(r4(U+35),u64(r1(U+25))));
w1(U+30,u8(s32(r4(U+26))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+30))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+31,u8((r1(U+34))==(u8(0x1ull))));
w1(U+32,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(U+33,u8(u32(r1(R+512))^u32(r1(U+32))));
__builtin_memmove((U+0),(U+31),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+33))));
w1(U+2,u8(!(r1(U+31))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r1(U+34))!=(u8(0x0ull))));
w1(U+6,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+24))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B72b073:{NFSU2_TR(0x72b073);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72b074:{NFSU2_TR(0x72b074);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72b077:{NFSU2_TR(0x72b077);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72b078:{NFSU2_TR(0x72b078);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72b07b:L72b07b:{c.instructions+=2;NFSU2_TR(0x72b07b);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72b080:{NFSU2_TR(0x72b080);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72b087;}}
}
B72b082:L72b082:{c.instructions+=2;NFSU2_TR(0x72b082);
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
B72b084:{NFSU2_TR(0x72b084);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72b087:L72b087:{c.instructions+=1;NFSU2_TR(0x72b087);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b030u);}goto L72b030;}
}
B72b08c:L72b08c:{c.instructions+=10;NFSU2_TR(0x72b08c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72b090:{NFSU2_TR(0x72b090);
__builtin_memmove((R+0),(R+4),4);
}
B72b092:{NFSU2_TR(0x72b092);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72b095:{NFSU2_TR(0x72b095);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B72b097:{NFSU2_TR(0x72b097);
__builtin_memmove((R+4),(R+8),4);
}
B72b099:{NFSU2_TR(0x72b099);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B72b09c:{NFSU2_TR(0x72b09c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B72b09f:{NFSU2_TR(0x72b09f);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72b0a2:{NFSU2_TR(0x72b0a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72b0a5:{NFSU2_TR(0x72b0a5);
if(r1(R+518)){{goto L72b0ba;}}
}
B72b0a7:L72b0a7:{c.instructions+=9;NFSU2_TR(0x72b0a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72b0aa:{NFSU2_TR(0x72b0aa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b0ab:{NFSU2_TR(0x72b0ab);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B72b0af:{NFSU2_TR(0x72b0af);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b0b1:{NFSU2_TR(0x72b0b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72b0b2:{NFSU2_TR(0x72b0b2);
u8 U[6];
w1(R+512,u8((r4(R+4))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(R+4),r4(R+8)));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72b0b4:{NFSU2_TR(0x72b0b4);
u8 U[39];
w1(U+34,u8(u32(r1(R+4))&u32(u8(0x1full))));
__builtin_memmove((U+35),(R+24),4);
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+34))));
w1(U+24,u8((r1(U+34))==(u8(0x0ull))));
w1(U+25,u8(u32(r1(U+34))-u32(u8(0x1ull))));
w4(U+26,shl<u32>(r4(U+35),u64(r1(U+25))));
w1(U+30,u8(s32(r4(U+26))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+30))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+31,u8((r1(U+34))==(u8(0x1ull))));
w1(U+32,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(U+33,u8(u32(r1(R+512))^u32(r1(U+32))));
__builtin_memmove((U+0),(U+31),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+33))));
w1(U+2,u8(!(r1(U+31))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r1(U+34))!=(u8(0x0ull))));
w1(U+6,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+24))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B72b0b6:{NFSU2_TR(0x72b0b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72b0b9:{NFSU2_TR(0x72b0b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72b0ba:L72b0ba:{c.instructions+=1;NFSU2_TR(0x72b0ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72b0bd:L72b0bd:{c.instructions+=3;NFSU2_TR(0x72b0bd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b0be:{NFSU2_TR(0x72b0be);
__builtin_memmove((R+24),(R+4),4);
}
B72b0c0:{NFSU2_TR(0x72b0c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b0c5ull));
TAIL_STATIC(0x72dcbcu,72d);
}
B72b0c5:L72b0c5:{c.instructions+=5;NFSU2_TR(0x72b0c5);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
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
B72b0cc:{NFSU2_TR(0x72b0cc);
u8 U[4];
w4(U+0,u32(0x7c6a4cull));
s4(u32(r4(R+24)),r4(U+0));
}
B72b0d2:{NFSU2_TR(0x72b0d2);
__builtin_memmove((R+0),(R+24),4);
}
B72b0d4:{NFSU2_TR(0x72b0d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72b0d5:{NFSU2_TR(0x72b0d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72b0d6:L72b0d6:{c.instructions+=6;NFSU2_TR(0x72b0d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b0d7:{NFSU2_TR(0x72b0d7);
__builtin_memmove((R+24),(R+4),4);
}
B72b0d9:{NFSU2_TR(0x72b0d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72b0df:{NFSU2_TR(0x72b0df);
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
B72b0e1:{NFSU2_TR(0x72b0e1);
u8 U[4];
w4(U+0,u32(0x7c6a4cull));
s4(u32(r4(R+24)),r4(U+0));
}
B72b0e7:{NFSU2_TR(0x72b0e7);
if(r1(R+518)){{goto L72b0f1;}}
}
B72b0e9:L72b0e9:{c.instructions+=2;NFSU2_TR(0x72b0e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b0ea:{NFSU2_TR(0x72b0ea);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b4a24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b0f0ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B72b0f0:L72b0f0:{c.instructions+=1;NFSU2_TR(0x72b0f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72b0f1:L72b0f1:{c.instructions+=3;NFSU2_TR(0x72b0f1);
__builtin_memmove((R+4),(R+24),4);
}
B72b0f3:{NFSU2_TR(0x72b0f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72b0f4:{NFSU2_TR(0x72b0f4);
TAIL_STATIC(0x72dcd5u,72d);
}
B72b0f9:L72b0f9:{c.instructions+=9;NFSU2_TR(0x72b0f9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b0fa:{NFSU2_TR(0x72b0fa);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b0fb:{NFSU2_TR(0x72b0fb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b0fc:{NFSU2_TR(0x72b0fc);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B72b0fe:{NFSU2_TR(0x72b0fe);
__builtin_memmove((R+24),(R+4),4);
}
B72b100:{NFSU2_TR(0x72b100);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B72b101:{NFSU2_TR(0x72b101);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72b105:{NFSU2_TR(0x72b105);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b106:{NFSU2_TR(0x72b106);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72b2aa;}}
}
B72b10c:L72b10c:{c.instructions+=3;NFSU2_TR(0x72b10c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72b110:{NFSU2_TR(0x72b110);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72b112:{NFSU2_TR(0x72b112);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72b161;}}
}
B72b114:L72b114:{c.instructions+=1;NFSU2_TR(0x72b114);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b119ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b001u);}goto L72b001;}
}
B72b119:L72b119:{c.instructions+=3;NFSU2_TR(0x72b119);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B72b11b:{NFSU2_TR(0x72b11b);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(r1(R+4))));
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+4))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72b11e:{NFSU2_TR(0x72b11e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L72b161;}}
}
B72b120:L72b120:{c.instructions+=23;NFSU2_TR(0x72b120);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72b123:{NFSU2_TR(0x72b123);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72b126:{NFSU2_TR(0x72b126);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B72b129:{NFSU2_TR(0x72b129);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B72b12d:{NFSU2_TR(0x72b12d);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B72b12f:{NFSU2_TR(0x72b12f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72b132:{NFSU2_TR(0x72b132);
u8 U[4];
w4(U+0,u32(u32(u32(0x1eull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B72b135:{NFSU2_TR(0x72b135);
w1(R+8,u8(u32(r1(R+8))&u32(r1(R+12))));
}
B72b137:{NFSU2_TR(0x72b137);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72b13a:{NFSU2_TR(0x72b13a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72b13d:{NFSU2_TR(0x72b13d);
u8 U[4];
w4(U+0,u32(u32(u32(0x1dull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B72b140:{NFSU2_TR(0x72b140);
w1(R+8,u8(u32(r1(R+8))&u32(r1(R+12))));
}
B72b142:{NFSU2_TR(0x72b142);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72b145:{NFSU2_TR(0x72b145);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72b148:{NFSU2_TR(0x72b148);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B72b14b:{NFSU2_TR(0x72b14b);
w1(R+8,u8(u32(r1(R+8))&u32(r1(R+12))));
}
B72b14d:{NFSU2_TR(0x72b14d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72b150:{NFSU2_TR(0x72b150);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
w4(U+8,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,shl<u32>(r4(U+4),u64(r4(U+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B72b154:{NFSU2_TR(0x72b154);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0xfffffffcull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72b158:{NFSU2_TR(0x72b158);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72b15c:{NFSU2_TR(0x72b15c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B72b15d:{NFSU2_TR(0x72b15d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B72b15f:{NFSU2_TR(0x72b15f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b120u);}goto L72b120;}}
}
B72b161:L72b161:{c.instructions+=3;NFSU2_TR(0x72b161);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B72b163:{NFSU2_TR(0x72b163);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x0ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B72b167:{NFSU2_TR(0x72b167);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L72b2a1;}}
}
B72b16d:L72b16d:{c.instructions+=2;NFSU2_TR(0x72b16d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72b170:{NFSU2_TR(0x72b170);
u8 U[12];
w4(U+0,u32(u32(u32(0x5eull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B72b174:L72b174:{c.instructions+=3;NFSU2_TR(0x72b174);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b176:{NFSU2_TR(0x72b176);
__builtin_memmove((R+4),(R+24),4);
}
B72b178:{NFSU2_TR(0x72b178);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b17dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b030u);}goto L72b030;}
}
B72b17d:L72b17d:{c.instructions+=3;NFSU2_TR(0x72b17d);
__builtin_memmove((R+4),(R+24),4);
}
B72b17f:{NFSU2_TR(0x72b17f);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b183:{NFSU2_TR(0x72b183);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b188ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b001u);}goto L72b001;}
}
B72b188:L72b188:{c.instructions+=18;NFSU2_TR(0x72b188);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72b18b:{NFSU2_TR(0x72b18b);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B72b18e:{NFSU2_TR(0x72b18e);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b192:{NFSU2_TR(0x72b192);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72b195:{NFSU2_TR(0x72b195);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B72b198:{NFSU2_TR(0x72b198);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+28)),r1(U+0));
}
B72b19a:{NFSU2_TR(0x72b19a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72b19d:{NFSU2_TR(0x72b19d);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B72b1a0:{NFSU2_TR(0x72b1a0);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B72b1a3:{NFSU2_TR(0x72b1a3);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b1a7:{NFSU2_TR(0x72b1a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72b1aa:{NFSU2_TR(0x72b1aa);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B72b1ad:{NFSU2_TR(0x72b1ad);
w1(R+0,u8(u32(r1(R+0))&u32(r1(R+12))));
}
B72b1af:{NFSU2_TR(0x72b1af);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72b1b2:{NFSU2_TR(0x72b1b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
w4(U+8,u32(u32(u32(0x16ull))&u32(u32(0x1full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,shl<u32>(r4(U+4),u64(r4(U+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B72b1b6:{NFSU2_TR(0x72b1b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0xffffffeaull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72b1ba:{NFSU2_TR(0x72b1ba);
__builtin_memmove((R+4),(R+24),4);
}
B72b1bc:{NFSU2_TR(0x72b1bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b1c1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b001u);}goto L72b001;}
}
B72b1c1:L72b1c1:{c.instructions+=3;NFSU2_TR(0x72b1c1);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72b1c5:{NFSU2_TR(0x72b1c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72b1c8:{NFSU2_TR(0x72b1c8);
if(r1(R+518)){{goto L72b232;}}
}
B72b1ca:L72b1ca:{c.instructions+=27;NFSU2_TR(0x72b1ca);
u8 U[4];
w4(U+0,u32(u32(u32(0x1eull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B72b1cd:{NFSU2_TR(0x72b1cd);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72b1d0:{NFSU2_TR(0x72b1d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72b1d3:{NFSU2_TR(0x72b1d3);
u8 U[4];
w4(U+0,u32(u32(u32(0x1dull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B72b1d6:{NFSU2_TR(0x72b1d6);
w1(R+0,u8(u32(r1(R+0))&u32(r1(R+12))));
}
B72b1d8:{NFSU2_TR(0x72b1d8);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72b1db:{NFSU2_TR(0x72b1db);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x33ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B72b1de:{NFSU2_TR(0x72b1de);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x1full))));
}
B72b1e0:{NFSU2_TR(0x72b1e0);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72b1e3:{NFSU2_TR(0x72b1e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72b1e6:{NFSU2_TR(0x72b1e6);
u8 U[4];
w4(U+0,u32(u32(u32(0x13ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B72b1e9:{NFSU2_TR(0x72b1e9);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x1full))));
}
B72b1eb:{NFSU2_TR(0x72b1eb);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72b1ee:{NFSU2_TR(0x72b1ee);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x32ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B72b1f1:{NFSU2_TR(0x72b1f1);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x7ull))));
}
B72b1f3:{NFSU2_TR(0x72b1f3);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72b1f6:{NFSU2_TR(0x72b1f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72b1f9:{NFSU2_TR(0x72b1f9);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B72b1fc:{NFSU2_TR(0x72b1fc);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x7ull))));
}
B72b1fe:{NFSU2_TR(0x72b1fe);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xbull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72b201:{NFSU2_TR(0x72b201);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72b204:{NFSU2_TR(0x72b204);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B72b207:{NFSU2_TR(0x72b207);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x7ull))));
}
B72b209:{NFSU2_TR(0x72b209);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72b20c:{NFSU2_TR(0x72b20c);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B72b20f:{NFSU2_TR(0x72b20f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B72b211:{NFSU2_TR(0x72b211);
if(r1(R+518)){{goto L72b3dd;}}
}
B72b217:L72b217:{c.instructions+=2;NFSU2_TR(0x72b217);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B72b219:{NFSU2_TR(0x72b219);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72b227;}}
}
B72b21b:L72b21b:{c.instructions+=2;NFSU2_TR(0x72b21b);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72b21f:{NFSU2_TR(0x72b21f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72b227;}}
}
B72b221:L72b221:{c.instructions+=2;NFSU2_TR(0x72b221);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w1(U+4,u8(0x8ull));
s1(u32(r4(U+0)),r1(U+4));
}
B72b225:{NFSU2_TR(0x72b225);
{goto L72b22b;}
}
B72b227:L72b227:{c.instructions+=1;NFSU2_TR(0x72b227);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w1(U+4,u8(0x7ull));
s1(u32(r4(U+0)),r1(U+4));
}
B72b22b:L72b22b:{c.instructions+=3;NFSU2_TR(0x72b22b);
w1(R+0,u8(0x14ull));
}
B72b22d:{NFSU2_TR(0x72b22d);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+0,u8(u32(r1(R+0))-u32(r1(U+4))));
}
B72b230:{NFSU2_TR(0x72b230);
{goto L72b265;}
}
B72b232:L72b232:{c.instructions+=18;NFSU2_TR(0x72b232);
u8 U[4];
w4(U+0,u32(u32(u32(0x1bull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B72b235:{NFSU2_TR(0x72b235);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72b238:{NFSU2_TR(0x72b238);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72b23b:{NFSU2_TR(0x72b23b);
u8 U[4];
w4(U+0,u32(u32(u32(0x16ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B72b23e:{NFSU2_TR(0x72b23e);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x1full))));
}
B72b240:{NFSU2_TR(0x72b240);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72b243:{NFSU2_TR(0x72b243);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72b246:{NFSU2_TR(0x72b246);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B72b249:{NFSU2_TR(0x72b249);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x1full))));
}
B72b24b:{NFSU2_TR(0x72b24b);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72b24e:{NFSU2_TR(0x72b24e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72b251:{NFSU2_TR(0x72b251);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B72b254:{NFSU2_TR(0x72b254);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B72b256:{NFSU2_TR(0x72b256);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72b259:{NFSU2_TR(0x72b259);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72b25c:{NFSU2_TR(0x72b25c);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B72b25f:{NFSU2_TR(0x72b25f);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x7ull))));
}
B72b261:{NFSU2_TR(0x72b261);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B72b265:L72b265:{c.instructions+=20;NFSU2_TR(0x72b265);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72b268:{NFSU2_TR(0x72b268);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72b26b:{NFSU2_TR(0x72b26b);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B72b26e:{NFSU2_TR(0x72b26e);
w1(R+0,u8(u32(r1(R+0))&u32(r1(R+12))));
}
B72b270:{NFSU2_TR(0x72b270);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xdull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72b273:{NFSU2_TR(0x72b273);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72b276:{NFSU2_TR(0x72b276);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B72b279:{NFSU2_TR(0x72b279);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B72b27b:{NFSU2_TR(0x72b27b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72b27e:{NFSU2_TR(0x72b27e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72b281:{NFSU2_TR(0x72b281);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B72b284:{NFSU2_TR(0x72b284);
w1(R+0,u8(u32(r1(R+0))&u32(r1(R+12))));
}
B72b286:{NFSU2_TR(0x72b286);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72b289:{NFSU2_TR(0x72b289);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
w4(U+8,u32(u32(u32(0x19ull))&u32(u32(0x1full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,shl<u32>(r4(U+4),u64(r4(U+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B72b28d:{NFSU2_TR(0x72b28d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0xffffffe7ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72b291:{NFSU2_TR(0x72b291);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72b295:{NFSU2_TR(0x72b295);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B72b296:{NFSU2_TR(0x72b296);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x30ull))));
}
B72b299:{NFSU2_TR(0x72b299);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B72b29b:{NFSU2_TR(0x72b29b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b174u);}goto L72b174;}}
}
B72b2a1:L72b2a1:{c.instructions+=1;NFSU2_TR(0x72b2a1);
__builtin_memmove((R+0),(R+12),1);
}
B72b2a3:L72b2a3:{c.instructions+=5;NFSU2_TR(0x72b2a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72b2a4:{NFSU2_TR(0x72b2a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72b2a5:{NFSU2_TR(0x72b2a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B72b2a6:{NFSU2_TR(0x72b2a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72b2a7:{NFSU2_TR(0x72b2a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72b2aa:L72b2aa:{c.instructions+=3;NFSU2_TR(0x72b2aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72b2af:{NFSU2_TR(0x72b2af);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x0ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B72b2b3:{NFSU2_TR(0x72b2b3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b2a1u);}goto L72b2a1;}}
}
B72b2b5:L72b2b5:{c.instructions+=3;NFSU2_TR(0x72b2b5);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b2b7:{NFSU2_TR(0x72b2b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5eull))));
__builtin_memmove((R+28),(U+0),4);
}
B72b2ba:{NFSU2_TR(0x72b2ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B72b2bb:L72b2bb:{c.instructions+=3;NFSU2_TR(0x72b2bb);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b2bd:{NFSU2_TR(0x72b2bd);
__builtin_memmove((R+4),(R+24),4);
}
B72b2bf:{NFSU2_TR(0x72b2bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b2c4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b030u);}goto L72b030;}
}
B72b2c4:L72b2c4:{c.instructions+=4;NFSU2_TR(0x72b2c4);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b2c6:{NFSU2_TR(0x72b2c6);
__builtin_memmove((R+4),(R+24),4);
}
B72b2c8:{NFSU2_TR(0x72b2c8);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b2cc:{NFSU2_TR(0x72b2cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b2d1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b030u);}goto L72b030;}
}
B72b2d1:L72b2d1:{c.instructions+=4;NFSU2_TR(0x72b2d1);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b2d3:{NFSU2_TR(0x72b2d3);
__builtin_memmove((R+4),(R+24),4);
}
B72b2d5:{NFSU2_TR(0x72b2d5);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b2d9:{NFSU2_TR(0x72b2d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b2deull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b030u);}goto L72b030;}
}
B72b2de:L72b2de:{c.instructions+=4;NFSU2_TR(0x72b2de);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b2e0:{NFSU2_TR(0x72b2e0);
__builtin_memmove((R+4),(R+24),4);
}
B72b2e2:{NFSU2_TR(0x72b2e2);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+28)),r1(U+0));
}
B72b2e4:{NFSU2_TR(0x72b2e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b2e9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b030u);}goto L72b030;}
}
B72b2e9:L72b2e9:{c.instructions+=4;NFSU2_TR(0x72b2e9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b2ea:{NFSU2_TR(0x72b2ea);
__builtin_memmove((R+4),(R+24),4);
}
B72b2ec:{NFSU2_TR(0x72b2ec);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b2f0:{NFSU2_TR(0x72b2f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b2f5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b030u);}goto L72b030;}
}
B72b2f5:L72b2f5:{c.instructions+=4;NFSU2_TR(0x72b2f5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B72b2f7:{NFSU2_TR(0x72b2f7);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72b2fa:{NFSU2_TR(0x72b2fa);
__builtin_memmove((R+4),(R+24),4);
}
B72b2fc:{NFSU2_TR(0x72b2fc);
if(r1(R+518)){{goto L72b372;}}
}
B72b2fe:L72b2fe:{c.instructions+=2;NFSU2_TR(0x72b2fe);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b300:{NFSU2_TR(0x72b300);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b305ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b030u);}goto L72b030;}
}
B72b305:L72b305:{c.instructions+=4;NFSU2_TR(0x72b305);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b306:{NFSU2_TR(0x72b306);
__builtin_memmove((R+4),(R+24),4);
}
B72b308:{NFSU2_TR(0x72b308);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72b30b:{NFSU2_TR(0x72b30b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b310ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b030u);}goto L72b030;}
}
B72b310:L72b310:{c.instructions+=4;NFSU2_TR(0x72b310);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b311:{NFSU2_TR(0x72b311);
__builtin_memmove((R+4),(R+24),4);
}
B72b313:{NFSU2_TR(0x72b313);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72b316:{NFSU2_TR(0x72b316);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b31bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b030u);}goto L72b030;}
}
B72b31b:L72b31b:{c.instructions+=4;NFSU2_TR(0x72b31b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b31c:{NFSU2_TR(0x72b31c);
__builtin_memmove((R+4),(R+24),4);
}
B72b31e:{NFSU2_TR(0x72b31e);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72b321:{NFSU2_TR(0x72b321);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b326ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b030u);}goto L72b030;}
}
B72b326:L72b326:{c.instructions+=4;NFSU2_TR(0x72b326);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b328:{NFSU2_TR(0x72b328);
__builtin_memmove((R+4),(R+24),4);
}
B72b32a:{NFSU2_TR(0x72b32a);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72b32d:{NFSU2_TR(0x72b32d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b332ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b030u);}goto L72b030;}
}
B72b332:L72b332:{c.instructions+=4;NFSU2_TR(0x72b332);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b334:{NFSU2_TR(0x72b334);
__builtin_memmove((R+4),(R+24),4);
}
B72b336:{NFSU2_TR(0x72b336);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72b339:{NFSU2_TR(0x72b339);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b33eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b030u);}goto L72b030;}
}
B72b33e:L72b33e:{c.instructions+=4;NFSU2_TR(0x72b33e);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b340:{NFSU2_TR(0x72b340);
__builtin_memmove((R+4),(R+24),4);
}
B72b342:{NFSU2_TR(0x72b342);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xbull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72b345:{NFSU2_TR(0x72b345);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b34aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b030u);}goto L72b030;}
}
B72b34a:L72b34a:{c.instructions+=4;NFSU2_TR(0x72b34a);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72b34d:{NFSU2_TR(0x72b34d);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B72b350:{NFSU2_TR(0x72b350);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B72b352:{NFSU2_TR(0x72b352);
if(r1(R+518)){{goto L72b3dd;}}
}
B72b358:L72b358:{c.instructions+=2;NFSU2_TR(0x72b358);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B72b35a:{NFSU2_TR(0x72b35a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72b368;}}
}
B72b35c:L72b35c:{c.instructions+=2;NFSU2_TR(0x72b35c);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72b360:{NFSU2_TR(0x72b360);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72b368;}}
}
B72b362:L72b362:{c.instructions+=2;NFSU2_TR(0x72b362);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w1(U+4,u8(0x8ull));
s1(u32(r4(U+0)),r1(U+4));
}
B72b366:{NFSU2_TR(0x72b366);
{goto L72b3ad;}
}
B72b368:L72b368:{c.instructions+=3;NFSU2_TR(0x72b368);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w1(U+4,u8(0x7ull));
s1(u32(r4(U+0)),r1(U+4));
}
B72b36c:{NFSU2_TR(0x72b36c);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5ull))));
w1(U+4,u8(0xdull));
s1(u32(r4(U+0)),r1(U+4));
}
B72b370:{NFSU2_TR(0x72b370);
{goto L72b3ad;}
}
B72b372:L72b372:{c.instructions+=2;NFSU2_TR(0x72b372);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b373:{NFSU2_TR(0x72b373);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b378ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b030u);}goto L72b030;}
}
B72b378:L72b378:{c.instructions+=4;NFSU2_TR(0x72b378);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b379:{NFSU2_TR(0x72b379);
__builtin_memmove((R+4),(R+24),4);
}
B72b37b:{NFSU2_TR(0x72b37b);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72b37e:{NFSU2_TR(0x72b37e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b383ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b030u);}goto L72b030;}
}
B72b383:L72b383:{c.instructions+=4;NFSU2_TR(0x72b383);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b384:{NFSU2_TR(0x72b384);
__builtin_memmove((R+4),(R+24),4);
}
B72b386:{NFSU2_TR(0x72b386);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72b389:{NFSU2_TR(0x72b389);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b38eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b030u);}goto L72b030;}
}
B72b38e:L72b38e:{c.instructions+=4;NFSU2_TR(0x72b38e);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b390:{NFSU2_TR(0x72b390);
__builtin_memmove((R+4),(R+24),4);
}
B72b392:{NFSU2_TR(0x72b392);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72b395:{NFSU2_TR(0x72b395);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b39aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b030u);}goto L72b030;}
}
B72b39a:L72b39a:{c.instructions+=4;NFSU2_TR(0x72b39a);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b39c:{NFSU2_TR(0x72b39c);
__builtin_memmove((R+4),(R+24),4);
}
B72b39e:{NFSU2_TR(0x72b39e);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72b3a1:{NFSU2_TR(0x72b3a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b3a6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b030u);}goto L72b030;}
}
B72b3a6:L72b3a6:{c.instructions+=2;NFSU2_TR(0x72b3a6);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72b3a9:{NFSU2_TR(0x72b3a9);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B72b3ad:L72b3ad:{c.instructions+=3;NFSU2_TR(0x72b3ad);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b3ae:{NFSU2_TR(0x72b3ae);
__builtin_memmove((R+4),(R+24),4);
}
B72b3b0:{NFSU2_TR(0x72b3b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b3b5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b030u);}goto L72b030;}
}
B72b3b5:L72b3b5:{c.instructions+=4;NFSU2_TR(0x72b3b5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b3b6:{NFSU2_TR(0x72b3b6);
__builtin_memmove((R+4),(R+24),4);
}
B72b3b8:{NFSU2_TR(0x72b3b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72b3bb:{NFSU2_TR(0x72b3bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b3c0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b030u);}goto L72b030;}
}
B72b3c0:L72b3c0:{c.instructions+=6;NFSU2_TR(0x72b3c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72b3c4:{NFSU2_TR(0x72b3c4);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72b3c7:{NFSU2_TR(0x72b3c7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72b3cb:{NFSU2_TR(0x72b3cb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x30ull))));
}
B72b3ce:{NFSU2_TR(0x72b3ce);
u8 U[22];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
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
B72b3d2:{NFSU2_TR(0x72b3d2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b2bbu);}goto L72b2bb;}}
}
B72b3d8:L72b3d8:{c.instructions+=1;NFSU2_TR(0x72b3d8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b2a1u);}goto L72b2a1;}
}
B72b3dd:L72b3dd:{c.instructions+=2;NFSU2_TR(0x72b3dd);
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
B72b3df:{NFSU2_TR(0x72b3df);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b2a3u);}goto L72b2a3;}
}
B72b3e4:L72b3e4:{c.instructions+=21;NFSU2_TR(0x72b3e4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b3e5:{NFSU2_TR(0x72b3e5);
__builtin_memmove((R+20),(R+16),4);
}
B72b3e7:{NFSU2_TR(0x72b3e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B72b3ea:{NFSU2_TR(0x72b3ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72b3ed:{NFSU2_TR(0x72b3ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72b3f0:{NFSU2_TR(0x72b3f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b3f1:{NFSU2_TR(0x72b3f1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b3f2:{NFSU2_TR(0x72b3f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72b3f5:{NFSU2_TR(0x72b3f5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b3f6:{NFSU2_TR(0x72b3f6);
__builtin_memmove((R+28),(R+4),4);
}
B72b3f8:{NFSU2_TR(0x72b3f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72b3fb:{NFSU2_TR(0x72b3fb);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B72b3ff:{NFSU2_TR(0x72b3ff);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B72b403:{NFSU2_TR(0x72b403);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7c6b88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(s32(s8(r1(U+4)))));
}
B72b40a:{NFSU2_TR(0x72b40a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7c6b98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B72b411:{NFSU2_TR(0x72b411);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72b414:{NFSU2_TR(0x72b414);
__builtin_memmove((R+4),(R+8),4);
}
B72b416:{NFSU2_TR(0x72b416);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x7cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B72b419:{NFSU2_TR(0x72b419);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72b41d:{NFSU2_TR(0x72b41d);
u8 U[12];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B72b424:{NFSU2_TR(0x72b424);
if(r1(R+518)){{goto L72b694;}}
}
B72b42a:L72b42a:{c.instructions+=2;NFSU2_TR(0x72b42a);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72b42e:{NFSU2_TR(0x72b42e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72b694;}}
}
B72b434:L72b434:{c.instructions+=2;NFSU2_TR(0x72b434);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72b438:{NFSU2_TR(0x72b438);
if(r1(R+518)){{goto L72b4dc;}}
}
B72b43e:L72b43e:{c.instructions+=1;NFSU2_TR(0x72b43e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72b442:L72b442:{c.instructions+=3;NFSU2_TR(0x72b442);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b443:{NFSU2_TR(0x72b443);
__builtin_memmove((R+4),(R+28),4);
}
B72b445:{NFSU2_TR(0x72b445);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b44aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b44a:L72b44a:{c.instructions+=5;NFSU2_TR(0x72b44a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72b44d:{NFSU2_TR(0x72b44d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72b450:{NFSU2_TR(0x72b450);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x8ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B72b454:{NFSU2_TR(0x72b454);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),2);
s2(u32(r4(U+4)),r2(U+8));
}
B72b458:{NFSU2_TR(0x72b458);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b442u);}goto L72b442;}}
}
B72b45a:L72b45a:{c.instructions+=3;NFSU2_TR(0x72b45a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72b45d:{NFSU2_TR(0x72b45d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72b460:{NFSU2_TR(0x72b460);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B72b467:L72b467:{c.instructions+=3;NFSU2_TR(0x72b467);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72b46a:{NFSU2_TR(0x72b46a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72b46d:{NFSU2_TR(0x72b46d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B72b474:L72b474:{c.instructions+=3;NFSU2_TR(0x72b474);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b475:{NFSU2_TR(0x72b475);
__builtin_memmove((R+4),(R+28),4);
}
B72b477:{NFSU2_TR(0x72b477);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b47cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b47c:L72b47c:{c.instructions+=5;NFSU2_TR(0x72b47c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72b47f:{NFSU2_TR(0x72b47f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1aull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72b483:{NFSU2_TR(0x72b483);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72b486:{NFSU2_TR(0x72b486);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+4)),r2(U+0));
}
B72b489:{NFSU2_TR(0x72b489);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b474u);}goto L72b474;}}
}
B72b48b:L72b48b:{c.instructions+=3;NFSU2_TR(0x72b48b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x2ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72b48f:{NFSU2_TR(0x72b48f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72b492:{NFSU2_TR(0x72b492);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b467u);}goto L72b467;}}
}
B72b494:L72b494:{c.instructions+=3;NFSU2_TR(0x72b494);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3aull))));
__builtin_memmove((R+0),(U+0),4);
}
B72b497:{NFSU2_TR(0x72b497);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72b49a:{NFSU2_TR(0x72b49a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B72b4a1:L72b4a1:{c.instructions+=2;NFSU2_TR(0x72b4a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72b4a4:{NFSU2_TR(0x72b4a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B72b4ab:L72b4ab:{c.instructions+=3;NFSU2_TR(0x72b4ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72b4ae:{NFSU2_TR(0x72b4ae);
__builtin_memmove((R+4),(R+28),4);
}
B72b4b0:{NFSU2_TR(0x72b4b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b4b5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b4b5:L72b4b5:{c.instructions+=4;NFSU2_TR(0x72b4b5);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+12)),r2(U+0));
}
B72b4b8:{NFSU2_TR(0x72b4b8);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1aull))));
}
B72b4bb:{NFSU2_TR(0x72b4bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72b4be:{NFSU2_TR(0x72b4be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b4abu);}goto L72b4ab;}}
}
B72b4c0:L72b4c0:{c.instructions+=3;NFSU2_TR(0x72b4c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x2ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72b4c4:{NFSU2_TR(0x72b4c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72b4c7:{NFSU2_TR(0x72b4c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b4a1u);}goto L72b4a1;}}
}
B72b4c9:L72b4c9:{c.instructions+=5;NFSU2_TR(0x72b4c9);
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
B72b4cb:{NFSU2_TR(0x72b4cb);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x46ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b4cf:{NFSU2_TR(0x72b4cf);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b4d3:{NFSU2_TR(0x72b4d3);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7aull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b4d7:{NFSU2_TR(0x72b4d7);
{goto L72b7e5;}
}
B72b4dc:L72b4dc:{c.instructions+=3;NFSU2_TR(0x72b4dc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b4dd:{NFSU2_TR(0x72b4dd);
__builtin_memmove((R+4),(R+28),4);
}
B72b4df:{NFSU2_TR(0x72b4df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b4e4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b4e4:L72b4e4:{c.instructions+=4;NFSU2_TR(0x72b4e4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b4e5:{NFSU2_TR(0x72b4e5);
__builtin_memmove((R+4),(R+28),4);
}
B72b4e7:{NFSU2_TR(0x72b4e7);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2eull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b4eb:{NFSU2_TR(0x72b4eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b4f0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b4f0:L72b4f0:{c.instructions+=4;NFSU2_TR(0x72b4f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b4f1:{NFSU2_TR(0x72b4f1);
__builtin_memmove((R+4),(R+28),4);
}
B72b4f3:{NFSU2_TR(0x72b4f3);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b4f7:{NFSU2_TR(0x72b4f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b4fcull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b4fc:L72b4fc:{c.instructions+=4;NFSU2_TR(0x72b4fc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b4fd:{NFSU2_TR(0x72b4fd);
__builtin_memmove((R+4),(R+28),4);
}
B72b4ff:{NFSU2_TR(0x72b4ff);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x62ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b503:{NFSU2_TR(0x72b503);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b508ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b508:L72b508:{c.instructions+=4;NFSU2_TR(0x72b508);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b509:{NFSU2_TR(0x72b509);
__builtin_memmove((R+4),(R+28),4);
}
B72b50b:{NFSU2_TR(0x72b50b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b50f:{NFSU2_TR(0x72b50f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b514ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b514:L72b514:{c.instructions+=4;NFSU2_TR(0x72b514);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b515:{NFSU2_TR(0x72b515);
__builtin_memmove((R+4),(R+28),4);
}
B72b517:{NFSU2_TR(0x72b517);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4aull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b51b:{NFSU2_TR(0x72b51b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b520ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b520:L72b520:{c.instructions+=4;NFSU2_TR(0x72b520);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b521:{NFSU2_TR(0x72b521);
__builtin_memmove((R+4),(R+28),4);
}
B72b523:{NFSU2_TR(0x72b523);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b527:{NFSU2_TR(0x72b527);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b52cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b52c:L72b52c:{c.instructions+=4;NFSU2_TR(0x72b52c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b52d:{NFSU2_TR(0x72b52d);
__builtin_memmove((R+4),(R+28),4);
}
B72b52f:{NFSU2_TR(0x72b52f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x32ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b533:{NFSU2_TR(0x72b533);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b538ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b538:L72b538:{c.instructions+=4;NFSU2_TR(0x72b538);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b539:{NFSU2_TR(0x72b539);
__builtin_memmove((R+4),(R+28),4);
}
B72b53b:{NFSU2_TR(0x72b53b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b53f:{NFSU2_TR(0x72b53f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b544ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b544:L72b544:{c.instructions+=4;NFSU2_TR(0x72b544);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b545:{NFSU2_TR(0x72b545);
__builtin_memmove((R+4),(R+28),4);
}
B72b547:{NFSU2_TR(0x72b547);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x66ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b54b:{NFSU2_TR(0x72b54b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b550ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b550:L72b550:{c.instructions+=4;NFSU2_TR(0x72b550);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b551:{NFSU2_TR(0x72b551);
__builtin_memmove((R+4),(R+28),4);
}
B72b553:{NFSU2_TR(0x72b553);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b557:{NFSU2_TR(0x72b557);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b55cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b55c:L72b55c:{c.instructions+=4;NFSU2_TR(0x72b55c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b55d:{NFSU2_TR(0x72b55d);
__builtin_memmove((R+4),(R+28),4);
}
B72b55f:{NFSU2_TR(0x72b55f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4eull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b563:{NFSU2_TR(0x72b563);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b568ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b568:L72b568:{c.instructions+=4;NFSU2_TR(0x72b568);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b569:{NFSU2_TR(0x72b569);
__builtin_memmove((R+4),(R+28),4);
}
B72b56b:{NFSU2_TR(0x72b56b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b56f:{NFSU2_TR(0x72b56f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b574ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b574:L72b574:{c.instructions+=4;NFSU2_TR(0x72b574);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b575:{NFSU2_TR(0x72b575);
__builtin_memmove((R+4),(R+28),4);
}
B72b577:{NFSU2_TR(0x72b577);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x36ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b57b:{NFSU2_TR(0x72b57b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b580ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b580:L72b580:{c.instructions+=4;NFSU2_TR(0x72b580);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b581:{NFSU2_TR(0x72b581);
__builtin_memmove((R+4),(R+28),4);
}
B72b583:{NFSU2_TR(0x72b583);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b587:{NFSU2_TR(0x72b587);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b58cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b58c:L72b58c:{c.instructions+=4;NFSU2_TR(0x72b58c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b58d:{NFSU2_TR(0x72b58d);
__builtin_memmove((R+4),(R+28),4);
}
B72b58f:{NFSU2_TR(0x72b58f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6aull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b593:{NFSU2_TR(0x72b593);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b598ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b598:L72b598:{c.instructions+=4;NFSU2_TR(0x72b598);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b599:{NFSU2_TR(0x72b599);
__builtin_memmove((R+4),(R+28),4);
}
B72b59b:{NFSU2_TR(0x72b59b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b59f:{NFSU2_TR(0x72b59f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b5a4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b5a4:L72b5a4:{c.instructions+=4;NFSU2_TR(0x72b5a4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b5a5:{NFSU2_TR(0x72b5a5);
__builtin_memmove((R+4),(R+28),4);
}
B72b5a7:{NFSU2_TR(0x72b5a7);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x52ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b5ab:{NFSU2_TR(0x72b5ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b5b0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b5b0:L72b5b0:{c.instructions+=5;NFSU2_TR(0x72b5b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72b5b3:{NFSU2_TR(0x72b5b3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b5b4:{NFSU2_TR(0x72b5b4);
__builtin_memmove((R+4),(R+28),4);
}
B72b5b6:{NFSU2_TR(0x72b5b6);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b5ba:{NFSU2_TR(0x72b5ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b5bfull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b5bf:L72b5bf:{c.instructions+=4;NFSU2_TR(0x72b5bf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b5c0:{NFSU2_TR(0x72b5c0);
__builtin_memmove((R+4),(R+28),4);
}
B72b5c2:{NFSU2_TR(0x72b5c2);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3aull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b5c6:{NFSU2_TR(0x72b5c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b5cbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b5cb:L72b5cb:{c.instructions+=4;NFSU2_TR(0x72b5cb);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b5cf:{NFSU2_TR(0x72b5cf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b5d0:{NFSU2_TR(0x72b5d0);
__builtin_memmove((R+4),(R+28),4);
}
B72b5d2:{NFSU2_TR(0x72b5d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b5d7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b5d7:L72b5d7:{c.instructions+=4;NFSU2_TR(0x72b5d7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b5d8:{NFSU2_TR(0x72b5d8);
__builtin_memmove((R+4),(R+28),4);
}
B72b5da:{NFSU2_TR(0x72b5da);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6eull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b5de:{NFSU2_TR(0x72b5de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b5e3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b5e3:L72b5e3:{c.instructions+=4;NFSU2_TR(0x72b5e3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b5e4:{NFSU2_TR(0x72b5e4);
__builtin_memmove((R+4),(R+28),4);
}
B72b5e6:{NFSU2_TR(0x72b5e6);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b5ea:{NFSU2_TR(0x72b5ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b5efull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b5ef:L72b5ef:{c.instructions+=4;NFSU2_TR(0x72b5ef);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b5f0:{NFSU2_TR(0x72b5f0);
__builtin_memmove((R+4),(R+28),4);
}
B72b5f2:{NFSU2_TR(0x72b5f2);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x56ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b5f6:{NFSU2_TR(0x72b5f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b5fbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b5fb:L72b5fb:{c.instructions+=4;NFSU2_TR(0x72b5fb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b5fc:{NFSU2_TR(0x72b5fc);
__builtin_memmove((R+4),(R+28),4);
}
B72b5fe:{NFSU2_TR(0x72b5fe);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b602:{NFSU2_TR(0x72b602);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b607ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b607:L72b607:{c.instructions+=4;NFSU2_TR(0x72b607);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b608:{NFSU2_TR(0x72b608);
__builtin_memmove((R+4),(R+28),4);
}
B72b60a:{NFSU2_TR(0x72b60a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3eull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b60e:{NFSU2_TR(0x72b60e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b613ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b613:L72b613:{c.instructions+=4;NFSU2_TR(0x72b613);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b614:{NFSU2_TR(0x72b614);
__builtin_memmove((R+4),(R+28),4);
}
B72b616:{NFSU2_TR(0x72b616);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b61a:{NFSU2_TR(0x72b61a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b61full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b61f:L72b61f:{c.instructions+=4;NFSU2_TR(0x72b61f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b620:{NFSU2_TR(0x72b620);
__builtin_memmove((R+4),(R+28),4);
}
B72b622:{NFSU2_TR(0x72b622);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x72ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b626:{NFSU2_TR(0x72b626);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b62bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b62b:L72b62b:{c.instructions+=4;NFSU2_TR(0x72b62b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b62c:{NFSU2_TR(0x72b62c);
__builtin_memmove((R+4),(R+28),4);
}
B72b62e:{NFSU2_TR(0x72b62e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b632:{NFSU2_TR(0x72b632);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b637ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b637:L72b637:{c.instructions+=4;NFSU2_TR(0x72b637);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b638:{NFSU2_TR(0x72b638);
__builtin_memmove((R+4),(R+28),4);
}
B72b63a:{NFSU2_TR(0x72b63a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5aull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b63e:{NFSU2_TR(0x72b63e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b643ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b643:L72b643:{c.instructions+=4;NFSU2_TR(0x72b643);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b644:{NFSU2_TR(0x72b644);
__builtin_memmove((R+4),(R+28),4);
}
B72b646:{NFSU2_TR(0x72b646);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b64a:{NFSU2_TR(0x72b64a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b64full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b64f:L72b64f:{c.instructions+=4;NFSU2_TR(0x72b64f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b650:{NFSU2_TR(0x72b650);
__builtin_memmove((R+4),(R+28),4);
}
B72b652:{NFSU2_TR(0x72b652);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b656:{NFSU2_TR(0x72b656);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b65bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b65b:L72b65b:{c.instructions+=4;NFSU2_TR(0x72b65b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b65c:{NFSU2_TR(0x72b65c);
__builtin_memmove((R+4),(R+28),4);
}
B72b65e:{NFSU2_TR(0x72b65e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b662:{NFSU2_TR(0x72b662);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b667ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b667:L72b667:{c.instructions+=4;NFSU2_TR(0x72b667);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b668:{NFSU2_TR(0x72b668);
__builtin_memmove((R+4),(R+28),4);
}
B72b66a:{NFSU2_TR(0x72b66a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x76ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b66e:{NFSU2_TR(0x72b66e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b673ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b673:L72b673:{c.instructions+=4;NFSU2_TR(0x72b673);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b674:{NFSU2_TR(0x72b674);
__builtin_memmove((R+4),(R+28),4);
}
B72b676:{NFSU2_TR(0x72b676);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b67a:{NFSU2_TR(0x72b67a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b67full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b67f:L72b67f:{c.instructions+=4;NFSU2_TR(0x72b67f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b680:{NFSU2_TR(0x72b680);
__builtin_memmove((R+4),(R+28),4);
}
B72b682:{NFSU2_TR(0x72b682);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5eull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b686:{NFSU2_TR(0x72b686);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b68bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b68b:L72b68b:{c.instructions+=2;NFSU2_TR(0x72b68b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b68f:{NFSU2_TR(0x72b68f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b4c9u);}goto L72b4c9;}
}
B72b694:L72b694:{c.instructions+=5;NFSU2_TR(0x72b694);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72b697:{NFSU2_TR(0x72b697);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B72b69b:{NFSU2_TR(0x72b69b);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B72b69e:{NFSU2_TR(0x72b69e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72b6a1:{NFSU2_TR(0x72b6a1);
if(r1(R+518)){{goto L72b6a9;}}
}
B72b6a3:L72b6a3:{c.instructions+=2;NFSU2_TR(0x72b6a3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72b6a7:{NFSU2_TR(0x72b6a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72b6f3;}}
}
B72b6a9:L72b6a9:{c.instructions+=3;NFSU2_TR(0x72b6a9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b6aa:{NFSU2_TR(0x72b6aa);
__builtin_memmove((R+4),(R+28),4);
}
B72b6ac:{NFSU2_TR(0x72b6ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b6b1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b6b1:L72b6b1:{c.instructions+=4;NFSU2_TR(0x72b6b1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b6b2:{NFSU2_TR(0x72b6b2);
__builtin_memmove((R+4),(R+28),4);
}
B72b6b4:{NFSU2_TR(0x72b6b4);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+24)),r2(U+0));
}
B72b6b7:{NFSU2_TR(0x72b6b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b6bcull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b6bc:L72b6bc:{c.instructions+=4;NFSU2_TR(0x72b6bc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b6bd:{NFSU2_TR(0x72b6bd);
__builtin_memmove((R+4),(R+28),4);
}
B72b6bf:{NFSU2_TR(0x72b6bf);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b6c3:{NFSU2_TR(0x72b6c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b6c8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b6c8:L72b6c8:{c.instructions+=4;NFSU2_TR(0x72b6c8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b6c9:{NFSU2_TR(0x72b6c9);
__builtin_memmove((R+4),(R+28),4);
}
B72b6cb:{NFSU2_TR(0x72b6cb);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b6cf:{NFSU2_TR(0x72b6cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b6d4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b6d4:L72b6d4:{c.instructions+=4;NFSU2_TR(0x72b6d4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b6d5:{NFSU2_TR(0x72b6d5);
__builtin_memmove((R+4),(R+28),4);
}
B72b6d7:{NFSU2_TR(0x72b6d7);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b6db:{NFSU2_TR(0x72b6db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b6e0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b6e0:L72b6e0:{c.instructions+=4;NFSU2_TR(0x72b6e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b6e1:{NFSU2_TR(0x72b6e1);
__builtin_memmove((R+4),(R+28),4);
}
B72b6e3:{NFSU2_TR(0x72b6e3);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b6e7:{NFSU2_TR(0x72b6e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b6ecull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b6ec:L72b6ec:{c.instructions+=2;NFSU2_TR(0x72b6ec);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b6f0:{NFSU2_TR(0x72b6f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72b6f3:L72b6f3:{c.instructions+=2;NFSU2_TR(0x72b6f3);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72b6f7:{NFSU2_TR(0x72b6f7);
if(r1(R+518)){{goto L72b6ff;}}
}
B72b6f9:L72b6f9:{c.instructions+=2;NFSU2_TR(0x72b6f9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72b6fd:{NFSU2_TR(0x72b6fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72b73e;}}
}
B72b6ff:L72b6ff:{c.instructions+=3;NFSU2_TR(0x72b6ff);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b700:{NFSU2_TR(0x72b700);
__builtin_memmove((R+4),(R+28),4);
}
B72b702:{NFSU2_TR(0x72b702);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b707ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b707:L72b707:{c.instructions+=4;NFSU2_TR(0x72b707);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b708:{NFSU2_TR(0x72b708);
__builtin_memmove((R+4),(R+28),4);
}
B72b70a:{NFSU2_TR(0x72b70a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b70e:{NFSU2_TR(0x72b70e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b713ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b713:L72b713:{c.instructions+=4;NFSU2_TR(0x72b713);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b714:{NFSU2_TR(0x72b714);
__builtin_memmove((R+4),(R+28),4);
}
B72b716:{NFSU2_TR(0x72b716);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b71a:{NFSU2_TR(0x72b71a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b71full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b71f:L72b71f:{c.instructions+=4;NFSU2_TR(0x72b71f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b720:{NFSU2_TR(0x72b720);
__builtin_memmove((R+4),(R+28),4);
}
B72b722:{NFSU2_TR(0x72b722);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b726:{NFSU2_TR(0x72b726);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b72bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b72b:L72b72b:{c.instructions+=4;NFSU2_TR(0x72b72b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b72c:{NFSU2_TR(0x72b72c);
__builtin_memmove((R+4),(R+28),4);
}
B72b72e:{NFSU2_TR(0x72b72e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b732:{NFSU2_TR(0x72b732);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b737ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b737:L72b737:{c.instructions+=2;NFSU2_TR(0x72b737);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b73b:{NFSU2_TR(0x72b73b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72b73e:L72b73e:{c.instructions+=2;NFSU2_TR(0x72b73e);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72b742:{NFSU2_TR(0x72b742);
if(r1(R+518)){{goto L72b74a;}}
}
B72b744:L72b744:{c.instructions+=2;NFSU2_TR(0x72b744);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72b748:{NFSU2_TR(0x72b748);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72b78e;}}
}
B72b74a:L72b74a:{c.instructions+=3;NFSU2_TR(0x72b74a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72b74d:{NFSU2_TR(0x72b74d);
__builtin_memmove((R+4),(R+28),4);
}
B72b74f:{NFSU2_TR(0x72b74f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b754ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b754:L72b754:{c.instructions+=5;NFSU2_TR(0x72b754);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72b757:{NFSU2_TR(0x72b757);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b758:{NFSU2_TR(0x72b758);
__builtin_memmove((R+4),(R+28),4);
}
B72b75a:{NFSU2_TR(0x72b75a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b75e:{NFSU2_TR(0x72b75e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b763ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b763:L72b763:{c.instructions+=4;NFSU2_TR(0x72b763);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b764:{NFSU2_TR(0x72b764);
__builtin_memmove((R+4),(R+28),4);
}
B72b766:{NFSU2_TR(0x72b766);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b76a:{NFSU2_TR(0x72b76a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b76full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b76f:L72b76f:{c.instructions+=4;NFSU2_TR(0x72b76f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b770:{NFSU2_TR(0x72b770);
__builtin_memmove((R+4),(R+28),4);
}
B72b772:{NFSU2_TR(0x72b772);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1aull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b776:{NFSU2_TR(0x72b776);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b77bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b77b:L72b77b:{c.instructions+=4;NFSU2_TR(0x72b77b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b77c:{NFSU2_TR(0x72b77c);
__builtin_memmove((R+4),(R+28),4);
}
B72b77e:{NFSU2_TR(0x72b77e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b782:{NFSU2_TR(0x72b782);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b787ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b787:L72b787:{c.instructions+=2;NFSU2_TR(0x72b787);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1eull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b78b:{NFSU2_TR(0x72b78b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72b78e:L72b78e:{c.instructions+=2;NFSU2_TR(0x72b78e);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72b792:{NFSU2_TR(0x72b792);
if(r1(R+518)){{goto L72b79a;}}
}
B72b794:L72b794:{c.instructions+=2;NFSU2_TR(0x72b794);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72b798:{NFSU2_TR(0x72b798);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72b7db;}}
}
B72b79a:L72b79a:{c.instructions+=3;NFSU2_TR(0x72b79a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72b79d:{NFSU2_TR(0x72b79d);
__builtin_memmove((R+4),(R+28),4);
}
B72b79f:{NFSU2_TR(0x72b79f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b7a4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b7a4:L72b7a4:{c.instructions+=5;NFSU2_TR(0x72b7a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72b7a7:{NFSU2_TR(0x72b7a7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b7a8:{NFSU2_TR(0x72b7a8);
__builtin_memmove((R+4),(R+28),4);
}
B72b7aa:{NFSU2_TR(0x72b7aa);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b7ae:{NFSU2_TR(0x72b7ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b7b3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b7b3:L72b7b3:{c.instructions+=4;NFSU2_TR(0x72b7b3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b7b4:{NFSU2_TR(0x72b7b4);
__builtin_memmove((R+4),(R+28),4);
}
B72b7b6:{NFSU2_TR(0x72b7b6);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b7ba:{NFSU2_TR(0x72b7ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b7bfull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b7bf:L72b7bf:{c.instructions+=4;NFSU2_TR(0x72b7bf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b7c0:{NFSU2_TR(0x72b7c0);
__builtin_memmove((R+4),(R+28),4);
}
B72b7c2:{NFSU2_TR(0x72b7c2);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b7c6:{NFSU2_TR(0x72b7c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b7cbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b7cb:L72b7cb:{c.instructions+=4;NFSU2_TR(0x72b7cb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b7cc:{NFSU2_TR(0x72b7cc);
__builtin_memmove((R+4),(R+28),4);
}
B72b7ce:{NFSU2_TR(0x72b7ce);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x26ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b7d2:{NFSU2_TR(0x72b7d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b7d7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b7d7:L72b7d7:{c.instructions+=1;NFSU2_TR(0x72b7d7);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72b7db:L72b7db:{c.instructions+=2;NFSU2_TR(0x72b7db);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0x0ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B72b7e0:{NFSU2_TR(0x72b7e0);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0x0ull))));
s2(u32(r4(U+0)),r2(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B72b7e5:L72b7e5:{c.instructions+=5;NFSU2_TR(0x72b7e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72b7e6:{NFSU2_TR(0x72b7e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72b7e7:{NFSU2_TR(0x72b7e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72b7e8:{NFSU2_TR(0x72b7e8);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B72b7e9:{NFSU2_TR(0x72b7e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72b7ec:L72b7ec:{c.instructions+=19;NFSU2_TR(0x72b7ec);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b7ed:{NFSU2_TR(0x72b7ed);
__builtin_memmove((R+20),(R+16),4);
}
B72b7ef:{NFSU2_TR(0x72b7ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B72b7f2:{NFSU2_TR(0x72b7f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72b7f5:{NFSU2_TR(0x72b7f5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b7f6:{NFSU2_TR(0x72b7f6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b7f7:{NFSU2_TR(0x72b7f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72b7fa:{NFSU2_TR(0x72b7fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72b7fd:{NFSU2_TR(0x72b7fd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b7fe:{NFSU2_TR(0x72b7fe);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B72b802:{NFSU2_TR(0x72b802);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72b805:{NFSU2_TR(0x72b805);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72b808:{NFSU2_TR(0x72b808);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B72b80c:{NFSU2_TR(0x72b80c);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B72b810:{NFSU2_TR(0x72b810);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B72b812:{NFSU2_TR(0x72b812);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B72b814:{NFSU2_TR(0x72b814);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72b818:{NFSU2_TR(0x72b818);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72b81b:{NFSU2_TR(0x72b81b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72b83d;}}
}
B72b81d:L72b81d:{c.instructions+=3;NFSU2_TR(0x72b81d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B72b820:{NFSU2_TR(0x72b820);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B72b822:{NFSU2_TR(0x72b822);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72b82d;}}
}
B72b824:L72b824:{c.instructions+=2;NFSU2_TR(0x72b824);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B72b82b:{NFSU2_TR(0x72b82b);
{goto L72b840;}
}
B72b82d:L72b82d:{c.instructions+=8;NFSU2_TR(0x72b82d);
w1(R+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
}
B72b82f:{NFSU2_TR(0x72b82f);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B72b831:{NFSU2_TR(0x72b831);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B72b833:{NFSU2_TR(0x72b833);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffeull))));
}
B72b836:{NFSU2_TR(0x72b836);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B72b837:{NFSU2_TR(0x72b837);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B72b838:{NFSU2_TR(0x72b838);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72b83b:{NFSU2_TR(0x72b83b);
{goto L72b840;}
}
B72b83d:L72b83d:{c.instructions+=1;NFSU2_TR(0x72b83d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72b840:L72b840:{c.instructions+=2;NFSU2_TR(0x72b840);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72b843:{NFSU2_TR(0x72b843);
if(r1(R+518)){{goto L72b84a;}}
}
B72b845:L72b845:{c.instructions+=2;NFSU2_TR(0x72b845);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72b848:{NFSU2_TR(0x72b848);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72b854;}}
}
B72b84a:L72b84a:{c.instructions+=2;NFSU2_TR(0x72b84a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72b84e:{NFSU2_TR(0x72b84e);
if(r1(R+518)){{goto L72b8de;}}
}
B72b854:L72b854:{c.instructions+=2;NFSU2_TR(0x72b854);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x190ull))));
}
B72b85a:{NFSU2_TR(0x72b85a);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L72b888;}}
}
B72b85c:L72b85c:{c.instructions+=18;NFSU2_TR(0x72b85c);
__builtin_memmove((R+0),(R+24),4);
}
B72b85e:{NFSU2_TR(0x72b85e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B72b861:{NFSU2_TR(0x72b861);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b863:{NFSU2_TR(0x72b863);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B72b865:{NFSU2_TR(0x72b865);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72b866:{NFSU2_TR(0x72b866);
u8 U[56];
w8(U+0,u64(r4(R+28)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x72b866);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x72b866);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B72b868:{NFSU2_TR(0x72b868);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x13ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72b86b:{NFSU2_TR(0x72b86b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72b86e:{NFSU2_TR(0x72b86e);
__builtin_memmove((R+0),(R+24),4);
}
B72b870:{NFSU2_TR(0x72b870);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B72b873:{NFSU2_TR(0x72b873);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B72b876:{NFSU2_TR(0x72b876);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72b879:{NFSU2_TR(0x72b879);
__builtin_memmove((R+0),(R+24),4);
}
B72b87b:{NFSU2_TR(0x72b87b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B72b87e:{NFSU2_TR(0x72b87e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72b881:{NFSU2_TR(0x72b881);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72b884:{NFSU2_TR(0x72b884);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B72b886:{NFSU2_TR(0x72b886);
{goto L72b8de;}
}
B72b888:L72b888:{c.instructions+=2;NFSU2_TR(0x72b888);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x1f4ull))));
}
B72b88e:{NFSU2_TR(0x72b88e);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L72b8b6;}}
}
B72b890:L72b890:{c.instructions+=15;NFSU2_TR(0x72b890);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffe70ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72b896:{NFSU2_TR(0x72b896);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B72b899:{NFSU2_TR(0x72b899);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B72b89b:{NFSU2_TR(0x72b89b);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b89d:{NFSU2_TR(0x72b89d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72b89e:{NFSU2_TR(0x72b89e);
u8 U[56];
w8(U+0,u64(r4(R+28)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x72b89e);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x72b89e);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B72b8a0:{NFSU2_TR(0x72b8a0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x13ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72b8a3:{NFSU2_TR(0x72b8a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72b8a6:{NFSU2_TR(0x72b8a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72b8a9:{NFSU2_TR(0x72b8a9);
__builtin_memmove((R+0),(R+24),4);
}
B72b8ab:{NFSU2_TR(0x72b8ab);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B72b8ae:{NFSU2_TR(0x72b8ae);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B72b8b0:{NFSU2_TR(0x72b8b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72b8b3:{NFSU2_TR(0x72b8b3);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B72b8b4:{NFSU2_TR(0x72b8b4);
{goto L72b8db;}
}
B72b8b6:L72b8b6:{c.instructions+=2;NFSU2_TR(0x72b8b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x200ull))));
}
B72b8bc:{NFSU2_TR(0x72b8bc);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L72b8de;}}
}
B72b8be:L72b8be:{c.instructions+=11;NFSU2_TR(0x72b8be);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b8c0:{NFSU2_TR(0x72b8c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72b8c1:{NFSU2_TR(0x72b8c1);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B72b8c3:{NFSU2_TR(0x72b8c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffe0cull))));
__builtin_memmove((R+0),(U+0),4);
}
B72b8c9:{NFSU2_TR(0x72b8c9);
u8 U[56];
w8(U+0,u64(r4(R+28)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x72b8c9);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x72b8c9);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B72b8cb:{NFSU2_TR(0x72b8cb);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b8cd:{NFSU2_TR(0x72b8cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72b8d0:{NFSU2_TR(0x72b8d0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x13ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B72b8d4:{NFSU2_TR(0x72b8d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72b8d7:{NFSU2_TR(0x72b8d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72b8da:{NFSU2_TR(0x72b8da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72b8db:L72b8db:{c.instructions+=1;NFSU2_TR(0x72b8db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72b8de:L72b8de:{c.instructions+=2;NFSU2_TR(0x72b8de);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72b8e2:{NFSU2_TR(0x72b8e2);
if(r1(R+518)){{goto L72b8ea;}}
}
B72b8e4:L72b8e4:{c.instructions+=2;NFSU2_TR(0x72b8e4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72b8e8:{NFSU2_TR(0x72b8e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72b963;}}
}
B72b8ea:L72b8ea:{c.instructions+=2;NFSU2_TR(0x72b8ea);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72b8ee:{NFSU2_TR(0x72b8ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72b963;}}
}
B72b8f0:L72b8f0:{c.instructions+=4;NFSU2_TR(0x72b8f0);
w4(R+24,shr<u32>(r4(R+24),u64(u32(0x1ull))));
}
B72b8f2:{NFSU2_TR(0x72b8f2);
__builtin_memmove((R+0),(R+24),4);
}
B72b8f4:{NFSU2_TR(0x72b8f4);
w1(R+512,u8((r4(R+0))<(u32(0xb4ull))));
}
B72b8f9:{NFSU2_TR(0x72b8f9);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L72b918;}}
}
B72b8fb:L72b8fb:{c.instructions+=14;NFSU2_TR(0x72b8fb);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b8fd:{NFSU2_TR(0x72b8fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72b8fe:{NFSU2_TR(0x72b8fe);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B72b900:{NFSU2_TR(0x72b900);
u8 U[56];
w8(U+0,u64(r4(R+24)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x72b900);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x72b900);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B72b902:{NFSU2_TR(0x72b902);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b904:{NFSU2_TR(0x72b904);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72b905:{NFSU2_TR(0x72b905);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b907:{NFSU2_TR(0x72b907);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72b90a:{NFSU2_TR(0x72b90a);
__builtin_memmove((R+0),(R+8),4);
}
B72b90c:{NFSU2_TR(0x72b90c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B72b90e:{NFSU2_TR(0x72b90e);
u8 U[56];
w8(U+0,u64(r4(R+24)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x72b90e);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x72b90e);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B72b910:{NFSU2_TR(0x72b910);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72b913:{NFSU2_TR(0x72b913);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72b916:{NFSU2_TR(0x72b916);
{goto L72b95c;}
}
B72b918:L72b918:{c.instructions+=2;NFSU2_TR(0x72b918);
w1(R+512,u8((r4(R+0))<(u32(0xf4ull))));
}
B72b91d:{NFSU2_TR(0x72b91d);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L72b93e;}}
}
B72b91f:L72b91f:{c.instructions+=11;NFSU2_TR(0x72b91f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B72b922:{NFSU2_TR(0x72b922);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B72b925:{NFSU2_TR(0x72b925);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ull))));
}
B72b928:{NFSU2_TR(0x72b928);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72b92b:{NFSU2_TR(0x72b92b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+8),(U+0),4);
}
B72b92e:{NFSU2_TR(0x72b92e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B72b931:{NFSU2_TR(0x72b931);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ull))));
}
B72b934:{NFSU2_TR(0x72b934);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B72b937:{NFSU2_TR(0x72b937);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72b93a:{NFSU2_TR(0x72b93a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b93c:{NFSU2_TR(0x72b93c);
{goto L72b959;}
}
B72b93e:L72b93e:{c.instructions+=2;NFSU2_TR(0x72b93e);
w1(R+512,u8((r4(R+0))<(u32(0xffull))));
}
B72b943:{NFSU2_TR(0x72b943);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L72b963;}}
}
B72b945:L72b945:{c.instructions+=8;NFSU2_TR(0x72b945);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b947:{NFSU2_TR(0x72b947);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72b948:{NFSU2_TR(0x72b948);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffffff0cull))));
}
B72b94d:{NFSU2_TR(0x72b94d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B72b94f:{NFSU2_TR(0x72b94f);
u8 U[56];
w8(U+0,u64(r4(R+24)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x72b94f);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x72b94f);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B72b951:{NFSU2_TR(0x72b951);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72b954:{NFSU2_TR(0x72b954);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b956:{NFSU2_TR(0x72b956);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72b959:L72b959:{c.instructions+=1;NFSU2_TR(0x72b959);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72b95c:L72b95c:{c.instructions+=3;NFSU2_TR(0x72b95c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72b95f:{NFSU2_TR(0x72b95f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x13ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72b962:{NFSU2_TR(0x72b962);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72b963:L72b963:{c.instructions+=4;NFSU2_TR(0x72b963);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72b966:{NFSU2_TR(0x72b966);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b968:{NFSU2_TR(0x72b968);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B72b96a:{NFSU2_TR(0x72b96a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72b96b:L72b96b:{c.instructions+=1;NFSU2_TR(0x72b96b);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L72b96d;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b96bu);}goto L72b96b;}
}
B72b96d:L72b96d:{c.instructions+=7;NFSU2_TR(0x72b96d);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B72b96e:{NFSU2_TR(0x72b96e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72b971:{NFSU2_TR(0x72b971);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B72b974:{NFSU2_TR(0x72b974);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B72b976:{NFSU2_TR(0x72b976);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B72b978:{NFSU2_TR(0x72b978);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72b97b:{NFSU2_TR(0x72b97b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7c6ba8ull))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B72b982:L72b982:{c.instructions+=3;NFSU2_TR(0x72b982);
u8 U[11];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((U+9),(U+8),1);
w1(R+512,u8((r1(U+9))<(r1(R+12))));
w1(U+10,u8(u32(r1(U+9))-u32(r1(R+12))));
w1(R+518,u8((r1(U+10))==(u8(0x0ull))));
}
B72b985:{NFSU2_TR(0x72b985);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72b988:{NFSU2_TR(0x72b988);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L72b9ae;}}
}
B72b98a:L72b98a:{c.instructions+=3;NFSU2_TR(0x72b98a);
u8 U[20];
w4(U+0,u32(u32(u32(0xffffffe8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B72b98e:{NFSU2_TR(0x72b98e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72b991:{NFSU2_TR(0x72b991);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b996ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b07bu);}goto L72b07b;}
}
B72b996:L72b996:{c.instructions+=8;NFSU2_TR(0x72b996);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72b999:{NFSU2_TR(0x72b999);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72b99c:{NFSU2_TR(0x72b99c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72b99f:{NFSU2_TR(0x72b99f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72b9a2:{NFSU2_TR(0x72b9a2);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),1);
s1(u32(r4(U+4)),r1(U+8));
}
B72b9a5:{NFSU2_TR(0x72b9a5);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B72b9a9:{NFSU2_TR(0x72b9a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B72b9ac:{NFSU2_TR(0x72b9ac);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b98au);}goto L72b98a;}}
}
B72b9ae:L72b9ae:{c.instructions+=3;NFSU2_TR(0x72b9ae);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B72b9af:{NFSU2_TR(0x72b9af);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B72b9b2:{NFSU2_TR(0x72b9b2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b982u);}goto L72b982;}}
}
B72b9b4:L72b9b4:{c.instructions+=5;NFSU2_TR(0x72b9b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72b9b5:{NFSU2_TR(0x72b9b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72b9b6:{NFSU2_TR(0x72b9b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72b9b7:{NFSU2_TR(0x72b9b7);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B72b9b8:{NFSU2_TR(0x72b9b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72b9bb:L72b9bb:{c.instructions+=20;NFSU2_TR(0x72b9bb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b9bc:{NFSU2_TR(0x72b9bc);
__builtin_memmove((R+20),(R+16),4);
}
B72b9be:{NFSU2_TR(0x72b9be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x3cull))));
}
B72b9c1:{NFSU2_TR(0x72b9c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72b9c4:{NFSU2_TR(0x72b9c4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b9c5:{NFSU2_TR(0x72b9c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72b9c8:{NFSU2_TR(0x72b9c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72b9cc:{NFSU2_TR(0x72b9cc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b9cd:{NFSU2_TR(0x72b9cd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b9ce:{NFSU2_TR(0x72b9ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72b9d1:{NFSU2_TR(0x72b9d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72b9d4:{NFSU2_TR(0x72b9d4);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B72b9d8:{NFSU2_TR(0x72b9d8);
__builtin_memmove((R+0),(R+8),4);
}
B72b9da:{NFSU2_TR(0x72b9da);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x7cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B72b9dd:{NFSU2_TR(0x72b9dd);
u8 U[12];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B72b9e4:{NFSU2_TR(0x72b9e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72b9e7:{NFSU2_TR(0x72b9e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b9e8:{NFSU2_TR(0x72b9e8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b9e9:{NFSU2_TR(0x72b9e9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72b9ea:{NFSU2_TR(0x72b9ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72b9efull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b7ecu);}goto L72b7ec;}
}
B72b9ef:L72b9ef:{c.instructions+=2;NFSU2_TR(0x72b9ef);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72b9f3:{NFSU2_TR(0x72b9f3);
if(r1(R+518)){{goto L72ba8a;}}
}
B72b9f9:L72b9f9:{c.instructions+=2;NFSU2_TR(0x72b9f9);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72b9fd:{NFSU2_TR(0x72b9fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72ba8a;}}
}
B72ba03:L72ba03:{c.instructions+=2;NFSU2_TR(0x72ba03);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72ba07:{NFSU2_TR(0x72ba07);
if(r1(R+518)){{goto L72ba55;}}
}
B72ba09:L72ba09:{c.instructions+=3;NFSU2_TR(0x72ba09);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ba0b:{NFSU2_TR(0x72ba0b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B72ba0d:{NFSU2_TR(0x72ba0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72ba0e:L72ba0e:{c.instructions+=5;NFSU2_TR(0x72ba0e);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffc4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w2(R+4,u16(r1(U+12)));
}
B72ba14:{NFSU2_TR(0x72ba14);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),2);
s2(u32(r4(U+4)),r2(U+8));
}
B72ba18:{NFSU2_TR(0x72ba18);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B72ba19:{NFSU2_TR(0x72ba19);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B72ba1b:{NFSU2_TR(0x72ba1b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72ba0eu);}goto L72ba0e;}}
}
B72ba1d:L72ba1d:{c.instructions+=2;NFSU2_TR(0x72ba1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72ba20:{NFSU2_TR(0x72ba20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B72ba27:L72ba27:{c.instructions+=3;NFSU2_TR(0x72ba27);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ba29:{NFSU2_TR(0x72ba29);
__builtin_memmove((R+0),(R+4),4);
}
B72ba2b:{NFSU2_TR(0x72ba2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72ba2c:L72ba2c:{c.instructions+=6;NFSU2_TR(0x72ba2c);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffc4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w2(R+12,u16(r1(U+12)));
}
B72ba32:{NFSU2_TR(0x72ba32);
u8 U[2];
__builtin_memmove((U+0),(R+12),2);
s2(u32(r4(R+0)),r2(U+0));
}
B72ba35:{NFSU2_TR(0x72ba35);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B72ba36:{NFSU2_TR(0x72ba36);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1aull))));
}
B72ba39:{NFSU2_TR(0x72ba39);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B72ba3a:{NFSU2_TR(0x72ba3a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72ba2cu);}goto L72ba2c;}}
}
B72ba3c:L72ba3c:{c.instructions+=4;NFSU2_TR(0x72ba3c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B72ba3d:{NFSU2_TR(0x72ba3d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B72ba3e:{NFSU2_TR(0x72ba3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72ba41:{NFSU2_TR(0x72ba41);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72ba27u);}goto L72ba27;}}
}
B72ba43:L72ba43:{c.instructions+=3;NFSU2_TR(0x72ba43);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ba45:{NFSU2_TR(0x72ba45);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x46ull))));
}
B72ba48:{NFSU2_TR(0x72ba48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72ba49:L72ba49:{c.instructions+=4;NFSU2_TR(0x72ba49);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w2(U+0,u16(u32(r2(U+0))&u32(u16(0x0ull))));
s2(u32(r4(R+24)),r2(U+0));
}
B72ba4d:{NFSU2_TR(0x72ba4d);
w1(R+512,carry<u32>(r4(R+24),u32(0x1aull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1aull))));
}
B72ba50:{NFSU2_TR(0x72ba50);
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
B72ba51:{NFSU2_TR(0x72ba51);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72ba49u);}goto L72ba49;}}
}
B72ba53:L72ba53:{c.instructions+=1;NFSU2_TR(0x72ba53);
{goto L72baa6;}
}
B72ba55:L72ba55:{c.instructions+=3;NFSU2_TR(0x72ba55);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ba57:{NFSU2_TR(0x72ba57);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2eull))));
__builtin_memmove((R+4),(U+0),4);
}
B72ba5a:{NFSU2_TR(0x72ba5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72ba5b:L72ba5b:{c.instructions+=3;NFSU2_TR(0x72ba5b);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ba5d:{NFSU2_TR(0x72ba5d);
__builtin_memmove((R+0),(R+4),4);
}
B72ba5f:{NFSU2_TR(0x72ba5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72ba60:L72ba60:{c.instructions+=7;NFSU2_TR(0x72ba60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72ba63:{NFSU2_TR(0x72ba63);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffc4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w2(R+12,u16(r1(U+12)));
}
B72ba69:{NFSU2_TR(0x72ba69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72ba6c:{NFSU2_TR(0x72ba6c);
u8 U[2];
__builtin_memmove((U+0),(R+12),2);
s2(u32(r4(R+0)),r2(U+0));
}
B72ba6f:{NFSU2_TR(0x72ba6f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1aull))));
}
B72ba72:{NFSU2_TR(0x72ba72);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B72ba73:{NFSU2_TR(0x72ba73);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72ba60u);}goto L72ba60;}}
}
B72ba75:L72ba75:{c.instructions+=4;NFSU2_TR(0x72ba75);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B72ba76:{NFSU2_TR(0x72ba76);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B72ba77:{NFSU2_TR(0x72ba77);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B72ba78:{NFSU2_TR(0x72ba78);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72ba5bu);}goto L72ba5b;}}
}
B72ba7a:L72ba7a:{c.instructions+=5;NFSU2_TR(0x72ba7a);
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
B72ba7c:{NFSU2_TR(0x72ba7c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x46ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72ba80:{NFSU2_TR(0x72ba80);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72ba84:{NFSU2_TR(0x72ba84);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7aull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72ba88:{NFSU2_TR(0x72ba88);
{goto L72baa6;}
}
B72ba8a:L72ba8a:{c.instructions+=1;NFSU2_TR(0x72ba8a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B72ba8c:L72ba8c:{c.instructions+=5;NFSU2_TR(0x72ba8c);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffc4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w2(R+4,u16(r1(U+12)));
}
B72ba92:{NFSU2_TR(0x72ba92);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),2);
s2(u32(r4(U+4)),r2(U+8));
}
B72ba96:{NFSU2_TR(0x72ba96);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B72ba97:{NFSU2_TR(0x72ba97);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x15ull))));
}
B72ba9a:{NFSU2_TR(0x72ba9a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72ba8cu);}goto L72ba8c;}}
}
B72ba9c:L72ba9c:{c.instructions+=2;NFSU2_TR(0x72ba9c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0x0ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B72baa1:{NFSU2_TR(0x72baa1);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0x0ull))));
s2(u32(r4(U+0)),r2(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B72baa6:L72baa6:{c.instructions+=5;NFSU2_TR(0x72baa6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72baa7:{NFSU2_TR(0x72baa7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72baa8:{NFSU2_TR(0x72baa8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72baa9:{NFSU2_TR(0x72baa9);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B72baaa:{NFSU2_TR(0x72baaa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72baad:L72baad:{c.instructions+=17;NFSU2_TR(0x72baad);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72baae:{NFSU2_TR(0x72baae);
__builtin_memmove((R+20),(R+16),4);
}
B72bab0:{NFSU2_TR(0x72bab0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B72bab3:{NFSU2_TR(0x72bab3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72bab6:{NFSU2_TR(0x72bab6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72bab7:{NFSU2_TR(0x72bab7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72bab8:{NFSU2_TR(0x72bab8);
__builtin_memmove((R+24),(R+4),4);
}
B72baba:{NFSU2_TR(0x72baba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72babd:{NFSU2_TR(0x72babd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72bac0:{NFSU2_TR(0x72bac0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72bac3:{NFSU2_TR(0x72bac3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72bac4:{NFSU2_TR(0x72bac4);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B72bac8:{NFSU2_TR(0x72bac8);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+12,u32(r2(U+0)));
}
B72bacb:{NFSU2_TR(0x72bacb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B72bace:{NFSU2_TR(0x72bace);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72bad2:{NFSU2_TR(0x72bad2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72bad5:{NFSU2_TR(0x72bad5);
if(r1(R+518)){{goto L72baed;}}
}
B72bad7:L72bad7:{c.instructions+=2;NFSU2_TR(0x72bad7);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72badb:{NFSU2_TR(0x72badb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72baed;}}
}
B72badd:L72badd:{c.instructions+=3;NFSU2_TR(0x72badd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x24ull));
s4(u32(r4(U+0)),r4(U+4));
}
B72bae4:{NFSU2_TR(0x72bae4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x240ull));
s4(u32(r4(U+0)),r4(U+4));
}
B72baeb:{NFSU2_TR(0x72baeb);
{goto L72bb19;}
}
B72baed:L72baed:{c.instructions+=11;NFSU2_TR(0x72baed);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72baf1:{NFSU2_TR(0x72baf1);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B72baf5:{NFSU2_TR(0x72baf5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1eull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B72baf8:{NFSU2_TR(0x72baf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B72bafb:{NFSU2_TR(0x72bafb);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x7cf04aull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+8,u32(s32(s16(r2(U+8)))));
}
B72bb03:{NFSU2_TR(0x72bb03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72bb06:{NFSU2_TR(0x72bb06);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B72bb0a:{NFSU2_TR(0x72bb0a);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B72bb0c:{NFSU2_TR(0x72bb0c);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B72bb0e:{NFSU2_TR(0x72bb0e);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x7cf04cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(s32(s16(r2(U+8)))));
}
B72bb16:{NFSU2_TR(0x72bb16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72bb19:L72bb19:{c.instructions+=15;NFSU2_TR(0x72bb19);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72bb1d:{NFSU2_TR(0x72bb1d);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B72bb21:{NFSU2_TR(0x72bb21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72bb25:{NFSU2_TR(0x72bb25);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B72bb28:{NFSU2_TR(0x72bb28);
w4(R+8,u32(0x7c7004ull));
}
B72bb2d:{NFSU2_TR(0x72bb2d);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B72bb2f:{NFSU2_TR(0x72bb2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B72bb31:{NFSU2_TR(0x72bb31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72bb34:{NFSU2_TR(0x72bb34);
w4(R+4,shl<u32>(r4(R+4),u64(u32(0x1ull))));
}
B72bb36:{NFSU2_TR(0x72bb36);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72bb38:{NFSU2_TR(0x72bb38);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72bb3b:{NFSU2_TR(0x72bb3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72bb3e:{NFSU2_TR(0x72bb3e);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B72bb40:{NFSU2_TR(0x72bb40);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72bb43:{NFSU2_TR(0x72bb43);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72bb99;}}
}
B72bb45:L72bb45:{c.instructions+=3;NFSU2_TR(0x72bb45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72bb48:{NFSU2_TR(0x72bb48);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B72bb4b:{NFSU2_TR(0x72bb4b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72bb53;}}
}
B72bb4d:L72bb4d:{c.instructions+=2;NFSU2_TR(0x72bb4d);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72bb51:{NFSU2_TR(0x72bb51);
{goto L72bb62;}
}
B72bb53:L72bb53:{c.instructions+=2;NFSU2_TR(0x72bb53);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B72bb56:{NFSU2_TR(0x72bb56);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72bb5e;}}
}
B72bb58:L72bb58:{c.instructions+=2;NFSU2_TR(0x72bb58);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72bb5c:{NFSU2_TR(0x72bb5c);
{goto L72bb62;}
}
B72bb5e:L72bb5e:{c.instructions+=1;NFSU2_TR(0x72bb5e);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72bb62:L72bb62:{c.instructions+=5;NFSU2_TR(0x72bb62);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7d0c30ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B72bb69:{NFSU2_TR(0x72bb69);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B72bb6c:{NFSU2_TR(0x72bb6c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7d0cb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72bb73:{NFSU2_TR(0x72bb73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72bb76:{NFSU2_TR(0x72bb76);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72bc5f;}}
}
B72bb7c:L72bb7c:{c.instructions+=7;NFSU2_TR(0x72bb7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72bb7f:{NFSU2_TR(0x72bb7f);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B72bb81:{NFSU2_TR(0x72bb81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72bb84:{NFSU2_TR(0x72bb84);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B72bb87:{NFSU2_TR(0x72bb87);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72bb8a:{NFSU2_TR(0x72bb8a);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B72bb8c:{NFSU2_TR(0x72bb8c);
{u32 ea_=u32(r4(R+0)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72bb90:L72bb90:{c.instructions+=3;NFSU2_TR(0x72bb90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x2ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72bb94:{NFSU2_TR(0x72bb94);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+4)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B72bb97:{NFSU2_TR(0x72bb97);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72bb45u);}goto L72bb45;}}
}
B72bb99:L72bb99:{c.instructions+=10;NFSU2_TR(0x72bb99);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72bb9d:{NFSU2_TR(0x72bb9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72bba0:{NFSU2_TR(0x72bba0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x7d0d70ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72bba7:{NFSU2_TR(0x72bba7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72bbaa:{NFSU2_TR(0x72bbaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72bbad:{NFSU2_TR(0x72bbad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B72bbb0:{NFSU2_TR(0x72bbb0);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B72bbb3:{NFSU2_TR(0x72bbb3);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B72bbb5:{NFSU2_TR(0x72bbb5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72bbb7:{NFSU2_TR(0x72bbb7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72bdb9;}}
}
B72bbbd:L72bbbd:{c.instructions+=3;NFSU2_TR(0x72bbbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72bbc0:{NFSU2_TR(0x72bbc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72bbc3:{NFSU2_TR(0x72bbc3);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B72bbc7:L72bbc7:{c.instructions+=2;NFSU2_TR(0x72bbc7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x240ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x240ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B72bbce:{NFSU2_TR(0x72bbce);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72bdb7;}}
}
B72bbd4:L72bbd4:{c.instructions+=2;NFSU2_TR(0x72bbd4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x18ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B72bbd7:{NFSU2_TR(0x72bbd7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72bbfe;}}
}
B72bbd9:L72bbd9:{c.instructions+=14;NFSU2_TR(0x72bbd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72bbdc:{NFSU2_TR(0x72bbdc);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+12,u32(r1(U+0)));
}
B72bbdf:{NFSU2_TR(0x72bbdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72bbe2:{NFSU2_TR(0x72bbe2);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72bbe4:{NFSU2_TR(0x72bbe4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72bbe5:{NFSU2_TR(0x72bbe5);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B72bbe7:{NFSU2_TR(0x72bbe7);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B72bbe9:{NFSU2_TR(0x72bbe9);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B72bbec:{NFSU2_TR(0x72bbec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72bbef:{NFSU2_TR(0x72bbef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B72bbf2:{NFSU2_TR(0x72bbf2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B72bbf3:{NFSU2_TR(0x72bbf3);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x18ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B72bbf6:{NFSU2_TR(0x72bbf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72bbf9:{NFSU2_TR(0x72bbf9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72bbd9u);}goto L72bbd9;}}
}
B72bbfb:L72bbfb:{c.instructions+=1;NFSU2_TR(0x72bbfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72bbfe:L72bbfe:{c.instructions+=13;NFSU2_TR(0x72bbfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72bc01:{NFSU2_TR(0x72bc01);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B72bc04:{NFSU2_TR(0x72bc04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72bc07:{NFSU2_TR(0x72bc07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B72bc09:{NFSU2_TR(0x72bc09);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r1(U+0))));
}
B72bc0b:{NFSU2_TR(0x72bc0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72bc0e:{NFSU2_TR(0x72bc0e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B72bc12:{NFSU2_TR(0x72bc12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B72bc15:{NFSU2_TR(0x72bc15);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B72bc18:{NFSU2_TR(0x72bc18);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
w1(U+8,u8(u32(r1(R+4))&u32(u8(0x1full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,shl<u32>(r4(U+4),u64(r1(U+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B72bc1b:{NFSU2_TR(0x72bc1b);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B72bc1e:{NFSU2_TR(0x72bc1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72bc21:{NFSU2_TR(0x72bc21);
if(r1(R+518)){{goto L72bd34;}}
}
B72bc27:L72bc27:{c.instructions+=3;NFSU2_TR(0x72bc27);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B72bc29:{NFSU2_TR(0x72bc29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72bc2c:{NFSU2_TR(0x72bc2c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L72bc31;}}
}
B72bc2e:L72bc2e:{c.instructions+=1;NFSU2_TR(0x72bc2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72bc31:L72bc31:{c.instructions+=4;NFSU2_TR(0x72bc31);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72bc34:{NFSU2_TR(0x72bc34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,shl<u32>(r4(U+4),u64(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72bc37:{NFSU2_TR(0x72bc37);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72bc3a:{NFSU2_TR(0x72bc3a);
{goto L72bd39;}
}
B72bc3f:L72bc3f:{c.instructions+=13;NFSU2_TR(0x72bc3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72bc42:{NFSU2_TR(0x72bc42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72bc45:{NFSU2_TR(0x72bc45);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72bc47:{NFSU2_TR(0x72bc47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72bc48:{NFSU2_TR(0x72bc48);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B72bc4a:{NFSU2_TR(0x72bc4a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+12,u32(r1(U+0)));
}
B72bc4d:{NFSU2_TR(0x72bc4d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B72bc4f:{NFSU2_TR(0x72bc4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B72bc52:{NFSU2_TR(0x72bc52);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B72bc53:{NFSU2_TR(0x72bc53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72bc56:{NFSU2_TR(0x72bc56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72bc59:{NFSU2_TR(0x72bc59);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B72bc5c:{NFSU2_TR(0x72bc5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72bc5f:L72bc5f:{c.instructions+=2;NFSU2_TR(0x72bc5f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x18ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B72bc63:{NFSU2_TR(0x72bc63);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72bc3fu);}goto L72bc3f;}}
}
B72bc65:L72bc65:{c.instructions+=2;NFSU2_TR(0x72bc65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B72bc67:{NFSU2_TR(0x72bc67);
{goto L72bc7c;}
}
B72bc69:L72bc69:{c.instructions+=4;NFSU2_TR(0x72bc69);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B72bc6a:{NFSU2_TR(0x72bc6a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B72bc6b:{NFSU2_TR(0x72bc6b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B72bc6f:{NFSU2_TR(0x72bc6f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72bc76;}}
}
B72bc71:L72bc71:{c.instructions+=2;NFSU2_TR(0x72bc71);
w4(R+12,u32(0-u32(r4(R+12))));
}
B72bc73:{NFSU2_TR(0x72bc73);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72bc76:L72bc76:{c.instructions+=2;NFSU2_TR(0x72bc76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72bc79:{NFSU2_TR(0x72bc79);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,shl<u32>(r4(U+4),u64(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72bc7c:L72bc7c:{c.instructions+=3;NFSU2_TR(0x72bc7c);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+12,u32(s32(s16(r2(U+0)))));
}
B72bc7f:{NFSU2_TR(0x72bc7f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B72bc81:{NFSU2_TR(0x72bc81);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72bc69u);}goto L72bc69;}}
}
B72bc83:L72bc83:{c.instructions+=5;NFSU2_TR(0x72bc83);
__builtin_memmove((R+0),(R+12),4);
}
B72bc85:{NFSU2_TR(0x72bc85);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B72bc88:{NFSU2_TR(0x72bc88);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfull))));
}
B72bc8b:{NFSU2_TR(0x72bc8b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72bc8e:{NFSU2_TR(0x72bc8e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72bca3;}}
}
B72bc90:L72bc90:{c.instructions+=2;NFSU2_TR(0x72bc90);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72bc94:{NFSU2_TR(0x72bc94);
if(r1(R+518)){{goto L72bca7;}}
}
B72bc96:L72bc96:{c.instructions+=3;NFSU2_TR(0x72bc96);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72bc99:{NFSU2_TR(0x72bc99);
__builtin_memmove((R+4),(R+24),4);
}
B72bc9b:{NFSU2_TR(0x72bc9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72bca0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b030u);}goto L72b030;}
}
B72bca0:L72bca0:{c.instructions+=1;NFSU2_TR(0x72bca0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfull))));
}
B72bca3:L72bca3:{c.instructions+=2;NFSU2_TR(0x72bca3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72bca5:{NFSU2_TR(0x72bca5);
if(r1(R+518)){{goto L72bccd;}}
}
B72bca7:L72bca7:{c.instructions+=3;NFSU2_TR(0x72bca7);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B72bcab:{NFSU2_TR(0x72bcab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72bcae:{NFSU2_TR(0x72bcae);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72bcb5;}}
}
B72bcb0:L72bcb0:{c.instructions+=2;NFSU2_TR(0x72bcb0);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72bcb3:{NFSU2_TR(0x72bcb3);
{goto L72bcb8;}
}
B72bcb5:L72bcb5:{c.instructions+=1;NFSU2_TR(0x72bcb5);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72bcb8:L72bcb8:{c.instructions+=6;NFSU2_TR(0x72bcb8);
{u32 ea_=u32((r4(R+0)*4u)+u32(8155144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72bcbf:{NFSU2_TR(0x72bcbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72bcc2:{NFSU2_TR(0x72bcc2);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72bcc5:{NFSU2_TR(0x72bcc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72bcc8:{NFSU2_TR(0x72bcc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,shl<u32>(r4(U+4),u64(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72bccb:{NFSU2_TR(0x72bccb);
{goto L72bcd8;}
}
B72bccd:L72bccd:{c.instructions+=4;NFSU2_TR(0x72bccd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72bcd0:{NFSU2_TR(0x72bcd0);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B72bcd2:{NFSU2_TR(0x72bcd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72bcd5:{NFSU2_TR(0x72bcd5);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72bcd8:L72bcd8:{c.instructions+=2;NFSU2_TR(0x72bcd8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72bcdb:{NFSU2_TR(0x72bcdb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72bcf2;}}
}
B72bcdd:L72bcdd:{c.instructions+=2;NFSU2_TR(0x72bcdd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72bce1:{NFSU2_TR(0x72bce1);
if(r1(R+518)){{goto L72bcf6;}}
}
B72bce3:L72bce3:{c.instructions+=3;NFSU2_TR(0x72bce3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72bce6:{NFSU2_TR(0x72bce6);
__builtin_memmove((R+4),(R+24),4);
}
B72bce8:{NFSU2_TR(0x72bce8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72bcedull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b030u);}goto L72b030;}
}
B72bced:L72bced:{c.instructions+=2;NFSU2_TR(0x72bced);
__builtin_memmove((R+12),(R+0),4);
}
B72bcef:{NFSU2_TR(0x72bcef);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xfull))));
}
B72bcf2:L72bcf2:{c.instructions+=2;NFSU2_TR(0x72bcf2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72bcf4:{NFSU2_TR(0x72bcf4);
if(r1(R+518)){{goto L72bd26;}}
}
B72bcf6:L72bcf6:{c.instructions+=4;NFSU2_TR(0x72bcf6);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B72bcfa:{NFSU2_TR(0x72bcfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72bcfd:{NFSU2_TR(0x72bcfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72bd00:{NFSU2_TR(0x72bd00);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72bd07;}}
}
B72bd02:L72bd02:{c.instructions+=2;NFSU2_TR(0x72bd02);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72bd05:{NFSU2_TR(0x72bd05);
{goto L72bd0a;}
}
B72bd07:L72bd07:{c.instructions+=1;NFSU2_TR(0x72bd07);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72bd0a:L72bd0a:{c.instructions+=4;NFSU2_TR(0x72bd0a);
{u32 ea_=u32((r4(R+12)*4u)+u32(8155144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72bd11:{NFSU2_TR(0x72bd11);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72bd15:{NFSU2_TR(0x72bd15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72bd18:{NFSU2_TR(0x72bd18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,shl<u32>(r4(U+4),u64(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72bd1b:L72bd1b:{c.instructions+=3;NFSU2_TR(0x72bd1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72bd1e:{NFSU2_TR(0x72bd1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72bd21:{NFSU2_TR(0x72bd21);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72bb90u);}goto L72bb90;}
}
B72bd26:L72bd26:{c.instructions+=5;NFSU2_TR(0x72bd26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72bd29:{NFSU2_TR(0x72bd29);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B72bd2b:{NFSU2_TR(0x72bd2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72bd2e:{NFSU2_TR(0x72bd2e);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72bd32:{NFSU2_TR(0x72bd32);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72bd1bu);}goto L72bd1b;}
}
B72bd34:L72bd34:{c.instructions+=2;NFSU2_TR(0x72bd34);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B72bd36:{NFSU2_TR(0x72bd36);
{u32 ea_=u32(r4(R+28)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72bd39:L72bd39:{c.instructions+=2;NFSU2_TR(0x72bd39);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B72bd3c:{NFSU2_TR(0x72bd3c);
if(r1(R+518)){{goto L72bd55;}}
}
B72bd3e:L72bd3e:{c.instructions+=3;NFSU2_TR(0x72bd3e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B72bd42:{NFSU2_TR(0x72bd42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72bd45:{NFSU2_TR(0x72bd45);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L72bd4a;}}
}
B72bd47:L72bd47:{c.instructions+=1;NFSU2_TR(0x72bd47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72bd4a:L72bd4a:{c.instructions+=4;NFSU2_TR(0x72bd4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72bd4d:{NFSU2_TR(0x72bd4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,shl<u32>(r4(U+4),u64(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72bd50:{NFSU2_TR(0x72bd50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72bd53:{NFSU2_TR(0x72bd53);
{goto L72bd5a;}
}
B72bd55:L72bd55:{c.instructions+=2;NFSU2_TR(0x72bd55);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B72bd57:{NFSU2_TR(0x72bd57);
{u32 ea_=u32(r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72bd5a:L72bd5a:{c.instructions+=2;NFSU2_TR(0x72bd5a);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B72bd5d:{NFSU2_TR(0x72bd5d);
if(r1(R+518)){{goto L72bd75;}}
}
B72bd5f:L72bd5f:{c.instructions+=3;NFSU2_TR(0x72bd5f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B72bd63:{NFSU2_TR(0x72bd63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72bd66:{NFSU2_TR(0x72bd66);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L72bd6b;}}
}
B72bd68:L72bd68:{c.instructions+=1;NFSU2_TR(0x72bd68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72bd6b:L72bd6b:{c.instructions+=4;NFSU2_TR(0x72bd6b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B72bd6d:{NFSU2_TR(0x72bd6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,shl<u32>(r4(U+4),u64(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72bd70:{NFSU2_TR(0x72bd70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72bd73:{NFSU2_TR(0x72bd73);
{goto L72bd79;}
}
B72bd75:L72bd75:{c.instructions+=2;NFSU2_TR(0x72bd75);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B72bd77:{NFSU2_TR(0x72bd77);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72bd79:L72bd79:{c.instructions+=2;NFSU2_TR(0x72bd79);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B72bd7c:{NFSU2_TR(0x72bd7c);
if(r1(R+518)){{goto L72bd95;}}
}
B72bd7e:L72bd7e:{c.instructions+=3;NFSU2_TR(0x72bd7e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B72bd82:{NFSU2_TR(0x72bd82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72bd85:{NFSU2_TR(0x72bd85);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L72bd8a;}}
}
B72bd87:L72bd87:{c.instructions+=1;NFSU2_TR(0x72bd87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72bd8a:L72bd8a:{c.instructions+=4;NFSU2_TR(0x72bd8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72bd8d:{NFSU2_TR(0x72bd8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,shl<u32>(r4(U+4),u64(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72bd90:{NFSU2_TR(0x72bd90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72bd93:{NFSU2_TR(0x72bd93);
{goto L72bd9a;}
}
B72bd95:L72bd95:{c.instructions+=2;NFSU2_TR(0x72bd95);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B72bd97:{NFSU2_TR(0x72bd97);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72bd9a:L72bd9a:{c.instructions+=9;NFSU2_TR(0x72bd9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72bd9d:{NFSU2_TR(0x72bd9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B72bda0:{NFSU2_TR(0x72bda0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72bda3:{NFSU2_TR(0x72bda3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72bda7:{NFSU2_TR(0x72bda7);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B72bdaa:{NFSU2_TR(0x72bdaa);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B72bdac:{NFSU2_TR(0x72bdac);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B72bdaf:{NFSU2_TR(0x72bdaf);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B72bdb1:{NFSU2_TR(0x72bdb1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72bbc7u);}goto L72bbc7;}}
}
B72bdb7:L72bdb7:{c.instructions+=1;NFSU2_TR(0x72bdb7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72bdb9:L72bdb9:{c.instructions+=1;NFSU2_TR(0x72bdb9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72bdc9;}}
}
B72bdbb:L72bdbb:{c.instructions+=4;NFSU2_TR(0x72bdbb);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B72bdbd:{NFSU2_TR(0x72bdbd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72bdbe:{NFSU2_TR(0x72bdbe);
__builtin_memmove((R+4),(R+24),4);
}
B72bdc0:{NFSU2_TR(0x72bdc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72bdc5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b08cu);}goto L72b08c;}
}
B72bdc5:L72bdc5:{c.instructions+=1;NFSU2_TR(0x72bdc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72bdc9:L72bdc9:{c.instructions+=6;NFSU2_TR(0x72bdc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72bdcc:{NFSU2_TR(0x72bdcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B72bdcf:{NFSU2_TR(0x72bdcf);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B72bdd2:{NFSU2_TR(0x72bdd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B72bdd5:{NFSU2_TR(0x72bdd5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B72bdd7:{NFSU2_TR(0x72bdd7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72bde3;}}
}
B72bdd9:L72bdd9:{c.instructions+=4;NFSU2_TR(0x72bdd9);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B72bddb:{NFSU2_TR(0x72bddb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72bddc:{NFSU2_TR(0x72bddc);
__builtin_memmove((R+4),(R+24),4);
}
B72bdde:{NFSU2_TR(0x72bdde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72bde3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b030u);}goto L72b030;}
}
B72bde3:L72bde3:{c.instructions+=4;NFSU2_TR(0x72bde3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72bde6:{NFSU2_TR(0x72bde6);
w4(R+4,u32(0x240ull));
}
B72bdeb:{NFSU2_TR(0x72bdeb);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B72bded:{NFSU2_TR(0x72bded);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72be0a;}}
}
B72bdef:L72bdef:{c.instructions+=7;NFSU2_TR(0x72bdef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72bdf2:{NFSU2_TR(0x72bdf2);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B72bdf4:{NFSU2_TR(0x72bdf4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B72bdf7:{NFSU2_TR(0x72bdf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B72bdfa:{NFSU2_TR(0x72bdfa);
__builtin_memmove((R+8),(R+4),4);
}
B72bdfc:{NFSU2_TR(0x72bdfc);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B72bdff:{NFSU2_TR(0x72bdff);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B72be01:L72be01:{c.instructions+=1;NFSU2_TR(0x72be01);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L72be03;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72be01u);}goto L72be01;}
}
B72be03:L72be03:{c.instructions+=2;NFSU2_TR(0x72be03);
__builtin_memmove((R+4),(R+8),4);
}
B72be05:{NFSU2_TR(0x72be05);
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
B72be08:L72be08:{c.instructions+=1;NFSU2_TR(0x72be08);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L72be0a;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72be08u);}goto L72be08;}
}
B72be0a:L72be0a:{c.instructions+=5;NFSU2_TR(0x72be0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72be0b:{NFSU2_TR(0x72be0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72be0c:{NFSU2_TR(0x72be0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72be0d:{NFSU2_TR(0x72be0d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B72be0e:{NFSU2_TR(0x72be0e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72be11:L72be11:{c.instructions+=33;NFSU2_TR(0x72be11);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72be12:{NFSU2_TR(0x72be12);
__builtin_memmove((R+20),(R+16),4);
}
B72be14:{NFSU2_TR(0x72be14);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72be15:{NFSU2_TR(0x72be15);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72be16:{NFSU2_TR(0x72be16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72be19:{NFSU2_TR(0x72be19);
__builtin_memmove((R+8),(R+0),4);
}
B72be1b:{NFSU2_TR(0x72be1b);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B72be1e:{NFSU2_TR(0x72be1e);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ull))));
}
B72be21:{NFSU2_TR(0x72be21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72be24:{NFSU2_TR(0x72be24);
__builtin_memmove((R+8),(R+0),4);
}
B72be26:{NFSU2_TR(0x72be26);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72be27:{NFSU2_TR(0x72be27);
__builtin_memmove((R+12),(R+0),4);
}
B72be29:{NFSU2_TR(0x72be29);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x3ull))));
}
B72be2b:{NFSU2_TR(0x72be2b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72be2e:{NFSU2_TR(0x72be2e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B72be31:{NFSU2_TR(0x72be31);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B72be34:{NFSU2_TR(0x72be34);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B72be37:{NFSU2_TR(0x72be37);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
}
B72be39:{NFSU2_TR(0x72be39);
w1(R+12,u8(u32(r1(R+12))&u32(u8(0x3ull))));
}
B72be3c:{NFSU2_TR(0x72be3c);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ull))));
}
B72be3f:{NFSU2_TR(0x72be3f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72be43:{NFSU2_TR(0x72be43);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3eull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72be46:{NFSU2_TR(0x72be46);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B72be49:{NFSU2_TR(0x72be49);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72be4d:{NFSU2_TR(0x72be4d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72be50:{NFSU2_TR(0x72be50);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3bull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72be53:{NFSU2_TR(0x72be53);
__builtin_memmove((R+0),(R+518),1);
}
B72be56:{NFSU2_TR(0x72be56);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B72be58:{NFSU2_TR(0x72be58);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72be5b:{NFSU2_TR(0x72be5b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x43ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72be5e:{NFSU2_TR(0x72be5e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B72be62:{NFSU2_TR(0x72be62);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3aull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72be65:{NFSU2_TR(0x72be65);
if(r1(R+518)){{goto L72be6f;}}
}
B72be67:L72be67:{c.instructions+=3;NFSU2_TR(0x72be67);
w1(R+8,u8(u32(r1(R+8))+u32(u8(0x6ull))));
}
B72be6a:{NFSU2_TR(0x72be6a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x41ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72be6d:{NFSU2_TR(0x72be6d);
{goto L72be8f;}
}
B72be6f:L72be6f:{c.instructions+=12;NFSU2_TR(0x72be6f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B72be72:{NFSU2_TR(0x72be72);
w1(R+12,u8(0x3ull));
}
B72be74:{NFSU2_TR(0x72be74);
u8 U[4];
w2(U+0,u16(s16(s8(r1(R+0)))));
w2(U+2,u16(s16(s8(r1(R+12)))));
w2(R+0,u16(u32(r2(U+0))*u32(r2(U+2))));
}
B72be76:{NFSU2_TR(0x72be76);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B72be79:{NFSU2_TR(0x72be79);
w1(R+0,u8(u32(r1(R+0))+u32(r1(R+8))));
}
B72be7b:{NFSU2_TR(0x72be7b);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72be7f:{NFSU2_TR(0x72be7f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x41ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72be82:{NFSU2_TR(0x72be82);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B72be85:{NFSU2_TR(0x72be85);
w1(R+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
}
B72be87:{NFSU2_TR(0x72be87);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B72be8a:{NFSU2_TR(0x72be8a);
w1(R+0,u8(u32(r1(R+0))+u32(r1(R+8))));
}
B72be8c:{NFSU2_TR(0x72be8c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72be8f:L72be8f:{c.instructions+=12;NFSU2_TR(0x72be8f);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B72be92:{NFSU2_TR(0x72be92);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B72be95:{NFSU2_TR(0x72be95);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B72be97:{NFSU2_TR(0x72be97);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72be9a:{NFSU2_TR(0x72be9a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72be9e:{NFSU2_TR(0x72be9e);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x7c6b40ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(r2(U+8)));
}
B72bea6:{NFSU2_TR(0x72bea6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72bea9:{NFSU2_TR(0x72bea9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72beac:{NFSU2_TR(0x72beac);
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
B72beae:{NFSU2_TR(0x72beae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72beaf:{NFSU2_TR(0x72beaf);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B72beb0:{NFSU2_TR(0x72beb0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72beb3:L72beb3:{c.instructions+=4;NFSU2_TR(0x72beb3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72beb4:{NFSU2_TR(0x72beb4);
__builtin_memmove((R+24),(R+4),4);
}
B72beb6:{NFSU2_TR(0x72beb6);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x47ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x0ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B72beba:{NFSU2_TR(0x72beba);
if(r1(R+518)){{goto L72bec1;}}
}
B72bebc:L72bebc:{c.instructions+=2;NFSU2_TR(0x72bebc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B72bebe:{NFSU2_TR(0x72bebe);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72bec1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B72bec1:L72bec1:{c.instructions+=9;NFSU2_TR(0x72bec1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72bec5:{NFSU2_TR(0x72bec5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B72bec7:{NFSU2_TR(0x72bec7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x47ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B72becb:{NFSU2_TR(0x72becb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72bece:{NFSU2_TR(0x72bece);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72bed1:{NFSU2_TR(0x72bed1);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+0,u32(r1(U+0)));
}
B72bed4:{NFSU2_TR(0x72bed4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72bed5:{NFSU2_TR(0x72bed5);
__builtin_memmove((R+4),(R+24),4);
}
B72bed7:{NFSU2_TR(0x72bed7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72bedaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B72beda:L72beda:{c.instructions+=2;NFSU2_TR(0x72beda);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72bedd:{NFSU2_TR(0x72bedd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72bee3;}}
}
B72bedf:L72bedf:{c.instructions+=2;NFSU2_TR(0x72bedf);
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
B72bee1:{NFSU2_TR(0x72bee1);
{goto L72bf1f;}
}
B72bee3:L72bee3:{c.instructions+=2;NFSU2_TR(0x72bee3);
__builtin_memmove((R+4),(R+24),4);
}
B72bee5:{NFSU2_TR(0x72bee5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72beeaull));
TAIL_STATIC(0x72d9cau,72d);
}
B72beea:L72beea:{c.instructions+=2;NFSU2_TR(0x72beea);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
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
B72bef1:{NFSU2_TR(0x72bef1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72bf0e;}}
}
B72bef3:L72bef3:{c.instructions+=6;NFSU2_TR(0x72bef3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72bef7:{NFSU2_TR(0x72bef7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72befa:{NFSU2_TR(0x72befa);
u8 U[45];
w4(U+37,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
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
B72befd:{NFSU2_TR(0x72befd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72befe:{NFSU2_TR(0x72befe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72bf01:{NFSU2_TR(0x72bf01);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b4a1c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72bf07ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B72bf07:L72bf07:{c.instructions+=2;NFSU2_TR(0x72bf07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72bf08:{NFSU2_TR(0x72bf08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72bf0e:L72bf0e:{c.instructions+=4;NFSU2_TR(0x72bf0e);
__builtin_memmove((R+4),(R+24),4);
}
B72bf10:{NFSU2_TR(0x72bf10);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B72bf14:{NFSU2_TR(0x72bf14);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x39ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B72bf18:{NFSU2_TR(0x72bf18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72bf1dull));
TAIL_STATIC(0x72dc13u,72d);
}
B72bf1d:L72bf1d:{c.instructions+=1;NFSU2_TR(0x72bf1d);
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
B72bf1f:L72bf1f:{c.instructions+=2;NFSU2_TR(0x72bf1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72bf20:{NFSU2_TR(0x72bf20);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72bf23:L72bf23:{c.instructions+=4;NFSU2_TR(0x72bf23);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72bf24:{NFSU2_TR(0x72bf24);
__builtin_memmove((R+20),(R+16),4);
}
B72bf26:{NFSU2_TR(0x72bf26);
w4(R+0,u32(0x1218ull));
}
B72bf2b:{NFSU2_TR(0x72bf2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72bf30ull));
TAIL_STATIC(0x75c4d0u,75c);
}
B72bf30:L72bf30:{c.instructions+=11;NFSU2_TR(0x72bf30);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72bf31:{NFSU2_TR(0x72bf31);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72bf32:{NFSU2_TR(0x72bf32);
__builtin_memmove((R+24),(R+4),4);
}
B72bf34:{NFSU2_TR(0x72bf34);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72bf37:{NFSU2_TR(0x72bf37);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72bf38:{NFSU2_TR(0x72bf38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72bf3b:{NFSU2_TR(0x72bf3b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff6e8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72bf41:{NFSU2_TR(0x72bf41);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72bf43:{NFSU2_TR(0x72bf43);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffede8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72bf49:{NFSU2_TR(0x72bf49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72bf4c:{NFSU2_TR(0x72bf4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72bf51ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b030u);}goto L72b030;}
}
B72bf51:L72bf51:{c.instructions+=4;NFSU2_TR(0x72bf51);
__builtin_memmove((R+28),(R+0),4);
}
B72bf53:{NFSU2_TR(0x72bf53);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72bf54:{NFSU2_TR(0x72bf54);
__builtin_memmove((R+4),(R+24),4);
}
B72bf56:{NFSU2_TR(0x72bf56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72bf5bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b0f9u);}goto L72b0f9;}
}
B72bf5b:L72bf5b:{c.instructions+=10;NFSU2_TR(0x72bf5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72bf5e:{NFSU2_TR(0x72bf5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B72bf61:{NFSU2_TR(0x72bf61);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72bf62:{NFSU2_TR(0x72bf62);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B72bf65:{NFSU2_TR(0x72bf65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B72bf68:{NFSU2_TR(0x72bf68);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72bf6c:{NFSU2_TR(0x72bf6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72bf6f:{NFSU2_TR(0x72bf6f);
__builtin_memmove((R+4),(R+24),4);
}
B72bf71:{NFSU2_TR(0x72bf71);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72bf73:{NFSU2_TR(0x72bf73);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72bf7c;}}
}
B72bf75:L72bf75:{c.instructions+=1;NFSU2_TR(0x72bf75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72bf7aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b3e4u);}goto L72b3e4;}
}
B72bf7a:L72bf7a:{c.instructions+=1;NFSU2_TR(0x72bf7a);
{goto L72bf81;}
}
B72bf7c:L72bf7c:{c.instructions+=1;NFSU2_TR(0x72bf7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72bf81ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72b9bbu);}goto L72b9bb;}
}
B72bf81:L72bf81:{c.instructions+=7;NFSU2_TR(0x72bf81);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72bf84:{NFSU2_TR(0x72bf84);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffede8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72bf8a:{NFSU2_TR(0x72bf8a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72bf8b:{NFSU2_TR(0x72bf8b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72bf8c:{NFSU2_TR(0x72bf8c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72bf8e:{NFSU2_TR(0x72bf8e);
__builtin_memmove((R+4),(R+24),4);
}
B72bf90:{NFSU2_TR(0x72bf90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72bf95ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72baadu);}goto L72baad;}
}
B72bf95:L72bf95:{c.instructions+=6;NFSU2_TR(0x72bf95);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffede8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72bf9b:{NFSU2_TR(0x72bf9b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72bf9c:{NFSU2_TR(0x72bf9c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72bf9d:{NFSU2_TR(0x72bf9d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72bf9f:{NFSU2_TR(0x72bf9f);
__builtin_memmove((R+4),(R+24),4);
}
B72bfa1:{NFSU2_TR(0x72bfa1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72bfa6ull));
TAIL_STATIC(0x72ddd2u,72d);
}
B72bfa6:L72bfa6:{c.instructions+=4;NFSU2_TR(0x72bfa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72bfa9:{NFSU2_TR(0x72bfa9);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B72bfad:{NFSU2_TR(0x72bfad);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72bfb1:{NFSU2_TR(0x72bfb1);
if(r1(R+518)){{goto L72bfe0;}}
}
B72bfb3:L72bfb3:{c.instructions+=2;NFSU2_TR(0x72bfb3);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72bfb7:{NFSU2_TR(0x72bfb7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72bfe0;}}
}
B72bfb9:L72bfb9:{c.instructions+=8;NFSU2_TR(0x72bfb9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff6e8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72bfbf:{NFSU2_TR(0x72bfbf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72bfc0:{NFSU2_TR(0x72bfc0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffede8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72bfc6:{NFSU2_TR(0x72bfc6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72bfc7:{NFSU2_TR(0x72bfc7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72bfc8:{NFSU2_TR(0x72bfc8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72bfca:{NFSU2_TR(0x72bfca);
__builtin_memmove((R+4),(R+24),4);
}
B72bfcc:{NFSU2_TR(0x72bfcc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72bfd1ull));
TAIL_STATIC(0x72e851u,72e);
}
B72bfd1:L72bfd1:{c.instructions+=3;NFSU2_TR(0x72bfd1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffede8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72bfd7:{NFSU2_TR(0x72bfd7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff6e8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72bfdd:{NFSU2_TR(0x72bfdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72bfe0:L72bfe0:{c.instructions+=5;NFSU2_TR(0x72bfe0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72bfe1:{NFSU2_TR(0x72bfe1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72bfe2:{NFSU2_TR(0x72bfe2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72bfe4:{NFSU2_TR(0x72bfe4);
__builtin_memmove((R+4),(R+24),4);
}
B72bfe6:{NFSU2_TR(0x72bfe6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72bfebull));
TAIL_STATIC(0x72ea66u,72e);
}
B72bfeb:L72bfeb:{c.instructions+=3;NFSU2_TR(0x72bfeb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72bfee:{NFSU2_TR(0x72bfee);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72bfef:{NFSU2_TR(0x72bfef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72bff4ull));
TAIL_STATIC(0x72ec64u,72e);
}
B72bff4:L72bff4:{c.instructions+=7;NFSU2_TR(0x72bff4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72bff5:{NFSU2_TR(0x72bff5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72bff6:{NFSU2_TR(0x72bff6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72bff9:{NFSU2_TR(0x72bff9);
__builtin_memmove((R+4),(R+24),4);
}
B72bffb:{NFSU2_TR(0x72bffb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72bffc:{NFSU2_TR(0x72bffc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72bffe:{NFSU2_TR(0x72bffe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c003ull));
TAIL_STATIC(0x72faceu,72f);
}
XIT:NFSU2_TR_EXIT(0x72b,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
