#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5d0(u8* __restrict R,Cpu& c);
u32 body_641(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_760(u8* __restrict R,Cpu& c);
u32 body_761(u8* __restrict R,Cpu& c);
u32 body_765(u8* __restrict R,Cpu& c);
u32 body_766(u8* __restrict R,Cpu& c);
u32 body_76c(u8* __restrict R,Cpu& c);
u32 body_76d(u8* __restrict R,Cpu& c);
u32 body_76f(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x76e,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x76e,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_76e(u8* __restrict R,Cpu& c);
u32 page_76e(Cpu& c){return body_76e(c.regs.data(),c);}
__attribute__((noinline)) u32 body_76e(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x76e002:goto L76e002;
case 0x76e004:goto L76e004;
case 0x76e008:c.instructions+=1;goto B76e008;
case 0x76e00a:goto L76e00a;
case 0x76e00f:c.instructions+=1;goto B76e00f;
case 0x76e011:goto L76e011;
case 0x76e013:c.instructions+=1;goto B76e013;
case 0x76e015:goto L76e015;
case 0x76e019:c.instructions+=1;goto B76e019;
case 0x76e01b:goto L76e01b;
case 0x76e020:goto L76e020;
case 0x76e023:c.instructions+=2;goto B76e023;
case 0x76e024:c.instructions+=1;goto B76e024;
case 0x76e029:goto L76e029;
case 0x76e02d:goto L76e02d;
case 0x76e031:c.instructions+=3;goto B76e031;
case 0x76e032:c.instructions+=2;goto B76e032;
case 0x76e033:c.instructions+=1;goto B76e033;
case 0x76e038:goto L76e038;
case 0x76e03d:c.instructions+=3;goto B76e03d;
case 0x76e040:c.instructions+=2;goto B76e040;
case 0x76e041:c.instructions+=1;goto B76e041;
case 0x76e046:goto L76e046;
case 0x76e04a:c.instructions+=1;goto B76e04a;
case 0x76e04c:goto L76e04c;
case 0x76e04f:c.instructions+=21;goto B76e04f;
case 0x76e051:c.instructions+=20;goto B76e051;
case 0x76e057:c.instructions+=19;goto B76e057;
case 0x76e05c:c.instructions+=18;goto B76e05c;
case 0x76e05e:c.instructions+=17;goto B76e05e;
case 0x76e061:c.instructions+=16;goto B76e061;
case 0x76e064:c.instructions+=15;goto B76e064;
case 0x76e067:c.instructions+=14;goto B76e067;
case 0x76e06a:c.instructions+=13;goto B76e06a;
case 0x76e071:c.instructions+=12;goto B76e071;
case 0x76e074:c.instructions+=11;goto B76e074;
case 0x76e077:c.instructions+=10;goto B76e077;
case 0x76e07a:c.instructions+=9;goto B76e07a;
case 0x76e07d:c.instructions+=8;goto B76e07d;
case 0x76e07f:c.instructions+=7;goto B76e07f;
case 0x76e081:c.instructions+=6;goto B76e081;
case 0x76e082:c.instructions+=5;goto B76e082;
case 0x76e085:c.instructions+=4;goto B76e085;
case 0x76e086:c.instructions+=3;goto B76e086;
case 0x76e08a:c.instructions+=2;goto B76e08a;
case 0x76e08d:c.instructions+=1;goto B76e08d;
case 0x76e092:goto L76e092;
case 0x76e095:c.instructions+=2;goto B76e095;
case 0x76e09b:c.instructions+=1;goto B76e09b;
case 0x76e09d:goto L76e09d;
case 0x76e0a0:c.instructions+=5;goto B76e0a0;
case 0x76e0a1:c.instructions+=4;goto B76e0a1;
case 0x76e0a4:c.instructions+=3;goto B76e0a4;
case 0x76e0a5:c.instructions+=2;goto B76e0a5;
case 0x76e0a6:c.instructions+=1;goto B76e0a6;
case 0x76e0ab:goto L76e0ab;
case 0x76e0ac:c.instructions+=1;goto B76e0ac;
case 0x76e0ad:goto L76e0ad;
case 0x76e0b1:c.instructions+=3;goto B76e0b1;
case 0x76e0b4:c.instructions+=2;goto B76e0b4;
case 0x76e0b7:c.instructions+=1;goto B76e0b7;
case 0x76e0b9:goto L76e0b9;
case 0x76e0bc:c.instructions+=3;goto B76e0bc;
case 0x76e0be:c.instructions+=2;goto B76e0be;
case 0x76e0c0:c.instructions+=1;goto B76e0c0;
case 0x76e0c2:goto L76e0c2;
case 0x76e0c6:c.instructions+=1;goto B76e0c6;
case 0x76e0cb:goto L76e0cb;
case 0x76e0ce:c.instructions+=1;goto B76e0ce;
case 0x76e0d0:goto L76e0d0;
case 0x76e0d2:c.instructions+=1;goto B76e0d2;
case 0x76e0d3:goto L76e0d3;
case 0x76e0d7:c.instructions+=3;goto B76e0d7;
case 0x76e0dd:c.instructions+=2;goto B76e0dd;
case 0x76e0e2:c.instructions+=1;goto B76e0e2;
case 0x76e0e9:goto L76e0e9;
case 0x76e0ec:c.instructions+=2;goto B76e0ec;
case 0x76e0ed:c.instructions+=1;goto B76e0ed;
case 0x76e0f2:goto L76e0f2;
case 0x76e0f5:c.instructions+=2;goto B76e0f5;
case 0x76e0f6:c.instructions+=1;goto B76e0f6;
case 0x76e0f8:goto L76e0f8;
case 0x76e0fa:c.instructions+=1;goto B76e0fa;
case 0x76e0fc:goto L76e0fc;
case 0x76e0fe:c.instructions+=2;goto B76e0fe;
case 0x76e104:c.instructions+=1;goto B76e104;
case 0x76e106:goto L76e106;
case 0x76e109:c.instructions+=2;goto B76e109;
case 0x76e10a:c.instructions+=1;goto B76e10a;
case 0x76e10f:goto L76e10f;
case 0x76e110:c.instructions+=2;goto B76e110;
case 0x76e111:c.instructions+=1;goto B76e111;
case 0x76e113:goto L76e113;
case 0x76e116:c.instructions+=4;goto B76e116;
case 0x76e118:c.instructions+=3;goto B76e118;
case 0x76e11b:c.instructions+=2;goto B76e11b;
case 0x76e11e:c.instructions+=1;goto B76e11e;
case 0x76e120:goto L76e120;
case 0x76e123:goto L76e123;
case 0x76e126:c.instructions+=7;goto B76e126;
case 0x76e129:c.instructions+=6;goto B76e129;
case 0x76e12a:c.instructions+=5;goto B76e12a;
case 0x76e12b:c.instructions+=4;goto B76e12b;
case 0x76e12e:c.instructions+=3;goto B76e12e;
case 0x76e12f:c.instructions+=2;goto B76e12f;
case 0x76e130:c.instructions+=1;goto B76e130;
case 0x76e135:goto L76e135;
case 0x76e138:c.instructions+=2;goto B76e138;
case 0x76e139:c.instructions+=1;goto B76e139;
case 0x76e13e:goto L76e13e;
case 0x76e141:c.instructions+=4;goto B76e141;
case 0x76e142:c.instructions+=3;goto B76e142;
case 0x76e145:c.instructions+=2;goto B76e145;
case 0x76e146:c.instructions+=1;goto B76e146;
case 0x76e14b:goto L76e14b;
case 0x76e14e:c.instructions+=2;goto B76e14e;
case 0x76e14f:c.instructions+=1;goto B76e14f;
case 0x76e154:goto L76e154;
case 0x76e157:c.instructions+=8;goto B76e157;
case 0x76e15a:c.instructions+=7;goto B76e15a;
case 0x76e15e:c.instructions+=6;goto B76e15e;
case 0x76e160:c.instructions+=5;goto B76e160;
case 0x76e163:c.instructions+=4;goto B76e163;
case 0x76e166:c.instructions+=3;goto B76e166;
case 0x76e169:c.instructions+=2;goto B76e169;
case 0x76e16b:c.instructions+=1;goto B76e16b;
case 0x76e16d:goto L76e16d;
case 0x76e170:goto L76e170;
case 0x76e171:c.instructions+=5;goto B76e171;
case 0x76e173:c.instructions+=4;goto B76e173;
case 0x76e174:c.instructions+=3;goto B76e174;
case 0x76e177:c.instructions+=2;goto B76e177;
case 0x76e17a:c.instructions+=1;goto B76e17a;
case 0x76e17c:goto L76e17c;
case 0x76e17e:goto L76e17e;
case 0x76e181:c.instructions+=1;goto B76e181;
case 0x76e183:goto L76e183;
case 0x76e186:c.instructions+=1;goto B76e186;
case 0x76e187:goto L76e187;
case 0x76e189:c.instructions+=1;goto B76e189;
case 0x76e18b:goto L76e18b;
case 0x76e18d:c.instructions+=1;goto B76e18d;
case 0x76e18f:goto L76e18f;
case 0x76e190:c.instructions+=1;goto B76e190;
case 0x76e193:goto L76e193;
case 0x76e195:goto L76e195;
case 0x76e197:c.instructions+=4;goto B76e197;
case 0x76e199:c.instructions+=3;goto B76e199;
case 0x76e19c:c.instructions+=2;goto B76e19c;
case 0x76e19f:c.instructions+=1;goto B76e19f;
case 0x76e1a4:goto L76e1a4;
case 0x76e1a7:goto L76e1a7;
case 0x76e1aa:c.instructions+=5;goto B76e1aa;
case 0x76e1ad:c.instructions+=4;goto B76e1ad;
case 0x76e1ae:c.instructions+=3;goto B76e1ae;
case 0x76e1af:c.instructions+=2;goto B76e1af;
case 0x76e1b0:c.instructions+=1;goto B76e1b0;
case 0x76e1b5:goto L76e1b5;
case 0x76e1b6:c.instructions+=1;goto B76e1b6;
case 0x76e1b7:goto L76e1b7;
case 0x76e1ba:c.instructions+=1;goto B76e1ba;
case 0x76e1bc:goto L76e1bc;
case 0x76e1bd:goto L76e1bd;
case 0x76e1bf:c.instructions+=1;goto B76e1bf;
case 0x76e1c1:goto L76e1c1;
case 0x76e1c3:c.instructions+=1;goto B76e1c3;
case 0x76e1c5:goto L76e1c5;
case 0x76e1c8:goto L76e1c8;
case 0x76e1cc:c.instructions+=6;goto B76e1cc;
case 0x76e1d0:c.instructions+=5;goto B76e1d0;
case 0x76e1d2:c.instructions+=4;goto B76e1d2;
case 0x76e1d6:c.instructions+=3;goto B76e1d6;
case 0x76e1da:c.instructions+=2;goto B76e1da;
case 0x76e1db:c.instructions+=1;goto B76e1db;
case 0x76e1dd:goto L76e1dd;
case 0x76e1de:c.instructions+=28;goto B76e1de;
case 0x76e1e0:c.instructions+=27;goto B76e1e0;
case 0x76e1e3:c.instructions+=26;goto B76e1e3;
case 0x76e1e8:c.instructions+=25;goto B76e1e8;
case 0x76e1eb:c.instructions+=24;goto B76e1eb;
case 0x76e1ec:c.instructions+=23;goto B76e1ec;
case 0x76e1ef:c.instructions+=22;goto B76e1ef;
case 0x76e1f2:c.instructions+=21;goto B76e1f2;
case 0x76e1f4:c.instructions+=20;goto B76e1f4;
case 0x76e1f6:c.instructions+=19;goto B76e1f6;
case 0x76e1fa:c.instructions+=18;goto B76e1fa;
case 0x76e1fb:c.instructions+=17;goto B76e1fb;
case 0x76e1fe:c.instructions+=16;goto B76e1fe;
case 0x76e201:c.instructions+=15;goto B76e201;
case 0x76e204:c.instructions+=14;goto B76e204;
case 0x76e207:c.instructions+=13;goto B76e207;
case 0x76e20a:c.instructions+=12;goto B76e20a;
case 0x76e20e:c.instructions+=11;goto B76e20e;
case 0x76e20f:c.instructions+=10;goto B76e20f;
case 0x76e211:c.instructions+=9;goto B76e211;
case 0x76e216:c.instructions+=8;goto B76e216;
case 0x76e218:c.instructions+=7;goto B76e218;
case 0x76e21a:c.instructions+=6;goto B76e21a;
case 0x76e21c:c.instructions+=5;goto B76e21c;
case 0x76e222:c.instructions+=4;goto B76e222;
case 0x76e226:c.instructions+=3;goto B76e226;
case 0x76e229:c.instructions+=2;goto B76e229;
case 0x76e22c:c.instructions+=1;goto B76e22c;
case 0x76e232:goto L76e232;
case 0x76e237:c.instructions+=1;goto B76e237;
case 0x76e23d:goto L76e23d;
case 0x76e242:c.instructions+=1;goto B76e242;
case 0x76e248:goto L76e248;
case 0x76e24d:c.instructions+=1;goto B76e24d;
case 0x76e24f:goto L76e24f;
case 0x76e251:c.instructions+=1;goto B76e251;
case 0x76e253:goto L76e253;
case 0x76e256:c.instructions+=2;goto B76e256;
case 0x76e25b:c.instructions+=1;goto B76e25b;
case 0x76e25d:goto L76e25d;
case 0x76e260:c.instructions+=3;goto B76e260;
case 0x76e262:c.instructions+=2;goto B76e262;
case 0x76e265:c.instructions+=1;goto B76e265;
case 0x76e267:goto L76e267;
case 0x76e26a:c.instructions+=1;goto B76e26a;
case 0x76e26c:goto L76e26c;
case 0x76e26e:c.instructions+=1;goto B76e26e;
case 0x76e270:goto L76e270;
case 0x76e275:goto L76e275;
case 0x76e277:goto L76e277;
case 0x76e27a:c.instructions+=1;goto B76e27a;
case 0x76e27c:goto L76e27c;
case 0x76e27f:c.instructions+=2;goto B76e27f;
case 0x76e282:c.instructions+=1;goto B76e282;
case 0x76e284:goto L76e284;
case 0x76e287:c.instructions+=1;goto B76e287;
case 0x76e289:goto L76e289;
case 0x76e28b:c.instructions+=1;goto B76e28b;
case 0x76e28d:goto L76e28d;
case 0x76e290:c.instructions+=3;goto B76e290;
case 0x76e293:c.instructions+=2;goto B76e293;
case 0x76e295:c.instructions+=1;goto B76e295;
case 0x76e29a:goto L76e29a;
case 0x76e29d:c.instructions+=3;goto B76e29d;
case 0x76e2a0:c.instructions+=2;goto B76e2a0;
case 0x76e2a3:c.instructions+=1;goto B76e2a3;
case 0x76e2aa:goto L76e2aa;
case 0x76e2ad:c.instructions+=3;goto B76e2ad;
case 0x76e2af:c.instructions+=2;goto B76e2af;
case 0x76e2b3:c.instructions+=1;goto B76e2b3;
case 0x76e2b5:goto L76e2b5;
case 0x76e2b7:c.instructions+=5;goto B76e2b7;
case 0x76e2ba:c.instructions+=4;goto B76e2ba;
case 0x76e2bd:c.instructions+=3;goto B76e2bd;
case 0x76e2c0:c.instructions+=2;goto B76e2c0;
case 0x76e2c3:c.instructions+=1;goto B76e2c3;
case 0x76e2c6:goto L76e2c6;
case 0x76e2c9:c.instructions+=10;goto B76e2c9;
case 0x76e2cc:c.instructions+=9;goto B76e2cc;
case 0x76e2cf:c.instructions+=8;goto B76e2cf;
case 0x76e2d2:c.instructions+=7;goto B76e2d2;
case 0x76e2d5:c.instructions+=6;goto B76e2d5;
case 0x76e2d8:c.instructions+=5;goto B76e2d8;
case 0x76e2db:c.instructions+=4;goto B76e2db;
case 0x76e2dc:c.instructions+=3;goto B76e2dc;
case 0x76e2dd:c.instructions+=2;goto B76e2dd;
case 0x76e2df:c.instructions+=1;goto B76e2df;
case 0x76e2e4:goto L76e2e4;
case 0x76e2e7:c.instructions+=2;goto B76e2e7;
case 0x76e2e9:c.instructions+=1;goto B76e2e9;
case 0x76e2eb:goto L76e2eb;
case 0x76e2ee:c.instructions+=1;goto B76e2ee;
case 0x76e2f1:goto L76e2f1;
case 0x76e2f5:c.instructions+=3;goto B76e2f5;
case 0x76e2f9:c.instructions+=2;goto B76e2f9;
case 0x76e2fc:c.instructions+=1;goto B76e2fc;
case 0x76e2fe:goto L76e2fe;
case 0x76e302:c.instructions+=4;goto B76e302;
case 0x76e305:c.instructions+=3;goto B76e305;
case 0x76e308:c.instructions+=2;goto B76e308;
case 0x76e30c:c.instructions+=1;goto B76e30c;
case 0x76e30e:goto L76e30e;
case 0x76e315:c.instructions+=2;goto B76e315;
case 0x76e31a:c.instructions+=1;goto B76e31a;
case 0x76e31c:goto L76e31c;
case 0x76e320:c.instructions+=1;goto B76e320;
case 0x76e322:goto L76e322;
case 0x76e325:c.instructions+=2;goto B76e325;
case 0x76e326:c.instructions+=1;goto B76e326;
case 0x76e32b:goto L76e32b;
case 0x76e332:c.instructions+=3;goto B76e332;
case 0x76e337:c.instructions+=2;goto B76e337;
case 0x76e338:c.instructions+=1;goto B76e338;
case 0x76e33a:goto L76e33a;
case 0x76e33f:c.instructions+=1;goto B76e33f;
case 0x76e341:goto L76e341;
case 0x76e348:c.instructions+=2;goto B76e348;
case 0x76e34d:c.instructions+=1;goto B76e34d;
case 0x76e34f:goto L76e34f;
case 0x76e352:c.instructions+=3;goto B76e352;
case 0x76e354:c.instructions+=2;goto B76e354;
case 0x76e357:c.instructions+=1;goto B76e357;
case 0x76e35a:goto L76e35a;
case 0x76e35e:c.instructions+=1;goto B76e35e;
case 0x76e360:goto L76e360;
case 0x76e363:goto L76e363;
case 0x76e366:c.instructions+=2;goto B76e366;
case 0x76e367:c.instructions+=1;goto B76e367;
case 0x76e36c:goto L76e36c;
case 0x76e36d:c.instructions+=2;goto B76e36d;
case 0x76e36e:c.instructions+=1;goto B76e36e;
case 0x76e370:goto L76e370;
case 0x76e374:c.instructions+=1;goto B76e374;
case 0x76e376:goto L76e376;
case 0x76e37a:goto L76e37a;
case 0x76e380:c.instructions+=1;goto B76e380;
case 0x76e382:goto L76e382;
case 0x76e385:c.instructions+=3;goto B76e385;
case 0x76e38a:c.instructions+=2;goto B76e38a;
case 0x76e38f:c.instructions+=1;goto B76e38f;
case 0x76e391:goto L76e391;
case 0x76e395:c.instructions+=1;goto B76e395;
case 0x76e397:goto L76e397;
case 0x76e39b:c.instructions+=2;goto B76e39b;
case 0x76e39f:c.instructions+=1;goto B76e39f;
case 0x76e3a1:goto L76e3a1;
case 0x76e3a5:c.instructions+=2;goto B76e3a5;
case 0x76e3ab:c.instructions+=1;goto B76e3ab;
case 0x76e3ad:goto L76e3ad;
case 0x76e3b0:c.instructions+=2;goto B76e3b0;
case 0x76e3b6:c.instructions+=1;goto B76e3b6;
case 0x76e3b8:goto L76e3b8;
case 0x76e3bc:c.instructions+=1;goto B76e3bc;
case 0x76e3be:goto L76e3be;
case 0x76e3c1:c.instructions+=1;goto B76e3c1;
case 0x76e3c3:goto L76e3c3;
case 0x76e3c6:goto L76e3c6;
case 0x76e3c9:c.instructions+=2;goto B76e3c9;
case 0x76e3cd:c.instructions+=1;goto B76e3cd;
case 0x76e3cf:goto L76e3cf;
case 0x76e3d3:c.instructions+=6;goto B76e3d3;
case 0x76e3d6:c.instructions+=5;goto B76e3d6;
case 0x76e3d9:c.instructions+=4;goto B76e3d9;
case 0x76e3dc:c.instructions+=3;goto B76e3dc;
case 0x76e3df:c.instructions+=2;goto B76e3df;
case 0x76e3e2:c.instructions+=1;goto B76e3e2;
case 0x76e3e4:goto L76e3e4;
case 0x76e3e8:c.instructions+=1;goto B76e3e8;
case 0x76e3ea:goto L76e3ea;
case 0x76e3ed:c.instructions+=6;goto B76e3ed;
case 0x76e3ef:c.instructions+=5;goto B76e3ef;
case 0x76e3f3:c.instructions+=4;goto B76e3f3;
case 0x76e3f9:c.instructions+=3;goto B76e3f9;
case 0x76e3ff:c.instructions+=2;goto B76e3ff;
case 0x76e402:c.instructions+=1;goto B76e402;
case 0x76e405:goto L76e405;
case 0x76e408:c.instructions+=5;goto B76e408;
case 0x76e40b:c.instructions+=4;goto B76e40b;
case 0x76e40c:c.instructions+=3;goto B76e40c;
case 0x76e40d:c.instructions+=2;goto B76e40d;
case 0x76e40e:c.instructions+=1;goto B76e40e;
case 0x76e413:goto L76e413;
case 0x76e414:c.instructions+=1;goto B76e414;
case 0x76e415:goto L76e415;
case 0x76e416:c.instructions+=11;goto B76e416;
case 0x76e418:c.instructions+=10;goto B76e418;
case 0x76e41b:c.instructions+=9;goto B76e41b;
case 0x76e420:c.instructions+=8;goto B76e420;
case 0x76e423:c.instructions+=7;goto B76e423;
case 0x76e424:c.instructions+=6;goto B76e424;
case 0x76e429:c.instructions+=5;goto B76e429;
case 0x76e42b:c.instructions+=4;goto B76e42b;
case 0x76e42e:c.instructions+=3;goto B76e42e;
case 0x76e431:c.instructions+=2;goto B76e431;
case 0x76e434:c.instructions+=1;goto B76e434;
case 0x76e436:goto L76e436;
case 0x76e438:goto L76e438;
case 0x76e43b:c.instructions+=2;goto B76e43b;
case 0x76e440:c.instructions+=1;goto B76e440;
case 0x76e443:goto L76e443;
case 0x76e446:c.instructions+=1;goto B76e446;
case 0x76e448:goto L76e448;
case 0x76e44b:c.instructions+=1;goto B76e44b;
case 0x76e44e:goto L76e44e;
case 0x76e451:c.instructions+=1;goto B76e451;
case 0x76e453:goto L76e453;
case 0x76e454:c.instructions+=1;goto B76e454;
case 0x76e455:goto L76e455;
case 0x76e458:c.instructions+=5;goto B76e458;
case 0x76e45c:c.instructions+=4;goto B76e45c;
case 0x76e45f:c.instructions+=3;goto B76e45f;
case 0x76e462:c.instructions+=2;goto B76e462;
case 0x76e464:c.instructions+=1;goto B76e464;
case 0x76e466:goto L76e466;
case 0x76e469:c.instructions+=3;goto B76e469;
case 0x76e46c:c.instructions+=2;goto B76e46c;
case 0x76e471:c.instructions+=1;goto B76e471;
case 0x76e473:goto L76e473;
case 0x76e476:c.instructions+=5;goto B76e476;
case 0x76e477:c.instructions+=4;goto B76e477;
case 0x76e478:c.instructions+=3;goto B76e478;
case 0x76e479:c.instructions+=2;goto B76e479;
case 0x76e47c:c.instructions+=1;goto B76e47c;
case 0x76e47f:goto L76e47f;
case 0x76e480:c.instructions+=2;goto B76e480;
case 0x76e483:c.instructions+=1;goto B76e483;
case 0x76e488:goto L76e488;
case 0x76e489:c.instructions+=2;goto B76e489;
case 0x76e48a:c.instructions+=1;goto B76e48a;
case 0x76e48c:goto L76e48c;
case 0x76e48f:c.instructions+=1;goto B76e48f;
case 0x76e491:goto L76e491;
case 0x76e492:c.instructions+=1;goto B76e492;
case 0x76e493:goto L76e493;
case 0x76e496:c.instructions+=3;goto B76e496;
case 0x76e499:c.instructions+=2;goto B76e499;
case 0x76e49a:c.instructions+=1;goto B76e49a;
case 0x76e49f:goto L76e49f;
case 0x76e4a0:c.instructions+=1;goto B76e4a0;
case 0x76e4a1:goto L76e4a1;
case 0x76e4a3:c.instructions+=2;goto B76e4a3;
case 0x76e4a8:c.instructions+=1;goto B76e4a8;
case 0x76e4ad:goto L76e4ad;
case 0x76e4af:c.instructions+=4;goto B76e4af;
case 0x76e4b1:c.instructions+=3;goto B76e4b1;
case 0x76e4b2:c.instructions+=2;goto B76e4b2;
case 0x76e4b8:c.instructions+=1;goto B76e4b8;
case 0x76e4ba:goto L76e4ba;
case 0x76e4bb:c.instructions+=4;goto B76e4bb;
case 0x76e4bc:c.instructions+=3;goto B76e4bc;
case 0x76e4bd:c.instructions+=2;goto B76e4bd;
case 0x76e4be:c.instructions+=1;goto B76e4be;
case 0x76e4c4:goto L76e4c4;
case 0x76e4c6:c.instructions+=1;goto B76e4c6;
case 0x76e4c8:goto L76e4c8;
case 0x76e4ce:c.instructions+=1;goto B76e4ce;
case 0x76e4d0:goto L76e4d0;
case 0x76e4d6:goto L76e4d6;
case 0x76e4d9:c.instructions+=1;goto B76e4d9;
case 0x76e4db:goto L76e4db;
case 0x76e4e5:goto L76e4e5;
case 0x76e4ea:c.instructions+=2;goto B76e4ea;
case 0x76e4ec:c.instructions+=1;goto B76e4ec;
case 0x76e4ee:goto L76e4ee;
case 0x76e4f1:c.instructions+=4;goto B76e4f1;
case 0x76e4f4:c.instructions+=3;goto B76e4f4;
case 0x76e4f7:c.instructions+=2;goto B76e4f7;
case 0x76e4fa:c.instructions+=1;goto B76e4fa;
case 0x76e500:goto L76e500;
case 0x76e505:goto L76e505;
case 0x76e508:c.instructions+=1;goto B76e508;
case 0x76e50a:goto L76e50a;
case 0x76e50c:c.instructions+=1;goto B76e50c;
case 0x76e50e:goto L76e50e;
case 0x76e511:c.instructions+=3;goto B76e511;
case 0x76e514:c.instructions+=2;goto B76e514;
case 0x76e517:c.instructions+=1;goto B76e517;
case 0x76e519:goto L76e519;
case 0x76e51e:c.instructions+=1;goto B76e51e;
case 0x76e521:goto L76e521;
case 0x76e522:c.instructions+=4;goto B76e522;
case 0x76e523:c.instructions+=3;goto B76e523;
case 0x76e526:c.instructions+=2;goto B76e526;
case 0x76e529:c.instructions+=1;goto B76e529;
case 0x76e52f:goto L76e52f;
case 0x76e532:c.instructions+=2;goto B76e532;
case 0x76e534:c.instructions+=1;goto B76e534;
case 0x76e536:goto L76e536;
case 0x76e538:c.instructions+=1;goto B76e538;
case 0x76e53d:goto L76e53d;
case 0x76e540:c.instructions+=3;goto B76e540;
case 0x76e543:c.instructions+=2;goto B76e543;
case 0x76e546:c.instructions+=1;goto B76e546;
case 0x76e54b:goto L76e54b;
case 0x76e54e:c.instructions+=4;goto B76e54e;
case 0x76e550:c.instructions+=3;goto B76e550;
case 0x76e553:c.instructions+=2;goto B76e553;
case 0x76e557:c.instructions+=1;goto B76e557;
case 0x76e559:goto L76e559;
case 0x76e55b:c.instructions+=2;goto B76e55b;
case 0x76e55c:c.instructions+=1;goto B76e55c;
case 0x76e55d:goto L76e55d;
case 0x76e560:c.instructions+=1;goto B76e560;
case 0x76e565:goto L76e565;
case 0x76e567:c.instructions+=4;goto B76e567;
case 0x76e569:c.instructions+=3;goto B76e569;
case 0x76e56d:c.instructions+=2;goto B76e56d;
case 0x76e56f:c.instructions+=1;goto B76e56f;
case 0x76e570:goto L76e570;
case 0x76e572:c.instructions+=1;goto B76e572;
case 0x76e574:goto L76e574;
case 0x76e577:c.instructions+=1;goto B76e577;
case 0x76e57c:goto L76e57c;
case 0x76e57d:c.instructions+=3;goto B76e57d;
case 0x76e57f:c.instructions+=2;goto B76e57f;
case 0x76e581:c.instructions+=1;goto B76e581;
case 0x76e583:goto L76e583;
case 0x76e586:goto L76e586;
case 0x76e589:c.instructions+=4;goto B76e589;
case 0x76e58a:c.instructions+=3;goto B76e58a;
case 0x76e58d:c.instructions+=2;goto B76e58d;
case 0x76e590:c.instructions+=1;goto B76e590;
case 0x76e596:goto L76e596;
case 0x76e598:c.instructions+=1;goto B76e598;
case 0x76e59a:goto L76e59a;
case 0x76e59d:c.instructions+=1;goto B76e59d;
case 0x76e59f:goto L76e59f;
case 0x76e5a0:c.instructions+=2;goto B76e5a0;
case 0x76e5a1:c.instructions+=1;goto B76e5a1;
case 0x76e5a3:goto L76e5a3;
case 0x76e5a6:c.instructions+=1;goto B76e5a6;
case 0x76e5a9:goto L76e5a9;
case 0x76e5ab:c.instructions+=4;goto B76e5ab;
case 0x76e5ac:c.instructions+=3;goto B76e5ac;
case 0x76e5ad:c.instructions+=2;goto B76e5ad;
case 0x76e5b0:c.instructions+=1;goto B76e5b0;
case 0x76e5b6:goto L76e5b6;
case 0x76e5b9:goto L76e5b9;
case 0x76e5bc:c.instructions+=1;goto B76e5bc;
case 0x76e5be:goto L76e5be;
case 0x76e5bf:c.instructions+=1;goto B76e5bf;
case 0x76e5c4:goto L76e5c4;
case 0x76e5c5:goto L76e5c5;
case 0x76e5c8:goto L76e5c8;
case 0x76e5cb:c.instructions+=1;goto B76e5cb;
case 0x76e5d0:goto L76e5d0;
case 0x76e5d1:goto L76e5d1;
case 0x76e5d3:c.instructions+=2;goto B76e5d3;
case 0x76e5d8:c.instructions+=1;goto B76e5d8;
case 0x76e5dd:goto L76e5dd;
case 0x76e5df:c.instructions+=2;goto B76e5df;
case 0x76e5e5:c.instructions+=1;goto B76e5e5;
case 0x76e5e7:goto L76e5e7;
case 0x76e5e8:c.instructions+=6;goto B76e5e8;
case 0x76e5e9:c.instructions+=5;goto B76e5e9;
case 0x76e5eb:c.instructions+=4;goto B76e5eb;
case 0x76e5ec:c.instructions+=3;goto B76e5ec;
case 0x76e5ed:c.instructions+=2;goto B76e5ed;
case 0x76e5ee:c.instructions+=1;goto B76e5ee;
case 0x76e5f4:goto L76e5f4;
case 0x76e5f6:c.instructions+=1;goto B76e5f6;
case 0x76e5f8:goto L76e5f8;
case 0x76e5fe:c.instructions+=1;goto B76e5fe;
case 0x76e600:goto L76e600;
case 0x76e606:goto L76e606;
case 0x76e609:c.instructions+=1;goto B76e609;
case 0x76e60b:goto L76e60b;
case 0x76e615:goto L76e615;
case 0x76e61a:c.instructions+=2;goto B76e61a;
case 0x76e61d:c.instructions+=1;goto B76e61d;
case 0x76e623:goto L76e623;
case 0x76e625:c.instructions+=1;goto B76e625;
case 0x76e62b:goto L76e62b;
case 0x76e62e:c.instructions+=1;goto B76e62e;
case 0x76e630:goto L76e630;
case 0x76e633:c.instructions+=3;goto B76e633;
case 0x76e636:c.instructions+=2;goto B76e636;
case 0x76e639:c.instructions+=1;goto B76e639;
case 0x76e63b:goto L76e63b;
case 0x76e640:c.instructions+=1;goto B76e640;
case 0x76e643:goto L76e643;
case 0x76e644:c.instructions+=4;goto B76e644;
case 0x76e645:c.instructions+=3;goto B76e645;
case 0x76e648:c.instructions+=2;goto B76e648;
case 0x76e64b:c.instructions+=1;goto B76e64b;
case 0x76e651:goto L76e651;
case 0x76e653:c.instructions+=3;goto B76e653;
case 0x76e656:c.instructions+=2;goto B76e656;
case 0x76e658:c.instructions+=1;goto B76e658;
case 0x76e65a:goto L76e65a;
case 0x76e65c:c.instructions+=1;goto B76e65c;
case 0x76e661:goto L76e661;
case 0x76e664:c.instructions+=4;goto B76e664;
case 0x76e667:c.instructions+=3;goto B76e667;
case 0x76e66a:c.instructions+=2;goto B76e66a;
case 0x76e66d:c.instructions+=1;goto B76e66d;
case 0x76e672:goto L76e672;
case 0x76e675:c.instructions+=4;goto B76e675;
case 0x76e677:c.instructions+=3;goto B76e677;
case 0x76e67a:c.instructions+=2;goto B76e67a;
case 0x76e67e:c.instructions+=1;goto B76e67e;
case 0x76e680:goto L76e680;
case 0x76e682:c.instructions+=2;goto B76e682;
case 0x76e683:c.instructions+=1;goto B76e683;
case 0x76e684:goto L76e684;
case 0x76e687:c.instructions+=1;goto B76e687;
case 0x76e68c:goto L76e68c;
case 0x76e68e:c.instructions+=3;goto B76e68e;
case 0x76e690:c.instructions+=2;goto B76e690;
case 0x76e694:c.instructions+=1;goto B76e694;
case 0x76e697:goto L76e697;
case 0x76e699:c.instructions+=1;goto B76e699;
case 0x76e69b:goto L76e69b;
case 0x76e69e:c.instructions+=2;goto B76e69e;
case 0x76e69f:c.instructions+=1;goto B76e69f;
case 0x76e6a4:goto L76e6a4;
case 0x76e6a5:c.instructions+=3;goto B76e6a5;
case 0x76e6a7:c.instructions+=2;goto B76e6a7;
case 0x76e6a9:c.instructions+=1;goto B76e6a9;
case 0x76e6ab:goto L76e6ab;
case 0x76e6b2:goto L76e6b2;
case 0x76e6b3:c.instructions+=4;goto B76e6b3;
case 0x76e6b4:c.instructions+=3;goto B76e6b4;
case 0x76e6b7:c.instructions+=2;goto B76e6b7;
case 0x76e6ba:c.instructions+=1;goto B76e6ba;
case 0x76e6c0:goto L76e6c0;
case 0x76e6c2:c.instructions+=1;goto B76e6c2;
case 0x76e6c4:goto L76e6c4;
case 0x76e6c5:c.instructions+=3;goto B76e6c5;
case 0x76e6c6:c.instructions+=2;goto B76e6c6;
case 0x76e6c9:c.instructions+=1;goto B76e6c9;
case 0x76e6cb:goto L76e6cb;
case 0x76e6cc:c.instructions+=2;goto B76e6cc;
case 0x76e6cd:c.instructions+=1;goto B76e6cd;
case 0x76e6cf:goto L76e6cf;
case 0x76e6d2:c.instructions+=1;goto B76e6d2;
case 0x76e6d5:goto L76e6d5;
case 0x76e6d7:c.instructions+=4;goto B76e6d7;
case 0x76e6d8:c.instructions+=3;goto B76e6d8;
case 0x76e6d9:c.instructions+=2;goto B76e6d9;
case 0x76e6dc:c.instructions+=1;goto B76e6dc;
case 0x76e6e2:goto L76e6e2;
case 0x76e6e5:goto L76e6e5;
case 0x76e6e8:c.instructions+=1;goto B76e6e8;
case 0x76e6ea:goto L76e6ea;
case 0x76e6eb:c.instructions+=1;goto B76e6eb;
case 0x76e6f0:goto L76e6f0;
case 0x76e6f1:goto L76e6f1;
case 0x76e6f4:c.instructions+=1;goto B76e6f4;
case 0x76e6f6:goto L76e6f6;
case 0x76e6f9:c.instructions+=4;goto B76e6f9;
case 0x76e6fc:c.instructions+=3;goto B76e6fc;
case 0x76e6ff:c.instructions+=2;goto B76e6ff;
case 0x76e702:c.instructions+=1;goto B76e702;
case 0x76e708:goto L76e708;
case 0x76e70b:c.instructions+=1;goto B76e70b;
case 0x76e710:goto L76e710;
case 0x76e720:goto L76e720;
case 0x76e721:c.instructions+=7;goto B76e721;
case 0x76e723:c.instructions+=6;goto B76e723;
case 0x76e724:c.instructions+=5;goto B76e724;
case 0x76e725:c.instructions+=4;goto B76e725;
case 0x76e726:c.instructions+=3;goto B76e726;
case 0x76e729:c.instructions+=2;goto B76e729;
case 0x76e72b:c.instructions+=1;goto B76e72b;
case 0x76e72d:goto L76e72d;
case 0x76e730:c.instructions+=5;goto B76e730;
case 0x76e733:c.instructions+=4;goto B76e733;
case 0x76e735:c.instructions+=3;goto B76e735;
case 0x76e737:c.instructions+=2;goto B76e737;
case 0x76e739:c.instructions+=1;goto B76e739;
case 0x76e73c:goto L76e73c;
case 0x76e73e:c.instructions+=3;goto B76e73e;
case 0x76e740:c.instructions+=2;goto B76e740;
case 0x76e742:c.instructions+=1;goto B76e742;
case 0x76e744:goto L76e744;
case 0x76e746:c.instructions+=1;goto B76e746;
case 0x76e748:goto L76e748;
case 0x76e74b:c.instructions+=3;goto B76e74b;
case 0x76e74e:c.instructions+=2;goto B76e74e;
case 0x76e750:c.instructions+=1;goto B76e750;
case 0x76e752:goto L76e752;
case 0x76e754:c.instructions+=1;goto B76e754;
case 0x76e756:goto L76e756;
case 0x76e758:goto L76e758;
case 0x76e75a:c.instructions+=1;goto B76e75a;
case 0x76e75c:goto L76e75c;
case 0x76e75e:c.instructions+=1;goto B76e75e;
case 0x76e760:goto L76e760;
case 0x76e762:goto L76e762;
case 0x76e764:c.instructions+=1;goto B76e764;
case 0x76e766:goto L76e766;
case 0x76e769:c.instructions+=1;goto B76e769;
case 0x76e76b:goto L76e76b;
case 0x76e76d:c.instructions+=2;goto B76e76d;
case 0x76e76f:c.instructions+=1;goto B76e76f;
case 0x76e771:goto L76e771;
case 0x76e776:c.instructions+=1;goto B76e776;
case 0x76e778:goto L76e778;
case 0x76e77a:goto L76e77a;
case 0x76e77c:c.instructions+=5;goto B76e77c;
case 0x76e77d:c.instructions+=4;goto B76e77d;
case 0x76e77e:c.instructions+=3;goto B76e77e;
case 0x76e77f:c.instructions+=2;goto B76e77f;
case 0x76e780:c.instructions+=1;goto B76e780;
case 0x76e781:goto L76e781;
case 0x76e782:c.instructions+=10;goto B76e782;
case 0x76e784:c.instructions+=9;goto B76e784;
case 0x76e785:c.instructions+=8;goto B76e785;
case 0x76e786:c.instructions+=7;goto B76e786;
case 0x76e787:c.instructions+=6;goto B76e787;
case 0x76e78a:c.instructions+=5;goto B76e78a;
case 0x76e78d:c.instructions+=4;goto B76e78d;
case 0x76e78f:c.instructions+=3;goto B76e78f;
case 0x76e792:c.instructions+=2;goto B76e792;
case 0x76e795:c.instructions+=1;goto B76e795;
case 0x76e79b:goto L76e79b;
case 0x76e79d:c.instructions+=1;goto B76e79d;
case 0x76e7a3:goto L76e7a3;
case 0x76e7a5:c.instructions+=2;goto B76e7a5;
case 0x76e7a7:c.instructions+=1;goto B76e7a7;
case 0x76e7a9:goto L76e7a9;
case 0x76e7ab:c.instructions+=2;goto B76e7ab;
case 0x76e7ae:c.instructions+=1;goto B76e7ae;
case 0x76e7b4:goto L76e7b4;
case 0x76e7b7:c.instructions+=3;goto B76e7b7;
case 0x76e7ba:c.instructions+=2;goto B76e7ba;
case 0x76e7bc:c.instructions+=1;goto B76e7bc;
case 0x76e7bf:goto L76e7bf;
case 0x76e7c2:c.instructions+=7;goto B76e7c2;
case 0x76e7c5:c.instructions+=6;goto B76e7c5;
case 0x76e7c8:c.instructions+=5;goto B76e7c8;
case 0x76e7cc:c.instructions+=4;goto B76e7cc;
case 0x76e7cf:c.instructions+=3;goto B76e7cf;
case 0x76e7d2:c.instructions+=2;goto B76e7d2;
case 0x76e7d5:c.instructions+=1;goto B76e7d5;
case 0x76e7d7:goto L76e7d7;
case 0x76e7dd:c.instructions+=1;goto B76e7dd;
case 0x76e7df:goto L76e7df;
case 0x76e7e5:c.instructions+=1;goto B76e7e5;
case 0x76e7e7:goto L76e7e7;
case 0x76e7e8:c.instructions+=1;goto B76e7e8;
case 0x76e7ed:goto L76e7ed;
case 0x76e7ef:c.instructions+=2;goto B76e7ef;
case 0x76e7f0:c.instructions+=1;goto B76e7f0;
case 0x76e7f2:goto L76e7f2;
case 0x76e7f3:c.instructions+=1;goto B76e7f3;
case 0x76e7f8:goto L76e7f8;
case 0x76e7f9:goto L76e7f9;
case 0x76e7fc:goto L76e7fc;
case 0x76e802:c.instructions+=2;goto B76e802;
case 0x76e803:c.instructions+=1;goto B76e803;
case 0x76e805:goto L76e805;
case 0x76e808:c.instructions+=10;goto B76e808;
case 0x76e80a:c.instructions+=9;goto B76e80a;
case 0x76e80d:c.instructions+=8;goto B76e80d;
case 0x76e80f:c.instructions+=7;goto B76e80f;
case 0x76e812:c.instructions+=6;goto B76e812;
case 0x76e814:c.instructions+=5;goto B76e814;
case 0x76e815:c.instructions+=4;goto B76e815;
case 0x76e816:c.instructions+=3;goto B76e816;
case 0x76e818:c.instructions+=2;goto B76e818;
case 0x76e81b:c.instructions+=1;goto B76e81b;
case 0x76e81d:goto L76e81d;
case 0x76e81e:c.instructions+=3;goto B76e81e;
case 0x76e81f:c.instructions+=2;goto B76e81f;
case 0x76e820:c.instructions+=1;goto B76e820;
case 0x76e825:goto L76e825;
case 0x76e828:c.instructions+=1;goto B76e828;
case 0x76e82a:goto L76e82a;
case 0x76e82d:c.instructions+=1;goto B76e82d;
case 0x76e82f:goto L76e82f;
case 0x76e831:c.instructions+=7;goto B76e831;
case 0x76e834:c.instructions+=6;goto B76e834;
case 0x76e83b:c.instructions+=5;goto B76e83b;
case 0x76e83d:c.instructions+=4;goto B76e83d;
case 0x76e840:c.instructions+=3;goto B76e840;
case 0x76e843:c.instructions+=2;goto B76e843;
case 0x76e846:c.instructions+=1;goto B76e846;
case 0x76e848:goto L76e848;
case 0x76e84d:goto L76e84d;
case 0x76e851:c.instructions+=1;goto B76e851;
case 0x76e853:goto L76e853;
case 0x76e855:c.instructions+=3;goto B76e855;
case 0x76e856:c.instructions+=2;goto B76e856;
case 0x76e857:c.instructions+=1;goto B76e857;
case 0x76e85c:goto L76e85c;
case 0x76e85f:goto L76e85f;
case 0x76e862:c.instructions+=3;goto B76e862;
case 0x76e865:c.instructions+=2;goto B76e865;
case 0x76e868:c.instructions+=1;goto B76e868;
case 0x76e86a:goto L76e86a;
case 0x76e86d:c.instructions+=8;goto B76e86d;
case 0x76e86f:c.instructions+=7;goto B76e86f;
case 0x76e870:c.instructions+=6;goto B76e870;
case 0x76e871:c.instructions+=5;goto B76e871;
case 0x76e874:c.instructions+=4;goto B76e874;
case 0x76e875:c.instructions+=3;goto B76e875;
case 0x76e876:c.instructions+=2;goto B76e876;
case 0x76e87a:c.instructions+=1;goto B76e87a;
case 0x76e87f:goto L76e87f;
case 0x76e882:c.instructions+=1;goto B76e882;
case 0x76e885:goto L76e885;
case 0x76e888:c.instructions+=2;goto B76e888;
case 0x76e889:c.instructions+=1;goto B76e889;
case 0x76e88b:goto L76e88b;
case 0x76e88f:c.instructions+=1;goto B76e88f;
case 0x76e891:goto L76e891;
case 0x76e893:c.instructions+=2;goto B76e893;
case 0x76e898:c.instructions+=1;goto B76e898;
case 0x76e89a:goto L76e89a;
case 0x76e89d:c.instructions+=1;goto B76e89d;
case 0x76e8a0:goto L76e8a0;
case 0x76e8a5:goto L76e8a5;
case 0x76e8a6:c.instructions+=3;goto B76e8a6;
case 0x76e8a7:c.instructions+=2;goto B76e8a7;
case 0x76e8a8:c.instructions+=1;goto B76e8a8;
case 0x76e8a9:goto L76e8a9;
case 0x76e8aa:c.instructions+=2;goto B76e8aa;
case 0x76e8ac:c.instructions+=1;goto B76e8ac;
case 0x76e8b1:goto L76e8b1;
case 0x76e8b4:c.instructions+=2;goto B76e8b4;
case 0x76e8ba:c.instructions+=1;goto B76e8ba;
case 0x76e8bc:goto L76e8bc;
case 0x76e8c1:goto L76e8c1;
case 0x76e8c5:c.instructions+=1;goto B76e8c5;
case 0x76e8c7:goto L76e8c7;
case 0x76e8c8:c.instructions+=1;goto B76e8c8;
case 0x76e8cd:goto L76e8cd;
case 0x76e8d0:c.instructions+=3;goto B76e8d0;
case 0x76e8d1:c.instructions+=2;goto B76e8d1;
case 0x76e8d2:c.instructions+=1;goto B76e8d2;
case 0x76e8d4:goto L76e8d4;
case 0x76e8d7:c.instructions+=2;goto B76e8d7;
case 0x76e8dc:c.instructions+=1;goto B76e8dc;
case 0x76e8de:goto L76e8de;
case 0x76e8df:c.instructions+=3;goto B76e8df;
case 0x76e8e1:c.instructions+=2;goto B76e8e1;
case 0x76e8e3:c.instructions+=1;goto B76e8e3;
case 0x76e8e5:goto L76e8e5;
case 0x76e8e8:c.instructions+=5;goto B76e8e8;
case 0x76e8eb:c.instructions+=4;goto B76e8eb;
case 0x76e8ee:c.instructions+=3;goto B76e8ee;
case 0x76e8f0:c.instructions+=2;goto B76e8f0;
case 0x76e8f3:c.instructions+=1;goto B76e8f3;
case 0x76e8f5:goto L76e8f5;
case 0x76e8f8:c.instructions+=1;goto B76e8f8;
case 0x76e8fa:goto L76e8fa;
case 0x76e8fd:c.instructions+=2;goto B76e8fd;
case 0x76e900:c.instructions+=1;goto B76e900;
case 0x76e902:goto L76e902;
case 0x76e903:goto L76e903;
case 0x76e907:c.instructions+=2;goto B76e907;
case 0x76e90a:c.instructions+=1;goto B76e90a;
case 0x76e90c:goto L76e90c;
case 0x76e90f:c.instructions+=6;goto B76e90f;
case 0x76e912:c.instructions+=5;goto B76e912;
case 0x76e914:c.instructions+=4;goto B76e914;
case 0x76e916:c.instructions+=3;goto B76e916;
case 0x76e918:c.instructions+=2;goto B76e918;
case 0x76e91a:c.instructions+=1;goto B76e91a;
case 0x76e91c:goto L76e91c;
case 0x76e91d:c.instructions+=3;goto B76e91d;
case 0x76e91e:c.instructions+=2;goto B76e91e;
case 0x76e91f:c.instructions+=1;goto B76e91f;
case 0x76e920:goto L76e920;
case 0x76e922:c.instructions+=1;goto B76e922;
case 0x76e930:goto L76e930;
case 0x76e931:c.instructions+=2;goto B76e931;
case 0x76e933:c.instructions+=1;goto B76e933;
case 0x76e938:goto L76e938;
case 0x76e93d:c.instructions+=1;goto B76e93d;
case 0x76e93f:goto L76e93f;
case 0x76e940:c.instructions+=1;goto B76e940;
case 0x76e945:goto L76e945;
case 0x76e946:goto L76e946;
case 0x76e948:c.instructions+=2;goto B76e948;
case 0x76e949:c.instructions+=1;goto B76e949;
case 0x76e94c:goto L76e94c;
case 0x76e952:c.instructions+=1;goto B76e952;
case 0x76e957:goto L76e957;
case 0x76e95c:c.instructions+=1;goto B76e95c;
case 0x76e961:goto L76e961;
case 0x76e964:c.instructions+=3;goto B76e964;
case 0x76e969:c.instructions+=2;goto B76e969;
case 0x76e96c:c.instructions+=1;goto B76e96c;
case 0x76e971:goto L76e971;
case 0x76e975:c.instructions+=4;goto B76e975;
case 0x76e978:c.instructions+=3;goto B76e978;
case 0x76e979:c.instructions+=2;goto B76e979;
case 0x76e97c:c.instructions+=1;goto B76e97c;
case 0x76e981:goto L76e981;
case 0x76e986:c.instructions+=4;goto B76e986;
case 0x76e989:c.instructions+=3;goto B76e989;
case 0x76e98a:c.instructions+=2;goto B76e98a;
case 0x76e991:c.instructions+=1;goto B76e991;
case 0x76e996:goto L76e996;
case 0x76e997:goto L76e997;
case 0x76e998:c.instructions+=3;goto B76e998;
case 0x76e99c:c.instructions+=2;goto B76e99c;
case 0x76e99e:c.instructions+=1;goto B76e99e;
case 0x76e9a3:goto L76e9a3;
case 0x76e9a9:c.instructions+=3;goto B76e9a9;
case 0x76e9ab:c.instructions+=2;goto B76e9ab;
case 0x76e9ac:c.instructions+=1;goto B76e9ac;
case 0x76e9af:goto L76e9af;
case 0x76e9b4:c.instructions+=1;goto B76e9b4;
case 0x76e9b9:goto L76e9b9;
case 0x76e9bc:c.instructions+=3;goto B76e9bc;
case 0x76e9c1:c.instructions+=2;goto B76e9c1;
case 0x76e9c4:c.instructions+=1;goto B76e9c4;
case 0x76e9c9:goto L76e9c9;
case 0x76e9cd:c.instructions+=4;goto B76e9cd;
case 0x76e9d0:c.instructions+=3;goto B76e9d0;
case 0x76e9d1:c.instructions+=2;goto B76e9d1;
case 0x76e9d4:c.instructions+=1;goto B76e9d4;
case 0x76e9d9:goto L76e9d9;
case 0x76e9de:c.instructions+=4;goto B76e9de;
case 0x76e9e1:c.instructions+=3;goto B76e9e1;
case 0x76e9e2:c.instructions+=2;goto B76e9e2;
case 0x76e9e9:c.instructions+=1;goto B76e9e9;
case 0x76e9ee:goto L76e9ee;
case 0x76e9f0:goto L76e9f0;
case 0x76e9f6:goto L76e9f6;
case 0x76e9fc:goto L76e9fc;
case 0x76ea02:goto L76ea02;
case 0x76ea08:goto L76ea08;
case 0x76ea0a:c.instructions+=12;goto B76ea0a;
case 0x76ea0b:c.instructions+=11;goto B76ea0b;
case 0x76ea0d:c.instructions+=10;goto B76ea0d;
case 0x76ea10:c.instructions+=9;goto B76ea10;
case 0x76ea13:c.instructions+=8;goto B76ea13;
case 0x76ea16:c.instructions+=7;goto B76ea16;
case 0x76ea17:c.instructions+=6;goto B76ea17;
case 0x76ea1a:c.instructions+=5;goto B76ea1a;
case 0x76ea1d:c.instructions+=4;goto B76ea1d;
case 0x76ea1f:c.instructions+=3;goto B76ea1f;
case 0x76ea21:c.instructions+=2;goto B76ea21;
case 0x76ea24:c.instructions+=1;goto B76ea24;
case 0x76ea2a:goto L76ea2a;
case 0x76ea2d:c.instructions+=6;goto B76ea2d;
case 0x76ea30:c.instructions+=5;goto B76ea30;
case 0x76ea31:c.instructions+=4;goto B76ea31;
case 0x76ea32:c.instructions+=3;goto B76ea32;
case 0x76ea35:c.instructions+=2;goto B76ea35;
case 0x76ea3a:c.instructions+=1;goto B76ea3a;
case 0x76ea3f:goto L76ea3f;
case 0x76ea42:c.instructions+=3;goto B76ea42;
case 0x76ea45:c.instructions+=2;goto B76ea45;
case 0x76ea48:c.instructions+=1;goto B76ea48;
case 0x76ea4e:goto L76ea4e;
case 0x76ea51:c.instructions+=7;goto B76ea51;
case 0x76ea53:c.instructions+=6;goto B76ea53;
case 0x76ea54:c.instructions+=5;goto B76ea54;
case 0x76ea57:c.instructions+=4;goto B76ea57;
case 0x76ea5a:c.instructions+=3;goto B76ea5a;
case 0x76ea5b:c.instructions+=2;goto B76ea5b;
case 0x76ea5e:c.instructions+=1;goto B76ea5e;
case 0x76ea61:goto L76ea61;
case 0x76ea64:c.instructions+=58;goto B76ea64;
case 0x76ea68:c.instructions+=57;goto B76ea68;
case 0x76ea6b:c.instructions+=56;goto B76ea6b;
case 0x76ea6e:c.instructions+=55;goto B76ea6e;
case 0x76ea70:c.instructions+=54;goto B76ea70;
case 0x76ea73:c.instructions+=53;goto B76ea73;
case 0x76ea75:c.instructions+=52;goto B76ea75;
case 0x76ea78:c.instructions+=51;goto B76ea78;
case 0x76ea7a:c.instructions+=50;goto B76ea7a;
case 0x76ea7d:c.instructions+=49;goto B76ea7d;
case 0x76ea7f:c.instructions+=48;goto B76ea7f;
case 0x76ea81:c.instructions+=47;goto B76ea81;
case 0x76ea84:c.instructions+=46;goto B76ea84;
case 0x76ea87:c.instructions+=45;goto B76ea87;
case 0x76ea89:c.instructions+=44;goto B76ea89;
case 0x76ea8b:c.instructions+=43;goto B76ea8b;
case 0x76ea8d:c.instructions+=42;goto B76ea8d;
case 0x76ea90:c.instructions+=41;goto B76ea90;
case 0x76ea92:c.instructions+=40;goto B76ea92;
case 0x76ea99:c.instructions+=39;goto B76ea99;
case 0x76ea9c:c.instructions+=38;goto B76ea9c;
case 0x76ea9e:c.instructions+=37;goto B76ea9e;
case 0x76eaa0:c.instructions+=36;goto B76eaa0;
case 0x76eaa2:c.instructions+=35;goto B76eaa2;
case 0x76eaa4:c.instructions+=34;goto B76eaa4;
case 0x76eaa7:c.instructions+=33;goto B76eaa7;
case 0x76eaa9:c.instructions+=32;goto B76eaa9;
case 0x76eaab:c.instructions+=31;goto B76eaab;
case 0x76eaad:c.instructions+=30;goto B76eaad;
case 0x76eaaf:c.instructions+=29;goto B76eaaf;
case 0x76eab6:c.instructions+=28;goto B76eab6;
case 0x76eab9:c.instructions+=27;goto B76eab9;
case 0x76eabc:c.instructions+=26;goto B76eabc;
case 0x76eabf:c.instructions+=25;goto B76eabf;
case 0x76eac1:c.instructions+=24;goto B76eac1;
case 0x76eac4:c.instructions+=23;goto B76eac4;
case 0x76eac9:c.instructions+=22;goto B76eac9;
case 0x76eacb:c.instructions+=21;goto B76eacb;
case 0x76eacd:c.instructions+=20;goto B76eacd;
case 0x76eacf:c.instructions+=19;goto B76eacf;
case 0x76ead2:c.instructions+=18;goto B76ead2;
case 0x76ead5:c.instructions+=17;goto B76ead5;
case 0x76ead7:c.instructions+=16;goto B76ead7;
case 0x76ead9:c.instructions+=15;goto B76ead9;
case 0x76eadc:c.instructions+=14;goto B76eadc;
case 0x76eadf:c.instructions+=13;goto B76eadf;
case 0x76eae1:c.instructions+=12;goto B76eae1;
case 0x76eae8:c.instructions+=11;goto B76eae8;
case 0x76eaea:c.instructions+=10;goto B76eaea;
case 0x76eaec:c.instructions+=9;goto B76eaec;
case 0x76eaef:c.instructions+=8;goto B76eaef;
case 0x76eaf3:c.instructions+=7;goto B76eaf3;
case 0x76eaf5:c.instructions+=6;goto B76eaf5;
case 0x76eaf8:c.instructions+=5;goto B76eaf8;
case 0x76eafb:c.instructions+=4;goto B76eafb;
case 0x76eafe:c.instructions+=3;goto B76eafe;
case 0x76eb01:c.instructions+=2;goto B76eb01;
case 0x76eb06:c.instructions+=1;goto B76eb06;
case 0x76eb0c:goto L76eb0c;
case 0x76eb0f:goto L76eb0f;
case 0x76eb12:c.instructions+=7;goto B76eb12;
case 0x76eb15:c.instructions+=6;goto B76eb15;
case 0x76eb18:c.instructions+=5;goto B76eb18;
case 0x76eb1b:c.instructions+=4;goto B76eb1b;
case 0x76eb1d:c.instructions+=3;goto B76eb1d;
case 0x76eb20:c.instructions+=2;goto B76eb20;
case 0x76eb23:c.instructions+=1;goto B76eb23;
case 0x76eb29:goto L76eb29;
case 0x76eb2a:c.instructions+=1;goto B76eb2a;
case 0x76eb2b:goto L76eb2b;
case 0x76eb2d:c.instructions+=3;goto B76eb2d;
case 0x76eb2e:c.instructions+=2;goto B76eb2e;
case 0x76eb2f:c.instructions+=1;goto B76eb2f;
case 0x76eb32:goto L76eb32;
case 0x76eb34:c.instructions+=12;goto B76eb34;
case 0x76eb35:c.instructions+=11;goto B76eb35;
case 0x76eb37:c.instructions+=10;goto B76eb37;
case 0x76eb3a:c.instructions+=9;goto B76eb3a;
case 0x76eb3d:c.instructions+=8;goto B76eb3d;
case 0x76eb40:c.instructions+=7;goto B76eb40;
case 0x76eb43:c.instructions+=6;goto B76eb43;
case 0x76eb44:c.instructions+=5;goto B76eb44;
case 0x76eb47:c.instructions+=4;goto B76eb47;
case 0x76eb49:c.instructions+=3;goto B76eb49;
case 0x76eb4b:c.instructions+=2;goto B76eb4b;
case 0x76eb4e:c.instructions+=1;goto B76eb4e;
case 0x76eb54:goto L76eb54;
case 0x76eb57:c.instructions+=6;goto B76eb57;
case 0x76eb5a:c.instructions+=5;goto B76eb5a;
case 0x76eb5b:c.instructions+=4;goto B76eb5b;
case 0x76eb5e:c.instructions+=3;goto B76eb5e;
case 0x76eb5f:c.instructions+=2;goto B76eb5f;
case 0x76eb64:c.instructions+=1;goto B76eb64;
case 0x76eb69:goto L76eb69;
case 0x76eb6c:c.instructions+=3;goto B76eb6c;
case 0x76eb6f:c.instructions+=2;goto B76eb6f;
case 0x76eb72:c.instructions+=1;goto B76eb72;
case 0x76eb78:goto L76eb78;
case 0x76eb7b:c.instructions+=6;goto B76eb7b;
case 0x76eb7d:c.instructions+=5;goto B76eb7d;
case 0x76eb7e:c.instructions+=4;goto B76eb7e;
case 0x76eb81:c.instructions+=3;goto B76eb81;
case 0x76eb82:c.instructions+=2;goto B76eb82;
case 0x76eb85:c.instructions+=1;goto B76eb85;
case 0x76eb88:goto L76eb88;
case 0x76eb8b:c.instructions+=37;goto B76eb8b;
case 0x76eb8e:c.instructions+=36;goto B76eb8e;
case 0x76eb90:c.instructions+=35;goto B76eb90;
case 0x76eb93:c.instructions+=34;goto B76eb93;
case 0x76eb97:c.instructions+=33;goto B76eb97;
case 0x76eb9a:c.instructions+=32;goto B76eb9a;
case 0x76eb9d:c.instructions+=31;goto B76eb9d;
case 0x76eb9f:c.instructions+=30;goto B76eb9f;
case 0x76eba1:c.instructions+=29;goto B76eba1;
case 0x76eba3:c.instructions+=28;goto B76eba3;
case 0x76eba5:c.instructions+=27;goto B76eba5;
case 0x76eba8:c.instructions+=26;goto B76eba8;
case 0x76ebaa:c.instructions+=25;goto B76ebaa;
case 0x76ebac:c.instructions+=24;goto B76ebac;
case 0x76ebaf:c.instructions+=23;goto B76ebaf;
case 0x76ebb1:c.instructions+=22;goto B76ebb1;
case 0x76ebb8:c.instructions+=21;goto B76ebb8;
case 0x76ebbb:c.instructions+=20;goto B76ebbb;
case 0x76ebbd:c.instructions+=19;goto B76ebbd;
case 0x76ebbf:c.instructions+=18;goto B76ebbf;
case 0x76ebc1:c.instructions+=17;goto B76ebc1;
case 0x76ebc4:c.instructions+=16;goto B76ebc4;
case 0x76ebc6:c.instructions+=15;goto B76ebc6;
case 0x76ebc8:c.instructions+=14;goto B76ebc8;
case 0x76ebcb:c.instructions+=13;goto B76ebcb;
case 0x76ebcd:c.instructions+=12;goto B76ebcd;
case 0x76ebd4:c.instructions+=11;goto B76ebd4;
case 0x76ebd9:c.instructions+=10;goto B76ebd9;
case 0x76ebdf:c.instructions+=9;goto B76ebdf;
case 0x76ebe1:c.instructions+=8;goto B76ebe1;
case 0x76ebe4:c.instructions+=7;goto B76ebe4;
case 0x76ebe8:c.instructions+=6;goto B76ebe8;
case 0x76ebeb:c.instructions+=5;goto B76ebeb;
case 0x76ebee:c.instructions+=4;goto B76ebee;
case 0x76ebf1:c.instructions+=3;goto B76ebf1;
case 0x76ebf3:c.instructions+=2;goto B76ebf3;
case 0x76ebf6:c.instructions+=1;goto B76ebf6;
case 0x76ebf8:goto L76ebf8;
case 0x76ebfb:goto L76ebfb;
case 0x76ebfe:c.instructions+=7;goto B76ebfe;
case 0x76ec01:c.instructions+=6;goto B76ec01;
case 0x76ec04:c.instructions+=5;goto B76ec04;
case 0x76ec07:c.instructions+=4;goto B76ec07;
case 0x76ec09:c.instructions+=3;goto B76ec09;
case 0x76ec0c:c.instructions+=2;goto B76ec0c;
case 0x76ec0f:c.instructions+=1;goto B76ec0f;
case 0x76ec15:goto L76ec15;
case 0x76ec16:c.instructions+=1;goto B76ec16;
case 0x76ec17:goto L76ec17;
case 0x76ec19:c.instructions+=3;goto B76ec19;
case 0x76ec1a:c.instructions+=2;goto B76ec1a;
case 0x76ec1b:c.instructions+=1;goto B76ec1b;
case 0x76ec1e:goto L76ec1e;
case 0x76ec20:c.instructions+=5;goto B76ec20;
case 0x76ec21:c.instructions+=4;goto B76ec21;
case 0x76ec23:c.instructions+=3;goto B76ec23;
case 0x76ec26:c.instructions+=2;goto B76ec26;
case 0x76ec2a:c.instructions+=1;goto B76ec2a;
case 0x76ec2c:goto L76ec2c;
case 0x76ec2f:c.instructions+=6;goto B76ec2f;
case 0x76ec32:c.instructions+=5;goto B76ec32;
case 0x76ec35:c.instructions+=4;goto B76ec35;
case 0x76ec38:c.instructions+=3;goto B76ec38;
case 0x76ec3b:c.instructions+=2;goto B76ec3b;
case 0x76ec3e:c.instructions+=1;goto B76ec3e;
case 0x76ec43:goto L76ec43;
case 0x76ec48:goto L76ec48;
case 0x76ec4b:c.instructions+=21;goto B76ec4b;
case 0x76ec4f:c.instructions+=20;goto B76ec4f;
case 0x76ec52:c.instructions+=19;goto B76ec52;
case 0x76ec56:c.instructions+=18;goto B76ec56;
case 0x76ec5a:c.instructions+=17;goto B76ec5a;
case 0x76ec5b:c.instructions+=16;goto B76ec5b;
case 0x76ec5e:c.instructions+=15;goto B76ec5e;
case 0x76ec63:c.instructions+=14;goto B76ec63;
case 0x76ec64:c.instructions+=13;goto B76ec64;
case 0x76ec65:c.instructions+=12;goto B76ec65;
case 0x76ec68:c.instructions+=11;goto B76ec68;
case 0x76ec6b:c.instructions+=10;goto B76ec6b;
case 0x76ec6d:c.instructions+=9;goto B76ec6d;
case 0x76ec70:c.instructions+=8;goto B76ec70;
case 0x76ec73:c.instructions+=7;goto B76ec73;
case 0x76ec76:c.instructions+=6;goto B76ec76;
case 0x76ec79:c.instructions+=5;goto B76ec79;
case 0x76ec7c:c.instructions+=4;goto B76ec7c;
case 0x76ec80:c.instructions+=3;goto B76ec80;
case 0x76ec83:c.instructions+=2;goto B76ec83;
case 0x76ec86:c.instructions+=1;goto B76ec86;
case 0x76ec8c:goto L76ec8c;
case 0x76ec8e:c.instructions+=9;goto B76ec8e;
case 0x76ec90:c.instructions+=8;goto B76ec90;
case 0x76ec93:c.instructions+=7;goto B76ec93;
case 0x76ec95:c.instructions+=6;goto B76ec95;
case 0x76ec98:c.instructions+=5;goto B76ec98;
case 0x76ec9b:c.instructions+=4;goto B76ec9b;
case 0x76ec9e:c.instructions+=3;goto B76ec9e;
case 0x76eca0:c.instructions+=2;goto B76eca0;
case 0x76eca2:c.instructions+=1;goto B76eca2;
case 0x76eca4:goto L76eca4;
case 0x76eca7:c.instructions+=33;goto B76eca7;
case 0x76ecaa:c.instructions+=32;goto B76ecaa;
case 0x76ecae:c.instructions+=31;goto B76ecae;
case 0x76ecb2:c.instructions+=30;goto B76ecb2;
case 0x76ecb5:c.instructions+=29;goto B76ecb5;
case 0x76ecb8:c.instructions+=28;goto B76ecb8;
case 0x76ecbb:c.instructions+=27;goto B76ecbb;
case 0x76ecbe:c.instructions+=26;goto B76ecbe;
case 0x76ecc2:c.instructions+=25;goto B76ecc2;
case 0x76ecc6:c.instructions+=24;goto B76ecc6;
case 0x76ecca:c.instructions+=23;goto B76ecca;
case 0x76ecce:c.instructions+=22;goto B76ecce;
case 0x76ecd2:c.instructions+=21;goto B76ecd2;
case 0x76ecd6:c.instructions+=20;goto B76ecd6;
case 0x76ecda:c.instructions+=19;goto B76ecda;
case 0x76ecde:c.instructions+=18;goto B76ecde;
case 0x76ece0:c.instructions+=17;goto B76ece0;
case 0x76ece3:c.instructions+=16;goto B76ece3;
case 0x76ece6:c.instructions+=15;goto B76ece6;
case 0x76ece9:c.instructions+=14;goto B76ece9;
case 0x76ecec:c.instructions+=13;goto B76ecec;
case 0x76ecef:c.instructions+=12;goto B76ecef;
case 0x76ecf2:c.instructions+=11;goto B76ecf2;
case 0x76ecf5:c.instructions+=10;goto B76ecf5;
case 0x76ecf8:c.instructions+=9;goto B76ecf8;
case 0x76ecfb:c.instructions+=8;goto B76ecfb;
case 0x76ecfd:c.instructions+=7;goto B76ecfd;
case 0x76ed01:c.instructions+=6;goto B76ed01;
case 0x76ed05:c.instructions+=5;goto B76ed05;
case 0x76ed09:c.instructions+=4;goto B76ed09;
case 0x76ed0d:c.instructions+=3;goto B76ed0d;
case 0x76ed10:c.instructions+=2;goto B76ed10;
case 0x76ed13:c.instructions+=1;goto B76ed13;
case 0x76ed15:goto L76ed15;
case 0x76ed18:c.instructions+=6;goto B76ed18;
case 0x76ed1b:c.instructions+=5;goto B76ed1b;
case 0x76ed1e:c.instructions+=4;goto B76ed1e;
case 0x76ed21:c.instructions+=3;goto B76ed21;
case 0x76ed24:c.instructions+=2;goto B76ed24;
case 0x76ed27:c.instructions+=1;goto B76ed27;
case 0x76ed2d:goto L76ed2d;
case 0x76ed2f:c.instructions+=4;goto B76ed2f;
case 0x76ed30:c.instructions+=3;goto B76ed30;
case 0x76ed31:c.instructions+=2;goto B76ed31;
case 0x76ed33:c.instructions+=1;goto B76ed33;
case 0x76ed34:goto L76ed34;
case 0x76ed35:c.instructions+=1;goto B76ed35;
case 0x76ed38:goto L76ed38;
case 0x76ed3a:c.instructions+=3;goto B76ed3a;
case 0x76ed3b:c.instructions+=2;goto B76ed3b;
case 0x76ed3d:c.instructions+=1;goto B76ed3d;
case 0x76ed42:goto L76ed42;
case 0x76ed44:c.instructions+=1;goto B76ed44;
case 0x76ed46:goto L76ed46;
case 0x76ed4b:c.instructions+=3;goto B76ed4b;
case 0x76ed50:c.instructions+=2;goto B76ed50;
case 0x76ed55:c.instructions+=1;goto B76ed55;
case 0x76ed57:goto L76ed57;
case 0x76ed61:c.instructions+=1;goto B76ed61;
case 0x76ed6b:goto L76ed6b;
case 0x76ed6c:c.instructions+=1;goto B76ed6c;
case 0x76ed72:goto L76ed72;
case 0x76ed74:c.instructions+=3;goto B76ed74;
case 0x76ed75:c.instructions+=2;goto B76ed75;
case 0x76ed77:c.instructions+=1;goto B76ed77;
case 0x76ed7c:goto L76ed7c;
case 0x76ed7e:c.instructions+=1;goto B76ed7e;
case 0x76ed80:goto L76ed80;
case 0x76ed85:c.instructions+=2;goto B76ed85;
case 0x76ed8a:c.instructions+=1;goto B76ed8a;
case 0x76ed8c:goto L76ed8c;
case 0x76ed96:c.instructions+=1;goto B76ed96;
case 0x76ed9b:goto L76ed9b;
case 0x76eda0:c.instructions+=2;goto B76eda0;
case 0x76eda1:c.instructions+=1;goto B76eda1;
case 0x76eda3:goto L76eda3;
case 0x76eda6:c.instructions+=5;goto B76eda6;
case 0x76eda7:c.instructions+=4;goto B76eda7;
case 0x76edaa:c.instructions+=3;goto B76edaa;
case 0x76edad:c.instructions+=2;goto B76edad;
case 0x76edaf:c.instructions+=1;goto B76edaf;
case 0x76edb1:goto L76edb1;
case 0x76edb3:goto L76edb3;
case 0x76edb5:c.instructions+=1;goto B76edb5;
case 0x76edb7:goto L76edb7;
case 0x76edba:c.instructions+=6;goto B76edba;
case 0x76edbb:c.instructions+=5;goto B76edbb;
case 0x76edbc:c.instructions+=4;goto B76edbc;
case 0x76edbf:c.instructions+=3;goto B76edbf;
case 0x76edc1:c.instructions+=2;goto B76edc1;
case 0x76edc3:c.instructions+=1;goto B76edc3;
case 0x76edc6:goto L76edc6;
case 0x76edc8:goto L76edc8;
case 0x76edca:c.instructions+=1;goto B76edca;
case 0x76edcd:goto L76edcd;
case 0x76edcf:goto L76edcf;
case 0x76edd2:c.instructions+=11;goto B76edd2;
case 0x76edd5:c.instructions+=10;goto B76edd5;
case 0x76edd8:c.instructions+=9;goto B76edd8;
case 0x76eddb:c.instructions+=8;goto B76eddb;
case 0x76edde:c.instructions+=7;goto B76edde;
case 0x76ede1:c.instructions+=6;goto B76ede1;
case 0x76ede4:c.instructions+=5;goto B76ede4;
case 0x76ede7:c.instructions+=4;goto B76ede7;
case 0x76edeb:c.instructions+=3;goto B76edeb;
case 0x76edec:c.instructions+=2;goto B76edec;
case 0x76eded:c.instructions+=1;goto B76eded;
case 0x76edef:goto L76edef;
case 0x76edf2:c.instructions+=1;goto B76edf2;
case 0x76edf5:goto L76edf5;
case 0x76edf6:c.instructions+=1;goto B76edf6;
case 0x76edf7:goto L76edf7;
case 0x76edf8:c.instructions+=17;goto B76edf8;
case 0x76edfa:c.instructions+=16;goto B76edfa;
case 0x76edfd:c.instructions+=15;goto B76edfd;
case 0x76ee00:c.instructions+=14;goto B76ee00;
case 0x76ee03:c.instructions+=13;goto B76ee03;
case 0x76ee06:c.instructions+=12;goto B76ee06;
case 0x76ee0c:c.instructions+=11;goto B76ee0c;
case 0x76ee0d:c.instructions+=10;goto B76ee0d;
case 0x76ee0e:c.instructions+=9;goto B76ee0e;
case 0x76ee11:c.instructions+=8;goto B76ee11;
case 0x76ee14:c.instructions+=7;goto B76ee14;
case 0x76ee17:c.instructions+=6;goto B76ee17;
case 0x76ee1d:c.instructions+=5;goto B76ee1d;
case 0x76ee1f:c.instructions+=4;goto B76ee1f;
case 0x76ee21:c.instructions+=3;goto B76ee21;
case 0x76ee22:c.instructions+=2;goto B76ee22;
case 0x76ee25:c.instructions+=1;goto B76ee25;
case 0x76ee27:goto L76ee27;
case 0x76ee29:c.instructions+=3;goto B76ee29;
case 0x76ee2f:c.instructions+=2;goto B76ee2f;
case 0x76ee32:c.instructions+=1;goto B76ee32;
case 0x76ee34:goto L76ee34;
case 0x76ee38:goto L76ee38;
case 0x76ee3e:c.instructions+=7;goto B76ee3e;
case 0x76ee44:c.instructions+=6;goto B76ee44;
case 0x76ee47:c.instructions+=5;goto B76ee47;
case 0x76ee4b:c.instructions+=4;goto B76ee4b;
case 0x76ee4e:c.instructions+=3;goto B76ee4e;
case 0x76ee51:c.instructions+=2;goto B76ee51;
case 0x76ee54:c.instructions+=1;goto B76ee54;
case 0x76ee56:goto L76ee56;
case 0x76ee5a:goto L76ee5a;
case 0x76ee5d:c.instructions+=3;goto B76ee5d;
case 0x76ee60:c.instructions+=2;goto B76ee60;
case 0x76ee63:c.instructions+=1;goto B76ee63;
case 0x76ee65:goto L76ee65;
case 0x76ee68:goto L76ee68;
case 0x76ee6b:goto L76ee6b;
case 0x76ee6e:c.instructions+=4;goto B76ee6e;
case 0x76ee70:c.instructions+=3;goto B76ee70;
case 0x76ee73:c.instructions+=2;goto B76ee73;
case 0x76ee76:c.instructions+=1;goto B76ee76;
case 0x76ee7c:goto L76ee7c;
case 0x76ee7f:c.instructions+=2;goto B76ee7f;
case 0x76ee83:c.instructions+=1;goto B76ee83;
case 0x76ee89:goto L76ee89;
case 0x76ee8b:c.instructions+=2;goto B76ee8b;
case 0x76ee8d:c.instructions+=1;goto B76ee8d;
case 0x76ee93:goto L76ee93;
case 0x76ee94:c.instructions+=3;goto B76ee94;
case 0x76ee96:c.instructions+=2;goto B76ee96;
case 0x76ee99:c.instructions+=1;goto B76ee99;
case 0x76ee9b:goto L76ee9b;
case 0x76ee9e:c.instructions+=3;goto B76ee9e;
case 0x76ee9f:c.instructions+=2;goto B76ee9f;
case 0x76eea0:c.instructions+=1;goto B76eea0;
case 0x76eea1:goto L76eea1;
case 0x76eea2:c.instructions+=4;goto B76eea2;
case 0x76eea4:c.instructions+=3;goto B76eea4;
case 0x76eea5:c.instructions+=2;goto B76eea5;
case 0x76eea7:c.instructions+=1;goto B76eea7;
case 0x76eea9:goto L76eea9;
case 0x76eeaa:c.instructions+=4;goto B76eeaa;
case 0x76eeac:c.instructions+=3;goto B76eeac;
case 0x76eead:c.instructions+=2;goto B76eead;
case 0x76eeaf:c.instructions+=1;goto B76eeaf;
case 0x76eeb1:goto L76eeb1;
case 0x76eeb2:c.instructions+=4;goto B76eeb2;
case 0x76eeb4:c.instructions+=3;goto B76eeb4;
case 0x76eeb5:c.instructions+=2;goto B76eeb5;
case 0x76eeb7:c.instructions+=1;goto B76eeb7;
case 0x76eeb9:goto L76eeb9;
case 0x76eeba:c.instructions+=4;goto B76eeba;
case 0x76eebc:c.instructions+=3;goto B76eebc;
case 0x76eebd:c.instructions+=2;goto B76eebd;
case 0x76eebf:c.instructions+=1;goto B76eebf;
case 0x76eec1:goto L76eec1;
case 0x76eec2:c.instructions+=4;goto B76eec2;
case 0x76eec4:c.instructions+=3;goto B76eec4;
case 0x76eec5:c.instructions+=2;goto B76eec5;
case 0x76eec7:c.instructions+=1;goto B76eec7;
case 0x76eec9:goto L76eec9;
case 0x76eeca:c.instructions+=4;goto B76eeca;
case 0x76eecc:c.instructions+=3;goto B76eecc;
case 0x76eecd:c.instructions+=2;goto B76eecd;
case 0x76eecf:c.instructions+=1;goto B76eecf;
case 0x76eed1:goto L76eed1;
case 0x76eed2:c.instructions+=4;goto B76eed2;
case 0x76eed4:c.instructions+=3;goto B76eed4;
case 0x76eed5:c.instructions+=2;goto B76eed5;
case 0x76eed7:c.instructions+=1;goto B76eed7;
case 0x76eed9:goto L76eed9;
case 0x76eeda:c.instructions+=4;goto B76eeda;
case 0x76eedc:c.instructions+=3;goto B76eedc;
case 0x76eedd:c.instructions+=2;goto B76eedd;
case 0x76eedf:c.instructions+=1;goto B76eedf;
case 0x76eee1:goto L76eee1;
case 0x76eee3:c.instructions+=1;goto B76eee3;
case 0x76eee5:goto L76eee5;
case 0x76eee7:c.instructions+=5;goto B76eee7;
case 0x76eee9:c.instructions+=4;goto B76eee9;
case 0x76eeee:c.instructions+=3;goto B76eeee;
case 0x76eef0:c.instructions+=2;goto B76eef0;
case 0x76eef6:c.instructions+=1;goto B76eef6;
case 0x76eef8:goto L76eef8;
case 0x76eefb:c.instructions+=4;goto B76eefb;
case 0x76eefe:c.instructions+=3;goto B76eefe;
case 0x76ef01:c.instructions+=2;goto B76ef01;
case 0x76ef03:c.instructions+=1;goto B76ef03;
case 0x76ef05:goto L76ef05;
case 0x76ef08:c.instructions+=4;goto B76ef08;
case 0x76ef0b:c.instructions+=3;goto B76ef0b;
case 0x76ef0e:c.instructions+=2;goto B76ef0e;
case 0x76ef10:c.instructions+=1;goto B76ef10;
case 0x76ef13:goto L76ef13;
case 0x76ef16:c.instructions+=6;goto B76ef16;
case 0x76ef19:c.instructions+=5;goto B76ef19;
case 0x76ef1c:c.instructions+=4;goto B76ef1c;
case 0x76ef20:c.instructions+=3;goto B76ef20;
case 0x76ef23:c.instructions+=2;goto B76ef23;
case 0x76ef26:c.instructions+=1;goto B76ef26;
case 0x76ef28:goto L76ef28;
case 0x76ef2b:c.instructions+=1;goto B76ef2b;
case 0x76ef31:goto L76ef31;
case 0x76ef34:c.instructions+=2;goto B76ef34;
case 0x76ef36:c.instructions+=1;goto B76ef36;
case 0x76ef38:goto L76ef38;
case 0x76ef3a:goto L76ef3a;
case 0x76ef3b:c.instructions+=4;goto B76ef3b;
case 0x76ef3c:c.instructions+=3;goto B76ef3c;
case 0x76ef3d:c.instructions+=2;goto B76ef3d;
case 0x76ef3e:c.instructions+=1;goto B76ef3e;
case 0x76ef41:goto L76ef41;
case 0x76ef42:c.instructions+=13;goto B76ef42;
case 0x76ef44:c.instructions+=12;goto B76ef44;
case 0x76ef47:c.instructions+=11;goto B76ef47;
case 0x76ef4a:c.instructions+=10;goto B76ef4a;
case 0x76ef4b:c.instructions+=9;goto B76ef4b;
case 0x76ef4e:c.instructions+=8;goto B76ef4e;
case 0x76ef4f:c.instructions+=7;goto B76ef4f;
case 0x76ef52:c.instructions+=6;goto B76ef52;
case 0x76ef55:c.instructions+=5;goto B76ef55;
case 0x76ef58:c.instructions+=4;goto B76ef58;
case 0x76ef5a:c.instructions+=3;goto B76ef5a;
case 0x76ef5c:c.instructions+=2;goto B76ef5c;
case 0x76ef5f:c.instructions+=1;goto B76ef5f;
case 0x76ef61:goto L76ef61;
case 0x76ef63:c.instructions+=1;goto B76ef63;
case 0x76ef65:goto L76ef65;
case 0x76ef67:c.instructions+=1;goto B76ef67;
case 0x76ef69:goto L76ef69;
case 0x76ef6b:c.instructions+=1;goto B76ef6b;
case 0x76ef6d:goto L76ef6d;
case 0x76ef70:c.instructions+=1;goto B76ef70;
case 0x76ef72:goto L76ef72;
case 0x76ef74:c.instructions+=2;goto B76ef74;
case 0x76ef75:c.instructions+=1;goto B76ef75;
case 0x76ef77:goto L76ef77;
case 0x76ef7a:c.instructions+=3;goto B76ef7a;
case 0x76ef81:c.instructions+=2;goto B76ef81;
case 0x76ef83:c.instructions+=1;goto B76ef83;
case 0x76ef85:goto L76ef85;
case 0x76ef88:c.instructions+=4;goto B76ef88;
case 0x76ef8a:c.instructions+=3;goto B76ef8a;
case 0x76ef8c:c.instructions+=2;goto B76ef8c;
case 0x76ef8f:c.instructions+=1;goto B76ef8f;
case 0x76ef92:goto L76ef92;
case 0x76ef94:goto L76ef94;
case 0x76ef96:c.instructions+=1;goto B76ef96;
case 0x76ef99:goto L76ef99;
case 0x76ef9b:goto L76ef9b;
case 0x76ef9e:c.instructions+=5;goto B76ef9e;
case 0x76efa1:c.instructions+=4;goto B76efa1;
case 0x76efa4:c.instructions+=3;goto B76efa4;
case 0x76efa7:c.instructions+=2;goto B76efa7;
case 0x76efaa:c.instructions+=1;goto B76efaa;
case 0x76efad:goto L76efad;
case 0x76efae:c.instructions+=11;goto B76efae;
case 0x76efaf:c.instructions+=10;goto B76efaf;
case 0x76efb2:c.instructions+=9;goto B76efb2;
case 0x76efb4:c.instructions+=8;goto B76efb4;
case 0x76efb6:c.instructions+=7;goto B76efb6;
case 0x76efb8:c.instructions+=6;goto B76efb8;
case 0x76efba:c.instructions+=5;goto B76efba;
case 0x76efbc:c.instructions+=4;goto B76efbc;
case 0x76efbe:c.instructions+=3;goto B76efbe;
case 0x76efbf:c.instructions+=2;goto B76efbf;
case 0x76efc2:c.instructions+=1;goto B76efc2;
case 0x76efc4:goto L76efc4;
case 0x76efc7:c.instructions+=2;goto B76efc7;
case 0x76efc9:c.instructions+=1;goto B76efc9;
case 0x76efcc:goto L76efcc;
case 0x76efcd:c.instructions+=11;goto B76efcd;
case 0x76efce:c.instructions+=10;goto B76efce;
case 0x76efd1:c.instructions+=9;goto B76efd1;
case 0x76efd3:c.instructions+=8;goto B76efd3;
case 0x76efd5:c.instructions+=7;goto B76efd5;
case 0x76efd7:c.instructions+=6;goto B76efd7;
case 0x76efd9:c.instructions+=5;goto B76efd9;
case 0x76efdb:c.instructions+=4;goto B76efdb;
case 0x76efdd:c.instructions+=3;goto B76efdd;
case 0x76efde:c.instructions+=2;goto B76efde;
case 0x76efe1:c.instructions+=1;goto B76efe1;
case 0x76efe3:goto L76efe3;
case 0x76efe6:c.instructions+=1;goto B76efe6;
case 0x76efe8:goto L76efe8;
case 0x76efea:c.instructions+=3;goto B76efea;
case 0x76efee:c.instructions+=2;goto B76efee;
case 0x76eff1:c.instructions+=1;goto B76eff1;
case 0x76eff7:goto L76eff7;
case 0x76effa:c.instructions+=2;goto B76effa;
case 0x76effd:c.instructions+=1;goto B76effd;
default:missing_instruction(c.pc);}
B76e002:L76e002:{c.instructions+=1;NFSU2_TR(0x76e002);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76e011;}}
}
B76e004:L76e004:{c.instructions+=2;NFSU2_TR(0x76e004);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76e008:{NFSU2_TR(0x76e008);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76e038;}}
}
B76e00a:L76e00a:{c.instructions+=2;NFSU2_TR(0x76e00a);
u8 U[4];
w4(U+0,u32(0x7d98d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e00f:{NFSU2_TR(0x76e00f);
{goto L76e020;}
}
B76e011:L76e011:{c.instructions+=2;NFSU2_TR(0x76e011);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76e013:{NFSU2_TR(0x76e013);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76e038;}}
}
B76e015:L76e015:{c.instructions+=2;NFSU2_TR(0x76e015);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76e019:{NFSU2_TR(0x76e019);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76e038;}}
}
B76e01b:L76e01b:{c.instructions+=1;NFSU2_TR(0x76e01b);
u8 U[4];
w4(U+0,u32(0x7d98d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e020:L76e020:{c.instructions+=3;NFSU2_TR(0x76e020);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76e023:{NFSU2_TR(0x76e023);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e024:{NFSU2_TR(0x76e024);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e029ull));
TAIL_STATIC(0x766ac0u,766);
}
B76e029:L76e029:{c.instructions+=1;NFSU2_TR(0x76e029);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3ull))));
w1(U+4,u8(0x5ull));
s1(u32(r4(U+0)),r1(U+4));
}
B76e02d:L76e02d:{c.instructions+=4;NFSU2_TR(0x76e02d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76e031:{NFSU2_TR(0x76e031);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76e032:{NFSU2_TR(0x76e032);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76e033:{NFSU2_TR(0x76e033);
{goto L76e1a4;}
}
B76e038:L76e038:{c.instructions+=4;NFSU2_TR(0x76e038);
u8 U[4];
w4(U+0,u32(0x7d98c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e03d:{NFSU2_TR(0x76e03d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76e040:{NFSU2_TR(0x76e040);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e041:{NFSU2_TR(0x76e041);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e046ull));
TAIL_STATIC(0x766ac0u,766);
}
B76e046:L76e046:{c.instructions+=2;NFSU2_TR(0x76e046);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3ull))));
w1(U+4,u8(0x6ull));
s1(u32(r4(U+0)),r1(U+4));
}
B76e04a:{NFSU2_TR(0x76e04a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76e02du);}goto L76e02d;}
}
B76e04c:L76e04c:{c.instructions+=22;NFSU2_TR(0x76e04c);
w4(R+0,u32(r2(R+8)));
}
B76e04f:{NFSU2_TR(0x76e04f);
__builtin_memmove((R+24),(R+0),4);
}
B76e051:{NFSU2_TR(0x76e051);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x4d10ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B76e057:{NFSU2_TR(0x76e057);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0x0ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B76e05c:{NFSU2_TR(0x76e05c);
__builtin_memmove((R+4),(R+28),4);
}
B76e05e:{NFSU2_TR(0x76e05e);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B76e061:{NFSU2_TR(0x76e061);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B76e064:{NFSU2_TR(0x76e064);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B76e067:{NFSU2_TR(0x76e067);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x4dull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B76e06a:{NFSU2_TR(0x76e06a);
u8 U[12];
w4(U+0,u32(u32(u32(0xecbced0cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B76e071:{NFSU2_TR(0x76e071);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76e074:{NFSU2_TR(0x76e074);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffeaull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76e077:{NFSU2_TR(0x76e077);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B76e07a:{NFSU2_TR(0x76e07a);
w4(R+0,u32(s32(s16(r2(R+24)))));
}
B76e07d:{NFSU2_TR(0x76e07d);
w4(R+0,u32(0-u32(r4(R+0))));
}
B76e07f:{NFSU2_TR(0x76e07f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e081:{NFSU2_TR(0x76e081);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e082:{NFSU2_TR(0x76e082);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76e085:{NFSU2_TR(0x76e085);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e086:{NFSU2_TR(0x76e086);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff2ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B76e08a:{NFSU2_TR(0x76e08a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffeeull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76e08d:{NFSU2_TR(0x76e08d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e092ull));
{goto L76e415;}
}
B76e092:L76e092:{c.instructions+=3;NFSU2_TR(0x76e092);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B76e095:{NFSU2_TR(0x76e095);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(u16(0x3fffull))));
}
B76e09b:{NFSU2_TR(0x76e09b);
if(r1(R+512)){{goto L76e0ad;}}
}
B76e09d:L76e09d:{c.instructions+=6;NFSU2_TR(0x76e09d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B76e0a0:{NFSU2_TR(0x76e0a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e0a1:{NFSU2_TR(0x76e0a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76e0a4:{NFSU2_TR(0x76e0a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e0a5:{NFSU2_TR(0x76e0a5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B76e0a6:{NFSU2_TR(0x76e0a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e0abull));
{goto L76e1dd;}
}
B76e0ab:L76e0ab:{c.instructions+=2;NFSU2_TR(0x76e0ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76e0ac:{NFSU2_TR(0x76e0ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76e0ad:L76e0ad:{c.instructions+=4;NFSU2_TR(0x76e0ad);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B76e0b1:{NFSU2_TR(0x76e0b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76e0b4:{NFSU2_TR(0x76e0b4);
u8 U[2];
__builtin_memmove((U+0),(R+24),2);
s2(u32(r4(R+12)),r2(U+0));
}
B76e0b7:{NFSU2_TR(0x76e0b7);
if(r1(R+518)){{goto L76e0cb;}}
}
B76e0b9:L76e0b9:{c.instructions+=4;NFSU2_TR(0x76e0b9);
w4(R+0,u32(s32(s16(r2(R+24)))));
}
B76e0bc:{NFSU2_TR(0x76e0bc);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B76e0be:{NFSU2_TR(0x76e0be);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76e0c0:{NFSU2_TR(0x76e0c0);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L76e0cb;}}
}
B76e0c2:L76e0c2:{c.instructions+=2;NFSU2_TR(0x76e0c2);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
w1(U+4,u8(0x30ull));
s1(u32(r4(U+0)),r1(U+4));
}
B76e0c6:{NFSU2_TR(0x76e0c6);
{goto L76e1c8;}
}
B76e0cb:L76e0cb:{c.instructions+=2;NFSU2_TR(0x76e0cb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x15ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x15ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76e0ce:{NFSU2_TR(0x76e0ce);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L76e0d3;}}
}
B76e0d0:L76e0d0:{c.instructions+=2;NFSU2_TR(0x76e0d0);
u8 U[4];
w4(U+0,u32(0x15ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e0d2:{NFSU2_TR(0x76e0d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76e0d3:L76e0d3:{c.instructions+=4;NFSU2_TR(0x76e0d3);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B76e0d7:{NFSU2_TR(0x76e0d7);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x3ffeull))));
}
B76e0dd:{NFSU2_TR(0x76e0dd);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0x0ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B76e0e2:{NFSU2_TR(0x76e0e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76e0e9:L76e0e9:{c.instructions+=3;NFSU2_TR(0x76e0e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76e0ec:{NFSU2_TR(0x76e0ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e0ed:{NFSU2_TR(0x76e0ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e0f2ull));
TAIL_STATIC(0x76de0au,76d);
}
B76e0f2:L76e0f2:{c.instructions+=3;NFSU2_TR(0x76e0f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76e0f5:{NFSU2_TR(0x76e0f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76e0f6:{NFSU2_TR(0x76e0f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76e0e9u);}goto L76e0e9;}}
}
B76e0f8:L76e0f8:{c.instructions+=2;NFSU2_TR(0x76e0f8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B76e0fa:{NFSU2_TR(0x76e0fa);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L76e113;}}
}
B76e0fc:L76e0fc:{c.instructions+=3;NFSU2_TR(0x76e0fc);
w4(R+24,u32(0-u32(r4(R+24))));
}
B76e0fe:{NFSU2_TR(0x76e0fe);
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B76e104:{NFSU2_TR(0x76e104);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L76e113;}}
}
B76e106:L76e106:{c.instructions+=3;NFSU2_TR(0x76e106);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76e109:{NFSU2_TR(0x76e109);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e10a:{NFSU2_TR(0x76e10a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e10full));
TAIL_STATIC(0x76de38u,76d);
}
B76e10f:L76e10f:{c.instructions+=3;NFSU2_TR(0x76e10f);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B76e110:{NFSU2_TR(0x76e110);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76e111:{NFSU2_TR(0x76e111);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76e106u);}goto L76e106;}}
}
B76e113:L76e113:{c.instructions+=5;NFSU2_TR(0x76e113);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76e116:{NFSU2_TR(0x76e116);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76e118:{NFSU2_TR(0x76e118);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76e11b:{NFSU2_TR(0x76e11b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76e11e:{NFSU2_TR(0x76e11e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L76e170;}}
}
B76e120:L76e120:{c.instructions+=1;NFSU2_TR(0x76e120);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76e123:L76e123:{c.instructions+=8;NFSU2_TR(0x76e123);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76e126:{NFSU2_TR(0x76e126);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76e129:{NFSU2_TR(0x76e129);
u8 U[40];
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
}
B76e12a:{NFSU2_TR(0x76e12a);
u8 U[40];
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
}
B76e12b:{NFSU2_TR(0x76e12b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76e12e:{NFSU2_TR(0x76e12e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e12f:{NFSU2_TR(0x76e12f);
u8 U[40];
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
}
B76e130:{NFSU2_TR(0x76e130);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e135ull));
TAIL_STATIC(0x76de0au,76d);
}
B76e135:L76e135:{c.instructions+=3;NFSU2_TR(0x76e135);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76e138:{NFSU2_TR(0x76e138);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e139:{NFSU2_TR(0x76e139);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e13eull));
TAIL_STATIC(0x76de0au,76d);
}
B76e13e:L76e13e:{c.instructions+=5;NFSU2_TR(0x76e13e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76e141:{NFSU2_TR(0x76e141);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e142:{NFSU2_TR(0x76e142);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76e145:{NFSU2_TR(0x76e145);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e146:{NFSU2_TR(0x76e146);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e14bull));
TAIL_STATIC(0x76ddacu,76d);
}
B76e14b:L76e14b:{c.instructions+=3;NFSU2_TR(0x76e14b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76e14e:{NFSU2_TR(0x76e14e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e14f:{NFSU2_TR(0x76e14f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e154ull));
TAIL_STATIC(0x76de0au,76d);
}
B76e154:L76e154:{c.instructions+=9;NFSU2_TR(0x76e154);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B76e157:{NFSU2_TR(0x76e157);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76e15a:{NFSU2_TR(0x76e15a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0x0ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B76e15e:{NFSU2_TR(0x76e15e);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x30ull))));
}
B76e160:{NFSU2_TR(0x76e160);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B76e163:{NFSU2_TR(0x76e163);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76e166:{NFSU2_TR(0x76e166);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76e169:{NFSU2_TR(0x76e169);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B76e16b:{NFSU2_TR(0x76e16b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76e123u);}goto L76e123;}}
}
B76e16d:L76e16d:{c.instructions+=1;NFSU2_TR(0x76e16d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76e170:L76e170:{c.instructions+=6;NFSU2_TR(0x76e170);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B76e171:{NFSU2_TR(0x76e171);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B76e173:{NFSU2_TR(0x76e173);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B76e174:{NFSU2_TR(0x76e174);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x35ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x35ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B76e177:{NFSU2_TR(0x76e177);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76e17a:{NFSU2_TR(0x76e17a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L76e1bd;}}
}
B76e17c:L76e17c:{c.instructions+=1;NFSU2_TR(0x76e17c);
{goto L76e187;}
}
B76e17e:L76e17e:{c.instructions+=2;NFSU2_TR(0x76e17e);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x39ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B76e181:{NFSU2_TR(0x76e181);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76e18b;}}
}
B76e183:L76e183:{c.instructions+=2;NFSU2_TR(0x76e183);
u8 U[1];
w1(U+0,u8(0x30ull));
s1(u32(r4(R+0)),r1(U+0));
}
B76e186:{NFSU2_TR(0x76e186);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B76e187:L76e187:{c.instructions+=2;NFSU2_TR(0x76e187);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B76e189:{NFSU2_TR(0x76e189);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76e17eu);}goto L76e17e;}}
}
B76e18b:L76e18b:{c.instructions+=2;NFSU2_TR(0x76e18b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B76e18d:{NFSU2_TR(0x76e18d);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L76e193;}}
}
B76e18f:L76e18f:{c.instructions+=2;NFSU2_TR(0x76e18f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B76e190:{NFSU2_TR(0x76e190);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
w2(U+0,u16(u32(r2(U+0))+u32(u16(0x1ull))));
s2(u32(r4(R+12)),r2(U+0));
}
B76e193:L76e193:{c.instructions+=1;NFSU2_TR(0x76e193);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(u8(0x1ull))));
s1(u32(r4(R+0)),r1(U+0));
}
B76e195:L76e195:{c.instructions+=5;NFSU2_TR(0x76e195);
w1(R+0,u8(u32(r1(R+0))-u32(r1(R+12))));
}
B76e197:{NFSU2_TR(0x76e197);
w1(R+0,u8(u32(r1(R+0))-u32(u8(0x3ull))));
}
B76e199:{NFSU2_TR(0x76e199);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B76e19c:{NFSU2_TR(0x76e19c);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B76e19f:{NFSU2_TR(0x76e19f);
u8 U[13];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+12,u8(u32(r1(U+12))&u32(u8(0x0ull))));
s1(u32(r4(U+8)),r1(U+12));
}
B76e1a4:L76e1a4:{c.instructions+=1;NFSU2_TR(0x76e1a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76e1a7:L76e1a7:{c.instructions+=6;NFSU2_TR(0x76e1a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76e1aa:{NFSU2_TR(0x76e1aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B76e1ad:{NFSU2_TR(0x76e1ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76e1ae:{NFSU2_TR(0x76e1ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76e1af:{NFSU2_TR(0x76e1af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76e1b0:{NFSU2_TR(0x76e1b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e1b5ull));
TAIL_STATIC(0x76115eu,761);
}
B76e1b5:L76e1b5:{c.instructions+=2;NFSU2_TR(0x76e1b5);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B76e1b6:{NFSU2_TR(0x76e1b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76e1b7:L76e1b7:{c.instructions+=2;NFSU2_TR(0x76e1b7);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x30ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B76e1ba:{NFSU2_TR(0x76e1ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76e1c1;}}
}
B76e1bc:L76e1bc:{c.instructions+=1;NFSU2_TR(0x76e1bc);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B76e1bd:L76e1bd:{c.instructions+=2;NFSU2_TR(0x76e1bd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B76e1bf:{NFSU2_TR(0x76e1bf);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76e1b7u);}goto L76e1b7;}}
}
B76e1c1:L76e1c1:{c.instructions+=2;NFSU2_TR(0x76e1c1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B76e1c3:{NFSU2_TR(0x76e1c3);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76e195u);}goto L76e195;}}
}
B76e1c5:L76e1c5:{c.instructions+=1;NFSU2_TR(0x76e1c5);
u8 U[1];
w1(U+0,u8(0x30ull));
s1(u32(r4(R+4)),r1(U+0));
}
B76e1c8:L76e1c8:{c.instructions+=7;NFSU2_TR(0x76e1c8);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
w2(U+0,u16(u32(r2(U+0))&u32(u16(0x0ull))));
s2(u32(r4(R+12)),r2(U+0));
}
B76e1cc:{NFSU2_TR(0x76e1cc);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0x0ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B76e1d0:{NFSU2_TR(0x76e1d0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76e1d2:{NFSU2_TR(0x76e1d2);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
w1(U+4,u8(0x20ull));
s1(u32(r4(U+0)),r1(U+4));
}
B76e1d6:{NFSU2_TR(0x76e1d6);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B76e1da:{NFSU2_TR(0x76e1da);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B76e1db:{NFSU2_TR(0x76e1db);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76e1a7u);}goto L76e1a7;}
}
B76e1dd:L76e1dd:{c.instructions+=29;NFSU2_TR(0x76e1dd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e1de:{NFSU2_TR(0x76e1de);
__builtin_memmove((R+20),(R+16),4);
}
B76e1e0:{NFSU2_TR(0x76e1e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B76e1e3:{NFSU2_TR(0x76e1e3);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B76e1e8:{NFSU2_TR(0x76e1e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B76e1eb:{NFSU2_TR(0x76e1eb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e1ec:{NFSU2_TR(0x76e1ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76e1ef:{NFSU2_TR(0x76e1ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76e1f2:{NFSU2_TR(0x76e1f2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76e1f4:{NFSU2_TR(0x76e1f4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B76e1f6:{NFSU2_TR(0x76e1f6);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B76e1fa:{NFSU2_TR(0x76e1fa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e1fb:{NFSU2_TR(0x76e1fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76e1fe:{NFSU2_TR(0x76e1fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76e201:{NFSU2_TR(0x76e201);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76e204:{NFSU2_TR(0x76e204);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76e207:{NFSU2_TR(0x76e207);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76e20a:{NFSU2_TR(0x76e20a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B76e20e:{NFSU2_TR(0x76e20e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e20f:{NFSU2_TR(0x76e20f);
__builtin_memmove((R+28),(R+4),4);
}
B76e211:{NFSU2_TR(0x76e211);
w4(R+8,u32(0x7fffull));
}
B76e216:{NFSU2_TR(0x76e216);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B76e218:{NFSU2_TR(0x76e218);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+0))));
}
B76e21a:{NFSU2_TR(0x76e21a);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
}
B76e21c:{NFSU2_TR(0x76e21c);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x8000ull))));
}
B76e222:{NFSU2_TR(0x76e222);
w1(R+512,u8((r2(R+0))<(u16(0x7fffull))));
}
B76e226:{NFSU2_TR(0x76e226);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B76e229:{NFSU2_TR(0x76e229);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76e22c:{NFSU2_TR(0x76e22c);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L76e3ea;}}
}
B76e232:L76e232:{c.instructions+=2;NFSU2_TR(0x76e232);
u8 U[2];
__builtin_memmove((U+0),(R+4),2);
w1(R+512,u8((r2(U+0))<(u16(0x7fffull))));
}
B76e237:{NFSU2_TR(0x76e237);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L76e3ea;}}
}
B76e23d:L76e23d:{c.instructions+=2;NFSU2_TR(0x76e23d);
u8 U[4];
__builtin_memmove((U+0),(R+8),2);
w1(R+512,u8((r2(U+0))<(u16(0xbffdull))));
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xbffdull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B76e242:{NFSU2_TR(0x76e242);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L76e3ea;}}
}
B76e248:L76e248:{c.instructions+=2;NFSU2_TR(0x76e248);
u8 U[4];
__builtin_memmove((U+0),(R+8),2);
w1(R+512,u8((r2(U+0))<(u16(0x3fbfull))));
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x3fbfull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B76e24d:{NFSU2_TR(0x76e24d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L76e253;}}
}
B76e24f:L76e24f:{c.instructions+=2;NFSU2_TR(0x76e24f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76e251:{NFSU2_TR(0x76e251);
{goto L76e28d;}
}
B76e253:L76e253:{c.instructions+=3;NFSU2_TR(0x76e253);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B76e256:{NFSU2_TR(0x76e256);
w4(R+8,u32(0x7fffffffull));
}
B76e25b:{NFSU2_TR(0x76e25b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76e275;}}
}
B76e25d:L76e25d:{c.instructions+=4;NFSU2_TR(0x76e25d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76e260:{NFSU2_TR(0x76e260);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76e262:{NFSU2_TR(0x76e262);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B76e265:{NFSU2_TR(0x76e265);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76e277;}}
}
B76e267:L76e267:{c.instructions+=2;NFSU2_TR(0x76e267);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76e26a:{NFSU2_TR(0x76e26a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76e277;}}
}
B76e26c:L76e26c:{c.instructions+=2;NFSU2_TR(0x76e26c);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B76e26e:{NFSU2_TR(0x76e26e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76e277;}}
}
B76e270:L76e270:{c.instructions+=1;NFSU2_TR(0x76e270);
{goto L76e3e4;}
}
B76e275:L76e275:{c.instructions+=1;NFSU2_TR(0x76e275);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76e277:L76e277:{c.instructions+=2;NFSU2_TR(0x76e277);
u8 U[4];
__builtin_memmove((U+0),(R+0),2);
w2(U+2,u16(u32(r2(R+4))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B76e27a:{NFSU2_TR(0x76e27a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76e29a;}}
}
B76e27c:L76e27c:{c.instructions+=3;NFSU2_TR(0x76e27c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76e27f:{NFSU2_TR(0x76e27f);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B76e282:{NFSU2_TR(0x76e282);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76e29a;}}
}
B76e284:L76e284:{c.instructions+=2;NFSU2_TR(0x76e284);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76e287:{NFSU2_TR(0x76e287);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76e29a;}}
}
B76e289:L76e289:{c.instructions+=2;NFSU2_TR(0x76e289);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B76e28b:{NFSU2_TR(0x76e28b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76e29a;}}
}
B76e28d:L76e28d:{c.instructions+=4;NFSU2_TR(0x76e28d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76e290:{NFSU2_TR(0x76e290);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76e293:{NFSU2_TR(0x76e293);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B76e295:{NFSU2_TR(0x76e295);
{goto L76e405;}
}
B76e29a:L76e29a:{c.instructions+=4;NFSU2_TR(0x76e29a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76e29d:{NFSU2_TR(0x76e29d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B76e2a0:{NFSU2_TR(0x76e2a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76e2a3:{NFSU2_TR(0x76e2a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76e2aa:L76e2aa:{c.instructions+=4;NFSU2_TR(0x76e2aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76e2ad:{NFSU2_TR(0x76e2ad);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+0))));
}
B76e2af:{NFSU2_TR(0x76e2af);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76e2b3:{NFSU2_TR(0x76e2b3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L76e2fe;}}
}
B76e2b5:L76e2b5:{c.instructions+=6;NFSU2_TR(0x76e2b5);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B76e2b7:{NFSU2_TR(0x76e2b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76e2ba:{NFSU2_TR(0x76e2ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76e2bd:{NFSU2_TR(0x76e2bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76e2c0:{NFSU2_TR(0x76e2c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76e2c3:{NFSU2_TR(0x76e2c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76e2c6:L76e2c6:{c.instructions+=11;NFSU2_TR(0x76e2c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76e2c9:{NFSU2_TR(0x76e2c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76e2cc:{NFSU2_TR(0x76e2cc);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+4,u32(r2(U+0)));
}
B76e2cf:{NFSU2_TR(0x76e2cf);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+0,u32(r2(U+0)));
}
B76e2d2:{NFSU2_TR(0x76e2d2);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B76e2d5:{NFSU2_TR(0x76e2d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76e2d8:{NFSU2_TR(0x76e2d8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
}
B76e2db:{NFSU2_TR(0x76e2db);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e2dc:{NFSU2_TR(0x76e2dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e2dd:{NFSU2_TR(0x76e2dd);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B76e2df:{NFSU2_TR(0x76e2df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e2e4ull));
TAIL_STATIC(0x76dd8bu,76d);
}
B76e2e4:L76e2e4:{c.instructions+=3;NFSU2_TR(0x76e2e4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B76e2e7:{NFSU2_TR(0x76e2e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76e2e9:{NFSU2_TR(0x76e2e9);
if(r1(R+518)){{goto L76e2f1;}}
}
B76e2eb:L76e2eb:{c.instructions+=2;NFSU2_TR(0x76e2eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76e2ee:{NFSU2_TR(0x76e2ee);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w2(U+0,u16(u32(r2(U+0))+u32(u16(0x1ull))));
s2(u32(r4(R+0)),r2(U+0));
}
B76e2f1:L76e2f1:{c.instructions+=4;NFSU2_TR(0x76e2f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x2ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76e2f5:{NFSU2_TR(0x76e2f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x2ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76e2f9:{NFSU2_TR(0x76e2f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76e2fc:{NFSU2_TR(0x76e2fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76e2c6u);}goto L76e2c6;}}
}
B76e2fe:L76e2fe:{c.instructions+=5;NFSU2_TR(0x76e2fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x2ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76e302:{NFSU2_TR(0x76e302);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76e305:{NFSU2_TR(0x76e305);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76e308:{NFSU2_TR(0x76e308);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76e30c:{NFSU2_TR(0x76e30c);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76e2aau);}goto L76e2aa;}}
}
B76e30e:L76e30e:{c.instructions+=3;NFSU2_TR(0x76e30e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0xc002ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76e315:{NFSU2_TR(0x76e315);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+523,sborrow<u16>(r2(U+6),u16(0x0ull)));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+519,u8(s16(r2(U+8))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B76e31a:{NFSU2_TR(0x76e31a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L76e341;}}
}
B76e31c:L76e31c:{c.instructions+=2;NFSU2_TR(0x76e31c);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x80ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B76e320:{NFSU2_TR(0x76e320);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76e33a;}}
}
B76e322:L76e322:{c.instructions+=3;NFSU2_TR(0x76e322);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76e325:{NFSU2_TR(0x76e325);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e326:{NFSU2_TR(0x76e326);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e32bull));
TAIL_STATIC(0x76de0au,76d);
}
B76e32b:L76e32b:{c.instructions+=4;NFSU2_TR(0x76e32b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0xffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76e332:{NFSU2_TR(0x76e332);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+523,sborrow<u16>(r2(U+6),u16(0x0ull)));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+519,u8(s16(r2(U+8))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B76e337:{NFSU2_TR(0x76e337);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76e338:{NFSU2_TR(0x76e338);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76e31cu);}goto L76e31c;}}
}
B76e33a:L76e33a:{c.instructions+=2;NFSU2_TR(0x76e33a);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+523,sborrow<u16>(r2(U+6),u16(0x0ull)));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+519,u8(s16(r2(U+8))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B76e33f:{NFSU2_TR(0x76e33f);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L76e37a;}}
}
B76e341:L76e341:{c.instructions+=3;NFSU2_TR(0x76e341);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0xffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76e348:{NFSU2_TR(0x76e348);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+523,sborrow<u16>(r2(U+6),u16(0x0ull)));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+519,u8(s16(r2(U+8))<s16(u16(0x0ull))));
}
B76e34d:{NFSU2_TR(0x76e34d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L76e37a;}}
}
B76e34f:L76e34f:{c.instructions+=4;NFSU2_TR(0x76e34f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76e352:{NFSU2_TR(0x76e352);
w4(R+0,u32(0-u32(r4(R+0))));
}
B76e354:{NFSU2_TR(0x76e354);
w4(R+12,u32(r2(R+0)));
}
B76e357:{NFSU2_TR(0x76e357);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B76e35a:L76e35a:{c.instructions+=2;NFSU2_TR(0x76e35a);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B76e35e:{NFSU2_TR(0x76e35e);
if(r1(R+518)){{goto L76e363;}}
}
B76e360:L76e360:{c.instructions+=1;NFSU2_TR(0x76e360);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76e363:L76e363:{c.instructions+=3;NFSU2_TR(0x76e363);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76e366:{NFSU2_TR(0x76e366);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e367:{NFSU2_TR(0x76e367);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e36cull));
TAIL_STATIC(0x76de38u,76d);
}
B76e36c:L76e36c:{c.instructions+=3;NFSU2_TR(0x76e36c);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B76e36d:{NFSU2_TR(0x76e36d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76e36e:{NFSU2_TR(0x76e36e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76e35au);}goto L76e35a;}}
}
B76e370:L76e370:{c.instructions+=2;NFSU2_TR(0x76e370);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76e374:{NFSU2_TR(0x76e374);
if(r1(R+518)){{goto L76e37a;}}
}
B76e376:L76e376:{c.instructions+=1;NFSU2_TR(0x76e376);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B76e37a:L76e37a:{c.instructions+=2;NFSU2_TR(0x76e37a);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(u16(0x8000ull))));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x8000ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B76e380:{NFSU2_TR(0x76e380);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L76e391;}}
}
B76e382:L76e382:{c.instructions+=4;NFSU2_TR(0x76e382);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76e385:{NFSU2_TR(0x76e385);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ffffull))));
}
B76e38a:{NFSU2_TR(0x76e38a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x18000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76e38f:{NFSU2_TR(0x76e38f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76e3c6;}}
}
B76e391:L76e391:{c.instructions+=2;NFSU2_TR(0x76e391);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76e395:{NFSU2_TR(0x76e395);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76e3c3;}}
}
B76e397:L76e397:{c.instructions+=3;NFSU2_TR(0x76e397);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76e39b:{NFSU2_TR(0x76e39b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76e39f:{NFSU2_TR(0x76e39f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76e3be;}}
}
B76e3a1:L76e3a1:{c.instructions+=3;NFSU2_TR(0x76e3a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76e3a5:{NFSU2_TR(0x76e3a5);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B76e3ab:{NFSU2_TR(0x76e3ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76e3b8;}}
}
B76e3ad:L76e3ad:{c.instructions+=3;NFSU2_TR(0x76e3ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76e3b0:{NFSU2_TR(0x76e3b0);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe2ull))));
w2(U+4,u16(0x8000ull));
s2(u32(r4(U+0)),r2(U+4));
}
B76e3b6:{NFSU2_TR(0x76e3b6);
{goto L76e3c6;}
}
B76e3b8:L76e3b8:{c.instructions+=2;NFSU2_TR(0x76e3b8);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B76e3bc:{NFSU2_TR(0x76e3bc);
{goto L76e3c6;}
}
B76e3be:L76e3be:{c.instructions+=2;NFSU2_TR(0x76e3be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76e3c1:{NFSU2_TR(0x76e3c1);
{goto L76e3c6;}
}
B76e3c3:L76e3c3:{c.instructions+=1;NFSU2_TR(0x76e3c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76e3c6:L76e3c6:{c.instructions+=3;NFSU2_TR(0x76e3c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76e3c9:{NFSU2_TR(0x76e3c9);
w1(R+512,u8((r2(R+0))<(u16(0x7fffull))));
}
B76e3cd:{NFSU2_TR(0x76e3cd);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L76e3ea;}}
}
B76e3cf:L76e3cf:{c.instructions+=7;NFSU2_TR(0x76e3cf);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B76e3d3:{NFSU2_TR(0x76e3d3);
u8 U[2];
__builtin_memmove((U+0),(R+4),2);
s2(u32(r4(R+24)),r2(U+0));
}
B76e3d6:{NFSU2_TR(0x76e3d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76e3d9:{NFSU2_TR(0x76e3d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76e3dc:{NFSU2_TR(0x76e3dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76e3df:{NFSU2_TR(0x76e3df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76e3e2:{NFSU2_TR(0x76e3e2);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+28))));
}
B76e3e4:L76e3e4:{c.instructions+=2;NFSU2_TR(0x76e3e4);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B76e3e8:{NFSU2_TR(0x76e3e8);
{goto L76e405;}
}
B76e3ea:L76e3ea:{c.instructions+=7;NFSU2_TR(0x76e3ea);
w1(R+512,u8((r2(R+28))!=(u16(0x0ull))));
w2(R+28,u16(0-u32(r2(R+28))));
}
B76e3ed:{NFSU2_TR(0x76e3ed);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(R+28))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B76e3ef:{NFSU2_TR(0x76e3ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76e3f3:{NFSU2_TR(0x76e3f3);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x80000000ull))));
}
B76e3f9:{NFSU2_TR(0x76e3f9);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x7fff8000ull))));
}
B76e3ff:{NFSU2_TR(0x76e3ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B76e402:{NFSU2_TR(0x76e402);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76e405:L76e405:{c.instructions+=6;NFSU2_TR(0x76e405);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76e408:{NFSU2_TR(0x76e408);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B76e40b:{NFSU2_TR(0x76e40b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76e40c:{NFSU2_TR(0x76e40c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76e40d:{NFSU2_TR(0x76e40d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76e40e:{NFSU2_TR(0x76e40e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e413ull));
TAIL_STATIC(0x76115eu,761);
}
B76e413:L76e413:{c.instructions+=2;NFSU2_TR(0x76e413);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B76e414:{NFSU2_TR(0x76e414);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76e415:L76e415:{c.instructions+=12;NFSU2_TR(0x76e415);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e416:{NFSU2_TR(0x76e416);
__builtin_memmove((R+20),(R+16),4);
}
B76e418:{NFSU2_TR(0x76e418);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B76e41b:{NFSU2_TR(0x76e41b);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B76e420:{NFSU2_TR(0x76e420);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B76e423:{NFSU2_TR(0x76e423);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e424:{NFSU2_TR(0x76e424);
w4(R+12,u32(0x81acf0ull));
}
B76e429:{NFSU2_TR(0x76e429);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B76e42b:{NFSU2_TR(0x76e42b);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x60ull))));
}
B76e42e:{NFSU2_TR(0x76e42e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+4)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76e431:{NFSU2_TR(0x76e431);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76e434:{NFSU2_TR(0x76e434);
if(r1(R+518)){{goto L76e493;}}
}
B76e436:L76e436:{c.instructions+=1;NFSU2_TR(0x76e436);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L76e443;}}
}
B76e438:L76e438:{c.instructions+=3;NFSU2_TR(0x76e438);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(0-u32(r4(U+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B76e43b:{NFSU2_TR(0x76e43b);
w4(R+12,u32(0x81ae50ull));
}
B76e440:{NFSU2_TR(0x76e440);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x60ull))));
}
B76e443:L76e443:{c.instructions+=2;NFSU2_TR(0x76e443);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76e446:{NFSU2_TR(0x76e446);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76e44e;}}
}
B76e448:L76e448:{c.instructions+=2;NFSU2_TR(0x76e448);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76e44b:{NFSU2_TR(0x76e44b);
u8 U[2];
__builtin_memmove((U+0),(R+4),2);
s2(u32(r4(R+0)),r2(U+0));
}
B76e44e:L76e44e:{c.instructions+=2;NFSU2_TR(0x76e44e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76e451:{NFSU2_TR(0x76e451);
if(r1(R+518)){{goto L76e493;}}
}
B76e453:L76e453:{c.instructions+=2;NFSU2_TR(0x76e453);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e454:{NFSU2_TR(0x76e454);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e455:L76e455:{c.instructions+=6;NFSU2_TR(0x76e455);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76e458:{NFSU2_TR(0x76e458);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w4(U+8,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,sar<u32>(r4(U+4),u64(r4(U+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B76e45c:{NFSU2_TR(0x76e45c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
}
B76e45f:{NFSU2_TR(0x76e45f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x54ull))));
}
B76e462:{NFSU2_TR(0x76e462);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76e464:{NFSU2_TR(0x76e464);
if(r1(R+518)){{goto L76e48c;}}
}
B76e466:L76e466:{c.instructions+=4;NFSU2_TR(0x76e466);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B76e469:{NFSU2_TR(0x76e469);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B76e46c:{NFSU2_TR(0x76e46c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((U+2),(U+0),2);
w1(R+512,u8((r2(U+2))<(u16(0x8000ull))));
}
B76e471:{NFSU2_TR(0x76e471);
if(r1(R+512)){{goto L76e47f;}}
}
B76e473:L76e473:{c.instructions+=6;NFSU2_TR(0x76e473);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76e476:{NFSU2_TR(0x76e476);
u8 U[40];
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
}
B76e477:{NFSU2_TR(0x76e477);
u8 U[40];
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
}
B76e478:{NFSU2_TR(0x76e478);
u8 U[40];
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
}
B76e479:{NFSU2_TR(0x76e479);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76e47c:{NFSU2_TR(0x76e47c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76e47f:L76e47f:{c.instructions+=3;NFSU2_TR(0x76e47f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e480:{NFSU2_TR(0x76e480);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76e483:{NFSU2_TR(0x76e483);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e488ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76e1ddu);}goto L76e1dd;}
}
B76e488:L76e488:{c.instructions+=3;NFSU2_TR(0x76e488);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76e489:{NFSU2_TR(0x76e489);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76e48a:{NFSU2_TR(0x76e48a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B76e48c:L76e48c:{c.instructions+=2;NFSU2_TR(0x76e48c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76e48f:{NFSU2_TR(0x76e48f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76e455u);}goto L76e455;}}
}
B76e491:L76e491:{c.instructions+=2;NFSU2_TR(0x76e491);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76e492:{NFSU2_TR(0x76e492);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76e493:L76e493:{c.instructions+=4;NFSU2_TR(0x76e493);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76e496:{NFSU2_TR(0x76e496);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B76e499:{NFSU2_TR(0x76e499);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76e49a:{NFSU2_TR(0x76e49a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e49full));
TAIL_STATIC(0x76115eu,761);
}
B76e49f:L76e49f:{c.instructions+=2;NFSU2_TR(0x76e49f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B76e4a0:{NFSU2_TR(0x76e4a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76e4a1:L76e4a1:{c.instructions+=3;NFSU2_TR(0x76e4a1);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e4a3:{NFSU2_TR(0x76e4a3);
u8 U[4];
w4(U+0,u32(0x7d98e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e4a8:{NFSU2_TR(0x76e4a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e4adull));
TAIL_STATIC(0x760da0u,760);
}
B76e4ad:L76e4ad:{c.instructions+=5;NFSU2_TR(0x76e4ad);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B76e4af:{NFSU2_TR(0x76e4af);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B76e4b1:{NFSU2_TR(0x76e4b1);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B76e4b2:{NFSU2_TR(0x76e4b2);
u8 U[14];
__builtin_memmove((U+6),gp(0x8b88a4),4);
w1(R+512,u8((r4(U+6))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+28)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76e4b8:{NFSU2_TR(0x76e4b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76e4e5;}}
}
B76e4ba:L76e4ba:{c.instructions+=5;NFSU2_TR(0x76e4ba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e4bb:{NFSU2_TR(0x76e4bb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e4bc:{NFSU2_TR(0x76e4bc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e4bd:{NFSU2_TR(0x76e4bd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e4be:{NFSU2_TR(0x76e4be);
u8 U[4];
__builtin_memmove((U+0),gp(0x7830a8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e4c4ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76e4c4:L76e4c4:{c.instructions+=2;NFSU2_TR(0x76e4c4);
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
B76e4c6:{NFSU2_TR(0x76e4c6);
if(r1(R+518)){{goto L76e4d0;}}
}
B76e4c8:L76e4c8:{c.instructions+=2;NFSU2_TR(0x76e4c8);
__builtin_memmove(gp(0x8b88a4),(R+12),4);
}
B76e4ce:{NFSU2_TR(0x76e4ce);
{goto L76e4e5;}
}
B76e4d0:L76e4d0:{c.instructions+=1;NFSU2_TR(0x76e4d0);
u8 U[4];
__builtin_memmove((U+0),gp(0x783114),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e4d6ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76e4d6:L76e4d6:{c.instructions+=2;NFSU2_TR(0x76e4d6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x78ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76e4d9:{NFSU2_TR(0x76e4d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76e4e5;}}
}
B76e4db:L76e4db:{c.instructions+=1;NFSU2_TR(0x76e4db);
s4(0x8b88a4,u32(0x2ull));
}
B76e4e5:L76e4e5:{c.instructions+=3;NFSU2_TR(0x76e4e5);
__builtin_memmove((R+0),gp(0x8b88a4),4);
}
B76e4ea:{NFSU2_TR(0x76e4ea);
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
B76e4ec:{NFSU2_TR(0x76e4ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76e505;}}
}
B76e4ee:L76e4ee:{c.instructions+=5;NFSU2_TR(0x76e4ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76e4f1:{NFSU2_TR(0x76e4f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76e4f4:{NFSU2_TR(0x76e4f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76e4f7:{NFSU2_TR(0x76e4f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76e4fa:{NFSU2_TR(0x76e4fa);
u8 U[4];
__builtin_memmove((U+0),gp(0x7830a8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e500ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76e500:L76e500:{c.instructions+=1;NFSU2_TR(0x76e500);
{goto L76e5c8;}
}
B76e505:L76e505:{c.instructions+=2;NFSU2_TR(0x76e505);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76e508:{NFSU2_TR(0x76e508);
if(r1(R+518)){{goto L76e50e;}}
}
B76e50a:L76e50a:{c.instructions+=2;NFSU2_TR(0x76e50a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76e50c:{NFSU2_TR(0x76e50c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76e536;}}
}
B76e50e:L76e50e:{c.instructions+=4;NFSU2_TR(0x76e50e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76e511:{NFSU2_TR(0x76e511);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76e514:{NFSU2_TR(0x76e514);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
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
B76e517:{NFSU2_TR(0x76e517);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76e521;}}
}
B76e519:L76e519:{c.instructions+=2;NFSU2_TR(0x76e519);
__builtin_memmove((R+0),gp(0x8b8844),4);
}
B76e51e:{NFSU2_TR(0x76e51e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76e521:L76e521:{c.instructions+=5;NFSU2_TR(0x76e521);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e522:{NFSU2_TR(0x76e522);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e523:{NFSU2_TR(0x76e523);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76e526:{NFSU2_TR(0x76e526);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76e529:{NFSU2_TR(0x76e529);
u8 U[4];
__builtin_memmove((U+0),gp(0x7830b0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e52full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76e52f:L76e52f:{c.instructions+=3;NFSU2_TR(0x76e52f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76e532:{NFSU2_TR(0x76e532);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76e534:{NFSU2_TR(0x76e534);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76e53d;}}
}
B76e536:L76e536:{c.instructions+=2;NFSU2_TR(0x76e536);
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
B76e538:{NFSU2_TR(0x76e538);
{goto L76e5c8;}
}
B76e53d:L76e53d:{c.instructions+=4;NFSU2_TR(0x76e53d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76e540:{NFSU2_TR(0x76e540);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B76e543:{NFSU2_TR(0x76e543);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffcull))));
}
B76e546:{NFSU2_TR(0x76e546);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e54bull));
TAIL_STATIC(0x75c4d0u,75c);
}
B76e54b:L76e54b:{c.instructions+=5;NFSU2_TR(0x76e54b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76e54e:{NFSU2_TR(0x76e54e);
__builtin_memmove((R+24),(R+16),4);
}
B76e550:{NFSU2_TR(0x76e550);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76e553:{NFSU2_TR(0x76e553);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76e557:{NFSU2_TR(0x76e557);
{goto L76e570;}
}
B76e559:L76e559:{c.instructions+=3;NFSU2_TR(0x76e559);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76e55b:{NFSU2_TR(0x76e55b);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76e55c:{NFSU2_TR(0x76e55c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76e55d:L76e55d:{c.instructions+=2;NFSU2_TR(0x76e55d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+16),(U+4),4);
}
B76e560:{NFSU2_TR(0x76e560);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e565ull));
TAIL_STATIC(0x76d2d8u,76d);
}
B76e565:L76e565:{c.instructions+=5;NFSU2_TR(0x76e565);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B76e567:{NFSU2_TR(0x76e567);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B76e569:{NFSU2_TR(0x76e569);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76e56d:{NFSU2_TR(0x76e56d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B76e56f:{NFSU2_TR(0x76e56f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B76e570:L76e570:{c.instructions+=2;NFSU2_TR(0x76e570);
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
B76e572:{NFSU2_TR(0x76e572);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76e586;}}
}
B76e574:L76e574:{c.instructions+=2;NFSU2_TR(0x76e574);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76e577:{NFSU2_TR(0x76e577);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e57cull));
TAIL_STATIC(0x75c6c8u,75c);
}
B76e57c:L76e57c:{c.instructions+=4;NFSU2_TR(0x76e57c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76e57d:{NFSU2_TR(0x76e57d);
__builtin_memmove((R+24),(R+0),4);
}
B76e57f:{NFSU2_TR(0x76e57f);
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
B76e581:{NFSU2_TR(0x76e581);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76e536u);}goto L76e536;}}
}
B76e583:L76e583:{c.instructions+=1;NFSU2_TR(0x76e583);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76e586:L76e586:{c.instructions+=5;NFSU2_TR(0x76e586);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76e589:{NFSU2_TR(0x76e589);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e58a:{NFSU2_TR(0x76e58a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76e58d:{NFSU2_TR(0x76e58d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76e590:{NFSU2_TR(0x76e590);
u8 U[4];
__builtin_memmove((U+0),gp(0x7830b0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e596ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76e596:L76e596:{c.instructions+=2;NFSU2_TR(0x76e596);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76e598:{NFSU2_TR(0x76e598);
if(r1(R+518)){{goto L76e5b9;}}
}
B76e59a:L76e59a:{c.instructions+=2;NFSU2_TR(0x76e59a);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
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
B76e59d:{NFSU2_TR(0x76e59d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76e5a3;}}
}
B76e59f:L76e59f:{c.instructions+=3;NFSU2_TR(0x76e59f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e5a0:{NFSU2_TR(0x76e5a0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e5a1:{NFSU2_TR(0x76e5a1);
{goto L76e5a9;}
}
B76e5a3:L76e5a3:{c.instructions+=2;NFSU2_TR(0x76e5a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76e5a6:{NFSU2_TR(0x76e5a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76e5a9:L76e5a9:{c.instructions+=5;NFSU2_TR(0x76e5a9);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e5ab:{NFSU2_TR(0x76e5ab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e5ac:{NFSU2_TR(0x76e5ac);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e5ad:{NFSU2_TR(0x76e5ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76e5b0:{NFSU2_TR(0x76e5b0);
u8 U[4];
__builtin_memmove((U+0),gp(0x783130),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e5b6ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76e5b6:L76e5b6:{c.instructions+=1;NFSU2_TR(0x76e5b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76e5b9:L76e5b9:{c.instructions+=2;NFSU2_TR(0x76e5b9);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
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
B76e5bc:{NFSU2_TR(0x76e5bc);
if(r1(R+518)){{goto L76e5c5;}}
}
B76e5be:L76e5be:{c.instructions+=2;NFSU2_TR(0x76e5be);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e5bf:{NFSU2_TR(0x76e5bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e5c4ull));
TAIL_STATIC(0x75c6dau,75c);
}
B76e5c4:L76e5c4:{c.instructions+=1;NFSU2_TR(0x76e5c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76e5c5:L76e5c5:{c.instructions+=1;NFSU2_TR(0x76e5c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76e5c8:L76e5c8:{c.instructions+=2;NFSU2_TR(0x76e5c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+16),(U+0),4);
}
B76e5cb:{NFSU2_TR(0x76e5cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e5d0ull));
TAIL_STATIC(0x760ddbu,760);
}
B76e5d0:L76e5d0:{c.instructions+=1;NFSU2_TR(0x76e5d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76e5d1:L76e5d1:{c.instructions+=3;NFSU2_TR(0x76e5d1);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e5d3:{NFSU2_TR(0x76e5d3);
u8 U[4];
w4(U+0,u32(0x7d98f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e5d8:{NFSU2_TR(0x76e5d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e5ddull));
TAIL_STATIC(0x760da0u,760);
}
B76e5dd:L76e5dd:{c.instructions+=3;NFSU2_TR(0x76e5dd);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B76e5df:{NFSU2_TR(0x76e5df);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b88a8),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76e5e5:{NFSU2_TR(0x76e5e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76e615;}}
}
B76e5e7:L76e5e7:{c.instructions+=7;NFSU2_TR(0x76e5e7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e5e8:{NFSU2_TR(0x76e5e8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e5e9:{NFSU2_TR(0x76e5e9);
w1(R+512,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B76e5eb:{NFSU2_TR(0x76e5eb);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76e5ec:{NFSU2_TR(0x76e5ec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e5ed:{NFSU2_TR(0x76e5ed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e5ee:{NFSU2_TR(0x76e5ee);
u8 U[4];
__builtin_memmove((U+0),gp(0x7830a8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e5f4ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76e5f4:L76e5f4:{c.instructions+=2;NFSU2_TR(0x76e5f4);
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
B76e5f6:{NFSU2_TR(0x76e5f6);
if(r1(R+518)){{goto L76e600;}}
}
B76e5f8:L76e5f8:{c.instructions+=2;NFSU2_TR(0x76e5f8);
__builtin_memmove(gp(0x8b88a8),(R+28),4);
}
B76e5fe:{NFSU2_TR(0x76e5fe);
{goto L76e615;}
}
B76e600:L76e600:{c.instructions+=1;NFSU2_TR(0x76e600);
u8 U[4];
__builtin_memmove((U+0),gp(0x783114),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e606ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76e606:L76e606:{c.instructions+=2;NFSU2_TR(0x76e606);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x78ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76e609:{NFSU2_TR(0x76e609);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76e615;}}
}
B76e60b:L76e60b:{c.instructions+=1;NFSU2_TR(0x76e60b);
s4(0x8b88a8,u32(0x2ull));
}
B76e615:L76e615:{c.instructions+=3;NFSU2_TR(0x76e615);
__builtin_memmove((R+0),gp(0x8b88a8),4);
}
B76e61a:{NFSU2_TR(0x76e61a);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76e61d:{NFSU2_TR(0x76e61d);
if(r1(R+518)){{goto L76e6f6;}}
}
B76e623:L76e623:{c.instructions+=2;NFSU2_TR(0x76e623);
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
B76e625:{NFSU2_TR(0x76e625);
if(r1(R+518)){{goto L76e6f6;}}
}
B76e62b:L76e62b:{c.instructions+=2;NFSU2_TR(0x76e62b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76e62e:{NFSU2_TR(0x76e62e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76e65a;}}
}
B76e630:L76e630:{c.instructions+=4;NFSU2_TR(0x76e630);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76e633:{NFSU2_TR(0x76e633);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76e636:{NFSU2_TR(0x76e636);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
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
B76e639:{NFSU2_TR(0x76e639);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76e643;}}
}
B76e63b:L76e63b:{c.instructions+=2;NFSU2_TR(0x76e63b);
__builtin_memmove((R+0),gp(0x8b8844),4);
}
B76e640:{NFSU2_TR(0x76e640);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76e643:L76e643:{c.instructions+=5;NFSU2_TR(0x76e643);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e644:{NFSU2_TR(0x76e644);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e645:{NFSU2_TR(0x76e645);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76e648:{NFSU2_TR(0x76e648);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76e64b:{NFSU2_TR(0x76e64b);
u8 U[4];
__builtin_memmove((U+0),gp(0x7830a8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e651ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76e651:L76e651:{c.instructions+=4;NFSU2_TR(0x76e651);
__builtin_memmove((R+12),(R+0),4);
}
B76e653:{NFSU2_TR(0x76e653);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76e656:{NFSU2_TR(0x76e656);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76e658:{NFSU2_TR(0x76e658);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76e661;}}
}
B76e65a:L76e65a:{c.instructions+=2;NFSU2_TR(0x76e65a);
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
B76e65c:{NFSU2_TR(0x76e65c);
{goto L76e708;}
}
B76e661:L76e661:{c.instructions+=5;NFSU2_TR(0x76e661);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76e664:{NFSU2_TR(0x76e664);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B76e667:{NFSU2_TR(0x76e667);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B76e66a:{NFSU2_TR(0x76e66a);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffcull))));
}
B76e66d:{NFSU2_TR(0x76e66d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e672ull));
TAIL_STATIC(0x75c4d0u,75c);
}
B76e672:L76e672:{c.instructions+=5;NFSU2_TR(0x76e672);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76e675:{NFSU2_TR(0x76e675);
__builtin_memmove((R+28),(R+16),4);
}
B76e677:{NFSU2_TR(0x76e677);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76e67a:{NFSU2_TR(0x76e67a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76e67e:{NFSU2_TR(0x76e67e);
{goto L76e697;}
}
B76e680:L76e680:{c.instructions+=3;NFSU2_TR(0x76e680);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76e682:{NFSU2_TR(0x76e682);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76e683:{NFSU2_TR(0x76e683);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76e684:L76e684:{c.instructions+=2;NFSU2_TR(0x76e684);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+16),(U+4),4);
}
B76e687:{NFSU2_TR(0x76e687);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e68cull));
TAIL_STATIC(0x76d2d8u,76d);
}
B76e68c:L76e68c:{c.instructions+=4;NFSU2_TR(0x76e68c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B76e68e:{NFSU2_TR(0x76e68e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B76e690:{NFSU2_TR(0x76e690);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76e694:{NFSU2_TR(0x76e694);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76e697:L76e697:{c.instructions+=2;NFSU2_TR(0x76e697);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B76e699:{NFSU2_TR(0x76e699);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76e6b2;}}
}
B76e69b:L76e69b:{c.instructions+=3;NFSU2_TR(0x76e69b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B76e69e:{NFSU2_TR(0x76e69e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e69f:{NFSU2_TR(0x76e69f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e6a4ull));
TAIL_STATIC(0x75c6c8u,75c);
}
B76e6a4:L76e6a4:{c.instructions+=4;NFSU2_TR(0x76e6a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76e6a5:{NFSU2_TR(0x76e6a5);
__builtin_memmove((R+28),(R+0),4);
}
B76e6a7:{NFSU2_TR(0x76e6a7);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B76e6a9:{NFSU2_TR(0x76e6a9);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76e65au);}goto L76e65a;}}
}
B76e6ab:L76e6ab:{c.instructions+=1;NFSU2_TR(0x76e6ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76e6b2:L76e6b2:{c.instructions+=5;NFSU2_TR(0x76e6b2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e6b3:{NFSU2_TR(0x76e6b3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e6b4:{NFSU2_TR(0x76e6b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76e6b7:{NFSU2_TR(0x76e6b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76e6ba:{NFSU2_TR(0x76e6ba);
u8 U[4];
__builtin_memmove((U+0),gp(0x7830a8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e6c0ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76e6c0:L76e6c0:{c.instructions+=2;NFSU2_TR(0x76e6c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76e6c2:{NFSU2_TR(0x76e6c2);
if(r1(R+518)){{goto L76e6e5;}}
}
B76e6c4:L76e6c4:{c.instructions+=4;NFSU2_TR(0x76e6c4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e6c5:{NFSU2_TR(0x76e6c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e6c6:{NFSU2_TR(0x76e6c6);
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
B76e6c9:{NFSU2_TR(0x76e6c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76e6cf;}}
}
B76e6cb:L76e6cb:{c.instructions+=3;NFSU2_TR(0x76e6cb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e6cc:{NFSU2_TR(0x76e6cc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e6cd:{NFSU2_TR(0x76e6cd);
{goto L76e6d5;}
}
B76e6cf:L76e6cf:{c.instructions+=2;NFSU2_TR(0x76e6cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76e6d2:{NFSU2_TR(0x76e6d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76e6d5:L76e6d5:{c.instructions+=5;NFSU2_TR(0x76e6d5);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e6d7:{NFSU2_TR(0x76e6d7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e6d8:{NFSU2_TR(0x76e6d8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e6d9:{NFSU2_TR(0x76e6d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76e6dc:{NFSU2_TR(0x76e6dc);
u8 U[4];
__builtin_memmove((U+0),gp(0x78319c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e6e2ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76e6e2:L76e6e2:{c.instructions+=1;NFSU2_TR(0x76e6e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76e6e5:L76e6e5:{c.instructions+=2;NFSU2_TR(0x76e6e5);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
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
B76e6e8:{NFSU2_TR(0x76e6e8);
if(r1(R+518)){{goto L76e6f1;}}
}
B76e6ea:L76e6ea:{c.instructions+=2;NFSU2_TR(0x76e6ea);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e6eb:{NFSU2_TR(0x76e6eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e6f0ull));
TAIL_STATIC(0x75c6dau,75c);
}
B76e6f0:L76e6f0:{c.instructions+=1;NFSU2_TR(0x76e6f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76e6f1:L76e6f1:{c.instructions+=2;NFSU2_TR(0x76e6f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76e6f4:{NFSU2_TR(0x76e6f4);
{goto L76e708;}
}
B76e6f6:L76e6f6:{c.instructions+=5;NFSU2_TR(0x76e6f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76e6f9:{NFSU2_TR(0x76e6f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76e6fc:{NFSU2_TR(0x76e6fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76e6ff:{NFSU2_TR(0x76e6ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76e702:{NFSU2_TR(0x76e702);
u8 U[4];
__builtin_memmove((U+0),gp(0x7830b0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e708ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76e708:L76e708:{c.instructions+=2;NFSU2_TR(0x76e708);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+16),(U+0),4);
}
B76e70b:{NFSU2_TR(0x76e70b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e710ull));
TAIL_STATIC(0x760ddbu,760);
}
B76e710:L76e710:{c.instructions+=1;NFSU2_TR(0x76e710);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76e720:L76e720:{c.instructions+=8;NFSU2_TR(0x76e720);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e721:{NFSU2_TR(0x76e721);
__builtin_memmove((R+20),(R+16),4);
}
B76e723:{NFSU2_TR(0x76e723);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e724:{NFSU2_TR(0x76e724);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e725:{NFSU2_TR(0x76e725);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e726:{NFSU2_TR(0x76e726);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76e729:{NFSU2_TR(0x76e729);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76e72b:{NFSU2_TR(0x76e72b);
if(r1(R+518)){{goto L76e77a;}}
}
B76e72d:L76e72d:{c.instructions+=6;NFSU2_TR(0x76e72d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76e730:{NFSU2_TR(0x76e730);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76e733:{NFSU2_TR(0x76e733);
w1(R+13,u8(0x41ull));
}
B76e735:{NFSU2_TR(0x76e735);
w1(R+12,u8(0x5aull));
}
B76e737:{NFSU2_TR(0x76e737);
w1(R+9,u8(0x20ull));
}
B76e739:{NFSU2_TR(0x76e739);
__builtin_memmove((R+4),(R+4),4);
}
B76e73c:L76e73c:{c.instructions+=4;NFSU2_TR(0x76e73c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+1),(U+0),1);
}
B76e73e:{NFSU2_TR(0x76e73e);
w1(R+1,u8(u32(r1(R+1))|u32(r1(R+1))));
w1(R+518,u8((r1(R+1))==(u8(0x0ull))));
}
B76e740:{NFSU2_TR(0x76e740);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B76e742:{NFSU2_TR(0x76e742);
if(r1(R+518)){{goto L76e76b;}}
}
B76e744:L76e744:{c.instructions+=2;NFSU2_TR(0x76e744);
w1(R+0,u8(u32(r1(R+0))|u32(r1(R+0))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
}
B76e746:{NFSU2_TR(0x76e746);
if(r1(R+518)){{goto L76e76b;}}
}
B76e748:L76e748:{c.instructions+=4;NFSU2_TR(0x76e748);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B76e74b:{NFSU2_TR(0x76e74b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B76e74e:{NFSU2_TR(0x76e74e);
u8 U[1];
__builtin_memmove((U+0),(R+1),1);
w1(R+512,u8((r1(U+0))<(r1(R+13))));
}
B76e750:{NFSU2_TR(0x76e750);
if(r1(R+512)){{goto L76e758;}}
}
B76e752:L76e752:{c.instructions+=2;NFSU2_TR(0x76e752);
u8 U[2];
__builtin_memmove((U+0),(R+1),1);
w1(R+512,u8((r1(U+0))<(r1(R+12))));
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B76e754:{NFSU2_TR(0x76e754);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L76e758;}}
}
B76e756:L76e756:{c.instructions+=1;NFSU2_TR(0x76e756);
w1(R+1,u8(u32(r1(R+1))+u32(r1(R+9))));
}
B76e758:L76e758:{c.instructions+=2;NFSU2_TR(0x76e758);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
w1(R+512,u8((r1(U+0))<(r1(R+13))));
}
B76e75a:{NFSU2_TR(0x76e75a);
if(r1(R+512)){{goto L76e762;}}
}
B76e75c:L76e75c:{c.instructions+=2;NFSU2_TR(0x76e75c);
u8 U[2];
__builtin_memmove((U+0),(R+0),1);
w1(R+512,u8((r1(U+0))<(r1(R+12))));
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B76e75e:{NFSU2_TR(0x76e75e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L76e762;}}
}
B76e760:L76e760:{c.instructions+=1;NFSU2_TR(0x76e760);
w1(R+0,u8(u32(r1(R+0))+u32(r1(R+9))));
}
B76e762:L76e762:{c.instructions+=2;NFSU2_TR(0x76e762);
u8 U[5];
__builtin_memmove((U+3),(R+1),1);
w1(R+512,u8((r1(U+3))<(r1(R+0))));
w1(R+523,sborrow<u8>(r1(U+3),r1(R+0)));
w1(U+4,u8(u32(r1(U+3))-u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B76e764:{NFSU2_TR(0x76e764);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76e771;}}
}
B76e766:L76e766:{c.instructions+=2;NFSU2_TR(0x76e766);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B76e769:{NFSU2_TR(0x76e769);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76e73cu);}goto L76e73c;}}
}
B76e76b:L76e76b:{c.instructions+=3;NFSU2_TR(0x76e76b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B76e76d:{NFSU2_TR(0x76e76d);
u8 U[5];
__builtin_memmove((U+3),(R+1),1);
w1(R+512,u8((r1(U+3))<(r1(R+0))));
w1(R+523,sborrow<u8>(r1(U+3),r1(R+0)));
w1(U+4,u8(u32(r1(U+3))-u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B76e76f:{NFSU2_TR(0x76e76f);
if(r1(R+518)){{goto L76e77a;}}
}
B76e771:L76e771:{c.instructions+=2;NFSU2_TR(0x76e771);
w4(R+4,u32(0xffffffffull));
}
B76e776:{NFSU2_TR(0x76e776);
if(r1(R+512)){{goto L76e77a;}}
}
B76e778:L76e778:{c.instructions+=1;NFSU2_TR(0x76e778);
u8 U[6];
w1(R+512,u8((r4(R+4))!=(u32(0x0ull))));
w1(R+523,sborrow<u32>(u32(0x0ull),r4(R+4)));
w4(R+4,u32(0-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76e77a:L76e77a:{c.instructions+=6;NFSU2_TR(0x76e77a);
__builtin_memmove((R+0),(R+4),4);
}
B76e77c:{NFSU2_TR(0x76e77c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76e77d:{NFSU2_TR(0x76e77d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76e77e:{NFSU2_TR(0x76e77e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76e77f:{NFSU2_TR(0x76e77f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B76e780:{NFSU2_TR(0x76e780);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76e781:L76e781:{c.instructions+=11;NFSU2_TR(0x76e781);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e782:{NFSU2_TR(0x76e782);
__builtin_memmove((R+20),(R+16),4);
}
B76e784:{NFSU2_TR(0x76e784);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e785:{NFSU2_TR(0x76e785);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e786:{NFSU2_TR(0x76e786);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e787:{NFSU2_TR(0x76e787);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76e78a:{NFSU2_TR(0x76e78a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76e78d:{NFSU2_TR(0x76e78d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x82ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B76e78f:{NFSU2_TR(0x76e78f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76e792:{NFSU2_TR(0x76e792);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76e795:{NFSU2_TR(0x76e795);
if(r1(R+518)){{goto L76e89a;}}
}
B76e79b:L76e79b:{c.instructions+=2;NFSU2_TR(0x76e79b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B76e79d:{NFSU2_TR(0x76e79d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76e89a;}}
}
B76e7a3:L76e7a3:{c.instructions+=3;NFSU2_TR(0x76e7a3);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B76e7a5:{NFSU2_TR(0x76e7a5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B76e7a7:{NFSU2_TR(0x76e7a7);
if(r1(R+518)){{goto L76e7bf;}}
}
B76e7a9:L76e7a9:{c.instructions+=3;NFSU2_TR(0x76e7a9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B76e7ab:{NFSU2_TR(0x76e7ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76e7ae:{NFSU2_TR(0x76e7ae);
if(r1(R+518)){{goto L76e89a;}}
}
B76e7b4:L76e7b4:{c.instructions+=4;NFSU2_TR(0x76e7b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76e7b7:{NFSU2_TR(0x76e7b7);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffeull))));
}
B76e7ba:{NFSU2_TR(0x76e7ba);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B76e7bc:{NFSU2_TR(0x76e7bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76e7bf:L76e7bf:{c.instructions+=8;NFSU2_TR(0x76e7bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76e7c2:{NFSU2_TR(0x76e7c2);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffefull))));
}
B76e7c5:{NFSU2_TR(0x76e7c5);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x2ull))));
}
B76e7c8:{NFSU2_TR(0x76e7c8);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))&u32(u16(0x10cull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B76e7cc:{NFSU2_TR(0x76e7cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76e7cf:{NFSU2_TR(0x76e7cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76e7d2:{NFSU2_TR(0x76e7d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76e7d5:{NFSU2_TR(0x76e7d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76e7fc;}}
}
B76e7d7:L76e7d7:{c.instructions+=2;NFSU2_TR(0x76e7d7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x819f30ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76e7dd:{NFSU2_TR(0x76e7dd);
if(r1(R+518)){{goto L76e7e7;}}
}
B76e7df:L76e7df:{c.instructions+=2;NFSU2_TR(0x76e7df);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x819f50ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76e7e5:{NFSU2_TR(0x76e7e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76e7f2;}}
}
B76e7e7:L76e7e7:{c.instructions+=2;NFSU2_TR(0x76e7e7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e7e8:{NFSU2_TR(0x76e7e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e7edull));
TAIL_STATIC(0x76ca2bu,76c);
}
B76e7ed:L76e7ed:{c.instructions+=3;NFSU2_TR(0x76e7ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76e7ef:{NFSU2_TR(0x76e7ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76e7f0:{NFSU2_TR(0x76e7f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76e7f9;}}
}
B76e7f2:L76e7f2:{c.instructions+=2;NFSU2_TR(0x76e7f2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e7f3:{NFSU2_TR(0x76e7f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e7f8ull));
TAIL_STATIC(0x76c9e7u,76c);
}
B76e7f8:L76e7f8:{c.instructions+=1;NFSU2_TR(0x76e7f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76e7f9:L76e7f9:{c.instructions+=1;NFSU2_TR(0x76e7f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76e7fc:L76e7fc:{c.instructions+=3;NFSU2_TR(0x76e7fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0x108ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
}
B76e802:{NFSU2_TR(0x76e802);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e803:{NFSU2_TR(0x76e803);
if(r1(R+518)){{goto L76e86a;}}
}
B76e805:L76e805:{c.instructions+=11;NFSU2_TR(0x76e805);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76e808:{NFSU2_TR(0x76e808);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B76e80a:{NFSU2_TR(0x76e80a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((R+8),(U+0),4);
}
B76e80d:{NFSU2_TR(0x76e80d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B76e80f:{NFSU2_TR(0x76e80f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76e812:{NFSU2_TR(0x76e812);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B76e814:{NFSU2_TR(0x76e814);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B76e815:{NFSU2_TR(0x76e815);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B76e816:{NFSU2_TR(0x76e816);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76e818:{NFSU2_TR(0x76e818);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76e81b:{NFSU2_TR(0x76e81b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L76e82a;}}
}
B76e81d:L76e81d:{c.instructions+=4;NFSU2_TR(0x76e81d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e81e:{NFSU2_TR(0x76e81e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e81f:{NFSU2_TR(0x76e81f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e820:{NFSU2_TR(0x76e820);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e825ull));
TAIL_STATIC(0x760237u,760);
}
B76e825:L76e825:{c.instructions+=2;NFSU2_TR(0x76e825);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76e828:{NFSU2_TR(0x76e828);
{goto L76e85c;}
}
B76e82a:L76e82a:{c.instructions+=2;NFSU2_TR(0x76e82a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76e82d:{NFSU2_TR(0x76e82d);
if(r1(R+518)){{goto L76e848;}}
}
B76e82f:L76e82f:{c.instructions+=8;NFSU2_TR(0x76e82f);
__builtin_memmove((R+8),(R+4),4);
}
B76e831:{NFSU2_TR(0x76e831);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B76e834:{NFSU2_TR(0x76e834);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8ba4c0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B76e83b:{NFSU2_TR(0x76e83b);
__builtin_memmove((R+0),(R+4),4);
}
B76e83d:{NFSU2_TR(0x76e83d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
}
B76e840:{NFSU2_TR(0x76e840);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B76e843:{NFSU2_TR(0x76e843);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B76e846:{NFSU2_TR(0x76e846);
{goto L76e84d;}
}
B76e848:L76e848:{c.instructions+=1;NFSU2_TR(0x76e848);
w4(R+0,u32(0x81a2f0ull));
}
B76e84d:L76e84d:{c.instructions+=2;NFSU2_TR(0x76e84d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B76e851:{NFSU2_TR(0x76e851);
if(r1(R+518)){{goto L76e85f;}}
}
B76e853:L76e853:{c.instructions+=4;NFSU2_TR(0x76e853);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e855:{NFSU2_TR(0x76e855);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e856:{NFSU2_TR(0x76e856);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e857:{NFSU2_TR(0x76e857);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e85cull));
TAIL_STATIC(0x7606e7u,760);
}
B76e85c:L76e85c:{c.instructions+=1;NFSU2_TR(0x76e85c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B76e85f:L76e85f:{c.instructions+=4;NFSU2_TR(0x76e85f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76e862:{NFSU2_TR(0x76e862);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76e865:{NFSU2_TR(0x76e865);
u8 U[2];
__builtin_memmove((U+0),(R+12),2);
s2(u32(r4(R+0)),r2(U+0));
}
B76e868:{NFSU2_TR(0x76e868);
{goto L76e885;}
}
B76e86a:L76e86a:{c.instructions+=9;NFSU2_TR(0x76e86a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76e86d:{NFSU2_TR(0x76e86d);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e86f:{NFSU2_TR(0x76e86f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76e870:{NFSU2_TR(0x76e870);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e871:{NFSU2_TR(0x76e871);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B76e874:{NFSU2_TR(0x76e874);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e875:{NFSU2_TR(0x76e875);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e876:{NFSU2_TR(0x76e876);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B76e87a:{NFSU2_TR(0x76e87a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e87full));
TAIL_STATIC(0x760237u,760);
}
B76e87f:L76e87f:{c.instructions+=2;NFSU2_TR(0x76e87f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B76e882:{NFSU2_TR(0x76e882);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76e885:L76e885:{c.instructions+=3;NFSU2_TR(0x76e885);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76e888:{NFSU2_TR(0x76e888);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76e889:{NFSU2_TR(0x76e889);
if(r1(R+518)){{goto L76e891;}}
}
B76e88b:L76e88b:{c.instructions+=2;NFSU2_TR(0x76e88b);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x20ull))));
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
B76e88f:{NFSU2_TR(0x76e88f);
{goto L76e8a0;}
}
B76e891:L76e891:{c.instructions+=3;NFSU2_TR(0x76e891);
__builtin_memmove((R+0),(R+12),4);
}
B76e893:{NFSU2_TR(0x76e893);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76e898:{NFSU2_TR(0x76e898);
{goto L76e8a5;}
}
B76e89a:L76e89a:{c.instructions+=2;NFSU2_TR(0x76e89a);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76e89d:{NFSU2_TR(0x76e89d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76e8a0:L76e8a0:{c.instructions+=1;NFSU2_TR(0x76e8a0);
w4(R+0,u32(0xffffull));
}
B76e8a5:L76e8a5:{c.instructions+=4;NFSU2_TR(0x76e8a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76e8a6:{NFSU2_TR(0x76e8a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76e8a7:{NFSU2_TR(0x76e8a7);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B76e8a8:{NFSU2_TR(0x76e8a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76e8a9:L76e8a9:{c.instructions+=3;NFSU2_TR(0x76e8a9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e8aa:{NFSU2_TR(0x76e8aa);
__builtin_memmove((R+20),(R+16),4);
}
B76e8ac:{NFSU2_TR(0x76e8ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e8b1ull));
TAIL_STATIC(0x761e3cu,761);
}
B76e8b1:L76e8b1:{c.instructions+=3;NFSU2_TR(0x76e8b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76e8b4:{NFSU2_TR(0x76e8b4);
u8 U[8];
__builtin_memmove((U+0),gp(0x8ba23c),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76e8ba:{NFSU2_TR(0x76e8ba);
if(r1(R+518)){{goto L76e8c1;}}
}
B76e8bc:L76e8bc:{c.instructions+=1;NFSU2_TR(0x76e8bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e8c1ull));
TAIL_STATIC(0x765c02u,765);
}
B76e8c1:L76e8c1:{c.instructions+=2;NFSU2_TR(0x76e8c1);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76e8c5:{NFSU2_TR(0x76e8c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76e8cd;}}
}
B76e8c7:L76e8c7:{c.instructions+=2;NFSU2_TR(0x76e8c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B76e8c8:{NFSU2_TR(0x76e8c8);
TAIL_STATIC(0x75cf10u,75c);
}
B76e8cd:L76e8cd:{c.instructions+=4;NFSU2_TR(0x76e8cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76e8d0:{NFSU2_TR(0x76e8d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e8d1:{NFSU2_TR(0x76e8d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e8d2:{NFSU2_TR(0x76e8d2);
{goto L76e903;}
}
B76e8d4:L76e8d4:{c.instructions+=3;NFSU2_TR(0x76e8d4);
w4(R+24,u32(r1(R+8)));
}
B76e8d7:{NFSU2_TR(0x76e8d7);
u8 U[14];
w4(U+0,u32(u32(u32(0x1dull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+13))==(u8(0x0ull))));
}
B76e8dc:{NFSU2_TR(0x76e8dc);
if(r1(R+518)){{goto L76e8fa;}}
}
B76e8de:L76e8de:{c.instructions+=4;NFSU2_TR(0x76e8de);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B76e8df:{NFSU2_TR(0x76e8df);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+12),(U+0),1);
}
B76e8e1:{NFSU2_TR(0x76e8e1);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B76e8e3:{NFSU2_TR(0x76e8e3);
if(r1(R+518)){{goto L76e920;}}
}
B76e8e5:L76e8e5:{c.instructions+=6;NFSU2_TR(0x76e8e5);
w4(R+8,u32(r2(R+8)));
}
B76e8e8:{NFSU2_TR(0x76e8e8);
w4(R+24,u32(r1(R+12)));
}
B76e8eb:{NFSU2_TR(0x76e8eb);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B76e8ee:{NFSU2_TR(0x76e8ee);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+24))));
}
B76e8f0:{NFSU2_TR(0x76e8f0);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+8)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B76e8f3:{NFSU2_TR(0x76e8f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76e902;}}
}
B76e8f5:L76e8f5:{c.instructions+=2;NFSU2_TR(0x76e8f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B76e8f8:{NFSU2_TR(0x76e8f8);
{goto L76e91c;}
}
B76e8fa:L76e8fa:{c.instructions+=3;NFSU2_TR(0x76e8fa);
w4(R+24,u32(r2(R+8)));
}
B76e8fd:{NFSU2_TR(0x76e8fd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76e900:{NFSU2_TR(0x76e900);
if(r1(R+518)){{goto L76e90c;}}
}
B76e902:L76e902:{c.instructions+=1;NFSU2_TR(0x76e902);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B76e903:L76e903:{c.instructions+=3;NFSU2_TR(0x76e903);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w2(R+8,u16(r1(U+0)));
}
B76e907:{NFSU2_TR(0x76e907);
u8 U[2];
w2(U+0,u16(u32(r2(R+8))&u32(r2(R+8))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B76e90a:{NFSU2_TR(0x76e90a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76e8d4u);}goto L76e8d4;}}
}
B76e90c:L76e90c:{c.instructions+=7;NFSU2_TR(0x76e90c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76e90f:{NFSU2_TR(0x76e90f);
w4(R+8,u32(r2(R+8)));
}
B76e912:{NFSU2_TR(0x76e912);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B76e914:{NFSU2_TR(0x76e914);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B76e916:{NFSU2_TR(0x76e916);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B76e918:{NFSU2_TR(0x76e918);
w4(R+0,u32(~u32(r4(R+0))));
}
B76e91a:{NFSU2_TR(0x76e91a);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76e91c:L76e91c:{c.instructions+=4;NFSU2_TR(0x76e91c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76e91d:{NFSU2_TR(0x76e91d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76e91e:{NFSU2_TR(0x76e91e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B76e91f:{NFSU2_TR(0x76e91f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76e920:L76e920:{c.instructions+=2;NFSU2_TR(0x76e920);
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
B76e922:{NFSU2_TR(0x76e922);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76e91cu);}goto L76e91c;}
}
B76e930:L76e930:{c.instructions+=3;NFSU2_TR(0x76e930);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e931:{NFSU2_TR(0x76e931);
__builtin_memmove((R+24),(R+4),4);
}
B76e933:{NFSU2_TR(0x76e933);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e938ull));
{goto L76e94c;}
}
B76e938:L76e938:{c.instructions+=2;NFSU2_TR(0x76e938);
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
B76e93d:{NFSU2_TR(0x76e93d);
if(r1(R+518)){{goto L76e946;}}
}
B76e93f:L76e93f:{c.instructions+=2;NFSU2_TR(0x76e93f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e940:{NFSU2_TR(0x76e940);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e945ull));
TAIL_STATIC(0x575630u,575);
}
B76e945:L76e945:{c.instructions+=1;NFSU2_TR(0x76e945);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76e946:L76e946:{c.instructions+=3;NFSU2_TR(0x76e946);
__builtin_memmove((R+0),(R+24),4);
}
B76e948:{NFSU2_TR(0x76e948);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76e949:{NFSU2_TR(0x76e949);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76e94c:L76e94c:{c.instructions+=2;NFSU2_TR(0x76e94c);
u8 U[4];
w4(U+0,u32(0x7d9930ull));
s4(u32(r4(R+4)),r4(U+0));
}
B76e952:{NFSU2_TR(0x76e952);
TAIL_STATIC(0x5d05e0u,5d0);
}
B76e957:L76e957:{c.instructions+=2;NFSU2_TR(0x76e957);
w4(R+0,u32(0x77a607ull));
}
B76e95c:{NFSU2_TR(0x76e95c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e961ull));
TAIL_STATIC(0x75dd50u,75d);
}
B76e961:L76e961:{c.instructions+=4;NFSU2_TR(0x76e961);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B76e964:{NFSU2_TR(0x76e964);
u8 U[4];
w4(U+0,u32(0x7d9938ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e969:{NFSU2_TR(0x76e969);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76e96c:{NFSU2_TR(0x76e96c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e971ull));
TAIL_STATIC(0x5d0620u,5d0);
}
B76e971:L76e971:{c.instructions+=5;NFSU2_TR(0x76e971);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76e975:{NFSU2_TR(0x76e975);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76e978:{NFSU2_TR(0x76e978);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e979:{NFSU2_TR(0x76e979);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76e97c:{NFSU2_TR(0x76e97c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e981ull));
TAIL_STATIC(0x5d0580u,5d0);
}
B76e981:L76e981:{c.instructions+=5;NFSU2_TR(0x76e981);
u8 U[4];
w4(U+0,u32(0x7e5be8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e986:{NFSU2_TR(0x76e986);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76e989:{NFSU2_TR(0x76e989);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e98a:{NFSU2_TR(0x76e98a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
w4(U+4,u32(0x7d9930ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76e991:{NFSU2_TR(0x76e991);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e996ull));
TAIL_STATIC(0x75d8ffu,75d);
}
B76e996:L76e996:{c.instructions+=1;NFSU2_TR(0x76e996);
u8 U[4];
{SPILL();c.pc=0x76e996u;V r_=user_op(c,262160,{V(0x3ull)});SPILL();wv<4>((U+0),r_);}
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
{u32 t_=u32(u8(0x0ull));TAIL_DYNAMIC(t_);}
}
B76e997:L76e997:{c.instructions+=4;NFSU2_TR(0x76e997);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e998:{NFSU2_TR(0x76e998);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76e99c:{NFSU2_TR(0x76e99c);
__builtin_memmove((R+24),(R+4),4);
}
B76e99e:{NFSU2_TR(0x76e99e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e9a3ull));
TAIL_STATIC(0x5d0770u,5d0);
}
B76e9a3:L76e9a3:{c.instructions+=4;NFSU2_TR(0x76e9a3);
u8 U[4];
w4(U+0,u32(0x7d9930ull));
s4(u32(r4(R+24)),r4(U+0));
}
B76e9a9:{NFSU2_TR(0x76e9a9);
__builtin_memmove((R+0),(R+24),4);
}
B76e9ab:{NFSU2_TR(0x76e9ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76e9ac:{NFSU2_TR(0x76e9ac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76e9af:L76e9af:{c.instructions+=2;NFSU2_TR(0x76e9af);
w4(R+0,u32(0x77a607ull));
}
B76e9b4:{NFSU2_TR(0x76e9b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e9b9ull));
TAIL_STATIC(0x75dd50u,75d);
}
B76e9b9:L76e9b9:{c.instructions+=4;NFSU2_TR(0x76e9b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B76e9bc:{NFSU2_TR(0x76e9bc);
u8 U[4];
w4(U+0,u32(0x7d9950ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e9c1:{NFSU2_TR(0x76e9c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76e9c4:{NFSU2_TR(0x76e9c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e9c9ull));
TAIL_STATIC(0x5d0620u,5d0);
}
B76e9c9:L76e9c9:{c.instructions+=5;NFSU2_TR(0x76e9c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76e9cd:{NFSU2_TR(0x76e9cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76e9d0:{NFSU2_TR(0x76e9d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e9d1:{NFSU2_TR(0x76e9d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76e9d4:{NFSU2_TR(0x76e9d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e9d9ull));
TAIL_STATIC(0x5d0580u,5d0);
}
B76e9d9:L76e9d9:{c.instructions+=5;NFSU2_TR(0x76e9d9);
u8 U[4];
w4(U+0,u32(0x7e4950ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e9de:{NFSU2_TR(0x76e9de);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76e9e1:{NFSU2_TR(0x76e9e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76e9e2:{NFSU2_TR(0x76e9e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
w4(U+4,u32(0x7d9924ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76e9e9:{NFSU2_TR(0x76e9e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76e9eeull));
TAIL_STATIC(0x75d8ffu,75d);
}
B76e9ee:L76e9ee:{c.instructions+=1;NFSU2_TR(0x76e9ee);
u8 U[4];
{SPILL();c.pc=0x76e9eeu;V r_=user_op(c,262160,{V(0x3ull)});SPILL();wv<4>((U+0),r_);}
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
{u32 t_=u32(u8(0x0ull));TAIL_DYNAMIC(t_);}
}
B76e9f0:L76e9f0:{c.instructions+=1;NFSU2_TR(0x76e9f0);
{u32 t_=u32(m4(0x783148));TAIL_DYNAMIC(t_);}
}
B76e9f6:L76e9f6:{c.instructions+=1;NFSU2_TR(0x76e9f6);
{u32 t_=u32(m4(0x78314c));TAIL_DYNAMIC(t_);}
}
B76e9fc:L76e9fc:{c.instructions+=1;NFSU2_TR(0x76e9fc);
{u32 t_=u32(m4(0x783154));TAIL_DYNAMIC(t_);}
}
B76ea02:L76ea02:{c.instructions+=1;NFSU2_TR(0x76ea02);
{u32 t_=u32(m4(0x783290));TAIL_DYNAMIC(t_);}
}
B76ea08:L76ea08:{c.instructions+=13;NFSU2_TR(0x76ea08);
__builtin_memmove((R+28),(R+28),4);
}
B76ea0a:{NFSU2_TR(0x76ea0a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ea0b:{NFSU2_TR(0x76ea0b);
__builtin_memmove((R+20),(R+16),4);
}
B76ea0d:{NFSU2_TR(0x76ea0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B76ea10:{NFSU2_TR(0x76ea10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76ea13:{NFSU2_TR(0x76ea13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76ea16:{NFSU2_TR(0x76ea16);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ea17:{NFSU2_TR(0x76ea17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76ea1a:{NFSU2_TR(0x76ea1a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B76ea1d:{NFSU2_TR(0x76ea1d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B76ea1f:{NFSU2_TR(0x76ea1f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B76ea21:{NFSU2_TR(0x76ea21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76ea24:{NFSU2_TR(0x76ea24);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L76eb2b;}}
}
B76ea2a:L76ea2a:{c.instructions+=7;NFSU2_TR(0x76ea2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76ea2d:{NFSU2_TR(0x76ea2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B76ea30:{NFSU2_TR(0x76ea30);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ea31:{NFSU2_TR(0x76ea31);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ea32:{NFSU2_TR(0x76ea32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76ea35:{NFSU2_TR(0x76ea35);
w4(R+24,u32(0xffc03fc0ull));
}
B76ea3a:{NFSU2_TR(0x76ea3a);
w4(R+0,u32(0xff00ffull));
}
B76ea3f:L76ea3f:{c.instructions+=4;NFSU2_TR(0x76ea3f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B76ea42:{NFSU2_TR(0x76ea42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76ea45:{NFSU2_TR(0x76ea45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76ea48:{NFSU2_TR(0x76ea48);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L76eb0f;}}
}
B76ea4e:L76ea4e:{c.instructions+=8;NFSU2_TR(0x76ea4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76ea51:{NFSU2_TR(0x76ea51);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+8))));
}
B76ea53:{NFSU2_TR(0x76ea53);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B76ea54:{NFSU2_TR(0x76ea54);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B76ea57:{NFSU2_TR(0x76ea57);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76ea5a:{NFSU2_TR(0x76ea5a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B76ea5b:{NFSU2_TR(0x76ea5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76ea5e:{NFSU2_TR(0x76ea5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76ea61:L76ea61:{c.instructions+=59;NFSU2_TR(0x76ea61);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B76ea64:{NFSU2_TR(0x76ea64);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B76ea68:{NFSU2_TR(0x76ea68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76ea6b:{NFSU2_TR(0x76ea6b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B76ea6e:{NFSU2_TR(0x76ea6e);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+24))));
}
B76ea70:{NFSU2_TR(0x76ea70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76ea73:{NFSU2_TR(0x76ea73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B76ea75:{NFSU2_TR(0x76ea75);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76ea78:{NFSU2_TR(0x76ea78);
__builtin_memmove((R+12),(R+4),4);
}
B76ea7a:{NFSU2_TR(0x76ea7a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B76ea7d:{NFSU2_TR(0x76ea7d);
w4(R+12,u32(u32(r4(R+12))&u32(r4(R+24))));
}
B76ea7f:{NFSU2_TR(0x76ea7f);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B76ea81:{NFSU2_TR(0x76ea81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76ea84:{NFSU2_TR(0x76ea84);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B76ea87:{NFSU2_TR(0x76ea87);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+24))));
}
B76ea89:{NFSU2_TR(0x76ea89);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B76ea8b:{NFSU2_TR(0x76ea8b);
__builtin_memmove((R+28),(R+8),4);
}
B76ea8d:{NFSU2_TR(0x76ea8d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B76ea90:{NFSU2_TR(0x76ea90);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+24))));
}
B76ea92:{NFSU2_TR(0x76ea92);
u8 U[12];
w4(U+0,u32(u32(u32(0xff800080ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B76ea99:{NFSU2_TR(0x76ea99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76ea9c:{NFSU2_TR(0x76ea9c);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+0))));
}
B76ea9e:{NFSU2_TR(0x76ea9e);
__builtin_memmove((R+24),(R+4),4);
}
B76eaa0:{NFSU2_TR(0x76eaa0);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+0))));
}
B76eaa2:{NFSU2_TR(0x76eaa2);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B76eaa4:{NFSU2_TR(0x76eaa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76eaa7:{NFSU2_TR(0x76eaa7);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+0))));
}
B76eaa9:{NFSU2_TR(0x76eaa9);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B76eaab:{NFSU2_TR(0x76eaab);
__builtin_memmove((R+28),(R+8),4);
}
B76eaad:{NFSU2_TR(0x76eaad);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+0))));
}
B76eaaf:{NFSU2_TR(0x76eaaf);
u8 U[12];
w4(U+0,u32(u32(u32(0x20002ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B76eab6:{NFSU2_TR(0x76eab6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76eab9:{NFSU2_TR(0x76eab9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B76eabc:{NFSU2_TR(0x76eabc);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B76eabf:{NFSU2_TR(0x76eabf);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+24))));
}
B76eac1:{NFSU2_TR(0x76eac1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B76eac4:{NFSU2_TR(0x76eac4);
w4(R+24,u32(0x3fc03fc0ull));
}
B76eac9:{NFSU2_TR(0x76eac9);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+24))));
}
B76eacb:{NFSU2_TR(0x76eacb);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+24))));
}
B76eacd:{NFSU2_TR(0x76eacd);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B76eacf:{NFSU2_TR(0x76eacf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76ead2:{NFSU2_TR(0x76ead2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B76ead5:{NFSU2_TR(0x76ead5);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+24))));
}
B76ead7:{NFSU2_TR(0x76ead7);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B76ead9:{NFSU2_TR(0x76ead9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76eadc:{NFSU2_TR(0x76eadc);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B76eadf:{NFSU2_TR(0x76eadf);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+24))));
}
B76eae1:{NFSU2_TR(0x76eae1);
u8 U[12];
w4(U+0,u32(u32(u32(0x800080ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B76eae8:{NFSU2_TR(0x76eae8);
w4(R+12,u32(u32(r4(R+12))&u32(r4(R+0))));
}
B76eaea:{NFSU2_TR(0x76eaea);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+4))));
}
B76eaec:{NFSU2_TR(0x76eaec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76eaef:{NFSU2_TR(0x76eaef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76eaf3:{NFSU2_TR(0x76eaf3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+4)),r4(U+0));
}
B76eaf5:{NFSU2_TR(0x76eaf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76eaf8:{NFSU2_TR(0x76eaf8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B76eafb:{NFSU2_TR(0x76eafb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76eafe:{NFSU2_TR(0x76eafe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76eb01:{NFSU2_TR(0x76eb01);
w4(R+24,u32(0xffc03fc0ull));
}
B76eb06:{NFSU2_TR(0x76eb06);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76ea61u);}goto L76ea61;}}
}
B76eb0c:L76eb0c:{c.instructions+=1;NFSU2_TR(0x76eb0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76eb0f:L76eb0f:{c.instructions+=8;NFSU2_TR(0x76eb0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76eb12:{NFSU2_TR(0x76eb12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B76eb15:{NFSU2_TR(0x76eb15);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B76eb18:{NFSU2_TR(0x76eb18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B76eb1b:{NFSU2_TR(0x76eb1b);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B76eb1d:{NFSU2_TR(0x76eb1d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B76eb20:{NFSU2_TR(0x76eb20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76eb23:{NFSU2_TR(0x76eb23);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76ea3fu);}goto L76ea3f;}}
}
B76eb29:L76eb29:{c.instructions+=2;NFSU2_TR(0x76eb29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76eb2a:{NFSU2_TR(0x76eb2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76eb2b:L76eb2b:{c.instructions+=4;NFSU2_TR(0x76eb2b);
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
B76eb2d:{NFSU2_TR(0x76eb2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76eb2e:{NFSU2_TR(0x76eb2e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B76eb2f:{NFSU2_TR(0x76eb2f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76eb32:L76eb32:{c.instructions+=13;NFSU2_TR(0x76eb32);
__builtin_memmove((R+28),(R+28),4);
}
B76eb34:{NFSU2_TR(0x76eb34);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76eb35:{NFSU2_TR(0x76eb35);
__builtin_memmove((R+20),(R+16),4);
}
B76eb37:{NFSU2_TR(0x76eb37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B76eb3a:{NFSU2_TR(0x76eb3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76eb3d:{NFSU2_TR(0x76eb3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76eb40:{NFSU2_TR(0x76eb40);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B76eb43:{NFSU2_TR(0x76eb43);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76eb44:{NFSU2_TR(0x76eb44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76eb47:{NFSU2_TR(0x76eb47);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B76eb49:{NFSU2_TR(0x76eb49);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B76eb4b:{NFSU2_TR(0x76eb4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76eb4e:{NFSU2_TR(0x76eb4e);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L76ec17;}}
}
B76eb54:L76eb54:{c.instructions+=7;NFSU2_TR(0x76eb54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76eb57:{NFSU2_TR(0x76eb57);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B76eb5a:{NFSU2_TR(0x76eb5a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76eb5b:{NFSU2_TR(0x76eb5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76eb5e:{NFSU2_TR(0x76eb5e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76eb5f:{NFSU2_TR(0x76eb5f);
w4(R+8,u32(0xff00ffull));
}
B76eb64:{NFSU2_TR(0x76eb64);
w4(R+4,u32(0xff00ull));
}
B76eb69:L76eb69:{c.instructions+=4;NFSU2_TR(0x76eb69);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B76eb6c:{NFSU2_TR(0x76eb6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76eb6f:{NFSU2_TR(0x76eb6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76eb72:{NFSU2_TR(0x76eb72);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L76ebfb;}}
}
B76eb78:L76eb78:{c.instructions+=7;NFSU2_TR(0x76eb78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76eb7b:{NFSU2_TR(0x76eb7b);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B76eb7d:{NFSU2_TR(0x76eb7d);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B76eb7e:{NFSU2_TR(0x76eb7e);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B76eb81:{NFSU2_TR(0x76eb81);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B76eb82:{NFSU2_TR(0x76eb82);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76eb85:{NFSU2_TR(0x76eb85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76eb88:L76eb88:{c.instructions+=38;NFSU2_TR(0x76eb88);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B76eb8b:{NFSU2_TR(0x76eb8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76eb8e:{NFSU2_TR(0x76eb8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B76eb90:{NFSU2_TR(0x76eb90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76eb93:{NFSU2_TR(0x76eb93);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B76eb97:{NFSU2_TR(0x76eb97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76eb9a:{NFSU2_TR(0x76eb9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76eb9d:{NFSU2_TR(0x76eb9d);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+8))));
}
B76eb9f:{NFSU2_TR(0x76eb9f);
__builtin_memmove((R+12),(R+0),4);
}
B76eba1:{NFSU2_TR(0x76eba1);
w4(R+12,u32(u32(r4(R+12))&u32(r4(R+8))));
}
B76eba3:{NFSU2_TR(0x76eba3);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B76eba5:{NFSU2_TR(0x76eba5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76eba8:{NFSU2_TR(0x76eba8);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+8))));
}
B76ebaa:{NFSU2_TR(0x76ebaa);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B76ebac:{NFSU2_TR(0x76ebac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76ebaf:{NFSU2_TR(0x76ebaf);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+8))));
}
B76ebb1:{NFSU2_TR(0x76ebb1);
u8 U[12];
w4(U+0,u32(u32(u32(0x20002ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B76ebb8:{NFSU2_TR(0x76ebb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76ebbb:{NFSU2_TR(0x76ebbb);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B76ebbd:{NFSU2_TR(0x76ebbd);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+4))));
}
B76ebbf:{NFSU2_TR(0x76ebbf);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B76ebc1:{NFSU2_TR(0x76ebc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76ebc4:{NFSU2_TR(0x76ebc4);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+4))));
}
B76ebc6:{NFSU2_TR(0x76ebc6);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B76ebc8:{NFSU2_TR(0x76ebc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76ebcb:{NFSU2_TR(0x76ebcb);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+4))));
}
B76ebcd:{NFSU2_TR(0x76ebcd);
u8 U[12];
w4(U+0,u32(u32(u32(0x200ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B76ebd4:{NFSU2_TR(0x76ebd4);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3fc00ull))));
}
B76ebd9:{NFSU2_TR(0x76ebd9);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x3fc03fcull))));
}
B76ebdf:{NFSU2_TR(0x76ebdf);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+0))));
}
B76ebe1:{NFSU2_TR(0x76ebe1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76ebe4:{NFSU2_TR(0x76ebe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76ebe8:{NFSU2_TR(0x76ebe8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B76ebeb:{NFSU2_TR(0x76ebeb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B76ebee:{NFSU2_TR(0x76ebee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76ebf1:{NFSU2_TR(0x76ebf1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B76ebf3:{NFSU2_TR(0x76ebf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76ebf6:{NFSU2_TR(0x76ebf6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76eb88u);}goto L76eb88;}}
}
B76ebf8:L76ebf8:{c.instructions+=1;NFSU2_TR(0x76ebf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76ebfb:L76ebfb:{c.instructions+=8;NFSU2_TR(0x76ebfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76ebfe:{NFSU2_TR(0x76ebfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B76ec01:{NFSU2_TR(0x76ec01);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B76ec04:{NFSU2_TR(0x76ec04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B76ec07:{NFSU2_TR(0x76ec07);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B76ec09:{NFSU2_TR(0x76ec09);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B76ec0c:{NFSU2_TR(0x76ec0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76ec0f:{NFSU2_TR(0x76ec0f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76eb69u);}goto L76eb69;}}
}
B76ec15:L76ec15:{c.instructions+=2;NFSU2_TR(0x76ec15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76ec16:{NFSU2_TR(0x76ec16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76ec17:L76ec17:{c.instructions+=4;NFSU2_TR(0x76ec17);
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
B76ec19:{NFSU2_TR(0x76ec19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76ec1a:{NFSU2_TR(0x76ec1a);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B76ec1b:{NFSU2_TR(0x76ec1b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76ec1e:L76ec1e:{c.instructions+=6;NFSU2_TR(0x76ec1e);
__builtin_memmove((R+28),(R+28),4);
}
B76ec20:{NFSU2_TR(0x76ec20);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ec21:{NFSU2_TR(0x76ec21);
__builtin_memmove((R+20),(R+16),4);
}
B76ec23:{NFSU2_TR(0x76ec23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B76ec26:{NFSU2_TR(0x76ec26);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x3ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B76ec2a:{NFSU2_TR(0x76ec2a);
if(r1(R+518)){{goto L76ec48;}}
}
B76ec2c:L76ec2c:{c.instructions+=7;NFSU2_TR(0x76ec2c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76ec2f:{NFSU2_TR(0x76ec2f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76ec32:{NFSU2_TR(0x76ec32);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76ec35:{NFSU2_TR(0x76ec35);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76ec38:{NFSU2_TR(0x76ec38);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76ec3b:{NFSU2_TR(0x76ec3b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76ec3e:{NFSU2_TR(0x76ec3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76ec43ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76ea08u);}goto L76ea08;}
}
B76ec43:L76ec43:{c.instructions+=1;NFSU2_TR(0x76ec43);
{goto L76ed34;}
}
B76ec48:L76ec48:{c.instructions+=22;NFSU2_TR(0x76ec48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76ec4b:{NFSU2_TR(0x76ec4b);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B76ec4f:{NFSU2_TR(0x76ec4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B76ec52:{NFSU2_TR(0x76ec52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76ec56:{NFSU2_TR(0x76ec56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76ec5a:{NFSU2_TR(0x76ec5a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ec5b:{NFSU2_TR(0x76ec5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76ec5e:{NFSU2_TR(0x76ec5e);
w4(R+0,u32(0x20002ull));
}
B76ec63:{NFSU2_TR(0x76ec63);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ec64:{NFSU2_TR(0x76ec64);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ec65:{NFSU2_TR(0x76ec65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76ec68:{NFSU2_TR(0x76ec68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76ec6b:{NFSU2_TR(0x76ec6b);
w2(R+4260,u16(0xffffull));
}
B76ec6d:{NFSU2_TR(0x76ec6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76ec70:{NFSU2_TR(0x76ec70);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B76ec73:{NFSU2_TR(0x76ec73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76ec76:{NFSU2_TR(0x76ec76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76ec79:{NFSU2_TR(0x76ec79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76ec7c:{NFSU2_TR(0x76ec7c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B76ec80:{NFSU2_TR(0x76ec80);
w8(R+4448,u64(u64(r8(R+4448))^u64(r8(R+4448))));
}
B76ec83:{NFSU2_TR(0x76ec83);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B76ec86:{NFSU2_TR(0x76ec86);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L76ed2d;}}
}
B76ec8c:L76ec8c:{c.instructions+=10;NFSU2_TR(0x76ec8c);
__builtin_memmove((R+28),(R+0),4);
}
B76ec8e:{NFSU2_TR(0x76ec8e);
__builtin_memmove((R+24),(R+0),4);
}
B76ec90:{NFSU2_TR(0x76ec90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B76ec93:{NFSU2_TR(0x76ec93);
__builtin_memmove((R+12),(R+28),4);
}
B76ec95:{NFSU2_TR(0x76ec95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B76ec98:{NFSU2_TR(0x76ec98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76ec9b:{NFSU2_TR(0x76ec9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76ec9e:{NFSU2_TR(0x76ec9e);
__builtin_memmove((R+0),(R+8),4);
}
B76eca0:{NFSU2_TR(0x76eca0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B76eca2:{NFSU2_TR(0x76eca2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L76ed15;}}
}
B76eca4:L76eca4:{c.instructions+=34;NFSU2_TR(0x76eca4);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B76eca7:{NFSU2_TR(0x76eca7);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B76ecaa:{NFSU2_TR(0x76ecaa);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B76ecae:{NFSU2_TR(0x76ecae);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B76ecb2:{NFSU2_TR(0x76ecb2);
__builtin_memmove((R+4368),(R+4352),8);
}
B76ecb5:{NFSU2_TR(0x76ecb5);
__builtin_memmove((R+4400),(R+4384),8);
}
B76ecb8:{NFSU2_TR(0x76ecb8);
__builtin_memmove((R+4432),(R+4416),8);
}
B76ecbb:{NFSU2_TR(0x76ecbb);
__builtin_memmove((R+4464),(R+4448),8);
}
B76ecbe:{NFSU2_TR(0x76ecbe);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
__builtin_memmove((R+4359),(U+11),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(U+10),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(U+9),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(U+8),1);
}
B76ecc2:{NFSU2_TR(0x76ecc2);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
__builtin_memmove((R+4368),(R+4372),1);
__builtin_memmove((R+4369),(U+16),1);
__builtin_memmove((R+4370),(R+4373),1);
__builtin_memmove((R+4371),(U+17),1);
__builtin_memmove((R+4372),(R+4374),1);
__builtin_memmove((R+4373),(U+18),1);
__builtin_memmove((R+4374),(R+4375),1);
__builtin_memmove((R+4375),(U+19),1);
}
B76ecc6:{NFSU2_TR(0x76ecc6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
__builtin_memmove((R+4391),(U+11),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(U+10),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(U+9),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(U+8),1);
}
B76ecca:{NFSU2_TR(0x76ecca);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(U+16),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(U+17),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(U+18),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(U+19),1);
}
B76ecce:{NFSU2_TR(0x76ecce);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
__builtin_memmove((R+4423),(U+11),1);
__builtin_memmove((R+4422),(R+4419),1);
__builtin_memmove((R+4421),(U+10),1);
__builtin_memmove((R+4420),(R+4418),1);
__builtin_memmove((R+4419),(U+9),1);
__builtin_memmove((R+4418),(R+4417),1);
__builtin_memmove((R+4417),(U+8),1);
}
B76ecd2:{NFSU2_TR(0x76ecd2);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
__builtin_memmove((R+4432),(R+4436),1);
__builtin_memmove((R+4433),(U+16),1);
__builtin_memmove((R+4434),(R+4437),1);
__builtin_memmove((R+4435),(U+17),1);
__builtin_memmove((R+4436),(R+4438),1);
__builtin_memmove((R+4437),(U+18),1);
__builtin_memmove((R+4438),(R+4439),1);
__builtin_memmove((R+4439),(U+19),1);
}
B76ecd6:{NFSU2_TR(0x76ecd6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
__builtin_memmove((R+4455),(U+11),1);
__builtin_memmove((R+4454),(R+4451),1);
__builtin_memmove((R+4453),(U+10),1);
__builtin_memmove((R+4452),(R+4450),1);
__builtin_memmove((R+4451),(U+9),1);
__builtin_memmove((R+4450),(R+4449),1);
__builtin_memmove((R+4449),(U+8),1);
}
B76ecda:{NFSU2_TR(0x76ecda);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
__builtin_memmove((R+4464),(R+4468),1);
__builtin_memmove((R+4465),(U+16),1);
__builtin_memmove((R+4466),(R+4469),1);
__builtin_memmove((R+4467),(U+17),1);
__builtin_memmove((R+4468),(R+4470),1);
__builtin_memmove((R+4469),(U+18),1);
__builtin_memmove((R+4470),(R+4471),1);
__builtin_memmove((R+4471),(U+19),1);
}
B76ecde:{NFSU2_TR(0x76ecde);
__builtin_memmove((R+4),(R+0),4);
}
B76ece0:{NFSU2_TR(0x76ece0);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4374))));
}
B76ece3:{NFSU2_TR(0x76ece3);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B76ece6:{NFSU2_TR(0x76ece6);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B76ece9:{NFSU2_TR(0x76ece9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B76ecec:{NFSU2_TR(0x76ecec);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B76ecef:{NFSU2_TR(0x76ecef);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B76ecf2:{NFSU2_TR(0x76ecf2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B76ecf5:{NFSU2_TR(0x76ecf5);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4400))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4402))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4404))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4406))));
}
B76ecf8:{NFSU2_TR(0x76ecf8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4464))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4466))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4468))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4470))));
}
B76ecfb:{NFSU2_TR(0x76ecfb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B76ecfd:{NFSU2_TR(0x76ecfd);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(U+12))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(U+14))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(U+16))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(U+18))));
}
B76ed01:{NFSU2_TR(0x76ed01);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B76ed05:{NFSU2_TR(0x76ed05);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0x2ull)));}
}
B76ed09:{NFSU2_TR(0x76ed09);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x2ull)));}
}
B76ed0d:{NFSU2_TR(0x76ed0d);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4416),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4352),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4353),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4354),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4355),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4356),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4357),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4358),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4359),(U+21),1);
}
B76ed10:{NFSU2_TR(0x76ed10);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+4)),r8(U+0));
}
B76ed13:{NFSU2_TR(0x76ed13);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76eca4u);}goto L76eca4;}}
}
B76ed15:L76ed15:{c.instructions+=7;NFSU2_TR(0x76ed15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76ed18:{NFSU2_TR(0x76ed18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76ed1b:{NFSU2_TR(0x76ed1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B76ed1e:{NFSU2_TR(0x76ed1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B76ed21:{NFSU2_TR(0x76ed21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B76ed24:{NFSU2_TR(0x76ed24);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B76ed27:{NFSU2_TR(0x76ed27);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76ec8cu);}goto L76ec8c;}}
}
B76ed2d:L76ed2d:{c.instructions+=5;NFSU2_TR(0x76ed2d);
w2(R+4260,u16(0xffffull));
}
B76ed2f:{NFSU2_TR(0x76ed2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76ed30:{NFSU2_TR(0x76ed30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76ed31:{NFSU2_TR(0x76ed31);
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
B76ed33:{NFSU2_TR(0x76ed33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76ed34:L76ed34:{c.instructions+=2;NFSU2_TR(0x76ed34);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B76ed35:{NFSU2_TR(0x76ed35);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76ed38:L76ed38:{c.instructions+=4;NFSU2_TR(0x76ed38);
__builtin_memmove((R+28),(R+28),4);
}
B76ed3a:{NFSU2_TR(0x76ed3a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ed3b:{NFSU2_TR(0x76ed3b);
__builtin_memmove((R+20),(R+16),4);
}
B76ed3d:{NFSU2_TR(0x76ed3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76ed42ull));
TAIL_STATIC(0x6415c0u,641);
}
B76ed42:L76ed42:{c.instructions+=2;NFSU2_TR(0x76ed42);
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
B76ed44:{NFSU2_TR(0x76ed44);
if(r1(R+518)){{goto L76ed57;}}
}
B76ed46:L76ed46:{c.instructions+=4;NFSU2_TR(0x76ed46);
w4(R+0,u32(0x76ec1eull));
}
B76ed4b:{NFSU2_TR(0x76ed4b);
__builtin_memmove(gp(0x81b7fc),(R+0),4);
}
B76ed50:{NFSU2_TR(0x76ed50);
__builtin_memmove(gp(0x81b800),(R+0),4);
}
B76ed55:{NFSU2_TR(0x76ed55);
{goto L76ed6b;}
}
B76ed57:L76ed57:{c.instructions+=2;NFSU2_TR(0x76ed57);
s4(0x81b7fc,u32(0x76ea08ull));
}
B76ed61:{NFSU2_TR(0x76ed61);
s4(0x81b800,u32(0x76eb32ull));
}
B76ed6b:L76ed6b:{c.instructions+=2;NFSU2_TR(0x76ed6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B76ed6c:{NFSU2_TR(0x76ed6c);
{u32 t_=u32(m4(0x81b7fc));TAIL_DYNAMIC(t_);}
}
B76ed72:L76ed72:{c.instructions+=4;NFSU2_TR(0x76ed72);
__builtin_memmove((R+28),(R+28),4);
}
B76ed74:{NFSU2_TR(0x76ed74);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ed75:{NFSU2_TR(0x76ed75);
__builtin_memmove((R+20),(R+16),4);
}
B76ed77:{NFSU2_TR(0x76ed77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76ed7cull));
TAIL_STATIC(0x6415c0u,641);
}
B76ed7c:L76ed7c:{c.instructions+=2;NFSU2_TR(0x76ed7c);
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
B76ed7e:{NFSU2_TR(0x76ed7e);
if(r1(R+518)){{goto L76ed8c;}}
}
B76ed80:L76ed80:{c.instructions+=3;NFSU2_TR(0x76ed80);
w4(R+0,u32(0x76ec1eull));
}
B76ed85:{NFSU2_TR(0x76ed85);
__builtin_memmove(gp(0x81b7fc),(R+0),4);
}
B76ed8a:{NFSU2_TR(0x76ed8a);
{goto L76ed9b;}
}
B76ed8c:L76ed8c:{c.instructions+=2;NFSU2_TR(0x76ed8c);
s4(0x81b7fc,u32(0x76ea08ull));
}
B76ed96:{NFSU2_TR(0x76ed96);
w4(R+0,u32(0x76eb32ull));
}
B76ed9b:L76ed9b:{c.instructions+=3;NFSU2_TR(0x76ed9b);
__builtin_memmove(gp(0x81b800),(R+0),4);
}
B76eda0:{NFSU2_TR(0x76eda0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B76eda1:{NFSU2_TR(0x76eda1);
{u32 t_=u32(r4(R+0));TAIL_DYNAMIC(t_);}
}
B76eda3:L76eda3:{c.instructions+=6;NFSU2_TR(0x76eda3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76eda6:{NFSU2_TR(0x76eda6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76eda7:{NFSU2_TR(0x76eda7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76edaa:{NFSU2_TR(0x76edaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76edad:{NFSU2_TR(0x76edad);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76edaf:{NFSU2_TR(0x76edaf);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L76edb3;}}
}
B76edb1:L76edb1:{c.instructions+=1;NFSU2_TR(0x76edb1);
__builtin_memmove((R+8),(R+4),4);
}
B76edb3:L76edb3:{c.instructions+=2;NFSU2_TR(0x76edb3);
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
B76edb5:{NFSU2_TR(0x76edb5);
if(r1(R+518)){{goto L76edf5;}}
}
B76edb7:L76edb7:{c.instructions+=7;NFSU2_TR(0x76edb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76edba:{NFSU2_TR(0x76edba);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76edbb:{NFSU2_TR(0x76edbb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76edbc:{NFSU2_TR(0x76edbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76edbf:{NFSU2_TR(0x76edbf);
__builtin_memmove((R+4),(R+8),4);
}
B76edc1:{NFSU2_TR(0x76edc1);
__builtin_memmove((R+12),(R+4),4);
}
B76edc3:{NFSU2_TR(0x76edc3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B76edc6:L76edc6:{c.instructions+=1;NFSU2_TR(0x76edc6);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L76edc8;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76edc6u);}goto L76edc6;}
}
B76edc8:L76edc8:{c.instructions+=2;NFSU2_TR(0x76edc8);
__builtin_memmove((R+4),(R+12),4);
}
B76edca:{NFSU2_TR(0x76edca);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B76edcd:L76edcd:{c.instructions+=1;NFSU2_TR(0x76edcd);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L76edcf;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76edcdu);}goto L76edcd;}
}
B76edcf:L76edcf:{c.instructions+=12;NFSU2_TR(0x76edcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76edd2:{NFSU2_TR(0x76edd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B76edd5:{NFSU2_TR(0x76edd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B76edd8:{NFSU2_TR(0x76edd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B76eddb:{NFSU2_TR(0x76eddb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B76edde:{NFSU2_TR(0x76edde);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76ede1:{NFSU2_TR(0x76ede1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B76ede4:{NFSU2_TR(0x76ede4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76ede7:{NFSU2_TR(0x76ede7);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
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
B76edeb:{NFSU2_TR(0x76edeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76edec:{NFSU2_TR(0x76edec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76eded:{NFSU2_TR(0x76eded);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76edf5;}}
}
B76edef:L76edef:{c.instructions+=2;NFSU2_TR(0x76edef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76edf2:{NFSU2_TR(0x76edf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76edf5:L76edf5:{c.instructions+=2;NFSU2_TR(0x76edf5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76edf6:{NFSU2_TR(0x76edf6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76edf7:L76edf7:{c.instructions+=18;NFSU2_TR(0x76edf7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76edf8:{NFSU2_TR(0x76edf8);
__builtin_memmove((R+20),(R+16),4);
}
B76edfa:{NFSU2_TR(0x76edfa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B76edfd:{NFSU2_TR(0x76edfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76ee00:{NFSU2_TR(0x76ee00);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76ee03:{NFSU2_TR(0x76ee03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76ee06:{NFSU2_TR(0x76ee06);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76ee0c:{NFSU2_TR(0x76ee0c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ee0d:{NFSU2_TR(0x76ee0d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ee0e:{NFSU2_TR(0x76ee0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76ee11:{NFSU2_TR(0x76ee11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76ee14:{NFSU2_TR(0x76ee14);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76ee17:{NFSU2_TR(0x76ee17);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffefaull))));
__builtin_memmove((R+12),(U+0),4);
}
B76ee1d:{NFSU2_TR(0x76ee1d);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B76ee1f:{NFSU2_TR(0x76ee1f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76ee21:{NFSU2_TR(0x76ee21);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ee22:{NFSU2_TR(0x76ee22);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76ee25:{NFSU2_TR(0x76ee25);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L76ee34;}}
}
B76ee27:L76ee27:{c.instructions+=4;NFSU2_TR(0x76ee27);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B76ee29:{NFSU2_TR(0x76ee29);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x106ull))));
}
B76ee2f:{NFSU2_TR(0x76ee2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76ee32:{NFSU2_TR(0x76ee32);
{goto L76ee38;}
}
B76ee34:L76ee34:{c.instructions+=1;NFSU2_TR(0x76ee34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76ee38:L76ee38:{c.instructions+=8;NFSU2_TR(0x76ee38);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B76ee3e:{NFSU2_TR(0x76ee3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x102ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76ee44:{NFSU2_TR(0x76ee44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76ee47:{NFSU2_TR(0x76ee47);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B76ee4b:{NFSU2_TR(0x76ee4b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B76ee4e:{NFSU2_TR(0x76ee4e);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B76ee51:{NFSU2_TR(0x76ee51);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B76ee54:{NFSU2_TR(0x76ee54);
if(r1(R+512)){{goto L76ee5a;}}
}
B76ee56:L76ee56:{c.instructions+=1;NFSU2_TR(0x76ee56);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+8,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,shr<u32>(r4(U+4),u64(r4(U+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B76ee5a:L76ee5a:{c.instructions+=4;NFSU2_TR(0x76ee5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76ee5d:{NFSU2_TR(0x76ee5d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76ee60:{NFSU2_TR(0x76ee60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76ee63:{NFSU2_TR(0x76ee63);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L76ee68;}}
}
B76ee65:L76ee65:{c.instructions+=1;NFSU2_TR(0x76ee65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76ee68:L76ee68:{c.instructions+=1;NFSU2_TR(0x76ee68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76ee6b:L76ee6b:{c.instructions+=5;NFSU2_TR(0x76ee6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76ee6e:{NFSU2_TR(0x76ee6e);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B76ee70:{NFSU2_TR(0x76ee70);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B76ee73:{NFSU2_TR(0x76ee73);
u8 U[11];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((U+9),(U+8),1);
w1(U+10,u8(u32(r1(U+9))-u32(r1(R+0))));
w1(R+518,u8((r1(U+10))==(u8(0x0ull))));
}
B76ee76:{NFSU2_TR(0x76ee76);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76ef13;}}
}
B76ee7c:L76ee7c:{c.instructions+=3;NFSU2_TR(0x76ee7c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B76ee7f:{NFSU2_TR(0x76ee7f);
u8 U[15];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+13),(U+12),1);
w1(U+14,u8(u32(r1(U+13))-u32(r1(R+0))));
w1(R+518,u8((r1(U+14))==(u8(0x0ull))));
}
B76ee83:{NFSU2_TR(0x76ee83);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76ef13;}}
}
B76ee89:L76ee89:{c.instructions+=3;NFSU2_TR(0x76ee89);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B76ee8b:{NFSU2_TR(0x76ee8b);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(R+0))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B76ee8d:{NFSU2_TR(0x76ee8d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76ef13;}}
}
B76ee93:L76ee93:{c.instructions+=4;NFSU2_TR(0x76ee93);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B76ee94:{NFSU2_TR(0x76ee94);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B76ee96:{NFSU2_TR(0x76ee96);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(R+0))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B76ee99:{NFSU2_TR(0x76ee99);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76ef13;}}
}
B76ee9b:L76ee9b:{c.instructions+=4;NFSU2_TR(0x76ee9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76ee9e:{NFSU2_TR(0x76ee9e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B76ee9f:{NFSU2_TR(0x76ee9f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B76eea0:{NFSU2_TR(0x76eea0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B76eea1:L76eea1:{c.instructions+=5;NFSU2_TR(0x76eea1);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B76eea2:{NFSU2_TR(0x76eea2);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B76eea4:{NFSU2_TR(0x76eea4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B76eea5:{NFSU2_TR(0x76eea5);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(R+0))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B76eea7:{NFSU2_TR(0x76eea7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76eee5;}}
}
B76eea9:L76eea9:{c.instructions+=5;NFSU2_TR(0x76eea9);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B76eeaa:{NFSU2_TR(0x76eeaa);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B76eeac:{NFSU2_TR(0x76eeac);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B76eead:{NFSU2_TR(0x76eead);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(R+0))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B76eeaf:{NFSU2_TR(0x76eeaf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76eee5;}}
}
B76eeb1:L76eeb1:{c.instructions+=5;NFSU2_TR(0x76eeb1);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B76eeb2:{NFSU2_TR(0x76eeb2);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B76eeb4:{NFSU2_TR(0x76eeb4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B76eeb5:{NFSU2_TR(0x76eeb5);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(R+0))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B76eeb7:{NFSU2_TR(0x76eeb7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76eee5;}}
}
B76eeb9:L76eeb9:{c.instructions+=5;NFSU2_TR(0x76eeb9);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B76eeba:{NFSU2_TR(0x76eeba);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B76eebc:{NFSU2_TR(0x76eebc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B76eebd:{NFSU2_TR(0x76eebd);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(R+0))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B76eebf:{NFSU2_TR(0x76eebf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76eee5;}}
}
B76eec1:L76eec1:{c.instructions+=5;NFSU2_TR(0x76eec1);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B76eec2:{NFSU2_TR(0x76eec2);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B76eec4:{NFSU2_TR(0x76eec4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B76eec5:{NFSU2_TR(0x76eec5);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(R+0))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B76eec7:{NFSU2_TR(0x76eec7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76eee5;}}
}
B76eec9:L76eec9:{c.instructions+=5;NFSU2_TR(0x76eec9);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B76eeca:{NFSU2_TR(0x76eeca);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B76eecc:{NFSU2_TR(0x76eecc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B76eecd:{NFSU2_TR(0x76eecd);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(R+0))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B76eecf:{NFSU2_TR(0x76eecf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76eee5;}}
}
B76eed1:L76eed1:{c.instructions+=5;NFSU2_TR(0x76eed1);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B76eed2:{NFSU2_TR(0x76eed2);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B76eed4:{NFSU2_TR(0x76eed4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B76eed5:{NFSU2_TR(0x76eed5);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(R+0))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B76eed7:{NFSU2_TR(0x76eed7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76eee5;}}
}
B76eed9:L76eed9:{c.instructions+=5;NFSU2_TR(0x76eed9);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B76eeda:{NFSU2_TR(0x76eeda);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B76eedc:{NFSU2_TR(0x76eedc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B76eedd:{NFSU2_TR(0x76eedd);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(R+0))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B76eedf:{NFSU2_TR(0x76eedf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76eee5;}}
}
B76eee1:L76eee1:{c.instructions+=2;NFSU2_TR(0x76eee1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B76eee3:{NFSU2_TR(0x76eee3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76eea1u);}goto L76eea1;}}
}
B76eee5:L76eee5:{c.instructions+=6;NFSU2_TR(0x76eee5);
__builtin_memmove((R+0),(R+8),4);
}
B76eee7:{NFSU2_TR(0x76eee7);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B76eee9:{NFSU2_TR(0x76eee9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x102ull))));
}
B76eeee:{NFSU2_TR(0x76eeee);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76eef0:{NFSU2_TR(0x76eef0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffefeull))));
__builtin_memmove((R+8),(U+0),4);
}
B76eef6:{NFSU2_TR(0x76eef6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L76ef13;}}
}
B76eef8:L76eef8:{c.instructions+=5;NFSU2_TR(0x76eef8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B76eefb:{NFSU2_TR(0x76eefb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76eefe:{NFSU2_TR(0x76eefe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76ef01:{NFSU2_TR(0x76ef01);
__builtin_memmove((R+28),(R+0),4);
}
B76ef03:{NFSU2_TR(0x76ef03);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L76ef31;}}
}
B76ef05:L76ef05:{c.instructions+=5;NFSU2_TR(0x76ef05);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B76ef08:{NFSU2_TR(0x76ef08);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B76ef0b:{NFSU2_TR(0x76ef0b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B76ef0e:{NFSU2_TR(0x76ef0e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B76ef10:{NFSU2_TR(0x76ef10);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B76ef13:L76ef13:{c.instructions+=7;NFSU2_TR(0x76ef13);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76ef16:{NFSU2_TR(0x76ef16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))&u32(r4(U+4))));
}
B76ef19:{NFSU2_TR(0x76ef19);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76ef1c:{NFSU2_TR(0x76ef1c);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(r2(U+8)));
}
B76ef20:{NFSU2_TR(0x76ef20);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76ef23:{NFSU2_TR(0x76ef23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76ef26:{NFSU2_TR(0x76ef26);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L76ef31;}}
}
B76ef28:L76ef28:{c.instructions+=2;NFSU2_TR(0x76ef28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76ef2b:{NFSU2_TR(0x76ef2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76ee6bu);}goto L76ee6b;}}
}
B76ef31:L76ef31:{c.instructions+=3;NFSU2_TR(0x76ef31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76ef34:{NFSU2_TR(0x76ef34);
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
B76ef36:{NFSU2_TR(0x76ef36);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L76ef3a;}}
}
B76ef38:L76ef38:{c.instructions+=1;NFSU2_TR(0x76ef38);
__builtin_memmove((R+0),(R+28),4);
}
B76ef3a:L76ef3a:{c.instructions+=5;NFSU2_TR(0x76ef3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76ef3b:{NFSU2_TR(0x76ef3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76ef3c:{NFSU2_TR(0x76ef3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76ef3d:{NFSU2_TR(0x76ef3d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B76ef3e:{NFSU2_TR(0x76ef3e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76ef41:L76ef41:{c.instructions+=14;NFSU2_TR(0x76ef41);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ef42:{NFSU2_TR(0x76ef42);
__builtin_memmove((R+20),(R+16),4);
}
B76ef44:{NFSU2_TR(0x76ef44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B76ef47:{NFSU2_TR(0x76ef47);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76ef4a:{NFSU2_TR(0x76ef4a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ef4b:{NFSU2_TR(0x76ef4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76ef4e:{NFSU2_TR(0x76ef4e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ef4f:{NFSU2_TR(0x76ef4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76ef52:{NFSU2_TR(0x76ef52);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76ef55:{NFSU2_TR(0x76ef55);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76ef58:{NFSU2_TR(0x76ef58);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B76ef5a:{NFSU2_TR(0x76ef5a);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76ef5c:{NFSU2_TR(0x76ef5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76ef5f:{NFSU2_TR(0x76ef5f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76ef6d;}}
}
B76ef61:L76ef61:{c.instructions+=2;NFSU2_TR(0x76ef61);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76ef63:{NFSU2_TR(0x76ef63);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76ef77;}}
}
B76ef65:L76ef65:{c.instructions+=2;NFSU2_TR(0x76ef65);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76ef67:{NFSU2_TR(0x76ef67);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76ef77;}}
}
B76ef69:L76ef69:{c.instructions+=2;NFSU2_TR(0x76ef69);
__builtin_memmove((R+0),(R+8),4);
}
B76ef6b:{NFSU2_TR(0x76ef6b);
{goto L76efe8;}
}
B76ef6d:L76ef6d:{c.instructions+=2;NFSU2_TR(0x76ef6d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76ef70:{NFSU2_TR(0x76ef70);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76ef77;}}
}
B76ef72:L76ef72:{c.instructions+=3;NFSU2_TR(0x76ef72);
u8 U[4];
w4(U+0,u32(0xfffffffeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ef74:{NFSU2_TR(0x76ef74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76ef75:{NFSU2_TR(0x76ef75);
{goto L76efe8;}
}
B76ef77:L76ef77:{c.instructions+=4;NFSU2_TR(0x76ef77);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76ef7a:{NFSU2_TR(0x76ef7a);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffefaull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B76ef81:{NFSU2_TR(0x76ef81);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B76ef83:{NFSU2_TR(0x76ef83);
if(r1(R+512)){{goto L76efe8;}}
}
B76ef85:L76ef85:{c.instructions+=5;NFSU2_TR(0x76ef85);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76ef88:{NFSU2_TR(0x76ef88);
__builtin_memmove((R+4),(R+8),4);
}
B76ef8a:{NFSU2_TR(0x76ef8a);
__builtin_memmove((R+0),(R+4),4);
}
B76ef8c:{NFSU2_TR(0x76ef8c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B76ef8f:{NFSU2_TR(0x76ef8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B76ef92:L76ef92:{c.instructions+=1;NFSU2_TR(0x76ef92);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L76ef94;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76ef92u);}goto L76ef92;}
}
B76ef94:L76ef94:{c.instructions+=2;NFSU2_TR(0x76ef94);
__builtin_memmove((R+4),(R+0),4);
}
B76ef96:{NFSU2_TR(0x76ef96);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B76ef99:L76ef99:{c.instructions+=1;NFSU2_TR(0x76ef99);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L76ef9b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76ef99u);}goto L76ef99;}
}
B76ef9b:L76ef9b:{c.instructions+=6;NFSU2_TR(0x76ef9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76ef9e:{NFSU2_TR(0x76ef9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76efa1:{NFSU2_TR(0x76efa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B76efa4:{NFSU2_TR(0x76efa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B76efa7:{NFSU2_TR(0x76efa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B76efaa:{NFSU2_TR(0x76efaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B76efad:L76efad:{c.instructions+=12;NFSU2_TR(0x76efad);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B76efae:{NFSU2_TR(0x76efae);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B76efaf:{NFSU2_TR(0x76efaf);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+24,u32(r2(U+0)));
}
B76efb2:{NFSU2_TR(0x76efb2);
__builtin_memmove((R+28),(R+24),4);
}
B76efb4:{NFSU2_TR(0x76efb4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+8))));
}
B76efb6:{NFSU2_TR(0x76efb6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B76efb8:{NFSU2_TR(0x76efb8);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(R+24))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B76efba:{NFSU2_TR(0x76efba);
w4(R+24,u32(~u32(r4(R+24))));
}
B76efbc:{NFSU2_TR(0x76efbc);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+28))));
}
B76efbe:{NFSU2_TR(0x76efbe);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B76efbf:{NFSU2_TR(0x76efbf);
u8 U[2];
__builtin_memmove((U+0),(R+24),2);
s2(u32(r4(R+0)),r2(U+0));
}
B76efc2:{NFSU2_TR(0x76efc2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76efadu);}goto L76efad;}}
}
B76efc4:L76efc4:{c.instructions+=3;NFSU2_TR(0x76efc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76efc7:{NFSU2_TR(0x76efc7);
__builtin_memmove((R+24),(R+8),4);
}
B76efc9:{NFSU2_TR(0x76efc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B76efcc:L76efcc:{c.instructions+=12;NFSU2_TR(0x76efcc);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B76efcd:{NFSU2_TR(0x76efcd);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B76efce:{NFSU2_TR(0x76efce);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+4,u32(r2(U+0)));
}
B76efd1:{NFSU2_TR(0x76efd1);
__builtin_memmove((R+28),(R+4),4);
}
B76efd3:{NFSU2_TR(0x76efd3);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+8))));
}
B76efd5:{NFSU2_TR(0x76efd5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B76efd7:{NFSU2_TR(0x76efd7);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B76efd9:{NFSU2_TR(0x76efd9);
w4(R+4,u32(~u32(r4(R+4))));
}
B76efdb:{NFSU2_TR(0x76efdb);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+28))));
}
B76efdd:{NFSU2_TR(0x76efdd);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B76efde:{NFSU2_TR(0x76efde);
u8 U[2];
__builtin_memmove((U+0),(R+4),2);
s2(u32(r4(R+0)),r2(U+0));
}
B76efe1:{NFSU2_TR(0x76efe1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76efccu);}goto L76efcc;}}
}
B76efe3:L76efe3:{c.instructions+=2;NFSU2_TR(0x76efe3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76efe6:{NFSU2_TR(0x76efe6);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B76efe8:L76efe8:{c.instructions+=4;NFSU2_TR(0x76efe8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B76efea:{NFSU2_TR(0x76efea);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B76efee:{NFSU2_TR(0x76efee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76eff1:{NFSU2_TR(0x76eff1);
if(r1(R+518)){TAIL_STATIC(0x76f095u,76f);}
}
B76eff7:L76eff7:{c.instructions+=3;NFSU2_TR(0x76eff7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76effa:{NFSU2_TR(0x76effa);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B76effd:{NFSU2_TR(0x76effd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
TAIL_STATIC(0x76f000u,76f);
}
XIT:NFSU2_TR_EXIT(0x76e,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
