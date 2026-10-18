#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_404(u8* __restrict R,Cpu& c);
u32 body_405(u8* __restrict R,Cpu& c);
u32 body_406(u8* __restrict R,Cpu& c);
u32 body_409(u8* __restrict R,Cpu& c);
u32 body_40f(u8* __restrict R,Cpu& c);
u32 body_410(u8* __restrict R,Cpu& c);
u32 body_411(u8* __restrict R,Cpu& c);
u32 body_412(u8* __restrict R,Cpu& c);
u32 body_415(u8* __restrict R,Cpu& c);
u32 body_416(u8* __restrict R,Cpu& c);
u32 body_418(u8* __restrict R,Cpu& c);
u32 body_419(u8* __restrict R,Cpu& c);
u32 body_41a(u8* __restrict R,Cpu& c);
u32 body_41e(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_59f(u8* __restrict R,Cpu& c);
u32 body_5c1(u8* __restrict R,Cpu& c);
u32 body_5d3(u8* __restrict R,Cpu& c);
u32 body_60b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x41d,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x41d,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_41d(u8* __restrict R,Cpu& c);
u32 page_41d(Cpu& c){return body_41d(c.regs.data(),c);}
__attribute__((noinline)) u32 body_41d(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x41d001:goto L41d001;
case 0x41d003:c.instructions+=2;goto B41d003;
case 0x41d005:c.instructions+=1;goto B41d005;
case 0x41d007:goto L41d007;
case 0x41d009:c.instructions+=2;goto B41d009;
case 0x41d00c:c.instructions+=1;goto B41d00c;
case 0x41d010:goto L41d010;
case 0x41d012:c.instructions+=2;goto B41d012;
case 0x41d014:c.instructions+=1;goto B41d014;
case 0x41d016:goto L41d016;
case 0x41d019:c.instructions+=3;goto B41d019;
case 0x41d01e:c.instructions+=2;goto B41d01e;
case 0x41d020:c.instructions+=1;goto B41d020;
case 0x41d022:goto L41d022;
case 0x41d023:c.instructions+=3;goto B41d023;
case 0x41d026:c.instructions+=2;goto B41d026;
case 0x41d029:c.instructions+=1;goto B41d029;
case 0x41d02b:goto L41d02b;
case 0x41d02d:c.instructions+=3;goto B41d02d;
case 0x41d02e:c.instructions+=2;goto B41d02e;
case 0x41d030:c.instructions+=1;goto B41d030;
case 0x41d033:goto L41d033;
case 0x41d035:c.instructions+=2;goto B41d035;
case 0x41d039:c.instructions+=1;goto B41d039;
case 0x41d03b:goto L41d03b;
case 0x41d03d:c.instructions+=3;goto B41d03d;
case 0x41d03e:c.instructions+=2;goto B41d03e;
case 0x41d040:c.instructions+=1;goto B41d040;
case 0x41d043:goto L41d043;
case 0x41d045:c.instructions+=1;goto B41d045;
case 0x41d04b:goto L41d04b;
case 0x41d04e:c.instructions+=2;goto B41d04e;
case 0x41d050:c.instructions+=1;goto B41d050;
case 0x41d053:goto L41d053;
case 0x41d056:c.instructions+=1;goto B41d056;
case 0x41d058:goto L41d058;
case 0x41d059:c.instructions+=3;goto B41d059;
case 0x41d05c:c.instructions+=2;goto B41d05c;
case 0x41d05f:c.instructions+=1;goto B41d05f;
case 0x41d061:goto L41d061;
case 0x41d063:goto L41d063;
case 0x41d067:c.instructions+=7;goto B41d067;
case 0x41d068:c.instructions+=6;goto B41d068;
case 0x41d069:c.instructions+=5;goto B41d069;
case 0x41d06c:c.instructions+=4;goto B41d06c;
case 0x41d06d:c.instructions+=3;goto B41d06d;
case 0x41d070:c.instructions+=2;goto B41d070;
case 0x41d071:c.instructions+=1;goto B41d071;
case 0x41d074:goto L41d074;
case 0x41d076:goto L41d076;
case 0x41d079:c.instructions+=2;goto B41d079;
case 0x41d07b:c.instructions+=1;goto B41d07b;
case 0x41d07d:goto L41d07d;
case 0x41d082:c.instructions+=5;goto B41d082;
case 0x41d084:c.instructions+=4;goto B41d084;
case 0x41d085:c.instructions+=3;goto B41d085;
case 0x41d088:c.instructions+=2;goto B41d088;
case 0x41d08d:c.instructions+=1;goto B41d08d;
case 0x41d08f:goto L41d08f;
case 0x41d092:c.instructions+=5;goto B41d092;
case 0x41d094:c.instructions+=4;goto B41d094;
case 0x41d096:c.instructions+=3;goto B41d096;
case 0x41d097:c.instructions+=2;goto B41d097;
case 0x41d099:c.instructions+=1;goto B41d099;
case 0x41d09c:goto L41d09c;
case 0x41d09e:c.instructions+=1;goto B41d09e;
case 0x41d0a3:goto L41d0a3;
case 0x41d0a5:c.instructions+=1;goto B41d0a5;
case 0x41d0aa:goto L41d0aa;
case 0x41d0ac:goto L41d0ac;
case 0x41d0b0:c.instructions+=11;goto B41d0b0;
case 0x41d0b2:c.instructions+=10;goto B41d0b2;
case 0x41d0b6:c.instructions+=9;goto B41d0b6;
case 0x41d0bc:c.instructions+=8;goto B41d0bc;
case 0x41d0be:c.instructions+=7;goto B41d0be;
case 0x41d0c4:c.instructions+=6;goto B41d0c4;
case 0x41d0c7:c.instructions+=5;goto B41d0c7;
case 0x41d0c9:c.instructions+=4;goto B41d0c9;
case 0x41d0cc:c.instructions+=3;goto B41d0cc;
case 0x41d0ce:c.instructions+=2;goto B41d0ce;
case 0x41d0d1:c.instructions+=1;goto B41d0d1;
case 0x41d0d5:goto L41d0d5;
case 0x41d0d9:c.instructions+=5;goto B41d0d9;
case 0x41d0da:c.instructions+=4;goto B41d0da;
case 0x41d0db:c.instructions+=3;goto B41d0db;
case 0x41d0dc:c.instructions+=2;goto B41d0dc;
case 0x41d0dd:c.instructions+=1;goto B41d0dd;
case 0x41d0e0:goto L41d0e0;
case 0x41d0e1:c.instructions+=7;goto B41d0e1;
case 0x41d0e2:c.instructions+=6;goto B41d0e2;
case 0x41d0e3:c.instructions+=5;goto B41d0e3;
case 0x41d0e4:c.instructions+=4;goto B41d0e4;
case 0x41d0e6:c.instructions+=3;goto B41d0e6;
case 0x41d0e7:c.instructions+=2;goto B41d0e7;
case 0x41d0ea:c.instructions+=1;goto B41d0ea;
case 0x41d0f2:goto L41d0f2;
case 0x41d0f5:c.instructions+=2;goto B41d0f5;
case 0x41d0f7:c.instructions+=1;goto B41d0f7;
case 0x41d0f9:goto L41d0f9;
case 0x41d0fb:c.instructions+=1;goto B41d0fb;
case 0x41d0fd:goto L41d0fd;
case 0x41d103:c.instructions+=6;goto B41d103;
case 0x41d106:c.instructions+=5;goto B41d106;
case 0x41d10b:c.instructions+=4;goto B41d10b;
case 0x41d10e:c.instructions+=3;goto B41d10e;
case 0x41d110:c.instructions+=2;goto B41d110;
case 0x41d112:c.instructions+=1;goto B41d112;
case 0x41d117:goto L41d117;
case 0x41d119:c.instructions+=3;goto B41d119;
case 0x41d11b:c.instructions+=2;goto B41d11b;
case 0x41d11d:c.instructions+=1;goto B41d11d;
case 0x41d120:goto L41d120;
case 0x41d122:c.instructions+=2;goto B41d122;
case 0x41d124:c.instructions+=1;goto B41d124;
case 0x41d126:goto L41d126;
case 0x41d127:c.instructions+=2;goto B41d127;
case 0x41d129:c.instructions+=1;goto B41d129;
case 0x41d12e:goto L41d12e;
case 0x41d131:c.instructions+=1;goto B41d131;
case 0x41d133:goto L41d133;
case 0x41d137:c.instructions+=2;goto B41d137;
case 0x41d139:c.instructions+=1;goto B41d139;
case 0x41d13b:goto L41d13b;
case 0x41d13f:goto L41d13f;
case 0x41d143:c.instructions+=4;goto B41d143;
case 0x41d146:c.instructions+=3;goto B41d146;
case 0x41d147:c.instructions+=2;goto B41d147;
case 0x41d14b:c.instructions+=1;goto B41d14b;
case 0x41d14d:goto L41d14d;
case 0x41d14e:c.instructions+=5;goto B41d14e;
case 0x41d14f:c.instructions+=4;goto B41d14f;
case 0x41d150:c.instructions+=3;goto B41d150;
case 0x41d151:c.instructions+=2;goto B41d151;
case 0x41d152:c.instructions+=1;goto B41d152;
case 0x41d160:goto L41d160;
case 0x41d161:c.instructions+=10;goto B41d161;
case 0x41d163:c.instructions+=9;goto B41d163;
case 0x41d166:c.instructions+=8;goto B41d166;
case 0x41d167:c.instructions+=7;goto B41d167;
case 0x41d168:c.instructions+=6;goto B41d168;
case 0x41d169:c.instructions+=5;goto B41d169;
case 0x41d16b:c.instructions+=4;goto B41d16b;
case 0x41d16d:c.instructions+=3;goto B41d16d;
case 0x41d16f:c.instructions+=2;goto B41d16f;
case 0x41d170:c.instructions+=1;goto B41d170;
case 0x41d176:goto L41d176;
case 0x41d179:c.instructions+=5;goto B41d179;
case 0x41d17b:c.instructions+=4;goto B41d17b;
case 0x41d181:c.instructions+=3;goto B41d181;
case 0x41d183:c.instructions+=2;goto B41d183;
case 0x41d186:c.instructions+=1;goto B41d186;
case 0x41d18c:goto L41d18c;
case 0x41d18f:c.instructions+=4;goto B41d18f;
case 0x41d195:c.instructions+=3;goto B41d195;
case 0x41d197:c.instructions+=2;goto B41d197;
case 0x41d19a:c.instructions+=1;goto B41d19a;
case 0x41d1a0:goto L41d1a0;
case 0x41d1a6:c.instructions+=2;goto B41d1a6;
case 0x41d1a8:c.instructions+=1;goto B41d1a8;
case 0x41d1ae:goto L41d1ae;
case 0x41d1b1:c.instructions+=4;goto B41d1b1;
case 0x41d1b3:c.instructions+=3;goto B41d1b3;
case 0x41d1b5:c.instructions+=2;goto B41d1b5;
case 0x41d1b9:c.instructions+=1;goto B41d1b9;
case 0x41d1bb:goto L41d1bb;
case 0x41d1be:c.instructions+=1;goto B41d1be;
case 0x41d1c3:goto L41d1c3;
case 0x41d1c6:c.instructions+=2;goto B41d1c6;
case 0x41d1c8:c.instructions+=1;goto B41d1c8;
case 0x41d1cd:goto L41d1cd;
case 0x41d1cf:c.instructions+=1;goto B41d1cf;
case 0x41d1d2:goto L41d1d2;
case 0x41d1d4:c.instructions+=11;goto B41d1d4;
case 0x41d1d6:c.instructions+=10;goto B41d1d6;
case 0x41d1d9:c.instructions+=9;goto B41d1d9;
case 0x41d1dc:c.instructions+=8;goto B41d1dc;
case 0x41d1df:c.instructions+=7;goto B41d1df;
case 0x41d1e1:c.instructions+=6;goto B41d1e1;
case 0x41d1e3:c.instructions+=5;goto B41d1e3;
case 0x41d1e5:c.instructions+=4;goto B41d1e5;
case 0x41d1eb:c.instructions+=3;goto B41d1eb;
case 0x41d1ed:c.instructions+=2;goto B41d1ed;
case 0x41d1f0:c.instructions+=1;goto B41d1f0;
case 0x41d1f2:goto L41d1f2;
case 0x41d1f5:c.instructions+=4;goto B41d1f5;
case 0x41d1f6:c.instructions+=3;goto B41d1f6;
case 0x41d1f9:c.instructions+=2;goto B41d1f9;
case 0x41d1fb:c.instructions+=1;goto B41d1fb;
case 0x41d1fd:goto L41d1fd;
case 0x41d201:goto L41d201;
case 0x41d203:c.instructions+=1;goto B41d203;
case 0x41d205:goto L41d205;
case 0x41d208:c.instructions+=2;goto B41d208;
case 0x41d212:c.instructions+=1;goto B41d212;
case 0x41d214:goto L41d214;
case 0x41d216:c.instructions+=1;goto B41d216;
case 0x41d218:goto L41d218;
case 0x41d21a:c.instructions+=3;goto B41d21a;
case 0x41d21b:c.instructions+=2;goto B41d21b;
case 0x41d21d:c.instructions+=1;goto B41d21d;
case 0x41d222:goto L41d222;
case 0x41d225:c.instructions+=5;goto B41d225;
case 0x41d228:c.instructions+=4;goto B41d228;
case 0x41d229:c.instructions+=3;goto B41d229;
case 0x41d22a:c.instructions+=2;goto B41d22a;
case 0x41d22c:c.instructions+=1;goto B41d22c;
case 0x41d231:goto L41d231;
case 0x41d234:c.instructions+=3;goto B41d234;
case 0x41d235:c.instructions+=2;goto B41d235;
case 0x41d237:c.instructions+=1;goto B41d237;
case 0x41d239:goto L41d239;
case 0x41d23b:goto L41d23b;
case 0x41d23d:c.instructions+=2;goto B41d23d;
case 0x41d23f:c.instructions+=1;goto B41d23f;
case 0x41d244:goto L41d244;
case 0x41d246:goto L41d246;
case 0x41d249:goto L41d249;
case 0x41d253:c.instructions+=3;goto B41d253;
case 0x41d258:c.instructions+=2;goto B41d258;
case 0x41d25e:c.instructions+=1;goto B41d25e;
case 0x41d265:goto L41d265;
case 0x41d267:c.instructions+=10;goto B41d267;
case 0x41d268:c.instructions+=9;goto B41d268;
case 0x41d26f:c.instructions+=8;goto B41d26f;
case 0x41d273:c.instructions+=7;goto B41d273;
case 0x41d279:c.instructions+=6;goto B41d279;
case 0x41d27f:c.instructions+=5;goto B41d27f;
case 0x41d280:c.instructions+=4;goto B41d280;
case 0x41d281:c.instructions+=3;goto B41d281;
case 0x41d283:c.instructions+=2;goto B41d283;
case 0x41d284:c.instructions+=1;goto B41d284;
case 0x41d290:goto L41d290;
case 0x41d291:c.instructions+=15;goto B41d291;
case 0x41d292:c.instructions+=14;goto B41d292;
case 0x41d293:c.instructions+=13;goto B41d293;
case 0x41d297:c.instructions+=12;goto B41d297;
case 0x41d29d:c.instructions+=11;goto B41d29d;
case 0x41d29e:c.instructions+=10;goto B41d29e;
case 0x41d2a1:c.instructions+=9;goto B41d2a1;
case 0x41d2a2:c.instructions+=8;goto B41d2a2;
case 0x41d2a4:c.instructions+=7;goto B41d2a4;
case 0x41d2a7:c.instructions+=6;goto B41d2a7;
case 0x41d2a9:c.instructions+=5;goto B41d2a9;
case 0x41d2aa:c.instructions+=4;goto B41d2aa;
case 0x41d2ab:c.instructions+=3;goto B41d2ab;
case 0x41d2ad:c.instructions+=2;goto B41d2ad;
case 0x41d2b1:c.instructions+=1;goto B41d2b1;
case 0x41d2b6:goto L41d2b6;
case 0x41d2b7:c.instructions+=6;goto B41d2b7;
case 0x41d2bd:c.instructions+=5;goto B41d2bd;
case 0x41d2be:c.instructions+=4;goto B41d2be;
case 0x41d2bf:c.instructions+=3;goto B41d2bf;
case 0x41d2c0:c.instructions+=2;goto B41d2c0;
case 0x41d2c2:c.instructions+=1;goto B41d2c2;
case 0x41d2c7:goto L41d2c7;
case 0x41d2c8:c.instructions+=4;goto B41d2c8;
case 0x41d2c9:c.instructions+=3;goto B41d2c9;
case 0x41d2ca:c.instructions+=2;goto B41d2ca;
case 0x41d2cb:c.instructions+=1;goto B41d2cb;
case 0x41d2d0:goto L41d2d0;
case 0x41d2d3:c.instructions+=18;goto B41d2d3;
case 0x41d2d4:c.instructions+=17;goto B41d2d4;
case 0x41d2d8:c.instructions+=16;goto B41d2d8;
case 0x41d2df:c.instructions+=15;goto B41d2df;
case 0x41d2e0:c.instructions+=14;goto B41d2e0;
case 0x41d2e4:c.instructions+=13;goto B41d2e4;
case 0x41d2e7:c.instructions+=12;goto B41d2e7;
case 0x41d2e8:c.instructions+=11;goto B41d2e8;
case 0x41d2ea:c.instructions+=10;goto B41d2ea;
case 0x41d2ed:c.instructions+=9;goto B41d2ed;
case 0x41d2ee:c.instructions+=8;goto B41d2ee;
case 0x41d2f1:c.instructions+=7;goto B41d2f1;
case 0x41d2f4:c.instructions+=6;goto B41d2f4;
case 0x41d2f8:c.instructions+=5;goto B41d2f8;
case 0x41d2f9:c.instructions+=4;goto B41d2f9;
case 0x41d2fb:c.instructions+=3;goto B41d2fb;
case 0x41d2ff:c.instructions+=2;goto B41d2ff;
case 0x41d303:c.instructions+=1;goto B41d303;
case 0x41d308:goto L41d308;
case 0x41d30b:c.instructions+=11;goto B41d30b;
case 0x41d312:c.instructions+=10;goto B41d312;
case 0x41d316:c.instructions+=9;goto B41d316;
case 0x41d319:c.instructions+=8;goto B41d319;
case 0x41d31f:c.instructions+=7;goto B41d31f;
case 0x41d322:c.instructions+=6;goto B41d322;
case 0x41d326:c.instructions+=5;goto B41d326;
case 0x41d327:c.instructions+=4;goto B41d327;
case 0x41d329:c.instructions+=3;goto B41d329;
case 0x41d32d:c.instructions+=2;goto B41d32d;
case 0x41d331:c.instructions+=1;goto B41d331;
case 0x41d336:goto L41d336;
case 0x41d339:c.instructions+=6;goto B41d339;
case 0x41d33d:c.instructions+=5;goto B41d33d;
case 0x41d342:c.instructions+=4;goto B41d342;
case 0x41d343:c.instructions+=3;goto B41d343;
case 0x41d344:c.instructions+=2;goto B41d344;
case 0x41d34a:c.instructions+=1;goto B41d34a;
case 0x41d34f:goto L41d34f;
case 0x41d353:c.instructions+=11;goto B41d353;
case 0x41d357:c.instructions+=10;goto B41d357;
case 0x41d35c:c.instructions+=9;goto B41d35c;
case 0x41d360:c.instructions+=8;goto B41d360;
case 0x41d366:c.instructions+=7;goto B41d366;
case 0x41d36a:c.instructions+=6;goto B41d36a;
case 0x41d36e:c.instructions+=5;goto B41d36e;
case 0x41d370:c.instructions+=4;goto B41d370;
case 0x41d376:c.instructions+=3;goto B41d376;
case 0x41d378:c.instructions+=2;goto B41d378;
case 0x41d37b:c.instructions+=1;goto B41d37b;
case 0x41d37d:goto L41d37d;
case 0x41d382:goto L41d382;
case 0x41d384:c.instructions+=5;goto B41d384;
case 0x41d387:c.instructions+=4;goto B41d387;
case 0x41d38a:c.instructions+=3;goto B41d38a;
case 0x41d38f:c.instructions+=2;goto B41d38f;
case 0x41d391:c.instructions+=1;goto B41d391;
case 0x41d393:goto L41d393;
case 0x41d397:c.instructions+=4;goto B41d397;
case 0x41d39d:c.instructions+=3;goto B41d39d;
case 0x41d39f:c.instructions+=2;goto B41d39f;
case 0x41d3a2:c.instructions+=1;goto B41d3a2;
case 0x41d3a8:goto L41d3a8;
case 0x41d3ac:c.instructions+=5;goto B41d3ac;
case 0x41d3ae:c.instructions+=4;goto B41d3ae;
case 0x41d3b4:c.instructions+=3;goto B41d3b4;
case 0x41d3b6:c.instructions+=2;goto B41d3b6;
case 0x41d3b9:c.instructions+=1;goto B41d3b9;
case 0x41d3bb:goto L41d3bb;
case 0x41d3bf:c.instructions+=5;goto B41d3bf;
case 0x41d3c1:c.instructions+=4;goto B41d3c1;
case 0x41d3c7:c.instructions+=3;goto B41d3c7;
case 0x41d3c9:c.instructions+=2;goto B41d3c9;
case 0x41d3cc:c.instructions+=1;goto B41d3cc;
case 0x41d3ce:goto L41d3ce;
case 0x41d3cf:c.instructions+=2;goto B41d3cf;
case 0x41d3d1:c.instructions+=1;goto B41d3d1;
case 0x41d3d6:goto L41d3d6;
case 0x41d3dc:c.instructions+=3;goto B41d3dc;
case 0x41d3de:c.instructions+=2;goto B41d3de;
case 0x41d3e1:c.instructions+=1;goto B41d3e1;
case 0x41d3e3:goto L41d3e3;
case 0x41d3e7:c.instructions+=5;goto B41d3e7;
case 0x41d3e9:c.instructions+=4;goto B41d3e9;
case 0x41d3ef:c.instructions+=3;goto B41d3ef;
case 0x41d3f1:c.instructions+=2;goto B41d3f1;
case 0x41d3f4:c.instructions+=1;goto B41d3f4;
case 0x41d3f6:goto L41d3f6;
case 0x41d3fa:c.instructions+=2;goto B41d3fa;
case 0x41d400:c.instructions+=1;goto B41d400;
case 0x41d402:goto L41d402;
case 0x41d406:c.instructions+=6;goto B41d406;
case 0x41d40a:c.instructions+=5;goto B41d40a;
case 0x41d40c:c.instructions+=4;goto B41d40c;
case 0x41d412:c.instructions+=3;goto B41d412;
case 0x41d414:c.instructions+=2;goto B41d414;
case 0x41d417:c.instructions+=1;goto B41d417;
case 0x41d419:goto L41d419;
case 0x41d41d:c.instructions+=2;goto B41d41d;
case 0x41d41f:c.instructions+=1;goto B41d41f;
case 0x41d421:goto L41d421;
case 0x41d426:c.instructions+=1;goto B41d426;
case 0x41d428:goto L41d428;
case 0x41d42c:c.instructions+=1;goto B41d42c;
case 0x41d430:goto L41d430;
case 0x41d432:c.instructions+=3;goto B41d432;
case 0x41d437:c.instructions+=2;goto B41d437;
case 0x41d43a:c.instructions+=1;goto B41d43a;
case 0x41d43c:goto L41d43c;
case 0x41d441:goto L41d441;
case 0x41d443:c.instructions+=6;goto B41d443;
case 0x41d446:c.instructions+=5;goto B41d446;
case 0x41d449:c.instructions+=4;goto B41d449;
case 0x41d44b:c.instructions+=3;goto B41d44b;
case 0x41d44d:c.instructions+=2;goto B41d44d;
case 0x41d453:c.instructions+=1;goto B41d453;
case 0x41d455:goto L41d455;
case 0x41d458:c.instructions+=1;goto B41d458;
case 0x41d45a:goto L41d45a;
case 0x41d45e:c.instructions+=2;goto B41d45e;
case 0x41d461:c.instructions+=1;goto B41d461;
case 0x41d463:goto L41d463;
case 0x41d466:c.instructions+=1;goto B41d466;
case 0x41d468:goto L41d468;
case 0x41d46b:c.instructions+=1;goto B41d46b;
case 0x41d46d:goto L41d46d;
case 0x41d471:c.instructions+=2;goto B41d471;
case 0x41d475:c.instructions+=1;goto B41d475;
case 0x41d477:goto L41d477;
case 0x41d47d:goto L41d47d;
case 0x41d481:c.instructions+=6;goto B41d481;
case 0x41d483:c.instructions+=5;goto B41d483;
case 0x41d485:c.instructions+=4;goto B41d485;
case 0x41d487:c.instructions+=3;goto B41d487;
case 0x41d489:c.instructions+=2;goto B41d489;
case 0x41d48c:c.instructions+=1;goto B41d48c;
case 0x41d48e:goto L41d48e;
case 0x41d490:goto L41d490;
case 0x41d492:c.instructions+=1;goto B41d492;
case 0x41d494:goto L41d494;
case 0x41d497:c.instructions+=1;goto B41d497;
case 0x41d499:goto L41d499;
case 0x41d49d:c.instructions+=2;goto B41d49d;
case 0x41d4a0:c.instructions+=1;goto B41d4a0;
case 0x41d4a2:goto L41d4a2;
case 0x41d4a5:c.instructions+=1;goto B41d4a5;
case 0x41d4a7:goto L41d4a7;
case 0x41d4aa:c.instructions+=1;goto B41d4aa;
case 0x41d4ac:goto L41d4ac;
case 0x41d4b0:c.instructions+=2;goto B41d4b0;
case 0x41d4b4:c.instructions+=1;goto B41d4b4;
case 0x41d4b6:goto L41d4b6;
case 0x41d4bc:goto L41d4bc;
case 0x41d4be:c.instructions+=6;goto B41d4be;
case 0x41d4c2:c.instructions+=5;goto B41d4c2;
case 0x41d4c4:c.instructions+=4;goto B41d4c4;
case 0x41d4c6:c.instructions+=3;goto B41d4c6;
case 0x41d4c8:c.instructions+=2;goto B41d4c8;
case 0x41d4cb:c.instructions+=1;goto B41d4cb;
case 0x41d4cd:goto L41d4cd;
case 0x41d4cf:goto L41d4cf;
case 0x41d4d2:c.instructions+=1;goto B41d4d2;
case 0x41d4d4:goto L41d4d4;
case 0x41d4d7:c.instructions+=1;goto B41d4d7;
case 0x41d4d9:goto L41d4d9;
case 0x41d4db:c.instructions+=1;goto B41d4db;
case 0x41d4dd:goto L41d4dd;
case 0x41d4df:c.instructions+=1;goto B41d4df;
case 0x41d4e1:goto L41d4e1;
case 0x41d4e5:c.instructions+=2;goto B41d4e5;
case 0x41d4e7:c.instructions+=1;goto B41d4e7;
case 0x41d4e9:goto L41d4e9;
case 0x41d4ea:c.instructions+=6;goto B41d4ea;
case 0x41d4eb:c.instructions+=5;goto B41d4eb;
case 0x41d4ec:c.instructions+=4;goto B41d4ec;
case 0x41d4f1:c.instructions+=3;goto B41d4f1;
case 0x41d4f2:c.instructions+=2;goto B41d4f2;
case 0x41d4f5:c.instructions+=1;goto B41d4f5;
case 0x41d4f8:goto L41d4f8;
case 0x41d4fb:c.instructions+=1;goto B41d4fb;
case 0x41d4fd:goto L41d4fd;
case 0x41d500:c.instructions+=1;goto B41d500;
case 0x41d502:goto L41d502;
case 0x41d504:c.instructions+=1;goto B41d504;
case 0x41d506:goto L41d506;
case 0x41d508:c.instructions+=1;goto B41d508;
case 0x41d50a:goto L41d50a;
case 0x41d50e:c.instructions+=3;goto B41d50e;
case 0x41d510:c.instructions+=2;goto B41d510;
case 0x41d515:c.instructions+=1;goto B41d515;
case 0x41d517:goto L41d517;
case 0x41d519:goto L41d519;
case 0x41d51a:c.instructions+=5;goto B41d51a;
case 0x41d51b:c.instructions+=4;goto B41d51b;
case 0x41d51c:c.instructions+=3;goto B41d51c;
case 0x41d51d:c.instructions+=2;goto B41d51d;
case 0x41d520:c.instructions+=1;goto B41d520;
case 0x41d530:goto L41d530;
case 0x41d533:c.instructions+=9;goto B41d533;
case 0x41d534:c.instructions+=8;goto B41d534;
case 0x41d535:c.instructions+=7;goto B41d535;
case 0x41d539:c.instructions+=6;goto B41d539;
case 0x41d53b:c.instructions+=5;goto B41d53b;
case 0x41d541:c.instructions+=4;goto B41d541;
case 0x41d545:c.instructions+=3;goto B41d545;
case 0x41d548:c.instructions+=2;goto B41d548;
case 0x41d54a:c.instructions+=1;goto B41d54a;
case 0x41d550:goto L41d550;
case 0x41d554:c.instructions+=3;goto B41d554;
case 0x41d556:c.instructions+=2;goto B41d556;
case 0x41d558:c.instructions+=1;goto B41d558;
case 0x41d55e:goto L41d55e;
case 0x41d560:c.instructions+=4;goto B41d560;
case 0x41d561:c.instructions+=3;goto B41d561;
case 0x41d562:c.instructions+=2;goto B41d562;
case 0x41d566:c.instructions+=1;goto B41d566;
case 0x41d568:goto L41d568;
case 0x41d56f:c.instructions+=6;goto B41d56f;
case 0x41d572:c.instructions+=5;goto B41d572;
case 0x41d575:c.instructions+=4;goto B41d575;
case 0x41d579:c.instructions+=3;goto B41d579;
case 0x41d57a:c.instructions+=2;goto B41d57a;
case 0x41d57c:c.instructions+=1;goto B41d57c;
case 0x41d581:goto L41d581;
case 0x41d584:c.instructions+=6;goto B41d584;
case 0x41d587:c.instructions+=5;goto B41d587;
case 0x41d58b:c.instructions+=4;goto B41d58b;
case 0x41d58c:c.instructions+=3;goto B41d58c;
case 0x41d58d:c.instructions+=2;goto B41d58d;
case 0x41d58f:c.instructions+=1;goto B41d58f;
case 0x41d591:goto L41d591;
case 0x41d593:c.instructions+=1;goto B41d593;
case 0x41d595:goto L41d595;
case 0x41d59b:c.instructions+=10;goto B41d59b;
case 0x41d59c:c.instructions+=9;goto B41d59c;
case 0x41d59f:c.instructions+=8;goto B41d59f;
case 0x41d5a1:c.instructions+=7;goto B41d5a1;
case 0x41d5a2:c.instructions+=6;goto B41d5a2;
case 0x41d5a5:c.instructions+=5;goto B41d5a5;
case 0x41d5a7:c.instructions+=4;goto B41d5a7;
case 0x41d5a9:c.instructions+=3;goto B41d5a9;
case 0x41d5aa:c.instructions+=2;goto B41d5aa;
case 0x41d5ac:c.instructions+=1;goto B41d5ac;
case 0x41d5b1:goto L41d5b1;
case 0x41d5b3:c.instructions+=13;goto B41d5b3;
case 0x41d5b5:c.instructions+=12;goto B41d5b5;
case 0x41d5b8:c.instructions+=11;goto B41d5b8;
case 0x41d5ba:c.instructions+=10;goto B41d5ba;
case 0x41d5bd:c.instructions+=9;goto B41d5bd;
case 0x41d5bf:c.instructions+=8;goto B41d5bf;
case 0x41d5c0:c.instructions+=7;goto B41d5c0;
case 0x41d5c2:c.instructions+=6;goto B41d5c2;
case 0x41d5c3:c.instructions+=5;goto B41d5c3;
case 0x41d5c4:c.instructions+=4;goto B41d5c4;
case 0x41d5c6:c.instructions+=3;goto B41d5c6;
case 0x41d5c7:c.instructions+=2;goto B41d5c7;
case 0x41d5c9:c.instructions+=1;goto B41d5c9;
case 0x41d5ce:goto L41d5ce;
case 0x41d5d0:c.instructions+=1;goto B41d5d0;
case 0x41d5d6:goto L41d5d6;
case 0x41d5da:c.instructions+=4;goto B41d5da;
case 0x41d5db:c.instructions+=3;goto B41d5db;
case 0x41d5dc:c.instructions+=2;goto B41d5dc;
case 0x41d5de:c.instructions+=1;goto B41d5de;
case 0x41d5e3:goto L41d5e3;
case 0x41d5e7:c.instructions+=1;goto B41d5e7;
case 0x41d5eb:goto L41d5eb;
case 0x41d5f2:c.instructions+=10;goto B41d5f2;
case 0x41d5f6:c.instructions+=9;goto B41d5f6;
case 0x41d5f9:c.instructions+=8;goto B41d5f9;
case 0x41d5fc:c.instructions+=7;goto B41d5fc;
case 0x41d600:c.instructions+=6;goto B41d600;
case 0x41d604:c.instructions+=5;goto B41d604;
case 0x41d609:c.instructions+=4;goto B41d609;
case 0x41d60b:c.instructions+=3;goto B41d60b;
case 0x41d60f:c.instructions+=2;goto B41d60f;
case 0x41d613:c.instructions+=1;goto B41d613;
case 0x41d615:goto L41d615;
case 0x41d61a:c.instructions+=2;goto B41d61a;
case 0x41d61c:c.instructions+=1;goto B41d61c;
case 0x41d61e:goto L41d61e;
case 0x41d622:c.instructions+=4;goto B41d622;
case 0x41d625:c.instructions+=3;goto B41d625;
case 0x41d627:c.instructions+=2;goto B41d627;
case 0x41d62c:c.instructions+=1;goto B41d62c;
case 0x41d62e:goto L41d62e;
case 0x41d633:goto L41d633;
case 0x41d636:c.instructions+=1;goto B41d636;
case 0x41d63c:goto L41d63c;
case 0x41d640:c.instructions+=1;goto B41d640;
case 0x41d644:goto L41d644;
case 0x41d648:c.instructions+=4;goto B41d648;
case 0x41d64a:c.instructions+=3;goto B41d64a;
case 0x41d64e:c.instructions+=2;goto B41d64e;
case 0x41d650:c.instructions+=1;goto B41d650;
case 0x41d652:goto L41d652;
case 0x41d656:c.instructions+=7;goto B41d656;
case 0x41d657:c.instructions+=6;goto B41d657;
case 0x41d658:c.instructions+=5;goto B41d658;
case 0x41d65c:c.instructions+=4;goto B41d65c;
case 0x41d65d:c.instructions+=3;goto B41d65d;
case 0x41d661:c.instructions+=2;goto B41d661;
case 0x41d662:c.instructions+=1;goto B41d662;
case 0x41d667:goto L41d667;
case 0x41d66b:c.instructions+=1;goto B41d66b;
case 0x41d66e:goto L41d66e;
case 0x41d672:c.instructions+=12;goto B41d672;
case 0x41d676:c.instructions+=11;goto B41d676;
case 0x41d67a:c.instructions+=10;goto B41d67a;
case 0x41d67b:c.instructions+=9;goto B41d67b;
case 0x41d67f:c.instructions+=8;goto B41d67f;
case 0x41d680:c.instructions+=7;goto B41d680;
case 0x41d684:c.instructions+=6;goto B41d684;
case 0x41d685:c.instructions+=5;goto B41d685;
case 0x41d686:c.instructions+=4;goto B41d686;
case 0x41d687:c.instructions+=3;goto B41d687;
case 0x41d688:c.instructions+=2;goto B41d688;
case 0x41d689:c.instructions+=1;goto B41d689;
case 0x41d68e:goto L41d68e;
case 0x41d692:c.instructions+=7;goto B41d692;
case 0x41d696:c.instructions+=6;goto B41d696;
case 0x41d699:c.instructions+=5;goto B41d699;
case 0x41d69d:c.instructions+=4;goto B41d69d;
case 0x41d6a1:c.instructions+=3;goto B41d6a1;
case 0x41d6a3:c.instructions+=2;goto B41d6a3;
case 0x41d6a6:c.instructions+=1;goto B41d6a6;
case 0x41d6a8:goto L41d6a8;
case 0x41d6aa:goto L41d6aa;
case 0x41d6ac:c.instructions+=6;goto B41d6ac;
case 0x41d6b0:c.instructions+=5;goto B41d6b0;
case 0x41d6b2:c.instructions+=4;goto B41d6b2;
case 0x41d6b8:c.instructions+=3;goto B41d6b8;
case 0x41d6ba:c.instructions+=2;goto B41d6ba;
case 0x41d6bd:c.instructions+=1;goto B41d6bd;
case 0x41d6bf:goto L41d6bf;
case 0x41d6c1:c.instructions+=7;goto B41d6c1;
case 0x41d6c5:c.instructions+=6;goto B41d6c5;
case 0x41d6c7:c.instructions+=5;goto B41d6c7;
case 0x41d6cd:c.instructions+=4;goto B41d6cd;
case 0x41d6cf:c.instructions+=3;goto B41d6cf;
case 0x41d6d1:c.instructions+=2;goto B41d6d1;
case 0x41d6d4:c.instructions+=1;goto B41d6d4;
case 0x41d6d6:goto L41d6d6;
case 0x41d6de:c.instructions+=1;goto B41d6de;
case 0x41d6e0:goto L41d6e0;
case 0x41d6e2:goto L41d6e2;
case 0x41d6e6:c.instructions+=10;goto B41d6e6;
case 0x41d6ea:c.instructions+=9;goto B41d6ea;
case 0x41d6ec:c.instructions+=8;goto B41d6ec;
case 0x41d6f0:c.instructions+=7;goto B41d6f0;
case 0x41d6f4:c.instructions+=6;goto B41d6f4;
case 0x41d6f5:c.instructions+=5;goto B41d6f5;
case 0x41d6f6:c.instructions+=4;goto B41d6f6;
case 0x41d6f7:c.instructions+=3;goto B41d6f7;
case 0x41d6f8:c.instructions+=2;goto B41d6f8;
case 0x41d6f9:c.instructions+=1;goto B41d6f9;
case 0x41d6fe:goto L41d6fe;
case 0x41d702:c.instructions+=7;goto B41d702;
case 0x41d705:c.instructions+=6;goto B41d705;
case 0x41d708:c.instructions+=5;goto B41d708;
case 0x41d709:c.instructions+=4;goto B41d709;
case 0x41d70c:c.instructions+=3;goto B41d70c;
case 0x41d70e:c.instructions+=2;goto B41d70e;
case 0x41d712:c.instructions+=1;goto B41d712;
case 0x41d718:goto L41d718;
case 0x41d719:c.instructions+=1;goto B41d719;
case 0x41d71a:goto L41d71a;
case 0x41d71b:c.instructions+=3;goto B41d71b;
case 0x41d71c:c.instructions+=2;goto B41d71c;
case 0x41d71f:c.instructions+=1;goto B41d71f;
case 0x41d720:goto L41d720;
case 0x41d723:c.instructions+=6;goto B41d723;
case 0x41d724:c.instructions+=5;goto B41d724;
case 0x41d726:c.instructions+=4;goto B41d726;
case 0x41d729:c.instructions+=3;goto B41d729;
case 0x41d72b:c.instructions+=2;goto B41d72b;
case 0x41d72d:c.instructions+=1;goto B41d72d;
case 0x41d733:goto L41d733;
case 0x41d739:c.instructions+=5;goto B41d739;
case 0x41d73a:c.instructions+=4;goto B41d73a;
case 0x41d73b:c.instructions+=3;goto B41d73b;
case 0x41d73e:c.instructions+=2;goto B41d73e;
case 0x41d740:c.instructions+=1;goto B41d740;
case 0x41d746:goto L41d746;
case 0x41d749:c.instructions+=12;goto B41d749;
case 0x41d74c:c.instructions+=11;goto B41d74c;
case 0x41d74e:c.instructions+=10;goto B41d74e;
case 0x41d750:c.instructions+=9;goto B41d750;
case 0x41d753:c.instructions+=8;goto B41d753;
case 0x41d758:c.instructions+=7;goto B41d758;
case 0x41d75d:c.instructions+=6;goto B41d75d;
case 0x41d75e:c.instructions+=5;goto B41d75e;
case 0x41d75f:c.instructions+=4;goto B41d75f;
case 0x41d762:c.instructions+=3;goto B41d762;
case 0x41d763:c.instructions+=2;goto B41d763;
case 0x41d764:c.instructions+=1;goto B41d764;
case 0x41d769:goto L41d769;
case 0x41d76b:c.instructions+=5;goto B41d76b;
case 0x41d76e:c.instructions+=4;goto B41d76e;
case 0x41d771:c.instructions+=3;goto B41d771;
case 0x41d775:c.instructions+=2;goto B41d775;
case 0x41d777:c.instructions+=1;goto B41d777;
case 0x41d779:goto L41d779;
case 0x41d77e:goto L41d77e;
case 0x41d781:c.instructions+=7;goto B41d781;
case 0x41d787:c.instructions+=6;goto B41d787;
case 0x41d788:c.instructions+=5;goto B41d788;
case 0x41d78e:c.instructions+=4;goto B41d78e;
case 0x41d78f:c.instructions+=3;goto B41d78f;
case 0x41d794:c.instructions+=2;goto B41d794;
case 0x41d797:c.instructions+=1;goto B41d797;
case 0x41d79c:goto L41d79c;
case 0x41d79d:c.instructions+=5;goto B41d79d;
case 0x41d7a3:c.instructions+=4;goto B41d7a3;
case 0x41d7a6:c.instructions+=3;goto B41d7a6;
case 0x41d7a8:c.instructions+=2;goto B41d7a8;
case 0x41d7a9:c.instructions+=1;goto B41d7a9;
case 0x41d7ae:goto L41d7ae;
case 0x41d7b4:c.instructions+=10;goto B41d7b4;
case 0x41d7b6:c.instructions+=9;goto B41d7b6;
case 0x41d7b7:c.instructions+=8;goto B41d7b7;
case 0x41d7ba:c.instructions+=7;goto B41d7ba;
case 0x41d7be:c.instructions+=6;goto B41d7be;
case 0x41d7bf:c.instructions+=5;goto B41d7bf;
case 0x41d7c3:c.instructions+=4;goto B41d7c3;
case 0x41d7c4:c.instructions+=3;goto B41d7c4;
case 0x41d7c5:c.instructions+=2;goto B41d7c5;
case 0x41d7cb:c.instructions+=1;goto B41d7cb;
case 0x41d7d0:goto L41d7d0;
case 0x41d7d3:c.instructions+=8;goto B41d7d3;
case 0x41d7d9:c.instructions+=7;goto B41d7d9;
case 0x41d7db:c.instructions+=6;goto B41d7db;
case 0x41d7dd:c.instructions+=5;goto B41d7dd;
case 0x41d7de:c.instructions+=4;goto B41d7de;
case 0x41d7e0:c.instructions+=3;goto B41d7e0;
case 0x41d7e3:c.instructions+=2;goto B41d7e3;
case 0x41d7e4:c.instructions+=1;goto B41d7e4;
case 0x41d7e9:goto L41d7e9;
case 0x41d7ef:c.instructions+=6;goto B41d7ef;
case 0x41d7f3:c.instructions+=5;goto B41d7f3;
case 0x41d7f5:c.instructions+=4;goto B41d7f5;
case 0x41d7f9:c.instructions+=3;goto B41d7f9;
case 0x41d7fd:c.instructions+=2;goto B41d7fd;
case 0x41d7ff:c.instructions+=1;goto B41d7ff;
case 0x41d805:goto L41d805;
case 0x41d808:c.instructions+=6;goto B41d808;
case 0x41d80c:c.instructions+=5;goto B41d80c;
case 0x41d80d:c.instructions+=4;goto B41d80d;
case 0x41d810:c.instructions+=3;goto B41d810;
case 0x41d811:c.instructions+=2;goto B41d811;
case 0x41d812:c.instructions+=1;goto B41d812;
case 0x41d817:goto L41d817;
case 0x41d819:c.instructions+=1;goto B41d819;
case 0x41d81b:goto L41d81b;
case 0x41d81c:c.instructions+=3;goto B41d81c;
case 0x41d81e:c.instructions+=2;goto B41d81e;
case 0x41d820:c.instructions+=1;goto B41d820;
case 0x41d822:goto L41d822;
case 0x41d826:goto L41d826;
case 0x41d829:c.instructions+=8;goto B41d829;
case 0x41d82f:c.instructions+=7;goto B41d82f;
case 0x41d830:c.instructions+=6;goto B41d830;
case 0x41d836:c.instructions+=5;goto B41d836;
case 0x41d838:c.instructions+=4;goto B41d838;
case 0x41d83d:c.instructions+=3;goto B41d83d;
case 0x41d840:c.instructions+=2;goto B41d840;
case 0x41d843:c.instructions+=1;goto B41d843;
case 0x41d848:goto L41d848;
case 0x41d84e:c.instructions+=11;goto B41d84e;
case 0x41d851:c.instructions+=10;goto B41d851;
case 0x41d853:c.instructions+=9;goto B41d853;
case 0x41d855:c.instructions+=8;goto B41d855;
case 0x41d858:c.instructions+=7;goto B41d858;
case 0x41d85e:c.instructions+=6;goto B41d85e;
case 0x41d85f:c.instructions+=5;goto B41d85f;
case 0x41d861:c.instructions+=4;goto B41d861;
case 0x41d867:c.instructions+=3;goto B41d867;
case 0x41d869:c.instructions+=2;goto B41d869;
case 0x41d86c:c.instructions+=1;goto B41d86c;
case 0x41d86e:goto L41d86e;
case 0x41d871:c.instructions+=2;goto B41d871;
case 0x41d873:c.instructions+=1;goto B41d873;
case 0x41d875:goto L41d875;
case 0x41d87a:c.instructions+=1;goto B41d87a;
case 0x41d87c:goto L41d87c;
case 0x41d881:c.instructions+=7;goto B41d881;
case 0x41d884:c.instructions+=6;goto B41d884;
case 0x41d885:c.instructions+=5;goto B41d885;
case 0x41d887:c.instructions+=4;goto B41d887;
case 0x41d888:c.instructions+=3;goto B41d888;
case 0x41d889:c.instructions+=2;goto B41d889;
case 0x41d88c:c.instructions+=1;goto B41d88c;
case 0x41d88f:goto L41d88f;
case 0x41d891:goto L41d891;
case 0x41d894:c.instructions+=7;goto B41d894;
case 0x41d895:c.instructions+=6;goto B41d895;
case 0x41d899:c.instructions+=5;goto B41d899;
case 0x41d89c:c.instructions+=4;goto B41d89c;
case 0x41d89d:c.instructions+=3;goto B41d89d;
case 0x41d89e:c.instructions+=2;goto B41d89e;
case 0x41d8a2:c.instructions+=1;goto B41d8a2;
case 0x41d8a7:goto L41d8a7;
case 0x41d8a9:c.instructions+=1;goto B41d8a9;
case 0x41d8af:goto L41d8af;
case 0x41d8b0:c.instructions+=2;goto B41d8b0;
case 0x41d8b4:c.instructions+=1;goto B41d8b4;
case 0x41d8b6:goto L41d8b6;
case 0x41d8bb:goto L41d8bb;
case 0x41d8be:goto L41d8be;
case 0x41d8c0:goto L41d8c0;
case 0x41d8c1:c.instructions+=1;goto B41d8c1;
case 0x41d8c2:goto L41d8c2;
case 0x41d8c3:c.instructions+=2;goto B41d8c3;
case 0x41d8c6:c.instructions+=1;goto B41d8c6;
case 0x41d8d0:goto L41d8d0;
case 0x41d8d3:c.instructions+=5;goto B41d8d3;
case 0x41d8d4:c.instructions+=4;goto B41d8d4;
case 0x41d8d6:c.instructions+=3;goto B41d8d6;
case 0x41d8dc:c.instructions+=2;goto B41d8dc;
case 0x41d8de:c.instructions+=1;goto B41d8de;
case 0x41d8e0:goto L41d8e0;
case 0x41d8e6:c.instructions+=5;goto B41d8e6;
case 0x41d8e8:c.instructions+=4;goto B41d8e8;
case 0x41d8ee:c.instructions+=3;goto B41d8ee;
case 0x41d8f0:c.instructions+=2;goto B41d8f0;
case 0x41d8f3:c.instructions+=1;goto B41d8f3;
case 0x41d8f5:goto L41d8f5;
case 0x41d8fb:c.instructions+=8;goto B41d8fb;
case 0x41d8fd:c.instructions+=7;goto B41d8fd;
case 0x41d903:c.instructions+=6;goto B41d903;
case 0x41d907:c.instructions+=5;goto B41d907;
case 0x41d909:c.instructions+=4;goto B41d909;
case 0x41d90f:c.instructions+=3;goto B41d90f;
case 0x41d911:c.instructions+=2;goto B41d911;
case 0x41d914:c.instructions+=1;goto B41d914;
case 0x41d916:goto L41d916;
case 0x41d918:c.instructions+=2;goto B41d918;
case 0x41d91e:c.instructions+=1;goto B41d91e;
case 0x41d923:goto L41d923;
case 0x41d929:c.instructions+=4;goto B41d929;
case 0x41d92d:c.instructions+=3;goto B41d92d;
case 0x41d92f:c.instructions+=2;goto B41d92f;
case 0x41d932:c.instructions+=1;goto B41d932;
case 0x41d934:goto L41d934;
case 0x41d93a:c.instructions+=1;goto B41d93a;
case 0x41d93f:goto L41d93f;
case 0x41d945:c.instructions+=2;goto B41d945;
case 0x41d94b:c.instructions+=1;goto B41d94b;
case 0x41d950:goto L41d950;
case 0x41d952:goto L41d952;
case 0x41d958:c.instructions+=9;goto B41d958;
case 0x41d95e:c.instructions+=8;goto B41d95e;
case 0x41d963:c.instructions+=7;goto B41d963;
case 0x41d965:c.instructions+=6;goto B41d965;
case 0x41d967:c.instructions+=5;goto B41d967;
case 0x41d96b:c.instructions+=4;goto B41d96b;
case 0x41d971:c.instructions+=3;goto B41d971;
case 0x41d975:c.instructions+=2;goto B41d975;
case 0x41d979:c.instructions+=1;goto B41d979;
case 0x41d97b:goto L41d97b;
case 0x41d980:c.instructions+=2;goto B41d980;
case 0x41d982:c.instructions+=1;goto B41d982;
case 0x41d984:goto L41d984;
case 0x41d989:c.instructions+=2;goto B41d989;
case 0x41d98b:c.instructions+=1;goto B41d98b;
case 0x41d98d:goto L41d98d;
case 0x41d992:c.instructions+=2;goto B41d992;
case 0x41d994:c.instructions+=1;goto B41d994;
case 0x41d996:goto L41d996;
case 0x41d99b:c.instructions+=2;goto B41d99b;
case 0x41d99d:c.instructions+=1;goto B41d99d;
case 0x41d99f:goto L41d99f;
case 0x41d9a2:c.instructions+=2;goto B41d9a2;
case 0x41d9a4:c.instructions+=1;goto B41d9a4;
case 0x41d9aa:goto L41d9aa;
case 0x41d9ae:c.instructions+=4;goto B41d9ae;
case 0x41d9b4:c.instructions+=3;goto B41d9b4;
case 0x41d9b6:c.instructions+=2;goto B41d9b6;
case 0x41d9b9:c.instructions+=1;goto B41d9b9;
case 0x41d9bf:goto L41d9bf;
case 0x41d9c2:c.instructions+=2;goto B41d9c2;
case 0x41d9c6:c.instructions+=1;goto B41d9c6;
case 0x41d9cc:goto L41d9cc;
case 0x41d9d2:c.instructions+=40;goto B41d9d2;
case 0x41d9d8:c.instructions+=39;goto B41d9d8;
case 0x41d9dd:c.instructions+=38;goto B41d9dd;
case 0x41d9e3:c.instructions+=37;goto B41d9e3;
case 0x41d9e9:c.instructions+=36;goto B41d9e9;
case 0x41d9ef:c.instructions+=35;goto B41d9ef;
case 0x41d9f4:c.instructions+=34;goto B41d9f4;
case 0x41d9fa:c.instructions+=33;goto B41d9fa;
case 0x41da00:c.instructions+=32;goto B41da00;
case 0x41da06:c.instructions+=31;goto B41da06;
case 0x41da0c:c.instructions+=30;goto B41da0c;
case 0x41da12:c.instructions+=29;goto B41da12;
case 0x41da18:c.instructions+=28;goto B41da18;
case 0x41da1e:c.instructions+=27;goto B41da1e;
case 0x41da24:c.instructions+=26;goto B41da24;
case 0x41da2a:c.instructions+=25;goto B41da2a;
case 0x41da30:c.instructions+=24;goto B41da30;
case 0x41da31:c.instructions+=23;goto B41da31;
case 0x41da37:c.instructions+=22;goto B41da37;
case 0x41da39:c.instructions+=21;goto B41da39;
case 0x41da3c:c.instructions+=20;goto B41da3c;
case 0x41da3e:c.instructions+=19;goto B41da3e;
case 0x41da41:c.instructions+=18;goto B41da41;
case 0x41da47:c.instructions+=17;goto B41da47;
case 0x41da4d:c.instructions+=16;goto B41da4d;
case 0x41da52:c.instructions+=15;goto B41da52;
case 0x41da54:c.instructions+=14;goto B41da54;
case 0x41da5a:c.instructions+=13;goto B41da5a;
case 0x41da60:c.instructions+=12;goto B41da60;
case 0x41da66:c.instructions+=11;goto B41da66;
case 0x41da6c:c.instructions+=10;goto B41da6c;
case 0x41da72:c.instructions+=9;goto B41da72;
case 0x41da78:c.instructions+=8;goto B41da78;
case 0x41da7e:c.instructions+=7;goto B41da7e;
case 0x41da84:c.instructions+=6;goto B41da84;
case 0x41da86:c.instructions+=5;goto B41da86;
case 0x41da88:c.instructions+=4;goto B41da88;
case 0x41da8e:c.instructions+=3;goto B41da8e;
case 0x41da90:c.instructions+=2;goto B41da90;
case 0x41da93:c.instructions+=1;goto B41da93;
case 0x41da95:goto L41da95;
case 0x41da9a:goto L41da9a;
case 0x41daa0:c.instructions+=12;goto B41daa0;
case 0x41daa6:c.instructions+=11;goto B41daa6;
case 0x41daac:c.instructions+=10;goto B41daac;
case 0x41daae:c.instructions+=9;goto B41daae;
case 0x41dab2:c.instructions+=8;goto B41dab2;
case 0x41dab3:c.instructions+=7;goto B41dab3;
case 0x41dab7:c.instructions+=6;goto B41dab7;
case 0x41dab8:c.instructions+=5;goto B41dab8;
case 0x41dabc:c.instructions+=4;goto B41dabc;
case 0x41dabd:c.instructions+=3;goto B41dabd;
case 0x41dac2:c.instructions+=2;goto B41dac2;
case 0x41dac6:c.instructions+=1;goto B41dac6;
case 0x41dacb:goto L41dacb;
case 0x41dacf:c.instructions+=7;goto B41dacf;
case 0x41dad0:c.instructions+=6;goto B41dad0;
case 0x41dad4:c.instructions+=5;goto B41dad4;
case 0x41dad7:c.instructions+=4;goto B41dad7;
case 0x41dad8:c.instructions+=3;goto B41dad8;
case 0x41dad9:c.instructions+=2;goto B41dad9;
case 0x41dadb:c.instructions+=1;goto B41dadb;
case 0x41dae0:goto L41dae0;
case 0x41dae6:c.instructions+=5;goto B41dae6;
case 0x41daec:c.instructions+=4;goto B41daec;
case 0x41daf2:c.instructions+=3;goto B41daf2;
case 0x41daf4:c.instructions+=2;goto B41daf4;
case 0x41daf7:c.instructions+=1;goto B41daf7;
case 0x41daf9:goto L41daf9;
case 0x41dafe:c.instructions+=5;goto B41dafe;
case 0x41db04:c.instructions+=4;goto B41db04;
case 0x41db0a:c.instructions+=3;goto B41db0a;
case 0x41db10:c.instructions+=2;goto B41db10;
case 0x41db16:c.instructions+=1;goto B41db16;
case 0x41db1c:goto L41db1c;
case 0x41db1e:c.instructions+=1;goto B41db1e;
case 0x41db23:goto L41db23;
case 0x41db27:c.instructions+=6;goto B41db27;
case 0x41db29:c.instructions+=5;goto B41db29;
case 0x41db2b:c.instructions+=4;goto B41db2b;
case 0x41db2d:c.instructions+=3;goto B41db2d;
case 0x41db35:c.instructions+=2;goto B41db35;
case 0x41db3d:c.instructions+=1;goto B41db3d;
case 0x41db40:goto L41db40;
case 0x41db42:c.instructions+=4;goto B41db42;
case 0x41db44:c.instructions+=3;goto B41db44;
case 0x41db46:c.instructions+=2;goto B41db46;
case 0x41db48:c.instructions+=1;goto B41db48;
case 0x41db4b:goto L41db4b;
case 0x41db4d:c.instructions+=4;goto B41db4d;
case 0x41db4f:c.instructions+=3;goto B41db4f;
case 0x41db51:c.instructions+=2;goto B41db51;
case 0x41db53:c.instructions+=1;goto B41db53;
case 0x41db56:goto L41db56;
case 0x41db58:c.instructions+=2;goto B41db58;
case 0x41db59:c.instructions+=1;goto B41db59;
case 0x41db5e:goto L41db5e;
case 0x41db64:c.instructions+=4;goto B41db64;
case 0x41db67:c.instructions+=3;goto B41db67;
case 0x41db6a:c.instructions+=2;goto B41db6a;
case 0x41db6c:c.instructions+=1;goto B41db6c;
case 0x41db6e:goto L41db6e;
case 0x41db71:c.instructions+=7;goto B41db71;
case 0x41db74:c.instructions+=6;goto B41db74;
case 0x41db78:c.instructions+=5;goto B41db78;
case 0x41db7c:c.instructions+=4;goto B41db7c;
case 0x41db7f:c.instructions+=3;goto B41db7f;
case 0x41db82:c.instructions+=2;goto B41db82;
case 0x41db84:c.instructions+=1;goto B41db84;
case 0x41db86:goto L41db86;
case 0x41db8c:goto L41db8c;
case 0x41db92:c.instructions+=7;goto B41db92;
case 0x41db94:c.instructions+=6;goto B41db94;
case 0x41db97:c.instructions+=5;goto B41db97;
case 0x41db9b:c.instructions+=4;goto B41db9b;
case 0x41db9d:c.instructions+=3;goto B41db9d;
case 0x41db9f:c.instructions+=2;goto B41db9f;
case 0x41dba2:c.instructions+=1;goto B41dba2;
case 0x41dba4:goto L41dba4;
case 0x41dba6:c.instructions+=1;goto B41dba6;
case 0x41dbaa:goto L41dbaa;
case 0x41dbb0:c.instructions+=4;goto B41dbb0;
case 0x41dbb2:c.instructions+=3;goto B41dbb2;
case 0x41dbb4:c.instructions+=2;goto B41dbb4;
case 0x41dbb7:c.instructions+=1;goto B41dbb7;
case 0x41dbb9:goto L41dbb9;
case 0x41dbbb:c.instructions+=1;goto B41dbbb;
case 0x41dbc1:goto L41dbc1;
case 0x41dbc5:c.instructions+=6;goto B41dbc5;
case 0x41dbcb:c.instructions+=5;goto B41dbcb;
case 0x41dbd1:c.instructions+=4;goto B41dbd1;
case 0x41dbd3:c.instructions+=3;goto B41dbd3;
case 0x41dbd6:c.instructions+=2;goto B41dbd6;
case 0x41dbda:c.instructions+=1;goto B41dbda;
case 0x41dbdc:goto L41dbdc;
case 0x41dbe3:c.instructions+=6;goto B41dbe3;
case 0x41dbe9:c.instructions+=5;goto B41dbe9;
case 0x41dbf0:c.instructions+=4;goto B41dbf0;
case 0x41dbf8:c.instructions+=3;goto B41dbf8;
case 0x41dbff:c.instructions+=2;goto B41dbff;
case 0x41dc03:c.instructions+=1;goto B41dc03;
case 0x41dc05:goto L41dc05;
case 0x41dc0c:c.instructions+=6;goto B41dc0c;
case 0x41dc14:c.instructions+=5;goto B41dc14;
case 0x41dc1b:c.instructions+=4;goto B41dc1b;
case 0x41dc22:c.instructions+=3;goto B41dc22;
case 0x41dc28:c.instructions+=2;goto B41dc28;
case 0x41dc2a:c.instructions+=1;goto B41dc2a;
case 0x41dc2e:goto L41dc2e;
case 0x41dc30:c.instructions+=11;goto B41dc30;
case 0x41dc32:c.instructions+=10;goto B41dc32;
case 0x41dc34:c.instructions+=9;goto B41dc34;
case 0x41dc36:c.instructions+=8;goto B41dc36;
case 0x41dc38:c.instructions+=7;goto B41dc38;
case 0x41dc3a:c.instructions+=6;goto B41dc3a;
case 0x41dc3c:c.instructions+=5;goto B41dc3c;
case 0x41dc3e:c.instructions+=4;goto B41dc3e;
case 0x41dc42:c.instructions+=3;goto B41dc42;
case 0x41dc44:c.instructions+=2;goto B41dc44;
case 0x41dc46:c.instructions+=1;goto B41dc46;
case 0x41dc48:goto L41dc48;
case 0x41dc4e:c.instructions+=6;goto B41dc4e;
case 0x41dc54:c.instructions+=5;goto B41dc54;
case 0x41dc56:c.instructions+=4;goto B41dc56;
case 0x41dc5a:c.instructions+=3;goto B41dc5a;
case 0x41dc5b:c.instructions+=2;goto B41dc5b;
case 0x41dc60:c.instructions+=1;goto B41dc60;
case 0x41dc65:goto L41dc65;
case 0x41dc69:c.instructions+=7;goto B41dc69;
case 0x41dc6d:c.instructions+=6;goto B41dc6d;
case 0x41dc6f:c.instructions+=5;goto B41dc6f;
case 0x41dc73:c.instructions+=4;goto B41dc73;
case 0x41dc75:c.instructions+=3;goto B41dc75;
case 0x41dc77:c.instructions+=2;goto B41dc77;
case 0x41dc7a:c.instructions+=1;goto B41dc7a;
case 0x41dc7c:goto L41dc7c;
case 0x41dc7e:c.instructions+=1;goto B41dc7e;
case 0x41dc82:goto L41dc82;
case 0x41dc86:c.instructions+=4;goto B41dc86;
case 0x41dc88:c.instructions+=3;goto B41dc88;
case 0x41dc8a:c.instructions+=2;goto B41dc8a;
case 0x41dc8d:c.instructions+=1;goto B41dc8d;
case 0x41dc8f:goto L41dc8f;
case 0x41dc91:c.instructions+=1;goto B41dc91;
case 0x41dc95:goto L41dc95;
case 0x41dc9b:c.instructions+=6;goto B41dc9b;
case 0x41dca1:c.instructions+=5;goto B41dca1;
case 0x41dca3:c.instructions+=4;goto B41dca3;
case 0x41dca7:c.instructions+=3;goto B41dca7;
case 0x41dca9:c.instructions+=2;goto B41dca9;
case 0x41dcac:c.instructions+=1;goto B41dcac;
case 0x41dcae:goto L41dcae;
case 0x41dcb0:c.instructions+=1;goto B41dcb0;
case 0x41dcb4:goto L41dcb4;
case 0x41dcb8:c.instructions+=4;goto B41dcb8;
case 0x41dcba:c.instructions+=3;goto B41dcba;
case 0x41dcbc:c.instructions+=2;goto B41dcbc;
case 0x41dcbf:c.instructions+=1;goto B41dcbf;
case 0x41dcc1:goto L41dcc1;
case 0x41dcc5:c.instructions+=3;goto B41dcc5;
case 0x41dcc7:c.instructions+=2;goto B41dcc7;
case 0x41dccb:c.instructions+=1;goto B41dccb;
case 0x41dccd:goto L41dccd;
case 0x41dcd1:goto L41dcd1;
case 0x41dcd3:c.instructions+=2;goto B41dcd3;
case 0x41dcdb:c.instructions+=1;goto B41dcdb;
case 0x41dce0:goto L41dce0;
case 0x41dce2:c.instructions+=1;goto B41dce2;
case 0x41dce8:goto L41dce8;
case 0x41dcee:c.instructions+=4;goto B41dcee;
case 0x41dcf1:c.instructions+=3;goto B41dcf1;
case 0x41dcf4:c.instructions+=2;goto B41dcf4;
case 0x41dcf6:c.instructions+=1;goto B41dcf6;
case 0x41dcf8:goto L41dcf8;
case 0x41dcfb:c.instructions+=7;goto B41dcfb;
case 0x41dcfe:c.instructions+=6;goto B41dcfe;
case 0x41dd02:c.instructions+=5;goto B41dd02;
case 0x41dd06:c.instructions+=4;goto B41dd06;
case 0x41dd09:c.instructions+=3;goto B41dd09;
case 0x41dd0c:c.instructions+=2;goto B41dd0c;
case 0x41dd0e:c.instructions+=1;goto B41dd0e;
case 0x41dd10:goto L41dd10;
case 0x41dd16:goto L41dd16;
case 0x41dd19:c.instructions+=5;goto B41dd19;
case 0x41dd1d:c.instructions+=4;goto B41dd1d;
case 0x41dd23:c.instructions+=3;goto B41dd23;
case 0x41dd25:c.instructions+=2;goto B41dd25;
case 0x41dd28:c.instructions+=1;goto B41dd28;
case 0x41dd2a:goto L41dd2a;
case 0x41dd30:c.instructions+=3;goto B41dd30;
case 0x41dd36:c.instructions+=2;goto B41dd36;
case 0x41dd3c:c.instructions+=1;goto B41dd3c;
case 0x41dd3e:goto L41dd3e;
case 0x41dd44:c.instructions+=2;goto B41dd44;
case 0x41dd4a:c.instructions+=1;goto B41dd4a;
case 0x41dd50:goto L41dd50;
case 0x41dd52:c.instructions+=16;goto B41dd52;
case 0x41dd54:c.instructions+=15;goto B41dd54;
case 0x41dd56:c.instructions+=14;goto B41dd56;
case 0x41dd58:c.instructions+=13;goto B41dd58;
case 0x41dd5a:c.instructions+=12;goto B41dd5a;
case 0x41dd5c:c.instructions+=11;goto B41dd5c;
case 0x41dd5e:c.instructions+=10;goto B41dd5e;
case 0x41dd64:c.instructions+=9;goto B41dd64;
case 0x41dd68:c.instructions+=8;goto B41dd68;
case 0x41dd6a:c.instructions+=7;goto B41dd6a;
case 0x41dd6c:c.instructions+=6;goto B41dd6c;
case 0x41dd6e:c.instructions+=5;goto B41dd6e;
case 0x41dd72:c.instructions+=4;goto B41dd72;
case 0x41dd78:c.instructions+=3;goto B41dd78;
case 0x41dd7a:c.instructions+=2;goto B41dd7a;
case 0x41dd7d:c.instructions+=1;goto B41dd7d;
case 0x41dd7f:goto L41dd7f;
case 0x41dd87:goto L41dd87;
case 0x41dd8d:c.instructions+=5;goto B41dd8d;
case 0x41dd90:c.instructions+=4;goto B41dd90;
case 0x41dd96:c.instructions+=3;goto B41dd96;
case 0x41dd98:c.instructions+=2;goto B41dd98;
case 0x41dd9b:c.instructions+=1;goto B41dd9b;
case 0x41dd9d:goto L41dd9d;
case 0x41dd9f:c.instructions+=2;goto B41dd9f;
case 0x41dda1:c.instructions+=1;goto B41dda1;
case 0x41dda4:goto L41dda4;
case 0x41ddaa:c.instructions+=1;goto B41ddaa;
case 0x41ddae:goto L41ddae;
case 0x41ddb4:c.instructions+=3;goto B41ddb4;
case 0x41ddba:c.instructions+=2;goto B41ddba;
case 0x41ddbc:c.instructions+=1;goto B41ddbc;
case 0x41ddbf:goto L41ddbf;
case 0x41ddc1:c.instructions+=4;goto B41ddc1;
case 0x41ddc7:c.instructions+=3;goto B41ddc7;
case 0x41ddc9:c.instructions+=2;goto B41ddc9;
case 0x41ddcc:c.instructions+=1;goto B41ddcc;
case 0x41ddce:goto L41ddce;
case 0x41ddd0:c.instructions+=2;goto B41ddd0;
case 0x41ddd2:c.instructions+=1;goto B41ddd2;
case 0x41ddd5:goto L41ddd5;
case 0x41dddb:c.instructions+=1;goto B41dddb;
case 0x41dddf:goto L41dddf;
case 0x41dde4:c.instructions+=2;goto B41dde4;
case 0x41dde6:c.instructions+=1;goto B41dde6;
case 0x41dde8:goto L41dde8;
case 0x41dded:c.instructions+=2;goto B41dded;
case 0x41ddef:c.instructions+=1;goto B41ddef;
case 0x41ddf1:goto L41ddf1;
case 0x41ddf6:c.instructions+=2;goto B41ddf6;
case 0x41ddf8:c.instructions+=1;goto B41ddf8;
case 0x41ddfa:goto L41ddfa;
case 0x41ddff:c.instructions+=2;goto B41ddff;
case 0x41de01:c.instructions+=1;goto B41de01;
case 0x41de03:goto L41de03;
case 0x41de08:c.instructions+=2;goto B41de08;
case 0x41de0a:c.instructions+=1;goto B41de0a;
case 0x41de0c:goto L41de0c;
case 0x41de12:c.instructions+=3;goto B41de12;
case 0x41de15:c.instructions+=2;goto B41de15;
case 0x41de17:c.instructions+=1;goto B41de17;
case 0x41de19:goto L41de19;
case 0x41de1c:c.instructions+=1;goto B41de1c;
case 0x41de21:goto L41de21;
case 0x41de23:c.instructions+=4;goto B41de23;
case 0x41de24:c.instructions+=3;goto B41de24;
case 0x41de2a:c.instructions+=2;goto B41de2a;
case 0x41de2d:c.instructions+=1;goto B41de2d;
case 0x41de32:goto L41de32;
case 0x41de38:c.instructions+=4;goto B41de38;
case 0x41de3b:c.instructions+=3;goto B41de3b;
case 0x41de3f:c.instructions+=2;goto B41de3f;
case 0x41de45:c.instructions+=1;goto B41de45;
case 0x41de49:goto L41de49;
case 0x41de4d:c.instructions+=5;goto B41de4d;
case 0x41de53:c.instructions+=4;goto B41de53;
case 0x41de57:c.instructions+=3;goto B41de57;
case 0x41de59:c.instructions+=2;goto B41de59;
case 0x41de5c:c.instructions+=1;goto B41de5c;
case 0x41de5e:goto L41de5e;
case 0x41de60:c.instructions+=4;goto B41de60;
case 0x41de64:c.instructions+=3;goto B41de64;
case 0x41de66:c.instructions+=2;goto B41de66;
case 0x41de69:c.instructions+=1;goto B41de69;
case 0x41de6b:goto L41de6b;
case 0x41de6f:c.instructions+=1;goto B41de6f;
case 0x41de71:goto L41de71;
case 0x41de75:c.instructions+=2;goto B41de75;
case 0x41de77:c.instructions+=1;goto B41de77;
case 0x41de7b:goto L41de7b;
case 0x41de7d:c.instructions+=1;goto B41de7d;
case 0x41de82:goto L41de82;
case 0x41de84:c.instructions+=1;goto B41de84;
case 0x41de86:goto L41de86;
case 0x41de8a:c.instructions+=4;goto B41de8a;
case 0x41de8e:c.instructions+=3;goto B41de8e;
case 0x41de90:c.instructions+=2;goto B41de90;
case 0x41de93:c.instructions+=1;goto B41de93;
case 0x41de95:goto L41de95;
case 0x41de99:c.instructions+=1;goto B41de99;
case 0x41de9d:goto L41de9d;
case 0x41dea1:c.instructions+=7;goto B41dea1;
case 0x41dea5:c.instructions+=6;goto B41dea5;
case 0x41deab:c.instructions+=5;goto B41deab;
case 0x41deaf:c.instructions+=4;goto B41deaf;
case 0x41deb5:c.instructions+=3;goto B41deb5;
case 0x41deb7:c.instructions+=2;goto B41deb7;
case 0x41deba:c.instructions+=1;goto B41deba;
case 0x41debc:goto L41debc;
case 0x41dec0:c.instructions+=2;goto B41dec0;
case 0x41dec2:c.instructions+=1;goto B41dec2;
case 0x41dec4:goto L41dec4;
case 0x41dec8:c.instructions+=3;goto B41dec8;
case 0x41deca:c.instructions+=2;goto B41deca;
case 0x41decd:c.instructions+=1;goto B41decd;
case 0x41decf:goto L41decf;
case 0x41ded3:c.instructions+=2;goto B41ded3;
case 0x41ded7:c.instructions+=1;goto B41ded7;
case 0x41ded9:goto L41ded9;
case 0x41dedd:c.instructions+=1;goto B41dedd;
case 0x41dee1:goto L41dee1;
case 0x41dee3:c.instructions+=1;goto B41dee3;
case 0x41dee8:goto L41dee8;
case 0x41deea:c.instructions+=1;goto B41deea;
case 0x41deec:goto L41deec;
case 0x41def0:c.instructions+=4;goto B41def0;
case 0x41def4:c.instructions+=3;goto B41def4;
case 0x41def6:c.instructions+=2;goto B41def6;
case 0x41def9:c.instructions+=1;goto B41def9;
case 0x41defb:goto L41defb;
case 0x41deff:c.instructions+=1;goto B41deff;
case 0x41df03:goto L41df03;
case 0x41df07:c.instructions+=2;goto B41df07;
case 0x41df0b:c.instructions+=1;goto B41df0b;
case 0x41df0d:goto L41df0d;
case 0x41df11:goto L41df11;
case 0x41df17:goto L41df17;
case 0x41df19:c.instructions+=7;goto B41df19;
case 0x41df1f:c.instructions+=6;goto B41df1f;
case 0x41df25:c.instructions+=5;goto B41df25;
case 0x41df29:c.instructions+=4;goto B41df29;
case 0x41df2a:c.instructions+=3;goto B41df2a;
case 0x41df2c:c.instructions+=2;goto B41df2c;
case 0x41df2f:c.instructions+=1;goto B41df2f;
case 0x41df31:goto L41df31;
case 0x41df33:c.instructions+=1;goto B41df33;
case 0x41df39:goto L41df39;
case 0x41df3d:c.instructions+=4;goto B41df3d;
case 0x41df3f:c.instructions+=3;goto B41df3f;
case 0x41df41:c.instructions+=2;goto B41df41;
case 0x41df44:c.instructions+=1;goto B41df44;
case 0x41df46:goto L41df46;
case 0x41df48:c.instructions+=1;goto B41df48;
case 0x41df4c:goto L41df4c;
case 0x41df4e:c.instructions+=7;goto B41df4e;
case 0x41df50:c.instructions+=6;goto B41df50;
case 0x41df54:c.instructions+=5;goto B41df54;
case 0x41df58:c.instructions+=4;goto B41df58;
case 0x41df5e:c.instructions+=3;goto B41df5e;
case 0x41df60:c.instructions+=2;goto B41df60;
case 0x41df63:c.instructions+=1;goto B41df63;
case 0x41df65:goto L41df65;
case 0x41df69:c.instructions+=5;goto B41df69;
case 0x41df6f:c.instructions+=4;goto B41df6f;
case 0x41df73:c.instructions+=3;goto B41df73;
case 0x41df75:c.instructions+=2;goto B41df75;
case 0x41df78:c.instructions+=1;goto B41df78;
case 0x41df7a:goto L41df7a;
case 0x41df7c:c.instructions+=3;goto B41df7c;
case 0x41df82:c.instructions+=2;goto B41df82;
case 0x41df85:c.instructions+=1;goto B41df85;
case 0x41df88:goto L41df88;
case 0x41df8e:goto L41df8e;
case 0x41df90:c.instructions+=2;goto B41df90;
case 0x41df93:c.instructions+=1;goto B41df93;
case 0x41dfa0:goto L41dfa0;
case 0x41dfa1:c.instructions+=2;goto B41dfa1;
case 0x41dfa3:c.instructions+=1;goto B41dfa3;
case 0x41dfa8:goto L41dfa8;
case 0x41dfad:c.instructions+=1;goto B41dfad;
case 0x41dfaf:goto L41dfaf;
case 0x41dfb0:c.instructions+=1;goto B41dfb0;
case 0x41dfb5:goto L41dfb5;
case 0x41dfb8:goto L41dfb8;
case 0x41dfba:c.instructions+=2;goto B41dfba;
case 0x41dfbb:c.instructions+=1;goto B41dfbb;
case 0x41dfc0:goto L41dfc0;
case 0x41dfc5:c.instructions+=7;goto B41dfc5;
case 0x41dfc7:c.instructions+=6;goto B41dfc7;
case 0x41dfc8:c.instructions+=5;goto B41dfc8;
case 0x41dfc9:c.instructions+=4;goto B41dfc9;
case 0x41dfcd:c.instructions+=3;goto B41dfcd;
case 0x41dfcf:c.instructions+=2;goto B41dfcf;
case 0x41dfd0:c.instructions+=1;goto B41dfd0;
case 0x41dfd2:goto L41dfd2;
case 0x41dfd6:c.instructions+=5;goto B41dfd6;
case 0x41dfda:c.instructions+=4;goto B41dfda;
case 0x41dfdb:c.instructions+=3;goto B41dfdb;
case 0x41dfdc:c.instructions+=2;goto B41dfdc;
case 0x41dfde:c.instructions+=1;goto B41dfde;
case 0x41dfe3:goto L41dfe3;
case 0x41dfe5:goto L41dfe5;
case 0x41dfea:goto L41dfea;
case 0x41dfed:c.instructions+=3;goto B41dfed;
case 0x41dfef:c.instructions+=2;goto B41dfef;
case 0x41dff0:c.instructions+=1;goto B41dff0;
case 0x41dff2:goto L41dff2;
case 0x41dff6:c.instructions+=5;goto B41dff6;
case 0x41dffa:c.instructions+=4;goto B41dffa;
case 0x41dffb:c.instructions+=3;goto B41dffb;
case 0x41dffc:c.instructions+=2;goto B41dffc;
case 0x41dffe:c.instructions+=1;goto B41dffe;
default:missing_instruction(c.pc);}
B41d001:L41d001:{c.instructions+=3;NFSU2_TR(0x41d001);
__builtin_memmove((R+12),(R+0),1);
}
B41d003:{NFSU2_TR(0x41d003);
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
B41d005:{NFSU2_TR(0x41d005);
if(r1(R+518)){{goto L41d02b;}}
}
B41d007:L41d007:{c.instructions+=3;NFSU2_TR(0x41d007);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B41d009:{NFSU2_TR(0x41d009);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+8),(U+0),4);
}
B41d00c:{NFSU2_TR(0x41d00c);
__builtin_memmove((R+16),(R+16),4);
}
B41d010:L41d010:{c.instructions+=3;NFSU2_TR(0x41d010);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41d012:{NFSU2_TR(0x41d012);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41d014:{NFSU2_TR(0x41d014);
if(r1(R+518)){{goto L41d022;}}
}
B41d016:L41d016:{c.instructions+=4;NFSU2_TR(0x41d016);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B41d019:{NFSU2_TR(0x41d019);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1fffull))));
}
B41d01e:{NFSU2_TR(0x41d01e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41d020:{NFSU2_TR(0x41d020);
if(r1(R+518)){{goto L41d063;}}
}
B41d022:L41d022:{c.instructions+=4;NFSU2_TR(0x41d022);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B41d023:{NFSU2_TR(0x41d023);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B41d026:{NFSU2_TR(0x41d026);
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
B41d029:{NFSU2_TR(0x41d029);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41d010u);}goto L41d010;}}
}
B41d02b:L41d02b:{c.instructions+=4;NFSU2_TR(0x41d02b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41d02d:{NFSU2_TR(0x41d02d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d02e:{NFSU2_TR(0x41d02e);
__builtin_memmove((R+4),(R+24),4);
}
B41d030:{NFSU2_TR(0x41d030);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41d033ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41d033:L41d033:{c.instructions+=3;NFSU2_TR(0x41d033);
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
B41d035:{NFSU2_TR(0x41d035);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41d039:{NFSU2_TR(0x41d039);
if(r1(R+518)){{goto L41d043;}}
}
B41d03b:L41d03b:{c.instructions+=4;NFSU2_TR(0x41d03b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41d03d:{NFSU2_TR(0x41d03d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d03e:{NFSU2_TR(0x41d03e);
__builtin_memmove((R+4),(R+24),4);
}
B41d040:{NFSU2_TR(0x41d040);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41d043ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41d043:L41d043:{c.instructions+=2;NFSU2_TR(0x41d043);
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
B41d045:{NFSU2_TR(0x41d045);
if(r1(R+518)){{goto L41d0d5;}}
}
B41d04b:L41d04b:{c.instructions+=3;NFSU2_TR(0x41d04b);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xffffffffull))));
}
B41d04e:{NFSU2_TR(0x41d04e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B41d050:{NFSU2_TR(0x41d050);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+4),(U+0),4);
}
B41d053:L41d053:{c.instructions+=2;NFSU2_TR(0x41d053);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B41d056:{NFSU2_TR(0x41d056);
if(r1(R+518)){{goto L41d074;}}
}
B41d058:L41d058:{c.instructions+=4;NFSU2_TR(0x41d058);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B41d059:{NFSU2_TR(0x41d059);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B41d05c:{NFSU2_TR(0x41d05c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41d05f:{NFSU2_TR(0x41d05f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41d053u);}goto L41d053;}}
}
B41d061:L41d061:{c.instructions+=1;NFSU2_TR(0x41d061);
{goto L41d076;}
}
B41d063:L41d063:{c.instructions+=8;NFSU2_TR(0x41d063);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B41d067:{NFSU2_TR(0x41d067);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41d068:{NFSU2_TR(0x41d068);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41d069:{NFSU2_TR(0x41d069);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B41d06c:{NFSU2_TR(0x41d06c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41d06d:{NFSU2_TR(0x41d06d);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B41d070:{NFSU2_TR(0x41d070);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41d071:{NFSU2_TR(0x41d071);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41d074:L41d074:{c.instructions+=1;NFSU2_TR(0x41d074);
__builtin_memmove((R+8),(R+0),4);
}
B41d076:L41d076:{c.instructions+=3;NFSU2_TR(0x41d076);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41d079:{NFSU2_TR(0x41d079);
__builtin_memmove((R+0),(R+8),4);
}
B41d07b:{NFSU2_TR(0x41d07b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41d0ac;}}
}
B41d07d:L41d07d:{c.instructions+=6;NFSU2_TR(0x41d07d);
__builtin_memmove((R+0),gp(0x827ab8),4);
}
B41d082:{NFSU2_TR(0x41d082);
__builtin_memmove((R+4),(R+0),4);
}
B41d084:{NFSU2_TR(0x41d084);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B41d085:{NFSU2_TR(0x41d085);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xaull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xaull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B41d088:{NFSU2_TR(0x41d088);
__builtin_memmove(gp(0x827ab8),(R+0),4);
}
B41d08d:{NFSU2_TR(0x41d08d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L41d0aa;}}
}
B41d08f:L41d08f:{c.instructions+=6;NFSU2_TR(0x41d08f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41d092:{NFSU2_TR(0x41d092);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41d094:{NFSU2_TR(0x41d094);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d096:{NFSU2_TR(0x41d096);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d097:{NFSU2_TR(0x41d097);
__builtin_memmove((R+4),(R+24),4);
}
B41d099:{NFSU2_TR(0x41d099);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41d09cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41d09c:L41d09c:{c.instructions+=2;NFSU2_TR(0x41d09c);
__builtin_memmove((R+4),(R+0),4);
}
B41d09e:{NFSU2_TR(0x41d09e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41d0a3ull));
TAIL_STATIC(0x41a090u,41a);
}
B41d0a3:L41d0a3:{c.instructions+=2;NFSU2_TR(0x41d0a3);
__builtin_memmove((R+4),(R+24),4);
}
B41d0a5:{NFSU2_TR(0x41d0a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41d0aaull));
TAIL_STATIC(0x40f6f0u,40f);
}
B41d0aa:L41d0aa:{c.instructions+=1;NFSU2_TR(0x41d0aa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B41d0ac:L41d0ac:{c.instructions+=12;NFSU2_TR(0x41d0ac);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B41d0b0:{NFSU2_TR(0x41d0b0);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B41d0b2:{NFSU2_TR(0x41d0b2);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B41d0b6:{NFSU2_TR(0x41d0b6);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x1fffull))));
}
B41d0bc:{NFSU2_TR(0x41d0bc);
w4(R+28,shl<u32>(r4(R+28),u64(u32(0x1ull))));
}
B41d0be:{NFSU2_TR(0x41d0be);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffe0003ull))));
}
B41d0c4:{NFSU2_TR(0x41d0c4);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1ull))));
}
B41d0c7:{NFSU2_TR(0x41d0c7);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+4))));
}
B41d0c9:{NFSU2_TR(0x41d0c9);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B41d0cc:{NFSU2_TR(0x41d0cc);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+8))));
}
B41d0ce:{NFSU2_TR(0x41d0ce);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))|u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B41d0d1:{NFSU2_TR(0x41d0d1);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B41d0d5:L41d0d5:{c.instructions+=6;NFSU2_TR(0x41d0d5);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41d0d9:{NFSU2_TR(0x41d0d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41d0da:{NFSU2_TR(0x41d0da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41d0db:{NFSU2_TR(0x41d0db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41d0dc:{NFSU2_TR(0x41d0dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41d0dd:{NFSU2_TR(0x41d0dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41d0e0:L41d0e0:{c.instructions+=8;NFSU2_TR(0x41d0e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d0e1:{NFSU2_TR(0x41d0e1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d0e2:{NFSU2_TR(0x41d0e2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d0e3:{NFSU2_TR(0x41d0e3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d0e4:{NFSU2_TR(0x41d0e4);
__builtin_memmove((R+12),(R+4),4);
}
B41d0e6:{NFSU2_TR(0x41d0e6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d0e7:{NFSU2_TR(0x41d0e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41d0ea:{NFSU2_TR(0x41d0ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41d0f2:L41d0f2:{c.instructions+=3;NFSU2_TR(0x41d0f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41d0f5:{NFSU2_TR(0x41d0f5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41d0f7:{NFSU2_TR(0x41d0f7);
if(r1(R+518)){{goto L41d13f;}}
}
B41d0f9:L41d0f9:{c.instructions+=2;NFSU2_TR(0x41d0f9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41d0fb:{NFSU2_TR(0x41d0fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41d13f;}}
}
B41d0fd:L41d0fd:{c.instructions+=7;NFSU2_TR(0x41d0fd);
__builtin_memmove((R+4),gp(0x883db0),4);
}
B41d103:{NFSU2_TR(0x41d103);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B41d106:{NFSU2_TR(0x41d106);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1fffull))));
}
B41d10b:{NFSU2_TR(0x41d10b);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B41d10e:{NFSU2_TR(0x41d10e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B41d110:{NFSU2_TR(0x41d110);
__builtin_memmove((R+4),(R+0),4);
}
B41d112:{NFSU2_TR(0x41d112);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41d117ull));
TAIL_STATIC(0x5d3f80u,5d3);
}
B41d117:L41d117:{c.instructions+=4;NFSU2_TR(0x41d117);
__builtin_memmove((R+28),(R+0),4);
}
B41d119:{NFSU2_TR(0x41d119);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41d11b:{NFSU2_TR(0x41d11b);
__builtin_memmove((R+4),(R+12),4);
}
B41d11d:{NFSU2_TR(0x41d11d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41d120ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41d120:L41d120:{c.instructions+=3;NFSU2_TR(0x41d120);
__builtin_memmove((R+24),(R+0),4);
}
B41d122:{NFSU2_TR(0x41d122);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41d124:{NFSU2_TR(0x41d124);
if(r1(R+518)){{goto L41d13b;}}
}
B41d126:L41d126:{c.instructions+=3;NFSU2_TR(0x41d126);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d127:{NFSU2_TR(0x41d127);
__builtin_memmove((R+4),(R+24),4);
}
B41d129:{NFSU2_TR(0x41d129);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41d12eull));
TAIL_STATIC(0x411c80u,411);
}
B41d12e:L41d12e:{c.instructions+=2;NFSU2_TR(0x41d12e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41d131:{NFSU2_TR(0x41d131);
if(r1(R+518)){{goto L41d13b;}}
}
B41d133:L41d133:{c.instructions+=3;NFSU2_TR(0x41d133);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B41d137:{NFSU2_TR(0x41d137);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41d139:{NFSU2_TR(0x41d139);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41d13f;}}
}
B41d13b:L41d13b:{c.instructions+=1;NFSU2_TR(0x41d13b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0xfffffffeull))));
s4(u32(r4(R+20)),r4(U+0));
}
B41d13f:L41d13f:{c.instructions+=5;NFSU2_TR(0x41d13f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41d143:{NFSU2_TR(0x41d143);
w1(R+512,carry<u32>(r4(R+20),u32(0x4ull)));
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B41d146:{NFSU2_TR(0x41d146);
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
B41d147:{NFSU2_TR(0x41d147);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41d14b:{NFSU2_TR(0x41d14b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41d0f2u);}goto L41d0f2;}}
}
B41d14d:L41d14d:{c.instructions+=6;NFSU2_TR(0x41d14d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41d14e:{NFSU2_TR(0x41d14e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41d14f:{NFSU2_TR(0x41d14f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41d150:{NFSU2_TR(0x41d150);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41d151:{NFSU2_TR(0x41d151);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B41d152:{NFSU2_TR(0x41d152);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41d160:L41d160:{c.instructions+=11;NFSU2_TR(0x41d160);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d161:{NFSU2_TR(0x41d161);
__builtin_memmove((R+20),(R+16),4);
}
B41d163:{NFSU2_TR(0x41d163);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B41d166:{NFSU2_TR(0x41d166);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d167:{NFSU2_TR(0x41d167);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d168:{NFSU2_TR(0x41d168);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d169:{NFSU2_TR(0x41d169);
__builtin_memmove((R+24),(R+4),4);
}
B41d16b:{NFSU2_TR(0x41d16b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B41d16d:{NFSU2_TR(0x41d16d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41d16f:{NFSU2_TR(0x41d16f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d170:{NFSU2_TR(0x41d170);
if(r1(R+518)){{goto L41d249;}}
}
B41d176:L41d176:{c.instructions+=6;NFSU2_TR(0x41d176);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41d179:{NFSU2_TR(0x41d179);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B41d17b:{NFSU2_TR(0x41d17b);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41d181:{NFSU2_TR(0x41d181);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41d183:{NFSU2_TR(0x41d183);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41d186:{NFSU2_TR(0x41d186);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L41d246;}}
}
B41d18c:L41d18c:{c.instructions+=5;NFSU2_TR(0x41d18c);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41d18f:{NFSU2_TR(0x41d18f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41d195:{NFSU2_TR(0x41d195);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41d197:{NFSU2_TR(0x41d197);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41d19a:{NFSU2_TR(0x41d19a);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L41d246;}}
}
B41d1a0:L41d1a0:{c.instructions+=3;NFSU2_TR(0x41d1a0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41d1a6:{NFSU2_TR(0x41d1a6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41d1a8:{NFSU2_TR(0x41d1a8);
if(r1(R+518)){{goto L41d246;}}
}
B41d1ae:L41d1ae:{c.instructions+=5;NFSU2_TR(0x41d1ae);
w4(R+0,u32(s32(s8(r1(R+4)))));
}
B41d1b1:{NFSU2_TR(0x41d1b1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B41d1b3:{NFSU2_TR(0x41d1b3);
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
B41d1b5:{NFSU2_TR(0x41d1b5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41d1b9:{NFSU2_TR(0x41d1b9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L41d201;}}
}
B41d1bb:L41d1bb:{c.instructions+=2;NFSU2_TR(0x41d1bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41d1be:{NFSU2_TR(0x41d1be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41d1c3ull));
TAIL_STATIC(0x401890u,401);
}
B41d1c3:L41d1c3:{c.instructions+=3;NFSU2_TR(0x41d1c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41d1c6:{NFSU2_TR(0x41d1c6);
__builtin_memmove((R+12),(R+0),4);
}
B41d1c8:{NFSU2_TR(0x41d1c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41d1cdull));
TAIL_STATIC(0x4018a0u,401);
}
B41d1cd:L41d1cd:{c.instructions+=2;NFSU2_TR(0x41d1cd);
__builtin_memmove((R+8),(R+0),4);
}
B41d1cf:{NFSU2_TR(0x41d1cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B41d1d2:L41d1d2:{c.instructions+=12;NFSU2_TR(0x41d1d2);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41d1d4:{NFSU2_TR(0x41d1d4);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41d1d6:{NFSU2_TR(0x41d1d6);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41d1d9:{NFSU2_TR(0x41d1d9);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41d1dc:{NFSU2_TR(0x41d1dc);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41d1df:{NFSU2_TR(0x41d1df);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B41d1e1:{NFSU2_TR(0x41d1e1);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41d1e3:{NFSU2_TR(0x41d1e3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B41d1e5:{NFSU2_TR(0x41d1e5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41d1eb:{NFSU2_TR(0x41d1eb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41d1ed:{NFSU2_TR(0x41d1ed);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41d1f0:{NFSU2_TR(0x41d1f0);
if(r1(R+518)){{goto L41d1fd;}}
}
B41d1f2:L41d1f2:{c.instructions+=5;NFSU2_TR(0x41d1f2);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B41d1f5:{NFSU2_TR(0x41d1f5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B41d1f6:{NFSU2_TR(0x41d1f6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B41d1f9:{NFSU2_TR(0x41d1f9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41d1fb:{NFSU2_TR(0x41d1fb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41d1d2u);}goto L41d1d2;}}
}
B41d1fd:L41d1fd:{c.instructions+=1;NFSU2_TR(0x41d1fd);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41d201:L41d201:{c.instructions+=2;NFSU2_TR(0x41d201);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41d203:{NFSU2_TR(0x41d203);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41d214;}}
}
B41d205:L41d205:{c.instructions+=3;NFSU2_TR(0x41d205);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B41d208:{NFSU2_TR(0x41d208);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41d212:{NFSU2_TR(0x41d212);
{goto L41d265;}
}
B41d214:L41d214:{c.instructions+=2;NFSU2_TR(0x41d214);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41d216:{NFSU2_TR(0x41d216);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L41d222;}}
}
B41d218:L41d218:{c.instructions+=4;NFSU2_TR(0x41d218);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d21a:{NFSU2_TR(0x41d21a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d21b:{NFSU2_TR(0x41d21b);
__builtin_memmove((R+4),(R+24),4);
}
B41d21d:{NFSU2_TR(0x41d21d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41d222ull));
TAIL_STATIC(0x40f7a0u,40f);
}
B41d222:L41d222:{c.instructions+=6;NFSU2_TR(0x41d222);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41d225:{NFSU2_TR(0x41d225);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41d228:{NFSU2_TR(0x41d228);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d229:{NFSU2_TR(0x41d229);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d22a:{NFSU2_TR(0x41d22a);
__builtin_memmove((R+4),(R+24),4);
}
B41d22c:{NFSU2_TR(0x41d22c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41d231ull));
TAIL_STATIC(0x415590u,415);
}
B41d231:L41d231:{c.instructions+=4;NFSU2_TR(0x41d231);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+4,u32(s32(s8(r1(U+0)))));
}
B41d234:{NFSU2_TR(0x41d234);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B41d235:{NFSU2_TR(0x41d235);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41d237:{NFSU2_TR(0x41d237);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41d23b;}}
}
B41d239:L41d239:{c.instructions+=1;NFSU2_TR(0x41d239);
__builtin_memmove((R+0),(R+4),4);
}
B41d23b:L41d23b:{c.instructions+=3;NFSU2_TR(0x41d23b);
__builtin_memmove((R+4),(R+24),4);
}
B41d23d:{NFSU2_TR(0x41d23d);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+24)),r1(U+0));
}
B41d23f:{NFSU2_TR(0x41d23f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41d244ull));
TAIL_STATIC(0x405270u,405);
}
B41d244:L41d244:{c.instructions+=1;NFSU2_TR(0x41d244);
{goto L41d265;}
}
B41d246:L41d246:{c.instructions+=1;NFSU2_TR(0x41d246);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B41d249:L41d249:{c.instructions+=4;NFSU2_TR(0x41d249);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41d253:{NFSU2_TR(0x41d253);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B41d258:{NFSU2_TR(0x41d258);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41d25e:{NFSU2_TR(0x41d25e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c9ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B41d265:L41d265:{c.instructions+=11;NFSU2_TR(0x41d265);
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
B41d267:{NFSU2_TR(0x41d267);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41d268:{NFSU2_TR(0x41d268);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c8ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B41d26f:{NFSU2_TR(0x41d26f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B41d273:{NFSU2_TR(0x41d273);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41d279:{NFSU2_TR(0x41d279);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41d27f:{NFSU2_TR(0x41d27f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41d280:{NFSU2_TR(0x41d280);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41d281:{NFSU2_TR(0x41d281);
__builtin_memmove((R+16),(R+20),4);
}
B41d283:{NFSU2_TR(0x41d283);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41d284:{NFSU2_TR(0x41d284);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41d290:L41d290:{c.instructions+=16;NFSU2_TR(0x41d290);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d291:{NFSU2_TR(0x41d291);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d292:{NFSU2_TR(0x41d292);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d293:{NFSU2_TR(0x41d293);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B41d297:{NFSU2_TR(0x41d297);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41d29d:{NFSU2_TR(0x41d29d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d29e:{NFSU2_TR(0x41d29e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41d2a1:{NFSU2_TR(0x41d2a1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d2a2:{NFSU2_TR(0x41d2a2);
__builtin_memmove((R+28),(R+4),4);
}
B41d2a4:{NFSU2_TR(0x41d2a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41d2a7:{NFSU2_TR(0x41d2a7);
__builtin_memmove((R+4),(R+0),4);
}
B41d2a9:{NFSU2_TR(0x41d2a9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d2aa:{NFSU2_TR(0x41d2aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d2ab:{NFSU2_TR(0x41d2ab);
__builtin_memmove((R+4),(R+28),4);
}
B41d2ad:{NFSU2_TR(0x41d2ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41d2b1:{NFSU2_TR(0x41d2b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41d2b6ull));
TAIL_STATIC(0x404ef0u,404);
}
B41d2b6:L41d2b6:{c.instructions+=7;NFSU2_TR(0x41d2b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d2b7:{NFSU2_TR(0x41d2b7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x80ull))));
}
B41d2bd:{NFSU2_TR(0x41d2bd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d2be:{NFSU2_TR(0x41d2be);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d2bf:{NFSU2_TR(0x41d2bf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d2c0:{NFSU2_TR(0x41d2c0);
__builtin_memmove((R+4),(R+28),4);
}
B41d2c2:{NFSU2_TR(0x41d2c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41d2c7ull));
TAIL_STATIC(0x4158e0u,415);
}
B41d2c7:L41d2c7:{c.instructions+=5;NFSU2_TR(0x41d2c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41d2c8:{NFSU2_TR(0x41d2c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41d2c9:{NFSU2_TR(0x41d2c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41d2ca:{NFSU2_TR(0x41d2ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41d2cb:{NFSU2_TR(0x41d2cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41d2d0:L41d2d0:{c.instructions+=19;NFSU2_TR(0x41d2d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B41d2d3:{NFSU2_TR(0x41d2d3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d2d4:{NFSU2_TR(0x41d2d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B41d2d8:{NFSU2_TR(0x41d2d8);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B41d2df:{NFSU2_TR(0x41d2df);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d2e0:{NFSU2_TR(0x41d2e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B41d2e4:{NFSU2_TR(0x41d2e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41d2e7:{NFSU2_TR(0x41d2e7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d2e8:{NFSU2_TR(0x41d2e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B41d2ea:{NFSU2_TR(0x41d2ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41d2ed:{NFSU2_TR(0x41d2ed);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d2ee:{NFSU2_TR(0x41d2ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B41d2f1:{NFSU2_TR(0x41d2f1);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B41d2f4:{NFSU2_TR(0x41d2f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41d2f8:{NFSU2_TR(0x41d2f8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d2f9:{NFSU2_TR(0x41d2f9);
__builtin_memmove((R+4),(R+20),4);
}
B41d2fb:{NFSU2_TR(0x41d2fb);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B41d2ff:{NFSU2_TR(0x41d2ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41d303:{NFSU2_TR(0x41d303);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41d308ull));
TAIL_STATIC(0x60bfa0u,60b);
}
B41d308:L41d308:{c.instructions+=12;NFSU2_TR(0x41d308);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41d30b:{NFSU2_TR(0x41d30b);
u8 U[16];
w4(U+0,u32(u32(u32(0x324ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B41d312:{NFSU2_TR(0x41d312);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41d316:{NFSU2_TR(0x41d316);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41d319:{NFSU2_TR(0x41d319);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x31cull))));
__builtin_memmove((R+0),(U+0),4);
}
B41d31f:{NFSU2_TR(0x41d31f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41d322:{NFSU2_TR(0x41d322);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41d326:{NFSU2_TR(0x41d326);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d327:{NFSU2_TR(0x41d327);
__builtin_memmove((R+4),(R+28),4);
}
B41d329:{NFSU2_TR(0x41d329);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41d32d:{NFSU2_TR(0x41d32d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41d331:{NFSU2_TR(0x41d331);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41d336ull));
TAIL_STATIC(0x60bfa0u,60b);
}
B41d336:L41d336:{c.instructions+=7;NFSU2_TR(0x41d336);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41d339:{NFSU2_TR(0x41d339);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41d33d:{NFSU2_TR(0x41d33d);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d342:{NFSU2_TR(0x41d342);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d343:{NFSU2_TR(0x41d343);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d344:{NFSU2_TR(0x41d344);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x31cull))));
__builtin_memmove((R+4),(U+0),4);
}
B41d34a:{NFSU2_TR(0x41d34a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41d34full));
TAIL_STATIC(0x419e10u,419);
}
B41d34f:L41d34f:{c.instructions+=12;NFSU2_TR(0x41d34f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41d353:{NFSU2_TR(0x41d353);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41d357:{NFSU2_TR(0x41d357);
u8 U[5];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B41d35c:{NFSU2_TR(0x41d35c);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41d360:{NFSU2_TR(0x41d360);
{u32 ea_=u32(u32(7878656u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41d366:{NFSU2_TR(0x41d366);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41d36a:{NFSU2_TR(0x41d36a);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41d36e:{NFSU2_TR(0x41d36e);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B41d370:{NFSU2_TR(0x41d370);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41d376:{NFSU2_TR(0x41d376);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41d378:{NFSU2_TR(0x41d378);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41d37b:{NFSU2_TR(0x41d37b);
if(r1(R+518)){{goto L41d382;}}
}
B41d37d:L41d37d:{c.instructions+=1;NFSU2_TR(0x41d37d);
u8 U[5];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B41d382:L41d382:{c.instructions+=6;NFSU2_TR(0x41d382);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41d384:{NFSU2_TR(0x41d384);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41d387:{NFSU2_TR(0x41d387);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41d38a:{NFSU2_TR(0x41d38a);
w4(R+4,u32(0x3ull));
}
B41d38f:{NFSU2_TR(0x41d38f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41d391:{NFSU2_TR(0x41d391);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41d3a8;}}
}
B41d393:L41d393:{c.instructions+=5;NFSU2_TR(0x41d393);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41d397:{NFSU2_TR(0x41d397);
{u32 ea_=u32(u32(7878644u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41d39d:{NFSU2_TR(0x41d39d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41d39f:{NFSU2_TR(0x41d39f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41d3a2:{NFSU2_TR(0x41d3a2);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L41d441;}}
}
B41d3a8:L41d3a8:{c.instructions+=6;NFSU2_TR(0x41d3a8);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41d3ac:{NFSU2_TR(0x41d3ac);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B41d3ae:{NFSU2_TR(0x41d3ae);
{u32 ea_=u32(u32(7878640u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41d3b4:{NFSU2_TR(0x41d3b4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41d3b6:{NFSU2_TR(0x41d3b6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41d3b9:{NFSU2_TR(0x41d3b9);
if(r1(R+514)){{goto L41d402;}}
}
B41d3bb:L41d3bb:{c.instructions+=6;NFSU2_TR(0x41d3bb);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41d3bf:{NFSU2_TR(0x41d3bf);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B41d3c1:{NFSU2_TR(0x41d3c1);
{u32 ea_=u32(u32(7878640u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41d3c7:{NFSU2_TR(0x41d3c7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41d3c9:{NFSU2_TR(0x41d3c9);
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
B41d3cc:{NFSU2_TR(0x41d3cc);
if(r1(R+514)){{goto L41d402;}}
}
B41d3ce:L41d3ce:{c.instructions+=3;NFSU2_TR(0x41d3ce);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d3cf:{NFSU2_TR(0x41d3cf);
__builtin_memmove((R+4),(R+12),4);
}
B41d3d1:{NFSU2_TR(0x41d3d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41d3d6ull));
TAIL_STATIC(0x60bff0u,60b);
}
B41d3d6:L41d3d6:{c.instructions+=4;NFSU2_TR(0x41d3d6);
{u32 ea_=u32(u32(7878652u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41d3dc:{NFSU2_TR(0x41d3dc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41d3de:{NFSU2_TR(0x41d3de);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41d3e1:{NFSU2_TR(0x41d3e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41d402;}}
}
B41d3e3:L41d3e3:{c.instructions+=6;NFSU2_TR(0x41d3e3);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41d3e7:{NFSU2_TR(0x41d3e7);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B41d3e9:{NFSU2_TR(0x41d3e9);
{u32 ea_=u32(u32(7885672u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41d3ef:{NFSU2_TR(0x41d3ef);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41d3f1:{NFSU2_TR(0x41d3f1);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41d3f4:{NFSU2_TR(0x41d3f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41d402;}}
}
B41d3f6:L41d3f6:{c.instructions+=3;NFSU2_TR(0x41d3f6);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41d3fa:{NFSU2_TR(0x41d3fa);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41d400:{NFSU2_TR(0x41d400);
{goto L41d430;}
}
B41d402:L41d402:{c.instructions+=7;NFSU2_TR(0x41d402);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41d406:{NFSU2_TR(0x41d406);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41d40a:{NFSU2_TR(0x41d40a);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B41d40c:{NFSU2_TR(0x41d40c);
{u32 ea_=u32(u32(7878648u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41d412:{NFSU2_TR(0x41d412);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41d414:{NFSU2_TR(0x41d414);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41d417:{NFSU2_TR(0x41d417);
if(r1(R+514)){{goto L41d428;}}
}
B41d419:L41d419:{c.instructions+=3;NFSU2_TR(0x41d419);
u8 U[5];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41d41d:{NFSU2_TR(0x41d41d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41d41f:{NFSU2_TR(0x41d41f);
if(r1(R+518)){{goto L41d428;}}
}
B41d421:L41d421:{c.instructions+=2;NFSU2_TR(0x41d421);
w4(R+4,u32(0x1ull));
}
B41d426:{NFSU2_TR(0x41d426);
{goto L41d441;}
}
B41d428:L41d428:{c.instructions+=2;NFSU2_TR(0x41d428);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41d42c:{NFSU2_TR(0x41d42c);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41d430:L41d430:{c.instructions+=4;NFSU2_TR(0x41d430);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41d432:{NFSU2_TR(0x41d432);
w4(R+4,u32(0x3ull));
}
B41d437:{NFSU2_TR(0x41d437);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41d43a:{NFSU2_TR(0x41d43a);
if(r1(R+518)){{goto L41d441;}}
}
B41d43c:L41d43c:{c.instructions+=1;NFSU2_TR(0x41d43c);
w4(R+4,u32(0x2ull));
}
B41d441:L41d441:{c.instructions+=7;NFSU2_TR(0x41d441);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B41d443:{NFSU2_TR(0x41d443);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41d446:{NFSU2_TR(0x41d446);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41d449:{NFSU2_TR(0x41d449);
w1(R+12,u8(0x1ull));
}
B41d44b:{NFSU2_TR(0x41d44b);
__builtin_memmove((R+8),(R+12),1);
}
B41d44d:{NFSU2_TR(0x41d44d);
{u32 ea_=u32(u32(7878660u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41d453:{NFSU2_TR(0x41d453);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41d463;}}
}
B41d455:L41d455:{c.instructions+=2;NFSU2_TR(0x41d455);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41d458:{NFSU2_TR(0x41d458);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L41d463;}}
}
B41d45a:L41d45a:{c.instructions+=3;NFSU2_TR(0x41d45a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41d45e:{NFSU2_TR(0x41d45e);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41d461:{NFSU2_TR(0x41d461);
{goto L41d47d;}
}
B41d463:L41d463:{c.instructions+=2;NFSU2_TR(0x41d463);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41d466:{NFSU2_TR(0x41d466);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41d477;}}
}
B41d468:L41d468:{c.instructions+=2;NFSU2_TR(0x41d468);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41d46b:{NFSU2_TR(0x41d46b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L41d477;}}
}
B41d46d:L41d46d:{c.instructions+=3;NFSU2_TR(0x41d46d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41d471:{NFSU2_TR(0x41d471);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41d475:{NFSU2_TR(0x41d475);
{goto L41d47d;}
}
B41d477:L41d477:{c.instructions+=1;NFSU2_TR(0x41d477);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41d47d:L41d47d:{c.instructions+=7;NFSU2_TR(0x41d47d);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41d481:{NFSU2_TR(0x41d481);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B41d483:{NFSU2_TR(0x41d483);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B41d485:{NFSU2_TR(0x41d485);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41d487:{NFSU2_TR(0x41d487);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41d489:{NFSU2_TR(0x41d489);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41d48c:{NFSU2_TR(0x41d48c);
if(r1(R+514)){{goto L41d490;}}
}
B41d48e:L41d48e:{c.instructions+=1;NFSU2_TR(0x41d48e);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B41d490:L41d490:{c.instructions+=2;NFSU2_TR(0x41d490);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B41d492:{NFSU2_TR(0x41d492);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41d4a2;}}
}
B41d494:L41d494:{c.instructions+=2;NFSU2_TR(0x41d494);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41d497:{NFSU2_TR(0x41d497);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L41d4a2;}}
}
B41d499:L41d499:{c.instructions+=3;NFSU2_TR(0x41d499);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41d49d:{NFSU2_TR(0x41d49d);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41d4a0:{NFSU2_TR(0x41d4a0);
{goto L41d4bc;}
}
B41d4a2:L41d4a2:{c.instructions+=2;NFSU2_TR(0x41d4a2);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41d4a5:{NFSU2_TR(0x41d4a5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41d4b6;}}
}
B41d4a7:L41d4a7:{c.instructions+=2;NFSU2_TR(0x41d4a7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41d4aa:{NFSU2_TR(0x41d4aa);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L41d4b6;}}
}
B41d4ac:L41d4ac:{c.instructions+=3;NFSU2_TR(0x41d4ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41d4b0:{NFSU2_TR(0x41d4b0);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41d4b4:{NFSU2_TR(0x41d4b4);
{goto L41d4bc;}
}
B41d4b6:L41d4b6:{c.instructions+=1;NFSU2_TR(0x41d4b6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41d4bc:L41d4bc:{c.instructions+=7;NFSU2_TR(0x41d4bc);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B41d4be:{NFSU2_TR(0x41d4be);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41d4c2:{NFSU2_TR(0x41d4c2);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B41d4c4:{NFSU2_TR(0x41d4c4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41d4c6:{NFSU2_TR(0x41d4c6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41d4c8:{NFSU2_TR(0x41d4c8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41d4cb:{NFSU2_TR(0x41d4cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41d4cf;}}
}
B41d4cd:L41d4cd:{c.instructions+=1;NFSU2_TR(0x41d4cd);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B41d4cf:L41d4cf:{c.instructions+=2;NFSU2_TR(0x41d4cf);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41d4d2:{NFSU2_TR(0x41d4d2);
if(r1(R+518)){{goto L41d4d9;}}
}
B41d4d4:L41d4d4:{c.instructions+=2;NFSU2_TR(0x41d4d4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41d4d7:{NFSU2_TR(0x41d4d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41d4f8;}}
}
B41d4d9:L41d4d9:{c.instructions+=2;NFSU2_TR(0x41d4d9);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41d4db:{NFSU2_TR(0x41d4db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41d4f8;}}
}
B41d4dd:L41d4dd:{c.instructions+=2;NFSU2_TR(0x41d4dd);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41d4df:{NFSU2_TR(0x41d4df);
if(r1(R+518)){{goto L41d517;}}
}
B41d4e1:L41d4e1:{c.instructions+=3;NFSU2_TR(0x41d4e1);
u8 U[5];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41d4e5:{NFSU2_TR(0x41d4e5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41d4e7:{NFSU2_TR(0x41d4e7);
if(r1(R+518)){{goto L41d517;}}
}
B41d4e9:L41d4e9:{c.instructions+=7;NFSU2_TR(0x41d4e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41d4ea:{NFSU2_TR(0x41d4ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41d4eb:{NFSU2_TR(0x41d4eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41d4ec:{NFSU2_TR(0x41d4ec);
w4(R+0,u32(0x3ull));
}
B41d4f1:{NFSU2_TR(0x41d4f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41d4f2:{NFSU2_TR(0x41d4f2);
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
B41d4f5:{NFSU2_TR(0x41d4f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41d4f8:L41d4f8:{c.instructions+=2;NFSU2_TR(0x41d4f8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41d4fb:{NFSU2_TR(0x41d4fb);
if(r1(R+518)){{goto L41d502;}}
}
B41d4fd:L41d4fd:{c.instructions+=2;NFSU2_TR(0x41d4fd);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41d500:{NFSU2_TR(0x41d500);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41d517;}}
}
B41d502:L41d502:{c.instructions+=2;NFSU2_TR(0x41d502);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41d504:{NFSU2_TR(0x41d504);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41d517;}}
}
B41d506:L41d506:{c.instructions+=2;NFSU2_TR(0x41d506);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41d508:{NFSU2_TR(0x41d508);
if(r1(R+518)){{goto L41d517;}}
}
B41d50a:L41d50a:{c.instructions+=4;NFSU2_TR(0x41d50a);
u8 U[5];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41d50e:{NFSU2_TR(0x41d50e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41d510:{NFSU2_TR(0x41d510);
w4(R+0,u32(0x2ull));
}
B41d515:{NFSU2_TR(0x41d515);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41d519;}}
}
B41d517:L41d517:{c.instructions+=1;NFSU2_TR(0x41d517);
__builtin_memmove((R+0),(R+4),4);
}
B41d519:L41d519:{c.instructions+=6;NFSU2_TR(0x41d519);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41d51a:{NFSU2_TR(0x41d51a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41d51b:{NFSU2_TR(0x41d51b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41d51c:{NFSU2_TR(0x41d51c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41d51d:{NFSU2_TR(0x41d51d);
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
B41d520:{NFSU2_TR(0x41d520);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41d530:L41d530:{c.instructions+=10;NFSU2_TR(0x41d530);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B41d533:{NFSU2_TR(0x41d533);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d534:{NFSU2_TR(0x41d534);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d535:{NFSU2_TR(0x41d535);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B41d539:{NFSU2_TR(0x41d539);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41d53b:{NFSU2_TR(0x41d53b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x31cull))));
__builtin_memmove((R+12),(U+0),4);
}
B41d541:{NFSU2_TR(0x41d541);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41d545:{NFSU2_TR(0x41d545);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41d548:{NFSU2_TR(0x41d548);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41d54a:{NFSU2_TR(0x41d54a);
if(r1(R+518)){{goto L41d71a;}}
}
B41d550:L41d550:{c.instructions+=4;NFSU2_TR(0x41d550);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41d554:{NFSU2_TR(0x41d554);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B41d556:{NFSU2_TR(0x41d556);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x14ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x14ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B41d558:{NFSU2_TR(0x41d558);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L41d71a;}}
}
B41d55e:L41d55e:{c.instructions+=5;NFSU2_TR(0x41d55e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41d560:{NFSU2_TR(0x41d560);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d561:{NFSU2_TR(0x41d561);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d562:{NFSU2_TR(0x41d562);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B41d566:{NFSU2_TR(0x41d566);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41d595;}}
}
B41d568:L41d568:{c.instructions+=7;NFSU2_TR(0x41d568);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B41d56f:{NFSU2_TR(0x41d56f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B41d572:{NFSU2_TR(0x41d572);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B41d575:{NFSU2_TR(0x41d575);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B41d579:{NFSU2_TR(0x41d579);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d57a:{NFSU2_TR(0x41d57a);
__builtin_memmove((R+4),(R+20),4);
}
B41d57c:{NFSU2_TR(0x41d57c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41d581ull));
TAIL_STATIC(0x60bfa0u,60b);
}
B41d581:L41d581:{c.instructions+=7;NFSU2_TR(0x41d581);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41d584:{NFSU2_TR(0x41d584);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B41d587:{NFSU2_TR(0x41d587);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41d58b:{NFSU2_TR(0x41d58b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B41d58c:{NFSU2_TR(0x41d58c);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B41d58d:{NFSU2_TR(0x41d58d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41d58f:{NFSU2_TR(0x41d58f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41d5eb;}}
}
B41d591:L41d591:{c.instructions+=2;NFSU2_TR(0x41d591);
__builtin_memmove((R+20),(R+0),4);
}
B41d593:{NFSU2_TR(0x41d593);
{goto L41d5eb;}
}
B41d595:L41d595:{c.instructions+=11;NFSU2_TR(0x41d595);
__builtin_memmove((R+8),gp(0x783808),4);
}
B41d59b:{NFSU2_TR(0x41d59b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d59c:{NFSU2_TR(0x41d59c);
w4(R+24,u32(s32(s8(r1(R+0)))));
}
B41d59f:{NFSU2_TR(0x41d59f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d5a1:{NFSU2_TR(0x41d5a1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d5a2:{NFSU2_TR(0x41d5a2);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B41d5a5:{NFSU2_TR(0x41d5a5);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B41d5a7:{NFSU2_TR(0x41d5a7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d5a9:{NFSU2_TR(0x41d5a9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d5aa:{NFSU2_TR(0x41d5aa);
__builtin_memmove((R+4),(R+12),4);
}
B41d5ac:{NFSU2_TR(0x41d5ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41d5b1ull));
TAIL_STATIC(0x4198c0u,419);
}
B41d5b1:L41d5b1:{c.instructions+=14;NFSU2_TR(0x41d5b1);
__builtin_memmove((R+20),(R+0),4);
}
B41d5b3:{NFSU2_TR(0x41d5b3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B41d5b5:{NFSU2_TR(0x41d5b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B41d5b8:{NFSU2_TR(0x41d5b8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41d5ba:{NFSU2_TR(0x41d5ba);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+4),(U+1),1);
}
B41d5bd:{NFSU2_TR(0x41d5bd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d5bf:{NFSU2_TR(0x41d5bf);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B41d5c0:{NFSU2_TR(0x41d5c0);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B41d5c2:{NFSU2_TR(0x41d5c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d5c3:{NFSU2_TR(0x41d5c3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d5c4:{NFSU2_TR(0x41d5c4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d5c6:{NFSU2_TR(0x41d5c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d5c7:{NFSU2_TR(0x41d5c7);
__builtin_memmove((R+4),(R+12),4);
}
B41d5c9:{NFSU2_TR(0x41d5c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41d5ceull));
TAIL_STATIC(0x4198c0u,419);
}
B41d5ce:L41d5ce:{c.instructions+=2;NFSU2_TR(0x41d5ce);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B41d5d0:{NFSU2_TR(0x41d5d0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41d718;}}
}
B41d5d6:L41d5d6:{c.instructions+=5;NFSU2_TR(0x41d5d6);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B41d5da:{NFSU2_TR(0x41d5da);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d5db:{NFSU2_TR(0x41d5db);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d5dc:{NFSU2_TR(0x41d5dc);
__builtin_memmove((R+4),(R+0),4);
}
B41d5de:{NFSU2_TR(0x41d5de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41d5e3ull));
TAIL_STATIC(0x4123c0u,412);
}
B41d5e3:L41d5e3:{c.instructions+=2;NFSU2_TR(0x41d5e3);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41d5e7:{NFSU2_TR(0x41d5e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B41d5eb:L41d5eb:{c.instructions+=11;NFSU2_TR(0x41d5eb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B41d5f2:{NFSU2_TR(0x41d5f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41d5f6:{NFSU2_TR(0x41d5f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B41d5f9:{NFSU2_TR(0x41d5f9);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B41d5fc:{NFSU2_TR(0x41d5fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41d600:{NFSU2_TR(0x41d600);
{u32 ea_=u32(r4(R+24)+r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41d604:{NFSU2_TR(0x41d604);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B41d609:{NFSU2_TR(0x41d609);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41d60b:{NFSU2_TR(0x41d60b);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41d60f:{NFSU2_TR(0x41d60f);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41d613:{NFSU2_TR(0x41d613);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41d61e;}}
}
B41d615:L41d615:{c.instructions+=3;NFSU2_TR(0x41d615);
__builtin_memmove((R+0),gp(0x890108),4);
}
B41d61a:{NFSU2_TR(0x41d61a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41d61c:{NFSU2_TR(0x41d61c);
if(r1(R+518)){{goto L41d62e;}}
}
B41d61e:L41d61e:{c.instructions+=5;NFSU2_TR(0x41d61e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41d622:{NFSU2_TR(0x41d622);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41d625:{NFSU2_TR(0x41d625);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41d627:{NFSU2_TR(0x41d627);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B41d62c:{NFSU2_TR(0x41d62c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41d633;}}
}
B41d62e:L41d62e:{c.instructions+=1;NFSU2_TR(0x41d62e);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B41d633:L41d633:{c.instructions+=2;NFSU2_TR(0x41d633);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+8)));
w4(U+12,u32(u32(r4(R+20))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B41d636:{NFSU2_TR(0x41d636);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L41d718;}}
}
B41d63c:L41d63c:{c.instructions+=2;NFSU2_TR(0x41d63c);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B41d640:{NFSU2_TR(0x41d640);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41d644:L41d644:{c.instructions+=5;NFSU2_TR(0x41d644);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41d648:{NFSU2_TR(0x41d648);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B41d64a:{NFSU2_TR(0x41d64a);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41d64e:{NFSU2_TR(0x41d64e);
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
B41d650:{NFSU2_TR(0x41d650);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41d66e;}}
}
B41d652:L41d652:{c.instructions+=8;NFSU2_TR(0x41d652);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41d656:{NFSU2_TR(0x41d656);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d657:{NFSU2_TR(0x41d657);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d658:{NFSU2_TR(0x41d658);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B41d65c:{NFSU2_TR(0x41d65c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d65d:{NFSU2_TR(0x41d65d);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41d661:{NFSU2_TR(0x41d661);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d662:{NFSU2_TR(0x41d662);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41d667ull));
TAIL_STATIC(0x415b70u,415);
}
B41d667:L41d667:{c.instructions+=2;NFSU2_TR(0x41d667);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B41d66b:{NFSU2_TR(0x41d66b);
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
B41d66e:L41d66e:{c.instructions+=13;NFSU2_TR(0x41d66e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41d672:{NFSU2_TR(0x41d672);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41d676:{NFSU2_TR(0x41d676);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41d67a:{NFSU2_TR(0x41d67a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d67b:{NFSU2_TR(0x41d67b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41d67f:{NFSU2_TR(0x41d67f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d680:{NFSU2_TR(0x41d680);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41d684:{NFSU2_TR(0x41d684);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d685:{NFSU2_TR(0x41d685);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d686:{NFSU2_TR(0x41d686);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d687:{NFSU2_TR(0x41d687);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d688:{NFSU2_TR(0x41d688);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d689:{NFSU2_TR(0x41d689);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41d68eull));
TAIL_STATIC(0x40fc80u,40f);
}
B41d68e:L41d68e:{c.instructions+=8;NFSU2_TR(0x41d68e);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B41d692:{NFSU2_TR(0x41d692);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41d696:{NFSU2_TR(0x41d696);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B41d699:{NFSU2_TR(0x41d699);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41d69d:{NFSU2_TR(0x41d69d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41d6a1:{NFSU2_TR(0x41d6a1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41d6a3:{NFSU2_TR(0x41d6a3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41d6a6:{NFSU2_TR(0x41d6a6);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L41d6aa;}}
}
B41d6a8:L41d6a8:{c.instructions+=1;NFSU2_TR(0x41d6a8);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B41d6aa:L41d6aa:{c.instructions+=7;NFSU2_TR(0x41d6aa);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B41d6ac:{NFSU2_TR(0x41d6ac);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41d6b0:{NFSU2_TR(0x41d6b0);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B41d6b2:{NFSU2_TR(0x41d6b2);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41d6b8:{NFSU2_TR(0x41d6b8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41d6ba:{NFSU2_TR(0x41d6ba);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41d6bd:{NFSU2_TR(0x41d6bd);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L41d6e0;}}
}
B41d6bf:L41d6bf:{c.instructions+=8;NFSU2_TR(0x41d6bf);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B41d6c1:{NFSU2_TR(0x41d6c1);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41d6c5:{NFSU2_TR(0x41d6c5);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B41d6c7:{NFSU2_TR(0x41d6c7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41d6cd:{NFSU2_TR(0x41d6cd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41d6cf:{NFSU2_TR(0x41d6cf);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41d6d1:{NFSU2_TR(0x41d6d1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41d6d4:{NFSU2_TR(0x41d6d4);
if(r1(R+514)){{goto L41d6e2;}}
}
B41d6d6:L41d6d6:{c.instructions+=2;NFSU2_TR(0x41d6d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41d6de:{NFSU2_TR(0x41d6de);
{goto L41d6e2;}
}
B41d6e0:L41d6e0:{c.instructions+=1;NFSU2_TR(0x41d6e0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41d6e2:L41d6e2:{c.instructions+=11;NFSU2_TR(0x41d6e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41d6e6:{NFSU2_TR(0x41d6e6);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41d6ea:{NFSU2_TR(0x41d6ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B41d6ec:{NFSU2_TR(0x41d6ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41d6f0:{NFSU2_TR(0x41d6f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41d6f4:{NFSU2_TR(0x41d6f4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d6f5:{NFSU2_TR(0x41d6f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d6f6:{NFSU2_TR(0x41d6f6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d6f7:{NFSU2_TR(0x41d6f7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d6f8:{NFSU2_TR(0x41d6f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d6f9:{NFSU2_TR(0x41d6f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41d6feull));
TAIL_STATIC(0x415d50u,415);
}
B41d6fe:L41d6fe:{c.instructions+=8;NFSU2_TR(0x41d6fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41d702:{NFSU2_TR(0x41d702);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41d705:{NFSU2_TR(0x41d705);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B41d708:{NFSU2_TR(0x41d708);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B41d709:{NFSU2_TR(0x41d709);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B41d70c:{NFSU2_TR(0x41d70c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41d70e:{NFSU2_TR(0x41d70e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41d712:{NFSU2_TR(0x41d712);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41d644u);}goto L41d644;}}
}
B41d718:L41d718:{c.instructions+=2;NFSU2_TR(0x41d718);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41d719:{NFSU2_TR(0x41d719);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41d71a:L41d71a:{c.instructions+=4;NFSU2_TR(0x41d71a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41d71b:{NFSU2_TR(0x41d71b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41d71c:{NFSU2_TR(0x41d71c);
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
B41d71f:{NFSU2_TR(0x41d71f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41d720:L41d720:{c.instructions+=7;NFSU2_TR(0x41d720);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B41d723:{NFSU2_TR(0x41d723);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d724:{NFSU2_TR(0x41d724);
__builtin_memmove((R+24),(R+4),4);
}
B41d726:{NFSU2_TR(0x41d726);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41d729:{NFSU2_TR(0x41d729);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B41d72b:{NFSU2_TR(0x41d72b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41d72d:{NFSU2_TR(0x41d72d);
if(r1(R+518)){{goto L41d8c2;}}
}
B41d733:L41d733:{c.instructions+=6;NFSU2_TR(0x41d733);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41d739:{NFSU2_TR(0x41d739);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d73a:{NFSU2_TR(0x41d73a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d73b:{NFSU2_TR(0x41d73b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B41d73e:{NFSU2_TR(0x41d73e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41d740:{NFSU2_TR(0x41d740);
if(r1(R+518)){{goto L41d8c0;}}
}
B41d746:L41d746:{c.instructions+=13;NFSU2_TR(0x41d746);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B41d749:{NFSU2_TR(0x41d749);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41d74c:{NFSU2_TR(0x41d74c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B41d74e:{NFSU2_TR(0x41d74e);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41d750:{NFSU2_TR(0x41d750);
__builtin_memmove((R+8),(R+518),1);
}
B41d753:{NFSU2_TR(0x41d753);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d758:{NFSU2_TR(0x41d758);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d75d:{NFSU2_TR(0x41d75d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d75e:{NFSU2_TR(0x41d75e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d75f:{NFSU2_TR(0x41d75f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B41d762:{NFSU2_TR(0x41d762);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d763:{NFSU2_TR(0x41d763);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d764:{NFSU2_TR(0x41d764);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41d769ull));
TAIL_STATIC(0x40f4a0u,40f);
}
B41d769:L41d769:{c.instructions+=6;NFSU2_TR(0x41d769);
__builtin_memmove((R+12),(R+0),4);
}
B41d76b:{NFSU2_TR(0x41d76b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B41d76e:{NFSU2_TR(0x41d76e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41d771:{NFSU2_TR(0x41d771);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41d775:{NFSU2_TR(0x41d775);
__builtin_memmove((R+28),(R+12),4);
}
B41d777:{NFSU2_TR(0x41d777);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L41d77e;}}
}
B41d779:L41d779:{c.instructions+=1;NFSU2_TR(0x41d779);
w4(R+28,u32(0x2ull));
}
B41d77e:L41d77e:{c.instructions+=8;NFSU2_TR(0x41d77e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41d781:{NFSU2_TR(0x41d781);
{u32 ea_=u32(r4(R+8)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41d787:{NFSU2_TR(0x41d787);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d788:{NFSU2_TR(0x41d788);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41d78e:{NFSU2_TR(0x41d78e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d78f:{NFSU2_TR(0x41d78f);
w4(R+4,u32(0x81e370ull));
}
B41d794:{NFSU2_TR(0x41d794);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41d797:{NFSU2_TR(0x41d797);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41d79cull));
TAIL_STATIC(0x576790u,576);
}
B41d79c:L41d79c:{c.instructions+=6;NFSU2_TR(0x41d79c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d79d:{NFSU2_TR(0x41d79d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41d7a3:{NFSU2_TR(0x41d7a3);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41d7a6:{NFSU2_TR(0x41d7a6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d7a8:{NFSU2_TR(0x41d7a8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d7a9:{NFSU2_TR(0x41d7a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41d7aeull));
TAIL_STATIC(0x4053b0u,405);
}
B41d7ae:L41d7ae:{c.instructions+=11;NFSU2_TR(0x41d7ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41d7b4:{NFSU2_TR(0x41d7b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B41d7b6:{NFSU2_TR(0x41d7b6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d7b7:{NFSU2_TR(0x41d7b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41d7ba:{NFSU2_TR(0x41d7ba);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B41d7be:{NFSU2_TR(0x41d7be);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d7bf:{NFSU2_TR(0x41d7bf);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41d7c3:{NFSU2_TR(0x41d7c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d7c4:{NFSU2_TR(0x41d7c4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d7c5:{NFSU2_TR(0x41d7c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41d7cb:{NFSU2_TR(0x41d7cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41d7d0ull));
TAIL_STATIC(0x419bc0u,419);
}
B41d7d0:L41d7d0:{c.instructions+=9;NFSU2_TR(0x41d7d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41d7d3:{NFSU2_TR(0x41d7d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41d7d9:{NFSU2_TR(0x41d7d9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d7db:{NFSU2_TR(0x41d7db);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d7dd:{NFSU2_TR(0x41d7dd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d7de:{NFSU2_TR(0x41d7de);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d7e0:{NFSU2_TR(0x41d7e0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x60ull))));
}
B41d7e3:{NFSU2_TR(0x41d7e3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d7e4:{NFSU2_TR(0x41d7e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41d7e9ull));
TAIL_STATIC(0x4198c0u,419);
}
B41d7e9:L41d7e9:{c.instructions+=7;NFSU2_TR(0x41d7e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41d7ef:{NFSU2_TR(0x41d7ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B41d7f3:{NFSU2_TR(0x41d7f3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41d7f5:{NFSU2_TR(0x41d7f5);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B41d7f9:{NFSU2_TR(0x41d7f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41d7fd:{NFSU2_TR(0x41d7fd);
__builtin_memmove((R+28),(R+12),4);
}
B41d7ff:{NFSU2_TR(0x41d7ff);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L41d88f;}}
}
B41d805:L41d805:{c.instructions+=7;NFSU2_TR(0x41d805);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41d808:{NFSU2_TR(0x41d808);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41d80c:{NFSU2_TR(0x41d80c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d80d:{NFSU2_TR(0x41d80d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41d810:{NFSU2_TR(0x41d810);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d811:{NFSU2_TR(0x41d811);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d812:{NFSU2_TR(0x41d812);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41d817ull));
TAIL_STATIC(0x412500u,412);
}
B41d817:L41d817:{c.instructions+=2;NFSU2_TR(0x41d817);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41d819:{NFSU2_TR(0x41d819);
if(r1(R+518)){{goto L41d822;}}
}
B41d81b:L41d81b:{c.instructions+=4;NFSU2_TR(0x41d81b);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
}
B41d81c:{NFSU2_TR(0x41d81c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41d81e:{NFSU2_TR(0x41d81e);
__builtin_memmove((R+28),(R+12),4);
}
B41d820:{NFSU2_TR(0x41d820);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41d805u);}goto L41d805;}}
}
B41d822:L41d822:{c.instructions+=1;NFSU2_TR(0x41d822);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B41d826:L41d826:{c.instructions+=9;NFSU2_TR(0x41d826);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41d829:{NFSU2_TR(0x41d829);
{u32 ea_=u32(r4(R+8)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41d82f:{NFSU2_TR(0x41d82f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d830:{NFSU2_TR(0x41d830);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41d836:{NFSU2_TR(0x41d836);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41d838:{NFSU2_TR(0x41d838);
w4(R+4,u32(0x81e370ull));
}
B41d83d:{NFSU2_TR(0x41d83d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41d840:{NFSU2_TR(0x41d840);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+12),(U+0),1);
}
B41d843:{NFSU2_TR(0x41d843);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41d848ull));
TAIL_STATIC(0x576790u,576);
}
B41d848:L41d848:{c.instructions+=12;NFSU2_TR(0x41d848);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B41d84e:{NFSU2_TR(0x41d84e);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B41d851:{NFSU2_TR(0x41d851);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B41d853:{NFSU2_TR(0x41d853);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B41d855:{NFSU2_TR(0x41d855);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41d858:{NFSU2_TR(0x41d858);
{u32 ea_=u32(u32(8293992u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41d85e:{NFSU2_TR(0x41d85e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41d85f:{NFSU2_TR(0x41d85f);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B41d861:{NFSU2_TR(0x41d861);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41d867:{NFSU2_TR(0x41d867);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41d869:{NFSU2_TR(0x41d869);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41d86c:{NFSU2_TR(0x41d86c);
if(r1(R+514)){{goto L41d8bb;}}
}
B41d86e:L41d86e:{c.instructions+=3;NFSU2_TR(0x41d86e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41d871:{NFSU2_TR(0x41d871);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41d873:{NFSU2_TR(0x41d873);
if(r1(R+518)){{goto L41d87c;}}
}
B41d875:L41d875:{c.instructions+=2;NFSU2_TR(0x41d875);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41d87a:{NFSU2_TR(0x41d87a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41d8be;}}
}
B41d87c:L41d87c:{c.instructions+=8;NFSU2_TR(0x41d87c);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B41d881:{NFSU2_TR(0x41d881);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41d884:{NFSU2_TR(0x41d884);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41d885:{NFSU2_TR(0x41d885);
__builtin_memmove((R+0),(R+12),1);
}
B41d887:{NFSU2_TR(0x41d887);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41d888:{NFSU2_TR(0x41d888);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41d889:{NFSU2_TR(0x41d889);
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
B41d88c:{NFSU2_TR(0x41d88c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41d88f:L41d88f:{c.instructions+=1;NFSU2_TR(0x41d88f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41d826u);}goto L41d826;}}
}
B41d891:L41d891:{c.instructions+=8;NFSU2_TR(0x41d891);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41d894:{NFSU2_TR(0x41d894);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d895:{NFSU2_TR(0x41d895);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41d899:{NFSU2_TR(0x41d899);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B41d89c:{NFSU2_TR(0x41d89c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d89d:{NFSU2_TR(0x41d89d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d89e:{NFSU2_TR(0x41d89e);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41d8a2:{NFSU2_TR(0x41d8a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41d8a7ull));
TAIL_STATIC(0x412500u,412);
}
B41d8a7:L41d8a7:{c.instructions+=2;NFSU2_TR(0x41d8a7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41d8a9:{NFSU2_TR(0x41d8a9);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41d826u);}goto L41d826;}}
}
B41d8af:L41d8af:{c.instructions+=3;NFSU2_TR(0x41d8af);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
}
B41d8b0:{NFSU2_TR(0x41d8b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B41d8b4:{NFSU2_TR(0x41d8b4);
if(r1(R+519)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41d891u);}goto L41d891;}}
}
B41d8b6:L41d8b6:{c.instructions+=1;NFSU2_TR(0x41d8b6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41d826u);}goto L41d826;}
}
B41d8bb:L41d8bb:{c.instructions+=1;NFSU2_TR(0x41d8bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41d8be:L41d8be:{c.instructions+=1;NFSU2_TR(0x41d8be);
__builtin_memmove((R+0),(R+12),1);
}
B41d8c0:L41d8c0:{c.instructions+=2;NFSU2_TR(0x41d8c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41d8c1:{NFSU2_TR(0x41d8c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41d8c2:L41d8c2:{c.instructions+=3;NFSU2_TR(0x41d8c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41d8c3:{NFSU2_TR(0x41d8c3);
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
B41d8c6:{NFSU2_TR(0x41d8c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41d8d0:L41d8d0:{c.instructions+=6;NFSU2_TR(0x41d8d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B41d8d3:{NFSU2_TR(0x41d8d3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41d8d4:{NFSU2_TR(0x41d8d4);
__builtin_memmove((R+24),(R+4),4);
}
B41d8d6:{NFSU2_TR(0x41d8d6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41d8dc:{NFSU2_TR(0x41d8dc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41d8de:{NFSU2_TR(0x41d8de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41d952;}}
}
B41d8e0:L41d8e0:{c.instructions+=6;NFSU2_TR(0x41d8e0);
{u32 ea_=u32(r4(R+24)+u32(560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41d8e6:{NFSU2_TR(0x41d8e6);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B41d8e8:{NFSU2_TR(0x41d8e8);
{u32 ea_=u32(u32(7879240u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B41d8ee:{NFSU2_TR(0x41d8ee);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41d8f0:{NFSU2_TR(0x41d8f0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41d8f3:{NFSU2_TR(0x41d8f3);
if(r1(R+514)){{goto L41d950;}}
}
B41d8f5:L41d8f5:{c.instructions+=9;NFSU2_TR(0x41d8f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41d8fb:{NFSU2_TR(0x41d8fb);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B41d8fd:{NFSU2_TR(0x41d8fd);
{u32 ea_=u32(r4(R+4)+u32(1072u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41d903:{NFSU2_TR(0x41d903);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41d907:{NFSU2_TR(0x41d907);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B41d909:{NFSU2_TR(0x41d909);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41d90f:{NFSU2_TR(0x41d90f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41d911:{NFSU2_TR(0x41d911);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41d914:{NFSU2_TR(0x41d914);
if(r1(R+514)){{goto L41d923;}}
}
B41d916:L41d916:{c.instructions+=3;NFSU2_TR(0x41d916);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41d918:{NFSU2_TR(0x41d918);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+8)),r4(U+0));
}
B41d91e:{NFSU2_TR(0x41d91e);
{goto L41df0d;}
}
B41d923:L41d923:{c.instructions+=5;NFSU2_TR(0x41d923);
{u32 ea_=u32(r4(R+4)+u32(1072u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41d929:{NFSU2_TR(0x41d929);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41d92d:{NFSU2_TR(0x41d92d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41d92f:{NFSU2_TR(0x41d92f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41d932:{NFSU2_TR(0x41d932);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41d93f;}}
}
B41d934:L41d934:{c.instructions+=2;NFSU2_TR(0x41d934);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
s4(u32(r4(R+8)),r4(U+0));
}
B41d93a:{NFSU2_TR(0x41d93a);
{goto L41df11;}
}
B41d93f:L41d93f:{c.instructions+=3;NFSU2_TR(0x41d93f);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+8)),r4(U+0));
}
B41d945:{NFSU2_TR(0x41d945);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
s4(u32(r4(R+4)),r4(U+0));
}
B41d94b:{NFSU2_TR(0x41d94b);
{goto L41df17;}
}
B41d950:L41d950:{c.instructions+=1;NFSU2_TR(0x41d950);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41d952:L41d952:{c.instructions+=10;NFSU2_TR(0x41d952);
{u32 ea_=u32(r4(R+24)+u32(560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41d958:{NFSU2_TR(0x41d958);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41d95e:{NFSU2_TR(0x41d95e);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B41d963:{NFSU2_TR(0x41d963);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B41d965:{NFSU2_TR(0x41d965);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41d967:{NFSU2_TR(0x41d967);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41d96b:{NFSU2_TR(0x41d96b);
{u32 ea_=u32(r4(R+8)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41d971:{NFSU2_TR(0x41d971);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41d975:{NFSU2_TR(0x41d975);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41d979:{NFSU2_TR(0x41d979);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41d9aa;}}
}
B41d97b:L41d97b:{c.instructions+=3;NFSU2_TR(0x41d97b);
__builtin_memmove((R+0),gp(0x890108),4);
}
B41d980:{NFSU2_TR(0x41d980);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41d982:{NFSU2_TR(0x41d982);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41d9aa;}}
}
B41d984:L41d984:{c.instructions+=3;NFSU2_TR(0x41d984);
__builtin_memmove((R+0),gp(0x890114),4);
}
B41d989:{NFSU2_TR(0x41d989);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41d98b:{NFSU2_TR(0x41d98b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41d99f;}}
}
B41d98d:L41d98d:{c.instructions+=3;NFSU2_TR(0x41d98d);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B41d992:{NFSU2_TR(0x41d992);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41d994:{NFSU2_TR(0x41d994);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41d99f;}}
}
B41d996:L41d996:{c.instructions+=3;NFSU2_TR(0x41d996);
__builtin_memmove((R+0),gp(0x890104),4);
}
B41d99b:{NFSU2_TR(0x41d99b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41d99d:{NFSU2_TR(0x41d99d);
if(r1(R+518)){{goto L41d9aa;}}
}
B41d99f:L41d99f:{c.instructions+=3;NFSU2_TR(0x41d99f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41d9a2:{NFSU2_TR(0x41d9a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41d9a4:{NFSU2_TR(0x41d9a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41db5e;}}
}
B41d9aa:L41d9aa:{c.instructions+=5;NFSU2_TR(0x41d9aa);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41d9ae:{NFSU2_TR(0x41d9ae);
{u32 ea_=u32(u32(7881848u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41d9b4:{NFSU2_TR(0x41d9b4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41d9b6:{NFSU2_TR(0x41d9b6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41d9b9:{NFSU2_TR(0x41d9b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41db5e;}}
}
B41d9bf:L41d9bf:{c.instructions+=3;NFSU2_TR(0x41d9bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41d9c2:{NFSU2_TR(0x41d9c2);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B41d9c6:{NFSU2_TR(0x41d9c6);
if(r1(R+518)){{goto L41db5e;}}
}
B41d9cc:L41d9cc:{c.instructions+=41;NFSU2_TR(0x41d9cc);
__builtin_memmove((R+4),gp(0x783828),4);
}
B41d9d2:{NFSU2_TR(0x41d9d2);
__builtin_memmove((R+8),gp(0x783908),4);
}
B41d9d8:{NFSU2_TR(0x41d9d8);
__builtin_memmove((R+0),gp(0x783904),4);
}
B41d9dd:{NFSU2_TR(0x41d9dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x354ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41d9e3:{NFSU2_TR(0x41d9e3);
__builtin_memmove((R+4),gp(0x783910),4);
}
B41d9e9:{NFSU2_TR(0x41d9e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x35cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41d9ef:{NFSU2_TR(0x41d9ef);
__builtin_memmove((R+0),gp(0x783918),4);
}
B41d9f4:{NFSU2_TR(0x41d9f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x358ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41d9fa:{NFSU2_TR(0x41d9fa);
__builtin_memmove((R+8),gp(0x78390c),4);
}
B41da00:{NFSU2_TR(0x41da00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x360ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41da06:{NFSU2_TR(0x41da06);
__builtin_memmove((R+4),gp(0x783914),4);
}
B41da0c:{NFSU2_TR(0x41da0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x364ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41da12:{NFSU2_TR(0x41da12);
__builtin_memmove((R+8),gp(0x78391c),4);
}
B41da18:{NFSU2_TR(0x41da18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x368ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41da1e:{NFSU2_TR(0x41da1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x36cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41da24:{NFSU2_TR(0x41da24);
{u32 ea_=u32(u32(8294056u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41da2a:{NFSU2_TR(0x41da2a);
{u32 ea_=u32(u32(8294056u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41da30:{NFSU2_TR(0x41da30);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41da31:{NFSU2_TR(0x41da31);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x334ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41da37:{NFSU2_TR(0x41da37);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B41da39:{NFSU2_TR(0x41da39);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41da3c:{NFSU2_TR(0x41da3c);
__builtin_memmove((R+0),(R+8),4);
}
B41da3e:{NFSU2_TR(0x41da3e);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41da41:{NFSU2_TR(0x41da41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x370ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41da47:{NFSU2_TR(0x41da47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x374ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41da4d:{NFSU2_TR(0x41da4d);
__builtin_memmove((R+0),gp(0x7838fc),4);
}
B41da52:{NFSU2_TR(0x41da52);
__builtin_memmove((R+4),(R+8),4);
}
B41da54:{NFSU2_TR(0x41da54);
__builtin_memmove((R+8),gp(0x7838f8),4);
}
B41da5a:{NFSU2_TR(0x41da5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x378ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41da60:{NFSU2_TR(0x41da60);
__builtin_memmove((R+4),gp(0x783900),4);
}
B41da66:{NFSU2_TR(0x41da66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x37cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41da6c:{NFSU2_TR(0x41da6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x380ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41da72:{NFSU2_TR(0x41da72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x384ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41da78:{NFSU2_TR(0x41da78);
{u32 ea_=u32(r4(R+24)+u32(608u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41da7e:{NFSU2_TR(0x41da7e);
{u32 ea_=u32(r4(R+24)+u32(560u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B41da84:{NFSU2_TR(0x41da84);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B41da86:{NFSU2_TR(0x41da86);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B41da88:{NFSU2_TR(0x41da88);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41da8e:{NFSU2_TR(0x41da8e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41da90:{NFSU2_TR(0x41da90);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41da93:{NFSU2_TR(0x41da93);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L41da9a;}}
}
B41da95:L41da95:{c.instructions+=1;NFSU2_TR(0x41da95);
w4(R+4,u32(0x1ull));
}
B41da9a:L41da9a:{c.instructions+=13;NFSU2_TR(0x41da9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41daa0:{NFSU2_TR(0x41daa0);
{u32 ea_=u32(r4(R+24)+u32(560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41daa6:{NFSU2_TR(0x41daa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41daac:{NFSU2_TR(0x41daac);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B41daae:{NFSU2_TR(0x41daae);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41dab2:{NFSU2_TR(0x41dab2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41dab3:{NFSU2_TR(0x41dab3);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41dab7:{NFSU2_TR(0x41dab7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41dab8:{NFSU2_TR(0x41dab8);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41dabc:{NFSU2_TR(0x41dabc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41dabd:{NFSU2_TR(0x41dabd);
w4(R+4,u32(0x81e7f4ull));
}
B41dac2:{NFSU2_TR(0x41dac2);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41dac6:{NFSU2_TR(0x41dac6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41dacbull));
TAIL_STATIC(0x576790u,576);
}
B41dacb:L41dacb:{c.instructions+=8;NFSU2_TR(0x41dacb);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41dacf:{NFSU2_TR(0x41dacf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41dad0:{NFSU2_TR(0x41dad0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41dad4:{NFSU2_TR(0x41dad4);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41dad7:{NFSU2_TR(0x41dad7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41dad8:{NFSU2_TR(0x41dad8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41dad9:{NFSU2_TR(0x41dad9);
__builtin_memmove((R+4),(R+28),4);
}
B41dadb:{NFSU2_TR(0x41dadb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41dae0ull));
TAIL_STATIC(0x4183f0u,418);
}
B41dae0:L41dae0:{c.instructions+=6;NFSU2_TR(0x41dae0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41dae6:{NFSU2_TR(0x41dae6);
{u32 ea_=u32(r4(R+8)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41daec:{NFSU2_TR(0x41daec);
{u32 ea_=u32(u32(7878944u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41daf2:{NFSU2_TR(0x41daf2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41daf4:{NFSU2_TR(0x41daf4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41daf7:{NFSU2_TR(0x41daf7);
if(r1(R+514)){{goto L41db1c;}}
}
B41daf9:L41daf9:{c.instructions+=6;NFSU2_TR(0x41daf9);
__builtin_memmove((R+0),gp(0x783924),4);
}
B41dafe:{NFSU2_TR(0x41dafe);
__builtin_memmove((R+4),gp(0x783928),4);
}
B41db04:{NFSU2_TR(0x41db04);
__builtin_memmove((R+8),gp(0x78392c),4);
}
B41db0a:{NFSU2_TR(0x41db0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41db10:{NFSU2_TR(0x41db10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x390ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41db16:{NFSU2_TR(0x41db16);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x394ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41db1c:L41db1c:{c.instructions+=2;NFSU2_TR(0x41db1c);
__builtin_memmove((R+4),(R+28),4);
}
B41db1e:{NFSU2_TR(0x41db1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41db23ull));
TAIL_STATIC(0x409da0u,409);
}
B41db23:L41db23:{c.instructions+=7;NFSU2_TR(0x41db23);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41db27:{NFSU2_TR(0x41db27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41db29:{NFSU2_TR(0x41db29);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41db2b:{NFSU2_TR(0x41db2b);
__builtin_memmove((R+4),(R+28),4);
}
B41db2d:{NFSU2_TR(0x41db2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41db35:{NFSU2_TR(0x41db35);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41db3d:{NFSU2_TR(0x41db3d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41db40ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41db40:L41db40:{c.instructions+=5;NFSU2_TR(0x41db40);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41db42:{NFSU2_TR(0x41db42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41db44:{NFSU2_TR(0x41db44);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41db46:{NFSU2_TR(0x41db46);
__builtin_memmove((R+4),(R+28),4);
}
B41db48:{NFSU2_TR(0x41db48);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41db4bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41db4b:L41db4b:{c.instructions+=5;NFSU2_TR(0x41db4b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41db4d:{NFSU2_TR(0x41db4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41db4f:{NFSU2_TR(0x41db4f);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41db51:{NFSU2_TR(0x41db51);
__builtin_memmove((R+4),(R+28),4);
}
B41db53:{NFSU2_TR(0x41db53);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41db56ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41db56:L41db56:{c.instructions+=3;NFSU2_TR(0x41db56);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41db58:{NFSU2_TR(0x41db58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41db59:{NFSU2_TR(0x41db59);
{goto L41dc48;}
}
B41db5e:L41db5e:{c.instructions+=5;NFSU2_TR(0x41db5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x270ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41db64:{NFSU2_TR(0x41db64);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B41db67:{NFSU2_TR(0x41db67);
{u32 ea_=u32(r4(R+0)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41db6a:{NFSU2_TR(0x41db6a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41db6c:{NFSU2_TR(0x41db6c);
if(r1(R+518)){{goto L41db86;}}
}
B41db6e:L41db6e:{c.instructions+=8;NFSU2_TR(0x41db6e);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41db71:{NFSU2_TR(0x41db71);
w4(R+4,u32(r1(R+4)));
}
B41db74:{NFSU2_TR(0x41db74);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41db78:{NFSU2_TR(0x41db78);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xda,0x08"::"a"(ea_):"memory");}
}
B41db7c:{NFSU2_TR(0x41db7c);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41db7f:{NFSU2_TR(0x41db7f);
{u32 ea_=u32(r4(R+0)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41db82:{NFSU2_TR(0x41db82);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B41db84:{NFSU2_TR(0x41db84);
{goto L41db8c;}
}
B41db86:L41db86:{c.instructions+=1;NFSU2_TR(0x41db86);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41db8c:L41db8c:{c.instructions+=8;NFSU2_TR(0x41db8c);
{u32 ea_=u32(u32(8294056u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41db92:{NFSU2_TR(0x41db92);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B41db94:{NFSU2_TR(0x41db94);
{u32 ea_=u32(r4(R+0)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41db97:{NFSU2_TR(0x41db97);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B41db9b:{NFSU2_TR(0x41db9b);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B41db9d:{NFSU2_TR(0x41db9d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41db9f:{NFSU2_TR(0x41db9f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41dba2:{NFSU2_TR(0x41dba2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41dbaa;}}
}
B41dba4:L41dba4:{c.instructions+=2;NFSU2_TR(0x41dba4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41dba6:{NFSU2_TR(0x41dba6);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41dbaa:L41dbaa:{c.instructions+=5;NFSU2_TR(0x41dbaa);
{u32 ea_=u32(u32(8294056u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41dbb0:{NFSU2_TR(0x41dbb0);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B41dbb2:{NFSU2_TR(0x41dbb2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41dbb4:{NFSU2_TR(0x41dbb4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41dbb7:{NFSU2_TR(0x41dbb7);
if(r1(R+514)){{goto L41dbc1;}}
}
B41dbb9:L41dbb9:{c.instructions+=2;NFSU2_TR(0x41dbb9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41dbbb:{NFSU2_TR(0x41dbbb);
{u32 ea_=u32(u32(8294056u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41dbc1:L41dbc1:{c.instructions+=7;NFSU2_TR(0x41dbc1);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41dbc5:{NFSU2_TR(0x41dbc5);
{u32 ea_=u32(u32(7879244u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41dbcb:{NFSU2_TR(0x41dbcb);
{u32 ea_=u32(r4(R+8)+u32(1072u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41dbd1:{NFSU2_TR(0x41dbd1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41dbd3:{NFSU2_TR(0x41dbd3);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41dbd6:{NFSU2_TR(0x41dbd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41dbda:{NFSU2_TR(0x41dbda);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41dc05;}}
}
B41dbdc:L41dbdc:{c.instructions+=7;NFSU2_TR(0x41dbdc);
{u32 ea_=u32((r4(R+0)*4u)+u32(8294348u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41dbe3:{NFSU2_TR(0x41dbe3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41dbe9:{NFSU2_TR(0x41dbe9);
{u32 ea_=u32((r4(R+0)*4u)+u32(8294376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41dbf0:{NFSU2_TR(0x41dbf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41dbf8:{NFSU2_TR(0x41dbf8);
{u32 ea_=u32((r4(R+0)*4u)+u32(8294404u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41dbff:{NFSU2_TR(0x41dbff);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41dc03:{NFSU2_TR(0x41dc03);
{goto L41dc2e;}
}
B41dc05:L41dc05:{c.instructions+=7;NFSU2_TR(0x41dc05);
{u32 ea_=u32((r4(R+0)*4u)+u32(8294432u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41dc0c:{NFSU2_TR(0x41dc0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41dc14:{NFSU2_TR(0x41dc14);
{u32 ea_=u32((r4(R+0)*4u)+u32(8294460u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41dc1b:{NFSU2_TR(0x41dc1b);
{u32 ea_=u32((r4(R+0)*4u)+u32(8294488u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41dc22:{NFSU2_TR(0x41dc22);
{u32 ea_=u32(u32(8294088u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41dc28:{NFSU2_TR(0x41dc28);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B41dc2a:{NFSU2_TR(0x41dc2a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41dc2e:L41dc2e:{c.instructions+=12;NFSU2_TR(0x41dc2e);
__asm__ volatile(".byte 0xd9,0xcb":::"memory");
}
B41dc30:{NFSU2_TR(0x41dc30);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B41dc32:{NFSU2_TR(0x41dc32);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B41dc34:{NFSU2_TR(0x41dc34);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B41dc36:{NFSU2_TR(0x41dc36);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B41dc38:{NFSU2_TR(0x41dc38);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B41dc3a:{NFSU2_TR(0x41dc3a);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B41dc3c:{NFSU2_TR(0x41dc3c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B41dc3e:{NFSU2_TR(0x41dc3e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41dc42:{NFSU2_TR(0x41dc42);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41dc44:{NFSU2_TR(0x41dc44);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41dc46:{NFSU2_TR(0x41dc46);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41dc48:L41dc48:{c.instructions+=7;NFSU2_TR(0x41dc48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41dc4e:{NFSU2_TR(0x41dc4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41dc54:{NFSU2_TR(0x41dc54);
__builtin_memmove((R+8),(R+4),4);
}
B41dc56:{NFSU2_TR(0x41dc56);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41dc5a:{NFSU2_TR(0x41dc5a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41dc5b:{NFSU2_TR(0x41dc5b);
w4(R+4,u32(0x7e9d10ull));
}
B41dc60:{NFSU2_TR(0x41dc60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41dc65ull));
TAIL_STATIC(0x5764d0u,576);
}
B41dc65:L41dc65:{c.instructions+=8;NFSU2_TR(0x41dc65);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41dc69:{NFSU2_TR(0x41dc69);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B41dc6d:{NFSU2_TR(0x41dc6d);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B41dc6f:{NFSU2_TR(0x41dc6f);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41dc73:{NFSU2_TR(0x41dc73);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B41dc75:{NFSU2_TR(0x41dc75);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41dc77:{NFSU2_TR(0x41dc77);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41dc7a:{NFSU2_TR(0x41dc7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41dc82;}}
}
B41dc7c:L41dc7c:{c.instructions+=2;NFSU2_TR(0x41dc7c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41dc7e:{NFSU2_TR(0x41dc7e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41dc82:L41dc82:{c.instructions+=5;NFSU2_TR(0x41dc82);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41dc86:{NFSU2_TR(0x41dc86);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B41dc88:{NFSU2_TR(0x41dc88);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41dc8a:{NFSU2_TR(0x41dc8a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41dc8d:{NFSU2_TR(0x41dc8d);
if(r1(R+514)){{goto L41dc95;}}
}
B41dc8f:L41dc8f:{c.instructions+=2;NFSU2_TR(0x41dc8f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41dc91:{NFSU2_TR(0x41dc91);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41dc95:L41dc95:{c.instructions+=7;NFSU2_TR(0x41dc95);
{u32 ea_=u32(r4(R+24)+u32(524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41dc9b:{NFSU2_TR(0x41dc9b);
{u32 ea_=u32(r4(R+24)+u32(532u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41dca1:{NFSU2_TR(0x41dca1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B41dca3:{NFSU2_TR(0x41dca3);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B41dca7:{NFSU2_TR(0x41dca7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41dca9:{NFSU2_TR(0x41dca9);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41dcac:{NFSU2_TR(0x41dcac);
if(r1(R+518)){{goto L41dcb4;}}
}
B41dcae:L41dcae:{c.instructions+=2;NFSU2_TR(0x41dcae);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41dcb0:{NFSU2_TR(0x41dcb0);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41dcb4:L41dcb4:{c.instructions+=5;NFSU2_TR(0x41dcb4);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41dcb8:{NFSU2_TR(0x41dcb8);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B41dcba:{NFSU2_TR(0x41dcba);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41dcbc:{NFSU2_TR(0x41dcbc);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41dcbf:{NFSU2_TR(0x41dcbf);
if(r1(R+514)){{goto L41dccd;}}
}
B41dcc1:L41dcc1:{c.instructions+=4;NFSU2_TR(0x41dcc1);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41dcc5:{NFSU2_TR(0x41dcc5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41dcc7:{NFSU2_TR(0x41dcc7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41dccb:{NFSU2_TR(0x41dccb);
{goto L41dcd1;}
}
B41dccd:L41dccd:{c.instructions+=1;NFSU2_TR(0x41dccd);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41dcd1:L41dcd1:{c.instructions+=3;NFSU2_TR(0x41dcd1);
__builtin_memmove((R+4),(R+24),4);
}
B41dcd3:{NFSU2_TR(0x41dcd3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41dcdb:{NFSU2_TR(0x41dcdb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41dce0ull));
TAIL_STATIC(0x410040u,410);
}
B41dce0:L41dce0:{c.instructions+=2;NFSU2_TR(0x41dce0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41dce2:{NFSU2_TR(0x41dce2);
if(r1(R+518)){{goto L41dd87;}}
}
B41dce8:L41dce8:{c.instructions+=5;NFSU2_TR(0x41dce8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x274ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41dcee:{NFSU2_TR(0x41dcee);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B41dcf1:{NFSU2_TR(0x41dcf1);
{u32 ea_=u32(r4(R+0)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41dcf4:{NFSU2_TR(0x41dcf4);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41dcf6:{NFSU2_TR(0x41dcf6);
if(r1(R+518)){{goto L41dd10;}}
}
B41dcf8:L41dcf8:{c.instructions+=8;NFSU2_TR(0x41dcf8);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41dcfb:{NFSU2_TR(0x41dcfb);
w4(R+4,u32(r1(R+4)));
}
B41dcfe:{NFSU2_TR(0x41dcfe);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41dd02:{NFSU2_TR(0x41dd02);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xda,0x08"::"a"(ea_):"memory");}
}
B41dd06:{NFSU2_TR(0x41dd06);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41dd09:{NFSU2_TR(0x41dd09);
{u32 ea_=u32(r4(R+0)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41dd0c:{NFSU2_TR(0x41dd0c);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B41dd0e:{NFSU2_TR(0x41dd0e);
{goto L41dd16;}
}
B41dd10:L41dd10:{c.instructions+=1;NFSU2_TR(0x41dd10);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41dd16:L41dd16:{c.instructions+=6;NFSU2_TR(0x41dd16);
{u32 ea_=u32(r4(R+0)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41dd19:{NFSU2_TR(0x41dd19);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41dd1d:{NFSU2_TR(0x41dd1d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41dd23:{NFSU2_TR(0x41dd23);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41dd25:{NFSU2_TR(0x41dd25);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41dd28:{NFSU2_TR(0x41dd28);
if(r1(R+514)){{goto L41dd3e;}}
}
B41dd2a:L41dd2a:{c.instructions+=4;NFSU2_TR(0x41dd2a);
{u32 ea_=u32(u32(7879164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41dd30:{NFSU2_TR(0x41dd30);
{u32 ea_=u32(u32(7879168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41dd36:{NFSU2_TR(0x41dd36);
{u32 ea_=u32(u32(7879172u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41dd3c:{NFSU2_TR(0x41dd3c);
{goto L41dd50;}
}
B41dd3e:L41dd3e:{c.instructions+=3;NFSU2_TR(0x41dd3e);
{u32 ea_=u32(u32(7879176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41dd44:{NFSU2_TR(0x41dd44);
{u32 ea_=u32(u32(7879180u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41dd4a:{NFSU2_TR(0x41dd4a);
{u32 ea_=u32(u32(7879184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41dd50:L41dd50:{c.instructions+=17;NFSU2_TR(0x41dd50);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B41dd52:{NFSU2_TR(0x41dd52);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B41dd54:{NFSU2_TR(0x41dd54);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B41dd56:{NFSU2_TR(0x41dd56);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B41dd58:{NFSU2_TR(0x41dd58);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B41dd5a:{NFSU2_TR(0x41dd5a);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B41dd5c:{NFSU2_TR(0x41dd5c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B41dd5e:{NFSU2_TR(0x41dd5e);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41dd64:{NFSU2_TR(0x41dd64);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41dd68:{NFSU2_TR(0x41dd68);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41dd6a:{NFSU2_TR(0x41dd6a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41dd6c:{NFSU2_TR(0x41dd6c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41dd6e:{NFSU2_TR(0x41dd6e);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41dd72:{NFSU2_TR(0x41dd72);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41dd78:{NFSU2_TR(0x41dd78);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41dd7a:{NFSU2_TR(0x41dd7a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41dd7d:{NFSU2_TR(0x41dd7d);
if(r1(R+518)){{goto L41dd87;}}
}
B41dd7f:L41dd7f:{c.instructions+=1;NFSU2_TR(0x41dd7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41dd87:L41dd87:{c.instructions+=6;NFSU2_TR(0x41dd87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x278ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41dd8d:{NFSU2_TR(0x41dd8d);
{u32 ea_=u32(r4(R+8)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41dd90:{NFSU2_TR(0x41dd90);
{u32 ea_=u32(u32(7878888u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41dd96:{NFSU2_TR(0x41dd96);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41dd98:{NFSU2_TR(0x41dd98);
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
B41dd9b:{NFSU2_TR(0x41dd9b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41ddae;}}
}
B41dd9d:L41dd9d:{c.instructions+=3;NFSU2_TR(0x41dd9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41dd9f:{NFSU2_TR(0x41dd9f);
__builtin_memmove((R+4),(R+24),4);
}
B41dda1:{NFSU2_TR(0x41dda1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41dda4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41dda4:L41dda4:{c.instructions+=2;NFSU2_TR(0x41dda4);
__builtin_memmove((R+4),gp(0x7838ec),4);
}
B41ddaa:{NFSU2_TR(0x41ddaa);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ddae:L41ddae:{c.instructions+=4;NFSU2_TR(0x41ddae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x280ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41ddb4:{NFSU2_TR(0x41ddb4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x280ull))));
__builtin_memmove((R+4),(U+0),4);
}
B41ddba:{NFSU2_TR(0x41ddba);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ddbc:{NFSU2_TR(0x41ddbc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41ddbfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41ddbf:L41ddbf:{c.instructions+=5;NFSU2_TR(0x41ddbf);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B41ddc1:{NFSU2_TR(0x41ddc1);
{u32 ea_=u32(u32(7878896u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41ddc7:{NFSU2_TR(0x41ddc7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41ddc9:{NFSU2_TR(0x41ddc9);
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
B41ddcc:{NFSU2_TR(0x41ddcc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41dddf;}}
}
B41ddce:L41ddce:{c.instructions+=3;NFSU2_TR(0x41ddce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41ddd0:{NFSU2_TR(0x41ddd0);
__builtin_memmove((R+4),(R+24),4);
}
B41ddd2:{NFSU2_TR(0x41ddd2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41ddd5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41ddd5:L41ddd5:{c.instructions+=2;NFSU2_TR(0x41ddd5);
__builtin_memmove((R+4),gp(0x7838ec),4);
}
B41dddb:{NFSU2_TR(0x41dddb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41dddf:L41dddf:{c.instructions+=3;NFSU2_TR(0x41dddf);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B41dde4:{NFSU2_TR(0x41dde4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41dde6:{NFSU2_TR(0x41dde6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41de49;}}
}
B41dde8:L41dde8:{c.instructions+=3;NFSU2_TR(0x41dde8);
__builtin_memmove((R+0),gp(0x890108),4);
}
B41dded:{NFSU2_TR(0x41dded);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41ddef:{NFSU2_TR(0x41ddef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41de49;}}
}
B41ddf1:L41ddf1:{c.instructions+=3;NFSU2_TR(0x41ddf1);
__builtin_memmove((R+0),gp(0x890114),4);
}
B41ddf6:{NFSU2_TR(0x41ddf6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41ddf8:{NFSU2_TR(0x41ddf8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41de0c;}}
}
B41ddfa:L41ddfa:{c.instructions+=3;NFSU2_TR(0x41ddfa);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B41ddff:{NFSU2_TR(0x41ddff);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41de01:{NFSU2_TR(0x41de01);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41de0c;}}
}
B41de03:L41de03:{c.instructions+=3;NFSU2_TR(0x41de03);
__builtin_memmove((R+0),gp(0x890104),4);
}
B41de08:{NFSU2_TR(0x41de08);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41de0a:{NFSU2_TR(0x41de0a);
if(r1(R+518)){{goto L41de49;}}
}
B41de0c:L41de0c:{c.instructions+=4;NFSU2_TR(0x41de0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41de12:{NFSU2_TR(0x41de12);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41de15:{NFSU2_TR(0x41de15);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41de17:{NFSU2_TR(0x41de17);
if(r1(R+518)){{goto L41de49;}}
}
B41de19:L41de19:{c.instructions+=2;NFSU2_TR(0x41de19);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B41de1c:{NFSU2_TR(0x41de1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41de21ull));
TAIL_STATIC(0x59fa10u,59f);
}
B41de21:L41de21:{c.instructions+=5;NFSU2_TR(0x41de21);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B41de23:{NFSU2_TR(0x41de23);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41de24:{NFSU2_TR(0x41de24);
{u32 ea_=u32(u32(7881300u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41de2a:{NFSU2_TR(0x41de2a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41de2d:{NFSU2_TR(0x41de2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41de32ull));
TAIL_STATIC(0x43c350u,43c);
}
B41de32:L41de32:{c.instructions+=5;NFSU2_TR(0x41de32);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41de38:{NFSU2_TR(0x41de38);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B41de3b:{NFSU2_TR(0x41de3b);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41de3f:{NFSU2_TR(0x41de3f);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41de45:{NFSU2_TR(0x41de45);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41de49:L41de49:{c.instructions+=6;NFSU2_TR(0x41de49);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41de4d:{NFSU2_TR(0x41de4d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41de53:{NFSU2_TR(0x41de53);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41de57:{NFSU2_TR(0x41de57);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41de59:{NFSU2_TR(0x41de59);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41de5c:{NFSU2_TR(0x41de5c);
if(r1(R+514)){{goto L41dec4;}}
}
B41de5e:L41de5e:{c.instructions+=5;NFSU2_TR(0x41de5e);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B41de60:{NFSU2_TR(0x41de60);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B41de64:{NFSU2_TR(0x41de64);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41de66:{NFSU2_TR(0x41de66);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41de69:{NFSU2_TR(0x41de69);
if(r1(R+514)){{goto L41de71;}}
}
B41de6b:L41de6b:{c.instructions+=2;NFSU2_TR(0x41de6b);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41de6f:{NFSU2_TR(0x41de6f);
{goto L41de7b;}
}
B41de71:L41de71:{c.instructions+=3;NFSU2_TR(0x41de71);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41de75:{NFSU2_TR(0x41de75);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41de77:{NFSU2_TR(0x41de77);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41de7b:L41de7b:{c.instructions+=2;NFSU2_TR(0x41de7b);
__builtin_memmove((R+4),(R+24),4);
}
B41de7d:{NFSU2_TR(0x41de7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41de82ull));
TAIL_STATIC(0x410040u,410);
}
B41de82:L41de82:{c.instructions+=2;NFSU2_TR(0x41de82);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41de84:{NFSU2_TR(0x41de84);
if(r1(R+518)){{goto L41de9d;}}
}
B41de86:L41de86:{c.instructions+=5;NFSU2_TR(0x41de86);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41de8a:{NFSU2_TR(0x41de8a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41de8e:{NFSU2_TR(0x41de8e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41de90:{NFSU2_TR(0x41de90);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41de93:{NFSU2_TR(0x41de93);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L41de9d;}}
}
B41de95:L41de95:{c.instructions+=2;NFSU2_TR(0x41de95);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41de99:{NFSU2_TR(0x41de99);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41de9d:L41de9d:{c.instructions+=8;NFSU2_TR(0x41de9d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41dea1:{NFSU2_TR(0x41dea1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41dea5:{NFSU2_TR(0x41dea5);
{u32 ea_=u32(u32(7878960u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41deab:{NFSU2_TR(0x41deab);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41deaf:{NFSU2_TR(0x41deaf);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+8)),r4(U+0));
}
B41deb5:{NFSU2_TR(0x41deb5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41deb7:{NFSU2_TR(0x41deb7);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41deba:{NFSU2_TR(0x41deba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41df11;}}
}
B41debc:L41debc:{c.instructions+=3;NFSU2_TR(0x41debc);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41dec0:{NFSU2_TR(0x41dec0);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41dec2:{NFSU2_TR(0x41dec2);
{goto L41df17;}
}
B41dec4:L41dec4:{c.instructions+=4;NFSU2_TR(0x41dec4);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41dec8:{NFSU2_TR(0x41dec8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41deca:{NFSU2_TR(0x41deca);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41decd:{NFSU2_TR(0x41decd);
if(r1(R+514)){{goto L41ded9;}}
}
B41decf:L41decf:{c.instructions+=3;NFSU2_TR(0x41decf);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41ded3:{NFSU2_TR(0x41ded3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ded7:{NFSU2_TR(0x41ded7);
{goto L41dee1;}
}
B41ded9:L41ded9:{c.instructions+=2;NFSU2_TR(0x41ded9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41dedd:{NFSU2_TR(0x41dedd);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41dee1:L41dee1:{c.instructions+=2;NFSU2_TR(0x41dee1);
__builtin_memmove((R+4),(R+24),4);
}
B41dee3:{NFSU2_TR(0x41dee3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41dee8ull));
TAIL_STATIC(0x410040u,410);
}
B41dee8:L41dee8:{c.instructions+=2;NFSU2_TR(0x41dee8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41deea:{NFSU2_TR(0x41deea);
if(r1(R+518)){{goto L41df03;}}
}
B41deec:L41deec:{c.instructions+=5;NFSU2_TR(0x41deec);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41def0:{NFSU2_TR(0x41def0);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41def4:{NFSU2_TR(0x41def4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41def6:{NFSU2_TR(0x41def6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41def9:{NFSU2_TR(0x41def9);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L41df03;}}
}
B41defb:L41defb:{c.instructions+=2;NFSU2_TR(0x41defb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41deff:{NFSU2_TR(0x41deff);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41df03:L41df03:{c.instructions+=3;NFSU2_TR(0x41df03);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41df07:{NFSU2_TR(0x41df07);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41df0b:{NFSU2_TR(0x41df0b);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41df0d:L41df0d:{c.instructions+=1;NFSU2_TR(0x41df0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41df11:L41df11:{c.instructions+=1;NFSU2_TR(0x41df11);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B41df17:L41df17:{c.instructions+=8;NFSU2_TR(0x41df17);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41df19:{NFSU2_TR(0x41df19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41df1f:{NFSU2_TR(0x41df1f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B41df25:{NFSU2_TR(0x41df25);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41df29:{NFSU2_TR(0x41df29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41df2a:{NFSU2_TR(0x41df2a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41df2c:{NFSU2_TR(0x41df2c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41df2f:{NFSU2_TR(0x41df2f);
if(r1(R+518)){{goto L41df39;}}
}
B41df31:L41df31:{c.instructions+=2;NFSU2_TR(0x41df31);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41df33:{NFSU2_TR(0x41df33);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41df39:L41df39:{c.instructions+=5;NFSU2_TR(0x41df39);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41df3d:{NFSU2_TR(0x41df3d);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B41df3f:{NFSU2_TR(0x41df3f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41df41:{NFSU2_TR(0x41df41);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41df44:{NFSU2_TR(0x41df44);
if(r1(R+514)){{goto L41df4c;}}
}
B41df46:L41df46:{c.instructions+=2;NFSU2_TR(0x41df46);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41df48:{NFSU2_TR(0x41df48);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41df4c:L41df4c:{c.instructions+=8;NFSU2_TR(0x41df4c);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41df4e:{NFSU2_TR(0x41df4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41df50:{NFSU2_TR(0x41df50);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41df54:{NFSU2_TR(0x41df54);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41df58:{NFSU2_TR(0x41df58);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41df5e:{NFSU2_TR(0x41df5e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41df60:{NFSU2_TR(0x41df60);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41df63:{NFSU2_TR(0x41df63);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41df88;}}
}
B41df65:L41df65:{c.instructions+=6;NFSU2_TR(0x41df65);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41df69:{NFSU2_TR(0x41df69);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41df6f:{NFSU2_TR(0x41df6f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41df73:{NFSU2_TR(0x41df73);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41df75:{NFSU2_TR(0x41df75);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41df78:{NFSU2_TR(0x41df78);
if(r1(R+514)){{goto L41df8e;}}
}
B41df7a:L41df7a:{c.instructions+=4;NFSU2_TR(0x41df7a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41df7c:{NFSU2_TR(0x41df7c);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
s4(u32(r4(R+4)),r4(U+0));
}
B41df82:{NFSU2_TR(0x41df82);
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
B41df85:{NFSU2_TR(0x41df85);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41df88:L41df88:{c.instructions+=1;NFSU2_TR(0x41df88);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41df8e:L41df8e:{c.instructions+=3;NFSU2_TR(0x41df8e);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41df90:{NFSU2_TR(0x41df90);
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
B41df93:{NFSU2_TR(0x41df93);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41dfa0:L41dfa0:{c.instructions+=3;NFSU2_TR(0x41dfa0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41dfa1:{NFSU2_TR(0x41dfa1);
__builtin_memmove((R+24),(R+4),4);
}
B41dfa3:{NFSU2_TR(0x41dfa3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41dfa8ull));
TAIL_STATIC(0x4169b0u,416);
}
B41dfa8:L41dfa8:{c.instructions+=2;NFSU2_TR(0x41dfa8);
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
B41dfad:{NFSU2_TR(0x41dfad);
if(r1(R+518)){{goto L41dfb8;}}
}
B41dfaf:L41dfaf:{c.instructions+=2;NFSU2_TR(0x41dfaf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41dfb0:{NFSU2_TR(0x41dfb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41dfb5ull));
TAIL_STATIC(0x575630u,575);
}
B41dfb5:L41dfb5:{c.instructions+=1;NFSU2_TR(0x41dfb5);
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
B41dfb8:L41dfb8:{c.instructions+=3;NFSU2_TR(0x41dfb8);
__builtin_memmove((R+0),(R+24),4);
}
B41dfba:{NFSU2_TR(0x41dfba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41dfbb:{NFSU2_TR(0x41dfbb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41dfc0:L41dfc0:{c.instructions+=8;NFSU2_TR(0x41dfc0);
__builtin_memmove((R+0),gp(0x81cb8c),4);
}
B41dfc5:{NFSU2_TR(0x41dfc5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41dfc7:{NFSU2_TR(0x41dfc7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41dfc8:{NFSU2_TR(0x41dfc8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41dfc9:{NFSU2_TR(0x41dfc9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B41dfcd:{NFSU2_TR(0x41dfcd);
__builtin_memmove((R+24),(R+4),4);
}
B41dfcf:{NFSU2_TR(0x41dfcf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41dfd0:{NFSU2_TR(0x41dfd0);
if(r1(R+518)){{goto L41dfe5;}}
}
B41dfd2:L41dfd2:{c.instructions+=6;NFSU2_TR(0x41dfd2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41dfd6:{NFSU2_TR(0x41dfd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41dfda:{NFSU2_TR(0x41dfda);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41dfdb:{NFSU2_TR(0x41dfdb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41dfdc:{NFSU2_TR(0x41dfdc);
__builtin_memmove((R+4),(R+24),4);
}
B41dfde:{NFSU2_TR(0x41dfde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41dfe3ull));
TAIL_STATIC(0x406a40u,406);
}
B41dfe3:L41dfe3:{c.instructions+=1;NFSU2_TR(0x41dfe3);
TAIL_STATIC(0x41e016u,41e);
}
B41dfe5:L41dfe5:{c.instructions+=1;NFSU2_TR(0x41dfe5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41dfeaull));
TAIL_STATIC(0x5c1000u,5c1);
}
B41dfea:L41dfea:{c.instructions+=4;NFSU2_TR(0x41dfea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B41dfed:{NFSU2_TR(0x41dfed);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41dfef:{NFSU2_TR(0x41dfef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41dff0:{NFSU2_TR(0x41dff0);
if(r1(R+518)){TAIL_STATIC(0x41e005u,41e);}
}
B41dff2:L41dff2:{c.instructions+=6;NFSU2_TR(0x41dff2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41dff6:{NFSU2_TR(0x41dff6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41dffa:{NFSU2_TR(0x41dffa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41dffb:{NFSU2_TR(0x41dffb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41dffc:{NFSU2_TR(0x41dffc);
__builtin_memmove((R+4),(R+24),4);
}
B41dffe:{NFSU2_TR(0x41dffe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e003ull));
TAIL_STATIC(0x4061c0u,406);
}
XIT:NFSU2_TR_EXIT(0x41d,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
