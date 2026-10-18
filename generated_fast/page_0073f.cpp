#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_73d(u8* __restrict R,Cpu& c);
u32 body_73e(u8* __restrict R,Cpu& c);
u32 body_740(u8* __restrict R,Cpu& c);
u32 body_741(u8* __restrict R,Cpu& c);
u32 body_74d(u8* __restrict R,Cpu& c);
u32 body_74e(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_761(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x73f,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x73f,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_73f(u8* __restrict R,Cpu& c);
u32 page_73f(Cpu& c){return body_73f(c.regs.data(),c);}
__attribute__((noinline)) u32 body_73f(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x73f001:goto L73f001;
case 0x73f003:c.instructions+=1;goto B73f003;
case 0x73f005:goto L73f005;
case 0x73f008:c.instructions+=2;goto B73f008;
case 0x73f009:c.instructions+=1;goto B73f009;
case 0x73f00e:goto L73f00e;
case 0x73f011:c.instructions+=5;goto B73f011;
case 0x73f012:c.instructions+=4;goto B73f012;
case 0x73f014:c.instructions+=3;goto B73f014;
case 0x73f015:c.instructions+=2;goto B73f015;
case 0x73f016:c.instructions+=1;goto B73f016;
case 0x73f01b:goto L73f01b;
case 0x73f01e:c.instructions+=4;goto B73f01e;
case 0x73f021:c.instructions+=3;goto B73f021;
case 0x73f023:c.instructions+=2;goto B73f023;
case 0x73f024:c.instructions+=1;goto B73f024;
case 0x73f029:goto L73f029;
case 0x73f02c:c.instructions+=2;goto B73f02c;
case 0x73f02d:c.instructions+=1;goto B73f02d;
case 0x73f032:goto L73f032;
case 0x73f035:c.instructions+=2;goto B73f035;
case 0x73f036:c.instructions+=1;goto B73f036;
case 0x73f03b:goto L73f03b;
case 0x73f03c:c.instructions+=1;goto B73f03c;
case 0x73f041:goto L73f041;
case 0x73f044:goto L73f044;
case 0x73f046:c.instructions+=2;goto B73f046;
case 0x73f047:c.instructions+=1;goto B73f047;
case 0x73f050:goto L73f050;
case 0x73f051:c.instructions+=6;goto B73f051;
case 0x73f055:c.instructions+=5;goto B73f055;
case 0x73f058:c.instructions+=4;goto B73f058;
case 0x73f059:c.instructions+=3;goto B73f059;
case 0x73f05a:c.instructions+=2;goto B73f05a;
case 0x73f05f:c.instructions+=1;goto B73f05f;
case 0x73f064:goto L73f064;
case 0x73f067:c.instructions+=2;goto B73f067;
case 0x73f069:c.instructions+=1;goto B73f069;
case 0x73f06b:goto L73f06b;
case 0x73f06f:c.instructions+=4;goto B73f06f;
case 0x73f072:c.instructions+=3;goto B73f072;
case 0x73f073:c.instructions+=2;goto B73f073;
case 0x73f074:c.instructions+=1;goto B73f074;
case 0x73f079:goto L73f079;
case 0x73f07c:c.instructions+=2;goto B73f07c;
case 0x73f07e:c.instructions+=1;goto B73f07e;
case 0x73f080:goto L73f080;
case 0x73f086:c.instructions+=2;goto B73f086;
case 0x73f088:c.instructions+=1;goto B73f088;
case 0x73f08a:goto L73f08a;
case 0x73f08b:c.instructions+=4;goto B73f08b;
case 0x73f091:c.instructions+=3;goto B73f091;
case 0x73f093:c.instructions+=2;goto B73f093;
case 0x73f094:c.instructions+=1;goto B73f094;
case 0x73f095:goto L73f095;
case 0x73f097:c.instructions+=3;goto B73f097;
case 0x73f098:c.instructions+=2;goto B73f098;
case 0x73f099:c.instructions+=1;goto B73f099;
case 0x73f0a0:goto L73f0a0;
case 0x73f0a1:c.instructions+=6;goto B73f0a1;
case 0x73f0a5:c.instructions+=5;goto B73f0a5;
case 0x73f0a8:c.instructions+=4;goto B73f0a8;
case 0x73f0a9:c.instructions+=3;goto B73f0a9;
case 0x73f0aa:c.instructions+=2;goto B73f0aa;
case 0x73f0af:c.instructions+=1;goto B73f0af;
case 0x73f0b4:goto L73f0b4;
case 0x73f0b7:c.instructions+=2;goto B73f0b7;
case 0x73f0b9:c.instructions+=1;goto B73f0b9;
case 0x73f0bb:goto L73f0bb;
case 0x73f0bf:c.instructions+=4;goto B73f0bf;
case 0x73f0c2:c.instructions+=3;goto B73f0c2;
case 0x73f0c3:c.instructions+=2;goto B73f0c3;
case 0x73f0c4:c.instructions+=1;goto B73f0c4;
case 0x73f0c9:goto L73f0c9;
case 0x73f0cc:c.instructions+=2;goto B73f0cc;
case 0x73f0ce:c.instructions+=1;goto B73f0ce;
case 0x73f0d0:goto L73f0d0;
case 0x73f0d6:c.instructions+=2;goto B73f0d6;
case 0x73f0d8:c.instructions+=1;goto B73f0d8;
case 0x73f0da:goto L73f0da;
case 0x73f0db:c.instructions+=4;goto B73f0db;
case 0x73f0e1:c.instructions+=3;goto B73f0e1;
case 0x73f0e3:c.instructions+=2;goto B73f0e3;
case 0x73f0e4:c.instructions+=1;goto B73f0e4;
case 0x73f0e5:goto L73f0e5;
case 0x73f0e7:c.instructions+=3;goto B73f0e7;
case 0x73f0e8:c.instructions+=2;goto B73f0e8;
case 0x73f0e9:c.instructions+=1;goto B73f0e9;
case 0x73f0f0:goto L73f0f0;
case 0x73f0f1:c.instructions+=6;goto B73f0f1;
case 0x73f0f2:c.instructions+=5;goto B73f0f2;
case 0x73f0f6:c.instructions+=4;goto B73f0f6;
case 0x73f0f9:c.instructions+=3;goto B73f0f9;
case 0x73f0fa:c.instructions+=2;goto B73f0fa;
case 0x73f0fc:c.instructions+=1;goto B73f0fc;
case 0x73f101:goto L73f101;
case 0x73f104:c.instructions+=2;goto B73f104;
case 0x73f106:c.instructions+=1;goto B73f106;
case 0x73f108:goto L73f108;
case 0x73f10b:c.instructions+=3;goto B73f10b;
case 0x73f10c:c.instructions+=2;goto B73f10c;
case 0x73f10d:c.instructions+=1;goto B73f10d;
case 0x73f112:goto L73f112;
case 0x73f113:c.instructions+=1;goto B73f113;
case 0x73f118:goto L73f118;
case 0x73f11a:c.instructions+=3;goto B73f11a;
case 0x73f11d:c.instructions+=2;goto B73f11d;
case 0x73f11f:c.instructions+=1;goto B73f11f;
case 0x73f121:goto L73f121;
case 0x73f124:c.instructions+=2;goto B73f124;
case 0x73f125:c.instructions+=1;goto B73f125;
case 0x73f12a:goto L73f12a;
case 0x73f12d:c.instructions+=2;goto B73f12d;
case 0x73f12f:c.instructions+=1;goto B73f12f;
case 0x73f131:goto L73f131;
case 0x73f134:c.instructions+=3;goto B73f134;
case 0x73f135:c.instructions+=2;goto B73f135;
case 0x73f136:c.instructions+=1;goto B73f136;
case 0x73f13b:goto L73f13b;
case 0x73f13e:c.instructions+=2;goto B73f13e;
case 0x73f13f:c.instructions+=1;goto B73f13f;
case 0x73f144:goto L73f144;
case 0x73f147:c.instructions+=2;goto B73f147;
case 0x73f149:c.instructions+=1;goto B73f149;
case 0x73f14b:goto L73f14b;
case 0x73f151:c.instructions+=2;goto B73f151;
case 0x73f153:c.instructions+=1;goto B73f153;
case 0x73f155:goto L73f155;
case 0x73f15b:goto L73f15b;
case 0x73f15c:c.instructions+=2;goto B73f15c;
case 0x73f15e:c.instructions+=1;goto B73f15e;
case 0x73f160:goto L73f160;
case 0x73f161:c.instructions+=4;goto B73f161;
case 0x73f162:c.instructions+=3;goto B73f162;
case 0x73f164:c.instructions+=2;goto B73f164;
case 0x73f165:c.instructions+=1;goto B73f165;
case 0x73f166:goto L73f166;
case 0x73f167:c.instructions+=3;goto B73f167;
case 0x73f169:c.instructions+=2;goto B73f169;
case 0x73f16a:c.instructions+=1;goto B73f16a;
case 0x73f170:goto L73f170;
case 0x73f174:c.instructions+=3;goto B73f174;
case 0x73f177:c.instructions+=2;goto B73f177;
case 0x73f17b:c.instructions+=1;goto B73f17b;
case 0x73f180:goto L73f180;
case 0x73f181:c.instructions+=3;goto B73f181;
case 0x73f185:c.instructions+=2;goto B73f185;
case 0x73f187:c.instructions+=1;goto B73f187;
case 0x73f189:goto L73f189;
case 0x73f18d:c.instructions+=1;goto B73f18d;
case 0x73f18f:goto L73f18f;
case 0x73f194:c.instructions+=2;goto B73f194;
case 0x73f195:c.instructions+=1;goto B73f195;
case 0x73f196:goto L73f196;
case 0x73f19a:c.instructions+=4;goto B73f19a;
case 0x73f19d:c.instructions+=3;goto B73f19d;
case 0x73f19e:c.instructions+=2;goto B73f19e;
case 0x73f19f:c.instructions+=1;goto B73f19f;
case 0x73f1a4:goto L73f1a4;
case 0x73f1a8:c.instructions+=3;goto B73f1a8;
case 0x73f1ab:c.instructions+=2;goto B73f1ab;
case 0x73f1ae:c.instructions+=1;goto B73f1ae;
case 0x73f1b0:goto L73f1b0;
case 0x73f1b3:c.instructions+=3;goto B73f1b3;
case 0x73f1b4:c.instructions+=2;goto B73f1b4;
case 0x73f1b5:c.instructions+=1;goto B73f1b5;
case 0x73f1ba:goto L73f1ba;
case 0x73f1bd:goto L73f1bd;
case 0x73f1c3:c.instructions+=4;goto B73f1c3;
case 0x73f1c5:c.instructions+=3;goto B73f1c5;
case 0x73f1c9:c.instructions+=2;goto B73f1c9;
case 0x73f1cc:c.instructions+=1;goto B73f1cc;
case 0x73f1ce:goto L73f1ce;
case 0x73f1d2:c.instructions+=6;goto B73f1d2;
case 0x73f1d5:c.instructions+=5;goto B73f1d5;
case 0x73f1d6:c.instructions+=4;goto B73f1d6;
case 0x73f1d7:c.instructions+=3;goto B73f1d7;
case 0x73f1d9:c.instructions+=2;goto B73f1d9;
case 0x73f1da:c.instructions+=1;goto B73f1da;
case 0x73f1df:goto L73f1df;
case 0x73f1e2:goto L73f1e2;
case 0x73f1e4:c.instructions+=2;goto B73f1e4;
case 0x73f1e5:c.instructions+=1;goto B73f1e5;
case 0x73f1f0:goto L73f1f0;
case 0x73f1f4:c.instructions+=5;goto B73f1f4;
case 0x73f1f6:c.instructions+=4;goto B73f1f6;
case 0x73f1fc:c.instructions+=3;goto B73f1fc;
case 0x73f201:c.instructions+=2;goto B73f201;
case 0x73f206:c.instructions+=1;goto B73f206;
case 0x73f208:goto L73f208;
case 0x73f212:goto L73f212;
case 0x73f220:goto L73f220;
case 0x73f221:c.instructions+=5;goto B73f221;
case 0x73f222:c.instructions+=4;goto B73f222;
case 0x73f226:c.instructions+=3;goto B73f226;
case 0x73f228:c.instructions+=2;goto B73f228;
case 0x73f22a:c.instructions+=1;goto B73f22a;
case 0x73f230:goto L73f230;
case 0x73f233:c.instructions+=5;goto B73f233;
case 0x73f234:c.instructions+=4;goto B73f234;
case 0x73f235:c.instructions+=3;goto B73f235;
case 0x73f236:c.instructions+=2;goto B73f236;
case 0x73f238:c.instructions+=1;goto B73f238;
case 0x73f23d:goto L73f23d;
case 0x73f240:c.instructions+=2;goto B73f240;
case 0x73f242:c.instructions+=1;goto B73f242;
case 0x73f244:goto L73f244;
case 0x73f247:c.instructions+=2;goto B73f247;
case 0x73f248:c.instructions+=1;goto B73f248;
case 0x73f24d:goto L73f24d;
case 0x73f24e:c.instructions+=1;goto B73f24e;
case 0x73f253:goto L73f253;
case 0x73f256:c.instructions+=1;goto B73f256;
case 0x73f258:goto L73f258;
case 0x73f25b:c.instructions+=2;goto B73f25b;
case 0x73f25d:c.instructions+=1;goto B73f25d;
case 0x73f25f:goto L73f25f;
case 0x73f260:goto L73f260;
case 0x73f263:c.instructions+=2;goto B73f263;
case 0x73f264:c.instructions+=1;goto B73f264;
case 0x73f269:goto L73f269;
case 0x73f26c:c.instructions+=2;goto B73f26c;
case 0x73f26e:c.instructions+=1;goto B73f26e;
case 0x73f270:goto L73f270;
case 0x73f273:c.instructions+=3;goto B73f273;
case 0x73f274:c.instructions+=2;goto B73f274;
case 0x73f275:c.instructions+=1;goto B73f275;
case 0x73f27a:goto L73f27a;
case 0x73f27d:c.instructions+=2;goto B73f27d;
case 0x73f27e:c.instructions+=1;goto B73f27e;
case 0x73f283:goto L73f283;
case 0x73f286:c.instructions+=2;goto B73f286;
case 0x73f288:c.instructions+=1;goto B73f288;
case 0x73f28a:goto L73f28a;
case 0x73f290:c.instructions+=2;goto B73f290;
case 0x73f292:c.instructions+=1;goto B73f292;
case 0x73f294:goto L73f294;
case 0x73f295:c.instructions+=2;goto B73f295;
case 0x73f296:c.instructions+=1;goto B73f296;
case 0x73f29b:goto L73f29b;
case 0x73f29e:c.instructions+=2;goto B73f29e;
case 0x73f29f:c.instructions+=1;goto B73f29f;
case 0x73f2a4:goto L73f2a4;
case 0x73f2a6:c.instructions+=4;goto B73f2a6;
case 0x73f2a9:c.instructions+=3;goto B73f2a9;
case 0x73f2ab:c.instructions+=2;goto B73f2ab;
case 0x73f2ae:c.instructions+=1;goto B73f2ae;
case 0x73f2b0:goto L73f2b0;
case 0x73f2b6:goto L73f2b6;
case 0x73f2b9:c.instructions+=2;goto B73f2b9;
case 0x73f2ba:c.instructions+=1;goto B73f2ba;
case 0x73f2bd:goto L73f2bd;
case 0x73f2c0:goto L73f2c0;
case 0x73f2c1:c.instructions+=1;goto B73f2c1;
case 0x73f2c3:goto L73f2c3;
case 0x73f2c6:c.instructions+=2;goto B73f2c6;
case 0x73f2c7:c.instructions+=1;goto B73f2c7;
case 0x73f2cc:goto L73f2cc;
case 0x73f2cf:c.instructions+=3;goto B73f2cf;
case 0x73f2d0:c.instructions+=2;goto B73f2d0;
case 0x73f2d3:c.instructions+=1;goto B73f2d3;
case 0x73f2d4:goto L73f2d4;
case 0x73f2d5:c.instructions+=2;goto B73f2d5;
case 0x73f2d6:c.instructions+=1;goto B73f2d6;
case 0x73f2e0:goto L73f2e0;
case 0x73f2e1:c.instructions+=4;goto B73f2e1;
case 0x73f2e5:c.instructions+=3;goto B73f2e5;
case 0x73f2e8:c.instructions+=2;goto B73f2e8;
case 0x73f2e9:c.instructions+=1;goto B73f2e9;
case 0x73f2ee:goto L73f2ee;
case 0x73f2f1:c.instructions+=2;goto B73f2f1;
case 0x73f2f3:c.instructions+=1;goto B73f2f3;
case 0x73f2f9:goto L73f2f9;
case 0x73f2fc:c.instructions+=4;goto B73f2fc;
case 0x73f2fd:c.instructions+=3;goto B73f2fd;
case 0x73f2fe:c.instructions+=2;goto B73f2fe;
case 0x73f300:c.instructions+=1;goto B73f300;
case 0x73f305:goto L73f305;
case 0x73f308:c.instructions+=2;goto B73f308;
case 0x73f30a:c.instructions+=1;goto B73f30a;
case 0x73f30c:goto L73f30c;
case 0x73f30f:c.instructions+=3;goto B73f30f;
case 0x73f310:c.instructions+=2;goto B73f310;
case 0x73f311:c.instructions+=1;goto B73f311;
case 0x73f316:goto L73f316;
case 0x73f317:c.instructions+=1;goto B73f317;
case 0x73f31c:goto L73f31c;
case 0x73f31e:c.instructions+=3;goto B73f31e;
case 0x73f321:c.instructions+=2;goto B73f321;
case 0x73f323:c.instructions+=1;goto B73f323;
case 0x73f325:goto L73f325;
case 0x73f326:goto L73f326;
case 0x73f329:c.instructions+=3;goto B73f329;
case 0x73f32a:c.instructions+=2;goto B73f32a;
case 0x73f32b:c.instructions+=1;goto B73f32b;
case 0x73f330:goto L73f330;
case 0x73f333:c.instructions+=2;goto B73f333;
case 0x73f334:c.instructions+=1;goto B73f334;
case 0x73f339:goto L73f339;
case 0x73f33b:c.instructions+=3;goto B73f33b;
case 0x73f33e:c.instructions+=2;goto B73f33e;
case 0x73f340:c.instructions+=1;goto B73f340;
case 0x73f342:goto L73f342;
case 0x73f348:c.instructions+=2;goto B73f348;
case 0x73f34a:c.instructions+=1;goto B73f34a;
case 0x73f34c:goto L73f34c;
case 0x73f34d:c.instructions+=2;goto B73f34d;
case 0x73f34e:c.instructions+=1;goto B73f34e;
case 0x73f353:goto L73f353;
case 0x73f356:goto L73f356;
case 0x73f35c:c.instructions+=2;goto B73f35c;
case 0x73f35e:c.instructions+=1;goto B73f35e;
case 0x73f360:goto L73f360;
case 0x73f363:c.instructions+=2;goto B73f363;
case 0x73f365:c.instructions+=1;goto B73f365;
case 0x73f367:goto L73f367;
case 0x73f36a:c.instructions+=6;goto B73f36a;
case 0x73f370:c.instructions+=5;goto B73f370;
case 0x73f371:c.instructions+=4;goto B73f371;
case 0x73f373:c.instructions+=3;goto B73f373;
case 0x73f374:c.instructions+=2;goto B73f374;
case 0x73f375:c.instructions+=1;goto B73f375;
case 0x73f377:goto L73f377;
case 0x73f37a:goto L73f37a;
case 0x73f37b:c.instructions+=2;goto B73f37b;
case 0x73f37d:c.instructions+=1;goto B73f37d;
case 0x73f37f:goto L73f37f;
case 0x73f380:goto L73f380;
case 0x73f381:goto L73f381;
case 0x73f384:c.instructions+=4;goto B73f384;
case 0x73f386:c.instructions+=3;goto B73f386;
case 0x73f38d:c.instructions+=2;goto B73f38d;
case 0x73f38e:c.instructions+=1;goto B73f38e;
case 0x73f390:goto L73f390;
case 0x73f393:c.instructions+=5;goto B73f393;
case 0x73f394:c.instructions+=4;goto B73f394;
case 0x73f396:c.instructions+=3;goto B73f396;
case 0x73f398:c.instructions+=2;goto B73f398;
case 0x73f399:c.instructions+=1;goto B73f399;
case 0x73f39b:goto L73f39b;
case 0x73f39e:goto L73f39e;
case 0x73f39f:c.instructions+=1;goto B73f39f;
case 0x73f3a0:goto L73f3a0;
case 0x73f3a4:c.instructions+=8;goto B73f3a4;
case 0x73f3a8:c.instructions+=7;goto B73f3a8;
case 0x73f3a9:c.instructions+=6;goto B73f3a9;
case 0x73f3ad:c.instructions+=5;goto B73f3ad;
case 0x73f3b0:c.instructions+=4;goto B73f3b0;
case 0x73f3b1:c.instructions+=3;goto B73f3b1;
case 0x73f3b4:c.instructions+=2;goto B73f3b4;
case 0x73f3b7:c.instructions+=1;goto B73f3b7;
case 0x73f3bc:goto L73f3bc;
case 0x73f3bf:c.instructions+=2;goto B73f3bf;
case 0x73f3c1:c.instructions+=1;goto B73f3c1;
case 0x73f3c3:goto L73f3c3;
case 0x73f3c7:c.instructions+=4;goto B73f3c7;
case 0x73f3ca:c.instructions+=3;goto B73f3ca;
case 0x73f3cb:c.instructions+=2;goto B73f3cb;
case 0x73f3cc:c.instructions+=1;goto B73f3cc;
case 0x73f3d1:goto L73f3d1;
case 0x73f3d4:c.instructions+=2;goto B73f3d4;
case 0x73f3d6:c.instructions+=1;goto B73f3d6;
case 0x73f3d8:goto L73f3d8;
case 0x73f3de:c.instructions+=2;goto B73f3de;
case 0x73f3e0:c.instructions+=1;goto B73f3e0;
case 0x73f3e2:goto L73f3e2;
case 0x73f3e4:c.instructions+=2;goto B73f3e4;
case 0x73f3e5:c.instructions+=1;goto B73f3e5;
case 0x73f3e6:goto L73f3e6;
case 0x73f3e8:c.instructions+=2;goto B73f3e8;
case 0x73f3e9:c.instructions+=1;goto B73f3e9;
case 0x73f3f0:goto L73f3f0;
case 0x73f3f1:c.instructions+=13;goto B73f3f1;
case 0x73f3f3:c.instructions+=12;goto B73f3f3;
case 0x73f3f6:c.instructions+=11;goto B73f3f6;
case 0x73f3fc:c.instructions+=10;goto B73f3fc;
case 0x73f401:c.instructions+=9;goto B73f401;
case 0x73f402:c.instructions+=8;goto B73f402;
case 0x73f403:c.instructions+=7;goto B73f403;
case 0x73f406:c.instructions+=6;goto B73f406;
case 0x73f40d:c.instructions+=5;goto B73f40d;
case 0x73f410:c.instructions+=4;goto B73f410;
case 0x73f412:c.instructions+=3;goto B73f412;
case 0x73f415:c.instructions+=2;goto B73f415;
case 0x73f416:c.instructions+=1;goto B73f416;
case 0x73f418:goto L73f418;
case 0x73f41d:c.instructions+=2;goto B73f41d;
case 0x73f424:c.instructions+=1;goto B73f424;
case 0x73f429:goto L73f429;
case 0x73f42a:c.instructions+=5;goto B73f42a;
case 0x73f42b:c.instructions+=4;goto B73f42b;
case 0x73f42c:c.instructions+=3;goto B73f42c;
case 0x73f42e:c.instructions+=2;goto B73f42e;
case 0x73f42f:c.instructions+=1;goto B73f42f;
case 0x73f430:goto L73f430;
case 0x73f434:c.instructions+=1;goto B73f434;
case 0x73f436:goto L73f436;
case 0x73f43b:c.instructions+=2;goto B73f43b;
case 0x73f442:c.instructions+=1;goto B73f442;
case 0x73f447:goto L73f447;
case 0x73f448:c.instructions+=5;goto B73f448;
case 0x73f449:c.instructions+=4;goto B73f449;
case 0x73f44a:c.instructions+=3;goto B73f44a;
case 0x73f44c:c.instructions+=2;goto B73f44c;
case 0x73f44d:c.instructions+=1;goto B73f44d;
case 0x73f44e:goto L73f44e;
case 0x73f450:c.instructions+=2;goto B73f450;
case 0x73f455:c.instructions+=1;goto B73f455;
case 0x73f459:goto L73f459;
case 0x73f45b:goto L73f45b;
case 0x73f45e:c.instructions+=5;goto B73f45e;
case 0x73f460:c.instructions+=4;goto B73f460;
case 0x73f464:c.instructions+=3;goto B73f464;
case 0x73f465:c.instructions+=2;goto B73f465;
case 0x73f466:c.instructions+=1;goto B73f466;
case 0x73f46b:goto L73f46b;
case 0x73f46e:c.instructions+=4;goto B73f46e;
case 0x73f46f:c.instructions+=3;goto B73f46f;
case 0x73f470:c.instructions+=2;goto B73f470;
case 0x73f477:c.instructions+=1;goto B73f477;
case 0x73f47c:goto L73f47c;
case 0x73f47f:c.instructions+=2;goto B73f47f;
case 0x73f481:c.instructions+=1;goto B73f481;
case 0x73f487:goto L73f487;
case 0x73f489:c.instructions+=3;goto B73f489;
case 0x73f490:c.instructions+=2;goto B73f490;
case 0x73f496:c.instructions+=1;goto B73f496;
case 0x73f49c:goto L73f49c;
case 0x73f4a0:c.instructions+=1;goto B73f4a0;
case 0x73f4a2:goto L73f4a2;
case 0x73f4a5:c.instructions+=2;goto B73f4a5;
case 0x73f4ac:c.instructions+=1;goto B73f4ac;
case 0x73f4b1:goto L73f4b1;
case 0x73f4b2:c.instructions+=5;goto B73f4b2;
case 0x73f4b3:c.instructions+=4;goto B73f4b3;
case 0x73f4b4:c.instructions+=3;goto B73f4b4;
case 0x73f4b6:c.instructions+=2;goto B73f4b6;
case 0x73f4b7:c.instructions+=1;goto B73f4b7;
case 0x73f4b8:goto L73f4b8;
case 0x73f4bb:c.instructions+=2;goto B73f4bb;
case 0x73f4bd:c.instructions+=1;goto B73f4bd;
case 0x73f4bf:goto L73f4bf;
case 0x73f4c2:c.instructions+=2;goto B73f4c2;
case 0x73f4c5:c.instructions+=1;goto B73f4c5;
case 0x73f4c8:goto L73f4c8;
case 0x73f4ca:c.instructions+=5;goto B73f4ca;
case 0x73f4cc:c.instructions+=4;goto B73f4cc;
case 0x73f4cd:c.instructions+=3;goto B73f4cd;
case 0x73f4d1:c.instructions+=2;goto B73f4d1;
case 0x73f4d2:c.instructions+=1;goto B73f4d2;
case 0x73f4d7:goto L73f4d7;
case 0x73f4da:c.instructions+=3;goto B73f4da;
case 0x73f4dd:c.instructions+=2;goto B73f4dd;
case 0x73f4e3:c.instructions+=1;goto B73f4e3;
case 0x73f4e5:goto L73f4e5;
case 0x73f4f0:goto L73f4f0;
case 0x73f4f6:c.instructions+=8;goto B73f4f6;
case 0x73f4f9:c.instructions+=7;goto B73f4f9;
case 0x73f4fa:c.instructions+=6;goto B73f4fa;
case 0x73f4fb:c.instructions+=5;goto B73f4fb;
case 0x73f500:c.instructions+=4;goto B73f500;
case 0x73f504:c.instructions+=3;goto B73f504;
case 0x73f505:c.instructions+=2;goto B73f505;
case 0x73f506:c.instructions+=1;goto B73f506;
case 0x73f50b:goto L73f50b;
case 0x73f50d:c.instructions+=4;goto B73f50d;
case 0x73f50f:c.instructions+=3;goto B73f50f;
case 0x73f512:c.instructions+=2;goto B73f512;
case 0x73f514:c.instructions+=1;goto B73f514;
case 0x73f516:goto L73f516;
case 0x73f51d:c.instructions+=1;goto B73f51d;
case 0x73f51f:goto L73f51f;
case 0x73f522:goto L73f522;
case 0x73f524:c.instructions+=1;goto B73f524;
case 0x73f526:goto L73f526;
case 0x73f52c:c.instructions+=1;goto B73f52c;
case 0x73f52e:goto L73f52e;
case 0x73f52f:c.instructions+=8;goto B73f52f;
case 0x73f533:c.instructions+=7;goto B73f533;
case 0x73f537:c.instructions+=6;goto B73f537;
case 0x73f53b:c.instructions+=5;goto B73f53b;
case 0x73f53e:c.instructions+=4;goto B73f53e;
case 0x73f53f:c.instructions+=3;goto B73f53f;
case 0x73f540:c.instructions+=2;goto B73f540;
case 0x73f548:c.instructions+=1;goto B73f548;
case 0x73f54d:goto L73f54d;
case 0x73f550:goto L73f550;
case 0x73f551:c.instructions+=1;goto B73f551;
case 0x73f556:goto L73f556;
case 0x73f559:goto L73f559;
case 0x73f560:c.instructions+=2;goto B73f560;
case 0x73f562:c.instructions+=1;goto B73f562;
case 0x73f567:goto L73f567;
case 0x73f568:c.instructions+=5;goto B73f568;
case 0x73f569:c.instructions+=4;goto B73f569;
case 0x73f56a:c.instructions+=3;goto B73f56a;
case 0x73f56c:c.instructions+=2;goto B73f56c;
case 0x73f56d:c.instructions+=1;goto B73f56d;
case 0x73f570:goto L73f570;
case 0x73f571:c.instructions+=8;goto B73f571;
case 0x73f572:c.instructions+=7;goto B73f572;
case 0x73f573:c.instructions+=6;goto B73f573;
case 0x73f577:c.instructions+=5;goto B73f577;
case 0x73f57a:c.instructions+=4;goto B73f57a;
case 0x73f57b:c.instructions+=3;goto B73f57b;
case 0x73f57d:c.instructions+=2;goto B73f57d;
case 0x73f57f:c.instructions+=1;goto B73f57f;
case 0x73f584:goto L73f584;
case 0x73f587:c.instructions+=2;goto B73f587;
case 0x73f589:c.instructions+=1;goto B73f589;
case 0x73f58b:goto L73f58b;
case 0x73f58e:c.instructions+=3;goto B73f58e;
case 0x73f58f:c.instructions+=2;goto B73f58f;
case 0x73f590:c.instructions+=1;goto B73f590;
case 0x73f595:goto L73f595;
case 0x73f596:c.instructions+=1;goto B73f596;
case 0x73f59b:goto L73f59b;
case 0x73f59d:c.instructions+=3;goto B73f59d;
case 0x73f5a0:c.instructions+=2;goto B73f5a0;
case 0x73f5a2:c.instructions+=1;goto B73f5a2;
case 0x73f5a4:goto L73f5a4;
case 0x73f5a7:c.instructions+=2;goto B73f5a7;
case 0x73f5a8:c.instructions+=1;goto B73f5a8;
case 0x73f5ad:goto L73f5ad;
case 0x73f5b0:c.instructions+=2;goto B73f5b0;
case 0x73f5b2:c.instructions+=1;goto B73f5b2;
case 0x73f5b4:goto L73f5b4;
case 0x73f5b7:c.instructions+=3;goto B73f5b7;
case 0x73f5b8:c.instructions+=2;goto B73f5b8;
case 0x73f5b9:c.instructions+=1;goto B73f5b9;
case 0x73f5be:goto L73f5be;
case 0x73f5c1:c.instructions+=2;goto B73f5c1;
case 0x73f5c2:c.instructions+=1;goto B73f5c2;
case 0x73f5c7:goto L73f5c7;
case 0x73f5ca:c.instructions+=2;goto B73f5ca;
case 0x73f5cc:c.instructions+=1;goto B73f5cc;
case 0x73f5ce:goto L73f5ce;
case 0x73f5d4:c.instructions+=2;goto B73f5d4;
case 0x73f5d6:c.instructions+=1;goto B73f5d6;
case 0x73f5d8:goto L73f5d8;
case 0x73f5da:c.instructions+=2;goto B73f5da;
case 0x73f5dc:c.instructions+=1;goto B73f5dc;
case 0x73f5de:goto L73f5de;
case 0x73f5e2:c.instructions+=2;goto B73f5e2;
case 0x73f5e8:c.instructions+=1;goto B73f5e8;
case 0x73f5ea:goto L73f5ea;
case 0x73f5eb:goto L73f5eb;
case 0x73f5ec:c.instructions+=2;goto B73f5ec;
case 0x73f5ee:c.instructions+=1;goto B73f5ee;
case 0x73f5f0:goto L73f5f0;
case 0x73f5f1:c.instructions+=5;goto B73f5f1;
case 0x73f5f2:c.instructions+=4;goto B73f5f2;
case 0x73f5f3:c.instructions+=3;goto B73f5f3;
case 0x73f5f5:c.instructions+=2;goto B73f5f5;
case 0x73f5f6:c.instructions+=1;goto B73f5f6;
case 0x73f5f7:goto L73f5f7;
case 0x73f5f8:c.instructions+=4;goto B73f5f8;
case 0x73f5f9:c.instructions+=3;goto B73f5f9;
case 0x73f5fb:c.instructions+=2;goto B73f5fb;
case 0x73f5fc:c.instructions+=1;goto B73f5fc;
case 0x73f600:goto L73f600;
case 0x73f601:c.instructions+=6;goto B73f601;
case 0x73f602:c.instructions+=5;goto B73f602;
case 0x73f606:c.instructions+=4;goto B73f606;
case 0x73f609:c.instructions+=3;goto B73f609;
case 0x73f60a:c.instructions+=2;goto B73f60a;
case 0x73f60c:c.instructions+=1;goto B73f60c;
case 0x73f611:goto L73f611;
case 0x73f614:c.instructions+=2;goto B73f614;
case 0x73f616:c.instructions+=1;goto B73f616;
case 0x73f618:goto L73f618;
case 0x73f61b:c.instructions+=3;goto B73f61b;
case 0x73f61c:c.instructions+=2;goto B73f61c;
case 0x73f61d:c.instructions+=1;goto B73f61d;
case 0x73f622:goto L73f622;
case 0x73f623:c.instructions+=1;goto B73f623;
case 0x73f628:goto L73f628;
case 0x73f62a:c.instructions+=3;goto B73f62a;
case 0x73f62d:c.instructions+=2;goto B73f62d;
case 0x73f62f:c.instructions+=1;goto B73f62f;
case 0x73f631:goto L73f631;
case 0x73f634:c.instructions+=2;goto B73f634;
case 0x73f635:c.instructions+=1;goto B73f635;
case 0x73f63a:goto L73f63a;
case 0x73f63d:c.instructions+=2;goto B73f63d;
case 0x73f63f:c.instructions+=1;goto B73f63f;
case 0x73f641:goto L73f641;
case 0x73f644:c.instructions+=3;goto B73f644;
case 0x73f645:c.instructions+=2;goto B73f645;
case 0x73f646:c.instructions+=1;goto B73f646;
case 0x73f64b:goto L73f64b;
case 0x73f64e:c.instructions+=2;goto B73f64e;
case 0x73f64f:c.instructions+=1;goto B73f64f;
case 0x73f654:goto L73f654;
case 0x73f657:c.instructions+=2;goto B73f657;
case 0x73f659:c.instructions+=1;goto B73f659;
case 0x73f65b:goto L73f65b;
case 0x73f661:c.instructions+=2;goto B73f661;
case 0x73f663:c.instructions+=1;goto B73f663;
case 0x73f665:goto L73f665;
case 0x73f667:c.instructions+=1;goto B73f667;
case 0x73f671:goto L73f671;
case 0x73f672:c.instructions+=2;goto B73f672;
case 0x73f674:c.instructions+=1;goto B73f674;
case 0x73f676:goto L73f676;
case 0x73f677:goto L73f677;
case 0x73f678:c.instructions+=2;goto B73f678;
case 0x73f679:c.instructions+=1;goto B73f679;
case 0x73f680:goto L73f680;
case 0x73f681:c.instructions+=7;goto B73f681;
case 0x73f682:c.instructions+=6;goto B73f682;
case 0x73f686:c.instructions+=5;goto B73f686;
case 0x73f68a:c.instructions+=4;goto B73f68a;
case 0x73f68b:c.instructions+=3;goto B73f68b;
case 0x73f68d:c.instructions+=2;goto B73f68d;
case 0x73f68e:c.instructions+=1;goto B73f68e;
case 0x73f693:goto L73f693;
case 0x73f696:c.instructions+=2;goto B73f696;
case 0x73f699:c.instructions+=1;goto B73f699;
case 0x73f69b:goto L73f69b;
case 0x73f69f:c.instructions+=4;goto B73f69f;
case 0x73f6a0:c.instructions+=3;goto B73f6a0;
case 0x73f6a2:c.instructions+=2;goto B73f6a2;
case 0x73f6a3:c.instructions+=1;goto B73f6a3;
case 0x73f6a8:goto L73f6a8;
case 0x73f6ab:c.instructions+=2;goto B73f6ab;
case 0x73f6ae:c.instructions+=1;goto B73f6ae;
case 0x73f6b0:goto L73f6b0;
case 0x73f6b1:c.instructions+=2;goto B73f6b1;
case 0x73f6b2:c.instructions+=1;goto B73f6b2;
case 0x73f6b7:goto L73f6b7;
case 0x73f6ba:c.instructions+=4;goto B73f6ba;
case 0x73f6bc:c.instructions+=3;goto B73f6bc;
case 0x73f6bd:c.instructions+=2;goto B73f6bd;
case 0x73f6be:c.instructions+=1;goto B73f6be;
case 0x73f6bf:goto L73f6bf;
case 0x73f6c2:c.instructions+=3;goto B73f6c2;
case 0x73f6c3:c.instructions+=2;goto B73f6c3;
case 0x73f6c4:c.instructions+=1;goto B73f6c4;
case 0x73f6d0:goto L73f6d0;
case 0x73f6d1:c.instructions+=7;goto B73f6d1;
case 0x73f6d5:c.instructions+=6;goto B73f6d5;
case 0x73f6db:c.instructions+=5;goto B73f6db;
case 0x73f6dd:c.instructions+=4;goto B73f6dd;
case 0x73f6de:c.instructions+=3;goto B73f6de;
case 0x73f6e2:c.instructions+=2;goto B73f6e2;
case 0x73f6e8:c.instructions+=1;goto B73f6e8;
case 0x73f6ea:goto L73f6ea;
case 0x73f6ec:c.instructions+=2;goto B73f6ec;
case 0x73f6f3:c.instructions+=1;goto B73f6f3;
case 0x73f6f5:goto L73f6f5;
case 0x73f6f7:goto L73f6f7;
case 0x73f6f9:c.instructions+=1;goto B73f6f9;
case 0x73f6fb:goto L73f6fb;
case 0x73f6fd:c.instructions+=2;goto B73f6fd;
case 0x73f704:c.instructions+=1;goto B73f704;
case 0x73f706:goto L73f706;
case 0x73f708:goto L73f708;
case 0x73f70a:c.instructions+=1;goto B73f70a;
case 0x73f70c:goto L73f70c;
case 0x73f70d:c.instructions+=2;goto B73f70d;
case 0x73f70e:c.instructions+=1;goto B73f70e;
case 0x73f713:goto L73f713;
case 0x73f716:c.instructions+=3;goto B73f716;
case 0x73f717:c.instructions+=2;goto B73f717;
case 0x73f718:c.instructions+=1;goto B73f718;
case 0x73f719:goto L73f719;
case 0x73f71c:c.instructions+=1;goto B73f71c;
case 0x73f71e:goto L73f71e;
case 0x73f721:c.instructions+=1;goto B73f721;
case 0x73f723:goto L73f723;
case 0x73f725:c.instructions+=7;goto B73f725;
case 0x73f727:c.instructions+=6;goto B73f727;
case 0x73f72a:c.instructions+=5;goto B73f72a;
case 0x73f72b:c.instructions+=4;goto B73f72b;
case 0x73f72c:c.instructions+=3;goto B73f72c;
case 0x73f730:c.instructions+=2;goto B73f730;
case 0x73f732:c.instructions+=1;goto B73f732;
case 0x73f733:goto L73f733;
case 0x73f735:c.instructions+=6;goto B73f735;
case 0x73f738:c.instructions+=5;goto B73f738;
case 0x73f73b:c.instructions+=4;goto B73f73b;
case 0x73f73c:c.instructions+=3;goto B73f73c;
case 0x73f73d:c.instructions+=2;goto B73f73d;
case 0x73f741:c.instructions+=1;goto B73f741;
case 0x73f750:goto L73f750;
case 0x73f754:c.instructions+=2;goto B73f754;
case 0x73f756:c.instructions+=1;goto B73f756;
case 0x73f758:goto L73f758;
case 0x73f759:c.instructions+=3;goto B73f759;
case 0x73f75f:c.instructions+=2;goto B73f75f;
case 0x73f761:c.instructions+=1;goto B73f761;
case 0x73f763:goto L73f763;
case 0x73f765:c.instructions+=2;goto B73f765;
case 0x73f766:c.instructions+=1;goto B73f766;
case 0x73f76b:goto L73f76b;
case 0x73f76e:c.instructions+=2;goto B73f76e;
case 0x73f76f:c.instructions+=1;goto B73f76f;
case 0x73f774:goto L73f774;
case 0x73f776:c.instructions+=4;goto B73f776;
case 0x73f779:c.instructions+=3;goto B73f779;
case 0x73f77b:c.instructions+=2;goto B73f77b;
case 0x73f782:c.instructions+=1;goto B73f782;
case 0x73f784:goto L73f784;
case 0x73f78e:goto L73f78e;
case 0x73f791:c.instructions+=2;goto B73f791;
case 0x73f792:c.instructions+=1;goto B73f792;
case 0x73f795:goto L73f795;
case 0x73f798:goto L73f798;
case 0x73f799:goto L73f799;
case 0x73f7a0:goto L73f7a0;
case 0x73f7a1:c.instructions+=3;goto B73f7a1;
case 0x73f7a5:c.instructions+=2;goto B73f7a5;
case 0x73f7a6:c.instructions+=1;goto B73f7a6;
case 0x73f7ab:goto L73f7ab;
case 0x73f7ae:c.instructions+=2;goto B73f7ae;
case 0x73f7af:c.instructions+=1;goto B73f7af;
case 0x73f7b4:goto L73f7b4;
case 0x73f7b6:c.instructions+=5;goto B73f7b6;
case 0x73f7b9:c.instructions+=4;goto B73f7b9;
case 0x73f7bc:c.instructions+=3;goto B73f7bc;
case 0x73f7bf:c.instructions+=2;goto B73f7bf;
case 0x73f7c0:c.instructions+=1;goto B73f7c0;
case 0x73f7d0:goto L73f7d0;
case 0x73f7d1:c.instructions+=3;goto B73f7d1;
case 0x73f7d5:c.instructions+=2;goto B73f7d5;
case 0x73f7d7:c.instructions+=1;goto B73f7d7;
case 0x73f7d9:goto L73f7d9;
case 0x73f7dc:c.instructions+=2;goto B73f7dc;
case 0x73f7de:c.instructions+=1;goto B73f7de;
case 0x73f7e0:goto L73f7e0;
case 0x73f7e1:c.instructions+=1;goto B73f7e1;
case 0x73f7e6:goto L73f7e6;
case 0x73f7e9:goto L73f7e9;
case 0x73f7ec:c.instructions+=2;goto B73f7ec;
case 0x73f7ee:c.instructions+=1;goto B73f7ee;
case 0x73f7f0:goto L73f7f0;
case 0x73f7f1:c.instructions+=1;goto B73f7f1;
case 0x73f7f6:goto L73f7f6;
case 0x73f7f9:goto L73f7f9;
case 0x73f7fa:c.instructions+=1;goto B73f7fa;
case 0x73f7ff:goto L73f7ff;
case 0x73f800:c.instructions+=1;goto B73f800;
case 0x73f803:goto L73f803;
case 0x73f806:goto L73f806;
case 0x73f807:c.instructions+=1;goto B73f807;
case 0x73f810:goto L73f810;
case 0x73f811:c.instructions+=6;goto B73f811;
case 0x73f815:c.instructions+=5;goto B73f815;
case 0x73f81b:c.instructions+=4;goto B73f81b;
case 0x73f81d:c.instructions+=3;goto B73f81d;
case 0x73f824:c.instructions+=2;goto B73f824;
case 0x73f82b:c.instructions+=1;goto B73f82b;
case 0x73f82d:goto L73f82d;
case 0x73f830:c.instructions+=5;goto B73f830;
case 0x73f832:c.instructions+=4;goto B73f832;
case 0x73f834:c.instructions+=3;goto B73f834;
case 0x73f839:c.instructions+=2;goto B73f839;
case 0x73f83a:c.instructions+=1;goto B73f83a;
case 0x73f83f:goto L73f83f;
case 0x73f842:goto L73f842;
case 0x73f843:c.instructions+=1;goto B73f843;
case 0x73f848:goto L73f848;
case 0x73f84b:c.instructions+=4;goto B73f84b;
case 0x73f852:c.instructions+=3;goto B73f852;
case 0x73f854:c.instructions+=2;goto B73f854;
case 0x73f855:c.instructions+=1;goto B73f855;
case 0x73f860:goto L73f860;
case 0x73f861:c.instructions+=3;goto B73f861;
case 0x73f865:c.instructions+=2;goto B73f865;
case 0x73f869:c.instructions+=1;goto B73f869;
case 0x73f86b:goto L73f86b;
case 0x73f86d:c.instructions+=2;goto B73f86d;
case 0x73f86e:c.instructions+=1;goto B73f86e;
case 0x73f86f:goto L73f86f;
case 0x73f872:c.instructions+=6;goto B73f872;
case 0x73f873:c.instructions+=5;goto B73f873;
case 0x73f878:c.instructions+=4;goto B73f878;
case 0x73f879:c.instructions+=3;goto B73f879;
case 0x73f880:c.instructions+=2;goto B73f880;
case 0x73f887:c.instructions+=1;goto B73f887;
case 0x73f88c:goto L73f88c;
case 0x73f892:c.instructions+=3;goto B73f892;
case 0x73f895:c.instructions+=2;goto B73f895;
case 0x73f897:c.instructions+=1;goto B73f897;
case 0x73f899:goto L73f899;
case 0x73f89c:c.instructions+=6;goto B73f89c;
case 0x73f89f:c.instructions+=5;goto B73f89f;
case 0x73f8a1:c.instructions+=4;goto B73f8a1;
case 0x73f8a2:c.instructions+=3;goto B73f8a2;
case 0x73f8a4:c.instructions+=2;goto B73f8a4;
case 0x73f8a5:c.instructions+=1;goto B73f8a5;
case 0x73f8aa:goto L73f8aa;
case 0x73f8ad:goto L73f8ad;
case 0x73f8b0:c.instructions+=4;goto B73f8b0;
case 0x73f8b7:c.instructions+=3;goto B73f8b7;
case 0x73f8b8:c.instructions+=2;goto B73f8b8;
case 0x73f8bc:c.instructions+=1;goto B73f8bc;
case 0x73f8d0:goto L73f8d0;
case 0x73f8d4:c.instructions+=9;goto B73f8d4;
case 0x73f8d8:c.instructions+=8;goto B73f8d8;
case 0x73f8d9:c.instructions+=7;goto B73f8d9;
case 0x73f8dd:c.instructions+=6;goto B73f8dd;
case 0x73f8e0:c.instructions+=5;goto B73f8e0;
case 0x73f8e1:c.instructions+=4;goto B73f8e1;
case 0x73f8e2:c.instructions+=3;goto B73f8e2;
case 0x73f8e5:c.instructions+=2;goto B73f8e5;
case 0x73f8e8:c.instructions+=1;goto B73f8e8;
case 0x73f8ed:goto L73f8ed;
case 0x73f8f1:c.instructions+=3;goto B73f8f1;
case 0x73f8f4:c.instructions+=2;goto B73f8f4;
case 0x73f8f6:c.instructions+=1;goto B73f8f6;
case 0x73f8f8:goto L73f8f8;
case 0x73f8fb:c.instructions+=3;goto B73f8fb;
case 0x73f8fc:c.instructions+=2;goto B73f8fc;
case 0x73f8fd:c.instructions+=1;goto B73f8fd;
case 0x73f902:goto L73f902;
case 0x73f905:goto L73f905;
case 0x73f90b:c.instructions+=7;goto B73f90b;
case 0x73f90e:c.instructions+=6;goto B73f90e;
case 0x73f90f:c.instructions+=5;goto B73f90f;
case 0x73f910:c.instructions+=4;goto B73f910;
case 0x73f915:c.instructions+=3;goto B73f915;
case 0x73f916:c.instructions+=2;goto B73f916;
case 0x73f917:c.instructions+=1;goto B73f917;
case 0x73f91c:goto L73f91c;
case 0x73f91f:c.instructions+=2;goto B73f91f;
case 0x73f921:c.instructions+=1;goto B73f921;
case 0x73f923:goto L73f923;
case 0x73f924:c.instructions+=3;goto B73f924;
case 0x73f92b:c.instructions+=2;goto B73f92b;
case 0x73f92c:c.instructions+=1;goto B73f92c;
case 0x73f92d:goto L73f92d;
case 0x73f92e:c.instructions+=3;goto B73f92e;
case 0x73f931:c.instructions+=2;goto B73f931;
case 0x73f932:c.instructions+=1;goto B73f932;
case 0x73f940:goto L73f940;
case 0x73f944:c.instructions+=5;goto B73f944;
case 0x73f946:c.instructions+=4;goto B73f946;
case 0x73f94c:c.instructions+=3;goto B73f94c;
case 0x73f952:c.instructions+=2;goto B73f952;
case 0x73f957:c.instructions+=1;goto B73f957;
case 0x73f959:goto L73f959;
case 0x73f95b:c.instructions+=1;goto B73f95b;
case 0x73f95d:goto L73f95d;
case 0x73f962:goto L73f962;
case 0x73f963:c.instructions+=6;goto B73f963;
case 0x73f965:c.instructions+=5;goto B73f965;
case 0x73f968:c.instructions+=4;goto B73f968;
case 0x73f96b:c.instructions+=3;goto B73f96b;
case 0x73f96f:c.instructions+=2;goto B73f96f;
case 0x73f970:c.instructions+=1;goto B73f970;
case 0x73f972:goto L73f972;
case 0x73f975:c.instructions+=1;goto B73f975;
case 0x73f977:goto L73f977;
case 0x73f979:c.instructions+=1;goto B73f979;
case 0x73f97b:goto L73f97b;
case 0x73f980:goto L73f980;
case 0x73f982:c.instructions+=1;goto B73f982;
case 0x73f984:goto L73f984;
case 0x73f986:goto L73f986;
case 0x73f990:goto L73f990;
case 0x73f994:c.instructions+=9;goto B73f994;
case 0x73f998:c.instructions+=8;goto B73f998;
case 0x73f99c:c.instructions+=7;goto B73f99c;
case 0x73f99d:c.instructions+=6;goto B73f99d;
case 0x73f9a1:c.instructions+=5;goto B73f9a1;
case 0x73f9a2:c.instructions+=4;goto B73f9a2;
case 0x73f9a7:c.instructions+=3;goto B73f9a7;
case 0x73f9a8:c.instructions+=2;goto B73f9a8;
case 0x73f9a9:c.instructions+=1;goto B73f9a9;
case 0x73f9ae:goto L73f9ae;
case 0x73f9b1:c.instructions+=1;goto B73f9b1;
case 0x73f9c0:goto L73f9c0;
case 0x73f9c1:c.instructions+=11;goto B73f9c1;
case 0x73f9c3:c.instructions+=10;goto B73f9c3;
case 0x73f9c6:c.instructions+=9;goto B73f9c6;
case 0x73f9cc:c.instructions+=8;goto B73f9cc;
case 0x73f9d1:c.instructions+=7;goto B73f9d1;
case 0x73f9d2:c.instructions+=6;goto B73f9d2;
case 0x73f9d3:c.instructions+=5;goto B73f9d3;
case 0x73f9d6:c.instructions+=4;goto B73f9d6;
case 0x73f9dd:c.instructions+=3;goto B73f9dd;
case 0x73f9e1:c.instructions+=2;goto B73f9e1;
case 0x73f9e2:c.instructions+=1;goto B73f9e2;
case 0x73f9e4:goto L73f9e4;
case 0x73f9e9:c.instructions+=2;goto B73f9e9;
case 0x73f9f0:c.instructions+=1;goto B73f9f0;
case 0x73f9f5:goto L73f9f5;
case 0x73f9f6:c.instructions+=5;goto B73f9f6;
case 0x73f9f7:c.instructions+=4;goto B73f9f7;
case 0x73f9f8:c.instructions+=3;goto B73f9f8;
case 0x73f9fa:c.instructions+=2;goto B73f9fa;
case 0x73f9fb:c.instructions+=1;goto B73f9fb;
case 0x73f9fc:goto L73f9fc;
case 0x73f9ff:c.instructions+=2;goto B73f9ff;
case 0x73fa00:c.instructions+=1;goto B73fa00;
case 0x73fa05:goto L73fa05;
case 0x73fa08:c.instructions+=3;goto B73fa08;
case 0x73fa0b:c.instructions+=2;goto B73fa0b;
case 0x73fa0d:c.instructions+=1;goto B73fa0d;
case 0x73fa0f:goto L73fa0f;
case 0x73fa12:c.instructions+=3;goto B73fa12;
case 0x73fa13:c.instructions+=2;goto B73fa13;
case 0x73fa14:c.instructions+=1;goto B73fa14;
case 0x73fa19:goto L73fa19;
case 0x73fa1c:c.instructions+=2;goto B73fa1c;
case 0x73fa1e:c.instructions+=1;goto B73fa1e;
case 0x73fa20:goto L73fa20;
case 0x73fa26:c.instructions+=2;goto B73fa26;
case 0x73fa28:c.instructions+=1;goto B73fa28;
case 0x73fa2a:goto L73fa2a;
case 0x73fa2c:c.instructions+=2;goto B73fa2c;
case 0x73fa36:c.instructions+=1;goto B73fa36;
case 0x73fa38:goto L73fa38;
case 0x73fa3d:c.instructions+=2;goto B73fa3d;
case 0x73fa44:c.instructions+=1;goto B73fa44;
case 0x73fa49:goto L73fa49;
case 0x73fa4a:c.instructions+=5;goto B73fa4a;
case 0x73fa4b:c.instructions+=4;goto B73fa4b;
case 0x73fa4c:c.instructions+=3;goto B73fa4c;
case 0x73fa4e:c.instructions+=2;goto B73fa4e;
case 0x73fa4f:c.instructions+=1;goto B73fa4f;
case 0x73fa50:goto L73fa50;
case 0x73fa52:c.instructions+=2;goto B73fa52;
case 0x73fa57:c.instructions+=1;goto B73fa57;
case 0x73fa5b:goto L73fa5b;
case 0x73fa5d:goto L73fa5d;
case 0x73fa60:c.instructions+=6;goto B73fa60;
case 0x73fa63:c.instructions+=5;goto B73fa63;
case 0x73fa64:c.instructions+=4;goto B73fa64;
case 0x73fa65:c.instructions+=3;goto B73fa65;
case 0x73fa66:c.instructions+=2;goto B73fa66;
case 0x73fa67:c.instructions+=1;goto B73fa67;
case 0x73fa6c:goto L73fa6c;
case 0x73fa6e:c.instructions+=4;goto B73fa6e;
case 0x73fa72:c.instructions+=3;goto B73fa72;
case 0x73fa73:c.instructions+=2;goto B73fa73;
case 0x73fa74:c.instructions+=1;goto B73fa74;
case 0x73fa79:goto L73fa79;
case 0x73fa7f:c.instructions+=8;goto B73fa7f;
case 0x73fa82:c.instructions+=7;goto B73fa82;
case 0x73fa83:c.instructions+=6;goto B73fa83;
case 0x73fa84:c.instructions+=5;goto B73fa84;
case 0x73fa89:c.instructions+=4;goto B73fa89;
case 0x73fa8d:c.instructions+=3;goto B73fa8d;
case 0x73fa8e:c.instructions+=2;goto B73fa8e;
case 0x73fa8f:c.instructions+=1;goto B73fa8f;
case 0x73fa94:goto L73fa94;
case 0x73fa97:c.instructions+=2;goto B73fa97;
case 0x73fa99:c.instructions+=1;goto B73fa99;
case 0x73fa9b:goto L73fa9b;
case 0x73faa2:c.instructions+=2;goto B73faa2;
case 0x73faa9:c.instructions+=1;goto B73faa9;
case 0x73faae:goto L73faae;
case 0x73faaf:c.instructions+=5;goto B73faaf;
case 0x73fab0:c.instructions+=4;goto B73fab0;
case 0x73fab1:c.instructions+=3;goto B73fab1;
case 0x73fab3:c.instructions+=2;goto B73fab3;
case 0x73fab4:c.instructions+=1;goto B73fab4;
case 0x73fab5:goto L73fab5;
case 0x73fabc:c.instructions+=2;goto B73fabc;
case 0x73fabf:c.instructions+=1;goto B73fabf;
case 0x73fac4:goto L73fac4;
case 0x73fac5:c.instructions+=5;goto B73fac5;
case 0x73fac6:c.instructions+=4;goto B73fac6;
case 0x73fac7:c.instructions+=3;goto B73fac7;
case 0x73fac9:c.instructions+=2;goto B73fac9;
case 0x73faca:c.instructions+=1;goto B73faca;
case 0x73fad0:goto L73fad0;
case 0x73fad4:c.instructions+=8;goto B73fad4;
case 0x73fad8:c.instructions+=7;goto B73fad8;
case 0x73fad9:c.instructions+=6;goto B73fad9;
case 0x73fadd:c.instructions+=5;goto B73fadd;
case 0x73fae0:c.instructions+=4;goto B73fae0;
case 0x73fae1:c.instructions+=3;goto B73fae1;
case 0x73fae4:c.instructions+=2;goto B73fae4;
case 0x73fae7:c.instructions+=1;goto B73fae7;
case 0x73faec:goto L73faec;
case 0x73faef:c.instructions+=2;goto B73faef;
case 0x73faf1:c.instructions+=1;goto B73faf1;
case 0x73faf3:goto L73faf3;
case 0x73faf7:c.instructions+=4;goto B73faf7;
case 0x73fafa:c.instructions+=3;goto B73fafa;
case 0x73fafb:c.instructions+=2;goto B73fafb;
case 0x73fafc:c.instructions+=1;goto B73fafc;
case 0x73fb01:goto L73fb01;
case 0x73fb04:c.instructions+=2;goto B73fb04;
case 0x73fb06:c.instructions+=1;goto B73fb06;
case 0x73fb08:goto L73fb08;
case 0x73fb0e:c.instructions+=2;goto B73fb0e;
case 0x73fb10:c.instructions+=1;goto B73fb10;
case 0x73fb12:goto L73fb12;
case 0x73fb14:c.instructions+=2;goto B73fb14;
case 0x73fb16:c.instructions+=1;goto B73fb16;
case 0x73fb18:goto L73fb18;
case 0x73fb1d:c.instructions+=2;goto B73fb1d;
case 0x73fb1e:c.instructions+=1;goto B73fb1e;
case 0x73fb1f:goto L73fb1f;
case 0x73fb25:c.instructions+=9;goto B73fb25;
case 0x73fb29:c.instructions+=8;goto B73fb29;
case 0x73fb2a:c.instructions+=7;goto B73fb2a;
case 0x73fb2d:c.instructions+=6;goto B73fb2d;
case 0x73fb2e:c.instructions+=5;goto B73fb2e;
case 0x73fb33:c.instructions+=4;goto B73fb33;
case 0x73fb34:c.instructions+=3;goto B73fb34;
case 0x73fb35:c.instructions+=2;goto B73fb35;
case 0x73fb36:c.instructions+=1;goto B73fb36;
case 0x73fb3b:goto L73fb3b;
case 0x73fb3e:c.instructions+=2;goto B73fb3e;
case 0x73fb40:c.instructions+=1;goto B73fb40;
case 0x73fb42:goto L73fb42;
case 0x73fb49:c.instructions+=2;goto B73fb49;
case 0x73fb4a:c.instructions+=1;goto B73fb4a;
case 0x73fb4b:goto L73fb4b;
case 0x73fb4e:c.instructions+=2;goto B73fb4e;
case 0x73fb4f:c.instructions+=1;goto B73fb4f;
case 0x73fb50:goto L73fb50;
case 0x73fb51:c.instructions+=5;goto B73fb51;
case 0x73fb55:c.instructions+=4;goto B73fb55;
case 0x73fb56:c.instructions+=3;goto B73fb56;
case 0x73fb5a:c.instructions+=2;goto B73fb5a;
case 0x73fb5d:c.instructions+=1;goto B73fb5d;
case 0x73fb5f:goto L73fb5f;
case 0x73fb66:c.instructions+=1;goto B73fb66;
case 0x73fb6a:goto L73fb6a;
case 0x73fb6d:c.instructions+=6;goto B73fb6d;
case 0x73fb71:c.instructions+=5;goto B73fb71;
case 0x73fb75:c.instructions+=4;goto B73fb75;
case 0x73fb76:c.instructions+=3;goto B73fb76;
case 0x73fb79:c.instructions+=2;goto B73fb79;
case 0x73fb7c:c.instructions+=1;goto B73fb7c;
case 0x73fb81:goto L73fb81;
case 0x73fb84:c.instructions+=2;goto B73fb84;
case 0x73fb86:c.instructions+=1;goto B73fb86;
case 0x73fb88:goto L73fb88;
case 0x73fb8c:c.instructions+=4;goto B73fb8c;
case 0x73fb8f:c.instructions+=3;goto B73fb8f;
case 0x73fb90:c.instructions+=2;goto B73fb90;
case 0x73fb91:c.instructions+=1;goto B73fb91;
case 0x73fb96:goto L73fb96;
case 0x73fb99:c.instructions+=2;goto B73fb99;
case 0x73fb9b:c.instructions+=1;goto B73fb9b;
case 0x73fb9d:goto L73fb9d;
case 0x73fba3:c.instructions+=2;goto B73fba3;
case 0x73fba5:c.instructions+=1;goto B73fba5;
case 0x73fba7:goto L73fba7;
case 0x73fba9:c.instructions+=2;goto B73fba9;
case 0x73fbab:c.instructions+=1;goto B73fbab;
case 0x73fbad:goto L73fbad;
case 0x73fbae:c.instructions+=3;goto B73fbae;
case 0x73fbb3:c.instructions+=2;goto B73fbb3;
case 0x73fbb4:c.instructions+=1;goto B73fbb4;
case 0x73fbb5:goto L73fbb5;
case 0x73fbbb:c.instructions+=10;goto B73fbbb;
case 0x73fbc1:c.instructions+=9;goto B73fbc1;
case 0x73fbc2:c.instructions+=8;goto B73fbc2;
case 0x73fbc5:c.instructions+=7;goto B73fbc5;
case 0x73fbc6:c.instructions+=6;goto B73fbc6;
case 0x73fbc7:c.instructions+=5;goto B73fbc7;
case 0x73fbcc:c.instructions+=4;goto B73fbcc;
case 0x73fbcd:c.instructions+=3;goto B73fbcd;
case 0x73fbce:c.instructions+=2;goto B73fbce;
case 0x73fbcf:c.instructions+=1;goto B73fbcf;
case 0x73fbd4:goto L73fbd4;
case 0x73fbd6:c.instructions+=3;goto B73fbd6;
case 0x73fbd9:c.instructions+=2;goto B73fbd9;
case 0x73fbdb:c.instructions+=1;goto B73fbdb;
case 0x73fbdd:goto L73fbdd;
case 0x73fbe4:c.instructions+=1;goto B73fbe4;
case 0x73fbe6:goto L73fbe6;
case 0x73fbe9:goto L73fbe9;
case 0x73fbec:c.instructions+=3;goto B73fbec;
case 0x73fbee:c.instructions+=2;goto B73fbee;
case 0x73fbf5:c.instructions+=1;goto B73fbf5;
case 0x73fbf7:goto L73fbf7;
case 0x73fbfa:c.instructions+=5;goto B73fbfa;
case 0x73fbfb:c.instructions+=4;goto B73fbfb;
case 0x73fbfd:c.instructions+=3;goto B73fbfd;
case 0x73fbff:c.instructions+=2;goto B73fbff;
case 0x73fc00:c.instructions+=1;goto B73fc00;
case 0x73fc02:goto L73fc02;
case 0x73fc05:goto L73fc05;
case 0x73fc07:c.instructions+=3;goto B73fc07;
case 0x73fc08:c.instructions+=2;goto B73fc08;
case 0x73fc09:c.instructions+=1;goto B73fc09;
case 0x73fc10:goto L73fc10;
case 0x73fc11:c.instructions+=3;goto B73fc11;
case 0x73fc15:c.instructions+=2;goto B73fc15;
case 0x73fc16:c.instructions+=1;goto B73fc16;
case 0x73fc1b:goto L73fc1b;
case 0x73fc1f:c.instructions+=7;goto B73fc1f;
case 0x73fc23:c.instructions+=6;goto B73fc23;
case 0x73fc24:c.instructions+=5;goto B73fc24;
case 0x73fc25:c.instructions+=4;goto B73fc25;
case 0x73fc27:c.instructions+=3;goto B73fc27;
case 0x73fc2c:c.instructions+=2;goto B73fc2c;
case 0x73fc2d:c.instructions+=1;goto B73fc2d;
case 0x73fc32:goto L73fc32;
case 0x73fc38:c.instructions+=5;goto B73fc38;
case 0x73fc3b:c.instructions+=4;goto B73fc3b;
case 0x73fc3c:c.instructions+=3;goto B73fc3c;
case 0x73fc42:c.instructions+=2;goto B73fc42;
case 0x73fc43:c.instructions+=1;goto B73fc43;
case 0x73fc50:goto L73fc50;
case 0x73fc54:c.instructions+=2;goto B73fc54;
case 0x73fc58:c.instructions+=1;goto B73fc58;
case 0x73fc5a:goto L73fc5a;
case 0x73fc5f:c.instructions+=1;goto B73fc5f;
case 0x73fc60:goto L73fc60;
case 0x73fc64:c.instructions+=6;goto B73fc64;
case 0x73fc66:c.instructions+=5;goto B73fc66;
case 0x73fc68:c.instructions+=4;goto B73fc68;
case 0x73fc6d:c.instructions+=3;goto B73fc6d;
case 0x73fc6e:c.instructions+=2;goto B73fc6e;
case 0x73fc6f:c.instructions+=1;goto B73fc6f;
case 0x73fc74:goto L73fc74;
case 0x73fc77:c.instructions+=1;goto B73fc77;
case 0x73fc80:goto L73fc80;
case 0x73fc85:c.instructions+=1;goto B73fc85;
case 0x73fc8a:goto L73fc8a;
case 0x73fc8f:c.instructions+=7;goto B73fc8f;
case 0x73fc90:c.instructions+=6;goto B73fc90;
case 0x73fc91:c.instructions+=5;goto B73fc91;
case 0x73fc98:c.instructions+=4;goto B73fc98;
case 0x73fc9f:c.instructions+=3;goto B73fc9f;
case 0x73fca2:c.instructions+=2;goto B73fca2;
case 0x73fca3:c.instructions+=1;goto B73fca3;
case 0x73fca8:goto L73fca8;
case 0x73fcaf:c.instructions+=3;goto B73fcaf;
case 0x73fcb2:c.instructions+=2;goto B73fcb2;
case 0x73fcb4:c.instructions+=1;goto B73fcb4;
case 0x73fcb6:goto L73fcb6;
case 0x73fcb9:c.instructions+=3;goto B73fcb9;
case 0x73fcba:c.instructions+=2;goto B73fcba;
case 0x73fcbb:c.instructions+=1;goto B73fcbb;
case 0x73fcc0:goto L73fcc0;
case 0x73fcc3:c.instructions+=2;goto B73fcc3;
case 0x73fcc5:c.instructions+=1;goto B73fcc5;
case 0x73fcc7:goto L73fcc7;
case 0x73fccd:c.instructions+=2;goto B73fccd;
case 0x73fccf:c.instructions+=1;goto B73fccf;
case 0x73fcd1:goto L73fcd1;
case 0x73fcd3:c.instructions+=2;goto B73fcd3;
case 0x73fcdd:c.instructions+=1;goto B73fcdd;
case 0x73fcdf:goto L73fcdf;
case 0x73fce0:c.instructions+=4;goto B73fce0;
case 0x73fce5:c.instructions+=3;goto B73fce5;
case 0x73fce6:c.instructions+=2;goto B73fce6;
case 0x73fced:c.instructions+=1;goto B73fced;
case 0x73fcf2:goto L73fcf2;
case 0x73fcf8:c.instructions+=1;goto B73fcf8;
case 0x73fcf9:goto L73fcf9;
case 0x73fcfd:c.instructions+=1;goto B73fcfd;
case 0x73fcff:goto L73fcff;
case 0x73fd00:c.instructions+=4;goto B73fd00;
case 0x73fd05:c.instructions+=3;goto B73fd05;
case 0x73fd06:c.instructions+=2;goto B73fd06;
case 0x73fd0d:c.instructions+=1;goto B73fd0d;
case 0x73fd12:goto L73fd12;
case 0x73fd18:c.instructions+=1;goto B73fd18;
case 0x73fd19:goto L73fd19;
case 0x73fd1e:c.instructions+=6;goto B73fd1e;
case 0x73fd23:c.instructions+=5;goto B73fd23;
case 0x73fd2a:c.instructions+=4;goto B73fd2a;
case 0x73fd2f:c.instructions+=3;goto B73fd2f;
case 0x73fd30:c.instructions+=2;goto B73fd30;
case 0x73fd38:c.instructions+=1;goto B73fd38;
case 0x73fd3d:goto L73fd3d;
case 0x73fd3f:c.instructions+=2;goto B73fd3f;
case 0x73fd40:c.instructions+=1;goto B73fd40;
case 0x73fd45:goto L73fd45;
case 0x73fd48:c.instructions+=2;goto B73fd48;
case 0x73fd4a:c.instructions+=1;goto B73fd4a;
case 0x73fd50:goto L73fd50;
case 0x73fd53:c.instructions+=2;goto B73fd53;
case 0x73fd54:c.instructions+=1;goto B73fd54;
case 0x73fd59:goto L73fd59;
case 0x73fd5b:c.instructions+=3;goto B73fd5b;
case 0x73fd5e:c.instructions+=2;goto B73fd5e;
case 0x73fd61:c.instructions+=1;goto B73fd61;
case 0x73fd63:goto L73fd63;
case 0x73fd66:c.instructions+=2;goto B73fd66;
case 0x73fd67:c.instructions+=1;goto B73fd67;
case 0x73fd6c:goto L73fd6c;
case 0x73fd6f:c.instructions+=3;goto B73fd6f;
case 0x73fd70:c.instructions+=2;goto B73fd70;
case 0x73fd74:c.instructions+=1;goto B73fd74;
case 0x73fd76:goto L73fd76;
case 0x73fd78:c.instructions+=4;goto B73fd78;
case 0x73fd7b:c.instructions+=3;goto B73fd7b;
case 0x73fd7c:c.instructions+=2;goto B73fd7c;
case 0x73fd7e:c.instructions+=1;goto B73fd7e;
case 0x73fd80:goto L73fd80;
case 0x73fd82:goto L73fd82;
case 0x73fd85:c.instructions+=2;goto B73fd85;
case 0x73fd86:c.instructions+=1;goto B73fd86;
case 0x73fd8b:goto L73fd8b;
case 0x73fd8e:c.instructions+=1;goto B73fd8e;
case 0x73fd92:goto L73fd92;
case 0x73fd94:c.instructions+=5;goto B73fd94;
case 0x73fd95:c.instructions+=4;goto B73fd95;
case 0x73fd97:c.instructions+=3;goto B73fd97;
case 0x73fd98:c.instructions+=2;goto B73fd98;
case 0x73fd9a:c.instructions+=1;goto B73fd9a;
case 0x73fd9c:goto L73fd9c;
case 0x73fda0:c.instructions+=3;goto B73fda0;
case 0x73fda2:c.instructions+=2;goto B73fda2;
case 0x73fda3:c.instructions+=1;goto B73fda3;
case 0x73fda8:goto L73fda8;
case 0x73fdab:c.instructions+=2;goto B73fdab;
case 0x73fdad:c.instructions+=1;goto B73fdad;
case 0x73fdaf:goto L73fdaf;
case 0x73fdb2:goto L73fdb2;
case 0x73fdb6:c.instructions+=6;goto B73fdb6;
case 0x73fdb7:c.instructions+=5;goto B73fdb7;
case 0x73fdb8:c.instructions+=4;goto B73fdb8;
case 0x73fdbc:c.instructions+=3;goto B73fdbc;
case 0x73fdc1:c.instructions+=2;goto B73fdc1;
case 0x73fdc2:c.instructions+=1;goto B73fdc2;
case 0x73fdc7:goto L73fdc7;
case 0x73fdcb:c.instructions+=6;goto B73fdcb;
case 0x73fdcc:c.instructions+=5;goto B73fdcc;
case 0x73fdd1:c.instructions+=4;goto B73fdd1;
case 0x73fdd8:c.instructions+=3;goto B73fdd8;
case 0x73fddd:c.instructions+=2;goto B73fddd;
case 0x73fdde:c.instructions+=1;goto B73fdde;
case 0x73fde3:goto L73fde3;
case 0x73fde6:c.instructions+=1;goto B73fde6;
case 0x73fde8:goto L73fde8;
case 0x73fde9:c.instructions+=5;goto B73fde9;
case 0x73fdee:c.instructions+=4;goto B73fdee;
case 0x73fdf5:c.instructions+=3;goto B73fdf5;
case 0x73fdfa:c.instructions+=2;goto B73fdfa;
case 0x73fdfb:c.instructions+=1;goto B73fdfb;
case 0x73fe00:goto L73fe00;
case 0x73fe03:goto L73fe03;
case 0x73fe09:c.instructions+=7;goto B73fe09;
case 0x73fe10:c.instructions+=6;goto B73fe10;
case 0x73fe11:c.instructions+=5;goto B73fe11;
case 0x73fe12:c.instructions+=4;goto B73fe12;
case 0x73fe13:c.instructions+=3;goto B73fe13;
case 0x73fe17:c.instructions+=2;goto B73fe17;
case 0x73fe18:c.instructions+=1;goto B73fe18;
case 0x73fe1d:goto L73fe1d;
case 0x73fe23:c.instructions+=8;goto B73fe23;
case 0x73fe27:c.instructions+=7;goto B73fe27;
case 0x73fe28:c.instructions+=6;goto B73fe28;
case 0x73fe2d:c.instructions+=5;goto B73fe2d;
case 0x73fe34:c.instructions+=4;goto B73fe34;
case 0x73fe39:c.instructions+=3;goto B73fe39;
case 0x73fe3a:c.instructions+=2;goto B73fe3a;
case 0x73fe42:c.instructions+=1;goto B73fe42;
case 0x73fe47:goto L73fe47;
case 0x73fe4c:c.instructions+=5;goto B73fe4c;
case 0x73fe51:c.instructions+=4;goto B73fe51;
case 0x73fe58:c.instructions+=3;goto B73fe58;
case 0x73fe5d:c.instructions+=2;goto B73fe5d;
case 0x73fe5e:c.instructions+=1;goto B73fe5e;
case 0x73fe63:goto L73fe63;
case 0x73fe6a:c.instructions+=6;goto B73fe6a;
case 0x73fe71:c.instructions+=5;goto B73fe71;
case 0x73fe72:c.instructions+=4;goto B73fe72;
case 0x73fe73:c.instructions+=3;goto B73fe73;
case 0x73fe74:c.instructions+=2;goto B73fe74;
case 0x73fe75:c.instructions+=1;goto B73fe75;
case 0x73fe7a:goto L73fe7a;
case 0x73fe7c:c.instructions+=2;goto B73fe7c;
case 0x73fe7d:c.instructions+=1;goto B73fe7d;
case 0x73fe82:goto L73fe82;
case 0x73fe85:c.instructions+=10;goto B73fe85;
case 0x73fe88:c.instructions+=9;goto B73fe88;
case 0x73fe8a:c.instructions+=8;goto B73fe8a;
case 0x73fe90:c.instructions+=7;goto B73fe90;
case 0x73fe91:c.instructions+=6;goto B73fe91;
case 0x73fe92:c.instructions+=5;goto B73fe92;
case 0x73fe97:c.instructions+=4;goto B73fe97;
case 0x73fe9e:c.instructions+=3;goto B73fe9e;
case 0x73fe9f:c.instructions+=2;goto B73fe9f;
case 0x73fea0:c.instructions+=1;goto B73fea0;
case 0x73fea2:goto L73fea2;
case 0x73fea7:goto L73fea7;
case 0x73fea9:goto L73fea9;
case 0x73feae:goto L73feae;
case 0x73feb1:c.instructions+=3;goto B73feb1;
case 0x73feb3:c.instructions+=2;goto B73feb3;
case 0x73feb4:c.instructions+=1;goto B73feb4;
case 0x73feb6:goto L73feb6;
case 0x73fec0:goto L73fec0;
case 0x73fec6:c.instructions+=2;goto B73fec6;
case 0x73fec8:c.instructions+=1;goto B73fec8;
case 0x73feca:goto L73feca;
case 0x73fecc:c.instructions+=1;goto B73fecc;
case 0x73fece:goto L73fece;
case 0x73fed5:c.instructions+=4;goto B73fed5;
case 0x73fed6:c.instructions+=3;goto B73fed6;
case 0x73fed7:c.instructions+=2;goto B73fed7;
case 0x73fede:c.instructions+=1;goto B73fede;
case 0x73fee3:goto L73fee3;
case 0x73fee9:c.instructions+=1;goto B73fee9;
case 0x73feea:goto L73feea;
case 0x73feed:goto L73feed;
case 0x73fef4:c.instructions+=3;goto B73fef4;
case 0x73fef5:c.instructions+=2;goto B73fef5;
case 0x73fef6:c.instructions+=1;goto B73fef6;
case 0x73fefb:goto L73fefb;
case 0x73ff01:c.instructions+=1;goto B73ff01;
case 0x73ff10:goto L73ff10;
case 0x73ff11:c.instructions+=8;goto B73ff11;
case 0x73ff12:c.instructions+=7;goto B73ff12;
case 0x73ff13:c.instructions+=6;goto B73ff13;
case 0x73ff14:c.instructions+=5;goto B73ff14;
case 0x73ff18:c.instructions+=4;goto B73ff18;
case 0x73ff1b:c.instructions+=3;goto B73ff1b;
case 0x73ff1c:c.instructions+=2;goto B73ff1c;
case 0x73ff1e:c.instructions+=1;goto B73ff1e;
case 0x73ff23:goto L73ff23;
case 0x73ff26:c.instructions+=2;goto B73ff26;
case 0x73ff28:c.instructions+=1;goto B73ff28;
case 0x73ff2e:goto L73ff2e;
case 0x73ff31:c.instructions+=2;goto B73ff31;
case 0x73ff32:c.instructions+=1;goto B73ff32;
case 0x73ff37:goto L73ff37;
case 0x73ff38:c.instructions+=1;goto B73ff38;
case 0x73ff3d:goto L73ff3d;
case 0x73ff3f:c.instructions+=3;goto B73ff3f;
case 0x73ff42:c.instructions+=2;goto B73ff42;
case 0x73ff44:c.instructions+=1;goto B73ff44;
case 0x73ff46:goto L73ff46;
case 0x73ff49:c.instructions+=3;goto B73ff49;
case 0x73ff4a:c.instructions+=2;goto B73ff4a;
case 0x73ff4c:c.instructions+=1;goto B73ff4c;
case 0x73ff51:goto L73ff51;
case 0x73ff54:c.instructions+=2;goto B73ff54;
case 0x73ff56:c.instructions+=1;goto B73ff56;
case 0x73ff58:goto L73ff58;
case 0x73ff5b:c.instructions+=3;goto B73ff5b;
case 0x73ff5c:c.instructions+=2;goto B73ff5c;
case 0x73ff5d:c.instructions+=1;goto B73ff5d;
case 0x73ff62:goto L73ff62;
case 0x73ff65:c.instructions+=2;goto B73ff65;
case 0x73ff66:c.instructions+=1;goto B73ff66;
case 0x73ff6b:goto L73ff6b;
case 0x73ff6e:c.instructions+=2;goto B73ff6e;
case 0x73ff70:c.instructions+=1;goto B73ff70;
case 0x73ff72:goto L73ff72;
case 0x73ff78:c.instructions+=2;goto B73ff78;
case 0x73ff7a:c.instructions+=1;goto B73ff7a;
case 0x73ff7c:goto L73ff7c;
case 0x73ff7e:goto L73ff7e;
case 0x73ff80:c.instructions+=3;goto B73ff80;
case 0x73ff86:c.instructions+=2;goto B73ff86;
case 0x73ff8b:c.instructions+=1;goto B73ff8b;
case 0x73ff8d:goto L73ff8d;
case 0x73ff8f:c.instructions+=1;goto B73ff8f;
case 0x73ff91:goto L73ff91;
case 0x73ff96:goto L73ff96;
case 0x73ff98:c.instructions+=4;goto B73ff98;
case 0x73ff9b:c.instructions+=3;goto B73ff9b;
case 0x73ff9e:c.instructions+=2;goto B73ff9e;
case 0x73ffa2:c.instructions+=1;goto B73ffa2;
case 0x73ffa4:goto L73ffa4;
case 0x73ffa7:c.instructions+=1;goto B73ffa7;
case 0x73ffa9:goto L73ffa9;
case 0x73ffab:c.instructions+=1;goto B73ffab;
case 0x73ffad:goto L73ffad;
case 0x73ffb2:goto L73ffb2;
case 0x73ffb4:c.instructions+=1;goto B73ffb4;
case 0x73ffb6:goto L73ffb6;
case 0x73ffb7:c.instructions+=2;goto B73ffb7;
case 0x73ffb9:c.instructions+=1;goto B73ffb9;
case 0x73ffbb:goto L73ffbb;
case 0x73ffbc:c.instructions+=5;goto B73ffbc;
case 0x73ffbd:c.instructions+=4;goto B73ffbd;
case 0x73ffbe:c.instructions+=3;goto B73ffbe;
case 0x73ffc3:c.instructions+=2;goto B73ffc3;
case 0x73ffc4:c.instructions+=1;goto B73ffc4;
case 0x73ffc5:goto L73ffc5;
case 0x73ffc7:c.instructions+=6;goto B73ffc7;
case 0x73ffc9:c.instructions+=5;goto B73ffc9;
case 0x73ffcb:c.instructions+=4;goto B73ffcb;
case 0x73ffd0:c.instructions+=3;goto B73ffd0;
case 0x73ffd1:c.instructions+=2;goto B73ffd1;
case 0x73ffd2:c.instructions+=1;goto B73ffd2;
case 0x73ffd7:goto L73ffd7;
case 0x73ffda:c.instructions+=6;goto B73ffda;
case 0x73ffdb:c.instructions+=5;goto B73ffdb;
case 0x73ffdc:c.instructions+=4;goto B73ffdc;
case 0x73ffdd:c.instructions+=3;goto B73ffdd;
case 0x73ffdf:c.instructions+=2;goto B73ffdf;
case 0x73ffe0:c.instructions+=1;goto B73ffe0;
case 0x73fff0:goto L73fff0;
case 0x73fff4:c.instructions+=3;goto B73fff4;
case 0x73fff9:c.instructions+=2;goto B73fff9;
case 0x73fffa:c.instructions+=1;goto B73fffa;
case 0x73fffc:goto L73fffc;
default:missing_instruction(c.pc);}
B73f001:L73f001:{c.instructions+=2;NFSU2_TR(0x73f001);
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
B73f003:{NFSU2_TR(0x73f003);
if(r1(R+518)){{goto L73f044;}}
}
B73f005:L73f005:{c.instructions+=3;NFSU2_TR(0x73f005);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73f008:{NFSU2_TR(0x73f008);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f009:{NFSU2_TR(0x73f009);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f00eull));
TAIL_STATIC(0x74d3b0u,74d);
}
B73f00e:L73f00e:{c.instructions+=6;NFSU2_TR(0x73f00e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73f011:{NFSU2_TR(0x73f011);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f012:{NFSU2_TR(0x73f012);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f014:{NFSU2_TR(0x73f014);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f015:{NFSU2_TR(0x73f015);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f016:{NFSU2_TR(0x73f016);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f01bull));
TAIL_STATIC(0x73d910u,73d);
}
B73f01b:L73f01b:{c.instructions+=5;NFSU2_TR(0x73f01b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f01e:{NFSU2_TR(0x73f01e);
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
B73f021:{NFSU2_TR(0x73f021);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f023:{NFSU2_TR(0x73f023);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f024:{NFSU2_TR(0x73f024);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f029ull));
TAIL_STATIC(0x74d3b0u,74d);
}
B73f029:L73f029:{c.instructions+=3;NFSU2_TR(0x73f029);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73f02c:{NFSU2_TR(0x73f02c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f02d:{NFSU2_TR(0x73f02d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f032ull));
TAIL_STATIC(0x73d970u,73d);
}
B73f032:L73f032:{c.instructions+=3;NFSU2_TR(0x73f032);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73f035:{NFSU2_TR(0x73f035);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f036:{NFSU2_TR(0x73f036);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f03bull));
TAIL_STATIC(0x74d3b0u,74d);
}
B73f03b:L73f03b:{c.instructions+=2;NFSU2_TR(0x73f03b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f03c:{NFSU2_TR(0x73f03c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f041ull));
TAIL_STATIC(0x73d9b0u,73d);
}
B73f041:L73f041:{c.instructions+=1;NFSU2_TR(0x73f041);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B73f044:L73f044:{c.instructions+=3;NFSU2_TR(0x73f044);
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
B73f046:{NFSU2_TR(0x73f046);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73f047:{NFSU2_TR(0x73f047);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73f050:L73f050:{c.instructions+=7;NFSU2_TR(0x73f050);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f051:{NFSU2_TR(0x73f051);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73f055:{NFSU2_TR(0x73f055);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f058:{NFSU2_TR(0x73f058);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f059:{NFSU2_TR(0x73f059);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f05a:{NFSU2_TR(0x73f05a);
w4(R+28,u32(0xfffffff8ull));
}
B73f05f:{NFSU2_TR(0x73f05f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f064ull));
TAIL_STATIC(0x74d3b0u,74d);
}
B73f064:L73f064:{c.instructions+=3;NFSU2_TR(0x73f064);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73f067:{NFSU2_TR(0x73f067);
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
B73f069:{NFSU2_TR(0x73f069);
if(r1(R+518)){{goto L73f095;}}
}
B73f06b:L73f06b:{c.instructions+=5;NFSU2_TR(0x73f06b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73f06f:{NFSU2_TR(0x73f06f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73f072:{NFSU2_TR(0x73f072);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f073:{NFSU2_TR(0x73f073);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f074:{NFSU2_TR(0x73f074);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f079ull));
TAIL_STATIC(0x74d8e0u,74d);
}
B73f079:L73f079:{c.instructions+=3;NFSU2_TR(0x73f079);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73f07c:{NFSU2_TR(0x73f07c);
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
B73f07e:{NFSU2_TR(0x73f07e);
if(r1(R+518)){{goto L73f095;}}
}
B73f080:L73f080:{c.instructions+=3;NFSU2_TR(0x73f080);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f086:{NFSU2_TR(0x73f086);
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
B73f088:{NFSU2_TR(0x73f088);
if(r1(R+518)){{goto L73f095;}}
}
B73f08a:L73f08a:{c.instructions+=5;NFSU2_TR(0x73f08a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73f08b:{NFSU2_TR(0x73f08b);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B73f091:{NFSU2_TR(0x73f091);
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
B73f093:{NFSU2_TR(0x73f093);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73f094:{NFSU2_TR(0x73f094);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73f095:L73f095:{c.instructions+=4;NFSU2_TR(0x73f095);
__builtin_memmove((R+0),(R+28),4);
}
B73f097:{NFSU2_TR(0x73f097);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73f098:{NFSU2_TR(0x73f098);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73f099:{NFSU2_TR(0x73f099);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73f0a0:L73f0a0:{c.instructions+=7;NFSU2_TR(0x73f0a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f0a1:{NFSU2_TR(0x73f0a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73f0a5:{NFSU2_TR(0x73f0a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f0a8:{NFSU2_TR(0x73f0a8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f0a9:{NFSU2_TR(0x73f0a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f0aa:{NFSU2_TR(0x73f0aa);
w4(R+28,u32(0xfffffff8ull));
}
B73f0af:{NFSU2_TR(0x73f0af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f0b4ull));
TAIL_STATIC(0x74d3b0u,74d);
}
B73f0b4:L73f0b4:{c.instructions+=3;NFSU2_TR(0x73f0b4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73f0b7:{NFSU2_TR(0x73f0b7);
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
B73f0b9:{NFSU2_TR(0x73f0b9);
if(r1(R+518)){{goto L73f0e5;}}
}
B73f0bb:L73f0bb:{c.instructions+=5;NFSU2_TR(0x73f0bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73f0bf:{NFSU2_TR(0x73f0bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73f0c2:{NFSU2_TR(0x73f0c2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f0c3:{NFSU2_TR(0x73f0c3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f0c4:{NFSU2_TR(0x73f0c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f0c9ull));
TAIL_STATIC(0x74d8e0u,74d);
}
B73f0c9:L73f0c9:{c.instructions+=3;NFSU2_TR(0x73f0c9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73f0cc:{NFSU2_TR(0x73f0cc);
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
B73f0ce:{NFSU2_TR(0x73f0ce);
if(r1(R+518)){{goto L73f0e5;}}
}
B73f0d0:L73f0d0:{c.instructions+=3;NFSU2_TR(0x73f0d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f0d6:{NFSU2_TR(0x73f0d6);
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
B73f0d8:{NFSU2_TR(0x73f0d8);
if(r1(R+518)){{goto L73f0e5;}}
}
B73f0da:L73f0da:{c.instructions+=5;NFSU2_TR(0x73f0da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73f0db:{NFSU2_TR(0x73f0db);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
w2(U+4,u16(0x0ull));
s2(u32(r4(U+0)),r2(U+4));
}
B73f0e1:{NFSU2_TR(0x73f0e1);
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
B73f0e3:{NFSU2_TR(0x73f0e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73f0e4:{NFSU2_TR(0x73f0e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73f0e5:L73f0e5:{c.instructions+=4;NFSU2_TR(0x73f0e5);
__builtin_memmove((R+0),(R+28),4);
}
B73f0e7:{NFSU2_TR(0x73f0e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73f0e8:{NFSU2_TR(0x73f0e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73f0e9:{NFSU2_TR(0x73f0e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73f0f0:L73f0f0:{c.instructions+=7;NFSU2_TR(0x73f0f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f0f1:{NFSU2_TR(0x73f0f1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f0f2:{NFSU2_TR(0x73f0f2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73f0f6:{NFSU2_TR(0x73f0f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f0f9:{NFSU2_TR(0x73f0f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f0fa:{NFSU2_TR(0x73f0fa);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73f0fc:{NFSU2_TR(0x73f0fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f101ull));
TAIL_STATIC(0x74d3b0u,74d);
}
B73f101:L73f101:{c.instructions+=3;NFSU2_TR(0x73f101);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73f104:{NFSU2_TR(0x73f104);
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
B73f106:{NFSU2_TR(0x73f106);
if(r1(R+518)){{goto L73f166;}}
}
B73f108:L73f108:{c.instructions+=4;NFSU2_TR(0x73f108);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73f10b:{NFSU2_TR(0x73f10b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f10c:{NFSU2_TR(0x73f10c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f10d:{NFSU2_TR(0x73f10d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f112ull));
TAIL_STATIC(0x74d3b0u,74d);
}
B73f112:L73f112:{c.instructions+=2;NFSU2_TR(0x73f112);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f113:{NFSU2_TR(0x73f113);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f118ull));
TAIL_STATIC(0x73d8c0u,73d);
}
B73f118:L73f118:{c.instructions+=4;NFSU2_TR(0x73f118);
__builtin_memmove((R+12),(R+0),4);
}
B73f11a:{NFSU2_TR(0x73f11a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73f11d:{NFSU2_TR(0x73f11d);
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
B73f11f:{NFSU2_TR(0x73f11f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L73f160;}}
}
B73f121:L73f121:{c.instructions+=3;NFSU2_TR(0x73f121);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73f124:{NFSU2_TR(0x73f124);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f125:{NFSU2_TR(0x73f125);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f12aull));
TAIL_STATIC(0x74d3b0u,74d);
}
B73f12a:L73f12a:{c.instructions+=3;NFSU2_TR(0x73f12a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73f12d:{NFSU2_TR(0x73f12d);
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
B73f12f:{NFSU2_TR(0x73f12f);
if(r1(R+518)){{goto L73f15b;}}
}
B73f131:L73f131:{c.instructions+=4;NFSU2_TR(0x73f131);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f134:{NFSU2_TR(0x73f134);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f135:{NFSU2_TR(0x73f135);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f136:{NFSU2_TR(0x73f136);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f13bull));
TAIL_STATIC(0x74d3b0u,74d);
}
B73f13b:L73f13b:{c.instructions+=3;NFSU2_TR(0x73f13b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73f13e:{NFSU2_TR(0x73f13e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f13f:{NFSU2_TR(0x73f13f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f144ull));
TAIL_STATIC(0x73d8e0u,73d);
}
B73f144:L73f144:{c.instructions+=3;NFSU2_TR(0x73f144);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73f147:{NFSU2_TR(0x73f147);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73f149:{NFSU2_TR(0x73f149);
if(r1(R+518)){{goto L73f15b;}}
}
B73f14b:L73f14b:{c.instructions+=3;NFSU2_TR(0x73f14b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f151:{NFSU2_TR(0x73f151);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73f153:{NFSU2_TR(0x73f153);
if(r1(R+518)){{goto L73f15b;}}
}
B73f155:L73f155:{c.instructions+=1;NFSU2_TR(0x73f155);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
w2(U+4,u16(0x0ull));
s2(u32(r4(U+0)),r2(U+4));
}
B73f15b:L73f15b:{c.instructions+=3;NFSU2_TR(0x73f15b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B73f15c:{NFSU2_TR(0x73f15c);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B73f15e:{NFSU2_TR(0x73f15e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73f121u);}goto L73f121;}}
}
B73f160:L73f160:{c.instructions+=5;NFSU2_TR(0x73f160);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73f161:{NFSU2_TR(0x73f161);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73f162:{NFSU2_TR(0x73f162);
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
B73f164:{NFSU2_TR(0x73f164);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73f165:{NFSU2_TR(0x73f165);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73f166:L73f166:{c.instructions+=4;NFSU2_TR(0x73f166);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73f167:{NFSU2_TR(0x73f167);
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
B73f169:{NFSU2_TR(0x73f169);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73f16a:{NFSU2_TR(0x73f16a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73f170:L73f170:{c.instructions+=4;NFSU2_TR(0x73f170);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73f174:{NFSU2_TR(0x73f174);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f177:{NFSU2_TR(0x73f177);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73f17b:{NFSU2_TR(0x73f17b);
TAIL_STATIC(0x74dac0u,74d);
}
B73f180:L73f180:{c.instructions+=4;NFSU2_TR(0x73f180);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f181:{NFSU2_TR(0x73f181);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73f185:{NFSU2_TR(0x73f185);
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
B73f187:{NFSU2_TR(0x73f187);
if(r1(R+518)){{goto L73f18f;}}
}
B73f189:L73f189:{c.instructions+=2;NFSU2_TR(0x73f189);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x2ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B73f18d:{NFSU2_TR(0x73f18d);
if(r1(R+518)){{goto L73f196;}}
}
B73f18f:L73f18f:{c.instructions+=3;NFSU2_TR(0x73f18f);
w4(R+0,u32(0xfffffffcull));
}
B73f194:{NFSU2_TR(0x73f194);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73f195:{NFSU2_TR(0x73f195);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73f196:L73f196:{c.instructions+=5;NFSU2_TR(0x73f196);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f19a:{NFSU2_TR(0x73f19a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73f19d:{NFSU2_TR(0x73f19d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f19e:{NFSU2_TR(0x73f19e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f19f:{NFSU2_TR(0x73f19f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f1a4ull));
TAIL_STATIC(0x74da90u,74d);
}
B73f1a4:L73f1a4:{c.instructions+=4;NFSU2_TR(0x73f1a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f1a8:{NFSU2_TR(0x73f1a8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73f1ab:{NFSU2_TR(0x73f1ab);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73f1ae:{NFSU2_TR(0x73f1ae);
if(r1(R+518)){{goto L73f1bd;}}
}
B73f1b0:L73f1b0:{c.instructions+=4;NFSU2_TR(0x73f1b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73f1b3:{NFSU2_TR(0x73f1b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f1b4:{NFSU2_TR(0x73f1b4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f1b5:{NFSU2_TR(0x73f1b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f1baull));
TAIL_STATIC(0x74db00u,74d);
}
B73f1ba:L73f1ba:{c.instructions+=1;NFSU2_TR(0x73f1ba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73f1bd:L73f1bd:{c.instructions+=5;NFSU2_TR(0x73f1bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73f1c3:{NFSU2_TR(0x73f1c3);
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
B73f1c5:{NFSU2_TR(0x73f1c5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f1c9:{NFSU2_TR(0x73f1c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73f1cc:{NFSU2_TR(0x73f1cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73f1e2;}}
}
B73f1ce:L73f1ce:{c.instructions+=7;NFSU2_TR(0x73f1ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73f1d2:{NFSU2_TR(0x73f1d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73f1d5:{NFSU2_TR(0x73f1d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f1d6:{NFSU2_TR(0x73f1d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f1d7:{NFSU2_TR(0x73f1d7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f1d9:{NFSU2_TR(0x73f1d9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f1da:{NFSU2_TR(0x73f1da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f1dfull));
TAIL_STATIC(0x74db20u,74d);
}
B73f1df:L73f1df:{c.instructions+=1;NFSU2_TR(0x73f1df);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B73f1e2:L73f1e2:{c.instructions+=3;NFSU2_TR(0x73f1e2);
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
B73f1e4:{NFSU2_TR(0x73f1e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73f1e5:{NFSU2_TR(0x73f1e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73f1f0:L73f1f0:{c.instructions+=6;NFSU2_TR(0x73f1f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f1f4:{NFSU2_TR(0x73f1f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B73f1f6:{NFSU2_TR(0x73f1f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f1fc:{NFSU2_TR(0x73f1fc);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x4428c08ull))));
}
B73f201:{NFSU2_TR(0x73f201);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(u32(0x4000000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73f206:{NFSU2_TR(0x73f206);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L73f212;}}
}
B73f208:L73f208:{c.instructions+=1;NFSU2_TR(0x73f208);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf8ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfbbd73f7ull))));
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
B73f212:L73f212:{c.instructions+=1;NFSU2_TR(0x73f212);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73f220:L73f220:{c.instructions+=6;NFSU2_TR(0x73f220);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f221:{NFSU2_TR(0x73f221);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f222:{NFSU2_TR(0x73f222);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73f226:{NFSU2_TR(0x73f226);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B73f228:{NFSU2_TR(0x73f228);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B73f22a:{NFSU2_TR(0x73f22a);
if(r1(R+518)){{goto L73f2d4;}}
}
B73f230:L73f230:{c.instructions+=6;NFSU2_TR(0x73f230);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f233:{NFSU2_TR(0x73f233);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f234:{NFSU2_TR(0x73f234);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f235:{NFSU2_TR(0x73f235);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f236:{NFSU2_TR(0x73f236);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73f238:{NFSU2_TR(0x73f238);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f23dull));
TAIL_STATIC(0x74d3b0u,74d);
}
B73f23d:L73f23d:{c.instructions+=3;NFSU2_TR(0x73f23d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73f240:{NFSU2_TR(0x73f240);
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
B73f242:{NFSU2_TR(0x73f242);
if(r1(R+518)){{goto L73f258;}}
}
B73f244:L73f244:{c.instructions+=3;NFSU2_TR(0x73f244);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73f247:{NFSU2_TR(0x73f247);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f248:{NFSU2_TR(0x73f248);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f24dull));
TAIL_STATIC(0x74d3b0u,74d);
}
B73f24d:L73f24d:{c.instructions+=2;NFSU2_TR(0x73f24d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f24e:{NFSU2_TR(0x73f24e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f253ull));
TAIL_STATIC(0x73d8c0u,73d);
}
B73f253:L73f253:{c.instructions+=2;NFSU2_TR(0x73f253);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73f256:{NFSU2_TR(0x73f256);
__builtin_memmove((R+24),(R+0),4);
}
B73f258:L73f258:{c.instructions+=3;NFSU2_TR(0x73f258);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+12),(U+0),4);
}
B73f25b:{NFSU2_TR(0x73f25b);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
w1(R+512,u8((r4(R+12))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+6)));
w4(U+10,u32(u32(r4(R+12))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73f25d:{NFSU2_TR(0x73f25d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L73f2c3;}}
}
B73f25f:L73f25f:{c.instructions+=1;NFSU2_TR(0x73f25f);
}
B73f260:L73f260:{c.instructions+=3;NFSU2_TR(0x73f260);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73f263:{NFSU2_TR(0x73f263);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f264:{NFSU2_TR(0x73f264);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f269ull));
TAIL_STATIC(0x74d3b0u,74d);
}
B73f269:L73f269:{c.instructions+=3;NFSU2_TR(0x73f269);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73f26c:{NFSU2_TR(0x73f26c);
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
B73f26e:{NFSU2_TR(0x73f26e);
if(r1(R+518)){{goto L73f2c0;}}
}
B73f270:L73f270:{c.instructions+=4;NFSU2_TR(0x73f270);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f273:{NFSU2_TR(0x73f273);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f274:{NFSU2_TR(0x73f274);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f275:{NFSU2_TR(0x73f275);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f27aull));
TAIL_STATIC(0x74d3b0u,74d);
}
B73f27a:L73f27a:{c.instructions+=3;NFSU2_TR(0x73f27a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73f27d:{NFSU2_TR(0x73f27d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f27e:{NFSU2_TR(0x73f27e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f283ull));
TAIL_STATIC(0x73d8e0u,73d);
}
B73f283:L73f283:{c.instructions+=3;NFSU2_TR(0x73f283);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73f286:{NFSU2_TR(0x73f286);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73f288:{NFSU2_TR(0x73f288);
if(r1(R+518)){{goto L73f2c0;}}
}
B73f28a:L73f28a:{c.instructions+=3;NFSU2_TR(0x73f28a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73f290:{NFSU2_TR(0x73f290);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73f292:{NFSU2_TR(0x73f292);
if(r1(R+518)){{goto L73f2c0;}}
}
B73f294:L73f294:{c.instructions+=3;NFSU2_TR(0x73f294);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f295:{NFSU2_TR(0x73f295);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f296:{NFSU2_TR(0x73f296);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f29bull));
TAIL_STATIC(0x73ee20u,73e);
}
B73f29b:L73f29b:{c.instructions+=3;NFSU2_TR(0x73f29b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73f29e:{NFSU2_TR(0x73f29e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f29f:{NFSU2_TR(0x73f29f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f2a4ull));
TAIL_STATIC(0x73d710u,73d);
}
B73f2a4:L73f2a4:{c.instructions+=5;NFSU2_TR(0x73f2a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B73f2a6:{NFSU2_TR(0x73f2a6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B73f2a9:{NFSU2_TR(0x73f2a9);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B73f2ab:{NFSU2_TR(0x73f2ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73f2ae:{NFSU2_TR(0x73f2ae);
if(r1(R+518)){{goto L73f2b6;}}
}
B73f2b0:L73f2b0:{c.instructions+=1;NFSU2_TR(0x73f2b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73f2b6:L73f2b6:{c.instructions+=3;NFSU2_TR(0x73f2b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73f2b9:{NFSU2_TR(0x73f2b9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f2ba:{NFSU2_TR(0x73f2ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f2bdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B73f2bd:L73f2bd:{c.instructions+=1;NFSU2_TR(0x73f2bd);
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73f2c0:L73f2c0:{c.instructions+=2;NFSU2_TR(0x73f2c0);
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
B73f2c1:{NFSU2_TR(0x73f2c1);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73f260u);}goto L73f260;}}
}
B73f2c3:L73f2c3:{c.instructions+=3;NFSU2_TR(0x73f2c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f2c6:{NFSU2_TR(0x73f2c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f2c7:{NFSU2_TR(0x73f2c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f2ccull));
TAIL_STATIC(0x74d0c0u,74d);
}
B73f2cc:L73f2cc:{c.instructions+=4;NFSU2_TR(0x73f2cc);
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
B73f2cf:{NFSU2_TR(0x73f2cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73f2d0:{NFSU2_TR(0x73f2d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73f2d3:{NFSU2_TR(0x73f2d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73f2d4:L73f2d4:{c.instructions+=3;NFSU2_TR(0x73f2d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73f2d5:{NFSU2_TR(0x73f2d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73f2d6:{NFSU2_TR(0x73f2d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73f2e0:L73f2e0:{c.instructions+=5;NFSU2_TR(0x73f2e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f2e1:{NFSU2_TR(0x73f2e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73f2e5:{NFSU2_TR(0x73f2e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f2e8:{NFSU2_TR(0x73f2e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f2e9:{NFSU2_TR(0x73f2e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f2eeull));
TAIL_STATIC(0x74d3b0u,74d);
}
B73f2ee:L73f2ee:{c.instructions+=3;NFSU2_TR(0x73f2ee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73f2f1:{NFSU2_TR(0x73f2f1);
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
B73f2f3:{NFSU2_TR(0x73f2f3);
if(r1(R+518)){{goto L73f39e;}}
}
B73f2f9:L73f2f9:{c.instructions+=5;NFSU2_TR(0x73f2f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73f2fc:{NFSU2_TR(0x73f2fc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f2fd:{NFSU2_TR(0x73f2fd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f2fe:{NFSU2_TR(0x73f2fe);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73f300:{NFSU2_TR(0x73f300);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f305ull));
TAIL_STATIC(0x74d3b0u,74d);
}
B73f305:L73f305:{c.instructions+=3;NFSU2_TR(0x73f305);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73f308:{NFSU2_TR(0x73f308);
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
B73f30a:{NFSU2_TR(0x73f30a);
if(r1(R+518)){{goto L73f381;}}
}
B73f30c:L73f30c:{c.instructions+=4;NFSU2_TR(0x73f30c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73f30f:{NFSU2_TR(0x73f30f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f310:{NFSU2_TR(0x73f310);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f311:{NFSU2_TR(0x73f311);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f316ull));
TAIL_STATIC(0x74d3b0u,74d);
}
B73f316:L73f316:{c.instructions+=2;NFSU2_TR(0x73f316);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f317:{NFSU2_TR(0x73f317);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f31cull));
TAIL_STATIC(0x73d8c0u,73d);
}
B73f31c:L73f31c:{c.instructions+=4;NFSU2_TR(0x73f31c);
__builtin_memmove((R+20),(R+0),4);
}
B73f31e:{NFSU2_TR(0x73f31e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73f321:{NFSU2_TR(0x73f321);
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
B73f323:{NFSU2_TR(0x73f323);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L73f380;}}
}
B73f325:L73f325:{c.instructions+=1;NFSU2_TR(0x73f325);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f326:L73f326:{c.instructions+=4;NFSU2_TR(0x73f326);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f329:{NFSU2_TR(0x73f329);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f32a:{NFSU2_TR(0x73f32a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f32b:{NFSU2_TR(0x73f32b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f330ull));
TAIL_STATIC(0x74d3b0u,74d);
}
B73f330:L73f330:{c.instructions+=3;NFSU2_TR(0x73f330);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73f333:{NFSU2_TR(0x73f333);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f334:{NFSU2_TR(0x73f334);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f339ull));
TAIL_STATIC(0x73d8e0u,73d);
}
B73f339:L73f339:{c.instructions+=4;NFSU2_TR(0x73f339);
__builtin_memmove((R+28),(R+0),4);
}
B73f33b:{NFSU2_TR(0x73f33b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73f33e:{NFSU2_TR(0x73f33e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73f340:{NFSU2_TR(0x73f340);
if(r1(R+518)){{goto L73f356;}}
}
B73f342:L73f342:{c.instructions+=3;NFSU2_TR(0x73f342);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f348:{NFSU2_TR(0x73f348);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73f34a:{NFSU2_TR(0x73f34a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73f356;}}
}
B73f34c:L73f34c:{c.instructions+=3;NFSU2_TR(0x73f34c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f34d:{NFSU2_TR(0x73f34d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f34e:{NFSU2_TR(0x73f34e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f353ull));
TAIL_STATIC(0x73e750u,73e);
}
B73f353:L73f353:{c.instructions+=1;NFSU2_TR(0x73f353);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73f356:L73f356:{c.instructions+=3;NFSU2_TR(0x73f356);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f35c:{NFSU2_TR(0x73f35c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(r1(R+1))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B73f35e:{NFSU2_TR(0x73f35e);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L73f37a;}}
}
B73f360:L73f360:{c.instructions+=3;NFSU2_TR(0x73f360);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f363:{NFSU2_TR(0x73f363);
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
B73f365:{NFSU2_TR(0x73f365);
if(r1(R+518)){{goto L73f37a;}}
}
B73f367:L73f367:{c.instructions+=7;NFSU2_TR(0x73f367);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73f36a:{NFSU2_TR(0x73f36a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73f370:{NFSU2_TR(0x73f370);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f371:{NFSU2_TR(0x73f371);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f373:{NFSU2_TR(0x73f373);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f374:{NFSU2_TR(0x73f374);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f375:{NFSU2_TR(0x73f375);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f377ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B73f377:L73f377:{c.instructions+=1;NFSU2_TR(0x73f377);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B73f37a:L73f37a:{c.instructions+=3;NFSU2_TR(0x73f37a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B73f37b:{NFSU2_TR(0x73f37b);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
w1(R+512,u8((r4(R+12))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+6)));
w4(U+10,u32(u32(r4(R+12))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73f37d:{NFSU2_TR(0x73f37d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73f326u);}goto L73f326;}}
}
B73f37f:L73f37f:{c.instructions+=1;NFSU2_TR(0x73f37f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73f380:L73f380:{c.instructions+=1;NFSU2_TR(0x73f380);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73f381:L73f381:{c.instructions+=5;NFSU2_TR(0x73f381);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f384:{NFSU2_TR(0x73f384);
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
B73f386:{NFSU2_TR(0x73f386);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73f38d:{NFSU2_TR(0x73f38d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73f38e:{NFSU2_TR(0x73f38e);
if(r1(R+518)){{goto L73f39e;}}
}
B73f390:L73f390:{c.instructions+=6;NFSU2_TR(0x73f390);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73f393:{NFSU2_TR(0x73f393);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f394:{NFSU2_TR(0x73f394);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f396:{NFSU2_TR(0x73f396);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f398:{NFSU2_TR(0x73f398);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f399:{NFSU2_TR(0x73f399);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f39bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B73f39b:L73f39b:{c.instructions+=1;NFSU2_TR(0x73f39b);
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
B73f39e:L73f39e:{c.instructions+=2;NFSU2_TR(0x73f39e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73f39f:{NFSU2_TR(0x73f39f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73f3a0:L73f3a0:{c.instructions+=9;NFSU2_TR(0x73f3a0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f3a4:{NFSU2_TR(0x73f3a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73f3a8:{NFSU2_TR(0x73f3a8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f3a9:{NFSU2_TR(0x73f3a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73f3ad:{NFSU2_TR(0x73f3ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73f3b0:{NFSU2_TR(0x73f3b0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f3b1:{NFSU2_TR(0x73f3b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73f3b4:{NFSU2_TR(0x73f3b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73f3b7:{NFSU2_TR(0x73f3b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f3bcull));
TAIL_STATIC(0x74d3b0u,74d);
}
B73f3bc:L73f3bc:{c.instructions+=3;NFSU2_TR(0x73f3bc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73f3bf:{NFSU2_TR(0x73f3bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73f3c1:{NFSU2_TR(0x73f3c1);
if(r1(R+518)){{goto L73f3e2;}}
}
B73f3c3:L73f3c3:{c.instructions+=5;NFSU2_TR(0x73f3c3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f3c7:{NFSU2_TR(0x73f3c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73f3ca:{NFSU2_TR(0x73f3ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f3cb:{NFSU2_TR(0x73f3cb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f3cc:{NFSU2_TR(0x73f3cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f3d1ull));
TAIL_STATIC(0x74d8e0u,74d);
}
B73f3d1:L73f3d1:{c.instructions+=3;NFSU2_TR(0x73f3d1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73f3d4:{NFSU2_TR(0x73f3d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73f3d6:{NFSU2_TR(0x73f3d6);
if(r1(R+518)){{goto L73f3e2;}}
}
B73f3d8:L73f3d8:{c.instructions+=3;NFSU2_TR(0x73f3d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f3de:{NFSU2_TR(0x73f3de);
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
B73f3e0:{NFSU2_TR(0x73f3e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73f3e6;}}
}
B73f3e2:L73f3e2:{c.instructions+=3;NFSU2_TR(0x73f3e2);
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
B73f3e4:{NFSU2_TR(0x73f3e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73f3e5:{NFSU2_TR(0x73f3e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73f3e6:L73f3e6:{c.instructions+=3;NFSU2_TR(0x73f3e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B73f3e8:{NFSU2_TR(0x73f3e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73f3e9:{NFSU2_TR(0x73f3e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73f3f0:L73f3f0:{c.instructions+=14;NFSU2_TR(0x73f3f0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f3f1:{NFSU2_TR(0x73f3f1);
__builtin_memmove((R+20),(R+16),4);
}
B73f3f3:{NFSU2_TR(0x73f3f3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B73f3f6:{NFSU2_TR(0x73f3f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x13cull))));
}
B73f3fc:{NFSU2_TR(0x73f3fc);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B73f401:{NFSU2_TR(0x73f401);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f402:{NFSU2_TR(0x73f402);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f403:{NFSU2_TR(0x73f403);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73f406:{NFSU2_TR(0x73f406);
u8 U[8];
w4(U+0,u32(u32(u32(0x140ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73f40d:{NFSU2_TR(0x73f40d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f410:{NFSU2_TR(0x73f410);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B73f412:{NFSU2_TR(0x73f412);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73f415:{NFSU2_TR(0x73f415);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f416:{NFSU2_TR(0x73f416);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73f430;}}
}
B73f418:L73f418:{c.instructions+=3;NFSU2_TR(0x73f418);
w4(R+0,u32(0xffffff92ull));
}
B73f41d:{NFSU2_TR(0x73f41d);
u8 U[8];
w4(U+0,u32(u32(u32(0x144ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73f424:{NFSU2_TR(0x73f424);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f429ull));
TAIL_STATIC(0x76115eu,761);
}
B73f429:L73f429:{c.instructions+=6;NFSU2_TR(0x73f429);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73f42a:{NFSU2_TR(0x73f42a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73f42b:{NFSU2_TR(0x73f42b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73f42c:{NFSU2_TR(0x73f42c);
__builtin_memmove((R+16),(R+20),4);
}
B73f42e:{NFSU2_TR(0x73f42e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73f42f:{NFSU2_TR(0x73f42f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73f430:L73f430:{c.instructions+=2;NFSU2_TR(0x73f430);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B73f434:{NFSU2_TR(0x73f434);
if(r1(R+518)){{goto L73f44e;}}
}
B73f436:L73f436:{c.instructions+=3;NFSU2_TR(0x73f436);
w4(R+0,u32(0xfffffffcull));
}
B73f43b:{NFSU2_TR(0x73f43b);
u8 U[8];
w4(U+0,u32(u32(u32(0x144ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73f442:{NFSU2_TR(0x73f442);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f447ull));
TAIL_STATIC(0x76115eu,761);
}
B73f447:L73f447:{c.instructions+=6;NFSU2_TR(0x73f447);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73f448:{NFSU2_TR(0x73f448);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73f449:{NFSU2_TR(0x73f449);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73f44a:{NFSU2_TR(0x73f44a);
__builtin_memmove((R+16),(R+20),4);
}
B73f44c:{NFSU2_TR(0x73f44c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73f44d:{NFSU2_TR(0x73f44d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73f44e:L73f44e:{c.instructions+=3;NFSU2_TR(0x73f44e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B73f450:{NFSU2_TR(0x73f450);
w4(R+4,u32(0x42ull));
}
B73f455:{NFSU2_TR(0x73f455);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B73f459:L73f459:{c.instructions+=1;NFSU2_TR(0x73f459);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L73f45b;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73f459u);}goto L73f459;}
}
B73f45b:L73f45b:{c.instructions+=6;NFSU2_TR(0x73f45b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73f45e:{NFSU2_TR(0x73f45e);
u8 U[4];
w4(U+0,u32(0x21ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f460:{NFSU2_TR(0x73f460);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B73f464:{NFSU2_TR(0x73f464);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f465:{NFSU2_TR(0x73f465);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f466:{NFSU2_TR(0x73f466);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f46bull));
TAIL_STATIC(0x75c840u,75c);
}
B73f46b:L73f46b:{c.instructions+=5;NFSU2_TR(0x73f46b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73f46e:{NFSU2_TR(0x73f46e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f46f:{NFSU2_TR(0x73f46f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f470:{NFSU2_TR(0x73f470);
u8 U[8];
w4(U+0,u32(u32(u32(0x144ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73f477:{NFSU2_TR(0x73f477);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f47cull));
TAIL_STATIC(0x73eea0u,73e);
}
B73f47c:L73f47c:{c.instructions+=3;NFSU2_TR(0x73f47c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B73f47f:{NFSU2_TR(0x73f47f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73f481:{NFSU2_TR(0x73f481);
if(r1(R+518)){{goto L73f559;}}
}
B73f487:L73f487:{c.instructions+=4;NFSU2_TR(0x73f487);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B73f489:{NFSU2_TR(0x73f489);
u8 U[8];
w4(U+0,u32(u32(u32(0x130ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73f490:{NFSU2_TR(0x73f490);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B73f496:{NFSU2_TR(0x73f496);
if(r1(R+518)){{goto L73f559;}}
}
B73f49c:L73f49c:{c.instructions+=2;NFSU2_TR(0x73f49c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B73f4a0:{NFSU2_TR(0x73f4a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73f4b8;}}
}
B73f4a2:L73f4a2:{c.instructions+=3;NFSU2_TR(0x73f4a2);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B73f4a5:{NFSU2_TR(0x73f4a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x144ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73f4ac:{NFSU2_TR(0x73f4ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f4b1ull));
TAIL_STATIC(0x76115eu,761);
}
B73f4b1:L73f4b1:{c.instructions+=6;NFSU2_TR(0x73f4b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73f4b2:{NFSU2_TR(0x73f4b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73f4b3:{NFSU2_TR(0x73f4b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73f4b4:{NFSU2_TR(0x73f4b4);
__builtin_memmove((R+16),(R+20),4);
}
B73f4b6:{NFSU2_TR(0x73f4b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73f4b7:{NFSU2_TR(0x73f4b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73f4b8:L73f4b8:{c.instructions+=3;NFSU2_TR(0x73f4b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73f4bb:{NFSU2_TR(0x73f4bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73f4bd:{NFSU2_TR(0x73f4bd);
if(r1(R+518)){{goto L73f4c8;}}
}
B73f4bf:L73f4bf:{c.instructions+=3;NFSU2_TR(0x73f4bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73f4c2:{NFSU2_TR(0x73f4c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73f4c5:{NFSU2_TR(0x73f4c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73f4c8:L73f4c8:{c.instructions+=6;NFSU2_TR(0x73f4c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B73f4ca:{NFSU2_TR(0x73f4ca);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f4cc:{NFSU2_TR(0x73f4cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f4cd:{NFSU2_TR(0x73f4cd);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B73f4d1:{NFSU2_TR(0x73f4d1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f4d2:{NFSU2_TR(0x73f4d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f4d7ull));
TAIL_STATIC(0x75c840u,75c);
}
B73f4d7:L73f4d7:{c.instructions+=4;NFSU2_TR(0x73f4d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73f4da:{NFSU2_TR(0x73f4da);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B73f4dd:{NFSU2_TR(0x73f4dd);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73f4e3:{NFSU2_TR(0x73f4e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73f4f0;}}
}
B73f4e5:L73f4e5:{c.instructions+=1;NFSU2_TR(0x73f4e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x130ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x800000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B73f4f0:L73f4f0:{c.instructions+=9;NFSU2_TR(0x73f4f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73f4f6:{NFSU2_TR(0x73f4f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73f4f9:{NFSU2_TR(0x73f4f9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f4fa:{NFSU2_TR(0x73f4fa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f4fb:{NFSU2_TR(0x73f4fb);
u8 U[4];
w4(U+0,u32(0x73e680ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f500:{NFSU2_TR(0x73f500);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B73f504:{NFSU2_TR(0x73f504);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f505:{NFSU2_TR(0x73f505);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f506:{NFSU2_TR(0x73f506);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f50bull));
TAIL_STATIC(0x74d660u,74d);
}
B73f50b:L73f50b:{c.instructions+=5;NFSU2_TR(0x73f50b);
__builtin_memmove((R+12),(R+0),4);
}
B73f50d:{NFSU2_TR(0x73f50d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B73f50f:{NFSU2_TR(0x73f50f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B73f512:{NFSU2_TR(0x73f512);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73f514:{NFSU2_TR(0x73f514);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73f51f;}}
}
B73f516:L73f516:{c.instructions+=2;NFSU2_TR(0x73f516);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B73f51d:{NFSU2_TR(0x73f51d);
{goto L73f522;}
}
B73f51f:L73f51f:{c.instructions+=1;NFSU2_TR(0x73f51f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73f522:L73f522:{c.instructions+=2;NFSU2_TR(0x73f522);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73f524:{NFSU2_TR(0x73f524);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73f559;}}
}
B73f526:L73f526:{c.instructions+=2;NFSU2_TR(0x73f526);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73f52c:{NFSU2_TR(0x73f52c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73f550;}}
}
B73f52e:L73f52e:{c.instructions+=9;NFSU2_TR(0x73f52e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f52f:{NFSU2_TR(0x73f52f);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B73f533:{NFSU2_TR(0x73f533);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73f537:{NFSU2_TR(0x73f537);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73f53b:{NFSU2_TR(0x73f53b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f53e:{NFSU2_TR(0x73f53e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f53f:{NFSU2_TR(0x73f53f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f540:{NFSU2_TR(0x73f540);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x64656c75ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73f548:{NFSU2_TR(0x73f548);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f54dull));
TAIL_STATIC(0x73e680u,73e);
}
B73f54d:L73f54d:{c.instructions+=1;NFSU2_TR(0x73f54d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B73f550:L73f550:{c.instructions+=2;NFSU2_TR(0x73f550);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f551:{NFSU2_TR(0x73f551);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f556ull));
TAIL_STATIC(0x73e570u,73e);
}
B73f556:L73f556:{c.instructions+=1;NFSU2_TR(0x73f556);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73f559:L73f559:{c.instructions+=3;NFSU2_TR(0x73f559);
u8 U[8];
w4(U+0,u32(u32(u32(0x144ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73f560:{NFSU2_TR(0x73f560);
__builtin_memmove((R+0),(R+12),4);
}
B73f562:{NFSU2_TR(0x73f562);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f567ull));
TAIL_STATIC(0x76115eu,761);
}
B73f567:L73f567:{c.instructions+=6;NFSU2_TR(0x73f567);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73f568:{NFSU2_TR(0x73f568);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73f569:{NFSU2_TR(0x73f569);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73f56a:{NFSU2_TR(0x73f56a);
__builtin_memmove((R+16),(R+20),4);
}
B73f56c:{NFSU2_TR(0x73f56c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73f56d:{NFSU2_TR(0x73f56d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73f570:L73f570:{c.instructions+=9;NFSU2_TR(0x73f570);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f571:{NFSU2_TR(0x73f571);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f572:{NFSU2_TR(0x73f572);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f573:{NFSU2_TR(0x73f573);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73f577:{NFSU2_TR(0x73f577);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f57a:{NFSU2_TR(0x73f57a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f57b:{NFSU2_TR(0x73f57b);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B73f57d:{NFSU2_TR(0x73f57d);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73f57f:{NFSU2_TR(0x73f57f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f584ull));
TAIL_STATIC(0x74d3b0u,74d);
}
B73f584:L73f584:{c.instructions+=3;NFSU2_TR(0x73f584);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73f587:{NFSU2_TR(0x73f587);
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
B73f589:{NFSU2_TR(0x73f589);
if(r1(R+518)){{goto L73f5f7;}}
}
B73f58b:L73f58b:{c.instructions+=4;NFSU2_TR(0x73f58b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73f58e:{NFSU2_TR(0x73f58e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f58f:{NFSU2_TR(0x73f58f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f590:{NFSU2_TR(0x73f590);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f595ull));
TAIL_STATIC(0x74d3b0u,74d);
}
B73f595:L73f595:{c.instructions+=2;NFSU2_TR(0x73f595);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f596:{NFSU2_TR(0x73f596);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f59bull));
TAIL_STATIC(0x73d8c0u,73d);
}
B73f59b:L73f59b:{c.instructions+=4;NFSU2_TR(0x73f59b);
__builtin_memmove((R+12),(R+0),4);
}
B73f59d:{NFSU2_TR(0x73f59d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73f5a0:{NFSU2_TR(0x73f5a0);
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
B73f5a2:{NFSU2_TR(0x73f5a2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L73f5f0;}}
}
B73f5a4:L73f5a4:{c.instructions+=3;NFSU2_TR(0x73f5a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73f5a7:{NFSU2_TR(0x73f5a7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f5a8:{NFSU2_TR(0x73f5a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f5adull));
TAIL_STATIC(0x74d3b0u,74d);
}
B73f5ad:L73f5ad:{c.instructions+=3;NFSU2_TR(0x73f5ad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73f5b0:{NFSU2_TR(0x73f5b0);
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
B73f5b2:{NFSU2_TR(0x73f5b2);
if(r1(R+518)){{goto L73f5eb;}}
}
B73f5b4:L73f5b4:{c.instructions+=4;NFSU2_TR(0x73f5b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f5b7:{NFSU2_TR(0x73f5b7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f5b8:{NFSU2_TR(0x73f5b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f5b9:{NFSU2_TR(0x73f5b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f5beull));
TAIL_STATIC(0x74d3b0u,74d);
}
B73f5be:L73f5be:{c.instructions+=3;NFSU2_TR(0x73f5be);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73f5c1:{NFSU2_TR(0x73f5c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f5c2:{NFSU2_TR(0x73f5c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f5c7ull));
TAIL_STATIC(0x73d8e0u,73d);
}
B73f5c7:L73f5c7:{c.instructions+=3;NFSU2_TR(0x73f5c7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73f5ca:{NFSU2_TR(0x73f5ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73f5cc:{NFSU2_TR(0x73f5cc);
if(r1(R+518)){{goto L73f5eb;}}
}
B73f5ce:L73f5ce:{c.instructions+=3;NFSU2_TR(0x73f5ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f5d4:{NFSU2_TR(0x73f5d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73f5d6:{NFSU2_TR(0x73f5d6);
if(r1(R+518)){{goto L73f5eb;}}
}
B73f5d8:L73f5d8:{c.instructions+=3;NFSU2_TR(0x73f5d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B73f5da:{NFSU2_TR(0x73f5da);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73f5dc:{NFSU2_TR(0x73f5dc);
if(r1(R+518)){{goto L73f5eb;}}
}
B73f5de:L73f5de:{c.instructions+=3;NFSU2_TR(0x73f5de);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73f5e2:{NFSU2_TR(0x73f5e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
w1(R+512,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B73f5e8:{NFSU2_TR(0x73f5e8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L73f5eb;}}
}
B73f5ea:L73f5ea:{c.instructions+=1;NFSU2_TR(0x73f5ea);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B73f5eb:L73f5eb:{c.instructions+=3;NFSU2_TR(0x73f5eb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B73f5ec:{NFSU2_TR(0x73f5ec);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B73f5ee:{NFSU2_TR(0x73f5ee);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73f5a4u);}goto L73f5a4;}}
}
B73f5f0:L73f5f0:{c.instructions+=6;NFSU2_TR(0x73f5f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73f5f1:{NFSU2_TR(0x73f5f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73f5f2:{NFSU2_TR(0x73f5f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73f5f3:{NFSU2_TR(0x73f5f3);
__builtin_memmove((R+0),(R+20),4);
}
B73f5f5:{NFSU2_TR(0x73f5f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73f5f6:{NFSU2_TR(0x73f5f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73f5f7:L73f5f7:{c.instructions+=5;NFSU2_TR(0x73f5f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73f5f8:{NFSU2_TR(0x73f5f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73f5f9:{NFSU2_TR(0x73f5f9);
__builtin_memmove((R+0),(R+20),4);
}
B73f5fb:{NFSU2_TR(0x73f5fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73f5fc:{NFSU2_TR(0x73f5fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73f600:L73f600:{c.instructions+=7;NFSU2_TR(0x73f600);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f601:{NFSU2_TR(0x73f601);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f602:{NFSU2_TR(0x73f602);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73f606:{NFSU2_TR(0x73f606);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f609:{NFSU2_TR(0x73f609);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f60a:{NFSU2_TR(0x73f60a);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73f60c:{NFSU2_TR(0x73f60c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f611ull));
TAIL_STATIC(0x74d3b0u,74d);
}
B73f611:L73f611:{c.instructions+=3;NFSU2_TR(0x73f611);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73f614:{NFSU2_TR(0x73f614);
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
B73f616:{NFSU2_TR(0x73f616);
if(r1(R+518)){{goto L73f677;}}
}
B73f618:L73f618:{c.instructions+=4;NFSU2_TR(0x73f618);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73f61b:{NFSU2_TR(0x73f61b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f61c:{NFSU2_TR(0x73f61c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f61d:{NFSU2_TR(0x73f61d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f622ull));
TAIL_STATIC(0x74d3b0u,74d);
}
B73f622:L73f622:{c.instructions+=2;NFSU2_TR(0x73f622);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f623:{NFSU2_TR(0x73f623);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f628ull));
TAIL_STATIC(0x73d8c0u,73d);
}
B73f628:L73f628:{c.instructions+=4;NFSU2_TR(0x73f628);
__builtin_memmove((R+12),(R+0),4);
}
B73f62a:{NFSU2_TR(0x73f62a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73f62d:{NFSU2_TR(0x73f62d);
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
B73f62f:{NFSU2_TR(0x73f62f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L73f676;}}
}
B73f631:L73f631:{c.instructions+=3;NFSU2_TR(0x73f631);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73f634:{NFSU2_TR(0x73f634);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f635:{NFSU2_TR(0x73f635);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f63aull));
TAIL_STATIC(0x74d3b0u,74d);
}
B73f63a:L73f63a:{c.instructions+=3;NFSU2_TR(0x73f63a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73f63d:{NFSU2_TR(0x73f63d);
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
B73f63f:{NFSU2_TR(0x73f63f);
if(r1(R+518)){{goto L73f671;}}
}
B73f641:L73f641:{c.instructions+=4;NFSU2_TR(0x73f641);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f644:{NFSU2_TR(0x73f644);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f645:{NFSU2_TR(0x73f645);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f646:{NFSU2_TR(0x73f646);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f64bull));
TAIL_STATIC(0x74d3b0u,74d);
}
B73f64b:L73f64b:{c.instructions+=3;NFSU2_TR(0x73f64b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73f64e:{NFSU2_TR(0x73f64e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f64f:{NFSU2_TR(0x73f64f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f654ull));
TAIL_STATIC(0x73d8e0u,73d);
}
B73f654:L73f654:{c.instructions+=3;NFSU2_TR(0x73f654);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73f657:{NFSU2_TR(0x73f657);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73f659:{NFSU2_TR(0x73f659);
if(r1(R+518)){{goto L73f671;}}
}
B73f65b:L73f65b:{c.instructions+=3;NFSU2_TR(0x73f65b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f661:{NFSU2_TR(0x73f661);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73f663:{NFSU2_TR(0x73f663);
if(r1(R+518)){{goto L73f671;}}
}
B73f665:L73f665:{c.instructions+=2;NFSU2_TR(0x73f665);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B73f667:{NFSU2_TR(0x73f667);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffdffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B73f671:L73f671:{c.instructions+=3;NFSU2_TR(0x73f671);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B73f672:{NFSU2_TR(0x73f672);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B73f674:{NFSU2_TR(0x73f674);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73f631u);}goto L73f631;}}
}
B73f676:L73f676:{c.instructions+=1;NFSU2_TR(0x73f676);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73f677:L73f677:{c.instructions+=3;NFSU2_TR(0x73f677);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73f678:{NFSU2_TR(0x73f678);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73f679:{NFSU2_TR(0x73f679);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73f680:L73f680:{c.instructions+=8;NFSU2_TR(0x73f680);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f681:{NFSU2_TR(0x73f681);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f682:{NFSU2_TR(0x73f682);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73f686:{NFSU2_TR(0x73f686);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B73f68a:{NFSU2_TR(0x73f68a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f68b:{NFSU2_TR(0x73f68b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f68d:{NFSU2_TR(0x73f68d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f68e:{NFSU2_TR(0x73f68e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f693ull));
TAIL_STATIC(0x73e880u,73e);
}
B73f693:L73f693:{c.instructions+=3;NFSU2_TR(0x73f693);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B73f696:{NFSU2_TR(0x73f696);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xffffffffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73f699:{NFSU2_TR(0x73f699);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L73f6b0;}}
}
B73f69b:L73f69b:{c.instructions+=5;NFSU2_TR(0x73f69b);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B73f69f:{NFSU2_TR(0x73f69f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f6a0:{NFSU2_TR(0x73f6a0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f6a2:{NFSU2_TR(0x73f6a2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f6a3:{NFSU2_TR(0x73f6a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f6a8ull));
TAIL_STATIC(0x73e880u,73e);
}
B73f6a8:L73f6a8:{c.instructions+=3;NFSU2_TR(0x73f6a8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B73f6ab:{NFSU2_TR(0x73f6ab);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xffffffffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73f6ae:{NFSU2_TR(0x73f6ae);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L73f6bf;}}
}
B73f6b0:L73f6b0:{c.instructions+=3;NFSU2_TR(0x73f6b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f6b1:{NFSU2_TR(0x73f6b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f6b2:{NFSU2_TR(0x73f6b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f6b7ull));
TAIL_STATIC(0x73edd0u,73e);
}
B73f6b7:L73f6b7:{c.instructions+=5;NFSU2_TR(0x73f6b7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73f6ba:{NFSU2_TR(0x73f6ba);
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
B73f6bc:{NFSU2_TR(0x73f6bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73f6bd:{NFSU2_TR(0x73f6bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B73f6be:{NFSU2_TR(0x73f6be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73f6bf:L73f6bf:{c.instructions+=4;NFSU2_TR(0x73f6bf);
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
B73f6c2:{NFSU2_TR(0x73f6c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73f6c3:{NFSU2_TR(0x73f6c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B73f6c4:{NFSU2_TR(0x73f6c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73f6d0:L73f6d0:{c.instructions+=8;NFSU2_TR(0x73f6d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f6d1:{NFSU2_TR(0x73f6d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73f6d5:{NFSU2_TR(0x73f6d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f6db:{NFSU2_TR(0x73f6db);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73f6dd:{NFSU2_TR(0x73f6dd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f6de:{NFSU2_TR(0x73f6de);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73f6e2:{NFSU2_TR(0x73f6e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73f6e8:{NFSU2_TR(0x73f6e8);
if(r1(R+518)){{goto L73f6f5;}}
}
B73f6ea:L73f6ea:{c.instructions+=3;NFSU2_TR(0x73f6ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B73f6ec:{NFSU2_TR(0x73f6ec);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B73f6f3:{NFSU2_TR(0x73f6f3);
{goto L73f6f7;}
}
B73f6f5:L73f6f5:{c.instructions+=1;NFSU2_TR(0x73f6f5);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B73f6f7:L73f6f7:{c.instructions+=2;NFSU2_TR(0x73f6f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73f6f9:{NFSU2_TR(0x73f6f9);
if(r1(R+518)){{goto L73f706;}}
}
B73f6fb:L73f6fb:{c.instructions+=3;NFSU2_TR(0x73f6fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B73f6fd:{NFSU2_TR(0x73f6fd);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xf7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B73f704:{NFSU2_TR(0x73f704);
{goto L73f708;}
}
B73f706:L73f706:{c.instructions+=1;NFSU2_TR(0x73f706);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B73f708:L73f708:{c.instructions+=2;NFSU2_TR(0x73f708);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B73f70a:{NFSU2_TR(0x73f70a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73f719;}}
}
B73f70c:L73f70c:{c.instructions+=3;NFSU2_TR(0x73f70c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f70d:{NFSU2_TR(0x73f70d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f70e:{NFSU2_TR(0x73f70e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f713ull));
TAIL_STATIC(0x75dd6fu,75d);
}
B73f713:L73f713:{c.instructions+=4;NFSU2_TR(0x73f713);
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
B73f716:{NFSU2_TR(0x73f716);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73f717:{NFSU2_TR(0x73f717);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73f718:{NFSU2_TR(0x73f718);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73f719:L73f719:{c.instructions+=2;NFSU2_TR(0x73f719);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73f71c:{NFSU2_TR(0x73f71c);
if(r1(R+518)){{goto L73f733;}}
}
B73f71e:L73f71e:{c.instructions+=2;NFSU2_TR(0x73f71e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73f721:{NFSU2_TR(0x73f721);
if(r1(R+518)){{goto L73f733;}}
}
B73f723:L73f723:{c.instructions+=8;NFSU2_TR(0x73f723);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B73f725:{NFSU2_TR(0x73f725);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B73f727:{NFSU2_TR(0x73f727);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+8),(U+1),1);
}
B73f72a:{NFSU2_TR(0x73f72a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73f72b:{NFSU2_TR(0x73f72b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73f72c:{NFSU2_TR(0x73f72c);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B73f730:{NFSU2_TR(0x73f730);
__builtin_memmove((R+0),(R+8),4);
}
B73f732:{NFSU2_TR(0x73f732);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73f733:L73f733:{c.instructions+=7;NFSU2_TR(0x73f733);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B73f735:{NFSU2_TR(0x73f735);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B73f738:{NFSU2_TR(0x73f738);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B73f73b:{NFSU2_TR(0x73f73b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73f73c:{NFSU2_TR(0x73f73c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73f73d:{NFSU2_TR(0x73f73d);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B73f741:{NFSU2_TR(0x73f741);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73f750:L73f750:{c.instructions+=3;NFSU2_TR(0x73f750);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f754:{NFSU2_TR(0x73f754);
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
B73f756:{NFSU2_TR(0x73f756);
if(r1(R+518)){{goto L73f799;}}
}
B73f758:L73f758:{c.instructions+=4;NFSU2_TR(0x73f758);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f759:{NFSU2_TR(0x73f759);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73f75f:{NFSU2_TR(0x73f75f);
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
B73f761:{NFSU2_TR(0x73f761);
if(r1(R+518)){{goto L73f798;}}
}
B73f763:L73f763:{c.instructions+=3;NFSU2_TR(0x73f763);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f765:{NFSU2_TR(0x73f765);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f766:{NFSU2_TR(0x73f766);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f76bull));
TAIL_STATIC(0x73ee20u,73e);
}
B73f76b:L73f76b:{c.instructions+=3;NFSU2_TR(0x73f76b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f76e:{NFSU2_TR(0x73f76e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f76f:{NFSU2_TR(0x73f76f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f774ull));
TAIL_STATIC(0x73d710u,73d);
}
B73f774:L73f774:{c.instructions+=5;NFSU2_TR(0x73f774);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B73f776:{NFSU2_TR(0x73f776);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B73f779:{NFSU2_TR(0x73f779);
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
B73f77b:{NFSU2_TR(0x73f77b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73f782:{NFSU2_TR(0x73f782);
if(r1(R+518)){{goto L73f78e;}}
}
B73f784:L73f784:{c.instructions+=1;NFSU2_TR(0x73f784);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73f78e:L73f78e:{c.instructions+=3;NFSU2_TR(0x73f78e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73f791:{NFSU2_TR(0x73f791);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f792:{NFSU2_TR(0x73f792);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f795ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B73f795:L73f795:{c.instructions+=1;NFSU2_TR(0x73f795);
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
B73f798:L73f798:{c.instructions+=1;NFSU2_TR(0x73f798);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73f799:L73f799:{c.instructions+=1;NFSU2_TR(0x73f799);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73f7a0:L73f7a0:{c.instructions+=4;NFSU2_TR(0x73f7a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f7a1:{NFSU2_TR(0x73f7a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73f7a5:{NFSU2_TR(0x73f7a5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f7a6:{NFSU2_TR(0x73f7a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f7abull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73f220u);}goto L73f220;}
}
B73f7ab:L73f7ab:{c.instructions+=3;NFSU2_TR(0x73f7ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f7ae:{NFSU2_TR(0x73f7ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f7af:{NFSU2_TR(0x73f7af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f7b4ull));
TAIL_STATIC(0x74e020u,74e);
}
B73f7b4:L73f7b4:{c.instructions+=6;NFSU2_TR(0x73f7b4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B73f7b6:{NFSU2_TR(0x73f7b6);
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
B73f7b9:{NFSU2_TR(0x73f7b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73f7bc:{NFSU2_TR(0x73f7bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73f7bf:{NFSU2_TR(0x73f7bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73f7c0:{NFSU2_TR(0x73f7c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73f7d0:L73f7d0:{c.instructions+=4;NFSU2_TR(0x73f7d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f7d1:{NFSU2_TR(0x73f7d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73f7d5:{NFSU2_TR(0x73f7d5);
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
B73f7d7:{NFSU2_TR(0x73f7d7);
if(r1(R+518)){{goto L73f806;}}
}
B73f7d9:L73f7d9:{c.instructions+=3;NFSU2_TR(0x73f7d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f7dc:{NFSU2_TR(0x73f7dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73f7de:{NFSU2_TR(0x73f7de);
if(r1(R+518)){{goto L73f7e9;}}
}
B73f7e0:L73f7e0:{c.instructions+=2;NFSU2_TR(0x73f7e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f7e1:{NFSU2_TR(0x73f7e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f7e6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73f220u);}goto L73f220;}
}
B73f7e6:L73f7e6:{c.instructions+=1;NFSU2_TR(0x73f7e6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73f7e9:L73f7e9:{c.instructions+=3;NFSU2_TR(0x73f7e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f7ec:{NFSU2_TR(0x73f7ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73f7ee:{NFSU2_TR(0x73f7ee);
if(r1(R+518)){{goto L73f7f9;}}
}
B73f7f0:L73f7f0:{c.instructions+=2;NFSU2_TR(0x73f7f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f7f1:{NFSU2_TR(0x73f7f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f7f6ull));
TAIL_STATIC(0x74e4b0u,74e);
}
B73f7f6:L73f7f6:{c.instructions+=1;NFSU2_TR(0x73f7f6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73f7f9:L73f7f9:{c.instructions+=2;NFSU2_TR(0x73f7f9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f7fa:{NFSU2_TR(0x73f7fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f7ffull));
TAIL_STATIC(0x73e5c0u,73e);
}
B73f7ff:L73f7ff:{c.instructions+=2;NFSU2_TR(0x73f7ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f800:{NFSU2_TR(0x73f800);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f803ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B73f803:L73f803:{c.instructions+=1;NFSU2_TR(0x73f803);
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
B73f806:L73f806:{c.instructions+=2;NFSU2_TR(0x73f806);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73f807:{NFSU2_TR(0x73f807);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73f810:L73f810:{c.instructions+=7;NFSU2_TR(0x73f810);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f811:{NFSU2_TR(0x73f811);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73f815:{NFSU2_TR(0x73f815);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f81b:{NFSU2_TR(0x73f81b);
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
B73f81d:{NFSU2_TR(0x73f81d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73f824:{NFSU2_TR(0x73f824);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73f82b:{NFSU2_TR(0x73f82b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73f842;}}
}
B73f82d:L73f82d:{c.instructions+=6;NFSU2_TR(0x73f82d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f830:{NFSU2_TR(0x73f830);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f832:{NFSU2_TR(0x73f832);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f834:{NFSU2_TR(0x73f834);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f839:{NFSU2_TR(0x73f839);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f83a:{NFSU2_TR(0x73f83a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f83full));
TAIL_STATIC(0x74db20u,74d);
}
B73f83f:L73f83f:{c.instructions+=1;NFSU2_TR(0x73f83f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B73f842:L73f842:{c.instructions+=2;NFSU2_TR(0x73f842);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f843:{NFSU2_TR(0x73f843);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f848ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73f220u);}goto L73f220;}
}
B73f848:L73f848:{c.instructions+=5;NFSU2_TR(0x73f848);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73f84b:{NFSU2_TR(0x73f84b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73f852:{NFSU2_TR(0x73f852);
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
B73f854:{NFSU2_TR(0x73f854);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73f855:{NFSU2_TR(0x73f855);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73f860:L73f860:{c.instructions+=4;NFSU2_TR(0x73f860);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f861:{NFSU2_TR(0x73f861);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73f865:{NFSU2_TR(0x73f865);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B73f869:{NFSU2_TR(0x73f869);
if(r1(R+518)){{goto L73f86f;}}
}
B73f86b:L73f86b:{c.instructions+=3;NFSU2_TR(0x73f86b);
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
B73f86d:{NFSU2_TR(0x73f86d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73f86e:{NFSU2_TR(0x73f86e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73f86f:L73f86f:{c.instructions+=7;NFSU2_TR(0x73f86f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f872:{NFSU2_TR(0x73f872);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f873:{NFSU2_TR(0x73f873);
u8 U[4];
w4(U+0,u32(0x73f2e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f878:{NFSU2_TR(0x73f878);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f879:{NFSU2_TR(0x73f879);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73f880:{NFSU2_TR(0x73f880);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73f887:{NFSU2_TR(0x73f887);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f88cull));
TAIL_STATIC(0x74d1b0u,74d);
}
B73f88c:L73f88c:{c.instructions+=4;NFSU2_TR(0x73f88c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f892:{NFSU2_TR(0x73f892);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B73f895:{NFSU2_TR(0x73f895);
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
B73f897:{NFSU2_TR(0x73f897);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73f8ad;}}
}
B73f899:L73f899:{c.instructions+=7;NFSU2_TR(0x73f899);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73f89c:{NFSU2_TR(0x73f89c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73f89f:{NFSU2_TR(0x73f89f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f8a1:{NFSU2_TR(0x73f8a1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f8a2:{NFSU2_TR(0x73f8a2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f8a4:{NFSU2_TR(0x73f8a4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f8a5:{NFSU2_TR(0x73f8a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f8aaull));
TAIL_STATIC(0x74db20u,74d);
}
B73f8aa:L73f8aa:{c.instructions+=1;NFSU2_TR(0x73f8aa);
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
B73f8ad:L73f8ad:{c.instructions+=5;NFSU2_TR(0x73f8ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f8b0:{NFSU2_TR(0x73f8b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73f8b7:{NFSU2_TR(0x73f8b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73f8b8:{NFSU2_TR(0x73f8b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73f8bc:{NFSU2_TR(0x73f8bc);
TAIL_STATIC(0x74d3b0u,74d);
}
B73f8d0:L73f8d0:{c.instructions+=10;NFSU2_TR(0x73f8d0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f8d4:{NFSU2_TR(0x73f8d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73f8d8:{NFSU2_TR(0x73f8d8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f8d9:{NFSU2_TR(0x73f8d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73f8dd:{NFSU2_TR(0x73f8dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73f8e0:{NFSU2_TR(0x73f8e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f8e1:{NFSU2_TR(0x73f8e1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f8e2:{NFSU2_TR(0x73f8e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73f8e5:{NFSU2_TR(0x73f8e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73f8e8:{NFSU2_TR(0x73f8e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f8edull));
TAIL_STATIC(0x74d3b0u,74d);
}
B73f8ed:L73f8ed:{c.instructions+=4;NFSU2_TR(0x73f8ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73f8f1:{NFSU2_TR(0x73f8f1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73f8f4:{NFSU2_TR(0x73f8f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73f8f6:{NFSU2_TR(0x73f8f6);
if(r1(R+518)){{goto L73f905;}}
}
B73f8f8:L73f8f8:{c.instructions+=4;NFSU2_TR(0x73f8f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f8fb:{NFSU2_TR(0x73f8fb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f8fc:{NFSU2_TR(0x73f8fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f8fd:{NFSU2_TR(0x73f8fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f902ull));
TAIL_STATIC(0x74d8e0u,74d);
}
B73f902:L73f902:{c.instructions+=1;NFSU2_TR(0x73f902);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73f905:L73f905:{c.instructions+=8;NFSU2_TR(0x73f905);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73f90b:{NFSU2_TR(0x73f90b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73f90e:{NFSU2_TR(0x73f90e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f90f:{NFSU2_TR(0x73f90f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f910:{NFSU2_TR(0x73f910);
u8 U[4];
w4(U+0,u32(0x73e680ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f915:{NFSU2_TR(0x73f915);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f916:{NFSU2_TR(0x73f916);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f917:{NFSU2_TR(0x73f917);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f91cull));
TAIL_STATIC(0x74d920u,74d);
}
B73f91c:L73f91c:{c.instructions+=3;NFSU2_TR(0x73f91c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B73f91f:{NFSU2_TR(0x73f91f);
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
B73f921:{NFSU2_TR(0x73f921);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73f92d;}}
}
B73f923:L73f923:{c.instructions+=4;NFSU2_TR(0x73f923);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73f924:{NFSU2_TR(0x73f924);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B73f92b:{NFSU2_TR(0x73f92b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73f92c:{NFSU2_TR(0x73f92c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73f92d:L73f92d:{c.instructions+=4;NFSU2_TR(0x73f92d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73f92e:{NFSU2_TR(0x73f92e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73f931:{NFSU2_TR(0x73f931);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73f932:{NFSU2_TR(0x73f932);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73f940:L73f940:{c.instructions+=6;NFSU2_TR(0x73f940);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73f944:{NFSU2_TR(0x73f944);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B73f946:{NFSU2_TR(0x73f946);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73f94c:{NFSU2_TR(0x73f94c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xc0000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73f952:{NFSU2_TR(0x73f952);
w4(R+0,u32(0x1ull));
}
B73f957:{NFSU2_TR(0x73f957);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73f95d;}}
}
B73f959:L73f959:{c.instructions+=2;NFSU2_TR(0x73f959);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B73f95b:{NFSU2_TR(0x73f95b);
{goto L73f962;}
}
B73f95d:L73f95d:{c.instructions+=1;NFSU2_TR(0x73f95d);
w4(R+8,u32(0x1ull));
}
B73f962:L73f962:{c.instructions+=7;NFSU2_TR(0x73f962);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f963:{NFSU2_TR(0x73f963);
__builtin_memmove((R+24),(R+4),4);
}
B73f965:{NFSU2_TR(0x73f965);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B73f968:{NFSU2_TR(0x73f968);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B73f96b:{NFSU2_TR(0x73f96b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73f96f:{NFSU2_TR(0x73f96f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73f970:{NFSU2_TR(0x73f970);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73f97b;}}
}
B73f972:L73f972:{c.instructions+=2;NFSU2_TR(0x73f972);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B73f975:{NFSU2_TR(0x73f975);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73f97b;}}
}
B73f977:L73f977:{c.instructions+=2;NFSU2_TR(0x73f977);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B73f979:{NFSU2_TR(0x73f979);
{goto L73f980;}
}
B73f97b:L73f97b:{c.instructions+=1;NFSU2_TR(0x73f97b);
w4(R+4,u32(0x1ull));
}
B73f980:L73f980:{c.instructions+=2;NFSU2_TR(0x73f980);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73f982:{NFSU2_TR(0x73f982);
if(r1(R+518)){{goto L73f986;}}
}
B73f984:L73f984:{c.instructions+=1;NFSU2_TR(0x73f984);
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
B73f986:L73f986:{c.instructions+=1;NFSU2_TR(0x73f986);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73f990:L73f990:{c.instructions+=10;NFSU2_TR(0x73f990);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f994:{NFSU2_TR(0x73f994);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73f998:{NFSU2_TR(0x73f998);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73f99c:{NFSU2_TR(0x73f99c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f99d:{NFSU2_TR(0x73f99d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f9a1:{NFSU2_TR(0x73f9a1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f9a2:{NFSU2_TR(0x73f9a2);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f9a7:{NFSU2_TR(0x73f9a7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f9a8:{NFSU2_TR(0x73f9a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f9a9:{NFSU2_TR(0x73f9a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f9aeull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73f3f0u);}goto L73f3f0;}
}
B73f9ae:L73f9ae:{c.instructions+=2;NFSU2_TR(0x73f9ae);
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
B73f9b1:{NFSU2_TR(0x73f9b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73f9c0:L73f9c0:{c.instructions+=12;NFSU2_TR(0x73f9c0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f9c1:{NFSU2_TR(0x73f9c1);
__builtin_memmove((R+20),(R+16),4);
}
B73f9c3:{NFSU2_TR(0x73f9c3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B73f9c6:{NFSU2_TR(0x73f9c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x114ull))));
}
B73f9cc:{NFSU2_TR(0x73f9cc);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B73f9d1:{NFSU2_TR(0x73f9d1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f9d2:{NFSU2_TR(0x73f9d2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f9d3:{NFSU2_TR(0x73f9d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73f9d6:{NFSU2_TR(0x73f9d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73f9dd:{NFSU2_TR(0x73f9dd);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x5ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B73f9e1:{NFSU2_TR(0x73f9e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73f9e2:{NFSU2_TR(0x73f9e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73f9fc;}}
}
B73f9e4:L73f9e4:{c.instructions+=3;NFSU2_TR(0x73f9e4);
w4(R+0,u32(0xffffff92ull));
}
B73f9e9:{NFSU2_TR(0x73f9e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73f9f0:{NFSU2_TR(0x73f9f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73f9f5ull));
TAIL_STATIC(0x76115eu,761);
}
B73f9f5:L73f9f5:{c.instructions+=6;NFSU2_TR(0x73f9f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73f9f6:{NFSU2_TR(0x73f9f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73f9f7:{NFSU2_TR(0x73f9f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73f9f8:{NFSU2_TR(0x73f9f8);
__builtin_memmove((R+16),(R+20),4);
}
B73f9fa:{NFSU2_TR(0x73f9fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73f9fb:{NFSU2_TR(0x73f9fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73f9fc:L73f9fc:{c.instructions+=3;NFSU2_TR(0x73f9fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73f9ff:{NFSU2_TR(0x73f9ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fa00:{NFSU2_TR(0x73fa00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73fa05ull));
TAIL_STATIC(0x74d3b0u,74d);
}
B73fa05:L73fa05:{c.instructions+=4;NFSU2_TR(0x73fa05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B73fa08:{NFSU2_TR(0x73fa08);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73fa0b:{NFSU2_TR(0x73fa0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73fa0d:{NFSU2_TR(0x73fa0d);
if(r1(R+518)){{goto L73fa50;}}
}
B73fa0f:L73fa0f:{c.instructions+=4;NFSU2_TR(0x73fa0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73fa12:{NFSU2_TR(0x73fa12);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fa13:{NFSU2_TR(0x73fa13);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fa14:{NFSU2_TR(0x73fa14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73fa19ull));
TAIL_STATIC(0x74d8e0u,74d);
}
B73fa19:L73fa19:{c.instructions+=3;NFSU2_TR(0x73fa19);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73fa1c:{NFSU2_TR(0x73fa1c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73fa1e:{NFSU2_TR(0x73fa1e);
if(r1(R+518)){{goto L73fa50;}}
}
B73fa20:L73fa20:{c.instructions+=3;NFSU2_TR(0x73fa20);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73fa26:{NFSU2_TR(0x73fa26);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73fa28:{NFSU2_TR(0x73fa28);
if(r1(R+518)){{goto L73fa50;}}
}
B73fa2a:L73fa2a:{c.instructions+=3;NFSU2_TR(0x73fa2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B73fa2c:{NFSU2_TR(0x73fa2c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0x2000000ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B73fa36:{NFSU2_TR(0x73fa36);
if(r1(R+518)){{goto L73fa50;}}
}
B73fa38:L73fa38:{c.instructions+=3;NFSU2_TR(0x73fa38);
w4(R+0,u32(0xfffffffeull));
}
B73fa3d:{NFSU2_TR(0x73fa3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73fa44:{NFSU2_TR(0x73fa44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73fa49ull));
TAIL_STATIC(0x76115eu,761);
}
B73fa49:L73fa49:{c.instructions+=6;NFSU2_TR(0x73fa49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73fa4a:{NFSU2_TR(0x73fa4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73fa4b:{NFSU2_TR(0x73fa4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73fa4c:{NFSU2_TR(0x73fa4c);
__builtin_memmove((R+16),(R+20),4);
}
B73fa4e:{NFSU2_TR(0x73fa4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73fa4f:{NFSU2_TR(0x73fa4f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73fa50:L73fa50:{c.instructions+=3;NFSU2_TR(0x73fa50);
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
B73fa52:{NFSU2_TR(0x73fa52);
w4(R+4,u32(0x42ull));
}
B73fa57:{NFSU2_TR(0x73fa57);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B73fa5b:L73fa5b:{c.instructions+=1;NFSU2_TR(0x73fa5b);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L73fa5d;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73fa5bu);}goto L73fa5b;}
}
B73fa5d:L73fa5d:{c.instructions+=7;NFSU2_TR(0x73fa5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73fa60:{NFSU2_TR(0x73fa60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73fa63:{NFSU2_TR(0x73fa63);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fa64:{NFSU2_TR(0x73fa64);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fa65:{NFSU2_TR(0x73fa65);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fa66:{NFSU2_TR(0x73fa66);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fa67:{NFSU2_TR(0x73fa67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73fa6cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73f3a0u);}goto L73f3a0;}
}
B73fa6c:L73fa6c:{c.instructions+=5;NFSU2_TR(0x73fa6c);
u8 U[4];
w4(U+0,u32(0x21ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fa6e:{NFSU2_TR(0x73fa6e);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B73fa72:{NFSU2_TR(0x73fa72);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fa73:{NFSU2_TR(0x73fa73);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fa74:{NFSU2_TR(0x73fa74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73fa79ull));
TAIL_STATIC(0x75c840u,75c);
}
B73fa79:L73fa79:{c.instructions+=9;NFSU2_TR(0x73fa79);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73fa7f:{NFSU2_TR(0x73fa7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73fa82:{NFSU2_TR(0x73fa82);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fa83:{NFSU2_TR(0x73fa83);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fa84:{NFSU2_TR(0x73fa84);
u8 U[4];
w4(U+0,u32(0x73e680ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fa89:{NFSU2_TR(0x73fa89);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B73fa8d:{NFSU2_TR(0x73fa8d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fa8e:{NFSU2_TR(0x73fa8e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fa8f:{NFSU2_TR(0x73fa8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73fa94ull));
TAIL_STATIC(0x74d640u,74d);
}
B73fa94:L73fa94:{c.instructions+=3;NFSU2_TR(0x73fa94);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B73fa97:{NFSU2_TR(0x73fa97);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73fa99:{NFSU2_TR(0x73fa99);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73fab5;}}
}
B73fa9b:L73fa9b:{c.instructions+=3;NFSU2_TR(0x73fa9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B73faa2:{NFSU2_TR(0x73faa2);
u8 U[8];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73faa9:{NFSU2_TR(0x73faa9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73faaeull));
TAIL_STATIC(0x76115eu,761);
}
B73faae:L73faae:{c.instructions+=6;NFSU2_TR(0x73faae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73faaf:{NFSU2_TR(0x73faaf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73fab0:{NFSU2_TR(0x73fab0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73fab1:{NFSU2_TR(0x73fab1);
__builtin_memmove((R+16),(R+20),4);
}
B73fab3:{NFSU2_TR(0x73fab3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73fab4:{NFSU2_TR(0x73fab4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73fab5:L73fab5:{c.instructions+=3;NFSU2_TR(0x73fab5);
u8 U[8];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73fabc:{NFSU2_TR(0x73fabc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73fabf:{NFSU2_TR(0x73fabf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73fac4ull));
TAIL_STATIC(0x76115eu,761);
}
B73fac4:L73fac4:{c.instructions+=6;NFSU2_TR(0x73fac4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73fac5:{NFSU2_TR(0x73fac5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73fac6:{NFSU2_TR(0x73fac6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73fac7:{NFSU2_TR(0x73fac7);
__builtin_memmove((R+16),(R+20),4);
}
B73fac9:{NFSU2_TR(0x73fac9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73faca:{NFSU2_TR(0x73faca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73fad0:L73fad0:{c.instructions+=9;NFSU2_TR(0x73fad0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73fad4:{NFSU2_TR(0x73fad4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73fad8:{NFSU2_TR(0x73fad8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fad9:{NFSU2_TR(0x73fad9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73fadd:{NFSU2_TR(0x73fadd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73fae0:{NFSU2_TR(0x73fae0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fae1:{NFSU2_TR(0x73fae1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73fae4:{NFSU2_TR(0x73fae4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73fae7:{NFSU2_TR(0x73fae7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73faecull));
TAIL_STATIC(0x74d3b0u,74d);
}
B73faec:L73faec:{c.instructions+=3;NFSU2_TR(0x73faec);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73faef:{NFSU2_TR(0x73faef);
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
B73faf1:{NFSU2_TR(0x73faf1);
if(r1(R+518)){{goto L73fb18;}}
}
B73faf3:L73faf3:{c.instructions+=5;NFSU2_TR(0x73faf3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73faf7:{NFSU2_TR(0x73faf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73fafa:{NFSU2_TR(0x73fafa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fafb:{NFSU2_TR(0x73fafb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fafc:{NFSU2_TR(0x73fafc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73fb01ull));
TAIL_STATIC(0x74d8e0u,74d);
}
B73fb01:L73fb01:{c.instructions+=3;NFSU2_TR(0x73fb01);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73fb04:{NFSU2_TR(0x73fb04);
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
B73fb06:{NFSU2_TR(0x73fb06);
if(r1(R+518)){{goto L73fb18;}}
}
B73fb08:L73fb08:{c.instructions+=3;NFSU2_TR(0x73fb08);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73fb0e:{NFSU2_TR(0x73fb0e);
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
B73fb10:{NFSU2_TR(0x73fb10);
if(r1(R+518)){{goto L73fb18;}}
}
B73fb12:L73fb12:{c.instructions+=3;NFSU2_TR(0x73fb12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B73fb14:{NFSU2_TR(0x73fb14);
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
B73fb16:{NFSU2_TR(0x73fb16);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73fb1f;}}
}
B73fb18:L73fb18:{c.instructions+=3;NFSU2_TR(0x73fb18);
w4(R+0,u32(0xfffffff8ull));
}
B73fb1d:{NFSU2_TR(0x73fb1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73fb1e:{NFSU2_TR(0x73fb1e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73fb1f:L73fb1f:{c.instructions+=10;NFSU2_TR(0x73fb1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73fb25:{NFSU2_TR(0x73fb25);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73fb29:{NFSU2_TR(0x73fb29);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fb2a:{NFSU2_TR(0x73fb2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73fb2d:{NFSU2_TR(0x73fb2d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fb2e:{NFSU2_TR(0x73fb2e);
u8 U[4];
w4(U+0,u32(0x73e680ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fb33:{NFSU2_TR(0x73fb33);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fb34:{NFSU2_TR(0x73fb34);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fb35:{NFSU2_TR(0x73fb35);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fb36:{NFSU2_TR(0x73fb36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73fb3bull));
TAIL_STATIC(0x74dd00u,74d);
}
B73fb3b:L73fb3b:{c.instructions+=3;NFSU2_TR(0x73fb3b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B73fb3e:{NFSU2_TR(0x73fb3e);
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
B73fb40:{NFSU2_TR(0x73fb40);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73fb4b;}}
}
B73fb42:L73fb42:{c.instructions+=3;NFSU2_TR(0x73fb42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B73fb49:{NFSU2_TR(0x73fb49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73fb4a:{NFSU2_TR(0x73fb4a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73fb4b:L73fb4b:{c.instructions+=3;NFSU2_TR(0x73fb4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73fb4e:{NFSU2_TR(0x73fb4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73fb4f:{NFSU2_TR(0x73fb4f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73fb50:L73fb50:{c.instructions+=6;NFSU2_TR(0x73fb50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fb51:{NFSU2_TR(0x73fb51);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73fb55:{NFSU2_TR(0x73fb55);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fb56:{NFSU2_TR(0x73fb56);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73fb5a:{NFSU2_TR(0x73fb5a);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B73fb5d:{NFSU2_TR(0x73fb5d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73fb6a;}}
}
B73fb5f:L73fb5f:{c.instructions+=2;NFSU2_TR(0x73fb5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73fb66:{NFSU2_TR(0x73fb66);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B73fb6a:L73fb6a:{c.instructions+=7;NFSU2_TR(0x73fb6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73fb6d:{NFSU2_TR(0x73fb6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73fb71:{NFSU2_TR(0x73fb71);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73fb75:{NFSU2_TR(0x73fb75);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fb76:{NFSU2_TR(0x73fb76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73fb79:{NFSU2_TR(0x73fb79);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73fb7c:{NFSU2_TR(0x73fb7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73fb81ull));
TAIL_STATIC(0x74d3b0u,74d);
}
B73fb81:L73fb81:{c.instructions+=3;NFSU2_TR(0x73fb81);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73fb84:{NFSU2_TR(0x73fb84);
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
B73fb86:{NFSU2_TR(0x73fb86);
if(r1(R+518)){{goto L73fbad;}}
}
B73fb88:L73fb88:{c.instructions+=5;NFSU2_TR(0x73fb88);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73fb8c:{NFSU2_TR(0x73fb8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73fb8f:{NFSU2_TR(0x73fb8f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fb90:{NFSU2_TR(0x73fb90);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fb91:{NFSU2_TR(0x73fb91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73fb96ull));
TAIL_STATIC(0x74d8e0u,74d);
}
B73fb96:L73fb96:{c.instructions+=3;NFSU2_TR(0x73fb96);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73fb99:{NFSU2_TR(0x73fb99);
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
B73fb9b:{NFSU2_TR(0x73fb9b);
if(r1(R+518)){{goto L73fbad;}}
}
B73fb9d:L73fb9d:{c.instructions+=3;NFSU2_TR(0x73fb9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73fba3:{NFSU2_TR(0x73fba3);
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
B73fba5:{NFSU2_TR(0x73fba5);
if(r1(R+518)){{goto L73fbad;}}
}
B73fba7:L73fba7:{c.instructions+=3;NFSU2_TR(0x73fba7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B73fba9:{NFSU2_TR(0x73fba9);
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
B73fbab:{NFSU2_TR(0x73fbab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73fbb5;}}
}
B73fbad:L73fbad:{c.instructions+=4;NFSU2_TR(0x73fbad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73fbae:{NFSU2_TR(0x73fbae);
w4(R+0,u32(0xfffffff8ull));
}
B73fbb3:{NFSU2_TR(0x73fbb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73fbb4:{NFSU2_TR(0x73fbb4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73fbb5:L73fbb5:{c.instructions+=11;NFSU2_TR(0x73fbb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73fbbb:{NFSU2_TR(0x73fbbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73fbc1:{NFSU2_TR(0x73fbc1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fbc2:{NFSU2_TR(0x73fbc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73fbc5:{NFSU2_TR(0x73fbc5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fbc6:{NFSU2_TR(0x73fbc6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fbc7:{NFSU2_TR(0x73fbc7);
u8 U[4];
w4(U+0,u32(0x73e680ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fbcc:{NFSU2_TR(0x73fbcc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fbcd:{NFSU2_TR(0x73fbcd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fbce:{NFSU2_TR(0x73fbce);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fbcf:{NFSU2_TR(0x73fbcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73fbd4ull));
TAIL_STATIC(0x74de50u,74d);
}
B73fbd4:L73fbd4:{c.instructions+=4;NFSU2_TR(0x73fbd4);
__builtin_memmove((R+28),(R+0),4);
}
B73fbd6:{NFSU2_TR(0x73fbd6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B73fbd9:{NFSU2_TR(0x73fbd9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73fbdb:{NFSU2_TR(0x73fbdb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73fbe6;}}
}
B73fbdd:L73fbdd:{c.instructions+=2;NFSU2_TR(0x73fbdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B73fbe4:{NFSU2_TR(0x73fbe4);
{goto L73fbe9;}
}
B73fbe6:L73fbe6:{c.instructions+=1;NFSU2_TR(0x73fbe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73fbe9:L73fbe9:{c.instructions+=4;NFSU2_TR(0x73fbe9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73fbec:{NFSU2_TR(0x73fbec);
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
B73fbee:{NFSU2_TR(0x73fbee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73fbf5:{NFSU2_TR(0x73fbf5);
if(r1(R+518)){{goto L73fc05;}}
}
B73fbf7:L73fbf7:{c.instructions+=6;NFSU2_TR(0x73fbf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73fbfa:{NFSU2_TR(0x73fbfa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fbfb:{NFSU2_TR(0x73fbfb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fbfd:{NFSU2_TR(0x73fbfd);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fbff:{NFSU2_TR(0x73fbff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fc00:{NFSU2_TR(0x73fc00);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73fc02ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B73fc02:L73fc02:{c.instructions+=1;NFSU2_TR(0x73fc02);
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
B73fc05:L73fc05:{c.instructions+=4;NFSU2_TR(0x73fc05);
__builtin_memmove((R+0),(R+28),4);
}
B73fc07:{NFSU2_TR(0x73fc07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73fc08:{NFSU2_TR(0x73fc08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73fc09:{NFSU2_TR(0x73fc09);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73fc10:L73fc10:{c.instructions+=4;NFSU2_TR(0x73fc10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fc11:{NFSU2_TR(0x73fc11);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73fc15:{NFSU2_TR(0x73fc15);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fc16:{NFSU2_TR(0x73fc16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73fc1bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73f600u);}goto L73f600;}
}
B73fc1b:L73fc1b:{c.instructions+=8;NFSU2_TR(0x73fc1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73fc1f:{NFSU2_TR(0x73fc1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73fc23:{NFSU2_TR(0x73fc23);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fc24:{NFSU2_TR(0x73fc24);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fc25:{NFSU2_TR(0x73fc25);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fc27:{NFSU2_TR(0x73fc27);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fc2c:{NFSU2_TR(0x73fc2c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fc2d:{NFSU2_TR(0x73fc2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73fc32ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73fb50u);}goto L73fb50;}
}
B73fc32:L73fc32:{c.instructions+=6;NFSU2_TR(0x73fc32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73fc38:{NFSU2_TR(0x73fc38);
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B73fc3b:{NFSU2_TR(0x73fc3b);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73fc3c:{NFSU2_TR(0x73fc3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73fc42:{NFSU2_TR(0x73fc42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73fc43:{NFSU2_TR(0x73fc43);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73fc50:L73fc50:{c.instructions+=3;NFSU2_TR(0x73fc50);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73fc54:{NFSU2_TR(0x73fc54);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x5ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B73fc58:{NFSU2_TR(0x73fc58);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73fc60;}}
}
B73fc5a:L73fc5a:{c.instructions+=2;NFSU2_TR(0x73fc5a);
w4(R+0,u32(0xffffff92ull));
}
B73fc5f:{NFSU2_TR(0x73fc5f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73fc60:L73fc60:{c.instructions+=7;NFSU2_TR(0x73fc60);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73fc64:{NFSU2_TR(0x73fc64);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fc66:{NFSU2_TR(0x73fc66);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fc68:{NFSU2_TR(0x73fc68);
u8 U[4];
w4(U+0,u32(0x100000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fc6d:{NFSU2_TR(0x73fc6d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fc6e:{NFSU2_TR(0x73fc6e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fc6f:{NFSU2_TR(0x73fc6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73fc74ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73f3f0u);}goto L73f3f0;}
}
B73fc74:L73fc74:{c.instructions+=2;NFSU2_TR(0x73fc74);
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
B73fc77:{NFSU2_TR(0x73fc77);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73fc80:L73fc80:{c.instructions+=2;NFSU2_TR(0x73fc80);
w4(R+0,u32(0x129cull));
}
B73fc85:{NFSU2_TR(0x73fc85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73fc8aull));
TAIL_STATIC(0x75c4d0u,75c);
}
B73fc8a:L73fc8a:{c.instructions+=8;NFSU2_TR(0x73fc8a);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B73fc8f:{NFSU2_TR(0x73fc8f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fc90:{NFSU2_TR(0x73fc90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fc91:{NFSU2_TR(0x73fc91);
u8 U[8];
w4(U+0,u32(u32(u32(0x12a8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73fc98:{NFSU2_TR(0x73fc98);
u8 U[8];
w4(U+0,u32(u32(u32(0x12a0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73fc9f:{NFSU2_TR(0x73fc9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73fca2:{NFSU2_TR(0x73fca2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fca3:{NFSU2_TR(0x73fca3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73fca8ull));
TAIL_STATIC(0x74d3b0u,74d);
}
B73fca8:L73fca8:{c.instructions+=4;NFSU2_TR(0x73fca8);
u8 U[8];
w4(U+0,u32(u32(u32(0x12b0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B73fcaf:{NFSU2_TR(0x73fcaf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73fcb2:{NFSU2_TR(0x73fcb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73fcb4:{NFSU2_TR(0x73fcb4);
if(r1(R+518)){{goto L73fcf9;}}
}
B73fcb6:L73fcb6:{c.instructions+=4;NFSU2_TR(0x73fcb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73fcb9:{NFSU2_TR(0x73fcb9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fcba:{NFSU2_TR(0x73fcba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fcbb:{NFSU2_TR(0x73fcbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73fcc0ull));
TAIL_STATIC(0x74d8e0u,74d);
}
B73fcc0:L73fcc0:{c.instructions+=3;NFSU2_TR(0x73fcc0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73fcc3:{NFSU2_TR(0x73fcc3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73fcc5:{NFSU2_TR(0x73fcc5);
if(r1(R+518)){{goto L73fcf9;}}
}
B73fcc7:L73fcc7:{c.instructions+=3;NFSU2_TR(0x73fcc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73fccd:{NFSU2_TR(0x73fccd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73fccf:{NFSU2_TR(0x73fccf);
if(r1(R+518)){{goto L73fcf9;}}
}
B73fcd1:L73fcd1:{c.instructions+=3;NFSU2_TR(0x73fcd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B73fcd3:{NFSU2_TR(0x73fcd3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0x2000000ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B73fcdd:{NFSU2_TR(0x73fcdd);
if(r1(R+518)){{goto L73fcf9;}}
}
B73fcdf:L73fcdf:{c.instructions+=5;NFSU2_TR(0x73fcdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73fce0:{NFSU2_TR(0x73fce0);
w4(R+0,u32(0xfffffffeull));
}
B73fce5:{NFSU2_TR(0x73fce5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73fce6:{NFSU2_TR(0x73fce6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1298ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73fced:{NFSU2_TR(0x73fced);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73fcf2ull));
TAIL_STATIC(0x76115eu,761);
}
B73fcf2:L73fcf2:{c.instructions+=2;NFSU2_TR(0x73fcf2);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x129cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x129cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x129cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73fcf8:{NFSU2_TR(0x73fcf8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73fcf9:L73fcf9:{c.instructions+=2;NFSU2_TR(0x73fcf9);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B73fcfd:{NFSU2_TR(0x73fcfd);
if(r1(R+518)){{goto L73fd19;}}
}
B73fcff:L73fcff:{c.instructions+=5;NFSU2_TR(0x73fcff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73fd00:{NFSU2_TR(0x73fd00);
w4(R+0,u32(0xfffffffcull));
}
B73fd05:{NFSU2_TR(0x73fd05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73fd06:{NFSU2_TR(0x73fd06);
u8 U[8];
w4(U+0,u32(u32(u32(0x1298ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73fd0d:{NFSU2_TR(0x73fd0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73fd12ull));
TAIL_STATIC(0x76115eu,761);
}
B73fd12:L73fd12:{c.instructions+=2;NFSU2_TR(0x73fd12);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x129cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x129cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x129cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73fd18:{NFSU2_TR(0x73fd18);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73fd19:L73fd19:{c.instructions+=7;NFSU2_TR(0x73fd19);
u8 U[4];
w4(U+0,u32(0x7a1314ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fd1e:{NFSU2_TR(0x73fd1e);
u8 U[4];
w4(U+0,u32(0x7a15f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fd23:{NFSU2_TR(0x73fd23);
u8 U[4];
w4(U+0,u32(u32(u32(0x140ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B73fd2a:{NFSU2_TR(0x73fd2a);
u8 U[4];
w4(U+0,u32(0x1168ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fd2f:{NFSU2_TR(0x73fd2f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fd30:{NFSU2_TR(0x73fd30);
u8 U[5];
w4(U+0,u32(u32(u32(0x148ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B73fd38:{NFSU2_TR(0x73fd38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73fd3dull));
TAIL_STATIC(0x741a50u,741);
}
B73fd3d:L73fd3d:{c.instructions+=3;NFSU2_TR(0x73fd3d);
u8 U[4];
w4(U+0,u32(0x2full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fd3f:{NFSU2_TR(0x73fd3f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fd40:{NFSU2_TR(0x73fd40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73fd45ull));
TAIL_STATIC(0x75cf10u,75c);
}
B73fd45:L73fd45:{c.instructions+=3;NFSU2_TR(0x73fd45);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B73fd48:{NFSU2_TR(0x73fd48);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73fd4a:{NFSU2_TR(0x73fd4a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73fde8;}}
}
B73fd50:L73fd50:{c.instructions+=3;NFSU2_TR(0x73fd50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73fd53:{NFSU2_TR(0x73fd53);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fd54:{NFSU2_TR(0x73fd54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73fd59ull));
TAIL_STATIC(0x74d020u,74d);
}
B73fd59:L73fd59:{c.instructions+=4;NFSU2_TR(0x73fd59);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B73fd5b:{NFSU2_TR(0x73fd5b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73fd5e:{NFSU2_TR(0x73fd5e);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2full))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B73fd61:{NFSU2_TR(0x73fd61);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73fd82;}}
}
B73fd63:L73fd63:{c.instructions+=3;NFSU2_TR(0x73fd63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73fd66:{NFSU2_TR(0x73fd66);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fd67:{NFSU2_TR(0x73fd67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73fd6cull));
TAIL_STATIC(0x74d020u,74d);
}
B73fd6c:L73fd6c:{c.instructions+=4;NFSU2_TR(0x73fd6c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73fd6f:{NFSU2_TR(0x73fd6f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B73fd70:{NFSU2_TR(0x73fd70);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B73fd74:{NFSU2_TR(0x73fd74);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B73fd76:L73fd76:{c.instructions+=5;NFSU2_TR(0x73fd76);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B73fd78:{NFSU2_TR(0x73fd78);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B73fd7b:{NFSU2_TR(0x73fd7b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B73fd7c:{NFSU2_TR(0x73fd7c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B73fd7e:{NFSU2_TR(0x73fd7e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73fd76u);}goto L73fd76;}}
}
B73fd80:L73fd80:{c.instructions+=1;NFSU2_TR(0x73fd80);
{goto L73fd9c;}
}
B73fd82:L73fd82:{c.instructions+=3;NFSU2_TR(0x73fd82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73fd85:{NFSU2_TR(0x73fd85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fd86:{NFSU2_TR(0x73fd86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73fd8bull));
TAIL_STATIC(0x74d020u,74d);
}
B73fd8b:L73fd8b:{c.instructions+=2;NFSU2_TR(0x73fd8b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73fd8e:{NFSU2_TR(0x73fd8e);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B73fd92:L73fd92:{c.instructions+=6;NFSU2_TR(0x73fd92);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B73fd94:{NFSU2_TR(0x73fd94);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B73fd95:{NFSU2_TR(0x73fd95);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+8)),r1(U+0));
}
B73fd97:{NFSU2_TR(0x73fd97);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B73fd98:{NFSU2_TR(0x73fd98);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B73fd9a:{NFSU2_TR(0x73fd9a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73fd92u);}goto L73fd92;}}
}
B73fd9c:L73fd9c:{c.instructions+=4;NFSU2_TR(0x73fd9c);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B73fda0:{NFSU2_TR(0x73fda0);
u8 U[4];
w4(U+0,u32(0x2full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fda2:{NFSU2_TR(0x73fda2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fda3:{NFSU2_TR(0x73fda3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73fda8ull));
TAIL_STATIC(0x75cf10u,75c);
}
B73fda8:L73fda8:{c.instructions+=3;NFSU2_TR(0x73fda8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73fdab:{NFSU2_TR(0x73fdab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73fdad:{NFSU2_TR(0x73fdad);
if(r1(R+518)){{goto L73fdb2;}}
}
B73fdaf:L73fdaf:{c.instructions+=1;NFSU2_TR(0x73fdaf);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B73fdb2:L73fdb2:{c.instructions+=7;NFSU2_TR(0x73fdb2);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B73fdb6:{NFSU2_TR(0x73fdb6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fdb7:{NFSU2_TR(0x73fdb7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fdb8:{NFSU2_TR(0x73fdb8);
u8 U[4];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B73fdbc:{NFSU2_TR(0x73fdbc);
u8 U[4];
w4(U+0,u32(0x7c2fc4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fdc1:{NFSU2_TR(0x73fdc1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fdc2:{NFSU2_TR(0x73fdc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73fdc7ull));
TAIL_STATIC(0x75c784u,75c);
}
B73fdc7:L73fdc7:{c.instructions+=7;NFSU2_TR(0x73fdc7);
u8 U[4];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B73fdcb:{NFSU2_TR(0x73fdcb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fdcc:{NFSU2_TR(0x73fdcc);
u8 U[4];
w4(U+0,u32(0x7a10d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fdd1:{NFSU2_TR(0x73fdd1);
u8 U[4];
w4(U+0,u32(u32(u32(0x150ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B73fdd8:{NFSU2_TR(0x73fdd8);
u8 U[4];
w4(U+0,u32(0x1168ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fddd:{NFSU2_TR(0x73fddd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fdde:{NFSU2_TR(0x73fdde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73fde3ull));
TAIL_STATIC(0x741a50u,741);
}
B73fde3:L73fde3:{c.instructions+=2;NFSU2_TR(0x73fde3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B73fde6:{NFSU2_TR(0x73fde6);
{goto L73fe03;}
}
B73fde8:L73fde8:{c.instructions+=6;NFSU2_TR(0x73fde8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fde9:{NFSU2_TR(0x73fde9);
u8 U[4];
w4(U+0,u32(0x7a10d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fdee:{NFSU2_TR(0x73fdee);
u8 U[4];
w4(U+0,u32(u32(u32(0x140ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B73fdf5:{NFSU2_TR(0x73fdf5);
u8 U[4];
w4(U+0,u32(0x1168ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fdfa:{NFSU2_TR(0x73fdfa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fdfb:{NFSU2_TR(0x73fdfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73fe00ull));
TAIL_STATIC(0x741a50u,741);
}
B73fe00:L73fe00:{c.instructions+=1;NFSU2_TR(0x73fe00);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B73fe03:L73fe03:{c.instructions+=8;NFSU2_TR(0x73fe03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73fe09:{NFSU2_TR(0x73fe09);
u8 U[8];
w4(U+0,u32(u32(u32(0x12b0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73fe10:{NFSU2_TR(0x73fe10);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fe11:{NFSU2_TR(0x73fe11);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fe12:{NFSU2_TR(0x73fe12);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fe13:{NFSU2_TR(0x73fe13);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B73fe17:{NFSU2_TR(0x73fe17);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fe18:{NFSU2_TR(0x73fe18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73fe1dull));
TAIL_STATIC(0x75c840u,75c);
}
B73fe1d:L73fe1d:{c.instructions+=9;NFSU2_TR(0x73fe1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73fe23:{NFSU2_TR(0x73fe23);
u8 U[4];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B73fe27:{NFSU2_TR(0x73fe27);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fe28:{NFSU2_TR(0x73fe28);
u8 U[4];
w4(U+0,u32(0x796344ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fe2d:{NFSU2_TR(0x73fe2d);
u8 U[4];
w4(U+0,u32(u32(u32(0x150ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B73fe34:{NFSU2_TR(0x73fe34);
u8 U[4];
w4(U+0,u32(0x1168ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fe39:{NFSU2_TR(0x73fe39);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fe3a:{NFSU2_TR(0x73fe3a);
u8 U[13];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B73fe42:{NFSU2_TR(0x73fe42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73fe47ull));
TAIL_STATIC(0x741a50u,741);
}
B73fe47:L73fe47:{c.instructions+=6;NFSU2_TR(0x73fe47);
u8 U[4];
w4(U+0,u32(0x3f480ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fe4c:{NFSU2_TR(0x73fe4c);
u8 U[4];
w4(U+0,u32(0x7d2060ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fe51:{NFSU2_TR(0x73fe51);
u8 U[4];
w4(U+0,u32(u32(u32(0x160ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B73fe58:{NFSU2_TR(0x73fe58);
u8 U[4];
w4(U+0,u32(0x1168ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fe5d:{NFSU2_TR(0x73fe5d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fe5e:{NFSU2_TR(0x73fe5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73fe63ull));
TAIL_STATIC(0x741690u,741);
}
B73fe63:L73fe63:{c.instructions+=7;NFSU2_TR(0x73fe63);
u8 U[8];
w4(U+0,u32(u32(u32(0x12e8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73fe6a:{NFSU2_TR(0x73fe6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x12e4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73fe71:{NFSU2_TR(0x73fe71);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fe72:{NFSU2_TR(0x73fe72);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fe73:{NFSU2_TR(0x73fe73);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fe74:{NFSU2_TR(0x73fe74);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fe75:{NFSU2_TR(0x73fe75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73fe7aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73f3a0u);}goto L73f3a0;}
}
B73fe7a:L73fe7a:{c.instructions+=3;NFSU2_TR(0x73fe7a);
u8 U[4];
w4(U+0,u32(0x2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fe7c:{NFSU2_TR(0x73fe7c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fe7d:{NFSU2_TR(0x73fe7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73fe82ull));
TAIL_STATIC(0x75cf10u,75c);
}
B73fe82:L73fe82:{c.instructions+=11;NFSU2_TR(0x73fe82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73fe85:{NFSU2_TR(0x73fe85);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
}
B73fe88:{NFSU2_TR(0x73fe88);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73fe8a:{NFSU2_TR(0x73fe8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73fe90:{NFSU2_TR(0x73fe90);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fe91:{NFSU2_TR(0x73fe91);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fe92:{NFSU2_TR(0x73fe92);
u8 U[4];
w4(U+0,u32(0x73e680ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fe97:{NFSU2_TR(0x73fe97);
u8 U[4];
w4(U+0,u32(u32(u32(0x148ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B73fe9e:{NFSU2_TR(0x73fe9e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fe9f:{NFSU2_TR(0x73fe9f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fea0:{NFSU2_TR(0x73fea0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73fea9;}}
}
B73fea2:L73fea2:{c.instructions+=1;NFSU2_TR(0x73fea2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73fea7ull));
TAIL_STATIC(0x74dbd0u,74d);
}
B73fea7:L73fea7:{c.instructions+=1;NFSU2_TR(0x73fea7);
{goto L73feae;}
}
B73fea9:L73fea9:{c.instructions+=1;NFSU2_TR(0x73fea9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73feaeull));
TAIL_STATIC(0x74dc00u,74d);
}
B73feae:L73feae:{c.instructions+=4;NFSU2_TR(0x73feae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B73feb1:{NFSU2_TR(0x73feb1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73feb3:{NFSU2_TR(0x73feb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73feb4:{NFSU2_TR(0x73feb4);
if(r1(R+518)){{goto L73fec0;}}
}
B73feb6:L73feb6:{c.instructions+=1;NFSU2_TR(0x73feb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73fec0:L73fec0:{c.instructions+=3;NFSU2_TR(0x73fec0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73fec6:{NFSU2_TR(0x73fec6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73fec8:{NFSU2_TR(0x73fec8);
if(r1(R+518)){{goto L73feed;}}
}
B73feca:L73feca:{c.instructions+=2;NFSU2_TR(0x73feca);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73fecc:{NFSU2_TR(0x73fecc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73feea;}}
}
B73fece:L73fece:{c.instructions+=5;NFSU2_TR(0x73fece);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B73fed5:{NFSU2_TR(0x73fed5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73fed6:{NFSU2_TR(0x73fed6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73fed7:{NFSU2_TR(0x73fed7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1298ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73fede:{NFSU2_TR(0x73fede);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73fee3ull));
TAIL_STATIC(0x76115eu,761);
}
B73fee3:L73fee3:{c.instructions+=2;NFSU2_TR(0x73fee3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x129cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x129cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x129cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73fee9:{NFSU2_TR(0x73fee9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73feea:L73feea:{c.instructions+=1;NFSU2_TR(0x73feea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73feed:L73feed:{c.instructions+=4;NFSU2_TR(0x73feed);
u8 U[8];
w4(U+0,u32(u32(u32(0x12a0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73fef4:{NFSU2_TR(0x73fef4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73fef5:{NFSU2_TR(0x73fef5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73fef6:{NFSU2_TR(0x73fef6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73fefbull));
TAIL_STATIC(0x76115eu,761);
}
B73fefb:L73fefb:{c.instructions+=2;NFSU2_TR(0x73fefb);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x129cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x129cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x129cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73ff01:{NFSU2_TR(0x73ff01);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73ff10:L73ff10:{c.instructions+=9;NFSU2_TR(0x73ff10);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ff11:{NFSU2_TR(0x73ff11);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ff12:{NFSU2_TR(0x73ff12);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ff13:{NFSU2_TR(0x73ff13);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ff14:{NFSU2_TR(0x73ff14);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73ff18:{NFSU2_TR(0x73ff18);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ff1b:{NFSU2_TR(0x73ff1b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ff1c:{NFSU2_TR(0x73ff1c);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73ff1e:{NFSU2_TR(0x73ff1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73ff23ull));
TAIL_STATIC(0x74d3b0u,74d);
}
B73ff23:L73ff23:{c.instructions+=3;NFSU2_TR(0x73ff23);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73ff26:{NFSU2_TR(0x73ff26);
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
B73ff28:{NFSU2_TR(0x73ff28);
if(r1(R+518)){{goto L73ffbb;}}
}
B73ff2e:L73ff2e:{c.instructions+=3;NFSU2_TR(0x73ff2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73ff31:{NFSU2_TR(0x73ff31);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ff32:{NFSU2_TR(0x73ff32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73ff37ull));
TAIL_STATIC(0x74d3b0u,74d);
}
B73ff37:L73ff37:{c.instructions+=2;NFSU2_TR(0x73ff37);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ff38:{NFSU2_TR(0x73ff38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73ff3dull));
TAIL_STATIC(0x73d8c0u,73d);
}
B73ff3d:L73ff3d:{c.instructions+=4;NFSU2_TR(0x73ff3d);
__builtin_memmove((R+20),(R+0),4);
}
B73ff3f:{NFSU2_TR(0x73ff3f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73ff42:{NFSU2_TR(0x73ff42);
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
B73ff44:{NFSU2_TR(0x73ff44);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L73ffbb;}}
}
B73ff46:L73ff46:{c.instructions+=4;NFSU2_TR(0x73ff46);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73ff49:{NFSU2_TR(0x73ff49);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ff4a:{NFSU2_TR(0x73ff4a);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73ff4c:{NFSU2_TR(0x73ff4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73ff51ull));
TAIL_STATIC(0x74d3b0u,74d);
}
B73ff51:L73ff51:{c.instructions+=3;NFSU2_TR(0x73ff51);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73ff54:{NFSU2_TR(0x73ff54);
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
B73ff56:{NFSU2_TR(0x73ff56);
if(r1(R+518)){{goto L73ff7e;}}
}
B73ff58:L73ff58:{c.instructions+=4;NFSU2_TR(0x73ff58);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ff5b:{NFSU2_TR(0x73ff5b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ff5c:{NFSU2_TR(0x73ff5c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ff5d:{NFSU2_TR(0x73ff5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73ff62ull));
TAIL_STATIC(0x74d3b0u,74d);
}
B73ff62:L73ff62:{c.instructions+=3;NFSU2_TR(0x73ff62);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73ff65:{NFSU2_TR(0x73ff65);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ff66:{NFSU2_TR(0x73ff66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73ff6bull));
TAIL_STATIC(0x73d8e0u,73d);
}
B73ff6b:L73ff6b:{c.instructions+=3;NFSU2_TR(0x73ff6b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73ff6e:{NFSU2_TR(0x73ff6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73ff70:{NFSU2_TR(0x73ff70);
if(r1(R+518)){{goto L73ff7e;}}
}
B73ff72:L73ff72:{c.instructions+=3;NFSU2_TR(0x73ff72);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ff78:{NFSU2_TR(0x73ff78);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73ff7a:{NFSU2_TR(0x73ff7a);
if(r1(R+518)){{goto L73ff7e;}}
}
B73ff7c:L73ff7c:{c.instructions+=1;NFSU2_TR(0x73ff7c);
__builtin_memmove((R+24),(R+0),4);
}
B73ff7e:L73ff7e:{c.instructions+=4;NFSU2_TR(0x73ff7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B73ff80:{NFSU2_TR(0x73ff80);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ff86:{NFSU2_TR(0x73ff86);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xc0000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73ff8b:{NFSU2_TR(0x73ff8b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73ff91;}}
}
B73ff8d:L73ff8d:{c.instructions+=2;NFSU2_TR(0x73ff8d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B73ff8f:{NFSU2_TR(0x73ff8f);
{goto L73ff96;}
}
B73ff91:L73ff91:{c.instructions+=1;NFSU2_TR(0x73ff91);
w4(R+4,u32(0x1ull));
}
B73ff96:L73ff96:{c.instructions+=5;NFSU2_TR(0x73ff96);
__builtin_memmove((R+8),(R+0),4);
}
B73ff98:{NFSU2_TR(0x73ff98);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B73ff9b:{NFSU2_TR(0x73ff9b);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B73ff9e:{NFSU2_TR(0x73ff9e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73ffa2:{NFSU2_TR(0x73ffa2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73ffad;}}
}
B73ffa4:L73ffa4:{c.instructions+=2;NFSU2_TR(0x73ffa4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B73ffa7:{NFSU2_TR(0x73ffa7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73ffad;}}
}
B73ffa9:L73ffa9:{c.instructions+=2;NFSU2_TR(0x73ffa9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B73ffab:{NFSU2_TR(0x73ffab);
{goto L73ffb2;}
}
B73ffad:L73ffad:{c.instructions+=1;NFSU2_TR(0x73ffad);
w4(R+0,u32(0x1ull));
}
B73ffb2:L73ffb2:{c.instructions+=2;NFSU2_TR(0x73ffb2);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B73ffb4:{NFSU2_TR(0x73ffb4);
if(r1(R+518)){{goto L73ffc5;}}
}
B73ffb6:L73ffb6:{c.instructions+=3;NFSU2_TR(0x73ffb6);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B73ffb7:{NFSU2_TR(0x73ffb7);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
w1(R+512,u8((r4(R+12))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+6)));
w4(U+10,u32(u32(r4(R+12))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73ffb9:{NFSU2_TR(0x73ffb9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73ff46u);}goto L73ff46;}}
}
B73ffbb:L73ffbb:{c.instructions+=6;NFSU2_TR(0x73ffbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73ffbc:{NFSU2_TR(0x73ffbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73ffbd:{NFSU2_TR(0x73ffbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73ffbe:{NFSU2_TR(0x73ffbe);
w4(R+0,u32(0xfffffffbull));
}
B73ffc3:{NFSU2_TR(0x73ffc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73ffc4:{NFSU2_TR(0x73ffc4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73ffc5:L73ffc5:{c.instructions+=7;NFSU2_TR(0x73ffc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B73ffc7:{NFSU2_TR(0x73ffc7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ffc9:{NFSU2_TR(0x73ffc9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ffcb:{NFSU2_TR(0x73ffcb);
u8 U[4];
w4(U+0,u32(0x100000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ffd0:{NFSU2_TR(0x73ffd0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ffd1:{NFSU2_TR(0x73ffd1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ffd2:{NFSU2_TR(0x73ffd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73ffd7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73f3f0u);}goto L73f3f0;}
}
B73ffd7:L73ffd7:{c.instructions+=7;NFSU2_TR(0x73ffd7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B73ffda:{NFSU2_TR(0x73ffda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73ffdb:{NFSU2_TR(0x73ffdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73ffdc:{NFSU2_TR(0x73ffdc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73ffdd:{NFSU2_TR(0x73ffdd);
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
B73ffdf:{NFSU2_TR(0x73ffdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73ffe0:{NFSU2_TR(0x73ffe0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73fff0:L73fff0:{c.instructions+=4;NFSU2_TR(0x73fff0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73fff4:{NFSU2_TR(0x73fff4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73fff9:{NFSU2_TR(0x73fff9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73fffa:{NFSU2_TR(0x73fffa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x740025u,740);}
}
B73fffc:L73fffc:{c.instructions+=1;NFSU2_TR(0x73fffc);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
TAIL_STATIC(0x740000u,740);
}
XIT:NFSU2_TR_EXIT(0x73f,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
