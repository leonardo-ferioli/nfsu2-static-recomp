#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_4c2(u8* __restrict R,Cpu& c);
u32 body_4de(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50e(u8* __restrict R,Cpu& c);
u32 body_50f(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_521(u8* __restrict R,Cpu& c);
u32 body_525(u8* __restrict R,Cpu& c);
u32 body_529(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52e(u8* __restrict R,Cpu& c);
u32 body_530(u8* __restrict R,Cpu& c);
u32 body_534(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_539(u8* __restrict R,Cpu& c);
u32 body_53a(u8* __restrict R,Cpu& c);
u32 body_53c(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_599(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x53b,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x53b,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_53b(u8* __restrict R,Cpu& c);
u32 page_53b(Cpu& c){return body_53b(c.regs.data(),c);}
__attribute__((noinline)) u32 body_53b(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x53b001:goto L53b001;
case 0x53b004:c.instructions+=3;goto B53b004;
case 0x53b007:c.instructions+=2;goto B53b007;
case 0x53b00a:c.instructions+=1;goto B53b00a;
case 0x53b00c:goto L53b00c;
case 0x53b00e:goto L53b00e;
case 0x53b011:c.instructions+=7;goto B53b011;
case 0x53b013:c.instructions+=6;goto B53b013;
case 0x53b016:c.instructions+=5;goto B53b016;
case 0x53b019:c.instructions+=4;goto B53b019;
case 0x53b01b:c.instructions+=3;goto B53b01b;
case 0x53b01d:c.instructions+=2;goto B53b01d;
case 0x53b01f:c.instructions+=1;goto B53b01f;
case 0x53b021:goto L53b021;
case 0x53b025:c.instructions+=3;goto B53b025;
case 0x53b029:c.instructions+=2;goto B53b029;
case 0x53b02b:c.instructions+=1;goto B53b02b;
case 0x53b02d:goto L53b02d;
case 0x53b030:goto L53b030;
case 0x53b032:c.instructions+=6;goto B53b032;
case 0x53b034:c.instructions+=5;goto B53b034;
case 0x53b037:c.instructions+=4;goto B53b037;
case 0x53b039:c.instructions+=3;goto B53b039;
case 0x53b03a:c.instructions+=2;goto B53b03a;
case 0x53b03d:c.instructions+=1;goto B53b03d;
case 0x53b042:goto L53b042;
case 0x53b046:c.instructions+=4;goto B53b046;
case 0x53b04a:c.instructions+=3;goto B53b04a;
case 0x53b04d:c.instructions+=2;goto B53b04d;
case 0x53b04f:c.instructions+=1;goto B53b04f;
case 0x53b051:goto L53b051;
case 0x53b055:c.instructions+=3;goto B53b055;
case 0x53b057:c.instructions+=2;goto B53b057;
case 0x53b05f:c.instructions+=1;goto B53b05f;
case 0x53b061:goto L53b061;
case 0x53b063:c.instructions+=6;goto B53b063;
case 0x53b065:c.instructions+=5;goto B53b065;
case 0x53b068:c.instructions+=4;goto B53b068;
case 0x53b06a:c.instructions+=3;goto B53b06a;
case 0x53b06b:c.instructions+=2;goto B53b06b;
case 0x53b06e:c.instructions+=1;goto B53b06e;
case 0x53b073:goto L53b073;
case 0x53b077:c.instructions+=4;goto B53b077;
case 0x53b07b:c.instructions+=3;goto B53b07b;
case 0x53b07e:c.instructions+=2;goto B53b07e;
case 0x53b080:c.instructions+=1;goto B53b080;
case 0x53b082:goto L53b082;
case 0x53b083:c.instructions+=3;goto B53b083;
case 0x53b084:c.instructions+=2;goto B53b084;
case 0x53b086:c.instructions+=1;goto B53b086;
case 0x53b08b:goto L53b08b;
case 0x53b08e:c.instructions+=2;goto B53b08e;
case 0x53b090:c.instructions+=1;goto B53b090;
case 0x53b092:goto L53b092;
case 0x53b096:c.instructions+=3;goto B53b096;
case 0x53b099:c.instructions+=2;goto B53b099;
case 0x53b09c:c.instructions+=1;goto B53b09c;
case 0x53b09e:goto L53b09e;
case 0x53b0a0:goto L53b0a0;
case 0x53b0a3:c.instructions+=10;goto B53b0a3;
case 0x53b0a5:c.instructions+=9;goto B53b0a5;
case 0x53b0a8:c.instructions+=8;goto B53b0a8;
case 0x53b0aa:c.instructions+=7;goto B53b0aa;
case 0x53b0ab:c.instructions+=6;goto B53b0ab;
case 0x53b0ae:c.instructions+=5;goto B53b0ae;
case 0x53b0af:c.instructions+=4;goto B53b0af;
case 0x53b0b3:c.instructions+=3;goto B53b0b3;
case 0x53b0ba:c.instructions+=2;goto B53b0ba;
case 0x53b0bd:c.instructions+=1;goto B53b0bd;
case 0x53b0c0:goto L53b0c0;
case 0x53b0c4:c.instructions+=2;goto B53b0c4;
case 0x53b0c6:c.instructions+=1;goto B53b0c6;
case 0x53b0c8:goto L53b0c8;
case 0x53b0cb:c.instructions+=4;goto B53b0cb;
case 0x53b0ce:c.instructions+=3;goto B53b0ce;
case 0x53b0cf:c.instructions+=2;goto B53b0cf;
case 0x53b0d0:c.instructions+=1;goto B53b0d0;
case 0x53b0d5:goto L53b0d5;
case 0x53b0e0:goto L53b0e0;
case 0x53b0e2:c.instructions+=10;goto B53b0e2;
case 0x53b0e7:c.instructions+=9;goto B53b0e7;
case 0x53b0ed:c.instructions+=8;goto B53b0ed;
case 0x53b0ee:c.instructions+=7;goto B53b0ee;
case 0x53b0f5:c.instructions+=6;goto B53b0f5;
case 0x53b0f8:c.instructions+=5;goto B53b0f8;
case 0x53b0f9:c.instructions+=4;goto B53b0f9;
case 0x53b0fd:c.instructions+=3;goto B53b0fd;
case 0x53b100:c.instructions+=2;goto B53b100;
case 0x53b104:c.instructions+=1;goto B53b104;
case 0x53b10a:goto L53b10a;
case 0x53b10d:c.instructions+=1;goto B53b10d;
case 0x53b113:goto L53b113;
case 0x53b114:c.instructions+=11;goto B53b114;
case 0x53b115:c.instructions+=10;goto B53b115;
case 0x53b119:c.instructions+=9;goto B53b119;
case 0x53b11d:c.instructions+=8;goto B53b11d;
case 0x53b11e:c.instructions+=7;goto B53b11e;
case 0x53b122:c.instructions+=6;goto B53b122;
case 0x53b126:c.instructions+=5;goto B53b126;
case 0x53b129:c.instructions+=4;goto B53b129;
case 0x53b12c:c.instructions+=3;goto B53b12c;
case 0x53b12e:c.instructions+=2;goto B53b12e;
case 0x53b136:c.instructions+=1;goto B53b136;
case 0x53b138:goto L53b138;
case 0x53b13b:c.instructions+=2;goto B53b13b;
case 0x53b13d:c.instructions+=1;goto B53b13d;
case 0x53b13f:goto L53b13f;
case 0x53b140:c.instructions+=2;goto B53b140;
case 0x53b141:c.instructions+=1;goto B53b141;
case 0x53b146:goto L53b146;
case 0x53b148:c.instructions+=1;goto B53b148;
case 0x53b14a:goto L53b14a;
case 0x53b14c:c.instructions+=1;goto B53b14c;
case 0x53b151:goto L53b151;
case 0x53b154:c.instructions+=2;goto B53b154;
case 0x53b156:c.instructions+=1;goto B53b156;
case 0x53b158:goto L53b158;
case 0x53b15b:c.instructions+=4;goto B53b15b;
case 0x53b15e:c.instructions+=3;goto B53b15e;
case 0x53b161:c.instructions+=2;goto B53b161;
case 0x53b164:c.instructions+=1;goto B53b164;
case 0x53b166:goto L53b166;
case 0x53b168:goto L53b168;
case 0x53b16c:c.instructions+=7;goto B53b16c;
case 0x53b16e:c.instructions+=6;goto B53b16e;
case 0x53b172:c.instructions+=5;goto B53b172;
case 0x53b175:c.instructions+=4;goto B53b175;
case 0x53b179:c.instructions+=3;goto B53b179;
case 0x53b17b:c.instructions+=2;goto B53b17b;
case 0x53b17f:c.instructions+=1;goto B53b17f;
case 0x53b183:goto L53b183;
case 0x53b185:c.instructions+=2;goto B53b185;
case 0x53b187:c.instructions+=1;goto B53b187;
case 0x53b189:goto L53b189;
case 0x53b18b:c.instructions+=2;goto B53b18b;
case 0x53b18d:c.instructions+=1;goto B53b18d;
case 0x53b18f:goto L53b18f;
case 0x53b190:goto L53b190;
case 0x53b192:c.instructions+=5;goto B53b192;
case 0x53b195:c.instructions+=4;goto B53b195;
case 0x53b197:c.instructions+=3;goto B53b197;
case 0x53b198:c.instructions+=2;goto B53b198;
case 0x53b19b:c.instructions+=1;goto B53b19b;
case 0x53b1a0:goto L53b1a0;
case 0x53b1a2:c.instructions+=3;goto B53b1a2;
case 0x53b1a5:c.instructions+=2;goto B53b1a5;
case 0x53b1a7:c.instructions+=1;goto B53b1a7;
case 0x53b1a9:goto L53b1a9;
case 0x53b1ad:goto L53b1ad;
case 0x53b1b1:c.instructions+=1;goto B53b1b1;
case 0x53b1b6:goto L53b1b6;
case 0x53b1b8:c.instructions+=2;goto B53b1b8;
case 0x53b1ba:c.instructions+=1;goto B53b1ba;
case 0x53b1bc:goto L53b1bc;
case 0x53b1c0:goto L53b1c0;
case 0x53b1c2:c.instructions+=1;goto B53b1c2;
case 0x53b1c7:goto L53b1c7;
case 0x53b1ca:c.instructions+=2;goto B53b1ca;
case 0x53b1cc:c.instructions+=1;goto B53b1cc;
case 0x53b1ce:goto L53b1ce;
case 0x53b1d1:c.instructions+=4;goto B53b1d1;
case 0x53b1d4:c.instructions+=3;goto B53b1d4;
case 0x53b1d7:c.instructions+=2;goto B53b1d7;
case 0x53b1da:c.instructions+=1;goto B53b1da;
case 0x53b1dc:goto L53b1dc;
case 0x53b1de:goto L53b1de;
case 0x53b1e1:c.instructions+=7;goto B53b1e1;
case 0x53b1e3:c.instructions+=6;goto B53b1e3;
case 0x53b1e6:c.instructions+=5;goto B53b1e6;
case 0x53b1e9:c.instructions+=4;goto B53b1e9;
case 0x53b1eb:c.instructions+=3;goto B53b1eb;
case 0x53b1ed:c.instructions+=2;goto B53b1ed;
case 0x53b1ef:c.instructions+=1;goto B53b1ef;
case 0x53b1f1:goto L53b1f1;
case 0x53b1f5:goto L53b1f5;
case 0x53b1f9:c.instructions+=2;goto B53b1f9;
case 0x53b1fb:c.instructions+=1;goto B53b1fb;
case 0x53b1fd:goto L53b1fd;
case 0x53b200:goto L53b200;
case 0x53b202:c.instructions+=6;goto B53b202;
case 0x53b204:c.instructions+=5;goto B53b204;
case 0x53b207:c.instructions+=4;goto B53b207;
case 0x53b209:c.instructions+=3;goto B53b209;
case 0x53b20a:c.instructions+=2;goto B53b20a;
case 0x53b20d:c.instructions+=1;goto B53b20d;
case 0x53b212:goto L53b212;
case 0x53b216:c.instructions+=4;goto B53b216;
case 0x53b21a:c.instructions+=3;goto B53b21a;
case 0x53b21d:c.instructions+=2;goto B53b21d;
case 0x53b21f:c.instructions+=1;goto B53b21f;
case 0x53b221:goto L53b221;
case 0x53b225:c.instructions+=3;goto B53b225;
case 0x53b227:c.instructions+=2;goto B53b227;
case 0x53b22f:c.instructions+=1;goto B53b22f;
case 0x53b231:goto L53b231;
case 0x53b233:c.instructions+=6;goto B53b233;
case 0x53b235:c.instructions+=5;goto B53b235;
case 0x53b238:c.instructions+=4;goto B53b238;
case 0x53b23a:c.instructions+=3;goto B53b23a;
case 0x53b23b:c.instructions+=2;goto B53b23b;
case 0x53b23e:c.instructions+=1;goto B53b23e;
case 0x53b243:goto L53b243;
case 0x53b247:c.instructions+=4;goto B53b247;
case 0x53b24b:c.instructions+=3;goto B53b24b;
case 0x53b24e:c.instructions+=2;goto B53b24e;
case 0x53b250:c.instructions+=1;goto B53b250;
case 0x53b252:goto L53b252;
case 0x53b253:c.instructions+=2;goto B53b253;
case 0x53b254:c.instructions+=1;goto B53b254;
case 0x53b255:goto L53b255;
case 0x53b259:c.instructions+=4;goto B53b259;
case 0x53b25a:c.instructions+=3;goto B53b25a;
case 0x53b261:c.instructions+=2;goto B53b261;
case 0x53b264:c.instructions+=1;goto B53b264;
case 0x53b270:goto L53b270;
case 0x53b271:c.instructions+=14;goto B53b271;
case 0x53b273:c.instructions+=13;goto B53b273;
case 0x53b276:c.instructions+=12;goto B53b276;
case 0x53b278:c.instructions+=11;goto B53b278;
case 0x53b27d:c.instructions+=10;goto B53b27d;
case 0x53b283:c.instructions+=9;goto B53b283;
case 0x53b284:c.instructions+=8;goto B53b284;
case 0x53b28b:c.instructions+=7;goto B53b28b;
case 0x53b28e:c.instructions+=6;goto B53b28e;
case 0x53b291:c.instructions+=5;goto B53b291;
case 0x53b294:c.instructions+=4;goto B53b294;
case 0x53b295:c.instructions+=3;goto B53b295;
case 0x53b296:c.instructions+=2;goto B53b296;
case 0x53b297:c.instructions+=1;goto B53b297;
case 0x53b29d:goto L53b29d;
case 0x53b2a0:c.instructions+=1;goto B53b2a0;
case 0x53b2a6:goto L53b2a6;
case 0x53b2aa:c.instructions+=8;goto B53b2aa;
case 0x53b2ae:c.instructions+=7;goto B53b2ae;
case 0x53b2b2:c.instructions+=6;goto B53b2b2;
case 0x53b2b6:c.instructions+=5;goto B53b2b6;
case 0x53b2b9:c.instructions+=4;goto B53b2b9;
case 0x53b2bc:c.instructions+=3;goto B53b2bc;
case 0x53b2be:c.instructions+=2;goto B53b2be;
case 0x53b2c6:c.instructions+=1;goto B53b2c6;
case 0x53b2c8:goto L53b2c8;
case 0x53b2cb:c.instructions+=1;goto B53b2cb;
case 0x53b2cd:goto L53b2cd;
case 0x53b2cf:c.instructions+=1;goto B53b2cf;
case 0x53b2d4:goto L53b2d4;
case 0x53b2d7:c.instructions+=2;goto B53b2d7;
case 0x53b2d9:c.instructions+=1;goto B53b2d9;
case 0x53b2db:goto L53b2db;
case 0x53b2de:c.instructions+=4;goto B53b2de;
case 0x53b2e1:c.instructions+=3;goto B53b2e1;
case 0x53b2e4:c.instructions+=2;goto B53b2e4;
case 0x53b2e7:c.instructions+=1;goto B53b2e7;
case 0x53b2e9:goto L53b2e9;
case 0x53b2eb:goto L53b2eb;
case 0x53b2ef:c.instructions+=7;goto B53b2ef;
case 0x53b2f1:c.instructions+=6;goto B53b2f1;
case 0x53b2f5:c.instructions+=5;goto B53b2f5;
case 0x53b2f8:c.instructions+=4;goto B53b2f8;
case 0x53b2fc:c.instructions+=3;goto B53b2fc;
case 0x53b2fe:c.instructions+=2;goto B53b2fe;
case 0x53b302:c.instructions+=1;goto B53b302;
case 0x53b305:goto L53b305;
case 0x53b307:c.instructions+=2;goto B53b307;
case 0x53b309:c.instructions+=1;goto B53b309;
case 0x53b30b:goto L53b30b;
case 0x53b30d:c.instructions+=2;goto B53b30d;
case 0x53b30f:c.instructions+=1;goto B53b30f;
case 0x53b311:goto L53b311;
case 0x53b313:c.instructions+=5;goto B53b313;
case 0x53b316:c.instructions+=4;goto B53b316;
case 0x53b318:c.instructions+=3;goto B53b318;
case 0x53b319:c.instructions+=2;goto B53b319;
case 0x53b31c:c.instructions+=1;goto B53b31c;
case 0x53b321:goto L53b321;
case 0x53b323:c.instructions+=3;goto B53b323;
case 0x53b326:c.instructions+=2;goto B53b326;
case 0x53b328:c.instructions+=1;goto B53b328;
case 0x53b32a:goto L53b32a;
case 0x53b32e:goto L53b32e;
case 0x53b332:c.instructions+=1;goto B53b332;
case 0x53b337:goto L53b337;
case 0x53b339:c.instructions+=2;goto B53b339;
case 0x53b33b:c.instructions+=1;goto B53b33b;
case 0x53b33d:goto L53b33d;
case 0x53b340:goto L53b340;
case 0x53b342:c.instructions+=1;goto B53b342;
case 0x53b347:goto L53b347;
case 0x53b34a:c.instructions+=2;goto B53b34a;
case 0x53b34c:c.instructions+=1;goto B53b34c;
case 0x53b34e:goto L53b34e;
case 0x53b351:c.instructions+=4;goto B53b351;
case 0x53b354:c.instructions+=3;goto B53b354;
case 0x53b357:c.instructions+=2;goto B53b357;
case 0x53b35a:c.instructions+=1;goto B53b35a;
case 0x53b35c:goto L53b35c;
case 0x53b35e:goto L53b35e;
case 0x53b361:c.instructions+=7;goto B53b361;
case 0x53b363:c.instructions+=6;goto B53b363;
case 0x53b366:c.instructions+=5;goto B53b366;
case 0x53b369:c.instructions+=4;goto B53b369;
case 0x53b36b:c.instructions+=3;goto B53b36b;
case 0x53b36d:c.instructions+=2;goto B53b36d;
case 0x53b36f:c.instructions+=1;goto B53b36f;
case 0x53b371:goto L53b371;
case 0x53b375:goto L53b375;
case 0x53b379:c.instructions+=2;goto B53b379;
case 0x53b37b:c.instructions+=1;goto B53b37b;
case 0x53b37d:goto L53b37d;
case 0x53b380:goto L53b380;
case 0x53b382:c.instructions+=6;goto B53b382;
case 0x53b384:c.instructions+=5;goto B53b384;
case 0x53b387:c.instructions+=4;goto B53b387;
case 0x53b389:c.instructions+=3;goto B53b389;
case 0x53b38a:c.instructions+=2;goto B53b38a;
case 0x53b38d:c.instructions+=1;goto B53b38d;
case 0x53b392:goto L53b392;
case 0x53b396:c.instructions+=4;goto B53b396;
case 0x53b39a:c.instructions+=3;goto B53b39a;
case 0x53b39d:c.instructions+=2;goto B53b39d;
case 0x53b39f:c.instructions+=1;goto B53b39f;
case 0x53b3a1:goto L53b3a1;
case 0x53b3a5:c.instructions+=3;goto B53b3a5;
case 0x53b3a7:c.instructions+=2;goto B53b3a7;
case 0x53b3af:c.instructions+=1;goto B53b3af;
case 0x53b3b1:goto L53b3b1;
case 0x53b3b3:c.instructions+=6;goto B53b3b3;
case 0x53b3b5:c.instructions+=5;goto B53b3b5;
case 0x53b3b8:c.instructions+=4;goto B53b3b8;
case 0x53b3ba:c.instructions+=3;goto B53b3ba;
case 0x53b3bb:c.instructions+=2;goto B53b3bb;
case 0x53b3be:c.instructions+=1;goto B53b3be;
case 0x53b3c3:goto L53b3c3;
case 0x53b3c7:c.instructions+=4;goto B53b3c7;
case 0x53b3cb:c.instructions+=3;goto B53b3cb;
case 0x53b3ce:c.instructions+=2;goto B53b3ce;
case 0x53b3d0:c.instructions+=1;goto B53b3d0;
case 0x53b3d2:goto L53b3d2;
case 0x53b3d6:c.instructions+=7;goto B53b3d6;
case 0x53b3d7:c.instructions+=6;goto B53b3d7;
case 0x53b3d8:c.instructions+=5;goto B53b3d8;
case 0x53b3df:c.instructions+=4;goto B53b3df;
case 0x53b3e0:c.instructions+=3;goto B53b3e0;
case 0x53b3e2:c.instructions+=2;goto B53b3e2;
case 0x53b3e3:c.instructions+=1;goto B53b3e3;
case 0x53b3f0:goto L53b3f0;
case 0x53b3f3:c.instructions+=4;goto B53b3f3;
case 0x53b3f4:c.instructions+=3;goto B53b3f4;
case 0x53b3f7:c.instructions+=2;goto B53b3f7;
case 0x53b3f9:c.instructions+=1;goto B53b3f9;
case 0x53b3fb:goto L53b3fb;
case 0x53b400:goto L53b400;
case 0x53b402:c.instructions+=5;goto B53b402;
case 0x53b405:c.instructions+=4;goto B53b405;
case 0x53b407:c.instructions+=3;goto B53b407;
case 0x53b408:c.instructions+=2;goto B53b408;
case 0x53b40b:c.instructions+=1;goto B53b40b;
case 0x53b410:goto L53b410;
case 0x53b412:c.instructions+=3;goto B53b412;
case 0x53b415:c.instructions+=2;goto B53b415;
case 0x53b417:c.instructions+=1;goto B53b417;
case 0x53b419:goto L53b419;
case 0x53b41a:c.instructions+=1;goto B53b41a;
case 0x53b420:goto L53b420;
case 0x53b423:c.instructions+=9;goto B53b423;
case 0x53b424:c.instructions+=8;goto B53b424;
case 0x53b425:c.instructions+=7;goto B53b425;
case 0x53b427:c.instructions+=6;goto B53b427;
case 0x53b42a:c.instructions+=5;goto B53b42a;
case 0x53b42b:c.instructions+=4;goto B53b42b;
case 0x53b42e:c.instructions+=3;goto B53b42e;
case 0x53b430:c.instructions+=2;goto B53b430;
case 0x53b434:c.instructions+=1;goto B53b434;
case 0x53b43a:goto L53b43a;
case 0x53b43b:c.instructions+=1;goto B53b43b;
case 0x53b43d:goto L53b43d;
case 0x53b441:goto L53b441;
case 0x53b443:c.instructions+=1;goto B53b443;
case 0x53b449:goto L53b449;
case 0x53b44c:c.instructions+=5;goto B53b44c;
case 0x53b44f:c.instructions+=4;goto B53b44f;
case 0x53b450:c.instructions+=3;goto B53b450;
case 0x53b452:c.instructions+=2;goto B53b452;
case 0x53b456:c.instructions+=1;goto B53b456;
case 0x53b45b:goto L53b45b;
case 0x53b45f:c.instructions+=2;goto B53b45f;
case 0x53b461:c.instructions+=1;goto B53b461;
case 0x53b463:goto L53b463;
case 0x53b466:c.instructions+=1;goto B53b466;
case 0x53b468:goto L53b468;
case 0x53b46b:c.instructions+=1;goto B53b46b;
case 0x53b46d:goto L53b46d;
case 0x53b46f:c.instructions+=1;goto B53b46f;
case 0x53b471:goto L53b471;
case 0x53b473:c.instructions+=3;goto B53b473;
case 0x53b475:c.instructions+=2;goto B53b475;
case 0x53b47a:c.instructions+=1;goto B53b47a;
case 0x53b47c:goto L53b47c;
case 0x53b480:goto L53b480;
case 0x53b483:c.instructions+=5;goto B53b483;
case 0x53b486:c.instructions+=4;goto B53b486;
case 0x53b487:c.instructions+=3;goto B53b487;
case 0x53b488:c.instructions+=2;goto B53b488;
case 0x53b48a:c.instructions+=1;goto B53b48a;
case 0x53b48f:goto L53b48f;
case 0x53b491:c.instructions+=1;goto B53b491;
case 0x53b493:goto L53b493;
case 0x53b494:c.instructions+=2;goto B53b494;
case 0x53b49a:c.instructions+=1;goto B53b49a;
case 0x53b49f:goto L53b49f;
case 0x53b4a1:c.instructions+=1;goto B53b4a1;
case 0x53b4a3:goto L53b4a3;
case 0x53b4a5:c.instructions+=3;goto B53b4a5;
case 0x53b4a8:c.instructions+=2;goto B53b4a8;
case 0x53b4aa:c.instructions+=1;goto B53b4aa;
case 0x53b4ac:goto L53b4ac;
case 0x53b4ae:goto L53b4ae;
case 0x53b4b3:goto L53b4b3;
case 0x53b4b7:c.instructions+=4;goto B53b4b7;
case 0x53b4b9:c.instructions+=3;goto B53b4b9;
case 0x53b4bc:c.instructions+=2;goto B53b4bc;
case 0x53b4be:c.instructions+=1;goto B53b4be;
case 0x53b4c0:goto L53b4c0;
case 0x53b4c1:c.instructions+=2;goto B53b4c1;
case 0x53b4c3:c.instructions+=1;goto B53b4c3;
case 0x53b4c8:goto L53b4c8;
case 0x53b4cb:c.instructions+=2;goto B53b4cb;
case 0x53b4cf:c.instructions+=1;goto B53b4cf;
case 0x53b4d1:goto L53b4d1;
case 0x53b4d5:goto L53b4d5;
case 0x53b4d7:c.instructions+=1;goto B53b4d7;
case 0x53b4db:goto L53b4db;
case 0x53b4df:c.instructions+=3;goto B53b4df;
case 0x53b4e2:c.instructions+=2;goto B53b4e2;
case 0x53b4e4:c.instructions+=1;goto B53b4e4;
case 0x53b4ea:goto L53b4ea;
case 0x53b4eb:goto L53b4eb;
case 0x53b4ec:c.instructions+=4;goto B53b4ec;
case 0x53b4ed:c.instructions+=3;goto B53b4ed;
case 0x53b4ee:c.instructions+=2;goto B53b4ee;
case 0x53b4f1:c.instructions+=1;goto B53b4f1;
case 0x53b500:goto L53b500;
case 0x53b505:c.instructions+=2;goto B53b505;
case 0x53b508:c.instructions+=1;goto B53b508;
case 0x53b50a:goto L53b50a;
case 0x53b50e:c.instructions+=2;goto B53b50e;
case 0x53b513:c.instructions+=1;goto B53b513;
case 0x53b515:goto L53b515;
case 0x53b517:c.instructions+=1;goto B53b517;
case 0x53b51d:goto L53b51d;
case 0x53b521:c.instructions+=3;goto B53b521;
case 0x53b522:c.instructions+=2;goto B53b522;
case 0x53b524:c.instructions+=1;goto B53b524;
case 0x53b529:goto L53b529;
case 0x53b52c:c.instructions+=1;goto B53b52c;
case 0x53b52f:goto L53b52f;
case 0x53b531:c.instructions+=1;goto B53b531;
case 0x53b537:goto L53b537;
case 0x53b53b:c.instructions+=3;goto B53b53b;
case 0x53b53c:c.instructions+=2;goto B53b53c;
case 0x53b53e:c.instructions+=1;goto B53b53e;
case 0x53b543:goto L53b543;
case 0x53b546:c.instructions+=1;goto B53b546;
case 0x53b549:goto L53b549;
case 0x53b54c:c.instructions+=1;goto B53b54c;
case 0x53b54e:goto L53b54e;
case 0x53b554:c.instructions+=3;goto B53b554;
case 0x53b557:c.instructions+=2;goto B53b557;
case 0x53b55c:c.instructions+=1;goto B53b55c;
case 0x53b55e:goto L53b55e;
case 0x53b565:goto L53b565;
case 0x53b56a:c.instructions+=1;goto B53b56a;
case 0x53b56c:goto L53b56c;
case 0x53b571:c.instructions+=1;goto B53b571;
case 0x53b573:goto L53b573;
case 0x53b578:c.instructions+=1;goto B53b578;
case 0x53b57a:goto L53b57a;
case 0x53b57f:c.instructions+=1;goto B53b57f;
case 0x53b581:goto L53b581;
case 0x53b586:c.instructions+=1;goto B53b586;
case 0x53b588:goto L53b588;
case 0x53b58d:goto L53b58d;
case 0x53b590:c.instructions+=5;goto B53b590;
case 0x53b594:c.instructions+=4;goto B53b594;
case 0x53b595:c.instructions+=3;goto B53b595;
case 0x53b596:c.instructions+=2;goto B53b596;
case 0x53b597:c.instructions+=1;goto B53b597;
case 0x53b59c:goto L53b59c;
case 0x53b59f:c.instructions+=1;goto B53b59f;
case 0x53b5a2:goto L53b5a2;
case 0x53b5a7:c.instructions+=2;goto B53b5a7;
case 0x53b5a9:c.instructions+=1;goto B53b5a9;
case 0x53b5ab:goto L53b5ab;
case 0x53b5af:c.instructions+=3;goto B53b5af;
case 0x53b5b0:c.instructions+=2;goto B53b5b0;
case 0x53b5b2:c.instructions+=1;goto B53b5b2;
case 0x53b5b7:goto L53b5b7;
case 0x53b5ba:c.instructions+=1;goto B53b5ba;
case 0x53b5bd:goto L53b5bd;
case 0x53b5bf:c.instructions+=1;goto B53b5bf;
case 0x53b5e0:goto L53b5e0;
case 0x53b5e1:c.instructions+=6;goto B53b5e1;
case 0x53b5e3:c.instructions+=5;goto B53b5e3;
case 0x53b5e4:c.instructions+=4;goto B53b5e4;
case 0x53b5e5:c.instructions+=3;goto B53b5e5;
case 0x53b5e8:c.instructions+=2;goto B53b5e8;
case 0x53b5ea:c.instructions+=1;goto B53b5ea;
case 0x53b5ec:goto L53b5ec;
case 0x53b5ef:c.instructions+=3;goto B53b5ef;
case 0x53b5f1:c.instructions+=2;goto B53b5f1;
case 0x53b5f3:c.instructions+=1;goto B53b5f3;
case 0x53b5f5:goto L53b5f5;
case 0x53b5f7:goto L53b5f7;
case 0x53b5fa:c.instructions+=4;goto B53b5fa;
case 0x53b5fe:c.instructions+=3;goto B53b5fe;
case 0x53b5ff:c.instructions+=2;goto B53b5ff;
case 0x53b604:c.instructions+=1;goto B53b604;
case 0x53b609:goto L53b609;
case 0x53b60b:c.instructions+=1;goto B53b60b;
case 0x53b60d:goto L53b60d;
case 0x53b610:c.instructions+=4;goto B53b610;
case 0x53b612:c.instructions+=3;goto B53b612;
case 0x53b615:c.instructions+=2;goto B53b615;
case 0x53b617:c.instructions+=1;goto B53b617;
case 0x53b619:goto L53b619;
case 0x53b61a:c.instructions+=4;goto B53b61a;
case 0x53b61c:c.instructions+=3;goto B53b61c;
case 0x53b61d:c.instructions+=2;goto B53b61d;
case 0x53b61e:c.instructions+=1;goto B53b61e;
case 0x53b621:goto L53b621;
case 0x53b622:c.instructions+=4;goto B53b622;
case 0x53b624:c.instructions+=3;goto B53b624;
case 0x53b625:c.instructions+=2;goto B53b625;
case 0x53b626:c.instructions+=1;goto B53b626;
case 0x53b630:goto L53b630;
case 0x53b635:c.instructions+=2;goto B53b635;
case 0x53b636:c.instructions+=1;goto B53b636;
case 0x53b63b:goto L53b63b;
case 0x53b63d:c.instructions+=3;goto B53b63d;
case 0x53b640:c.instructions+=2;goto B53b640;
case 0x53b642:c.instructions+=1;goto B53b642;
case 0x53b644:goto L53b644;
case 0x53b647:c.instructions+=3;goto B53b647;
case 0x53b64a:c.instructions+=2;goto B53b64a;
case 0x53b64d:c.instructions+=1;goto B53b64d;
case 0x53b650:goto L53b650;
case 0x53b660:goto L53b660;
case 0x53b665:c.instructions+=2;goto B53b665;
case 0x53b666:c.instructions+=1;goto B53b666;
case 0x53b66b:goto L53b66b;
case 0x53b66e:c.instructions+=2;goto B53b66e;
case 0x53b670:c.instructions+=1;goto B53b670;
case 0x53b672:goto L53b672;
case 0x53b677:c.instructions+=4;goto B53b677;
case 0x53b67a:c.instructions+=3;goto B53b67a;
case 0x53b67d:c.instructions+=2;goto B53b67d;
case 0x53b680:c.instructions+=1;goto B53b680;
case 0x53b683:goto L53b683;
case 0x53b690:goto L53b690;
case 0x53b695:c.instructions+=2;goto B53b695;
case 0x53b696:c.instructions+=1;goto B53b696;
case 0x53b69b:goto L53b69b;
case 0x53b69d:c.instructions+=3;goto B53b69d;
case 0x53b6a0:c.instructions+=2;goto B53b6a0;
case 0x53b6a2:c.instructions+=1;goto B53b6a2;
case 0x53b6a4:goto L53b6a4;
case 0x53b6a7:c.instructions+=3;goto B53b6a7;
case 0x53b6aa:c.instructions+=2;goto B53b6aa;
case 0x53b6ad:c.instructions+=1;goto B53b6ad;
case 0x53b6b0:goto L53b6b0;
case 0x53b6c0:goto L53b6c0;
case 0x53b6c5:c.instructions+=2;goto B53b6c5;
case 0x53b6c6:c.instructions+=1;goto B53b6c6;
case 0x53b6cb:goto L53b6cb;
case 0x53b6ce:c.instructions+=2;goto B53b6ce;
case 0x53b6d0:c.instructions+=1;goto B53b6d0;
case 0x53b6d2:goto L53b6d2;
case 0x53b6d7:c.instructions+=4;goto B53b6d7;
case 0x53b6da:c.instructions+=3;goto B53b6da;
case 0x53b6dd:c.instructions+=2;goto B53b6dd;
case 0x53b6e0:c.instructions+=1;goto B53b6e0;
case 0x53b6e3:goto L53b6e3;
case 0x53b6f0:goto L53b6f0;
case 0x53b6f1:c.instructions+=3;goto B53b6f1;
case 0x53b6f3:c.instructions+=2;goto B53b6f3;
case 0x53b6f6:c.instructions+=1;goto B53b6f6;
case 0x53b6fb:goto L53b6fb;
case 0x53b6ff:c.instructions+=2;goto B53b6ff;
case 0x53b700:c.instructions+=1;goto B53b700;
case 0x53b710:goto L53b710;
case 0x53b715:c.instructions+=2;goto B53b715;
case 0x53b716:c.instructions+=1;goto B53b716;
case 0x53b71b:goto L53b71b;
case 0x53b71d:c.instructions+=3;goto B53b71d;
case 0x53b720:c.instructions+=2;goto B53b720;
case 0x53b722:c.instructions+=1;goto B53b722;
case 0x53b724:goto L53b724;
case 0x53b727:c.instructions+=3;goto B53b727;
case 0x53b72a:c.instructions+=2;goto B53b72a;
case 0x53b72d:c.instructions+=1;goto B53b72d;
case 0x53b730:goto L53b730;
case 0x53b740:goto L53b740;
case 0x53b745:c.instructions+=2;goto B53b745;
case 0x53b746:c.instructions+=1;goto B53b746;
case 0x53b74b:goto L53b74b;
case 0x53b74e:c.instructions+=2;goto B53b74e;
case 0x53b750:c.instructions+=1;goto B53b750;
case 0x53b752:goto L53b752;
case 0x53b757:c.instructions+=4;goto B53b757;
case 0x53b75a:c.instructions+=3;goto B53b75a;
case 0x53b75d:c.instructions+=2;goto B53b75d;
case 0x53b760:c.instructions+=1;goto B53b760;
case 0x53b763:goto L53b763;
case 0x53b770:goto L53b770;
case 0x53b771:c.instructions+=3;goto B53b771;
case 0x53b773:c.instructions+=2;goto B53b773;
case 0x53b77a:c.instructions+=1;goto B53b77a;
case 0x53b77c:goto L53b77c;
case 0x53b77f:c.instructions+=5;goto B53b77f;
case 0x53b784:c.instructions+=4;goto B53b784;
case 0x53b787:c.instructions+=3;goto B53b787;
case 0x53b788:c.instructions+=2;goto B53b788;
case 0x53b78d:c.instructions+=1;goto B53b78d;
case 0x53b792:goto L53b792;
case 0x53b795:c.instructions+=5;goto B53b795;
case 0x53b797:c.instructions+=4;goto B53b797;
case 0x53b79c:c.instructions+=3;goto B53b79c;
case 0x53b7a1:c.instructions+=2;goto B53b7a1;
case 0x53b7a2:c.instructions+=1;goto B53b7a2;
case 0x53b7a7:goto L53b7a7;
case 0x53b7aa:goto L53b7aa;
case 0x53b7ab:c.instructions+=1;goto B53b7ab;
case 0x53b7b0:goto L53b7b0;
case 0x53b7b1:c.instructions+=7;goto B53b7b1;
case 0x53b7b3:c.instructions+=6;goto B53b7b3;
case 0x53b7b6:c.instructions+=5;goto B53b7b6;
case 0x53b7b9:c.instructions+=4;goto B53b7b9;
case 0x53b7bc:c.instructions+=3;goto B53b7bc;
case 0x53b7bd:c.instructions+=2;goto B53b7bd;
case 0x53b7be:c.instructions+=1;goto B53b7be;
case 0x53b7c3:goto L53b7c3;
case 0x53b7c6:c.instructions+=5;goto B53b7c6;
case 0x53b7c8:c.instructions+=4;goto B53b7c8;
case 0x53b7cb:c.instructions+=3;goto B53b7cb;
case 0x53b7cc:c.instructions+=2;goto B53b7cc;
case 0x53b7d1:c.instructions+=1;goto B53b7d1;
case 0x53b7d6:goto L53b7d6;
case 0x53b7d8:c.instructions+=1;goto B53b7d8;
case 0x53b7da:goto L53b7da;
case 0x53b7df:c.instructions+=1;goto B53b7df;
case 0x53b7e1:goto L53b7e1;
case 0x53b7e8:c.instructions+=1;goto B53b7e8;
case 0x53b7ea:goto L53b7ea;
case 0x53b7ed:c.instructions+=3;goto B53b7ed;
case 0x53b7ee:c.instructions+=2;goto B53b7ee;
case 0x53b7f3:c.instructions+=1;goto B53b7f3;
case 0x53b7f8:goto L53b7f8;
case 0x53b7fa:c.instructions+=1;goto B53b7fa;
case 0x53b7fc:goto L53b7fc;
case 0x53b801:goto L53b801;
case 0x53b804:c.instructions+=2;goto B53b804;
case 0x53b805:c.instructions+=1;goto B53b805;
case 0x53b80a:goto L53b80a;
case 0x53b80d:c.instructions+=4;goto B53b80d;
case 0x53b80f:c.instructions+=3;goto B53b80f;
case 0x53b814:c.instructions+=2;goto B53b814;
case 0x53b815:c.instructions+=1;goto B53b815;
case 0x53b81a:goto L53b81a;
case 0x53b81d:c.instructions+=2;goto B53b81d;
case 0x53b81e:c.instructions+=1;goto B53b81e;
case 0x53b81f:goto L53b81f;
case 0x53b822:c.instructions+=4;goto B53b822;
case 0x53b824:c.instructions+=3;goto B53b824;
case 0x53b829:c.instructions+=2;goto B53b829;
case 0x53b82a:c.instructions+=1;goto B53b82a;
case 0x53b82f:goto L53b82f;
case 0x53b832:c.instructions+=6;goto B53b832;
case 0x53b835:c.instructions+=5;goto B53b835;
case 0x53b838:c.instructions+=4;goto B53b838;
case 0x53b839:c.instructions+=3;goto B53b839;
case 0x53b83e:c.instructions+=2;goto B53b83e;
case 0x53b83f:c.instructions+=1;goto B53b83f;
case 0x53b844:goto L53b844;
case 0x53b847:c.instructions+=2;goto B53b847;
case 0x53b848:c.instructions+=1;goto B53b848;
case 0x53b849:goto L53b849;
case 0x53b84c:c.instructions+=3;goto B53b84c;
case 0x53b851:c.instructions+=2;goto B53b851;
case 0x53b852:c.instructions+=1;goto B53b852;
case 0x53b857:goto L53b857;
case 0x53b85a:c.instructions+=4;goto B53b85a;
case 0x53b85c:c.instructions+=3;goto B53b85c;
case 0x53b861:c.instructions+=2;goto B53b861;
case 0x53b862:c.instructions+=1;goto B53b862;
case 0x53b867:goto L53b867;
case 0x53b86a:c.instructions+=2;goto B53b86a;
case 0x53b86b:c.instructions+=1;goto B53b86b;
case 0x53b870:goto L53b870;
case 0x53b871:c.instructions+=7;goto B53b871;
case 0x53b873:c.instructions+=6;goto B53b873;
case 0x53b876:c.instructions+=5;goto B53b876;
case 0x53b879:c.instructions+=4;goto B53b879;
case 0x53b87c:c.instructions+=3;goto B53b87c;
case 0x53b87d:c.instructions+=2;goto B53b87d;
case 0x53b87e:c.instructions+=1;goto B53b87e;
case 0x53b883:goto L53b883;
case 0x53b886:c.instructions+=5;goto B53b886;
case 0x53b888:c.instructions+=4;goto B53b888;
case 0x53b88b:c.instructions+=3;goto B53b88b;
case 0x53b88c:c.instructions+=2;goto B53b88c;
case 0x53b891:c.instructions+=1;goto B53b891;
case 0x53b896:goto L53b896;
case 0x53b898:c.instructions+=1;goto B53b898;
case 0x53b89a:goto L53b89a;
case 0x53b89f:c.instructions+=1;goto B53b89f;
case 0x53b8a1:goto L53b8a1;
case 0x53b8a8:c.instructions+=1;goto B53b8a8;
case 0x53b8aa:goto L53b8aa;
case 0x53b8ad:c.instructions+=3;goto B53b8ad;
case 0x53b8ae:c.instructions+=2;goto B53b8ae;
case 0x53b8b3:c.instructions+=1;goto B53b8b3;
case 0x53b8b8:goto L53b8b8;
case 0x53b8ba:c.instructions+=1;goto B53b8ba;
case 0x53b8bc:goto L53b8bc;
case 0x53b8c1:goto L53b8c1;
case 0x53b8c4:c.instructions+=2;goto B53b8c4;
case 0x53b8c5:c.instructions+=1;goto B53b8c5;
case 0x53b8ca:goto L53b8ca;
case 0x53b8cd:c.instructions+=4;goto B53b8cd;
case 0x53b8cf:c.instructions+=3;goto B53b8cf;
case 0x53b8d4:c.instructions+=2;goto B53b8d4;
case 0x53b8d5:c.instructions+=1;goto B53b8d5;
case 0x53b8da:goto L53b8da;
case 0x53b8dd:c.instructions+=2;goto B53b8dd;
case 0x53b8de:c.instructions+=1;goto B53b8de;
case 0x53b8df:goto L53b8df;
case 0x53b8e2:c.instructions+=4;goto B53b8e2;
case 0x53b8e4:c.instructions+=3;goto B53b8e4;
case 0x53b8e9:c.instructions+=2;goto B53b8e9;
case 0x53b8ea:c.instructions+=1;goto B53b8ea;
case 0x53b8ef:goto L53b8ef;
case 0x53b8f2:c.instructions+=6;goto B53b8f2;
case 0x53b8f5:c.instructions+=5;goto B53b8f5;
case 0x53b8f8:c.instructions+=4;goto B53b8f8;
case 0x53b8f9:c.instructions+=3;goto B53b8f9;
case 0x53b8fe:c.instructions+=2;goto B53b8fe;
case 0x53b8ff:c.instructions+=1;goto B53b8ff;
case 0x53b904:goto L53b904;
case 0x53b907:c.instructions+=2;goto B53b907;
case 0x53b908:c.instructions+=1;goto B53b908;
case 0x53b909:goto L53b909;
case 0x53b90c:c.instructions+=3;goto B53b90c;
case 0x53b911:c.instructions+=2;goto B53b911;
case 0x53b912:c.instructions+=1;goto B53b912;
case 0x53b917:goto L53b917;
case 0x53b91a:c.instructions+=4;goto B53b91a;
case 0x53b91c:c.instructions+=3;goto B53b91c;
case 0x53b921:c.instructions+=2;goto B53b921;
case 0x53b922:c.instructions+=1;goto B53b922;
case 0x53b927:goto L53b927;
case 0x53b92a:c.instructions+=2;goto B53b92a;
case 0x53b92b:c.instructions+=1;goto B53b92b;
case 0x53b930:goto L53b930;
case 0x53b931:c.instructions+=5;goto B53b931;
case 0x53b933:c.instructions+=4;goto B53b933;
case 0x53b936:c.instructions+=3;goto B53b936;
case 0x53b93b:c.instructions+=2;goto B53b93b;
case 0x53b93c:c.instructions+=1;goto B53b93c;
case 0x53b941:goto L53b941;
case 0x53b944:c.instructions+=3;goto B53b944;
case 0x53b949:c.instructions+=2;goto B53b949;
case 0x53b94a:c.instructions+=1;goto B53b94a;
case 0x53b94f:goto L53b94f;
case 0x53b952:c.instructions+=2;goto B53b952;
case 0x53b953:c.instructions+=1;goto B53b953;
case 0x53b960:goto L53b960;
case 0x53b961:c.instructions+=8;goto B53b961;
case 0x53b963:c.instructions+=7;goto B53b963;
case 0x53b966:c.instructions+=6;goto B53b966;
case 0x53b969:c.instructions+=5;goto B53b969;
case 0x53b96c:c.instructions+=4;goto B53b96c;
case 0x53b96d:c.instructions+=3;goto B53b96d;
case 0x53b96e:c.instructions+=2;goto B53b96e;
case 0x53b96f:c.instructions+=1;goto B53b96f;
case 0x53b974:goto L53b974;
case 0x53b977:c.instructions+=4;goto B53b977;
case 0x53b97a:c.instructions+=3;goto B53b97a;
case 0x53b97e:c.instructions+=2;goto B53b97e;
case 0x53b97f:c.instructions+=1;goto B53b97f;
case 0x53b984:goto L53b984;
case 0x53b985:c.instructions+=3;goto B53b985;
case 0x53b988:c.instructions+=2;goto B53b988;
case 0x53b989:c.instructions+=1;goto B53b989;
case 0x53b98e:goto L53b98e;
case 0x53b991:c.instructions+=4;goto B53b991;
case 0x53b994:c.instructions+=3;goto B53b994;
case 0x53b998:c.instructions+=2;goto B53b998;
case 0x53b999:c.instructions+=1;goto B53b999;
case 0x53b99e:goto L53b99e;
case 0x53b99f:c.instructions+=2;goto B53b99f;
case 0x53b9a4:c.instructions+=1;goto B53b9a4;
case 0x53b9a9:goto L53b9a9;
case 0x53b9ab:c.instructions+=4;goto B53b9ab;
case 0x53b9ad:c.instructions+=3;goto B53b9ad;
case 0x53b9af:c.instructions+=2;goto B53b9af;
case 0x53b9b0:c.instructions+=1;goto B53b9b0;
case 0x53b9b5:goto L53b9b5;
case 0x53b9b8:c.instructions+=3;goto B53b9b8;
case 0x53b9bb:c.instructions+=2;goto B53b9bb;
case 0x53b9bd:c.instructions+=1;goto B53b9bd;
case 0x53b9bf:goto L53b9bf;
case 0x53b9c1:c.instructions+=1;goto B53b9c1;
case 0x53b9c3:goto L53b9c3;
case 0x53b9c6:c.instructions+=1;goto B53b9c6;
case 0x53b9c8:goto L53b9c8;
case 0x53b9cb:c.instructions+=6;goto B53b9cb;
case 0x53b9ce:c.instructions+=5;goto B53b9ce;
case 0x53b9d3:c.instructions+=4;goto B53b9d3;
case 0x53b9d4:c.instructions+=3;goto B53b9d4;
case 0x53b9d7:c.instructions+=2;goto B53b9d7;
case 0x53b9d8:c.instructions+=1;goto B53b9d8;
case 0x53b9d9:goto L53b9d9;
case 0x53b9db:c.instructions+=1;goto B53b9db;
case 0x53b9dd:goto L53b9dd;
case 0x53b9e0:c.instructions+=3;goto B53b9e0;
case 0x53b9e5:c.instructions+=2;goto B53b9e5;
case 0x53b9e7:c.instructions+=1;goto B53b9e7;
case 0x53b9e9:goto L53b9e9;
case 0x53b9ec:c.instructions+=1;goto B53b9ec;
case 0x53b9f3:goto L53b9f3;
case 0x53b9f4:c.instructions+=2;goto B53b9f4;
case 0x53b9f5:c.instructions+=1;goto B53b9f5;
case 0x53ba00:goto L53ba00;
case 0x53ba02:c.instructions+=16;goto B53ba02;
case 0x53ba07:c.instructions+=15;goto B53ba07;
case 0x53ba0d:c.instructions+=14;goto B53ba0d;
case 0x53ba0e:c.instructions+=13;goto B53ba0e;
case 0x53ba15:c.instructions+=12;goto B53ba15;
case 0x53ba18:c.instructions+=11;goto B53ba18;
case 0x53ba19:c.instructions+=10;goto B53ba19;
case 0x53ba1a:c.instructions+=9;goto B53ba1a;
case 0x53ba1c:c.instructions+=8;goto B53ba1c;
case 0x53ba22:c.instructions+=7;goto B53ba22;
case 0x53ba23:c.instructions+=6;goto B53ba23;
case 0x53ba26:c.instructions+=5;goto B53ba26;
case 0x53ba29:c.instructions+=4;goto B53ba29;
case 0x53ba2d:c.instructions+=3;goto B53ba2d;
case 0x53ba31:c.instructions+=2;goto B53ba31;
case 0x53ba35:c.instructions+=1;goto B53ba35;
case 0x53ba3a:goto L53ba3a;
case 0x53ba3c:c.instructions+=11;goto B53ba3c;
case 0x53ba40:c.instructions+=10;goto B53ba40;
case 0x53ba44:c.instructions+=9;goto B53ba44;
case 0x53ba4a:c.instructions+=8;goto B53ba4a;
case 0x53ba4e:c.instructions+=7;goto B53ba4e;
case 0x53ba52:c.instructions+=6;goto B53ba52;
case 0x53ba53:c.instructions+=5;goto B53ba53;
case 0x53ba57:c.instructions+=4;goto B53ba57;
case 0x53ba58:c.instructions+=3;goto B53ba58;
case 0x53ba59:c.instructions+=2;goto B53ba59;
case 0x53ba5d:c.instructions+=1;goto B53ba5d;
case 0x53ba62:goto L53ba62;
case 0x53ba66:c.instructions+=5;goto B53ba66;
case 0x53ba6a:c.instructions+=4;goto B53ba6a;
case 0x53ba6d:c.instructions+=3;goto B53ba6d;
case 0x53ba6f:c.instructions+=2;goto B53ba6f;
case 0x53ba73:c.instructions+=1;goto B53ba73;
case 0x53ba75:goto L53ba75;
case 0x53ba7d:c.instructions+=1;goto B53ba7d;
case 0x53ba82:goto L53ba82;
case 0x53ba83:c.instructions+=6;goto B53ba83;
case 0x53ba84:c.instructions+=5;goto B53ba84;
case 0x53ba85:c.instructions+=4;goto B53ba85;
case 0x53ba89:c.instructions+=3;goto B53ba89;
case 0x53ba90:c.instructions+=2;goto B53ba90;
case 0x53ba93:c.instructions+=1;goto B53ba93;
case 0x53ba94:goto L53ba94;
case 0x53ba96:c.instructions+=1;goto B53ba96;
case 0x53ba9b:goto L53ba9b;
case 0x53ba9d:c.instructions+=2;goto B53ba9d;
case 0x53baa1:c.instructions+=1;goto B53baa1;
case 0x53baa7:goto L53baa7;
case 0x53baab:c.instructions+=2;goto B53baab;
case 0x53baae:c.instructions+=1;goto B53baae;
case 0x53bab0:goto L53bab0;
case 0x53bab3:c.instructions+=4;goto B53bab3;
case 0x53bab6:c.instructions+=3;goto B53bab6;
case 0x53bab9:c.instructions+=2;goto B53bab9;
case 0x53babc:c.instructions+=1;goto B53babc;
case 0x53bac2:goto L53bac2;
case 0x53bac4:goto L53bac4;
case 0x53bac7:c.instructions+=1;goto B53bac7;
case 0x53bac9:goto L53bac9;
case 0x53bacf:c.instructions+=2;goto B53bacf;
case 0x53bad1:c.instructions+=1;goto B53bad1;
case 0x53bad4:goto L53bad4;
case 0x53bad7:c.instructions+=4;goto B53bad7;
case 0x53bada:c.instructions+=3;goto B53bada;
case 0x53badd:c.instructions+=2;goto B53badd;
case 0x53bae0:c.instructions+=1;goto B53bae0;
case 0x53bae2:goto L53bae2;
case 0x53bae8:c.instructions+=6;goto B53bae8;
case 0x53baee:c.instructions+=5;goto B53baee;
case 0x53baf6:c.instructions+=4;goto B53baf6;
case 0x53baf7:c.instructions+=3;goto B53baf7;
case 0x53baf9:c.instructions+=2;goto B53baf9;
case 0x53bafe:c.instructions+=1;goto B53bafe;
case 0x53bb03:goto L53bb03;
case 0x53bb06:c.instructions+=2;goto B53bb06;
case 0x53bb08:c.instructions+=1;goto B53bb08;
case 0x53bb0a:goto L53bb0a;
case 0x53bb0c:c.instructions+=1;goto B53bb0c;
case 0x53bb11:goto L53bb11;
case 0x53bb14:c.instructions+=2;goto B53bb14;
case 0x53bb16:c.instructions+=1;goto B53bb16;
case 0x53bb18:goto L53bb18;
case 0x53bb1b:c.instructions+=11;goto B53bb1b;
case 0x53bb1e:c.instructions+=10;goto B53bb1e;
case 0x53bb21:c.instructions+=9;goto B53bb21;
case 0x53bb24:c.instructions+=8;goto B53bb24;
case 0x53bb27:c.instructions+=7;goto B53bb27;
case 0x53bb2a:c.instructions+=6;goto B53bb2a;
case 0x53bb2e:c.instructions+=5;goto B53bb2e;
case 0x53bb31:c.instructions+=4;goto B53bb31;
case 0x53bb34:c.instructions+=3;goto B53bb34;
case 0x53bb3a:c.instructions+=2;goto B53bb3a;
case 0x53bb3d:c.instructions+=1;goto B53bb3d;
case 0x53bb3f:goto L53bb3f;
case 0x53bb41:goto L53bb41;
case 0x53bb45:c.instructions+=4;goto B53bb45;
case 0x53bb47:c.instructions+=3;goto B53bb47;
case 0x53bb49:c.instructions+=2;goto B53bb49;
case 0x53bb4a:c.instructions+=1;goto B53bb4a;
case 0x53bb4f:goto L53bb4f;
case 0x53bb53:c.instructions+=1;goto B53bb53;
case 0x53bb59:goto L53bb59;
case 0x53bb5d:goto L53bb5d;
case 0x53bb5f:c.instructions+=2;goto B53bb5f;
case 0x53bb63:c.instructions+=1;goto B53bb63;
case 0x53bb69:goto L53bb69;
case 0x53bb6d:c.instructions+=4;goto B53bb6d;
case 0x53bb70:c.instructions+=3;goto B53bb70;
case 0x53bb73:c.instructions+=2;goto B53bb73;
case 0x53bb75:c.instructions+=1;goto B53bb75;
case 0x53bb77:goto L53bb77;
case 0x53bb7b:c.instructions+=3;goto B53bb7b;
case 0x53bb7d:c.instructions+=2;goto B53bb7d;
case 0x53bb85:c.instructions+=1;goto B53bb85;
case 0x53bb8b:goto L53bb8b;
case 0x53bb90:goto L53bb90;
case 0x53bb92:c.instructions+=6;goto B53bb92;
case 0x53bb94:c.instructions+=5;goto B53bb94;
case 0x53bb97:c.instructions+=4;goto B53bb97;
case 0x53bb99:c.instructions+=3;goto B53bb99;
case 0x53bb9a:c.instructions+=2;goto B53bb9a;
case 0x53bb9d:c.instructions+=1;goto B53bb9d;
case 0x53bba2:goto L53bba2;
case 0x53bba6:c.instructions+=4;goto B53bba6;
case 0x53bbaa:c.instructions+=3;goto B53bbaa;
case 0x53bbad:c.instructions+=2;goto B53bbad;
case 0x53bbaf:c.instructions+=1;goto B53bbaf;
case 0x53bbb1:goto L53bbb1;
case 0x53bbb2:c.instructions+=6;goto B53bbb2;
case 0x53bbb3:c.instructions+=5;goto B53bbb3;
case 0x53bbb4:c.instructions+=4;goto B53bbb4;
case 0x53bbb8:c.instructions+=3;goto B53bbb8;
case 0x53bbbf:c.instructions+=2;goto B53bbbf;
case 0x53bbc2:c.instructions+=1;goto B53bbc2;
case 0x53bbc3:goto L53bbc3;
case 0x53bbc7:c.instructions+=3;goto B53bbc7;
case 0x53bbc8:c.instructions+=2;goto B53bbc8;
case 0x53bbcd:c.instructions+=1;goto B53bbcd;
case 0x53bbd2:goto L53bbd2;
case 0x53bbd4:c.instructions+=1;goto B53bbd4;
case 0x53bbd6:goto L53bbd6;
case 0x53bbda:c.instructions+=3;goto B53bbda;
case 0x53bbdb:c.instructions+=2;goto B53bbdb;
case 0x53bbdd:c.instructions+=1;goto B53bbdd;
case 0x53bbe2:goto L53bbe2;
case 0x53bbe4:c.instructions+=1;goto B53bbe4;
case 0x53bbe6:goto L53bbe6;
case 0x53bbe9:c.instructions+=2;goto B53bbe9;
case 0x53bbeb:c.instructions+=1;goto B53bbeb;
case 0x53bbed:goto L53bbed;
case 0x53bbf0:c.instructions+=1;goto B53bbf0;
case 0x53bbf2:goto L53bbf2;
case 0x53bbf4:goto L53bbf4;
case 0x53bbf5:c.instructions+=2;goto B53bbf5;
case 0x53bbf7:c.instructions+=1;goto B53bbf7;
case 0x53bbfc:goto L53bbfc;
case 0x53bbfd:c.instructions+=2;goto B53bbfd;
case 0x53bc00:c.instructions+=1;goto B53bc00;
case 0x53bc05:goto L53bc05;
case 0x53bc07:goto L53bc07;
case 0x53bc0b:c.instructions+=3;goto B53bc0b;
case 0x53bc0e:c.instructions+=2;goto B53bc0e;
case 0x53bc10:c.instructions+=1;goto B53bc10;
case 0x53bc12:goto L53bc12;
case 0x53bc15:c.instructions+=1;goto B53bc15;
case 0x53bc17:goto L53bc17;
case 0x53bc19:goto L53bc19;
case 0x53bc1a:c.instructions+=1;goto B53bc1a;
case 0x53bc1f:goto L53bc1f;
case 0x53bc23:goto L53bc23;
case 0x53bc25:c.instructions+=3;goto B53bc25;
case 0x53bc27:c.instructions+=2;goto B53bc27;
case 0x53bc2b:c.instructions+=1;goto B53bc2b;
case 0x53bc30:goto L53bc30;
case 0x53bc34:c.instructions+=5;goto B53bc34;
case 0x53bc35:c.instructions+=4;goto B53bc35;
case 0x53bc36:c.instructions+=3;goto B53bc36;
case 0x53bc37:c.instructions+=2;goto B53bc37;
case 0x53bc38:c.instructions+=1;goto B53bc38;
case 0x53bc3d:goto L53bc3d;
case 0x53bc41:c.instructions+=5;goto B53bc41;
case 0x53bc45:c.instructions+=4;goto B53bc45;
case 0x53bc48:c.instructions+=3;goto B53bc48;
case 0x53bc4a:c.instructions+=2;goto B53bc4a;
case 0x53bc52:c.instructions+=1;goto B53bc52;
case 0x53bc54:goto L53bc54;
case 0x53bc56:c.instructions+=6;goto B53bc56;
case 0x53bc58:c.instructions+=5;goto B53bc58;
case 0x53bc5b:c.instructions+=4;goto B53bc5b;
case 0x53bc5d:c.instructions+=3;goto B53bc5d;
case 0x53bc5e:c.instructions+=2;goto B53bc5e;
case 0x53bc61:c.instructions+=1;goto B53bc61;
case 0x53bc66:goto L53bc66;
case 0x53bc6a:c.instructions+=4;goto B53bc6a;
case 0x53bc6e:c.instructions+=3;goto B53bc6e;
case 0x53bc71:c.instructions+=2;goto B53bc71;
case 0x53bc73:c.instructions+=1;goto B53bc73;
case 0x53bc75:goto L53bc75;
case 0x53bc79:c.instructions+=6;goto B53bc79;
case 0x53bc7a:c.instructions+=5;goto B53bc7a;
case 0x53bc7b:c.instructions+=4;goto B53bc7b;
case 0x53bc7c:c.instructions+=3;goto B53bc7c;
case 0x53bc83:c.instructions+=2;goto B53bc83;
case 0x53bc86:c.instructions+=1;goto B53bc86;
case 0x53bc90:goto L53bc90;
case 0x53bc91:c.instructions+=5;goto B53bc91;
case 0x53bc92:c.instructions+=4;goto B53bc92;
case 0x53bc93:c.instructions+=3;goto B53bc93;
case 0x53bc95:c.instructions+=2;goto B53bc95;
case 0x53bc97:c.instructions+=1;goto B53bc97;
case 0x53bc9c:goto L53bc9c;
case 0x53bca0:c.instructions+=3;goto B53bca0;
case 0x53bca3:c.instructions+=2;goto B53bca3;
case 0x53bca5:c.instructions+=1;goto B53bca5;
case 0x53bca7:goto L53bca7;
case 0x53bcad:c.instructions+=10;goto B53bcad;
case 0x53bcb1:c.instructions+=9;goto B53bcb1;
case 0x53bcb2:c.instructions+=8;goto B53bcb2;
case 0x53bcb6:c.instructions+=7;goto B53bcb6;
case 0x53bcb8:c.instructions+=6;goto B53bcb8;
case 0x53bcba:c.instructions+=5;goto B53bcba;
case 0x53bcbb:c.instructions+=4;goto B53bcbb;
case 0x53bcbc:c.instructions+=3;goto B53bcbc;
case 0x53bcbd:c.instructions+=2;goto B53bcbd;
case 0x53bcbf:c.instructions+=1;goto B53bcbf;
case 0x53bcc4:goto L53bcc4;
case 0x53bcc6:c.instructions+=1;goto B53bcc6;
case 0x53bcc8:goto L53bcc8;
case 0x53bcca:goto L53bcca;
case 0x53bcce:c.instructions+=3;goto B53bcce;
case 0x53bccf:c.instructions+=2;goto B53bccf;
case 0x53bcd2:c.instructions+=1;goto B53bcd2;
case 0x53bcd7:goto L53bcd7;
case 0x53bcda:c.instructions+=5;goto B53bcda;
case 0x53bcdd:c.instructions+=4;goto B53bcdd;
case 0x53bcdf:c.instructions+=3;goto B53bcdf;
case 0x53bce0:c.instructions+=2;goto B53bce0;
case 0x53bce2:c.instructions+=1;goto B53bce2;
case 0x53bce5:goto L53bce5;
case 0x53bce6:c.instructions+=3;goto B53bce6;
case 0x53bce7:c.instructions+=2;goto B53bce7;
case 0x53bce8:c.instructions+=1;goto B53bce8;
case 0x53bcf0:goto L53bcf0;
case 0x53bcf1:c.instructions+=3;goto B53bcf1;
case 0x53bcf4:c.instructions+=2;goto B53bcf4;
case 0x53bcf9:c.instructions+=1;goto B53bcf9;
case 0x53bcfe:goto L53bcfe;
case 0x53bcff:c.instructions+=4;goto B53bcff;
case 0x53bd04:c.instructions+=3;goto B53bd04;
case 0x53bd09:c.instructions+=2;goto B53bd09;
case 0x53bd0a:c.instructions+=1;goto B53bd0a;
case 0x53bd0f:goto L53bd0f;
case 0x53bd12:c.instructions+=2;goto B53bd12;
case 0x53bd13:c.instructions+=1;goto B53bd13;
case 0x53bd20:goto L53bd20;
case 0x53bd21:c.instructions+=2;goto B53bd21;
case 0x53bd23:c.instructions+=1;goto B53bd23;
case 0x53bd28:goto L53bd28;
case 0x53bd2e:c.instructions+=2;goto B53bd2e;
case 0x53bd30:c.instructions+=1;goto B53bd30;
case 0x53bd32:goto L53bd32;
case 0x53bd35:c.instructions+=5;goto B53bd35;
case 0x53bd37:c.instructions+=4;goto B53bd37;
case 0x53bd3c:c.instructions+=3;goto B53bd3c;
case 0x53bd41:c.instructions+=2;goto B53bd41;
case 0x53bd42:c.instructions+=1;goto B53bd42;
case 0x53bd47:goto L53bd47;
case 0x53bd4a:goto L53bd4a;
case 0x53bd4b:c.instructions+=1;goto B53bd4b;
case 0x53bd50:goto L53bd50;
case 0x53bd56:c.instructions+=12;goto B53bd56;
case 0x53bd58:c.instructions+=11;goto B53bd58;
case 0x53bd5d:c.instructions+=10;goto B53bd5d;
case 0x53bd5e:c.instructions+=9;goto B53bd5e;
case 0x53bd63:c.instructions+=8;goto B53bd63;
case 0x53bd6a:c.instructions+=7;goto B53bd6a;
case 0x53bd6d:c.instructions+=6;goto B53bd6d;
case 0x53bd70:c.instructions+=5;goto B53bd70;
case 0x53bd71:c.instructions+=4;goto B53bd71;
case 0x53bd72:c.instructions+=3;goto B53bd72;
case 0x53bd73:c.instructions+=2;goto B53bd73;
case 0x53bd75:c.instructions+=1;goto B53bd75;
case 0x53bd7b:goto L53bd7b;
case 0x53bd7c:c.instructions+=1;goto B53bd7c;
case 0x53bd7e:goto L53bd7e;
case 0x53bd7f:c.instructions+=1;goto B53bd7f;
case 0x53bd85:goto L53bd85;
case 0x53bd87:c.instructions+=1;goto B53bd87;
case 0x53bd8c:goto L53bd8c;
case 0x53bd8f:c.instructions+=2;goto B53bd8f;
case 0x53bd91:c.instructions+=1;goto B53bd91;
case 0x53bd93:goto L53bd93;
case 0x53bd95:c.instructions+=6;goto B53bd95;
case 0x53bd97:c.instructions+=5;goto B53bd97;
case 0x53bd9c:c.instructions+=4;goto B53bd9c;
case 0x53bda1:c.instructions+=3;goto B53bda1;
case 0x53bda3:c.instructions+=2;goto B53bda3;
case 0x53bda5:c.instructions+=1;goto B53bda5;
case 0x53bdaa:goto L53bdaa;
case 0x53bdaf:goto L53bdaf;
case 0x53bdb1:c.instructions+=1;goto B53bdb1;
case 0x53bdb6:goto L53bdb6;
case 0x53bdbc:c.instructions+=2;goto B53bdbc;
case 0x53bdbe:c.instructions+=1;goto B53bdbe;
case 0x53bdc4:goto L53bdc4;
case 0x53bdc6:c.instructions+=2;goto B53bdc6;
case 0x53bdcb:c.instructions+=1;goto B53bdcb;
case 0x53bdd0:goto L53bdd0;
case 0x53bdd3:c.instructions+=3;goto B53bdd3;
case 0x53bdd4:c.instructions+=2;goto B53bdd4;
case 0x53bdd6:c.instructions+=1;goto B53bdd6;
case 0x53bddb:goto L53bddb;
case 0x53bde0:c.instructions+=3;goto B53bde0;
case 0x53bde2:c.instructions+=2;goto B53bde2;
case 0x53bde6:c.instructions+=1;goto B53bde6;
case 0x53bdec:goto L53bdec;
case 0x53bdf0:goto L53bdf0;
case 0x53bdf5:c.instructions+=4;goto B53bdf5;
case 0x53bdf6:c.instructions+=3;goto B53bdf6;
case 0x53bdf7:c.instructions+=2;goto B53bdf7;
case 0x53bdf9:c.instructions+=1;goto B53bdf9;
case 0x53bdfe:goto L53bdfe;
case 0x53be00:c.instructions+=2;goto B53be00;
case 0x53be04:c.instructions+=1;goto B53be04;
case 0x53be09:goto L53be09;
case 0x53be0b:c.instructions+=5;goto B53be0b;
case 0x53be0e:c.instructions+=4;goto B53be0e;
case 0x53be12:c.instructions+=3;goto B53be12;
case 0x53be14:c.instructions+=2;goto B53be14;
case 0x53be1c:c.instructions+=1;goto B53be1c;
case 0x53be1e:goto L53be1e;
case 0x53be20:c.instructions+=5;goto B53be20;
case 0x53be22:c.instructions+=4;goto B53be22;
case 0x53be27:c.instructions+=3;goto B53be27;
case 0x53be28:c.instructions+=2;goto B53be28;
case 0x53be2d:c.instructions+=1;goto B53be2d;
case 0x53be32:goto L53be32;
case 0x53be36:c.instructions+=5;goto B53be36;
case 0x53be39:c.instructions+=4;goto B53be39;
case 0x53be3a:c.instructions+=3;goto B53be3a;
case 0x53be3b:c.instructions+=2;goto B53be3b;
case 0x53be3d:c.instructions+=1;goto B53be3d;
case 0x53be42:goto L53be42;
case 0x53be44:goto L53be44;
case 0x53be46:goto L53be46;
case 0x53be48:c.instructions+=4;goto B53be48;
case 0x53be49:c.instructions+=3;goto B53be49;
case 0x53be4b:c.instructions+=2;goto B53be4b;
case 0x53be53:c.instructions+=1;goto B53be53;
case 0x53be56:goto L53be56;
case 0x53be5a:c.instructions+=3;goto B53be5a;
case 0x53be5b:c.instructions+=2;goto B53be5b;
case 0x53be5d:c.instructions+=1;goto B53be5d;
case 0x53be5f:goto L53be5f;
case 0x53be64:goto L53be64;
case 0x53be66:c.instructions+=1;goto B53be66;
case 0x53be6b:goto L53be6b;
case 0x53be6d:c.instructions+=5;goto B53be6d;
case 0x53be70:c.instructions+=4;goto B53be70;
case 0x53be74:c.instructions+=3;goto B53be74;
case 0x53be76:c.instructions+=2;goto B53be76;
case 0x53be7e:c.instructions+=1;goto B53be7e;
case 0x53be80:goto L53be80;
case 0x53be82:c.instructions+=2;goto B53be82;
case 0x53be84:c.instructions+=1;goto B53be84;
case 0x53be89:goto L53be89;
case 0x53be8b:c.instructions+=6;goto B53be8b;
case 0x53be8c:c.instructions+=5;goto B53be8c;
case 0x53be8e:c.instructions+=4;goto B53be8e;
case 0x53be93:c.instructions+=3;goto B53be93;
case 0x53be98:c.instructions+=2;goto B53be98;
case 0x53be9a:c.instructions+=1;goto B53be9a;
case 0x53be9f:goto L53be9f;
case 0x53bea1:goto L53bea1;
case 0x53bea3:goto L53bea3;
case 0x53bea5:c.instructions+=5;goto B53bea5;
case 0x53bea8:c.instructions+=4;goto B53bea8;
case 0x53bea9:c.instructions+=3;goto B53bea9;
case 0x53beab:c.instructions+=2;goto B53beab;
case 0x53beaf:c.instructions+=1;goto B53beaf;
case 0x53beb2:goto L53beb2;
case 0x53beb4:c.instructions+=1;goto B53beb4;
case 0x53beb9:goto L53beb9;
case 0x53bebb:c.instructions+=5;goto B53bebb;
case 0x53bebe:c.instructions+=4;goto B53bebe;
case 0x53bec2:c.instructions+=3;goto B53bec2;
case 0x53bec4:c.instructions+=2;goto B53bec4;
case 0x53becc:c.instructions+=1;goto B53becc;
case 0x53bece:goto L53bece;
case 0x53bed0:c.instructions+=2;goto B53bed0;
case 0x53bed2:c.instructions+=1;goto B53bed2;
case 0x53bed7:goto L53bed7;
case 0x53bed9:c.instructions+=6;goto B53bed9;
case 0x53beda:c.instructions+=5;goto B53beda;
case 0x53bedc:c.instructions+=4;goto B53bedc;
case 0x53bee1:c.instructions+=3;goto B53bee1;
case 0x53bee6:c.instructions+=2;goto B53bee6;
case 0x53bee8:c.instructions+=1;goto B53bee8;
case 0x53beed:goto L53beed;
case 0x53beef:goto L53beef;
case 0x53bef1:goto L53bef1;
case 0x53bef3:c.instructions+=4;goto B53bef3;
case 0x53bef4:c.instructions+=3;goto B53bef4;
case 0x53bef6:c.instructions+=2;goto B53bef6;
case 0x53befa:c.instructions+=1;goto B53befa;
case 0x53befd:goto L53befd;
case 0x53beff:c.instructions+=1;goto B53beff;
case 0x53bf04:goto L53bf04;
case 0x53bf06:c.instructions+=5;goto B53bf06;
case 0x53bf09:c.instructions+=4;goto B53bf09;
case 0x53bf0d:c.instructions+=3;goto B53bf0d;
case 0x53bf0f:c.instructions+=2;goto B53bf0f;
case 0x53bf17:c.instructions+=1;goto B53bf17;
case 0x53bf19:goto L53bf19;
case 0x53bf1b:c.instructions+=2;goto B53bf1b;
case 0x53bf1d:c.instructions+=1;goto B53bf1d;
case 0x53bf22:goto L53bf22;
case 0x53bf24:c.instructions+=6;goto B53bf24;
case 0x53bf25:c.instructions+=5;goto B53bf25;
case 0x53bf27:c.instructions+=4;goto B53bf27;
case 0x53bf2c:c.instructions+=3;goto B53bf2c;
case 0x53bf31:c.instructions+=2;goto B53bf31;
case 0x53bf33:c.instructions+=1;goto B53bf33;
case 0x53bf38:goto L53bf38;
case 0x53bf3a:goto L53bf3a;
case 0x53bf3c:goto L53bf3c;
case 0x53bf3e:c.instructions+=4;goto B53bf3e;
case 0x53bf3f:c.instructions+=3;goto B53bf3f;
case 0x53bf41:c.instructions+=2;goto B53bf41;
case 0x53bf45:c.instructions+=1;goto B53bf45;
case 0x53bf48:goto L53bf48;
case 0x53bf4a:c.instructions+=1;goto B53bf4a;
case 0x53bf4f:goto L53bf4f;
case 0x53bf51:c.instructions+=5;goto B53bf51;
case 0x53bf54:c.instructions+=4;goto B53bf54;
case 0x53bf58:c.instructions+=3;goto B53bf58;
case 0x53bf5a:c.instructions+=2;goto B53bf5a;
case 0x53bf62:c.instructions+=1;goto B53bf62;
case 0x53bf64:goto L53bf64;
case 0x53bf66:c.instructions+=2;goto B53bf66;
case 0x53bf68:c.instructions+=1;goto B53bf68;
case 0x53bf6d:goto L53bf6d;
case 0x53bf6f:c.instructions+=6;goto B53bf6f;
case 0x53bf70:c.instructions+=5;goto B53bf70;
case 0x53bf72:c.instructions+=4;goto B53bf72;
case 0x53bf77:c.instructions+=3;goto B53bf77;
case 0x53bf7c:c.instructions+=2;goto B53bf7c;
case 0x53bf7e:c.instructions+=1;goto B53bf7e;
case 0x53bf83:goto L53bf83;
case 0x53bf85:goto L53bf85;
case 0x53bf87:goto L53bf87;
case 0x53bf89:c.instructions+=4;goto B53bf89;
case 0x53bf8a:c.instructions+=3;goto B53bf8a;
case 0x53bf8c:c.instructions+=2;goto B53bf8c;
case 0x53bf90:c.instructions+=1;goto B53bf90;
case 0x53bf93:goto L53bf93;
case 0x53bf95:c.instructions+=1;goto B53bf95;
case 0x53bf9a:goto L53bf9a;
case 0x53bf9c:c.instructions+=5;goto B53bf9c;
case 0x53bf9f:c.instructions+=4;goto B53bf9f;
case 0x53bfa3:c.instructions+=3;goto B53bfa3;
case 0x53bfa5:c.instructions+=2;goto B53bfa5;
case 0x53bfad:c.instructions+=1;goto B53bfad;
case 0x53bfaf:goto L53bfaf;
case 0x53bfb1:c.instructions+=2;goto B53bfb1;
case 0x53bfb3:c.instructions+=1;goto B53bfb3;
case 0x53bfb8:goto L53bfb8;
case 0x53bfba:c.instructions+=6;goto B53bfba;
case 0x53bfbb:c.instructions+=5;goto B53bfbb;
case 0x53bfbd:c.instructions+=4;goto B53bfbd;
case 0x53bfc2:c.instructions+=3;goto B53bfc2;
case 0x53bfc7:c.instructions+=2;goto B53bfc7;
case 0x53bfc9:c.instructions+=1;goto B53bfc9;
case 0x53bfce:goto L53bfce;
case 0x53bfd0:goto L53bfd0;
case 0x53bfd2:goto L53bfd2;
case 0x53bfd4:c.instructions+=4;goto B53bfd4;
case 0x53bfd5:c.instructions+=3;goto B53bfd5;
case 0x53bfd7:c.instructions+=2;goto B53bfd7;
case 0x53bfdb:c.instructions+=1;goto B53bfdb;
case 0x53bfde:goto L53bfde;
case 0x53bfe0:c.instructions+=1;goto B53bfe0;
case 0x53bfe5:goto L53bfe5;
case 0x53bfe7:c.instructions+=5;goto B53bfe7;
case 0x53bfea:c.instructions+=4;goto B53bfea;
case 0x53bfee:c.instructions+=3;goto B53bfee;
case 0x53bff0:c.instructions+=2;goto B53bff0;
case 0x53bff8:c.instructions+=1;goto B53bff8;
case 0x53bffa:goto L53bffa;
case 0x53bffc:c.instructions+=2;goto B53bffc;
case 0x53bffe:c.instructions+=1;goto B53bffe;
default:missing_instruction(c.pc);}
B53b001:L53b001:{c.instructions+=4;NFSU2_TR(0x53b001);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53b004:{NFSU2_TR(0x53b004);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b007:{NFSU2_TR(0x53b007);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b00a:{NFSU2_TR(0x53b00a);
{goto L53b00e;}
}
B53b00c:L53b00c:{c.instructions+=1;NFSU2_TR(0x53b00c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B53b00e:L53b00e:{c.instructions+=8;NFSU2_TR(0x53b00e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53b011:{NFSU2_TR(0x53b011);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B53b013:{NFSU2_TR(0x53b013);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b016:{NFSU2_TR(0x53b016);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b019:{NFSU2_TR(0x53b019);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B53b01b:{NFSU2_TR(0x53b01b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B53b01d:{NFSU2_TR(0x53b01d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53b01f:{NFSU2_TR(0x53b01f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x53aff0u,53a);}
}
B53b021:L53b021:{c.instructions+=4;NFSU2_TR(0x53b021);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53b025:{NFSU2_TR(0x53b025);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B53b029:{NFSU2_TR(0x53b029);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53b02b:{NFSU2_TR(0x53b02b);
if(r1(R+518)){{goto L53b051;}}
}
B53b02d:L53b02d:{c.instructions+=1;NFSU2_TR(0x53b02d);
__builtin_memmove((R+4),(R+4),4);
}
B53b030:L53b030:{c.instructions+=7;NFSU2_TR(0x53b030);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53b032:{NFSU2_TR(0x53b032);
__builtin_memmove((R+4),(R+24),4);
}
B53b034:{NFSU2_TR(0x53b034);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53b037:{NFSU2_TR(0x53b037);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B53b039:{NFSU2_TR(0x53b039);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b03a:{NFSU2_TR(0x53b03a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b03d:{NFSU2_TR(0x53b03d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b042ull));
TAIL_STATIC(0x575630u,575);
}
B53b042:L53b042:{c.instructions+=5;NFSU2_TR(0x53b042);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53b046:{NFSU2_TR(0x53b046);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B53b04a:{NFSU2_TR(0x53b04a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53b04d:{NFSU2_TR(0x53b04d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53b04f:{NFSU2_TR(0x53b04f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53b030u);}goto L53b030;}}
}
B53b051:L53b051:{c.instructions+=4;NFSU2_TR(0x53b051);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B53b055:{NFSU2_TR(0x53b055);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53b057:{NFSU2_TR(0x53b057);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B53b05f:{NFSU2_TR(0x53b05f);
if(r1(R+518)){{goto L53b082;}}
}
B53b061:L53b061:{c.instructions+=7;NFSU2_TR(0x53b061);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53b063:{NFSU2_TR(0x53b063);
__builtin_memmove((R+4),(R+24),4);
}
B53b065:{NFSU2_TR(0x53b065);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53b068:{NFSU2_TR(0x53b068);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B53b06a:{NFSU2_TR(0x53b06a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b06b:{NFSU2_TR(0x53b06b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b06e:{NFSU2_TR(0x53b06e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b073ull));
TAIL_STATIC(0x575630u,575);
}
B53b073:L53b073:{c.instructions+=5;NFSU2_TR(0x53b073);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53b077:{NFSU2_TR(0x53b077);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B53b07b:{NFSU2_TR(0x53b07b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53b07e:{NFSU2_TR(0x53b07e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53b080:{NFSU2_TR(0x53b080);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53b061u);}goto L53b061;}}
}
B53b082:L53b082:{c.instructions+=4;NFSU2_TR(0x53b082);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53b083:{NFSU2_TR(0x53b083);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53b084:{NFSU2_TR(0x53b084);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b086:{NFSU2_TR(0x53b086);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b08bull));
TAIL_STATIC(0x575620u,575);
}
B53b08b:L53b08b:{c.instructions+=3;NFSU2_TR(0x53b08b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53b08e:{NFSU2_TR(0x53b08e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53b090:{NFSU2_TR(0x53b090);
if(r1(R+518)){{goto L53b09e;}}
}
B53b092:L53b092:{c.instructions+=4;NFSU2_TR(0x53b092);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53b096:{NFSU2_TR(0x53b096);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b099:{NFSU2_TR(0x53b099);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b09c:{NFSU2_TR(0x53b09c);
{goto L53b0a0;}
}
B53b09e:L53b09e:{c.instructions+=1;NFSU2_TR(0x53b09e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B53b0a0:L53b0a0:{c.instructions+=11;NFSU2_TR(0x53b0a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53b0a3:{NFSU2_TR(0x53b0a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B53b0a5:{NFSU2_TR(0x53b0a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b0a8:{NFSU2_TR(0x53b0a8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B53b0aa:{NFSU2_TR(0x53b0aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53b0ab:{NFSU2_TR(0x53b0ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b0ae:{NFSU2_TR(0x53b0ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B53b0af:{NFSU2_TR(0x53b0af);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53b0b3:{NFSU2_TR(0x53b0b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b0ba:{NFSU2_TR(0x53b0ba);
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
B53b0bd:{NFSU2_TR(0x53b0bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53b0c0:L53b0c0:{c.instructions+=3;NFSU2_TR(0x53b0c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53b0c4:{NFSU2_TR(0x53b0c4);
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
B53b0c6:{NFSU2_TR(0x53b0c6);
if(r1(R+518)){{goto L53b0d5;}}
}
B53b0c8:L53b0c8:{c.instructions+=5;NFSU2_TR(0x53b0c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53b0cb:{NFSU2_TR(0x53b0cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53b0ce:{NFSU2_TR(0x53b0ce);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b0cf:{NFSU2_TR(0x53b0cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b0d0:{NFSU2_TR(0x53b0d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b0d5ull));
TAIL_STATIC(0x53af20u,53a);
}
B53b0d5:L53b0d5:{c.instructions+=1;NFSU2_TR(0x53b0d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53b0e0:L53b0e0:{c.instructions+=11;NFSU2_TR(0x53b0e0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b0e2:{NFSU2_TR(0x53b0e2);
u8 U[4];
w4(U+0,u32(0x7775c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b0e7:{NFSU2_TR(0x53b0e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53b0ed:{NFSU2_TR(0x53b0ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b0ee:{NFSU2_TR(0x53b0ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b0f5:{NFSU2_TR(0x53b0f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B53b0f8:{NFSU2_TR(0x53b0f8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b0f9:{NFSU2_TR(0x53b0f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B53b0fd:{NFSU2_TR(0x53b0fd);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B53b100:{NFSU2_TR(0x53b100);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b104:{NFSU2_TR(0x53b104);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L53b255;}}
}
B53b10a:L53b10a:{c.instructions+=2;NFSU2_TR(0x53b10a);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x43ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x43ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53b10d:{NFSU2_TR(0x53b10d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L53b255;}}
}
B53b113:L53b113:{c.instructions+=12;NFSU2_TR(0x53b113);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b114:{NFSU2_TR(0x53b114);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b115:{NFSU2_TR(0x53b115);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B53b119:{NFSU2_TR(0x53b119);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B53b11d:{NFSU2_TR(0x53b11d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b11e:{NFSU2_TR(0x53b11e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b122:{NFSU2_TR(0x53b122);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b126:{NFSU2_TR(0x53b126);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B53b129:{NFSU2_TR(0x53b129);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53b12c:{NFSU2_TR(0x53b12c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53b12e:{NFSU2_TR(0x53b12e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53b136:{NFSU2_TR(0x53b136);
if(r1(R+518)){{goto L53b189;}}
}
B53b138:L53b138:{c.instructions+=3;NFSU2_TR(0x53b138);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53b13b:{NFSU2_TR(0x53b13b);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53b13d:{NFSU2_TR(0x53b13d);
if(r1(R+518)){{goto L53b183;}}
}
B53b13f:L53b13f:{c.instructions+=3;NFSU2_TR(0x53b13f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b140:{NFSU2_TR(0x53b140);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b141:{NFSU2_TR(0x53b141);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b146ull));
TAIL_STATIC(0x50ede0u,50e);
}
B53b146:L53b146:{c.instructions+=2;NFSU2_TR(0x53b146);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53b148:{NFSU2_TR(0x53b148);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53b183;}}
}
B53b14a:L53b14a:{c.instructions+=2;NFSU2_TR(0x53b14a);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b14c:{NFSU2_TR(0x53b14c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b151ull));
TAIL_STATIC(0x575620u,575);
}
B53b151:L53b151:{c.instructions+=3;NFSU2_TR(0x53b151);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53b154:{NFSU2_TR(0x53b154);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53b156:{NFSU2_TR(0x53b156);
if(r1(R+518)){{goto L53b166;}}
}
B53b158:L53b158:{c.instructions+=5;NFSU2_TR(0x53b158);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53b15b:{NFSU2_TR(0x53b15b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53b15e:{NFSU2_TR(0x53b15e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b161:{NFSU2_TR(0x53b161);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b164:{NFSU2_TR(0x53b164);
{goto L53b168;}
}
B53b166:L53b166:{c.instructions+=1;NFSU2_TR(0x53b166);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B53b168:L53b168:{c.instructions+=8;NFSU2_TR(0x53b168);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53b16c:{NFSU2_TR(0x53b16c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B53b16e:{NFSU2_TR(0x53b16e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b172:{NFSU2_TR(0x53b172);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b175:{NFSU2_TR(0x53b175);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B53b179:{NFSU2_TR(0x53b179);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B53b17b:{NFSU2_TR(0x53b17b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53b17f:{NFSU2_TR(0x53b17f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53b183:L53b183:{c.instructions+=3;NFSU2_TR(0x53b183);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B53b185:{NFSU2_TR(0x53b185);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53b187:{NFSU2_TR(0x53b187);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53b138u);}goto L53b138;}}
}
B53b189:L53b189:{c.instructions+=3;NFSU2_TR(0x53b189);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53b18b:{NFSU2_TR(0x53b18b);
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
B53b18d:{NFSU2_TR(0x53b18d);
if(r1(R+518)){{goto L53b1ad;}}
}
B53b18f:L53b18f:{c.instructions+=1;NFSU2_TR(0x53b18f);
}
B53b190:L53b190:{c.instructions+=6;NFSU2_TR(0x53b190);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B53b192:{NFSU2_TR(0x53b192);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53b195:{NFSU2_TR(0x53b195);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B53b197:{NFSU2_TR(0x53b197);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b198:{NFSU2_TR(0x53b198);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b19b:{NFSU2_TR(0x53b19b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b1a0ull));
TAIL_STATIC(0x575630u,575);
}
B53b1a0:L53b1a0:{c.instructions+=4;NFSU2_TR(0x53b1a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53b1a2:{NFSU2_TR(0x53b1a2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53b1a5:{NFSU2_TR(0x53b1a5);
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
B53b1a7:{NFSU2_TR(0x53b1a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53b190u);}goto L53b190;}}
}
B53b1a9:L53b1a9:{c.instructions+=1;NFSU2_TR(0x53b1a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53b1ad:L53b1ad:{c.instructions+=2;NFSU2_TR(0x53b1ad);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B53b1b1:{NFSU2_TR(0x53b1b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b1b6ull));
TAIL_STATIC(0x502fd0u,502);
}
B53b1b6:L53b1b6:{c.instructions+=3;NFSU2_TR(0x53b1b6);
__builtin_memmove((R+12),(R+0),4);
}
B53b1b8:{NFSU2_TR(0x53b1b8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53b1ba:{NFSU2_TR(0x53b1ba);
if(r1(R+518)){{goto L53b1f5;}}
}
B53b1bc:L53b1bc:{c.instructions+=1;NFSU2_TR(0x53b1bc);
__builtin_memmove((R+16),(R+16),4);
}
B53b1c0:L53b1c0:{c.instructions+=2;NFSU2_TR(0x53b1c0);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b1c2:{NFSU2_TR(0x53b1c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b1c7ull));
TAIL_STATIC(0x575620u,575);
}
B53b1c7:L53b1c7:{c.instructions+=3;NFSU2_TR(0x53b1c7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53b1ca:{NFSU2_TR(0x53b1ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53b1cc:{NFSU2_TR(0x53b1cc);
if(r1(R+518)){{goto L53b1dc;}}
}
B53b1ce:L53b1ce:{c.instructions+=5;NFSU2_TR(0x53b1ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53b1d1:{NFSU2_TR(0x53b1d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53b1d4:{NFSU2_TR(0x53b1d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b1d7:{NFSU2_TR(0x53b1d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b1da:{NFSU2_TR(0x53b1da);
{goto L53b1de;}
}
B53b1dc:L53b1dc:{c.instructions+=1;NFSU2_TR(0x53b1dc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B53b1de:L53b1de:{c.instructions+=8;NFSU2_TR(0x53b1de);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53b1e1:{NFSU2_TR(0x53b1e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B53b1e3:{NFSU2_TR(0x53b1e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b1e6:{NFSU2_TR(0x53b1e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b1e9:{NFSU2_TR(0x53b1e9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B53b1eb:{NFSU2_TR(0x53b1eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B53b1ed:{NFSU2_TR(0x53b1ed);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53b1ef:{NFSU2_TR(0x53b1ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53b1c0u);}goto L53b1c0;}}
}
B53b1f1:L53b1f1:{c.instructions+=1;NFSU2_TR(0x53b1f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53b1f5:L53b1f5:{c.instructions+=3;NFSU2_TR(0x53b1f5);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B53b1f9:{NFSU2_TR(0x53b1f9);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53b1fb:{NFSU2_TR(0x53b1fb);
if(r1(R+518)){{goto L53b221;}}
}
B53b1fd:L53b1fd:{c.instructions+=1;NFSU2_TR(0x53b1fd);
__builtin_memmove((R+4),(R+4),4);
}
B53b200:L53b200:{c.instructions+=7;NFSU2_TR(0x53b200);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53b202:{NFSU2_TR(0x53b202);
__builtin_memmove((R+4),(R+24),4);
}
B53b204:{NFSU2_TR(0x53b204);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53b207:{NFSU2_TR(0x53b207);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B53b209:{NFSU2_TR(0x53b209);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b20a:{NFSU2_TR(0x53b20a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b20d:{NFSU2_TR(0x53b20d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b212ull));
TAIL_STATIC(0x575630u,575);
}
B53b212:L53b212:{c.instructions+=5;NFSU2_TR(0x53b212);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53b216:{NFSU2_TR(0x53b216);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B53b21a:{NFSU2_TR(0x53b21a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53b21d:{NFSU2_TR(0x53b21d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53b21f:{NFSU2_TR(0x53b21f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53b200u);}goto L53b200;}}
}
B53b221:L53b221:{c.instructions+=4;NFSU2_TR(0x53b221);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B53b225:{NFSU2_TR(0x53b225);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53b227:{NFSU2_TR(0x53b227);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B53b22f:{NFSU2_TR(0x53b22f);
if(r1(R+518)){{goto L53b252;}}
}
B53b231:L53b231:{c.instructions+=7;NFSU2_TR(0x53b231);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53b233:{NFSU2_TR(0x53b233);
__builtin_memmove((R+4),(R+24),4);
}
B53b235:{NFSU2_TR(0x53b235);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53b238:{NFSU2_TR(0x53b238);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B53b23a:{NFSU2_TR(0x53b23a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b23b:{NFSU2_TR(0x53b23b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b23e:{NFSU2_TR(0x53b23e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b243ull));
TAIL_STATIC(0x575630u,575);
}
B53b243:L53b243:{c.instructions+=5;NFSU2_TR(0x53b243);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53b247:{NFSU2_TR(0x53b247);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B53b24b:{NFSU2_TR(0x53b24b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53b24e:{NFSU2_TR(0x53b24e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53b250:{NFSU2_TR(0x53b250);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53b231u);}goto L53b231;}}
}
B53b252:L53b252:{c.instructions+=3;NFSU2_TR(0x53b252);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53b253:{NFSU2_TR(0x53b253);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53b254:{NFSU2_TR(0x53b254);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53b255:L53b255:{c.instructions+=5;NFSU2_TR(0x53b255);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53b259:{NFSU2_TR(0x53b259);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B53b25a:{NFSU2_TR(0x53b25a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b261:{NFSU2_TR(0x53b261);
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
B53b264:{NFSU2_TR(0x53b264);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53b270:L53b270:{c.instructions+=15;NFSU2_TR(0x53b270);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b271:{NFSU2_TR(0x53b271);
__builtin_memmove((R+20),(R+16),4);
}
B53b273:{NFSU2_TR(0x53b273);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B53b276:{NFSU2_TR(0x53b276);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b278:{NFSU2_TR(0x53b278);
u8 U[4];
w4(U+0,u32(0x777748ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b27d:{NFSU2_TR(0x53b27d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53b283:{NFSU2_TR(0x53b283);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b284:{NFSU2_TR(0x53b284);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b28b:{NFSU2_TR(0x53b28b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B53b28e:{NFSU2_TR(0x53b28e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53b291:{NFSU2_TR(0x53b291);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x4dull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x4dull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x4dull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B53b294:{NFSU2_TR(0x53b294);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b295:{NFSU2_TR(0x53b295);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b296:{NFSU2_TR(0x53b296);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b297:{NFSU2_TR(0x53b297);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L53b3d2;}}
}
B53b29d:L53b29d:{c.instructions+=2;NFSU2_TR(0x53b29d);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x5cull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5cull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5cull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B53b2a0:{NFSU2_TR(0x53b2a0);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L53b3d2;}}
}
B53b2a6:L53b2a6:{c.instructions+=9;NFSU2_TR(0x53b2a6);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B53b2aa:{NFSU2_TR(0x53b2aa);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B53b2ae:{NFSU2_TR(0x53b2ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b2b2:{NFSU2_TR(0x53b2b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b2b6:{NFSU2_TR(0x53b2b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B53b2b9:{NFSU2_TR(0x53b2b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53b2bc:{NFSU2_TR(0x53b2bc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53b2be:{NFSU2_TR(0x53b2be);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53b2c6:{NFSU2_TR(0x53b2c6);
if(r1(R+518)){{goto L53b30b;}}
}
B53b2c8:L53b2c8:{c.instructions+=2;NFSU2_TR(0x53b2c8);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B53b2cb:{NFSU2_TR(0x53b2cb);
if(r1(R+518)){{goto L53b305;}}
}
B53b2cd:L53b2cd:{c.instructions+=2;NFSU2_TR(0x53b2cd);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b2cf:{NFSU2_TR(0x53b2cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b2d4ull));
TAIL_STATIC(0x575620u,575);
}
B53b2d4:L53b2d4:{c.instructions+=3;NFSU2_TR(0x53b2d4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53b2d7:{NFSU2_TR(0x53b2d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53b2d9:{NFSU2_TR(0x53b2d9);
if(r1(R+518)){{goto L53b2e9;}}
}
B53b2db:L53b2db:{c.instructions+=5;NFSU2_TR(0x53b2db);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53b2de:{NFSU2_TR(0x53b2de);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53b2e1:{NFSU2_TR(0x53b2e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b2e4:{NFSU2_TR(0x53b2e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b2e7:{NFSU2_TR(0x53b2e7);
{goto L53b2eb;}
}
B53b2e9:L53b2e9:{c.instructions+=1;NFSU2_TR(0x53b2e9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B53b2eb:L53b2eb:{c.instructions+=8;NFSU2_TR(0x53b2eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53b2ef:{NFSU2_TR(0x53b2ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B53b2f1:{NFSU2_TR(0x53b2f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b2f5:{NFSU2_TR(0x53b2f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b2f8:{NFSU2_TR(0x53b2f8);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B53b2fc:{NFSU2_TR(0x53b2fc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B53b2fe:{NFSU2_TR(0x53b2fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53b302:{NFSU2_TR(0x53b302);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53b305:L53b305:{c.instructions+=3;NFSU2_TR(0x53b305);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B53b307:{NFSU2_TR(0x53b307);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53b309:{NFSU2_TR(0x53b309);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53b2c8u);}goto L53b2c8;}}
}
B53b30b:L53b30b:{c.instructions+=3;NFSU2_TR(0x53b30b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53b30d:{NFSU2_TR(0x53b30d);
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
B53b30f:{NFSU2_TR(0x53b30f);
if(r1(R+518)){{goto L53b32e;}}
}
B53b311:L53b311:{c.instructions+=6;NFSU2_TR(0x53b311);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B53b313:{NFSU2_TR(0x53b313);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53b316:{NFSU2_TR(0x53b316);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B53b318:{NFSU2_TR(0x53b318);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b319:{NFSU2_TR(0x53b319);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b31c:{NFSU2_TR(0x53b31c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b321ull));
TAIL_STATIC(0x575630u,575);
}
B53b321:L53b321:{c.instructions+=4;NFSU2_TR(0x53b321);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53b323:{NFSU2_TR(0x53b323);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53b326:{NFSU2_TR(0x53b326);
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
B53b328:{NFSU2_TR(0x53b328);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53b311u);}goto L53b311;}}
}
B53b32a:L53b32a:{c.instructions+=1;NFSU2_TR(0x53b32a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53b32e:L53b32e:{c.instructions+=2;NFSU2_TR(0x53b32e);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B53b332:{NFSU2_TR(0x53b332);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b337ull));
TAIL_STATIC(0x502fd0u,502);
}
B53b337:L53b337:{c.instructions+=3;NFSU2_TR(0x53b337);
__builtin_memmove((R+12),(R+0),4);
}
B53b339:{NFSU2_TR(0x53b339);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53b33b:{NFSU2_TR(0x53b33b);
if(r1(R+518)){{goto L53b375;}}
}
B53b33d:L53b33d:{c.instructions+=1;NFSU2_TR(0x53b33d);
__builtin_memmove((R+4),(R+4),4);
}
B53b340:L53b340:{c.instructions+=2;NFSU2_TR(0x53b340);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b342:{NFSU2_TR(0x53b342);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b347ull));
TAIL_STATIC(0x575620u,575);
}
B53b347:L53b347:{c.instructions+=3;NFSU2_TR(0x53b347);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53b34a:{NFSU2_TR(0x53b34a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53b34c:{NFSU2_TR(0x53b34c);
if(r1(R+518)){{goto L53b35c;}}
}
B53b34e:L53b34e:{c.instructions+=5;NFSU2_TR(0x53b34e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53b351:{NFSU2_TR(0x53b351);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53b354:{NFSU2_TR(0x53b354);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b357:{NFSU2_TR(0x53b357);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b35a:{NFSU2_TR(0x53b35a);
{goto L53b35e;}
}
B53b35c:L53b35c:{c.instructions+=1;NFSU2_TR(0x53b35c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B53b35e:L53b35e:{c.instructions+=8;NFSU2_TR(0x53b35e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53b361:{NFSU2_TR(0x53b361);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B53b363:{NFSU2_TR(0x53b363);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b366:{NFSU2_TR(0x53b366);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b369:{NFSU2_TR(0x53b369);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B53b36b:{NFSU2_TR(0x53b36b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B53b36d:{NFSU2_TR(0x53b36d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53b36f:{NFSU2_TR(0x53b36f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53b340u);}goto L53b340;}}
}
B53b371:L53b371:{c.instructions+=1;NFSU2_TR(0x53b371);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53b375:L53b375:{c.instructions+=3;NFSU2_TR(0x53b375);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B53b379:{NFSU2_TR(0x53b379);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53b37b:{NFSU2_TR(0x53b37b);
if(r1(R+518)){{goto L53b3a1;}}
}
B53b37d:L53b37d:{c.instructions+=1;NFSU2_TR(0x53b37d);
__builtin_memmove((R+4),(R+4),4);
}
B53b380:L53b380:{c.instructions+=7;NFSU2_TR(0x53b380);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53b382:{NFSU2_TR(0x53b382);
__builtin_memmove((R+4),(R+24),4);
}
B53b384:{NFSU2_TR(0x53b384);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53b387:{NFSU2_TR(0x53b387);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B53b389:{NFSU2_TR(0x53b389);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b38a:{NFSU2_TR(0x53b38a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b38d:{NFSU2_TR(0x53b38d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b392ull));
TAIL_STATIC(0x575630u,575);
}
B53b392:L53b392:{c.instructions+=5;NFSU2_TR(0x53b392);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53b396:{NFSU2_TR(0x53b396);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B53b39a:{NFSU2_TR(0x53b39a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53b39d:{NFSU2_TR(0x53b39d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53b39f:{NFSU2_TR(0x53b39f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53b380u);}goto L53b380;}}
}
B53b3a1:L53b3a1:{c.instructions+=4;NFSU2_TR(0x53b3a1);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B53b3a5:{NFSU2_TR(0x53b3a5);
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
B53b3a7:{NFSU2_TR(0x53b3a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B53b3af:{NFSU2_TR(0x53b3af);
if(r1(R+518)){{goto L53b3d2;}}
}
B53b3b1:L53b3b1:{c.instructions+=7;NFSU2_TR(0x53b3b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53b3b3:{NFSU2_TR(0x53b3b3);
__builtin_memmove((R+4),(R+24),4);
}
B53b3b5:{NFSU2_TR(0x53b3b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53b3b8:{NFSU2_TR(0x53b3b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B53b3ba:{NFSU2_TR(0x53b3ba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b3bb:{NFSU2_TR(0x53b3bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b3be:{NFSU2_TR(0x53b3be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b3c3ull));
TAIL_STATIC(0x575630u,575);
}
B53b3c3:L53b3c3:{c.instructions+=5;NFSU2_TR(0x53b3c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53b3c7:{NFSU2_TR(0x53b3c7);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B53b3cb:{NFSU2_TR(0x53b3cb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53b3ce:{NFSU2_TR(0x53b3ce);
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
B53b3d0:{NFSU2_TR(0x53b3d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53b3b1u);}goto L53b3b1;}}
}
B53b3d2:L53b3d2:{c.instructions+=8;NFSU2_TR(0x53b3d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53b3d6:{NFSU2_TR(0x53b3d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53b3d7:{NFSU2_TR(0x53b3d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53b3d8:{NFSU2_TR(0x53b3d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b3df:{NFSU2_TR(0x53b3df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53b3e0:{NFSU2_TR(0x53b3e0);
__builtin_memmove((R+16),(R+20),4);
}
B53b3e2:{NFSU2_TR(0x53b3e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B53b3e3:{NFSU2_TR(0x53b3e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53b3f0:L53b3f0:{c.instructions+=5;NFSU2_TR(0x53b3f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53b3f3:{NFSU2_TR(0x53b3f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b3f4:{NFSU2_TR(0x53b3f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53b3f7:{NFSU2_TR(0x53b3f7);
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
B53b3f9:{NFSU2_TR(0x53b3f9);
if(r1(R+518)){{goto L53b419;}}
}
B53b3fb:L53b3fb:{c.instructions+=1;NFSU2_TR(0x53b3fb);
{goto L53b400;}
}
B53b400:L53b400:{c.instructions+=6;NFSU2_TR(0x53b400);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B53b402:{NFSU2_TR(0x53b402);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53b405:{NFSU2_TR(0x53b405);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B53b407:{NFSU2_TR(0x53b407);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b408:{NFSU2_TR(0x53b408);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b40b:{NFSU2_TR(0x53b40b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b410ull));
TAIL_STATIC(0x575630u,575);
}
B53b410:L53b410:{c.instructions+=4;NFSU2_TR(0x53b410);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53b412:{NFSU2_TR(0x53b412);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53b415:{NFSU2_TR(0x53b415);
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
B53b417:{NFSU2_TR(0x53b417);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53b400u);}goto L53b400;}}
}
B53b419:L53b419:{c.instructions+=2;NFSU2_TR(0x53b419);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53b41a:{NFSU2_TR(0x53b41a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53b420:L53b420:{c.instructions+=10;NFSU2_TR(0x53b420);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B53b423:{NFSU2_TR(0x53b423);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b424:{NFSU2_TR(0x53b424);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b425:{NFSU2_TR(0x53b425);
__builtin_memmove((R+12),(R+4),4);
}
B53b427:{NFSU2_TR(0x53b427);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53b42a:{NFSU2_TR(0x53b42a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b42b:{NFSU2_TR(0x53b42b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53b42e:{NFSU2_TR(0x53b42e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53b430:{NFSU2_TR(0x53b430);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b434:{NFSU2_TR(0x53b434);
if(r1(R+518)){{goto L53b4eb;}}
}
B53b43a:L53b43a:{c.instructions+=2;NFSU2_TR(0x53b43a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b43b:{NFSU2_TR(0x53b43b);
{goto L53b441;}
}
B53b43d:L53b43d:{c.instructions+=1;NFSU2_TR(0x53b43d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53b441:L53b441:{c.instructions+=2;NFSU2_TR(0x53b441);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B53b443:{NFSU2_TR(0x53b443);
if(r1(R+518)){{goto L53b4ea;}}
}
B53b449:L53b449:{c.instructions+=6;NFSU2_TR(0x53b449);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B53b44c:{NFSU2_TR(0x53b44c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53b44f:{NFSU2_TR(0x53b44f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b450:{NFSU2_TR(0x53b450);
__builtin_memmove((R+4),(R+12),4);
}
B53b452:{NFSU2_TR(0x53b452);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b456:{NFSU2_TR(0x53b456);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b45bull));
TAIL_STATIC(0x50efd0u,50e);
}
B53b45b:L53b45b:{c.instructions+=3;NFSU2_TR(0x53b45b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53b45f:{NFSU2_TR(0x53b45f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53b461:{NFSU2_TR(0x53b461);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53b4d5;}}
}
B53b463:L53b463:{c.instructions+=2;NFSU2_TR(0x53b463);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B53b466:{NFSU2_TR(0x53b466);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L53b4d5;}}
}
B53b468:L53b468:{c.instructions+=2;NFSU2_TR(0x53b468);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x43ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x43ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53b46b:{NFSU2_TR(0x53b46b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L53b4d5;}}
}
B53b46d:L53b46d:{c.instructions+=2;NFSU2_TR(0x53b46d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53b46f:{NFSU2_TR(0x53b46f);
if(r1(R+518)){{goto L53b4c0;}}
}
B53b471:L53b471:{c.instructions+=4;NFSU2_TR(0x53b471);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B53b473:{NFSU2_TR(0x53b473);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53b475:{NFSU2_TR(0x53b475);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53b47a:{NFSU2_TR(0x53b47a);
if(r1(R+518)){{goto L53b4b3;}}
}
B53b47c:L53b47c:{c.instructions+=1;NFSU2_TR(0x53b47c);
__builtin_memmove((R+16),(R+16),4);
}
B53b480:L53b480:{c.instructions+=6;NFSU2_TR(0x53b480);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53b483:{NFSU2_TR(0x53b483);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B53b486:{NFSU2_TR(0x53b486);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b487:{NFSU2_TR(0x53b487);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b488:{NFSU2_TR(0x53b488);
__builtin_memmove((R+4),(R+12),4);
}
B53b48a:{NFSU2_TR(0x53b48a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b48full));
TAIL_STATIC(0x50ede0u,50e);
}
B53b48f:L53b48f:{c.instructions+=2;NFSU2_TR(0x53b48f);
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
B53b491:{NFSU2_TR(0x53b491);
if(r1(R+518)){{goto L53b4a3;}}
}
B53b493:L53b493:{c.instructions+=3;NFSU2_TR(0x53b493);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b494:{NFSU2_TR(0x53b494);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x940ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53b49a:{NFSU2_TR(0x53b49a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b49full));
TAIL_STATIC(0x6102f0u,610);
}
B53b49f:L53b49f:{c.instructions+=2;NFSU2_TR(0x53b49f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53b4a1:{NFSU2_TR(0x53b4a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53b4ae;}}
}
B53b4a3:L53b4a3:{c.instructions+=4;NFSU2_TR(0x53b4a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B53b4a5:{NFSU2_TR(0x53b4a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((R+0),(U+0),4);
}
B53b4a8:{NFSU2_TR(0x53b4a8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53b4aa:{NFSU2_TR(0x53b4aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53b480u);}goto L53b480;}}
}
B53b4ac:L53b4ac:{c.instructions+=1;NFSU2_TR(0x53b4ac);
{goto L53b4b3;}
}
B53b4ae:L53b4ae:{c.instructions+=1;NFSU2_TR(0x53b4ae);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53b4b3:L53b4b3:{c.instructions+=5;NFSU2_TR(0x53b4b3);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B53b4b7:{NFSU2_TR(0x53b4b7);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53b4b9:{NFSU2_TR(0x53b4b9);
__builtin_memmove((R+0),(R+518),1);
}
B53b4bc:{NFSU2_TR(0x53b4bc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53b4be:{NFSU2_TR(0x53b4be);
if(r1(R+518)){{goto L53b4d1;}}
}
B53b4c0:L53b4c0:{c.instructions+=3;NFSU2_TR(0x53b4c0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b4c1:{NFSU2_TR(0x53b4c1);
__builtin_memmove((R+4),(R+12),4);
}
B53b4c3:{NFSU2_TR(0x53b4c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b4c8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53b0e0u);}goto L53b0e0;}
}
B53b4c8:L53b4c8:{c.instructions+=3;NFSU2_TR(0x53b4c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53b4cb:{NFSU2_TR(0x53b4cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b4cf:{NFSU2_TR(0x53b4cf);
{goto L53b4db;}
}
B53b4d1:L53b4d1:{c.instructions+=1;NFSU2_TR(0x53b4d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53b4d5:L53b4d5:{c.instructions+=2;NFSU2_TR(0x53b4d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B53b4d7:{NFSU2_TR(0x53b4d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b4db:L53b4db:{c.instructions+=4;NFSU2_TR(0x53b4db);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53b4df:{NFSU2_TR(0x53b4df);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53b4e2:{NFSU2_TR(0x53b4e2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53b4e4:{NFSU2_TR(0x53b4e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53b43du);}goto L53b43d;}}
}
B53b4ea:L53b4ea:{c.instructions+=1;NFSU2_TR(0x53b4ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B53b4eb:L53b4eb:{c.instructions+=5;NFSU2_TR(0x53b4eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53b4ec:{NFSU2_TR(0x53b4ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53b4ed:{NFSU2_TR(0x53b4ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53b4ee:{NFSU2_TR(0x53b4ee);
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
B53b4f1:{NFSU2_TR(0x53b4f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53b500:L53b500:{c.instructions+=3;NFSU2_TR(0x53b500);
__builtin_memmove((R+0),gp(0x850078),4);
}
B53b505:{NFSU2_TR(0x53b505);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53b508:{NFSU2_TR(0x53b508);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53b549;}}
}
B53b50a:L53b50a:{c.instructions+=3;NFSU2_TR(0x53b50a);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B53b50e:{NFSU2_TR(0x53b50e);
__builtin_memmove((R+0),gp(0x838464),1);
}
B53b513:{NFSU2_TR(0x53b513);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53b52f;}}
}
B53b515:L53b515:{c.instructions+=2;NFSU2_TR(0x53b515);
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
B53b517:{NFSU2_TR(0x53b517);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53b5bd;}}
}
B53b51d:L53b51d:{c.instructions+=4;NFSU2_TR(0x53b51d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53b521:{NFSU2_TR(0x53b521);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b522:{NFSU2_TR(0x53b522);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b524:{NFSU2_TR(0x53b524);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b529ull));
TAIL_STATIC(0x529e80u,529);
}
B53b529:L53b529:{c.instructions+=2;NFSU2_TR(0x53b529);
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
B53b52c:{NFSU2_TR(0x53b52c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53b52f:L53b52f:{c.instructions+=2;NFSU2_TR(0x53b52f);
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
B53b531:{NFSU2_TR(0x53b531);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53b5bd;}}
}
B53b537:L53b537:{c.instructions+=4;NFSU2_TR(0x53b537);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53b53b:{NFSU2_TR(0x53b53b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b53c:{NFSU2_TR(0x53b53c);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b53e:{NFSU2_TR(0x53b53e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b543ull));
TAIL_STATIC(0x529e80u,529);
}
B53b543:L53b543:{c.instructions+=2;NFSU2_TR(0x53b543);
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
B53b546:{NFSU2_TR(0x53b546);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53b549:L53b549:{c.instructions+=2;NFSU2_TR(0x53b549);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53b54c:{NFSU2_TR(0x53b54c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53b5a2;}}
}
B53b54e:L53b54e:{c.instructions+=4;NFSU2_TR(0x53b54e);
__builtin_memmove((R+8),gp(0x850088),4);
}
B53b554:{NFSU2_TR(0x53b554);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B53b557:{NFSU2_TR(0x53b557);
w4(R+0,u32(0x1f8ull));
}
B53b55c:{NFSU2_TR(0x53b55c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L53b58d;}}
}
B53b55e:L53b55e:{c.instructions+=1;NFSU2_TR(0x53b55e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x53b5c4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B53b565:L53b565:{c.instructions+=2;NFSU2_TR(0x53b565);
w4(R+0,u32(0x20ull));
}
B53b56a:{NFSU2_TR(0x53b56a);
{goto L53b58d;}
}
B53b56c:L53b56c:{c.instructions+=2;NFSU2_TR(0x53b56c);
w4(R+0,u32(0x40ull));
}
B53b571:{NFSU2_TR(0x53b571);
{goto L53b58d;}
}
B53b573:L53b573:{c.instructions+=2;NFSU2_TR(0x53b573);
w4(R+0,u32(0x8ull));
}
B53b578:{NFSU2_TR(0x53b578);
{goto L53b58d;}
}
B53b57a:L53b57a:{c.instructions+=2;NFSU2_TR(0x53b57a);
w4(R+0,u32(0x10ull));
}
B53b57f:{NFSU2_TR(0x53b57f);
{goto L53b58d;}
}
B53b581:L53b581:{c.instructions+=2;NFSU2_TR(0x53b581);
w4(R+0,u32(0x100ull));
}
B53b586:{NFSU2_TR(0x53b586);
{goto L53b58d;}
}
B53b588:L53b588:{c.instructions+=1;NFSU2_TR(0x53b588);
w4(R+0,u32(0x80ull));
}
B53b58d:L53b58d:{c.instructions+=6;NFSU2_TR(0x53b58d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53b590:{NFSU2_TR(0x53b590);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53b594:{NFSU2_TR(0x53b594);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b595:{NFSU2_TR(0x53b595);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b596:{NFSU2_TR(0x53b596);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b597:{NFSU2_TR(0x53b597);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b59cull));
TAIL_STATIC(0x534110u,534);
}
B53b59c:L53b59c:{c.instructions+=2;NFSU2_TR(0x53b59c);
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
B53b59f:{NFSU2_TR(0x53b59f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53b5a2:L53b5a2:{c.instructions+=3;NFSU2_TR(0x53b5a2);
__builtin_memmove((R+0),gp(0x838464),1);
}
B53b5a7:{NFSU2_TR(0x53b5a7);
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
B53b5a9:{NFSU2_TR(0x53b5a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53b5bd;}}
}
B53b5ab:L53b5ab:{c.instructions+=4;NFSU2_TR(0x53b5ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53b5af:{NFSU2_TR(0x53b5af);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b5b0:{NFSU2_TR(0x53b5b0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b5b2:{NFSU2_TR(0x53b5b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b5b7ull));
TAIL_STATIC(0x529e80u,529);
}
B53b5b7:L53b5b7:{c.instructions+=2;NFSU2_TR(0x53b5b7);
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
B53b5ba:{NFSU2_TR(0x53b5ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53b5bd:L53b5bd:{c.instructions+=2;NFSU2_TR(0x53b5bd);
w1(R+0,u8(0x1ull));
}
B53b5bf:{NFSU2_TR(0x53b5bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53b5e0:L53b5e0:{c.instructions+=7;NFSU2_TR(0x53b5e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b5e1:{NFSU2_TR(0x53b5e1);
__builtin_memmove((R+20),(R+16),4);
}
B53b5e3:{NFSU2_TR(0x53b5e3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b5e4:{NFSU2_TR(0x53b5e4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b5e5:{NFSU2_TR(0x53b5e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53b5e8:{NFSU2_TR(0x53b5e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53b5ea:{NFSU2_TR(0x53b5ea);
if(r1(R+518)){{goto L53b621;}}
}
B53b5ec:L53b5ec:{c.instructions+=4;NFSU2_TR(0x53b5ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53b5ef:{NFSU2_TR(0x53b5ef);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B53b5f1:{NFSU2_TR(0x53b5f1);
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
B53b5f3:{NFSU2_TR(0x53b5f3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L53b619;}}
}
B53b5f5:L53b5f5:{c.instructions+=1;NFSU2_TR(0x53b5f5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B53b5f7:L53b5f7:{c.instructions+=5;NFSU2_TR(0x53b5f7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x5cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B53b5fa:{NFSU2_TR(0x53b5fa);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B53b5fe:{NFSU2_TR(0x53b5fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b5ff:{NFSU2_TR(0x53b5ff);
w4(R+4,u32(0x838980ull));
}
B53b604:{NFSU2_TR(0x53b604);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b609ull));
TAIL_STATIC(0x530350u,530);
}
B53b609:L53b609:{c.instructions+=2;NFSU2_TR(0x53b609);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53b60b:{NFSU2_TR(0x53b60b);
if(r1(R+518)){{goto L53b621;}}
}
B53b60d:L53b60d:{c.instructions+=5;NFSU2_TR(0x53b60d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53b610:{NFSU2_TR(0x53b610);
w1(R+12,u8(u32(r1(R+12))+u32(u8(0x1ull))));
}
B53b612:{NFSU2_TR(0x53b612);
w4(R+0,u32(r1(R+12)));
}
B53b615:{NFSU2_TR(0x53b615);
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
B53b617:{NFSU2_TR(0x53b617);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53b5f7u);}goto L53b5f7;}}
}
B53b619:L53b619:{c.instructions+=5;NFSU2_TR(0x53b619);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53b61a:{NFSU2_TR(0x53b61a);
w1(R+0,u8(0x1ull));
}
B53b61c:{NFSU2_TR(0x53b61c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53b61d:{NFSU2_TR(0x53b61d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B53b61e:{NFSU2_TR(0x53b61e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53b621:L53b621:{c.instructions+=5;NFSU2_TR(0x53b621);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53b622:{NFSU2_TR(0x53b622);
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
B53b624:{NFSU2_TR(0x53b624);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53b625:{NFSU2_TR(0x53b625);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B53b626:{NFSU2_TR(0x53b626);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53b630:L53b630:{c.instructions+=3;NFSU2_TR(0x53b630);
__builtin_memmove((R+0),gp(0x7fa1b4),4);
}
B53b635:{NFSU2_TR(0x53b635);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b636:{NFSU2_TR(0x53b636);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b63bull));
TAIL_STATIC(0x52cef0u,52c);
}
B53b63b:L53b63b:{c.instructions+=4;NFSU2_TR(0x53b63b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B53b63d:{NFSU2_TR(0x53b63d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53b640:{NFSU2_TR(0x53b640);
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
B53b642:{NFSU2_TR(0x53b642);
if(r1(R+518)){{goto L53b650;}}
}
B53b644:L53b644:{c.instructions+=4;NFSU2_TR(0x53b644);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b647:{NFSU2_TR(0x53b647);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b64a:{NFSU2_TR(0x53b64a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b64d:{NFSU2_TR(0x53b64d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b650:L53b650:{c.instructions+=1;NFSU2_TR(0x53b650);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53b660:L53b660:{c.instructions+=3;NFSU2_TR(0x53b660);
__builtin_memmove((R+0),gp(0x7fa1b4),4);
}
B53b665:{NFSU2_TR(0x53b665);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b666:{NFSU2_TR(0x53b666);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b66bull));
TAIL_STATIC(0x52cef0u,52c);
}
B53b66b:L53b66b:{c.instructions+=3;NFSU2_TR(0x53b66b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53b66e:{NFSU2_TR(0x53b66e);
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
B53b670:{NFSU2_TR(0x53b670);
if(r1(R+518)){{goto L53b683;}}
}
B53b672:L53b672:{c.instructions+=5;NFSU2_TR(0x53b672);
w4(R+4,u32(0xffull));
}
B53b677:{NFSU2_TR(0x53b677);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b67a:{NFSU2_TR(0x53b67a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b67d:{NFSU2_TR(0x53b67d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b680:{NFSU2_TR(0x53b680);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b683:L53b683:{c.instructions+=1;NFSU2_TR(0x53b683);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53b690:L53b690:{c.instructions+=3;NFSU2_TR(0x53b690);
__builtin_memmove((R+0),gp(0x7fa1c8),4);
}
B53b695:{NFSU2_TR(0x53b695);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b696:{NFSU2_TR(0x53b696);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b69bull));
TAIL_STATIC(0x52cef0u,52c);
}
B53b69b:L53b69b:{c.instructions+=4;NFSU2_TR(0x53b69b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B53b69d:{NFSU2_TR(0x53b69d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53b6a0:{NFSU2_TR(0x53b6a0);
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
B53b6a2:{NFSU2_TR(0x53b6a2);
if(r1(R+518)){{goto L53b6b0;}}
}
B53b6a4:L53b6a4:{c.instructions+=4;NFSU2_TR(0x53b6a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b6a7:{NFSU2_TR(0x53b6a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b6aa:{NFSU2_TR(0x53b6aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b6ad:{NFSU2_TR(0x53b6ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b6b0:L53b6b0:{c.instructions+=1;NFSU2_TR(0x53b6b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53b6c0:L53b6c0:{c.instructions+=3;NFSU2_TR(0x53b6c0);
__builtin_memmove((R+0),gp(0x7fa1c8),4);
}
B53b6c5:{NFSU2_TR(0x53b6c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b6c6:{NFSU2_TR(0x53b6c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b6cbull));
TAIL_STATIC(0x52cef0u,52c);
}
B53b6cb:L53b6cb:{c.instructions+=3;NFSU2_TR(0x53b6cb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53b6ce:{NFSU2_TR(0x53b6ce);
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
B53b6d0:{NFSU2_TR(0x53b6d0);
if(r1(R+518)){{goto L53b6e3;}}
}
B53b6d2:L53b6d2:{c.instructions+=5;NFSU2_TR(0x53b6d2);
w4(R+4,u32(0xffull));
}
B53b6d7:{NFSU2_TR(0x53b6d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b6da:{NFSU2_TR(0x53b6da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b6dd:{NFSU2_TR(0x53b6dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b6e0:{NFSU2_TR(0x53b6e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b6e3:L53b6e3:{c.instructions+=1;NFSU2_TR(0x53b6e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53b6f0:L53b6f0:{c.instructions+=4;NFSU2_TR(0x53b6f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b6f1:{NFSU2_TR(0x53b6f1);
__builtin_memmove((R+24),(R+4),4);
}
B53b6f3:{NFSU2_TR(0x53b6f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B53b6f6:{NFSU2_TR(0x53b6f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b6fbull));
TAIL_STATIC(0x538b30u,538);
}
B53b6fb:L53b6fb:{c.instructions+=3;NFSU2_TR(0x53b6fb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53b6ff:{NFSU2_TR(0x53b6ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53b700:{NFSU2_TR(0x53b700);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53b710:L53b710:{c.instructions+=3;NFSU2_TR(0x53b710);
__builtin_memmove((R+0),gp(0x7fa1cc),4);
}
B53b715:{NFSU2_TR(0x53b715);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b716:{NFSU2_TR(0x53b716);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b71bull));
TAIL_STATIC(0x52cef0u,52c);
}
B53b71b:L53b71b:{c.instructions+=4;NFSU2_TR(0x53b71b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B53b71d:{NFSU2_TR(0x53b71d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53b720:{NFSU2_TR(0x53b720);
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
B53b722:{NFSU2_TR(0x53b722);
if(r1(R+518)){{goto L53b730;}}
}
B53b724:L53b724:{c.instructions+=4;NFSU2_TR(0x53b724);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b727:{NFSU2_TR(0x53b727);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b72a:{NFSU2_TR(0x53b72a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b72d:{NFSU2_TR(0x53b72d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b730:L53b730:{c.instructions+=1;NFSU2_TR(0x53b730);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53b740:L53b740:{c.instructions+=3;NFSU2_TR(0x53b740);
__builtin_memmove((R+0),gp(0x7fa1cc),4);
}
B53b745:{NFSU2_TR(0x53b745);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b746:{NFSU2_TR(0x53b746);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b74bull));
TAIL_STATIC(0x52cef0u,52c);
}
B53b74b:L53b74b:{c.instructions+=3;NFSU2_TR(0x53b74b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53b74e:{NFSU2_TR(0x53b74e);
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
B53b750:{NFSU2_TR(0x53b750);
if(r1(R+518)){{goto L53b763;}}
}
B53b752:L53b752:{c.instructions+=5;NFSU2_TR(0x53b752);
w4(R+4,u32(0xffull));
}
B53b757:{NFSU2_TR(0x53b757);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b75a:{NFSU2_TR(0x53b75a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b75d:{NFSU2_TR(0x53b75d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b760:{NFSU2_TR(0x53b760);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b763:L53b763:{c.instructions+=1;NFSU2_TR(0x53b763);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53b770:L53b770:{c.instructions+=4;NFSU2_TR(0x53b770);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b771:{NFSU2_TR(0x53b771);
__builtin_memmove((R+20),(R+16),4);
}
B53b773:{NFSU2_TR(0x53b773);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B53b77a:{NFSU2_TR(0x53b77a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53b7aa;}}
}
B53b77c:L53b77c:{c.instructions+=6;NFSU2_TR(0x53b77c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53b77f:{NFSU2_TR(0x53b77f);
__builtin_memmove(gp(0x838994),(R+0),4);
}
B53b784:{NFSU2_TR(0x53b784);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53b787:{NFSU2_TR(0x53b787);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b788:{NFSU2_TR(0x53b788);
w4(R+4,u32(0x8635bcull));
}
B53b78d:{NFSU2_TR(0x53b78d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b792ull));
TAIL_STATIC(0x525040u,525);
}
B53b792:L53b792:{c.instructions+=6;NFSU2_TR(0x53b792);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53b795:{NFSU2_TR(0x53b795);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b797:{NFSU2_TR(0x53b797);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b79c:{NFSU2_TR(0x53b79c);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b7a1:{NFSU2_TR(0x53b7a1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b7a2:{NFSU2_TR(0x53b7a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b7a7ull));
TAIL_STATIC(0x537c60u,537);
}
B53b7a7:L53b7a7:{c.instructions+=1;NFSU2_TR(0x53b7a7);
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
B53b7aa:L53b7aa:{c.instructions+=2;NFSU2_TR(0x53b7aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B53b7ab:{NFSU2_TR(0x53b7ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53b7b0:L53b7b0:{c.instructions+=8;NFSU2_TR(0x53b7b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b7b1:{NFSU2_TR(0x53b7b1);
__builtin_memmove((R+24),(R+4),4);
}
B53b7b3:{NFSU2_TR(0x53b7b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53b7b6:{NFSU2_TR(0x53b7b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53b7b9:{NFSU2_TR(0x53b7b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53b7bc:{NFSU2_TR(0x53b7bc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b7bd:{NFSU2_TR(0x53b7bd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b7be:{NFSU2_TR(0x53b7be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b7c3ull));
TAIL_STATIC(0x50c900u,50c);
}
B53b7c3:L53b7c3:{c.instructions+=6;NFSU2_TR(0x53b7c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53b7c6:{NFSU2_TR(0x53b7c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53b7c8:{NFSU2_TR(0x53b7c8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B53b7cb:{NFSU2_TR(0x53b7cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b7cc:{NFSU2_TR(0x53b7cc);
w4(R+4,u32(0x8395b0ull));
}
B53b7d1:{NFSU2_TR(0x53b7d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b7d6ull));
TAIL_STATIC(0x599610u,599);
}
B53b7d6:L53b7d6:{c.instructions+=2;NFSU2_TR(0x53b7d6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53b7d8:{NFSU2_TR(0x53b7d8);
if(r1(R+518)){{goto L53b7e1;}}
}
B53b7da:L53b7da:{c.instructions+=2;NFSU2_TR(0x53b7da);
u8 U[4];
w4(U+0,u32(0xed56be1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b7df:{NFSU2_TR(0x53b7df);
{goto L53b801;}
}
B53b7e1:L53b7e1:{c.instructions+=2;NFSU2_TR(0x53b7e1);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53b7e8:{NFSU2_TR(0x53b7e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53b849;}}
}
B53b7ea:L53b7ea:{c.instructions+=4;NFSU2_TR(0x53b7ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53b7ed:{NFSU2_TR(0x53b7ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b7ee:{NFSU2_TR(0x53b7ee);
w4(R+4,u32(0x838980ull));
}
B53b7f3:{NFSU2_TR(0x53b7f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b7f8ull));
TAIL_STATIC(0x530350u,530);
}
B53b7f8:L53b7f8:{c.instructions+=2;NFSU2_TR(0x53b7f8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53b7fa:{NFSU2_TR(0x53b7fa);
if(r1(R+518)){{goto L53b81f;}}
}
B53b7fc:L53b7fc:{c.instructions+=1;NFSU2_TR(0x53b7fc);
u8 U[4];
w4(U+0,u32(0x371711cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b801:L53b801:{c.instructions+=3;NFSU2_TR(0x53b801);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53b804:{NFSU2_TR(0x53b804);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b805:{NFSU2_TR(0x53b805);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b80aull));
TAIL_STATIC(0x50c900u,50c);
}
B53b80a:L53b80a:{c.instructions+=5;NFSU2_TR(0x53b80a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53b80d:{NFSU2_TR(0x53b80d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b80f:{NFSU2_TR(0x53b80f);
u8 U[4];
w4(U+0,u32(0x79b5f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b814:{NFSU2_TR(0x53b814);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b815:{NFSU2_TR(0x53b815);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b81aull));
TAIL_STATIC(0x51cf70u,51c);
}
B53b81a:L53b81a:{c.instructions+=3;NFSU2_TR(0x53b81a);
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
B53b81d:{NFSU2_TR(0x53b81d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53b81e:{NFSU2_TR(0x53b81e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53b81f:L53b81f:{c.instructions+=5;NFSU2_TR(0x53b81f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53b822:{NFSU2_TR(0x53b822);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b824:{NFSU2_TR(0x53b824);
u8 U[4];
w4(U+0,u32(0x78f9d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b829:{NFSU2_TR(0x53b829);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b82a:{NFSU2_TR(0x53b82a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b82full));
TAIL_STATIC(0x51cf70u,51c);
}
B53b82f:L53b82f:{c.instructions+=7;NFSU2_TR(0x53b82f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53b832:{NFSU2_TR(0x53b832);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53b835:{NFSU2_TR(0x53b835);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53b838:{NFSU2_TR(0x53b838);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b839:{NFSU2_TR(0x53b839);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b83e:{NFSU2_TR(0x53b83e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b83f:{NFSU2_TR(0x53b83f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b844ull));
TAIL_STATIC(0x537be0u,537);
}
B53b844:L53b844:{c.instructions+=3;NFSU2_TR(0x53b844);
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
B53b847:{NFSU2_TR(0x53b847);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53b848:{NFSU2_TR(0x53b848);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53b849:L53b849:{c.instructions+=4;NFSU2_TR(0x53b849);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53b84c:{NFSU2_TR(0x53b84c);
u8 U[4];
w4(U+0,u32(0x4287206full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b851:{NFSU2_TR(0x53b851);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b852:{NFSU2_TR(0x53b852);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b857ull));
TAIL_STATIC(0x50c900u,50c);
}
B53b857:L53b857:{c.instructions+=5;NFSU2_TR(0x53b857);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53b85a:{NFSU2_TR(0x53b85a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b85c:{NFSU2_TR(0x53b85c);
u8 U[4];
w4(U+0,u32(0x78f9d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b861:{NFSU2_TR(0x53b861);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b862:{NFSU2_TR(0x53b862);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b867ull));
TAIL_STATIC(0x51cf70u,51c);
}
B53b867:L53b867:{c.instructions+=3;NFSU2_TR(0x53b867);
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
B53b86a:{NFSU2_TR(0x53b86a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53b86b:{NFSU2_TR(0x53b86b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53b870:L53b870:{c.instructions+=8;NFSU2_TR(0x53b870);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b871:{NFSU2_TR(0x53b871);
__builtin_memmove((R+24),(R+4),4);
}
B53b873:{NFSU2_TR(0x53b873);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53b876:{NFSU2_TR(0x53b876);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53b879:{NFSU2_TR(0x53b879);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53b87c:{NFSU2_TR(0x53b87c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b87d:{NFSU2_TR(0x53b87d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b87e:{NFSU2_TR(0x53b87e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b883ull));
TAIL_STATIC(0x50c900u,50c);
}
B53b883:L53b883:{c.instructions+=6;NFSU2_TR(0x53b883);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53b886:{NFSU2_TR(0x53b886);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53b888:{NFSU2_TR(0x53b888);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B53b88b:{NFSU2_TR(0x53b88b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b88c:{NFSU2_TR(0x53b88c);
w4(R+4,u32(0x8395b0ull));
}
B53b891:{NFSU2_TR(0x53b891);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b896ull));
TAIL_STATIC(0x599610u,599);
}
B53b896:L53b896:{c.instructions+=2;NFSU2_TR(0x53b896);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53b898:{NFSU2_TR(0x53b898);
if(r1(R+518)){{goto L53b8a1;}}
}
B53b89a:L53b89a:{c.instructions+=2;NFSU2_TR(0x53b89a);
u8 U[4];
w4(U+0,u32(0xed56be1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b89f:{NFSU2_TR(0x53b89f);
{goto L53b8c1;}
}
B53b8a1:L53b8a1:{c.instructions+=2;NFSU2_TR(0x53b8a1);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53b8a8:{NFSU2_TR(0x53b8a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53b909;}}
}
B53b8aa:L53b8aa:{c.instructions+=4;NFSU2_TR(0x53b8aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53b8ad:{NFSU2_TR(0x53b8ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b8ae:{NFSU2_TR(0x53b8ae);
w4(R+4,u32(0x838980ull));
}
B53b8b3:{NFSU2_TR(0x53b8b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b8b8ull));
TAIL_STATIC(0x530350u,530);
}
B53b8b8:L53b8b8:{c.instructions+=2;NFSU2_TR(0x53b8b8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53b8ba:{NFSU2_TR(0x53b8ba);
if(r1(R+518)){{goto L53b8df;}}
}
B53b8bc:L53b8bc:{c.instructions+=1;NFSU2_TR(0x53b8bc);
u8 U[4];
w4(U+0,u32(0x371711cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b8c1:L53b8c1:{c.instructions+=3;NFSU2_TR(0x53b8c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53b8c4:{NFSU2_TR(0x53b8c4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b8c5:{NFSU2_TR(0x53b8c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b8caull));
TAIL_STATIC(0x50c900u,50c);
}
B53b8ca:L53b8ca:{c.instructions+=5;NFSU2_TR(0x53b8ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53b8cd:{NFSU2_TR(0x53b8cd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b8cf:{NFSU2_TR(0x53b8cf);
u8 U[4];
w4(U+0,u32(0x79b5f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b8d4:{NFSU2_TR(0x53b8d4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b8d5:{NFSU2_TR(0x53b8d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b8daull));
TAIL_STATIC(0x51cf70u,51c);
}
B53b8da:L53b8da:{c.instructions+=3;NFSU2_TR(0x53b8da);
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
B53b8dd:{NFSU2_TR(0x53b8dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53b8de:{NFSU2_TR(0x53b8de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53b8df:L53b8df:{c.instructions+=5;NFSU2_TR(0x53b8df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53b8e2:{NFSU2_TR(0x53b8e2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b8e4:{NFSU2_TR(0x53b8e4);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b8e9:{NFSU2_TR(0x53b8e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b8ea:{NFSU2_TR(0x53b8ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b8efull));
TAIL_STATIC(0x51cf70u,51c);
}
B53b8ef:L53b8ef:{c.instructions+=7;NFSU2_TR(0x53b8ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53b8f2:{NFSU2_TR(0x53b8f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53b8f5:{NFSU2_TR(0x53b8f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53b8f8:{NFSU2_TR(0x53b8f8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b8f9:{NFSU2_TR(0x53b8f9);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b8fe:{NFSU2_TR(0x53b8fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b8ff:{NFSU2_TR(0x53b8ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b904ull));
TAIL_STATIC(0x537be0u,537);
}
B53b904:L53b904:{c.instructions+=3;NFSU2_TR(0x53b904);
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
B53b907:{NFSU2_TR(0x53b907);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53b908:{NFSU2_TR(0x53b908);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53b909:L53b909:{c.instructions+=4;NFSU2_TR(0x53b909);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53b90c:{NFSU2_TR(0x53b90c);
u8 U[4];
w4(U+0,u32(0x4287206full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b911:{NFSU2_TR(0x53b911);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b912:{NFSU2_TR(0x53b912);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b917ull));
TAIL_STATIC(0x50c900u,50c);
}
B53b917:L53b917:{c.instructions+=5;NFSU2_TR(0x53b917);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53b91a:{NFSU2_TR(0x53b91a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b91c:{NFSU2_TR(0x53b91c);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b921:{NFSU2_TR(0x53b921);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b922:{NFSU2_TR(0x53b922);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b927ull));
TAIL_STATIC(0x51cf70u,51c);
}
B53b927:L53b927:{c.instructions+=3;NFSU2_TR(0x53b927);
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
B53b92a:{NFSU2_TR(0x53b92a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53b92b:{NFSU2_TR(0x53b92b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53b930:L53b930:{c.instructions+=6;NFSU2_TR(0x53b930);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b931:{NFSU2_TR(0x53b931);
__builtin_memmove((R+24),(R+4),4);
}
B53b933:{NFSU2_TR(0x53b933);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53b936:{NFSU2_TR(0x53b936);
u8 U[4];
w4(U+0,u32(0x1a076full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b93b:{NFSU2_TR(0x53b93b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b93c:{NFSU2_TR(0x53b93c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b941ull));
TAIL_STATIC(0x50c900u,50c);
}
B53b941:L53b941:{c.instructions+=4;NFSU2_TR(0x53b941);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53b944:{NFSU2_TR(0x53b944);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b949:{NFSU2_TR(0x53b949);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b94a:{NFSU2_TR(0x53b94a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b94full));
TAIL_STATIC(0x537be0u,537);
}
B53b94f:L53b94f:{c.instructions+=3;NFSU2_TR(0x53b94f);
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
B53b952:{NFSU2_TR(0x53b952);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53b953:{NFSU2_TR(0x53b953);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53b960:L53b960:{c.instructions+=9;NFSU2_TR(0x53b960);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b961:{NFSU2_TR(0x53b961);
__builtin_memmove((R+24),(R+4),4);
}
B53b963:{NFSU2_TR(0x53b963);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53b966:{NFSU2_TR(0x53b966);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53b969:{NFSU2_TR(0x53b969);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53b96c:{NFSU2_TR(0x53b96c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b96d:{NFSU2_TR(0x53b96d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b96e:{NFSU2_TR(0x53b96e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b96f:{NFSU2_TR(0x53b96f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b974ull));
TAIL_STATIC(0x50c900u,50c);
}
B53b974:L53b974:{c.instructions+=5;NFSU2_TR(0x53b974);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53b977:{NFSU2_TR(0x53b977);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53b97a:{NFSU2_TR(0x53b97a);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B53b97e:{NFSU2_TR(0x53b97e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b97f:{NFSU2_TR(0x53b97f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b984ull));
TAIL_STATIC(0x4fff00u,4ff);
}
B53b984:L53b984:{c.instructions+=4;NFSU2_TR(0x53b984);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b985:{NFSU2_TR(0x53b985);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53b988:{NFSU2_TR(0x53b988);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b989:{NFSU2_TR(0x53b989);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b98eull));
TAIL_STATIC(0x537be0u,537);
}
B53b98e:L53b98e:{c.instructions+=5;NFSU2_TR(0x53b98e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53b991:{NFSU2_TR(0x53b991);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53b994:{NFSU2_TR(0x53b994);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B53b998:{NFSU2_TR(0x53b998);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b999:{NFSU2_TR(0x53b999);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b99eull));
TAIL_STATIC(0x4fff40u,4ff);
}
B53b99e:L53b99e:{c.instructions+=3;NFSU2_TR(0x53b99e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b99f:{NFSU2_TR(0x53b99f);
u8 U[4];
w4(U+0,u32(0x78f604ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b9a4:{NFSU2_TR(0x53b9a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b9a9ull));
TAIL_STATIC(0x50b990u,50b);
}
B53b9a9:L53b9a9:{c.instructions+=5;NFSU2_TR(0x53b9a9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b9ab:{NFSU2_TR(0x53b9ab);
__builtin_memmove((R+28),(R+0),4);
}
B53b9ad:{NFSU2_TR(0x53b9ad);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b9af:{NFSU2_TR(0x53b9af);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53b9b0:{NFSU2_TR(0x53b9b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53b9b5ull));
TAIL_STATIC(0x4901d0u,490);
}
B53b9b5:L53b9b5:{c.instructions+=4;NFSU2_TR(0x53b9b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53b9b8:{NFSU2_TR(0x53b9b8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
}
B53b9bb:{NFSU2_TR(0x53b9bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53b9bd:{NFSU2_TR(0x53b9bd);
if(r1(R+518)){{goto L53b9d9;}}
}
B53b9bf:L53b9bf:{c.instructions+=2;NFSU2_TR(0x53b9bf);
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
B53b9c1:{NFSU2_TR(0x53b9c1);
if(r1(R+518)){{goto L53b9f3;}}
}
B53b9c3:L53b9c3:{c.instructions+=2;NFSU2_TR(0x53b9c3);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
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
B53b9c6:{NFSU2_TR(0x53b9c6);
if(r1(R+518)){{goto L53b9f3;}}
}
B53b9c8:L53b9c8:{c.instructions+=7;NFSU2_TR(0x53b9c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b9cb:{NFSU2_TR(0x53b9cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53b9ce:{NFSU2_TR(0x53b9ce);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x400000ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B53b9d3:{NFSU2_TR(0x53b9d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53b9d4:{NFSU2_TR(0x53b9d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b9d7:{NFSU2_TR(0x53b9d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53b9d8:{NFSU2_TR(0x53b9d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53b9d9:L53b9d9:{c.instructions+=2;NFSU2_TR(0x53b9d9);
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
B53b9db:{NFSU2_TR(0x53b9db);
if(r1(R+518)){{goto L53b9f3;}}
}
B53b9dd:L53b9dd:{c.instructions+=4;NFSU2_TR(0x53b9dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53b9e0:{NFSU2_TR(0x53b9e0);
w4(R+0,u32(0x74ce8c0bull));
}
B53b9e5:{NFSU2_TR(0x53b9e5);
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
B53b9e7:{NFSU2_TR(0x53b9e7);
if(r1(R+518)){{goto L53b9f3;}}
}
B53b9e9:L53b9e9:{c.instructions+=2;NFSU2_TR(0x53b9e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53b9ec:{NFSU2_TR(0x53b9ec);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400000ull))));
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
B53b9f3:L53b9f3:{c.instructions+=3;NFSU2_TR(0x53b9f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53b9f4:{NFSU2_TR(0x53b9f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53b9f5:{NFSU2_TR(0x53b9f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53ba00:L53ba00:{c.instructions+=17;NFSU2_TR(0x53ba00);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ba02:{NFSU2_TR(0x53ba02);
u8 U[4];
w4(U+0,u32(0x7775c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ba07:{NFSU2_TR(0x53ba07);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53ba0d:{NFSU2_TR(0x53ba0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ba0e:{NFSU2_TR(0x53ba0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ba15:{NFSU2_TR(0x53ba15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B53ba18:{NFSU2_TR(0x53ba18);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ba19:{NFSU2_TR(0x53ba19);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ba1a:{NFSU2_TR(0x53ba1a);
__builtin_memmove((R+24),(R+4),4);
}
B53ba1c:{NFSU2_TR(0x53ba1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53ba22:{NFSU2_TR(0x53ba22);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ba23:{NFSU2_TR(0x53ba23);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B53ba26:{NFSU2_TR(0x53ba26);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53ba29:{NFSU2_TR(0x53ba29);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ba2d:{NFSU2_TR(0x53ba2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ba31:{NFSU2_TR(0x53ba31);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ba35:{NFSU2_TR(0x53ba35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ba3aull));
TAIL_STATIC(0x5385c0u,538);
}
B53ba3a:L53ba3a:{c.instructions+=12;NFSU2_TR(0x53ba3a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B53ba3c:{NFSU2_TR(0x53ba3c);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B53ba40:{NFSU2_TR(0x53ba40);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B53ba44:{NFSU2_TR(0x53ba44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ba4a:{NFSU2_TR(0x53ba4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ba4e:{NFSU2_TR(0x53ba4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ba52:{NFSU2_TR(0x53ba52);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ba53:{NFSU2_TR(0x53ba53);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B53ba57:{NFSU2_TR(0x53ba57);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ba58:{NFSU2_TR(0x53ba58);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ba59:{NFSU2_TR(0x53ba59);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ba5d:{NFSU2_TR(0x53ba5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ba62ull));
TAIL_STATIC(0x539960u,539);
}
B53ba62:L53ba62:{c.instructions+=6;NFSU2_TR(0x53ba62);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53ba66:{NFSU2_TR(0x53ba66);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B53ba6a:{NFSU2_TR(0x53ba6a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B53ba6d:{NFSU2_TR(0x53ba6d);
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
B53ba6f:{NFSU2_TR(0x53ba6f);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B53ba73:{NFSU2_TR(0x53ba73);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53ba94;}}
}
B53ba75:L53ba75:{c.instructions+=2;NFSU2_TR(0x53ba75);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B53ba7d:{NFSU2_TR(0x53ba7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ba82ull));
TAIL_STATIC(0x4def30u,4de);
}
B53ba82:L53ba82:{c.instructions+=7;NFSU2_TR(0x53ba82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53ba83:{NFSU2_TR(0x53ba83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53ba84:{NFSU2_TR(0x53ba84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53ba85:{NFSU2_TR(0x53ba85);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53ba89:{NFSU2_TR(0x53ba89);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ba90:{NFSU2_TR(0x53ba90);
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
B53ba93:{NFSU2_TR(0x53ba93);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53ba94:L53ba94:{c.instructions+=2;NFSU2_TR(0x53ba94);
__builtin_memmove((R+28),(R+24),4);
}
B53ba96:{NFSU2_TR(0x53ba96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ba9bull));
TAIL_STATIC(0x502fd0u,502);
}
B53ba9b:L53ba9b:{c.instructions+=3;NFSU2_TR(0x53ba9b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53ba9d:{NFSU2_TR(0x53ba9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53baa1:{NFSU2_TR(0x53baa1);
if(r1(R+518)){{goto L53bb69;}}
}
B53baa7:L53baa7:{c.instructions+=3;NFSU2_TR(0x53baa7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53baab:{NFSU2_TR(0x53baab);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53baae:{NFSU2_TR(0x53baae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53bac4;}}
}
B53bab0:L53bab0:{c.instructions+=5;NFSU2_TR(0x53bab0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53bab3:{NFSU2_TR(0x53bab3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B53bab6:{NFSU2_TR(0x53bab6);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0x1full))));
}
B53bab9:{NFSU2_TR(0x53bab9);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x5ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B53babc:{NFSU2_TR(0x53babc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53bb5d;}}
}
B53bac2:L53bac2:{c.instructions+=1;NFSU2_TR(0x53bac2);
{goto L53bb0a;}
}
B53bac4:L53bac4:{c.instructions+=2;NFSU2_TR(0x53bac4);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x1dull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1dull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1dull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B53bac7:{NFSU2_TR(0x53bac7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53bb0a;}}
}
B53bac9:L53bac9:{c.instructions+=3;NFSU2_TR(0x53bac9);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B53bacf:{NFSU2_TR(0x53bacf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53bad1:{NFSU2_TR(0x53bad1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53bad4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B53bad4:L53bad4:{c.instructions+=5;NFSU2_TR(0x53bad4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53bad7:{NFSU2_TR(0x53bad7);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B53bada:{NFSU2_TR(0x53bada);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0x1full))));
}
B53badd:{NFSU2_TR(0x53badd);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x5ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B53bae0:{NFSU2_TR(0x53bae0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53bb59;}}
}
B53bae2:L53bae2:{c.instructions+=7;NFSU2_TR(0x53bae2);
__builtin_memmove((R+8),gp(0x8a1ccc),4);
}
B53bae8:{NFSU2_TR(0x53bae8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B53baee:{NFSU2_TR(0x53baee);
u8 U[13];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+24,u32(s32(s8(r1(U+12)))));
}
B53baf6:{NFSU2_TR(0x53baf6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53baf7:{NFSU2_TR(0x53baf7);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B53baf9:{NFSU2_TR(0x53baf9);
u8 U[4];
w4(U+0,u32(0xce7d8db5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bafe:{NFSU2_TR(0x53bafe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53bb03ull));
TAIL_STATIC(0x61b500u,61b);
}
B53bb03:L53bb03:{c.instructions+=3;NFSU2_TR(0x53bb03);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B53bb06:{NFSU2_TR(0x53bb06);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53bb08:{NFSU2_TR(0x53bb08);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53bb59;}}
}
B53bb0a:L53bb0a:{c.instructions+=2;NFSU2_TR(0x53bb0a);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bb0c:{NFSU2_TR(0x53bb0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53bb11ull));
TAIL_STATIC(0x575620u,575);
}
B53bb11:L53bb11:{c.instructions+=3;NFSU2_TR(0x53bb11);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53bb14:{NFSU2_TR(0x53bb14);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53bb16:{NFSU2_TR(0x53bb16);
if(r1(R+518)){{goto L53bb3f;}}
}
B53bb18:L53bb18:{c.instructions+=12;NFSU2_TR(0x53bb18);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53bb1b:{NFSU2_TR(0x53bb1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53bb1e:{NFSU2_TR(0x53bb1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53bb21:{NFSU2_TR(0x53bb21);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53bb24:{NFSU2_TR(0x53bb24);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53bb27:{NFSU2_TR(0x53bb27);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53bb2a:{NFSU2_TR(0x53bb2a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53bb2e:{NFSU2_TR(0x53bb2e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53bb31:{NFSU2_TR(0x53bb31);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53bb34:{NFSU2_TR(0x53bb34);
u8 U[4];
w4(U+0,u32(0x79afdcull));
s4(u32(r4(R+0)),r4(U+0));
}
B53bb3a:{NFSU2_TR(0x53bb3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53bb3d:{NFSU2_TR(0x53bb3d);
{goto L53bb41;}
}
B53bb3f:L53bb3f:{c.instructions+=1;NFSU2_TR(0x53bb3f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B53bb41:L53bb41:{c.instructions+=5;NFSU2_TR(0x53bb41);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53bb45:{NFSU2_TR(0x53bb45);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bb47:{NFSU2_TR(0x53bb47);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bb49:{NFSU2_TR(0x53bb49);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bb4a:{NFSU2_TR(0x53bb4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53bb4full));
TAIL_STATIC(0x52ed80u,52e);
}
B53bb4f:L53bb4f:{c.instructions+=2;NFSU2_TR(0x53bb4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53bb53:{NFSU2_TR(0x53bb53);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B53bb59:L53bb59:{c.instructions+=1;NFSU2_TR(0x53bb59);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53bb5d:L53bb5d:{c.instructions+=3;NFSU2_TR(0x53bb5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B53bb5f:{NFSU2_TR(0x53bb5f);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B53bb63:{NFSU2_TR(0x53bb63);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53baa7u);}goto L53baa7;}}
}
B53bb69:L53bb69:{c.instructions+=5;NFSU2_TR(0x53bb69);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53bb6d:{NFSU2_TR(0x53bb6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53bb70:{NFSU2_TR(0x53bb70);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
}
B53bb73:{NFSU2_TR(0x53bb73);
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
B53bb75:{NFSU2_TR(0x53bb75);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53bbc3;}}
}
B53bb77:L53bb77:{c.instructions+=4;NFSU2_TR(0x53bb77);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B53bb7b:{NFSU2_TR(0x53bb7b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53bb7d:{NFSU2_TR(0x53bb7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B53bb85:{NFSU2_TR(0x53bb85);
if(r1(R+518)){{goto L53bc75;}}
}
B53bb8b:L53bb8b:{c.instructions+=1;NFSU2_TR(0x53bb8b);
{goto L53bb90;}
}
B53bb90:L53bb90:{c.instructions+=7;NFSU2_TR(0x53bb90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53bb92:{NFSU2_TR(0x53bb92);
__builtin_memmove((R+4),(R+24),4);
}
B53bb94:{NFSU2_TR(0x53bb94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53bb97:{NFSU2_TR(0x53bb97);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B53bb99:{NFSU2_TR(0x53bb99);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bb9a:{NFSU2_TR(0x53bb9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53bb9d:{NFSU2_TR(0x53bb9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53bba2ull));
TAIL_STATIC(0x575630u,575);
}
B53bba2:L53bba2:{c.instructions+=5;NFSU2_TR(0x53bba2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53bba6:{NFSU2_TR(0x53bba6);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B53bbaa:{NFSU2_TR(0x53bbaa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53bbad:{NFSU2_TR(0x53bbad);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53bbaf:{NFSU2_TR(0x53bbaf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53bb90u);}goto L53bb90;}}
}
B53bbb1:L53bbb1:{c.instructions+=7;NFSU2_TR(0x53bbb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53bbb2:{NFSU2_TR(0x53bbb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53bbb3:{NFSU2_TR(0x53bbb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53bbb4:{NFSU2_TR(0x53bbb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53bbb8:{NFSU2_TR(0x53bbb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53bbbf:{NFSU2_TR(0x53bbbf);
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
B53bbc2:{NFSU2_TR(0x53bbc2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53bbc3:L53bbc3:{c.instructions+=4;NFSU2_TR(0x53bbc3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53bbc7:{NFSU2_TR(0x53bbc7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bbc8:{NFSU2_TR(0x53bbc8);
w4(R+4,u32(0x8392c0ull));
}
B53bbcd:{NFSU2_TR(0x53bbcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53bbd2ull));
TAIL_STATIC(0x6102f0u,610);
}
B53bbd2:L53bbd2:{c.instructions+=2;NFSU2_TR(0x53bbd2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53bbd4:{NFSU2_TR(0x53bbd4);
if(r1(R+518)){{goto L53bc07;}}
}
B53bbd6:L53bbd6:{c.instructions+=4;NFSU2_TR(0x53bbd6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53bbda:{NFSU2_TR(0x53bbda);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bbdb:{NFSU2_TR(0x53bbdb);
__builtin_memmove((R+4),(R+24),4);
}
B53bbdd:{NFSU2_TR(0x53bbdd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53bbe2ull));
TAIL_STATIC(0x51f7a0u,51f);
}
B53bbe2:L53bbe2:{c.instructions+=2;NFSU2_TR(0x53bbe2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53bbe4:{NFSU2_TR(0x53bbe4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53bbf4;}}
}
B53bbe6:L53bbe6:{c.instructions+=3;NFSU2_TR(0x53bbe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53bbe9:{NFSU2_TR(0x53bbe9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53bbeb:{NFSU2_TR(0x53bbeb);
if(r1(R+518)){{goto L53bbf2;}}
}
B53bbed:L53bbed:{c.instructions+=2;NFSU2_TR(0x53bbed);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B53bbf0:{NFSU2_TR(0x53bbf0);
{goto L53bbf4;}
}
B53bbf2:L53bbf2:{c.instructions+=1;NFSU2_TR(0x53bbf2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B53bbf4:L53bbf4:{c.instructions+=3;NFSU2_TR(0x53bbf4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bbf5:{NFSU2_TR(0x53bbf5);
__builtin_memmove((R+4),(R+24),4);
}
B53bbf7:{NFSU2_TR(0x53bbf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53bbfcull));
TAIL_STATIC(0x5386a0u,538);
}
B53bbfc:L53bbfc:{c.instructions+=3;NFSU2_TR(0x53bbfc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bbfd:{NFSU2_TR(0x53bbfd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53bc00:{NFSU2_TR(0x53bc00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53bc05ull));
TAIL_STATIC(0x43be80u,43b);
}
B53bc05:L53bc05:{c.instructions+=1;NFSU2_TR(0x53bc05);
{goto L53bc23;}
}
B53bc07:L53bc07:{c.instructions+=4;NFSU2_TR(0x53bc07);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53bc0b:{NFSU2_TR(0x53bc0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53bc0e:{NFSU2_TR(0x53bc0e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53bc10:{NFSU2_TR(0x53bc10);
if(r1(R+518)){{goto L53bc17;}}
}
B53bc12:L53bc12:{c.instructions+=2;NFSU2_TR(0x53bc12);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B53bc15:{NFSU2_TR(0x53bc15);
{goto L53bc19;}
}
B53bc17:L53bc17:{c.instructions+=1;NFSU2_TR(0x53bc17);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B53bc19:L53bc19:{c.instructions+=2;NFSU2_TR(0x53bc19);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bc1a:{NFSU2_TR(0x53bc1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53bc1full));
TAIL_STATIC(0x5386a0u,538);
}
B53bc1f:L53bc1f:{c.instructions+=1;NFSU2_TR(0x53bc1f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53bc23:L53bc23:{c.instructions+=4;NFSU2_TR(0x53bc23);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bc25:{NFSU2_TR(0x53bc25);
__builtin_memmove((R+4),(R+24),4);
}
B53bc27:{NFSU2_TR(0x53bc27);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53bc2b:{NFSU2_TR(0x53bc2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53bc30ull));
TAIL_STATIC(0x52eb90u,52e);
}
B53bc30:L53bc30:{c.instructions+=6;NFSU2_TR(0x53bc30);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53bc34:{NFSU2_TR(0x53bc34);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bc35:{NFSU2_TR(0x53bc35);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bc36:{NFSU2_TR(0x53bc36);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bc37:{NFSU2_TR(0x53bc37);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bc38:{NFSU2_TR(0x53bc38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53bc3dull));
TAIL_STATIC(0x4c2100u,4c2);
}
B53bc3d:L53bc3d:{c.instructions+=6;NFSU2_TR(0x53bc3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53bc41:{NFSU2_TR(0x53bc41);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B53bc45:{NFSU2_TR(0x53bc45);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B53bc48:{NFSU2_TR(0x53bc48);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53bc4a:{NFSU2_TR(0x53bc4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B53bc52:{NFSU2_TR(0x53bc52);
if(r1(R+518)){{goto L53bc75;}}
}
B53bc54:L53bc54:{c.instructions+=7;NFSU2_TR(0x53bc54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B53bc56:{NFSU2_TR(0x53bc56);
__builtin_memmove((R+8),(R+0),4);
}
B53bc58:{NFSU2_TR(0x53bc58);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53bc5b:{NFSU2_TR(0x53bc5b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B53bc5d:{NFSU2_TR(0x53bc5d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bc5e:{NFSU2_TR(0x53bc5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53bc61:{NFSU2_TR(0x53bc61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53bc66ull));
TAIL_STATIC(0x575630u,575);
}
B53bc66:L53bc66:{c.instructions+=5;NFSU2_TR(0x53bc66);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53bc6a:{NFSU2_TR(0x53bc6a);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B53bc6e:{NFSU2_TR(0x53bc6e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53bc71:{NFSU2_TR(0x53bc71);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53bc73:{NFSU2_TR(0x53bc73);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53bc54u);}goto L53bc54;}}
}
B53bc75:L53bc75:{c.instructions+=7;NFSU2_TR(0x53bc75);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53bc79:{NFSU2_TR(0x53bc79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53bc7a:{NFSU2_TR(0x53bc7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53bc7b:{NFSU2_TR(0x53bc7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53bc7c:{NFSU2_TR(0x53bc7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53bc83:{NFSU2_TR(0x53bc83);
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
B53bc86:{NFSU2_TR(0x53bc86);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53bc90:L53bc90:{c.instructions+=6;NFSU2_TR(0x53bc90);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bc91:{NFSU2_TR(0x53bc91);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bc92:{NFSU2_TR(0x53bc92);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bc93:{NFSU2_TR(0x53bc93);
u8 U[4];
w4(U+0,u32(0x5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bc95:{NFSU2_TR(0x53bc95);
__builtin_memmove((R+28),(R+4),4);
}
B53bc97:{NFSU2_TR(0x53bc97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53bc9cull));
TAIL_STATIC(0x575620u,575);
}
B53bc9c:L53bc9c:{c.instructions+=4;NFSU2_TR(0x53bc9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B53bca0:{NFSU2_TR(0x53bca0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53bca3:{NFSU2_TR(0x53bca3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53bca5:{NFSU2_TR(0x53bca5);
if(r1(R+518)){{goto L53bcc8;}}
}
B53bca7:L53bca7:{c.instructions+=11;NFSU2_TR(0x53bca7);
__builtin_memmove((R+4),gp(0x7fa210),4);
}
B53bcad:{NFSU2_TR(0x53bcad);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53bcb1:{NFSU2_TR(0x53bcb1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bcb2:{NFSU2_TR(0x53bcb2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53bcb6:{NFSU2_TR(0x53bcb6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bcb8:{NFSU2_TR(0x53bcb8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bcba:{NFSU2_TR(0x53bcba);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bcbb:{NFSU2_TR(0x53bcbb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bcbc:{NFSU2_TR(0x53bcbc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bcbd:{NFSU2_TR(0x53bcbd);
__builtin_memmove((R+4),(R+0),4);
}
B53bcbf:{NFSU2_TR(0x53bcbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53bcc4ull));
TAIL_STATIC(0x521f40u,521);
}
B53bcc4:L53bcc4:{c.instructions+=2;NFSU2_TR(0x53bcc4);
__builtin_memmove((R+24),(R+0),4);
}
B53bcc6:{NFSU2_TR(0x53bcc6);
{goto L53bcca;}
}
B53bcc8:L53bcc8:{c.instructions+=1;NFSU2_TR(0x53bcc8);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B53bcca:L53bcca:{c.instructions+=4;NFSU2_TR(0x53bcca);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53bcce:{NFSU2_TR(0x53bcce);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bccf:{NFSU2_TR(0x53bccf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53bcd2:{NFSU2_TR(0x53bcd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53bcd7ull));
TAIL_STATIC(0x539d00u,539);
}
B53bcd7:L53bcd7:{c.instructions+=6;NFSU2_TR(0x53bcd7);
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
B53bcda:{NFSU2_TR(0x53bcda);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53bcdd:{NFSU2_TR(0x53bcdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53bcdf:{NFSU2_TR(0x53bcdf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bce0:{NFSU2_TR(0x53bce0);
__builtin_memmove((R+4),(R+28),4);
}
B53bce2:{NFSU2_TR(0x53bce2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53bce5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B53bce5:L53bce5:{c.instructions+=4;NFSU2_TR(0x53bce5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53bce6:{NFSU2_TR(0x53bce6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53bce7:{NFSU2_TR(0x53bce7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53bce8:{NFSU2_TR(0x53bce8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53bcf0:L53bcf0:{c.instructions+=4;NFSU2_TR(0x53bcf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bcf1:{NFSU2_TR(0x53bcf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53bcf4:{NFSU2_TR(0x53bcf4);
w4(R+4,u32(0x838980ull));
}
B53bcf9:{NFSU2_TR(0x53bcf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53bcfeull));
TAIL_STATIC(0x521530u,521);
}
B53bcfe:L53bcfe:{c.instructions+=5;NFSU2_TR(0x53bcfe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bcff:{NFSU2_TR(0x53bcff);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bd04:{NFSU2_TR(0x53bd04);
u8 U[4];
w4(U+0,u32(0x2f5e7da3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bd09:{NFSU2_TR(0x53bd09);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bd0a:{NFSU2_TR(0x53bd0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53bd0full));
TAIL_STATIC(0x537b80u,537);
}
B53bd0f:L53bd0f:{c.instructions+=3;NFSU2_TR(0x53bd0f);
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
B53bd12:{NFSU2_TR(0x53bd12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53bd13:{NFSU2_TR(0x53bd13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53bd20:L53bd20:{c.instructions+=3;NFSU2_TR(0x53bd20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bd21:{NFSU2_TR(0x53bd21);
__builtin_memmove((R+24),(R+4),4);
}
B53bd23:{NFSU2_TR(0x53bd23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53bd28ull));
TAIL_STATIC(0x538c00u,538);
}
B53bd28:L53bd28:{c.instructions+=3;NFSU2_TR(0x53bd28);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B53bd2e:{NFSU2_TR(0x53bd2e);
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
B53bd30:{NFSU2_TR(0x53bd30);
if(r1(R+518)){{goto L53bd4a;}}
}
B53bd32:L53bd32:{c.instructions+=6;NFSU2_TR(0x53bd32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53bd35:{NFSU2_TR(0x53bd35);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bd37:{NFSU2_TR(0x53bd37);
u8 U[4];
w4(U+0,u32(0x78feb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bd3c:{NFSU2_TR(0x53bd3c);
u8 U[4];
w4(U+0,u32(0xdb285767ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bd41:{NFSU2_TR(0x53bd41);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bd42:{NFSU2_TR(0x53bd42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53bd47ull));
TAIL_STATIC(0x537c00u,537);
}
B53bd47:L53bd47:{c.instructions+=1;NFSU2_TR(0x53bd47);
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
B53bd4a:L53bd4a:{c.instructions+=2;NFSU2_TR(0x53bd4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53bd4b:{NFSU2_TR(0x53bd4b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53bd50:L53bd50:{c.instructions+=13;NFSU2_TR(0x53bd50);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53bd56:{NFSU2_TR(0x53bd56);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bd58:{NFSU2_TR(0x53bd58);
u8 U[4];
w4(U+0,u32(0x777828ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bd5d:{NFSU2_TR(0x53bd5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bd5e:{NFSU2_TR(0x53bd5e);
__builtin_memmove((R+0),gp(0x8389a0),4);
}
B53bd63:{NFSU2_TR(0x53bd63);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53bd6a:{NFSU2_TR(0x53bd6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B53bd6d:{NFSU2_TR(0x53bd6d);
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B53bd70:{NFSU2_TR(0x53bd70);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bd71:{NFSU2_TR(0x53bd71);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bd72:{NFSU2_TR(0x53bd72);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bd73:{NFSU2_TR(0x53bd73);
__builtin_memmove((R+24),(R+4),4);
}
B53bd75:{NFSU2_TR(0x53bd75);
if(r1(R+518)){{goto L53be64;}}
}
B53bd7b:L53bd7b:{c.instructions+=2;NFSU2_TR(0x53bd7b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B53bd7c:{NFSU2_TR(0x53bd7c);
if(r1(R+518)){{goto L53bdb6;}}
}
B53bd7e:L53bd7e:{c.instructions+=2;NFSU2_TR(0x53bd7e);
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
B53bd7f:{NFSU2_TR(0x53bd7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x53c10au,53c);}
}
B53bd85:L53bd85:{c.instructions+=2;NFSU2_TR(0x53bd85);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bd87:{NFSU2_TR(0x53bd87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53bd8cull));
TAIL_STATIC(0x575620u,575);
}
B53bd8c:L53bd8c:{c.instructions+=3;NFSU2_TR(0x53bd8c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53bd8f:{NFSU2_TR(0x53bd8f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53bd91:{NFSU2_TR(0x53bd91);
if(r1(R+518)){{goto L53bdaf;}}
}
B53bd93:L53bd93:{c.instructions+=7;NFSU2_TR(0x53bd93);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bd95:{NFSU2_TR(0x53bd95);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bd97:{NFSU2_TR(0x53bd97);
u8 U[4];
w4(U+0,u32(0x218693e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bd9c:{NFSU2_TR(0x53bd9c);
u8 U[4];
w4(U+0,u32(0x43ce0a53ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bda1:{NFSU2_TR(0x53bda1);
u8 U[4];
w4(U+0,u32(0x61ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bda3:{NFSU2_TR(0x53bda3);
__builtin_memmove((R+4),(R+0),4);
}
B53bda5:{NFSU2_TR(0x53bda5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53bdaaull));
TAIL_STATIC(0x521ff0u,521);
}
B53bdaa:L53bdaa:{c.instructions+=1;NFSU2_TR(0x53bdaa);
TAIL_STATIC(0x53c102u,53c);
}
B53bdaf:L53bdaf:{c.instructions+=2;NFSU2_TR(0x53bdaf);
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
B53bdb1:{NFSU2_TR(0x53bdb1);
TAIL_STATIC(0x53c102u,53c);
}
B53bdb6:L53bdb6:{c.instructions+=3;NFSU2_TR(0x53bdb6);
__builtin_memmove((R+28),gp(0x839bb8),4);
}
B53bdbc:{NFSU2_TR(0x53bdbc);
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
B53bdbe:{NFSU2_TR(0x53bdbe);
if(r1(R+518)){TAIL_STATIC(0x53c10au,53c);}
}
B53bdc4:L53bdc4:{c.instructions+=3;NFSU2_TR(0x53bdc4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bdc6:{NFSU2_TR(0x53bdc6);
u8 U[4];
w4(U+0,u32(0x79be90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bdcb:{NFSU2_TR(0x53bdcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53bdd0ull));
TAIL_STATIC(0x43db50u,43d);
}
B53bdd0:L53bdd0:{c.instructions+=4;NFSU2_TR(0x53bdd0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53bdd3:{NFSU2_TR(0x53bdd3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bdd4:{NFSU2_TR(0x53bdd4);
__builtin_memmove((R+4),(R+28),4);
}
B53bdd6:{NFSU2_TR(0x53bdd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53bddbull));
TAIL_STATIC(0x61b500u,61b);
}
B53bddb:L53bddb:{c.instructions+=4;NFSU2_TR(0x53bddb);
w4(R+28,u32(0x1ull));
}
B53bde0:{NFSU2_TR(0x53bde0);
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
B53bde2:{NFSU2_TR(0x53bde2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53bde6:{NFSU2_TR(0x53bde6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x53c10au,53c);}
}
B53bdec:L53bdec:{c.instructions+=1;NFSU2_TR(0x53bdec);
__builtin_memmove((R+16),(R+16),4);
}
B53bdf0:L53bdf0:{c.instructions+=5;NFSU2_TR(0x53bdf0);
__builtin_memmove((R+0),gp(0x8389a8),4);
}
B53bdf5:{NFSU2_TR(0x53bdf5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bdf6:{NFSU2_TR(0x53bdf6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bdf7:{NFSU2_TR(0x53bdf7);
__builtin_memmove((R+4),(R+24),4);
}
B53bdf9:{NFSU2_TR(0x53bdf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53bdfeull));
TAIL_STATIC(0x50f440u,50f);
}
B53bdfe:L53bdfe:{c.instructions+=3;NFSU2_TR(0x53bdfe);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53be00:{NFSU2_TR(0x53be00);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53be04:{NFSU2_TR(0x53be04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53be09ull));
TAIL_STATIC(0x575620u,575);
}
B53be09:L53be09:{c.instructions+=6;NFSU2_TR(0x53be09);
__builtin_memmove((R+12),(R+0),4);
}
B53be0b:{NFSU2_TR(0x53be0b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53be0e:{NFSU2_TR(0x53be0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53be12:{NFSU2_TR(0x53be12);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53be14:{NFSU2_TR(0x53be14);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53be1c:{NFSU2_TR(0x53be1c);
if(r1(R+518)){{goto L53be44;}}
}
B53be1e:L53be1e:{c.instructions+=6;NFSU2_TR(0x53be1e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53be20:{NFSU2_TR(0x53be20);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53be22:{NFSU2_TR(0x53be22);
u8 U[4];
w4(U+0,u32(0xc034ce3dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53be27:{NFSU2_TR(0x53be27);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53be28:{NFSU2_TR(0x53be28);
u8 U[4];
w4(U+0,u32(0x79be80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53be2d:{NFSU2_TR(0x53be2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53be32ull));
TAIL_STATIC(0x50b990u,50b);
}
B53be32:L53be32:{c.instructions+=6;NFSU2_TR(0x53be32);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53be36:{NFSU2_TR(0x53be36);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B53be39:{NFSU2_TR(0x53be39);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53be3a:{NFSU2_TR(0x53be3a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53be3b:{NFSU2_TR(0x53be3b);
__builtin_memmove((R+4),(R+12),4);
}
B53be3d:{NFSU2_TR(0x53be3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53be42ull));
TAIL_STATIC(0x521ff0u,521);
}
B53be42:L53be42:{c.instructions+=1;NFSU2_TR(0x53be42);
{goto L53be46;}
}
B53be44:L53be44:{c.instructions+=1;NFSU2_TR(0x53be44);
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
B53be46:L53be46:{c.instructions+=5;NFSU2_TR(0x53be46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B53be48:{NFSU2_TR(0x53be48);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53be49:{NFSU2_TR(0x53be49);
__builtin_memmove((R+4),(R+24),4);
}
B53be4b:{NFSU2_TR(0x53be4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B53be53:{NFSU2_TR(0x53be53);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53be56ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B53be56:L53be56:{c.instructions+=4;NFSU2_TR(0x53be56);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53be5a:{NFSU2_TR(0x53be5a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B53be5b:{NFSU2_TR(0x53be5b);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B53be5d:{NFSU2_TR(0x53be5d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53bdf0u);}goto L53bdf0;}}
}
B53be5f:L53be5f:{c.instructions+=1;NFSU2_TR(0x53be5f);
TAIL_STATIC(0x53c10au,53c);
}
B53be64:L53be64:{c.instructions+=2;NFSU2_TR(0x53be64);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53be66:{NFSU2_TR(0x53be66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53be6bull));
TAIL_STATIC(0x575620u,575);
}
B53be6b:L53be6b:{c.instructions+=6;NFSU2_TR(0x53be6b);
__builtin_memmove((R+28),(R+0),4);
}
B53be6d:{NFSU2_TR(0x53be6d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53be70:{NFSU2_TR(0x53be70);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53be74:{NFSU2_TR(0x53be74);
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
B53be76:{NFSU2_TR(0x53be76);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53be7e:{NFSU2_TR(0x53be7e);
if(r1(R+518)){{goto L53bea1;}}
}
B53be80:L53be80:{c.instructions+=3;NFSU2_TR(0x53be80);
u8 U[4];
w4(U+0,u32(0x3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53be82:{NFSU2_TR(0x53be82);
__builtin_memmove((R+4),(R+24),4);
}
B53be84:{NFSU2_TR(0x53be84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53be89ull));
TAIL_STATIC(0x530820u,530);
}
B53be89:L53be89:{c.instructions+=7;NFSU2_TR(0x53be89);
__builtin_memmove((R+4),(R+28),4);
}
B53be8b:{NFSU2_TR(0x53be8b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53be8c:{NFSU2_TR(0x53be8c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53be8e:{NFSU2_TR(0x53be8e);
u8 U[4];
w4(U+0,u32(0xef5b4a75ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53be93:{NFSU2_TR(0x53be93);
u8 U[4];
w4(U+0,u32(0xa3b76154ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53be98:{NFSU2_TR(0x53be98);
u8 U[4];
w4(U+0,u32(0x3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53be9a:{NFSU2_TR(0x53be9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53be9full));
TAIL_STATIC(0x521ff0u,521);
}
B53be9f:L53be9f:{c.instructions+=1;NFSU2_TR(0x53be9f);
{goto L53bea3;}
}
B53bea1:L53bea1:{c.instructions+=1;NFSU2_TR(0x53bea1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B53bea3:L53bea3:{c.instructions+=6;NFSU2_TR(0x53bea3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B53bea5:{NFSU2_TR(0x53bea5);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B53bea8:{NFSU2_TR(0x53bea8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bea9:{NFSU2_TR(0x53bea9);
__builtin_memmove((R+4),(R+24),4);
}
B53beab:{NFSU2_TR(0x53beab);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53beaf:{NFSU2_TR(0x53beaf);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53beb2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B53beb2:L53beb2:{c.instructions+=2;NFSU2_TR(0x53beb2);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53beb4:{NFSU2_TR(0x53beb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53beb9ull));
TAIL_STATIC(0x575620u,575);
}
B53beb9:L53beb9:{c.instructions+=6;NFSU2_TR(0x53beb9);
__builtin_memmove((R+28),(R+0),4);
}
B53bebb:{NFSU2_TR(0x53bebb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53bebe:{NFSU2_TR(0x53bebe);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53bec2:{NFSU2_TR(0x53bec2);
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
B53bec4:{NFSU2_TR(0x53bec4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53becc:{NFSU2_TR(0x53becc);
if(r1(R+518)){{goto L53beef;}}
}
B53bece:L53bece:{c.instructions+=3;NFSU2_TR(0x53bece);
u8 U[4];
w4(U+0,u32(0x45ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bed0:{NFSU2_TR(0x53bed0);
__builtin_memmove((R+4),(R+24),4);
}
B53bed2:{NFSU2_TR(0x53bed2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53bed7ull));
TAIL_STATIC(0x530820u,530);
}
B53bed7:L53bed7:{c.instructions+=7;NFSU2_TR(0x53bed7);
__builtin_memmove((R+4),(R+28),4);
}
B53bed9:{NFSU2_TR(0x53bed9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53beda:{NFSU2_TR(0x53beda);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bedc:{NFSU2_TR(0x53bedc);
u8 U[4];
w4(U+0,u32(0xdda5b898ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bee1:{NFSU2_TR(0x53bee1);
u8 U[4];
w4(U+0,u32(0xa8d7e6edull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bee6:{NFSU2_TR(0x53bee6);
u8 U[4];
w4(U+0,u32(0x45ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bee8:{NFSU2_TR(0x53bee8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53beedull));
TAIL_STATIC(0x521ff0u,521);
}
B53beed:L53beed:{c.instructions+=1;NFSU2_TR(0x53beed);
{goto L53bef1;}
}
B53beef:L53beef:{c.instructions+=1;NFSU2_TR(0x53beef);
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
B53bef1:L53bef1:{c.instructions+=5;NFSU2_TR(0x53bef1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B53bef3:{NFSU2_TR(0x53bef3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bef4:{NFSU2_TR(0x53bef4);
__builtin_memmove((R+4),(R+24),4);
}
B53bef6:{NFSU2_TR(0x53bef6);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53befa:{NFSU2_TR(0x53befa);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53befdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B53befd:L53befd:{c.instructions+=2;NFSU2_TR(0x53befd);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53beff:{NFSU2_TR(0x53beff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53bf04ull));
TAIL_STATIC(0x575620u,575);
}
B53bf04:L53bf04:{c.instructions+=6;NFSU2_TR(0x53bf04);
__builtin_memmove((R+28),(R+0),4);
}
B53bf06:{NFSU2_TR(0x53bf06);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53bf09:{NFSU2_TR(0x53bf09);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53bf0d:{NFSU2_TR(0x53bf0d);
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
B53bf0f:{NFSU2_TR(0x53bf0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53bf17:{NFSU2_TR(0x53bf17);
if(r1(R+518)){{goto L53bf3a;}}
}
B53bf19:L53bf19:{c.instructions+=3;NFSU2_TR(0x53bf19);
u8 U[4];
w4(U+0,u32(0x4bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bf1b:{NFSU2_TR(0x53bf1b);
__builtin_memmove((R+4),(R+24),4);
}
B53bf1d:{NFSU2_TR(0x53bf1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53bf22ull));
TAIL_STATIC(0x530820u,530);
}
B53bf22:L53bf22:{c.instructions+=7;NFSU2_TR(0x53bf22);
__builtin_memmove((R+4),(R+28),4);
}
B53bf24:{NFSU2_TR(0x53bf24);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bf25:{NFSU2_TR(0x53bf25);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bf27:{NFSU2_TR(0x53bf27);
u8 U[4];
w4(U+0,u32(0xef644b90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bf2c:{NFSU2_TR(0x53bf2c);
u8 U[4];
w4(U+0,u32(0xd2241205ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bf31:{NFSU2_TR(0x53bf31);
u8 U[4];
w4(U+0,u32(0x4bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bf33:{NFSU2_TR(0x53bf33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53bf38ull));
TAIL_STATIC(0x521ff0u,521);
}
B53bf38:L53bf38:{c.instructions+=1;NFSU2_TR(0x53bf38);
{goto L53bf3c;}
}
B53bf3a:L53bf3a:{c.instructions+=1;NFSU2_TR(0x53bf3a);
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
B53bf3c:L53bf3c:{c.instructions+=5;NFSU2_TR(0x53bf3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B53bf3e:{NFSU2_TR(0x53bf3e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bf3f:{NFSU2_TR(0x53bf3f);
__builtin_memmove((R+4),(R+24),4);
}
B53bf41:{NFSU2_TR(0x53bf41);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53bf45:{NFSU2_TR(0x53bf45);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53bf48ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B53bf48:L53bf48:{c.instructions+=2;NFSU2_TR(0x53bf48);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bf4a:{NFSU2_TR(0x53bf4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53bf4full));
TAIL_STATIC(0x575620u,575);
}
B53bf4f:L53bf4f:{c.instructions+=6;NFSU2_TR(0x53bf4f);
__builtin_memmove((R+28),(R+0),4);
}
B53bf51:{NFSU2_TR(0x53bf51);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53bf54:{NFSU2_TR(0x53bf54);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53bf58:{NFSU2_TR(0x53bf58);
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
B53bf5a:{NFSU2_TR(0x53bf5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53bf62:{NFSU2_TR(0x53bf62);
if(r1(R+518)){{goto L53bf85;}}
}
B53bf64:L53bf64:{c.instructions+=3;NFSU2_TR(0x53bf64);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bf66:{NFSU2_TR(0x53bf66);
__builtin_memmove((R+4),(R+24),4);
}
B53bf68:{NFSU2_TR(0x53bf68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53bf6dull));
TAIL_STATIC(0x530820u,530);
}
B53bf6d:L53bf6d:{c.instructions+=7;NFSU2_TR(0x53bf6d);
__builtin_memmove((R+4),(R+28),4);
}
B53bf6f:{NFSU2_TR(0x53bf6f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bf70:{NFSU2_TR(0x53bf70);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bf72:{NFSU2_TR(0x53bf72);
u8 U[4];
w4(U+0,u32(0x4d90f415ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bf77:{NFSU2_TR(0x53bf77);
u8 U[4];
w4(U+0,u32(0xdf5c2bcaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bf7c:{NFSU2_TR(0x53bf7c);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bf7e:{NFSU2_TR(0x53bf7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53bf83ull));
TAIL_STATIC(0x521ff0u,521);
}
B53bf83:L53bf83:{c.instructions+=1;NFSU2_TR(0x53bf83);
{goto L53bf87;}
}
B53bf85:L53bf85:{c.instructions+=1;NFSU2_TR(0x53bf85);
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
B53bf87:L53bf87:{c.instructions+=5;NFSU2_TR(0x53bf87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B53bf89:{NFSU2_TR(0x53bf89);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bf8a:{NFSU2_TR(0x53bf8a);
__builtin_memmove((R+4),(R+24),4);
}
B53bf8c:{NFSU2_TR(0x53bf8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53bf90:{NFSU2_TR(0x53bf90);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53bf93ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B53bf93:L53bf93:{c.instructions+=2;NFSU2_TR(0x53bf93);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bf95:{NFSU2_TR(0x53bf95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53bf9aull));
TAIL_STATIC(0x575620u,575);
}
B53bf9a:L53bf9a:{c.instructions+=6;NFSU2_TR(0x53bf9a);
__builtin_memmove((R+28),(R+0),4);
}
B53bf9c:{NFSU2_TR(0x53bf9c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53bf9f:{NFSU2_TR(0x53bf9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53bfa3:{NFSU2_TR(0x53bfa3);
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
B53bfa5:{NFSU2_TR(0x53bfa5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53bfad:{NFSU2_TR(0x53bfad);
if(r1(R+518)){{goto L53bfd0;}}
}
B53bfaf:L53bfaf:{c.instructions+=3;NFSU2_TR(0x53bfaf);
u8 U[4];
w4(U+0,u32(0x49ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bfb1:{NFSU2_TR(0x53bfb1);
__builtin_memmove((R+4),(R+24),4);
}
B53bfb3:{NFSU2_TR(0x53bfb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53bfb8ull));
TAIL_STATIC(0x530820u,530);
}
B53bfb8:L53bfb8:{c.instructions+=7;NFSU2_TR(0x53bfb8);
__builtin_memmove((R+4),(R+28),4);
}
B53bfba:{NFSU2_TR(0x53bfba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bfbb:{NFSU2_TR(0x53bfbb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bfbd:{NFSU2_TR(0x53bfbd);
u8 U[4];
w4(U+0,u32(0xf030942ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bfc2:{NFSU2_TR(0x53bfc2);
u8 U[4];
w4(U+0,u32(0xd223f84aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bfc7:{NFSU2_TR(0x53bfc7);
u8 U[4];
w4(U+0,u32(0x49ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bfc9:{NFSU2_TR(0x53bfc9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53bfceull));
TAIL_STATIC(0x521ff0u,521);
}
B53bfce:L53bfce:{c.instructions+=1;NFSU2_TR(0x53bfce);
{goto L53bfd2;}
}
B53bfd0:L53bfd0:{c.instructions+=1;NFSU2_TR(0x53bfd0);
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
B53bfd2:L53bfd2:{c.instructions+=5;NFSU2_TR(0x53bfd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B53bfd4:{NFSU2_TR(0x53bfd4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bfd5:{NFSU2_TR(0x53bfd5);
__builtin_memmove((R+4),(R+24),4);
}
B53bfd7:{NFSU2_TR(0x53bfd7);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53bfdb:{NFSU2_TR(0x53bfdb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53bfdeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B53bfde:L53bfde:{c.instructions+=2;NFSU2_TR(0x53bfde);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bfe0:{NFSU2_TR(0x53bfe0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53bfe5ull));
TAIL_STATIC(0x575620u,575);
}
B53bfe5:L53bfe5:{c.instructions+=6;NFSU2_TR(0x53bfe5);
__builtin_memmove((R+28),(R+0),4);
}
B53bfe7:{NFSU2_TR(0x53bfe7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53bfea:{NFSU2_TR(0x53bfea);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53bfee:{NFSU2_TR(0x53bfee);
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
B53bff0:{NFSU2_TR(0x53bff0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53bff8:{NFSU2_TR(0x53bff8);
if(r1(R+518)){TAIL_STATIC(0x53c01bu,53c);}
}
B53bffa:L53bffa:{c.instructions+=3;NFSU2_TR(0x53bffa);
u8 U[4];
w4(U+0,u32(0x4aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53bffc:{NFSU2_TR(0x53bffc);
__builtin_memmove((R+4),(R+24),4);
}
B53bffe:{NFSU2_TR(0x53bffe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53c003ull));
TAIL_STATIC(0x530820u,530);
}
XIT:NFSU2_TR_EXIT(0x53b,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
