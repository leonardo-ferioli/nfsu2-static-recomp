#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_582(u8* __restrict R,Cpu& c);
u32 body_584(u8* __restrict R,Cpu& c);
u32 body_585(u8* __restrict R,Cpu& c);
u32 body_586(u8* __restrict R,Cpu& c);
u32 body_587(u8* __restrict R,Cpu& c);
u32 body_58a(u8* __restrict R,Cpu& c);
u32 body_58b(u8* __restrict R,Cpu& c);
u32 body_58e(u8* __restrict R,Cpu& c);
u32 body_741(u8* __restrict R,Cpu& c);
u32 body_742(u8* __restrict R,Cpu& c);
u32 body_744(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x58d,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x58d,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_58d(u8* __restrict R,Cpu& c);
u32 page_58d(Cpu& c){return body_58d(c.regs.data(),c);}
__attribute__((noinline)) u32 body_58d(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x58d000:goto L58d000;
case 0x58d006:c.instructions+=5;goto B58d006;
case 0x58d008:c.instructions+=4;goto B58d008;
case 0x58d00a:c.instructions+=3;goto B58d00a;
case 0x58d00e:c.instructions+=2;goto B58d00e;
case 0x58d012:c.instructions+=1;goto B58d012;
case 0x58d014:goto L58d014;
case 0x58d01a:goto L58d01a;
case 0x58d01c:c.instructions+=5;goto B58d01c;
case 0x58d01d:c.instructions+=4;goto B58d01d;
case 0x58d01e:c.instructions+=3;goto B58d01e;
case 0x58d024:c.instructions+=2;goto B58d024;
case 0x58d025:c.instructions+=1;goto B58d025;
case 0x58d030:goto L58d030;
case 0x58d031:c.instructions+=4;goto B58d031;
case 0x58d032:c.instructions+=3;goto B58d032;
case 0x58d033:c.instructions+=2;goto B58d033;
case 0x58d035:c.instructions+=1;goto B58d035;
case 0x58d03a:goto L58d03a;
case 0x58d03d:c.instructions+=2;goto B58d03d;
case 0x58d03f:c.instructions+=1;goto B58d03f;
case 0x58d041:goto L58d041;
case 0x58d042:c.instructions+=4;goto B58d042;
case 0x58d043:c.instructions+=3;goto B58d043;
case 0x58d046:c.instructions+=2;goto B58d046;
case 0x58d047:c.instructions+=1;goto B58d047;
case 0x58d04a:goto L58d04a;
case 0x58d04b:c.instructions+=3;goto B58d04b;
case 0x58d04f:c.instructions+=2;goto B58d04f;
case 0x58d051:c.instructions+=1;goto B58d051;
case 0x58d053:goto L58d053;
case 0x58d056:c.instructions+=1;goto B58d056;
case 0x58d058:goto L58d058;
case 0x58d05b:c.instructions+=3;goto B58d05b;
case 0x58d05e:c.instructions+=2;goto B58d05e;
case 0x58d060:c.instructions+=1;goto B58d060;
case 0x58d062:goto L58d062;
case 0x58d065:c.instructions+=3;goto B58d065;
case 0x58d066:c.instructions+=2;goto B58d066;
case 0x58d067:c.instructions+=1;goto B58d067;
case 0x58d06c:goto L58d06c;
case 0x58d06f:c.instructions+=2;goto B58d06f;
case 0x58d071:c.instructions+=1;goto B58d071;
case 0x58d073:goto L58d073;
case 0x58d075:c.instructions+=2;goto B58d075;
case 0x58d077:c.instructions+=1;goto B58d077;
case 0x58d079:goto L58d079;
case 0x58d07b:goto L58d07b;
case 0x58d07d:c.instructions+=3;goto B58d07d;
case 0x58d080:c.instructions+=2;goto B58d080;
case 0x58d082:c.instructions+=1;goto B58d082;
case 0x58d085:goto L58d085;
case 0x58d087:c.instructions+=1;goto B58d087;
case 0x58d089:goto L58d089;
case 0x58d08a:c.instructions+=5;goto B58d08a;
case 0x58d08b:c.instructions+=4;goto B58d08b;
case 0x58d08c:c.instructions+=3;goto B58d08c;
case 0x58d08e:c.instructions+=2;goto B58d08e;
case 0x58d08f:c.instructions+=1;goto B58d08f;
case 0x58d092:goto L58d092;
case 0x58d093:c.instructions+=2;goto B58d093;
case 0x58d095:c.instructions+=1;goto B58d095;
case 0x58d09a:goto L58d09a;
case 0x58d09c:c.instructions+=2;goto B58d09c;
case 0x58d09e:c.instructions+=1;goto B58d09e;
case 0x58d0a0:goto L58d0a0;
case 0x58d0a2:c.instructions+=1;goto B58d0a2;
case 0x58d0a7:goto L58d0a7;
case 0x58d0a8:c.instructions+=1;goto B58d0a8;
case 0x58d0ad:goto L58d0ad;
case 0x58d0b0:goto L58d0b0;
case 0x58d0b1:c.instructions+=5;goto B58d0b1;
case 0x58d0b3:c.instructions+=4;goto B58d0b3;
case 0x58d0b4:c.instructions+=3;goto B58d0b4;
case 0x58d0b5:c.instructions+=2;goto B58d0b5;
case 0x58d0b6:c.instructions+=1;goto B58d0b6;
case 0x58d0b9:goto L58d0b9;
case 0x58d0ba:c.instructions+=5;goto B58d0ba;
case 0x58d0bb:c.instructions+=4;goto B58d0bb;
case 0x58d0bc:c.instructions+=3;goto B58d0bc;
case 0x58d0c1:c.instructions+=2;goto B58d0c1;
case 0x58d0c2:c.instructions+=1;goto B58d0c2;
case 0x58d0d0:goto L58d0d0;
case 0x58d0d1:c.instructions+=2;goto B58d0d1;
case 0x58d0d3:c.instructions+=1;goto B58d0d3;
case 0x58d0d8:goto L58d0d8;
case 0x58d0db:c.instructions+=2;goto B58d0db;
case 0x58d0dd:c.instructions+=1;goto B58d0dd;
case 0x58d0df:goto L58d0df;
case 0x58d0e2:c.instructions+=2;goto B58d0e2;
case 0x58d0e3:c.instructions+=1;goto B58d0e3;
case 0x58d0e4:goto L58d0e4;
case 0x58d0e5:c.instructions+=3;goto B58d0e5;
case 0x58d0e6:c.instructions+=2;goto B58d0e6;
case 0x58d0e7:c.instructions+=1;goto B58d0e7;
case 0x58d0ec:goto L58d0ec;
case 0x58d0ef:c.instructions+=5;goto B58d0ef;
case 0x58d0f6:c.instructions+=4;goto B58d0f6;
case 0x58d0f8:c.instructions+=3;goto B58d0f8;
case 0x58d0fb:c.instructions+=2;goto B58d0fb;
case 0x58d0fd:c.instructions+=1;goto B58d0fd;
case 0x58d0ff:goto L58d0ff;
case 0x58d100:goto L58d100;
case 0x58d101:c.instructions+=2;goto B58d101;
case 0x58d103:c.instructions+=1;goto B58d103;
case 0x58d108:goto L58d108;
case 0x58d10a:c.instructions+=1;goto B58d10a;
case 0x58d10c:goto L58d10c;
case 0x58d10e:goto L58d10e;
case 0x58d110:c.instructions+=6;goto B58d110;
case 0x58d112:c.instructions+=5;goto B58d112;
case 0x58d114:c.instructions+=4;goto B58d114;
case 0x58d117:c.instructions+=3;goto B58d117;
case 0x58d119:c.instructions+=2;goto B58d119;
case 0x58d11c:c.instructions+=1;goto B58d11c;
case 0x58d11e:goto L58d11e;
case 0x58d120:c.instructions+=1;goto B58d120;
case 0x58d125:goto L58d125;
case 0x58d126:c.instructions+=1;goto B58d126;
case 0x58d12b:goto L58d12b;
case 0x58d12e:goto L58d12e;
case 0x58d130:c.instructions+=2;goto B58d130;
case 0x58d132:c.instructions+=1;goto B58d132;
case 0x58d134:goto L58d134;
case 0x58d139:goto L58d139;
case 0x58d13a:c.instructions+=6;goto B58d13a;
case 0x58d13b:c.instructions+=5;goto B58d13b;
case 0x58d142:c.instructions+=4;goto B58d142;
case 0x58d144:c.instructions+=3;goto B58d144;
case 0x58d145:c.instructions+=2;goto B58d145;
case 0x58d146:c.instructions+=1;goto B58d146;
case 0x58d150:goto L58d150;
case 0x58d151:c.instructions+=6;goto B58d151;
case 0x58d152:c.instructions+=5;goto B58d152;
case 0x58d153:c.instructions+=4;goto B58d153;
case 0x58d154:c.instructions+=3;goto B58d154;
case 0x58d156:c.instructions+=2;goto B58d156;
case 0x58d15a:c.instructions+=1;goto B58d15a;
case 0x58d15f:goto L58d15f;
case 0x58d162:c.instructions+=2;goto B58d162;
case 0x58d164:c.instructions+=1;goto B58d164;
case 0x58d166:goto L58d166;
case 0x58d167:c.instructions+=5;goto B58d167;
case 0x58d168:c.instructions+=4;goto B58d168;
case 0x58d16b:c.instructions+=3;goto B58d16b;
case 0x58d16c:c.instructions+=2;goto B58d16c;
case 0x58d16d:c.instructions+=1;goto B58d16d;
case 0x58d170:goto L58d170;
case 0x58d171:c.instructions+=3;goto B58d171;
case 0x58d175:c.instructions+=2;goto B58d175;
case 0x58d177:c.instructions+=1;goto B58d177;
case 0x58d17d:goto L58d17d;
case 0x58d180:c.instructions+=1;goto B58d180;
case 0x58d186:goto L58d186;
case 0x58d18a:c.instructions+=2;goto B58d18a;
case 0x58d18c:c.instructions+=1;goto B58d18c;
case 0x58d192:goto L58d192;
case 0x58d195:c.instructions+=1;goto B58d195;
case 0x58d197:goto L58d197;
case 0x58d19a:c.instructions+=4;goto B58d19a;
case 0x58d19e:c.instructions+=3;goto B58d19e;
case 0x58d1a1:c.instructions+=2;goto B58d1a1;
case 0x58d1a3:c.instructions+=1;goto B58d1a3;
case 0x58d1a5:goto L58d1a5;
case 0x58d1a8:c.instructions+=1;goto B58d1a8;
case 0x58d1aa:goto L58d1aa;
case 0x58d1ad:c.instructions+=3;goto B58d1ad;
case 0x58d1ae:c.instructions+=2;goto B58d1ae;
case 0x58d1af:c.instructions+=1;goto B58d1af;
case 0x58d1b4:goto L58d1b4;
case 0x58d1b7:c.instructions+=2;goto B58d1b7;
case 0x58d1b9:c.instructions+=1;goto B58d1b9;
case 0x58d1bb:goto L58d1bb;
case 0x58d1bd:c.instructions+=2;goto B58d1bd;
case 0x58d1bf:c.instructions+=1;goto B58d1bf;
case 0x58d1c1:goto L58d1c1;
case 0x58d1c3:c.instructions+=1;goto B58d1c3;
case 0x58d1c5:goto L58d1c5;
case 0x58d1c6:c.instructions+=6;goto B58d1c6;
case 0x58d1c7:c.instructions+=5;goto B58d1c7;
case 0x58d1c8:c.instructions+=4;goto B58d1c8;
case 0x58d1cd:c.instructions+=3;goto B58d1cd;
case 0x58d1ce:c.instructions+=2;goto B58d1ce;
case 0x58d1cf:c.instructions+=1;goto B58d1cf;
case 0x58d1d2:goto L58d1d2;
case 0x58d1d6:c.instructions+=5;goto B58d1d6;
case 0x58d1d7:c.instructions+=4;goto B58d1d7;
case 0x58d1db:c.instructions+=3;goto B58d1db;
case 0x58d1dc:c.instructions+=2;goto B58d1dc;
case 0x58d1dd:c.instructions+=1;goto B58d1dd;
case 0x58d1e2:goto L58d1e2;
case 0x58d1e4:c.instructions+=2;goto B58d1e4;
case 0x58d1e6:c.instructions+=1;goto B58d1e6;
case 0x58d1e8:goto L58d1e8;
case 0x58d1eb:c.instructions+=5;goto B58d1eb;
case 0x58d1ed:c.instructions+=4;goto B58d1ed;
case 0x58d1ef:c.instructions+=3;goto B58d1ef;
case 0x58d1f2:c.instructions+=2;goto B58d1f2;
case 0x58d1f4:c.instructions+=1;goto B58d1f4;
case 0x58d1f9:goto L58d1f9;
case 0x58d1fa:c.instructions+=1;goto B58d1fa;
case 0x58d1ff:goto L58d1ff;
case 0x58d202:goto L58d202;
case 0x58d203:c.instructions+=6;goto B58d203;
case 0x58d205:c.instructions+=5;goto B58d205;
case 0x58d206:c.instructions+=4;goto B58d206;
case 0x58d207:c.instructions+=3;goto B58d207;
case 0x58d208:c.instructions+=2;goto B58d208;
case 0x58d209:c.instructions+=1;goto B58d209;
case 0x58d20c:goto L58d20c;
case 0x58d20d:c.instructions+=6;goto B58d20d;
case 0x58d20e:c.instructions+=5;goto B58d20e;
case 0x58d20f:c.instructions+=4;goto B58d20f;
case 0x58d214:c.instructions+=3;goto B58d214;
case 0x58d215:c.instructions+=2;goto B58d215;
case 0x58d216:c.instructions+=1;goto B58d216;
case 0x58d220:goto L58d220;
case 0x58d221:c.instructions+=9;goto B58d221;
case 0x58d222:c.instructions+=8;goto B58d222;
case 0x58d223:c.instructions+=7;goto B58d223;
case 0x58d224:c.instructions+=6;goto B58d224;
case 0x58d228:c.instructions+=5;goto B58d228;
case 0x58d22b:c.instructions+=4;goto B58d22b;
case 0x58d22e:c.instructions+=3;goto B58d22e;
case 0x58d230:c.instructions+=2;goto B58d230;
case 0x58d234:c.instructions+=1;goto B58d234;
case 0x58d236:goto L58d236;
case 0x58d240:goto L58d240;
case 0x58d243:c.instructions+=7;goto B58d243;
case 0x58d249:c.instructions+=6;goto B58d249;
case 0x58d24f:c.instructions+=5;goto B58d24f;
case 0x58d255:c.instructions+=4;goto B58d255;
case 0x58d257:c.instructions+=3;goto B58d257;
case 0x58d259:c.instructions+=2;goto B58d259;
case 0x58d25c:c.instructions+=1;goto B58d25c;
case 0x58d25e:goto L58d25e;
case 0x58d261:c.instructions+=2;goto B58d261;
case 0x58d263:c.instructions+=1;goto B58d263;
case 0x58d265:goto L58d265;
case 0x58d268:c.instructions+=7;goto B58d268;
case 0x58d26b:c.instructions+=6;goto B58d26b;
case 0x58d26c:c.instructions+=5;goto B58d26c;
case 0x58d26e:c.instructions+=4;goto B58d26e;
case 0x58d26f:c.instructions+=3;goto B58d26f;
case 0x58d272:c.instructions+=2;goto B58d272;
case 0x58d273:c.instructions+=1;goto B58d273;
case 0x58d275:goto L58d275;
case 0x58d278:goto L58d278;
case 0x58d27b:c.instructions+=5;goto B58d27b;
case 0x58d27d:c.instructions+=4;goto B58d27d;
case 0x58d27f:c.instructions+=3;goto B58d27f;
case 0x58d281:c.instructions+=2;goto B58d281;
case 0x58d284:c.instructions+=1;goto B58d284;
case 0x58d289:goto L58d289;
case 0x58d28a:c.instructions+=1;goto B58d28a;
case 0x58d28f:goto L58d28f;
case 0x58d292:c.instructions+=1;goto B58d292;
case 0x58d294:goto L58d294;
case 0x58d296:c.instructions+=2;goto B58d296;
case 0x58d298:c.instructions+=1;goto B58d298;
case 0x58d29a:goto L58d29a;
case 0x58d29d:c.instructions+=3;goto B58d29d;
case 0x58d2a0:c.instructions+=2;goto B58d2a0;
case 0x58d2a2:c.instructions+=1;goto B58d2a2;
case 0x58d2a8:goto L58d2a8;
case 0x58d2b0:goto L58d2b0;
case 0x58d2b3:c.instructions+=7;goto B58d2b3;
case 0x58d2b9:c.instructions+=6;goto B58d2b9;
case 0x58d2bf:c.instructions+=5;goto B58d2bf;
case 0x58d2c5:c.instructions+=4;goto B58d2c5;
case 0x58d2c7:c.instructions+=3;goto B58d2c7;
case 0x58d2c9:c.instructions+=2;goto B58d2c9;
case 0x58d2cc:c.instructions+=1;goto B58d2cc;
case 0x58d2ce:goto L58d2ce;
case 0x58d2d1:c.instructions+=7;goto B58d2d1;
case 0x58d2d4:c.instructions+=6;goto B58d2d4;
case 0x58d2d6:c.instructions+=5;goto B58d2d6;
case 0x58d2d7:c.instructions+=4;goto B58d2d7;
case 0x58d2da:c.instructions+=3;goto B58d2da;
case 0x58d2db:c.instructions+=2;goto B58d2db;
case 0x58d2dd:c.instructions+=1;goto B58d2dd;
case 0x58d2e2:goto L58d2e2;
case 0x58d2e4:c.instructions+=1;goto B58d2e4;
case 0x58d2e6:goto L58d2e6;
case 0x58d2e9:c.instructions+=5;goto B58d2e9;
case 0x58d2eb:c.instructions+=4;goto B58d2eb;
case 0x58d2ed:c.instructions+=3;goto B58d2ed;
case 0x58d2f0:c.instructions+=2;goto B58d2f0;
case 0x58d2f2:c.instructions+=1;goto B58d2f2;
case 0x58d2f7:goto L58d2f7;
case 0x58d2f8:c.instructions+=1;goto B58d2f8;
case 0x58d2fd:goto L58d2fd;
case 0x58d300:goto L58d300;
case 0x58d303:c.instructions+=2;goto B58d303;
case 0x58d305:c.instructions+=1;goto B58d305;
case 0x58d307:goto L58d307;
case 0x58d30a:c.instructions+=6;goto B58d30a;
case 0x58d30d:c.instructions+=5;goto B58d30d;
case 0x58d30e:c.instructions+=4;goto B58d30e;
case 0x58d310:c.instructions+=3;goto B58d310;
case 0x58d311:c.instructions+=2;goto B58d311;
case 0x58d312:c.instructions+=1;goto B58d312;
case 0x58d314:goto L58d314;
case 0x58d317:goto L58d317;
case 0x58d319:c.instructions+=1;goto B58d319;
case 0x58d31d:goto L58d31d;
case 0x58d31f:c.instructions+=3;goto B58d31f;
case 0x58d322:c.instructions+=2;goto B58d322;
case 0x58d324:c.instructions+=1;goto B58d324;
case 0x58d326:goto L58d326;
case 0x58d329:c.instructions+=6;goto B58d329;
case 0x58d32a:c.instructions+=5;goto B58d32a;
case 0x58d32b:c.instructions+=4;goto B58d32b;
case 0x58d32d:c.instructions+=3;goto B58d32d;
case 0x58d32e:c.instructions+=2;goto B58d32e;
case 0x58d32f:c.instructions+=1;goto B58d32f;
case 0x58d331:goto L58d331;
case 0x58d333:c.instructions+=1;goto B58d333;
case 0x58d335:goto L58d335;
case 0x58d338:c.instructions+=1;goto B58d338;
case 0x58d339:goto L58d339;
case 0x58d33b:c.instructions+=1;goto B58d33b;
case 0x58d340:goto L58d340;
case 0x58d341:c.instructions+=9;goto B58d341;
case 0x58d343:c.instructions+=8;goto B58d343;
case 0x58d346:c.instructions+=7;goto B58d346;
case 0x58d34c:c.instructions+=6;goto B58d34c;
case 0x58d34d:c.instructions+=5;goto B58d34d;
case 0x58d34e:c.instructions+=4;goto B58d34e;
case 0x58d350:c.instructions+=3;goto B58d350;
case 0x58d351:c.instructions+=2;goto B58d351;
case 0x58d355:c.instructions+=1;goto B58d355;
case 0x58d35a:goto L58d35a;
case 0x58d35d:c.instructions+=2;goto B58d35d;
case 0x58d35f:c.instructions+=1;goto B58d35f;
case 0x58d365:goto L58d365;
case 0x58d368:c.instructions+=2;goto B58d368;
case 0x58d36a:c.instructions+=1;goto B58d36a;
case 0x58d370:goto L58d370;
case 0x58d373:c.instructions+=1;goto B58d373;
case 0x58d379:goto L58d379;
case 0x58d37d:c.instructions+=1;goto B58d37d;
case 0x58d383:goto L58d383;
case 0x58d388:goto L58d388;
case 0x58d38b:c.instructions+=3;goto B58d38b;
case 0x58d38d:c.instructions+=2;goto B58d38d;
case 0x58d392:c.instructions+=1;goto B58d392;
case 0x58d394:goto L58d394;
case 0x58d397:c.instructions+=1;goto B58d397;
case 0x58d399:goto L58d399;
case 0x58d39c:c.instructions+=1;goto B58d39c;
case 0x58d39e:goto L58d39e;
case 0x58d3a1:c.instructions+=3;goto B58d3a1;
case 0x58d3a3:c.instructions+=2;goto B58d3a3;
case 0x58d3a5:c.instructions+=1;goto B58d3a5;
case 0x58d3a7:goto L58d3a7;
case 0x58d3aa:c.instructions+=1;goto B58d3aa;
case 0x58d3ac:goto L58d3ac;
case 0x58d3ae:c.instructions+=2;goto B58d3ae;
case 0x58d3b0:c.instructions+=1;goto B58d3b0;
case 0x58d3b2:goto L58d3b2;
case 0x58d3b4:goto L58d3b4;
case 0x58d3b7:goto L58d3b7;
case 0x58d3ba:c.instructions+=1;goto B58d3ba;
case 0x58d3c0:goto L58d3c0;
case 0x58d3c5:goto L58d3c5;
case 0x58d3c8:c.instructions+=3;goto B58d3c8;
case 0x58d3ca:c.instructions+=2;goto B58d3ca;
case 0x58d3cf:c.instructions+=1;goto B58d3cf;
case 0x58d3d1:goto L58d3d1;
case 0x58d3d4:c.instructions+=1;goto B58d3d4;
case 0x58d3d6:goto L58d3d6;
case 0x58d3d9:c.instructions+=1;goto B58d3d9;
case 0x58d3db:goto L58d3db;
case 0x58d3de:c.instructions+=3;goto B58d3de;
case 0x58d3e0:c.instructions+=2;goto B58d3e0;
case 0x58d3e2:c.instructions+=1;goto B58d3e2;
case 0x58d3e4:goto L58d3e4;
case 0x58d3e7:c.instructions+=1;goto B58d3e7;
case 0x58d3e9:goto L58d3e9;
case 0x58d3eb:c.instructions+=2;goto B58d3eb;
case 0x58d3ed:c.instructions+=1;goto B58d3ed;
case 0x58d3ef:goto L58d3ef;
case 0x58d3f1:goto L58d3f1;
case 0x58d3f4:goto L58d3f4;
case 0x58d3f7:c.instructions+=1;goto B58d3f7;
case 0x58d3fd:goto L58d3fd;
case 0x58d3ff:c.instructions+=3;goto B58d3ff;
case 0x58d404:c.instructions+=2;goto B58d404;
case 0x58d409:c.instructions+=1;goto B58d409;
case 0x58d40d:goto L58d40d;
case 0x58d40f:goto L58d40f;
case 0x58d411:c.instructions+=8;goto B58d411;
case 0x58d412:c.instructions+=7;goto B58d412;
case 0x58d417:c.instructions+=6;goto B58d417;
case 0x58d419:c.instructions+=5;goto B58d419;
case 0x58d41a:c.instructions+=4;goto B58d41a;
case 0x58d41b:c.instructions+=3;goto B58d41b;
case 0x58d41d:c.instructions+=2;goto B58d41d;
case 0x58d422:c.instructions+=1;goto B58d422;
case 0x58d427:goto L58d427;
case 0x58d42a:c.instructions+=6;goto B58d42a;
case 0x58d42b:c.instructions+=5;goto B58d42b;
case 0x58d42c:c.instructions+=4;goto B58d42c;
case 0x58d430:c.instructions+=3;goto B58d430;
case 0x58d435:c.instructions+=2;goto B58d435;
case 0x58d436:c.instructions+=1;goto B58d436;
case 0x58d43b:goto L58d43b;
case 0x58d443:c.instructions+=3;goto B58d443;
case 0x58d445:c.instructions+=2;goto B58d445;
case 0x58d44a:c.instructions+=1;goto B58d44a;
case 0x58d451:goto L58d451;
case 0x58d453:goto L58d453;
case 0x58d457:c.instructions+=8;goto B58d457;
case 0x58d458:c.instructions+=7;goto B58d458;
case 0x58d45d:c.instructions+=6;goto B58d45d;
case 0x58d45f:c.instructions+=5;goto B58d45f;
case 0x58d466:c.instructions+=4;goto B58d466;
case 0x58d46b:c.instructions+=3;goto B58d46b;
case 0x58d46c:c.instructions+=2;goto B58d46c;
case 0x58d46d:c.instructions+=1;goto B58d46d;
case 0x58d472:goto L58d472;
case 0x58d475:c.instructions+=7;goto B58d475;
case 0x58d478:c.instructions+=6;goto B58d478;
case 0x58d479:c.instructions+=5;goto B58d479;
case 0x58d47e:c.instructions+=4;goto B58d47e;
case 0x58d485:c.instructions+=3;goto B58d485;
case 0x58d48a:c.instructions+=2;goto B58d48a;
case 0x58d48b:c.instructions+=1;goto B58d48b;
case 0x58d490:goto L58d490;
case 0x58d494:c.instructions+=6;goto B58d494;
case 0x58d495:c.instructions+=5;goto B58d495;
case 0x58d49a:c.instructions+=4;goto B58d49a;
case 0x58d4a1:c.instructions+=3;goto B58d4a1;
case 0x58d4a6:c.instructions+=2;goto B58d4a6;
case 0x58d4a7:c.instructions+=1;goto B58d4a7;
case 0x58d4ac:goto L58d4ac;
case 0x58d4af:c.instructions+=5;goto B58d4af;
case 0x58d4b4:c.instructions+=4;goto B58d4b4;
case 0x58d4b7:c.instructions+=3;goto B58d4b7;
case 0x58d4b9:c.instructions+=2;goto B58d4b9;
case 0x58d4bb:c.instructions+=1;goto B58d4bb;
case 0x58d4bd:goto L58d4bd;
case 0x58d4bf:goto L58d4bf;
case 0x58d4c2:c.instructions+=1;goto B58d4c2;
case 0x58d4c4:goto L58d4c4;
case 0x58d4c7:goto L58d4c7;
case 0x58d4ca:c.instructions+=2;goto B58d4ca;
case 0x58d4cc:c.instructions+=1;goto B58d4cc;
case 0x58d4ce:goto L58d4ce;
case 0x58d4d4:c.instructions+=1;goto B58d4d4;
case 0x58d4d6:goto L58d4d6;
case 0x58d4d8:c.instructions+=1;goto B58d4d8;
case 0x58d4da:goto L58d4da;
case 0x58d4e0:c.instructions+=1;goto B58d4e0;
case 0x58d4e2:goto L58d4e2;
case 0x58d4e5:c.instructions+=1;goto B58d4e5;
case 0x58d4e7:goto L58d4e7;
case 0x58d4ed:c.instructions+=1;goto B58d4ed;
case 0x58d4ef:goto L58d4ef;
case 0x58d4f2:c.instructions+=1;goto B58d4f2;
case 0x58d4f4:goto L58d4f4;
case 0x58d4fa:c.instructions+=1;goto B58d4fa;
case 0x58d4fc:goto L58d4fc;
case 0x58d4ff:c.instructions+=1;goto B58d4ff;
case 0x58d501:goto L58d501;
case 0x58d504:c.instructions+=1;goto B58d504;
case 0x58d506:goto L58d506;
case 0x58d509:c.instructions+=1;goto B58d509;
case 0x58d50b:goto L58d50b;
case 0x58d511:c.instructions+=1;goto B58d511;
case 0x58d513:goto L58d513;
case 0x58d516:c.instructions+=1;goto B58d516;
case 0x58d518:goto L58d518;
case 0x58d51e:c.instructions+=1;goto B58d51e;
case 0x58d520:goto L58d520;
case 0x58d526:goto L58d526;
case 0x58d529:c.instructions+=2;goto B58d529;
case 0x58d52b:c.instructions+=1;goto B58d52b;
case 0x58d52d:goto L58d52d;
case 0x58d533:c.instructions+=1;goto B58d533;
case 0x58d535:goto L58d535;
case 0x58d538:c.instructions+=2;goto B58d538;
case 0x58d53a:c.instructions+=1;goto B58d53a;
case 0x58d53c:goto L58d53c;
case 0x58d53f:c.instructions+=1;goto B58d53f;
case 0x58d541:goto L58d541;
case 0x58d543:c.instructions+=1;goto B58d543;
case 0x58d545:goto L58d545;
case 0x58d548:c.instructions+=1;goto B58d548;
case 0x58d54a:goto L58d54a;
case 0x58d54c:c.instructions+=1;goto B58d54c;
case 0x58d54e:goto L58d54e;
case 0x58d551:c.instructions+=1;goto B58d551;
case 0x58d553:goto L58d553;
case 0x58d555:c.instructions+=1;goto B58d555;
case 0x58d557:goto L58d557;
case 0x58d55d:goto L58d55d;
case 0x58d560:c.instructions+=1;goto B58d560;
case 0x58d562:goto L58d562;
case 0x58d568:goto L58d568;
case 0x58d569:c.instructions+=5;goto B58d569;
case 0x58d56e:c.instructions+=4;goto B58d56e;
case 0x58d575:c.instructions+=3;goto B58d575;
case 0x58d57a:c.instructions+=2;goto B58d57a;
case 0x58d57b:c.instructions+=1;goto B58d57b;
case 0x58d580:goto L58d580;
case 0x58d583:c.instructions+=4;goto B58d583;
case 0x58d586:c.instructions+=3;goto B58d586;
case 0x58d588:c.instructions+=2;goto B58d588;
case 0x58d58a:c.instructions+=1;goto B58d58a;
case 0x58d58c:goto L58d58c;
case 0x58d591:goto L58d591;
case 0x58d592:c.instructions+=5;goto B58d592;
case 0x58d597:c.instructions+=4;goto B58d597;
case 0x58d59e:c.instructions+=3;goto B58d59e;
case 0x58d5a3:c.instructions+=2;goto B58d5a3;
case 0x58d5a4:c.instructions+=1;goto B58d5a4;
case 0x58d5a9:goto L58d5a9;
case 0x58d5ac:c.instructions+=3;goto B58d5ac;
case 0x58d5af:c.instructions+=2;goto B58d5af;
case 0x58d5b1:c.instructions+=1;goto B58d5b1;
case 0x58d5b3:goto L58d5b3;
case 0x58d5b6:c.instructions+=3;goto B58d5b6;
case 0x58d5b8:c.instructions+=2;goto B58d5b8;
case 0x58d5bb:c.instructions+=1;goto B58d5bb;
case 0x58d5bd:goto L58d5bd;
case 0x58d5be:c.instructions+=5;goto B58d5be;
case 0x58d5c3:c.instructions+=4;goto B58d5c3;
case 0x58d5ca:c.instructions+=3;goto B58d5ca;
case 0x58d5cf:c.instructions+=2;goto B58d5cf;
case 0x58d5d0:c.instructions+=1;goto B58d5d0;
case 0x58d5d5:goto L58d5d5;
case 0x58d5d8:goto L58d5d8;
case 0x58d5db:c.instructions+=4;goto B58d5db;
case 0x58d5dd:c.instructions+=3;goto B58d5dd;
case 0x58d5e2:c.instructions+=2;goto B58d5e2;
case 0x58d5e7:c.instructions+=1;goto B58d5e7;
case 0x58d5eb:goto L58d5eb;
case 0x58d5ed:goto L58d5ed;
case 0x58d5f1:c.instructions+=11;goto B58d5f1;
case 0x58d5f3:c.instructions+=10;goto B58d5f3;
case 0x58d5f4:c.instructions+=9;goto B58d5f4;
case 0x58d5f5:c.instructions+=8;goto B58d5f5;
case 0x58d5f9:c.instructions+=7;goto B58d5f9;
case 0x58d5fa:c.instructions+=6;goto B58d5fa;
case 0x58d5fb:c.instructions+=5;goto B58d5fb;
case 0x58d600:c.instructions+=4;goto B58d600;
case 0x58d604:c.instructions+=3;goto B58d604;
case 0x58d609:c.instructions+=2;goto B58d609;
case 0x58d60a:c.instructions+=1;goto B58d60a;
case 0x58d60f:goto L58d60f;
case 0x58d612:c.instructions+=3;goto B58d612;
case 0x58d615:c.instructions+=2;goto B58d615;
case 0x58d618:c.instructions+=1;goto B58d618;
case 0x58d61a:goto L58d61a;
case 0x58d61d:c.instructions+=6;goto B58d61d;
case 0x58d61e:c.instructions+=5;goto B58d61e;
case 0x58d623:c.instructions+=4;goto B58d623;
case 0x58d627:c.instructions+=3;goto B58d627;
case 0x58d62c:c.instructions+=2;goto B58d62c;
case 0x58d62d:c.instructions+=1;goto B58d62d;
case 0x58d632:goto L58d632;
case 0x58d635:c.instructions+=6;goto B58d635;
case 0x58d636:c.instructions+=5;goto B58d636;
case 0x58d63b:c.instructions+=4;goto B58d63b;
case 0x58d63f:c.instructions+=3;goto B58d63f;
case 0x58d644:c.instructions+=2;goto B58d644;
case 0x58d645:c.instructions+=1;goto B58d645;
case 0x58d64a:goto L58d64a;
case 0x58d64d:goto L58d64d;
case 0x58d651:c.instructions+=6;goto B58d651;
case 0x58d652:c.instructions+=5;goto B58d652;
case 0x58d657:c.instructions+=4;goto B58d657;
case 0x58d65e:c.instructions+=3;goto B58d65e;
case 0x58d663:c.instructions+=2;goto B58d663;
case 0x58d664:c.instructions+=1;goto B58d664;
case 0x58d669:goto L58d669;
case 0x58d66c:c.instructions+=12;goto B58d66c;
case 0x58d66f:c.instructions+=11;goto B58d66f;
case 0x58d673:c.instructions+=10;goto B58d673;
case 0x58d676:c.instructions+=9;goto B58d676;
case 0x58d678:c.instructions+=8;goto B58d678;
case 0x58d679:c.instructions+=7;goto B58d679;
case 0x58d67a:c.instructions+=6;goto B58d67a;
case 0x58d67b:c.instructions+=5;goto B58d67b;
case 0x58d680:c.instructions+=4;goto B58d680;
case 0x58d687:c.instructions+=3;goto B58d687;
case 0x58d688:c.instructions+=2;goto B58d688;
case 0x58d68d:c.instructions+=1;goto B58d68d;
case 0x58d692:goto L58d692;
case 0x58d694:c.instructions+=1;goto B58d694;
case 0x58d699:goto L58d699;
case 0x58d69a:c.instructions+=5;goto B58d69a;
case 0x58d69b:c.instructions+=4;goto B58d69b;
case 0x58d69c:c.instructions+=3;goto B58d69c;
case 0x58d69e:c.instructions+=2;goto B58d69e;
case 0x58d69f:c.instructions+=1;goto B58d69f;
case 0x58d6a2:goto L58d6a2;
case 0x58d6a3:c.instructions+=6;goto B58d6a3;
case 0x58d6a4:c.instructions+=5;goto B58d6a4;
case 0x58d6a7:c.instructions+=4;goto B58d6a7;
case 0x58d6a8:c.instructions+=3;goto B58d6a8;
case 0x58d6aa:c.instructions+=2;goto B58d6aa;
case 0x58d6ab:c.instructions+=1;goto B58d6ab;
case 0x58d6b0:goto L58d6b0;
case 0x58d6b3:c.instructions+=3;goto B58d6b3;
case 0x58d6b4:c.instructions+=2;goto B58d6b4;
case 0x58d6b6:c.instructions+=1;goto B58d6b6;
case 0x58d6bb:goto L58d6bb;
case 0x58d6be:c.instructions+=2;goto B58d6be;
case 0x58d6c0:c.instructions+=1;goto B58d6c0;
case 0x58d6c2:goto L58d6c2;
case 0x58d6c5:c.instructions+=3;goto B58d6c5;
case 0x58d6c6:c.instructions+=2;goto B58d6c6;
case 0x58d6c9:c.instructions+=1;goto B58d6c9;
case 0x58d6cc:goto L58d6cc;
case 0x58d6d0:c.instructions+=2;goto B58d6d0;
case 0x58d6d1:c.instructions+=1;goto B58d6d1;
case 0x58d6d7:goto L58d6d7;
case 0x58d6dc:goto L58d6dc;
case 0x58d6df:c.instructions+=2;goto B58d6df;
case 0x58d6e1:c.instructions+=1;goto B58d6e1;
case 0x58d6e3:goto L58d6e3;
case 0x58d6ea:c.instructions+=1;goto B58d6ea;
case 0x58d6ec:goto L58d6ec;
case 0x58d6ef:c.instructions+=1;goto B58d6ef;
case 0x58d6f1:goto L58d6f1;
case 0x58d6f4:c.instructions+=3;goto B58d6f4;
case 0x58d6f6:c.instructions+=2;goto B58d6f6;
case 0x58d6f8:c.instructions+=1;goto B58d6f8;
case 0x58d6fa:goto L58d6fa;
case 0x58d700:goto L58d700;
case 0x58d707:c.instructions+=1;goto B58d707;
case 0x58d709:goto L58d709;
case 0x58d70b:c.instructions+=2;goto B58d70b;
case 0x58d70d:c.instructions+=1;goto B58d70d;
case 0x58d70f:goto L58d70f;
case 0x58d711:goto L58d711;
case 0x58d714:goto L58d714;
case 0x58d717:c.instructions+=1;goto B58d717;
case 0x58d71d:goto L58d71d;
case 0x58d722:goto L58d722;
case 0x58d725:c.instructions+=3;goto B58d725;
case 0x58d727:c.instructions+=2;goto B58d727;
case 0x58d72c:c.instructions+=1;goto B58d72c;
case 0x58d72e:goto L58d72e;
case 0x58d731:c.instructions+=1;goto B58d731;
case 0x58d733:goto L58d733;
case 0x58d736:c.instructions+=1;goto B58d736;
case 0x58d738:goto L58d738;
case 0x58d73b:c.instructions+=3;goto B58d73b;
case 0x58d73d:c.instructions+=2;goto B58d73d;
case 0x58d73f:c.instructions+=1;goto B58d73f;
case 0x58d741:goto L58d741;
case 0x58d744:c.instructions+=1;goto B58d744;
case 0x58d746:goto L58d746;
case 0x58d748:c.instructions+=2;goto B58d748;
case 0x58d74a:c.instructions+=1;goto B58d74a;
case 0x58d74c:goto L58d74c;
case 0x58d74e:goto L58d74e;
case 0x58d751:goto L58d751;
case 0x58d754:c.instructions+=1;goto B58d754;
case 0x58d75a:goto L58d75a;
case 0x58d75f:goto L58d75f;
case 0x58d761:c.instructions+=1;goto B58d761;
case 0x58d766:goto L58d766;
case 0x58d768:c.instructions+=3;goto B58d768;
case 0x58d76d:c.instructions+=2;goto B58d76d;
case 0x58d772:c.instructions+=1;goto B58d772;
case 0x58d776:goto L58d776;
case 0x58d778:goto L58d778;
case 0x58d77a:c.instructions+=9;goto B58d77a;
case 0x58d77b:c.instructions+=8;goto B58d77b;
case 0x58d77f:c.instructions+=7;goto B58d77f;
case 0x58d780:c.instructions+=6;goto B58d780;
case 0x58d785:c.instructions+=5;goto B58d785;
case 0x58d789:c.instructions+=4;goto B58d789;
case 0x58d78b:c.instructions+=3;goto B58d78b;
case 0x58d78c:c.instructions+=2;goto B58d78c;
case 0x58d796:c.instructions+=1;goto B58d796;
case 0x58d79b:goto L58d79b;
case 0x58d7a2:c.instructions+=3;goto B58d7a2;
case 0x58d7a5:c.instructions+=2;goto B58d7a5;
case 0x58d7a7:c.instructions+=1;goto B58d7a7;
case 0x58d7a9:goto L58d7a9;
case 0x58d7ac:c.instructions+=1;goto B58d7ac;
case 0x58d7ae:goto L58d7ae;
case 0x58d7af:c.instructions+=5;goto B58d7af;
case 0x58d7b4:c.instructions+=4;goto B58d7b4;
case 0x58d7b8:c.instructions+=3;goto B58d7b8;
case 0x58d7ba:c.instructions+=2;goto B58d7ba;
case 0x58d7bb:c.instructions+=1;goto B58d7bb;
case 0x58d7c0:goto L58d7c0;
case 0x58d7c3:goto L58d7c3;
case 0x58d7c7:c.instructions+=10;goto B58d7c7;
case 0x58d7cb:c.instructions+=9;goto B58d7cb;
case 0x58d7cd:c.instructions+=8;goto B58d7cd;
case 0x58d7ce:c.instructions+=7;goto B58d7ce;
case 0x58d7cf:c.instructions+=6;goto B58d7cf;
case 0x58d7d0:c.instructions+=5;goto B58d7d0;
case 0x58d7d5:c.instructions+=4;goto B58d7d5;
case 0x58d7d9:c.instructions+=3;goto B58d7d9;
case 0x58d7da:c.instructions+=2;goto B58d7da;
case 0x58d7df:c.instructions+=1;goto B58d7df;
case 0x58d7e4:goto L58d7e4;
case 0x58d7e6:c.instructions+=1;goto B58d7e6;
case 0x58d7eb:goto L58d7eb;
case 0x58d7ec:c.instructions+=3;goto B58d7ec;
case 0x58d7ed:c.instructions+=2;goto B58d7ed;
case 0x58d7f0:c.instructions+=1;goto B58d7f0;
case 0x58d7f3:goto L58d7f3;
case 0x58d7f4:c.instructions+=4;goto B58d7f4;
case 0x58d7f7:c.instructions+=3;goto B58d7f7;
case 0x58d7f8:c.instructions+=2;goto B58d7f8;
case 0x58d7fb:c.instructions+=1;goto B58d7fb;
case 0x58d800:goto L58d800;
case 0x58d803:c.instructions+=3;goto B58d803;
case 0x58d804:c.instructions+=2;goto B58d804;
case 0x58d806:c.instructions+=1;goto B58d806;
case 0x58d80b:goto L58d80b;
case 0x58d80e:c.instructions+=2;goto B58d80e;
case 0x58d810:c.instructions+=1;goto B58d810;
case 0x58d816:goto L58d816;
case 0x58d81a:c.instructions+=1;goto B58d81a;
case 0x58d820:goto L58d820;
case 0x58d825:goto L58d825;
case 0x58d828:c.instructions+=2;goto B58d828;
case 0x58d82a:c.instructions+=1;goto B58d82a;
case 0x58d82c:goto L58d82c;
case 0x58d833:c.instructions+=1;goto B58d833;
case 0x58d835:goto L58d835;
case 0x58d838:c.instructions+=1;goto B58d838;
case 0x58d83a:goto L58d83a;
case 0x58d83d:c.instructions+=3;goto B58d83d;
case 0x58d83f:c.instructions+=2;goto B58d83f;
case 0x58d841:c.instructions+=1;goto B58d841;
case 0x58d843:goto L58d843;
case 0x58d84a:c.instructions+=1;goto B58d84a;
case 0x58d84c:goto L58d84c;
case 0x58d84e:c.instructions+=2;goto B58d84e;
case 0x58d850:c.instructions+=1;goto B58d850;
case 0x58d852:goto L58d852;
case 0x58d854:goto L58d854;
case 0x58d857:goto L58d857;
case 0x58d85a:c.instructions+=1;goto B58d85a;
case 0x58d860:goto L58d860;
case 0x58d865:goto L58d865;
case 0x58d868:c.instructions+=2;goto B58d868;
case 0x58d86a:c.instructions+=1;goto B58d86a;
case 0x58d86c:goto L58d86c;
case 0x58d873:c.instructions+=1;goto B58d873;
case 0x58d875:goto L58d875;
case 0x58d878:c.instructions+=1;goto B58d878;
case 0x58d87a:goto L58d87a;
case 0x58d87d:c.instructions+=3;goto B58d87d;
case 0x58d87f:c.instructions+=2;goto B58d87f;
case 0x58d881:c.instructions+=1;goto B58d881;
case 0x58d883:goto L58d883;
case 0x58d88a:c.instructions+=1;goto B58d88a;
case 0x58d88c:goto L58d88c;
case 0x58d88e:c.instructions+=2;goto B58d88e;
case 0x58d890:c.instructions+=1;goto B58d890;
case 0x58d892:goto L58d892;
case 0x58d894:goto L58d894;
case 0x58d897:goto L58d897;
case 0x58d89a:c.instructions+=1;goto B58d89a;
case 0x58d8a0:goto L58d8a0;
case 0x58d8a1:c.instructions+=4;goto B58d8a1;
case 0x58d8a3:c.instructions+=3;goto B58d8a3;
case 0x58d8a8:c.instructions+=2;goto B58d8a8;
case 0x58d8ad:c.instructions+=1;goto B58d8ad;
case 0x58d8b1:goto L58d8b1;
case 0x58d8b3:goto L58d8b3;
case 0x58d8b5:c.instructions+=8;goto B58d8b5;
case 0x58d8b6:c.instructions+=7;goto B58d8b6;
case 0x58d8b9:c.instructions+=6;goto B58d8b9;
case 0x58d8ba:c.instructions+=5;goto B58d8ba;
case 0x58d8bf:c.instructions+=4;goto B58d8bf;
case 0x58d8c3:c.instructions+=3;goto B58d8c3;
case 0x58d8c5:c.instructions+=2;goto B58d8c5;
case 0x58d8c6:c.instructions+=1;goto B58d8c6;
case 0x58d8cb:goto L58d8cb;
case 0x58d8ce:c.instructions+=4;goto B58d8ce;
case 0x58d8d1:c.instructions+=3;goto B58d8d1;
case 0x58d8d2:c.instructions+=2;goto B58d8d2;
case 0x58d8d7:c.instructions+=1;goto B58d8d7;
case 0x58d8dc:goto L58d8dc;
case 0x58d8dd:c.instructions+=1;goto B58d8dd;
case 0x58d8e2:goto L58d8e2;
case 0x58d8e6:c.instructions+=12;goto B58d8e6;
case 0x58d8e9:c.instructions+=11;goto B58d8e9;
case 0x58d8ea:c.instructions+=10;goto B58d8ea;
case 0x58d8ec:c.instructions+=9;goto B58d8ec;
case 0x58d8ee:c.instructions+=8;goto B58d8ee;
case 0x58d8f2:c.instructions+=7;goto B58d8f2;
case 0x58d8f3:c.instructions+=6;goto B58d8f3;
case 0x58d8f4:c.instructions+=5;goto B58d8f4;
case 0x58d8f5:c.instructions+=4;goto B58d8f5;
case 0x58d8f9:c.instructions+=3;goto B58d8f9;
case 0x58d8fe:c.instructions+=2;goto B58d8fe;
case 0x58d8ff:c.instructions+=1;goto B58d8ff;
case 0x58d901:goto L58d901;
case 0x58d906:c.instructions+=1;goto B58d906;
case 0x58d90b:goto L58d90b;
case 0x58d90d:c.instructions+=1;goto B58d90d;
case 0x58d912:goto L58d912;
case 0x58d913:c.instructions+=2;goto B58d913;
case 0x58d916:c.instructions+=1;goto B58d916;
case 0x58d919:goto L58d919;
case 0x58d91e:c.instructions+=1;goto B58d91e;
case 0x58d923:goto L58d923;
case 0x58d925:c.instructions+=1;goto B58d925;
case 0x58d92a:goto L58d92a;
case 0x58d92b:c.instructions+=2;goto B58d92b;
case 0x58d92e:c.instructions+=1;goto B58d92e;
case 0x58d931:goto L58d931;
case 0x58d934:c.instructions+=3;goto B58d934;
case 0x58d935:c.instructions+=2;goto B58d935;
case 0x58d938:c.instructions+=1;goto B58d938;
case 0x58d940:goto L58d940;
case 0x58d944:c.instructions+=2;goto B58d944;
case 0x58d945:c.instructions+=1;goto B58d945;
case 0x58d94a:goto L58d94a;
case 0x58d94c:c.instructions+=1;goto B58d94c;
case 0x58d94e:goto L58d94e;
case 0x58d954:c.instructions+=4;goto B58d954;
case 0x58d959:c.instructions+=3;goto B58d959;
case 0x58d95b:c.instructions+=2;goto B58d95b;
case 0x58d95e:c.instructions+=1;goto B58d95e;
case 0x58d961:goto L58d961;
case 0x58d963:c.instructions+=3;goto B58d963;
case 0x58d965:c.instructions+=2;goto B58d965;
case 0x58d968:c.instructions+=1;goto B58d968;
case 0x58d970:goto L58d970;
case 0x58d971:c.instructions+=5;goto B58d971;
case 0x58d972:c.instructions+=4;goto B58d972;
case 0x58d973:c.instructions+=3;goto B58d973;
case 0x58d974:c.instructions+=2;goto B58d974;
case 0x58d976:c.instructions+=1;goto B58d976;
case 0x58d97b:goto L58d97b;
case 0x58d97e:c.instructions+=2;goto B58d97e;
case 0x58d980:c.instructions+=1;goto B58d980;
case 0x58d982:goto L58d982;
case 0x58d986:c.instructions+=2;goto B58d986;
case 0x58d988:c.instructions+=1;goto B58d988;
case 0x58d98a:goto L58d98a;
case 0x58d98e:c.instructions+=1;goto B58d98e;
case 0x58d990:goto L58d990;
case 0x58d994:c.instructions+=3;goto B58d994;
case 0x58d995:c.instructions+=2;goto B58d995;
case 0x58d997:c.instructions+=1;goto B58d997;
case 0x58d99c:goto L58d99c;
case 0x58d99e:c.instructions+=2;goto B58d99e;
case 0x58d9a0:c.instructions+=1;goto B58d9a0;
case 0x58d9a2:goto L58d9a2;
case 0x58d9a8:c.instructions+=3;goto B58d9a8;
case 0x58d9aa:c.instructions+=2;goto B58d9aa;
case 0x58d9ac:c.instructions+=1;goto B58d9ac;
case 0x58d9ae:goto L58d9ae;
case 0x58d9b4:goto L58d9b4;
case 0x58d9b5:c.instructions+=2;goto B58d9b5;
case 0x58d9b6:c.instructions+=1;goto B58d9b6;
case 0x58d9bb:goto L58d9bb;
case 0x58d9be:c.instructions+=2;goto B58d9be;
case 0x58d9c0:c.instructions+=1;goto B58d9c0;
case 0x58d9c2:goto L58d9c2;
case 0x58d9c8:c.instructions+=4;goto B58d9c8;
case 0x58d9c9:c.instructions+=3;goto B58d9c9;
case 0x58d9cc:c.instructions+=2;goto B58d9cc;
case 0x58d9ce:c.instructions+=1;goto B58d9ce;
case 0x58d9d0:goto L58d9d0;
case 0x58d9d1:c.instructions+=5;goto B58d9d1;
case 0x58d9d2:c.instructions+=4;goto B58d9d2;
case 0x58d9d3:c.instructions+=3;goto B58d9d3;
case 0x58d9d5:c.instructions+=2;goto B58d9d5;
case 0x58d9d6:c.instructions+=1;goto B58d9d6;
case 0x58d9d9:goto L58d9d9;
case 0x58d9dc:c.instructions+=8;goto B58d9dc;
case 0x58d9e3:c.instructions+=7;goto B58d9e3;
case 0x58d9e4:c.instructions+=6;goto B58d9e4;
case 0x58d9e5:c.instructions+=5;goto B58d9e5;
case 0x58d9e8:c.instructions+=4;goto B58d9e8;
case 0x58d9e9:c.instructions+=3;goto B58d9e9;
case 0x58d9eb:c.instructions+=2;goto B58d9eb;
case 0x58d9ec:c.instructions+=1;goto B58d9ec;
case 0x58d9f0:goto L58d9f0;
case 0x58d9f1:c.instructions+=4;goto B58d9f1;
case 0x58d9f3:c.instructions+=3;goto B58d9f3;
case 0x58d9f5:c.instructions+=2;goto B58d9f5;
case 0x58d9fa:c.instructions+=1;goto B58d9fa;
case 0x58d9ff:goto L58d9ff;
case 0x58da00:c.instructions+=2;goto B58da00;
case 0x58da02:c.instructions+=1;goto B58da02;
case 0x58da07:goto L58da07;
case 0x58da08:c.instructions+=1;goto B58da08;
case 0x58da10:goto L58da10;
case 0x58da11:c.instructions+=7;goto B58da11;
case 0x58da12:c.instructions+=6;goto B58da12;
case 0x58da16:c.instructions+=5;goto B58da16;
case 0x58da18:c.instructions+=4;goto B58da18;
case 0x58da19:c.instructions+=3;goto B58da19;
case 0x58da1a:c.instructions+=2;goto B58da1a;
case 0x58da1c:c.instructions+=1;goto B58da1c;
case 0x58da1e:goto L58da1e;
case 0x58da22:c.instructions+=1;goto B58da22;
case 0x58da24:goto L58da24;
case 0x58da27:c.instructions+=2;goto B58da27;
case 0x58da29:c.instructions+=1;goto B58da29;
case 0x58da2b:goto L58da2b;
case 0x58da30:c.instructions+=1;goto B58da30;
case 0x58da35:goto L58da35;
case 0x58da36:c.instructions+=2;goto B58da36;
case 0x58da37:c.instructions+=1;goto B58da37;
case 0x58da3c:goto L58da3c;
case 0x58da3f:c.instructions+=2;goto B58da3f;
case 0x58da41:c.instructions+=1;goto B58da41;
case 0x58da43:goto L58da43;
case 0x58da44:c.instructions+=4;goto B58da44;
case 0x58da45:c.instructions+=3;goto B58da45;
case 0x58da46:c.instructions+=2;goto B58da46;
case 0x58da47:c.instructions+=1;goto B58da47;
case 0x58da4a:goto L58da4a;
case 0x58da50:c.instructions+=3;goto B58da50;
case 0x58da52:c.instructions+=2;goto B58da52;
case 0x58da54:c.instructions+=1;goto B58da54;
case 0x58da56:goto L58da56;
case 0x58da5c:c.instructions+=1;goto B58da5c;
case 0x58da60:goto L58da60;
case 0x58da61:c.instructions+=2;goto B58da61;
case 0x58da62:c.instructions+=1;goto B58da62;
case 0x58da67:goto L58da67;
case 0x58da6a:c.instructions+=2;goto B58da6a;
case 0x58da6c:c.instructions+=1;goto B58da6c;
case 0x58da6e:goto L58da6e;
case 0x58da74:c.instructions+=4;goto B58da74;
case 0x58da75:c.instructions+=3;goto B58da75;
case 0x58da78:c.instructions+=2;goto B58da78;
case 0x58da7a:c.instructions+=1;goto B58da7a;
case 0x58da7c:goto L58da7c;
case 0x58da7d:c.instructions+=5;goto B58da7d;
case 0x58da7e:c.instructions+=4;goto B58da7e;
case 0x58da7f:c.instructions+=3;goto B58da7f;
case 0x58da84:c.instructions+=2;goto B58da84;
case 0x58da85:c.instructions+=1;goto B58da85;
case 0x58da88:goto L58da88;
case 0x58da8c:c.instructions+=6;goto B58da8c;
case 0x58da90:c.instructions+=5;goto B58da90;
case 0x58da91:c.instructions+=4;goto B58da91;
case 0x58da92:c.instructions+=3;goto B58da92;
case 0x58da93:c.instructions+=2;goto B58da93;
case 0x58da95:c.instructions+=1;goto B58da95;
case 0x58da9a:goto L58da9a;
case 0x58da9b:c.instructions+=4;goto B58da9b;
case 0x58da9c:c.instructions+=3;goto B58da9c;
case 0x58da9d:c.instructions+=2;goto B58da9d;
case 0x58da9e:c.instructions+=1;goto B58da9e;
case 0x58dab0:goto L58dab0;
case 0x58dab3:c.instructions+=9;goto B58dab3;
case 0x58dab4:c.instructions+=8;goto B58dab4;
case 0x58dab8:c.instructions+=7;goto B58dab8;
case 0x58dabb:c.instructions+=6;goto B58dabb;
case 0x58dac0:c.instructions+=5;goto B58dac0;
case 0x58dac1:c.instructions+=4;goto B58dac1;
case 0x58dac2:c.instructions+=3;goto B58dac2;
case 0x58dac6:c.instructions+=2;goto B58dac6;
case 0x58dac7:c.instructions+=1;goto B58dac7;
case 0x58dacd:goto L58dacd;
case 0x58dad0:c.instructions+=3;goto B58dad0;
case 0x58dad3:c.instructions+=2;goto B58dad3;
case 0x58dad6:c.instructions+=1;goto B58dad6;
case 0x58dadc:goto L58dadc;
case 0x58dadf:c.instructions+=3;goto B58dadf;
case 0x58dae4:c.instructions+=2;goto B58dae4;
case 0x58dae5:c.instructions+=1;goto B58dae5;
case 0x58daea:goto L58daea;
case 0x58daed:c.instructions+=2;goto B58daed;
case 0x58daef:c.instructions+=1;goto B58daef;
case 0x58daf5:goto L58daf5;
case 0x58daf8:c.instructions+=3;goto B58daf8;
case 0x58daf9:c.instructions+=2;goto B58daf9;
case 0x58dafa:c.instructions+=1;goto B58dafa;
case 0x58daff:goto L58daff;
case 0x58db02:c.instructions+=2;goto B58db02;
case 0x58db03:c.instructions+=1;goto B58db03;
case 0x58db08:goto L58db08;
case 0x58db0a:c.instructions+=1;goto B58db0a;
case 0x58db0f:goto L58db0f;
case 0x58db14:c.instructions+=1;goto B58db14;
case 0x58db19:goto L58db19;
case 0x58db1c:c.instructions+=2;goto B58db1c;
case 0x58db1d:c.instructions+=1;goto B58db1d;
case 0x58db22:goto L58db22;
case 0x58db28:c.instructions+=3;goto B58db28;
case 0x58db2b:c.instructions+=2;goto B58db2b;
case 0x58db2d:c.instructions+=1;goto B58db2d;
case 0x58db2f:goto L58db2f;
case 0x58db31:c.instructions+=2;goto B58db31;
case 0x58db36:c.instructions+=1;goto B58db36;
case 0x58db38:goto L58db38;
case 0x58db3a:goto L58db3a;
case 0x58db3d:c.instructions+=3;goto B58db3d;
case 0x58db3f:c.instructions+=2;goto B58db3f;
case 0x58db46:c.instructions+=1;goto B58db46;
case 0x58db4c:goto L58db4c;
case 0x58db4f:c.instructions+=4;goto B58db4f;
case 0x58db50:c.instructions+=3;goto B58db50;
case 0x58db51:c.instructions+=2;goto B58db51;
case 0x58db53:c.instructions+=1;goto B58db53;
case 0x58db55:goto L58db55;
case 0x58db58:c.instructions+=6;goto B58db58;
case 0x58db59:c.instructions+=5;goto B58db59;
case 0x58db5a:c.instructions+=4;goto B58db5a;
case 0x58db5b:c.instructions+=3;goto B58db5b;
case 0x58db5c:c.instructions+=2;goto B58db5c;
case 0x58db5f:c.instructions+=1;goto B58db5f;
case 0x58db60:goto L58db60;
case 0x58db63:c.instructions+=2;goto B58db63;
case 0x58db65:c.instructions+=1;goto B58db65;
case 0x58db6b:goto L58db6b;
case 0x58db6e:c.instructions+=4;goto B58db6e;
case 0x58db6f:c.instructions+=3;goto B58db6f;
case 0x58db70:c.instructions+=2;goto B58db70;
case 0x58db72:c.instructions+=1;goto B58db72;
case 0x58db74:goto L58db74;
case 0x58db77:c.instructions+=6;goto B58db77;
case 0x58db78:c.instructions+=5;goto B58db78;
case 0x58db79:c.instructions+=4;goto B58db79;
case 0x58db7a:c.instructions+=3;goto B58db7a;
case 0x58db7b:c.instructions+=2;goto B58db7b;
case 0x58db7e:c.instructions+=1;goto B58db7e;
case 0x58db7f:goto L58db7f;
case 0x58db82:c.instructions+=2;goto B58db82;
case 0x58db84:c.instructions+=1;goto B58db84;
case 0x58db86:goto L58db86;
case 0x58db89:c.instructions+=4;goto B58db89;
case 0x58db8a:c.instructions+=3;goto B58db8a;
case 0x58db8c:c.instructions+=2;goto B58db8c;
case 0x58db8e:c.instructions+=1;goto B58db8e;
case 0x58db90:goto L58db90;
case 0x58db93:goto L58db93;
case 0x58db95:c.instructions+=2;goto B58db95;
case 0x58db9a:c.instructions+=1;goto B58db9a;
case 0x58db9c:goto L58db9c;
case 0x58db9e:goto L58db9e;
case 0x58db9f:c.instructions+=6;goto B58db9f;
case 0x58dba0:c.instructions+=5;goto B58dba0;
case 0x58dba7:c.instructions+=4;goto B58dba7;
case 0x58dba8:c.instructions+=3;goto B58dba8;
case 0x58dba9:c.instructions+=2;goto B58dba9;
case 0x58dbac:c.instructions+=1;goto B58dbac;
case 0x58dbad:goto L58dbad;
case 0x58dbb2:c.instructions+=1;goto B58dbb2;
case 0x58dbb8:goto L58dbb8;
case 0x58dbbb:c.instructions+=3;goto B58dbbb;
case 0x58dbbe:c.instructions+=2;goto B58dbbe;
case 0x58dbc1:c.instructions+=1;goto B58dbc1;
case 0x58dbc7:goto L58dbc7;
case 0x58dbcc:goto L58dbcc;
case 0x58dbce:c.instructions+=1;goto B58dbce;
case 0x58dbd3:goto L58dbd3;
case 0x58dbd6:c.instructions+=3;goto B58dbd6;
case 0x58dbd7:c.instructions+=2;goto B58dbd7;
case 0x58dbd8:c.instructions+=1;goto B58dbd8;
case 0x58dbdd:goto L58dbdd;
case 0x58dbe0:c.instructions+=1;goto B58dbe0;
case 0x58dbe5:goto L58dbe5;
case 0x58dbea:c.instructions+=1;goto B58dbea;
case 0x58dbef:goto L58dbef;
case 0x58dbf4:goto L58dbf4;
case 0x58dbfa:c.instructions+=3;goto B58dbfa;
case 0x58dbfb:c.instructions+=2;goto B58dbfb;
case 0x58dc00:c.instructions+=1;goto B58dc00;
case 0x58dc05:goto L58dc05;
case 0x58dc08:c.instructions+=1;goto B58dc08;
case 0x58dc0d:goto L58dc0d;
case 0x58dc13:c.instructions+=2;goto B58dc13;
case 0x58dc19:c.instructions+=1;goto B58dc19;
case 0x58dc1e:goto L58dc1e;
case 0x58dc23:c.instructions+=1;goto B58dc23;
case 0x58dc28:goto L58dc28;
case 0x58dc29:c.instructions+=2;goto B58dc29;
case 0x58dc2e:c.instructions+=1;goto B58dc2e;
case 0x58dc33:goto L58dc33;
case 0x58dc39:c.instructions+=4;goto B58dc39;
case 0x58dc3c:c.instructions+=3;goto B58dc3c;
case 0x58dc3e:c.instructions+=2;goto B58dc3e;
case 0x58dc40:c.instructions+=1;goto B58dc40;
case 0x58dc42:goto L58dc42;
case 0x58dc47:c.instructions+=2;goto B58dc47;
case 0x58dc4d:c.instructions+=1;goto B58dc4d;
case 0x58dc50:goto L58dc50;
case 0x58dc55:goto L58dc55;
case 0x58dc56:c.instructions+=2;goto B58dc56;
case 0x58dc57:c.instructions+=1;goto B58dc57;
case 0x58dc5c:goto L58dc5c;
case 0x58dc62:c.instructions+=6;goto B58dc62;
case 0x58dc65:c.instructions+=5;goto B58dc65;
case 0x58dc66:c.instructions+=4;goto B58dc66;
case 0x58dc69:c.instructions+=3;goto B58dc69;
case 0x58dc6c:c.instructions+=2;goto B58dc6c;
case 0x58dc6e:c.instructions+=1;goto B58dc6e;
case 0x58dc70:goto L58dc70;
case 0x58dc74:goto L58dc74;
case 0x58dc7a:c.instructions+=6;goto B58dc7a;
case 0x58dc7b:c.instructions+=5;goto B58dc7b;
case 0x58dc81:c.instructions+=4;goto B58dc81;
case 0x58dc87:c.instructions+=3;goto B58dc87;
case 0x58dc89:c.instructions+=2;goto B58dc89;
case 0x58dc91:c.instructions+=1;goto B58dc91;
case 0x58dc97:goto L58dc97;
case 0x58dc9c:c.instructions+=6;goto B58dc9c;
case 0x58dca1:c.instructions+=5;goto B58dca1;
case 0x58dca3:c.instructions+=4;goto B58dca3;
case 0x58dca7:c.instructions+=3;goto B58dca7;
case 0x58dcad:c.instructions+=2;goto B58dcad;
case 0x58dcb1:c.instructions+=1;goto B58dcb1;
case 0x58dcb3:goto L58dcb3;
case 0x58dcb7:c.instructions+=2;goto B58dcb7;
case 0x58dcbb:c.instructions+=1;goto B58dcbb;
case 0x58dcc0:goto L58dcc0;
case 0x58dcc2:c.instructions+=7;goto B58dcc2;
case 0x58dcc6:c.instructions+=6;goto B58dcc6;
case 0x58dcca:c.instructions+=5;goto B58dcca;
case 0x58dcce:c.instructions+=4;goto B58dcce;
case 0x58dcd2:c.instructions+=3;goto B58dcd2;
case 0x58dcd6:c.instructions+=2;goto B58dcd6;
case 0x58dcda:c.instructions+=1;goto B58dcda;
case 0x58dcdc:goto L58dcdc;
case 0x58dce2:c.instructions+=1;goto B58dce2;
case 0x58dce4:goto L58dce4;
case 0x58dce8:c.instructions+=2;goto B58dce8;
case 0x58dcee:c.instructions+=1;goto B58dcee;
case 0x58dcf0:goto L58dcf0;
case 0x58dcf5:c.instructions+=1;goto B58dcf5;
case 0x58dcfa:goto L58dcfa;
case 0x58dcfd:c.instructions+=2;goto B58dcfd;
case 0x58dcfe:c.instructions+=1;goto B58dcfe;
case 0x58dd03:goto L58dd03;
case 0x58dd06:c.instructions+=2;goto B58dd06;
case 0x58dd08:c.instructions+=1;goto B58dd08;
case 0x58dd0a:goto L58dd0a;
case 0x58dd0f:c.instructions+=5;goto B58dd0f;
case 0x58dd10:c.instructions+=4;goto B58dd10;
case 0x58dd14:c.instructions+=3;goto B58dd14;
case 0x58dd16:c.instructions+=2;goto B58dd16;
case 0x58dd17:c.instructions+=1;goto B58dd17;
case 0x58dd1c:goto L58dd1c;
case 0x58dd20:c.instructions+=8;goto B58dd20;
case 0x58dd22:c.instructions+=7;goto B58dd22;
case 0x58dd29:c.instructions+=6;goto B58dd29;
case 0x58dd2c:c.instructions+=5;goto B58dd2c;
case 0x58dd2e:c.instructions+=4;goto B58dd2e;
case 0x58dd31:c.instructions+=3;goto B58dd31;
case 0x58dd33:c.instructions+=2;goto B58dd33;
case 0x58dd36:c.instructions+=1;goto B58dd36;
case 0x58dd38:goto L58dd38;
case 0x58dd3a:goto L58dd3a;
case 0x58dd3b:c.instructions+=3;goto B58dd3b;
case 0x58dd3f:c.instructions+=2;goto B58dd3f;
case 0x58dd40:c.instructions+=1;goto B58dd40;
case 0x58dd45:goto L58dd45;
case 0x58dd4b:c.instructions+=4;goto B58dd4b;
case 0x58dd50:c.instructions+=3;goto B58dd50;
case 0x58dd54:c.instructions+=2;goto B58dd54;
case 0x58dd56:c.instructions+=1;goto B58dd56;
case 0x58dd59:goto L58dd59;
case 0x58dd5b:goto L58dd5b;
case 0x58dd5f:c.instructions+=3;goto B58dd5f;
case 0x58dd60:c.instructions+=2;goto B58dd60;
case 0x58dd61:c.instructions+=1;goto B58dd61;
case 0x58dd66:goto L58dd66;
case 0x58dd6a:c.instructions+=9;goto B58dd6a;
case 0x58dd70:c.instructions+=8;goto B58dd70;
case 0x58dd73:c.instructions+=7;goto B58dd73;
case 0x58dd74:c.instructions+=6;goto B58dd74;
case 0x58dd77:c.instructions+=5;goto B58dd77;
case 0x58dd7a:c.instructions+=4;goto B58dd7a;
case 0x58dd7c:c.instructions+=3;goto B58dd7c;
case 0x58dd80:c.instructions+=2;goto B58dd80;
case 0x58dd84:c.instructions+=1;goto B58dd84;
case 0x58dd8a:goto L58dd8a;
case 0x58dd8e:goto L58dd8e;
case 0x58dd93:c.instructions+=1;goto B58dd93;
case 0x58dd98:goto L58dd98;
case 0x58dd99:c.instructions+=3;goto B58dd99;
case 0x58dd9c:c.instructions+=2;goto B58dd9c;
case 0x58dd9d:c.instructions+=1;goto B58dd9d;
case 0x58dda2:goto L58dda2;
case 0x58dda5:c.instructions+=4;goto B58dda5;
case 0x58dda7:c.instructions+=3;goto B58dda7;
case 0x58dda9:c.instructions+=2;goto B58dda9;
case 0x58ddab:c.instructions+=1;goto B58ddab;
case 0x58ddb0:goto L58ddb0;
case 0x58ddb2:c.instructions+=8;goto B58ddb2;
case 0x58ddb9:c.instructions+=7;goto B58ddb9;
case 0x58ddbb:c.instructions+=6;goto B58ddbb;
case 0x58ddbe:c.instructions+=5;goto B58ddbe;
case 0x58ddc1:c.instructions+=4;goto B58ddc1;
case 0x58ddc4:c.instructions+=3;goto B58ddc4;
case 0x58ddc7:c.instructions+=2;goto B58ddc7;
case 0x58ddcd:c.instructions+=1;goto B58ddcd;
case 0x58ddcf:goto L58ddcf;
case 0x58ddd1:c.instructions+=1;goto B58ddd1;
case 0x58ddd3:goto L58ddd3;
case 0x58ddd9:c.instructions+=3;goto B58ddd9;
case 0x58dddb:c.instructions+=2;goto B58dddb;
case 0x58dddd:c.instructions+=1;goto B58dddd;
case 0x58dddf:goto L58dddf;
case 0x58dde1:goto L58dde1;
case 0x58dde6:c.instructions+=1;goto B58dde6;
case 0x58ddeb:goto L58ddeb;
case 0x58dded:c.instructions+=5;goto B58dded;
case 0x58ddf0:c.instructions+=4;goto B58ddf0;
case 0x58ddf1:c.instructions+=3;goto B58ddf1;
case 0x58ddf8:c.instructions+=2;goto B58ddf8;
case 0x58ddf9:c.instructions+=1;goto B58ddf9;
case 0x58ddfe:goto L58ddfe;
case 0x58de01:c.instructions+=2;goto B58de01;
case 0x58de03:c.instructions+=1;goto B58de03;
case 0x58de05:goto L58de05;
case 0x58de07:c.instructions+=6;goto B58de07;
case 0x58de0e:c.instructions+=5;goto B58de0e;
case 0x58de11:c.instructions+=4;goto B58de11;
case 0x58de18:c.instructions+=3;goto B58de18;
case 0x58de19:c.instructions+=2;goto B58de19;
case 0x58de1a:c.instructions+=1;goto B58de1a;
case 0x58de1f:goto L58de1f;
case 0x58de22:goto L58de22;
case 0x58de28:c.instructions+=4;goto B58de28;
case 0x58de2a:c.instructions+=3;goto B58de2a;
case 0x58de2d:c.instructions+=2;goto B58de2d;
case 0x58de2f:c.instructions+=1;goto B58de2f;
case 0x58de31:goto L58de31;
case 0x58de34:c.instructions+=2;goto B58de34;
case 0x58de36:c.instructions+=1;goto B58de36;
case 0x58de3c:goto L58de3c;
case 0x58de3f:c.instructions+=4;goto B58de3f;
case 0x58de40:c.instructions+=3;goto B58de40;
case 0x58de41:c.instructions+=2;goto B58de41;
case 0x58de43:c.instructions+=1;goto B58de43;
case 0x58de45:goto L58de45;
case 0x58de48:c.instructions+=6;goto B58de48;
case 0x58de49:c.instructions+=5;goto B58de49;
case 0x58de4a:c.instructions+=4;goto B58de4a;
case 0x58de4b:c.instructions+=3;goto B58de4b;
case 0x58de4c:c.instructions+=2;goto B58de4c;
case 0x58de4f:c.instructions+=1;goto B58de4f;
case 0x58de50:goto L58de50;
case 0x58de55:c.instructions+=1;goto B58de55;
case 0x58de5b:goto L58de5b;
case 0x58de5e:c.instructions+=2;goto B58de5e;
case 0x58de60:c.instructions+=1;goto B58de60;
case 0x58de66:goto L58de66;
case 0x58de68:c.instructions+=2;goto B58de68;
case 0x58de6d:c.instructions+=1;goto B58de6d;
case 0x58de72:goto L58de72;
case 0x58de74:goto L58de74;
case 0x58de76:c.instructions+=2;goto B58de76;
case 0x58de7b:c.instructions+=1;goto B58de7b;
case 0x58de80:goto L58de80;
case 0x58de82:c.instructions+=10;goto B58de82;
case 0x58de86:c.instructions+=9;goto B58de86;
case 0x58de87:c.instructions+=8;goto B58de87;
case 0x58de8b:c.instructions+=7;goto B58de8b;
case 0x58de8f:c.instructions+=6;goto B58de8f;
case 0x58de94:c.instructions+=5;goto B58de94;
case 0x58de99:c.instructions+=4;goto B58de99;
case 0x58de9a:c.instructions+=3;goto B58de9a;
case 0x58de9f:c.instructions+=2;goto B58de9f;
case 0x58dea3:c.instructions+=1;goto B58dea3;
case 0x58dea8:goto L58dea8;
case 0x58deab:c.instructions+=8;goto B58deab;
case 0x58deae:c.instructions+=7;goto B58deae;
case 0x58deb3:c.instructions+=6;goto B58deb3;
case 0x58deb5:c.instructions+=5;goto B58deb5;
case 0x58deb6:c.instructions+=4;goto B58deb6;
case 0x58deba:c.instructions+=3;goto B58deba;
case 0x58debb:c.instructions+=2;goto B58debb;
case 0x58debc:c.instructions+=1;goto B58debc;
case 0x58dec1:goto L58dec1;
case 0x58dec4:c.instructions+=2;goto B58dec4;
case 0x58dec5:c.instructions+=1;goto B58dec5;
case 0x58deca:goto L58deca;
case 0x58decb:c.instructions+=4;goto B58decb;
case 0x58decf:c.instructions+=3;goto B58decf;
case 0x58ded4:c.instructions+=2;goto B58ded4;
case 0x58ded5:c.instructions+=1;goto B58ded5;
case 0x58deda:goto L58deda;
case 0x58dedd:c.instructions+=6;goto B58dedd;
case 0x58dee0:c.instructions+=5;goto B58dee0;
case 0x58dee2:c.instructions+=4;goto B58dee2;
case 0x58dee6:c.instructions+=3;goto B58dee6;
case 0x58dee7:c.instructions+=2;goto B58dee7;
case 0x58dee8:c.instructions+=1;goto B58dee8;
case 0x58deed:goto L58deed;
case 0x58def0:c.instructions+=2;goto B58def0;
case 0x58def1:c.instructions+=1;goto B58def1;
case 0x58def6:goto L58def6;
case 0x58def9:c.instructions+=6;goto B58def9;
case 0x58defb:c.instructions+=5;goto B58defb;
case 0x58df02:c.instructions+=4;goto B58df02;
case 0x58df05:c.instructions+=3;goto B58df05;
case 0x58df0a:c.instructions+=2;goto B58df0a;
case 0x58df0b:c.instructions+=1;goto B58df0b;
case 0x58df10:goto L58df10;
case 0x58df13:c.instructions+=2;goto B58df13;
case 0x58df14:c.instructions+=1;goto B58df14;
case 0x58df19:goto L58df19;
case 0x58df1c:c.instructions+=5;goto B58df1c;
case 0x58df1f:c.instructions+=4;goto B58df1f;
case 0x58df20:c.instructions+=3;goto B58df20;
case 0x58df26:c.instructions+=2;goto B58df26;
case 0x58df2b:c.instructions+=1;goto B58df2b;
case 0x58df31:goto L58df31;
case 0x58df38:c.instructions+=4;goto B58df38;
case 0x58df3b:c.instructions+=3;goto B58df3b;
case 0x58df3c:c.instructions+=2;goto B58df3c;
case 0x58df41:c.instructions+=1;goto B58df41;
case 0x58df44:goto L58df44;
case 0x58df47:c.instructions+=6;goto B58df47;
case 0x58df48:c.instructions+=5;goto B58df48;
case 0x58df49:c.instructions+=4;goto B58df49;
case 0x58df4a:c.instructions+=3;goto B58df4a;
case 0x58df4b:c.instructions+=2;goto B58df4b;
case 0x58df4e:c.instructions+=1;goto B58df4e;
case 0x58df4f:goto L58df4f;
case 0x58df54:c.instructions+=1;goto B58df54;
case 0x58df5a:goto L58df5a;
case 0x58df5d:c.instructions+=2;goto B58df5d;
case 0x58df5f:c.instructions+=1;goto B58df5f;
case 0x58df65:goto L58df65;
case 0x58df67:c.instructions+=2;goto B58df67;
case 0x58df6c:c.instructions+=1;goto B58df6c;
case 0x58df71:goto L58df71;
case 0x58df73:goto L58df73;
case 0x58df75:c.instructions+=13;goto B58df75;
case 0x58df7a:c.instructions+=12;goto B58df7a;
case 0x58df80:c.instructions+=11;goto B58df80;
case 0x58df82:c.instructions+=10;goto B58df82;
case 0x58df86:c.instructions+=9;goto B58df86;
case 0x58df87:c.instructions+=8;goto B58df87;
case 0x58df8b:c.instructions+=7;goto B58df8b;
case 0x58df8f:c.instructions+=6;goto B58df8f;
case 0x58df94:c.instructions+=5;goto B58df94;
case 0x58df99:c.instructions+=4;goto B58df99;
case 0x58df9a:c.instructions+=3;goto B58df9a;
case 0x58df9f:c.instructions+=2;goto B58df9f;
case 0x58dfa3:c.instructions+=1;goto B58dfa3;
case 0x58dfa8:goto L58dfa8;
case 0x58dfab:c.instructions+=8;goto B58dfab;
case 0x58dfae:c.instructions+=7;goto B58dfae;
case 0x58dfb3:c.instructions+=6;goto B58dfb3;
case 0x58dfb5:c.instructions+=5;goto B58dfb5;
case 0x58dfb6:c.instructions+=4;goto B58dfb6;
case 0x58dfba:c.instructions+=3;goto B58dfba;
case 0x58dfbb:c.instructions+=2;goto B58dfbb;
case 0x58dfbc:c.instructions+=1;goto B58dfbc;
case 0x58dfc1:goto L58dfc1;
case 0x58dfc4:c.instructions+=2;goto B58dfc4;
case 0x58dfc5:c.instructions+=1;goto B58dfc5;
case 0x58dfca:goto L58dfca;
case 0x58dfcd:c.instructions+=2;goto B58dfcd;
case 0x58dfcf:c.instructions+=1;goto B58dfcf;
case 0x58dfd1:goto L58dfd1;
case 0x58dfd2:c.instructions+=4;goto B58dfd2;
case 0x58dfd6:c.instructions+=3;goto B58dfd6;
case 0x58dfdb:c.instructions+=2;goto B58dfdb;
case 0x58dfdc:c.instructions+=1;goto B58dfdc;
case 0x58dfe1:goto L58dfe1;
case 0x58dfe4:c.instructions+=9;goto B58dfe4;
case 0x58dfe7:c.instructions+=8;goto B58dfe7;
case 0x58dfec:c.instructions+=7;goto B58dfec;
case 0x58dfee:c.instructions+=6;goto B58dfee;
case 0x58dff2:c.instructions+=5;goto B58dff2;
case 0x58dff3:c.instructions+=4;goto B58dff3;
case 0x58dff7:c.instructions+=3;goto B58dff7;
case 0x58dff8:c.instructions+=2;goto B58dff8;
case 0x58dff9:c.instructions+=1;goto B58dff9;
case 0x58dffe:goto L58dffe;
default:missing_instruction(c.pc);}
B58d000:L58d000:{c.instructions+=6;NFSU2_TR(0x58d000);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x866654ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58d006:{NFSU2_TR(0x58d006);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B58d008:{NFSU2_TR(0x58d008);
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
B58d00a:{NFSU2_TR(0x58d00a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58d00e:{NFSU2_TR(0x58d00e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B58d012:{NFSU2_TR(0x58d012);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L58d01a;}}
}
B58d014:L58d014:{c.instructions+=1;NFSU2_TR(0x58d014);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B58d01a:L58d01a:{c.instructions+=6;NFSU2_TR(0x58d01a);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B58d01c:{NFSU2_TR(0x58d01c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58d01d:{NFSU2_TR(0x58d01d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58d01e:{NFSU2_TR(0x58d01e);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B58d024:{NFSU2_TR(0x58d024);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B58d025:{NFSU2_TR(0x58d025);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58d030:L58d030:{c.instructions+=5;NFSU2_TR(0x58d030);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d031:{NFSU2_TR(0x58d031);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d032:{NFSU2_TR(0x58d032);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d033:{NFSU2_TR(0x58d033);
__builtin_memmove((R+20),(R+4),4);
}
B58d035:{NFSU2_TR(0x58d035);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d03aull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58d03a:L58d03a:{c.instructions+=3;NFSU2_TR(0x58d03a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B58d03d:{NFSU2_TR(0x58d03d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58d03f:{NFSU2_TR(0x58d03f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58d04a;}}
}
B58d041:L58d041:{c.instructions+=5;NFSU2_TR(0x58d041);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58d042:{NFSU2_TR(0x58d042);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58d043:{NFSU2_TR(0x58d043);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58d046:{NFSU2_TR(0x58d046);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58d047:{NFSU2_TR(0x58d047);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58d04a:L58d04a:{c.instructions+=4;NFSU2_TR(0x58d04a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d04b:{NFSU2_TR(0x58d04b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B58d04f:{NFSU2_TR(0x58d04f);
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
B58d051:{NFSU2_TR(0x58d051);
if(r1(R+518)){{goto L58d0b9;}}
}
B58d053:L58d053:{c.instructions+=2;NFSU2_TR(0x58d053);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x0ull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B58d056:{NFSU2_TR(0x58d056);
if(r1(R+518)){{goto L58d0b9;}}
}
B58d058:L58d058:{c.instructions+=4;NFSU2_TR(0x58d058);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58d05b:{NFSU2_TR(0x58d05b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58d05e:{NFSU2_TR(0x58d05e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58d060:{NFSU2_TR(0x58d060);
if(r1(R+518)){{goto L58d089;}}
}
B58d062:L58d062:{c.instructions+=4;NFSU2_TR(0x58d062);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B58d065:{NFSU2_TR(0x58d065);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d066:{NFSU2_TR(0x58d066);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d067:{NFSU2_TR(0x58d067);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d06cull));
TAIL_STATIC(0x43dcc0u,43d);
}
B58d06c:L58d06c:{c.instructions+=3;NFSU2_TR(0x58d06c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58d06f:{NFSU2_TR(0x58d06f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58d071:{NFSU2_TR(0x58d071);
if(r1(R+518)){{goto L58d07b;}}
}
B58d073:L58d073:{c.instructions+=3;NFSU2_TR(0x58d073);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B58d075:{NFSU2_TR(0x58d075);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58d077:{NFSU2_TR(0x58d077);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58d062u);}goto L58d062;}}
}
B58d079:L58d079:{c.instructions+=1;NFSU2_TR(0x58d079);
{goto L58d085;}
}
B58d07b:L58d07b:{c.instructions+=4;NFSU2_TR(0x58d07b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B58d07d:{NFSU2_TR(0x58d07d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58d080:{NFSU2_TR(0x58d080);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B58d082:{NFSU2_TR(0x58d082);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58d085:L58d085:{c.instructions+=2;NFSU2_TR(0x58d085);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58d087:{NFSU2_TR(0x58d087);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58d092;}}
}
B58d089:L58d089:{c.instructions+=6;NFSU2_TR(0x58d089);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58d08a:{NFSU2_TR(0x58d08a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58d08b:{NFSU2_TR(0x58d08b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58d08c:{NFSU2_TR(0x58d08c);
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
B58d08e:{NFSU2_TR(0x58d08e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58d08f:{NFSU2_TR(0x58d08f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58d092:L58d092:{c.instructions+=3;NFSU2_TR(0x58d092);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d093:{NFSU2_TR(0x58d093);
__builtin_memmove((R+4),(R+20),4);
}
B58d095:{NFSU2_TR(0x58d095);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d09aull));
TAIL_STATIC(0x58a5b0u,58a);
}
B58d09a:L58d09a:{c.instructions+=3;NFSU2_TR(0x58d09a);
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
B58d09c:{NFSU2_TR(0x58d09c);
__builtin_memmove((R+28),(R+0),4);
}
B58d09e:{NFSU2_TR(0x58d09e);
if(r1(R+518)){{goto L58d0b0;}}
}
B58d0a0:L58d0a0:{c.instructions+=2;NFSU2_TR(0x58d0a0);
__builtin_memmove((R+4),(R+24),4);
}
B58d0a2:{NFSU2_TR(0x58d0a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d0a7ull));
TAIL_STATIC(0x584b40u,584);
}
B58d0a7:L58d0a7:{c.instructions+=2;NFSU2_TR(0x58d0a7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d0a8:{NFSU2_TR(0x58d0a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d0adull));
TAIL_STATIC(0x575630u,575);
}
B58d0ad:L58d0ad:{c.instructions+=1;NFSU2_TR(0x58d0ad);
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
B58d0b0:L58d0b0:{c.instructions+=6;NFSU2_TR(0x58d0b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58d0b1:{NFSU2_TR(0x58d0b1);
__builtin_memmove((R+0),(R+28),4);
}
B58d0b3:{NFSU2_TR(0x58d0b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58d0b4:{NFSU2_TR(0x58d0b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58d0b5:{NFSU2_TR(0x58d0b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58d0b6:{NFSU2_TR(0x58d0b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58d0b9:L58d0b9:{c.instructions+=6;NFSU2_TR(0x58d0b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58d0ba:{NFSU2_TR(0x58d0ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58d0bb:{NFSU2_TR(0x58d0bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58d0bc:{NFSU2_TR(0x58d0bc);
w4(R+0,u32(0xffffffecull));
}
B58d0c1:{NFSU2_TR(0x58d0c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58d0c2:{NFSU2_TR(0x58d0c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58d0d0:L58d0d0:{c.instructions+=3;NFSU2_TR(0x58d0d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d0d1:{NFSU2_TR(0x58d0d1);
__builtin_memmove((R+12),(R+4),4);
}
B58d0d3:{NFSU2_TR(0x58d0d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d0d8ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58d0d8:L58d0d8:{c.instructions+=3;NFSU2_TR(0x58d0d8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B58d0db:{NFSU2_TR(0x58d0db);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58d0dd:{NFSU2_TR(0x58d0dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58d0e4;}}
}
B58d0df:L58d0df:{c.instructions+=3;NFSU2_TR(0x58d0df);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58d0e2:{NFSU2_TR(0x58d0e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58d0e3:{NFSU2_TR(0x58d0e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58d0e4:L58d0e4:{c.instructions+=4;NFSU2_TR(0x58d0e4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d0e5:{NFSU2_TR(0x58d0e5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d0e6:{NFSU2_TR(0x58d0e6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d0e7:{NFSU2_TR(0x58d0e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d0ecull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58d0ec:L58d0ec:{c.instructions+=6;NFSU2_TR(0x58d0ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58d0ef:{NFSU2_TR(0x58d0ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58d0f6:{NFSU2_TR(0x58d0f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B58d0f8:{NFSU2_TR(0x58d0f8);
w4(R+20,u32(u32(r4(R+20))|u32(u32(0xffffffffull))));
}
B58d0fb:{NFSU2_TR(0x58d0fb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58d0fd:{NFSU2_TR(0x58d0fd);
if(r1(R+518)){{goto L58d134;}}
}
B58d0ff:L58d0ff:{c.instructions+=1;NFSU2_TR(0x58d0ff);
}
B58d100:L58d100:{c.instructions+=3;NFSU2_TR(0x58d100);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d101:{NFSU2_TR(0x58d101);
__builtin_memmove((R+4),(R+12),4);
}
B58d103:{NFSU2_TR(0x58d103);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d108ull));
TAIL_STATIC(0x58a5b0u,58a);
}
B58d108:L58d108:{c.instructions+=2;NFSU2_TR(0x58d108);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58d10a:{NFSU2_TR(0x58d10a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L58d10e;}}
}
B58d10c:L58d10c:{c.instructions+=1;NFSU2_TR(0x58d10c);
__builtin_memmove((R+20),(R+0),4);
}
B58d10e:L58d10e:{c.instructions+=7;NFSU2_TR(0x58d10e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58d110:{NFSU2_TR(0x58d110);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B58d112:{NFSU2_TR(0x58d112);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B58d114:{NFSU2_TR(0x58d114);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58d117:{NFSU2_TR(0x58d117);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B58d119:{NFSU2_TR(0x58d119);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58d11c:{NFSU2_TR(0x58d11c);
if(r1(R+518)){{goto L58d12e;}}
}
B58d11e:L58d11e:{c.instructions+=2;NFSU2_TR(0x58d11e);
__builtin_memmove((R+4),(R+24),4);
}
B58d120:{NFSU2_TR(0x58d120);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d125ull));
TAIL_STATIC(0x584b40u,584);
}
B58d125:L58d125:{c.instructions+=2;NFSU2_TR(0x58d125);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d126:{NFSU2_TR(0x58d126);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d12bull));
TAIL_STATIC(0x575630u,575);
}
B58d12b:L58d12b:{c.instructions+=1;NFSU2_TR(0x58d12b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58d12e:L58d12e:{c.instructions+=3;NFSU2_TR(0x58d12e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B58d130:{NFSU2_TR(0x58d130);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58d132:{NFSU2_TR(0x58d132);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58d100u);}goto L58d100;}}
}
B58d134:L58d134:{c.instructions+=1;NFSU2_TR(0x58d134);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d139ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58d139:L58d139:{c.instructions+=7;NFSU2_TR(0x58d139);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58d13a:{NFSU2_TR(0x58d13a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58d13b:{NFSU2_TR(0x58d13b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58d142:{NFSU2_TR(0x58d142);
__builtin_memmove((R+0),(R+20),4);
}
B58d144:{NFSU2_TR(0x58d144);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58d145:{NFSU2_TR(0x58d145);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58d146:{NFSU2_TR(0x58d146);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58d150:L58d150:{c.instructions+=7;NFSU2_TR(0x58d150);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d151:{NFSU2_TR(0x58d151);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d152:{NFSU2_TR(0x58d152);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d153:{NFSU2_TR(0x58d153);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d154:{NFSU2_TR(0x58d154);
__builtin_memmove((R+28),(R+4),4);
}
B58d156:{NFSU2_TR(0x58d156);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58d15a:{NFSU2_TR(0x58d15a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d15full));
TAIL_STATIC(0x58a0e0u,58a);
}
B58d15f:L58d15f:{c.instructions+=3;NFSU2_TR(0x58d15f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B58d162:{NFSU2_TR(0x58d162);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58d164:{NFSU2_TR(0x58d164);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58d170;}}
}
B58d166:L58d166:{c.instructions+=6;NFSU2_TR(0x58d166);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58d167:{NFSU2_TR(0x58d167);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58d168:{NFSU2_TR(0x58d168);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58d16b:{NFSU2_TR(0x58d16b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58d16c:{NFSU2_TR(0x58d16c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B58d16d:{NFSU2_TR(0x58d16d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58d170:L58d170:{c.instructions+=4;NFSU2_TR(0x58d170);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d171:{NFSU2_TR(0x58d171);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B58d175:{NFSU2_TR(0x58d175);
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
B58d177:{NFSU2_TR(0x58d177);
if(r1(R+518)){{goto L58d20c;}}
}
B58d17d:L58d17d:{c.instructions+=2;NFSU2_TR(0x58d17d);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x0ull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B58d180:{NFSU2_TR(0x58d180);
if(r1(R+518)){{goto L58d20c;}}
}
B58d186:L58d186:{c.instructions+=3;NFSU2_TR(0x58d186);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58d18a:{NFSU2_TR(0x58d18a);
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
B58d18c:{NFSU2_TR(0x58d18c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L58d20c;}}
}
B58d192:L58d192:{c.instructions+=2;NFSU2_TR(0x58d192);
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
B58d195:{NFSU2_TR(0x58d195);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L58d20c;}}
}
B58d197:L58d197:{c.instructions+=5;NFSU2_TR(0x58d197);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58d19a:{NFSU2_TR(0x58d19a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B58d19e:{NFSU2_TR(0x58d19e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B58d1a1:{NFSU2_TR(0x58d1a1);
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
B58d1a3:{NFSU2_TR(0x58d1a3);
if(r1(R+518)){{goto L58d1c5;}}
}
B58d1a5:L58d1a5:{c.instructions+=2;NFSU2_TR(0x58d1a5);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+20))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B58d1a8:{NFSU2_TR(0x58d1a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58d1bb;}}
}
B58d1aa:L58d1aa:{c.instructions+=4;NFSU2_TR(0x58d1aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B58d1ad:{NFSU2_TR(0x58d1ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d1ae:{NFSU2_TR(0x58d1ae);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d1af:{NFSU2_TR(0x58d1af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d1b4ull));
TAIL_STATIC(0x43dc30u,43d);
}
B58d1b4:L58d1b4:{c.instructions+=3;NFSU2_TR(0x58d1b4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58d1b7:{NFSU2_TR(0x58d1b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58d1b9:{NFSU2_TR(0x58d1b9);
if(r1(R+518)){{goto L58d1c1;}}
}
B58d1bb:L58d1bb:{c.instructions+=3;NFSU2_TR(0x58d1bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B58d1bd:{NFSU2_TR(0x58d1bd);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58d1bf:{NFSU2_TR(0x58d1bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58d1a5u);}goto L58d1a5;}}
}
B58d1c1:L58d1c1:{c.instructions+=2;NFSU2_TR(0x58d1c1);
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
B58d1c3:{NFSU2_TR(0x58d1c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58d1d2;}}
}
B58d1c5:L58d1c5:{c.instructions+=7;NFSU2_TR(0x58d1c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58d1c6:{NFSU2_TR(0x58d1c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58d1c7:{NFSU2_TR(0x58d1c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58d1c8:{NFSU2_TR(0x58d1c8);
w4(R+0,u32(0xfffffff1ull));
}
B58d1cd:{NFSU2_TR(0x58d1cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58d1ce:{NFSU2_TR(0x58d1ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B58d1cf:{NFSU2_TR(0x58d1cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58d1d2:L58d1d2:{c.instructions+=6;NFSU2_TR(0x58d1d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58d1d6:{NFSU2_TR(0x58d1d6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d1d7:{NFSU2_TR(0x58d1d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58d1db:{NFSU2_TR(0x58d1db);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d1dc:{NFSU2_TR(0x58d1dc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d1dd:{NFSU2_TR(0x58d1dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d1e2ull));
TAIL_STATIC(0x58a660u,58a);
}
B58d1e2:L58d1e2:{c.instructions+=3;NFSU2_TR(0x58d1e2);
__builtin_memmove((R+28),(R+0),4);
}
B58d1e4:{NFSU2_TR(0x58d1e4);
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
B58d1e6:{NFSU2_TR(0x58d1e6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L58d202;}}
}
B58d1e8:L58d1e8:{c.instructions+=6;NFSU2_TR(0x58d1e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58d1eb:{NFSU2_TR(0x58d1eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B58d1ed:{NFSU2_TR(0x58d1ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B58d1ef:{NFSU2_TR(0x58d1ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58d1f2:{NFSU2_TR(0x58d1f2);
__builtin_memmove((R+4),(R+24),4);
}
B58d1f4:{NFSU2_TR(0x58d1f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d1f9ull));
TAIL_STATIC(0x584b40u,584);
}
B58d1f9:L58d1f9:{c.instructions+=2;NFSU2_TR(0x58d1f9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d1fa:{NFSU2_TR(0x58d1fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d1ffull));
TAIL_STATIC(0x575630u,575);
}
B58d1ff:L58d1ff:{c.instructions+=1;NFSU2_TR(0x58d1ff);
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
B58d202:L58d202:{c.instructions+=7;NFSU2_TR(0x58d202);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58d203:{NFSU2_TR(0x58d203);
__builtin_memmove((R+0),(R+28),4);
}
B58d205:{NFSU2_TR(0x58d205);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58d206:{NFSU2_TR(0x58d206);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58d207:{NFSU2_TR(0x58d207);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58d208:{NFSU2_TR(0x58d208);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B58d209:{NFSU2_TR(0x58d209);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58d20c:L58d20c:{c.instructions+=7;NFSU2_TR(0x58d20c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58d20d:{NFSU2_TR(0x58d20d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58d20e:{NFSU2_TR(0x58d20e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58d20f:{NFSU2_TR(0x58d20f);
w4(R+0,u32(0xffffffecull));
}
B58d214:{NFSU2_TR(0x58d214);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58d215:{NFSU2_TR(0x58d215);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B58d216:{NFSU2_TR(0x58d216);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58d220:L58d220:{c.instructions+=10;NFSU2_TR(0x58d220);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d221:{NFSU2_TR(0x58d221);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d222:{NFSU2_TR(0x58d222);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d223:{NFSU2_TR(0x58d223);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d224:{NFSU2_TR(0x58d224);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B58d228:{NFSU2_TR(0x58d228);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58d22b:{NFSU2_TR(0x58d22b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58d22e:{NFSU2_TR(0x58d22e);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58d230:{NFSU2_TR(0x58d230);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58d234:{NFSU2_TR(0x58d234);
if(r1(R+518)){{goto L58d29a;}}
}
B58d236:L58d236:{c.instructions+=1;NFSU2_TR(0x58d236);
{goto L58d240;}
}
B58d240:L58d240:{c.instructions+=8;NFSU2_TR(0x58d240);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B58d243:{NFSU2_TR(0x58d243);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B58d249:{NFSU2_TR(0x58d249);
{u32 ea_=u32(u32(8802732u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B58d24f:{NFSU2_TR(0x58d24f);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B58d255:{NFSU2_TR(0x58d255);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B58d257:{NFSU2_TR(0x58d257);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B58d259:{NFSU2_TR(0x58d259);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58d25c:{NFSU2_TR(0x58d25c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58d294;}}
}
B58d25e:L58d25e:{c.instructions+=3;NFSU2_TR(0x58d25e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58d261:{NFSU2_TR(0x58d261);
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
B58d263:{NFSU2_TR(0x58d263);
if(r1(R+518)){{goto L58d278;}}
}
B58d265:L58d265:{c.instructions+=8;NFSU2_TR(0x58d265);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58d268:{NFSU2_TR(0x58d268);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58d26b:{NFSU2_TR(0x58d26b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d26c:{NFSU2_TR(0x58d26c);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d26e:{NFSU2_TR(0x58d26e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d26f:{NFSU2_TR(0x58d26f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B58d272:{NFSU2_TR(0x58d272);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d273:{NFSU2_TR(0x58d273);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d275ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B58d275:L58d275:{c.instructions+=1;NFSU2_TR(0x58d275);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58d278:L58d278:{c.instructions+=6;NFSU2_TR(0x58d278);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B58d27b:{NFSU2_TR(0x58d27b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B58d27d:{NFSU2_TR(0x58d27d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B58d27f:{NFSU2_TR(0x58d27f);
__builtin_memmove((R+4),(R+24),4);
}
B58d281:{NFSU2_TR(0x58d281);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58d284:{NFSU2_TR(0x58d284);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d289ull));
TAIL_STATIC(0x584b40u,584);
}
B58d289:L58d289:{c.instructions+=2;NFSU2_TR(0x58d289);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d28a:{NFSU2_TR(0x58d28a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d28full));
TAIL_STATIC(0x575630u,575);
}
B58d28f:L58d28f:{c.instructions+=2;NFSU2_TR(0x58d28f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58d292:{NFSU2_TR(0x58d292);
__builtin_memmove((R+24),(R+12),4);
}
B58d294:L58d294:{c.instructions+=3;NFSU2_TR(0x58d294);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B58d296:{NFSU2_TR(0x58d296);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58d298:{NFSU2_TR(0x58d298);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58d240u);}goto L58d240;}}
}
B58d29a:L58d29a:{c.instructions+=4;NFSU2_TR(0x58d29a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58d29d:{NFSU2_TR(0x58d29d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B58d2a0:{NFSU2_TR(0x58d2a0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58d2a2:{NFSU2_TR(0x58d2a2);
if(r1(R+518)){{goto L58d326;}}
}
B58d2a8:L58d2a8:{c.instructions+=1;NFSU2_TR(0x58d2a8);
{goto L58d2b0;}
}
B58d2b0:L58d2b0:{c.instructions+=8;NFSU2_TR(0x58d2b0);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B58d2b3:{NFSU2_TR(0x58d2b3);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B58d2b9:{NFSU2_TR(0x58d2b9);
{u32 ea_=u32(u32(8802732u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B58d2bf:{NFSU2_TR(0x58d2bf);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B58d2c5:{NFSU2_TR(0x58d2c5);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B58d2c7:{NFSU2_TR(0x58d2c7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B58d2c9:{NFSU2_TR(0x58d2c9);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58d2cc:{NFSU2_TR(0x58d2cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58d31d;}}
}
B58d2ce:L58d2ce:{c.instructions+=8;NFSU2_TR(0x58d2ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58d2d1:{NFSU2_TR(0x58d2d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B58d2d4:{NFSU2_TR(0x58d2d4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d2d6:{NFSU2_TR(0x58d2d6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d2d7:{NFSU2_TR(0x58d2d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+12),(U+0),4);
}
B58d2da:{NFSU2_TR(0x58d2da);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d2db:{NFSU2_TR(0x58d2db);
__builtin_memmove((R+4),(R+28),4);
}
B58d2dd:{NFSU2_TR(0x58d2dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d2e2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58d150u);}goto L58d150;}
}
B58d2e2:L58d2e2:{c.instructions+=2;NFSU2_TR(0x58d2e2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B58d2e4:{NFSU2_TR(0x58d2e4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L58d300;}}
}
B58d2e6:L58d2e6:{c.instructions+=6;NFSU2_TR(0x58d2e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58d2e9:{NFSU2_TR(0x58d2e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B58d2eb:{NFSU2_TR(0x58d2eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B58d2ed:{NFSU2_TR(0x58d2ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58d2f0:{NFSU2_TR(0x58d2f0);
__builtin_memmove((R+4),(R+24),4);
}
B58d2f2:{NFSU2_TR(0x58d2f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d2f7ull));
TAIL_STATIC(0x584b40u,584);
}
B58d2f7:L58d2f7:{c.instructions+=2;NFSU2_TR(0x58d2f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d2f8:{NFSU2_TR(0x58d2f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d2fdull));
TAIL_STATIC(0x575630u,575);
}
B58d2fd:L58d2fd:{c.instructions+=1;NFSU2_TR(0x58d2fd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58d300:L58d300:{c.instructions+=3;NFSU2_TR(0x58d300);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58d303:{NFSU2_TR(0x58d303);
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
B58d305:{NFSU2_TR(0x58d305);
if(r1(R+518)){{goto L58d317;}}
}
B58d307:L58d307:{c.instructions+=7;NFSU2_TR(0x58d307);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58d30a:{NFSU2_TR(0x58d30a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58d30d:{NFSU2_TR(0x58d30d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d30e:{NFSU2_TR(0x58d30e);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d310:{NFSU2_TR(0x58d310);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d311:{NFSU2_TR(0x58d311);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d312:{NFSU2_TR(0x58d312);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d314ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B58d314:L58d314:{c.instructions+=1;NFSU2_TR(0x58d314);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58d317:L58d317:{c.instructions+=2;NFSU2_TR(0x58d317);
__builtin_memmove((R+24),(R+20),4);
}
B58d319:{NFSU2_TR(0x58d319);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B58d31d:L58d31d:{c.instructions+=4;NFSU2_TR(0x58d31d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B58d31f:{NFSU2_TR(0x58d31f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B58d322:{NFSU2_TR(0x58d322);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58d324:{NFSU2_TR(0x58d324);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58d2b0u);}goto L58d2b0;}}
}
B58d326:L58d326:{c.instructions+=7;NFSU2_TR(0x58d326);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+4),(U+0),4);
}
B58d329:{NFSU2_TR(0x58d329);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58d32a:{NFSU2_TR(0x58d32a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58d32b:{NFSU2_TR(0x58d32b);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58d32d:{NFSU2_TR(0x58d32d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58d32e:{NFSU2_TR(0x58d32e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58d32f:{NFSU2_TR(0x58d32f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58d339;}}
}
B58d331:L58d331:{c.instructions+=2;NFSU2_TR(0x58d331);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B58d333:{NFSU2_TR(0x58d333);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58d339;}}
}
B58d335:L58d335:{c.instructions+=2;NFSU2_TR(0x58d335);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58d338:{NFSU2_TR(0x58d338);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58d339:L58d339:{c.instructions+=2;NFSU2_TR(0x58d339);
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
B58d33b:{NFSU2_TR(0x58d33b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58d340:L58d340:{c.instructions+=10;NFSU2_TR(0x58d340);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d341:{NFSU2_TR(0x58d341);
__builtin_memmove((R+20),(R+16),4);
}
B58d343:{NFSU2_TR(0x58d343);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B58d346:{NFSU2_TR(0x58d346);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4b4ull))));
}
B58d34c:{NFSU2_TR(0x58d34c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d34d:{NFSU2_TR(0x58d34d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d34e:{NFSU2_TR(0x58d34e);
__builtin_memmove((R+24),(R+4),4);
}
B58d350:{NFSU2_TR(0x58d350);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d351:{NFSU2_TR(0x58d351);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58d355:{NFSU2_TR(0x58d355);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d35aull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58d35a:L58d35a:{c.instructions+=3;NFSU2_TR(0x58d35a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B58d35d:{NFSU2_TR(0x58d35d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58d35f:{NFSU2_TR(0x58d35f);
if(r1(R+518)){{goto L58d6a2;}}
}
B58d365:L58d365:{c.instructions+=3;NFSU2_TR(0x58d365);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B58d368:{NFSU2_TR(0x58d368);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58d36a:{NFSU2_TR(0x58d36a);
if(r1(R+518)){{goto L58d6a2;}}
}
B58d370:L58d370:{c.instructions+=2;NFSU2_TR(0x58d370);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B58d373:{NFSU2_TR(0x58d373);
if(r1(R+518)){{goto L58d6a2;}}
}
B58d379:L58d379:{c.instructions+=2;NFSU2_TR(0x58d379);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B58d37d:{NFSU2_TR(0x58d37d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58d6a2;}}
}
B58d383:L58d383:{c.instructions+=1;NFSU2_TR(0x58d383);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d388ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58d388:L58d388:{c.instructions+=4;NFSU2_TR(0x58d388);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58d38b:{NFSU2_TR(0x58d38b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58d38d:{NFSU2_TR(0x58d38d);
w4(R+8,u32(0x676a6f69ull));
}
B58d392:{NFSU2_TR(0x58d392);
if(r1(R+518)){{goto L58d39e;}}
}
B58d394:L58d394:{c.instructions+=2;NFSU2_TR(0x58d394);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B58d397:{NFSU2_TR(0x58d397);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58d39e;}}
}
B58d399:L58d399:{c.instructions+=2;NFSU2_TR(0x58d399);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58d39c:{NFSU2_TR(0x58d39c);
{goto L58d3b7;}
}
B58d39e:L58d39e:{c.instructions+=4;NFSU2_TR(0x58d39e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((R+4),(U+0),4);
}
B58d3a1:{NFSU2_TR(0x58d3a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B58d3a3:{NFSU2_TR(0x58d3a3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58d3a5:{NFSU2_TR(0x58d3a5);
if(r1(R+518)){{goto L58d3c0;}}
}
B58d3a7:L58d3a7:{c.instructions+=2;NFSU2_TR(0x58d3a7);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B58d3aa:{NFSU2_TR(0x58d3aa);
if(r1(R+518)){{goto L58d3b4;}}
}
B58d3ac:L58d3ac:{c.instructions+=3;NFSU2_TR(0x58d3ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B58d3ae:{NFSU2_TR(0x58d3ae);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58d3b0:{NFSU2_TR(0x58d3b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58d3a7u);}goto L58d3a7;}}
}
B58d3b2:L58d3b2:{c.instructions+=1;NFSU2_TR(0x58d3b2);
{goto L58d3c0;}
}
B58d3b4:L58d3b4:{c.instructions+=1;NFSU2_TR(0x58d3b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58d3b7:L58d3b7:{c.instructions+=2;NFSU2_TR(0x58d3b7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58d3ba:{NFSU2_TR(0x58d3ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58d6a2;}}
}
B58d3c0:L58d3c0:{c.instructions+=1;NFSU2_TR(0x58d3c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d3c5ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58d3c5:L58d3c5:{c.instructions+=4;NFSU2_TR(0x58d3c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58d3c8:{NFSU2_TR(0x58d3c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58d3ca:{NFSU2_TR(0x58d3ca);
w4(R+8,u32(0x67637265ull));
}
B58d3cf:{NFSU2_TR(0x58d3cf);
if(r1(R+518)){{goto L58d3db;}}
}
B58d3d1:L58d3d1:{c.instructions+=2;NFSU2_TR(0x58d3d1);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B58d3d4:{NFSU2_TR(0x58d3d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58d3db;}}
}
B58d3d6:L58d3d6:{c.instructions+=2;NFSU2_TR(0x58d3d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58d3d9:{NFSU2_TR(0x58d3d9);
{goto L58d3f4;}
}
B58d3db:L58d3db:{c.instructions+=4;NFSU2_TR(0x58d3db);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((R+4),(U+0),4);
}
B58d3de:{NFSU2_TR(0x58d3de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B58d3e0:{NFSU2_TR(0x58d3e0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58d3e2:{NFSU2_TR(0x58d3e2);
if(r1(R+518)){{goto L58d3fd;}}
}
B58d3e4:L58d3e4:{c.instructions+=2;NFSU2_TR(0x58d3e4);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B58d3e7:{NFSU2_TR(0x58d3e7);
if(r1(R+518)){{goto L58d3f1;}}
}
B58d3e9:L58d3e9:{c.instructions+=3;NFSU2_TR(0x58d3e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B58d3eb:{NFSU2_TR(0x58d3eb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58d3ed:{NFSU2_TR(0x58d3ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58d3e4u);}goto L58d3e4;}}
}
B58d3ef:L58d3ef:{c.instructions+=1;NFSU2_TR(0x58d3ef);
{goto L58d3fd;}
}
B58d3f1:L58d3f1:{c.instructions+=1;NFSU2_TR(0x58d3f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58d3f4:L58d3f4:{c.instructions+=2;NFSU2_TR(0x58d3f4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58d3f7:{NFSU2_TR(0x58d3f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58d6a2;}}
}
B58d3fd:L58d3fd:{c.instructions+=4;NFSU2_TR(0x58d3fd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58d3ff:{NFSU2_TR(0x58d3ff);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58d404:{NFSU2_TR(0x58d404);
w4(R+4,u32(0x8ull));
}
B58d409:{NFSU2_TR(0x58d409);
u8 U[4];
w4(U+0,u32(u32(u32(0x15ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B58d40d:L58d40d:{c.instructions+=1;NFSU2_TR(0x58d40d);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58d40f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58d40du);}goto L58d40d;}
}
B58d40f:L58d40f:{c.instructions+=9;NFSU2_TR(0x58d40f);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B58d411:{NFSU2_TR(0x58d411);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B58d412:{NFSU2_TR(0x58d412);
__builtin_memmove((R+0),gp(0x86a618),4);
}
B58d417:{NFSU2_TR(0x58d417);
__builtin_memmove((R+24),(R+0),4);
}
B58d419:{NFSU2_TR(0x58d419);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B58d41a:{NFSU2_TR(0x58d41a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d41b:{NFSU2_TR(0x58d41b);
u8 U[4];
w4(U+0,u32(0x63ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d41d:{NFSU2_TR(0x58d41d);
__builtin_memmove(gp(0x86a618),(R+0),4);
}
B58d422:{NFSU2_TR(0x58d422);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d427ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B58d427:L58d427:{c.instructions+=7;NFSU2_TR(0x58d427);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58d42a:{NFSU2_TR(0x58d42a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d42b:{NFSU2_TR(0x58d42b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d42c:{NFSU2_TR(0x58d42c);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58d430:{NFSU2_TR(0x58d430);
u8 U[4];
w4(U+0,u32(0x7a16a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d435:{NFSU2_TR(0x58d435);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d436:{NFSU2_TR(0x58d436);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d43bull));
TAIL_STATIC(0x4400d0u,440);
}
B58d43b:L58d43b:{c.instructions+=4;NFSU2_TR(0x58d43b);
u8 U[5];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58d443:{NFSU2_TR(0x58d443);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58d445:{NFSU2_TR(0x58d445);
w4(R+4,u32(0xffull));
}
B58d44a:{NFSU2_TR(0x58d44a);
u8 U[4];
w4(U+0,u32(u32(u32(0xd5ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B58d451:L58d451:{c.instructions+=1;NFSU2_TR(0x58d451);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58d453;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58d451u);}goto L58d451;}
}
B58d453:L58d453:{c.instructions+=9;NFSU2_TR(0x58d453);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58d457:{NFSU2_TR(0x58d457);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d458:{NFSU2_TR(0x58d458);
u8 U[4];
w4(U+0,u32(0x79ac28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d45d:{NFSU2_TR(0x58d45d);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B58d45f:{NFSU2_TR(0x58d45f);
u8 U[4];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58d466:{NFSU2_TR(0x58d466);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d46b:{NFSU2_TR(0x58d46b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d46c:{NFSU2_TR(0x58d46c);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B58d46d:{NFSU2_TR(0x58d46d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d472ull));
TAIL_STATIC(0x741a50u,741);
}
B58d472:L58d472:{c.instructions+=8;NFSU2_TR(0x58d472);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58d475:{NFSU2_TR(0x58d475);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(r1(U+0)));
}
B58d478:{NFSU2_TR(0x58d478);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d479:{NFSU2_TR(0x58d479);
u8 U[4];
w4(U+0,u32(0x7a169cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d47e:{NFSU2_TR(0x58d47e);
u8 U[4];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58d485:{NFSU2_TR(0x58d485);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d48a:{NFSU2_TR(0x58d48a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d48b:{NFSU2_TR(0x58d48b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d490ull));
TAIL_STATIC(0x741690u,741);
}
B58d490:L58d490:{c.instructions+=7;NFSU2_TR(0x58d490);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B58d494:{NFSU2_TR(0x58d494);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d495:{NFSU2_TR(0x58d495);
u8 U[4];
w4(U+0,u32(0x7a1694ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d49a:{NFSU2_TR(0x58d49a);
u8 U[4];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58d4a1:{NFSU2_TR(0x58d4a1);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d4a6:{NFSU2_TR(0x58d4a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d4a7:{NFSU2_TR(0x58d4a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d4acull));
TAIL_STATIC(0x741690u,741);
}
B58d4ac:L58d4ac:{c.instructions+=6;NFSU2_TR(0x58d4ac);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B58d4af:{NFSU2_TR(0x58d4af);
w4(R+12,u32(0x1ull));
}
B58d4b4:{NFSU2_TR(0x58d4b4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
}
B58d4b7:{NFSU2_TR(0x58d4b7);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B58d4b9:{NFSU2_TR(0x58d4b9);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B58d4bb:{NFSU2_TR(0x58d4bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58d4bf;}}
}
B58d4bd:L58d4bd:{c.instructions+=1;NFSU2_TR(0x58d4bd);
__builtin_memmove((R+4),(R+12),4);
}
B58d4bf:L58d4bf:{c.instructions+=2;NFSU2_TR(0x58d4bf);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B58d4c2:{NFSU2_TR(0x58d4c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58d4c7;}}
}
B58d4c4:L58d4c4:{c.instructions+=1;NFSU2_TR(0x58d4c4);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x2ull))));
}
B58d4c7:L58d4c7:{c.instructions+=3;NFSU2_TR(0x58d4c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58d4ca:{NFSU2_TR(0x58d4ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58d4cc:{NFSU2_TR(0x58d4cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58d4d6;}}
}
B58d4ce:L58d4ce:{c.instructions+=2;NFSU2_TR(0x58d4ce);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x4000000ull))));
}
B58d4d4:{NFSU2_TR(0x58d4d4);
{goto L58d526;}
}
B58d4d6:L58d4d6:{c.instructions+=2;NFSU2_TR(0x58d4d6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58d4d8:{NFSU2_TR(0x58d4d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58d4e2;}}
}
B58d4da:L58d4da:{c.instructions+=2;NFSU2_TR(0x58d4da);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x8000000ull))));
}
B58d4e0:{NFSU2_TR(0x58d4e0);
{goto L58d526;}
}
B58d4e2:L58d4e2:{c.instructions+=2;NFSU2_TR(0x58d4e2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58d4e5:{NFSU2_TR(0x58d4e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58d4ef;}}
}
B58d4e7:L58d4e7:{c.instructions+=2;NFSU2_TR(0x58d4e7);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x10000000ull))));
}
B58d4ed:{NFSU2_TR(0x58d4ed);
{goto L58d526;}
}
B58d4ef:L58d4ef:{c.instructions+=2;NFSU2_TR(0x58d4ef);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58d4f2:{NFSU2_TR(0x58d4f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58d4fc;}}
}
B58d4f4:L58d4f4:{c.instructions+=2;NFSU2_TR(0x58d4f4);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x20000000ull))));
}
B58d4fa:{NFSU2_TR(0x58d4fa);
{goto L58d526;}
}
B58d4fc:L58d4fc:{c.instructions+=2;NFSU2_TR(0x58d4fc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58d4ff:{NFSU2_TR(0x58d4ff);
if(r1(R+518)){{goto L58d520;}}
}
B58d501:L58d501:{c.instructions+=2;NFSU2_TR(0x58d501);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58d504:{NFSU2_TR(0x58d504);
if(r1(R+518)){{goto L58d520;}}
}
B58d506:L58d506:{c.instructions+=2;NFSU2_TR(0x58d506);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58d509:{NFSU2_TR(0x58d509);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58d513;}}
}
B58d50b:L58d50b:{c.instructions+=2;NFSU2_TR(0x58d50b);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x80000000ull))));
}
B58d511:{NFSU2_TR(0x58d511);
{goto L58d526;}
}
B58d513:L58d513:{c.instructions+=2;NFSU2_TR(0x58d513);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58d516:{NFSU2_TR(0x58d516);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58d526;}}
}
B58d518:L58d518:{c.instructions+=2;NFSU2_TR(0x58d518);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x2000000ull))));
}
B58d51e:{NFSU2_TR(0x58d51e);
{goto L58d526;}
}
B58d520:L58d520:{c.instructions+=1;NFSU2_TR(0x58d520);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x40000000ull))));
}
B58d526:L58d526:{c.instructions+=3;NFSU2_TR(0x58d526);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B58d529:{NFSU2_TR(0x58d529);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58d52b:{NFSU2_TR(0x58d52b);
if(r1(R+518)){{goto L58d535;}}
}
B58d52d:L58d52d:{c.instructions+=2;NFSU2_TR(0x58d52d);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xf0ull))));
}
B58d533:{NFSU2_TR(0x58d533);
{goto L58d55d;}
}
B58d535:L58d535:{c.instructions+=3;NFSU2_TR(0x58d535);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B58d538:{NFSU2_TR(0x58d538);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58d53a:{NFSU2_TR(0x58d53a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58d541;}}
}
B58d53c:L58d53c:{c.instructions+=2;NFSU2_TR(0x58d53c);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x10ull))));
}
B58d53f:{NFSU2_TR(0x58d53f);
{goto L58d55d;}
}
B58d541:L58d541:{c.instructions+=2;NFSU2_TR(0x58d541);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B58d543:{NFSU2_TR(0x58d543);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58d54a;}}
}
B58d545:L58d545:{c.instructions+=2;NFSU2_TR(0x58d545);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x20ull))));
}
B58d548:{NFSU2_TR(0x58d548);
{goto L58d55d;}
}
B58d54a:L58d54a:{c.instructions+=2;NFSU2_TR(0x58d54a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58d54c:{NFSU2_TR(0x58d54c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58d553;}}
}
B58d54e:L58d54e:{c.instructions+=2;NFSU2_TR(0x58d54e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x40ull))));
}
B58d551:{NFSU2_TR(0x58d551);
{goto L58d55d;}
}
B58d553:L58d553:{c.instructions+=2;NFSU2_TR(0x58d553);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58d555:{NFSU2_TR(0x58d555);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58d55d;}}
}
B58d557:L58d557:{c.instructions+=1;NFSU2_TR(0x58d557);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x80ull))));
}
B58d55d:L58d55d:{c.instructions+=2;NFSU2_TR(0x58d55d);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B58d560:{NFSU2_TR(0x58d560);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58d568;}}
}
B58d562:L58d562:{c.instructions+=1;NFSU2_TR(0x58d562);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x100ull))));
}
B58d568:L58d568:{c.instructions+=6;NFSU2_TR(0x58d568);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d569:{NFSU2_TR(0x58d569);
u8 U[4];
w4(U+0,u32(0x7a1688ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d56e:{NFSU2_TR(0x58d56e);
u8 U[4];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58d575:{NFSU2_TR(0x58d575);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d57a:{NFSU2_TR(0x58d57a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d57b:{NFSU2_TR(0x58d57b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d580ull));
TAIL_STATIC(0x741690u,741);
}
B58d580:L58d580:{c.instructions+=5;NFSU2_TR(0x58d580);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B58d583:{NFSU2_TR(0x58d583);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58d586:{NFSU2_TR(0x58d586);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58d588:{NFSU2_TR(0x58d588);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B58d58a:{NFSU2_TR(0x58d58a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58d591;}}
}
B58d58c:L58d58c:{c.instructions+=1;NFSU2_TR(0x58d58c);
w4(R+0,u32(0x40000ull));
}
B58d591:L58d591:{c.instructions+=6;NFSU2_TR(0x58d591);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d592:{NFSU2_TR(0x58d592);
u8 U[4];
w4(U+0,u32(0x7a15a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d597:{NFSU2_TR(0x58d597);
u8 U[4];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58d59e:{NFSU2_TR(0x58d59e);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d5a3:{NFSU2_TR(0x58d5a3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d5a4:{NFSU2_TR(0x58d5a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d5a9ull));
TAIL_STATIC(0x741690u,741);
}
B58d5a9:L58d5a9:{c.instructions+=4;NFSU2_TR(0x58d5a9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B58d5ac:{NFSU2_TR(0x58d5ac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58d5af:{NFSU2_TR(0x58d5af);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B58d5b1:{NFSU2_TR(0x58d5b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58d5d8;}}
}
B58d5b3:L58d5b3:{c.instructions+=4;NFSU2_TR(0x58d5b3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B58d5b6:{NFSU2_TR(0x58d5b6);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58d5b8:{NFSU2_TR(0x58d5b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B58d5bb:{NFSU2_TR(0x58d5bb);
if(r1(R+518)){{goto L58d5d8;}}
}
B58d5bd:L58d5bd:{c.instructions+=6;NFSU2_TR(0x58d5bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d5be:{NFSU2_TR(0x58d5be);
u8 U[4];
w4(U+0,u32(0x7a13c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d5c3:{NFSU2_TR(0x58d5c3);
u8 U[4];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58d5ca:{NFSU2_TR(0x58d5ca);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d5cf:{NFSU2_TR(0x58d5cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d5d0:{NFSU2_TR(0x58d5d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d5d5ull));
TAIL_STATIC(0x741a50u,741);
}
B58d5d5:L58d5d5:{c.instructions+=1;NFSU2_TR(0x58d5d5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58d5d8:L58d5d8:{c.instructions+=5;NFSU2_TR(0x58d5d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58d5db:{NFSU2_TR(0x58d5db);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58d5dd:{NFSU2_TR(0x58d5dd);
u8 U[5];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58d5e2:{NFSU2_TR(0x58d5e2);
w4(R+4,u32(0x20ull));
}
B58d5e7:{NFSU2_TR(0x58d5e7);
u8 U[4];
w4(U+0,u32(u32(u32(0x39ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B58d5eb:L58d5eb:{c.instructions+=1;NFSU2_TR(0x58d5eb);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58d5ed;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58d5ebu);}goto L58d5eb;}
}
B58d5ed:L58d5ed:{c.instructions+=12;NFSU2_TR(0x58d5ed);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B58d5f1:{NFSU2_TR(0x58d5f1);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B58d5f3:{NFSU2_TR(0x58d5f3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d5f4:{NFSU2_TR(0x58d5f4);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B58d5f5:{NFSU2_TR(0x58d5f5);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B58d5f9:{NFSU2_TR(0x58d5f9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d5fa:{NFSU2_TR(0x58d5fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d5fb:{NFSU2_TR(0x58d5fb);
u8 U[4];
w4(U+0,u32(0x7a1670ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d600:{NFSU2_TR(0x58d600);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58d604:{NFSU2_TR(0x58d604);
u8 U[4];
w4(U+0,u32(0x84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d609:{NFSU2_TR(0x58d609);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d60a:{NFSU2_TR(0x58d60a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d60full));
TAIL_STATIC(0x741f20u,741);
}
B58d60f:L58d60f:{c.instructions+=4;NFSU2_TR(0x58d60f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58d612:{NFSU2_TR(0x58d612);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B58d615:{NFSU2_TR(0x58d615);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58d618:{NFSU2_TR(0x58d618);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58d64d;}}
}
B58d61a:L58d61a:{c.instructions+=7;NFSU2_TR(0x58d61a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58d61d:{NFSU2_TR(0x58d61d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d61e:{NFSU2_TR(0x58d61e);
u8 U[4];
w4(U+0,u32(0x7a15c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d623:{NFSU2_TR(0x58d623);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58d627:{NFSU2_TR(0x58d627);
u8 U[4];
w4(U+0,u32(0x84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d62c:{NFSU2_TR(0x58d62c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d62d:{NFSU2_TR(0x58d62d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d632ull));
TAIL_STATIC(0x741690u,741);
}
B58d632:L58d632:{c.instructions+=7;NFSU2_TR(0x58d632);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58d635:{NFSU2_TR(0x58d635);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d636:{NFSU2_TR(0x58d636);
u8 U[4];
w4(U+0,u32(0x7a15bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d63b:{NFSU2_TR(0x58d63b);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58d63f:{NFSU2_TR(0x58d63f);
u8 U[4];
w4(U+0,u32(0x84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d644:{NFSU2_TR(0x58d644);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d645:{NFSU2_TR(0x58d645);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d64aull));
TAIL_STATIC(0x741690u,741);
}
B58d64a:L58d64a:{c.instructions+=1;NFSU2_TR(0x58d64a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B58d64d:L58d64d:{c.instructions+=7;NFSU2_TR(0x58d64d);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58d651:{NFSU2_TR(0x58d651);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d652:{NFSU2_TR(0x58d652);
u8 U[4];
w4(U+0,u32(0x7a1668ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d657:{NFSU2_TR(0x58d657);
u8 U[4];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58d65e:{NFSU2_TR(0x58d65e);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d663:{NFSU2_TR(0x58d663);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d664:{NFSU2_TR(0x58d664);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d669ull));
TAIL_STATIC(0x741a50u,741);
}
B58d669:L58d669:{c.instructions+=13;NFSU2_TR(0x58d669);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58d66c:{NFSU2_TR(0x58d66c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58d66f:{NFSU2_TR(0x58d66f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58d673:{NFSU2_TR(0x58d673);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58d676:{NFSU2_TR(0x58d676);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d678:{NFSU2_TR(0x58d678);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d679:{NFSU2_TR(0x58d679);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d67a:{NFSU2_TR(0x58d67a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d67b:{NFSU2_TR(0x58d67b);
u8 U[4];
w4(U+0,u32(0x58b070ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d680:{NFSU2_TR(0x58d680);
u8 U[4];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58d687:{NFSU2_TR(0x58d687);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d688:{NFSU2_TR(0x58d688);
u8 U[4];
w4(U+0,u32(0x67637265ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d68d:{NFSU2_TR(0x58d68d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d692ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58d692:L58d692:{c.instructions+=2;NFSU2_TR(0x58d692);
__builtin_memmove((R+4),(R+0),4);
}
B58d694:{NFSU2_TR(0x58d694);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d699ull));
TAIL_STATIC(0x5869a0u,586);
}
B58d699:L58d699:{c.instructions+=6;NFSU2_TR(0x58d699);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58d69a:{NFSU2_TR(0x58d69a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58d69b:{NFSU2_TR(0x58d69b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58d69c:{NFSU2_TR(0x58d69c);
__builtin_memmove((R+16),(R+20),4);
}
B58d69e:{NFSU2_TR(0x58d69e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58d69f:{NFSU2_TR(0x58d69f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58d6a2:L58d6a2:{c.instructions+=7;NFSU2_TR(0x58d6a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58d6a3:{NFSU2_TR(0x58d6a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58d6a4:{NFSU2_TR(0x58d6a4);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58d6a7:{NFSU2_TR(0x58d6a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58d6a8:{NFSU2_TR(0x58d6a8);
__builtin_memmove((R+16),(R+20),4);
}
B58d6aa:{NFSU2_TR(0x58d6aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58d6ab:{NFSU2_TR(0x58d6ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58d6b0:L58d6b0:{c.instructions+=4;NFSU2_TR(0x58d6b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x60ull))));
}
B58d6b3:{NFSU2_TR(0x58d6b3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d6b4:{NFSU2_TR(0x58d6b4);
__builtin_memmove((R+24),(R+4),4);
}
B58d6b6:{NFSU2_TR(0x58d6b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d6bbull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58d6bb:L58d6bb:{c.instructions+=3;NFSU2_TR(0x58d6bb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B58d6be:{NFSU2_TR(0x58d6be);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58d6c0:{NFSU2_TR(0x58d6c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58d6cc;}}
}
B58d6c2:L58d6c2:{c.instructions+=4;NFSU2_TR(0x58d6c2);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B58d6c5:{NFSU2_TR(0x58d6c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58d6c6:{NFSU2_TR(0x58d6c6);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x60ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58d6c9:{NFSU2_TR(0x58d6c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58d6cc:L58d6cc:{c.instructions+=3;NFSU2_TR(0x58d6cc);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B58d6d0:{NFSU2_TR(0x58d6d0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d6d1:{NFSU2_TR(0x58d6d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58d7f3;}}
}
B58d6d7:L58d6d7:{c.instructions+=1;NFSU2_TR(0x58d6d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d6dcull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58d6dc:L58d6dc:{c.instructions+=3;NFSU2_TR(0x58d6dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58d6df:{NFSU2_TR(0x58d6df);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58d6e1:{NFSU2_TR(0x58d6e1);
if(r1(R+518)){{goto L58d6f1;}}
}
B58d6e3:L58d6e3:{c.instructions+=2;NFSU2_TR(0x58d6e3);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x676a6f69ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B58d6ea:{NFSU2_TR(0x58d6ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58d6f1;}}
}
B58d6ec:L58d6ec:{c.instructions+=2;NFSU2_TR(0x58d6ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58d6ef:{NFSU2_TR(0x58d6ef);
{goto L58d714;}
}
B58d6f1:L58d6f1:{c.instructions+=4;NFSU2_TR(0x58d6f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((R+4),(U+0),4);
}
B58d6f4:{NFSU2_TR(0x58d6f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B58d6f6:{NFSU2_TR(0x58d6f6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58d6f8:{NFSU2_TR(0x58d6f8);
if(r1(R+518)){{goto L58d71d;}}
}
B58d6fa:L58d6fa:{c.instructions+=1;NFSU2_TR(0x58d6fa);
__builtin_memmove((R+12),(R+12),4);
}
B58d700:L58d700:{c.instructions+=2;NFSU2_TR(0x58d700);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x676a6f69ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B58d707:{NFSU2_TR(0x58d707);
if(r1(R+518)){{goto L58d711;}}
}
B58d709:L58d709:{c.instructions+=3;NFSU2_TR(0x58d709);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B58d70b:{NFSU2_TR(0x58d70b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58d70d:{NFSU2_TR(0x58d70d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58d700u);}goto L58d700;}}
}
B58d70f:L58d70f:{c.instructions+=1;NFSU2_TR(0x58d70f);
{goto L58d71d;}
}
B58d711:L58d711:{c.instructions+=1;NFSU2_TR(0x58d711);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58d714:L58d714:{c.instructions+=2;NFSU2_TR(0x58d714);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58d717:{NFSU2_TR(0x58d717);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58d7f3;}}
}
B58d71d:L58d71d:{c.instructions+=1;NFSU2_TR(0x58d71d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d722ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58d722:L58d722:{c.instructions+=4;NFSU2_TR(0x58d722);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58d725:{NFSU2_TR(0x58d725);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58d727:{NFSU2_TR(0x58d727);
w4(R+8,u32(0x67637265ull));
}
B58d72c:{NFSU2_TR(0x58d72c);
if(r1(R+518)){{goto L58d738;}}
}
B58d72e:L58d72e:{c.instructions+=2;NFSU2_TR(0x58d72e);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B58d731:{NFSU2_TR(0x58d731);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58d738;}}
}
B58d733:L58d733:{c.instructions+=2;NFSU2_TR(0x58d733);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58d736:{NFSU2_TR(0x58d736);
{goto L58d751;}
}
B58d738:L58d738:{c.instructions+=4;NFSU2_TR(0x58d738);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((R+4),(U+0),4);
}
B58d73b:{NFSU2_TR(0x58d73b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B58d73d:{NFSU2_TR(0x58d73d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58d73f:{NFSU2_TR(0x58d73f);
if(r1(R+518)){{goto L58d75a;}}
}
B58d741:L58d741:{c.instructions+=2;NFSU2_TR(0x58d741);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B58d744:{NFSU2_TR(0x58d744);
if(r1(R+518)){{goto L58d74e;}}
}
B58d746:L58d746:{c.instructions+=3;NFSU2_TR(0x58d746);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B58d748:{NFSU2_TR(0x58d748);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58d74a:{NFSU2_TR(0x58d74a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58d741u);}goto L58d741;}}
}
B58d74c:L58d74c:{c.instructions+=1;NFSU2_TR(0x58d74c);
{goto L58d75a;}
}
B58d74e:L58d74e:{c.instructions+=1;NFSU2_TR(0x58d74e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58d751:L58d751:{c.instructions+=2;NFSU2_TR(0x58d751);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58d754:{NFSU2_TR(0x58d754);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58d7f3;}}
}
B58d75a:L58d75a:{c.instructions+=1;NFSU2_TR(0x58d75a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d75full));
TAIL_STATIC(0x58b9a0u,58b);
}
B58d75f:L58d75f:{c.instructions+=2;NFSU2_TR(0x58d75f);
__builtin_memmove((R+4),(R+0),4);
}
B58d761:{NFSU2_TR(0x58d761);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d766ull));
TAIL_STATIC(0x587790u,587);
}
B58d766:L58d766:{c.instructions+=4;NFSU2_TR(0x58d766);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58d768:{NFSU2_TR(0x58d768);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58d76d:{NFSU2_TR(0x58d76d);
w4(R+4,u32(0x17ull));
}
B58d772:{NFSU2_TR(0x58d772);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B58d776:L58d776:{c.instructions+=1;NFSU2_TR(0x58d776);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58d778;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58d776u);}goto L58d776;}
}
B58d778:L58d778:{c.instructions+=10;NFSU2_TR(0x58d778);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B58d77a:{NFSU2_TR(0x58d77a);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B58d77b:{NFSU2_TR(0x58d77b);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58d77f:{NFSU2_TR(0x58d77f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d780:{NFSU2_TR(0x58d780);
u8 U[4];
w4(U+0,u32(0x79ac28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d785:{NFSU2_TR(0x58d785);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58d789:{NFSU2_TR(0x58d789);
u8 U[4];
w4(U+0,u32(0x60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d78b:{NFSU2_TR(0x58d78b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d78c:{NFSU2_TR(0x58d78c);
s4(0x86676c,u32(0x0ull));
}
B58d796:{NFSU2_TR(0x58d796);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d79bull));
TAIL_STATIC(0x741a50u,741);
}
B58d79b:L58d79b:{c.instructions+=4;NFSU2_TR(0x58d79b);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58d7a2:{NFSU2_TR(0x58d7a2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58d7a5:{NFSU2_TR(0x58d7a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58d7a7:{NFSU2_TR(0x58d7a7);
if(r1(R+518)){{goto L58d7c3;}}
}
B58d7a9:L58d7a9:{c.instructions+=2;NFSU2_TR(0x58d7a9);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B58d7ac:{NFSU2_TR(0x58d7ac);
if(r1(R+518)){{goto L58d7c3;}}
}
B58d7ae:L58d7ae:{c.instructions+=6;NFSU2_TR(0x58d7ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d7af:{NFSU2_TR(0x58d7af);
u8 U[4];
w4(U+0,u32(0x7a13c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d7b4:{NFSU2_TR(0x58d7b4);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58d7b8:{NFSU2_TR(0x58d7b8);
u8 U[4];
w4(U+0,u32(0x60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d7ba:{NFSU2_TR(0x58d7ba);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d7bb:{NFSU2_TR(0x58d7bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d7c0ull));
TAIL_STATIC(0x741a50u,741);
}
B58d7c0:L58d7c0:{c.instructions+=1;NFSU2_TR(0x58d7c0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58d7c3:L58d7c3:{c.instructions+=11;NFSU2_TR(0x58d7c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58d7c7:{NFSU2_TR(0x58d7c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58d7cb:{NFSU2_TR(0x58d7cb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d7cd:{NFSU2_TR(0x58d7cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d7ce:{NFSU2_TR(0x58d7ce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d7cf:{NFSU2_TR(0x58d7cf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d7d0:{NFSU2_TR(0x58d7d0);
u8 U[4];
w4(U+0,u32(0x58b070ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d7d5:{NFSU2_TR(0x58d7d5);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58d7d9:{NFSU2_TR(0x58d7d9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d7da:{NFSU2_TR(0x58d7da);
u8 U[4];
w4(U+0,u32(0x676a6f69ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d7df:{NFSU2_TR(0x58d7df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d7e4ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58d7e4:L58d7e4:{c.instructions+=2;NFSU2_TR(0x58d7e4);
__builtin_memmove((R+4),(R+0),4);
}
B58d7e6:{NFSU2_TR(0x58d7e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d7ebull));
TAIL_STATIC(0x5869a0u,586);
}
B58d7eb:L58d7eb:{c.instructions+=4;NFSU2_TR(0x58d7eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58d7ec:{NFSU2_TR(0x58d7ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58d7ed:{NFSU2_TR(0x58d7ed);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x60ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58d7f0:{NFSU2_TR(0x58d7f0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58d7f3:L58d7f3:{c.instructions+=5;NFSU2_TR(0x58d7f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58d7f4:{NFSU2_TR(0x58d7f4);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B58d7f7:{NFSU2_TR(0x58d7f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58d7f8:{NFSU2_TR(0x58d7f8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x60ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58d7fb:{NFSU2_TR(0x58d7fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58d800:L58d800:{c.instructions+=4;NFSU2_TR(0x58d800);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B58d803:{NFSU2_TR(0x58d803);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d804:{NFSU2_TR(0x58d804);
__builtin_memmove((R+12),(R+4),4);
}
B58d806:{NFSU2_TR(0x58d806);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d80bull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58d80b:L58d80b:{c.instructions+=3;NFSU2_TR(0x58d80b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B58d80e:{NFSU2_TR(0x58d80e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58d810:{NFSU2_TR(0x58d810);
if(r1(R+518)){{goto L58d931;}}
}
B58d816:L58d816:{c.instructions+=2;NFSU2_TR(0x58d816);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B58d81a:{NFSU2_TR(0x58d81a);
if(r1(R+518)){{goto L58d931;}}
}
B58d820:L58d820:{c.instructions+=1;NFSU2_TR(0x58d820);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d825ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58d825:L58d825:{c.instructions+=3;NFSU2_TR(0x58d825);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58d828:{NFSU2_TR(0x58d828);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58d82a:{NFSU2_TR(0x58d82a);
if(r1(R+518)){{goto L58d83a;}}
}
B58d82c:L58d82c:{c.instructions+=2;NFSU2_TR(0x58d82c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x6764656cull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B58d833:{NFSU2_TR(0x58d833);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58d83a;}}
}
B58d835:L58d835:{c.instructions+=2;NFSU2_TR(0x58d835);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58d838:{NFSU2_TR(0x58d838);
{goto L58d857;}
}
B58d83a:L58d83a:{c.instructions+=4;NFSU2_TR(0x58d83a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((R+4),(U+0),4);
}
B58d83d:{NFSU2_TR(0x58d83d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B58d83f:{NFSU2_TR(0x58d83f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58d841:{NFSU2_TR(0x58d841);
if(r1(R+518)){{goto L58d860;}}
}
B58d843:L58d843:{c.instructions+=2;NFSU2_TR(0x58d843);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x6764656cull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B58d84a:{NFSU2_TR(0x58d84a);
if(r1(R+518)){{goto L58d854;}}
}
B58d84c:L58d84c:{c.instructions+=3;NFSU2_TR(0x58d84c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B58d84e:{NFSU2_TR(0x58d84e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58d850:{NFSU2_TR(0x58d850);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58d843u);}goto L58d843;}}
}
B58d852:L58d852:{c.instructions+=1;NFSU2_TR(0x58d852);
{goto L58d860;}
}
B58d854:L58d854:{c.instructions+=1;NFSU2_TR(0x58d854);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58d857:L58d857:{c.instructions+=2;NFSU2_TR(0x58d857);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58d85a:{NFSU2_TR(0x58d85a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58d931;}}
}
B58d860:L58d860:{c.instructions+=1;NFSU2_TR(0x58d860);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d865ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58d865:L58d865:{c.instructions+=3;NFSU2_TR(0x58d865);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58d868:{NFSU2_TR(0x58d868);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58d86a:{NFSU2_TR(0x58d86a);
if(r1(R+518)){{goto L58d87a;}}
}
B58d86c:L58d86c:{c.instructions+=2;NFSU2_TR(0x58d86c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x676c6561ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B58d873:{NFSU2_TR(0x58d873);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58d87a;}}
}
B58d875:L58d875:{c.instructions+=2;NFSU2_TR(0x58d875);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58d878:{NFSU2_TR(0x58d878);
{goto L58d897;}
}
B58d87a:L58d87a:{c.instructions+=4;NFSU2_TR(0x58d87a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((R+4),(U+0),4);
}
B58d87d:{NFSU2_TR(0x58d87d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B58d87f:{NFSU2_TR(0x58d87f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58d881:{NFSU2_TR(0x58d881);
if(r1(R+518)){{goto L58d8a0;}}
}
B58d883:L58d883:{c.instructions+=2;NFSU2_TR(0x58d883);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x676c6561ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B58d88a:{NFSU2_TR(0x58d88a);
if(r1(R+518)){{goto L58d894;}}
}
B58d88c:L58d88c:{c.instructions+=3;NFSU2_TR(0x58d88c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B58d88e:{NFSU2_TR(0x58d88e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58d890:{NFSU2_TR(0x58d890);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58d883u);}goto L58d883;}}
}
B58d892:L58d892:{c.instructions+=1;NFSU2_TR(0x58d892);
{goto L58d8a0;}
}
B58d894:L58d894:{c.instructions+=1;NFSU2_TR(0x58d894);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58d897:L58d897:{c.instructions+=2;NFSU2_TR(0x58d897);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58d89a:{NFSU2_TR(0x58d89a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58d931;}}
}
B58d8a0:L58d8a0:{c.instructions+=5;NFSU2_TR(0x58d8a0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d8a1:{NFSU2_TR(0x58d8a1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58d8a3:{NFSU2_TR(0x58d8a3);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58d8a8:{NFSU2_TR(0x58d8a8);
w4(R+4,u32(0xfull));
}
B58d8ad:{NFSU2_TR(0x58d8ad);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B58d8b1:L58d8b1:{c.instructions+=1;NFSU2_TR(0x58d8b1);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58d8b3;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58d8b1u);}goto L58d8b1;}
}
B58d8b3:L58d8b3:{c.instructions+=9;NFSU2_TR(0x58d8b3);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B58d8b5:{NFSU2_TR(0x58d8b5);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B58d8b6:{NFSU2_TR(0x58d8b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B58d8b9:{NFSU2_TR(0x58d8b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d8ba:{NFSU2_TR(0x58d8ba);
u8 U[4];
w4(U+0,u32(0x79ac28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d8bf:{NFSU2_TR(0x58d8bf);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58d8c3:{NFSU2_TR(0x58d8c3);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d8c5:{NFSU2_TR(0x58d8c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d8c6:{NFSU2_TR(0x58d8c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d8cbull));
TAIL_STATIC(0x741a50u,741);
}
B58d8cb:L58d8cb:{c.instructions+=5;NFSU2_TR(0x58d8cb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58d8ce:{NFSU2_TR(0x58d8ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((R+8),(U+0),4);
}
B58d8d1:{NFSU2_TR(0x58d8d1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d8d2:{NFSU2_TR(0x58d8d2);
w4(R+4,u32(0x850080ull));
}
B58d8d7:{NFSU2_TR(0x58d8d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d8dcull));
TAIL_STATIC(0x5031f0u,503);
}
B58d8dc:L58d8dc:{c.instructions+=2;NFSU2_TR(0x58d8dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d8dd:{NFSU2_TR(0x58d8dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d8e2ull));
TAIL_STATIC(0x43dc30u,43d);
}
B58d8e2:L58d8e2:{c.instructions+=13;NFSU2_TR(0x58d8e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58d8e6:{NFSU2_TR(0x58d8e6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58d8e9:{NFSU2_TR(0x58d8e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58d8ea:{NFSU2_TR(0x58d8ea);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d8ec:{NFSU2_TR(0x58d8ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58d8ee:{NFSU2_TR(0x58d8ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58d8f2:{NFSU2_TR(0x58d8f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d8f3:{NFSU2_TR(0x58d8f3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d8f4:{NFSU2_TR(0x58d8f4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d8f5:{NFSU2_TR(0x58d8f5);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58d8f9:{NFSU2_TR(0x58d8f9);
u8 U[4];
w4(U+0,u32(0x58b270ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d8fe:{NFSU2_TR(0x58d8fe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d8ff:{NFSU2_TR(0x58d8ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58d919;}}
}
B58d901:L58d901:{c.instructions+=2;NFSU2_TR(0x58d901);
u8 U[4];
w4(U+0,u32(0x6764656cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d906:{NFSU2_TR(0x58d906);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d90bull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58d90b:L58d90b:{c.instructions+=2;NFSU2_TR(0x58d90b);
__builtin_memmove((R+4),(R+0),4);
}
B58d90d:{NFSU2_TR(0x58d90d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d912ull));
TAIL_STATIC(0x5869a0u,586);
}
B58d912:L58d912:{c.instructions+=3;NFSU2_TR(0x58d912);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58d913:{NFSU2_TR(0x58d913);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58d916:{NFSU2_TR(0x58d916);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58d919:L58d919:{c.instructions+=2;NFSU2_TR(0x58d919);
u8 U[4];
w4(U+0,u32(0x676c6561ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d91e:{NFSU2_TR(0x58d91e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d923ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58d923:L58d923:{c.instructions+=2;NFSU2_TR(0x58d923);
__builtin_memmove((R+4),(R+0),4);
}
B58d925:{NFSU2_TR(0x58d925);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d92aull));
TAIL_STATIC(0x5869a0u,586);
}
B58d92a:L58d92a:{c.instructions+=3;NFSU2_TR(0x58d92a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58d92b:{NFSU2_TR(0x58d92b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58d92e:{NFSU2_TR(0x58d92e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58d931:L58d931:{c.instructions+=4;NFSU2_TR(0x58d931);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B58d934:{NFSU2_TR(0x58d934);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58d935:{NFSU2_TR(0x58d935);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58d938:{NFSU2_TR(0x58d938);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58d940:L58d940:{c.instructions+=3;NFSU2_TR(0x58d940);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58d944:{NFSU2_TR(0x58d944);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d945:{NFSU2_TR(0x58d945);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d94aull));
TAIL_STATIC(0x58ae30u,58a);
}
B58d94a:L58d94a:{c.instructions+=2;NFSU2_TR(0x58d94a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58d94c:{NFSU2_TR(0x58d94c);
if(r1(R+518)){{goto L58d961;}}
}
B58d94e:L58d94e:{c.instructions+=5;NFSU2_TR(0x58d94e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58d954:{NFSU2_TR(0x58d954);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1000ull))));
}
B58d959:{NFSU2_TR(0x58d959);
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
B58d95b:{NFSU2_TR(0x58d95b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B58d95e:{NFSU2_TR(0x58d95e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58d961:L58d961:{c.instructions+=4;NFSU2_TR(0x58d961);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58d963:{NFSU2_TR(0x58d963);
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
B58d965:{NFSU2_TR(0x58d965);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B58d968:{NFSU2_TR(0x58d968);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58d970:L58d970:{c.instructions+=6;NFSU2_TR(0x58d970);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d971:{NFSU2_TR(0x58d971);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d972:{NFSU2_TR(0x58d972);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d973:{NFSU2_TR(0x58d973);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d974:{NFSU2_TR(0x58d974);
__builtin_memmove((R+24),(R+4),4);
}
B58d976:{NFSU2_TR(0x58d976);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d97bull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58d97b:L58d97b:{c.instructions+=3;NFSU2_TR(0x58d97b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B58d97e:{NFSU2_TR(0x58d97e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58d980:{NFSU2_TR(0x58d980);
if(r1(R+518)){{goto L58d9d0;}}
}
B58d982:L58d982:{c.instructions+=3;NFSU2_TR(0x58d982);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B58d986:{NFSU2_TR(0x58d986);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58d988:{NFSU2_TR(0x58d988);
if(r1(R+518)){{goto L58d9d0;}}
}
B58d98a:L58d98a:{c.instructions+=2;NFSU2_TR(0x58d98a);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+20))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B58d98e:{NFSU2_TR(0x58d98e);
if(r1(R+518)){{goto L58d9d0;}}
}
B58d990:L58d990:{c.instructions+=4;NFSU2_TR(0x58d990);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58d994:{NFSU2_TR(0x58d994);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d995:{NFSU2_TR(0x58d995);
__builtin_memmove((R+4),(R+24),4);
}
B58d997:{NFSU2_TR(0x58d997);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d99cull));
TAIL_STATIC(0x58ae30u,58a);
}
B58d99c:L58d99c:{c.instructions+=3;NFSU2_TR(0x58d99c);
__builtin_memmove((R+28),(R+0),4);
}
B58d99e:{NFSU2_TR(0x58d99e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58d9a0:{NFSU2_TR(0x58d9a0);
if(r1(R+518)){{goto L58d9d0;}}
}
B58d9a2:L58d9a2:{c.instructions+=4;NFSU2_TR(0x58d9a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58d9a8:{NFSU2_TR(0x58d9a8);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B58d9aa:{NFSU2_TR(0x58d9aa);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58d9ac:{NFSU2_TR(0x58d9ac);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L58d9d0;}}
}
B58d9ae:L58d9ae:{c.instructions+=1;NFSU2_TR(0x58d9ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58d9b4:L58d9b4:{c.instructions+=3;NFSU2_TR(0x58d9b4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d9b5:{NFSU2_TR(0x58d9b5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d9b6:{NFSU2_TR(0x58d9b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d9bbull));
TAIL_STATIC(0x43dc30u,43d);
}
B58d9bb:L58d9bb:{c.instructions+=3;NFSU2_TR(0x58d9bb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58d9be:{NFSU2_TR(0x58d9be);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58d9c0:{NFSU2_TR(0x58d9c0);
if(r1(R+518)){{goto L58d9d9;}}
}
B58d9c2:L58d9c2:{c.instructions+=5;NFSU2_TR(0x58d9c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58d9c8:{NFSU2_TR(0x58d9c8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B58d9c9:{NFSU2_TR(0x58d9c9);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x64ull))));
}
B58d9cc:{NFSU2_TR(0x58d9cc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B58d9ce:{NFSU2_TR(0x58d9ce);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58d9b4u);}goto L58d9b4;}}
}
B58d9d0:L58d9d0:{c.instructions+=6;NFSU2_TR(0x58d9d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58d9d1:{NFSU2_TR(0x58d9d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58d9d2:{NFSU2_TR(0x58d9d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58d9d3:{NFSU2_TR(0x58d9d3);
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
B58d9d5:{NFSU2_TR(0x58d9d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58d9d6:{NFSU2_TR(0x58d9d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58d9d9:L58d9d9:{c.instructions+=9;NFSU2_TR(0x58d9d9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B58d9dc:{NFSU2_TR(0x58d9dc);
u8 U[16];
w4(U+0,u32(u32(u32(0x1fcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B58d9e3:{NFSU2_TR(0x58d9e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58d9e4:{NFSU2_TR(0x58d9e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58d9e5:{NFSU2_TR(0x58d9e5);
u8 U[4];
w4(U+0,u32(u32(u32(0x1bull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B58d9e8:{NFSU2_TR(0x58d9e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58d9e9:{NFSU2_TR(0x58d9e9);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B58d9eb:{NFSU2_TR(0x58d9eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58d9ec:{NFSU2_TR(0x58d9ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58d9f0:L58d9f0:{c.instructions+=5;NFSU2_TR(0x58d9f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d9f1:{NFSU2_TR(0x58d9f1);
__builtin_memmove((R+24),(R+4),4);
}
B58d9f3:{NFSU2_TR(0x58d9f3);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58d9f5:{NFSU2_TR(0x58d9f5);
w4(R+4,u32(0x850080ull));
}
B58d9fa:{NFSU2_TR(0x58d9fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58d9ffull));
TAIL_STATIC(0x5031f0u,503);
}
B58d9ff:L58d9ff:{c.instructions+=3;NFSU2_TR(0x58d9ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58da00:{NFSU2_TR(0x58da00);
__builtin_memmove((R+4),(R+24),4);
}
B58da02:{NFSU2_TR(0x58da02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58da07ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58d970u);}goto L58d970;}
}
B58da07:L58da07:{c.instructions+=2;NFSU2_TR(0x58da07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58da08:{NFSU2_TR(0x58da08);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58da10:L58da10:{c.instructions+=8;NFSU2_TR(0x58da10);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58da11:{NFSU2_TR(0x58da11);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58da12:{NFSU2_TR(0x58da12);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B58da16:{NFSU2_TR(0x58da16);
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
B58da18:{NFSU2_TR(0x58da18);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58da19:{NFSU2_TR(0x58da19);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58da1a:{NFSU2_TR(0x58da1a);
__builtin_memmove((R+28),(R+4),4);
}
B58da1c:{NFSU2_TR(0x58da1c);
if(r1(R+518)){{goto L58da7c;}}
}
B58da1e:L58da1e:{c.instructions+=2;NFSU2_TR(0x58da1e);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+20))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x0ull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B58da22:{NFSU2_TR(0x58da22);
if(r1(R+518)){{goto L58da7c;}}
}
B58da24:L58da24:{c.instructions+=3;NFSU2_TR(0x58da24);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58da27:{NFSU2_TR(0x58da27);
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
B58da29:{NFSU2_TR(0x58da29);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L58da7c;}}
}
B58da2b:L58da2b:{c.instructions+=2;NFSU2_TR(0x58da2b);
w4(R+4,u32(0x850080ull));
}
B58da30:{NFSU2_TR(0x58da30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58da35ull));
TAIL_STATIC(0x5031f0u,503);
}
B58da35:L58da35:{c.instructions+=3;NFSU2_TR(0x58da35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58da36:{NFSU2_TR(0x58da36);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58da37:{NFSU2_TR(0x58da37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58da3cull));
TAIL_STATIC(0x43dc30u,43d);
}
B58da3c:L58da3c:{c.instructions+=3;NFSU2_TR(0x58da3c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58da3f:{NFSU2_TR(0x58da3f);
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
B58da41:{NFSU2_TR(0x58da41);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58da4a;}}
}
B58da43:L58da43:{c.instructions+=5;NFSU2_TR(0x58da43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58da44:{NFSU2_TR(0x58da44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58da45:{NFSU2_TR(0x58da45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58da46:{NFSU2_TR(0x58da46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58da47:{NFSU2_TR(0x58da47);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58da4a:L58da4a:{c.instructions+=4;NFSU2_TR(0x58da4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58da50:{NFSU2_TR(0x58da50);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B58da52:{NFSU2_TR(0x58da52);
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
B58da54:{NFSU2_TR(0x58da54);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L58da7c;}}
}
B58da56:L58da56:{c.instructions+=2;NFSU2_TR(0x58da56);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1e0ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58da5c:{NFSU2_TR(0x58da5c);
__builtin_memmove((R+16),(R+16),4);
}
B58da60:L58da60:{c.instructions+=3;NFSU2_TR(0x58da60);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58da61:{NFSU2_TR(0x58da61);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58da62:{NFSU2_TR(0x58da62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58da67ull));
TAIL_STATIC(0x43dc30u,43d);
}
B58da67:L58da67:{c.instructions+=3;NFSU2_TR(0x58da67);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58da6a:{NFSU2_TR(0x58da6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58da6c:{NFSU2_TR(0x58da6c);
if(r1(R+518)){{goto L58da88;}}
}
B58da6e:L58da6e:{c.instructions+=5;NFSU2_TR(0x58da6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58da74:{NFSU2_TR(0x58da74);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B58da75:{NFSU2_TR(0x58da75);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x64ull))));
}
B58da78:{NFSU2_TR(0x58da78);
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
B58da7a:{NFSU2_TR(0x58da7a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58da60u);}goto L58da60;}}
}
B58da7c:L58da7c:{c.instructions+=6;NFSU2_TR(0x58da7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58da7d:{NFSU2_TR(0x58da7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58da7e:{NFSU2_TR(0x58da7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58da7f:{NFSU2_TR(0x58da7f);
w4(R+0,u32(0xfffffffeull));
}
B58da84:{NFSU2_TR(0x58da84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58da85:{NFSU2_TR(0x58da85);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58da88:L58da88:{c.instructions+=7;NFSU2_TR(0x58da88);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58da8c:{NFSU2_TR(0x58da8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58da90:{NFSU2_TR(0x58da90);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58da91:{NFSU2_TR(0x58da91);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58da92:{NFSU2_TR(0x58da92);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58da93:{NFSU2_TR(0x58da93);
__builtin_memmove((R+4),(R+28),4);
}
B58da95:{NFSU2_TR(0x58da95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58da9aull));
TAIL_STATIC(0x58af10u,58a);
}
B58da9a:L58da9a:{c.instructions+=5;NFSU2_TR(0x58da9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58da9b:{NFSU2_TR(0x58da9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58da9c:{NFSU2_TR(0x58da9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58da9d:{NFSU2_TR(0x58da9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58da9e:{NFSU2_TR(0x58da9e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58dab0:L58dab0:{c.instructions+=10;NFSU2_TR(0x58dab0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B58dab3:{NFSU2_TR(0x58dab3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58dab4:{NFSU2_TR(0x58dab4);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B58dab8:{NFSU2_TR(0x58dab8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58dabb:{NFSU2_TR(0x58dabb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x67616d65ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58dac0:{NFSU2_TR(0x58dac0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58dac1:{NFSU2_TR(0x58dac1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58dac2:{NFSU2_TR(0x58dac2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58dac6:{NFSU2_TR(0x58dac6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58dac7:{NFSU2_TR(0x58dac7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58dbad;}}
}
B58dacd:L58dacd:{c.instructions+=4;NFSU2_TR(0x58dacd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58dad0:{NFSU2_TR(0x58dad0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58dad3:{NFSU2_TR(0x58dad3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+20),(U+0),4);
}
B58dad6:{NFSU2_TR(0x58dad6);
if(r1(R+518)){{goto L58dbad;}}
}
B58dadc:L58dadc:{c.instructions+=4;NFSU2_TR(0x58dadc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58dadf:{NFSU2_TR(0x58dadf);
u8 U[4];
w4(U+0,u32(0x79ac28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58dae4:{NFSU2_TR(0x58dae4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58dae5:{NFSU2_TR(0x58dae5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58daeaull));
TAIL_STATIC(0x7414a0u,741);
}
B58daea:L58daea:{c.instructions+=3;NFSU2_TR(0x58daea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58daed:{NFSU2_TR(0x58daed);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58daef:{NFSU2_TR(0x58daef);
if(r1(R+518)){{goto L58db7f;}}
}
B58daf5:L58daf5:{c.instructions+=4;NFSU2_TR(0x58daf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58daf8:{NFSU2_TR(0x58daf8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58daf9:{NFSU2_TR(0x58daf9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58dafa:{NFSU2_TR(0x58dafa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58daffull));
TAIL_STATIC(0x7449f0u,744);
}
B58daff:L58daff:{c.instructions+=3;NFSU2_TR(0x58daff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58db02:{NFSU2_TR(0x58db02);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58db03:{NFSU2_TR(0x58db03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58db08ull));
TAIL_STATIC(0x58b9a0u,58b);
}
B58db08:L58db08:{c.instructions+=2;NFSU2_TR(0x58db08);
__builtin_memmove((R+4),(R+0),4);
}
B58db0a:{NFSU2_TR(0x58db0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58db0full));
TAIL_STATIC(0x585440u,585);
}
B58db0f:L58db0f:{c.instructions+=2;NFSU2_TR(0x58db0f);
u8 U[4];
w4(U+0,u32(0x73656c66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58db14:{NFSU2_TR(0x58db14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58db19ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58db19:L58db19:{c.instructions+=3;NFSU2_TR(0x58db19);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58db1c:{NFSU2_TR(0x58db1c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58db1d:{NFSU2_TR(0x58db1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58db22ull));
TAIL_STATIC(0x744620u,744);
}
B58db22:L58db22:{c.instructions+=4;NFSU2_TR(0x58db22);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x330ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58db28:{NFSU2_TR(0x58db28);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58db2b:{NFSU2_TR(0x58db2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58db2d:{NFSU2_TR(0x58db2d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58db60;}}
}
B58db2f:L58db2f:{c.instructions+=3;NFSU2_TR(0x58db2f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58db31:{NFSU2_TR(0x58db31);
w4(R+4,u32(0x138ull));
}
B58db36:{NFSU2_TR(0x58db36);
__builtin_memmove((R+28),(R+20),4);
}
B58db38:L58db38:{c.instructions+=1;NFSU2_TR(0x58db38);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58db3a;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58db38u);}goto L58db38;}
}
B58db3a:L58db3a:{c.instructions+=4;NFSU2_TR(0x58db3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58db3d:{NFSU2_TR(0x58db3d);
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
B58db3f:{NFSU2_TR(0x58db3f);
u8 U[4];
w4(U+0,u32(0xffffffffull));
s4(u32(r4(R+20)),r4(U+0));
}
B58db46:{NFSU2_TR(0x58db46);
if(r1(R+518)){TAIL_STATIC(0x58e073u,58e);}
}
B58db4c:L58db4c:{c.instructions+=5;NFSU2_TR(0x58db4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58db4f:{NFSU2_TR(0x58db4f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58db50:{NFSU2_TR(0x58db50);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58db51:{NFSU2_TR(0x58db51);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58db53:{NFSU2_TR(0x58db53);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58db55ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B58db55:L58db55:{c.instructions+=7;NFSU2_TR(0x58db55);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B58db58:{NFSU2_TR(0x58db58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58db59:{NFSU2_TR(0x58db59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58db5a:{NFSU2_TR(0x58db5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58db5b:{NFSU2_TR(0x58db5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58db5c:{NFSU2_TR(0x58db5c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x34ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x34ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58db5f:{NFSU2_TR(0x58db5f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58db60:L58db60:{c.instructions+=3;NFSU2_TR(0x58db60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58db63:{NFSU2_TR(0x58db63);
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
B58db65:{NFSU2_TR(0x58db65);
if(r1(R+518)){TAIL_STATIC(0x58e073u,58e);}
}
B58db6b:L58db6b:{c.instructions+=5;NFSU2_TR(0x58db6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58db6e:{NFSU2_TR(0x58db6e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58db6f:{NFSU2_TR(0x58db6f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58db70:{NFSU2_TR(0x58db70);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58db72:{NFSU2_TR(0x58db72);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58db74ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B58db74:L58db74:{c.instructions+=7;NFSU2_TR(0x58db74);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B58db77:{NFSU2_TR(0x58db77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58db78:{NFSU2_TR(0x58db78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58db79:{NFSU2_TR(0x58db79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58db7a:{NFSU2_TR(0x58db7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58db7b:{NFSU2_TR(0x58db7b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x34ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x34ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58db7e:{NFSU2_TR(0x58db7e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58db7f:L58db7f:{c.instructions+=3;NFSU2_TR(0x58db7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58db82:{NFSU2_TR(0x58db82);
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
B58db84:{NFSU2_TR(0x58db84);
if(r1(R+518)){{goto L58db93;}}
}
B58db86:L58db86:{c.instructions+=5;NFSU2_TR(0x58db86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58db89:{NFSU2_TR(0x58db89);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58db8a:{NFSU2_TR(0x58db8a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58db8c:{NFSU2_TR(0x58db8c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58db8e:{NFSU2_TR(0x58db8e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58db90ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B58db90:L58db90:{c.instructions+=1;NFSU2_TR(0x58db90);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B58db93:L58db93:{c.instructions+=3;NFSU2_TR(0x58db93);
__builtin_memmove((R+28),(R+20),4);
}
B58db95:{NFSU2_TR(0x58db95);
w4(R+4,u32(0x138ull));
}
B58db9a:{NFSU2_TR(0x58db9a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58db9c:L58db9c:{c.instructions+=1;NFSU2_TR(0x58db9c);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58db9e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58db9cu);}goto L58db9c;}
}
B58db9e:L58db9e:{c.instructions+=7;NFSU2_TR(0x58db9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58db9f:{NFSU2_TR(0x58db9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58dba0:{NFSU2_TR(0x58dba0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
s4(u32(r4(R+20)),r4(U+0));
}
B58dba7:{NFSU2_TR(0x58dba7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58dba8:{NFSU2_TR(0x58dba8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58dba9:{NFSU2_TR(0x58dba9);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x34ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x34ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58dbac:{NFSU2_TR(0x58dbac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58dbad:L58dbad:{c.instructions+=2;NFSU2_TR(0x58dbad);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x706c6179ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58dbb2:{NFSU2_TR(0x58dbb2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58de50;}}
}
B58dbb8:L58dbb8:{c.instructions+=4;NFSU2_TR(0x58dbb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58dbbb:{NFSU2_TR(0x58dbbb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58dbbe:{NFSU2_TR(0x58dbbe);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+20),(U+0),4);
}
B58dbc1:{NFSU2_TR(0x58dbc1);
if(r1(R+518)){TAIL_STATIC(0x58e073u,58e);}
}
B58dbc7:L58dbc7:{c.instructions+=1;NFSU2_TR(0x58dbc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58dbccull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58dbcc:L58dbcc:{c.instructions+=2;NFSU2_TR(0x58dbcc);
__builtin_memmove((R+4),(R+0),4);
}
B58dbce:{NFSU2_TR(0x58dbce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58dbd3ull));
TAIL_STATIC(0x586950u,586);
}
B58dbd3:L58dbd3:{c.instructions+=4;NFSU2_TR(0x58dbd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58dbd6:{NFSU2_TR(0x58dbd6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58dbd7:{NFSU2_TR(0x58dbd7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58dbd8:{NFSU2_TR(0x58dbd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58dbddull));
TAIL_STATIC(0x7449f0u,744);
}
B58dbdd:L58dbdd:{c.instructions+=2;NFSU2_TR(0x58dbdd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58dbe0:{NFSU2_TR(0x58dbe0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58dbe5ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58dbe5:L58dbe5:{c.instructions+=2;NFSU2_TR(0x58dbe5);
w4(R+4,u32(0x869888ull));
}
B58dbea:{NFSU2_TR(0x58dbea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58dbefull));
TAIL_STATIC(0x5823b0u,582);
}
B58dbef:L58dbef:{c.instructions+=1;NFSU2_TR(0x58dbef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58dbf4ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58dbf4:L58dbf4:{c.instructions+=4;NFSU2_TR(0x58dbf4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x128ull))));
__builtin_memmove((R+0),(U+0),4);
}
B58dbfa:{NFSU2_TR(0x58dbfa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58dbfb:{NFSU2_TR(0x58dbfb);
u8 U[4];
w4(U+0,u32(0x869888ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58dc00:{NFSU2_TR(0x58dc00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58dc05ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B58dc05:L58dc05:{c.instructions+=2;NFSU2_TR(0x58dc05);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58dc08:{NFSU2_TR(0x58dc08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58dc0dull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58dc0d:L58dc0d:{c.instructions+=3;NFSU2_TR(0x58dc0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58dc13:{NFSU2_TR(0x58dc13);
__builtin_memmove(gp(0x8698c8),(R+4),4);
}
B58dc19:{NFSU2_TR(0x58dc19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58dc1eull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58dc1e:L58dc1e:{c.instructions+=2;NFSU2_TR(0x58dc1e);
w4(R+4,u32(0x850080ull));
}
B58dc23:{NFSU2_TR(0x58dc23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58dc28ull));
TAIL_STATIC(0x5031f0u,503);
}
B58dc28:L58dc28:{c.instructions+=3;NFSU2_TR(0x58dc28);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58dc29:{NFSU2_TR(0x58dc29);
u8 U[4];
w4(U+0,u32(0x8698ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58dc2e:{NFSU2_TR(0x58dc2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58dc33ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B58dc33:L58dc33:{c.instructions+=5;NFSU2_TR(0x58dc33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58dc39:{NFSU2_TR(0x58dc39);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58dc3c:{NFSU2_TR(0x58dc3c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B58dc3e:{NFSU2_TR(0x58dc3e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58dc40:{NFSU2_TR(0x58dc40);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L58dc74;}}
}
B58dc42:L58dc42:{c.instructions+=3;NFSU2_TR(0x58dc42);
w4(R+24,u32(0x8698dcull));
}
B58dc47:{NFSU2_TR(0x58dc47);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58dc4d:{NFSU2_TR(0x58dc4d);
__builtin_memmove((R+4),(R+4),4);
}
B58dc50:L58dc50:{c.instructions+=1;NFSU2_TR(0x58dc50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58dc55ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58dc55:L58dc55:{c.instructions+=3;NFSU2_TR(0x58dc55);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58dc56:{NFSU2_TR(0x58dc56);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58dc57:{NFSU2_TR(0x58dc57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58dc5cull));
TAIL_STATIC(0x43dbd0u,43d);
}
B58dc5c:L58dc5c:{c.instructions+=7;NFSU2_TR(0x58dc5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58dc62:{NFSU2_TR(0x58dc62);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58dc65:{NFSU2_TR(0x58dc65);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B58dc66:{NFSU2_TR(0x58dc66);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x64ull))));
}
B58dc69:{NFSU2_TR(0x58dc69);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B58dc6c:{NFSU2_TR(0x58dc6c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B58dc6e:{NFSU2_TR(0x58dc6e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58dc50u);}goto L58dc50;}}
}
B58dc70:L58dc70:{c.instructions+=1;NFSU2_TR(0x58dc70);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58dc74:L58dc74:{c.instructions+=7;NFSU2_TR(0x58dc74);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58dc7a:{NFSU2_TR(0x58dc7a);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B58dc7b:{NFSU2_TR(0x58dc7b);
__builtin_memmove(gp(0x7fbdb8),(R+8),4);
}
B58dc81:{NFSU2_TR(0x58dc81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58dc87:{NFSU2_TR(0x58dc87);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58dc89:{NFSU2_TR(0x58dc89);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B58dc91:{NFSU2_TR(0x58dc91);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L58dd8e;}}
}
B58dc97:L58dc97:{c.instructions+=7;NFSU2_TR(0x58dc97);
w4(R+24,u32(0xfffffe2cull));
}
B58dc9c:{NFSU2_TR(0x58dc9c);
w4(R+28,u32(0x869318ull));
}
B58dca1:{NFSU2_TR(0x58dca1);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+20))));
}
B58dca3:{NFSU2_TR(0x58dca3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58dca7:{NFSU2_TR(0x58dca7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1d4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58dcad:{NFSU2_TR(0x58dcad);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58dcb1:{NFSU2_TR(0x58dcb1);
{goto L58dcc0;}
}
B58dcb3:L58dcb3:{c.instructions+=3;NFSU2_TR(0x58dcb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58dcb7:{NFSU2_TR(0x58dcb7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B58dcbb:{NFSU2_TR(0x58dcbb);
{goto L58dcc0;}
}
B58dcc0:L58dcc0:{c.instructions+=8;NFSU2_TR(0x58dcc0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58dcc2:{NFSU2_TR(0x58dcc2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58dcc6:{NFSU2_TR(0x58dcc6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58dcca:{NFSU2_TR(0x58dcca);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58dcce:{NFSU2_TR(0x58dcce);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58dcd2:{NFSU2_TR(0x58dcd2);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58dcd6:{NFSU2_TR(0x58dcd6);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x0ull)));
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B58dcda:{NFSU2_TR(0x58dcda);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L58dd38;}}
}
B58dcdc:L58dcdc:{c.instructions+=2;NFSU2_TR(0x58dcdc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x869318ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x869318ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B58dce2:{NFSU2_TR(0x58dce2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L58dd38;}}
}
B58dce4:L58dce4:{c.instructions+=3;NFSU2_TR(0x58dce4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58dce8:{NFSU2_TR(0x58dce8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B58dcee:{NFSU2_TR(0x58dcee);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L58dd38;}}
}
B58dcf0:L58dcf0:{c.instructions+=2;NFSU2_TR(0x58dcf0);
u8 U[4];
w4(U+0,u32(0x73656c66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58dcf5:{NFSU2_TR(0x58dcf5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58dcfaull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58dcfa:L58dcfa:{c.instructions+=3;NFSU2_TR(0x58dcfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58dcfd:{NFSU2_TR(0x58dcfd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58dcfe:{NFSU2_TR(0x58dcfe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58dd03ull));
TAIL_STATIC(0x744620u,744);
}
B58dd03:L58dd03:{c.instructions+=3;NFSU2_TR(0x58dd03);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58dd06:{NFSU2_TR(0x58dd06);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58dd08:{NFSU2_TR(0x58dd08);
if(r1(R+518)){{goto L58dd38;}}
}
B58dd0a:L58dd0a:{c.instructions+=6;NFSU2_TR(0x58dd0a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x398ull))));
}
B58dd0f:{NFSU2_TR(0x58dd0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58dd10:{NFSU2_TR(0x58dd10);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58dd14:{NFSU2_TR(0x58dd14);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58dd16:{NFSU2_TR(0x58dd16);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58dd17:{NFSU2_TR(0x58dd17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58dd1cull));
TAIL_STATIC(0x742e30u,742);
}
B58dd1c:L58dd1c:{c.instructions+=9;NFSU2_TR(0x58dd1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58dd20:{NFSU2_TR(0x58dd20);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B58dd22:{NFSU2_TR(0x58dd22);
u8 U[16];
w4(U+0,u32(u32(u32(0x1d4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B58dd29:{NFSU2_TR(0x58dd29);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B58dd2c:{NFSU2_TR(0x58dd2c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58dd2e:{NFSU2_TR(0x58dd2e);
__builtin_memmove((R+0),(R+518),1);
}
B58dd31:{NFSU2_TR(0x58dd31);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58dd33:{NFSU2_TR(0x58dd33);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B58dd36:{NFSU2_TR(0x58dd36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58dd3a;}}
}
B58dd38:L58dd38:{c.instructions+=1;NFSU2_TR(0x58dd38);
__builtin_memmove((R+0),(R+12),4);
}
B58dd3a:L58dd3a:{c.instructions+=4;NFSU2_TR(0x58dd3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58dd3b:{NFSU2_TR(0x58dd3b);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58dd3f:{NFSU2_TR(0x58dd3f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58dd40:{NFSU2_TR(0x58dd40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58dd45ull));
TAIL_STATIC(0x742e60u,742);
}
B58dd45:L58dd45:{c.instructions+=5;NFSU2_TR(0x58dd45);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xffffff60ull))));
}
B58dd4b:{NFSU2_TR(0x58dd4b);
w4(R+4,u32(0x5ull));
}
B58dd50:{NFSU2_TR(0x58dd50);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B58dd54:{NFSU2_TR(0x58dd54);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58dd56:{NFSU2_TR(0x58dd56);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B58dd59:L58dd59:{c.instructions+=1;NFSU2_TR(0x58dd59);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L58dd5b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58dd59u);}goto L58dd59;}
}
B58dd5b:L58dd5b:{c.instructions+=4;NFSU2_TR(0x58dd5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58dd5f:{NFSU2_TR(0x58dd5f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58dd60:{NFSU2_TR(0x58dd60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58dd61:{NFSU2_TR(0x58dd61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58dd66ull));
TAIL_STATIC(0x43dc00u,43d);
}
B58dd66:L58dd66:{c.instructions+=10;NFSU2_TR(0x58dd66);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58dd6a:{NFSU2_TR(0x58dd6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58dd70:{NFSU2_TR(0x58dd70);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B58dd73:{NFSU2_TR(0x58dd73);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B58dd74:{NFSU2_TR(0x58dd74);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B58dd77:{NFSU2_TR(0x58dd77);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x64ull))));
}
B58dd7a:{NFSU2_TR(0x58dd7a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B58dd7c:{NFSU2_TR(0x58dd7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58dd80:{NFSU2_TR(0x58dd80);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58dd84:{NFSU2_TR(0x58dd84);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58dcb3u);}goto L58dcb3;}}
}
B58dd8a:L58dd8a:{c.instructions+=1;NFSU2_TR(0x58dd8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58dd8e:L58dd8e:{c.instructions+=2;NFSU2_TR(0x58dd8e);
w4(R+4,u32(0x850080ull));
}
B58dd93:{NFSU2_TR(0x58dd93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58dd98ull));
TAIL_STATIC(0x5031f0u,503);
}
B58dd98:L58dd98:{c.instructions+=4;NFSU2_TR(0x58dd98);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58dd99:{NFSU2_TR(0x58dd99);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x38ull))));
__builtin_memmove((R+4),(U+0),4);
}
B58dd9c:{NFSU2_TR(0x58dd9c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58dd9d:{NFSU2_TR(0x58dd9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58dda2ull));
TAIL_STATIC(0x43dc30u,43d);
}
B58dda2:L58dda2:{c.instructions+=5;NFSU2_TR(0x58dda2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58dda5:{NFSU2_TR(0x58dda5);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B58dda7:{NFSU2_TR(0x58dda7);
u8 U[2];
__builtin_memmove((U+0),(R+512),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(R+0))));
w1(R+0,u8(u32(r1(U+1))-u32(r1(U+0))));
}
B58dda9:{NFSU2_TR(0x58dda9);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B58ddab:{NFSU2_TR(0x58ddab);
w4(R+4,u32(0x8691d0ull));
}
B58ddb0:L58ddb0:{c.instructions+=9;NFSU2_TR(0x58ddb0);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B58ddb2:{NFSU2_TR(0x58ddb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B58ddb9:{NFSU2_TR(0x58ddb9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B58ddbb:{NFSU2_TR(0x58ddbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58ddbe:{NFSU2_TR(0x58ddbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58ddc1:{NFSU2_TR(0x58ddc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58ddc4:{NFSU2_TR(0x58ddc4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x14ull))));
}
B58ddc7:{NFSU2_TR(0x58ddc7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x869234ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x869234ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B58ddcd:{NFSU2_TR(0x58ddcd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58ddb0u);}goto L58ddb0;}}
}
B58ddcf:L58ddcf:{c.instructions+=2;NFSU2_TR(0x58ddcf);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58ddd1:{NFSU2_TR(0x58ddd1);
if(r1(R+518)){{goto L58de31;}}
}
B58ddd3:L58ddd3:{c.instructions+=4;NFSU2_TR(0x58ddd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58ddd9:{NFSU2_TR(0x58ddd9);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B58dddb:{NFSU2_TR(0x58dddb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58dddd:{NFSU2_TR(0x58dddd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L58de31;}}
}
B58dddf:L58dddf:{c.instructions+=1;NFSU2_TR(0x58dddf);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B58dde1:L58dde1:{c.instructions+=2;NFSU2_TR(0x58dde1);
w4(R+4,u32(0x850080ull));
}
B58dde6:{NFSU2_TR(0x58dde6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ddebull));
TAIL_STATIC(0x5031f0u,503);
}
B58ddeb:L58ddeb:{c.instructions+=6;NFSU2_TR(0x58ddeb);
__builtin_memmove((R+8),(R+28),4);
}
B58dded:{NFSU2_TR(0x58dded);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B58ddf0:{NFSU2_TR(0x58ddf0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ddf1:{NFSU2_TR(0x58ddf1);
u8 U[12];
w4(U+0,u32(u32(u32(0x1c4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B58ddf8:{NFSU2_TR(0x58ddf8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ddf9:{NFSU2_TR(0x58ddf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ddfeull));
TAIL_STATIC(0x43dc30u,43d);
}
B58ddfe:L58ddfe:{c.instructions+=3;NFSU2_TR(0x58ddfe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58de01:{NFSU2_TR(0x58de01);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58de03:{NFSU2_TR(0x58de03);
if(r1(R+518)){{goto L58de22;}}
}
B58de05:L58de05:{c.instructions+=7;NFSU2_TR(0x58de05);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B58de07:{NFSU2_TR(0x58de07);
__builtin_memmove((R+4),gp(0x7fbdfc),2);
}
B58de0e:{NFSU2_TR(0x58de0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B58de11:{NFSU2_TR(0x58de11);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x869278ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B58de18:{NFSU2_TR(0x58de18);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58de19:{NFSU2_TR(0x58de19);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58de1a:{NFSU2_TR(0x58de1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58de1full));
TAIL_STATIC(0x5857a0u,585);
}
B58de1f:L58de1f:{c.instructions+=1;NFSU2_TR(0x58de1f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58de22:L58de22:{c.instructions+=5;NFSU2_TR(0x58de22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58de28:{NFSU2_TR(0x58de28);
w1(R+12,u8(u32(r1(R+12))+u32(u8(0x1ull))));
}
B58de2a:{NFSU2_TR(0x58de2a);
w4(R+28,u32(r1(R+12)));
}
B58de2d:{NFSU2_TR(0x58de2d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B58de2f:{NFSU2_TR(0x58de2f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58dde1u);}goto L58dde1;}}
}
B58de31:L58de31:{c.instructions+=3;NFSU2_TR(0x58de31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58de34:{NFSU2_TR(0x58de34);
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
B58de36:{NFSU2_TR(0x58de36);
if(r1(R+518)){TAIL_STATIC(0x58e073u,58e);}
}
B58de3c:L58de3c:{c.instructions+=5;NFSU2_TR(0x58de3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58de3f:{NFSU2_TR(0x58de3f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58de40:{NFSU2_TR(0x58de40);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58de41:{NFSU2_TR(0x58de41);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58de43:{NFSU2_TR(0x58de43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58de45ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B58de45:L58de45:{c.instructions+=7;NFSU2_TR(0x58de45);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B58de48:{NFSU2_TR(0x58de48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58de49:{NFSU2_TR(0x58de49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58de4a:{NFSU2_TR(0x58de4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58de4b:{NFSU2_TR(0x58de4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58de4c:{NFSU2_TR(0x58de4c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x34ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x34ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58de4f:{NFSU2_TR(0x58de4f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58de50:L58de50:{c.instructions+=2;NFSU2_TR(0x58de50);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x24727570ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58de55:{NFSU2_TR(0x58de55);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58df4f;}}
}
B58de5b:L58de5b:{c.instructions+=3;NFSU2_TR(0x58de5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58de5e:{NFSU2_TR(0x58de5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58de60:{NFSU2_TR(0x58de60);
if(r1(R+518)){{goto L58df4f;}}
}
B58de66:L58de66:{c.instructions+=3;NFSU2_TR(0x58de66);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58de68:{NFSU2_TR(0x58de68);
w4(R+4,u32(0x4eull));
}
B58de6d:{NFSU2_TR(0x58de6d);
w4(R+28,u32(0x86a620ull));
}
B58de72:L58de72:{c.instructions+=1;NFSU2_TR(0x58de72);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58de74;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58de72u);}goto L58de72;}
}
B58de74:L58de74:{c.instructions+=3;NFSU2_TR(0x58de74);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B58de76:{NFSU2_TR(0x58de76);
w4(R+20,u32(0x86a620ull));
}
B58de7b:{NFSU2_TR(0x58de7b);
{goto L58de80;}
}
B58de80:L58de80:{c.instructions+=11;NFSU2_TR(0x58de80);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B58de82:{NFSU2_TR(0x58de82);
u8 U[8];
w4(U+0,u32(u32(u32(0x1dull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58de86:{NFSU2_TR(0x58de86);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58de87:{NFSU2_TR(0x58de87);
u8 U[8];
w4(U+0,u32(u32(u32(0x25ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58de8b:{NFSU2_TR(0x58de8b);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58de8f:{NFSU2_TR(0x58de8f);
u8 U[6];
w4(U+0,u32(u32(u32(0x29ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B58de94:{NFSU2_TR(0x58de94);
u8 U[4];
w4(U+0,u32(0x7a16c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58de99:{NFSU2_TR(0x58de99);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58de9a:{NFSU2_TR(0x58de9a);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58de9f:{NFSU2_TR(0x58de9f);
u8 U[5];
w4(U+0,u32(u32(u32(0x33ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B58dea3:{NFSU2_TR(0x58dea3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58dea8ull));
TAIL_STATIC(0x4400d0u,440);
}
B58dea8:L58dea8:{c.instructions+=9;NFSU2_TR(0x58dea8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58deab:{NFSU2_TR(0x58deab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B58deae:{NFSU2_TR(0x58deae);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58deb3:{NFSU2_TR(0x58deb3);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58deb5:{NFSU2_TR(0x58deb5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58deb6:{NFSU2_TR(0x58deb6);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58deba:{NFSU2_TR(0x58deba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58debb:{NFSU2_TR(0x58debb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58debc:{NFSU2_TR(0x58debc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58dec1ull));
TAIL_STATIC(0x7414a0u,741);
}
B58dec1:L58dec1:{c.instructions+=3;NFSU2_TR(0x58dec1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58dec4:{NFSU2_TR(0x58dec4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58dec5:{NFSU2_TR(0x58dec5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58decaull));
TAIL_STATIC(0x742360u,742);
}
B58deca:L58deca:{c.instructions+=5;NFSU2_TR(0x58deca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58decb:{NFSU2_TR(0x58decb);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58decf:{NFSU2_TR(0x58decf);
u8 U[4];
w4(U+0,u32(0x7a16c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ded4:{NFSU2_TR(0x58ded4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ded5:{NFSU2_TR(0x58ded5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58dedaull));
TAIL_STATIC(0x4400d0u,440);
}
B58deda:L58deda:{c.instructions+=7;NFSU2_TR(0x58deda);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58dedd:{NFSU2_TR(0x58dedd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B58dee0:{NFSU2_TR(0x58dee0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58dee2:{NFSU2_TR(0x58dee2);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58dee6:{NFSU2_TR(0x58dee6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58dee7:{NFSU2_TR(0x58dee7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58dee8:{NFSU2_TR(0x58dee8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58deedull));
TAIL_STATIC(0x7414a0u,741);
}
B58deed:L58deed:{c.instructions+=3;NFSU2_TR(0x58deed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58def0:{NFSU2_TR(0x58def0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58def1:{NFSU2_TR(0x58def1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58def6ull));
TAIL_STATIC(0x7420b0u,742);
}
B58def6:L58def6:{c.instructions+=7;NFSU2_TR(0x58def6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58def9:{NFSU2_TR(0x58def9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58defb:{NFSU2_TR(0x58defb);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86a6c4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B58df02:{NFSU2_TR(0x58df02);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58df05:{NFSU2_TR(0x58df05);
u8 U[4];
w4(U+0,u32(0x7a16b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58df0a:{NFSU2_TR(0x58df0a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58df0b:{NFSU2_TR(0x58df0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58df10ull));
TAIL_STATIC(0x7414a0u,741);
}
B58df10:L58df10:{c.instructions+=3;NFSU2_TR(0x58df10);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58df13:{NFSU2_TR(0x58df13);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58df14:{NFSU2_TR(0x58df14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58df19ull));
TAIL_STATIC(0x7420b0u,742);
}
B58df19:L58df19:{c.instructions+=6;NFSU2_TR(0x58df19);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58df1c:{NFSU2_TR(0x58df1c);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x14ull))));
}
B58df1f:{NFSU2_TR(0x58df1f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B58df20:{NFSU2_TR(0x58df20);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
w1(R+512,u8((r4(U+6))<(u32(0x86a6c0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x86a6c0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x86a6c0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58df26:{NFSU2_TR(0x58df26);
__builtin_memmove(gp(0x86a6e4),(R+0),4);
}
B58df2b:{NFSU2_TR(0x58df2b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58de80u);}goto L58de80;}}
}
B58df31:L58df31:{c.instructions+=5;NFSU2_TR(0x58df31);
s1(0x86a6c0,u8(0x0ull));
}
B58df38:{NFSU2_TR(0x58df38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58df3b:{NFSU2_TR(0x58df3b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58df3c:{NFSU2_TR(0x58df3c);
u8 U[4];
w4(U+0,u32(0x86a620ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58df41:{NFSU2_TR(0x58df41);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58df44ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B58df44:L58df44:{c.instructions+=7;NFSU2_TR(0x58df44);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58df47:{NFSU2_TR(0x58df47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58df48:{NFSU2_TR(0x58df48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58df49:{NFSU2_TR(0x58df49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58df4a:{NFSU2_TR(0x58df4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58df4b:{NFSU2_TR(0x58df4b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x34ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x34ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58df4e:{NFSU2_TR(0x58df4e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58df4f:L58df4f:{c.instructions+=2;NFSU2_TR(0x58df4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2472666eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58df54:{NFSU2_TR(0x58df54);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x58e073u,58e);}
}
B58df5a:L58df5a:{c.instructions+=3;NFSU2_TR(0x58df5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58df5d:{NFSU2_TR(0x58df5d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58df5f:{NFSU2_TR(0x58df5f);
if(r1(R+518)){TAIL_STATIC(0x58e073u,58e);}
}
B58df65:L58df65:{c.instructions+=3;NFSU2_TR(0x58df65);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58df67:{NFSU2_TR(0x58df67);
w4(R+4,u32(0x4eull));
}
B58df6c:{NFSU2_TR(0x58df6c);
w4(R+28,u32(0x86a620ull));
}
B58df71:L58df71:{c.instructions+=1;NFSU2_TR(0x58df71);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58df73;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58df71u);}goto L58df71;}
}
B58df73:L58df73:{c.instructions+=14;NFSU2_TR(0x58df73);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B58df75:{NFSU2_TR(0x58df75);
w4(R+28,u32(0x86a620ull));
}
B58df7a:{NFSU2_TR(0x58df7a);
__builtin_memmove((R+12),(R+12),4);
}
B58df80:{NFSU2_TR(0x58df80);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B58df82:{NFSU2_TR(0x58df82);
u8 U[8];
w4(U+0,u32(u32(u32(0x1dull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58df86:{NFSU2_TR(0x58df86);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58df87:{NFSU2_TR(0x58df87);
u8 U[8];
w4(U+0,u32(u32(u32(0x25ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58df8b:{NFSU2_TR(0x58df8b);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58df8f:{NFSU2_TR(0x58df8f);
u8 U[6];
w4(U+0,u32(u32(u32(0x29ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B58df94:{NFSU2_TR(0x58df94);
u8 U[4];
w4(U+0,u32(0x7a16c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58df99:{NFSU2_TR(0x58df99);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58df9a:{NFSU2_TR(0x58df9a);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58df9f:{NFSU2_TR(0x58df9f);
u8 U[5];
w4(U+0,u32(u32(u32(0x33ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B58dfa3:{NFSU2_TR(0x58dfa3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58dfa8ull));
TAIL_STATIC(0x4400d0u,440);
}
B58dfa8:L58dfa8:{c.instructions+=9;NFSU2_TR(0x58dfa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58dfab:{NFSU2_TR(0x58dfab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B58dfae:{NFSU2_TR(0x58dfae);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58dfb3:{NFSU2_TR(0x58dfb3);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58dfb5:{NFSU2_TR(0x58dfb5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58dfb6:{NFSU2_TR(0x58dfb6);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58dfba:{NFSU2_TR(0x58dfba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58dfbb:{NFSU2_TR(0x58dfbb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58dfbc:{NFSU2_TR(0x58dfbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58dfc1ull));
TAIL_STATIC(0x7414a0u,741);
}
B58dfc1:L58dfc1:{c.instructions+=3;NFSU2_TR(0x58dfc1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58dfc4:{NFSU2_TR(0x58dfc4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58dfc5:{NFSU2_TR(0x58dfc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58dfcaull));
TAIL_STATIC(0x742360u,742);
}
B58dfca:L58dfca:{c.instructions+=3;NFSU2_TR(0x58dfca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58dfcd:{NFSU2_TR(0x58dfcd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58dfcf:{NFSU2_TR(0x58dfcf);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x58e049u,58e);}
}
B58dfd1:L58dfd1:{c.instructions+=5;NFSU2_TR(0x58dfd1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58dfd2:{NFSU2_TR(0x58dfd2);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58dfd6:{NFSU2_TR(0x58dfd6);
u8 U[4];
w4(U+0,u32(0x7a16b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58dfdb:{NFSU2_TR(0x58dfdb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58dfdc:{NFSU2_TR(0x58dfdc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58dfe1ull));
TAIL_STATIC(0x4400d0u,440);
}
B58dfe1:L58dfe1:{c.instructions+=10;NFSU2_TR(0x58dfe1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58dfe4:{NFSU2_TR(0x58dfe4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B58dfe7:{NFSU2_TR(0x58dfe7);
u8 U[4];
w4(U+0,u32(0x794e68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58dfec:{NFSU2_TR(0x58dfec);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58dfee:{NFSU2_TR(0x58dfee);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58dff2:{NFSU2_TR(0x58dff2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58dff3:{NFSU2_TR(0x58dff3);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58dff7:{NFSU2_TR(0x58dff7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58dff8:{NFSU2_TR(0x58dff8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58dff9:{NFSU2_TR(0x58dff9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58dffeull));
TAIL_STATIC(0x7414a0u,741);
}
B58dffe:L58dffe:{c.instructions+=1;NFSU2_TR(0x58dffe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
TAIL_STATIC(0x58e001u,58e);
}
XIT:NFSU2_TR_EXIT(0x58d,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
