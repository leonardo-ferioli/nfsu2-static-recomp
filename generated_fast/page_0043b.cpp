#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_409(u8* __restrict R,Cpu& c);
u32 body_42f(u8* __restrict R,Cpu& c);
u32 body_431(u8* __restrict R,Cpu& c);
u32 body_432(u8* __restrict R,Cpu& c);
u32 body_435(u8* __restrict R,Cpu& c);
u32 body_437(u8* __restrict R,Cpu& c);
u32 body_438(u8* __restrict R,Cpu& c);
u32 body_439(u8* __restrict R,Cpu& c);
u32 body_43a(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_479(u8* __restrict R,Cpu& c);
u32 body_499(u8* __restrict R,Cpu& c);
u32 body_4c5(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_513(u8* __restrict R,Cpu& c);
u32 body_532(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_57e(u8* __restrict R,Cpu& c);
u32 body_614(u8* __restrict R,Cpu& c);
u32 body_61f(u8* __restrict R,Cpu& c);
u32 body_638(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x43b,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x43b,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 page_43b(Cpu& c){return body_43b(c.regs.data(),c);}
__attribute__((noinline)) u32 body_43b(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x43b000:goto L43b000;
case 0x43b001:c.instructions+=16;goto B43b001;
case 0x43b003:c.instructions+=15;goto B43b003;
case 0x43b006:c.instructions+=14;goto B43b006;
case 0x43b00c:c.instructions+=13;goto B43b00c;
case 0x43b00d:c.instructions+=12;goto B43b00d;
case 0x43b00e:c.instructions+=11;goto B43b00e;
case 0x43b010:c.instructions+=10;goto B43b010;
case 0x43b013:c.instructions+=9;goto B43b013;
case 0x43b016:c.instructions+=8;goto B43b016;
case 0x43b019:c.instructions+=7;goto B43b019;
case 0x43b01b:c.instructions+=6;goto B43b01b;
case 0x43b01e:c.instructions+=5;goto B43b01e;
case 0x43b024:c.instructions+=4;goto B43b024;
case 0x43b027:c.instructions+=3;goto B43b027;
case 0x43b02a:c.instructions+=2;goto B43b02a;
case 0x43b02b:c.instructions+=1;goto B43b02b;
case 0x43b02d:goto L43b02d;
case 0x43b02f:c.instructions+=9;goto B43b02f;
case 0x43b031:c.instructions+=8;goto B43b031;
case 0x43b033:c.instructions+=7;goto B43b033;
case 0x43b037:c.instructions+=6;goto B43b037;
case 0x43b038:c.instructions+=5;goto B43b038;
case 0x43b03c:c.instructions+=4;goto B43b03c;
case 0x43b03d:c.instructions+=3;goto B43b03d;
case 0x43b044:c.instructions+=2;goto B43b044;
case 0x43b045:c.instructions+=1;goto B43b045;
case 0x43b047:goto L43b047;
case 0x43b04a:c.instructions+=1;goto B43b04a;
case 0x43b04c:goto L43b04c;
case 0x43b051:c.instructions+=1;goto B43b051;
case 0x43b056:goto L43b056;
case 0x43b058:c.instructions+=5;goto B43b058;
case 0x43b05f:c.instructions+=4;goto B43b05f;
case 0x43b063:c.instructions+=3;goto B43b063;
case 0x43b065:c.instructions+=2;goto B43b065;
case 0x43b069:c.instructions+=1;goto B43b069;
case 0x43b06b:goto L43b06b;
case 0x43b06d:c.instructions+=5;goto B43b06d;
case 0x43b06f:c.instructions+=4;goto B43b06f;
case 0x43b070:c.instructions+=3;goto B43b070;
case 0x43b071:c.instructions+=2;goto B43b071;
case 0x43b072:c.instructions+=1;goto B43b072;
case 0x43b074:goto L43b074;
case 0x43b076:c.instructions+=5;goto B43b076;
case 0x43b078:c.instructions+=4;goto B43b078;
case 0x43b079:c.instructions+=3;goto B43b079;
case 0x43b07a:c.instructions+=2;goto B43b07a;
case 0x43b07b:c.instructions+=1;goto B43b07b;
case 0x43b07d:goto L43b07d;
case 0x43b07f:c.instructions+=1;goto B43b07f;
case 0x43b081:goto L43b081;
case 0x43b084:c.instructions+=1;goto B43b084;
case 0x43b086:goto L43b086;
case 0x43b088:c.instructions+=1;goto B43b088;
case 0x43b08a:goto L43b08a;
case 0x43b08c:goto L43b08c;
case 0x43b08e:c.instructions+=9;goto B43b08e;
case 0x43b091:c.instructions+=8;goto B43b091;
case 0x43b093:c.instructions+=7;goto B43b093;
case 0x43b094:c.instructions+=6;goto B43b094;
case 0x43b098:c.instructions+=5;goto B43b098;
case 0x43b099:c.instructions+=4;goto B43b099;
case 0x43b09d:c.instructions+=3;goto B43b09d;
case 0x43b09e:c.instructions+=2;goto B43b09e;
case 0x43b0a5:c.instructions+=1;goto B43b0a5;
case 0x43b0a6:goto L43b0a6;
case 0x43b0ab:goto L43b0ab;
case 0x43b0ae:c.instructions+=5;goto B43b0ae;
case 0x43b0b2:c.instructions+=4;goto B43b0b2;
case 0x43b0b3:c.instructions+=3;goto B43b0b3;
case 0x43b0b6:c.instructions+=2;goto B43b0b6;
case 0x43b0b7:c.instructions+=1;goto B43b0b7;
case 0x43b0bc:goto L43b0bc;
case 0x43b0c0:c.instructions+=4;goto B43b0c0;
case 0x43b0c1:c.instructions+=3;goto B43b0c1;
case 0x43b0c7:c.instructions+=2;goto B43b0c7;
case 0x43b0c8:c.instructions+=1;goto B43b0c8;
case 0x43b0cd:goto L43b0cd;
case 0x43b0d1:c.instructions+=6;goto B43b0d1;
case 0x43b0d2:c.instructions+=5;goto B43b0d2;
case 0x43b0d6:c.instructions+=4;goto B43b0d6;
case 0x43b0d7:c.instructions+=3;goto B43b0d7;
case 0x43b0de:c.instructions+=2;goto B43b0de;
case 0x43b0df:c.instructions+=1;goto B43b0df;
case 0x43b0e4:goto L43b0e4;
case 0x43b0eb:c.instructions+=4;goto B43b0eb;
case 0x43b0ec:c.instructions+=3;goto B43b0ec;
case 0x43b0f2:c.instructions+=2;goto B43b0f2;
case 0x43b0f3:c.instructions+=1;goto B43b0f3;
case 0x43b0f8:goto L43b0f8;
case 0x43b0fa:c.instructions+=1;goto B43b0fa;
case 0x43b0ff:goto L43b0ff;
case 0x43b101:c.instructions+=6;goto B43b101;
case 0x43b108:c.instructions+=5;goto B43b108;
case 0x43b109:c.instructions+=4;goto B43b109;
case 0x43b10c:c.instructions+=3;goto B43b10c;
case 0x43b10d:c.instructions+=2;goto B43b10d;
case 0x43b113:c.instructions+=1;goto B43b113;
case 0x43b118:goto L43b118;
case 0x43b11e:c.instructions+=3;goto B43b11e;
case 0x43b121:c.instructions+=2;goto B43b121;
case 0x43b123:c.instructions+=1;goto B43b123;
case 0x43b125:goto L43b125;
case 0x43b127:c.instructions+=1;goto B43b127;
case 0x43b12c:goto L43b12c;
case 0x43b12e:c.instructions+=1;goto B43b12e;
case 0x43b133:goto L43b133;
case 0x43b135:c.instructions+=1;goto B43b135;
case 0x43b13a:goto L43b13a;
case 0x43b13c:c.instructions+=1;goto B43b13c;
case 0x43b141:goto L43b141;
case 0x43b143:c.instructions+=1;goto B43b143;
case 0x43b148:goto L43b148;
case 0x43b14b:c.instructions+=3;goto B43b14b;
case 0x43b14d:c.instructions+=2;goto B43b14d;
case 0x43b14f:c.instructions+=1;goto B43b14f;
case 0x43b151:goto L43b151;
case 0x43b154:c.instructions+=1;goto B43b154;
case 0x43b156:goto L43b156;
case 0x43b158:c.instructions+=3;goto B43b158;
case 0x43b159:c.instructions+=2;goto B43b159;
case 0x43b15b:c.instructions+=1;goto B43b15b;
case 0x43b160:goto L43b160;
case 0x43b162:c.instructions+=3;goto B43b162;
case 0x43b164:c.instructions+=2;goto B43b164;
case 0x43b166:c.instructions+=1;goto B43b166;
case 0x43b16b:goto L43b16b;
case 0x43b16d:c.instructions+=1;goto B43b16d;
case 0x43b172:goto L43b172;
case 0x43b177:goto L43b177;
case 0x43b17a:c.instructions+=5;goto B43b17a;
case 0x43b17c:c.instructions+=4;goto B43b17c;
case 0x43b17f:c.instructions+=3;goto B43b17f;
case 0x43b181:c.instructions+=2;goto B43b181;
case 0x43b184:c.instructions+=1;goto B43b184;
case 0x43b186:goto L43b186;
case 0x43b189:goto L43b189;
case 0x43b18c:c.instructions+=2;goto B43b18c;
case 0x43b191:c.instructions+=1;goto B43b191;
case 0x43b193:goto L43b193;
case 0x43b194:c.instructions+=2;goto B43b194;
case 0x43b196:c.instructions+=1;goto B43b196;
case 0x43b19b:goto L43b19b;
case 0x43b1a0:goto L43b1a0;
case 0x43b1a1:c.instructions+=6;goto B43b1a1;
case 0x43b1a2:c.instructions+=5;goto B43b1a2;
case 0x43b1a4:c.instructions+=4;goto B43b1a4;
case 0x43b1a5:c.instructions+=3;goto B43b1a5;
case 0x43b1a7:c.instructions+=2;goto B43b1a7;
case 0x43b1a8:c.instructions+=1;goto B43b1a8;
case 0x43b1b0:goto L43b1b0;
case 0x43b1b1:c.instructions+=2;goto B43b1b1;
case 0x43b1b3:c.instructions+=1;goto B43b1b3;
case 0x43b1b8:goto L43b1b8;
case 0x43b1bd:c.instructions+=1;goto B43b1bd;
case 0x43b1bf:goto L43b1bf;
case 0x43b1c0:c.instructions+=1;goto B43b1c0;
case 0x43b1c5:goto L43b1c5;
case 0x43b1c8:goto L43b1c8;
case 0x43b1ca:c.instructions+=2;goto B43b1ca;
case 0x43b1cb:c.instructions+=1;goto B43b1cb;
case 0x43b1d0:goto L43b1d0;
case 0x43b1d1:c.instructions+=2;goto B43b1d1;
case 0x43b1d3:c.instructions+=1;goto B43b1d3;
case 0x43b1d8:goto L43b1d8;
case 0x43b1dd:c.instructions+=1;goto B43b1dd;
case 0x43b1df:goto L43b1df;
case 0x43b1e0:c.instructions+=1;goto B43b1e0;
case 0x43b1e5:goto L43b1e5;
case 0x43b1e8:goto L43b1e8;
case 0x43b1ea:c.instructions+=2;goto B43b1ea;
case 0x43b1eb:c.instructions+=1;goto B43b1eb;
case 0x43b1f0:goto L43b1f0;
case 0x43b1f4:c.instructions+=3;goto B43b1f4;
case 0x43b1f5:c.instructions+=2;goto B43b1f5;
case 0x43b1f6:c.instructions+=1;goto B43b1f6;
case 0x43b1fb:goto L43b1fb;
case 0x43b1fd:c.instructions+=2;goto B43b1fd;
case 0x43b1ff:c.instructions+=1;goto B43b1ff;
case 0x43b201:goto L43b201;
case 0x43b203:c.instructions+=1;goto B43b203;
case 0x43b208:goto L43b208;
case 0x43b20a:c.instructions+=1;goto B43b20a;
case 0x43b20f:goto L43b20f;
case 0x43b215:c.instructions+=2;goto B43b215;
case 0x43b216:c.instructions+=1;goto B43b216;
case 0x43b21b:goto L43b21b;
case 0x43b21e:c.instructions+=1;goto B43b21e;
case 0x43b223:goto L43b223;
case 0x43b226:c.instructions+=7;goto B43b226;
case 0x43b229:c.instructions+=6;goto B43b229;
case 0x43b22b:c.instructions+=5;goto B43b22b;
case 0x43b22e:c.instructions+=4;goto B43b22e;
case 0x43b230:c.instructions+=3;goto B43b230;
case 0x43b232:c.instructions+=2;goto B43b232;
case 0x43b234:c.instructions+=1;goto B43b234;
case 0x43b236:goto L43b236;
case 0x43b237:c.instructions+=1;goto B43b237;
case 0x43b240:goto L43b240;
case 0x43b242:c.instructions+=10;goto B43b242;
case 0x43b247:c.instructions+=9;goto B43b247;
case 0x43b24d:c.instructions+=8;goto B43b24d;
case 0x43b24e:c.instructions+=7;goto B43b24e;
case 0x43b255:c.instructions+=6;goto B43b255;
case 0x43b258:c.instructions+=5;goto B43b258;
case 0x43b259:c.instructions+=4;goto B43b259;
case 0x43b25a:c.instructions+=3;goto B43b25a;
case 0x43b25f:c.instructions+=2;goto B43b25f;
case 0x43b261:c.instructions+=1;goto B43b261;
case 0x43b266:goto L43b266;
case 0x43b269:c.instructions+=5;goto B43b269;
case 0x43b26d:c.instructions+=4;goto B43b26d;
case 0x43b26f:c.instructions+=3;goto B43b26f;
case 0x43b271:c.instructions+=2;goto B43b271;
case 0x43b275:c.instructions+=1;goto B43b275;
case 0x43b277:goto L43b277;
case 0x43b27b:c.instructions+=9;goto B43b27b;
case 0x43b27f:c.instructions+=8;goto B43b27f;
case 0x43b280:c.instructions+=7;goto B43b280;
case 0x43b284:c.instructions+=6;goto B43b284;
case 0x43b285:c.instructions+=5;goto B43b285;
case 0x43b289:c.instructions+=4;goto B43b289;
case 0x43b28a:c.instructions+=3;goto B43b28a;
case 0x43b28b:c.instructions+=2;goto B43b28b;
case 0x43b28d:c.instructions+=1;goto B43b28d;
case 0x43b292:goto L43b292;
case 0x43b294:goto L43b294;
case 0x43b296:c.instructions+=2;goto B43b296;
case 0x43b29e:c.instructions+=1;goto B43b29e;
case 0x43b2a3:goto L43b2a3;
case 0x43b2a5:c.instructions+=1;goto B43b2a5;
case 0x43b2a7:goto L43b2a7;
case 0x43b2aa:c.instructions+=7;goto B43b2aa;
case 0x43b2ad:c.instructions+=6;goto B43b2ad;
case 0x43b2b3:c.instructions+=5;goto B43b2b3;
case 0x43b2b7:c.instructions+=4;goto B43b2b7;
case 0x43b2b8:c.instructions+=3;goto B43b2b8;
case 0x43b2ba:c.instructions+=2;goto B43b2ba;
case 0x43b2bb:c.instructions+=1;goto B43b2bb;
case 0x43b2c0:goto L43b2c0;
case 0x43b2c4:c.instructions+=3;goto B43b2c4;
case 0x43b2c5:c.instructions+=2;goto B43b2c5;
case 0x43b2cb:c.instructions+=1;goto B43b2cb;
case 0x43b2d0:goto L43b2d0;
case 0x43b2d3:c.instructions+=13;goto B43b2d3;
case 0x43b2d6:c.instructions+=12;goto B43b2d6;
case 0x43b2d9:c.instructions+=11;goto B43b2d9;
case 0x43b2db:c.instructions+=10;goto B43b2db;
case 0x43b2de:c.instructions+=9;goto B43b2de;
case 0x43b2e1:c.instructions+=8;goto B43b2e1;
case 0x43b2e3:c.instructions+=7;goto B43b2e3;
case 0x43b2e6:c.instructions+=6;goto B43b2e6;
case 0x43b2e7:c.instructions+=5;goto B43b2e7;
case 0x43b2e8:c.instructions+=4;goto B43b2e8;
case 0x43b2ec:c.instructions+=3;goto B43b2ec;
case 0x43b2f3:c.instructions+=2;goto B43b2f3;
case 0x43b2f6:c.instructions+=1;goto B43b2f6;
case 0x43b2f9:goto L43b2f9;
case 0x43b2fd:c.instructions+=6;goto B43b2fd;
case 0x43b2fe:c.instructions+=5;goto B43b2fe;
case 0x43b300:c.instructions+=4;goto B43b300;
case 0x43b301:c.instructions+=3;goto B43b301;
case 0x43b308:c.instructions+=2;goto B43b308;
case 0x43b30b:c.instructions+=1;goto B43b30b;
case 0x43b310:goto L43b310;
case 0x43b311:c.instructions+=7;goto B43b311;
case 0x43b312:c.instructions+=6;goto B43b312;
case 0x43b316:c.instructions+=5;goto B43b316;
case 0x43b317:c.instructions+=4;goto B43b317;
case 0x43b318:c.instructions+=3;goto B43b318;
case 0x43b319:c.instructions+=2;goto B43b319;
case 0x43b31b:c.instructions+=1;goto B43b31b;
case 0x43b320:goto L43b320;
case 0x43b322:c.instructions+=3;goto B43b322;
case 0x43b324:c.instructions+=2;goto B43b324;
case 0x43b326:c.instructions+=1;goto B43b326;
case 0x43b328:goto L43b328;
case 0x43b32e:c.instructions+=1;goto B43b32e;
case 0x43b330:goto L43b330;
case 0x43b336:c.instructions+=2;goto B43b336;
case 0x43b337:c.instructions+=1;goto B43b337;
case 0x43b33c:goto L43b33c;
case 0x43b33f:c.instructions+=2;goto B43b33f;
case 0x43b341:c.instructions+=1;goto B43b341;
case 0x43b343:goto L43b343;
case 0x43b344:c.instructions+=1;goto B43b344;
case 0x43b346:goto L43b346;
case 0x43b347:c.instructions+=1;goto B43b347;
case 0x43b349:goto L43b349;
case 0x43b34b:c.instructions+=2;goto B43b34b;
case 0x43b34e:c.instructions+=1;goto B43b34e;
case 0x43b353:goto L43b353;
case 0x43b356:goto L43b356;
case 0x43b35a:c.instructions+=1;goto B43b35a;
case 0x43b35c:goto L43b35c;
case 0x43b35d:c.instructions+=2;goto B43b35d;
case 0x43b35f:c.instructions+=1;goto B43b35f;
case 0x43b364:goto L43b364;
case 0x43b365:c.instructions+=5;goto B43b365;
case 0x43b366:c.instructions+=4;goto B43b366;
case 0x43b367:c.instructions+=3;goto B43b367;
case 0x43b369:c.instructions+=2;goto B43b369;
case 0x43b36a:c.instructions+=1;goto B43b36a;
case 0x43b36d:goto L43b36d;
case 0x43b36e:c.instructions+=5;goto B43b36e;
case 0x43b36f:c.instructions+=4;goto B43b36f;
case 0x43b370:c.instructions+=3;goto B43b370;
case 0x43b372:c.instructions+=2;goto B43b372;
case 0x43b373:c.instructions+=1;goto B43b373;
case 0x43b380:goto L43b380;
case 0x43b381:c.instructions+=10;goto B43b381;
case 0x43b382:c.instructions+=9;goto B43b382;
case 0x43b383:c.instructions+=8;goto B43b383;
case 0x43b385:c.instructions+=7;goto B43b385;
case 0x43b388:c.instructions+=6;goto B43b388;
case 0x43b38a:c.instructions+=5;goto B43b38a;
case 0x43b38c:c.instructions+=4;goto B43b38c;
case 0x43b38d:c.instructions+=3;goto B43b38d;
case 0x43b38e:c.instructions+=2;goto B43b38e;
case 0x43b392:c.instructions+=1;goto B43b392;
case 0x43b394:goto L43b394;
case 0x43b397:c.instructions+=1;goto B43b397;
case 0x43b399:goto L43b399;
case 0x43b39b:c.instructions+=1;goto B43b39b;
case 0x43b3a0:goto L43b3a0;
case 0x43b3a3:c.instructions+=2;goto B43b3a3;
case 0x43b3a5:c.instructions+=1;goto B43b3a5;
case 0x43b3a7:goto L43b3a7;
case 0x43b3aa:c.instructions+=1;goto B43b3aa;
case 0x43b3ac:goto L43b3ac;
case 0x43b3ae:goto L43b3ae;
case 0x43b3b0:c.instructions+=1;goto B43b3b0;
case 0x43b3b6:goto L43b3b6;
case 0x43b3b9:c.instructions+=2;goto B43b3b9;
case 0x43b3bb:c.instructions+=1;goto B43b3bb;
case 0x43b3bd:goto L43b3bd;
case 0x43b3c0:c.instructions+=1;goto B43b3c0;
case 0x43b3c2:goto L43b3c2;
case 0x43b3c4:goto L43b3c4;
case 0x43b3ca:c.instructions+=1;goto B43b3ca;
case 0x43b3cc:goto L43b3cc;
case 0x43b3d2:c.instructions+=2;goto B43b3d2;
case 0x43b3d3:c.instructions+=1;goto B43b3d3;
case 0x43b3d8:goto L43b3d8;
case 0x43b3db:c.instructions+=2;goto B43b3db;
case 0x43b3dd:c.instructions+=1;goto B43b3dd;
case 0x43b3df:goto L43b3df;
case 0x43b3e0:c.instructions+=1;goto B43b3e0;
case 0x43b3e2:goto L43b3e2;
case 0x43b3e3:c.instructions+=1;goto B43b3e3;
case 0x43b3e5:goto L43b3e5;
case 0x43b3e7:c.instructions+=2;goto B43b3e7;
case 0x43b3ea:c.instructions+=1;goto B43b3ea;
case 0x43b3ef:goto L43b3ef;
case 0x43b3f2:goto L43b3f2;
case 0x43b3f6:c.instructions+=1;goto B43b3f6;
case 0x43b3f8:goto L43b3f8;
case 0x43b3fb:c.instructions+=3;goto B43b3fb;
case 0x43b3fc:c.instructions+=2;goto B43b3fc;
case 0x43b3fe:c.instructions+=1;goto B43b3fe;
case 0x43b403:goto L43b403;
case 0x43b405:c.instructions+=2;goto B43b405;
case 0x43b407:c.instructions+=1;goto B43b407;
case 0x43b409:goto L43b409;
case 0x43b40b:c.instructions+=1;goto B43b40b;
case 0x43b410:goto L43b410;
case 0x43b412:c.instructions+=1;goto B43b412;
case 0x43b417:goto L43b417;
case 0x43b41d:c.instructions+=2;goto B43b41d;
case 0x43b41e:c.instructions+=1;goto B43b41e;
case 0x43b423:goto L43b423;
case 0x43b426:c.instructions+=1;goto B43b426;
case 0x43b42b:goto L43b42b;
case 0x43b42e:c.instructions+=7;goto B43b42e;
case 0x43b431:c.instructions+=6;goto B43b431;
case 0x43b433:c.instructions+=5;goto B43b433;
case 0x43b436:c.instructions+=4;goto B43b436;
case 0x43b438:c.instructions+=3;goto B43b438;
case 0x43b43a:c.instructions+=2;goto B43b43a;
case 0x43b43c:c.instructions+=1;goto B43b43c;
case 0x43b43e:goto L43b43e;
case 0x43b442:c.instructions+=1;goto B43b442;
case 0x43b444:goto L43b444;
case 0x43b449:goto L43b449;
case 0x43b44b:c.instructions+=1;goto B43b44b;
case 0x43b450:goto L43b450;
case 0x43b454:c.instructions+=6;goto B43b454;
case 0x43b455:c.instructions+=5;goto B43b455;
case 0x43b456:c.instructions+=4;goto B43b456;
case 0x43b457:c.instructions+=3;goto B43b457;
case 0x43b458:c.instructions+=2;goto B43b458;
case 0x43b459:c.instructions+=1;goto B43b459;
case 0x43b460:goto L43b460;
case 0x43b461:c.instructions+=4;goto B43b461;
case 0x43b463:c.instructions+=3;goto B43b463;
case 0x43b466:c.instructions+=2;goto B43b466;
case 0x43b468:c.instructions+=1;goto B43b468;
case 0x43b46a:goto L43b46a;
case 0x43b470:c.instructions+=2;goto B43b470;
case 0x43b471:c.instructions+=1;goto B43b471;
case 0x43b476:goto L43b476;
case 0x43b479:c.instructions+=3;goto B43b479;
case 0x43b47a:c.instructions+=2;goto B43b47a;
case 0x43b47f:c.instructions+=1;goto B43b47f;
case 0x43b484:goto L43b484;
case 0x43b486:c.instructions+=2;goto B43b486;
case 0x43b488:c.instructions+=1;goto B43b488;
case 0x43b48a:goto L43b48a;
case 0x43b490:c.instructions+=3;goto B43b490;
case 0x43b491:c.instructions+=2;goto B43b491;
case 0x43b493:c.instructions+=1;goto B43b493;
case 0x43b498:goto L43b498;
case 0x43b49a:c.instructions+=1;goto B43b49a;
case 0x43b49c:goto L43b49c;
case 0x43b49f:c.instructions+=4;goto B43b49f;
case 0x43b4a0:c.instructions+=3;goto B43b4a0;
case 0x43b4a3:c.instructions+=2;goto B43b4a3;
case 0x43b4a5:c.instructions+=1;goto B43b4a5;
case 0x43b4aa:goto L43b4aa;
case 0x43b4ad:c.instructions+=3;goto B43b4ad;
case 0x43b4af:c.instructions+=2;goto B43b4af;
case 0x43b4b0:c.instructions+=1;goto B43b4b0;
case 0x43b4b2:goto L43b4b2;
case 0x43b4b8:c.instructions+=3;goto B43b4b8;
case 0x43b4be:c.instructions+=2;goto B43b4be;
case 0x43b4c0:c.instructions+=1;goto B43b4c0;
case 0x43b4c2:goto L43b4c2;
case 0x43b4c6:c.instructions+=1;goto B43b4c6;
case 0x43b4cb:goto L43b4cb;
case 0x43b4cf:goto L43b4cf;
case 0x43b4d0:c.instructions+=1;goto B43b4d0;
case 0x43b4e0:goto L43b4e0;
case 0x43b4e5:c.instructions+=4;goto B43b4e5;
case 0x43b4e7:c.instructions+=3;goto B43b4e7;
case 0x43b4e8:c.instructions+=2;goto B43b4e8;
case 0x43b4ea:c.instructions+=1;goto B43b4ea;
case 0x43b4ec:goto L43b4ec;
case 0x43b4ed:c.instructions+=3;goto B43b4ed;
case 0x43b4f0:c.instructions+=2;goto B43b4f0;
case 0x43b4f2:c.instructions+=1;goto B43b4f2;
case 0x43b4f4:goto L43b4f4;
case 0x43b4f5:c.instructions+=2;goto B43b4f5;
case 0x43b4fa:c.instructions+=1;goto B43b4fa;
case 0x43b4ff:goto L43b4ff;
case 0x43b501:c.instructions+=1;goto B43b501;
case 0x43b503:goto L43b503;
case 0x43b506:c.instructions+=2;goto B43b506;
case 0x43b508:c.instructions+=1;goto B43b508;
case 0x43b50a:goto L43b50a;
case 0x43b50d:c.instructions+=1;goto B43b50d;
case 0x43b50f:goto L43b50f;
case 0x43b510:c.instructions+=2;goto B43b510;
case 0x43b515:c.instructions+=1;goto B43b515;
case 0x43b51a:goto L43b51a;
case 0x43b51c:c.instructions+=1;goto B43b51c;
case 0x43b51e:goto L43b51e;
case 0x43b523:c.instructions+=6;goto B43b523;
case 0x43b526:c.instructions+=5;goto B43b526;
case 0x43b52c:c.instructions+=4;goto B43b52c;
case 0x43b532:c.instructions+=3;goto B43b532;
case 0x43b534:c.instructions+=2;goto B43b534;
case 0x43b537:c.instructions+=1;goto B43b537;
case 0x43b539:goto L43b539;
case 0x43b53b:c.instructions+=3;goto B43b53b;
case 0x43b53c:c.instructions+=2;goto B43b53c;
case 0x43b541:c.instructions+=1;goto B43b541;
case 0x43b546:goto L43b546;
case 0x43b549:c.instructions+=3;goto B43b549;
case 0x43b54a:c.instructions+=2;goto B43b54a;
case 0x43b54f:c.instructions+=1;goto B43b54f;
case 0x43b554:goto L43b554;
case 0x43b55b:c.instructions+=1;goto B43b55b;
case 0x43b562:goto L43b562;
case 0x43b563:goto L43b563;
case 0x43b564:c.instructions+=1;goto B43b564;
case 0x43b570:goto L43b570;
case 0x43b571:c.instructions+=7;goto B43b571;
case 0x43b572:c.instructions+=6;goto B43b572;
case 0x43b574:c.instructions+=5;goto B43b574;
case 0x43b577:c.instructions+=4;goto B43b577;
case 0x43b579:c.instructions+=3;goto B43b579;
case 0x43b57b:c.instructions+=2;goto B43b57b;
case 0x43b57c:c.instructions+=1;goto B43b57c;
case 0x43b57e:goto L43b57e;
case 0x43b583:goto L43b583;
case 0x43b585:c.instructions+=1;goto B43b585;
case 0x43b587:goto L43b587;
case 0x43b58c:goto L43b58c;
case 0x43b591:goto L43b591;
case 0x43b593:c.instructions+=1;goto B43b593;
case 0x43b595:goto L43b595;
case 0x43b59b:c.instructions+=1;goto B43b59b;
case 0x43b59d:goto L43b59d;
case 0x43b5a2:goto L43b5a2;
case 0x43b5a8:c.instructions+=1;goto B43b5a8;
case 0x43b5aa:goto L43b5aa;
case 0x43b5b0:c.instructions+=2;goto B43b5b0;
case 0x43b5b2:c.instructions+=1;goto B43b5b2;
case 0x43b5b7:goto L43b5b7;
case 0x43b5ba:c.instructions+=2;goto B43b5ba;
case 0x43b5bd:c.instructions+=1;goto B43b5bd;
case 0x43b5c0:goto L43b5c0;
case 0x43b5c3:c.instructions+=2;goto B43b5c3;
case 0x43b5c5:c.instructions+=1;goto B43b5c5;
case 0x43b5c7:goto L43b5c7;
case 0x43b5c8:c.instructions+=3;goto B43b5c8;
case 0x43b5c9:c.instructions+=2;goto B43b5c9;
case 0x43b5ce:c.instructions+=1;goto B43b5ce;
case 0x43b5d3:goto L43b5d3;
case 0x43b5d5:c.instructions+=2;goto B43b5d5;
case 0x43b5d7:c.instructions+=1;goto B43b5d7;
case 0x43b5d9:goto L43b5d9;
case 0x43b5df:c.instructions+=1;goto B43b5df;
case 0x43b5e1:goto L43b5e1;
case 0x43b5e7:c.instructions+=2;goto B43b5e7;
case 0x43b5e8:c.instructions+=1;goto B43b5e8;
case 0x43b5ed:goto L43b5ed;
case 0x43b5f0:c.instructions+=2;goto B43b5f0;
case 0x43b5f2:c.instructions+=1;goto B43b5f2;
case 0x43b5f4:goto L43b5f4;
case 0x43b5f5:c.instructions+=1;goto B43b5f5;
case 0x43b5f7:goto L43b5f7;
case 0x43b5f8:c.instructions+=1;goto B43b5f8;
case 0x43b5fa:goto L43b5fa;
case 0x43b5fc:c.instructions+=2;goto B43b5fc;
case 0x43b5ff:c.instructions+=1;goto B43b5ff;
case 0x43b604:goto L43b604;
case 0x43b607:goto L43b607;
case 0x43b608:c.instructions+=2;goto B43b608;
case 0x43b60d:c.instructions+=1;goto B43b60d;
case 0x43b612:goto L43b612;
case 0x43b618:c.instructions+=2;goto B43b618;
case 0x43b619:c.instructions+=1;goto B43b619;
case 0x43b61b:goto L43b61b;
case 0x43b620:goto L43b620;
case 0x43b626:c.instructions+=1;goto B43b626;
case 0x43b628:goto L43b628;
case 0x43b62e:c.instructions+=2;goto B43b62e;
case 0x43b630:c.instructions+=1;goto B43b630;
case 0x43b635:goto L43b635;
case 0x43b638:c.instructions+=1;goto B43b638;
case 0x43b63b:goto L43b63b;
case 0x43b63c:c.instructions+=3;goto B43b63c;
case 0x43b63d:c.instructions+=2;goto B43b63d;
case 0x43b63e:c.instructions+=1;goto B43b63e;
case 0x43b640:goto L43b640;
case 0x43b641:c.instructions+=7;goto B43b641;
case 0x43b642:c.instructions+=6;goto B43b642;
case 0x43b643:c.instructions+=5;goto B43b643;
case 0x43b645:c.instructions+=4;goto B43b645;
case 0x43b648:c.instructions+=3;goto B43b648;
case 0x43b64a:c.instructions+=2;goto B43b64a;
case 0x43b64c:c.instructions+=1;goto B43b64c;
case 0x43b64e:goto L43b64e;
case 0x43b653:goto L43b653;
case 0x43b655:c.instructions+=1;goto B43b655;
case 0x43b657:goto L43b657;
case 0x43b65c:goto L43b65c;
case 0x43b661:goto L43b661;
case 0x43b663:c.instructions+=1;goto B43b663;
case 0x43b665:goto L43b665;
case 0x43b66b:c.instructions+=1;goto B43b66b;
case 0x43b66d:goto L43b66d;
case 0x43b672:goto L43b672;
case 0x43b678:c.instructions+=1;goto B43b678;
case 0x43b67a:goto L43b67a;
case 0x43b680:c.instructions+=2;goto B43b680;
case 0x43b682:c.instructions+=1;goto B43b682;
case 0x43b687:goto L43b687;
case 0x43b68a:c.instructions+=1;goto B43b68a;
case 0x43b68c:goto L43b68c;
case 0x43b691:c.instructions+=3;goto B43b691;
case 0x43b697:c.instructions+=2;goto B43b697;
case 0x43b699:c.instructions+=1;goto B43b699;
case 0x43b69b:goto L43b69b;
case 0x43b69f:c.instructions+=1;goto B43b69f;
case 0x43b6a4:goto L43b6a4;
case 0x43b6a8:goto L43b6a8;
case 0x43b6ab:c.instructions+=2;goto B43b6ab;
case 0x43b6ae:c.instructions+=1;goto B43b6ae;
case 0x43b6b1:goto L43b6b1;
case 0x43b6b4:c.instructions+=2;goto B43b6b4;
case 0x43b6b6:c.instructions+=1;goto B43b6b6;
case 0x43b6bc:goto L43b6bc;
case 0x43b6bd:c.instructions+=3;goto B43b6bd;
case 0x43b6be:c.instructions+=2;goto B43b6be;
case 0x43b6c3:c.instructions+=1;goto B43b6c3;
case 0x43b6c8:goto L43b6c8;
case 0x43b6ca:c.instructions+=2;goto B43b6ca;
case 0x43b6cc:c.instructions+=1;goto B43b6cc;
case 0x43b6ce:goto L43b6ce;
case 0x43b6d4:c.instructions+=1;goto B43b6d4;
case 0x43b6d6:goto L43b6d6;
case 0x43b6dc:c.instructions+=2;goto B43b6dc;
case 0x43b6dd:c.instructions+=1;goto B43b6dd;
case 0x43b6e2:goto L43b6e2;
case 0x43b6e5:c.instructions+=2;goto B43b6e5;
case 0x43b6e7:c.instructions+=1;goto B43b6e7;
case 0x43b6e9:goto L43b6e9;
case 0x43b6ea:c.instructions+=1;goto B43b6ea;
case 0x43b6ec:goto L43b6ec;
case 0x43b6ed:c.instructions+=1;goto B43b6ed;
case 0x43b6ef:goto L43b6ef;
case 0x43b6f1:c.instructions+=2;goto B43b6f1;
case 0x43b6f4:c.instructions+=1;goto B43b6f4;
case 0x43b6f9:goto L43b6f9;
case 0x43b6fc:goto L43b6fc;
case 0x43b6fd:c.instructions+=2;goto B43b6fd;
case 0x43b702:c.instructions+=1;goto B43b702;
case 0x43b707:goto L43b707;
case 0x43b70d:c.instructions+=2;goto B43b70d;
case 0x43b70e:c.instructions+=1;goto B43b70e;
case 0x43b710:goto L43b710;
case 0x43b715:goto L43b715;
case 0x43b71b:c.instructions+=1;goto B43b71b;
case 0x43b71d:goto L43b71d;
case 0x43b723:c.instructions+=2;goto B43b723;
case 0x43b725:c.instructions+=1;goto B43b725;
case 0x43b72a:goto L43b72a;
case 0x43b72d:c.instructions+=1;goto B43b72d;
case 0x43b72f:goto L43b72f;
case 0x43b735:c.instructions+=3;goto B43b735;
case 0x43b73b:c.instructions+=2;goto B43b73b;
case 0x43b73d:c.instructions+=1;goto B43b73d;
case 0x43b73f:goto L43b73f;
case 0x43b743:c.instructions+=1;goto B43b743;
case 0x43b748:goto L43b748;
case 0x43b74c:goto L43b74c;
case 0x43b74f:c.instructions+=1;goto B43b74f;
case 0x43b752:goto L43b752;
case 0x43b753:c.instructions+=3;goto B43b753;
case 0x43b754:c.instructions+=2;goto B43b754;
case 0x43b755:c.instructions+=1;goto B43b755;
case 0x43b760:goto L43b760;
case 0x43b763:c.instructions+=2;goto B43b763;
case 0x43b765:c.instructions+=1;goto B43b765;
case 0x43b767:goto L43b767;
case 0x43b768:c.instructions+=3;goto B43b768;
case 0x43b769:c.instructions+=2;goto B43b769;
case 0x43b76e:c.instructions+=1;goto B43b76e;
case 0x43b773:goto L43b773;
case 0x43b775:c.instructions+=2;goto B43b775;
case 0x43b777:c.instructions+=1;goto B43b777;
case 0x43b779:goto L43b779;
case 0x43b77e:c.instructions+=3;goto B43b77e;
case 0x43b77f:c.instructions+=2;goto B43b77f;
case 0x43b781:c.instructions+=1;goto B43b781;
case 0x43b786:goto L43b786;
case 0x43b788:c.instructions+=1;goto B43b788;
case 0x43b78a:goto L43b78a;
case 0x43b78d:c.instructions+=4;goto B43b78d;
case 0x43b78e:c.instructions+=3;goto B43b78e;
case 0x43b791:c.instructions+=2;goto B43b791;
case 0x43b793:c.instructions+=1;goto B43b793;
case 0x43b798:goto L43b798;
case 0x43b799:goto L43b799;
case 0x43b7a0:goto L43b7a0;
case 0x43b7a1:c.instructions+=5;goto B43b7a1;
case 0x43b7a2:c.instructions+=4;goto B43b7a2;
case 0x43b7a4:c.instructions+=3;goto B43b7a4;
case 0x43b7a7:c.instructions+=2;goto B43b7a7;
case 0x43b7a9:c.instructions+=1;goto B43b7a9;
case 0x43b7ab:goto L43b7ab;
case 0x43b7b0:goto L43b7b0;
case 0x43b7b2:c.instructions+=1;goto B43b7b2;
case 0x43b7b4:goto L43b7b4;
case 0x43b7b9:goto L43b7b9;
case 0x43b7be:goto L43b7be;
case 0x43b7c0:c.instructions+=1;goto B43b7c0;
case 0x43b7c2:goto L43b7c2;
case 0x43b7c7:c.instructions+=2;goto B43b7c7;
case 0x43b7c9:c.instructions+=1;goto B43b7c9;
case 0x43b7cb:goto L43b7cb;
case 0x43b7d0:goto L43b7d0;
case 0x43b7d5:c.instructions+=2;goto B43b7d5;
case 0x43b7d7:c.instructions+=1;goto B43b7d7;
case 0x43b7d9:goto L43b7d9;
case 0x43b7df:c.instructions+=2;goto B43b7df;
case 0x43b7e1:c.instructions+=1;goto B43b7e1;
case 0x43b7e6:goto L43b7e6;
case 0x43b7e9:c.instructions+=2;goto B43b7e9;
case 0x43b7eb:c.instructions+=1;goto B43b7eb;
case 0x43b7ed:goto L43b7ed;
case 0x43b7f2:c.instructions+=3;goto B43b7f2;
case 0x43b7f8:c.instructions+=2;goto B43b7f8;
case 0x43b7fa:c.instructions+=1;goto B43b7fa;
case 0x43b7fc:goto L43b7fc;
case 0x43b800:c.instructions+=1;goto B43b800;
case 0x43b805:goto L43b805;
case 0x43b809:goto L43b809;
case 0x43b80b:c.instructions+=3;goto B43b80b;
case 0x43b80e:c.instructions+=2;goto B43b80e;
case 0x43b811:c.instructions+=1;goto B43b811;
case 0x43b814:goto L43b814;
case 0x43b817:c.instructions+=2;goto B43b817;
case 0x43b819:c.instructions+=1;goto B43b819;
case 0x43b81f:goto L43b81f;
case 0x43b820:c.instructions+=3;goto B43b820;
case 0x43b821:c.instructions+=2;goto B43b821;
case 0x43b826:c.instructions+=1;goto B43b826;
case 0x43b82b:goto L43b82b;
case 0x43b82d:c.instructions+=2;goto B43b82d;
case 0x43b82f:c.instructions+=1;goto B43b82f;
case 0x43b831:goto L43b831;
case 0x43b836:c.instructions+=2;goto B43b836;
case 0x43b838:c.instructions+=1;goto B43b838;
case 0x43b83a:goto L43b83a;
case 0x43b840:c.instructions+=2;goto B43b840;
case 0x43b842:c.instructions+=1;goto B43b842;
case 0x43b847:goto L43b847;
case 0x43b84a:c.instructions+=3;goto B43b84a;
case 0x43b84c:c.instructions+=2;goto B43b84c;
case 0x43b84e:c.instructions+=1;goto B43b84e;
case 0x43b850:goto L43b850;
case 0x43b851:c.instructions+=1;goto B43b851;
case 0x43b853:goto L43b853;
case 0x43b854:c.instructions+=1;goto B43b854;
case 0x43b856:goto L43b856;
case 0x43b859:c.instructions+=2;goto B43b859;
case 0x43b85b:c.instructions+=1;goto B43b85b;
case 0x43b860:goto L43b860;
case 0x43b867:goto L43b867;
case 0x43b868:c.instructions+=2;goto B43b868;
case 0x43b86d:c.instructions+=1;goto B43b86d;
case 0x43b872:goto L43b872;
case 0x43b877:c.instructions+=3;goto B43b877;
case 0x43b879:c.instructions+=2;goto B43b879;
case 0x43b87a:c.instructions+=1;goto B43b87a;
case 0x43b87c:goto L43b87c;
case 0x43b881:goto L43b881;
case 0x43b886:c.instructions+=2;goto B43b886;
case 0x43b888:c.instructions+=1;goto B43b888;
case 0x43b88a:goto L43b88a;
case 0x43b890:c.instructions+=2;goto B43b890;
case 0x43b892:c.instructions+=1;goto B43b892;
case 0x43b897:goto L43b897;
case 0x43b89a:c.instructions+=2;goto B43b89a;
case 0x43b89c:c.instructions+=1;goto B43b89c;
case 0x43b89e:goto L43b89e;
case 0x43b8a4:c.instructions+=3;goto B43b8a4;
case 0x43b8aa:c.instructions+=2;goto B43b8aa;
case 0x43b8ac:c.instructions+=1;goto B43b8ac;
case 0x43b8ae:goto L43b8ae;
case 0x43b8b2:c.instructions+=1;goto B43b8b2;
case 0x43b8b7:goto L43b8b7;
case 0x43b8bb:goto L43b8bb;
case 0x43b8bd:c.instructions+=4;goto B43b8bd;
case 0x43b8c2:c.instructions+=3;goto B43b8c2;
case 0x43b8c5:c.instructions+=2;goto B43b8c5;
case 0x43b8c8:c.instructions+=1;goto B43b8c8;
case 0x43b8cd:goto L43b8cd;
case 0x43b8cf:c.instructions+=1;goto B43b8cf;
case 0x43b8d1:goto L43b8d1;
case 0x43b8d2:c.instructions+=3;goto B43b8d2;
case 0x43b8d7:c.instructions+=2;goto B43b8d7;
case 0x43b8d8:c.instructions+=1;goto B43b8d8;
case 0x43b8dd:goto L43b8dd;
case 0x43b8de:c.instructions+=2;goto B43b8de;
case 0x43b8df:c.instructions+=1;goto B43b8df;
case 0x43b8e0:goto L43b8e0;
case 0x43b8e4:c.instructions+=5;goto B43b8e4;
case 0x43b8e5:c.instructions+=4;goto B43b8e5;
case 0x43b8e6:c.instructions+=3;goto B43b8e6;
case 0x43b8e7:c.instructions+=2;goto B43b8e7;
case 0x43b8e9:c.instructions+=1;goto B43b8e9;
case 0x43b8ee:goto L43b8ee;
case 0x43b8f1:c.instructions+=2;goto B43b8f1;
case 0x43b8f3:c.instructions+=1;goto B43b8f3;
case 0x43b8f5:goto L43b8f5;
case 0x43b8f9:c.instructions+=8;goto B43b8f9;
case 0x43b8fd:c.instructions+=7;goto B43b8fd;
case 0x43b8fe:c.instructions+=6;goto B43b8fe;
case 0x43b902:c.instructions+=5;goto B43b902;
case 0x43b903:c.instructions+=4;goto B43b903;
case 0x43b904:c.instructions+=3;goto B43b904;
case 0x43b905:c.instructions+=2;goto B43b905;
case 0x43b907:c.instructions+=1;goto B43b907;
case 0x43b90c:goto L43b90c;
case 0x43b90e:c.instructions+=2;goto B43b90e;
case 0x43b910:c.instructions+=1;goto B43b910;
case 0x43b912:goto L43b912;
case 0x43b913:c.instructions+=2;goto B43b913;
case 0x43b915:c.instructions+=1;goto B43b915;
case 0x43b91a:goto L43b91a;
case 0x43b91b:c.instructions+=3;goto B43b91b;
case 0x43b91d:c.instructions+=2;goto B43b91d;
case 0x43b91e:c.instructions+=1;goto B43b91e;
case 0x43b921:goto L43b921;
case 0x43b922:c.instructions+=3;goto B43b922;
case 0x43b924:c.instructions+=2;goto B43b924;
case 0x43b925:c.instructions+=1;goto B43b925;
case 0x43b930:goto L43b930;
case 0x43b931:c.instructions+=6;goto B43b931;
case 0x43b932:c.instructions+=5;goto B43b932;
case 0x43b934:c.instructions+=4;goto B43b934;
case 0x43b937:c.instructions+=3;goto B43b937;
case 0x43b939:c.instructions+=2;goto B43b939;
case 0x43b93b:c.instructions+=1;goto B43b93b;
case 0x43b93d:goto L43b93d;
case 0x43b943:c.instructions+=1;goto B43b943;
case 0x43b945:goto L43b945;
case 0x43b948:c.instructions+=2;goto B43b948;
case 0x43b949:c.instructions+=1;goto B43b949;
case 0x43b94e:goto L43b94e;
case 0x43b951:c.instructions+=2;goto B43b951;
case 0x43b953:c.instructions+=1;goto B43b953;
case 0x43b955:goto L43b955;
case 0x43b95b:c.instructions+=3;goto B43b95b;
case 0x43b95e:c.instructions+=2;goto B43b95e;
case 0x43b961:c.instructions+=1;goto B43b961;
case 0x43b963:goto L43b963;
case 0x43b969:c.instructions+=3;goto B43b969;
case 0x43b96f:c.instructions+=2;goto B43b96f;
case 0x43b971:c.instructions+=1;goto B43b971;
case 0x43b973:goto L43b973;
case 0x43b976:c.instructions+=1;goto B43b976;
case 0x43b97b:goto L43b97b;
case 0x43b97e:goto L43b97e;
case 0x43b981:c.instructions+=9;goto B43b981;
case 0x43b984:c.instructions+=8;goto B43b984;
case 0x43b987:c.instructions+=7;goto B43b987;
case 0x43b988:c.instructions+=6;goto B43b988;
case 0x43b98b:c.instructions+=5;goto B43b98b;
case 0x43b98c:c.instructions+=4;goto B43b98c;
case 0x43b98d:c.instructions+=3;goto B43b98d;
case 0x43b98e:c.instructions+=2;goto B43b98e;
case 0x43b993:c.instructions+=1;goto B43b993;
case 0x43b998:goto L43b998;
case 0x43b99b:goto L43b99b;
case 0x43b99c:c.instructions+=2;goto B43b99c;
case 0x43b99d:c.instructions+=1;goto B43b99d;
case 0x43b9a0:goto L43b9a0;
case 0x43b9a1:c.instructions+=5;goto B43b9a1;
case 0x43b9a2:c.instructions+=4;goto B43b9a2;
case 0x43b9a4:c.instructions+=3;goto B43b9a4;
case 0x43b9a7:c.instructions+=2;goto B43b9a7;
case 0x43b9a9:c.instructions+=1;goto B43b9a9;
case 0x43b9ab:goto L43b9ab;
case 0x43b9b0:c.instructions+=2;goto B43b9b0;
case 0x43b9b2:c.instructions+=1;goto B43b9b2;
case 0x43b9b4:goto L43b9b4;
case 0x43b9b7:c.instructions+=2;goto B43b9b7;
case 0x43b9b8:c.instructions+=1;goto B43b9b8;
case 0x43b9bd:goto L43b9bd;
case 0x43b9c0:c.instructions+=2;goto B43b9c0;
case 0x43b9c2:c.instructions+=1;goto B43b9c2;
case 0x43b9c4:goto L43b9c4;
case 0x43b9cb:c.instructions+=4;goto B43b9cb;
case 0x43b9ce:c.instructions+=3;goto B43b9ce;
case 0x43b9d0:c.instructions+=2;goto B43b9d0;
case 0x43b9d4:c.instructions+=1;goto B43b9d4;
case 0x43b9d6:goto L43b9d6;
case 0x43b9dc:c.instructions+=3;goto B43b9dc;
case 0x43b9e2:c.instructions+=2;goto B43b9e2;
case 0x43b9e4:c.instructions+=1;goto B43b9e4;
case 0x43b9e6:goto L43b9e6;
case 0x43b9ea:c.instructions+=1;goto B43b9ea;
case 0x43b9ef:goto L43b9ef;
case 0x43b9f3:goto L43b9f3;
case 0x43b9f6:c.instructions+=9;goto B43b9f6;
case 0x43b9f9:c.instructions+=8;goto B43b9f9;
case 0x43b9fc:c.instructions+=7;goto B43b9fc;
case 0x43b9fd:c.instructions+=6;goto B43b9fd;
case 0x43ba00:c.instructions+=5;goto B43ba00;
case 0x43ba01:c.instructions+=4;goto B43ba01;
case 0x43ba02:c.instructions+=3;goto B43ba02;
case 0x43ba03:c.instructions+=2;goto B43ba03;
case 0x43ba08:c.instructions+=1;goto B43ba08;
case 0x43ba0d:goto L43ba0d;
case 0x43ba10:goto L43ba10;
case 0x43ba13:c.instructions+=2;goto B43ba13;
case 0x43ba15:c.instructions+=1;goto B43ba15;
case 0x43ba1b:goto L43ba1b;
case 0x43ba1c:c.instructions+=4;goto B43ba1c;
case 0x43ba1d:c.instructions+=3;goto B43ba1d;
case 0x43ba1e:c.instructions+=2;goto B43ba1e;
case 0x43ba23:c.instructions+=1;goto B43ba23;
case 0x43ba28:goto L43ba28;
case 0x43ba2e:c.instructions+=3;goto B43ba2e;
case 0x43ba30:c.instructions+=2;goto B43ba30;
case 0x43ba32:c.instructions+=1;goto B43ba32;
case 0x43ba34:goto L43ba34;
case 0x43ba35:c.instructions+=2;goto B43ba35;
case 0x43ba37:c.instructions+=1;goto B43ba37;
case 0x43ba3c:goto L43ba3c;
case 0x43ba3e:c.instructions+=1;goto B43ba3e;
case 0x43ba40:goto L43ba40;
case 0x43ba43:c.instructions+=4;goto B43ba43;
case 0x43ba46:c.instructions+=3;goto B43ba46;
case 0x43ba48:c.instructions+=2;goto B43ba48;
case 0x43ba4b:c.instructions+=1;goto B43ba4b;
case 0x43ba4d:goto L43ba4d;
case 0x43ba4e:c.instructions+=2;goto B43ba4e;
case 0x43ba53:c.instructions+=1;goto B43ba53;
case 0x43ba58:goto L43ba58;
case 0x43ba5a:c.instructions+=2;goto B43ba5a;
case 0x43ba5c:c.instructions+=1;goto B43ba5c;
case 0x43ba5e:goto L43ba5e;
case 0x43ba5f:c.instructions+=2;goto B43ba5f;
case 0x43ba61:c.instructions+=1;goto B43ba61;
case 0x43ba66:goto L43ba66;
case 0x43ba68:c.instructions+=1;goto B43ba68;
case 0x43ba6a:goto L43ba6a;
case 0x43ba6d:c.instructions+=4;goto B43ba6d;
case 0x43ba6e:c.instructions+=3;goto B43ba6e;
case 0x43ba71:c.instructions+=2;goto B43ba71;
case 0x43ba73:c.instructions+=1;goto B43ba73;
case 0x43ba78:goto L43ba78;
case 0x43ba7b:c.instructions+=2;goto B43ba7b;
case 0x43ba7d:c.instructions+=1;goto B43ba7d;
case 0x43ba7f:goto L43ba7f;
case 0x43ba84:c.instructions+=4;goto B43ba84;
case 0x43ba8a:c.instructions+=3;goto B43ba8a;
case 0x43ba8c:c.instructions+=2;goto B43ba8c;
case 0x43ba8e:c.instructions+=1;goto B43ba8e;
case 0x43ba90:goto L43ba90;
case 0x43ba93:c.instructions+=1;goto B43ba93;
case 0x43ba98:goto L43ba98;
case 0x43ba9b:goto L43ba9b;
case 0x43ba9c:c.instructions+=1;goto B43ba9c;
case 0x43ba9d:goto L43ba9d;
case 0x43ba9e:c.instructions+=2;goto B43ba9e;
case 0x43ba9f:c.instructions+=1;goto B43ba9f;
case 0x43baa0:goto L43baa0;
case 0x43baa1:c.instructions+=6;goto B43baa1;
case 0x43baa2:c.instructions+=5;goto B43baa2;
case 0x43baa4:c.instructions+=4;goto B43baa4;
case 0x43baa7:c.instructions+=3;goto B43baa7;
case 0x43baa9:c.instructions+=2;goto B43baa9;
case 0x43baab:c.instructions+=1;goto B43baab;
case 0x43baad:goto L43baad;
case 0x43bab3:c.instructions+=1;goto B43bab3;
case 0x43bab5:goto L43bab5;
case 0x43bab8:c.instructions+=2;goto B43bab8;
case 0x43bab9:c.instructions+=1;goto B43bab9;
case 0x43babe:goto L43babe;
case 0x43bac1:c.instructions+=2;goto B43bac1;
case 0x43bac3:c.instructions+=1;goto B43bac3;
case 0x43bac5:goto L43bac5;
case 0x43bacb:c.instructions+=3;goto B43bacb;
case 0x43bace:c.instructions+=2;goto B43bace;
case 0x43bad1:c.instructions+=1;goto B43bad1;
case 0x43bad3:goto L43bad3;
case 0x43bad9:c.instructions+=3;goto B43bad9;
case 0x43badf:c.instructions+=2;goto B43badf;
case 0x43bae1:c.instructions+=1;goto B43bae1;
case 0x43bae3:goto L43bae3;
case 0x43bae6:c.instructions+=1;goto B43bae6;
case 0x43baeb:goto L43baeb;
case 0x43baee:goto L43baee;
case 0x43baf1:c.instructions+=9;goto B43baf1;
case 0x43baf4:c.instructions+=8;goto B43baf4;
case 0x43baf7:c.instructions+=7;goto B43baf7;
case 0x43baf8:c.instructions+=6;goto B43baf8;
case 0x43bafb:c.instructions+=5;goto B43bafb;
case 0x43bafc:c.instructions+=4;goto B43bafc;
case 0x43bafd:c.instructions+=3;goto B43bafd;
case 0x43bafe:c.instructions+=2;goto B43bafe;
case 0x43bb03:c.instructions+=1;goto B43bb03;
case 0x43bb08:goto L43bb08;
case 0x43bb0b:goto L43bb0b;
case 0x43bb0c:c.instructions+=2;goto B43bb0c;
case 0x43bb0d:c.instructions+=1;goto B43bb0d;
case 0x43bb10:goto L43bb10;
case 0x43bb11:c.instructions+=9;goto B43bb11;
case 0x43bb12:c.instructions+=8;goto B43bb12;
case 0x43bb13:c.instructions+=7;goto B43bb13;
case 0x43bb15:c.instructions+=6;goto B43bb15;
case 0x43bb18:c.instructions+=5;goto B43bb18;
case 0x43bb1a:c.instructions+=4;goto B43bb1a;
case 0x43bb1c:c.instructions+=3;goto B43bb1c;
case 0x43bb1d:c.instructions+=2;goto B43bb1d;
case 0x43bb22:c.instructions+=1;goto B43bb22;
case 0x43bb24:goto L43bb24;
case 0x43bb2a:c.instructions+=1;goto B43bb2a;
case 0x43bb2c:goto L43bb2c;
case 0x43bb2f:c.instructions+=2;goto B43bb2f;
case 0x43bb30:c.instructions+=1;goto B43bb30;
case 0x43bb35:goto L43bb35;
case 0x43bb38:c.instructions+=2;goto B43bb38;
case 0x43bb3a:c.instructions+=1;goto B43bb3a;
case 0x43bb3c:goto L43bb3c;
case 0x43bb42:c.instructions+=3;goto B43bb42;
case 0x43bb45:c.instructions+=2;goto B43bb45;
case 0x43bb48:c.instructions+=1;goto B43bb48;
case 0x43bb4a:goto L43bb4a;
case 0x43bb50:c.instructions+=3;goto B43bb50;
case 0x43bb56:c.instructions+=2;goto B43bb56;
case 0x43bb58:c.instructions+=1;goto B43bb58;
case 0x43bb5a:goto L43bb5a;
case 0x43bb5d:c.instructions+=1;goto B43bb5d;
case 0x43bb62:goto L43bb62;
case 0x43bb65:goto L43bb65;
case 0x43bb68:c.instructions+=9;goto B43bb68;
case 0x43bb6b:c.instructions+=8;goto B43bb6b;
case 0x43bb6e:c.instructions+=7;goto B43bb6e;
case 0x43bb6f:c.instructions+=6;goto B43bb6f;
case 0x43bb72:c.instructions+=5;goto B43bb72;
case 0x43bb73:c.instructions+=4;goto B43bb73;
case 0x43bb74:c.instructions+=3;goto B43bb74;
case 0x43bb75:c.instructions+=2;goto B43bb75;
case 0x43bb7a:c.instructions+=1;goto B43bb7a;
case 0x43bb7f:goto L43bb7f;
case 0x43bb82:c.instructions+=2;goto B43bb82;
case 0x43bb88:c.instructions+=1;goto B43bb88;
case 0x43bb8a:goto L43bb8a;
case 0x43bb8e:goto L43bb8e;
case 0x43bb91:c.instructions+=2;goto B43bb91;
case 0x43bb93:c.instructions+=1;goto B43bb93;
case 0x43bb99:goto L43bb99;
case 0x43bb9a:c.instructions+=2;goto B43bb9a;
case 0x43bb9f:c.instructions+=1;goto B43bb9f;
case 0x43bba4:goto L43bba4;
case 0x43bba6:c.instructions+=1;goto B43bba6;
case 0x43bba8:goto L43bba8;
case 0x43bbab:c.instructions+=5;goto B43bbab;
case 0x43bbae:c.instructions+=4;goto B43bbae;
case 0x43bbb0:c.instructions+=3;goto B43bbb0;
case 0x43bbb2:c.instructions+=2;goto B43bbb2;
case 0x43bbb5:c.instructions+=1;goto B43bbb5;
case 0x43bbb7:goto L43bbb7;
case 0x43bbb8:c.instructions+=2;goto B43bbb8;
case 0x43bbbd:c.instructions+=1;goto B43bbbd;
case 0x43bbc2:goto L43bbc2;
case 0x43bbc4:c.instructions+=1;goto B43bbc4;
case 0x43bbc6:goto L43bbc6;
case 0x43bbc9:c.instructions+=3;goto B43bbc9;
case 0x43bbcc:c.instructions+=2;goto B43bbcc;
case 0x43bbd0:c.instructions+=1;goto B43bbd0;
case 0x43bbd2:goto L43bbd2;
case 0x43bbd4:c.instructions+=1;goto B43bbd4;
case 0x43bbd9:goto L43bbd9;
case 0x43bbde:goto L43bbde;
case 0x43bbe2:c.instructions+=5;goto B43bbe2;
case 0x43bbe3:c.instructions+=4;goto B43bbe3;
case 0x43bbe4:c.instructions+=3;goto B43bbe4;
case 0x43bbe5:c.instructions+=2;goto B43bbe5;
case 0x43bbe6:c.instructions+=1;goto B43bbe6;
case 0x43bbe7:goto L43bbe7;
case 0x43bbe8:c.instructions+=2;goto B43bbe8;
case 0x43bbed:c.instructions+=1;goto B43bbed;
case 0x43bbf2:goto L43bbf2;
case 0x43bbf4:c.instructions+=1;goto B43bbf4;
case 0x43bbf6:goto L43bbf6;
case 0x43bbf9:c.instructions+=3;goto B43bbf9;
case 0x43bbfc:c.instructions+=2;goto B43bbfc;
case 0x43bc00:c.instructions+=1;goto B43bc00;
case 0x43bc02:goto L43bc02;
case 0x43bc04:c.instructions+=1;goto B43bc04;
case 0x43bc09:goto L43bc09;
case 0x43bc0f:c.instructions+=5;goto B43bc0f;
case 0x43bc12:c.instructions+=4;goto B43bc12;
case 0x43bc15:c.instructions+=3;goto B43bc15;
case 0x43bc17:c.instructions+=2;goto B43bc17;
case 0x43bc18:c.instructions+=1;goto B43bc18;
case 0x43bc1b:goto L43bc1b;
case 0x43bc20:c.instructions+=1;goto B43bc20;
case 0x43bc25:goto L43bc25;
case 0x43bc29:c.instructions+=5;goto B43bc29;
case 0x43bc2a:c.instructions+=4;goto B43bc2a;
case 0x43bc2b:c.instructions+=3;goto B43bc2b;
case 0x43bc2c:c.instructions+=2;goto B43bc2c;
case 0x43bc2d:c.instructions+=1;goto B43bc2d;
case 0x43bc30:goto L43bc30;
case 0x43bc31:c.instructions+=6;goto B43bc31;
case 0x43bc32:c.instructions+=5;goto B43bc32;
case 0x43bc33:c.instructions+=4;goto B43bc33;
case 0x43bc35:c.instructions+=3;goto B43bc35;
case 0x43bc38:c.instructions+=2;goto B43bc38;
case 0x43bc3a:c.instructions+=1;goto B43bc3a;
case 0x43bc40:goto L43bc40;
case 0x43bc41:c.instructions+=2;goto B43bc41;
case 0x43bc46:c.instructions+=1;goto B43bc46;
case 0x43bc4b:goto L43bc4b;
case 0x43bc4d:c.instructions+=1;goto B43bc4d;
case 0x43bc4f:goto L43bc4f;
case 0x43bc52:c.instructions+=1;goto B43bc52;
case 0x43bc54:goto L43bc54;
case 0x43bc58:goto L43bc58;
case 0x43bc5e:c.instructions+=3;goto B43bc5e;
case 0x43bc60:c.instructions+=2;goto B43bc60;
case 0x43bc63:c.instructions+=1;goto B43bc63;
case 0x43bc65:goto L43bc65;
case 0x43bc66:c.instructions+=2;goto B43bc66;
case 0x43bc6b:c.instructions+=1;goto B43bc6b;
case 0x43bc70:goto L43bc70;
case 0x43bc72:c.instructions+=2;goto B43bc72;
case 0x43bc74:c.instructions+=1;goto B43bc74;
case 0x43bc76:goto L43bc76;
case 0x43bc7b:c.instructions+=3;goto B43bc7b;
case 0x43bc7c:c.instructions+=2;goto B43bc7c;
case 0x43bc7e:c.instructions+=1;goto B43bc7e;
case 0x43bc83:goto L43bc83;
case 0x43bc85:c.instructions+=1;goto B43bc85;
case 0x43bc87:goto L43bc87;
case 0x43bc8a:c.instructions+=4;goto B43bc8a;
case 0x43bc8b:c.instructions+=3;goto B43bc8b;
case 0x43bc8e:c.instructions+=2;goto B43bc8e;
case 0x43bc90:c.instructions+=1;goto B43bc90;
case 0x43bc95:goto L43bc95;
case 0x43bc98:c.instructions+=3;goto B43bc98;
case 0x43bc99:c.instructions+=2;goto B43bc99;
case 0x43bc9e:c.instructions+=1;goto B43bc9e;
case 0x43bca3:goto L43bca3;
case 0x43bca5:c.instructions+=1;goto B43bca5;
case 0x43bca7:goto L43bca7;
case 0x43bcaa:c.instructions+=3;goto B43bcaa;
case 0x43bcad:c.instructions+=2;goto B43bcad;
case 0x43bcb1:c.instructions+=1;goto B43bcb1;
case 0x43bcb3:goto L43bcb3;
case 0x43bcb8:goto L43bcb8;
case 0x43bcba:c.instructions+=4;goto B43bcba;
case 0x43bcbb:c.instructions+=3;goto B43bcbb;
case 0x43bcbc:c.instructions+=2;goto B43bcbc;
case 0x43bcbf:c.instructions+=1;goto B43bcbf;
case 0x43bcc4:goto L43bcc4;
case 0x43bcc5:c.instructions+=3;goto B43bcc5;
case 0x43bcc6:c.instructions+=2;goto B43bcc6;
case 0x43bcc7:c.instructions+=1;goto B43bcc7;
case 0x43bcd0:goto L43bcd0;
case 0x43bcd4:c.instructions+=4;goto B43bcd4;
case 0x43bcd6:c.instructions+=3;goto B43bcd6;
case 0x43bcda:c.instructions+=2;goto B43bcda;
case 0x43bcde:c.instructions+=1;goto B43bcde;
case 0x43bce0:goto L43bce0;
case 0x43bce1:c.instructions+=3;goto B43bce1;
case 0x43bce2:c.instructions+=2;goto B43bce2;
case 0x43bce3:c.instructions+=1;goto B43bce3;
case 0x43bce5:goto L43bce5;
case 0x43bce8:c.instructions+=10;goto B43bce8;
case 0x43bcea:c.instructions+=9;goto B43bcea;
case 0x43bced:c.instructions+=8;goto B43bced;
case 0x43bcef:c.instructions+=7;goto B43bcef;
case 0x43bcf5:c.instructions+=6;goto B43bcf5;
case 0x43bcfc:c.instructions+=5;goto B43bcfc;
case 0x43bcff:c.instructions+=4;goto B43bcff;
case 0x43bd00:c.instructions+=3;goto B43bd00;
case 0x43bd02:c.instructions+=2;goto B43bd02;
case 0x43bd03:c.instructions+=1;goto B43bd03;
case 0x43bd05:goto L43bd05;
case 0x43bd07:c.instructions+=4;goto B43bd07;
case 0x43bd08:c.instructions+=3;goto B43bd08;
case 0x43bd09:c.instructions+=2;goto B43bd09;
case 0x43bd0a:c.instructions+=1;goto B43bd0a;
case 0x43bd0c:goto L43bd0c;
case 0x43bd10:goto L43bd10;
case 0x43bd12:c.instructions+=9;goto B43bd12;
case 0x43bd15:c.instructions+=8;goto B43bd15;
case 0x43bd17:c.instructions+=7;goto B43bd17;
case 0x43bd1d:c.instructions+=6;goto B43bd1d;
case 0x43bd24:c.instructions+=5;goto B43bd24;
case 0x43bd27:c.instructions+=4;goto B43bd27;
case 0x43bd2a:c.instructions+=3;goto B43bd2a;
case 0x43bd2c:c.instructions+=2;goto B43bd2c;
case 0x43bd2e:c.instructions+=1;goto B43bd2e;
case 0x43bd30:goto L43bd30;
case 0x43bd32:c.instructions+=1;goto B43bd32;
case 0x43bd40:goto L43bd40;
case 0x43bd44:c.instructions+=2;goto B43bd44;
case 0x43bd49:c.instructions+=1;goto B43bd49;
case 0x43bd50:goto L43bd50;
case 0x43bd60:goto L43bd60;
case 0x43bd61:c.instructions+=4;goto B43bd61;
case 0x43bd65:c.instructions+=3;goto B43bd65;
case 0x43bd67:c.instructions+=2;goto B43bd67;
case 0x43bd68:c.instructions+=1;goto B43bd68;
case 0x43bd6e:goto L43bd6e;
case 0x43bd70:c.instructions+=1;goto B43bd70;
case 0x43bd72:goto L43bd72;
case 0x43bd74:c.instructions+=2;goto B43bd74;
case 0x43bd75:c.instructions+=1;goto B43bd75;
case 0x43bd7b:goto L43bd7b;
case 0x43bd7d:c.instructions+=1;goto B43bd7d;
case 0x43bd7f:goto L43bd7f;
case 0x43bd81:c.instructions+=2;goto B43bd81;
case 0x43bd82:c.instructions+=1;goto B43bd82;
case 0x43bd83:goto L43bd83;
case 0x43bd88:c.instructions+=2;goto B43bd88;
case 0x43bd89:c.instructions+=1;goto B43bd89;
case 0x43bd90:goto L43bd90;
case 0x43bd93:c.instructions+=3;goto B43bd93;
case 0x43bd97:c.instructions+=2;goto B43bd97;
case 0x43bd98:c.instructions+=1;goto B43bd98;
case 0x43bd9e:goto L43bd9e;
case 0x43bda2:c.instructions+=9;goto B43bda2;
case 0x43bda4:c.instructions+=8;goto B43bda4;
case 0x43bdaa:c.instructions+=7;goto B43bdaa;
case 0x43bdb0:c.instructions+=6;goto B43bdb0;
case 0x43bdb6:c.instructions+=5;goto B43bdb6;
case 0x43bdbc:c.instructions+=4;goto B43bdbc;
case 0x43bdc2:c.instructions+=3;goto B43bdc2;
case 0x43bdc4:c.instructions+=2;goto B43bdc4;
case 0x43bdc7:c.instructions+=1;goto B43bdc7;
case 0x43bdc9:goto L43bdc9;
case 0x43bdd0:goto L43bdd0;
case 0x43bdd2:c.instructions+=6;goto B43bdd2;
case 0x43bdd3:c.instructions+=5;goto B43bdd3;
case 0x43bdd5:c.instructions+=4;goto B43bdd5;
case 0x43bddb:c.instructions+=3;goto B43bddb;
case 0x43bddd:c.instructions+=2;goto B43bddd;
case 0x43bde0:c.instructions+=1;goto B43bde0;
case 0x43bde2:goto L43bde2;
case 0x43bde8:goto L43bde8;
case 0x43bdea:c.instructions+=2;goto B43bdea;
case 0x43bded:c.instructions+=1;goto B43bded;
case 0x43bdf0:goto L43bdf0;
case 0x43bdf3:c.instructions+=3;goto B43bdf3;
case 0x43bdf7:c.instructions+=2;goto B43bdf7;
case 0x43bdf8:c.instructions+=1;goto B43bdf8;
case 0x43bdfe:goto L43bdfe;
case 0x43be02:c.instructions+=3;goto B43be02;
case 0x43be06:c.instructions+=2;goto B43be06;
case 0x43be0c:c.instructions+=1;goto B43be0c;
case 0x43be11:goto L43be11;
case 0x43be14:c.instructions+=1;goto B43be14;
case 0x43be20:goto L43be20;
case 0x43be24:c.instructions+=3;goto B43be24;
case 0x43be28:c.instructions+=2;goto B43be28;
case 0x43be2c:c.instructions+=1;goto B43be2c;
case 0x43be2e:goto L43be2e;
case 0x43be36:goto L43be36;
case 0x43be3c:c.instructions+=7;goto B43be3c;
case 0x43be41:c.instructions+=6;goto B43be41;
case 0x43be43:c.instructions+=5;goto B43be43;
case 0x43be47:c.instructions+=4;goto B43be47;
case 0x43be4b:c.instructions+=3;goto B43be4b;
case 0x43be4f:c.instructions+=2;goto B43be4f;
case 0x43be55:c.instructions+=1;goto B43be55;
case 0x43be60:goto L43be60;
case 0x43be62:c.instructions+=3;goto B43be62;
case 0x43be64:c.instructions+=2;goto B43be64;
case 0x43be66:c.instructions+=1;goto B43be66;
case 0x43be68:goto L43be68;
case 0x43be69:c.instructions+=2;goto B43be69;
case 0x43be6d:c.instructions+=1;goto B43be6d;
case 0x43be70:goto L43be70;
case 0x43be72:c.instructions+=1;goto B43be72;
case 0x43be74:goto L43be74;
case 0x43be76:c.instructions+=3;goto B43be76;
case 0x43be77:c.instructions+=2;goto B43be77;
case 0x43be79:c.instructions+=1;goto B43be79;
case 0x43be7b:goto L43be7b;
case 0x43be7c:goto L43be7c;
case 0x43be80:goto L43be80;
case 0x43be82:c.instructions+=5;goto B43be82;
case 0x43be84:c.instructions+=4;goto B43be84;
case 0x43be86:c.instructions+=3;goto B43be86;
case 0x43be87:c.instructions+=2;goto B43be87;
case 0x43be8b:c.instructions+=1;goto B43be8b;
case 0x43be8d:goto L43be8d;
case 0x43be90:goto L43be90;
case 0x43be91:c.instructions+=2;goto B43be91;
case 0x43be93:c.instructions+=1;goto B43be93;
case 0x43be95:goto L43be95;
case 0x43be97:c.instructions+=2;goto B43be97;
case 0x43be99:c.instructions+=1;goto B43be99;
case 0x43be9b:goto L43be9b;
case 0x43be9d:c.instructions+=1;goto B43be9d;
case 0x43be9f:goto L43be9f;
case 0x43bea1:goto L43bea1;
case 0x43bea2:c.instructions+=1;goto B43bea2;
case 0x43beb0:goto L43beb0;
case 0x43beb4:c.instructions+=5;goto B43beb4;
case 0x43beb6:c.instructions+=4;goto B43beb6;
case 0x43beb8:c.instructions+=3;goto B43beb8;
case 0x43beb9:c.instructions+=2;goto B43beb9;
case 0x43bebc:c.instructions+=1;goto B43bebc;
case 0x43bebe:goto L43bebe;
case 0x43bebf:c.instructions+=8;goto B43bebf;
case 0x43bec2:c.instructions+=7;goto B43bec2;
case 0x43bec4:c.instructions+=6;goto B43bec4;
case 0x43bec7:c.instructions+=5;goto B43bec7;
case 0x43bec9:c.instructions+=4;goto B43bec9;
case 0x43becc:c.instructions+=3;goto B43becc;
case 0x43bece:c.instructions+=2;goto B43bece;
case 0x43bed1:c.instructions+=1;goto B43bed1;
case 0x43bed2:goto L43bed2;
case 0x43bed3:c.instructions+=1;goto B43bed3;
case 0x43bee0:goto L43bee0;
case 0x43bee1:c.instructions+=8;goto B43bee1;
case 0x43bee2:c.instructions+=7;goto B43bee2;
case 0x43bee3:c.instructions+=6;goto B43bee3;
case 0x43bee7:c.instructions+=5;goto B43bee7;
case 0x43bee9:c.instructions+=4;goto B43bee9;
case 0x43beea:c.instructions+=3;goto B43beea;
case 0x43beec:c.instructions+=2;goto B43beec;
case 0x43beee:c.instructions+=1;goto B43beee;
case 0x43bef0:goto L43bef0;
case 0x43bef4:goto L43bef4;
case 0x43bef5:c.instructions+=2;goto B43bef5;
case 0x43bef6:c.instructions+=1;goto B43bef6;
case 0x43bef8:goto L43bef8;
case 0x43befb:c.instructions+=2;goto B43befb;
case 0x43befd:c.instructions+=1;goto B43befd;
case 0x43beff:goto L43beff;
case 0x43bf01:c.instructions+=2;goto B43bf01;
case 0x43bf03:c.instructions+=1;goto B43bf03;
case 0x43bf05:goto L43bf05;
case 0x43bf08:c.instructions+=10;goto B43bf08;
case 0x43bf0a:c.instructions+=9;goto B43bf0a;
case 0x43bf0d:c.instructions+=8;goto B43bf0d;
case 0x43bf0e:c.instructions+=7;goto B43bf0e;
case 0x43bf11:c.instructions+=6;goto B43bf11;
case 0x43bf13:c.instructions+=5;goto B43bf13;
case 0x43bf15:c.instructions+=4;goto B43bf15;
case 0x43bf16:c.instructions+=3;goto B43bf16;
case 0x43bf17:c.instructions+=2;goto B43bf17;
case 0x43bf18:c.instructions+=1;goto B43bf18;
case 0x43bf1b:goto L43bf1b;
case 0x43bf1e:c.instructions+=10;goto B43bf1e;
case 0x43bf20:c.instructions+=9;goto B43bf20;
case 0x43bf23:c.instructions+=8;goto B43bf23;
case 0x43bf25:c.instructions+=7;goto B43bf25;
case 0x43bf26:c.instructions+=6;goto B43bf26;
case 0x43bf29:c.instructions+=5;goto B43bf29;
case 0x43bf2b:c.instructions+=4;goto B43bf2b;
case 0x43bf2c:c.instructions+=3;goto B43bf2c;
case 0x43bf2d:c.instructions+=2;goto B43bf2d;
case 0x43bf2e:c.instructions+=1;goto B43bf2e;
case 0x43bf40:goto L43bf40;
case 0x43bf43:c.instructions+=4;goto B43bf43;
case 0x43bf45:c.instructions+=3;goto B43bf45;
case 0x43bf47:c.instructions+=2;goto B43bf47;
case 0x43bf4b:c.instructions+=1;goto B43bf4b;
case 0x43bf51:goto L43bf51;
case 0x43bf54:c.instructions+=18;goto B43bf54;
case 0x43bf55:c.instructions+=17;goto B43bf55;
case 0x43bf56:c.instructions+=16;goto B43bf56;
case 0x43bf59:c.instructions+=15;goto B43bf59;
case 0x43bf5c:c.instructions+=14;goto B43bf5c;
case 0x43bf5d:c.instructions+=13;goto B43bf5d;
case 0x43bf5f:c.instructions+=12;goto B43bf5f;
case 0x43bf67:c.instructions+=11;goto B43bf67;
case 0x43bf68:c.instructions+=10;goto B43bf68;
case 0x43bf6c:c.instructions+=9;goto B43bf6c;
case 0x43bf6e:c.instructions+=8;goto B43bf6e;
case 0x43bf70:c.instructions+=7;goto B43bf70;
case 0x43bf72:c.instructions+=6;goto B43bf72;
case 0x43bf74:c.instructions+=5;goto B43bf74;
case 0x43bf76:c.instructions+=4;goto B43bf76;
case 0x43bf7a:c.instructions+=3;goto B43bf7a;
case 0x43bf7e:c.instructions+=2;goto B43bf7e;
case 0x43bf82:c.instructions+=1;goto B43bf82;
case 0x43bf88:goto L43bf88;
case 0x43bf8c:c.instructions+=7;goto B43bf8c;
case 0x43bf8d:c.instructions+=6;goto B43bf8d;
case 0x43bf8f:c.instructions+=5;goto B43bf8f;
case 0x43bf91:c.instructions+=4;goto B43bf91;
case 0x43bf93:c.instructions+=3;goto B43bf93;
case 0x43bf97:c.instructions+=2;goto B43bf97;
case 0x43bf99:c.instructions+=1;goto B43bf99;
case 0x43bf9b:goto L43bf9b;
case 0x43bfa0:goto L43bfa0;
case 0x43bfa2:c.instructions+=3;goto B43bfa2;
case 0x43bfa3:c.instructions+=2;goto B43bfa3;
case 0x43bfa5:c.instructions+=1;goto B43bfa5;
case 0x43bfa7:goto L43bfa7;
case 0x43bfa9:c.instructions+=1;goto B43bfa9;
case 0x43bfab:goto L43bfab;
case 0x43bfac:c.instructions+=2;goto B43bfac;
case 0x43bfae:c.instructions+=1;goto B43bfae;
case 0x43bfb0:goto L43bfb0;
case 0x43bfb2:goto L43bfb2;
case 0x43bfb4:goto L43bfb4;
case 0x43bfb6:c.instructions+=4;goto B43bfb6;
case 0x43bfba:c.instructions+=3;goto B43bfba;
case 0x43bfc0:c.instructions+=2;goto B43bfc0;
case 0x43bfc2:c.instructions+=1;goto B43bfc2;
case 0x43bfc4:goto L43bfc4;
case 0x43bfc6:c.instructions+=1;goto B43bfc6;
case 0x43bfcc:goto L43bfcc;
case 0x43bfce:c.instructions+=1;goto B43bfce;
case 0x43bfd0:goto L43bfd0;
case 0x43bfd2:c.instructions+=1;goto B43bfd2;
case 0x43bfd4:goto L43bfd4;
case 0x43bfd6:c.instructions+=5;goto B43bfd6;
case 0x43bfd8:c.instructions+=4;goto B43bfd8;
case 0x43bfd9:c.instructions+=3;goto B43bfd9;
case 0x43bfdb:c.instructions+=2;goto B43bfdb;
case 0x43bfdf:c.instructions+=1;goto B43bfdf;
case 0x43bfe1:goto L43bfe1;
case 0x43bfe3:c.instructions+=1;goto B43bfe3;
case 0x43bfe5:goto L43bfe5;
case 0x43bfe7:c.instructions+=1;goto B43bfe7;
case 0x43bfe9:goto L43bfe9;
case 0x43bfeb:c.instructions+=1;goto B43bfeb;
case 0x43bfed:goto L43bfed;
case 0x43bfee:c.instructions+=2;goto B43bfee;
case 0x43bfef:c.instructions+=1;goto B43bfef;
case 0x43bff3:goto L43bff3;
case 0x43bff6:c.instructions+=2;goto B43bff6;
case 0x43bff8:c.instructions+=1;goto B43bff8;
case 0x43bffa:goto L43bffa;
case 0x43bffe:c.instructions+=1;goto B43bffe;
default:missing_instruction(c.pc);}
B43b000:L43b000:{c.instructions+=17;NFSU2_TR(0x43b000);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b001:{NFSU2_TR(0x43b001);
__builtin_memmove((R+20),(R+16),4);
}
B43b003:{NFSU2_TR(0x43b003);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B43b006:{NFSU2_TR(0x43b006);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x104ull))));
}
B43b00c:{NFSU2_TR(0x43b00c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b00d:{NFSU2_TR(0x43b00d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b00e:{NFSU2_TR(0x43b00e);
__builtin_memmove((R+24),(R+4),4);
}
B43b010:{NFSU2_TR(0x43b010);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43b013:{NFSU2_TR(0x43b013);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B43b016:{NFSU2_TR(0x43b016);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43b019:{NFSU2_TR(0x43b019);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43b01b:{NFSU2_TR(0x43b01b);
__builtin_memmove((R+4),(R+518),1);
}
B43b01e:{NFSU2_TR(0x43b01e);
__builtin_memmove(gp(0x827b1c),(R+4),1);
}
B43b024:{NFSU2_TR(0x43b024);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43b027:{NFSU2_TR(0x43b027);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43b02a:{NFSU2_TR(0x43b02a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b02b:{NFSU2_TR(0x43b02b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43b047;}}
}
B43b02d:L43b02d:{c.instructions+=10;NFSU2_TR(0x43b02d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b02f:{NFSU2_TR(0x43b02f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b031:{NFSU2_TR(0x43b031);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b033:{NFSU2_TR(0x43b033);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B43b037:{NFSU2_TR(0x43b037);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b038:{NFSU2_TR(0x43b038);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B43b03c:{NFSU2_TR(0x43b03c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b03d:{NFSU2_TR(0x43b03d);
u8 U[4];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B43b044:{NFSU2_TR(0x43b044);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b045:{NFSU2_TR(0x43b045);
{goto L43b0a6;}
}
B43b047:L43b047:{c.instructions+=2;NFSU2_TR(0x43b047);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43b04a:{NFSU2_TR(0x43b04a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43b07d;}}
}
B43b04c:L43b04c:{c.instructions+=2;NFSU2_TR(0x43b04c);
w4(R+4,u32(0x85ad40ull));
}
B43b051:{NFSU2_TR(0x43b051);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b056ull));
TAIL_STATIC(0x500aa0u,500);
}
B43b056:L43b056:{c.instructions+=6;NFSU2_TR(0x43b056);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43b058:{NFSU2_TR(0x43b058);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B43b05f:{NFSU2_TR(0x43b05f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B43b063:{NFSU2_TR(0x43b063);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b065:{NFSU2_TR(0x43b065);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B43b069:{NFSU2_TR(0x43b069);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43b074;}}
}
B43b06b:L43b06b:{c.instructions+=6;NFSU2_TR(0x43b06b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b06d:{NFSU2_TR(0x43b06d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b06f:{NFSU2_TR(0x43b06f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b070:{NFSU2_TR(0x43b070);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b071:{NFSU2_TR(0x43b071);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b072:{NFSU2_TR(0x43b072);
{goto L43b0a6;}
}
B43b074:L43b074:{c.instructions+=6;NFSU2_TR(0x43b074);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b076:{NFSU2_TR(0x43b076);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b078:{NFSU2_TR(0x43b078);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b079:{NFSU2_TR(0x43b079);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b07a:{NFSU2_TR(0x43b07a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b07b:{NFSU2_TR(0x43b07b);
{goto L43b0a6;}
}
B43b07d:L43b07d:{c.instructions+=2;NFSU2_TR(0x43b07d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43b07f:{NFSU2_TR(0x43b07f);
if(r1(R+518)){{goto L43b08a;}}
}
B43b081:L43b081:{c.instructions+=2;NFSU2_TR(0x43b081);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43b084:{NFSU2_TR(0x43b084);
if(r1(R+518)){{goto L43b08a;}}
}
B43b086:L43b086:{c.instructions+=2;NFSU2_TR(0x43b086);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B43b088:{NFSU2_TR(0x43b088);
{goto L43b08c;}
}
B43b08a:L43b08a:{c.instructions+=1;NFSU2_TR(0x43b08a);
w1(R+0,u8(0x1ull));
}
B43b08c:L43b08c:{c.instructions+=10;NFSU2_TR(0x43b08c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b08e:{NFSU2_TR(0x43b08e);
w4(R+8,u32(r1(R+0)));
}
B43b091:{NFSU2_TR(0x43b091);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b093:{NFSU2_TR(0x43b093);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b094:{NFSU2_TR(0x43b094);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B43b098:{NFSU2_TR(0x43b098);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b099:{NFSU2_TR(0x43b099);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B43b09d:{NFSU2_TR(0x43b09d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b09e:{NFSU2_TR(0x43b09e);
u8 U[4];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B43b0a5:{NFSU2_TR(0x43b0a5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b0a6:L43b0a6:{c.instructions+=1;NFSU2_TR(0x43b0a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b0abull));
TAIL_STATIC(0x431990u,431);
}
B43b0ab:L43b0ab:{c.instructions+=6;NFSU2_TR(0x43b0ab);
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
B43b0ae:{NFSU2_TR(0x43b0ae);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B43b0b2:{NFSU2_TR(0x43b0b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b0b3:{NFSU2_TR(0x43b0b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B43b0b6:{NFSU2_TR(0x43b0b6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b0b7:{NFSU2_TR(0x43b0b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b0bcull));
TAIL_STATIC(0x4012b0u,401);
}
B43b0bc:L43b0bc:{c.instructions+=5;NFSU2_TR(0x43b0bc);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B43b0c0:{NFSU2_TR(0x43b0c0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b0c1:{NFSU2_TR(0x43b0c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B43b0c7:{NFSU2_TR(0x43b0c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b0c8:{NFSU2_TR(0x43b0c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b0cdull));
TAIL_STATIC(0x4012b0u,401);
}
B43b0cd:L43b0cd:{c.instructions+=7;NFSU2_TR(0x43b0cd);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B43b0d1:{NFSU2_TR(0x43b0d1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b0d2:{NFSU2_TR(0x43b0d2);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B43b0d6:{NFSU2_TR(0x43b0d6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b0d7:{NFSU2_TR(0x43b0d7);
u8 U[4];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B43b0de:{NFSU2_TR(0x43b0de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b0df:{NFSU2_TR(0x43b0df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b0e4ull));
TAIL_STATIC(0x43c990u,43c);
}
B43b0e4:L43b0e4:{c.instructions+=5;NFSU2_TR(0x43b0e4);
u8 U[4];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B43b0eb:{NFSU2_TR(0x43b0eb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b0ec:{NFSU2_TR(0x43b0ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B43b0f2:{NFSU2_TR(0x43b0f2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b0f3:{NFSU2_TR(0x43b0f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b0f8ull));
TAIL_STATIC(0x4012b0u,401);
}
B43b0f8:L43b0f8:{c.instructions+=2;NFSU2_TR(0x43b0f8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b0fa:{NFSU2_TR(0x43b0fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b0ffull));
TAIL_STATIC(0x638010u,638);
}
B43b0ff:L43b0ff:{c.instructions+=7;NFSU2_TR(0x43b0ff);
__builtin_memmove((R+28),(R+0),4);
}
B43b101:{NFSU2_TR(0x43b101);
u8 U[4];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B43b108:{NFSU2_TR(0x43b108);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b109:{NFSU2_TR(0x43b109);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B43b10c:{NFSU2_TR(0x43b10c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b10d:{NFSU2_TR(0x43b10d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43b113:{NFSU2_TR(0x43b113);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b118ull));
TAIL_STATIC(0x4012b0u,401);
}
B43b118:L43b118:{c.instructions+=4;NFSU2_TR(0x43b118);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43b11e:{NFSU2_TR(0x43b11e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B43b121:{NFSU2_TR(0x43b121);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43b123:{NFSU2_TR(0x43b123);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43b12c;}}
}
B43b125:L43b125:{c.instructions+=2;NFSU2_TR(0x43b125);
__builtin_memmove((R+4),(R+28),4);
}
B43b127:{NFSU2_TR(0x43b127);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b12cull));
TAIL_STATIC(0x6147e0u,614);
}
B43b12c:L43b12c:{c.instructions+=2;NFSU2_TR(0x43b12c);
__builtin_memmove((R+4),(R+24),4);
}
B43b12e:{NFSU2_TR(0x43b12e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b133ull));
TAIL_STATIC(0x4391b0u,439);
}
B43b133:L43b133:{c.instructions+=2;NFSU2_TR(0x43b133);
__builtin_memmove((R+4),(R+24),4);
}
B43b135:{NFSU2_TR(0x43b135);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b13aull));
TAIL_STATIC(0x4328b0u,432);
}
B43b13a:L43b13a:{c.instructions+=2;NFSU2_TR(0x43b13a);
__builtin_memmove((R+4),(R+24),4);
}
B43b13c:{NFSU2_TR(0x43b13c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b141ull));
TAIL_STATIC(0x43acf0u,43a);
}
B43b141:L43b141:{c.instructions+=2;NFSU2_TR(0x43b141);
__builtin_memmove((R+4),(R+24),4);
}
B43b143:{NFSU2_TR(0x43b143);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b148ull));
TAIL_STATIC(0x435fc0u,435);
}
B43b148:L43b148:{c.instructions+=4;NFSU2_TR(0x43b148);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43b14b:{NFSU2_TR(0x43b14b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B43b14d:{NFSU2_TR(0x43b14d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43b14f:{NFSU2_TR(0x43b14f);
if(r1(R+518)){{goto L43b156;}}
}
B43b151:L43b151:{c.instructions+=2;NFSU2_TR(0x43b151);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43b154:{NFSU2_TR(0x43b154);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43b16b;}}
}
B43b156:L43b156:{c.instructions+=4;NFSU2_TR(0x43b156);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b158:{NFSU2_TR(0x43b158);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b159:{NFSU2_TR(0x43b159);
__builtin_memmove((R+4),(R+24),4);
}
B43b15b:{NFSU2_TR(0x43b15b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b160ull));
TAIL_STATIC(0x435ef0u,435);
}
B43b160:L43b160:{c.instructions+=4;NFSU2_TR(0x43b160);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b162:{NFSU2_TR(0x43b162);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b164:{NFSU2_TR(0x43b164);
__builtin_memmove((R+4),(R+24),4);
}
B43b166:{NFSU2_TR(0x43b166);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b16bull));
TAIL_STATIC(0x435ef0u,435);
}
B43b16b:L43b16b:{c.instructions+=2;NFSU2_TR(0x43b16b);
__builtin_memmove((R+4),(R+24),4);
}
B43b16d:{NFSU2_TR(0x43b16d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b172ull));
TAIL_STATIC(0x437910u,437);
}
B43b172:L43b172:{c.instructions+=1;NFSU2_TR(0x43b172);
w4(R+0,u32(0x827ba0ull));
}
B43b177:L43b177:{c.instructions+=6;NFSU2_TR(0x43b177);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43b17a:{NFSU2_TR(0x43b17a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43b17c:{NFSU2_TR(0x43b17c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43b17f:{NFSU2_TR(0x43b17f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B43b181:{NFSU2_TR(0x43b181);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43b184:{NFSU2_TR(0x43b184);
if(r1(R+518)){{goto L43b189;}}
}
B43b186:L43b186:{c.instructions+=1;NFSU2_TR(0x43b186);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43b189:L43b189:{c.instructions+=3;NFSU2_TR(0x43b189);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
}
B43b18c:{NFSU2_TR(0x43b18c);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x827c40ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x827c40ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B43b191:{NFSU2_TR(0x43b191);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43b177u);}goto L43b177;}}
}
B43b193:L43b193:{c.instructions+=3;NFSU2_TR(0x43b193);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b194:{NFSU2_TR(0x43b194);
__builtin_memmove((R+4),(R+24),4);
}
B43b196:{NFSU2_TR(0x43b196);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b19bull));
TAIL_STATIC(0x439240u,439);
}
B43b19b:L43b19b:{c.instructions+=1;NFSU2_TR(0x43b19b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b1a0ull));
TAIL_STATIC(0x4398a0u,439);
}
B43b1a0:L43b1a0:{c.instructions+=7;NFSU2_TR(0x43b1a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43b1a1:{NFSU2_TR(0x43b1a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43b1a2:{NFSU2_TR(0x43b1a2);
w1(R+0,u8(0x1ull));
}
B43b1a4:{NFSU2_TR(0x43b1a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43b1a5:{NFSU2_TR(0x43b1a5);
__builtin_memmove((R+16),(R+20),4);
}
B43b1a7:{NFSU2_TR(0x43b1a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B43b1a8:{NFSU2_TR(0x43b1a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43b1b0:L43b1b0:{c.instructions+=3;NFSU2_TR(0x43b1b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b1b1:{NFSU2_TR(0x43b1b1);
__builtin_memmove((R+24),(R+4),4);
}
B43b1b3:{NFSU2_TR(0x43b1b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b1b8ull));
TAIL_STATIC(0x43ae40u,43a);
}
B43b1b8:L43b1b8:{c.instructions+=2;NFSU2_TR(0x43b1b8);
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
B43b1bd:{NFSU2_TR(0x43b1bd);
if(r1(R+518)){{goto L43b1c8;}}
}
B43b1bf:L43b1bf:{c.instructions+=2;NFSU2_TR(0x43b1bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b1c0:{NFSU2_TR(0x43b1c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b1c5ull));
TAIL_STATIC(0x575630u,575);
}
B43b1c5:L43b1c5:{c.instructions+=1;NFSU2_TR(0x43b1c5);
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
B43b1c8:L43b1c8:{c.instructions+=3;NFSU2_TR(0x43b1c8);
__builtin_memmove((R+0),(R+24),4);
}
B43b1ca:{NFSU2_TR(0x43b1ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43b1cb:{NFSU2_TR(0x43b1cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43b1d0:L43b1d0:{c.instructions+=3;NFSU2_TR(0x43b1d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b1d1:{NFSU2_TR(0x43b1d1);
__builtin_memmove((R+24),(R+4),4);
}
B43b1d3:{NFSU2_TR(0x43b1d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b1d8ull));
TAIL_STATIC(0x43ae90u,43a);
}
B43b1d8:L43b1d8:{c.instructions+=2;NFSU2_TR(0x43b1d8);
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
B43b1dd:{NFSU2_TR(0x43b1dd);
if(r1(R+518)){{goto L43b1e8;}}
}
B43b1df:L43b1df:{c.instructions+=2;NFSU2_TR(0x43b1df);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b1e0:{NFSU2_TR(0x43b1e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b1e5ull));
TAIL_STATIC(0x575630u,575);
}
B43b1e5:L43b1e5:{c.instructions+=1;NFSU2_TR(0x43b1e5);
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
B43b1e8:L43b1e8:{c.instructions+=3;NFSU2_TR(0x43b1e8);
__builtin_memmove((R+0),(R+24),4);
}
B43b1ea:{NFSU2_TR(0x43b1ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43b1eb:{NFSU2_TR(0x43b1eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43b1f0:L43b1f0:{c.instructions+=4;NFSU2_TR(0x43b1f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43b1f4:{NFSU2_TR(0x43b1f4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b1f5:{NFSU2_TR(0x43b1f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b1f6:{NFSU2_TR(0x43b1f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b1fbull));
TAIL_STATIC(0x432490u,432);
}
B43b1fb:L43b1fb:{c.instructions+=3;NFSU2_TR(0x43b1fb);
__builtin_memmove((R+24),(R+0),4);
}
B43b1fd:{NFSU2_TR(0x43b1fd);
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
B43b1ff:{NFSU2_TR(0x43b1ff);
if(r1(R+518)){{goto L43b236;}}
}
B43b201:L43b201:{c.instructions+=2;NFSU2_TR(0x43b201);
__builtin_memmove((R+4),(R+24),4);
}
B43b203:{NFSU2_TR(0x43b203);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b208ull));
TAIL_STATIC(0x437a80u,437);
}
B43b208:L43b208:{c.instructions+=2;NFSU2_TR(0x43b208);
__builtin_memmove((R+4),(R+24),4);
}
B43b20a:{NFSU2_TR(0x43b20a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b20full));
TAIL_STATIC(0x4391b0u,439);
}
B43b20f:L43b20f:{c.instructions+=3;NFSU2_TR(0x43b20f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43b215:{NFSU2_TR(0x43b215);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b216:{NFSU2_TR(0x43b216);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b21bull));
TAIL_STATIC(0x61f5a0u,61f);
}
B43b21b:L43b21b:{c.instructions+=2;NFSU2_TR(0x43b21b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43b21e:{NFSU2_TR(0x43b21e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b223ull));
TAIL_STATIC(0x439930u,439);
}
B43b223:L43b223:{c.instructions+=8;NFSU2_TR(0x43b223);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43b226:{NFSU2_TR(0x43b226);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43b229:{NFSU2_TR(0x43b229);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B43b22b:{NFSU2_TR(0x43b22b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43b22e:{NFSU2_TR(0x43b22e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B43b230:{NFSU2_TR(0x43b230);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b232:{NFSU2_TR(0x43b232);
__builtin_memmove((R+4),(R+24),4);
}
B43b234:{NFSU2_TR(0x43b234);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b236ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B43b236:L43b236:{c.instructions+=2;NFSU2_TR(0x43b236);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43b237:{NFSU2_TR(0x43b237);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43b240:L43b240:{c.instructions+=11;NFSU2_TR(0x43b240);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b242:{NFSU2_TR(0x43b242);
u8 U[4];
w4(U+0,u32(0x771fb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b247:{NFSU2_TR(0x43b247);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43b24d:{NFSU2_TR(0x43b24d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b24e:{NFSU2_TR(0x43b24e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43b255:{NFSU2_TR(0x43b255);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B43b258:{NFSU2_TR(0x43b258);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b259:{NFSU2_TR(0x43b259);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b25a:{NFSU2_TR(0x43b25a);
u8 U[4];
w4(U+0,u32(0xc40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b25f:{NFSU2_TR(0x43b25f);
__builtin_memmove((R+28),(R+4),4);
}
B43b261:{NFSU2_TR(0x43b261);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b266ull));
TAIL_STATIC(0x575620u,575);
}
B43b266:L43b266:{c.instructions+=6;NFSU2_TR(0x43b266);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43b269:{NFSU2_TR(0x43b269);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43b26d:{NFSU2_TR(0x43b26d);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B43b26f:{NFSU2_TR(0x43b26f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43b271:{NFSU2_TR(0x43b271);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43b275:{NFSU2_TR(0x43b275);
if(r1(R+518)){{goto L43b294;}}
}
B43b277:L43b277:{c.instructions+=10;NFSU2_TR(0x43b277);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43b27b:{NFSU2_TR(0x43b27b);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43b27f:{NFSU2_TR(0x43b27f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b280:{NFSU2_TR(0x43b280);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43b284:{NFSU2_TR(0x43b284);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b285:{NFSU2_TR(0x43b285);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43b289:{NFSU2_TR(0x43b289);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b28a:{NFSU2_TR(0x43b28a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b28b:{NFSU2_TR(0x43b28b);
__builtin_memmove((R+4),(R+0),4);
}
B43b28d:{NFSU2_TR(0x43b28d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b292ull));
TAIL_STATIC(0x438f30u,438);
}
B43b292:L43b292:{c.instructions+=1;NFSU2_TR(0x43b292);
__builtin_memmove((R+24),(R+0),4);
}
B43b294:L43b294:{c.instructions+=3;NFSU2_TR(0x43b294);
__builtin_memmove((R+4),(R+24),4);
}
B43b296:{NFSU2_TR(0x43b296);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B43b29e:{NFSU2_TR(0x43b29e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b2a3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43b000u);}goto L43b000;}
}
B43b2a3:L43b2a3:{c.instructions+=2;NFSU2_TR(0x43b2a3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43b2a5:{NFSU2_TR(0x43b2a5);
if(r1(R+518)){{goto L43b2f9;}}
}
B43b2a7:L43b2a7:{c.instructions+=8;NFSU2_TR(0x43b2a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43b2aa:{NFSU2_TR(0x43b2aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43b2ad:{NFSU2_TR(0x43b2ad);
__builtin_memmove((R+4),gp(0x827ad8),4);
}
B43b2b3:{NFSU2_TR(0x43b2b3);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B43b2b7:{NFSU2_TR(0x43b2b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b2b8:{NFSU2_TR(0x43b2b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43b2ba:{NFSU2_TR(0x43b2ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b2bb:{NFSU2_TR(0x43b2bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b2c0ull));
TAIL_STATIC(0x42fbf0u,42f);
}
B43b2c0:L43b2c0:{c.instructions+=4;NFSU2_TR(0x43b2c0);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B43b2c4:{NFSU2_TR(0x43b2c4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b2c5:{NFSU2_TR(0x43b2c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+4),(U+0),4);
}
B43b2cb:{NFSU2_TR(0x43b2cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b2d0ull));
TAIL_STATIC(0x432c00u,432);
}
B43b2d0:L43b2d0:{c.instructions+=14;NFSU2_TR(0x43b2d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43b2d3:{NFSU2_TR(0x43b2d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B43b2d6:{NFSU2_TR(0x43b2d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B43b2d9:{NFSU2_TR(0x43b2d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B43b2db:{NFSU2_TR(0x43b2db);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43b2de:{NFSU2_TR(0x43b2de);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43b2e1:{NFSU2_TR(0x43b2e1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B43b2e3:{NFSU2_TR(0x43b2e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43b2e6:{NFSU2_TR(0x43b2e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43b2e7:{NFSU2_TR(0x43b2e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43b2e8:{NFSU2_TR(0x43b2e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43b2ec:{NFSU2_TR(0x43b2ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43b2f3:{NFSU2_TR(0x43b2f3);
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
B43b2f6:{NFSU2_TR(0x43b2f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43b2f9:L43b2f9:{c.instructions+=7;NFSU2_TR(0x43b2f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43b2fd:{NFSU2_TR(0x43b2fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43b2fe:{NFSU2_TR(0x43b2fe);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B43b300:{NFSU2_TR(0x43b300);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43b301:{NFSU2_TR(0x43b301);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43b308:{NFSU2_TR(0x43b308);
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
B43b30b:{NFSU2_TR(0x43b30b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43b310:L43b310:{c.instructions+=8;NFSU2_TR(0x43b310);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b311:{NFSU2_TR(0x43b311);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b312:{NFSU2_TR(0x43b312);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B43b316:{NFSU2_TR(0x43b316);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b317:{NFSU2_TR(0x43b317);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b318:{NFSU2_TR(0x43b318);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b319:{NFSU2_TR(0x43b319);
__builtin_memmove((R+28),(R+4),4);
}
B43b31b:{NFSU2_TR(0x43b31b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b320ull));
TAIL_STATIC(0x432490u,432);
}
B43b320:L43b320:{c.instructions+=4;NFSU2_TR(0x43b320);
__builtin_memmove((R+24),(R+0),4);
}
B43b322:{NFSU2_TR(0x43b322);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B43b324:{NFSU2_TR(0x43b324);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43b326:{NFSU2_TR(0x43b326);
if(r1(R+518)){{goto L43b36d;}}
}
B43b328:L43b328:{c.instructions+=2;NFSU2_TR(0x43b328);
u8 U[2];
__builtin_memmove((U+0),gp(0x827c38),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B43b32e:{NFSU2_TR(0x43b32e);
if(r1(R+518)){{goto L43b33c;}}
}
B43b330:L43b330:{c.instructions+=3;NFSU2_TR(0x43b330);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B43b336:{NFSU2_TR(0x43b336);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b337:{NFSU2_TR(0x43b337);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b33cull));
TAIL_STATIC(0x4791b0u,479);
}
B43b33c:L43b33c:{c.instructions+=3;NFSU2_TR(0x43b33c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43b33f:{NFSU2_TR(0x43b33f);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B43b341:{NFSU2_TR(0x43b341);
if(r1(R+518)){{goto L43b356;}}
}
B43b343:L43b343:{c.instructions+=2;NFSU2_TR(0x43b343);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B43b344:{NFSU2_TR(0x43b344);
if(r1(R+518)){{goto L43b349;}}
}
B43b346:L43b346:{c.instructions+=2;NFSU2_TR(0x43b346);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B43b347:{NFSU2_TR(0x43b347);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43b356;}}
}
B43b349:L43b349:{c.instructions+=3;NFSU2_TR(0x43b349);
__builtin_memmove((R+4),(R+24),4);
}
B43b34b:{NFSU2_TR(0x43b34b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43b34e:{NFSU2_TR(0x43b34e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b353ull));
TAIL_STATIC(0x439070u,439);
}
B43b353:L43b353:{c.instructions+=1;NFSU2_TR(0x43b353);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43b356:L43b356:{c.instructions+=2;NFSU2_TR(0x43b356);
u8 U[10];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+12)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B43b35a:{NFSU2_TR(0x43b35a);
if(r1(R+518)){{goto L43b364;}}
}
B43b35c:L43b35c:{c.instructions+=3;NFSU2_TR(0x43b35c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b35d:{NFSU2_TR(0x43b35d);
__builtin_memmove((R+4),(R+28),4);
}
B43b35f:{NFSU2_TR(0x43b35f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b364ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43b1f0u);}goto L43b1f0;}
}
B43b364:L43b364:{c.instructions+=6;NFSU2_TR(0x43b364);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43b365:{NFSU2_TR(0x43b365);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43b366:{NFSU2_TR(0x43b366);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B43b367:{NFSU2_TR(0x43b367);
w1(R+0,u8(0x1ull));
}
B43b369:{NFSU2_TR(0x43b369);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43b36a:{NFSU2_TR(0x43b36a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43b36d:L43b36d:{c.instructions+=6;NFSU2_TR(0x43b36d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43b36e:{NFSU2_TR(0x43b36e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43b36f:{NFSU2_TR(0x43b36f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B43b370:{NFSU2_TR(0x43b370);
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
B43b372:{NFSU2_TR(0x43b372);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43b373:{NFSU2_TR(0x43b373);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43b380:L43b380:{c.instructions+=11;NFSU2_TR(0x43b380);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b381:{NFSU2_TR(0x43b381);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b382:{NFSU2_TR(0x43b382);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b383:{NFSU2_TR(0x43b383);
__builtin_memmove((R+20),(R+4),4);
}
B43b385:{NFSU2_TR(0x43b385);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43b388:{NFSU2_TR(0x43b388);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B43b38a:{NFSU2_TR(0x43b38a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43b38c:{NFSU2_TR(0x43b38c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b38d:{NFSU2_TR(0x43b38d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b38e:{NFSU2_TR(0x43b38e);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B43b392:{NFSU2_TR(0x43b392);
if(r1(R+518)){{goto L43b399;}}
}
B43b394:L43b394:{c.instructions+=2;NFSU2_TR(0x43b394);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43b397:{NFSU2_TR(0x43b397);
{goto L43b3a0;}
}
B43b399:L43b399:{c.instructions+=2;NFSU2_TR(0x43b399);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B43b39b:{NFSU2_TR(0x43b39b);
{goto L43b3a0;}
}
B43b3a0:L43b3a0:{c.instructions+=3;NFSU2_TR(0x43b3a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B43b3a3:{NFSU2_TR(0x43b3a3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43b3a5:{NFSU2_TR(0x43b3a5);
if(r1(R+518)){{goto L43b3ac;}}
}
B43b3a7:L43b3a7:{c.instructions+=2;NFSU2_TR(0x43b3a7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
}
B43b3aa:{NFSU2_TR(0x43b3aa);
{goto L43b3ae;}
}
B43b3ac:L43b3ac:{c.instructions+=1;NFSU2_TR(0x43b3ac);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B43b3ae:L43b3ae:{c.instructions+=2;NFSU2_TR(0x43b3ae);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B43b3b0:{NFSU2_TR(0x43b3b0);
if(r1(R+518)){{goto L43b450;}}
}
B43b3b6:L43b3b6:{c.instructions+=3;NFSU2_TR(0x43b3b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43b3b9:{NFSU2_TR(0x43b3b9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43b3bb:{NFSU2_TR(0x43b3bb);
if(r1(R+518)){{goto L43b3c2;}}
}
B43b3bd:L43b3bd:{c.instructions+=2;NFSU2_TR(0x43b3bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43b3c0:{NFSU2_TR(0x43b3c0);
{goto L43b3c4;}
}
B43b3c2:L43b3c2:{c.instructions+=1;NFSU2_TR(0x43b3c2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B43b3c4:L43b3c4:{c.instructions+=2;NFSU2_TR(0x43b3c4);
u8 U[2];
__builtin_memmove((U+0),gp(0x827c38),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B43b3ca:{NFSU2_TR(0x43b3ca);
if(r1(R+518)){{goto L43b3d8;}}
}
B43b3cc:L43b3cc:{c.instructions+=3;NFSU2_TR(0x43b3cc);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B43b3d2:{NFSU2_TR(0x43b3d2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b3d3:{NFSU2_TR(0x43b3d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b3d8ull));
TAIL_STATIC(0x4791b0u,479);
}
B43b3d8:L43b3d8:{c.instructions+=3;NFSU2_TR(0x43b3d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43b3db:{NFSU2_TR(0x43b3db);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B43b3dd:{NFSU2_TR(0x43b3dd);
if(r1(R+518)){{goto L43b3f2;}}
}
B43b3df:L43b3df:{c.instructions+=2;NFSU2_TR(0x43b3df);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B43b3e0:{NFSU2_TR(0x43b3e0);
if(r1(R+518)){{goto L43b3e5;}}
}
B43b3e2:L43b3e2:{c.instructions+=2;NFSU2_TR(0x43b3e2);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B43b3e3:{NFSU2_TR(0x43b3e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43b3f2;}}
}
B43b3e5:L43b3e5:{c.instructions+=3;NFSU2_TR(0x43b3e5);
__builtin_memmove((R+4),(R+24),4);
}
B43b3e7:{NFSU2_TR(0x43b3e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43b3ea:{NFSU2_TR(0x43b3ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b3efull));
TAIL_STATIC(0x439070u,439);
}
B43b3ef:L43b3ef:{c.instructions+=1;NFSU2_TR(0x43b3ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43b3f2:L43b3f2:{c.instructions+=2;NFSU2_TR(0x43b3f2);
u8 U[7];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B43b3f6:{NFSU2_TR(0x43b3f6);
if(r1(R+518)){{goto L43b43e;}}
}
B43b3f8:L43b3f8:{c.instructions+=4;NFSU2_TR(0x43b3f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43b3fb:{NFSU2_TR(0x43b3fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b3fc:{NFSU2_TR(0x43b3fc);
__builtin_memmove((R+4),(R+20),4);
}
B43b3fe:{NFSU2_TR(0x43b3fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b403ull));
TAIL_STATIC(0x432490u,432);
}
B43b403:L43b403:{c.instructions+=3;NFSU2_TR(0x43b403);
__builtin_memmove((R+24),(R+0),4);
}
B43b405:{NFSU2_TR(0x43b405);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43b407:{NFSU2_TR(0x43b407);
if(r1(R+518)){{goto L43b43e;}}
}
B43b409:L43b409:{c.instructions+=2;NFSU2_TR(0x43b409);
__builtin_memmove((R+4),(R+24),4);
}
B43b40b:{NFSU2_TR(0x43b40b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b410ull));
TAIL_STATIC(0x437a80u,437);
}
B43b410:L43b410:{c.instructions+=2;NFSU2_TR(0x43b410);
__builtin_memmove((R+4),(R+24),4);
}
B43b412:{NFSU2_TR(0x43b412);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b417ull));
TAIL_STATIC(0x4391b0u,439);
}
B43b417:L43b417:{c.instructions+=3;NFSU2_TR(0x43b417);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43b41d:{NFSU2_TR(0x43b41d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b41e:{NFSU2_TR(0x43b41e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b423ull));
TAIL_STATIC(0x61f5a0u,61f);
}
B43b423:L43b423:{c.instructions+=2;NFSU2_TR(0x43b423);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43b426:{NFSU2_TR(0x43b426);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b42bull));
TAIL_STATIC(0x439930u,439);
}
B43b42b:L43b42b:{c.instructions+=8;NFSU2_TR(0x43b42b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43b42e:{NFSU2_TR(0x43b42e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43b431:{NFSU2_TR(0x43b431);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B43b433:{NFSU2_TR(0x43b433);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43b436:{NFSU2_TR(0x43b436);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B43b438:{NFSU2_TR(0x43b438);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b43a:{NFSU2_TR(0x43b43a);
__builtin_memmove((R+4),(R+24),4);
}
B43b43c:{NFSU2_TR(0x43b43c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b43eull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B43b43e:L43b43e:{c.instructions+=2;NFSU2_TR(0x43b43e);
u8 U[7];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B43b442:{NFSU2_TR(0x43b442);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43b449;}}
}
B43b444:L43b444:{c.instructions+=1;NFSU2_TR(0x43b444);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B43b449:L43b449:{c.instructions+=2;NFSU2_TR(0x43b449);
__builtin_memmove((R+24),(R+28),4);
}
B43b44b:{NFSU2_TR(0x43b44b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43b3a0u);}goto L43b3a0;}
}
B43b450:L43b450:{c.instructions+=7;NFSU2_TR(0x43b450);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43b454:{NFSU2_TR(0x43b454);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43b455:{NFSU2_TR(0x43b455);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43b456:{NFSU2_TR(0x43b456);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B43b457:{NFSU2_TR(0x43b457);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43b458:{NFSU2_TR(0x43b458);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B43b459:{NFSU2_TR(0x43b459);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43b460:L43b460:{c.instructions+=5;NFSU2_TR(0x43b460);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b461:{NFSU2_TR(0x43b461);
__builtin_memmove((R+28),(R+4),4);
}
B43b463:{NFSU2_TR(0x43b463);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43b466:{NFSU2_TR(0x43b466);
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
B43b468:{NFSU2_TR(0x43b468);
if(r1(R+518)){{goto L43b4cf;}}
}
B43b46a:L43b46a:{c.instructions+=3;NFSU2_TR(0x43b46a);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B43b470:{NFSU2_TR(0x43b470);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b471:{NFSU2_TR(0x43b471);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b476ull));
TAIL_STATIC(0x479200u,479);
}
B43b476:L43b476:{c.instructions+=4;NFSU2_TR(0x43b476);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43b479:{NFSU2_TR(0x43b479);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b47a:{NFSU2_TR(0x43b47a);
w4(R+4,u32(0x827b88ull));
}
B43b47f:{NFSU2_TR(0x43b47f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b484ull));
TAIL_STATIC(0x432490u,432);
}
B43b484:L43b484:{c.instructions+=3;NFSU2_TR(0x43b484);
__builtin_memmove((R+24),(R+0),4);
}
B43b486:{NFSU2_TR(0x43b486);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43b488:{NFSU2_TR(0x43b488);
if(r1(R+518)){{goto L43b4aa;}}
}
B43b48a:L43b48a:{c.instructions+=4;NFSU2_TR(0x43b48a);
__builtin_memmove((R+4),gp(0x827afc),4);
}
B43b490:{NFSU2_TR(0x43b490);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b491:{NFSU2_TR(0x43b491);
__builtin_memmove((R+4),(R+24),4);
}
B43b493:{NFSU2_TR(0x43b493);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b498ull));
TAIL_STATIC(0x432670u,432);
}
B43b498:L43b498:{c.instructions+=2;NFSU2_TR(0x43b498);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43b49a:{NFSU2_TR(0x43b49a);
if(r1(R+518)){{goto L43b4aa;}}
}
B43b49c:L43b49c:{c.instructions+=5;NFSU2_TR(0x43b49c);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43b49f:{NFSU2_TR(0x43b49f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b4a0:{NFSU2_TR(0x43b4a0);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43b4a3:{NFSU2_TR(0x43b4a3);
__builtin_memmove((R+4),(R+24),4);
}
B43b4a5:{NFSU2_TR(0x43b4a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b4aaull));
TAIL_STATIC(0x43af80u,43a);
}
B43b4aa:L43b4aa:{c.instructions+=4;NFSU2_TR(0x43b4aa);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x62ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43b4ad:{NFSU2_TR(0x43b4ad);
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
B43b4af:{NFSU2_TR(0x43b4af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43b4b0:{NFSU2_TR(0x43b4b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43b4cf;}}
}
B43b4b2:L43b4b2:{c.instructions+=4;NFSU2_TR(0x43b4b2);
__builtin_memmove((R+8),gp(0x890080),4);
}
B43b4b8:{NFSU2_TR(0x43b4b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43b4be:{NFSU2_TR(0x43b4be);
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
B43b4c0:{NFSU2_TR(0x43b4c0);
if(r1(R+518)){{goto L43b4cb;}}
}
B43b4c2:L43b4c2:{c.instructions+=2;NFSU2_TR(0x43b4c2);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x61ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B43b4c6:{NFSU2_TR(0x43b4c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b4cbull));
TAIL_STATIC(0x409a30u,409);
}
B43b4cb:L43b4cb:{c.instructions+=1;NFSU2_TR(0x43b4cb);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x62ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B43b4cf:L43b4cf:{c.instructions+=2;NFSU2_TR(0x43b4cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43b4d0:{NFSU2_TR(0x43b4d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43b4e0:L43b4e0:{c.instructions+=5;NFSU2_TR(0x43b4e0);
__builtin_memmove((R+0),gp(0x7faabc),4);
}
B43b4e5:{NFSU2_TR(0x43b4e5);
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
B43b4e7:{NFSU2_TR(0x43b4e7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b4e8:{NFSU2_TR(0x43b4e8);
__builtin_memmove((R+28),(R+4),4);
}
B43b4ea:{NFSU2_TR(0x43b4ea);
if(r1(R+518)){{goto L43b563;}}
}
B43b4ec:L43b4ec:{c.instructions+=4;NFSU2_TR(0x43b4ec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b4ed:{NFSU2_TR(0x43b4ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43b4f0:{NFSU2_TR(0x43b4f0);
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
B43b4f2:{NFSU2_TR(0x43b4f2);
if(r1(R+518)){{goto L43b562;}}
}
B43b4f4:L43b4f4:{c.instructions+=3;NFSU2_TR(0x43b4f4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b4f5:{NFSU2_TR(0x43b4f5);
w4(R+4,u32(0x827b88ull));
}
B43b4fa:{NFSU2_TR(0x43b4fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b4ffull));
TAIL_STATIC(0x432490u,432);
}
B43b4ff:L43b4ff:{c.instructions+=2;NFSU2_TR(0x43b4ff);
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
B43b501:{NFSU2_TR(0x43b501);
if(r1(R+518)){{goto L43b562;}}
}
B43b503:L43b503:{c.instructions+=3;NFSU2_TR(0x43b503);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43b506:{NFSU2_TR(0x43b506);
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
B43b508:{NFSU2_TR(0x43b508);
if(r1(R+518)){{goto L43b562;}}
}
B43b50a:L43b50a:{c.instructions+=2;NFSU2_TR(0x43b50a);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B43b50d:{NFSU2_TR(0x43b50d);
if(r1(R+518)){{goto L43b562;}}
}
B43b50f:L43b50f:{c.instructions+=3;NFSU2_TR(0x43b50f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b510:{NFSU2_TR(0x43b510);
w4(R+4,u32(0x827b88ull));
}
B43b515:{NFSU2_TR(0x43b515);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b51aull));
TAIL_STATIC(0x432540u,432);
}
B43b51a:L43b51a:{c.instructions+=2;NFSU2_TR(0x43b51a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43b51c:{NFSU2_TR(0x43b51c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43b539;}}
}
B43b51e:L43b51e:{c.instructions+=7;NFSU2_TR(0x43b51e);
__builtin_memmove((R+0),gp(0x8900ac),4);
}
B43b523:{NFSU2_TR(0x43b523);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43b526:{NFSU2_TR(0x43b526);
{u32 ea_=u32(r4(R+4)+u32(1040u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43b52c:{NFSU2_TR(0x43b52c);
{u32 ea_=u32(u32(7890136u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43b532:{NFSU2_TR(0x43b532);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43b534:{NFSU2_TR(0x43b534);
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
B43b537:{NFSU2_TR(0x43b537);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43b562;}}
}
B43b539:L43b539:{c.instructions+=4;NFSU2_TR(0x43b539);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b53b:{NFSU2_TR(0x43b53b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b53c:{NFSU2_TR(0x43b53c);
w4(R+4,u32(0x827b88ull));
}
B43b541:{NFSU2_TR(0x43b541);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b546ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43b310u);}goto L43b310;}
}
B43b546:L43b546:{c.instructions+=4;NFSU2_TR(0x43b546);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43b549:{NFSU2_TR(0x43b549);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b54a:{NFSU2_TR(0x43b54a);
w4(R+4,u32(0x827b88ull));
}
B43b54f:{NFSU2_TR(0x43b54f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b554ull));
TAIL_STATIC(0x4376f0u,437);
}
B43b554:L43b554:{c.instructions+=2;NFSU2_TR(0x43b554);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43b55b:{NFSU2_TR(0x43b55b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43b562:L43b562:{c.instructions+=1;NFSU2_TR(0x43b562);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43b563:L43b563:{c.instructions+=2;NFSU2_TR(0x43b563);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43b564:{NFSU2_TR(0x43b564);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43b570:L43b570:{c.instructions+=8;NFSU2_TR(0x43b570);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b571:{NFSU2_TR(0x43b571);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b572:{NFSU2_TR(0x43b572);
__builtin_memmove((R+20),(R+4),4);
}
B43b574:{NFSU2_TR(0x43b574);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43b577:{NFSU2_TR(0x43b577);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B43b579:{NFSU2_TR(0x43b579);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B43b57b:{NFSU2_TR(0x43b57b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b57c:{NFSU2_TR(0x43b57c);
if(r1(R+518)){{goto L43b5c0;}}
}
B43b57e:L43b57e:{c.instructions+=1;NFSU2_TR(0x43b57e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b583ull));
TAIL_STATIC(0x571060u,571);
}
B43b583:L43b583:{c.instructions+=2;NFSU2_TR(0x43b583);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43b585:{NFSU2_TR(0x43b585);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43b595;}}
}
B43b587:L43b587:{c.instructions+=1;NFSU2_TR(0x43b587);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b58cull));
TAIL_STATIC(0x57ef60u,57e);
}
B43b58c:L43b58c:{c.instructions+=1;NFSU2_TR(0x43b58c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b591ull));
TAIL_STATIC(0x571060u,571);
}
B43b591:L43b591:{c.instructions+=2;NFSU2_TR(0x43b591);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43b593:{NFSU2_TR(0x43b593);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43b587u);}goto L43b587;}}
}
B43b595:L43b595:{c.instructions+=2;NFSU2_TR(0x43b595);
u8 U[5];
__builtin_memmove((U+3),gp(0x827b00),1);
w1(R+512,u8((r1(U+3))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+3),r1(R+12)));
w1(U+4,u8(u32(r1(U+3))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43b59b:{NFSU2_TR(0x43b59b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43b5b7;}}
}
B43b59d:L43b59d:{c.instructions+=1;NFSU2_TR(0x43b59d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b5a2ull));
TAIL_STATIC(0x437660u,437);
}
B43b5a2:L43b5a2:{c.instructions+=2;NFSU2_TR(0x43b5a2);
u8 U[2];
__builtin_memmove((U+0),gp(0x827c38),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B43b5a8:{NFSU2_TR(0x43b5a8);
if(r1(R+518)){{goto L43b5b7;}}
}
B43b5aa:L43b5aa:{c.instructions+=3;NFSU2_TR(0x43b5aa);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B43b5b0:{NFSU2_TR(0x43b5b0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b5b2:{NFSU2_TR(0x43b5b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b5b7ull));
TAIL_STATIC(0x4791b0u,479);
}
B43b5b7:L43b5b7:{c.instructions+=3;NFSU2_TR(0x43b5b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43b5ba:{NFSU2_TR(0x43b5ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43b5bd:{NFSU2_TR(0x43b5bd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B43b5c0:L43b5c0:{c.instructions+=3;NFSU2_TR(0x43b5c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43b5c3:{NFSU2_TR(0x43b5c3);
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
B43b5c5:{NFSU2_TR(0x43b5c5);
if(r1(R+518)){{goto L43b63b;}}
}
B43b5c7:L43b5c7:{c.instructions+=4;NFSU2_TR(0x43b5c7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b5c8:{NFSU2_TR(0x43b5c8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b5c9:{NFSU2_TR(0x43b5c9);
w4(R+4,u32(0x827b88ull));
}
B43b5ce:{NFSU2_TR(0x43b5ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b5d3ull));
TAIL_STATIC(0x432490u,432);
}
B43b5d3:L43b5d3:{c.instructions+=3;NFSU2_TR(0x43b5d3);
__builtin_memmove((R+24),(R+0),4);
}
B43b5d5:{NFSU2_TR(0x43b5d5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43b5d7:{NFSU2_TR(0x43b5d7);
if(r1(R+518)){{goto L43b612;}}
}
B43b5d9:L43b5d9:{c.instructions+=2;NFSU2_TR(0x43b5d9);
u8 U[2];
__builtin_memmove((U+0),gp(0x827c38),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B43b5df:{NFSU2_TR(0x43b5df);
if(r1(R+518)){{goto L43b5ed;}}
}
B43b5e1:L43b5e1:{c.instructions+=3;NFSU2_TR(0x43b5e1);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B43b5e7:{NFSU2_TR(0x43b5e7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b5e8:{NFSU2_TR(0x43b5e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b5edull));
TAIL_STATIC(0x4791b0u,479);
}
B43b5ed:L43b5ed:{c.instructions+=3;NFSU2_TR(0x43b5ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43b5f0:{NFSU2_TR(0x43b5f0);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B43b5f2:{NFSU2_TR(0x43b5f2);
if(r1(R+518)){{goto L43b607;}}
}
B43b5f4:L43b5f4:{c.instructions+=2;NFSU2_TR(0x43b5f4);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B43b5f5:{NFSU2_TR(0x43b5f5);
if(r1(R+518)){{goto L43b5fa;}}
}
B43b5f7:L43b5f7:{c.instructions+=2;NFSU2_TR(0x43b5f7);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B43b5f8:{NFSU2_TR(0x43b5f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43b607;}}
}
B43b5fa:L43b5fa:{c.instructions+=3;NFSU2_TR(0x43b5fa);
__builtin_memmove((R+4),(R+24),4);
}
B43b5fc:{NFSU2_TR(0x43b5fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43b5ff:{NFSU2_TR(0x43b5ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b604ull));
TAIL_STATIC(0x439070u,439);
}
B43b604:L43b604:{c.instructions+=1;NFSU2_TR(0x43b604);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43b607:L43b607:{c.instructions+=3;NFSU2_TR(0x43b607);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b608:{NFSU2_TR(0x43b608);
w4(R+4,u32(0x827b88ull));
}
B43b60d:{NFSU2_TR(0x43b60d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b612ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43b1f0u);}goto L43b1f0;}
}
B43b612:L43b612:{c.instructions+=3;NFSU2_TR(0x43b612);
u8 U[5];
__builtin_memmove((U+3),gp(0x827b00),1);
w1(R+512,u8((r1(U+3))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+3),r1(R+12)));
w1(U+4,u8(u32(r1(U+3))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43b618:{NFSU2_TR(0x43b618);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43b619:{NFSU2_TR(0x43b619);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43b635;}}
}
B43b61b:L43b61b:{c.instructions+=1;NFSU2_TR(0x43b61b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b620ull));
TAIL_STATIC(0x437660u,437);
}
B43b620:L43b620:{c.instructions+=2;NFSU2_TR(0x43b620);
u8 U[5];
__builtin_memmove((U+3),gp(0x827c38),1);
w1(R+512,u8((r1(U+3))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+3),r1(R+12)));
w1(U+4,u8(u32(r1(U+3))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43b626:{NFSU2_TR(0x43b626);
if(r1(R+518)){{goto L43b635;}}
}
B43b628:L43b628:{c.instructions+=3;NFSU2_TR(0x43b628);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B43b62e:{NFSU2_TR(0x43b62e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b630:{NFSU2_TR(0x43b630);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b635ull));
TAIL_STATIC(0x4791b0u,479);
}
B43b635:L43b635:{c.instructions+=2;NFSU2_TR(0x43b635);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43b638:{NFSU2_TR(0x43b638);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43b63b:L43b63b:{c.instructions+=4;NFSU2_TR(0x43b63b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43b63c:{NFSU2_TR(0x43b63c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B43b63d:{NFSU2_TR(0x43b63d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43b63e:{NFSU2_TR(0x43b63e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43b640:L43b640:{c.instructions+=8;NFSU2_TR(0x43b640);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b641:{NFSU2_TR(0x43b641);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b642:{NFSU2_TR(0x43b642);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b643:{NFSU2_TR(0x43b643);
__builtin_memmove((R+28),(R+4),4);
}
B43b645:{NFSU2_TR(0x43b645);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43b648:{NFSU2_TR(0x43b648);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B43b64a:{NFSU2_TR(0x43b64a);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B43b64c:{NFSU2_TR(0x43b64c);
if(r1(R+518)){{goto L43b6b1;}}
}
B43b64e:L43b64e:{c.instructions+=1;NFSU2_TR(0x43b64e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b653ull));
TAIL_STATIC(0x571060u,571);
}
B43b653:L43b653:{c.instructions+=2;NFSU2_TR(0x43b653);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43b655:{NFSU2_TR(0x43b655);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43b665;}}
}
B43b657:L43b657:{c.instructions+=1;NFSU2_TR(0x43b657);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b65cull));
TAIL_STATIC(0x57ef60u,57e);
}
B43b65c:L43b65c:{c.instructions+=1;NFSU2_TR(0x43b65c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b661ull));
TAIL_STATIC(0x571060u,571);
}
B43b661:L43b661:{c.instructions+=2;NFSU2_TR(0x43b661);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43b663:{NFSU2_TR(0x43b663);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43b657u);}goto L43b657;}}
}
B43b665:L43b665:{c.instructions+=2;NFSU2_TR(0x43b665);
u8 U[5];
__builtin_memmove((U+3),gp(0x827b00),1);
w1(R+512,u8((r1(U+3))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+3),r1(R+12)));
w1(U+4,u8(u32(r1(U+3))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43b66b:{NFSU2_TR(0x43b66b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43b687;}}
}
B43b66d:L43b66d:{c.instructions+=1;NFSU2_TR(0x43b66d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b672ull));
TAIL_STATIC(0x437660u,437);
}
B43b672:L43b672:{c.instructions+=2;NFSU2_TR(0x43b672);
u8 U[2];
__builtin_memmove((U+0),gp(0x827c38),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B43b678:{NFSU2_TR(0x43b678);
if(r1(R+518)){{goto L43b687;}}
}
B43b67a:L43b67a:{c.instructions+=3;NFSU2_TR(0x43b67a);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B43b680:{NFSU2_TR(0x43b680);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b682:{NFSU2_TR(0x43b682);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b687ull));
TAIL_STATIC(0x4791b0u,479);
}
B43b687:L43b687:{c.instructions+=2;NFSU2_TR(0x43b687);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x62ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B43b68a:{NFSU2_TR(0x43b68a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43b6a8;}}
}
B43b68c:L43b68c:{c.instructions+=4;NFSU2_TR(0x43b68c);
__builtin_memmove((R+0),gp(0x890080),4);
}
B43b691:{NFSU2_TR(0x43b691);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43b697:{NFSU2_TR(0x43b697);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43b699:{NFSU2_TR(0x43b699);
if(r1(R+518)){{goto L43b6a4;}}
}
B43b69b:L43b69b:{c.instructions+=2;NFSU2_TR(0x43b69b);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x61ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B43b69f:{NFSU2_TR(0x43b69f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b6a4ull));
TAIL_STATIC(0x409a30u,409);
}
B43b6a4:L43b6a4:{c.instructions+=1;NFSU2_TR(0x43b6a4);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x62ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B43b6a8:L43b6a8:{c.instructions+=3;NFSU2_TR(0x43b6a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43b6ab:{NFSU2_TR(0x43b6ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43b6ae:{NFSU2_TR(0x43b6ae);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B43b6b1:L43b6b1:{c.instructions+=3;NFSU2_TR(0x43b6b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B43b6b4:{NFSU2_TR(0x43b6b4);
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
B43b6b6:{NFSU2_TR(0x43b6b6);
if(r1(R+518)){{goto L43b752;}}
}
B43b6bc:L43b6bc:{c.instructions+=4;NFSU2_TR(0x43b6bc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b6bd:{NFSU2_TR(0x43b6bd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b6be:{NFSU2_TR(0x43b6be);
w4(R+4,u32(0x827b88ull));
}
B43b6c3:{NFSU2_TR(0x43b6c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b6c8ull));
TAIL_STATIC(0x432490u,432);
}
B43b6c8:L43b6c8:{c.instructions+=3;NFSU2_TR(0x43b6c8);
__builtin_memmove((R+24),(R+0),4);
}
B43b6ca:{NFSU2_TR(0x43b6ca);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43b6cc:{NFSU2_TR(0x43b6cc);
if(r1(R+518)){{goto L43b707;}}
}
B43b6ce:L43b6ce:{c.instructions+=2;NFSU2_TR(0x43b6ce);
u8 U[2];
__builtin_memmove((U+0),gp(0x827c38),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B43b6d4:{NFSU2_TR(0x43b6d4);
if(r1(R+518)){{goto L43b6e2;}}
}
B43b6d6:L43b6d6:{c.instructions+=3;NFSU2_TR(0x43b6d6);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B43b6dc:{NFSU2_TR(0x43b6dc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b6dd:{NFSU2_TR(0x43b6dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b6e2ull));
TAIL_STATIC(0x4791b0u,479);
}
B43b6e2:L43b6e2:{c.instructions+=3;NFSU2_TR(0x43b6e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43b6e5:{NFSU2_TR(0x43b6e5);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B43b6e7:{NFSU2_TR(0x43b6e7);
if(r1(R+518)){{goto L43b6fc;}}
}
B43b6e9:L43b6e9:{c.instructions+=2;NFSU2_TR(0x43b6e9);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B43b6ea:{NFSU2_TR(0x43b6ea);
if(r1(R+518)){{goto L43b6ef;}}
}
B43b6ec:L43b6ec:{c.instructions+=2;NFSU2_TR(0x43b6ec);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B43b6ed:{NFSU2_TR(0x43b6ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43b6fc;}}
}
B43b6ef:L43b6ef:{c.instructions+=3;NFSU2_TR(0x43b6ef);
__builtin_memmove((R+4),(R+24),4);
}
B43b6f1:{NFSU2_TR(0x43b6f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43b6f4:{NFSU2_TR(0x43b6f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b6f9ull));
TAIL_STATIC(0x439070u,439);
}
B43b6f9:L43b6f9:{c.instructions+=1;NFSU2_TR(0x43b6f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43b6fc:L43b6fc:{c.instructions+=3;NFSU2_TR(0x43b6fc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b6fd:{NFSU2_TR(0x43b6fd);
w4(R+4,u32(0x827b88ull));
}
B43b702:{NFSU2_TR(0x43b702);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b707ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43b1f0u);}goto L43b1f0;}
}
B43b707:L43b707:{c.instructions+=3;NFSU2_TR(0x43b707);
u8 U[5];
__builtin_memmove((U+3),gp(0x827b00),1);
w1(R+512,u8((r1(U+3))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+3),r1(R+12)));
w1(U+4,u8(u32(r1(U+3))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43b70d:{NFSU2_TR(0x43b70d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43b70e:{NFSU2_TR(0x43b70e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43b72a;}}
}
B43b710:L43b710:{c.instructions+=1;NFSU2_TR(0x43b710);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b715ull));
TAIL_STATIC(0x437660u,437);
}
B43b715:L43b715:{c.instructions+=2;NFSU2_TR(0x43b715);
u8 U[2];
__builtin_memmove((U+0),gp(0x827c38),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B43b71b:{NFSU2_TR(0x43b71b);
if(r1(R+518)){{goto L43b72a;}}
}
B43b71d:L43b71d:{c.instructions+=3;NFSU2_TR(0x43b71d);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B43b723:{NFSU2_TR(0x43b723);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b725:{NFSU2_TR(0x43b725);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b72aull));
TAIL_STATIC(0x4791b0u,479);
}
B43b72a:L43b72a:{c.instructions+=2;NFSU2_TR(0x43b72a);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x62ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+12)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B43b72d:{NFSU2_TR(0x43b72d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43b74c;}}
}
B43b72f:L43b72f:{c.instructions+=4;NFSU2_TR(0x43b72f);
__builtin_memmove((R+4),gp(0x890080),4);
}
B43b735:{NFSU2_TR(0x43b735);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43b73b:{NFSU2_TR(0x43b73b);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B43b73d:{NFSU2_TR(0x43b73d);
if(r1(R+518)){{goto L43b748;}}
}
B43b73f:L43b73f:{c.instructions+=2;NFSU2_TR(0x43b73f);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x61ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B43b743:{NFSU2_TR(0x43b743);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b748ull));
TAIL_STATIC(0x409a30u,409);
}
B43b748:L43b748:{c.instructions+=1;NFSU2_TR(0x43b748);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x62ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B43b74c:L43b74c:{c.instructions+=2;NFSU2_TR(0x43b74c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43b74f:{NFSU2_TR(0x43b74f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43b752:L43b752:{c.instructions+=4;NFSU2_TR(0x43b752);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43b753:{NFSU2_TR(0x43b753);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B43b754:{NFSU2_TR(0x43b754);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43b755:{NFSU2_TR(0x43b755);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43b760:L43b760:{c.instructions+=3;NFSU2_TR(0x43b760);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43b763:{NFSU2_TR(0x43b763);
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
B43b765:{NFSU2_TR(0x43b765);
if(r1(R+518)){{goto L43b799;}}
}
B43b767:L43b767:{c.instructions+=4;NFSU2_TR(0x43b767);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b768:{NFSU2_TR(0x43b768);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b769:{NFSU2_TR(0x43b769);
w4(R+4,u32(0x827b88ull));
}
B43b76e:{NFSU2_TR(0x43b76e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b773ull));
TAIL_STATIC(0x432490u,432);
}
B43b773:L43b773:{c.instructions+=3;NFSU2_TR(0x43b773);
__builtin_memmove((R+24),(R+0),4);
}
B43b775:{NFSU2_TR(0x43b775);
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
B43b777:{NFSU2_TR(0x43b777);
if(r1(R+518)){{goto L43b798;}}
}
B43b779:L43b779:{c.instructions+=4;NFSU2_TR(0x43b779);
__builtin_memmove((R+0),gp(0x827afc),4);
}
B43b77e:{NFSU2_TR(0x43b77e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b77f:{NFSU2_TR(0x43b77f);
__builtin_memmove((R+4),(R+24),4);
}
B43b781:{NFSU2_TR(0x43b781);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b786ull));
TAIL_STATIC(0x432670u,432);
}
B43b786:L43b786:{c.instructions+=2;NFSU2_TR(0x43b786);
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
B43b788:{NFSU2_TR(0x43b788);
if(r1(R+518)){{goto L43b798;}}
}
B43b78a:L43b78a:{c.instructions+=5;NFSU2_TR(0x43b78a);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43b78d:{NFSU2_TR(0x43b78d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b78e:{NFSU2_TR(0x43b78e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43b791:{NFSU2_TR(0x43b791);
__builtin_memmove((R+4),(R+24),4);
}
B43b793:{NFSU2_TR(0x43b793);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b798ull));
TAIL_STATIC(0x43af80u,43a);
}
B43b798:L43b798:{c.instructions+=1;NFSU2_TR(0x43b798);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43b799:L43b799:{c.instructions+=1;NFSU2_TR(0x43b799);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43b7a0:L43b7a0:{c.instructions+=6;NFSU2_TR(0x43b7a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b7a1:{NFSU2_TR(0x43b7a1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b7a2:{NFSU2_TR(0x43b7a2);
__builtin_memmove((R+28),(R+4),4);
}
B43b7a4:{NFSU2_TR(0x43b7a4);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43b7a7:{NFSU2_TR(0x43b7a7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43b7a9:{NFSU2_TR(0x43b7a9);
if(r1(R+518)){{goto L43b814;}}
}
B43b7ab:L43b7ab:{c.instructions+=1;NFSU2_TR(0x43b7ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b7b0ull));
TAIL_STATIC(0x571060u,571);
}
B43b7b0:L43b7b0:{c.instructions+=2;NFSU2_TR(0x43b7b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43b7b2:{NFSU2_TR(0x43b7b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43b7c2;}}
}
B43b7b4:L43b7b4:{c.instructions+=1;NFSU2_TR(0x43b7b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b7b9ull));
TAIL_STATIC(0x57ef60u,57e);
}
B43b7b9:L43b7b9:{c.instructions+=1;NFSU2_TR(0x43b7b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b7beull));
TAIL_STATIC(0x571060u,571);
}
B43b7be:L43b7be:{c.instructions+=2;NFSU2_TR(0x43b7be);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43b7c0:{NFSU2_TR(0x43b7c0);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43b7b4u);}goto L43b7b4;}}
}
B43b7c2:L43b7c2:{c.instructions+=3;NFSU2_TR(0x43b7c2);
__builtin_memmove((R+0),gp(0x827b00),1);
}
B43b7c7:{NFSU2_TR(0x43b7c7);
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
B43b7c9:{NFSU2_TR(0x43b7c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43b7e6;}}
}
B43b7cb:L43b7cb:{c.instructions+=1;NFSU2_TR(0x43b7cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b7d0ull));
TAIL_STATIC(0x437660u,437);
}
B43b7d0:L43b7d0:{c.instructions+=3;NFSU2_TR(0x43b7d0);
__builtin_memmove((R+0),gp(0x827c38),1);
}
B43b7d5:{NFSU2_TR(0x43b7d5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43b7d7:{NFSU2_TR(0x43b7d7);
if(r1(R+518)){{goto L43b7e6;}}
}
B43b7d9:L43b7d9:{c.instructions+=3;NFSU2_TR(0x43b7d9);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B43b7df:{NFSU2_TR(0x43b7df);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b7e1:{NFSU2_TR(0x43b7e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b7e6ull));
TAIL_STATIC(0x4791b0u,479);
}
B43b7e6:L43b7e6:{c.instructions+=3;NFSU2_TR(0x43b7e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x62ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43b7e9:{NFSU2_TR(0x43b7e9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43b7eb:{NFSU2_TR(0x43b7eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43b809;}}
}
B43b7ed:L43b7ed:{c.instructions+=4;NFSU2_TR(0x43b7ed);
__builtin_memmove((R+0),gp(0x890080),4);
}
B43b7f2:{NFSU2_TR(0x43b7f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43b7f8:{NFSU2_TR(0x43b7f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43b7fa:{NFSU2_TR(0x43b7fa);
if(r1(R+518)){{goto L43b805;}}
}
B43b7fc:L43b7fc:{c.instructions+=2;NFSU2_TR(0x43b7fc);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x61ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B43b800:{NFSU2_TR(0x43b800);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b805ull));
TAIL_STATIC(0x409a30u,409);
}
B43b805:L43b805:{c.instructions+=1;NFSU2_TR(0x43b805);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x62ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B43b809:L43b809:{c.instructions+=4;NFSU2_TR(0x43b809);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B43b80b:{NFSU2_TR(0x43b80b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43b80e:{NFSU2_TR(0x43b80e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43b811:{NFSU2_TR(0x43b811);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B43b814:L43b814:{c.instructions+=3;NFSU2_TR(0x43b814);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B43b817:{NFSU2_TR(0x43b817);
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
B43b819:{NFSU2_TR(0x43b819);
if(r1(R+518)){{goto L43b8dd;}}
}
B43b81f:L43b81f:{c.instructions+=4;NFSU2_TR(0x43b81f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b820:{NFSU2_TR(0x43b820);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b821:{NFSU2_TR(0x43b821);
w4(R+4,u32(0x827b88ull));
}
B43b826:{NFSU2_TR(0x43b826);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b82bull));
TAIL_STATIC(0x432490u,432);
}
B43b82b:L43b82b:{c.instructions+=3;NFSU2_TR(0x43b82b);
__builtin_memmove((R+24),(R+0),4);
}
B43b82d:{NFSU2_TR(0x43b82d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43b82f:{NFSU2_TR(0x43b82f);
if(r1(R+518)){{goto L43b872;}}
}
B43b831:L43b831:{c.instructions+=3;NFSU2_TR(0x43b831);
__builtin_memmove((R+0),gp(0x827c38),1);
}
B43b836:{NFSU2_TR(0x43b836);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43b838:{NFSU2_TR(0x43b838);
if(r1(R+518)){{goto L43b847;}}
}
B43b83a:L43b83a:{c.instructions+=3;NFSU2_TR(0x43b83a);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B43b840:{NFSU2_TR(0x43b840);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b842:{NFSU2_TR(0x43b842);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b847ull));
TAIL_STATIC(0x4791b0u,479);
}
B43b847:L43b847:{c.instructions+=4;NFSU2_TR(0x43b847);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43b84a:{NFSU2_TR(0x43b84a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B43b84c:{NFSU2_TR(0x43b84c);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B43b84e:{NFSU2_TR(0x43b84e);
if(r1(R+518)){{goto L43b867;}}
}
B43b850:L43b850:{c.instructions+=2;NFSU2_TR(0x43b850);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B43b851:{NFSU2_TR(0x43b851);
if(r1(R+518)){{goto L43b856;}}
}
B43b853:L43b853:{c.instructions+=2;NFSU2_TR(0x43b853);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B43b854:{NFSU2_TR(0x43b854);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43b867;}}
}
B43b856:L43b856:{c.instructions+=3;NFSU2_TR(0x43b856);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43b859:{NFSU2_TR(0x43b859);
__builtin_memmove((R+4),(R+24),4);
}
B43b85b:{NFSU2_TR(0x43b85b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b860ull));
TAIL_STATIC(0x439070u,439);
}
B43b860:L43b860:{c.instructions+=1;NFSU2_TR(0x43b860);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43b867:L43b867:{c.instructions+=3;NFSU2_TR(0x43b867);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b868:{NFSU2_TR(0x43b868);
w4(R+4,u32(0x827b88ull));
}
B43b86d:{NFSU2_TR(0x43b86d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b872ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43b1f0u);}goto L43b1f0;}
}
B43b872:L43b872:{c.instructions+=4;NFSU2_TR(0x43b872);
__builtin_memmove((R+0),gp(0x827b00),1);
}
B43b877:{NFSU2_TR(0x43b877);
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
B43b879:{NFSU2_TR(0x43b879);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43b87a:{NFSU2_TR(0x43b87a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43b897;}}
}
B43b87c:L43b87c:{c.instructions+=1;NFSU2_TR(0x43b87c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b881ull));
TAIL_STATIC(0x437660u,437);
}
B43b881:L43b881:{c.instructions+=3;NFSU2_TR(0x43b881);
__builtin_memmove((R+0),gp(0x827c38),1);
}
B43b886:{NFSU2_TR(0x43b886);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43b888:{NFSU2_TR(0x43b888);
if(r1(R+518)){{goto L43b897;}}
}
B43b88a:L43b88a:{c.instructions+=3;NFSU2_TR(0x43b88a);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B43b890:{NFSU2_TR(0x43b890);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b892:{NFSU2_TR(0x43b892);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b897ull));
TAIL_STATIC(0x4791b0u,479);
}
B43b897:L43b897:{c.instructions+=3;NFSU2_TR(0x43b897);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x62ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43b89a:{NFSU2_TR(0x43b89a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43b89c:{NFSU2_TR(0x43b89c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43b8bb;}}
}
B43b89e:L43b89e:{c.instructions+=4;NFSU2_TR(0x43b89e);
__builtin_memmove((R+4),gp(0x890080),4);
}
B43b8a4:{NFSU2_TR(0x43b8a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43b8aa:{NFSU2_TR(0x43b8aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43b8ac:{NFSU2_TR(0x43b8ac);
if(r1(R+518)){{goto L43b8b7;}}
}
B43b8ae:L43b8ae:{c.instructions+=2;NFSU2_TR(0x43b8ae);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x61ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B43b8b2:{NFSU2_TR(0x43b8b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b8b7ull));
TAIL_STATIC(0x409a30u,409);
}
B43b8b7:L43b8b7:{c.instructions+=1;NFSU2_TR(0x43b8b7);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x62ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B43b8bb:L43b8bb:{c.instructions+=5;NFSU2_TR(0x43b8bb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B43b8bd:{NFSU2_TR(0x43b8bd);
w4(R+4,u32(0x85ad40ull));
}
B43b8c2:{NFSU2_TR(0x43b8c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43b8c5:{NFSU2_TR(0x43b8c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43b8c8:{NFSU2_TR(0x43b8c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b8cdull));
TAIL_STATIC(0x500aa0u,500);
}
B43b8cd:L43b8cd:{c.instructions+=2;NFSU2_TR(0x43b8cd);
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
B43b8cf:{NFSU2_TR(0x43b8cf);
if(r1(R+518)){{goto L43b8dd;}}
}
B43b8d1:L43b8d1:{c.instructions+=4;NFSU2_TR(0x43b8d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43b8d2:{NFSU2_TR(0x43b8d2);
w4(R+4,u32(0x85ad40ull));
}
B43b8d7:{NFSU2_TR(0x43b8d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43b8d8:{NFSU2_TR(0x43b8d8);
TAIL_STATIC(0x513bf0u,513);
}
B43b8dd:L43b8dd:{c.instructions+=3;NFSU2_TR(0x43b8dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43b8de:{NFSU2_TR(0x43b8de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43b8df:{NFSU2_TR(0x43b8df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43b8e0:L43b8e0:{c.instructions+=6;NFSU2_TR(0x43b8e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43b8e4:{NFSU2_TR(0x43b8e4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b8e5:{NFSU2_TR(0x43b8e5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b8e6:{NFSU2_TR(0x43b8e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b8e7:{NFSU2_TR(0x43b8e7);
__builtin_memmove((R+28),(R+4),4);
}
B43b8e9:{NFSU2_TR(0x43b8e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b8eeull));
TAIL_STATIC(0x432570u,432);
}
B43b8ee:L43b8ee:{c.instructions+=3;NFSU2_TR(0x43b8ee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43b8f1:{NFSU2_TR(0x43b8f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43b8f3:{NFSU2_TR(0x43b8f3);
if(r1(R+518)){{goto L43b921;}}
}
B43b8f5:L43b8f5:{c.instructions+=9;NFSU2_TR(0x43b8f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43b8f9:{NFSU2_TR(0x43b8f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43b8fd:{NFSU2_TR(0x43b8fd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b8fe:{NFSU2_TR(0x43b8fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43b902:{NFSU2_TR(0x43b902);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b903:{NFSU2_TR(0x43b903);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b904:{NFSU2_TR(0x43b904);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b905:{NFSU2_TR(0x43b905);
__builtin_memmove((R+4),(R+28),4);
}
B43b907:{NFSU2_TR(0x43b907);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b90cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43b240u);}goto L43b240;}
}
B43b90c:L43b90c:{c.instructions+=3;NFSU2_TR(0x43b90c);
__builtin_memmove((R+24),(R+0),4);
}
B43b90e:{NFSU2_TR(0x43b90e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43b910:{NFSU2_TR(0x43b910);
if(r1(R+518)){{goto L43b921;}}
}
B43b912:L43b912:{c.instructions+=3;NFSU2_TR(0x43b912);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b913:{NFSU2_TR(0x43b913);
__builtin_memmove((R+4),(R+28),4);
}
B43b915:{NFSU2_TR(0x43b915);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b91aull));
TAIL_STATIC(0x43aa40u,43a);
}
B43b91a:L43b91a:{c.instructions+=4;NFSU2_TR(0x43b91a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43b91b:{NFSU2_TR(0x43b91b);
__builtin_memmove((R+0),(R+24),4);
}
B43b91d:{NFSU2_TR(0x43b91d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43b91e:{NFSU2_TR(0x43b91e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43b921:L43b921:{c.instructions+=4;NFSU2_TR(0x43b921);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43b922:{NFSU2_TR(0x43b922);
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
B43b924:{NFSU2_TR(0x43b924);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43b925:{NFSU2_TR(0x43b925);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43b930:L43b930:{c.instructions+=7;NFSU2_TR(0x43b930);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b931:{NFSU2_TR(0x43b931);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b932:{NFSU2_TR(0x43b932);
__builtin_memmove((R+24),(R+4),4);
}
B43b934:{NFSU2_TR(0x43b934);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43b937:{NFSU2_TR(0x43b937);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B43b939:{NFSU2_TR(0x43b939);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
w1(R+512,u8((r1(R+0))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+0),r1(U+3)));
w1(U+4,u8(u32(r1(R+0))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43b93b:{NFSU2_TR(0x43b93b);
if(r1(R+518)){{goto L43b99b;}}
}
B43b93d:L43b93d:{c.instructions+=2;NFSU2_TR(0x43b93d);
u8 U[5];
__builtin_memmove((U+3),gp(0x827b00),1);
w1(R+512,u8((r1(U+3))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+3),r1(R+12)));
w1(U+4,u8(u32(r1(U+3))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43b943:{NFSU2_TR(0x43b943);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43b99b;}}
}
B43b945:L43b945:{c.instructions+=3;NFSU2_TR(0x43b945);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43b948:{NFSU2_TR(0x43b948);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b949:{NFSU2_TR(0x43b949);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b94eull));
TAIL_STATIC(0x432570u,432);
}
B43b94e:L43b94e:{c.instructions+=3;NFSU2_TR(0x43b94e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43b951:{NFSU2_TR(0x43b951);
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
B43b953:{NFSU2_TR(0x43b953);
if(r1(R+518)){{goto L43b99b;}}
}
B43b955:L43b955:{c.instructions+=4;NFSU2_TR(0x43b955);
__builtin_memmove(gp(0x827af9),(R+12),1);
}
B43b95b:{NFSU2_TR(0x43b95b);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x62ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B43b95e:{NFSU2_TR(0x43b95e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B43b961:{NFSU2_TR(0x43b961);
if(r1(R+518)){{goto L43b97e;}}
}
B43b963:L43b963:{c.instructions+=4;NFSU2_TR(0x43b963);
__builtin_memmove((R+4),gp(0x890080),4);
}
B43b969:{NFSU2_TR(0x43b969);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43b96f:{NFSU2_TR(0x43b96f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43b971:{NFSU2_TR(0x43b971);
if(r1(R+518)){{goto L43b97b;}}
}
B43b973:L43b973:{c.instructions+=2;NFSU2_TR(0x43b973);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x61ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B43b976:{NFSU2_TR(0x43b976);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b97bull));
TAIL_STATIC(0x4099b0u,409);
}
B43b97b:L43b97b:{c.instructions+=1;NFSU2_TR(0x43b97b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x62ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B43b97e:L43b97e:{c.instructions+=10;NFSU2_TR(0x43b97e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43b981:{NFSU2_TR(0x43b981);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43b984:{NFSU2_TR(0x43b984);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43b987:{NFSU2_TR(0x43b987);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b988:{NFSU2_TR(0x43b988);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43b98b:{NFSU2_TR(0x43b98b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b98c:{NFSU2_TR(0x43b98c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b98d:{NFSU2_TR(0x43b98d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b98e:{NFSU2_TR(0x43b98e);
w4(R+4,u32(0x827b88ull));
}
B43b993:{NFSU2_TR(0x43b993);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b998ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43b8e0u);}goto L43b8e0;}
}
B43b998:L43b998:{c.instructions+=1;NFSU2_TR(0x43b998);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43b99b:L43b99b:{c.instructions+=3;NFSU2_TR(0x43b99b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43b99c:{NFSU2_TR(0x43b99c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43b99d:{NFSU2_TR(0x43b99d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43b9a0:L43b9a0:{c.instructions+=6;NFSU2_TR(0x43b9a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b9a1:{NFSU2_TR(0x43b9a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b9a2:{NFSU2_TR(0x43b9a2);
__builtin_memmove((R+24),(R+4),4);
}
B43b9a4:{NFSU2_TR(0x43b9a4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43b9a7:{NFSU2_TR(0x43b9a7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43b9a9:{NFSU2_TR(0x43b9a9);
if(r1(R+518)){{goto L43ba10;}}
}
B43b9ab:L43b9ab:{c.instructions+=3;NFSU2_TR(0x43b9ab);
__builtin_memmove((R+0),gp(0x827b00),1);
}
B43b9b0:{NFSU2_TR(0x43b9b0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43b9b2:{NFSU2_TR(0x43b9b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43ba10;}}
}
B43b9b4:L43b9b4:{c.instructions+=3;NFSU2_TR(0x43b9b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43b9b7:{NFSU2_TR(0x43b9b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b9b8:{NFSU2_TR(0x43b9b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b9bdull));
TAIL_STATIC(0x432570u,432);
}
B43b9bd:L43b9bd:{c.instructions+=3;NFSU2_TR(0x43b9bd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43b9c0:{NFSU2_TR(0x43b9c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43b9c2:{NFSU2_TR(0x43b9c2);
if(r1(R+518)){{goto L43ba10;}}
}
B43b9c4:L43b9c4:{c.instructions+=5;NFSU2_TR(0x43b9c4);
s1(0x827af9,u8(0x0ull));
}
B43b9cb:{NFSU2_TR(0x43b9cb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x62ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43b9ce:{NFSU2_TR(0x43b9ce);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43b9d0:{NFSU2_TR(0x43b9d0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B43b9d4:{NFSU2_TR(0x43b9d4);
if(r1(R+518)){{goto L43b9f3;}}
}
B43b9d6:L43b9d6:{c.instructions+=4;NFSU2_TR(0x43b9d6);
__builtin_memmove((R+4),gp(0x890080),4);
}
B43b9dc:{NFSU2_TR(0x43b9dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43b9e2:{NFSU2_TR(0x43b9e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43b9e4:{NFSU2_TR(0x43b9e4);
if(r1(R+518)){{goto L43b9ef;}}
}
B43b9e6:L43b9e6:{c.instructions+=2;NFSU2_TR(0x43b9e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x61ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B43b9ea:{NFSU2_TR(0x43b9ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43b9efull));
TAIL_STATIC(0x4099b0u,409);
}
B43b9ef:L43b9ef:{c.instructions+=1;NFSU2_TR(0x43b9ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x62ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B43b9f3:L43b9f3:{c.instructions+=10;NFSU2_TR(0x43b9f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43b9f6:{NFSU2_TR(0x43b9f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43b9f9:{NFSU2_TR(0x43b9f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43b9fc:{NFSU2_TR(0x43b9fc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43b9fd:{NFSU2_TR(0x43b9fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43ba00:{NFSU2_TR(0x43ba00);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ba01:{NFSU2_TR(0x43ba01);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ba02:{NFSU2_TR(0x43ba02);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ba03:{NFSU2_TR(0x43ba03);
w4(R+4,u32(0x827b88ull));
}
B43ba08:{NFSU2_TR(0x43ba08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43ba0dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43b8e0u);}goto L43b8e0;}
}
B43ba0d:L43ba0d:{c.instructions+=1;NFSU2_TR(0x43ba0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ba10:L43ba10:{c.instructions+=3;NFSU2_TR(0x43ba10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B43ba13:{NFSU2_TR(0x43ba13);
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
B43ba15:{NFSU2_TR(0x43ba15);
if(r1(R+518)){{goto L43ba9d;}}
}
B43ba1b:L43ba1b:{c.instructions+=5;NFSU2_TR(0x43ba1b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ba1c:{NFSU2_TR(0x43ba1c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ba1d:{NFSU2_TR(0x43ba1d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ba1e:{NFSU2_TR(0x43ba1e);
w4(R+4,u32(0x827b88ull));
}
B43ba23:{NFSU2_TR(0x43ba23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43ba28ull));
TAIL_STATIC(0x432490u,432);
}
B43ba28:L43ba28:{c.instructions+=4;NFSU2_TR(0x43ba28);
__builtin_memmove((R+12),gp(0x827afc),4);
}
B43ba2e:{NFSU2_TR(0x43ba2e);
__builtin_memmove((R+28),(R+0),4);
}
B43ba30:{NFSU2_TR(0x43ba30);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43ba32:{NFSU2_TR(0x43ba32);
if(r1(R+518)){{goto L43ba4d;}}
}
B43ba34:L43ba34:{c.instructions+=3;NFSU2_TR(0x43ba34);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ba35:{NFSU2_TR(0x43ba35);
__builtin_memmove((R+4),(R+28),4);
}
B43ba37:{NFSU2_TR(0x43ba37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43ba3cull));
TAIL_STATIC(0x432670u,432);
}
B43ba3c:L43ba3c:{c.instructions+=2;NFSU2_TR(0x43ba3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43ba3e:{NFSU2_TR(0x43ba3e);
if(r1(R+518)){{goto L43ba4d;}}
}
B43ba40:L43ba40:{c.instructions+=5;NFSU2_TR(0x43ba40);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43ba43:{NFSU2_TR(0x43ba43);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43ba46:{NFSU2_TR(0x43ba46);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43ba48:{NFSU2_TR(0x43ba48);
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
B43ba4b:{NFSU2_TR(0x43ba4b);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L43ba9b;}}
}
B43ba4d:L43ba4d:{c.instructions+=3;NFSU2_TR(0x43ba4d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ba4e:{NFSU2_TR(0x43ba4e);
w4(R+4,u32(0x827b88ull));
}
B43ba53:{NFSU2_TR(0x43ba53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43ba58ull));
TAIL_STATIC(0x432490u,432);
}
B43ba58:L43ba58:{c.instructions+=3;NFSU2_TR(0x43ba58);
__builtin_memmove((R+28),(R+0),4);
}
B43ba5a:{NFSU2_TR(0x43ba5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43ba5c:{NFSU2_TR(0x43ba5c);
if(r1(R+518)){{goto L43ba78;}}
}
B43ba5e:L43ba5e:{c.instructions+=3;NFSU2_TR(0x43ba5e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ba5f:{NFSU2_TR(0x43ba5f);
__builtin_memmove((R+4),(R+28),4);
}
B43ba61:{NFSU2_TR(0x43ba61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43ba66ull));
TAIL_STATIC(0x432670u,432);
}
B43ba66:L43ba66:{c.instructions+=2;NFSU2_TR(0x43ba66);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43ba68:{NFSU2_TR(0x43ba68);
if(r1(R+518)){{goto L43ba78;}}
}
B43ba6a:L43ba6a:{c.instructions+=5;NFSU2_TR(0x43ba6a);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43ba6d:{NFSU2_TR(0x43ba6d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ba6e:{NFSU2_TR(0x43ba6e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43ba71:{NFSU2_TR(0x43ba71);
__builtin_memmove((R+4),(R+28),4);
}
B43ba73:{NFSU2_TR(0x43ba73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43ba78ull));
TAIL_STATIC(0x43af80u,43a);
}
B43ba78:L43ba78:{c.instructions+=3;NFSU2_TR(0x43ba78);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x62ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43ba7b:{NFSU2_TR(0x43ba7b);
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
B43ba7d:{NFSU2_TR(0x43ba7d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43ba9b;}}
}
B43ba7f:L43ba7f:{c.instructions+=5;NFSU2_TR(0x43ba7f);
__builtin_memmove((R+0),gp(0x890080),4);
}
B43ba84:{NFSU2_TR(0x43ba84);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43ba8a:{NFSU2_TR(0x43ba8a);
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
B43ba8c:{NFSU2_TR(0x43ba8c);
w1(R+12,u8(0x1ull));
}
B43ba8e:{NFSU2_TR(0x43ba8e);
if(r1(R+518)){{goto L43ba98;}}
}
B43ba90:L43ba90:{c.instructions+=2;NFSU2_TR(0x43ba90);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x61ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B43ba93:{NFSU2_TR(0x43ba93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43ba98ull));
TAIL_STATIC(0x409a30u,409);
}
B43ba98:L43ba98:{c.instructions+=1;NFSU2_TR(0x43ba98);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x62ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B43ba9b:L43ba9b:{c.instructions+=2;NFSU2_TR(0x43ba9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43ba9c:{NFSU2_TR(0x43ba9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43ba9d:L43ba9d:{c.instructions+=3;NFSU2_TR(0x43ba9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43ba9e:{NFSU2_TR(0x43ba9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B43ba9f:{NFSU2_TR(0x43ba9f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43baa0:L43baa0:{c.instructions+=7;NFSU2_TR(0x43baa0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43baa1:{NFSU2_TR(0x43baa1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43baa2:{NFSU2_TR(0x43baa2);
__builtin_memmove((R+24),(R+4),4);
}
B43baa4:{NFSU2_TR(0x43baa4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43baa7:{NFSU2_TR(0x43baa7);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B43baa9:{NFSU2_TR(0x43baa9);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
w1(R+512,u8((r1(R+0))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+0),r1(U+3)));
w1(U+4,u8(u32(r1(R+0))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43baab:{NFSU2_TR(0x43baab);
if(r1(R+518)){{goto L43bb0b;}}
}
B43baad:L43baad:{c.instructions+=2;NFSU2_TR(0x43baad);
u8 U[5];
__builtin_memmove((U+3),gp(0x827b00),1);
w1(R+512,u8((r1(U+3))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+3),r1(R+12)));
w1(U+4,u8(u32(r1(U+3))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43bab3:{NFSU2_TR(0x43bab3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43bb0b;}}
}
B43bab5:L43bab5:{c.instructions+=3;NFSU2_TR(0x43bab5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43bab8:{NFSU2_TR(0x43bab8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43bab9:{NFSU2_TR(0x43bab9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43babeull));
TAIL_STATIC(0x432570u,432);
}
B43babe:L43babe:{c.instructions+=3;NFSU2_TR(0x43babe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43bac1:{NFSU2_TR(0x43bac1);
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
B43bac3:{NFSU2_TR(0x43bac3);
if(r1(R+518)){{goto L43bb0b;}}
}
B43bac5:L43bac5:{c.instructions+=4;NFSU2_TR(0x43bac5);
__builtin_memmove(gp(0x827af9),(R+12),1);
}
B43bacb:{NFSU2_TR(0x43bacb);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x62ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B43bace:{NFSU2_TR(0x43bace);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B43bad1:{NFSU2_TR(0x43bad1);
if(r1(R+518)){{goto L43baee;}}
}
B43bad3:L43bad3:{c.instructions+=4;NFSU2_TR(0x43bad3);
__builtin_memmove((R+4),gp(0x890080),4);
}
B43bad9:{NFSU2_TR(0x43bad9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43badf:{NFSU2_TR(0x43badf);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43bae1:{NFSU2_TR(0x43bae1);
if(r1(R+518)){{goto L43baeb;}}
}
B43bae3:L43bae3:{c.instructions+=2;NFSU2_TR(0x43bae3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x61ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B43bae6:{NFSU2_TR(0x43bae6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43baebull));
TAIL_STATIC(0x4099b0u,409);
}
B43baeb:L43baeb:{c.instructions+=1;NFSU2_TR(0x43baeb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x62ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B43baee:L43baee:{c.instructions+=10;NFSU2_TR(0x43baee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43baf1:{NFSU2_TR(0x43baf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43baf4:{NFSU2_TR(0x43baf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43baf7:{NFSU2_TR(0x43baf7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43baf8:{NFSU2_TR(0x43baf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43bafb:{NFSU2_TR(0x43bafb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43bafc:{NFSU2_TR(0x43bafc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43bafd:{NFSU2_TR(0x43bafd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43bafe:{NFSU2_TR(0x43bafe);
w4(R+4,u32(0x827b88ull));
}
B43bb03:{NFSU2_TR(0x43bb03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43bb08ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43b8e0u);}goto L43b8e0;}
}
B43bb08:L43bb08:{c.instructions+=1;NFSU2_TR(0x43bb08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43bb0b:L43bb0b:{c.instructions+=3;NFSU2_TR(0x43bb0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43bb0c:{NFSU2_TR(0x43bb0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43bb0d:{NFSU2_TR(0x43bb0d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43bb10:L43bb10:{c.instructions+=10;NFSU2_TR(0x43bb10);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43bb11:{NFSU2_TR(0x43bb11);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43bb12:{NFSU2_TR(0x43bb12);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43bb13:{NFSU2_TR(0x43bb13);
__builtin_memmove((R+24),(R+4),4);
}
B43bb15:{NFSU2_TR(0x43bb15);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43bb18:{NFSU2_TR(0x43bb18);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B43bb1a:{NFSU2_TR(0x43bb1a);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B43bb1c:{NFSU2_TR(0x43bb1c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43bb1d:{NFSU2_TR(0x43bb1d);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B43bb22:{NFSU2_TR(0x43bb22);
if(r1(R+518)){{goto L43bb8e;}}
}
B43bb24:L43bb24:{c.instructions+=2;NFSU2_TR(0x43bb24);
u8 U[2];
__builtin_memmove((U+0),gp(0x827b00),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B43bb2a:{NFSU2_TR(0x43bb2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43bb8e;}}
}
B43bb2c:L43bb2c:{c.instructions+=3;NFSU2_TR(0x43bb2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43bb2f:{NFSU2_TR(0x43bb2f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43bb30:{NFSU2_TR(0x43bb30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43bb35ull));
TAIL_STATIC(0x432570u,432);
}
B43bb35:L43bb35:{c.instructions+=3;NFSU2_TR(0x43bb35);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43bb38:{NFSU2_TR(0x43bb38);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43bb3a:{NFSU2_TR(0x43bb3a);
if(r1(R+518)){{goto L43bb8e;}}
}
B43bb3c:L43bb3c:{c.instructions+=4;NFSU2_TR(0x43bb3c);
__builtin_memmove(gp(0x827af9),(R+12),1);
}
B43bb42:{NFSU2_TR(0x43bb42);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x62ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B43bb45:{NFSU2_TR(0x43bb45);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B43bb48:{NFSU2_TR(0x43bb48);
if(r1(R+518)){{goto L43bb65;}}
}
B43bb4a:L43bb4a:{c.instructions+=4;NFSU2_TR(0x43bb4a);
__builtin_memmove((R+4),gp(0x890080),4);
}
B43bb50:{NFSU2_TR(0x43bb50);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43bb56:{NFSU2_TR(0x43bb56);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43bb58:{NFSU2_TR(0x43bb58);
if(r1(R+518)){{goto L43bb62;}}
}
B43bb5a:L43bb5a:{c.instructions+=2;NFSU2_TR(0x43bb5a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x61ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B43bb5d:{NFSU2_TR(0x43bb5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43bb62ull));
TAIL_STATIC(0x4099b0u,409);
}
B43bb62:L43bb62:{c.instructions+=1;NFSU2_TR(0x43bb62);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x62ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B43bb65:L43bb65:{c.instructions+=10;NFSU2_TR(0x43bb65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43bb68:{NFSU2_TR(0x43bb68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43bb6b:{NFSU2_TR(0x43bb6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43bb6e:{NFSU2_TR(0x43bb6e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43bb6f:{NFSU2_TR(0x43bb6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43bb72:{NFSU2_TR(0x43bb72);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43bb73:{NFSU2_TR(0x43bb73);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43bb74:{NFSU2_TR(0x43bb74);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43bb75:{NFSU2_TR(0x43bb75);
w4(R+4,u32(0x827b88ull));
}
B43bb7a:{NFSU2_TR(0x43bb7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43bb7full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43b8e0u);}goto L43b8e0;}
}
B43bb7f:L43bb7f:{c.instructions+=3;NFSU2_TR(0x43bb7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43bb82:{NFSU2_TR(0x43bb82);
u8 U[2];
__builtin_memmove((U+0),gp(0x89e7e6),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B43bb88:{NFSU2_TR(0x43bb88);
if(r1(R+518)){{goto L43bb8e;}}
}
B43bb8a:L43bb8a:{c.instructions+=1;NFSU2_TR(0x43bb8a);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B43bb8e:L43bb8e:{c.instructions+=3;NFSU2_TR(0x43bb8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43bb91:{NFSU2_TR(0x43bb91);
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
B43bb93:{NFSU2_TR(0x43bb93);
if(r1(R+518)){{goto L43bc25;}}
}
B43bb99:L43bb99:{c.instructions+=3;NFSU2_TR(0x43bb99);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43bb9a:{NFSU2_TR(0x43bb9a);
w4(R+4,u32(0x827b88ull));
}
B43bb9f:{NFSU2_TR(0x43bb9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43bba4ull));
TAIL_STATIC(0x432490u,432);
}
B43bba4:L43bba4:{c.instructions+=2;NFSU2_TR(0x43bba4);
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
B43bba6:{NFSU2_TR(0x43bba6);
if(r1(R+518)){{goto L43bc25;}}
}
B43bba8:L43bba8:{c.instructions+=6;NFSU2_TR(0x43bba8);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43bbab:{NFSU2_TR(0x43bbab);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43bbae:{NFSU2_TR(0x43bbae);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B43bbb0:{NFSU2_TR(0x43bbb0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43bbb2:{NFSU2_TR(0x43bbb2);
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
B43bbb5:{NFSU2_TR(0x43bbb5);
if(r1(R+514)){{goto L43bc25;}}
}
B43bbb7:L43bbb7:{c.instructions+=3;NFSU2_TR(0x43bbb7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43bbb8:{NFSU2_TR(0x43bbb8);
w4(R+4,u32(0x827b88ull));
}
B43bbbd:{NFSU2_TR(0x43bbbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43bbc2ull));
TAIL_STATIC(0x432490u,432);
}
B43bbc2:L43bbc2:{c.instructions+=2;NFSU2_TR(0x43bbc2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43bbc4:{NFSU2_TR(0x43bbc4);
if(r1(R+518)){{goto L43bbe7;}}
}
B43bbc6:L43bbc6:{c.instructions+=4;NFSU2_TR(0x43bbc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43bbc9:{NFSU2_TR(0x43bbc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43bbcc:{NFSU2_TR(0x43bbcc);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B43bbd0:{NFSU2_TR(0x43bbd0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43bbe7;}}
}
B43bbd2:L43bbd2:{c.instructions+=2;NFSU2_TR(0x43bbd2);
__builtin_memmove((R+4),(R+24),4);
}
B43bbd4:{NFSU2_TR(0x43bbd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43bbd9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43b7a0u);}goto L43b7a0;}
}
B43bbd9:L43bbd9:{c.instructions+=1;NFSU2_TR(0x43bbd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43bbdeull));
TAIL_STATIC(0x4995a0u,499);
}
B43bbde:L43bbde:{c.instructions+=6;NFSU2_TR(0x43bbde);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43bbe2:{NFSU2_TR(0x43bbe2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43bbe3:{NFSU2_TR(0x43bbe3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43bbe4:{NFSU2_TR(0x43bbe4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43bbe5:{NFSU2_TR(0x43bbe5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B43bbe6:{NFSU2_TR(0x43bbe6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43bbe7:L43bbe7:{c.instructions+=3;NFSU2_TR(0x43bbe7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43bbe8:{NFSU2_TR(0x43bbe8);
w4(R+4,u32(0x827b88ull));
}
B43bbed:{NFSU2_TR(0x43bbed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43bbf2ull));
TAIL_STATIC(0x432490u,432);
}
B43bbf2:L43bbf2:{c.instructions+=2;NFSU2_TR(0x43bbf2);
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
B43bbf4:{NFSU2_TR(0x43bbf4);
if(r1(R+518)){{goto L43bc25;}}
}
B43bbf6:L43bbf6:{c.instructions+=4;NFSU2_TR(0x43bbf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43bbf9:{NFSU2_TR(0x43bbf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43bbfc:{NFSU2_TR(0x43bbfc);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x4ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B43bc00:{NFSU2_TR(0x43bc00);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43bc25;}}
}
B43bc02:L43bc02:{c.instructions+=2;NFSU2_TR(0x43bc02);
__builtin_memmove((R+4),(R+24),4);
}
B43bc04:{NFSU2_TR(0x43bc04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43bc09ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43b7a0u);}goto L43b7a0;}
}
B43bc09:L43bc09:{c.instructions+=6;NFSU2_TR(0x43bc09);
__builtin_memmove((R+4),gp(0x8900ac),4);
}
B43bc0f:{NFSU2_TR(0x43bc0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43bc12:{NFSU2_TR(0x43bc12);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43bc15:{NFSU2_TR(0x43bc15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43bc17:{NFSU2_TR(0x43bc17);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43bc18:{NFSU2_TR(0x43bc18);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43bc1bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B43bc1b:L43bc1b:{c.instructions+=2;NFSU2_TR(0x43bc1b);
w4(R+4,u32(0x85ad40ull));
}
B43bc20:{NFSU2_TR(0x43bc20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43bc25ull));
TAIL_STATIC(0x532e10u,532);
}
B43bc25:L43bc25:{c.instructions+=6;NFSU2_TR(0x43bc25);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43bc29:{NFSU2_TR(0x43bc29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43bc2a:{NFSU2_TR(0x43bc2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43bc2b:{NFSU2_TR(0x43bc2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43bc2c:{NFSU2_TR(0x43bc2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B43bc2d:{NFSU2_TR(0x43bc2d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43bc30:L43bc30:{c.instructions+=7;NFSU2_TR(0x43bc30);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43bc31:{NFSU2_TR(0x43bc31);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43bc32:{NFSU2_TR(0x43bc32);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43bc33:{NFSU2_TR(0x43bc33);
__builtin_memmove((R+28),(R+4),4);
}
B43bc35:{NFSU2_TR(0x43bc35);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43bc38:{NFSU2_TR(0x43bc38);
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
B43bc3a:{NFSU2_TR(0x43bc3a);
if(r1(R+518)){{goto L43bcc4;}}
}
B43bc40:L43bc40:{c.instructions+=3;NFSU2_TR(0x43bc40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43bc41:{NFSU2_TR(0x43bc41);
w4(R+4,u32(0x827b88ull));
}
B43bc46:{NFSU2_TR(0x43bc46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43bc4bull));
TAIL_STATIC(0x432490u,432);
}
B43bc4b:L43bc4b:{c.instructions+=2;NFSU2_TR(0x43bc4b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43bc4d:{NFSU2_TR(0x43bc4d);
if(r1(R+518)){{goto L43bc54;}}
}
B43bc4f:L43bc4f:{c.instructions+=2;NFSU2_TR(0x43bc4f);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43bc52:{NFSU2_TR(0x43bc52);
{goto L43bc58;}
}
B43bc54:L43bc54:{c.instructions+=1;NFSU2_TR(0x43bc54);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43bc58:L43bc58:{c.instructions+=4;NFSU2_TR(0x43bc58);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43bc5e:{NFSU2_TR(0x43bc5e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43bc60:{NFSU2_TR(0x43bc60);
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
B43bc63:{NFSU2_TR(0x43bc63);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43bcc4;}}
}
B43bc65:L43bc65:{c.instructions+=3;NFSU2_TR(0x43bc65);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43bc66:{NFSU2_TR(0x43bc66);
w4(R+4,u32(0x827b88ull));
}
B43bc6b:{NFSU2_TR(0x43bc6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43bc70ull));
TAIL_STATIC(0x432490u,432);
}
B43bc70:L43bc70:{c.instructions+=3;NFSU2_TR(0x43bc70);
__builtin_memmove((R+24),(R+0),4);
}
B43bc72:{NFSU2_TR(0x43bc72);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43bc74:{NFSU2_TR(0x43bc74);
if(r1(R+518)){{goto L43bc95;}}
}
B43bc76:L43bc76:{c.instructions+=4;NFSU2_TR(0x43bc76);
__builtin_memmove((R+0),gp(0x827afc),4);
}
B43bc7b:{NFSU2_TR(0x43bc7b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43bc7c:{NFSU2_TR(0x43bc7c);
__builtin_memmove((R+4),(R+24),4);
}
B43bc7e:{NFSU2_TR(0x43bc7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43bc83ull));
TAIL_STATIC(0x432670u,432);
}
B43bc83:L43bc83:{c.instructions+=2;NFSU2_TR(0x43bc83);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43bc85:{NFSU2_TR(0x43bc85);
if(r1(R+518)){{goto L43bc95;}}
}
B43bc87:L43bc87:{c.instructions+=5;NFSU2_TR(0x43bc87);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43bc8a:{NFSU2_TR(0x43bc8a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43bc8b:{NFSU2_TR(0x43bc8b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43bc8e:{NFSU2_TR(0x43bc8e);
__builtin_memmove((R+4),(R+24),4);
}
B43bc90:{NFSU2_TR(0x43bc90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43bc95ull));
TAIL_STATIC(0x43af80u,43a);
}
B43bc95:L43bc95:{c.instructions+=4;NFSU2_TR(0x43bc95);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43bc98:{NFSU2_TR(0x43bc98);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43bc99:{NFSU2_TR(0x43bc99);
w4(R+4,u32(0x827b88ull));
}
B43bc9e:{NFSU2_TR(0x43bc9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43bca3ull));
TAIL_STATIC(0x432490u,432);
}
B43bca3:L43bca3:{c.instructions+=2;NFSU2_TR(0x43bca3);
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
B43bca5:{NFSU2_TR(0x43bca5);
if(r1(R+518)){{goto L43bcc4;}}
}
B43bca7:L43bca7:{c.instructions+=4;NFSU2_TR(0x43bca7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43bcaa:{NFSU2_TR(0x43bcaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43bcad:{NFSU2_TR(0x43bcad);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x3ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B43bcb1:{NFSU2_TR(0x43bcb1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43bcc4;}}
}
B43bcb3:L43bcb3:{c.instructions+=1;NFSU2_TR(0x43bcb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43bcb8ull));
TAIL_STATIC(0x4c57c0u,4c5);
}
B43bcb8:L43bcb8:{c.instructions+=5;NFSU2_TR(0x43bcb8);
__builtin_memmove((R+4),(R+28),4);
}
B43bcba:{NFSU2_TR(0x43bcba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43bcbb:{NFSU2_TR(0x43bcbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43bcbc:{NFSU2_TR(0x43bcbc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43bcbf:{NFSU2_TR(0x43bcbf);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43bb10u);}goto L43bb10;}
}
B43bcc4:L43bcc4:{c.instructions+=4;NFSU2_TR(0x43bcc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43bcc5:{NFSU2_TR(0x43bcc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43bcc6:{NFSU2_TR(0x43bcc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B43bcc7:{NFSU2_TR(0x43bcc7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43bcd0:L43bcd0:{c.instructions+=5;NFSU2_TR(0x43bcd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43bcd4:{NFSU2_TR(0x43bcd4);
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
B43bcd6:{NFSU2_TR(0x43bcd6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43bcda:{NFSU2_TR(0x43bcda);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43bcde:{NFSU2_TR(0x43bcde);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L43bd30;}}
}
B43bce0:L43bce0:{c.instructions+=4;NFSU2_TR(0x43bce0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43bce1:{NFSU2_TR(0x43bce1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43bce2:{NFSU2_TR(0x43bce2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43bce3:{NFSU2_TR(0x43bce3);
__builtin_memmove((R+28),(R+4),4);
}
B43bce5:L43bce5:{c.instructions+=11;NFSU2_TR(0x43bce5);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+24,u32(r1(U+0)));
}
B43bce8:{NFSU2_TR(0x43bce8);
__builtin_memmove((R+12),(R+0),4);
}
B43bcea:{NFSU2_TR(0x43bcea);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B43bced:{NFSU2_TR(0x43bced);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+24))));
}
B43bcef:{NFSU2_TR(0x43bcef);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xffull))));
}
B43bcf5:{NFSU2_TR(0x43bcf5);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7868e8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B43bcfc:{NFSU2_TR(0x43bcfc);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B43bcff:{NFSU2_TR(0x43bcff);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B43bd00:{NFSU2_TR(0x43bd00);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+24))));
}
B43bd02:{NFSU2_TR(0x43bd02);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B43bd03:{NFSU2_TR(0x43bd03);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43bce5u);}goto L43bce5;}}
}
B43bd05:L43bd05:{c.instructions+=5;NFSU2_TR(0x43bd05);
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
B43bd07:{NFSU2_TR(0x43bd07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43bd08:{NFSU2_TR(0x43bd08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43bd09:{NFSU2_TR(0x43bd09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43bd0a:{NFSU2_TR(0x43bd0a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L43bd30;}}
}
B43bd0c:L43bd0c:{c.instructions+=1;NFSU2_TR(0x43bd0c);
__builtin_memmove((R+16),(R+16),4);
}
B43bd10:L43bd10:{c.instructions+=10;NFSU2_TR(0x43bd10);
__builtin_memmove((R+8),(R+0),4);
}
B43bd12:{NFSU2_TR(0x43bd12);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B43bd15:{NFSU2_TR(0x43bd15);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+4))));
}
B43bd17:{NFSU2_TR(0x43bd17);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffull))));
}
B43bd1d:{NFSU2_TR(0x43bd1d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7868e8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B43bd24:{NFSU2_TR(0x43bd24);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B43bd27:{NFSU2_TR(0x43bd27);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B43bd2a:{NFSU2_TR(0x43bd2a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+8))));
}
B43bd2c:{NFSU2_TR(0x43bd2c);
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
B43bd2e:{NFSU2_TR(0x43bd2e);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43bd10u);}goto L43bd10;}}
}
B43bd30:L43bd30:{c.instructions+=2;NFSU2_TR(0x43bd30);
w4(R+0,u32(~u32(r4(R+0))));
}
B43bd32:{NFSU2_TR(0x43bd32);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43bd40:L43bd40:{c.instructions+=3;NFSU2_TR(0x43bd40);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43bd44:{NFSU2_TR(0x43bd44);
__builtin_memmove(gp(0x8284d8),(R+0),4);
}
B43bd49:{NFSU2_TR(0x43bd49);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43bd50:L43bd50:{c.instructions+=1;NFSU2_TR(0x43bd50);
u8 U[4];
{SPILL();c.pc=0x43bd50u;V r_=user_op(c,262160,{V(0x3ull)});SPILL();wv<4>((U+0),r_);}
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
{u32 t_=u32(u8(0x0ull));TAIL_DYNAMIC(t_);}
}
B43bd60:L43bd60:{c.instructions+=5;NFSU2_TR(0x43bd60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43bd61:{NFSU2_TR(0x43bd61);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43bd65:{NFSU2_TR(0x43bd65);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43bd67:{NFSU2_TR(0x43bd67);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43bd68:{NFSU2_TR(0x43bd68);
u8 U[4];
__builtin_memmove((U+0),gp(0x783110),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43bd6eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B43bd6e:L43bd6e:{c.instructions+=2;NFSU2_TR(0x43bd6e);
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
B43bd70:{NFSU2_TR(0x43bd70);
if(r1(R+518)){{goto L43bd83;}}
}
B43bd72:L43bd72:{c.instructions+=3;NFSU2_TR(0x43bd72);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43bd74:{NFSU2_TR(0x43bd74);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43bd75:{NFSU2_TR(0x43bd75);
u8 U[4];
__builtin_memmove((U+0),gp(0x78310c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43bd7bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B43bd7b:L43bd7b:{c.instructions+=2;NFSU2_TR(0x43bd7b);
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
B43bd7d:{NFSU2_TR(0x43bd7d);
if(r1(R+518)){{goto L43bd83;}}
}
B43bd7f:L43bd7f:{c.instructions+=3;NFSU2_TR(0x43bd7f);
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
B43bd81:{NFSU2_TR(0x43bd81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43bd82:{NFSU2_TR(0x43bd82);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43bd83:L43bd83:{c.instructions+=3;NFSU2_TR(0x43bd83);
w4(R+0,u32(0x1ull));
}
B43bd88:{NFSU2_TR(0x43bd88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43bd89:{NFSU2_TR(0x43bd89);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43bd90:L43bd90:{c.instructions+=4;NFSU2_TR(0x43bd90);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B43bd93:{NFSU2_TR(0x43bd93);
__builtin_memmove((R+0),(R+16),4);
}
B43bd97:{NFSU2_TR(0x43bd97);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43bd98:{NFSU2_TR(0x43bd98);
u8 U[4];
__builtin_memmove((U+0),gp(0x783118),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43bd9eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B43bd9e:L43bd9e:{c.instructions+=10;NFSU2_TR(0x43bd9e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdf,0x28"::"a"(ea_):"memory");}
}
B43bda2:{NFSU2_TR(0x43bda2);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B43bda4:{NFSU2_TR(0x43bda4);
__builtin_memmove(gp(0x8284e4),(R+4),4);
}
B43bdaa:{NFSU2_TR(0x43bdaa);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B43bdb0:{NFSU2_TR(0x43bdb0);
{u32 ea_=u32(u32(8552488u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B43bdb6:{NFSU2_TR(0x43bdb6);
{u32 ea_=u32(u32(7892356u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43bdbc:{NFSU2_TR(0x43bdbc);
{u32 ea_=u32(u32(7892352u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B43bdc2:{NFSU2_TR(0x43bdc2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43bdc4:{NFSU2_TR(0x43bdc4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43bdc7:{NFSU2_TR(0x43bdc7);
if(r1(R+514)){{goto L43bde8;}}
}
B43bdc9:L43bdc9:{c.instructions+=1;NFSU2_TR(0x43bdc9);
__builtin_memmove((R+16),(R+16),4);
}
B43bdd0:L43bdd0:{c.instructions+=7;NFSU2_TR(0x43bdd0);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B43bdd2:{NFSU2_TR(0x43bdd2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B43bdd3:{NFSU2_TR(0x43bdd3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B43bdd5:{NFSU2_TR(0x43bdd5);
{u32 ea_=u32(u32(7892352u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B43bddb:{NFSU2_TR(0x43bddb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43bddd:{NFSU2_TR(0x43bddd);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43bde0:{NFSU2_TR(0x43bde0);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43bdd0u);}goto L43bdd0;}}
}
B43bde2:L43bde2:{c.instructions+=1;NFSU2_TR(0x43bde2);
__builtin_memmove(gp(0x8284e4),(R+4),4);
}
B43bde8:L43bde8:{c.instructions+=3;NFSU2_TR(0x43bde8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43bdea:{NFSU2_TR(0x43bdea);
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
B43bded:{NFSU2_TR(0x43bded);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43bdf0:L43bdf0:{c.instructions+=4;NFSU2_TR(0x43bdf0);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B43bdf3:{NFSU2_TR(0x43bdf3);
__builtin_memmove((R+0),(R+16),4);
}
B43bdf7:{NFSU2_TR(0x43bdf7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43bdf8:{NFSU2_TR(0x43bdf8);
u8 U[4];
__builtin_memmove((U+0),gp(0x78311c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43bdfeull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B43bdfe:L43bdfe:{c.instructions+=4;NFSU2_TR(0x43bdfe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43be02:{NFSU2_TR(0x43be02);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43be06:{NFSU2_TR(0x43be06);
__builtin_memmove((R+4),gp(0x8284e4),4);
}
B43be0c:{NFSU2_TR(0x43be0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43be11ull));
TAIL_STATIC(0x75c600u,75c);
}
B43be11:L43be11:{c.instructions+=2;NFSU2_TR(0x43be11);
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
B43be14:{NFSU2_TR(0x43be14);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43be20:L43be20:{c.instructions+=4;NFSU2_TR(0x43be20);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43be24:{NFSU2_TR(0x43be24);
u8 U[14];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,u8((r4(R+0))<(r4(U+4))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B43be28:{NFSU2_TR(0x43be28);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43be2c:{NFSU2_TR(0x43be2c);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L43be36;}}
}
B43be2e:L43be2e:{c.instructions+=1;NFSU2_TR(0x43be2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43be36:L43be36:{c.instructions+=8;NFSU2_TR(0x43be36);
__builtin_memmove((R+4),gp(0x8284e4),4);
}
B43be3c:{NFSU2_TR(0x43be3c);
w4(R+8,u32(0x1ull));
}
B43be41:{NFSU2_TR(0x43be41);
u8 U[39];
w1(U+34,u8(u32(r1(R+4))&u32(u8(0x1full))));
__builtin_memmove((U+35),(R+8),4);
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+34))));
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
w1(U+32,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+33,u8(u32(r1(R+512))^u32(r1(U+32))));
__builtin_memmove((U+0),(U+31),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+33))));
w1(U+2,u8(!(r1(U+31))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r1(U+34))!=(u8(0x0ull))));
w1(U+6,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+8))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B43be43:{NFSU2_TR(0x43be43);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43be47:{NFSU2_TR(0x43be47);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B43be4b:{NFSU2_TR(0x43be4b);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xda,0x08"::"a"(ea_):"memory");}
}
B43be4f:{NFSU2_TR(0x43be4f);
{u32 ea_=u32(u32(8552488u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43be55:{NFSU2_TR(0x43be55);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43be60:L43be60:{c.instructions+=4;NFSU2_TR(0x43be60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43be62:{NFSU2_TR(0x43be62);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B43be64:{NFSU2_TR(0x43be64);
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
B43be66:{NFSU2_TR(0x43be66);
if(r1(R+518)){{goto L43be7c;}}
}
B43be68:L43be68:{c.instructions+=3;NFSU2_TR(0x43be68);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43be69:{NFSU2_TR(0x43be69);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43be6d:{NFSU2_TR(0x43be6d);
__builtin_memmove((R+4),(R+4),4);
}
B43be70:L43be70:{c.instructions+=2;NFSU2_TR(0x43be70);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B43be72:{NFSU2_TR(0x43be72);
if(r1(R+518)){{goto L43be7b;}}
}
B43be74:L43be74:{c.instructions+=4;NFSU2_TR(0x43be74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43be76:{NFSU2_TR(0x43be76);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B43be77:{NFSU2_TR(0x43be77);
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
B43be79:{NFSU2_TR(0x43be79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43be70u);}goto L43be70;}}
}
B43be7b:L43be7b:{c.instructions+=1;NFSU2_TR(0x43be7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43be7c:L43be7c:{c.instructions+=1;NFSU2_TR(0x43be7c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43be80:L43be80:{c.instructions+=6;NFSU2_TR(0x43be80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B43be82:{NFSU2_TR(0x43be82);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B43be84:{NFSU2_TR(0x43be84);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43be86:{NFSU2_TR(0x43be86);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43be87:{NFSU2_TR(0x43be87);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43be8b:{NFSU2_TR(0x43be8b);
if(r1(R+518)){{goto L43be9b;}}
}
B43be8d:L43be8d:{c.instructions+=1;NFSU2_TR(0x43be8d);
__builtin_memmove((R+4),(R+4),4);
}
B43be90:L43be90:{c.instructions+=3;NFSU2_TR(0x43be90);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B43be91:{NFSU2_TR(0x43be91);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B43be93:{NFSU2_TR(0x43be93);
if(r1(R+518)){{goto L43bea1;}}
}
B43be95:L43be95:{c.instructions+=3;NFSU2_TR(0x43be95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B43be97:{NFSU2_TR(0x43be97);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43be99:{NFSU2_TR(0x43be99);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43be90u);}goto L43be90;}}
}
B43be9b:L43be9b:{c.instructions+=2;NFSU2_TR(0x43be9b);
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
B43be9d:{NFSU2_TR(0x43be9d);
if(r1(R+518)){{goto L43bea1;}}
}
B43be9f:L43be9f:{c.instructions+=1;NFSU2_TR(0x43be9f);
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
B43bea1:L43bea1:{c.instructions+=2;NFSU2_TR(0x43bea1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43bea2:{NFSU2_TR(0x43bea2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43beb0:L43beb0:{c.instructions+=6;NFSU2_TR(0x43beb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43beb4:{NFSU2_TR(0x43beb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B43beb6:{NFSU2_TR(0x43beb6);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B43beb8:{NFSU2_TR(0x43beb8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43beb9:{NFSU2_TR(0x43beb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43bebc:{NFSU2_TR(0x43bebc);
if(r1(R+518)){{goto L43bed2;}}
}
B43bebe:L43bebe:{c.instructions+=9;NFSU2_TR(0x43bebe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43bebf:{NFSU2_TR(0x43bebf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43bec2:{NFSU2_TR(0x43bec2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B43bec4:{NFSU2_TR(0x43bec4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43bec7:{NFSU2_TR(0x43bec7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B43bec9:{NFSU2_TR(0x43bec9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43becc:{NFSU2_TR(0x43becc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B43bece:{NFSU2_TR(0x43bece);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43bed1:{NFSU2_TR(0x43bed1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43bed2:L43bed2:{c.instructions+=2;NFSU2_TR(0x43bed2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43bed3:{NFSU2_TR(0x43bed3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43bee0:L43bee0:{c.instructions+=9;NFSU2_TR(0x43bee0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43bee1:{NFSU2_TR(0x43bee1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43bee2:{NFSU2_TR(0x43bee2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43bee3:{NFSU2_TR(0x43bee3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43bee7:{NFSU2_TR(0x43bee7);
__builtin_memmove((R+12),(R+4),4);
}
B43bee9:{NFSU2_TR(0x43bee9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43beea:{NFSU2_TR(0x43beea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+28),(U+0),4);
}
B43beec:{NFSU2_TR(0x43beec);
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
B43beee:{NFSU2_TR(0x43beee);
if(r1(R+518)){{goto L43bf05;}}
}
B43bef0:L43bef0:{c.instructions+=1;NFSU2_TR(0x43bef0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B43bef4:L43bef4:{c.instructions+=3;NFSU2_TR(0x43bef4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43bef5:{NFSU2_TR(0x43bef5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43bef6:{NFSU2_TR(0x43bef6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43bef8ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B43bef8:L43bef8:{c.instructions+=3;NFSU2_TR(0x43bef8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B43befb:{NFSU2_TR(0x43befb);
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
B43befd:{NFSU2_TR(0x43befd);
if(r1(R+518)){{goto L43bf1b;}}
}
B43beff:L43beff:{c.instructions+=3;NFSU2_TR(0x43beff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B43bf01:{NFSU2_TR(0x43bf01);
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
B43bf03:{NFSU2_TR(0x43bf03);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43bef4u);}goto L43bef4;}}
}
B43bf05:L43bf05:{c.instructions+=11;NFSU2_TR(0x43bf05);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43bf08:{NFSU2_TR(0x43bf08);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B43bf0a:{NFSU2_TR(0x43bf0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43bf0d:{NFSU2_TR(0x43bf0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43bf0e:{NFSU2_TR(0x43bf0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43bf11:{NFSU2_TR(0x43bf11);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B43bf13:{NFSU2_TR(0x43bf13);
__builtin_memmove((R+0),(R+24),4);
}
B43bf15:{NFSU2_TR(0x43bf15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43bf16:{NFSU2_TR(0x43bf16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B43bf17:{NFSU2_TR(0x43bf17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43bf18:{NFSU2_TR(0x43bf18);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43bf1b:L43bf1b:{c.instructions+=11;NFSU2_TR(0x43bf1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43bf1e:{NFSU2_TR(0x43bf1e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B43bf20:{NFSU2_TR(0x43bf20);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43bf23:{NFSU2_TR(0x43bf23);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B43bf25:{NFSU2_TR(0x43bf25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43bf26:{NFSU2_TR(0x43bf26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43bf29:{NFSU2_TR(0x43bf29);
__builtin_memmove((R+0),(R+24),4);
}
B43bf2b:{NFSU2_TR(0x43bf2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43bf2c:{NFSU2_TR(0x43bf2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B43bf2d:{NFSU2_TR(0x43bf2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43bf2e:{NFSU2_TR(0x43bf2e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43bf40:L43bf40:{c.instructions+=5;NFSU2_TR(0x43bf40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B43bf43:{NFSU2_TR(0x43bf43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43bf45:{NFSU2_TR(0x43bf45);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43bf47:{NFSU2_TR(0x43bf47);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43bf4b:{NFSU2_TR(0x43bf4b);
if(r1(R+518)){TAIL_STATIC(0x43c08du,43c);}
}
B43bf51:L43bf51:{c.instructions+=19;NFSU2_TR(0x43bf51);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43bf54:{NFSU2_TR(0x43bf54);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43bf55:{NFSU2_TR(0x43bf55);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43bf56:{NFSU2_TR(0x43bf56);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43bf59:{NFSU2_TR(0x43bf59);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43bf5c:{NFSU2_TR(0x43bf5c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43bf5d:{NFSU2_TR(0x43bf5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B43bf5f:{NFSU2_TR(0x43bf5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43bf67:{NFSU2_TR(0x43bf67);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43bf68:{NFSU2_TR(0x43bf68);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43bf6c:{NFSU2_TR(0x43bf6c);
__builtin_memmove((R+28),(R+0),4);
}
B43bf6e:{NFSU2_TR(0x43bf6e);
__builtin_memmove((R+12),(R+0),4);
}
B43bf70:{NFSU2_TR(0x43bf70);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B43bf72:{NFSU2_TR(0x43bf72);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B43bf74:{NFSU2_TR(0x43bf74);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43bf76:{NFSU2_TR(0x43bf76);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43bf7a:{NFSU2_TR(0x43bf7a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43bf7e:{NFSU2_TR(0x43bf7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43bf82:{NFSU2_TR(0x43bf82);
if(r1(R+518)){TAIL_STATIC(0x43c063u,43c);}
}
B43bf88:L43bf88:{c.instructions+=8;NFSU2_TR(0x43bf88);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43bf8c:{NFSU2_TR(0x43bf8c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B43bf8d:{NFSU2_TR(0x43bf8d);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B43bf8f:{NFSU2_TR(0x43bf8f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B43bf91:{NFSU2_TR(0x43bf91);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43bf93:{NFSU2_TR(0x43bf93);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43bf97:{NFSU2_TR(0x43bf97);
__builtin_memmove((R+24),(R+28),4);
}
B43bf99:{NFSU2_TR(0x43bf99);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L43bfb4;}}
}
B43bf9b:L43bf9b:{c.instructions+=1;NFSU2_TR(0x43bf9b);
{goto L43bfa0;}
}
B43bfa0:L43bfa0:{c.instructions+=4;NFSU2_TR(0x43bfa0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B43bfa2:{NFSU2_TR(0x43bfa2);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B43bfa3:{NFSU2_TR(0x43bfa3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43bfa5:{NFSU2_TR(0x43bfa5);
if(r1(R+518)){{goto L43bfb2;}}
}
B43bfa7:L43bfa7:{c.instructions+=2;NFSU2_TR(0x43bfa7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43bfa9:{NFSU2_TR(0x43bfa9);
if(r1(R+518)){{goto L43bfb4;}}
}
B43bfab:L43bfab:{c.instructions+=3;NFSU2_TR(0x43bfab);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B43bfac:{NFSU2_TR(0x43bfac);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B43bfae:{NFSU2_TR(0x43bfae);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43bfa0u);}goto L43bfa0;}}
}
B43bfb0:L43bfb0:{c.instructions+=1;NFSU2_TR(0x43bfb0);
{goto L43bfb4;}
}
B43bfb2:L43bfb2:{c.instructions+=1;NFSU2_TR(0x43bfb2);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B43bfb4:L43bfb4:{c.instructions+=5;NFSU2_TR(0x43bfb4);
__builtin_memmove((R+4),(R+8),4);
}
B43bfb6:{NFSU2_TR(0x43bfb6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43bfba:{NFSU2_TR(0x43bfba);
__builtin_memmove((R+12),(R+12),4);
}
B43bfc0:{NFSU2_TR(0x43bfc0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43bfc2:{NFSU2_TR(0x43bfc2);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L43bfe5;}}
}
B43bfc4:L43bfc4:{c.instructions+=2;NFSU2_TR(0x43bfc4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43bfc6:{NFSU2_TR(0x43bfc6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x43c04du,43c);}
}
B43bfcc:L43bfcc:{c.instructions+=2;NFSU2_TR(0x43bfcc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43bfce:{NFSU2_TR(0x43bfce);
if(r1(R+518)){TAIL_STATIC(0x43c04du,43c);}
}
B43bfd0:L43bfd0:{c.instructions+=2;NFSU2_TR(0x43bfd0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43bfd2:{NFSU2_TR(0x43bfd2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43bfe5;}}
}
B43bfd4:L43bfd4:{c.instructions+=6;NFSU2_TR(0x43bfd4);
__builtin_memmove((R+0),(R+24),4);
}
B43bfd6:{NFSU2_TR(0x43bfd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B43bfd8:{NFSU2_TR(0x43bfd8);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B43bfd9:{NFSU2_TR(0x43bfd9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43bfdb:{NFSU2_TR(0x43bfdb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43bfdf:{NFSU2_TR(0x43bfdf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x43c01au,43c);}
}
B43bfe1:L43bfe1:{c.instructions+=2;NFSU2_TR(0x43bfe1);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B43bfe3:{NFSU2_TR(0x43bfe3);
TAIL_STATIC(0x43c01au,43c);
}
B43bfe5:L43bfe5:{c.instructions+=2;NFSU2_TR(0x43bfe5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43bfe7:{NFSU2_TR(0x43bfe7);
if(r1(R+518)){TAIL_STATIC(0x43c00fu,43c);}
}
B43bfe9:L43bfe9:{c.instructions+=2;NFSU2_TR(0x43bfe9);
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
B43bfeb:{NFSU2_TR(0x43bfeb);
if(r1(R+518)){TAIL_STATIC(0x43c00fu,43c);}
}
B43bfed:L43bfed:{c.instructions+=3;NFSU2_TR(0x43bfed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43bfee:{NFSU2_TR(0x43bfee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43bfef:{NFSU2_TR(0x43bfef);
u8 U[12];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43bff3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B43bff3:L43bff3:{c.instructions+=3;NFSU2_TR(0x43bff3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B43bff6:{NFSU2_TR(0x43bff6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43bff8:{NFSU2_TR(0x43bff8);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){TAIL_STATIC(0x43c00fu,43c);}
}
B43bffa:L43bffa:{c.instructions+=2;NFSU2_TR(0x43bffa);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43bffe:{NFSU2_TR(0x43bffe);
__builtin_memmove((R+0),(R+24),4);
TAIL_STATIC(0x43c000u,43c);
}
XIT:NFSU2_TR_EXIT(0x43b,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
