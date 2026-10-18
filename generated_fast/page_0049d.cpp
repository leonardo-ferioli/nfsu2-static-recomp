#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_49c(u8* __restrict R,Cpu& c);
u32 body_49e(u8* __restrict R,Cpu& c);
u32 body_49f(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_526(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_540(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_544(u8* __restrict R,Cpu& c);
u32 body_54f(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_583(u8* __restrict R,Cpu& c);
u32 body_585(u8* __restrict R,Cpu& c);
u32 body_742(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x49d,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x49d,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_49d(u8* __restrict R,Cpu& c);
u32 page_49d(Cpu& c){return body_49d(c.regs.data(),c);}
__attribute__((noinline)) u32 body_49d(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x49d001:goto L49d001;
case 0x49d002:c.instructions+=2;goto B49d002;
case 0x49d004:c.instructions+=1;goto B49d004;
case 0x49d009:goto L49d009;
case 0x49d00a:c.instructions+=1;goto B49d00a;
case 0x49d00f:goto L49d00f;
case 0x49d012:c.instructions+=5;goto B49d012;
case 0x49d015:c.instructions+=4;goto B49d015;
case 0x49d017:c.instructions+=3;goto B49d017;
case 0x49d018:c.instructions+=2;goto B49d018;
case 0x49d019:c.instructions+=1;goto B49d019;
case 0x49d01e:goto L49d01e;
case 0x49d021:c.instructions+=6;goto B49d021;
case 0x49d024:c.instructions+=5;goto B49d024;
case 0x49d026:c.instructions+=4;goto B49d026;
case 0x49d02b:c.instructions+=3;goto B49d02b;
case 0x49d02c:c.instructions+=2;goto B49d02c;
case 0x49d02d:c.instructions+=1;goto B49d02d;
case 0x49d032:goto L49d032;
case 0x49d034:c.instructions+=4;goto B49d034;
case 0x49d038:c.instructions+=3;goto B49d038;
case 0x49d03d:c.instructions+=2;goto B49d03d;
case 0x49d03e:c.instructions+=1;goto B49d03e;
case 0x49d043:goto L49d043;
case 0x49d046:c.instructions+=3;goto B49d046;
case 0x49d04a:c.instructions+=2;goto B49d04a;
case 0x49d04b:c.instructions+=1;goto B49d04b;
case 0x49d050:goto L49d050;
case 0x49d051:c.instructions+=2;goto B49d051;
case 0x49d052:c.instructions+=1;goto B49d052;
case 0x49d057:goto L49d057;
case 0x49d058:c.instructions+=1;goto B49d058;
case 0x49d05d:goto L49d05d;
case 0x49d060:c.instructions+=6;goto B49d060;
case 0x49d062:c.instructions+=5;goto B49d062;
case 0x49d067:c.instructions+=4;goto B49d067;
case 0x49d06b:c.instructions+=3;goto B49d06b;
case 0x49d06c:c.instructions+=2;goto B49d06c;
case 0x49d06d:c.instructions+=1;goto B49d06d;
case 0x49d072:goto L49d072;
case 0x49d075:c.instructions+=5;goto B49d075;
case 0x49d078:c.instructions+=4;goto B49d078;
case 0x49d07b:c.instructions+=3;goto B49d07b;
case 0x49d07c:c.instructions+=2;goto B49d07c;
case 0x49d07d:c.instructions+=1;goto B49d07d;
case 0x49d082:goto L49d082;
case 0x49d085:c.instructions+=6;goto B49d085;
case 0x49d086:c.instructions+=5;goto B49d086;
case 0x49d087:c.instructions+=4;goto B49d087;
case 0x49d088:c.instructions+=3;goto B49d088;
case 0x49d089:c.instructions+=2;goto B49d089;
case 0x49d08c:c.instructions+=1;goto B49d08c;
case 0x49d08f:goto L49d08f;
case 0x49d092:c.instructions+=1;goto B49d092;
case 0x49d098:goto L49d098;
case 0x49d09a:c.instructions+=2;goto B49d09a;
case 0x49d09d:c.instructions+=1;goto B49d09d;
case 0x49d0a0:goto L49d0a0;
case 0x49d0a3:c.instructions+=6;goto B49d0a3;
case 0x49d0a4:c.instructions+=5;goto B49d0a4;
case 0x49d0a8:c.instructions+=4;goto B49d0a8;
case 0x49d0ad:c.instructions+=3;goto B49d0ad;
case 0x49d0ae:c.instructions+=2;goto B49d0ae;
case 0x49d0b1:c.instructions+=1;goto B49d0b1;
case 0x49d0b6:goto L49d0b6;
case 0x49d0ba:c.instructions+=2;goto B49d0ba;
case 0x49d0bb:c.instructions+=1;goto B49d0bb;
case 0x49d0c0:goto L49d0c0;
case 0x49d0c2:c.instructions+=4;goto B49d0c2;
case 0x49d0c5:c.instructions+=3;goto B49d0c5;
case 0x49d0c6:c.instructions+=2;goto B49d0c6;
case 0x49d0c7:c.instructions+=1;goto B49d0c7;
case 0x49d0cc:goto L49d0cc;
case 0x49d0ce:c.instructions+=5;goto B49d0ce;
case 0x49d0d2:c.instructions+=4;goto B49d0d2;
case 0x49d0d5:c.instructions+=3;goto B49d0d5;
case 0x49d0d6:c.instructions+=2;goto B49d0d6;
case 0x49d0d7:c.instructions+=1;goto B49d0d7;
case 0x49d0dc:goto L49d0dc;
case 0x49d0e0:c.instructions+=6;goto B49d0e0;
case 0x49d0e4:c.instructions+=5;goto B49d0e4;
case 0x49d0e7:c.instructions+=4;goto B49d0e7;
case 0x49d0ea:c.instructions+=3;goto B49d0ea;
case 0x49d0eb:c.instructions+=2;goto B49d0eb;
case 0x49d0ef:c.instructions+=1;goto B49d0ef;
case 0x49d0f4:goto L49d0f4;
case 0x49d0f8:c.instructions+=2;goto B49d0f8;
case 0x49d0f9:c.instructions+=1;goto B49d0f9;
case 0x49d0fe:goto L49d0fe;
case 0x49d100:c.instructions+=5;goto B49d100;
case 0x49d103:c.instructions+=4;goto B49d103;
case 0x49d105:c.instructions+=3;goto B49d105;
case 0x49d106:c.instructions+=2;goto B49d106;
case 0x49d107:c.instructions+=1;goto B49d107;
case 0x49d10c:goto L49d10c;
case 0x49d110:c.instructions+=4;goto B49d110;
case 0x49d113:c.instructions+=3;goto B49d113;
case 0x49d115:c.instructions+=2;goto B49d115;
case 0x49d117:c.instructions+=1;goto B49d117;
case 0x49d119:goto L49d119;
case 0x49d11b:c.instructions+=5;goto B49d11b;
case 0x49d11e:c.instructions+=4;goto B49d11e;
case 0x49d123:c.instructions+=3;goto B49d123;
case 0x49d124:c.instructions+=2;goto B49d124;
case 0x49d125:c.instructions+=1;goto B49d125;
case 0x49d127:goto L49d127;
case 0x49d129:c.instructions+=4;goto B49d129;
case 0x49d12c:c.instructions+=3;goto B49d12c;
case 0x49d131:c.instructions+=2;goto B49d131;
case 0x49d132:c.instructions+=1;goto B49d132;
case 0x49d133:goto L49d133;
case 0x49d138:goto L49d138;
case 0x49d13b:c.instructions+=5;goto B49d13b;
case 0x49d13c:c.instructions+=4;goto B49d13c;
case 0x49d140:c.instructions+=3;goto B49d140;
case 0x49d145:c.instructions+=2;goto B49d145;
case 0x49d146:c.instructions+=1;goto B49d146;
case 0x49d14b:goto L49d14b;
case 0x49d14e:c.instructions+=4;goto B49d14e;
case 0x49d152:c.instructions+=3;goto B49d152;
case 0x49d153:c.instructions+=2;goto B49d153;
case 0x49d157:c.instructions+=1;goto B49d157;
case 0x49d15c:goto L49d15c;
case 0x49d15d:c.instructions+=3;goto B49d15d;
case 0x49d161:c.instructions+=2;goto B49d161;
case 0x49d162:c.instructions+=1;goto B49d162;
case 0x49d167:goto L49d167;
case 0x49d168:c.instructions+=1;goto B49d168;
case 0x49d16d:goto L49d16d;
case 0x49d171:c.instructions+=4;goto B49d171;
case 0x49d174:c.instructions+=3;goto B49d174;
case 0x49d176:c.instructions+=2;goto B49d176;
case 0x49d178:c.instructions+=1;goto B49d178;
case 0x49d17a:goto L49d17a;
case 0x49d17d:c.instructions+=5;goto B49d17d;
case 0x49d182:c.instructions+=4;goto B49d182;
case 0x49d186:c.instructions+=3;goto B49d186;
case 0x49d187:c.instructions+=2;goto B49d187;
case 0x49d188:c.instructions+=1;goto B49d188;
case 0x49d18a:goto L49d18a;
case 0x49d18d:c.instructions+=4;goto B49d18d;
case 0x49d192:c.instructions+=3;goto B49d192;
case 0x49d196:c.instructions+=2;goto B49d196;
case 0x49d197:c.instructions+=1;goto B49d197;
case 0x49d198:goto L49d198;
case 0x49d19d:goto L49d19d;
case 0x49d19f:c.instructions+=4;goto B49d19f;
case 0x49d1a2:c.instructions+=3;goto B49d1a2;
case 0x49d1a5:c.instructions+=2;goto B49d1a5;
case 0x49d1a8:c.instructions+=1;goto B49d1a8;
case 0x49d1ae:goto L49d1ae;
case 0x49d1b2:c.instructions+=6;goto B49d1b2;
case 0x49d1b5:c.instructions+=5;goto B49d1b5;
case 0x49d1b8:c.instructions+=4;goto B49d1b8;
case 0x49d1bc:c.instructions+=3;goto B49d1bc;
case 0x49d1bd:c.instructions+=2;goto B49d1bd;
case 0x49d1be:c.instructions+=1;goto B49d1be;
case 0x49d1c3:goto L49d1c3;
case 0x49d1c6:goto L49d1c6;
case 0x49d1c7:c.instructions+=5;goto B49d1c7;
case 0x49d1c8:c.instructions+=4;goto B49d1c8;
case 0x49d1c9:c.instructions+=3;goto B49d1c9;
case 0x49d1ca:c.instructions+=2;goto B49d1ca;
case 0x49d1cd:c.instructions+=1;goto B49d1cd;
case 0x49d1d0:goto L49d1d0;
case 0x49d1d2:c.instructions+=14;goto B49d1d2;
case 0x49d1d7:c.instructions+=13;goto B49d1d7;
case 0x49d1dd:c.instructions+=12;goto B49d1dd;
case 0x49d1de:c.instructions+=11;goto B49d1de;
case 0x49d1e5:c.instructions+=10;goto B49d1e5;
case 0x49d1e8:c.instructions+=9;goto B49d1e8;
case 0x49d1e9:c.instructions+=8;goto B49d1e9;
case 0x49d1ea:c.instructions+=7;goto B49d1ea;
case 0x49d1eb:c.instructions+=6;goto B49d1eb;
case 0x49d1ec:c.instructions+=5;goto B49d1ec;
case 0x49d1f0:c.instructions+=4;goto B49d1f0;
case 0x49d1f2:c.instructions+=3;goto B49d1f2;
case 0x49d1f3:c.instructions+=2;goto B49d1f3;
case 0x49d1f7:c.instructions+=1;goto B49d1f7;
case 0x49d1fc:goto L49d1fc;
case 0x49d200:c.instructions+=11;goto B49d200;
case 0x49d203:c.instructions+=10;goto B49d203;
case 0x49d205:c.instructions+=9;goto B49d205;
case 0x49d206:c.instructions+=8;goto B49d206;
case 0x49d207:c.instructions+=7;goto B49d207;
case 0x49d209:c.instructions+=6;goto B49d209;
case 0x49d20e:c.instructions+=5;goto B49d20e;
case 0x49d211:c.instructions+=4;goto B49d211;
case 0x49d212:c.instructions+=3;goto B49d212;
case 0x49d216:c.instructions+=2;goto B49d216;
case 0x49d21c:c.instructions+=1;goto B49d21c;
case 0x49d221:goto L49d221;
case 0x49d227:c.instructions+=2;goto B49d227;
case 0x49d229:c.instructions+=1;goto B49d229;
case 0x49d22e:goto L49d22e;
case 0x49d231:c.instructions+=9;goto B49d231;
case 0x49d233:c.instructions+=8;goto B49d233;
case 0x49d234:c.instructions+=7;goto B49d234;
case 0x49d235:c.instructions+=6;goto B49d235;
case 0x49d236:c.instructions+=5;goto B49d236;
case 0x49d239:c.instructions+=4;goto B49d239;
case 0x49d23b:c.instructions+=3;goto B49d23b;
case 0x49d240:c.instructions+=2;goto B49d240;
case 0x49d245:c.instructions+=1;goto B49d245;
case 0x49d248:goto L49d248;
case 0x49d24b:c.instructions+=3;goto B49d24b;
case 0x49d24d:c.instructions+=2;goto B49d24d;
case 0x49d250:c.instructions+=1;goto B49d250;
case 0x49d252:goto L49d252;
case 0x49d256:c.instructions+=1;goto B49d256;
case 0x49d25b:goto L49d25b;
case 0x49d25e:c.instructions+=3;goto B49d25e;
case 0x49d260:c.instructions+=2;goto B49d260;
case 0x49d263:c.instructions+=1;goto B49d263;
case 0x49d265:goto L49d265;
case 0x49d269:c.instructions+=1;goto B49d269;
case 0x49d26a:goto L49d26a;
case 0x49d26c:c.instructions+=5;goto B49d26c;
case 0x49d270:c.instructions+=4;goto B49d270;
case 0x49d271:c.instructions+=3;goto B49d271;
case 0x49d272:c.instructions+=2;goto B49d272;
case 0x49d274:c.instructions+=1;goto B49d274;
case 0x49d279:goto L49d279;
case 0x49d27b:c.instructions+=9;goto B49d27b;
case 0x49d27e:c.instructions+=8;goto B49d27e;
case 0x49d281:c.instructions+=7;goto B49d281;
case 0x49d284:c.instructions+=6;goto B49d284;
case 0x49d289:c.instructions+=5;goto B49d289;
case 0x49d28a:c.instructions+=4;goto B49d28a;
case 0x49d290:c.instructions+=3;goto B49d290;
case 0x49d296:c.instructions+=2;goto B49d296;
case 0x49d299:c.instructions+=1;goto B49d299;
case 0x49d29e:goto L49d29e;
case 0x49d29f:c.instructions+=2;goto B49d29f;
case 0x49d2a0:c.instructions+=1;goto B49d2a0;
case 0x49d2a5:goto L49d2a5;
case 0x49d2a8:c.instructions+=4;goto B49d2a8;
case 0x49d2ab:c.instructions+=3;goto B49d2ab;
case 0x49d2ac:c.instructions+=2;goto B49d2ac;
case 0x49d2ae:c.instructions+=1;goto B49d2ae;
case 0x49d2b3:goto L49d2b3;
case 0x49d2b6:c.instructions+=5;goto B49d2b6;
case 0x49d2b8:c.instructions+=4;goto B49d2b8;
case 0x49d2bd:c.instructions+=3;goto B49d2bd;
case 0x49d2c2:c.instructions+=2;goto B49d2c2;
case 0x49d2c3:c.instructions+=1;goto B49d2c3;
case 0x49d2c8:goto L49d2c8;
case 0x49d2cb:c.instructions+=2;goto B49d2cb;
case 0x49d2d0:c.instructions+=1;goto B49d2d0;
case 0x49d2d5:goto L49d2d5;
case 0x49d2d6:c.instructions+=2;goto B49d2d6;
case 0x49d2d7:c.instructions+=1;goto B49d2d7;
case 0x49d2dc:goto L49d2dc;
case 0x49d2de:c.instructions+=3;goto B49d2de;
case 0x49d2e1:c.instructions+=2;goto B49d2e1;
case 0x49d2e2:c.instructions+=1;goto B49d2e2;
case 0x49d2e7:goto L49d2e7;
case 0x49d2ea:c.instructions+=8;goto B49d2ea;
case 0x49d2ed:c.instructions+=7;goto B49d2ed;
case 0x49d2ee:c.instructions+=6;goto B49d2ee;
case 0x49d2f3:c.instructions+=5;goto B49d2f3;
case 0x49d2f5:c.instructions+=4;goto B49d2f5;
case 0x49d2f6:c.instructions+=3;goto B49d2f6;
case 0x49d2f7:c.instructions+=2;goto B49d2f7;
case 0x49d2f9:c.instructions+=1;goto B49d2f9;
case 0x49d2fe:goto L49d2fe;
case 0x49d301:c.instructions+=4;goto B49d301;
case 0x49d307:c.instructions+=3;goto B49d307;
case 0x49d30a:c.instructions+=2;goto B49d30a;
case 0x49d30d:c.instructions+=1;goto B49d30d;
case 0x49d310:goto L49d310;
case 0x49d312:c.instructions+=3;goto B49d312;
case 0x49d313:c.instructions+=2;goto B49d313;
case 0x49d315:c.instructions+=1;goto B49d315;
case 0x49d317:goto L49d317;
case 0x49d319:c.instructions+=3;goto B49d319;
case 0x49d31b:c.instructions+=2;goto B49d31b;
case 0x49d31f:c.instructions+=1;goto B49d31f;
case 0x49d321:goto L49d321;
case 0x49d324:c.instructions+=2;goto B49d324;
case 0x49d325:c.instructions+=1;goto B49d325;
case 0x49d32a:goto L49d32a;
case 0x49d32e:c.instructions+=6;goto B49d32e;
case 0x49d330:c.instructions+=5;goto B49d330;
case 0x49d333:c.instructions+=4;goto B49d333;
case 0x49d334:c.instructions+=3;goto B49d334;
case 0x49d335:c.instructions+=2;goto B49d335;
case 0x49d336:c.instructions+=1;goto B49d336;
case 0x49d33b:goto L49d33b;
case 0x49d33e:c.instructions+=3;goto B49d33e;
case 0x49d33f:c.instructions+=2;goto B49d33f;
case 0x49d341:c.instructions+=1;goto B49d341;
case 0x49d346:goto L49d346;
case 0x49d347:c.instructions+=1;goto B49d347;
case 0x49d34c:goto L49d34c;
case 0x49d34f:c.instructions+=1;goto B49d34f;
case 0x49d351:goto L49d351;
case 0x49d353:c.instructions+=2;goto B49d353;
case 0x49d355:c.instructions+=1;goto B49d355;
case 0x49d35a:goto L49d35a;
case 0x49d35e:c.instructions+=8;goto B49d35e;
case 0x49d35f:c.instructions+=7;goto B49d35f;
case 0x49d361:c.instructions+=6;goto B49d361;
case 0x49d362:c.instructions+=5;goto B49d362;
case 0x49d363:c.instructions+=4;goto B49d363;
case 0x49d364:c.instructions+=3;goto B49d364;
case 0x49d36b:c.instructions+=2;goto B49d36b;
case 0x49d36e:c.instructions+=1;goto B49d36e;
case 0x49d380:goto L49d380;
case 0x49d384:c.instructions+=7;goto B49d384;
case 0x49d385:c.instructions+=6;goto B49d385;
case 0x49d386:c.instructions+=5;goto B49d386;
case 0x49d38a:c.instructions+=4;goto B49d38a;
case 0x49d38b:c.instructions+=3;goto B49d38b;
case 0x49d38c:c.instructions+=2;goto B49d38c;
case 0x49d38e:c.instructions+=1;goto B49d38e;
case 0x49d393:goto L49d393;
case 0x49d396:c.instructions+=1;goto B49d396;
case 0x49d398:goto L49d398;
case 0x49d39b:c.instructions+=8;goto B49d39b;
case 0x49d39d:c.instructions+=7;goto B49d39d;
case 0x49d39e:c.instructions+=6;goto B49d39e;
case 0x49d39f:c.instructions+=5;goto B49d39f;
case 0x49d3a7:c.instructions+=4;goto B49d3a7;
case 0x49d3ab:c.instructions+=3;goto B49d3ab;
case 0x49d3b3:c.instructions+=2;goto B49d3b3;
case 0x49d3bb:c.instructions+=1;goto B49d3bb;
case 0x49d3be:goto L49d3be;
case 0x49d3bf:c.instructions+=2;goto B49d3bf;
case 0x49d3c5:c.instructions+=1;goto B49d3c5;
case 0x49d3ca:goto L49d3ca;
case 0x49d3d0:c.instructions+=1;goto B49d3d0;
case 0x49d3d2:goto L49d3d2;
case 0x49d3d5:c.instructions+=6;goto B49d3d5;
case 0x49d3d7:c.instructions+=5;goto B49d3d7;
case 0x49d3d9:c.instructions+=4;goto B49d3d9;
case 0x49d3db:c.instructions+=3;goto B49d3db;
case 0x49d3dd:c.instructions+=2;goto B49d3dd;
case 0x49d3e2:c.instructions+=1;goto B49d3e2;
case 0x49d3e5:goto L49d3e5;
case 0x49d3e8:c.instructions+=2;goto B49d3e8;
case 0x49d3e9:c.instructions+=1;goto B49d3e9;
case 0x49d3ee:goto L49d3ee;
case 0x49d3f1:goto L49d3f1;
case 0x49d3f2:c.instructions+=2;goto B49d3f2;
case 0x49d3f3:c.instructions+=1;goto B49d3f3;
case 0x49d400:goto L49d400;
case 0x49d408:c.instructions+=5;goto B49d408;
case 0x49d409:c.instructions+=4;goto B49d409;
case 0x49d40a:c.instructions+=3;goto B49d40a;
case 0x49d40b:c.instructions+=2;goto B49d40b;
case 0x49d410:c.instructions+=1;goto B49d410;
case 0x49d412:goto L49d412;
case 0x49d416:c.instructions+=3;goto B49d416;
case 0x49d418:c.instructions+=2;goto B49d418;
case 0x49d41a:c.instructions+=1;goto B49d41a;
case 0x49d41c:goto L49d41c;
case 0x49d420:c.instructions+=1;goto B49d420;
case 0x49d423:goto L49d423;
case 0x49d426:c.instructions+=1;goto B49d426;
case 0x49d428:goto L49d428;
case 0x49d42b:c.instructions+=2;goto B49d42b;
case 0x49d42e:c.instructions+=1;goto B49d42e;
case 0x49d430:goto L49d430;
case 0x49d432:goto L49d432;
case 0x49d433:c.instructions+=3;goto B49d433;
case 0x49d436:c.instructions+=2;goto B49d436;
case 0x49d438:c.instructions+=1;goto B49d438;
case 0x49d43a:goto L49d43a;
case 0x49d43b:c.instructions+=3;goto B49d43b;
case 0x49d43c:c.instructions+=2;goto B49d43c;
case 0x49d43d:c.instructions+=1;goto B49d43d;
case 0x49d440:goto L49d440;
case 0x49d444:c.instructions+=2;goto B49d444;
case 0x49d447:c.instructions+=1;goto B49d447;
case 0x49d449:goto L49d449;
case 0x49d44c:c.instructions+=1;goto B49d44c;
case 0x49d44e:goto L49d44e;
case 0x49d451:c.instructions+=1;goto B49d451;
case 0x49d453:goto L49d453;
case 0x49d455:c.instructions+=1;goto B49d455;
case 0x49d458:goto L49d458;
case 0x49d459:c.instructions+=3;goto B49d459;
case 0x49d45d:c.instructions+=2;goto B49d45d;
case 0x49d45e:c.instructions+=1;goto B49d45e;
case 0x49d463:goto L49d463;
case 0x49d466:goto L49d466;
case 0x49d470:goto L49d470;
case 0x49d471:c.instructions+=2;goto B49d471;
case 0x49d473:c.instructions+=1;goto B49d473;
case 0x49d478:goto L49d478;
case 0x49d47d:c.instructions+=1;goto B49d47d;
case 0x49d47f:goto L49d47f;
case 0x49d480:c.instructions+=1;goto B49d480;
case 0x49d485:goto L49d485;
case 0x49d488:goto L49d488;
case 0x49d48a:c.instructions+=2;goto B49d48a;
case 0x49d48b:c.instructions+=1;goto B49d48b;
case 0x49d490:goto L49d490;
case 0x49d492:c.instructions+=12;goto B49d492;
case 0x49d497:c.instructions+=11;goto B49d497;
case 0x49d49d:c.instructions+=10;goto B49d49d;
case 0x49d49e:c.instructions+=9;goto B49d49e;
case 0x49d4a5:c.instructions+=8;goto B49d4a5;
case 0x49d4a6:c.instructions+=7;goto B49d4a6;
case 0x49d4a7:c.instructions+=6;goto B49d4a7;
case 0x49d4a9:c.instructions+=5;goto B49d4a9;
case 0x49d4ad:c.instructions+=4;goto B49d4ad;
case 0x49d4b3:c.instructions+=3;goto B49d4b3;
case 0x49d4b9:c.instructions+=2;goto B49d4b9;
case 0x49d4c1:c.instructions+=1;goto B49d4c1;
case 0x49d4c6:goto L49d4c6;
case 0x49d4c8:c.instructions+=2;goto B49d4c8;
case 0x49d4d0:c.instructions+=1;goto B49d4d0;
case 0x49d4d5:goto L49d4d5;
case 0x49d4d9:c.instructions+=4;goto B49d4d9;
case 0x49d4da:c.instructions+=3;goto B49d4da;
case 0x49d4e1:c.instructions+=2;goto B49d4e1;
case 0x49d4e4:c.instructions+=1;goto B49d4e4;
case 0x49d4f0:goto L49d4f0;
case 0x49d4f2:c.instructions+=7;goto B49d4f2;
case 0x49d4f7:c.instructions+=6;goto B49d4f7;
case 0x49d4fd:c.instructions+=5;goto B49d4fd;
case 0x49d4fe:c.instructions+=4;goto B49d4fe;
case 0x49d505:c.instructions+=3;goto B49d505;
case 0x49d506:c.instructions+=2;goto B49d506;
case 0x49d50b:c.instructions+=1;goto B49d50b;
case 0x49d510:goto L49d510;
case 0x49d513:c.instructions+=4;goto B49d513;
case 0x49d517:c.instructions+=3;goto B49d517;
case 0x49d519:c.instructions+=2;goto B49d519;
case 0x49d521:c.instructions+=1;goto B49d521;
case 0x49d523:goto L49d523;
case 0x49d527:c.instructions+=3;goto B49d527;
case 0x49d528:c.instructions+=2;goto B49d528;
case 0x49d52a:c.instructions+=1;goto B49d52a;
case 0x49d52f:goto L49d52f;
case 0x49d533:c.instructions+=3;goto B49d533;
case 0x49d53a:c.instructions+=2;goto B49d53a;
case 0x49d53d:c.instructions+=1;goto B49d53d;
case 0x49d53e:goto L49d53e;
case 0x49d542:c.instructions+=4;goto B49d542;
case 0x49d544:c.instructions+=3;goto B49d544;
case 0x49d54b:c.instructions+=2;goto B49d54b;
case 0x49d54e:c.instructions+=1;goto B49d54e;
case 0x49d550:goto L49d550;
case 0x49d552:c.instructions+=7;goto B49d552;
case 0x49d557:c.instructions+=6;goto B49d557;
case 0x49d55d:c.instructions+=5;goto B49d55d;
case 0x49d55e:c.instructions+=4;goto B49d55e;
case 0x49d565:c.instructions+=3;goto B49d565;
case 0x49d566:c.instructions+=2;goto B49d566;
case 0x49d56b:c.instructions+=1;goto B49d56b;
case 0x49d570:goto L49d570;
case 0x49d573:c.instructions+=4;goto B49d573;
case 0x49d577:c.instructions+=3;goto B49d577;
case 0x49d579:c.instructions+=2;goto B49d579;
case 0x49d581:c.instructions+=1;goto B49d581;
case 0x49d583:goto L49d583;
case 0x49d587:c.instructions+=3;goto B49d587;
case 0x49d588:c.instructions+=2;goto B49d588;
case 0x49d58a:c.instructions+=1;goto B49d58a;
case 0x49d58f:goto L49d58f;
case 0x49d593:c.instructions+=3;goto B49d593;
case 0x49d59a:c.instructions+=2;goto B49d59a;
case 0x49d59d:c.instructions+=1;goto B49d59d;
case 0x49d59e:goto L49d59e;
case 0x49d5a2:c.instructions+=4;goto B49d5a2;
case 0x49d5a4:c.instructions+=3;goto B49d5a4;
case 0x49d5ab:c.instructions+=2;goto B49d5ab;
case 0x49d5ae:c.instructions+=1;goto B49d5ae;
case 0x49d5b0:goto L49d5b0;
case 0x49d5b1:c.instructions+=4;goto B49d5b1;
case 0x49d5b3:c.instructions+=3;goto B49d5b3;
case 0x49d5b9:c.instructions+=2;goto B49d5b9;
case 0x49d5bb:c.instructions+=1;goto B49d5bb;
case 0x49d5bd:goto L49d5bd;
case 0x49d5be:c.instructions+=1;goto B49d5be;
case 0x49d5c3:goto L49d5c3;
case 0x49d5c6:c.instructions+=1;goto B49d5c6;
case 0x49d5d0:goto L49d5d0;
case 0x49d5d1:c.instructions+=1;goto B49d5d1;
case 0x49d5e0:goto L49d5e0;
case 0x49d5e1:c.instructions+=5;goto B49d5e1;
case 0x49d5e2:c.instructions+=4;goto B49d5e2;
case 0x49d5e4:c.instructions+=3;goto B49d5e4;
case 0x49d5ea:c.instructions+=2;goto B49d5ea;
case 0x49d5ec:c.instructions+=1;goto B49d5ec;
case 0x49d5ee:goto L49d5ee;
case 0x49d5ef:c.instructions+=1;goto B49d5ef;
case 0x49d5f4:goto L49d5f4;
case 0x49d5f7:goto L49d5f7;
case 0x49d5fb:c.instructions+=3;goto B49d5fb;
case 0x49d5fe:c.instructions+=2;goto B49d5fe;
case 0x49d600:c.instructions+=1;goto B49d600;
case 0x49d602:goto L49d602;
case 0x49d605:c.instructions+=1;goto B49d605;
case 0x49d607:goto L49d607;
case 0x49d60b:c.instructions+=1;goto B49d60b;
case 0x49d60d:goto L49d60d;
case 0x49d60e:c.instructions+=1;goto B49d60e;
case 0x49d613:goto L49d613;
case 0x49d614:c.instructions+=2;goto B49d614;
case 0x49d616:c.instructions+=1;goto B49d616;
case 0x49d61b:goto L49d61b;
case 0x49d61e:c.instructions+=1;goto B49d61e;
case 0x49d620:goto L49d620;
case 0x49d622:goto L49d622;
case 0x49d628:c.instructions+=7;goto B49d628;
case 0x49d62b:c.instructions+=6;goto B49d62b;
case 0x49d62c:c.instructions+=5;goto B49d62c;
case 0x49d631:c.instructions+=4;goto B49d631;
case 0x49d636:c.instructions+=3;goto B49d636;
case 0x49d63b:c.instructions+=2;goto B49d63b;
case 0x49d63c:c.instructions+=1;goto B49d63c;
case 0x49d641:goto L49d641;
case 0x49d644:c.instructions+=5;goto B49d644;
case 0x49d64a:c.instructions+=4;goto B49d64a;
case 0x49d64b:c.instructions+=3;goto B49d64b;
case 0x49d64d:c.instructions+=2;goto B49d64d;
case 0x49d64e:c.instructions+=1;goto B49d64e;
case 0x49d650:goto L49d650;
case 0x49d655:goto L49d655;
case 0x49d660:goto L49d660;
case 0x49d666:c.instructions+=2;goto B49d666;
case 0x49d670:c.instructions+=1;goto B49d670;
case 0x49d680:goto L49d680;
case 0x49d686:c.instructions+=10;goto B49d686;
case 0x49d687:c.instructions+=9;goto B49d687;
case 0x49d68b:c.instructions+=8;goto B49d68b;
case 0x49d68c:c.instructions+=7;goto B49d68c;
case 0x49d692:c.instructions+=6;goto B49d692;
case 0x49d698:c.instructions+=5;goto B49d698;
case 0x49d69c:c.instructions+=4;goto B49d69c;
case 0x49d6a2:c.instructions+=3;goto B49d6a2;
case 0x49d6a3:c.instructions+=2;goto B49d6a3;
case 0x49d6a5:c.instructions+=1;goto B49d6a5;
case 0x49d6aa:goto L49d6aa;
case 0x49d6ac:goto L49d6ac;
case 0x49d6af:c.instructions+=4;goto B49d6af;
case 0x49d6b4:c.instructions+=3;goto B49d6b4;
case 0x49d6b5:c.instructions+=2;goto B49d6b5;
case 0x49d6ba:c.instructions+=1;goto B49d6ba;
case 0x49d6bf:goto L49d6bf;
case 0x49d6c2:c.instructions+=3;goto B49d6c2;
case 0x49d6c3:c.instructions+=2;goto B49d6c3;
case 0x49d6c4:c.instructions+=1;goto B49d6c4;
case 0x49d6d0:goto L49d6d0;
case 0x49d6d1:c.instructions+=4;goto B49d6d1;
case 0x49d6d3:c.instructions+=3;goto B49d6d3;
case 0x49d6d9:c.instructions+=2;goto B49d6d9;
case 0x49d6da:c.instructions+=1;goto B49d6da;
case 0x49d6df:goto L49d6df;
case 0x49d6e2:c.instructions+=3;goto B49d6e2;
case 0x49d6ec:c.instructions+=2;goto B49d6ec;
case 0x49d6ed:c.instructions+=1;goto B49d6ed;
case 0x49d6f0:goto L49d6f0;
case 0x49d6f6:c.instructions+=6;goto B49d6f6;
case 0x49d6f8:c.instructions+=5;goto B49d6f8;
case 0x49d6fa:c.instructions+=4;goto B49d6fa;
case 0x49d6fc:c.instructions+=3;goto B49d6fc;
case 0x49d6fe:c.instructions+=2;goto B49d6fe;
case 0x49d703:c.instructions+=1;goto B49d703;
case 0x49d706:goto L49d706;
case 0x49d710:goto L49d710;
case 0x49d711:c.instructions+=4;goto B49d711;
case 0x49d713:c.instructions+=3;goto B49d713;
case 0x49d719:c.instructions+=2;goto B49d719;
case 0x49d71b:c.instructions+=1;goto B49d71b;
case 0x49d71d:goto L49d71d;
case 0x49d71e:c.instructions+=1;goto B49d71e;
case 0x49d723:goto L49d723;
case 0x49d726:c.instructions+=1;goto B49d726;
case 0x49d730:goto L49d730;
case 0x49d732:c.instructions+=1;goto B49d732;
case 0x49d737:goto L49d737;
case 0x49d73b:c.instructions+=7;goto B49d73b;
case 0x49d741:c.instructions+=6;goto B49d741;
case 0x49d743:c.instructions+=5;goto B49d743;
case 0x49d745:c.instructions+=4;goto B49d745;
case 0x49d746:c.instructions+=3;goto B49d746;
case 0x49d748:c.instructions+=2;goto B49d748;
case 0x49d74d:c.instructions+=1;goto B49d74d;
case 0x49d750:goto L49d750;
case 0x49d751:c.instructions+=1;goto B49d751;
case 0x49d760:goto L49d760;
case 0x49d763:c.instructions+=5;goto B49d763;
case 0x49d764:c.instructions+=4;goto B49d764;
case 0x49d766:c.instructions+=3;goto B49d766;
case 0x49d76c:c.instructions+=2;goto B49d76c;
case 0x49d76e:c.instructions+=1;goto B49d76e;
case 0x49d774:goto L49d774;
case 0x49d775:c.instructions+=1;goto B49d775;
case 0x49d77a:goto L49d77a;
case 0x49d77d:c.instructions+=2;goto B49d77d;
case 0x49d77f:c.instructions+=1;goto B49d77f;
case 0x49d785:goto L49d785;
case 0x49d78b:c.instructions+=6;goto B49d78b;
case 0x49d791:c.instructions+=5;goto B49d791;
case 0x49d792:c.instructions+=4;goto B49d792;
case 0x49d794:c.instructions+=3;goto B49d794;
case 0x49d796:c.instructions+=2;goto B49d796;
case 0x49d797:c.instructions+=1;goto B49d797;
case 0x49d799:goto L49d799;
case 0x49d79d:c.instructions+=4;goto B49d79d;
case 0x49d79e:c.instructions+=3;goto B49d79e;
case 0x49d79f:c.instructions+=2;goto B49d79f;
case 0x49d7a1:c.instructions+=1;goto B49d7a1;
case 0x49d7a6:goto L49d7a6;
case 0x49d7aa:c.instructions+=1;goto B49d7aa;
case 0x49d7af:goto L49d7af;
case 0x49d7b5:c.instructions+=3;goto B49d7b5;
case 0x49d7b7:c.instructions+=2;goto B49d7b7;
case 0x49d7bd:c.instructions+=1;goto B49d7bd;
case 0x49d7bf:goto L49d7bf;
case 0x49d7c3:c.instructions+=4;goto B49d7c3;
case 0x49d7c4:c.instructions+=3;goto B49d7c4;
case 0x49d7c5:c.instructions+=2;goto B49d7c5;
case 0x49d7c7:c.instructions+=1;goto B49d7c7;
case 0x49d7cc:goto L49d7cc;
case 0x49d7d0:c.instructions+=1;goto B49d7d0;
case 0x49d7d1:goto L49d7d1;
case 0x49d7d7:c.instructions+=3;goto B49d7d7;
case 0x49d7d9:c.instructions+=2;goto B49d7d9;
case 0x49d7df:c.instructions+=1;goto B49d7df;
case 0x49d7e1:goto L49d7e1;
case 0x49d7e5:c.instructions+=4;goto B49d7e5;
case 0x49d7e6:c.instructions+=3;goto B49d7e6;
case 0x49d7e7:c.instructions+=2;goto B49d7e7;
case 0x49d7e9:c.instructions+=1;goto B49d7e9;
case 0x49d7ee:goto L49d7ee;
case 0x49d7f2:c.instructions+=1;goto B49d7f2;
case 0x49d7f3:goto L49d7f3;
case 0x49d7f9:c.instructions+=3;goto B49d7f9;
case 0x49d7fb:c.instructions+=2;goto B49d7fb;
case 0x49d801:c.instructions+=1;goto B49d801;
case 0x49d803:goto L49d803;
case 0x49d807:c.instructions+=4;goto B49d807;
case 0x49d808:c.instructions+=3;goto B49d808;
case 0x49d809:c.instructions+=2;goto B49d809;
case 0x49d80b:c.instructions+=1;goto B49d80b;
case 0x49d810:goto L49d810;
case 0x49d814:c.instructions+=1;goto B49d814;
case 0x49d815:goto L49d815;
case 0x49d818:c.instructions+=1;goto B49d818;
case 0x49d81a:goto L49d81a;
case 0x49d81f:goto L49d81f;
case 0x49d821:c.instructions+=2;goto B49d821;
case 0x49d823:c.instructions+=1;goto B49d823;
case 0x49d825:goto L49d825;
case 0x49d829:c.instructions+=7;goto B49d829;
case 0x49d82d:c.instructions+=6;goto B49d82d;
case 0x49d82f:c.instructions+=5;goto B49d82f;
case 0x49d832:c.instructions+=4;goto B49d832;
case 0x49d833:c.instructions+=3;goto B49d833;
case 0x49d834:c.instructions+=2;goto B49d834;
case 0x49d835:c.instructions+=1;goto B49d835;
case 0x49d83a:goto L49d83a;
case 0x49d83d:c.instructions+=3;goto B49d83d;
case 0x49d83e:c.instructions+=2;goto B49d83e;
case 0x49d840:c.instructions+=1;goto B49d840;
case 0x49d842:goto L49d842;
case 0x49d843:c.instructions+=2;goto B49d843;
case 0x49d84a:c.instructions+=1;goto B49d84a;
case 0x49d84b:goto L49d84b;
case 0x49d84c:c.instructions+=2;goto B49d84c;
case 0x49d84f:c.instructions+=1;goto B49d84f;
case 0x49d850:goto L49d850;
case 0x49d852:c.instructions+=2;goto B49d852;
case 0x49d855:c.instructions+=1;goto B49d855;
case 0x49d857:goto L49d857;
case 0x49d85a:c.instructions+=1;goto B49d85a;
case 0x49d85c:goto L49d85c;
case 0x49d85e:c.instructions+=1;goto B49d85e;
case 0x49d860:goto L49d860;
case 0x49d863:c.instructions+=1;goto B49d863;
case 0x49d865:goto L49d865;
case 0x49d86a:c.instructions+=1;goto B49d86a;
case 0x49d86b:goto L49d86b;
case 0x49d86d:c.instructions+=1;goto B49d86d;
case 0x49d870:goto L49d870;
case 0x49d871:c.instructions+=4;goto B49d871;
case 0x49d873:c.instructions+=3;goto B49d873;
case 0x49d875:c.instructions+=2;goto B49d875;
case 0x49d877:c.instructions+=1;goto B49d877;
case 0x49d879:goto L49d879;
case 0x49d87a:c.instructions+=1;goto B49d87a;
case 0x49d87f:goto L49d87f;
case 0x49d882:c.instructions+=1;goto B49d882;
case 0x49d888:goto L49d888;
case 0x49d889:c.instructions+=1;goto B49d889;
case 0x49d890:goto L49d890;
case 0x49d894:c.instructions+=3;goto B49d894;
case 0x49d897:c.instructions+=2;goto B49d897;
case 0x49d899:c.instructions+=1;goto B49d899;
case 0x49d89b:goto L49d89b;
case 0x49d89e:c.instructions+=4;goto B49d89e;
case 0x49d8a2:c.instructions+=3;goto B49d8a2;
case 0x49d8a5:c.instructions+=2;goto B49d8a5;
case 0x49d8a8:c.instructions+=1;goto B49d8a8;
case 0x49d8ab:goto L49d8ab;
case 0x49d8ad:c.instructions+=2;goto B49d8ad;
case 0x49d8b2:c.instructions+=1;goto B49d8b2;
case 0x49d8b7:goto L49d8b7;
case 0x49d8c0:goto L49d8c0;
case 0x49d8c2:c.instructions+=3;goto B49d8c2;
case 0x49d8c7:c.instructions+=2;goto B49d8c7;
case 0x49d8ce:c.instructions+=1;goto B49d8ce;
case 0x49d8d3:goto L49d8d3;
case 0x49d8d8:c.instructions+=1;goto B49d8d8;
case 0x49d8dd:goto L49d8dd;
case 0x49d8e0:c.instructions+=2;goto B49d8e0;
case 0x49d8e2:c.instructions+=1;goto B49d8e2;
case 0x49d8e4:goto L49d8e4;
case 0x49d8e8:c.instructions+=6;goto B49d8e8;
case 0x49d8ea:c.instructions+=5;goto B49d8ea;
case 0x49d8ef:c.instructions+=4;goto B49d8ef;
case 0x49d8f1:c.instructions+=3;goto B49d8f1;
case 0x49d8f6:c.instructions+=2;goto B49d8f6;
case 0x49d8fb:c.instructions+=1;goto B49d8fb;
case 0x49d8fd:goto L49d8fd;
case 0x49d902:c.instructions+=3;goto B49d902;
case 0x49d905:c.instructions+=2;goto B49d905;
case 0x49d907:c.instructions+=1;goto B49d907;
case 0x49d909:goto L49d909;
case 0x49d90c:c.instructions+=2;goto B49d90c;
case 0x49d90e:c.instructions+=1;goto B49d90e;
case 0x49d910:goto L49d910;
case 0x49d914:c.instructions+=7;goto B49d914;
case 0x49d918:c.instructions+=6;goto B49d918;
case 0x49d91d:c.instructions+=5;goto B49d91d;
case 0x49d922:c.instructions+=4;goto B49d922;
case 0x49d923:c.instructions+=3;goto B49d923;
case 0x49d928:c.instructions+=2;goto B49d928;
case 0x49d92a:c.instructions+=1;goto B49d92a;
case 0x49d92f:goto L49d92f;
case 0x49d933:c.instructions+=4;goto B49d933;
case 0x49d937:c.instructions+=3;goto B49d937;
case 0x49d93d:c.instructions+=2;goto B49d93d;
case 0x49d943:c.instructions+=1;goto B49d943;
case 0x49d948:goto L49d948;
case 0x49d94b:goto L49d94b;
case 0x49d950:goto L49d950;
case 0x49d951:c.instructions+=9;goto B49d951;
case 0x49d956:c.instructions+=8;goto B49d956;
case 0x49d957:c.instructions+=7;goto B49d957;
case 0x49d95e:c.instructions+=6;goto B49d95e;
case 0x49d960:c.instructions+=5;goto B49d960;
case 0x49d963:c.instructions+=4;goto B49d963;
case 0x49d964:c.instructions+=3;goto B49d964;
case 0x49d96a:c.instructions+=2;goto B49d96a;
case 0x49d96c:c.instructions+=1;goto B49d96c;
case 0x49d96e:goto L49d96e;
case 0x49d96f:c.instructions+=1;goto B49d96f;
case 0x49d970:goto L49d970;
case 0x49d973:c.instructions+=3;goto B49d973;
case 0x49d976:c.instructions+=2;goto B49d976;
case 0x49d977:c.instructions+=1;goto B49d977;
case 0x49d97c:goto L49d97c;
case 0x49d97f:c.instructions+=2;goto B49d97f;
case 0x49d981:c.instructions+=1;goto B49d981;
case 0x49d983:goto L49d983;
case 0x49d986:c.instructions+=4;goto B49d986;
case 0x49d989:c.instructions+=3;goto B49d989;
case 0x49d98a:c.instructions+=2;goto B49d98a;
case 0x49d98b:c.instructions+=1;goto B49d98b;
case 0x49d990:goto L49d990;
case 0x49d993:c.instructions+=2;goto B49d993;
case 0x49d995:c.instructions+=1;goto B49d995;
case 0x49d997:goto L49d997;
case 0x49d99a:c.instructions+=2;goto B49d99a;
case 0x49d99b:c.instructions+=1;goto B49d99b;
case 0x49d9a0:goto L49d9a0;
case 0x49d9a3:goto L49d9a3;
case 0x49d9a5:c.instructions+=2;goto B49d9a5;
case 0x49d9a7:c.instructions+=1;goto B49d9a7;
case 0x49d9a9:goto L49d9a9;
case 0x49d9aa:goto L49d9aa;
case 0x49d9b0:c.instructions+=2;goto B49d9b0;
case 0x49d9b2:c.instructions+=1;goto B49d9b2;
case 0x49d9b4:goto L49d9b4;
case 0x49d9b6:c.instructions+=2;goto B49d9b6;
case 0x49d9b8:c.instructions+=1;goto B49d9b8;
case 0x49d9ba:goto L49d9ba;
case 0x49d9bf:c.instructions+=2;goto B49d9bf;
case 0x49d9c9:c.instructions+=1;goto B49d9c9;
case 0x49d9ce:goto L49d9ce;
case 0x49d9d0:c.instructions+=4;goto B49d9d0;
case 0x49d9d5:c.instructions+=3;goto B49d9d5;
case 0x49d9da:c.instructions+=2;goto B49d9da;
case 0x49d9df:c.instructions+=1;goto B49d9df;
case 0x49d9e4:goto L49d9e4;
case 0x49d9e8:c.instructions+=4;goto B49d9e8;
case 0x49d9e9:c.instructions+=3;goto B49d9e9;
case 0x49d9ee:c.instructions+=2;goto B49d9ee;
case 0x49d9f3:c.instructions+=1;goto B49d9f3;
case 0x49d9f8:goto L49d9f8;
case 0x49d9fb:c.instructions+=3;goto B49d9fb;
case 0x49d9fd:c.instructions+=2;goto B49d9fd;
case 0x49da02:c.instructions+=1;goto B49da02;
case 0x49da07:goto L49da07;
case 0x49da0a:c.instructions+=2;goto B49da0a;
case 0x49da0b:c.instructions+=1;goto B49da0b;
case 0x49da10:goto L49da10;
case 0x49da14:c.instructions+=5;goto B49da14;
case 0x49da17:c.instructions+=4;goto B49da17;
case 0x49da19:c.instructions+=3;goto B49da19;
case 0x49da1a:c.instructions+=2;goto B49da1a;
case 0x49da1b:c.instructions+=1;goto B49da1b;
case 0x49da1d:goto L49da1d;
case 0x49da20:c.instructions+=1;goto B49da20;
case 0x49da25:goto L49da25;
case 0x49da26:c.instructions+=1;goto B49da26;
case 0x49da30:goto L49da30;
case 0x49da36:c.instructions+=1;goto B49da36;
case 0x49da40:goto L49da40;
case 0x49da44:c.instructions+=5;goto B49da44;
case 0x49da46:c.instructions+=4;goto B49da46;
case 0x49da48:c.instructions+=3;goto B49da48;
case 0x49da49:c.instructions+=2;goto B49da49;
case 0x49da4a:c.instructions+=1;goto B49da4a;
case 0x49da4c:goto L49da4c;
case 0x49da4d:c.instructions+=1;goto B49da4d;
case 0x49da4f:goto L49da4f;
case 0x49da52:c.instructions+=1;goto B49da52;
case 0x49da58:goto L49da58;
case 0x49da59:c.instructions+=3;goto B49da59;
case 0x49da5e:c.instructions+=2;goto B49da5e;
case 0x49da5f:c.instructions+=1;goto B49da5f;
case 0x49da60:goto L49da60;
case 0x49da61:c.instructions+=3;goto B49da61;
case 0x49da66:c.instructions+=2;goto B49da66;
case 0x49da67:c.instructions+=1;goto B49da67;
case 0x49da68:goto L49da68;
case 0x49da6c:c.instructions+=2;goto B49da6c;
case 0x49da6e:c.instructions+=1;goto B49da6e;
case 0x49da74:goto L49da74;
case 0x49da7e:c.instructions+=1;goto B49da7e;
case 0x49da80:goto L49da80;
case 0x49da81:c.instructions+=3;goto B49da81;
case 0x49da86:c.instructions+=2;goto B49da86;
case 0x49da87:c.instructions+=1;goto B49da87;
case 0x49da88:goto L49da88;
case 0x49da8a:c.instructions+=3;goto B49da8a;
case 0x49da8c:c.instructions+=2;goto B49da8c;
case 0x49da91:c.instructions+=1;goto B49da91;
case 0x49da96:goto L49da96;
case 0x49da98:c.instructions+=5;goto B49da98;
case 0x49da9a:c.instructions+=4;goto B49da9a;
case 0x49da9c:c.instructions+=3;goto B49da9c;
case 0x49daa1:c.instructions+=2;goto B49daa1;
case 0x49daa4:c.instructions+=1;goto B49daa4;
case 0x49daa9:goto L49daa9;
case 0x49daab:c.instructions+=3;goto B49daab;
case 0x49daad:c.instructions+=2;goto B49daad;
case 0x49dab2:c.instructions+=1;goto B49dab2;
case 0x49dab7:goto L49dab7;
case 0x49dabb:c.instructions+=3;goto B49dabb;
case 0x49dabe:c.instructions+=2;goto B49dabe;
case 0x49dac0:c.instructions+=1;goto B49dac0;
case 0x49dac2:goto L49dac2;
case 0x49dac4:c.instructions+=3;goto B49dac4;
case 0x49dac6:c.instructions+=2;goto B49dac6;
case 0x49dacb:c.instructions+=1;goto B49dacb;
case 0x49dad0:goto L49dad0;
case 0x49dad2:c.instructions+=3;goto B49dad2;
case 0x49dad4:c.instructions+=2;goto B49dad4;
case 0x49dad9:c.instructions+=1;goto B49dad9;
case 0x49dade:goto L49dade;
case 0x49dae1:c.instructions+=4;goto B49dae1;
case 0x49dae3:c.instructions+=3;goto B49dae3;
case 0x49dae4:c.instructions+=2;goto B49dae4;
case 0x49dae5:c.instructions+=1;goto B49dae5;
case 0x49dae6:goto L49dae6;
case 0x49dae8:c.instructions+=4;goto B49dae8;
case 0x49daea:c.instructions+=3;goto B49daea;
case 0x49daf0:c.instructions+=2;goto B49daf0;
case 0x49daf6:c.instructions+=1;goto B49daf6;
case 0x49daf8:goto L49daf8;
case 0x49daf9:c.instructions+=2;goto B49daf9;
case 0x49dafa:c.instructions+=1;goto B49dafa;
case 0x49db00:goto L49db00;
case 0x49db04:c.instructions+=5;goto B49db04;
case 0x49db06:c.instructions+=4;goto B49db06;
case 0x49db07:c.instructions+=3;goto B49db07;
case 0x49db08:c.instructions+=2;goto B49db08;
case 0x49db0a:c.instructions+=1;goto B49db0a;
case 0x49db10:goto L49db10;
case 0x49db13:c.instructions+=3;goto B49db13;
case 0x49db18:c.instructions+=2;goto B49db18;
case 0x49db1f:c.instructions+=1;goto B49db1f;
case 0x49db24:goto L49db24;
case 0x49db25:c.instructions+=2;goto B49db25;
case 0x49db26:c.instructions+=1;goto B49db26;
case 0x49db2b:goto L49db2b;
case 0x49db2c:c.instructions+=1;goto B49db2c;
case 0x49db31:goto L49db31;
case 0x49db34:c.instructions+=2;goto B49db34;
case 0x49db39:c.instructions+=1;goto B49db39;
case 0x49db3e:goto L49db3e;
case 0x49db3f:c.instructions+=2;goto B49db3f;
case 0x49db40:c.instructions+=1;goto B49db40;
case 0x49db45:goto L49db45;
case 0x49db46:c.instructions+=1;goto B49db46;
case 0x49db4b:goto L49db4b;
case 0x49db4e:c.instructions+=4;goto B49db4e;
case 0x49db51:c.instructions+=3;goto B49db51;
case 0x49db53:c.instructions+=2;goto B49db53;
case 0x49db58:c.instructions+=1;goto B49db58;
case 0x49db5d:goto L49db5d;
case 0x49db60:c.instructions+=3;goto B49db60;
case 0x49db61:c.instructions+=2;goto B49db61;
case 0x49db62:c.instructions+=1;goto B49db62;
case 0x49db67:goto L49db67;
case 0x49db6a:c.instructions+=4;goto B49db6a;
case 0x49db6d:c.instructions+=3;goto B49db6d;
case 0x49db6f:c.instructions+=2;goto B49db6f;
case 0x49db74:c.instructions+=1;goto B49db74;
case 0x49db79:goto L49db79;
case 0x49db7c:c.instructions+=3;goto B49db7c;
case 0x49db7d:c.instructions+=2;goto B49db7d;
case 0x49db7e:c.instructions+=1;goto B49db7e;
case 0x49db83:goto L49db83;
case 0x49db86:c.instructions+=4;goto B49db86;
case 0x49db8b:c.instructions+=3;goto B49db8b;
case 0x49db90:c.instructions+=2;goto B49db90;
case 0x49db91:c.instructions+=1;goto B49db91;
case 0x49db96:goto L49db96;
case 0x49db99:c.instructions+=4;goto B49db99;
case 0x49db9e:c.instructions+=3;goto B49db9e;
case 0x49dba3:c.instructions+=2;goto B49dba3;
case 0x49dba4:c.instructions+=1;goto B49dba4;
case 0x49dba9:goto L49dba9;
case 0x49dbac:c.instructions+=2;goto B49dbac;
case 0x49dbb1:c.instructions+=1;goto B49dbb1;
case 0x49dbb6:goto L49dbb6;
case 0x49dbb7:c.instructions+=2;goto B49dbb7;
case 0x49dbb8:c.instructions+=1;goto B49dbb8;
case 0x49dbbd:goto L49dbbd;
case 0x49dbbe:c.instructions+=1;goto B49dbbe;
case 0x49dbc3:goto L49dbc3;
case 0x49dbc6:c.instructions+=4;goto B49dbc6;
case 0x49dbc9:c.instructions+=3;goto B49dbc9;
case 0x49dbcb:c.instructions+=2;goto B49dbcb;
case 0x49dbd0:c.instructions+=1;goto B49dbd0;
case 0x49dbd5:goto L49dbd5;
case 0x49dbd8:c.instructions+=3;goto B49dbd8;
case 0x49dbd9:c.instructions+=2;goto B49dbd9;
case 0x49dbda:c.instructions+=1;goto B49dbda;
case 0x49dbdf:goto L49dbdf;
case 0x49dbe2:c.instructions+=5;goto B49dbe2;
case 0x49dbe4:c.instructions+=4;goto B49dbe4;
case 0x49dbe9:c.instructions+=3;goto B49dbe9;
case 0x49dbee:c.instructions+=2;goto B49dbee;
case 0x49dbef:c.instructions+=1;goto B49dbef;
case 0x49dbf4:goto L49dbf4;
case 0x49dbf7:c.instructions+=5;goto B49dbf7;
case 0x49dbf9:c.instructions+=4;goto B49dbf9;
case 0x49dbfe:c.instructions+=3;goto B49dbfe;
case 0x49dc03:c.instructions+=2;goto B49dc03;
case 0x49dc04:c.instructions+=1;goto B49dc04;
case 0x49dc09:goto L49dc09;
case 0x49dc0c:c.instructions+=3;goto B49dc0c;
case 0x49dc11:c.instructions+=2;goto B49dc11;
case 0x49dc12:c.instructions+=1;goto B49dc12;
case 0x49dc17:goto L49dc17;
case 0x49dc1a:c.instructions+=5;goto B49dc1a;
case 0x49dc1d:c.instructions+=4;goto B49dc1d;
case 0x49dc22:c.instructions+=3;goto B49dc22;
case 0x49dc27:c.instructions+=2;goto B49dc27;
case 0x49dc28:c.instructions+=1;goto B49dc28;
case 0x49dc2d:goto L49dc2d;
case 0x49dc30:c.instructions+=2;goto B49dc30;
case 0x49dc31:c.instructions+=1;goto B49dc31;
case 0x49dc36:goto L49dc36;
case 0x49dc39:c.instructions+=3;goto B49dc39;
case 0x49dc3a:c.instructions+=2;goto B49dc3a;
case 0x49dc3b:c.instructions+=1;goto B49dc3b;
case 0x49dc3e:goto L49dc3e;
case 0x49dc48:c.instructions+=3;goto B49dc48;
case 0x49dc49:c.instructions+=2;goto B49dc49;
case 0x49dc50:c.instructions+=1;goto B49dc50;
case 0x49dc56:goto L49dc56;
case 0x49dc5b:c.instructions+=1;goto B49dc5b;
case 0x49dc62:goto L49dc62;
case 0x49dc65:c.instructions+=2;goto B49dc65;
case 0x49dc6a:c.instructions+=1;goto B49dc6a;
case 0x49dc6f:goto L49dc6f;
case 0x49dc70:c.instructions+=2;goto B49dc70;
case 0x49dc71:c.instructions+=1;goto B49dc71;
case 0x49dc76:goto L49dc76;
case 0x49dc77:c.instructions+=1;goto B49dc77;
case 0x49dc7c:goto L49dc7c;
case 0x49dc7f:c.instructions+=4;goto B49dc7f;
case 0x49dc82:c.instructions+=3;goto B49dc82;
case 0x49dc84:c.instructions+=2;goto B49dc84;
case 0x49dc89:c.instructions+=1;goto B49dc89;
case 0x49dc8e:goto L49dc8e;
case 0x49dc91:c.instructions+=3;goto B49dc91;
case 0x49dc92:c.instructions+=2;goto B49dc92;
case 0x49dc93:c.instructions+=1;goto B49dc93;
case 0x49dc98:goto L49dc98;
case 0x49dc9b:c.instructions+=4;goto B49dc9b;
case 0x49dca0:c.instructions+=3;goto B49dca0;
case 0x49dca5:c.instructions+=2;goto B49dca5;
case 0x49dca6:c.instructions+=1;goto B49dca6;
case 0x49dcab:goto L49dcab;
case 0x49dcae:c.instructions+=5;goto B49dcae;
case 0x49dcb1:c.instructions+=4;goto B49dcb1;
case 0x49dcb2:c.instructions+=3;goto B49dcb2;
case 0x49dcb7:c.instructions+=2;goto B49dcb7;
case 0x49dcb8:c.instructions+=1;goto B49dcb8;
case 0x49dcbd:goto L49dcbd;
case 0x49dcc0:c.instructions+=2;goto B49dcc0;
case 0x49dcc1:c.instructions+=1;goto B49dcc1;
case 0x49dcc6:goto L49dcc6;
case 0x49dcc9:c.instructions+=5;goto B49dcc9;
case 0x49dccc:c.instructions+=4;goto B49dccc;
case 0x49dcd1:c.instructions+=3;goto B49dcd1;
case 0x49dcd6:c.instructions+=2;goto B49dcd6;
case 0x49dcd7:c.instructions+=1;goto B49dcd7;
case 0x49dcdc:goto L49dcdc;
case 0x49dcdf:c.instructions+=2;goto B49dcdf;
case 0x49dce0:c.instructions+=1;goto B49dce0;
case 0x49dce5:goto L49dce5;
case 0x49dce8:c.instructions+=3;goto B49dce8;
case 0x49dced:c.instructions+=2;goto B49dced;
case 0x49dcee:c.instructions+=1;goto B49dcee;
case 0x49dcf3:goto L49dcf3;
case 0x49dcf6:c.instructions+=4;goto B49dcf6;
case 0x49dcf7:c.instructions+=3;goto B49dcf7;
case 0x49dcf8:c.instructions+=2;goto B49dcf8;
case 0x49dcf9:c.instructions+=1;goto B49dcf9;
case 0x49dcfc:goto L49dcfc;
case 0x49dd00:c.instructions+=2;goto B49dd00;
case 0x49dd02:c.instructions+=1;goto B49dd02;
case 0x49dd04:goto L49dd04;
case 0x49dd09:c.instructions+=2;goto B49dd09;
case 0x49dd10:c.instructions+=1;goto B49dd10;
case 0x49dd15:goto L49dd15;
case 0x49dd1a:c.instructions+=2;goto B49dd1a;
case 0x49dd21:c.instructions+=1;goto B49dd21;
case 0x49dd30:goto L49dd30;
case 0x49dd33:c.instructions+=2;goto B49dd33;
case 0x49dd36:c.instructions+=1;goto B49dd36;
case 0x49dd38:goto L49dd38;
case 0x49dd39:c.instructions+=1;goto B49dd39;
case 0x49dd3b:goto L49dd3b;
case 0x49dd3c:c.instructions+=1;goto B49dd3c;
case 0x49dd3e:goto L49dd3e;
case 0x49dd43:c.instructions+=3;goto B49dd43;
case 0x49dd49:c.instructions+=2;goto B49dd49;
case 0x49dd4b:c.instructions+=1;goto B49dd4b;
case 0x49dd4d:goto L49dd4d;
case 0x49dd52:c.instructions+=1;goto B49dd52;
case 0x49dd53:goto L49dd53;
case 0x49dd58:c.instructions+=1;goto B49dd58;
case 0x49dd59:goto L49dd59;
case 0x49dd5e:goto L49dd5e;
case 0x49dd63:c.instructions+=1;goto B49dd63;
case 0x49dd70:goto L49dd70;
case 0x49dd75:c.instructions+=3;goto B49dd75;
case 0x49dd7b:c.instructions+=2;goto B49dd7b;
case 0x49dd7d:c.instructions+=1;goto B49dd7d;
case 0x49dd7f:goto L49dd7f;
case 0x49dd85:c.instructions+=2;goto B49dd85;
case 0x49dd88:c.instructions+=1;goto B49dd88;
case 0x49dd8a:goto L49dd8a;
case 0x49dd8b:c.instructions+=1;goto B49dd8b;
case 0x49dd8d:goto L49dd8d;
case 0x49dd92:c.instructions+=1;goto B49dd92;
case 0x49dd93:goto L49dd93;
case 0x49dd98:c.instructions+=1;goto B49dd98;
case 0x49dd99:goto L49dd99;
case 0x49dd9e:c.instructions+=1;goto B49dd9e;
case 0x49dda0:goto L49dda0;
case 0x49dda5:c.instructions+=1;goto B49dda5;
case 0x49ddb0:goto L49ddb0;
case 0x49ddb5:c.instructions+=1;goto B49ddb5;
case 0x49ddc0:goto L49ddc0;
case 0x49ddc5:c.instructions+=3;goto B49ddc5;
case 0x49ddcb:c.instructions+=2;goto B49ddcb;
case 0x49ddcd:c.instructions+=1;goto B49ddcd;
case 0x49ddcf:goto L49ddcf;
case 0x49ddd4:goto L49ddd4;
case 0x49ddd9:c.instructions+=1;goto B49ddd9;
case 0x49ddda:goto L49ddda;
case 0x49dddf:c.instructions+=1;goto B49dddf;
case 0x49dde0:goto L49dde0;
case 0x49dde5:c.instructions+=1;goto B49dde5;
case 0x49ddf0:goto L49ddf0;
case 0x49ddf5:c.instructions+=1;goto B49ddf5;
case 0x49de00:goto L49de00;
case 0x49de05:c.instructions+=1;goto B49de05;
case 0x49de10:goto L49de10;
case 0x49de12:c.instructions+=12;goto B49de12;
case 0x49de17:c.instructions+=11;goto B49de17;
case 0x49de1d:c.instructions+=10;goto B49de1d;
case 0x49de1e:c.instructions+=9;goto B49de1e;
case 0x49de25:c.instructions+=8;goto B49de25;
case 0x49de26:c.instructions+=7;goto B49de26;
case 0x49de2a:c.instructions+=6;goto B49de2a;
case 0x49de2b:c.instructions+=5;goto B49de2b;
case 0x49de2c:c.instructions+=4;goto B49de2c;
case 0x49de2e:c.instructions+=3;goto B49de2e;
case 0x49de2f:c.instructions+=2;goto B49de2f;
case 0x49de33:c.instructions+=1;goto B49de33;
case 0x49de38:goto L49de38;
case 0x49de3b:c.instructions+=8;goto B49de3b;
case 0x49de3d:c.instructions+=7;goto B49de3d;
case 0x49de42:c.instructions+=6;goto B49de42;
case 0x49de47:c.instructions+=5;goto B49de47;
case 0x49de4b:c.instructions+=4;goto B49de4b;
case 0x49de51:c.instructions+=3;goto B49de51;
case 0x49de54:c.instructions+=2;goto B49de54;
case 0x49de57:c.instructions+=1;goto B49de57;
case 0x49de5c:goto L49de5c;
case 0x49de5d:c.instructions+=2;goto B49de5d;
case 0x49de5e:c.instructions+=1;goto B49de5e;
case 0x49de63:goto L49de63;
case 0x49de66:c.instructions+=2;goto B49de66;
case 0x49de67:c.instructions+=1;goto B49de67;
case 0x49de6c:goto L49de6c;
case 0x49de70:c.instructions+=8;goto B49de70;
case 0x49de73:c.instructions+=7;goto B49de73;
case 0x49de7a:c.instructions+=6;goto B49de7a;
case 0x49de7b:c.instructions+=5;goto B49de7b;
case 0x49de7d:c.instructions+=4;goto B49de7d;
case 0x49de7e:c.instructions+=3;goto B49de7e;
case 0x49de85:c.instructions+=2;goto B49de85;
case 0x49de88:c.instructions+=1;goto B49de88;
case 0x49de90:goto L49de90;
case 0x49de94:c.instructions+=2;goto B49de94;
case 0x49de97:c.instructions+=1;goto B49de97;
case 0x49de99:goto L49de99;
case 0x49de9b:c.instructions+=1;goto B49de9b;
case 0x49de9e:goto L49de9e;
case 0x49de9f:c.instructions+=3;goto B49de9f;
case 0x49dea3:c.instructions+=2;goto B49dea3;
case 0x49dea4:c.instructions+=1;goto B49dea4;
case 0x49dea9:goto L49dea9;
case 0x49deac:c.instructions+=1;goto B49deac;
case 0x49deb0:goto L49deb0;
case 0x49deb2:c.instructions+=13;goto B49deb2;
case 0x49deb7:c.instructions+=12;goto B49deb7;
case 0x49debd:c.instructions+=11;goto B49debd;
case 0x49debe:c.instructions+=10;goto B49debe;
case 0x49dec5:c.instructions+=9;goto B49dec5;
case 0x49dec6:c.instructions+=8;goto B49dec6;
case 0x49dec7:c.instructions+=7;goto B49dec7;
case 0x49dec9:c.instructions+=6;goto B49dec9;
case 0x49decd:c.instructions+=5;goto B49decd;
case 0x49ded3:c.instructions+=4;goto B49ded3;
case 0x49ded6:c.instructions+=3;goto B49ded6;
case 0x49ded8:c.instructions+=2;goto B49ded8;
case 0x49dee0:c.instructions+=1;goto B49dee0;
case 0x49dee2:goto L49dee2;
case 0x49dee3:c.instructions+=1;goto B49dee3;
case 0x49dee8:goto L49dee8;
case 0x49deeb:c.instructions+=1;goto B49deeb;
case 0x49def2:goto L49def2;
case 0x49def4:c.instructions+=2;goto B49def4;
case 0x49defc:c.instructions+=1;goto B49defc;
case 0x49df01:goto L49df01;
case 0x49df05:c.instructions+=4;goto B49df05;
case 0x49df06:c.instructions+=3;goto B49df06;
case 0x49df0d:c.instructions+=2;goto B49df0d;
case 0x49df10:c.instructions+=1;goto B49df10;
case 0x49df20:goto L49df20;
case 0x49df21:c.instructions+=3;goto B49df21;
case 0x49df23:c.instructions+=2;goto B49df23;
case 0x49df27:c.instructions+=1;goto B49df27;
case 0x49df29:goto L49df29;
case 0x49df30:c.instructions+=1;goto B49df30;
case 0x49df32:goto L49df32;
case 0x49df37:c.instructions+=2;goto B49df37;
case 0x49df3a:c.instructions+=1;goto B49df3a;
case 0x49df3c:goto L49df3c;
case 0x49df3d:c.instructions+=1;goto B49df3d;
case 0x49df3f:goto L49df3f;
case 0x49df43:c.instructions+=1;goto B49df43;
case 0x49df45:goto L49df45;
case 0x49df47:c.instructions+=3;goto B49df47;
case 0x49df49:c.instructions+=2;goto B49df49;
case 0x49df4e:c.instructions+=1;goto B49df4e;
case 0x49df53:goto L49df53;
case 0x49df56:c.instructions+=3;goto B49df56;
case 0x49df59:c.instructions+=2;goto B49df59;
case 0x49df5b:c.instructions+=1;goto B49df5b;
case 0x49df5d:goto L49df5d;
case 0x49df60:c.instructions+=2;goto B49df60;
case 0x49df63:c.instructions+=1;goto B49df63;
case 0x49df65:goto L49df65;
case 0x49df68:c.instructions+=4;goto B49df68;
case 0x49df6d:c.instructions+=3;goto B49df6d;
case 0x49df72:c.instructions+=2;goto B49df72;
case 0x49df73:c.instructions+=1;goto B49df73;
case 0x49df78:goto L49df78;
case 0x49df7b:c.instructions+=1;goto B49df7b;
case 0x49df80:goto L49df80;
case 0x49df82:c.instructions+=2;goto B49df82;
case 0x49df83:c.instructions+=1;goto B49df83;
case 0x49df84:goto L49df84;
case 0x49df87:c.instructions+=4;goto B49df87;
case 0x49df8c:c.instructions+=3;goto B49df8c;
case 0x49df91:c.instructions+=2;goto B49df91;
case 0x49df92:c.instructions+=1;goto B49df92;
case 0x49df97:goto L49df97;
case 0x49df9a:goto L49df9a;
case 0x49df9f:goto L49df9f;
case 0x49dfa1:c.instructions+=2;goto B49dfa1;
case 0x49dfa2:c.instructions+=1;goto B49dfa2;
case 0x49dfa3:goto L49dfa3;
case 0x49dfa8:goto L49dfa8;
case 0x49dfaa:c.instructions+=2;goto B49dfaa;
case 0x49dfaf:c.instructions+=1;goto B49dfaf;
case 0x49dfb4:goto L49dfb4;
case 0x49dfb9:c.instructions+=2;goto B49dfb9;
case 0x49dfba:c.instructions+=1;goto B49dfba;
case 0x49dfc0:goto L49dfc0;
case 0x49dfc4:c.instructions+=4;goto B49dfc4;
case 0x49dfc8:c.instructions+=3;goto B49dfc8;
case 0x49dfc9:c.instructions+=2;goto B49dfc9;
case 0x49dfca:c.instructions+=1;goto B49dfca;
case 0x49dfcf:goto L49dfcf;
case 0x49dfd2:c.instructions+=1;goto B49dfd2;
case 0x49dfe0:goto L49dfe0;
case 0x49dfe1:c.instructions+=2;goto B49dfe1;
case 0x49dfe3:c.instructions+=1;goto B49dfe3;
case 0x49dfe8:goto L49dfe8;
case 0x49dfed:c.instructions+=1;goto B49dfed;
case 0x49dfef:goto L49dfef;
case 0x49dff0:c.instructions+=1;goto B49dff0;
case 0x49dff5:goto L49dff5;
case 0x49dff8:goto L49dff8;
case 0x49dffa:c.instructions+=2;goto B49dffa;
case 0x49dffb:c.instructions+=1;goto B49dffb;
default:missing_instruction(c.pc);}
B49d001:L49d001:{c.instructions+=3;NFSU2_TR(0x49d001);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d002:{NFSU2_TR(0x49d002);
__builtin_memmove((R+4),(R+28),4);
}
B49d004:{NFSU2_TR(0x49d004);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d009ull));
TAIL_STATIC(0x52c2f0u,52c);
}
B49d009:L49d009:{c.instructions+=2;NFSU2_TR(0x49d009);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d00a:{NFSU2_TR(0x49d00a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d00full));
TAIL_STATIC(0x50ca50u,50c);
}
B49d00f:L49d00f:{c.instructions+=6;NFSU2_TR(0x49d00f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49d012:{NFSU2_TR(0x49d012);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49d015:{NFSU2_TR(0x49d015);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d017:{NFSU2_TR(0x49d017);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d018:{NFSU2_TR(0x49d018);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d019:{NFSU2_TR(0x49d019);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d01eull));
TAIL_STATIC(0x51cda0u,51c);
}
B49d01e:L49d01e:{c.instructions+=7;NFSU2_TR(0x49d01e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49d021:{NFSU2_TR(0x49d021);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49d024:{NFSU2_TR(0x49d024);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d026:{NFSU2_TR(0x49d026);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d02b:{NFSU2_TR(0x49d02b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d02c:{NFSU2_TR(0x49d02c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d02d:{NFSU2_TR(0x49d02d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d032ull));
TAIL_STATIC(0x537c00u,537);
}
B49d032:L49d032:{c.instructions+=5;NFSU2_TR(0x49d032);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d034:{NFSU2_TR(0x49d034);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B49d038:{NFSU2_TR(0x49d038);
u8 U[4];
w4(U+0,u32(0x78fbf8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d03d:{NFSU2_TR(0x49d03d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d03e:{NFSU2_TR(0x49d03e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d043ull));
TAIL_STATIC(0x4400d0u,440);
}
B49d043:L49d043:{c.instructions+=4;NFSU2_TR(0x49d043);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49d046:{NFSU2_TR(0x49d046);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B49d04a:{NFSU2_TR(0x49d04a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d04b:{NFSU2_TR(0x49d04b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d050ull));
TAIL_STATIC(0x505450u,505);
}
B49d050:L49d050:{c.instructions+=3;NFSU2_TR(0x49d050);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d051:{NFSU2_TR(0x49d051);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d052:{NFSU2_TR(0x49d052);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d057ull));
TAIL_STATIC(0x5379c0u,537);
}
B49d057:L49d057:{c.instructions+=2;NFSU2_TR(0x49d057);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d058:{NFSU2_TR(0x49d058);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d05dull));
TAIL_STATIC(0x50ca50u,50c);
}
B49d05d:L49d05d:{c.instructions+=7;NFSU2_TR(0x49d05d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49d060:{NFSU2_TR(0x49d060);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d062:{NFSU2_TR(0x49d062);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d067:{NFSU2_TR(0x49d067);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B49d06b:{NFSU2_TR(0x49d06b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d06c:{NFSU2_TR(0x49d06c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d06d:{NFSU2_TR(0x49d06d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d072ull));
TAIL_STATIC(0x5426c0u,542);
}
B49d072:L49d072:{c.instructions+=6;NFSU2_TR(0x49d072);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49d075:{NFSU2_TR(0x49d075);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49d078:{NFSU2_TR(0x49d078);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4cull))));
}
B49d07b:{NFSU2_TR(0x49d07b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d07c:{NFSU2_TR(0x49d07c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d07d:{NFSU2_TR(0x49d07d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d082ull));
TAIL_STATIC(0x52cea0u,52c);
}
B49d082:L49d082:{c.instructions+=7;NFSU2_TR(0x49d082);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49d085:{NFSU2_TR(0x49d085);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49d086:{NFSU2_TR(0x49d086);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49d087:{NFSU2_TR(0x49d087);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B49d088:{NFSU2_TR(0x49d088);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49d089:{NFSU2_TR(0x49d089);
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
B49d08c:{NFSU2_TR(0x49d08c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49d08f:L49d08f:{c.instructions+=2;NFSU2_TR(0x49d08f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49d092:{NFSU2_TR(0x49d092);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49d1c6;}}
}
B49d098:L49d098:{c.instructions+=3;NFSU2_TR(0x49d098);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B49d09a:{NFSU2_TR(0x49d09a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B49d09d:{NFSU2_TR(0x49d09d);
__builtin_memmove((R+4),(R+4),4);
}
B49d0a0:L49d0a0:{c.instructions+=7;NFSU2_TR(0x49d0a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+20),(U+0),4);
}
B49d0a3:{NFSU2_TR(0x49d0a3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d0a4:{NFSU2_TR(0x49d0a4);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B49d0a8:{NFSU2_TR(0x49d0a8);
u8 U[4];
w4(U+0,u32(0x78fc10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d0ad:{NFSU2_TR(0x49d0ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d0ae:{NFSU2_TR(0x49d0ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49d0b1:{NFSU2_TR(0x49d0b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d0b6ull));
TAIL_STATIC(0x4400d0u,440);
}
B49d0b6:L49d0b6:{c.instructions+=3;NFSU2_TR(0x49d0b6);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B49d0ba:{NFSU2_TR(0x49d0ba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d0bb:{NFSU2_TR(0x49d0bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d0c0ull));
TAIL_STATIC(0x505450u,505);
}
B49d0c0:L49d0c0:{c.instructions+=5;NFSU2_TR(0x49d0c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B49d0c2:{NFSU2_TR(0x49d0c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49d0c5:{NFSU2_TR(0x49d0c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d0c6:{NFSU2_TR(0x49d0c6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d0c7:{NFSU2_TR(0x49d0c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d0ccull));
TAIL_STATIC(0x537a10u,537);
}
B49d0cc:L49d0cc:{c.instructions+=6;NFSU2_TR(0x49d0cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49d0ce:{NFSU2_TR(0x49d0ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49d0d2:{NFSU2_TR(0x49d0d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49d0d5:{NFSU2_TR(0x49d0d5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d0d6:{NFSU2_TR(0x49d0d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d0d7:{NFSU2_TR(0x49d0d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d0dcull));
TAIL_STATIC(0x537a10u,537);
}
B49d0dc:L49d0dc:{c.instructions+=7;NFSU2_TR(0x49d0dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49d0e0:{NFSU2_TR(0x49d0e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49d0e4:{NFSU2_TR(0x49d0e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B49d0e7:{NFSU2_TR(0x49d0e7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B49d0ea:{NFSU2_TR(0x49d0ea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d0eb:{NFSU2_TR(0x49d0eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49d0ef:{NFSU2_TR(0x49d0ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d0f4ull));
TAIL_STATIC(0x52c2f0u,52c);
}
B49d0f4:L49d0f4:{c.instructions+=3;NFSU2_TR(0x49d0f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49d0f8:{NFSU2_TR(0x49d0f8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d0f9:{NFSU2_TR(0x49d0f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d0feull));
TAIL_STATIC(0x50ca50u,50c);
}
B49d0fe:L49d0fe:{c.instructions+=6;NFSU2_TR(0x49d0fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49d100:{NFSU2_TR(0x49d100);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49d103:{NFSU2_TR(0x49d103);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d105:{NFSU2_TR(0x49d105);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d106:{NFSU2_TR(0x49d106);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d107:{NFSU2_TR(0x49d107);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d10cull));
TAIL_STATIC(0x51cda0u,51c);
}
B49d10c:L49d10c:{c.instructions+=5;NFSU2_TR(0x49d10c);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49d110:{NFSU2_TR(0x49d110);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B49d113:{NFSU2_TR(0x49d113);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49d115:{NFSU2_TR(0x49d115);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d117:{NFSU2_TR(0x49d117);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49d127;}}
}
B49d119:L49d119:{c.instructions+=6;NFSU2_TR(0x49d119);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49d11b:{NFSU2_TR(0x49d11b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49d11e:{NFSU2_TR(0x49d11e);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d123:{NFSU2_TR(0x49d123);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d124:{NFSU2_TR(0x49d124);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d125:{NFSU2_TR(0x49d125);
{goto L49d133;}
}
B49d127:L49d127:{c.instructions+=5;NFSU2_TR(0x49d127);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B49d129:{NFSU2_TR(0x49d129);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49d12c:{NFSU2_TR(0x49d12c);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d131:{NFSU2_TR(0x49d131);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d132:{NFSU2_TR(0x49d132);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d133:L49d133:{c.instructions+=1;NFSU2_TR(0x49d133);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d138ull));
TAIL_STATIC(0x537c00u,537);
}
B49d138:L49d138:{c.instructions+=6;NFSU2_TR(0x49d138);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B49d13b:{NFSU2_TR(0x49d13b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d13c:{NFSU2_TR(0x49d13c);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B49d140:{NFSU2_TR(0x49d140);
u8 U[4];
w4(U+0,u32(0x78fbf8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d145:{NFSU2_TR(0x49d145);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d146:{NFSU2_TR(0x49d146);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d14bull));
TAIL_STATIC(0x4400d0u,440);
}
B49d14b:L49d14b:{c.instructions+=5;NFSU2_TR(0x49d14b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49d14e:{NFSU2_TR(0x49d14e);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B49d152:{NFSU2_TR(0x49d152);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d153:{NFSU2_TR(0x49d153);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49d157:{NFSU2_TR(0x49d157);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d15cull));
TAIL_STATIC(0x505450u,505);
}
B49d15c:L49d15c:{c.instructions+=4;NFSU2_TR(0x49d15c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d15d:{NFSU2_TR(0x49d15d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49d161:{NFSU2_TR(0x49d161);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d162:{NFSU2_TR(0x49d162);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d167ull));
TAIL_STATIC(0x5379c0u,537);
}
B49d167:L49d167:{c.instructions+=2;NFSU2_TR(0x49d167);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d168:{NFSU2_TR(0x49d168);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d16dull));
TAIL_STATIC(0x50ca50u,50c);
}
B49d16d:L49d16d:{c.instructions+=5;NFSU2_TR(0x49d16d);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49d171:{NFSU2_TR(0x49d171);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B49d174:{NFSU2_TR(0x49d174);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49d176:{NFSU2_TR(0x49d176);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d178:{NFSU2_TR(0x49d178);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49d18a;}}
}
B49d17a:L49d17a:{c.instructions+=6;NFSU2_TR(0x49d17a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49d17d:{NFSU2_TR(0x49d17d);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d182:{NFSU2_TR(0x49d182);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B49d186:{NFSU2_TR(0x49d186);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d187:{NFSU2_TR(0x49d187);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d188:{NFSU2_TR(0x49d188);
{goto L49d198;}
}
B49d18a:L49d18a:{c.instructions+=5;NFSU2_TR(0x49d18a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49d18d:{NFSU2_TR(0x49d18d);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d192:{NFSU2_TR(0x49d192);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B49d196:{NFSU2_TR(0x49d196);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d197:{NFSU2_TR(0x49d197);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d198:L49d198:{c.instructions+=1;NFSU2_TR(0x49d198);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d19dull));
TAIL_STATIC(0x5426c0u,542);
}
B49d19d:L49d19d:{c.instructions+=5;NFSU2_TR(0x49d19d);
__builtin_memmove((R+12),(R+20),4);
}
B49d19f:{NFSU2_TR(0x49d19f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B49d1a2:{NFSU2_TR(0x49d1a2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xcull))));
}
B49d1a5:{NFSU2_TR(0x49d1a5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B49d1a8:{NFSU2_TR(0x49d1a8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49d0a0u);}goto L49d0a0;}}
}
B49d1ae:L49d1ae:{c.instructions+=7;NFSU2_TR(0x49d1ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49d1b2:{NFSU2_TR(0x49d1b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49d1b5:{NFSU2_TR(0x49d1b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B49d1b8:{NFSU2_TR(0x49d1b8);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B49d1bc:{NFSU2_TR(0x49d1bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d1bd:{NFSU2_TR(0x49d1bd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d1be:{NFSU2_TR(0x49d1be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d1c3ull));
TAIL_STATIC(0x52cea0u,52c);
}
B49d1c3:L49d1c3:{c.instructions+=1;NFSU2_TR(0x49d1c3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49d1c6:L49d1c6:{c.instructions+=6;NFSU2_TR(0x49d1c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49d1c7:{NFSU2_TR(0x49d1c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49d1c8:{NFSU2_TR(0x49d1c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B49d1c9:{NFSU2_TR(0x49d1c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49d1ca:{NFSU2_TR(0x49d1ca);
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
B49d1cd:{NFSU2_TR(0x49d1cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49d1d0:L49d1d0:{c.instructions+=15;NFSU2_TR(0x49d1d0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d1d2:{NFSU2_TR(0x49d1d2);
u8 U[4];
w4(U+0,u32(0x772956ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d1d7:{NFSU2_TR(0x49d1d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49d1dd:{NFSU2_TR(0x49d1dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d1de:{NFSU2_TR(0x49d1de);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49d1e5:{NFSU2_TR(0x49d1e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B49d1e8:{NFSU2_TR(0x49d1e8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d1e9:{NFSU2_TR(0x49d1e9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d1ea:{NFSU2_TR(0x49d1ea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d1eb:{NFSU2_TR(0x49d1eb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d1ec:{NFSU2_TR(0x49d1ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49d1f0:{NFSU2_TR(0x49d1f0);
__builtin_memmove((R+24),(R+4),4);
}
B49d1f2:{NFSU2_TR(0x49d1f2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d1f3:{NFSU2_TR(0x49d1f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49d1f7:{NFSU2_TR(0x49d1f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d1fcull));
TAIL_STATIC(0x551de0u,551);
}
B49d1fc:L49d1fc:{c.instructions+=12;NFSU2_TR(0x49d1fc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B49d200:{NFSU2_TR(0x49d200);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49d203:{NFSU2_TR(0x49d203);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B49d205:{NFSU2_TR(0x49d205);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d206:{NFSU2_TR(0x49d206);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d207:{NFSU2_TR(0x49d207);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d209:{NFSU2_TR(0x49d209);
u8 U[4];
w4(U+0,u32(0x78fc68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d20e:{NFSU2_TR(0x49d20e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((R+4),(U+0),4);
}
B49d211:{NFSU2_TR(0x49d211);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d212:{NFSU2_TR(0x49d212);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49d216:{NFSU2_TR(0x49d216);
u8 U[4];
w4(U+0,u32(0x78fc58ull));
s4(u32(r4(R+24)),r4(U+0));
}
B49d21c:{NFSU2_TR(0x49d21c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d221ull));
TAIL_STATIC(0x542ac0u,542);
}
B49d221:L49d221:{c.instructions+=3;NFSU2_TR(0x49d221);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49d227:{NFSU2_TR(0x49d227);
__builtin_memmove((R+4),(R+12),4);
}
B49d229:{NFSU2_TR(0x49d229);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d22eull));
TAIL_STATIC(0x50db40u,50d);
}
B49d22e:L49d22e:{c.instructions+=10;NFSU2_TR(0x49d22e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49d231:{NFSU2_TR(0x49d231);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B49d233:{NFSU2_TR(0x49d233);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d234:{NFSU2_TR(0x49d234);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d235:{NFSU2_TR(0x49d235);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d236:{NFSU2_TR(0x49d236);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49d239:{NFSU2_TR(0x49d239);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49d23b:{NFSU2_TR(0x49d23b);
u8 U[4];
w4(U+0,u32(0xb19b00b5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d240:{NFSU2_TR(0x49d240);
u8 U[5];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B49d245:{NFSU2_TR(0x49d245);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d248ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49d248:L49d248:{c.instructions+=4;NFSU2_TR(0x49d248);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x49ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B49d24b:{NFSU2_TR(0x49d24b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49d24d:{NFSU2_TR(0x49d24d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x49ull))));
__builtin_memmove((R+0),(U+0),4);
}
B49d250:{NFSU2_TR(0x49d250);
if(r1(R+518)){{goto L49d25b;}}
}
B49d252:L49d252:{c.instructions+=2;NFSU2_TR(0x49d252);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49d256:{NFSU2_TR(0x49d256);
w4(R+20,u32(0x1ull));
}
B49d25b:L49d25b:{c.instructions+=4;NFSU2_TR(0x49d25b);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x76ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B49d25e:{NFSU2_TR(0x49d25e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49d260:{NFSU2_TR(0x49d260);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x76ull))));
__builtin_memmove((R+0),(U+0),4);
}
B49d263:{NFSU2_TR(0x49d263);
if(r1(R+518)){{goto L49d26a;}}
}
B49d265:L49d265:{c.instructions+=2;NFSU2_TR(0x49d265);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B49d269:{NFSU2_TR(0x49d269);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B49d26a:L49d26a:{c.instructions+=6;NFSU2_TR(0x49d26a);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d26c:{NFSU2_TR(0x49d26c);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B49d270:{NFSU2_TR(0x49d270);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d271:{NFSU2_TR(0x49d271);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d272:{NFSU2_TR(0x49d272);
__builtin_memmove((R+4),(R+24),4);
}
B49d274:{NFSU2_TR(0x49d274);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d279ull));
TAIL_STATIC(0x49cf10u,49c);
}
B49d279:L49d279:{c.instructions+=10;NFSU2_TR(0x49d279);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B49d27b:{NFSU2_TR(0x49d27b);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49d27e:{NFSU2_TR(0x49d27e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B49d281:{NFSU2_TR(0x49d281);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+8),(U+1),1);
}
B49d284:{NFSU2_TR(0x49d284);
u8 U[4];
w4(U+0,u32(0x78fc4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d289:{NFSU2_TR(0x49d289);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B49d28a:{NFSU2_TR(0x49d28a);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x4f806780ull))));
}
B49d290:{NFSU2_TR(0x49d290);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x84684ee8ull))));
}
B49d296:{NFSU2_TR(0x49d296);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49d299:{NFSU2_TR(0x49d299);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d29eull));
TAIL_STATIC(0x505450u,505);
}
B49d29e:L49d29e:{c.instructions+=3;NFSU2_TR(0x49d29e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d29f:{NFSU2_TR(0x49d29f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d2a0:{NFSU2_TR(0x49d2a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d2a5ull));
TAIL_STATIC(0x537a10u,537);
}
B49d2a5:L49d2a5:{c.instructions+=5;NFSU2_TR(0x49d2a5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B49d2a8:{NFSU2_TR(0x49d2a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49d2ab:{NFSU2_TR(0x49d2ab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d2ac:{NFSU2_TR(0x49d2ac);
__builtin_memmove((R+4),(R+0),4);
}
B49d2ae:{NFSU2_TR(0x49d2ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d2b3ull));
TAIL_STATIC(0x52c2f0u,52c);
}
B49d2b3:L49d2b3:{c.instructions+=6;NFSU2_TR(0x49d2b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49d2b6:{NFSU2_TR(0x49d2b6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d2b8:{NFSU2_TR(0x49d2b8);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d2bd:{NFSU2_TR(0x49d2bd);
u8 U[4];
w4(U+0,u32(0x78fc3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d2c2:{NFSU2_TR(0x49d2c2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d2c3:{NFSU2_TR(0x49d2c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d2c8ull));
TAIL_STATIC(0x5426c0u,542);
}
B49d2c8:L49d2c8:{c.instructions+=3;NFSU2_TR(0x49d2c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B49d2cb:{NFSU2_TR(0x49d2cb);
u8 U[4];
w4(U+0,u32(0x78fc2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d2d0:{NFSU2_TR(0x49d2d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d2d5ull));
TAIL_STATIC(0x505450u,505);
}
B49d2d5:L49d2d5:{c.instructions+=3;NFSU2_TR(0x49d2d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d2d6:{NFSU2_TR(0x49d2d6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d2d7:{NFSU2_TR(0x49d2d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d2dcull));
TAIL_STATIC(0x537a10u,537);
}
B49d2dc:L49d2dc:{c.instructions+=4;NFSU2_TR(0x49d2dc);
__builtin_memmove((R+20),(R+0),4);
}
B49d2de:{NFSU2_TR(0x49d2de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49d2e1:{NFSU2_TR(0x49d2e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d2e2:{NFSU2_TR(0x49d2e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d2e7ull));
TAIL_STATIC(0x51bd70u,51b);
}
B49d2e7:L49d2e7:{c.instructions+=9;NFSU2_TR(0x49d2e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49d2ea:{NFSU2_TR(0x49d2ea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B49d2ed:{NFSU2_TR(0x49d2ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d2ee:{NFSU2_TR(0x49d2ee);
u8 U[4];
w4(U+0,u32(0x78fc1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d2f3:{NFSU2_TR(0x49d2f3);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d2f5:{NFSU2_TR(0x49d2f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d2f6:{NFSU2_TR(0x49d2f6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d2f7:{NFSU2_TR(0x49d2f7);
__builtin_memmove((R+4),(R+12),4);
}
B49d2f9:{NFSU2_TR(0x49d2f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d2feull));
TAIL_STATIC(0x50dbb0u,50d);
}
B49d2fe:L49d2fe:{c.instructions+=5;NFSU2_TR(0x49d2fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((R+0),(U+0),4);
}
B49d301:{NFSU2_TR(0x49d301);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49d307:{NFSU2_TR(0x49d307);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49d30a:{NFSU2_TR(0x49d30a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+20),(U+0),4);
}
B49d30d:{NFSU2_TR(0x49d30d);
__builtin_memmove((R+4),(R+4),4);
}
B49d310:L49d310:{c.instructions+=4;NFSU2_TR(0x49d310);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B49d312:{NFSU2_TR(0x49d312);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B49d313:{NFSU2_TR(0x49d313);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49d315:{NFSU2_TR(0x49d315);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49d310u);}goto L49d310;}}
}
B49d317:L49d317:{c.instructions+=4;NFSU2_TR(0x49d317);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+20))));
}
B49d319:{NFSU2_TR(0x49d319);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49d31b:{NFSU2_TR(0x49d31b);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49d31f:{NFSU2_TR(0x49d31f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L49d351;}}
}
B49d321:L49d321:{c.instructions+=3;NFSU2_TR(0x49d321);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B49d324:{NFSU2_TR(0x49d324);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d325:{NFSU2_TR(0x49d325);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d32aull));
TAIL_STATIC(0x575620u,575);
}
B49d32a:L49d32a:{c.instructions+=7;NFSU2_TR(0x49d32a);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49d32e:{NFSU2_TR(0x49d32e);
__builtin_memmove((R+20),(R+0),4);
}
B49d330:{NFSU2_TR(0x49d330);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49d333:{NFSU2_TR(0x49d333);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d334:{NFSU2_TR(0x49d334);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d335:{NFSU2_TR(0x49d335);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d336:{NFSU2_TR(0x49d336);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d33bull));
TAIL_STATIC(0x4ffb10u,4ff);
}
B49d33b:L49d33b:{c.instructions+=4;NFSU2_TR(0x49d33b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B49d33e:{NFSU2_TR(0x49d33e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d33f:{NFSU2_TR(0x49d33f);
__builtin_memmove((R+4),(R+12),4);
}
B49d341:{NFSU2_TR(0x49d341);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d346ull));
TAIL_STATIC(0x5446f0u,544);
}
B49d346:L49d346:{c.instructions+=2;NFSU2_TR(0x49d346);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d347:{NFSU2_TR(0x49d347);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d34cull));
TAIL_STATIC(0x575630u,575);
}
B49d34c:L49d34c:{c.instructions+=2;NFSU2_TR(0x49d34c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49d34f:{NFSU2_TR(0x49d34f);
{goto L49d35a;}
}
B49d351:L49d351:{c.instructions+=3;NFSU2_TR(0x49d351);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d353:{NFSU2_TR(0x49d353);
__builtin_memmove((R+4),(R+12),4);
}
B49d355:{NFSU2_TR(0x49d355);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d35aull));
TAIL_STATIC(0x5446f0u,544);
}
B49d35a:L49d35a:{c.instructions+=9;NFSU2_TR(0x49d35a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49d35e:{NFSU2_TR(0x49d35e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49d35f:{NFSU2_TR(0x49d35f);
__builtin_memmove((R+0),(R+24),4);
}
B49d361:{NFSU2_TR(0x49d361);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49d362:{NFSU2_TR(0x49d362);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B49d363:{NFSU2_TR(0x49d363);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49d364:{NFSU2_TR(0x49d364);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49d36b:{NFSU2_TR(0x49d36b);
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
B49d36e:{NFSU2_TR(0x49d36e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49d380:L49d380:{c.instructions+=8;NFSU2_TR(0x49d380);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49d384:{NFSU2_TR(0x49d384);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d385:{NFSU2_TR(0x49d385);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d386:{NFSU2_TR(0x49d386);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49d38a:{NFSU2_TR(0x49d38a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d38b:{NFSU2_TR(0x49d38b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d38c:{NFSU2_TR(0x49d38c);
__builtin_memmove((R+24),(R+4),4);
}
B49d38e:{NFSU2_TR(0x49d38e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d393ull));
{goto L49d400;}
}
B49d393:L49d393:{c.instructions+=2;NFSU2_TR(0x49d393);
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
B49d396:{NFSU2_TR(0x49d396);
if(r1(R+518)){{goto L49d3be;}}
}
B49d398:L49d398:{c.instructions+=9;NFSU2_TR(0x49d398);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49d39b:{NFSU2_TR(0x49d39b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49d39d:{NFSU2_TR(0x49d39d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49d39e:{NFSU2_TR(0x49d39e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49d39f:{NFSU2_TR(0x49d39f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49d3a7:{NFSU2_TR(0x49d3a7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49d3ab:{NFSU2_TR(0x49d3ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49d3b3:{NFSU2_TR(0x49d3b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0xdead900dull));
s4(u32(r4(U+0)),r4(U+4));
}
B49d3bb:{NFSU2_TR(0x49d3bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B49d3be:L49d3be:{c.instructions+=3;NFSU2_TR(0x49d3be);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d3bf:{NFSU2_TR(0x49d3bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49d3c5:{NFSU2_TR(0x49d3c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d3caull));
TAIL_STATIC(0x5448f0u,544);
}
B49d3ca:L49d3ca:{c.instructions+=2;NFSU2_TR(0x49d3ca);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xb19ba115ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xb19ba115ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xb19ba115ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49d3d0:{NFSU2_TR(0x49d3d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49d3f1;}}
}
B49d3d2:L49d3d2:{c.instructions+=7;NFSU2_TR(0x49d3d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49d3d5:{NFSU2_TR(0x49d3d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49d3d7:{NFSU2_TR(0x49d3d7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d3d9:{NFSU2_TR(0x49d3d9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d3db:{NFSU2_TR(0x49d3db);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d3dd:{NFSU2_TR(0x49d3dd);
u8 U[4];
w4(U+0,u32(0xb19b00b5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d3e2:{NFSU2_TR(0x49d3e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d3e5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49d3e5:L49d3e5:{c.instructions+=3;NFSU2_TR(0x49d3e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49d3e8:{NFSU2_TR(0x49d3e8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d3e9:{NFSU2_TR(0x49d3e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d3eeull));
TAIL_STATIC(0x5379a0u,537);
}
B49d3ee:L49d3ee:{c.instructions+=1;NFSU2_TR(0x49d3ee);
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
B49d3f1:L49d3f1:{c.instructions+=3;NFSU2_TR(0x49d3f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49d3f2:{NFSU2_TR(0x49d3f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49d3f3:{NFSU2_TR(0x49d3f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49d400:L49d400:{c.instructions+=6;NFSU2_TR(0x49d400);
u8 U[22];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
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
B49d408:{NFSU2_TR(0x49d408);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d409:{NFSU2_TR(0x49d409);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d40a:{NFSU2_TR(0x49d40a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d40b:{NFSU2_TR(0x49d40b);
w4(R+0,u32(0x6ull));
}
B49d410:{NFSU2_TR(0x49d410);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49d43a;}}
}
B49d412:L49d412:{c.instructions+=4;NFSU2_TR(0x49d412);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B49d416:{NFSU2_TR(0x49d416);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B49d418:{NFSU2_TR(0x49d418);
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
B49d41a:{NFSU2_TR(0x49d41a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L49d43a;}}
}
B49d41c:L49d41c:{c.instructions+=2;NFSU2_TR(0x49d41c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49d420:{NFSU2_TR(0x49d420);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x54ull))));
}
B49d423:L49d423:{c.instructions+=2;NFSU2_TR(0x49d423);
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
B49d426:{NFSU2_TR(0x49d426);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49d43a;}}
}
B49d428:L49d428:{c.instructions+=3;NFSU2_TR(0x49d428);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B49d42b:{NFSU2_TR(0x49d42b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B49d42e:{NFSU2_TR(0x49d42e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49d432;}}
}
B49d430:L49d430:{c.instructions+=1;NFSU2_TR(0x49d430);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49d432:L49d432:{c.instructions+=4;NFSU2_TR(0x49d432);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B49d433:{NFSU2_TR(0x49d433);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B49d436:{NFSU2_TR(0x49d436);
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
B49d438:{NFSU2_TR(0x49d438);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49d423u);}goto L49d423;}}
}
B49d43a:L49d43a:{c.instructions+=4;NFSU2_TR(0x49d43a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49d43b:{NFSU2_TR(0x49d43b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49d43c:{NFSU2_TR(0x49d43c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49d43d:{NFSU2_TR(0x49d43d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49d440:L49d440:{c.instructions+=3;NFSU2_TR(0x49d440);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49d444:{NFSU2_TR(0x49d444);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B49d447:{NFSU2_TR(0x49d447);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L49d458;}}
}
B49d449:L49d449:{c.instructions+=2;NFSU2_TR(0x49d449);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B49d44c:{NFSU2_TR(0x49d44c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L49d466;}}
}
B49d44e:L49d44e:{c.instructions+=2;NFSU2_TR(0x49d44e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49d451:{NFSU2_TR(0x49d451);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49d458;}}
}
B49d453:L49d453:{c.instructions+=2;NFSU2_TR(0x49d453);
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
B49d455:{NFSU2_TR(0x49d455);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49d458:L49d458:{c.instructions+=4;NFSU2_TR(0x49d458);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d459:{NFSU2_TR(0x49d459);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49d45d:{NFSU2_TR(0x49d45d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d45e:{NFSU2_TR(0x49d45e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d463ull));
TAIL_STATIC(0x50d1d0u,50d);
}
B49d463:L49d463:{c.instructions+=1;NFSU2_TR(0x49d463);
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
B49d466:L49d466:{c.instructions+=1;NFSU2_TR(0x49d466);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49d470:L49d470:{c.instructions+=3;NFSU2_TR(0x49d470);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d471:{NFSU2_TR(0x49d471);
__builtin_memmove((R+24),(R+4),4);
}
B49d473:{NFSU2_TR(0x49d473);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d478ull));
{goto L49d490;}
}
B49d478:L49d478:{c.instructions+=2;NFSU2_TR(0x49d478);
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
B49d47d:{NFSU2_TR(0x49d47d);
if(r1(R+518)){{goto L49d488;}}
}
B49d47f:L49d47f:{c.instructions+=2;NFSU2_TR(0x49d47f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d480:{NFSU2_TR(0x49d480);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d485ull));
TAIL_STATIC(0x575630u,575);
}
B49d485:L49d485:{c.instructions+=1;NFSU2_TR(0x49d485);
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
B49d488:L49d488:{c.instructions+=3;NFSU2_TR(0x49d488);
__builtin_memmove((R+0),(R+24),4);
}
B49d48a:{NFSU2_TR(0x49d48a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49d48b:{NFSU2_TR(0x49d48b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49d490:L49d490:{c.instructions+=13;NFSU2_TR(0x49d490);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d492:{NFSU2_TR(0x49d492);
u8 U[4];
w4(U+0,u32(0x772968ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d497:{NFSU2_TR(0x49d497);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49d49d:{NFSU2_TR(0x49d49d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d49e:{NFSU2_TR(0x49d49e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49d4a5:{NFSU2_TR(0x49d4a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d4a6:{NFSU2_TR(0x49d4a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d4a7:{NFSU2_TR(0x49d4a7);
__builtin_memmove((R+24),(R+4),4);
}
B49d4a9:{NFSU2_TR(0x49d4a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49d4ad:{NFSU2_TR(0x49d4ad);
u8 U[4];
w4(U+0,u32(0x78fc58ull));
s4(u32(r4(R+24)),r4(U+0));
}
B49d4b3:{NFSU2_TR(0x49d4b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49d4b9:{NFSU2_TR(0x49d4b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49d4c1:{NFSU2_TR(0x49d4c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d4c6ull));
TAIL_STATIC(0x50db70u,50d);
}
B49d4c6:L49d4c6:{c.instructions+=3;NFSU2_TR(0x49d4c6);
__builtin_memmove((R+4),(R+24),4);
}
B49d4c8:{NFSU2_TR(0x49d4c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B49d4d0:{NFSU2_TR(0x49d4d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d4d5ull));
TAIL_STATIC(0x510d40u,510);
}
B49d4d5:L49d4d5:{c.instructions+=5;NFSU2_TR(0x49d4d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49d4d9:{NFSU2_TR(0x49d4d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49d4da:{NFSU2_TR(0x49d4da);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49d4e1:{NFSU2_TR(0x49d4e1);
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
B49d4e4:{NFSU2_TR(0x49d4e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49d4f0:L49d4f0:{c.instructions+=8;NFSU2_TR(0x49d4f0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d4f2:{NFSU2_TR(0x49d4f2);
u8 U[4];
w4(U+0,u32(0x772994ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d4f7:{NFSU2_TR(0x49d4f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49d4fd:{NFSU2_TR(0x49d4fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d4fe:{NFSU2_TR(0x49d4fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49d505:{NFSU2_TR(0x49d505);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d506:{NFSU2_TR(0x49d506);
u8 U[4];
w4(U+0,u32(0x118ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d50b:{NFSU2_TR(0x49d50b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d510ull));
TAIL_STATIC(0x575620u,575);
}
B49d510:L49d510:{c.instructions+=5;NFSU2_TR(0x49d510);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49d513:{NFSU2_TR(0x49d513);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B49d517:{NFSU2_TR(0x49d517);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49d519:{NFSU2_TR(0x49d519);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49d521:{NFSU2_TR(0x49d521);
if(r1(R+518)){{goto L49d53e;}}
}
B49d523:L49d523:{c.instructions+=4;NFSU2_TR(0x49d523);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49d527:{NFSU2_TR(0x49d527);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d528:{NFSU2_TR(0x49d528);
__builtin_memmove((R+4),(R+0),4);
}
B49d52a:{NFSU2_TR(0x49d52a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d52full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49d1d0u);}goto L49d1d0;}
}
B49d52f:L49d52f:{c.instructions+=4;NFSU2_TR(0x49d52f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49d533:{NFSU2_TR(0x49d533);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49d53a:{NFSU2_TR(0x49d53a);
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
B49d53d:{NFSU2_TR(0x49d53d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49d53e:L49d53e:{c.instructions+=5;NFSU2_TR(0x49d53e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49d542:{NFSU2_TR(0x49d542);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B49d544:{NFSU2_TR(0x49d544);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49d54b:{NFSU2_TR(0x49d54b);
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
B49d54e:{NFSU2_TR(0x49d54e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49d550:L49d550:{c.instructions+=8;NFSU2_TR(0x49d550);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d552:{NFSU2_TR(0x49d552);
u8 U[4];
w4(U+0,u32(0x7729b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d557:{NFSU2_TR(0x49d557);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49d55d:{NFSU2_TR(0x49d55d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d55e:{NFSU2_TR(0x49d55e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49d565:{NFSU2_TR(0x49d565);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d566:{NFSU2_TR(0x49d566);
u8 U[4];
w4(U+0,u32(0x530ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d56b:{NFSU2_TR(0x49d56b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d570ull));
TAIL_STATIC(0x575620u,575);
}
B49d570:L49d570:{c.instructions+=5;NFSU2_TR(0x49d570);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49d573:{NFSU2_TR(0x49d573);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B49d577:{NFSU2_TR(0x49d577);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49d579:{NFSU2_TR(0x49d579);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49d581:{NFSU2_TR(0x49d581);
if(r1(R+518)){{goto L49d59e;}}
}
B49d583:L49d583:{c.instructions+=4;NFSU2_TR(0x49d583);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49d587:{NFSU2_TR(0x49d587);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d588:{NFSU2_TR(0x49d588);
__builtin_memmove((R+4),(R+0),4);
}
B49d58a:{NFSU2_TR(0x49d58a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d58full));
TAIL_STATIC(0x49ccb0u,49c);
}
B49d58f:L49d58f:{c.instructions+=4;NFSU2_TR(0x49d58f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49d593:{NFSU2_TR(0x49d593);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49d59a:{NFSU2_TR(0x49d59a);
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
B49d59d:{NFSU2_TR(0x49d59d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49d59e:L49d59e:{c.instructions+=5;NFSU2_TR(0x49d59e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49d5a2:{NFSU2_TR(0x49d5a2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B49d5a4:{NFSU2_TR(0x49d5a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49d5ab:{NFSU2_TR(0x49d5ab);
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
B49d5ae:{NFSU2_TR(0x49d5ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49d5b0:L49d5b0:{c.instructions+=5;NFSU2_TR(0x49d5b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d5b1:{NFSU2_TR(0x49d5b1);
__builtin_memmove((R+24),(R+4),4);
}
B49d5b3:{NFSU2_TR(0x49d5b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49d5b9:{NFSU2_TR(0x49d5b9);
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
B49d5bb:{NFSU2_TR(0x49d5bb);
if(r1(R+518)){{goto L49d5d0;}}
}
B49d5bd:L49d5bd:{c.instructions+=2;NFSU2_TR(0x49d5bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d5be:{NFSU2_TR(0x49d5be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d5c3ull));
TAIL_STATIC(0x540a60u,540);
}
B49d5c3:L49d5c3:{c.instructions+=2;NFSU2_TR(0x49d5c3);
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
B49d5c6:{NFSU2_TR(0x49d5c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49d5d0:L49d5d0:{c.instructions+=2;NFSU2_TR(0x49d5d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49d5d1:{NFSU2_TR(0x49d5d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49d5e0:L49d5e0:{c.instructions+=6;NFSU2_TR(0x49d5e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d5e1:{NFSU2_TR(0x49d5e1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d5e2:{NFSU2_TR(0x49d5e2);
__builtin_memmove((R+24),(R+4),4);
}
B49d5e4:{NFSU2_TR(0x49d5e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49d5ea:{NFSU2_TR(0x49d5ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49d5ec:{NFSU2_TR(0x49d5ec);
if(r1(R+518)){{goto L49d5f7;}}
}
B49d5ee:L49d5ee:{c.instructions+=2;NFSU2_TR(0x49d5ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d5ef:{NFSU2_TR(0x49d5ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d5f4ull));
TAIL_STATIC(0x540a60u,540);
}
B49d5f4:L49d5f4:{c.instructions+=1;NFSU2_TR(0x49d5f4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49d5f7:L49d5f7:{c.instructions+=4;NFSU2_TR(0x49d5f7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49d5fb:{NFSU2_TR(0x49d5fb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B49d5fe:{NFSU2_TR(0x49d5fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49d600:{NFSU2_TR(0x49d600);
if(r1(R+518)){{goto L49d620;}}
}
B49d602:L49d602:{c.instructions+=2;NFSU2_TR(0x49d602);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x30ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B49d605:{NFSU2_TR(0x49d605);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49d620;}}
}
B49d607:L49d607:{c.instructions+=2;NFSU2_TR(0x49d607);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x78ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B49d60b:{NFSU2_TR(0x49d60b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49d620;}}
}
B49d60d:L49d60d:{c.instructions+=2;NFSU2_TR(0x49d60d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d60e:{NFSU2_TR(0x49d60e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d613ull));
TAIL_STATIC(0x43de50u,43d);
}
B49d613:L49d613:{c.instructions+=3;NFSU2_TR(0x49d613);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d614:{NFSU2_TR(0x49d614);
w1(R+12,u8(0x1ull));
}
B49d616:{NFSU2_TR(0x49d616);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d61bull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B49d61b:L49d61b:{c.instructions+=2;NFSU2_TR(0x49d61b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49d61e:{NFSU2_TR(0x49d61e);
{goto L49d622;}
}
B49d620:L49d620:{c.instructions+=1;NFSU2_TR(0x49d620);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B49d622:L49d622:{c.instructions+=8;NFSU2_TR(0x49d622);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49d628:{NFSU2_TR(0x49d628);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49d62b:{NFSU2_TR(0x49d62b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d62c:{NFSU2_TR(0x49d62c);
u8 U[4];
w4(U+0,u32(0xeb0ffe1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d631:{NFSU2_TR(0x49d631);
u8 U[4];
w4(U+0,u32(0x541389e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d636:{NFSU2_TR(0x49d636);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d63b:{NFSU2_TR(0x49d63b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d63c:{NFSU2_TR(0x49d63c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d641ull));
TAIL_STATIC(0x5585e0u,558);
}
B49d641:L49d641:{c.instructions+=6;NFSU2_TR(0x49d641);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B49d644:{NFSU2_TR(0x49d644);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49d64a:{NFSU2_TR(0x49d64a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49d64b:{NFSU2_TR(0x49d64b);
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
B49d64d:{NFSU2_TR(0x49d64d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49d64e:{NFSU2_TR(0x49d64e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49d655;}}
}
B49d650:L49d650:{c.instructions+=1;NFSU2_TR(0x49d650);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d655ull));
TAIL_STATIC(0x4ff2d0u,4ff);
}
B49d655:L49d655:{c.instructions+=1;NFSU2_TR(0x49d655);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49d660:L49d660:{c.instructions+=3;NFSU2_TR(0x49d660);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49d666:{NFSU2_TR(0x49d666);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ccull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49d670:{NFSU2_TR(0x49d670);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49d680:L49d680:{c.instructions+=11;NFSU2_TR(0x49d680);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49d686:{NFSU2_TR(0x49d686);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d687:{NFSU2_TR(0x49d687);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B49d68b:{NFSU2_TR(0x49d68b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d68c:{NFSU2_TR(0x49d68c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B49d692:{NFSU2_TR(0x49d692);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49d698:{NFSU2_TR(0x49d698);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B49d69c:{NFSU2_TR(0x49d69c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xdcull))));
__builtin_memmove((R+28),(U+0),4);
}
B49d6a2:{NFSU2_TR(0x49d6a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d6a3:{NFSU2_TR(0x49d6a3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B49d6a5:{NFSU2_TR(0x49d6a5);
w4(R+4,u32(0x3eull));
}
B49d6aa:L49d6aa:{c.instructions+=1;NFSU2_TR(0x49d6aa);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L49d6ac;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49d6aau);}goto L49d6aa;}
}
B49d6ac:L49d6ac:{c.instructions+=5;NFSU2_TR(0x49d6ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49d6af:{NFSU2_TR(0x49d6af);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d6b4:{NFSU2_TR(0x49d6b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d6b5:{NFSU2_TR(0x49d6b5);
u8 U[4];
w4(U+0,u32(0x78fc98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d6ba:{NFSU2_TR(0x49d6ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d6bfull));
TAIL_STATIC(0x555eb0u,555);
}
B49d6bf:L49d6bf:{c.instructions+=4;NFSU2_TR(0x49d6bf);
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
B49d6c2:{NFSU2_TR(0x49d6c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49d6c3:{NFSU2_TR(0x49d6c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49d6c4:{NFSU2_TR(0x49d6c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49d6d0:L49d6d0:{c.instructions+=5;NFSU2_TR(0x49d6d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d6d1:{NFSU2_TR(0x49d6d1);
__builtin_memmove((R+24),(R+4),4);
}
B49d6d3:{NFSU2_TR(0x49d6d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49d6d9:{NFSU2_TR(0x49d6d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d6da:{NFSU2_TR(0x49d6da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d6dfull));
TAIL_STATIC(0x540a60u,540);
}
B49d6df:L49d6df:{c.instructions+=4;NFSU2_TR(0x49d6df);
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
B49d6e2:{NFSU2_TR(0x49d6e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49d6ec:{NFSU2_TR(0x49d6ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49d6ed:{NFSU2_TR(0x49d6ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49d6f0:L49d6f0:{c.instructions+=7;NFSU2_TR(0x49d6f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49d6f6:{NFSU2_TR(0x49d6f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49d6f8:{NFSU2_TR(0x49d6f8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d6fa:{NFSU2_TR(0x49d6fa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d6fc:{NFSU2_TR(0x49d6fc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d6fe:{NFSU2_TR(0x49d6fe);
u8 U[4];
w4(U+0,u32(0xd09f00d5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d703:{NFSU2_TR(0x49d703);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d706ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49d706:L49d706:{c.instructions+=1;NFSU2_TR(0x49d706);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49d710:L49d710:{c.instructions+=5;NFSU2_TR(0x49d710);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d711:{NFSU2_TR(0x49d711);
__builtin_memmove((R+24),(R+4),4);
}
B49d713:{NFSU2_TR(0x49d713);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49d719:{NFSU2_TR(0x49d719);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49d71b:{NFSU2_TR(0x49d71b);
if(r1(R+518)){{goto L49d730;}}
}
B49d71d:L49d71d:{c.instructions+=2;NFSU2_TR(0x49d71d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d71e:{NFSU2_TR(0x49d71e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d723ull));
TAIL_STATIC(0x540a60u,540);
}
B49d723:L49d723:{c.instructions+=2;NFSU2_TR(0x49d723);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49d726:{NFSU2_TR(0x49d726);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49d730:L49d730:{c.instructions+=2;NFSU2_TR(0x49d730);
__builtin_memmove((R+4),(R+24),4);
}
B49d732:{NFSU2_TR(0x49d732);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d737ull));
TAIL_STATIC(0x583b30u,583);
}
B49d737:L49d737:{c.instructions+=8;NFSU2_TR(0x49d737);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49d73b:{NFSU2_TR(0x49d73b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49d741:{NFSU2_TR(0x49d741);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49d743:{NFSU2_TR(0x49d743);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d745:{NFSU2_TR(0x49d745);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d746:{NFSU2_TR(0x49d746);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d748:{NFSU2_TR(0x49d748);
u8 U[4];
w4(U+0,u32(0xb19ba115ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d74d:{NFSU2_TR(0x49d74d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d750ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49d750:L49d750:{c.instructions+=2;NFSU2_TR(0x49d750);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49d751:{NFSU2_TR(0x49d751);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49d760:L49d760:{c.instructions+=6;NFSU2_TR(0x49d760);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B49d763:{NFSU2_TR(0x49d763);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d764:{NFSU2_TR(0x49d764);
__builtin_memmove((R+12),(R+4),4);
}
B49d766:{NFSU2_TR(0x49d766);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49d76c:{NFSU2_TR(0x49d76c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49d76e:{NFSU2_TR(0x49d76e);
if(r1(R+518)){{goto L49d84b;}}
}
B49d774:L49d774:{c.instructions+=2;NFSU2_TR(0x49d774);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d775:{NFSU2_TR(0x49d775);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d77aull));
TAIL_STATIC(0x526c10u,526);
}
B49d77a:L49d77a:{c.instructions+=3;NFSU2_TR(0x49d77a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49d77d:{NFSU2_TR(0x49d77d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49d77f:{NFSU2_TR(0x49d77f);
if(r1(R+518)){{goto L49d84b;}}
}
B49d785:L49d785:{c.instructions+=7;NFSU2_TR(0x49d785);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x419ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B49d78b:{NFSU2_TR(0x49d78b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x419ull))));
__builtin_memmove((R+0),(U+0),4);
}
B49d791:{NFSU2_TR(0x49d791);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d792:{NFSU2_TR(0x49d792);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B49d794:{NFSU2_TR(0x49d794);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49d796:{NFSU2_TR(0x49d796);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d797:{NFSU2_TR(0x49d797);
if(r1(R+518)){{goto L49d7af;}}
}
B49d799:L49d799:{c.instructions+=5;NFSU2_TR(0x49d799);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B49d79d:{NFSU2_TR(0x49d79d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d79e:{NFSU2_TR(0x49d79e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d79f:{NFSU2_TR(0x49d79f);
__builtin_memmove((R+4),(R+12),4);
}
B49d7a1:{NFSU2_TR(0x49d7a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d7a6ull));
TAIL_STATIC(0x49cc50u,49c);
}
B49d7a6:L49d7a6:{c.instructions+=2;NFSU2_TR(0x49d7a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49d7aa:{NFSU2_TR(0x49d7aa);
w4(R+24,u32(0x1ull));
}
B49d7af:L49d7af:{c.instructions+=4;NFSU2_TR(0x49d7af);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x446ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B49d7b5:{NFSU2_TR(0x49d7b5);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49d7b7:{NFSU2_TR(0x49d7b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x446ull))));
__builtin_memmove((R+0),(U+0),4);
}
B49d7bd:{NFSU2_TR(0x49d7bd);
if(r1(R+518)){{goto L49d7d1;}}
}
B49d7bf:L49d7bf:{c.instructions+=5;NFSU2_TR(0x49d7bf);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B49d7c3:{NFSU2_TR(0x49d7c3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d7c4:{NFSU2_TR(0x49d7c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d7c5:{NFSU2_TR(0x49d7c5);
__builtin_memmove((R+4),(R+12),4);
}
B49d7c7:{NFSU2_TR(0x49d7c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d7ccull));
TAIL_STATIC(0x49cc50u,49c);
}
B49d7cc:L49d7cc:{c.instructions+=2;NFSU2_TR(0x49d7cc);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B49d7d0:{NFSU2_TR(0x49d7d0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B49d7d1:L49d7d1:{c.instructions+=4;NFSU2_TR(0x49d7d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x473ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B49d7d7:{NFSU2_TR(0x49d7d7);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49d7d9:{NFSU2_TR(0x49d7d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x473ull))));
__builtin_memmove((R+0),(U+0),4);
}
B49d7df:{NFSU2_TR(0x49d7df);
if(r1(R+518)){{goto L49d7f3;}}
}
B49d7e1:L49d7e1:{c.instructions+=5;NFSU2_TR(0x49d7e1);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B49d7e5:{NFSU2_TR(0x49d7e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d7e6:{NFSU2_TR(0x49d7e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d7e7:{NFSU2_TR(0x49d7e7);
__builtin_memmove((R+4),(R+12),4);
}
B49d7e9:{NFSU2_TR(0x49d7e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d7eeull));
TAIL_STATIC(0x49cc50u,49c);
}
B49d7ee:L49d7ee:{c.instructions+=2;NFSU2_TR(0x49d7ee);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B49d7f2:{NFSU2_TR(0x49d7f2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B49d7f3:L49d7f3:{c.instructions+=4;NFSU2_TR(0x49d7f3);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B49d7f9:{NFSU2_TR(0x49d7f9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49d7fb:{NFSU2_TR(0x49d7fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4a0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B49d801:{NFSU2_TR(0x49d801);
if(r1(R+518)){{goto L49d815;}}
}
B49d803:L49d803:{c.instructions+=5;NFSU2_TR(0x49d803);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B49d807:{NFSU2_TR(0x49d807);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d808:{NFSU2_TR(0x49d808);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d809:{NFSU2_TR(0x49d809);
__builtin_memmove((R+4),(R+12),4);
}
B49d80b:{NFSU2_TR(0x49d80b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d810ull));
TAIL_STATIC(0x49cc50u,49c);
}
B49d810:L49d810:{c.instructions+=2;NFSU2_TR(0x49d810);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B49d814:{NFSU2_TR(0x49d814);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B49d815:L49d815:{c.instructions+=2;NFSU2_TR(0x49d815);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49d818:{NFSU2_TR(0x49d818);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L49d81f;}}
}
B49d81a:L49d81a:{c.instructions+=1;NFSU2_TR(0x49d81a);
w4(R+24,u32(0x3ull));
}
B49d81f:L49d81f:{c.instructions+=3;NFSU2_TR(0x49d81f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B49d821:{NFSU2_TR(0x49d821);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49d823:{NFSU2_TR(0x49d823);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L49d842;}}
}
B49d825:L49d825:{c.instructions+=8;NFSU2_TR(0x49d825);
u8 U[13];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B49d829:{NFSU2_TR(0x49d829);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B49d82d:{NFSU2_TR(0x49d82d);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49d82f:{NFSU2_TR(0x49d82f);
__builtin_memmove((R+0),(R+518),1);
}
B49d832:{NFSU2_TR(0x49d832);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d833:{NFSU2_TR(0x49d833);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d834:{NFSU2_TR(0x49d834);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d835:{NFSU2_TR(0x49d835);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d83aull));
TAIL_STATIC(0x5409c0u,540);
}
B49d83a:L49d83a:{c.instructions+=4;NFSU2_TR(0x49d83a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B49d83d:{NFSU2_TR(0x49d83d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B49d83e:{NFSU2_TR(0x49d83e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B49d840:{NFSU2_TR(0x49d840);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49d825u);}goto L49d825;}}
}
B49d842:L49d842:{c.instructions+=3;NFSU2_TR(0x49d842);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49d843:{NFSU2_TR(0x49d843);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4dcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B49d84a:{NFSU2_TR(0x49d84a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49d84b:L49d84b:{c.instructions+=3;NFSU2_TR(0x49d84b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49d84c:{NFSU2_TR(0x49d84c);
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
B49d84f:{NFSU2_TR(0x49d84f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49d850:L49d850:{c.instructions+=3;NFSU2_TR(0x49d850);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49d852:{NFSU2_TR(0x49d852);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49d855:{NFSU2_TR(0x49d855);
if(r1(R+518)){{goto L49d86b;}}
}
B49d857:L49d857:{c.instructions+=2;NFSU2_TR(0x49d857);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49d85a:{NFSU2_TR(0x49d85a);
if(r1(R+518)){{goto L49d86b;}}
}
B49d85c:L49d85c:{c.instructions+=2;NFSU2_TR(0x49d85c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49d85e:{NFSU2_TR(0x49d85e);
if(r1(R+518)){{goto L49d86b;}}
}
B49d860:L49d860:{c.instructions+=2;NFSU2_TR(0x49d860);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B49d863:{NFSU2_TR(0x49d863);
if(r1(R+518)){{goto L49d86b;}}
}
B49d865:L49d865:{c.instructions+=2;NFSU2_TR(0x49d865);
w4(R+0,u32(0x1ull));
}
B49d86a:{NFSU2_TR(0x49d86a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49d86b:L49d86b:{c.instructions+=2;NFSU2_TR(0x49d86b);
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
B49d86d:{NFSU2_TR(0x49d86d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49d870:L49d870:{c.instructions+=5;NFSU2_TR(0x49d870);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d871:{NFSU2_TR(0x49d871);
__builtin_memmove((R+24),(R+4),4);
}
B49d873:{NFSU2_TR(0x49d873);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49d875:{NFSU2_TR(0x49d875);
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
B49d877:{NFSU2_TR(0x49d877);
if(r1(R+518)){{goto L49d888;}}
}
B49d879:L49d879:{c.instructions+=2;NFSU2_TR(0x49d879);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d87a:{NFSU2_TR(0x49d87a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d87full));
TAIL_STATIC(0x540a60u,540);
}
B49d87f:L49d87f:{c.instructions+=2;NFSU2_TR(0x49d87f);
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
B49d882:{NFSU2_TR(0x49d882);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B49d888:L49d888:{c.instructions+=2;NFSU2_TR(0x49d888);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49d889:{NFSU2_TR(0x49d889);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49d890:L49d890:{c.instructions+=4;NFSU2_TR(0x49d890);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49d894:{NFSU2_TR(0x49d894);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49d897:{NFSU2_TR(0x49d897);
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
B49d899:{NFSU2_TR(0x49d899);
if(r1(R+518)){{goto L49d8ab;}}
}
B49d89b:L49d89b:{c.instructions+=5;NFSU2_TR(0x49d89b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49d89e:{NFSU2_TR(0x49d89e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49d8a2:{NFSU2_TR(0x49d8a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49d8a5:{NFSU2_TR(0x49d8a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49d8a8:{NFSU2_TR(0x49d8a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49d8ab:L49d8ab:{c.instructions+=3;NFSU2_TR(0x49d8ab);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d8ad:{NFSU2_TR(0x49d8ad);
w4(R+4,u32(0x850080ull));
}
B49d8b2:{NFSU2_TR(0x49d8b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d8b7ull));
TAIL_STATIC(0x5031b0u,503);
}
B49d8b7:L49d8b7:{c.instructions+=1;NFSU2_TR(0x49d8b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49d8c0:L49d8c0:{c.instructions+=4;NFSU2_TR(0x49d8c0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d8c2:{NFSU2_TR(0x49d8c2);
u8 U[4];
w4(U+0,u32(0xcea5ea10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d8c7:{NFSU2_TR(0x49d8c7);
s1(0x8383b4,u8(0x1ull));
}
B49d8ce:{NFSU2_TR(0x49d8ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d8d3ull));
TAIL_STATIC(0x55dde0u,55d);
}
B49d8d3:L49d8d3:{c.instructions+=2;NFSU2_TR(0x49d8d3);
u8 U[4];
w4(U+0,u32(0x78fcc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d8d8:{NFSU2_TR(0x49d8d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d8ddull));
TAIL_STATIC(0x52cef0u,52c);
}
B49d8dd:L49d8dd:{c.instructions+=3;NFSU2_TR(0x49d8dd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B49d8e0:{NFSU2_TR(0x49d8e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49d8e2:{NFSU2_TR(0x49d8e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49d8fd;}}
}
B49d8e4:L49d8e4:{c.instructions+=7;NFSU2_TR(0x49d8e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49d8e8:{NFSU2_TR(0x49d8e8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d8ea:{NFSU2_TR(0x49d8ea);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d8ef:{NFSU2_TR(0x49d8ef);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d8f1:{NFSU2_TR(0x49d8f1);
__builtin_memmove(gp(0x835e34),(R+0),4);
}
B49d8f6:{NFSU2_TR(0x49d8f6);
u8 U[4];
w4(U+0,u32(0x78fcc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d8fb:{NFSU2_TR(0x49d8fb);
{goto L49d92f;}
}
B49d8fd:L49d8fd:{c.instructions+=4;NFSU2_TR(0x49d8fd);
__builtin_memmove((R+0),gp(0x836368),4);
}
B49d902:{NFSU2_TR(0x49d902);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B49d905:{NFSU2_TR(0x49d905);
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
B49d907:{NFSU2_TR(0x49d907);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49d94b;}}
}
B49d909:L49d909:{c.instructions+=3;NFSU2_TR(0x49d909);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B49d90c:{NFSU2_TR(0x49d90c);
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
B49d90e:{NFSU2_TR(0x49d90e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49d94b;}}
}
B49d910:L49d910:{c.instructions+=8;NFSU2_TR(0x49d910);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B49d914:{NFSU2_TR(0x49d914);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49d918:{NFSU2_TR(0x49d918);
__builtin_memmove(gp(0x835e34),(R+0),4);
}
B49d91d:{NFSU2_TR(0x49d91d);
__builtin_memmove((R+0),gp(0x836368),4);
}
B49d922:{NFSU2_TR(0x49d922);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d923:{NFSU2_TR(0x49d923);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d928:{NFSU2_TR(0x49d928);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d92a:{NFSU2_TR(0x49d92a);
u8 U[4];
w4(U+0,u32(0x78fca8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d92f:L49d92f:{c.instructions+=5;NFSU2_TR(0x49d92f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49d933:{NFSU2_TR(0x49d933);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49d937:{NFSU2_TR(0x49d937);
__builtin_memmove(gp(0x836238),(R+8),4);
}
B49d93d:{NFSU2_TR(0x49d93d);
__builtin_memmove(gp(0x835978),(R+4),4);
}
B49d943:{NFSU2_TR(0x49d943);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d948ull));
TAIL_STATIC(0x555ee0u,555);
}
B49d948:L49d948:{c.instructions+=1;NFSU2_TR(0x49d948);
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
B49d94b:L49d94b:{c.instructions+=1;NFSU2_TR(0x49d94b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49d950:L49d950:{c.instructions+=10;NFSU2_TR(0x49d950);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d951:{NFSU2_TR(0x49d951);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B49d956:{NFSU2_TR(0x49d956);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d957:{NFSU2_TR(0x49d957);
s1(0x8383b4,u8(0x0ull));
}
B49d95e:{NFSU2_TR(0x49d95e);
__builtin_memmove((R+12),(R+4),4);
}
B49d960:{NFSU2_TR(0x49d960);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49d963:{NFSU2_TR(0x49d963);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d964:{NFSU2_TR(0x49d964);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B49d96a:{NFSU2_TR(0x49d96a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49d96c:{NFSU2_TR(0x49d96c);
if(r1(R+518)){{goto L49d9aa;}}
}
B49d96e:L49d96e:{c.instructions+=2;NFSU2_TR(0x49d96e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d96f:{NFSU2_TR(0x49d96f);
}
B49d970:L49d970:{c.instructions+=4;NFSU2_TR(0x49d970);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49d973:{NFSU2_TR(0x49d973);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49d976:{NFSU2_TR(0x49d976);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d977:{NFSU2_TR(0x49d977);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d97cull));
TAIL_STATIC(0x49ffa0u,49f);
}
B49d97c:L49d97c:{c.instructions+=3;NFSU2_TR(0x49d97c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49d97f:{NFSU2_TR(0x49d97f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49d981:{NFSU2_TR(0x49d981);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49d9a3;}}
}
B49d983:L49d983:{c.instructions+=5;NFSU2_TR(0x49d983);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49d986:{NFSU2_TR(0x49d986);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49d989:{NFSU2_TR(0x49d989);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d98a:{NFSU2_TR(0x49d98a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d98b:{NFSU2_TR(0x49d98b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d990ull));
TAIL_STATIC(0x43dc30u,43d);
}
B49d990:L49d990:{c.instructions+=3;NFSU2_TR(0x49d990);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49d993:{NFSU2_TR(0x49d993);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49d995:{NFSU2_TR(0x49d995);
if(r1(R+518)){{goto L49d9a3;}}
}
B49d997:L49d997:{c.instructions+=3;NFSU2_TR(0x49d997);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49d99a:{NFSU2_TR(0x49d99a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d99b:{NFSU2_TR(0x49d99b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d9a0ull));
TAIL_STATIC(0x5379a0u,537);
}
B49d9a0:L49d9a0:{c.instructions+=1;NFSU2_TR(0x49d9a0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49d9a3:L49d9a3:{c.instructions+=3;NFSU2_TR(0x49d9a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49d9a5:{NFSU2_TR(0x49d9a5);
__builtin_memmove((R+24),(R+28),4);
}
B49d9a7:{NFSU2_TR(0x49d9a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49d970u);}goto L49d970;}}
}
B49d9a9:L49d9a9:{c.instructions+=1;NFSU2_TR(0x49d9a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49d9aa:L49d9aa:{c.instructions+=3;NFSU2_TR(0x49d9aa);
__builtin_memmove((R+4),gp(0x836340),4);
}
B49d9b0:{NFSU2_TR(0x49d9b0);
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
B49d9b2:{NFSU2_TR(0x49d9b2);
if(r1(R+518)){{goto L49d9ba;}}
}
B49d9b4:L49d9b4:{c.instructions+=3;NFSU2_TR(0x49d9b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49d9b6:{NFSU2_TR(0x49d9b6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d9b8:{NFSU2_TR(0x49d9b8);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d9baull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B49d9ba:L49d9ba:{c.instructions+=3;NFSU2_TR(0x49d9ba);
w4(R+4,u32(0x838980ull));
}
B49d9bf:{NFSU2_TR(0x49d9bf);
s4(0x836340,u32(0x0ull));
}
B49d9c9:{NFSU2_TR(0x49d9c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d9ceull));
TAIL_STATIC(0x54fd40u,54f);
}
B49d9ce:L49d9ce:{c.instructions+=5;NFSU2_TR(0x49d9ce);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d9d0:{NFSU2_TR(0x49d9d0);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d9d5:{NFSU2_TR(0x49d9d5);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d9da:{NFSU2_TR(0x49d9da);
u8 U[4];
w4(U+0,u32(0x78f240ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d9df:{NFSU2_TR(0x49d9df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d9e4ull));
TAIL_STATIC(0x555f10u,555);
}
B49d9e4:L49d9e4:{c.instructions+=5;NFSU2_TR(0x49d9e4);
u8 U[4];
w4(U+0,u32(u32(u32(0x1bull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B49d9e8:{NFSU2_TR(0x49d9e8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d9e9:{NFSU2_TR(0x49d9e9);
u8 U[4];
w4(U+0,u32(0x6e57aa10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d9ee:{NFSU2_TR(0x49d9ee);
u8 U[5];
w4(U+0,u32(u32(u32(0x23ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B49d9f3:{NFSU2_TR(0x49d9f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49d9f8ull));
TAIL_STATIC(0x55dde0u,55d);
}
B49d9f8:L49d9f8:{c.instructions+=4;NFSU2_TR(0x49d9f8);
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
B49d9fb:{NFSU2_TR(0x49d9fb);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49d9fd:{NFSU2_TR(0x49d9fd);
w4(R+4,u32(0x850080ull));
}
B49da02:{NFSU2_TR(0x49da02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49da07ull));
TAIL_STATIC(0x5031b0u,503);
}
B49da07:L49da07:{c.instructions+=3;NFSU2_TR(0x49da07);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49da0a:{NFSU2_TR(0x49da0a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49da0b:{NFSU2_TR(0x49da0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49da10ull));
TAIL_STATIC(0x5379a0u,537);
}
B49da10:L49da10:{c.instructions+=6;NFSU2_TR(0x49da10);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B49da14:{NFSU2_TR(0x49da14);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49da17:{NFSU2_TR(0x49da17);
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
B49da19:{NFSU2_TR(0x49da19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49da1a:{NFSU2_TR(0x49da1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49da1b:{NFSU2_TR(0x49da1b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49da25;}}
}
B49da1d:L49da1d:{c.instructions+=2;NFSU2_TR(0x49da1d);
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
B49da20:{NFSU2_TR(0x49da20);
TAIL_STATIC(0x43bd50u,43b);
}
B49da25:L49da25:{c.instructions+=2;NFSU2_TR(0x49da25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49da26:{NFSU2_TR(0x49da26);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49da30:L49da30:{c.instructions+=2;NFSU2_TR(0x49da30);
u8 U[4];
w4(U+0,u32(0x78fce8ull));
s4(u32(r4(R+4)),r4(U+0));
}
B49da36:{NFSU2_TR(0x49da36);
TAIL_STATIC(0x510d40u,510);
}
B49da40:L49da40:{c.instructions+=6;NFSU2_TR(0x49da40);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49da44:{NFSU2_TR(0x49da44);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B49da46:{NFSU2_TR(0x49da46);
w1(R+512,u8((r4(R+4))<(r4(R+0))));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B49da48:{NFSU2_TR(0x49da48);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49da49:{NFSU2_TR(0x49da49);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49da4a:{NFSU2_TR(0x49da4a);
if(r1(R+518)){{goto L49da68;}}
}
B49da4c:L49da4c:{c.instructions+=2;NFSU2_TR(0x49da4c);
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
B49da4d:{NFSU2_TR(0x49da4d);
if(r1(R+518)){{goto L49da60;}}
}
B49da4f:L49da4f:{c.instructions+=2;NFSU2_TR(0x49da4f);
u8 U[6];
w1(R+512,u8((r4(R+4))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(R+4),u32(0x3ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49da52:{NFSU2_TR(0x49da52);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49daf8;}}
}
B49da58:L49da58:{c.instructions+=4;NFSU2_TR(0x49da58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49da59:{NFSU2_TR(0x49da59);
w4(R+0,u32(0x10073c4full));
}
B49da5e:{NFSU2_TR(0x49da5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49da5f:{NFSU2_TR(0x49da5f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49da60:L49da60:{c.instructions+=4;NFSU2_TR(0x49da60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49da61:{NFSU2_TR(0x49da61);
w4(R+0,u32(0x5a6f817full));
}
B49da66:{NFSU2_TR(0x49da66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49da67:{NFSU2_TR(0x49da67);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49da68:L49da68:{c.instructions+=3;NFSU2_TR(0x49da68);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49da6c:{NFSU2_TR(0x49da6c);
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
B49da6e:{NFSU2_TR(0x49da6e);
if(r1(R+518)){{goto L49daf8;}}
}
B49da74:L49da74:{c.instructions+=2;NFSU2_TR(0x49da74);
u8 U[14];
__builtin_memmove((U+6),gp(0x850078),4);
w1(R+512,u8((r4(U+6))<(u32(0x200ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x200ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x200ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49da7e:{NFSU2_TR(0x49da7e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49da88;}}
}
B49da80:L49da80:{c.instructions+=4;NFSU2_TR(0x49da80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49da81:{NFSU2_TR(0x49da81);
w4(R+0,u32(0xc91a3fdeull));
}
B49da86:{NFSU2_TR(0x49da86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49da87:{NFSU2_TR(0x49da87);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49da88:L49da88:{c.instructions+=4;NFSU2_TR(0x49da88);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49da8a:{NFSU2_TR(0x49da8a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49da8c:{NFSU2_TR(0x49da8c);
u8 U[4];
w4(U+0,u32(0x6f6e6c6eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49da91:{NFSU2_TR(0x49da91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49da96ull));
TAIL_STATIC(0x742b60u,742);
}
B49da96:L49da96:{c.instructions+=6;NFSU2_TR(0x49da96);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49da98:{NFSU2_TR(0x49da98);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49da9a:{NFSU2_TR(0x49da9a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49da9c:{NFSU2_TR(0x49da9c);
u8 U[4];
w4(U+0,u32(0x636f6e6eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49daa1:{NFSU2_TR(0x49daa1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+12),(U+0),1);
}
B49daa4:{NFSU2_TR(0x49daa4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49daa9ull));
TAIL_STATIC(0x742b60u,742);
}
B49daa9:L49daa9:{c.instructions+=4;NFSU2_TR(0x49daa9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49daab:{NFSU2_TR(0x49daab);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49daad:{NFSU2_TR(0x49daad);
u8 U[4];
w4(U+0,u32(0x706c7567ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dab2:{NFSU2_TR(0x49dab2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49dab7ull));
TAIL_STATIC(0x742b60u,742);
}
B49dab7:L49dab7:{c.instructions+=4;NFSU2_TR(0x49dab7);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B49dabb:{NFSU2_TR(0x49dabb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B49dabe:{NFSU2_TR(0x49dabe);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49dac0:{NFSU2_TR(0x49dac0);
if(r1(R+518)){{goto L49dae6;}}
}
B49dac2:L49dac2:{c.instructions+=4;NFSU2_TR(0x49dac2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dac4:{NFSU2_TR(0x49dac4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dac6:{NFSU2_TR(0x49dac6);
u8 U[4];
w4(U+0,u32(0x6f6e6c6eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dacb:{NFSU2_TR(0x49dacb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49dad0ull));
TAIL_STATIC(0x742b60u,742);
}
B49dad0:L49dad0:{c.instructions+=4;NFSU2_TR(0x49dad0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dad2:{NFSU2_TR(0x49dad2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dad4:{NFSU2_TR(0x49dad4);
u8 U[4];
w4(U+0,u32(0x636f6e6eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dad9:{NFSU2_TR(0x49dad9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49dadeull));
TAIL_STATIC(0x742b60u,742);
}
B49dade:L49dade:{c.instructions+=5;NFSU2_TR(0x49dade);
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
B49dae1:{NFSU2_TR(0x49dae1);
__builtin_memmove((R+0),(R+24),4);
}
B49dae3:{NFSU2_TR(0x49dae3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49dae4:{NFSU2_TR(0x49dae4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49dae5:{NFSU2_TR(0x49dae5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49dae6:L49dae6:{c.instructions+=5;NFSU2_TR(0x49dae6);
w1(R+512,u8((r1(R+12))!=(u8(0x0ull))));
w1(R+12,u8(0-u32(r1(R+12))));
}
B49dae8:{NFSU2_TR(0x49dae8);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(R+12))));
w4(R+12,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B49daea:{NFSU2_TR(0x49daea);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x1add7f37ull))));
}
B49daf0:{NFSU2_TR(0x49daf0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+12),u32(0x3f920248ull)));
w1(R+523,scarry<u32>(r4(R+12),u32(0x3f920248ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x3f920248ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49daf6:{NFSU2_TR(0x49daf6);
__builtin_memmove((R+0),(R+12),4);
}
B49daf8:L49daf8:{c.instructions+=3;NFSU2_TR(0x49daf8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49daf9:{NFSU2_TR(0x49daf9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49dafa:{NFSU2_TR(0x49dafa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49db00:L49db00:{c.instructions+=6;NFSU2_TR(0x49db00);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B49db04:{NFSU2_TR(0x49db04);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49db06:{NFSU2_TR(0x49db06);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49db07:{NFSU2_TR(0x49db07);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49db08:{NFSU2_TR(0x49db08);
__builtin_memmove((R+24),(R+4),4);
}
B49db0a:{NFSU2_TR(0x49db0a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49dc3e;}}
}
B49db10:L49db10:{c.instructions+=4;NFSU2_TR(0x49db10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49db13:{NFSU2_TR(0x49db13);
u8 U[4];
w4(U+0,u32(0x78fd48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49db18:{NFSU2_TR(0x49db18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49db1f:{NFSU2_TR(0x49db1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49db24ull));
TAIL_STATIC(0x505450u,505);
}
B49db24:L49db24:{c.instructions+=3;NFSU2_TR(0x49db24);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49db25:{NFSU2_TR(0x49db25);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49db26:{NFSU2_TR(0x49db26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49db2bull));
TAIL_STATIC(0x5379c0u,537);
}
B49db2b:L49db2b:{c.instructions+=2;NFSU2_TR(0x49db2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49db2c:{NFSU2_TR(0x49db2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49db31ull));
TAIL_STATIC(0x50ca00u,50c);
}
B49db31:L49db31:{c.instructions+=3;NFSU2_TR(0x49db31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49db34:{NFSU2_TR(0x49db34);
u8 U[4];
w4(U+0,u32(0x78fd34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49db39:{NFSU2_TR(0x49db39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49db3eull));
TAIL_STATIC(0x505450u,505);
}
B49db3e:L49db3e:{c.instructions+=3;NFSU2_TR(0x49db3e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49db3f:{NFSU2_TR(0x49db3f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49db40:{NFSU2_TR(0x49db40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49db45ull));
TAIL_STATIC(0x5379c0u,537);
}
B49db45:L49db45:{c.instructions+=2;NFSU2_TR(0x49db45);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49db46:{NFSU2_TR(0x49db46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49db4bull));
TAIL_STATIC(0x50ca00u,50c);
}
B49db4b:L49db4b:{c.instructions+=5;NFSU2_TR(0x49db4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49db4e:{NFSU2_TR(0x49db4e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B49db51:{NFSU2_TR(0x49db51);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49db53:{NFSU2_TR(0x49db53);
u8 U[4];
w4(U+0,u32(0x78fd2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49db58:{NFSU2_TR(0x49db58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49db5dull));
TAIL_STATIC(0x505450u,505);
}
B49db5d:L49db5d:{c.instructions+=4;NFSU2_TR(0x49db5d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49db60:{NFSU2_TR(0x49db60);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49db61:{NFSU2_TR(0x49db61);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49db62:{NFSU2_TR(0x49db62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49db67ull));
TAIL_STATIC(0x51cda0u,51c);
}
B49db67:L49db67:{c.instructions+=5;NFSU2_TR(0x49db67);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49db6a:{NFSU2_TR(0x49db6a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B49db6d:{NFSU2_TR(0x49db6d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49db6f:{NFSU2_TR(0x49db6f);
u8 U[4];
w4(U+0,u32(0x78fd24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49db74:{NFSU2_TR(0x49db74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49db79ull));
TAIL_STATIC(0x505450u,505);
}
B49db79:L49db79:{c.instructions+=4;NFSU2_TR(0x49db79);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49db7c:{NFSU2_TR(0x49db7c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49db7d:{NFSU2_TR(0x49db7d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49db7e:{NFSU2_TR(0x49db7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49db83ull));
TAIL_STATIC(0x51cda0u,51c);
}
B49db83:L49db83:{c.instructions+=5;NFSU2_TR(0x49db83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49db86:{NFSU2_TR(0x49db86);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49db8b:{NFSU2_TR(0x49db8b);
u8 U[4];
w4(U+0,u32(0xb8a7c6ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49db90:{NFSU2_TR(0x49db90);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49db91:{NFSU2_TR(0x49db91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49db96ull));
TAIL_STATIC(0x537b80u,537);
}
B49db96:L49db96:{c.instructions+=5;NFSU2_TR(0x49db96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49db99:{NFSU2_TR(0x49db99);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49db9e:{NFSU2_TR(0x49db9e);
u8 U[4];
w4(U+0,u32(0xb8a7c6cdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dba3:{NFSU2_TR(0x49dba3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dba4:{NFSU2_TR(0x49dba4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49dba9ull));
TAIL_STATIC(0x537b80u,537);
}
B49dba9:L49dba9:{c.instructions+=3;NFSU2_TR(0x49dba9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49dbac:{NFSU2_TR(0x49dbac);
u8 U[4];
w4(U+0,u32(0x78fd10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dbb1:{NFSU2_TR(0x49dbb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49dbb6ull));
TAIL_STATIC(0x505450u,505);
}
B49dbb6:L49dbb6:{c.instructions+=3;NFSU2_TR(0x49dbb6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dbb7:{NFSU2_TR(0x49dbb7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dbb8:{NFSU2_TR(0x49dbb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49dbbdull));
TAIL_STATIC(0x5379c0u,537);
}
B49dbbd:L49dbbd:{c.instructions+=2;NFSU2_TR(0x49dbbd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dbbe:{NFSU2_TR(0x49dbbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49dbc3ull));
TAIL_STATIC(0x50ca50u,50c);
}
B49dbc3:L49dbc3:{c.instructions+=5;NFSU2_TR(0x49dbc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49dbc6:{NFSU2_TR(0x49dbc6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
}
B49dbc9:{NFSU2_TR(0x49dbc9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dbcb:{NFSU2_TR(0x49dbcb);
u8 U[4];
w4(U+0,u32(0x78fd08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dbd0:{NFSU2_TR(0x49dbd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49dbd5ull));
TAIL_STATIC(0x505450u,505);
}
B49dbd5:L49dbd5:{c.instructions+=4;NFSU2_TR(0x49dbd5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49dbd8:{NFSU2_TR(0x49dbd8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dbd9:{NFSU2_TR(0x49dbd9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dbda:{NFSU2_TR(0x49dbda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49dbdfull));
TAIL_STATIC(0x51cda0u,51c);
}
B49dbdf:L49dbdf:{c.instructions+=6;NFSU2_TR(0x49dbdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49dbe2:{NFSU2_TR(0x49dbe2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dbe4:{NFSU2_TR(0x49dbe4);
u8 U[4];
w4(U+0,u32(0x78f970ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dbe9:{NFSU2_TR(0x49dbe9);
u8 U[4];
w4(U+0,u32(0x78fd10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dbee:{NFSU2_TR(0x49dbee);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dbef:{NFSU2_TR(0x49dbef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49dbf4ull));
TAIL_STATIC(0x5426c0u,542);
}
B49dbf4:L49dbf4:{c.instructions+=6;NFSU2_TR(0x49dbf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49dbf7:{NFSU2_TR(0x49dbf7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dbf9:{NFSU2_TR(0x49dbf9);
u8 U[4];
w4(U+0,u32(0x78f970ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dbfe:{NFSU2_TR(0x49dbfe);
u8 U[4];
w4(U+0,u32(0x78fd08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dc03:{NFSU2_TR(0x49dc03);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dc04:{NFSU2_TR(0x49dc04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49dc09ull));
TAIL_STATIC(0x5426c0u,542);
}
B49dc09:L49dc09:{c.instructions+=4;NFSU2_TR(0x49dc09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49dc0c:{NFSU2_TR(0x49dc0c);
u8 U[4];
w4(U+0,u32(0xb8a7c6ceull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dc11:{NFSU2_TR(0x49dc11);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dc12:{NFSU2_TR(0x49dc12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49dc17ull));
TAIL_STATIC(0x52cea0u,52c);
}
B49dc17:L49dc17:{c.instructions+=6;NFSU2_TR(0x49dc17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B49dc1a:{NFSU2_TR(0x49dc1a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
}
B49dc1d:{NFSU2_TR(0x49dc1d);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dc22:{NFSU2_TR(0x49dc22);
u8 U[4];
w4(U+0,u32(0xb8a7c6ceull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dc27:{NFSU2_TR(0x49dc27);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dc28:{NFSU2_TR(0x49dc28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49dc2dull));
TAIL_STATIC(0x537a10u,537);
}
B49dc2d:L49dc2d:{c.instructions+=3;NFSU2_TR(0x49dc2d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49dc30:{NFSU2_TR(0x49dc30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dc31:{NFSU2_TR(0x49dc31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49dc36ull));
TAIL_STATIC(0x50c900u,50c);
}
B49dc36:L49dc36:{c.instructions+=4;NFSU2_TR(0x49dc36);
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
B49dc39:{NFSU2_TR(0x49dc39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49dc3a:{NFSU2_TR(0x49dc3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49dc3b:{NFSU2_TR(0x49dc3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49dc3e:L49dc3e:{c.instructions+=4;NFSU2_TR(0x49dc3e);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49dc48:{NFSU2_TR(0x49dc48);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dc49:{NFSU2_TR(0x49dc49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49dc50:{NFSU2_TR(0x49dc50);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49dcfc;}}
}
B49dc56:L49dc56:{c.instructions+=2;NFSU2_TR(0x49dc56);
w4(R+12,u32(0x639ull));
}
B49dc5b:{NFSU2_TR(0x49dc5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49dc62:L49dc62:{c.instructions+=3;NFSU2_TR(0x49dc62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49dc65:{NFSU2_TR(0x49dc65);
u8 U[4];
w4(U+0,u32(0x78fd10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dc6a:{NFSU2_TR(0x49dc6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49dc6full));
TAIL_STATIC(0x505450u,505);
}
B49dc6f:L49dc6f:{c.instructions+=3;NFSU2_TR(0x49dc6f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dc70:{NFSU2_TR(0x49dc70);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dc71:{NFSU2_TR(0x49dc71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49dc76ull));
TAIL_STATIC(0x5379c0u,537);
}
B49dc76:L49dc76:{c.instructions+=2;NFSU2_TR(0x49dc76);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dc77:{NFSU2_TR(0x49dc77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49dc7cull));
TAIL_STATIC(0x50ca00u,50c);
}
B49dc7c:L49dc7c:{c.instructions+=5;NFSU2_TR(0x49dc7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49dc7f:{NFSU2_TR(0x49dc7f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B49dc82:{NFSU2_TR(0x49dc82);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dc84:{NFSU2_TR(0x49dc84);
u8 U[4];
w4(U+0,u32(0x78fd08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dc89:{NFSU2_TR(0x49dc89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49dc8eull));
TAIL_STATIC(0x505450u,505);
}
B49dc8e:L49dc8e:{c.instructions+=4;NFSU2_TR(0x49dc8e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49dc91:{NFSU2_TR(0x49dc91);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dc92:{NFSU2_TR(0x49dc92);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dc93:{NFSU2_TR(0x49dc93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49dc98ull));
TAIL_STATIC(0x51cda0u,51c);
}
B49dc98:L49dc98:{c.instructions+=5;NFSU2_TR(0x49dc98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49dc9b:{NFSU2_TR(0x49dc9b);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dca0:{NFSU2_TR(0x49dca0);
u8 U[4];
w4(U+0,u32(0xb8a7c6ceull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dca5:{NFSU2_TR(0x49dca5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dca6:{NFSU2_TR(0x49dca6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49dcabull));
TAIL_STATIC(0x537b80u,537);
}
B49dcab:L49dcab:{c.instructions+=6;NFSU2_TR(0x49dcab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49dcae:{NFSU2_TR(0x49dcae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B49dcb1:{NFSU2_TR(0x49dcb1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dcb2:{NFSU2_TR(0x49dcb2);
u8 U[4];
w4(U+0,u32(0xb8a7c6ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dcb7:{NFSU2_TR(0x49dcb7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dcb8:{NFSU2_TR(0x49dcb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49dcbdull));
TAIL_STATIC(0x537a10u,537);
}
B49dcbd:L49dcbd:{c.instructions+=3;NFSU2_TR(0x49dcbd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49dcc0:{NFSU2_TR(0x49dcc0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dcc1:{NFSU2_TR(0x49dcc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49dcc6ull));
TAIL_STATIC(0x50c900u,50c);
}
B49dcc6:L49dcc6:{c.instructions+=6;NFSU2_TR(0x49dcc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49dcc9:{NFSU2_TR(0x49dcc9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49dccc:{NFSU2_TR(0x49dccc);
u8 U[4];
w4(U+0,u32(0x541389e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dcd1:{NFSU2_TR(0x49dcd1);
u8 U[4];
w4(U+0,u32(0xb8a7c6cdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dcd6:{NFSU2_TR(0x49dcd6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dcd7:{NFSU2_TR(0x49dcd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49dcdcull));
TAIL_STATIC(0x537a10u,537);
}
B49dcdc:L49dcdc:{c.instructions+=3;NFSU2_TR(0x49dcdc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49dcdf:{NFSU2_TR(0x49dcdf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dce0:{NFSU2_TR(0x49dce0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49dce5ull));
TAIL_STATIC(0x50c900u,50c);
}
B49dce5:L49dce5:{c.instructions+=4;NFSU2_TR(0x49dce5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49dce8:{NFSU2_TR(0x49dce8);
u8 U[4];
w4(U+0,u32(0xb8a7c6cdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dced:{NFSU2_TR(0x49dced);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dcee:{NFSU2_TR(0x49dcee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49dcf3ull));
TAIL_STATIC(0x52cea0u,52c);
}
B49dcf3:L49dcf3:{c.instructions+=5;NFSU2_TR(0x49dcf3);
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
B49dcf6:{NFSU2_TR(0x49dcf6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49dcf7:{NFSU2_TR(0x49dcf7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49dcf8:{NFSU2_TR(0x49dcf8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49dcf9:{NFSU2_TR(0x49dcf9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49dcfc:L49dcfc:{c.instructions+=3;NFSU2_TR(0x49dcfc);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B49dd00:{NFSU2_TR(0x49dd00);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49dd02:{NFSU2_TR(0x49dd02);
if(r1(R+518)){{goto L49dd15;}}
}
B49dd04:L49dd04:{c.instructions+=3;NFSU2_TR(0x49dd04);
w4(R+12,u32(0x639ull));
}
B49dd09:{NFSU2_TR(0x49dd09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49dd10:{NFSU2_TR(0x49dd10);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49dc62u);}goto L49dc62;}
}
B49dd15:L49dd15:{c.instructions+=3;NFSU2_TR(0x49dd15);
w4(R+12,u32(0x39df715ull));
}
B49dd1a:{NFSU2_TR(0x49dd1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49dd21:{NFSU2_TR(0x49dd21);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49dc62u);}goto L49dc62;}
}
B49dd30:L49dd30:{c.instructions+=3;NFSU2_TR(0x49dd30);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49dd33:{NFSU2_TR(0x49dd33);
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B49dd36:{NFSU2_TR(0x49dd36);
if(r1(R+518)){{goto L49dd59;}}
}
B49dd38:L49dd38:{c.instructions+=2;NFSU2_TR(0x49dd38);
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
B49dd39:{NFSU2_TR(0x49dd39);
if(r1(R+518)){{goto L49dd53;}}
}
B49dd3b:L49dd3b:{c.instructions+=2;NFSU2_TR(0x49dd3b);
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
B49dd3c:{NFSU2_TR(0x49dd3c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49dd4d;}}
}
B49dd3e:L49dd3e:{c.instructions+=4;NFSU2_TR(0x49dd3e);
__builtin_memmove((R+0),gp(0x836370),4);
}
B49dd43:{NFSU2_TR(0x49dd43);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B49dd49:{NFSU2_TR(0x49dd49);
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
B49dd4b:{NFSU2_TR(0x49dd4b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49dd59;}}
}
B49dd4d:L49dd4d:{c.instructions+=2;NFSU2_TR(0x49dd4d);
__builtin_memmove((R+0),gp(0x7f44a0),4);
}
B49dd52:{NFSU2_TR(0x49dd52);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49dd53:L49dd53:{c.instructions+=2;NFSU2_TR(0x49dd53);
__builtin_memmove((R+0),gp(0x7f44a8),4);
}
B49dd58:{NFSU2_TR(0x49dd58);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49dd59:L49dd59:{c.instructions+=1;NFSU2_TR(0x49dd59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49dd5eull));
TAIL_STATIC(0x49cea0u,49c);
}
B49dd5e:L49dd5e:{c.instructions+=2;NFSU2_TR(0x49dd5e);
__builtin_memmove((R+0),gp(0x7f449c),4);
}
B49dd63:{NFSU2_TR(0x49dd63);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49dd70:L49dd70:{c.instructions+=4;NFSU2_TR(0x49dd70);
__builtin_memmove((R+0),gp(0x836370),4);
}
B49dd75:{NFSU2_TR(0x49dd75);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B49dd7b:{NFSU2_TR(0x49dd7b);
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
B49dd7d:{NFSU2_TR(0x49dd7d);
if(r1(R+518)){{goto L49dd99;}}
}
B49dd7f:L49dd7f:{c.instructions+=3;NFSU2_TR(0x49dd7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49dd85:{NFSU2_TR(0x49dd85);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49dd88:{NFSU2_TR(0x49dd88);
if(r1(R+518)){{goto L49dd93;}}
}
B49dd8a:L49dd8a:{c.instructions+=2;NFSU2_TR(0x49dd8a);
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
B49dd8b:{NFSU2_TR(0x49dd8b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49dd99;}}
}
B49dd8d:L49dd8d:{c.instructions+=2;NFSU2_TR(0x49dd8d);
__builtin_memmove((R+0),gp(0x7f4498),4);
}
B49dd92:{NFSU2_TR(0x49dd92);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49dd93:L49dd93:{c.instructions+=2;NFSU2_TR(0x49dd93);
__builtin_memmove((R+0),gp(0x7f44a8),4);
}
B49dd98:{NFSU2_TR(0x49dd98);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49dd99:L49dd99:{c.instructions+=2;NFSU2_TR(0x49dd99);
__builtin_memmove((R+0),gp(0x7f44a4),4);
}
B49dd9e:{NFSU2_TR(0x49dd9e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49dda0:L49dda0:{c.instructions+=2;NFSU2_TR(0x49dda0);
__builtin_memmove((R+0),gp(0x7f44ac),4);
}
B49dda5:{NFSU2_TR(0x49dda5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49ddb0:L49ddb0:{c.instructions+=2;NFSU2_TR(0x49ddb0);
__builtin_memmove((R+0),gp(0x7f44a0),4);
}
B49ddb5:{NFSU2_TR(0x49ddb5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49ddc0:L49ddc0:{c.instructions+=4;NFSU2_TR(0x49ddc0);
__builtin_memmove((R+0),gp(0x836370),4);
}
B49ddc5:{NFSU2_TR(0x49ddc5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B49ddcb:{NFSU2_TR(0x49ddcb);
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
B49ddcd:{NFSU2_TR(0x49ddcd);
if(r1(R+518)){{goto L49ddda;}}
}
B49ddcf:L49ddcf:{c.instructions+=1;NFSU2_TR(0x49ddcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ddd4ull));
TAIL_STATIC(0x49cea0u,49c);
}
B49ddd4:L49ddd4:{c.instructions+=2;NFSU2_TR(0x49ddd4);
__builtin_memmove((R+0),gp(0x7f449c),4);
}
B49ddd9:{NFSU2_TR(0x49ddd9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49ddda:L49ddda:{c.instructions+=2;NFSU2_TR(0x49ddda);
__builtin_memmove((R+0),gp(0x7f44a0),4);
}
B49dddf:{NFSU2_TR(0x49dddf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49dde0:L49dde0:{c.instructions+=2;NFSU2_TR(0x49dde0);
__builtin_memmove((R+0),gp(0x7f448c),4);
}
B49dde5:{NFSU2_TR(0x49dde5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49ddf0:L49ddf0:{c.instructions+=2;NFSU2_TR(0x49ddf0);
__builtin_memmove((R+0),gp(0x7f44b0),4);
}
B49ddf5:{NFSU2_TR(0x49ddf5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49de00:L49de00:{c.instructions+=2;NFSU2_TR(0x49de00);
__builtin_memmove((R+0),gp(0x7f4498),4);
}
B49de05:{NFSU2_TR(0x49de05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49de10:L49de10:{c.instructions+=13;NFSU2_TR(0x49de10);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49de12:{NFSU2_TR(0x49de12);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49de17:{NFSU2_TR(0x49de17);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49de1d:{NFSU2_TR(0x49de1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49de1e:{NFSU2_TR(0x49de1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49de25:{NFSU2_TR(0x49de25);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49de26:{NFSU2_TR(0x49de26);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49de2a:{NFSU2_TR(0x49de2a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49de2b:{NFSU2_TR(0x49de2b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49de2c:{NFSU2_TR(0x49de2c);
__builtin_memmove((R+24),(R+4),4);
}
B49de2e:{NFSU2_TR(0x49de2e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49de2f:{NFSU2_TR(0x49de2f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49de33:{NFSU2_TR(0x49de33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49de38ull));
TAIL_STATIC(0x551de0u,551);
}
B49de38:L49de38:{c.instructions+=9;NFSU2_TR(0x49de38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49de3b:{NFSU2_TR(0x49de3b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B49de3d:{NFSU2_TR(0x49de3d);
u8 U[4];
w4(U+0,u32(0xd5344356ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49de42:{NFSU2_TR(0x49de42);
u8 U[4];
w4(U+0,u32(0x78fc4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49de47:{NFSU2_TR(0x49de47);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49de4b:{NFSU2_TR(0x49de4b);
u8 U[4];
w4(U+0,u32(0x78fd5cull));
s4(u32(r4(R+24)),r4(U+0));
}
B49de51:{NFSU2_TR(0x49de51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49de54:{NFSU2_TR(0x49de54);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B49de57:{NFSU2_TR(0x49de57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49de5cull));
TAIL_STATIC(0x505450u,505);
}
B49de5c:L49de5c:{c.instructions+=3;NFSU2_TR(0x49de5c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49de5d:{NFSU2_TR(0x49de5d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49de5e:{NFSU2_TR(0x49de5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49de63ull));
TAIL_STATIC(0x537a10u,537);
}
B49de63:L49de63:{c.instructions+=3;NFSU2_TR(0x49de63);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B49de66:{NFSU2_TR(0x49de66);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49de67:{NFSU2_TR(0x49de67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49de6cull));
TAIL_STATIC(0x50c900u,50c);
}
B49de6c:L49de6c:{c.instructions+=9;NFSU2_TR(0x49de6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49de70:{NFSU2_TR(0x49de70);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49de73:{NFSU2_TR(0x49de73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49de7a:{NFSU2_TR(0x49de7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49de7b:{NFSU2_TR(0x49de7b);
__builtin_memmove((R+0),(R+24),4);
}
B49de7d:{NFSU2_TR(0x49de7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49de7e:{NFSU2_TR(0x49de7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49de85:{NFSU2_TR(0x49de85);
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
B49de88:{NFSU2_TR(0x49de88);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49de90:L49de90:{c.instructions+=3;NFSU2_TR(0x49de90);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49de94:{NFSU2_TR(0x49de94);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49de97:{NFSU2_TR(0x49de97);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49de9e;}}
}
B49de99:L49de99:{c.instructions+=2;NFSU2_TR(0x49de99);
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
B49de9b:{NFSU2_TR(0x49de9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49de9e:L49de9e:{c.instructions+=4;NFSU2_TR(0x49de9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49de9f:{NFSU2_TR(0x49de9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49dea3:{NFSU2_TR(0x49dea3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dea4:{NFSU2_TR(0x49dea4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49dea9ull));
TAIL_STATIC(0x50d1d0u,50d);
}
B49dea9:L49dea9:{c.instructions+=2;NFSU2_TR(0x49dea9);
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
B49deac:{NFSU2_TR(0x49deac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49deb0:L49deb0:{c.instructions+=14;NFSU2_TR(0x49deb0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49deb2:{NFSU2_TR(0x49deb2);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49deb7:{NFSU2_TR(0x49deb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49debd:{NFSU2_TR(0x49debd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49debe:{NFSU2_TR(0x49debe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49dec5:{NFSU2_TR(0x49dec5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dec6:{NFSU2_TR(0x49dec6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dec7:{NFSU2_TR(0x49dec7);
__builtin_memmove((R+24),(R+4),4);
}
B49dec9:{NFSU2_TR(0x49dec9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49decd:{NFSU2_TR(0x49decd);
u8 U[4];
w4(U+0,u32(0x78fd5cull));
s4(u32(r4(R+24)),r4(U+0));
}
B49ded3:{NFSU2_TR(0x49ded3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49ded6:{NFSU2_TR(0x49ded6);
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
B49ded8:{NFSU2_TR(0x49ded8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49dee0:{NFSU2_TR(0x49dee0);
if(r1(R+518)){{goto L49def2;}}
}
B49dee2:L49dee2:{c.instructions+=2;NFSU2_TR(0x49dee2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dee3:{NFSU2_TR(0x49dee3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49dee8ull));
TAIL_STATIC(0x540a60u,540);
}
B49dee8:L49dee8:{c.instructions+=2;NFSU2_TR(0x49dee8);
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
B49deeb:{NFSU2_TR(0x49deeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49def2:L49def2:{c.instructions+=3;NFSU2_TR(0x49def2);
__builtin_memmove((R+4),(R+24),4);
}
B49def4:{NFSU2_TR(0x49def4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B49defc:{NFSU2_TR(0x49defc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49df01ull));
TAIL_STATIC(0x510d40u,510);
}
B49df01:L49df01:{c.instructions+=5;NFSU2_TR(0x49df01);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49df05:{NFSU2_TR(0x49df05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49df06:{NFSU2_TR(0x49df06);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49df0d:{NFSU2_TR(0x49df0d);
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
B49df10:{NFSU2_TR(0x49df10);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49df20:L49df20:{c.instructions+=4;NFSU2_TR(0x49df20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49df21:{NFSU2_TR(0x49df21);
__builtin_memmove((R+24),(R+4),4);
}
B49df23:{NFSU2_TR(0x49df23);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B49df27:{NFSU2_TR(0x49df27);
if(r1(R+518)){{goto L49df9f;}}
}
B49df29:L49df29:{c.instructions+=2;NFSU2_TR(0x49df29);
u8 U[2];
__builtin_memmove((U+0),gp(0x8500cc),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B49df30:{NFSU2_TR(0x49df30);
if(r1(R+518)){{goto L49df9f;}}
}
B49df32:L49df32:{c.instructions+=3;NFSU2_TR(0x49df32);
__builtin_memmove((R+0),gp(0x8500d0),4);
}
B49df37:{NFSU2_TR(0x49df37);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B49df3a:{NFSU2_TR(0x49df3a);
if(r1(R+518)){{goto L49dfa3;}}
}
B49df3c:L49df3c:{c.instructions+=2;NFSU2_TR(0x49df3c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B49df3d:{NFSU2_TR(0x49df3d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49df9f;}}
}
B49df3f:L49df3f:{c.instructions+=2;NFSU2_TR(0x49df3f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B49df43:{NFSU2_TR(0x49df43);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49df9a;}}
}
B49df45:L49df45:{c.instructions+=4;NFSU2_TR(0x49df45);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49df47:{NFSU2_TR(0x49df47);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49df49:{NFSU2_TR(0x49df49);
u8 U[4];
w4(U+0,u32(0x74797065ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49df4e:{NFSU2_TR(0x49df4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49df53ull));
TAIL_STATIC(0x742b60u,742);
}
B49df53:L49df53:{c.instructions+=4;NFSU2_TR(0x49df53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49df56:{NFSU2_TR(0x49df56);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B49df59:{NFSU2_TR(0x49df59);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49df5b:{NFSU2_TR(0x49df5b);
if(r1(R+518)){{goto L49df9a;}}
}
B49df5d:L49df5d:{c.instructions+=3;NFSU2_TR(0x49df5d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49df60:{NFSU2_TR(0x49df60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49df63:{NFSU2_TR(0x49df63);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49df84;}}
}
B49df65:L49df65:{c.instructions+=5;NFSU2_TR(0x49df65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49df68:{NFSU2_TR(0x49df68);
u8 U[4];
w4(U+0,u32(0x69a8bc54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49df6d:{NFSU2_TR(0x49df6d);
u8 U[4];
w4(U+0,u32(0x78fc4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49df72:{NFSU2_TR(0x49df72);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49df73:{NFSU2_TR(0x49df73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49df78ull));
TAIL_STATIC(0x495490u,495);
}
B49df78:L49df78:{c.instructions+=2;NFSU2_TR(0x49df78);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B49df7b:{NFSU2_TR(0x49df7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49df80ull));
TAIL_STATIC(0x742db0u,742);
}
B49df80:L49df80:{c.instructions+=3;NFSU2_TR(0x49df80);
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
B49df82:{NFSU2_TR(0x49df82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49df83:{NFSU2_TR(0x49df83);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49df84:L49df84:{c.instructions+=5;NFSU2_TR(0x49df84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49df87:{NFSU2_TR(0x49df87);
u8 U[4];
w4(U+0,u32(0x1db81db6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49df8c:{NFSU2_TR(0x49df8c);
u8 U[4];
w4(U+0,u32(0x78fc4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49df91:{NFSU2_TR(0x49df91);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49df92:{NFSU2_TR(0x49df92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49df97ull));
TAIL_STATIC(0x495490u,495);
}
B49df97:L49df97:{c.instructions+=1;NFSU2_TR(0x49df97);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B49df9a:L49df9a:{c.instructions+=1;NFSU2_TR(0x49df9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49df9full));
TAIL_STATIC(0x742db0u,742);
}
B49df9f:L49df9f:{c.instructions+=3;NFSU2_TR(0x49df9f);
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
B49dfa1:{NFSU2_TR(0x49dfa1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49dfa2:{NFSU2_TR(0x49dfa2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49dfa3:L49dfa3:{c.instructions+=1;NFSU2_TR(0x49dfa3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49dfa8ull));
TAIL_STATIC(0x585640u,585);
}
B49dfa8:L49dfa8:{c.instructions+=3;NFSU2_TR(0x49dfa8);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dfaa:{NFSU2_TR(0x49dfaa);
w4(R+4,u32(0x850080ull));
}
B49dfaf:{NFSU2_TR(0x49dfaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49dfb4ull));
TAIL_STATIC(0x5031b0u,503);
}
B49dfb4:L49dfb4:{c.instructions+=3;NFSU2_TR(0x49dfb4);
w4(R+0,u32(0x1ull));
}
B49dfb9:{NFSU2_TR(0x49dfb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49dfba:{NFSU2_TR(0x49dfba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49dfc0:L49dfc0:{c.instructions+=5;NFSU2_TR(0x49dfc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49dfc4:{NFSU2_TR(0x49dfc4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49dfc8:{NFSU2_TR(0x49dfc8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dfc9:{NFSU2_TR(0x49dfc9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dfca:{NFSU2_TR(0x49dfca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49dfcfull));
TAIL_STATIC(0x50d1d0u,50d);
}
B49dfcf:L49dfcf:{c.instructions+=2;NFSU2_TR(0x49dfcf);
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
B49dfd2:{NFSU2_TR(0x49dfd2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49dfe0:L49dfe0:{c.instructions+=3;NFSU2_TR(0x49dfe0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dfe1:{NFSU2_TR(0x49dfe1);
__builtin_memmove((R+24),(R+4),4);
}
B49dfe3:{NFSU2_TR(0x49dfe3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49dfe8ull));
TAIL_STATIC(0x49e000u,49e);
}
B49dfe8:L49dfe8:{c.instructions+=2;NFSU2_TR(0x49dfe8);
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
B49dfed:{NFSU2_TR(0x49dfed);
if(r1(R+518)){{goto L49dff8;}}
}
B49dfef:L49dfef:{c.instructions+=2;NFSU2_TR(0x49dfef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49dff0:{NFSU2_TR(0x49dff0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49dff5ull));
TAIL_STATIC(0x575630u,575);
}
B49dff5:L49dff5:{c.instructions+=1;NFSU2_TR(0x49dff5);
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
B49dff8:L49dff8:{c.instructions+=3;NFSU2_TR(0x49dff8);
__builtin_memmove((R+0),(R+24),4);
}
B49dffa:{NFSU2_TR(0x49dffa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49dffb:{NFSU2_TR(0x49dffb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x49d,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
