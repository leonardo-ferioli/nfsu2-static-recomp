#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_4ae(u8* __restrict R,Cpu& c);
u32 body_4cb(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_513(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_581(u8* __restrict R,Cpu& c);
u32 body_583(u8* __restrict R,Cpu& c);
u32 body_585(u8* __restrict R,Cpu& c);
u32 body_586(u8* __restrict R,Cpu& c);
u32 body_587(u8* __restrict R,Cpu& c);
u32 body_588(u8* __restrict R,Cpu& c);
u32 body_589(u8* __restrict R,Cpu& c);
u32 body_58a(u8* __restrict R,Cpu& c);
u32 body_58b(u8* __restrict R,Cpu& c);
u32 body_58c(u8* __restrict R,Cpu& c);
u32 body_58d(u8* __restrict R,Cpu& c);
u32 body_58f(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5f9(u8* __restrict R,Cpu& c);
u32 body_5ff(u8* __restrict R,Cpu& c);
u32 body_6d7(u8* __restrict R,Cpu& c);
u32 body_741(u8* __restrict R,Cpu& c);
u32 body_742(u8* __restrict R,Cpu& c);
u32 body_744(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x58e,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x58e,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_58e(u8* __restrict R,Cpu& c);
u32 page_58e(Cpu& c){return body_58e(c.regs.data(),c);}
__attribute__((noinline)) u32 body_58e(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x58e001:goto L58e001;
case 0x58e002:c.instructions+=1;goto B58e002;
case 0x58e007:goto L58e007;
case 0x58e00b:c.instructions+=10;goto B58e00b;
case 0x58e00f:c.instructions+=9;goto B58e00f;
case 0x58e016:c.instructions+=8;goto B58e016;
case 0x58e01d:c.instructions+=7;goto B58e01d;
case 0x58e021:c.instructions+=6;goto B58e021;
case 0x58e024:c.instructions+=5;goto B58e024;
case 0x58e027:c.instructions+=4;goto B58e027;
case 0x58e02a:c.instructions+=3;goto B58e02a;
case 0x58e02c:c.instructions+=2;goto B58e02c;
case 0x58e032:c.instructions+=1;goto B58e032;
case 0x58e034:goto L58e034;
case 0x58e038:c.instructions+=1;goto B58e038;
case 0x58e03f:goto L58e03f;
case 0x58e043:c.instructions+=5;goto B58e043;
case 0x58e049:c.instructions+=4;goto B58e049;
case 0x58e04c:c.instructions+=3;goto B58e04c;
case 0x58e04d:c.instructions+=2;goto B58e04d;
case 0x58e053:c.instructions+=1;goto B58e053;
case 0x58e059:goto L58e059;
case 0x58e05d:c.instructions+=5;goto B58e05d;
case 0x58e064:c.instructions+=4;goto B58e064;
case 0x58e067:c.instructions+=3;goto B58e067;
case 0x58e068:c.instructions+=2;goto B58e068;
case 0x58e06d:c.instructions+=1;goto B58e06d;
case 0x58e070:goto L58e070;
case 0x58e073:c.instructions+=6;goto B58e073;
case 0x58e074:c.instructions+=5;goto B58e074;
case 0x58e075:c.instructions+=4;goto B58e075;
case 0x58e076:c.instructions+=3;goto B58e076;
case 0x58e077:c.instructions+=2;goto B58e077;
case 0x58e07a:c.instructions+=1;goto B58e07a;
case 0x58e080:goto L58e080;
case 0x58e081:c.instructions+=8;goto B58e081;
case 0x58e083:c.instructions+=7;goto B58e083;
case 0x58e089:c.instructions+=6;goto B58e089;
case 0x58e08f:c.instructions+=5;goto B58e08f;
case 0x58e090:c.instructions+=4;goto B58e090;
case 0x58e092:c.instructions+=3;goto B58e092;
case 0x58e094:c.instructions+=2;goto B58e094;
case 0x58e097:c.instructions+=1;goto B58e097;
case 0x58e099:goto L58e099;
case 0x58e09b:c.instructions+=4;goto B58e09b;
case 0x58e09c:c.instructions+=3;goto B58e09c;
case 0x58e09e:c.instructions+=2;goto B58e09e;
case 0x58e09f:c.instructions+=1;goto B58e09f;
case 0x58e0a2:goto L58e0a2;
case 0x58e0a7:goto L58e0a7;
case 0x58e0aa:c.instructions+=1;goto B58e0aa;
case 0x58e0ac:goto L58e0ac;
case 0x58e0af:c.instructions+=4;goto B58e0af;
case 0x58e0b0:c.instructions+=3;goto B58e0b0;
case 0x58e0b2:c.instructions+=2;goto B58e0b2;
case 0x58e0b3:c.instructions+=1;goto B58e0b3;
case 0x58e0b6:goto L58e0b6;
case 0x58e0b7:c.instructions+=6;goto B58e0b7;
case 0x58e0b8:c.instructions+=5;goto B58e0b8;
case 0x58e0be:c.instructions+=4;goto B58e0be;
case 0x58e0c4:c.instructions+=3;goto B58e0c4;
case 0x58e0ca:c.instructions+=2;goto B58e0ca;
case 0x58e0d1:c.instructions+=1;goto B58e0d1;
case 0x58e0d3:goto L58e0d3;
case 0x58e0d6:c.instructions+=8;goto B58e0d6;
case 0x58e0d7:c.instructions+=7;goto B58e0d7;
case 0x58e0da:c.instructions+=6;goto B58e0da;
case 0x58e0db:c.instructions+=5;goto B58e0db;
case 0x58e0dc:c.instructions+=4;goto B58e0dc;
case 0x58e0e1:c.instructions+=3;goto B58e0e1;
case 0x58e0e4:c.instructions+=2;goto B58e0e4;
case 0x58e0e7:c.instructions+=1;goto B58e0e7;
case 0x58e0ec:goto L58e0ec;
case 0x58e0ef:c.instructions+=2;goto B58e0ef;
case 0x58e0f1:c.instructions+=1;goto B58e0f1;
case 0x58e0f3:goto L58e0f3;
case 0x58e0f6:c.instructions+=1;goto B58e0f6;
case 0x58e0f8:goto L58e0f8;
case 0x58e0fa:c.instructions+=1;goto B58e0fa;
case 0x58e0fc:goto L58e0fc;
case 0x58e0fe:goto L58e0fe;
case 0x58e101:c.instructions+=4;goto B58e101;
case 0x58e103:c.instructions+=3;goto B58e103;
case 0x58e104:c.instructions+=2;goto B58e104;
case 0x58e10a:c.instructions+=1;goto B58e10a;
case 0x58e10f:goto L58e10f;
case 0x58e110:c.instructions+=2;goto B58e110;
case 0x58e113:c.instructions+=1;goto B58e113;
case 0x58e115:goto L58e115;
case 0x58e11a:c.instructions+=1;goto B58e11a;
case 0x58e11f:goto L58e11f;
case 0x58e122:c.instructions+=4;goto B58e122;
case 0x58e124:c.instructions+=3;goto B58e124;
case 0x58e125:c.instructions+=2;goto B58e125;
case 0x58e12b:c.instructions+=1;goto B58e12b;
case 0x58e130:goto L58e130;
case 0x58e132:c.instructions+=5;goto B58e132;
case 0x58e138:c.instructions+=4;goto B58e138;
case 0x58e13b:c.instructions+=3;goto B58e13b;
case 0x58e140:c.instructions+=2;goto B58e140;
case 0x58e143:c.instructions+=1;goto B58e143;
case 0x58e149:goto L58e149;
case 0x58e14b:goto L58e14b;
case 0x58e14e:c.instructions+=3;goto B58e14e;
case 0x58e150:c.instructions+=2;goto B58e150;
case 0x58e151:c.instructions+=1;goto B58e151;
case 0x58e156:goto L58e156;
case 0x58e159:c.instructions+=5;goto B58e159;
case 0x58e15c:c.instructions+=4;goto B58e15c;
case 0x58e15f:c.instructions+=3;goto B58e15f;
case 0x58e161:c.instructions+=2;goto B58e161;
case 0x58e164:c.instructions+=1;goto B58e164;
case 0x58e166:goto L58e166;
case 0x58e16c:goto L58e16c;
case 0x58e16e:c.instructions+=4;goto B58e16e;
case 0x58e171:c.instructions+=3;goto B58e171;
case 0x58e173:c.instructions+=2;goto B58e173;
case 0x58e174:c.instructions+=1;goto B58e174;
case 0x58e179:goto L58e179;
case 0x58e17a:c.instructions+=3;goto B58e17a;
case 0x58e180:c.instructions+=2;goto B58e180;
case 0x58e181:c.instructions+=1;goto B58e181;
case 0x58e186:goto L58e186;
case 0x58e189:c.instructions+=7;goto B58e189;
case 0x58e18f:c.instructions+=6;goto B58e18f;
case 0x58e192:c.instructions+=5;goto B58e192;
case 0x58e193:c.instructions+=4;goto B58e193;
case 0x58e198:c.instructions+=3;goto B58e198;
case 0x58e19d:c.instructions+=2;goto B58e19d;
case 0x58e19e:c.instructions+=1;goto B58e19e;
case 0x58e1a3:goto L58e1a3;
case 0x58e1a9:c.instructions+=4;goto B58e1a9;
case 0x58e1ab:c.instructions+=3;goto B58e1ab;
case 0x58e1b1:c.instructions+=2;goto B58e1b1;
case 0x58e1b6:c.instructions+=1;goto B58e1b6;
case 0x58e1bc:goto L58e1bc;
case 0x58e1be:goto L58e1be;
case 0x58e1c0:c.instructions+=7;goto B58e1c0;
case 0x58e1c1:c.instructions+=6;goto B58e1c1;
case 0x58e1c6:c.instructions+=5;goto B58e1c6;
case 0x58e1c7:c.instructions+=4;goto B58e1c7;
case 0x58e1cd:c.instructions+=3;goto B58e1cd;
case 0x58e1d2:c.instructions+=2;goto B58e1d2;
case 0x58e1d3:c.instructions+=1;goto B58e1d3;
case 0x58e1d8:goto L58e1d8;
case 0x58e1db:c.instructions+=11;goto B58e1db;
case 0x58e1de:c.instructions+=10;goto B58e1de;
case 0x58e1e1:c.instructions+=9;goto B58e1e1;
case 0x58e1e2:c.instructions+=8;goto B58e1e2;
case 0x58e1e3:c.instructions+=7;goto B58e1e3;
case 0x58e1e4:c.instructions+=6;goto B58e1e4;
case 0x58e1e5:c.instructions+=5;goto B58e1e5;
case 0x58e1ea:c.instructions+=4;goto B58e1ea;
case 0x58e1f0:c.instructions+=3;goto B58e1f0;
case 0x58e1f1:c.instructions+=2;goto B58e1f1;
case 0x58e1f6:c.instructions+=1;goto B58e1f6;
case 0x58e1fb:goto L58e1fb;
case 0x58e1fd:c.instructions+=1;goto B58e1fd;
case 0x58e202:goto L58e202;
case 0x58e203:c.instructions+=5;goto B58e203;
case 0x58e204:c.instructions+=4;goto B58e204;
case 0x58e205:c.instructions+=3;goto B58e205;
case 0x58e207:c.instructions+=2;goto B58e207;
case 0x58e208:c.instructions+=1;goto B58e208;
case 0x58e210:goto L58e210;
case 0x58e213:c.instructions+=3;goto B58e213;
case 0x58e214:c.instructions+=2;goto B58e214;
case 0x58e216:c.instructions+=1;goto B58e216;
case 0x58e21b:goto L58e21b;
case 0x58e21e:c.instructions+=2;goto B58e21e;
case 0x58e220:c.instructions+=1;goto B58e220;
case 0x58e222:goto L58e222;
case 0x58e225:c.instructions+=3;goto B58e225;
case 0x58e226:c.instructions+=2;goto B58e226;
case 0x58e229:c.instructions+=1;goto B58e229;
case 0x58e22c:goto L58e22c;
case 0x58e22d:c.instructions+=4;goto B58e22d;
case 0x58e22e:c.instructions+=3;goto B58e22e;
case 0x58e22f:c.instructions+=2;goto B58e22f;
case 0x58e234:c.instructions+=1;goto B58e234;
case 0x58e239:goto L58e239;
case 0x58e23d:c.instructions+=3;goto B58e23d;
case 0x58e23e:c.instructions+=2;goto B58e23e;
case 0x58e23f:c.instructions+=1;goto B58e23f;
case 0x58e244:goto L58e244;
case 0x58e247:c.instructions+=2;goto B58e247;
case 0x58e249:c.instructions+=1;goto B58e249;
case 0x58e24b:goto L58e24b;
case 0x58e24c:c.instructions+=5;goto B58e24c;
case 0x58e24d:c.instructions+=4;goto B58e24d;
case 0x58e24e:c.instructions+=3;goto B58e24e;
case 0x58e24f:c.instructions+=2;goto B58e24f;
case 0x58e252:c.instructions+=1;goto B58e252;
case 0x58e255:goto L58e255;
case 0x58e258:c.instructions+=2;goto B58e258;
case 0x58e25a:c.instructions+=1;goto B58e25a;
case 0x58e25f:goto L58e25f;
case 0x58e261:c.instructions+=2;goto B58e261;
case 0x58e263:c.instructions+=1;goto B58e263;
case 0x58e265:goto L58e265;
case 0x58e268:c.instructions+=3;goto B58e268;
case 0x58e269:c.instructions+=2;goto B58e269;
case 0x58e26a:c.instructions+=1;goto B58e26a;
case 0x58e26f:goto L58e26f;
case 0x58e272:c.instructions+=2;goto B58e272;
case 0x58e274:c.instructions+=1;goto B58e274;
case 0x58e276:goto L58e276;
case 0x58e278:c.instructions+=2;goto B58e278;
case 0x58e27a:c.instructions+=1;goto B58e27a;
case 0x58e27c:goto L58e27c;
case 0x58e27e:c.instructions+=2;goto B58e27e;
case 0x58e280:c.instructions+=1;goto B58e280;
case 0x58e285:goto L58e285;
case 0x58e288:c.instructions+=1;goto B58e288;
case 0x58e28a:goto L58e28a;
case 0x58e28d:c.instructions+=12;goto B58e28d;
case 0x58e28f:c.instructions+=11;goto B58e28f;
case 0x58e292:c.instructions+=10;goto B58e292;
case 0x58e294:c.instructions+=9;goto B58e294;
case 0x58e297:c.instructions+=8;goto B58e297;
case 0x58e29a:c.instructions+=7;goto B58e29a;
case 0x58e29d:c.instructions+=6;goto B58e29d;
case 0x58e2a0:c.instructions+=5;goto B58e2a0;
case 0x58e2a2:c.instructions+=4;goto B58e2a2;
case 0x58e2a4:c.instructions+=3;goto B58e2a4;
case 0x58e2a7:c.instructions+=2;goto B58e2a7;
case 0x58e2ac:c.instructions+=1;goto B58e2ac;
case 0x58e2af:goto L58e2af;
case 0x58e2b1:goto L58e2b1;
case 0x58e2b4:c.instructions+=4;goto B58e2b4;
case 0x58e2b5:c.instructions+=3;goto B58e2b5;
case 0x58e2b6:c.instructions+=2;goto B58e2b6;
case 0x58e2bc:c.instructions+=1;goto B58e2bc;
case 0x58e2c1:goto L58e2c1;
case 0x58e2c3:goto L58e2c3;
case 0x58e2c9:c.instructions+=6;goto B58e2c9;
case 0x58e2ca:c.instructions+=5;goto B58e2ca;
case 0x58e2cb:c.instructions+=4;goto B58e2cb;
case 0x58e2cc:c.instructions+=3;goto B58e2cc;
case 0x58e2cd:c.instructions+=2;goto B58e2cd;
case 0x58e2d0:c.instructions+=1;goto B58e2d0;
case 0x58e2d3:goto L58e2d3;
case 0x58e2d5:c.instructions+=2;goto B58e2d5;
case 0x58e2da:c.instructions+=1;goto B58e2da;
case 0x58e2df:goto L58e2df;
case 0x58e2e1:c.instructions+=3;goto B58e2e1;
case 0x58e2e4:c.instructions+=2;goto B58e2e4;
case 0x58e2e6:c.instructions+=1;goto B58e2e6;
case 0x58e2e8:goto L58e2e8;
case 0x58e2ed:c.instructions+=3;goto B58e2ed;
case 0x58e2ef:c.instructions+=2;goto B58e2ef;
case 0x58e2f2:c.instructions+=1;goto B58e2f2;
case 0x58e2fc:goto L58e2fc;
case 0x58e2fe:goto L58e2fe;
case 0x58e300:goto L58e300;
case 0x58e302:goto L58e302;
case 0x58e304:c.instructions+=1;goto B58e304;
case 0x58e30a:goto L58e30a;
case 0x58e30d:c.instructions+=3;goto B58e30d;
case 0x58e30e:c.instructions+=2;goto B58e30e;
case 0x58e30f:c.instructions+=1;goto B58e30f;
case 0x58e314:goto L58e314;
case 0x58e317:c.instructions+=4;goto B58e317;
case 0x58e31a:c.instructions+=3;goto B58e31a;
case 0x58e31d:c.instructions+=2;goto B58e31d;
case 0x58e320:c.instructions+=1;goto B58e320;
case 0x58e322:goto L58e322;
case 0x58e324:c.instructions+=3;goto B58e324;
case 0x58e329:c.instructions+=2;goto B58e329;
case 0x58e32e:c.instructions+=1;goto B58e32e;
case 0x58e332:goto L58e332;
case 0x58e334:goto L58e334;
case 0x58e337:c.instructions+=8;goto B58e337;
case 0x58e339:c.instructions+=7;goto B58e339;
case 0x58e33a:c.instructions+=6;goto B58e33a;
case 0x58e33f:c.instructions+=5;goto B58e33f;
case 0x58e340:c.instructions+=4;goto B58e340;
case 0x58e344:c.instructions+=3;goto B58e344;
case 0x58e346:c.instructions+=2;goto B58e346;
case 0x58e347:c.instructions+=1;goto B58e347;
case 0x58e34c:goto L58e34c;
case 0x58e350:c.instructions+=11;goto B58e350;
case 0x58e354:c.instructions+=10;goto B58e354;
case 0x58e357:c.instructions+=9;goto B58e357;
case 0x58e359:c.instructions+=8;goto B58e359;
case 0x58e35a:c.instructions+=7;goto B58e35a;
case 0x58e35b:c.instructions+=6;goto B58e35b;
case 0x58e35c:c.instructions+=5;goto B58e35c;
case 0x58e361:c.instructions+=4;goto B58e361;
case 0x58e365:c.instructions+=3;goto B58e365;
case 0x58e366:c.instructions+=2;goto B58e366;
case 0x58e36b:c.instructions+=1;goto B58e36b;
case 0x58e370:goto L58e370;
case 0x58e372:c.instructions+=1;goto B58e372;
case 0x58e377:goto L58e377;
case 0x58e37a:c.instructions+=2;goto B58e37a;
case 0x58e380:c.instructions+=1;goto B58e380;
case 0x58e382:goto L58e382;
case 0x58e384:c.instructions+=2;goto B58e384;
case 0x58e389:c.instructions+=1;goto B58e389;
case 0x58e38c:goto L58e38c;
case 0x58e38e:goto L58e38e;
case 0x58e394:goto L58e394;
case 0x58e397:goto L58e397;
case 0x58e398:c.instructions+=5;goto B58e398;
case 0x58e399:c.instructions+=4;goto B58e399;
case 0x58e39a:c.instructions+=3;goto B58e39a;
case 0x58e39b:c.instructions+=2;goto B58e39b;
case 0x58e39e:c.instructions+=1;goto B58e39e;
case 0x58e3b0:goto L58e3b0;
case 0x58e3b1:c.instructions+=4;goto B58e3b1;
case 0x58e3b2:c.instructions+=3;goto B58e3b2;
case 0x58e3b4:c.instructions+=2;goto B58e3b4;
case 0x58e3b9:c.instructions+=1;goto B58e3b9;
case 0x58e3be:goto L58e3be;
case 0x58e3c2:c.instructions+=3;goto B58e3c2;
case 0x58e3c3:c.instructions+=2;goto B58e3c3;
case 0x58e3c4:c.instructions+=1;goto B58e3c4;
case 0x58e3c9:goto L58e3c9;
case 0x58e3cc:c.instructions+=2;goto B58e3cc;
case 0x58e3ce:c.instructions+=1;goto B58e3ce;
case 0x58e3d0:goto L58e3d0;
case 0x58e3d5:goto L58e3d5;
case 0x58e3d8:c.instructions+=2;goto B58e3d8;
case 0x58e3da:c.instructions+=1;goto B58e3da;
case 0x58e3dc:goto L58e3dc;
case 0x58e3e1:c.instructions+=1;goto B58e3e1;
case 0x58e3e6:goto L58e3e6;
case 0x58e3e9:c.instructions+=2;goto B58e3e9;
case 0x58e3ea:c.instructions+=1;goto B58e3ea;
case 0x58e3ef:goto L58e3ef;
case 0x58e3f2:c.instructions+=3;goto B58e3f2;
case 0x58e3f3:c.instructions+=2;goto B58e3f3;
case 0x58e3f4:c.instructions+=1;goto B58e3f4;
case 0x58e3f7:goto L58e3f7;
case 0x58e3f8:c.instructions+=3;goto B58e3f8;
case 0x58e3fa:c.instructions+=2;goto B58e3fa;
case 0x58e3fb:c.instructions+=1;goto B58e3fb;
case 0x58e3fe:goto L58e3fe;
case 0x58e3ff:c.instructions+=3;goto B58e3ff;
case 0x58e401:c.instructions+=2;goto B58e401;
case 0x58e403:c.instructions+=1;goto B58e403;
case 0x58e408:goto L58e408;
case 0x58e40a:c.instructions+=2;goto B58e40a;
case 0x58e40c:c.instructions+=1;goto B58e40c;
case 0x58e40e:goto L58e40e;
case 0x58e410:goto L58e410;
case 0x58e413:c.instructions+=3;goto B58e413;
case 0x58e414:c.instructions+=2;goto B58e414;
case 0x58e415:c.instructions+=1;goto B58e415;
case 0x58e41a:goto L58e41a;
case 0x58e41d:c.instructions+=2;goto B58e41d;
case 0x58e41f:c.instructions+=1;goto B58e41f;
case 0x58e421:goto L58e421;
case 0x58e427:c.instructions+=2;goto B58e427;
case 0x58e429:c.instructions+=1;goto B58e429;
case 0x58e42b:goto L58e42b;
case 0x58e42d:c.instructions+=2;goto B58e42d;
case 0x58e42f:c.instructions+=1;goto B58e42f;
case 0x58e431:goto L58e431;
case 0x58e432:c.instructions+=4;goto B58e432;
case 0x58e433:c.instructions+=3;goto B58e433;
case 0x58e435:c.instructions+=2;goto B58e435;
case 0x58e436:c.instructions+=1;goto B58e436;
case 0x58e439:goto L58e439;
case 0x58e43c:c.instructions+=4;goto B58e43c;
case 0x58e43d:c.instructions+=3;goto B58e43d;
case 0x58e43e:c.instructions+=2;goto B58e43e;
case 0x58e43f:c.instructions+=1;goto B58e43f;
case 0x58e450:goto L58e450;
case 0x58e451:c.instructions+=2;goto B58e451;
case 0x58e453:c.instructions+=1;goto B58e453;
case 0x58e458:goto L58e458;
case 0x58e45b:c.instructions+=2;goto B58e45b;
case 0x58e45d:c.instructions+=1;goto B58e45d;
case 0x58e45f:goto L58e45f;
case 0x58e461:c.instructions+=2;goto B58e461;
case 0x58e462:c.instructions+=1;goto B58e462;
case 0x58e465:goto L58e465;
case 0x58e466:c.instructions+=4;goto B58e466;
case 0x58e467:c.instructions+=3;goto B58e467;
case 0x58e468:c.instructions+=2;goto B58e468;
case 0x58e46d:c.instructions+=1;goto B58e46d;
case 0x58e472:goto L58e472;
case 0x58e476:c.instructions+=3;goto B58e476;
case 0x58e477:c.instructions+=2;goto B58e477;
case 0x58e478:c.instructions+=1;goto B58e478;
case 0x58e47d:goto L58e47d;
case 0x58e480:c.instructions+=2;goto B58e480;
case 0x58e482:c.instructions+=1;goto B58e482;
case 0x58e484:goto L58e484;
case 0x58e489:goto L58e489;
case 0x58e48c:c.instructions+=2;goto B58e48c;
case 0x58e48e:c.instructions+=1;goto B58e48e;
case 0x58e490:goto L58e490;
case 0x58e495:c.instructions+=1;goto B58e495;
case 0x58e49a:goto L58e49a;
case 0x58e49d:c.instructions+=2;goto B58e49d;
case 0x58e49e:c.instructions+=1;goto B58e49e;
case 0x58e4a3:goto L58e4a3;
case 0x58e4a6:c.instructions+=2;goto B58e4a6;
case 0x58e4a8:c.instructions+=1;goto B58e4a8;
case 0x58e4aa:goto L58e4aa;
case 0x58e4b0:c.instructions+=2;goto B58e4b0;
case 0x58e4b2:c.instructions+=1;goto B58e4b2;
case 0x58e4b4:goto L58e4b4;
case 0x58e4b8:c.instructions+=4;goto B58e4b8;
case 0x58e4b9:c.instructions+=3;goto B58e4b9;
case 0x58e4ba:c.instructions+=2;goto B58e4ba;
case 0x58e4bc:c.instructions+=1;goto B58e4bc;
case 0x58e4c1:goto L58e4c1;
case 0x58e4c2:c.instructions+=5;goto B58e4c2;
case 0x58e4c3:c.instructions+=4;goto B58e4c3;
case 0x58e4c4:c.instructions+=3;goto B58e4c4;
case 0x58e4c6:c.instructions+=2;goto B58e4c6;
case 0x58e4c7:c.instructions+=1;goto B58e4c7;
case 0x58e4ca:goto L58e4ca;
case 0x58e4cc:c.instructions+=2;goto B58e4cc;
case 0x58e4ce:c.instructions+=1;goto B58e4ce;
case 0x58e4d3:goto L58e4d3;
case 0x58e4d5:c.instructions+=2;goto B58e4d5;
case 0x58e4d7:c.instructions+=1;goto B58e4d7;
case 0x58e4d9:goto L58e4d9;
case 0x58e4e0:goto L58e4e0;
case 0x58e4e3:c.instructions+=3;goto B58e4e3;
case 0x58e4e4:c.instructions+=2;goto B58e4e4;
case 0x58e4e5:c.instructions+=1;goto B58e4e5;
case 0x58e4ea:goto L58e4ea;
case 0x58e4ed:c.instructions+=2;goto B58e4ed;
case 0x58e4ef:c.instructions+=1;goto B58e4ef;
case 0x58e4f1:goto L58e4f1;
case 0x58e4f7:c.instructions+=2;goto B58e4f7;
case 0x58e4f9:c.instructions+=1;goto B58e4f9;
case 0x58e4fb:goto L58e4fb;
case 0x58e501:c.instructions+=2;goto B58e501;
case 0x58e503:c.instructions+=1;goto B58e503;
case 0x58e505:goto L58e505;
case 0x58e507:c.instructions+=2;goto B58e507;
case 0x58e509:c.instructions+=1;goto B58e509;
case 0x58e50b:goto L58e50b;
case 0x58e50c:c.instructions+=5;goto B58e50c;
case 0x58e50d:c.instructions+=4;goto B58e50d;
case 0x58e50e:c.instructions+=3;goto B58e50e;
case 0x58e510:c.instructions+=2;goto B58e510;
case 0x58e511:c.instructions+=1;goto B58e511;
case 0x58e514:goto L58e514;
case 0x58e518:c.instructions+=5;goto B58e518;
case 0x58e51b:c.instructions+=4;goto B58e51b;
case 0x58e51c:c.instructions+=3;goto B58e51c;
case 0x58e51d:c.instructions+=2;goto B58e51d;
case 0x58e51f:c.instructions+=1;goto B58e51f;
case 0x58e524:goto L58e524;
case 0x58e525:c.instructions+=5;goto B58e525;
case 0x58e526:c.instructions+=4;goto B58e526;
case 0x58e527:c.instructions+=3;goto B58e527;
case 0x58e529:c.instructions+=2;goto B58e529;
case 0x58e52a:c.instructions+=1;goto B58e52a;
case 0x58e530:goto L58e530;
case 0x58e536:c.instructions+=8;goto B58e536;
case 0x58e538:c.instructions+=7;goto B58e538;
case 0x58e53d:c.instructions+=6;goto B58e53d;
case 0x58e53e:c.instructions+=5;goto B58e53e;
case 0x58e545:c.instructions+=4;goto B58e545;
case 0x58e54b:c.instructions+=3;goto B58e54b;
case 0x58e54c:c.instructions+=2;goto B58e54c;
case 0x58e54e:c.instructions+=1;goto B58e54e;
case 0x58e553:goto L58e553;
case 0x58e556:c.instructions+=2;goto B58e556;
case 0x58e558:c.instructions+=1;goto B58e558;
case 0x58e55e:goto L58e55e;
case 0x58e55f:c.instructions+=3;goto B58e55f;
case 0x58e560:c.instructions+=2;goto B58e560;
case 0x58e565:c.instructions+=1;goto B58e565;
case 0x58e56a:goto L58e56a;
case 0x58e571:c.instructions+=3;goto B58e571;
case 0x58e572:c.instructions+=2;goto B58e572;
case 0x58e573:c.instructions+=1;goto B58e573;
case 0x58e578:goto L58e578;
case 0x58e57b:c.instructions+=2;goto B58e57b;
case 0x58e57d:c.instructions+=1;goto B58e57d;
case 0x58e583:goto L58e583;
case 0x58e58a:c.instructions+=1;goto B58e58a;
case 0x58e58c:goto L58e58c;
case 0x58e593:c.instructions+=6;goto B58e593;
case 0x58e59a:c.instructions+=5;goto B58e59a;
case 0x58e59d:c.instructions+=4;goto B58e59d;
case 0x58e5a1:c.instructions+=3;goto B58e5a1;
case 0x58e5a3:c.instructions+=2;goto B58e5a3;
case 0x58e5a5:c.instructions+=1;goto B58e5a5;
case 0x58e5aa:goto L58e5aa;
case 0x58e5af:goto L58e5af;
case 0x58e5b2:c.instructions+=2;goto B58e5b2;
case 0x58e5b4:c.instructions+=1;goto B58e5b4;
case 0x58e5ba:goto L58e5ba;
case 0x58e5bf:c.instructions+=1;goto B58e5bf;
case 0x58e5c4:goto L58e5c4;
case 0x58e5c7:c.instructions+=2;goto B58e5c7;
case 0x58e5c8:c.instructions+=1;goto B58e5c8;
case 0x58e5cd:goto L58e5cd;
case 0x58e5cf:c.instructions+=3;goto B58e5cf;
case 0x58e5d2:c.instructions+=2;goto B58e5d2;
case 0x58e5d4:c.instructions+=1;goto B58e5d4;
case 0x58e5d6:goto L58e5d6;
case 0x58e5da:c.instructions+=1;goto B58e5da;
case 0x58e5df:goto L58e5df;
case 0x58e5e0:c.instructions+=3;goto B58e5e0;
case 0x58e5e4:c.instructions+=2;goto B58e5e4;
case 0x58e5ef:c.instructions+=1;goto B58e5ef;
case 0x58e5f4:goto L58e5f4;
case 0x58e5fb:c.instructions+=7;goto B58e5fb;
case 0x58e5fe:c.instructions+=6;goto B58e5fe;
case 0x58e602:c.instructions+=5;goto B58e602;
case 0x58e609:c.instructions+=4;goto B58e609;
case 0x58e60d:c.instructions+=3;goto B58e60d;
case 0x58e60f:c.instructions+=2;goto B58e60f;
case 0x58e61a:c.instructions+=1;goto B58e61a;
case 0x58e61f:goto L58e61f;
case 0x58e621:c.instructions+=1;goto B58e621;
case 0x58e623:goto L58e623;
case 0x58e625:c.instructions+=2;goto B58e625;
case 0x58e627:c.instructions+=1;goto B58e627;
case 0x58e62c:goto L58e62c;
case 0x58e62e:c.instructions+=2;goto B58e62e;
case 0x58e630:c.instructions+=1;goto B58e630;
case 0x58e632:goto L58e632;
case 0x58e635:c.instructions+=3;goto B58e635;
case 0x58e636:c.instructions+=2;goto B58e636;
case 0x58e637:c.instructions+=1;goto B58e637;
case 0x58e63c:goto L58e63c;
case 0x58e63f:c.instructions+=2;goto B58e63f;
case 0x58e641:c.instructions+=1;goto B58e641;
case 0x58e643:goto L58e643;
case 0x58e649:c.instructions+=2;goto B58e649;
case 0x58e64b:c.instructions+=1;goto B58e64b;
case 0x58e64d:goto L58e64d;
case 0x58e64f:c.instructions+=2;goto B58e64f;
case 0x58e651:c.instructions+=1;goto B58e651;
case 0x58e653:goto L58e653;
case 0x58e655:goto L58e655;
case 0x58e656:c.instructions+=1;goto B58e656;
case 0x58e657:goto L58e657;
case 0x58e65e:c.instructions+=4;goto B58e65e;
case 0x58e65f:c.instructions+=3;goto B58e65f;
case 0x58e666:c.instructions+=2;goto B58e666;
case 0x58e66c:c.instructions+=1;goto B58e66c;
case 0x58e66f:goto L58e66f;
case 0x58e676:c.instructions+=1;goto B58e676;
case 0x58e67b:goto L58e67b;
case 0x58e67e:c.instructions+=4;goto B58e67e;
case 0x58e67f:c.instructions+=3;goto B58e67f;
case 0x58e686:c.instructions+=2;goto B58e686;
case 0x58e691:c.instructions+=1;goto B58e691;
case 0x58e696:goto L58e696;
case 0x58e69d:c.instructions+=7;goto B58e69d;
case 0x58e6a4:c.instructions+=6;goto B58e6a4;
case 0x58e6a7:c.instructions+=5;goto B58e6a7;
case 0x58e6ae:c.instructions+=4;goto B58e6ae;
case 0x58e6b0:c.instructions+=3;goto B58e6b0;
case 0x58e6b7:c.instructions+=2;goto B58e6b7;
case 0x58e6c2:c.instructions+=1;goto B58e6c2;
case 0x58e6c7:goto L58e6c7;
case 0x58e6c9:c.instructions+=1;goto B58e6c9;
case 0x58e6d0:goto L58e6d0;
case 0x58e6d6:c.instructions+=8;goto B58e6d6;
case 0x58e6d8:c.instructions+=7;goto B58e6d8;
case 0x58e6dd:c.instructions+=6;goto B58e6dd;
case 0x58e6de:c.instructions+=5;goto B58e6de;
case 0x58e6e5:c.instructions+=4;goto B58e6e5;
case 0x58e6eb:c.instructions+=3;goto B58e6eb;
case 0x58e6ec:c.instructions+=2;goto B58e6ec;
case 0x58e6ee:c.instructions+=1;goto B58e6ee;
case 0x58e6f3:goto L58e6f3;
case 0x58e6f6:c.instructions+=2;goto B58e6f6;
case 0x58e6f8:c.instructions+=1;goto B58e6f8;
case 0x58e6fe:goto L58e6fe;
case 0x58e6ff:c.instructions+=3;goto B58e6ff;
case 0x58e700:c.instructions+=2;goto B58e700;
case 0x58e705:c.instructions+=1;goto B58e705;
case 0x58e70a:goto L58e70a;
case 0x58e711:c.instructions+=3;goto B58e711;
case 0x58e712:c.instructions+=2;goto B58e712;
case 0x58e713:c.instructions+=1;goto B58e713;
case 0x58e718:goto L58e718;
case 0x58e71b:c.instructions+=2;goto B58e71b;
case 0x58e71d:c.instructions+=1;goto B58e71d;
case 0x58e723:goto L58e723;
case 0x58e72a:c.instructions+=1;goto B58e72a;
case 0x58e72c:goto L58e72c;
case 0x58e72f:c.instructions+=4;goto B58e72f;
case 0x58e736:c.instructions+=3;goto B58e736;
case 0x58e738:c.instructions+=2;goto B58e738;
case 0x58e73a:c.instructions+=1;goto B58e73a;
case 0x58e73f:goto L58e73f;
case 0x58e744:goto L58e744;
case 0x58e747:c.instructions+=2;goto B58e747;
case 0x58e749:c.instructions+=1;goto B58e749;
case 0x58e74f:goto L58e74f;
case 0x58e754:c.instructions+=1;goto B58e754;
case 0x58e759:goto L58e759;
case 0x58e75c:c.instructions+=2;goto B58e75c;
case 0x58e75d:c.instructions+=1;goto B58e75d;
case 0x58e762:goto L58e762;
case 0x58e764:c.instructions+=3;goto B58e764;
case 0x58e767:c.instructions+=2;goto B58e767;
case 0x58e769:c.instructions+=1;goto B58e769;
case 0x58e76b:goto L58e76b;
case 0x58e76f:c.instructions+=1;goto B58e76f;
case 0x58e774:goto L58e774;
case 0x58e775:c.instructions+=3;goto B58e775;
case 0x58e779:c.instructions+=2;goto B58e779;
case 0x58e784:c.instructions+=1;goto B58e784;
case 0x58e789:goto L58e789;
case 0x58e78d:c.instructions+=5;goto B58e78d;
case 0x58e794:c.instructions+=4;goto B58e794;
case 0x58e796:c.instructions+=3;goto B58e796;
case 0x58e79a:c.instructions+=2;goto B58e79a;
case 0x58e7a5:c.instructions+=1;goto B58e7a5;
case 0x58e7aa:goto L58e7aa;
case 0x58e7ac:c.instructions+=1;goto B58e7ac;
case 0x58e7ae:goto L58e7ae;
case 0x58e7b0:c.instructions+=2;goto B58e7b0;
case 0x58e7b2:c.instructions+=1;goto B58e7b2;
case 0x58e7b7:goto L58e7b7;
case 0x58e7b9:c.instructions+=2;goto B58e7b9;
case 0x58e7bb:c.instructions+=1;goto B58e7bb;
case 0x58e7bd:goto L58e7bd;
case 0x58e7c0:goto L58e7c0;
case 0x58e7c3:c.instructions+=3;goto B58e7c3;
case 0x58e7c4:c.instructions+=2;goto B58e7c4;
case 0x58e7c5:c.instructions+=1;goto B58e7c5;
case 0x58e7ca:goto L58e7ca;
case 0x58e7cd:c.instructions+=2;goto B58e7cd;
case 0x58e7cf:c.instructions+=1;goto B58e7cf;
case 0x58e7d1:goto L58e7d1;
case 0x58e7d7:c.instructions+=2;goto B58e7d7;
case 0x58e7d9:c.instructions+=1;goto B58e7d9;
case 0x58e7db:goto L58e7db;
case 0x58e7dd:c.instructions+=2;goto B58e7dd;
case 0x58e7df:c.instructions+=1;goto B58e7df;
case 0x58e7e1:goto L58e7e1;
case 0x58e7e3:goto L58e7e3;
case 0x58e7e4:c.instructions+=1;goto B58e7e4;
case 0x58e7e5:goto L58e7e5;
case 0x58e7ec:c.instructions+=4;goto B58e7ec;
case 0x58e7ed:c.instructions+=3;goto B58e7ed;
case 0x58e7f4:c.instructions+=2;goto B58e7f4;
case 0x58e7fa:c.instructions+=1;goto B58e7fa;
case 0x58e7fd:goto L58e7fd;
case 0x58e804:c.instructions+=1;goto B58e804;
case 0x58e809:goto L58e809;
case 0x58e80c:c.instructions+=4;goto B58e80c;
case 0x58e80d:c.instructions+=3;goto B58e80d;
case 0x58e814:c.instructions+=2;goto B58e814;
case 0x58e81f:c.instructions+=1;goto B58e81f;
case 0x58e824:goto L58e824;
case 0x58e82b:c.instructions+=5;goto B58e82b;
case 0x58e832:c.instructions+=4;goto B58e832;
case 0x58e834:c.instructions+=3;goto B58e834;
case 0x58e83b:c.instructions+=2;goto B58e83b;
case 0x58e846:c.instructions+=1;goto B58e846;
case 0x58e84b:goto L58e84b;
case 0x58e84d:c.instructions+=1;goto B58e84d;
case 0x58e850:goto L58e850;
case 0x58e851:c.instructions+=7;goto B58e851;
case 0x58e853:c.instructions+=6;goto B58e853;
case 0x58e856:c.instructions+=5;goto B58e856;
case 0x58e85c:c.instructions+=4;goto B58e85c;
case 0x58e85d:c.instructions+=3;goto B58e85d;
case 0x58e85e:c.instructions+=2;goto B58e85e;
case 0x58e860:c.instructions+=1;goto B58e860;
case 0x58e865:goto L58e865;
case 0x58e868:c.instructions+=2;goto B58e868;
case 0x58e86a:c.instructions+=1;goto B58e86a;
case 0x58e86c:goto L58e86c;
case 0x58e86f:c.instructions+=5;goto B58e86f;
case 0x58e870:c.instructions+=4;goto B58e870;
case 0x58e871:c.instructions+=3;goto B58e871;
case 0x58e873:c.instructions+=2;goto B58e873;
case 0x58e874:c.instructions+=1;goto B58e874;
case 0x58e877:goto L58e877;
case 0x58e87e:c.instructions+=1;goto B58e87e;
case 0x58e880:goto L58e880;
case 0x58e883:c.instructions+=2;goto B58e883;
case 0x58e886:c.instructions+=1;goto B58e886;
case 0x58e88b:goto L58e88b;
case 0x58e88d:goto L58e88d;
case 0x58e88f:c.instructions+=5;goto B58e88f;
case 0x58e890:c.instructions+=4;goto B58e890;
case 0x58e891:c.instructions+=3;goto B58e891;
case 0x58e893:c.instructions+=2;goto B58e893;
case 0x58e894:c.instructions+=1;goto B58e894;
case 0x58e897:goto L58e897;
case 0x58e89c:c.instructions+=3;goto B58e89c;
case 0x58e89e:c.instructions+=2;goto B58e89e;
case 0x58e8a3:c.instructions+=1;goto B58e8a3;
case 0x58e8a7:goto L58e8a7;
case 0x58e8a9:goto L58e8a9;
case 0x58e8ab:c.instructions+=3;goto B58e8ab;
case 0x58e8b0:c.instructions+=2;goto B58e8b0;
case 0x58e8b1:c.instructions+=1;goto B58e8b1;
case 0x58e8b6:goto L58e8b6;
case 0x58e8b7:c.instructions+=5;goto B58e8b7;
case 0x58e8bc:c.instructions+=4;goto B58e8bc;
case 0x58e8c0:c.instructions+=3;goto B58e8c0;
case 0x58e8c5:c.instructions+=2;goto B58e8c5;
case 0x58e8c6:c.instructions+=1;goto B58e8c6;
case 0x58e8cb:goto L58e8cb;
case 0x58e8ce:c.instructions+=11;goto B58e8ce;
case 0x58e8d1:c.instructions+=10;goto B58e8d1;
case 0x58e8d4:c.instructions+=9;goto B58e8d4;
case 0x58e8d6:c.instructions+=8;goto B58e8d6;
case 0x58e8d7:c.instructions+=7;goto B58e8d7;
case 0x58e8d8:c.instructions+=6;goto B58e8d8;
case 0x58e8d9:c.instructions+=5;goto B58e8d9;
case 0x58e8de:c.instructions+=4;goto B58e8de;
case 0x58e8e2:c.instructions+=3;goto B58e8e2;
case 0x58e8e3:c.instructions+=2;goto B58e8e3;
case 0x58e8e8:c.instructions+=1;goto B58e8e8;
case 0x58e8ed:goto L58e8ed;
case 0x58e8ef:c.instructions+=1;goto B58e8ef;
case 0x58e8f4:goto L58e8f4;
case 0x58e8f5:c.instructions+=4;goto B58e8f5;
case 0x58e8f6:c.instructions+=3;goto B58e8f6;
case 0x58e8f8:c.instructions+=2;goto B58e8f8;
case 0x58e8f9:c.instructions+=1;goto B58e8f9;
case 0x58e900:goto L58e900;
case 0x58e906:c.instructions+=12;goto B58e906;
case 0x58e90d:c.instructions+=11;goto B58e90d;
case 0x58e90e:c.instructions+=10;goto B58e90e;
case 0x58e90f:c.instructions+=9;goto B58e90f;
case 0x58e916:c.instructions+=8;goto B58e916;
case 0x58e917:c.instructions+=7;goto B58e917;
case 0x58e919:c.instructions+=6;goto B58e919;
case 0x58e91b:c.instructions+=5;goto B58e91b;
case 0x58e91e:c.instructions+=4;goto B58e91e;
case 0x58e920:c.instructions+=3;goto B58e920;
case 0x58e924:c.instructions+=2;goto B58e924;
case 0x58e92b:c.instructions+=1;goto B58e92b;
case 0x58e92f:goto L58e92f;
case 0x58e931:goto L58e931;
case 0x58e933:c.instructions+=1;goto B58e933;
case 0x58e936:goto L58e936;
case 0x58e938:goto L58e938;
case 0x58e93a:c.instructions+=8;goto B58e93a;
case 0x58e93e:c.instructions+=7;goto B58e93e;
case 0x58e941:c.instructions+=6;goto B58e941;
case 0x58e942:c.instructions+=5;goto B58e942;
case 0x58e946:c.instructions+=4;goto B58e946;
case 0x58e94d:c.instructions+=3;goto B58e94d;
case 0x58e954:c.instructions+=2;goto B58e954;
case 0x58e958:c.instructions+=1;goto B58e958;
case 0x58e95d:goto L58e95d;
case 0x58e961:c.instructions+=2;goto B58e961;
case 0x58e964:c.instructions+=1;goto B58e964;
case 0x58e96a:goto L58e96a;
case 0x58e971:c.instructions+=3;goto B58e971;
case 0x58e977:c.instructions+=2;goto B58e977;
case 0x58e97b:c.instructions+=1;goto B58e97b;
case 0x58e980:goto L58e980;
case 0x58e984:c.instructions+=5;goto B58e984;
case 0x58e988:c.instructions+=4;goto B58e988;
case 0x58e98c:c.instructions+=3;goto B58e98c;
case 0x58e98e:c.instructions+=2;goto B58e98e;
case 0x58e991:c.instructions+=1;goto B58e991;
case 0x58e993:goto L58e993;
case 0x58e999:goto L58e999;
case 0x58e9a0:c.instructions+=2;goto B58e9a0;
case 0x58e9a1:c.instructions+=1;goto B58e9a1;
case 0x58e9a6:goto L58e9a6;
case 0x58e9a7:c.instructions+=2;goto B58e9a7;
case 0x58e9a8:c.instructions+=1;goto B58e9a8;
case 0x58e9ad:goto L58e9ad;
case 0x58e9b0:c.instructions+=3;goto B58e9b0;
case 0x58e9b3:c.instructions+=2;goto B58e9b3;
case 0x58e9b6:c.instructions+=1;goto B58e9b6;
case 0x58e9bc:goto L58e9bc;
case 0x58e9c3:goto L58e9c3;
case 0x58e9c7:c.instructions+=2;goto B58e9c7;
case 0x58e9c8:c.instructions+=1;goto B58e9c8;
case 0x58e9cd:goto L58e9cd;
case 0x58e9d0:c.instructions+=5;goto B58e9d0;
case 0x58e9d1:c.instructions+=4;goto B58e9d1;
case 0x58e9d2:c.instructions+=3;goto B58e9d2;
case 0x58e9d3:c.instructions+=2;goto B58e9d3;
case 0x58e9d9:c.instructions+=1;goto B58e9d9;
case 0x58e9da:goto L58e9da;
case 0x58e9de:c.instructions+=2;goto B58e9de;
case 0x58e9df:c.instructions+=1;goto B58e9df;
case 0x58e9e4:goto L58e9e4;
case 0x58e9e7:c.instructions+=5;goto B58e9e7;
case 0x58e9e8:c.instructions+=4;goto B58e9e8;
case 0x58e9e9:c.instructions+=3;goto B58e9e9;
case 0x58e9ea:c.instructions+=2;goto B58e9ea;
case 0x58e9f0:c.instructions+=1;goto B58e9f0;
case 0x58e9f1:goto L58e9f1;
case 0x58e9f5:c.instructions+=3;goto B58e9f5;
case 0x58e9f6:c.instructions+=2;goto B58e9f6;
case 0x58e9fb:c.instructions+=1;goto B58e9fb;
case 0x58ea00:goto L58ea00;
case 0x58ea01:c.instructions+=4;goto B58ea01;
case 0x58ea02:c.instructions+=3;goto B58ea02;
case 0x58ea03:c.instructions+=2;goto B58ea03;
case 0x58ea09:c.instructions+=1;goto B58ea09;
case 0x58ea0a:goto L58ea0a;
case 0x58ea0e:c.instructions+=2;goto B58ea0e;
case 0x58ea0f:c.instructions+=1;goto B58ea0f;
case 0x58ea14:goto L58ea14;
case 0x58ea17:c.instructions+=5;goto B58ea17;
case 0x58ea18:c.instructions+=4;goto B58ea18;
case 0x58ea19:c.instructions+=3;goto B58ea19;
case 0x58ea1a:c.instructions+=2;goto B58ea1a;
case 0x58ea20:c.instructions+=1;goto B58ea20;
case 0x58ea21:goto L58ea21;
case 0x58ea25:c.instructions+=2;goto B58ea25;
case 0x58ea26:c.instructions+=1;goto B58ea26;
case 0x58ea2b:goto L58ea2b;
case 0x58ea2e:c.instructions+=5;goto B58ea2e;
case 0x58ea2f:c.instructions+=4;goto B58ea2f;
case 0x58ea30:c.instructions+=3;goto B58ea30;
case 0x58ea31:c.instructions+=2;goto B58ea31;
case 0x58ea37:c.instructions+=1;goto B58ea37;
case 0x58ea38:goto L58ea38;
case 0x58ea3c:c.instructions+=2;goto B58ea3c;
case 0x58ea3d:c.instructions+=1;goto B58ea3d;
case 0x58ea42:goto L58ea42;
case 0x58ea45:c.instructions+=5;goto B58ea45;
case 0x58ea46:c.instructions+=4;goto B58ea46;
case 0x58ea47:c.instructions+=3;goto B58ea47;
case 0x58ea48:c.instructions+=2;goto B58ea48;
case 0x58ea4e:c.instructions+=1;goto B58ea4e;
case 0x58ea4f:goto L58ea4f;
case 0x58ea54:c.instructions+=6;goto B58ea54;
case 0x58ea55:c.instructions+=5;goto B58ea55;
case 0x58ea56:c.instructions+=4;goto B58ea56;
case 0x58ea5b:c.instructions+=3;goto B58ea5b;
case 0x58ea5c:c.instructions+=2;goto B58ea5c;
case 0x58ea62:c.instructions+=1;goto B58ea62;
case 0x58ea63:goto L58ea63;
case 0x58ea67:c.instructions+=2;goto B58ea67;
case 0x58ea68:c.instructions+=1;goto B58ea68;
case 0x58ea6d:goto L58ea6d;
case 0x58ea70:c.instructions+=5;goto B58ea70;
case 0x58ea71:c.instructions+=4;goto B58ea71;
case 0x58ea72:c.instructions+=3;goto B58ea72;
case 0x58ea73:c.instructions+=2;goto B58ea73;
case 0x58ea79:c.instructions+=1;goto B58ea79;
case 0x58ea7a:goto L58ea7a;
case 0x58ea7e:c.instructions+=2;goto B58ea7e;
case 0x58ea7f:c.instructions+=1;goto B58ea7f;
case 0x58ea84:goto L58ea84;
case 0x58ea87:c.instructions+=5;goto B58ea87;
case 0x58ea88:c.instructions+=4;goto B58ea88;
case 0x58ea89:c.instructions+=3;goto B58ea89;
case 0x58ea8a:c.instructions+=2;goto B58ea8a;
case 0x58ea90:c.instructions+=1;goto B58ea90;
case 0x58ea91:goto L58ea91;
case 0x58ea95:c.instructions+=2;goto B58ea95;
case 0x58ea96:c.instructions+=1;goto B58ea96;
case 0x58ea9b:goto L58ea9b;
case 0x58ea9e:c.instructions+=5;goto B58ea9e;
case 0x58ea9f:c.instructions+=4;goto B58ea9f;
case 0x58eaa0:c.instructions+=3;goto B58eaa0;
case 0x58eaa1:c.instructions+=2;goto B58eaa1;
case 0x58eaa7:c.instructions+=1;goto B58eaa7;
case 0x58eaa8:goto L58eaa8;
case 0x58eaac:c.instructions+=2;goto B58eaac;
case 0x58eaad:c.instructions+=1;goto B58eaad;
case 0x58eab2:goto L58eab2;
case 0x58eab5:c.instructions+=5;goto B58eab5;
case 0x58eab6:c.instructions+=4;goto B58eab6;
case 0x58eab7:c.instructions+=3;goto B58eab7;
case 0x58eab8:c.instructions+=2;goto B58eab8;
case 0x58eabe:c.instructions+=1;goto B58eabe;
case 0x58eabf:goto L58eabf;
case 0x58eac3:c.instructions+=3;goto B58eac3;
case 0x58eac4:c.instructions+=2;goto B58eac4;
case 0x58eac9:c.instructions+=1;goto B58eac9;
case 0x58eace:goto L58eace;
case 0x58eacf:c.instructions+=4;goto B58eacf;
case 0x58ead0:c.instructions+=3;goto B58ead0;
case 0x58ead1:c.instructions+=2;goto B58ead1;
case 0x58ead7:c.instructions+=1;goto B58ead7;
case 0x58ead8:goto L58ead8;
case 0x58eadc:c.instructions+=3;goto B58eadc;
case 0x58eadd:c.instructions+=2;goto B58eadd;
case 0x58eae2:c.instructions+=1;goto B58eae2;
case 0x58eae7:goto L58eae7;
case 0x58eae8:c.instructions+=4;goto B58eae8;
case 0x58eae9:c.instructions+=3;goto B58eae9;
case 0x58eaea:c.instructions+=2;goto B58eaea;
case 0x58eaf0:c.instructions+=1;goto B58eaf0;
case 0x58eaf1:goto L58eaf1;
case 0x58eaf5:c.instructions+=3;goto B58eaf5;
case 0x58eaf6:c.instructions+=2;goto B58eaf6;
case 0x58eafb:c.instructions+=1;goto B58eafb;
case 0x58eb00:goto L58eb00;
case 0x58eb01:c.instructions+=4;goto B58eb01;
case 0x58eb02:c.instructions+=3;goto B58eb02;
case 0x58eb03:c.instructions+=2;goto B58eb03;
case 0x58eb09:c.instructions+=1;goto B58eb09;
case 0x58eb0a:goto L58eb0a;
case 0x58eb0e:c.instructions+=2;goto B58eb0e;
case 0x58eb0f:c.instructions+=1;goto B58eb0f;
case 0x58eb14:goto L58eb14;
case 0x58eb17:goto L58eb17;
case 0x58eb18:c.instructions+=4;goto B58eb18;
case 0x58eb19:c.instructions+=3;goto B58eb19;
case 0x58eb1a:c.instructions+=2;goto B58eb1a;
case 0x58eb20:c.instructions+=1;goto B58eb20;
case 0x58eb70:goto L58eb70;
case 0x58eb75:c.instructions+=2;goto B58eb75;
case 0x58eb77:c.instructions+=1;goto B58eb77;
case 0x58eb79:goto L58eb79;
case 0x58eb7e:goto L58eb7e;
case 0x58eb83:c.instructions+=2;goto B58eb83;
case 0x58eb85:c.instructions+=1;goto B58eb85;
case 0x58eb87:goto L58eb87;
case 0x58eb8c:goto L58eb8c;
case 0x58eb91:goto L58eb91;
case 0x58eb9b:c.instructions+=2;goto B58eb9b;
case 0x58eba5:c.instructions+=1;goto B58eba5;
case 0x58ebaa:goto L58ebaa;
case 0x58ebb4:goto L58ebb4;
case 0x58ebc0:goto L58ebc0;
case 0x58ebc5:c.instructions+=8;goto B58ebc5;
case 0x58ebcb:c.instructions+=7;goto B58ebcb;
case 0x58ebcc:c.instructions+=6;goto B58ebcc;
case 0x58ebcd:c.instructions+=5;goto B58ebcd;
case 0x58ebce:c.instructions+=4;goto B58ebce;
case 0x58ebcf:c.instructions+=3;goto B58ebcf;
case 0x58ebd4:c.instructions+=2;goto B58ebd4;
case 0x58ebd9:c.instructions+=1;goto B58ebd9;
case 0x58ebdf:goto L58ebdf;
case 0x58ebe2:c.instructions+=1;goto B58ebe2;
case 0x58ebe8:goto L58ebe8;
case 0x58ebe9:c.instructions+=1;goto B58ebe9;
case 0x58ebef:goto L58ebef;
case 0x58ebf4:c.instructions+=8;goto B58ebf4;
case 0x58ebfa:c.instructions+=7;goto B58ebfa;
case 0x58ebfe:c.instructions+=6;goto B58ebfe;
case 0x58ec02:c.instructions+=5;goto B58ec02;
case 0x58ec08:c.instructions+=4;goto B58ec08;
case 0x58ec0e:c.instructions+=3;goto B58ec0e;
case 0x58ec10:c.instructions+=2;goto B58ec10;
case 0x58ec13:c.instructions+=1;goto B58ec13;
case 0x58ec19:goto L58ec19;
case 0x58ec1e:c.instructions+=3;goto B58ec1e;
case 0x58ec24:c.instructions+=2;goto B58ec24;
case 0x58ec26:c.instructions+=1;goto B58ec26;
case 0x58ec28:goto L58ec28;
case 0x58ec2f:c.instructions+=7;goto B58ec2f;
case 0x58ec33:c.instructions+=6;goto B58ec33;
case 0x58ec37:c.instructions+=5;goto B58ec37;
case 0x58ec3b:c.instructions+=4;goto B58ec3b;
case 0x58ec41:c.instructions+=3;goto B58ec41;
case 0x58ec43:c.instructions+=2;goto B58ec43;
case 0x58ec46:c.instructions+=1;goto B58ec46;
case 0x58ec48:goto L58ec48;
case 0x58ec4a:c.instructions+=1;goto B58ec4a;
case 0x58ec4e:goto L58ec4e;
case 0x58ec54:c.instructions+=1;goto B58ec54;
case 0x58ec56:goto L58ec56;
case 0x58ec5d:c.instructions+=7;goto B58ec5d;
case 0x58ec61:c.instructions+=6;goto B58ec61;
case 0x58ec65:c.instructions+=5;goto B58ec65;
case 0x58ec69:c.instructions+=4;goto B58ec69;
case 0x58ec6b:c.instructions+=3;goto B58ec6b;
case 0x58ec6d:c.instructions+=2;goto B58ec6d;
case 0x58ec70:c.instructions+=1;goto B58ec70;
case 0x58ec72:goto L58ec72;
case 0x58ec74:c.instructions+=1;goto B58ec74;
case 0x58ec78:goto L58ec78;
case 0x58ec7e:c.instructions+=1;goto B58ec7e;
case 0x58ec80:goto L58ec80;
case 0x58ec87:c.instructions+=7;goto B58ec87;
case 0x58ec8b:c.instructions+=6;goto B58ec8b;
case 0x58ec8f:c.instructions+=5;goto B58ec8f;
case 0x58ec93:c.instructions+=4;goto B58ec93;
case 0x58ec95:c.instructions+=3;goto B58ec95;
case 0x58ec97:c.instructions+=2;goto B58ec97;
case 0x58ec9a:c.instructions+=1;goto B58ec9a;
case 0x58ec9c:goto L58ec9c;
case 0x58ec9e:c.instructions+=1;goto B58ec9e;
case 0x58eca2:goto L58eca2;
case 0x58eca8:c.instructions+=1;goto B58eca8;
case 0x58ecaa:goto L58ecaa;
case 0x58ecb1:c.instructions+=7;goto B58ecb1;
case 0x58ecb5:c.instructions+=6;goto B58ecb5;
case 0x58ecb9:c.instructions+=5;goto B58ecb9;
case 0x58ecbd:c.instructions+=4;goto B58ecbd;
case 0x58ecbf:c.instructions+=3;goto B58ecbf;
case 0x58ecc1:c.instructions+=2;goto B58ecc1;
case 0x58ecc4:c.instructions+=1;goto B58ecc4;
case 0x58ecc6:goto L58ecc6;
case 0x58ecc8:c.instructions+=1;goto B58ecc8;
case 0x58eccc:goto L58eccc;
case 0x58ecd2:c.instructions+=1;goto B58ecd2;
case 0x58ecd4:goto L58ecd4;
case 0x58ecdb:c.instructions+=7;goto B58ecdb;
case 0x58ecdf:c.instructions+=6;goto B58ecdf;
case 0x58ece3:c.instructions+=5;goto B58ece3;
case 0x58ece7:c.instructions+=4;goto B58ece7;
case 0x58ece9:c.instructions+=3;goto B58ece9;
case 0x58eceb:c.instructions+=2;goto B58eceb;
case 0x58ecee:c.instructions+=1;goto B58ecee;
case 0x58ecf0:goto L58ecf0;
case 0x58ecf2:c.instructions+=1;goto B58ecf2;
case 0x58ecf6:goto L58ecf6;
case 0x58ecfc:c.instructions+=9;goto B58ecfc;
case 0x58ecfd:c.instructions+=8;goto B58ecfd;
case 0x58ed02:c.instructions+=7;goto B58ed02;
case 0x58ed08:c.instructions+=6;goto B58ed08;
case 0x58ed0a:c.instructions+=5;goto B58ed0a;
case 0x58ed10:c.instructions+=4;goto B58ed10;
case 0x58ed12:c.instructions+=3;goto B58ed12;
case 0x58ed18:c.instructions+=2;goto B58ed18;
case 0x58ed1b:c.instructions+=1;goto B58ed1b;
case 0x58ed20:goto L58ed20;
case 0x58ed22:c.instructions+=9;goto B58ed22;
case 0x58ed27:c.instructions+=8;goto B58ed27;
case 0x58ed29:c.instructions+=7;goto B58ed29;
case 0x58ed2d:c.instructions+=6;goto B58ed2d;
case 0x58ed33:c.instructions+=5;goto B58ed33;
case 0x58ed37:c.instructions+=4;goto B58ed37;
case 0x58ed3e:c.instructions+=3;goto B58ed3e;
case 0x58ed45:c.instructions+=2;goto B58ed45;
case 0x58ed4d:c.instructions+=1;goto B58ed4d;
case 0x58ed52:goto L58ed52;
case 0x58ed54:c.instructions+=3;goto B58ed54;
case 0x58ed55:c.instructions+=2;goto B58ed55;
case 0x58ed59:c.instructions+=1;goto B58ed59;
case 0x58ed5e:goto L58ed5e;
case 0x58ed63:c.instructions+=6;goto B58ed63;
case 0x58ed65:c.instructions+=5;goto B58ed65;
case 0x58ed67:c.instructions+=4;goto B58ed67;
case 0x58ed68:c.instructions+=3;goto B58ed68;
case 0x58ed6c:c.instructions+=2;goto B58ed6c;
case 0x58ed70:c.instructions+=1;goto B58ed70;
case 0x58ed75:goto L58ed75;
case 0x58ed77:c.instructions+=4;goto B58ed77;
case 0x58ed7b:c.instructions+=3;goto B58ed7b;
case 0x58ed7c:c.instructions+=2;goto B58ed7c;
case 0x58ed7e:c.instructions+=1;goto B58ed7e;
case 0x58ed83:goto L58ed83;
case 0x58ed86:c.instructions+=1;goto B58ed86;
case 0x58ed8b:goto L58ed8b;
case 0x58ed91:c.instructions+=4;goto B58ed91;
case 0x58ed93:c.instructions+=3;goto B58ed93;
case 0x58ed95:c.instructions+=2;goto B58ed95;
case 0x58ed9a:c.instructions+=1;goto B58ed9a;
case 0x58ed9c:goto L58ed9c;
case 0x58eda2:c.instructions+=1;goto B58eda2;
case 0x58eda4:goto L58eda4;
case 0x58eda9:goto L58eda9;
case 0x58edaf:c.instructions+=1;goto B58edaf;
case 0x58edb1:goto L58edb1;
case 0x58edb7:c.instructions+=1;goto B58edb7;
case 0x58edb9:goto L58edb9;
case 0x58edba:goto L58edba;
case 0x58edc0:c.instructions+=1;goto B58edc0;
case 0x58edc2:goto L58edc2;
case 0x58edc8:c.instructions+=1;goto B58edc8;
case 0x58edca:goto L58edca;
case 0x58edcb:goto L58edcb;
case 0x58edd1:c.instructions+=1;goto B58edd1;
case 0x58edd3:goto L58edd3;
case 0x58edd9:c.instructions+=1;goto B58edd9;
case 0x58eddb:goto L58eddb;
case 0x58eddc:goto L58eddc;
case 0x58ede2:c.instructions+=1;goto B58ede2;
case 0x58ede4:goto L58ede4;
case 0x58edea:c.instructions+=1;goto B58edea;
case 0x58edec:goto L58edec;
case 0x58eded:goto L58eded;
case 0x58edf3:c.instructions+=1;goto B58edf3;
case 0x58edf9:goto L58edf9;
case 0x58edfb:c.instructions+=1;goto B58edfb;
case 0x58ee01:goto L58ee01;
case 0x58ee06:c.instructions+=10;goto B58ee06;
case 0x58ee08:c.instructions+=9;goto B58ee08;
case 0x58ee0a:c.instructions+=8;goto B58ee0a;
case 0x58ee0e:c.instructions+=7;goto B58ee0e;
case 0x58ee13:c.instructions+=6;goto B58ee13;
case 0x58ee1d:c.instructions+=5;goto B58ee1d;
case 0x58ee21:c.instructions+=4;goto B58ee21;
case 0x58ee28:c.instructions+=3;goto B58ee28;
case 0x58ee2f:c.instructions+=2;goto B58ee2f;
case 0x58ee37:c.instructions+=1;goto B58ee37;
case 0x58ee3c:goto L58ee3c;
case 0x58ee3e:c.instructions+=3;goto B58ee3e;
case 0x58ee40:c.instructions+=2;goto B58ee40;
case 0x58ee44:c.instructions+=1;goto B58ee44;
case 0x58ee49:goto L58ee49;
case 0x58ee4b:c.instructions+=4;goto B58ee4b;
case 0x58ee4f:c.instructions+=3;goto B58ee4f;
case 0x58ee50:c.instructions+=2;goto B58ee50;
case 0x58ee52:c.instructions+=1;goto B58ee52;
case 0x58ee57:goto L58ee57;
case 0x58ee5a:c.instructions+=1;goto B58ee5a;
case 0x58ee5f:goto L58ee5f;
case 0x58ee65:c.instructions+=4;goto B58ee65;
case 0x58ee67:c.instructions+=3;goto B58ee67;
case 0x58ee69:c.instructions+=2;goto B58ee69;
case 0x58ee6e:c.instructions+=1;goto B58ee6e;
case 0x58ee70:goto L58ee70;
case 0x58ee76:c.instructions+=1;goto B58ee76;
case 0x58ee78:goto L58ee78;
case 0x58ee7d:goto L58ee7d;
case 0x58ee83:c.instructions+=1;goto B58ee83;
case 0x58ee85:goto L58ee85;
case 0x58ee8b:c.instructions+=1;goto B58ee8b;
case 0x58ee8d:goto L58ee8d;
case 0x58ee8e:goto L58ee8e;
case 0x58ee94:c.instructions+=1;goto B58ee94;
case 0x58ee96:goto L58ee96;
case 0x58ee9c:c.instructions+=1;goto B58ee9c;
case 0x58ee9e:goto L58ee9e;
case 0x58ee9f:goto L58ee9f;
case 0x58eea5:c.instructions+=1;goto B58eea5;
case 0x58eea7:goto L58eea7;
case 0x58eead:c.instructions+=1;goto B58eead;
case 0x58eeaf:goto L58eeaf;
case 0x58eeb0:goto L58eeb0;
case 0x58eeb6:c.instructions+=1;goto B58eeb6;
case 0x58eeb8:goto L58eeb8;
case 0x58eebe:c.instructions+=1;goto B58eebe;
case 0x58eec0:goto L58eec0;
case 0x58eec1:goto L58eec1;
case 0x58eec7:c.instructions+=2;goto B58eec7;
case 0x58eec9:c.instructions+=1;goto B58eec9;
case 0x58eecb:goto L58eecb;
case 0x58eecd:c.instructions+=1;goto B58eecd;
case 0x58eecf:goto L58eecf;
case 0x58eed4:c.instructions+=1;goto B58eed4;
case 0x58eed9:goto L58eed9;
case 0x58eedb:c.instructions+=8;goto B58eedb;
case 0x58eedd:c.instructions+=7;goto B58eedd;
case 0x58eee1:c.instructions+=6;goto B58eee1;
case 0x58eeeb:c.instructions+=5;goto B58eeeb;
case 0x58eeef:c.instructions+=4;goto B58eeef;
case 0x58eef6:c.instructions+=3;goto B58eef6;
case 0x58eefd:c.instructions+=2;goto B58eefd;
case 0x58ef05:c.instructions+=1;goto B58ef05;
case 0x58ef0a:goto L58ef0a;
case 0x58ef0c:c.instructions+=3;goto B58ef0c;
case 0x58ef0e:c.instructions+=2;goto B58ef0e;
case 0x58ef12:c.instructions+=1;goto B58ef12;
case 0x58ef17:goto L58ef17;
case 0x58ef19:c.instructions+=4;goto B58ef19;
case 0x58ef1d:c.instructions+=3;goto B58ef1d;
case 0x58ef1e:c.instructions+=2;goto B58ef1e;
case 0x58ef20:c.instructions+=1;goto B58ef20;
case 0x58ef25:goto L58ef25;
case 0x58ef28:c.instructions+=1;goto B58ef28;
case 0x58ef2d:goto L58ef2d;
case 0x58ef33:c.instructions+=1;goto B58ef33;
case 0x58ef35:goto L58ef35;
case 0x58ef3a:c.instructions+=1;goto B58ef3a;
case 0x58ef40:goto L58ef40;
case 0x58ef43:c.instructions+=1;goto B58ef43;
case 0x58ef45:goto L58ef45;
case 0x58ef47:c.instructions+=1;goto B58ef47;
case 0x58ef49:goto L58ef49;
case 0x58ef4e:c.instructions+=8;goto B58ef4e;
case 0x58ef51:c.instructions+=7;goto B58ef51;
case 0x58ef55:c.instructions+=6;goto B58ef55;
case 0x58ef59:c.instructions+=5;goto B58ef59;
case 0x58ef5f:c.instructions+=4;goto B58ef5f;
case 0x58ef65:c.instructions+=3;goto B58ef65;
case 0x58ef67:c.instructions+=2;goto B58ef67;
case 0x58ef6a:c.instructions+=1;goto B58ef6a;
case 0x58ef6c:goto L58ef6c;
case 0x58ef6f:c.instructions+=3;goto B58ef6f;
case 0x58ef71:c.instructions+=2;goto B58ef71;
case 0x58ef72:c.instructions+=1;goto B58ef72;
case 0x58ef77:goto L58ef77;
case 0x58ef7a:goto L58ef7a;
case 0x58ef7d:c.instructions+=2;goto B58ef7d;
case 0x58ef83:c.instructions+=1;goto B58ef83;
case 0x58ef85:goto L58ef85;
case 0x58ef86:c.instructions+=4;goto B58ef86;
case 0x58ef87:c.instructions+=3;goto B58ef87;
case 0x58ef88:c.instructions+=2;goto B58ef88;
case 0x58ef8e:c.instructions+=1;goto B58ef8e;
case 0x58ef90:goto L58ef90;
case 0x58ef91:c.instructions+=1;goto B58ef91;
case 0x58ef96:goto L58ef96;
case 0x58ef9a:c.instructions+=1;goto B58ef9a;
case 0x58ef9c:goto L58ef9c;
case 0x58ef9e:c.instructions+=1;goto B58ef9e;
case 0x58efa0:goto L58efa0;
case 0x58efa4:c.instructions+=1;goto B58efa4;
case 0x58efa6:goto L58efa6;
case 0x58efa9:c.instructions+=3;goto B58efa9;
case 0x58efab:c.instructions+=2;goto B58efab;
case 0x58efac:c.instructions+=1;goto B58efac;
case 0x58efb1:goto L58efb1;
case 0x58efb4:goto L58efb4;
case 0x58efb7:c.instructions+=2;goto B58efb7;
case 0x58efbd:c.instructions+=1;goto B58efbd;
case 0x58efbf:goto L58efbf;
case 0x58efc0:c.instructions+=1;goto B58efc0;
case 0x58efd0:goto L58efd0;
case 0x58efd4:c.instructions+=3;goto B58efd4;
case 0x58efd6:c.instructions+=2;goto B58efd6;
case 0x58efd7:c.instructions+=1;goto B58efd7;
case 0x58efdc:goto L58efdc;
case 0x58efe1:c.instructions+=3;goto B58efe1;
case 0x58efe4:c.instructions+=2;goto B58efe4;
case 0x58efe6:c.instructions+=1;goto B58efe6;
case 0x58efe8:goto L58efe8;
case 0x58efed:c.instructions+=2;goto B58efed;
case 0x58efef:c.instructions+=1;goto B58efef;
case 0x58eff1:goto L58eff1;
case 0x58eff6:goto L58eff6;
case 0x58effb:goto L58effb;
default:missing_instruction(c.pc);}
B58e001:L58e001:{c.instructions+=2;NFSU2_TR(0x58e001);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e002:{NFSU2_TR(0x58e002);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e007ull));
TAIL_STATIC(0x7425d0u,742);
}
B58e007:L58e007:{c.instructions+=11;NFSU2_TR(0x58e007);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58e00b:{NFSU2_TR(0x58e00b);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58e00f:{NFSU2_TR(0x58e00f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86a6e8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B58e016:{NFSU2_TR(0x58e016);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86a708ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B58e01d:{NFSU2_TR(0x58e01d);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58e021:{NFSU2_TR(0x58e021);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58e024:{NFSU2_TR(0x58e024);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58e027:{NFSU2_TR(0x58e027);
__builtin_memmove((R+0),(R+518),1);
}
B58e02a:{NFSU2_TR(0x58e02a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58e02c:{NFSU2_TR(0x58e02c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86a728ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B58e032:{NFSU2_TR(0x58e032);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58e03f;}}
}
B58e034:L58e034:{c.instructions+=2;NFSU2_TR(0x58e034);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58e038:{NFSU2_TR(0x58e038);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86a730ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B58e03f:L58e03f:{c.instructions+=6;NFSU2_TR(0x58e03f);
u8 U[5];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B58e043:{NFSU2_TR(0x58e043);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86a750ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B58e049:{NFSU2_TR(0x58e049);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x14ull))));
}
B58e04c:{NFSU2_TR(0x58e04c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B58e04d:{NFSU2_TR(0x58e04d);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B58e053:{NFSU2_TR(0x58e053);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x58df80u,58d);}
}
B58e059:L58e059:{c.instructions+=6;NFSU2_TR(0x58e059);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58e05d:{NFSU2_TR(0x58e05d);
s1(0x86a6c0,u8(0x1ull));
}
B58e064:{NFSU2_TR(0x58e064);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58e067:{NFSU2_TR(0x58e067);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e068:{NFSU2_TR(0x58e068);
u8 U[4];
w4(U+0,u32(0x86a620ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e06d:{NFSU2_TR(0x58e06d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e070ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B58e070:L58e070:{c.instructions+=7;NFSU2_TR(0x58e070);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58e073:{NFSU2_TR(0x58e073);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58e074:{NFSU2_TR(0x58e074);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58e075:{NFSU2_TR(0x58e075);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58e076:{NFSU2_TR(0x58e076);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58e077:{NFSU2_TR(0x58e077);
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
B58e07a:{NFSU2_TR(0x58e07a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58e080:L58e080:{c.instructions+=9;NFSU2_TR(0x58e080);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e081:{NFSU2_TR(0x58e081);
__builtin_memmove((R+20),(R+16),4);
}
B58e083:{NFSU2_TR(0x58e083);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x65cull))));
}
B58e089:{NFSU2_TR(0x58e089);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58e08f:{NFSU2_TR(0x58e08f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e090:{NFSU2_TR(0x58e090);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B58e092:{NFSU2_TR(0x58e092);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58e094:{NFSU2_TR(0x58e094);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58e097:{NFSU2_TR(0x58e097);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58e0a2;}}
}
B58e099:L58e099:{c.instructions+=5;NFSU2_TR(0x58e099);
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
B58e09b:{NFSU2_TR(0x58e09b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58e09c:{NFSU2_TR(0x58e09c);
__builtin_memmove((R+16),(R+20),4);
}
B58e09e:{NFSU2_TR(0x58e09e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58e09f:{NFSU2_TR(0x58e09f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58e0a2:L58e0a2:{c.instructions+=1;NFSU2_TR(0x58e0a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e0a7ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58e0a7:L58e0a7:{c.instructions+=2;NFSU2_TR(0x58e0a7);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B58e0aa:{NFSU2_TR(0x58e0aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58e0b6;}}
}
B58e0ac:L58e0ac:{c.instructions+=5;NFSU2_TR(0x58e0ac);
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
B58e0af:{NFSU2_TR(0x58e0af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58e0b0:{NFSU2_TR(0x58e0b0);
__builtin_memmove((R+16),(R+20),4);
}
B58e0b2:{NFSU2_TR(0x58e0b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58e0b3:{NFSU2_TR(0x58e0b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58e0b6:L58e0b6:{c.instructions+=7;NFSU2_TR(0x58e0b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e0b7:{NFSU2_TR(0x58e0b7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e0b8:{NFSU2_TR(0x58e0b8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9a4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B58e0be:{NFSU2_TR(0x58e0be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffda4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58e0c4:{NFSU2_TR(0x58e0c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffda8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58e0ca:{NFSU2_TR(0x58e0ca);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdacull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58e0d1:{NFSU2_TR(0x58e0d1);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B58e0d3:L58e0d3:{c.instructions+=9;NFSU2_TR(0x58e0d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B58e0d6:{NFSU2_TR(0x58e0d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e0d7:{NFSU2_TR(0x58e0d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B58e0da:{NFSU2_TR(0x58e0da);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e0db:{NFSU2_TR(0x58e0db);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e0dc:{NFSU2_TR(0x58e0dc);
w4(R+4,u32(0x85ad40ull));
}
B58e0e1:{NFSU2_TR(0x58e0e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58e0e4:{NFSU2_TR(0x58e0e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58e0e7:{NFSU2_TR(0x58e0e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e0ecull));
TAIL_STATIC(0x513160u,513);
}
B58e0ec:L58e0ec:{c.instructions+=3;NFSU2_TR(0x58e0ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58e0ef:{NFSU2_TR(0x58e0ef);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58e0f1:{NFSU2_TR(0x58e0f1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L58e0fc;}}
}
B58e0f3:L58e0f3:{c.instructions+=2;NFSU2_TR(0x58e0f3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B58e0f6:{NFSU2_TR(0x58e0f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58e0fc;}}
}
B58e0f8:L58e0f8:{c.instructions+=2;NFSU2_TR(0x58e0f8);
w1(R+0,u8(0x1ull));
}
B58e0fa:{NFSU2_TR(0x58e0fa);
{goto L58e0fe;}
}
B58e0fc:L58e0fc:{c.instructions+=1;NFSU2_TR(0x58e0fc);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B58e0fe:L58e0fe:{c.instructions+=5;NFSU2_TR(0x58e0fe);
w4(R+8,u32(r1(R+0)));
}
B58e101:{NFSU2_TR(0x58e101);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e103:{NFSU2_TR(0x58e103);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e104:{NFSU2_TR(0x58e104);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9a4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B58e10a:{NFSU2_TR(0x58e10a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e10full));
TAIL_STATIC(0x581d00u,581);
}
B58e10f:L58e10f:{c.instructions+=3;NFSU2_TR(0x58e10f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B58e110:{NFSU2_TR(0x58e110);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B58e113:{NFSU2_TR(0x58e113);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58e0d3u);}goto L58e0d3;}}
}
B58e115:L58e115:{c.instructions+=2;NFSU2_TR(0x58e115);
w4(R+4,u32(0x85ad40ull));
}
B58e11a:{NFSU2_TR(0x58e11a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e11full));
TAIL_STATIC(0x513880u,513);
}
B58e11f:L58e11f:{c.instructions+=5;NFSU2_TR(0x58e11f);
w4(R+0,u32(r1(R+0)));
}
B58e122:{NFSU2_TR(0x58e122);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e124:{NFSU2_TR(0x58e124);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e125:{NFSU2_TR(0x58e125);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9a4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B58e12b:{NFSU2_TR(0x58e12b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e130ull));
TAIL_STATIC(0x581d00u,581);
}
B58e130:L58e130:{c.instructions+=6;NFSU2_TR(0x58e130);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58e132:{NFSU2_TR(0x58e132);
{u32 ea_=u32(r4(R+20)+u32(4294966692u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B58e138:{NFSU2_TR(0x58e138);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B58e13b:{NFSU2_TR(0x58e13b);
w4(R+4,u32(0x7ull));
}
B58e140:{NFSU2_TR(0x58e140);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd5ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58e143:{NFSU2_TR(0x58e143);
{u32 ea_=u32(u32(7897444u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B58e149:L58e149:{c.instructions+=1;NFSU2_TR(0x58e149);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58e14b;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58e149u);}goto L58e149;}
}
B58e14b:L58e14b:{c.instructions+=4;NFSU2_TR(0x58e14b);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B58e14e:{NFSU2_TR(0x58e14e);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B58e150:{NFSU2_TR(0x58e150);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B58e151:{NFSU2_TR(0x58e151);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e156ull));
TAIL_STATIC(0x75bed4u,75b);
}
B58e156:L58e156:{c.instructions+=6;NFSU2_TR(0x58e156);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58e159:{NFSU2_TR(0x58e159);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B58e15c:{NFSU2_TR(0x58e15c);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B58e15f:{NFSU2_TR(0x58e15f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B58e161:{NFSU2_TR(0x58e161);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B58e164:{NFSU2_TR(0x58e164);
if(r1(R+514)){{goto L58e16c;}}
}
B58e166:L58e166:{c.instructions+=1;NFSU2_TR(0x58e166);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B58e16c:L58e16c:{c.instructions+=5;NFSU2_TR(0x58e16c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e16e:{NFSU2_TR(0x58e16e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B58e171:{NFSU2_TR(0x58e171);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e173:{NFSU2_TR(0x58e173);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e174:{NFSU2_TR(0x58e174);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e179ull));
TAIL_STATIC(0x75bed4u,75b);
}
B58e179:L58e179:{c.instructions+=4;NFSU2_TR(0x58e179);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e17a:{NFSU2_TR(0x58e17a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9a4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B58e180:{NFSU2_TR(0x58e180);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e181:{NFSU2_TR(0x58e181);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e186ull));
TAIL_STATIC(0x576130u,576);
}
B58e186:L58e186:{c.instructions+=8;NFSU2_TR(0x58e186);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58e189:{NFSU2_TR(0x58e189);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58e18f:{NFSU2_TR(0x58e18f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B58e192:{NFSU2_TR(0x58e192);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e193:{NFSU2_TR(0x58e193);
u8 U[4];
w4(U+0,u32(0x7a1104ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e198:{NFSU2_TR(0x58e198);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e19d:{NFSU2_TR(0x58e19d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e19e:{NFSU2_TR(0x58e19e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e1a3ull));
TAIL_STATIC(0x741a50u,741);
}
B58e1a3:L58e1a3:{c.instructions+=5;NFSU2_TR(0x58e1a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58e1a9:{NFSU2_TR(0x58e1a9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58e1ab:{NFSU2_TR(0x58e1ab);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdb0ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B58e1b1:{NFSU2_TR(0x58e1b1);
w4(R+4,u32(0x88ull));
}
B58e1b6:{NFSU2_TR(0x58e1b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdb1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58e1bc:L58e1bc:{c.instructions+=1;NFSU2_TR(0x58e1bc);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58e1be;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58e1bcu);}goto L58e1bc;}
}
B58e1be:L58e1be:{c.instructions+=8;NFSU2_TR(0x58e1be);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B58e1c0:{NFSU2_TR(0x58e1c0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e1c1:{NFSU2_TR(0x58e1c1);
u8 U[4];
w4(U+0,u32(0x7a1588ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e1c6:{NFSU2_TR(0x58e1c6);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B58e1c7:{NFSU2_TR(0x58e1c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B58e1cd:{NFSU2_TR(0x58e1cd);
u8 U[4];
w4(U+0,u32(0x224ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e1d2:{NFSU2_TR(0x58e1d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e1d3:{NFSU2_TR(0x58e1d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e1d8ull));
TAIL_STATIC(0x741a50u,741);
}
B58e1d8:L58e1d8:{c.instructions+=12;NFSU2_TR(0x58e1d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58e1db:{NFSU2_TR(0x58e1db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58e1de:{NFSU2_TR(0x58e1de);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
}
B58e1e1:{NFSU2_TR(0x58e1e1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e1e2:{NFSU2_TR(0x58e1e2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e1e3:{NFSU2_TR(0x58e1e3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e1e4:{NFSU2_TR(0x58e1e4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e1e5:{NFSU2_TR(0x58e1e5);
u8 U[4];
w4(U+0,u32(0x58bd40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e1ea:{NFSU2_TR(0x58e1ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B58e1f0:{NFSU2_TR(0x58e1f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e1f1:{NFSU2_TR(0x58e1f1);
u8 U[4];
w4(U+0,u32(0x61757869ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e1f6:{NFSU2_TR(0x58e1f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e1fbull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58e1fb:L58e1fb:{c.instructions+=2;NFSU2_TR(0x58e1fb);
__builtin_memmove((R+4),(R+0),4);
}
B58e1fd:{NFSU2_TR(0x58e1fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e202ull));
TAIL_STATIC(0x5869a0u,586);
}
B58e202:L58e202:{c.instructions+=6;NFSU2_TR(0x58e202);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58e203:{NFSU2_TR(0x58e203);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58e204:{NFSU2_TR(0x58e204);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58e205:{NFSU2_TR(0x58e205);
__builtin_memmove((R+16),(R+20),4);
}
B58e207:{NFSU2_TR(0x58e207);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58e208:{NFSU2_TR(0x58e208);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58e210:L58e210:{c.instructions+=4;NFSU2_TR(0x58e210);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B58e213:{NFSU2_TR(0x58e213);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e214:{NFSU2_TR(0x58e214);
__builtin_memmove((R+20),(R+4),4);
}
B58e216:{NFSU2_TR(0x58e216);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e21bull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58e21b:L58e21b:{c.instructions+=3;NFSU2_TR(0x58e21b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B58e21e:{NFSU2_TR(0x58e21e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58e220:{NFSU2_TR(0x58e220);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58e22c;}}
}
B58e222:L58e222:{c.instructions+=4;NFSU2_TR(0x58e222);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B58e225:{NFSU2_TR(0x58e225);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58e226:{NFSU2_TR(0x58e226);
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
B58e229:{NFSU2_TR(0x58e229);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58e22c:L58e22c:{c.instructions+=5;NFSU2_TR(0x58e22c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e22d:{NFSU2_TR(0x58e22d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e22e:{NFSU2_TR(0x58e22e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e22f:{NFSU2_TR(0x58e22f);
w4(R+4,u32(0x850080ull));
}
B58e234:{NFSU2_TR(0x58e234);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e239ull));
TAIL_STATIC(0x5031f0u,503);
}
B58e239:L58e239:{c.instructions+=4;NFSU2_TR(0x58e239);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B58e23d:{NFSU2_TR(0x58e23d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e23e:{NFSU2_TR(0x58e23e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e23f:{NFSU2_TR(0x58e23f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e244ull));
TAIL_STATIC(0x43dc30u,43d);
}
B58e244:L58e244:{c.instructions+=3;NFSU2_TR(0x58e244);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58e247:{NFSU2_TR(0x58e247);
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
B58e249:{NFSU2_TR(0x58e249);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58e255;}}
}
B58e24b:L58e24b:{c.instructions+=6;NFSU2_TR(0x58e24b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58e24c:{NFSU2_TR(0x58e24c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58e24d:{NFSU2_TR(0x58e24d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58e24e:{NFSU2_TR(0x58e24e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58e24f:{NFSU2_TR(0x58e24f);
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
B58e252:{NFSU2_TR(0x58e252);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58e255:L58e255:{c.instructions+=3;NFSU2_TR(0x58e255);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+24),(U+0),4);
}
B58e258:{NFSU2_TR(0x58e258);
__builtin_memmove((R+4),(R+20),4);
}
B58e25a:{NFSU2_TR(0x58e25a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e25full));
TAIL_STATIC(0x502fd0u,502);
}
B58e25f:L58e25f:{c.instructions+=3;NFSU2_TR(0x58e25f);
__builtin_memmove((R+28),(R+0),4);
}
B58e261:{NFSU2_TR(0x58e261);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58e263:{NFSU2_TR(0x58e263);
if(r1(R+518)){{goto L58e27c;}}
}
B58e265:L58e265:{c.instructions+=4;NFSU2_TR(0x58e265);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B58e268:{NFSU2_TR(0x58e268);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e269:{NFSU2_TR(0x58e269);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e26a:{NFSU2_TR(0x58e26a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e26full));
TAIL_STATIC(0x43dc30u,43d);
}
B58e26f:L58e26f:{c.instructions+=3;NFSU2_TR(0x58e26f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58e272:{NFSU2_TR(0x58e272);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58e274:{NFSU2_TR(0x58e274);
if(r1(R+518)){{goto L58e2c3;}}
}
B58e276:L58e276:{c.instructions+=3;NFSU2_TR(0x58e276);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B58e278:{NFSU2_TR(0x58e278);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58e27a:{NFSU2_TR(0x58e27a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58e265u);}goto L58e265;}}
}
B58e27c:L58e27c:{c.instructions+=3;NFSU2_TR(0x58e27c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e27e:{NFSU2_TR(0x58e27e);
__builtin_memmove((R+4),(R+20),4);
}
B58e280:{NFSU2_TR(0x58e280);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e285ull));
TAIL_STATIC(0x43be80u,43b);
}
B58e285:L58e285:{c.instructions+=2;NFSU2_TR(0x58e285);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58e288:{NFSU2_TR(0x58e288);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58e2d3;}}
}
B58e28a:L58e28a:{c.instructions+=13;NFSU2_TR(0x58e28a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58e28d:{NFSU2_TR(0x58e28d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B58e28f:{NFSU2_TR(0x58e28f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58e292:{NFSU2_TR(0x58e292);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B58e294:{NFSU2_TR(0x58e294);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58e297:{NFSU2_TR(0x58e297);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B58e29a:{NFSU2_TR(0x58e29a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+20)),r4(U+0));
}
B58e29d:{NFSU2_TR(0x58e29d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58e2a0:{NFSU2_TR(0x58e2a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B58e2a2:{NFSU2_TR(0x58e2a2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58e2a4:{NFSU2_TR(0x58e2a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58e2a7:{NFSU2_TR(0x58e2a7);
w4(R+4,u32(0xecull));
}
B58e2ac:{NFSU2_TR(0x58e2ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58e2af:L58e2af:{c.instructions+=1;NFSU2_TR(0x58e2af);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58e2b1;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58e2afu);}goto L58e2af;}
}
B58e2b1:L58e2b1:{c.instructions+=5;NFSU2_TR(0x58e2b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B58e2b4:{NFSU2_TR(0x58e2b4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e2b5:{NFSU2_TR(0x58e2b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e2b6:{NFSU2_TR(0x58e2b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3b8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58e2bc:{NFSU2_TR(0x58e2bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e2c1ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B58e2c1:L58e2c1:{c.instructions+=1;NFSU2_TR(0x58e2c1);
{goto L58e322;}
}
B58e2c3:L58e2c3:{c.instructions+=7;NFSU2_TR(0x58e2c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58e2c9:{NFSU2_TR(0x58e2c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58e2ca:{NFSU2_TR(0x58e2ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58e2cb:{NFSU2_TR(0x58e2cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58e2cc:{NFSU2_TR(0x58e2cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58e2cd:{NFSU2_TR(0x58e2cd);
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
B58e2d0:{NFSU2_TR(0x58e2d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58e2d3:L58e2d3:{c.instructions+=3;NFSU2_TR(0x58e2d3);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e2d5:{NFSU2_TR(0x58e2d5);
u8 U[4];
w4(U+0,u32(0x3bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e2da:{NFSU2_TR(0x58e2da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e2dfull));
TAIL_STATIC(0x6d7110u,6d7);
}
B58e2df:L58e2df:{c.instructions+=4;NFSU2_TR(0x58e2df);
__builtin_memmove((R+24),(R+0),4);
}
B58e2e1:{NFSU2_TR(0x58e2e1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58e2e4:{NFSU2_TR(0x58e2e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58e2e6:{NFSU2_TR(0x58e2e6);
if(r1(R+518)){{goto L58e300;}}
}
B58e2e8:L58e2e8:{c.instructions+=4;NFSU2_TR(0x58e2e8);
w4(R+4,u32(0xecull));
}
B58e2ed:{NFSU2_TR(0x58e2ed);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58e2ef:{NFSU2_TR(0x58e2ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58e2f2:{NFSU2_TR(0x58e2f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3b8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B58e2fc:L58e2fc:{c.instructions+=1;NFSU2_TR(0x58e2fc);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58e2fe;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58e2fcu);}goto L58e2fc;}
}
B58e2fe:L58e2fe:{c.instructions+=1;NFSU2_TR(0x58e2fe);
{goto L58e302;}
}
B58e300:L58e300:{c.instructions+=1;NFSU2_TR(0x58e300);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B58e302:L58e302:{c.instructions+=2;NFSU2_TR(0x58e302);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58e304:{NFSU2_TR(0x58e304);
if(r1(R+518)){{goto L58e394;}}
}
B58e30a:L58e30a:{c.instructions+=4;NFSU2_TR(0x58e30a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+8),(U+0),4);
}
B58e30d:{NFSU2_TR(0x58e30d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e30e:{NFSU2_TR(0x58e30e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e30f:{NFSU2_TR(0x58e30f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e314ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B58e314:L58e314:{c.instructions+=5;NFSU2_TR(0x58e314);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B58e317:{NFSU2_TR(0x58e317);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+20)),r4(U+0));
}
B58e31a:{NFSU2_TR(0x58e31a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58e31d:{NFSU2_TR(0x58e31d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58e320:{NFSU2_TR(0x58e320);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B58e322:L58e322:{c.instructions+=4;NFSU2_TR(0x58e322);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58e324:{NFSU2_TR(0x58e324);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58e329:{NFSU2_TR(0x58e329);
w4(R+4,u32(0xfull));
}
B58e32e:{NFSU2_TR(0x58e32e);
u8 U[4];
w4(U+0,u32(u32(u32(0x19ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B58e332:L58e332:{c.instructions+=1;NFSU2_TR(0x58e332);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58e334;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58e332u);}goto L58e332;}
}
B58e334:L58e334:{c.instructions+=9;NFSU2_TR(0x58e334);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58e337:{NFSU2_TR(0x58e337);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B58e339:{NFSU2_TR(0x58e339);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e33a:{NFSU2_TR(0x58e33a);
u8 U[4];
w4(U+0,u32(0x7a13e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e33f:{NFSU2_TR(0x58e33f);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B58e340:{NFSU2_TR(0x58e340);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58e344:{NFSU2_TR(0x58e344);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e346:{NFSU2_TR(0x58e346);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e347:{NFSU2_TR(0x58e347);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e34cull));
TAIL_STATIC(0x741a50u,741);
}
B58e34c:L58e34c:{c.instructions+=12;NFSU2_TR(0x58e34c);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58e350:{NFSU2_TR(0x58e350);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58e354:{NFSU2_TR(0x58e354);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58e357:{NFSU2_TR(0x58e357);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e359:{NFSU2_TR(0x58e359);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e35a:{NFSU2_TR(0x58e35a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e35b:{NFSU2_TR(0x58e35b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e35c:{NFSU2_TR(0x58e35c);
u8 U[4];
w4(U+0,u32(0x58bd90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e361:{NFSU2_TR(0x58e361);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58e365:{NFSU2_TR(0x58e365);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e366:{NFSU2_TR(0x58e366);
u8 U[4];
w4(U+0,u32(0x6f6e6c6eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e36b:{NFSU2_TR(0x58e36b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e370ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58e370:L58e370:{c.instructions+=2;NFSU2_TR(0x58e370);
__builtin_memmove((R+4),(R+0),4);
}
B58e372:{NFSU2_TR(0x58e372);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e377ull));
TAIL_STATIC(0x5869a0u,586);
}
B58e377:L58e377:{c.instructions+=3;NFSU2_TR(0x58e377);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58e37a:{NFSU2_TR(0x58e37a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3b8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58e380:{NFSU2_TR(0x58e380);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58e397;}}
}
B58e382:L58e382:{c.instructions+=3;NFSU2_TR(0x58e382);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58e384:{NFSU2_TR(0x58e384);
w4(R+4,u32(0xecull));
}
B58e389:{NFSU2_TR(0x58e389);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58e38c:L58e38c:{c.instructions+=1;NFSU2_TR(0x58e38c);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58e38e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58e38cu);}goto L58e38c;}
}
B58e38e:L58e38e:{c.instructions+=1;NFSU2_TR(0x58e38e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3b8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58e394:L58e394:{c.instructions+=1;NFSU2_TR(0x58e394);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B58e397:L58e397:{c.instructions+=6;NFSU2_TR(0x58e397);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58e398:{NFSU2_TR(0x58e398);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58e399:{NFSU2_TR(0x58e399);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58e39a:{NFSU2_TR(0x58e39a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58e39b:{NFSU2_TR(0x58e39b);
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
B58e39e:{NFSU2_TR(0x58e39e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58e3b0:L58e3b0:{c.instructions+=5;NFSU2_TR(0x58e3b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e3b1:{NFSU2_TR(0x58e3b1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e3b2:{NFSU2_TR(0x58e3b2);
__builtin_memmove((R+28),(R+4),4);
}
B58e3b4:{NFSU2_TR(0x58e3b4);
w4(R+4,u32(0x850080ull));
}
B58e3b9:{NFSU2_TR(0x58e3b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e3beull));
TAIL_STATIC(0x5031f0u,503);
}
B58e3be:L58e3be:{c.instructions+=4;NFSU2_TR(0x58e3be);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B58e3c2:{NFSU2_TR(0x58e3c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e3c3:{NFSU2_TR(0x58e3c3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e3c4:{NFSU2_TR(0x58e3c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e3c9ull));
TAIL_STATIC(0x43dc30u,43d);
}
B58e3c9:L58e3c9:{c.instructions+=3;NFSU2_TR(0x58e3c9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58e3cc:{NFSU2_TR(0x58e3cc);
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
B58e3ce:{NFSU2_TR(0x58e3ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58e3fe;}}
}
B58e3d0:L58e3d0:{c.instructions+=1;NFSU2_TR(0x58e3d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e3d5ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58e3d5:L58e3d5:{c.instructions+=3;NFSU2_TR(0x58e3d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58e3d8:{NFSU2_TR(0x58e3d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58e3da:{NFSU2_TR(0x58e3da);
if(r1(R+518)){{goto L58e3f7;}}
}
B58e3dc:L58e3dc:{c.instructions+=2;NFSU2_TR(0x58e3dc);
u8 U[4];
w4(U+0,u32(0x73656c66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e3e1:{NFSU2_TR(0x58e3e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e3e6ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58e3e6:L58e3e6:{c.instructions+=3;NFSU2_TR(0x58e3e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58e3e9:{NFSU2_TR(0x58e3e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e3ea:{NFSU2_TR(0x58e3ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e3efull));
TAIL_STATIC(0x744620u,744);
}
B58e3ef:L58e3ef:{c.instructions+=4;NFSU2_TR(0x58e3ef);
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
B58e3f2:{NFSU2_TR(0x58e3f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58e3f3:{NFSU2_TR(0x58e3f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58e3f4:{NFSU2_TR(0x58e3f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58e3f7:L58e3f7:{c.instructions+=4;NFSU2_TR(0x58e3f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58e3f8:{NFSU2_TR(0x58e3f8);
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
B58e3fa:{NFSU2_TR(0x58e3fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58e3fb:{NFSU2_TR(0x58e3fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58e3fe:L58e3fe:{c.instructions+=4;NFSU2_TR(0x58e3fe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e3ff:{NFSU2_TR(0x58e3ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B58e401:{NFSU2_TR(0x58e401);
__builtin_memmove((R+4),(R+28),4);
}
B58e403:{NFSU2_TR(0x58e403);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e408ull));
TAIL_STATIC(0x502fd0u,502);
}
B58e408:L58e408:{c.instructions+=3;NFSU2_TR(0x58e408);
__builtin_memmove((R+28),(R+0),4);
}
B58e40a:{NFSU2_TR(0x58e40a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58e40c:{NFSU2_TR(0x58e40c);
if(r1(R+518)){{goto L58e431;}}
}
B58e40e:L58e40e:{c.instructions+=1;NFSU2_TR(0x58e40e);
__builtin_memmove((R+28),(R+28),4);
}
B58e410:L58e410:{c.instructions+=4;NFSU2_TR(0x58e410);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B58e413:{NFSU2_TR(0x58e413);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e414:{NFSU2_TR(0x58e414);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e415:{NFSU2_TR(0x58e415);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e41aull));
TAIL_STATIC(0x43dc30u,43d);
}
B58e41a:L58e41a:{c.instructions+=3;NFSU2_TR(0x58e41a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58e41d:{NFSU2_TR(0x58e41d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58e41f:{NFSU2_TR(0x58e41f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58e42b;}}
}
B58e421:L58e421:{c.instructions+=3;NFSU2_TR(0x58e421);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58e427:{NFSU2_TR(0x58e427);
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
B58e429:{NFSU2_TR(0x58e429);
if(r1(R+518)){{goto L58e439;}}
}
B58e42b:L58e42b:{c.instructions+=3;NFSU2_TR(0x58e42b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B58e42d:{NFSU2_TR(0x58e42d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58e42f:{NFSU2_TR(0x58e42f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58e410u);}goto L58e410;}}
}
B58e431:L58e431:{c.instructions+=5;NFSU2_TR(0x58e431);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58e432:{NFSU2_TR(0x58e432);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58e433:{NFSU2_TR(0x58e433);
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
B58e435:{NFSU2_TR(0x58e435);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58e436:{NFSU2_TR(0x58e436);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58e439:L58e439:{c.instructions+=5;NFSU2_TR(0x58e439);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B58e43c:{NFSU2_TR(0x58e43c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58e43d:{NFSU2_TR(0x58e43d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58e43e:{NFSU2_TR(0x58e43e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58e43f:{NFSU2_TR(0x58e43f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58e450:L58e450:{c.instructions+=3;NFSU2_TR(0x58e450);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e451:{NFSU2_TR(0x58e451);
__builtin_memmove((R+12),(R+4),4);
}
B58e453:{NFSU2_TR(0x58e453);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e458ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58e458:L58e458:{c.instructions+=3;NFSU2_TR(0x58e458);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B58e45b:{NFSU2_TR(0x58e45b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58e45d:{NFSU2_TR(0x58e45d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58e465;}}
}
B58e45f:L58e45f:{c.instructions+=3;NFSU2_TR(0x58e45f);
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
B58e461:{NFSU2_TR(0x58e461);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58e462:{NFSU2_TR(0x58e462);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58e465:L58e465:{c.instructions+=5;NFSU2_TR(0x58e465);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e466:{NFSU2_TR(0x58e466);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e467:{NFSU2_TR(0x58e467);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e468:{NFSU2_TR(0x58e468);
w4(R+4,u32(0x850080ull));
}
B58e46d:{NFSU2_TR(0x58e46d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e472ull));
TAIL_STATIC(0x5031f0u,503);
}
B58e472:L58e472:{c.instructions+=4;NFSU2_TR(0x58e472);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B58e476:{NFSU2_TR(0x58e476);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e477:{NFSU2_TR(0x58e477);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e478:{NFSU2_TR(0x58e478);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e47dull));
TAIL_STATIC(0x43dc30u,43d);
}
B58e47d:L58e47d:{c.instructions+=3;NFSU2_TR(0x58e47d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58e480:{NFSU2_TR(0x58e480);
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
B58e482:{NFSU2_TR(0x58e482);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58e4ca;}}
}
B58e484:L58e484:{c.instructions+=1;NFSU2_TR(0x58e484);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e489ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58e489:L58e489:{c.instructions+=3;NFSU2_TR(0x58e489);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58e48c:{NFSU2_TR(0x58e48c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58e48e:{NFSU2_TR(0x58e48e);
if(r1(R+518)){{goto L58e50b;}}
}
B58e490:L58e490:{c.instructions+=2;NFSU2_TR(0x58e490);
u8 U[4];
w4(U+0,u32(0x73656c66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e495:{NFSU2_TR(0x58e495);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e49aull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58e49a:L58e49a:{c.instructions+=3;NFSU2_TR(0x58e49a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58e49d:{NFSU2_TR(0x58e49d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e49e:{NFSU2_TR(0x58e49e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e4a3ull));
TAIL_STATIC(0x744620u,744);
}
B58e4a3:L58e4a3:{c.instructions+=3;NFSU2_TR(0x58e4a3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58e4a6:{NFSU2_TR(0x58e4a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58e4a8:{NFSU2_TR(0x58e4a8);
if(r1(R+518)){{goto L58e50b;}}
}
B58e4aa:L58e4aa:{c.instructions+=3;NFSU2_TR(0x58e4aa);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B58e4b0:{NFSU2_TR(0x58e4b0);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58e4b2:{NFSU2_TR(0x58e4b2);
if(r1(R+518)){{goto L58e50b;}}
}
B58e4b4:L58e4b4:{c.instructions+=5;NFSU2_TR(0x58e4b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58e4b8:{NFSU2_TR(0x58e4b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e4b9:{NFSU2_TR(0x58e4b9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e4ba:{NFSU2_TR(0x58e4ba);
__builtin_memmove((R+4),(R+12),4);
}
B58e4bc:{NFSU2_TR(0x58e4bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e4c1ull));
TAIL_STATIC(0x5854c0u,585);
}
B58e4c1:L58e4c1:{c.instructions+=6;NFSU2_TR(0x58e4c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58e4c2:{NFSU2_TR(0x58e4c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58e4c3:{NFSU2_TR(0x58e4c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58e4c4:{NFSU2_TR(0x58e4c4);
w1(R+0,u8(0x1ull));
}
B58e4c6:{NFSU2_TR(0x58e4c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58e4c7:{NFSU2_TR(0x58e4c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58e4ca:L58e4ca:{c.instructions+=3;NFSU2_TR(0x58e4ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B58e4cc:{NFSU2_TR(0x58e4cc);
__builtin_memmove((R+4),(R+12),4);
}
B58e4ce:{NFSU2_TR(0x58e4ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e4d3ull));
TAIL_STATIC(0x502fd0u,502);
}
B58e4d3:L58e4d3:{c.instructions+=3;NFSU2_TR(0x58e4d3);
__builtin_memmove((R+28),(R+0),4);
}
B58e4d5:{NFSU2_TR(0x58e4d5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58e4d7:{NFSU2_TR(0x58e4d7);
if(r1(R+518)){{goto L58e50b;}}
}
B58e4d9:L58e4d9:{c.instructions+=1;NFSU2_TR(0x58e4d9);
__builtin_memmove((R+16),(R+16),4);
}
B58e4e0:L58e4e0:{c.instructions+=4;NFSU2_TR(0x58e4e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+8),(U+0),4);
}
B58e4e3:{NFSU2_TR(0x58e4e3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e4e4:{NFSU2_TR(0x58e4e4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e4e5:{NFSU2_TR(0x58e4e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e4eaull));
TAIL_STATIC(0x43dc30u,43d);
}
B58e4ea:L58e4ea:{c.instructions+=3;NFSU2_TR(0x58e4ea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58e4ed:{NFSU2_TR(0x58e4ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58e4ef:{NFSU2_TR(0x58e4ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58e505;}}
}
B58e4f1:L58e4f1:{c.instructions+=3;NFSU2_TR(0x58e4f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58e4f7:{NFSU2_TR(0x58e4f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58e4f9:{NFSU2_TR(0x58e4f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58e505;}}
}
B58e4fb:L58e4fb:{c.instructions+=3;NFSU2_TR(0x58e4fb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B58e501:{NFSU2_TR(0x58e501);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58e503:{NFSU2_TR(0x58e503);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58e514;}}
}
B58e505:L58e505:{c.instructions+=3;NFSU2_TR(0x58e505);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B58e507:{NFSU2_TR(0x58e507);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58e509:{NFSU2_TR(0x58e509);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58e4e0u);}goto L58e4e0;}}
}
B58e50b:L58e50b:{c.instructions+=6;NFSU2_TR(0x58e50b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58e50c:{NFSU2_TR(0x58e50c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58e50d:{NFSU2_TR(0x58e50d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58e50e:{NFSU2_TR(0x58e50e);
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
B58e510:{NFSU2_TR(0x58e510);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58e511:{NFSU2_TR(0x58e511);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58e514:L58e514:{c.instructions+=6;NFSU2_TR(0x58e514);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58e518:{NFSU2_TR(0x58e518);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B58e51b:{NFSU2_TR(0x58e51b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e51c:{NFSU2_TR(0x58e51c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e51d:{NFSU2_TR(0x58e51d);
__builtin_memmove((R+4),(R+12),4);
}
B58e51f:{NFSU2_TR(0x58e51f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e524ull));
TAIL_STATIC(0x5854c0u,585);
}
B58e524:L58e524:{c.instructions+=6;NFSU2_TR(0x58e524);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58e525:{NFSU2_TR(0x58e525);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58e526:{NFSU2_TR(0x58e526);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58e527:{NFSU2_TR(0x58e527);
w1(R+0,u8(0x1ull));
}
B58e529:{NFSU2_TR(0x58e529);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58e52a:{NFSU2_TR(0x58e52a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58e530:L58e530:{c.instructions+=9;NFSU2_TR(0x58e530);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58e536:{NFSU2_TR(0x58e536);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e538:{NFSU2_TR(0x58e538);
u8 U[4];
w4(U+0,u32(0x778ac6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e53d:{NFSU2_TR(0x58e53d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e53e:{NFSU2_TR(0x58e53e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58e545:{NFSU2_TR(0x58e545);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x288ull))));
}
B58e54b:{NFSU2_TR(0x58e54b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e54c:{NFSU2_TR(0x58e54c);
__builtin_memmove((R+28),(R+4),4);
}
B58e54e:{NFSU2_TR(0x58e54e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e553ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58e553:L58e553:{c.instructions+=3;NFSU2_TR(0x58e553);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B58e556:{NFSU2_TR(0x58e556);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58e558:{NFSU2_TR(0x58e558);
if(r1(R+518)){{goto L58e657;}}
}
B58e55e:L58e55e:{c.instructions+=4;NFSU2_TR(0x58e55e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e55f:{NFSU2_TR(0x58e55f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e560:{NFSU2_TR(0x58e560);
w4(R+4,u32(0x850080ull));
}
B58e565:{NFSU2_TR(0x58e565);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e56aull));
TAIL_STATIC(0x5031f0u,503);
}
B58e56a:L58e56a:{c.instructions+=4;NFSU2_TR(0x58e56a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2a4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B58e571:{NFSU2_TR(0x58e571);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e572:{NFSU2_TR(0x58e572);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e573:{NFSU2_TR(0x58e573);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e578ull));
TAIL_STATIC(0x43dc30u,43d);
}
B58e578:L58e578:{c.instructions+=3;NFSU2_TR(0x58e578);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58e57b:{NFSU2_TR(0x58e57b);
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
B58e57d:{NFSU2_TR(0x58e57d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58e623;}}
}
B58e583:L58e583:{c.instructions+=2;NFSU2_TR(0x58e583);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B58e58a:{NFSU2_TR(0x58e58a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58e5aa;}}
}
B58e58c:L58e58c:{c.instructions+=7;NFSU2_TR(0x58e58c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2acull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58e593:{NFSU2_TR(0x58e593);
u8 U[8];
w4(U+0,u32(u32(u32(0x2a8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58e59a:{NFSU2_TR(0x58e59a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B58e59d:{NFSU2_TR(0x58e59d);
u8 U[16];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B58e5a1:{NFSU2_TR(0x58e5a1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B58e5a3:{NFSU2_TR(0x58e5a3);
w1(R+0,u8(0x1ull));
}
B58e5a5:{NFSU2_TR(0x58e5a5);
{goto L58e655;}
}
B58e5aa:L58e5aa:{c.instructions+=1;NFSU2_TR(0x58e5aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e5afull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58e5af:L58e5af:{c.instructions+=3;NFSU2_TR(0x58e5af);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58e5b2:{NFSU2_TR(0x58e5b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58e5b4:{NFSU2_TR(0x58e5b4);
if(r1(R+518)){{goto L58e653;}}
}
B58e5ba:L58e5ba:{c.instructions+=2;NFSU2_TR(0x58e5ba);
u8 U[4];
w4(U+0,u32(0x73656c66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e5bf:{NFSU2_TR(0x58e5bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e5c4ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58e5c4:L58e5c4:{c.instructions+=3;NFSU2_TR(0x58e5c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58e5c7:{NFSU2_TR(0x58e5c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e5c8:{NFSU2_TR(0x58e5c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e5cdull));
TAIL_STATIC(0x744620u,744);
}
B58e5cd:L58e5cd:{c.instructions+=4;NFSU2_TR(0x58e5cd);
__builtin_memmove((R+24),(R+0),4);
}
B58e5cf:{NFSU2_TR(0x58e5cf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58e5d2:{NFSU2_TR(0x58e5d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58e5d4:{NFSU2_TR(0x58e5d4);
if(r1(R+518)){{goto L58e653;}}
}
B58e5d6:L58e5d6:{c.instructions+=2;NFSU2_TR(0x58e5d6);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58e5da:{NFSU2_TR(0x58e5da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e5dfull));
TAIL_STATIC(0x4ae7f0u,4ae);
}
B58e5df:L58e5df:{c.instructions+=4;NFSU2_TR(0x58e5df);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e5e0:{NFSU2_TR(0x58e5e0);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58e5e4:{NFSU2_TR(0x58e5e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x2a0ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B58e5ef:{NFSU2_TR(0x58e5ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e5f4ull));
TAIL_STATIC(0x5875c0u,587);
}
B58e5f4:L58e5f4:{c.instructions+=8;NFSU2_TR(0x58e5f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x2acull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58e5fb:{NFSU2_TR(0x58e5fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B58e5fe:{NFSU2_TR(0x58e5fe);
u8 U[16];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B58e602:{NFSU2_TR(0x58e602);
u8 U[8];
w4(U+0,u32(u32(u32(0x2a8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58e609:{NFSU2_TR(0x58e609);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58e60d:{NFSU2_TR(0x58e60d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B58e60f:{NFSU2_TR(0x58e60f);
u8 U[8];
w4(U+0,u32(u32(u32(0x29cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B58e61a:{NFSU2_TR(0x58e61a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e61full));
TAIL_STATIC(0x4cbaf0u,4cb);
}
B58e61f:L58e61f:{c.instructions+=2;NFSU2_TR(0x58e61f);
w1(R+0,u8(0x1ull));
}
B58e621:{NFSU2_TR(0x58e621);
{goto L58e655;}
}
B58e623:L58e623:{c.instructions+=3;NFSU2_TR(0x58e623);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B58e625:{NFSU2_TR(0x58e625);
__builtin_memmove((R+4),(R+28),4);
}
B58e627:{NFSU2_TR(0x58e627);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e62cull));
TAIL_STATIC(0x502fd0u,502);
}
B58e62c:L58e62c:{c.instructions+=3;NFSU2_TR(0x58e62c);
__builtin_memmove((R+28),(R+0),4);
}
B58e62e:{NFSU2_TR(0x58e62e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58e630:{NFSU2_TR(0x58e630);
if(r1(R+518)){{goto L58e653;}}
}
B58e632:L58e632:{c.instructions+=4;NFSU2_TR(0x58e632);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B58e635:{NFSU2_TR(0x58e635);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e636:{NFSU2_TR(0x58e636);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e637:{NFSU2_TR(0x58e637);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e63cull));
TAIL_STATIC(0x43dc30u,43d);
}
B58e63c:L58e63c:{c.instructions+=3;NFSU2_TR(0x58e63c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58e63f:{NFSU2_TR(0x58e63f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58e641:{NFSU2_TR(0x58e641);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58e64d;}}
}
B58e643:L58e643:{c.instructions+=3;NFSU2_TR(0x58e643);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58e649:{NFSU2_TR(0x58e649);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58e64b:{NFSU2_TR(0x58e64b);
if(r1(R+518)){{goto L58e66f;}}
}
B58e64d:L58e64d:{c.instructions+=3;NFSU2_TR(0x58e64d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B58e64f:{NFSU2_TR(0x58e64f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58e651:{NFSU2_TR(0x58e651);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58e632u);}goto L58e632;}}
}
B58e653:L58e653:{c.instructions+=1;NFSU2_TR(0x58e653);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B58e655:L58e655:{c.instructions+=2;NFSU2_TR(0x58e655);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58e656:{NFSU2_TR(0x58e656);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58e657:L58e657:{c.instructions+=5;NFSU2_TR(0x58e657);
u8 U[8];
w4(U+0,u32(u32(u32(0x28cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58e65e:{NFSU2_TR(0x58e65e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58e65f:{NFSU2_TR(0x58e65f);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58e666:{NFSU2_TR(0x58e666);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x294ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x294ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x294ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58e66c:{NFSU2_TR(0x58e66c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58e66f:L58e66f:{c.instructions+=2;NFSU2_TR(0x58e66f);
u8 U[4];
w4(U+0,u32(u32(u32(0x150ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58e676:{NFSU2_TR(0x58e676);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e67bull));
TAIL_STATIC(0x4ae7f0u,4ae);
}
B58e67b:L58e67b:{c.instructions+=5;NFSU2_TR(0x58e67b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B58e67e:{NFSU2_TR(0x58e67e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e67f:{NFSU2_TR(0x58e67f);
u8 U[4];
w4(U+0,u32(u32(u32(0x154ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58e686:{NFSU2_TR(0x58e686);
u8 U[8];
w4(U+0,u32(u32(u32(0x2a0ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B58e691:{NFSU2_TR(0x58e691);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e696ull));
TAIL_STATIC(0x5875c0u,587);
}
B58e696:L58e696:{c.instructions+=8;NFSU2_TR(0x58e696);
u8 U[8];
w4(U+0,u32(u32(u32(0x2acull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58e69d:{NFSU2_TR(0x58e69d);
u8 U[8];
w4(U+0,u32(u32(u32(0x2a8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58e6a4:{NFSU2_TR(0x58e6a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B58e6a7:{NFSU2_TR(0x58e6a7);
u8 U[16];
w4(U+0,u32(u32(u32(0x180ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B58e6ae:{NFSU2_TR(0x58e6ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B58e6b0:{NFSU2_TR(0x58e6b0);
u8 U[4];
w4(U+0,u32(u32(u32(0x150ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58e6b7:{NFSU2_TR(0x58e6b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x29cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B58e6c2:{NFSU2_TR(0x58e6c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e6c7ull));
TAIL_STATIC(0x4cbaf0u,4cb);
}
B58e6c7:L58e6c7:{c.instructions+=2;NFSU2_TR(0x58e6c7);
w1(R+0,u8(0x1ull));
}
B58e6c9:{NFSU2_TR(0x58e6c9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58e655u);}goto L58e655;}
}
B58e6d0:L58e6d0:{c.instructions+=9;NFSU2_TR(0x58e6d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58e6d6:{NFSU2_TR(0x58e6d6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e6d8:{NFSU2_TR(0x58e6d8);
u8 U[4];
w4(U+0,u32(0x778ac6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e6dd:{NFSU2_TR(0x58e6dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e6de:{NFSU2_TR(0x58e6de);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58e6e5:{NFSU2_TR(0x58e6e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x288ull))));
}
B58e6eb:{NFSU2_TR(0x58e6eb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e6ec:{NFSU2_TR(0x58e6ec);
__builtin_memmove((R+28),(R+4),4);
}
B58e6ee:{NFSU2_TR(0x58e6ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e6f3ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58e6f3:L58e6f3:{c.instructions+=3;NFSU2_TR(0x58e6f3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B58e6f6:{NFSU2_TR(0x58e6f6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58e6f8:{NFSU2_TR(0x58e6f8);
if(r1(R+518)){{goto L58e7e5;}}
}
B58e6fe:L58e6fe:{c.instructions+=4;NFSU2_TR(0x58e6fe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e6ff:{NFSU2_TR(0x58e6ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e700:{NFSU2_TR(0x58e700);
w4(R+4,u32(0x850080ull));
}
B58e705:{NFSU2_TR(0x58e705);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e70aull));
TAIL_STATIC(0x5031f0u,503);
}
B58e70a:L58e70a:{c.instructions+=4;NFSU2_TR(0x58e70a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2a4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B58e711:{NFSU2_TR(0x58e711);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e712:{NFSU2_TR(0x58e712);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e713:{NFSU2_TR(0x58e713);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e718ull));
TAIL_STATIC(0x43dc30u,43d);
}
B58e718:L58e718:{c.instructions+=3;NFSU2_TR(0x58e718);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58e71b:{NFSU2_TR(0x58e71b);
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
B58e71d:{NFSU2_TR(0x58e71d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58e7ae;}}
}
B58e723:L58e723:{c.instructions+=2;NFSU2_TR(0x58e723);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B58e72a:{NFSU2_TR(0x58e72a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58e73f;}}
}
B58e72c:L58e72c:{c.instructions+=5;NFSU2_TR(0x58e72c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58e72f:{NFSU2_TR(0x58e72f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2a8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58e736:{NFSU2_TR(0x58e736);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B58e738:{NFSU2_TR(0x58e738);
w1(R+0,u8(0x1ull));
}
B58e73a:{NFSU2_TR(0x58e73a);
{goto L58e7e3;}
}
B58e73f:L58e73f:{c.instructions+=1;NFSU2_TR(0x58e73f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e744ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58e744:L58e744:{c.instructions+=3;NFSU2_TR(0x58e744);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58e747:{NFSU2_TR(0x58e747);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58e749:{NFSU2_TR(0x58e749);
if(r1(R+518)){{goto L58e7e1;}}
}
B58e74f:L58e74f:{c.instructions+=2;NFSU2_TR(0x58e74f);
u8 U[4];
w4(U+0,u32(0x73656c66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e754:{NFSU2_TR(0x58e754);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e759ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58e759:L58e759:{c.instructions+=3;NFSU2_TR(0x58e759);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58e75c:{NFSU2_TR(0x58e75c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e75d:{NFSU2_TR(0x58e75d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e762ull));
TAIL_STATIC(0x744620u,744);
}
B58e762:L58e762:{c.instructions+=4;NFSU2_TR(0x58e762);
__builtin_memmove((R+24),(R+0),4);
}
B58e764:{NFSU2_TR(0x58e764);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58e767:{NFSU2_TR(0x58e767);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58e769:{NFSU2_TR(0x58e769);
if(r1(R+518)){{goto L58e7e1;}}
}
B58e76b:L58e76b:{c.instructions+=2;NFSU2_TR(0x58e76b);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58e76f:{NFSU2_TR(0x58e76f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e774ull));
TAIL_STATIC(0x4ae7f0u,4ae);
}
B58e774:L58e774:{c.instructions+=4;NFSU2_TR(0x58e774);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e775:{NFSU2_TR(0x58e775);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58e779:{NFSU2_TR(0x58e779);
u8 U[8];
w4(U+0,u32(u32(u32(0x2a0ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B58e784:{NFSU2_TR(0x58e784);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e789ull));
TAIL_STATIC(0x5875c0u,587);
}
B58e789:L58e789:{c.instructions+=6;NFSU2_TR(0x58e789);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58e78d:{NFSU2_TR(0x58e78d);
u8 U[8];
w4(U+0,u32(u32(u32(0x2a8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58e794:{NFSU2_TR(0x58e794);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B58e796:{NFSU2_TR(0x58e796);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58e79a:{NFSU2_TR(0x58e79a);
u8 U[8];
w4(U+0,u32(u32(u32(0x29cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B58e7a5:{NFSU2_TR(0x58e7a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e7aaull));
TAIL_STATIC(0x4cbaf0u,4cb);
}
B58e7aa:L58e7aa:{c.instructions+=2;NFSU2_TR(0x58e7aa);
w1(R+0,u8(0x1ull));
}
B58e7ac:{NFSU2_TR(0x58e7ac);
{goto L58e7e3;}
}
B58e7ae:L58e7ae:{c.instructions+=3;NFSU2_TR(0x58e7ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B58e7b0:{NFSU2_TR(0x58e7b0);
__builtin_memmove((R+4),(R+28),4);
}
B58e7b2:{NFSU2_TR(0x58e7b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e7b7ull));
TAIL_STATIC(0x502fd0u,502);
}
B58e7b7:L58e7b7:{c.instructions+=3;NFSU2_TR(0x58e7b7);
__builtin_memmove((R+28),(R+0),4);
}
B58e7b9:{NFSU2_TR(0x58e7b9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58e7bb:{NFSU2_TR(0x58e7bb);
if(r1(R+518)){{goto L58e7e1;}}
}
B58e7bd:L58e7bd:{c.instructions+=1;NFSU2_TR(0x58e7bd);
__builtin_memmove((R+4),(R+4),4);
}
B58e7c0:L58e7c0:{c.instructions+=4;NFSU2_TR(0x58e7c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+8),(U+0),4);
}
B58e7c3:{NFSU2_TR(0x58e7c3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e7c4:{NFSU2_TR(0x58e7c4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e7c5:{NFSU2_TR(0x58e7c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e7caull));
TAIL_STATIC(0x43dc30u,43d);
}
B58e7ca:L58e7ca:{c.instructions+=3;NFSU2_TR(0x58e7ca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58e7cd:{NFSU2_TR(0x58e7cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58e7cf:{NFSU2_TR(0x58e7cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58e7db;}}
}
B58e7d1:L58e7d1:{c.instructions+=3;NFSU2_TR(0x58e7d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58e7d7:{NFSU2_TR(0x58e7d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58e7d9:{NFSU2_TR(0x58e7d9);
if(r1(R+518)){{goto L58e7fd;}}
}
B58e7db:L58e7db:{c.instructions+=3;NFSU2_TR(0x58e7db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B58e7dd:{NFSU2_TR(0x58e7dd);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58e7df:{NFSU2_TR(0x58e7df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58e7c0u);}goto L58e7c0;}}
}
B58e7e1:L58e7e1:{c.instructions+=1;NFSU2_TR(0x58e7e1);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B58e7e3:L58e7e3:{c.instructions+=2;NFSU2_TR(0x58e7e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58e7e4:{NFSU2_TR(0x58e7e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58e7e5:L58e7e5:{c.instructions+=5;NFSU2_TR(0x58e7e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x28cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58e7ec:{NFSU2_TR(0x58e7ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58e7ed:{NFSU2_TR(0x58e7ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58e7f4:{NFSU2_TR(0x58e7f4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x294ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x294ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x294ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58e7fa:{NFSU2_TR(0x58e7fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58e7fd:L58e7fd:{c.instructions+=2;NFSU2_TR(0x58e7fd);
u8 U[4];
w4(U+0,u32(u32(u32(0x150ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58e804:{NFSU2_TR(0x58e804);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e809ull));
TAIL_STATIC(0x4ae7f0u,4ae);
}
B58e809:L58e809:{c.instructions+=5;NFSU2_TR(0x58e809);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B58e80c:{NFSU2_TR(0x58e80c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e80d:{NFSU2_TR(0x58e80d);
u8 U[4];
w4(U+0,u32(u32(u32(0x154ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58e814:{NFSU2_TR(0x58e814);
u8 U[8];
w4(U+0,u32(u32(u32(0x2a0ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B58e81f:{NFSU2_TR(0x58e81f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e824ull));
TAIL_STATIC(0x5875c0u,587);
}
B58e824:L58e824:{c.instructions+=6;NFSU2_TR(0x58e824);
u8 U[8];
w4(U+0,u32(u32(u32(0x160ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58e82b:{NFSU2_TR(0x58e82b);
u8 U[8];
w4(U+0,u32(u32(u32(0x2a8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58e832:{NFSU2_TR(0x58e832);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B58e834:{NFSU2_TR(0x58e834);
u8 U[4];
w4(U+0,u32(u32(u32(0x150ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58e83b:{NFSU2_TR(0x58e83b);
u8 U[8];
w4(U+0,u32(u32(u32(0x29cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B58e846:{NFSU2_TR(0x58e846);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e84bull));
TAIL_STATIC(0x4cbaf0u,4cb);
}
B58e84b:L58e84b:{c.instructions+=2;NFSU2_TR(0x58e84b);
w1(R+0,u8(0x1ull));
}
B58e84d:{NFSU2_TR(0x58e84d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58e7e3u);}goto L58e7e3;}
}
B58e850:L58e850:{c.instructions+=8;NFSU2_TR(0x58e850);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e851:{NFSU2_TR(0x58e851);
__builtin_memmove((R+20),(R+16),4);
}
B58e853:{NFSU2_TR(0x58e853);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B58e856:{NFSU2_TR(0x58e856);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x80ull))));
}
B58e85c:{NFSU2_TR(0x58e85c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e85d:{NFSU2_TR(0x58e85d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e85e:{NFSU2_TR(0x58e85e);
__builtin_memmove((R+24),(R+4),4);
}
B58e860:{NFSU2_TR(0x58e860);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e865ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58e865:L58e865:{c.instructions+=3;NFSU2_TR(0x58e865);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B58e868:{NFSU2_TR(0x58e868);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58e86a:{NFSU2_TR(0x58e86a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58e877;}}
}
B58e86c:L58e86c:{c.instructions+=6;NFSU2_TR(0x58e86c);
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
B58e86f:{NFSU2_TR(0x58e86f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58e870:{NFSU2_TR(0x58e870);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58e871:{NFSU2_TR(0x58e871);
__builtin_memmove((R+16),(R+20),4);
}
B58e873:{NFSU2_TR(0x58e873);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58e874:{NFSU2_TR(0x58e874);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58e877:L58e877:{c.instructions+=2;NFSU2_TR(0x58e877);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B58e87e:{NFSU2_TR(0x58e87e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58e897;}}
}
B58e880:L58e880:{c.instructions+=3;NFSU2_TR(0x58e880);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B58e883:{NFSU2_TR(0x58e883);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B58e886:{NFSU2_TR(0x58e886);
w4(R+4,u32(0x51ull));
}
B58e88b:L58e88b:{c.instructions+=1;NFSU2_TR(0x58e88b);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L58e88d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58e88bu);}goto L58e88b;}
}
B58e88d:L58e88d:{c.instructions+=6;NFSU2_TR(0x58e88d);
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
B58e88f:{NFSU2_TR(0x58e88f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58e890:{NFSU2_TR(0x58e890);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58e891:{NFSU2_TR(0x58e891);
__builtin_memmove((R+16),(R+20),4);
}
B58e893:{NFSU2_TR(0x58e893);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58e894:{NFSU2_TR(0x58e894);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58e897:L58e897:{c.instructions+=4;NFSU2_TR(0x58e897);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58e89c:{NFSU2_TR(0x58e89c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58e89e:{NFSU2_TR(0x58e89e);
w4(R+4,u32(0x1full));
}
B58e8a3:{NFSU2_TR(0x58e8a3);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B58e8a7:L58e8a7:{c.instructions+=1;NFSU2_TR(0x58e8a7);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58e8a9;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58e8a7u);}goto L58e8a7;}
}
B58e8a9:L58e8a9:{c.instructions+=4;NFSU2_TR(0x58e8a9);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B58e8ab:{NFSU2_TR(0x58e8ab);
w4(R+4,u32(0x850080ull));
}
B58e8b0:{NFSU2_TR(0x58e8b0);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B58e8b1:{NFSU2_TR(0x58e8b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e8b6ull));
TAIL_STATIC(0x5031f0u,503);
}
B58e8b6:L58e8b6:{c.instructions+=6;NFSU2_TR(0x58e8b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e8b7:{NFSU2_TR(0x58e8b7);
u8 U[4];
w4(U+0,u32(0x7a13e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e8bc:{NFSU2_TR(0x58e8bc);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58e8c0:{NFSU2_TR(0x58e8c0);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e8c5:{NFSU2_TR(0x58e8c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e8c6:{NFSU2_TR(0x58e8c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e8cbull));
TAIL_STATIC(0x741a50u,741);
}
B58e8cb:L58e8cb:{c.instructions+=12;NFSU2_TR(0x58e8cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58e8ce:{NFSU2_TR(0x58e8ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58e8d1:{NFSU2_TR(0x58e8d1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58e8d4:{NFSU2_TR(0x58e8d4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e8d6:{NFSU2_TR(0x58e8d6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e8d7:{NFSU2_TR(0x58e8d7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e8d8:{NFSU2_TR(0x58e8d8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e8d9:{NFSU2_TR(0x58e8d9);
u8 U[4];
w4(U+0,u32(0x58be80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e8de:{NFSU2_TR(0x58e8de);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58e8e2:{NFSU2_TR(0x58e8e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e8e3:{NFSU2_TR(0x58e8e3);
u8 U[4];
w4(U+0,u32(0x75736572ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e8e8:{NFSU2_TR(0x58e8e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e8edull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58e8ed:L58e8ed:{c.instructions+=2;NFSU2_TR(0x58e8ed);
__builtin_memmove((R+4),(R+0),4);
}
B58e8ef:{NFSU2_TR(0x58e8ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e8f4ull));
TAIL_STATIC(0x5869a0u,586);
}
B58e8f4:L58e8f4:{c.instructions+=5;NFSU2_TR(0x58e8f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58e8f5:{NFSU2_TR(0x58e8f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58e8f6:{NFSU2_TR(0x58e8f6);
__builtin_memmove((R+16),(R+20),4);
}
B58e8f8:{NFSU2_TR(0x58e8f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58e8f9:{NFSU2_TR(0x58e8f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58e900:L58e900:{c.instructions+=13;NFSU2_TR(0x58e900);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x414ull))));
}
B58e906:{NFSU2_TR(0x58e906);
u8 U[8];
w4(U+0,u32(u32(u32(0x41cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58e90d:{NFSU2_TR(0x58e90d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e90e:{NFSU2_TR(0x58e90e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e90f:{NFSU2_TR(0x58e90f);
u8 U[8];
w4(U+0,u32(u32(u32(0x420ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58e916:{NFSU2_TR(0x58e916);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e917:{NFSU2_TR(0x58e917);
__builtin_memmove((R+4),(R+0),4);
}
B58e919:{NFSU2_TR(0x58e919);
__builtin_memmove((R+12),(R+4),4);
}
B58e91b:{NFSU2_TR(0x58e91b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B58e91e:{NFSU2_TR(0x58e91e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B58e920:{NFSU2_TR(0x58e920);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B58e924:{NFSU2_TR(0x58e924);
u8 U[8];
w4(U+0,u32(u32(u32(0x418ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58e92b:{NFSU2_TR(0x58e92b);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B58e92f:L58e92f:{c.instructions+=1;NFSU2_TR(0x58e92f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L58e931;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58e92fu);}goto L58e92f;}
}
B58e931:L58e931:{c.instructions+=2;NFSU2_TR(0x58e931);
__builtin_memmove((R+4),(R+12),4);
}
B58e933:{NFSU2_TR(0x58e933);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B58e936:L58e936:{c.instructions+=1;NFSU2_TR(0x58e936);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L58e938;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58e936u);}goto L58e936;}
}
B58e938:L58e938:{c.instructions+=9;NFSU2_TR(0x58e938);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e93a:{NFSU2_TR(0x58e93a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58e93e:{NFSU2_TR(0x58e93e);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B58e941:{NFSU2_TR(0x58e941);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e942:{NFSU2_TR(0x58e942);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58e946:{NFSU2_TR(0x58e946);
u8 U[8];
w4(U+0,u32(u32(u32(0x41cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58e94d:{NFSU2_TR(0x58e94d);
u8 U[5];
w4(U+0,u32(u32(u32(0x424ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B58e954:{NFSU2_TR(0x58e954);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58e958:{NFSU2_TR(0x58e958);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e95dull));
TAIL_STATIC(0x581d90u,581);
}
B58e95d:L58e95d:{c.instructions+=3;NFSU2_TR(0x58e95d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B58e961:{NFSU2_TR(0x58e961);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
w1(R+512,u8((r1(U+0))<(u8(0x12ull))));
}
B58e964:{NFSU2_TR(0x58e964);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L58eb17;}}
}
B58e96a:L58e96a:{c.instructions+=4;NFSU2_TR(0x58e96a);
{u32 ea_=u32(r4(R+16)+u32(1044u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B58e971:{NFSU2_TR(0x58e971);
{u32 ea_=u32(u32(7897444u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B58e977:{NFSU2_TR(0x58e977);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B58e97b:{NFSU2_TR(0x58e97b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e980ull));
TAIL_STATIC(0x75bed4u,75b);
}
B58e980:L58e980:{c.instructions+=6;NFSU2_TR(0x58e980);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58e984:{NFSU2_TR(0x58e984);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B58e988:{NFSU2_TR(0x58e988);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B58e98c:{NFSU2_TR(0x58e98c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B58e98e:{NFSU2_TR(0x58e98e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B58e991:{NFSU2_TR(0x58e991);
if(r1(R+514)){{goto L58e999;}}
}
B58e993:L58e993:{c.instructions+=1;NFSU2_TR(0x58e993);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B58e999:L58e999:{c.instructions+=3;NFSU2_TR(0x58e999);
u8 U[8];
w4(U+0,u32(u32(u32(0x42cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58e9a0:{NFSU2_TR(0x58e9a0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e9a1:{NFSU2_TR(0x58e9a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e9a6ull));
TAIL_STATIC(0x75bed4u,75b);
}
B58e9a6:L58e9a6:{c.instructions+=3;NFSU2_TR(0x58e9a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e9a7:{NFSU2_TR(0x58e9a7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e9a8:{NFSU2_TR(0x58e9a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e9adull));
TAIL_STATIC(0x583930u,583);
}
B58e9ad:L58e9ad:{c.instructions+=4;NFSU2_TR(0x58e9ad);
w4(R+0,u32(r1(R+12)));
}
B58e9b0:{NFSU2_TR(0x58e9b0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B58e9b3:{NFSU2_TR(0x58e9b3);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x11ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x11ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x11ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58e9b6:{NFSU2_TR(0x58e9b6);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L58eb17;}}
}
B58e9bc:L58e9bc:{c.instructions+=1;NFSU2_TR(0x58e9bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x58eb24ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B58e9c3:L58e9c3:{c.instructions+=3;NFSU2_TR(0x58e9c3);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58e9c7:{NFSU2_TR(0x58e9c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e9c8:{NFSU2_TR(0x58e9c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e9cdull));
TAIL_STATIC(0x58bfb0u,58b);
}
B58e9cd:L58e9cd:{c.instructions+=6;NFSU2_TR(0x58e9cd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58e9d0:{NFSU2_TR(0x58e9d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58e9d1:{NFSU2_TR(0x58e9d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58e9d2:{NFSU2_TR(0x58e9d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58e9d3:{NFSU2_TR(0x58e9d3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x414ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x414ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x414ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58e9d9:{NFSU2_TR(0x58e9d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58e9da:L58e9da:{c.instructions+=3;NFSU2_TR(0x58e9da);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58e9de:{NFSU2_TR(0x58e9de);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e9df:{NFSU2_TR(0x58e9df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58e9e4ull));
TAIL_STATIC(0x5891b0u,589);
}
B58e9e4:L58e9e4:{c.instructions+=6;NFSU2_TR(0x58e9e4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58e9e7:{NFSU2_TR(0x58e9e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58e9e8:{NFSU2_TR(0x58e9e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58e9e9:{NFSU2_TR(0x58e9e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58e9ea:{NFSU2_TR(0x58e9ea);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x414ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x414ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x414ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58e9f0:{NFSU2_TR(0x58e9f0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58e9f1:L58e9f1:{c.instructions+=4;NFSU2_TR(0x58e9f1);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58e9f5:{NFSU2_TR(0x58e9f5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58e9f6:{NFSU2_TR(0x58e9f6);
w4(R+4,u32(0x89cf48ull));
}
B58e9fb:{NFSU2_TR(0x58e9fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ea00ull));
TAIL_STATIC(0x5ff000u,5ff);
}
B58ea00:L58ea00:{c.instructions+=5;NFSU2_TR(0x58ea00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58ea01:{NFSU2_TR(0x58ea01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58ea02:{NFSU2_TR(0x58ea02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58ea03:{NFSU2_TR(0x58ea03);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x414ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x414ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x414ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58ea09:{NFSU2_TR(0x58ea09);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58ea0a:L58ea0a:{c.instructions+=3;NFSU2_TR(0x58ea0a);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58ea0e:{NFSU2_TR(0x58ea0e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ea0f:{NFSU2_TR(0x58ea0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ea14ull));
TAIL_STATIC(0x585c80u,585);
}
B58ea14:L58ea14:{c.instructions+=6;NFSU2_TR(0x58ea14);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58ea17:{NFSU2_TR(0x58ea17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58ea18:{NFSU2_TR(0x58ea18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58ea19:{NFSU2_TR(0x58ea19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58ea1a:{NFSU2_TR(0x58ea1a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x414ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x414ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x414ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58ea20:{NFSU2_TR(0x58ea20);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58ea21:L58ea21:{c.instructions+=3;NFSU2_TR(0x58ea21);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58ea25:{NFSU2_TR(0x58ea25);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ea26:{NFSU2_TR(0x58ea26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ea2bull));
TAIL_STATIC(0x58bfe0u,58b);
}
B58ea2b:L58ea2b:{c.instructions+=6;NFSU2_TR(0x58ea2b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58ea2e:{NFSU2_TR(0x58ea2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58ea2f:{NFSU2_TR(0x58ea2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58ea30:{NFSU2_TR(0x58ea30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58ea31:{NFSU2_TR(0x58ea31);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x414ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x414ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x414ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58ea37:{NFSU2_TR(0x58ea37);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58ea38:L58ea38:{c.instructions+=3;NFSU2_TR(0x58ea38);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58ea3c:{NFSU2_TR(0x58ea3c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ea3d:{NFSU2_TR(0x58ea3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ea42ull));
TAIL_STATIC(0x58c0c0u,58c);
}
B58ea42:L58ea42:{c.instructions+=6;NFSU2_TR(0x58ea42);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58ea45:{NFSU2_TR(0x58ea45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58ea46:{NFSU2_TR(0x58ea46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58ea47:{NFSU2_TR(0x58ea47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58ea48:{NFSU2_TR(0x58ea48);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x414ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x414ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x414ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58ea4e:{NFSU2_TR(0x58ea4e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58ea4f:L58ea4f:{c.instructions+=7;NFSU2_TR(0x58ea4f);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B58ea54:{NFSU2_TR(0x58ea54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58ea55:{NFSU2_TR(0x58ea55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58ea56:{NFSU2_TR(0x58ea56);
__builtin_memmove(gp(0x869468),(R+0),4);
}
B58ea5b:{NFSU2_TR(0x58ea5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58ea5c:{NFSU2_TR(0x58ea5c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x414ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x414ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x414ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58ea62:{NFSU2_TR(0x58ea62);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58ea63:L58ea63:{c.instructions+=3;NFSU2_TR(0x58ea63);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58ea67:{NFSU2_TR(0x58ea67);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ea68:{NFSU2_TR(0x58ea68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ea6dull));
TAIL_STATIC(0x589510u,589);
}
B58ea6d:L58ea6d:{c.instructions+=6;NFSU2_TR(0x58ea6d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58ea70:{NFSU2_TR(0x58ea70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58ea71:{NFSU2_TR(0x58ea71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58ea72:{NFSU2_TR(0x58ea72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58ea73:{NFSU2_TR(0x58ea73);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x414ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x414ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x414ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58ea79:{NFSU2_TR(0x58ea79);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58ea7a:L58ea7a:{c.instructions+=3;NFSU2_TR(0x58ea7a);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58ea7e:{NFSU2_TR(0x58ea7e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ea7f:{NFSU2_TR(0x58ea7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ea84ull));
TAIL_STATIC(0x585cc0u,585);
}
B58ea84:L58ea84:{c.instructions+=6;NFSU2_TR(0x58ea84);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58ea87:{NFSU2_TR(0x58ea87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58ea88:{NFSU2_TR(0x58ea88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58ea89:{NFSU2_TR(0x58ea89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58ea8a:{NFSU2_TR(0x58ea8a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x414ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x414ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x414ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58ea90:{NFSU2_TR(0x58ea90);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58ea91:L58ea91:{c.instructions+=3;NFSU2_TR(0x58ea91);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58ea95:{NFSU2_TR(0x58ea95);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ea96:{NFSU2_TR(0x58ea96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ea9bull));
TAIL_STATIC(0x58c180u,58c);
}
B58ea9b:L58ea9b:{c.instructions+=6;NFSU2_TR(0x58ea9b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58ea9e:{NFSU2_TR(0x58ea9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58ea9f:{NFSU2_TR(0x58ea9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58eaa0:{NFSU2_TR(0x58eaa0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58eaa1:{NFSU2_TR(0x58eaa1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x414ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x414ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x414ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58eaa7:{NFSU2_TR(0x58eaa7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58eaa8:L58eaa8:{c.instructions+=3;NFSU2_TR(0x58eaa8);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58eaac:{NFSU2_TR(0x58eaac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58eaad:{NFSU2_TR(0x58eaad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58eab2ull));
TAIL_STATIC(0x587c50u,587);
}
B58eab2:L58eab2:{c.instructions+=6;NFSU2_TR(0x58eab2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58eab5:{NFSU2_TR(0x58eab5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58eab6:{NFSU2_TR(0x58eab6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58eab7:{NFSU2_TR(0x58eab7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58eab8:{NFSU2_TR(0x58eab8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x414ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x414ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x414ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58eabe:{NFSU2_TR(0x58eabe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58eabf:L58eabf:{c.instructions+=4;NFSU2_TR(0x58eabf);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58eac3:{NFSU2_TR(0x58eac3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58eac4:{NFSU2_TR(0x58eac4);
w4(R+4,u32(0x89cf48ull));
}
B58eac9:{NFSU2_TR(0x58eac9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58eaceull));
TAIL_STATIC(0x5f9bd0u,5f9);
}
B58eace:L58eace:{c.instructions+=5;NFSU2_TR(0x58eace);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58eacf:{NFSU2_TR(0x58eacf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58ead0:{NFSU2_TR(0x58ead0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58ead1:{NFSU2_TR(0x58ead1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x414ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x414ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x414ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58ead7:{NFSU2_TR(0x58ead7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58ead8:L58ead8:{c.instructions+=4;NFSU2_TR(0x58ead8);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58eadc:{NFSU2_TR(0x58eadc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58eadd:{NFSU2_TR(0x58eadd);
w4(R+4,u32(0x89cf48ull));
}
B58eae2:{NFSU2_TR(0x58eae2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58eae7ull));
TAIL_STATIC(0x5f0800u,5f0);
}
B58eae7:L58eae7:{c.instructions+=5;NFSU2_TR(0x58eae7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58eae8:{NFSU2_TR(0x58eae8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58eae9:{NFSU2_TR(0x58eae9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58eaea:{NFSU2_TR(0x58eaea);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x414ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x414ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x414ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58eaf0:{NFSU2_TR(0x58eaf0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58eaf1:L58eaf1:{c.instructions+=4;NFSU2_TR(0x58eaf1);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58eaf5:{NFSU2_TR(0x58eaf5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58eaf6:{NFSU2_TR(0x58eaf6);
w4(R+4,u32(0x89cf48ull));
}
B58eafb:{NFSU2_TR(0x58eafb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58eb00ull));
TAIL_STATIC(0x5ff190u,5ff);
}
B58eb00:L58eb00:{c.instructions+=5;NFSU2_TR(0x58eb00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58eb01:{NFSU2_TR(0x58eb01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58eb02:{NFSU2_TR(0x58eb02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58eb03:{NFSU2_TR(0x58eb03);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x414ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x414ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x414ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58eb09:{NFSU2_TR(0x58eb09);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58eb0a:L58eb0a:{c.instructions+=3;NFSU2_TR(0x58eb0a);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58eb0e:{NFSU2_TR(0x58eb0e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58eb0f:{NFSU2_TR(0x58eb0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58eb14ull));
TAIL_STATIC(0x585d20u,585);
}
B58eb14:L58eb14:{c.instructions+=1;NFSU2_TR(0x58eb14);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58eb17:L58eb17:{c.instructions+=5;NFSU2_TR(0x58eb17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58eb18:{NFSU2_TR(0x58eb18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58eb19:{NFSU2_TR(0x58eb19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58eb1a:{NFSU2_TR(0x58eb1a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x414ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x414ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x414ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58eb20:{NFSU2_TR(0x58eb20);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58eb70:L58eb70:{c.instructions+=3;NFSU2_TR(0x58eb70);
__builtin_memmove((R+0),gp(0x8669f4),4);
}
B58eb75:{NFSU2_TR(0x58eb75);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58eb77:{NFSU2_TR(0x58eb77);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L58eb7e;}}
}
B58eb79:L58eb79:{c.instructions+=1;NFSU2_TR(0x58eb79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58eb7eull));
TAIL_STATIC(0x588fb0u,588);
}
B58eb7e:L58eb7e:{c.instructions+=3;NFSU2_TR(0x58eb7e);
__builtin_memmove((R+0),gp(0x866a14),4);
}
B58eb83:{NFSU2_TR(0x58eb83);
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
B58eb85:{NFSU2_TR(0x58eb85);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L58ebb4;}}
}
B58eb87:L58eb87:{c.instructions+=1;NFSU2_TR(0x58eb87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58eb8cull));
TAIL_STATIC(0x589830u,589);
}
B58eb8c:L58eb8c:{c.instructions+=1;NFSU2_TR(0x58eb8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58eb91ull));
TAIL_STATIC(0x586350u,586);
}
B58eb91:L58eb91:{c.instructions+=3;NFSU2_TR(0x58eb91);
s4(0x7fbe80,u32(0xffffffffull));
}
B58eb9b:{NFSU2_TR(0x58eb9b);
s4(0x866a1c,u32(0x0ull));
}
B58eba5:{NFSU2_TR(0x58eba5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ebaaull));
TAIL_STATIC(0x585720u,585);
}
B58ebaa:L58ebaa:{c.instructions+=1;NFSU2_TR(0x58ebaa);
s4(0x866a14,u32(0x0ull));
}
B58ebb4:L58ebb4:{c.instructions+=1;NFSU2_TR(0x58ebb4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58ebc0:L58ebc0:{c.instructions+=9;NFSU2_TR(0x58ebc0);
__builtin_memmove((R+0),gp(0x866a14),4);
}
B58ebc5:{NFSU2_TR(0x58ebc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x410ull))));
}
B58ebcb:{NFSU2_TR(0x58ebcb);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B58ebcc:{NFSU2_TR(0x58ebcc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ebcd:{NFSU2_TR(0x58ebcd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ebce:{NFSU2_TR(0x58ebce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ebcf:{NFSU2_TR(0x58ebcf);
w4(R+28,u32(0xffffffffull));
}
B58ebd4:{NFSU2_TR(0x58ebd4);
w4(R+12,u32(0x0ull));
}
B58ebd9:{NFSU2_TR(0x58ebd9);
if(r1(R+518)){{goto L58ee5f;}}
}
B58ebdf:L58ebdf:{c.instructions+=2;NFSU2_TR(0x58ebdf);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B58ebe2:{NFSU2_TR(0x58ebe2);
if(r1(R+518)){{goto L58ed8b;}}
}
B58ebe8:L58ebe8:{c.instructions+=2;NFSU2_TR(0x58ebe8);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B58ebe9:{NFSU2_TR(0x58ebe9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58ef2d;}}
}
B58ebef:L58ebef:{c.instructions+=9;NFSU2_TR(0x58ebef);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B58ebf4:{NFSU2_TR(0x58ebf4);
w4(R+0,u32(u32(r4(R+0))-u32(m4(0x869d3c))));
}
B58ebfa:{NFSU2_TR(0x58ebfa);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58ebfe:{NFSU2_TR(0x58ebfe);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B58ec02:{NFSU2_TR(0x58ec02);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B58ec08:{NFSU2_TR(0x58ec08);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B58ec0e:{NFSU2_TR(0x58ec0e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B58ec10:{NFSU2_TR(0x58ec10);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58ec13:{NFSU2_TR(0x58ec13);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58ef35;}}
}
B58ec19:L58ec19:{c.instructions+=4;NFSU2_TR(0x58ec19);
__builtin_memmove((R+0),gp(0x8693cc),4);
}
B58ec1e:{NFSU2_TR(0x58ec1e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B58ec24:{NFSU2_TR(0x58ec24);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58ec26:{NFSU2_TR(0x58ec26);
if(r1(R+518)){{goto L58ec4e;}}
}
B58ec28:L58ec28:{c.instructions+=8;NFSU2_TR(0x58ec28);
w4(R+4,u32(m2(0x8693d6)));
}
B58ec2f:{NFSU2_TR(0x58ec2f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58ec33:{NFSU2_TR(0x58ec33);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B58ec37:{NFSU2_TR(0x58ec37);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B58ec3b:{NFSU2_TR(0x58ec3b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B58ec41:{NFSU2_TR(0x58ec41);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B58ec43:{NFSU2_TR(0x58ec43);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58ec46:{NFSU2_TR(0x58ec46);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58ec4e;}}
}
B58ec48:L58ec48:{c.instructions+=2;NFSU2_TR(0x58ec48);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B58ec4a:{NFSU2_TR(0x58ec4a);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B58ec4e:L58ec4e:{c.instructions+=2;NFSU2_TR(0x58ec4e);
u8 U[8];
__builtin_memmove((U+0),gp(0x8693ec),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58ec54:{NFSU2_TR(0x58ec54);
if(r1(R+518)){{goto L58ec78;}}
}
B58ec56:L58ec56:{c.instructions+=8;NFSU2_TR(0x58ec56);
w4(R+8,u32(m2(0x8693f6)));
}
B58ec5d:{NFSU2_TR(0x58ec5d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58ec61:{NFSU2_TR(0x58ec61);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B58ec65:{NFSU2_TR(0x58ec65);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B58ec69:{NFSU2_TR(0x58ec69);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B58ec6b:{NFSU2_TR(0x58ec6b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B58ec6d:{NFSU2_TR(0x58ec6d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58ec70:{NFSU2_TR(0x58ec70);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58ec78;}}
}
B58ec72:L58ec72:{c.instructions+=2;NFSU2_TR(0x58ec72);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B58ec74:{NFSU2_TR(0x58ec74);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B58ec78:L58ec78:{c.instructions+=2;NFSU2_TR(0x58ec78);
u8 U[8];
__builtin_memmove((U+0),gp(0x86940c),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58ec7e:{NFSU2_TR(0x58ec7e);
if(r1(R+518)){{goto L58eca2;}}
}
B58ec80:L58ec80:{c.instructions+=8;NFSU2_TR(0x58ec80);
w4(R+0,u32(m2(0x869416)));
}
B58ec87:{NFSU2_TR(0x58ec87);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58ec8b:{NFSU2_TR(0x58ec8b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B58ec8f:{NFSU2_TR(0x58ec8f);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B58ec93:{NFSU2_TR(0x58ec93);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B58ec95:{NFSU2_TR(0x58ec95);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B58ec97:{NFSU2_TR(0x58ec97);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58ec9a:{NFSU2_TR(0x58ec9a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58eca2;}}
}
B58ec9c:L58ec9c:{c.instructions+=2;NFSU2_TR(0x58ec9c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B58ec9e:{NFSU2_TR(0x58ec9e);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B58eca2:L58eca2:{c.instructions+=2;NFSU2_TR(0x58eca2);
u8 U[8];
__builtin_memmove((U+0),gp(0x86942c),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58eca8:{NFSU2_TR(0x58eca8);
if(r1(R+518)){{goto L58eccc;}}
}
B58ecaa:L58ecaa:{c.instructions+=8;NFSU2_TR(0x58ecaa);
w4(R+4,u32(m2(0x869436)));
}
B58ecb1:{NFSU2_TR(0x58ecb1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58ecb5:{NFSU2_TR(0x58ecb5);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B58ecb9:{NFSU2_TR(0x58ecb9);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B58ecbd:{NFSU2_TR(0x58ecbd);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B58ecbf:{NFSU2_TR(0x58ecbf);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B58ecc1:{NFSU2_TR(0x58ecc1);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58ecc4:{NFSU2_TR(0x58ecc4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58eccc;}}
}
B58ecc6:L58ecc6:{c.instructions+=2;NFSU2_TR(0x58ecc6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B58ecc8:{NFSU2_TR(0x58ecc8);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B58eccc:L58eccc:{c.instructions+=2;NFSU2_TR(0x58eccc);
u8 U[8];
__builtin_memmove((U+0),gp(0x86944c),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58ecd2:{NFSU2_TR(0x58ecd2);
if(r1(R+518)){{goto L58ecf6;}}
}
B58ecd4:L58ecd4:{c.instructions+=8;NFSU2_TR(0x58ecd4);
w4(R+8,u32(m2(0x869456)));
}
B58ecdb:{NFSU2_TR(0x58ecdb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58ecdf:{NFSU2_TR(0x58ecdf);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B58ece3:{NFSU2_TR(0x58ece3);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B58ece7:{NFSU2_TR(0x58ece7);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B58ece9:{NFSU2_TR(0x58ece9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B58eceb:{NFSU2_TR(0x58eceb);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58ecee:{NFSU2_TR(0x58ecee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58ecf6;}}
}
B58ecf0:L58ecf0:{c.instructions+=2;NFSU2_TR(0x58ecf0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B58ecf2:{NFSU2_TR(0x58ecf2);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B58ecf6:L58ecf6:{c.instructions+=10;NFSU2_TR(0x58ecf6);
{u32 ea_=u32(u32(8802700u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B58ecfc:{NFSU2_TR(0x58ecfc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ecfd:{NFSU2_TR(0x58ecfd);
w4(R+4,u32(0x89cf48ull));
}
B58ed02:{NFSU2_TR(0x58ed02);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B58ed08:{NFSU2_TR(0x58ed08);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B58ed0a:{NFSU2_TR(0x58ed0a);
{u32 ea_=u32(u32(7978944u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B58ed10:{NFSU2_TR(0x58ed10);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B58ed12:{NFSU2_TR(0x58ed12);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B58ed18:{NFSU2_TR(0x58ed18);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B58ed1b:{NFSU2_TR(0x58ed1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ed20ull));
TAIL_STATIC(0x5f0160u,5f0);
}
B58ed20:L58ed20:{c.instructions+=10;NFSU2_TR(0x58ed20);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ed22:{NFSU2_TR(0x58ed22);
w4(R+24,u32(0x6ull));
}
B58ed27:{NFSU2_TR(0x58ed27);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ed29:{NFSU2_TR(0x58ed29);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58ed2d:{NFSU2_TR(0x58ed2d);
__builtin_memmove(gp(0x866a14),(R+24),4);
}
B58ed33:{NFSU2_TR(0x58ed33);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B58ed37:{NFSU2_TR(0x58ed37);
u8 U[8];
w4(U+0,u32(u32(u32(0x418ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58ed3e:{NFSU2_TR(0x58ed3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x41cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58ed45:{NFSU2_TR(0x58ed45);
u8 U[5];
w4(U+0,u32(u32(u32(0x420ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58ed4d:{NFSU2_TR(0x58ed4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ed52ull));
TAIL_STATIC(0x581d00u,581);
}
B58ed52:L58ed52:{c.instructions+=4;NFSU2_TR(0x58ed52);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ed54:{NFSU2_TR(0x58ed54);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ed55:{NFSU2_TR(0x58ed55);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58ed59:{NFSU2_TR(0x58ed59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ed5eull));
TAIL_STATIC(0x581d00u,581);
}
B58ed5e:L58ed5e:{c.instructions+=7;NFSU2_TR(0x58ed5e);
__builtin_memmove((R+0),gp(0x89cf6c),4);
}
B58ed63:{NFSU2_TR(0x58ed63);
__builtin_memmove((R+4),(R+0),4);
}
B58ed65:{NFSU2_TR(0x58ed65);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ed67:{NFSU2_TR(0x58ed67);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ed68:{NFSU2_TR(0x58ed68);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58ed6c:{NFSU2_TR(0x58ed6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58ed70:{NFSU2_TR(0x58ed70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ed75ull));
TAIL_STATIC(0x581d00u,581);
}
B58ed75:L58ed75:{c.instructions+=5;NFSU2_TR(0x58ed75);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ed77:{NFSU2_TR(0x58ed77);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58ed7b:{NFSU2_TR(0x58ed7b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ed7c:{NFSU2_TR(0x58ed7c);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ed7e:{NFSU2_TR(0x58ed7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ed83ull));
TAIL_STATIC(0x5883a0u,588);
}
B58ed83:L58ed83:{c.instructions+=2;NFSU2_TR(0x58ed83);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B58ed86:{NFSU2_TR(0x58ed86);
{goto L58ef2d;}
}
B58ed8b:L58ed8b:{c.instructions+=5;NFSU2_TR(0x58ed8b);
__builtin_memmove((R+4),gp(0x8693cc),4);
}
B58ed91:{NFSU2_TR(0x58ed91);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58ed93:{NFSU2_TR(0x58ed93);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58ed95:{NFSU2_TR(0x58ed95);
w4(R+24,u32(0x6ull));
}
B58ed9a:{NFSU2_TR(0x58ed9a);
if(r1(R+518)){{goto L58eda9;}}
}
B58ed9c:L58ed9c:{c.instructions+=2;NFSU2_TR(0x58ed9c);
u8 U[8];
__builtin_memmove((U+0),gp(0x8693d8),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58eda2:{NFSU2_TR(0x58eda2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58eda9;}}
}
B58eda4:L58eda4:{c.instructions+=1;NFSU2_TR(0x58eda4);
w4(R+0,u32(0x1ull));
}
B58eda9:L58eda9:{c.instructions+=2;NFSU2_TR(0x58eda9);
u8 U[8];
__builtin_memmove((U+0),gp(0x8693ec),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58edaf:{NFSU2_TR(0x58edaf);
if(r1(R+518)){{goto L58edba;}}
}
B58edb1:L58edb1:{c.instructions+=2;NFSU2_TR(0x58edb1);
u8 U[8];
__builtin_memmove((U+0),gp(0x8693f8),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58edb7:{NFSU2_TR(0x58edb7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58edba;}}
}
B58edb9:L58edb9:{c.instructions+=1;NFSU2_TR(0x58edb9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B58edba:L58edba:{c.instructions+=2;NFSU2_TR(0x58edba);
u8 U[8];
__builtin_memmove((U+0),gp(0x86940c),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58edc0:{NFSU2_TR(0x58edc0);
if(r1(R+518)){{goto L58edcb;}}
}
B58edc2:L58edc2:{c.instructions+=2;NFSU2_TR(0x58edc2);
u8 U[8];
__builtin_memmove((U+0),gp(0x869418),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58edc8:{NFSU2_TR(0x58edc8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58edcb;}}
}
B58edca:L58edca:{c.instructions+=1;NFSU2_TR(0x58edca);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B58edcb:L58edcb:{c.instructions+=2;NFSU2_TR(0x58edcb);
u8 U[8];
__builtin_memmove((U+0),gp(0x86942c),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58edd1:{NFSU2_TR(0x58edd1);
if(r1(R+518)){{goto L58eddc;}}
}
B58edd3:L58edd3:{c.instructions+=2;NFSU2_TR(0x58edd3);
u8 U[8];
__builtin_memmove((U+0),gp(0x869438),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58edd9:{NFSU2_TR(0x58edd9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58eddc;}}
}
B58eddb:L58eddb:{c.instructions+=1;NFSU2_TR(0x58eddb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B58eddc:L58eddc:{c.instructions+=2;NFSU2_TR(0x58eddc);
u8 U[8];
__builtin_memmove((U+0),gp(0x86944c),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58ede2:{NFSU2_TR(0x58ede2);
if(r1(R+518)){{goto L58eded;}}
}
B58ede4:L58ede4:{c.instructions+=2;NFSU2_TR(0x58ede4);
u8 U[8];
__builtin_memmove((U+0),gp(0x869458),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58edea:{NFSU2_TR(0x58edea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58eded;}}
}
B58edec:L58edec:{c.instructions+=1;NFSU2_TR(0x58edec);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B58eded:L58eded:{c.instructions+=2;NFSU2_TR(0x58eded);
u8 U[8];
__builtin_memmove((U+0),gp(0x866a24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58edf3:{NFSU2_TR(0x58edf3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58ef35;}}
}
B58edf9:L58edf9:{c.instructions+=2;NFSU2_TR(0x58edf9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58edfb:{NFSU2_TR(0x58edfb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L58ef35;}}
}
B58ee01:L58ee01:{c.instructions+=11;NFSU2_TR(0x58ee01);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B58ee06:{NFSU2_TR(0x58ee06);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ee08:{NFSU2_TR(0x58ee08);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ee0a:{NFSU2_TR(0x58ee0a);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58ee0e:{NFSU2_TR(0x58ee0e);
__builtin_memmove(gp(0x869d3c),(R+0),4);
}
B58ee13:{NFSU2_TR(0x58ee13);
s4(0x866a14,u32(0x5ull));
}
B58ee1d:{NFSU2_TR(0x58ee1d);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B58ee21:{NFSU2_TR(0x58ee21);
u8 U[8];
w4(U+0,u32(u32(u32(0x418ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58ee28:{NFSU2_TR(0x58ee28);
u8 U[8];
w4(U+0,u32(u32(u32(0x41cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58ee2f:{NFSU2_TR(0x58ee2f);
u8 U[5];
w4(U+0,u32(u32(u32(0x420ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58ee37:{NFSU2_TR(0x58ee37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ee3cull));
TAIL_STATIC(0x581d00u,581);
}
B58ee3c:L58ee3c:{c.instructions+=4;NFSU2_TR(0x58ee3c);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ee3e:{NFSU2_TR(0x58ee3e);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ee40:{NFSU2_TR(0x58ee40);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58ee44:{NFSU2_TR(0x58ee44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ee49ull));
TAIL_STATIC(0x581d00u,581);
}
B58ee49:L58ee49:{c.instructions+=5;NFSU2_TR(0x58ee49);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ee4b:{NFSU2_TR(0x58ee4b);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58ee4f:{NFSU2_TR(0x58ee4f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ee50:{NFSU2_TR(0x58ee50);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ee52:{NFSU2_TR(0x58ee52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ee57ull));
TAIL_STATIC(0x5883a0u,588);
}
B58ee57:L58ee57:{c.instructions+=2;NFSU2_TR(0x58ee57);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B58ee5a:{NFSU2_TR(0x58ee5a);
{goto L58ef2d;}
}
B58ee5f:L58ee5f:{c.instructions+=5;NFSU2_TR(0x58ee5f);
__builtin_memmove((R+8),gp(0x8693cc),4);
}
B58ee65:{NFSU2_TR(0x58ee65);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58ee67:{NFSU2_TR(0x58ee67);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58ee69:{NFSU2_TR(0x58ee69);
w4(R+4,u32(0x3ull));
}
B58ee6e:{NFSU2_TR(0x58ee6e);
if(r1(R+518)){{goto L58ee7d;}}
}
B58ee70:L58ee70:{c.instructions+=2;NFSU2_TR(0x58ee70);
u8 U[8];
__builtin_memmove((U+0),gp(0x8693d8),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+4)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B58ee76:{NFSU2_TR(0x58ee76);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L58ee7d;}}
}
B58ee78:L58ee78:{c.instructions+=1;NFSU2_TR(0x58ee78);
w4(R+0,u32(0x1ull));
}
B58ee7d:L58ee7d:{c.instructions+=2;NFSU2_TR(0x58ee7d);
u8 U[8];
__builtin_memmove((U+0),gp(0x8693ec),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58ee83:{NFSU2_TR(0x58ee83);
if(r1(R+518)){{goto L58ee8e;}}
}
B58ee85:L58ee85:{c.instructions+=2;NFSU2_TR(0x58ee85);
u8 U[8];
__builtin_memmove((U+0),gp(0x8693f8),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+4)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B58ee8b:{NFSU2_TR(0x58ee8b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L58ee8e;}}
}
B58ee8d:L58ee8d:{c.instructions+=1;NFSU2_TR(0x58ee8d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B58ee8e:L58ee8e:{c.instructions+=2;NFSU2_TR(0x58ee8e);
u8 U[8];
__builtin_memmove((U+0),gp(0x86940c),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58ee94:{NFSU2_TR(0x58ee94);
if(r1(R+518)){{goto L58ee9f;}}
}
B58ee96:L58ee96:{c.instructions+=2;NFSU2_TR(0x58ee96);
u8 U[8];
__builtin_memmove((U+0),gp(0x869418),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+4)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B58ee9c:{NFSU2_TR(0x58ee9c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L58ee9f;}}
}
B58ee9e:L58ee9e:{c.instructions+=1;NFSU2_TR(0x58ee9e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B58ee9f:L58ee9f:{c.instructions+=2;NFSU2_TR(0x58ee9f);
u8 U[8];
__builtin_memmove((U+0),gp(0x86942c),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58eea5:{NFSU2_TR(0x58eea5);
if(r1(R+518)){{goto L58eeb0;}}
}
B58eea7:L58eea7:{c.instructions+=2;NFSU2_TR(0x58eea7);
u8 U[8];
__builtin_memmove((U+0),gp(0x869438),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+4)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B58eead:{NFSU2_TR(0x58eead);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L58eeb0;}}
}
B58eeaf:L58eeaf:{c.instructions+=1;NFSU2_TR(0x58eeaf);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B58eeb0:L58eeb0:{c.instructions+=2;NFSU2_TR(0x58eeb0);
u8 U[8];
__builtin_memmove((U+0),gp(0x86944c),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58eeb6:{NFSU2_TR(0x58eeb6);
if(r1(R+518)){{goto L58eec1;}}
}
B58eeb8:L58eeb8:{c.instructions+=2;NFSU2_TR(0x58eeb8);
u8 U[8];
__builtin_memmove((U+0),gp(0x869458),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+4)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B58eebe:{NFSU2_TR(0x58eebe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L58eec1;}}
}
B58eec0:L58eec0:{c.instructions+=1;NFSU2_TR(0x58eec0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B58eec1:L58eec1:{c.instructions+=3;NFSU2_TR(0x58eec1);
__builtin_memmove((R+4),gp(0x7fbdb8),4);
}
B58eec7:{NFSU2_TR(0x58eec7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58eec9:{NFSU2_TR(0x58eec9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58ef35;}}
}
B58eecb:L58eecb:{c.instructions+=2;NFSU2_TR(0x58eecb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58eecd:{NFSU2_TR(0x58eecd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L58ef35;}}
}
B58eecf:L58eecf:{c.instructions+=2;NFSU2_TR(0x58eecf);
w4(R+4,u32(0x89cf48ull));
}
B58eed4:{NFSU2_TR(0x58eed4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58eed9ull));
TAIL_STATIC(0x5f9250u,5f9);
}
B58eed9:L58eed9:{c.instructions+=9;NFSU2_TR(0x58eed9);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58eedb:{NFSU2_TR(0x58eedb);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58eedd:{NFSU2_TR(0x58eedd);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58eee1:{NFSU2_TR(0x58eee1);
s4(0x866a14,u32(0x2ull));
}
B58eeeb:{NFSU2_TR(0x58eeeb);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B58eeef:{NFSU2_TR(0x58eeef);
u8 U[8];
w4(U+0,u32(u32(u32(0x418ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58eef6:{NFSU2_TR(0x58eef6);
u8 U[8];
w4(U+0,u32(u32(u32(0x41cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58eefd:{NFSU2_TR(0x58eefd);
u8 U[5];
w4(U+0,u32(u32(u32(0x420ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58ef05:{NFSU2_TR(0x58ef05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ef0aull));
TAIL_STATIC(0x581d00u,581);
}
B58ef0a:L58ef0a:{c.instructions+=4;NFSU2_TR(0x58ef0a);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ef0c:{NFSU2_TR(0x58ef0c);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ef0e:{NFSU2_TR(0x58ef0e);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58ef12:{NFSU2_TR(0x58ef12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ef17ull));
TAIL_STATIC(0x581d00u,581);
}
B58ef17:L58ef17:{c.instructions+=5;NFSU2_TR(0x58ef17);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ef19:{NFSU2_TR(0x58ef19);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58ef1d:{NFSU2_TR(0x58ef1d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ef1e:{NFSU2_TR(0x58ef1e);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ef20:{NFSU2_TR(0x58ef20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ef25ull));
TAIL_STATIC(0x5883a0u,588);
}
B58ef25:L58ef25:{c.instructions+=2;NFSU2_TR(0x58ef25);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B58ef28:{NFSU2_TR(0x58ef28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ef2dull));
TAIL_STATIC(0x583370u,583);
}
B58ef2d:L58ef2d:{c.instructions+=2;NFSU2_TR(0x58ef2d);
u8 U[8];
__builtin_memmove((U+0),gp(0x866a14),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+12)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58ef33:{NFSU2_TR(0x58ef33);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L58ef85;}}
}
B58ef35:L58ef35:{c.instructions+=2;NFSU2_TR(0x58ef35);
w4(R+24,u32(0x8693c8ull));
}
B58ef3a:{NFSU2_TR(0x58ef3a);
__builtin_memmove((R+12),(R+12),4);
}
B58ef40:L58ef40:{c.instructions+=2;NFSU2_TR(0x58ef40);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B58ef43:{NFSU2_TR(0x58ef43);
if(r1(R+518)){{goto L58ef7a;}}
}
B58ef45:L58ef45:{c.instructions+=2;NFSU2_TR(0x58ef45);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58ef47:{NFSU2_TR(0x58ef47);
if(r1(R+518)){{goto L58ef7a;}}
}
B58ef49:L58ef49:{c.instructions+=9;NFSU2_TR(0x58ef49);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B58ef4e:{NFSU2_TR(0x58ef4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B58ef51:{NFSU2_TR(0x58ef51);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58ef55:{NFSU2_TR(0x58ef55);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B58ef59:{NFSU2_TR(0x58ef59);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B58ef5f:{NFSU2_TR(0x58ef5f);
{u32 ea_=u32(u32(7999052u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B58ef65:{NFSU2_TR(0x58ef65);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B58ef67:{NFSU2_TR(0x58ef67);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58ef6a:{NFSU2_TR(0x58ef6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58ef7a;}}
}
B58ef6c:L58ef6c:{c.instructions+=4;NFSU2_TR(0x58ef6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58ef6f:{NFSU2_TR(0x58ef6f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ef71:{NFSU2_TR(0x58ef71);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ef72:{NFSU2_TR(0x58ef72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ef77ull));
TAIL_STATIC(0x58c620u,58c);
}
B58ef77:L58ef77:{c.instructions+=1;NFSU2_TR(0x58ef77);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58ef7a:L58ef7a:{c.instructions+=3;NFSU2_TR(0x58ef7a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x20ull))));
}
B58ef7d:{NFSU2_TR(0x58ef7d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x869468ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x869468ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B58ef83:{NFSU2_TR(0x58ef83);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58ef40u);}goto L58ef40;}}
}
B58ef85:L58ef85:{c.instructions+=5;NFSU2_TR(0x58ef85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58ef86:{NFSU2_TR(0x58ef86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58ef87:{NFSU2_TR(0x58ef87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58ef88:{NFSU2_TR(0x58ef88);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x410ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x410ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x410ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58ef8e:{NFSU2_TR(0x58ef8e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58ef90:L58ef90:{c.instructions+=2;NFSU2_TR(0x58ef90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ef91:{NFSU2_TR(0x58ef91);
w4(R+24,u32(0x8693c8ull));
}
B58ef96:L58ef96:{c.instructions+=2;NFSU2_TR(0x58ef96);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B58ef9a:{NFSU2_TR(0x58ef9a);
if(r1(R+518)){{goto L58efb4;}}
}
B58ef9c:L58ef9c:{c.instructions+=2;NFSU2_TR(0x58ef9c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58ef9e:{NFSU2_TR(0x58ef9e);
if(r1(R+518)){{goto L58efb4;}}
}
B58efa0:L58efa0:{c.instructions+=2;NFSU2_TR(0x58efa0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B58efa4:{NFSU2_TR(0x58efa4);
if(r1(R+518)){{goto L58efb4;}}
}
B58efa6:L58efa6:{c.instructions+=4;NFSU2_TR(0x58efa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58efa9:{NFSU2_TR(0x58efa9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58efab:{NFSU2_TR(0x58efab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58efac:{NFSU2_TR(0x58efac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58efb1ull));
TAIL_STATIC(0x58c620u,58c);
}
B58efb1:L58efb1:{c.instructions+=1;NFSU2_TR(0x58efb1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58efb4:L58efb4:{c.instructions+=3;NFSU2_TR(0x58efb4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x20ull))));
}
B58efb7:{NFSU2_TR(0x58efb7);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x869468ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x869468ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x869468ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58efbd:{NFSU2_TR(0x58efbd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58ef96u);}goto L58ef96;}}
}
B58efbf:L58efbf:{c.instructions+=2;NFSU2_TR(0x58efbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58efc0:{NFSU2_TR(0x58efc0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58efd0:L58efd0:{c.instructions+=4;NFSU2_TR(0x58efd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58efd4:{NFSU2_TR(0x58efd4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58efd6:{NFSU2_TR(0x58efd6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58efd7:{NFSU2_TR(0x58efd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58efdcull));
TAIL_STATIC(0x58c620u,58c);
}
B58efdc:L58efdc:{c.instructions+=4;NFSU2_TR(0x58efdc);
__builtin_memmove((R+0),gp(0x7fbdb8),4);
}
B58efe1:{NFSU2_TR(0x58efe1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58efe4:{NFSU2_TR(0x58efe4);
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
B58efe6:{NFSU2_TR(0x58efe6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x58f01eu,58f);}
}
B58efe8:L58efe8:{c.instructions+=3;NFSU2_TR(0x58efe8);
__builtin_memmove((R+0),gp(0x866a14),4);
}
B58efed:{NFSU2_TR(0x58efed);
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
B58efef:{NFSU2_TR(0x58efef);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x58f01eu,58f);}
}
B58eff1:L58eff1:{c.instructions+=1;NFSU2_TR(0x58eff1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58eff6ull));
TAIL_STATIC(0x589830u,589);
}
B58eff6:L58eff6:{c.instructions+=1;NFSU2_TR(0x58eff6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58effbull));
TAIL_STATIC(0x586350u,586);
}
B58effb:L58effb:{c.instructions+=1;NFSU2_TR(0x58effb);
s4(0x7fbe80,u32(0xffffffffull));
TAIL_STATIC(0x58f005u,58f);
}
XIT:NFSU2_TR_EXIT(0x58e,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
