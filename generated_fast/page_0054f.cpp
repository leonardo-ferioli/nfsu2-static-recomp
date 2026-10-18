#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4ae(u8* __restrict R,Cpu& c);
u32 body_4d8(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_521(u8* __restrict R,Cpu& c);
u32 body_527(u8* __restrict R,Cpu& c);
u32 body_52e(u8* __restrict R,Cpu& c);
u32 body_530(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_53b(u8* __restrict R,Cpu& c);
u32 body_541(u8* __restrict R,Cpu& c);
u32 body_544(u8* __restrict R,Cpu& c);
u32 body_545(u8* __restrict R,Cpu& c);
u32 body_546(u8* __restrict R,Cpu& c);
u32 body_547(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_550(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x54f,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x54f,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_54f(u8* __restrict R,Cpu& c);
u32 page_54f(Cpu& c){return body_54f(c.regs.data(),c);}
__attribute__((noinline)) u32 body_54f(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x54f001:goto L54f001;
case 0x54f005:c.instructions+=3;goto B54f005;
case 0x54f006:c.instructions+=2;goto B54f006;
case 0x54f007:c.instructions+=1;goto B54f007;
case 0x54f00c:goto L54f00c;
case 0x54f00f:c.instructions+=6;goto B54f00f;
case 0x54f015:c.instructions+=5;goto B54f015;
case 0x54f01a:c.instructions+=4;goto B54f01a;
case 0x54f01b:c.instructions+=3;goto B54f01b;
case 0x54f01f:c.instructions+=2;goto B54f01f;
case 0x54f020:c.instructions+=1;goto B54f020;
case 0x54f025:goto L54f025;
case 0x54f02b:c.instructions+=7;goto B54f02b;
case 0x54f02c:c.instructions+=6;goto B54f02c;
case 0x54f030:c.instructions+=5;goto B54f030;
case 0x54f031:c.instructions+=4;goto B54f031;
case 0x54f035:c.instructions+=3;goto B54f035;
case 0x54f037:c.instructions+=2;goto B54f037;
case 0x54f038:c.instructions+=1;goto B54f038;
case 0x54f03d:goto L54f03d;
case 0x54f040:c.instructions+=5;goto B54f040;
case 0x54f043:c.instructions+=4;goto B54f043;
case 0x54f047:c.instructions+=3;goto B54f047;
case 0x54f048:c.instructions+=2;goto B54f048;
case 0x54f049:c.instructions+=1;goto B54f049;
case 0x54f04e:goto L54f04e;
case 0x54f051:c.instructions+=6;goto B54f051;
case 0x54f055:c.instructions+=5;goto B54f055;
case 0x54f058:c.instructions+=4;goto B54f058;
case 0x54f059:c.instructions+=3;goto B54f059;
case 0x54f05e:c.instructions+=2;goto B54f05e;
case 0x54f060:c.instructions+=1;goto B54f060;
case 0x54f062:goto L54f062;
case 0x54f063:c.instructions+=1;goto B54f063;
case 0x54f065:goto L54f065;
case 0x54f066:c.instructions+=1;goto B54f066;
case 0x54f068:goto L54f068;
case 0x54f06d:c.instructions+=2;goto B54f06d;
case 0x54f072:c.instructions+=1;goto B54f072;
case 0x54f074:goto L54f074;
case 0x54f079:c.instructions+=1;goto B54f079;
case 0x54f07b:goto L54f07b;
case 0x54f07e:c.instructions+=2;goto B54f07e;
case 0x54f080:c.instructions+=1;goto B54f080;
case 0x54f082:goto L54f082;
case 0x54f085:c.instructions+=1;goto B54f085;
case 0x54f087:goto L54f087;
case 0x54f08a:c.instructions+=1;goto B54f08a;
case 0x54f091:goto L54f091;
case 0x54f094:c.instructions+=2;goto B54f094;
case 0x54f096:c.instructions+=1;goto B54f096;
case 0x54f098:goto L54f098;
case 0x54f09b:c.instructions+=1;goto B54f09b;
case 0x54f09d:goto L54f09d;
case 0x54f0a0:c.instructions+=3;goto B54f0a0;
case 0x54f0a6:c.instructions+=2;goto B54f0a6;
case 0x54f0a9:c.instructions+=1;goto B54f0a9;
case 0x54f0ac:goto L54f0ac;
case 0x54f0af:c.instructions+=20;goto B54f0af;
case 0x54f0b2:c.instructions+=19;goto B54f0b2;
case 0x54f0b5:c.instructions+=18;goto B54f0b5;
case 0x54f0b7:c.instructions+=17;goto B54f0b7;
case 0x54f0ba:c.instructions+=16;goto B54f0ba;
case 0x54f0bc:c.instructions+=15;goto B54f0bc;
case 0x54f0bf:c.instructions+=14;goto B54f0bf;
case 0x54f0c5:c.instructions+=13;goto B54f0c5;
case 0x54f0cb:c.instructions+=12;goto B54f0cb;
case 0x54f0d1:c.instructions+=11;goto B54f0d1;
case 0x54f0d2:c.instructions+=10;goto B54f0d2;
case 0x54f0d8:c.instructions+=9;goto B54f0d8;
case 0x54f0de:c.instructions+=8;goto B54f0de;
case 0x54f0e4:c.instructions+=7;goto B54f0e4;
case 0x54f0ea:c.instructions+=6;goto B54f0ea;
case 0x54f0f0:c.instructions+=5;goto B54f0f0;
case 0x54f0f6:c.instructions+=4;goto B54f0f6;
case 0x54f0fc:c.instructions+=3;goto B54f0fc;
case 0x54f0ff:c.instructions+=2;goto B54f0ff;
case 0x54f101:c.instructions+=1;goto B54f101;
case 0x54f103:goto L54f103;
case 0x54f105:c.instructions+=2;goto B54f105;
case 0x54f107:c.instructions+=1;goto B54f107;
case 0x54f10a:goto L54f10a;
case 0x54f10c:c.instructions+=2;goto B54f10c;
case 0x54f10e:c.instructions+=1;goto B54f10e;
case 0x54f111:goto L54f111;
case 0x54f113:c.instructions+=2;goto B54f113;
case 0x54f115:c.instructions+=1;goto B54f115;
case 0x54f118:goto L54f118;
case 0x54f11a:c.instructions+=2;goto B54f11a;
case 0x54f11c:c.instructions+=1;goto B54f11c;
case 0x54f11f:goto L54f11f;
case 0x54f122:c.instructions+=6;goto B54f122;
case 0x54f126:c.instructions+=5;goto B54f126;
case 0x54f127:c.instructions+=4;goto B54f127;
case 0x54f12b:c.instructions+=3;goto B54f12b;
case 0x54f12c:c.instructions+=2;goto B54f12c;
case 0x54f12d:c.instructions+=1;goto B54f12d;
case 0x54f132:goto L54f132;
case 0x54f135:c.instructions+=6;goto B54f135;
case 0x54f139:c.instructions+=5;goto B54f139;
case 0x54f13a:c.instructions+=4;goto B54f13a;
case 0x54f13e:c.instructions+=3;goto B54f13e;
case 0x54f13f:c.instructions+=2;goto B54f13f;
case 0x54f140:c.instructions+=1;goto B54f140;
case 0x54f145:goto L54f145;
case 0x54f148:c.instructions+=12;goto B54f148;
case 0x54f14c:c.instructions+=11;goto B54f14c;
case 0x54f150:c.instructions+=10;goto B54f150;
case 0x54f153:c.instructions+=9;goto B54f153;
case 0x54f155:c.instructions+=8;goto B54f155;
case 0x54f157:c.instructions+=7;goto B54f157;
case 0x54f15a:c.instructions+=6;goto B54f15a;
case 0x54f160:c.instructions+=5;goto B54f160;
case 0x54f161:c.instructions+=4;goto B54f161;
case 0x54f162:c.instructions+=3;goto B54f162;
case 0x54f163:c.instructions+=2;goto B54f163;
case 0x54f166:c.instructions+=1;goto B54f166;
case 0x54f170:goto L54f170;
case 0x54f174:c.instructions+=7;goto B54f174;
case 0x54f176:c.instructions+=6;goto B54f176;
case 0x54f178:c.instructions+=5;goto B54f178;
case 0x54f17b:c.instructions+=4;goto B54f17b;
case 0x54f17c:c.instructions+=3;goto B54f17c;
case 0x54f17f:c.instructions+=2;goto B54f17f;
case 0x54f183:c.instructions+=1;goto B54f183;
case 0x54f190:goto L54f190;
case 0x54f193:c.instructions+=9;goto B54f193;
case 0x54f194:c.instructions+=8;goto B54f194;
case 0x54f195:c.instructions+=7;goto B54f195;
case 0x54f197:c.instructions+=6;goto B54f197;
case 0x54f19d:c.instructions+=5;goto B54f19d;
case 0x54f1a2:c.instructions+=4;goto B54f1a2;
case 0x54f1a3:c.instructions+=3;goto B54f1a3;
case 0x54f1a7:c.instructions+=2;goto B54f1a7;
case 0x54f1a8:c.instructions+=1;goto B54f1a8;
case 0x54f1ad:goto L54f1ad;
case 0x54f1b3:c.instructions+=7;goto B54f1b3;
case 0x54f1b4:c.instructions+=6;goto B54f1b4;
case 0x54f1b8:c.instructions+=5;goto B54f1b8;
case 0x54f1b9:c.instructions+=4;goto B54f1b9;
case 0x54f1bd:c.instructions+=3;goto B54f1bd;
case 0x54f1bf:c.instructions+=2;goto B54f1bf;
case 0x54f1c0:c.instructions+=1;goto B54f1c0;
case 0x54f1c5:goto L54f1c5;
case 0x54f1c8:c.instructions+=4;goto B54f1c8;
case 0x54f1cc:c.instructions+=3;goto B54f1cc;
case 0x54f1cd:c.instructions+=2;goto B54f1cd;
case 0x54f1ce:c.instructions+=1;goto B54f1ce;
case 0x54f1d3:goto L54f1d3;
case 0x54f1d7:c.instructions+=7;goto B54f1d7;
case 0x54f1da:c.instructions+=6;goto B54f1da;
case 0x54f1e0:c.instructions+=5;goto B54f1e0;
case 0x54f1e5:c.instructions+=4;goto B54f1e5;
case 0x54f1e6:c.instructions+=3;goto B54f1e6;
case 0x54f1ea:c.instructions+=2;goto B54f1ea;
case 0x54f1eb:c.instructions+=1;goto B54f1eb;
case 0x54f1f0:goto L54f1f0;
case 0x54f1f6:c.instructions+=7;goto B54f1f6;
case 0x54f1f7:c.instructions+=6;goto B54f1f7;
case 0x54f1fb:c.instructions+=5;goto B54f1fb;
case 0x54f1fc:c.instructions+=4;goto B54f1fc;
case 0x54f200:c.instructions+=3;goto B54f200;
case 0x54f202:c.instructions+=2;goto B54f202;
case 0x54f203:c.instructions+=1;goto B54f203;
case 0x54f208:goto L54f208;
case 0x54f20b:c.instructions+=5;goto B54f20b;
case 0x54f20e:c.instructions+=4;goto B54f20e;
case 0x54f212:c.instructions+=3;goto B54f212;
case 0x54f213:c.instructions+=2;goto B54f213;
case 0x54f214:c.instructions+=1;goto B54f214;
case 0x54f219:goto L54f219;
case 0x54f21c:c.instructions+=5;goto B54f21c;
case 0x54f222:c.instructions+=4;goto B54f222;
case 0x54f225:c.instructions+=3;goto B54f225;
case 0x54f226:c.instructions+=2;goto B54f226;
case 0x54f228:c.instructions+=1;goto B54f228;
case 0x54f22d:goto L54f22d;
case 0x54f230:c.instructions+=6;goto B54f230;
case 0x54f236:c.instructions+=5;goto B54f236;
case 0x54f23b:c.instructions+=4;goto B54f23b;
case 0x54f23c:c.instructions+=3;goto B54f23c;
case 0x54f240:c.instructions+=2;goto B54f240;
case 0x54f241:c.instructions+=1;goto B54f241;
case 0x54f246:goto L54f246;
case 0x54f24c:c.instructions+=7;goto B54f24c;
case 0x54f24d:c.instructions+=6;goto B54f24d;
case 0x54f251:c.instructions+=5;goto B54f251;
case 0x54f252:c.instructions+=4;goto B54f252;
case 0x54f256:c.instructions+=3;goto B54f256;
case 0x54f258:c.instructions+=2;goto B54f258;
case 0x54f259:c.instructions+=1;goto B54f259;
case 0x54f25e:goto L54f25e;
case 0x54f261:c.instructions+=4;goto B54f261;
case 0x54f265:c.instructions+=3;goto B54f265;
case 0x54f266:c.instructions+=2;goto B54f266;
case 0x54f267:c.instructions+=1;goto B54f267;
case 0x54f26c:goto L54f26c;
case 0x54f26f:c.instructions+=6;goto B54f26f;
case 0x54f275:c.instructions+=5;goto B54f275;
case 0x54f27a:c.instructions+=4;goto B54f27a;
case 0x54f27b:c.instructions+=3;goto B54f27b;
case 0x54f27f:c.instructions+=2;goto B54f27f;
case 0x54f280:c.instructions+=1;goto B54f280;
case 0x54f285:goto L54f285;
case 0x54f28b:c.instructions+=7;goto B54f28b;
case 0x54f28c:c.instructions+=6;goto B54f28c;
case 0x54f290:c.instructions+=5;goto B54f290;
case 0x54f291:c.instructions+=4;goto B54f291;
case 0x54f295:c.instructions+=3;goto B54f295;
case 0x54f297:c.instructions+=2;goto B54f297;
case 0x54f298:c.instructions+=1;goto B54f298;
case 0x54f29d:goto L54f29d;
case 0x54f2a0:c.instructions+=5;goto B54f2a0;
case 0x54f2a3:c.instructions+=4;goto B54f2a3;
case 0x54f2a7:c.instructions+=3;goto B54f2a7;
case 0x54f2a8:c.instructions+=2;goto B54f2a8;
case 0x54f2a9:c.instructions+=1;goto B54f2a9;
case 0x54f2ae:goto L54f2ae;
case 0x54f2b1:c.instructions+=6;goto B54f2b1;
case 0x54f2b7:c.instructions+=5;goto B54f2b7;
case 0x54f2bc:c.instructions+=4;goto B54f2bc;
case 0x54f2bd:c.instructions+=3;goto B54f2bd;
case 0x54f2c1:c.instructions+=2;goto B54f2c1;
case 0x54f2c2:c.instructions+=1;goto B54f2c2;
case 0x54f2c7:goto L54f2c7;
case 0x54f2cd:c.instructions+=7;goto B54f2cd;
case 0x54f2ce:c.instructions+=6;goto B54f2ce;
case 0x54f2d2:c.instructions+=5;goto B54f2d2;
case 0x54f2d3:c.instructions+=4;goto B54f2d3;
case 0x54f2d7:c.instructions+=3;goto B54f2d7;
case 0x54f2d9:c.instructions+=2;goto B54f2d9;
case 0x54f2da:c.instructions+=1;goto B54f2da;
case 0x54f2df:goto L54f2df;
case 0x54f2e2:c.instructions+=4;goto B54f2e2;
case 0x54f2e6:c.instructions+=3;goto B54f2e6;
case 0x54f2e7:c.instructions+=2;goto B54f2e7;
case 0x54f2e8:c.instructions+=1;goto B54f2e8;
case 0x54f2ed:goto L54f2ed;
case 0x54f2f0:c.instructions+=6;goto B54f2f0;
case 0x54f2f7:c.instructions+=5;goto B54f2f7;
case 0x54f2fa:c.instructions+=4;goto B54f2fa;
case 0x54f2fb:c.instructions+=3;goto B54f2fb;
case 0x54f300:c.instructions+=2;goto B54f300;
case 0x54f302:c.instructions+=1;goto B54f302;
case 0x54f304:goto L54f304;
case 0x54f305:c.instructions+=1;goto B54f305;
case 0x54f307:goto L54f307;
case 0x54f308:c.instructions+=1;goto B54f308;
case 0x54f30a:goto L54f30a;
case 0x54f30f:c.instructions+=2;goto B54f30f;
case 0x54f314:c.instructions+=1;goto B54f314;
case 0x54f316:goto L54f316;
case 0x54f31b:c.instructions+=1;goto B54f31b;
case 0x54f31d:goto L54f31d;
case 0x54f320:c.instructions+=2;goto B54f320;
case 0x54f322:c.instructions+=1;goto B54f322;
case 0x54f324:goto L54f324;
case 0x54f327:c.instructions+=1;goto B54f327;
case 0x54f329:goto L54f329;
case 0x54f32c:c.instructions+=1;goto B54f32c;
case 0x54f333:goto L54f333;
case 0x54f336:c.instructions+=2;goto B54f336;
case 0x54f338:c.instructions+=1;goto B54f338;
case 0x54f33a:goto L54f33a;
case 0x54f33d:c.instructions+=1;goto B54f33d;
case 0x54f33f:goto L54f33f;
case 0x54f342:c.instructions+=3;goto B54f342;
case 0x54f348:c.instructions+=2;goto B54f348;
case 0x54f34b:c.instructions+=1;goto B54f34b;
case 0x54f34e:goto L54f34e;
case 0x54f351:c.instructions+=20;goto B54f351;
case 0x54f354:c.instructions+=19;goto B54f354;
case 0x54f357:c.instructions+=18;goto B54f357;
case 0x54f359:c.instructions+=17;goto B54f359;
case 0x54f35c:c.instructions+=16;goto B54f35c;
case 0x54f35e:c.instructions+=15;goto B54f35e;
case 0x54f361:c.instructions+=14;goto B54f361;
case 0x54f367:c.instructions+=13;goto B54f367;
case 0x54f36d:c.instructions+=12;goto B54f36d;
case 0x54f373:c.instructions+=11;goto B54f373;
case 0x54f374:c.instructions+=10;goto B54f374;
case 0x54f37a:c.instructions+=9;goto B54f37a;
case 0x54f380:c.instructions+=8;goto B54f380;
case 0x54f386:c.instructions+=7;goto B54f386;
case 0x54f38c:c.instructions+=6;goto B54f38c;
case 0x54f392:c.instructions+=5;goto B54f392;
case 0x54f398:c.instructions+=4;goto B54f398;
case 0x54f39e:c.instructions+=3;goto B54f39e;
case 0x54f3a1:c.instructions+=2;goto B54f3a1;
case 0x54f3a3:c.instructions+=1;goto B54f3a3;
case 0x54f3a5:goto L54f3a5;
case 0x54f3a7:c.instructions+=2;goto B54f3a7;
case 0x54f3a9:c.instructions+=1;goto B54f3a9;
case 0x54f3ac:goto L54f3ac;
case 0x54f3ae:c.instructions+=2;goto B54f3ae;
case 0x54f3b0:c.instructions+=1;goto B54f3b0;
case 0x54f3b3:goto L54f3b3;
case 0x54f3b5:c.instructions+=2;goto B54f3b5;
case 0x54f3b7:c.instructions+=1;goto B54f3b7;
case 0x54f3ba:goto L54f3ba;
case 0x54f3bc:c.instructions+=2;goto B54f3bc;
case 0x54f3be:c.instructions+=1;goto B54f3be;
case 0x54f3c1:goto L54f3c1;
case 0x54f3c4:c.instructions+=6;goto B54f3c4;
case 0x54f3c8:c.instructions+=5;goto B54f3c8;
case 0x54f3c9:c.instructions+=4;goto B54f3c9;
case 0x54f3cd:c.instructions+=3;goto B54f3cd;
case 0x54f3ce:c.instructions+=2;goto B54f3ce;
case 0x54f3cf:c.instructions+=1;goto B54f3cf;
case 0x54f3d4:goto L54f3d4;
case 0x54f3d7:c.instructions+=6;goto B54f3d7;
case 0x54f3db:c.instructions+=5;goto B54f3db;
case 0x54f3dc:c.instructions+=4;goto B54f3dc;
case 0x54f3e0:c.instructions+=3;goto B54f3e0;
case 0x54f3e1:c.instructions+=2;goto B54f3e1;
case 0x54f3e2:c.instructions+=1;goto B54f3e2;
case 0x54f3e7:goto L54f3e7;
case 0x54f3ea:c.instructions+=12;goto B54f3ea;
case 0x54f3ee:c.instructions+=11;goto B54f3ee;
case 0x54f3f2:c.instructions+=10;goto B54f3f2;
case 0x54f3f5:c.instructions+=9;goto B54f3f5;
case 0x54f3f7:c.instructions+=8;goto B54f3f7;
case 0x54f3f9:c.instructions+=7;goto B54f3f9;
case 0x54f3fc:c.instructions+=6;goto B54f3fc;
case 0x54f402:c.instructions+=5;goto B54f402;
case 0x54f403:c.instructions+=4;goto B54f403;
case 0x54f404:c.instructions+=3;goto B54f404;
case 0x54f405:c.instructions+=2;goto B54f405;
case 0x54f408:c.instructions+=1;goto B54f408;
case 0x54f410:goto L54f410;
case 0x54f416:c.instructions+=11;goto B54f416;
case 0x54f417:c.instructions+=10;goto B54f417;
case 0x54f418:c.instructions+=9;goto B54f418;
case 0x54f419:c.instructions+=8;goto B54f419;
case 0x54f41a:c.instructions+=7;goto B54f41a;
case 0x54f41c:c.instructions+=6;goto B54f41c;
case 0x54f422:c.instructions+=5;goto B54f422;
case 0x54f427:c.instructions+=4;goto B54f427;
case 0x54f428:c.instructions+=3;goto B54f428;
case 0x54f42c:c.instructions+=2;goto B54f42c;
case 0x54f42d:c.instructions+=1;goto B54f42d;
case 0x54f432:goto L54f432;
case 0x54f438:c.instructions+=7;goto B54f438;
case 0x54f439:c.instructions+=6;goto B54f439;
case 0x54f43d:c.instructions+=5;goto B54f43d;
case 0x54f43e:c.instructions+=4;goto B54f43e;
case 0x54f445:c.instructions+=3;goto B54f445;
case 0x54f447:c.instructions+=2;goto B54f447;
case 0x54f448:c.instructions+=1;goto B54f448;
case 0x54f44d:goto L54f44d;
case 0x54f450:c.instructions+=4;goto B54f450;
case 0x54f457:c.instructions+=3;goto B54f457;
case 0x54f458:c.instructions+=2;goto B54f458;
case 0x54f459:c.instructions+=1;goto B54f459;
case 0x54f45e:goto L54f45e;
case 0x54f465:c.instructions+=7;goto B54f465;
case 0x54f468:c.instructions+=6;goto B54f468;
case 0x54f46e:c.instructions+=5;goto B54f46e;
case 0x54f473:c.instructions+=4;goto B54f473;
case 0x54f474:c.instructions+=3;goto B54f474;
case 0x54f47b:c.instructions+=2;goto B54f47b;
case 0x54f47c:c.instructions+=1;goto B54f47c;
case 0x54f481:goto L54f481;
case 0x54f487:c.instructions+=7;goto B54f487;
case 0x54f488:c.instructions+=6;goto B54f488;
case 0x54f48f:c.instructions+=5;goto B54f48f;
case 0x54f490:c.instructions+=4;goto B54f490;
case 0x54f497:c.instructions+=3;goto B54f497;
case 0x54f499:c.instructions+=2;goto B54f499;
case 0x54f49a:c.instructions+=1;goto B54f49a;
case 0x54f49f:goto L54f49f;
case 0x54f4a2:c.instructions+=5;goto B54f4a2;
case 0x54f4a5:c.instructions+=4;goto B54f4a5;
case 0x54f4a9:c.instructions+=3;goto B54f4a9;
case 0x54f4aa:c.instructions+=2;goto B54f4aa;
case 0x54f4ab:c.instructions+=1;goto B54f4ab;
case 0x54f4b0:goto L54f4b0;
case 0x54f4b2:c.instructions+=6;goto B54f4b2;
case 0x54f4b8:c.instructions+=5;goto B54f4b8;
case 0x54f4bd:c.instructions+=4;goto B54f4bd;
case 0x54f4be:c.instructions+=3;goto B54f4be;
case 0x54f4c5:c.instructions+=2;goto B54f4c5;
case 0x54f4c6:c.instructions+=1;goto B54f4c6;
case 0x54f4cb:goto L54f4cb;
case 0x54f4d1:c.instructions+=7;goto B54f4d1;
case 0x54f4d2:c.instructions+=6;goto B54f4d2;
case 0x54f4d9:c.instructions+=5;goto B54f4d9;
case 0x54f4da:c.instructions+=4;goto B54f4da;
case 0x54f4e1:c.instructions+=3;goto B54f4e1;
case 0x54f4e3:c.instructions+=2;goto B54f4e3;
case 0x54f4e4:c.instructions+=1;goto B54f4e4;
case 0x54f4e9:goto L54f4e9;
case 0x54f4ec:c.instructions+=4;goto B54f4ec;
case 0x54f4f3:c.instructions+=3;goto B54f4f3;
case 0x54f4f4:c.instructions+=2;goto B54f4f4;
case 0x54f4f5:c.instructions+=1;goto B54f4f5;
case 0x54f4fa:goto L54f4fa;
case 0x54f4fc:c.instructions+=6;goto B54f4fc;
case 0x54f502:c.instructions+=5;goto B54f502;
case 0x54f507:c.instructions+=4;goto B54f507;
case 0x54f508:c.instructions+=3;goto B54f508;
case 0x54f50f:c.instructions+=2;goto B54f50f;
case 0x54f510:c.instructions+=1;goto B54f510;
case 0x54f515:goto L54f515;
case 0x54f51b:c.instructions+=7;goto B54f51b;
case 0x54f51c:c.instructions+=6;goto B54f51c;
case 0x54f523:c.instructions+=5;goto B54f523;
case 0x54f524:c.instructions+=4;goto B54f524;
case 0x54f52b:c.instructions+=3;goto B54f52b;
case 0x54f52d:c.instructions+=2;goto B54f52d;
case 0x54f52e:c.instructions+=1;goto B54f52e;
case 0x54f533:goto L54f533;
case 0x54f536:c.instructions+=5;goto B54f536;
case 0x54f539:c.instructions+=4;goto B54f539;
case 0x54f540:c.instructions+=3;goto B54f540;
case 0x54f541:c.instructions+=2;goto B54f541;
case 0x54f542:c.instructions+=1;goto B54f542;
case 0x54f547:goto L54f547;
case 0x54f54b:c.instructions+=6;goto B54f54b;
case 0x54f551:c.instructions+=5;goto B54f551;
case 0x54f556:c.instructions+=4;goto B54f556;
case 0x54f557:c.instructions+=3;goto B54f557;
case 0x54f55e:c.instructions+=2;goto B54f55e;
case 0x54f55f:c.instructions+=1;goto B54f55f;
case 0x54f564:goto L54f564;
case 0x54f56a:c.instructions+=7;goto B54f56a;
case 0x54f56b:c.instructions+=6;goto B54f56b;
case 0x54f572:c.instructions+=5;goto B54f572;
case 0x54f573:c.instructions+=4;goto B54f573;
case 0x54f57a:c.instructions+=3;goto B54f57a;
case 0x54f57c:c.instructions+=2;goto B54f57c;
case 0x54f57d:c.instructions+=1;goto B54f57d;
case 0x54f582:goto L54f582;
case 0x54f585:c.instructions+=4;goto B54f585;
case 0x54f58c:c.instructions+=3;goto B54f58c;
case 0x54f58d:c.instructions+=2;goto B54f58d;
case 0x54f58e:c.instructions+=1;goto B54f58e;
case 0x54f593:goto L54f593;
case 0x54f597:c.instructions+=6;goto B54f597;
case 0x54f59d:c.instructions+=5;goto B54f59d;
case 0x54f5a2:c.instructions+=4;goto B54f5a2;
case 0x54f5a3:c.instructions+=3;goto B54f5a3;
case 0x54f5aa:c.instructions+=2;goto B54f5aa;
case 0x54f5ab:c.instructions+=1;goto B54f5ab;
case 0x54f5b0:goto L54f5b0;
case 0x54f5b6:c.instructions+=7;goto B54f5b6;
case 0x54f5b7:c.instructions+=6;goto B54f5b7;
case 0x54f5be:c.instructions+=5;goto B54f5be;
case 0x54f5bf:c.instructions+=4;goto B54f5bf;
case 0x54f5c6:c.instructions+=3;goto B54f5c6;
case 0x54f5c8:c.instructions+=2;goto B54f5c8;
case 0x54f5c9:c.instructions+=1;goto B54f5c9;
case 0x54f5ce:goto L54f5ce;
case 0x54f5d1:c.instructions+=5;goto B54f5d1;
case 0x54f5d4:c.instructions+=4;goto B54f5d4;
case 0x54f5db:c.instructions+=3;goto B54f5db;
case 0x54f5dc:c.instructions+=2;goto B54f5dc;
case 0x54f5dd:c.instructions+=1;goto B54f5dd;
case 0x54f5e2:goto L54f5e2;
case 0x54f5e6:c.instructions+=6;goto B54f5e6;
case 0x54f5ec:c.instructions+=5;goto B54f5ec;
case 0x54f5f1:c.instructions+=4;goto B54f5f1;
case 0x54f5f2:c.instructions+=3;goto B54f5f2;
case 0x54f5f6:c.instructions+=2;goto B54f5f6;
case 0x54f5f7:c.instructions+=1;goto B54f5f7;
case 0x54f5fc:goto L54f5fc;
case 0x54f602:c.instructions+=7;goto B54f602;
case 0x54f603:c.instructions+=6;goto B54f603;
case 0x54f607:c.instructions+=5;goto B54f607;
case 0x54f608:c.instructions+=4;goto B54f608;
case 0x54f60c:c.instructions+=3;goto B54f60c;
case 0x54f60e:c.instructions+=2;goto B54f60e;
case 0x54f60f:c.instructions+=1;goto B54f60f;
case 0x54f614:goto L54f614;
case 0x54f617:c.instructions+=4;goto B54f617;
case 0x54f61b:c.instructions+=3;goto B54f61b;
case 0x54f61c:c.instructions+=2;goto B54f61c;
case 0x54f61d:c.instructions+=1;goto B54f61d;
case 0x54f622:goto L54f622;
case 0x54f626:c.instructions+=11;goto B54f626;
case 0x54f62a:c.instructions+=10;goto B54f62a;
case 0x54f62d:c.instructions+=9;goto B54f62d;
case 0x54f62e:c.instructions+=8;goto B54f62e;
case 0x54f62f:c.instructions+=7;goto B54f62f;
case 0x54f630:c.instructions+=6;goto B54f630;
case 0x54f634:c.instructions+=5;goto B54f634;
case 0x54f635:c.instructions+=4;goto B54f635;
case 0x54f636:c.instructions+=3;goto B54f636;
case 0x54f637:c.instructions+=2;goto B54f637;
case 0x54f639:c.instructions+=1;goto B54f639;
case 0x54f63e:goto L54f63e;
case 0x54f644:c.instructions+=3;goto B54f644;
case 0x54f645:c.instructions+=2;goto B54f645;
case 0x54f647:c.instructions+=1;goto B54f647;
case 0x54f64c:goto L54f64c;
case 0x54f64f:c.instructions+=3;goto B54f64f;
case 0x54f651:c.instructions+=2;goto B54f651;
case 0x54f653:c.instructions+=1;goto B54f653;
case 0x54f656:goto L54f656;
case 0x54f65c:c.instructions+=5;goto B54f65c;
case 0x54f661:c.instructions+=4;goto B54f661;
case 0x54f662:c.instructions+=3;goto B54f662;
case 0x54f666:c.instructions+=2;goto B54f666;
case 0x54f667:c.instructions+=1;goto B54f667;
case 0x54f66c:goto L54f66c;
case 0x54f672:c.instructions+=7;goto B54f672;
case 0x54f673:c.instructions+=6;goto B54f673;
case 0x54f677:c.instructions+=5;goto B54f677;
case 0x54f678:c.instructions+=4;goto B54f678;
case 0x54f67c:c.instructions+=3;goto B54f67c;
case 0x54f67e:c.instructions+=2;goto B54f67e;
case 0x54f67f:c.instructions+=1;goto B54f67f;
case 0x54f684:goto L54f684;
case 0x54f687:c.instructions+=4;goto B54f687;
case 0x54f68b:c.instructions+=3;goto B54f68b;
case 0x54f68c:c.instructions+=2;goto B54f68c;
case 0x54f68d:c.instructions+=1;goto B54f68d;
case 0x54f692:goto L54f692;
case 0x54f695:c.instructions+=6;goto B54f695;
case 0x54f69b:c.instructions+=5;goto B54f69b;
case 0x54f6a0:c.instructions+=4;goto B54f6a0;
case 0x54f6a1:c.instructions+=3;goto B54f6a1;
case 0x54f6a5:c.instructions+=2;goto B54f6a5;
case 0x54f6a6:c.instructions+=1;goto B54f6a6;
case 0x54f6ab:goto L54f6ab;
case 0x54f6b1:c.instructions+=7;goto B54f6b1;
case 0x54f6b2:c.instructions+=6;goto B54f6b2;
case 0x54f6b6:c.instructions+=5;goto B54f6b6;
case 0x54f6b7:c.instructions+=4;goto B54f6b7;
case 0x54f6bb:c.instructions+=3;goto B54f6bb;
case 0x54f6bd:c.instructions+=2;goto B54f6bd;
case 0x54f6be:c.instructions+=1;goto B54f6be;
case 0x54f6c3:goto L54f6c3;
case 0x54f6c6:c.instructions+=5;goto B54f6c6;
case 0x54f6c9:c.instructions+=4;goto B54f6c9;
case 0x54f6cd:c.instructions+=3;goto B54f6cd;
case 0x54f6ce:c.instructions+=2;goto B54f6ce;
case 0x54f6cf:c.instructions+=1;goto B54f6cf;
case 0x54f6d4:goto L54f6d4;
case 0x54f6d7:c.instructions+=6;goto B54f6d7;
case 0x54f6de:c.instructions+=5;goto B54f6de;
case 0x54f6e1:c.instructions+=4;goto B54f6e1;
case 0x54f6e2:c.instructions+=3;goto B54f6e2;
case 0x54f6e7:c.instructions+=2;goto B54f6e7;
case 0x54f6e9:c.instructions+=1;goto B54f6e9;
case 0x54f6eb:goto L54f6eb;
case 0x54f6ec:c.instructions+=1;goto B54f6ec;
case 0x54f6ee:goto L54f6ee;
case 0x54f6ef:c.instructions+=1;goto B54f6ef;
case 0x54f6f1:goto L54f6f1;
case 0x54f6f6:c.instructions+=2;goto B54f6f6;
case 0x54f6fb:c.instructions+=1;goto B54f6fb;
case 0x54f6fd:goto L54f6fd;
case 0x54f702:c.instructions+=1;goto B54f702;
case 0x54f704:goto L54f704;
case 0x54f707:c.instructions+=3;goto B54f707;
case 0x54f709:c.instructions+=2;goto B54f709;
case 0x54f70e:c.instructions+=1;goto B54f70e;
case 0x54f710:goto L54f710;
case 0x54f713:c.instructions+=1;goto B54f713;
case 0x54f715:goto L54f715;
case 0x54f718:c.instructions+=1;goto B54f718;
case 0x54f71b:goto L54f71b;
case 0x54f71e:c.instructions+=2;goto B54f71e;
case 0x54f720:c.instructions+=1;goto B54f720;
case 0x54f722:goto L54f722;
case 0x54f725:c.instructions+=1;goto B54f725;
case 0x54f727:goto L54f727;
case 0x54f72a:c.instructions+=3;goto B54f72a;
case 0x54f72c:c.instructions+=2;goto B54f72c;
case 0x54f72f:c.instructions+=1;goto B54f72f;
case 0x54f732:goto L54f732;
case 0x54f735:c.instructions+=20;goto B54f735;
case 0x54f738:c.instructions+=19;goto B54f738;
case 0x54f73b:c.instructions+=18;goto B54f73b;
case 0x54f73d:c.instructions+=17;goto B54f73d;
case 0x54f740:c.instructions+=16;goto B54f740;
case 0x54f742:c.instructions+=15;goto B54f742;
case 0x54f745:c.instructions+=14;goto B54f745;
case 0x54f74b:c.instructions+=13;goto B54f74b;
case 0x54f751:c.instructions+=12;goto B54f751;
case 0x54f757:c.instructions+=11;goto B54f757;
case 0x54f758:c.instructions+=10;goto B54f758;
case 0x54f75e:c.instructions+=9;goto B54f75e;
case 0x54f764:c.instructions+=8;goto B54f764;
case 0x54f76a:c.instructions+=7;goto B54f76a;
case 0x54f770:c.instructions+=6;goto B54f770;
case 0x54f776:c.instructions+=5;goto B54f776;
case 0x54f77c:c.instructions+=4;goto B54f77c;
case 0x54f782:c.instructions+=3;goto B54f782;
case 0x54f785:c.instructions+=2;goto B54f785;
case 0x54f787:c.instructions+=1;goto B54f787;
case 0x54f789:goto L54f789;
case 0x54f78b:c.instructions+=2;goto B54f78b;
case 0x54f78d:c.instructions+=1;goto B54f78d;
case 0x54f790:goto L54f790;
case 0x54f792:c.instructions+=2;goto B54f792;
case 0x54f794:c.instructions+=1;goto B54f794;
case 0x54f797:goto L54f797;
case 0x54f799:c.instructions+=2;goto B54f799;
case 0x54f79b:c.instructions+=1;goto B54f79b;
case 0x54f79e:goto L54f79e;
case 0x54f7a0:c.instructions+=2;goto B54f7a0;
case 0x54f7a2:c.instructions+=1;goto B54f7a2;
case 0x54f7a5:goto L54f7a5;
case 0x54f7a8:c.instructions+=6;goto B54f7a8;
case 0x54f7ac:c.instructions+=5;goto B54f7ac;
case 0x54f7ad:c.instructions+=4;goto B54f7ad;
case 0x54f7b1:c.instructions+=3;goto B54f7b1;
case 0x54f7b2:c.instructions+=2;goto B54f7b2;
case 0x54f7b3:c.instructions+=1;goto B54f7b3;
case 0x54f7b8:goto L54f7b8;
case 0x54f7bb:c.instructions+=6;goto B54f7bb;
case 0x54f7bf:c.instructions+=5;goto B54f7bf;
case 0x54f7c0:c.instructions+=4;goto B54f7c0;
case 0x54f7c4:c.instructions+=3;goto B54f7c4;
case 0x54f7c5:c.instructions+=2;goto B54f7c5;
case 0x54f7c6:c.instructions+=1;goto B54f7c6;
case 0x54f7cb:goto L54f7cb;
case 0x54f7ce:c.instructions+=14;goto B54f7ce;
case 0x54f7d2:c.instructions+=13;goto B54f7d2;
case 0x54f7d6:c.instructions+=12;goto B54f7d6;
case 0x54f7d9:c.instructions+=11;goto B54f7d9;
case 0x54f7db:c.instructions+=10;goto B54f7db;
case 0x54f7dd:c.instructions+=9;goto B54f7dd;
case 0x54f7e0:c.instructions+=8;goto B54f7e0;
case 0x54f7e6:c.instructions+=7;goto B54f7e6;
case 0x54f7e7:c.instructions+=6;goto B54f7e7;
case 0x54f7e8:c.instructions+=5;goto B54f7e8;
case 0x54f7e9:c.instructions+=4;goto B54f7e9;
case 0x54f7ea:c.instructions+=3;goto B54f7ea;
case 0x54f7eb:c.instructions+=2;goto B54f7eb;
case 0x54f7f1:c.instructions+=1;goto B54f7f1;
case 0x54f800:goto L54f800;
case 0x54f804:c.instructions+=7;goto B54f804;
case 0x54f806:c.instructions+=6;goto B54f806;
case 0x54f808:c.instructions+=5;goto B54f808;
case 0x54f80b:c.instructions+=4;goto B54f80b;
case 0x54f80c:c.instructions+=3;goto B54f80c;
case 0x54f80f:c.instructions+=2;goto B54f80f;
case 0x54f813:c.instructions+=1;goto B54f813;
case 0x54f820:goto L54f820;
case 0x54f823:c.instructions+=9;goto B54f823;
case 0x54f824:c.instructions+=8;goto B54f824;
case 0x54f825:c.instructions+=7;goto B54f825;
case 0x54f827:c.instructions+=6;goto B54f827;
case 0x54f82d:c.instructions+=5;goto B54f82d;
case 0x54f832:c.instructions+=4;goto B54f832;
case 0x54f833:c.instructions+=3;goto B54f833;
case 0x54f837:c.instructions+=2;goto B54f837;
case 0x54f838:c.instructions+=1;goto B54f838;
case 0x54f83d:goto L54f83d;
case 0x54f843:c.instructions+=7;goto B54f843;
case 0x54f844:c.instructions+=6;goto B54f844;
case 0x54f848:c.instructions+=5;goto B54f848;
case 0x54f849:c.instructions+=4;goto B54f849;
case 0x54f84d:c.instructions+=3;goto B54f84d;
case 0x54f84f:c.instructions+=2;goto B54f84f;
case 0x54f850:c.instructions+=1;goto B54f850;
case 0x54f855:goto L54f855;
case 0x54f858:c.instructions+=4;goto B54f858;
case 0x54f85c:c.instructions+=3;goto B54f85c;
case 0x54f85d:c.instructions+=2;goto B54f85d;
case 0x54f85e:c.instructions+=1;goto B54f85e;
case 0x54f863:goto L54f863;
case 0x54f867:c.instructions+=7;goto B54f867;
case 0x54f86a:c.instructions+=6;goto B54f86a;
case 0x54f870:c.instructions+=5;goto B54f870;
case 0x54f875:c.instructions+=4;goto B54f875;
case 0x54f876:c.instructions+=3;goto B54f876;
case 0x54f87a:c.instructions+=2;goto B54f87a;
case 0x54f87b:c.instructions+=1;goto B54f87b;
case 0x54f880:goto L54f880;
case 0x54f886:c.instructions+=7;goto B54f886;
case 0x54f887:c.instructions+=6;goto B54f887;
case 0x54f88b:c.instructions+=5;goto B54f88b;
case 0x54f88c:c.instructions+=4;goto B54f88c;
case 0x54f890:c.instructions+=3;goto B54f890;
case 0x54f892:c.instructions+=2;goto B54f892;
case 0x54f893:c.instructions+=1;goto B54f893;
case 0x54f898:goto L54f898;
case 0x54f89b:c.instructions+=5;goto B54f89b;
case 0x54f89e:c.instructions+=4;goto B54f89e;
case 0x54f8a2:c.instructions+=3;goto B54f8a2;
case 0x54f8a3:c.instructions+=2;goto B54f8a3;
case 0x54f8a4:c.instructions+=1;goto B54f8a4;
case 0x54f8a9:goto L54f8a9;
case 0x54f8ac:c.instructions+=5;goto B54f8ac;
case 0x54f8b2:c.instructions+=4;goto B54f8b2;
case 0x54f8b5:c.instructions+=3;goto B54f8b5;
case 0x54f8b6:c.instructions+=2;goto B54f8b6;
case 0x54f8b8:c.instructions+=1;goto B54f8b8;
case 0x54f8bd:goto L54f8bd;
case 0x54f8c0:c.instructions+=21;goto B54f8c0;
case 0x54f8c3:c.instructions+=20;goto B54f8c3;
case 0x54f8c6:c.instructions+=19;goto B54f8c6;
case 0x54f8c9:c.instructions+=18;goto B54f8c9;
case 0x54f8cb:c.instructions+=17;goto B54f8cb;
case 0x54f8ce:c.instructions+=16;goto B54f8ce;
case 0x54f8d0:c.instructions+=15;goto B54f8d0;
case 0x54f8d3:c.instructions+=14;goto B54f8d3;
case 0x54f8d9:c.instructions+=13;goto B54f8d9;
case 0x54f8df:c.instructions+=12;goto B54f8df;
case 0x54f8e5:c.instructions+=11;goto B54f8e5;
case 0x54f8e6:c.instructions+=10;goto B54f8e6;
case 0x54f8ec:c.instructions+=9;goto B54f8ec;
case 0x54f8f2:c.instructions+=8;goto B54f8f2;
case 0x54f8f8:c.instructions+=7;goto B54f8f8;
case 0x54f8fe:c.instructions+=6;goto B54f8fe;
case 0x54f904:c.instructions+=5;goto B54f904;
case 0x54f90a:c.instructions+=4;goto B54f90a;
case 0x54f910:c.instructions+=3;goto B54f910;
case 0x54f913:c.instructions+=2;goto B54f913;
case 0x54f915:c.instructions+=1;goto B54f915;
case 0x54f917:goto L54f917;
case 0x54f919:c.instructions+=2;goto B54f919;
case 0x54f91b:c.instructions+=1;goto B54f91b;
case 0x54f91e:goto L54f91e;
case 0x54f920:c.instructions+=2;goto B54f920;
case 0x54f922:c.instructions+=1;goto B54f922;
case 0x54f925:goto L54f925;
case 0x54f927:c.instructions+=2;goto B54f927;
case 0x54f929:c.instructions+=1;goto B54f929;
case 0x54f92c:goto L54f92c;
case 0x54f92e:c.instructions+=2;goto B54f92e;
case 0x54f930:c.instructions+=1;goto B54f930;
case 0x54f933:goto L54f933;
case 0x54f936:c.instructions+=6;goto B54f936;
case 0x54f93a:c.instructions+=5;goto B54f93a;
case 0x54f93b:c.instructions+=4;goto B54f93b;
case 0x54f93f:c.instructions+=3;goto B54f93f;
case 0x54f940:c.instructions+=2;goto B54f940;
case 0x54f941:c.instructions+=1;goto B54f941;
case 0x54f946:goto L54f946;
case 0x54f949:c.instructions+=6;goto B54f949;
case 0x54f94d:c.instructions+=5;goto B54f94d;
case 0x54f94e:c.instructions+=4;goto B54f94e;
case 0x54f952:c.instructions+=3;goto B54f952;
case 0x54f953:c.instructions+=2;goto B54f953;
case 0x54f954:c.instructions+=1;goto B54f954;
case 0x54f959:goto L54f959;
case 0x54f95c:c.instructions+=12;goto B54f95c;
case 0x54f960:c.instructions+=11;goto B54f960;
case 0x54f964:c.instructions+=10;goto B54f964;
case 0x54f967:c.instructions+=9;goto B54f967;
case 0x54f969:c.instructions+=8;goto B54f969;
case 0x54f96b:c.instructions+=7;goto B54f96b;
case 0x54f96e:c.instructions+=6;goto B54f96e;
case 0x54f974:c.instructions+=5;goto B54f974;
case 0x54f975:c.instructions+=4;goto B54f975;
case 0x54f976:c.instructions+=3;goto B54f976;
case 0x54f977:c.instructions+=2;goto B54f977;
case 0x54f97a:c.instructions+=1;goto B54f97a;
case 0x54f980:goto L54f980;
case 0x54f982:c.instructions+=8;goto B54f982;
case 0x54f987:c.instructions+=7;goto B54f987;
case 0x54f98d:c.instructions+=6;goto B54f98d;
case 0x54f98e:c.instructions+=5;goto B54f98e;
case 0x54f995:c.instructions+=4;goto B54f995;
case 0x54f996:c.instructions+=3;goto B54f996;
case 0x54f99b:c.instructions+=2;goto B54f99b;
case 0x54f99d:c.instructions+=1;goto B54f99d;
case 0x54f99f:goto L54f99f;
case 0x54f9a1:c.instructions+=1;goto B54f9a1;
case 0x54f9a6:goto L54f9a6;
case 0x54f9a9:c.instructions+=4;goto B54f9a9;
case 0x54f9ad:c.instructions+=3;goto B54f9ad;
case 0x54f9af:c.instructions+=2;goto B54f9af;
case 0x54f9b7:c.instructions+=1;goto B54f9b7;
case 0x54f9b9:goto L54f9b9;
case 0x54f9bb:c.instructions+=1;goto B54f9bb;
case 0x54f9c0:goto L54f9c0;
case 0x54f9c5:c.instructions+=4;goto B54f9c5;
case 0x54f9c9:c.instructions+=3;goto B54f9c9;
case 0x54f9d0:c.instructions+=2;goto B54f9d0;
case 0x54f9d3:c.instructions+=1;goto B54f9d3;
case 0x54f9d4:goto L54f9d4;
case 0x54f9d6:c.instructions+=1;goto B54f9d6;
case 0x54f9db:goto L54f9db;
case 0x54f9df:c.instructions+=3;goto B54f9df;
case 0x54f9e6:c.instructions+=2;goto B54f9e6;
case 0x54f9e9:c.instructions+=1;goto B54f9e9;
case 0x54f9f0:goto L54f9f0;
case 0x54f9f1:c.instructions+=5;goto B54f9f1;
case 0x54f9f3:c.instructions+=4;goto B54f9f3;
case 0x54f9f6:c.instructions+=3;goto B54f9f6;
case 0x54f9f9:c.instructions+=2;goto B54f9f9;
case 0x54f9fb:c.instructions+=1;goto B54f9fb;
case 0x54fa01:goto L54fa01;
case 0x54fa07:c.instructions+=2;goto B54fa07;
case 0x54fa09:c.instructions+=1;goto B54fa09;
case 0x54fa0f:goto L54fa0f;
case 0x54fa10:c.instructions+=6;goto B54fa10;
case 0x54fa14:c.instructions+=5;goto B54fa14;
case 0x54fa17:c.instructions+=4;goto B54fa17;
case 0x54fa18:c.instructions+=3;goto B54fa18;
case 0x54fa1b:c.instructions+=2;goto B54fa1b;
case 0x54fa1c:c.instructions+=1;goto B54fa1c;
case 0x54fa1e:goto L54fa1e;
case 0x54fa21:c.instructions+=2;goto B54fa21;
case 0x54fa23:c.instructions+=1;goto B54fa23;
case 0x54fa28:goto L54fa28;
case 0x54fa2a:c.instructions+=1;goto B54fa2a;
case 0x54fa2c:goto L54fa2c;
case 0x54fa2f:c.instructions+=5;goto B54fa2f;
case 0x54fa32:c.instructions+=4;goto B54fa32;
case 0x54fa33:c.instructions+=3;goto B54fa33;
case 0x54fa35:c.instructions+=2;goto B54fa35;
case 0x54fa36:c.instructions+=1;goto B54fa36;
case 0x54fa3b:goto L54fa3b;
case 0x54fa3e:goto L54fa3e;
case 0x54fa40:c.instructions+=1;goto B54fa40;
case 0x54fa45:goto L54fa45;
case 0x54fa47:goto L54fa47;
case 0x54fa4a:c.instructions+=1;goto B54fa4a;
case 0x54fa4c:goto L54fa4c;
case 0x54fa4f:c.instructions+=2;goto B54fa4f;
case 0x54fa51:c.instructions+=1;goto B54fa51;
case 0x54fa56:goto L54fa56;
case 0x54fa58:c.instructions+=1;goto B54fa58;
case 0x54fa5a:goto L54fa5a;
case 0x54fa5d:c.instructions+=5;goto B54fa5d;
case 0x54fa60:c.instructions+=4;goto B54fa60;
case 0x54fa61:c.instructions+=3;goto B54fa61;
case 0x54fa63:c.instructions+=2;goto B54fa63;
case 0x54fa64:c.instructions+=1;goto B54fa64;
case 0x54fa69:goto L54fa69;
case 0x54fa6c:goto L54fa6c;
case 0x54fa6e:c.instructions+=1;goto B54fa6e;
case 0x54fa73:goto L54fa73;
case 0x54fa76:c.instructions+=2;goto B54fa76;
case 0x54fa78:c.instructions+=1;goto B54fa78;
case 0x54fa7a:goto L54fa7a;
case 0x54fa80:c.instructions+=2;goto B54fa80;
case 0x54fa82:c.instructions+=1;goto B54fa82;
case 0x54fa84:goto L54fa84;
case 0x54fa87:c.instructions+=4;goto B54fa87;
case 0x54fa8a:c.instructions+=3;goto B54fa8a;
case 0x54fa8b:c.instructions+=2;goto B54fa8b;
case 0x54fa8c:c.instructions+=1;goto B54fa8c;
case 0x54fa91:goto L54fa91;
case 0x54fa94:goto L54fa94;
case 0x54fa96:c.instructions+=1;goto B54fa96;
case 0x54fa9b:goto L54fa9b;
case 0x54fa9e:c.instructions+=1;goto B54fa9e;
case 0x54faa0:goto L54faa0;
case 0x54faa6:c.instructions+=2;goto B54faa6;
case 0x54faa8:c.instructions+=1;goto B54faa8;
case 0x54faad:goto L54faad;
case 0x54faaf:c.instructions+=1;goto B54faaf;
case 0x54fab4:goto L54fab4;
case 0x54fab5:c.instructions+=4;goto B54fab5;
case 0x54fab6:c.instructions+=3;goto B54fab6;
case 0x54fab7:c.instructions+=2;goto B54fab7;
case 0x54fab8:c.instructions+=1;goto B54fab8;
case 0x54fabb:goto L54fabb;
case 0x54fabe:c.instructions+=1;goto B54fabe;
case 0x54fac0:goto L54fac0;
case 0x54fac6:c.instructions+=2;goto B54fac6;
case 0x54fac8:c.instructions+=1;goto B54fac8;
case 0x54facd:goto L54facd;
case 0x54facf:c.instructions+=1;goto B54facf;
case 0x54fad4:goto L54fad4;
case 0x54fad5:c.instructions+=2;goto B54fad5;
case 0x54fad6:c.instructions+=1;goto B54fad6;
case 0x54fad7:goto L54fad7;
case 0x54fad8:c.instructions+=1;goto B54fad8;
case 0x54fae0:goto L54fae0;
case 0x54fae5:c.instructions+=4;goto B54fae5;
case 0x54fae8:c.instructions+=3;goto B54fae8;
case 0x54fae9:c.instructions+=2;goto B54fae9;
case 0x54faeb:c.instructions+=1;goto B54faeb;
case 0x54faed:goto L54faed;
case 0x54faf0:c.instructions+=1;goto B54faf0;
case 0x54faf2:goto L54faf2;
case 0x54faf7:goto L54faf7;
case 0x54faf9:goto L54faf9;
case 0x54fafb:c.instructions+=1;goto B54fafb;
case 0x54fb00:goto L54fb00;
case 0x54fb02:c.instructions+=1;goto B54fb02;
case 0x54fb07:goto L54fb07;
case 0x54fb0e:c.instructions+=1;goto B54fb0e;
case 0x54fb10:goto L54fb10;
case 0x54fb17:c.instructions+=1;goto B54fb17;
case 0x54fb19:goto L54fb19;
case 0x54fb1a:c.instructions+=2;goto B54fb1a;
case 0x54fb1c:c.instructions+=1;goto B54fb1c;
case 0x54fb21:goto L54fb21;
case 0x54fb24:c.instructions+=2;goto B54fb24;
case 0x54fb29:c.instructions+=1;goto B54fb29;
case 0x54fb2e:goto L54fb2e;
case 0x54fb2f:c.instructions+=4;goto B54fb2f;
case 0x54fb34:c.instructions+=3;goto B54fb34;
case 0x54fb39:c.instructions+=2;goto B54fb39;
case 0x54fb3a:c.instructions+=1;goto B54fb3a;
case 0x54fb3f:goto L54fb3f;
case 0x54fb42:c.instructions+=5;goto B54fb42;
case 0x54fb43:c.instructions+=4;goto B54fb43;
case 0x54fb46:c.instructions+=3;goto B54fb46;
case 0x54fb48:c.instructions+=2;goto B54fb48;
case 0x54fb4c:c.instructions+=1;goto B54fb4c;
case 0x54fb51:goto L54fb51;
case 0x54fb52:c.instructions+=1;goto B54fb52;
case 0x54fb53:goto L54fb53;
case 0x54fb55:c.instructions+=1;goto B54fb55;
case 0x54fb5a:goto L54fb5a;
case 0x54fb5d:c.instructions+=3;goto B54fb5d;
case 0x54fb5f:c.instructions+=2;goto B54fb5f;
case 0x54fb63:c.instructions+=1;goto B54fb63;
case 0x54fb68:goto L54fb68;
case 0x54fb69:c.instructions+=1;goto B54fb69;
case 0x54fb70:goto L54fb70;
case 0x54fb74:c.instructions+=4;goto B54fb74;
case 0x54fb76:c.instructions+=3;goto B54fb76;
case 0x54fb77:c.instructions+=2;goto B54fb77;
case 0x54fb79:c.instructions+=1;goto B54fb79;
case 0x54fb7b:goto L54fb7b;
case 0x54fb7e:c.instructions+=3;goto B54fb7e;
case 0x54fb81:c.instructions+=2;goto B54fb81;
case 0x54fb86:c.instructions+=1;goto B54fb86;
case 0x54fb88:goto L54fb88;
case 0x54fb8f:c.instructions+=2;goto B54fb8f;
case 0x54fb90:c.instructions+=1;goto B54fb90;
case 0x54fb97:goto L54fb97;
case 0x54fb9c:c.instructions+=1;goto B54fb9c;
case 0x54fba2:goto L54fba2;
case 0x54fba3:goto L54fba3;
case 0x54fba4:c.instructions+=1;goto B54fba4;
case 0x54fba7:goto L54fba7;
case 0x54fbac:c.instructions+=4;goto B54fbac;
case 0x54fbad:c.instructions+=3;goto B54fbad;
case 0x54fbb3:c.instructions+=2;goto B54fbb3;
case 0x54fbb4:c.instructions+=1;goto B54fbb4;
case 0x54fbb7:goto L54fbb7;
case 0x54fbbb:c.instructions+=3;goto B54fbbb;
case 0x54fbbc:c.instructions+=2;goto B54fbbc;
case 0x54fbbe:c.instructions+=1;goto B54fbbe;
case 0x54fbc3:goto L54fbc3;
case 0x54fbc6:c.instructions+=4;goto B54fbc6;
case 0x54fbcb:c.instructions+=3;goto B54fbcb;
case 0x54fbd0:c.instructions+=2;goto B54fbd0;
case 0x54fbd1:c.instructions+=1;goto B54fbd1;
case 0x54fbd6:goto L54fbd6;
case 0x54fbd9:c.instructions+=2;goto B54fbd9;
case 0x54fbdb:c.instructions+=1;goto B54fbdb;
case 0x54fbdd:goto L54fbdd;
case 0x54fbde:c.instructions+=5;goto B54fbde;
case 0x54fbdf:c.instructions+=4;goto B54fbdf;
case 0x54fbe7:c.instructions+=3;goto B54fbe7;
case 0x54fbef:c.instructions+=2;goto B54fbef;
case 0x54fbf5:c.instructions+=1;goto B54fbf5;
case 0x54fbfa:goto L54fbfa;
case 0x54fbfe:c.instructions+=3;goto B54fbfe;
case 0x54fbff:c.instructions+=2;goto B54fbff;
case 0x54fc01:c.instructions+=1;goto B54fc01;
case 0x54fc06:goto L54fc06;
case 0x54fc09:c.instructions+=4;goto B54fc09;
case 0x54fc0e:c.instructions+=3;goto B54fc0e;
case 0x54fc13:c.instructions+=2;goto B54fc13;
case 0x54fc14:c.instructions+=1;goto B54fc14;
case 0x54fc19:goto L54fc19;
case 0x54fc1c:c.instructions+=2;goto B54fc1c;
case 0x54fc1e:c.instructions+=1;goto B54fc1e;
case 0x54fc20:goto L54fc20;
case 0x54fc21:c.instructions+=5;goto B54fc21;
case 0x54fc22:c.instructions+=4;goto B54fc22;
case 0x54fc2a:c.instructions+=3;goto B54fc2a;
case 0x54fc32:c.instructions+=2;goto B54fc32;
case 0x54fc38:c.instructions+=1;goto B54fc38;
case 0x54fc3d:goto L54fc3d;
case 0x54fc41:c.instructions+=3;goto B54fc41;
case 0x54fc42:c.instructions+=2;goto B54fc42;
case 0x54fc44:c.instructions+=1;goto B54fc44;
case 0x54fc49:goto L54fc49;
case 0x54fc4c:c.instructions+=4;goto B54fc4c;
case 0x54fc51:c.instructions+=3;goto B54fc51;
case 0x54fc56:c.instructions+=2;goto B54fc56;
case 0x54fc57:c.instructions+=1;goto B54fc57;
case 0x54fc5c:goto L54fc5c;
case 0x54fc5f:c.instructions+=2;goto B54fc5f;
case 0x54fc61:c.instructions+=1;goto B54fc61;
case 0x54fc67:goto L54fc67;
case 0x54fc6d:c.instructions+=5;goto B54fc6d;
case 0x54fc6e:c.instructions+=4;goto B54fc6e;
case 0x54fc6f:c.instructions+=3;goto B54fc6f;
case 0x54fc77:c.instructions+=2;goto B54fc77;
case 0x54fc7f:c.instructions+=1;goto B54fc7f;
case 0x54fd40:goto L54fd40;
case 0x54fd41:c.instructions+=3;goto B54fd41;
case 0x54fd43:c.instructions+=2;goto B54fd43;
case 0x54fd46:c.instructions+=1;goto B54fd46;
case 0x54fd48:goto L54fd48;
case 0x54fd4d:c.instructions+=2;goto B54fd4d;
case 0x54fd4f:c.instructions+=1;goto B54fd4f;
case 0x54fd51:goto L54fd51;
case 0x54fd56:c.instructions+=2;goto B54fd56;
case 0x54fd58:c.instructions+=1;goto B54fd58;
case 0x54fd5a:goto L54fd5a;
case 0x54fd5b:c.instructions+=1;goto B54fd5b;
case 0x54fd60:goto L54fd60;
case 0x54fd63:c.instructions+=1;goto B54fd63;
case 0x54fd6d:goto L54fd6d;
case 0x54fd6e:c.instructions+=4;goto B54fd6e;
case 0x54fd74:c.instructions+=3;goto B54fd74;
case 0x54fd75:c.instructions+=2;goto B54fd75;
case 0x54fd78:c.instructions+=1;goto B54fd78;
case 0x54fd7d:goto L54fd7d;
case 0x54fd7f:c.instructions+=3;goto B54fd7f;
case 0x54fd81:c.instructions+=2;goto B54fd81;
case 0x54fd82:c.instructions+=1;goto B54fd82;
case 0x54fd87:goto L54fd87;
case 0x54fd8a:c.instructions+=1;goto B54fd8a;
case 0x54fd8f:goto L54fd8f;
case 0x54fd95:c.instructions+=3;goto B54fd95;
case 0x54fd97:c.instructions+=2;goto B54fd97;
case 0x54fd98:c.instructions+=1;goto B54fd98;
case 0x54fd9a:goto L54fd9a;
case 0x54fd9c:c.instructions+=2;goto B54fd9c;
case 0x54fd9e:c.instructions+=1;goto B54fd9e;
case 0x54fda0:goto L54fda0;
case 0x54fdaa:goto L54fdaa;
case 0x54fdad:goto L54fdad;
case 0x54fdae:c.instructions+=1;goto B54fdae;
case 0x54fdb0:goto L54fdb0;
case 0x54fdb1:c.instructions+=5;goto B54fdb1;
case 0x54fdb5:c.instructions+=4;goto B54fdb5;
case 0x54fdb7:c.instructions+=3;goto B54fdb7;
case 0x54fdb8:c.instructions+=2;goto B54fdb8;
case 0x54fdba:c.instructions+=1;goto B54fdba;
case 0x54fdc0:goto L54fdc0;
case 0x54fdc1:c.instructions+=3;goto B54fdc1;
case 0x54fdc5:c.instructions+=2;goto B54fdc5;
case 0x54fdc8:c.instructions+=1;goto B54fdc8;
case 0x54fdca:goto L54fdca;
case 0x54fdcd:c.instructions+=1;goto B54fdcd;
case 0x54fdcf:goto L54fdcf;
case 0x54fdd2:c.instructions+=4;goto B54fdd2;
case 0x54fdd3:c.instructions+=3;goto B54fdd3;
case 0x54fdd6:c.instructions+=2;goto B54fdd6;
case 0x54fdd8:c.instructions+=1;goto B54fdd8;
case 0x54fdda:goto L54fdda;
case 0x54fddc:c.instructions+=3;goto B54fddc;
case 0x54fde1:c.instructions+=2;goto B54fde1;
case 0x54fde3:c.instructions+=1;goto B54fde3;
case 0x54fde8:goto L54fde8;
case 0x54fdeb:c.instructions+=1;goto B54fdeb;
case 0x54fded:goto L54fded;
case 0x54fdef:c.instructions+=1;goto B54fdef;
case 0x54fdf4:goto L54fdf4;
case 0x54fdf6:c.instructions+=1;goto B54fdf6;
case 0x54fdf8:goto L54fdf8;
case 0x54fdf9:c.instructions+=2;goto B54fdf9;
case 0x54fdfb:c.instructions+=1;goto B54fdfb;
case 0x54fe00:goto L54fe00;
case 0x54fe02:goto L54fe02;
case 0x54fe04:c.instructions+=1;goto B54fe04;
case 0x54fe09:goto L54fe09;
case 0x54fe0b:c.instructions+=1;goto B54fe0b;
case 0x54fe10:goto L54fe10;
case 0x54fe13:c.instructions+=2;goto B54fe13;
case 0x54fe15:c.instructions+=1;goto B54fe15;
case 0x54fe17:goto L54fe17;
case 0x54fe1a:c.instructions+=11;goto B54fe1a;
case 0x54fe1d:c.instructions+=10;goto B54fe1d;
case 0x54fe20:c.instructions+=9;goto B54fe20;
case 0x54fe22:c.instructions+=8;goto B54fe22;
case 0x54fe25:c.instructions+=7;goto B54fe25;
case 0x54fe27:c.instructions+=6;goto B54fe27;
case 0x54fe28:c.instructions+=5;goto B54fe28;
case 0x54fe29:c.instructions+=4;goto B54fe29;
case 0x54fe2a:c.instructions+=3;goto B54fe2a;
case 0x54fe2d:c.instructions+=2;goto B54fe2d;
case 0x54fe2e:c.instructions+=1;goto B54fe2e;
case 0x54fe31:goto L54fe31;
case 0x54fe34:c.instructions+=6;goto B54fe34;
case 0x54fe36:c.instructions+=5;goto B54fe36;
case 0x54fe38:c.instructions+=4;goto B54fe38;
case 0x54fe3b:c.instructions+=3;goto B54fe3b;
case 0x54fe3d:c.instructions+=2;goto B54fe3d;
case 0x54fe40:c.instructions+=1;goto B54fe40;
case 0x54fe41:goto L54fe41;
case 0x54fe42:goto L54fe42;
case 0x54fe43:c.instructions+=2;goto B54fe43;
case 0x54fe44:c.instructions+=1;goto B54fe44;
case 0x54fe50:goto L54fe50;
case 0x54fe51:c.instructions+=9;goto B54fe51;
case 0x54fe53:c.instructions+=8;goto B54fe53;
case 0x54fe56:c.instructions+=7;goto B54fe56;
case 0x54fe57:c.instructions+=6;goto B54fe57;
case 0x54fe5a:c.instructions+=5;goto B54fe5a;
case 0x54fe5b:c.instructions+=4;goto B54fe5b;
case 0x54fe5d:c.instructions+=3;goto B54fe5d;
case 0x54fe5f:c.instructions+=2;goto B54fe5f;
case 0x54fe62:c.instructions+=1;goto B54fe62;
case 0x54fe68:goto L54fe68;
case 0x54fe6b:c.instructions+=9;goto B54fe6b;
case 0x54fe6e:c.instructions+=8;goto B54fe6e;
case 0x54fe6f:c.instructions+=7;goto B54fe6f;
case 0x54fe71:c.instructions+=6;goto B54fe71;
case 0x54fe74:c.instructions+=5;goto B54fe74;
case 0x54fe75:c.instructions+=4;goto B54fe75;
case 0x54fe76:c.instructions+=3;goto B54fe76;
case 0x54fe77:c.instructions+=2;goto B54fe77;
case 0x54fe7c:c.instructions+=1;goto B54fe7c;
case 0x54fe81:goto L54fe81;
case 0x54fe86:c.instructions+=4;goto B54fe86;
case 0x54fe89:c.instructions+=3;goto B54fe89;
case 0x54fe8b:c.instructions+=2;goto B54fe8b;
case 0x54fe90:c.instructions+=1;goto B54fe90;
case 0x54fe92:goto L54fe92;
case 0x54fe98:goto L54fe98;
case 0x54fe9b:c.instructions+=2;goto B54fe9b;
case 0x54fe9f:c.instructions+=1;goto B54fe9f;
case 0x54fea1:goto L54fea1;
case 0x54fea2:goto L54fea2;
case 0x54fea5:c.instructions+=5;goto B54fea5;
case 0x54fea7:c.instructions+=4;goto B54fea7;
case 0x54feaa:c.instructions+=3;goto B54feaa;
case 0x54feae:c.instructions+=2;goto B54feae;
case 0x54feaf:c.instructions+=1;goto B54feaf;
case 0x54feb4:goto L54feb4;
case 0x54feb6:c.instructions+=1;goto B54feb6;
case 0x54feb8:goto L54feb8;
case 0x54feba:c.instructions+=4;goto B54feba;
case 0x54fec1:c.instructions+=3;goto B54fec1;
case 0x54fec3:c.instructions+=2;goto B54fec3;
case 0x54fec6:c.instructions+=1;goto B54fec6;
case 0x54fec8:goto L54fec8;
case 0x54fecd:c.instructions+=3;goto B54fecd;
case 0x54fece:c.instructions+=2;goto B54fece;
case 0x54fed3:c.instructions+=1;goto B54fed3;
case 0x54fed8:goto L54fed8;
case 0x54fedb:c.instructions+=6;goto B54fedb;
case 0x54fedf:c.instructions+=5;goto B54fedf;
case 0x54fee5:c.instructions+=4;goto B54fee5;
case 0x54fee6:c.instructions+=3;goto B54fee6;
case 0x54fee7:c.instructions+=2;goto B54fee7;
case 0x54fee9:c.instructions+=1;goto B54fee9;
case 0x54feee:goto L54feee;
case 0x54fef1:c.instructions+=3;goto B54fef1;
case 0x54fef4:c.instructions+=2;goto B54fef4;
case 0x54fefa:c.instructions+=1;goto B54fefa;
case 0x54fefd:goto L54fefd;
case 0x54ff00:c.instructions+=7;goto B54ff00;
case 0x54ff03:c.instructions+=6;goto B54ff03;
case 0x54ff05:c.instructions+=5;goto B54ff05;
case 0x54ff0d:c.instructions+=4;goto B54ff0d;
case 0x54ff10:c.instructions+=3;goto B54ff10;
case 0x54ff13:c.instructions+=2;goto B54ff13;
case 0x54ff16:c.instructions+=1;goto B54ff16;
case 0x54ff18:goto L54ff18;
case 0x54ff19:goto L54ff19;
case 0x54ff1c:c.instructions+=1;goto B54ff1c;
case 0x54ff26:goto L54ff26;
case 0x54ff27:c.instructions+=4;goto B54ff27;
case 0x54ff28:c.instructions+=3;goto B54ff28;
case 0x54ff2a:c.instructions+=2;goto B54ff2a;
case 0x54ff2b:c.instructions+=1;goto B54ff2b;
case 0x54ff30:goto L54ff30;
case 0x54ff33:c.instructions+=2;goto B54ff33;
case 0x54ff34:c.instructions+=1;goto B54ff34;
case 0x54ff39:goto L54ff39;
case 0x54ff3a:c.instructions+=1;goto B54ff3a;
case 0x54ff3f:goto L54ff3f;
case 0x54ff42:c.instructions+=2;goto B54ff42;
case 0x54ff44:c.instructions+=1;goto B54ff44;
case 0x54ff46:goto L54ff46;
case 0x54ff4d:goto L54ff4d;
case 0x54ff52:c.instructions+=1;goto B54ff52;
case 0x54ff57:goto L54ff57;
case 0x54ff5e:c.instructions+=2;goto B54ff5e;
case 0x54ff60:c.instructions+=1;goto B54ff60;
case 0x54ff62:goto L54ff62;
case 0x54ff68:c.instructions+=3;goto B54ff68;
case 0x54ff69:c.instructions+=2;goto B54ff69;
case 0x54ff6b:c.instructions+=1;goto B54ff6b;
case 0x54ff70:goto L54ff70;
case 0x54ff73:c.instructions+=1;goto B54ff73;
case 0x54ff74:goto L54ff74;
case 0x54ff7a:c.instructions+=3;goto B54ff7a;
case 0x54ff7b:c.instructions+=2;goto B54ff7b;
case 0x54ff7d:c.instructions+=1;goto B54ff7d;
case 0x54ff82:goto L54ff82;
case 0x54ff85:c.instructions+=1;goto B54ff85;
case 0x54ff90:goto L54ff90;
case 0x54ff91:c.instructions+=8;goto B54ff91;
case 0x54ff93:c.instructions+=7;goto B54ff93;
case 0x54ff94:c.instructions+=6;goto B54ff94;
case 0x54ff97:c.instructions+=5;goto B54ff97;
case 0x54ff9a:c.instructions+=4;goto B54ff9a;
case 0x54ffa0:c.instructions+=3;goto B54ffa0;
case 0x54ffa3:c.instructions+=2;goto B54ffa3;
case 0x54ffa5:c.instructions+=1;goto B54ffa5;
case 0x54ffab:goto L54ffab;
case 0x54ffb0:c.instructions+=1;goto B54ffb0;
case 0x54ffb5:goto L54ffb5;
case 0x54ffbb:c.instructions+=2;goto B54ffbb;
case 0x54ffc0:c.instructions+=1;goto B54ffc0;
case 0x54ffc5:goto L54ffc5;
case 0x54ffcb:c.instructions+=7;goto B54ffcb;
case 0x54ffd1:c.instructions+=6;goto B54ffd1;
case 0x54ffd7:c.instructions+=5;goto B54ffd7;
case 0x54ffdd:c.instructions+=4;goto B54ffdd;
case 0x54ffe0:c.instructions+=3;goto B54ffe0;
case 0x54ffe2:c.instructions+=2;goto B54ffe2;
case 0x54ffe5:c.instructions+=1;goto B54ffe5;
case 0x54ffe7:goto L54ffe7;
case 0x54ffea:c.instructions+=1;goto B54ffea;
case 0x54ffed:goto L54ffed;
case 0x54fff0:c.instructions+=4;goto B54fff0;
case 0x54fff3:c.instructions+=3;goto B54fff3;
case 0x54fff5:c.instructions+=2;goto B54fff5;
case 0x54fff8:c.instructions+=1;goto B54fff8;
case 0x54fffa:goto L54fffa;
case 0x54fffd:c.instructions+=1;goto B54fffd;
default:missing_instruction(c.pc);}
B54f001:L54f001:{c.instructions+=4;NFSU2_TR(0x54f001);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54f005:{NFSU2_TR(0x54f005);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f006:{NFSU2_TR(0x54f006);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f007:{NFSU2_TR(0x54f007);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f00cull));
TAIL_STATIC(0x4953e0u,495);
}
B54f00c:L54f00c:{c.instructions+=7;NFSU2_TR(0x54f00c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54f00f:{NFSU2_TR(0x54f00f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54f015:{NFSU2_TR(0x54f015);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f01a:{NFSU2_TR(0x54f01a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f01b:{NFSU2_TR(0x54f01b);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B54f01f:{NFSU2_TR(0x54f01f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f020:{NFSU2_TR(0x54f020);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f025ull));
TAIL_STATIC(0x43dda0u,43d);
}
B54f025:L54f025:{c.instructions+=8;NFSU2_TR(0x54f025);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54f02b:{NFSU2_TR(0x54f02b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f02c:{NFSU2_TR(0x54f02c);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B54f030:{NFSU2_TR(0x54f030);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f031:{NFSU2_TR(0x54f031);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B54f035:{NFSU2_TR(0x54f035);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f037:{NFSU2_TR(0x54f037);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f038:{NFSU2_TR(0x54f038);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f03dull));
TAIL_STATIC(0x50c960u,50c);
}
B54f03d:L54f03d:{c.instructions+=6;NFSU2_TR(0x54f03d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f040:{NFSU2_TR(0x54f040);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B54f043:{NFSU2_TR(0x54f043);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54f047:{NFSU2_TR(0x54f047);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f048:{NFSU2_TR(0x54f048);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f049:{NFSU2_TR(0x54f049);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f04eull));
TAIL_STATIC(0x4953e0u,495);
}
B54f04e:L54f04e:{c.instructions+=7;NFSU2_TR(0x54f04e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54f051:{NFSU2_TR(0x54f051);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f055:{NFSU2_TR(0x54f055);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B54f058:{NFSU2_TR(0x54f058);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B54f059:{NFSU2_TR(0x54f059);
w4(R+4,u32(0x367b3e04ull));
}
B54f05e:{NFSU2_TR(0x54f05e);
__builtin_memmove((R+8),(R+4),4);
}
B54f060:{NFSU2_TR(0x54f060);
if(r1(R+518)){{goto L54f074;}}
}
B54f062:L54f062:{c.instructions+=2;NFSU2_TR(0x54f062);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B54f063:{NFSU2_TR(0x54f063);
if(r1(R+518)){{goto L54f068;}}
}
B54f065:L54f065:{c.instructions+=2;NFSU2_TR(0x54f065);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B54f066:{NFSU2_TR(0x54f066);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54f07b;}}
}
B54f068:L54f068:{c.instructions+=3;NFSU2_TR(0x54f068);
w4(R+4,u32(0x374f6465ull));
}
B54f06d:{NFSU2_TR(0x54f06d);
w4(R+8,u32(0x760bdc9dull));
}
B54f072:{NFSU2_TR(0x54f072);
{goto L54f07b;}
}
B54f074:L54f074:{c.instructions+=2;NFSU2_TR(0x54f074);
w4(R+8,u32(0x9943d584ull));
}
B54f079:{NFSU2_TR(0x54f079);
__builtin_memmove((R+4),(R+8),4);
}
B54f07b:L54f07b:{c.instructions+=3;NFSU2_TR(0x54f07b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f07e:{NFSU2_TR(0x54f07e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54f080:{NFSU2_TR(0x54f080);
if(r1(R+518)){{goto L54f091;}}
}
B54f082:L54f082:{c.instructions+=2;NFSU2_TR(0x54f082);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54f085:{NFSU2_TR(0x54f085);
if(r1(R+518)){{goto L54f091;}}
}
B54f087:L54f087:{c.instructions+=2;NFSU2_TR(0x54f087);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54f08a:{NFSU2_TR(0x54f08a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B54f091:L54f091:{c.instructions+=3;NFSU2_TR(0x54f091);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f094:{NFSU2_TR(0x54f094);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54f096:{NFSU2_TR(0x54f096);
if(r1(R+518)){{goto L54f0ac;}}
}
B54f098:L54f098:{c.instructions+=2;NFSU2_TR(0x54f098);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54f09b:{NFSU2_TR(0x54f09b);
if(r1(R+518)){{goto L54f0ac;}}
}
B54f09d:L54f09d:{c.instructions+=4;NFSU2_TR(0x54f09d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54f0a0:{NFSU2_TR(0x54f0a0);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x400000ull))));
}
B54f0a6:{NFSU2_TR(0x54f0a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54f0a9:{NFSU2_TR(0x54f0a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54f0ac:L54f0ac:{c.instructions+=21;NFSU2_TR(0x54f0ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54f0af:{NFSU2_TR(0x54f0af);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B54f0b2:{NFSU2_TR(0x54f0b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B54f0b5:{NFSU2_TR(0x54f0b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B54f0b7:{NFSU2_TR(0x54f0b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54f0ba:{NFSU2_TR(0x54f0ba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B54f0bc:{NFSU2_TR(0x54f0bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54f0bf:{NFSU2_TR(0x54f0bf);
{u32 ea_=u32(r4(R+24)+u32(256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54f0c5:{NFSU2_TR(0x54f0c5);
{u32 ea_=u32(r4(R+24)+u32(264u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B54f0cb:{NFSU2_TR(0x54f0cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54f0d1:{NFSU2_TR(0x54f0d1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B54f0d2:{NFSU2_TR(0x54f0d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54f0d8:{NFSU2_TR(0x54f0d8);
{u32 ea_=u32(r4(R+24)+u32(296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B54f0de:{NFSU2_TR(0x54f0de);
{u32 ea_=u32(r4(R+24)+u32(256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B54f0e4:{NFSU2_TR(0x54f0e4);
{u32 ea_=u32(r4(R+24)+u32(288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54f0ea:{NFSU2_TR(0x54f0ea);
{u32 ea_=u32(r4(R+24)+u32(264u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B54f0f0:{NFSU2_TR(0x54f0f0);
{u32 ea_=u32(r4(R+24)+u32(296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B54f0f6:{NFSU2_TR(0x54f0f6);
{u32 ea_=u32(r4(R+24)+u32(288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B54f0fc:{NFSU2_TR(0x54f0fc);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54f0ff:{NFSU2_TR(0x54f0ff);
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
B54f101:{NFSU2_TR(0x54f101);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54f10a;}}
}
B54f103:L54f103:{c.instructions+=3;NFSU2_TR(0x54f103);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B54f105:{NFSU2_TR(0x54f105);
__builtin_memmove((R+4),(R+28),4);
}
B54f107:{NFSU2_TR(0x54f107);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f10aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B54f10a:L54f10a:{c.instructions+=3;NFSU2_TR(0x54f10a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B54f10c:{NFSU2_TR(0x54f10c);
__builtin_memmove((R+4),(R+28),4);
}
B54f10e:{NFSU2_TR(0x54f10e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f111ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B54f111:L54f111:{c.instructions+=3;NFSU2_TR(0x54f111);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B54f113:{NFSU2_TR(0x54f113);
__builtin_memmove((R+4),(R+28),4);
}
B54f115:{NFSU2_TR(0x54f115);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f118ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B54f118:L54f118:{c.instructions+=3;NFSU2_TR(0x54f118);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B54f11a:{NFSU2_TR(0x54f11a);
__builtin_memmove((R+4),(R+28),4);
}
B54f11c:{NFSU2_TR(0x54f11c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f11full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B54f11f:L54f11f:{c.instructions+=7;NFSU2_TR(0x54f11f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f122:{NFSU2_TR(0x54f122);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54f126:{NFSU2_TR(0x54f126);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f127:{NFSU2_TR(0x54f127);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B54f12b:{NFSU2_TR(0x54f12b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f12c:{NFSU2_TR(0x54f12c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f12d:{NFSU2_TR(0x54f12d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f132ull));
TAIL_STATIC(0x51d070u,51d);
}
B54f132:L54f132:{c.instructions+=7;NFSU2_TR(0x54f132);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f135:{NFSU2_TR(0x54f135);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54f139:{NFSU2_TR(0x54f139);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f13a:{NFSU2_TR(0x54f13a);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B54f13e:{NFSU2_TR(0x54f13e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f13f:{NFSU2_TR(0x54f13f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f140:{NFSU2_TR(0x54f140);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f145ull));
TAIL_STATIC(0x51d730u,51d);
}
B54f145:L54f145:{c.instructions+=13;NFSU2_TR(0x54f145);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54f148:{NFSU2_TR(0x54f148);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54f14c:{NFSU2_TR(0x54f14c);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B54f150:{NFSU2_TR(0x54f150);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B54f153:{NFSU2_TR(0x54f153);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B54f155:{NFSU2_TR(0x54f155);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B54f157:{NFSU2_TR(0x54f157);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B54f15a:{NFSU2_TR(0x54f15a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f160:{NFSU2_TR(0x54f160);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54f161:{NFSU2_TR(0x54f161);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B54f162:{NFSU2_TR(0x54f162);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54f163:{NFSU2_TR(0x54f163);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x44ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x44ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B54f166:{NFSU2_TR(0x54f166);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54f170:L54f170:{c.instructions+=8;NFSU2_TR(0x54f170);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B54f174:{NFSU2_TR(0x54f174);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54f176:{NFSU2_TR(0x54f176);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54f178:{NFSU2_TR(0x54f178);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B54f17b:{NFSU2_TR(0x54f17b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B54f17c:{NFSU2_TR(0x54f17c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x2ull))));
}
B54f17f:{NFSU2_TR(0x54f17f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54f183:{NFSU2_TR(0x54f183);
TAIL_STATIC(0x54ef30u,54e);
}
B54f190:L54f190:{c.instructions+=10;NFSU2_TR(0x54f190);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B54f193:{NFSU2_TR(0x54f193);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f194:{NFSU2_TR(0x54f194);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f195:{NFSU2_TR(0x54f195);
__builtin_memmove((R+24),(R+4),4);
}
B54f197:{NFSU2_TR(0x54f197);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f19d:{NFSU2_TR(0x54f19d);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f1a2:{NFSU2_TR(0x54f1a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f1a3:{NFSU2_TR(0x54f1a3);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54f1a7:{NFSU2_TR(0x54f1a7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f1a8:{NFSU2_TR(0x54f1a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f1adull));
TAIL_STATIC(0x43dda0u,43d);
}
B54f1ad:L54f1ad:{c.instructions+=8;NFSU2_TR(0x54f1ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54f1b3:{NFSU2_TR(0x54f1b3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f1b4:{NFSU2_TR(0x54f1b4);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B54f1b8:{NFSU2_TR(0x54f1b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f1b9:{NFSU2_TR(0x54f1b9);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54f1bd:{NFSU2_TR(0x54f1bd);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f1bf:{NFSU2_TR(0x54f1bf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f1c0:{NFSU2_TR(0x54f1c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f1c5ull));
TAIL_STATIC(0x50c960u,50c);
}
B54f1c5:L54f1c5:{c.instructions+=5;NFSU2_TR(0x54f1c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f1c8:{NFSU2_TR(0x54f1c8);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B54f1cc:{NFSU2_TR(0x54f1cc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f1cd:{NFSU2_TR(0x54f1cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f1ce:{NFSU2_TR(0x54f1ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f1d3ull));
TAIL_STATIC(0x4953c0u,495);
}
B54f1d3:L54f1d3:{c.instructions+=8;NFSU2_TR(0x54f1d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54f1d7:{NFSU2_TR(0x54f1d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54f1da:{NFSU2_TR(0x54f1da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f1e0:{NFSU2_TR(0x54f1e0);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f1e5:{NFSU2_TR(0x54f1e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f1e6:{NFSU2_TR(0x54f1e6);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54f1ea:{NFSU2_TR(0x54f1ea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f1eb:{NFSU2_TR(0x54f1eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f1f0ull));
TAIL_STATIC(0x43dda0u,43d);
}
B54f1f0:L54f1f0:{c.instructions+=8;NFSU2_TR(0x54f1f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54f1f6:{NFSU2_TR(0x54f1f6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f1f7:{NFSU2_TR(0x54f1f7);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B54f1fb:{NFSU2_TR(0x54f1fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f1fc:{NFSU2_TR(0x54f1fc);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54f200:{NFSU2_TR(0x54f200);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f202:{NFSU2_TR(0x54f202);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f203:{NFSU2_TR(0x54f203);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f208ull));
TAIL_STATIC(0x50c960u,50c);
}
B54f208:L54f208:{c.instructions+=6;NFSU2_TR(0x54f208);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f20b:{NFSU2_TR(0x54f20b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B54f20e:{NFSU2_TR(0x54f20e);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B54f212:{NFSU2_TR(0x54f212);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f213:{NFSU2_TR(0x54f213);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f214:{NFSU2_TR(0x54f214);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f219ull));
TAIL_STATIC(0x4953c0u,495);
}
B54f219:L54f219:{c.instructions+=6;NFSU2_TR(0x54f219);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54f21c:{NFSU2_TR(0x54f21c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f222:{NFSU2_TR(0x54f222);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B54f225:{NFSU2_TR(0x54f225);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f226:{NFSU2_TR(0x54f226);
__builtin_memmove((R+4),(R+24),4);
}
B54f228:{NFSU2_TR(0x54f228);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f22dull));
TAIL_STATIC(0x5445f0u,544);
}
B54f22d:L54f22d:{c.instructions+=7;NFSU2_TR(0x54f22d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54f230:{NFSU2_TR(0x54f230);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54f236:{NFSU2_TR(0x54f236);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f23b:{NFSU2_TR(0x54f23b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f23c:{NFSU2_TR(0x54f23c);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B54f240:{NFSU2_TR(0x54f240);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f241:{NFSU2_TR(0x54f241);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f246ull));
TAIL_STATIC(0x43dda0u,43d);
}
B54f246:L54f246:{c.instructions+=8;NFSU2_TR(0x54f246);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f24c:{NFSU2_TR(0x54f24c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f24d:{NFSU2_TR(0x54f24d);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54f251:{NFSU2_TR(0x54f251);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f252:{NFSU2_TR(0x54f252);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B54f256:{NFSU2_TR(0x54f256);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f258:{NFSU2_TR(0x54f258);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f259:{NFSU2_TR(0x54f259);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f25eull));
TAIL_STATIC(0x50c960u,50c);
}
B54f25e:L54f25e:{c.instructions+=5;NFSU2_TR(0x54f25e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f261:{NFSU2_TR(0x54f261);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54f265:{NFSU2_TR(0x54f265);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f266:{NFSU2_TR(0x54f266);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f267:{NFSU2_TR(0x54f267);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f26cull));
TAIL_STATIC(0x4953e0u,495);
}
B54f26c:L54f26c:{c.instructions+=7;NFSU2_TR(0x54f26c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54f26f:{NFSU2_TR(0x54f26f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54f275:{NFSU2_TR(0x54f275);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f27a:{NFSU2_TR(0x54f27a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f27b:{NFSU2_TR(0x54f27b);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B54f27f:{NFSU2_TR(0x54f27f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f280:{NFSU2_TR(0x54f280);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f285ull));
TAIL_STATIC(0x43dda0u,43d);
}
B54f285:L54f285:{c.instructions+=8;NFSU2_TR(0x54f285);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54f28b:{NFSU2_TR(0x54f28b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f28c:{NFSU2_TR(0x54f28c);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B54f290:{NFSU2_TR(0x54f290);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f291:{NFSU2_TR(0x54f291);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B54f295:{NFSU2_TR(0x54f295);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f297:{NFSU2_TR(0x54f297);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f298:{NFSU2_TR(0x54f298);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f29dull));
TAIL_STATIC(0x50c960u,50c);
}
B54f29d:L54f29d:{c.instructions+=6;NFSU2_TR(0x54f29d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f2a0:{NFSU2_TR(0x54f2a0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B54f2a3:{NFSU2_TR(0x54f2a3);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54f2a7:{NFSU2_TR(0x54f2a7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f2a8:{NFSU2_TR(0x54f2a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f2a9:{NFSU2_TR(0x54f2a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f2aeull));
TAIL_STATIC(0x4953e0u,495);
}
B54f2ae:L54f2ae:{c.instructions+=7;NFSU2_TR(0x54f2ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54f2b1:{NFSU2_TR(0x54f2b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54f2b7:{NFSU2_TR(0x54f2b7);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f2bc:{NFSU2_TR(0x54f2bc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f2bd:{NFSU2_TR(0x54f2bd);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B54f2c1:{NFSU2_TR(0x54f2c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f2c2:{NFSU2_TR(0x54f2c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f2c7ull));
TAIL_STATIC(0x43dda0u,43d);
}
B54f2c7:L54f2c7:{c.instructions+=8;NFSU2_TR(0x54f2c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54f2cd:{NFSU2_TR(0x54f2cd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f2ce:{NFSU2_TR(0x54f2ce);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B54f2d2:{NFSU2_TR(0x54f2d2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f2d3:{NFSU2_TR(0x54f2d3);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B54f2d7:{NFSU2_TR(0x54f2d7);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f2d9:{NFSU2_TR(0x54f2d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f2da:{NFSU2_TR(0x54f2da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f2dfull));
TAIL_STATIC(0x50c960u,50c);
}
B54f2df:L54f2df:{c.instructions+=5;NFSU2_TR(0x54f2df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f2e2:{NFSU2_TR(0x54f2e2);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54f2e6:{NFSU2_TR(0x54f2e6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f2e7:{NFSU2_TR(0x54f2e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f2e8:{NFSU2_TR(0x54f2e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f2edull));
TAIL_STATIC(0x4953e0u,495);
}
B54f2ed:L54f2ed:{c.instructions+=7;NFSU2_TR(0x54f2ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54f2f0:{NFSU2_TR(0x54f2f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f2f7:{NFSU2_TR(0x54f2f7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
}
B54f2fa:{NFSU2_TR(0x54f2fa);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B54f2fb:{NFSU2_TR(0x54f2fb);
w4(R+4,u32(0x367b3e04ull));
}
B54f300:{NFSU2_TR(0x54f300);
__builtin_memmove((R+8),(R+4),4);
}
B54f302:{NFSU2_TR(0x54f302);
if(r1(R+518)){{goto L54f316;}}
}
B54f304:L54f304:{c.instructions+=2;NFSU2_TR(0x54f304);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B54f305:{NFSU2_TR(0x54f305);
if(r1(R+518)){{goto L54f30a;}}
}
B54f307:L54f307:{c.instructions+=2;NFSU2_TR(0x54f307);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B54f308:{NFSU2_TR(0x54f308);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54f31d;}}
}
B54f30a:L54f30a:{c.instructions+=3;NFSU2_TR(0x54f30a);
w4(R+4,u32(0x374f6465ull));
}
B54f30f:{NFSU2_TR(0x54f30f);
w4(R+8,u32(0x760bdc9dull));
}
B54f314:{NFSU2_TR(0x54f314);
{goto L54f31d;}
}
B54f316:L54f316:{c.instructions+=2;NFSU2_TR(0x54f316);
w4(R+8,u32(0x9943d584ull));
}
B54f31b:{NFSU2_TR(0x54f31b);
__builtin_memmove((R+4),(R+8),4);
}
B54f31d:L54f31d:{c.instructions+=3;NFSU2_TR(0x54f31d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f320:{NFSU2_TR(0x54f320);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54f322:{NFSU2_TR(0x54f322);
if(r1(R+518)){{goto L54f333;}}
}
B54f324:L54f324:{c.instructions+=2;NFSU2_TR(0x54f324);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54f327:{NFSU2_TR(0x54f327);
if(r1(R+518)){{goto L54f333;}}
}
B54f329:L54f329:{c.instructions+=2;NFSU2_TR(0x54f329);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54f32c:{NFSU2_TR(0x54f32c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B54f333:L54f333:{c.instructions+=3;NFSU2_TR(0x54f333);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f336:{NFSU2_TR(0x54f336);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54f338:{NFSU2_TR(0x54f338);
if(r1(R+518)){{goto L54f34e;}}
}
B54f33a:L54f33a:{c.instructions+=2;NFSU2_TR(0x54f33a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54f33d:{NFSU2_TR(0x54f33d);
if(r1(R+518)){{goto L54f34e;}}
}
B54f33f:L54f33f:{c.instructions+=4;NFSU2_TR(0x54f33f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54f342:{NFSU2_TR(0x54f342);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x400000ull))));
}
B54f348:{NFSU2_TR(0x54f348);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54f34b:{NFSU2_TR(0x54f34b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54f34e:L54f34e:{c.instructions+=21;NFSU2_TR(0x54f34e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54f351:{NFSU2_TR(0x54f351);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B54f354:{NFSU2_TR(0x54f354);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B54f357:{NFSU2_TR(0x54f357);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B54f359:{NFSU2_TR(0x54f359);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54f35c:{NFSU2_TR(0x54f35c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B54f35e:{NFSU2_TR(0x54f35e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54f361:{NFSU2_TR(0x54f361);
{u32 ea_=u32(r4(R+24)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54f367:{NFSU2_TR(0x54f367);
{u32 ea_=u32(r4(R+24)+u32(296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B54f36d:{NFSU2_TR(0x54f36d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54f373:{NFSU2_TR(0x54f373);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B54f374:{NFSU2_TR(0x54f374);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54f37a:{NFSU2_TR(0x54f37a);
{u32 ea_=u32(r4(R+24)+u32(256u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B54f380:{NFSU2_TR(0x54f380);
{u32 ea_=u32(r4(R+24)+u32(256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B54f386:{NFSU2_TR(0x54f386);
{u32 ea_=u32(r4(R+24)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54f38c:{NFSU2_TR(0x54f38c);
{u32 ea_=u32(r4(R+24)+u32(296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B54f392:{NFSU2_TR(0x54f392);
{u32 ea_=u32(r4(R+24)+u32(288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B54f398:{NFSU2_TR(0x54f398);
{u32 ea_=u32(r4(R+24)+u32(288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B54f39e:{NFSU2_TR(0x54f39e);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54f3a1:{NFSU2_TR(0x54f3a1);
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
B54f3a3:{NFSU2_TR(0x54f3a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54f3ac;}}
}
B54f3a5:L54f3a5:{c.instructions+=3;NFSU2_TR(0x54f3a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B54f3a7:{NFSU2_TR(0x54f3a7);
__builtin_memmove((R+4),(R+28),4);
}
B54f3a9:{NFSU2_TR(0x54f3a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f3acull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B54f3ac:L54f3ac:{c.instructions+=3;NFSU2_TR(0x54f3ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B54f3ae:{NFSU2_TR(0x54f3ae);
__builtin_memmove((R+4),(R+28),4);
}
B54f3b0:{NFSU2_TR(0x54f3b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f3b3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B54f3b3:L54f3b3:{c.instructions+=3;NFSU2_TR(0x54f3b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B54f3b5:{NFSU2_TR(0x54f3b5);
__builtin_memmove((R+4),(R+28),4);
}
B54f3b7:{NFSU2_TR(0x54f3b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f3baull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B54f3ba:L54f3ba:{c.instructions+=3;NFSU2_TR(0x54f3ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B54f3bc:{NFSU2_TR(0x54f3bc);
__builtin_memmove((R+4),(R+28),4);
}
B54f3be:{NFSU2_TR(0x54f3be);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f3c1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B54f3c1:L54f3c1:{c.instructions+=7;NFSU2_TR(0x54f3c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f3c4:{NFSU2_TR(0x54f3c4);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54f3c8:{NFSU2_TR(0x54f3c8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f3c9:{NFSU2_TR(0x54f3c9);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B54f3cd:{NFSU2_TR(0x54f3cd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f3ce:{NFSU2_TR(0x54f3ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f3cf:{NFSU2_TR(0x54f3cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f3d4ull));
TAIL_STATIC(0x51d070u,51d);
}
B54f3d4:L54f3d4:{c.instructions+=7;NFSU2_TR(0x54f3d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f3d7:{NFSU2_TR(0x54f3d7);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54f3db:{NFSU2_TR(0x54f3db);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f3dc:{NFSU2_TR(0x54f3dc);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B54f3e0:{NFSU2_TR(0x54f3e0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f3e1:{NFSU2_TR(0x54f3e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f3e2:{NFSU2_TR(0x54f3e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f3e7ull));
TAIL_STATIC(0x51d730u,51d);
}
B54f3e7:L54f3e7:{c.instructions+=13;NFSU2_TR(0x54f3e7);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54f3ea:{NFSU2_TR(0x54f3ea);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54f3ee:{NFSU2_TR(0x54f3ee);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B54f3f2:{NFSU2_TR(0x54f3f2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B54f3f5:{NFSU2_TR(0x54f3f5);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B54f3f7:{NFSU2_TR(0x54f3f7);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B54f3f9:{NFSU2_TR(0x54f3f9);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B54f3fc:{NFSU2_TR(0x54f3fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f402:{NFSU2_TR(0x54f402);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54f403:{NFSU2_TR(0x54f403);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B54f404:{NFSU2_TR(0x54f404);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54f405:{NFSU2_TR(0x54f405);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x44ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x44ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B54f408:{NFSU2_TR(0x54f408);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54f410:L54f410:{c.instructions+=12;NFSU2_TR(0x54f410);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18cull))));
}
B54f416:{NFSU2_TR(0x54f416);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f417:{NFSU2_TR(0x54f417);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f418:{NFSU2_TR(0x54f418);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f419:{NFSU2_TR(0x54f419);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f41a:{NFSU2_TR(0x54f41a);
__builtin_memmove((R+24),(R+4),4);
}
B54f41c:{NFSU2_TR(0x54f41c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f422:{NFSU2_TR(0x54f422);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f427:{NFSU2_TR(0x54f427);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f428:{NFSU2_TR(0x54f428);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54f42c:{NFSU2_TR(0x54f42c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f42d:{NFSU2_TR(0x54f42d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f432ull));
TAIL_STATIC(0x43dda0u,43d);
}
B54f432:L54f432:{c.instructions+=8;NFSU2_TR(0x54f432);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54f438:{NFSU2_TR(0x54f438);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f439:{NFSU2_TR(0x54f439);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B54f43d:{NFSU2_TR(0x54f43d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f43e:{NFSU2_TR(0x54f43e);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54f445:{NFSU2_TR(0x54f445);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f447:{NFSU2_TR(0x54f447);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f448:{NFSU2_TR(0x54f448);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f44dull));
TAIL_STATIC(0x50c960u,50c);
}
B54f44d:L54f44d:{c.instructions+=5;NFSU2_TR(0x54f44d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f450:{NFSU2_TR(0x54f450);
u8 U[4];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B54f457:{NFSU2_TR(0x54f457);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f458:{NFSU2_TR(0x54f458);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f459:{NFSU2_TR(0x54f459);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f45eull));
TAIL_STATIC(0x4953c0u,495);
}
B54f45e:L54f45e:{c.instructions+=8;NFSU2_TR(0x54f45e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1c4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54f465:{NFSU2_TR(0x54f465);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54f468:{NFSU2_TR(0x54f468);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f46e:{NFSU2_TR(0x54f46e);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f473:{NFSU2_TR(0x54f473);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f474:{NFSU2_TR(0x54f474);
u8 U[4];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54f47b:{NFSU2_TR(0x54f47b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f47c:{NFSU2_TR(0x54f47c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f481ull));
TAIL_STATIC(0x43dda0u,43d);
}
B54f481:L54f481:{c.instructions+=8;NFSU2_TR(0x54f481);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54f487:{NFSU2_TR(0x54f487);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f488:{NFSU2_TR(0x54f488);
u8 U[4];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B54f48f:{NFSU2_TR(0x54f48f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f490:{NFSU2_TR(0x54f490);
u8 U[4];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54f497:{NFSU2_TR(0x54f497);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f499:{NFSU2_TR(0x54f499);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f49a:{NFSU2_TR(0x54f49a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f49full));
TAIL_STATIC(0x50c960u,50c);
}
B54f49f:L54f49f:{c.instructions+=6;NFSU2_TR(0x54f49f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f4a2:{NFSU2_TR(0x54f4a2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B54f4a5:{NFSU2_TR(0x54f4a5);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B54f4a9:{NFSU2_TR(0x54f4a9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f4aa:{NFSU2_TR(0x54f4aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f4ab:{NFSU2_TR(0x54f4ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f4b0ull));
TAIL_STATIC(0x4953e0u,495);
}
B54f4b0:L54f4b0:{c.instructions+=7;NFSU2_TR(0x54f4b0);
__builtin_memmove((R+12),(R+0),4);
}
B54f4b2:{NFSU2_TR(0x54f4b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f4b8:{NFSU2_TR(0x54f4b8);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f4bd:{NFSU2_TR(0x54f4bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f4be:{NFSU2_TR(0x54f4be);
u8 U[4];
w4(U+0,u32(u32(u32(0x18cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54f4c5:{NFSU2_TR(0x54f4c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f4c6:{NFSU2_TR(0x54f4c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f4cbull));
TAIL_STATIC(0x43dda0u,43d);
}
B54f4cb:L54f4cb:{c.instructions+=8;NFSU2_TR(0x54f4cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54f4d1:{NFSU2_TR(0x54f4d1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f4d2:{NFSU2_TR(0x54f4d2);
u8 U[4];
w4(U+0,u32(u32(u32(0x194ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B54f4d9:{NFSU2_TR(0x54f4d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f4da:{NFSU2_TR(0x54f4da);
u8 U[4];
w4(U+0,u32(u32(u32(0x158ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54f4e1:{NFSU2_TR(0x54f4e1);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f4e3:{NFSU2_TR(0x54f4e3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f4e4:{NFSU2_TR(0x54f4e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f4e9ull));
TAIL_STATIC(0x50c960u,50c);
}
B54f4e9:L54f4e9:{c.instructions+=5;NFSU2_TR(0x54f4e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f4ec:{NFSU2_TR(0x54f4ec);
u8 U[4];
w4(U+0,u32(u32(u32(0x160ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B54f4f3:{NFSU2_TR(0x54f4f3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f4f4:{NFSU2_TR(0x54f4f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f4f5:{NFSU2_TR(0x54f4f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f4faull));
TAIL_STATIC(0x4953e0u,495);
}
B54f4fa:L54f4fa:{c.instructions+=7;NFSU2_TR(0x54f4fa);
__builtin_memmove((R+20),(R+0),4);
}
B54f4fc:{NFSU2_TR(0x54f4fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f502:{NFSU2_TR(0x54f502);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f507:{NFSU2_TR(0x54f507);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f508:{NFSU2_TR(0x54f508);
u8 U[4];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54f50f:{NFSU2_TR(0x54f50f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f510:{NFSU2_TR(0x54f510);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f515ull));
TAIL_STATIC(0x43dda0u,43d);
}
B54f515:L54f515:{c.instructions+=8;NFSU2_TR(0x54f515);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54f51b:{NFSU2_TR(0x54f51b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f51c:{NFSU2_TR(0x54f51c);
u8 U[4];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B54f523:{NFSU2_TR(0x54f523);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f524:{NFSU2_TR(0x54f524);
u8 U[4];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54f52b:{NFSU2_TR(0x54f52b);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f52d:{NFSU2_TR(0x54f52d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f52e:{NFSU2_TR(0x54f52e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f533ull));
TAIL_STATIC(0x50c960u,50c);
}
B54f533:L54f533:{c.instructions+=6;NFSU2_TR(0x54f533);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f536:{NFSU2_TR(0x54f536);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
}
B54f539:{NFSU2_TR(0x54f539);
u8 U[4];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B54f540:{NFSU2_TR(0x54f540);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f541:{NFSU2_TR(0x54f541);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f542:{NFSU2_TR(0x54f542);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f547ull));
TAIL_STATIC(0x4953e0u,495);
}
B54f547:L54f547:{c.instructions+=7;NFSU2_TR(0x54f547);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54f54b:{NFSU2_TR(0x54f54b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f551:{NFSU2_TR(0x54f551);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f556:{NFSU2_TR(0x54f556);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f557:{NFSU2_TR(0x54f557);
u8 U[4];
w4(U+0,u32(u32(u32(0x16cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54f55e:{NFSU2_TR(0x54f55e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f55f:{NFSU2_TR(0x54f55f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f564ull));
TAIL_STATIC(0x43dda0u,43d);
}
B54f564:L54f564:{c.instructions+=8;NFSU2_TR(0x54f564);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54f56a:{NFSU2_TR(0x54f56a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f56b:{NFSU2_TR(0x54f56b);
u8 U[4];
w4(U+0,u32(u32(u32(0x174ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B54f572:{NFSU2_TR(0x54f572);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f573:{NFSU2_TR(0x54f573);
u8 U[4];
w4(U+0,u32(u32(u32(0x138ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54f57a:{NFSU2_TR(0x54f57a);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f57c:{NFSU2_TR(0x54f57c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f57d:{NFSU2_TR(0x54f57d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f582ull));
TAIL_STATIC(0x50c960u,50c);
}
B54f582:L54f582:{c.instructions+=5;NFSU2_TR(0x54f582);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f585:{NFSU2_TR(0x54f585);
u8 U[4];
w4(U+0,u32(u32(u32(0x140ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B54f58c:{NFSU2_TR(0x54f58c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f58d:{NFSU2_TR(0x54f58d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f58e:{NFSU2_TR(0x54f58e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f593ull));
TAIL_STATIC(0x4953c0u,495);
}
B54f593:L54f593:{c.instructions+=7;NFSU2_TR(0x54f593);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54f597:{NFSU2_TR(0x54f597);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f59d:{NFSU2_TR(0x54f59d);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f5a2:{NFSU2_TR(0x54f5a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f5a3:{NFSU2_TR(0x54f5a3);
u8 U[4];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54f5aa:{NFSU2_TR(0x54f5aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f5ab:{NFSU2_TR(0x54f5ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f5b0ull));
TAIL_STATIC(0x43dda0u,43d);
}
B54f5b0:L54f5b0:{c.instructions+=8;NFSU2_TR(0x54f5b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54f5b6:{NFSU2_TR(0x54f5b6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f5b7:{NFSU2_TR(0x54f5b7);
u8 U[4];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B54f5be:{NFSU2_TR(0x54f5be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f5bf:{NFSU2_TR(0x54f5bf);
u8 U[4];
w4(U+0,u32(u32(u32(0x13cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54f5c6:{NFSU2_TR(0x54f5c6);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f5c8:{NFSU2_TR(0x54f5c8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f5c9:{NFSU2_TR(0x54f5c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f5ceull));
TAIL_STATIC(0x50c960u,50c);
}
B54f5ce:L54f5ce:{c.instructions+=6;NFSU2_TR(0x54f5ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f5d1:{NFSU2_TR(0x54f5d1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
}
B54f5d4:{NFSU2_TR(0x54f5d4);
u8 U[4];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B54f5db:{NFSU2_TR(0x54f5db);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f5dc:{NFSU2_TR(0x54f5dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f5dd:{NFSU2_TR(0x54f5dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f5e2ull));
TAIL_STATIC(0x4953e0u,495);
}
B54f5e2:L54f5e2:{c.instructions+=7;NFSU2_TR(0x54f5e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54f5e6:{NFSU2_TR(0x54f5e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f5ec:{NFSU2_TR(0x54f5ec);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f5f1:{NFSU2_TR(0x54f5f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f5f2:{NFSU2_TR(0x54f5f2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54f5f6:{NFSU2_TR(0x54f5f6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f5f7:{NFSU2_TR(0x54f5f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f5fcull));
TAIL_STATIC(0x43dda0u,43d);
}
B54f5fc:L54f5fc:{c.instructions+=8;NFSU2_TR(0x54f5fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54f602:{NFSU2_TR(0x54f602);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f603:{NFSU2_TR(0x54f603);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B54f607:{NFSU2_TR(0x54f607);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f608:{NFSU2_TR(0x54f608);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54f60c:{NFSU2_TR(0x54f60c);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f60e:{NFSU2_TR(0x54f60e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f60f:{NFSU2_TR(0x54f60f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f614ull));
TAIL_STATIC(0x50c960u,50c);
}
B54f614:L54f614:{c.instructions+=5;NFSU2_TR(0x54f614);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f617:{NFSU2_TR(0x54f617);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B54f61b:{NFSU2_TR(0x54f61b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f61c:{NFSU2_TR(0x54f61c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f61d:{NFSU2_TR(0x54f61d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f622ull));
TAIL_STATIC(0x4953e0u,495);
}
B54f622:L54f622:{c.instructions+=12;NFSU2_TR(0x54f622);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54f626:{NFSU2_TR(0x54f626);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54f62a:{NFSU2_TR(0x54f62a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
}
B54f62d:{NFSU2_TR(0x54f62d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f62e:{NFSU2_TR(0x54f62e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f62f:{NFSU2_TR(0x54f62f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f630:{NFSU2_TR(0x54f630);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54f634:{NFSU2_TR(0x54f634);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f635:{NFSU2_TR(0x54f635);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f636:{NFSU2_TR(0x54f636);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f637:{NFSU2_TR(0x54f637);
__builtin_memmove((R+4),(R+28),4);
}
B54f639:{NFSU2_TR(0x54f639);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f63eull));
TAIL_STATIC(0x5275b0u,527);
}
B54f63e:L54f63e:{c.instructions+=4;NFSU2_TR(0x54f63e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54f644:{NFSU2_TR(0x54f644);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f645:{NFSU2_TR(0x54f645);
__builtin_memmove((R+4),(R+24),4);
}
B54f647:{NFSU2_TR(0x54f647);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f64cull));
TAIL_STATIC(0x5445f0u,544);
}
B54f64c:L54f64c:{c.instructions+=4;NFSU2_TR(0x54f64c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54f64f:{NFSU2_TR(0x54f64f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B54f651:{NFSU2_TR(0x54f651);
__builtin_memmove((R+4),(R+28),4);
}
B54f653:{NFSU2_TR(0x54f653);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f656ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B54f656:L54f656:{c.instructions+=6;NFSU2_TR(0x54f656);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54f65c:{NFSU2_TR(0x54f65c);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f661:{NFSU2_TR(0x54f661);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f662:{NFSU2_TR(0x54f662);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B54f666:{NFSU2_TR(0x54f666);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f667:{NFSU2_TR(0x54f667);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f66cull));
TAIL_STATIC(0x43dda0u,43d);
}
B54f66c:L54f66c:{c.instructions+=8;NFSU2_TR(0x54f66c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f672:{NFSU2_TR(0x54f672);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f673:{NFSU2_TR(0x54f673);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54f677:{NFSU2_TR(0x54f677);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f678:{NFSU2_TR(0x54f678);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B54f67c:{NFSU2_TR(0x54f67c);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f67e:{NFSU2_TR(0x54f67e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f67f:{NFSU2_TR(0x54f67f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f684ull));
TAIL_STATIC(0x50c960u,50c);
}
B54f684:L54f684:{c.instructions+=5;NFSU2_TR(0x54f684);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f687:{NFSU2_TR(0x54f687);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54f68b:{NFSU2_TR(0x54f68b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f68c:{NFSU2_TR(0x54f68c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f68d:{NFSU2_TR(0x54f68d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f692ull));
TAIL_STATIC(0x4953e0u,495);
}
B54f692:L54f692:{c.instructions+=7;NFSU2_TR(0x54f692);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54f695:{NFSU2_TR(0x54f695);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54f69b:{NFSU2_TR(0x54f69b);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f6a0:{NFSU2_TR(0x54f6a0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f6a1:{NFSU2_TR(0x54f6a1);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B54f6a5:{NFSU2_TR(0x54f6a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f6a6:{NFSU2_TR(0x54f6a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f6abull));
TAIL_STATIC(0x43dda0u,43d);
}
B54f6ab:L54f6ab:{c.instructions+=8;NFSU2_TR(0x54f6ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54f6b1:{NFSU2_TR(0x54f6b1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f6b2:{NFSU2_TR(0x54f6b2);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B54f6b6:{NFSU2_TR(0x54f6b6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f6b7:{NFSU2_TR(0x54f6b7);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B54f6bb:{NFSU2_TR(0x54f6bb);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f6bd:{NFSU2_TR(0x54f6bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f6be:{NFSU2_TR(0x54f6be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f6c3ull));
TAIL_STATIC(0x50c960u,50c);
}
B54f6c3:L54f6c3:{c.instructions+=6;NFSU2_TR(0x54f6c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f6c6:{NFSU2_TR(0x54f6c6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B54f6c9:{NFSU2_TR(0x54f6c9);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54f6cd:{NFSU2_TR(0x54f6cd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f6ce:{NFSU2_TR(0x54f6ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f6cf:{NFSU2_TR(0x54f6cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f6d4ull));
TAIL_STATIC(0x4953e0u,495);
}
B54f6d4:L54f6d4:{c.instructions+=7;NFSU2_TR(0x54f6d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54f6d7:{NFSU2_TR(0x54f6d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1acull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f6de:{NFSU2_TR(0x54f6de);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B54f6e1:{NFSU2_TR(0x54f6e1);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B54f6e2:{NFSU2_TR(0x54f6e2);
w4(R+4,u32(0x367b3e04ull));
}
B54f6e7:{NFSU2_TR(0x54f6e7);
__builtin_memmove((R+8),(R+4),4);
}
B54f6e9:{NFSU2_TR(0x54f6e9);
if(r1(R+518)){{goto L54f6fd;}}
}
B54f6eb:L54f6eb:{c.instructions+=2;NFSU2_TR(0x54f6eb);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B54f6ec:{NFSU2_TR(0x54f6ec);
if(r1(R+518)){{goto L54f6f1;}}
}
B54f6ee:L54f6ee:{c.instructions+=2;NFSU2_TR(0x54f6ee);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B54f6ef:{NFSU2_TR(0x54f6ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54f704;}}
}
B54f6f1:L54f6f1:{c.instructions+=3;NFSU2_TR(0x54f6f1);
w4(R+4,u32(0x374f6465ull));
}
B54f6f6:{NFSU2_TR(0x54f6f6);
w4(R+8,u32(0x760bdc9dull));
}
B54f6fb:{NFSU2_TR(0x54f6fb);
{goto L54f704;}
}
B54f6fd:L54f6fd:{c.instructions+=2;NFSU2_TR(0x54f6fd);
w4(R+8,u32(0x9943d584ull));
}
B54f702:{NFSU2_TR(0x54f702);
__builtin_memmove((R+4),(R+8),4);
}
B54f704:L54f704:{c.instructions+=4;NFSU2_TR(0x54f704);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f707:{NFSU2_TR(0x54f707);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54f709:{NFSU2_TR(0x54f709);
w4(R+12,u32(0x400000ull));
}
B54f70e:{NFSU2_TR(0x54f70e);
if(r1(R+518)){{goto L54f71b;}}
}
B54f710:L54f710:{c.instructions+=2;NFSU2_TR(0x54f710);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54f713:{NFSU2_TR(0x54f713);
if(r1(R+518)){{goto L54f71b;}}
}
B54f715:L54f715:{c.instructions+=2;NFSU2_TR(0x54f715);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54f718:{NFSU2_TR(0x54f718);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B54f71b:L54f71b:{c.instructions+=3;NFSU2_TR(0x54f71b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f71e:{NFSU2_TR(0x54f71e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54f720:{NFSU2_TR(0x54f720);
if(r1(R+518)){{goto L54f732;}}
}
B54f722:L54f722:{c.instructions+=2;NFSU2_TR(0x54f722);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54f725:{NFSU2_TR(0x54f725);
if(r1(R+518)){{goto L54f732;}}
}
B54f727:L54f727:{c.instructions+=4;NFSU2_TR(0x54f727);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54f72a:{NFSU2_TR(0x54f72a);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+12))));
}
B54f72c:{NFSU2_TR(0x54f72c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54f72f:{NFSU2_TR(0x54f72f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54f732:L54f732:{c.instructions+=21;NFSU2_TR(0x54f732);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54f735:{NFSU2_TR(0x54f735);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B54f738:{NFSU2_TR(0x54f738);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B54f73b:{NFSU2_TR(0x54f73b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B54f73d:{NFSU2_TR(0x54f73d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54f740:{NFSU2_TR(0x54f740);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B54f742:{NFSU2_TR(0x54f742);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54f745:{NFSU2_TR(0x54f745);
{u32 ea_=u32(r4(R+24)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54f74b:{NFSU2_TR(0x54f74b);
{u32 ea_=u32(r4(R+24)+u32(296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B54f751:{NFSU2_TR(0x54f751);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54f757:{NFSU2_TR(0x54f757);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B54f758:{NFSU2_TR(0x54f758);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54f75e:{NFSU2_TR(0x54f75e);
{u32 ea_=u32(r4(R+24)+u32(256u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B54f764:{NFSU2_TR(0x54f764);
{u32 ea_=u32(r4(R+24)+u32(256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B54f76a:{NFSU2_TR(0x54f76a);
{u32 ea_=u32(r4(R+24)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54f770:{NFSU2_TR(0x54f770);
{u32 ea_=u32(r4(R+24)+u32(296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B54f776:{NFSU2_TR(0x54f776);
{u32 ea_=u32(r4(R+24)+u32(288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B54f77c:{NFSU2_TR(0x54f77c);
{u32 ea_=u32(r4(R+24)+u32(288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B54f782:{NFSU2_TR(0x54f782);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54f785:{NFSU2_TR(0x54f785);
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
B54f787:{NFSU2_TR(0x54f787);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54f790;}}
}
B54f789:L54f789:{c.instructions+=3;NFSU2_TR(0x54f789);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B54f78b:{NFSU2_TR(0x54f78b);
__builtin_memmove((R+4),(R+28),4);
}
B54f78d:{NFSU2_TR(0x54f78d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f790ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B54f790:L54f790:{c.instructions+=3;NFSU2_TR(0x54f790);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B54f792:{NFSU2_TR(0x54f792);
__builtin_memmove((R+4),(R+28),4);
}
B54f794:{NFSU2_TR(0x54f794);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f797ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B54f797:L54f797:{c.instructions+=3;NFSU2_TR(0x54f797);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B54f799:{NFSU2_TR(0x54f799);
__builtin_memmove((R+4),(R+28),4);
}
B54f79b:{NFSU2_TR(0x54f79b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f79eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B54f79e:L54f79e:{c.instructions+=3;NFSU2_TR(0x54f79e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B54f7a0:{NFSU2_TR(0x54f7a0);
__builtin_memmove((R+4),(R+28),4);
}
B54f7a2:{NFSU2_TR(0x54f7a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f7a5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B54f7a5:L54f7a5:{c.instructions+=7;NFSU2_TR(0x54f7a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f7a8:{NFSU2_TR(0x54f7a8);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54f7ac:{NFSU2_TR(0x54f7ac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f7ad:{NFSU2_TR(0x54f7ad);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B54f7b1:{NFSU2_TR(0x54f7b1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f7b2:{NFSU2_TR(0x54f7b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f7b3:{NFSU2_TR(0x54f7b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f7b8ull));
TAIL_STATIC(0x51d070u,51d);
}
B54f7b8:L54f7b8:{c.instructions+=7;NFSU2_TR(0x54f7b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f7bb:{NFSU2_TR(0x54f7bb);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54f7bf:{NFSU2_TR(0x54f7bf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f7c0:{NFSU2_TR(0x54f7c0);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B54f7c4:{NFSU2_TR(0x54f7c4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f7c5:{NFSU2_TR(0x54f7c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f7c6:{NFSU2_TR(0x54f7c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f7cbull));
TAIL_STATIC(0x51d730u,51d);
}
B54f7cb:L54f7cb:{c.instructions+=15;NFSU2_TR(0x54f7cb);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54f7ce:{NFSU2_TR(0x54f7ce);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54f7d2:{NFSU2_TR(0x54f7d2);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B54f7d6:{NFSU2_TR(0x54f7d6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B54f7d9:{NFSU2_TR(0x54f7d9);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B54f7db:{NFSU2_TR(0x54f7db);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B54f7dd:{NFSU2_TR(0x54f7dd);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B54f7e0:{NFSU2_TR(0x54f7e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f7e6:{NFSU2_TR(0x54f7e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54f7e7:{NFSU2_TR(0x54f7e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54f7e8:{NFSU2_TR(0x54f7e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54f7e9:{NFSU2_TR(0x54f7e9);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B54f7ea:{NFSU2_TR(0x54f7ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54f7eb:{NFSU2_TR(0x54f7eb);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B54f7f1:{NFSU2_TR(0x54f7f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54f800:L54f800:{c.instructions+=8;NFSU2_TR(0x54f800);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B54f804:{NFSU2_TR(0x54f804);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54f806:{NFSU2_TR(0x54f806);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54f808:{NFSU2_TR(0x54f808);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B54f80b:{NFSU2_TR(0x54f80b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B54f80c:{NFSU2_TR(0x54f80c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x2ull))));
}
B54f80f:{NFSU2_TR(0x54f80f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54f813:{NFSU2_TR(0x54f813);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54f410u);}goto L54f410;}
}
B54f820:L54f820:{c.instructions+=10;NFSU2_TR(0x54f820);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x48ull))));
}
B54f823:{NFSU2_TR(0x54f823);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f824:{NFSU2_TR(0x54f824);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f825:{NFSU2_TR(0x54f825);
__builtin_memmove((R+24),(R+4),4);
}
B54f827:{NFSU2_TR(0x54f827);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f82d:{NFSU2_TR(0x54f82d);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f832:{NFSU2_TR(0x54f832);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f833:{NFSU2_TR(0x54f833);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54f837:{NFSU2_TR(0x54f837);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f838:{NFSU2_TR(0x54f838);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f83dull));
TAIL_STATIC(0x43dda0u,43d);
}
B54f83d:L54f83d:{c.instructions+=8;NFSU2_TR(0x54f83d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54f843:{NFSU2_TR(0x54f843);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f844:{NFSU2_TR(0x54f844);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B54f848:{NFSU2_TR(0x54f848);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f849:{NFSU2_TR(0x54f849);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54f84d:{NFSU2_TR(0x54f84d);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f84f:{NFSU2_TR(0x54f84f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f850:{NFSU2_TR(0x54f850);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f855ull));
TAIL_STATIC(0x50c960u,50c);
}
B54f855:L54f855:{c.instructions+=5;NFSU2_TR(0x54f855);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f858:{NFSU2_TR(0x54f858);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B54f85c:{NFSU2_TR(0x54f85c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f85d:{NFSU2_TR(0x54f85d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f85e:{NFSU2_TR(0x54f85e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f863ull));
TAIL_STATIC(0x4953c0u,495);
}
B54f863:L54f863:{c.instructions+=8;NFSU2_TR(0x54f863);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54f867:{NFSU2_TR(0x54f867);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54f86a:{NFSU2_TR(0x54f86a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f870:{NFSU2_TR(0x54f870);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f875:{NFSU2_TR(0x54f875);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f876:{NFSU2_TR(0x54f876);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54f87a:{NFSU2_TR(0x54f87a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f87b:{NFSU2_TR(0x54f87b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f880ull));
TAIL_STATIC(0x43dda0u,43d);
}
B54f880:L54f880:{c.instructions+=8;NFSU2_TR(0x54f880);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54f886:{NFSU2_TR(0x54f886);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f887:{NFSU2_TR(0x54f887);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B54f88b:{NFSU2_TR(0x54f88b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f88c:{NFSU2_TR(0x54f88c);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54f890:{NFSU2_TR(0x54f890);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f892:{NFSU2_TR(0x54f892);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f893:{NFSU2_TR(0x54f893);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f898ull));
TAIL_STATIC(0x50c960u,50c);
}
B54f898:L54f898:{c.instructions+=6;NFSU2_TR(0x54f898);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f89b:{NFSU2_TR(0x54f89b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B54f89e:{NFSU2_TR(0x54f89e);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B54f8a2:{NFSU2_TR(0x54f8a2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f8a3:{NFSU2_TR(0x54f8a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f8a4:{NFSU2_TR(0x54f8a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f8a9ull));
TAIL_STATIC(0x4953c0u,495);
}
B54f8a9:L54f8a9:{c.instructions+=6;NFSU2_TR(0x54f8a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54f8ac:{NFSU2_TR(0x54f8ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f8b2:{NFSU2_TR(0x54f8b2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B54f8b5:{NFSU2_TR(0x54f8b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f8b6:{NFSU2_TR(0x54f8b6);
__builtin_memmove((R+4),(R+24),4);
}
B54f8b8:{NFSU2_TR(0x54f8b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f8bdull));
TAIL_STATIC(0x5445f0u,544);
}
B54f8bd:L54f8bd:{c.instructions+=22;NFSU2_TR(0x54f8bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54f8c0:{NFSU2_TR(0x54f8c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54f8c3:{NFSU2_TR(0x54f8c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B54f8c6:{NFSU2_TR(0x54f8c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B54f8c9:{NFSU2_TR(0x54f8c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B54f8cb:{NFSU2_TR(0x54f8cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54f8ce:{NFSU2_TR(0x54f8ce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B54f8d0:{NFSU2_TR(0x54f8d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54f8d3:{NFSU2_TR(0x54f8d3);
{u32 ea_=u32(r4(R+24)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54f8d9:{NFSU2_TR(0x54f8d9);
{u32 ea_=u32(r4(R+24)+u32(296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B54f8df:{NFSU2_TR(0x54f8df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54f8e5:{NFSU2_TR(0x54f8e5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B54f8e6:{NFSU2_TR(0x54f8e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54f8ec:{NFSU2_TR(0x54f8ec);
{u32 ea_=u32(r4(R+24)+u32(256u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B54f8f2:{NFSU2_TR(0x54f8f2);
{u32 ea_=u32(r4(R+24)+u32(256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B54f8f8:{NFSU2_TR(0x54f8f8);
{u32 ea_=u32(r4(R+24)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54f8fe:{NFSU2_TR(0x54f8fe);
{u32 ea_=u32(r4(R+24)+u32(296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B54f904:{NFSU2_TR(0x54f904);
{u32 ea_=u32(r4(R+24)+u32(288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B54f90a:{NFSU2_TR(0x54f90a);
{u32 ea_=u32(r4(R+24)+u32(288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B54f910:{NFSU2_TR(0x54f910);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54f913:{NFSU2_TR(0x54f913);
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
B54f915:{NFSU2_TR(0x54f915);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54f91e;}}
}
B54f917:L54f917:{c.instructions+=3;NFSU2_TR(0x54f917);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B54f919:{NFSU2_TR(0x54f919);
__builtin_memmove((R+4),(R+28),4);
}
B54f91b:{NFSU2_TR(0x54f91b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f91eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B54f91e:L54f91e:{c.instructions+=3;NFSU2_TR(0x54f91e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B54f920:{NFSU2_TR(0x54f920);
__builtin_memmove((R+4),(R+28),4);
}
B54f922:{NFSU2_TR(0x54f922);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f925ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B54f925:L54f925:{c.instructions+=3;NFSU2_TR(0x54f925);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B54f927:{NFSU2_TR(0x54f927);
__builtin_memmove((R+4),(R+28),4);
}
B54f929:{NFSU2_TR(0x54f929);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f92cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B54f92c:L54f92c:{c.instructions+=3;NFSU2_TR(0x54f92c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B54f92e:{NFSU2_TR(0x54f92e);
__builtin_memmove((R+4),(R+28),4);
}
B54f930:{NFSU2_TR(0x54f930);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f933ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B54f933:L54f933:{c.instructions+=7;NFSU2_TR(0x54f933);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f936:{NFSU2_TR(0x54f936);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54f93a:{NFSU2_TR(0x54f93a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f93b:{NFSU2_TR(0x54f93b);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B54f93f:{NFSU2_TR(0x54f93f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f940:{NFSU2_TR(0x54f940);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f941:{NFSU2_TR(0x54f941);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f946ull));
TAIL_STATIC(0x51d070u,51d);
}
B54f946:L54f946:{c.instructions+=7;NFSU2_TR(0x54f946);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f949:{NFSU2_TR(0x54f949);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54f94d:{NFSU2_TR(0x54f94d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f94e:{NFSU2_TR(0x54f94e);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B54f952:{NFSU2_TR(0x54f952);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f953:{NFSU2_TR(0x54f953);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f954:{NFSU2_TR(0x54f954);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f959ull));
TAIL_STATIC(0x51d730u,51d);
}
B54f959:L54f959:{c.instructions+=13;NFSU2_TR(0x54f959);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54f95c:{NFSU2_TR(0x54f95c);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54f960:{NFSU2_TR(0x54f960);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B54f964:{NFSU2_TR(0x54f964);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B54f967:{NFSU2_TR(0x54f967);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B54f969:{NFSU2_TR(0x54f969);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B54f96b:{NFSU2_TR(0x54f96b);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B54f96e:{NFSU2_TR(0x54f96e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f974:{NFSU2_TR(0x54f974);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54f975:{NFSU2_TR(0x54f975);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B54f976:{NFSU2_TR(0x54f976);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54f977:{NFSU2_TR(0x54f977);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x48ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x48ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B54f97a:{NFSU2_TR(0x54f97a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54f980:L54f980:{c.instructions+=9;NFSU2_TR(0x54f980);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f982:{NFSU2_TR(0x54f982);
u8 U[4];
w4(U+0,u32(0x777b94ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f987:{NFSU2_TR(0x54f987);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54f98d:{NFSU2_TR(0x54f98d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f98e:{NFSU2_TR(0x54f98e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54f995:{NFSU2_TR(0x54f995);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f996:{NFSU2_TR(0x54f996);
__builtin_memmove((R+0),gp(0x83853c),4);
}
B54f99b:{NFSU2_TR(0x54f99b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54f99d:{NFSU2_TR(0x54f99d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54f9db;}}
}
B54f99f:L54f99f:{c.instructions+=2;NFSU2_TR(0x54f99f);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f9a1:{NFSU2_TR(0x54f9a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f9a6ull));
TAIL_STATIC(0x575620u,575);
}
B54f9a6:L54f9a6:{c.instructions+=5;NFSU2_TR(0x54f9a6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54f9a9:{NFSU2_TR(0x54f9a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B54f9ad:{NFSU2_TR(0x54f9ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54f9af:{NFSU2_TR(0x54f9af);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54f9b7:{NFSU2_TR(0x54f9b7);
if(r1(R+518)){{goto L54f9d4;}}
}
B54f9b9:L54f9b9:{c.instructions+=2;NFSU2_TR(0x54f9b9);
__builtin_memmove((R+4),(R+0),4);
}
B54f9bb:{NFSU2_TR(0x54f9bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54f9c0ull));
TAIL_STATIC(0x544f80u,544);
}
B54f9c0:L54f9c0:{c.instructions+=5;NFSU2_TR(0x54f9c0);
__builtin_memmove(gp(0x83853c),(R+0),4);
}
B54f9c5:{NFSU2_TR(0x54f9c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54f9c9:{NFSU2_TR(0x54f9c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54f9d0:{NFSU2_TR(0x54f9d0);
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
B54f9d3:{NFSU2_TR(0x54f9d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54f9d4:L54f9d4:{c.instructions+=2;NFSU2_TR(0x54f9d4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54f9d6:{NFSU2_TR(0x54f9d6);
__builtin_memmove(gp(0x83853c),(R+0),4);
}
B54f9db:L54f9db:{c.instructions+=4;NFSU2_TR(0x54f9db);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54f9df:{NFSU2_TR(0x54f9df);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54f9e6:{NFSU2_TR(0x54f9e6);
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
B54f9e9:{NFSU2_TR(0x54f9e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54f9f0:L54f9f0:{c.instructions+=6;NFSU2_TR(0x54f9f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54f9f1:{NFSU2_TR(0x54f9f1);
__builtin_memmove((R+24),(R+4),4);
}
B54f9f3:{NFSU2_TR(0x54f9f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54f9f6:{NFSU2_TR(0x54f9f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B54f9f9:{NFSU2_TR(0x54f9f9);
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
B54f9fb:{NFSU2_TR(0x54f9fb);
if(r1(R+518)){{goto L54fad7;}}
}
B54fa01:L54fa01:{c.instructions+=3;NFSU2_TR(0x54fa01);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54fa07:{NFSU2_TR(0x54fa07);
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
B54fa09:{NFSU2_TR(0x54fa09);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54fad7;}}
}
B54fa0f:L54fa0f:{c.instructions+=7;NFSU2_TR(0x54fa0f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fa10:{NFSU2_TR(0x54fa10);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B54fa14:{NFSU2_TR(0x54fa14);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54fa17:{NFSU2_TR(0x54fa17);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fa18:{NFSU2_TR(0x54fa18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B54fa1b:{NFSU2_TR(0x54fa1b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fa1c:{NFSU2_TR(0x54fa1c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54fa47;}}
}
B54fa1e:L54fa1e:{c.instructions+=3;NFSU2_TR(0x54fa1e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B54fa21:{NFSU2_TR(0x54fa21);
__builtin_memmove((R+4),(R+28),4);
}
B54fa23:{NFSU2_TR(0x54fa23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54fa28ull));
TAIL_STATIC(0x4aeb90u,4ae);
}
B54fa28:L54fa28:{c.instructions+=2;NFSU2_TR(0x54fa28);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54fa2a:{NFSU2_TR(0x54fa2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54fa3e;}}
}
B54fa2c:L54fa2c:{c.instructions+=6;NFSU2_TR(0x54fa2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54fa2f:{NFSU2_TR(0x54fa2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54fa32:{NFSU2_TR(0x54fa32);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fa33:{NFSU2_TR(0x54fa33);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fa35:{NFSU2_TR(0x54fa35);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fa36:{NFSU2_TR(0x54fa36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54fa3bull));
TAIL_STATIC(0x50d150u,50d);
}
B54fa3b:L54fa3b:{c.instructions+=1;NFSU2_TR(0x54fa3b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B54fa3e:L54fa3e:{c.instructions+=2;NFSU2_TR(0x54fa3e);
__builtin_memmove((R+4),(R+28),4);
}
B54fa40:{NFSU2_TR(0x54fa40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54fa45ull));
TAIL_STATIC(0x495900u,495);
}
B54fa45:L54fa45:{c.instructions+=1;NFSU2_TR(0x54fa45);
{goto L54fa73;}
}
B54fa47:L54fa47:{c.instructions+=2;NFSU2_TR(0x54fa47);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54fa4a:{NFSU2_TR(0x54fa4a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54fa73;}}
}
B54fa4c:L54fa4c:{c.instructions+=3;NFSU2_TR(0x54fa4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B54fa4f:{NFSU2_TR(0x54fa4f);
__builtin_memmove((R+4),(R+28),4);
}
B54fa51:{NFSU2_TR(0x54fa51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54fa56ull));
TAIL_STATIC(0x4aebc0u,4ae);
}
B54fa56:L54fa56:{c.instructions+=2;NFSU2_TR(0x54fa56);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54fa58:{NFSU2_TR(0x54fa58);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54fa6c;}}
}
B54fa5a:L54fa5a:{c.instructions+=6;NFSU2_TR(0x54fa5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54fa5d:{NFSU2_TR(0x54fa5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54fa60:{NFSU2_TR(0x54fa60);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fa61:{NFSU2_TR(0x54fa61);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fa63:{NFSU2_TR(0x54fa63);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fa64:{NFSU2_TR(0x54fa64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54fa69ull));
TAIL_STATIC(0x50d150u,50d);
}
B54fa69:L54fa69:{c.instructions+=1;NFSU2_TR(0x54fa69);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B54fa6c:L54fa6c:{c.instructions+=2;NFSU2_TR(0x54fa6c);
__builtin_memmove((R+4),(R+28),4);
}
B54fa6e:{NFSU2_TR(0x54fa6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54fa73ull));
TAIL_STATIC(0x4958f0u,495);
}
B54fa73:L54fa73:{c.instructions+=3;NFSU2_TR(0x54fa73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54fa76:{NFSU2_TR(0x54fa76);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+20))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+6)));
w4(U+10,u32(u32(r4(R+20))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B54fa78:{NFSU2_TR(0x54fa78);
if(r1(R+518)){{goto L54fad4;}}
}
B54fa7a:L54fa7a:{c.instructions+=3;NFSU2_TR(0x54fa7a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B54fa80:{NFSU2_TR(0x54fa80);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54fa82:{NFSU2_TR(0x54fa82);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54fa94;}}
}
B54fa84:L54fa84:{c.instructions+=5;NFSU2_TR(0x54fa84);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54fa87:{NFSU2_TR(0x54fa87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54fa8a:{NFSU2_TR(0x54fa8a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fa8b:{NFSU2_TR(0x54fa8b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fa8c:{NFSU2_TR(0x54fa8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54fa91ull));
TAIL_STATIC(0x50b8c0u,50b);
}
B54fa91:L54fa91:{c.instructions+=1;NFSU2_TR(0x54fa91);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B54fa94:L54fa94:{c.instructions+=2;NFSU2_TR(0x54fa94);
__builtin_memmove((R+4),(R+24),4);
}
B54fa96:{NFSU2_TR(0x54fa96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54fa9bull));
TAIL_STATIC(0x545510u,545);
}
B54fa9b:L54fa9b:{c.instructions+=2;NFSU2_TR(0x54fa9b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54fa9e:{NFSU2_TR(0x54fa9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54fabb;}}
}
B54faa0:L54faa0:{c.instructions+=3;NFSU2_TR(0x54faa0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x114ull))));
}
B54faa6:{NFSU2_TR(0x54faa6);
__builtin_memmove((R+4),(R+24),4);
}
B54faa8:{NFSU2_TR(0x54faa8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54faadull));
TAIL_STATIC(0x527610u,527);
}
B54faad:L54faad:{c.instructions+=2;NFSU2_TR(0x54faad);
__builtin_memmove((R+4),(R+24),4);
}
B54faaf:{NFSU2_TR(0x54faaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54fab4ull));
TAIL_STATIC(0x495850u,495);
}
B54fab4:L54fab4:{c.instructions+=5;NFSU2_TR(0x54fab4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54fab5:{NFSU2_TR(0x54fab5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54fab6:{NFSU2_TR(0x54fab6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54fab7:{NFSU2_TR(0x54fab7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54fab8:{NFSU2_TR(0x54fab8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54fabb:L54fabb:{c.instructions+=2;NFSU2_TR(0x54fabb);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B54fabe:{NFSU2_TR(0x54fabe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54fad4;}}
}
B54fac0:L54fac0:{c.instructions+=3;NFSU2_TR(0x54fac0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x114ull))));
}
B54fac6:{NFSU2_TR(0x54fac6);
__builtin_memmove((R+4),(R+24),4);
}
B54fac8:{NFSU2_TR(0x54fac8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54facdull));
TAIL_STATIC(0x527660u,527);
}
B54facd:L54facd:{c.instructions+=2;NFSU2_TR(0x54facd);
__builtin_memmove((R+4),(R+24),4);
}
B54facf:{NFSU2_TR(0x54facf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54fad4ull));
TAIL_STATIC(0x495810u,495);
}
B54fad4:L54fad4:{c.instructions+=3;NFSU2_TR(0x54fad4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54fad5:{NFSU2_TR(0x54fad5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54fad6:{NFSU2_TR(0x54fad6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54fad7:L54fad7:{c.instructions+=2;NFSU2_TR(0x54fad7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54fad8:{NFSU2_TR(0x54fad8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54fae0:L54fae0:{c.instructions+=5;NFSU2_TR(0x54fae0);
__builtin_memmove((R+0),gp(0x838990),4);
}
B54fae5:{NFSU2_TR(0x54fae5);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B54fae8:{NFSU2_TR(0x54fae8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fae9:{NFSU2_TR(0x54fae9);
__builtin_memmove((R+24),(R+4),4);
}
B54faeb:{NFSU2_TR(0x54faeb);
if(r1(R+518)){{goto L54faf9;}}
}
B54faed:L54faed:{c.instructions+=2;NFSU2_TR(0x54faed);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B54faf0:{NFSU2_TR(0x54faf0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54fb00;}}
}
B54faf2:L54faf2:{c.instructions+=1;NFSU2_TR(0x54faf2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54faf7ull));
TAIL_STATIC(0x546030u,546);
}
B54faf7:L54faf7:{c.instructions+=1;NFSU2_TR(0x54faf7);
{goto L54fb00;}
}
B54faf9:L54faf9:{c.instructions+=2;NFSU2_TR(0x54faf9);
__builtin_memmove((R+4),(R+24),4);
}
B54fafb:{NFSU2_TR(0x54fafb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54fb00ull));
TAIL_STATIC(0x545b50u,545);
}
B54fb00:L54fb00:{c.instructions+=2;NFSU2_TR(0x54fb00);
__builtin_memmove((R+4),(R+24),4);
}
B54fb02:{NFSU2_TR(0x54fb02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54fb07ull));
TAIL_STATIC(0x545510u,545);
}
B54fb07:L54fb07:{c.instructions+=2;NFSU2_TR(0x54fb07);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54fb0e:{NFSU2_TR(0x54fb0e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54fb53;}}
}
B54fb10:L54fb10:{c.instructions+=2;NFSU2_TR(0x54fb10);
u8 U[8];
__builtin_memmove((U+0),gp(0x838990),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54fb17:{NFSU2_TR(0x54fb17);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54fb53;}}
}
B54fb19:L54fb19:{c.instructions+=3;NFSU2_TR(0x54fb19);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fb1a:{NFSU2_TR(0x54fb1a);
__builtin_memmove((R+4),(R+24),4);
}
B54fb1c:{NFSU2_TR(0x54fb1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54fb21ull));
TAIL_STATIC(0x5453b0u,545);
}
B54fb21:L54fb21:{c.instructions+=3;NFSU2_TR(0x54fb21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54fb24:{NFSU2_TR(0x54fb24);
w4(R+4,u32(0x838980ull));
}
B54fb29:{NFSU2_TR(0x54fb29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54fb2eull));
TAIL_STATIC(0x521530u,521);
}
B54fb2e:L54fb2e:{c.instructions+=5;NFSU2_TR(0x54fb2e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fb2f:{NFSU2_TR(0x54fb2f);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fb34:{NFSU2_TR(0x54fb34);
u8 U[4];
w4(U+0,u32(0x2f5e7da3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fb39:{NFSU2_TR(0x54fb39);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fb3a:{NFSU2_TR(0x54fb3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54fb3full));
TAIL_STATIC(0x537b80u,537);
}
B54fb3f:L54fb3f:{c.instructions+=6;NFSU2_TR(0x54fb3f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B54fb42:{NFSU2_TR(0x54fb42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54fb43:{NFSU2_TR(0x54fb43);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B54fb46:{NFSU2_TR(0x54fb46);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fb48:{NFSU2_TR(0x54fb48);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54fb4c:{NFSU2_TR(0x54fb4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54fb51ull));
TAIL_STATIC(0x52eb90u,52e);
}
B54fb51:L54fb51:{c.instructions+=2;NFSU2_TR(0x54fb51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54fb52:{NFSU2_TR(0x54fb52);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54fb53:L54fb53:{c.instructions+=2;NFSU2_TR(0x54fb53);
__builtin_memmove((R+4),(R+24),4);
}
B54fb55:{NFSU2_TR(0x54fb55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54fb5aull));
TAIL_STATIC(0x545460u,545);
}
B54fb5a:L54fb5a:{c.instructions+=4;NFSU2_TR(0x54fb5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B54fb5d:{NFSU2_TR(0x54fb5d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fb5f:{NFSU2_TR(0x54fb5f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54fb63:{NFSU2_TR(0x54fb63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54fb68ull));
TAIL_STATIC(0x52eb90u,52e);
}
B54fb68:L54fb68:{c.instructions+=2;NFSU2_TR(0x54fb68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54fb69:{NFSU2_TR(0x54fb69);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54fb70:L54fb70:{c.instructions+=5;NFSU2_TR(0x54fb70);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54fb74:{NFSU2_TR(0x54fb74);
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
B54fb76:{NFSU2_TR(0x54fb76);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fb77:{NFSU2_TR(0x54fb77);
__builtin_memmove((R+24),(R+4),4);
}
B54fb79:{NFSU2_TR(0x54fb79);
if(r1(R+518)){{goto L54fba3;}}
}
B54fb7b:L54fb7b:{c.instructions+=4;NFSU2_TR(0x54fb7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54fb7e:{NFSU2_TR(0x54fb7e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff7ull))));
}
B54fb81:{NFSU2_TR(0x54fb81);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x99ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x99ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x99ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B54fb86:{NFSU2_TR(0x54fb86);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L54fba3;}}
}
B54fb88:L54fb88:{c.instructions+=3;NFSU2_TR(0x54fb88);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54fc9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B54fb8f:{NFSU2_TR(0x54fb8f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fb90:{NFSU2_TR(0x54fb90);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x54fc84ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B54fb97:L54fb97:{c.instructions+=2;NFSU2_TR(0x54fb97);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B54fb9c:{NFSU2_TR(0x54fb9c);
__builtin_memmove(gp(0x8363f8),(R+4),4);
}
B54fba2:L54fba2:{c.instructions+=1;NFSU2_TR(0x54fba2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54fba3:L54fba3:{c.instructions+=2;NFSU2_TR(0x54fba3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54fba4:{NFSU2_TR(0x54fba4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54fba7:L54fba7:{c.instructions+=5;NFSU2_TR(0x54fba7);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B54fbac:{NFSU2_TR(0x54fbac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54fbad:{NFSU2_TR(0x54fbad);
__builtin_memmove(gp(0x8a1c68),(R+8),4);
}
B54fbb3:{NFSU2_TR(0x54fbb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54fbb4:{NFSU2_TR(0x54fbb4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54fbb7:L54fbb7:{c.instructions+=4;NFSU2_TR(0x54fbb7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B54fbbb:{NFSU2_TR(0x54fbbb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fbbc:{NFSU2_TR(0x54fbbc);
__builtin_memmove((R+4),(R+24),4);
}
B54fbbe:{NFSU2_TR(0x54fbbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54fbc3ull));
TAIL_STATIC(0x547090u,547);
}
B54fbc3:L54fbc3:{c.instructions+=5;NFSU2_TR(0x54fbc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54fbc6:{NFSU2_TR(0x54fbc6);
u8 U[4];
w4(U+0,u32(0x3e9431dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fbcb:{NFSU2_TR(0x54fbcb);
u8 U[4];
w4(U+0,u32(0xa936c3a2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fbd0:{NFSU2_TR(0x54fbd0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fbd1:{NFSU2_TR(0x54fbd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54fbd6ull));
TAIL_STATIC(0x495460u,495);
}
B54fbd6:L54fbd6:{c.instructions+=3;NFSU2_TR(0x54fbd6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B54fbd9:{NFSU2_TR(0x54fbd9);
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
B54fbdb:{NFSU2_TR(0x54fbdb);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54fba2u);}goto L54fba2;}}
}
B54fbdd:L54fbdd:{c.instructions+=6;NFSU2_TR(0x54fbdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54fbde:{NFSU2_TR(0x54fbde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54fbdf:{NFSU2_TR(0x54fbdf);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x799ab8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54fbe7:{NFSU2_TR(0x54fbe7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x200409ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54fbef:{NFSU2_TR(0x54fbef);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B54fbf5:{NFSU2_TR(0x54fbf5);
TAIL_STATIC(0x54e6e0u,54e);
}
B54fbfa:L54fbfa:{c.instructions+=4;NFSU2_TR(0x54fbfa);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B54fbfe:{NFSU2_TR(0x54fbfe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fbff:{NFSU2_TR(0x54fbff);
__builtin_memmove((R+4),(R+24),4);
}
B54fc01:{NFSU2_TR(0x54fc01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54fc06ull));
TAIL_STATIC(0x547090u,547);
}
B54fc06:L54fc06:{c.instructions+=5;NFSU2_TR(0x54fc06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54fc09:{NFSU2_TR(0x54fc09);
u8 U[4];
w4(U+0,u32(0xba0e1020ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fc0e:{NFSU2_TR(0x54fc0e);
u8 U[4];
w4(U+0,u32(0xa936c3a2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fc13:{NFSU2_TR(0x54fc13);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fc14:{NFSU2_TR(0x54fc14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54fc19ull));
TAIL_STATIC(0x495460u,495);
}
B54fc19:L54fc19:{c.instructions+=3;NFSU2_TR(0x54fc19);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B54fc1c:{NFSU2_TR(0x54fc1c);
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
B54fc1e:{NFSU2_TR(0x54fc1e);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54fba2u);}goto L54fba2;}}
}
B54fc20:L54fc20:{c.instructions+=6;NFSU2_TR(0x54fc20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54fc21:{NFSU2_TR(0x54fc21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54fc22:{NFSU2_TR(0x54fc22);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x799ab8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54fc2a:{NFSU2_TR(0x54fc2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x80409ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54fc32:{NFSU2_TR(0x54fc32);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B54fc38:{NFSU2_TR(0x54fc38);
TAIL_STATIC(0x54e6e0u,54e);
}
B54fc3d:L54fc3d:{c.instructions+=4;NFSU2_TR(0x54fc3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B54fc41:{NFSU2_TR(0x54fc41);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fc42:{NFSU2_TR(0x54fc42);
__builtin_memmove((R+4),(R+24),4);
}
B54fc44:{NFSU2_TR(0x54fc44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54fc49ull));
TAIL_STATIC(0x547090u,547);
}
B54fc49:L54fc49:{c.instructions+=5;NFSU2_TR(0x54fc49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54fc4c:{NFSU2_TR(0x54fc4c);
u8 U[4];
w4(U+0,u32(0xeaa1d5dfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fc51:{NFSU2_TR(0x54fc51);
u8 U[4];
w4(U+0,u32(0xa936c3a2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fc56:{NFSU2_TR(0x54fc56);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fc57:{NFSU2_TR(0x54fc57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54fc5cull));
TAIL_STATIC(0x495460u,495);
}
B54fc5c:L54fc5c:{c.instructions+=3;NFSU2_TR(0x54fc5c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B54fc5f:{NFSU2_TR(0x54fc5f);
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
B54fc61:{NFSU2_TR(0x54fc61);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54fba2u);}goto L54fba2;}}
}
B54fc67:L54fc67:{c.instructions+=6;NFSU2_TR(0x54fc67);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B54fc6d:{NFSU2_TR(0x54fc6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54fc6e:{NFSU2_TR(0x54fc6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54fc6f:{NFSU2_TR(0x54fc6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x799ab8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54fc77:{NFSU2_TR(0x54fc77);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x100409ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54fc7f:{NFSU2_TR(0x54fc7f);
TAIL_STATIC(0x54e6e0u,54e);
}
B54fd40:L54fd40:{c.instructions+=4;NFSU2_TR(0x54fd40);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fd41:{NFSU2_TR(0x54fd41);
__builtin_memmove((R+28),(R+4),4);
}
B54fd43:{NFSU2_TR(0x54fd43);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x1ull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B54fd46:{NFSU2_TR(0x54fd46);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54fdad;}}
}
B54fd48:L54fd48:{c.instructions+=3;NFSU2_TR(0x54fd48);
__builtin_memmove((R+0),gp(0x83898c),4);
}
B54fd4d:{NFSU2_TR(0x54fd4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54fd4f:{NFSU2_TR(0x54fd4f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54fd6d;}}
}
B54fd51:L54fd51:{c.instructions+=3;NFSU2_TR(0x54fd51);
__builtin_memmove((R+0),gp(0x851148),4);
}
B54fd56:{NFSU2_TR(0x54fd56);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54fd58:{NFSU2_TR(0x54fd58);
if(r1(R+518)){{goto L54fd6d;}}
}
B54fd5a:L54fd5a:{c.instructions+=2;NFSU2_TR(0x54fd5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fd5b:{NFSU2_TR(0x54fd5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54fd60ull));
TAIL_STATIC(0x440540u,440);
}
B54fd60:L54fd60:{c.instructions+=2;NFSU2_TR(0x54fd60);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54fd63:{NFSU2_TR(0x54fd63);
s4(0x851148,u32(0x0ull));
}
B54fd6d:L54fd6d:{c.instructions+=5;NFSU2_TR(0x54fd6d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fd6e:{NFSU2_TR(0x54fd6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x940ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54fd74:{NFSU2_TR(0x54fd74);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fd75:{NFSU2_TR(0x54fd75);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B54fd78:{NFSU2_TR(0x54fd78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54fd7dull));
TAIL_STATIC(0x413440u,413);
}
B54fd7d:L54fd7d:{c.instructions+=4;NFSU2_TR(0x54fd7d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fd7f:{NFSU2_TR(0x54fd7f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fd81:{NFSU2_TR(0x54fd81);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fd82:{NFSU2_TR(0x54fd82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54fd87ull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B54fd87:L54fd87:{c.instructions+=2;NFSU2_TR(0x54fd87);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B54fd8a:{NFSU2_TR(0x54fd8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54fd8full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54f980u);}goto L54f980;}
}
B54fd8f:L54fd8f:{c.instructions+=4;NFSU2_TR(0x54fd8f);
__builtin_memmove((R+4),gp(0x83853c),4);
}
B54fd95:{NFSU2_TR(0x54fd95);
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
B54fd97:{NFSU2_TR(0x54fd97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54fd98:{NFSU2_TR(0x54fd98);
if(r1(R+518)){{goto L54fdaa;}}
}
B54fd9a:L54fd9a:{c.instructions+=3;NFSU2_TR(0x54fd9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B54fd9c:{NFSU2_TR(0x54fd9c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fd9e:{NFSU2_TR(0x54fd9e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54fda0ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B54fda0:L54fda0:{c.instructions+=1;NFSU2_TR(0x54fda0);
s4(0x83853c,u32(0x0ull));
}
B54fdaa:L54fdaa:{c.instructions+=1;NFSU2_TR(0x54fdaa);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+28)),r1(U+0));
}
B54fdad:L54fdad:{c.instructions+=2;NFSU2_TR(0x54fdad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54fdae:{NFSU2_TR(0x54fdae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54fdb0:L54fdb0:{c.instructions+=6;NFSU2_TR(0x54fdb0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fdb1:{NFSU2_TR(0x54fdb1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B54fdb5:{NFSU2_TR(0x54fdb5);
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
B54fdb7:{NFSU2_TR(0x54fdb7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fdb8:{NFSU2_TR(0x54fdb8);
__builtin_memmove((R+28),(R+4),4);
}
B54fdba:{NFSU2_TR(0x54fdba);
if(r1(R+518)){{goto L54fe42;}}
}
B54fdc0:L54fdc0:{c.instructions+=4;NFSU2_TR(0x54fdc0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fdc1:{NFSU2_TR(0x54fdc1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B54fdc5:{NFSU2_TR(0x54fdc5);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B54fdc8:{NFSU2_TR(0x54fdc8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L54fe41;}}
}
B54fdca:L54fdca:{c.instructions+=2;NFSU2_TR(0x54fdca);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0x43ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x43ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x43ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B54fdcd:{NFSU2_TR(0x54fdcd);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L54fe41;}}
}
B54fdcf:L54fdcf:{c.instructions+=5;NFSU2_TR(0x54fdcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54fdd2:{NFSU2_TR(0x54fdd2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fdd3:{NFSU2_TR(0x54fdd3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54fdd6:{NFSU2_TR(0x54fdd6);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54fdd8:{NFSU2_TR(0x54fdd8);
if(r1(R+518)){{goto L54fe09;}}
}
B54fdda:L54fdda:{c.instructions+=4;NFSU2_TR(0x54fdda);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fddc:{NFSU2_TR(0x54fddc);
u8 U[4];
w4(U+0,u32(0x564b8cb6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fde1:{NFSU2_TR(0x54fde1);
__builtin_memmove((R+4),(R+20),4);
}
B54fde3:{NFSU2_TR(0x54fde3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54fde8ull));
TAIL_STATIC(0x61b500u,61b);
}
B54fde8:L54fde8:{c.instructions+=2;NFSU2_TR(0x54fde8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54fdeb:{NFSU2_TR(0x54fdeb);
if(r1(R+518)){{goto L54fe02;}}
}
B54fded:L54fded:{c.instructions+=2;NFSU2_TR(0x54fded);
__builtin_memmove((R+4),(R+28),4);
}
B54fdef:{NFSU2_TR(0x54fdef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54fdf4ull));
TAIL_STATIC(0x521580u,521);
}
B54fdf4:L54fdf4:{c.instructions+=2;NFSU2_TR(0x54fdf4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54fdf6:{NFSU2_TR(0x54fdf6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54fe02;}}
}
B54fdf8:L54fdf8:{c.instructions+=3;NFSU2_TR(0x54fdf8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fdf9:{NFSU2_TR(0x54fdf9);
__builtin_memmove((R+4),(R+28),4);
}
B54fdfb:{NFSU2_TR(0x54fdfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54fe00ull));
TAIL_STATIC(0x53b0e0u,53b);
}
B54fe00:L54fe00:{c.instructions+=1;NFSU2_TR(0x54fe00);
{goto L54fe09;}
}
B54fe02:L54fe02:{c.instructions+=2;NFSU2_TR(0x54fe02);
__builtin_memmove((R+4),(R+28),4);
}
B54fe04:{NFSU2_TR(0x54fe04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54fe09ull));
TAIL_STATIC(0x547540u,547);
}
B54fe09:L54fe09:{c.instructions+=2;NFSU2_TR(0x54fe09);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fe0b:{NFSU2_TR(0x54fe0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54fe10ull));
TAIL_STATIC(0x575620u,575);
}
B54fe10:L54fe10:{c.instructions+=3;NFSU2_TR(0x54fe10);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54fe13:{NFSU2_TR(0x54fe13);
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
B54fe15:{NFSU2_TR(0x54fe15);
if(r1(R+518)){{goto L54fe31;}}
}
B54fe17:L54fe17:{c.instructions+=12;NFSU2_TR(0x54fe17);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54fe1a:{NFSU2_TR(0x54fe1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54fe1d:{NFSU2_TR(0x54fe1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54fe20:{NFSU2_TR(0x54fe20);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B54fe22:{NFSU2_TR(0x54fe22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54fe25:{NFSU2_TR(0x54fe25);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B54fe27:{NFSU2_TR(0x54fe27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54fe28:{NFSU2_TR(0x54fe28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54fe29:{NFSU2_TR(0x54fe29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54fe2a:{NFSU2_TR(0x54fe2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54fe2d:{NFSU2_TR(0x54fe2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54fe2e:{NFSU2_TR(0x54fe2e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54fe31:L54fe31:{c.instructions+=7;NFSU2_TR(0x54fe31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54fe34:{NFSU2_TR(0x54fe34);
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
B54fe36:{NFSU2_TR(0x54fe36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B54fe38:{NFSU2_TR(0x54fe38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54fe3b:{NFSU2_TR(0x54fe3b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B54fe3d:{NFSU2_TR(0x54fe3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54fe40:{NFSU2_TR(0x54fe40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54fe41:L54fe41:{c.instructions+=1;NFSU2_TR(0x54fe41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54fe42:L54fe42:{c.instructions+=3;NFSU2_TR(0x54fe42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54fe43:{NFSU2_TR(0x54fe43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54fe44:{NFSU2_TR(0x54fe44);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54fe50:L54fe50:{c.instructions+=10;NFSU2_TR(0x54fe50);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fe51:{NFSU2_TR(0x54fe51);
__builtin_memmove((R+20),(R+16),4);
}
B54fe53:{NFSU2_TR(0x54fe53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B54fe56:{NFSU2_TR(0x54fe56);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fe57:{NFSU2_TR(0x54fe57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54fe5a:{NFSU2_TR(0x54fe5a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fe5b:{NFSU2_TR(0x54fe5b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B54fe5d:{NFSU2_TR(0x54fe5d);
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
B54fe5f:{NFSU2_TR(0x54fe5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54fe62:{NFSU2_TR(0x54fe62);
if(r1(R+518)){{goto L54ff26;}}
}
B54fe68:L54fe68:{c.instructions+=10;NFSU2_TR(0x54fe68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54fe6b:{NFSU2_TR(0x54fe6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B54fe6e:{NFSU2_TR(0x54fe6e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fe6f:{NFSU2_TR(0x54fe6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B54fe71:{NFSU2_TR(0x54fe71);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B54fe74:{NFSU2_TR(0x54fe74);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fe75:{NFSU2_TR(0x54fe75);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fe76:{NFSU2_TR(0x54fe76);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fe77:{NFSU2_TR(0x54fe77);
w4(R+4,u32(0x85ad40ull));
}
B54fe7c:{NFSU2_TR(0x54fe7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54fe81ull));
TAIL_STATIC(0x5415e0u,541);
}
B54fe81:L54fe81:{c.instructions+=5;NFSU2_TR(0x54fe81);
__builtin_memmove((R+0),gp(0x861e74),4);
}
B54fe86:{NFSU2_TR(0x54fe86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54fe89:{NFSU2_TR(0x54fe89);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B54fe8b:{NFSU2_TR(0x54fe8b);
__builtin_memmove(gp(0x861e74),(R+0),4);
}
B54fe90:{NFSU2_TR(0x54fe90);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L54fe98;}}
}
B54fe92:L54fe92:{c.instructions+=1;NFSU2_TR(0x54fe92);
__builtin_memmove(gp(0x861e74),(R+28),4);
}
B54fe98:L54fe98:{c.instructions+=3;NFSU2_TR(0x54fe98);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
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
B54fe9b:{NFSU2_TR(0x54fe9b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54fe9f:{NFSU2_TR(0x54fe9f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L54ff19;}}
}
B54fea1:L54fea1:{c.instructions+=1;NFSU2_TR(0x54fea1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fea2:L54fea2:{c.instructions+=6;NFSU2_TR(0x54fea2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54fea5:{NFSU2_TR(0x54fea5);
__builtin_memmove((R+8),(R+28),4);
}
B54fea7:{NFSU2_TR(0x54fea7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x5cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B54feaa:{NFSU2_TR(0x54feaa);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B54feae:{NFSU2_TR(0x54feae);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54feaf:{NFSU2_TR(0x54feaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54feb4ull));
TAIL_STATIC(0x530350u,530);
}
B54feb4:L54feb4:{c.instructions+=2;NFSU2_TR(0x54feb4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54feb6:{NFSU2_TR(0x54feb6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54fefd;}}
}
B54feb8:L54feb8:{c.instructions+=5;NFSU2_TR(0x54feb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B54feba:{NFSU2_TR(0x54feba);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x837b90ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B54fec1:{NFSU2_TR(0x54fec1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54fec3:{NFSU2_TR(0x54fec3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54fec6:{NFSU2_TR(0x54fec6);
if(r1(R+518)){{goto L54fefd;}}
}
B54fec8:L54fec8:{c.instructions+=4;NFSU2_TR(0x54fec8);
__builtin_memmove((R+0),gp(0x863480),4);
}
B54fecd:{NFSU2_TR(0x54fecd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fece:{NFSU2_TR(0x54fece);
w4(R+4,u32(0x83ad90ull));
}
B54fed3:{NFSU2_TR(0x54fed3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54fed8ull));
TAIL_STATIC(0x503680u,503);
}
B54fed8:L54fed8:{c.instructions+=7;NFSU2_TR(0x54fed8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54fedb:{NFSU2_TR(0x54fedb);
u8 U[16];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B54fedf:{NFSU2_TR(0x54fedf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x434ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54fee5:{NFSU2_TR(0x54fee5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fee6:{NFSU2_TR(0x54fee6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54fee7:{NFSU2_TR(0x54fee7);
__builtin_memmove((R+4),(R+24),4);
}
B54fee9:{NFSU2_TR(0x54fee9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54feeeull));
TAIL_STATIC(0x503e10u,503);
}
B54feee:L54feee:{c.instructions+=4;NFSU2_TR(0x54feee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54fef1:{NFSU2_TR(0x54fef1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54fef4:{NFSU2_TR(0x54fef4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B54fefa:{NFSU2_TR(0x54fefa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54fefd:L54fefd:{c.instructions+=8;NFSU2_TR(0x54fefd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54ff00:{NFSU2_TR(0x54ff00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54ff03:{NFSU2_TR(0x54ff03);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B54ff05:{NFSU2_TR(0x54ff05);
u8 U[16];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0xffffffffull));
s4(u32(r4(U+8)),r4(U+12));
}
B54ff0d:{NFSU2_TR(0x54ff0d);
w4(R+28,u32(r1(R+0)));
}
B54ff10:{NFSU2_TR(0x54ff10);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B54ff13:{NFSU2_TR(0x54ff13);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+14)));
w4(U+18,u32(u32(r4(R+28))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B54ff16:{NFSU2_TR(0x54ff16);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54fea2u);}goto L54fea2;}}
}
B54ff18:L54ff18:{c.instructions+=1;NFSU2_TR(0x54ff18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54ff19:L54ff19:{c.instructions+=2;NFSU2_TR(0x54ff19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54ff1c:{NFSU2_TR(0x54ff1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1234ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54ff26:L54ff26:{c.instructions+=5;NFSU2_TR(0x54ff26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54ff27:{NFSU2_TR(0x54ff27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54ff28:{NFSU2_TR(0x54ff28);
__builtin_memmove((R+16),(R+20),4);
}
B54ff2a:{NFSU2_TR(0x54ff2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54ff2b:{NFSU2_TR(0x54ff2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54ff30:L54ff30:{c.instructions+=3;NFSU2_TR(0x54ff30);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54ff33:{NFSU2_TR(0x54ff33);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ff34:{NFSU2_TR(0x54ff34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ff39ull));
TAIL_STATIC(0x505450u,505);
}
B54ff39:L54ff39:{c.instructions+=2;NFSU2_TR(0x54ff39);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ff3a:{NFSU2_TR(0x54ff3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ff3full));
TAIL_STATIC(0x50b840u,50b);
}
B54ff3f:L54ff3f:{c.instructions+=3;NFSU2_TR(0x54ff3f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B54ff42:{NFSU2_TR(0x54ff42);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54ff44:{NFSU2_TR(0x54ff44);
if(r1(R+518)){{goto L54ff4d;}}
}
B54ff46:L54ff46:{c.instructions+=1;NFSU2_TR(0x54ff46);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54ff4d:L54ff4d:{c.instructions+=2;NFSU2_TR(0x54ff4d);
w4(R+4,u32(0x838980ull));
}
B54ff52:{NFSU2_TR(0x54ff52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ff57ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54fd40u);}goto L54fd40;}
}
B54ff57:L54ff57:{c.instructions+=3;NFSU2_TR(0x54ff57);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54ff5e:{NFSU2_TR(0x54ff5e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ff60:{NFSU2_TR(0x54ff60);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54ff74;}}
}
B54ff62:L54ff62:{c.instructions+=4;NFSU2_TR(0x54ff62);
__builtin_memmove((R+4),gp(0x863480),4);
}
B54ff68:{NFSU2_TR(0x54ff68);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ff69:{NFSU2_TR(0x54ff69);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ff6b:{NFSU2_TR(0x54ff6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ff70ull));
TAIL_STATIC(0x5309e0u,530);
}
B54ff70:L54ff70:{c.instructions+=2;NFSU2_TR(0x54ff70);
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
B54ff73:{NFSU2_TR(0x54ff73);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54ff74:L54ff74:{c.instructions+=4;NFSU2_TR(0x54ff74);
__builtin_memmove((R+8),gp(0x83aab8),4);
}
B54ff7a:{NFSU2_TR(0x54ff7a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ff7b:{NFSU2_TR(0x54ff7b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ff7d:{NFSU2_TR(0x54ff7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ff82ull));
TAIL_STATIC(0x5309e0u,530);
}
B54ff82:L54ff82:{c.instructions+=2;NFSU2_TR(0x54ff82);
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
B54ff85:{NFSU2_TR(0x54ff85);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54ff90:L54ff90:{c.instructions+=9;NFSU2_TR(0x54ff90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ff91:{NFSU2_TR(0x54ff91);
__builtin_memmove((R+24),(R+4),4);
}
B54ff93:{NFSU2_TR(0x54ff93);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ff94:{NFSU2_TR(0x54ff94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54ff97:{NFSU2_TR(0x54ff97);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54ff9a:{NFSU2_TR(0x54ff9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54ffa0:{NFSU2_TR(0x54ffa0);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54ffa3:{NFSU2_TR(0x54ffa3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54ffa5:{NFSU2_TR(0x54ffa5);
if(r1(R+518)){TAIL_STATIC(0x550069u,550);}
}
B54ffab:L54ffab:{c.instructions+=2;NFSU2_TR(0x54ffab);
w4(R+4,u32(0x8392d0ull));
}
B54ffb0:{NFSU2_TR(0x54ffb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ffb5ull));
TAIL_STATIC(0x5b53a0u,5b5);
}
B54ffb5:L54ffb5:{c.instructions+=3;NFSU2_TR(0x54ffb5);
{u32 ea_=u32(r4(R+24)+u32(428u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B54ffbb:{NFSU2_TR(0x54ffbb);
w4(R+4,u32(0x8392d0ull));
}
B54ffc0:{NFSU2_TR(0x54ffc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ffc5ull));
TAIL_STATIC(0x5b53a0u,5b5);
}
B54ffc5:L54ffc5:{c.instructions+=8;NFSU2_TR(0x54ffc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x194ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54ffcb:{NFSU2_TR(0x54ffcb);
{u32 ea_=u32(r4(R+24)+u32(404u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B54ffd1:{NFSU2_TR(0x54ffd1);
{u32 ea_=u32(r4(R+24)+u32(392u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B54ffd7:{NFSU2_TR(0x54ffd7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((R+4),(U+0),4);
}
B54ffdd:{NFSU2_TR(0x54ffdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54ffe0:{NFSU2_TR(0x54ffe0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B54ffe2:{NFSU2_TR(0x54ffe2);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54ffe5:{NFSU2_TR(0x54ffe5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54ffed;}}
}
B54ffe7:L54ffe7:{c.instructions+=2;NFSU2_TR(0x54ffe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54ffea:{NFSU2_TR(0x54ffea);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54ffed:L54ffed:{c.instructions+=5;NFSU2_TR(0x54ffed);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54fff0:{NFSU2_TR(0x54fff0);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B54fff3:{NFSU2_TR(0x54fff3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B54fff5:{NFSU2_TR(0x54fff5);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B54fff8:{NFSU2_TR(0x54fff8);
if(r1(R+514)){TAIL_STATIC(0x550000u,550);}
}
B54fffa:L54fffa:{c.instructions+=2;NFSU2_TR(0x54fffa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54fffd:{NFSU2_TR(0x54fffd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x550000u,550);
}
XIT:NFSU2_TR_EXIT(0x54f,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
