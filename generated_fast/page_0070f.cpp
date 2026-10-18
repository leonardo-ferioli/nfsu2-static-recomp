#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_707(u8* __restrict R,Cpu& c);
u32 body_70d(u8* __restrict R,Cpu& c);
u32 body_70e(u8* __restrict R,Cpu& c);
u32 body_710(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x70f,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x70f,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_70f(u8* __restrict R,Cpu& c);
u32 page_70f(Cpu& c){return body_70f(c.regs.data(),c);}
__attribute__((noinline)) u32 body_70f(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x70f001:goto L70f001;
case 0x70f003:c.instructions+=14;goto B70f003;
case 0x70f005:c.instructions+=13;goto B70f005;
case 0x70f007:c.instructions+=12;goto B70f007;
case 0x70f00a:c.instructions+=11;goto B70f00a;
case 0x70f00c:c.instructions+=10;goto B70f00c;
case 0x70f00f:c.instructions+=9;goto B70f00f;
case 0x70f011:c.instructions+=8;goto B70f011;
case 0x70f014:c.instructions+=7;goto B70f014;
case 0x70f016:c.instructions+=6;goto B70f016;
case 0x70f019:c.instructions+=5;goto B70f019;
case 0x70f01b:c.instructions+=4;goto B70f01b;
case 0x70f01f:c.instructions+=3;goto B70f01f;
case 0x70f020:c.instructions+=2;goto B70f020;
case 0x70f023:c.instructions+=1;goto B70f023;
case 0x70f025:goto L70f025;
case 0x70f026:c.instructions+=4;goto B70f026;
case 0x70f027:c.instructions+=3;goto B70f027;
case 0x70f028:c.instructions+=2;goto B70f028;
case 0x70f029:c.instructions+=1;goto B70f029;
case 0x70f02a:goto L70f02a;
case 0x70f02b:c.instructions+=6;goto B70f02b;
case 0x70f02d:c.instructions+=5;goto B70f02d;
case 0x70f02e:c.instructions+=4;goto B70f02e;
case 0x70f031:c.instructions+=3;goto B70f031;
case 0x70f032:c.instructions+=2;goto B70f032;
case 0x70f035:c.instructions+=1;goto B70f035;
case 0x70f036:goto L70f036;
case 0x70f039:c.instructions+=6;goto B70f039;
case 0x70f03c:c.instructions+=5;goto B70f03c;
case 0x70f03f:c.instructions+=4;goto B70f03f;
case 0x70f042:c.instructions+=3;goto B70f042;
case 0x70f044:c.instructions+=2;goto B70f044;
case 0x70f046:c.instructions+=1;goto B70f046;
case 0x70f048:goto L70f048;
case 0x70f04a:c.instructions+=13;goto B70f04a;
case 0x70f04d:c.instructions+=12;goto B70f04d;
case 0x70f04f:c.instructions+=11;goto B70f04f;
case 0x70f052:c.instructions+=10;goto B70f052;
case 0x70f055:c.instructions+=9;goto B70f055;
case 0x70f058:c.instructions+=8;goto B70f058;
case 0x70f05a:c.instructions+=7;goto B70f05a;
case 0x70f05d:c.instructions+=6;goto B70f05d;
case 0x70f05f:c.instructions+=5;goto B70f05f;
case 0x70f061:c.instructions+=4;goto B70f061;
case 0x70f063:c.instructions+=3;goto B70f063;
case 0x70f066:c.instructions+=2;goto B70f066;
case 0x70f069:c.instructions+=1;goto B70f069;
case 0x70f06b:goto L70f06b;
case 0x70f06e:c.instructions+=10;goto B70f06e;
case 0x70f06f:c.instructions+=9;goto B70f06f;
case 0x70f072:c.instructions+=8;goto B70f072;
case 0x70f073:c.instructions+=7;goto B70f073;
case 0x70f076:c.instructions+=6;goto B70f076;
case 0x70f078:c.instructions+=5;goto B70f078;
case 0x70f07b:c.instructions+=4;goto B70f07b;
case 0x70f07e:c.instructions+=3;goto B70f07e;
case 0x70f07f:c.instructions+=2;goto B70f07f;
case 0x70f080:c.instructions+=1;goto B70f080;
case 0x70f085:goto L70f085;
case 0x70f088:goto L70f088;
case 0x70f08b:c.instructions+=2;goto B70f08b;
case 0x70f08d:c.instructions+=1;goto B70f08d;
case 0x70f08f:goto L70f08f;
case 0x70f091:c.instructions+=5;goto B70f091;
case 0x70f092:c.instructions+=4;goto B70f092;
case 0x70f095:c.instructions+=3;goto B70f095;
case 0x70f099:c.instructions+=2;goto B70f099;
case 0x70f09c:c.instructions+=1;goto B70f09c;
case 0x70f09e:goto L70f09e;
case 0x70f0a1:c.instructions+=20;goto B70f0a1;
case 0x70f0a4:c.instructions+=19;goto B70f0a4;
case 0x70f0a7:c.instructions+=18;goto B70f0a7;
case 0x70f0ab:c.instructions+=17;goto B70f0ab;
case 0x70f0ad:c.instructions+=16;goto B70f0ad;
case 0x70f0b1:c.instructions+=15;goto B70f0b1;
case 0x70f0b4:c.instructions+=14;goto B70f0b4;
case 0x70f0b6:c.instructions+=13;goto B70f0b6;
case 0x70f0b9:c.instructions+=12;goto B70f0b9;
case 0x70f0bc:c.instructions+=11;goto B70f0bc;
case 0x70f0be:c.instructions+=10;goto B70f0be;
case 0x70f0c1:c.instructions+=9;goto B70f0c1;
case 0x70f0c3:c.instructions+=8;goto B70f0c3;
case 0x70f0c5:c.instructions+=7;goto B70f0c5;
case 0x70f0c6:c.instructions+=6;goto B70f0c6;
case 0x70f0c9:c.instructions+=5;goto B70f0c9;
case 0x70f0ca:c.instructions+=4;goto B70f0ca;
case 0x70f0cd:c.instructions+=3;goto B70f0cd;
case 0x70f0ce:c.instructions+=2;goto B70f0ce;
case 0x70f0cf:c.instructions+=1;goto B70f0cf;
case 0x70f0d0:goto L70f0d0;
case 0x70f0d1:c.instructions+=4;goto B70f0d1;
case 0x70f0d3:c.instructions+=3;goto B70f0d3;
case 0x70f0d6:c.instructions+=2;goto B70f0d6;
case 0x70f0db:c.instructions+=1;goto B70f0db;
case 0x70f0dc:goto L70f0dc;
case 0x70f0df:c.instructions+=8;goto B70f0df;
case 0x70f0e1:c.instructions+=7;goto B70f0e1;
case 0x70f0e4:c.instructions+=6;goto B70f0e4;
case 0x70f0e7:c.instructions+=5;goto B70f0e7;
case 0x70f0ea:c.instructions+=4;goto B70f0ea;
case 0x70f0ee:c.instructions+=3;goto B70f0ee;
case 0x70f0ef:c.instructions+=2;goto B70f0ef;
case 0x70f0f2:c.instructions+=1;goto B70f0f2;
case 0x70f0f7:goto L70f0f7;
case 0x70f0f9:c.instructions+=3;goto B70f0f9;
case 0x70f0fa:c.instructions+=2;goto B70f0fa;
case 0x70f0fb:c.instructions+=1;goto B70f0fb;
case 0x70f0fd:goto L70f0fd;
case 0x70f100:c.instructions+=1;goto B70f100;
case 0x70f102:goto L70f102;
case 0x70f104:goto L70f104;
case 0x70f106:c.instructions+=1;goto B70f106;
case 0x70f108:goto L70f108;
case 0x70f10a:c.instructions+=4;goto B70f10a;
case 0x70f10d:c.instructions+=3;goto B70f10d;
case 0x70f10e:c.instructions+=2;goto B70f10e;
case 0x70f10f:c.instructions+=1;goto B70f10f;
case 0x70f110:goto L70f110;
case 0x70f111:c.instructions+=6;goto B70f111;
case 0x70f113:c.instructions+=5;goto B70f113;
case 0x70f116:c.instructions+=4;goto B70f116;
case 0x70f118:c.instructions+=3;goto B70f118;
case 0x70f119:c.instructions+=2;goto B70f119;
case 0x70f11c:c.instructions+=1;goto B70f11c;
case 0x70f11e:goto L70f11e;
case 0x70f11f:c.instructions+=3;goto B70f11f;
case 0x70f122:c.instructions+=2;goto B70f122;
case 0x70f123:c.instructions+=1;goto B70f123;
case 0x70f124:goto L70f124;
case 0x70f127:c.instructions+=12;goto B70f127;
case 0x70f12a:c.instructions+=11;goto B70f12a;
case 0x70f12d:c.instructions+=10;goto B70f12d;
case 0x70f12f:c.instructions+=9;goto B70f12f;
case 0x70f132:c.instructions+=8;goto B70f132;
case 0x70f135:c.instructions+=7;goto B70f135;
case 0x70f139:c.instructions+=6;goto B70f139;
case 0x70f13c:c.instructions+=5;goto B70f13c;
case 0x70f140:c.instructions+=4;goto B70f140;
case 0x70f141:c.instructions+=3;goto B70f141;
case 0x70f142:c.instructions+=2;goto B70f142;
case 0x70f143:c.instructions+=1;goto B70f143;
case 0x70f145:goto L70f145;
case 0x70f14a:goto L70f14a;
case 0x70f14c:goto L70f14c;
case 0x70f151:goto L70f151;
case 0x70f154:c.instructions+=2;goto B70f154;
case 0x70f156:c.instructions+=1;goto B70f156;
case 0x70f158:goto L70f158;
case 0x70f15b:c.instructions+=1;goto B70f15b;
case 0x70f15d:goto L70f15d;
case 0x70f15f:goto L70f15f;
case 0x70f161:c.instructions+=3;goto B70f161;
case 0x70f164:c.instructions+=2;goto B70f164;
case 0x70f167:c.instructions+=1;goto B70f167;
case 0x70f169:goto L70f169;
case 0x70f16a:c.instructions+=2;goto B70f16a;
case 0x70f16b:c.instructions+=1;goto B70f16b;
case 0x70f16c:goto L70f16c;
case 0x70f16d:c.instructions+=1;goto B70f16d;
case 0x70f16e:goto L70f16e;
case 0x70f16f:c.instructions+=5;goto B70f16f;
case 0x70f171:c.instructions+=4;goto B70f171;
case 0x70f174:c.instructions+=3;goto B70f174;
case 0x70f175:c.instructions+=2;goto B70f175;
case 0x70f176:c.instructions+=1;goto B70f176;
case 0x70f17c:goto L70f17c;
case 0x70f17f:c.instructions+=3;goto B70f17f;
case 0x70f185:c.instructions+=2;goto B70f185;
case 0x70f18b:c.instructions+=1;goto B70f18b;
case 0x70f192:goto L70f192;
case 0x70f199:c.instructions+=2;goto B70f199;
case 0x70f19b:c.instructions+=1;goto B70f19b;
case 0x70f1a2:goto L70f1a2;
case 0x70f1a5:c.instructions+=1;goto B70f1a5;
case 0x70f1a7:goto L70f1a7;
case 0x70f1ab:c.instructions+=6;goto B70f1ab;
case 0x70f1af:c.instructions+=5;goto B70f1af;
case 0x70f1b4:c.instructions+=4;goto B70f1b4;
case 0x70f1b7:c.instructions+=3;goto B70f1b7;
case 0x70f1b9:c.instructions+=2;goto B70f1b9;
case 0x70f1be:c.instructions+=1;goto B70f1be;
case 0x70f1c0:goto L70f1c0;
case 0x70f1c5:goto L70f1c5;
case 0x70f1c8:c.instructions+=1;goto B70f1c8;
case 0x70f1ca:goto L70f1ca;
case 0x70f1cc:c.instructions+=1;goto B70f1cc;
case 0x70f1cd:goto L70f1cd;
case 0x70f1d0:c.instructions+=4;goto B70f1d0;
case 0x70f1d1:c.instructions+=3;goto B70f1d1;
case 0x70f1d4:c.instructions+=2;goto B70f1d4;
case 0x70f1d7:c.instructions+=1;goto B70f1d7;
case 0x70f1d9:goto L70f1d9;
case 0x70f1dd:c.instructions+=3;goto B70f1dd;
case 0x70f1e0:c.instructions+=2;goto B70f1e0;
case 0x70f1e3:c.instructions+=1;goto B70f1e3;
case 0x70f1e5:goto L70f1e5;
case 0x70f1e8:c.instructions+=3;goto B70f1e8;
case 0x70f1eb:c.instructions+=2;goto B70f1eb;
case 0x70f1ed:c.instructions+=1;goto B70f1ed;
case 0x70f1ef:goto L70f1ef;
case 0x70f1f0:c.instructions+=3;goto B70f1f0;
case 0x70f1f1:c.instructions+=2;goto B70f1f1;
case 0x70f1f2:c.instructions+=1;goto B70f1f2;
case 0x70f1f3:goto L70f1f3;
case 0x70f1f4:c.instructions+=10;goto B70f1f4;
case 0x70f1f6:c.instructions+=9;goto B70f1f6;
case 0x70f1f9:c.instructions+=8;goto B70f1f9;
case 0x70f1fa:c.instructions+=7;goto B70f1fa;
case 0x70f1fb:c.instructions+=6;goto B70f1fb;
case 0x70f1fe:c.instructions+=5;goto B70f1fe;
case 0x70f204:c.instructions+=4;goto B70f204;
case 0x70f205:c.instructions+=3;goto B70f205;
case 0x70f207:c.instructions+=2;goto B70f207;
case 0x70f20a:c.instructions+=1;goto B70f20a;
case 0x70f211:goto L70f211;
case 0x70f214:c.instructions+=4;goto B70f214;
case 0x70f218:c.instructions+=3;goto B70f218;
case 0x70f219:c.instructions+=2;goto B70f219;
case 0x70f21a:c.instructions+=1;goto B70f21a;
case 0x70f21f:goto L70f21f;
case 0x70f221:c.instructions+=3;goto B70f221;
case 0x70f222:c.instructions+=2;goto B70f222;
case 0x70f223:c.instructions+=1;goto B70f223;
case 0x70f225:goto L70f225;
case 0x70f227:c.instructions+=2;goto B70f227;
case 0x70f228:c.instructions+=1;goto B70f228;
case 0x70f22d:goto L70f22d;
case 0x70f22e:c.instructions+=5;goto B70f22e;
case 0x70f22f:c.instructions+=4;goto B70f22f;
case 0x70f231:c.instructions+=3;goto B70f231;
case 0x70f238:c.instructions+=2;goto B70f238;
case 0x70f23a:c.instructions+=1;goto B70f23a;
case 0x70f23c:goto L70f23c;
case 0x70f23f:goto L70f23f;
case 0x70f242:c.instructions+=4;goto B70f242;
case 0x70f245:c.instructions+=3;goto B70f245;
case 0x70f246:c.instructions+=2;goto B70f246;
case 0x70f247:c.instructions+=1;goto B70f247;
case 0x70f24c:goto L70f24c;
case 0x70f24e:c.instructions+=3;goto B70f24e;
case 0x70f24f:c.instructions+=2;goto B70f24f;
case 0x70f250:c.instructions+=1;goto B70f250;
case 0x70f252:goto L70f252;
case 0x70f254:c.instructions+=2;goto B70f254;
case 0x70f255:c.instructions+=1;goto B70f255;
case 0x70f25a:goto L70f25a;
case 0x70f25b:c.instructions+=5;goto B70f25b;
case 0x70f25c:c.instructions+=4;goto B70f25c;
case 0x70f25e:c.instructions+=3;goto B70f25e;
case 0x70f265:c.instructions+=2;goto B70f265;
case 0x70f267:c.instructions+=1;goto B70f267;
case 0x70f269:goto L70f269;
case 0x70f26c:goto L70f26c;
case 0x70f270:c.instructions+=3;goto B70f270;
case 0x70f271:c.instructions+=2;goto B70f271;
case 0x70f278:c.instructions+=1;goto B70f278;
case 0x70f27a:goto L70f27a;
case 0x70f280:c.instructions+=1;goto B70f280;
case 0x70f287:goto L70f287;
case 0x70f28a:c.instructions+=2;goto B70f28a;
case 0x70f28c:c.instructions+=1;goto B70f28c;
case 0x70f28f:goto L70f28f;
case 0x70f292:c.instructions+=4;goto B70f292;
case 0x70f295:c.instructions+=3;goto B70f295;
case 0x70f296:c.instructions+=2;goto B70f296;
case 0x70f299:c.instructions+=1;goto B70f299;
case 0x70f29e:goto L70f29e;
case 0x70f2a0:c.instructions+=3;goto B70f2a0;
case 0x70f2a1:c.instructions+=2;goto B70f2a1;
case 0x70f2a2:c.instructions+=1;goto B70f2a2;
case 0x70f2a4:goto L70f2a4;
case 0x70f2a6:c.instructions+=2;goto B70f2a6;
case 0x70f2a9:c.instructions+=1;goto B70f2a9;
case 0x70f2ae:goto L70f2ae;
case 0x70f2af:c.instructions+=4;goto B70f2af;
case 0x70f2b1:c.instructions+=3;goto B70f2b1;
case 0x70f2b2:c.instructions+=2;goto B70f2b2;
case 0x70f2b5:c.instructions+=1;goto B70f2b5;
case 0x70f2b7:goto L70f2b7;
case 0x70f2bb:goto L70f2bb;
case 0x70f2bc:c.instructions+=3;goto B70f2bc;
case 0x70f2bf:c.instructions+=2;goto B70f2bf;
case 0x70f2c2:c.instructions+=1;goto B70f2c2;
case 0x70f2c4:goto L70f2c4;
case 0x70f2c8:c.instructions+=3;goto B70f2c8;
case 0x70f2cb:c.instructions+=2;goto B70f2cb;
case 0x70f2d2:c.instructions+=1;goto B70f2d2;
case 0x70f2d4:goto L70f2d4;
case 0x70f2da:c.instructions+=1;goto B70f2da;
case 0x70f2e1:goto L70f2e1;
case 0x70f2e4:c.instructions+=1;goto B70f2e4;
case 0x70f2e6:goto L70f2e6;
case 0x70f2e9:c.instructions+=3;goto B70f2e9;
case 0x70f2ea:c.instructions+=2;goto B70f2ea;
case 0x70f2ed:c.instructions+=1;goto B70f2ed;
case 0x70f2f2:goto L70f2f2;
case 0x70f2f4:c.instructions+=3;goto B70f2f4;
case 0x70f2f5:c.instructions+=2;goto B70f2f5;
case 0x70f2f6:c.instructions+=1;goto B70f2f6;
case 0x70f2f8:goto L70f2f8;
case 0x70f2fa:c.instructions+=2;goto B70f2fa;
case 0x70f2fd:c.instructions+=1;goto B70f2fd;
case 0x70f302:goto L70f302;
case 0x70f303:c.instructions+=4;goto B70f303;
case 0x70f305:c.instructions+=3;goto B70f305;
case 0x70f306:c.instructions+=2;goto B70f306;
case 0x70f309:c.instructions+=1;goto B70f309;
case 0x70f30b:goto L70f30b;
case 0x70f30f:goto L70f30f;
case 0x70f310:c.instructions+=3;goto B70f310;
case 0x70f311:c.instructions+=2;goto B70f311;
case 0x70f314:c.instructions+=1;goto B70f314;
case 0x70f316:goto L70f316;
case 0x70f31a:c.instructions+=3;goto B70f31a;
case 0x70f31d:c.instructions+=2;goto B70f31d;
case 0x70f324:c.instructions+=1;goto B70f324;
case 0x70f326:goto L70f326;
case 0x70f327:c.instructions+=4;goto B70f327;
case 0x70f328:c.instructions+=3;goto B70f328;
case 0x70f329:c.instructions+=2;goto B70f329;
case 0x70f32a:c.instructions+=1;goto B70f32a;
case 0x70f32b:goto L70f32b;
case 0x70f32c:c.instructions+=12;goto B70f32c;
case 0x70f32e:c.instructions+=11;goto B70f32e;
case 0x70f331:c.instructions+=10;goto B70f331;
case 0x70f334:c.instructions+=9;goto B70f334;
case 0x70f338:c.instructions+=8;goto B70f338;
case 0x70f339:c.instructions+=7;goto B70f339;
case 0x70f33f:c.instructions+=6;goto B70f33f;
case 0x70f344:c.instructions+=5;goto B70f344;
case 0x70f345:c.instructions+=4;goto B70f345;
case 0x70f34c:c.instructions+=3;goto B70f34c;
case 0x70f34f:c.instructions+=2;goto B70f34f;
case 0x70f352:c.instructions+=1;goto B70f352;
case 0x70f353:goto L70f353;
case 0x70f356:c.instructions+=4;goto B70f356;
case 0x70f359:c.instructions+=3;goto B70f359;
case 0x70f35c:c.instructions+=2;goto B70f35c;
case 0x70f35f:c.instructions+=1;goto B70f35f;
case 0x70f366:goto L70f366;
case 0x70f368:c.instructions+=1;goto B70f368;
case 0x70f36a:goto L70f36a;
case 0x70f36d:c.instructions+=1;goto B70f36d;
case 0x70f36f:goto L70f36f;
case 0x70f374:c.instructions+=1;goto B70f374;
case 0x70f376:goto L70f376;
case 0x70f379:c.instructions+=4;goto B70f379;
case 0x70f37b:c.instructions+=3;goto B70f37b;
case 0x70f37f:c.instructions+=2;goto B70f37f;
case 0x70f382:c.instructions+=1;goto B70f382;
case 0x70f386:goto L70f386;
case 0x70f38a:c.instructions+=3;goto B70f38a;
case 0x70f38b:c.instructions+=2;goto B70f38b;
case 0x70f38e:c.instructions+=1;goto B70f38e;
case 0x70f390:goto L70f390;
case 0x70f393:c.instructions+=108;goto B70f393;
case 0x70f397:c.instructions+=107;goto B70f397;
case 0x70f39b:c.instructions+=106;goto B70f39b;
case 0x70f3a1:c.instructions+=105;goto B70f3a1;
case 0x70f3a2:c.instructions+=104;goto B70f3a2;
case 0x70f3a4:c.instructions+=103;goto B70f3a4;
case 0x70f3a7:c.instructions+=102;goto B70f3a7;
case 0x70f3a9:c.instructions+=101;goto B70f3a9;
case 0x70f3ac:c.instructions+=100;goto B70f3ac;
case 0x70f3ae:c.instructions+=99;goto B70f3ae;
case 0x70f3b1:c.instructions+=98;goto B70f3b1;
case 0x70f3b4:c.instructions+=97;goto B70f3b4;
case 0x70f3b7:c.instructions+=96;goto B70f3b7;
case 0x70f3ba:c.instructions+=95;goto B70f3ba;
case 0x70f3bc:c.instructions+=94;goto B70f3bc;
case 0x70f3bf:c.instructions+=93;goto B70f3bf;
case 0x70f3c2:c.instructions+=92;goto B70f3c2;
case 0x70f3c4:c.instructions+=91;goto B70f3c4;
case 0x70f3c6:c.instructions+=90;goto B70f3c6;
case 0x70f3cc:c.instructions+=89;goto B70f3cc;
case 0x70f3cd:c.instructions+=88;goto B70f3cd;
case 0x70f3cf:c.instructions+=87;goto B70f3cf;
case 0x70f3d2:c.instructions+=86;goto B70f3d2;
case 0x70f3d4:c.instructions+=85;goto B70f3d4;
case 0x70f3d7:c.instructions+=84;goto B70f3d7;
case 0x70f3da:c.instructions+=83;goto B70f3da;
case 0x70f3dc:c.instructions+=82;goto B70f3dc;
case 0x70f3df:c.instructions+=81;goto B70f3df;
case 0x70f3e5:c.instructions+=80;goto B70f3e5;
case 0x70f3e7:c.instructions+=79;goto B70f3e7;
case 0x70f3e8:c.instructions+=78;goto B70f3e8;
case 0x70f3ea:c.instructions+=77;goto B70f3ea;
case 0x70f3ed:c.instructions+=76;goto B70f3ed;
case 0x70f3ef:c.instructions+=75;goto B70f3ef;
case 0x70f3f1:c.instructions+=74;goto B70f3f1;
case 0x70f3f4:c.instructions+=73;goto B70f3f4;
case 0x70f3f7:c.instructions+=72;goto B70f3f7;
case 0x70f3fa:c.instructions+=71;goto B70f3fa;
case 0x70f3fd:c.instructions+=70;goto B70f3fd;
case 0x70f3ff:c.instructions+=69;goto B70f3ff;
case 0x70f402:c.instructions+=68;goto B70f402;
case 0x70f405:c.instructions+=67;goto B70f405;
case 0x70f408:c.instructions+=66;goto B70f408;
case 0x70f40a:c.instructions+=65;goto B70f40a;
case 0x70f40d:c.instructions+=64;goto B70f40d;
case 0x70f413:c.instructions+=63;goto B70f413;
case 0x70f416:c.instructions+=62;goto B70f416;
case 0x70f418:c.instructions+=61;goto B70f418;
case 0x70f41b:c.instructions+=60;goto B70f41b;
case 0x70f41f:c.instructions+=59;goto B70f41f;
case 0x70f421:c.instructions+=58;goto B70f421;
case 0x70f423:c.instructions+=57;goto B70f423;
case 0x70f425:c.instructions+=56;goto B70f425;
case 0x70f427:c.instructions+=55;goto B70f427;
case 0x70f42a:c.instructions+=54;goto B70f42a;
case 0x70f42d:c.instructions+=53;goto B70f42d;
case 0x70f430:c.instructions+=52;goto B70f430;
case 0x70f433:c.instructions+=51;goto B70f433;
case 0x70f439:c.instructions+=50;goto B70f439;
case 0x70f43b:c.instructions+=49;goto B70f43b;
case 0x70f43d:c.instructions+=48;goto B70f43d;
case 0x70f43f:c.instructions+=47;goto B70f43f;
case 0x70f442:c.instructions+=46;goto B70f442;
case 0x70f445:c.instructions+=45;goto B70f445;
case 0x70f44b:c.instructions+=44;goto B70f44b;
case 0x70f44c:c.instructions+=43;goto B70f44c;
case 0x70f44e:c.instructions+=42;goto B70f44e;
case 0x70f450:c.instructions+=41;goto B70f450;
case 0x70f452:c.instructions+=40;goto B70f452;
case 0x70f455:c.instructions+=39;goto B70f455;
case 0x70f458:c.instructions+=38;goto B70f458;
case 0x70f45b:c.instructions+=37;goto B70f45b;
case 0x70f45e:c.instructions+=36;goto B70f45e;
case 0x70f464:c.instructions+=35;goto B70f464;
case 0x70f466:c.instructions+=34;goto B70f466;
case 0x70f469:c.instructions+=33;goto B70f469;
case 0x70f46b:c.instructions+=32;goto B70f46b;
case 0x70f46e:c.instructions+=31;goto B70f46e;
case 0x70f471:c.instructions+=30;goto B70f471;
case 0x70f474:c.instructions+=29;goto B70f474;
case 0x70f476:c.instructions+=28;goto B70f476;
case 0x70f479:c.instructions+=27;goto B70f479;
case 0x70f47f:c.instructions+=26;goto B70f47f;
case 0x70f482:c.instructions+=25;goto B70f482;
case 0x70f484:c.instructions+=24;goto B70f484;
case 0x70f486:c.instructions+=23;goto B70f486;
case 0x70f488:c.instructions+=22;goto B70f488;
case 0x70f48c:c.instructions+=21;goto B70f48c;
case 0x70f48f:c.instructions+=20;goto B70f48f;
case 0x70f491:c.instructions+=19;goto B70f491;
case 0x70f494:c.instructions+=18;goto B70f494;
case 0x70f497:c.instructions+=17;goto B70f497;
case 0x70f49d:c.instructions+=16;goto B70f49d;
case 0x70f49e:c.instructions+=15;goto B70f49e;
case 0x70f4a0:c.instructions+=14;goto B70f4a0;
case 0x70f4a2:c.instructions+=13;goto B70f4a2;
case 0x70f4a4:c.instructions+=12;goto B70f4a4;
case 0x70f4a7:c.instructions+=11;goto B70f4a7;
case 0x70f4aa:c.instructions+=10;goto B70f4aa;
case 0x70f4b0:c.instructions+=9;goto B70f4b0;
case 0x70f4b1:c.instructions+=8;goto B70f4b1;
case 0x70f4b3:c.instructions+=7;goto B70f4b3;
case 0x70f4b6:c.instructions+=6;goto B70f4b6;
case 0x70f4b9:c.instructions+=5;goto B70f4b9;
case 0x70f4bc:c.instructions+=4;goto B70f4bc;
case 0x70f4be:c.instructions+=3;goto B70f4be;
case 0x70f4c1:c.instructions+=2;goto B70f4c1;
case 0x70f4c4:c.instructions+=1;goto B70f4c4;
case 0x70f4ca:goto L70f4ca;
case 0x70f4cd:c.instructions+=7;goto B70f4cd;
case 0x70f4d0:c.instructions+=6;goto B70f4d0;
case 0x70f4d4:c.instructions+=5;goto B70f4d4;
case 0x70f4d5:c.instructions+=4;goto B70f4d5;
case 0x70f4d8:c.instructions+=3;goto B70f4d8;
case 0x70f4dc:c.instructions+=2;goto B70f4dc;
case 0x70f4df:c.instructions+=1;goto B70f4df;
case 0x70f4e5:goto L70f4e5;
case 0x70f4e6:c.instructions+=4;goto B70f4e6;
case 0x70f4e7:c.instructions+=3;goto B70f4e7;
case 0x70f4e8:c.instructions+=2;goto B70f4e8;
case 0x70f4e9:c.instructions+=1;goto B70f4e9;
case 0x70f4ea:goto L70f4ea;
case 0x70f4eb:c.instructions+=7;goto B70f4eb;
case 0x70f4ed:c.instructions+=6;goto B70f4ed;
case 0x70f4ee:c.instructions+=5;goto B70f4ee;
case 0x70f4f1:c.instructions+=4;goto B70f4f1;
case 0x70f4f7:c.instructions+=3;goto B70f4f7;
case 0x70f4fc:c.instructions+=2;goto B70f4fc;
case 0x70f4fd:c.instructions+=1;goto B70f4fd;
case 0x70f502:goto L70f502;
case 0x70f504:c.instructions+=3;goto B70f504;
case 0x70f505:c.instructions+=2;goto B70f505;
case 0x70f506:c.instructions+=1;goto B70f506;
case 0x70f50c:goto L70f50c;
case 0x70f50d:c.instructions+=2;goto B70f50d;
case 0x70f50e:c.instructions+=1;goto B70f50e;
case 0x70f513:goto L70f513;
case 0x70f515:c.instructions+=6;goto B70f515;
case 0x70f517:c.instructions+=5;goto B70f517;
case 0x70f51c:c.instructions+=4;goto B70f51c;
case 0x70f51d:c.instructions+=3;goto B70f51d;
case 0x70f51e:c.instructions+=2;goto B70f51e;
case 0x70f520:c.instructions+=1;goto B70f520;
case 0x70f525:goto L70f525;
case 0x70f528:c.instructions+=2;goto B70f528;
case 0x70f52a:c.instructions+=1;goto B70f52a;
case 0x70f52c:goto L70f52c;
case 0x70f52e:c.instructions+=2;goto B70f52e;
case 0x70f52f:c.instructions+=1;goto B70f52f;
case 0x70f534:goto L70f534;
case 0x70f535:c.instructions+=7;goto B70f535;
case 0x70f536:c.instructions+=6;goto B70f536;
case 0x70f538:c.instructions+=5;goto B70f538;
case 0x70f539:c.instructions+=4;goto B70f539;
case 0x70f53b:c.instructions+=3;goto B70f53b;
case 0x70f53d:c.instructions+=2;goto B70f53d;
case 0x70f53f:c.instructions+=1;goto B70f53f;
case 0x70f541:goto L70f541;
case 0x70f546:c.instructions+=2;goto B70f546;
case 0x70f547:c.instructions+=1;goto B70f547;
case 0x70f54c:goto L70f54c;
case 0x70f54e:c.instructions+=3;goto B70f54e;
case 0x70f54f:c.instructions+=2;goto B70f54f;
case 0x70f550:c.instructions+=1;goto B70f550;
case 0x70f552:goto L70f552;
case 0x70f557:c.instructions+=2;goto B70f557;
case 0x70f558:c.instructions+=1;goto B70f558;
case 0x70f55d:goto L70f55d;
case 0x70f55f:c.instructions+=3;goto B70f55f;
case 0x70f560:c.instructions+=2;goto B70f560;
case 0x70f561:c.instructions+=1;goto B70f561;
case 0x70f563:goto L70f563;
case 0x70f566:c.instructions+=1;goto B70f566;
case 0x70f568:goto L70f568;
case 0x70f56a:c.instructions+=2;goto B70f56a;
case 0x70f56b:c.instructions+=1;goto B70f56b;
case 0x70f570:goto L70f570;
case 0x70f572:c.instructions+=3;goto B70f572;
case 0x70f573:c.instructions+=2;goto B70f573;
case 0x70f574:c.instructions+=1;goto B70f574;
case 0x70f576:goto L70f576;
case 0x70f578:c.instructions+=2;goto B70f578;
case 0x70f57b:c.instructions+=1;goto B70f57b;
case 0x70f57d:goto L70f57d;
case 0x70f57f:c.instructions+=2;goto B70f57f;
case 0x70f580:c.instructions+=1;goto B70f580;
case 0x70f585:goto L70f585;
case 0x70f587:c.instructions+=3;goto B70f587;
case 0x70f588:c.instructions+=2;goto B70f588;
case 0x70f589:c.instructions+=1;goto B70f589;
case 0x70f58b:goto L70f58b;
case 0x70f58e:c.instructions+=1;goto B70f58e;
case 0x70f590:goto L70f590;
case 0x70f593:c.instructions+=2;goto B70f593;
case 0x70f596:c.instructions+=1;goto B70f596;
case 0x70f598:goto L70f598;
case 0x70f59a:c.instructions+=2;goto B70f59a;
case 0x70f59b:c.instructions+=1;goto B70f59b;
case 0x70f5a0:goto L70f5a0;
case 0x70f5a3:c.instructions+=2;goto B70f5a3;
case 0x70f5a4:c.instructions+=1;goto B70f5a4;
case 0x70f5a5:goto L70f5a5;
case 0x70f5a8:goto L70f5a8;
case 0x70f5a9:goto L70f5a9;
case 0x70f5aa:c.instructions+=2;goto B70f5aa;
case 0x70f5ab:c.instructions+=1;goto B70f5ab;
case 0x70f5ac:goto L70f5ac;
case 0x70f5ad:c.instructions+=8;goto B70f5ad;
case 0x70f5af:c.instructions+=7;goto B70f5af;
case 0x70f5b0:c.instructions+=6;goto B70f5b0;
case 0x70f5b4:c.instructions+=5;goto B70f5b4;
case 0x70f5b5:c.instructions+=4;goto B70f5b5;
case 0x70f5b8:c.instructions+=3;goto B70f5b8;
case 0x70f5b9:c.instructions+=2;goto B70f5b9;
case 0x70f5ba:c.instructions+=1;goto B70f5ba;
case 0x70f5c0:goto L70f5c0;
case 0x70f5c5:c.instructions+=3;goto B70f5c5;
case 0x70f5cb:c.instructions+=2;goto B70f5cb;
case 0x70f5cc:c.instructions+=1;goto B70f5cc;
case 0x70f5d1:goto L70f5d1;
case 0x70f5d3:c.instructions+=3;goto B70f5d3;
case 0x70f5d4:c.instructions+=2;goto B70f5d4;
case 0x70f5d5:c.instructions+=1;goto B70f5d5;
case 0x70f5d7:goto L70f5d7;
case 0x70f5d9:c.instructions+=2;goto B70f5d9;
case 0x70f5da:c.instructions+=1;goto B70f5da;
case 0x70f5df:goto L70f5df;
case 0x70f5e2:c.instructions+=6;goto B70f5e2;
case 0x70f5e3:c.instructions+=5;goto B70f5e3;
case 0x70f5e4:c.instructions+=4;goto B70f5e4;
case 0x70f5e6:c.instructions+=3;goto B70f5e6;
case 0x70f5e8:c.instructions+=2;goto B70f5e8;
case 0x70f5eb:c.instructions+=1;goto B70f5eb;
case 0x70f5f2:goto L70f5f2;
case 0x70f5f5:c.instructions+=8;goto B70f5f5;
case 0x70f5f9:c.instructions+=7;goto B70f5f9;
case 0x70f5fb:c.instructions+=6;goto B70f5fb;
case 0x70f5fe:c.instructions+=5;goto B70f5fe;
case 0x70f5ff:c.instructions+=4;goto B70f5ff;
case 0x70f600:c.instructions+=3;goto B70f600;
case 0x70f601:c.instructions+=2;goto B70f601;
case 0x70f604:c.instructions+=1;goto B70f604;
case 0x70f606:goto L70f606;
case 0x70f60c:c.instructions+=3;goto B70f60c;
case 0x70f611:c.instructions+=2;goto B70f611;
case 0x70f612:c.instructions+=1;goto B70f612;
case 0x70f617:goto L70f617;
case 0x70f619:c.instructions+=3;goto B70f619;
case 0x70f61a:c.instructions+=2;goto B70f61a;
case 0x70f61b:c.instructions+=1;goto B70f61b;
case 0x70f61d:goto L70f61d;
case 0x70f61f:goto L70f61f;
case 0x70f620:c.instructions+=1;goto B70f620;
case 0x70f625:goto L70f625;
case 0x70f626:c.instructions+=3;goto B70f626;
case 0x70f62b:c.instructions+=2;goto B70f62b;
case 0x70f62d:c.instructions+=1;goto B70f62d;
case 0x70f62f:goto L70f62f;
case 0x70f631:c.instructions+=1;goto B70f631;
case 0x70f633:goto L70f633;
case 0x70f638:c.instructions+=2;goto B70f638;
case 0x70f63a:c.instructions+=1;goto B70f63a;
case 0x70f63c:goto L70f63c;
case 0x70f63e:goto L70f63e;
case 0x70f63f:c.instructions+=2;goto B70f63f;
case 0x70f643:c.instructions+=1;goto B70f643;
case 0x70f648:goto L70f648;
case 0x70f649:c.instructions+=3;goto B70f649;
case 0x70f64d:c.instructions+=2;goto B70f64d;
case 0x70f64f:c.instructions+=1;goto B70f64f;
case 0x70f651:goto L70f651;
case 0x70f653:c.instructions+=1;goto B70f653;
case 0x70f655:goto L70f655;
case 0x70f65a:c.instructions+=2;goto B70f65a;
case 0x70f65c:c.instructions+=1;goto B70f65c;
case 0x70f65e:goto L70f65e;
case 0x70f660:goto L70f660;
case 0x70f663:c.instructions+=3;goto B70f663;
case 0x70f664:c.instructions+=2;goto B70f664;
case 0x70f667:c.instructions+=1;goto B70f667;
case 0x70f669:goto L70f669;
case 0x70f66d:c.instructions+=3;goto B70f66d;
case 0x70f670:c.instructions+=2;goto B70f670;
case 0x70f674:c.instructions+=1;goto B70f674;
case 0x70f67a:goto L70f67a;
case 0x70f67b:c.instructions+=1;goto B70f67b;
case 0x70f680:goto L70f680;
case 0x70f681:c.instructions+=5;goto B70f681;
case 0x70f682:c.instructions+=4;goto B70f682;
case 0x70f683:c.instructions+=3;goto B70f683;
case 0x70f684:c.instructions+=2;goto B70f684;
case 0x70f685:c.instructions+=1;goto B70f685;
case 0x70f686:goto L70f686;
case 0x70f687:c.instructions+=22;goto B70f687;
case 0x70f689:c.instructions+=21;goto B70f689;
case 0x70f68f:c.instructions+=20;goto B70f68f;
case 0x70f692:c.instructions+=19;goto B70f692;
case 0x70f695:c.instructions+=18;goto B70f695;
case 0x70f69b:c.instructions+=17;goto B70f69b;
case 0x70f69c:c.instructions+=16;goto B70f69c;
case 0x70f69f:c.instructions+=15;goto B70f69f;
case 0x70f6a0:c.instructions+=14;goto B70f6a0;
case 0x70f6a6:c.instructions+=13;goto B70f6a6;
case 0x70f6ac:c.instructions+=12;goto B70f6ac;
case 0x70f6ad:c.instructions+=11;goto B70f6ad;
case 0x70f6b0:c.instructions+=10;goto B70f6b0;
case 0x70f6b2:c.instructions+=9;goto B70f6b2;
case 0x70f6b4:c.instructions+=8;goto B70f6b4;
case 0x70f6b7:c.instructions+=7;goto B70f6b7;
case 0x70f6ba:c.instructions+=6;goto B70f6ba;
case 0x70f6bf:c.instructions+=5;goto B70f6bf;
case 0x70f6c2:c.instructions+=4;goto B70f6c2;
case 0x70f6c5:c.instructions+=3;goto B70f6c5;
case 0x70f6c7:c.instructions+=2;goto B70f6c7;
case 0x70f6ca:c.instructions+=1;goto B70f6ca;
case 0x70f6cd:goto L70f6cd;
case 0x70f6d0:c.instructions+=3;goto B70f6d0;
case 0x70f6d2:c.instructions+=2;goto B70f6d2;
case 0x70f6d9:c.instructions+=1;goto B70f6d9;
case 0x70f6db:goto L70f6db;
case 0x70f6e2:goto L70f6e2;
case 0x70f6e5:c.instructions+=1;goto B70f6e5;
case 0x70f6e7:goto L70f6e7;
case 0x70f6e9:c.instructions+=2;goto B70f6e9;
case 0x70f6ec:c.instructions+=1;goto B70f6ec;
case 0x70f6f3:goto L70f6f3;
case 0x70f6f4:c.instructions+=2;goto B70f6f4;
case 0x70f6fa:c.instructions+=1;goto B70f6fa;
case 0x70f6fc:goto L70f6fc;
case 0x70f6fe:c.instructions+=1;goto B70f6fe;
case 0x70f700:goto L70f700;
case 0x70f703:goto L70f703;
case 0x70f705:c.instructions+=1;goto B70f705;
case 0x70f707:goto L70f707;
case 0x70f70a:c.instructions+=3;goto B70f70a;
case 0x70f70c:c.instructions+=2;goto B70f70c;
case 0x70f70e:c.instructions+=1;goto B70f70e;
case 0x70f710:goto L70f710;
case 0x70f714:c.instructions+=5;goto B70f714;
case 0x70f71b:c.instructions+=4;goto B70f71b;
case 0x70f71d:c.instructions+=3;goto B70f71d;
case 0x70f71e:c.instructions+=2;goto B70f71e;
case 0x70f71f:c.instructions+=1;goto B70f71f;
case 0x70f721:goto L70f721;
case 0x70f724:c.instructions+=4;goto B70f724;
case 0x70f727:c.instructions+=3;goto B70f727;
case 0x70f729:c.instructions+=2;goto B70f729;
case 0x70f72c:c.instructions+=1;goto B70f72c;
case 0x70f72e:goto L70f72e;
case 0x70f72f:c.instructions+=4;goto B70f72f;
case 0x70f730:c.instructions+=3;goto B70f730;
case 0x70f731:c.instructions+=2;goto B70f731;
case 0x70f732:c.instructions+=1;goto B70f732;
case 0x70f733:goto L70f733;
case 0x70f734:c.instructions+=12;goto B70f734;
case 0x70f736:c.instructions+=11;goto B70f736;
case 0x70f737:c.instructions+=10;goto B70f737;
case 0x70f738:c.instructions+=9;goto B70f738;
case 0x70f73b:c.instructions+=8;goto B70f73b;
case 0x70f73e:c.instructions+=7;goto B70f73e;
case 0x70f73f:c.instructions+=6;goto B70f73f;
case 0x70f741:c.instructions+=5;goto B70f741;
case 0x70f742:c.instructions+=4;goto B70f742;
case 0x70f745:c.instructions+=3;goto B70f745;
case 0x70f748:c.instructions+=2;goto B70f748;
case 0x70f74b:c.instructions+=1;goto B70f74b;
case 0x70f74d:goto L70f74d;
case 0x70f74f:goto L70f74f;
case 0x70f751:c.instructions+=4;goto B70f751;
case 0x70f754:c.instructions+=3;goto B70f754;
case 0x70f757:c.instructions+=2;goto B70f757;
case 0x70f758:c.instructions+=1;goto B70f758;
case 0x70f75b:goto L70f75b;
case 0x70f75d:goto L70f75d;
case 0x70f760:c.instructions+=1;goto B70f760;
case 0x70f762:goto L70f762;
case 0x70f763:c.instructions+=3;goto B70f763;
case 0x70f766:c.instructions+=2;goto B70f766;
case 0x70f769:c.instructions+=1;goto B70f769;
case 0x70f76a:goto L70f76a;
case 0x70f76d:c.instructions+=6;goto B70f76d;
case 0x70f76f:c.instructions+=5;goto B70f76f;
case 0x70f771:c.instructions+=4;goto B70f771;
case 0x70f773:c.instructions+=3;goto B70f773;
case 0x70f777:c.instructions+=2;goto B70f777;
case 0x70f77a:c.instructions+=1;goto B70f77a;
case 0x70f77c:goto L70f77c;
case 0x70f77e:c.instructions+=9;goto B70f77e;
case 0x70f781:c.instructions+=8;goto B70f781;
case 0x70f784:c.instructions+=7;goto B70f784;
case 0x70f787:c.instructions+=6;goto B70f787;
case 0x70f789:c.instructions+=5;goto B70f789;
case 0x70f78b:c.instructions+=4;goto B70f78b;
case 0x70f78e:c.instructions+=3;goto B70f78e;
case 0x70f791:c.instructions+=2;goto B70f791;
case 0x70f793:c.instructions+=1;goto B70f793;
case 0x70f796:goto L70f796;
case 0x70f79a:c.instructions+=11;goto B70f79a;
case 0x70f79d:c.instructions+=10;goto B70f79d;
case 0x70f7a1:c.instructions+=9;goto B70f7a1;
case 0x70f7a5:c.instructions+=8;goto B70f7a5;
case 0x70f7a8:c.instructions+=7;goto B70f7a8;
case 0x70f7aa:c.instructions+=6;goto B70f7aa;
case 0x70f7ad:c.instructions+=5;goto B70f7ad;
case 0x70f7b0:c.instructions+=4;goto B70f7b0;
case 0x70f7b3:c.instructions+=3;goto B70f7b3;
case 0x70f7b4:c.instructions+=2;goto B70f7b4;
case 0x70f7b7:c.instructions+=1;goto B70f7b7;
case 0x70f7b9:goto L70f7b9;
case 0x70f7bc:goto L70f7bc;
case 0x70f7bf:c.instructions+=1;goto B70f7bf;
case 0x70f7c1:goto L70f7c1;
case 0x70f7c2:goto L70f7c2;
case 0x70f7c5:c.instructions+=5;goto B70f7c5;
case 0x70f7c8:c.instructions+=4;goto B70f7c8;
case 0x70f7cb:c.instructions+=3;goto B70f7cb;
case 0x70f7cd:c.instructions+=2;goto B70f7cd;
case 0x70f7cf:c.instructions+=1;goto B70f7cf;
case 0x70f7d2:goto L70f7d2;
case 0x70f7d4:goto L70f7d4;
case 0x70f7d6:c.instructions+=1;goto B70f7d6;
case 0x70f7d9:goto L70f7d9;
case 0x70f7db:goto L70f7db;
case 0x70f7dc:c.instructions+=3;goto B70f7dc;
case 0x70f7dd:c.instructions+=2;goto B70f7dd;
case 0x70f7de:c.instructions+=1;goto B70f7de;
case 0x70f7df:goto L70f7df;
case 0x70f7e0:c.instructions+=17;goto B70f7e0;
case 0x70f7e2:c.instructions+=16;goto B70f7e2;
case 0x70f7e5:c.instructions+=15;goto B70f7e5;
case 0x70f7e8:c.instructions+=14;goto B70f7e8;
case 0x70f7eb:c.instructions+=13;goto B70f7eb;
case 0x70f7f0:c.instructions+=12;goto B70f7f0;
case 0x70f7f3:c.instructions+=11;goto B70f7f3;
case 0x70f7f9:c.instructions+=10;goto B70f7f9;
case 0x70f7fc:c.instructions+=9;goto B70f7fc;
case 0x70f7fe:c.instructions+=8;goto B70f7fe;
case 0x70f803:c.instructions+=7;goto B70f803;
case 0x70f806:c.instructions+=6;goto B70f806;
case 0x70f809:c.instructions+=5;goto B70f809;
case 0x70f80e:c.instructions+=4;goto B70f80e;
case 0x70f811:c.instructions+=3;goto B70f811;
case 0x70f814:c.instructions+=2;goto B70f814;
case 0x70f815:c.instructions+=1;goto B70f815;
case 0x70f816:goto L70f816;
case 0x70f817:c.instructions+=23;goto B70f817;
case 0x70f819:c.instructions+=22;goto B70f819;
case 0x70f81a:c.instructions+=21;goto B70f81a;
case 0x70f81b:c.instructions+=20;goto B70f81b;
case 0x70f81e:c.instructions+=19;goto B70f81e;
case 0x70f821:c.instructions+=18;goto B70f821;
case 0x70f822:c.instructions+=17;goto B70f822;
case 0x70f825:c.instructions+=16;goto B70f825;
case 0x70f829:c.instructions+=15;goto B70f829;
case 0x70f82b:c.instructions+=14;goto B70f82b;
case 0x70f831:c.instructions+=13;goto B70f831;
case 0x70f834:c.instructions+=12;goto B70f834;
case 0x70f837:c.instructions+=11;goto B70f837;
case 0x70f83a:c.instructions+=10;goto B70f83a;
case 0x70f83d:c.instructions+=9;goto B70f83d;
case 0x70f840:c.instructions+=8;goto B70f840;
case 0x70f843:c.instructions+=7;goto B70f843;
case 0x70f845:c.instructions+=6;goto B70f845;
case 0x70f847:c.instructions+=5;goto B70f847;
case 0x70f848:c.instructions+=4;goto B70f848;
case 0x70f849:c.instructions+=3;goto B70f849;
case 0x70f84c:c.instructions+=2;goto B70f84c;
case 0x70f84f:c.instructions+=1;goto B70f84f;
case 0x70f855:goto L70f855;
case 0x70f857:c.instructions+=10;goto B70f857;
case 0x70f85a:c.instructions+=9;goto B70f85a;
case 0x70f85d:c.instructions+=8;goto B70f85d;
case 0x70f860:c.instructions+=7;goto B70f860;
case 0x70f863:c.instructions+=6;goto B70f863;
case 0x70f866:c.instructions+=5;goto B70f866;
case 0x70f869:c.instructions+=4;goto B70f869;
case 0x70f86c:c.instructions+=3;goto B70f86c;
case 0x70f86f:c.instructions+=2;goto B70f86f;
case 0x70f872:c.instructions+=1;goto B70f872;
case 0x70f878:goto L70f878;
case 0x70f87c:c.instructions+=548;goto B70f87c;
case 0x70f880:c.instructions+=547;goto B70f880;
case 0x70f884:c.instructions+=546;goto B70f884;
case 0x70f888:c.instructions+=545;goto B70f888;
case 0x70f889:c.instructions+=544;goto B70f889;
case 0x70f88a:c.instructions+=543;goto B70f88a;
case 0x70f88b:c.instructions+=542;goto B70f88b;
case 0x70f88c:c.instructions+=541;goto B70f88c;
case 0x70f88d:c.instructions+=540;goto B70f88d;
case 0x70f88e:c.instructions+=539;goto B70f88e;
case 0x70f892:c.instructions+=538;goto B70f892;
case 0x70f899:c.instructions+=537;goto B70f899;
case 0x70f89c:c.instructions+=536;goto B70f89c;
case 0x70f89f:c.instructions+=535;goto B70f89f;
case 0x70f8a3:c.instructions+=534;goto B70f8a3;
case 0x70f8a7:c.instructions+=533;goto B70f8a7;
case 0x70f8aa:c.instructions+=532;goto B70f8aa;
case 0x70f8ac:c.instructions+=531;goto B70f8ac;
case 0x70f8b2:c.instructions+=530;goto B70f8b2;
case 0x70f8b8:c.instructions+=529;goto B70f8b8;
case 0x70f8bb:c.instructions+=528;goto B70f8bb;
case 0x70f8be:c.instructions+=527;goto B70f8be;
case 0x70f8c0:c.instructions+=526;goto B70f8c0;
case 0x70f8c3:c.instructions+=525;goto B70f8c3;
case 0x70f8c7:c.instructions+=524;goto B70f8c7;
case 0x70f8ca:c.instructions+=523;goto B70f8ca;
case 0x70f8cd:c.instructions+=522;goto B70f8cd;
case 0x70f8d0:c.instructions+=521;goto B70f8d0;
case 0x70f8d3:c.instructions+=520;goto B70f8d3;
case 0x70f8d6:c.instructions+=519;goto B70f8d6;
case 0x70f8d9:c.instructions+=518;goto B70f8d9;
case 0x70f8dc:c.instructions+=517;goto B70f8dc;
case 0x70f8df:c.instructions+=516;goto B70f8df;
case 0x70f8e3:c.instructions+=515;goto B70f8e3;
case 0x70f8e7:c.instructions+=514;goto B70f8e7;
case 0x70f8eb:c.instructions+=513;goto B70f8eb;
case 0x70f8ef:c.instructions+=512;goto B70f8ef;
case 0x70f8f2:c.instructions+=511;goto B70f8f2;
case 0x70f8f5:c.instructions+=510;goto B70f8f5;
case 0x70f8f9:c.instructions+=509;goto B70f8f9;
case 0x70f8fc:c.instructions+=508;goto B70f8fc;
case 0x70f8ff:c.instructions+=507;goto B70f8ff;
case 0x70f903:c.instructions+=506;goto B70f903;
case 0x70f906:c.instructions+=505;goto B70f906;
case 0x70f909:c.instructions+=504;goto B70f909;
case 0x70f90d:c.instructions+=503;goto B70f90d;
case 0x70f910:c.instructions+=502;goto B70f910;
case 0x70f914:c.instructions+=501;goto B70f914;
case 0x70f918:c.instructions+=500;goto B70f918;
case 0x70f91b:c.instructions+=499;goto B70f91b;
case 0x70f91e:c.instructions+=498;goto B70f91e;
case 0x70f922:c.instructions+=497;goto B70f922;
case 0x70f925:c.instructions+=496;goto B70f925;
case 0x70f928:c.instructions+=495;goto B70f928;
case 0x70f92c:c.instructions+=494;goto B70f92c;
case 0x70f92f:c.instructions+=493;goto B70f92f;
case 0x70f933:c.instructions+=492;goto B70f933;
case 0x70f936:c.instructions+=491;goto B70f936;
case 0x70f939:c.instructions+=490;goto B70f939;
case 0x70f93d:c.instructions+=489;goto B70f93d;
case 0x70f941:c.instructions+=488;goto B70f941;
case 0x70f944:c.instructions+=487;goto B70f944;
case 0x70f948:c.instructions+=486;goto B70f948;
case 0x70f94b:c.instructions+=485;goto B70f94b;
case 0x70f94e:c.instructions+=484;goto B70f94e;
case 0x70f952:c.instructions+=483;goto B70f952;
case 0x70f955:c.instructions+=482;goto B70f955;
case 0x70f958:c.instructions+=481;goto B70f958;
case 0x70f95c:c.instructions+=480;goto B70f95c;
case 0x70f95f:c.instructions+=479;goto B70f95f;
case 0x70f962:c.instructions+=478;goto B70f962;
case 0x70f966:c.instructions+=477;goto B70f966;
case 0x70f96a:c.instructions+=476;goto B70f96a;
case 0x70f96d:c.instructions+=475;goto B70f96d;
case 0x70f970:c.instructions+=474;goto B70f970;
case 0x70f974:c.instructions+=473;goto B70f974;
case 0x70f978:c.instructions+=472;goto B70f978;
case 0x70f97b:c.instructions+=471;goto B70f97b;
case 0x70f97e:c.instructions+=470;goto B70f97e;
case 0x70f981:c.instructions+=469;goto B70f981;
case 0x70f988:c.instructions+=468;goto B70f988;
case 0x70f98b:c.instructions+=467;goto B70f98b;
case 0x70f98e:c.instructions+=466;goto B70f98e;
case 0x70f995:c.instructions+=465;goto B70f995;
case 0x70f99c:c.instructions+=464;goto B70f99c;
case 0x70f9a3:c.instructions+=463;goto B70f9a3;
case 0x70f9a6:c.instructions+=462;goto B70f9a6;
case 0x70f9aa:c.instructions+=461;goto B70f9aa;
case 0x70f9ae:c.instructions+=460;goto B70f9ae;
case 0x70f9b2:c.instructions+=459;goto B70f9b2;
case 0x70f9b6:c.instructions+=458;goto B70f9b6;
case 0x70f9b9:c.instructions+=457;goto B70f9b9;
case 0x70f9bc:c.instructions+=456;goto B70f9bc;
case 0x70f9bf:c.instructions+=455;goto B70f9bf;
case 0x70f9c2:c.instructions+=454;goto B70f9c2;
case 0x70f9c5:c.instructions+=453;goto B70f9c5;
case 0x70f9c8:c.instructions+=452;goto B70f9c8;
case 0x70f9cb:c.instructions+=451;goto B70f9cb;
case 0x70f9ce:c.instructions+=450;goto B70f9ce;
case 0x70f9d2:c.instructions+=449;goto B70f9d2;
case 0x70f9d6:c.instructions+=448;goto B70f9d6;
case 0x70f9d9:c.instructions+=447;goto B70f9d9;
case 0x70f9dc:c.instructions+=446;goto B70f9dc;
case 0x70f9df:c.instructions+=445;goto B70f9df;
case 0x70f9e2:c.instructions+=444;goto B70f9e2;
case 0x70f9e5:c.instructions+=443;goto B70f9e5;
case 0x70f9e8:c.instructions+=442;goto B70f9e8;
case 0x70f9eb:c.instructions+=441;goto B70f9eb;
case 0x70f9ee:c.instructions+=440;goto B70f9ee;
case 0x70f9f2:c.instructions+=439;goto B70f9f2;
case 0x70f9f6:c.instructions+=438;goto B70f9f6;
case 0x70f9f9:c.instructions+=437;goto B70f9f9;
case 0x70f9fc:c.instructions+=436;goto B70f9fc;
case 0x70f9ff:c.instructions+=435;goto B70f9ff;
case 0x70fa02:c.instructions+=434;goto B70fa02;
case 0x70fa05:c.instructions+=433;goto B70fa05;
case 0x70fa08:c.instructions+=432;goto B70fa08;
case 0x70fa0b:c.instructions+=431;goto B70fa0b;
case 0x70fa0e:c.instructions+=430;goto B70fa0e;
case 0x70fa12:c.instructions+=429;goto B70fa12;
case 0x70fa19:c.instructions+=428;goto B70fa19;
case 0x70fa1c:c.instructions+=427;goto B70fa1c;
case 0x70fa1f:c.instructions+=426;goto B70fa1f;
case 0x70fa22:c.instructions+=425;goto B70fa22;
case 0x70fa25:c.instructions+=424;goto B70fa25;
case 0x70fa28:c.instructions+=423;goto B70fa28;
case 0x70fa2b:c.instructions+=422;goto B70fa2b;
case 0x70fa2e:c.instructions+=421;goto B70fa2e;
case 0x70fa31:c.instructions+=420;goto B70fa31;
case 0x70fa34:c.instructions+=419;goto B70fa34;
case 0x70fa38:c.instructions+=418;goto B70fa38;
case 0x70fa3b:c.instructions+=417;goto B70fa3b;
case 0x70fa3e:c.instructions+=416;goto B70fa3e;
case 0x70fa41:c.instructions+=415;goto B70fa41;
case 0x70fa44:c.instructions+=414;goto B70fa44;
case 0x70fa48:c.instructions+=413;goto B70fa48;
case 0x70fa4c:c.instructions+=412;goto B70fa4c;
case 0x70fa50:c.instructions+=411;goto B70fa50;
case 0x70fa54:c.instructions+=410;goto B70fa54;
case 0x70fa57:c.instructions+=409;goto B70fa57;
case 0x70fa5a:c.instructions+=408;goto B70fa5a;
case 0x70fa5d:c.instructions+=407;goto B70fa5d;
case 0x70fa60:c.instructions+=406;goto B70fa60;
case 0x70fa64:c.instructions+=405;goto B70fa64;
case 0x70fa67:c.instructions+=404;goto B70fa67;
case 0x70fa6a:c.instructions+=403;goto B70fa6a;
case 0x70fa6e:c.instructions+=402;goto B70fa6e;
case 0x70fa72:c.instructions+=401;goto B70fa72;
case 0x70fa75:c.instructions+=400;goto B70fa75;
case 0x70fa78:c.instructions+=399;goto B70fa78;
case 0x70fa7c:c.instructions+=398;goto B70fa7c;
case 0x70fa80:c.instructions+=397;goto B70fa80;
case 0x70fa84:c.instructions+=396;goto B70fa84;
case 0x70fa88:c.instructions+=395;goto B70fa88;
case 0x70fa8c:c.instructions+=394;goto B70fa8c;
case 0x70fa8f:c.instructions+=393;goto B70fa8f;
case 0x70fa92:c.instructions+=392;goto B70fa92;
case 0x70fa96:c.instructions+=391;goto B70fa96;
case 0x70fa99:c.instructions+=390;goto B70fa99;
case 0x70fa9c:c.instructions+=389;goto B70fa9c;
case 0x70fa9f:c.instructions+=388;goto B70fa9f;
case 0x70faa2:c.instructions+=387;goto B70faa2;
case 0x70faa5:c.instructions+=386;goto B70faa5;
case 0x70faa9:c.instructions+=385;goto B70faa9;
case 0x70faad:c.instructions+=384;goto B70faad;
case 0x70fab0:c.instructions+=383;goto B70fab0;
case 0x70fab3:c.instructions+=382;goto B70fab3;
case 0x70fab7:c.instructions+=381;goto B70fab7;
case 0x70fabb:c.instructions+=380;goto B70fabb;
case 0x70fabe:c.instructions+=379;goto B70fabe;
case 0x70fac1:c.instructions+=378;goto B70fac1;
case 0x70fac4:c.instructions+=377;goto B70fac4;
case 0x70fac7:c.instructions+=376;goto B70fac7;
case 0x70faca:c.instructions+=375;goto B70faca;
case 0x70facd:c.instructions+=374;goto B70facd;
case 0x70fad0:c.instructions+=373;goto B70fad0;
case 0x70fad3:c.instructions+=372;goto B70fad3;
case 0x70fad7:c.instructions+=371;goto B70fad7;
case 0x70fadb:c.instructions+=370;goto B70fadb;
case 0x70fade:c.instructions+=369;goto B70fade;
case 0x70fae1:c.instructions+=368;goto B70fae1;
case 0x70fae4:c.instructions+=367;goto B70fae4;
case 0x70fae7:c.instructions+=366;goto B70fae7;
case 0x70faea:c.instructions+=365;goto B70faea;
case 0x70faed:c.instructions+=364;goto B70faed;
case 0x70faf0:c.instructions+=363;goto B70faf0;
case 0x70faf3:c.instructions+=362;goto B70faf3;
case 0x70faf7:c.instructions+=361;goto B70faf7;
case 0x70fafb:c.instructions+=360;goto B70fafb;
case 0x70fafe:c.instructions+=359;goto B70fafe;
case 0x70fb01:c.instructions+=358;goto B70fb01;
case 0x70fb04:c.instructions+=357;goto B70fb04;
case 0x70fb07:c.instructions+=356;goto B70fb07;
case 0x70fb0a:c.instructions+=355;goto B70fb0a;
case 0x70fb0d:c.instructions+=354;goto B70fb0d;
case 0x70fb10:c.instructions+=353;goto B70fb10;
case 0x70fb13:c.instructions+=352;goto B70fb13;
case 0x70fb17:c.instructions+=351;goto B70fb17;
case 0x70fb1e:c.instructions+=350;goto B70fb1e;
case 0x70fb21:c.instructions+=349;goto B70fb21;
case 0x70fb24:c.instructions+=348;goto B70fb24;
case 0x70fb27:c.instructions+=347;goto B70fb27;
case 0x70fb2a:c.instructions+=346;goto B70fb2a;
case 0x70fb2d:c.instructions+=345;goto B70fb2d;
case 0x70fb30:c.instructions+=344;goto B70fb30;
case 0x70fb33:c.instructions+=343;goto B70fb33;
case 0x70fb36:c.instructions+=342;goto B70fb36;
case 0x70fb3a:c.instructions+=341;goto B70fb3a;
case 0x70fb3d:c.instructions+=340;goto B70fb3d;
case 0x70fb40:c.instructions+=339;goto B70fb40;
case 0x70fb43:c.instructions+=338;goto B70fb43;
case 0x70fb46:c.instructions+=337;goto B70fb46;
case 0x70fb4a:c.instructions+=336;goto B70fb4a;
case 0x70fb4e:c.instructions+=335;goto B70fb4e;
case 0x70fb52:c.instructions+=334;goto B70fb52;
case 0x70fb56:c.instructions+=333;goto B70fb56;
case 0x70fb59:c.instructions+=332;goto B70fb59;
case 0x70fb5c:c.instructions+=331;goto B70fb5c;
case 0x70fb5f:c.instructions+=330;goto B70fb5f;
case 0x70fb62:c.instructions+=329;goto B70fb62;
case 0x70fb66:c.instructions+=328;goto B70fb66;
case 0x70fb6a:c.instructions+=327;goto B70fb6a;
case 0x70fb6e:c.instructions+=326;goto B70fb6e;
case 0x70fb71:c.instructions+=325;goto B70fb71;
case 0x70fb74:c.instructions+=324;goto B70fb74;
case 0x70fb77:c.instructions+=323;goto B70fb77;
case 0x70fb7a:c.instructions+=322;goto B70fb7a;
case 0x70fb7e:c.instructions+=321;goto B70fb7e;
case 0x70fb82:c.instructions+=320;goto B70fb82;
case 0x70fb86:c.instructions+=319;goto B70fb86;
case 0x70fb8a:c.instructions+=318;goto B70fb8a;
case 0x70fb8e:c.instructions+=317;goto B70fb8e;
case 0x70fb91:c.instructions+=316;goto B70fb91;
case 0x70fb94:c.instructions+=315;goto B70fb94;
case 0x70fb98:c.instructions+=314;goto B70fb98;
case 0x70fb9b:c.instructions+=313;goto B70fb9b;
case 0x70fb9e:c.instructions+=312;goto B70fb9e;
case 0x70fba1:c.instructions+=311;goto B70fba1;
case 0x70fba4:c.instructions+=310;goto B70fba4;
case 0x70fba7:c.instructions+=309;goto B70fba7;
case 0x70fbab:c.instructions+=308;goto B70fbab;
case 0x70fbaf:c.instructions+=307;goto B70fbaf;
case 0x70fbb2:c.instructions+=306;goto B70fbb2;
case 0x70fbb5:c.instructions+=305;goto B70fbb5;
case 0x70fbb8:c.instructions+=304;goto B70fbb8;
case 0x70fbbc:c.instructions+=303;goto B70fbbc;
case 0x70fbbf:c.instructions+=302;goto B70fbbf;
case 0x70fbc2:c.instructions+=301;goto B70fbc2;
case 0x70fbc5:c.instructions+=300;goto B70fbc5;
case 0x70fbc8:c.instructions+=299;goto B70fbc8;
case 0x70fbcb:c.instructions+=298;goto B70fbcb;
case 0x70fbcf:c.instructions+=297;goto B70fbcf;
case 0x70fbd3:c.instructions+=296;goto B70fbd3;
case 0x70fbd6:c.instructions+=295;goto B70fbd6;
case 0x70fbd9:c.instructions+=294;goto B70fbd9;
case 0x70fbdc:c.instructions+=293;goto B70fbdc;
case 0x70fbdf:c.instructions+=292;goto B70fbdf;
case 0x70fbe6:c.instructions+=291;goto B70fbe6;
case 0x70fbed:c.instructions+=290;goto B70fbed;
case 0x70fbf0:c.instructions+=289;goto B70fbf0;
case 0x70fbf3:c.instructions+=288;goto B70fbf3;
case 0x70fbf6:c.instructions+=287;goto B70fbf6;
case 0x70fbf9:c.instructions+=286;goto B70fbf9;
case 0x70fbfc:c.instructions+=285;goto B70fbfc;
case 0x70fc00:c.instructions+=284;goto B70fc00;
case 0x70fc04:c.instructions+=283;goto B70fc04;
case 0x70fc07:c.instructions+=282;goto B70fc07;
case 0x70fc0a:c.instructions+=281;goto B70fc0a;
case 0x70fc0d:c.instructions+=280;goto B70fc0d;
case 0x70fc10:c.instructions+=279;goto B70fc10;
case 0x70fc13:c.instructions+=278;goto B70fc13;
case 0x70fc16:c.instructions+=277;goto B70fc16;
case 0x70fc19:c.instructions+=276;goto B70fc19;
case 0x70fc1d:c.instructions+=275;goto B70fc1d;
case 0x70fc21:c.instructions+=274;goto B70fc21;
case 0x70fc25:c.instructions+=273;goto B70fc25;
case 0x70fc29:c.instructions+=272;goto B70fc29;
case 0x70fc30:c.instructions+=271;goto B70fc30;
case 0x70fc33:c.instructions+=270;goto B70fc33;
case 0x70fc36:c.instructions+=269;goto B70fc36;
case 0x70fc3a:c.instructions+=268;goto B70fc3a;
case 0x70fc3d:c.instructions+=267;goto B70fc3d;
case 0x70fc41:c.instructions+=266;goto B70fc41;
case 0x70fc45:c.instructions+=265;goto B70fc45;
case 0x70fc49:c.instructions+=264;goto B70fc49;
case 0x70fc4d:c.instructions+=263;goto B70fc4d;
case 0x70fc50:c.instructions+=262;goto B70fc50;
case 0x70fc53:c.instructions+=261;goto B70fc53;
case 0x70fc56:c.instructions+=260;goto B70fc56;
case 0x70fc59:c.instructions+=259;goto B70fc59;
case 0x70fc5d:c.instructions+=258;goto B70fc5d;
case 0x70fc60:c.instructions+=257;goto B70fc60;
case 0x70fc64:c.instructions+=256;goto B70fc64;
case 0x70fc67:c.instructions+=255;goto B70fc67;
case 0x70fc6a:c.instructions+=254;goto B70fc6a;
case 0x70fc6d:c.instructions+=253;goto B70fc6d;
case 0x70fc71:c.instructions+=252;goto B70fc71;
case 0x70fc75:c.instructions+=251;goto B70fc75;
case 0x70fc79:c.instructions+=250;goto B70fc79;
case 0x70fc7c:c.instructions+=249;goto B70fc7c;
case 0x70fc7f:c.instructions+=248;goto B70fc7f;
case 0x70fc82:c.instructions+=247;goto B70fc82;
case 0x70fc86:c.instructions+=246;goto B70fc86;
case 0x70fc8a:c.instructions+=245;goto B70fc8a;
case 0x70fc8d:c.instructions+=244;goto B70fc8d;
case 0x70fc91:c.instructions+=243;goto B70fc91;
case 0x70fc94:c.instructions+=242;goto B70fc94;
case 0x70fc97:c.instructions+=241;goto B70fc97;
case 0x70fc9a:c.instructions+=240;goto B70fc9a;
case 0x70fc9e:c.instructions+=239;goto B70fc9e;
case 0x70fca2:c.instructions+=238;goto B70fca2;
case 0x70fca6:c.instructions+=237;goto B70fca6;
case 0x70fca9:c.instructions+=236;goto B70fca9;
case 0x70fcac:c.instructions+=235;goto B70fcac;
case 0x70fcaf:c.instructions+=234;goto B70fcaf;
case 0x70fcb3:c.instructions+=233;goto B70fcb3;
case 0x70fcb7:c.instructions+=232;goto B70fcb7;
case 0x70fcba:c.instructions+=231;goto B70fcba;
case 0x70fcbe:c.instructions+=230;goto B70fcbe;
case 0x70fcc1:c.instructions+=229;goto B70fcc1;
case 0x70fcc4:c.instructions+=228;goto B70fcc4;
case 0x70fcc7:c.instructions+=227;goto B70fcc7;
case 0x70fcca:c.instructions+=226;goto B70fcca;
case 0x70fcce:c.instructions+=225;goto B70fcce;
case 0x70fcd2:c.instructions+=224;goto B70fcd2;
case 0x70fcd9:c.instructions+=223;goto B70fcd9;
case 0x70fcdd:c.instructions+=222;goto B70fcdd;
case 0x70fce0:c.instructions+=221;goto B70fce0;
case 0x70fce3:c.instructions+=220;goto B70fce3;
case 0x70fce6:c.instructions+=219;goto B70fce6;
case 0x70fcea:c.instructions+=218;goto B70fcea;
case 0x70fcee:c.instructions+=217;goto B70fcee;
case 0x70fcf2:c.instructions+=216;goto B70fcf2;
case 0x70fcf9:c.instructions+=215;goto B70fcf9;
case 0x70fcfc:c.instructions+=214;goto B70fcfc;
case 0x70fcff:c.instructions+=213;goto B70fcff;
case 0x70fd02:c.instructions+=212;goto B70fd02;
case 0x70fd06:c.instructions+=211;goto B70fd06;
case 0x70fd0a:c.instructions+=210;goto B70fd0a;
case 0x70fd11:c.instructions+=209;goto B70fd11;
case 0x70fd14:c.instructions+=208;goto B70fd14;
case 0x70fd18:c.instructions+=207;goto B70fd18;
case 0x70fd1b:c.instructions+=206;goto B70fd1b;
case 0x70fd1e:c.instructions+=205;goto B70fd1e;
case 0x70fd21:c.instructions+=204;goto B70fd21;
case 0x70fd25:c.instructions+=203;goto B70fd25;
case 0x70fd29:c.instructions+=202;goto B70fd29;
case 0x70fd2d:c.instructions+=201;goto B70fd2d;
case 0x70fd30:c.instructions+=200;goto B70fd30;
case 0x70fd33:c.instructions+=199;goto B70fd33;
case 0x70fd36:c.instructions+=198;goto B70fd36;
case 0x70fd39:c.instructions+=197;goto B70fd39;
case 0x70fd3d:c.instructions+=196;goto B70fd3d;
case 0x70fd41:c.instructions+=195;goto B70fd41;
case 0x70fd45:c.instructions+=194;goto B70fd45;
case 0x70fd48:c.instructions+=193;goto B70fd48;
case 0x70fd4b:c.instructions+=192;goto B70fd4b;
case 0x70fd4e:c.instructions+=191;goto B70fd4e;
case 0x70fd52:c.instructions+=190;goto B70fd52;
case 0x70fd56:c.instructions+=189;goto B70fd56;
case 0x70fd5a:c.instructions+=188;goto B70fd5a;
case 0x70fd5d:c.instructions+=187;goto B70fd5d;
case 0x70fd60:c.instructions+=186;goto B70fd60;
case 0x70fd63:c.instructions+=185;goto B70fd63;
case 0x70fd66:c.instructions+=184;goto B70fd66;
case 0x70fd6a:c.instructions+=183;goto B70fd6a;
case 0x70fd6e:c.instructions+=182;goto B70fd6e;
case 0x70fd72:c.instructions+=181;goto B70fd72;
case 0x70fd75:c.instructions+=180;goto B70fd75;
case 0x70fd78:c.instructions+=179;goto B70fd78;
case 0x70fd7b:c.instructions+=178;goto B70fd7b;
case 0x70fd7f:c.instructions+=177;goto B70fd7f;
case 0x70fd86:c.instructions+=176;goto B70fd86;
case 0x70fd8a:c.instructions+=175;goto B70fd8a;
case 0x70fd8d:c.instructions+=174;goto B70fd8d;
case 0x70fd90:c.instructions+=173;goto B70fd90;
case 0x70fd93:c.instructions+=172;goto B70fd93;
case 0x70fd96:c.instructions+=171;goto B70fd96;
case 0x70fd9a:c.instructions+=170;goto B70fd9a;
case 0x70fd9e:c.instructions+=169;goto B70fd9e;
case 0x70fda2:c.instructions+=168;goto B70fda2;
case 0x70fda5:c.instructions+=167;goto B70fda5;
case 0x70fda8:c.instructions+=166;goto B70fda8;
case 0x70fdab:c.instructions+=165;goto B70fdab;
case 0x70fdaf:c.instructions+=164;goto B70fdaf;
case 0x70fdb2:c.instructions+=163;goto B70fdb2;
case 0x70fdb5:c.instructions+=162;goto B70fdb5;
case 0x70fdb8:c.instructions+=161;goto B70fdb8;
case 0x70fdbc:c.instructions+=160;goto B70fdbc;
case 0x70fdbf:c.instructions+=159;goto B70fdbf;
case 0x70fdc2:c.instructions+=158;goto B70fdc2;
case 0x70fdc5:c.instructions+=157;goto B70fdc5;
case 0x70fdc8:c.instructions+=156;goto B70fdc8;
case 0x70fdcb:c.instructions+=155;goto B70fdcb;
case 0x70fdcf:c.instructions+=154;goto B70fdcf;
case 0x70fdd3:c.instructions+=153;goto B70fdd3;
case 0x70fdd6:c.instructions+=152;goto B70fdd6;
case 0x70fdd9:c.instructions+=151;goto B70fdd9;
case 0x70fddc:c.instructions+=150;goto B70fddc;
case 0x70fddf:c.instructions+=149;goto B70fddf;
case 0x70fde6:c.instructions+=148;goto B70fde6;
case 0x70fded:c.instructions+=147;goto B70fded;
case 0x70fdf0:c.instructions+=146;goto B70fdf0;
case 0x70fdf3:c.instructions+=145;goto B70fdf3;
case 0x70fdf6:c.instructions+=144;goto B70fdf6;
case 0x70fdf9:c.instructions+=143;goto B70fdf9;
case 0x70fdfc:c.instructions+=142;goto B70fdfc;
case 0x70fe00:c.instructions+=141;goto B70fe00;
case 0x70fe04:c.instructions+=140;goto B70fe04;
case 0x70fe07:c.instructions+=139;goto B70fe07;
case 0x70fe0a:c.instructions+=138;goto B70fe0a;
case 0x70fe0d:c.instructions+=137;goto B70fe0d;
case 0x70fe10:c.instructions+=136;goto B70fe10;
case 0x70fe13:c.instructions+=135;goto B70fe13;
case 0x70fe16:c.instructions+=134;goto B70fe16;
case 0x70fe19:c.instructions+=133;goto B70fe19;
case 0x70fe1d:c.instructions+=132;goto B70fe1d;
case 0x70fe21:c.instructions+=131;goto B70fe21;
case 0x70fe25:c.instructions+=130;goto B70fe25;
case 0x70fe29:c.instructions+=129;goto B70fe29;
case 0x70fe30:c.instructions+=128;goto B70fe30;
case 0x70fe33:c.instructions+=127;goto B70fe33;
case 0x70fe36:c.instructions+=126;goto B70fe36;
case 0x70fe3a:c.instructions+=125;goto B70fe3a;
case 0x70fe3d:c.instructions+=124;goto B70fe3d;
case 0x70fe41:c.instructions+=123;goto B70fe41;
case 0x70fe45:c.instructions+=122;goto B70fe45;
case 0x70fe49:c.instructions+=121;goto B70fe49;
case 0x70fe4d:c.instructions+=120;goto B70fe4d;
case 0x70fe50:c.instructions+=119;goto B70fe50;
case 0x70fe53:c.instructions+=118;goto B70fe53;
case 0x70fe56:c.instructions+=117;goto B70fe56;
case 0x70fe59:c.instructions+=116;goto B70fe59;
case 0x70fe5d:c.instructions+=115;goto B70fe5d;
case 0x70fe60:c.instructions+=114;goto B70fe60;
case 0x70fe64:c.instructions+=113;goto B70fe64;
case 0x70fe67:c.instructions+=112;goto B70fe67;
case 0x70fe6a:c.instructions+=111;goto B70fe6a;
case 0x70fe6d:c.instructions+=110;goto B70fe6d;
case 0x70fe71:c.instructions+=109;goto B70fe71;
case 0x70fe75:c.instructions+=108;goto B70fe75;
case 0x70fe79:c.instructions+=107;goto B70fe79;
case 0x70fe7c:c.instructions+=106;goto B70fe7c;
case 0x70fe7f:c.instructions+=105;goto B70fe7f;
case 0x70fe82:c.instructions+=104;goto B70fe82;
case 0x70fe86:c.instructions+=103;goto B70fe86;
case 0x70fe8a:c.instructions+=102;goto B70fe8a;
case 0x70fe8d:c.instructions+=101;goto B70fe8d;
case 0x70fe91:c.instructions+=100;goto B70fe91;
case 0x70fe94:c.instructions+=99;goto B70fe94;
case 0x70fe97:c.instructions+=98;goto B70fe97;
case 0x70fe9a:c.instructions+=97;goto B70fe9a;
case 0x70fe9e:c.instructions+=96;goto B70fe9e;
case 0x70fea2:c.instructions+=95;goto B70fea2;
case 0x70fea6:c.instructions+=94;goto B70fea6;
case 0x70fea9:c.instructions+=93;goto B70fea9;
case 0x70feac:c.instructions+=92;goto B70feac;
case 0x70feaf:c.instructions+=91;goto B70feaf;
case 0x70feb3:c.instructions+=90;goto B70feb3;
case 0x70feb7:c.instructions+=89;goto B70feb7;
case 0x70feba:c.instructions+=88;goto B70feba;
case 0x70febe:c.instructions+=87;goto B70febe;
case 0x70fec1:c.instructions+=86;goto B70fec1;
case 0x70fec4:c.instructions+=85;goto B70fec4;
case 0x70fec7:c.instructions+=84;goto B70fec7;
case 0x70feca:c.instructions+=83;goto B70feca;
case 0x70fece:c.instructions+=82;goto B70fece;
case 0x70fed2:c.instructions+=81;goto B70fed2;
case 0x70fed9:c.instructions+=80;goto B70fed9;
case 0x70fedd:c.instructions+=79;goto B70fedd;
case 0x70fee0:c.instructions+=78;goto B70fee0;
case 0x70fee3:c.instructions+=77;goto B70fee3;
case 0x70fee6:c.instructions+=76;goto B70fee6;
case 0x70feea:c.instructions+=75;goto B70feea;
case 0x70feee:c.instructions+=74;goto B70feee;
case 0x70fef2:c.instructions+=73;goto B70fef2;
case 0x70fef9:c.instructions+=72;goto B70fef9;
case 0x70fefc:c.instructions+=71;goto B70fefc;
case 0x70feff:c.instructions+=70;goto B70feff;
case 0x70ff02:c.instructions+=69;goto B70ff02;
case 0x70ff06:c.instructions+=68;goto B70ff06;
case 0x70ff0a:c.instructions+=67;goto B70ff0a;
case 0x70ff11:c.instructions+=66;goto B70ff11;
case 0x70ff14:c.instructions+=65;goto B70ff14;
case 0x70ff18:c.instructions+=64;goto B70ff18;
case 0x70ff1b:c.instructions+=63;goto B70ff1b;
case 0x70ff1e:c.instructions+=62;goto B70ff1e;
case 0x70ff21:c.instructions+=61;goto B70ff21;
case 0x70ff25:c.instructions+=60;goto B70ff25;
case 0x70ff29:c.instructions+=59;goto B70ff29;
case 0x70ff2d:c.instructions+=58;goto B70ff2d;
case 0x70ff30:c.instructions+=57;goto B70ff30;
case 0x70ff33:c.instructions+=56;goto B70ff33;
case 0x70ff36:c.instructions+=55;goto B70ff36;
case 0x70ff39:c.instructions+=54;goto B70ff39;
case 0x70ff3d:c.instructions+=53;goto B70ff3d;
case 0x70ff41:c.instructions+=52;goto B70ff41;
case 0x70ff45:c.instructions+=51;goto B70ff45;
case 0x70ff48:c.instructions+=50;goto B70ff48;
case 0x70ff4b:c.instructions+=49;goto B70ff4b;
case 0x70ff4e:c.instructions+=48;goto B70ff4e;
case 0x70ff52:c.instructions+=47;goto B70ff52;
case 0x70ff56:c.instructions+=46;goto B70ff56;
case 0x70ff5a:c.instructions+=45;goto B70ff5a;
case 0x70ff5d:c.instructions+=44;goto B70ff5d;
case 0x70ff60:c.instructions+=43;goto B70ff60;
case 0x70ff63:c.instructions+=42;goto B70ff63;
case 0x70ff66:c.instructions+=41;goto B70ff66;
case 0x70ff6a:c.instructions+=40;goto B70ff6a;
case 0x70ff6e:c.instructions+=39;goto B70ff6e;
case 0x70ff72:c.instructions+=38;goto B70ff72;
case 0x70ff75:c.instructions+=37;goto B70ff75;
case 0x70ff78:c.instructions+=36;goto B70ff78;
case 0x70ff7b:c.instructions+=35;goto B70ff7b;
case 0x70ff7f:c.instructions+=34;goto B70ff7f;
case 0x70ff86:c.instructions+=33;goto B70ff86;
case 0x70ff8a:c.instructions+=32;goto B70ff8a;
case 0x70ff8d:c.instructions+=31;goto B70ff8d;
case 0x70ff90:c.instructions+=30;goto B70ff90;
case 0x70ff93:c.instructions+=29;goto B70ff93;
case 0x70ff96:c.instructions+=28;goto B70ff96;
case 0x70ff9a:c.instructions+=27;goto B70ff9a;
case 0x70ff9e:c.instructions+=26;goto B70ff9e;
case 0x70ffa2:c.instructions+=25;goto B70ffa2;
case 0x70ffa5:c.instructions+=24;goto B70ffa5;
case 0x70ffa8:c.instructions+=23;goto B70ffa8;
case 0x70ffab:c.instructions+=22;goto B70ffab;
case 0x70ffaf:c.instructions+=21;goto B70ffaf;
case 0x70ffb2:c.instructions+=20;goto B70ffb2;
case 0x70ffb5:c.instructions+=19;goto B70ffb5;
case 0x70ffb8:c.instructions+=18;goto B70ffb8;
case 0x70ffbc:c.instructions+=17;goto B70ffbc;
case 0x70ffbf:c.instructions+=16;goto B70ffbf;
case 0x70ffc3:c.instructions+=15;goto B70ffc3;
case 0x70ffc7:c.instructions+=14;goto B70ffc7;
case 0x70ffcb:c.instructions+=13;goto B70ffcb;
case 0x70ffcf:c.instructions+=12;goto B70ffcf;
case 0x70ffd4:c.instructions+=11;goto B70ffd4;
case 0x70ffd8:c.instructions+=10;goto B70ffd8;
case 0x70ffdc:c.instructions+=9;goto B70ffdc;
case 0x70ffe1:c.instructions+=8;goto B70ffe1;
case 0x70ffe5:c.instructions+=7;goto B70ffe5;
case 0x70ffe9:c.instructions+=6;goto B70ffe9;
case 0x70ffed:c.instructions+=5;goto B70ffed;
case 0x70fff2:c.instructions+=4;goto B70fff2;
case 0x70fff6:c.instructions+=3;goto B70fff6;
case 0x70fffa:c.instructions+=2;goto B70fffa;
case 0x70fffe:c.instructions+=1;goto B70fffe;
default:missing_instruction(c.pc);}
B70f001:L70f001:{c.instructions+=15;NFSU2_TR(0x70f001);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B70f003:{NFSU2_TR(0x70f003);
__builtin_memmove((R+4),(R+0),4);
}
B70f005:{NFSU2_TR(0x70f005);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B70f007:{NFSU2_TR(0x70f007);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7full))));
}
B70f00a:{NFSU2_TR(0x70f00a);
__builtin_memmove((R+12),(R+0),1);
}
B70f00c:{NFSU2_TR(0x70f00c);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B70f00f:{NFSU2_TR(0x70f00f);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+24))));
}
B70f011:{NFSU2_TR(0x70f011);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70f014:{NFSU2_TR(0x70f014);
w4(R+4,shl<u32>(r4(R+4),u64(u32(0x1ull))));
}
B70f016:{NFSU2_TR(0x70f016);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x1ull))));
}
B70f019:{NFSU2_TR(0x70f019);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+12))));
}
B70f01b:{NFSU2_TR(0x70f01b);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),2);
s2(u32(r4(U+4)),r2(U+8));
}
B70f01f:{NFSU2_TR(0x70f01f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B70f020:{NFSU2_TR(0x70f020);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x40ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x40ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70f023:{NFSU2_TR(0x70f023);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x70efcdu,70e);}
}
B70f025:L70f025:{c.instructions+=5;NFSU2_TR(0x70f025);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70f026:{NFSU2_TR(0x70f026);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70f027:{NFSU2_TR(0x70f027);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70f028:{NFSU2_TR(0x70f028);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70f029:{NFSU2_TR(0x70f029);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70f02a:L70f02a:{c.instructions+=7;NFSU2_TR(0x70f02a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f02b:{NFSU2_TR(0x70f02b);
__builtin_memmove((R+20),(R+16),4);
}
B70f02d:{NFSU2_TR(0x70f02d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f02e:{NFSU2_TR(0x70f02e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70f031:{NFSU2_TR(0x70f031);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f032:{NFSU2_TR(0x70f032);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70f035:{NFSU2_TR(0x70f035);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f036:L70f036:{c.instructions+=7;NFSU2_TR(0x70f036);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70f039:{NFSU2_TR(0x70f039);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70f03c:{NFSU2_TR(0x70f03c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70f03f:{NFSU2_TR(0x70f03f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B70f042:{NFSU2_TR(0x70f042);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B70f044:{NFSU2_TR(0x70f044);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B70f046:{NFSU2_TR(0x70f046);
if(r1(R+518)){{goto L70f06b;}}
}
B70f048:L70f048:{c.instructions+=14;NFSU2_TR(0x70f048);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B70f04a:{NFSU2_TR(0x70f04a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70f04d:{NFSU2_TR(0x70f04d);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B70f04f:{NFSU2_TR(0x70f04f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7full))));
}
B70f052:{NFSU2_TR(0x70f052);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70f055:{NFSU2_TR(0x70f055);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B70f058:{NFSU2_TR(0x70f058);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B70f05a:{NFSU2_TR(0x70f05a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70f05d:{NFSU2_TR(0x70f05d);
__builtin_memmove((R+0),(R+12),1);
}
B70f05f:{NFSU2_TR(0x70f05f);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B70f061:{NFSU2_TR(0x70f061);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B70f063:{NFSU2_TR(0x70f063);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7full))));
}
B70f066:{NFSU2_TR(0x70f066);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),1);
s1(u32(r4(U+4)),r1(U+8));
}
B70f069:{NFSU2_TR(0x70f069);
{goto L70f088;}
}
B70f06b:L70f06b:{c.instructions+=11;NFSU2_TR(0x70f06b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B70f06e:{NFSU2_TR(0x70f06e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f06f:{NFSU2_TR(0x70f06f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B70f072:{NFSU2_TR(0x70f072);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f073:{NFSU2_TR(0x70f073);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70f076:{NFSU2_TR(0x70f076);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70f078:{NFSU2_TR(0x70f078);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70f07b:{NFSU2_TR(0x70f07b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7full))));
}
B70f07e:{NFSU2_TR(0x70f07e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f07f:{NFSU2_TR(0x70f07f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f080:{NFSU2_TR(0x70f080);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70f085ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70f02au);}goto L70f02a;}
}
B70f085:L70f085:{c.instructions+=1;NFSU2_TR(0x70f085);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B70f088:L70f088:{c.instructions+=3;NFSU2_TR(0x70f088);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70f08b:{NFSU2_TR(0x70f08b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B70f08d:{NFSU2_TR(0x70f08d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70f09e;}}
}
B70f08f:L70f08f:{c.instructions+=6;NFSU2_TR(0x70f08f);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70f091:{NFSU2_TR(0x70f091);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B70f092:{NFSU2_TR(0x70f092);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7full))));
}
B70f095:{NFSU2_TR(0x70f095);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B70f099:{NFSU2_TR(0x70f099);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70f09c:{NFSU2_TR(0x70f09c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70f036u);}goto L70f036;}
}
B70f09e:L70f09e:{c.instructions+=21;NFSU2_TR(0x70f09e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70f0a1:{NFSU2_TR(0x70f0a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70f0a4:{NFSU2_TR(0x70f0a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70f0a7:{NFSU2_TR(0x70f0a7);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B70f0ab:{NFSU2_TR(0x70f0ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B70f0ad:{NFSU2_TR(0x70f0ad);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B70f0b1:{NFSU2_TR(0x70f0b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70f0b4:{NFSU2_TR(0x70f0b4);
w4(R+8,shr<u32>(r4(R+8),u64(u32(0x1ull))));
}
B70f0b6:{NFSU2_TR(0x70f0b6);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7full))));
}
B70f0b9:{NFSU2_TR(0x70f0b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B70f0bc:{NFSU2_TR(0x70f0bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B70f0be:{NFSU2_TR(0x70f0be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70f0c1:{NFSU2_TR(0x70f0c1);
w1(R+12,u8(u32(r1(R+12))+u32(u8(0x1ull))));
}
B70f0c3:{NFSU2_TR(0x70f0c3);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70f0c5:{NFSU2_TR(0x70f0c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70f0c6:{NFSU2_TR(0x70f0c6);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7full))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70f0c9:{NFSU2_TR(0x70f0c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70f0ca:{NFSU2_TR(0x70f0ca);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B70f0cd:{NFSU2_TR(0x70f0cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70f0ce:{NFSU2_TR(0x70f0ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B70f0cf:{NFSU2_TR(0x70f0cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70f0d0:L70f0d0:{c.instructions+=5;NFSU2_TR(0x70f0d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f0d1:{NFSU2_TR(0x70f0d1);
__builtin_memmove((R+20),(R+16),4);
}
B70f0d3:{NFSU2_TR(0x70f0d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70f0d6:{NFSU2_TR(0x70f0d6);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffff00ull))));
}
B70f0db:{NFSU2_TR(0x70f0db);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f0dc:L70f0dc:{c.instructions+=9;NFSU2_TR(0x70f0dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70f0df:{NFSU2_TR(0x70f0df);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70f0e1:{NFSU2_TR(0x70f0e1);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7full))));
}
B70f0e4:{NFSU2_TR(0x70f0e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70f0e7:{NFSU2_TR(0x70f0e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B70f0ea:{NFSU2_TR(0x70f0ea);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B70f0ee:{NFSU2_TR(0x70f0ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f0ef:{NFSU2_TR(0x70f0ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70f0f2:{NFSU2_TR(0x70f0f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70f0f7ull));
TAIL_STATIC(0x70d801u,70d);
}
B70f0f7:L70f0f7:{c.instructions+=4;NFSU2_TR(0x70f0f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70f0f9:{NFSU2_TR(0x70f0f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70f0fa:{NFSU2_TR(0x70f0fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70f0fb:{NFSU2_TR(0x70f0fb);
if(r1(R+518)){{goto L70f102;}}
}
B70f0fd:L70f0fd:{c.instructions+=2;NFSU2_TR(0x70f0fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70f100:{NFSU2_TR(0x70f100);
{goto L70f104;}
}
B70f102:L70f102:{c.instructions+=1;NFSU2_TR(0x70f102);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B70f104:L70f104:{c.instructions+=2;NFSU2_TR(0x70f104);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B70f106:{NFSU2_TR(0x70f106);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70f0dcu);}goto L70f0dc;}}
}
B70f108:L70f108:{c.instructions+=5;NFSU2_TR(0x70f108);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70f10a:{NFSU2_TR(0x70f10a);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7full))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70f10d:{NFSU2_TR(0x70f10d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70f10e:{NFSU2_TR(0x70f10e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B70f10f:{NFSU2_TR(0x70f10f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70f110:L70f110:{c.instructions+=7;NFSU2_TR(0x70f110);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f111:{NFSU2_TR(0x70f111);
__builtin_memmove((R+20),(R+16),4);
}
B70f113:{NFSU2_TR(0x70f113);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70f116:{NFSU2_TR(0x70f116);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B70f118:{NFSU2_TR(0x70f118);
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
B70f119:{NFSU2_TR(0x70f119);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70f11c:{NFSU2_TR(0x70f11c);
if(r1(R+519)){{goto L70f16c;}}
}
B70f11e:L70f11e:{c.instructions+=4;NFSU2_TR(0x70f11e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f11f:{NFSU2_TR(0x70f11f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70f122:{NFSU2_TR(0x70f122);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f123:{NFSU2_TR(0x70f123);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f124:L70f124:{c.instructions+=13;NFSU2_TR(0x70f124);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70f127:{NFSU2_TR(0x70f127);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70f12a:{NFSU2_TR(0x70f12a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70f12d:{NFSU2_TR(0x70f12d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r1(U+0))));
}
B70f12f:{NFSU2_TR(0x70f12f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70f132:{NFSU2_TR(0x70f132);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B70f135:{NFSU2_TR(0x70f135);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B70f139:{NFSU2_TR(0x70f139);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x1ull))));
}
B70f13c:{NFSU2_TR(0x70f13c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70f140:{NFSU2_TR(0x70f140);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f141:{NFSU2_TR(0x70f141);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f142:{NFSU2_TR(0x70f142);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f143:{NFSU2_TR(0x70f143);
if(r1(R+518)){{goto L70f14c;}}
}
B70f145:L70f145:{c.instructions+=1;NFSU2_TR(0x70f145);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70f14aull));
TAIL_STATIC(0x707ba1u,707);
}
B70f14a:L70f14a:{c.instructions+=1;NFSU2_TR(0x70f14a);
{goto L70f151;}
}
B70f14c:L70f14c:{c.instructions+=1;NFSU2_TR(0x70f14c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70f151ull));
TAIL_STATIC(0x707a10u,707);
}
B70f151:L70f151:{c.instructions+=3;NFSU2_TR(0x70f151);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B70f154:{NFSU2_TR(0x70f154);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70f156:{NFSU2_TR(0x70f156);
if(r1(R+518)){{goto L70f15d;}}
}
B70f158:L70f158:{c.instructions+=2;NFSU2_TR(0x70f158);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70f15b:{NFSU2_TR(0x70f15b);
{goto L70f15f;}
}
B70f15d:L70f15d:{c.instructions+=1;NFSU2_TR(0x70f15d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B70f15f:L70f15f:{c.instructions+=4;NFSU2_TR(0x70f15f);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70f161:{NFSU2_TR(0x70f161);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7full))));
}
B70f164:{NFSU2_TR(0x70f164);
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
B70f167:{NFSU2_TR(0x70f167);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70f124u);}goto L70f124;}}
}
B70f169:L70f169:{c.instructions+=3;NFSU2_TR(0x70f169);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70f16a:{NFSU2_TR(0x70f16a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70f16b:{NFSU2_TR(0x70f16b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70f16c:L70f16c:{c.instructions+=2;NFSU2_TR(0x70f16c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B70f16d:{NFSU2_TR(0x70f16d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70f16e:L70f16e:{c.instructions+=6;NFSU2_TR(0x70f16e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f16f:{NFSU2_TR(0x70f16f);
__builtin_memmove((R+20),(R+16),4);
}
B70f171:{NFSU2_TR(0x70f171);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70f174:{NFSU2_TR(0x70f174);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f175:{NFSU2_TR(0x70f175);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f176:{NFSU2_TR(0x70f176);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9c60),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70f17cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70f17c:L70f17c:{c.instructions+=4;NFSU2_TR(0x70f17c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70f17f:{NFSU2_TR(0x70f17f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x542ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70f185:{NFSU2_TR(0x70f185);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3a0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70f18b:{NFSU2_TR(0x70f18b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70f192:L70f192:{c.instructions+=3;NFSU2_TR(0x70f192);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x7c61e4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70f199:{NFSU2_TR(0x70f199);
__builtin_memmove((R+24),(R+4),4);
}
B70f19b:{NFSU2_TR(0x70f19b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70f1a2:L70f1a2:{c.instructions+=2;NFSU2_TR(0x70f1a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70f1a5:{NFSU2_TR(0x70f1a5);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B70f1a7:L70f1a7:{c.instructions+=7;NFSU2_TR(0x70f1a7);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B70f1ab:{NFSU2_TR(0x70f1ab);
u8 U[32];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B70f1af:{NFSU2_TR(0x70f1af);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
}
B70f1b4:{NFSU2_TR(0x70f1b4);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B70f1b7:{NFSU2_TR(0x70f1b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+0))));
}
B70f1b9:{NFSU2_TR(0x70f1b9);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70f1be:{NFSU2_TR(0x70f1be);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70f1c5;}}
}
B70f1c0:L70f1c0:{c.instructions+=1;NFSU2_TR(0x70f1c0);
w4(R+0,u32(0xffull));
}
B70f1c5:L70f1c5:{c.instructions+=2;NFSU2_TR(0x70f1c5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B70f1c8:{NFSU2_TR(0x70f1c8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L70f1cd;}}
}
B70f1ca:L70f1ca:{c.instructions+=2;NFSU2_TR(0x70f1ca);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B70f1cc:{NFSU2_TR(0x70f1cc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B70f1cd:L70f1cd:{c.instructions+=5;NFSU2_TR(0x70f1cd);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),1);
s1(u32(r4(U+4)),r1(U+8));
}
B70f1d0:{NFSU2_TR(0x70f1d0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B70f1d1:{NFSU2_TR(0x70f1d1);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x18ull))));
}
B70f1d4:{NFSU2_TR(0x70f1d4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x5ull))));
}
B70f1d7:{NFSU2_TR(0x70f1d7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70f1a7u);}goto L70f1a7;}}
}
B70f1d9:L70f1d9:{c.instructions+=4;NFSU2_TR(0x70f1d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70f1dd:{NFSU2_TR(0x70f1dd);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x5ull))));
}
B70f1e0:{NFSU2_TR(0x70f1e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70f1e3:{NFSU2_TR(0x70f1e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70f1a2u);}goto L70f1a2;}}
}
B70f1e5:L70f1e5:{c.instructions+=4;NFSU2_TR(0x70f1e5);
w1(R+512,carry<u32>(r4(R+28),u32(0xbull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xbull))));
}
B70f1e8:{NFSU2_TR(0x70f1e8);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
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
B70f1eb:{NFSU2_TR(0x70f1eb);
__builtin_memmove((R+4),(R+24),4);
}
B70f1ed:{NFSU2_TR(0x70f1ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70f192u);}goto L70f192;}}
}
B70f1ef:L70f1ef:{c.instructions+=4;NFSU2_TR(0x70f1ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70f1f0:{NFSU2_TR(0x70f1f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70f1f1:{NFSU2_TR(0x70f1f1);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70f1f2:{NFSU2_TR(0x70f1f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70f1f3:L70f1f3:{c.instructions+=11;NFSU2_TR(0x70f1f3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f1f4:{NFSU2_TR(0x70f1f4);
__builtin_memmove((R+20),(R+16),4);
}
B70f1f6:{NFSU2_TR(0x70f1f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B70f1f9:{NFSU2_TR(0x70f1f9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f1fa:{NFSU2_TR(0x70f1fa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f1fb:{NFSU2_TR(0x70f1fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70f1fe:{NFSU2_TR(0x70f1fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70f204:{NFSU2_TR(0x70f204);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f205:{NFSU2_TR(0x70f205);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B70f207:{NFSU2_TR(0x70f207);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70f20a:{NFSU2_TR(0x70f20a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x7c6259ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70f211:L70f211:{c.instructions+=5;NFSU2_TR(0x70f211);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70f214:{NFSU2_TR(0x70f214);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B70f218:{NFSU2_TR(0x70f218);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f219:{NFSU2_TR(0x70f219);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f21a:{NFSU2_TR(0x70f21a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70f21full));
TAIL_STATIC(0x70d801u,70d);
}
B70f21f:L70f21f:{c.instructions+=4;NFSU2_TR(0x70f21f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70f221:{NFSU2_TR(0x70f221);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70f222:{NFSU2_TR(0x70f222);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70f223:{NFSU2_TR(0x70f223);
if(r1(R+518)){{goto L70f23f;}}
}
B70f225:L70f225:{c.instructions+=3;NFSU2_TR(0x70f225);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f227:{NFSU2_TR(0x70f227);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f228:{NFSU2_TR(0x70f228);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70f22dull));
TAIL_STATIC(0x707c18u,707);
}
B70f22d:L70f22d:{c.instructions+=6;NFSU2_TR(0x70f22d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70f22e:{NFSU2_TR(0x70f22e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70f22f:{NFSU2_TR(0x70f22f);
w1(R+0,shl<u8>(r1(R+0),u64(u32(0x1ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
}
B70f231:{NFSU2_TR(0x70f231);
u8 U[12];
w4(U+0,u32(u32(u32(0x706ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B70f238:{NFSU2_TR(0x70f238);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B70f23a:{NFSU2_TR(0x70f23a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70f23f;}}
}
B70f23c:L70f23c:{c.instructions+=1;NFSU2_TR(0x70f23c);
u8 U[1];
w1(U+0,u8(0x1ull));
s1(u32(r4(R+4)),r1(U+0));
}
B70f23f:L70f23f:{c.instructions+=5;NFSU2_TR(0x70f23f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70f242:{NFSU2_TR(0x70f242);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+0,u32(r1(U+0)));
}
B70f245:{NFSU2_TR(0x70f245);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f246:{NFSU2_TR(0x70f246);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f247:{NFSU2_TR(0x70f247);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70f24cull));
TAIL_STATIC(0x70d801u,70d);
}
B70f24c:L70f24c:{c.instructions+=4;NFSU2_TR(0x70f24c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70f24e:{NFSU2_TR(0x70f24e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70f24f:{NFSU2_TR(0x70f24f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70f250:{NFSU2_TR(0x70f250);
if(r1(R+518)){{goto L70f26c;}}
}
B70f252:L70f252:{c.instructions+=3;NFSU2_TR(0x70f252);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f254:{NFSU2_TR(0x70f254);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f255:{NFSU2_TR(0x70f255);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70f25aull));
TAIL_STATIC(0x707c18u,707);
}
B70f25a:L70f25a:{c.instructions+=6;NFSU2_TR(0x70f25a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70f25b:{NFSU2_TR(0x70f25b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70f25c:{NFSU2_TR(0x70f25c);
w1(R+0,shl<u8>(r1(R+0),u64(u32(0x1ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
}
B70f25e:{NFSU2_TR(0x70f25e);
u8 U[12];
w4(U+0,u32(u32(u32(0x704ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B70f265:{NFSU2_TR(0x70f265);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B70f267:{NFSU2_TR(0x70f267);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70f26c;}}
}
B70f269:L70f269:{c.instructions+=1;NFSU2_TR(0x70f269);
u8 U[1];
w1(U+0,u8(0x1ull));
s1(u32(r4(R+4)),r1(U+0));
}
B70f26c:L70f26c:{c.instructions+=4;NFSU2_TR(0x70f26c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x11ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70f270:{NFSU2_TR(0x70f270);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B70f271:{NFSU2_TR(0x70f271);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x7c627bull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x7c627bull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B70f278:{NFSU2_TR(0x70f278);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70f211u);}goto L70f211;}}
}
B70f27a:L70f27a:{c.instructions+=2;NFSU2_TR(0x70f27a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x708ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70f280:{NFSU2_TR(0x70f280);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x7c625aull));
s4(u32(r4(U+0)),r4(U+4));
}
B70f287:L70f287:{c.instructions+=3;NFSU2_TR(0x70f287);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70f28a:{NFSU2_TR(0x70f28a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B70f28c:{NFSU2_TR(0x70f28c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70f28f:L70f28f:{c.instructions+=5;NFSU2_TR(0x70f28f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70f292:{NFSU2_TR(0x70f292);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+0,u32(r1(U+0)));
}
B70f295:{NFSU2_TR(0x70f295);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f296:{NFSU2_TR(0x70f296);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70f299:{NFSU2_TR(0x70f299);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70f29eull));
TAIL_STATIC(0x70d801u,70d);
}
B70f29e:L70f29e:{c.instructions+=4;NFSU2_TR(0x70f29e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70f2a0:{NFSU2_TR(0x70f2a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70f2a1:{NFSU2_TR(0x70f2a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70f2a2:{NFSU2_TR(0x70f2a2);
if(r1(R+518)){{goto L70f2bb;}}
}
B70f2a4:L70f2a4:{c.instructions+=3;NFSU2_TR(0x70f2a4);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f2a6:{NFSU2_TR(0x70f2a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70f2a9:{NFSU2_TR(0x70f2a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70f2aeull));
TAIL_STATIC(0x707c18u,707);
}
B70f2ae:L70f2ae:{c.instructions+=5;NFSU2_TR(0x70f2ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70f2af:{NFSU2_TR(0x70f2af);
w1(R+0,shl<u8>(r1(R+0),u64(u32(0x1ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
}
B70f2b1:{NFSU2_TR(0x70f2b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70f2b2:{NFSU2_TR(0x70f2b2);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),1);
s1(u32(r4(U+4)),r1(U+8));
}
B70f2b5:{NFSU2_TR(0x70f2b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70f2bb;}}
}
B70f2b7:L70f2b7:{c.instructions+=1;NFSU2_TR(0x70f2b7);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
w1(U+8,u8(0x1ull));
s1(u32(r4(U+4)),r1(U+8));
}
B70f2bb:L70f2bb:{c.instructions+=4;NFSU2_TR(0x70f2bb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B70f2bc:{NFSU2_TR(0x70f2bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70f2bf:{NFSU2_TR(0x70f2bf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x7ull))));
}
B70f2c2:{NFSU2_TR(0x70f2c2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70f28fu);}goto L70f28f;}}
}
B70f2c4:L70f2c4:{c.instructions+=4;NFSU2_TR(0x70f2c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x11ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70f2c8:{NFSU2_TR(0x70f2c8);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x7ull))));
}
B70f2cb:{NFSU2_TR(0x70f2cb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x7c627cull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x7c627cull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B70f2d2:{NFSU2_TR(0x70f2d2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70f287u);}goto L70f287;}}
}
B70f2d4:L70f2d4:{c.instructions+=2;NFSU2_TR(0x70f2d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x71cull))));
__builtin_memmove((R+28),(U+0),4);
}
B70f2da:{NFSU2_TR(0x70f2da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x7c6261ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70f2e1:L70f2e1:{c.instructions+=2;NFSU2_TR(0x70f2e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70f2e4:{NFSU2_TR(0x70f2e4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B70f2e6:L70f2e6:{c.instructions+=4;NFSU2_TR(0x70f2e6);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w4(R+0,u32(r1(U+0)));
}
B70f2e9:{NFSU2_TR(0x70f2e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f2ea:{NFSU2_TR(0x70f2ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70f2ed:{NFSU2_TR(0x70f2ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70f2f2ull));
TAIL_STATIC(0x70d801u,70d);
}
B70f2f2:L70f2f2:{c.instructions+=4;NFSU2_TR(0x70f2f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70f2f4:{NFSU2_TR(0x70f2f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70f2f5:{NFSU2_TR(0x70f2f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70f2f6:{NFSU2_TR(0x70f2f6);
if(r1(R+518)){{goto L70f30f;}}
}
B70f2f8:L70f2f8:{c.instructions+=3;NFSU2_TR(0x70f2f8);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f2fa:{NFSU2_TR(0x70f2fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70f2fd:{NFSU2_TR(0x70f2fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70f302ull));
TAIL_STATIC(0x707c18u,707);
}
B70f302:L70f302:{c.instructions+=5;NFSU2_TR(0x70f302);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70f303:{NFSU2_TR(0x70f303);
w1(R+0,shl<u8>(r1(R+0),u64(u32(0x1ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
}
B70f305:{NFSU2_TR(0x70f305);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70f306:{NFSU2_TR(0x70f306);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),1);
s1(u32(r4(U+4)),r1(U+8));
}
B70f309:{NFSU2_TR(0x70f309);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70f30f;}}
}
B70f30b:L70f30b:{c.instructions+=1;NFSU2_TR(0x70f30b);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
w1(U+8,u8(0x1ull));
s1(u32(r4(U+4)),r1(U+8));
}
B70f30f:L70f30f:{c.instructions+=4;NFSU2_TR(0x70f30f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B70f310:{NFSU2_TR(0x70f310);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B70f311:{NFSU2_TR(0x70f311);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x8ull))));
}
B70f314:{NFSU2_TR(0x70f314);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70f2e6u);}goto L70f2e6;}}
}
B70f316:L70f316:{c.instructions+=4;NFSU2_TR(0x70f316);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x11ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70f31a:{NFSU2_TR(0x70f31a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B70f31d:{NFSU2_TR(0x70f31d);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x7c6283ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x7c6283ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x7c6283ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B70f324:{NFSU2_TR(0x70f324);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70f2e1u);}goto L70f2e1;}}
}
B70f326:L70f326:{c.instructions+=5;NFSU2_TR(0x70f326);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70f327:{NFSU2_TR(0x70f327);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70f328:{NFSU2_TR(0x70f328);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70f329:{NFSU2_TR(0x70f329);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70f32a:{NFSU2_TR(0x70f32a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70f32b:L70f32b:{c.instructions+=13;NFSU2_TR(0x70f32b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f32c:{NFSU2_TR(0x70f32c);
__builtin_memmove((R+20),(R+16),4);
}
B70f32e:{NFSU2_TR(0x70f32e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x50ull))));
}
B70f331:{NFSU2_TR(0x70f331);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70f334:{NFSU2_TR(0x70f334);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70f338:{NFSU2_TR(0x70f338);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f339:{NFSU2_TR(0x70f339);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x736ull))));
__builtin_memmove((R+8),(U+0),4);
}
B70f33f:{NFSU2_TR(0x70f33f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x7a5ull))));
}
B70f344:{NFSU2_TR(0x70f344);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f345:{NFSU2_TR(0x70f345);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0xfffffff6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70f34c:{NFSU2_TR(0x70f34c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70f34f:{NFSU2_TR(0x70f34f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70f352:{NFSU2_TR(0x70f352);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f353:L70f353:{c.instructions+=5;NFSU2_TR(0x70f353);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70f356:{NFSU2_TR(0x70f356);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x46ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70f359:{NFSU2_TR(0x70f359);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70f35c:{NFSU2_TR(0x70f35c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70f35f:{NFSU2_TR(0x70f35f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70f366:L70f366:{c.instructions+=2;NFSU2_TR(0x70f366);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B70f368:{NFSU2_TR(0x70f368);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B70f36a:L70f36a:{c.instructions+=2;NFSU2_TR(0x70f36a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70f36d:{NFSU2_TR(0x70f36d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70f376;}}
}
B70f36f:L70f36f:{c.instructions+=2;NFSU2_TR(0x70f36f);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffb0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))&u32(u32(0x0ull))));
s4(u32(r4(U+8)),r4(U+12));
}
B70f374:{NFSU2_TR(0x70f374);
{goto L70f386;}
}
B70f376:L70f376:{c.instructions+=5;NFSU2_TR(0x70f376);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70f379:{NFSU2_TR(0x70f379);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B70f37b:{NFSU2_TR(0x70f37b);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+24,u32(r1(U+8)));
}
B70f37f:{NFSU2_TR(0x70f37f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B70f382:{NFSU2_TR(0x70f382);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffb0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B70f386:L70f386:{c.instructions+=4;NFSU2_TR(0x70f386);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffb0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+12))));
}
B70f38a:{NFSU2_TR(0x70f38a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B70f38b:{NFSU2_TR(0x70f38b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B70f38e:{NFSU2_TR(0x70f38e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70f36au);}goto L70f36a;}}
}
B70f390:L70f390:{c.instructions+=109;NFSU2_TR(0x70f390);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+0,u32(r1(U+0)));
}
B70f393:{NFSU2_TR(0x70f393);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B70f397:{NFSU2_TR(0x70f397);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B70f39b:{NFSU2_TR(0x70f39b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xffull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B70f3a1:{NFSU2_TR(0x70f3a1);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B70f3a2:{NFSU2_TR(0x70f3a2);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x70f3a2);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x70f3a2);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B70f3a4:{NFSU2_TR(0x70f3a4);
w1(R+8,u8(u32(r1(R+8))|u32(u8(0xffull))));
}
B70f3a7:{NFSU2_TR(0x70f3a7);
w1(R+8,u8(u32(r1(R+8))-u32(r1(R+0))));
}
B70f3a9:{NFSU2_TR(0x70f3a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70f3ac:{NFSU2_TR(0x70f3ac);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B70f3ae:{NFSU2_TR(0x70f3ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70f3b1:{NFSU2_TR(0x70f3b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70f3b4:{NFSU2_TR(0x70f3b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B70f3b7:{NFSU2_TR(0x70f3b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70f3ba:{NFSU2_TR(0x70f3ba);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B70f3bc:{NFSU2_TR(0x70f3bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70f3bf:{NFSU2_TR(0x70f3bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B70f3c2:{NFSU2_TR(0x70f3c2);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B70f3c4:{NFSU2_TR(0x70f3c4);
__builtin_memmove((R+0),(R+28),4);
}
B70f3c6:{NFSU2_TR(0x70f3c6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xffull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B70f3cc:{NFSU2_TR(0x70f3cc);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B70f3cd:{NFSU2_TR(0x70f3cd);
u8 U[56];
w8(U+0,u64(r4(R+12)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x70f3cd);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x70f3cd);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B70f3cf:{NFSU2_TR(0x70f3cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70f3d2:{NFSU2_TR(0x70f3d2);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B70f3d4:{NFSU2_TR(0x70f3d4);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70f3d7:{NFSU2_TR(0x70f3d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70f3da:{NFSU2_TR(0x70f3da);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B70f3dc:{NFSU2_TR(0x70f3dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70f3df:{NFSU2_TR(0x70f3df);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xffull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B70f3e5:{NFSU2_TR(0x70f3e5);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B70f3e7:{NFSU2_TR(0x70f3e7);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B70f3e8:{NFSU2_TR(0x70f3e8);
u8 U[56];
w8(U+0,u64(r4(R+28)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x70f3e8);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x70f3e8);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B70f3ea:{NFSU2_TR(0x70f3ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70f3ed:{NFSU2_TR(0x70f3ed);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B70f3ef:{NFSU2_TR(0x70f3ef);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B70f3f1:{NFSU2_TR(0x70f3f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70f3f4:{NFSU2_TR(0x70f3f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B70f3f7:{NFSU2_TR(0x70f3f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70f3fa:{NFSU2_TR(0x70f3fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70f3fd:{NFSU2_TR(0x70f3fd);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B70f3ff:{NFSU2_TR(0x70f3ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B70f402:{NFSU2_TR(0x70f402);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70f405:{NFSU2_TR(0x70f405);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70f408:{NFSU2_TR(0x70f408);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B70f40a:{NFSU2_TR(0x70f40a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70f40d:{NFSU2_TR(0x70f40d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xffull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B70f413:{NFSU2_TR(0x70f413);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70f416:{NFSU2_TR(0x70f416);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B70f418:{NFSU2_TR(0x70f418);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70f41b:{NFSU2_TR(0x70f41b);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B70f41f:{NFSU2_TR(0x70f41f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B70f421:{NFSU2_TR(0x70f421);
u8 U[56];
w8(U+0,u64(r4(R+12)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x70f421);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x70f421);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B70f423:{NFSU2_TR(0x70f423);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B70f425:{NFSU2_TR(0x70f425);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B70f427:{NFSU2_TR(0x70f427);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70f42a:{NFSU2_TR(0x70f42a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70f42d:{NFSU2_TR(0x70f42d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70f430:{NFSU2_TR(0x70f430);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70f433:{NFSU2_TR(0x70f433);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xffull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B70f439:{NFSU2_TR(0x70f439);
u8 U[56];
w8(U+0,u64(r4(R+12)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x70f439);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x70f439);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B70f43b:{NFSU2_TR(0x70f43b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B70f43d:{NFSU2_TR(0x70f43d);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B70f43f:{NFSU2_TR(0x70f43f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70f442:{NFSU2_TR(0x70f442);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70f445:{NFSU2_TR(0x70f445);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xffull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B70f44b:{NFSU2_TR(0x70f44b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B70f44c:{NFSU2_TR(0x70f44c);
u8 U[56];
w8(U+0,u64(r4(R+24)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x70f44c);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x70f44c);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B70f44e:{NFSU2_TR(0x70f44e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B70f450:{NFSU2_TR(0x70f450);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B70f452:{NFSU2_TR(0x70f452);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70f455:{NFSU2_TR(0x70f455);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70f458:{NFSU2_TR(0x70f458);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70f45b:{NFSU2_TR(0x70f45b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70f45e:{NFSU2_TR(0x70f45e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xffull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B70f464:{NFSU2_TR(0x70f464);
u8 U[56];
w8(U+0,u64(r4(R+24)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x70f464);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x70f464);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B70f466:{NFSU2_TR(0x70f466);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70f469:{NFSU2_TR(0x70f469);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B70f46b:{NFSU2_TR(0x70f46b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70f46e:{NFSU2_TR(0x70f46e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70f471:{NFSU2_TR(0x70f471);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B70f474:{NFSU2_TR(0x70f474);
__builtin_memmove((R+0),(R+24),4);
}
B70f476:{NFSU2_TR(0x70f476);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70f479:{NFSU2_TR(0x70f479);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xffull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B70f47f:{NFSU2_TR(0x70f47f);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70f482:{NFSU2_TR(0x70f482);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B70f484:{NFSU2_TR(0x70f484);
u8 U[56];
w8(U+0,u64(r4(R+12)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x70f484);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x70f484);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B70f486:{NFSU2_TR(0x70f486);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B70f488:{NFSU2_TR(0x70f488);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0xaull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70f48c:{NFSU2_TR(0x70f48c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x5aull))));
}
B70f48f:{NFSU2_TR(0x70f48f);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B70f491:{NFSU2_TR(0x70f491);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffabull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70f494:{NFSU2_TR(0x70f494);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70f497:{NFSU2_TR(0x70f497);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xffull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B70f49d:{NFSU2_TR(0x70f49d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B70f49e:{NFSU2_TR(0x70f49e);
u8 U[56];
w8(U+0,u64(r4(R+24)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x70f49e);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x70f49e);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B70f4a0:{NFSU2_TR(0x70f4a0);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B70f4a2:{NFSU2_TR(0x70f4a2);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B70f4a4:{NFSU2_TR(0x70f4a4);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70f4a7:{NFSU2_TR(0x70f4a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70f4aa:{NFSU2_TR(0x70f4aa);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xffull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B70f4b0:{NFSU2_TR(0x70f4b0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B70f4b1:{NFSU2_TR(0x70f4b1);
u8 U[56];
w8(U+0,u64(r4(R+28)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x70f4b1);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x70f4b1);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B70f4b3:{NFSU2_TR(0x70f4b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70f4b6:{NFSU2_TR(0x70f4b6);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x14ull))));
}
B70f4b9:{NFSU2_TR(0x70f4b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70f4bc:{NFSU2_TR(0x70f4bc);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B70f4be:{NFSU2_TR(0x70f4be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70f4c1:{NFSU2_TR(0x70f4c1);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffadull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70f4c4:{NFSU2_TR(0x70f4c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70f366u);}goto L70f366;}}
}
B70f4ca:L70f4ca:{c.instructions+=8;NFSU2_TR(0x70f4ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70f4cd:{NFSU2_TR(0x70f4cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70f4d0:{NFSU2_TR(0x70f4d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x9ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70f4d4:{NFSU2_TR(0x70f4d4);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B70f4d5:{NFSU2_TR(0x70f4d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70f4d8:{NFSU2_TR(0x70f4d8);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xffffffecull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xffffffecull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xffffffecull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B70f4dc:{NFSU2_TR(0x70f4dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70f4df:{NFSU2_TR(0x70f4df);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70f353u);}goto L70f353;}}
}
B70f4e5:L70f4e5:{c.instructions+=5;NFSU2_TR(0x70f4e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70f4e6:{NFSU2_TR(0x70f4e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70f4e7:{NFSU2_TR(0x70f4e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70f4e8:{NFSU2_TR(0x70f4e8);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70f4e9:{NFSU2_TR(0x70f4e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70f4ea:L70f4ea:{c.instructions+=8;NFSU2_TR(0x70f4ea);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f4eb:{NFSU2_TR(0x70f4eb);
__builtin_memmove((R+20),(R+16),4);
}
B70f4ed:{NFSU2_TR(0x70f4ed);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f4ee:{NFSU2_TR(0x70f4ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70f4f1:{NFSU2_TR(0x70f4f1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x150ull))));
}
B70f4f7:{NFSU2_TR(0x70f4f7);
u8 U[4];
w4(U+0,u32(0xcdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f4fc:{NFSU2_TR(0x70f4fc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f4fd:{NFSU2_TR(0x70f4fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70f502ull));
TAIL_STATIC(0x70d801u,70d);
}
B70f502:L70f502:{c.instructions+=4;NFSU2_TR(0x70f502);
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
B70f504:{NFSU2_TR(0x70f504);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70f505:{NFSU2_TR(0x70f505);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70f506:{NFSU2_TR(0x70f506);
if(r1(R+518)){{goto L70f5a9;}}
}
B70f50c:L70f50c:{c.instructions+=3;NFSU2_TR(0x70f50c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f50d:{NFSU2_TR(0x70f50d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f50e:{NFSU2_TR(0x70f50e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70f513ull));
TAIL_STATIC(0x70d87au,70d);
}
B70f513:L70f513:{c.instructions+=7;NFSU2_TR(0x70f513);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B70f515:{NFSU2_TR(0x70f515);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70f517:{NFSU2_TR(0x70f517);
u8 U[4];
w4(U+0,u32(0xabull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f51c:{NFSU2_TR(0x70f51c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B70f51d:{NFSU2_TR(0x70f51d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f51e:{NFSU2_TR(0x70f51e);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B70f520:{NFSU2_TR(0x70f520);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70f525ull));
TAIL_STATIC(0x70d801u,70d);
}
B70f525:L70f525:{c.instructions+=3;NFSU2_TR(0x70f525);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B70f528:{NFSU2_TR(0x70f528);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70f52a:{NFSU2_TR(0x70f52a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70f541;}}
}
B70f52c:L70f52c:{c.instructions+=3;NFSU2_TR(0x70f52c);
u8 U[4];
w4(U+0,u32(0x53ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f52e:{NFSU2_TR(0x70f52e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f52f:{NFSU2_TR(0x70f52f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70f534ull));
TAIL_STATIC(0x70d801u,70d);
}
B70f534:L70f534:{c.instructions+=8;NFSU2_TR(0x70f534);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70f535:{NFSU2_TR(0x70f535);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70f536:{NFSU2_TR(0x70f536);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f538:{NFSU2_TR(0x70f538);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70f539:{NFSU2_TR(0x70f539);
u8 U[6];
w1(R+512,u8((r4(R+4))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(R+4),r4(R+0)));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70f53b:{NFSU2_TR(0x70f53b);
__builtin_memmove((R+0),(R+24),4);
}
B70f53d:{NFSU2_TR(0x70f53d);
u8 U[39];
w1(U+34,u8(u32(r1(R+4))&u32(u8(0x1full))));
__builtin_memmove((U+35),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+34))));
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
w1(U+32,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+33,u8(u32(r1(R+512))^u32(r1(U+32))));
__builtin_memmove((U+0),(U+31),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+33))));
w1(U+2,u8(!(r1(U+31))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r1(U+34))!=(u8(0x0ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B70f53f:{NFSU2_TR(0x70f53f);
{goto L70f5a8;}
}
B70f541:L70f541:{c.instructions+=3;NFSU2_TR(0x70f541);
u8 U[4];
w4(U+0,u32(0xc7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f546:{NFSU2_TR(0x70f546);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f547:{NFSU2_TR(0x70f547);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70f54cull));
TAIL_STATIC(0x70d801u,70d);
}
B70f54c:L70f54c:{c.instructions+=4;NFSU2_TR(0x70f54c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70f54e:{NFSU2_TR(0x70f54e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70f54f:{NFSU2_TR(0x70f54f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70f550:{NFSU2_TR(0x70f550);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70f598;}}
}
B70f552:L70f552:{c.instructions+=3;NFSU2_TR(0x70f552);
u8 U[4];
w4(U+0,u32(0x8cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f557:{NFSU2_TR(0x70f557);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f558:{NFSU2_TR(0x70f558);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70f55dull));
TAIL_STATIC(0x70d801u,70d);
}
B70f55d:L70f55d:{c.instructions+=4;NFSU2_TR(0x70f55d);
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
B70f55f:{NFSU2_TR(0x70f55f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70f560:{NFSU2_TR(0x70f560);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70f561:{NFSU2_TR(0x70f561);
if(r1(R+518)){{goto L70f568;}}
}
B70f563:L70f563:{c.instructions+=2;NFSU2_TR(0x70f563);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70f566:{NFSU2_TR(0x70f566);
{goto L70f5a5;}
}
B70f568:L70f568:{c.instructions+=3;NFSU2_TR(0x70f568);
u8 U[4];
w4(U+0,u32(0x7dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f56a:{NFSU2_TR(0x70f56a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f56b:{NFSU2_TR(0x70f56b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70f570ull));
TAIL_STATIC(0x70d801u,70d);
}
B70f570:L70f570:{c.instructions+=4;NFSU2_TR(0x70f570);
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
B70f572:{NFSU2_TR(0x70f572);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70f573:{NFSU2_TR(0x70f573);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70f574:{NFSU2_TR(0x70f574);
if(r1(R+518)){{goto L70f57d;}}
}
B70f576:L70f576:{c.instructions+=3;NFSU2_TR(0x70f576);
__builtin_memmove((R+0),(R+24),4);
}
B70f578:{NFSU2_TR(0x70f578);
u8 U[45];
w4(U+37,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B70f57b:{NFSU2_TR(0x70f57b);
{goto L70f5a8;}
}
B70f57d:L70f57d:{c.instructions+=3;NFSU2_TR(0x70f57d);
u8 U[4];
w4(U+0,u32(0x68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f57f:{NFSU2_TR(0x70f57f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f580:{NFSU2_TR(0x70f580);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70f585ull));
TAIL_STATIC(0x70d801u,70d);
}
B70f585:L70f585:{c.instructions+=4;NFSU2_TR(0x70f585);
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
B70f587:{NFSU2_TR(0x70f587);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70f588:{NFSU2_TR(0x70f588);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70f589:{NFSU2_TR(0x70f589);
if(r1(R+518)){{goto L70f590;}}
}
B70f58b:L70f58b:{c.instructions+=2;NFSU2_TR(0x70f58b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70f58e:{NFSU2_TR(0x70f58e);
{goto L70f5a5;}
}
B70f590:L70f590:{c.instructions+=3;NFSU2_TR(0x70f590);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70f593:{NFSU2_TR(0x70f593);
u8 U[45];
w4(U+37,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B70f596:{NFSU2_TR(0x70f596);
{goto L70f5a8;}
}
B70f598:L70f598:{c.instructions+=3;NFSU2_TR(0x70f598);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f59a:{NFSU2_TR(0x70f59a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f59b:{NFSU2_TR(0x70f59b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70f5a0ull));
TAIL_STATIC(0x707c18u,707);
}
B70f5a0:L70f5a0:{c.instructions+=3;NFSU2_TR(0x70f5a0);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(r4(R+24)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B70f5a3:{NFSU2_TR(0x70f5a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70f5a4:{NFSU2_TR(0x70f5a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70f5a5:L70f5a5:{c.instructions+=1;NFSU2_TR(0x70f5a5);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B70f5a8:L70f5a8:{c.instructions+=1;NFSU2_TR(0x70f5a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70f5a9:L70f5a9:{c.instructions+=3;NFSU2_TR(0x70f5a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70f5aa:{NFSU2_TR(0x70f5aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B70f5ab:{NFSU2_TR(0x70f5ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70f5ac:L70f5ac:{c.instructions+=9;NFSU2_TR(0x70f5ac);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f5ad:{NFSU2_TR(0x70f5ad);
__builtin_memmove((R+20),(R+16),4);
}
B70f5af:{NFSU2_TR(0x70f5af);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f5b0:{NFSU2_TR(0x70f5b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70f5b4:{NFSU2_TR(0x70f5b4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f5b5:{NFSU2_TR(0x70f5b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70f5b8:{NFSU2_TR(0x70f5b8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f5b9:{NFSU2_TR(0x70f5b9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f5ba:{NFSU2_TR(0x70f5ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x72cull))));
__builtin_memmove((R+24),(U+0),4);
}
B70f5c0:L70f5c0:{c.instructions+=4;NFSU2_TR(0x70f5c0);
u8 U[4];
w4(U+0,u32(0xaeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f5c5:{NFSU2_TR(0x70f5c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x150ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70f5cb:{NFSU2_TR(0x70f5cb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f5cc:{NFSU2_TR(0x70f5cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70f5d1ull));
TAIL_STATIC(0x70d801u,70d);
}
B70f5d1:L70f5d1:{c.instructions+=4;NFSU2_TR(0x70f5d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70f5d3:{NFSU2_TR(0x70f5d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70f5d4:{NFSU2_TR(0x70f5d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70f5d5:{NFSU2_TR(0x70f5d5);
if(r1(R+518)){{goto L70f606;}}
}
B70f5d7:L70f5d7:{c.instructions+=3;NFSU2_TR(0x70f5d7);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f5d9:{NFSU2_TR(0x70f5d9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f5da:{NFSU2_TR(0x70f5da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70f5dfull));
TAIL_STATIC(0x707c18u,707);
}
B70f5df:L70f5df:{c.instructions+=7;NFSU2_TR(0x70f5df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70f5e2:{NFSU2_TR(0x70f5e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70f5e3:{NFSU2_TR(0x70f5e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70f5e4:{NFSU2_TR(0x70f5e4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B70f5e6:{NFSU2_TR(0x70f5e6);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B70f5e8:{NFSU2_TR(0x70f5e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70f5eb:{NFSU2_TR(0x70f5eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7c62a9ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70f5f2:L70f5f2:{c.instructions+=9;NFSU2_TR(0x70f5f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B70f5f5:{NFSU2_TR(0x70f5f5);
u8 U[13];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B70f5f9:{NFSU2_TR(0x70f5f9);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B70f5fb:{NFSU2_TR(0x70f5fb);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B70f5fe:{NFSU2_TR(0x70f5fe);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B70f5ff:{NFSU2_TR(0x70f5ff);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B70f600:{NFSU2_TR(0x70f600);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B70f601:{NFSU2_TR(0x70f601);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B70f604:{NFSU2_TR(0x70f604);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70f5f2u);}goto L70f5f2;}}
}
B70f606:L70f606:{c.instructions+=4;NFSU2_TR(0x70f606);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x150ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70f60c:{NFSU2_TR(0x70f60c);
u8 U[4];
w4(U+0,u32(0xfeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f611:{NFSU2_TR(0x70f611);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f612:{NFSU2_TR(0x70f612);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70f617ull));
TAIL_STATIC(0x70d801u,70d);
}
B70f617:L70f617:{c.instructions+=4;NFSU2_TR(0x70f617);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70f619:{NFSU2_TR(0x70f619);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70f61a:{NFSU2_TR(0x70f61a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70f61b:{NFSU2_TR(0x70f61b);
if(r1(R+518)){{goto L70f669;}}
}
B70f61d:L70f61d:{c.instructions+=1;NFSU2_TR(0x70f61d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B70f61f:L70f61f:{c.instructions+=2;NFSU2_TR(0x70f61f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f620:{NFSU2_TR(0x70f620);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70f625ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70f4eau);}goto L70f4ea;}
}
B70f625:L70f625:{c.instructions+=4;NFSU2_TR(0x70f625);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70f626:{NFSU2_TR(0x70f626);
u8 U[13];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(r1(U+12)));
}
B70f62b:{NFSU2_TR(0x70f62b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B70f62d:{NFSU2_TR(0x70f62d);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L70f633;}}
}
B70f62f:L70f62f:{c.instructions+=2;NFSU2_TR(0x70f62f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B70f631:{NFSU2_TR(0x70f631);
{goto L70f63e;}
}
B70f633:L70f633:{c.instructions+=3;NFSU2_TR(0x70f633);
w4(R+4,u32(0xffull));
}
B70f638:{NFSU2_TR(0x70f638);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70f63a:{NFSU2_TR(0x70f63a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70f63e;}}
}
B70f63c:L70f63c:{c.instructions+=1;NFSU2_TR(0x70f63c);
__builtin_memmove((R+0),(R+4),4);
}
B70f63e:L70f63e:{c.instructions+=3;NFSU2_TR(0x70f63e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f63f:{NFSU2_TR(0x70f63f);
u8 U[13];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B70f643:{NFSU2_TR(0x70f643);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70f648ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70f4eau);}goto L70f4ea;}
}
B70f648:L70f648:{c.instructions+=4;NFSU2_TR(0x70f648);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70f649:{NFSU2_TR(0x70f649);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B70f64d:{NFSU2_TR(0x70f64d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B70f64f:{NFSU2_TR(0x70f64f);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L70f655;}}
}
B70f651:L70f651:{c.instructions+=2;NFSU2_TR(0x70f651);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B70f653:{NFSU2_TR(0x70f653);
{goto L70f660;}
}
B70f655:L70f655:{c.instructions+=3;NFSU2_TR(0x70f655);
w4(R+4,u32(0xffull));
}
B70f65a:{NFSU2_TR(0x70f65a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70f65c:{NFSU2_TR(0x70f65c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70f660;}}
}
B70f65e:L70f65e:{c.instructions+=1;NFSU2_TR(0x70f65e);
__builtin_memmove((R+0),(R+4),4);
}
B70f660:L70f660:{c.instructions+=4;NFSU2_TR(0x70f660);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),1);
s1(u32(r4(U+4)),r1(U+8));
}
B70f663:{NFSU2_TR(0x70f663);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B70f664:{NFSU2_TR(0x70f664);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B70f667:{NFSU2_TR(0x70f667);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70f61fu);}goto L70f61f;}}
}
B70f669:L70f669:{c.instructions+=4;NFSU2_TR(0x70f669);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70f66d:{NFSU2_TR(0x70f66d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B70f670:{NFSU2_TR(0x70f670);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x30ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B70f674:{NFSU2_TR(0x70f674);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70f5c0u);}goto L70f5c0;}}
}
B70f67a:L70f67a:{c.instructions+=2;NFSU2_TR(0x70f67a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f67b:{NFSU2_TR(0x70f67b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70f680ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70f32bu);}goto L70f32b;}
}
B70f680:L70f680:{c.instructions+=6;NFSU2_TR(0x70f680);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70f681:{NFSU2_TR(0x70f681);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70f682:{NFSU2_TR(0x70f682);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70f683:{NFSU2_TR(0x70f683);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70f684:{NFSU2_TR(0x70f684);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70f685:{NFSU2_TR(0x70f685);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70f686:L70f686:{c.instructions+=23;NFSU2_TR(0x70f686);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f687:{NFSU2_TR(0x70f687);
__builtin_memmove((R+20),(R+16),4);
}
B70f689:{NFSU2_TR(0x70f689);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x100ull))));
}
B70f68f:{NFSU2_TR(0x70f68f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70f692:{NFSU2_TR(0x70f692);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70f695:{NFSU2_TR(0x70f695);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70f69b:{NFSU2_TR(0x70f69b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f69c:{NFSU2_TR(0x70f69c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70f69f:{NFSU2_TR(0x70f69f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f6a0:{NFSU2_TR(0x70f6a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70f6a6:{NFSU2_TR(0x70f6a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70f6ac:{NFSU2_TR(0x70f6ac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f6ad:{NFSU2_TR(0x70f6ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70f6b0:{NFSU2_TR(0x70f6b0);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B70f6b2:{NFSU2_TR(0x70f6b2);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B70f6b4:{NFSU2_TR(0x70f6b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70f6b7:{NFSU2_TR(0x70f6b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70f6ba:{NFSU2_TR(0x70f6ba);
w4(R+0,u32(0xffull));
}
B70f6bf:{NFSU2_TR(0x70f6bf);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B70f6c2:{NFSU2_TR(0x70f6c2);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B70f6c5:{NFSU2_TR(0x70f6c5);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B70f6c7:{NFSU2_TR(0x70f6c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B70f6ca:{NFSU2_TR(0x70f6ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70f6cd:L70f6cd:{c.instructions+=4;NFSU2_TR(0x70f6cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70f6d0:{NFSU2_TR(0x70f6d0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B70f6d2:{NFSU2_TR(0x70f6d2);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffff00ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B70f6d9:{NFSU2_TR(0x70f6d9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L70f6e2;}}
}
B70f6db:L70f6db:{c.instructions+=1;NFSU2_TR(0x70f6db);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffff00ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B70f6e2:L70f6e2:{c.instructions+=2;NFSU2_TR(0x70f6e2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70f6e5:{NFSU2_TR(0x70f6e5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70f6f3;}}
}
B70f6e7:L70f6e7:{c.instructions+=3;NFSU2_TR(0x70f6e7);
w1(R+0,u8(u32(r1(R+0))|u32(u8(0xffull))));
}
B70f6e9:{NFSU2_TR(0x70f6e9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+0,u8(u32(r1(R+0))-u32(r1(U+4))));
}
B70f6ec:{NFSU2_TR(0x70f6ec);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffff00ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B70f6f3:L70f6f3:{c.instructions+=3;NFSU2_TR(0x70f6f3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B70f6f4:{NFSU2_TR(0x70f6f4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x100ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B70f6fa:{NFSU2_TR(0x70f6fa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70f6cdu);}goto L70f6cd;}}
}
B70f6fc:L70f6fc:{c.instructions+=2;NFSU2_TR(0x70f6fc);
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
B70f6fe:{NFSU2_TR(0x70f6fe);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70f72e;}}
}
B70f700:L70f700:{c.instructions+=1;NFSU2_TR(0x70f700);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70f703:L70f703:{c.instructions+=2;NFSU2_TR(0x70f703);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70f705:{NFSU2_TR(0x70f705);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70f721;}}
}
B70f707:L70f707:{c.instructions+=4;NFSU2_TR(0x70f707);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70f70a:{NFSU2_TR(0x70f70a);
__builtin_memmove((R+0),(R+28),4);
}
B70f70c:{NFSU2_TR(0x70f70c);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B70f70e:{NFSU2_TR(0x70f70e);
__builtin_memmove((R+12),(R+24),4);
}
B70f710:L70f710:{c.instructions+=6;NFSU2_TR(0x70f710);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+8,u32(r1(U+8)));
}
B70f714:{NFSU2_TR(0x70f714);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffff00ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B70f71b:{NFSU2_TR(0x70f71b);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B70f71d:{NFSU2_TR(0x70f71d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B70f71e:{NFSU2_TR(0x70f71e);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B70f71f:{NFSU2_TR(0x70f71f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70f710u);}goto L70f710;}}
}
B70f721:L70f721:{c.instructions+=5;NFSU2_TR(0x70f721);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70f724:{NFSU2_TR(0x70f724);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B70f727:{NFSU2_TR(0x70f727);
w1(R+512,carry<u32>(r4(R+28),r4(R+0)));
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B70f729:{NFSU2_TR(0x70f729);
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
B70f72c:{NFSU2_TR(0x70f72c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70f703u);}goto L70f703;}}
}
B70f72e:L70f72e:{c.instructions+=5;NFSU2_TR(0x70f72e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70f72f:{NFSU2_TR(0x70f72f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70f730:{NFSU2_TR(0x70f730);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70f731:{NFSU2_TR(0x70f731);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70f732:{NFSU2_TR(0x70f732);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70f733:L70f733:{c.instructions+=13;NFSU2_TR(0x70f733);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f734:{NFSU2_TR(0x70f734);
__builtin_memmove((R+20),(R+16),4);
}
B70f736:{NFSU2_TR(0x70f736);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f737:{NFSU2_TR(0x70f737);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f738:{NFSU2_TR(0x70f738);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70f73b:{NFSU2_TR(0x70f73b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70f73e:{NFSU2_TR(0x70f73e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f73f:{NFSU2_TR(0x70f73f);
__builtin_memmove((R+0),(R+4),4);
}
B70f741:{NFSU2_TR(0x70f741);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f742:{NFSU2_TR(0x70f742);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70f745:{NFSU2_TR(0x70f745);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B70f748:{NFSU2_TR(0x70f748);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70f74b:{NFSU2_TR(0x70f74b);
__builtin_memmove((R+24),(R+8),4);
}
B70f74d:L70f74d:{c.instructions+=1;NFSU2_TR(0x70f74d);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L70f74f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70f74du);}goto L70f74d;}
}
B70f74f:L70f74f:{c.instructions+=5;NFSU2_TR(0x70f74f);
__builtin_memmove((R+4),(R+0),4);
}
B70f751:{NFSU2_TR(0x70f751);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70f754:{NFSU2_TR(0x70f754);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B70f757:{NFSU2_TR(0x70f757);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B70f758:{NFSU2_TR(0x70f758);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70f75b:L70f75b:{c.instructions+=1;NFSU2_TR(0x70f75b);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L70f75d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70f75bu);}goto L70f75b;}
}
B70f75d:L70f75d:{c.instructions+=2;NFSU2_TR(0x70f75d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70f760:{NFSU2_TR(0x70f760);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70f7c2;}}
}
B70f762:L70f762:{c.instructions+=4;NFSU2_TR(0x70f762);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B70f763:{NFSU2_TR(0x70f763);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B70f766:{NFSU2_TR(0x70f766);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70f769:{NFSU2_TR(0x70f769);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f76a:L70f76a:{c.instructions+=7;NFSU2_TR(0x70f76a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B70f76d:{NFSU2_TR(0x70f76d);
__builtin_memmove((R+12),(R+8),4);
}
B70f76f:{NFSU2_TR(0x70f76f);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B70f771:{NFSU2_TR(0x70f771);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B70f773:{NFSU2_TR(0x70f773);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70f777:{NFSU2_TR(0x70f777);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70f77a:{NFSU2_TR(0x70f77a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70f7bc;}}
}
B70f77c:L70f77c:{c.instructions+=10;NFSU2_TR(0x70f77c);
__builtin_memmove((R+24),(R+8),4);
}
B70f77e:{NFSU2_TR(0x70f77e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70f781:{NFSU2_TR(0x70f781);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70f784:{NFSU2_TR(0x70f784);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B70f787:{NFSU2_TR(0x70f787);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+4))));
}
B70f789:{NFSU2_TR(0x70f789);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B70f78b:{NFSU2_TR(0x70f78b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70f78e:{NFSU2_TR(0x70f78e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70f791:{NFSU2_TR(0x70f791);
__builtin_memmove((R+0),(R+4),4);
}
B70f793:{NFSU2_TR(0x70f793);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70f796:L70f796:{c.instructions+=12;NFSU2_TR(0x70f796);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+8,u32(r1(U+8)));
}
B70f79a:{NFSU2_TR(0x70f79a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70f79d:{NFSU2_TR(0x70f79d);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+12,u32(r1(U+8)));
}
B70f7a1:{NFSU2_TR(0x70f7a1);
u8 U[12];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B70f7a5:{NFSU2_TR(0x70f7a5);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+12,u32(r1(U+0)));
}
B70f7a8:{NFSU2_TR(0x70f7a8);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B70f7aa:{NFSU2_TR(0x70f7aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70f7ad:{NFSU2_TR(0x70f7ad);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B70f7b0:{NFSU2_TR(0x70f7b0);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B70f7b3:{NFSU2_TR(0x70f7b3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B70f7b4:{NFSU2_TR(0x70f7b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70f7b7:{NFSU2_TR(0x70f7b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70f796u);}goto L70f796;}}
}
B70f7b9:L70f7b9:{c.instructions+=1;NFSU2_TR(0x70f7b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70f7bc:L70f7bc:{c.instructions+=2;NFSU2_TR(0x70f7bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70f7bf:{NFSU2_TR(0x70f7bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70f76au);}goto L70f76a;}}
}
B70f7c1:L70f7c1:{c.instructions+=1;NFSU2_TR(0x70f7c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70f7c2:L70f7c2:{c.instructions+=6;NFSU2_TR(0x70f7c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70f7c5:{NFSU2_TR(0x70f7c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70f7c8:{NFSU2_TR(0x70f7c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B70f7cb:{NFSU2_TR(0x70f7cb);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B70f7cd:{NFSU2_TR(0x70f7cd);
__builtin_memmove((R+0),(R+4),4);
}
B70f7cf:{NFSU2_TR(0x70f7cf);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B70f7d2:L70f7d2:{c.instructions+=1;NFSU2_TR(0x70f7d2);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L70f7d4;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70f7d2u);}goto L70f7d2;}
}
B70f7d4:L70f7d4:{c.instructions+=2;NFSU2_TR(0x70f7d4);
__builtin_memmove((R+4),(R+0),4);
}
B70f7d6:{NFSU2_TR(0x70f7d6);
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
B70f7d9:L70f7d9:{c.instructions+=1;NFSU2_TR(0x70f7d9);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L70f7db;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70f7d9u);}goto L70f7d9;}
}
B70f7db:L70f7db:{c.instructions+=4;NFSU2_TR(0x70f7db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70f7dc:{NFSU2_TR(0x70f7dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70f7dd:{NFSU2_TR(0x70f7dd);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70f7de:{NFSU2_TR(0x70f7de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70f7df:L70f7df:{c.instructions+=18;NFSU2_TR(0x70f7df);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f7e0:{NFSU2_TR(0x70f7e0);
__builtin_memmove((R+20),(R+16),4);
}
B70f7e2:{NFSU2_TR(0x70f7e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70f7e5:{NFSU2_TR(0x70f7e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70f7e8:{NFSU2_TR(0x70f7e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70f7eb:{NFSU2_TR(0x70f7eb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x400ull))));
}
B70f7f0:{NFSU2_TR(0x70f7f0);
u8 U[6];
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffe0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70f7f3:{NFSU2_TR(0x70f7f3);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(s64(s32(u32(0x10001ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+4)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B70f7f9:{NFSU2_TR(0x70f7f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70f7fc:{NFSU2_TR(0x70f7fc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B70f7fe:{NFSU2_TR(0x70f7fe);
w4(R+4,u32(0x10001ull));
}
B70f803:{NFSU2_TR(0x70f803);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70f806:{NFSU2_TR(0x70f806);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70f809:{NFSU2_TR(0x70f809);
w4(R+4,u32(0x40004ull));
}
B70f80e:{NFSU2_TR(0x70f80e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70f811:{NFSU2_TR(0x70f811);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70f814:{NFSU2_TR(0x70f814);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B70f815:{NFSU2_TR(0x70f815);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70f816:L70f816:{c.instructions+=24;NFSU2_TR(0x70f816);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f817:{NFSU2_TR(0x70f817);
__builtin_memmove((R+12),(R+16),4);
}
B70f819:{NFSU2_TR(0x70f819);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f81a:{NFSU2_TR(0x70f81a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f81b:{NFSU2_TR(0x70f81b);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B70f81e:{NFSU2_TR(0x70f81e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70f821:{NFSU2_TR(0x70f821);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f822:{NFSU2_TR(0x70f822);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B70f825:{NFSU2_TR(0x70f825);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70f829:{NFSU2_TR(0x70f829);
__builtin_memmove((R+20),(R+16),4);
}
B70f82b:{NFSU2_TR(0x70f82b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1a8ull))));
}
B70f831:{NFSU2_TR(0x70f831);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70f834:{NFSU2_TR(0x70f834);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70f837:{NFSU2_TR(0x70f837);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70f83a:{NFSU2_TR(0x70f83a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70f83d:{NFSU2_TR(0x70f83d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70f840:{NFSU2_TR(0x70f840);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70f843:{NFSU2_TR(0x70f843);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B70f845:{NFSU2_TR(0x70f845);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B70f847:{NFSU2_TR(0x70f847);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f848:{NFSU2_TR(0x70f848);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f849:{NFSU2_TR(0x70f849);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70f84c:{NFSU2_TR(0x70f84c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70f84f:{NFSU2_TR(0x70f84f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){TAIL_STATIC(0x710127u,710);}
}
B70f855:L70f855:{c.instructions+=11;NFSU2_TR(0x70f855);
__builtin_memmove((R+4),(R+0),4);
}
B70f857:{NFSU2_TR(0x70f857);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B70f85a:{NFSU2_TR(0x70f85a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70f85d:{NFSU2_TR(0x70f85d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70f860:{NFSU2_TR(0x70f860);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70f863:{NFSU2_TR(0x70f863);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70f866:{NFSU2_TR(0x70f866);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B70f869:{NFSU2_TR(0x70f869);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70f86c:{NFSU2_TR(0x70f86c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B70f86f:{NFSU2_TR(0x70f86f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70f872:{NFSU2_TR(0x70f872);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x7100a8u,710);}
}
B70f878:L70f878:{c.instructions+=549;NFSU2_TR(0x70f878);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B70f87c:{NFSU2_TR(0x70f87c);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa2ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B70f880:{NFSU2_TR(0x70f880);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B70f884:{NFSU2_TR(0x70f884);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa6ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B70f888:{NFSU2_TR(0x70f888);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f889:{NFSU2_TR(0x70f889);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f88a:{NFSU2_TR(0x70f88a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f88b:{NFSU2_TR(0x70f88b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f88c:{NFSU2_TR(0x70f88c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f88d:{NFSU2_TR(0x70f88d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70f88e:{NFSU2_TR(0x70f88e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B70f892:{NFSU2_TR(0x70f892);
__builtin_memmove((R+4368),gp(0x8175b0),8);
}
B70f899:{NFSU2_TR(0x70f899);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(R+4352))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(R+4354))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(R+4356))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(R+4358))));
}
B70f89c:{NFSU2_TR(0x70f89c);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(R+4352))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(R+4354))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(R+4356))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(R+4358))));
}
B70f89f:{NFSU2_TR(0x70f89f);
w2(R+4368,shr<u16>(r2(R+4368),u64(u32(0x5ull))));
w2(R+4370,shr<u16>(r2(R+4370),u64(u32(0x5ull))));
w2(R+4372,shr<u16>(r2(R+4372),u64(u32(0x5ull))));
w2(R+4374,shr<u16>(r2(R+4374),u64(u32(0x5ull))));
}
B70f8a3:{NFSU2_TR(0x70f8a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B70f8a7:{NFSU2_TR(0x70f8a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70f8aa:{NFSU2_TR(0x70f8aa);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B70f8ac:{NFSU2_TR(0x70f8ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70f8b2:{NFSU2_TR(0x70f8b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe60ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70f8b8:{NFSU2_TR(0x70f8b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70f8bb:{NFSU2_TR(0x70f8bb);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B70f8be:{NFSU2_TR(0x70f8be);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B70f8c0:{NFSU2_TR(0x70f8c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70f8c3:{NFSU2_TR(0x70f8c3);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4352),(U+8),8);
}
B70f8c7:{NFSU2_TR(0x70f8c7);
__builtin_memmove((R+4368),(R+4352),8);
}
B70f8ca:{NFSU2_TR(0x70f8ca);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B70f8cd:{NFSU2_TR(0x70f8cd);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B70f8d0:{NFSU2_TR(0x70f8d0);
__builtin_memmove((R+4400),(R+4384),8);
}
B70f8d3:{NFSU2_TR(0x70f8d3);
__builtin_memmove((R+4368),(R+4372),1);
__builtin_memmove((R+4369),(R+4468),1);
__builtin_memmove((R+4370),(R+4373),1);
__builtin_memmove((R+4371),(R+4469),1);
__builtin_memmove((R+4372),(R+4374),1);
__builtin_memmove((R+4373),(R+4470),1);
__builtin_memmove((R+4374),(R+4375),1);
__builtin_memmove((R+4375),(R+4471),1);
}
B70f8d6:{NFSU2_TR(0x70f8d6);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B70f8d9:{NFSU2_TR(0x70f8d9);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B70f8dc:{NFSU2_TR(0x70f8dc);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B70f8df:{NFSU2_TR(0x70f8df);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B70f8e3:{NFSU2_TR(0x70f8e3);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4416),(U+8),8);
}
B70f8e7:{NFSU2_TR(0x70f8e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B70f8eb:{NFSU2_TR(0x70f8eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B70f8ef:{NFSU2_TR(0x70f8ef);
__builtin_memmove((R+4432),(R+4416),8);
}
B70f8f2:{NFSU2_TR(0x70f8f2);
__builtin_memmove((R+4423),(R+4467),1);
__builtin_memmove((R+4422),(R+4419),1);
__builtin_memmove((R+4421),(R+4466),1);
__builtin_memmove((R+4420),(R+4418),1);
__builtin_memmove((R+4419),(R+4465),1);
__builtin_memmove((R+4418),(R+4417),1);
__builtin_memmove((R+4417),(R+4464),1);
}
B70f8f5:{NFSU2_TR(0x70f8f5);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4352),(U+8),8);
}
B70f8f9:{NFSU2_TR(0x70f8f9);
__builtin_memmove((R+4432),(R+4436),1);
__builtin_memmove((R+4433),(R+4468),1);
__builtin_memmove((R+4434),(R+4437),1);
__builtin_memmove((R+4435),(R+4469),1);
__builtin_memmove((R+4436),(R+4438),1);
__builtin_memmove((R+4437),(R+4470),1);
__builtin_memmove((R+4438),(R+4439),1);
__builtin_memmove((R+4439),(R+4471),1);
}
B70f8fc:{NFSU2_TR(0x70f8fc);
__builtin_memmove((R+4368),(R+4352),8);
}
B70f8ff:{NFSU2_TR(0x70f8ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B70f903:{NFSU2_TR(0x70f903);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B70f906:{NFSU2_TR(0x70f906);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70f909:{NFSU2_TR(0x70f909);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B70f90d:{NFSU2_TR(0x70f90d);
__builtin_memmove((R+4368),(R+4372),1);
__builtin_memmove((R+4369),(R+4468),1);
__builtin_memmove((R+4370),(R+4373),1);
__builtin_memmove((R+4371),(R+4469),1);
__builtin_memmove((R+4372),(R+4374),1);
__builtin_memmove((R+4373),(R+4470),1);
__builtin_memmove((R+4374),(R+4375),1);
__builtin_memmove((R+4375),(R+4471),1);
}
B70f910:{NFSU2_TR(0x70f910);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4384),(U+8),8);
}
B70f914:{NFSU2_TR(0x70f914);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B70f918:{NFSU2_TR(0x70f918);
__builtin_memmove((R+4400),(R+4384),8);
}
B70f91b:{NFSU2_TR(0x70f91b);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B70f91e:{NFSU2_TR(0x70f91e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B70f922:{NFSU2_TR(0x70f922);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B70f925:{NFSU2_TR(0x70f925);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B70f928:{NFSU2_TR(0x70f928);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B70f92c:{NFSU2_TR(0x70f92c);
__builtin_memmove((R+4432),(R+4416),8);
}
B70f92f:{NFSU2_TR(0x70f92f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B70f933:{NFSU2_TR(0x70f933);
__builtin_memmove((R+4423),(R+4467),1);
__builtin_memmove((R+4422),(R+4419),1);
__builtin_memmove((R+4421),(R+4466),1);
__builtin_memmove((R+4420),(R+4418),1);
__builtin_memmove((R+4419),(R+4465),1);
__builtin_memmove((R+4418),(R+4417),1);
__builtin_memmove((R+4417),(R+4464),1);
}
B70f936:{NFSU2_TR(0x70f936);
__builtin_memmove((R+4432),(R+4436),1);
__builtin_memmove((R+4433),(R+4468),1);
__builtin_memmove((R+4434),(R+4437),1);
__builtin_memmove((R+4435),(R+4469),1);
__builtin_memmove((R+4436),(R+4438),1);
__builtin_memmove((R+4437),(R+4470),1);
__builtin_memmove((R+4438),(R+4439),1);
__builtin_memmove((R+4439),(R+4471),1);
}
B70f939:{NFSU2_TR(0x70f939);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4352),(U+8),8);
}
B70f93d:{NFSU2_TR(0x70f93d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B70f941:{NFSU2_TR(0x70f941);
__builtin_memmove((R+4368),(R+4352),8);
}
B70f944:{NFSU2_TR(0x70f944);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B70f948:{NFSU2_TR(0x70f948);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B70f94b:{NFSU2_TR(0x70f94b);
__builtin_memmove((R+4368),(R+4372),1);
__builtin_memmove((R+4369),(R+4468),1);
__builtin_memmove((R+4370),(R+4373),1);
__builtin_memmove((R+4371),(R+4469),1);
__builtin_memmove((R+4372),(R+4374),1);
__builtin_memmove((R+4373),(R+4470),1);
__builtin_memmove((R+4374),(R+4375),1);
__builtin_memmove((R+4375),(R+4471),1);
}
B70f94e:{NFSU2_TR(0x70f94e);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4384),(U+8),8);
}
B70f952:{NFSU2_TR(0x70f952);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70f955:{NFSU2_TR(0x70f955);
__builtin_memmove((R+4400),(R+4384),8);
}
B70f958:{NFSU2_TR(0x70f958);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B70f95c:{NFSU2_TR(0x70f95c);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B70f95f:{NFSU2_TR(0x70f95f);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B70f962:{NFSU2_TR(0x70f962);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4416),(U+8),8);
}
B70f966:{NFSU2_TR(0x70f966);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B70f96a:{NFSU2_TR(0x70f96a);
__builtin_memmove((R+4432),(R+4416),8);
}
B70f96d:{NFSU2_TR(0x70f96d);
__builtin_memmove((R+4423),(R+4467),1);
__builtin_memmove((R+4422),(R+4419),1);
__builtin_memmove((R+4421),(R+4466),1);
__builtin_memmove((R+4420),(R+4418),1);
__builtin_memmove((R+4419),(R+4465),1);
__builtin_memmove((R+4418),(R+4417),1);
__builtin_memmove((R+4417),(R+4464),1);
}
B70f970:{NFSU2_TR(0x70f970);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B70f974:{NFSU2_TR(0x70f974);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B70f978:{NFSU2_TR(0x70f978);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B70f97b:{NFSU2_TR(0x70f97b);
__builtin_memmove((R+4432),(R+4436),1);
__builtin_memmove((R+4433),(R+4468),1);
__builtin_memmove((R+4434),(R+4437),1);
__builtin_memmove((R+4435),(R+4469),1);
__builtin_memmove((R+4436),(R+4438),1);
__builtin_memmove((R+4437),(R+4470),1);
__builtin_memmove((R+4438),(R+4439),1);
__builtin_memmove((R+4439),(R+4471),1);
}
B70f97e:{NFSU2_TR(0x70f97e);
__builtin_memmove((R+4368),(R+4352),8);
}
B70f981:{NFSU2_TR(0x70f981);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B70f988:{NFSU2_TR(0x70f988);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B70f98b:{NFSU2_TR(0x70f98b);
__builtin_memmove((R+4368),(R+4372),1);
__builtin_memmove((R+4369),(R+4468),1);
__builtin_memmove((R+4370),(R+4373),1);
__builtin_memmove((R+4371),(R+4469),1);
__builtin_memmove((R+4372),(R+4374),1);
__builtin_memmove((R+4373),(R+4470),1);
__builtin_memmove((R+4374),(R+4375),1);
__builtin_memmove((R+4375),(R+4471),1);
}
B70f98e:{NFSU2_TR(0x70f98e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B70f995:{NFSU2_TR(0x70f995);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B70f99c:{NFSU2_TR(0x70f99c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B70f9a3:{NFSU2_TR(0x70f9a3);
u8 U[12];
w1(U+0,u8((r2(R+4400))==(r2(R+4400))));
w2(U+1,u16(r1(U+0)));
w2(R+4400,u16(u32(r2(U+1))*u32(u16(0xffffull))));
w1(U+3,u8((r2(R+4402))==(r2(R+4402))));
w2(U+4,u16(r1(U+3)));
w2(R+4402,u16(u32(r2(U+4))*u32(u16(0xffffull))));
w1(U+6,u8((r2(R+4404))==(r2(R+4404))));
w2(U+7,u16(r1(U+6)));
w2(R+4404,u16(u32(r2(U+7))*u32(u16(0xffffull))));
w1(U+9,u8((r2(R+4406))==(r2(R+4406))));
w2(U+10,u16(r1(U+9)));
w2(R+4406,u16(u32(r2(U+10))*u32(u16(0xffffull))));
}
B70f9a6:{NFSU2_TR(0x70f9a6);
{wv<8>((R+4400),uo::psllw<8>(rv<8>((R+4400)),V(0xfull)));}
}
B70f9aa:{NFSU2_TR(0x70f9aa);
w2(R+4400,shr<u16>(r2(R+4400),u64(u32(0x8ull))));
w2(R+4402,shr<u16>(r2(R+4402),u64(u32(0x8ull))));
w2(R+4404,shr<u16>(r2(R+4404),u64(u32(0x8ull))));
w2(R+4406,shr<u16>(r2(R+4406),u64(u32(0x8ull))));
}
B70f9ae:{NFSU2_TR(0x70f9ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B70f9b2:{NFSU2_TR(0x70f9b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B70f9b6:{NFSU2_TR(0x70f9b6);
w2(R+4384,u16(u32(r2(R+4384))-u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))-u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))-u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))-u32(r2(R+4406))));
}
B70f9b9:{NFSU2_TR(0x70f9b9);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4400))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4402))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4404))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4406))));
}
B70f9bc:{NFSU2_TR(0x70f9bc);
__builtin_memmove((R+4352),(R+4384),8);
}
B70f9bf:{NFSU2_TR(0x70f9bf);
__builtin_memmove((R+4416),(R+4448),8);
}
B70f9c2:{NFSU2_TR(0x70f9c2);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4384))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4386))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4388))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4390))));
}
B70f9c5:{NFSU2_TR(0x70f9c5);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(R+4448))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(R+4450))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(R+4452))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(R+4454))));
}
B70f9c8:{NFSU2_TR(0x70f9c8);
__builtin_memmove((R+4368),(R+4384),8);
}
B70f9cb:{NFSU2_TR(0x70f9cb);
__builtin_memmove((R+4432),(R+4448),8);
}
B70f9ce:{NFSU2_TR(0x70f9ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B70f9d2:{NFSU2_TR(0x70f9d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B70f9d6:{NFSU2_TR(0x70f9d6);
w2(R+4384,u16(u32(r2(R+4384))-u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))-u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))-u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))-u32(r2(R+4406))));
}
B70f9d9:{NFSU2_TR(0x70f9d9);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4400))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4402))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4404))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4406))));
}
B70f9dc:{NFSU2_TR(0x70f9dc);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B70f9df:{NFSU2_TR(0x70f9df);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B70f9e2:{NFSU2_TR(0x70f9e2);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4384))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4386))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4388))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4390))));
}
B70f9e5:{NFSU2_TR(0x70f9e5);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(R+4448))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(R+4450))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(R+4452))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(R+4454))));
}
B70f9e8:{NFSU2_TR(0x70f9e8);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4384))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4386))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4388))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4390))));
}
B70f9eb:{NFSU2_TR(0x70f9eb);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B70f9ee:{NFSU2_TR(0x70f9ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B70f9f2:{NFSU2_TR(0x70f9f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B70f9f6:{NFSU2_TR(0x70f9f6);
w2(R+4384,u16(u32(r2(R+4384))-u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))-u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))-u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))-u32(r2(R+4406))));
}
B70f9f9:{NFSU2_TR(0x70f9f9);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4400))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4402))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4404))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4406))));
}
B70f9fc:{NFSU2_TR(0x70f9fc);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B70f9ff:{NFSU2_TR(0x70f9ff);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B70fa02:{NFSU2_TR(0x70fa02);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4384))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4386))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4388))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4390))));
}
B70fa05:{NFSU2_TR(0x70fa05);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(R+4448))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(R+4450))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(R+4452))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(R+4454))));
}
B70fa08:{NFSU2_TR(0x70fa08);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4384))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4386))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4388))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4390))));
}
B70fa0b:{NFSU2_TR(0x70fa0b);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B70fa0e:{NFSU2_TR(0x70fa0e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B70fa12:{NFSU2_TR(0x70fa12);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B70fa19:{NFSU2_TR(0x70fa19);
w2(R+4384,u16(u32(r2(R+4384))-u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))-u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))-u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))-u32(r2(R+4406))));
}
B70fa1c:{NFSU2_TR(0x70fa1c);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4400))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4402))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4404))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4406))));
}
B70fa1f:{NFSU2_TR(0x70fa1f);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B70fa22:{NFSU2_TR(0x70fa22);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B70fa25:{NFSU2_TR(0x70fa25);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4384))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4386))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4388))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4390))));
}
B70fa28:{NFSU2_TR(0x70fa28);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(R+4448))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(R+4450))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(R+4452))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(R+4454))));
}
B70fa2b:{NFSU2_TR(0x70fa2b);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4384))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4386))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4388))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4390))));
}
B70fa2e:{NFSU2_TR(0x70fa2e);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B70fa31:{NFSU2_TR(0x70fa31);
__builtin_memmove((R+4464),(R+4400),8);
}
B70fa34:{NFSU2_TR(0x70fa34);
w2(R+4464,shr<u16>(r2(R+4464),u64(u32(0x7ull))));
w2(R+4466,shr<u16>(r2(R+4466),u64(u32(0x7ull))));
w2(R+4468,shr<u16>(r2(R+4468),u64(u32(0x7ull))));
w2(R+4470,shr<u16>(r2(R+4470),u64(u32(0x7ull))));
}
B70fa38:{NFSU2_TR(0x70fa38);
__builtin_memmove((R+4384),(R+4352),8);
}
B70fa3b:{NFSU2_TR(0x70fa3b);
__builtin_memmove((R+4448),(R+4416),8);
}
B70fa3e:{NFSU2_TR(0x70fa3e);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4464))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4466))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4468))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4470))));
}
B70fa41:{NFSU2_TR(0x70fa41);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4464))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4466))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4468))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4470))));
}
B70fa44:{NFSU2_TR(0x70fa44);
{wv<8>((R+4384),uo::psraw<8>(rv<8>((R+4384)),V(0x1ull)));}
}
B70fa48:{NFSU2_TR(0x70fa48);
{wv<8>((R+4448),uo::psraw<8>(rv<8>((R+4448)),V(0x1ull)));}
}
B70fa4c:{NFSU2_TR(0x70fa4c);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0x1ull)));}
}
B70fa50:{NFSU2_TR(0x70fa50);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x1ull)));}
}
B70fa54:{NFSU2_TR(0x70fa54);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4352))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4354))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4356))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4358))));
}
B70fa57:{NFSU2_TR(0x70fa57);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(R+4416))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(R+4418))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(R+4420))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(R+4422))));
}
B70fa5a:{NFSU2_TR(0x70fa5a);
w2(R+4368,u16(u32(r2(R+4368))-u32(r2(R+4384))));
w2(R+4370,u16(u32(r2(R+4370))-u32(r2(R+4386))));
w2(R+4372,u16(u32(r2(R+4372))-u32(r2(R+4388))));
w2(R+4374,u16(u32(r2(R+4374))-u32(r2(R+4390))));
}
B70fa5d:{NFSU2_TR(0x70fa5d);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4454))));
}
B70fa60:{NFSU2_TR(0x70fa60);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B70fa64:{NFSU2_TR(0x70fa64);
__builtin_memmove((R+4384),(R+4368),8);
}
B70fa67:{NFSU2_TR(0x70fa67);
__builtin_memmove((R+4448),(R+4432),8);
}
B70fa6a:{NFSU2_TR(0x70fa6a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B70fa6e:{NFSU2_TR(0x70fa6e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B70fa72:{NFSU2_TR(0x70fa72);
w2(R+4368,u16(u32(r2(R+4368))-u32(r2(R+4464))));
w2(R+4370,u16(u32(r2(R+4370))-u32(r2(R+4466))));
w2(R+4372,u16(u32(r2(R+4372))-u32(r2(R+4468))));
w2(R+4374,u16(u32(r2(R+4374))-u32(r2(R+4470))));
}
B70fa75:{NFSU2_TR(0x70fa75);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4464))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4466))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4468))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4470))));
}
B70fa78:{NFSU2_TR(0x70fa78);
{wv<8>((R+4384),uo::psraw<8>(rv<8>((R+4384)),V(0xfull)));}
}
B70fa7c:{NFSU2_TR(0x70fa7c);
{wv<8>((R+4448),uo::psraw<8>(rv<8>((R+4448)),V(0xfull)));}
}
B70fa80:{NFSU2_TR(0x70fa80);
{wv<8>((R+4368),uo::psraw<8>(rv<8>((R+4368)),V(0xfull)));}
}
B70fa84:{NFSU2_TR(0x70fa84);
{wv<8>((R+4432),uo::psraw<8>(rv<8>((R+4432)),V(0xfull)));}
}
B70fa88:{NFSU2_TR(0x70fa88);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B70fa8c:{NFSU2_TR(0x70fa8c);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4384))));
w8(R+4384,u64(u64(r8(U+0))&u64(r8(R+4368))));
}
B70fa8f:{NFSU2_TR(0x70fa8f);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4448))));
w8(R+4448,u64(u64(r8(U+0))&u64(r8(R+4432))));
}
B70fa92:{NFSU2_TR(0x70fa92);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B70fa96:{NFSU2_TR(0x70fa96);
w8(R+4448,u64(u64(r8(R+4448))&u64(r8(R+4384))));
}
B70fa99:{NFSU2_TR(0x70fa99);
__builtin_memmove((R+4384),(R+4464),8);
}
B70fa9c:{NFSU2_TR(0x70fa9c);
{wv<8>((R+4464),uo::psubusw<8>(rv<8>((R+4464)),rv<8>((R+4416))));}
}
B70fa9f:{NFSU2_TR(0x70fa9f);
{wv<8>((R+4416),uo::psubusw<8>(rv<8>((R+4416)),rv<8>((R+4384))));}
}
B70faa2:{NFSU2_TR(0x70faa2);
w8(R+4464,u64(u64(r8(R+4464))|u64(r8(R+4416))));
}
B70faa5:{NFSU2_TR(0x70faa5);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4464,u16(u32(r2(R+4464))-u32(r2(U+12))));
w2(R+4466,u16(u32(r2(R+4466))-u32(r2(U+14))));
w2(R+4468,u16(u32(r2(R+4468))-u32(r2(U+16))));
w2(R+4470,u16(u32(r2(R+4470))-u32(r2(U+18))));
}
B70faa9:{NFSU2_TR(0x70faa9);
{wv<8>((R+4464),uo::psraw<8>(rv<8>((R+4464)),V(0xfull)));}
}
B70faad:{NFSU2_TR(0x70faad);
w8(R+4464,u64(u64(r8(R+4464))&u64(r8(R+4448))));
}
B70fab0:{NFSU2_TR(0x70fab0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B70fab3:{NFSU2_TR(0x70fab3);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B70fab7:{NFSU2_TR(0x70fab7);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B70fabb:{NFSU2_TR(0x70fabb);
w2(R+4384,u16(u32(r2(R+4384))-u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))-u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))-u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))-u32(r2(R+4406))));
}
B70fabe:{NFSU2_TR(0x70fabe);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4400))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4402))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4404))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4406))));
}
B70fac1:{NFSU2_TR(0x70fac1);
__builtin_memmove((R+4352),(R+4384),8);
}
B70fac4:{NFSU2_TR(0x70fac4);
__builtin_memmove((R+4416),(R+4448),8);
}
B70fac7:{NFSU2_TR(0x70fac7);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4384))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4386))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4388))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4390))));
}
B70faca:{NFSU2_TR(0x70faca);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(R+4448))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(R+4450))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(R+4452))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(R+4454))));
}
B70facd:{NFSU2_TR(0x70facd);
__builtin_memmove((R+4368),(R+4384),8);
}
B70fad0:{NFSU2_TR(0x70fad0);
__builtin_memmove((R+4432),(R+4448),8);
}
B70fad3:{NFSU2_TR(0x70fad3);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B70fad7:{NFSU2_TR(0x70fad7);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B70fadb:{NFSU2_TR(0x70fadb);
w2(R+4384,u16(u32(r2(R+4384))-u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))-u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))-u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))-u32(r2(R+4406))));
}
B70fade:{NFSU2_TR(0x70fade);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4400))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4402))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4404))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4406))));
}
B70fae1:{NFSU2_TR(0x70fae1);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B70fae4:{NFSU2_TR(0x70fae4);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B70fae7:{NFSU2_TR(0x70fae7);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4384))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4386))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4388))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4390))));
}
B70faea:{NFSU2_TR(0x70faea);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(R+4448))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(R+4450))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(R+4452))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(R+4454))));
}
B70faed:{NFSU2_TR(0x70faed);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4384))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4386))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4388))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4390))));
}
B70faf0:{NFSU2_TR(0x70faf0);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B70faf3:{NFSU2_TR(0x70faf3);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B70faf7:{NFSU2_TR(0x70faf7);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B70fafb:{NFSU2_TR(0x70fafb);
w2(R+4384,u16(u32(r2(R+4384))-u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))-u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))-u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))-u32(r2(R+4406))));
}
B70fafe:{NFSU2_TR(0x70fafe);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4400))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4402))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4404))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4406))));
}
B70fb01:{NFSU2_TR(0x70fb01);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B70fb04:{NFSU2_TR(0x70fb04);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B70fb07:{NFSU2_TR(0x70fb07);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4384))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4386))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4388))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4390))));
}
B70fb0a:{NFSU2_TR(0x70fb0a);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(R+4448))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(R+4450))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(R+4452))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(R+4454))));
}
B70fb0d:{NFSU2_TR(0x70fb0d);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4384))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4386))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4388))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4390))));
}
B70fb10:{NFSU2_TR(0x70fb10);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B70fb13:{NFSU2_TR(0x70fb13);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B70fb17:{NFSU2_TR(0x70fb17);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B70fb1e:{NFSU2_TR(0x70fb1e);
w2(R+4384,u16(u32(r2(R+4384))-u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))-u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))-u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))-u32(r2(R+4406))));
}
B70fb21:{NFSU2_TR(0x70fb21);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4400))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4402))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4404))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4406))));
}
B70fb24:{NFSU2_TR(0x70fb24);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B70fb27:{NFSU2_TR(0x70fb27);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B70fb2a:{NFSU2_TR(0x70fb2a);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4384))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4386))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4388))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4390))));
}
B70fb2d:{NFSU2_TR(0x70fb2d);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(R+4448))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(R+4450))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(R+4452))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(R+4454))));
}
B70fb30:{NFSU2_TR(0x70fb30);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4384))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4386))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4388))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4390))));
}
B70fb33:{NFSU2_TR(0x70fb33);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B70fb36:{NFSU2_TR(0x70fb36);
w2(R+4400,shr<u16>(r2(R+4400),u64(u32(0x7ull))));
w2(R+4402,shr<u16>(r2(R+4402),u64(u32(0x7ull))));
w2(R+4404,shr<u16>(r2(R+4404),u64(u32(0x7ull))));
w2(R+4406,shr<u16>(r2(R+4406),u64(u32(0x7ull))));
}
B70fb3a:{NFSU2_TR(0x70fb3a);
__builtin_memmove((R+4384),(R+4352),8);
}
B70fb3d:{NFSU2_TR(0x70fb3d);
__builtin_memmove((R+4448),(R+4416),8);
}
B70fb40:{NFSU2_TR(0x70fb40);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4400))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4402))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4404))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4406))));
}
B70fb43:{NFSU2_TR(0x70fb43);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B70fb46:{NFSU2_TR(0x70fb46);
{wv<8>((R+4384),uo::psraw<8>(rv<8>((R+4384)),V(0x1ull)));}
}
B70fb4a:{NFSU2_TR(0x70fb4a);
{wv<8>((R+4448),uo::psraw<8>(rv<8>((R+4448)),V(0x1ull)));}
}
B70fb4e:{NFSU2_TR(0x70fb4e);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0x1ull)));}
}
B70fb52:{NFSU2_TR(0x70fb52);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x1ull)));}
}
B70fb56:{NFSU2_TR(0x70fb56);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4352))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4354))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4356))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4358))));
}
B70fb59:{NFSU2_TR(0x70fb59);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(R+4416))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(R+4418))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(R+4420))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(R+4422))));
}
B70fb5c:{NFSU2_TR(0x70fb5c);
w2(R+4368,u16(u32(r2(R+4368))-u32(r2(R+4384))));
w2(R+4370,u16(u32(r2(R+4370))-u32(r2(R+4386))));
w2(R+4372,u16(u32(r2(R+4372))-u32(r2(R+4388))));
w2(R+4374,u16(u32(r2(R+4374))-u32(r2(R+4390))));
}
B70fb5f:{NFSU2_TR(0x70fb5f);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4454))));
}
B70fb62:{NFSU2_TR(0x70fb62);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B70fb66:{NFSU2_TR(0x70fb66);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B70fb6a:{NFSU2_TR(0x70fb6a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B70fb6e:{NFSU2_TR(0x70fb6e);
__builtin_memmove((R+4384),(R+4368),8);
}
B70fb71:{NFSU2_TR(0x70fb71);
__builtin_memmove((R+4448),(R+4432),8);
}
B70fb74:{NFSU2_TR(0x70fb74);
w2(R+4368,u16(u32(r2(R+4368))-u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))-u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))-u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))-u32(r2(R+4406))));
}
B70fb77:{NFSU2_TR(0x70fb77);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4400))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4402))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4404))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4406))));
}
B70fb7a:{NFSU2_TR(0x70fb7a);
{wv<8>((R+4384),uo::psraw<8>(rv<8>((R+4384)),V(0xfull)));}
}
B70fb7e:{NFSU2_TR(0x70fb7e);
{wv<8>((R+4448),uo::psraw<8>(rv<8>((R+4448)),V(0xfull)));}
}
B70fb82:{NFSU2_TR(0x70fb82);
{wv<8>((R+4368),uo::psraw<8>(rv<8>((R+4368)),V(0xfull)));}
}
B70fb86:{NFSU2_TR(0x70fb86);
{wv<8>((R+4432),uo::psraw<8>(rv<8>((R+4432)),V(0xfull)));}
}
B70fb8a:{NFSU2_TR(0x70fb8a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B70fb8e:{NFSU2_TR(0x70fb8e);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4384))));
w8(R+4384,u64(u64(r8(U+0))&u64(r8(R+4368))));
}
B70fb91:{NFSU2_TR(0x70fb91);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4448))));
w8(R+4448,u64(u64(r8(U+0))&u64(r8(R+4432))));
}
B70fb94:{NFSU2_TR(0x70fb94);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B70fb98:{NFSU2_TR(0x70fb98);
w8(R+4448,u64(u64(r8(R+4448))&u64(r8(R+4384))));
}
B70fb9b:{NFSU2_TR(0x70fb9b);
__builtin_memmove((R+4384),(R+4352),8);
}
B70fb9e:{NFSU2_TR(0x70fb9e);
{wv<8>((R+4352),uo::psubusw<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B70fba1:{NFSU2_TR(0x70fba1);
{wv<8>((R+4416),uo::psubusw<8>(rv<8>((R+4416)),rv<8>((R+4384))));}
}
B70fba4:{NFSU2_TR(0x70fba4);
w8(R+4352,u64(u64(r8(R+4352))|u64(r8(R+4416))));
}
B70fba7:{NFSU2_TR(0x70fba7);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4352,u16(u32(r2(R+4352))-u32(r2(U+12))));
w2(R+4354,u16(u32(r2(R+4354))-u32(r2(U+14))));
w2(R+4356,u16(u32(r2(R+4356))-u32(r2(U+16))));
w2(R+4358,u16(u32(r2(R+4358))-u32(r2(U+18))));
}
B70fbab:{NFSU2_TR(0x70fbab);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0xfull)));}
}
B70fbaf:{NFSU2_TR(0x70fbaf);
w8(R+4352,u64(u64(r8(R+4352))&u64(r8(R+4448))));
}
B70fbb2:{NFSU2_TR(0x70fbb2);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x8ull))));
}
B70fbb5:{NFSU2_TR(0x70fbb5);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),8);
__builtin_memmove((R+4432),(U+0),8);
}
B70fbb8:{NFSU2_TR(0x70fbb8);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B70fbbc:{NFSU2_TR(0x70fbbc);
__builtin_memmove((R+4400),(R+4416),8);
}
B70fbbf:{NFSU2_TR(0x70fbbf);
__builtin_memmove((R+4448),(R+4432),8);
}
B70fbc2:{NFSU2_TR(0x70fbc2);
{wv<8>((R+4416),uo::psubusw<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B70fbc5:{NFSU2_TR(0x70fbc5);
{wv<8>((R+4432),uo::psubusw<8>(rv<8>((R+4432)),rv<8>((R+4400))));}
}
B70fbc8:{NFSU2_TR(0x70fbc8);
w8(R+4416,u64(u64(r8(R+4416))|u64(r8(R+4432))));
}
B70fbcb:{NFSU2_TR(0x70fbcb);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B70fbcf:{NFSU2_TR(0x70fbcf);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0xfull)));}
}
B70fbd3:{NFSU2_TR(0x70fbd3);
__builtin_memmove((R+4368),(R+4416),8);
}
B70fbd6:{NFSU2_TR(0x70fbd6);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4448))));
}
B70fbd9:{NFSU2_TR(0x70fbd9);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4368))));
w8(R+4368,u64(u64(r8(U+0))&u64(r8(R+4400))));
}
B70fbdc:{NFSU2_TR(0x70fbdc);
w8(R+4368,u64(u64(r8(R+4368))|u64(r8(R+4416))));
}
B70fbdf:{NFSU2_TR(0x70fbdf);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B70fbe6:{NFSU2_TR(0x70fbe6);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B70fbed:{NFSU2_TR(0x70fbed);
__builtin_memmove((R+4400),(R+4416),8);
}
B70fbf0:{NFSU2_TR(0x70fbf0);
__builtin_memmove((R+4448),(R+4432),8);
}
B70fbf3:{NFSU2_TR(0x70fbf3);
{wv<8>((R+4416),uo::psubusw<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B70fbf6:{NFSU2_TR(0x70fbf6);
{wv<8>((R+4432),uo::psubusw<8>(rv<8>((R+4432)),rv<8>((R+4400))));}
}
B70fbf9:{NFSU2_TR(0x70fbf9);
w8(R+4416,u64(u64(r8(R+4416))|u64(r8(R+4432))));
}
B70fbfc:{NFSU2_TR(0x70fbfc);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B70fc00:{NFSU2_TR(0x70fc00);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0xfull)));}
}
B70fc04:{NFSU2_TR(0x70fc04);
__builtin_memmove((R+4384),(R+4416),8);
}
B70fc07:{NFSU2_TR(0x70fc07);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4448))));
}
B70fc0a:{NFSU2_TR(0x70fc0a);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4384))));
w8(R+4384,u64(u64(r8(U+0))&u64(r8(R+4400))));
}
B70fc0d:{NFSU2_TR(0x70fc0d);
w8(R+4384,u64(u64(r8(R+4384))|u64(r8(R+4416))));
}
B70fc10:{NFSU2_TR(0x70fc10);
__builtin_memmove((R+4400),(R+4368),8);
}
B70fc13:{NFSU2_TR(0x70fc13);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4400))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4402))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4404))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4406))));
}
B70fc16:{NFSU2_TR(0x70fc16);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4374))));
}
B70fc19:{NFSU2_TR(0x70fc19);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B70fc1d:{NFSU2_TR(0x70fc1d);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B70fc21:{NFSU2_TR(0x70fc21);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B70fc25:{NFSU2_TR(0x70fc25);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B70fc29:{NFSU2_TR(0x70fc29);
u8 U[8];
__builtin_memmove((U+0),gp(0x8175c0),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+0))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+2))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+4))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+6))));
}
B70fc30:{NFSU2_TR(0x70fc30);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4416))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4418))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4420))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4422))));
}
B70fc33:{NFSU2_TR(0x70fc33);
__builtin_memmove((R+4416),(R+4400),8);
}
B70fc36:{NFSU2_TR(0x70fc36);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B70fc3a:{NFSU2_TR(0x70fc3a);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B70fc3d:{NFSU2_TR(0x70fc3d);
{wv<8>((R+4416),uo::psllw<8>(rv<8>((R+4416)),V(0x1ull)));}
}
B70fc41:{NFSU2_TR(0x70fc41);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B70fc45:{NFSU2_TR(0x70fc45);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B70fc49:{NFSU2_TR(0x70fc49);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B70fc4d:{NFSU2_TR(0x70fc4d);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B70fc50:{NFSU2_TR(0x70fc50);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B70fc53:{NFSU2_TR(0x70fc53);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B70fc56:{NFSU2_TR(0x70fc56);
u8 U[8];
__builtin_memmove((U+0),(R+4416),8);
s8_(u32(r4(R+24)),r8(U+0));
}
B70fc59:{NFSU2_TR(0x70fc59);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B70fc5d:{NFSU2_TR(0x70fc5d);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4374))));
}
B70fc60:{NFSU2_TR(0x70fc60);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B70fc64:{NFSU2_TR(0x70fc64);
__builtin_memmove((R+4416),(R+4432),8);
}
B70fc67:{NFSU2_TR(0x70fc67);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B70fc6a:{NFSU2_TR(0x70fc6a);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B70fc6d:{NFSU2_TR(0x70fc6d);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B70fc71:{NFSU2_TR(0x70fc71);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B70fc75:{NFSU2_TR(0x70fc75);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B70fc79:{NFSU2_TR(0x70fc79);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B70fc7c:{NFSU2_TR(0x70fc7c);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B70fc7f:{NFSU2_TR(0x70fc7f);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B70fc82:{NFSU2_TR(0x70fc82);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B70fc86:{NFSU2_TR(0x70fc86);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B70fc8a:{NFSU2_TR(0x70fc8a);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4374))));
}
B70fc8d:{NFSU2_TR(0x70fc8d);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B70fc91:{NFSU2_TR(0x70fc91);
__builtin_memmove((R+4416),(R+4432),8);
}
B70fc94:{NFSU2_TR(0x70fc94);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B70fc97:{NFSU2_TR(0x70fc97);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B70fc9a:{NFSU2_TR(0x70fc9a);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B70fc9e:{NFSU2_TR(0x70fc9e);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B70fca2:{NFSU2_TR(0x70fca2);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B70fca6:{NFSU2_TR(0x70fca6);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B70fca9:{NFSU2_TR(0x70fca9);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B70fcac:{NFSU2_TR(0x70fcac);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B70fcaf:{NFSU2_TR(0x70fcaf);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B70fcb3:{NFSU2_TR(0x70fcb3);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B70fcb7:{NFSU2_TR(0x70fcb7);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4374))));
}
B70fcba:{NFSU2_TR(0x70fcba);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B70fcbe:{NFSU2_TR(0x70fcbe);
__builtin_memmove((R+4416),(R+4432),8);
}
B70fcc1:{NFSU2_TR(0x70fcc1);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B70fcc4:{NFSU2_TR(0x70fcc4);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B70fcc7:{NFSU2_TR(0x70fcc7);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4368))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4370))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4372))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4374))));
}
B70fcca:{NFSU2_TR(0x70fcca);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B70fcce:{NFSU2_TR(0x70fcce);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B70fcd2:{NFSU2_TR(0x70fcd2);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B70fcd9:{NFSU2_TR(0x70fcd9);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B70fcdd:{NFSU2_TR(0x70fcdd);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B70fce0:{NFSU2_TR(0x70fce0);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B70fce3:{NFSU2_TR(0x70fce3);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B70fce6:{NFSU2_TR(0x70fce6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B70fcea:{NFSU2_TR(0x70fcea);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B70fcee:{NFSU2_TR(0x70fcee);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(U+18))));
}
B70fcf2:{NFSU2_TR(0x70fcf2);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B70fcf9:{NFSU2_TR(0x70fcf9);
__builtin_memmove((R+4416),(R+4432),8);
}
B70fcfc:{NFSU2_TR(0x70fcfc);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B70fcff:{NFSU2_TR(0x70fcff);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B70fd02:{NFSU2_TR(0x70fd02);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B70fd06:{NFSU2_TR(0x70fd06);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B70fd0a:{NFSU2_TR(0x70fd0a);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B70fd11:{NFSU2_TR(0x70fd11);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4384))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4386))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4388))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4390))));
}
B70fd14:{NFSU2_TR(0x70fd14);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B70fd18:{NFSU2_TR(0x70fd18);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B70fd1b:{NFSU2_TR(0x70fd1b);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B70fd1e:{NFSU2_TR(0x70fd1e);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B70fd21:{NFSU2_TR(0x70fd21);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B70fd25:{NFSU2_TR(0x70fd25);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B70fd29:{NFSU2_TR(0x70fd29);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(U+18))));
}
B70fd2d:{NFSU2_TR(0x70fd2d);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B70fd30:{NFSU2_TR(0x70fd30);
__builtin_memmove((R+4416),(R+4432),8);
}
B70fd33:{NFSU2_TR(0x70fd33);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B70fd36:{NFSU2_TR(0x70fd36);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B70fd39:{NFSU2_TR(0x70fd39);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B70fd3d:{NFSU2_TR(0x70fd3d);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B70fd41:{NFSU2_TR(0x70fd41);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B70fd45:{NFSU2_TR(0x70fd45);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B70fd48:{NFSU2_TR(0x70fd48);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B70fd4b:{NFSU2_TR(0x70fd4b);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B70fd4e:{NFSU2_TR(0x70fd4e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B70fd52:{NFSU2_TR(0x70fd52);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B70fd56:{NFSU2_TR(0x70fd56);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(U+18))));
}
B70fd5a:{NFSU2_TR(0x70fd5a);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B70fd5d:{NFSU2_TR(0x70fd5d);
__builtin_memmove((R+4416),(R+4432),8);
}
B70fd60:{NFSU2_TR(0x70fd60);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B70fd63:{NFSU2_TR(0x70fd63);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B70fd66:{NFSU2_TR(0x70fd66);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B70fd6a:{NFSU2_TR(0x70fd6a);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B70fd6e:{NFSU2_TR(0x70fd6e);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B70fd72:{NFSU2_TR(0x70fd72);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B70fd75:{NFSU2_TR(0x70fd75);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B70fd78:{NFSU2_TR(0x70fd78);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B70fd7b:{NFSU2_TR(0x70fd7b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B70fd7f:{NFSU2_TR(0x70fd7f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B70fd86:{NFSU2_TR(0x70fd86);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(U+18))));
}
B70fd8a:{NFSU2_TR(0x70fd8a);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B70fd8d:{NFSU2_TR(0x70fd8d);
__builtin_memmove((R+4416),(R+4432),8);
}
B70fd90:{NFSU2_TR(0x70fd90);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B70fd93:{NFSU2_TR(0x70fd93);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B70fd96:{NFSU2_TR(0x70fd96);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B70fd9a:{NFSU2_TR(0x70fd9a);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B70fd9e:{NFSU2_TR(0x70fd9e);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B70fda2:{NFSU2_TR(0x70fda2);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B70fda5:{NFSU2_TR(0x70fda5);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B70fda8:{NFSU2_TR(0x70fda8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B70fdab:{NFSU2_TR(0x70fdab);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B70fdaf:{NFSU2_TR(0x70fdaf);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B70fdb2:{NFSU2_TR(0x70fdb2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B70fdb5:{NFSU2_TR(0x70fdb5);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),8);
__builtin_memmove((R+4432),(U+0),8);
}
B70fdb8:{NFSU2_TR(0x70fdb8);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B70fdbc:{NFSU2_TR(0x70fdbc);
__builtin_memmove((R+4400),(R+4416),8);
}
B70fdbf:{NFSU2_TR(0x70fdbf);
__builtin_memmove((R+4448),(R+4432),8);
}
B70fdc2:{NFSU2_TR(0x70fdc2);
{wv<8>((R+4416),uo::psubusw<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B70fdc5:{NFSU2_TR(0x70fdc5);
{wv<8>((R+4432),uo::psubusw<8>(rv<8>((R+4432)),rv<8>((R+4400))));}
}
B70fdc8:{NFSU2_TR(0x70fdc8);
w8(R+4416,u64(u64(r8(R+4416))|u64(r8(R+4432))));
}
B70fdcb:{NFSU2_TR(0x70fdcb);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B70fdcf:{NFSU2_TR(0x70fdcf);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0xfull)));}
}
B70fdd3:{NFSU2_TR(0x70fdd3);
__builtin_memmove((R+4368),(R+4416),8);
}
B70fdd6:{NFSU2_TR(0x70fdd6);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4448))));
}
B70fdd9:{NFSU2_TR(0x70fdd9);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4368))));
w8(R+4368,u64(u64(r8(U+0))&u64(r8(R+4400))));
}
B70fddc:{NFSU2_TR(0x70fddc);
w8(R+4368,u64(u64(r8(R+4368))|u64(r8(R+4416))));
}
B70fddf:{NFSU2_TR(0x70fddf);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B70fde6:{NFSU2_TR(0x70fde6);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B70fded:{NFSU2_TR(0x70fded);
__builtin_memmove((R+4400),(R+4416),8);
}
B70fdf0:{NFSU2_TR(0x70fdf0);
__builtin_memmove((R+4448),(R+4432),8);
}
B70fdf3:{NFSU2_TR(0x70fdf3);
{wv<8>((R+4416),uo::psubusw<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B70fdf6:{NFSU2_TR(0x70fdf6);
{wv<8>((R+4432),uo::psubusw<8>(rv<8>((R+4432)),rv<8>((R+4400))));}
}
B70fdf9:{NFSU2_TR(0x70fdf9);
w8(R+4416,u64(u64(r8(R+4416))|u64(r8(R+4432))));
}
B70fdfc:{NFSU2_TR(0x70fdfc);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B70fe00:{NFSU2_TR(0x70fe00);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0xfull)));}
}
B70fe04:{NFSU2_TR(0x70fe04);
__builtin_memmove((R+4384),(R+4416),8);
}
B70fe07:{NFSU2_TR(0x70fe07);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4448))));
}
B70fe0a:{NFSU2_TR(0x70fe0a);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4384))));
w8(R+4384,u64(u64(r8(U+0))&u64(r8(R+4400))));
}
B70fe0d:{NFSU2_TR(0x70fe0d);
w8(R+4384,u64(u64(r8(R+4384))|u64(r8(R+4416))));
}
B70fe10:{NFSU2_TR(0x70fe10);
__builtin_memmove((R+4400),(R+4368),8);
}
B70fe13:{NFSU2_TR(0x70fe13);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4400))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4402))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4404))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4406))));
}
B70fe16:{NFSU2_TR(0x70fe16);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4374))));
}
B70fe19:{NFSU2_TR(0x70fe19);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B70fe1d:{NFSU2_TR(0x70fe1d);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B70fe21:{NFSU2_TR(0x70fe21);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B70fe25:{NFSU2_TR(0x70fe25);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B70fe29:{NFSU2_TR(0x70fe29);
u8 U[8];
__builtin_memmove((U+0),gp(0x8175c0),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+0))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+2))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+4))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+6))));
}
B70fe30:{NFSU2_TR(0x70fe30);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4416))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4418))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4420))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4422))));
}
B70fe33:{NFSU2_TR(0x70fe33);
__builtin_memmove((R+4416),(R+4400),8);
}
B70fe36:{NFSU2_TR(0x70fe36);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B70fe3a:{NFSU2_TR(0x70fe3a);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B70fe3d:{NFSU2_TR(0x70fe3d);
{wv<8>((R+4416),uo::psllw<8>(rv<8>((R+4416)),V(0x1ull)));}
}
B70fe41:{NFSU2_TR(0x70fe41);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B70fe45:{NFSU2_TR(0x70fe45);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B70fe49:{NFSU2_TR(0x70fe49);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B70fe4d:{NFSU2_TR(0x70fe4d);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B70fe50:{NFSU2_TR(0x70fe50);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4352))));
}
B70fe53:{NFSU2_TR(0x70fe53);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B70fe56:{NFSU2_TR(0x70fe56);
u8 U[8];
__builtin_memmove((U+0),(R+4416),8);
s8_(u32(r4(R+24)),r8(U+0));
}
B70fe59:{NFSU2_TR(0x70fe59);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B70fe5d:{NFSU2_TR(0x70fe5d);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4374))));
}
B70fe60:{NFSU2_TR(0x70fe60);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B70fe64:{NFSU2_TR(0x70fe64);
__builtin_memmove((R+4416),(R+4432),8);
}
B70fe67:{NFSU2_TR(0x70fe67);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B70fe6a:{NFSU2_TR(0x70fe6a);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B70fe6d:{NFSU2_TR(0x70fe6d);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B70fe71:{NFSU2_TR(0x70fe71);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B70fe75:{NFSU2_TR(0x70fe75);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B70fe79:{NFSU2_TR(0x70fe79);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B70fe7c:{NFSU2_TR(0x70fe7c);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4352))));
}
B70fe7f:{NFSU2_TR(0x70fe7f);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B70fe82:{NFSU2_TR(0x70fe82);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B70fe86:{NFSU2_TR(0x70fe86);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B70fe8a:{NFSU2_TR(0x70fe8a);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4374))));
}
B70fe8d:{NFSU2_TR(0x70fe8d);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B70fe91:{NFSU2_TR(0x70fe91);
__builtin_memmove((R+4416),(R+4432),8);
}
B70fe94:{NFSU2_TR(0x70fe94);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B70fe97:{NFSU2_TR(0x70fe97);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B70fe9a:{NFSU2_TR(0x70fe9a);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B70fe9e:{NFSU2_TR(0x70fe9e);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B70fea2:{NFSU2_TR(0x70fea2);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B70fea6:{NFSU2_TR(0x70fea6);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B70fea9:{NFSU2_TR(0x70fea9);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4352))));
}
B70feac:{NFSU2_TR(0x70feac);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B70feaf:{NFSU2_TR(0x70feaf);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B70feb3:{NFSU2_TR(0x70feb3);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B70feb7:{NFSU2_TR(0x70feb7);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4374))));
}
B70feba:{NFSU2_TR(0x70feba);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B70febe:{NFSU2_TR(0x70febe);
__builtin_memmove((R+4416),(R+4432),8);
}
B70fec1:{NFSU2_TR(0x70fec1);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B70fec4:{NFSU2_TR(0x70fec4);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B70fec7:{NFSU2_TR(0x70fec7);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4368))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4370))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4372))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4374))));
}
B70feca:{NFSU2_TR(0x70feca);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B70fece:{NFSU2_TR(0x70fece);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B70fed2:{NFSU2_TR(0x70fed2);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B70fed9:{NFSU2_TR(0x70fed9);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B70fedd:{NFSU2_TR(0x70fedd);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B70fee0:{NFSU2_TR(0x70fee0);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4352))));
}
B70fee3:{NFSU2_TR(0x70fee3);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B70fee6:{NFSU2_TR(0x70fee6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B70feea:{NFSU2_TR(0x70feea);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B70feee:{NFSU2_TR(0x70feee);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(U+18))));
}
B70fef2:{NFSU2_TR(0x70fef2);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B70fef9:{NFSU2_TR(0x70fef9);
__builtin_memmove((R+4416),(R+4432),8);
}
B70fefc:{NFSU2_TR(0x70fefc);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B70feff:{NFSU2_TR(0x70feff);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B70ff02:{NFSU2_TR(0x70ff02);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B70ff06:{NFSU2_TR(0x70ff06);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B70ff0a:{NFSU2_TR(0x70ff0a);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B70ff11:{NFSU2_TR(0x70ff11);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4384))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4386))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4388))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4390))));
}
B70ff14:{NFSU2_TR(0x70ff14);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B70ff18:{NFSU2_TR(0x70ff18);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B70ff1b:{NFSU2_TR(0x70ff1b);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4352))));
}
B70ff1e:{NFSU2_TR(0x70ff1e);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B70ff21:{NFSU2_TR(0x70ff21);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B70ff25:{NFSU2_TR(0x70ff25);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B70ff29:{NFSU2_TR(0x70ff29);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(U+18))));
}
B70ff2d:{NFSU2_TR(0x70ff2d);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B70ff30:{NFSU2_TR(0x70ff30);
__builtin_memmove((R+4416),(R+4432),8);
}
B70ff33:{NFSU2_TR(0x70ff33);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B70ff36:{NFSU2_TR(0x70ff36);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B70ff39:{NFSU2_TR(0x70ff39);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B70ff3d:{NFSU2_TR(0x70ff3d);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B70ff41:{NFSU2_TR(0x70ff41);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B70ff45:{NFSU2_TR(0x70ff45);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B70ff48:{NFSU2_TR(0x70ff48);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4352))));
}
B70ff4b:{NFSU2_TR(0x70ff4b);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B70ff4e:{NFSU2_TR(0x70ff4e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B70ff52:{NFSU2_TR(0x70ff52);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B70ff56:{NFSU2_TR(0x70ff56);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(U+18))));
}
B70ff5a:{NFSU2_TR(0x70ff5a);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B70ff5d:{NFSU2_TR(0x70ff5d);
__builtin_memmove((R+4416),(R+4432),8);
}
B70ff60:{NFSU2_TR(0x70ff60);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B70ff63:{NFSU2_TR(0x70ff63);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B70ff66:{NFSU2_TR(0x70ff66);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B70ff6a:{NFSU2_TR(0x70ff6a);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B70ff6e:{NFSU2_TR(0x70ff6e);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B70ff72:{NFSU2_TR(0x70ff72);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B70ff75:{NFSU2_TR(0x70ff75);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4352))));
}
B70ff78:{NFSU2_TR(0x70ff78);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B70ff7b:{NFSU2_TR(0x70ff7b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B70ff7f:{NFSU2_TR(0x70ff7f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B70ff86:{NFSU2_TR(0x70ff86);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(U+18))));
}
B70ff8a:{NFSU2_TR(0x70ff8a);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B70ff8d:{NFSU2_TR(0x70ff8d);
__builtin_memmove((R+4416),(R+4432),8);
}
B70ff90:{NFSU2_TR(0x70ff90);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B70ff93:{NFSU2_TR(0x70ff93);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B70ff96:{NFSU2_TR(0x70ff96);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B70ff9a:{NFSU2_TR(0x70ff9a);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(U+18))));
}
B70ff9e:{NFSU2_TR(0x70ff9e);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x4ull)));}
}
B70ffa2:{NFSU2_TR(0x70ffa2);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B70ffa5:{NFSU2_TR(0x70ffa5);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4352))));
}
B70ffa8:{NFSU2_TR(0x70ffa8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B70ffab:{NFSU2_TR(0x70ffab);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B70ffaf:{NFSU2_TR(0x70ffaf);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B70ffb2:{NFSU2_TR(0x70ffb2);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x8ull))));
}
B70ffb5:{NFSU2_TR(0x70ffb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B70ffb8:{NFSU2_TR(0x70ffb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B70ffbc:{NFSU2_TR(0x70ffbc);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B70ffbf:{NFSU2_TR(0x70ffbf);
u8 U[42];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+17),(R+4352),8);
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+25),(U+4),8);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+14,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+34,u8(r2(U+17)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+34))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4352),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+14,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+35,u8(r2(U+19)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+35))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4353),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+14,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+36,u8(r2(U+21)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+36))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4354),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+14,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+37,u8(r2(U+23)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+37))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4355),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+14,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+38,u8(r2(U+25)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+38))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4356),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+14,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+39,u8(r2(U+27)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+39))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4357),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+14,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+40,u8(r2(U+29)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+40))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4358),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+14,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+41,u8(r2(U+31)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+41))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4359),(U+33),1);
}
B70ffc3:{NFSU2_TR(0x70ffc3);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+20)),r8(U+0));
}
B70ffc7:{NFSU2_TR(0x70ffc7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B70ffcb:{NFSU2_TR(0x70ffcb);
u8 U[42];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+17),(R+4368),8);
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+25),(U+4),8);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+14,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+34,u8(r2(U+17)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+34))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4368),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+14,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+35,u8(r2(U+19)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+35))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4369),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+14,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+36,u8(r2(U+21)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+36))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4370),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+14,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+37,u8(r2(U+23)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+37))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4371),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+14,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+38,u8(r2(U+25)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+38))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4372),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+14,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+39,u8(r2(U+27)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+39))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4373),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+14,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+40,u8(r2(U+29)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+40))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4374),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+14,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+41,u8(r2(U+31)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+41))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4375),(U+33),1);
}
B70ffcf:{NFSU2_TR(0x70ffcf);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4368),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B70ffd4:{NFSU2_TR(0x70ffd4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B70ffd8:{NFSU2_TR(0x70ffd8);
u8 U[42];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+17),(R+4384),8);
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+25),(U+4),8);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+14,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+34,u8(r2(U+17)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+34))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4384),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+14,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+35,u8(r2(U+19)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+35))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4385),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+14,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+36,u8(r2(U+21)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+36))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4386),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+14,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+37,u8(r2(U+23)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+37))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4387),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+14,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+38,u8(r2(U+25)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+38))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4388),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+14,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+39,u8(r2(U+27)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+39))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4389),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+14,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+40,u8(r2(U+29)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+40))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4390),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+14,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+41,u8(r2(U+31)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+41))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4391),(U+33),1);
}
B70ffdc:{NFSU2_TR(0x70ffdc);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4384),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B70ffe1:{NFSU2_TR(0x70ffe1);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B70ffe5:{NFSU2_TR(0x70ffe5);
u8 U[42];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+17),(R+4400),8);
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+25),(U+4),8);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+14,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+34,u8(r2(U+17)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+34))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4400),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+14,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+35,u8(r2(U+19)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+35))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4401),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+14,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+36,u8(r2(U+21)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+36))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4402),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+14,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+37,u8(r2(U+23)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+37))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4403),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+14,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+38,u8(r2(U+25)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+38))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4404),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+14,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+39,u8(r2(U+27)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+39))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4405),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+14,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+40,u8(r2(U+29)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+40))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4406),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+14,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+41,u8(r2(U+31)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+41))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4407),(U+33),1);
}
B70ffe9:{NFSU2_TR(0x70ffe9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B70ffed:{NFSU2_TR(0x70ffed);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4400),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B70fff2:{NFSU2_TR(0x70fff2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B70fff6:{NFSU2_TR(0x70fff6);
u8 U[42];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+17),(R+4352),8);
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+25),(U+4),8);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+14,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+34,u8(r2(U+17)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+34))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4352),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+14,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+35,u8(r2(U+19)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+35))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4353),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+14,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+36,u8(r2(U+21)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+36))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4354),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+14,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+37,u8(r2(U+23)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+37))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4355),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+14,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+38,u8(r2(U+25)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+38))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4356),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+14,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+39,u8(r2(U+27)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+39))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4357),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+14,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+40,u8(r2(U+29)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+40))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4358),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+14,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+41,u8(r2(U+31)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+41))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4359),(U+33),1);
}
B70fffa:{NFSU2_TR(0x70fffa);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+20)),r8(U+0));
}
B70fffe:{NFSU2_TR(0x70fffe);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
TAIL_STATIC(0x710002u,710);
}
XIT:NFSU2_TR_EXIT(0x70f,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
