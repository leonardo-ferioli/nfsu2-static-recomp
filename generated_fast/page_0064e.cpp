#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_643(u8* __restrict R,Cpu& c);
u32 body_645(u8* __restrict R,Cpu& c);
u32 body_647(u8* __restrict R,Cpu& c);
u32 body_648(u8* __restrict R,Cpu& c);
u32 body_64b(u8* __restrict R,Cpu& c);
u32 body_64c(u8* __restrict R,Cpu& c);
u32 body_64d(u8* __restrict R,Cpu& c);
u32 body_64f(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x64e,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x64e,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_64e(u8* __restrict R,Cpu& c);
u32 page_64e(Cpu& c){return body_64e(c.regs.data(),c);}
__attribute__((noinline)) u32 body_64e(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x64e001:goto L64e001;
case 0x64e003:c.instructions+=7;goto B64e003;
case 0x64e006:c.instructions+=6;goto B64e006;
case 0x64e009:c.instructions+=5;goto B64e009;
case 0x64e00c:c.instructions+=4;goto B64e00c;
case 0x64e00f:c.instructions+=3;goto B64e00f;
case 0x64e010:c.instructions+=2;goto B64e010;
case 0x64e012:c.instructions+=1;goto B64e012;
case 0x64e014:goto L64e014;
case 0x64e016:goto L64e016;
case 0x64e01d:goto L64e01d;
case 0x64e01e:c.instructions+=5;goto B64e01e;
case 0x64e021:c.instructions+=4;goto B64e021;
case 0x64e022:c.instructions+=3;goto B64e022;
case 0x64e023:c.instructions+=2;goto B64e023;
case 0x64e024:c.instructions+=1;goto B64e024;
case 0x64e027:goto L64e027;
case 0x64e029:c.instructions+=7;goto B64e029;
case 0x64e02a:c.instructions+=6;goto B64e02a;
case 0x64e02c:c.instructions+=5;goto B64e02c;
case 0x64e02d:c.instructions+=4;goto B64e02d;
case 0x64e031:c.instructions+=3;goto B64e031;
case 0x64e035:c.instructions+=2;goto B64e035;
case 0x64e036:c.instructions+=1;goto B64e036;
case 0x64e03c:goto L64e03c;
case 0x64e03d:c.instructions+=3;goto B64e03d;
case 0x64e040:c.instructions+=2;goto B64e040;
case 0x64e042:c.instructions+=1;goto B64e042;
case 0x64e044:goto L64e044;
case 0x64e04b:c.instructions+=1;goto B64e04b;
case 0x64e050:goto L64e050;
case 0x64e051:c.instructions+=5;goto B64e051;
case 0x64e054:c.instructions+=4;goto B64e054;
case 0x64e056:c.instructions+=3;goto B64e056;
case 0x64e059:c.instructions+=2;goto B64e059;
case 0x64e05b:c.instructions+=1;goto B64e05b;
case 0x64e060:goto L64e060;
case 0x64e062:c.instructions+=1;goto B64e062;
case 0x64e068:goto L64e068;
case 0x64e06b:c.instructions+=6;goto B64e06b;
case 0x64e06e:c.instructions+=5;goto B64e06e;
case 0x64e074:c.instructions+=4;goto B64e074;
case 0x64e077:c.instructions+=3;goto B64e077;
case 0x64e07a:c.instructions+=2;goto B64e07a;
case 0x64e07c:c.instructions+=1;goto B64e07c;
case 0x64e07e:goto L64e07e;
case 0x64e081:c.instructions+=1;goto B64e081;
case 0x64e083:goto L64e083;
case 0x64e086:c.instructions+=2;goto B64e086;
case 0x64e088:c.instructions+=1;goto B64e088;
case 0x64e08a:goto L64e08a;
case 0x64e08e:c.instructions+=1;goto B64e08e;
case 0x64e090:goto L64e090;
case 0x64e092:c.instructions+=1;goto B64e092;
case 0x64e093:goto L64e093;
case 0x64e096:c.instructions+=4;goto B64e096;
case 0x64e09a:c.instructions+=3;goto B64e09a;
case 0x64e09d:c.instructions+=2;goto B64e09d;
case 0x64e0a0:c.instructions+=1;goto B64e0a0;
case 0x64e0a2:goto L64e0a2;
case 0x64e0a5:goto L64e0a5;
case 0x64e0a8:c.instructions+=3;goto B64e0a8;
case 0x64e0aa:c.instructions+=2;goto B64e0aa;
case 0x64e0ad:c.instructions+=1;goto B64e0ad;
case 0x64e0af:goto L64e0af;
case 0x64e0b1:c.instructions+=1;goto B64e0b1;
case 0x64e0b3:goto L64e0b3;
case 0x64e0b6:c.instructions+=3;goto B64e0b6;
case 0x64e0b9:c.instructions+=2;goto B64e0b9;
case 0x64e0bc:c.instructions+=1;goto B64e0bc;
case 0x64e0be:goto L64e0be;
case 0x64e0bf:c.instructions+=1;goto B64e0bf;
case 0x64e0c1:goto L64e0c1;
case 0x64e0c2:c.instructions+=1;goto B64e0c2;
case 0x64e0c4:goto L64e0c4;
case 0x64e0c5:c.instructions+=1;goto B64e0c5;
case 0x64e0c7:goto L64e0c7;
case 0x64e0ca:c.instructions+=1;goto B64e0ca;
case 0x64e0cf:goto L64e0cf;
case 0x64e0d1:goto L64e0d1;
case 0x64e0d4:goto L64e0d4;
case 0x64e0d7:c.instructions+=1;goto B64e0d7;
case 0x64e0d9:goto L64e0d9;
case 0x64e0db:c.instructions+=3;goto B64e0db;
case 0x64e0de:c.instructions+=2;goto B64e0de;
case 0x64e0e1:c.instructions+=1;goto B64e0e1;
case 0x64e0e4:goto L64e0e4;
case 0x64e0e7:c.instructions+=3;goto B64e0e7;
case 0x64e0e8:c.instructions+=2;goto B64e0e8;
case 0x64e0eb:c.instructions+=1;goto B64e0eb;
case 0x64e0ed:goto L64e0ed;
case 0x64e0ef:goto L64e0ef;
case 0x64e0f6:goto L64e0f6;
case 0x64e0f7:goto L64e0f7;
case 0x64e0f8:goto L64e0f8;
case 0x64e0fb:c.instructions+=3;goto B64e0fb;
case 0x64e0fc:c.instructions+=2;goto B64e0fc;
case 0x64e0fd:c.instructions+=1;goto B64e0fd;
case 0x64e100:goto L64e100;
case 0x64e102:c.instructions+=5;goto B64e102;
case 0x64e103:c.instructions+=4;goto B64e103;
case 0x64e105:c.instructions+=3;goto B64e105;
case 0x64e106:c.instructions+=2;goto B64e106;
case 0x64e108:c.instructions+=1;goto B64e108;
case 0x64e10d:goto L64e10d;
case 0x64e111:c.instructions+=1;goto B64e111;
case 0x64e113:goto L64e113;
case 0x64e114:c.instructions+=1;goto B64e114;
case 0x64e119:goto L64e119;
case 0x64e11a:goto L64e11a;
case 0x64e11c:c.instructions+=3;goto B64e11c;
case 0x64e11d:c.instructions+=2;goto B64e11d;
case 0x64e11e:c.instructions+=1;goto B64e11e;
case 0x64e121:goto L64e121;
case 0x64e123:c.instructions+=5;goto B64e123;
case 0x64e124:c.instructions+=4;goto B64e124;
case 0x64e126:c.instructions+=3;goto B64e126;
case 0x64e129:c.instructions+=2;goto B64e129;
case 0x64e12f:c.instructions+=1;goto B64e12f;
case 0x64e134:goto L64e134;
case 0x64e13a:c.instructions+=1;goto B64e13a;
case 0x64e13f:goto L64e13f;
case 0x64e141:c.instructions+=12;goto B64e141;
case 0x64e147:c.instructions+=11;goto B64e147;
case 0x64e14d:c.instructions+=10;goto B64e14d;
case 0x64e153:c.instructions+=9;goto B64e153;
case 0x64e159:c.instructions+=8;goto B64e159;
case 0x64e15f:c.instructions+=7;goto B64e15f;
case 0x64e165:c.instructions+=6;goto B64e165;
case 0x64e16b:c.instructions+=5;goto B64e16b;
case 0x64e171:c.instructions+=4;goto B64e171;
case 0x64e178:c.instructions+=3;goto B64e178;
case 0x64e17a:c.instructions+=2;goto B64e17a;
case 0x64e17b:c.instructions+=1;goto B64e17b;
case 0x64e17c:goto L64e17c;
case 0x64e17e:c.instructions+=15;goto B64e17e;
case 0x64e17f:c.instructions+=14;goto B64e17f;
case 0x64e181:c.instructions+=13;goto B64e181;
case 0x64e187:c.instructions+=12;goto B64e187;
case 0x64e188:c.instructions+=11;goto B64e188;
case 0x64e189:c.instructions+=10;goto B64e189;
case 0x64e18b:c.instructions+=9;goto B64e18b;
case 0x64e18d:c.instructions+=8;goto B64e18d;
case 0x64e190:c.instructions+=7;goto B64e190;
case 0x64e193:c.instructions+=6;goto B64e193;
case 0x64e196:c.instructions+=5;goto B64e196;
case 0x64e199:c.instructions+=4;goto B64e199;
case 0x64e19c:c.instructions+=3;goto B64e19c;
case 0x64e19f:c.instructions+=2;goto B64e19f;
case 0x64e1a1:c.instructions+=1;goto B64e1a1;
case 0x64e1a6:goto L64e1a6;
case 0x64e1a8:c.instructions+=2;goto B64e1a8;
case 0x64e1a9:c.instructions+=1;goto B64e1a9;
case 0x64e1ab:goto L64e1ab;
case 0x64e1ad:c.instructions+=1;goto B64e1ad;
case 0x64e1b2:goto L64e1b2;
case 0x64e1b5:c.instructions+=1;goto B64e1b5;
case 0x64e1b7:goto L64e1b7;
case 0x64e1ba:goto L64e1ba;
case 0x64e1bd:c.instructions+=2;goto B64e1bd;
case 0x64e1be:c.instructions+=1;goto B64e1be;
case 0x64e1c4:goto L64e1c4;
case 0x64e1c6:c.instructions+=1;goto B64e1c6;
case 0x64e1cb:goto L64e1cb;
case 0x64e1cd:c.instructions+=2;goto B64e1cd;
case 0x64e1ce:c.instructions+=1;goto B64e1ce;
case 0x64e1d0:goto L64e1d0;
case 0x64e1d2:c.instructions+=1;goto B64e1d2;
case 0x64e1d7:goto L64e1d7;
case 0x64e1da:c.instructions+=1;goto B64e1da;
case 0x64e1dc:goto L64e1dc;
case 0x64e1df:goto L64e1df;
case 0x64e1e2:c.instructions+=1;goto B64e1e2;
case 0x64e1e8:goto L64e1e8;
case 0x64e1ea:c.instructions+=1;goto B64e1ea;
case 0x64e1ef:goto L64e1ef;
case 0x64e1f1:c.instructions+=2;goto B64e1f1;
case 0x64e1f2:c.instructions+=1;goto B64e1f2;
case 0x64e1f4:goto L64e1f4;
case 0x64e1f6:c.instructions+=1;goto B64e1f6;
case 0x64e1fb:goto L64e1fb;
case 0x64e1fe:c.instructions+=1;goto B64e1fe;
case 0x64e200:goto L64e200;
case 0x64e203:goto L64e203;
case 0x64e206:c.instructions+=1;goto B64e206;
case 0x64e20c:goto L64e20c;
case 0x64e20e:c.instructions+=1;goto B64e20e;
case 0x64e213:goto L64e213;
case 0x64e215:c.instructions+=2;goto B64e215;
case 0x64e216:c.instructions+=1;goto B64e216;
case 0x64e218:goto L64e218;
case 0x64e21a:c.instructions+=1;goto B64e21a;
case 0x64e21f:goto L64e21f;
case 0x64e222:c.instructions+=1;goto B64e222;
case 0x64e224:goto L64e224;
case 0x64e227:goto L64e227;
case 0x64e22a:c.instructions+=1;goto B64e22a;
case 0x64e230:goto L64e230;
case 0x64e232:c.instructions+=1;goto B64e232;
case 0x64e237:goto L64e237;
case 0x64e239:c.instructions+=2;goto B64e239;
case 0x64e23a:c.instructions+=1;goto B64e23a;
case 0x64e23c:goto L64e23c;
case 0x64e23e:c.instructions+=1;goto B64e23e;
case 0x64e243:goto L64e243;
case 0x64e245:c.instructions+=1;goto B64e245;
case 0x64e247:goto L64e247;
case 0x64e249:goto L64e249;
case 0x64e24b:c.instructions+=1;goto B64e24b;
case 0x64e251:goto L64e251;
case 0x64e254:c.instructions+=4;goto B64e254;
case 0x64e257:c.instructions+=3;goto B64e257;
case 0x64e259:c.instructions+=2;goto B64e259;
case 0x64e25c:c.instructions+=1;goto B64e25c;
case 0x64e262:goto L64e262;
case 0x64e266:c.instructions+=1;goto B64e266;
case 0x64e26c:goto L64e26c;
case 0x64e26f:c.instructions+=2;goto B64e26f;
case 0x64e271:c.instructions+=1;goto B64e271;
case 0x64e277:goto L64e277;
case 0x64e27b:c.instructions+=1;goto B64e27b;
case 0x64e281:goto L64e281;
case 0x64e284:c.instructions+=2;goto B64e284;
case 0x64e286:c.instructions+=1;goto B64e286;
case 0x64e28c:goto L64e28c;
case 0x64e28f:c.instructions+=3;goto B64e28f;
case 0x64e292:c.instructions+=2;goto B64e292;
case 0x64e295:c.instructions+=1;goto B64e295;
case 0x64e29b:goto L64e29b;
case 0x64e29e:c.instructions+=3;goto B64e29e;
case 0x64e2a0:c.instructions+=2;goto B64e2a0;
case 0x64e2a3:c.instructions+=1;goto B64e2a3;
case 0x64e2a9:goto L64e2a9;
case 0x64e2ad:c.instructions+=11;goto B64e2ad;
case 0x64e2af:c.instructions+=10;goto B64e2af;
case 0x64e2b2:c.instructions+=9;goto B64e2b2;
case 0x64e2b5:c.instructions+=8;goto B64e2b5;
case 0x64e2b8:c.instructions+=7;goto B64e2b8;
case 0x64e2ba:c.instructions+=6;goto B64e2ba;
case 0x64e2bd:c.instructions+=5;goto B64e2bd;
case 0x64e2c0:c.instructions+=4;goto B64e2c0;
case 0x64e2c3:c.instructions+=3;goto B64e2c3;
case 0x64e2c6:c.instructions+=2;goto B64e2c6;
case 0x64e2c8:c.instructions+=1;goto B64e2c8;
case 0x64e2ca:goto L64e2ca;
case 0x64e2ce:c.instructions+=1;goto B64e2ce;
case 0x64e2d4:goto L64e2d4;
case 0x64e2d8:c.instructions+=1;goto B64e2d8;
case 0x64e2de:goto L64e2de;
case 0x64e2e1:c.instructions+=1;goto B64e2e1;
case 0x64e2e4:goto L64e2e4;
case 0x64e2e7:c.instructions+=15;goto B64e2e7;
case 0x64e2ea:c.instructions+=14;goto B64e2ea;
case 0x64e2eb:c.instructions+=13;goto B64e2eb;
case 0x64e2ee:c.instructions+=12;goto B64e2ee;
case 0x64e2ef:c.instructions+=11;goto B64e2ef;
case 0x64e2f2:c.instructions+=10;goto B64e2f2;
case 0x64e2f3:c.instructions+=9;goto B64e2f3;
case 0x64e2f6:c.instructions+=8;goto B64e2f6;
case 0x64e2f7:c.instructions+=7;goto B64e2f7;
case 0x64e2fa:c.instructions+=6;goto B64e2fa;
case 0x64e2fb:c.instructions+=5;goto B64e2fb;
case 0x64e2fe:c.instructions+=4;goto B64e2fe;
case 0x64e2ff:c.instructions+=3;goto B64e2ff;
case 0x64e302:c.instructions+=2;goto B64e302;
case 0x64e304:c.instructions+=1;goto B64e304;
case 0x64e309:goto L64e309;
case 0x64e30b:c.instructions+=2;goto B64e30b;
case 0x64e30d:c.instructions+=1;goto B64e30d;
case 0x64e30f:goto L64e30f;
case 0x64e314:c.instructions+=5;goto B64e314;
case 0x64e316:c.instructions+=4;goto B64e316;
case 0x64e319:c.instructions+=3;goto B64e319;
case 0x64e31c:c.instructions+=2;goto B64e31c;
case 0x64e31d:c.instructions+=1;goto B64e31d;
case 0x64e322:goto L64e322;
case 0x64e326:c.instructions+=1;goto B64e326;
case 0x64e32c:goto L64e32c;
case 0x64e330:c.instructions+=1;goto B64e330;
case 0x64e336:goto L64e336;
case 0x64e33d:c.instructions+=1;goto B64e33d;
case 0x64e33f:goto L64e33f;
case 0x64e342:c.instructions+=3;goto B64e342;
case 0x64e345:c.instructions+=2;goto B64e345;
case 0x64e347:c.instructions+=1;goto B64e347;
case 0x64e34d:goto L64e34d;
case 0x64e351:c.instructions+=1;goto B64e351;
case 0x64e357:goto L64e357;
case 0x64e35a:c.instructions+=2;goto B64e35a;
case 0x64e35c:c.instructions+=1;goto B64e35c;
case 0x64e362:goto L64e362;
case 0x64e366:c.instructions+=1;goto B64e366;
case 0x64e36c:goto L64e36c;
case 0x64e36f:c.instructions+=2;goto B64e36f;
case 0x64e371:c.instructions+=1;goto B64e371;
case 0x64e377:goto L64e377;
case 0x64e37b:c.instructions+=1;goto B64e37b;
case 0x64e381:goto L64e381;
case 0x64e383:c.instructions+=1;goto B64e383;
case 0x64e388:goto L64e388;
case 0x64e38a:c.instructions+=2;goto B64e38a;
case 0x64e38b:c.instructions+=1;goto B64e38b;
case 0x64e38d:goto L64e38d;
case 0x64e391:c.instructions+=1;goto B64e391;
case 0x64e393:goto L64e393;
case 0x64e395:goto L64e395;
case 0x64e397:c.instructions+=1;goto B64e397;
case 0x64e39d:goto L64e39d;
case 0x64e3a0:c.instructions+=9;goto B64e3a0;
case 0x64e3a2:c.instructions+=8;goto B64e3a2;
case 0x64e3a5:c.instructions+=7;goto B64e3a5;
case 0x64e3a8:c.instructions+=6;goto B64e3a8;
case 0x64e3ab:c.instructions+=5;goto B64e3ab;
case 0x64e3b1:c.instructions+=4;goto B64e3b1;
case 0x64e3b3:c.instructions+=3;goto B64e3b3;
case 0x64e3b6:c.instructions+=2;goto B64e3b6;
case 0x64e3b8:c.instructions+=1;goto B64e3b8;
case 0x64e3bd:goto L64e3bd;
case 0x64e3c0:c.instructions+=11;goto B64e3c0;
case 0x64e3c3:c.instructions+=10;goto B64e3c3;
case 0x64e3c5:c.instructions+=9;goto B64e3c5;
case 0x64e3c8:c.instructions+=8;goto B64e3c8;
case 0x64e3c9:c.instructions+=7;goto B64e3c9;
case 0x64e3cc:c.instructions+=6;goto B64e3cc;
case 0x64e3cf:c.instructions+=5;goto B64e3cf;
case 0x64e3d1:c.instructions+=4;goto B64e3d1;
case 0x64e3d4:c.instructions+=3;goto B64e3d4;
case 0x64e3d7:c.instructions+=2;goto B64e3d7;
case 0x64e3da:c.instructions+=1;goto B64e3da;
case 0x64e3df:goto L64e3df;
case 0x64e3e1:c.instructions+=2;goto B64e3e1;
case 0x64e3e3:c.instructions+=1;goto B64e3e3;
case 0x64e3e5:goto L64e3e5;
case 0x64e3e8:c.instructions+=5;goto B64e3e8;
case 0x64e3ed:c.instructions+=4;goto B64e3ed;
case 0x64e3ef:c.instructions+=3;goto B64e3ef;
case 0x64e3f2:c.instructions+=2;goto B64e3f2;
case 0x64e3f5:c.instructions+=1;goto B64e3f5;
case 0x64e3f6:goto L64e3f6;
case 0x64e3fb:goto L64e3fb;
case 0x64e3fe:c.instructions+=1;goto B64e3fe;
case 0x64e403:goto L64e403;
case 0x64e407:c.instructions+=1;goto B64e407;
case 0x64e40d:goto L64e40d;
case 0x64e411:c.instructions+=1;goto B64e411;
case 0x64e417:goto L64e417;
case 0x64e41a:c.instructions+=3;goto B64e41a;
case 0x64e41c:c.instructions+=2;goto B64e41c;
case 0x64e41e:c.instructions+=1;goto B64e41e;
case 0x64e424:goto L64e424;
case 0x64e427:c.instructions+=1;goto B64e427;
case 0x64e42d:goto L64e42d;
case 0x64e430:c.instructions+=2;goto B64e430;
case 0x64e432:c.instructions+=1;goto B64e432;
case 0x64e438:goto L64e438;
case 0x64e43c:c.instructions+=1;goto B64e43c;
case 0x64e442:goto L64e442;
case 0x64e445:c.instructions+=2;goto B64e445;
case 0x64e447:c.instructions+=1;goto B64e447;
case 0x64e44d:goto L64e44d;
case 0x64e451:c.instructions+=1;goto B64e451;
case 0x64e457:goto L64e457;
case 0x64e45a:c.instructions+=1;goto B64e45a;
case 0x64e45d:goto L64e45d;
case 0x64e460:c.instructions+=2;goto B64e460;
case 0x64e463:c.instructions+=1;goto B64e463;
case 0x64e465:goto L64e465;
case 0x64e467:c.instructions+=1;goto B64e467;
case 0x64e468:goto L64e468;
case 0x64e46b:c.instructions+=1;goto B64e46b;
case 0x64e471:goto L64e471;
case 0x64e474:c.instructions+=6;goto B64e474;
case 0x64e477:c.instructions+=5;goto B64e477;
case 0x64e47b:c.instructions+=4;goto B64e47b;
case 0x64e481:c.instructions+=3;goto B64e481;
case 0x64e484:c.instructions+=2;goto B64e484;
case 0x64e487:c.instructions+=1;goto B64e487;
case 0x64e489:goto L64e489;
case 0x64e48c:c.instructions+=5;goto B64e48c;
case 0x64e491:c.instructions+=4;goto B64e491;
case 0x64e494:c.instructions+=3;goto B64e494;
case 0x64e495:c.instructions+=2;goto B64e495;
case 0x64e496:c.instructions+=1;goto B64e496;
case 0x64e49b:goto L64e49b;
case 0x64e49d:c.instructions+=2;goto B64e49d;
case 0x64e49f:c.instructions+=1;goto B64e49f;
case 0x64e4a5:goto L64e4a5;
case 0x64e4a8:goto L64e4a8;
case 0x64e4aa:c.instructions+=1;goto B64e4aa;
case 0x64e4ac:goto L64e4ac;
case 0x64e4af:c.instructions+=4;goto B64e4af;
case 0x64e4b2:c.instructions+=3;goto B64e4b2;
case 0x64e4b4:c.instructions+=2;goto B64e4b4;
case 0x64e4b7:c.instructions+=1;goto B64e4b7;
case 0x64e4b9:goto L64e4b9;
case 0x64e4bc:goto L64e4bc;
case 0x64e4c1:c.instructions+=10;goto B64e4c1;
case 0x64e4c4:c.instructions+=9;goto B64e4c4;
case 0x64e4c7:c.instructions+=8;goto B64e4c7;
case 0x64e4ca:c.instructions+=7;goto B64e4ca;
case 0x64e4cc:c.instructions+=6;goto B64e4cc;
case 0x64e4cd:c.instructions+=5;goto B64e4cd;
case 0x64e4d0:c.instructions+=4;goto B64e4d0;
case 0x64e4d6:c.instructions+=3;goto B64e4d6;
case 0x64e4d8:c.instructions+=2;goto B64e4d8;
case 0x64e4db:c.instructions+=1;goto B64e4db;
case 0x64e4e0:goto L64e4e0;
case 0x64e4e2:c.instructions+=2;goto B64e4e2;
case 0x64e4e4:c.instructions+=1;goto B64e4e4;
case 0x64e4ea:goto L64e4ea;
case 0x64e4ed:c.instructions+=4;goto B64e4ed;
case 0x64e4f0:c.instructions+=3;goto B64e4f0;
case 0x64e4f2:c.instructions+=2;goto B64e4f2;
case 0x64e4f5:c.instructions+=1;goto B64e4f5;
case 0x64e4f7:goto L64e4f7;
case 0x64e4fa:c.instructions+=11;goto B64e4fa;
case 0x64e4fc:c.instructions+=10;goto B64e4fc;
case 0x64e4fe:c.instructions+=9;goto B64e4fe;
case 0x64e500:c.instructions+=8;goto B64e500;
case 0x64e503:c.instructions+=7;goto B64e503;
case 0x64e505:c.instructions+=6;goto B64e505;
case 0x64e508:c.instructions+=5;goto B64e508;
case 0x64e509:c.instructions+=4;goto B64e509;
case 0x64e50b:c.instructions+=3;goto B64e50b;
case 0x64e50e:c.instructions+=2;goto B64e50e;
case 0x64e50f:c.instructions+=1;goto B64e50f;
case 0x64e514:goto L64e514;
case 0x64e516:c.instructions+=2;goto B64e516;
case 0x64e518:c.instructions+=1;goto B64e518;
case 0x64e51e:goto L64e51e;
case 0x64e521:c.instructions+=2;goto B64e521;
case 0x64e524:c.instructions+=1;goto B64e524;
case 0x64e529:goto L64e529;
case 0x64e52b:c.instructions+=2;goto B64e52b;
case 0x64e52d:c.instructions+=1;goto B64e52d;
case 0x64e533:goto L64e533;
case 0x64e535:c.instructions+=1;goto B64e535;
case 0x64e53a:goto L64e53a;
case 0x64e53c:c.instructions+=2;goto B64e53c;
case 0x64e53d:c.instructions+=1;goto B64e53d;
case 0x64e53f:goto L64e53f;
case 0x64e541:c.instructions+=1;goto B64e541;
case 0x64e546:goto L64e546;
case 0x64e549:c.instructions+=1;goto B64e549;
case 0x64e54b:goto L64e54b;
case 0x64e54f:goto L64e54f;
case 0x64e553:c.instructions+=2;goto B64e553;
case 0x64e559:c.instructions+=1;goto B64e559;
case 0x64e55b:goto L64e55b;
case 0x64e560:goto L64e560;
case 0x64e563:c.instructions+=5;goto B64e563;
case 0x64e566:c.instructions+=4;goto B64e566;
case 0x64e569:c.instructions+=3;goto B64e569;
case 0x64e56b:c.instructions+=2;goto B64e56b;
case 0x64e56e:c.instructions+=1;goto B64e56e;
case 0x64e574:goto L64e574;
case 0x64e577:c.instructions+=2;goto B64e577;
case 0x64e57a:c.instructions+=1;goto B64e57a;
case 0x64e57f:goto L64e57f;
case 0x64e581:c.instructions+=2;goto B64e581;
case 0x64e583:c.instructions+=1;goto B64e583;
case 0x64e589:goto L64e589;
case 0x64e58c:c.instructions+=3;goto B64e58c;
case 0x64e590:c.instructions+=2;goto B64e590;
case 0x64e592:c.instructions+=1;goto B64e592;
case 0x64e598:goto L64e598;
case 0x64e59b:c.instructions+=1;goto B64e59b;
case 0x64e59d:goto L64e59d;
case 0x64e5a0:c.instructions+=6;goto B64e5a0;
case 0x64e5a5:c.instructions+=5;goto B64e5a5;
case 0x64e5a7:c.instructions+=4;goto B64e5a7;
case 0x64e5aa:c.instructions+=3;goto B64e5aa;
case 0x64e5ad:c.instructions+=2;goto B64e5ad;
case 0x64e5ae:c.instructions+=1;goto B64e5ae;
case 0x64e5b3:goto L64e5b3;
case 0x64e5b6:c.instructions+=2;goto B64e5b6;
case 0x64e5bb:c.instructions+=1;goto B64e5bb;
case 0x64e5c0:goto L64e5c0;
case 0x64e5c5:c.instructions+=1;goto B64e5c5;
case 0x64e5c7:goto L64e5c7;
case 0x64e5cd:goto L64e5cd;
case 0x64e5d2:goto L64e5d2;
case 0x64e5d7:goto L64e5d7;
case 0x64e5da:c.instructions+=1;goto B64e5da;
case 0x64e5dd:goto L64e5dd;
case 0x64e5e0:c.instructions+=2;goto B64e5e0;
case 0x64e5e3:c.instructions+=1;goto B64e5e3;
case 0x64e5e5:goto L64e5e5;
case 0x64e5e7:c.instructions+=1;goto B64e5e7;
case 0x64e5e8:goto L64e5e8;
case 0x64e5eb:c.instructions+=1;goto B64e5eb;
case 0x64e5ed:goto L64e5ed;
case 0x64e5f0:c.instructions+=11;goto B64e5f0;
case 0x64e5f2:c.instructions+=10;goto B64e5f2;
case 0x64e5f4:c.instructions+=9;goto B64e5f4;
case 0x64e5f6:c.instructions+=8;goto B64e5f6;
case 0x64e5f9:c.instructions+=7;goto B64e5f9;
case 0x64e5fb:c.instructions+=6;goto B64e5fb;
case 0x64e5fe:c.instructions+=5;goto B64e5fe;
case 0x64e5ff:c.instructions+=4;goto B64e5ff;
case 0x64e601:c.instructions+=3;goto B64e601;
case 0x64e604:c.instructions+=2;goto B64e604;
case 0x64e605:c.instructions+=1;goto B64e605;
case 0x64e60a:goto L64e60a;
case 0x64e60c:c.instructions+=2;goto B64e60c;
case 0x64e60e:c.instructions+=1;goto B64e60e;
case 0x64e614:goto L64e614;
case 0x64e617:c.instructions+=1;goto B64e617;
case 0x64e619:goto L64e619;
case 0x64e61c:c.instructions+=3;goto B64e61c;
case 0x64e61f:c.instructions+=2;goto B64e61f;
case 0x64e625:c.instructions+=1;goto B64e625;
case 0x64e627:goto L64e627;
case 0x64e62a:c.instructions+=1;goto B64e62a;
case 0x64e62f:goto L64e62f;
case 0x64e631:c.instructions+=3;goto B64e631;
case 0x64e632:c.instructions+=2;goto B64e632;
case 0x64e635:c.instructions+=1;goto B64e635;
case 0x64e63b:goto L64e63b;
case 0x64e63e:c.instructions+=5;goto B64e63e;
case 0x64e641:c.instructions+=4;goto B64e641;
case 0x64e643:c.instructions+=3;goto B64e643;
case 0x64e646:c.instructions+=2;goto B64e646;
case 0x64e648:c.instructions+=1;goto B64e648;
case 0x64e64a:goto L64e64a;
case 0x64e64c:goto L64e64c;
case 0x64e64e:c.instructions+=1;goto B64e64e;
case 0x64e651:goto L64e651;
case 0x64e653:goto L64e653;
case 0x64e656:c.instructions+=6;goto B64e656;
case 0x64e659:c.instructions+=5;goto B64e659;
case 0x64e65a:c.instructions+=4;goto B64e65a;
case 0x64e65d:c.instructions+=3;goto B64e65d;
case 0x64e660:c.instructions+=2;goto B64e660;
case 0x64e663:c.instructions+=1;goto B64e663;
case 0x64e668:goto L64e668;
case 0x64e66a:c.instructions+=2;goto B64e66a;
case 0x64e66c:c.instructions+=1;goto B64e66c;
case 0x64e672:goto L64e672;
case 0x64e675:c.instructions+=5;goto B64e675;
case 0x64e678:c.instructions+=4;goto B64e678;
case 0x64e679:c.instructions+=3;goto B64e679;
case 0x64e67c:c.instructions+=2;goto B64e67c;
case 0x64e67f:c.instructions+=1;goto B64e67f;
case 0x64e684:goto L64e684;
case 0x64e686:c.instructions+=2;goto B64e686;
case 0x64e688:c.instructions+=1;goto B64e688;
case 0x64e68e:goto L64e68e;
case 0x64e692:c.instructions+=4;goto B64e692;
case 0x64e695:c.instructions+=3;goto B64e695;
case 0x64e698:c.instructions+=2;goto B64e698;
case 0x64e69a:c.instructions+=1;goto B64e69a;
case 0x64e69c:goto L64e69c;
case 0x64e69f:goto L64e69f;
case 0x64e6a3:c.instructions+=1;goto B64e6a3;
case 0x64e6a9:goto L64e6a9;
case 0x64e6ac:c.instructions+=2;goto B64e6ac;
case 0x64e6ae:c.instructions+=1;goto B64e6ae;
case 0x64e6b4:goto L64e6b4;
case 0x64e6b8:c.instructions+=1;goto B64e6b8;
case 0x64e6be:goto L64e6be;
case 0x64e6c2:c.instructions+=1;goto B64e6c2;
case 0x64e6c8:goto L64e6c8;
case 0x64e6cb:c.instructions+=6;goto B64e6cb;
case 0x64e6cc:c.instructions+=5;goto B64e6cc;
case 0x64e6cf:c.instructions+=4;goto B64e6cf;
case 0x64e6d1:c.instructions+=3;goto B64e6d1;
case 0x64e6d4:c.instructions+=2;goto B64e6d4;
case 0x64e6d5:c.instructions+=1;goto B64e6d5;
case 0x64e6da:goto L64e6da;
case 0x64e6dc:c.instructions+=1;goto B64e6dc;
case 0x64e6de:goto L64e6de;
case 0x64e6e2:c.instructions+=1;goto B64e6e2;
case 0x64e6e4:goto L64e6e4;
case 0x64e6e7:goto L64e6e7;
case 0x64e6ea:c.instructions+=3;goto B64e6ea;
case 0x64e6ed:c.instructions+=2;goto B64e6ed;
case 0x64e6ef:c.instructions+=1;goto B64e6ef;
case 0x64e6f1:goto L64e6f1;
case 0x64e6f4:c.instructions+=2;goto B64e6f4;
case 0x64e6f6:c.instructions+=1;goto B64e6f6;
case 0x64e6fc:goto L64e6fc;
case 0x64e6ff:c.instructions+=2;goto B64e6ff;
case 0x64e702:c.instructions+=1;goto B64e702;
case 0x64e707:goto L64e707;
case 0x64e709:c.instructions+=2;goto B64e709;
case 0x64e70b:c.instructions+=1;goto B64e70b;
case 0x64e711:goto L64e711;
case 0x64e714:c.instructions+=4;goto B64e714;
case 0x64e718:c.instructions+=3;goto B64e718;
case 0x64e71a:c.instructions+=2;goto B64e71a;
case 0x64e71d:c.instructions+=1;goto B64e71d;
case 0x64e722:goto L64e722;
case 0x64e724:c.instructions+=2;goto B64e724;
case 0x64e726:c.instructions+=1;goto B64e726;
case 0x64e72c:goto L64e72c;
case 0x64e72f:c.instructions+=4;goto B64e72f;
case 0x64e732:c.instructions+=3;goto B64e732;
case 0x64e734:c.instructions+=2;goto B64e734;
case 0x64e735:c.instructions+=1;goto B64e735;
case 0x64e73a:goto L64e73a;
case 0x64e73c:c.instructions+=2;goto B64e73c;
case 0x64e73e:c.instructions+=1;goto B64e73e;
case 0x64e744:goto L64e744;
case 0x64e747:c.instructions+=6;goto B64e747;
case 0x64e74a:c.instructions+=5;goto B64e74a;
case 0x64e74b:c.instructions+=4;goto B64e74b;
case 0x64e74d:c.instructions+=3;goto B64e74d;
case 0x64e750:c.instructions+=2;goto B64e750;
case 0x64e751:c.instructions+=1;goto B64e751;
case 0x64e756:goto L64e756;
case 0x64e758:c.instructions+=2;goto B64e758;
case 0x64e75a:c.instructions+=1;goto B64e75a;
case 0x64e760:goto L64e760;
case 0x64e763:c.instructions+=5;goto B64e763;
case 0x64e765:c.instructions+=4;goto B64e765;
case 0x64e767:c.instructions+=3;goto B64e767;
case 0x64e76a:c.instructions+=2;goto B64e76a;
case 0x64e76b:c.instructions+=1;goto B64e76b;
case 0x64e770:goto L64e770;
case 0x64e772:c.instructions+=2;goto B64e772;
case 0x64e774:c.instructions+=1;goto B64e774;
case 0x64e776:goto L64e776;
case 0x64e779:c.instructions+=2;goto B64e779;
case 0x64e77c:c.instructions+=1;goto B64e77c;
case 0x64e781:goto L64e781;
case 0x64e783:c.instructions+=2;goto B64e783;
case 0x64e785:c.instructions+=1;goto B64e785;
case 0x64e787:goto L64e787;
case 0x64e78a:c.instructions+=23;goto B64e78a;
case 0x64e78d:c.instructions+=22;goto B64e78d;
case 0x64e790:c.instructions+=21;goto B64e790;
case 0x64e793:c.instructions+=20;goto B64e793;
case 0x64e797:c.instructions+=19;goto B64e797;
case 0x64e79a:c.instructions+=18;goto B64e79a;
case 0x64e79d:c.instructions+=17;goto B64e79d;
case 0x64e7a0:c.instructions+=16;goto B64e7a0;
case 0x64e7a3:c.instructions+=15;goto B64e7a3;
case 0x64e7a6:c.instructions+=14;goto B64e7a6;
case 0x64e7a9:c.instructions+=13;goto B64e7a9;
case 0x64e7ac:c.instructions+=12;goto B64e7ac;
case 0x64e7af:c.instructions+=11;goto B64e7af;
case 0x64e7b5:c.instructions+=10;goto B64e7b5;
case 0x64e7b7:c.instructions+=9;goto B64e7b7;
case 0x64e7ba:c.instructions+=8;goto B64e7ba;
case 0x64e7bd:c.instructions+=7;goto B64e7bd;
case 0x64e7c0:c.instructions+=6;goto B64e7c0;
case 0x64e7c3:c.instructions+=5;goto B64e7c3;
case 0x64e7c6:c.instructions+=4;goto B64e7c6;
case 0x64e7c8:c.instructions+=3;goto B64e7c8;
case 0x64e7ca:c.instructions+=2;goto B64e7ca;
case 0x64e7d0:c.instructions+=1;goto B64e7d0;
case 0x64e7d2:goto L64e7d2;
case 0x64e7d7:c.instructions+=5;goto B64e7d7;
case 0x64e7d9:c.instructions+=4;goto B64e7d9;
case 0x64e7dc:c.instructions+=3;goto B64e7dc;
case 0x64e7df:c.instructions+=2;goto B64e7df;
case 0x64e7e0:c.instructions+=1;goto B64e7e0;
case 0x64e7e5:goto L64e7e5;
case 0x64e7e8:goto L64e7e8;
case 0x64e7ed:c.instructions+=1;goto B64e7ed;
case 0x64e7ef:goto L64e7ef;
case 0x64e7f4:goto L64e7f4;
case 0x64e7f7:c.instructions+=2;goto B64e7f7;
case 0x64e7f9:c.instructions+=1;goto B64e7f9;
case 0x64e7fb:goto L64e7fb;
case 0x64e7fd:c.instructions+=1;goto B64e7fd;
case 0x64e802:goto L64e802;
case 0x64e805:c.instructions+=3;goto B64e805;
case 0x64e807:c.instructions+=2;goto B64e807;
case 0x64e808:c.instructions+=1;goto B64e808;
case 0x64e80a:goto L64e80a;
case 0x64e80c:c.instructions+=1;goto B64e80c;
case 0x64e811:goto L64e811;
case 0x64e814:c.instructions+=2;goto B64e814;
case 0x64e816:c.instructions+=1;goto B64e816;
case 0x64e818:goto L64e818;
case 0x64e81a:c.instructions+=1;goto B64e81a;
case 0x64e81f:goto L64e81f;
case 0x64e822:c.instructions+=2;goto B64e822;
case 0x64e824:c.instructions+=1;goto B64e824;
case 0x64e826:goto L64e826;
case 0x64e828:c.instructions+=1;goto B64e828;
case 0x64e82d:goto L64e82d;
case 0x64e82f:c.instructions+=1;goto B64e82f;
case 0x64e831:goto L64e831;
case 0x64e833:c.instructions+=2;goto B64e833;
case 0x64e835:c.instructions+=1;goto B64e835;
case 0x64e83a:goto L64e83a;
case 0x64e83e:c.instructions+=1;goto B64e83e;
case 0x64e840:goto L64e840;
case 0x64e843:c.instructions+=1;goto B64e843;
case 0x64e848:goto L64e848;
case 0x64e849:goto L64e849;
case 0x64e84b:c.instructions+=4;goto B64e84b;
case 0x64e84c:c.instructions+=3;goto B64e84c;
case 0x64e84d:c.instructions+=2;goto B64e84d;
case 0x64e84e:c.instructions+=1;goto B64e84e;
case 0x64e851:goto L64e851;
case 0x64e853:c.instructions+=14;goto B64e853;
case 0x64e854:c.instructions+=13;goto B64e854;
case 0x64e856:c.instructions+=12;goto B64e856;
case 0x64e859:c.instructions+=11;goto B64e859;
case 0x64e85a:c.instructions+=10;goto B64e85a;
case 0x64e85b:c.instructions+=9;goto B64e85b;
case 0x64e85d:c.instructions+=8;goto B64e85d;
case 0x64e85e:c.instructions+=7;goto B64e85e;
case 0x64e860:c.instructions+=6;goto B64e860;
case 0x64e863:c.instructions+=5;goto B64e863;
case 0x64e866:c.instructions+=4;goto B64e866;
case 0x64e869:c.instructions+=3;goto B64e869;
case 0x64e86c:c.instructions+=2;goto B64e86c;
case 0x64e86f:c.instructions+=1;goto B64e86f;
case 0x64e874:goto L64e874;
case 0x64e876:c.instructions+=2;goto B64e876;
case 0x64e877:c.instructions+=1;goto B64e877;
case 0x64e879:goto L64e879;
case 0x64e87b:c.instructions+=1;goto B64e87b;
case 0x64e880:goto L64e880;
case 0x64e883:c.instructions+=1;goto B64e883;
case 0x64e885:goto L64e885;
case 0x64e888:goto L64e888;
case 0x64e88b:c.instructions+=1;goto B64e88b;
case 0x64e891:goto L64e891;
case 0x64e893:c.instructions+=1;goto B64e893;
case 0x64e898:goto L64e898;
case 0x64e89a:c.instructions+=2;goto B64e89a;
case 0x64e89b:c.instructions+=1;goto B64e89b;
case 0x64e89d:goto L64e89d;
case 0x64e89f:c.instructions+=1;goto B64e89f;
case 0x64e8a4:goto L64e8a4;
case 0x64e8a7:c.instructions+=1;goto B64e8a7;
case 0x64e8a9:goto L64e8a9;
case 0x64e8ac:goto L64e8ac;
case 0x64e8af:c.instructions+=1;goto B64e8af;
case 0x64e8b5:goto L64e8b5;
case 0x64e8b7:c.instructions+=1;goto B64e8b7;
case 0x64e8bc:goto L64e8bc;
case 0x64e8be:c.instructions+=2;goto B64e8be;
case 0x64e8bf:c.instructions+=1;goto B64e8bf;
case 0x64e8c1:goto L64e8c1;
case 0x64e8c3:c.instructions+=1;goto B64e8c3;
case 0x64e8c8:goto L64e8c8;
case 0x64e8cb:c.instructions+=1;goto B64e8cb;
case 0x64e8cd:goto L64e8cd;
case 0x64e8d0:goto L64e8d0;
case 0x64e8d3:c.instructions+=1;goto B64e8d3;
case 0x64e8d9:goto L64e8d9;
case 0x64e8dc:c.instructions+=4;goto B64e8dc;
case 0x64e8df:c.instructions+=3;goto B64e8df;
case 0x64e8e1:c.instructions+=2;goto B64e8e1;
case 0x64e8e4:c.instructions+=1;goto B64e8e4;
case 0x64e8e6:goto L64e8e6;
case 0x64e8ea:c.instructions+=1;goto B64e8ea;
case 0x64e8f0:goto L64e8f0;
case 0x64e8f4:c.instructions+=1;goto B64e8f4;
case 0x64e8f6:goto L64e8f6;
case 0x64e8f9:c.instructions+=1;goto B64e8f9;
case 0x64e8fc:goto L64e8fc;
case 0x64e8ff:c.instructions+=4;goto B64e8ff;
case 0x64e902:c.instructions+=3;goto B64e902;
case 0x64e904:c.instructions+=2;goto B64e904;
case 0x64e907:c.instructions+=1;goto B64e907;
case 0x64e909:goto L64e909;
case 0x64e90d:c.instructions+=1;goto B64e90d;
case 0x64e90f:goto L64e90f;
case 0x64e912:c.instructions+=2;goto B64e912;
case 0x64e914:c.instructions+=1;goto B64e914;
case 0x64e916:goto L64e916;
case 0x64e91a:c.instructions+=1;goto B64e91a;
case 0x64e91c:goto L64e91c;
case 0x64e920:c.instructions+=1;goto B64e920;
case 0x64e922:goto L64e922;
case 0x64e925:c.instructions+=7;goto B64e925;
case 0x64e928:c.instructions+=6;goto B64e928;
case 0x64e929:c.instructions+=5;goto B64e929;
case 0x64e92c:c.instructions+=4;goto B64e92c;
case 0x64e92f:c.instructions+=3;goto B64e92f;
case 0x64e932:c.instructions+=2;goto B64e932;
case 0x64e933:c.instructions+=1;goto B64e933;
case 0x64e938:goto L64e938;
case 0x64e93a:c.instructions+=1;goto B64e93a;
case 0x64e93c:goto L64e93c;
case 0x64e93f:c.instructions+=1;goto B64e93f;
case 0x64e941:goto L64e941;
case 0x64e944:goto L64e944;
case 0x64e947:c.instructions+=3;goto B64e947;
case 0x64e94a:c.instructions+=2;goto B64e94a;
case 0x64e94c:c.instructions+=1;goto B64e94c;
case 0x64e94f:goto L64e94f;
case 0x64e951:c.instructions+=1;goto B64e951;
case 0x64e953:goto L64e953;
case 0x64e956:c.instructions+=3;goto B64e956;
case 0x64e959:c.instructions+=2;goto B64e959;
case 0x64e95c:c.instructions+=1;goto B64e95c;
case 0x64e95e:goto L64e95e;
case 0x64e961:c.instructions+=6;goto B64e961;
case 0x64e966:c.instructions+=5;goto B64e966;
case 0x64e967:c.instructions+=4;goto B64e967;
case 0x64e96a:c.instructions+=3;goto B64e96a;
case 0x64e96b:c.instructions+=2;goto B64e96b;
case 0x64e96c:c.instructions+=1;goto B64e96c;
case 0x64e971:goto L64e971;
case 0x64e974:goto L64e974;
case 0x64e979:c.instructions+=1;goto B64e979;
case 0x64e97e:goto L64e97e;
case 0x64e981:c.instructions+=5;goto B64e981;
case 0x64e983:c.instructions+=4;goto B64e983;
case 0x64e986:c.instructions+=3;goto B64e986;
case 0x64e987:c.instructions+=2;goto B64e987;
case 0x64e988:c.instructions+=1;goto B64e988;
case 0x64e98d:goto L64e98d;
case 0x64e98f:c.instructions+=1;goto B64e98f;
case 0x64e991:goto L64e991;
case 0x64e994:c.instructions+=1;goto B64e994;
case 0x64e996:goto L64e996;
case 0x64e999:goto L64e999;
case 0x64e99c:goto L64e99c;
case 0x64e99e:c.instructions+=1;goto B64e99e;
case 0x64e9a0:goto L64e9a0;
case 0x64e9a3:c.instructions+=2;goto B64e9a3;
case 0x64e9a5:c.instructions+=1;goto B64e9a5;
case 0x64e9ab:goto L64e9ab;
case 0x64e9ae:c.instructions+=4;goto B64e9ae;
case 0x64e9b0:c.instructions+=3;goto B64e9b0;
case 0x64e9b3:c.instructions+=2;goto B64e9b3;
case 0x64e9b6:c.instructions+=1;goto B64e9b6;
case 0x64e9b8:goto L64e9b8;
case 0x64e9bb:goto L64e9bb;
case 0x64e9bd:c.instructions+=10;goto B64e9bd;
case 0x64e9c0:c.instructions+=9;goto B64e9c0;
case 0x64e9c3:c.instructions+=8;goto B64e9c3;
case 0x64e9c6:c.instructions+=7;goto B64e9c6;
case 0x64e9c8:c.instructions+=6;goto B64e9c8;
case 0x64e9c9:c.instructions+=5;goto B64e9c9;
case 0x64e9cb:c.instructions+=4;goto B64e9cb;
case 0x64e9ce:c.instructions+=3;goto B64e9ce;
case 0x64e9d4:c.instructions+=2;goto B64e9d4;
case 0x64e9d7:c.instructions+=1;goto B64e9d7;
case 0x64e9dc:goto L64e9dc;
case 0x64e9de:c.instructions+=1;goto B64e9de;
case 0x64e9e0:goto L64e9e0;
case 0x64e9e3:c.instructions+=1;goto B64e9e3;
case 0x64e9e5:goto L64e9e5;
case 0x64e9e8:goto L64e9e8;
case 0x64e9eb:c.instructions+=4;goto B64e9eb;
case 0x64e9ee:c.instructions+=3;goto B64e9ee;
case 0x64e9f0:c.instructions+=2;goto B64e9f0;
case 0x64e9f3:c.instructions+=1;goto B64e9f3;
case 0x64e9f5:goto L64e9f5;
case 0x64e9f8:c.instructions+=2;goto B64e9f8;
case 0x64e9fa:c.instructions+=1;goto B64e9fa;
case 0x64ea00:goto L64ea00;
case 0x64ea03:c.instructions+=4;goto B64ea03;
case 0x64ea06:c.instructions+=3;goto B64ea06;
case 0x64ea07:c.instructions+=2;goto B64ea07;
case 0x64ea0a:c.instructions+=1;goto B64ea0a;
case 0x64ea0f:goto L64ea0f;
case 0x64ea11:c.instructions+=2;goto B64ea11;
case 0x64ea13:c.instructions+=1;goto B64ea13;
case 0x64ea15:goto L64ea15;
case 0x64ea18:c.instructions+=4;goto B64ea18;
case 0x64ea19:c.instructions+=3;goto B64ea19;
case 0x64ea1c:c.instructions+=2;goto B64ea1c;
case 0x64ea1e:c.instructions+=1;goto B64ea1e;
case 0x64ea23:goto L64ea23;
case 0x64ea25:c.instructions+=2;goto B64ea25;
case 0x64ea27:c.instructions+=1;goto B64ea27;
case 0x64ea29:goto L64ea29;
case 0x64ea2c:c.instructions+=6;goto B64ea2c;
case 0x64ea2d:c.instructions+=5;goto B64ea2d;
case 0x64ea2f:c.instructions+=4;goto B64ea2f;
case 0x64ea32:c.instructions+=3;goto B64ea32;
case 0x64ea33:c.instructions+=2;goto B64ea33;
case 0x64ea35:c.instructions+=1;goto B64ea35;
case 0x64ea3a:goto L64ea3a;
case 0x64ea3c:c.instructions+=2;goto B64ea3c;
case 0x64ea3e:c.instructions+=1;goto B64ea3e;
case 0x64ea40:goto L64ea40;
case 0x64ea41:c.instructions+=5;goto B64ea41;
case 0x64ea43:c.instructions+=4;goto B64ea43;
case 0x64ea46:c.instructions+=3;goto B64ea46;
case 0x64ea47:c.instructions+=2;goto B64ea47;
case 0x64ea49:c.instructions+=1;goto B64ea49;
case 0x64ea4e:goto L64ea4e;
case 0x64ea50:c.instructions+=2;goto B64ea50;
case 0x64ea52:c.instructions+=1;goto B64ea52;
case 0x64ea54:goto L64ea54;
case 0x64ea57:c.instructions+=2;goto B64ea57;
case 0x64ea59:c.instructions+=1;goto B64ea59;
case 0x64ea5e:goto L64ea5e;
case 0x64ea60:c.instructions+=2;goto B64ea60;
case 0x64ea62:c.instructions+=1;goto B64ea62;
case 0x64ea64:goto L64ea64;
case 0x64ea67:c.instructions+=2;goto B64ea67;
case 0x64ea6a:c.instructions+=1;goto B64ea6a;
case 0x64ea6f:goto L64ea6f;
case 0x64ea71:c.instructions+=2;goto B64ea71;
case 0x64ea73:c.instructions+=1;goto B64ea73;
case 0x64ea75:goto L64ea75;
case 0x64ea78:c.instructions+=7;goto B64ea78;
case 0x64ea7b:c.instructions+=6;goto B64ea7b;
case 0x64ea7e:c.instructions+=5;goto B64ea7e;
case 0x64ea81:c.instructions+=4;goto B64ea81;
case 0x64ea83:c.instructions+=3;goto B64ea83;
case 0x64ea86:c.instructions+=2;goto B64ea86;
case 0x64ea88:c.instructions+=1;goto B64ea88;
case 0x64ea8a:goto L64ea8a;
case 0x64ea8f:goto L64ea8f;
case 0x64ea92:c.instructions+=2;goto B64ea92;
case 0x64ea94:c.instructions+=1;goto B64ea94;
case 0x64ea96:goto L64ea96;
case 0x64ea98:c.instructions+=1;goto B64ea98;
case 0x64ea9d:goto L64ea9d;
case 0x64eaa0:c.instructions+=2;goto B64eaa0;
case 0x64eaa2:c.instructions+=1;goto B64eaa2;
case 0x64eaa4:goto L64eaa4;
case 0x64eaa6:c.instructions+=1;goto B64eaa6;
case 0x64eaab:goto L64eaab;
case 0x64eaae:c.instructions+=2;goto B64eaae;
case 0x64eab0:c.instructions+=1;goto B64eab0;
case 0x64eab2:goto L64eab2;
case 0x64eab4:c.instructions+=1;goto B64eab4;
case 0x64eab9:goto L64eab9;
case 0x64eabc:c.instructions+=1;goto B64eabc;
case 0x64eac1:goto L64eac1;
case 0x64eac2:c.instructions+=5;goto B64eac2;
case 0x64eac4:c.instructions+=4;goto B64eac4;
case 0x64eac5:c.instructions+=3;goto B64eac5;
case 0x64eac6:c.instructions+=2;goto B64eac6;
case 0x64eac7:c.instructions+=1;goto B64eac7;
case 0x64eaca:goto L64eaca;
case 0x64eacc:c.instructions+=7;goto B64eacc;
case 0x64eacd:c.instructions+=6;goto B64eacd;
case 0x64eace:c.instructions+=5;goto B64eace;
case 0x64ead0:c.instructions+=4;goto B64ead0;
case 0x64ead3:c.instructions+=3;goto B64ead3;
case 0x64ead5:c.instructions+=2;goto B64ead5;
case 0x64ead7:c.instructions+=1;goto B64ead7;
case 0x64ead9:goto L64ead9;
case 0x64eadb:c.instructions+=1;goto B64eadb;
case 0x64eae0:goto L64eae0;
case 0x64eae3:goto L64eae3;
case 0x64eae6:c.instructions+=2;goto B64eae6;
case 0x64eae8:c.instructions+=1;goto B64eae8;
case 0x64eaea:goto L64eaea;
case 0x64eaec:c.instructions+=1;goto B64eaec;
case 0x64eaf1:goto L64eaf1;
case 0x64eaf4:goto L64eaf4;
case 0x64eaf7:c.instructions+=1;goto B64eaf7;
case 0x64eaf9:goto L64eaf9;
case 0x64eafa:goto L64eafa;
case 0x64eafd:c.instructions+=5;goto B64eafd;
case 0x64eb00:c.instructions+=4;goto B64eb00;
case 0x64eb03:c.instructions+=3;goto B64eb03;
case 0x64eb05:c.instructions+=2;goto B64eb05;
case 0x64eb08:c.instructions+=1;goto B64eb08;
case 0x64eb0d:goto L64eb0d;
case 0x64eb0e:c.instructions+=1;goto B64eb0e;
case 0x64eb13:goto L64eb13;
case 0x64eb16:c.instructions+=2;goto B64eb16;
case 0x64eb17:c.instructions+=1;goto B64eb17;
case 0x64eb19:goto L64eb19;
case 0x64eb1a:goto L64eb1a;
case 0x64eb1c:c.instructions+=3;goto B64eb1c;
case 0x64eb1d:c.instructions+=2;goto B64eb1d;
case 0x64eb1e:c.instructions+=1;goto B64eb1e;
case 0x64eb23:goto L64eb23;
case 0x64eb25:c.instructions+=5;goto B64eb25;
case 0x64eb26:c.instructions+=4;goto B64eb26;
case 0x64eb28:c.instructions+=3;goto B64eb28;
case 0x64eb29:c.instructions+=2;goto B64eb29;
case 0x64eb2b:c.instructions+=1;goto B64eb2b;
case 0x64eb30:goto L64eb30;
case 0x64eb34:c.instructions+=1;goto B64eb34;
case 0x64eb36:goto L64eb36;
case 0x64eb37:c.instructions+=1;goto B64eb37;
case 0x64eb3c:goto L64eb3c;
case 0x64eb3d:goto L64eb3d;
case 0x64eb3f:c.instructions+=3;goto B64eb3f;
case 0x64eb40:c.instructions+=2;goto B64eb40;
case 0x64eb41:c.instructions+=1;goto B64eb41;
case 0x64eb44:goto L64eb44;
case 0x64eb46:c.instructions+=9;goto B64eb46;
case 0x64eb47:c.instructions+=8;goto B64eb47;
case 0x64eb48:c.instructions+=7;goto B64eb48;
case 0x64eb4a:c.instructions+=6;goto B64eb4a;
case 0x64eb50:c.instructions+=5;goto B64eb50;
case 0x64eb52:c.instructions+=4;goto B64eb52;
case 0x64eb54:c.instructions+=3;goto B64eb54;
case 0x64eb55:c.instructions+=2;goto B64eb55;
case 0x64eb5b:c.instructions+=1;goto B64eb5b;
case 0x64eb5d:goto L64eb5d;
case 0x64eb5f:goto L64eb5f;
case 0x64eb65:c.instructions+=3;goto B64eb65;
case 0x64eb67:c.instructions+=2;goto B64eb67;
case 0x64eb69:c.instructions+=1;goto B64eb69;
case 0x64eb6b:goto L64eb6b;
case 0x64eb6d:c.instructions+=1;goto B64eb6d;
case 0x64eb72:goto L64eb72;
case 0x64eb74:goto L64eb74;
case 0x64eb7a:c.instructions+=3;goto B64eb7a;
case 0x64eb7c:c.instructions+=2;goto B64eb7c;
case 0x64eb7e:c.instructions+=1;goto B64eb7e;
case 0x64eb80:goto L64eb80;
case 0x64eb82:c.instructions+=1;goto B64eb82;
case 0x64eb87:goto L64eb87;
case 0x64eb89:goto L64eb89;
case 0x64eb8f:c.instructions+=3;goto B64eb8f;
case 0x64eb91:c.instructions+=2;goto B64eb91;
case 0x64eb93:c.instructions+=1;goto B64eb93;
case 0x64eb95:goto L64eb95;
case 0x64eb97:c.instructions+=1;goto B64eb97;
case 0x64eb9c:goto L64eb9c;
case 0x64eb9e:goto L64eb9e;
case 0x64eba4:c.instructions+=3;goto B64eba4;
case 0x64eba6:c.instructions+=2;goto B64eba6;
case 0x64eba8:c.instructions+=1;goto B64eba8;
case 0x64ebaa:goto L64ebaa;
case 0x64ebac:c.instructions+=1;goto B64ebac;
case 0x64ebb1:goto L64ebb1;
case 0x64ebb3:goto L64ebb3;
case 0x64ebb9:c.instructions+=3;goto B64ebb9;
case 0x64ebbb:c.instructions+=2;goto B64ebbb;
case 0x64ebbd:c.instructions+=1;goto B64ebbd;
case 0x64ebbf:goto L64ebbf;
case 0x64ebc1:c.instructions+=1;goto B64ebc1;
case 0x64ebc6:goto L64ebc6;
case 0x64ebc8:goto L64ebc8;
case 0x64ebce:c.instructions+=3;goto B64ebce;
case 0x64ebd0:c.instructions+=2;goto B64ebd0;
case 0x64ebd2:c.instructions+=1;goto B64ebd2;
case 0x64ebd4:goto L64ebd4;
case 0x64ebd5:c.instructions+=1;goto B64ebd5;
case 0x64ebda:goto L64ebda;
case 0x64ebdb:c.instructions+=1;goto B64ebdb;
case 0x64ebdd:goto L64ebdd;
case 0x64ebe3:c.instructions+=3;goto B64ebe3;
case 0x64ebe5:c.instructions+=2;goto B64ebe5;
case 0x64ebe7:c.instructions+=1;goto B64ebe7;
case 0x64ebe9:goto L64ebe9;
case 0x64ebea:c.instructions+=1;goto B64ebea;
case 0x64ebef:goto L64ebef;
case 0x64ebf0:c.instructions+=1;goto B64ebf0;
case 0x64ebf2:goto L64ebf2;
case 0x64ebf8:c.instructions+=1;goto B64ebf8;
case 0x64ebfd:goto L64ebfd;
case 0x64ebfe:c.instructions+=4;goto B64ebfe;
case 0x64ec01:c.instructions+=3;goto B64ec01;
case 0x64ec02:c.instructions+=2;goto B64ec02;
case 0x64ec03:c.instructions+=1;goto B64ec03;
case 0x64ec08:goto L64ec08;
case 0x64ec0a:c.instructions+=5;goto B64ec0a;
case 0x64ec0b:c.instructions+=4;goto B64ec0b;
case 0x64ec0d:c.instructions+=3;goto B64ec0d;
case 0x64ec0e:c.instructions+=2;goto B64ec0e;
case 0x64ec10:c.instructions+=1;goto B64ec10;
case 0x64ec15:goto L64ec15;
case 0x64ec19:c.instructions+=1;goto B64ec19;
case 0x64ec1b:goto L64ec1b;
case 0x64ec1c:c.instructions+=1;goto B64ec1c;
case 0x64ec21:goto L64ec21;
case 0x64ec22:goto L64ec22;
case 0x64ec24:c.instructions+=3;goto B64ec24;
case 0x64ec25:c.instructions+=2;goto B64ec25;
case 0x64ec26:c.instructions+=1;goto B64ec26;
case 0x64ec29:goto L64ec29;
case 0x64ec2b:c.instructions+=13;goto B64ec2b;
case 0x64ec2c:c.instructions+=12;goto B64ec2c;
case 0x64ec2e:c.instructions+=11;goto B64ec2e;
case 0x64ec31:c.instructions+=10;goto B64ec31;
case 0x64ec32:c.instructions+=9;goto B64ec32;
case 0x64ec33:c.instructions+=8;goto B64ec33;
case 0x64ec34:c.instructions+=7;goto B64ec34;
case 0x64ec36:c.instructions+=6;goto B64ec36;
case 0x64ec38:c.instructions+=5;goto B64ec38;
case 0x64ec3b:c.instructions+=4;goto B64ec3b;
case 0x64ec3e:c.instructions+=3;goto B64ec3e;
case 0x64ec41:c.instructions+=2;goto B64ec41;
case 0x64ec43:c.instructions+=1;goto B64ec43;
case 0x64ec48:goto L64ec48;
case 0x64ec4a:c.instructions+=2;goto B64ec4a;
case 0x64ec4b:c.instructions+=1;goto B64ec4b;
case 0x64ec4d:goto L64ec4d;
case 0x64ec4f:c.instructions+=1;goto B64ec4f;
case 0x64ec54:goto L64ec54;
case 0x64ec57:c.instructions+=1;goto B64ec57;
case 0x64ec59:goto L64ec59;
case 0x64ec5c:goto L64ec5c;
case 0x64ec5f:c.instructions+=1;goto B64ec5f;
case 0x64ec65:goto L64ec65;
case 0x64ec67:c.instructions+=1;goto B64ec67;
case 0x64ec6c:goto L64ec6c;
case 0x64ec6e:c.instructions+=2;goto B64ec6e;
case 0x64ec6f:c.instructions+=1;goto B64ec6f;
case 0x64ec71:goto L64ec71;
case 0x64ec73:c.instructions+=1;goto B64ec73;
case 0x64ec78:goto L64ec78;
case 0x64ec7b:c.instructions+=1;goto B64ec7b;
case 0x64ec7d:goto L64ec7d;
case 0x64ec80:goto L64ec80;
case 0x64ec83:c.instructions+=1;goto B64ec83;
case 0x64ec89:goto L64ec89;
case 0x64ec8b:c.instructions+=1;goto B64ec8b;
case 0x64ec90:goto L64ec90;
case 0x64ec92:c.instructions+=2;goto B64ec92;
case 0x64ec93:c.instructions+=1;goto B64ec93;
case 0x64ec95:goto L64ec95;
case 0x64ec97:c.instructions+=1;goto B64ec97;
case 0x64ec9c:goto L64ec9c;
case 0x64ec9e:c.instructions+=1;goto B64ec9e;
case 0x64eca0:goto L64eca0;
case 0x64eca2:goto L64eca2;
case 0x64eca4:c.instructions+=1;goto B64eca4;
case 0x64ecaa:goto L64ecaa;
case 0x64ecad:c.instructions+=4;goto B64ecad;
case 0x64ecb0:c.instructions+=3;goto B64ecb0;
case 0x64ecb2:c.instructions+=2;goto B64ecb2;
case 0x64ecb5:c.instructions+=1;goto B64ecb5;
case 0x64ecb7:goto L64ecb7;
case 0x64ecbb:c.instructions+=1;goto B64ecbb;
case 0x64ecc1:goto L64ecc1;
case 0x64ecc5:c.instructions+=1;goto B64ecc5;
case 0x64eccb:goto L64eccb;
case 0x64ecce:c.instructions+=1;goto B64ecce;
case 0x64ecd1:goto L64ecd1;
case 0x64ecd4:c.instructions+=2;goto B64ecd4;
case 0x64ecd7:c.instructions+=1;goto B64ecd7;
case 0x64ecd9:goto L64ecd9;
case 0x64ecdd:c.instructions+=1;goto B64ecdd;
case 0x64ece3:goto L64ece3;
case 0x64ece6:c.instructions+=2;goto B64ece6;
case 0x64ece8:c.instructions+=1;goto B64ece8;
case 0x64ecee:goto L64ecee;
case 0x64ecf2:c.instructions+=1;goto B64ecf2;
case 0x64ecf8:goto L64ecf8;
case 0x64ecfc:c.instructions+=1;goto B64ecfc;
case 0x64ecfe:goto L64ecfe;
case 0x64ed01:c.instructions+=6;goto B64ed01;
case 0x64ed02:c.instructions+=5;goto B64ed02;
case 0x64ed05:c.instructions+=4;goto B64ed05;
case 0x64ed08:c.instructions+=3;goto B64ed08;
case 0x64ed0b:c.instructions+=2;goto B64ed0b;
case 0x64ed0c:c.instructions+=1;goto B64ed0c;
case 0x64ed11:goto L64ed11;
case 0x64ed13:c.instructions+=1;goto B64ed13;
case 0x64ed15:goto L64ed15;
case 0x64ed19:c.instructions+=1;goto B64ed19;
case 0x64ed1b:goto L64ed1b;
case 0x64ed1e:goto L64ed1e;
case 0x64ed21:c.instructions+=1;goto B64ed21;
case 0x64ed24:goto L64ed24;
case 0x64ed26:c.instructions+=1;goto B64ed26;
case 0x64ed28:goto L64ed28;
case 0x64ed2b:c.instructions+=3;goto B64ed2b;
case 0x64ed2e:c.instructions+=2;goto B64ed2e;
case 0x64ed31:c.instructions+=1;goto B64ed31;
case 0x64ed33:goto L64ed33;
case 0x64ed38:c.instructions+=1;goto B64ed38;
case 0x64ed3d:goto L64ed3d;
case 0x64ed41:c.instructions+=1;goto B64ed41;
case 0x64ed47:goto L64ed47;
case 0x64ed4a:c.instructions+=2;goto B64ed4a;
case 0x64ed4c:c.instructions+=1;goto B64ed4c;
case 0x64ed52:goto L64ed52;
case 0x64ed56:c.instructions+=1;goto B64ed56;
case 0x64ed5c:goto L64ed5c;
case 0x64ed60:c.instructions+=1;goto B64ed60;
case 0x64ed66:goto L64ed66;
case 0x64ed69:c.instructions+=7;goto B64ed69;
case 0x64ed6a:c.instructions+=6;goto B64ed6a;
case 0x64ed6d:c.instructions+=5;goto B64ed6d;
case 0x64ed70:c.instructions+=4;goto B64ed70;
case 0x64ed73:c.instructions+=3;goto B64ed73;
case 0x64ed75:c.instructions+=2;goto B64ed75;
case 0x64ed76:c.instructions+=1;goto B64ed76;
case 0x64ed7b:goto L64ed7b;
case 0x64ed7d:c.instructions+=1;goto B64ed7d;
case 0x64ed7f:goto L64ed7f;
case 0x64ed83:c.instructions+=1;goto B64ed83;
case 0x64ed85:goto L64ed85;
case 0x64ed88:goto L64ed88;
case 0x64ed8a:c.instructions+=1;goto B64ed8a;
case 0x64ed8d:goto L64ed8d;
case 0x64ed8f:c.instructions+=1;goto B64ed8f;
case 0x64ed91:goto L64ed91;
case 0x64ed93:c.instructions+=5;goto B64ed93;
case 0x64ed96:c.instructions+=4;goto B64ed96;
case 0x64ed99:c.instructions+=3;goto B64ed99;
case 0x64ed9f:c.instructions+=2;goto B64ed9f;
case 0x64eda1:c.instructions+=1;goto B64eda1;
case 0x64eda7:goto L64eda7;
case 0x64edaa:c.instructions+=4;goto B64edaa;
case 0x64edad:c.instructions+=3;goto B64edad;
case 0x64edae:c.instructions+=2;goto B64edae;
case 0x64edb1:c.instructions+=1;goto B64edb1;
case 0x64edb6:goto L64edb6;
case 0x64edb8:c.instructions+=2;goto B64edb8;
case 0x64edba:c.instructions+=1;goto B64edba;
case 0x64edc0:goto L64edc0;
case 0x64edc3:c.instructions+=3;goto B64edc3;
case 0x64edc5:c.instructions+=2;goto B64edc5;
case 0x64edc8:c.instructions+=1;goto B64edc8;
case 0x64edcd:goto L64edcd;
case 0x64edcf:c.instructions+=2;goto B64edcf;
case 0x64edd1:c.instructions+=1;goto B64edd1;
case 0x64edd7:goto L64edd7;
case 0x64edda:c.instructions+=5;goto B64edda;
case 0x64eddc:c.instructions+=4;goto B64eddc;
case 0x64edde:c.instructions+=3;goto B64edde;
case 0x64ede1:c.instructions+=2;goto B64ede1;
case 0x64ede2:c.instructions+=1;goto B64ede2;
case 0x64ede7:goto L64ede7;
case 0x64ede9:c.instructions+=2;goto B64ede9;
case 0x64edeb:c.instructions+=1;goto B64edeb;
case 0x64eded:goto L64eded;
case 0x64edf0:c.instructions+=4;goto B64edf0;
case 0x64edf2:c.instructions+=3;goto B64edf2;
case 0x64edf4:c.instructions+=2;goto B64edf4;
case 0x64edf5:c.instructions+=1;goto B64edf5;
case 0x64edfa:goto L64edfa;
case 0x64edfc:c.instructions+=2;goto B64edfc;
case 0x64edfe:c.instructions+=1;goto B64edfe;
case 0x64ee00:goto L64ee00;
case 0x64ee03:c.instructions+=2;goto B64ee03;
case 0x64ee06:c.instructions+=1;goto B64ee06;
case 0x64ee0b:goto L64ee0b;
case 0x64ee0d:c.instructions+=2;goto B64ee0d;
case 0x64ee0f:c.instructions+=1;goto B64ee0f;
case 0x64ee11:goto L64ee11;
case 0x64ee14:c.instructions+=2;goto B64ee14;
case 0x64ee18:c.instructions+=1;goto B64ee18;
case 0x64ee1d:goto L64ee1d;
case 0x64ee1f:c.instructions+=2;goto B64ee1f;
case 0x64ee21:c.instructions+=1;goto B64ee21;
case 0x64ee23:goto L64ee23;
case 0x64ee26:c.instructions+=8;goto B64ee26;
case 0x64ee29:c.instructions+=7;goto B64ee29;
case 0x64ee2c:c.instructions+=6;goto B64ee2c;
case 0x64ee32:c.instructions+=5;goto B64ee32;
case 0x64ee34:c.instructions+=4;goto B64ee34;
case 0x64ee37:c.instructions+=3;goto B64ee37;
case 0x64ee3d:c.instructions+=2;goto B64ee3d;
case 0x64ee3f:c.instructions+=1;goto B64ee3f;
case 0x64ee41:goto L64ee41;
case 0x64ee46:goto L64ee46;
case 0x64ee49:c.instructions+=5;goto B64ee49;
case 0x64ee4b:c.instructions+=4;goto B64ee4b;
case 0x64ee4e:c.instructions+=3;goto B64ee4e;
case 0x64ee50:c.instructions+=2;goto B64ee50;
case 0x64ee51:c.instructions+=1;goto B64ee51;
case 0x64ee56:goto L64ee56;
case 0x64ee59:goto L64ee59;
case 0x64ee5e:c.instructions+=1;goto B64ee5e;
case 0x64ee60:goto L64ee60;
case 0x64ee65:goto L64ee65;
case 0x64ee67:c.instructions+=1;goto B64ee67;
case 0x64ee69:goto L64ee69;
case 0x64ee6b:c.instructions+=2;goto B64ee6b;
case 0x64ee6d:c.instructions+=1;goto B64ee6d;
case 0x64ee72:goto L64ee72;
case 0x64ee75:c.instructions+=2;goto B64ee75;
case 0x64ee77:c.instructions+=1;goto B64ee77;
case 0x64ee79:goto L64ee79;
case 0x64ee7b:c.instructions+=1;goto B64ee7b;
case 0x64ee80:goto L64ee80;
case 0x64ee83:c.instructions+=2;goto B64ee83;
case 0x64ee85:c.instructions+=1;goto B64ee85;
case 0x64ee87:goto L64ee87;
case 0x64ee89:c.instructions+=1;goto B64ee89;
case 0x64ee8e:goto L64ee8e;
case 0x64ee90:c.instructions+=5;goto B64ee90;
case 0x64ee91:c.instructions+=4;goto B64ee91;
case 0x64ee92:c.instructions+=3;goto B64ee92;
case 0x64ee93:c.instructions+=2;goto B64ee93;
case 0x64ee94:c.instructions+=1;goto B64ee94;
case 0x64ee97:goto L64ee97;
case 0x64ee99:c.instructions+=6;goto B64ee99;
case 0x64ee9a:c.instructions+=5;goto B64ee9a;
case 0x64ee9c:c.instructions+=4;goto B64ee9c;
case 0x64ee9f:c.instructions+=3;goto B64ee9f;
case 0x64eea2:c.instructions+=2;goto B64eea2;
case 0x64eea5:c.instructions+=1;goto B64eea5;
case 0x64eea7:goto L64eea7;
case 0x64eea9:c.instructions+=1;goto B64eea9;
case 0x64eeae:goto L64eeae;
case 0x64eeb0:goto L64eeb0;
case 0x64eeb1:c.instructions+=1;goto B64eeb1;
case 0x64eeb4:goto L64eeb4;
case 0x64eeb6:c.instructions+=17;goto B64eeb6;
case 0x64eeb7:c.instructions+=16;goto B64eeb7;
case 0x64eeb9:c.instructions+=15;goto B64eeb9;
case 0x64eebc:c.instructions+=14;goto B64eebc;
case 0x64eebd:c.instructions+=13;goto B64eebd;
case 0x64eebe:c.instructions+=12;goto B64eebe;
case 0x64eebf:c.instructions+=11;goto B64eebf;
case 0x64eec1:c.instructions+=10;goto B64eec1;
case 0x64eec3:c.instructions+=9;goto B64eec3;
case 0x64eec4:c.instructions+=8;goto B64eec4;
case 0x64eec5:c.instructions+=7;goto B64eec5;
case 0x64eec7:c.instructions+=6;goto B64eec7;
case 0x64eeca:c.instructions+=5;goto B64eeca;
case 0x64eecd:c.instructions+=4;goto B64eecd;
case 0x64eed0:c.instructions+=3;goto B64eed0;
case 0x64eed3:c.instructions+=2;goto B64eed3;
case 0x64eed6:c.instructions+=1;goto B64eed6;
case 0x64eedb:goto L64eedb;
case 0x64eedd:c.instructions+=2;goto B64eedd;
case 0x64eede:c.instructions+=1;goto B64eede;
case 0x64eee0:goto L64eee0;
case 0x64eee2:c.instructions+=1;goto B64eee2;
case 0x64eee7:goto L64eee7;
case 0x64eeea:c.instructions+=1;goto B64eeea;
case 0x64eeec:goto L64eeec;
case 0x64eeef:goto L64eeef;
case 0x64eef2:c.instructions+=1;goto B64eef2;
case 0x64eef8:goto L64eef8;
case 0x64eef9:c.instructions+=1;goto B64eef9;
case 0x64eefe:goto L64eefe;
case 0x64ef00:c.instructions+=2;goto B64ef00;
case 0x64ef01:c.instructions+=1;goto B64ef01;
case 0x64ef03:goto L64ef03;
case 0x64ef05:c.instructions+=1;goto B64ef05;
case 0x64ef0a:goto L64ef0a;
case 0x64ef0d:c.instructions+=1;goto B64ef0d;
case 0x64ef0f:goto L64ef0f;
case 0x64ef12:goto L64ef12;
case 0x64ef15:c.instructions+=1;goto B64ef15;
case 0x64ef1b:goto L64ef1b;
case 0x64ef1c:c.instructions+=1;goto B64ef1c;
case 0x64ef21:goto L64ef21;
case 0x64ef23:c.instructions+=2;goto B64ef23;
case 0x64ef24:c.instructions+=1;goto B64ef24;
case 0x64ef26:goto L64ef26;
case 0x64ef28:c.instructions+=1;goto B64ef28;
case 0x64ef2d:goto L64ef2d;
case 0x64ef30:c.instructions+=1;goto B64ef30;
case 0x64ef32:goto L64ef32;
case 0x64ef35:goto L64ef35;
case 0x64ef38:c.instructions+=1;goto B64ef38;
case 0x64ef3e:goto L64ef3e;
case 0x64ef3f:c.instructions+=1;goto B64ef3f;
case 0x64ef44:goto L64ef44;
case 0x64ef46:c.instructions+=2;goto B64ef46;
case 0x64ef47:c.instructions+=1;goto B64ef47;
case 0x64ef49:goto L64ef49;
case 0x64ef4b:c.instructions+=1;goto B64ef4b;
case 0x64ef50:goto L64ef50;
case 0x64ef53:c.instructions+=1;goto B64ef53;
case 0x64ef55:goto L64ef55;
case 0x64ef58:goto L64ef58;
case 0x64ef5b:c.instructions+=1;goto B64ef5b;
case 0x64ef61:goto L64ef61;
case 0x64ef64:c.instructions+=5;goto B64ef64;
case 0x64ef65:c.instructions+=4;goto B64ef65;
case 0x64ef67:c.instructions+=3;goto B64ef67;
case 0x64ef6a:c.instructions+=2;goto B64ef6a;
case 0x64ef6b:c.instructions+=1;goto B64ef6b;
case 0x64ef70:goto L64ef70;
case 0x64ef72:c.instructions+=2;goto B64ef72;
case 0x64ef74:c.instructions+=1;goto B64ef74;
case 0x64ef7a:goto L64ef7a;
case 0x64ef7d:c.instructions+=2;goto B64ef7d;
case 0x64ef7f:c.instructions+=1;goto B64ef7f;
case 0x64ef85:goto L64ef85;
case 0x64ef89:c.instructions+=1;goto B64ef89;
case 0x64ef8f:goto L64ef8f;
case 0x64ef92:c.instructions+=9;goto B64ef92;
case 0x64ef98:c.instructions+=8;goto B64ef98;
case 0x64ef9e:c.instructions+=7;goto B64ef9e;
case 0x64efa4:c.instructions+=6;goto B64efa4;
case 0x64efae:c.instructions+=5;goto B64efae;
case 0x64efb4:c.instructions+=4;goto B64efb4;
case 0x64efb7:c.instructions+=3;goto B64efb7;
case 0x64efb9:c.instructions+=2;goto B64efb9;
case 0x64efbc:c.instructions+=1;goto B64efbc;
case 0x64efc2:goto L64efc2;
case 0x64efc6:c.instructions+=1;goto B64efc6;
case 0x64efc8:goto L64efc8;
case 0x64efcb:c.instructions+=2;goto B64efcb;
case 0x64efcd:c.instructions+=1;goto B64efcd;
case 0x64efcf:goto L64efcf;
case 0x64efd2:c.instructions+=2;goto B64efd2;
case 0x64efd5:c.instructions+=1;goto B64efd5;
case 0x64efd7:goto L64efd7;
case 0x64efda:c.instructions+=1;goto B64efda;
case 0x64efdc:goto L64efdc;
case 0x64efdf:c.instructions+=2;goto B64efdf;
case 0x64efe1:c.instructions+=1;goto B64efe1;
case 0x64efe3:goto L64efe3;
case 0x64efe4:c.instructions+=1;goto B64efe4;
case 0x64efe6:goto L64efe6;
case 0x64efe7:c.instructions+=1;goto B64efe7;
case 0x64efe9:goto L64efe9;
case 0x64efea:c.instructions+=1;goto B64efea;
case 0x64efec:goto L64efec;
case 0x64efef:c.instructions+=4;goto B64efef;
case 0x64eff1:c.instructions+=3;goto B64eff1;
case 0x64eff4:c.instructions+=2;goto B64eff4;
case 0x64eff5:c.instructions+=1;goto B64eff5;
case 0x64effa:goto L64effa;
case 0x64effc:goto L64effc;
case 0x64effd:c.instructions+=2;goto B64effd;
case 0x64efff:c.instructions+=1;goto B64efff;
default:missing_instruction(c.pc);}
B64e001:L64e001:{c.instructions+=8;NFSU2_TR(0x64e001);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B64e003:{NFSU2_TR(0x64e003);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+8))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B64e006:{NFSU2_TR(0x64e006);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B64e009:{NFSU2_TR(0x64e009);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e00c:{NFSU2_TR(0x64e00c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64e00f:{NFSU2_TR(0x64e00f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B64e010:{NFSU2_TR(0x64e010);
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
B64e012:{NFSU2_TR(0x64e012);
if(r1(R+512)){TAIL_STATIC(0x64dfdcu,64d);}
}
B64e014:L64e014:{c.instructions+=1;NFSU2_TR(0x64e014);
{goto L64e01d;}
}
B64e016:L64e016:{c.instructions+=1;NFSU2_TR(0x64e016);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B64e01d:L64e01d:{c.instructions+=6;NFSU2_TR(0x64e01d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64e01e:{NFSU2_TR(0x64e01e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64e021:{NFSU2_TR(0x64e021);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64e022:{NFSU2_TR(0x64e022);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64e023:{NFSU2_TR(0x64e023);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64e024:{NFSU2_TR(0x64e024);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64e027:L64e027:{c.instructions+=8;NFSU2_TR(0x64e027);
__builtin_memmove((R+28),(R+28),4);
}
B64e029:{NFSU2_TR(0x64e029);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e02a:{NFSU2_TR(0x64e02a);
__builtin_memmove((R+20),(R+16),4);
}
B64e02c:{NFSU2_TR(0x64e02c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e02d:{NFSU2_TR(0x64e02d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64e031:{NFSU2_TR(0x64e031);
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
B64e035:{NFSU2_TR(0x64e035);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e036:{NFSU2_TR(0x64e036);
if(r1(R+518)){{goto L64e0f8;}}
}
B64e03c:L64e03c:{c.instructions+=4;NFSU2_TR(0x64e03c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e03d:{NFSU2_TR(0x64e03d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64e040:{NFSU2_TR(0x64e040);
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
B64e042:{NFSU2_TR(0x64e042);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64e050;}}
}
B64e044:L64e044:{c.instructions+=2;NFSU2_TR(0x64e044);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B64e04b:{NFSU2_TR(0x64e04b);
{goto L64e0f7;}
}
B64e050:L64e050:{c.instructions+=6;NFSU2_TR(0x64e050);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e051:{NFSU2_TR(0x64e051);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64e054:{NFSU2_TR(0x64e054);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e056:{NFSU2_TR(0x64e056);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64e059:{NFSU2_TR(0x64e059);
__builtin_memmove((R+4),(R+24),4);
}
B64e05b:{NFSU2_TR(0x64e05b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e060ull));
TAIL_STATIC(0x64c399u,64c);
}
B64e060:L64e060:{c.instructions+=2;NFSU2_TR(0x64e060);
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
B64e062:{NFSU2_TR(0x64e062);
if(r1(R+518)){{goto L64e0ef;}}
}
B64e068:L64e068:{c.instructions+=7;NFSU2_TR(0x64e068);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64e06b:{NFSU2_TR(0x64e06b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64e06e:{NFSU2_TR(0x64e06e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64e074:{NFSU2_TR(0x64e074);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64e077:{NFSU2_TR(0x64e077);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64e07a:{NFSU2_TR(0x64e07a);
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
B64e07c:{NFSU2_TR(0x64e07c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64e0ef;}}
}
B64e07e:L64e07e:{c.instructions+=2;NFSU2_TR(0x64e07e);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64e081:{NFSU2_TR(0x64e081);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L64e0ef;}}
}
B64e083:L64e083:{c.instructions+=3;NFSU2_TR(0x64e083);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64e086:{NFSU2_TR(0x64e086);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64e088:{NFSU2_TR(0x64e088);
if(r1(R+518)){{goto L64e090;}}
}
B64e08a:L64e08a:{c.instructions+=2;NFSU2_TR(0x64e08a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64e08e:{NFSU2_TR(0x64e08e);
if(r1(R+518)){{goto L64e093;}}
}
B64e090:L64e090:{c.instructions+=2;NFSU2_TR(0x64e090);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B64e092:{NFSU2_TR(0x64e092);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B64e093:L64e093:{c.instructions+=5;NFSU2_TR(0x64e093);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64e096:{NFSU2_TR(0x64e096);
u8 U[32];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
}
B64e09a:{NFSU2_TR(0x64e09a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B64e09d:{NFSU2_TR(0x64e09d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
}
B64e0a0:{NFSU2_TR(0x64e0a0);
if(r1(R+512)){{goto L64e0a5;}}
}
B64e0a2:L64e0a2:{c.instructions+=1;NFSU2_TR(0x64e0a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e0a5:L64e0a5:{c.instructions+=4;NFSU2_TR(0x64e0a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64e0a8:{NFSU2_TR(0x64e0a8);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B64e0aa:{NFSU2_TR(0x64e0aa);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+24)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64e0ad:{NFSU2_TR(0x64e0ad);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64e0f6;}}
}
B64e0af:L64e0af:{c.instructions+=2;NFSU2_TR(0x64e0af);
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
B64e0b1:{NFSU2_TR(0x64e0b1);
if(r1(R+518)){{goto L64e0f6;}}
}
B64e0b3:L64e0b3:{c.instructions+=4;NFSU2_TR(0x64e0b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64e0b6:{NFSU2_TR(0x64e0b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64e0b9:{NFSU2_TR(0x64e0b9);
w1(R+512,u8((r4(R+4))<(u32(0x0ull))));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64e0bc:{NFSU2_TR(0x64e0bc);
if(r1(R+518)){{goto L64e0d9;}}
}
B64e0be:L64e0be:{c.instructions+=2;NFSU2_TR(0x64e0be);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64e0bf:{NFSU2_TR(0x64e0bf);
if(r1(R+518)){{goto L64e0d1;}}
}
B64e0c1:L64e0c1:{c.instructions+=2;NFSU2_TR(0x64e0c1);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64e0c2:{NFSU2_TR(0x64e0c2);
if(r1(R+518)){{goto L64e0d1;}}
}
B64e0c4:L64e0c4:{c.instructions+=2;NFSU2_TR(0x64e0c4);
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
B64e0c5:{NFSU2_TR(0x64e0c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64e0ef;}}
}
B64e0c7:L64e0c7:{c.instructions+=2;NFSU2_TR(0x64e0c7);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B64e0ca:{NFSU2_TR(0x64e0ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e0cfull));
TAIL_STATIC(0x75dd28u,75d);
}
B64e0cf:L64e0cf:{c.instructions+=1;NFSU2_TR(0x64e0cf);
{goto L64e0d4;}
}
B64e0d1:L64e0d1:{c.instructions+=1;NFSU2_TR(0x64e0d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64e0d4:L64e0d4:{c.instructions+=2;NFSU2_TR(0x64e0d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B64e0d7:{NFSU2_TR(0x64e0d7);
{goto L64e0e4;}
}
B64e0d9:L64e0d9:{c.instructions+=4;NFSU2_TR(0x64e0d9);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B64e0db:{NFSU2_TR(0x64e0db);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64e0de:{NFSU2_TR(0x64e0de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B64e0e1:{NFSU2_TR(0x64e0e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B64e0e4:L64e0e4:{c.instructions+=4;NFSU2_TR(0x64e0e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64e0e7:{NFSU2_TR(0x64e0e7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B64e0e8:{NFSU2_TR(0x64e0e8);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+14)));
w4(U+18,u32(u32(r4(R+24))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64e0eb:{NFSU2_TR(0x64e0eb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64e0afu);}goto L64e0af;}}
}
B64e0ed:L64e0ed:{c.instructions+=1;NFSU2_TR(0x64e0ed);
{goto L64e0f6;}
}
B64e0ef:L64e0ef:{c.instructions+=1;NFSU2_TR(0x64e0ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B64e0f6:L64e0f6:{c.instructions+=1;NFSU2_TR(0x64e0f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64e0f7:L64e0f7:{c.instructions+=1;NFSU2_TR(0x64e0f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64e0f8:L64e0f8:{c.instructions+=4;NFSU2_TR(0x64e0f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64e0fb:{NFSU2_TR(0x64e0fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64e0fc:{NFSU2_TR(0x64e0fc);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64e0fd:{NFSU2_TR(0x64e0fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64e100:L64e100:{c.instructions+=6;NFSU2_TR(0x64e100);
__builtin_memmove((R+28),(R+28),4);
}
B64e102:{NFSU2_TR(0x64e102);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e103:{NFSU2_TR(0x64e103);
__builtin_memmove((R+20),(R+16),4);
}
B64e105:{NFSU2_TR(0x64e105);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e106:{NFSU2_TR(0x64e106);
__builtin_memmove((R+24),(R+4),4);
}
B64e108:{NFSU2_TR(0x64e108);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e10dull));
TAIL_STATIC(0x64c0f5u,64c);
}
B64e10d:L64e10d:{c.instructions+=2;NFSU2_TR(0x64e10d);
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
B64e111:{NFSU2_TR(0x64e111);
if(r1(R+518)){{goto L64e11a;}}
}
B64e113:L64e113:{c.instructions+=2;NFSU2_TR(0x64e113);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e114:{NFSU2_TR(0x64e114);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e119ull));
TAIL_STATIC(0x575630u,575);
}
B64e119:L64e119:{c.instructions+=1;NFSU2_TR(0x64e119);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64e11a:L64e11a:{c.instructions+=4;NFSU2_TR(0x64e11a);
__builtin_memmove((R+0),(R+24),4);
}
B64e11c:{NFSU2_TR(0x64e11c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64e11d:{NFSU2_TR(0x64e11d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64e11e:{NFSU2_TR(0x64e11e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64e121:L64e121:{c.instructions+=6;NFSU2_TR(0x64e121);
__builtin_memmove((R+28),(R+28),4);
}
B64e123:{NFSU2_TR(0x64e123);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e124:{NFSU2_TR(0x64e124);
__builtin_memmove((R+24),(R+4),4);
}
B64e126:{NFSU2_TR(0x64e126);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64e129:{NFSU2_TR(0x64e129);
u8 U[4];
w4(U+0,u32(0x7af888ull));
s4(u32(r4(R+24)),r4(U+0));
}
B64e12f:{NFSU2_TR(0x64e12f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e134ull));
TAIL_STATIC(0x645dd4u,645);
}
B64e134:L64e134:{c.instructions+=2;NFSU2_TR(0x64e134);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64e13a:{NFSU2_TR(0x64e13a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e13full));
TAIL_STATIC(0x64f3e6u,64f);
}
B64e13f:L64e13f:{c.instructions+=13;NFSU2_TR(0x64e13f);
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
B64e141:{NFSU2_TR(0x64e141);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x320ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e147:{NFSU2_TR(0x64e147);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x348ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e14d:{NFSU2_TR(0x64e14d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e153:{NFSU2_TR(0x64e153);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x350ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e159:{NFSU2_TR(0x64e159);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x354ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e15f:{NFSU2_TR(0x64e15f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x358ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e165:{NFSU2_TR(0x64e165);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x33cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e16b:{NFSU2_TR(0x64e16b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x344ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e171:{NFSU2_TR(0x64e171);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B64e178:{NFSU2_TR(0x64e178);
__builtin_memmove((R+0),(R+24),4);
}
B64e17a:{NFSU2_TR(0x64e17a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64e17b:{NFSU2_TR(0x64e17b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64e17c:L64e17c:{c.instructions+=16;NFSU2_TR(0x64e17c);
__builtin_memmove((R+28),(R+28),4);
}
B64e17e:{NFSU2_TR(0x64e17e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e17f:{NFSU2_TR(0x64e17f);
__builtin_memmove((R+20),(R+16),4);
}
B64e181:{NFSU2_TR(0x64e181);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x90ull))));
}
B64e187:{NFSU2_TR(0x64e187);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e188:{NFSU2_TR(0x64e188);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e189:{NFSU2_TR(0x64e189);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B64e18b:{NFSU2_TR(0x64e18b);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e18d:{NFSU2_TR(0x64e18d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e190:{NFSU2_TR(0x64e190);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e193:{NFSU2_TR(0x64e193);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e196:{NFSU2_TR(0x64e196);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e199:{NFSU2_TR(0x64e199);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e19c:{NFSU2_TR(0x64e19c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e19f:{NFSU2_TR(0x64e19f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64e1a1:{NFSU2_TR(0x64e1a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e1a6ull));
TAIL_STATIC(0x575620u,575);
}
B64e1a6:L64e1a6:{c.instructions+=3;NFSU2_TR(0x64e1a6);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64e1a8:{NFSU2_TR(0x64e1a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64e1a9:{NFSU2_TR(0x64e1a9);
if(r1(R+518)){{goto L64e1b7;}}
}
B64e1ab:L64e1ab:{c.instructions+=2;NFSU2_TR(0x64e1ab);
__builtin_memmove((R+4),(R+0),4);
}
B64e1ad:{NFSU2_TR(0x64e1ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e1b2ull));
TAIL_STATIC(0x6477abu,647);
}
B64e1b2:L64e1b2:{c.instructions+=2;NFSU2_TR(0x64e1b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e1b5:{NFSU2_TR(0x64e1b5);
{goto L64e1ba;}
}
B64e1b7:L64e1b7:{c.instructions+=1;NFSU2_TR(0x64e1b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e1ba:L64e1ba:{c.instructions+=3;NFSU2_TR(0x64e1ba);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64e1bd:{NFSU2_TR(0x64e1bd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e1be:{NFSU2_TR(0x64e1be);
if(r1(R+518)){{goto L64e7ef;}}
}
B64e1c4:L64e1c4:{c.instructions+=2;NFSU2_TR(0x64e1c4);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e1c6:{NFSU2_TR(0x64e1c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e1cbull));
TAIL_STATIC(0x575620u,575);
}
B64e1cb:L64e1cb:{c.instructions+=3;NFSU2_TR(0x64e1cb);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64e1cd:{NFSU2_TR(0x64e1cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64e1ce:{NFSU2_TR(0x64e1ce);
if(r1(R+518)){{goto L64e1dc;}}
}
B64e1d0:L64e1d0:{c.instructions+=2;NFSU2_TR(0x64e1d0);
__builtin_memmove((R+4),(R+0),4);
}
B64e1d2:{NFSU2_TR(0x64e1d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e1d7ull));
TAIL_STATIC(0x6477abu,647);
}
B64e1d7:L64e1d7:{c.instructions+=2;NFSU2_TR(0x64e1d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e1da:{NFSU2_TR(0x64e1da);
{goto L64e1df;}
}
B64e1dc:L64e1dc:{c.instructions+=1;NFSU2_TR(0x64e1dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e1df:L64e1df:{c.instructions+=2;NFSU2_TR(0x64e1df);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64e1e2:{NFSU2_TR(0x64e1e2);
if(r1(R+518)){{goto L64e7ef;}}
}
B64e1e8:L64e1e8:{c.instructions+=2;NFSU2_TR(0x64e1e8);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e1ea:{NFSU2_TR(0x64e1ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e1efull));
TAIL_STATIC(0x575620u,575);
}
B64e1ef:L64e1ef:{c.instructions+=3;NFSU2_TR(0x64e1ef);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64e1f1:{NFSU2_TR(0x64e1f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64e1f2:{NFSU2_TR(0x64e1f2);
if(r1(R+518)){{goto L64e200;}}
}
B64e1f4:L64e1f4:{c.instructions+=2;NFSU2_TR(0x64e1f4);
__builtin_memmove((R+4),(R+0),4);
}
B64e1f6:{NFSU2_TR(0x64e1f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e1fbull));
TAIL_STATIC(0x6477abu,647);
}
B64e1fb:L64e1fb:{c.instructions+=2;NFSU2_TR(0x64e1fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e1fe:{NFSU2_TR(0x64e1fe);
{goto L64e203;}
}
B64e200:L64e200:{c.instructions+=1;NFSU2_TR(0x64e200);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e203:L64e203:{c.instructions+=2;NFSU2_TR(0x64e203);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64e206:{NFSU2_TR(0x64e206);
if(r1(R+518)){{goto L64e7ef;}}
}
B64e20c:L64e20c:{c.instructions+=2;NFSU2_TR(0x64e20c);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e20e:{NFSU2_TR(0x64e20e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e213ull));
TAIL_STATIC(0x575620u,575);
}
B64e213:L64e213:{c.instructions+=3;NFSU2_TR(0x64e213);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64e215:{NFSU2_TR(0x64e215);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64e216:{NFSU2_TR(0x64e216);
if(r1(R+518)){{goto L64e224;}}
}
B64e218:L64e218:{c.instructions+=2;NFSU2_TR(0x64e218);
__builtin_memmove((R+4),(R+0),4);
}
B64e21a:{NFSU2_TR(0x64e21a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e21full));
TAIL_STATIC(0x6477abu,647);
}
B64e21f:L64e21f:{c.instructions+=2;NFSU2_TR(0x64e21f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e222:{NFSU2_TR(0x64e222);
{goto L64e227;}
}
B64e224:L64e224:{c.instructions+=1;NFSU2_TR(0x64e224);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e227:L64e227:{c.instructions+=2;NFSU2_TR(0x64e227);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64e22a:{NFSU2_TR(0x64e22a);
if(r1(R+518)){{goto L64e7ef;}}
}
B64e230:L64e230:{c.instructions+=2;NFSU2_TR(0x64e230);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e232:{NFSU2_TR(0x64e232);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e237ull));
TAIL_STATIC(0x575620u,575);
}
B64e237:L64e237:{c.instructions+=3;NFSU2_TR(0x64e237);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64e239:{NFSU2_TR(0x64e239);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64e23a:{NFSU2_TR(0x64e23a);
if(r1(R+518)){{goto L64e247;}}
}
B64e23c:L64e23c:{c.instructions+=2;NFSU2_TR(0x64e23c);
__builtin_memmove((R+4),(R+0),4);
}
B64e23e:{NFSU2_TR(0x64e23e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e243ull));
TAIL_STATIC(0x64b764u,64b);
}
B64e243:L64e243:{c.instructions+=2;NFSU2_TR(0x64e243);
__builtin_memmove((R+12),(R+0),4);
}
B64e245:{NFSU2_TR(0x64e245);
{goto L64e249;}
}
B64e247:L64e247:{c.instructions+=1;NFSU2_TR(0x64e247);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64e249:L64e249:{c.instructions+=2;NFSU2_TR(0x64e249);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64e24b:{NFSU2_TR(0x64e24b);
if(r1(R+518)){{goto L64e7ef;}}
}
B64e251:L64e251:{c.instructions+=5;NFSU2_TR(0x64e251);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64e254:{NFSU2_TR(0x64e254);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64e257:{NFSU2_TR(0x64e257);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64e259:{NFSU2_TR(0x64e259);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e25c:{NFSU2_TR(0x64e25c);
if(r1(R+518)){{goto L64e7e8;}}
}
B64e262:L64e262:{c.instructions+=2;NFSU2_TR(0x64e262);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xbull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64e266:{NFSU2_TR(0x64e266);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64e7e8;}}
}
B64e26c:L64e26c:{c.instructions+=3;NFSU2_TR(0x64e26c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64e26f:{NFSU2_TR(0x64e26f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64e271:{NFSU2_TR(0x64e271);
if(r1(R+518)){{goto L64e7e8;}}
}
B64e277:L64e277:{c.instructions+=2;NFSU2_TR(0x64e277);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64e27b:{NFSU2_TR(0x64e27b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64e7e8;}}
}
B64e281:L64e281:{c.instructions+=3;NFSU2_TR(0x64e281);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64e284:{NFSU2_TR(0x64e284);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B64e286:{NFSU2_TR(0x64e286);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64e7f4;}}
}
B64e28c:L64e28c:{c.instructions+=4;NFSU2_TR(0x64e28c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+8),(U+0),4);
}
B64e28f:{NFSU2_TR(0x64e28f);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B64e292:{NFSU2_TR(0x64e292);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e295:{NFSU2_TR(0x64e295);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64e7e8;}}
}
B64e29b:L64e29b:{c.instructions+=4;NFSU2_TR(0x64e29b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64e29e:{NFSU2_TR(0x64e29e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64e2a0:{NFSU2_TR(0x64e2a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e2a3:{NFSU2_TR(0x64e2a3);
if(r1(R+518)){{goto L64e7e8;}}
}
B64e2a9:L64e2a9:{c.instructions+=12;NFSU2_TR(0x64e2a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64e2ad:{NFSU2_TR(0x64e2ad);
__builtin_memmove((R+4),(R+0),4);
}
B64e2af:{NFSU2_TR(0x64e2af);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B64e2b2:{NFSU2_TR(0x64e2b2);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x10ull))));
}
B64e2b5:{NFSU2_TR(0x64e2b5);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x8ull))));
}
B64e2b8:{NFSU2_TR(0x64e2b8);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B64e2ba:{NFSU2_TR(0x64e2ba);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B64e2bd:{NFSU2_TR(0x64e2bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e2c0:{NFSU2_TR(0x64e2c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64e2c3:{NFSU2_TR(0x64e2c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64e2c6:{NFSU2_TR(0x64e2c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64e2c8:{NFSU2_TR(0x64e2c8);
if(r1(R+518)){{goto L64e2e4;}}
}
B64e2ca:L64e2ca:{c.instructions+=2;NFSU2_TR(0x64e2ca);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64e2ce:{NFSU2_TR(0x64e2ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64e7e8;}}
}
B64e2d4:L64e2d4:{c.instructions+=2;NFSU2_TR(0x64e2d4);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64e2d8:{NFSU2_TR(0x64e2d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64e7e8;}}
}
B64e2de:L64e2de:{c.instructions+=2;NFSU2_TR(0x64e2de);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64e2e1:{NFSU2_TR(0x64e2e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e2e4:L64e2e4:{c.instructions+=16;NFSU2_TR(0x64e2e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64e2e7:{NFSU2_TR(0x64e2e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+0),(U+0),4);
}
B64e2ea:{NFSU2_TR(0x64e2ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e2eb:{NFSU2_TR(0x64e2eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64e2ee:{NFSU2_TR(0x64e2ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e2ef:{NFSU2_TR(0x64e2ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64e2f2:{NFSU2_TR(0x64e2f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e2f3:{NFSU2_TR(0x64e2f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((R+0),(U+0),4);
}
B64e2f6:{NFSU2_TR(0x64e2f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e2f7:{NFSU2_TR(0x64e2f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64e2fa:{NFSU2_TR(0x64e2fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e2fb:{NFSU2_TR(0x64e2fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64e2fe:{NFSU2_TR(0x64e2fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e2ff:{NFSU2_TR(0x64e2ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64e302:{NFSU2_TR(0x64e302);
__builtin_memmove((R+4),(R+28),4);
}
B64e304:{NFSU2_TR(0x64e304);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e309ull));
TAIL_STATIC(0x647a3fu,647);
}
B64e309:L64e309:{c.instructions+=3;NFSU2_TR(0x64e309);
__builtin_memmove((R+24),(R+0),4);
}
B64e30b:{NFSU2_TR(0x64e30b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B64e30d:{NFSU2_TR(0x64e30d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L64e322;}}
}
B64e30f:L64e30f:{c.instructions+=6;NFSU2_TR(0x64e30f);
u8 U[4];
w4(U+0,u32(0x7af848ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e314:{NFSU2_TR(0x64e314);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e316:{NFSU2_TR(0x64e316);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64e319:{NFSU2_TR(0x64e319);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x28ull))));
}
B64e31c:{NFSU2_TR(0x64e31c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e31d:{NFSU2_TR(0x64e31d);
{goto L64e3f6;}
}
B64e322:L64e322:{c.instructions+=2;NFSU2_TR(0x64e322);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x12ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64e326:{NFSU2_TR(0x64e326);
if(r1(R+518)){{goto L64e7f4;}}
}
B64e32c:L64e32c:{c.instructions+=2;NFSU2_TR(0x64e32c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x11ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64e330:{NFSU2_TR(0x64e330);
if(r1(R+518)){{goto L64e7f4;}}
}
B64e336:L64e336:{c.instructions+=2;NFSU2_TR(0x64e336);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xf30000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64e33d:{NFSU2_TR(0x64e33d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64e3bd;}}
}
B64e33f:L64e33f:{c.instructions+=4;NFSU2_TR(0x64e33f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64e342:{NFSU2_TR(0x64e342);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64e345:{NFSU2_TR(0x64e345);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64e347:{NFSU2_TR(0x64e347);
if(r1(R+518)){{goto L64e7f4;}}
}
B64e34d:L64e34d:{c.instructions+=2;NFSU2_TR(0x64e34d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64e351:{NFSU2_TR(0x64e351);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64e7e8;}}
}
B64e357:L64e357:{c.instructions+=3;NFSU2_TR(0x64e357);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64e35a:{NFSU2_TR(0x64e35a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64e35c:{NFSU2_TR(0x64e35c);
if(r1(R+518)){{goto L64e7e8;}}
}
B64e362:L64e362:{c.instructions+=2;NFSU2_TR(0x64e362);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64e366:{NFSU2_TR(0x64e366);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64e7e8;}}
}
B64e36c:L64e36c:{c.instructions+=3;NFSU2_TR(0x64e36c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64e36f:{NFSU2_TR(0x64e36f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64e371:{NFSU2_TR(0x64e371);
if(r1(R+518)){{goto L64e7e8;}}
}
B64e377:L64e377:{c.instructions+=2;NFSU2_TR(0x64e377);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xeull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64e37b:{NFSU2_TR(0x64e37b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64e7e8;}}
}
B64e381:L64e381:{c.instructions+=2;NFSU2_TR(0x64e381);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e383:{NFSU2_TR(0x64e383);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e388ull));
TAIL_STATIC(0x575620u,575);
}
B64e388:L64e388:{c.instructions+=3;NFSU2_TR(0x64e388);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64e38a:{NFSU2_TR(0x64e38a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64e38b:{NFSU2_TR(0x64e38b);
if(r1(R+518)){{goto L64e393;}}
}
B64e38d:L64e38d:{c.instructions+=2;NFSU2_TR(0x64e38d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64e391:{NFSU2_TR(0x64e391);
{goto L64e395;}
}
B64e393:L64e393:{c.instructions+=1;NFSU2_TR(0x64e393);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64e395:L64e395:{c.instructions+=2;NFSU2_TR(0x64e395);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64e397:{NFSU2_TR(0x64e397);
if(r1(R+518)){{goto L64e7ef;}}
}
B64e39d:L64e39d:{c.instructions+=10;NFSU2_TR(0x64e39d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64e3a0:{NFSU2_TR(0x64e3a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B64e3a2:{NFSU2_TR(0x64e3a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64e3a5:{NFSU2_TR(0x64e3a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e3a8:{NFSU2_TR(0x64e3a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64e3ab:{NFSU2_TR(0x64e3ab);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x358ull))));
}
B64e3b1:{NFSU2_TR(0x64e3b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B64e3b3:{NFSU2_TR(0x64e3b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e3b6:{NFSU2_TR(0x64e3b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B64e3b8:{NFSU2_TR(0x64e3b8);
{goto L64e7f4;}
}
B64e3bd:L64e3bd:{c.instructions+=12;NFSU2_TR(0x64e3bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64e3c0:{NFSU2_TR(0x64e3c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64e3c3:{NFSU2_TR(0x64e3c3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e3c5:{NFSU2_TR(0x64e3c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64e3c8:{NFSU2_TR(0x64e3c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e3c9:{NFSU2_TR(0x64e3c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64e3cc:{NFSU2_TR(0x64e3cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64e3cf:{NFSU2_TR(0x64e3cf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e3d1:{NFSU2_TR(0x64e3d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64e3d4:{NFSU2_TR(0x64e3d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64e3d7:{NFSU2_TR(0x64e3d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64e3da:{NFSU2_TR(0x64e3da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e3dfull));
TAIL_STATIC(0x6481aau,648);
}
B64e3df:L64e3df:{c.instructions+=3;NFSU2_TR(0x64e3df);
__builtin_memmove((R+24),(R+0),4);
}
B64e3e1:{NFSU2_TR(0x64e3e1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B64e3e3:{NFSU2_TR(0x64e3e3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L64e403;}}
}
B64e3e5:L64e3e5:{c.instructions+=6;NFSU2_TR(0x64e3e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64e3e8:{NFSU2_TR(0x64e3e8);
u8 U[4];
w4(U+0,u32(0x7afa00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e3ed:{NFSU2_TR(0x64e3ed);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e3ef:{NFSU2_TR(0x64e3ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64e3f2:{NFSU2_TR(0x64e3f2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
}
B64e3f5:{NFSU2_TR(0x64e3f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e3f6:L64e3f6:{c.instructions+=1;NFSU2_TR(0x64e3f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e3fbull));
TAIL_STATIC(0x64307cu,643);
}
B64e3fb:L64e3fb:{c.instructions+=2;NFSU2_TR(0x64e3fb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B64e3fe:{NFSU2_TR(0x64e3fe);
{goto L64e7f4;}
}
B64e403:L64e403:{c.instructions+=2;NFSU2_TR(0x64e403);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0xaull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B64e407:{NFSU2_TR(0x64e407);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64e627;}}
}
B64e40d:L64e40d:{c.instructions+=2;NFSU2_TR(0x64e40d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0xeull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xeull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64e411:{NFSU2_TR(0x64e411);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L64e627;}}
}
B64e417:L64e417:{c.instructions+=4;NFSU2_TR(0x64e417);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64e41a:{NFSU2_TR(0x64e41a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B64e41c:{NFSU2_TR(0x64e41c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64e41e:{NFSU2_TR(0x64e41e);
if(r1(R+518)){{goto L64e5d7;}}
}
B64e424:L64e424:{c.instructions+=2;NFSU2_TR(0x64e424);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64e427:{NFSU2_TR(0x64e427);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64e7e8;}}
}
B64e42d:L64e42d:{c.instructions+=3;NFSU2_TR(0x64e42d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64e430:{NFSU2_TR(0x64e430);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64e432:{NFSU2_TR(0x64e432);
if(r1(R+518)){{goto L64e7e8;}}
}
B64e438:L64e438:{c.instructions+=2;NFSU2_TR(0x64e438);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64e43c:{NFSU2_TR(0x64e43c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64e7e8;}}
}
B64e442:L64e442:{c.instructions+=3;NFSU2_TR(0x64e442);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64e445:{NFSU2_TR(0x64e445);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64e447:{NFSU2_TR(0x64e447);
if(r1(R+518)){{goto L64e7e8;}}
}
B64e44d:L64e44d:{c.instructions+=2;NFSU2_TR(0x64e44d);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xeull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64e451:{NFSU2_TR(0x64e451);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64e7e8;}}
}
B64e457:L64e457:{c.instructions+=2;NFSU2_TR(0x64e457);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e45a:{NFSU2_TR(0x64e45a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e45d:L64e45d:{c.instructions+=3;NFSU2_TR(0x64e45d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64e460:{NFSU2_TR(0x64e460);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
}
B64e463:{NFSU2_TR(0x64e463);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64e468;}}
}
B64e465:L64e465:{c.instructions+=2;NFSU2_TR(0x64e465);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64e467:{NFSU2_TR(0x64e467);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B64e468:L64e468:{c.instructions+=2;NFSU2_TR(0x64e468);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B64e46b:{NFSU2_TR(0x64e46b);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64e574;}}
}
B64e471:L64e471:{c.instructions+=7;NFSU2_TR(0x64e471);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64e474:{NFSU2_TR(0x64e474);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64e477:{NFSU2_TR(0x64e477);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64e47b:{NFSU2_TR(0x64e47b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64e481:{NFSU2_TR(0x64e481);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e484:{NFSU2_TR(0x64e484);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64e487:{NFSU2_TR(0x64e487);
{goto L64e4a8;}
}
B64e489:L64e489:{c.instructions+=6;NFSU2_TR(0x64e489);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64e48c:{NFSU2_TR(0x64e48c);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e491:{NFSU2_TR(0x64e491);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B64e494:{NFSU2_TR(0x64e494);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e495:{NFSU2_TR(0x64e495);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e496:{NFSU2_TR(0x64e496);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e49bull));
TAIL_STATIC(0x64ba92u,64b);
}
B64e49b:L64e49b:{c.instructions+=3;NFSU2_TR(0x64e49b);
__builtin_memmove((R+24),(R+0),4);
}
B64e49d:{NFSU2_TR(0x64e49d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B64e49f:{NFSU2_TR(0x64e49f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64e5c7;}}
}
B64e4a5:L64e4a5:{c.instructions+=1;NFSU2_TR(0x64e4a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64e4a8:L64e4a8:{c.instructions+=2;NFSU2_TR(0x64e4a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64e4aa:{NFSU2_TR(0x64e4aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64e489u);}goto L64e489;}}
}
B64e4ac:L64e4ac:{c.instructions+=5;NFSU2_TR(0x64e4ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64e4af:{NFSU2_TR(0x64e4af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B64e4b2:{NFSU2_TR(0x64e4b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64e4b4:{NFSU2_TR(0x64e4b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e4b7:{NFSU2_TR(0x64e4b7);
if(r1(R+518)){{goto L64e4f7;}}
}
B64e4b9:L64e4b9:{c.instructions+=1;NFSU2_TR(0x64e4b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64e4bc:L64e4bc:{c.instructions+=11;NFSU2_TR(0x64e4bc);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e4c1:{NFSU2_TR(0x64e4c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64e4c4:{NFSU2_TR(0x64e4c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64e4c7:{NFSU2_TR(0x64e4c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64e4ca:{NFSU2_TR(0x64e4ca);
__builtin_memmove((R+4),(R+28),4);
}
B64e4cc:{NFSU2_TR(0x64e4cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e4cd:{NFSU2_TR(0x64e4cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64e4d0:{NFSU2_TR(0x64e4d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x328ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64e4d6:{NFSU2_TR(0x64e4d6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e4d8:{NFSU2_TR(0x64e4d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64e4db:{NFSU2_TR(0x64e4db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e4e0ull));
TAIL_STATIC(0x6486d1u,648);
}
B64e4e0:L64e4e0:{c.instructions+=3;NFSU2_TR(0x64e4e0);
__builtin_memmove((R+24),(R+0),4);
}
B64e4e2:{NFSU2_TR(0x64e4e2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B64e4e4:{NFSU2_TR(0x64e4e4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64e5c7;}}
}
B64e4ea:L64e4ea:{c.instructions+=5;NFSU2_TR(0x64e4ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64e4ed:{NFSU2_TR(0x64e4ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64e4f0:{NFSU2_TR(0x64e4f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64e4f2:{NFSU2_TR(0x64e4f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e4f5:{NFSU2_TR(0x64e4f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64e4bcu);}goto L64e4bc;}}
}
B64e4f7:L64e4f7:{c.instructions+=12;NFSU2_TR(0x64e4f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64e4fa:{NFSU2_TR(0x64e4fa);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B64e4fc:{NFSU2_TR(0x64e4fc);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B64e4fe:{NFSU2_TR(0x64e4fe);
w4(R+0,u32(~u32(r4(R+0))));
}
B64e500:{NFSU2_TR(0x64e500);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64e503:{NFSU2_TR(0x64e503);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B64e505:{NFSU2_TR(0x64e505);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64e508:{NFSU2_TR(0x64e508);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e509:{NFSU2_TR(0x64e509);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e50b:{NFSU2_TR(0x64e50b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64e50e:{NFSU2_TR(0x64e50e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e50f:{NFSU2_TR(0x64e50f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e514ull));
TAIL_STATIC(0x647827u,647);
}
B64e514:L64e514:{c.instructions+=3;NFSU2_TR(0x64e514);
__builtin_memmove((R+24),(R+0),4);
}
B64e516:{NFSU2_TR(0x64e516);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B64e518:{NFSU2_TR(0x64e518);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64e5c7;}}
}
B64e51e:L64e51e:{c.instructions+=3;NFSU2_TR(0x64e51e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64e521:{NFSU2_TR(0x64e521);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64e524:{NFSU2_TR(0x64e524);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e529ull));
TAIL_STATIC(0x6479bbu,647);
}
B64e529:L64e529:{c.instructions+=3;NFSU2_TR(0x64e529);
__builtin_memmove((R+24),(R+0),4);
}
B64e52b:{NFSU2_TR(0x64e52b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B64e52d:{NFSU2_TR(0x64e52d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64e5c7;}}
}
B64e533:L64e533:{c.instructions+=2;NFSU2_TR(0x64e533);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e535:{NFSU2_TR(0x64e535);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e53aull));
TAIL_STATIC(0x575620u,575);
}
B64e53a:L64e53a:{c.instructions+=3;NFSU2_TR(0x64e53a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64e53c:{NFSU2_TR(0x64e53c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64e53d:{NFSU2_TR(0x64e53d);
if(r1(R+518)){{goto L64e54b;}}
}
B64e53f:L64e53f:{c.instructions+=2;NFSU2_TR(0x64e53f);
__builtin_memmove((R+4),(R+0),4);
}
B64e541:{NFSU2_TR(0x64e541);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e546ull));
TAIL_STATIC(0x6477abu,647);
}
B64e546:L64e546:{c.instructions+=2;NFSU2_TR(0x64e546);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e549:{NFSU2_TR(0x64e549);
{goto L64e54f;}
}
B64e54b:L64e54b:{c.instructions+=1;NFSU2_TR(0x64e54b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64e54f:L64e54f:{c.instructions+=3;NFSU2_TR(0x64e54f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64e553:{NFSU2_TR(0x64e553);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64e559:{NFSU2_TR(0x64e559);
if(r1(R+518)){{goto L64e5c0;}}
}
B64e55b:L64e55b:{c.instructions+=1;NFSU2_TR(0x64e55b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e560ull));
TAIL_STATIC(0x64772au,647);
}
B64e560:L64e560:{c.instructions+=6;NFSU2_TR(0x64e560);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64e563:{NFSU2_TR(0x64e563);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64e566:{NFSU2_TR(0x64e566);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64e569:{NFSU2_TR(0x64e569);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64e56b:{NFSU2_TR(0x64e56b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e56e:{NFSU2_TR(0x64e56e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64e45du);}goto L64e45d;}}
}
B64e574:L64e574:{c.instructions+=3;NFSU2_TR(0x64e574);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64e577:{NFSU2_TR(0x64e577);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64e57a:{NFSU2_TR(0x64e57a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e57full));
TAIL_STATIC(0x6479bbu,647);
}
B64e57f:L64e57f:{c.instructions+=3;NFSU2_TR(0x64e57f);
__builtin_memmove((R+24),(R+0),4);
}
B64e581:{NFSU2_TR(0x64e581);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B64e583:{NFSU2_TR(0x64e583);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64e7f4;}}
}
B64e589:L64e589:{c.instructions+=4;NFSU2_TR(0x64e589);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64e58c:{NFSU2_TR(0x64e58c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64e590:{NFSU2_TR(0x64e590);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64e592:{NFSU2_TR(0x64e592);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64e619;}}
}
B64e598:L64e598:{c.instructions+=2;NFSU2_TR(0x64e598);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B64e59b:{NFSU2_TR(0x64e59b);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64e619;}}
}
B64e59d:L64e59d:{c.instructions+=7;NFSU2_TR(0x64e59d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64e5a0:{NFSU2_TR(0x64e5a0);
u8 U[4];
w4(U+0,u32(0x7af9c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e5a5:{NFSU2_TR(0x64e5a5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e5a7:{NFSU2_TR(0x64e5a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64e5aa:{NFSU2_TR(0x64e5aa);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
}
B64e5ad:{NFSU2_TR(0x64e5ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e5ae:{NFSU2_TR(0x64e5ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e5b3ull));
TAIL_STATIC(0x64307cu,643);
}
B64e5b3:L64e5b3:{c.instructions+=3;NFSU2_TR(0x64e5b3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B64e5b6:{NFSU2_TR(0x64e5b6);
w4(R+24,u32(0x80004005ull));
}
B64e5bb:{NFSU2_TR(0x64e5bb);
{goto L64e802;}
}
B64e5c0:L64e5c0:{c.instructions+=2;NFSU2_TR(0x64e5c0);
w4(R+24,u32(0x8007000eull));
}
B64e5c5:{NFSU2_TR(0x64e5c5);
{goto L64e5cd;}
}
B64e5c7:L64e5c7:{c.instructions+=1;NFSU2_TR(0x64e5c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64e5cd:L64e5cd:{c.instructions+=1;NFSU2_TR(0x64e5cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e5d2ull));
TAIL_STATIC(0x64772au,647);
}
B64e5d2:L64e5d2:{c.instructions+=1;NFSU2_TR(0x64e5d2);
{goto L64e7f4;}
}
B64e5d7:L64e5d7:{c.instructions+=2;NFSU2_TR(0x64e5d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e5da:{NFSU2_TR(0x64e5da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e5dd:L64e5dd:{c.instructions+=3;NFSU2_TR(0x64e5dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64e5e0:{NFSU2_TR(0x64e5e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
}
B64e5e3:{NFSU2_TR(0x64e5e3);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64e5e8;}}
}
B64e5e5:L64e5e5:{c.instructions+=2;NFSU2_TR(0x64e5e5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64e5e7:{NFSU2_TR(0x64e5e7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B64e5e8:L64e5e8:{c.instructions+=2;NFSU2_TR(0x64e5e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B64e5eb:{NFSU2_TR(0x64e5eb);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64e574u);}goto L64e574;}}
}
B64e5ed:L64e5ed:{c.instructions+=12;NFSU2_TR(0x64e5ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64e5f0:{NFSU2_TR(0x64e5f0);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B64e5f2:{NFSU2_TR(0x64e5f2);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B64e5f4:{NFSU2_TR(0x64e5f4);
w4(R+0,u32(~u32(r4(R+0))));
}
B64e5f6:{NFSU2_TR(0x64e5f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64e5f9:{NFSU2_TR(0x64e5f9);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B64e5fb:{NFSU2_TR(0x64e5fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64e5fe:{NFSU2_TR(0x64e5fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e5ff:{NFSU2_TR(0x64e5ff);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e601:{NFSU2_TR(0x64e601);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64e604:{NFSU2_TR(0x64e604);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e605:{NFSU2_TR(0x64e605);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e60aull));
TAIL_STATIC(0x647827u,647);
}
B64e60a:L64e60a:{c.instructions+=3;NFSU2_TR(0x64e60a);
__builtin_memmove((R+24),(R+0),4);
}
B64e60c:{NFSU2_TR(0x64e60c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B64e60e:{NFSU2_TR(0x64e60e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64e7f4;}}
}
B64e614:L64e614:{c.instructions+=2;NFSU2_TR(0x64e614);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64e617:{NFSU2_TR(0x64e617);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64e5ddu);}goto L64e5dd;}
}
B64e619:L64e619:{c.instructions+=4;NFSU2_TR(0x64e619);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64e61c:{NFSU2_TR(0x64e61c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64e61f:{NFSU2_TR(0x64e61f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x334ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B64e625:{NFSU2_TR(0x64e625);
{goto L64e68e;}
}
B64e627:L64e627:{c.instructions+=2;NFSU2_TR(0x64e627);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64e62a:{NFSU2_TR(0x64e62a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e62full));
TAIL_STATIC(0x575620u,575);
}
B64e62f:L64e62f:{c.instructions+=4;NFSU2_TR(0x64e62f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64e631:{NFSU2_TR(0x64e631);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64e632:{NFSU2_TR(0x64e632);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e635:{NFSU2_TR(0x64e635);
if(r1(R+518)){{goto L64e7ef;}}
}
B64e63b:L64e63b:{c.instructions+=6;NFSU2_TR(0x64e63b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64e63e:{NFSU2_TR(0x64e63e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64e641:{NFSU2_TR(0x64e641);
__builtin_memmove((R+24),(R+4),4);
}
B64e643:{NFSU2_TR(0x64e643);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B64e646:{NFSU2_TR(0x64e646);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64e648:{NFSU2_TR(0x64e648);
__builtin_memmove((R+28),(R+8),4);
}
B64e64a:L64e64a:{c.instructions+=1;NFSU2_TR(0x64e64a);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L64e64c;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64e64au);}goto L64e64a;}
}
B64e64c:L64e64c:{c.instructions+=2;NFSU2_TR(0x64e64c);
__builtin_memmove((R+4),(R+24),4);
}
B64e64e:{NFSU2_TR(0x64e64e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B64e651:L64e651:{c.instructions+=1;NFSU2_TR(0x64e651);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L64e653;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64e651u);}goto L64e651;}
}
B64e653:L64e653:{c.instructions+=7;NFSU2_TR(0x64e653);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64e656:{NFSU2_TR(0x64e656);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+0),(U+0),4);
}
B64e659:{NFSU2_TR(0x64e659);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e65a:{NFSU2_TR(0x64e65a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64e65d:{NFSU2_TR(0x64e65d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64e660:{NFSU2_TR(0x64e660);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e663:{NFSU2_TR(0x64e663);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e668ull));
TAIL_STATIC(0x6480b0u,648);
}
B64e668:L64e668:{c.instructions+=3;NFSU2_TR(0x64e668);
__builtin_memmove((R+24),(R+0),4);
}
B64e66a:{NFSU2_TR(0x64e66a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B64e66c:{NFSU2_TR(0x64e66c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64e7f4;}}
}
B64e672:L64e672:{c.instructions+=6;NFSU2_TR(0x64e672);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64e675:{NFSU2_TR(0x64e675);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64e678:{NFSU2_TR(0x64e678);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e679:{NFSU2_TR(0x64e679);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64e67c:{NFSU2_TR(0x64e67c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64e67f:{NFSU2_TR(0x64e67f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e684ull));
TAIL_STATIC(0x647827u,647);
}
B64e684:L64e684:{c.instructions+=3;NFSU2_TR(0x64e684);
__builtin_memmove((R+24),(R+0),4);
}
B64e686:{NFSU2_TR(0x64e686);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B64e688:{NFSU2_TR(0x64e688);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64e7f4;}}
}
B64e68e:L64e68e:{c.instructions+=5;NFSU2_TR(0x64e68e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64e692:{NFSU2_TR(0x64e692);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64e695:{NFSU2_TR(0x64e695);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64e698:{NFSU2_TR(0x64e698);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64e69a:{NFSU2_TR(0x64e69a);
if(r1(R+518)){{goto L64e6fc;}}
}
B64e69c:L64e69c:{c.instructions+=1;NFSU2_TR(0x64e69c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64e69f:L64e69f:{c.instructions+=2;NFSU2_TR(0x64e69f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64e6a3:{NFSU2_TR(0x64e6a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64e7e8;}}
}
B64e6a9:L64e6a9:{c.instructions+=3;NFSU2_TR(0x64e6a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64e6ac:{NFSU2_TR(0x64e6ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64e6ae:{NFSU2_TR(0x64e6ae);
if(r1(R+518)){{goto L64e7e8;}}
}
B64e6b4:L64e6b4:{c.instructions+=2;NFSU2_TR(0x64e6b4);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64e6b8:{NFSU2_TR(0x64e6b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64e7e8;}}
}
B64e6be:L64e6be:{c.instructions+=2;NFSU2_TR(0x64e6be);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64e6c2:{NFSU2_TR(0x64e6c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64e7d2;}}
}
B64e6c8:L64e6c8:{c.instructions+=7;NFSU2_TR(0x64e6c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64e6cb:{NFSU2_TR(0x64e6cb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e6cc:{NFSU2_TR(0x64e6cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64e6cf:{NFSU2_TR(0x64e6cf);
__builtin_memmove((R+4),(R+28),4);
}
B64e6d1:{NFSU2_TR(0x64e6d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64e6d4:{NFSU2_TR(0x64e6d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e6d5:{NFSU2_TR(0x64e6d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e6daull));
TAIL_STATIC(0x64c13du,64c);
}
B64e6da:L64e6da:{c.instructions+=2;NFSU2_TR(0x64e6da);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B64e6dc:{NFSU2_TR(0x64e6dc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L64e6e7;}}
}
B64e6de:L64e6de:{c.instructions+=2;NFSU2_TR(0x64e6de);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B64e6e2:{NFSU2_TR(0x64e6e2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64e6e7;}}
}
B64e6e4:L64e6e4:{c.instructions+=1;NFSU2_TR(0x64e6e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e6e7:L64e6e7:{c.instructions+=4;NFSU2_TR(0x64e6e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64e6ea:{NFSU2_TR(0x64e6ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64e6ed:{NFSU2_TR(0x64e6ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64e6ef:{NFSU2_TR(0x64e6ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64e69fu);}goto L64e69f;}}
}
B64e6f1:L64e6f1:{c.instructions+=3;NFSU2_TR(0x64e6f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64e6f4:{NFSU2_TR(0x64e6f4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B64e6f6:{NFSU2_TR(0x64e6f6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64e7f4;}}
}
B64e6fc:L64e6fc:{c.instructions+=3;NFSU2_TR(0x64e6fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64e6ff:{NFSU2_TR(0x64e6ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64e702:{NFSU2_TR(0x64e702);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e707ull));
TAIL_STATIC(0x6479bbu,647);
}
B64e707:L64e707:{c.instructions+=3;NFSU2_TR(0x64e707);
__builtin_memmove((R+24),(R+0),4);
}
B64e709:{NFSU2_TR(0x64e709);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B64e70b:{NFSU2_TR(0x64e70b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64e7f4;}}
}
B64e711:L64e711:{c.instructions+=5;NFSU2_TR(0x64e711);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64e714:{NFSU2_TR(0x64e714);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64e718:{NFSU2_TR(0x64e718);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e71a:{NFSU2_TR(0x64e71a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64e71d:{NFSU2_TR(0x64e71d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e722ull));
TAIL_STATIC(0x647930u,647);
}
B64e722:L64e722:{c.instructions+=3;NFSU2_TR(0x64e722);
__builtin_memmove((R+24),(R+0),4);
}
B64e724:{NFSU2_TR(0x64e724);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B64e726:{NFSU2_TR(0x64e726);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64e7f4;}}
}
B64e72c:L64e72c:{c.instructions+=5;NFSU2_TR(0x64e72c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64e72f:{NFSU2_TR(0x64e72f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64e732:{NFSU2_TR(0x64e732);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e734:{NFSU2_TR(0x64e734);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e735:{NFSU2_TR(0x64e735);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e73aull));
TAIL_STATIC(0x647930u,647);
}
B64e73a:L64e73a:{c.instructions+=3;NFSU2_TR(0x64e73a);
__builtin_memmove((R+24),(R+0),4);
}
B64e73c:{NFSU2_TR(0x64e73c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B64e73e:{NFSU2_TR(0x64e73e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64e7f4;}}
}
B64e744:L64e744:{c.instructions+=7;NFSU2_TR(0x64e744);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64e747:{NFSU2_TR(0x64e747);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64e74a:{NFSU2_TR(0x64e74a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e74b:{NFSU2_TR(0x64e74b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e74d:{NFSU2_TR(0x64e74d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64e750:{NFSU2_TR(0x64e750);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e751:{NFSU2_TR(0x64e751);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e756ull));
TAIL_STATIC(0x647827u,647);
}
B64e756:L64e756:{c.instructions+=3;NFSU2_TR(0x64e756);
__builtin_memmove((R+24),(R+0),4);
}
B64e758:{NFSU2_TR(0x64e758);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B64e75a:{NFSU2_TR(0x64e75a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64e7f4;}}
}
B64e760:L64e760:{c.instructions+=6;NFSU2_TR(0x64e760);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64e763:{NFSU2_TR(0x64e763);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e765:{NFSU2_TR(0x64e765);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e767:{NFSU2_TR(0x64e767);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64e76a:{NFSU2_TR(0x64e76a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e76b:{NFSU2_TR(0x64e76b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e770ull));
TAIL_STATIC(0x647827u,647);
}
B64e770:L64e770:{c.instructions+=3;NFSU2_TR(0x64e770);
__builtin_memmove((R+24),(R+0),4);
}
B64e772:{NFSU2_TR(0x64e772);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B64e774:{NFSU2_TR(0x64e774);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64e7f4;}}
}
B64e776:L64e776:{c.instructions+=3;NFSU2_TR(0x64e776);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64e779:{NFSU2_TR(0x64e779);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64e77c:{NFSU2_TR(0x64e77c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e781ull));
TAIL_STATIC(0x6479bbu,647);
}
B64e781:L64e781:{c.instructions+=3;NFSU2_TR(0x64e781);
__builtin_memmove((R+24),(R+0),4);
}
B64e783:{NFSU2_TR(0x64e783);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B64e785:{NFSU2_TR(0x64e785);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64e7f4;}}
}
B64e787:L64e787:{c.instructions+=24;NFSU2_TR(0x64e787);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64e78a:{NFSU2_TR(0x64e78a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64e78d:{NFSU2_TR(0x64e78d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e790:{NFSU2_TR(0x64e790);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64e793:{NFSU2_TR(0x64e793);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64e797:{NFSU2_TR(0x64e797);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e79a:{NFSU2_TR(0x64e79a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64e79d:{NFSU2_TR(0x64e79d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e7a0:{NFSU2_TR(0x64e7a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64e7a3:{NFSU2_TR(0x64e7a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e7a6:{NFSU2_TR(0x64e7a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64e7a9:{NFSU2_TR(0x64e7a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e7ac:{NFSU2_TR(0x64e7ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e7af:{NFSU2_TR(0x64e7af);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34cull))));
__builtin_memmove((R+0),(U+0),4);
}
B64e7b5:{NFSU2_TR(0x64e7b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B64e7b7:{NFSU2_TR(0x64e7b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e7ba:{NFSU2_TR(0x64e7ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64e7bd:{NFSU2_TR(0x64e7bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64e7c0:{NFSU2_TR(0x64e7c0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B64e7c3:{NFSU2_TR(0x64e7c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e7c6:{NFSU2_TR(0x64e7c6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B64e7c8:{NFSU2_TR(0x64e7c8);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64e7ca:{NFSU2_TR(0x64e7ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x328ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64e7d0:{NFSU2_TR(0x64e7d0);
{goto L64e7f4;}
}
B64e7d2:L64e7d2:{c.instructions+=6;NFSU2_TR(0x64e7d2);
u8 U[4];
w4(U+0,u32(0x7af984ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e7d7:{NFSU2_TR(0x64e7d7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e7d9:{NFSU2_TR(0x64e7d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64e7dc:{NFSU2_TR(0x64e7dc);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x28ull))));
}
B64e7df:{NFSU2_TR(0x64e7df);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e7e0:{NFSU2_TR(0x64e7e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e7e5ull));
TAIL_STATIC(0x64307cu,643);
}
B64e7e5:L64e7e5:{c.instructions+=1;NFSU2_TR(0x64e7e5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B64e7e8:L64e7e8:{c.instructions+=2;NFSU2_TR(0x64e7e8);
w4(R+24,u32(0x80004005ull));
}
B64e7ed:{NFSU2_TR(0x64e7ed);
{goto L64e7f4;}
}
B64e7ef:L64e7ef:{c.instructions+=1;NFSU2_TR(0x64e7ef);
w4(R+24,u32(0x8007000eull));
}
B64e7f4:L64e7f4:{c.instructions+=3;NFSU2_TR(0x64e7f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64e7f7:{NFSU2_TR(0x64e7f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64e7f9:{NFSU2_TR(0x64e7f9);
if(r1(R+518)){{goto L64e802;}}
}
B64e7fb:L64e7fb:{c.instructions+=2;NFSU2_TR(0x64e7fb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e7fd:{NFSU2_TR(0x64e7fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e802ull));
TAIL_STATIC(0x647806u,647);
}
B64e802:L64e802:{c.instructions+=4;NFSU2_TR(0x64e802);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64e805:{NFSU2_TR(0x64e805);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64e807:{NFSU2_TR(0x64e807);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64e808:{NFSU2_TR(0x64e808);
if(r1(R+518)){{goto L64e811;}}
}
B64e80a:L64e80a:{c.instructions+=2;NFSU2_TR(0x64e80a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e80c:{NFSU2_TR(0x64e80c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e811ull));
TAIL_STATIC(0x647806u,647);
}
B64e811:L64e811:{c.instructions+=3;NFSU2_TR(0x64e811);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64e814:{NFSU2_TR(0x64e814);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64e816:{NFSU2_TR(0x64e816);
if(r1(R+518)){{goto L64e81f;}}
}
B64e818:L64e818:{c.instructions+=2;NFSU2_TR(0x64e818);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e81a:{NFSU2_TR(0x64e81a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e81full));
TAIL_STATIC(0x647806u,647);
}
B64e81f:L64e81f:{c.instructions+=3;NFSU2_TR(0x64e81f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64e822:{NFSU2_TR(0x64e822);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64e824:{NFSU2_TR(0x64e824);
if(r1(R+518)){{goto L64e82d;}}
}
B64e826:L64e826:{c.instructions+=2;NFSU2_TR(0x64e826);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e828:{NFSU2_TR(0x64e828);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e82dull));
TAIL_STATIC(0x647806u,647);
}
B64e82d:L64e82d:{c.instructions+=2;NFSU2_TR(0x64e82d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64e82f:{NFSU2_TR(0x64e82f);
if(r1(R+518)){{goto L64e83a;}}
}
B64e831:L64e831:{c.instructions+=3;NFSU2_TR(0x64e831);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e833:{NFSU2_TR(0x64e833);
__builtin_memmove((R+4),(R+12),4);
}
B64e835:{NFSU2_TR(0x64e835);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e83aull));
TAIL_STATIC(0x64c0d4u,64c);
}
B64e83a:L64e83a:{c.instructions+=2;NFSU2_TR(0x64e83a);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
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
B64e83e:{NFSU2_TR(0x64e83e);
if(r1(R+518)){{goto L64e849;}}
}
B64e840:L64e840:{c.instructions+=2;NFSU2_TR(0x64e840);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64e843:{NFSU2_TR(0x64e843);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e848ull));
TAIL_STATIC(0x575630u,575);
}
B64e848:L64e848:{c.instructions+=1;NFSU2_TR(0x64e848);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64e849:L64e849:{c.instructions+=5;NFSU2_TR(0x64e849);
__builtin_memmove((R+0),(R+24),4);
}
B64e84b:{NFSU2_TR(0x64e84b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64e84c:{NFSU2_TR(0x64e84c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64e84d:{NFSU2_TR(0x64e84d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64e84e:{NFSU2_TR(0x64e84e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64e851:L64e851:{c.instructions+=15;NFSU2_TR(0x64e851);
__builtin_memmove((R+28),(R+28),4);
}
B64e853:{NFSU2_TR(0x64e853);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e854:{NFSU2_TR(0x64e854);
__builtin_memmove((R+20),(R+16),4);
}
B64e856:{NFSU2_TR(0x64e856);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x48ull))));
}
B64e859:{NFSU2_TR(0x64e859);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e85a:{NFSU2_TR(0x64e85a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e85b:{NFSU2_TR(0x64e85b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64e85d:{NFSU2_TR(0x64e85d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e85e:{NFSU2_TR(0x64e85e);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e860:{NFSU2_TR(0x64e860);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e863:{NFSU2_TR(0x64e863);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e866:{NFSU2_TR(0x64e866);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e869:{NFSU2_TR(0x64e869);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e86c:{NFSU2_TR(0x64e86c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e86f:{NFSU2_TR(0x64e86f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e874ull));
TAIL_STATIC(0x575620u,575);
}
B64e874:L64e874:{c.instructions+=3;NFSU2_TR(0x64e874);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64e876:{NFSU2_TR(0x64e876);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64e877:{NFSU2_TR(0x64e877);
if(r1(R+518)){{goto L64e885;}}
}
B64e879:L64e879:{c.instructions+=2;NFSU2_TR(0x64e879);
__builtin_memmove((R+4),(R+0),4);
}
B64e87b:{NFSU2_TR(0x64e87b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e880ull));
TAIL_STATIC(0x6477abu,647);
}
B64e880:L64e880:{c.instructions+=2;NFSU2_TR(0x64e880);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e883:{NFSU2_TR(0x64e883);
{goto L64e888;}
}
B64e885:L64e885:{c.instructions+=1;NFSU2_TR(0x64e885);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e888:L64e888:{c.instructions+=2;NFSU2_TR(0x64e888);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64e88b:{NFSU2_TR(0x64e88b);
if(r1(R+518)){{goto L64ea8a;}}
}
B64e891:L64e891:{c.instructions+=2;NFSU2_TR(0x64e891);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e893:{NFSU2_TR(0x64e893);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e898ull));
TAIL_STATIC(0x575620u,575);
}
B64e898:L64e898:{c.instructions+=3;NFSU2_TR(0x64e898);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64e89a:{NFSU2_TR(0x64e89a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64e89b:{NFSU2_TR(0x64e89b);
if(r1(R+518)){{goto L64e8a9;}}
}
B64e89d:L64e89d:{c.instructions+=2;NFSU2_TR(0x64e89d);
__builtin_memmove((R+4),(R+0),4);
}
B64e89f:{NFSU2_TR(0x64e89f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e8a4ull));
TAIL_STATIC(0x6477abu,647);
}
B64e8a4:L64e8a4:{c.instructions+=2;NFSU2_TR(0x64e8a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e8a7:{NFSU2_TR(0x64e8a7);
{goto L64e8ac;}
}
B64e8a9:L64e8a9:{c.instructions+=1;NFSU2_TR(0x64e8a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e8ac:L64e8ac:{c.instructions+=2;NFSU2_TR(0x64e8ac);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64e8af:{NFSU2_TR(0x64e8af);
if(r1(R+518)){{goto L64ea8a;}}
}
B64e8b5:L64e8b5:{c.instructions+=2;NFSU2_TR(0x64e8b5);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e8b7:{NFSU2_TR(0x64e8b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e8bcull));
TAIL_STATIC(0x575620u,575);
}
B64e8bc:L64e8bc:{c.instructions+=3;NFSU2_TR(0x64e8bc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64e8be:{NFSU2_TR(0x64e8be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64e8bf:{NFSU2_TR(0x64e8bf);
if(r1(R+518)){{goto L64e8cd;}}
}
B64e8c1:L64e8c1:{c.instructions+=2;NFSU2_TR(0x64e8c1);
__builtin_memmove((R+4),(R+0),4);
}
B64e8c3:{NFSU2_TR(0x64e8c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e8c8ull));
TAIL_STATIC(0x64b6ceu,64b);
}
B64e8c8:L64e8c8:{c.instructions+=2;NFSU2_TR(0x64e8c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e8cb:{NFSU2_TR(0x64e8cb);
{goto L64e8d0;}
}
B64e8cd:L64e8cd:{c.instructions+=1;NFSU2_TR(0x64e8cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e8d0:L64e8d0:{c.instructions+=2;NFSU2_TR(0x64e8d0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64e8d3:{NFSU2_TR(0x64e8d3);
if(r1(R+518)){{goto L64ea8a;}}
}
B64e8d9:L64e8d9:{c.instructions+=5;NFSU2_TR(0x64e8d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64e8dc:{NFSU2_TR(0x64e8dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64e8df:{NFSU2_TR(0x64e8df);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64e8e1:{NFSU2_TR(0x64e8e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e8e4:{NFSU2_TR(0x64e8e4);
if(r1(R+518)){{goto L64e8fc;}}
}
B64e8e6:L64e8e6:{c.instructions+=2;NFSU2_TR(0x64e8e6);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64e8ea:{NFSU2_TR(0x64e8ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64e974;}}
}
B64e8f0:L64e8f0:{c.instructions+=2;NFSU2_TR(0x64e8f0);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64e8f4:{NFSU2_TR(0x64e8f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64e974;}}
}
B64e8f6:L64e8f6:{c.instructions+=2;NFSU2_TR(0x64e8f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64e8f9:{NFSU2_TR(0x64e8f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e8fc:L64e8fc:{c.instructions+=5;NFSU2_TR(0x64e8fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64e8ff:{NFSU2_TR(0x64e8ff);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
}
B64e902:{NFSU2_TR(0x64e902);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B64e904:{NFSU2_TR(0x64e904);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64e907:{NFSU2_TR(0x64e907);
{goto L64e94f;}
}
B64e909:L64e909:{c.instructions+=2;NFSU2_TR(0x64e909);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64e90d:{NFSU2_TR(0x64e90d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64e974;}}
}
B64e90f:L64e90f:{c.instructions+=3;NFSU2_TR(0x64e90f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64e912:{NFSU2_TR(0x64e912);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64e914:{NFSU2_TR(0x64e914);
if(r1(R+518)){{goto L64e974;}}
}
B64e916:L64e916:{c.instructions+=2;NFSU2_TR(0x64e916);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64e91a:{NFSU2_TR(0x64e91a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64e974;}}
}
B64e91c:L64e91c:{c.instructions+=2;NFSU2_TR(0x64e91c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64e920:{NFSU2_TR(0x64e920);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64e95e;}}
}
B64e922:L64e922:{c.instructions+=8;NFSU2_TR(0x64e922);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64e925:{NFSU2_TR(0x64e925);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x28ull))));
}
B64e928:{NFSU2_TR(0x64e928);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e929:{NFSU2_TR(0x64e929);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64e92c:{NFSU2_TR(0x64e92c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64e92f:{NFSU2_TR(0x64e92f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64e932:{NFSU2_TR(0x64e932);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e933:{NFSU2_TR(0x64e933);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e938ull));
TAIL_STATIC(0x64c13du,64c);
}
B64e938:L64e938:{c.instructions+=2;NFSU2_TR(0x64e938);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B64e93a:{NFSU2_TR(0x64e93a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L64e944;}}
}
B64e93c:L64e93c:{c.instructions+=2;NFSU2_TR(0x64e93c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+12)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B64e93f:{NFSU2_TR(0x64e93f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64e944;}}
}
B64e941:L64e941:{c.instructions+=1;NFSU2_TR(0x64e941);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e944:L64e944:{c.instructions+=4;NFSU2_TR(0x64e944);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64e947:{NFSU2_TR(0x64e947);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
}
B64e94a:{NFSU2_TR(0x64e94a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B64e94c:{NFSU2_TR(0x64e94c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64e94f:L64e94f:{c.instructions+=2;NFSU2_TR(0x64e94f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64e951:{NFSU2_TR(0x64e951);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64e909u);}goto L64e909;}}
}
B64e953:L64e953:{c.instructions+=4;NFSU2_TR(0x64e953);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64e956:{NFSU2_TR(0x64e956);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64e959:{NFSU2_TR(0x64e959);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e95c:{NFSU2_TR(0x64e95c);
{goto L64e99c;}
}
B64e95e:L64e95e:{c.instructions+=7;NFSU2_TR(0x64e95e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64e961:{NFSU2_TR(0x64e961);
u8 U[4];
w4(U+0,u32(0x7af984ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e966:{NFSU2_TR(0x64e966);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e967:{NFSU2_TR(0x64e967);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
}
B64e96a:{NFSU2_TR(0x64e96a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e96b:{NFSU2_TR(0x64e96b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e96c:{NFSU2_TR(0x64e96c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e971ull));
TAIL_STATIC(0x64307cu,643);
}
B64e971:L64e971:{c.instructions+=1;NFSU2_TR(0x64e971);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B64e974:L64e974:{c.instructions+=2;NFSU2_TR(0x64e974);
w4(R+24,u32(0x80004005ull));
}
B64e979:{NFSU2_TR(0x64e979);
{goto L64ea8f;}
}
B64e97e:L64e97e:{c.instructions+=6;NFSU2_TR(0x64e97e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64e981:{NFSU2_TR(0x64e981);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e983:{NFSU2_TR(0x64e983);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64e986:{NFSU2_TR(0x64e986);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e987:{NFSU2_TR(0x64e987);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e988:{NFSU2_TR(0x64e988);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e98dull));
TAIL_STATIC(0x64ba92u,64b);
}
B64e98d:L64e98d:{c.instructions+=2;NFSU2_TR(0x64e98d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B64e98f:{NFSU2_TR(0x64e98f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L64e999;}}
}
B64e991:L64e991:{c.instructions+=2;NFSU2_TR(0x64e991);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+12)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B64e994:{NFSU2_TR(0x64e994);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64e999;}}
}
B64e996:L64e996:{c.instructions+=1;NFSU2_TR(0x64e996);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e999:L64e999:{c.instructions+=1;NFSU2_TR(0x64e999);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64e99c:L64e99c:{c.instructions+=2;NFSU2_TR(0x64e99c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64e99e:{NFSU2_TR(0x64e99e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64e97eu);}goto L64e97e;}}
}
B64e9a0:L64e9a0:{c.instructions+=3;NFSU2_TR(0x64e9a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64e9a3:{NFSU2_TR(0x64e9a3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B64e9a5:{NFSU2_TR(0x64e9a5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64ea8f;}}
}
B64e9ab:L64e9ab:{c.instructions+=5;NFSU2_TR(0x64e9ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64e9ae:{NFSU2_TR(0x64e9ae);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64e9b0:{NFSU2_TR(0x64e9b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e9b3:{NFSU2_TR(0x64e9b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e9b6:{NFSU2_TR(0x64e9b6);
if(r1(R+518)){{goto L64e9f5;}}
}
B64e9b8:L64e9b8:{c.instructions+=1;NFSU2_TR(0x64e9b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64e9bb:L64e9bb:{c.instructions+=11;NFSU2_TR(0x64e9bb);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e9bd:{NFSU2_TR(0x64e9bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64e9c0:{NFSU2_TR(0x64e9c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64e9c3:{NFSU2_TR(0x64e9c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64e9c6:{NFSU2_TR(0x64e9c6);
__builtin_memmove((R+4),(R+24),4);
}
B64e9c8:{NFSU2_TR(0x64e9c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e9c9:{NFSU2_TR(0x64e9c9);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64e9cb:{NFSU2_TR(0x64e9cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64e9ce:{NFSU2_TR(0x64e9ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x324ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64e9d4:{NFSU2_TR(0x64e9d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64e9d7:{NFSU2_TR(0x64e9d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64e9dcull));
TAIL_STATIC(0x6486d1u,648);
}
B64e9dc:L64e9dc:{c.instructions+=2;NFSU2_TR(0x64e9dc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B64e9de:{NFSU2_TR(0x64e9de);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L64e9e8;}}
}
B64e9e0:L64e9e0:{c.instructions+=2;NFSU2_TR(0x64e9e0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+12)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B64e9e3:{NFSU2_TR(0x64e9e3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64e9e8;}}
}
B64e9e5:L64e9e5:{c.instructions+=1;NFSU2_TR(0x64e9e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e9e8:L64e9e8:{c.instructions+=5;NFSU2_TR(0x64e9e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64e9eb:{NFSU2_TR(0x64e9eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64e9ee:{NFSU2_TR(0x64e9ee);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64e9f0:{NFSU2_TR(0x64e9f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64e9f3:{NFSU2_TR(0x64e9f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64e9bbu);}goto L64e9bb;}}
}
B64e9f5:L64e9f5:{c.instructions+=3;NFSU2_TR(0x64e9f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64e9f8:{NFSU2_TR(0x64e9f8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B64e9fa:{NFSU2_TR(0x64e9fa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64ea8f;}}
}
B64ea00:L64ea00:{c.instructions+=5;NFSU2_TR(0x64ea00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64ea03:{NFSU2_TR(0x64ea03);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64ea06:{NFSU2_TR(0x64ea06);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ea07:{NFSU2_TR(0x64ea07);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64ea0a:{NFSU2_TR(0x64ea0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64ea0full));
TAIL_STATIC(0x6478deu,647);
}
B64ea0f:L64ea0f:{c.instructions+=3;NFSU2_TR(0x64ea0f);
__builtin_memmove((R+24),(R+0),4);
}
B64ea11:{NFSU2_TR(0x64ea11);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B64ea13:{NFSU2_TR(0x64ea13);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64ea8f;}}
}
B64ea15:L64ea15:{c.instructions+=5;NFSU2_TR(0x64ea15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64ea18:{NFSU2_TR(0x64ea18);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ea19:{NFSU2_TR(0x64ea19);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64ea1c:{NFSU2_TR(0x64ea1c);
__builtin_memmove((R+4),(R+28),4);
}
B64ea1e:{NFSU2_TR(0x64ea1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64ea23ull));
TAIL_STATIC(0x647930u,647);
}
B64ea23:L64ea23:{c.instructions+=3;NFSU2_TR(0x64ea23);
__builtin_memmove((R+24),(R+0),4);
}
B64ea25:{NFSU2_TR(0x64ea25);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B64ea27:{NFSU2_TR(0x64ea27);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64ea8f;}}
}
B64ea29:L64ea29:{c.instructions+=7;NFSU2_TR(0x64ea29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64ea2c:{NFSU2_TR(0x64ea2c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ea2d:{NFSU2_TR(0x64ea2d);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ea2f:{NFSU2_TR(0x64ea2f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
}
B64ea32:{NFSU2_TR(0x64ea32);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ea33:{NFSU2_TR(0x64ea33);
__builtin_memmove((R+4),(R+28),4);
}
B64ea35:{NFSU2_TR(0x64ea35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64ea3aull));
TAIL_STATIC(0x647827u,647);
}
B64ea3a:L64ea3a:{c.instructions+=3;NFSU2_TR(0x64ea3a);
__builtin_memmove((R+24),(R+0),4);
}
B64ea3c:{NFSU2_TR(0x64ea3c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B64ea3e:{NFSU2_TR(0x64ea3e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64ea8f;}}
}
B64ea40:L64ea40:{c.instructions+=6;NFSU2_TR(0x64ea40);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ea41:{NFSU2_TR(0x64ea41);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ea43:{NFSU2_TR(0x64ea43);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64ea46:{NFSU2_TR(0x64ea46);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ea47:{NFSU2_TR(0x64ea47);
__builtin_memmove((R+4),(R+28),4);
}
B64ea49:{NFSU2_TR(0x64ea49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64ea4eull));
TAIL_STATIC(0x647827u,647);
}
B64ea4e:L64ea4e:{c.instructions+=3;NFSU2_TR(0x64ea4e);
__builtin_memmove((R+24),(R+0),4);
}
B64ea50:{NFSU2_TR(0x64ea50);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B64ea52:{NFSU2_TR(0x64ea52);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64ea8f;}}
}
B64ea54:L64ea54:{c.instructions+=3;NFSU2_TR(0x64ea54);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64ea57:{NFSU2_TR(0x64ea57);
__builtin_memmove((R+4),(R+28),4);
}
B64ea59:{NFSU2_TR(0x64ea59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64ea5eull));
TAIL_STATIC(0x6479bbu,647);
}
B64ea5e:L64ea5e:{c.instructions+=3;NFSU2_TR(0x64ea5e);
__builtin_memmove((R+24),(R+0),4);
}
B64ea60:{NFSU2_TR(0x64ea60);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B64ea62:{NFSU2_TR(0x64ea62);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64ea8f;}}
}
B64ea64:L64ea64:{c.instructions+=3;NFSU2_TR(0x64ea64);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64ea67:{NFSU2_TR(0x64ea67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ea6a:{NFSU2_TR(0x64ea6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64ea6full));
TAIL_STATIC(0x6479bbu,647);
}
B64ea6f:L64ea6f:{c.instructions+=3;NFSU2_TR(0x64ea6f);
__builtin_memmove((R+24),(R+0),4);
}
B64ea71:{NFSU2_TR(0x64ea71);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B64ea73:{NFSU2_TR(0x64ea73);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64ea8f;}}
}
B64ea75:L64ea75:{c.instructions+=8;NFSU2_TR(0x64ea75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64ea78:{NFSU2_TR(0x64ea78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64ea7b:{NFSU2_TR(0x64ea7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ea7e:{NFSU2_TR(0x64ea7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64ea81:{NFSU2_TR(0x64ea81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B64ea83:{NFSU2_TR(0x64ea83);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ea86:{NFSU2_TR(0x64ea86);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B64ea88:{NFSU2_TR(0x64ea88);
{goto L64eab9;}
}
B64ea8a:L64ea8a:{c.instructions+=1;NFSU2_TR(0x64ea8a);
w4(R+24,u32(0x8007000eull));
}
B64ea8f:L64ea8f:{c.instructions+=3;NFSU2_TR(0x64ea8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64ea92:{NFSU2_TR(0x64ea92);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64ea94:{NFSU2_TR(0x64ea94);
if(r1(R+518)){{goto L64ea9d;}}
}
B64ea96:L64ea96:{c.instructions+=2;NFSU2_TR(0x64ea96);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ea98:{NFSU2_TR(0x64ea98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64ea9dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64e100u);}goto L64e100;}
}
B64ea9d:L64ea9d:{c.instructions+=3;NFSU2_TR(0x64ea9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64eaa0:{NFSU2_TR(0x64eaa0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64eaa2:{NFSU2_TR(0x64eaa2);
if(r1(R+518)){{goto L64eaab;}}
}
B64eaa4:L64eaa4:{c.instructions+=2;NFSU2_TR(0x64eaa4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64eaa6:{NFSU2_TR(0x64eaa6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64eaabull));
TAIL_STATIC(0x647806u,647);
}
B64eaab:L64eaab:{c.instructions+=3;NFSU2_TR(0x64eaab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64eaae:{NFSU2_TR(0x64eaae);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64eab0:{NFSU2_TR(0x64eab0);
if(r1(R+518)){{goto L64eab9;}}
}
B64eab2:L64eab2:{c.instructions+=2;NFSU2_TR(0x64eab2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64eab4:{NFSU2_TR(0x64eab4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64eab9ull));
TAIL_STATIC(0x647806u,647);
}
B64eab9:L64eab9:{c.instructions+=2;NFSU2_TR(0x64eab9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64eabc:{NFSU2_TR(0x64eabc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64eac1ull));
TAIL_STATIC(0x64772au,647);
}
B64eac1:L64eac1:{c.instructions+=6;NFSU2_TR(0x64eac1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64eac2:{NFSU2_TR(0x64eac2);
__builtin_memmove((R+0),(R+24),4);
}
B64eac4:{NFSU2_TR(0x64eac4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64eac5:{NFSU2_TR(0x64eac5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64eac6:{NFSU2_TR(0x64eac6);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64eac7:{NFSU2_TR(0x64eac7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64eaca:L64eaca:{c.instructions+=8;NFSU2_TR(0x64eaca);
__builtin_memmove((R+28),(R+28),4);
}
B64eacc:{NFSU2_TR(0x64eacc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64eacd:{NFSU2_TR(0x64eacd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64eace:{NFSU2_TR(0x64eace);
__builtin_memmove((R+24),(R+4),4);
}
B64ead0:{NFSU2_TR(0x64ead0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64ead3:{NFSU2_TR(0x64ead3);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64ead5:{NFSU2_TR(0x64ead5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64ead7:{NFSU2_TR(0x64ead7);
if(r1(R+518)){{goto L64eae3;}}
}
B64ead9:L64ead9:{c.instructions+=2;NFSU2_TR(0x64ead9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64eadb:{NFSU2_TR(0x64eadb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64eae0ull));
TAIL_STATIC(0x64c0d4u,64c);
}
B64eae0:L64eae0:{c.instructions+=1;NFSU2_TR(0x64eae0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64eae3:L64eae3:{c.instructions+=3;NFSU2_TR(0x64eae3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64eae6:{NFSU2_TR(0x64eae6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64eae8:{NFSU2_TR(0x64eae8);
if(r1(R+518)){{goto L64eaf4;}}
}
B64eaea:L64eaea:{c.instructions+=2;NFSU2_TR(0x64eaea);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64eaec:{NFSU2_TR(0x64eaec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64eaf1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64e100u);}goto L64e100;}
}
B64eaf1:L64eaf1:{c.instructions+=1;NFSU2_TR(0x64eaf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64eaf4:L64eaf4:{c.instructions+=2;NFSU2_TR(0x64eaf4);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64eaf7:{NFSU2_TR(0x64eaf7);
if(r1(R+518)){{goto L64eb1a;}}
}
B64eaf9:L64eaf9:{c.instructions+=1;NFSU2_TR(0x64eaf9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64eafa:L64eafa:{c.instructions+=6;NFSU2_TR(0x64eafa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64eafd:{NFSU2_TR(0x64eafd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64eb00:{NFSU2_TR(0x64eb00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64eb03:{NFSU2_TR(0x64eb03);
__builtin_memmove((R+4),(R+28),4);
}
B64eb05:{NFSU2_TR(0x64eb05);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64eb08:{NFSU2_TR(0x64eb08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64eb0dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64eacau);}goto L64eaca;}
}
B64eb0d:L64eb0d:{c.instructions+=2;NFSU2_TR(0x64eb0d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64eb0e:{NFSU2_TR(0x64eb0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64eb13ull));
TAIL_STATIC(0x575630u,575);
}
B64eb13:L64eb13:{c.instructions+=3;NFSU2_TR(0x64eb13);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64eb16:{NFSU2_TR(0x64eb16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64eb17:{NFSU2_TR(0x64eb17);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64eafau);}goto L64eafa;}}
}
B64eb19:L64eb19:{c.instructions+=1;NFSU2_TR(0x64eb19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64eb1a:L64eb1a:{c.instructions+=4;NFSU2_TR(0x64eb1a);
__builtin_memmove((R+4),(R+24),4);
}
B64eb1c:{NFSU2_TR(0x64eb1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64eb1d:{NFSU2_TR(0x64eb1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64eb1e:{NFSU2_TR(0x64eb1e);
TAIL_STATIC(0x64b62bu,64b);
}
B64eb23:L64eb23:{c.instructions+=6;NFSU2_TR(0x64eb23);
__builtin_memmove((R+28),(R+28),4);
}
B64eb25:{NFSU2_TR(0x64eb25);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64eb26:{NFSU2_TR(0x64eb26);
__builtin_memmove((R+20),(R+16),4);
}
B64eb28:{NFSU2_TR(0x64eb28);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64eb29:{NFSU2_TR(0x64eb29);
__builtin_memmove((R+24),(R+4),4);
}
B64eb2b:{NFSU2_TR(0x64eb2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64eb30ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64eacau);}goto L64eaca;}
}
B64eb30:L64eb30:{c.instructions+=2;NFSU2_TR(0x64eb30);
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
B64eb34:{NFSU2_TR(0x64eb34);
if(r1(R+518)){{goto L64eb3d;}}
}
B64eb36:L64eb36:{c.instructions+=2;NFSU2_TR(0x64eb36);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64eb37:{NFSU2_TR(0x64eb37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64eb3cull));
TAIL_STATIC(0x575630u,575);
}
B64eb3c:L64eb3c:{c.instructions+=1;NFSU2_TR(0x64eb3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64eb3d:L64eb3d:{c.instructions+=4;NFSU2_TR(0x64eb3d);
__builtin_memmove((R+0),(R+24),4);
}
B64eb3f:{NFSU2_TR(0x64eb3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64eb40:{NFSU2_TR(0x64eb40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64eb41:{NFSU2_TR(0x64eb41);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64eb44:L64eb44:{c.instructions+=10;NFSU2_TR(0x64eb44);
__builtin_memmove((R+28),(R+28),4);
}
B64eb46:{NFSU2_TR(0x64eb46);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64eb47:{NFSU2_TR(0x64eb47);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64eb48:{NFSU2_TR(0x64eb48);
__builtin_memmove((R+24),(R+4),4);
}
B64eb4a:{NFSU2_TR(0x64eb4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x320ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64eb50:{NFSU2_TR(0x64eb50);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64eb52:{NFSU2_TR(0x64eb52);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B64eb54:{NFSU2_TR(0x64eb54);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64eb55:{NFSU2_TR(0x64eb55);
u8 U[4];
w4(U+0,u32(0x7af888ull));
s4(u32(r4(R+24)),r4(U+0));
}
B64eb5b:{NFSU2_TR(0x64eb5b);
if(r1(R+518)){{goto L64eb5f;}}
}
B64eb5d:L64eb5d:{c.instructions+=1;NFSU2_TR(0x64eb5d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B64eb5f:L64eb5f:{c.instructions+=4;NFSU2_TR(0x64eb5f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x348ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64eb65:{NFSU2_TR(0x64eb65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B64eb67:{NFSU2_TR(0x64eb67);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64eb69:{NFSU2_TR(0x64eb69);
if(r1(R+518)){{goto L64eb74;}}
}
B64eb6b:L64eb6b:{c.instructions+=2;NFSU2_TR(0x64eb6b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64eb6d:{NFSU2_TR(0x64eb6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64eb72ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64eb23u);}goto L64eb23;}
}
B64eb72:L64eb72:{c.instructions+=1;NFSU2_TR(0x64eb72);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B64eb74:L64eb74:{c.instructions+=4;NFSU2_TR(0x64eb74);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34cull))));
__builtin_memmove((R+28),(U+0),4);
}
B64eb7a:{NFSU2_TR(0x64eb7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B64eb7c:{NFSU2_TR(0x64eb7c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64eb7e:{NFSU2_TR(0x64eb7e);
if(r1(R+518)){{goto L64eb89;}}
}
B64eb80:L64eb80:{c.instructions+=2;NFSU2_TR(0x64eb80);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64eb82:{NFSU2_TR(0x64eb82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64eb87ull));
TAIL_STATIC(0x64c0d4u,64c);
}
B64eb87:L64eb87:{c.instructions+=1;NFSU2_TR(0x64eb87);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B64eb89:L64eb89:{c.instructions+=4;NFSU2_TR(0x64eb89);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x350ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64eb8f:{NFSU2_TR(0x64eb8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B64eb91:{NFSU2_TR(0x64eb91);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64eb93:{NFSU2_TR(0x64eb93);
if(r1(R+518)){{goto L64eb9e;}}
}
B64eb95:L64eb95:{c.instructions+=2;NFSU2_TR(0x64eb95);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64eb97:{NFSU2_TR(0x64eb97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64eb9cull));
TAIL_STATIC(0x64b743u,64b);
}
B64eb9c:L64eb9c:{c.instructions+=1;NFSU2_TR(0x64eb9c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B64eb9e:L64eb9e:{c.instructions+=4;NFSU2_TR(0x64eb9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x354ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64eba4:{NFSU2_TR(0x64eba4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B64eba6:{NFSU2_TR(0x64eba6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64eba8:{NFSU2_TR(0x64eba8);
if(r1(R+518)){{goto L64ebb3;}}
}
B64ebaa:L64ebaa:{c.instructions+=2;NFSU2_TR(0x64ebaa);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ebac:{NFSU2_TR(0x64ebac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64ebb1ull));
TAIL_STATIC(0x64778au,647);
}
B64ebb1:L64ebb1:{c.instructions+=1;NFSU2_TR(0x64ebb1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B64ebb3:L64ebb3:{c.instructions+=4;NFSU2_TR(0x64ebb3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x358ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64ebb9:{NFSU2_TR(0x64ebb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B64ebbb:{NFSU2_TR(0x64ebbb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64ebbd:{NFSU2_TR(0x64ebbd);
if(r1(R+518)){{goto L64ebc8;}}
}
B64ebbf:L64ebbf:{c.instructions+=2;NFSU2_TR(0x64ebbf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ebc1:{NFSU2_TR(0x64ebc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64ebc6ull));
TAIL_STATIC(0x6476bfu,647);
}
B64ebc6:L64ebc6:{c.instructions+=1;NFSU2_TR(0x64ebc6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B64ebc8:L64ebc8:{c.instructions+=4;NFSU2_TR(0x64ebc8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x33cull))));
__builtin_memmove((R+28),(U+0),4);
}
B64ebce:{NFSU2_TR(0x64ebce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B64ebd0:{NFSU2_TR(0x64ebd0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64ebd2:{NFSU2_TR(0x64ebd2);
if(r1(R+518)){{goto L64ebdd;}}
}
B64ebd4:L64ebd4:{c.instructions+=2;NFSU2_TR(0x64ebd4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ebd5:{NFSU2_TR(0x64ebd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64ebdaull));
TAIL_STATIC(0x575630u,575);
}
B64ebda:L64ebda:{c.instructions+=2;NFSU2_TR(0x64ebda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64ebdb:{NFSU2_TR(0x64ebdb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B64ebdd:L64ebdd:{c.instructions+=4;NFSU2_TR(0x64ebdd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x344ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64ebe3:{NFSU2_TR(0x64ebe3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B64ebe5:{NFSU2_TR(0x64ebe5);
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
B64ebe7:{NFSU2_TR(0x64ebe7);
if(r1(R+518)){{goto L64ebf2;}}
}
B64ebe9:L64ebe9:{c.instructions+=2;NFSU2_TR(0x64ebe9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ebea:{NFSU2_TR(0x64ebea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64ebefull));
TAIL_STATIC(0x575630u,575);
}
B64ebef:L64ebef:{c.instructions+=2;NFSU2_TR(0x64ebef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64ebf0:{NFSU2_TR(0x64ebf0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B64ebf2:L64ebf2:{c.instructions+=2;NFSU2_TR(0x64ebf2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64ebf8:{NFSU2_TR(0x64ebf8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64ebfdull));
TAIL_STATIC(0x6996f4u,699);
}
B64ebfd:L64ebfd:{c.instructions+=5;NFSU2_TR(0x64ebfd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64ebfe:{NFSU2_TR(0x64ebfe);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64ec01:{NFSU2_TR(0x64ec01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64ec02:{NFSU2_TR(0x64ec02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64ec03:{NFSU2_TR(0x64ec03);
TAIL_STATIC(0x645ec1u,645);
}
B64ec08:L64ec08:{c.instructions+=6;NFSU2_TR(0x64ec08);
__builtin_memmove((R+28),(R+28),4);
}
B64ec0a:{NFSU2_TR(0x64ec0a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ec0b:{NFSU2_TR(0x64ec0b);
__builtin_memmove((R+20),(R+16),4);
}
B64ec0d:{NFSU2_TR(0x64ec0d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ec0e:{NFSU2_TR(0x64ec0e);
__builtin_memmove((R+24),(R+4),4);
}
B64ec10:{NFSU2_TR(0x64ec10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64ec15ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64eb44u);}goto L64eb44;}
}
B64ec15:L64ec15:{c.instructions+=2;NFSU2_TR(0x64ec15);
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
B64ec19:{NFSU2_TR(0x64ec19);
if(r1(R+518)){{goto L64ec22;}}
}
B64ec1b:L64ec1b:{c.instructions+=2;NFSU2_TR(0x64ec1b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ec1c:{NFSU2_TR(0x64ec1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64ec21ull));
TAIL_STATIC(0x575630u,575);
}
B64ec21:L64ec21:{c.instructions+=1;NFSU2_TR(0x64ec21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64ec22:L64ec22:{c.instructions+=4;NFSU2_TR(0x64ec22);
__builtin_memmove((R+0),(R+24),4);
}
B64ec24:{NFSU2_TR(0x64ec24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64ec25:{NFSU2_TR(0x64ec25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64ec26:{NFSU2_TR(0x64ec26);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64ec29:L64ec29:{c.instructions+=14;NFSU2_TR(0x64ec29);
__builtin_memmove((R+28),(R+28),4);
}
B64ec2b:{NFSU2_TR(0x64ec2b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ec2c:{NFSU2_TR(0x64ec2c);
__builtin_memmove((R+20),(R+16),4);
}
B64ec2e:{NFSU2_TR(0x64ec2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B64ec31:{NFSU2_TR(0x64ec31);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ec32:{NFSU2_TR(0x64ec32);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ec33:{NFSU2_TR(0x64ec33);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ec34:{NFSU2_TR(0x64ec34);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B64ec36:{NFSU2_TR(0x64ec36);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ec38:{NFSU2_TR(0x64ec38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ec3b:{NFSU2_TR(0x64ec3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ec3e:{NFSU2_TR(0x64ec3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ec41:{NFSU2_TR(0x64ec41);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64ec43:{NFSU2_TR(0x64ec43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64ec48ull));
TAIL_STATIC(0x575620u,575);
}
B64ec48:L64ec48:{c.instructions+=3;NFSU2_TR(0x64ec48);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64ec4a:{NFSU2_TR(0x64ec4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64ec4b:{NFSU2_TR(0x64ec4b);
if(r1(R+518)){{goto L64ec59;}}
}
B64ec4d:L64ec4d:{c.instructions+=2;NFSU2_TR(0x64ec4d);
__builtin_memmove((R+4),(R+0),4);
}
B64ec4f:{NFSU2_TR(0x64ec4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64ec54ull));
TAIL_STATIC(0x6477abu,647);
}
B64ec54:L64ec54:{c.instructions+=2;NFSU2_TR(0x64ec54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ec57:{NFSU2_TR(0x64ec57);
{goto L64ec5c;}
}
B64ec59:L64ec59:{c.instructions+=1;NFSU2_TR(0x64ec59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ec5c:L64ec5c:{c.instructions+=2;NFSU2_TR(0x64ec5c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64ec5f:{NFSU2_TR(0x64ec5f);
if(r1(R+518)){{goto L64ee60;}}
}
B64ec65:L64ec65:{c.instructions+=2;NFSU2_TR(0x64ec65);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ec67:{NFSU2_TR(0x64ec67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64ec6cull));
TAIL_STATIC(0x575620u,575);
}
B64ec6c:L64ec6c:{c.instructions+=3;NFSU2_TR(0x64ec6c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64ec6e:{NFSU2_TR(0x64ec6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64ec6f:{NFSU2_TR(0x64ec6f);
if(r1(R+518)){{goto L64ec7d;}}
}
B64ec71:L64ec71:{c.instructions+=2;NFSU2_TR(0x64ec71);
__builtin_memmove((R+4),(R+0),4);
}
B64ec73:{NFSU2_TR(0x64ec73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64ec78ull));
TAIL_STATIC(0x6477abu,647);
}
B64ec78:L64ec78:{c.instructions+=2;NFSU2_TR(0x64ec78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ec7b:{NFSU2_TR(0x64ec7b);
{goto L64ec80;}
}
B64ec7d:L64ec7d:{c.instructions+=1;NFSU2_TR(0x64ec7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ec80:L64ec80:{c.instructions+=2;NFSU2_TR(0x64ec80);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64ec83:{NFSU2_TR(0x64ec83);
if(r1(R+518)){{goto L64ee60;}}
}
B64ec89:L64ec89:{c.instructions+=2;NFSU2_TR(0x64ec89);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ec8b:{NFSU2_TR(0x64ec8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64ec90ull));
TAIL_STATIC(0x575620u,575);
}
B64ec90:L64ec90:{c.instructions+=3;NFSU2_TR(0x64ec90);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64ec92:{NFSU2_TR(0x64ec92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64ec93:{NFSU2_TR(0x64ec93);
if(r1(R+518)){{goto L64eca0;}}
}
B64ec95:L64ec95:{c.instructions+=2;NFSU2_TR(0x64ec95);
__builtin_memmove((R+4),(R+0),4);
}
B64ec97:{NFSU2_TR(0x64ec97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64ec9cull));
TAIL_STATIC(0x64b6aeu,64b);
}
B64ec9c:L64ec9c:{c.instructions+=2;NFSU2_TR(0x64ec9c);
__builtin_memmove((R+12),(R+0),4);
}
B64ec9e:{NFSU2_TR(0x64ec9e);
{goto L64eca2;}
}
B64eca0:L64eca0:{c.instructions+=1;NFSU2_TR(0x64eca0);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64eca2:L64eca2:{c.instructions+=2;NFSU2_TR(0x64eca2);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64eca4:{NFSU2_TR(0x64eca4);
if(r1(R+518)){{goto L64ee60;}}
}
B64ecaa:L64ecaa:{c.instructions+=5;NFSU2_TR(0x64ecaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64ecad:{NFSU2_TR(0x64ecad);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64ecb0:{NFSU2_TR(0x64ecb0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64ecb2:{NFSU2_TR(0x64ecb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ecb5:{NFSU2_TR(0x64ecb5);
if(r1(R+518)){{goto L64ecd1;}}
}
B64ecb7:L64ecb7:{c.instructions+=2;NFSU2_TR(0x64ecb7);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64ecbb:{NFSU2_TR(0x64ecbb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64ee59;}}
}
B64ecc1:L64ecc1:{c.instructions+=2;NFSU2_TR(0x64ecc1);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64ecc5:{NFSU2_TR(0x64ecc5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64ee59;}}
}
B64eccb:L64eccb:{c.instructions+=2;NFSU2_TR(0x64eccb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64ecce:{NFSU2_TR(0x64ecce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ecd1:L64ecd1:{c.instructions+=3;NFSU2_TR(0x64ecd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ecd4:{NFSU2_TR(0x64ecd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64ecd7:{NFSU2_TR(0x64ecd7);
{goto L64ed24;}
}
B64ecd9:L64ecd9:{c.instructions+=2;NFSU2_TR(0x64ecd9);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64ecdd:{NFSU2_TR(0x64ecdd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64ee59;}}
}
B64ece3:L64ece3:{c.instructions+=3;NFSU2_TR(0x64ece3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64ece6:{NFSU2_TR(0x64ece6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64ece8:{NFSU2_TR(0x64ece8);
if(r1(R+518)){{goto L64ee59;}}
}
B64ecee:L64ecee:{c.instructions+=2;NFSU2_TR(0x64ecee);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64ecf2:{NFSU2_TR(0x64ecf2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64ee59;}}
}
B64ecf8:L64ecf8:{c.instructions+=2;NFSU2_TR(0x64ecf8);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64ecfc:{NFSU2_TR(0x64ecfc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64ed33;}}
}
B64ecfe:L64ecfe:{c.instructions+=7;NFSU2_TR(0x64ecfe);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64ed01:{NFSU2_TR(0x64ed01);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ed02:{NFSU2_TR(0x64ed02);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64ed05:{NFSU2_TR(0x64ed05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64ed08:{NFSU2_TR(0x64ed08);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64ed0b:{NFSU2_TR(0x64ed0b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ed0c:{NFSU2_TR(0x64ed0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64ed11ull));
TAIL_STATIC(0x64c13du,64c);
}
B64ed11:L64ed11:{c.instructions+=2;NFSU2_TR(0x64ed11);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B64ed13:{NFSU2_TR(0x64ed13);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L64ed1e;}}
}
B64ed15:L64ed15:{c.instructions+=2;NFSU2_TR(0x64ed15);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B64ed19:{NFSU2_TR(0x64ed19);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64ed1e;}}
}
B64ed1b:L64ed1b:{c.instructions+=1;NFSU2_TR(0x64ed1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ed1e:L64ed1e:{c.instructions+=2;NFSU2_TR(0x64ed1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64ed21:{NFSU2_TR(0x64ed21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64ed24:L64ed24:{c.instructions+=2;NFSU2_TR(0x64ed24);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64ed26:{NFSU2_TR(0x64ed26);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64ecd9u);}goto L64ecd9;}}
}
B64ed28:L64ed28:{c.instructions+=4;NFSU2_TR(0x64ed28);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64ed2b:{NFSU2_TR(0x64ed2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B64ed2e:{NFSU2_TR(0x64ed2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64ed31:{NFSU2_TR(0x64ed31);
{goto L64ed8d;}
}
B64ed33:L64ed33:{c.instructions+=2;NFSU2_TR(0x64ed33);
u8 U[4];
w4(U+0,u32(0x7af984ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ed38:{NFSU2_TR(0x64ed38);
{goto L64ee46;}
}
B64ed3d:L64ed3d:{c.instructions+=2;NFSU2_TR(0x64ed3d);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64ed41:{NFSU2_TR(0x64ed41);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64ee59;}}
}
B64ed47:L64ed47:{c.instructions+=3;NFSU2_TR(0x64ed47);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64ed4a:{NFSU2_TR(0x64ed4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64ed4c:{NFSU2_TR(0x64ed4c);
if(r1(R+518)){{goto L64ee59;}}
}
B64ed52:L64ed52:{c.instructions+=2;NFSU2_TR(0x64ed52);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64ed56:{NFSU2_TR(0x64ed56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64ee59;}}
}
B64ed5c:L64ed5c:{c.instructions+=2;NFSU2_TR(0x64ed5c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64ed60:{NFSU2_TR(0x64ed60);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64ee41;}}
}
B64ed66:L64ed66:{c.instructions+=8;NFSU2_TR(0x64ed66);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((R+4),(U+0),4);
}
B64ed69:{NFSU2_TR(0x64ed69);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ed6a:{NFSU2_TR(0x64ed6a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64ed6d:{NFSU2_TR(0x64ed6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64ed70:{NFSU2_TR(0x64ed70);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64ed73:{NFSU2_TR(0x64ed73);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B64ed75:{NFSU2_TR(0x64ed75);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ed76:{NFSU2_TR(0x64ed76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64ed7bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64e851u);}goto L64e851;}
}
B64ed7b:L64ed7b:{c.instructions+=2;NFSU2_TR(0x64ed7b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B64ed7d:{NFSU2_TR(0x64ed7d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L64ed88;}}
}
B64ed7f:L64ed7f:{c.instructions+=2;NFSU2_TR(0x64ed7f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B64ed83:{NFSU2_TR(0x64ed83);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64ed88;}}
}
B64ed85:L64ed85:{c.instructions+=1;NFSU2_TR(0x64ed85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ed88:L64ed88:{c.instructions+=2;NFSU2_TR(0x64ed88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B64ed8a:{NFSU2_TR(0x64ed8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64ed8d:L64ed8d:{c.instructions+=2;NFSU2_TR(0x64ed8d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64ed8f:{NFSU2_TR(0x64ed8f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64ed3du);}goto L64ed3d;}}
}
B64ed91:L64ed91:{c.instructions+=6;NFSU2_TR(0x64ed91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B64ed93:{NFSU2_TR(0x64ed93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64ed96:{NFSU2_TR(0x64ed96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64ed99:{NFSU2_TR(0x64ed99);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x334ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B64ed9f:{NFSU2_TR(0x64ed9f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B64eda1:{NFSU2_TR(0x64eda1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64ee65;}}
}
B64eda7:L64eda7:{c.instructions+=5;NFSU2_TR(0x64eda7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64edaa:{NFSU2_TR(0x64edaa);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64edad:{NFSU2_TR(0x64edad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64edae:{NFSU2_TR(0x64edae);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64edb1:{NFSU2_TR(0x64edb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64edb6ull));
TAIL_STATIC(0x6478deu,647);
}
B64edb6:L64edb6:{c.instructions+=3;NFSU2_TR(0x64edb6);
__builtin_memmove((R+28),(R+0),4);
}
B64edb8:{NFSU2_TR(0x64edb8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B64edba:{NFSU2_TR(0x64edba);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64ee65;}}
}
B64edc0:L64edc0:{c.instructions+=4;NFSU2_TR(0x64edc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64edc3:{NFSU2_TR(0x64edc3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64edc5:{NFSU2_TR(0x64edc5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64edc8:{NFSU2_TR(0x64edc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64edcdull));
TAIL_STATIC(0x647930u,647);
}
B64edcd:L64edcd:{c.instructions+=3;NFSU2_TR(0x64edcd);
__builtin_memmove((R+28),(R+0),4);
}
B64edcf:{NFSU2_TR(0x64edcf);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B64edd1:{NFSU2_TR(0x64edd1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64ee65;}}
}
B64edd7:L64edd7:{c.instructions+=6;NFSU2_TR(0x64edd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64edda:{NFSU2_TR(0x64edda);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64eddc:{NFSU2_TR(0x64eddc);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64edde:{NFSU2_TR(0x64edde);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64ede1:{NFSU2_TR(0x64ede1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ede2:{NFSU2_TR(0x64ede2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64ede7ull));
TAIL_STATIC(0x647827u,647);
}
B64ede7:L64ede7:{c.instructions+=3;NFSU2_TR(0x64ede7);
__builtin_memmove((R+28),(R+0),4);
}
B64ede9:{NFSU2_TR(0x64ede9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B64edeb:{NFSU2_TR(0x64edeb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64ee65;}}
}
B64eded:L64eded:{c.instructions+=5;NFSU2_TR(0x64eded);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64edf0:{NFSU2_TR(0x64edf0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64edf2:{NFSU2_TR(0x64edf2);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64edf4:{NFSU2_TR(0x64edf4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64edf5:{NFSU2_TR(0x64edf5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64edfaull));
TAIL_STATIC(0x647827u,647);
}
B64edfa:L64edfa:{c.instructions+=3;NFSU2_TR(0x64edfa);
__builtin_memmove((R+28),(R+0),4);
}
B64edfc:{NFSU2_TR(0x64edfc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B64edfe:{NFSU2_TR(0x64edfe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64ee65;}}
}
B64ee00:L64ee00:{c.instructions+=3;NFSU2_TR(0x64ee00);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64ee03:{NFSU2_TR(0x64ee03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64ee06:{NFSU2_TR(0x64ee06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64ee0bull));
TAIL_STATIC(0x6479bbu,647);
}
B64ee0b:L64ee0b:{c.instructions+=3;NFSU2_TR(0x64ee0b);
__builtin_memmove((R+28),(R+0),4);
}
B64ee0d:{NFSU2_TR(0x64ee0d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B64ee0f:{NFSU2_TR(0x64ee0f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64ee65;}}
}
B64ee11:L64ee11:{c.instructions+=3;NFSU2_TR(0x64ee11);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64ee14:{NFSU2_TR(0x64ee14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64ee18:{NFSU2_TR(0x64ee18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64ee1dull));
TAIL_STATIC(0x6479bbu,647);
}
B64ee1d:L64ee1d:{c.instructions+=3;NFSU2_TR(0x64ee1d);
__builtin_memmove((R+28),(R+0),4);
}
B64ee1f:{NFSU2_TR(0x64ee1f);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B64ee21:{NFSU2_TR(0x64ee21);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64ee65;}}
}
B64ee23:L64ee23:{c.instructions+=9;NFSU2_TR(0x64ee23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64ee26:{NFSU2_TR(0x64ee26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64ee29:{NFSU2_TR(0x64ee29);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ee2c:{NFSU2_TR(0x64ee2c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x348ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64ee32:{NFSU2_TR(0x64ee32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B64ee34:{NFSU2_TR(0x64ee34);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ee37:{NFSU2_TR(0x64ee37);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x324ull))));
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
B64ee3d:{NFSU2_TR(0x64ee3d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B64ee3f:{NFSU2_TR(0x64ee3f);
{goto L64ee8e;}
}
B64ee41:L64ee41:{c.instructions+=1;NFSU2_TR(0x64ee41);
u8 U[4];
w4(U+0,u32(0x7afa38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ee46:L64ee46:{c.instructions+=6;NFSU2_TR(0x64ee46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64ee49:{NFSU2_TR(0x64ee49);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ee4b:{NFSU2_TR(0x64ee4b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
}
B64ee4e:{NFSU2_TR(0x64ee4e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ee50:{NFSU2_TR(0x64ee50);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ee51:{NFSU2_TR(0x64ee51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64ee56ull));
TAIL_STATIC(0x64307cu,643);
}
B64ee56:L64ee56:{c.instructions+=1;NFSU2_TR(0x64ee56);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B64ee59:L64ee59:{c.instructions+=2;NFSU2_TR(0x64ee59);
w4(R+28,u32(0x80004005ull));
}
B64ee5e:{NFSU2_TR(0x64ee5e);
{goto L64ee65;}
}
B64ee60:L64ee60:{c.instructions+=1;NFSU2_TR(0x64ee60);
w4(R+28,u32(0x8007000eull));
}
B64ee65:L64ee65:{c.instructions+=2;NFSU2_TR(0x64ee65);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64ee67:{NFSU2_TR(0x64ee67);
if(r1(R+518)){{goto L64ee72;}}
}
B64ee69:L64ee69:{c.instructions+=3;NFSU2_TR(0x64ee69);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ee6b:{NFSU2_TR(0x64ee6b);
__builtin_memmove((R+4),(R+12),4);
}
B64ee6d:{NFSU2_TR(0x64ee6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64ee72ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64eb23u);}goto L64eb23;}
}
B64ee72:L64ee72:{c.instructions+=3;NFSU2_TR(0x64ee72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64ee75:{NFSU2_TR(0x64ee75);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64ee77:{NFSU2_TR(0x64ee77);
if(r1(R+518)){{goto L64ee80;}}
}
B64ee79:L64ee79:{c.instructions+=2;NFSU2_TR(0x64ee79);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ee7b:{NFSU2_TR(0x64ee7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64ee80ull));
TAIL_STATIC(0x647806u,647);
}
B64ee80:L64ee80:{c.instructions+=3;NFSU2_TR(0x64ee80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64ee83:{NFSU2_TR(0x64ee83);
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
B64ee85:{NFSU2_TR(0x64ee85);
if(r1(R+518)){{goto L64ee8e;}}
}
B64ee87:L64ee87:{c.instructions+=2;NFSU2_TR(0x64ee87);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ee89:{NFSU2_TR(0x64ee89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64ee8eull));
TAIL_STATIC(0x647806u,647);
}
B64ee8e:L64ee8e:{c.instructions+=6;NFSU2_TR(0x64ee8e);
__builtin_memmove((R+0),(R+28),4);
}
B64ee90:{NFSU2_TR(0x64ee90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64ee91:{NFSU2_TR(0x64ee91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64ee92:{NFSU2_TR(0x64ee92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64ee93:{NFSU2_TR(0x64ee93);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64ee94:{NFSU2_TR(0x64ee94);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64ee97:L64ee97:{c.instructions+=7;NFSU2_TR(0x64ee97);
__builtin_memmove((R+28),(R+28),4);
}
B64ee99:{NFSU2_TR(0x64ee99);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ee9a:{NFSU2_TR(0x64ee9a);
__builtin_memmove((R+20),(R+16),4);
}
B64ee9c:{NFSU2_TR(0x64ee9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64ee9f:{NFSU2_TR(0x64ee9f);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
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
B64eea2:{NFSU2_TR(0x64eea2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64eea5:{NFSU2_TR(0x64eea5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64eeb0;}}
}
B64eea7:L64eea7:{c.instructions+=2;NFSU2_TR(0x64eea7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64eea9:{NFSU2_TR(0x64eea9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64eeaeull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64ec08u);}goto L64ec08;}
}
B64eeae:L64eeae:{c.instructions+=1;NFSU2_TR(0x64eeae);
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
B64eeb0:L64eeb0:{c.instructions+=2;NFSU2_TR(0x64eeb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64eeb1:{NFSU2_TR(0x64eeb1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64eeb4:L64eeb4:{c.instructions+=18;NFSU2_TR(0x64eeb4);
__builtin_memmove((R+28),(R+28),4);
}
B64eeb6:{NFSU2_TR(0x64eeb6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64eeb7:{NFSU2_TR(0x64eeb7);
__builtin_memmove((R+20),(R+16),4);
}
B64eeb9:{NFSU2_TR(0x64eeb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B64eebc:{NFSU2_TR(0x64eebc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64eebd:{NFSU2_TR(0x64eebd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64eebe:{NFSU2_TR(0x64eebe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64eebf:{NFSU2_TR(0x64eebf);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B64eec1:{NFSU2_TR(0x64eec1);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64eec3:{NFSU2_TR(0x64eec3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64eec4:{NFSU2_TR(0x64eec4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64eec5:{NFSU2_TR(0x64eec5);
__builtin_memmove((R+24),(R+4),4);
}
B64eec7:{NFSU2_TR(0x64eec7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64eeca:{NFSU2_TR(0x64eeca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64eecd:{NFSU2_TR(0x64eecd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64eed0:{NFSU2_TR(0x64eed0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64eed3:{NFSU2_TR(0x64eed3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64eed6:{NFSU2_TR(0x64eed6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64eedbull));
TAIL_STATIC(0x575620u,575);
}
B64eedb:L64eedb:{c.instructions+=3;NFSU2_TR(0x64eedb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64eedd:{NFSU2_TR(0x64eedd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64eede:{NFSU2_TR(0x64eede);
if(r1(R+518)){{goto L64eeec;}}
}
B64eee0:L64eee0:{c.instructions+=2;NFSU2_TR(0x64eee0);
__builtin_memmove((R+4),(R+0),4);
}
B64eee2:{NFSU2_TR(0x64eee2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64eee7ull));
TAIL_STATIC(0x6477abu,647);
}
B64eee7:L64eee7:{c.instructions+=2;NFSU2_TR(0x64eee7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64eeea:{NFSU2_TR(0x64eeea);
{goto L64eeef;}
}
B64eeec:L64eeec:{c.instructions+=1;NFSU2_TR(0x64eeec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64eeef:L64eeef:{c.instructions+=2;NFSU2_TR(0x64eeef);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64eef2:{NFSU2_TR(0x64eef2);
if(r1(R+518)){TAIL_STATIC(0x64f385u,64f);}
}
B64eef8:L64eef8:{c.instructions+=2;NFSU2_TR(0x64eef8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64eef9:{NFSU2_TR(0x64eef9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64eefeull));
TAIL_STATIC(0x575620u,575);
}
B64eefe:L64eefe:{c.instructions+=3;NFSU2_TR(0x64eefe);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64ef00:{NFSU2_TR(0x64ef00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64ef01:{NFSU2_TR(0x64ef01);
if(r1(R+518)){{goto L64ef0f;}}
}
B64ef03:L64ef03:{c.instructions+=2;NFSU2_TR(0x64ef03);
__builtin_memmove((R+4),(R+0),4);
}
B64ef05:{NFSU2_TR(0x64ef05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64ef0aull));
TAIL_STATIC(0x6477abu,647);
}
B64ef0a:L64ef0a:{c.instructions+=2;NFSU2_TR(0x64ef0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ef0d:{NFSU2_TR(0x64ef0d);
{goto L64ef12;}
}
B64ef0f:L64ef0f:{c.instructions+=1;NFSU2_TR(0x64ef0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ef12:L64ef12:{c.instructions+=2;NFSU2_TR(0x64ef12);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64ef15:{NFSU2_TR(0x64ef15);
if(r1(R+518)){TAIL_STATIC(0x64f385u,64f);}
}
B64ef1b:L64ef1b:{c.instructions+=2;NFSU2_TR(0x64ef1b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ef1c:{NFSU2_TR(0x64ef1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64ef21ull));
TAIL_STATIC(0x575620u,575);
}
B64ef21:L64ef21:{c.instructions+=3;NFSU2_TR(0x64ef21);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64ef23:{NFSU2_TR(0x64ef23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64ef24:{NFSU2_TR(0x64ef24);
if(r1(R+518)){{goto L64ef32;}}
}
B64ef26:L64ef26:{c.instructions+=2;NFSU2_TR(0x64ef26);
__builtin_memmove((R+4),(R+0),4);
}
B64ef28:{NFSU2_TR(0x64ef28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64ef2dull));
TAIL_STATIC(0x6477abu,647);
}
B64ef2d:L64ef2d:{c.instructions+=2;NFSU2_TR(0x64ef2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ef30:{NFSU2_TR(0x64ef30);
{goto L64ef35;}
}
B64ef32:L64ef32:{c.instructions+=1;NFSU2_TR(0x64ef32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ef35:L64ef35:{c.instructions+=2;NFSU2_TR(0x64ef35);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64ef38:{NFSU2_TR(0x64ef38);
if(r1(R+518)){TAIL_STATIC(0x64f385u,64f);}
}
B64ef3e:L64ef3e:{c.instructions+=2;NFSU2_TR(0x64ef3e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ef3f:{NFSU2_TR(0x64ef3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64ef44ull));
TAIL_STATIC(0x575620u,575);
}
B64ef44:L64ef44:{c.instructions+=3;NFSU2_TR(0x64ef44);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64ef46:{NFSU2_TR(0x64ef46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64ef47:{NFSU2_TR(0x64ef47);
if(r1(R+518)){{goto L64ef55;}}
}
B64ef49:L64ef49:{c.instructions+=2;NFSU2_TR(0x64ef49);
__builtin_memmove((R+4),(R+0),4);
}
B64ef4b:{NFSU2_TR(0x64ef4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64ef50ull));
TAIL_STATIC(0x6477abu,647);
}
B64ef50:L64ef50:{c.instructions+=2;NFSU2_TR(0x64ef50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ef53:{NFSU2_TR(0x64ef53);
{goto L64ef58;}
}
B64ef55:L64ef55:{c.instructions+=1;NFSU2_TR(0x64ef55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ef58:L64ef58:{c.instructions+=2;NFSU2_TR(0x64ef58);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64ef5b:{NFSU2_TR(0x64ef5b);
if(r1(R+518)){TAIL_STATIC(0x64f385u,64f);}
}
B64ef61:L64ef61:{c.instructions+=6;NFSU2_TR(0x64ef61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64ef64:{NFSU2_TR(0x64ef64);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ef65:{NFSU2_TR(0x64ef65);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ef67:{NFSU2_TR(0x64ef67);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64ef6a:{NFSU2_TR(0x64ef6a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ef6b:{NFSU2_TR(0x64ef6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64ef70ull));
TAIL_STATIC(0x647827u,647);
}
B64ef70:L64ef70:{c.instructions+=3;NFSU2_TR(0x64ef70);
__builtin_memmove((R+12),(R+0),4);
}
B64ef72:{NFSU2_TR(0x64ef72);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B64ef74:{NFSU2_TR(0x64ef74);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x64f38eu,64f);}
}
B64ef7a:L64ef7a:{c.instructions+=3;NFSU2_TR(0x64ef7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64ef7d:{NFSU2_TR(0x64ef7d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64ef7f:{NFSU2_TR(0x64ef7f);
if(r1(R+518)){TAIL_STATIC(0x64f047u,64f);}
}
B64ef85:L64ef85:{c.instructions+=2;NFSU2_TR(0x64ef85);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64ef89:{NFSU2_TR(0x64ef89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x64f047u,64f);}
}
B64ef8f:L64ef8f:{c.instructions+=10;NFSU2_TR(0x64ef8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ef92:{NFSU2_TR(0x64ef92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x328ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ef98:{NFSU2_TR(0x64ef98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x324ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ef9e:{NFSU2_TR(0x64ef9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x32cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64efa4:{NFSU2_TR(0x64efa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x330ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B64efae:{NFSU2_TR(0x64efae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x334ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64efb4:{NFSU2_TR(0x64efb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64efb7:{NFSU2_TR(0x64efb7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64efb9:{NFSU2_TR(0x64efb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64efbc:{NFSU2_TR(0x64efbc);
if(r1(R+518)){TAIL_STATIC(0x64f051u,64f);}
}
B64efc2:L64efc2:{c.instructions+=2;NFSU2_TR(0x64efc2);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64efc6:{NFSU2_TR(0x64efc6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x64f034u,64f);}
}
B64efc8:L64efc8:{c.instructions+=3;NFSU2_TR(0x64efc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64efcb:{NFSU2_TR(0x64efcb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64efcd:{NFSU2_TR(0x64efcd);
if(r1(R+518)){TAIL_STATIC(0x64f034u,64f);}
}
B64efcf:L64efcf:{c.instructions+=3;NFSU2_TR(0x64efcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64efd2:{NFSU2_TR(0x64efd2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64efd5:{NFSU2_TR(0x64efd5);
if(r1(R+518)){TAIL_STATIC(0x64f020u,64f);}
}
B64efd7:L64efd7:{c.instructions+=2;NFSU2_TR(0x64efd7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64efda:{NFSU2_TR(0x64efda);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x64f034u,64f);}
}
B64efdc:L64efdc:{c.instructions+=3;NFSU2_TR(0x64efdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64efdf:{NFSU2_TR(0x64efdf);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64efe1:{NFSU2_TR(0x64efe1);
if(r1(R+518)){TAIL_STATIC(0x64f020u,64f);}
}
B64efe3:L64efe3:{c.instructions+=2;NFSU2_TR(0x64efe3);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64efe4:{NFSU2_TR(0x64efe4);
if(r1(R+518)){TAIL_STATIC(0x64f006u,64f);}
}
B64efe6:L64efe6:{c.instructions+=2;NFSU2_TR(0x64efe6);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64efe7:{NFSU2_TR(0x64efe7);
if(r1(R+518)){{goto L64effc;}}
}
B64efe9:L64efe9:{c.instructions+=2;NFSU2_TR(0x64efe9);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64efea:{NFSU2_TR(0x64efea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x64f047u,64f);}
}
B64efec:L64efec:{c.instructions+=5;NFSU2_TR(0x64efec);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64efef:{NFSU2_TR(0x64efef);
__builtin_memmove((R+4),(R+24),4);
}
B64eff1:{NFSU2_TR(0x64eff1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64eff4:{NFSU2_TR(0x64eff4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64eff5:{NFSU2_TR(0x64eff5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64effaull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64ec29u);}goto L64ec29;}
}
B64effa:L64effa:{c.instructions+=1;NFSU2_TR(0x64effa);
TAIL_STATIC(0x64f014u,64f);
}
B64effc:L64effc:{c.instructions+=3;NFSU2_TR(0x64effc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64effd:{NFSU2_TR(0x64effd);
__builtin_memmove((R+4),(R+24),4);
}
B64efff:{NFSU2_TR(0x64efff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64f004ull));
TAIL_STATIC(0x64ba07u,64b);
}
XIT:NFSU2_TR_EXIT(0x64e,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
