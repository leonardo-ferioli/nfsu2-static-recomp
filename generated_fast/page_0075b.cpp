#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_580(u8* __restrict R,Cpu& c);
u32 body_74b(u8* __restrict R,Cpu& c);
u32 body_75a(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_760(u8* __restrict R,Cpu& c);
u32 body_761(u8* __restrict R,Cpu& c);
u32 body_762(u8* __restrict R,Cpu& c);
u32 body_76e(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x75b,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x75b,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_75b(u8* __restrict R,Cpu& c);
u32 page_75b(Cpu& c){return body_75b(c.regs.data(),c);}
__attribute__((noinline)) u32 body_75b(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x75b000:goto L75b000;
case 0x75b001:c.instructions+=5;goto B75b001;
case 0x75b004:c.instructions+=4;goto B75b004;
case 0x75b005:c.instructions+=3;goto B75b005;
case 0x75b008:c.instructions+=2;goto B75b008;
case 0x75b00c:c.instructions+=1;goto B75b00c;
case 0x75b00e:goto L75b00e;
case 0x75b011:c.instructions+=1;goto B75b011;
case 0x75b013:goto L75b013;
case 0x75b016:goto L75b016;
case 0x75b017:c.instructions+=5;goto B75b017;
case 0x75b018:c.instructions+=4;goto B75b018;
case 0x75b019:c.instructions+=3;goto B75b019;
case 0x75b01a:c.instructions+=2;goto B75b01a;
case 0x75b01b:c.instructions+=1;goto B75b01b;
case 0x75b020:goto L75b020;
case 0x75b021:c.instructions+=5;goto B75b021;
case 0x75b025:c.instructions+=4;goto B75b025;
case 0x75b026:c.instructions+=3;goto B75b026;
case 0x75b028:c.instructions+=2;goto B75b028;
case 0x75b02b:c.instructions+=1;goto B75b02b;
case 0x75b02d:goto L75b02d;
case 0x75b032:goto L75b032;
case 0x75b034:c.instructions+=2;goto B75b034;
case 0x75b036:c.instructions+=1;goto B75b036;
case 0x75b038:goto L75b038;
case 0x75b040:goto L75b040;
case 0x75b042:c.instructions+=12;goto B75b042;
case 0x75b045:c.instructions+=11;goto B75b045;
case 0x75b04a:c.instructions+=10;goto B75b04a;
case 0x75b04c:c.instructions+=9;goto B75b04c;
case 0x75b04e:c.instructions+=8;goto B75b04e;
case 0x75b051:c.instructions+=7;goto B75b051;
case 0x75b055:c.instructions+=6;goto B75b055;
case 0x75b058:c.instructions+=5;goto B75b058;
case 0x75b05a:c.instructions+=4;goto B75b05a;
case 0x75b05b:c.instructions+=3;goto B75b05b;
case 0x75b05d:c.instructions+=2;goto B75b05d;
case 0x75b061:c.instructions+=1;goto B75b061;
case 0x75b063:goto L75b063;
case 0x75b064:c.instructions+=2;goto B75b064;
case 0x75b065:c.instructions+=1;goto B75b065;
case 0x75b070:goto L75b070;
case 0x75b076:c.instructions+=7;goto B75b076;
case 0x75b077:c.instructions+=6;goto B75b077;
case 0x75b078:c.instructions+=5;goto B75b078;
case 0x75b079:c.instructions+=4;goto B75b079;
case 0x75b07a:c.instructions+=3;goto B75b07a;
case 0x75b081:c.instructions+=2;goto B75b081;
case 0x75b083:c.instructions+=1;goto B75b083;
case 0x75b086:goto L75b086;
case 0x75b089:c.instructions+=13;goto B75b089;
case 0x75b08b:c.instructions+=12;goto B75b08b;
case 0x75b08e:c.instructions+=11;goto B75b08e;
case 0x75b091:c.instructions+=10;goto B75b091;
case 0x75b094:c.instructions+=9;goto B75b094;
case 0x75b097:c.instructions+=8;goto B75b097;
case 0x75b099:c.instructions+=7;goto B75b099;
case 0x75b09d:c.instructions+=6;goto B75b09d;
case 0x75b0a0:c.instructions+=5;goto B75b0a0;
case 0x75b0a2:c.instructions+=4;goto B75b0a2;
case 0x75b0a6:c.instructions+=3;goto B75b0a6;
case 0x75b0a7:c.instructions+=2;goto B75b0a7;
case 0x75b0aa:c.instructions+=1;goto B75b0aa;
case 0x75b0ac:goto L75b0ac;
case 0x75b0b0:c.instructions+=1;goto B75b0b0;
case 0x75b0b5:goto L75b0b5;
case 0x75b0b8:c.instructions+=14;goto B75b0b8;
case 0x75b0bb:c.instructions+=13;goto B75b0bb;
case 0x75b0be:c.instructions+=12;goto B75b0be;
case 0x75b0c0:c.instructions+=11;goto B75b0c0;
case 0x75b0c2:c.instructions+=10;goto B75b0c2;
case 0x75b0c4:c.instructions+=9;goto B75b0c4;
case 0x75b0c6:c.instructions+=8;goto B75b0c6;
case 0x75b0c8:c.instructions+=7;goto B75b0c8;
case 0x75b0cb:c.instructions+=6;goto B75b0cb;
case 0x75b0cd:c.instructions+=5;goto B75b0cd;
case 0x75b0cf:c.instructions+=4;goto B75b0cf;
case 0x75b0d2:c.instructions+=3;goto B75b0d2;
case 0x75b0d5:c.instructions+=2;goto B75b0d5;
case 0x75b0d6:c.instructions+=1;goto B75b0d6;
case 0x75b0d8:goto L75b0d8;
case 0x75b0db:c.instructions+=6;goto B75b0db;
case 0x75b0de:c.instructions+=5;goto B75b0de;
case 0x75b0e1:c.instructions+=4;goto B75b0e1;
case 0x75b0e4:c.instructions+=3;goto B75b0e4;
case 0x75b0e7:c.instructions+=2;goto B75b0e7;
case 0x75b0eb:c.instructions+=1;goto B75b0eb;
case 0x75b0f3:goto L75b0f3;
case 0x75b0f5:c.instructions+=27;goto B75b0f5;
case 0x75b0f7:c.instructions+=26;goto B75b0f7;
case 0x75b0f9:c.instructions+=25;goto B75b0f9;
case 0x75b0fb:c.instructions+=24;goto B75b0fb;
case 0x75b0fd:c.instructions+=23;goto B75b0fd;
case 0x75b0ff:c.instructions+=22;goto B75b0ff;
case 0x75b101:c.instructions+=21;goto B75b101;
case 0x75b104:c.instructions+=20;goto B75b104;
case 0x75b106:c.instructions+=19;goto B75b106;
case 0x75b109:c.instructions+=18;goto B75b109;
case 0x75b10b:c.instructions+=17;goto B75b10b;
case 0x75b10d:c.instructions+=16;goto B75b10d;
case 0x75b111:c.instructions+=15;goto B75b111;
case 0x75b115:c.instructions+=14;goto B75b115;
case 0x75b119:c.instructions+=13;goto B75b119;
case 0x75b11d:c.instructions+=12;goto B75b11d;
case 0x75b11f:c.instructions+=11;goto B75b11f;
case 0x75b121:c.instructions+=10;goto B75b121;
case 0x75b124:c.instructions+=9;goto B75b124;
case 0x75b127:c.instructions+=8;goto B75b127;
case 0x75b129:c.instructions+=7;goto B75b129;
case 0x75b12a:c.instructions+=6;goto B75b12a;
case 0x75b12d:c.instructions+=5;goto B75b12d;
case 0x75b134:c.instructions+=4;goto B75b134;
case 0x75b136:c.instructions+=3;goto B75b136;
case 0x75b138:c.instructions+=2;goto B75b138;
case 0x75b13c:c.instructions+=1;goto B75b13c;
case 0x75b13e:goto L75b13e;
case 0x75b140:goto L75b140;
case 0x75b142:c.instructions+=22;goto B75b142;
case 0x75b145:c.instructions+=21;goto B75b145;
case 0x75b147:c.instructions+=20;goto B75b147;
case 0x75b14a:c.instructions+=19;goto B75b14a;
case 0x75b14c:c.instructions+=18;goto B75b14c;
case 0x75b14e:c.instructions+=17;goto B75b14e;
case 0x75b150:c.instructions+=16;goto B75b150;
case 0x75b152:c.instructions+=15;goto B75b152;
case 0x75b154:c.instructions+=14;goto B75b154;
case 0x75b158:c.instructions+=13;goto B75b158;
case 0x75b15c:c.instructions+=12;goto B75b15c;
case 0x75b160:c.instructions+=11;goto B75b160;
case 0x75b162:c.instructions+=10;goto B75b162;
case 0x75b164:c.instructions+=9;goto B75b164;
case 0x75b167:c.instructions+=8;goto B75b167;
case 0x75b16a:c.instructions+=7;goto B75b16a;
case 0x75b16c:c.instructions+=6;goto B75b16c;
case 0x75b16d:c.instructions+=5;goto B75b16d;
case 0x75b170:c.instructions+=4;goto B75b170;
case 0x75b177:c.instructions+=3;goto B75b177;
case 0x75b179:c.instructions+=2;goto B75b179;
case 0x75b17b:c.instructions+=1;goto B75b17b;
case 0x75b17d:goto L75b17d;
case 0x75b181:goto L75b181;
case 0x75b183:c.instructions+=28;goto B75b183;
case 0x75b185:c.instructions+=27;goto B75b185;
case 0x75b187:c.instructions+=26;goto B75b187;
case 0x75b189:c.instructions+=25;goto B75b189;
case 0x75b18b:c.instructions+=24;goto B75b18b;
case 0x75b18d:c.instructions+=23;goto B75b18d;
case 0x75b18f:c.instructions+=22;goto B75b18f;
case 0x75b192:c.instructions+=21;goto B75b192;
case 0x75b194:c.instructions+=20;goto B75b194;
case 0x75b197:c.instructions+=19;goto B75b197;
case 0x75b199:c.instructions+=18;goto B75b199;
case 0x75b19b:c.instructions+=17;goto B75b19b;
case 0x75b19f:c.instructions+=16;goto B75b19f;
case 0x75b1a3:c.instructions+=15;goto B75b1a3;
case 0x75b1a7:c.instructions+=14;goto B75b1a7;
case 0x75b1ae:c.instructions+=13;goto B75b1ae;
case 0x75b1b0:c.instructions+=12;goto B75b1b0;
case 0x75b1b2:c.instructions+=11;goto B75b1b2;
case 0x75b1b4:c.instructions+=10;goto B75b1b4;
case 0x75b1b7:c.instructions+=9;goto B75b1b7;
case 0x75b1ba:c.instructions+=8;goto B75b1ba;
case 0x75b1bc:c.instructions+=7;goto B75b1bc;
case 0x75b1bd:c.instructions+=6;goto B75b1bd;
case 0x75b1c0:c.instructions+=5;goto B75b1c0;
case 0x75b1c2:c.instructions+=4;goto B75b1c2;
case 0x75b1c6:c.instructions+=3;goto B75b1c6;
case 0x75b1c8:c.instructions+=2;goto B75b1c8;
case 0x75b1cc:c.instructions+=1;goto B75b1cc;
case 0x75b1ce:goto L75b1ce;
case 0x75b1d2:goto L75b1d2;
case 0x75b1d4:c.instructions+=23;goto B75b1d4;
case 0x75b1d7:c.instructions+=22;goto B75b1d7;
case 0x75b1d9:c.instructions+=21;goto B75b1d9;
case 0x75b1dc:c.instructions+=20;goto B75b1dc;
case 0x75b1de:c.instructions+=19;goto B75b1de;
case 0x75b1e0:c.instructions+=18;goto B75b1e0;
case 0x75b1e2:c.instructions+=17;goto B75b1e2;
case 0x75b1e4:c.instructions+=16;goto B75b1e4;
case 0x75b1e6:c.instructions+=15;goto B75b1e6;
case 0x75b1ea:c.instructions+=14;goto B75b1ea;
case 0x75b1ee:c.instructions+=13;goto B75b1ee;
case 0x75b1f5:c.instructions+=12;goto B75b1f5;
case 0x75b1f7:c.instructions+=11;goto B75b1f7;
case 0x75b1f9:c.instructions+=10;goto B75b1f9;
case 0x75b1fb:c.instructions+=9;goto B75b1fb;
case 0x75b1fe:c.instructions+=8;goto B75b1fe;
case 0x75b201:c.instructions+=7;goto B75b201;
case 0x75b203:c.instructions+=6;goto B75b203;
case 0x75b204:c.instructions+=5;goto B75b204;
case 0x75b207:c.instructions+=4;goto B75b207;
case 0x75b209:c.instructions+=3;goto B75b209;
case 0x75b20b:c.instructions+=2;goto B75b20b;
case 0x75b20f:c.instructions+=1;goto B75b20f;
case 0x75b211:goto L75b211;
case 0x75b218:c.instructions+=21;goto B75b218;
case 0x75b21b:c.instructions+=20;goto B75b21b;
case 0x75b21d:c.instructions+=19;goto B75b21d;
case 0x75b220:c.instructions+=18;goto B75b220;
case 0x75b222:c.instructions+=17;goto B75b222;
case 0x75b225:c.instructions+=16;goto B75b225;
case 0x75b227:c.instructions+=15;goto B75b227;
case 0x75b22a:c.instructions+=14;goto B75b22a;
case 0x75b22d:c.instructions+=13;goto B75b22d;
case 0x75b22f:c.instructions+=12;goto B75b22f;
case 0x75b232:c.instructions+=11;goto B75b232;
case 0x75b235:c.instructions+=10;goto B75b235;
case 0x75b237:c.instructions+=9;goto B75b237;
case 0x75b238:c.instructions+=8;goto B75b238;
case 0x75b239:c.instructions+=7;goto B75b239;
case 0x75b23c:c.instructions+=6;goto B75b23c;
case 0x75b23d:c.instructions+=5;goto B75b23d;
case 0x75b240:c.instructions+=4;goto B75b240;
case 0x75b243:c.instructions+=3;goto B75b243;
case 0x75b244:c.instructions+=2;goto B75b244;
case 0x75b24a:c.instructions+=1;goto B75b24a;
case 0x75b250:goto L75b250;
case 0x75b254:c.instructions+=8;goto B75b254;
case 0x75b25a:c.instructions+=7;goto B75b25a;
case 0x75b261:c.instructions+=6;goto B75b261;
case 0x75b268:c.instructions+=5;goto B75b268;
case 0x75b26f:c.instructions+=4;goto B75b26f;
case 0x75b276:c.instructions+=3;goto B75b276;
case 0x75b27d:c.instructions+=2;goto B75b27d;
case 0x75b284:c.instructions+=1;goto B75b284;
case 0x75b290:goto L75b290;
case 0x75b291:c.instructions+=8;goto B75b291;
case 0x75b295:c.instructions+=7;goto B75b295;
case 0x75b298:c.instructions+=6;goto B75b298;
case 0x75b29a:c.instructions+=5;goto B75b29a;
case 0x75b29b:c.instructions+=4;goto B75b29b;
case 0x75b29f:c.instructions+=3;goto B75b29f;
case 0x75b2a0:c.instructions+=2;goto B75b2a0;
case 0x75b2a1:c.instructions+=1;goto B75b2a1;
case 0x75b2a3:goto L75b2a3;
case 0x75b2a8:c.instructions+=4;goto B75b2a8;
case 0x75b2aa:c.instructions+=3;goto B75b2aa;
case 0x75b2ac:c.instructions+=2;goto B75b2ac;
case 0x75b2b0:c.instructions+=1;goto B75b2b0;
case 0x75b2b2:goto L75b2b2;
case 0x75b2b4:goto L75b2b4;
case 0x75b2b8:c.instructions+=4;goto B75b2b8;
case 0x75b2ba:c.instructions+=3;goto B75b2ba;
case 0x75b2be:c.instructions+=2;goto B75b2be;
case 0x75b2c0:c.instructions+=1;goto B75b2c0;
case 0x75b2c3:goto L75b2c3;
case 0x75b2c5:goto L75b2c5;
case 0x75b2c7:c.instructions+=1;goto B75b2c7;
case 0x75b2ca:goto L75b2ca;
case 0x75b2cc:goto L75b2cc;
case 0x75b2d0:c.instructions+=5;goto B75b2d0;
case 0x75b2d4:c.instructions+=4;goto B75b2d4;
case 0x75b2d6:c.instructions+=3;goto B75b2d6;
case 0x75b2d8:c.instructions+=2;goto B75b2d8;
case 0x75b2da:c.instructions+=1;goto B75b2da;
case 0x75b2dc:goto L75b2dc;
case 0x75b2df:c.instructions+=2;goto B75b2df;
case 0x75b2e0:c.instructions+=1;goto B75b2e0;
case 0x75b2e5:goto L75b2e5;
case 0x75b2e7:c.instructions+=5;goto B75b2e7;
case 0x75b2ea:c.instructions+=4;goto B75b2ea;
case 0x75b2ed:c.instructions+=3;goto B75b2ed;
case 0x75b2ef:c.instructions+=2;goto B75b2ef;
case 0x75b2f6:c.instructions+=1;goto B75b2f6;
case 0x75b2f8:goto L75b2f8;
case 0x75b2fb:c.instructions+=1;goto B75b2fb;
case 0x75b2fd:goto L75b2fd;
case 0x75b301:goto L75b301;
case 0x75b304:c.instructions+=1;goto B75b304;
case 0x75b306:goto L75b306;
case 0x75b308:c.instructions+=2;goto B75b308;
case 0x75b30b:c.instructions+=1;goto B75b30b;
case 0x75b310:goto L75b310;
case 0x75b311:c.instructions+=2;goto B75b311;
case 0x75b313:c.instructions+=1;goto B75b313;
case 0x75b318:goto L75b318;
case 0x75b31a:c.instructions+=7;goto B75b31a;
case 0x75b31d:c.instructions+=6;goto B75b31d;
case 0x75b320:c.instructions+=5;goto B75b320;
case 0x75b323:c.instructions+=4;goto B75b323;
case 0x75b326:c.instructions+=3;goto B75b326;
case 0x75b327:c.instructions+=2;goto B75b327;
case 0x75b329:c.instructions+=1;goto B75b329;
case 0x75b32b:goto L75b32b;
case 0x75b32d:c.instructions+=1;goto B75b32d;
case 0x75b32f:goto L75b32f;
case 0x75b332:c.instructions+=4;goto B75b332;
case 0x75b334:c.instructions+=3;goto B75b334;
case 0x75b336:c.instructions+=2;goto B75b336;
case 0x75b339:c.instructions+=1;goto B75b339;
case 0x75b33d:goto L75b33d;
case 0x75b33f:goto L75b33f;
case 0x75b341:c.instructions+=1;goto B75b341;
case 0x75b344:goto L75b344;
case 0x75b346:goto L75b346;
case 0x75b349:goto L75b349;
case 0x75b34a:c.instructions+=4;goto B75b34a;
case 0x75b34b:c.instructions+=3;goto B75b34b;
case 0x75b34c:c.instructions+=2;goto B75b34c;
case 0x75b34d:c.instructions+=1;goto B75b34d;
case 0x75b350:goto L75b350;
case 0x75b351:c.instructions+=11;goto B75b351;
case 0x75b352:c.instructions+=10;goto B75b352;
case 0x75b356:c.instructions+=9;goto B75b356;
case 0x75b359:c.instructions+=8;goto B75b359;
case 0x75b35b:c.instructions+=7;goto B75b35b;
case 0x75b360:c.instructions+=6;goto B75b360;
case 0x75b362:c.instructions+=5;goto B75b362;
case 0x75b364:c.instructions+=4;goto B75b364;
case 0x75b367:c.instructions+=3;goto B75b367;
case 0x75b368:c.instructions+=2;goto B75b368;
case 0x75b36a:c.instructions+=1;goto B75b36a;
case 0x75b36c:goto L75b36c;
case 0x75b370:c.instructions+=4;goto B75b370;
case 0x75b373:c.instructions+=3;goto B75b373;
case 0x75b374:c.instructions+=2;goto B75b374;
case 0x75b377:c.instructions+=1;goto B75b377;
case 0x75b379:goto L75b379;
case 0x75b37e:c.instructions+=5;goto B75b37e;
case 0x75b380:c.instructions+=4;goto B75b380;
case 0x75b382:c.instructions+=3;goto B75b382;
case 0x75b385:c.instructions+=2;goto B75b385;
case 0x75b389:c.instructions+=1;goto B75b389;
case 0x75b38b:goto L75b38b;
case 0x75b38d:goto L75b38d;
case 0x75b38f:c.instructions+=1;goto B75b38f;
case 0x75b392:goto L75b392;
case 0x75b394:goto L75b394;
case 0x75b397:c.instructions+=2;goto B75b397;
case 0x75b398:c.instructions+=1;goto B75b398;
case 0x75b39d:goto L75b39d;
case 0x75b3a0:c.instructions+=2;goto B75b3a0;
case 0x75b3a2:c.instructions+=1;goto B75b3a2;
case 0x75b3a5:goto L75b3a5;
case 0x75b3a8:c.instructions+=5;goto B75b3a8;
case 0x75b3ac:c.instructions+=4;goto B75b3ac;
case 0x75b3af:c.instructions+=3;goto B75b3af;
case 0x75b3b0:c.instructions+=2;goto B75b3b0;
case 0x75b3b3:c.instructions+=1;goto B75b3b3;
case 0x75b3b5:goto L75b3b5;
case 0x75b3ba:c.instructions+=5;goto B75b3ba;
case 0x75b3bc:c.instructions+=4;goto B75b3bc;
case 0x75b3be:c.instructions+=3;goto B75b3be;
case 0x75b3c1:c.instructions+=2;goto B75b3c1;
case 0x75b3c5:c.instructions+=1;goto B75b3c5;
case 0x75b3c7:goto L75b3c7;
case 0x75b3c9:goto L75b3c9;
case 0x75b3cb:c.instructions+=1;goto B75b3cb;
case 0x75b3ce:goto L75b3ce;
case 0x75b3d0:goto L75b3d0;
case 0x75b3d2:c.instructions+=20;goto B75b3d2;
case 0x75b3d4:c.instructions+=19;goto B75b3d4;
case 0x75b3d6:c.instructions+=18;goto B75b3d6;
case 0x75b3d9:c.instructions+=17;goto B75b3d9;
case 0x75b3dc:c.instructions+=16;goto B75b3dc;
case 0x75b3df:c.instructions+=15;goto B75b3df;
case 0x75b3e1:c.instructions+=14;goto B75b3e1;
case 0x75b3e4:c.instructions+=13;goto B75b3e4;
case 0x75b3e6:c.instructions+=12;goto B75b3e6;
case 0x75b3e9:c.instructions+=11;goto B75b3e9;
case 0x75b3ec:c.instructions+=10;goto B75b3ec;
case 0x75b3ef:c.instructions+=9;goto B75b3ef;
case 0x75b3f2:c.instructions+=8;goto B75b3f2;
case 0x75b3f5:c.instructions+=7;goto B75b3f5;
case 0x75b3f6:c.instructions+=6;goto B75b3f6;
case 0x75b3f9:c.instructions+=5;goto B75b3f9;
case 0x75b3fc:c.instructions+=4;goto B75b3fc;
case 0x75b3ff:c.instructions+=3;goto B75b3ff;
case 0x75b402:c.instructions+=2;goto B75b402;
case 0x75b405:c.instructions+=1;goto B75b405;
case 0x75b40a:goto L75b40a;
case 0x75b40e:c.instructions+=3;goto B75b40e;
case 0x75b412:c.instructions+=2;goto B75b412;
case 0x75b413:c.instructions+=1;goto B75b413;
case 0x75b418:goto L75b418;
case 0x75b41b:c.instructions+=4;goto B75b41b;
case 0x75b41c:c.instructions+=3;goto B75b41c;
case 0x75b41d:c.instructions+=2;goto B75b41d;
case 0x75b41e:c.instructions+=1;goto B75b41e;
case 0x75b420:goto L75b420;
case 0x75b421:c.instructions+=10;goto B75b421;
case 0x75b425:c.instructions+=9;goto B75b425;
case 0x75b426:c.instructions+=8;goto B75b426;
case 0x75b428:c.instructions+=7;goto B75b428;
case 0x75b42b:c.instructions+=6;goto B75b42b;
case 0x75b42d:c.instructions+=5;goto B75b42d;
case 0x75b42f:c.instructions+=4;goto B75b42f;
case 0x75b431:c.instructions+=3;goto B75b431;
case 0x75b433:c.instructions+=2;goto B75b433;
case 0x75b435:c.instructions+=1;goto B75b435;
case 0x75b437:goto L75b437;
case 0x75b438:c.instructions+=2;goto B75b438;
case 0x75b439:c.instructions+=1;goto B75b439;
case 0x75b440:goto L75b440;
case 0x75b444:c.instructions+=10;goto B75b444;
case 0x75b448:c.instructions+=9;goto B75b448;
case 0x75b44b:c.instructions+=8;goto B75b44b;
case 0x75b44e:c.instructions+=7;goto B75b44e;
case 0x75b450:c.instructions+=6;goto B75b450;
case 0x75b453:c.instructions+=5;goto B75b453;
case 0x75b456:c.instructions+=4;goto B75b456;
case 0x75b459:c.instructions+=3;goto B75b459;
case 0x75b45c:c.instructions+=2;goto B75b45c;
case 0x75b45d:c.instructions+=1;goto B75b45d;
case 0x75b45f:goto L75b45f;
case 0x75b460:c.instructions+=1;goto B75b460;
case 0x75b461:goto L75b461;
case 0x75b462:c.instructions+=2;goto B75b462;
case 0x75b463:c.instructions+=1;goto B75b463;
case 0x75b470:goto L75b470;
case 0x75b471:c.instructions+=12;goto B75b471;
case 0x75b472:c.instructions+=11;goto B75b472;
case 0x75b474:c.instructions+=10;goto B75b474;
case 0x75b476:c.instructions+=9;goto B75b476;
case 0x75b479:c.instructions+=8;goto B75b479;
case 0x75b47a:c.instructions+=7;goto B75b47a;
case 0x75b47e:c.instructions+=6;goto B75b47e;
case 0x75b480:c.instructions+=5;goto B75b480;
case 0x75b482:c.instructions+=4;goto B75b482;
case 0x75b484:c.instructions+=3;goto B75b484;
case 0x75b486:c.instructions+=2;goto B75b486;
case 0x75b488:c.instructions+=1;goto B75b488;
case 0x75b48a:goto L75b48a;
case 0x75b48b:c.instructions+=1;goto B75b48b;
case 0x75b490:goto L75b490;
case 0x75b494:c.instructions+=12;goto B75b494;
case 0x75b498:c.instructions+=11;goto B75b498;
case 0x75b49b:c.instructions+=10;goto B75b49b;
case 0x75b49e:c.instructions+=9;goto B75b49e;
case 0x75b4a0:c.instructions+=8;goto B75b4a0;
case 0x75b4a2:c.instructions+=7;goto B75b4a2;
case 0x75b4a5:c.instructions+=6;goto B75b4a5;
case 0x75b4a8:c.instructions+=5;goto B75b4a8;
case 0x75b4ab:c.instructions+=4;goto B75b4ab;
case 0x75b4ae:c.instructions+=3;goto B75b4ae;
case 0x75b4af:c.instructions+=2;goto B75b4af;
case 0x75b4b1:c.instructions+=1;goto B75b4b1;
case 0x75b4b3:goto L75b4b3;
case 0x75b4b4:goto L75b4b4;
case 0x75b4b5:c.instructions+=3;goto B75b4b5;
case 0x75b4b6:c.instructions+=2;goto B75b4b6;
case 0x75b4b7:c.instructions+=1;goto B75b4b7;
case 0x75b4c0:goto L75b4c0;
case 0x75b4c6:c.instructions+=14;goto B75b4c6;
case 0x75b4cb:c.instructions+=13;goto B75b4cb;
case 0x75b4cc:c.instructions+=12;goto B75b4cc;
case 0x75b4d3:c.instructions+=11;goto B75b4d3;
case 0x75b4d4:c.instructions+=10;goto B75b4d4;
case 0x75b4d7:c.instructions+=9;goto B75b4d7;
case 0x75b4db:c.instructions+=8;goto B75b4db;
case 0x75b4dd:c.instructions+=7;goto B75b4dd;
case 0x75b4e0:c.instructions+=6;goto B75b4e0;
case 0x75b4e7:c.instructions+=5;goto B75b4e7;
case 0x75b4e8:c.instructions+=4;goto B75b4e8;
case 0x75b4e9:c.instructions+=3;goto B75b4e9;
case 0x75b4eb:c.instructions+=2;goto B75b4eb;
case 0x75b4ef:c.instructions+=1;goto B75b4ef;
case 0x75b4f1:goto L75b4f1;
case 0x75b4f3:goto L75b4f3;
case 0x75b4f5:c.instructions+=1;goto B75b4f5;
case 0x75b4f8:goto L75b4f8;
case 0x75b4fa:goto L75b4fa;
case 0x75b4fc:c.instructions+=7;goto B75b4fc;
case 0x75b4ff:c.instructions+=6;goto B75b4ff;
case 0x75b502:c.instructions+=5;goto B75b502;
case 0x75b504:c.instructions+=4;goto B75b504;
case 0x75b50b:c.instructions+=3;goto B75b50b;
case 0x75b50f:c.instructions+=2;goto B75b50f;
case 0x75b513:c.instructions+=1;goto B75b513;
case 0x75b519:goto L75b519;
case 0x75b51b:c.instructions+=2;goto B75b51b;
case 0x75b51c:c.instructions+=1;goto B75b51c;
case 0x75b520:goto L75b520;
case 0x75b524:c.instructions+=6;goto B75b524;
case 0x75b526:c.instructions+=5;goto B75b526;
case 0x75b528:c.instructions+=4;goto B75b528;
case 0x75b52a:c.instructions+=3;goto B75b52a;
case 0x75b52c:c.instructions+=2;goto B75b52c;
case 0x75b52e:c.instructions+=1;goto B75b52e;
case 0x75b530:goto L75b530;
case 0x75b534:goto L75b534;
case 0x75b538:c.instructions+=12;goto B75b538;
case 0x75b53c:c.instructions+=11;goto B75b53c;
case 0x75b53f:c.instructions+=10;goto B75b53f;
case 0x75b542:c.instructions+=9;goto B75b542;
case 0x75b544:c.instructions+=8;goto B75b544;
case 0x75b547:c.instructions+=7;goto B75b547;
case 0x75b54b:c.instructions+=6;goto B75b54b;
case 0x75b54e:c.instructions+=5;goto B75b54e;
case 0x75b551:c.instructions+=4;goto B75b551;
case 0x75b554:c.instructions+=3;goto B75b554;
case 0x75b555:c.instructions+=2;goto B75b555;
case 0x75b559:c.instructions+=1;goto B75b559;
case 0x75b55b:goto L75b55b;
case 0x75b562:c.instructions+=1;goto B75b562;
case 0x75b566:goto L75b566;
case 0x75b56d:c.instructions+=4;goto B75b56d;
case 0x75b56e:c.instructions+=3;goto B75b56e;
case 0x75b570:c.instructions+=2;goto B75b570;
case 0x75b572:c.instructions+=1;goto B75b572;
case 0x75b577:goto L75b577;
case 0x75b57a:c.instructions+=2;goto B75b57a;
case 0x75b57c:c.instructions+=1;goto B75b57c;
case 0x75b57e:goto L75b57e;
case 0x75b580:c.instructions+=1;goto B75b580;
case 0x75b582:goto L75b582;
case 0x75b584:c.instructions+=3;goto B75b584;
case 0x75b586:c.instructions+=2;goto B75b586;
case 0x75b588:c.instructions+=1;goto B75b588;
case 0x75b58c:goto L75b58c;
case 0x75b590:c.instructions+=2;goto B75b590;
case 0x75b596:c.instructions+=1;goto B75b596;
case 0x75b598:goto L75b598;
case 0x75b599:c.instructions+=2;goto B75b599;
case 0x75b59c:c.instructions+=1;goto B75b59c;
case 0x75b59d:goto L75b59d;
case 0x75b5a1:c.instructions+=9;goto B75b5a1;
case 0x75b5a2:c.instructions+=8;goto B75b5a2;
case 0x75b5a7:c.instructions+=7;goto B75b5a7;
case 0x75b5aa:c.instructions+=6;goto B75b5aa;
case 0x75b5ac:c.instructions+=5;goto B75b5ac;
case 0x75b5b3:c.instructions+=4;goto B75b5b3;
case 0x75b5b5:c.instructions+=3;goto B75b5b5;
case 0x75b5b8:c.instructions+=2;goto B75b5b8;
case 0x75b5bc:c.instructions+=1;goto B75b5bc;
case 0x75b5be:goto L75b5be;
case 0x75b5c5:c.instructions+=4;goto B75b5c5;
case 0x75b5c6:c.instructions+=3;goto B75b5c6;
case 0x75b5c8:c.instructions+=2;goto B75b5c8;
case 0x75b5ca:c.instructions+=1;goto B75b5ca;
case 0x75b5cf:goto L75b5cf;
case 0x75b5d1:c.instructions+=5;goto B75b5d1;
case 0x75b5d8:c.instructions+=4;goto B75b5d8;
case 0x75b5d9:c.instructions+=3;goto B75b5d9;
case 0x75b5db:c.instructions+=2;goto B75b5db;
case 0x75b5dd:c.instructions+=1;goto B75b5dd;
case 0x75b5e2:goto L75b5e2;
case 0x75b5e5:c.instructions+=2;goto B75b5e5;
case 0x75b5e7:c.instructions+=1;goto B75b5e7;
case 0x75b5e9:goto L75b5e9;
case 0x75b5eb:c.instructions+=1;goto B75b5eb;
case 0x75b5ed:goto L75b5ed;
case 0x75b5ef:c.instructions+=3;goto B75b5ef;
case 0x75b5f1:c.instructions+=2;goto B75b5f1;
case 0x75b5f3:c.instructions+=1;goto B75b5f3;
case 0x75b5f7:goto L75b5f7;
case 0x75b5fb:c.instructions+=7;goto B75b5fb;
case 0x75b5ff:c.instructions+=6;goto B75b5ff;
case 0x75b600:c.instructions+=5;goto B75b600;
case 0x75b601:c.instructions+=4;goto B75b601;
case 0x75b603:c.instructions+=3;goto B75b603;
case 0x75b607:c.instructions+=2;goto B75b607;
case 0x75b60b:c.instructions+=1;goto B75b60b;
case 0x75b611:goto L75b611;
case 0x75b615:c.instructions+=3;goto B75b615;
case 0x75b61c:c.instructions+=2;goto B75b61c;
case 0x75b61e:c.instructions+=1;goto B75b61e;
case 0x75b621:goto L75b621;
case 0x75b623:goto L75b623;
case 0x75b625:c.instructions+=1;goto B75b625;
case 0x75b628:goto L75b628;
case 0x75b62a:goto L75b62a;
case 0x75b631:c.instructions+=5;goto B75b631;
case 0x75b632:c.instructions+=4;goto B75b632;
case 0x75b633:c.instructions+=3;goto B75b633;
case 0x75b634:c.instructions+=2;goto B75b634;
case 0x75b635:c.instructions+=1;goto B75b635;
case 0x75b63a:goto L75b63a;
case 0x75b640:c.instructions+=1;goto B75b640;
case 0x75b650:goto L75b650;
case 0x75b653:c.instructions+=20;goto B75b653;
case 0x75b654:c.instructions+=19;goto B75b654;
case 0x75b655:c.instructions+=18;goto B75b655;
case 0x75b659:c.instructions+=17;goto B75b659;
case 0x75b65a:c.instructions+=16;goto B75b65a;
case 0x75b65c:c.instructions+=15;goto B75b65c;
case 0x75b65d:c.instructions+=14;goto B75b65d;
case 0x75b65f:c.instructions+=13;goto B75b65f;
case 0x75b660:c.instructions+=12;goto B75b660;
case 0x75b662:c.instructions+=11;goto B75b662;
case 0x75b664:c.instructions+=10;goto B75b664;
case 0x75b666:c.instructions+=9;goto B75b666;
case 0x75b669:c.instructions+=8;goto B75b669;
case 0x75b66a:c.instructions+=7;goto B75b66a;
case 0x75b66c:c.instructions+=6;goto B75b66c;
case 0x75b66e:c.instructions+=5;goto B75b66e;
case 0x75b670:c.instructions+=4;goto B75b670;
case 0x75b672:c.instructions+=3;goto B75b672;
case 0x75b674:c.instructions+=2;goto B75b674;
case 0x75b678:c.instructions+=1;goto B75b678;
case 0x75b67a:goto L75b67a;
case 0x75b67c:c.instructions+=1;goto B75b67c;
case 0x75b67e:goto L75b67e;
case 0x75b680:c.instructions+=1;goto B75b680;
case 0x75b682:goto L75b682;
case 0x75b684:c.instructions+=5;goto B75b684;
case 0x75b686:c.instructions+=4;goto B75b686;
case 0x75b68a:c.instructions+=3;goto B75b68a;
case 0x75b68c:c.instructions+=2;goto B75b68c;
case 0x75b68e:c.instructions+=1;goto B75b68e;
case 0x75b690:goto L75b690;
case 0x75b692:goto L75b692;
case 0x75b694:goto L75b694;
case 0x75b697:goto L75b697;
case 0x75b69b:c.instructions+=3;goto B75b69b;
case 0x75b69f:c.instructions+=2;goto B75b69f;
case 0x75b6a1:c.instructions+=1;goto B75b6a1;
case 0x75b6a4:goto L75b6a4;
case 0x75b6a6:c.instructions+=1;goto B75b6a6;
case 0x75b6a8:goto L75b6a8;
case 0x75b6ad:c.instructions+=4;goto B75b6ad;
case 0x75b6b0:c.instructions+=3;goto B75b6b0;
case 0x75b6b3:c.instructions+=2;goto B75b6b3;
case 0x75b6b4:c.instructions+=1;goto B75b6b4;
case 0x75b6b5:goto L75b6b5;
case 0x75b6b7:c.instructions+=1;goto B75b6b7;
case 0x75b6b9:goto L75b6b9;
case 0x75b6c0:goto L75b6c0;
case 0x75b6c2:c.instructions+=7;goto B75b6c2;
case 0x75b6c5:c.instructions+=6;goto B75b6c5;
case 0x75b6c8:c.instructions+=5;goto B75b6c8;
case 0x75b6cb:c.instructions+=4;goto B75b6cb;
case 0x75b6cc:c.instructions+=3;goto B75b6cc;
case 0x75b6cf:c.instructions+=2;goto B75b6cf;
case 0x75b6d3:c.instructions+=1;goto B75b6d3;
case 0x75b6d5:goto L75b6d5;
case 0x75b6d6:c.instructions+=6;goto B75b6d6;
case 0x75b6d7:c.instructions+=5;goto B75b6d7;
case 0x75b6d8:c.instructions+=4;goto B75b6d8;
case 0x75b6da:c.instructions+=3;goto B75b6da;
case 0x75b6db:c.instructions+=2;goto B75b6db;
case 0x75b6de:c.instructions+=1;goto B75b6de;
case 0x75b6e0:goto L75b6e0;
case 0x75b6e1:c.instructions+=16;goto B75b6e1;
case 0x75b6e3:c.instructions+=15;goto B75b6e3;
case 0x75b6e6:c.instructions+=14;goto B75b6e6;
case 0x75b6ec:c.instructions+=13;goto B75b6ec;
case 0x75b6f1:c.instructions+=12;goto B75b6f1;
case 0x75b6f2:c.instructions+=11;goto B75b6f2;
case 0x75b6f5:c.instructions+=10;goto B75b6f5;
case 0x75b6fc:c.instructions+=9;goto B75b6fc;
case 0x75b6ff:c.instructions+=8;goto B75b6ff;
case 0x75b700:c.instructions+=7;goto B75b700;
case 0x75b701:c.instructions+=6;goto B75b701;
case 0x75b703:c.instructions+=5;goto B75b703;
case 0x75b704:c.instructions+=4;goto B75b704;
case 0x75b706:c.instructions+=3;goto B75b706;
case 0x75b709:c.instructions+=2;goto B75b709;
case 0x75b710:c.instructions+=1;goto B75b710;
case 0x75b715:goto L75b715;
case 0x75b718:c.instructions+=6;goto B75b718;
case 0x75b71a:c.instructions+=5;goto B75b71a;
case 0x75b71b:c.instructions+=4;goto B75b71b;
case 0x75b71d:c.instructions+=3;goto B75b71d;
case 0x75b720:c.instructions+=2;goto B75b720;
case 0x75b727:c.instructions+=1;goto B75b727;
case 0x75b72c:goto L75b72c;
case 0x75b72f:c.instructions+=4;goto B75b72f;
case 0x75b731:c.instructions+=3;goto B75b731;
case 0x75b733:c.instructions+=2;goto B75b733;
case 0x75b735:c.instructions+=1;goto B75b735;
case 0x75b73b:goto L75b73b;
case 0x75b740:goto L75b740;
case 0x75b743:c.instructions+=6;goto B75b743;
case 0x75b747:c.instructions+=5;goto B75b747;
case 0x75b74a:c.instructions+=4;goto B75b74a;
case 0x75b74c:c.instructions+=3;goto B75b74c;
case 0x75b74d:c.instructions+=2;goto B75b74d;
case 0x75b74f:c.instructions+=1;goto B75b74f;
case 0x75b751:goto L75b751;
case 0x75b754:c.instructions+=1;goto B75b754;
case 0x75b756:goto L75b756;
case 0x75b75d:c.instructions+=9;goto B75b75d;
case 0x75b75e:c.instructions+=8;goto B75b75e;
case 0x75b765:c.instructions+=7;goto B75b765;
case 0x75b766:c.instructions+=6;goto B75b766;
case 0x75b768:c.instructions+=5;goto B75b768;
case 0x75b769:c.instructions+=4;goto B75b769;
case 0x75b76d:c.instructions+=3;goto B75b76d;
case 0x75b76e:c.instructions+=2;goto B75b76e;
case 0x75b76f:c.instructions+=1;goto B75b76f;
case 0x75b774:goto L75b774;
case 0x75b77b:c.instructions+=9;goto B75b77b;
case 0x75b77c:c.instructions+=8;goto B75b77c;
case 0x75b783:c.instructions+=7;goto B75b783;
case 0x75b784:c.instructions+=6;goto B75b784;
case 0x75b788:c.instructions+=5;goto B75b788;
case 0x75b789:c.instructions+=4;goto B75b789;
case 0x75b78b:c.instructions+=3;goto B75b78b;
case 0x75b78c:c.instructions+=2;goto B75b78c;
case 0x75b78d:c.instructions+=1;goto B75b78d;
case 0x75b792:goto L75b792;
case 0x75b795:c.instructions+=1;goto B75b795;
case 0x75b79a:goto L75b79a;
case 0x75b79d:c.instructions+=1;goto B75b79d;
case 0x75b7a3:goto L75b7a3;
case 0x75b7aa:c.instructions+=9;goto B75b7aa;
case 0x75b7ab:c.instructions+=8;goto B75b7ab;
case 0x75b7b2:c.instructions+=7;goto B75b7b2;
case 0x75b7b3:c.instructions+=6;goto B75b7b3;
case 0x75b7b5:c.instructions+=5;goto B75b7b5;
case 0x75b7b6:c.instructions+=4;goto B75b7b6;
case 0x75b7ba:c.instructions+=3;goto B75b7ba;
case 0x75b7bb:c.instructions+=2;goto B75b7bb;
case 0x75b7bc:c.instructions+=1;goto B75b7bc;
case 0x75b7c1:goto L75b7c1;
case 0x75b7c8:c.instructions+=9;goto B75b7c8;
case 0x75b7c9:c.instructions+=8;goto B75b7c9;
case 0x75b7cd:c.instructions+=7;goto B75b7cd;
case 0x75b7ce:c.instructions+=6;goto B75b7ce;
case 0x75b7d0:c.instructions+=5;goto B75b7d0;
case 0x75b7d1:c.instructions+=4;goto B75b7d1;
case 0x75b7d3:c.instructions+=3;goto B75b7d3;
case 0x75b7d4:c.instructions+=2;goto B75b7d4;
case 0x75b7d5:c.instructions+=1;goto B75b7d5;
case 0x75b7da:goto L75b7da;
case 0x75b7e1:c.instructions+=9;goto B75b7e1;
case 0x75b7e2:c.instructions+=8;goto B75b7e2;
case 0x75b7e6:c.instructions+=7;goto B75b7e6;
case 0x75b7e7:c.instructions+=6;goto B75b7e7;
case 0x75b7e9:c.instructions+=5;goto B75b7e9;
case 0x75b7ea:c.instructions+=4;goto B75b7ea;
case 0x75b7ec:c.instructions+=3;goto B75b7ec;
case 0x75b7ed:c.instructions+=2;goto B75b7ed;
case 0x75b7ee:c.instructions+=1;goto B75b7ee;
case 0x75b7f3:goto L75b7f3;
case 0x75b7fa:c.instructions+=9;goto B75b7fa;
case 0x75b7fb:c.instructions+=8;goto B75b7fb;
case 0x75b7ff:c.instructions+=7;goto B75b7ff;
case 0x75b800:c.instructions+=6;goto B75b800;
case 0x75b802:c.instructions+=5;goto B75b802;
case 0x75b803:c.instructions+=4;goto B75b803;
case 0x75b805:c.instructions+=3;goto B75b805;
case 0x75b806:c.instructions+=2;goto B75b806;
case 0x75b807:c.instructions+=1;goto B75b807;
case 0x75b80c:goto L75b80c;
case 0x75b80f:c.instructions+=10;goto B75b80f;
case 0x75b816:c.instructions+=9;goto B75b816;
case 0x75b817:c.instructions+=8;goto B75b817;
case 0x75b81e:c.instructions+=7;goto B75b81e;
case 0x75b81f:c.instructions+=6;goto B75b81f;
case 0x75b823:c.instructions+=5;goto B75b823;
case 0x75b824:c.instructions+=4;goto B75b824;
case 0x75b826:c.instructions+=3;goto B75b826;
case 0x75b827:c.instructions+=2;goto B75b827;
case 0x75b828:c.instructions+=1;goto B75b828;
case 0x75b82d:goto L75b82d;
case 0x75b830:c.instructions+=1;goto B75b830;
case 0x75b835:goto L75b835;
case 0x75b83b:c.instructions+=1;goto B75b83b;
case 0x75b841:goto L75b841;
case 0x75b848:c.instructions+=9;goto B75b848;
case 0x75b849:c.instructions+=8;goto B75b849;
case 0x75b850:c.instructions+=7;goto B75b850;
case 0x75b851:c.instructions+=6;goto B75b851;
case 0x75b853:c.instructions+=5;goto B75b853;
case 0x75b854:c.instructions+=4;goto B75b854;
case 0x75b858:c.instructions+=3;goto B75b858;
case 0x75b859:c.instructions+=2;goto B75b859;
case 0x75b85a:c.instructions+=1;goto B75b85a;
case 0x75b85f:goto L75b85f;
case 0x75b866:c.instructions+=9;goto B75b866;
case 0x75b867:c.instructions+=8;goto B75b867;
case 0x75b86b:c.instructions+=7;goto B75b86b;
case 0x75b86c:c.instructions+=6;goto B75b86c;
case 0x75b86e:c.instructions+=5;goto B75b86e;
case 0x75b86f:c.instructions+=4;goto B75b86f;
case 0x75b871:c.instructions+=3;goto B75b871;
case 0x75b872:c.instructions+=2;goto B75b872;
case 0x75b873:c.instructions+=1;goto B75b873;
case 0x75b878:goto L75b878;
case 0x75b87f:c.instructions+=9;goto B75b87f;
case 0x75b880:c.instructions+=8;goto B75b880;
case 0x75b884:c.instructions+=7;goto B75b884;
case 0x75b885:c.instructions+=6;goto B75b885;
case 0x75b887:c.instructions+=5;goto B75b887;
case 0x75b888:c.instructions+=4;goto B75b888;
case 0x75b88a:c.instructions+=3;goto B75b88a;
case 0x75b88b:c.instructions+=2;goto B75b88b;
case 0x75b88c:c.instructions+=1;goto B75b88c;
case 0x75b891:goto L75b891;
case 0x75b898:c.instructions+=9;goto B75b898;
case 0x75b899:c.instructions+=8;goto B75b899;
case 0x75b89d:c.instructions+=7;goto B75b89d;
case 0x75b89e:c.instructions+=6;goto B75b89e;
case 0x75b8a0:c.instructions+=5;goto B75b8a0;
case 0x75b8a1:c.instructions+=4;goto B75b8a1;
case 0x75b8a3:c.instructions+=3;goto B75b8a3;
case 0x75b8a4:c.instructions+=2;goto B75b8a4;
case 0x75b8a5:c.instructions+=1;goto B75b8a5;
case 0x75b8aa:goto L75b8aa;
case 0x75b8ad:c.instructions+=10;goto B75b8ad;
case 0x75b8b4:c.instructions+=9;goto B75b8b4;
case 0x75b8b5:c.instructions+=8;goto B75b8b5;
case 0x75b8b9:c.instructions+=7;goto B75b8b9;
case 0x75b8ba:c.instructions+=6;goto B75b8ba;
case 0x75b8bc:c.instructions+=5;goto B75b8bc;
case 0x75b8bd:c.instructions+=4;goto B75b8bd;
case 0x75b8bf:c.instructions+=3;goto B75b8bf;
case 0x75b8c0:c.instructions+=2;goto B75b8c0;
case 0x75b8c1:c.instructions+=1;goto B75b8c1;
case 0x75b8c6:goto L75b8c6;
case 0x75b8cd:c.instructions+=9;goto B75b8cd;
case 0x75b8ce:c.instructions+=8;goto B75b8ce;
case 0x75b8d2:c.instructions+=7;goto B75b8d2;
case 0x75b8d3:c.instructions+=6;goto B75b8d3;
case 0x75b8d5:c.instructions+=5;goto B75b8d5;
case 0x75b8d6:c.instructions+=4;goto B75b8d6;
case 0x75b8d8:c.instructions+=3;goto B75b8d8;
case 0x75b8d9:c.instructions+=2;goto B75b8d9;
case 0x75b8da:c.instructions+=1;goto B75b8da;
case 0x75b8df:goto L75b8df;
case 0x75b8e6:c.instructions+=9;goto B75b8e6;
case 0x75b8e7:c.instructions+=8;goto B75b8e7;
case 0x75b8eb:c.instructions+=7;goto B75b8eb;
case 0x75b8ec:c.instructions+=6;goto B75b8ec;
case 0x75b8ee:c.instructions+=5;goto B75b8ee;
case 0x75b8ef:c.instructions+=4;goto B75b8ef;
case 0x75b8f1:c.instructions+=3;goto B75b8f1;
case 0x75b8f2:c.instructions+=2;goto B75b8f2;
case 0x75b8f3:c.instructions+=1;goto B75b8f3;
case 0x75b8f8:goto L75b8f8;
case 0x75b8ff:c.instructions+=9;goto B75b8ff;
case 0x75b900:c.instructions+=8;goto B75b900;
case 0x75b904:c.instructions+=7;goto B75b904;
case 0x75b905:c.instructions+=6;goto B75b905;
case 0x75b907:c.instructions+=5;goto B75b907;
case 0x75b908:c.instructions+=4;goto B75b908;
case 0x75b90a:c.instructions+=3;goto B75b90a;
case 0x75b90b:c.instructions+=2;goto B75b90b;
case 0x75b90c:c.instructions+=1;goto B75b90c;
case 0x75b911:goto L75b911;
case 0x75b914:c.instructions+=10;goto B75b914;
case 0x75b91b:c.instructions+=9;goto B75b91b;
case 0x75b91c:c.instructions+=8;goto B75b91c;
case 0x75b920:c.instructions+=7;goto B75b920;
case 0x75b921:c.instructions+=6;goto B75b921;
case 0x75b923:c.instructions+=5;goto B75b923;
case 0x75b924:c.instructions+=4;goto B75b924;
case 0x75b926:c.instructions+=3;goto B75b926;
case 0x75b927:c.instructions+=2;goto B75b927;
case 0x75b928:c.instructions+=1;goto B75b928;
case 0x75b92d:goto L75b92d;
case 0x75b934:c.instructions+=9;goto B75b934;
case 0x75b935:c.instructions+=8;goto B75b935;
case 0x75b939:c.instructions+=7;goto B75b939;
case 0x75b93a:c.instructions+=6;goto B75b93a;
case 0x75b93c:c.instructions+=5;goto B75b93c;
case 0x75b93d:c.instructions+=4;goto B75b93d;
case 0x75b93f:c.instructions+=3;goto B75b93f;
case 0x75b940:c.instructions+=2;goto B75b940;
case 0x75b941:c.instructions+=1;goto B75b941;
case 0x75b946:goto L75b946;
case 0x75b94d:c.instructions+=9;goto B75b94d;
case 0x75b94e:c.instructions+=8;goto B75b94e;
case 0x75b952:c.instructions+=7;goto B75b952;
case 0x75b953:c.instructions+=6;goto B75b953;
case 0x75b955:c.instructions+=5;goto B75b955;
case 0x75b956:c.instructions+=4;goto B75b956;
case 0x75b958:c.instructions+=3;goto B75b958;
case 0x75b959:c.instructions+=2;goto B75b959;
case 0x75b95a:c.instructions+=1;goto B75b95a;
case 0x75b95f:goto L75b95f;
case 0x75b966:c.instructions+=9;goto B75b966;
case 0x75b967:c.instructions+=8;goto B75b967;
case 0x75b96b:c.instructions+=7;goto B75b96b;
case 0x75b96c:c.instructions+=6;goto B75b96c;
case 0x75b96e:c.instructions+=5;goto B75b96e;
case 0x75b96f:c.instructions+=4;goto B75b96f;
case 0x75b971:c.instructions+=3;goto B75b971;
case 0x75b972:c.instructions+=2;goto B75b972;
case 0x75b973:c.instructions+=1;goto B75b973;
case 0x75b978:goto L75b978;
case 0x75b97b:c.instructions+=10;goto B75b97b;
case 0x75b982:c.instructions+=9;goto B75b982;
case 0x75b983:c.instructions+=8;goto B75b983;
case 0x75b987:c.instructions+=7;goto B75b987;
case 0x75b988:c.instructions+=6;goto B75b988;
case 0x75b98a:c.instructions+=5;goto B75b98a;
case 0x75b98b:c.instructions+=4;goto B75b98b;
case 0x75b98d:c.instructions+=3;goto B75b98d;
case 0x75b98e:c.instructions+=2;goto B75b98e;
case 0x75b98f:c.instructions+=1;goto B75b98f;
case 0x75b994:goto L75b994;
case 0x75b99b:c.instructions+=9;goto B75b99b;
case 0x75b99c:c.instructions+=8;goto B75b99c;
case 0x75b9a0:c.instructions+=7;goto B75b9a0;
case 0x75b9a1:c.instructions+=6;goto B75b9a1;
case 0x75b9a3:c.instructions+=5;goto B75b9a3;
case 0x75b9a4:c.instructions+=4;goto B75b9a4;
case 0x75b9a6:c.instructions+=3;goto B75b9a6;
case 0x75b9a7:c.instructions+=2;goto B75b9a7;
case 0x75b9a8:c.instructions+=1;goto B75b9a8;
case 0x75b9ad:goto L75b9ad;
case 0x75b9b4:c.instructions+=9;goto B75b9b4;
case 0x75b9b5:c.instructions+=8;goto B75b9b5;
case 0x75b9b9:c.instructions+=7;goto B75b9b9;
case 0x75b9ba:c.instructions+=6;goto B75b9ba;
case 0x75b9bc:c.instructions+=5;goto B75b9bc;
case 0x75b9bd:c.instructions+=4;goto B75b9bd;
case 0x75b9bf:c.instructions+=3;goto B75b9bf;
case 0x75b9c0:c.instructions+=2;goto B75b9c0;
case 0x75b9c1:c.instructions+=1;goto B75b9c1;
case 0x75b9c6:goto L75b9c6;
case 0x75b9cd:c.instructions+=9;goto B75b9cd;
case 0x75b9ce:c.instructions+=8;goto B75b9ce;
case 0x75b9d2:c.instructions+=7;goto B75b9d2;
case 0x75b9d3:c.instructions+=6;goto B75b9d3;
case 0x75b9d5:c.instructions+=5;goto B75b9d5;
case 0x75b9d6:c.instructions+=4;goto B75b9d6;
case 0x75b9d7:c.instructions+=3;goto B75b9d7;
case 0x75b9d9:c.instructions+=2;goto B75b9d9;
case 0x75b9da:c.instructions+=1;goto B75b9da;
case 0x75b9df:goto L75b9df;
case 0x75b9e2:c.instructions+=10;goto B75b9e2;
case 0x75b9e9:c.instructions+=9;goto B75b9e9;
case 0x75b9ea:c.instructions+=8;goto B75b9ea;
case 0x75b9f1:c.instructions+=7;goto B75b9f1;
case 0x75b9f2:c.instructions+=6;goto B75b9f2;
case 0x75b9f6:c.instructions+=5;goto B75b9f6;
case 0x75b9f7:c.instructions+=4;goto B75b9f7;
case 0x75b9f9:c.instructions+=3;goto B75b9f9;
case 0x75b9fa:c.instructions+=2;goto B75b9fa;
case 0x75b9fb:c.instructions+=1;goto B75b9fb;
case 0x75ba00:goto L75ba00;
case 0x75ba03:c.instructions+=1;goto B75ba03;
case 0x75ba05:goto L75ba05;
case 0x75ba07:c.instructions+=3;goto B75ba07;
case 0x75ba09:c.instructions+=2;goto B75ba09;
case 0x75ba0e:c.instructions+=1;goto B75ba0e;
case 0x75ba12:goto L75ba12;
case 0x75ba14:goto L75ba14;
case 0x75ba1b:c.instructions+=1;goto B75ba1b;
case 0x75ba1d:goto L75ba1d;
case 0x75ba20:goto L75ba20;
case 0x75ba23:c.instructions+=1;goto B75ba23;
case 0x75ba25:goto L75ba25;
case 0x75ba2c:c.instructions+=9;goto B75ba2c;
case 0x75ba2d:c.instructions+=8;goto B75ba2d;
case 0x75ba34:c.instructions+=7;goto B75ba34;
case 0x75ba35:c.instructions+=6;goto B75ba35;
case 0x75ba39:c.instructions+=5;goto B75ba39;
case 0x75ba3a:c.instructions+=4;goto B75ba3a;
case 0x75ba3c:c.instructions+=3;goto B75ba3c;
case 0x75ba3d:c.instructions+=2;goto B75ba3d;
case 0x75ba3e:c.instructions+=1;goto B75ba3e;
case 0x75ba43:goto L75ba43;
case 0x75ba46:goto L75ba46;
case 0x75ba4d:c.instructions+=9;goto B75ba4d;
case 0x75ba4e:c.instructions+=8;goto B75ba4e;
case 0x75ba55:c.instructions+=7;goto B75ba55;
case 0x75ba56:c.instructions+=6;goto B75ba56;
case 0x75ba58:c.instructions+=5;goto B75ba58;
case 0x75ba59:c.instructions+=4;goto B75ba59;
case 0x75ba5b:c.instructions+=3;goto B75ba5b;
case 0x75ba5c:c.instructions+=2;goto B75ba5c;
case 0x75ba5d:c.instructions+=1;goto B75ba5d;
case 0x75ba62:goto L75ba62;
case 0x75ba64:c.instructions+=3;goto B75ba64;
case 0x75ba67:c.instructions+=2;goto B75ba67;
case 0x75ba69:c.instructions+=1;goto B75ba69;
case 0x75ba6b:goto L75ba6b;
case 0x75ba6e:c.instructions+=8;goto B75ba6e;
case 0x75ba71:c.instructions+=7;goto B75ba71;
case 0x75ba72:c.instructions+=6;goto B75ba72;
case 0x75ba74:c.instructions+=5;goto B75ba74;
case 0x75ba76:c.instructions+=4;goto B75ba76;
case 0x75ba78:c.instructions+=3;goto B75ba78;
case 0x75ba7a:c.instructions+=2;goto B75ba7a;
case 0x75ba7e:c.instructions+=1;goto B75ba7e;
case 0x75ba80:goto L75ba80;
case 0x75ba83:c.instructions+=8;goto B75ba83;
case 0x75ba85:c.instructions+=7;goto B75ba85;
case 0x75ba87:c.instructions+=6;goto B75ba87;
case 0x75ba88:c.instructions+=5;goto B75ba88;
case 0x75ba8a:c.instructions+=4;goto B75ba8a;
case 0x75ba8b:c.instructions+=3;goto B75ba8b;
case 0x75ba8e:c.instructions+=2;goto B75ba8e;
case 0x75ba8f:c.instructions+=1;goto B75ba8f;
case 0x75ba91:goto L75ba91;
case 0x75ba98:c.instructions+=1;goto B75ba98;
case 0x75ba9d:goto L75ba9d;
case 0x75ba9e:c.instructions+=5;goto B75ba9e;
case 0x75ba9f:c.instructions+=4;goto B75ba9f;
case 0x75baa0:c.instructions+=3;goto B75baa0;
case 0x75baa2:c.instructions+=2;goto B75baa2;
case 0x75baa3:c.instructions+=1;goto B75baa3;
case 0x75bab0:goto L75bab0;
case 0x75bab4:c.instructions+=11;goto B75bab4;
case 0x75bab8:c.instructions+=10;goto B75bab8;
case 0x75babc:c.instructions+=9;goto B75babc;
case 0x75bac2:c.instructions+=8;goto B75bac2;
case 0x75bac3:c.instructions+=7;goto B75bac3;
case 0x75bac5:c.instructions+=6;goto B75bac5;
case 0x75bac6:c.instructions+=5;goto B75bac6;
case 0x75baca:c.instructions+=4;goto B75baca;
case 0x75bacd:c.instructions+=3;goto B75bacd;
case 0x75bace:c.instructions+=2;goto B75bace;
case 0x75bad4:c.instructions+=1;goto B75bad4;
case 0x75bada:goto L75bada;
case 0x75badc:goto L75badc;
case 0x75bade:c.instructions+=1;goto B75bade;
case 0x75bae1:goto L75bae1;
case 0x75bae3:goto L75bae3;
case 0x75bae7:c.instructions+=4;goto B75bae7;
case 0x75bae9:c.instructions+=3;goto B75bae9;
case 0x75baef:c.instructions+=2;goto B75baef;
case 0x75baf1:c.instructions+=1;goto B75baf1;
case 0x75baf4:goto L75baf4;
case 0x75baf6:goto L75baf6;
case 0x75baf8:c.instructions+=1;goto B75baf8;
case 0x75bafb:goto L75bafb;
case 0x75bafd:goto L75bafd;
case 0x75bafe:c.instructions+=3;goto B75bafe;
case 0x75baff:c.instructions+=2;goto B75baff;
case 0x75bb00:c.instructions+=1;goto B75bb00;
case 0x75bb10:goto L75bb10;
case 0x75bb11:c.instructions+=2;goto B75bb11;
case 0x75bb12:c.instructions+=1;goto B75bb12;
case 0x75bb17:goto L75bb17;
case 0x75bb1b:c.instructions+=4;goto B75bb1b;
case 0x75bb21:c.instructions+=3;goto B75bb21;
case 0x75bb23:c.instructions+=2;goto B75bb23;
case 0x75bb25:c.instructions+=1;goto B75bb25;
case 0x75bb27:goto L75bb27;
case 0x75bb30:goto L75bb30;
case 0x75bb32:c.instructions+=10;goto B75bb32;
case 0x75bb35:c.instructions+=9;goto B75bb35;
case 0x75bb3a:c.instructions+=8;goto B75bb3a;
case 0x75bb3c:c.instructions+=7;goto B75bb3c;
case 0x75bb3e:c.instructions+=6;goto B75bb3e;
case 0x75bb41:c.instructions+=5;goto B75bb41;
case 0x75bb44:c.instructions+=4;goto B75bb44;
case 0x75bb4a:c.instructions+=3;goto B75bb4a;
case 0x75bb4b:c.instructions+=2;goto B75bb4b;
case 0x75bb4d:c.instructions+=1;goto B75bb4d;
case 0x75bb4f:goto L75bb4f;
case 0x75bb55:c.instructions+=3;goto B75bb55;
case 0x75bb57:c.instructions+=2;goto B75bb57;
case 0x75bb59:c.instructions+=1;goto B75bb59;
case 0x75bb5b:goto L75bb5b;
case 0x75bb60:goto L75bb60;
case 0x75bb63:goto L75bb63;
case 0x75bb64:c.instructions+=3;goto B75bb64;
case 0x75bb6a:c.instructions+=2;goto B75bb6a;
case 0x75bb6c:c.instructions+=1;goto B75bb6c;
case 0x75bb6e:goto L75bb6e;
case 0x75bb71:c.instructions+=4;goto B75bb71;
case 0x75bb77:c.instructions+=3;goto B75bb77;
case 0x75bb78:c.instructions+=2;goto B75bb78;
case 0x75bb7a:c.instructions+=1;goto B75bb7a;
case 0x75bb7c:goto L75bb7c;
case 0x75bb82:c.instructions+=9;goto B75bb82;
case 0x75bb86:c.instructions+=8;goto B75bb86;
case 0x75bb8a:c.instructions+=7;goto B75bb8a;
case 0x75bb8c:c.instructions+=6;goto B75bb8c;
case 0x75bb8f:c.instructions+=5;goto B75bb8f;
case 0x75bb93:c.instructions+=4;goto B75bb93;
case 0x75bb96:c.instructions+=3;goto B75bb96;
case 0x75bb98:c.instructions+=2;goto B75bb98;
case 0x75bb9b:c.instructions+=1;goto B75bb9b;
case 0x75bb9f:goto L75bb9f;
case 0x75bba1:goto L75bba1;
case 0x75bba3:c.instructions+=1;goto B75bba3;
case 0x75bba6:goto L75bba6;
case 0x75bba8:goto L75bba8;
case 0x75bba9:c.instructions+=2;goto B75bba9;
case 0x75bbaa:c.instructions+=1;goto B75bbaa;
case 0x75bbb0:goto L75bbb0;
case 0x75bbb4:c.instructions+=6;goto B75bbb4;
case 0x75bbb5:c.instructions+=5;goto B75bbb5;
case 0x75bbb9:c.instructions+=4;goto B75bbb9;
case 0x75bbbb:c.instructions+=3;goto B75bbbb;
case 0x75bbbc:c.instructions+=2;goto B75bbbc;
case 0x75bbc0:c.instructions+=1;goto B75bbc0;
case 0x75bbc3:goto L75bbc3;
case 0x75bbc5:goto L75bbc5;
case 0x75bbc7:c.instructions+=1;goto B75bbc7;
case 0x75bbca:goto L75bbca;
case 0x75bbcc:goto L75bbcc;
case 0x75bbcd:c.instructions+=2;goto B75bbcd;
case 0x75bbce:c.instructions+=1;goto B75bbce;
case 0x75bbd0:goto L75bbd0;
case 0x75bbd4:c.instructions+=10;goto B75bbd4;
case 0x75bbda:c.instructions+=9;goto B75bbda;
case 0x75bbe0:c.instructions+=8;goto B75bbe0;
case 0x75bbe1:c.instructions+=7;goto B75bbe1;
case 0x75bbe2:c.instructions+=6;goto B75bbe2;
case 0x75bbe8:c.instructions+=5;goto B75bbe8;
case 0x75bbe9:c.instructions+=4;goto B75bbe9;
case 0x75bbef:c.instructions+=3;goto B75bbef;
case 0x75bbf0:c.instructions+=2;goto B75bbf0;
case 0x75bbf1:c.instructions+=1;goto B75bbf1;
case 0x75bbf6:goto L75bbf6;
case 0x75bbf9:c.instructions+=1;goto B75bbf9;
case 0x75bbfa:goto L75bbfa;
case 0x75bc00:goto L75bc00;
case 0x75bc06:goto L75bc06;
case 0x75bc0c:goto L75bc0c;
case 0x75bc12:goto L75bc12;
case 0x75bc18:goto L75bc18;
case 0x75bc1e:goto L75bc1e;
case 0x75bc24:goto L75bc24;
case 0x75bc2a:goto L75bc2a;
case 0x75bc30:goto L75bc30;
case 0x75bc36:goto L75bc36;
case 0x75bc3c:goto L75bc3c;
case 0x75bc42:goto L75bc42;
case 0x75bc48:goto L75bc48;
case 0x75bc4e:goto L75bc4e;
case 0x75bc54:goto L75bc54;
case 0x75bc5a:goto L75bc5a;
case 0x75bc60:goto L75bc60;
case 0x75bc66:goto L75bc66;
case 0x75bc6c:goto L75bc6c;
case 0x75bc72:goto L75bc72;
case 0x75bc78:goto L75bc78;
case 0x75bc7e:goto L75bc7e;
case 0x75bc85:c.instructions+=1;goto B75bc85;
case 0x75bc87:goto L75bc87;
case 0x75bc8c:goto L75bc8c;
case 0x75bc90:c.instructions+=1;goto B75bc90;
case 0x75bc95:goto L75bc95;
case 0x75bc9a:c.instructions+=1;goto B75bc9a;
case 0x75bca0:goto L75bca0;
case 0x75bca1:c.instructions+=2;goto B75bca1;
case 0x75bca2:c.instructions+=1;goto B75bca2;
case 0x75bca3:goto L75bca3;
case 0x75bcaa:c.instructions+=1;goto B75bcaa;
case 0x75bcac:goto L75bcac;
case 0x75bcb1:goto L75bcb1;
case 0x75bcb5:c.instructions+=1;goto B75bcb5;
case 0x75bcba:goto L75bcba;
case 0x75bcbf:c.instructions+=1;goto B75bcbf;
case 0x75bcc4:goto L75bcc4;
case 0x75bcc5:c.instructions+=2;goto B75bcc5;
case 0x75bcc6:c.instructions+=1;goto B75bcc6;
case 0x75bcc7:goto L75bcc7;
case 0x75bcc9:c.instructions+=2;goto B75bcc9;
case 0x75bcce:c.instructions+=1;goto B75bcce;
case 0x75bcd3:goto L75bcd3;
case 0x75bcd8:c.instructions+=2;goto B75bcd8;
case 0x75bcda:c.instructions+=1;goto B75bcda;
case 0x75bcdf:goto L75bcdf;
case 0x75bce2:c.instructions+=4;goto B75bce2;
case 0x75bce4:c.instructions+=3;goto B75bce4;
case 0x75bce6:c.instructions+=2;goto B75bce6;
case 0x75bce7:c.instructions+=1;goto B75bce7;
case 0x75bced:goto L75bced;
case 0x75bcf0:c.instructions+=10;goto B75bcf0;
case 0x75bcf6:c.instructions+=9;goto B75bcf6;
case 0x75bcf9:c.instructions+=8;goto B75bcf9;
case 0x75bcfe:c.instructions+=7;goto B75bcfe;
case 0x75bd01:c.instructions+=6;goto B75bd01;
case 0x75bd07:c.instructions+=5;goto B75bd07;
case 0x75bd0a:c.instructions+=4;goto B75bd0a;
case 0x75bd10:c.instructions+=3;goto B75bd10;
case 0x75bd16:c.instructions+=2;goto B75bd16;
case 0x75bd19:c.instructions+=1;goto B75bd19;
case 0x75bd1b:goto L75bd1b;
case 0x75bd21:c.instructions+=1;goto B75bd21;
case 0x75bd27:goto L75bd27;
case 0x75bd2a:c.instructions+=5;goto B75bd2a;
case 0x75bd2c:c.instructions+=4;goto B75bd2c;
case 0x75bd31:c.instructions+=3;goto B75bd31;
case 0x75bd33:c.instructions+=2;goto B75bd33;
case 0x75bd34:c.instructions+=1;goto B75bd34;
case 0x75bd3a:goto L75bd3a;
case 0x75bd3f:c.instructions+=1;goto B75bd3f;
case 0x75bd41:goto L75bd41;
case 0x75bd44:c.instructions+=3;goto B75bd44;
case 0x75bd46:c.instructions+=2;goto B75bd46;
case 0x75bd4c:c.instructions+=1;goto B75bd4c;
case 0x75bd4e:goto L75bd4e;
case 0x75bd52:c.instructions+=2;goto B75bd52;
case 0x75bd57:c.instructions+=1;goto B75bd57;
case 0x75bd59:goto L75bd59;
case 0x75bd5e:c.instructions+=1;goto B75bd5e;
case 0x75bd60:goto L75bd60;
case 0x75bd63:c.instructions+=1;goto B75bd63;
case 0x75bd65:goto L75bd65;
case 0x75bd6c:c.instructions+=1;goto B75bd6c;
case 0x75bd6e:goto L75bd6e;
case 0x75bd70:c.instructions+=2;goto B75bd70;
case 0x75bd76:c.instructions+=1;goto B75bd76;
case 0x75bd78:goto L75bd78;
case 0x75bd7c:c.instructions+=1;goto B75bd7c;
case 0x75bd7e:goto L75bd7e;
case 0x75bd80:c.instructions+=1;goto B75bd80;
case 0x75bd86:goto L75bd86;
case 0x75bd89:c.instructions+=1;goto B75bd89;
case 0x75bd8c:goto L75bd8c;
case 0x75bd8e:c.instructions+=1;goto B75bd8e;
case 0x75bd93:goto L75bd93;
case 0x75bd94:c.instructions+=2;goto B75bd94;
case 0x75bd96:c.instructions+=1;goto B75bd96;
case 0x75bd98:goto L75bd98;
case 0x75bd9a:c.instructions+=1;goto B75bd9a;
case 0x75bd9f:goto L75bd9f;
case 0x75bda0:goto L75bda0;
case 0x75bda5:goto L75bda5;
case 0x75bda7:c.instructions+=1;goto B75bda7;
case 0x75bda9:goto L75bda9;
case 0x75bdab:c.instructions+=1;goto B75bdab;
case 0x75bdb0:goto L75bdb0;
case 0x75bdb1:goto L75bdb1;
case 0x75bdb6:goto L75bdb6;
case 0x75bdb9:c.instructions+=1;goto B75bdb9;
case 0x75bdbe:goto L75bdbe;
case 0x75bdc0:c.instructions+=1;goto B75bdc0;
case 0x75bdc2:goto L75bdc2;
case 0x75bdc4:c.instructions+=1;goto B75bdc4;
case 0x75bdc9:goto L75bdc9;
case 0x75bdca:goto L75bdca;
case 0x75bdd0:goto L75bdd0;
case 0x75bdd5:c.instructions+=1;goto B75bdd5;
case 0x75bdda:goto L75bdda;
case 0x75bddf:c.instructions+=1;goto B75bddf;
case 0x75bde4:goto L75bde4;
case 0x75bde6:c.instructions+=1;goto B75bde6;
case 0x75bde8:goto L75bde8;
case 0x75bdea:c.instructions+=1;goto B75bdea;
case 0x75bdef:goto L75bdef;
case 0x75bdf0:goto L75bdf0;
case 0x75bdf5:goto L75bdf5;
case 0x75bdf7:c.instructions+=1;goto B75bdf7;
case 0x75bdf9:goto L75bdf9;
case 0x75bdfb:c.instructions+=1;goto B75bdfb;
case 0x75be00:goto L75be00;
case 0x75be01:goto L75be01;
case 0x75be06:goto L75be06;
case 0x75be09:c.instructions+=2;goto B75be09;
case 0x75be0b:c.instructions+=1;goto B75be0b;
case 0x75be0d:goto L75be0d;
case 0x75be0e:c.instructions+=1;goto B75be0e;
case 0x75be13:goto L75be13;
case 0x75be14:goto L75be14;
case 0x75be19:c.instructions+=5;goto B75be19;
case 0x75be1e:c.instructions+=4;goto B75be1e;
case 0x75be1f:c.instructions+=3;goto B75be1f;
case 0x75be25:c.instructions+=2;goto B75be25;
case 0x75be2b:c.instructions+=1;goto B75be2b;
case 0x75be30:goto L75be30;
case 0x75be33:c.instructions+=4;goto B75be33;
case 0x75be35:c.instructions+=3;goto B75be35;
case 0x75be38:c.instructions+=2;goto B75be38;
case 0x75be3b:c.instructions+=1;goto B75be3b;
case 0x75be3d:goto L75be3d;
case 0x75be3e:c.instructions+=1;goto B75be3e;
case 0x75be43:goto L75be43;
case 0x75be48:goto L75be48;
case 0x75be4a:goto L75be4a;
case 0x75be4d:c.instructions+=6;goto B75be4d;
case 0x75be4f:c.instructions+=5;goto B75be4f;
case 0x75be51:c.instructions+=4;goto B75be51;
case 0x75be54:c.instructions+=3;goto B75be54;
case 0x75be55:c.instructions+=2;goto B75be55;
case 0x75be56:c.instructions+=1;goto B75be56;
case 0x75be5b:goto L75be5b;
case 0x75be5c:c.instructions+=2;goto B75be5c;
case 0x75be5d:c.instructions+=1;goto B75be5d;
case 0x75be5e:goto L75be5e;
case 0x75be61:c.instructions+=3;goto B75be61;
case 0x75be64:c.instructions+=2;goto B75be64;
case 0x75be68:c.instructions+=1;goto B75be68;
case 0x75be6a:goto L75be6a;
case 0x75be6b:c.instructions+=1;goto B75be6b;
case 0x75be70:goto L75be70;
case 0x75be75:goto L75be75;
case 0x75be79:c.instructions+=3;goto B75be79;
case 0x75be7b:c.instructions+=2;goto B75be7b;
case 0x75be7e:c.instructions+=1;goto B75be7e;
case 0x75be83:goto L75be83;
case 0x75be84:goto L75be84;
case 0x75be89:c.instructions+=7;goto B75be89;
case 0x75be8e:c.instructions+=6;goto B75be8e;
case 0x75be98:c.instructions+=5;goto B75be98;
case 0x75bea2:c.instructions+=4;goto B75bea2;
case 0x75beac:c.instructions+=3;goto B75beac;
case 0x75beb6:c.instructions+=2;goto B75beb6;
case 0x75bebb:c.instructions+=1;goto B75bebb;
case 0x75bebc:goto L75bebc;
case 0x75bec1:goto L75bec1;
case 0x75bec6:goto L75bec6;
case 0x75becb:c.instructions+=1;goto B75becb;
case 0x75bed0:goto L75bed0;
case 0x75bed2:c.instructions+=1;goto B75bed2;
case 0x75bed4:goto L75bed4;
case 0x75bed5:c.instructions+=11;goto B75bed5;
case 0x75bed7:c.instructions+=10;goto B75bed7;
case 0x75beda:c.instructions+=9;goto B75beda;
case 0x75bedd:c.instructions+=8;goto B75bedd;
case 0x75bedf:c.instructions+=7;goto B75bedf;
case 0x75bee3:c.instructions+=6;goto B75bee3;
case 0x75bee7:c.instructions+=5;goto B75bee7;
case 0x75beeb:c.instructions+=4;goto B75beeb;
case 0x75beef:c.instructions+=3;goto B75beef;
case 0x75bef3:c.instructions+=2;goto B75bef3;
case 0x75bef5:c.instructions+=1;goto B75bef5;
case 0x75bef7:goto L75bef7;
case 0x75bef9:c.instructions+=2;goto B75bef9;
case 0x75befb:c.instructions+=1;goto B75befb;
case 0x75befd:goto L75befd;
case 0x75bf00:c.instructions+=7;goto B75bf00;
case 0x75bf03:c.instructions+=6;goto B75bf03;
case 0x75bf09:c.instructions+=5;goto B75bf09;
case 0x75bf0f:c.instructions+=4;goto B75bf0f;
case 0x75bf12:c.instructions+=3;goto B75bf12;
case 0x75bf16:c.instructions+=2;goto B75bf16;
case 0x75bf19:c.instructions+=1;goto B75bf19;
case 0x75bf1b:goto L75bf1b;
case 0x75bf1e:c.instructions+=6;goto B75bf1e;
case 0x75bf21:c.instructions+=5;goto B75bf21;
case 0x75bf27:c.instructions+=4;goto B75bf27;
case 0x75bf2a:c.instructions+=3;goto B75bf2a;
case 0x75bf2e:c.instructions+=2;goto B75bf2e;
case 0x75bf31:c.instructions+=1;goto B75bf31;
case 0x75bf33:goto L75bf33;
case 0x75bf37:c.instructions+=2;goto B75bf37;
case 0x75bf3d:c.instructions+=1;goto B75bf3d;
case 0x75bf3f:goto L75bf3f;
case 0x75bf43:c.instructions+=1;goto B75bf43;
case 0x75bf47:goto L75bf47;
case 0x75bf48:c.instructions+=1;goto B75bf48;
case 0x75bf49:goto L75bf49;
case 0x75bf4a:c.instructions+=14;goto B75bf4a;
case 0x75bf4c:c.instructions+=13;goto B75bf4c;
case 0x75bf4d:c.instructions+=12;goto B75bf4d;
case 0x75bf4e:c.instructions+=11;goto B75bf4e;
case 0x75bf51:c.instructions+=10;goto B75bf51;
case 0x75bf54:c.instructions+=9;goto B75bf54;
case 0x75bf57:c.instructions+=8;goto B75bf57;
case 0x75bf5e:c.instructions+=7;goto B75bf5e;
case 0x75bf60:c.instructions+=6;goto B75bf60;
case 0x75bf66:c.instructions+=5;goto B75bf66;
case 0x75bf69:c.instructions+=4;goto B75bf69;
case 0x75bf6c:c.instructions+=3;goto B75bf6c;
case 0x75bf6f:c.instructions+=2;goto B75bf6f;
case 0x75bf72:c.instructions+=1;goto B75bf72;
case 0x75bf79:goto L75bf79;
case 0x75bf7a:c.instructions+=3;goto B75bf7a;
case 0x75bf7b:c.instructions+=2;goto B75bf7b;
case 0x75bf7e:c.instructions+=1;goto B75bf7e;
case 0x75bf80:goto L75bf80;
case 0x75bf81:c.instructions+=14;goto B75bf81;
case 0x75bf83:c.instructions+=13;goto B75bf83;
case 0x75bf84:c.instructions+=12;goto B75bf84;
case 0x75bf85:c.instructions+=11;goto B75bf85;
case 0x75bf86:c.instructions+=10;goto B75bf86;
case 0x75bf87:c.instructions+=9;goto B75bf87;
case 0x75bf88:c.instructions+=8;goto B75bf88;
case 0x75bf8f:c.instructions+=7;goto B75bf8f;
case 0x75bf92:c.instructions+=6;goto B75bf92;
case 0x75bf99:c.instructions+=5;goto B75bf99;
case 0x75bf9b:c.instructions+=4;goto B75bf9b;
case 0x75bf9e:c.instructions+=3;goto B75bf9e;
case 0x75bfa1:c.instructions+=2;goto B75bfa1;
case 0x75bfa4:c.instructions+=1;goto B75bfa4;
case 0x75bfa9:goto L75bfa9;
case 0x75bfac:c.instructions+=13;goto B75bfac;
case 0x75bfaf:c.instructions+=12;goto B75bfaf;
case 0x75bfb2:c.instructions+=11;goto B75bfb2;
case 0x75bfb5:c.instructions+=10;goto B75bfb5;
case 0x75bfb8:c.instructions+=9;goto B75bfb8;
case 0x75bfbf:c.instructions+=8;goto B75bfbf;
case 0x75bfc2:c.instructions+=7;goto B75bfc2;
case 0x75bfc4:c.instructions+=6;goto B75bfc4;
case 0x75bfcb:c.instructions+=5;goto B75bfcb;
case 0x75bfcc:c.instructions+=4;goto B75bfcc;
case 0x75bfcd:c.instructions+=3;goto B75bfcd;
case 0x75bfce:c.instructions+=2;goto B75bfce;
case 0x75bfcf:c.instructions+=1;goto B75bfcf;
case 0x75bfd2:goto L75bfd2;
case 0x75bfd3:c.instructions+=17;goto B75bfd3;
case 0x75bfd5:c.instructions+=16;goto B75bfd5;
case 0x75bfd8:c.instructions+=15;goto B75bfd8;
case 0x75bfd9:c.instructions+=14;goto B75bfd9;
case 0x75bfda:c.instructions+=13;goto B75bfda;
case 0x75bfdb:c.instructions+=12;goto B75bfdb;
case 0x75bfdc:c.instructions+=11;goto B75bfdc;
case 0x75bfdf:c.instructions+=10;goto B75bfdf;
case 0x75bfe1:c.instructions+=9;goto B75bfe1;
case 0x75bfe2:c.instructions+=8;goto B75bfe2;
case 0x75bfe3:c.instructions+=7;goto B75bfe3;
case 0x75bfe4:c.instructions+=6;goto B75bfe4;
case 0x75bfe7:c.instructions+=5;goto B75bfe7;
case 0x75bfea:c.instructions+=4;goto B75bfea;
case 0x75bfed:c.instructions+=3;goto B75bfed;
case 0x75bff0:c.instructions+=2;goto B75bff0;
case 0x75bff3:c.instructions+=1;goto B75bff3;
case 0x75bff8:goto L75bff8;
case 0x75bffb:c.instructions+=3;goto B75bffb;
case 0x75bffe:c.instructions+=2;goto B75bffe;
case 0x75bfff:c.instructions+=1;goto B75bfff;
default:missing_instruction(c.pc);}
B75b000:L75b000:{c.instructions+=6;NFSU2_TR(0x75b000);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B75b001:{NFSU2_TR(0x75b001);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B75b004:{NFSU2_TR(0x75b004);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B75b005:{NFSU2_TR(0x75b005);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B75b008:{NFSU2_TR(0x75b008);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75b00c:{NFSU2_TR(0x75b00c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x75afc7u,75a);}
}
B75b00e:L75b00e:{c.instructions+=2;NFSU2_TR(0x75b00e);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x21ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x21ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x21ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75b011:{NFSU2_TR(0x75b011);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L75b016;}}
}
B75b013:L75b013:{c.instructions+=1;NFSU2_TR(0x75b013);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+28)),r1(U+0));
}
B75b016:L75b016:{c.instructions+=6;NFSU2_TR(0x75b016);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75b017:{NFSU2_TR(0x75b017);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75b018:{NFSU2_TR(0x75b018);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75b019:{NFSU2_TR(0x75b019);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75b01a:{NFSU2_TR(0x75b01a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75b01b:{NFSU2_TR(0x75b01b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75b020:L75b020:{c.instructions+=6;NFSU2_TR(0x75b020);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b021:{NFSU2_TR(0x75b021);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75b025:{NFSU2_TR(0x75b025);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b026:{NFSU2_TR(0x75b026);
__builtin_memmove((R+24),(R+0),4);
}
B75b028:{NFSU2_TR(0x75b028);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x14ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x14ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75b02b:{NFSU2_TR(0x75b02b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L75b032;}}
}
B75b02d:L75b02d:{c.instructions+=1;NFSU2_TR(0x75b02d);
w4(R+24,u32(0x14ull));
}
B75b032:L75b032:{c.instructions+=3;NFSU2_TR(0x75b032);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75b034:{NFSU2_TR(0x75b034);
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
B75b036:{NFSU2_TR(0x75b036);
if(r1(R+518)){{goto L75b063;}}
}
B75b038:L75b038:{c.instructions+=1;NFSU2_TR(0x75b038);
{goto L75b040;}
}
B75b040:L75b040:{c.instructions+=13;NFSU2_TR(0x75b040);
__builtin_memmove((R+8),(R+0),4);
}
B75b042:{NFSU2_TR(0x75b042);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ull))));
}
B75b045:{NFSU2_TR(0x75b045);
w4(R+4,u32(0x3ull));
}
B75b04a:{NFSU2_TR(0x75b04a);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B75b04c:{NFSU2_TR(0x75b04c);
__builtin_memmove((R+8),(R+0),4);
}
B75b04e:{NFSU2_TR(0x75b04e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B75b051:{NFSU2_TR(0x75b051);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B75b055:{NFSU2_TR(0x75b055);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B75b058:{NFSU2_TR(0x75b058);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r1(U+0))));
}
B75b05a:{NFSU2_TR(0x75b05a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B75b05b:{NFSU2_TR(0x75b05b);
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
B75b05d:{NFSU2_TR(0x75b05d);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B75b061:{NFSU2_TR(0x75b061);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b040u);}goto L75b040;}}
}
B75b063:L75b063:{c.instructions+=3;NFSU2_TR(0x75b063);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75b064:{NFSU2_TR(0x75b064);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75b065:{NFSU2_TR(0x75b065);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75b070:L75b070:{c.instructions+=8;NFSU2_TR(0x75b070);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x148ull))));
}
B75b076:{NFSU2_TR(0x75b076);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b077:{NFSU2_TR(0x75b077);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b078:{NFSU2_TR(0x75b078);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b079:{NFSU2_TR(0x75b079);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b07a:{NFSU2_TR(0x75b07a);
u8 U[8];
w4(U+0,u32(u32(u32(0x15cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75b081:{NFSU2_TR(0x75b081);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B75b083:{NFSU2_TR(0x75b083);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B75b086:L75b086:{c.instructions+=14;NFSU2_TR(0x75b086);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+24,u32(r1(U+0)));
}
B75b089:{NFSU2_TR(0x75b089);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B75b08b:{NFSU2_TR(0x75b08b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+9),(U+4),1);
}
B75b08e:{NFSU2_TR(0x75b08e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B75b091:{NFSU2_TR(0x75b091);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B75b094:{NFSU2_TR(0x75b094);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B75b097:{NFSU2_TR(0x75b097);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+24))));
}
B75b099:{NFSU2_TR(0x75b099);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B75b09d:{NFSU2_TR(0x75b09d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B75b0a0:{NFSU2_TR(0x75b0a0);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+24))));
}
B75b0a2:{NFSU2_TR(0x75b0a2);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B75b0a6:{NFSU2_TR(0x75b0a6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B75b0a7:{NFSU2_TR(0x75b0a7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75b0aa:{NFSU2_TR(0x75b0aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b086u);}goto L75b086;}}
}
B75b0ac:L75b0ac:{c.instructions+=2;NFSU2_TR(0x75b0ac);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B75b0b0:{NFSU2_TR(0x75b0b0);
w4(R+8,u32(0x40ull));
}
B75b0b5:L75b0b5:{c.instructions+=15;NFSU2_TR(0x75b0b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75b0b8:{NFSU2_TR(0x75b0b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75b0bb:{NFSU2_TR(0x75b0bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B75b0be:{NFSU2_TR(0x75b0be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B75b0c0:{NFSU2_TR(0x75b0c0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+20))));
}
B75b0c2:{NFSU2_TR(0x75b0c2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+12))));
}
B75b0c4:{NFSU2_TR(0x75b0c4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+24))));
}
B75b0c6:{NFSU2_TR(0x75b0c6);
__builtin_memmove((R+24),(R+0),4);
}
B75b0c8:{NFSU2_TR(0x75b0c8);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B75b0cb:{NFSU2_TR(0x75b0cb);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+0))));
}
B75b0cd:{NFSU2_TR(0x75b0cd);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
}
B75b0cf:{NFSU2_TR(0x75b0cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75b0d2:{NFSU2_TR(0x75b0d2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B75b0d5:{NFSU2_TR(0x75b0d5);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B75b0d6:{NFSU2_TR(0x75b0d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b0b5u);}goto L75b0b5;}}
}
B75b0d8:L75b0d8:{c.instructions+=7;NFSU2_TR(0x75b0d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75b0db:{NFSU2_TR(0x75b0db);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75b0de:{NFSU2_TR(0x75b0de);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75b0e1:{NFSU2_TR(0x75b0e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75b0e4:{NFSU2_TR(0x75b0e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75b0e7:{NFSU2_TR(0x75b0e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75b0eb:{NFSU2_TR(0x75b0eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75b0f3:L75b0f3:{c.instructions+=28;NFSU2_TR(0x75b0f3);
__builtin_memmove((R+12),(R+0),4);
}
B75b0f5:{NFSU2_TR(0x75b0f5);
w4(R+12,u32(~u32(r4(R+12))));
}
B75b0f7:{NFSU2_TR(0x75b0f7);
w4(R+12,u32(u32(r4(R+12))&u32(r4(R+24))));
}
B75b0f9:{NFSU2_TR(0x75b0f9);
__builtin_memmove((R+28),(R+8),4);
}
B75b0fb:{NFSU2_TR(0x75b0fb);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+0))));
}
B75b0fd:{NFSU2_TR(0x75b0fd);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+28))));
}
B75b0ff:{NFSU2_TR(0x75b0ff);
__builtin_memmove((R+28),(R+4),4);
}
B75b101:{NFSU2_TR(0x75b101);
u8 U[4];
w4(U+0,u32(u32(u32(0x1bull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B75b104:{NFSU2_TR(0x75b104);
__builtin_memmove((R+20),(R+4),4);
}
B75b106:{NFSU2_TR(0x75b106);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B75b109:{NFSU2_TR(0x75b109);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+20))));
}
B75b10b:{NFSU2_TR(0x75b10b);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B75b10d:{NFSU2_TR(0x75b10d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75b111:{NFSU2_TR(0x75b111);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+12))));
}
B75b115:{NFSU2_TR(0x75b115);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75b119:{NFSU2_TR(0x75b119);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75b11d:{NFSU2_TR(0x75b11d);
__builtin_memmove((R+24),(R+8),4);
}
B75b11f:{NFSU2_TR(0x75b11f);
__builtin_memmove((R+8),(R+0),4);
}
B75b121:{NFSU2_TR(0x75b121);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B75b124:{NFSU2_TR(0x75b124);
u8 U[4];
w4(U+0,u32(u32(u32(0x1eull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B75b127:{NFSU2_TR(0x75b127);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B75b129:{NFSU2_TR(0x75b129);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B75b12a:{NFSU2_TR(0x75b12a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x14ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75b12d:{NFSU2_TR(0x75b12d);
u8 U[12];
w4(U+0,u32(u32(u32(0x5a827999ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B75b134:{NFSU2_TR(0x75b134);
__builtin_memmove((R+0),(R+4),4);
}
B75b136:{NFSU2_TR(0x75b136);
__builtin_memmove((R+4),(R+12),4);
}
B75b138:{NFSU2_TR(0x75b138);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75b13c:{NFSU2_TR(0x75b13c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b0f3u);}goto L75b0f3;}}
}
B75b13e:L75b13e:{c.instructions+=1;NFSU2_TR(0x75b13e);
__builtin_memmove((R+28),(R+28),4);
}
B75b140:L75b140:{c.instructions+=23;NFSU2_TR(0x75b140);
__builtin_memmove((R+12),(R+4),4);
}
B75b142:{NFSU2_TR(0x75b142);
u8 U[4];
w4(U+0,u32(u32(u32(0x1bull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B75b145:{NFSU2_TR(0x75b145);
__builtin_memmove((R+20),(R+4),4);
}
B75b147:{NFSU2_TR(0x75b147);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B75b14a:{NFSU2_TR(0x75b14a);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+20))));
}
B75b14c:{NFSU2_TR(0x75b14c);
__builtin_memmove((R+20),(R+24),4);
}
B75b14e:{NFSU2_TR(0x75b14e);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+8))));
}
B75b150:{NFSU2_TR(0x75b150);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+0))));
}
B75b152:{NFSU2_TR(0x75b152);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+20))));
}
B75b154:{NFSU2_TR(0x75b154);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+12))));
}
B75b158:{NFSU2_TR(0x75b158);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75b15c:{NFSU2_TR(0x75b15c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75b160:{NFSU2_TR(0x75b160);
__builtin_memmove((R+24),(R+8),4);
}
B75b162:{NFSU2_TR(0x75b162);
__builtin_memmove((R+8),(R+0),4);
}
B75b164:{NFSU2_TR(0x75b164);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B75b167:{NFSU2_TR(0x75b167);
u8 U[4];
w4(U+0,u32(u32(u32(0x1eull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B75b16a:{NFSU2_TR(0x75b16a);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B75b16c:{NFSU2_TR(0x75b16c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B75b16d:{NFSU2_TR(0x75b16d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x28ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75b170:{NFSU2_TR(0x75b170);
u8 U[12];
w4(U+0,u32(u32(u32(0x6ed9eba1ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B75b177:{NFSU2_TR(0x75b177);
__builtin_memmove((R+0),(R+4),4);
}
B75b179:{NFSU2_TR(0x75b179);
__builtin_memmove((R+4),(R+12),4);
}
B75b17b:{NFSU2_TR(0x75b17b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b140u);}goto L75b140;}}
}
B75b17d:L75b17d:{c.instructions+=1;NFSU2_TR(0x75b17d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75b181:L75b181:{c.instructions+=29;NFSU2_TR(0x75b181);
__builtin_memmove((R+28),(R+8),4);
}
B75b183:{NFSU2_TR(0x75b183);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B75b185:{NFSU2_TR(0x75b185);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+24))));
}
B75b187:{NFSU2_TR(0x75b187);
__builtin_memmove((R+12),(R+8),4);
}
B75b189:{NFSU2_TR(0x75b189);
w4(R+12,u32(u32(r4(R+12))&u32(r4(R+0))));
}
B75b18b:{NFSU2_TR(0x75b18b);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+12))));
}
B75b18d:{NFSU2_TR(0x75b18d);
__builtin_memmove((R+12),(R+4),4);
}
B75b18f:{NFSU2_TR(0x75b18f);
u8 U[4];
w4(U+0,u32(u32(u32(0x1bull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B75b192:{NFSU2_TR(0x75b192);
__builtin_memmove((R+20),(R+4),4);
}
B75b194:{NFSU2_TR(0x75b194);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B75b197:{NFSU2_TR(0x75b197);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+20))));
}
B75b199:{NFSU2_TR(0x75b199);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B75b19b:{NFSU2_TR(0x75b19b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B75b19f:{NFSU2_TR(0x75b19f);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+12))));
}
B75b1a3:{NFSU2_TR(0x75b1a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75b1a7:{NFSU2_TR(0x75b1a7);
u8 U[12];
w4(U+0,u32(u32(u32(0x8f1bbcdcull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B75b1ae:{NFSU2_TR(0x75b1ae);
__builtin_memmove((R+28),(R+24),4);
}
B75b1b0:{NFSU2_TR(0x75b1b0);
__builtin_memmove((R+24),(R+8),4);
}
B75b1b2:{NFSU2_TR(0x75b1b2);
__builtin_memmove((R+8),(R+0),4);
}
B75b1b4:{NFSU2_TR(0x75b1b4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B75b1b7:{NFSU2_TR(0x75b1b7);
u8 U[4];
w4(U+0,u32(u32(u32(0x1eull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B75b1ba:{NFSU2_TR(0x75b1ba);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B75b1bc:{NFSU2_TR(0x75b1bc);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B75b1bd:{NFSU2_TR(0x75b1bd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3cull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75b1c0:{NFSU2_TR(0x75b1c0);
__builtin_memmove((R+0),(R+4),4);
}
B75b1c2:{NFSU2_TR(0x75b1c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75b1c6:{NFSU2_TR(0x75b1c6);
__builtin_memmove((R+4),(R+20),4);
}
B75b1c8:{NFSU2_TR(0x75b1c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75b1cc:{NFSU2_TR(0x75b1cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b181u);}goto L75b181;}}
}
B75b1ce:L75b1ce:{c.instructions+=1;NFSU2_TR(0x75b1ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75b1d2:L75b1d2:{c.instructions+=24;NFSU2_TR(0x75b1d2);
__builtin_memmove((R+12),(R+4),4);
}
B75b1d4:{NFSU2_TR(0x75b1d4);
u8 U[4];
w4(U+0,u32(u32(u32(0x1bull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B75b1d7:{NFSU2_TR(0x75b1d7);
__builtin_memmove((R+20),(R+4),4);
}
B75b1d9:{NFSU2_TR(0x75b1d9);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B75b1dc:{NFSU2_TR(0x75b1dc);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+20))));
}
B75b1de:{NFSU2_TR(0x75b1de);
__builtin_memmove((R+20),(R+24),4);
}
B75b1e0:{NFSU2_TR(0x75b1e0);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+8))));
}
B75b1e2:{NFSU2_TR(0x75b1e2);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+0))));
}
B75b1e4:{NFSU2_TR(0x75b1e4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+20))));
}
B75b1e6:{NFSU2_TR(0x75b1e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75b1ea:{NFSU2_TR(0x75b1ea);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+12))));
}
B75b1ee:{NFSU2_TR(0x75b1ee);
u8 U[12];
w4(U+0,u32(u32(u32(0xca62c1d6ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B75b1f5:{NFSU2_TR(0x75b1f5);
__builtin_memmove((R+28),(R+24),4);
}
B75b1f7:{NFSU2_TR(0x75b1f7);
__builtin_memmove((R+24),(R+8),4);
}
B75b1f9:{NFSU2_TR(0x75b1f9);
__builtin_memmove((R+8),(R+0),4);
}
B75b1fb:{NFSU2_TR(0x75b1fb);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B75b1fe:{NFSU2_TR(0x75b1fe);
u8 U[4];
w4(U+0,u32(u32(u32(0x1eull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B75b201:{NFSU2_TR(0x75b201);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B75b203:{NFSU2_TR(0x75b203);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B75b204:{NFSU2_TR(0x75b204);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x50ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75b207:{NFSU2_TR(0x75b207);
__builtin_memmove((R+0),(R+4),4);
}
B75b209:{NFSU2_TR(0x75b209);
__builtin_memmove((R+4),(R+12),4);
}
B75b20b:{NFSU2_TR(0x75b20b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75b20f:{NFSU2_TR(0x75b20f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b1d2u);}goto L75b1d2;}}
}
B75b211:L75b211:{c.instructions+=22;NFSU2_TR(0x75b211);
u8 U[8];
w4(U+0,u32(u32(u32(0x15cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75b218:{NFSU2_TR(0x75b218);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75b21b:{NFSU2_TR(0x75b21b);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+12))));
}
B75b21d:{NFSU2_TR(0x75b21d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B75b220:{NFSU2_TR(0x75b220);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B75b222:{NFSU2_TR(0x75b222);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75b225:{NFSU2_TR(0x75b225);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B75b227:{NFSU2_TR(0x75b227);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75b22a:{NFSU2_TR(0x75b22a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75b22d:{NFSU2_TR(0x75b22d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B75b22f:{NFSU2_TR(0x75b22f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75b232:{NFSU2_TR(0x75b232);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75b235:{NFSU2_TR(0x75b235);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B75b237:{NFSU2_TR(0x75b237);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75b238:{NFSU2_TR(0x75b238);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75b239:{NFSU2_TR(0x75b239);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75b23c:{NFSU2_TR(0x75b23c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75b23d:{NFSU2_TR(0x75b23d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75b240:{NFSU2_TR(0x75b240);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75b243:{NFSU2_TR(0x75b243);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75b244:{NFSU2_TR(0x75b244);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x148ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x148ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x148ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75b24a:{NFSU2_TR(0x75b24a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75b250:L75b250:{c.instructions+=9;NFSU2_TR(0x75b250);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75b254:{NFSU2_TR(0x75b254);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B75b25a:{NFSU2_TR(0x75b25a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75b261:{NFSU2_TR(0x75b261);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x67452301ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75b268:{NFSU2_TR(0x75b268);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0xefcdab89ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75b26f:{NFSU2_TR(0x75b26f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x98badcfeull));
s4(u32(r4(U+0)),r4(U+4));
}
B75b276:{NFSU2_TR(0x75b276);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(0x10325476ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75b27d:{NFSU2_TR(0x75b27d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
w4(U+4,u32(0xc3d2e1f0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75b284:{NFSU2_TR(0x75b284);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75b290:L75b290:{c.instructions+=9;NFSU2_TR(0x75b290);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b291:{NFSU2_TR(0x75b291);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B75b295:{NFSU2_TR(0x75b295);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75b298:{NFSU2_TR(0x75b298);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75b29a:{NFSU2_TR(0x75b29a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b29b:{NFSU2_TR(0x75b29b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75b29f:{NFSU2_TR(0x75b29f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b2a0:{NFSU2_TR(0x75b2a0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b2a1:{NFSU2_TR(0x75b2a1);
if(r1(R+518)){{goto L75b2fd;}}
}
B75b2a3:L75b2a3:{c.instructions+=5;NFSU2_TR(0x75b2a3);
w4(R+0,u32(0x40ull));
}
B75b2a8:{NFSU2_TR(0x75b2a8);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B75b2aa:{NFSU2_TR(0x75b2aa);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75b2ac:{NFSU2_TR(0x75b2ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75b2b0:{NFSU2_TR(0x75b2b0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L75b2b4;}}
}
B75b2b2:L75b2b2:{c.instructions+=1;NFSU2_TR(0x75b2b2);
__builtin_memmove((R+0),(R+20),4);
}
B75b2b4:L75b2b4:{c.instructions+=5;NFSU2_TR(0x75b2b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75b2b8:{NFSU2_TR(0x75b2b8);
__builtin_memmove((R+4),(R+0),4);
}
B75b2ba:{NFSU2_TR(0x75b2ba);
u8 U[12];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75b2be:{NFSU2_TR(0x75b2be);
__builtin_memmove((R+8),(R+4),4);
}
B75b2c0:{NFSU2_TR(0x75b2c0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B75b2c3:L75b2c3:{c.instructions+=1;NFSU2_TR(0x75b2c3);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L75b2c5;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b2c3u);}goto L75b2c3;}
}
B75b2c5:L75b2c5:{c.instructions+=2;NFSU2_TR(0x75b2c5);
__builtin_memmove((R+4),(R+8),4);
}
B75b2c7:{NFSU2_TR(0x75b2c7);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B75b2ca:L75b2ca:{c.instructions+=1;NFSU2_TR(0x75b2ca);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L75b2cc;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b2cau);}goto L75b2ca;}
}
B75b2cc:L75b2cc:{c.instructions+=6;NFSU2_TR(0x75b2cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75b2d0:{NFSU2_TR(0x75b2d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75b2d4:{NFSU2_TR(0x75b2d4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B75b2d6:{NFSU2_TR(0x75b2d6);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+0))));
}
B75b2d8:{NFSU2_TR(0x75b2d8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75b2da:{NFSU2_TR(0x75b2da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75b2f8;}}
}
B75b2dc:L75b2dc:{c.instructions+=3;NFSU2_TR(0x75b2dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B75b2df:{NFSU2_TR(0x75b2df);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b2e0:{NFSU2_TR(0x75b2e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75b2e5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b070u);}goto L75b070;}
}
B75b2e5:L75b2e5:{c.instructions+=6;NFSU2_TR(0x75b2e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B75b2e7:{NFSU2_TR(0x75b2e7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75b2ea:{NFSU2_TR(0x75b2ea);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B75b2ed:{NFSU2_TR(0x75b2ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B75b2ef:{NFSU2_TR(0x75b2ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75b2f6:{NFSU2_TR(0x75b2f6);
{goto L75b301;}
}
B75b2f8:L75b2f8:{c.instructions+=2;NFSU2_TR(0x75b2f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B75b2fb:{NFSU2_TR(0x75b2fb);
{goto L75b301;}
}
B75b2fd:L75b2fd:{c.instructions+=1;NFSU2_TR(0x75b2fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75b301:L75b301:{c.instructions+=2;NFSU2_TR(0x75b301);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w1(R+512,u8((r4(U+0))<(u32(0x40ull))));
}
B75b304:{NFSU2_TR(0x75b304);
if(r1(R+512)){{goto L75b32b;}}
}
B75b306:L75b306:{c.instructions+=3;NFSU2_TR(0x75b306);
__builtin_memmove((R+28),(R+20),4);
}
B75b308:{NFSU2_TR(0x75b308);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B75b30b:{NFSU2_TR(0x75b30b);
{goto L75b310;}
}
B75b310:L75b310:{c.instructions+=3;NFSU2_TR(0x75b310);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b311:{NFSU2_TR(0x75b311);
__builtin_memmove((R+0),(R+24),4);
}
B75b313:{NFSU2_TR(0x75b313);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75b318ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b070u);}goto L75b070;}
}
B75b318:L75b318:{c.instructions+=8;NFSU2_TR(0x75b318);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B75b31a:{NFSU2_TR(0x75b31a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B75b31d:{NFSU2_TR(0x75b31d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75b320:{NFSU2_TR(0x75b320);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x40ull))));
}
B75b323:{NFSU2_TR(0x75b323);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B75b326:{NFSU2_TR(0x75b326);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B75b327:{NFSU2_TR(0x75b327);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B75b329:{NFSU2_TR(0x75b329);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b310u);}goto L75b310;}}
}
B75b32b:L75b32b:{c.instructions+=2;NFSU2_TR(0x75b32b);
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
B75b32d:{NFSU2_TR(0x75b32d);
if(r1(R+518)){{goto L75b349;}}
}
B75b32f:L75b32f:{c.instructions+=5;NFSU2_TR(0x75b32f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75b332:{NFSU2_TR(0x75b332);
__builtin_memmove((R+4),(R+20),4);
}
B75b334:{NFSU2_TR(0x75b334);
__builtin_memmove((R+8),(R+4),4);
}
B75b336:{NFSU2_TR(0x75b336);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B75b339:{NFSU2_TR(0x75b339);
u8 U[12];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75b33d:L75b33d:{c.instructions+=1;NFSU2_TR(0x75b33d);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L75b33f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b33du);}goto L75b33d;}
}
B75b33f:L75b33f:{c.instructions+=2;NFSU2_TR(0x75b33f);
__builtin_memmove((R+4),(R+8),4);
}
B75b341:{NFSU2_TR(0x75b341);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B75b344:L75b344:{c.instructions+=1;NFSU2_TR(0x75b344);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L75b346;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b344u);}goto L75b344;}
}
B75b346:L75b346:{c.instructions+=1;NFSU2_TR(0x75b346);
u8 U[14];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+20)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),r4(R+20)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+20))));
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
B75b349:L75b349:{c.instructions+=5;NFSU2_TR(0x75b349);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75b34a:{NFSU2_TR(0x75b34a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75b34b:{NFSU2_TR(0x75b34b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75b34c:{NFSU2_TR(0x75b34c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75b34d:{NFSU2_TR(0x75b34d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75b350:L75b350:{c.instructions+=12;NFSU2_TR(0x75b350);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b351:{NFSU2_TR(0x75b351);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b352:{NFSU2_TR(0x75b352);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75b356:{NFSU2_TR(0x75b356);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75b359:{NFSU2_TR(0x75b359);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+0))));
s4(u32(r4(R+24)),r4(U+0));
}
B75b35b:{NFSU2_TR(0x75b35b);
w4(R+8,u32(0x40ull));
}
B75b360:{NFSU2_TR(0x75b360);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B75b362:{NFSU2_TR(0x75b362);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B75b364:{NFSU2_TR(0x75b364);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x9ull))));
}
B75b367:{NFSU2_TR(0x75b367);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b368:{NFSU2_TR(0x75b368);
w1(R+4,u8(0x80ull));
}
B75b36a:{NFSU2_TR(0x75b36a);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L75b3a5;}}
}
B75b36c:L75b36c:{c.instructions+=5;NFSU2_TR(0x75b36c);
u8 U[13];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B75b370:{NFSU2_TR(0x75b370);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75b373:{NFSU2_TR(0x75b373);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B75b374:{NFSU2_TR(0x75b374);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x40ull))));
}
B75b377:{NFSU2_TR(0x75b377);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L75b394;}}
}
B75b379:L75b379:{c.instructions+=6;NFSU2_TR(0x75b379);
w4(R+4,u32(0x40ull));
}
B75b37e:{NFSU2_TR(0x75b37e);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B75b380:{NFSU2_TR(0x75b380);
__builtin_memmove((R+8),(R+4),4);
}
B75b382:{NFSU2_TR(0x75b382);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B75b385:{NFSU2_TR(0x75b385);
u8 U[12];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75b389:{NFSU2_TR(0x75b389);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75b38b:L75b38b:{c.instructions+=1;NFSU2_TR(0x75b38b);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L75b38d;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b38bu);}goto L75b38b;}
}
B75b38d:L75b38d:{c.instructions+=2;NFSU2_TR(0x75b38d);
__builtin_memmove((R+4),(R+8),4);
}
B75b38f:{NFSU2_TR(0x75b38f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B75b392:L75b392:{c.instructions+=1;NFSU2_TR(0x75b392);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L75b394;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b392u);}goto L75b392;}
}
B75b394:L75b394:{c.instructions+=3;NFSU2_TR(0x75b394);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B75b397:{NFSU2_TR(0x75b397);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b398:{NFSU2_TR(0x75b398);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75b39dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b070u);}goto L75b070;}
}
B75b39d:L75b39d:{c.instructions+=3;NFSU2_TR(0x75b39d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75b3a0:{NFSU2_TR(0x75b3a0);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B75b3a2:{NFSU2_TR(0x75b3a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75b3a5:L75b3a5:{c.instructions+=6;NFSU2_TR(0x75b3a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75b3a8:{NFSU2_TR(0x75b3a8);
u8 U[13];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B75b3ac:{NFSU2_TR(0x75b3ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75b3af:{NFSU2_TR(0x75b3af);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B75b3b0:{NFSU2_TR(0x75b3b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x38ull))));
}
B75b3b3:{NFSU2_TR(0x75b3b3);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L75b3d0;}}
}
B75b3b5:L75b3b5:{c.instructions+=6;NFSU2_TR(0x75b3b5);
w4(R+4,u32(0x38ull));
}
B75b3ba:{NFSU2_TR(0x75b3ba);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B75b3bc:{NFSU2_TR(0x75b3bc);
__builtin_memmove((R+8),(R+4),4);
}
B75b3be:{NFSU2_TR(0x75b3be);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B75b3c1:{NFSU2_TR(0x75b3c1);
u8 U[12];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75b3c5:{NFSU2_TR(0x75b3c5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75b3c7:L75b3c7:{c.instructions+=1;NFSU2_TR(0x75b3c7);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L75b3c9;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b3c7u);}goto L75b3c7;}
}
B75b3c9:L75b3c9:{c.instructions+=2;NFSU2_TR(0x75b3c9);
__builtin_memmove((R+4),(R+8),4);
}
B75b3cb:{NFSU2_TR(0x75b3cb);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B75b3ce:L75b3ce:{c.instructions+=1;NFSU2_TR(0x75b3ce);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L75b3d0;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b3ceu);}goto L75b3ce;}
}
B75b3d0:L75b3d0:{c.instructions+=21;NFSU2_TR(0x75b3d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B75b3d2:{NFSU2_TR(0x75b3d2);
__builtin_memmove((R+4),(R+0),4);
}
B75b3d4:{NFSU2_TR(0x75b3d4);
__builtin_memmove((R+8),(R+0),4);
}
B75b3d6:{NFSU2_TR(0x75b3d6);
u8 U[4];
w4(U+0,u32(u32(u32(0x1dull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B75b3d9:{NFSU2_TR(0x75b3d9);
u8 U[4];
w4(U+0,u32(u32(u32(0x15ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B75b3dc:{NFSU2_TR(0x75b3dc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x57ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75b3df:{NFSU2_TR(0x75b3df);
__builtin_memmove((R+4),(R+0),4);
}
B75b3e1:{NFSU2_TR(0x75b3e1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75b3e4:{NFSU2_TR(0x75b3e4);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+8),(U+0),1);
}
B75b3e6:{NFSU2_TR(0x75b3e6);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B75b3e9:{NFSU2_TR(0x75b3e9);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B75b3ec:{NFSU2_TR(0x75b3ec);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5aull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75b3ef:{NFSU2_TR(0x75b3ef);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w1(R+8,shl<u8>(r1(R+8),u64(r4(U+0))));
}
B75b3f2:{NFSU2_TR(0x75b3f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B75b3f5:{NFSU2_TR(0x75b3f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b3f6:{NFSU2_TR(0x75b3f6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75b3f9:{NFSU2_TR(0x75b3f9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x55ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75b3fc:{NFSU2_TR(0x75b3fc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x56ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75b3ff:{NFSU2_TR(0x75b3ff);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x59ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75b402:{NFSU2_TR(0x75b402);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5bull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75b405:{NFSU2_TR(0x75b405);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75b40aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b070u);}goto L75b070;}
}
B75b40a:L75b40a:{c.instructions+=4;NFSU2_TR(0x75b40a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75b40e:{NFSU2_TR(0x75b40e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75b412:{NFSU2_TR(0x75b412);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b413:{NFSU2_TR(0x75b413);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75b418ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b020u);}goto L75b020;}
}
B75b418:L75b418:{c.instructions+=5;NFSU2_TR(0x75b418);
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
B75b41b:{NFSU2_TR(0x75b41b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75b41c:{NFSU2_TR(0x75b41c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75b41d:{NFSU2_TR(0x75b41d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75b41e:{NFSU2_TR(0x75b41e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75b420:L75b420:{c.instructions+=11;NFSU2_TR(0x75b420);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b421:{NFSU2_TR(0x75b421);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75b425:{NFSU2_TR(0x75b425);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b426:{NFSU2_TR(0x75b426);
__builtin_memmove((R+28),(R+0),4);
}
B75b428:{NFSU2_TR(0x75b428);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B75b42b:{NFSU2_TR(0x75b42b);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B75b42d:{NFSU2_TR(0x75b42d);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B75b42f:{NFSU2_TR(0x75b42f);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B75b431:{NFSU2_TR(0x75b431);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75b433:{NFSU2_TR(0x75b433);
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
B75b435:{NFSU2_TR(0x75b435);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L75b461;}}
}
B75b437:L75b437:{c.instructions+=3;NFSU2_TR(0x75b437);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b438:{NFSU2_TR(0x75b438);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b439:{NFSU2_TR(0x75b439);
__builtin_memmove((R+16),(R+16),4);
}
B75b440:L75b440:{c.instructions+=11;NFSU2_TR(0x75b440);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(r2(U+4)));
}
B75b444:{NFSU2_TR(0x75b444);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B75b448:{NFSU2_TR(0x75b448);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x2ull))));
}
B75b44b:{NFSU2_TR(0x75b44b);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x2ull))));
}
B75b44e:{NFSU2_TR(0x75b44e);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+0))));
}
B75b450:{NFSU2_TR(0x75b450);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B75b453:{NFSU2_TR(0x75b453);
w1(R+512,u8((r4(R+24))<(u32(0x2ull))));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x2ull))));
}
B75b456:{NFSU2_TR(0x75b456);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+24)),r2(U+0));
}
B75b459:{NFSU2_TR(0x75b459);
u8 U[27];
w4(U+19,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
__builtin_memmove((U+23),(R+0),4);
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+19))));
w1(U+5,u8((r4(U+19))==(u32(0x0ull))));
w4(U+6,u32(u32(r4(U+19))-u32(u32(0x1ull))));
w4(U+10,shr<u32>(r4(U+23),u64(r4(U+6))));
w4(U+14,u32(u32(r4(U+10))&u32(u32(0x1ull))));
w1(U+18,u8((r4(U+14))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+5),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+5))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+18))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
}
B75b45c:{NFSU2_TR(0x75b45c);
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
B75b45d:{NFSU2_TR(0x75b45d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b440u);}goto L75b440;}}
}
B75b45f:L75b45f:{c.instructions+=2;NFSU2_TR(0x75b45f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75b460:{NFSU2_TR(0x75b460);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75b461:L75b461:{c.instructions+=3;NFSU2_TR(0x75b461);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75b462:{NFSU2_TR(0x75b462);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75b463:{NFSU2_TR(0x75b463);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75b470:L75b470:{c.instructions+=13;NFSU2_TR(0x75b470);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b471:{NFSU2_TR(0x75b471);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b472:{NFSU2_TR(0x75b472);
__builtin_memmove((R+24),(R+0),4);
}
B75b474:{NFSU2_TR(0x75b474);
__builtin_memmove((R+12),(R+4),4);
}
B75b476:{NFSU2_TR(0x75b476);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B75b479:{NFSU2_TR(0x75b479);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b47a:{NFSU2_TR(0x75b47a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75b47e:{NFSU2_TR(0x75b47e);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B75b480:{NFSU2_TR(0x75b480);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B75b482:{NFSU2_TR(0x75b482);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B75b484:{NFSU2_TR(0x75b484);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75b486:{NFSU2_TR(0x75b486);
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
B75b488:{NFSU2_TR(0x75b488);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L75b4b4;}}
}
B75b48a:L75b48a:{c.instructions+=2;NFSU2_TR(0x75b48a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b48b:{NFSU2_TR(0x75b48b);
{goto L75b490;}
}
B75b490:L75b490:{c.instructions+=13;NFSU2_TR(0x75b490);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B75b494:{NFSU2_TR(0x75b494);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(r2(U+4)));
}
B75b498:{NFSU2_TR(0x75b498);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x2ull))));
}
B75b49b:{NFSU2_TR(0x75b49b);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x2ull))));
}
B75b49e:{NFSU2_TR(0x75b49e);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+20))));
}
B75b4a0:{NFSU2_TR(0x75b4a0);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B75b4a2:{NFSU2_TR(0x75b4a2);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x2ull))));
}
B75b4a5:{NFSU2_TR(0x75b4a5);
u8 U[2];
__builtin_memmove((U+0),(R+4),2);
s2(u32(r4(R+28)),r2(U+0));
}
B75b4a8:{NFSU2_TR(0x75b4a8);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B75b4ab:{NFSU2_TR(0x75b4ab);
w1(R+512,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1ull))));
}
B75b4ae:{NFSU2_TR(0x75b4ae);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+12),u32(0x1ull)));
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75b4af:{NFSU2_TR(0x75b4af);
__builtin_memmove((R+0),(R+4),4);
}
B75b4b1:{NFSU2_TR(0x75b4b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b490u);}goto L75b490;}}
}
B75b4b3:L75b4b3:{c.instructions+=1;NFSU2_TR(0x75b4b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75b4b4:L75b4b4:{c.instructions+=4;NFSU2_TR(0x75b4b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75b4b5:{NFSU2_TR(0x75b4b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75b4b6:{NFSU2_TR(0x75b4b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75b4b7:{NFSU2_TR(0x75b4b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75b4c0:L75b4c0:{c.instructions+=15;NFSU2_TR(0x75b4c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x418ull))));
}
B75b4c6:{NFSU2_TR(0x75b4c6);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B75b4cb:{NFSU2_TR(0x75b4cb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b4cc:{NFSU2_TR(0x75b4cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x424ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B75b4d3:{NFSU2_TR(0x75b4d3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b4d4:{NFSU2_TR(0x75b4d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B75b4d7:{NFSU2_TR(0x75b4d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75b4db:{NFSU2_TR(0x75b4db);
__builtin_memmove((R+8),(R+4),4);
}
B75b4dd:{NFSU2_TR(0x75b4dd);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B75b4e0:{NFSU2_TR(0x75b4e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x41cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75b4e7:{NFSU2_TR(0x75b4e7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b4e8:{NFSU2_TR(0x75b4e8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b4e9:{NFSU2_TR(0x75b4e9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75b4eb:{NFSU2_TR(0x75b4eb);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B75b4ef:{NFSU2_TR(0x75b4ef);
__builtin_memmove((R+28),(R+24),4);
}
B75b4f1:L75b4f1:{c.instructions+=1;NFSU2_TR(0x75b4f1);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L75b4f3;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b4f1u);}goto L75b4f1;}
}
B75b4f3:L75b4f3:{c.instructions+=2;NFSU2_TR(0x75b4f3);
__builtin_memmove((R+4),(R+8),4);
}
B75b4f5:{NFSU2_TR(0x75b4f5);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B75b4f8:L75b4f8:{c.instructions+=1;NFSU2_TR(0x75b4f8);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L75b4fa;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b4f8u);}goto L75b4f8;}
}
B75b4fa:L75b4fa:{c.instructions+=8;NFSU2_TR(0x75b4fa);
__builtin_memmove((R+0),(R+12),4);
}
B75b4fc:{NFSU2_TR(0x75b4fc);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B75b4ff:{NFSU2_TR(0x75b4ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B75b502:{NFSU2_TR(0x75b502);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B75b504:{NFSU2_TR(0x75b504);
u8 U[4];
w4(U+0,u32(u32(u32(0x224ull))+u32(r4(R+16))));
__builtin_memmove((R+20),(U+0),4);
}
B75b50b:{NFSU2_TR(0x75b50b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75b50f:{NFSU2_TR(0x75b50f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75b513:{NFSU2_TR(0x75b513);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L75b611;}}
}
B75b519:L75b519:{c.instructions+=3;NFSU2_TR(0x75b519);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B75b51b:{NFSU2_TR(0x75b51b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B75b51c:{NFSU2_TR(0x75b51c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75b520:L75b520:{c.instructions+=7;NFSU2_TR(0x75b520);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75b524:{NFSU2_TR(0x75b524);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B75b526:{NFSU2_TR(0x75b526);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B75b528:{NFSU2_TR(0x75b528);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75b52a:{NFSU2_TR(0x75b52a);
__builtin_memmove((R+4),(R+0),4);
}
B75b52c:{NFSU2_TR(0x75b52c);
__builtin_memmove((R+8),(R+0),4);
}
B75b52e:{NFSU2_TR(0x75b52e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L75b566;}}
}
B75b530:L75b530:{c.instructions+=1;NFSU2_TR(0x75b530);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75b534:L75b534:{c.instructions+=13;NFSU2_TR(0x75b534);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(r2(U+4)));
}
B75b538:{NFSU2_TR(0x75b538);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B75b53c:{NFSU2_TR(0x75b53c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
}
B75b53f:{NFSU2_TR(0x75b53f);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x2ull))));
}
B75b542:{NFSU2_TR(0x75b542);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+28))));
}
B75b544:{NFSU2_TR(0x75b544);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B75b547:{NFSU2_TR(0x75b547);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B75b54b:{NFSU2_TR(0x75b54b);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x2ull))));
}
B75b54e:{NFSU2_TR(0x75b54e);
u8 U[2];
__builtin_memmove((U+0),(R+28),2);
s2(u32(r4(R+8)),r2(U+0));
}
B75b551:{NFSU2_TR(0x75b551);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B75b554:{NFSU2_TR(0x75b554);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B75b555:{NFSU2_TR(0x75b555);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75b559:{NFSU2_TR(0x75b559);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b534u);}goto L75b534;}}
}
B75b55b:L75b55b:{c.instructions+=2;NFSU2_TR(0x75b55b);
u8 U[8];
w4(U+0,u32(u32(u32(0x430ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B75b562:{NFSU2_TR(0x75b562);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75b566:L75b566:{c.instructions+=5;NFSU2_TR(0x75b566);
u8 U[8];
w4(U+0,u32(u32(u32(0x43cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75b56d:{NFSU2_TR(0x75b56d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b56e:{NFSU2_TR(0x75b56e);
__builtin_memmove((R+8),(R+24),4);
}
B75b570:{NFSU2_TR(0x75b570);
__builtin_memmove((R+4),(R+12),4);
}
B75b572:{NFSU2_TR(0x75b572);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75b577ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b470u);}goto L75b470;}
}
B75b577:L75b577:{c.instructions+=3;NFSU2_TR(0x75b577);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75b57a:{NFSU2_TR(0x75b57a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75b57c:{NFSU2_TR(0x75b57c);
if(r1(R+518)){{goto L75b582;}}
}
B75b57e:L75b57e:{c.instructions+=2;NFSU2_TR(0x75b57e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75b580:{NFSU2_TR(0x75b580);
if(r1(R+518)){{goto L75b58c;}}
}
B75b582:L75b582:{c.instructions+=4;NFSU2_TR(0x75b582);
__builtin_memmove((R+0),(R+24),4);
}
B75b584:{NFSU2_TR(0x75b584);
__builtin_memmove((R+24),(R+20),4);
}
B75b586:{NFSU2_TR(0x75b586);
__builtin_memmove((R+20),(R+0),4);
}
B75b588:{NFSU2_TR(0x75b588);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75b58c:L75b58c:{c.instructions+=3;NFSU2_TR(0x75b58c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75b590:{NFSU2_TR(0x75b590);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x8000000full))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B75b596:{NFSU2_TR(0x75b596);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L75b59d;}}
}
B75b598:L75b598:{c.instructions+=3;NFSU2_TR(0x75b598);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B75b599:{NFSU2_TR(0x75b599);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xfffffff0ull))));
}
B75b59c:{NFSU2_TR(0x75b59c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B75b59d:L75b59d:{c.instructions+=10;NFSU2_TR(0x75b59d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75b5a1:{NFSU2_TR(0x75b5a1);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B75b5a2:{NFSU2_TR(0x75b5a2);
w4(R+28,u32(0x1ull));
}
B75b5a7:{NFSU2_TR(0x75b5a7);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfull))));
}
B75b5aa:{NFSU2_TR(0x75b5aa);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B75b5ac:{NFSU2_TR(0x75b5ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x434ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75b5b3:{NFSU2_TR(0x75b5b3);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B75b5b5:{NFSU2_TR(0x75b5b5);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B75b5b8:{NFSU2_TR(0x75b5b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w2(U+10,u16(u32(r2(U+8))&u32(r2(R+28))));
w1(R+518,u8((r2(U+10))==(u16(0x0ull))));
}
B75b5bc:{NFSU2_TR(0x75b5bc);
if(r1(R+518)){{goto L75b5f7;}}
}
B75b5be:L75b5be:{c.instructions+=5;NFSU2_TR(0x75b5be);
u8 U[8];
w4(U+0,u32(u32(u32(0x438ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75b5c5:{NFSU2_TR(0x75b5c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b5c6:{NFSU2_TR(0x75b5c6);
__builtin_memmove((R+4),(R+24),4);
}
B75b5c8:{NFSU2_TR(0x75b5c8);
__builtin_memmove((R+0),(R+12),4);
}
B75b5ca:{NFSU2_TR(0x75b5ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75b5cfull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b420u);}goto L75b420;}
}
B75b5cf:L75b5cf:{c.instructions+=6;NFSU2_TR(0x75b5cf);
__builtin_memmove((R+28),(R+0),4);
}
B75b5d1:{NFSU2_TR(0x75b5d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x440ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75b5d8:{NFSU2_TR(0x75b5d8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b5d9:{NFSU2_TR(0x75b5d9);
__builtin_memmove((R+8),(R+24),4);
}
B75b5db:{NFSU2_TR(0x75b5db);
__builtin_memmove((R+4),(R+12),4);
}
B75b5dd:{NFSU2_TR(0x75b5dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75b5e2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b470u);}goto L75b470;}
}
B75b5e2:L75b5e2:{c.instructions+=3;NFSU2_TR(0x75b5e2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B75b5e5:{NFSU2_TR(0x75b5e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75b5e7:{NFSU2_TR(0x75b5e7);
if(r1(R+518)){{goto L75b5ed;}}
}
B75b5e9:L75b5e9:{c.instructions+=2;NFSU2_TR(0x75b5e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75b5eb:{NFSU2_TR(0x75b5eb);
if(r1(R+518)){{goto L75b5f7;}}
}
B75b5ed:L75b5ed:{c.instructions+=4;NFSU2_TR(0x75b5ed);
__builtin_memmove((R+0),(R+24),4);
}
B75b5ef:{NFSU2_TR(0x75b5ef);
__builtin_memmove((R+24),(R+20),4);
}
B75b5f1:{NFSU2_TR(0x75b5f1);
__builtin_memmove((R+20),(R+0),4);
}
B75b5f3:{NFSU2_TR(0x75b5f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75b5f7:L75b5f7:{c.instructions+=8;NFSU2_TR(0x75b5f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75b5fb:{NFSU2_TR(0x75b5fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75b5ff:{NFSU2_TR(0x75b5ff);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B75b600:{NFSU2_TR(0x75b600);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B75b601:{NFSU2_TR(0x75b601);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B75b603:{NFSU2_TR(0x75b603);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75b607:{NFSU2_TR(0x75b607);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75b60b:{NFSU2_TR(0x75b60b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b520u);}goto L75b520;}}
}
B75b611:L75b611:{c.instructions+=4;NFSU2_TR(0x75b611);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75b615:{NFSU2_TR(0x75b615);
u8 U[8];
w4(U+0,u32(u32(u32(0x42cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75b61c:{NFSU2_TR(0x75b61c);
__builtin_memmove((R+8),(R+4),4);
}
B75b61e:{NFSU2_TR(0x75b61e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B75b621:L75b621:{c.instructions+=1;NFSU2_TR(0x75b621);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L75b623;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b621u);}goto L75b621;}
}
B75b623:L75b623:{c.instructions+=2;NFSU2_TR(0x75b623);
__builtin_memmove((R+4),(R+8),4);
}
B75b625:{NFSU2_TR(0x75b625);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B75b628:L75b628:{c.instructions+=1;NFSU2_TR(0x75b628);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L75b62a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b628u);}goto L75b628;}
}
B75b62a:L75b62a:{c.instructions+=6;NFSU2_TR(0x75b62a);
u8 U[8];
w4(U+0,u32(u32(u32(0x424ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75b631:{NFSU2_TR(0x75b631);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75b632:{NFSU2_TR(0x75b632);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75b633:{NFSU2_TR(0x75b633);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75b634:{NFSU2_TR(0x75b634);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75b635:{NFSU2_TR(0x75b635);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75b63aull));
TAIL_STATIC(0x76115eu,761);
}
B75b63a:L75b63a:{c.instructions+=2;NFSU2_TR(0x75b63a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x418ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x418ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x418ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75b640:{NFSU2_TR(0x75b640);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75b650:L75b650:{c.instructions+=21;NFSU2_TR(0x75b650);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B75b653:{NFSU2_TR(0x75b653);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b654:{NFSU2_TR(0x75b654);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b655:{NFSU2_TR(0x75b655);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75b659:{NFSU2_TR(0x75b659);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b65a:{NFSU2_TR(0x75b65a);
__builtin_memmove((R+24),(R+8),4);
}
B75b65c:{NFSU2_TR(0x75b65c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b65d:{NFSU2_TR(0x75b65d);
__builtin_memmove((R+28),(R+0),4);
}
B75b65f:{NFSU2_TR(0x75b65f);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B75b660:{NFSU2_TR(0x75b660);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B75b662:{NFSU2_TR(0x75b662);
__builtin_memmove((R+12),(R+4),4);
}
B75b664:{NFSU2_TR(0x75b664);
__builtin_memmove((R+4),(R+0),4);
}
B75b666:{NFSU2_TR(0x75b666);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75b669:{NFSU2_TR(0x75b669);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B75b66a:{NFSU2_TR(0x75b66a);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B75b66c:{NFSU2_TR(0x75b66c);
__builtin_memmove((R+8),(R+0),4);
}
B75b66e:{NFSU2_TR(0x75b66e);
w4(R+4,sar<u32>(r4(R+4),u64(u32(0x1ull))));
}
B75b670:{NFSU2_TR(0x75b670);
w4(R+8,sar<u32>(r4(R+8),u64(u32(0x1ull))));
}
B75b672:{NFSU2_TR(0x75b672);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B75b674:{NFSU2_TR(0x75b674);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75b678:{NFSU2_TR(0x75b678);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L75b67e;}}
}
B75b67a:L75b67a:{c.instructions+=2;NFSU2_TR(0x75b67a);
__builtin_memmove((R+12),(R+8),4);
}
B75b67c:{NFSU2_TR(0x75b67c);
{goto L75b6a4;}
}
B75b67e:L75b67e:{c.instructions+=2;NFSU2_TR(0x75b67e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75b680:{NFSU2_TR(0x75b680);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L75b6a4;}}
}
B75b682:L75b682:{c.instructions+=6;NFSU2_TR(0x75b682);
__builtin_memmove((R+4),(R+12),4);
}
B75b684:{NFSU2_TR(0x75b684);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B75b686:{NFSU2_TR(0x75b686);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75b68a:{NFSU2_TR(0x75b68a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75b68c:{NFSU2_TR(0x75b68c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(u32(0x1ull))));
w1(R+512,u8((r4(U+0))!=(u32(0x0ull))));
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B75b68e:{NFSU2_TR(0x75b68e);
__builtin_memmove((R+28),(R+24),4);
}
B75b690:L75b690:{c.instructions+=1;NFSU2_TR(0x75b690);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L75b692;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b690u);}goto L75b690;}
}
B75b692:L75b692:{c.instructions+=1;NFSU2_TR(0x75b692);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))+u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))+u32(r4(U+0))));
}
B75b694:L75b694:{c.instructions+=1;NFSU2_TR(0x75b694);
u8 U[19];
w1(U+18,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+18)){{goto L75b697;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b694u);}goto L75b694;}
}
B75b697:L75b697:{c.instructions+=4;NFSU2_TR(0x75b697);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75b69b:{NFSU2_TR(0x75b69b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75b69f:{NFSU2_TR(0x75b69f);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B75b6a1:{NFSU2_TR(0x75b6a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B75b6a4:L75b6a4:{c.instructions+=2;NFSU2_TR(0x75b6a4);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75b6a6:{NFSU2_TR(0x75b6a6);
if(r1(R+518)){{goto L75b6b5;}}
}
B75b6a8:L75b6a8:{c.instructions+=5;NFSU2_TR(0x75b6a8);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+20))),1);
w2(R+0,u16(r1(U+0)));
}
B75b6ad:{NFSU2_TR(0x75b6ad);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+24)),r2(U+0));
}
B75b6b0:{NFSU2_TR(0x75b6b0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B75b6b3:{NFSU2_TR(0x75b6b3);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B75b6b4:{NFSU2_TR(0x75b6b4);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B75b6b5:L75b6b5:{c.instructions+=2;NFSU2_TR(0x75b6b5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75b6b7:{NFSU2_TR(0x75b6b7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L75b6d5;}}
}
B75b6b9:L75b6b9:{c.instructions+=1;NFSU2_TR(0x75b6b9);
__builtin_memmove((R+16),(R+16),4);
}
B75b6c0:L75b6c0:{c.instructions+=8;NFSU2_TR(0x75b6c0);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B75b6c2:{NFSU2_TR(0x75b6c2);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+20))),1);
__builtin_memmove((R+5),(U+0),1);
}
B75b6c5:{NFSU2_TR(0x75b6c5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B75b6c8:{NFSU2_TR(0x75b6c8);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x2ull))));
}
B75b6cb:{NFSU2_TR(0x75b6cb);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B75b6cc:{NFSU2_TR(0x75b6cc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B75b6cf:{NFSU2_TR(0x75b6cf);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B75b6d3:{NFSU2_TR(0x75b6d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b6c0u);}goto L75b6c0;}}
}
B75b6d5:L75b6d5:{c.instructions+=7;NFSU2_TR(0x75b6d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75b6d6:{NFSU2_TR(0x75b6d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75b6d7:{NFSU2_TR(0x75b6d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75b6d8:{NFSU2_TR(0x75b6d8);
__builtin_memmove((R+0),(R+8),4);
}
B75b6da:{NFSU2_TR(0x75b6da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75b6db:{NFSU2_TR(0x75b6db);
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
B75b6de:{NFSU2_TR(0x75b6de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75b6e0:L75b6e0:{c.instructions+=17;NFSU2_TR(0x75b6e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b6e1:{NFSU2_TR(0x75b6e1);
__builtin_memmove((R+20),(R+16),4);
}
B75b6e3:{NFSU2_TR(0x75b6e3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B75b6e6:{NFSU2_TR(0x75b6e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x60cull))));
}
B75b6ec:{NFSU2_TR(0x75b6ec);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B75b6f1:{NFSU2_TR(0x75b6f1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b6f2:{NFSU2_TR(0x75b6f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B75b6f5:{NFSU2_TR(0x75b6f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x60cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75b6fc:{NFSU2_TR(0x75b6fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75b6ff:{NFSU2_TR(0x75b6ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b700:{NFSU2_TR(0x75b700);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b701:{NFSU2_TR(0x75b701);
__builtin_memmove((R+28),(R+4),4);
}
B75b703:{NFSU2_TR(0x75b703);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b704:{NFSU2_TR(0x75b704);
__builtin_memmove((R+0),(R+12),4);
}
B75b706:{NFSU2_TR(0x75b706);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B75b709:{NFSU2_TR(0x75b709);
u8 U[4];
w4(U+0,u32(u32(u32(0x214ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B75b710:{NFSU2_TR(0x75b710);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75b715ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b650u);}goto L75b650;}
}
B75b715:L75b715:{c.instructions+=7;NFSU2_TR(0x75b715);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75b718:{NFSU2_TR(0x75b718);
__builtin_memmove((R+24),(R+0),4);
}
B75b71a:{NFSU2_TR(0x75b71a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b71b:{NFSU2_TR(0x75b71b);
__builtin_memmove((R+0),(R+12),4);
}
B75b71d:{NFSU2_TR(0x75b71d);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B75b720:{NFSU2_TR(0x75b720);
u8 U[4];
w4(U+0,u32(u32(u32(0x418ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B75b727:{NFSU2_TR(0x75b727);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75b72cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b650u);}goto L75b650;}
}
B75b72c:L75b72c:{c.instructions+=5;NFSU2_TR(0x75b72c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B75b72f:{NFSU2_TR(0x75b72f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B75b731:{NFSU2_TR(0x75b731);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75b733:{NFSU2_TR(0x75b733);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75b735:{NFSU2_TR(0x75b735);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L75ba05;}}
}
B75b73b:L75b73b:{c.instructions+=1;NFSU2_TR(0x75b73b);
{goto L75b740;}
}
B75b740:L75b740:{c.instructions+=7;NFSU2_TR(0x75b740);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75b743:{NFSU2_TR(0x75b743);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B75b747:{NFSU2_TR(0x75b747);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B75b74a:{NFSU2_TR(0x75b74a);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+4))));
}
B75b74c:{NFSU2_TR(0x75b74c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B75b74d:{NFSU2_TR(0x75b74d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B75b74f:{NFSU2_TR(0x75b74f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b740u);}goto L75b740;}}
}
B75b751:L75b751:{c.instructions+=2;NFSU2_TR(0x75b751);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75b754:{NFSU2_TR(0x75b754);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75b79a;}}
}
B75b756:L75b756:{c.instructions+=10;NFSU2_TR(0x75b756);
u8 U[4];
w4(U+0,u32(u32(u32(0x210ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B75b75d:{NFSU2_TR(0x75b75d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b75e:{NFSU2_TR(0x75b75e);
u8 U[4];
w4(U+0,u32(u32(u32(0x414ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B75b765:{NFSU2_TR(0x75b765);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b766:{NFSU2_TR(0x75b766);
__builtin_memmove((R+4),(R+0),4);
}
B75b768:{NFSU2_TR(0x75b768);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b769:{NFSU2_TR(0x75b769);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B75b76d:{NFSU2_TR(0x75b76d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b76e:{NFSU2_TR(0x75b76e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b76f:{NFSU2_TR(0x75b76f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75b774ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b4c0u);}goto L75b4c0;}
}
B75b774:L75b774:{c.instructions+=10;NFSU2_TR(0x75b774);
u8 U[4];
w4(U+0,u32(u32(u32(0x224ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B75b77b:{NFSU2_TR(0x75b77b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b77c:{NFSU2_TR(0x75b77c);
u8 U[4];
w4(U+0,u32(u32(u32(0x428ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B75b783:{NFSU2_TR(0x75b783);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b784:{NFSU2_TR(0x75b784);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B75b788:{NFSU2_TR(0x75b788);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b789:{NFSU2_TR(0x75b789);
__builtin_memmove((R+0),(R+8),4);
}
B75b78b:{NFSU2_TR(0x75b78b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b78c:{NFSU2_TR(0x75b78c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b78d:{NFSU2_TR(0x75b78d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75b792ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b4c0u);}goto L75b4c0;}
}
B75b792:L75b792:{c.instructions+=2;NFSU2_TR(0x75b792);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B75b795:{NFSU2_TR(0x75b795);
{goto L75ba6b;}
}
B75b79a:L75b79a:{c.instructions+=2;NFSU2_TR(0x75b79a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75b79d:{NFSU2_TR(0x75b79d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75b835;}}
}
B75b7a3:L75b7a3:{c.instructions+=10;NFSU2_TR(0x75b7a3);
u8 U[4];
w4(U+0,u32(u32(u32(0x210ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B75b7aa:{NFSU2_TR(0x75b7aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b7ab:{NFSU2_TR(0x75b7ab);
u8 U[4];
w4(U+0,u32(u32(u32(0x414ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B75b7b2:{NFSU2_TR(0x75b7b2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b7b3:{NFSU2_TR(0x75b7b3);
__builtin_memmove((R+0),(R+8),4);
}
B75b7b5:{NFSU2_TR(0x75b7b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b7b6:{NFSU2_TR(0x75b7b6);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B75b7ba:{NFSU2_TR(0x75b7ba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b7bb:{NFSU2_TR(0x75b7bb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b7bc:{NFSU2_TR(0x75b7bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75b7c1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b4c0u);}goto L75b4c0;}
}
B75b7c1:L75b7c1:{c.instructions+=10;NFSU2_TR(0x75b7c1);
u8 U[4];
w4(U+0,u32(u32(u32(0x224ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B75b7c8:{NFSU2_TR(0x75b7c8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b7c9:{NFSU2_TR(0x75b7c9);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B75b7cd:{NFSU2_TR(0x75b7cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b7ce:{NFSU2_TR(0x75b7ce);
__builtin_memmove((R+4),(R+0),4);
}
B75b7d0:{NFSU2_TR(0x75b7d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b7d1:{NFSU2_TR(0x75b7d1);
__builtin_memmove((R+8),(R+0),4);
}
B75b7d3:{NFSU2_TR(0x75b7d3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b7d4:{NFSU2_TR(0x75b7d4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b7d5:{NFSU2_TR(0x75b7d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75b7daull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b4c0u);}goto L75b4c0;}
}
B75b7da:L75b7da:{c.instructions+=10;NFSU2_TR(0x75b7da);
u8 U[4];
w4(U+0,u32(u32(u32(0x238ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B75b7e1:{NFSU2_TR(0x75b7e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b7e2:{NFSU2_TR(0x75b7e2);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B75b7e6:{NFSU2_TR(0x75b7e6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b7e7:{NFSU2_TR(0x75b7e7);
__builtin_memmove((R+8),(R+4),4);
}
B75b7e9:{NFSU2_TR(0x75b7e9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b7ea:{NFSU2_TR(0x75b7ea);
__builtin_memmove((R+0),(R+4),4);
}
B75b7ec:{NFSU2_TR(0x75b7ec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b7ed:{NFSU2_TR(0x75b7ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b7ee:{NFSU2_TR(0x75b7ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75b7f3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b4c0u);}goto L75b4c0;}
}
B75b7f3:L75b7f3:{c.instructions+=10;NFSU2_TR(0x75b7f3);
u8 U[4];
w4(U+0,u32(u32(u32(0x24cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B75b7fa:{NFSU2_TR(0x75b7fa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b7fb:{NFSU2_TR(0x75b7fb);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B75b7ff:{NFSU2_TR(0x75b7ff);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b800:{NFSU2_TR(0x75b800);
__builtin_memmove((R+0),(R+8),4);
}
B75b802:{NFSU2_TR(0x75b802);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b803:{NFSU2_TR(0x75b803);
__builtin_memmove((R+4),(R+8),4);
}
B75b805:{NFSU2_TR(0x75b805);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b806:{NFSU2_TR(0x75b806);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b807:{NFSU2_TR(0x75b807);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75b80cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b4c0u);}goto L75b4c0;}
}
B75b80c:L75b80c:{c.instructions+=11;NFSU2_TR(0x75b80c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x50ull))));
}
B75b80f:{NFSU2_TR(0x75b80f);
u8 U[4];
w4(U+0,u32(u32(u32(0x210ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B75b816:{NFSU2_TR(0x75b816);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b817:{NFSU2_TR(0x75b817);
u8 U[4];
w4(U+0,u32(u32(u32(0x414ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B75b81e:{NFSU2_TR(0x75b81e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b81f:{NFSU2_TR(0x75b81f);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B75b823:{NFSU2_TR(0x75b823);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b824:{NFSU2_TR(0x75b824);
__builtin_memmove((R+8),(R+4),4);
}
B75b826:{NFSU2_TR(0x75b826);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b827:{NFSU2_TR(0x75b827);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b828:{NFSU2_TR(0x75b828);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75b82dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b4c0u);}goto L75b4c0;}
}
B75b82d:L75b82d:{c.instructions+=2;NFSU2_TR(0x75b82d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B75b830:{NFSU2_TR(0x75b830);
{goto L75ba6b;}
}
B75b835:L75b835:{c.instructions+=2;NFSU2_TR(0x75b835);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10001ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75b83b:{NFSU2_TR(0x75b83b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75ba05;}}
}
B75b841:L75b841:{c.instructions+=10;NFSU2_TR(0x75b841);
u8 U[4];
w4(U+0,u32(u32(u32(0x210ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B75b848:{NFSU2_TR(0x75b848);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b849:{NFSU2_TR(0x75b849);
u8 U[4];
w4(U+0,u32(u32(u32(0x414ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B75b850:{NFSU2_TR(0x75b850);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b851:{NFSU2_TR(0x75b851);
__builtin_memmove((R+8),(R+4),4);
}
B75b853:{NFSU2_TR(0x75b853);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b854:{NFSU2_TR(0x75b854);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B75b858:{NFSU2_TR(0x75b858);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b859:{NFSU2_TR(0x75b859);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b85a:{NFSU2_TR(0x75b85a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75b85full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b4c0u);}goto L75b4c0;}
}
B75b85f:L75b85f:{c.instructions+=10;NFSU2_TR(0x75b85f);
u8 U[4];
w4(U+0,u32(u32(u32(0x224ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B75b866:{NFSU2_TR(0x75b866);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b867:{NFSU2_TR(0x75b867);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B75b86b:{NFSU2_TR(0x75b86b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b86c:{NFSU2_TR(0x75b86c);
__builtin_memmove((R+0),(R+8),4);
}
B75b86e:{NFSU2_TR(0x75b86e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b86f:{NFSU2_TR(0x75b86f);
__builtin_memmove((R+4),(R+8),4);
}
B75b871:{NFSU2_TR(0x75b871);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b872:{NFSU2_TR(0x75b872);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b873:{NFSU2_TR(0x75b873);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75b878ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b4c0u);}goto L75b4c0;}
}
B75b878:L75b878:{c.instructions+=10;NFSU2_TR(0x75b878);
u8 U[4];
w4(U+0,u32(u32(u32(0x238ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B75b87f:{NFSU2_TR(0x75b87f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b880:{NFSU2_TR(0x75b880);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B75b884:{NFSU2_TR(0x75b884);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b885:{NFSU2_TR(0x75b885);
__builtin_memmove((R+4),(R+0),4);
}
B75b887:{NFSU2_TR(0x75b887);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b888:{NFSU2_TR(0x75b888);
__builtin_memmove((R+8),(R+0),4);
}
B75b88a:{NFSU2_TR(0x75b88a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b88b:{NFSU2_TR(0x75b88b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b88c:{NFSU2_TR(0x75b88c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75b891ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b4c0u);}goto L75b4c0;}
}
B75b891:L75b891:{c.instructions+=10;NFSU2_TR(0x75b891);
u8 U[4];
w4(U+0,u32(u32(u32(0x24cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B75b898:{NFSU2_TR(0x75b898);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b899:{NFSU2_TR(0x75b899);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B75b89d:{NFSU2_TR(0x75b89d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b89e:{NFSU2_TR(0x75b89e);
__builtin_memmove((R+8),(R+4),4);
}
B75b8a0:{NFSU2_TR(0x75b8a0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b8a1:{NFSU2_TR(0x75b8a1);
__builtin_memmove((R+0),(R+4),4);
}
B75b8a3:{NFSU2_TR(0x75b8a3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b8a4:{NFSU2_TR(0x75b8a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b8a5:{NFSU2_TR(0x75b8a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75b8aaull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b4c0u);}goto L75b4c0;}
}
B75b8aa:L75b8aa:{c.instructions+=11;NFSU2_TR(0x75b8aa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x50ull))));
}
B75b8ad:{NFSU2_TR(0x75b8ad);
u8 U[4];
w4(U+0,u32(u32(u32(0x210ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B75b8b4:{NFSU2_TR(0x75b8b4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b8b5:{NFSU2_TR(0x75b8b5);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B75b8b9:{NFSU2_TR(0x75b8b9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b8ba:{NFSU2_TR(0x75b8ba);
__builtin_memmove((R+0),(R+8),4);
}
B75b8bc:{NFSU2_TR(0x75b8bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b8bd:{NFSU2_TR(0x75b8bd);
__builtin_memmove((R+4),(R+8),4);
}
B75b8bf:{NFSU2_TR(0x75b8bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b8c0:{NFSU2_TR(0x75b8c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b8c1:{NFSU2_TR(0x75b8c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75b8c6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b4c0u);}goto L75b4c0;}
}
B75b8c6:L75b8c6:{c.instructions+=10;NFSU2_TR(0x75b8c6);
u8 U[4];
w4(U+0,u32(u32(u32(0x224ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B75b8cd:{NFSU2_TR(0x75b8cd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b8ce:{NFSU2_TR(0x75b8ce);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B75b8d2:{NFSU2_TR(0x75b8d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b8d3:{NFSU2_TR(0x75b8d3);
__builtin_memmove((R+4),(R+0),4);
}
B75b8d5:{NFSU2_TR(0x75b8d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b8d6:{NFSU2_TR(0x75b8d6);
__builtin_memmove((R+8),(R+0),4);
}
B75b8d8:{NFSU2_TR(0x75b8d8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b8d9:{NFSU2_TR(0x75b8d9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b8da:{NFSU2_TR(0x75b8da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75b8dfull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b4c0u);}goto L75b4c0;}
}
B75b8df:L75b8df:{c.instructions+=10;NFSU2_TR(0x75b8df);
u8 U[4];
w4(U+0,u32(u32(u32(0x238ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B75b8e6:{NFSU2_TR(0x75b8e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b8e7:{NFSU2_TR(0x75b8e7);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B75b8eb:{NFSU2_TR(0x75b8eb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b8ec:{NFSU2_TR(0x75b8ec);
__builtin_memmove((R+8),(R+4),4);
}
B75b8ee:{NFSU2_TR(0x75b8ee);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b8ef:{NFSU2_TR(0x75b8ef);
__builtin_memmove((R+0),(R+4),4);
}
B75b8f1:{NFSU2_TR(0x75b8f1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b8f2:{NFSU2_TR(0x75b8f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b8f3:{NFSU2_TR(0x75b8f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75b8f8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b4c0u);}goto L75b4c0;}
}
B75b8f8:L75b8f8:{c.instructions+=10;NFSU2_TR(0x75b8f8);
u8 U[4];
w4(U+0,u32(u32(u32(0x24cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B75b8ff:{NFSU2_TR(0x75b8ff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b900:{NFSU2_TR(0x75b900);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B75b904:{NFSU2_TR(0x75b904);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b905:{NFSU2_TR(0x75b905);
__builtin_memmove((R+0),(R+8),4);
}
B75b907:{NFSU2_TR(0x75b907);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b908:{NFSU2_TR(0x75b908);
__builtin_memmove((R+4),(R+8),4);
}
B75b90a:{NFSU2_TR(0x75b90a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b90b:{NFSU2_TR(0x75b90b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b90c:{NFSU2_TR(0x75b90c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75b911ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b4c0u);}goto L75b4c0;}
}
B75b911:L75b911:{c.instructions+=11;NFSU2_TR(0x75b911);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x50ull))));
}
B75b914:{NFSU2_TR(0x75b914);
u8 U[4];
w4(U+0,u32(u32(u32(0x210ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B75b91b:{NFSU2_TR(0x75b91b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b91c:{NFSU2_TR(0x75b91c);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B75b920:{NFSU2_TR(0x75b920);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b921:{NFSU2_TR(0x75b921);
__builtin_memmove((R+4),(R+0),4);
}
B75b923:{NFSU2_TR(0x75b923);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b924:{NFSU2_TR(0x75b924);
__builtin_memmove((R+8),(R+0),4);
}
B75b926:{NFSU2_TR(0x75b926);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b927:{NFSU2_TR(0x75b927);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b928:{NFSU2_TR(0x75b928);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75b92dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b4c0u);}goto L75b4c0;}
}
B75b92d:L75b92d:{c.instructions+=10;NFSU2_TR(0x75b92d);
u8 U[4];
w4(U+0,u32(u32(u32(0x224ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B75b934:{NFSU2_TR(0x75b934);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b935:{NFSU2_TR(0x75b935);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B75b939:{NFSU2_TR(0x75b939);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b93a:{NFSU2_TR(0x75b93a);
__builtin_memmove((R+8),(R+4),4);
}
B75b93c:{NFSU2_TR(0x75b93c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b93d:{NFSU2_TR(0x75b93d);
__builtin_memmove((R+0),(R+4),4);
}
B75b93f:{NFSU2_TR(0x75b93f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b940:{NFSU2_TR(0x75b940);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b941:{NFSU2_TR(0x75b941);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75b946ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b4c0u);}goto L75b4c0;}
}
B75b946:L75b946:{c.instructions+=10;NFSU2_TR(0x75b946);
u8 U[4];
w4(U+0,u32(u32(u32(0x238ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B75b94d:{NFSU2_TR(0x75b94d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b94e:{NFSU2_TR(0x75b94e);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B75b952:{NFSU2_TR(0x75b952);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b953:{NFSU2_TR(0x75b953);
__builtin_memmove((R+0),(R+8),4);
}
B75b955:{NFSU2_TR(0x75b955);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b956:{NFSU2_TR(0x75b956);
__builtin_memmove((R+4),(R+8),4);
}
B75b958:{NFSU2_TR(0x75b958);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b959:{NFSU2_TR(0x75b959);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b95a:{NFSU2_TR(0x75b95a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75b95full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b4c0u);}goto L75b4c0;}
}
B75b95f:L75b95f:{c.instructions+=10;NFSU2_TR(0x75b95f);
u8 U[4];
w4(U+0,u32(u32(u32(0x24cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B75b966:{NFSU2_TR(0x75b966);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b967:{NFSU2_TR(0x75b967);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B75b96b:{NFSU2_TR(0x75b96b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b96c:{NFSU2_TR(0x75b96c);
__builtin_memmove((R+4),(R+0),4);
}
B75b96e:{NFSU2_TR(0x75b96e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b96f:{NFSU2_TR(0x75b96f);
__builtin_memmove((R+8),(R+0),4);
}
B75b971:{NFSU2_TR(0x75b971);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b972:{NFSU2_TR(0x75b972);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b973:{NFSU2_TR(0x75b973);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75b978ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b4c0u);}goto L75b4c0;}
}
B75b978:L75b978:{c.instructions+=11;NFSU2_TR(0x75b978);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x50ull))));
}
B75b97b:{NFSU2_TR(0x75b97b);
u8 U[4];
w4(U+0,u32(u32(u32(0x210ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B75b982:{NFSU2_TR(0x75b982);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b983:{NFSU2_TR(0x75b983);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B75b987:{NFSU2_TR(0x75b987);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b988:{NFSU2_TR(0x75b988);
__builtin_memmove((R+8),(R+4),4);
}
B75b98a:{NFSU2_TR(0x75b98a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b98b:{NFSU2_TR(0x75b98b);
__builtin_memmove((R+0),(R+4),4);
}
B75b98d:{NFSU2_TR(0x75b98d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b98e:{NFSU2_TR(0x75b98e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b98f:{NFSU2_TR(0x75b98f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75b994ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b4c0u);}goto L75b4c0;}
}
B75b994:L75b994:{c.instructions+=10;NFSU2_TR(0x75b994);
u8 U[4];
w4(U+0,u32(u32(u32(0x224ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B75b99b:{NFSU2_TR(0x75b99b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b99c:{NFSU2_TR(0x75b99c);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B75b9a0:{NFSU2_TR(0x75b9a0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b9a1:{NFSU2_TR(0x75b9a1);
__builtin_memmove((R+0),(R+8),4);
}
B75b9a3:{NFSU2_TR(0x75b9a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b9a4:{NFSU2_TR(0x75b9a4);
__builtin_memmove((R+4),(R+8),4);
}
B75b9a6:{NFSU2_TR(0x75b9a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b9a7:{NFSU2_TR(0x75b9a7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b9a8:{NFSU2_TR(0x75b9a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75b9adull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b4c0u);}goto L75b4c0;}
}
B75b9ad:L75b9ad:{c.instructions+=10;NFSU2_TR(0x75b9ad);
u8 U[4];
w4(U+0,u32(u32(u32(0x238ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B75b9b4:{NFSU2_TR(0x75b9b4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b9b5:{NFSU2_TR(0x75b9b5);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B75b9b9:{NFSU2_TR(0x75b9b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b9ba:{NFSU2_TR(0x75b9ba);
__builtin_memmove((R+4),(R+0),4);
}
B75b9bc:{NFSU2_TR(0x75b9bc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b9bd:{NFSU2_TR(0x75b9bd);
__builtin_memmove((R+8),(R+0),4);
}
B75b9bf:{NFSU2_TR(0x75b9bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b9c0:{NFSU2_TR(0x75b9c0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b9c1:{NFSU2_TR(0x75b9c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75b9c6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b4c0u);}goto L75b4c0;}
}
B75b9c6:L75b9c6:{c.instructions+=10;NFSU2_TR(0x75b9c6);
u8 U[4];
w4(U+0,u32(u32(u32(0x24cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B75b9cd:{NFSU2_TR(0x75b9cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b9ce:{NFSU2_TR(0x75b9ce);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B75b9d2:{NFSU2_TR(0x75b9d2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b9d3:{NFSU2_TR(0x75b9d3);
__builtin_memmove((R+8),(R+4),4);
}
B75b9d5:{NFSU2_TR(0x75b9d5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b9d6:{NFSU2_TR(0x75b9d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b9d7:{NFSU2_TR(0x75b9d7);
__builtin_memmove((R+0),(R+4),4);
}
B75b9d9:{NFSU2_TR(0x75b9d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b9da:{NFSU2_TR(0x75b9da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75b9dfull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b4c0u);}goto L75b4c0;}
}
B75b9df:L75b9df:{c.instructions+=11;NFSU2_TR(0x75b9df);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x50ull))));
}
B75b9e2:{NFSU2_TR(0x75b9e2);
u8 U[4];
w4(U+0,u32(u32(u32(0x210ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B75b9e9:{NFSU2_TR(0x75b9e9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b9ea:{NFSU2_TR(0x75b9ea);
u8 U[4];
w4(U+0,u32(u32(u32(0x414ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B75b9f1:{NFSU2_TR(0x75b9f1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b9f2:{NFSU2_TR(0x75b9f2);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B75b9f6:{NFSU2_TR(0x75b9f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b9f7:{NFSU2_TR(0x75b9f7);
__builtin_memmove((R+4),(R+0),4);
}
B75b9f9:{NFSU2_TR(0x75b9f9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b9fa:{NFSU2_TR(0x75b9fa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75b9fb:{NFSU2_TR(0x75b9fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75ba00ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b4c0u);}goto L75b4c0;}
}
B75ba00:L75ba00:{c.instructions+=2;NFSU2_TR(0x75ba00);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B75ba03:{NFSU2_TR(0x75ba03);
{goto L75ba6b;}
}
B75ba05:L75ba05:{c.instructions+=4;NFSU2_TR(0x75ba05);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75ba07:{NFSU2_TR(0x75ba07);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75ba09:{NFSU2_TR(0x75ba09);
w4(R+4,u32(0x80ull));
}
B75ba0e:{NFSU2_TR(0x75ba0e);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B75ba12:L75ba12:{c.instructions+=1;NFSU2_TR(0x75ba12);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L75ba14;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75ba12u);}goto L75ba12;}
}
B75ba14:L75ba14:{c.instructions+=2;NFSU2_TR(0x75ba14);
u8 U[14];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w2(U+12,u16(0x1ull));
s2(u32(r4(U+8)),r2(U+12));
}
B75ba1b:{NFSU2_TR(0x75ba1b);
if(r1(R+518)){{goto L75ba6b;}}
}
B75ba1d:L75ba1d:{c.instructions+=1;NFSU2_TR(0x75ba1d);
__builtin_memmove((R+4),(R+4),4);
}
B75ba20:L75ba20:{c.instructions+=2;NFSU2_TR(0x75ba20);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75ba23:{NFSU2_TR(0x75ba23);
if(r1(R+518)){{goto L75ba46;}}
}
B75ba25:L75ba25:{c.instructions+=10;NFSU2_TR(0x75ba25);
u8 U[4];
w4(U+0,u32(u32(u32(0x210ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B75ba2c:{NFSU2_TR(0x75ba2c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75ba2d:{NFSU2_TR(0x75ba2d);
u8 U[4];
w4(U+0,u32(u32(u32(0x414ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B75ba34:{NFSU2_TR(0x75ba34);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75ba35:{NFSU2_TR(0x75ba35);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B75ba39:{NFSU2_TR(0x75ba39);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75ba3a:{NFSU2_TR(0x75ba3a);
__builtin_memmove((R+8),(R+4),4);
}
B75ba3c:{NFSU2_TR(0x75ba3c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75ba3d:{NFSU2_TR(0x75ba3d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75ba3e:{NFSU2_TR(0x75ba3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75ba43ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b4c0u);}goto L75b4c0;}
}
B75ba43:L75ba43:{c.instructions+=1;NFSU2_TR(0x75ba43);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B75ba46:L75ba46:{c.instructions+=10;NFSU2_TR(0x75ba46);
u8 U[4];
w4(U+0,u32(u32(u32(0x210ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B75ba4d:{NFSU2_TR(0x75ba4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75ba4e:{NFSU2_TR(0x75ba4e);
u8 U[4];
w4(U+0,u32(u32(u32(0x414ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B75ba55:{NFSU2_TR(0x75ba55);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75ba56:{NFSU2_TR(0x75ba56);
__builtin_memmove((R+8),(R+4),4);
}
B75ba58:{NFSU2_TR(0x75ba58);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75ba59:{NFSU2_TR(0x75ba59);
__builtin_memmove((R+0),(R+4),4);
}
B75ba5b:{NFSU2_TR(0x75ba5b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75ba5c:{NFSU2_TR(0x75ba5c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75ba5d:{NFSU2_TR(0x75ba5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75ba62ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b4c0u);}goto L75b4c0;}
}
B75ba62:L75ba62:{c.instructions+=4;NFSU2_TR(0x75ba62);
w4(R+12,shr<u32>(r4(R+12),u64(u32(0x1ull))));
}
B75ba64:{NFSU2_TR(0x75ba64);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B75ba67:{NFSU2_TR(0x75ba67);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75ba69:{NFSU2_TR(0x75ba69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75ba20u);}goto L75ba20;}}
}
B75ba6b:L75ba6b:{c.instructions+=9;NFSU2_TR(0x75ba6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75ba6e:{NFSU2_TR(0x75ba6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75ba71:{NFSU2_TR(0x75ba71);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B75ba72:{NFSU2_TR(0x75ba72);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B75ba74:{NFSU2_TR(0x75ba74);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B75ba76:{NFSU2_TR(0x75ba76);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B75ba78:{NFSU2_TR(0x75ba78);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75ba7a:{NFSU2_TR(0x75ba7a);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B75ba7e:{NFSU2_TR(0x75ba7e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L75ba91;}}
}
B75ba80:L75ba80:{c.instructions+=9;NFSU2_TR(0x75ba80);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B75ba83:{NFSU2_TR(0x75ba83);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+4)),r1(U+0));
}
B75ba85:{NFSU2_TR(0x75ba85);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+8),(U+0),1);
}
B75ba87:{NFSU2_TR(0x75ba87);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B75ba88:{NFSU2_TR(0x75ba88);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+4)),r1(U+0));
}
B75ba8a:{NFSU2_TR(0x75ba8a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B75ba8b:{NFSU2_TR(0x75ba8b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B75ba8e:{NFSU2_TR(0x75ba8e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B75ba8f:{NFSU2_TR(0x75ba8f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75ba80u);}goto L75ba80;}}
}
B75ba91:L75ba91:{c.instructions+=2;NFSU2_TR(0x75ba91);
u8 U[8];
w4(U+0,u32(u32(u32(0x614ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75ba98:{NFSU2_TR(0x75ba98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75ba9dull));
TAIL_STATIC(0x76115eu,761);
}
B75ba9d:L75ba9d:{c.instructions+=6;NFSU2_TR(0x75ba9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75ba9e:{NFSU2_TR(0x75ba9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75ba9f:{NFSU2_TR(0x75ba9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75baa0:{NFSU2_TR(0x75baa0);
__builtin_memmove((R+16),(R+20),4);
}
B75baa2:{NFSU2_TR(0x75baa2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75baa3:{NFSU2_TR(0x75baa3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75bab0:L75bab0:{c.instructions+=12;NFSU2_TR(0x75bab0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75bab4:{NFSU2_TR(0x75bab4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75bab8:{NFSU2_TR(0x75bab8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75babc:{NFSU2_TR(0x75babc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x400ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75bac2:{NFSU2_TR(0x75bac2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75bac3:{NFSU2_TR(0x75bac3);
__builtin_memmove((R+12),(R+4),4);
}
B75bac5:{NFSU2_TR(0x75bac5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75bac6:{NFSU2_TR(0x75bac6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75baca:{NFSU2_TR(0x75baca);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B75bacd:{NFSU2_TR(0x75bacd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75bace:{NFSU2_TR(0x75bace);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x488ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75bad4:{NFSU2_TR(0x75bad4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x404ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75bada:L75bada:{c.instructions+=1;NFSU2_TR(0x75bada);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L75badc;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75badau);}goto L75bada;}
}
B75badc:L75badc:{c.instructions+=2;NFSU2_TR(0x75badc);
__builtin_memmove((R+4),(R+12),4);
}
B75bade:{NFSU2_TR(0x75bade);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B75bae1:L75bae1:{c.instructions+=1;NFSU2_TR(0x75bae1);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L75bae3;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75bae1u);}goto L75bae1;}
}
B75bae3:L75bae3:{c.instructions+=5;NFSU2_TR(0x75bae3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75bae7:{NFSU2_TR(0x75bae7);
__builtin_memmove((R+4),(R+8),4);
}
B75bae9:{NFSU2_TR(0x75bae9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48cull))));
__builtin_memmove((R+28),(U+0),4);
}
B75baef:{NFSU2_TR(0x75baef);
__builtin_memmove((R+0),(R+4),4);
}
B75baf1:{NFSU2_TR(0x75baf1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B75baf4:L75baf4:{c.instructions+=1;NFSU2_TR(0x75baf4);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L75baf6;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75baf4u);}goto L75baf4;}
}
B75baf6:L75baf6:{c.instructions+=2;NFSU2_TR(0x75baf6);
__builtin_memmove((R+4),(R+0),4);
}
B75baf8:{NFSU2_TR(0x75baf8);
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
B75bafb:L75bafb:{c.instructions+=1;NFSU2_TR(0x75bafb);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L75bafd;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75bafbu);}goto L75bafb;}
}
B75bafd:L75bafd:{c.instructions+=4;NFSU2_TR(0x75bafd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75bafe:{NFSU2_TR(0x75bafe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75baff:{NFSU2_TR(0x75baff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75bb00:{NFSU2_TR(0x75bb00);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75bb10:L75bb10:{c.instructions+=3;NFSU2_TR(0x75bb10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75bb11:{NFSU2_TR(0x75bb11);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75bb12:{NFSU2_TR(0x75bb12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75bb17ull));
TAIL_STATIC(0x74b730u,74b);
}
B75bb17:L75bb17:{c.instructions+=5;NFSU2_TR(0x75bb17);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75bb1b:{NFSU2_TR(0x75bb1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x400ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75bb21:{NFSU2_TR(0x75bb21);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B75bb23:{NFSU2_TR(0x75bb23);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75bb25:{NFSU2_TR(0x75bb25);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L75bb4f;}}
}
B75bb27:L75bb27:{c.instructions+=1;NFSU2_TR(0x75bb27);
{goto L75bb30;}
}
B75bb30:L75bb30:{c.instructions+=11;NFSU2_TR(0x75bb30);
__builtin_memmove((R+4),(R+24),4);
}
B75bb32:{NFSU2_TR(0x75bb32);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B75bb35:{NFSU2_TR(0x75bb35);
w4(R+28,u32(0x1ull));
}
B75bb3a:{NFSU2_TR(0x75bb3a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B75bb3c:{NFSU2_TR(0x75bb3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75bb3e:{NFSU2_TR(0x75bb3e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B75bb41:{NFSU2_TR(0x75bb41);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B75bb44:{NFSU2_TR(0x75bb44);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x400ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75bb4a:{NFSU2_TR(0x75bb4a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B75bb4b:{NFSU2_TR(0x75bb4b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B75bb4d:{NFSU2_TR(0x75bb4d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75bb30u);}goto L75bb30;}}
}
B75bb4f:L75bb4f:{c.instructions+=4;NFSU2_TR(0x75bb4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x400ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75bb55:{NFSU2_TR(0x75bb55);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B75bb57:{NFSU2_TR(0x75bb57);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75bb59:{NFSU2_TR(0x75bb59);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L75bb7c;}}
}
B75bb5b:L75bb5b:{c.instructions+=1;NFSU2_TR(0x75bb5b);
{goto L75bb60;}
}
B75bb60:L75bb60:{c.instructions+=1;NFSU2_TR(0x75bb60);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+4),(U+8),1);
}
B75bb63:L75bb63:{c.instructions+=4;NFSU2_TR(0x75bb63);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B75bb64:{NFSU2_TR(0x75bb64);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x10dcdull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B75bb6a:{NFSU2_TR(0x75bb6a);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+0))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
}
B75bb6c:{NFSU2_TR(0x75bb6c);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75bb63u);}goto L75bb63;}}
}
B75bb6e:L75bb6e:{c.instructions+=5;NFSU2_TR(0x75bb6e);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B75bb71:{NFSU2_TR(0x75bb71);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x400ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75bb77:{NFSU2_TR(0x75bb77);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B75bb78:{NFSU2_TR(0x75bb78);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B75bb7a:{NFSU2_TR(0x75bb7a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75bb60u);}goto L75bb60;}}
}
B75bb7c:L75bb7c:{c.instructions+=10;NFSU2_TR(0x75bb7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x400ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75bb82:{NFSU2_TR(0x75bb82);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75bb86:{NFSU2_TR(0x75bb86);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75bb8a:{NFSU2_TR(0x75bb8a);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B75bb8c:{NFSU2_TR(0x75bb8c);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+8)),r1(U+0));
}
B75bb8f:{NFSU2_TR(0x75bb8f);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B75bb93:{NFSU2_TR(0x75bb93);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B75bb96:{NFSU2_TR(0x75bb96);
__builtin_memmove((R+8),(R+4),4);
}
B75bb98:{NFSU2_TR(0x75bb98);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B75bb9b:{NFSU2_TR(0x75bb9b);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B75bb9f:L75bb9f:{c.instructions+=1;NFSU2_TR(0x75bb9f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L75bba1;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75bb9fu);}goto L75bb9f;}
}
B75bba1:L75bba1:{c.instructions+=2;NFSU2_TR(0x75bba1);
__builtin_memmove((R+4),(R+8),4);
}
B75bba3:{NFSU2_TR(0x75bba3);
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
B75bba6:L75bba6:{c.instructions+=1;NFSU2_TR(0x75bba6);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L75bba8;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75bba6u);}goto L75bba6;}
}
B75bba8:L75bba8:{c.instructions+=3;NFSU2_TR(0x75bba8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75bba9:{NFSU2_TR(0x75bba9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75bbaa:{NFSU2_TR(0x75bbaa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75bbb0:L75bbb0:{c.instructions+=7;NFSU2_TR(0x75bbb0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75bbb4:{NFSU2_TR(0x75bbb4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75bbb5:{NFSU2_TR(0x75bbb5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75bbb9:{NFSU2_TR(0x75bbb9);
__builtin_memmove((R+0),(R+4),4);
}
B75bbbb:{NFSU2_TR(0x75bbbb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75bbbc:{NFSU2_TR(0x75bbbc);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75bbc0:{NFSU2_TR(0x75bbc0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B75bbc3:L75bbc3:{c.instructions+=1;NFSU2_TR(0x75bbc3);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L75bbc5;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75bbc3u);}goto L75bbc3;}
}
B75bbc5:L75bbc5:{c.instructions+=2;NFSU2_TR(0x75bbc5);
__builtin_memmove((R+4),(R+0),4);
}
B75bbc7:{NFSU2_TR(0x75bbc7);
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
B75bbca:L75bbca:{c.instructions+=1;NFSU2_TR(0x75bbca);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L75bbcc;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75bbcau);}goto L75bbca;}
}
B75bbcc:L75bbcc:{c.instructions+=3;NFSU2_TR(0x75bbcc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75bbcd:{NFSU2_TR(0x75bbcd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75bbce:{NFSU2_TR(0x75bbce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75bbd0:L75bbd0:{c.instructions+=11;NFSU2_TR(0x75bbd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75bbd4:{NFSU2_TR(0x75bbd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x400ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75bbda:{NFSU2_TR(0x75bbda);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48cull))));
__builtin_memmove((R+4),(U+0),4);
}
B75bbe0:{NFSU2_TR(0x75bbe0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75bbe1:{NFSU2_TR(0x75bbe1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75bbe2:{NFSU2_TR(0x75bbe2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x404ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75bbe8:{NFSU2_TR(0x75bbe8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75bbe9:{NFSU2_TR(0x75bbe9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x488ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75bbef:{NFSU2_TR(0x75bbef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75bbf0:{NFSU2_TR(0x75bbf0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75bbf1:{NFSU2_TR(0x75bbf1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75bbf6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75b6e0u);}goto L75b6e0;}
}
B75bbf6:L75bbf6:{c.instructions+=2;NFSU2_TR(0x75bbf6);
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
B75bbf9:{NFSU2_TR(0x75bbf9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75bbfa:L75bbfa:{c.instructions+=1;NFSU2_TR(0x75bbfa);
{u32 t_=u32(m4(0x7833c4));TAIL_DYNAMIC(t_);}
}
B75bc00:L75bc00:{c.instructions+=1;NFSU2_TR(0x75bc00);
{u32 t_=u32(m4(0x7833c8));TAIL_DYNAMIC(t_);}
}
B75bc06:L75bc06:{c.instructions+=1;NFSU2_TR(0x75bc06);
{u32 t_=u32(m4(0x7833cc));TAIL_DYNAMIC(t_);}
}
B75bc0c:L75bc0c:{c.instructions+=1;NFSU2_TR(0x75bc0c);
{u32 t_=u32(m4(0x7833d0));TAIL_DYNAMIC(t_);}
}
B75bc12:L75bc12:{c.instructions+=1;NFSU2_TR(0x75bc12);
{u32 t_=u32(m4(0x7833d4));TAIL_DYNAMIC(t_);}
}
B75bc18:L75bc18:{c.instructions+=1;NFSU2_TR(0x75bc18);
{u32 t_=u32(m4(0x7833d8));TAIL_DYNAMIC(t_);}
}
B75bc1e:L75bc1e:{c.instructions+=1;NFSU2_TR(0x75bc1e);
{u32 t_=u32(m4(0x7833dc));TAIL_DYNAMIC(t_);}
}
B75bc24:L75bc24:{c.instructions+=1;NFSU2_TR(0x75bc24);
{u32 t_=u32(m4(0x7833e0));TAIL_DYNAMIC(t_);}
}
B75bc2a:L75bc2a:{c.instructions+=1;NFSU2_TR(0x75bc2a);
{u32 t_=u32(m4(0x7833e4));TAIL_DYNAMIC(t_);}
}
B75bc30:L75bc30:{c.instructions+=1;NFSU2_TR(0x75bc30);
{u32 t_=u32(m4(0x7833e8));TAIL_DYNAMIC(t_);}
}
B75bc36:L75bc36:{c.instructions+=1;NFSU2_TR(0x75bc36);
{u32 t_=u32(m4(0x7833ec));TAIL_DYNAMIC(t_);}
}
B75bc3c:L75bc3c:{c.instructions+=1;NFSU2_TR(0x75bc3c);
{u32 t_=u32(m4(0x7833f0));TAIL_DYNAMIC(t_);}
}
B75bc42:L75bc42:{c.instructions+=1;NFSU2_TR(0x75bc42);
{u32 t_=u32(m4(0x7833f4));TAIL_DYNAMIC(t_);}
}
B75bc48:L75bc48:{c.instructions+=1;NFSU2_TR(0x75bc48);
{u32 t_=u32(m4(0x7833f8));TAIL_DYNAMIC(t_);}
}
B75bc4e:L75bc4e:{c.instructions+=1;NFSU2_TR(0x75bc4e);
{u32 t_=u32(m4(0x7833fc));TAIL_DYNAMIC(t_);}
}
B75bc54:L75bc54:{c.instructions+=1;NFSU2_TR(0x75bc54);
{u32 t_=u32(m4(0x783400));TAIL_DYNAMIC(t_);}
}
B75bc5a:L75bc5a:{c.instructions+=1;NFSU2_TR(0x75bc5a);
{u32 t_=u32(m4(0x783404));TAIL_DYNAMIC(t_);}
}
B75bc60:L75bc60:{c.instructions+=1;NFSU2_TR(0x75bc60);
{u32 t_=u32(m4(0x783408));TAIL_DYNAMIC(t_);}
}
B75bc66:L75bc66:{c.instructions+=1;NFSU2_TR(0x75bc66);
{u32 t_=u32(m4(0x78340c));TAIL_DYNAMIC(t_);}
}
B75bc6c:L75bc6c:{c.instructions+=1;NFSU2_TR(0x75bc6c);
{u32 t_=u32(m4(0x783410));TAIL_DYNAMIC(t_);}
}
B75bc72:L75bc72:{c.instructions+=1;NFSU2_TR(0x75bc72);
{u32 t_=u32(m4(0x783414));TAIL_DYNAMIC(t_);}
}
B75bc78:L75bc78:{c.instructions+=1;NFSU2_TR(0x75bc78);
{u32 t_=u32(m4(0x783418));TAIL_DYNAMIC(t_);}
}
B75bc7e:L75bc7e:{c.instructions+=2;NFSU2_TR(0x75bc7e);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b8420),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75bc85:{NFSU2_TR(0x75bc85);
if(r1(R+518)){{goto L75bc8c;}}
}
B75bc87:L75bc87:{c.instructions+=1;NFSU2_TR(0x75bc87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75bc8cull));
TAIL_STATIC(0x7615f1u,761);
}
B75bc8c:L75bc8c:{c.instructions+=2;NFSU2_TR(0x75bc8c);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75bc90:{NFSU2_TR(0x75bc90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75bc95ull));
TAIL_STATIC(0x76147au,761);
}
B75bc95:L75bc95:{c.instructions+=2;NFSU2_TR(0x75bc95);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75bc9a:{NFSU2_TR(0x75bc9a);
u8 U[4];
__builtin_memmove((U+0),gp(0x819c54),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75bca0ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75bca0:L75bca0:{c.instructions+=3;NFSU2_TR(0x75bca0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75bca1:{NFSU2_TR(0x75bca1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75bca2:{NFSU2_TR(0x75bca2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75bca3:L75bca3:{c.instructions+=2;NFSU2_TR(0x75bca3);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b8420),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75bcaa:{NFSU2_TR(0x75bcaa);
if(r1(R+518)){{goto L75bcb1;}}
}
B75bcac:L75bcac:{c.instructions+=1;NFSU2_TR(0x75bcac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75bcb1ull));
TAIL_STATIC(0x7615f1u,761);
}
B75bcb1:L75bcb1:{c.instructions+=2;NFSU2_TR(0x75bcb1);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75bcb5:{NFSU2_TR(0x75bcb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75bcbaull));
TAIL_STATIC(0x76147au,761);
}
B75bcba:L75bcba:{c.instructions+=2;NFSU2_TR(0x75bcba);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75bcbf:{NFSU2_TR(0x75bcbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75bcc4ull));
TAIL_STATIC(0x75d419u,75d);
}
B75bcc4:L75bcc4:{c.instructions+=3;NFSU2_TR(0x75bcc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75bcc5:{NFSU2_TR(0x75bcc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75bcc6:{NFSU2_TR(0x75bcc6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75bcc7:L75bcc7:{c.instructions+=3;NFSU2_TR(0x75bcc7);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75bcc9:{NFSU2_TR(0x75bcc9);
u8 U[4];
w4(U+0,u32(0x7d3998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75bcce:{NFSU2_TR(0x75bcce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75bcd3ull));
TAIL_STATIC(0x760da0u,760);
}
B75bcd3:L75bcd3:{c.instructions+=3;NFSU2_TR(0x75bcd3);
w4(R+28,u32(0x94ull));
}
B75bcd8:{NFSU2_TR(0x75bcd8);
__builtin_memmove((R+0),(R+28),4);
}
B75bcda:{NFSU2_TR(0x75bcda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75bcdfull));
TAIL_STATIC(0x75c4d0u,75c);
}
B75bcdf:L75bcdf:{c.instructions+=5;NFSU2_TR(0x75bcdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75bce2:{NFSU2_TR(0x75bce2);
__builtin_memmove((R+24),(R+16),4);
}
B75bce4:{NFSU2_TR(0x75bce4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B75bce6:{NFSU2_TR(0x75bce6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75bce7:{NFSU2_TR(0x75bce7);
u8 U[4];
__builtin_memmove((U+0),gp(0x783168),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75bcedull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75bced:L75bced:{c.instructions+=11;NFSU2_TR(0x75bced);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75bcf0:{NFSU2_TR(0x75bcf0);
__builtin_memmove(gp(0x8b8430),(R+4),4);
}
B75bcf6:{NFSU2_TR(0x75bcf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75bcf9:{NFSU2_TR(0x75bcf9);
__builtin_memmove(gp(0x8b843c),(R+0),4);
}
B75bcfe:{NFSU2_TR(0x75bcfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75bd01:{NFSU2_TR(0x75bd01);
__builtin_memmove(gp(0x8b8440),(R+8),4);
}
B75bd07:{NFSU2_TR(0x75bd07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75bd0a:{NFSU2_TR(0x75bd0a);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B75bd10:{NFSU2_TR(0x75bd10);
__builtin_memmove(gp(0x8b8434),(R+24),4);
}
B75bd16:{NFSU2_TR(0x75bd16);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75bd19:{NFSU2_TR(0x75bd19);
if(r1(R+518)){{goto L75bd27;}}
}
B75bd1b:L75bd1b:{c.instructions+=2;NFSU2_TR(0x75bd1b);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x8000ull))));
}
B75bd21:{NFSU2_TR(0x75bd21);
__builtin_memmove(gp(0x8b8434),(R+24),4);
}
B75bd27:L75bd27:{c.instructions+=6;NFSU2_TR(0x75bd27);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B75bd2a:{NFSU2_TR(0x75bd2a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B75bd2c:{NFSU2_TR(0x75bd2c);
__builtin_memmove(gp(0x8b8438),(R+0),4);
}
B75bd31:{NFSU2_TR(0x75bd31);
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
B75bd33:{NFSU2_TR(0x75bd33);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75bd34:{NFSU2_TR(0x75bd34);
u8 U[4];
__builtin_memmove((U+0),gp(0x783138),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75bd3aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75bd3a:L75bd3a:{c.instructions+=2;NFSU2_TR(0x75bd3a);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x5a4dull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B75bd3f:{NFSU2_TR(0x75bd3f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75bd60;}}
}
B75bd41:L75bd41:{c.instructions+=4;NFSU2_TR(0x75bd41);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75bd44:{NFSU2_TR(0x75bd44);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B75bd46:{NFSU2_TR(0x75bd46);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4550ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B75bd4c:{NFSU2_TR(0x75bd4c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75bd60;}}
}
B75bd4e:L75bd4e:{c.instructions+=3;NFSU2_TR(0x75bd4e);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B75bd52:{NFSU2_TR(0x75bd52);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75bd57:{NFSU2_TR(0x75bd57);
if(r1(R+518)){{goto L75bd78;}}
}
B75bd59:L75bd59:{c.instructions+=2;NFSU2_TR(0x75bd59);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75bd5e:{NFSU2_TR(0x75bd5e);
if(r1(R+518)){{goto L75bd65;}}
}
B75bd60:L75bd60:{c.instructions+=2;NFSU2_TR(0x75bd60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75bd63:{NFSU2_TR(0x75bd63);
{goto L75bd8c;}
}
B75bd65:L75bd65:{c.instructions+=2;NFSU2_TR(0x75bd65);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0xeull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xeull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75bd6c:{NFSU2_TR(0x75bd6c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75bd60u);}goto L75bd60;}}
}
B75bd6e:L75bd6e:{c.instructions+=3;NFSU2_TR(0x75bd6e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75bd70:{NFSU2_TR(0x75bd70);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75bd76:{NFSU2_TR(0x75bd76);
{goto L75bd86;}
}
B75bd78:L75bd78:{c.instructions+=2;NFSU2_TR(0x75bd78);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0xeull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xeull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75bd7c:{NFSU2_TR(0x75bd7c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75bd60u);}goto L75bd60;}}
}
B75bd7e:L75bd7e:{c.instructions+=2;NFSU2_TR(0x75bd7e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75bd80:{NFSU2_TR(0x75bd80);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75bd86:L75bd86:{c.instructions+=2;NFSU2_TR(0x75bd86);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B75bd89:{NFSU2_TR(0x75bd89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75bd8c:L75bd8c:{c.instructions+=2;NFSU2_TR(0x75bd8c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75bd8e:{NFSU2_TR(0x75bd8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75bd93ull));
TAIL_STATIC(0x7620a1u,762);
}
B75bd93:L75bd93:{c.instructions+=3;NFSU2_TR(0x75bd93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75bd94:{NFSU2_TR(0x75bd94);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75bd96:{NFSU2_TR(0x75bd96);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75bda0;}}
}
B75bd98:L75bd98:{c.instructions+=2;NFSU2_TR(0x75bd98);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75bd9a:{NFSU2_TR(0x75bd9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75bd9full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75bca3u);}goto L75bca3;}
}
B75bd9f:L75bd9f:{c.instructions+=1;NFSU2_TR(0x75bd9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75bda0:L75bda0:{c.instructions+=1;NFSU2_TR(0x75bda0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75bda5ull));
TAIL_STATIC(0x762018u,762);
}
B75bda5:L75bda5:{c.instructions+=2;NFSU2_TR(0x75bda5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75bda7:{NFSU2_TR(0x75bda7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75bdb1;}}
}
B75bda9:L75bda9:{c.instructions+=2;NFSU2_TR(0x75bda9);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75bdab:{NFSU2_TR(0x75bdab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75bdb0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75bca3u);}goto L75bca3;}
}
B75bdb0:L75bdb0:{c.instructions+=1;NFSU2_TR(0x75bdb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75bdb1:L75bdb1:{c.instructions+=1;NFSU2_TR(0x75bdb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75bdb6ull));
TAIL_STATIC(0x761d83u,761);
}
B75bdb6:L75bdb6:{c.instructions+=2;NFSU2_TR(0x75bdb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75bdb9:{NFSU2_TR(0x75bdb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75bdbeull));
TAIL_STATIC(0x761b85u,761);
}
B75bdbe:L75bdbe:{c.instructions+=2;NFSU2_TR(0x75bdbe);
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
B75bdc0:{NFSU2_TR(0x75bdc0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L75bdca;}}
}
B75bdc2:L75bdc2:{c.instructions+=2;NFSU2_TR(0x75bdc2);
u8 U[4];
w4(U+0,u32(0x1bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75bdc4:{NFSU2_TR(0x75bdc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75bdc9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75bc7eu);}goto L75bc7e;}
}
B75bdc9:L75bdc9:{c.instructions+=1;NFSU2_TR(0x75bdc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75bdca:L75bdca:{c.instructions+=1;NFSU2_TR(0x75bdca);
u8 U[4];
__builtin_memmove((U+0),gp(0x78328c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75bdd0ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75bdd0:L75bdd0:{c.instructions+=2;NFSU2_TR(0x75bdd0);
__builtin_memmove(gp(0x8bb5f4),(R+0),4);
}
B75bdd5:{NFSU2_TR(0x75bdd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75bddaull));
TAIL_STATIC(0x761a63u,761);
}
B75bdda:L75bdda:{c.instructions+=2;NFSU2_TR(0x75bdda);
__builtin_memmove(gp(0x8b8418),(R+0),4);
}
B75bddf:{NFSU2_TR(0x75bddf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75bde4ull));
TAIL_STATIC(0x7619c1u,761);
}
B75bde4:L75bde4:{c.instructions+=2;NFSU2_TR(0x75bde4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B75bde6:{NFSU2_TR(0x75bde6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L75bdf0;}}
}
B75bde8:L75bde8:{c.instructions+=2;NFSU2_TR(0x75bde8);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75bdea:{NFSU2_TR(0x75bdea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75bdefull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75bc7eu);}goto L75bc7e;}
}
B75bdef:L75bdef:{c.instructions+=1;NFSU2_TR(0x75bdef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75bdf0:L75bdf0:{c.instructions+=1;NFSU2_TR(0x75bdf0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75bdf5ull));
TAIL_STATIC(0x76178eu,761);
}
B75bdf5:L75bdf5:{c.instructions+=2;NFSU2_TR(0x75bdf5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B75bdf7:{NFSU2_TR(0x75bdf7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L75be01;}}
}
B75bdf9:L75bdf9:{c.instructions+=2;NFSU2_TR(0x75bdf9);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75bdfb:{NFSU2_TR(0x75bdfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75be00ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75bc7eu);}goto L75bc7e;}
}
B75be00:L75be00:{c.instructions+=1;NFSU2_TR(0x75be00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75be01:L75be01:{c.instructions+=1;NFSU2_TR(0x75be01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75be06ull));
TAIL_STATIC(0x75d45bu,75d);
}
B75be06:L75be06:{c.instructions+=3;NFSU2_TR(0x75be06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75be09:{NFSU2_TR(0x75be09);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75be0b:{NFSU2_TR(0x75be0b);
if(r1(R+518)){{goto L75be14;}}
}
B75be0d:L75be0d:{c.instructions+=2;NFSU2_TR(0x75be0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75be0e:{NFSU2_TR(0x75be0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75be13ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75bc7eu);}goto L75bc7e;}
}
B75be13:L75be13:{c.instructions+=1;NFSU2_TR(0x75be13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75be14:L75be14:{c.instructions+=6;NFSU2_TR(0x75be14);
__builtin_memmove((R+0),gp(0x8b8450),4);
}
B75be19:{NFSU2_TR(0x75be19);
__builtin_memmove(gp(0x8b8454),(R+0),4);
}
B75be1e:{NFSU2_TR(0x75be1e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75be1f:{NFSU2_TR(0x75be1f);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b8448),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75be25:{NFSU2_TR(0x75be25);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b8444),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75be2b:{NFSU2_TR(0x75be2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75be30ull));
TAIL_STATIC(0x580e00u,580);
}
B75be30:L75be30:{c.instructions+=5;NFSU2_TR(0x75be30);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B75be33:{NFSU2_TR(0x75be33);
__builtin_memmove((R+24),(R+0),4);
}
B75be35:{NFSU2_TR(0x75be35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75be38:{NFSU2_TR(0x75be38);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75be3b:{NFSU2_TR(0x75be3b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75be43;}}
}
B75be3d:L75be3d:{c.instructions+=2;NFSU2_TR(0x75be3d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75be3e:{NFSU2_TR(0x75be3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75be43ull));
TAIL_STATIC(0x75d593u,75d);
}
B75be43:L75be43:{c.instructions+=1;NFSU2_TR(0x75be43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75be48ull));
TAIL_STATIC(0x75d5b5u,75d);
}
B75be48:L75be48:{c.instructions+=1;NFSU2_TR(0x75be48);
{goto L75be75;}
}
B75be4a:L75be4a:{c.instructions+=7;NFSU2_TR(0x75be4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75be4d:{NFSU2_TR(0x75be4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B75be4f:{NFSU2_TR(0x75be4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B75be51:{NFSU2_TR(0x75be51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75be54:{NFSU2_TR(0x75be54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75be55:{NFSU2_TR(0x75be55);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75be56:{NFSU2_TR(0x75be56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75be5bull));
TAIL_STATIC(0x76162au,761);
}
B75be5b:L75be5b:{c.instructions+=3;NFSU2_TR(0x75be5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75be5c:{NFSU2_TR(0x75be5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75be5d:{NFSU2_TR(0x75be5d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75be5e:L75be5e:{c.instructions+=4;NFSU2_TR(0x75be5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+16),(U+4),4);
}
B75be61:{NFSU2_TR(0x75be61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75be64:{NFSU2_TR(0x75be64);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75be68:{NFSU2_TR(0x75be68);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75be70;}}
}
B75be6a:L75be6a:{c.instructions+=2;NFSU2_TR(0x75be6a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75be6b:{NFSU2_TR(0x75be6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75be70ull));
TAIL_STATIC(0x75d5a4u,75d);
}
B75be70:L75be70:{c.instructions+=1;NFSU2_TR(0x75be70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75be75ull));
TAIL_STATIC(0x75d5c4u,75d);
}
B75be75:L75be75:{c.instructions+=4;NFSU2_TR(0x75be75);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
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
B75be79:{NFSU2_TR(0x75be79);
__builtin_memmove((R+0),(R+24),4);
}
B75be7b:{NFSU2_TR(0x75be7b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+16),(U+0),4);
}
B75be7e:{NFSU2_TR(0x75be7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75be83ull));
TAIL_STATIC(0x760ddbu,760);
}
B75be83:L75be83:{c.instructions+=1;NFSU2_TR(0x75be83);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75be84:L75be84:{c.instructions+=8;NFSU2_TR(0x75be84);
w4(R+0,u32(0x7624b4ull));
}
B75be89:{NFSU2_TR(0x75be89);
__builtin_memmove(gp(0x81a31c),(R+0),4);
}
B75be8e:{NFSU2_TR(0x75be8e);
s4(0x81a320,u32(0x76212eull));
}
B75be98:{NFSU2_TR(0x75be98);
s4(0x81a324,u32(0x762193ull));
}
B75bea2:{NFSU2_TR(0x75bea2);
s4(0x81a328,u32(0x7620f2ull));
}
B75beac:{NFSU2_TR(0x75beac);
s4(0x81a32c,u32(0x762179ull));
}
B75beb6:{NFSU2_TR(0x75beb6);
__builtin_memmove(gp(0x81a330),(R+0),4);
}
B75bebb:{NFSU2_TR(0x75bebb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75bebc:L75bebc:{c.instructions+=1;NFSU2_TR(0x75bebc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75bec1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75be84u);}goto L75be84;}
}
B75bec1:L75bec1:{c.instructions+=1;NFSU2_TR(0x75bec1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75bec6ull));
TAIL_STATIC(0x762557u,762);
}
B75bec6:L75bec6:{c.instructions+=2;NFSU2_TR(0x75bec6);
__builtin_memmove(gp(0x8b8428),(R+0),4);
}
B75becb:{NFSU2_TR(0x75becb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75bed0ull));
TAIL_STATIC(0x762505u,762);
}
B75bed0:L75bed0:{c.instructions+=2;NFSU2_TR(0x75bed0);
__asm__ volatile(".byte 0xdb,0xe2":::"memory");
}
B75bed2:{NFSU2_TR(0x75bed2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75bed4:L75bed4:{c.instructions+=12;NFSU2_TR(0x75bed4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75bed5:{NFSU2_TR(0x75bed5);
__builtin_memmove((R+20),(R+16),4);
}
B75bed7:{NFSU2_TR(0x75bed7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B75beda:{NFSU2_TR(0x75beda);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B75bedd:{NFSU2_TR(0x75bedd);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B75bedf:{NFSU2_TR(0x75bedf);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B75bee3:{NFSU2_TR(0x75bee3);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdf,0x38"::"a"(ea_):"memory");}
}
B75bee7:{NFSU2_TR(0x75bee7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdf,0x28"::"a"(ea_):"memory");}
}
B75beeb:{NFSU2_TR(0x75beeb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75beef:{NFSU2_TR(0x75beef);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75bef3:{NFSU2_TR(0x75bef3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75bef5:{NFSU2_TR(0x75bef5);
if(r1(R+518)){{goto L75bf33;}}
}
B75bef7:L75bef7:{c.instructions+=3;NFSU2_TR(0x75bef7);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B75bef9:{NFSU2_TR(0x75bef9);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B75befb:{NFSU2_TR(0x75befb);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L75bf1b;}}
}
B75befd:L75befd:{c.instructions+=8;NFSU2_TR(0x75befd);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B75bf00:{NFSU2_TR(0x75bf00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+4),(U+0),4);
}
B75bf03:{NFSU2_TR(0x75bf03);
w4(R+4,u32(u32(r4(R+4))^u32(u32(0x80000000ull))));
}
B75bf09:{NFSU2_TR(0x75bf09);
w1(R+512,carry<u32>(r4(R+4),u32(0x7fffffffull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x7fffffffull))));
}
B75bf0f:{NFSU2_TR(0x75bf0f);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,carry<u32>(r4(R+0),u32(0x0ull)));
w4(U+4,u32(u32(r4(R+0))+u32(u32(0x0ull))));
w1(U+8,carry<u32>(r4(U+4),r4(U+0)));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))+u32(r4(U+0))));
}
B75bf12:{NFSU2_TR(0x75bf12);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75bf16:{NFSU2_TR(0x75bf16);
u8 U[16];
w4(U+0,u32(r1(R+512)));
w1(R+512,carry<u32>(r4(R+8),u32(0x0ull)));
w1(R+523,scarry<u32>(r4(R+8),u32(0x0ull)));
w4(U+4,u32(u32(r4(R+8))+u32(u32(0x0ull))));
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
B75bf19:{NFSU2_TR(0x75bf19);
{goto L75bf47;}
}
B75bf1b:L75bf1b:{c.instructions+=7;NFSU2_TR(0x75bf1b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B75bf1e:{NFSU2_TR(0x75bf1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+4),(U+0),4);
}
B75bf21:{NFSU2_TR(0x75bf21);
w1(R+512,carry<u32>(r4(R+4),u32(0x7fffffffull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x7fffffffull))));
}
B75bf27:{NFSU2_TR(0x75bf27);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B75bf2a:{NFSU2_TR(0x75bf2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75bf2e:{NFSU2_TR(0x75bf2e);
u8 U[16];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+8))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(R+8),u32(0x0ull)));
w4(U+4,u32(u32(r4(R+8))-u32(u32(0x0ull))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w1(U+9,sborrow<u32>(r4(U+4),r4(U+0)));
w1(R+523,u8(((r1(R+523))!=0)!=((r1(U+9))!=0)));
w4(R+8,u32(u32(r4(U+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+10,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+14,u8(__builtin_popcountll(u64(r4(U+10)))));
w1(U+15,u8(u32(r1(U+14))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+15))==(u8(0x0ull))));
}
B75bf31:{NFSU2_TR(0x75bf31);
{goto L75bf47;}
}
B75bf33:L75bf33:{c.instructions+=3;NFSU2_TR(0x75bf33);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75bf37:{NFSU2_TR(0x75bf37);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+8))&u32(u32(0x7fffffffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75bf3d:{NFSU2_TR(0x75bf3d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75bef7u);}goto L75bef7;}}
}
B75bf3f:L75bf3f:{c.instructions+=2;NFSU2_TR(0x75bf3f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B75bf43:{NFSU2_TR(0x75bf43);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B75bf47:L75bf47:{c.instructions+=2;NFSU2_TR(0x75bf47);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75bf48:{NFSU2_TR(0x75bf48);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75bf49:L75bf49:{c.instructions+=15;NFSU2_TR(0x75bf49);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75bf4a:{NFSU2_TR(0x75bf4a);
__builtin_memmove((R+20),(R+16),4);
}
B75bf4c:{NFSU2_TR(0x75bf4c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75bf4d:{NFSU2_TR(0x75bf4d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75bf4e:{NFSU2_TR(0x75bf4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75bf51:{NFSU2_TR(0x75bf51);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xcull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75bf54:{NFSU2_TR(0x75bf54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75bf57:{NFSU2_TR(0x75bf57);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B75bf5e:{NFSU2_TR(0x75bf5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B75bf60:{NFSU2_TR(0x75bf60);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75bf66:{NFSU2_TR(0x75bf66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75bf69:{NFSU2_TR(0x75bf69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B75bf6c:{NFSU2_TR(0x75bf6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+16),(U+4),4);
}
B75bf6f:{NFSU2_TR(0x75bf6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75bf72:{NFSU2_TR(0x75bf72);
{u32 t_=u32(r4(R+0));TAIL_DYNAMIC(t_);}
}
B75bf79:L75bf79:{c.instructions+=4;NFSU2_TR(0x75bf79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75bf7a:{NFSU2_TR(0x75bf7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75bf7b:{NFSU2_TR(0x75bf7b);
u8 U[8];
{SPILL();c.pc=0x75bf7bu;user_op(c,17,{});SPILL();}
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((U+4),(U+0),4);
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((R+0),(U+4),4);
{SPILL();c.pc=0x75bf7bu;user_op(c,18,{});SPILL();}
}
B75bf7e:{NFSU2_TR(0x75bf7e);
{u32 t_=u32(r4(R+0));TAIL_DYNAMIC(t_);}
}
B75bf80:L75bf80:{c.instructions+=15;NFSU2_TR(0x75bf80);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75bf81:{NFSU2_TR(0x75bf81);
__builtin_memmove((R+20),(R+16),4);
}
B75bf83:{NFSU2_TR(0x75bf83);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75bf84:{NFSU2_TR(0x75bf84);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75bf85:{NFSU2_TR(0x75bf85);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75bf86:{NFSU2_TR(0x75bf86);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75bf87:{NFSU2_TR(0x75bf87);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75bf88:{NFSU2_TR(0x75bf88);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75bf8f:{NFSU2_TR(0x75bf8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75bf92:{NFSU2_TR(0x75bf92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x75bfa9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75bf99:{NFSU2_TR(0x75bf99);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75bf9b:{NFSU2_TR(0x75bf9b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75bf9e:{NFSU2_TR(0x75bf9e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75bfa1:{NFSU2_TR(0x75bfa1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75bfa4:{NFSU2_TR(0x75bfa4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75bfa9ull));
TAIL_STATIC(0x76ea02u,76e);
}
B75bfa9:L75bfa9:{c.instructions+=14;NFSU2_TR(0x75bfa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75bfac:{NFSU2_TR(0x75bfac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75bfaf:{NFSU2_TR(0x75bfaf);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffdull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75bfb2:{NFSU2_TR(0x75bfb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75bfb5:{NFSU2_TR(0x75bfb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75bfb8:{NFSU2_TR(0x75bfb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75bfbf:{NFSU2_TR(0x75bfbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B75bfc2:{NFSU2_TR(0x75bfc2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+12)),r4(U+0));
}
B75bfc4:{NFSU2_TR(0x75bfc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75bfcb:{NFSU2_TR(0x75bfcb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75bfcc:{NFSU2_TR(0x75bfcc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75bfcd:{NFSU2_TR(0x75bfcd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75bfce:{NFSU2_TR(0x75bfce);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75bfcf:{NFSU2_TR(0x75bfcf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75bfd2:L75bfd2:{c.instructions+=18;NFSU2_TR(0x75bfd2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75bfd3:{NFSU2_TR(0x75bfd3);
__builtin_memmove((R+20),(R+16),4);
}
B75bfd5:{NFSU2_TR(0x75bfd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
}
B75bfd8:{NFSU2_TR(0x75bfd8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75bfd9:{NFSU2_TR(0x75bfd9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75bfda:{NFSU2_TR(0x75bfda);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75bfdb:{NFSU2_TR(0x75bfdb);
w1(R+522,u8(0x0ull));
}
B75bfdc:{NFSU2_TR(0x75bfdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75bfdf:{NFSU2_TR(0x75bfdf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75bfe1:{NFSU2_TR(0x75bfe1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75bfe2:{NFSU2_TR(0x75bfe2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75bfe3:{NFSU2_TR(0x75bfe3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75bfe4:{NFSU2_TR(0x75bfe4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75bfe7:{NFSU2_TR(0x75bfe7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75bfea:{NFSU2_TR(0x75bfea);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75bfed:{NFSU2_TR(0x75bfed);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75bff0:{NFSU2_TR(0x75bff0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75bff3:{NFSU2_TR(0x75bff3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75bff8ull));
TAIL_STATIC(0x762d49u,762);
}
B75bff8:L75bff8:{c.instructions+=4;NFSU2_TR(0x75bff8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75bffb:{NFSU2_TR(0x75bffb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75bffe:{NFSU2_TR(0x75bffe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75bfff:{NFSU2_TR(0x75bfff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
TAIL_STATIC(0x75c000u,75c);
}
XIT:NFSU2_TR_EXIT(0x75b,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
