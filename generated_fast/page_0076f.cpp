#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_76e(u8* __restrict R,Cpu& c);
u32 body_770(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x76f,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x76f,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_76f(u8* __restrict R,Cpu& c);
u32 page_76f(Cpu& c){return body_76f(c.regs.data(),c);}
__attribute__((noinline)) u32 body_76f(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x76f000:goto L76f000;
case 0x76f003:c.instructions+=3;goto B76f003;
case 0x76f005:c.instructions+=2;goto B76f005;
case 0x76f008:c.instructions+=1;goto B76f008;
case 0x76f00a:goto L76f00a;
case 0x76f00d:goto L76f00d;
case 0x76f011:c.instructions+=1;goto B76f011;
case 0x76f013:goto L76f013;
case 0x76f015:c.instructions+=1;goto B76f015;
case 0x76f017:goto L76f017;
case 0x76f01a:c.instructions+=4;goto B76f01a;
case 0x76f01d:c.instructions+=3;goto B76f01d;
case 0x76f020:c.instructions+=2;goto B76f020;
case 0x76f024:c.instructions+=1;goto B76f024;
case 0x76f026:goto L76f026;
case 0x76f029:c.instructions+=3;goto B76f029;
case 0x76f02b:c.instructions+=2;goto B76f02b;
case 0x76f02e:c.instructions+=1;goto B76f02e;
case 0x76f033:goto L76f033;
case 0x76f036:c.instructions+=1;goto B76f036;
case 0x76f039:goto L76f039;
case 0x76f03c:c.instructions+=3;goto B76f03c;
case 0x76f03e:c.instructions+=2;goto B76f03e;
case 0x76f040:c.instructions+=1;goto B76f040;
case 0x76f043:goto L76f043;
case 0x76f045:goto L76f045;
case 0x76f047:c.instructions+=1;goto B76f047;
case 0x76f04a:goto L76f04a;
case 0x76f04c:goto L76f04c;
case 0x76f04e:c.instructions+=3;goto B76f04e;
case 0x76f051:c.instructions+=2;goto B76f051;
case 0x76f053:c.instructions+=1;goto B76f053;
case 0x76f056:goto L76f056;
case 0x76f059:c.instructions+=3;goto B76f059;
case 0x76f05c:c.instructions+=2;goto B76f05c;
case 0x76f05f:c.instructions+=1;goto B76f05f;
case 0x76f061:goto L76f061;
case 0x76f064:c.instructions+=10;goto B76f064;
case 0x76f067:c.instructions+=9;goto B76f067;
case 0x76f06a:c.instructions+=8;goto B76f06a;
case 0x76f06d:c.instructions+=7;goto B76f06d;
case 0x76f070:c.instructions+=6;goto B76f070;
case 0x76f073:c.instructions+=5;goto B76f073;
case 0x76f075:c.instructions+=4;goto B76f075;
case 0x76f079:c.instructions+=3;goto B76f079;
case 0x76f07b:c.instructions+=2;goto B76f07b;
case 0x76f07e:c.instructions+=1;goto B76f07e;
case 0x76f081:goto L76f081;
case 0x76f087:c.instructions+=1;goto B76f087;
case 0x76f089:goto L76f089;
case 0x76f08b:c.instructions+=2;goto B76f08b;
case 0x76f08f:c.instructions+=1;goto B76f08f;
case 0x76f095:goto L76f095;
case 0x76f096:c.instructions+=3;goto B76f096;
case 0x76f097:c.instructions+=2;goto B76f097;
case 0x76f098:c.instructions+=1;goto B76f098;
case 0x76f099:goto L76f099;
case 0x76f09a:c.instructions+=11;goto B76f09a;
case 0x76f09c:c.instructions+=10;goto B76f09c;
case 0x76f09d:c.instructions+=9;goto B76f09d;
case 0x76f0a0:c.instructions+=8;goto B76f0a0;
case 0x76f0a3:c.instructions+=7;goto B76f0a3;
case 0x76f0a8:c.instructions+=6;goto B76f0a8;
case 0x76f0a9:c.instructions+=5;goto B76f0a9;
case 0x76f0ac:c.instructions+=4;goto B76f0ac;
case 0x76f0ae:c.instructions+=3;goto B76f0ae;
case 0x76f0af:c.instructions+=2;goto B76f0af;
case 0x76f0b1:c.instructions+=1;goto B76f0b1;
case 0x76f0b3:goto L76f0b3;
case 0x76f0b5:goto L76f0b5;
case 0x76f0b7:goto L76f0b7;
case 0x76f0ba:c.instructions+=2;goto B76f0ba;
case 0x76f0bd:c.instructions+=1;goto B76f0bd;
case 0x76f0bf:goto L76f0bf;
case 0x76f0c4:goto L76f0c4;
case 0x76f0c7:c.instructions+=2;goto B76f0c7;
case 0x76f0c9:c.instructions+=1;goto B76f0c9;
case 0x76f0cf:goto L76f0cf;
case 0x76f0d2:c.instructions+=5;goto B76f0d2;
case 0x76f0d5:c.instructions+=4;goto B76f0d5;
case 0x76f0d8:c.instructions+=3;goto B76f0d8;
case 0x76f0db:c.instructions+=2;goto B76f0db;
case 0x76f0de:c.instructions+=1;goto B76f0de;
case 0x76f0e0:goto L76f0e0;
case 0x76f0e2:c.instructions+=1;goto B76f0e2;
case 0x76f0e4:goto L76f0e4;
case 0x76f0e6:c.instructions+=4;goto B76f0e6;
case 0x76f0e8:c.instructions+=3;goto B76f0e8;
case 0x76f0eb:c.instructions+=2;goto B76f0eb;
case 0x76f0ee:c.instructions+=1;goto B76f0ee;
case 0x76f0f0:goto L76f0f0;
case 0x76f0f3:c.instructions+=2;goto B76f0f3;
case 0x76f0f5:c.instructions+=1;goto B76f0f5;
case 0x76f0f7:goto L76f0f7;
case 0x76f0f9:goto L76f0f9;
case 0x76f0fa:c.instructions+=5;goto B76f0fa;
case 0x76f0fc:c.instructions+=4;goto B76f0fc;
case 0x76f0fd:c.instructions+=3;goto B76f0fd;
case 0x76f0fe:c.instructions+=2;goto B76f0fe;
case 0x76f0ff:c.instructions+=1;goto B76f0ff;
case 0x76f104:goto L76f104;
case 0x76f107:c.instructions+=3;goto B76f107;
case 0x76f10a:c.instructions+=2;goto B76f10a;
case 0x76f10c:c.instructions+=1;goto B76f10c;
case 0x76f111:goto L76f111;
case 0x76f113:c.instructions+=2;goto B76f113;
case 0x76f116:c.instructions+=1;goto B76f116;
case 0x76f118:goto L76f118;
case 0x76f11b:c.instructions+=6;goto B76f11b;
case 0x76f11e:c.instructions+=5;goto B76f11e;
case 0x76f121:c.instructions+=4;goto B76f121;
case 0x76f123:c.instructions+=3;goto B76f123;
case 0x76f128:c.instructions+=2;goto B76f128;
case 0x76f12a:c.instructions+=1;goto B76f12a;
case 0x76f12c:goto L76f12c;
case 0x76f12e:c.instructions+=1;goto B76f12e;
case 0x76f130:goto L76f130;
case 0x76f133:c.instructions+=2;goto B76f133;
case 0x76f135:c.instructions+=1;goto B76f135;
case 0x76f137:goto L76f137;
case 0x76f139:goto L76f139;
case 0x76f13a:c.instructions+=4;goto B76f13a;
case 0x76f13b:c.instructions+=3;goto B76f13b;
case 0x76f13c:c.instructions+=2;goto B76f13c;
case 0x76f13d:c.instructions+=1;goto B76f13d;
case 0x76f142:goto L76f142;
case 0x76f145:c.instructions+=3;goto B76f145;
case 0x76f148:c.instructions+=2;goto B76f148;
case 0x76f14a:c.instructions+=1;goto B76f14a;
case 0x76f14f:goto L76f14f;
case 0x76f151:c.instructions+=2;goto B76f151;
case 0x76f154:c.instructions+=1;goto B76f154;
case 0x76f15a:goto L76f15a;
case 0x76f15c:goto L76f15c;
case 0x76f15d:c.instructions+=4;goto B76f15d;
case 0x76f15e:c.instructions+=3;goto B76f15e;
case 0x76f15f:c.instructions+=2;goto B76f15f;
case 0x76f160:c.instructions+=1;goto B76f160;
case 0x76f163:goto L76f163;
case 0x76f166:c.instructions+=1;goto B76f166;
case 0x76f168:goto L76f168;
case 0x76f16b:c.instructions+=2;goto B76f16b;
case 0x76f16d:c.instructions+=1;goto B76f16d;
case 0x76f16f:goto L76f16f;
case 0x76f172:c.instructions+=2;goto B76f172;
case 0x76f174:c.instructions+=1;goto B76f174;
case 0x76f176:goto L76f176;
case 0x76f178:goto L76f178;
case 0x76f17a:c.instructions+=9;goto B76f17a;
case 0x76f17e:c.instructions+=8;goto B76f17e;
case 0x76f181:c.instructions+=7;goto B76f181;
case 0x76f182:c.instructions+=6;goto B76f182;
case 0x76f185:c.instructions+=5;goto B76f185;
case 0x76f187:c.instructions+=4;goto B76f187;
case 0x76f188:c.instructions+=3;goto B76f188;
case 0x76f189:c.instructions+=2;goto B76f189;
case 0x76f18a:c.instructions+=1;goto B76f18a;
case 0x76f18f:goto L76f18f;
case 0x76f192:c.instructions+=3;goto B76f192;
case 0x76f195:c.instructions+=2;goto B76f195;
case 0x76f197:c.instructions+=1;goto B76f197;
case 0x76f19c:goto L76f19c;
case 0x76f19e:c.instructions+=2;goto B76f19e;
case 0x76f1a1:c.instructions+=1;goto B76f1a1;
case 0x76f1a3:goto L76f1a3;
case 0x76f1a7:c.instructions+=1;goto B76f1a7;
case 0x76f1a9:goto L76f1a9;
case 0x76f1ab:c.instructions+=2;goto B76f1ab;
case 0x76f1ac:c.instructions+=1;goto B76f1ac;
case 0x76f1ae:goto L76f1ae;
case 0x76f1b0:c.instructions+=4;goto B76f1b0;
case 0x76f1b4:c.instructions+=3;goto B76f1b4;
case 0x76f1b7:c.instructions+=2;goto B76f1b7;
case 0x76f1bb:c.instructions+=1;goto B76f1bb;
case 0x76f1bd:goto L76f1bd;
case 0x76f1be:c.instructions+=6;goto B76f1be;
case 0x76f1bf:c.instructions+=5;goto B76f1bf;
case 0x76f1c0:c.instructions+=4;goto B76f1c0;
case 0x76f1c4:c.instructions+=3;goto B76f1c4;
case 0x76f1c5:c.instructions+=2;goto B76f1c5;
case 0x76f1c7:c.instructions+=1;goto B76f1c7;
case 0x76f1cc:goto L76f1cc;
case 0x76f1cf:c.instructions+=2;goto B76f1cf;
case 0x76f1d1:c.instructions+=1;goto B76f1d1;
case 0x76f1d3:goto L76f1d3;
case 0x76f1d5:c.instructions+=1;goto B76f1d5;
case 0x76f1da:goto L76f1da;
case 0x76f1dd:c.instructions+=2;goto B76f1dd;
case 0x76f1df:c.instructions+=1;goto B76f1df;
case 0x76f1e1:goto L76f1e1;
case 0x76f1e6:c.instructions+=1;goto B76f1e6;
case 0x76f1ec:goto L76f1ec;
case 0x76f1ee:c.instructions+=1;goto B76f1ee;
case 0x76f1f4:goto L76f1f4;
case 0x76f1f7:c.instructions+=1;goto B76f1f7;
case 0x76f1f9:goto L76f1f9;
case 0x76f1fc:c.instructions+=18;goto B76f1fc;
case 0x76f1ff:c.instructions+=17;goto B76f1ff;
case 0x76f202:c.instructions+=16;goto B76f202;
case 0x76f204:c.instructions+=15;goto B76f204;
case 0x76f207:c.instructions+=14;goto B76f207;
case 0x76f20c:c.instructions+=13;goto B76f20c;
case 0x76f20e:c.instructions+=12;goto B76f20e;
case 0x76f211:c.instructions+=11;goto B76f211;
case 0x76f214:c.instructions+=10;goto B76f214;
case 0x76f217:c.instructions+=9;goto B76f217;
case 0x76f21b:c.instructions+=8;goto B76f21b;
case 0x76f21e:c.instructions+=7;goto B76f21e;
case 0x76f221:c.instructions+=6;goto B76f221;
case 0x76f223:c.instructions+=5;goto B76f223;
case 0x76f227:c.instructions+=4;goto B76f227;
case 0x76f22a:c.instructions+=3;goto B76f22a;
case 0x76f22d:c.instructions+=2;goto B76f22d;
case 0x76f231:c.instructions+=1;goto B76f231;
case 0x76f235:goto L76f235;
case 0x76f237:c.instructions+=1;goto B76f237;
case 0x76f239:goto L76f239;
case 0x76f23c:c.instructions+=5;goto B76f23c;
case 0x76f23f:c.instructions+=4;goto B76f23f;
case 0x76f241:c.instructions+=3;goto B76f241;
case 0x76f243:c.instructions+=2;goto B76f243;
case 0x76f245:c.instructions+=1;goto B76f245;
case 0x76f247:goto L76f247;
case 0x76f24e:c.instructions+=1;goto B76f24e;
case 0x76f250:goto L76f250;
case 0x76f251:c.instructions+=2;goto B76f251;
case 0x76f253:c.instructions+=1;goto B76f253;
case 0x76f258:goto L76f258;
case 0x76f25b:goto L76f25b;
case 0x76f25f:c.instructions+=1;goto B76f25f;
case 0x76f265:goto L76f265;
case 0x76f26b:c.instructions+=19;goto B76f26b;
case 0x76f26e:c.instructions+=18;goto B76f26e;
case 0x76f274:c.instructions+=17;goto B76f274;
case 0x76f276:c.instructions+=16;goto B76f276;
case 0x76f27a:c.instructions+=15;goto B76f27a;
case 0x76f27e:c.instructions+=14;goto B76f27e;
case 0x76f281:c.instructions+=13;goto B76f281;
case 0x76f285:c.instructions+=12;goto B76f285;
case 0x76f28b:c.instructions+=11;goto B76f28b;
case 0x76f291:c.instructions+=10;goto B76f291;
case 0x76f294:c.instructions+=9;goto B76f294;
case 0x76f29a:c.instructions+=8;goto B76f29a;
case 0x76f29d:c.instructions+=7;goto B76f29d;
case 0x76f2a4:c.instructions+=6;goto B76f2a4;
case 0x76f2a9:c.instructions+=5;goto B76f2a9;
case 0x76f2b0:c.instructions+=4;goto B76f2b0;
case 0x76f2b3:c.instructions+=3;goto B76f2b3;
case 0x76f2b7:c.instructions+=2;goto B76f2b7;
case 0x76f2ba:c.instructions+=1;goto B76f2ba;
case 0x76f2bc:goto L76f2bc;
case 0x76f2c3:c.instructions+=1;goto B76f2c3;
case 0x76f2c5:goto L76f2c5;
case 0x76f2c8:c.instructions+=1;goto B76f2c8;
case 0x76f2cf:goto L76f2cf;
case 0x76f2d6:c.instructions+=11;goto B76f2d6;
case 0x76f2d9:c.instructions+=10;goto B76f2d9;
case 0x76f2df:c.instructions+=9;goto B76f2df;
case 0x76f2e0:c.instructions+=8;goto B76f2e0;
case 0x76f2e2:c.instructions+=7;goto B76f2e2;
case 0x76f2e8:c.instructions+=6;goto B76f2e8;
case 0x76f2eb:c.instructions+=5;goto B76f2eb;
case 0x76f2ee:c.instructions+=4;goto B76f2ee;
case 0x76f2f1:c.instructions+=3;goto B76f2f1;
case 0x76f2f4:c.instructions+=2;goto B76f2f4;
case 0x76f2f7:c.instructions+=1;goto B76f2f7;
case 0x76f2f9:goto L76f2f9;
case 0x76f2fc:c.instructions+=1;goto B76f2fc;
case 0x76f2fe:goto L76f2fe;
case 0x76f2ff:c.instructions+=1;goto B76f2ff;
case 0x76f302:goto L76f302;
case 0x76f305:c.instructions+=20;goto B76f305;
case 0x76f308:c.instructions+=19;goto B76f308;
case 0x76f30b:c.instructions+=18;goto B76f30b;
case 0x76f30e:c.instructions+=17;goto B76f30e;
case 0x76f311:c.instructions+=16;goto B76f311;
case 0x76f316:c.instructions+=15;goto B76f316;
case 0x76f319:c.instructions+=14;goto B76f319;
case 0x76f31b:c.instructions+=13;goto B76f31b;
case 0x76f31e:c.instructions+=12;goto B76f31e;
case 0x76f320:c.instructions+=11;goto B76f320;
case 0x76f323:c.instructions+=10;goto B76f323;
case 0x76f326:c.instructions+=9;goto B76f326;
case 0x76f32a:c.instructions+=8;goto B76f32a;
case 0x76f32d:c.instructions+=7;goto B76f32d;
case 0x76f331:c.instructions+=6;goto B76f331;
case 0x76f334:c.instructions+=5;goto B76f334;
case 0x76f337:c.instructions+=4;goto B76f337;
case 0x76f33b:c.instructions+=3;goto B76f33b;
case 0x76f33f:c.instructions+=2;goto B76f33f;
case 0x76f342:c.instructions+=1;goto B76f342;
case 0x76f344:goto L76f344;
case 0x76f346:goto L76f346;
case 0x76f349:c.instructions+=13;goto B76f349;
case 0x76f34c:c.instructions+=12;goto B76f34c;
case 0x76f34f:c.instructions+=11;goto B76f34f;
case 0x76f353:c.instructions+=10;goto B76f353;
case 0x76f356:c.instructions+=9;goto B76f356;
case 0x76f359:c.instructions+=8;goto B76f359;
case 0x76f35c:c.instructions+=7;goto B76f35c;
case 0x76f35f:c.instructions+=6;goto B76f35f;
case 0x76f361:c.instructions+=5;goto B76f361;
case 0x76f365:c.instructions+=4;goto B76f365;
case 0x76f367:c.instructions+=3;goto B76f367;
case 0x76f36a:c.instructions+=2;goto B76f36a;
case 0x76f36d:c.instructions+=1;goto B76f36d;
case 0x76f36f:goto L76f36f;
case 0x76f372:c.instructions+=18;goto B76f372;
case 0x76f375:c.instructions+=17;goto B76f375;
case 0x76f378:c.instructions+=16;goto B76f378;
case 0x76f37e:c.instructions+=15;goto B76f37e;
case 0x76f384:c.instructions+=14;goto B76f384;
case 0x76f389:c.instructions+=13;goto B76f389;
case 0x76f38f:c.instructions+=12;goto B76f38f;
case 0x76f395:c.instructions+=11;goto B76f395;
case 0x76f398:c.instructions+=10;goto B76f398;
case 0x76f39e:c.instructions+=9;goto B76f39e;
case 0x76f3a1:c.instructions+=8;goto B76f3a1;
case 0x76f3a8:c.instructions+=7;goto B76f3a8;
case 0x76f3ab:c.instructions+=6;goto B76f3ab;
case 0x76f3b1:c.instructions+=5;goto B76f3b1;
case 0x76f3b2:c.instructions+=4;goto B76f3b2;
case 0x76f3b4:c.instructions+=3;goto B76f3b4;
case 0x76f3ba:c.instructions+=2;goto B76f3ba;
case 0x76f3bd:c.instructions+=1;goto B76f3bd;
case 0x76f3c0:goto L76f3c0;
case 0x76f3c3:goto L76f3c3;
case 0x76f3c5:c.instructions+=1;goto B76f3c5;
case 0x76f3cb:goto L76f3cb;
case 0x76f3ce:c.instructions+=2;goto B76f3ce;
case 0x76f3d0:c.instructions+=1;goto B76f3d0;
case 0x76f3d2:goto L76f3d2;
case 0x76f3d5:c.instructions+=2;goto B76f3d5;
case 0x76f3d7:c.instructions+=1;goto B76f3d7;
case 0x76f3d9:goto L76f3d9;
case 0x76f3db:goto L76f3db;
case 0x76f3de:c.instructions+=6;goto B76f3de;
case 0x76f3e0:c.instructions+=5;goto B76f3e0;
case 0x76f3e2:c.instructions+=4;goto B76f3e2;
case 0x76f3e3:c.instructions+=3;goto B76f3e3;
case 0x76f3e4:c.instructions+=2;goto B76f3e4;
case 0x76f3e5:c.instructions+=1;goto B76f3e5;
case 0x76f3ea:goto L76f3ea;
case 0x76f3ed:c.instructions+=3;goto B76f3ed;
case 0x76f3f0:c.instructions+=2;goto B76f3f0;
case 0x76f3f2:c.instructions+=1;goto B76f3f2;
case 0x76f3f7:goto L76f3f7;
case 0x76f3f9:c.instructions+=2;goto B76f3f9;
case 0x76f3fd:c.instructions+=1;goto B76f3fd;
case 0x76f403:goto L76f403;
case 0x76f405:goto L76f405;
case 0x76f406:c.instructions+=4;goto B76f406;
case 0x76f407:c.instructions+=3;goto B76f407;
case 0x76f408:c.instructions+=2;goto B76f408;
case 0x76f409:c.instructions+=1;goto B76f409;
case 0x76f40c:goto L76f40c;
case 0x76f40f:c.instructions+=2;goto B76f40f;
case 0x76f411:c.instructions+=1;goto B76f411;
case 0x76f413:goto L76f413;
case 0x76f416:c.instructions+=2;goto B76f416;
case 0x76f418:c.instructions+=1;goto B76f418;
case 0x76f41a:goto L76f41a;
case 0x76f41c:goto L76f41c;
case 0x76f420:c.instructions+=10;goto B76f420;
case 0x76f422:c.instructions+=9;goto B76f422;
case 0x76f425:c.instructions+=8;goto B76f425;
case 0x76f428:c.instructions+=7;goto B76f428;
case 0x76f429:c.instructions+=6;goto B76f429;
case 0x76f42c:c.instructions+=5;goto B76f42c;
case 0x76f42e:c.instructions+=4;goto B76f42e;
case 0x76f42f:c.instructions+=3;goto B76f42f;
case 0x76f430:c.instructions+=2;goto B76f430;
case 0x76f431:c.instructions+=1;goto B76f431;
case 0x76f436:goto L76f436;
case 0x76f439:c.instructions+=3;goto B76f439;
case 0x76f43c:c.instructions+=2;goto B76f43c;
case 0x76f43e:c.instructions+=1;goto B76f43e;
case 0x76f443:goto L76f443;
case 0x76f445:c.instructions+=2;goto B76f445;
case 0x76f449:c.instructions+=1;goto B76f449;
case 0x76f44b:goto L76f44b;
case 0x76f44e:c.instructions+=1;goto B76f44e;
case 0x76f450:goto L76f450;
case 0x76f452:c.instructions+=2;goto B76f452;
case 0x76f453:c.instructions+=1;goto B76f453;
case 0x76f455:goto L76f455;
case 0x76f457:c.instructions+=4;goto B76f457;
case 0x76f45a:c.instructions+=3;goto B76f45a;
case 0x76f45d:c.instructions+=2;goto B76f45d;
case 0x76f461:c.instructions+=1;goto B76f461;
case 0x76f463:goto L76f463;
case 0x76f464:c.instructions+=5;goto B76f464;
case 0x76f465:c.instructions+=4;goto B76f465;
case 0x76f466:c.instructions+=3;goto B76f466;
case 0x76f46a:c.instructions+=2;goto B76f46a;
case 0x76f46b:c.instructions+=1;goto B76f46b;
case 0x76f46d:goto L76f46d;
case 0x76f470:c.instructions+=3;goto B76f470;
case 0x76f475:c.instructions+=2;goto B76f475;
case 0x76f477:c.instructions+=1;goto B76f477;
case 0x76f479:goto L76f479;
case 0x76f47b:c.instructions+=1;goto B76f47b;
case 0x76f480:goto L76f480;
case 0x76f483:c.instructions+=2;goto B76f483;
case 0x76f485:c.instructions+=1;goto B76f485;
case 0x76f487:goto L76f487;
case 0x76f48c:c.instructions+=1;goto B76f48c;
case 0x76f492:goto L76f492;
case 0x76f494:c.instructions+=1;goto B76f494;
case 0x76f49a:goto L76f49a;
case 0x76f49d:c.instructions+=1;goto B76f49d;
case 0x76f49f:goto L76f49f;
case 0x76f4a2:c.instructions+=18;goto B76f4a2;
case 0x76f4a5:c.instructions+=17;goto B76f4a5;
case 0x76f4a8:c.instructions+=16;goto B76f4a8;
case 0x76f4aa:c.instructions+=15;goto B76f4aa;
case 0x76f4ad:c.instructions+=14;goto B76f4ad;
case 0x76f4b2:c.instructions+=13;goto B76f4b2;
case 0x76f4b4:c.instructions+=12;goto B76f4b4;
case 0x76f4b7:c.instructions+=11;goto B76f4b7;
case 0x76f4ba:c.instructions+=10;goto B76f4ba;
case 0x76f4bd:c.instructions+=9;goto B76f4bd;
case 0x76f4c1:c.instructions+=8;goto B76f4c1;
case 0x76f4c4:c.instructions+=7;goto B76f4c4;
case 0x76f4c7:c.instructions+=6;goto B76f4c7;
case 0x76f4c9:c.instructions+=5;goto B76f4c9;
case 0x76f4cd:c.instructions+=4;goto B76f4cd;
case 0x76f4d0:c.instructions+=3;goto B76f4d0;
case 0x76f4d3:c.instructions+=2;goto B76f4d3;
case 0x76f4d7:c.instructions+=1;goto B76f4d7;
case 0x76f4db:goto L76f4db;
case 0x76f4dd:c.instructions+=8;goto B76f4dd;
case 0x76f4e0:c.instructions+=7;goto B76f4e0;
case 0x76f4e2:c.instructions+=6;goto B76f4e2;
case 0x76f4e5:c.instructions+=5;goto B76f4e5;
case 0x76f4e8:c.instructions+=4;goto B76f4e8;
case 0x76f4e9:c.instructions+=3;goto B76f4e9;
case 0x76f4ec:c.instructions+=2;goto B76f4ec;
case 0x76f4ef:c.instructions+=1;goto B76f4ef;
case 0x76f4f1:goto L76f4f1;
case 0x76f4f4:c.instructions+=2;goto B76f4f4;
case 0x76f4f7:c.instructions+=1;goto B76f4f7;
case 0x76f4f9:goto L76f4f9;
case 0x76f4fc:c.instructions+=5;goto B76f4fc;
case 0x76f4ff:c.instructions+=4;goto B76f4ff;
case 0x76f501:c.instructions+=3;goto B76f501;
case 0x76f503:c.instructions+=2;goto B76f503;
case 0x76f505:c.instructions+=1;goto B76f505;
case 0x76f507:goto L76f507;
case 0x76f50d:c.instructions+=2;goto B76f50d;
case 0x76f50f:c.instructions+=1;goto B76f50f;
case 0x76f511:goto L76f511;
case 0x76f512:c.instructions+=2;goto B76f512;
case 0x76f514:c.instructions+=1;goto B76f514;
case 0x76f519:goto L76f519;
case 0x76f51c:goto L76f51c;
case 0x76f51f:c.instructions+=2;goto B76f51f;
case 0x76f522:c.instructions+=1;goto B76f522;
case 0x76f524:goto L76f524;
case 0x76f527:c.instructions+=1;goto B76f527;
case 0x76f529:goto L76f529;
case 0x76f52c:c.instructions+=1;goto B76f52c;
case 0x76f52e:goto L76f52e;
case 0x76f531:c.instructions+=3;goto B76f531;
case 0x76f534:c.instructions+=2;goto B76f534;
case 0x76f539:c.instructions+=1;goto B76f539;
case 0x76f53b:goto L76f53b;
case 0x76f53e:goto L76f53e;
case 0x76f541:c.instructions+=2;goto B76f541;
case 0x76f544:c.instructions+=1;goto B76f544;
case 0x76f54a:goto L76f54a;
case 0x76f54d:c.instructions+=1;goto B76f54d;
case 0x76f553:goto L76f553;
case 0x76f556:c.instructions+=23;goto B76f556;
case 0x76f559:c.instructions+=22;goto B76f559;
case 0x76f55f:c.instructions+=21;goto B76f55f;
case 0x76f565:c.instructions+=20;goto B76f565;
case 0x76f569:c.instructions+=19;goto B76f569;
case 0x76f56c:c.instructions+=18;goto B76f56c;
case 0x76f56e:c.instructions+=17;goto B76f56e;
case 0x76f572:c.instructions+=16;goto B76f572;
case 0x76f576:c.instructions+=15;goto B76f576;
case 0x76f579:c.instructions+=14;goto B76f579;
case 0x76f57a:c.instructions+=13;goto B76f57a;
case 0x76f57e:c.instructions+=12;goto B76f57e;
case 0x76f584:c.instructions+=11;goto B76f584;
case 0x76f58a:c.instructions+=10;goto B76f58a;
case 0x76f58d:c.instructions+=9;goto B76f58d;
case 0x76f593:c.instructions+=8;goto B76f593;
case 0x76f596:c.instructions+=7;goto B76f596;
case 0x76f59d:c.instructions+=6;goto B76f59d;
case 0x76f5a2:c.instructions+=5;goto B76f5a2;
case 0x76f5a9:c.instructions+=4;goto B76f5a9;
case 0x76f5ac:c.instructions+=3;goto B76f5ac;
case 0x76f5b0:c.instructions+=2;goto B76f5b0;
case 0x76f5b3:c.instructions+=1;goto B76f5b3;
case 0x76f5b5:goto L76f5b5;
case 0x76f5bc:c.instructions+=1;goto B76f5bc;
case 0x76f5be:goto L76f5be;
case 0x76f5c1:c.instructions+=1;goto B76f5c1;
case 0x76f5c8:goto L76f5c8;
case 0x76f5cf:c.instructions+=13;goto B76f5cf;
case 0x76f5d2:c.instructions+=12;goto B76f5d2;
case 0x76f5d8:c.instructions+=11;goto B76f5d8;
case 0x76f5d9:c.instructions+=10;goto B76f5d9;
case 0x76f5db:c.instructions+=9;goto B76f5db;
case 0x76f5e1:c.instructions+=8;goto B76f5e1;
case 0x76f5e4:c.instructions+=7;goto B76f5e4;
case 0x76f5e7:c.instructions+=6;goto B76f5e7;
case 0x76f5e9:c.instructions+=5;goto B76f5e9;
case 0x76f5ea:c.instructions+=4;goto B76f5ea;
case 0x76f5ec:c.instructions+=3;goto B76f5ec;
case 0x76f5ef:c.instructions+=2;goto B76f5ef;
case 0x76f5f2:c.instructions+=1;goto B76f5f2;
case 0x76f5f5:goto L76f5f5;
case 0x76f5f8:c.instructions+=3;goto B76f5f8;
case 0x76f5fb:c.instructions+=2;goto B76f5fb;
case 0x76f5fd:c.instructions+=1;goto B76f5fd;
case 0x76f5ff:goto L76f5ff;
case 0x76f602:c.instructions+=17;goto B76f602;
case 0x76f605:c.instructions+=16;goto B76f605;
case 0x76f607:c.instructions+=15;goto B76f607;
case 0x76f60a:c.instructions+=14;goto B76f60a;
case 0x76f60f:c.instructions+=13;goto B76f60f;
case 0x76f611:c.instructions+=12;goto B76f611;
case 0x76f614:c.instructions+=11;goto B76f614;
case 0x76f617:c.instructions+=10;goto B76f617;
case 0x76f61a:c.instructions+=9;goto B76f61a;
case 0x76f61e:c.instructions+=8;goto B76f61e;
case 0x76f621:c.instructions+=7;goto B76f621;
case 0x76f624:c.instructions+=6;goto B76f624;
case 0x76f626:c.instructions+=5;goto B76f626;
case 0x76f62a:c.instructions+=4;goto B76f62a;
case 0x76f62d:c.instructions+=3;goto B76f62d;
case 0x76f630:c.instructions+=2;goto B76f630;
case 0x76f634:c.instructions+=1;goto B76f634;
case 0x76f638:goto L76f638;
case 0x76f63b:c.instructions+=1;goto B76f63b;
case 0x76f63d:goto L76f63d;
case 0x76f641:c.instructions+=5;goto B76f641;
case 0x76f644:c.instructions+=4;goto B76f644;
case 0x76f646:c.instructions+=3;goto B76f646;
case 0x76f649:c.instructions+=2;goto B76f649;
case 0x76f650:c.instructions+=1;goto B76f650;
case 0x76f656:goto L76f656;
case 0x76f659:c.instructions+=2;goto B76f659;
case 0x76f65b:c.instructions+=1;goto B76f65b;
case 0x76f65d:goto L76f65d;
case 0x76f660:c.instructions+=2;goto B76f660;
case 0x76f662:c.instructions+=1;goto B76f662;
case 0x76f664:goto L76f664;
case 0x76f666:goto L76f666;
case 0x76f668:c.instructions+=5;goto B76f668;
case 0x76f66a:c.instructions+=4;goto B76f66a;
case 0x76f66b:c.instructions+=3;goto B76f66b;
case 0x76f66c:c.instructions+=2;goto B76f66c;
case 0x76f66d:c.instructions+=1;goto B76f66d;
case 0x76f672:goto L76f672;
case 0x76f675:c.instructions+=3;goto B76f675;
case 0x76f678:c.instructions+=2;goto B76f678;
case 0x76f67a:c.instructions+=1;goto B76f67a;
case 0x76f67f:goto L76f67f;
case 0x76f681:c.instructions+=2;goto B76f681;
case 0x76f685:c.instructions+=1;goto B76f685;
case 0x76f68b:goto L76f68b;
case 0x76f68d:goto L76f68d;
case 0x76f68e:c.instructions+=4;goto B76f68e;
case 0x76f68f:c.instructions+=3;goto B76f68f;
case 0x76f690:c.instructions+=2;goto B76f690;
case 0x76f691:c.instructions+=1;goto B76f691;
case 0x76f694:goto L76f694;
case 0x76f696:c.instructions+=2;goto B76f696;
case 0x76f699:c.instructions+=1;goto B76f699;
case 0x76f69f:goto L76f69f;
case 0x76f6a2:c.instructions+=16;goto B76f6a2;
case 0x76f6a5:c.instructions+=15;goto B76f6a5;
case 0x76f6a9:c.instructions+=14;goto B76f6a9;
case 0x76f6af:c.instructions+=13;goto B76f6af;
case 0x76f6b5:c.instructions+=12;goto B76f6b5;
case 0x76f6b9:c.instructions+=11;goto B76f6b9;
case 0x76f6bf:c.instructions+=10;goto B76f6bf;
case 0x76f6c5:c.instructions+=9;goto B76f6c5;
case 0x76f6c8:c.instructions+=8;goto B76f6c8;
case 0x76f6ce:c.instructions+=7;goto B76f6ce;
case 0x76f6d1:c.instructions+=6;goto B76f6d1;
case 0x76f6d8:c.instructions+=5;goto B76f6d8;
case 0x76f6db:c.instructions+=4;goto B76f6db;
case 0x76f6e1:c.instructions+=3;goto B76f6e1;
case 0x76f6e2:c.instructions+=2;goto B76f6e2;
case 0x76f6e8:c.instructions+=1;goto B76f6e8;
case 0x76f6ea:goto L76f6ea;
case 0x76f6ed:c.instructions+=2;goto B76f6ed;
case 0x76f6ef:c.instructions+=1;goto B76f6ef;
case 0x76f6f1:goto L76f6f1;
case 0x76f6f4:c.instructions+=2;goto B76f6f4;
case 0x76f6f6:c.instructions+=1;goto B76f6f6;
case 0x76f6f8:goto L76f6f8;
case 0x76f6fa:goto L76f6fa;
case 0x76f6fb:c.instructions+=6;goto B76f6fb;
case 0x76f6fe:c.instructions+=5;goto B76f6fe;
case 0x76f700:c.instructions+=4;goto B76f700;
case 0x76f701:c.instructions+=3;goto B76f701;
case 0x76f702:c.instructions+=2;goto B76f702;
case 0x76f703:c.instructions+=1;goto B76f703;
case 0x76f708:goto L76f708;
case 0x76f70b:c.instructions+=3;goto B76f70b;
case 0x76f70e:c.instructions+=2;goto B76f70e;
case 0x76f710:c.instructions+=1;goto B76f710;
case 0x76f715:goto L76f715;
case 0x76f718:c.instructions+=2;goto B76f718;
case 0x76f71b:c.instructions+=1;goto B76f71b;
case 0x76f720:goto L76f720;
case 0x76f723:c.instructions+=3;goto B76f723;
case 0x76f726:c.instructions+=2;goto B76f726;
case 0x76f72d:c.instructions+=1;goto B76f72d;
case 0x76f732:goto L76f732;
case 0x76f734:c.instructions+=2;goto B76f734;
case 0x76f737:c.instructions+=1;goto B76f737;
case 0x76f739:goto L76f739;
case 0x76f73c:c.instructions+=14;goto B76f73c;
case 0x76f73f:c.instructions+=13;goto B76f73f;
case 0x76f743:c.instructions+=12;goto B76f743;
case 0x76f749:c.instructions+=11;goto B76f749;
case 0x76f74f:c.instructions+=10;goto B76f74f;
case 0x76f751:c.instructions+=9;goto B76f751;
case 0x76f755:c.instructions+=8;goto B76f755;
case 0x76f757:c.instructions+=7;goto B76f757;
case 0x76f75d:c.instructions+=6;goto B76f75d;
case 0x76f760:c.instructions+=5;goto B76f760;
case 0x76f762:c.instructions+=4;goto B76f762;
case 0x76f765:c.instructions+=3;goto B76f765;
case 0x76f76c:c.instructions+=2;goto B76f76c;
case 0x76f76f:c.instructions+=1;goto B76f76f;
case 0x76f772:goto L76f772;
case 0x76f775:c.instructions+=2;goto B76f775;
case 0x76f777:c.instructions+=1;goto B76f777;
case 0x76f779:goto L76f779;
case 0x76f77c:c.instructions+=2;goto B76f77c;
case 0x76f77e:c.instructions+=1;goto B76f77e;
case 0x76f780:goto L76f780;
case 0x76f782:goto L76f782;
case 0x76f786:c.instructions+=10;goto B76f786;
case 0x76f788:c.instructions+=9;goto B76f788;
case 0x76f78b:c.instructions+=8;goto B76f78b;
case 0x76f78e:c.instructions+=7;goto B76f78e;
case 0x76f78f:c.instructions+=6;goto B76f78f;
case 0x76f792:c.instructions+=5;goto B76f792;
case 0x76f794:c.instructions+=4;goto B76f794;
case 0x76f795:c.instructions+=3;goto B76f795;
case 0x76f796:c.instructions+=2;goto B76f796;
case 0x76f797:c.instructions+=1;goto B76f797;
case 0x76f79c:goto L76f79c;
case 0x76f79f:c.instructions+=3;goto B76f79f;
case 0x76f7a2:c.instructions+=2;goto B76f7a2;
case 0x76f7a4:c.instructions+=1;goto B76f7a4;
case 0x76f7a9:goto L76f7a9;
case 0x76f7ab:c.instructions+=2;goto B76f7ab;
case 0x76f7ae:c.instructions+=1;goto B76f7ae;
case 0x76f7b0:goto L76f7b0;
case 0x76f7b3:c.instructions+=1;goto B76f7b3;
case 0x76f7b9:goto L76f7b9;
case 0x76f7bb:c.instructions+=2;goto B76f7bb;
case 0x76f7bc:c.instructions+=1;goto B76f7bc;
case 0x76f7c1:goto L76f7c1;
case 0x76f7c3:c.instructions+=4;goto B76f7c3;
case 0x76f7c6:c.instructions+=3;goto B76f7c6;
case 0x76f7c9:c.instructions+=2;goto B76f7c9;
case 0x76f7cd:c.instructions+=1;goto B76f7cd;
case 0x76f7d2:goto L76f7d2;
case 0x76f7d3:c.instructions+=10;goto B76f7d3;
case 0x76f7d5:c.instructions+=9;goto B76f7d5;
case 0x76f7d8:c.instructions+=8;goto B76f7d8;
case 0x76f7d9:c.instructions+=7;goto B76f7d9;
case 0x76f7da:c.instructions+=6;goto B76f7da;
case 0x76f7dd:c.instructions+=5;goto B76f7dd;
case 0x76f7df:c.instructions+=4;goto B76f7df;
case 0x76f7e5:c.instructions+=3;goto B76f7e5;
case 0x76f7e8:c.instructions+=2;goto B76f7e8;
case 0x76f7ea:c.instructions+=1;goto B76f7ea;
case 0x76f7ec:goto L76f7ec;
case 0x76f7ee:c.instructions+=2;goto B76f7ee;
case 0x76f7ef:c.instructions+=1;goto B76f7ef;
case 0x76f7f4:goto L76f7f4;
case 0x76f7f8:c.instructions+=1;goto B76f7f8;
case 0x76f7fe:goto L76f7fe;
case 0x76f7ff:goto L76f7ff;
case 0x76f804:c.instructions+=2;goto B76f804;
case 0x76f807:c.instructions+=1;goto B76f807;
case 0x76f809:goto L76f809;
case 0x76f80c:goto L76f80c;
case 0x76f80f:c.instructions+=2;goto B76f80f;
case 0x76f812:c.instructions+=1;goto B76f812;
case 0x76f818:goto L76f818;
case 0x76f81a:c.instructions+=5;goto B76f81a;
case 0x76f81d:c.instructions+=4;goto B76f81d;
case 0x76f81f:c.instructions+=3;goto B76f81f;
case 0x76f821:c.instructions+=2;goto B76f821;
case 0x76f824:c.instructions+=1;goto B76f824;
case 0x76f826:goto L76f826;
case 0x76f829:c.instructions+=50;goto B76f829;
case 0x76f82b:c.instructions+=49;goto B76f82b;
case 0x76f82f:c.instructions+=48;goto B76f82f;
case 0x76f831:c.instructions+=47;goto B76f831;
case 0x76f833:c.instructions+=46;goto B76f833;
case 0x76f837:c.instructions+=45;goto B76f837;
case 0x76f839:c.instructions+=44;goto B76f839;
case 0x76f83b:c.instructions+=43;goto B76f83b;
case 0x76f83f:c.instructions+=42;goto B76f83f;
case 0x76f841:c.instructions+=41;goto B76f841;
case 0x76f843:c.instructions+=40;goto B76f843;
case 0x76f847:c.instructions+=39;goto B76f847;
case 0x76f849:c.instructions+=38;goto B76f849;
case 0x76f84b:c.instructions+=37;goto B76f84b;
case 0x76f84f:c.instructions+=36;goto B76f84f;
case 0x76f851:c.instructions+=35;goto B76f851;
case 0x76f853:c.instructions+=34;goto B76f853;
case 0x76f857:c.instructions+=33;goto B76f857;
case 0x76f859:c.instructions+=32;goto B76f859;
case 0x76f85b:c.instructions+=31;goto B76f85b;
case 0x76f85f:c.instructions+=30;goto B76f85f;
case 0x76f861:c.instructions+=29;goto B76f861;
case 0x76f863:c.instructions+=28;goto B76f863;
case 0x76f867:c.instructions+=27;goto B76f867;
case 0x76f869:c.instructions+=26;goto B76f869;
case 0x76f86b:c.instructions+=25;goto B76f86b;
case 0x76f86f:c.instructions+=24;goto B76f86f;
case 0x76f871:c.instructions+=23;goto B76f871;
case 0x76f873:c.instructions+=22;goto B76f873;
case 0x76f877:c.instructions+=21;goto B76f877;
case 0x76f879:c.instructions+=20;goto B76f879;
case 0x76f87b:c.instructions+=19;goto B76f87b;
case 0x76f87f:c.instructions+=18;goto B76f87f;
case 0x76f881:c.instructions+=17;goto B76f881;
case 0x76f883:c.instructions+=16;goto B76f883;
case 0x76f887:c.instructions+=15;goto B76f887;
case 0x76f889:c.instructions+=14;goto B76f889;
case 0x76f88b:c.instructions+=13;goto B76f88b;
case 0x76f88f:c.instructions+=12;goto B76f88f;
case 0x76f891:c.instructions+=11;goto B76f891;
case 0x76f893:c.instructions+=10;goto B76f893;
case 0x76f897:c.instructions+=9;goto B76f897;
case 0x76f899:c.instructions+=8;goto B76f899;
case 0x76f89b:c.instructions+=7;goto B76f89b;
case 0x76f89f:c.instructions+=6;goto B76f89f;
case 0x76f8a1:c.instructions+=5;goto B76f8a1;
case 0x76f8a3:c.instructions+=4;goto B76f8a3;
case 0x76f8a5:c.instructions+=3;goto B76f8a5;
case 0x76f8a8:c.instructions+=2;goto B76f8a8;
case 0x76f8a9:c.instructions+=1;goto B76f8a9;
case 0x76f8af:goto L76f8af;
case 0x76f8b1:c.instructions+=1;goto B76f8b1;
case 0x76f8b3:goto L76f8b3;
case 0x76f8b6:c.instructions+=5;goto B76f8b6;
case 0x76f8b8:c.instructions+=4;goto B76f8b8;
case 0x76f8b9:c.instructions+=3;goto B76f8b9;
case 0x76f8bb:c.instructions+=2;goto B76f8bb;
case 0x76f8bc:c.instructions+=1;goto B76f8bc;
case 0x76f8be:goto L76f8be;
case 0x76f8c0:c.instructions+=11;goto B76f8c0;
case 0x76f8c2:c.instructions+=10;goto B76f8c2;
case 0x76f8c7:c.instructions+=9;goto B76f8c7;
case 0x76f8c9:c.instructions+=8;goto B76f8c9;
case 0x76f8cb:c.instructions+=7;goto B76f8cb;
case 0x76f8cd:c.instructions+=6;goto B76f8cd;
case 0x76f8cf:c.instructions+=5;goto B76f8cf;
case 0x76f8d1:c.instructions+=4;goto B76f8d1;
case 0x76f8d3:c.instructions+=3;goto B76f8d3;
case 0x76f8d7:c.instructions+=2;goto B76f8d7;
case 0x76f8d9:c.instructions+=1;goto B76f8d9;
case 0x76f8df:goto L76f8df;
case 0x76f8e0:goto L76f8e0;
case 0x76f8e2:c.instructions+=2;goto B76f8e2;
case 0x76f8e5:c.instructions+=1;goto B76f8e5;
case 0x76f8e7:goto L76f8e7;
case 0x76f8e8:c.instructions+=3;goto B76f8e8;
case 0x76f8e9:c.instructions+=2;goto B76f8e9;
case 0x76f8ea:c.instructions+=1;goto B76f8ea;
case 0x76f8ed:goto L76f8ed;
case 0x76f8ee:c.instructions+=3;goto B76f8ee;
case 0x76f8f4:c.instructions+=2;goto B76f8f4;
case 0x76f8f9:c.instructions+=1;goto B76f8f9;
case 0x76f8fb:goto L76f8fb;
case 0x76f8fe:c.instructions+=3;goto B76f8fe;
case 0x76f901:c.instructions+=2;goto B76f901;
case 0x76f902:c.instructions+=1;goto B76f902;
case 0x76f904:goto L76f904;
case 0x76f906:c.instructions+=2;goto B76f906;
case 0x76f90c:c.instructions+=1;goto B76f90c;
case 0x76f90d:goto L76f90d;
case 0x76f910:c.instructions+=3;goto B76f910;
case 0x76f913:c.instructions+=2;goto B76f913;
case 0x76f914:c.instructions+=1;goto B76f914;
case 0x76f916:goto L76f916;
case 0x76f918:c.instructions+=2;goto B76f918;
case 0x76f91e:c.instructions+=1;goto B76f91e;
case 0x76f91f:goto L76f91f;
case 0x76f922:c.instructions+=3;goto B76f922;
case 0x76f925:c.instructions+=2;goto B76f925;
case 0x76f926:c.instructions+=1;goto B76f926;
case 0x76f928:goto L76f928;
case 0x76f92e:c.instructions+=6;goto B76f92e;
case 0x76f934:c.instructions+=5;goto B76f934;
case 0x76f93a:c.instructions+=4;goto B76f93a;
case 0x76f940:c.instructions+=3;goto B76f940;
case 0x76f949:c.instructions+=2;goto B76f949;
case 0x76f94a:c.instructions+=1;goto B76f94a;
case 0x76f94b:goto L76f94b;
case 0x76f94c:c.instructions+=9;goto B76f94c;
case 0x76f94e:c.instructions+=8;goto B76f94e;
case 0x76f94f:c.instructions+=7;goto B76f94f;
case 0x76f952:c.instructions+=6;goto B76f952;
case 0x76f959:c.instructions+=5;goto B76f959;
case 0x76f95c:c.instructions+=4;goto B76f95c;
case 0x76f962:c.instructions+=3;goto B76f962;
case 0x76f964:c.instructions+=2;goto B76f964;
case 0x76f966:c.instructions+=1;goto B76f966;
case 0x76f96c:goto L76f96c;
case 0x76f96d:c.instructions+=1;goto B76f96d;
case 0x76f96e:goto L76f96e;
case 0x76f970:goto L76f970;
case 0x76f977:c.instructions+=5;goto B76f977;
case 0x76f97e:c.instructions+=4;goto B76f97e;
case 0x76f982:c.instructions+=3;goto B76f982;
case 0x76f986:c.instructions+=2;goto B76f986;
case 0x76f989:c.instructions+=1;goto B76f989;
case 0x76f98b:goto L76f98b;
case 0x76f98d:goto L76f98d;
case 0x76f994:c.instructions+=3;goto B76f994;
case 0x76f99b:c.instructions+=2;goto B76f99b;
case 0x76f9a2:c.instructions+=1;goto B76f9a2;
case 0x76f9a4:goto L76f9a4;
case 0x76f9a5:goto L76f9a5;
case 0x76f9ac:c.instructions+=5;goto B76f9ac;
case 0x76f9af:c.instructions+=4;goto B76f9af;
case 0x76f9b3:c.instructions+=3;goto B76f9b3;
case 0x76f9b7:c.instructions+=2;goto B76f9b7;
case 0x76f9ba:c.instructions+=1;goto B76f9ba;
case 0x76f9bc:goto L76f9bc;
case 0x76f9be:goto L76f9be;
case 0x76f9c1:c.instructions+=3;goto B76f9c1;
case 0x76f9c8:c.instructions+=2;goto B76f9c8;
case 0x76f9cf:c.instructions+=1;goto B76f9cf;
case 0x76f9d1:goto L76f9d1;
case 0x76f9d4:c.instructions+=6;goto B76f9d4;
case 0x76f9db:c.instructions+=5;goto B76f9db;
case 0x76f9e1:c.instructions+=4;goto B76f9e1;
case 0x76f9e4:c.instructions+=3;goto B76f9e4;
case 0x76f9e6:c.instructions+=2;goto B76f9e6;
case 0x76f9e8:c.instructions+=1;goto B76f9e8;
case 0x76f9ea:goto L76f9ea;
case 0x76f9eb:c.instructions+=1;goto B76f9eb;
case 0x76f9ec:goto L76f9ec;
case 0x76f9ef:c.instructions+=4;goto B76f9ef;
case 0x76f9f2:c.instructions+=3;goto B76f9f2;
case 0x76f9f9:c.instructions+=2;goto B76f9f9;
case 0x76f9fa:c.instructions+=1;goto B76f9fa;
case 0x76f9fd:goto L76f9fd;
case 0x76f9fe:c.instructions+=21;goto B76f9fe;
case 0x76fa00:c.instructions+=20;goto B76fa00;
case 0x76fa03:c.instructions+=19;goto B76fa03;
case 0x76fa06:c.instructions+=18;goto B76fa06;
case 0x76fa0a:c.instructions+=17;goto B76fa0a;
case 0x76fa0d:c.instructions+=16;goto B76fa0d;
case 0x76fa0e:c.instructions+=15;goto B76fa0e;
case 0x76fa10:c.instructions+=14;goto B76fa10;
case 0x76fa13:c.instructions+=13;goto B76fa13;
case 0x76fa15:c.instructions+=12;goto B76fa15;
case 0x76fa18:c.instructions+=11;goto B76fa18;
case 0x76fa1b:c.instructions+=10;goto B76fa1b;
case 0x76fa1e:c.instructions+=9;goto B76fa1e;
case 0x76fa21:c.instructions+=8;goto B76fa21;
case 0x76fa24:c.instructions+=7;goto B76fa24;
case 0x76fa25:c.instructions+=6;goto B76fa25;
case 0x76fa28:c.instructions+=5;goto B76fa28;
case 0x76fa2b:c.instructions+=4;goto B76fa2b;
case 0x76fa2d:c.instructions+=3;goto B76fa2d;
case 0x76fa2f:c.instructions+=2;goto B76fa2f;
case 0x76fa35:c.instructions+=1;goto B76fa35;
case 0x76fa36:goto L76fa36;
case 0x76fa38:goto L76fa38;
case 0x76fa3e:c.instructions+=8;goto B76fa3e;
case 0x76fa40:c.instructions+=7;goto B76fa40;
case 0x76fa47:c.instructions+=6;goto B76fa47;
case 0x76fa4d:c.instructions+=5;goto B76fa4d;
case 0x76fa4f:c.instructions+=4;goto B76fa4f;
case 0x76fa50:c.instructions+=3;goto B76fa50;
case 0x76fa55:c.instructions+=2;goto B76fa55;
case 0x76fa57:c.instructions+=1;goto B76fa57;
case 0x76fa5d:goto L76fa5d;
case 0x76fa5e:c.instructions+=5;goto B76fa5e;
case 0x76fa65:c.instructions+=4;goto B76fa65;
case 0x76fa67:c.instructions+=3;goto B76fa67;
case 0x76fa6a:c.instructions+=2;goto B76fa6a;
case 0x76fa6d:c.instructions+=1;goto B76fa6d;
case 0x76fa6f:goto L76fa6f;
case 0x76fa72:c.instructions+=9;goto B76fa72;
case 0x76fa74:c.instructions+=8;goto B76fa74;
case 0x76fa76:c.instructions+=7;goto B76fa76;
case 0x76fa79:c.instructions+=6;goto B76fa79;
case 0x76fa7c:c.instructions+=5;goto B76fa7c;
case 0x76fa81:c.instructions+=4;goto B76fa81;
case 0x76fa86:c.instructions+=3;goto B76fa86;
case 0x76fa87:c.instructions+=2;goto B76fa87;
case 0x76fa8a:c.instructions+=1;goto B76fa8a;
case 0x76fa8c:goto L76fa8c;
case 0x76fa8f:c.instructions+=1;goto B76fa8f;
case 0x76fa92:goto L76fa92;
case 0x76fa95:c.instructions+=3;goto B76fa95;
case 0x76fa98:c.instructions+=2;goto B76fa98;
case 0x76fa9d:c.instructions+=1;goto B76fa9d;
case 0x76fa9f:goto L76fa9f;
case 0x76faa7:c.instructions+=3;goto B76faa7;
case 0x76faab:c.instructions+=2;goto B76faab;
case 0x76faae:c.instructions+=1;goto B76faae;
case 0x76fab0:goto L76fab0;
case 0x76fab3:c.instructions+=3;goto B76fab3;
case 0x76fab6:c.instructions+=2;goto B76fab6;
case 0x76fab9:c.instructions+=1;goto B76fab9;
case 0x76fabc:goto L76fabc;
case 0x76fabf:c.instructions+=8;goto B76fabf;
case 0x76fac3:c.instructions+=7;goto B76fac3;
case 0x76fac6:c.instructions+=6;goto B76fac6;
case 0x76fac8:c.instructions+=5;goto B76fac8;
case 0x76facb:c.instructions+=4;goto B76facb;
case 0x76face:c.instructions+=3;goto B76face;
case 0x76fad4:c.instructions+=2;goto B76fad4;
case 0x76fad6:c.instructions+=1;goto B76fad6;
case 0x76fad8:goto L76fad8;
case 0x76fadb:c.instructions+=4;goto B76fadb;
case 0x76fae0:c.instructions+=3;goto B76fae0;
case 0x76fae3:c.instructions+=2;goto B76fae3;
case 0x76fae6:c.instructions+=1;goto B76fae6;
case 0x76faec:goto L76faec;
case 0x76faf0:c.instructions+=2;goto B76faf0;
case 0x76faf3:c.instructions+=1;goto B76faf3;
case 0x76faf9:goto L76faf9;
case 0x76fafd:c.instructions+=1;goto B76fafd;
case 0x76fb03:goto L76fb03;
case 0x76fb06:c.instructions+=1;goto B76fb06;
case 0x76fb0d:goto L76fb0d;
case 0x76fb10:c.instructions+=3;goto B76fb10;
case 0x76fb11:c.instructions+=2;goto B76fb11;
case 0x76fb18:c.instructions+=1;goto B76fb18;
case 0x76fb1a:goto L76fb1a;
case 0x76fb1b:c.instructions+=2;goto B76fb1b;
case 0x76fb1c:c.instructions+=1;goto B76fb1c;
case 0x76fb1d:goto L76fb1d;
case 0x76fb21:c.instructions+=1;goto B76fb21;
case 0x76fb23:goto L76fb23;
case 0x76fb2b:c.instructions+=6;goto B76fb2b;
case 0x76fb2f:c.instructions+=5;goto B76fb2f;
case 0x76fb36:c.instructions+=4;goto B76fb36;
case 0x76fb3a:c.instructions+=3;goto B76fb3a;
case 0x76fb3d:c.instructions+=2;goto B76fb3d;
case 0x76fb41:c.instructions+=1;goto B76fb41;
case 0x76fb43:goto L76fb43;
case 0x76fb46:c.instructions+=3;goto B76fb46;
case 0x76fb48:c.instructions+=2;goto B76fb48;
case 0x76fb4b:c.instructions+=1;goto B76fb4b;
case 0x76fb4d:goto L76fb4d;
case 0x76fb50:goto L76fb50;
case 0x76fb53:c.instructions+=4;goto B76fb53;
case 0x76fb56:c.instructions+=3;goto B76fb56;
case 0x76fb58:c.instructions+=2;goto B76fb58;
case 0x76fb5b:c.instructions+=1;goto B76fb5b;
case 0x76fb5d:goto L76fb5d;
case 0x76fb64:goto L76fb64;
case 0x76fb67:c.instructions+=5;goto B76fb67;
case 0x76fb69:c.instructions+=4;goto B76fb69;
case 0x76fb6a:c.instructions+=3;goto B76fb6a;
case 0x76fb6d:c.instructions+=2;goto B76fb6d;
case 0x76fb70:c.instructions+=1;goto B76fb70;
case 0x76fb72:goto L76fb72;
case 0x76fb75:c.instructions+=3;goto B76fb75;
case 0x76fb79:c.instructions+=2;goto B76fb79;
case 0x76fb7c:c.instructions+=1;goto B76fb7c;
case 0x76fb7e:goto L76fb7e;
case 0x76fb81:c.instructions+=6;goto B76fb81;
case 0x76fb83:c.instructions+=5;goto B76fb83;
case 0x76fb86:c.instructions+=4;goto B76fb86;
case 0x76fb89:c.instructions+=3;goto B76fb89;
case 0x76fb8d:c.instructions+=2;goto B76fb8d;
case 0x76fb93:c.instructions+=1;goto B76fb93;
case 0x76fb97:goto L76fb97;
case 0x76fb9a:c.instructions+=1;goto B76fb9a;
case 0x76fb9d:goto L76fb9d;
case 0x76fba1:c.instructions+=1;goto B76fba1;
case 0x76fba3:goto L76fba3;
case 0x76fba6:c.instructions+=3;goto B76fba6;
case 0x76fbaa:c.instructions+=2;goto B76fbaa;
case 0x76fbae:c.instructions+=1;goto B76fbae;
case 0x76fbb0:goto L76fbb0;
case 0x76fbb1:goto L76fbb1;
case 0x76fbb2:c.instructions+=3;goto B76fbb2;
case 0x76fbb3:c.instructions+=2;goto B76fbb3;
case 0x76fbb4:c.instructions+=1;goto B76fbb4;
case 0x76fbb5:goto L76fbb5;
case 0x76fbb6:c.instructions+=16;goto B76fbb6;
case 0x76fbb8:c.instructions+=15;goto B76fbb8;
case 0x76fbb9:c.instructions+=14;goto B76fbb9;
case 0x76fbba:c.instructions+=13;goto B76fbba;
case 0x76fbbe:c.instructions+=12;goto B76fbbe;
case 0x76fbbf:c.instructions+=11;goto B76fbbf;
case 0x76fbc0:c.instructions+=10;goto B76fbc0;
case 0x76fbc1:c.instructions+=9;goto B76fbc1;
case 0x76fbc3:c.instructions+=8;goto B76fbc3;
case 0x76fbc5:c.instructions+=7;goto B76fbc5;
case 0x76fbc9:c.instructions+=6;goto B76fbc9;
case 0x76fbca:c.instructions+=5;goto B76fbca;
case 0x76fbcc:c.instructions+=4;goto B76fbcc;
case 0x76fbce:c.instructions+=3;goto B76fbce;
case 0x76fbd0:c.instructions+=2;goto B76fbd0;
case 0x76fbd1:c.instructions+=1;goto B76fbd1;
case 0x76fbd3:goto L76fbd3;
case 0x76fbd5:c.instructions+=2;goto B76fbd5;
case 0x76fbda:c.instructions+=1;goto B76fbda;
case 0x76fbdb:goto L76fbdb;
case 0x76fbe2:c.instructions+=2;goto B76fbe2;
case 0x76fbe4:c.instructions+=1;goto B76fbe4;
case 0x76fbea:goto L76fbea;
case 0x76fbed:c.instructions+=2;goto B76fbed;
case 0x76fbf0:c.instructions+=1;goto B76fbf0;
case 0x76fbf1:goto L76fbf1;
case 0x76fbf3:c.instructions+=5;goto B76fbf3;
case 0x76fbf6:c.instructions+=4;goto B76fbf6;
case 0x76fbf9:c.instructions+=3;goto B76fbf9;
case 0x76fbfa:c.instructions+=2;goto B76fbfa;
case 0x76fbfc:c.instructions+=1;goto B76fbfc;
case 0x76fbfe:goto L76fbfe;
case 0x76fc00:c.instructions+=1;goto B76fc00;
case 0x76fc02:goto L76fc02;
case 0x76fc04:c.instructions+=2;goto B76fc04;
case 0x76fc07:c.instructions+=1;goto B76fc07;
case 0x76fc09:goto L76fc09;
case 0x76fc10:c.instructions+=2;goto B76fc10;
case 0x76fc13:c.instructions+=1;goto B76fc13;
case 0x76fc15:goto L76fc15;
case 0x76fc17:c.instructions+=1;goto B76fc17;
case 0x76fc19:goto L76fc19;
case 0x76fc1c:c.instructions+=1;goto B76fc1c;
case 0x76fc1e:goto L76fc1e;
case 0x76fc26:goto L76fc26;
case 0x76fc2d:c.instructions+=1;goto B76fc2d;
case 0x76fc2f:goto L76fc2f;
case 0x76fc32:c.instructions+=1;goto B76fc32;
case 0x76fc34:goto L76fc34;
case 0x76fc3b:c.instructions+=1;goto B76fc3b;
case 0x76fc3d:goto L76fc3d;
case 0x76fc44:goto L76fc44;
case 0x76fc46:c.instructions+=3;goto B76fc46;
case 0x76fc48:c.instructions+=2;goto B76fc48;
case 0x76fc4b:c.instructions+=1;goto B76fc4b;
case 0x76fc4d:goto L76fc4d;
case 0x76fc52:c.instructions+=1;goto B76fc52;
case 0x76fc54:goto L76fc54;
case 0x76fc56:c.instructions+=1;goto B76fc56;
case 0x76fc58:goto L76fc58;
case 0x76fc5a:c.instructions+=1;goto B76fc5a;
case 0x76fc5b:goto L76fc5b;
case 0x76fc5d:c.instructions+=1;goto B76fc5d;
case 0x76fc5f:goto L76fc5f;
case 0x76fc61:c.instructions+=2;goto B76fc61;
case 0x76fc62:c.instructions+=1;goto B76fc62;
case 0x76fc64:goto L76fc64;
case 0x76fc65:goto L76fc65;
case 0x76fc69:c.instructions+=2;goto B76fc69;
case 0x76fc6a:c.instructions+=1;goto B76fc6a;
case 0x76fc6c:goto L76fc6c;
case 0x76fc6d:c.instructions+=4;goto B76fc6d;
case 0x76fc6e:c.instructions+=3;goto B76fc6e;
case 0x76fc6f:c.instructions+=2;goto B76fc6f;
case 0x76fc70:c.instructions+=1;goto B76fc70;
case 0x76fc73:goto L76fc73;
case 0x76fc74:c.instructions+=15;goto B76fc74;
case 0x76fc76:c.instructions+=14;goto B76fc76;
case 0x76fc79:c.instructions+=13;goto B76fc79;
case 0x76fc7d:c.instructions+=12;goto B76fc7d;
case 0x76fc7e:c.instructions+=11;goto B76fc7e;
case 0x76fc7f:c.instructions+=10;goto B76fc7f;
case 0x76fc83:c.instructions+=9;goto B76fc83;
case 0x76fc84:c.instructions+=8;goto B76fc84;
case 0x76fc86:c.instructions+=7;goto B76fc86;
case 0x76fc89:c.instructions+=6;goto B76fc89;
case 0x76fc8a:c.instructions+=5;goto B76fc8a;
case 0x76fc8c:c.instructions+=4;goto B76fc8c;
case 0x76fc8f:c.instructions+=3;goto B76fc8f;
case 0x76fc91:c.instructions+=2;goto B76fc91;
case 0x76fc92:c.instructions+=1;goto B76fc92;
case 0x76fc94:goto L76fc94;
case 0x76fc96:c.instructions+=2;goto B76fc96;
case 0x76fc9b:c.instructions+=1;goto B76fc9b;
case 0x76fc9c:goto L76fc9c;
case 0x76fc9e:c.instructions+=1;goto B76fc9e;
case 0x76fca4:goto L76fca4;
case 0x76fca7:c.instructions+=12;goto B76fca7;
case 0x76fca8:c.instructions+=11;goto B76fca8;
case 0x76fcab:c.instructions+=10;goto B76fcab;
case 0x76fcae:c.instructions+=9;goto B76fcae;
case 0x76fcb1:c.instructions+=8;goto B76fcb1;
case 0x76fcb4:c.instructions+=7;goto B76fcb4;
case 0x76fcb7:c.instructions+=6;goto B76fcb7;
case 0x76fcb8:c.instructions+=5;goto B76fcb8;
case 0x76fcba:c.instructions+=4;goto B76fcba;
case 0x76fcbd:c.instructions+=3;goto B76fcbd;
case 0x76fcc0:c.instructions+=2;goto B76fcc0;
case 0x76fcc3:c.instructions+=1;goto B76fcc3;
case 0x76fcc5:goto L76fcc5;
case 0x76fcc7:c.instructions+=1;goto B76fcc7;
case 0x76fccd:goto L76fccd;
case 0x76fccf:c.instructions+=1;goto B76fccf;
case 0x76fcd5:goto L76fcd5;
case 0x76fcdd:c.instructions+=6;goto B76fcdd;
case 0x76fce3:c.instructions+=5;goto B76fce3;
case 0x76fce5:c.instructions+=4;goto B76fce5;
case 0x76fce6:c.instructions+=3;goto B76fce6;
case 0x76fce8:c.instructions+=2;goto B76fce8;
case 0x76fcea:c.instructions+=1;goto B76fcea;
case 0x76fcec:goto L76fcec;
case 0x76fcf4:c.instructions+=22;goto B76fcf4;
case 0x76fcf6:c.instructions+=21;goto B76fcf6;
case 0x76fcf8:c.instructions+=20;goto B76fcf8;
case 0x76fcfb:c.instructions+=19;goto B76fcfb;
case 0x76fd02:c.instructions+=18;goto B76fd02;
case 0x76fd05:c.instructions+=17;goto B76fd05;
case 0x76fd0b:c.instructions+=16;goto B76fd0b;
case 0x76fd0e:c.instructions+=15;goto B76fd0e;
case 0x76fd11:c.instructions+=14;goto B76fd11;
case 0x76fd14:c.instructions+=13;goto B76fd14;
case 0x76fd17:c.instructions+=12;goto B76fd17;
case 0x76fd1d:c.instructions+=11;goto B76fd1d;
case 0x76fd20:c.instructions+=10;goto B76fd20;
case 0x76fd26:c.instructions+=9;goto B76fd26;
case 0x76fd29:c.instructions+=8;goto B76fd29;
case 0x76fd2b:c.instructions+=7;goto B76fd2b;
case 0x76fd2d:c.instructions+=6;goto B76fd2d;
case 0x76fd30:c.instructions+=5;goto B76fd30;
case 0x76fd34:c.instructions+=4;goto B76fd34;
case 0x76fd37:c.instructions+=3;goto B76fd37;
case 0x76fd3e:c.instructions+=2;goto B76fd3e;
case 0x76fd41:c.instructions+=1;goto B76fd41;
case 0x76fd43:goto L76fd43;
case 0x76fd4b:c.instructions+=4;goto B76fd4b;
case 0x76fd4e:c.instructions+=3;goto B76fd4e;
case 0x76fd54:c.instructions+=2;goto B76fd54;
case 0x76fd5b:c.instructions+=1;goto B76fd5b;
case 0x76fd5d:goto L76fd5d;
case 0x76fd5e:c.instructions+=3;goto B76fd5e;
case 0x76fd64:c.instructions+=2;goto B76fd64;
case 0x76fd67:c.instructions+=1;goto B76fd67;
case 0x76fd6d:goto L76fd6d;
case 0x76fd72:goto L76fd72;
case 0x76fd74:c.instructions+=1;goto B76fd74;
case 0x76fd7a:goto L76fd7a;
case 0x76fd7d:c.instructions+=1;goto B76fd7d;
case 0x76fd83:goto L76fd83;
case 0x76fd8b:c.instructions+=6;goto B76fd8b;
case 0x76fd91:c.instructions+=5;goto B76fd91;
case 0x76fd93:c.instructions+=4;goto B76fd93;
case 0x76fd94:c.instructions+=3;goto B76fd94;
case 0x76fd96:c.instructions+=2;goto B76fd96;
case 0x76fd98:c.instructions+=1;goto B76fd98;
case 0x76fd9a:goto L76fd9a;
case 0x76fda2:c.instructions+=22;goto B76fda2;
case 0x76fda4:c.instructions+=21;goto B76fda4;
case 0x76fda6:c.instructions+=20;goto B76fda6;
case 0x76fda9:c.instructions+=19;goto B76fda9;
case 0x76fdb0:c.instructions+=18;goto B76fdb0;
case 0x76fdb3:c.instructions+=17;goto B76fdb3;
case 0x76fdb9:c.instructions+=16;goto B76fdb9;
case 0x76fdbc:c.instructions+=15;goto B76fdbc;
case 0x76fdbf:c.instructions+=14;goto B76fdbf;
case 0x76fdc2:c.instructions+=13;goto B76fdc2;
case 0x76fdc5:c.instructions+=12;goto B76fdc5;
case 0x76fdcb:c.instructions+=11;goto B76fdcb;
case 0x76fdce:c.instructions+=10;goto B76fdce;
case 0x76fdd4:c.instructions+=9;goto B76fdd4;
case 0x76fdd7:c.instructions+=8;goto B76fdd7;
case 0x76fdd9:c.instructions+=7;goto B76fdd9;
case 0x76fddb:c.instructions+=6;goto B76fddb;
case 0x76fdde:c.instructions+=5;goto B76fdde;
case 0x76fde2:c.instructions+=4;goto B76fde2;
case 0x76fde5:c.instructions+=3;goto B76fde5;
case 0x76fdec:c.instructions+=2;goto B76fdec;
case 0x76fdef:c.instructions+=1;goto B76fdef;
case 0x76fdf1:goto L76fdf1;
case 0x76fdf9:c.instructions+=4;goto B76fdf9;
case 0x76fdfc:c.instructions+=3;goto B76fdfc;
case 0x76fe02:c.instructions+=2;goto B76fe02;
case 0x76fe09:c.instructions+=1;goto B76fe09;
case 0x76fe0b:goto L76fe0b;
case 0x76fe0c:c.instructions+=2;goto B76fe0c;
case 0x76fe12:c.instructions+=1;goto B76fe12;
case 0x76fe15:goto L76fe15;
case 0x76fe1c:c.instructions+=7;goto B76fe1c;
case 0x76fe22:c.instructions+=6;goto B76fe22;
case 0x76fe24:c.instructions+=5;goto B76fe24;
case 0x76fe25:c.instructions+=4;goto B76fe25;
case 0x76fe27:c.instructions+=3;goto B76fe27;
case 0x76fe29:c.instructions+=2;goto B76fe29;
case 0x76fe2c:c.instructions+=1;goto B76fe2c;
case 0x76fe2e:goto L76fe2e;
case 0x76fe35:c.instructions+=22;goto B76fe35;
case 0x76fe37:c.instructions+=21;goto B76fe37;
case 0x76fe39:c.instructions+=20;goto B76fe39;
case 0x76fe3c:c.instructions+=19;goto B76fe3c;
case 0x76fe43:c.instructions+=18;goto B76fe43;
case 0x76fe46:c.instructions+=17;goto B76fe46;
case 0x76fe4c:c.instructions+=16;goto B76fe4c;
case 0x76fe4f:c.instructions+=15;goto B76fe4f;
case 0x76fe52:c.instructions+=14;goto B76fe52;
case 0x76fe55:c.instructions+=13;goto B76fe55;
case 0x76fe5b:c.instructions+=12;goto B76fe5b;
case 0x76fe5e:c.instructions+=11;goto B76fe5e;
case 0x76fe61:c.instructions+=10;goto B76fe61;
case 0x76fe67:c.instructions+=9;goto B76fe67;
case 0x76fe6a:c.instructions+=8;goto B76fe6a;
case 0x76fe6c:c.instructions+=7;goto B76fe6c;
case 0x76fe6e:c.instructions+=6;goto B76fe6e;
case 0x76fe71:c.instructions+=5;goto B76fe71;
case 0x76fe74:c.instructions+=4;goto B76fe74;
case 0x76fe78:c.instructions+=3;goto B76fe78;
case 0x76fe7f:c.instructions+=2;goto B76fe7f;
case 0x76fe82:c.instructions+=1;goto B76fe82;
case 0x76fe84:goto L76fe84;
case 0x76fe8b:c.instructions+=4;goto B76fe8b;
case 0x76fe8e:c.instructions+=3;goto B76fe8e;
case 0x76fe95:c.instructions+=2;goto B76fe95;
case 0x76fe98:c.instructions+=1;goto B76fe98;
case 0x76fe9a:goto L76fe9a;
case 0x76fe9d:c.instructions+=3;goto B76fe9d;
case 0x76fea0:c.instructions+=2;goto B76fea0;
case 0x76fea6:c.instructions+=1;goto B76fea6;
case 0x76fea8:goto L76fea8;
case 0x76feaa:c.instructions+=18;goto B76feaa;
case 0x76feac:c.instructions+=17;goto B76feac;
case 0x76feaf:c.instructions+=16;goto B76feaf;
case 0x76feb6:c.instructions+=15;goto B76feb6;
case 0x76feb9:c.instructions+=14;goto B76feb9;
case 0x76febf:c.instructions+=13;goto B76febf;
case 0x76fec2:c.instructions+=12;goto B76fec2;
case 0x76fec5:c.instructions+=11;goto B76fec5;
case 0x76fec8:c.instructions+=10;goto B76fec8;
case 0x76fecb:c.instructions+=9;goto B76fecb;
case 0x76fed1:c.instructions+=8;goto B76fed1;
case 0x76fed4:c.instructions+=7;goto B76fed4;
case 0x76feda:c.instructions+=6;goto B76feda;
case 0x76fedd:c.instructions+=5;goto B76fedd;
case 0x76fedf:c.instructions+=4;goto B76fedf;
case 0x76fee1:c.instructions+=3;goto B76fee1;
case 0x76fee4:c.instructions+=2;goto B76fee4;
case 0x76fee7:c.instructions+=1;goto B76fee7;
case 0x76feec:goto L76feec;
case 0x76feee:c.instructions+=3;goto B76feee;
case 0x76fef5:c.instructions+=2;goto B76fef5;
case 0x76fef8:c.instructions+=1;goto B76fef8;
case 0x76fefd:goto L76fefd;
case 0x76ff00:c.instructions+=4;goto B76ff00;
case 0x76ff06:c.instructions+=3;goto B76ff06;
case 0x76ff08:c.instructions+=2;goto B76ff08;
case 0x76ff09:c.instructions+=1;goto B76ff09;
case 0x76ff0f:goto L76ff0f;
case 0x76ff16:c.instructions+=4;goto B76ff16;
case 0x76ff18:c.instructions+=3;goto B76ff18;
case 0x76ff1a:c.instructions+=2;goto B76ff1a;
case 0x76ff1d:c.instructions+=1;goto B76ff1d;
case 0x76ff1f:goto L76ff1f;
case 0x76ff26:c.instructions+=22;goto B76ff26;
case 0x76ff28:c.instructions+=21;goto B76ff28;
case 0x76ff2a:c.instructions+=20;goto B76ff2a;
case 0x76ff2d:c.instructions+=19;goto B76ff2d;
case 0x76ff34:c.instructions+=18;goto B76ff34;
case 0x76ff37:c.instructions+=17;goto B76ff37;
case 0x76ff3d:c.instructions+=16;goto B76ff3d;
case 0x76ff40:c.instructions+=15;goto B76ff40;
case 0x76ff43:c.instructions+=14;goto B76ff43;
case 0x76ff46:c.instructions+=13;goto B76ff46;
case 0x76ff4c:c.instructions+=12;goto B76ff4c;
case 0x76ff4f:c.instructions+=11;goto B76ff4f;
case 0x76ff52:c.instructions+=10;goto B76ff52;
case 0x76ff58:c.instructions+=9;goto B76ff58;
case 0x76ff5b:c.instructions+=8;goto B76ff5b;
case 0x76ff5d:c.instructions+=7;goto B76ff5d;
case 0x76ff5f:c.instructions+=6;goto B76ff5f;
case 0x76ff62:c.instructions+=5;goto B76ff62;
case 0x76ff65:c.instructions+=4;goto B76ff65;
case 0x76ff69:c.instructions+=3;goto B76ff69;
case 0x76ff70:c.instructions+=2;goto B76ff70;
case 0x76ff73:c.instructions+=1;goto B76ff73;
case 0x76ff75:goto L76ff75;
case 0x76ff7c:c.instructions+=4;goto B76ff7c;
case 0x76ff7f:c.instructions+=3;goto B76ff7f;
case 0x76ff86:c.instructions+=2;goto B76ff86;
case 0x76ff89:c.instructions+=1;goto B76ff89;
case 0x76ff8b:goto L76ff8b;
case 0x76ff8e:c.instructions+=3;goto B76ff8e;
case 0x76ff91:c.instructions+=2;goto B76ff91;
case 0x76ff97:c.instructions+=1;goto B76ff97;
case 0x76ff99:goto L76ff99;
case 0x76ff9b:c.instructions+=17;goto B76ff9b;
case 0x76ff9d:c.instructions+=16;goto B76ff9d;
case 0x76ffa0:c.instructions+=15;goto B76ffa0;
case 0x76ffa7:c.instructions+=14;goto B76ffa7;
case 0x76ffaa:c.instructions+=13;goto B76ffaa;
case 0x76ffb0:c.instructions+=12;goto B76ffb0;
case 0x76ffb3:c.instructions+=11;goto B76ffb3;
case 0x76ffb6:c.instructions+=10;goto B76ffb6;
case 0x76ffb9:c.instructions+=9;goto B76ffb9;
case 0x76ffbc:c.instructions+=8;goto B76ffbc;
case 0x76ffc2:c.instructions+=7;goto B76ffc2;
case 0x76ffc5:c.instructions+=6;goto B76ffc5;
case 0x76ffcb:c.instructions+=5;goto B76ffcb;
case 0x76ffce:c.instructions+=4;goto B76ffce;
case 0x76ffd0:c.instructions+=3;goto B76ffd0;
case 0x76ffd2:c.instructions+=2;goto B76ffd2;
case 0x76ffd5:c.instructions+=1;goto B76ffd5;
case 0x76ffd8:goto L76ffd8;
case 0x76ffdf:c.instructions+=2;goto B76ffdf;
case 0x76ffe5:c.instructions+=1;goto B76ffe5;
case 0x76ffea:goto L76ffea;
case 0x76ffec:c.instructions+=3;goto B76ffec;
case 0x76fff3:c.instructions+=2;goto B76fff3;
case 0x76fff6:c.instructions+=1;goto B76fff6;
case 0x76fffb:goto L76fffb;
default:missing_instruction(c.pc);}
B76f000:L76f000:{c.instructions+=4;NFSU2_TR(0x76f000);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B76f003:{NFSU2_TR(0x76f003);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76f005:{NFSU2_TR(0x76f005);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76f008:{NFSU2_TR(0x76f008);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L76f00d;}}
}
B76f00a:L76f00a:{c.instructions+=1;NFSU2_TR(0x76f00a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76f00d:L76f00d:{c.instructions+=2;NFSU2_TR(0x76f00d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76f011:{NFSU2_TR(0x76f011);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76f017;}}
}
B76f013:L76f013:{c.instructions+=2;NFSU2_TR(0x76f013);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B76f015:{NFSU2_TR(0x76f015);
{goto L76f056;}
}
B76f017:L76f017:{c.instructions+=5;NFSU2_TR(0x76f017);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B76f01a:{NFSU2_TR(0x76f01a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f01d:{NFSU2_TR(0x76f01d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76f020:{NFSU2_TR(0x76f020);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76f024:{NFSU2_TR(0x76f024);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76f039;}}
}
B76f026:L76f026:{c.instructions+=4;NFSU2_TR(0x76f026);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76f029:{NFSU2_TR(0x76f029);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B76f02b:{NFSU2_TR(0x76f02b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76f02e:{NFSU2_TR(0x76f02e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76f033ull));
{goto L76f7d2;}
}
B76f033:L76f033:{c.instructions+=2;NFSU2_TR(0x76f033);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76f036:{NFSU2_TR(0x76f036);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76f039:L76f039:{c.instructions+=4;NFSU2_TR(0x76f039);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76f03c:{NFSU2_TR(0x76f03c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B76f03e:{NFSU2_TR(0x76f03e);
__builtin_memmove((R+0),(R+4),4);
}
B76f040:{NFSU2_TR(0x76f040);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B76f043:L76f043:{c.instructions+=1;NFSU2_TR(0x76f043);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L76f045;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76f043u);}goto L76f043;}
}
B76f045:L76f045:{c.instructions+=2;NFSU2_TR(0x76f045);
__builtin_memmove((R+4),(R+0),4);
}
B76f047:{NFSU2_TR(0x76f047);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B76f04a:L76f04a:{c.instructions+=1;NFSU2_TR(0x76f04a);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L76f04c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76f04au);}goto L76f04a;}
}
B76f04c:L76f04c:{c.instructions+=4;NFSU2_TR(0x76f04c);
__builtin_memmove((R+4),(R+0),4);
}
B76f04e:{NFSU2_TR(0x76f04e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f051:{NFSU2_TR(0x76f051);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+4))));
s4(u32(r4(R+0)),r4(U+0));
}
B76f053:{NFSU2_TR(0x76f053);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B76f056:L76f056:{c.instructions+=4;NFSU2_TR(0x76f056);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B76f059:{NFSU2_TR(0x76f059);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76f05c:{NFSU2_TR(0x76f05c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
}
B76f05f:{NFSU2_TR(0x76f05f);
if(r1(R+512)){{goto L76f081;}}
}
B76f061:L76f061:{c.instructions+=11;NFSU2_TR(0x76f061);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f064:{NFSU2_TR(0x76f064);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76f067:{NFSU2_TR(0x76f067);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B76f06a:{NFSU2_TR(0x76f06a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(r1(U+0)));
}
B76f06d:{NFSU2_TR(0x76f06d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76f070:{NFSU2_TR(0x76f070);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76f073:{NFSU2_TR(0x76f073);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B76f075:{NFSU2_TR(0x76f075);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B76f079:{NFSU2_TR(0x76f079);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+4))));
}
B76f07b:{NFSU2_TR(0x76f07b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+4))));
}
B76f07e:{NFSU2_TR(0x76f07e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76f081:L76f081:{c.instructions+=2;NFSU2_TR(0x76f081);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x106ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x106ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x106ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76f087:{NFSU2_TR(0x76f087);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L76f095;}}
}
B76f089:L76f089:{c.instructions+=3;NFSU2_TR(0x76f089);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76f08b:{NFSU2_TR(0x76f08b);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
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
B76f08f:{NFSU2_TR(0x76f08f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x76ef4fu,76e);}
}
B76f095:L76f095:{c.instructions+=4;NFSU2_TR(0x76f095);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76f096:{NFSU2_TR(0x76f096);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76f097:{NFSU2_TR(0x76f097);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B76f098:{NFSU2_TR(0x76f098);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76f099:L76f099:{c.instructions+=12;NFSU2_TR(0x76f099);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f09a:{NFSU2_TR(0x76f09a);
__builtin_memmove((R+20),(R+16),4);
}
B76f09c:{NFSU2_TR(0x76f09c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f09d:{NFSU2_TR(0x76f09d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76f0a0:{NFSU2_TR(0x76f0a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76f0a3:{NFSU2_TR(0x76f0a3);
w4(R+0,u32(0xffffull));
}
B76f0a8:{NFSU2_TR(0x76f0a8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f0a9:{NFSU2_TR(0x76f0a9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffffbull))));
}
B76f0ac:{NFSU2_TR(0x76f0ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B76f0ae:{NFSU2_TR(0x76f0ae);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f0af:{NFSU2_TR(0x76f0af);
__builtin_memmove((R+24),(R+0),4);
}
B76f0b1:{NFSU2_TR(0x76f0b1);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L76f0b5;}}
}
B76f0b3:L76f0b3:{c.instructions+=1;NFSU2_TR(0x76f0b3);
__builtin_memmove((R+24),(R+4),4);
}
B76f0b5:L76f0b5:{c.instructions+=1;NFSU2_TR(0x76f0b5);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B76f0b7:L76f0b7:{c.instructions+=3;NFSU2_TR(0x76f0b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f0ba:{NFSU2_TR(0x76f0ba);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76f0bd:{NFSU2_TR(0x76f0bd);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L76f0cf;}}
}
B76f0bf:L76f0bf:{c.instructions+=1;NFSU2_TR(0x76f0bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76f0c4ull));
TAIL_STATIC(0x76ef41u,76e);
}
B76f0c4:L76f0c4:{c.instructions+=3;NFSU2_TR(0x76f0c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f0c7:{NFSU2_TR(0x76f0c7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76f0c9:{NFSU2_TR(0x76f0c9);
if(r1(R+518)){{goto L76f163;}}
}
B76f0cf:L76f0cf:{c.instructions+=6;NFSU2_TR(0x76f0cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76f0d2:{NFSU2_TR(0x76f0d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76f0d5:{NFSU2_TR(0x76f0d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76f0d8:{NFSU2_TR(0x76f0d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76f0db:{NFSU2_TR(0x76f0db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B76f0de:{NFSU2_TR(0x76f0de);
if(r1(R+518)){{goto L76f0e4;}}
}
B76f0e0:L76f0e0:{c.instructions+=2;NFSU2_TR(0x76f0e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B76f0e2:{NFSU2_TR(0x76f0e2);
if(r1(R+512)){{goto L76f118;}}
}
B76f0e4:L76f0e4:{c.instructions+=5;NFSU2_TR(0x76f0e4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B76f0e6:{NFSU2_TR(0x76f0e6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B76f0e8:{NFSU2_TR(0x76f0e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76f0eb:{NFSU2_TR(0x76f0eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76f0ee:{NFSU2_TR(0x76f0ee);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L76f0f7;}}
}
B76f0f0:L76f0f0:{c.instructions+=3;NFSU2_TR(0x76f0f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76f0f3:{NFSU2_TR(0x76f0f3);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B76f0f5:{NFSU2_TR(0x76f0f5);
{goto L76f0f9;}
}
B76f0f7:L76f0f7:{c.instructions+=1;NFSU2_TR(0x76f0f7);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B76f0f9:L76f0f9:{c.instructions+=6;NFSU2_TR(0x76f0f9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f0fa:{NFSU2_TR(0x76f0fa);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B76f0fc:{NFSU2_TR(0x76f0fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f0fd:{NFSU2_TR(0x76f0fd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f0fe:{NFSU2_TR(0x76f0fe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f0ff:{NFSU2_TR(0x76f0ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76f104ull));
TAIL_STATIC(0x770b5eu,770);
}
B76f104:L76f104:{c.instructions+=4;NFSU2_TR(0x76f104);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f107:{NFSU2_TR(0x76f107);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76f10a:{NFSU2_TR(0x76f10a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76f10c:{NFSU2_TR(0x76f10c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76f111ull));
TAIL_STATIC(0x76eda3u,76e);
}
B76f111:L76f111:{c.instructions+=3;NFSU2_TR(0x76f111);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76f113:{NFSU2_TR(0x76f113);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76f116:{NFSU2_TR(0x76f116);
if(r1(R+518)){{goto L76f15a;}}
}
B76f118:L76f118:{c.instructions+=7;NFSU2_TR(0x76f118);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76f11b:{NFSU2_TR(0x76f11b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76f11e:{NFSU2_TR(0x76f11e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f121:{NFSU2_TR(0x76f121);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B76f123:{NFSU2_TR(0x76f123);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x106ull))));
}
B76f128:{NFSU2_TR(0x76f128);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B76f12a:{NFSU2_TR(0x76f12a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76f0b7u);}goto L76f0b7;}}
}
B76f12c:L76f12c:{c.instructions+=2;NFSU2_TR(0x76f12c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B76f12e:{NFSU2_TR(0x76f12e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L76f137;}}
}
B76f130:L76f130:{c.instructions+=3;NFSU2_TR(0x76f130);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f133:{NFSU2_TR(0x76f133);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B76f135:{NFSU2_TR(0x76f135);
{goto L76f139;}
}
B76f137:L76f137:{c.instructions+=1;NFSU2_TR(0x76f137);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76f139:L76f139:{c.instructions+=5;NFSU2_TR(0x76f139);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f13a:{NFSU2_TR(0x76f13a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f13b:{NFSU2_TR(0x76f13b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f13c:{NFSU2_TR(0x76f13c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f13d:{NFSU2_TR(0x76f13d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76f142ull));
TAIL_STATIC(0x770b5eu,770);
}
B76f142:L76f142:{c.instructions+=4;NFSU2_TR(0x76f142);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f145:{NFSU2_TR(0x76f145);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76f148:{NFSU2_TR(0x76f148);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76f14a:{NFSU2_TR(0x76f14a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76f14full));
TAIL_STATIC(0x76eda3u,76e);
}
B76f14f:L76f14f:{c.instructions+=3;NFSU2_TR(0x76f14f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76f151:{NFSU2_TR(0x76f151);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76f154:{NFSU2_TR(0x76f154);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76f0b7u);}goto L76f0b7;}}
}
B76f15a:L76f15a:{c.instructions+=1;NFSU2_TR(0x76f15a);
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
B76f15c:L76f15c:{c.instructions+=5;NFSU2_TR(0x76f15c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76f15d:{NFSU2_TR(0x76f15d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76f15e:{NFSU2_TR(0x76f15e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76f15f:{NFSU2_TR(0x76f15f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B76f160:{NFSU2_TR(0x76f160);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76f163:L76f163:{c.instructions+=2;NFSU2_TR(0x76f163);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76f166:{NFSU2_TR(0x76f166);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76f15au);}goto L76f15a;}}
}
B76f168:L76f168:{c.instructions+=3;NFSU2_TR(0x76f168);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76f16b:{NFSU2_TR(0x76f16b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B76f16d:{NFSU2_TR(0x76f16d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L76f176;}}
}
B76f16f:L76f16f:{c.instructions+=3;NFSU2_TR(0x76f16f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f172:{NFSU2_TR(0x76f172);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B76f174:{NFSU2_TR(0x76f174);
{goto L76f178;}
}
B76f176:L76f176:{c.instructions+=1;NFSU2_TR(0x76f176);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76f178:L76f178:{c.instructions+=10;NFSU2_TR(0x76f178);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B76f17a:{NFSU2_TR(0x76f17a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76f17e:{NFSU2_TR(0x76f17e);
__builtin_memmove((R+4),(R+518),1);
}
B76f181:{NFSU2_TR(0x76f181);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f182:{NFSU2_TR(0x76f182);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76f185:{NFSU2_TR(0x76f185);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B76f187:{NFSU2_TR(0x76f187);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f188:{NFSU2_TR(0x76f188);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f189:{NFSU2_TR(0x76f189);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f18a:{NFSU2_TR(0x76f18a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76f18full));
TAIL_STATIC(0x770b5eu,770);
}
B76f18f:L76f18f:{c.instructions+=4;NFSU2_TR(0x76f18f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f192:{NFSU2_TR(0x76f192);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76f195:{NFSU2_TR(0x76f195);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76f197:{NFSU2_TR(0x76f197);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76f19cull));
TAIL_STATIC(0x76eda3u,76e);
}
B76f19c:L76f19c:{c.instructions+=3;NFSU2_TR(0x76f19c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76f19e:{NFSU2_TR(0x76f19e);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76f1a1:{NFSU2_TR(0x76f1a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76f1ae;}}
}
B76f1a3:L76f1a3:{c.instructions+=2;NFSU2_TR(0x76f1a3);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
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
B76f1a7:{NFSU2_TR(0x76f1a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76f15au);}goto L76f15a;}}
}
B76f1a9:L76f1a9:{c.instructions+=3;NFSU2_TR(0x76f1a9);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f1ab:{NFSU2_TR(0x76f1ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76f1ac:{NFSU2_TR(0x76f1ac);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76f15cu);}goto L76f15c;}
}
B76f1ae:L76f1ae:{c.instructions+=5;NFSU2_TR(0x76f1ae);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76f1b0:{NFSU2_TR(0x76f1b0);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
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
B76f1b4:{NFSU2_TR(0x76f1b4);
__builtin_memmove((R+0),(R+518),1);
}
B76f1b7:{NFSU2_TR(0x76f1b7);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B76f1bb:{NFSU2_TR(0x76f1bb);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76f15cu);}goto L76f15c;}
}
B76f1bd:L76f1bd:{c.instructions+=7;NFSU2_TR(0x76f1bd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f1be:{NFSU2_TR(0x76f1be);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f1bf:{NFSU2_TR(0x76f1bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f1c0:{NFSU2_TR(0x76f1c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76f1c4:{NFSU2_TR(0x76f1c4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f1c5:{NFSU2_TR(0x76f1c5);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B76f1c7:{NFSU2_TR(0x76f1c7);
w4(R+20,u32(0x106ull));
}
B76f1cc:L76f1cc:{c.instructions+=3;NFSU2_TR(0x76f1cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f1cf:{NFSU2_TR(0x76f1cf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B76f1d1:{NFSU2_TR(0x76f1d1);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L76f1f4;}}
}
B76f1d3:L76f1d3:{c.instructions+=2;NFSU2_TR(0x76f1d3);
__builtin_memmove((R+12),(R+24),4);
}
B76f1d5:{NFSU2_TR(0x76f1d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76f1daull));
TAIL_STATIC(0x76ef41u,76e);
}
B76f1da:L76f1da:{c.instructions+=3;NFSU2_TR(0x76f1da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f1dd:{NFSU2_TR(0x76f1dd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B76f1df:{NFSU2_TR(0x76f1df);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L76f1ec;}}
}
B76f1e1:L76f1e1:{c.instructions+=2;NFSU2_TR(0x76f1e1);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76f1e6:{NFSU2_TR(0x76f1e6);
if(r1(R+518)){{goto L76f403;}}
}
B76f1ec:L76f1ec:{c.instructions+=2;NFSU2_TR(0x76f1ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76f1ee:{NFSU2_TR(0x76f1ee);
if(r1(R+518)){{goto L76f40c;}}
}
B76f1f4:L76f1f4:{c.instructions+=2;NFSU2_TR(0x76f1f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
}
B76f1f7:{NFSU2_TR(0x76f1f7);
if(r1(R+512)){{goto L76f235;}}
}
B76f1f9:L76f1f9:{c.instructions+=19;NFSU2_TR(0x76f1f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f1fc:{NFSU2_TR(0x76f1fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76f1ff:{NFSU2_TR(0x76f1ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76f202:{NFSU2_TR(0x76f202);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B76f204:{NFSU2_TR(0x76f204);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76f207:{NFSU2_TR(0x76f207);
u8 U[13];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(r1(U+12)));
}
B76f20c:{NFSU2_TR(0x76f20c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+4))));
}
B76f20e:{NFSU2_TR(0x76f20e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+4))));
}
B76f211:{NFSU2_TR(0x76f211);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76f214:{NFSU2_TR(0x76f214);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76f217:{NFSU2_TR(0x76f217);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+28,u32(r2(U+8)));
}
B76f21b:{NFSU2_TR(0x76f21b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f21e:{NFSU2_TR(0x76f21e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76f221:{NFSU2_TR(0x76f221);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
}
B76f223:{NFSU2_TR(0x76f223);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),2);
s2(u32(r4(U+4)),r2(U+8));
}
B76f227:{NFSU2_TR(0x76f227);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f22a:{NFSU2_TR(0x76f22a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76f22d:{NFSU2_TR(0x76f22d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B76f231:{NFSU2_TR(0x76f231);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),2);
s2(u32(r4(U+4)),r2(U+8));
}
B76f235:L76f235:{c.instructions+=2;NFSU2_TR(0x76f235);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76f237:{NFSU2_TR(0x76f237);
if(r1(R+518)){{goto L76f25b;}}
}
B76f239:L76f239:{c.instructions+=6;NFSU2_TR(0x76f239);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f23c:{NFSU2_TR(0x76f23c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76f23f:{NFSU2_TR(0x76f23f);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B76f241:{NFSU2_TR(0x76f241);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+20))));
}
B76f243:{NFSU2_TR(0x76f243);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76f245:{NFSU2_TR(0x76f245);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L76f25b;}}
}
B76f247:L76f247:{c.instructions+=2;NFSU2_TR(0x76f247);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76f24e:{NFSU2_TR(0x76f24e);
if(r1(R+518)){{goto L76f25b;}}
}
B76f250:L76f250:{c.instructions+=3;NFSU2_TR(0x76f250);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f251:{NFSU2_TR(0x76f251);
__builtin_memmove((R+4),(R+24),4);
}
B76f253:{NFSU2_TR(0x76f253);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76f258ull));
TAIL_STATIC(0x76edf7u,76e);
}
B76f258:L76f258:{c.instructions+=1;NFSU2_TR(0x76f258);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76f25b:L76f25b:{c.instructions+=2;NFSU2_TR(0x76f25b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x3ull))));
}
B76f25f:{NFSU2_TR(0x76f25f);
if(r1(R+512)){{goto L76f36f;}}
}
B76f265:L76f265:{c.instructions+=20;NFSU2_TR(0x76f265);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1698ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76f26b:{NFSU2_TR(0x76f26b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B76f26e:{NFSU2_TR(0x76f26e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x169cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76f274:{NFSU2_TR(0x76f274);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76f276:{NFSU2_TR(0x76f276);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B76f27a:{NFSU2_TR(0x76f27a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(R+0,u16(u32(r2(R+0))-u32(r2(U+4))));
}
B76f27e:{NFSU2_TR(0x76f27e);
w1(R+4,u8(u32(r1(R+4))-u32(u8(0x3ull))));
}
B76f281:{NFSU2_TR(0x76f281);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),2);
s2(u32(r4(U+4)),r2(U+8));
}
B76f285:{NFSU2_TR(0x76f285);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1698ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76f28b:{NFSU2_TR(0x76f28b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1690ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76f291:{NFSU2_TR(0x76f291);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B76f294:{NFSU2_TR(0x76f294);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1698ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76f29a:{NFSU2_TR(0x76f29a);
w4(R+4,u32(r1(R+4)));
}
B76f29d:{NFSU2_TR(0x76f29d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7dd038ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B76f2a4:{NFSU2_TR(0x76f2a4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffffull))));
}
B76f2a9:{NFSU2_TR(0x76f2a9);
u8 U[12];
w4(U+0,u32(u32(u32(0x490ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B76f2b0:{NFSU2_TR(0x76f2b0);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w2(U+0,u16(u32(r2(U+0))+u32(u16(0x1ull))));
s2(u32(r4(R+4)),r2(U+0));
}
B76f2b3:{NFSU2_TR(0x76f2b3);
w1(R+512,u8((r2(R+0))<(u16(0x100ull))));
}
B76f2b7:{NFSU2_TR(0x76f2b7);
w4(R+0,u32(r2(R+0)));
}
B76f2ba:{NFSU2_TR(0x76f2ba);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L76f2c5;}}
}
B76f2bc:L76f2bc:{c.instructions+=2;NFSU2_TR(0x76f2bc);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7dce38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B76f2c3:{NFSU2_TR(0x76f2c3);
{goto L76f2cf;}
}
B76f2c5:L76f2c5:{c.instructions+=2;NFSU2_TR(0x76f2c5);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B76f2c8:{NFSU2_TR(0x76f2c8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7dcf38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B76f2cf:L76f2cf:{c.instructions+=12;NFSU2_TR(0x76f2cf);
u8 U[12];
w4(U+0,u32(u32(u32(0x980ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B76f2d6:{NFSU2_TR(0x76f2d6);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w2(U+0,u16(u32(r2(U+0))+u32(u16(0x1ull))));
s2(u32(r4(R+0)),r2(U+0));
}
B76f2d9:{NFSU2_TR(0x76f2d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1694ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f2df:{NFSU2_TR(0x76f2df);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B76f2e0:{NFSU2_TR(0x76f2e0);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B76f2e2:{NFSU2_TR(0x76f2e2);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1698ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76f2e8:{NFSU2_TR(0x76f2e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f2eb:{NFSU2_TR(0x76f2eb);
__builtin_memmove((R+12),(R+518),1);
}
B76f2ee:{NFSU2_TR(0x76f2ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B76f2f1:{NFSU2_TR(0x76f2f1);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76f2f4:{NFSU2_TR(0x76f2f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76f2f7:{NFSU2_TR(0x76f2f7);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L76f346;}}
}
B76f2f9:L76f2f9:{c.instructions+=2;NFSU2_TR(0x76f2f9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
}
B76f2fc:{NFSU2_TR(0x76f2fc);
if(r1(R+512)){{goto L76f346;}}
}
B76f2fe:L76f2fe:{c.instructions+=2;NFSU2_TR(0x76f2fe);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B76f2ff:{NFSU2_TR(0x76f2ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76f302:L76f302:{c.instructions+=21;NFSU2_TR(0x76f302);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76f305:{NFSU2_TR(0x76f305);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76f308:{NFSU2_TR(0x76f308);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76f30b:{NFSU2_TR(0x76f30b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76f30e:{NFSU2_TR(0x76f30e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f311:{NFSU2_TR(0x76f311);
u8 U[13];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B76f316:{NFSU2_TR(0x76f316);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))&u32(r4(U+4))));
}
B76f319:{NFSU2_TR(0x76f319);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B76f31b:{NFSU2_TR(0x76f31b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76f31e:{NFSU2_TR(0x76f31e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+28))));
}
B76f320:{NFSU2_TR(0x76f320);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+4))));
}
B76f323:{NFSU2_TR(0x76f323);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76f326:{NFSU2_TR(0x76f326);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+28,u32(r2(U+8)));
}
B76f32a:{NFSU2_TR(0x76f32a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f32d:{NFSU2_TR(0x76f32d);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),2);
s2(u32(r4(U+4)),r2(U+8));
}
B76f331:{NFSU2_TR(0x76f331);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f334:{NFSU2_TR(0x76f334);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76f337:{NFSU2_TR(0x76f337);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B76f33b:{NFSU2_TR(0x76f33b);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),2);
s2(u32(r4(U+4)),r2(U+8));
}
B76f33f:{NFSU2_TR(0x76f33f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76f342:{NFSU2_TR(0x76f342);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76f302u);}goto L76f302;}}
}
B76f344:L76f344:{c.instructions+=1;NFSU2_TR(0x76f344);
{goto L76f3c0;}
}
B76f346:L76f346:{c.instructions+=14;NFSU2_TR(0x76f346);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B76f349:{NFSU2_TR(0x76f349);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f34c:{NFSU2_TR(0x76f34c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76f34f:{NFSU2_TR(0x76f34f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76f353:{NFSU2_TR(0x76f353);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B76f356:{NFSU2_TR(0x76f356);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+0,u32(r1(U+0)));
}
B76f359:{NFSU2_TR(0x76f359);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76f35c:{NFSU2_TR(0x76f35c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76f35f:{NFSU2_TR(0x76f35f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B76f361:{NFSU2_TR(0x76f361);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B76f365:{NFSU2_TR(0x76f365);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+4))));
}
B76f367:{NFSU2_TR(0x76f367);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+4))));
}
B76f36a:{NFSU2_TR(0x76f36a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76f36d:{NFSU2_TR(0x76f36d);
{goto L76f3c3;}
}
B76f36f:L76f36f:{c.instructions+=19;NFSU2_TR(0x76f36f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f372:{NFSU2_TR(0x76f372);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76f375:{NFSU2_TR(0x76f375);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B76f378:{NFSU2_TR(0x76f378);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1698ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76f37e:{NFSU2_TR(0x76f37e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x169cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76f384:{NFSU2_TR(0x76f384);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w2(U+8,u16(u32(r2(U+8))&u32(u16(0x0ull))));
s2(u32(r4(U+4)),r2(U+8));
}
B76f389:{NFSU2_TR(0x76f389);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1698ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76f38f:{NFSU2_TR(0x76f38f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1690ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76f395:{NFSU2_TR(0x76f395);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),1);
s1(u32(r4(U+4)),r1(U+8));
}
B76f398:{NFSU2_TR(0x76f398);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1698ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76f39e:{NFSU2_TR(0x76f39e);
w4(R+0,u32(r1(R+0)));
}
B76f3a1:{NFSU2_TR(0x76f3a1);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B76f3a8:{NFSU2_TR(0x76f3a8);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w2(U+0,u16(u32(r2(U+0))+u32(u16(0x1ull))));
s2(u32(r4(R+0)),r2(U+0));
}
B76f3ab:{NFSU2_TR(0x76f3ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1694ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f3b1:{NFSU2_TR(0x76f3b1);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B76f3b2:{NFSU2_TR(0x76f3b2);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B76f3b4:{NFSU2_TR(0x76f3b4);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1698ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76f3ba:{NFSU2_TR(0x76f3ba);
__builtin_memmove((R+12),(R+518),1);
}
B76f3bd:{NFSU2_TR(0x76f3bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76f3c0:L76f3c0:{c.instructions+=1;NFSU2_TR(0x76f3c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76f3c3:L76f3c3:{c.instructions+=2;NFSU2_TR(0x76f3c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76f3c5:{NFSU2_TR(0x76f3c5);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76f1ccu);}goto L76f1cc;}}
}
B76f3cb:L76f3cb:{c.instructions+=3;NFSU2_TR(0x76f3cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76f3ce:{NFSU2_TR(0x76f3ce);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B76f3d0:{NFSU2_TR(0x76f3d0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L76f3d9;}}
}
B76f3d2:L76f3d2:{c.instructions+=3;NFSU2_TR(0x76f3d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f3d5:{NFSU2_TR(0x76f3d5);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B76f3d7:{NFSU2_TR(0x76f3d7);
{goto L76f3db;}
}
B76f3d9:L76f3d9:{c.instructions+=1;NFSU2_TR(0x76f3d9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76f3db:L76f3db:{c.instructions+=7;NFSU2_TR(0x76f3db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76f3de:{NFSU2_TR(0x76f3de);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f3e0:{NFSU2_TR(0x76f3e0);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B76f3e2:{NFSU2_TR(0x76f3e2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f3e3:{NFSU2_TR(0x76f3e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f3e4:{NFSU2_TR(0x76f3e4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f3e5:{NFSU2_TR(0x76f3e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76f3eaull));
TAIL_STATIC(0x770b5eu,770);
}
B76f3ea:L76f3ea:{c.instructions+=4;NFSU2_TR(0x76f3ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f3ed:{NFSU2_TR(0x76f3ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76f3f0:{NFSU2_TR(0x76f3f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76f3f2:{NFSU2_TR(0x76f3f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76f3f7ull));
TAIL_STATIC(0x76eda3u,76e);
}
B76f3f7:L76f3f7:{c.instructions+=3;NFSU2_TR(0x76f3f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76f3f9:{NFSU2_TR(0x76f3f9);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76f3fd:{NFSU2_TR(0x76f3fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76f1ccu);}goto L76f1cc;}}
}
B76f403:L76f403:{c.instructions+=1;NFSU2_TR(0x76f403);
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
B76f405:L76f405:{c.instructions+=5;NFSU2_TR(0x76f405);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76f406:{NFSU2_TR(0x76f406);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76f407:{NFSU2_TR(0x76f407);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B76f408:{NFSU2_TR(0x76f408);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76f409:{NFSU2_TR(0x76f409);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76f40c:L76f40c:{c.instructions+=3;NFSU2_TR(0x76f40c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76f40f:{NFSU2_TR(0x76f40f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B76f411:{NFSU2_TR(0x76f411);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L76f41a;}}
}
B76f413:L76f413:{c.instructions+=3;NFSU2_TR(0x76f413);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f416:{NFSU2_TR(0x76f416);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B76f418:{NFSU2_TR(0x76f418);
{goto L76f41c;}
}
B76f41a:L76f41a:{c.instructions+=1;NFSU2_TR(0x76f41a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76f41c:L76f41c:{c.instructions+=11;NFSU2_TR(0x76f41c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76f420:{NFSU2_TR(0x76f420);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B76f422:{NFSU2_TR(0x76f422);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76f425:{NFSU2_TR(0x76f425);
__builtin_memmove((R+8),(R+518),1);
}
B76f428:{NFSU2_TR(0x76f428);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f429:{NFSU2_TR(0x76f429);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76f42c:{NFSU2_TR(0x76f42c);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B76f42e:{NFSU2_TR(0x76f42e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f42f:{NFSU2_TR(0x76f42f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f430:{NFSU2_TR(0x76f430);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f431:{NFSU2_TR(0x76f431);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76f436ull));
TAIL_STATIC(0x770b5eu,770);
}
B76f436:L76f436:{c.instructions+=4;NFSU2_TR(0x76f436);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f439:{NFSU2_TR(0x76f439);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76f43c:{NFSU2_TR(0x76f43c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76f43e:{NFSU2_TR(0x76f43e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76f443ull));
TAIL_STATIC(0x76eda3u,76e);
}
B76f443:L76f443:{c.instructions+=3;NFSU2_TR(0x76f443);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76f445:{NFSU2_TR(0x76f445);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76f449:{NFSU2_TR(0x76f449);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76f455;}}
}
B76f44b:L76f44b:{c.instructions+=2;NFSU2_TR(0x76f44b);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B76f44e:{NFSU2_TR(0x76f44e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76f403u);}goto L76f403;}}
}
B76f450:L76f450:{c.instructions+=3;NFSU2_TR(0x76f450);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f452:{NFSU2_TR(0x76f452);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76f453:{NFSU2_TR(0x76f453);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76f405u);}goto L76f405;}
}
B76f455:L76f455:{c.instructions+=5;NFSU2_TR(0x76f455);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76f457:{NFSU2_TR(0x76f457);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B76f45a:{NFSU2_TR(0x76f45a);
__builtin_memmove((R+0),(R+518),1);
}
B76f45d:{NFSU2_TR(0x76f45d);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B76f461:{NFSU2_TR(0x76f461);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76f405u);}goto L76f405;}
}
B76f463:L76f463:{c.instructions+=6;NFSU2_TR(0x76f463);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f464:{NFSU2_TR(0x76f464);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f465:{NFSU2_TR(0x76f465);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f466:{NFSU2_TR(0x76f466);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76f46a:{NFSU2_TR(0x76f46a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f46b:{NFSU2_TR(0x76f46b);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B76f46d:L76f46d:{c.instructions+=4;NFSU2_TR(0x76f46d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f470:{NFSU2_TR(0x76f470);
w4(R+28,u32(0x106ull));
}
B76f475:{NFSU2_TR(0x76f475);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B76f477:{NFSU2_TR(0x76f477);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L76f49a;}}
}
B76f479:L76f479:{c.instructions+=2;NFSU2_TR(0x76f479);
__builtin_memmove((R+12),(R+24),4);
}
B76f47b:{NFSU2_TR(0x76f47b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76f480ull));
TAIL_STATIC(0x76ef41u,76e);
}
B76f480:L76f480:{c.instructions+=3;NFSU2_TR(0x76f480);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f483:{NFSU2_TR(0x76f483);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B76f485:{NFSU2_TR(0x76f485);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L76f492;}}
}
B76f487:L76f487:{c.instructions+=2;NFSU2_TR(0x76f487);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76f48c:{NFSU2_TR(0x76f48c);
if(r1(R+518)){{goto L76f68b;}}
}
B76f492:L76f492:{c.instructions+=2;NFSU2_TR(0x76f492);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76f494:{NFSU2_TR(0x76f494);
if(r1(R+518)){{goto L76f732;}}
}
B76f49a:L76f49a:{c.instructions+=2;NFSU2_TR(0x76f49a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
}
B76f49d:{NFSU2_TR(0x76f49d);
if(r1(R+512)){{goto L76f4db;}}
}
B76f49f:L76f49f:{c.instructions+=19;NFSU2_TR(0x76f49f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f4a2:{NFSU2_TR(0x76f4a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76f4a5:{NFSU2_TR(0x76f4a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76f4a8:{NFSU2_TR(0x76f4a8);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B76f4aa:{NFSU2_TR(0x76f4aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76f4ad:{NFSU2_TR(0x76f4ad);
u8 U[13];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(r1(U+12)));
}
B76f4b2:{NFSU2_TR(0x76f4b2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+4))));
}
B76f4b4:{NFSU2_TR(0x76f4b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+4))));
}
B76f4b7:{NFSU2_TR(0x76f4b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76f4ba:{NFSU2_TR(0x76f4ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76f4bd:{NFSU2_TR(0x76f4bd);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+20,u32(r2(U+8)));
}
B76f4c1:{NFSU2_TR(0x76f4c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f4c4:{NFSU2_TR(0x76f4c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76f4c7:{NFSU2_TR(0x76f4c7);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
}
B76f4c9:{NFSU2_TR(0x76f4c9);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+20),2);
s2(u32(r4(U+4)),r2(U+8));
}
B76f4cd:{NFSU2_TR(0x76f4cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f4d0:{NFSU2_TR(0x76f4d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76f4d3:{NFSU2_TR(0x76f4d3);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B76f4d7:{NFSU2_TR(0x76f4d7);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),2);
s2(u32(r4(U+4)),r2(U+8));
}
B76f4db:L76f4db:{c.instructions+=9;NFSU2_TR(0x76f4db);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76f4dd:{NFSU2_TR(0x76f4dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f4e0:{NFSU2_TR(0x76f4e0);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f4e2:{NFSU2_TR(0x76f4e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76f4e5:{NFSU2_TR(0x76f4e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f4e8:{NFSU2_TR(0x76f4e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76f4e9:{NFSU2_TR(0x76f4e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76f4ec:{NFSU2_TR(0x76f4ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76f4ef:{NFSU2_TR(0x76f4ef);
if(r1(R+518)){{goto L76f53e;}}
}
B76f4f1:L76f4f1:{c.instructions+=3;NFSU2_TR(0x76f4f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f4f4:{NFSU2_TR(0x76f4f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B76f4f7:{NFSU2_TR(0x76f4f7);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L76f53e;}}
}
B76f4f9:L76f4f9:{c.instructions+=6;NFSU2_TR(0x76f4f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f4fc:{NFSU2_TR(0x76f4fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76f4ff:{NFSU2_TR(0x76f4ff);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+20))));
}
B76f501:{NFSU2_TR(0x76f501);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B76f503:{NFSU2_TR(0x76f503);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76f505:{NFSU2_TR(0x76f505);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L76f53e;}}
}
B76f507:L76f507:{c.instructions+=3;NFSU2_TR(0x76f507);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76f50d:{NFSU2_TR(0x76f50d);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B76f50f:{NFSU2_TR(0x76f50f);
if(r1(R+518)){{goto L76f51c;}}
}
B76f511:L76f511:{c.instructions+=3;NFSU2_TR(0x76f511);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f512:{NFSU2_TR(0x76f512);
__builtin_memmove((R+4),(R+24),4);
}
B76f514:{NFSU2_TR(0x76f514);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76f519ull));
TAIL_STATIC(0x76edf7u,76e);
}
B76f519:L76f519:{c.instructions+=1;NFSU2_TR(0x76f519);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76f51c:L76f51c:{c.instructions+=3;NFSU2_TR(0x76f51c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f51f:{NFSU2_TR(0x76f51f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x5ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76f522:{NFSU2_TR(0x76f522);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L76f53e;}}
}
B76f524:L76f524:{c.instructions+=2;NFSU2_TR(0x76f524);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B76f527:{NFSU2_TR(0x76f527);
if(r1(R+518)){{goto L76f53b;}}
}
B76f529:L76f529:{c.instructions+=2;NFSU2_TR(0x76f529);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76f52c:{NFSU2_TR(0x76f52c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76f53e;}}
}
B76f52e:L76f52e:{c.instructions+=4;NFSU2_TR(0x76f52e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f531:{NFSU2_TR(0x76f531);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B76f534:{NFSU2_TR(0x76f534);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x1000ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x1000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76f539:{NFSU2_TR(0x76f539);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L76f53e;}}
}
B76f53b:L76f53b:{c.instructions+=1;NFSU2_TR(0x76f53b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76f53e:L76f53e:{c.instructions+=3;NFSU2_TR(0x76f53e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f541:{NFSU2_TR(0x76f541);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
}
B76f544:{NFSU2_TR(0x76f544);
if(r1(R+512)){{goto L76f694;}}
}
B76f54a:L76f54a:{c.instructions+=2;NFSU2_TR(0x76f54a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76f54d:{NFSU2_TR(0x76f54d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L76f694;}}
}
B76f553:L76f553:{c.instructions+=24;NFSU2_TR(0x76f553);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76f556:{NFSU2_TR(0x76f556);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f559:{NFSU2_TR(0x76f559);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1698ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76f55f:{NFSU2_TR(0x76f55f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x169cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76f565:{NFSU2_TR(0x76f565);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffffdull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B76f569:{NFSU2_TR(0x76f569);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B76f56c:{NFSU2_TR(0x76f56c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76f56e:{NFSU2_TR(0x76f56e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B76f572:{NFSU2_TR(0x76f572);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(R+0,u16(u32(r2(R+0))-u32(r2(U+4))));
}
B76f576:{NFSU2_TR(0x76f576);
w1(R+4,u8(u32(r1(R+4))-u32(u8(0x3ull))));
}
B76f579:{NFSU2_TR(0x76f579);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B76f57a:{NFSU2_TR(0x76f57a);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),2);
s2(u32(r4(U+4)),r2(U+8));
}
B76f57e:{NFSU2_TR(0x76f57e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1698ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76f584:{NFSU2_TR(0x76f584);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1690ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76f58a:{NFSU2_TR(0x76f58a);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B76f58d:{NFSU2_TR(0x76f58d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1698ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76f593:{NFSU2_TR(0x76f593);
w4(R+4,u32(r1(R+4)));
}
B76f596:{NFSU2_TR(0x76f596);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7dd038ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B76f59d:{NFSU2_TR(0x76f59d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffffull))));
}
B76f5a2:{NFSU2_TR(0x76f5a2);
u8 U[12];
w4(U+0,u32(u32(u32(0x490ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B76f5a9:{NFSU2_TR(0x76f5a9);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w2(U+0,u16(u32(r2(U+0))+u32(u16(0x1ull))));
s2(u32(r4(R+4)),r2(U+0));
}
B76f5ac:{NFSU2_TR(0x76f5ac);
w1(R+512,u8((r2(R+0))<(u16(0x100ull))));
}
B76f5b0:{NFSU2_TR(0x76f5b0);
w4(R+0,u32(r2(R+0)));
}
B76f5b3:{NFSU2_TR(0x76f5b3);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L76f5be;}}
}
B76f5b5:L76f5b5:{c.instructions+=2;NFSU2_TR(0x76f5b5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7dce38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B76f5bc:{NFSU2_TR(0x76f5bc);
{goto L76f5c8;}
}
B76f5be:L76f5be:{c.instructions+=2;NFSU2_TR(0x76f5be);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B76f5c1:{NFSU2_TR(0x76f5c1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7dcf38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B76f5c8:L76f5c8:{c.instructions+=14;NFSU2_TR(0x76f5c8);
u8 U[12];
w4(U+0,u32(u32(u32(0x980ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B76f5cf:{NFSU2_TR(0x76f5cf);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w2(U+0,u16(u32(r2(U+0))+u32(u16(0x1ull))));
s2(u32(r4(R+0)),r2(U+0));
}
B76f5d2:{NFSU2_TR(0x76f5d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1694ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f5d8:{NFSU2_TR(0x76f5d8);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B76f5d9:{NFSU2_TR(0x76f5d9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B76f5db:{NFSU2_TR(0x76f5db);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1698ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76f5e1:{NFSU2_TR(0x76f5e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f5e4:{NFSU2_TR(0x76f5e4);
__builtin_memmove((R+12),(R+518),1);
}
B76f5e7:{NFSU2_TR(0x76f5e7);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B76f5e9:{NFSU2_TR(0x76f5e9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B76f5ea:{NFSU2_TR(0x76f5ea);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B76f5ec:{NFSU2_TR(0x76f5ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B76f5ef:{NFSU2_TR(0x76f5ef);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
}
B76f5f2:{NFSU2_TR(0x76f5f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76f5f5:L76f5f5:{c.instructions+=4;NFSU2_TR(0x76f5f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76f5f8:{NFSU2_TR(0x76f5f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76f5fb:{NFSU2_TR(0x76f5fb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76f5fd:{NFSU2_TR(0x76f5fd);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L76f638;}}
}
B76f5ff:L76f5ff:{c.instructions+=18;NFSU2_TR(0x76f5ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f602:{NFSU2_TR(0x76f602);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76f605:{NFSU2_TR(0x76f605);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B76f607:{NFSU2_TR(0x76f607);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76f60a:{NFSU2_TR(0x76f60a);
u8 U[13];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(r1(U+12)));
}
B76f60f:{NFSU2_TR(0x76f60f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+4))));
}
B76f611:{NFSU2_TR(0x76f611);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+4))));
}
B76f614:{NFSU2_TR(0x76f614);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76f617:{NFSU2_TR(0x76f617);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76f61a:{NFSU2_TR(0x76f61a);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+20,u32(r2(U+8)));
}
B76f61e:{NFSU2_TR(0x76f61e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f621:{NFSU2_TR(0x76f621);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76f624:{NFSU2_TR(0x76f624);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
}
B76f626:{NFSU2_TR(0x76f626);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+20),2);
s2(u32(r4(U+4)),r2(U+8));
}
B76f62a:{NFSU2_TR(0x76f62a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f62d:{NFSU2_TR(0x76f62d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76f630:{NFSU2_TR(0x76f630);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B76f634:{NFSU2_TR(0x76f634);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),2);
s2(u32(r4(U+4)),r2(U+8));
}
B76f638:L76f638:{c.instructions+=2;NFSU2_TR(0x76f638);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76f63b:{NFSU2_TR(0x76f63b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76f5f5u);}goto L76f5f5;}}
}
B76f63d:L76f63d:{c.instructions+=6;NFSU2_TR(0x76f63d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76f641:{NFSU2_TR(0x76f641);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76f644:{NFSU2_TR(0x76f644);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76f646:{NFSU2_TR(0x76f646);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f649:{NFSU2_TR(0x76f649);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76f650:{NFSU2_TR(0x76f650);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76f46du);}goto L76f46d;}}
}
B76f656:L76f656:{c.instructions+=3;NFSU2_TR(0x76f656);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76f659:{NFSU2_TR(0x76f659);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B76f65b:{NFSU2_TR(0x76f65b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L76f664;}}
}
B76f65d:L76f65d:{c.instructions+=3;NFSU2_TR(0x76f65d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76f660:{NFSU2_TR(0x76f660);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B76f662:{NFSU2_TR(0x76f662);
{goto L76f666;}
}
B76f664:L76f664:{c.instructions+=1;NFSU2_TR(0x76f664);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B76f666:L76f666:{c.instructions+=6;NFSU2_TR(0x76f666);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f668:{NFSU2_TR(0x76f668);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B76f66a:{NFSU2_TR(0x76f66a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f66b:{NFSU2_TR(0x76f66b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f66c:{NFSU2_TR(0x76f66c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f66d:{NFSU2_TR(0x76f66d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76f672ull));
TAIL_STATIC(0x770b5eu,770);
}
B76f672:L76f672:{c.instructions+=4;NFSU2_TR(0x76f672);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f675:{NFSU2_TR(0x76f675);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76f678:{NFSU2_TR(0x76f678);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76f67a:{NFSU2_TR(0x76f67a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76f67full));
TAIL_STATIC(0x76eda3u,76e);
}
B76f67f:L76f67f:{c.instructions+=3;NFSU2_TR(0x76f67f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76f681:{NFSU2_TR(0x76f681);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76f685:{NFSU2_TR(0x76f685);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76f46du);}goto L76f46d;}}
}
B76f68b:L76f68b:{c.instructions+=1;NFSU2_TR(0x76f68b);
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
B76f68d:L76f68d:{c.instructions+=5;NFSU2_TR(0x76f68d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76f68e:{NFSU2_TR(0x76f68e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76f68f:{NFSU2_TR(0x76f68f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B76f690:{NFSU2_TR(0x76f690);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76f691:{NFSU2_TR(0x76f691);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76f694:L76f694:{c.instructions+=3;NFSU2_TR(0x76f694);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B76f696:{NFSU2_TR(0x76f696);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76f699:{NFSU2_TR(0x76f699);
if(r1(R+518)){{goto L76f720;}}
}
B76f69f:L76f69f:{c.instructions+=17;NFSU2_TR(0x76f69f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f6a2:{NFSU2_TR(0x76f6a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76f6a5:{NFSU2_TR(0x76f6a5);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B76f6a9:{NFSU2_TR(0x76f6a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1698ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76f6af:{NFSU2_TR(0x76f6af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x169cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76f6b5:{NFSU2_TR(0x76f6b5);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),2);
s2(u32(r4(U+4)),r2(U+8));
}
B76f6b9:{NFSU2_TR(0x76f6b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1698ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76f6bf:{NFSU2_TR(0x76f6bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1690ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76f6c5:{NFSU2_TR(0x76f6c5);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),1);
s1(u32(r4(U+4)),r1(U+8));
}
B76f6c8:{NFSU2_TR(0x76f6c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1698ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76f6ce:{NFSU2_TR(0x76f6ce);
w4(R+0,u32(r1(R+0)));
}
B76f6d1:{NFSU2_TR(0x76f6d1);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B76f6d8:{NFSU2_TR(0x76f6d8);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w2(U+0,u16(u32(r2(U+0))+u32(u16(0x1ull))));
s2(u32(r4(R+0)),r2(U+0));
}
B76f6db:{NFSU2_TR(0x76f6db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1694ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f6e1:{NFSU2_TR(0x76f6e1);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B76f6e2:{NFSU2_TR(0x76f6e2);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1698ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76f6e8:{NFSU2_TR(0x76f6e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76f715;}}
}
B76f6ea:L76f6ea:{c.instructions+=3;NFSU2_TR(0x76f6ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76f6ed:{NFSU2_TR(0x76f6ed);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B76f6ef:{NFSU2_TR(0x76f6ef);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L76f6f8;}}
}
B76f6f1:L76f6f1:{c.instructions+=3;NFSU2_TR(0x76f6f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f6f4:{NFSU2_TR(0x76f6f4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B76f6f6:{NFSU2_TR(0x76f6f6);
{goto L76f6fa;}
}
B76f6f8:L76f6f8:{c.instructions+=1;NFSU2_TR(0x76f6f8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76f6fa:L76f6fa:{c.instructions+=7;NFSU2_TR(0x76f6fa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f6fb:{NFSU2_TR(0x76f6fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76f6fe:{NFSU2_TR(0x76f6fe);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B76f700:{NFSU2_TR(0x76f700);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f701:{NFSU2_TR(0x76f701);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f702:{NFSU2_TR(0x76f702);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f703:{NFSU2_TR(0x76f703);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76f708ull));
TAIL_STATIC(0x770b5eu,770);
}
B76f708:L76f708:{c.instructions+=4;NFSU2_TR(0x76f708);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f70b:{NFSU2_TR(0x76f70b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76f70e:{NFSU2_TR(0x76f70e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76f710:{NFSU2_TR(0x76f710);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76f715ull));
TAIL_STATIC(0x76eda3u,76e);
}
B76f715:L76f715:{c.instructions+=3;NFSU2_TR(0x76f715);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76f718:{NFSU2_TR(0x76f718);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76f71b:{NFSU2_TR(0x76f71b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76f67fu);}goto L76f67f;}
}
B76f720:L76f720:{c.instructions+=4;NFSU2_TR(0x76f720);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76f723:{NFSU2_TR(0x76f723);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76f726:{NFSU2_TR(0x76f726);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76f72d:{NFSU2_TR(0x76f72d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76f46du);}goto L76f46d;}
}
B76f732:L76f732:{c.instructions+=3;NFSU2_TR(0x76f732);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B76f734:{NFSU2_TR(0x76f734);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76f737:{NFSU2_TR(0x76f737);
if(r1(R+518)){{goto L76f772;}}
}
B76f739:L76f739:{c.instructions+=15;NFSU2_TR(0x76f739);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f73c:{NFSU2_TR(0x76f73c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76f73f:{NFSU2_TR(0x76f73f);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B76f743:{NFSU2_TR(0x76f743);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x169cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76f749:{NFSU2_TR(0x76f749);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1698ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76f74f:{NFSU2_TR(0x76f74f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B76f751:{NFSU2_TR(0x76f751);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),2);
s2(u32(r4(U+4)),r2(U+8));
}
B76f755:{NFSU2_TR(0x76f755);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B76f757:{NFSU2_TR(0x76f757);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1690ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76f75d:{NFSU2_TR(0x76f75d);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B76f760:{NFSU2_TR(0x76f760);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B76f762:{NFSU2_TR(0x76f762);
w4(R+0,u32(r1(R+4)));
}
B76f765:{NFSU2_TR(0x76f765);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B76f76c:{NFSU2_TR(0x76f76c);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w2(U+0,u16(u32(r2(U+0))+u32(u16(0x1ull))));
s2(u32(r4(R+0)),r2(U+0));
}
B76f76f:{NFSU2_TR(0x76f76f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76f772:L76f772:{c.instructions+=3;NFSU2_TR(0x76f772);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76f775:{NFSU2_TR(0x76f775);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B76f777:{NFSU2_TR(0x76f777);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L76f780;}}
}
B76f779:L76f779:{c.instructions+=3;NFSU2_TR(0x76f779);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f77c:{NFSU2_TR(0x76f77c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B76f77e:{NFSU2_TR(0x76f77e);
{goto L76f782;}
}
B76f780:L76f780:{c.instructions+=1;NFSU2_TR(0x76f780);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76f782:L76f782:{c.instructions+=11;NFSU2_TR(0x76f782);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B76f786:{NFSU2_TR(0x76f786);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B76f788:{NFSU2_TR(0x76f788);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76f78b:{NFSU2_TR(0x76f78b);
__builtin_memmove((R+8),(R+518),1);
}
B76f78e:{NFSU2_TR(0x76f78e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f78f:{NFSU2_TR(0x76f78f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76f792:{NFSU2_TR(0x76f792);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B76f794:{NFSU2_TR(0x76f794);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f795:{NFSU2_TR(0x76f795);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f796:{NFSU2_TR(0x76f796);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f797:{NFSU2_TR(0x76f797);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76f79cull));
TAIL_STATIC(0x770b5eu,770);
}
B76f79c:L76f79c:{c.instructions+=4;NFSU2_TR(0x76f79c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76f79f:{NFSU2_TR(0x76f79f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76f7a2:{NFSU2_TR(0x76f7a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76f7a4:{NFSU2_TR(0x76f7a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76f7a9ull));
TAIL_STATIC(0x76eda3u,76e);
}
B76f7a9:L76f7a9:{c.instructions+=3;NFSU2_TR(0x76f7a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76f7ab:{NFSU2_TR(0x76f7ab);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76f7ae:{NFSU2_TR(0x76f7ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76f7c1;}}
}
B76f7b0:L76f7b0:{c.instructions+=2;NFSU2_TR(0x76f7b0);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B76f7b3:{NFSU2_TR(0x76f7b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76f68bu);}goto L76f68b;}}
}
B76f7b9:L76f7b9:{c.instructions+=3;NFSU2_TR(0x76f7b9);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f7bb:{NFSU2_TR(0x76f7bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76f7bc:{NFSU2_TR(0x76f7bc);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76f68du);}goto L76f68d;}
}
B76f7c1:L76f7c1:{c.instructions+=5;NFSU2_TR(0x76f7c1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76f7c3:{NFSU2_TR(0x76f7c3);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B76f7c6:{NFSU2_TR(0x76f7c6);
__builtin_memmove((R+0),(R+518),1);
}
B76f7c9:{NFSU2_TR(0x76f7c9);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B76f7cd:{NFSU2_TR(0x76f7cd);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76f68du);}goto L76f68d;}
}
B76f7d2:L76f7d2:{c.instructions+=11;NFSU2_TR(0x76f7d2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f7d3:{NFSU2_TR(0x76f7d3);
__builtin_memmove((R+20),(R+16),4);
}
B76f7d5:{NFSU2_TR(0x76f7d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76f7d8:{NFSU2_TR(0x76f7d8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f7d9:{NFSU2_TR(0x76f7d9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f7da:{NFSU2_TR(0x76f7da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76f7dd:{NFSU2_TR(0x76f7dd);
__builtin_memmove((R+24),(R+28),4);
}
B76f7df:{NFSU2_TR(0x76f7df);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xffffull))));
}
B76f7e5:{NFSU2_TR(0x76f7e5);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B76f7e8:{NFSU2_TR(0x76f7e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76f7ea:{NFSU2_TR(0x76f7ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76f7f4;}}
}
B76f7ec:L76f7ec:{c.instructions+=3;NFSU2_TR(0x76f7ec);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76f7ee:{NFSU2_TR(0x76f7ee);
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
B76f7ef:{NFSU2_TR(0x76f7ef);
{goto L76f8e7;}
}
B76f7f4:L76f7f4:{c.instructions+=2;NFSU2_TR(0x76f7f4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76f7f8:{NFSU2_TR(0x76f7f8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L76f8e0;}}
}
B76f7fe:L76f7fe:{c.instructions+=1;NFSU2_TR(0x76f7fe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f7ff:L76f7ff:{c.instructions+=3;NFSU2_TR(0x76f7ff);
w4(R+8,u32(0x15b0ull));
}
B76f804:{NFSU2_TR(0x76f804);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
}
B76f807:{NFSU2_TR(0x76f807);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L76f80c;}}
}
B76f809:L76f809:{c.instructions+=1;NFSU2_TR(0x76f809);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76f80c:L76f80c:{c.instructions+=3;NFSU2_TR(0x76f80c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B76f80f:{NFSU2_TR(0x76f80f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B76f812:{NFSU2_TR(0x76f812);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L76f8af;}}
}
B76f818:L76f818:{c.instructions+=6;NFSU2_TR(0x76f818);
__builtin_memmove((R+0),(R+8),4);
}
B76f81a:{NFSU2_TR(0x76f81a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B76f81d:{NFSU2_TR(0x76f81d);
__builtin_memmove((R+12),(R+0),4);
}
B76f81f:{NFSU2_TR(0x76f81f);
w4(R+12,u32(0-u32(r4(R+12))));
}
B76f821:{NFSU2_TR(0x76f821);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B76f824:{NFSU2_TR(0x76f824);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B76f826:L76f826:{c.instructions+=51;NFSU2_TR(0x76f826);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+12,u32(r1(U+0)));
}
B76f829:{NFSU2_TR(0x76f829);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B76f82b:{NFSU2_TR(0x76f82b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B76f82f:{NFSU2_TR(0x76f82f);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B76f831:{NFSU2_TR(0x76f831);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B76f833:{NFSU2_TR(0x76f833);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B76f837:{NFSU2_TR(0x76f837);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B76f839:{NFSU2_TR(0x76f839);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B76f83b:{NFSU2_TR(0x76f83b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B76f83f:{NFSU2_TR(0x76f83f);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B76f841:{NFSU2_TR(0x76f841);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B76f843:{NFSU2_TR(0x76f843);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B76f847:{NFSU2_TR(0x76f847);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B76f849:{NFSU2_TR(0x76f849);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B76f84b:{NFSU2_TR(0x76f84b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B76f84f:{NFSU2_TR(0x76f84f);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B76f851:{NFSU2_TR(0x76f851);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B76f853:{NFSU2_TR(0x76f853);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B76f857:{NFSU2_TR(0x76f857);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B76f859:{NFSU2_TR(0x76f859);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B76f85b:{NFSU2_TR(0x76f85b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B76f85f:{NFSU2_TR(0x76f85f);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B76f861:{NFSU2_TR(0x76f861);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B76f863:{NFSU2_TR(0x76f863);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B76f867:{NFSU2_TR(0x76f867);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B76f869:{NFSU2_TR(0x76f869);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B76f86b:{NFSU2_TR(0x76f86b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B76f86f:{NFSU2_TR(0x76f86f);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B76f871:{NFSU2_TR(0x76f871);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B76f873:{NFSU2_TR(0x76f873);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B76f877:{NFSU2_TR(0x76f877);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B76f879:{NFSU2_TR(0x76f879);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B76f87b:{NFSU2_TR(0x76f87b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B76f87f:{NFSU2_TR(0x76f87f);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B76f881:{NFSU2_TR(0x76f881);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B76f883:{NFSU2_TR(0x76f883);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B76f887:{NFSU2_TR(0x76f887);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B76f889:{NFSU2_TR(0x76f889);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B76f88b:{NFSU2_TR(0x76f88b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B76f88f:{NFSU2_TR(0x76f88f);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B76f891:{NFSU2_TR(0x76f891);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B76f893:{NFSU2_TR(0x76f893);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B76f897:{NFSU2_TR(0x76f897);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B76f899:{NFSU2_TR(0x76f899);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B76f89b:{NFSU2_TR(0x76f89b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B76f89f:{NFSU2_TR(0x76f89f);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B76f8a1:{NFSU2_TR(0x76f8a1);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B76f8a3:{NFSU2_TR(0x76f8a3);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B76f8a5:{NFSU2_TR(0x76f8a5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B76f8a8:{NFSU2_TR(0x76f8a8);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76f8a9:{NFSU2_TR(0x76f8a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76f826u);}goto L76f826;}}
}
B76f8af:L76f8af:{c.instructions+=2;NFSU2_TR(0x76f8af);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76f8b1:{NFSU2_TR(0x76f8b1);
if(r1(R+518)){{goto L76f8be;}}
}
B76f8b3:L76f8b3:{c.instructions+=6;NFSU2_TR(0x76f8b3);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+0,u32(r1(U+0)));
}
B76f8b6:{NFSU2_TR(0x76f8b6);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B76f8b8:{NFSU2_TR(0x76f8b8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B76f8b9:{NFSU2_TR(0x76f8b9);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B76f8bb:{NFSU2_TR(0x76f8bb);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B76f8bc:{NFSU2_TR(0x76f8bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76f8b3u);}goto L76f8b3;}}
}
B76f8be:L76f8be:{c.instructions+=12;NFSU2_TR(0x76f8be);
__builtin_memmove((R+0),(R+24),4);
}
B76f8c0:{NFSU2_TR(0x76f8c0);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B76f8c2:{NFSU2_TR(0x76f8c2);
w4(R+12,u32(0xfff1ull));
}
B76f8c7:{NFSU2_TR(0x76f8c7);
__builtin_memmove((R+24),(R+12),4);
}
B76f8c9:{NFSU2_TR(0x76f8c9);
u8 U[56];
w8(U+0,u64(r4(R+24)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x76f8c9);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x76f8c9);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B76f8cb:{NFSU2_TR(0x76f8cb);
__builtin_memmove((R+0),(R+28),4);
}
B76f8cd:{NFSU2_TR(0x76f8cd);
__builtin_memmove((R+24),(R+8),4);
}
B76f8cf:{NFSU2_TR(0x76f8cf);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B76f8d1:{NFSU2_TR(0x76f8d1);
u8 U[56];
w8(U+0,u64(r4(R+12)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x76f8d1);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x76f8d1);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B76f8d3:{NFSU2_TR(0x76f8d3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76f8d7:{NFSU2_TR(0x76f8d7);
__builtin_memmove((R+28),(R+8),4);
}
B76f8d9:{NFSU2_TR(0x76f8d9);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76f7ffu);}goto L76f7ff;}}
}
B76f8df:L76f8df:{c.instructions+=1;NFSU2_TR(0x76f8df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76f8e0:L76f8e0:{c.instructions+=3;NFSU2_TR(0x76f8e0);
__builtin_memmove((R+0),(R+28),4);
}
B76f8e2:{NFSU2_TR(0x76f8e2);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B76f8e5:{NFSU2_TR(0x76f8e5);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76f8e7:L76f8e7:{c.instructions+=4;NFSU2_TR(0x76f8e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76f8e8:{NFSU2_TR(0x76f8e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76f8e9:{NFSU2_TR(0x76f8e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B76f8ea:{NFSU2_TR(0x76f8ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76f8ed:L76f8ed:{c.instructions+=4;NFSU2_TR(0x76f8ed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f8ee:{NFSU2_TR(0x76f8ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((R+4),(U+0),4);
}
B76f8f4:{NFSU2_TR(0x76f8f4);
w4(R+8,u32(0x11eull));
}
B76f8f9:{NFSU2_TR(0x76f8f9);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B76f8fb:L76f8fb:{c.instructions+=4;NFSU2_TR(0x76f8fb);
u8 U[2];
__builtin_memmove((U+0),(R+24),2);
s2(u32(r4(R+4)),r2(U+0));
}
B76f8fe:{NFSU2_TR(0x76f8fe);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B76f901:{NFSU2_TR(0x76f901);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B76f902:{NFSU2_TR(0x76f902);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76f8fbu);}goto L76f8fb;}}
}
B76f904:L76f904:{c.instructions+=3;NFSU2_TR(0x76f904);
u8 U[4];
w4(U+0,u32(0x1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f906:{NFSU2_TR(0x76f906);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x980ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76f90c:{NFSU2_TR(0x76f90c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B76f90d:L76f90d:{c.instructions+=4;NFSU2_TR(0x76f90d);
u8 U[2];
__builtin_memmove((U+0),(R+24),2);
s2(u32(r4(R+4)),r2(U+0));
}
B76f910:{NFSU2_TR(0x76f910);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B76f913:{NFSU2_TR(0x76f913);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B76f914:{NFSU2_TR(0x76f914);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76f90du);}goto L76f90d;}}
}
B76f916:L76f916:{c.instructions+=3;NFSU2_TR(0x76f916);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f918:{NFSU2_TR(0x76f918);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa74ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76f91e:{NFSU2_TR(0x76f91e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B76f91f:L76f91f:{c.instructions+=4;NFSU2_TR(0x76f91f);
u8 U[2];
__builtin_memmove((U+0),(R+24),2);
s2(u32(r4(R+4)),r2(U+0));
}
B76f922:{NFSU2_TR(0x76f922);
w1(R+512,carry<u32>(r4(R+4),u32(0x4ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B76f925:{NFSU2_TR(0x76f925);
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
B76f926:{NFSU2_TR(0x76f926);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76f91fu);}goto L76f91f;}}
}
B76f928:L76f928:{c.instructions+=7;NFSU2_TR(0x76f928);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16a4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76f92e:{NFSU2_TR(0x76f92e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16a0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76f934:{NFSU2_TR(0x76f934);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16a8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76f93a:{NFSU2_TR(0x76f93a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1698ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76f940:{NFSU2_TR(0x76f940);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48cull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B76f949:{NFSU2_TR(0x76f949);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76f94a:{NFSU2_TR(0x76f94a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76f94b:L76f94b:{c.instructions+=10;NFSU2_TR(0x76f94b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f94c:{NFSU2_TR(0x76f94c);
__builtin_memmove((R+20),(R+16),4);
}
B76f94e:{NFSU2_TR(0x76f94e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f94f:{NFSU2_TR(0x76f94f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76f952:{NFSU2_TR(0x76f952);
u8 U[16];
w4(U+0,u32(u32(u32(0xb54ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B76f959:{NFSU2_TR(0x76f959);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76f95c:{NFSU2_TR(0x76f95c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1448ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76f962:{NFSU2_TR(0x76f962);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+4))));
}
B76f964:{NFSU2_TR(0x76f964);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B76f966:{NFSU2_TR(0x76f966);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L76f9ec;}}
}
B76f96c:L76f96c:{c.instructions+=2;NFSU2_TR(0x76f96c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f96d:{NFSU2_TR(0x76f96d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f96e:L76f96e:{c.instructions+=1;NFSU2_TR(0x76f96e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L76f9a5;}}
}
B76f970:L76f970:{c.instructions+=6;NFSU2_TR(0x76f970);
u8 U[16];
w4(U+0,u32(u32(u32(0xb58ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B76f977:{NFSU2_TR(0x76f977);
u8 U[16];
w4(U+0,u32(u32(u32(0xb54ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B76f97e:{NFSU2_TR(0x76f97e);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+12),(U+8),2);
}
B76f982:{NFSU2_TR(0x76f982);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+8),(U+8),2);
}
B76f986:{NFSU2_TR(0x76f986);
u8 U[4];
__builtin_memmove((U+0),(R+8),2);
w1(R+512,u8((r2(R+12))<(r2(U+0))));
w2(U+2,u16(u32(r2(R+12))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B76f989:{NFSU2_TR(0x76f989);
if(r1(R+512)){{goto L76f9a4;}}
}
B76f98b:L76f98b:{c.instructions+=1;NFSU2_TR(0x76f98b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76f9a5;}}
}
B76f98d:L76f98d:{c.instructions+=4;NFSU2_TR(0x76f98d);
u8 U[13];
w4(U+0,u32(u32(u32(0x1450ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B76f994:{NFSU2_TR(0x76f994);
u8 U[16];
w4(U+0,u32(u32(u32(0xb54ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B76f99b:{NFSU2_TR(0x76f99b);
u8 U[15];
w4(U+0,u32(u32(u32(0x1450ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+13),(U+12),1);
w1(R+512,u8((r1(R+8))<(r1(U+13))));
w1(U+14,u8(u32(r1(R+8))-u32(r1(U+13))));
w1(R+518,u8((r1(U+14))==(u8(0x0ull))));
}
B76f9a2:{NFSU2_TR(0x76f9a2);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L76f9a5;}}
}
B76f9a4:L76f9a4:{c.instructions+=1;NFSU2_TR(0x76f9a4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B76f9a5:L76f9a5:{c.instructions+=6;NFSU2_TR(0x76f9a5);
u8 U[16];
w4(U+0,u32(u32(u32(0xb54ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B76f9ac:{NFSU2_TR(0x76f9ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76f9af:{NFSU2_TR(0x76f9af);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+8),(U+8),2);
}
B76f9b3:{NFSU2_TR(0x76f9b3);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+12),(U+8),2);
}
B76f9b7:{NFSU2_TR(0x76f9b7);
u8 U[8];
__builtin_memmove((U+4),(R+12),2);
w1(R+512,u8((r2(R+8))<(r2(U+4))));
w1(R+523,sborrow<u16>(r2(R+8),r2(U+4)));
w2(U+6,u16(u32(r2(R+8))-u32(r2(U+4))));
w1(R+519,u8(s16(r2(U+6))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+6))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B76f9ba:{NFSU2_TR(0x76f9ba);
if(r1(R+512)){{goto L76f9ea;}}
}
B76f9bc:L76f9bc:{c.instructions+=1;NFSU2_TR(0x76f9bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76f9d1;}}
}
B76f9be:L76f9be:{c.instructions+=4;NFSU2_TR(0x76f9be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76f9c1:{NFSU2_TR(0x76f9c1);
u8 U[13];
w4(U+0,u32(u32(u32(0x1450ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B76f9c8:{NFSU2_TR(0x76f9c8);
u8 U[18];
w4(U+0,u32(u32(u32(0x1450ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+16),(U+12),1);
w1(R+512,u8((r1(R+8))<(r1(U+16))));
w1(R+523,sborrow<u8>(r1(R+8),r1(U+16)));
w1(U+17,u8(u32(r1(R+8))-u32(r1(U+16))));
w1(R+519,u8(s8(r1(U+17))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+17))==(u8(0x0ull))));
w1(U+13,u8(u32(r1(U+17))&u32(u8(0xffull))));
w1(U+14,u8(__builtin_popcountll(u64(r1(U+13)))));
w1(U+15,u8(u32(r1(U+14))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+15))==(u8(0x0ull))));
}
B76f9cf:{NFSU2_TR(0x76f9cf);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L76f9ea;}}
}
B76f9d1:L76f9d1:{c.instructions+=7;NFSU2_TR(0x76f9d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76f9d4:{NFSU2_TR(0x76f9d4);
u8 U[16];
w4(U+0,u32(u32(u32(0xb54ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B76f9db:{NFSU2_TR(0x76f9db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1448ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76f9e1:{NFSU2_TR(0x76f9e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76f9e4:{NFSU2_TR(0x76f9e4);
w4(R+4,shl<u32>(r4(R+4),u64(u32(0x1ull))));
}
B76f9e6:{NFSU2_TR(0x76f9e6);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B76f9e8:{NFSU2_TR(0x76f9e8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76f96eu);}goto L76f96e;}}
}
B76f9ea:L76f9ea:{c.instructions+=2;NFSU2_TR(0x76f9ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76f9eb:{NFSU2_TR(0x76f9eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76f9ec:L76f9ec:{c.instructions+=5;NFSU2_TR(0x76f9ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76f9ef:{NFSU2_TR(0x76f9ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76f9f2:{NFSU2_TR(0x76f9f2);
u8 U[16];
w4(U+0,u32(u32(u32(0xb54ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B76f9f9:{NFSU2_TR(0x76f9f9);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B76f9fa:{NFSU2_TR(0x76f9fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76f9fd:L76f9fd:{c.instructions+=22;NFSU2_TR(0x76f9fd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76f9fe:{NFSU2_TR(0x76f9fe);
__builtin_memmove((R+20),(R+16),4);
}
B76fa00:{NFSU2_TR(0x76fa00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B76fa03:{NFSU2_TR(0x76fa03);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76fa06:{NFSU2_TR(0x76fa06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76fa0a:{NFSU2_TR(0x76fa0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76fa0d:{NFSU2_TR(0x76fa0d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76fa0e:{NFSU2_TR(0x76fa0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B76fa10:{NFSU2_TR(0x76fa10);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76fa13:{NFSU2_TR(0x76fa13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B76fa15:{NFSU2_TR(0x76fa15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76fa18:{NFSU2_TR(0x76fa18);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76fa1b:{NFSU2_TR(0x76fa1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76fa1e:{NFSU2_TR(0x76fa1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76fa21:{NFSU2_TR(0x76fa21);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76fa24:{NFSU2_TR(0x76fa24);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76fa25:{NFSU2_TR(0x76fa25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76fa28:{NFSU2_TR(0x76fa28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76fa2b:{NFSU2_TR(0x76fa2b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76fa2d:{NFSU2_TR(0x76fa2d);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76fa2f:{NFSU2_TR(0x76fa2f);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xb34ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76fa35:{NFSU2_TR(0x76fa35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76fa36:L76fa36:{c.instructions+=1;NFSU2_TR(0x76fa36);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L76fa38;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76fa36u);}goto L76fa36;}
}
B76fa38:L76fa38:{c.instructions+=9;NFSU2_TR(0x76fa38);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x144cull))));
__builtin_memmove((R+0),(U+0),4);
}
B76fa3e:{NFSU2_TR(0x76fa3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B76fa40:{NFSU2_TR(0x76fa40);
u8 U[16];
w4(U+0,u32(u32(u32(0xb54ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B76fa47:{NFSU2_TR(0x76fa47);
u8 U[14];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w2(U+12,u16(u32(r2(U+12))&u32(u16(0x0ull))));
s2(u32(r4(U+8)),r2(U+12));
}
B76fa4d:{NFSU2_TR(0x76fa4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76fa4f:{NFSU2_TR(0x76fa4f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B76fa50:{NFSU2_TR(0x76fa50);
w4(R+4,u32(0x23dull));
}
B76fa55:{NFSU2_TR(0x76fa55);
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
B76fa57:{NFSU2_TR(0x76fa57);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L76fbb1;}}
}
B76fa5d:L76fa5d:{c.instructions+=6;NFSU2_TR(0x76fa5d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76fa5e:{NFSU2_TR(0x76fa5e);
u8 U[12];
w4(U+0,u32(u32(u32(0xb54ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B76fa65:{NFSU2_TR(0x76fa65);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B76fa67:{NFSU2_TR(0x76fa67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76fa6a:{NFSU2_TR(0x76fa6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76fa6d:{NFSU2_TR(0x76fa6d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B76fa6f:L76fa6f:{c.instructions+=10;NFSU2_TR(0x76fa6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76fa72:{NFSU2_TR(0x76fa72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B76fa74:{NFSU2_TR(0x76fa74);
__builtin_memmove((R+4),(R+24),4);
}
B76fa76:{NFSU2_TR(0x76fa76);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B76fa79:{NFSU2_TR(0x76fa79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76fa7c:{NFSU2_TR(0x76fa7c);
u8 U[14];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+4,u32(r2(U+12)));
}
B76fa81:{NFSU2_TR(0x76fa81);
u8 U[14];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+4,u32(r2(U+12)));
}
B76fa86:{NFSU2_TR(0x76fa86);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B76fa87:{NFSU2_TR(0x76fa87);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76fa8a:{NFSU2_TR(0x76fa8a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L76fa92;}}
}
B76fa8c:L76fa8c:{c.instructions+=2;NFSU2_TR(0x76fa8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76fa8f:{NFSU2_TR(0x76fa8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76fa92:L76fa92:{c.instructions+=4;NFSU2_TR(0x76fa92);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+8)));
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76fa95:{NFSU2_TR(0x76fa95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76fa98:{NFSU2_TR(0x76fa98);
u8 U[14];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),2);
s2(u32(r4(U+8)),r2(U+12));
}
B76fa9d:{NFSU2_TR(0x76fa9d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L76faec;}}
}
B76fa9f:L76fa9f:{c.instructions+=4;NFSU2_TR(0x76fa9f);
u8 U[14];
w4(U+0,u32(u32(u32(0xb34ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w2(U+12,u16(u32(r2(U+12))+u32(u16(0x1ull))));
s2(u32(r4(U+8)),r2(U+12));
}
B76faa7:{NFSU2_TR(0x76faa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76faab:{NFSU2_TR(0x76faab);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+8)));
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B76faae:{NFSU2_TR(0x76faae);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L76fabc;}}
}
B76fab0:L76fab0:{c.instructions+=4;NFSU2_TR(0x76fab0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))-u32(r4(U+4))));
}
B76fab3:{NFSU2_TR(0x76fab3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76fab6:{NFSU2_TR(0x76fab6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B76fab9:{NFSU2_TR(0x76fab9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76fabc:L76fabc:{c.instructions+=9;NFSU2_TR(0x76fabc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76fabf:{NFSU2_TR(0x76fabf);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+28,u32(r2(U+8)));
}
B76fac3:{NFSU2_TR(0x76fac3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76fac6:{NFSU2_TR(0x76fac6);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B76fac8:{NFSU2_TR(0x76fac8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76facb:{NFSU2_TR(0x76facb);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B76face:{NFSU2_TR(0x76face);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x16a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B76fad4:{NFSU2_TR(0x76fad4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76fad6:{NFSU2_TR(0x76fad6);
if(r1(R+518)){{goto L76faec;}}
}
B76fad8:L76fad8:{c.instructions+=5;NFSU2_TR(0x76fad8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76fadb:{NFSU2_TR(0x76fadb);
u8 U[14];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+4,u32(r2(U+12)));
}
B76fae0:{NFSU2_TR(0x76fae0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B76fae3:{NFSU2_TR(0x76fae3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B76fae6:{NFSU2_TR(0x76fae6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x16a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B76faec:L76faec:{c.instructions+=3;NFSU2_TR(0x76faec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76faf0:{NFSU2_TR(0x76faf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76faf3:{NFSU2_TR(0x76faf3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76fa6fu);}goto L76fa6f;}}
}
B76faf9:L76faf9:{c.instructions+=2;NFSU2_TR(0x76faf9);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B76fafd:{NFSU2_TR(0x76fafd);
if(r1(R+518)){{goto L76fbb0;}}
}
B76fb03:L76fb03:{c.instructions+=2;NFSU2_TR(0x76fb03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76fb06:{NFSU2_TR(0x76fb06);
u8 U[12];
w4(U+0,u32(u32(u32(0xb34ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B76fb0d:L76fb0d:{c.instructions+=4;NFSU2_TR(0x76fb0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76fb10:{NFSU2_TR(0x76fb10);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B76fb11:{NFSU2_TR(0x76fb11);
u8 U[12];
w4(U+0,u32(u32(u32(0xb34ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B76fb18:{NFSU2_TR(0x76fb18);
{goto L76fb1d;}
}
B76fb1a:L76fb1a:{c.instructions+=3;NFSU2_TR(0x76fb1a);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B76fb1b:{NFSU2_TR(0x76fb1b);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B76fb1c:{NFSU2_TR(0x76fb1c);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B76fb1d:L76fb1d:{c.instructions+=2;NFSU2_TR(0x76fb1d);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B76fb21:{NFSU2_TR(0x76fb21);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76fb1au);}goto L76fb1a;}}
}
B76fb23:L76fb23:{c.instructions+=7;NFSU2_TR(0x76fb23);
u8 U[14];
w4(U+0,u32(u32(u32(0xb34ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w2(U+12,u16(u32(r2(U+12))-u32(u16(0x1ull))));
s2(u32(r4(U+8)),r2(U+12));
}
B76fb2b:{NFSU2_TR(0x76fb2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x2ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76fb2f:{NFSU2_TR(0x76fb2f);
u8 U[12];
w4(U+0,u32(u32(u32(0xb36ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B76fb36:{NFSU2_TR(0x76fb36);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w2(U+0,u16(u32(r2(U+0))+u32(u16(0x2ull))));
s2(u32(r4(R+4)),r2(U+0));
}
B76fb3a:{NFSU2_TR(0x76fb3a);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w2(U+0,u16(u32(r2(U+0))-u32(u16(0x1ull))));
s2(u32(r4(R+24)),r2(U+0));
}
B76fb3d:{NFSU2_TR(0x76fb3d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76fb41:{NFSU2_TR(0x76fb41);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76fb0du);}goto L76fb0d;}}
}
B76fb43:L76fb43:{c.instructions+=4;NFSU2_TR(0x76fb43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76fb46:{NFSU2_TR(0x76fb46);
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
B76fb48:{NFSU2_TR(0x76fb48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76fb4b:{NFSU2_TR(0x76fb4b);
if(r1(R+518)){{goto L76fbb0;}}
}
B76fb4d:L76fb4d:{c.instructions+=1;NFSU2_TR(0x76fb4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76fb50:L76fb50:{c.instructions+=5;NFSU2_TR(0x76fb50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76fb53:{NFSU2_TR(0x76fb53);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+4,u32(r2(U+0)));
}
B76fb56:{NFSU2_TR(0x76fb56);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76fb58:{NFSU2_TR(0x76fb58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76fb5b:{NFSU2_TR(0x76fb5b);
if(r1(R+518)){{goto L76fba3;}}
}
B76fb5d:L76fb5d:{c.instructions+=1;NFSU2_TR(0x76fb5d);
u8 U[12];
w4(U+0,u32(u32(u32(0xb54ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B76fb64:L76fb64:{c.instructions+=6;NFSU2_TR(0x76fb64);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x4ull))));
}
B76fb67:{NFSU2_TR(0x76fb67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B76fb69:{NFSU2_TR(0x76fb69);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B76fb6a:{NFSU2_TR(0x76fb6a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76fb6d:{NFSU2_TR(0x76fb6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76fb70:{NFSU2_TR(0x76fb70);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L76fb9d;}}
}
B76fb72:L76fb72:{c.instructions+=4;NFSU2_TR(0x76fb72);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B76fb75:{NFSU2_TR(0x76fb75);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B76fb79:{NFSU2_TR(0x76fb79);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76fb7c:{NFSU2_TR(0x76fb7c);
if(r1(R+518)){{goto L76fb97;}}
}
B76fb7e:L76fb7e:{c.instructions+=7;NFSU2_TR(0x76fb7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76fb81:{NFSU2_TR(0x76fb81);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+24))));
}
B76fb83:{NFSU2_TR(0x76fb83);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+24,u32(r2(U+0)));
}
B76fb86:{NFSU2_TR(0x76fb86);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B76fb89:{NFSU2_TR(0x76fb89);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B76fb8d:{NFSU2_TR(0x76fb8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x16a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B76fb93:{NFSU2_TR(0x76fb93);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B76fb97:L76fb97:{c.instructions+=2;NFSU2_TR(0x76fb97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76fb9a:{NFSU2_TR(0x76fb9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76fb9d:L76fb9d:{c.instructions+=2;NFSU2_TR(0x76fb9d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76fba1:{NFSU2_TR(0x76fba1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76fb64u);}goto L76fb64;}}
}
B76fba3:L76fba3:{c.instructions+=4;NFSU2_TR(0x76fba3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76fba6:{NFSU2_TR(0x76fba6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x2ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76fbaa:{NFSU2_TR(0x76fbaa);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B76fbae:{NFSU2_TR(0x76fbae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76fb50u);}goto L76fb50;}}
}
B76fbb0:L76fbb0:{c.instructions+=1;NFSU2_TR(0x76fbb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76fbb1:L76fbb1:{c.instructions+=4;NFSU2_TR(0x76fbb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76fbb2:{NFSU2_TR(0x76fbb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76fbb3:{NFSU2_TR(0x76fbb3);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B76fbb4:{NFSU2_TR(0x76fbb4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76fbb5:L76fbb5:{c.instructions+=17;NFSU2_TR(0x76fbb5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76fbb6:{NFSU2_TR(0x76fbb6);
__builtin_memmove((R+20),(R+16),4);
}
B76fbb8:{NFSU2_TR(0x76fbb8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76fbb9:{NFSU2_TR(0x76fbb9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76fbba:{NFSU2_TR(0x76fbba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76fbbe:{NFSU2_TR(0x76fbbe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76fbbf:{NFSU2_TR(0x76fbbf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76fbc0:{NFSU2_TR(0x76fbc0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76fbc1:{NFSU2_TR(0x76fbc1);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76fbc3:{NFSU2_TR(0x76fbc3);
__builtin_memmove((R+24),(R+4),4);
}
B76fbc5:{NFSU2_TR(0x76fbc5);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B76fbc9:{NFSU2_TR(0x76fbc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B76fbca:{NFSU2_TR(0x76fbca);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B76fbcc:{NFSU2_TR(0x76fbcc);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76fbce:{NFSU2_TR(0x76fbce);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76fbd0:{NFSU2_TR(0x76fbd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76fbd1:{NFSU2_TR(0x76fbd1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76fbdb;}}
}
B76fbd3:L76fbd3:{c.instructions+=3;NFSU2_TR(0x76fbd3);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76fbd5:{NFSU2_TR(0x76fbd5);
w4(R+8,u32(0x8aull));
}
B76fbda:{NFSU2_TR(0x76fbda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76fbdb:L76fbdb:{c.instructions+=3;NFSU2_TR(0x76fbdb);
u8 U[14];
w4(U+0,u32(u32(u32(0x6ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w2(U+12,u16(u32(r2(U+12))|u32(u16(0xffffull))));
s2(u32(r4(U+8)),r2(U+12));
}
B76fbe2:{NFSU2_TR(0x76fbe2);
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
B76fbe4:{NFSU2_TR(0x76fbe4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L76fc6c;}}
}
B76fbea:L76fbea:{c.instructions+=3;NFSU2_TR(0x76fbea);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
}
B76fbed:{NFSU2_TR(0x76fbed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76fbf0:{NFSU2_TR(0x76fbf0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B76fbf1:L76fbf1:{c.instructions+=6;NFSU2_TR(0x76fbf1);
__builtin_memmove((R+0),(R+4),4);
}
B76fbf3:{NFSU2_TR(0x76fbf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76fbf6:{NFSU2_TR(0x76fbf6);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+4,u32(r2(U+0)));
}
B76fbf9:{NFSU2_TR(0x76fbf9);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B76fbfa:{NFSU2_TR(0x76fbfa);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B76fbfc:{NFSU2_TR(0x76fbfc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L76fc02;}}
}
B76fbfe:L76fbfe:{c.instructions+=2;NFSU2_TR(0x76fbfe);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76fc00:{NFSU2_TR(0x76fc00);
if(r1(R+518)){{goto L76fc65;}}
}
B76fc02:L76fc02:{c.instructions+=3;NFSU2_TR(0x76fc02);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B76fc04:{NFSU2_TR(0x76fc04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76fc07:{NFSU2_TR(0x76fc07);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L76fc15;}}
}
B76fc09:L76fc09:{c.instructions+=3;NFSU2_TR(0x76fc09);
u8 U[12];
w4(U+0,u32(u32(u32(0xa74ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B76fc10:{NFSU2_TR(0x76fc10);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w2(U+0,u16(u32(r2(U+0))+u32(r2(R+12))));
s2(u32(r4(R+8)),r2(U+0));
}
B76fc13:{NFSU2_TR(0x76fc13);
{goto L76fc44;}
}
B76fc15:L76fc15:{c.instructions+=2;NFSU2_TR(0x76fc15);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76fc17:{NFSU2_TR(0x76fc17);
if(r1(R+518)){{goto L76fc2f;}}
}
B76fc19:L76fc19:{c.instructions+=2;NFSU2_TR(0x76fc19);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76fc1c:{NFSU2_TR(0x76fc1c);
if(r1(R+518)){{goto L76fc26;}}
}
B76fc1e:L76fc1e:{c.instructions+=1;NFSU2_TR(0x76fc1e);
u8 U[14];
w4(U+0,u32(u32(u32(0xa74ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w2(U+12,u16(u32(r2(U+12))+u32(u16(0x1ull))));
s2(u32(r4(U+8)),r2(U+12));
}
B76fc26:L76fc26:{c.instructions+=2;NFSU2_TR(0x76fc26);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xab4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B76fc2d:{NFSU2_TR(0x76fc2d);
{goto L76fc44;}
}
B76fc2f:L76fc2f:{c.instructions+=2;NFSU2_TR(0x76fc2f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76fc32:{NFSU2_TR(0x76fc32);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L76fc3d;}}
}
B76fc34:L76fc34:{c.instructions+=2;NFSU2_TR(0x76fc34);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xab8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B76fc3b:{NFSU2_TR(0x76fc3b);
{goto L76fc44;}
}
B76fc3d:L76fc3d:{c.instructions+=1;NFSU2_TR(0x76fc3d);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xabcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B76fc44:L76fc44:{c.instructions+=4;NFSU2_TR(0x76fc44);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B76fc46:{NFSU2_TR(0x76fc46);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76fc48:{NFSU2_TR(0x76fc48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76fc4b:{NFSU2_TR(0x76fc4b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76fc54;}}
}
B76fc4d:L76fc4d:{c.instructions+=2;NFSU2_TR(0x76fc4d);
w4(R+8,u32(0x8aull));
}
B76fc52:{NFSU2_TR(0x76fc52);
{goto L76fc5b;}
}
B76fc54:L76fc54:{c.instructions+=2;NFSU2_TR(0x76fc54);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76fc56:{NFSU2_TR(0x76fc56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76fc5f;}}
}
B76fc58:L76fc58:{c.instructions+=2;NFSU2_TR(0x76fc58);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76fc5a:{NFSU2_TR(0x76fc5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B76fc5b:L76fc5b:{c.instructions+=2;NFSU2_TR(0x76fc5b);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76fc5d:{NFSU2_TR(0x76fc5d);
{goto L76fc64;}
}
B76fc5f:L76fc5f:{c.instructions+=3;NFSU2_TR(0x76fc5f);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76fc61:{NFSU2_TR(0x76fc61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B76fc62:{NFSU2_TR(0x76fc62);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76fc64:L76fc64:{c.instructions+=1;NFSU2_TR(0x76fc64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76fc65:L76fc65:{c.instructions+=3;NFSU2_TR(0x76fc65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),u32(0x4ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76fc69:{NFSU2_TR(0x76fc69);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76fc6a:{NFSU2_TR(0x76fc6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76fbf1u);}goto L76fbf1;}}
}
B76fc6c:L76fc6c:{c.instructions+=5;NFSU2_TR(0x76fc6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76fc6d:{NFSU2_TR(0x76fc6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76fc6e:{NFSU2_TR(0x76fc6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76fc6f:{NFSU2_TR(0x76fc6f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B76fc70:{NFSU2_TR(0x76fc70);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76fc73:L76fc73:{c.instructions+=16;NFSU2_TR(0x76fc73);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76fc74:{NFSU2_TR(0x76fc74);
__builtin_memmove((R+20),(R+16),4);
}
B76fc76:{NFSU2_TR(0x76fc76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B76fc79:{NFSU2_TR(0x76fc79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76fc7d:{NFSU2_TR(0x76fc7d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76fc7e:{NFSU2_TR(0x76fc7e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76fc7f:{NFSU2_TR(0x76fc7f);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B76fc83:{NFSU2_TR(0x76fc83);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76fc84:{NFSU2_TR(0x76fc84);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76fc86:{NFSU2_TR(0x76fc86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76fc89:{NFSU2_TR(0x76fc89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76fc8a:{NFSU2_TR(0x76fc8a);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B76fc8c:{NFSU2_TR(0x76fc8c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76fc8f:{NFSU2_TR(0x76fc8f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76fc91:{NFSU2_TR(0x76fc91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76fc92:{NFSU2_TR(0x76fc92);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76fc9c;}}
}
B76fc94:L76fc94:{c.instructions+=3;NFSU2_TR(0x76fc94);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76fc96:{NFSU2_TR(0x76fc96);
w4(R+28,u32(0x8aull));
}
B76fc9b:{NFSU2_TR(0x76fc9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76fc9c:L76fc9c:{c.instructions+=2;NFSU2_TR(0x76fc9c);
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
B76fc9e:{NFSU2_TR(0x76fc9e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x77010bu,770);}
}
B76fca4:L76fca4:{c.instructions+=13;NFSU2_TR(0x76fca4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x6ull))));
}
B76fca7:{NFSU2_TR(0x76fca7);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B76fca8:{NFSU2_TR(0x76fca8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76fcab:{NFSU2_TR(0x76fcab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76fcae:{NFSU2_TR(0x76fcae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76fcb1:{NFSU2_TR(0x76fcb1);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+4,u32(r2(U+0)));
}
B76fcb4:{NFSU2_TR(0x76fcb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76fcb7:{NFSU2_TR(0x76fcb7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B76fcb8:{NFSU2_TR(0x76fcb8);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B76fcba:{NFSU2_TR(0x76fcba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76fcbd:{NFSU2_TR(0x76fcbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76fcc0:{NFSU2_TR(0x76fcc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76fcc3:{NFSU2_TR(0x76fcc3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L76fccd;}}
}
B76fcc5:L76fcc5:{c.instructions+=2;NFSU2_TR(0x76fcc5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76fcc7:{NFSU2_TR(0x76fcc7);
if(r1(R+518)){TAIL_STATIC(0x7700feu,770);}
}
B76fccd:L76fccd:{c.instructions+=2;NFSU2_TR(0x76fccd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B76fccf:{NFSU2_TR(0x76fccf);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L76fd72;}}
}
B76fcd5:L76fcd5:{c.instructions+=7;NFSU2_TR(0x76fcd5);
u8 U[14];
w4(U+0,u32(u32(u32(0xa76ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+28,u32(r2(U+12)));
}
B76fcdd:{NFSU2_TR(0x76fcdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76fce3:{NFSU2_TR(0x76fce3);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76fce5:{NFSU2_TR(0x76fce5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76fce6:{NFSU2_TR(0x76fce6);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B76fce8:{NFSU2_TR(0x76fce8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76fcea:{NFSU2_TR(0x76fcea);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L76fd43;}}
}
B76fcec:L76fcec:{c.instructions+=23;NFSU2_TR(0x76fcec);
u8 U[14];
w4(U+0,u32(u32(u32(0xa74ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+24,u32(r2(U+12)));
}
B76fcf4:{NFSU2_TR(0x76fcf4);
__builtin_memmove((R+8),(R+24),4);
}
B76fcf6:{NFSU2_TR(0x76fcf6);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B76fcf8:{NFSU2_TR(0x76fcf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76fcfb:{NFSU2_TR(0x76fcfb);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+8))));
s2(u32(r4(U+0)),r2(U+4));
}
B76fd02:{NFSU2_TR(0x76fd02);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76fd05:{NFSU2_TR(0x76fd05);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B76fd0b:{NFSU2_TR(0x76fd0b);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B76fd0e:{NFSU2_TR(0x76fd0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76fd11:{NFSU2_TR(0x76fd11);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76fd14:{NFSU2_TR(0x76fd14);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76fd17:{NFSU2_TR(0x76fd17);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B76fd1d:{NFSU2_TR(0x76fd1d);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B76fd20:{NFSU2_TR(0x76fd20);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76fd26:{NFSU2_TR(0x76fd26);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76fd29:{NFSU2_TR(0x76fd29);
w1(R+4,u8(0x10ull));
}
B76fd2b:{NFSU2_TR(0x76fd2b);
w1(R+4,u8(u32(r1(R+4))-u32(r1(R+8))));
}
B76fd2d:{NFSU2_TR(0x76fd2d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w2(R+24,shr<u16>(r2(R+24),u64(r1(U+0))));
}
B76fd30:{NFSU2_TR(0x76fd30);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B76fd34:{NFSU2_TR(0x76fd34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76fd37:{NFSU2_TR(0x76fd37);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B76fd3e:{NFSU2_TR(0x76fd3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76fd41:{NFSU2_TR(0x76fd41);
{goto L76fd5d;}
}
B76fd43:L76fd43:{c.instructions+=5;NFSU2_TR(0x76fd43);
u8 U[14];
w4(U+0,u32(u32(u32(0xa74ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+12),(U+12),2);
}
B76fd4b:{NFSU2_TR(0x76fd4b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w2(R+12,shl<u16>(r2(R+12),u64(r1(U+0))));
}
B76fd4e:{NFSU2_TR(0x76fd4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76fd54:{NFSU2_TR(0x76fd54);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+12))));
s2(u32(r4(U+0)),r2(U+4));
}
B76fd5b:{NFSU2_TR(0x76fd5b);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B76fd5d:L76fd5d:{c.instructions+=4;NFSU2_TR(0x76fd5d);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B76fd5e:{NFSU2_TR(0x76fd5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76fd64:{NFSU2_TR(0x76fd64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76fd67:{NFSU2_TR(0x76fd67);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76fcd5u);}goto L76fcd5;}}
}
B76fd6d:L76fd6d:{c.instructions+=1;NFSU2_TR(0x76fd6d);
TAIL_STATIC(0x7700dbu,770);
}
B76fd72:L76fd72:{c.instructions+=2;NFSU2_TR(0x76fd72);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76fd74:{NFSU2_TR(0x76fd74);
if(r1(R+518)){{goto L76fefd;}}
}
B76fd7a:L76fd7a:{c.instructions+=2;NFSU2_TR(0x76fd7a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76fd7d:{NFSU2_TR(0x76fd7d);
if(r1(R+518)){{goto L76fe15;}}
}
B76fd83:L76fd83:{c.instructions+=7;NFSU2_TR(0x76fd83);
u8 U[14];
w4(U+0,u32(u32(u32(0xa76ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+28,u32(r2(U+12)));
}
B76fd8b:{NFSU2_TR(0x76fd8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76fd91:{NFSU2_TR(0x76fd91);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76fd93:{NFSU2_TR(0x76fd93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76fd94:{NFSU2_TR(0x76fd94);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B76fd96:{NFSU2_TR(0x76fd96);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76fd98:{NFSU2_TR(0x76fd98);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L76fdf1;}}
}
B76fd9a:L76fd9a:{c.instructions+=23;NFSU2_TR(0x76fd9a);
u8 U[14];
w4(U+0,u32(u32(u32(0xa74ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+24,u32(r2(U+12)));
}
B76fda2:{NFSU2_TR(0x76fda2);
__builtin_memmove((R+8),(R+24),4);
}
B76fda4:{NFSU2_TR(0x76fda4);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B76fda6:{NFSU2_TR(0x76fda6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76fda9:{NFSU2_TR(0x76fda9);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+8))));
s2(u32(r4(U+0)),r2(U+4));
}
B76fdb0:{NFSU2_TR(0x76fdb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76fdb3:{NFSU2_TR(0x76fdb3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B76fdb9:{NFSU2_TR(0x76fdb9);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B76fdbc:{NFSU2_TR(0x76fdbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76fdbf:{NFSU2_TR(0x76fdbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76fdc2:{NFSU2_TR(0x76fdc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76fdc5:{NFSU2_TR(0x76fdc5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B76fdcb:{NFSU2_TR(0x76fdcb);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B76fdce:{NFSU2_TR(0x76fdce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76fdd4:{NFSU2_TR(0x76fdd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76fdd7:{NFSU2_TR(0x76fdd7);
w1(R+4,u8(0x10ull));
}
B76fdd9:{NFSU2_TR(0x76fdd9);
w1(R+4,u8(u32(r1(R+4))-u32(r1(R+8))));
}
B76fddb:{NFSU2_TR(0x76fddb);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w2(R+24,shr<u16>(r2(R+24),u64(r1(U+0))));
}
B76fdde:{NFSU2_TR(0x76fdde);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B76fde2:{NFSU2_TR(0x76fde2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76fde5:{NFSU2_TR(0x76fde5);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B76fdec:{NFSU2_TR(0x76fdec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76fdef:{NFSU2_TR(0x76fdef);
{goto L76fe0b;}
}
B76fdf1:L76fdf1:{c.instructions+=5;NFSU2_TR(0x76fdf1);
u8 U[14];
w4(U+0,u32(u32(u32(0xa74ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+12),(U+12),2);
}
B76fdf9:{NFSU2_TR(0x76fdf9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w2(R+12,shl<u16>(r2(R+12),u64(r1(U+0))));
}
B76fdfc:{NFSU2_TR(0x76fdfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76fe02:{NFSU2_TR(0x76fe02);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+12))));
s2(u32(r4(U+0)),r2(U+4));
}
B76fe09:{NFSU2_TR(0x76fe09);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B76fe0b:L76fe0b:{c.instructions+=3;NFSU2_TR(0x76fe0b);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B76fe0c:{NFSU2_TR(0x76fe0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76fe12:{NFSU2_TR(0x76fe12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76fe15:L76fe15:{c.instructions+=8;NFSU2_TR(0x76fe15);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xab6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B76fe1c:{NFSU2_TR(0x76fe1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76fe22:{NFSU2_TR(0x76fe22);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76fe24:{NFSU2_TR(0x76fe24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76fe25:{NFSU2_TR(0x76fe25);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B76fe27:{NFSU2_TR(0x76fe27);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76fe29:{NFSU2_TR(0x76fe29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76fe2c:{NFSU2_TR(0x76fe2c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L76fe84;}}
}
B76fe2e:L76fe2e:{c.instructions+=23;NFSU2_TR(0x76fe2e);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xab4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B76fe35:{NFSU2_TR(0x76fe35);
__builtin_memmove((R+28),(R+24),4);
}
B76fe37:{NFSU2_TR(0x76fe37);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B76fe39:{NFSU2_TR(0x76fe39);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76fe3c:{NFSU2_TR(0x76fe3c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+28))));
s2(u32(r4(U+0)),r2(U+4));
}
B76fe43:{NFSU2_TR(0x76fe43);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76fe46:{NFSU2_TR(0x76fe46);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B76fe4c:{NFSU2_TR(0x76fe4c);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B76fe4f:{NFSU2_TR(0x76fe4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76fe52:{NFSU2_TR(0x76fe52);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76fe55:{NFSU2_TR(0x76fe55);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B76fe5b:{NFSU2_TR(0x76fe5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76fe5e:{NFSU2_TR(0x76fe5e);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B76fe61:{NFSU2_TR(0x76fe61);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76fe67:{NFSU2_TR(0x76fe67);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76fe6a:{NFSU2_TR(0x76fe6a);
w1(R+4,u8(0x10ull));
}
B76fe6c:{NFSU2_TR(0x76fe6c);
w1(R+4,u8(u32(r1(R+4))-u32(r1(R+12))));
}
B76fe6e:{NFSU2_TR(0x76fe6e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w2(R+24,shr<u16>(r2(R+24),u64(r1(U+0))));
}
B76fe71:{NFSU2_TR(0x76fe71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76fe74:{NFSU2_TR(0x76fe74);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B76fe78:{NFSU2_TR(0x76fe78);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B76fe7f:{NFSU2_TR(0x76fe7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76fe82:{NFSU2_TR(0x76fe82);
{goto L76fe9a;}
}
B76fe84:L76fe84:{c.instructions+=5;NFSU2_TR(0x76fe84);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xab4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+28),(U+4),2);
}
B76fe8b:{NFSU2_TR(0x76fe8b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w2(R+28,shl<u16>(r2(R+28),u64(r1(U+0))));
}
B76fe8e:{NFSU2_TR(0x76fe8e);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+28))));
s2(u32(r4(U+0)),r2(U+4));
}
B76fe95:{NFSU2_TR(0x76fe95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76fe98:{NFSU2_TR(0x76fe98);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B76fe9a:L76fe9a:{c.instructions+=4;NFSU2_TR(0x76fe9a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffdull))));
}
B76fe9d:{NFSU2_TR(0x76fe9d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xeull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xeull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76fea0:{NFSU2_TR(0x76fea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76fea6:{NFSU2_TR(0x76fea6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L76feec;}}
}
B76fea8:L76fea8:{c.instructions+=19;NFSU2_TR(0x76fea8);
__builtin_memmove((R+28),(R+24),4);
}
B76feaa:{NFSU2_TR(0x76feaa);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B76feac:{NFSU2_TR(0x76feac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76feaf:{NFSU2_TR(0x76feaf);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+28))));
s2(u32(r4(U+0)),r2(U+4));
}
B76feb6:{NFSU2_TR(0x76feb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76feb9:{NFSU2_TR(0x76feb9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B76febf:{NFSU2_TR(0x76febf);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B76fec2:{NFSU2_TR(0x76fec2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76fec5:{NFSU2_TR(0x76fec5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76fec8:{NFSU2_TR(0x76fec8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76fecb:{NFSU2_TR(0x76fecb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B76fed1:{NFSU2_TR(0x76fed1);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B76fed4:{NFSU2_TR(0x76fed4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76feda:{NFSU2_TR(0x76feda);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76fedd:{NFSU2_TR(0x76fedd);
w1(R+4,u8(0x10ull));
}
B76fedf:{NFSU2_TR(0x76fedf);
w1(R+4,u8(u32(r1(R+4))-u32(r1(R+12))));
}
B76fee1:{NFSU2_TR(0x76fee1);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w2(R+24,shr<u16>(r2(R+24),u64(r1(U+0))));
}
B76fee4:{NFSU2_TR(0x76fee4);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xfffffff2ull))));
}
B76fee7:{NFSU2_TR(0x76fee7);
{goto L76ffd8;}
}
B76feec:L76feec:{c.instructions+=4;NFSU2_TR(0x76feec);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B76feee:{NFSU2_TR(0x76feee);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+24))));
s2(u32(r4(U+0)),r2(U+4));
}
B76fef5:{NFSU2_TR(0x76fef5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B76fef8:{NFSU2_TR(0x76fef8);
TAIL_STATIC(0x7700d5u,770);
}
B76fefd:L76fefd:{c.instructions+=5;NFSU2_TR(0x76fefd);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76ff00:{NFSU2_TR(0x76ff00);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76ff06:{NFSU2_TR(0x76ff06);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ff08:{NFSU2_TR(0x76ff08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76ff09:{NFSU2_TR(0x76ff09);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L76fffb;}}
}
B76ff0f:L76ff0f:{c.instructions+=5;NFSU2_TR(0x76ff0f);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xabaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B76ff16:{NFSU2_TR(0x76ff16);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B76ff18:{NFSU2_TR(0x76ff18);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76ff1a:{NFSU2_TR(0x76ff1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76ff1d:{NFSU2_TR(0x76ff1d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L76ff75;}}
}
B76ff1f:L76ff1f:{c.instructions+=23;NFSU2_TR(0x76ff1f);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xab8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B76ff26:{NFSU2_TR(0x76ff26);
__builtin_memmove((R+28),(R+24),4);
}
B76ff28:{NFSU2_TR(0x76ff28);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B76ff2a:{NFSU2_TR(0x76ff2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76ff2d:{NFSU2_TR(0x76ff2d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+28))));
s2(u32(r4(U+0)),r2(U+4));
}
B76ff34:{NFSU2_TR(0x76ff34);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76ff37:{NFSU2_TR(0x76ff37);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B76ff3d:{NFSU2_TR(0x76ff3d);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B76ff40:{NFSU2_TR(0x76ff40);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76ff43:{NFSU2_TR(0x76ff43);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76ff46:{NFSU2_TR(0x76ff46);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B76ff4c:{NFSU2_TR(0x76ff4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76ff4f:{NFSU2_TR(0x76ff4f);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B76ff52:{NFSU2_TR(0x76ff52);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76ff58:{NFSU2_TR(0x76ff58);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76ff5b:{NFSU2_TR(0x76ff5b);
w1(R+4,u8(0x10ull));
}
B76ff5d:{NFSU2_TR(0x76ff5d);
w1(R+4,u8(u32(r1(R+4))-u32(r1(R+12))));
}
B76ff5f:{NFSU2_TR(0x76ff5f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w2(R+24,shr<u16>(r2(R+24),u64(r1(U+0))));
}
B76ff62:{NFSU2_TR(0x76ff62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76ff65:{NFSU2_TR(0x76ff65);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B76ff69:{NFSU2_TR(0x76ff69);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B76ff70:{NFSU2_TR(0x76ff70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76ff73:{NFSU2_TR(0x76ff73);
{goto L76ff8b;}
}
B76ff75:L76ff75:{c.instructions+=5;NFSU2_TR(0x76ff75);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xab8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+28),(U+4),2);
}
B76ff7c:{NFSU2_TR(0x76ff7c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w2(R+28,shl<u16>(r2(R+28),u64(r1(U+0))));
}
B76ff7f:{NFSU2_TR(0x76ff7f);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+28))));
s2(u32(r4(U+0)),r2(U+4));
}
B76ff86:{NFSU2_TR(0x76ff86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76ff89:{NFSU2_TR(0x76ff89);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B76ff8b:L76ff8b:{c.instructions+=4;NFSU2_TR(0x76ff8b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffdull))));
}
B76ff8e:{NFSU2_TR(0x76ff8e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xdull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76ff91:{NFSU2_TR(0x76ff91);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76ff97:{NFSU2_TR(0x76ff97);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L76ffea;}}
}
B76ff99:L76ff99:{c.instructions+=18;NFSU2_TR(0x76ff99);
__builtin_memmove((R+28),(R+24),4);
}
B76ff9b:{NFSU2_TR(0x76ff9b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B76ff9d:{NFSU2_TR(0x76ff9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76ffa0:{NFSU2_TR(0x76ffa0);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+28))));
s2(u32(r4(U+0)),r2(U+4));
}
B76ffa7:{NFSU2_TR(0x76ffa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76ffaa:{NFSU2_TR(0x76ffaa);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B76ffb0:{NFSU2_TR(0x76ffb0);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B76ffb3:{NFSU2_TR(0x76ffb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76ffb6:{NFSU2_TR(0x76ffb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76ffb9:{NFSU2_TR(0x76ffb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76ffbc:{NFSU2_TR(0x76ffbc);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B76ffc2:{NFSU2_TR(0x76ffc2);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B76ffc5:{NFSU2_TR(0x76ffc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76ffcb:{NFSU2_TR(0x76ffcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76ffce:{NFSU2_TR(0x76ffce);
w1(R+4,u8(0x10ull));
}
B76ffd0:{NFSU2_TR(0x76ffd0);
w1(R+4,u8(u32(r1(R+4))-u32(r1(R+12))));
}
B76ffd2:{NFSU2_TR(0x76ffd2);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w2(R+24,shr<u16>(r2(R+24),u64(r1(U+0))));
}
B76ffd5:{NFSU2_TR(0x76ffd5);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xfffffff3ull))));
}
B76ffd8:L76ffd8:{c.instructions+=3;NFSU2_TR(0x76ffd8);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B76ffdf:{NFSU2_TR(0x76ffdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76ffe5:{NFSU2_TR(0x76ffe5);
TAIL_STATIC(0x7700dbu,770);
}
B76ffea:L76ffea:{c.instructions+=4;NFSU2_TR(0x76ffea);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B76ffec:{NFSU2_TR(0x76ffec);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+24))));
s2(u32(r4(U+0)),r2(U+4));
}
B76fff3:{NFSU2_TR(0x76fff3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x3ull))));
}
B76fff6:{NFSU2_TR(0x76fff6);
TAIL_STATIC(0x7700d5u,770);
}
B76fffb:L76fffb:{c.instructions+=1;NFSU2_TR(0x76fffb);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xabeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
TAIL_STATIC(0x770002u,770);
}
XIT:NFSU2_TR_EXIT(0x76f,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
