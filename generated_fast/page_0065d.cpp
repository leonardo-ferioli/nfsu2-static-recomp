#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_65b(u8* __restrict R,Cpu& c);
u32 body_65c(u8* __restrict R,Cpu& c);
u32 body_65e(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x65d,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x65d,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_65d(u8* __restrict R,Cpu& c);
u32 page_65d(Cpu& c){return body_65d(c.regs.data(),c);}
__attribute__((noinline)) u32 body_65d(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x65d000:goto L65d000;
case 0x65d002:c.instructions+=5;goto B65d002;
case 0x65d003:c.instructions+=4;goto B65d003;
case 0x65d004:c.instructions+=3;goto B65d004;
case 0x65d005:c.instructions+=2;goto B65d005;
case 0x65d006:c.instructions+=1;goto B65d006;
case 0x65d00c:goto L65d00c;
case 0x65d00d:c.instructions+=1;goto B65d00d;
case 0x65d00f:goto L65d00f;
case 0x65d010:c.instructions+=1;goto B65d010;
case 0x65d016:goto L65d016;
case 0x65d019:c.instructions+=2;goto B65d019;
case 0x65d01b:c.instructions+=1;goto B65d01b;
case 0x65d021:goto L65d021;
case 0x65d024:c.instructions+=4;goto B65d024;
case 0x65d026:c.instructions+=3;goto B65d026;
case 0x65d029:c.instructions+=2;goto B65d029;
case 0x65d02c:c.instructions+=1;goto B65d02c;
case 0x65d02d:goto L65d02d;
case 0x65d030:c.instructions+=2;goto B65d030;
case 0x65d032:c.instructions+=1;goto B65d032;
case 0x65d034:goto L65d034;
case 0x65d037:c.instructions+=14;goto B65d037;
case 0x65d039:c.instructions+=13;goto B65d039;
case 0x65d03c:c.instructions+=12;goto B65d03c;
case 0x65d03e:c.instructions+=11;goto B65d03e;
case 0x65d040:c.instructions+=10;goto B65d040;
case 0x65d042:c.instructions+=9;goto B65d042;
case 0x65d044:c.instructions+=8;goto B65d044;
case 0x65d046:c.instructions+=7;goto B65d046;
case 0x65d049:c.instructions+=6;goto B65d049;
case 0x65d04b:c.instructions+=5;goto B65d04b;
case 0x65d04d:c.instructions+=4;goto B65d04d;
case 0x65d04f:c.instructions+=3;goto B65d04f;
case 0x65d051:c.instructions+=2;goto B65d051;
case 0x65d052:c.instructions+=1;goto B65d052;
case 0x65d054:goto L65d054;
case 0x65d058:c.instructions+=3;goto B65d058;
case 0x65d05b:c.instructions+=2;goto B65d05b;
case 0x65d05e:c.instructions+=1;goto B65d05e;
case 0x65d060:goto L65d060;
case 0x65d065:goto L65d065;
case 0x65d068:c.instructions+=2;goto B65d068;
case 0x65d06a:c.instructions+=1;goto B65d06a;
case 0x65d070:goto L65d070;
case 0x65d072:c.instructions+=2;goto B65d072;
case 0x65d075:c.instructions+=1;goto B65d075;
case 0x65d076:goto L65d076;
case 0x65d079:c.instructions+=3;goto B65d079;
case 0x65d07c:c.instructions+=2;goto B65d07c;
case 0x65d07f:c.instructions+=1;goto B65d07f;
case 0x65d082:goto L65d082;
case 0x65d085:c.instructions+=1;goto B65d085;
case 0x65d088:goto L65d088;
case 0x65d08a:c.instructions+=1;goto B65d08a;
case 0x65d08f:goto L65d08f;
case 0x65d091:c.instructions+=4;goto B65d091;
case 0x65d093:c.instructions+=3;goto B65d093;
case 0x65d096:c.instructions+=2;goto B65d096;
case 0x65d099:c.instructions+=1;goto B65d099;
case 0x65d09b:goto L65d09b;
case 0x65d09e:c.instructions+=2;goto B65d09e;
case 0x65d0a1:c.instructions+=1;goto B65d0a1;
case 0x65d0a3:goto L65d0a3;
case 0x65d0a7:c.instructions+=3;goto B65d0a7;
case 0x65d0ab:c.instructions+=2;goto B65d0ab;
case 0x65d0ae:c.instructions+=1;goto B65d0ae;
case 0x65d0b0:goto L65d0b0;
case 0x65d0b2:goto L65d0b2;
case 0x65d0b5:c.instructions+=2;goto B65d0b5;
case 0x65d0b7:c.instructions+=1;goto B65d0b7;
case 0x65d0b9:goto L65d0b9;
case 0x65d0bb:c.instructions+=2;goto B65d0bb;
case 0x65d0be:c.instructions+=1;goto B65d0be;
case 0x65d0bf:goto L65d0bf;
case 0x65d0c2:c.instructions+=2;goto B65d0c2;
case 0x65d0c5:c.instructions+=1;goto B65d0c5;
case 0x65d0c8:goto L65d0c8;
case 0x65d0ca:c.instructions+=1;goto B65d0ca;
case 0x65d0cc:goto L65d0cc;
case 0x65d0ce:c.instructions+=5;goto B65d0ce;
case 0x65d0d4:c.instructions+=4;goto B65d0d4;
case 0x65d0d6:c.instructions+=3;goto B65d0d6;
case 0x65d0d8:c.instructions+=2;goto B65d0d8;
case 0x65d0db:c.instructions+=1;goto B65d0db;
case 0x65d0dd:goto L65d0dd;
case 0x65d0df:c.instructions+=2;goto B65d0df;
case 0x65d0e0:c.instructions+=1;goto B65d0e0;
case 0x65d0e2:goto L65d0e2;
case 0x65d0e4:goto L65d0e4;
case 0x65d0e6:c.instructions+=4;goto B65d0e6;
case 0x65d0e8:c.instructions+=3;goto B65d0e8;
case 0x65d0eb:c.instructions+=2;goto B65d0eb;
case 0x65d0ec:c.instructions+=1;goto B65d0ec;
case 0x65d0ee:goto L65d0ee;
case 0x65d0f0:c.instructions+=2;goto B65d0f0;
case 0x65d0f3:c.instructions+=1;goto B65d0f3;
case 0x65d0f5:goto L65d0f5;
case 0x65d0f9:c.instructions+=3;goto B65d0f9;
case 0x65d0fd:c.instructions+=2;goto B65d0fd;
case 0x65d100:c.instructions+=1;goto B65d100;
case 0x65d102:goto L65d102;
case 0x65d103:c.instructions+=5;goto B65d103;
case 0x65d104:c.instructions+=4;goto B65d104;
case 0x65d106:c.instructions+=3;goto B65d106;
case 0x65d107:c.instructions+=2;goto B65d107;
case 0x65d108:c.instructions+=1;goto B65d108;
case 0x65d10b:goto L65d10b;
case 0x65d10d:c.instructions+=16;goto B65d10d;
case 0x65d10e:c.instructions+=15;goto B65d10e;
case 0x65d110:c.instructions+=14;goto B65d110;
case 0x65d113:c.instructions+=13;goto B65d113;
case 0x65d116:c.instructions+=12;goto B65d116;
case 0x65d118:c.instructions+=11;goto B65d118;
case 0x65d11b:c.instructions+=10;goto B65d11b;
case 0x65d11e:c.instructions+=9;goto B65d11e;
case 0x65d122:c.instructions+=8;goto B65d122;
case 0x65d123:c.instructions+=7;goto B65d123;
case 0x65d124:c.instructions+=6;goto B65d124;
case 0x65d125:c.instructions+=5;goto B65d125;
case 0x65d127:c.instructions+=4;goto B65d127;
case 0x65d128:c.instructions+=3;goto B65d128;
case 0x65d12a:c.instructions+=2;goto B65d12a;
case 0x65d12d:c.instructions+=1;goto B65d12d;
case 0x65d12f:goto L65d12f;
case 0x65d132:goto L65d132;
case 0x65d134:c.instructions+=2;goto B65d134;
case 0x65d137:c.instructions+=1;goto B65d137;
case 0x65d139:goto L65d139;
case 0x65d13c:goto L65d13c;
case 0x65d13d:c.instructions+=1;goto B65d13d;
case 0x65d143:goto L65d143;
case 0x65d144:c.instructions+=1;goto B65d144;
case 0x65d146:goto L65d146;
case 0x65d147:c.instructions+=1;goto B65d147;
case 0x65d149:goto L65d149;
case 0x65d150:c.instructions+=1;goto B65d150;
case 0x65d155:goto L65d155;
case 0x65d158:c.instructions+=7;goto B65d158;
case 0x65d15b:c.instructions+=6;goto B65d15b;
case 0x65d15d:c.instructions+=5;goto B65d15d;
case 0x65d160:c.instructions+=4;goto B65d160;
case 0x65d162:c.instructions+=3;goto B65d162;
case 0x65d165:c.instructions+=2;goto B65d165;
case 0x65d167:c.instructions+=1;goto B65d167;
case 0x65d169:goto L65d169;
case 0x65d16b:goto L65d16b;
case 0x65d16d:c.instructions+=2;goto B65d16d;
case 0x65d170:c.instructions+=1;goto B65d170;
case 0x65d172:goto L65d172;
case 0x65d174:goto L65d174;
case 0x65d17a:goto L65d17a;
case 0x65d17d:goto L65d17d;
case 0x65d181:c.instructions+=1;goto B65d181;
case 0x65d183:goto L65d183;
case 0x65d186:c.instructions+=1;goto B65d186;
case 0x65d188:goto L65d188;
case 0x65d18b:c.instructions+=2;goto B65d18b;
case 0x65d18d:c.instructions+=1;goto B65d18d;
case 0x65d18f:goto L65d18f;
case 0x65d192:c.instructions+=2;goto B65d192;
case 0x65d194:c.instructions+=1;goto B65d194;
case 0x65d196:goto L65d196;
case 0x65d199:c.instructions+=4;goto B65d199;
case 0x65d19b:c.instructions+=3;goto B65d19b;
case 0x65d19e:c.instructions+=2;goto B65d19e;
case 0x65d19f:c.instructions+=1;goto B65d19f;
case 0x65d1a1:goto L65d1a1;
case 0x65d1a4:c.instructions+=2;goto B65d1a4;
case 0x65d1a5:c.instructions+=1;goto B65d1a5;
case 0x65d1a7:goto L65d1a7;
case 0x65d1ab:c.instructions+=3;goto B65d1ab;
case 0x65d1ae:c.instructions+=2;goto B65d1ae;
case 0x65d1b1:c.instructions+=1;goto B65d1b1;
case 0x65d1b3:goto L65d1b3;
case 0x65d1b8:goto L65d1b8;
case 0x65d1bb:c.instructions+=7;goto B65d1bb;
case 0x65d1be:c.instructions+=6;goto B65d1be;
case 0x65d1c0:c.instructions+=5;goto B65d1c0;
case 0x65d1c3:c.instructions+=4;goto B65d1c3;
case 0x65d1c5:c.instructions+=3;goto B65d1c5;
case 0x65d1c8:c.instructions+=2;goto B65d1c8;
case 0x65d1ca:c.instructions+=1;goto B65d1ca;
case 0x65d1cc:goto L65d1cc;
case 0x65d1ce:goto L65d1ce;
case 0x65d1d0:c.instructions+=2;goto B65d1d0;
case 0x65d1d3:c.instructions+=1;goto B65d1d3;
case 0x65d1d5:goto L65d1d5;
case 0x65d1d7:goto L65d1d7;
case 0x65d1dd:goto L65d1dd;
case 0x65d1e0:goto L65d1e0;
case 0x65d1e4:c.instructions+=1;goto B65d1e4;
case 0x65d1e6:goto L65d1e6;
case 0x65d1e9:c.instructions+=1;goto B65d1e9;
case 0x65d1eb:goto L65d1eb;
case 0x65d1ee:c.instructions+=2;goto B65d1ee;
case 0x65d1f0:c.instructions+=1;goto B65d1f0;
case 0x65d1f2:goto L65d1f2;
case 0x65d1f5:c.instructions+=2;goto B65d1f5;
case 0x65d1f7:c.instructions+=1;goto B65d1f7;
case 0x65d1f9:goto L65d1f9;
case 0x65d1fc:c.instructions+=4;goto B65d1fc;
case 0x65d1fe:c.instructions+=3;goto B65d1fe;
case 0x65d201:c.instructions+=2;goto B65d201;
case 0x65d202:c.instructions+=1;goto B65d202;
case 0x65d204:goto L65d204;
case 0x65d207:c.instructions+=2;goto B65d207;
case 0x65d208:c.instructions+=1;goto B65d208;
case 0x65d20a:goto L65d20a;
case 0x65d20e:c.instructions+=3;goto B65d20e;
case 0x65d211:c.instructions+=2;goto B65d211;
case 0x65d214:c.instructions+=1;goto B65d214;
case 0x65d216:goto L65d216;
case 0x65d218:goto L65d218;
case 0x65d21b:c.instructions+=7;goto B65d21b;
case 0x65d21e:c.instructions+=6;goto B65d21e;
case 0x65d220:c.instructions+=5;goto B65d220;
case 0x65d223:c.instructions+=4;goto B65d223;
case 0x65d225:c.instructions+=3;goto B65d225;
case 0x65d228:c.instructions+=2;goto B65d228;
case 0x65d22a:c.instructions+=1;goto B65d22a;
case 0x65d22c:goto L65d22c;
case 0x65d22e:goto L65d22e;
case 0x65d230:c.instructions+=2;goto B65d230;
case 0x65d233:c.instructions+=1;goto B65d233;
case 0x65d235:goto L65d235;
case 0x65d237:goto L65d237;
case 0x65d239:goto L65d239;
case 0x65d23c:goto L65d23c;
case 0x65d23f:c.instructions+=2;goto B65d23f;
case 0x65d241:c.instructions+=1;goto B65d241;
case 0x65d243:goto L65d243;
case 0x65d245:c.instructions+=1;goto B65d245;
case 0x65d248:goto L65d248;
case 0x65d24b:c.instructions+=2;goto B65d24b;
case 0x65d24d:c.instructions+=1;goto B65d24d;
case 0x65d24f:goto L65d24f;
case 0x65d252:c.instructions+=2;goto B65d252;
case 0x65d254:c.instructions+=1;goto B65d254;
case 0x65d256:goto L65d256;
case 0x65d258:c.instructions+=8;goto B65d258;
case 0x65d25b:c.instructions+=7;goto B65d25b;
case 0x65d25e:c.instructions+=6;goto B65d25e;
case 0x65d261:c.instructions+=5;goto B65d261;
case 0x65d264:c.instructions+=4;goto B65d264;
case 0x65d266:c.instructions+=3;goto B65d266;
case 0x65d269:c.instructions+=2;goto B65d269;
case 0x65d26a:c.instructions+=1;goto B65d26a;
case 0x65d26c:goto L65d26c;
case 0x65d26f:c.instructions+=2;goto B65d26f;
case 0x65d272:c.instructions+=1;goto B65d272;
case 0x65d274:goto L65d274;
case 0x65d278:c.instructions+=3;goto B65d278;
case 0x65d27b:c.instructions+=2;goto B65d27b;
case 0x65d27e:c.instructions+=1;goto B65d27e;
case 0x65d280:goto L65d280;
case 0x65d283:c.instructions+=5;goto B65d283;
case 0x65d284:c.instructions+=4;goto B65d284;
case 0x65d285:c.instructions+=3;goto B65d285;
case 0x65d286:c.instructions+=2;goto B65d286;
case 0x65d287:c.instructions+=1;goto B65d287;
case 0x65d28a:goto L65d28a;
case 0x65d28c:c.instructions+=16;goto B65d28c;
case 0x65d28d:c.instructions+=15;goto B65d28d;
case 0x65d28f:c.instructions+=14;goto B65d28f;
case 0x65d292:c.instructions+=13;goto B65d292;
case 0x65d295:c.instructions+=12;goto B65d295;
case 0x65d298:c.instructions+=11;goto B65d298;
case 0x65d29c:c.instructions+=10;goto B65d29c;
case 0x65d29e:c.instructions+=9;goto B65d29e;
case 0x65d2a1:c.instructions+=8;goto B65d2a1;
case 0x65d2a2:c.instructions+=7;goto B65d2a2;
case 0x65d2a3:c.instructions+=6;goto B65d2a3;
case 0x65d2a4:c.instructions+=5;goto B65d2a4;
case 0x65d2a6:c.instructions+=4;goto B65d2a6;
case 0x65d2a7:c.instructions+=3;goto B65d2a7;
case 0x65d2a9:c.instructions+=2;goto B65d2a9;
case 0x65d2ac:c.instructions+=1;goto B65d2ac;
case 0x65d2ae:goto L65d2ae;
case 0x65d2b1:goto L65d2b1;
case 0x65d2b3:c.instructions+=2;goto B65d2b3;
case 0x65d2b6:c.instructions+=1;goto B65d2b6;
case 0x65d2b8:goto L65d2b8;
case 0x65d2bb:goto L65d2bb;
case 0x65d2bc:c.instructions+=1;goto B65d2bc;
case 0x65d2c2:goto L65d2c2;
case 0x65d2c3:c.instructions+=1;goto B65d2c3;
case 0x65d2c5:goto L65d2c5;
case 0x65d2c6:c.instructions+=1;goto B65d2c6;
case 0x65d2c8:goto L65d2c8;
case 0x65d2cf:c.instructions+=1;goto B65d2cf;
case 0x65d2d4:goto L65d2d4;
case 0x65d2d7:c.instructions+=6;goto B65d2d7;
case 0x65d2da:c.instructions+=5;goto B65d2da;
case 0x65d2dc:c.instructions+=4;goto B65d2dc;
case 0x65d2df:c.instructions+=3;goto B65d2df;
case 0x65d2e1:c.instructions+=2;goto B65d2e1;
case 0x65d2e4:c.instructions+=1;goto B65d2e4;
case 0x65d2e6:goto L65d2e6;
case 0x65d2e8:goto L65d2e8;
case 0x65d2ea:c.instructions+=2;goto B65d2ea;
case 0x65d2ed:c.instructions+=1;goto B65d2ed;
case 0x65d2ef:goto L65d2ef;
case 0x65d2f1:goto L65d2f1;
case 0x65d2f7:goto L65d2f7;
case 0x65d2fa:goto L65d2fa;
case 0x65d2fd:c.instructions+=2;goto B65d2fd;
case 0x65d2ff:c.instructions+=1;goto B65d2ff;
case 0x65d301:goto L65d301;
case 0x65d304:c.instructions+=2;goto B65d304;
case 0x65d307:c.instructions+=1;goto B65d307;
case 0x65d30a:goto L65d30a;
case 0x65d30d:c.instructions+=2;goto B65d30d;
case 0x65d30f:c.instructions+=1;goto B65d30f;
case 0x65d311:goto L65d311;
case 0x65d313:c.instructions+=1;goto B65d313;
case 0x65d315:goto L65d315;
case 0x65d317:c.instructions+=5;goto B65d317;
case 0x65d319:c.instructions+=4;goto B65d319;
case 0x65d31c:c.instructions+=3;goto B65d31c;
case 0x65d31f:c.instructions+=2;goto B65d31f;
case 0x65d320:c.instructions+=1;goto B65d320;
case 0x65d322:goto L65d322;
case 0x65d324:c.instructions+=1;goto B65d324;
case 0x65d325:goto L65d325;
case 0x65d328:c.instructions+=3;goto B65d328;
case 0x65d32a:c.instructions+=2;goto B65d32a;
case 0x65d32d:c.instructions+=1;goto B65d32d;
case 0x65d32f:goto L65d32f;
case 0x65d333:c.instructions+=3;goto B65d333;
case 0x65d337:c.instructions+=2;goto B65d337;
case 0x65d33a:c.instructions+=1;goto B65d33a;
case 0x65d33c:goto L65d33c;
case 0x65d341:goto L65d341;
case 0x65d344:c.instructions+=6;goto B65d344;
case 0x65d347:c.instructions+=5;goto B65d347;
case 0x65d349:c.instructions+=4;goto B65d349;
case 0x65d34c:c.instructions+=3;goto B65d34c;
case 0x65d34e:c.instructions+=2;goto B65d34e;
case 0x65d351:c.instructions+=1;goto B65d351;
case 0x65d353:goto L65d353;
case 0x65d355:goto L65d355;
case 0x65d357:c.instructions+=2;goto B65d357;
case 0x65d35a:c.instructions+=1;goto B65d35a;
case 0x65d35c:goto L65d35c;
case 0x65d35e:goto L65d35e;
case 0x65d364:goto L65d364;
case 0x65d367:goto L65d367;
case 0x65d36a:c.instructions+=2;goto B65d36a;
case 0x65d36c:c.instructions+=1;goto B65d36c;
case 0x65d36e:goto L65d36e;
case 0x65d371:c.instructions+=1;goto B65d371;
case 0x65d374:goto L65d374;
case 0x65d377:c.instructions+=2;goto B65d377;
case 0x65d379:c.instructions+=1;goto B65d379;
case 0x65d37b:goto L65d37b;
case 0x65d37d:c.instructions+=1;goto B65d37d;
case 0x65d37f:goto L65d37f;
case 0x65d381:c.instructions+=5;goto B65d381;
case 0x65d384:c.instructions+=4;goto B65d384;
case 0x65d386:c.instructions+=3;goto B65d386;
case 0x65d389:c.instructions+=2;goto B65d389;
case 0x65d38a:c.instructions+=1;goto B65d38a;
case 0x65d38c:goto L65d38c;
case 0x65d38f:c.instructions+=3;goto B65d38f;
case 0x65d392:c.instructions+=2;goto B65d392;
case 0x65d393:c.instructions+=1;goto B65d393;
case 0x65d395:goto L65d395;
case 0x65d399:c.instructions+=3;goto B65d399;
case 0x65d39d:c.instructions+=2;goto B65d39d;
case 0x65d3a0:c.instructions+=1;goto B65d3a0;
case 0x65d3a2:goto L65d3a2;
case 0x65d3a4:goto L65d3a4;
case 0x65d3a7:c.instructions+=6;goto B65d3a7;
case 0x65d3aa:c.instructions+=5;goto B65d3aa;
case 0x65d3ac:c.instructions+=4;goto B65d3ac;
case 0x65d3af:c.instructions+=3;goto B65d3af;
case 0x65d3b1:c.instructions+=2;goto B65d3b1;
case 0x65d3b4:c.instructions+=1;goto B65d3b4;
case 0x65d3b6:goto L65d3b6;
case 0x65d3b8:goto L65d3b8;
case 0x65d3ba:c.instructions+=2;goto B65d3ba;
case 0x65d3bd:c.instructions+=1;goto B65d3bd;
case 0x65d3bf:goto L65d3bf;
case 0x65d3c1:goto L65d3c1;
case 0x65d3c3:goto L65d3c3;
case 0x65d3c6:goto L65d3c6;
case 0x65d3c9:c.instructions+=2;goto B65d3c9;
case 0x65d3cb:c.instructions+=1;goto B65d3cb;
case 0x65d3cd:goto L65d3cd;
case 0x65d3d0:c.instructions+=2;goto B65d3d0;
case 0x65d3d3:c.instructions+=1;goto B65d3d3;
case 0x65d3d6:goto L65d3d6;
case 0x65d3d9:c.instructions+=2;goto B65d3d9;
case 0x65d3db:c.instructions+=1;goto B65d3db;
case 0x65d3dd:goto L65d3dd;
case 0x65d3df:c.instructions+=1;goto B65d3df;
case 0x65d3e1:goto L65d3e1;
case 0x65d3e3:c.instructions+=9;goto B65d3e3;
case 0x65d3e5:c.instructions+=8;goto B65d3e5;
case 0x65d3e8:c.instructions+=7;goto B65d3e8;
case 0x65d3eb:c.instructions+=6;goto B65d3eb;
case 0x65d3ee:c.instructions+=5;goto B65d3ee;
case 0x65d3f1:c.instructions+=4;goto B65d3f1;
case 0x65d3f3:c.instructions+=3;goto B65d3f3;
case 0x65d3f6:c.instructions+=2;goto B65d3f6;
case 0x65d3f7:c.instructions+=1;goto B65d3f7;
case 0x65d3f9:goto L65d3f9;
case 0x65d3fb:c.instructions+=1;goto B65d3fb;
case 0x65d3fc:goto L65d3fc;
case 0x65d3ff:c.instructions+=3;goto B65d3ff;
case 0x65d401:c.instructions+=2;goto B65d401;
case 0x65d404:c.instructions+=1;goto B65d404;
case 0x65d406:goto L65d406;
case 0x65d40a:c.instructions+=3;goto B65d40a;
case 0x65d40e:c.instructions+=2;goto B65d40e;
case 0x65d411:c.instructions+=1;goto B65d411;
case 0x65d413:goto L65d413;
case 0x65d416:c.instructions+=5;goto B65d416;
case 0x65d417:c.instructions+=4;goto B65d417;
case 0x65d418:c.instructions+=3;goto B65d418;
case 0x65d419:c.instructions+=2;goto B65d419;
case 0x65d41a:c.instructions+=1;goto B65d41a;
case 0x65d41d:goto L65d41d;
case 0x65d41f:c.instructions+=11;goto B65d41f;
case 0x65d420:c.instructions+=10;goto B65d420;
case 0x65d422:c.instructions+=9;goto B65d422;
case 0x65d423:c.instructions+=8;goto B65d423;
case 0x65d426:c.instructions+=7;goto B65d426;
case 0x65d428:c.instructions+=6;goto B65d428;
case 0x65d42c:c.instructions+=5;goto B65d42c;
case 0x65d42d:c.instructions+=4;goto B65d42d;
case 0x65d42e:c.instructions+=3;goto B65d42e;
case 0x65d42f:c.instructions+=2;goto B65d42f;
case 0x65d430:c.instructions+=1;goto B65d430;
case 0x65d436:goto L65d436;
case 0x65d437:c.instructions+=1;goto B65d437;
case 0x65d439:goto L65d439;
case 0x65d43a:c.instructions+=1;goto B65d43a;
case 0x65d43c:goto L65d43c;
case 0x65d443:c.instructions+=1;goto B65d443;
case 0x65d448:goto L65d448;
case 0x65d44b:c.instructions+=2;goto B65d44b;
case 0x65d44d:c.instructions+=1;goto B65d44d;
case 0x65d453:goto L65d453;
case 0x65d456:c.instructions+=1;goto B65d456;
case 0x65d459:goto L65d459;
case 0x65d45b:c.instructions+=2;goto B65d45b;
case 0x65d45d:c.instructions+=1;goto B65d45d;
case 0x65d45f:goto L65d45f;
case 0x65d461:c.instructions+=1;goto B65d461;
case 0x65d462:goto L65d462;
case 0x65d464:c.instructions+=5;goto B65d464;
case 0x65d467:c.instructions+=4;goto B65d467;
case 0x65d46a:c.instructions+=3;goto B65d46a;
case 0x65d46d:c.instructions+=2;goto B65d46d;
case 0x65d46e:c.instructions+=1;goto B65d46e;
case 0x65d470:goto L65d470;
case 0x65d473:c.instructions+=1;goto B65d473;
case 0x65d475:goto L65d475;
case 0x65d478:c.instructions+=3;goto B65d478;
case 0x65d47b:c.instructions+=2;goto B65d47b;
case 0x65d47c:c.instructions+=1;goto B65d47c;
case 0x65d47e:goto L65d47e;
case 0x65d483:goto L65d483;
case 0x65d486:c.instructions+=2;goto B65d486;
case 0x65d488:c.instructions+=1;goto B65d488;
case 0x65d48e:goto L65d48e;
case 0x65d491:c.instructions+=2;goto B65d491;
case 0x65d494:c.instructions+=1;goto B65d494;
case 0x65d497:goto L65d497;
case 0x65d499:c.instructions+=2;goto B65d499;
case 0x65d49b:c.instructions+=1;goto B65d49b;
case 0x65d49d:goto L65d49d;
case 0x65d4a4:goto L65d4a4;
case 0x65d4a6:c.instructions+=2;goto B65d4a6;
case 0x65d4a9:c.instructions+=1;goto B65d4a9;
case 0x65d4ae:goto L65d4ae;
case 0x65d4b1:c.instructions+=3;goto B65d4b1;
case 0x65d4b4:c.instructions+=2;goto B65d4b4;
case 0x65d4b7:c.instructions+=1;goto B65d4b7;
case 0x65d4b9:goto L65d4b9;
case 0x65d4bc:c.instructions+=1;goto B65d4bc;
case 0x65d4be:goto L65d4be;
case 0x65d4c1:c.instructions+=3;goto B65d4c1;
case 0x65d4c4:c.instructions+=2;goto B65d4c4;
case 0x65d4c7:c.instructions+=1;goto B65d4c7;
case 0x65d4c9:goto L65d4c9;
case 0x65d4cb:goto L65d4cb;
case 0x65d4ce:c.instructions+=2;goto B65d4ce;
case 0x65d4d0:c.instructions+=1;goto B65d4d0;
case 0x65d4d2:goto L65d4d2;
case 0x65d4d5:c.instructions+=1;goto B65d4d5;
case 0x65d4d8:goto L65d4d8;
case 0x65d4da:c.instructions+=2;goto B65d4da;
case 0x65d4dc:c.instructions+=1;goto B65d4dc;
case 0x65d4de:goto L65d4de;
case 0x65d4e0:c.instructions+=1;goto B65d4e0;
case 0x65d4e1:goto L65d4e1;
case 0x65d4e3:c.instructions+=6;goto B65d4e3;
case 0x65d4e6:c.instructions+=5;goto B65d4e6;
case 0x65d4ec:c.instructions+=4;goto B65d4ec;
case 0x65d4ee:c.instructions+=3;goto B65d4ee;
case 0x65d4f0:c.instructions+=2;goto B65d4f0;
case 0x65d4f3:c.instructions+=1;goto B65d4f3;
case 0x65d4f5:goto L65d4f5;
case 0x65d4f7:c.instructions+=2;goto B65d4f7;
case 0x65d4f8:c.instructions+=1;goto B65d4f8;
case 0x65d4fa:goto L65d4fa;
case 0x65d4fc:goto L65d4fc;
case 0x65d4ff:c.instructions+=3;goto B65d4ff;
case 0x65d502:c.instructions+=2;goto B65d502;
case 0x65d503:c.instructions+=1;goto B65d503;
case 0x65d505:goto L65d505;
case 0x65d508:c.instructions+=1;goto B65d508;
case 0x65d50a:goto L65d50a;
case 0x65d50d:c.instructions+=3;goto B65d50d;
case 0x65d510:c.instructions+=2;goto B65d510;
case 0x65d511:c.instructions+=1;goto B65d511;
case 0x65d513:goto L65d513;
case 0x65d516:c.instructions+=5;goto B65d516;
case 0x65d517:c.instructions+=4;goto B65d517;
case 0x65d518:c.instructions+=3;goto B65d518;
case 0x65d519:c.instructions+=2;goto B65d519;
case 0x65d51a:c.instructions+=1;goto B65d51a;
case 0x65d51d:goto L65d51d;
case 0x65d51f:c.instructions+=12;goto B65d51f;
case 0x65d520:c.instructions+=11;goto B65d520;
case 0x65d522:c.instructions+=10;goto B65d522;
case 0x65d523:c.instructions+=9;goto B65d523;
case 0x65d524:c.instructions+=8;goto B65d524;
case 0x65d527:c.instructions+=7;goto B65d527;
case 0x65d529:c.instructions+=6;goto B65d529;
case 0x65d52d:c.instructions+=5;goto B65d52d;
case 0x65d52e:c.instructions+=4;goto B65d52e;
case 0x65d52f:c.instructions+=3;goto B65d52f;
case 0x65d530:c.instructions+=2;goto B65d530;
case 0x65d531:c.instructions+=1;goto B65d531;
case 0x65d537:goto L65d537;
case 0x65d538:c.instructions+=1;goto B65d538;
case 0x65d53a:goto L65d53a;
case 0x65d53b:c.instructions+=1;goto B65d53b;
case 0x65d53d:goto L65d53d;
case 0x65d544:c.instructions+=1;goto B65d544;
case 0x65d549:goto L65d549;
case 0x65d54c:c.instructions+=2;goto B65d54c;
case 0x65d54e:c.instructions+=1;goto B65d54e;
case 0x65d554:goto L65d554;
case 0x65d557:c.instructions+=3;goto B65d557;
case 0x65d559:c.instructions+=2;goto B65d559;
case 0x65d55c:c.instructions+=1;goto B65d55c;
case 0x65d55d:goto L65d55d;
case 0x65d55f:c.instructions+=2;goto B65d55f;
case 0x65d561:c.instructions+=1;goto B65d561;
case 0x65d563:goto L65d563;
case 0x65d566:c.instructions+=1;goto B65d566;
case 0x65d569:goto L65d569;
case 0x65d56c:c.instructions+=1;goto B65d56c;
case 0x65d56e:goto L65d56e;
case 0x65d570:c.instructions+=6;goto B65d570;
case 0x65d573:c.instructions+=5;goto B65d573;
case 0x65d575:c.instructions+=4;goto B65d575;
case 0x65d577:c.instructions+=3;goto B65d577;
case 0x65d57a:c.instructions+=2;goto B65d57a;
case 0x65d57b:c.instructions+=1;goto B65d57b;
case 0x65d57d:goto L65d57d;
case 0x65d580:c.instructions+=2;goto B65d580;
case 0x65d583:c.instructions+=1;goto B65d583;
case 0x65d585:goto L65d585;
case 0x65d589:c.instructions+=3;goto B65d589;
case 0x65d58b:c.instructions+=2;goto B65d58b;
case 0x65d58e:c.instructions+=1;goto B65d58e;
case 0x65d590:goto L65d590;
case 0x65d595:goto L65d595;
case 0x65d598:c.instructions+=2;goto B65d598;
case 0x65d59a:c.instructions+=1;goto B65d59a;
case 0x65d5a0:goto L65d5a0;
case 0x65d5a2:c.instructions+=2;goto B65d5a2;
case 0x65d5a5:c.instructions+=1;goto B65d5a5;
case 0x65d5a6:goto L65d5a6;
case 0x65d5a9:c.instructions+=3;goto B65d5a9;
case 0x65d5ab:c.instructions+=2;goto B65d5ab;
case 0x65d5ad:c.instructions+=1;goto B65d5ad;
case 0x65d5af:goto L65d5af;
case 0x65d5b2:c.instructions+=1;goto B65d5b2;
case 0x65d5b5:goto L65d5b5;
case 0x65d5b8:c.instructions+=1;goto B65d5b8;
case 0x65d5bb:goto L65d5bb;
case 0x65d5be:c.instructions+=3;goto B65d5be;
case 0x65d5c0:c.instructions+=2;goto B65d5c0;
case 0x65d5c3:c.instructions+=1;goto B65d5c3;
case 0x65d5c8:goto L65d5c8;
case 0x65d5ca:c.instructions+=4;goto B65d5ca;
case 0x65d5cd:c.instructions+=3;goto B65d5cd;
case 0x65d5cf:c.instructions+=2;goto B65d5cf;
case 0x65d5d2:c.instructions+=1;goto B65d5d2;
case 0x65d5d4:goto L65d5d4;
case 0x65d5d7:c.instructions+=2;goto B65d5d7;
case 0x65d5da:c.instructions+=1;goto B65d5da;
case 0x65d5dc:goto L65d5dc;
case 0x65d5e0:c.instructions+=3;goto B65d5e0;
case 0x65d5e3:c.instructions+=2;goto B65d5e3;
case 0x65d5e6:c.instructions+=1;goto B65d5e6;
case 0x65d5e8:goto L65d5e8;
case 0x65d5ea:goto L65d5ea;
case 0x65d5ed:c.instructions+=2;goto B65d5ed;
case 0x65d5ef:c.instructions+=1;goto B65d5ef;
case 0x65d5f1:goto L65d5f1;
case 0x65d5f3:c.instructions+=2;goto B65d5f3;
case 0x65d5f6:c.instructions+=1;goto B65d5f6;
case 0x65d5f7:goto L65d5f7;
case 0x65d5fa:c.instructions+=3;goto B65d5fa;
case 0x65d5fc:c.instructions+=2;goto B65d5fc;
case 0x65d5fe:c.instructions+=1;goto B65d5fe;
case 0x65d600:goto L65d600;
case 0x65d603:goto L65d603;
case 0x65d605:c.instructions+=1;goto B65d605;
case 0x65d607:goto L65d607;
case 0x65d60a:c.instructions+=7;goto B65d60a;
case 0x65d60c:c.instructions+=6;goto B65d60c;
case 0x65d60f:c.instructions+=5;goto B65d60f;
case 0x65d615:c.instructions+=4;goto B65d615;
case 0x65d617:c.instructions+=3;goto B65d617;
case 0x65d619:c.instructions+=2;goto B65d619;
case 0x65d61c:c.instructions+=1;goto B65d61c;
case 0x65d61e:goto L65d61e;
case 0x65d620:c.instructions+=2;goto B65d620;
case 0x65d621:c.instructions+=1;goto B65d621;
case 0x65d623:goto L65d623;
case 0x65d625:goto L65d625;
case 0x65d627:c.instructions+=4;goto B65d627;
case 0x65d62a:c.instructions+=3;goto B65d62a;
case 0x65d62c:c.instructions+=2;goto B65d62c;
case 0x65d62d:c.instructions+=1;goto B65d62d;
case 0x65d62f:goto L65d62f;
case 0x65d631:c.instructions+=2;goto B65d631;
case 0x65d634:c.instructions+=1;goto B65d634;
case 0x65d636:goto L65d636;
case 0x65d63a:c.instructions+=3;goto B65d63a;
case 0x65d63d:c.instructions+=2;goto B65d63d;
case 0x65d640:c.instructions+=1;goto B65d640;
case 0x65d642:goto L65d642;
case 0x65d645:c.instructions+=5;goto B65d645;
case 0x65d646:c.instructions+=4;goto B65d646;
case 0x65d647:c.instructions+=3;goto B65d647;
case 0x65d648:c.instructions+=2;goto B65d648;
case 0x65d649:c.instructions+=1;goto B65d649;
case 0x65d64c:goto L65d64c;
case 0x65d64e:c.instructions+=17;goto B65d64e;
case 0x65d64f:c.instructions+=16;goto B65d64f;
case 0x65d651:c.instructions+=15;goto B65d651;
case 0x65d652:c.instructions+=14;goto B65d652;
case 0x65d653:c.instructions+=13;goto B65d653;
case 0x65d656:c.instructions+=12;goto B65d656;
case 0x65d658:c.instructions+=11;goto B65d658;
case 0x65d65b:c.instructions+=10;goto B65d65b;
case 0x65d65e:c.instructions+=9;goto B65d65e;
case 0x65d662:c.instructions+=8;goto B65d662;
case 0x65d663:c.instructions+=7;goto B65d663;
case 0x65d664:c.instructions+=6;goto B65d664;
case 0x65d665:c.instructions+=5;goto B65d665;
case 0x65d667:c.instructions+=4;goto B65d667;
case 0x65d668:c.instructions+=3;goto B65d668;
case 0x65d66a:c.instructions+=2;goto B65d66a;
case 0x65d66d:c.instructions+=1;goto B65d66d;
case 0x65d66f:goto L65d66f;
case 0x65d672:goto L65d672;
case 0x65d674:c.instructions+=2;goto B65d674;
case 0x65d677:c.instructions+=1;goto B65d677;
case 0x65d679:goto L65d679;
case 0x65d67c:goto L65d67c;
case 0x65d67d:c.instructions+=1;goto B65d67d;
case 0x65d683:goto L65d683;
case 0x65d684:c.instructions+=1;goto B65d684;
case 0x65d686:goto L65d686;
case 0x65d687:c.instructions+=1;goto B65d687;
case 0x65d689:goto L65d689;
case 0x65d690:c.instructions+=1;goto B65d690;
case 0x65d695:goto L65d695;
case 0x65d698:c.instructions+=2;goto B65d698;
case 0x65d69a:c.instructions+=1;goto B65d69a;
case 0x65d6a0:goto L65d6a0;
case 0x65d6a3:c.instructions+=2;goto B65d6a3;
case 0x65d6a6:c.instructions+=1;goto B65d6a6;
case 0x65d6a9:goto L65d6a9;
case 0x65d6ab:c.instructions+=2;goto B65d6ab;
case 0x65d6ad:c.instructions+=1;goto B65d6ad;
case 0x65d6af:goto L65d6af;
case 0x65d6b1:c.instructions+=2;goto B65d6b1;
case 0x65d6b3:c.instructions+=1;goto B65d6b3;
case 0x65d6b4:goto L65d6b4;
case 0x65d6b6:goto L65d6b6;
case 0x65d6b8:c.instructions+=2;goto B65d6b8;
case 0x65d6bb:c.instructions+=1;goto B65d6bb;
case 0x65d6bd:goto L65d6bd;
case 0x65d6c0:c.instructions+=2;goto B65d6c0;
case 0x65d6c2:c.instructions+=1;goto B65d6c2;
case 0x65d6c4:goto L65d6c4;
case 0x65d6c6:c.instructions+=1;goto B65d6c6;
case 0x65d6c9:goto L65d6c9;
case 0x65d6cc:c.instructions+=5;goto B65d6cc;
case 0x65d6ce:c.instructions+=4;goto B65d6ce;
case 0x65d6d1:c.instructions+=3;goto B65d6d1;
case 0x65d6d4:c.instructions+=2;goto B65d6d4;
case 0x65d6d5:c.instructions+=1;goto B65d6d5;
case 0x65d6d7:goto L65d6d7;
case 0x65d6d9:c.instructions+=1;goto B65d6d9;
case 0x65d6da:goto L65d6da;
case 0x65d6db:c.instructions+=2;goto B65d6db;
case 0x65d6de:c.instructions+=1;goto B65d6de;
case 0x65d6e0:goto L65d6e0;
case 0x65d6e3:c.instructions+=3;goto B65d6e3;
case 0x65d6e5:c.instructions+=2;goto B65d6e5;
case 0x65d6e8:c.instructions+=1;goto B65d6e8;
case 0x65d6ea:goto L65d6ea;
case 0x65d6ef:goto L65d6ef;
case 0x65d6f2:c.instructions+=2;goto B65d6f2;
case 0x65d6f4:c.instructions+=1;goto B65d6f4;
case 0x65d6fa:goto L65d6fa;
case 0x65d6fd:c.instructions+=2;goto B65d6fd;
case 0x65d700:c.instructions+=1;goto B65d700;
case 0x65d703:goto L65d703;
case 0x65d705:c.instructions+=2;goto B65d705;
case 0x65d707:c.instructions+=1;goto B65d707;
case 0x65d709:goto L65d709;
case 0x65d70b:c.instructions+=2;goto B65d70b;
case 0x65d70d:c.instructions+=1;goto B65d70d;
case 0x65d70e:goto L65d70e;
case 0x65d710:goto L65d710;
case 0x65d712:c.instructions+=2;goto B65d712;
case 0x65d715:c.instructions+=1;goto B65d715;
case 0x65d717:goto L65d717;
case 0x65d71a:c.instructions+=2;goto B65d71a;
case 0x65d71c:c.instructions+=1;goto B65d71c;
case 0x65d71e:goto L65d71e;
case 0x65d720:c.instructions+=1;goto B65d720;
case 0x65d723:goto L65d723;
case 0x65d726:c.instructions+=5;goto B65d726;
case 0x65d728:c.instructions+=4;goto B65d728;
case 0x65d72b:c.instructions+=3;goto B65d72b;
case 0x65d72e:c.instructions+=2;goto B65d72e;
case 0x65d72f:c.instructions+=1;goto B65d72f;
case 0x65d731:goto L65d731;
case 0x65d732:c.instructions+=2;goto B65d732;
case 0x65d735:c.instructions+=1;goto B65d735;
case 0x65d737:goto L65d737;
case 0x65d73a:c.instructions+=3;goto B65d73a;
case 0x65d73d:c.instructions+=2;goto B65d73d;
case 0x65d740:c.instructions+=1;goto B65d740;
case 0x65d742:goto L65d742;
case 0x65d744:goto L65d744;
case 0x65d747:c.instructions+=2;goto B65d747;
case 0x65d749:c.instructions+=1;goto B65d749;
case 0x65d74b:goto L65d74b;
case 0x65d74e:c.instructions+=2;goto B65d74e;
case 0x65d751:c.instructions+=1;goto B65d751;
case 0x65d754:goto L65d754;
case 0x65d756:c.instructions+=2;goto B65d756;
case 0x65d758:c.instructions+=1;goto B65d758;
case 0x65d75a:goto L65d75a;
case 0x65d75c:c.instructions+=2;goto B65d75c;
case 0x65d75e:c.instructions+=1;goto B65d75e;
case 0x65d75f:goto L65d75f;
case 0x65d761:goto L65d761;
case 0x65d763:c.instructions+=2;goto B65d763;
case 0x65d766:c.instructions+=1;goto B65d766;
case 0x65d768:goto L65d768;
case 0x65d76b:c.instructions+=2;goto B65d76b;
case 0x65d76d:c.instructions+=1;goto B65d76d;
case 0x65d76f:goto L65d76f;
case 0x65d771:c.instructions+=1;goto B65d771;
case 0x65d774:goto L65d774;
case 0x65d776:c.instructions+=9;goto B65d776;
case 0x65d779:c.instructions+=8;goto B65d779;
case 0x65d77c:c.instructions+=7;goto B65d77c;
case 0x65d77f:c.instructions+=6;goto B65d77f;
case 0x65d782:c.instructions+=5;goto B65d782;
case 0x65d784:c.instructions+=4;goto B65d784;
case 0x65d787:c.instructions+=3;goto B65d787;
case 0x65d78a:c.instructions+=2;goto B65d78a;
case 0x65d78b:c.instructions+=1;goto B65d78b;
case 0x65d78d:goto L65d78d;
case 0x65d78e:c.instructions+=2;goto B65d78e;
case 0x65d791:c.instructions+=1;goto B65d791;
case 0x65d793:goto L65d793;
case 0x65d795:c.instructions+=1;goto B65d795;
case 0x65d796:goto L65d796;
case 0x65d799:c.instructions+=3;goto B65d799;
case 0x65d79b:c.instructions+=2;goto B65d79b;
case 0x65d79e:c.instructions+=1;goto B65d79e;
case 0x65d7a0:goto L65d7a0;
case 0x65d7a3:c.instructions+=5;goto B65d7a3;
case 0x65d7a4:c.instructions+=4;goto B65d7a4;
case 0x65d7a5:c.instructions+=3;goto B65d7a5;
case 0x65d7a6:c.instructions+=2;goto B65d7a6;
case 0x65d7a7:c.instructions+=1;goto B65d7a7;
case 0x65d7aa:goto L65d7aa;
case 0x65d7ac:c.instructions+=16;goto B65d7ac;
case 0x65d7ad:c.instructions+=15;goto B65d7ad;
case 0x65d7af:c.instructions+=14;goto B65d7af;
case 0x65d7b2:c.instructions+=13;goto B65d7b2;
case 0x65d7b5:c.instructions+=12;goto B65d7b5;
case 0x65d7b8:c.instructions+=11;goto B65d7b8;
case 0x65d7bc:c.instructions+=10;goto B65d7bc;
case 0x65d7be:c.instructions+=9;goto B65d7be;
case 0x65d7c1:c.instructions+=8;goto B65d7c1;
case 0x65d7c2:c.instructions+=7;goto B65d7c2;
case 0x65d7c3:c.instructions+=6;goto B65d7c3;
case 0x65d7c4:c.instructions+=5;goto B65d7c4;
case 0x65d7c6:c.instructions+=4;goto B65d7c6;
case 0x65d7c7:c.instructions+=3;goto B65d7c7;
case 0x65d7c9:c.instructions+=2;goto B65d7c9;
case 0x65d7cc:c.instructions+=1;goto B65d7cc;
case 0x65d7ce:goto L65d7ce;
case 0x65d7d1:goto L65d7d1;
case 0x65d7d3:c.instructions+=2;goto B65d7d3;
case 0x65d7d6:c.instructions+=1;goto B65d7d6;
case 0x65d7d8:goto L65d7d8;
case 0x65d7db:goto L65d7db;
case 0x65d7dc:c.instructions+=1;goto B65d7dc;
case 0x65d7e2:goto L65d7e2;
case 0x65d7e3:c.instructions+=1;goto B65d7e3;
case 0x65d7e5:goto L65d7e5;
case 0x65d7e6:c.instructions+=1;goto B65d7e6;
case 0x65d7e8:goto L65d7e8;
case 0x65d7ef:c.instructions+=1;goto B65d7ef;
case 0x65d7f4:goto L65d7f4;
case 0x65d7f7:c.instructions+=2;goto B65d7f7;
case 0x65d7f9:c.instructions+=1;goto B65d7f9;
case 0x65d7ff:goto L65d7ff;
case 0x65d802:c.instructions+=1;goto B65d802;
case 0x65d805:goto L65d805;
case 0x65d807:c.instructions+=2;goto B65d807;
case 0x65d809:c.instructions+=1;goto B65d809;
case 0x65d80b:goto L65d80b;
case 0x65d80d:c.instructions+=4;goto B65d80d;
case 0x65d80f:c.instructions+=3;goto B65d80f;
case 0x65d811:c.instructions+=2;goto B65d811;
case 0x65d814:c.instructions+=1;goto B65d814;
case 0x65d815:goto L65d815;
case 0x65d817:goto L65d817;
case 0x65d819:goto L65d819;
case 0x65d81c:c.instructions+=1;goto B65d81c;
case 0x65d81f:goto L65d81f;
case 0x65d822:c.instructions+=2;goto B65d822;
case 0x65d824:c.instructions+=1;goto B65d824;
case 0x65d826:goto L65d826;
case 0x65d829:c.instructions+=2;goto B65d829;
case 0x65d82b:c.instructions+=1;goto B65d82b;
case 0x65d82e:goto L65d82e;
case 0x65d830:c.instructions+=8;goto B65d830;
case 0x65d832:c.instructions+=7;goto B65d832;
case 0x65d835:c.instructions+=6;goto B65d835;
case 0x65d837:c.instructions+=5;goto B65d837;
case 0x65d838:c.instructions+=4;goto B65d838;
case 0x65d83b:c.instructions+=3;goto B65d83b;
case 0x65d83d:c.instructions+=2;goto B65d83d;
case 0x65d83e:c.instructions+=1;goto B65d83e;
case 0x65d840:goto L65d840;
case 0x65d844:c.instructions+=3;goto B65d844;
case 0x65d845:c.instructions+=2;goto B65d845;
case 0x65d848:c.instructions+=1;goto B65d848;
case 0x65d84a:goto L65d84a;
case 0x65d84e:c.instructions+=3;goto B65d84e;
case 0x65d850:c.instructions+=2;goto B65d850;
case 0x65d853:c.instructions+=1;goto B65d853;
case 0x65d855:goto L65d855;
case 0x65d85a:goto L65d85a;
case 0x65d85d:c.instructions+=2;goto B65d85d;
case 0x65d85f:c.instructions+=1;goto B65d85f;
case 0x65d865:goto L65d865;
case 0x65d868:c.instructions+=1;goto B65d868;
case 0x65d86b:goto L65d86b;
case 0x65d86d:c.instructions+=2;goto B65d86d;
case 0x65d86f:c.instructions+=1;goto B65d86f;
case 0x65d871:goto L65d871;
case 0x65d873:c.instructions+=4;goto B65d873;
case 0x65d875:c.instructions+=3;goto B65d875;
case 0x65d877:c.instructions+=2;goto B65d877;
case 0x65d87a:c.instructions+=1;goto B65d87a;
case 0x65d87b:goto L65d87b;
case 0x65d87d:goto L65d87d;
case 0x65d87f:goto L65d87f;
case 0x65d882:c.instructions+=1;goto B65d882;
case 0x65d885:goto L65d885;
case 0x65d888:c.instructions+=2;goto B65d888;
case 0x65d88a:c.instructions+=1;goto B65d88a;
case 0x65d88c:goto L65d88c;
case 0x65d88f:c.instructions+=2;goto B65d88f;
case 0x65d891:c.instructions+=1;goto B65d891;
case 0x65d894:goto L65d894;
case 0x65d896:c.instructions+=8;goto B65d896;
case 0x65d898:c.instructions+=7;goto B65d898;
case 0x65d89a:c.instructions+=6;goto B65d89a;
case 0x65d89d:c.instructions+=5;goto B65d89d;
case 0x65d89e:c.instructions+=4;goto B65d89e;
case 0x65d8a1:c.instructions+=3;goto B65d8a1;
case 0x65d8a3:c.instructions+=2;goto B65d8a3;
case 0x65d8a4:c.instructions+=1;goto B65d8a4;
case 0x65d8a6:goto L65d8a6;
case 0x65d8aa:c.instructions+=3;goto B65d8aa;
case 0x65d8ab:c.instructions+=2;goto B65d8ab;
case 0x65d8ae:c.instructions+=1;goto B65d8ae;
case 0x65d8b0:goto L65d8b0;
case 0x65d8b4:c.instructions+=3;goto B65d8b4;
case 0x65d8b6:c.instructions+=2;goto B65d8b6;
case 0x65d8b9:c.instructions+=1;goto B65d8b9;
case 0x65d8bb:goto L65d8bb;
case 0x65d8bd:goto L65d8bd;
case 0x65d8c0:c.instructions+=2;goto B65d8c0;
case 0x65d8c2:c.instructions+=1;goto B65d8c2;
case 0x65d8c4:goto L65d8c4;
case 0x65d8c7:c.instructions+=1;goto B65d8c7;
case 0x65d8ca:goto L65d8ca;
case 0x65d8cc:c.instructions+=2;goto B65d8cc;
case 0x65d8ce:c.instructions+=1;goto B65d8ce;
case 0x65d8d0:goto L65d8d0;
case 0x65d8d2:c.instructions+=4;goto B65d8d2;
case 0x65d8d4:c.instructions+=3;goto B65d8d4;
case 0x65d8d6:c.instructions+=2;goto B65d8d6;
case 0x65d8d9:c.instructions+=1;goto B65d8d9;
case 0x65d8da:goto L65d8da;
case 0x65d8dc:goto L65d8dc;
case 0x65d8de:goto L65d8de;
case 0x65d8e1:c.instructions+=1;goto B65d8e1;
case 0x65d8e4:goto L65d8e4;
case 0x65d8e7:c.instructions+=2;goto B65d8e7;
case 0x65d8e9:c.instructions+=1;goto B65d8e9;
case 0x65d8eb:goto L65d8eb;
case 0x65d8ee:c.instructions+=2;goto B65d8ee;
case 0x65d8f0:c.instructions+=1;goto B65d8f0;
case 0x65d8f3:goto L65d8f3;
case 0x65d8f5:c.instructions+=12;goto B65d8f5;
case 0x65d8f7:c.instructions+=11;goto B65d8f7;
case 0x65d8f9:c.instructions+=10;goto B65d8f9;
case 0x65d8fc:c.instructions+=9;goto B65d8fc;
case 0x65d8ff:c.instructions+=8;goto B65d8ff;
case 0x65d902:c.instructions+=7;goto B65d902;
case 0x65d904:c.instructions+=6;goto B65d904;
case 0x65d907:c.instructions+=5;goto B65d907;
case 0x65d908:c.instructions+=4;goto B65d908;
case 0x65d90b:c.instructions+=3;goto B65d90b;
case 0x65d90d:c.instructions+=2;goto B65d90d;
case 0x65d90e:c.instructions+=1;goto B65d90e;
case 0x65d910:goto L65d910;
case 0x65d914:c.instructions+=3;goto B65d914;
case 0x65d915:c.instructions+=2;goto B65d915;
case 0x65d918:c.instructions+=1;goto B65d918;
case 0x65d91a:goto L65d91a;
case 0x65d91e:c.instructions+=3;goto B65d91e;
case 0x65d920:c.instructions+=2;goto B65d920;
case 0x65d923:c.instructions+=1;goto B65d923;
case 0x65d925:goto L65d925;
case 0x65d928:c.instructions+=5;goto B65d928;
case 0x65d929:c.instructions+=4;goto B65d929;
case 0x65d92a:c.instructions+=3;goto B65d92a;
case 0x65d92b:c.instructions+=2;goto B65d92b;
case 0x65d92c:c.instructions+=1;goto B65d92c;
case 0x65d92f:goto L65d92f;
case 0x65d931:c.instructions+=16;goto B65d931;
case 0x65d932:c.instructions+=15;goto B65d932;
case 0x65d934:c.instructions+=14;goto B65d934;
case 0x65d937:c.instructions+=13;goto B65d937;
case 0x65d93a:c.instructions+=12;goto B65d93a;
case 0x65d93c:c.instructions+=11;goto B65d93c;
case 0x65d940:c.instructions+=10;goto B65d940;
case 0x65d942:c.instructions+=9;goto B65d942;
case 0x65d943:c.instructions+=8;goto B65d943;
case 0x65d946:c.instructions+=7;goto B65d946;
case 0x65d949:c.instructions+=6;goto B65d949;
case 0x65d94a:c.instructions+=5;goto B65d94a;
case 0x65d94d:c.instructions+=4;goto B65d94d;
case 0x65d950:c.instructions+=3;goto B65d950;
case 0x65d951:c.instructions+=2;goto B65d951;
case 0x65d954:c.instructions+=1;goto B65d954;
case 0x65d956:goto L65d956;
case 0x65d958:c.instructions+=2;goto B65d958;
case 0x65d959:c.instructions+=1;goto B65d959;
case 0x65d95c:goto L65d95c;
case 0x65d95e:c.instructions+=1;goto B65d95e;
case 0x65d964:goto L65d964;
case 0x65d967:c.instructions+=1;goto B65d967;
case 0x65d96d:goto L65d96d;
case 0x65d970:c.instructions+=1;goto B65d970;
case 0x65d972:goto L65d972;
case 0x65d975:c.instructions+=1;goto B65d975;
case 0x65d97b:goto L65d97b;
case 0x65d97d:c.instructions+=5;goto B65d97d;
case 0x65d980:c.instructions+=4;goto B65d980;
case 0x65d983:c.instructions+=3;goto B65d983;
case 0x65d986:c.instructions+=2;goto B65d986;
case 0x65d988:c.instructions+=1;goto B65d988;
case 0x65d98e:goto L65d98e;
case 0x65d991:c.instructions+=4;goto B65d991;
case 0x65d993:c.instructions+=3;goto B65d993;
case 0x65d995:c.instructions+=2;goto B65d995;
case 0x65d997:c.instructions+=1;goto B65d997;
case 0x65d999:goto L65d999;
case 0x65d99c:c.instructions+=7;goto B65d99c;
case 0x65d99f:c.instructions+=6;goto B65d99f;
case 0x65d9a2:c.instructions+=5;goto B65d9a2;
case 0x65d9a5:c.instructions+=4;goto B65d9a5;
case 0x65d9a8:c.instructions+=3;goto B65d9a8;
case 0x65d9ab:c.instructions+=2;goto B65d9ab;
case 0x65d9ae:c.instructions+=1;goto B65d9ae;
case 0x65d9b3:goto L65d9b3;
case 0x65d9b5:c.instructions+=2;goto B65d9b5;
case 0x65d9b8:c.instructions+=1;goto B65d9b8;
case 0x65d9be:goto L65d9be;
case 0x65d9bf:c.instructions+=2;goto B65d9bf;
case 0x65d9c1:c.instructions+=1;goto B65d9c1;
case 0x65d9c3:goto L65d9c3;
case 0x65d9c6:c.instructions+=1;goto B65d9c6;
case 0x65d9c8:goto L65d9c8;
case 0x65d9cd:goto L65d9cd;
case 0x65d9d0:c.instructions+=1;goto B65d9d0;
case 0x65d9d6:goto L65d9d6;
case 0x65d9dc:goto L65d9dc;
case 0x65d9df:c.instructions+=1;goto B65d9df;
case 0x65d9e5:goto L65d9e5;
case 0x65d9eb:goto L65d9eb;
case 0x65d9ee:c.instructions+=1;goto B65d9ee;
case 0x65d9f0:goto L65d9f0;
case 0x65d9f3:c.instructions+=1;goto B65d9f3;
case 0x65d9f8:goto L65d9f8;
case 0x65d9fa:c.instructions+=1;goto B65d9fa;
case 0x65da00:goto L65da00;
case 0x65da03:c.instructions+=1;goto B65da03;
case 0x65da06:goto L65da06;
case 0x65da09:c.instructions+=2;goto B65da09;
case 0x65da0b:c.instructions+=1;goto B65da0b;
case 0x65da0d:goto L65da0d;
case 0x65da0f:c.instructions+=2;goto B65da0f;
case 0x65da11:c.instructions+=1;goto B65da11;
case 0x65da13:goto L65da13;
case 0x65da15:c.instructions+=3;goto B65da15;
case 0x65da17:c.instructions+=2;goto B65da17;
case 0x65da1a:c.instructions+=1;goto B65da1a;
case 0x65da1d:goto L65da1d;
case 0x65da20:c.instructions+=6;goto B65da20;
case 0x65da23:c.instructions+=5;goto B65da23;
case 0x65da26:c.instructions+=4;goto B65da26;
case 0x65da29:c.instructions+=3;goto B65da29;
case 0x65da2c:c.instructions+=2;goto B65da2c;
case 0x65da2e:c.instructions+=1;goto B65da2e;
case 0x65da30:goto L65da30;
case 0x65da32:c.instructions+=2;goto B65da32;
case 0x65da34:c.instructions+=1;goto B65da34;
case 0x65da36:goto L65da36;
case 0x65da38:c.instructions+=3;goto B65da38;
case 0x65da3a:c.instructions+=2;goto B65da3a;
case 0x65da3d:c.instructions+=1;goto B65da3d;
case 0x65da40:goto L65da40;
case 0x65da43:c.instructions+=6;goto B65da43;
case 0x65da46:c.instructions+=5;goto B65da46;
case 0x65da49:c.instructions+=4;goto B65da49;
case 0x65da4c:c.instructions+=3;goto B65da4c;
case 0x65da4f:c.instructions+=2;goto B65da4f;
case 0x65da52:c.instructions+=1;goto B65da52;
case 0x65da54:goto L65da54;
case 0x65da58:c.instructions+=1;goto B65da58;
case 0x65da5a:goto L65da5a;
case 0x65da5d:c.instructions+=3;goto B65da5d;
case 0x65da5f:c.instructions+=2;goto B65da5f;
case 0x65da60:c.instructions+=1;goto B65da60;
case 0x65da63:goto L65da63;
case 0x65da66:c.instructions+=2;goto B65da66;
case 0x65da68:c.instructions+=1;goto B65da68;
case 0x65da6a:goto L65da6a;
case 0x65da6c:c.instructions+=2;goto B65da6c;
case 0x65da6d:c.instructions+=1;goto B65da6d;
case 0x65da70:goto L65da70;
case 0x65da74:goto L65da74;
case 0x65da77:c.instructions+=2;goto B65da77;
case 0x65da7a:c.instructions+=1;goto B65da7a;
case 0x65da7c:goto L65da7c;
case 0x65da7f:c.instructions+=2;goto B65da7f;
case 0x65da81:c.instructions+=1;goto B65da81;
case 0x65da83:goto L65da83;
case 0x65da85:c.instructions+=2;goto B65da85;
case 0x65da86:c.instructions+=1;goto B65da86;
case 0x65da89:goto L65da89;
case 0x65da8d:goto L65da8d;
case 0x65da91:c.instructions+=1;goto B65da91;
case 0x65da97:goto L65da97;
case 0x65da9a:c.instructions+=4;goto B65da9a;
case 0x65da9d:c.instructions+=3;goto B65da9d;
case 0x65daa0:c.instructions+=2;goto B65daa0;
case 0x65daa3:c.instructions+=1;goto B65daa3;
case 0x65daa9:goto L65daa9;
case 0x65daae:goto L65daae;
case 0x65dab0:c.instructions+=1;goto B65dab0;
case 0x65dab6:goto L65dab6;
case 0x65dab9:c.instructions+=1;goto B65dab9;
case 0x65dabc:goto L65dabc;
case 0x65dabf:c.instructions+=2;goto B65dabf;
case 0x65dac1:c.instructions+=1;goto B65dac1;
case 0x65dac3:goto L65dac3;
case 0x65dac5:c.instructions+=2;goto B65dac5;
case 0x65dac7:c.instructions+=1;goto B65dac7;
case 0x65dac9:goto L65dac9;
case 0x65dacb:c.instructions+=3;goto B65dacb;
case 0x65dacd:c.instructions+=2;goto B65dacd;
case 0x65dad0:c.instructions+=1;goto B65dad0;
case 0x65dad3:goto L65dad3;
case 0x65dad6:c.instructions+=6;goto B65dad6;
case 0x65dad9:c.instructions+=5;goto B65dad9;
case 0x65dadc:c.instructions+=4;goto B65dadc;
case 0x65dadf:c.instructions+=3;goto B65dadf;
case 0x65dae2:c.instructions+=2;goto B65dae2;
case 0x65dae4:c.instructions+=1;goto B65dae4;
case 0x65dae6:goto L65dae6;
case 0x65dae9:c.instructions+=3;goto B65dae9;
case 0x65daeb:c.instructions+=2;goto B65daeb;
case 0x65daed:c.instructions+=1;goto B65daed;
case 0x65daef:goto L65daef;
case 0x65daf2:c.instructions+=4;goto B65daf2;
case 0x65daf4:c.instructions+=3;goto B65daf4;
case 0x65daf6:c.instructions+=2;goto B65daf6;
case 0x65daf9:c.instructions+=1;goto B65daf9;
case 0x65dafc:goto L65dafc;
case 0x65db00:c.instructions+=5;goto B65db00;
case 0x65db03:c.instructions+=4;goto B65db03;
case 0x65db06:c.instructions+=3;goto B65db06;
case 0x65db09:c.instructions+=2;goto B65db09;
case 0x65db0c:c.instructions+=1;goto B65db0c;
case 0x65db0e:goto L65db0e;
case 0x65db11:c.instructions+=3;goto B65db11;
case 0x65db13:c.instructions+=2;goto B65db13;
case 0x65db14:c.instructions+=1;goto B65db14;
case 0x65db17:goto L65db17;
case 0x65db1a:c.instructions+=2;goto B65db1a;
case 0x65db1c:c.instructions+=1;goto B65db1c;
case 0x65db1e:goto L65db1e;
case 0x65db20:c.instructions+=2;goto B65db20;
case 0x65db21:c.instructions+=1;goto B65db21;
case 0x65db24:goto L65db24;
case 0x65db28:goto L65db28;
case 0x65db2b:c.instructions+=6;goto B65db2b;
case 0x65db2e:c.instructions+=5;goto B65db2e;
case 0x65db31:c.instructions+=4;goto B65db31;
case 0x65db34:c.instructions+=3;goto B65db34;
case 0x65db37:c.instructions+=2;goto B65db37;
case 0x65db3a:c.instructions+=1;goto B65db3a;
case 0x65db3c:goto L65db3c;
case 0x65db41:goto L65db41;
case 0x65db43:c.instructions+=1;goto B65db43;
case 0x65db49:goto L65db49;
case 0x65db4c:c.instructions+=2;goto B65db4c;
case 0x65db4e:c.instructions+=1;goto B65db4e;
case 0x65db50:goto L65db50;
case 0x65db53:c.instructions+=3;goto B65db53;
case 0x65db55:c.instructions+=2;goto B65db55;
case 0x65db57:c.instructions+=1;goto B65db57;
case 0x65db59:goto L65db59;
case 0x65db5c:c.instructions+=4;goto B65db5c;
case 0x65db5e:c.instructions+=3;goto B65db5e;
case 0x65db60:c.instructions+=2;goto B65db60;
case 0x65db63:c.instructions+=1;goto B65db63;
case 0x65db66:goto L65db66;
case 0x65db69:c.instructions+=6;goto B65db69;
case 0x65db6c:c.instructions+=5;goto B65db6c;
case 0x65db6f:c.instructions+=4;goto B65db6f;
case 0x65db72:c.instructions+=3;goto B65db72;
case 0x65db75:c.instructions+=2;goto B65db75;
case 0x65db77:c.instructions+=1;goto B65db77;
case 0x65db79:goto L65db79;
case 0x65db7c:c.instructions+=3;goto B65db7c;
case 0x65db7e:c.instructions+=2;goto B65db7e;
case 0x65db80:c.instructions+=1;goto B65db80;
case 0x65db82:goto L65db82;
case 0x65db85:c.instructions+=4;goto B65db85;
case 0x65db87:c.instructions+=3;goto B65db87;
case 0x65db89:c.instructions+=2;goto B65db89;
case 0x65db8c:c.instructions+=1;goto B65db8c;
case 0x65db8f:goto L65db8f;
case 0x65db93:c.instructions+=5;goto B65db93;
case 0x65db96:c.instructions+=4;goto B65db96;
case 0x65db99:c.instructions+=3;goto B65db99;
case 0x65db9c:c.instructions+=2;goto B65db9c;
case 0x65db9f:c.instructions+=1;goto B65db9f;
case 0x65dba1:goto L65dba1;
case 0x65dba4:c.instructions+=3;goto B65dba4;
case 0x65dba6:c.instructions+=2;goto B65dba6;
case 0x65dba7:c.instructions+=1;goto B65dba7;
case 0x65dbaa:goto L65dbaa;
case 0x65dbad:c.instructions+=2;goto B65dbad;
case 0x65dbaf:c.instructions+=1;goto B65dbaf;
case 0x65dbb1:goto L65dbb1;
case 0x65dbb3:c.instructions+=2;goto B65dbb3;
case 0x65dbb4:c.instructions+=1;goto B65dbb4;
case 0x65dbb7:goto L65dbb7;
case 0x65dbbb:goto L65dbbb;
case 0x65dbbe:c.instructions+=7;goto B65dbbe;
case 0x65dbc1:c.instructions+=6;goto B65dbc1;
case 0x65dbc4:c.instructions+=5;goto B65dbc4;
case 0x65dbc7:c.instructions+=4;goto B65dbc7;
case 0x65dbca:c.instructions+=3;goto B65dbca;
case 0x65dbcd:c.instructions+=2;goto B65dbcd;
case 0x65dbd0:c.instructions+=1;goto B65dbd0;
case 0x65dbd2:goto L65dbd2;
case 0x65dbd6:c.instructions+=1;goto B65dbd6;
case 0x65dbd8:goto L65dbd8;
case 0x65dbdb:c.instructions+=2;goto B65dbdb;
case 0x65dbdd:c.instructions+=1;goto B65dbdd;
case 0x65dbdf:goto L65dbdf;
case 0x65dbe1:c.instructions+=2;goto B65dbe1;
case 0x65dbe2:c.instructions+=1;goto B65dbe2;
case 0x65dbe5:goto L65dbe5;
case 0x65dbe9:goto L65dbe9;
case 0x65dbed:c.instructions+=1;goto B65dbed;
case 0x65dbef:goto L65dbef;
case 0x65dbf0:c.instructions+=2;goto B65dbf0;
case 0x65dbf2:c.instructions+=1;goto B65dbf2;
case 0x65dbf7:goto L65dbf7;
case 0x65dbf9:goto L65dbf9;
case 0x65dbfd:c.instructions+=1;goto B65dbfd;
case 0x65dbff:goto L65dbff;
case 0x65dc02:c.instructions+=3;goto B65dc02;
case 0x65dc04:c.instructions+=2;goto B65dc04;
case 0x65dc05:c.instructions+=1;goto B65dc05;
case 0x65dc08:goto L65dc08;
case 0x65dc0b:c.instructions+=2;goto B65dc0b;
case 0x65dc0d:c.instructions+=1;goto B65dc0d;
case 0x65dc0f:goto L65dc0f;
case 0x65dc11:c.instructions+=2;goto B65dc11;
case 0x65dc12:c.instructions+=1;goto B65dc12;
case 0x65dc15:goto L65dc15;
case 0x65dc19:goto L65dc19;
case 0x65dc1c:c.instructions+=7;goto B65dc1c;
case 0x65dc1f:c.instructions+=6;goto B65dc1f;
case 0x65dc22:c.instructions+=5;goto B65dc22;
case 0x65dc25:c.instructions+=4;goto B65dc25;
case 0x65dc28:c.instructions+=3;goto B65dc28;
case 0x65dc2b:c.instructions+=2;goto B65dc2b;
case 0x65dc2e:c.instructions+=1;goto B65dc2e;
case 0x65dc31:goto L65dc31;
case 0x65dc34:c.instructions+=5;goto B65dc34;
case 0x65dc37:c.instructions+=4;goto B65dc37;
case 0x65dc3a:c.instructions+=3;goto B65dc3a;
case 0x65dc3d:c.instructions+=2;goto B65dc3d;
case 0x65dc40:c.instructions+=1;goto B65dc40;
case 0x65dc46:goto L65dc46;
case 0x65dc4b:goto L65dc4b;
case 0x65dc4e:c.instructions+=1;goto B65dc4e;
case 0x65dc50:goto L65dc50;
case 0x65dc52:goto L65dc52;
case 0x65dc55:goto L65dc55;
case 0x65dc5b:goto L65dc5b;
case 0x65dc62:goto L65dc62;
case 0x65dc65:c.instructions+=5;goto B65dc65;
case 0x65dc66:c.instructions+=4;goto B65dc66;
case 0x65dc67:c.instructions+=3;goto B65dc67;
case 0x65dc68:c.instructions+=2;goto B65dc68;
case 0x65dc69:c.instructions+=1;goto B65dc69;
case 0x65dc6c:goto L65dc6c;
case 0x65dc6e:c.instructions+=1;goto B65dc6e;
case 0x65dc74:goto L65dc74;
case 0x65dc77:c.instructions+=2;goto B65dc77;
case 0x65dc79:c.instructions+=1;goto B65dc79;
case 0x65dc7b:goto L65dc7b;
case 0x65dc7e:c.instructions+=3;goto B65dc7e;
case 0x65dc80:c.instructions+=2;goto B65dc80;
case 0x65dc82:c.instructions+=1;goto B65dc82;
case 0x65dc84:goto L65dc84;
case 0x65dc87:c.instructions+=4;goto B65dc87;
case 0x65dc89:c.instructions+=3;goto B65dc89;
case 0x65dc8b:c.instructions+=2;goto B65dc8b;
case 0x65dc8e:c.instructions+=1;goto B65dc8e;
case 0x65dc91:goto L65dc91;
case 0x65dc94:c.instructions+=6;goto B65dc94;
case 0x65dc97:c.instructions+=5;goto B65dc97;
case 0x65dc9a:c.instructions+=4;goto B65dc9a;
case 0x65dc9d:c.instructions+=3;goto B65dc9d;
case 0x65dca0:c.instructions+=2;goto B65dca0;
case 0x65dca2:c.instructions+=1;goto B65dca2;
case 0x65dca4:goto L65dca4;
case 0x65dca7:c.instructions+=3;goto B65dca7;
case 0x65dca9:c.instructions+=2;goto B65dca9;
case 0x65dcab:c.instructions+=1;goto B65dcab;
case 0x65dcad:goto L65dcad;
case 0x65dcb0:c.instructions+=4;goto B65dcb0;
case 0x65dcb2:c.instructions+=3;goto B65dcb2;
case 0x65dcb4:c.instructions+=2;goto B65dcb4;
case 0x65dcb7:c.instructions+=1;goto B65dcb7;
case 0x65dcba:goto L65dcba;
case 0x65dcbe:c.instructions+=5;goto B65dcbe;
case 0x65dcc1:c.instructions+=4;goto B65dcc1;
case 0x65dcc4:c.instructions+=3;goto B65dcc4;
case 0x65dcc7:c.instructions+=2;goto B65dcc7;
case 0x65dcca:c.instructions+=1;goto B65dcca;
case 0x65dccc:goto L65dccc;
case 0x65dccf:c.instructions+=3;goto B65dccf;
case 0x65dcd1:c.instructions+=2;goto B65dcd1;
case 0x65dcd2:c.instructions+=1;goto B65dcd2;
case 0x65dcd5:goto L65dcd5;
case 0x65dcd8:c.instructions+=2;goto B65dcd8;
case 0x65dcda:c.instructions+=1;goto B65dcda;
case 0x65dcdc:goto L65dcdc;
case 0x65dcde:c.instructions+=2;goto B65dcde;
case 0x65dcdf:c.instructions+=1;goto B65dcdf;
case 0x65dce2:goto L65dce2;
case 0x65dce6:goto L65dce6;
case 0x65dce9:c.instructions+=7;goto B65dce9;
case 0x65dcec:c.instructions+=6;goto B65dcec;
case 0x65dcef:c.instructions+=5;goto B65dcef;
case 0x65dcf2:c.instructions+=4;goto B65dcf2;
case 0x65dcf5:c.instructions+=3;goto B65dcf5;
case 0x65dcf8:c.instructions+=2;goto B65dcf8;
case 0x65dcfb:c.instructions+=1;goto B65dcfb;
case 0x65dcfd:goto L65dcfd;
case 0x65dd01:c.instructions+=1;goto B65dd01;
case 0x65dd03:goto L65dd03;
case 0x65dd06:c.instructions+=2;goto B65dd06;
case 0x65dd08:c.instructions+=1;goto B65dd08;
case 0x65dd0a:goto L65dd0a;
case 0x65dd0c:c.instructions+=2;goto B65dd0c;
case 0x65dd0d:c.instructions+=1;goto B65dd0d;
case 0x65dd10:goto L65dd10;
case 0x65dd14:goto L65dd14;
case 0x65dd18:c.instructions+=1;goto B65dd18;
case 0x65dd1e:goto L65dd1e;
case 0x65dd1f:c.instructions+=2;goto B65dd1f;
case 0x65dd21:c.instructions+=1;goto B65dd21;
case 0x65dd26:goto L65dd26;
case 0x65dd28:goto L65dd28;
case 0x65dd2c:c.instructions+=1;goto B65dd2c;
case 0x65dd2e:goto L65dd2e;
case 0x65dd31:c.instructions+=3;goto B65dd31;
case 0x65dd33:c.instructions+=2;goto B65dd33;
case 0x65dd34:c.instructions+=1;goto B65dd34;
case 0x65dd37:goto L65dd37;
case 0x65dd3a:c.instructions+=2;goto B65dd3a;
case 0x65dd3c:c.instructions+=1;goto B65dd3c;
case 0x65dd3e:goto L65dd3e;
case 0x65dd40:c.instructions+=2;goto B65dd40;
case 0x65dd41:c.instructions+=1;goto B65dd41;
case 0x65dd44:goto L65dd44;
case 0x65dd48:goto L65dd48;
case 0x65dd4b:c.instructions+=7;goto B65dd4b;
case 0x65dd4e:c.instructions+=6;goto B65dd4e;
case 0x65dd51:c.instructions+=5;goto B65dd51;
case 0x65dd54:c.instructions+=4;goto B65dd54;
case 0x65dd57:c.instructions+=3;goto B65dd57;
case 0x65dd5a:c.instructions+=2;goto B65dd5a;
case 0x65dd5d:c.instructions+=1;goto B65dd5d;
case 0x65dd60:goto L65dd60;
case 0x65dd63:c.instructions+=5;goto B65dd63;
case 0x65dd66:c.instructions+=4;goto B65dd66;
case 0x65dd69:c.instructions+=3;goto B65dd69;
case 0x65dd6c:c.instructions+=2;goto B65dd6c;
case 0x65dd6f:c.instructions+=1;goto B65dd6f;
case 0x65dd75:goto L65dd75;
case 0x65dd78:c.instructions+=2;goto B65dd78;
case 0x65dd7b:c.instructions+=1;goto B65dd7b;
case 0x65dd80:goto L65dd80;
case 0x65dd83:c.instructions+=4;goto B65dd83;
case 0x65dd87:c.instructions+=3;goto B65dd87;
case 0x65dd8a:c.instructions+=2;goto B65dd8a;
case 0x65dd8b:c.instructions+=1;goto B65dd8b;
case 0x65dd8d:goto L65dd8d;
case 0x65dd8e:c.instructions+=1;goto B65dd8e;
case 0x65dd90:goto L65dd90;
case 0x65dd91:c.instructions+=1;goto B65dd91;
case 0x65dd97:goto L65dd97;
case 0x65dd9a:c.instructions+=8;goto B65dd9a;
case 0x65dd9c:c.instructions+=7;goto B65dd9c;
case 0x65dd9f:c.instructions+=6;goto B65dd9f;
case 0x65dda1:c.instructions+=5;goto B65dda1;
case 0x65dda3:c.instructions+=4;goto B65dda3;
case 0x65dda6:c.instructions+=3;goto B65dda6;
case 0x65dda8:c.instructions+=2;goto B65dda8;
case 0x65ddaa:c.instructions+=1;goto B65ddaa;
case 0x65ddad:goto L65ddad;
case 0x65ddaf:goto L65ddaf;
case 0x65ddb1:c.instructions+=1;goto B65ddb1;
case 0x65ddb4:goto L65ddb4;
case 0x65ddb6:goto L65ddb6;
case 0x65ddb9:c.instructions+=5;goto B65ddb9;
case 0x65ddbb:c.instructions+=4;goto B65ddbb;
case 0x65ddbd:c.instructions+=3;goto B65ddbd;
case 0x65ddc0:c.instructions+=2;goto B65ddc0;
case 0x65ddc3:c.instructions+=1;goto B65ddc3;
case 0x65ddc8:goto L65ddc8;
case 0x65ddca:c.instructions+=15;goto B65ddca;
case 0x65ddcb:c.instructions+=14;goto B65ddcb;
case 0x65ddcd:c.instructions+=13;goto B65ddcd;
case 0x65ddce:c.instructions+=12;goto B65ddce;
case 0x65ddcf:c.instructions+=11;goto B65ddcf;
case 0x65ddd0:c.instructions+=10;goto B65ddd0;
case 0x65ddd1:c.instructions+=9;goto B65ddd1;
case 0x65ddd4:c.instructions+=8;goto B65ddd4;
case 0x65ddd6:c.instructions+=7;goto B65ddd6;
case 0x65ddd8:c.instructions+=6;goto B65ddd8;
case 0x65ddd9:c.instructions+=5;goto B65ddd9;
case 0x65dddb:c.instructions+=4;goto B65dddb;
case 0x65ddde:c.instructions+=3;goto B65ddde;
case 0x65dde0:c.instructions+=2;goto B65dde0;
case 0x65dde2:c.instructions+=1;goto B65dde2;
case 0x65dde8:goto L65dde8;
case 0x65ddeb:c.instructions+=1;goto B65ddeb;
case 0x65ddf1:goto L65ddf1;
case 0x65ddf4:c.instructions+=1;goto B65ddf4;
case 0x65ddfa:goto L65ddfa;
case 0x65ddfd:c.instructions+=1;goto B65ddfd;
case 0x65ddff:goto L65ddff;
case 0x65de02:c.instructions+=1;goto B65de02;
case 0x65de08:goto L65de08;
case 0x65de0c:c.instructions+=5;goto B65de0c;
case 0x65de0f:c.instructions+=4;goto B65de0f;
case 0x65de12:c.instructions+=3;goto B65de12;
case 0x65de15:c.instructions+=2;goto B65de15;
case 0x65de17:c.instructions+=1;goto B65de17;
case 0x65de19:goto L65de19;
case 0x65de1d:c.instructions+=3;goto B65de1d;
case 0x65de21:c.instructions+=2;goto B65de21;
case 0x65de23:c.instructions+=1;goto B65de23;
case 0x65de25:goto L65de25;
case 0x65de27:c.instructions+=3;goto B65de27;
case 0x65de2a:c.instructions+=2;goto B65de2a;
case 0x65de2d:c.instructions+=1;goto B65de2d;
case 0x65de2f:goto L65de2f;
case 0x65de31:c.instructions+=1;goto B65de31;
case 0x65de32:goto L65de32;
case 0x65de35:c.instructions+=6;goto B65de35;
case 0x65de37:c.instructions+=5;goto B65de37;
case 0x65de38:c.instructions+=4;goto B65de38;
case 0x65de3b:c.instructions+=3;goto B65de3b;
case 0x65de3e:c.instructions+=2;goto B65de3e;
case 0x65de3f:c.instructions+=1;goto B65de3f;
case 0x65de44:goto L65de44;
case 0x65de46:c.instructions+=1;goto B65de46;
case 0x65de4c:goto L65de4c;
case 0x65de4f:c.instructions+=3;goto B65de4f;
case 0x65de52:c.instructions+=2;goto B65de52;
case 0x65de55:c.instructions+=1;goto B65de55;
case 0x65de57:goto L65de57;
case 0x65de5a:c.instructions+=1;goto B65de5a;
case 0x65de5c:goto L65de5c;
case 0x65de5e:c.instructions+=1;goto B65de5e;
case 0x65de63:goto L65de63;
case 0x65de66:c.instructions+=1;goto B65de66;
case 0x65de6c:goto L65de6c;
case 0x65de72:goto L65de72;
case 0x65de75:c.instructions+=1;goto B65de75;
case 0x65de7b:goto L65de7b;
case 0x65de7e:c.instructions+=1;goto B65de7e;
case 0x65de80:goto L65de80;
case 0x65de83:c.instructions+=1;goto B65de83;
case 0x65de89:goto L65de89;
case 0x65de8c:c.instructions+=1;goto B65de8c;
case 0x65de92:goto L65de92;
case 0x65de95:c.instructions+=1;goto B65de95;
case 0x65de98:goto L65de98;
case 0x65de9b:c.instructions+=10;goto B65de9b;
case 0x65de9e:c.instructions+=9;goto B65de9e;
case 0x65dea4:c.instructions+=8;goto B65dea4;
case 0x65dea7:c.instructions+=7;goto B65dea7;
case 0x65deaa:c.instructions+=6;goto B65deaa;
case 0x65deac:c.instructions+=5;goto B65deac;
case 0x65deae:c.instructions+=4;goto B65deae;
case 0x65deb0:c.instructions+=3;goto B65deb0;
case 0x65deb2:c.instructions+=2;goto B65deb2;
case 0x65deb4:c.instructions+=1;goto B65deb4;
case 0x65deb9:goto L65deb9;
case 0x65debb:c.instructions+=1;goto B65debb;
case 0x65dec1:goto L65dec1;
case 0x65dec4:c.instructions+=3;goto B65dec4;
case 0x65dec7:c.instructions+=2;goto B65dec7;
case 0x65deca:c.instructions+=1;goto B65deca;
case 0x65decc:goto L65decc;
case 0x65ded1:goto L65ded1;
case 0x65ded4:c.instructions+=1;goto B65ded4;
case 0x65deda:goto L65deda;
case 0x65dedd:c.instructions+=1;goto B65dedd;
case 0x65dee0:goto L65dee0;
case 0x65dee3:c.instructions+=10;goto B65dee3;
case 0x65dee6:c.instructions+=9;goto B65dee6;
case 0x65deec:c.instructions+=8;goto B65deec;
case 0x65deef:c.instructions+=7;goto B65deef;
case 0x65def2:c.instructions+=6;goto B65def2;
case 0x65def4:c.instructions+=5;goto B65def4;
case 0x65def6:c.instructions+=4;goto B65def6;
case 0x65def8:c.instructions+=3;goto B65def8;
case 0x65defa:c.instructions+=2;goto B65defa;
case 0x65defc:c.instructions+=1;goto B65defc;
case 0x65df01:goto L65df01;
case 0x65df03:c.instructions+=1;goto B65df03;
case 0x65df09:goto L65df09;
case 0x65df0c:c.instructions+=3;goto B65df0c;
case 0x65df0f:c.instructions+=2;goto B65df0f;
case 0x65df12:c.instructions+=1;goto B65df12;
case 0x65df14:goto L65df14;
case 0x65df19:goto L65df19;
case 0x65df1c:c.instructions+=1;goto B65df1c;
case 0x65df1e:goto L65df1e;
case 0x65df21:c.instructions+=1;goto B65df21;
case 0x65df24:goto L65df24;
case 0x65df27:c.instructions+=10;goto B65df27;
case 0x65df2a:c.instructions+=9;goto B65df2a;
case 0x65df30:c.instructions+=8;goto B65df30;
case 0x65df33:c.instructions+=7;goto B65df33;
case 0x65df36:c.instructions+=6;goto B65df36;
case 0x65df38:c.instructions+=5;goto B65df38;
case 0x65df3a:c.instructions+=4;goto B65df3a;
case 0x65df3c:c.instructions+=3;goto B65df3c;
case 0x65df3e:c.instructions+=2;goto B65df3e;
case 0x65df40:c.instructions+=1;goto B65df40;
case 0x65df45:goto L65df45;
case 0x65df47:c.instructions+=1;goto B65df47;
case 0x65df4d:goto L65df4d;
case 0x65df50:c.instructions+=3;goto B65df50;
case 0x65df53:c.instructions+=2;goto B65df53;
case 0x65df56:c.instructions+=1;goto B65df56;
case 0x65df58:goto L65df58;
case 0x65df5a:goto L65df5a;
case 0x65df5d:c.instructions+=1;goto B65df5d;
case 0x65df5f:goto L65df5f;
case 0x65df62:c.instructions+=1;goto B65df62;
case 0x65df65:goto L65df65;
case 0x65df68:c.instructions+=10;goto B65df68;
case 0x65df6b:c.instructions+=9;goto B65df6b;
case 0x65df71:c.instructions+=8;goto B65df71;
case 0x65df74:c.instructions+=7;goto B65df74;
case 0x65df77:c.instructions+=6;goto B65df77;
case 0x65df79:c.instructions+=5;goto B65df79;
case 0x65df7b:c.instructions+=4;goto B65df7b;
case 0x65df7d:c.instructions+=3;goto B65df7d;
case 0x65df7f:c.instructions+=2;goto B65df7f;
case 0x65df81:c.instructions+=1;goto B65df81;
case 0x65df86:goto L65df86;
case 0x65df88:c.instructions+=1;goto B65df88;
case 0x65df8e:goto L65df8e;
case 0x65df91:c.instructions+=3;goto B65df91;
case 0x65df94:c.instructions+=2;goto B65df94;
case 0x65df97:c.instructions+=1;goto B65df97;
case 0x65df99:goto L65df99;
case 0x65df9c:goto L65df9c;
case 0x65df9f:c.instructions+=1;goto B65df9f;
case 0x65dfa4:goto L65dfa4;
case 0x65dfa5:c.instructions+=4;goto B65dfa5;
case 0x65dfa8:c.instructions+=3;goto B65dfa8;
case 0x65dfab:c.instructions+=2;goto B65dfab;
case 0x65dfae:c.instructions+=1;goto B65dfae;
case 0x65dfb4:goto L65dfb4;
case 0x65dfb5:c.instructions+=1;goto B65dfb5;
case 0x65dfb7:goto L65dfb7;
case 0x65dfb8:c.instructions+=1;goto B65dfb8;
case 0x65dfbe:goto L65dfbe;
case 0x65dfc1:c.instructions+=2;goto B65dfc1;
case 0x65dfc3:c.instructions+=1;goto B65dfc3;
case 0x65dfc9:goto L65dfc9;
case 0x65dfcb:c.instructions+=6;goto B65dfcb;
case 0x65dfce:c.instructions+=5;goto B65dfce;
case 0x65dfd1:c.instructions+=4;goto B65dfd1;
case 0x65dfd4:c.instructions+=3;goto B65dfd4;
case 0x65dfd8:c.instructions+=2;goto B65dfd8;
case 0x65dfda:c.instructions+=1;goto B65dfda;
case 0x65dfdc:goto L65dfdc;
case 0x65dfde:c.instructions+=1;goto B65dfde;
case 0x65dfe0:goto L65dfe0;
case 0x65dfe3:c.instructions+=12;goto B65dfe3;
case 0x65dfe5:c.instructions+=11;goto B65dfe5;
case 0x65dfe7:c.instructions+=10;goto B65dfe7;
case 0x65dfea:c.instructions+=9;goto B65dfea;
case 0x65dfed:c.instructions+=8;goto B65dfed;
case 0x65dff0:c.instructions+=7;goto B65dff0;
case 0x65dff3:c.instructions+=6;goto B65dff3;
case 0x65dff5:c.instructions+=5;goto B65dff5;
case 0x65dff8:c.instructions+=4;goto B65dff8;
case 0x65dffb:c.instructions+=3;goto B65dffb;
case 0x65dffd:c.instructions+=2;goto B65dffd;
case 0x65dfff:c.instructions+=1;goto B65dfff;
default:missing_instruction(c.pc);}
B65d000:L65d000:{c.instructions+=6;NFSU2_TR(0x65d000);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65d002:{NFSU2_TR(0x65d002);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B65d003:{NFSU2_TR(0x65d003);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d004:{NFSU2_TR(0x65d004);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d005:{NFSU2_TR(0x65d005);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d006:{NFSU2_TR(0x65d006);
if(r1(R+518)){{goto L65d0b2;}}
}
B65d00c:L65d00c:{c.instructions+=2;NFSU2_TR(0x65d00c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B65d00d:{NFSU2_TR(0x65d00d);
if(r1(R+518)){{goto L65d065;}}
}
B65d00f:L65d00f:{c.instructions+=2;NFSU2_TR(0x65d00f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B65d010:{NFSU2_TR(0x65d010);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65d102;}}
}
B65d016:L65d016:{c.instructions+=3;NFSU2_TR(0x65d016);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65d019:{NFSU2_TR(0x65d019);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65d01b:{NFSU2_TR(0x65d01b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65d102;}}
}
B65d021:L65d021:{c.instructions+=5;NFSU2_TR(0x65d021);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65d024:{NFSU2_TR(0x65d024);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d026:{NFSU2_TR(0x65d026);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x20ull))));
}
B65d029:{NFSU2_TR(0x65d029);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d02c:{NFSU2_TR(0x65d02c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65d02d:L65d02d:{c.instructions+=3;NFSU2_TR(0x65d02d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65d030:{NFSU2_TR(0x65d030);
__builtin_memmove((R+4),(R+8),4);
}
B65d032:{NFSU2_TR(0x65d032);
__builtin_memmove((R+28),(R+24),4);
}
B65d034:L65d034:{c.instructions+=15;NFSU2_TR(0x65d034);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65d037:{NFSU2_TR(0x65d037);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B65d039:{NFSU2_TR(0x65d039);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65d03c:{NFSU2_TR(0x65d03c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B65d03e:{NFSU2_TR(0x65d03e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B65d040:{NFSU2_TR(0x65d040);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B65d042:{NFSU2_TR(0x65d042);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B65d044:{NFSU2_TR(0x65d044);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B65d046:{NFSU2_TR(0x65d046);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65d049:{NFSU2_TR(0x65d049);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B65d04b:{NFSU2_TR(0x65d04b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B65d04d:{NFSU2_TR(0x65d04d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B65d04f:{NFSU2_TR(0x65d04f);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B65d051:{NFSU2_TR(0x65d051);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B65d052:{NFSU2_TR(0x65d052);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d034u);}goto L65d034;}}
}
B65d054:L65d054:{c.instructions+=4;NFSU2_TR(0x65d054);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65d058:{NFSU2_TR(0x65d058);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x40ull))));
}
B65d05b:{NFSU2_TR(0x65d05b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65d05e:{NFSU2_TR(0x65d05e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d02du);}goto L65d02d;}}
}
B65d060:L65d060:{c.instructions+=1;NFSU2_TR(0x65d060);
{goto L65d102;}
}
B65d065:L65d065:{c.instructions+=3;NFSU2_TR(0x65d065);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65d068:{NFSU2_TR(0x65d068);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65d06a:{NFSU2_TR(0x65d06a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65d102;}}
}
B65d070:L65d070:{c.instructions+=3;NFSU2_TR(0x65d070);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d072:{NFSU2_TR(0x65d072);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d075:{NFSU2_TR(0x65d075);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65d076:L65d076:{c.instructions+=4;NFSU2_TR(0x65d076);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65d079:{NFSU2_TR(0x65d079);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65d07c:{NFSU2_TR(0x65d07c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d07f:{NFSU2_TR(0x65d07f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d082:L65d082:{c.instructions+=2;NFSU2_TR(0x65d082);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65d085:{NFSU2_TR(0x65d085);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d088:L65d088:{c.instructions+=2;NFSU2_TR(0x65d088);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B65d08a:{NFSU2_TR(0x65d08a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65d08full));
TAIL_STATIC(0x75dd28u,75d);
}
B65d08f:L65d08f:{c.instructions+=5;NFSU2_TR(0x65d08f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B65d091:{NFSU2_TR(0x65d091);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+24))));
}
B65d093:{NFSU2_TR(0x65d093);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B65d096:{NFSU2_TR(0x65d096);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65d099:{NFSU2_TR(0x65d099);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d088u);}goto L65d088;}}
}
B65d09b:L65d09b:{c.instructions+=3;NFSU2_TR(0x65d09b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B65d09e:{NFSU2_TR(0x65d09e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65d0a1:{NFSU2_TR(0x65d0a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d082u);}goto L65d082;}}
}
B65d0a3:L65d0a3:{c.instructions+=4;NFSU2_TR(0x65d0a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65d0a7:{NFSU2_TR(0x65d0a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65d0ab:{NFSU2_TR(0x65d0ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65d0ae:{NFSU2_TR(0x65d0ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d076u);}goto L65d076;}}
}
B65d0b0:L65d0b0:{c.instructions+=1;NFSU2_TR(0x65d0b0);
{goto L65d102;}
}
B65d0b2:L65d0b2:{c.instructions+=3;NFSU2_TR(0x65d0b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65d0b5:{NFSU2_TR(0x65d0b5);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65d0b7:{NFSU2_TR(0x65d0b7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65d102;}}
}
B65d0b9:L65d0b9:{c.instructions+=3;NFSU2_TR(0x65d0b9);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d0bb:{NFSU2_TR(0x65d0bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d0be:{NFSU2_TR(0x65d0be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65d0bf:L65d0bf:{c.instructions+=3;NFSU2_TR(0x65d0bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65d0c2:{NFSU2_TR(0x65d0c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65d0c5:{NFSU2_TR(0x65d0c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d0c8:L65d0c8:{c.instructions+=2;NFSU2_TR(0x65d0c8);
__builtin_memmove((R+4),(R+12),4);
}
B65d0ca:{NFSU2_TR(0x65d0ca);
__builtin_memmove((R+8),(R+24),4);
}
B65d0cc:L65d0cc:{c.instructions+=6;NFSU2_TR(0x65d0cc);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B65d0ce:{NFSU2_TR(0x65d0ce);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B65d0d4:{NFSU2_TR(0x65d0d4);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B65d0d6:{NFSU2_TR(0x65d0d6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B65d0d8:{NFSU2_TR(0x65d0d8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B65d0db:{NFSU2_TR(0x65d0db);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L65d0e2;}}
}
B65d0dd:L65d0dd:{c.instructions+=3;NFSU2_TR(0x65d0dd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65d0df:{NFSU2_TR(0x65d0df);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B65d0e0:{NFSU2_TR(0x65d0e0);
{goto L65d0e4;}
}
B65d0e2:L65d0e2:{c.instructions+=1;NFSU2_TR(0x65d0e2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65d0e4:L65d0e4:{c.instructions+=5;NFSU2_TR(0x65d0e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B65d0e6:{NFSU2_TR(0x65d0e6);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B65d0e8:{NFSU2_TR(0x65d0e8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B65d0eb:{NFSU2_TR(0x65d0eb);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B65d0ec:{NFSU2_TR(0x65d0ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d0ccu);}goto L65d0cc;}}
}
B65d0ee:L65d0ee:{c.instructions+=3;NFSU2_TR(0x65d0ee);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+24))));
}
B65d0f0:{NFSU2_TR(0x65d0f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65d0f3:{NFSU2_TR(0x65d0f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d0c8u);}goto L65d0c8;}}
}
B65d0f5:L65d0f5:{c.instructions+=4;NFSU2_TR(0x65d0f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65d0f9:{NFSU2_TR(0x65d0f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65d0fd:{NFSU2_TR(0x65d0fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65d100:{NFSU2_TR(0x65d100);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d0bfu);}goto L65d0bf;}}
}
B65d102:L65d102:{c.instructions+=6;NFSU2_TR(0x65d102);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65d103:{NFSU2_TR(0x65d103);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65d104:{NFSU2_TR(0x65d104);
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
B65d106:{NFSU2_TR(0x65d106);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65d107:{NFSU2_TR(0x65d107);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B65d108:{NFSU2_TR(0x65d108);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65d10b:L65d10b:{c.instructions+=17;NFSU2_TR(0x65d10b);
__builtin_memmove((R+28),(R+28),4);
}
B65d10d:{NFSU2_TR(0x65d10d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d10e:{NFSU2_TR(0x65d10e);
__builtin_memmove((R+20),(R+16),4);
}
B65d110:{NFSU2_TR(0x65d110);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B65d113:{NFSU2_TR(0x65d113);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65d116:{NFSU2_TR(0x65d116);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B65d118:{NFSU2_TR(0x65d118);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65d11b:{NFSU2_TR(0x65d11b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65d11e:{NFSU2_TR(0x65d11e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65d122:{NFSU2_TR(0x65d122);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d123:{NFSU2_TR(0x65d123);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d124:{NFSU2_TR(0x65d124);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d125:{NFSU2_TR(0x65d125);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d127:{NFSU2_TR(0x65d127);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65d128:{NFSU2_TR(0x65d128);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65d12a:{NFSU2_TR(0x65d12a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d12d:{NFSU2_TR(0x65d12d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L65d132;}}
}
B65d12f:L65d12f:{c.instructions+=1;NFSU2_TR(0x65d12f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d132:L65d132:{c.instructions+=3;NFSU2_TR(0x65d132);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65d134:{NFSU2_TR(0x65d134);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d137:{NFSU2_TR(0x65d137);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L65d13c;}}
}
B65d139:L65d139:{c.instructions+=1;NFSU2_TR(0x65d139);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d13c:L65d13c:{c.instructions+=2;NFSU2_TR(0x65d13c);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B65d13d:{NFSU2_TR(0x65d13d);
if(r1(R+518)){{goto L65d218;}}
}
B65d143:L65d143:{c.instructions+=2;NFSU2_TR(0x65d143);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B65d144:{NFSU2_TR(0x65d144);
if(r1(R+518)){{goto L65d1b8;}}
}
B65d146:L65d146:{c.instructions+=2;NFSU2_TR(0x65d146);
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
B65d147:{NFSU2_TR(0x65d147);
if(r1(R+518)){{goto L65d155;}}
}
B65d149:L65d149:{c.instructions+=2;NFSU2_TR(0x65d149);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B65d150:{NFSU2_TR(0x65d150);
{goto L65d280;}
}
B65d155:L65d155:{c.instructions+=8;NFSU2_TR(0x65d155);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65d158:{NFSU2_TR(0x65d158);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65d15b:{NFSU2_TR(0x65d15b);
__builtin_memmove((R+4),(R+8),4);
}
B65d15d:{NFSU2_TR(0x65d15d);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B65d160:{NFSU2_TR(0x65d160);
__builtin_memmove((R+24),(R+4),4);
}
B65d162:{NFSU2_TR(0x65d162);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B65d165:{NFSU2_TR(0x65d165);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65d167:{NFSU2_TR(0x65d167);
__builtin_memmove((R+28),(R+12),4);
}
B65d169:L65d169:{c.instructions+=1;NFSU2_TR(0x65d169);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L65d16b;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d169u);}goto L65d169;}
}
B65d16b:L65d16b:{c.instructions+=3;NFSU2_TR(0x65d16b);
__builtin_memmove((R+4),(R+24),4);
}
B65d16d:{NFSU2_TR(0x65d16d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B65d170:{NFSU2_TR(0x65d170);
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
B65d172:L65d172:{c.instructions+=1;NFSU2_TR(0x65d172);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L65d174;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d172u);}goto L65d172;}
}
B65d174:L65d174:{c.instructions+=1;NFSU2_TR(0x65d174);
if(r1(R+518)){{goto L65d280;}}
}
B65d17a:L65d17a:{c.instructions+=1;NFSU2_TR(0x65d17a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d17d:L65d17d:{c.instructions+=2;NFSU2_TR(0x65d17d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65d181:{NFSU2_TR(0x65d181);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65d1a7;}}
}
B65d183:L65d183:{c.instructions+=2;NFSU2_TR(0x65d183);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65d186:{NFSU2_TR(0x65d186);
__builtin_memmove((R+24),(R+12),4);
}
B65d188:L65d188:{c.instructions+=3;NFSU2_TR(0x65d188);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65d18b:{NFSU2_TR(0x65d18b);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65d18d:{NFSU2_TR(0x65d18d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65d1a1;}}
}
B65d18f:L65d18f:{c.instructions+=3;NFSU2_TR(0x65d18f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65d192:{NFSU2_TR(0x65d192);
__builtin_memmove((R+0),(R+24),4);
}
B65d194:{NFSU2_TR(0x65d194);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B65d196:L65d196:{c.instructions+=5;NFSU2_TR(0x65d196);
{u32 ea_=u32(r4(R+0)+r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B65d199:{NFSU2_TR(0x65d199);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B65d19b:{NFSU2_TR(0x65d19b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B65d19e:{NFSU2_TR(0x65d19e);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B65d19f:{NFSU2_TR(0x65d19f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d196u);}goto L65d196;}}
}
B65d1a1:L65d1a1:{c.instructions+=3;NFSU2_TR(0x65d1a1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B65d1a4:{NFSU2_TR(0x65d1a4);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B65d1a5:{NFSU2_TR(0x65d1a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d188u);}goto L65d188;}}
}
B65d1a7:L65d1a7:{c.instructions+=4;NFSU2_TR(0x65d1a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65d1ab:{NFSU2_TR(0x65d1ab);
w1(R+512,carry<u32>(r4(R+12),u32(0x40ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x40ull))));
}
B65d1ae:{NFSU2_TR(0x65d1ae);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
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
B65d1b1:{NFSU2_TR(0x65d1b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d17du);}goto L65d17d;}}
}
B65d1b3:L65d1b3:{c.instructions+=1;NFSU2_TR(0x65d1b3);
{goto L65d280;}
}
B65d1b8:L65d1b8:{c.instructions+=8;NFSU2_TR(0x65d1b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65d1bb:{NFSU2_TR(0x65d1bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65d1be:{NFSU2_TR(0x65d1be);
__builtin_memmove((R+4),(R+8),4);
}
B65d1c0:{NFSU2_TR(0x65d1c0);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B65d1c3:{NFSU2_TR(0x65d1c3);
__builtin_memmove((R+24),(R+4),4);
}
B65d1c5:{NFSU2_TR(0x65d1c5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B65d1c8:{NFSU2_TR(0x65d1c8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65d1ca:{NFSU2_TR(0x65d1ca);
__builtin_memmove((R+28),(R+12),4);
}
B65d1cc:L65d1cc:{c.instructions+=1;NFSU2_TR(0x65d1cc);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L65d1ce;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d1ccu);}goto L65d1cc;}
}
B65d1ce:L65d1ce:{c.instructions+=3;NFSU2_TR(0x65d1ce);
__builtin_memmove((R+4),(R+24),4);
}
B65d1d0:{NFSU2_TR(0x65d1d0);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B65d1d3:{NFSU2_TR(0x65d1d3);
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
B65d1d5:L65d1d5:{c.instructions+=1;NFSU2_TR(0x65d1d5);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L65d1d7;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d1d5u);}goto L65d1d5;}
}
B65d1d7:L65d1d7:{c.instructions+=1;NFSU2_TR(0x65d1d7);
if(r1(R+518)){{goto L65d280;}}
}
B65d1dd:L65d1dd:{c.instructions+=1;NFSU2_TR(0x65d1dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d1e0:L65d1e0:{c.instructions+=2;NFSU2_TR(0x65d1e0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65d1e4:{NFSU2_TR(0x65d1e4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65d20a;}}
}
B65d1e6:L65d1e6:{c.instructions+=2;NFSU2_TR(0x65d1e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65d1e9:{NFSU2_TR(0x65d1e9);
__builtin_memmove((R+24),(R+12),4);
}
B65d1eb:L65d1eb:{c.instructions+=3;NFSU2_TR(0x65d1eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65d1ee:{NFSU2_TR(0x65d1ee);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65d1f0:{NFSU2_TR(0x65d1f0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65d204;}}
}
B65d1f2:L65d1f2:{c.instructions+=3;NFSU2_TR(0x65d1f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65d1f5:{NFSU2_TR(0x65d1f5);
__builtin_memmove((R+0),(R+24),4);
}
B65d1f7:{NFSU2_TR(0x65d1f7);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B65d1f9:L65d1f9:{c.instructions+=5;NFSU2_TR(0x65d1f9);
{u32 ea_=u32(r4(R+4)+r4(R+0));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B65d1fc:{NFSU2_TR(0x65d1fc);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B65d1fe:{NFSU2_TR(0x65d1fe);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B65d201:{NFSU2_TR(0x65d201);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B65d202:{NFSU2_TR(0x65d202);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d1f9u);}goto L65d1f9;}}
}
B65d204:L65d204:{c.instructions+=3;NFSU2_TR(0x65d204);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B65d207:{NFSU2_TR(0x65d207);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B65d208:{NFSU2_TR(0x65d208);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d1ebu);}goto L65d1eb;}}
}
B65d20a:L65d20a:{c.instructions+=4;NFSU2_TR(0x65d20a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65d20e:{NFSU2_TR(0x65d20e);
w1(R+512,carry<u32>(r4(R+12),u32(0x40ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x40ull))));
}
B65d211:{NFSU2_TR(0x65d211);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
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
B65d214:{NFSU2_TR(0x65d214);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d1e0u);}goto L65d1e0;}}
}
B65d216:L65d216:{c.instructions+=1;NFSU2_TR(0x65d216);
{goto L65d280;}
}
B65d218:L65d218:{c.instructions+=8;NFSU2_TR(0x65d218);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65d21b:{NFSU2_TR(0x65d21b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65d21e:{NFSU2_TR(0x65d21e);
__builtin_memmove((R+4),(R+24),4);
}
B65d220:{NFSU2_TR(0x65d220);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B65d223:{NFSU2_TR(0x65d223);
__builtin_memmove((R+12),(R+4),4);
}
B65d225:{NFSU2_TR(0x65d225);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B65d228:{NFSU2_TR(0x65d228);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65d22a:{NFSU2_TR(0x65d22a);
__builtin_memmove((R+28),(R+8),4);
}
B65d22c:L65d22c:{c.instructions+=1;NFSU2_TR(0x65d22c);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L65d22e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d22cu);}goto L65d22c;}
}
B65d22e:L65d22e:{c.instructions+=3;NFSU2_TR(0x65d22e);
__builtin_memmove((R+4),(R+12),4);
}
B65d230:{NFSU2_TR(0x65d230);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B65d233:{NFSU2_TR(0x65d233);
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
B65d235:L65d235:{c.instructions+=1;NFSU2_TR(0x65d235);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L65d237;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d235u);}goto L65d235;}
}
B65d237:L65d237:{c.instructions+=1;NFSU2_TR(0x65d237);
if(r1(R+518)){{goto L65d280;}}
}
B65d239:L65d239:{c.instructions+=1;NFSU2_TR(0x65d239);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d23c:L65d23c:{c.instructions+=3;NFSU2_TR(0x65d23c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65d23f:{NFSU2_TR(0x65d23f);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65d241:{NFSU2_TR(0x65d241);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65d274;}}
}
B65d243:L65d243:{c.instructions+=2;NFSU2_TR(0x65d243);
__builtin_memmove((R+28),(R+8),4);
}
B65d245:{NFSU2_TR(0x65d245);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d248:L65d248:{c.instructions+=3;NFSU2_TR(0x65d248);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65d24b:{NFSU2_TR(0x65d24b);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65d24d:{NFSU2_TR(0x65d24d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65d26c;}}
}
B65d24f:L65d24f:{c.instructions+=3;NFSU2_TR(0x65d24f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65d252:{NFSU2_TR(0x65d252);
__builtin_memmove((R+0),(R+28),4);
}
B65d254:{NFSU2_TR(0x65d254);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B65d256:L65d256:{c.instructions+=9;NFSU2_TR(0x65d256);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B65d258:{NFSU2_TR(0x65d258);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B65d25b:{NFSU2_TR(0x65d25b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+12),(U+0),1);
}
B65d25e:{NFSU2_TR(0x65d25e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d261:{NFSU2_TR(0x65d261);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B65d264:{NFSU2_TR(0x65d264);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B65d266:{NFSU2_TR(0x65d266);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B65d269:{NFSU2_TR(0x65d269);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B65d26a:{NFSU2_TR(0x65d26a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d256u);}goto L65d256;}}
}
B65d26c:L65d26c:{c.instructions+=3;NFSU2_TR(0x65d26c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B65d26f:{NFSU2_TR(0x65d26f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65d272:{NFSU2_TR(0x65d272);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d248u);}goto L65d248;}}
}
B65d274:L65d274:{c.instructions+=4;NFSU2_TR(0x65d274);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65d278:{NFSU2_TR(0x65d278);
w1(R+512,carry<u32>(r4(R+8),u32(0x40ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x40ull))));
}
B65d27b:{NFSU2_TR(0x65d27b);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
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
B65d27e:{NFSU2_TR(0x65d27e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d23cu);}goto L65d23c;}}
}
B65d280:L65d280:{c.instructions+=6;NFSU2_TR(0x65d280);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65d283:{NFSU2_TR(0x65d283);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65d284:{NFSU2_TR(0x65d284);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65d285:{NFSU2_TR(0x65d285);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65d286:{NFSU2_TR(0x65d286);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B65d287:{NFSU2_TR(0x65d287);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65d28a:L65d28a:{c.instructions+=17;NFSU2_TR(0x65d28a);
__builtin_memmove((R+28),(R+28),4);
}
B65d28c:{NFSU2_TR(0x65d28c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d28d:{NFSU2_TR(0x65d28d);
__builtin_memmove((R+20),(R+16),4);
}
B65d28f:{NFSU2_TR(0x65d28f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B65d292:{NFSU2_TR(0x65d292);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65d295:{NFSU2_TR(0x65d295);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65d298:{NFSU2_TR(0x65d298);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65d29c:{NFSU2_TR(0x65d29c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B65d29e:{NFSU2_TR(0x65d29e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65d2a1:{NFSU2_TR(0x65d2a1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d2a2:{NFSU2_TR(0x65d2a2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d2a3:{NFSU2_TR(0x65d2a3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d2a4:{NFSU2_TR(0x65d2a4);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d2a6:{NFSU2_TR(0x65d2a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65d2a7:{NFSU2_TR(0x65d2a7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65d2a9:{NFSU2_TR(0x65d2a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d2ac:{NFSU2_TR(0x65d2ac);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L65d2b1;}}
}
B65d2ae:L65d2ae:{c.instructions+=1;NFSU2_TR(0x65d2ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d2b1:L65d2b1:{c.instructions+=3;NFSU2_TR(0x65d2b1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65d2b3:{NFSU2_TR(0x65d2b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d2b6:{NFSU2_TR(0x65d2b6);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L65d2bb;}}
}
B65d2b8:L65d2b8:{c.instructions+=1;NFSU2_TR(0x65d2b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d2bb:L65d2bb:{c.instructions+=2;NFSU2_TR(0x65d2bb);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B65d2bc:{NFSU2_TR(0x65d2bc);
if(r1(R+518)){{goto L65d3a4;}}
}
B65d2c2:L65d2c2:{c.instructions+=2;NFSU2_TR(0x65d2c2);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B65d2c3:{NFSU2_TR(0x65d2c3);
if(r1(R+518)){{goto L65d341;}}
}
B65d2c5:L65d2c5:{c.instructions+=2;NFSU2_TR(0x65d2c5);
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
B65d2c6:{NFSU2_TR(0x65d2c6);
if(r1(R+518)){{goto L65d2d4;}}
}
B65d2c8:L65d2c8:{c.instructions+=2;NFSU2_TR(0x65d2c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B65d2cf:{NFSU2_TR(0x65d2cf);
{goto L65d413;}
}
B65d2d4:L65d2d4:{c.instructions+=7;NFSU2_TR(0x65d2d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65d2d7:{NFSU2_TR(0x65d2d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65d2da:{NFSU2_TR(0x65d2da);
__builtin_memmove((R+4),(R+8),4);
}
B65d2dc:{NFSU2_TR(0x65d2dc);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B65d2df:{NFSU2_TR(0x65d2df);
__builtin_memmove((R+24),(R+4),4);
}
B65d2e1:{NFSU2_TR(0x65d2e1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B65d2e4:{NFSU2_TR(0x65d2e4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65d2e6:L65d2e6:{c.instructions+=1;NFSU2_TR(0x65d2e6);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L65d2e8;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d2e6u);}goto L65d2e6;}
}
B65d2e8:L65d2e8:{c.instructions+=3;NFSU2_TR(0x65d2e8);
__builtin_memmove((R+4),(R+24),4);
}
B65d2ea:{NFSU2_TR(0x65d2ea);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B65d2ed:{NFSU2_TR(0x65d2ed);
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
B65d2ef:L65d2ef:{c.instructions+=1;NFSU2_TR(0x65d2ef);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L65d2f1;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d2efu);}goto L65d2ef;}
}
B65d2f1:L65d2f1:{c.instructions+=1;NFSU2_TR(0x65d2f1);
if(r1(R+518)){{goto L65d413;}}
}
B65d2f7:L65d2f7:{c.instructions+=1;NFSU2_TR(0x65d2f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d2fa:L65d2fa:{c.instructions+=3;NFSU2_TR(0x65d2fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65d2fd:{NFSU2_TR(0x65d2fd);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65d2ff:{NFSU2_TR(0x65d2ff);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65d32f;}}
}
B65d301:L65d301:{c.instructions+=3;NFSU2_TR(0x65d301);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65d304:{NFSU2_TR(0x65d304);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65d307:{NFSU2_TR(0x65d307);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d30a:L65d30a:{c.instructions+=3;NFSU2_TR(0x65d30a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65d30d:{NFSU2_TR(0x65d30d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65d30f:{NFSU2_TR(0x65d30f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65d325;}}
}
B65d311:L65d311:{c.instructions+=2;NFSU2_TR(0x65d311);
__builtin_memmove((R+4),(R+24),4);
}
B65d313:{NFSU2_TR(0x65d313);
__builtin_memmove((R+0),(R+28),4);
}
B65d315:L65d315:{c.instructions+=6;NFSU2_TR(0x65d315);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B65d317:{NFSU2_TR(0x65d317);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B65d319:{NFSU2_TR(0x65d319);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B65d31c:{NFSU2_TR(0x65d31c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B65d31f:{NFSU2_TR(0x65d31f);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B65d320:{NFSU2_TR(0x65d320);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d315u);}goto L65d315;}}
}
B65d322:L65d322:{c.instructions+=2;NFSU2_TR(0x65d322);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d324:{NFSU2_TR(0x65d324);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65d325:L65d325:{c.instructions+=4;NFSU2_TR(0x65d325);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B65d328:{NFSU2_TR(0x65d328);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B65d32a:{NFSU2_TR(0x65d32a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65d32d:{NFSU2_TR(0x65d32d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d30au);}goto L65d30a;}}
}
B65d32f:L65d32f:{c.instructions+=4;NFSU2_TR(0x65d32f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65d333:{NFSU2_TR(0x65d333);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),u32(0x40ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65d337:{NFSU2_TR(0x65d337);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
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
B65d33a:{NFSU2_TR(0x65d33a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d2fau);}goto L65d2fa;}}
}
B65d33c:L65d33c:{c.instructions+=1;NFSU2_TR(0x65d33c);
{goto L65d413;}
}
B65d341:L65d341:{c.instructions+=7;NFSU2_TR(0x65d341);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65d344:{NFSU2_TR(0x65d344);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65d347:{NFSU2_TR(0x65d347);
__builtin_memmove((R+4),(R+8),4);
}
B65d349:{NFSU2_TR(0x65d349);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B65d34c:{NFSU2_TR(0x65d34c);
__builtin_memmove((R+24),(R+4),4);
}
B65d34e:{NFSU2_TR(0x65d34e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B65d351:{NFSU2_TR(0x65d351);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65d353:L65d353:{c.instructions+=1;NFSU2_TR(0x65d353);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L65d355;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d353u);}goto L65d353;}
}
B65d355:L65d355:{c.instructions+=3;NFSU2_TR(0x65d355);
__builtin_memmove((R+4),(R+24),4);
}
B65d357:{NFSU2_TR(0x65d357);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B65d35a:{NFSU2_TR(0x65d35a);
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
B65d35c:L65d35c:{c.instructions+=1;NFSU2_TR(0x65d35c);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L65d35e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d35cu);}goto L65d35c;}
}
B65d35e:L65d35e:{c.instructions+=1;NFSU2_TR(0x65d35e);
if(r1(R+518)){{goto L65d413;}}
}
B65d364:L65d364:{c.instructions+=1;NFSU2_TR(0x65d364);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d367:L65d367:{c.instructions+=3;NFSU2_TR(0x65d367);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65d36a:{NFSU2_TR(0x65d36a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65d36c:{NFSU2_TR(0x65d36c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65d395;}}
}
B65d36e:L65d36e:{c.instructions+=2;NFSU2_TR(0x65d36e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65d371:{NFSU2_TR(0x65d371);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65d374:L65d374:{c.instructions+=3;NFSU2_TR(0x65d374);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65d377:{NFSU2_TR(0x65d377);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65d379:{NFSU2_TR(0x65d379);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65d38c;}}
}
B65d37b:L65d37b:{c.instructions+=2;NFSU2_TR(0x65d37b);
__builtin_memmove((R+4),(R+24),4);
}
B65d37d:{NFSU2_TR(0x65d37d);
__builtin_memmove((R+0),(R+28),4);
}
B65d37f:L65d37f:{c.instructions+=6;NFSU2_TR(0x65d37f);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B65d381:{NFSU2_TR(0x65d381);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B65d384:{NFSU2_TR(0x65d384);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B65d386:{NFSU2_TR(0x65d386);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B65d389:{NFSU2_TR(0x65d389);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B65d38a:{NFSU2_TR(0x65d38a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d37fu);}goto L65d37f;}}
}
B65d38c:L65d38c:{c.instructions+=4;NFSU2_TR(0x65d38c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B65d38f:{NFSU2_TR(0x65d38f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B65d392:{NFSU2_TR(0x65d392);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B65d393:{NFSU2_TR(0x65d393);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d374u);}goto L65d374;}}
}
B65d395:L65d395:{c.instructions+=4;NFSU2_TR(0x65d395);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65d399:{NFSU2_TR(0x65d399);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),u32(0x40ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65d39d:{NFSU2_TR(0x65d39d);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
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
B65d3a0:{NFSU2_TR(0x65d3a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d367u);}goto L65d367;}}
}
B65d3a2:L65d3a2:{c.instructions+=1;NFSU2_TR(0x65d3a2);
{goto L65d413;}
}
B65d3a4:L65d3a4:{c.instructions+=7;NFSU2_TR(0x65d3a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65d3a7:{NFSU2_TR(0x65d3a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65d3aa:{NFSU2_TR(0x65d3aa);
__builtin_memmove((R+4),(R+8),4);
}
B65d3ac:{NFSU2_TR(0x65d3ac);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B65d3af:{NFSU2_TR(0x65d3af);
__builtin_memmove((R+24),(R+4),4);
}
B65d3b1:{NFSU2_TR(0x65d3b1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B65d3b4:{NFSU2_TR(0x65d3b4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65d3b6:L65d3b6:{c.instructions+=1;NFSU2_TR(0x65d3b6);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L65d3b8;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d3b6u);}goto L65d3b6;}
}
B65d3b8:L65d3b8:{c.instructions+=3;NFSU2_TR(0x65d3b8);
__builtin_memmove((R+4),(R+24),4);
}
B65d3ba:{NFSU2_TR(0x65d3ba);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B65d3bd:{NFSU2_TR(0x65d3bd);
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
B65d3bf:L65d3bf:{c.instructions+=1;NFSU2_TR(0x65d3bf);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L65d3c1;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d3bfu);}goto L65d3bf;}
}
B65d3c1:L65d3c1:{c.instructions+=1;NFSU2_TR(0x65d3c1);
if(r1(R+518)){{goto L65d413;}}
}
B65d3c3:L65d3c3:{c.instructions+=1;NFSU2_TR(0x65d3c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d3c6:L65d3c6:{c.instructions+=3;NFSU2_TR(0x65d3c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65d3c9:{NFSU2_TR(0x65d3c9);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65d3cb:{NFSU2_TR(0x65d3cb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65d406;}}
}
B65d3cd:L65d3cd:{c.instructions+=3;NFSU2_TR(0x65d3cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65d3d0:{NFSU2_TR(0x65d3d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65d3d3:{NFSU2_TR(0x65d3d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d3d6:L65d3d6:{c.instructions+=3;NFSU2_TR(0x65d3d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65d3d9:{NFSU2_TR(0x65d3d9);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65d3db:{NFSU2_TR(0x65d3db);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65d3fc;}}
}
B65d3dd:L65d3dd:{c.instructions+=2;NFSU2_TR(0x65d3dd);
__builtin_memmove((R+4),(R+28),4);
}
B65d3df:{NFSU2_TR(0x65d3df);
__builtin_memmove((R+0),(R+8),4);
}
B65d3e1:L65d3e1:{c.instructions+=10;NFSU2_TR(0x65d3e1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B65d3e3:{NFSU2_TR(0x65d3e3);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B65d3e5:{NFSU2_TR(0x65d3e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+12),(U+0),1);
}
B65d3e8:{NFSU2_TR(0x65d3e8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B65d3eb:{NFSU2_TR(0x65d3eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d3ee:{NFSU2_TR(0x65d3ee);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B65d3f1:{NFSU2_TR(0x65d3f1);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B65d3f3:{NFSU2_TR(0x65d3f3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B65d3f6:{NFSU2_TR(0x65d3f6);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B65d3f7:{NFSU2_TR(0x65d3f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d3e1u);}goto L65d3e1;}}
}
B65d3f9:L65d3f9:{c.instructions+=2;NFSU2_TR(0x65d3f9);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d3fb:{NFSU2_TR(0x65d3fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65d3fc:L65d3fc:{c.instructions+=4;NFSU2_TR(0x65d3fc);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B65d3ff:{NFSU2_TR(0x65d3ff);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B65d401:{NFSU2_TR(0x65d401);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65d404:{NFSU2_TR(0x65d404);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d3d6u);}goto L65d3d6;}}
}
B65d406:L65d406:{c.instructions+=4;NFSU2_TR(0x65d406);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65d40a:{NFSU2_TR(0x65d40a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),u32(0x40ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65d40e:{NFSU2_TR(0x65d40e);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
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
B65d411:{NFSU2_TR(0x65d411);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d3c6u);}goto L65d3c6;}}
}
B65d413:L65d413:{c.instructions+=6;NFSU2_TR(0x65d413);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65d416:{NFSU2_TR(0x65d416);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65d417:{NFSU2_TR(0x65d417);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65d418:{NFSU2_TR(0x65d418);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65d419:{NFSU2_TR(0x65d419);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B65d41a:{NFSU2_TR(0x65d41a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65d41d:L65d41d:{c.instructions+=12;NFSU2_TR(0x65d41d);
__builtin_memmove((R+28),(R+28),4);
}
B65d41f:{NFSU2_TR(0x65d41f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d420:{NFSU2_TR(0x65d420);
__builtin_memmove((R+20),(R+16),4);
}
B65d422:{NFSU2_TR(0x65d422);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d423:{NFSU2_TR(0x65d423);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65d426:{NFSU2_TR(0x65d426);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65d428:{NFSU2_TR(0x65d428);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(R+512,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65d42c:{NFSU2_TR(0x65d42c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B65d42d:{NFSU2_TR(0x65d42d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d42e:{NFSU2_TR(0x65d42e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d42f:{NFSU2_TR(0x65d42f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d430:{NFSU2_TR(0x65d430);
if(r1(R+518)){{goto L65d4cb;}}
}
B65d436:L65d436:{c.instructions+=2;NFSU2_TR(0x65d436);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B65d437:{NFSU2_TR(0x65d437);
if(r1(R+518)){{goto L65d483;}}
}
B65d439:L65d439:{c.instructions+=2;NFSU2_TR(0x65d439);
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
B65d43a:{NFSU2_TR(0x65d43a);
if(r1(R+518)){{goto L65d448;}}
}
B65d43c:L65d43c:{c.instructions+=2;NFSU2_TR(0x65d43c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B65d443:{NFSU2_TR(0x65d443);
{goto L65d513;}
}
B65d448:L65d448:{c.instructions+=3;NFSU2_TR(0x65d448);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65d44b:{NFSU2_TR(0x65d44b);
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
B65d44d:{NFSU2_TR(0x65d44d);
if(r1(R+518)){{goto L65d513;}}
}
B65d453:L65d453:{c.instructions+=2;NFSU2_TR(0x65d453);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65d456:{NFSU2_TR(0x65d456);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65d459:L65d459:{c.instructions+=3;NFSU2_TR(0x65d459);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65d45b:{NFSU2_TR(0x65d45b);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B65d45d:{NFSU2_TR(0x65d45d);
if(r1(R+518)){{goto L65d475;}}
}
B65d45f:L65d45f:{c.instructions+=2;NFSU2_TR(0x65d45f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d461:{NFSU2_TR(0x65d461);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65d462:L65d462:{c.instructions+=6;NFSU2_TR(0x65d462);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B65d464:{NFSU2_TR(0x65d464);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B65d467:{NFSU2_TR(0x65d467);
{u32 ea_=u32(r4(R+8)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B65d46a:{NFSU2_TR(0x65d46a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B65d46d:{NFSU2_TR(0x65d46d);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B65d46e:{NFSU2_TR(0x65d46e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d462u);}goto L65d462;}}
}
B65d470:L65d470:{c.instructions+=2;NFSU2_TR(0x65d470);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x40ull))));
}
B65d473:{NFSU2_TR(0x65d473);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d45fu);}goto L65d45f;}}
}
B65d475:L65d475:{c.instructions+=4;NFSU2_TR(0x65d475);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x40ull))));
}
B65d478:{NFSU2_TR(0x65d478);
w1(R+512,carry<u32>(r4(R+4),u32(0x4ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B65d47b:{NFSU2_TR(0x65d47b);
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
B65d47c:{NFSU2_TR(0x65d47c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d459u);}goto L65d459;}}
}
B65d47e:L65d47e:{c.instructions+=1;NFSU2_TR(0x65d47e);
{goto L65d513;}
}
B65d483:L65d483:{c.instructions+=3;NFSU2_TR(0x65d483);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65d486:{NFSU2_TR(0x65d486);
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
B65d488:{NFSU2_TR(0x65d488);
if(r1(R+518)){{goto L65d513;}}
}
B65d48e:L65d48e:{c.instructions+=3;NFSU2_TR(0x65d48e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65d491:{NFSU2_TR(0x65d491);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65d494:{NFSU2_TR(0x65d494);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d497:L65d497:{c.instructions+=3;NFSU2_TR(0x65d497);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B65d499:{NFSU2_TR(0x65d499);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B65d49b:{NFSU2_TR(0x65d49b);
if(r1(R+518)){{goto L65d4be;}}
}
B65d49d:L65d49d:{c.instructions+=1;NFSU2_TR(0x65d49d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B65d4a4:L65d4a4:{c.instructions+=3;NFSU2_TR(0x65d4a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65d4a6:{NFSU2_TR(0x65d4a6);
{u32 ea_=u32(r4(R+0)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B65d4a9:{NFSU2_TR(0x65d4a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65d4aeull));
TAIL_STATIC(0x75dd28u,75d);
}
B65d4ae:L65d4ae:{c.instructions+=4;NFSU2_TR(0x65d4ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B65d4b1:{NFSU2_TR(0x65d4b1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B65d4b4:{NFSU2_TR(0x65d4b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65d4b7:{NFSU2_TR(0x65d4b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d4a4u);}goto L65d4a4;}}
}
B65d4b9:L65d4b9:{c.instructions+=2;NFSU2_TR(0x65d4b9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x40ull))));
}
B65d4bc:{NFSU2_TR(0x65d4bc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d49du);}goto L65d49d;}}
}
B65d4be:L65d4be:{c.instructions+=4;NFSU2_TR(0x65d4be);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x40ull))));
}
B65d4c1:{NFSU2_TR(0x65d4c1);
w1(R+512,carry<u32>(r4(R+28),u32(0x4ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B65d4c4:{NFSU2_TR(0x65d4c4);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B65d4c7:{NFSU2_TR(0x65d4c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d497u);}goto L65d497;}}
}
B65d4c9:L65d4c9:{c.instructions+=1;NFSU2_TR(0x65d4c9);
{goto L65d513;}
}
B65d4cb:L65d4cb:{c.instructions+=3;NFSU2_TR(0x65d4cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65d4ce:{NFSU2_TR(0x65d4ce);
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
B65d4d0:{NFSU2_TR(0x65d4d0);
if(r1(R+518)){{goto L65d513;}}
}
B65d4d2:L65d4d2:{c.instructions+=2;NFSU2_TR(0x65d4d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65d4d5:{NFSU2_TR(0x65d4d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65d4d8:L65d4d8:{c.instructions+=3;NFSU2_TR(0x65d4d8);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B65d4da:{NFSU2_TR(0x65d4da);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B65d4dc:{NFSU2_TR(0x65d4dc);
if(r1(R+518)){{goto L65d50a;}}
}
B65d4de:L65d4de:{c.instructions+=2;NFSU2_TR(0x65d4de);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d4e0:{NFSU2_TR(0x65d4e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65d4e1:L65d4e1:{c.instructions+=7;NFSU2_TR(0x65d4e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65d4e3:{NFSU2_TR(0x65d4e3);
{u32 ea_=u32(r4(R+0)+r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B65d4e6:{NFSU2_TR(0x65d4e6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B65d4ec:{NFSU2_TR(0x65d4ec);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B65d4ee:{NFSU2_TR(0x65d4ee);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B65d4f0:{NFSU2_TR(0x65d4f0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B65d4f3:{NFSU2_TR(0x65d4f3);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L65d4fa;}}
}
B65d4f5:L65d4f5:{c.instructions+=3;NFSU2_TR(0x65d4f5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65d4f7:{NFSU2_TR(0x65d4f7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B65d4f8:{NFSU2_TR(0x65d4f8);
{goto L65d4fc;}
}
B65d4fa:L65d4fa:{c.instructions+=1;NFSU2_TR(0x65d4fa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65d4fc:L65d4fc:{c.instructions+=4;NFSU2_TR(0x65d4fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B65d4ff:{NFSU2_TR(0x65d4ff);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B65d502:{NFSU2_TR(0x65d502);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B65d503:{NFSU2_TR(0x65d503);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d4e1u);}goto L65d4e1;}}
}
B65d505:L65d505:{c.instructions+=2;NFSU2_TR(0x65d505);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x40ull))));
}
B65d508:{NFSU2_TR(0x65d508);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d4deu);}goto L65d4de;}}
}
B65d50a:L65d50a:{c.instructions+=4;NFSU2_TR(0x65d50a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x40ull))));
}
B65d50d:{NFSU2_TR(0x65d50d);
w1(R+512,carry<u32>(r4(R+28),u32(0x4ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B65d510:{NFSU2_TR(0x65d510);
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
B65d511:{NFSU2_TR(0x65d511);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d4d8u);}goto L65d4d8;}}
}
B65d513:L65d513:{c.instructions+=6;NFSU2_TR(0x65d513);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65d516:{NFSU2_TR(0x65d516);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65d517:{NFSU2_TR(0x65d517);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65d518:{NFSU2_TR(0x65d518);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65d519:{NFSU2_TR(0x65d519);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B65d51a:{NFSU2_TR(0x65d51a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65d51d:L65d51d:{c.instructions+=13;NFSU2_TR(0x65d51d);
__builtin_memmove((R+28),(R+28),4);
}
B65d51f:{NFSU2_TR(0x65d51f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d520:{NFSU2_TR(0x65d520);
__builtin_memmove((R+20),(R+16),4);
}
B65d522:{NFSU2_TR(0x65d522);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d523:{NFSU2_TR(0x65d523);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d524:{NFSU2_TR(0x65d524);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65d527:{NFSU2_TR(0x65d527);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65d529:{NFSU2_TR(0x65d529);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w1(R+512,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65d52d:{NFSU2_TR(0x65d52d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B65d52e:{NFSU2_TR(0x65d52e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d52f:{NFSU2_TR(0x65d52f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d530:{NFSU2_TR(0x65d530);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d531:{NFSU2_TR(0x65d531);
if(r1(R+518)){{goto L65d5ea;}}
}
B65d537:L65d537:{c.instructions+=2;NFSU2_TR(0x65d537);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B65d538:{NFSU2_TR(0x65d538);
if(r1(R+518)){{goto L65d595;}}
}
B65d53a:L65d53a:{c.instructions+=2;NFSU2_TR(0x65d53a);
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
B65d53b:{NFSU2_TR(0x65d53b);
if(r1(R+518)){{goto L65d549;}}
}
B65d53d:L65d53d:{c.instructions+=2;NFSU2_TR(0x65d53d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B65d544:{NFSU2_TR(0x65d544);
{goto L65d642;}
}
B65d549:L65d549:{c.instructions+=3;NFSU2_TR(0x65d549);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65d54c:{NFSU2_TR(0x65d54c);
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
B65d54e:{NFSU2_TR(0x65d54e);
if(r1(R+518)){{goto L65d642;}}
}
B65d554:L65d554:{c.instructions+=4;NFSU2_TR(0x65d554);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65d557:{NFSU2_TR(0x65d557);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d559:{NFSU2_TR(0x65d559);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d55c:{NFSU2_TR(0x65d55c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65d55d:L65d55d:{c.instructions+=3;NFSU2_TR(0x65d55d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65d55f:{NFSU2_TR(0x65d55f);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B65d561:{NFSU2_TR(0x65d561);
if(r1(R+518)){{goto L65d585;}}
}
B65d563:L65d563:{c.instructions+=2;NFSU2_TR(0x65d563);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65d566:{NFSU2_TR(0x65d566);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d569:L65d569:{c.instructions+=2;NFSU2_TR(0x65d569);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65d56c:{NFSU2_TR(0x65d56c);
__builtin_memmove((R+28),(R+24),4);
}
B65d56e:L65d56e:{c.instructions+=7;NFSU2_TR(0x65d56e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B65d570:{NFSU2_TR(0x65d570);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B65d573:{NFSU2_TR(0x65d573);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B65d575:{NFSU2_TR(0x65d575);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B65d577:{NFSU2_TR(0x65d577);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B65d57a:{NFSU2_TR(0x65d57a);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B65d57b:{NFSU2_TR(0x65d57b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d56eu);}goto L65d56e;}}
}
B65d57d:L65d57d:{c.instructions+=3;NFSU2_TR(0x65d57d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B65d580:{NFSU2_TR(0x65d580);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x40ull))));
}
B65d583:{NFSU2_TR(0x65d583);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d569u);}goto L65d569;}}
}
B65d585:L65d585:{c.instructions+=4;NFSU2_TR(0x65d585);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65d589:{NFSU2_TR(0x65d589);
w1(R+512,carry<u32>(r4(R+8),r4(R+24)));
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B65d58b:{NFSU2_TR(0x65d58b);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
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
B65d58e:{NFSU2_TR(0x65d58e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d55du);}goto L65d55d;}}
}
B65d590:L65d590:{c.instructions+=1;NFSU2_TR(0x65d590);
{goto L65d642;}
}
B65d595:L65d595:{c.instructions+=3;NFSU2_TR(0x65d595);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65d598:{NFSU2_TR(0x65d598);
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
B65d59a:{NFSU2_TR(0x65d59a);
if(r1(R+518)){{goto L65d642;}}
}
B65d5a0:L65d5a0:{c.instructions+=3;NFSU2_TR(0x65d5a0);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d5a2:{NFSU2_TR(0x65d5a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d5a5:{NFSU2_TR(0x65d5a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65d5a6:L65d5a6:{c.instructions+=4;NFSU2_TR(0x65d5a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65d5a9:{NFSU2_TR(0x65d5a9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B65d5ab:{NFSU2_TR(0x65d5ab);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B65d5ad:{NFSU2_TR(0x65d5ad);
if(r1(R+518)){{goto L65d5dc;}}
}
B65d5af:L65d5af:{c.instructions+=2;NFSU2_TR(0x65d5af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65d5b2:{NFSU2_TR(0x65d5b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d5b5:L65d5b5:{c.instructions+=2;NFSU2_TR(0x65d5b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65d5b8:{NFSU2_TR(0x65d5b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d5bb:L65d5bb:{c.instructions+=4;NFSU2_TR(0x65d5bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65d5be:{NFSU2_TR(0x65d5be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65d5c0:{NFSU2_TR(0x65d5c0);
{u32 ea_=u32(r4(R+0)+r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B65d5c3:{NFSU2_TR(0x65d5c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65d5c8ull));
TAIL_STATIC(0x75dd28u,75d);
}
B65d5c8:L65d5c8:{c.instructions+=5;NFSU2_TR(0x65d5c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B65d5ca:{NFSU2_TR(0x65d5ca);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B65d5cd:{NFSU2_TR(0x65d5cd);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B65d5cf:{NFSU2_TR(0x65d5cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65d5d2:{NFSU2_TR(0x65d5d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d5bbu);}goto L65d5bb;}}
}
B65d5d4:L65d5d4:{c.instructions+=3;NFSU2_TR(0x65d5d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B65d5d7:{NFSU2_TR(0x65d5d7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x40ull))));
}
B65d5da:{NFSU2_TR(0x65d5da);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d5b5u);}goto L65d5b5;}}
}
B65d5dc:L65d5dc:{c.instructions+=4;NFSU2_TR(0x65d5dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65d5e0:{NFSU2_TR(0x65d5e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+24)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B65d5e3:{NFSU2_TR(0x65d5e3);
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
B65d5e6:{NFSU2_TR(0x65d5e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d5a6u);}goto L65d5a6;}}
}
B65d5e8:L65d5e8:{c.instructions+=1;NFSU2_TR(0x65d5e8);
{goto L65d642;}
}
B65d5ea:L65d5ea:{c.instructions+=3;NFSU2_TR(0x65d5ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65d5ed:{NFSU2_TR(0x65d5ed);
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
B65d5ef:{NFSU2_TR(0x65d5ef);
if(r1(R+518)){{goto L65d642;}}
}
B65d5f1:L65d5f1:{c.instructions+=3;NFSU2_TR(0x65d5f1);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d5f3:{NFSU2_TR(0x65d5f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d5f6:{NFSU2_TR(0x65d5f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65d5f7:L65d5f7:{c.instructions+=4;NFSU2_TR(0x65d5f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65d5fa:{NFSU2_TR(0x65d5fa);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B65d5fc:{NFSU2_TR(0x65d5fc);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B65d5fe:{NFSU2_TR(0x65d5fe);
if(r1(R+518)){{goto L65d636;}}
}
B65d600:L65d600:{c.instructions+=1;NFSU2_TR(0x65d600);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65d603:L65d603:{c.instructions+=2;NFSU2_TR(0x65d603);
__builtin_memmove((R+4),(R+12),4);
}
B65d605:{NFSU2_TR(0x65d605);
__builtin_memmove((R+28),(R+24),4);
}
B65d607:L65d607:{c.instructions+=8;NFSU2_TR(0x65d607);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65d60a:{NFSU2_TR(0x65d60a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65d60c:{NFSU2_TR(0x65d60c);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B65d60f:{NFSU2_TR(0x65d60f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B65d615:{NFSU2_TR(0x65d615);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B65d617:{NFSU2_TR(0x65d617);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B65d619:{NFSU2_TR(0x65d619);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B65d61c:{NFSU2_TR(0x65d61c);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L65d623;}}
}
B65d61e:L65d61e:{c.instructions+=3;NFSU2_TR(0x65d61e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65d620:{NFSU2_TR(0x65d620);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B65d621:{NFSU2_TR(0x65d621);
{goto L65d625;}
}
B65d623:L65d623:{c.instructions+=1;NFSU2_TR(0x65d623);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65d625:L65d625:{c.instructions+=5;NFSU2_TR(0x65d625);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B65d627:{NFSU2_TR(0x65d627);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B65d62a:{NFSU2_TR(0x65d62a);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B65d62c:{NFSU2_TR(0x65d62c);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B65d62d:{NFSU2_TR(0x65d62d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d607u);}goto L65d607;}}
}
B65d62f:L65d62f:{c.instructions+=3;NFSU2_TR(0x65d62f);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+24))));
}
B65d631:{NFSU2_TR(0x65d631);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x40ull))));
}
B65d634:{NFSU2_TR(0x65d634);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d603u);}goto L65d603;}}
}
B65d636:L65d636:{c.instructions+=4;NFSU2_TR(0x65d636);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65d63a:{NFSU2_TR(0x65d63a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+24)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B65d63d:{NFSU2_TR(0x65d63d);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
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
B65d640:{NFSU2_TR(0x65d640);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d5f7u);}goto L65d5f7;}}
}
B65d642:L65d642:{c.instructions+=6;NFSU2_TR(0x65d642);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65d645:{NFSU2_TR(0x65d645);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65d646:{NFSU2_TR(0x65d646);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65d647:{NFSU2_TR(0x65d647);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65d648:{NFSU2_TR(0x65d648);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B65d649:{NFSU2_TR(0x65d649);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65d64c:L65d64c:{c.instructions+=18;NFSU2_TR(0x65d64c);
__builtin_memmove((R+28),(R+28),4);
}
B65d64e:{NFSU2_TR(0x65d64e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d64f:{NFSU2_TR(0x65d64f);
__builtin_memmove((R+20),(R+16),4);
}
B65d651:{NFSU2_TR(0x65d651);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d652:{NFSU2_TR(0x65d652);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d653:{NFSU2_TR(0x65d653);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65d656:{NFSU2_TR(0x65d656);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B65d658:{NFSU2_TR(0x65d658);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65d65b:{NFSU2_TR(0x65d65b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65d65e:{NFSU2_TR(0x65d65e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65d662:{NFSU2_TR(0x65d662);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d663:{NFSU2_TR(0x65d663);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d664:{NFSU2_TR(0x65d664);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d665:{NFSU2_TR(0x65d665);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d667:{NFSU2_TR(0x65d667);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65d668:{NFSU2_TR(0x65d668);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65d66a:{NFSU2_TR(0x65d66a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d66d:{NFSU2_TR(0x65d66d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L65d672;}}
}
B65d66f:L65d66f:{c.instructions+=1;NFSU2_TR(0x65d66f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d672:L65d672:{c.instructions+=3;NFSU2_TR(0x65d672);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65d674:{NFSU2_TR(0x65d674);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d677:{NFSU2_TR(0x65d677);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L65d67c;}}
}
B65d679:L65d679:{c.instructions+=1;NFSU2_TR(0x65d679);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d67c:L65d67c:{c.instructions+=2;NFSU2_TR(0x65d67c);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B65d67d:{NFSU2_TR(0x65d67d);
if(r1(R+518)){{goto L65d744;}}
}
B65d683:L65d683:{c.instructions+=2;NFSU2_TR(0x65d683);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B65d684:{NFSU2_TR(0x65d684);
if(r1(R+518)){{goto L65d6ef;}}
}
B65d686:L65d686:{c.instructions+=2;NFSU2_TR(0x65d686);
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
B65d687:{NFSU2_TR(0x65d687);
if(r1(R+518)){{goto L65d695;}}
}
B65d689:L65d689:{c.instructions+=2;NFSU2_TR(0x65d689);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B65d690:{NFSU2_TR(0x65d690);
{goto L65d7a0;}
}
B65d695:L65d695:{c.instructions+=3;NFSU2_TR(0x65d695);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65d698:{NFSU2_TR(0x65d698);
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
B65d69a:{NFSU2_TR(0x65d69a);
if(r1(R+518)){{goto L65d7a0;}}
}
B65d6a0:L65d6a0:{c.instructions+=3;NFSU2_TR(0x65d6a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65d6a3:{NFSU2_TR(0x65d6a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65d6a6:{NFSU2_TR(0x65d6a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d6a9:L65d6a9:{c.instructions+=3;NFSU2_TR(0x65d6a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B65d6ab:{NFSU2_TR(0x65d6ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65d6ad:{NFSU2_TR(0x65d6ad);
if(r1(R+518)){{goto L65d6e0;}}
}
B65d6af:L65d6af:{c.instructions+=3;NFSU2_TR(0x65d6af);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d6b1:{NFSU2_TR(0x65d6b1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65d6b3:{NFSU2_TR(0x65d6b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65d6b4:L65d6b4:{c.instructions+=1;NFSU2_TR(0x65d6b4);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L65d6b6;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d6b4u);}goto L65d6b4;}
}
B65d6b6:L65d6b6:{c.instructions+=3;NFSU2_TR(0x65d6b6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B65d6b8:{NFSU2_TR(0x65d6b8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65d6bb:{NFSU2_TR(0x65d6bb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65d6e0;}}
}
B65d6bd:L65d6bd:{c.instructions+=3;NFSU2_TR(0x65d6bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65d6c0:{NFSU2_TR(0x65d6c0);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65d6c2:{NFSU2_TR(0x65d6c2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65d6da;}}
}
B65d6c4:L65d6c4:{c.instructions+=2;NFSU2_TR(0x65d6c4);
__builtin_memmove((R+0),(R+28),4);
}
B65d6c6:{NFSU2_TR(0x65d6c6);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B65d6c9:L65d6c9:{c.instructions+=6;NFSU2_TR(0x65d6c9);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B65d6cc:{NFSU2_TR(0x65d6cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B65d6ce:{NFSU2_TR(0x65d6ce);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B65d6d1:{NFSU2_TR(0x65d6d1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B65d6d4:{NFSU2_TR(0x65d6d4);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B65d6d5:{NFSU2_TR(0x65d6d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d6c9u);}goto L65d6c9;}}
}
B65d6d7:L65d6d7:{c.instructions+=2;NFSU2_TR(0x65d6d7);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d6d9:{NFSU2_TR(0x65d6d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65d6da:L65d6da:{c.instructions+=3;NFSU2_TR(0x65d6da);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B65d6db:{NFSU2_TR(0x65d6db);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B65d6de:{NFSU2_TR(0x65d6de);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d6bdu);}goto L65d6bd;}}
}
B65d6e0:L65d6e0:{c.instructions+=4;NFSU2_TR(0x65d6e0);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x40ull))));
}
B65d6e3:{NFSU2_TR(0x65d6e3);
w1(R+512,carry<u32>(r4(R+8),r4(R+24)));
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B65d6e5:{NFSU2_TR(0x65d6e5);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
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
B65d6e8:{NFSU2_TR(0x65d6e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d6a9u);}goto L65d6a9;}}
}
B65d6ea:L65d6ea:{c.instructions+=1;NFSU2_TR(0x65d6ea);
{goto L65d7a0;}
}
B65d6ef:L65d6ef:{c.instructions+=3;NFSU2_TR(0x65d6ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65d6f2:{NFSU2_TR(0x65d6f2);
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
B65d6f4:{NFSU2_TR(0x65d6f4);
if(r1(R+518)){{goto L65d7a0;}}
}
B65d6fa:L65d6fa:{c.instructions+=3;NFSU2_TR(0x65d6fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65d6fd:{NFSU2_TR(0x65d6fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65d700:{NFSU2_TR(0x65d700);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d703:L65d703:{c.instructions+=3;NFSU2_TR(0x65d703);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B65d705:{NFSU2_TR(0x65d705);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65d707:{NFSU2_TR(0x65d707);
if(r1(R+518)){{goto L65d737;}}
}
B65d709:L65d709:{c.instructions+=3;NFSU2_TR(0x65d709);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d70b:{NFSU2_TR(0x65d70b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65d70d:{NFSU2_TR(0x65d70d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65d70e:L65d70e:{c.instructions+=1;NFSU2_TR(0x65d70e);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L65d710;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d70eu);}goto L65d70e;}
}
B65d710:L65d710:{c.instructions+=3;NFSU2_TR(0x65d710);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B65d712:{NFSU2_TR(0x65d712);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65d715:{NFSU2_TR(0x65d715);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65d737;}}
}
B65d717:L65d717:{c.instructions+=3;NFSU2_TR(0x65d717);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65d71a:{NFSU2_TR(0x65d71a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65d71c:{NFSU2_TR(0x65d71c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65d731;}}
}
B65d71e:L65d71e:{c.instructions+=2;NFSU2_TR(0x65d71e);
__builtin_memmove((R+0),(R+28),4);
}
B65d720:{NFSU2_TR(0x65d720);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B65d723:L65d723:{c.instructions+=6;NFSU2_TR(0x65d723);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B65d726:{NFSU2_TR(0x65d726);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B65d728:{NFSU2_TR(0x65d728);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B65d72b:{NFSU2_TR(0x65d72b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B65d72e:{NFSU2_TR(0x65d72e);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B65d72f:{NFSU2_TR(0x65d72f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d723u);}goto L65d723;}}
}
B65d731:L65d731:{c.instructions+=3;NFSU2_TR(0x65d731);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B65d732:{NFSU2_TR(0x65d732);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B65d735:{NFSU2_TR(0x65d735);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d717u);}goto L65d717;}}
}
B65d737:L65d737:{c.instructions+=4;NFSU2_TR(0x65d737);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B65d73a:{NFSU2_TR(0x65d73a);
w1(R+512,carry<u32>(r4(R+8),u32(0x4ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B65d73d:{NFSU2_TR(0x65d73d);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
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
B65d740:{NFSU2_TR(0x65d740);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d703u);}goto L65d703;}}
}
B65d742:L65d742:{c.instructions+=1;NFSU2_TR(0x65d742);
{goto L65d7a0;}
}
B65d744:L65d744:{c.instructions+=3;NFSU2_TR(0x65d744);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65d747:{NFSU2_TR(0x65d747);
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
B65d749:{NFSU2_TR(0x65d749);
if(r1(R+518)){{goto L65d7a0;}}
}
B65d74b:L65d74b:{c.instructions+=3;NFSU2_TR(0x65d74b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65d74e:{NFSU2_TR(0x65d74e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65d751:{NFSU2_TR(0x65d751);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d754:L65d754:{c.instructions+=3;NFSU2_TR(0x65d754);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B65d756:{NFSU2_TR(0x65d756);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65d758:{NFSU2_TR(0x65d758);
if(r1(R+518)){{goto L65d796;}}
}
B65d75a:L65d75a:{c.instructions+=3;NFSU2_TR(0x65d75a);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d75c:{NFSU2_TR(0x65d75c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65d75e:{NFSU2_TR(0x65d75e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65d75f:L65d75f:{c.instructions+=1;NFSU2_TR(0x65d75f);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L65d761;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d75fu);}goto L65d75f;}
}
B65d761:L65d761:{c.instructions+=3;NFSU2_TR(0x65d761);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B65d763:{NFSU2_TR(0x65d763);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65d766:{NFSU2_TR(0x65d766);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65d796;}}
}
B65d768:L65d768:{c.instructions+=3;NFSU2_TR(0x65d768);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65d76b:{NFSU2_TR(0x65d76b);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65d76d:{NFSU2_TR(0x65d76d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65d78d;}}
}
B65d76f:L65d76f:{c.instructions+=2;NFSU2_TR(0x65d76f);
__builtin_memmove((R+0),(R+28),4);
}
B65d771:{NFSU2_TR(0x65d771);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B65d774:L65d774:{c.instructions+=10;NFSU2_TR(0x65d774);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B65d776:{NFSU2_TR(0x65d776);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+4))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B65d779:{NFSU2_TR(0x65d779);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B65d77c:{NFSU2_TR(0x65d77c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d77f:{NFSU2_TR(0x65d77f);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B65d782:{NFSU2_TR(0x65d782);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65d784:{NFSU2_TR(0x65d784);
{u32 ea_=u32(r4(R+4)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B65d787:{NFSU2_TR(0x65d787);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B65d78a:{NFSU2_TR(0x65d78a);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B65d78b:{NFSU2_TR(0x65d78b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d774u);}goto L65d774;}}
}
B65d78d:L65d78d:{c.instructions+=3;NFSU2_TR(0x65d78d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B65d78e:{NFSU2_TR(0x65d78e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B65d791:{NFSU2_TR(0x65d791);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d768u);}goto L65d768;}}
}
B65d793:L65d793:{c.instructions+=2;NFSU2_TR(0x65d793);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d795:{NFSU2_TR(0x65d795);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65d796:L65d796:{c.instructions+=4;NFSU2_TR(0x65d796);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x40ull))));
}
B65d799:{NFSU2_TR(0x65d799);
w1(R+512,carry<u32>(r4(R+8),r4(R+24)));
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B65d79b:{NFSU2_TR(0x65d79b);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
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
B65d79e:{NFSU2_TR(0x65d79e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d754u);}goto L65d754;}}
}
B65d7a0:L65d7a0:{c.instructions+=6;NFSU2_TR(0x65d7a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65d7a3:{NFSU2_TR(0x65d7a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65d7a4:{NFSU2_TR(0x65d7a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65d7a5:{NFSU2_TR(0x65d7a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65d7a6:{NFSU2_TR(0x65d7a6);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B65d7a7:{NFSU2_TR(0x65d7a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65d7aa:L65d7aa:{c.instructions+=17;NFSU2_TR(0x65d7aa);
__builtin_memmove((R+28),(R+28),4);
}
B65d7ac:{NFSU2_TR(0x65d7ac);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d7ad:{NFSU2_TR(0x65d7ad);
__builtin_memmove((R+20),(R+16),4);
}
B65d7af:{NFSU2_TR(0x65d7af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B65d7b2:{NFSU2_TR(0x65d7b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65d7b5:{NFSU2_TR(0x65d7b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65d7b8:{NFSU2_TR(0x65d7b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65d7bc:{NFSU2_TR(0x65d7bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B65d7be:{NFSU2_TR(0x65d7be);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65d7c1:{NFSU2_TR(0x65d7c1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d7c2:{NFSU2_TR(0x65d7c2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d7c3:{NFSU2_TR(0x65d7c3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d7c4:{NFSU2_TR(0x65d7c4);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d7c6:{NFSU2_TR(0x65d7c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65d7c7:{NFSU2_TR(0x65d7c7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65d7c9:{NFSU2_TR(0x65d7c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d7cc:{NFSU2_TR(0x65d7cc);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L65d7d1;}}
}
B65d7ce:L65d7ce:{c.instructions+=1;NFSU2_TR(0x65d7ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d7d1:L65d7d1:{c.instructions+=3;NFSU2_TR(0x65d7d1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65d7d3:{NFSU2_TR(0x65d7d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d7d6:{NFSU2_TR(0x65d7d6);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L65d7db;}}
}
B65d7d8:L65d7d8:{c.instructions+=1;NFSU2_TR(0x65d7d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d7db:L65d7db:{c.instructions+=2;NFSU2_TR(0x65d7db);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B65d7dc:{NFSU2_TR(0x65d7dc);
if(r1(R+518)){{goto L65d8bd;}}
}
B65d7e2:L65d7e2:{c.instructions+=2;NFSU2_TR(0x65d7e2);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B65d7e3:{NFSU2_TR(0x65d7e3);
if(r1(R+518)){{goto L65d85a;}}
}
B65d7e5:L65d7e5:{c.instructions+=2;NFSU2_TR(0x65d7e5);
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
B65d7e6:{NFSU2_TR(0x65d7e6);
if(r1(R+518)){{goto L65d7f4;}}
}
B65d7e8:L65d7e8:{c.instructions+=2;NFSU2_TR(0x65d7e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B65d7ef:{NFSU2_TR(0x65d7ef);
{goto L65d925;}
}
B65d7f4:L65d7f4:{c.instructions+=3;NFSU2_TR(0x65d7f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65d7f7:{NFSU2_TR(0x65d7f7);
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
B65d7f9:{NFSU2_TR(0x65d7f9);
if(r1(R+518)){{goto L65d925;}}
}
B65d7ff:L65d7ff:{c.instructions+=2;NFSU2_TR(0x65d7ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65d802:{NFSU2_TR(0x65d802);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d805:L65d805:{c.instructions+=3;NFSU2_TR(0x65d805);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B65d807:{NFSU2_TR(0x65d807);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65d809:{NFSU2_TR(0x65d809);
if(r1(R+518)){{goto L65d84a;}}
}
B65d80b:L65d80b:{c.instructions+=5;NFSU2_TR(0x65d80b);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d80d:{NFSU2_TR(0x65d80d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65d80f:{NFSU2_TR(0x65d80f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B65d811:{NFSU2_TR(0x65d811);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65d814:{NFSU2_TR(0x65d814);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65d815:L65d815:{c.instructions+=1;NFSU2_TR(0x65d815);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L65d817;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d815u);}goto L65d815;}
}
B65d817:L65d817:{c.instructions+=1;NFSU2_TR(0x65d817);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65d84a;}}
}
B65d819:L65d819:{c.instructions+=2;NFSU2_TR(0x65d819);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65d81c:{NFSU2_TR(0x65d81c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d81f:L65d81f:{c.instructions+=3;NFSU2_TR(0x65d81f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65d822:{NFSU2_TR(0x65d822);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65d824:{NFSU2_TR(0x65d824);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65d840;}}
}
B65d826:L65d826:{c.instructions+=3;NFSU2_TR(0x65d826);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65d829:{NFSU2_TR(0x65d829);
__builtin_memmove((R+0),(R+8),4);
}
B65d82b:{NFSU2_TR(0x65d82b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B65d82e:L65d82e:{c.instructions+=9;NFSU2_TR(0x65d82e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+12),(U+0),4);
}
B65d830:{NFSU2_TR(0x65d830);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B65d832:{NFSU2_TR(0x65d832);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B65d835:{NFSU2_TR(0x65d835);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d837:{NFSU2_TR(0x65d837);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65d838:{NFSU2_TR(0x65d838);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B65d83b:{NFSU2_TR(0x65d83b);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B65d83d:{NFSU2_TR(0x65d83d);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B65d83e:{NFSU2_TR(0x65d83e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d82eu);}goto L65d82e;}}
}
B65d840:L65d840:{c.instructions+=4;NFSU2_TR(0x65d840);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65d844:{NFSU2_TR(0x65d844);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B65d845:{NFSU2_TR(0x65d845);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B65d848:{NFSU2_TR(0x65d848);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d81fu);}goto L65d81f;}}
}
B65d84a:L65d84a:{c.instructions+=4;NFSU2_TR(0x65d84a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65d84e:{NFSU2_TR(0x65d84e);
w1(R+512,carry<u32>(r4(R+24),r4(R+12)));
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B65d850:{NFSU2_TR(0x65d850);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
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
B65d853:{NFSU2_TR(0x65d853);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d805u);}goto L65d805;}}
}
B65d855:L65d855:{c.instructions+=1;NFSU2_TR(0x65d855);
{goto L65d925;}
}
B65d85a:L65d85a:{c.instructions+=3;NFSU2_TR(0x65d85a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65d85d:{NFSU2_TR(0x65d85d);
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
B65d85f:{NFSU2_TR(0x65d85f);
if(r1(R+518)){{goto L65d925;}}
}
B65d865:L65d865:{c.instructions+=2;NFSU2_TR(0x65d865);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65d868:{NFSU2_TR(0x65d868);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d86b:L65d86b:{c.instructions+=3;NFSU2_TR(0x65d86b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B65d86d:{NFSU2_TR(0x65d86d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65d86f:{NFSU2_TR(0x65d86f);
if(r1(R+518)){{goto L65d8b0;}}
}
B65d871:L65d871:{c.instructions+=5;NFSU2_TR(0x65d871);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d873:{NFSU2_TR(0x65d873);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65d875:{NFSU2_TR(0x65d875);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B65d877:{NFSU2_TR(0x65d877);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65d87a:{NFSU2_TR(0x65d87a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65d87b:L65d87b:{c.instructions+=1;NFSU2_TR(0x65d87b);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L65d87d;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d87bu);}goto L65d87b;}
}
B65d87d:L65d87d:{c.instructions+=1;NFSU2_TR(0x65d87d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65d8b0;}}
}
B65d87f:L65d87f:{c.instructions+=2;NFSU2_TR(0x65d87f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65d882:{NFSU2_TR(0x65d882);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d885:L65d885:{c.instructions+=3;NFSU2_TR(0x65d885);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65d888:{NFSU2_TR(0x65d888);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65d88a:{NFSU2_TR(0x65d88a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65d8a6;}}
}
B65d88c:L65d88c:{c.instructions+=3;NFSU2_TR(0x65d88c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65d88f:{NFSU2_TR(0x65d88f);
__builtin_memmove((R+0),(R+8),4);
}
B65d891:{NFSU2_TR(0x65d891);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B65d894:L65d894:{c.instructions+=9;NFSU2_TR(0x65d894);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B65d896:{NFSU2_TR(0x65d896);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+12),(U+0),4);
}
B65d898:{NFSU2_TR(0x65d898);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d89a:{NFSU2_TR(0x65d89a);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B65d89d:{NFSU2_TR(0x65d89d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65d89e:{NFSU2_TR(0x65d89e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B65d8a1:{NFSU2_TR(0x65d8a1);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B65d8a3:{NFSU2_TR(0x65d8a3);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B65d8a4:{NFSU2_TR(0x65d8a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d894u);}goto L65d894;}}
}
B65d8a6:L65d8a6:{c.instructions+=4;NFSU2_TR(0x65d8a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65d8aa:{NFSU2_TR(0x65d8aa);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B65d8ab:{NFSU2_TR(0x65d8ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B65d8ae:{NFSU2_TR(0x65d8ae);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d885u);}goto L65d885;}}
}
B65d8b0:L65d8b0:{c.instructions+=4;NFSU2_TR(0x65d8b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65d8b4:{NFSU2_TR(0x65d8b4);
w1(R+512,carry<u32>(r4(R+24),r4(R+12)));
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B65d8b6:{NFSU2_TR(0x65d8b6);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
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
B65d8b9:{NFSU2_TR(0x65d8b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d86bu);}goto L65d86b;}}
}
B65d8bb:L65d8bb:{c.instructions+=1;NFSU2_TR(0x65d8bb);
{goto L65d925;}
}
B65d8bd:L65d8bd:{c.instructions+=3;NFSU2_TR(0x65d8bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65d8c0:{NFSU2_TR(0x65d8c0);
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
B65d8c2:{NFSU2_TR(0x65d8c2);
if(r1(R+518)){{goto L65d925;}}
}
B65d8c4:L65d8c4:{c.instructions+=2;NFSU2_TR(0x65d8c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65d8c7:{NFSU2_TR(0x65d8c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d8ca:L65d8ca:{c.instructions+=3;NFSU2_TR(0x65d8ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B65d8cc:{NFSU2_TR(0x65d8cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65d8ce:{NFSU2_TR(0x65d8ce);
if(r1(R+518)){{goto L65d91a;}}
}
B65d8d0:L65d8d0:{c.instructions+=5;NFSU2_TR(0x65d8d0);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d8d2:{NFSU2_TR(0x65d8d2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65d8d4:{NFSU2_TR(0x65d8d4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B65d8d6:{NFSU2_TR(0x65d8d6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65d8d9:{NFSU2_TR(0x65d8d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65d8da:L65d8da:{c.instructions+=1;NFSU2_TR(0x65d8da);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L65d8dc;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d8dau);}goto L65d8da;}
}
B65d8dc:L65d8dc:{c.instructions+=1;NFSU2_TR(0x65d8dc);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65d91a;}}
}
B65d8de:L65d8de:{c.instructions+=2;NFSU2_TR(0x65d8de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65d8e1:{NFSU2_TR(0x65d8e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d8e4:L65d8e4:{c.instructions+=3;NFSU2_TR(0x65d8e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65d8e7:{NFSU2_TR(0x65d8e7);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65d8e9:{NFSU2_TR(0x65d8e9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65d910;}}
}
B65d8eb:L65d8eb:{c.instructions+=3;NFSU2_TR(0x65d8eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65d8ee:{NFSU2_TR(0x65d8ee);
__builtin_memmove((R+0),(R+24),4);
}
B65d8f0:{NFSU2_TR(0x65d8f0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B65d8f3:L65d8f3:{c.instructions+=13;NFSU2_TR(0x65d8f3);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B65d8f5:{NFSU2_TR(0x65d8f5);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B65d8f7:{NFSU2_TR(0x65d8f7);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d8f9:{NFSU2_TR(0x65d8f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+12),(U+0),1);
}
B65d8fc:{NFSU2_TR(0x65d8fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d8ff:{NFSU2_TR(0x65d8ff);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B65d902:{NFSU2_TR(0x65d902);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B65d904:{NFSU2_TR(0x65d904);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B65d907:{NFSU2_TR(0x65d907);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65d908:{NFSU2_TR(0x65d908);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B65d90b:{NFSU2_TR(0x65d90b);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B65d90d:{NFSU2_TR(0x65d90d);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B65d90e:{NFSU2_TR(0x65d90e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d8f3u);}goto L65d8f3;}}
}
B65d910:L65d910:{c.instructions+=4;NFSU2_TR(0x65d910);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65d914:{NFSU2_TR(0x65d914);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B65d915:{NFSU2_TR(0x65d915);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B65d918:{NFSU2_TR(0x65d918);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d8e4u);}goto L65d8e4;}}
}
B65d91a:L65d91a:{c.instructions+=4;NFSU2_TR(0x65d91a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65d91e:{NFSU2_TR(0x65d91e);
w1(R+512,carry<u32>(r4(R+8),r4(R+12)));
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B65d920:{NFSU2_TR(0x65d920);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
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
B65d923:{NFSU2_TR(0x65d923);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d8cau);}goto L65d8ca;}}
}
B65d925:L65d925:{c.instructions+=6;NFSU2_TR(0x65d925);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65d928:{NFSU2_TR(0x65d928);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65d929:{NFSU2_TR(0x65d929);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65d92a:{NFSU2_TR(0x65d92a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65d92b:{NFSU2_TR(0x65d92b);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B65d92c:{NFSU2_TR(0x65d92c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65d92f:L65d92f:{c.instructions+=17;NFSU2_TR(0x65d92f);
__builtin_memmove((R+28),(R+28),4);
}
B65d931:{NFSU2_TR(0x65d931);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d932:{NFSU2_TR(0x65d932);
__builtin_memmove((R+20),(R+16),4);
}
B65d934:{NFSU2_TR(0x65d934);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B65d937:{NFSU2_TR(0x65d937);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65d93a:{NFSU2_TR(0x65d93a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65d93c:{NFSU2_TR(0x65d93c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65d940:{NFSU2_TR(0x65d940);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B65d942:{NFSU2_TR(0x65d942);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d943:{NFSU2_TR(0x65d943);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65d946:{NFSU2_TR(0x65d946);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
}
B65d949:{NFSU2_TR(0x65d949);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d94a:{NFSU2_TR(0x65d94a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d94d:{NFSU2_TR(0x65d94d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65d950:{NFSU2_TR(0x65d950);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65d951:{NFSU2_TR(0x65d951);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d954:{NFSU2_TR(0x65d954);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L65d95c;}}
}
B65d956:L65d956:{c.instructions+=3;NFSU2_TR(0x65d956);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B65d958:{NFSU2_TR(0x65d958);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B65d959:{NFSU2_TR(0x65d959);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d95c:L65d95c:{c.instructions+=2;NFSU2_TR(0x65d95c);
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
B65d95e:{NFSU2_TR(0x65d95e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65dc5b;}}
}
B65d964:L65d964:{c.instructions+=2;NFSU2_TR(0x65d964);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65d967:{NFSU2_TR(0x65d967);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L65dd80;}}
}
B65d96d:L65d96d:{c.instructions+=2;NFSU2_TR(0x65d96d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65d970:{NFSU2_TR(0x65d970);
if(r1(R+518)){{goto L65d9cd;}}
}
B65d972:L65d972:{c.instructions+=2;NFSU2_TR(0x65d972);
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
B65d975:{NFSU2_TR(0x65d975);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65dc5b;}}
}
B65d97b:L65d97b:{c.instructions+=6;NFSU2_TR(0x65d97b);
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
B65d97d:{NFSU2_TR(0x65d97d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65d980:{NFSU2_TR(0x65d980);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65d983:{NFSU2_TR(0x65d983);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65d986:{NFSU2_TR(0x65d986);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B65d988:{NFSU2_TR(0x65d988);
if(r1(R+518)){{goto L65dc62;}}
}
B65d98e:L65d98e:{c.instructions+=5;NFSU2_TR(0x65d98e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65d991:{NFSU2_TR(0x65d991);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B65d993:{NFSU2_TR(0x65d993);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65d995:{NFSU2_TR(0x65d995);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B65d997:{NFSU2_TR(0x65d997);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65d9c3;}}
}
B65d999:L65d999:{c.instructions+=8;NFSU2_TR(0x65d999);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65d99c:{NFSU2_TR(0x65d99c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65d99f:{NFSU2_TR(0x65d99f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65d9a2:{NFSU2_TR(0x65d9a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65d9a5:{NFSU2_TR(0x65d9a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65d9a8:{NFSU2_TR(0x65d9a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65d9ab:{NFSU2_TR(0x65d9ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65d9ae:{NFSU2_TR(0x65d9ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65d9b3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d92fu);}goto L65d92f;}
}
B65d9b3:L65d9b3:{c.instructions+=3;NFSU2_TR(0x65d9b3);
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
B65d9b5:{NFSU2_TR(0x65d9b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65d9b8:{NFSU2_TR(0x65d9b8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65dc62;}}
}
B65d9be:L65d9be:{c.instructions+=3;NFSU2_TR(0x65d9be);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B65d9bf:{NFSU2_TR(0x65d9bf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B65d9c1:{NFSU2_TR(0x65d9c1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d999u);}goto L65d999;}}
}
B65d9c3:L65d9c3:{c.instructions+=2;NFSU2_TR(0x65d9c3);
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
B65d9c6:{NFSU2_TR(0x65d9c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65d98eu);}goto L65d98e;}}
}
B65d9c8:L65d9c8:{c.instructions+=1;NFSU2_TR(0x65d9c8);
{goto L65dc62;}
}
B65d9cd:L65d9cd:{c.instructions+=2;NFSU2_TR(0x65d9cd);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xfull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65d9d0:{NFSU2_TR(0x65d9d0);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L65dc4b;}}
}
B65d9d6:L65d9d6:{c.instructions+=1;NFSU2_TR(0x65d9d6);
if(r1(R+518)){{goto L65db41;}}
}
B65d9dc:L65d9dc:{c.instructions+=2;NFSU2_TR(0x65d9dc);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B65d9df:{NFSU2_TR(0x65d9df);
if(r1(R+518)){{goto L65daae;}}
}
B65d9e5:L65d9e5:{c.instructions+=1;NFSU2_TR(0x65d9e5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L65dc5b;}}
}
B65d9eb:L65d9eb:{c.instructions+=2;NFSU2_TR(0x65d9eb);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65d9ee:{NFSU2_TR(0x65d9ee);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L65d9f8;}}
}
B65d9f0:L65d9f0:{c.instructions+=2;NFSU2_TR(0x65d9f0);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0xeull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xeull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xeull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65d9f3:{NFSU2_TR(0x65d9f3);
{goto L65dc55;}
}
B65d9f8:L65d9f8:{c.instructions+=2;NFSU2_TR(0x65d9f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65d9fa:{NFSU2_TR(0x65d9fa);
if(r1(R+518)){{goto L65dd75;}}
}
B65da00:L65da00:{c.instructions+=2;NFSU2_TR(0x65da00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65da03:{NFSU2_TR(0x65da03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65da06:L65da06:{c.instructions+=3;NFSU2_TR(0x65da06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65da09:{NFSU2_TR(0x65da09);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65da0b:{NFSU2_TR(0x65da0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65da13;}}
}
B65da0d:L65da0d:{c.instructions+=3;NFSU2_TR(0x65da0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65da0f:{NFSU2_TR(0x65da0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65da11:{NFSU2_TR(0x65da11);
{goto L65da1d;}
}
B65da13:L65da13:{c.instructions+=4;NFSU2_TR(0x65da13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B65da15:{NFSU2_TR(0x65da15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B65da17:{NFSU2_TR(0x65da17);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65da1a:{NFSU2_TR(0x65da1a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B65da1d:L65da1d:{c.instructions+=7;NFSU2_TR(0x65da1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65da20:{NFSU2_TR(0x65da20);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65da23:{NFSU2_TR(0x65da23);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B65da26:{NFSU2_TR(0x65da26);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B65da29:{NFSU2_TR(0x65da29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65da2c:{NFSU2_TR(0x65da2c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65da2e:{NFSU2_TR(0x65da2e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65da36;}}
}
B65da30:L65da30:{c.instructions+=3;NFSU2_TR(0x65da30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65da32:{NFSU2_TR(0x65da32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65da34:{NFSU2_TR(0x65da34);
{goto L65da40;}
}
B65da36:L65da36:{c.instructions+=4;NFSU2_TR(0x65da36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65da38:{NFSU2_TR(0x65da38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65da3a:{NFSU2_TR(0x65da3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65da3d:{NFSU2_TR(0x65da3d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B65da40:L65da40:{c.instructions+=7;NFSU2_TR(0x65da40);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B65da43:{NFSU2_TR(0x65da43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65da46:{NFSU2_TR(0x65da46);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65da49:{NFSU2_TR(0x65da49);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65da4c:{NFSU2_TR(0x65da4c);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65da4f:{NFSU2_TR(0x65da4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B65da52:{NFSU2_TR(0x65da52);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65da7c;}}
}
B65da54:L65da54:{c.instructions+=2;NFSU2_TR(0x65da54);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
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
B65da58:{NFSU2_TR(0x65da58);
if(r1(R+518)){{goto L65da63;}}
}
B65da5a:L65da5a:{c.instructions+=4;NFSU2_TR(0x65da5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65da5d:{NFSU2_TR(0x65da5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65da5f:{NFSU2_TR(0x65da5f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65da60:{NFSU2_TR(0x65da60);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65da63ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65da63:L65da63:{c.instructions+=3;NFSU2_TR(0x65da63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65da66:{NFSU2_TR(0x65da66);
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
B65da68:{NFSU2_TR(0x65da68);
if(r1(R+518)){{goto L65da74;}}
}
B65da6a:L65da6a:{c.instructions+=3;NFSU2_TR(0x65da6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65da6c:{NFSU2_TR(0x65da6c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65da6d:{NFSU2_TR(0x65da6d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65da70ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65da70:L65da70:{c.instructions+=1;NFSU2_TR(0x65da70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65da74:L65da74:{c.instructions+=3;NFSU2_TR(0x65da74);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65da77:{NFSU2_TR(0x65da77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65da7a:{NFSU2_TR(0x65da7a);
{goto L65da97;}
}
B65da7c:L65da7c:{c.instructions+=3;NFSU2_TR(0x65da7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65da7f:{NFSU2_TR(0x65da7f);
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
B65da81:{NFSU2_TR(0x65da81);
if(r1(R+518)){{goto L65da8d;}}
}
B65da83:L65da83:{c.instructions+=3;NFSU2_TR(0x65da83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65da85:{NFSU2_TR(0x65da85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65da86:{NFSU2_TR(0x65da86);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65da89ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65da89:L65da89:{c.instructions+=1;NFSU2_TR(0x65da89);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65da8d:L65da8d:{c.instructions+=2;NFSU2_TR(0x65da8d);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
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
B65da91:{NFSU2_TR(0x65da91);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65dc5b;}}
}
B65da97:L65da97:{c.instructions+=5;NFSU2_TR(0x65da97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65da9a:{NFSU2_TR(0x65da9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B65da9d:{NFSU2_TR(0x65da9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+12)),r4(U+0));
}
B65daa0:{NFSU2_TR(0x65daa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65daa3:{NFSU2_TR(0x65daa3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65da06u);}goto L65da06;}}
}
B65daa9:L65daa9:{c.instructions+=1;NFSU2_TR(0x65daa9);
{goto L65dd75;}
}
B65daae:L65daae:{c.instructions+=2;NFSU2_TR(0x65daae);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65dab0:{NFSU2_TR(0x65dab0);
if(r1(R+518)){{goto L65dd75;}}
}
B65dab6:L65dab6:{c.instructions+=2;NFSU2_TR(0x65dab6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65dab9:{NFSU2_TR(0x65dab9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65dabc:L65dabc:{c.instructions+=3;NFSU2_TR(0x65dabc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65dabf:{NFSU2_TR(0x65dabf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65dac1:{NFSU2_TR(0x65dac1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65dac9;}}
}
B65dac3:L65dac3:{c.instructions+=3;NFSU2_TR(0x65dac3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65dac5:{NFSU2_TR(0x65dac5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65dac7:{NFSU2_TR(0x65dac7);
{goto L65dad3;}
}
B65dac9:L65dac9:{c.instructions+=4;NFSU2_TR(0x65dac9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65dacb:{NFSU2_TR(0x65dacb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65dacd:{NFSU2_TR(0x65dacd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65dad0:{NFSU2_TR(0x65dad0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B65dad3:L65dad3:{c.instructions+=7;NFSU2_TR(0x65dad3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65dad6:{NFSU2_TR(0x65dad6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65dad9:{NFSU2_TR(0x65dad9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B65dadc:{NFSU2_TR(0x65dadc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B65dadf:{NFSU2_TR(0x65dadf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65dae2:{NFSU2_TR(0x65dae2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65dae4:{NFSU2_TR(0x65dae4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65daef;}}
}
B65dae6:L65dae6:{c.instructions+=4;NFSU2_TR(0x65dae6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65dae9:{NFSU2_TR(0x65dae9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65daeb:{NFSU2_TR(0x65daeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65daed:{NFSU2_TR(0x65daed);
{goto L65dafc;}
}
B65daef:L65daef:{c.instructions+=5;NFSU2_TR(0x65daef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65daf2:{NFSU2_TR(0x65daf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65daf4:{NFSU2_TR(0x65daf4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65daf6:{NFSU2_TR(0x65daf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65daf9:{NFSU2_TR(0x65daf9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B65dafc:L65dafc:{c.instructions+=6;NFSU2_TR(0x65dafc);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
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
B65db00:{NFSU2_TR(0x65db00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65db03:{NFSU2_TR(0x65db03);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65db06:{NFSU2_TR(0x65db06);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B65db09:{NFSU2_TR(0x65db09);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B65db0c:{NFSU2_TR(0x65db0c);
if(r1(R+518)){{goto L65db17;}}
}
B65db0e:L65db0e:{c.instructions+=4;NFSU2_TR(0x65db0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65db11:{NFSU2_TR(0x65db11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65db13:{NFSU2_TR(0x65db13);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65db14:{NFSU2_TR(0x65db14);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65db17ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65db17:L65db17:{c.instructions+=3;NFSU2_TR(0x65db17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65db1a:{NFSU2_TR(0x65db1a);
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
B65db1c:{NFSU2_TR(0x65db1c);
if(r1(R+518)){{goto L65db28;}}
}
B65db1e:L65db1e:{c.instructions+=3;NFSU2_TR(0x65db1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65db20:{NFSU2_TR(0x65db20);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65db21:{NFSU2_TR(0x65db21);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65db24ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65db24:L65db24:{c.instructions+=1;NFSU2_TR(0x65db24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65db28:L65db28:{c.instructions+=7;NFSU2_TR(0x65db28);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65db2b:{NFSU2_TR(0x65db2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65db2e:{NFSU2_TR(0x65db2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65db31:{NFSU2_TR(0x65db31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B65db34:{NFSU2_TR(0x65db34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+12)),r4(U+0));
}
B65db37:{NFSU2_TR(0x65db37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65db3a:{NFSU2_TR(0x65db3a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65dabcu);}goto L65dabc;}}
}
B65db3c:L65db3c:{c.instructions+=1;NFSU2_TR(0x65db3c);
{goto L65dd75;}
}
B65db41:L65db41:{c.instructions+=2;NFSU2_TR(0x65db41);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65db43:{NFSU2_TR(0x65db43);
if(r1(R+518)){{goto L65dd75;}}
}
B65db49:L65db49:{c.instructions+=3;NFSU2_TR(0x65db49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65db4c:{NFSU2_TR(0x65db4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65db4e:{NFSU2_TR(0x65db4e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65db59;}}
}
B65db50:L65db50:{c.instructions+=4;NFSU2_TR(0x65db50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65db53:{NFSU2_TR(0x65db53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65db55:{NFSU2_TR(0x65db55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65db57:{NFSU2_TR(0x65db57);
{goto L65db66;}
}
B65db59:L65db59:{c.instructions+=5;NFSU2_TR(0x65db59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65db5c:{NFSU2_TR(0x65db5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65db5e:{NFSU2_TR(0x65db5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65db60:{NFSU2_TR(0x65db60);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65db63:{NFSU2_TR(0x65db63);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B65db66:L65db66:{c.instructions+=7;NFSU2_TR(0x65db66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65db69:{NFSU2_TR(0x65db69);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65db6c:{NFSU2_TR(0x65db6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B65db6f:{NFSU2_TR(0x65db6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B65db72:{NFSU2_TR(0x65db72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65db75:{NFSU2_TR(0x65db75);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65db77:{NFSU2_TR(0x65db77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65db82;}}
}
B65db79:L65db79:{c.instructions+=4;NFSU2_TR(0x65db79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65db7c:{NFSU2_TR(0x65db7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65db7e:{NFSU2_TR(0x65db7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65db80:{NFSU2_TR(0x65db80);
{goto L65db8f;}
}
B65db82:L65db82:{c.instructions+=5;NFSU2_TR(0x65db82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65db85:{NFSU2_TR(0x65db85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65db87:{NFSU2_TR(0x65db87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65db89:{NFSU2_TR(0x65db89);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65db8c:{NFSU2_TR(0x65db8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B65db8f:L65db8f:{c.instructions+=6;NFSU2_TR(0x65db8f);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
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
B65db93:{NFSU2_TR(0x65db93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65db96:{NFSU2_TR(0x65db96);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65db99:{NFSU2_TR(0x65db99);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B65db9c:{NFSU2_TR(0x65db9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B65db9f:{NFSU2_TR(0x65db9f);
if(r1(R+518)){{goto L65dbaa;}}
}
B65dba1:L65dba1:{c.instructions+=4;NFSU2_TR(0x65dba1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65dba4:{NFSU2_TR(0x65dba4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65dba6:{NFSU2_TR(0x65dba6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65dba7:{NFSU2_TR(0x65dba7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65dbaaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65dbaa:L65dbaa:{c.instructions+=3;NFSU2_TR(0x65dbaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65dbad:{NFSU2_TR(0x65dbad);
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
B65dbaf:{NFSU2_TR(0x65dbaf);
if(r1(R+518)){{goto L65dbbb;}}
}
B65dbb1:L65dbb1:{c.instructions+=3;NFSU2_TR(0x65dbb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65dbb3:{NFSU2_TR(0x65dbb3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65dbb4:{NFSU2_TR(0x65dbb4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65dbb7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65dbb7:L65dbb7:{c.instructions+=1;NFSU2_TR(0x65dbb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65dbbb:L65dbbb:{c.instructions+=8;NFSU2_TR(0x65dbbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65dbbe:{NFSU2_TR(0x65dbbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65dbc1:{NFSU2_TR(0x65dbc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65dbc4:{NFSU2_TR(0x65dbc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65dbc7:{NFSU2_TR(0x65dbc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65dbca:{NFSU2_TR(0x65dbca);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65dbcd:{NFSU2_TR(0x65dbcd);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65dbd0:{NFSU2_TR(0x65dbd0);
if(r1(R+518)){{goto L65dbf9;}}
}
B65dbd2:L65dbd2:{c.instructions+=2;NFSU2_TR(0x65dbd2);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65dbd6:{NFSU2_TR(0x65dbd6);
if(r1(R+518)){{goto L65dbf9;}}
}
B65dbd8:L65dbd8:{c.instructions+=3;NFSU2_TR(0x65dbd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65dbdb:{NFSU2_TR(0x65dbdb);
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
B65dbdd:{NFSU2_TR(0x65dbdd);
if(r1(R+518)){{goto L65dbe9;}}
}
B65dbdf:L65dbdf:{c.instructions+=3;NFSU2_TR(0x65dbdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65dbe1:{NFSU2_TR(0x65dbe1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65dbe2:{NFSU2_TR(0x65dbe2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65dbe5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65dbe5:L65dbe5:{c.instructions+=1;NFSU2_TR(0x65dbe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65dbe9:L65dbe9:{c.instructions+=2;NFSU2_TR(0x65dbe9);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
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
B65dbed:{NFSU2_TR(0x65dbed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65dc5b;}}
}
B65dbef:L65dbef:{c.instructions+=3;NFSU2_TR(0x65dbef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65dbf0:{NFSU2_TR(0x65dbf0);
__builtin_memmove((R+4),(R+12),4);
}
B65dbf2:{NFSU2_TR(0x65dbf2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65dbf7ull));
TAIL_STATIC(0x65b9ceu,65b);
}
B65dbf7:L65dbf7:{c.instructions+=1;NFSU2_TR(0x65dbf7);
{goto L65dc31;}
}
B65dbf9:L65dbf9:{c.instructions+=2;NFSU2_TR(0x65dbf9);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
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
B65dbfd:{NFSU2_TR(0x65dbfd);
if(r1(R+518)){{goto L65dc08;}}
}
B65dbff:L65dbff:{c.instructions+=4;NFSU2_TR(0x65dbff);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65dc02:{NFSU2_TR(0x65dc02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65dc04:{NFSU2_TR(0x65dc04);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65dc05:{NFSU2_TR(0x65dc05);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65dc08ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65dc08:L65dc08:{c.instructions+=3;NFSU2_TR(0x65dc08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65dc0b:{NFSU2_TR(0x65dc0b);
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
B65dc0d:{NFSU2_TR(0x65dc0d);
if(r1(R+518)){{goto L65dc19;}}
}
B65dc0f:L65dc0f:{c.instructions+=3;NFSU2_TR(0x65dc0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65dc11:{NFSU2_TR(0x65dc11);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65dc12:{NFSU2_TR(0x65dc12);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65dc15ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65dc15:L65dc15:{c.instructions+=1;NFSU2_TR(0x65dc15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65dc19:L65dc19:{c.instructions+=8;NFSU2_TR(0x65dc19);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65dc1c:{NFSU2_TR(0x65dc1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65dc1f:{NFSU2_TR(0x65dc1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65dc22:{NFSU2_TR(0x65dc22);
u8 U[4];
w4(U+0,u32(u32(u32(0x1eull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B65dc25:{NFSU2_TR(0x65dc25);
u8 U[4];
w4(U+0,u32(u32(u32(0x1eull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B65dc28:{NFSU2_TR(0x65dc28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B65dc2b:{NFSU2_TR(0x65dc2b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x2ull))));
}
B65dc2e:{NFSU2_TR(0x65dc2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))^u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B65dc31:L65dc31:{c.instructions+=6;NFSU2_TR(0x65dc31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65dc34:{NFSU2_TR(0x65dc34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B65dc37:{NFSU2_TR(0x65dc37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65dc3a:{NFSU2_TR(0x65dc3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B65dc3d:{NFSU2_TR(0x65dc3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65dc40:{NFSU2_TR(0x65dc40);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65db49u);}goto L65db49;}}
}
B65dc46:L65dc46:{c.instructions+=1;NFSU2_TR(0x65dc46);
{goto L65dd75;}
}
B65dc4b:L65dc4b:{c.instructions+=2;NFSU2_TR(0x65dc4b);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B65dc4e:{NFSU2_TR(0x65dc4e);
if(r1(R+518)){{goto L65dc6c;}}
}
B65dc50:L65dc50:{c.instructions+=1;NFSU2_TR(0x65dc50);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L65dc5b;}}
}
B65dc52:L65dc52:{c.instructions+=1;NFSU2_TR(0x65dc52);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x12ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x12ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x12ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65dc55:L65dc55:{c.instructions+=1;NFSU2_TR(0x65dc55);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L65dd75;}}
}
B65dc5b:L65dc5b:{c.instructions+=1;NFSU2_TR(0x65dc5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B65dc62:L65dc62:{c.instructions+=6;NFSU2_TR(0x65dc62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65dc65:{NFSU2_TR(0x65dc65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65dc66:{NFSU2_TR(0x65dc66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65dc67:{NFSU2_TR(0x65dc67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65dc68:{NFSU2_TR(0x65dc68);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B65dc69:{NFSU2_TR(0x65dc69);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65dc6c:L65dc6c:{c.instructions+=2;NFSU2_TR(0x65dc6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65dc6e:{NFSU2_TR(0x65dc6e);
if(r1(R+518)){{goto L65dd75;}}
}
B65dc74:L65dc74:{c.instructions+=3;NFSU2_TR(0x65dc74);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65dc77:{NFSU2_TR(0x65dc77);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65dc79:{NFSU2_TR(0x65dc79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65dc84;}}
}
B65dc7b:L65dc7b:{c.instructions+=4;NFSU2_TR(0x65dc7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65dc7e:{NFSU2_TR(0x65dc7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65dc80:{NFSU2_TR(0x65dc80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65dc82:{NFSU2_TR(0x65dc82);
{goto L65dc91;}
}
B65dc84:L65dc84:{c.instructions+=5;NFSU2_TR(0x65dc84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65dc87:{NFSU2_TR(0x65dc87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65dc89:{NFSU2_TR(0x65dc89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65dc8b:{NFSU2_TR(0x65dc8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65dc8e:{NFSU2_TR(0x65dc8e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B65dc91:L65dc91:{c.instructions+=7;NFSU2_TR(0x65dc91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65dc94:{NFSU2_TR(0x65dc94);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65dc97:{NFSU2_TR(0x65dc97);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B65dc9a:{NFSU2_TR(0x65dc9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B65dc9d:{NFSU2_TR(0x65dc9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65dca0:{NFSU2_TR(0x65dca0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65dca2:{NFSU2_TR(0x65dca2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65dcad;}}
}
B65dca4:L65dca4:{c.instructions+=4;NFSU2_TR(0x65dca4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65dca7:{NFSU2_TR(0x65dca7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65dca9:{NFSU2_TR(0x65dca9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65dcab:{NFSU2_TR(0x65dcab);
{goto L65dcba;}
}
B65dcad:L65dcad:{c.instructions+=5;NFSU2_TR(0x65dcad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65dcb0:{NFSU2_TR(0x65dcb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65dcb2:{NFSU2_TR(0x65dcb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65dcb4:{NFSU2_TR(0x65dcb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65dcb7:{NFSU2_TR(0x65dcb7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B65dcba:L65dcba:{c.instructions+=6;NFSU2_TR(0x65dcba);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
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
B65dcbe:{NFSU2_TR(0x65dcbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65dcc1:{NFSU2_TR(0x65dcc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65dcc4:{NFSU2_TR(0x65dcc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B65dcc7:{NFSU2_TR(0x65dcc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B65dcca:{NFSU2_TR(0x65dcca);
if(r1(R+518)){{goto L65dcd5;}}
}
B65dccc:L65dccc:{c.instructions+=4;NFSU2_TR(0x65dccc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65dccf:{NFSU2_TR(0x65dccf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65dcd1:{NFSU2_TR(0x65dcd1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65dcd2:{NFSU2_TR(0x65dcd2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65dcd5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65dcd5:L65dcd5:{c.instructions+=3;NFSU2_TR(0x65dcd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65dcd8:{NFSU2_TR(0x65dcd8);
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
B65dcda:{NFSU2_TR(0x65dcda);
if(r1(R+518)){{goto L65dce6;}}
}
B65dcdc:L65dcdc:{c.instructions+=3;NFSU2_TR(0x65dcdc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65dcde:{NFSU2_TR(0x65dcde);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65dcdf:{NFSU2_TR(0x65dcdf);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65dce2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65dce2:L65dce2:{c.instructions+=1;NFSU2_TR(0x65dce2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65dce6:L65dce6:{c.instructions+=8;NFSU2_TR(0x65dce6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65dce9:{NFSU2_TR(0x65dce9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65dcec:{NFSU2_TR(0x65dcec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65dcef:{NFSU2_TR(0x65dcef);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65dcf2:{NFSU2_TR(0x65dcf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65dcf5:{NFSU2_TR(0x65dcf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65dcf8:{NFSU2_TR(0x65dcf8);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65dcfb:{NFSU2_TR(0x65dcfb);
if(r1(R+518)){{goto L65dd28;}}
}
B65dcfd:L65dcfd:{c.instructions+=2;NFSU2_TR(0x65dcfd);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65dd01:{NFSU2_TR(0x65dd01);
if(r1(R+518)){{goto L65dd28;}}
}
B65dd03:L65dd03:{c.instructions+=3;NFSU2_TR(0x65dd03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65dd06:{NFSU2_TR(0x65dd06);
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
B65dd08:{NFSU2_TR(0x65dd08);
if(r1(R+518)){{goto L65dd14;}}
}
B65dd0a:L65dd0a:{c.instructions+=3;NFSU2_TR(0x65dd0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65dd0c:{NFSU2_TR(0x65dd0c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65dd0d:{NFSU2_TR(0x65dd0d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65dd10ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65dd10:L65dd10:{c.instructions+=1;NFSU2_TR(0x65dd10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65dd14:L65dd14:{c.instructions+=2;NFSU2_TR(0x65dd14);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
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
B65dd18:{NFSU2_TR(0x65dd18);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65dc5bu);}goto L65dc5b;}}
}
B65dd1e:L65dd1e:{c.instructions+=3;NFSU2_TR(0x65dd1e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65dd1f:{NFSU2_TR(0x65dd1f);
__builtin_memmove((R+4),(R+12),4);
}
B65dd21:{NFSU2_TR(0x65dd21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65dd26ull));
TAIL_STATIC(0x65b970u,65b);
}
B65dd26:L65dd26:{c.instructions+=1;NFSU2_TR(0x65dd26);
{goto L65dd60;}
}
B65dd28:L65dd28:{c.instructions+=2;NFSU2_TR(0x65dd28);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
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
B65dd2c:{NFSU2_TR(0x65dd2c);
if(r1(R+518)){{goto L65dd37;}}
}
B65dd2e:L65dd2e:{c.instructions+=4;NFSU2_TR(0x65dd2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65dd31:{NFSU2_TR(0x65dd31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65dd33:{NFSU2_TR(0x65dd33);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65dd34:{NFSU2_TR(0x65dd34);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65dd37ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65dd37:L65dd37:{c.instructions+=3;NFSU2_TR(0x65dd37);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65dd3a:{NFSU2_TR(0x65dd3a);
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
B65dd3c:{NFSU2_TR(0x65dd3c);
if(r1(R+518)){{goto L65dd48;}}
}
B65dd3e:L65dd3e:{c.instructions+=3;NFSU2_TR(0x65dd3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65dd40:{NFSU2_TR(0x65dd40);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65dd41:{NFSU2_TR(0x65dd41);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65dd44ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65dd44:L65dd44:{c.instructions+=1;NFSU2_TR(0x65dd44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65dd48:L65dd48:{c.instructions+=8;NFSU2_TR(0x65dd48);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65dd4b:{NFSU2_TR(0x65dd4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65dd4e:{NFSU2_TR(0x65dd4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65dd51:{NFSU2_TR(0x65dd51);
u8 U[4];
w4(U+0,u32(u32(u32(0x1eull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B65dd54:{NFSU2_TR(0x65dd54);
u8 U[4];
w4(U+0,u32(u32(u32(0x1eull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B65dd57:{NFSU2_TR(0x65dd57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B65dd5a:{NFSU2_TR(0x65dd5a);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x2ull))));
}
B65dd5d:{NFSU2_TR(0x65dd5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))^u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B65dd60:L65dd60:{c.instructions+=6;NFSU2_TR(0x65dd60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65dd63:{NFSU2_TR(0x65dd63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B65dd66:{NFSU2_TR(0x65dd66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65dd69:{NFSU2_TR(0x65dd69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B65dd6c:{NFSU2_TR(0x65dd6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65dd6f:{NFSU2_TR(0x65dd6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65dc74u);}goto L65dc74;}}
}
B65dd75:L65dd75:{c.instructions+=3;NFSU2_TR(0x65dd75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65dd78:{NFSU2_TR(0x65dd78);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+512,carry<u32>(r4(U+0),u32(0x14ull)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+523,scarry<u32>(r4(U+0),u32(0x14ull)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x14ull))));
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
B65dd7b:{NFSU2_TR(0x65dd7b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65dc62u);}goto L65dc62;}
}
B65dd80:L65dd80:{c.instructions+=5;NFSU2_TR(0x65dd80);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65dd83:{NFSU2_TR(0x65dd83);
u8 U[32];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B65dd87:{NFSU2_TR(0x65dd87);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(s64(s32(r4(R+12)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+4)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
}
B65dd8a:{NFSU2_TR(0x65dd8a);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B65dd8b:{NFSU2_TR(0x65dd8b);
if(r1(R+518)){{goto L65dd97;}}
}
B65dd8d:L65dd8d:{c.instructions+=2;NFSU2_TR(0x65dd8d);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B65dd8e:{NFSU2_TR(0x65dd8e);
if(r1(R+518)){{goto L65dd97;}}
}
B65dd90:L65dd90:{c.instructions+=2;NFSU2_TR(0x65dd90);
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
B65dd91:{NFSU2_TR(0x65dd91);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65dc5bu);}goto L65dc5b;}}
}
B65dd97:L65dd97:{c.instructions+=9;NFSU2_TR(0x65dd97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65dd9a:{NFSU2_TR(0x65dd9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B65dd9c:{NFSU2_TR(0x65dd9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65dd9f:{NFSU2_TR(0x65dd9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B65dda1:{NFSU2_TR(0x65dda1);
__builtin_memmove((R+0),(R+4),4);
}
B65dda3:{NFSU2_TR(0x65dda3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B65dda6:{NFSU2_TR(0x65dda6);
__builtin_memmove((R+4),(R+0),4);
}
B65dda8:{NFSU2_TR(0x65dda8);
__builtin_memmove((R+12),(R+4),4);
}
B65ddaa:{NFSU2_TR(0x65ddaa);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B65ddad:L65ddad:{c.instructions+=1;NFSU2_TR(0x65ddad);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L65ddaf;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65ddadu);}goto L65ddad;}
}
B65ddaf:L65ddaf:{c.instructions+=2;NFSU2_TR(0x65ddaf);
__builtin_memmove((R+4),(R+12),4);
}
B65ddb1:{NFSU2_TR(0x65ddb1);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B65ddb4:L65ddb4:{c.instructions+=1;NFSU2_TR(0x65ddb4);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L65ddb6;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65ddb4u);}goto L65ddb4;}
}
B65ddb6:L65ddb6:{c.instructions+=6;NFSU2_TR(0x65ddb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65ddb9:{NFSU2_TR(0x65ddb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+0))));
s4(u32(r4(R+4)),r4(U+0));
}
B65ddbb:{NFSU2_TR(0x65ddbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+0))));
s4(u32(r4(R+8)),r4(U+0));
}
B65ddbd:{NFSU2_TR(0x65ddbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ddc0:{NFSU2_TR(0x65ddc0);
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
B65ddc3:{NFSU2_TR(0x65ddc3);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65dc62u);}goto L65dc62;}
}
B65ddc8:L65ddc8:{c.instructions+=16;NFSU2_TR(0x65ddc8);
__builtin_memmove((R+28),(R+28),4);
}
B65ddca:{NFSU2_TR(0x65ddca);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ddcb:{NFSU2_TR(0x65ddcb);
__builtin_memmove((R+20),(R+16),4);
}
B65ddcd:{NFSU2_TR(0x65ddcd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ddce:{NFSU2_TR(0x65ddce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ddcf:{NFSU2_TR(0x65ddcf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ddd0:{NFSU2_TR(0x65ddd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ddd1:{NFSU2_TR(0x65ddd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65ddd4:{NFSU2_TR(0x65ddd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65ddd6:{NFSU2_TR(0x65ddd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B65ddd8:{NFSU2_TR(0x65ddd8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ddd9:{NFSU2_TR(0x65ddd9);
__builtin_memmove((R+12),(R+4),4);
}
B65dddb:{NFSU2_TR(0x65dddb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65ddde:{NFSU2_TR(0x65ddde);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B65dde0:{NFSU2_TR(0x65dde0);
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
B65dde2:{NFSU2_TR(0x65dde2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x65e15cu,65e);}
}
B65dde8:L65dde8:{c.instructions+=2;NFSU2_TR(0x65dde8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65ddeb:{NFSU2_TR(0x65ddeb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x65e115u,65e);}
}
B65ddf1:L65ddf1:{c.instructions+=2;NFSU2_TR(0x65ddf1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65ddf4:{NFSU2_TR(0x65ddf4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L65dfa4;}}
}
B65ddfa:L65ddfa:{c.instructions+=2;NFSU2_TR(0x65ddfa);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65ddfd:{NFSU2_TR(0x65ddfd);
if(r1(R+518)){{goto L65de63;}}
}
B65ddff:L65ddff:{c.instructions+=2;NFSU2_TR(0x65ddff);
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
B65de02:{NFSU2_TR(0x65de02);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x65e15cu,65e);}
}
B65de08:L65de08:{c.instructions+=6;NFSU2_TR(0x65de08);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65de0c:{NFSU2_TR(0x65de0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65de0f:{NFSU2_TR(0x65de0f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65de12:{NFSU2_TR(0x65de12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65de15:{NFSU2_TR(0x65de15);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B65de17:{NFSU2_TR(0x65de17);
if(r1(R+518)){{goto L65de5c;}}
}
B65de19:L65de19:{c.instructions+=4;NFSU2_TR(0x65de19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65de1d:{NFSU2_TR(0x65de1d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65de21:{NFSU2_TR(0x65de21);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B65de23:{NFSU2_TR(0x65de23);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65de57;}}
}
B65de25:L65de25:{c.instructions+=4;NFSU2_TR(0x65de25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65de27:{NFSU2_TR(0x65de27);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65de2a:{NFSU2_TR(0x65de2a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
}
B65de2d:{NFSU2_TR(0x65de2d);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L65de32;}}
}
B65de2f:L65de2f:{c.instructions+=2;NFSU2_TR(0x65de2f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65de31:{NFSU2_TR(0x65de31);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B65de32:L65de32:{c.instructions+=7;NFSU2_TR(0x65de32);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65de35:{NFSU2_TR(0x65de35);
__builtin_memmove((R+4),(R+12),4);
}
B65de37:{NFSU2_TR(0x65de37);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65de38:{NFSU2_TR(0x65de38);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65de3b:{NFSU2_TR(0x65de3b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65de3e:{NFSU2_TR(0x65de3e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65de3f:{NFSU2_TR(0x65de3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65de44ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65ddc8u);}goto L65ddc8;}
}
B65de44:L65de44:{c.instructions+=2;NFSU2_TR(0x65de44);
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
B65de46:{NFSU2_TR(0x65de46);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x65e161u,65e);}
}
B65de4c:L65de4c:{c.instructions+=4;NFSU2_TR(0x65de4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65de4f:{NFSU2_TR(0x65de4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65de52:{NFSU2_TR(0x65de52);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B65de55:{NFSU2_TR(0x65de55);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65de25u);}goto L65de25;}}
}
B65de57:L65de57:{c.instructions+=2;NFSU2_TR(0x65de57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65de5a:{NFSU2_TR(0x65de5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65de19u);}goto L65de19;}}
}
B65de5c:L65de5c:{c.instructions+=2;NFSU2_TR(0x65de5c);
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
B65de5e:{NFSU2_TR(0x65de5e);
TAIL_STATIC(0x65e161u,65e);
}
B65de63:L65de63:{c.instructions+=2;NFSU2_TR(0x65de63);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65de66:{NFSU2_TR(0x65de66);
if(r1(R+518)){{goto L65df5a;}}
}
B65de6c:L65de6c:{c.instructions+=1;NFSU2_TR(0x65de6c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L65df9c;}}
}
B65de72:L65de72:{c.instructions+=2;NFSU2_TR(0x65de72);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65de75:{NFSU2_TR(0x65de75);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L65df19;}}
}
B65de7b:L65de7b:{c.instructions+=2;NFSU2_TR(0x65de7b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65de7e:{NFSU2_TR(0x65de7e);
if(r1(R+518)){{goto L65ded1;}}
}
B65de80:L65de80:{c.instructions+=2;NFSU2_TR(0x65de80);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65de83:{NFSU2_TR(0x65de83);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65df9c;}}
}
B65de89:L65de89:{c.instructions+=2;NFSU2_TR(0x65de89);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65de8c:{NFSU2_TR(0x65de8c);
if(r1(R+518)){{goto L65df9c;}}
}
B65de92:L65de92:{c.instructions+=2;NFSU2_TR(0x65de92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65de95:{NFSU2_TR(0x65de95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65de98:L65de98:{c.instructions+=11;NFSU2_TR(0x65de98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65de9b:{NFSU2_TR(0x65de9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65de9e:{NFSU2_TR(0x65de9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65dea4:{NFSU2_TR(0x65dea4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B65dea7:{NFSU2_TR(0x65dea7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65deaa:{NFSU2_TR(0x65deaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65deac:{NFSU2_TR(0x65deac);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B65deae:{NFSU2_TR(0x65deae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65deb0:{NFSU2_TR(0x65deb0);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B65deb2:{NFSU2_TR(0x65deb2);
__builtin_memmove((R+4),(R+12),4);
}
B65deb4:{NFSU2_TR(0x65deb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65deb9ull));
TAIL_STATIC(0x65cc10u,65c);
}
B65deb9:L65deb9:{c.instructions+=2;NFSU2_TR(0x65deb9);
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
B65debb:{NFSU2_TR(0x65debb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x65e161u,65e);}
}
B65dec1:L65dec1:{c.instructions+=4;NFSU2_TR(0x65dec1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B65dec4:{NFSU2_TR(0x65dec4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B65dec7:{NFSU2_TR(0x65dec7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65deca:{NFSU2_TR(0x65deca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65de98u);}goto L65de98;}}
}
B65decc:L65decc:{c.instructions+=1;NFSU2_TR(0x65decc);
{goto L65df99;}
}
B65ded1:L65ded1:{c.instructions+=2;NFSU2_TR(0x65ded1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65ded4:{NFSU2_TR(0x65ded4);
if(r1(R+518)){{goto L65df9c;}}
}
B65deda:L65deda:{c.instructions+=2;NFSU2_TR(0x65deda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65dedd:{NFSU2_TR(0x65dedd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65dee0:L65dee0:{c.instructions+=11;NFSU2_TR(0x65dee0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65dee3:{NFSU2_TR(0x65dee3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65dee6:{NFSU2_TR(0x65dee6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65deec:{NFSU2_TR(0x65deec);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B65deef:{NFSU2_TR(0x65deef);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65def2:{NFSU2_TR(0x65def2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65def4:{NFSU2_TR(0x65def4);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B65def6:{NFSU2_TR(0x65def6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65def8:{NFSU2_TR(0x65def8);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B65defa:{NFSU2_TR(0x65defa);
__builtin_memmove((R+4),(R+12),4);
}
B65defc:{NFSU2_TR(0x65defc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65df01ull));
TAIL_STATIC(0x65cc10u,65c);
}
B65df01:L65df01:{c.instructions+=2;NFSU2_TR(0x65df01);
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
B65df03:{NFSU2_TR(0x65df03);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x65e161u,65e);}
}
B65df09:L65df09:{c.instructions+=4;NFSU2_TR(0x65df09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B65df0c:{NFSU2_TR(0x65df0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B65df0f:{NFSU2_TR(0x65df0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65df12:{NFSU2_TR(0x65df12);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65dee0u);}goto L65dee0;}}
}
B65df14:L65df14:{c.instructions+=1;NFSU2_TR(0x65df14);
{goto L65df99;}
}
B65df19:L65df19:{c.instructions+=2;NFSU2_TR(0x65df19);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65df1c:{NFSU2_TR(0x65df1c);
if(r1(R+518)){{goto L65df9c;}}
}
B65df1e:L65df1e:{c.instructions+=2;NFSU2_TR(0x65df1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65df21:{NFSU2_TR(0x65df21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65df24:L65df24:{c.instructions+=11;NFSU2_TR(0x65df24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65df27:{NFSU2_TR(0x65df27);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65df2a:{NFSU2_TR(0x65df2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65df30:{NFSU2_TR(0x65df30);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B65df33:{NFSU2_TR(0x65df33);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65df36:{NFSU2_TR(0x65df36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65df38:{NFSU2_TR(0x65df38);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B65df3a:{NFSU2_TR(0x65df3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65df3c:{NFSU2_TR(0x65df3c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B65df3e:{NFSU2_TR(0x65df3e);
__builtin_memmove((R+4),(R+12),4);
}
B65df40:{NFSU2_TR(0x65df40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65df45ull));
TAIL_STATIC(0x65ccc8u,65c);
}
B65df45:L65df45:{c.instructions+=2;NFSU2_TR(0x65df45);
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
B65df47:{NFSU2_TR(0x65df47);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x65e161u,65e);}
}
B65df4d:L65df4d:{c.instructions+=4;NFSU2_TR(0x65df4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B65df50:{NFSU2_TR(0x65df50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B65df53:{NFSU2_TR(0x65df53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65df56:{NFSU2_TR(0x65df56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65df24u);}goto L65df24;}}
}
B65df58:L65df58:{c.instructions+=1;NFSU2_TR(0x65df58);
{goto L65df99;}
}
B65df5a:L65df5a:{c.instructions+=2;NFSU2_TR(0x65df5a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65df5d:{NFSU2_TR(0x65df5d);
if(r1(R+518)){{goto L65df9c;}}
}
B65df5f:L65df5f:{c.instructions+=2;NFSU2_TR(0x65df5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65df62:{NFSU2_TR(0x65df62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65df65:L65df65:{c.instructions+=11;NFSU2_TR(0x65df65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65df68:{NFSU2_TR(0x65df68);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65df6b:{NFSU2_TR(0x65df6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65df71:{NFSU2_TR(0x65df71);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B65df74:{NFSU2_TR(0x65df74);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65df77:{NFSU2_TR(0x65df77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65df79:{NFSU2_TR(0x65df79);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B65df7b:{NFSU2_TR(0x65df7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65df7d:{NFSU2_TR(0x65df7d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B65df7f:{NFSU2_TR(0x65df7f);
__builtin_memmove((R+4),(R+12),4);
}
B65df81:{NFSU2_TR(0x65df81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65df86ull));
TAIL_STATIC(0x65cd6cu,65c);
}
B65df86:L65df86:{c.instructions+=2;NFSU2_TR(0x65df86);
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
B65df88:{NFSU2_TR(0x65df88);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x65e161u,65e);}
}
B65df8e:L65df8e:{c.instructions+=4;NFSU2_TR(0x65df8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B65df91:{NFSU2_TR(0x65df91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B65df94:{NFSU2_TR(0x65df94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65df97:{NFSU2_TR(0x65df97);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65df65u);}goto L65df65;}}
}
B65df99:L65df99:{c.instructions+=1;NFSU2_TR(0x65df99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65df9c:L65df9c:{c.instructions+=2;NFSU2_TR(0x65df9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x14ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B65df9f:{NFSU2_TR(0x65df9f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65de5cu);}goto L65de5c;}
}
B65dfa4:L65dfa4:{c.instructions+=5;NFSU2_TR(0x65dfa4);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B65dfa5:{NFSU2_TR(0x65dfa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65dfa8:{NFSU2_TR(0x65dfa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65dfab:{NFSU2_TR(0x65dfab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65dfae:{NFSU2_TR(0x65dfae);
if(r1(R+518)){TAIL_STATIC(0x65e09du,65e);}
}
B65dfb4:L65dfb4:{c.instructions+=2;NFSU2_TR(0x65dfb4);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B65dfb5:{NFSU2_TR(0x65dfb5);
if(r1(R+518)){TAIL_STATIC(0x65e02fu,65e);}
}
B65dfb7:L65dfb7:{c.instructions+=2;NFSU2_TR(0x65dfb7);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B65dfb8:{NFSU2_TR(0x65dfb8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x65e10au,65e);}
}
B65dfbe:L65dfbe:{c.instructions+=3;NFSU2_TR(0x65dfbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65dfc1:{NFSU2_TR(0x65dfc1);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65dfc3:{NFSU2_TR(0x65dfc3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x65e10au,65e);}
}
B65dfc9:L65dfc9:{c.instructions+=7;NFSU2_TR(0x65dfc9);
__builtin_memmove((R+8),(R+28),4);
}
B65dfcb:{NFSU2_TR(0x65dfcb);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B65dfce:{NFSU2_TR(0x65dfce);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B65dfd1:{NFSU2_TR(0x65dfd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65dfd4:{NFSU2_TR(0x65dfd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65dfd8:{NFSU2_TR(0x65dfd8);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65dfda:{NFSU2_TR(0x65dfda);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x65e01au,65e);}
}
B65dfdc:L65dfdc:{c.instructions+=2;NFSU2_TR(0x65dfdc);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65dfde:{NFSU2_TR(0x65dfde);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x65e012u,65e);}
}
B65dfe0:L65dfe0:{c.instructions+=13;NFSU2_TR(0x65dfe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65dfe3:{NFSU2_TR(0x65dfe3);
__builtin_memmove((R+4),(R+0),4);
}
B65dfe5:{NFSU2_TR(0x65dfe5);
__builtin_memmove((R+24),(R+0),4);
}
B65dfe7:{NFSU2_TR(0x65dfe7);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B65dfea:{NFSU2_TR(0x65dfea);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B65dfed:{NFSU2_TR(0x65dfed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65dff0:{NFSU2_TR(0x65dff0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65dff3:{NFSU2_TR(0x65dff3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65dff5:{NFSU2_TR(0x65dff5);
{u32 ea_=u32(r4(R+0)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B65dff8:{NFSU2_TR(0x65dff8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65dffb:{NFSU2_TR(0x65dffb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B65dffd:{NFSU2_TR(0x65dffd);
__builtin_memmove((R+0),(R+28),4);
}
B65dfff:{NFSU2_TR(0x65dfff);
{u32 ea_=u32(r4(R+12)+r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
TAIL_STATIC(0x65e002u,65e);
}
XIT:NFSU2_TR_EXIT(0x65d,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
