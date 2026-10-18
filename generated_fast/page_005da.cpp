#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_5d5(u8* __restrict R,Cpu& c);
u32 body_5d9(u8* __restrict R,Cpu& c);
u32 body_5db(u8* __restrict R,Cpu& c);
u32 body_5df(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5da,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5da,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5da(u8* __restrict R,Cpu& c);
u32 page_5da(Cpu& c){return body_5da(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5da(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5da002:goto L5da002;
case 0x5da004:c.instructions+=1;goto B5da004;
case 0x5da006:goto L5da006;
case 0x5da008:c.instructions+=1;goto B5da008;
case 0x5da00a:goto L5da00a;
case 0x5da00d:c.instructions+=2;goto B5da00d;
case 0x5da010:c.instructions+=1;goto B5da010;
case 0x5da013:goto L5da013;
case 0x5da017:c.instructions+=6;goto B5da017;
case 0x5da01a:c.instructions+=5;goto B5da01a;
case 0x5da020:c.instructions+=4;goto B5da020;
case 0x5da024:c.instructions+=3;goto B5da024;
case 0x5da02b:c.instructions+=2;goto B5da02b;
case 0x5da02d:c.instructions+=1;goto B5da02d;
case 0x5da02f:goto L5da02f;
case 0x5da033:c.instructions+=4;goto B5da033;
case 0x5da034:c.instructions+=3;goto B5da034;
case 0x5da035:c.instructions+=2;goto B5da035;
case 0x5da037:c.instructions+=1;goto B5da037;
case 0x5da03c:goto L5da03c;
case 0x5da040:c.instructions+=2;goto B5da040;
case 0x5da044:c.instructions+=1;goto B5da044;
case 0x5da046:goto L5da046;
case 0x5da049:c.instructions+=8;goto B5da049;
case 0x5da04f:c.instructions+=7;goto B5da04f;
case 0x5da052:c.instructions+=6;goto B5da052;
case 0x5da053:c.instructions+=5;goto B5da053;
case 0x5da056:c.instructions+=4;goto B5da056;
case 0x5da05a:c.instructions+=3;goto B5da05a;
case 0x5da05b:c.instructions+=2;goto B5da05b;
case 0x5da05d:c.instructions+=1;goto B5da05d;
case 0x5da062:goto L5da062;
case 0x5da064:c.instructions+=6;goto B5da064;
case 0x5da06a:c.instructions+=5;goto B5da06a;
case 0x5da070:c.instructions+=4;goto B5da070;
case 0x5da076:c.instructions+=3;goto B5da076;
case 0x5da078:c.instructions+=2;goto B5da078;
case 0x5da07b:c.instructions+=1;goto B5da07b;
case 0x5da07d:goto L5da07d;
case 0x5da07f:c.instructions+=1;goto B5da07f;
case 0x5da085:goto L5da085;
case 0x5da089:c.instructions+=4;goto B5da089;
case 0x5da08d:c.instructions+=3;goto B5da08d;
case 0x5da08f:c.instructions+=2;goto B5da08f;
case 0x5da092:c.instructions+=1;goto B5da092;
case 0x5da094:goto L5da094;
case 0x5da098:c.instructions+=2;goto B5da098;
case 0x5da09b:c.instructions+=1;goto B5da09b;
case 0x5da09d:goto L5da09d;
case 0x5da09f:goto L5da09f;
case 0x5da0a3:c.instructions+=4;goto B5da0a3;
case 0x5da0a6:c.instructions+=3;goto B5da0a6;
case 0x5da0a9:c.instructions+=2;goto B5da0a9;
case 0x5da0ad:c.instructions+=1;goto B5da0ad;
case 0x5da0b3:goto L5da0b3;
case 0x5da0b6:c.instructions+=9;goto B5da0b6;
case 0x5da0ba:c.instructions+=8;goto B5da0ba;
case 0x5da0bd:c.instructions+=7;goto B5da0bd;
case 0x5da0c3:c.instructions+=6;goto B5da0c3;
case 0x5da0c6:c.instructions+=5;goto B5da0c6;
case 0x5da0c8:c.instructions+=4;goto B5da0c8;
case 0x5da0ca:c.instructions+=3;goto B5da0ca;
case 0x5da0cd:c.instructions+=2;goto B5da0cd;
case 0x5da0d1:c.instructions+=1;goto B5da0d1;
case 0x5da0d3:goto L5da0d3;
case 0x5da0d6:c.instructions+=4;goto B5da0d6;
case 0x5da0dc:c.instructions+=3;goto B5da0dc;
case 0x5da0de:c.instructions+=2;goto B5da0de;
case 0x5da0e1:c.instructions+=1;goto B5da0e1;
case 0x5da0e3:goto L5da0e3;
case 0x5da0e6:c.instructions+=14;goto B5da0e6;
case 0x5da0eb:c.instructions+=13;goto B5da0eb;
case 0x5da0ed:c.instructions+=12;goto B5da0ed;
case 0x5da0f1:c.instructions+=11;goto B5da0f1;
case 0x5da0f4:c.instructions+=10;goto B5da0f4;
case 0x5da0f6:c.instructions+=9;goto B5da0f6;
case 0x5da0f9:c.instructions+=8;goto B5da0f9;
case 0x5da0fb:c.instructions+=7;goto B5da0fb;
case 0x5da0fd:c.instructions+=6;goto B5da0fd;
case 0x5da0fe:c.instructions+=5;goto B5da0fe;
case 0x5da102:c.instructions+=4;goto B5da102;
case 0x5da105:c.instructions+=3;goto B5da105;
case 0x5da109:c.instructions+=2;goto B5da109;
case 0x5da10c:c.instructions+=1;goto B5da10c;
case 0x5da110:goto L5da110;
case 0x5da113:c.instructions+=13;goto B5da113;
case 0x5da115:c.instructions+=12;goto B5da115;
case 0x5da118:c.instructions+=11;goto B5da118;
case 0x5da11c:c.instructions+=10;goto B5da11c;
case 0x5da11e:c.instructions+=9;goto B5da11e;
case 0x5da123:c.instructions+=8;goto B5da123;
case 0x5da127:c.instructions+=7;goto B5da127;
case 0x5da128:c.instructions+=6;goto B5da128;
case 0x5da12c:c.instructions+=5;goto B5da12c;
case 0x5da12d:c.instructions+=4;goto B5da12d;
case 0x5da133:c.instructions+=3;goto B5da133;
case 0x5da137:c.instructions+=2;goto B5da137;
case 0x5da13f:c.instructions+=1;goto B5da13f;
case 0x5da144:goto L5da144;
case 0x5da148:c.instructions+=7;goto B5da148;
case 0x5da14c:c.instructions+=6;goto B5da14c;
case 0x5da152:c.instructions+=5;goto B5da152;
case 0x5da154:c.instructions+=4;goto B5da154;
case 0x5da155:c.instructions+=3;goto B5da155;
case 0x5da159:c.instructions+=2;goto B5da159;
case 0x5da15a:c.instructions+=1;goto B5da15a;
case 0x5da15f:goto L5da15f;
case 0x5da163:c.instructions+=10;goto B5da163;
case 0x5da167:c.instructions+=9;goto B5da167;
case 0x5da16b:c.instructions+=8;goto B5da16b;
case 0x5da16d:c.instructions+=7;goto B5da16d;
case 0x5da171:c.instructions+=6;goto B5da171;
case 0x5da172:c.instructions+=5;goto B5da172;
case 0x5da176:c.instructions+=4;goto B5da176;
case 0x5da177:c.instructions+=3;goto B5da177;
case 0x5da17d:c.instructions+=2;goto B5da17d;
case 0x5da181:c.instructions+=1;goto B5da181;
case 0x5da186:goto L5da186;
case 0x5da18a:c.instructions+=8;goto B5da18a;
case 0x5da18e:c.instructions+=7;goto B5da18e;
case 0x5da192:c.instructions+=6;goto B5da192;
case 0x5da196:c.instructions+=5;goto B5da196;
case 0x5da197:c.instructions+=4;goto B5da197;
case 0x5da19b:c.instructions+=3;goto B5da19b;
case 0x5da19c:c.instructions+=2;goto B5da19c;
case 0x5da1a0:c.instructions+=1;goto B5da1a0;
case 0x5da1a5:goto L5da1a5;
case 0x5da1a9:c.instructions+=7;goto B5da1a9;
case 0x5da1ac:c.instructions+=6;goto B5da1ac;
case 0x5da1ae:c.instructions+=5;goto B5da1ae;
case 0x5da1af:c.instructions+=4;goto B5da1af;
case 0x5da1b3:c.instructions+=3;goto B5da1b3;
case 0x5da1b4:c.instructions+=2;goto B5da1b4;
case 0x5da1ba:c.instructions+=1;goto B5da1ba;
case 0x5da1bf:goto L5da1bf;
case 0x5da1c3:c.instructions+=8;goto B5da1c3;
case 0x5da1c6:c.instructions+=7;goto B5da1c6;
case 0x5da1c9:c.instructions+=6;goto B5da1c9;
case 0x5da1cc:c.instructions+=5;goto B5da1cc;
case 0x5da1cf:c.instructions+=4;goto B5da1cf;
case 0x5da1d5:c.instructions+=3;goto B5da1d5;
case 0x5da1d7:c.instructions+=2;goto B5da1d7;
case 0x5da1da:c.instructions+=1;goto B5da1da;
case 0x5da1dc:goto L5da1dc;
case 0x5da1e0:c.instructions+=6;goto B5da1e0;
case 0x5da1e2:c.instructions+=5;goto B5da1e2;
case 0x5da1e6:c.instructions+=4;goto B5da1e6;
case 0x5da1e8:c.instructions+=3;goto B5da1e8;
case 0x5da1ea:c.instructions+=2;goto B5da1ea;
case 0x5da1ee:c.instructions+=1;goto B5da1ee;
case 0x5da1f0:goto L5da1f0;
case 0x5da1f4:goto L5da1f4;
case 0x5da1f8:c.instructions+=24;goto B5da1f8;
case 0x5da1fb:c.instructions+=23;goto B5da1fb;
case 0x5da1ff:c.instructions+=22;goto B5da1ff;
case 0x5da202:c.instructions+=21;goto B5da202;
case 0x5da205:c.instructions+=20;goto B5da205;
case 0x5da207:c.instructions+=19;goto B5da207;
case 0x5da20a:c.instructions+=18;goto B5da20a;
case 0x5da20d:c.instructions+=17;goto B5da20d;
case 0x5da210:c.instructions+=16;goto B5da210;
case 0x5da213:c.instructions+=15;goto B5da213;
case 0x5da217:c.instructions+=14;goto B5da217;
case 0x5da21a:c.instructions+=13;goto B5da21a;
case 0x5da21e:c.instructions+=12;goto B5da21e;
case 0x5da221:c.instructions+=11;goto B5da221;
case 0x5da222:c.instructions+=10;goto B5da222;
case 0x5da224:c.instructions+=9;goto B5da224;
case 0x5da225:c.instructions+=8;goto B5da225;
case 0x5da228:c.instructions+=7;goto B5da228;
case 0x5da22b:c.instructions+=6;goto B5da22b;
case 0x5da22e:c.instructions+=5;goto B5da22e;
case 0x5da230:c.instructions+=4;goto B5da230;
case 0x5da231:c.instructions+=3;goto B5da231;
case 0x5da233:c.instructions+=2;goto B5da233;
case 0x5da234:c.instructions+=1;goto B5da234;
case 0x5da240:goto L5da240;
case 0x5da244:c.instructions+=7;goto B5da244;
case 0x5da245:c.instructions+=6;goto B5da245;
case 0x5da247:c.instructions+=5;goto B5da247;
case 0x5da24b:c.instructions+=4;goto B5da24b;
case 0x5da24c:c.instructions+=3;goto B5da24c;
case 0x5da24d:c.instructions+=2;goto B5da24d;
case 0x5da24f:c.instructions+=1;goto B5da24f;
case 0x5da254:goto L5da254;
case 0x5da256:c.instructions+=1;goto B5da256;
case 0x5da25c:goto L5da25c;
case 0x5da260:c.instructions+=6;goto B5da260;
case 0x5da264:c.instructions+=5;goto B5da264;
case 0x5da265:c.instructions+=4;goto B5da265;
case 0x5da267:c.instructions+=3;goto B5da267;
case 0x5da269:c.instructions+=2;goto B5da269;
case 0x5da26d:c.instructions+=1;goto B5da26d;
case 0x5da26f:goto L5da26f;
case 0x5da272:c.instructions+=7;goto B5da272;
case 0x5da273:c.instructions+=6;goto B5da273;
case 0x5da276:c.instructions+=5;goto B5da276;
case 0x5da279:c.instructions+=4;goto B5da279;
case 0x5da27b:c.instructions+=3;goto B5da27b;
case 0x5da27c:c.instructions+=2;goto B5da27c;
case 0x5da27e:c.instructions+=1;goto B5da27e;
case 0x5da280:goto L5da280;
case 0x5da282:c.instructions+=1;goto B5da282;
case 0x5da284:goto L5da284;
case 0x5da286:c.instructions+=1;goto B5da286;
case 0x5da288:goto L5da288;
case 0x5da28b:c.instructions+=1;goto B5da28b;
case 0x5da28d:goto L5da28d;
case 0x5da28f:c.instructions+=3;goto B5da28f;
case 0x5da292:c.instructions+=2;goto B5da292;
case 0x5da296:c.instructions+=1;goto B5da296;
case 0x5da298:goto L5da298;
case 0x5da29b:c.instructions+=6;goto B5da29b;
case 0x5da29d:c.instructions+=5;goto B5da29d;
case 0x5da29f:c.instructions+=4;goto B5da29f;
case 0x5da2a1:c.instructions+=3;goto B5da2a1;
case 0x5da2a3:c.instructions+=2;goto B5da2a3;
case 0x5da2a6:c.instructions+=1;goto B5da2a6;
case 0x5da2a8:goto L5da2a8;
case 0x5da2ab:c.instructions+=1;goto B5da2ab;
case 0x5da2ad:goto L5da2ad;
case 0x5da2b0:c.instructions+=3;goto B5da2b0;
case 0x5da2b2:c.instructions+=2;goto B5da2b2;
case 0x5da2b5:c.instructions+=1;goto B5da2b5;
case 0x5da2b7:goto L5da2b7;
case 0x5da2ba:goto L5da2ba;
case 0x5da2bc:c.instructions+=2;goto B5da2bc;
case 0x5da2be:c.instructions+=1;goto B5da2be;
case 0x5da2c0:goto L5da2c0;
case 0x5da2c4:c.instructions+=3;goto B5da2c4;
case 0x5da2c6:c.instructions+=2;goto B5da2c6;
case 0x5da2c9:c.instructions+=1;goto B5da2c9;
case 0x5da2cb:goto L5da2cb;
case 0x5da2cf:c.instructions+=2;goto B5da2cf;
case 0x5da2d1:c.instructions+=1;goto B5da2d1;
case 0x5da2d3:goto L5da2d3;
case 0x5da2d5:goto L5da2d5;
case 0x5da2d8:c.instructions+=2;goto B5da2d8;
case 0x5da2d9:c.instructions+=1;goto B5da2d9;
case 0x5da2db:goto L5da2db;
case 0x5da2dc:c.instructions+=1;goto B5da2dc;
case 0x5da2dd:goto L5da2dd;
case 0x5da2df:c.instructions+=3;goto B5da2df;
case 0x5da2e0:c.instructions+=2;goto B5da2e0;
case 0x5da2e1:c.instructions+=1;goto B5da2e1;
case 0x5da2e4:goto L5da2e4;
case 0x5da2e6:c.instructions+=2;goto B5da2e6;
case 0x5da2e7:c.instructions+=1;goto B5da2e7;
case 0x5da2f0:goto L5da2f0;
case 0x5da2f2:c.instructions+=17;goto B5da2f2;
case 0x5da2f4:c.instructions+=16;goto B5da2f4;
case 0x5da2f7:c.instructions+=15;goto B5da2f7;
case 0x5da2fa:c.instructions+=14;goto B5da2fa;
case 0x5da2fd:c.instructions+=13;goto B5da2fd;
case 0x5da300:c.instructions+=12;goto B5da300;
case 0x5da303:c.instructions+=11;goto B5da303;
case 0x5da306:c.instructions+=10;goto B5da306;
case 0x5da308:c.instructions+=9;goto B5da308;
case 0x5da30b:c.instructions+=8;goto B5da30b;
case 0x5da30e:c.instructions+=7;goto B5da30e;
case 0x5da311:c.instructions+=6;goto B5da311;
case 0x5da318:c.instructions+=5;goto B5da318;
case 0x5da31b:c.instructions+=4;goto B5da31b;
case 0x5da31e:c.instructions+=3;goto B5da31e;
case 0x5da321:c.instructions+=2;goto B5da321;
case 0x5da324:c.instructions+=1;goto B5da324;
case 0x5da330:goto L5da330;
case 0x5da334:c.instructions+=13;goto B5da334;
case 0x5da337:c.instructions+=12;goto B5da337;
case 0x5da33a:c.instructions+=11;goto B5da33a;
case 0x5da33c:c.instructions+=10;goto B5da33c;
case 0x5da33e:c.instructions+=9;goto B5da33e;
case 0x5da341:c.instructions+=8;goto B5da341;
case 0x5da343:c.instructions+=7;goto B5da343;
case 0x5da345:c.instructions+=6;goto B5da345;
case 0x5da347:c.instructions+=5;goto B5da347;
case 0x5da349:c.instructions+=4;goto B5da349;
case 0x5da34c:c.instructions+=3;goto B5da34c;
case 0x5da34e:c.instructions+=2;goto B5da34e;
case 0x5da351:c.instructions+=1;goto B5da351;
case 0x5da353:goto L5da353;
case 0x5da355:c.instructions+=4;goto B5da355;
case 0x5da356:c.instructions+=3;goto B5da356;
case 0x5da357:c.instructions+=2;goto B5da357;
case 0x5da35c:c.instructions+=1;goto B5da35c;
case 0x5da361:goto L5da361;
case 0x5da370:goto L5da370;
case 0x5da374:c.instructions+=10;goto B5da374;
case 0x5da377:c.instructions+=9;goto B5da377;
case 0x5da378:c.instructions+=8;goto B5da378;
case 0x5da37c:c.instructions+=7;goto B5da37c;
case 0x5da37d:c.instructions+=6;goto B5da37d;
case 0x5da37e:c.instructions+=5;goto B5da37e;
case 0x5da37f:c.instructions+=4;goto B5da37f;
case 0x5da381:c.instructions+=3;goto B5da381;
case 0x5da382:c.instructions+=2;goto B5da382;
case 0x5da387:c.instructions+=1;goto B5da387;
case 0x5da38c:goto L5da38c;
case 0x5da390:c.instructions+=12;goto B5da390;
case 0x5da392:c.instructions+=11;goto B5da392;
case 0x5da396:c.instructions+=10;goto B5da396;
case 0x5da39b:c.instructions+=9;goto B5da39b;
case 0x5da3a1:c.instructions+=8;goto B5da3a1;
case 0x5da3a3:c.instructions+=7;goto B5da3a3;
case 0x5da3a4:c.instructions+=6;goto B5da3a4;
case 0x5da3a5:c.instructions+=5;goto B5da3a5;
case 0x5da3a6:c.instructions+=4;goto B5da3a6;
case 0x5da3aa:c.instructions+=3;goto B5da3aa;
case 0x5da3ab:c.instructions+=2;goto B5da3ab;
case 0x5da3b0:c.instructions+=1;goto B5da3b0;
case 0x5da3b5:goto L5da3b5;
case 0x5da3b6:c.instructions+=5;goto B5da3b6;
case 0x5da3ba:c.instructions+=4;goto B5da3ba;
case 0x5da3bb:c.instructions+=3;goto B5da3bb;
case 0x5da3bc:c.instructions+=2;goto B5da3bc;
case 0x5da3c1:c.instructions+=1;goto B5da3c1;
case 0x5da3c6:goto L5da3c6;
case 0x5da3c7:c.instructions+=4;goto B5da3c7;
case 0x5da3c8:c.instructions+=3;goto B5da3c8;
case 0x5da3c9:c.instructions+=2;goto B5da3c9;
case 0x5da3cc:c.instructions+=1;goto B5da3cc;
case 0x5da3d0:goto L5da3d0;
case 0x5da3d4:c.instructions+=14;goto B5da3d4;
case 0x5da3db:c.instructions+=13;goto B5da3db;
case 0x5da3de:c.instructions+=12;goto B5da3de;
case 0x5da3e1:c.instructions+=11;goto B5da3e1;
case 0x5da3e3:c.instructions+=10;goto B5da3e3;
case 0x5da3e5:c.instructions+=9;goto B5da3e5;
case 0x5da3e8:c.instructions+=8;goto B5da3e8;
case 0x5da3ea:c.instructions+=7;goto B5da3ea;
case 0x5da3ec:c.instructions+=6;goto B5da3ec;
case 0x5da3ee:c.instructions+=5;goto B5da3ee;
case 0x5da3f0:c.instructions+=4;goto B5da3f0;
case 0x5da3f3:c.instructions+=3;goto B5da3f3;
case 0x5da3f5:c.instructions+=2;goto B5da3f5;
case 0x5da3f8:c.instructions+=1;goto B5da3f8;
case 0x5da3fa:goto L5da3fa;
case 0x5da3fc:c.instructions+=4;goto B5da3fc;
case 0x5da3fd:c.instructions+=3;goto B5da3fd;
case 0x5da3fe:c.instructions+=2;goto B5da3fe;
case 0x5da403:c.instructions+=1;goto B5da403;
case 0x5da408:goto L5da408;
case 0x5da410:goto L5da410;
case 0x5da414:c.instructions+=11;goto B5da414;
case 0x5da415:c.instructions+=10;goto B5da415;
case 0x5da416:c.instructions+=9;goto B5da416;
case 0x5da41a:c.instructions+=8;goto B5da41a;
case 0x5da41c:c.instructions+=7;goto B5da41c;
case 0x5da420:c.instructions+=6;goto B5da420;
case 0x5da421:c.instructions+=5;goto B5da421;
case 0x5da422:c.instructions+=4;goto B5da422;
case 0x5da423:c.instructions+=3;goto B5da423;
case 0x5da428:c.instructions+=2;goto B5da428;
case 0x5da42f:c.instructions+=1;goto B5da42f;
case 0x5da434:goto L5da434;
case 0x5da436:c.instructions+=1;goto B5da436;
case 0x5da438:goto L5da438;
case 0x5da439:c.instructions+=4;goto B5da439;
case 0x5da43a:c.instructions+=3;goto B5da43a;
case 0x5da43b:c.instructions+=2;goto B5da43b;
case 0x5da440:c.instructions+=1;goto B5da440;
case 0x5da445:goto L5da445;
case 0x5da446:c.instructions+=2;goto B5da446;
case 0x5da447:c.instructions+=1;goto B5da447;
case 0x5da450:goto L5da450;
case 0x5da454:c.instructions+=9;goto B5da454;
case 0x5da455:c.instructions+=8;goto B5da455;
case 0x5da456:c.instructions+=7;goto B5da456;
case 0x5da45a:c.instructions+=6;goto B5da45a;
case 0x5da45c:c.instructions+=5;goto B5da45c;
case 0x5da45d:c.instructions+=4;goto B5da45d;
case 0x5da45e:c.instructions+=3;goto B5da45e;
case 0x5da463:c.instructions+=2;goto B5da463;
case 0x5da46a:c.instructions+=1;goto B5da46a;
case 0x5da46f:goto L5da46f;
case 0x5da470:c.instructions+=4;goto B5da470;
case 0x5da471:c.instructions+=3;goto B5da471;
case 0x5da472:c.instructions+=2;goto B5da472;
case 0x5da477:c.instructions+=1;goto B5da477;
case 0x5da47c:goto L5da47c;
case 0x5da47d:c.instructions+=2;goto B5da47d;
case 0x5da47e:c.instructions+=1;goto B5da47e;
case 0x5da490:goto L5da490;
case 0x5da494:c.instructions+=3;goto B5da494;
case 0x5da495:c.instructions+=2;goto B5da495;
case 0x5da49a:c.instructions+=1;goto B5da49a;
case 0x5da49f:goto L5da49f;
case 0x5da4a0:goto L5da4a0;
case 0x5da4a3:c.instructions+=13;goto B5da4a3;
case 0x5da4a4:c.instructions+=12;goto B5da4a4;
case 0x5da4a5:c.instructions+=11;goto B5da4a5;
case 0x5da4a9:c.instructions+=10;goto B5da4a9;
case 0x5da4aa:c.instructions+=9;goto B5da4aa;
case 0x5da4ae:c.instructions+=8;goto B5da4ae;
case 0x5da4b1:c.instructions+=7;goto B5da4b1;
case 0x5da4b3:c.instructions+=6;goto B5da4b3;
case 0x5da4b6:c.instructions+=5;goto B5da4b6;
case 0x5da4b8:c.instructions+=4;goto B5da4b8;
case 0x5da4ba:c.instructions+=3;goto B5da4ba;
case 0x5da4bb:c.instructions+=2;goto B5da4bb;
case 0x5da4bf:c.instructions+=1;goto B5da4bf;
case 0x5da4c1:goto L5da4c1;
case 0x5da4c4:c.instructions+=3;goto B5da4c4;
case 0x5da4c7:c.instructions+=2;goto B5da4c7;
case 0x5da4c9:c.instructions+=1;goto B5da4c9;
case 0x5da4cb:goto L5da4cb;
case 0x5da4d0:goto L5da4d0;
case 0x5da4d3:c.instructions+=2;goto B5da4d3;
case 0x5da4d5:c.instructions+=1;goto B5da4d5;
case 0x5da4d7:goto L5da4d7;
case 0x5da4da:c.instructions+=2;goto B5da4da;
case 0x5da4dc:c.instructions+=1;goto B5da4dc;
case 0x5da4de:goto L5da4de;
case 0x5da4e1:c.instructions+=2;goto B5da4e1;
case 0x5da4e3:c.instructions+=1;goto B5da4e3;
case 0x5da4e5:goto L5da4e5;
case 0x5da4e7:c.instructions+=2;goto B5da4e7;
case 0x5da4e9:c.instructions+=1;goto B5da4e9;
case 0x5da4eb:goto L5da4eb;
case 0x5da4ed:c.instructions+=2;goto B5da4ed;
case 0x5da4ef:c.instructions+=1;goto B5da4ef;
case 0x5da4f1:goto L5da4f1;
case 0x5da4f2:c.instructions+=6;goto B5da4f2;
case 0x5da4f3:c.instructions+=5;goto B5da4f3;
case 0x5da4f4:c.instructions+=4;goto B5da4f4;
case 0x5da4f6:c.instructions+=3;goto B5da4f6;
case 0x5da4f7:c.instructions+=2;goto B5da4f7;
case 0x5da4fa:c.instructions+=1;goto B5da4fa;
case 0x5da4fd:goto L5da4fd;
case 0x5da501:c.instructions+=2;goto B5da501;
case 0x5da503:c.instructions+=1;goto B5da503;
case 0x5da505:goto L5da505;
case 0x5da508:c.instructions+=3;goto B5da508;
case 0x5da50b:c.instructions+=2;goto B5da50b;
case 0x5da50d:c.instructions+=1;goto B5da50d;
case 0x5da50f:goto L5da50f;
case 0x5da510:goto L5da510;
case 0x5da513:c.instructions+=2;goto B5da513;
case 0x5da515:c.instructions+=1;goto B5da515;
case 0x5da517:goto L5da517;
case 0x5da51a:c.instructions+=2;goto B5da51a;
case 0x5da51c:c.instructions+=1;goto B5da51c;
case 0x5da51e:goto L5da51e;
case 0x5da520:c.instructions+=1;goto B5da520;
case 0x5da522:goto L5da522;
case 0x5da525:c.instructions+=5;goto B5da525;
case 0x5da527:c.instructions+=4;goto B5da527;
case 0x5da529:c.instructions+=3;goto B5da529;
case 0x5da52b:c.instructions+=2;goto B5da52b;
case 0x5da52f:c.instructions+=1;goto B5da52f;
case 0x5da531:goto L5da531;
case 0x5da533:goto L5da533;
case 0x5da535:c.instructions+=2;goto B5da535;
case 0x5da537:c.instructions+=1;goto B5da537;
case 0x5da539:goto L5da539;
case 0x5da53b:c.instructions+=1;goto B5da53b;
case 0x5da53d:goto L5da53d;
case 0x5da53e:c.instructions+=6;goto B5da53e;
case 0x5da53f:c.instructions+=5;goto B5da53f;
case 0x5da540:c.instructions+=4;goto B5da540;
case 0x5da542:c.instructions+=3;goto B5da542;
case 0x5da543:c.instructions+=2;goto B5da543;
case 0x5da546:c.instructions+=1;goto B5da546;
case 0x5da549:goto L5da549;
case 0x5da54d:c.instructions+=3;goto B5da54d;
case 0x5da54f:c.instructions+=2;goto B5da54f;
case 0x5da552:c.instructions+=1;goto B5da552;
case 0x5da554:goto L5da554;
case 0x5da556:c.instructions+=2;goto B5da556;
case 0x5da558:c.instructions+=1;goto B5da558;
case 0x5da55a:goto L5da55a;
case 0x5da560:goto L5da560;
case 0x5da563:c.instructions+=2;goto B5da563;
case 0x5da565:c.instructions+=1;goto B5da565;
case 0x5da567:goto L5da567;
case 0x5da56a:c.instructions+=1;goto B5da56a;
case 0x5da56c:goto L5da56c;
case 0x5da56e:c.instructions+=2;goto B5da56e;
case 0x5da570:c.instructions+=1;goto B5da570;
case 0x5da572:goto L5da572;
case 0x5da573:c.instructions+=6;goto B5da573;
case 0x5da574:c.instructions+=5;goto B5da574;
case 0x5da575:c.instructions+=4;goto B5da575;
case 0x5da577:c.instructions+=3;goto B5da577;
case 0x5da578:c.instructions+=2;goto B5da578;
case 0x5da57b:c.instructions+=1;goto B5da57b;
case 0x5da57e:goto L5da57e;
case 0x5da581:c.instructions+=2;goto B5da581;
case 0x5da583:c.instructions+=1;goto B5da583;
case 0x5da585:goto L5da585;
case 0x5da588:c.instructions+=2;goto B5da588;
case 0x5da58a:c.instructions+=1;goto B5da58a;
case 0x5da58c:goto L5da58c;
case 0x5da58f:c.instructions+=1;goto B5da58f;
case 0x5da591:goto L5da591;
case 0x5da594:c.instructions+=2;goto B5da594;
case 0x5da596:c.instructions+=1;goto B5da596;
case 0x5da598:goto L5da598;
case 0x5da599:c.instructions+=6;goto B5da599;
case 0x5da59a:c.instructions+=5;goto B5da59a;
case 0x5da59b:c.instructions+=4;goto B5da59b;
case 0x5da59d:c.instructions+=3;goto B5da59d;
case 0x5da59e:c.instructions+=2;goto B5da59e;
case 0x5da5a1:c.instructions+=1;goto B5da5a1;
case 0x5da5a4:goto L5da5a4;
case 0x5da5a6:c.instructions+=1;goto B5da5a6;
case 0x5da5a8:goto L5da5a8;
case 0x5da5ac:c.instructions+=2;goto B5da5ac;
case 0x5da5ae:c.instructions+=1;goto B5da5ae;
case 0x5da5b0:goto L5da5b0;
case 0x5da5b3:c.instructions+=1;goto B5da5b3;
case 0x5da5b5:goto L5da5b5;
case 0x5da5b8:c.instructions+=2;goto B5da5b8;
case 0x5da5bb:c.instructions+=1;goto B5da5bb;
case 0x5da5bd:goto L5da5bd;
case 0x5da5c1:goto L5da5c1;
case 0x5da5c4:c.instructions+=21;goto B5da5c4;
case 0x5da5c6:c.instructions+=20;goto B5da5c6;
case 0x5da5c9:c.instructions+=19;goto B5da5c9;
case 0x5da5cc:c.instructions+=18;goto B5da5cc;
case 0x5da5ce:c.instructions+=17;goto B5da5ce;
case 0x5da5d1:c.instructions+=16;goto B5da5d1;
case 0x5da5d4:c.instructions+=15;goto B5da5d4;
case 0x5da5d7:c.instructions+=14;goto B5da5d7;
case 0x5da5db:c.instructions+=13;goto B5da5db;
case 0x5da5dd:c.instructions+=12;goto B5da5dd;
case 0x5da5df:c.instructions+=11;goto B5da5df;
case 0x5da5e2:c.instructions+=10;goto B5da5e2;
case 0x5da5e4:c.instructions+=9;goto B5da5e4;
case 0x5da5e7:c.instructions+=8;goto B5da5e7;
case 0x5da5ea:c.instructions+=7;goto B5da5ea;
case 0x5da5ec:c.instructions+=6;goto B5da5ec;
case 0x5da5ee:c.instructions+=5;goto B5da5ee;
case 0x5da5f0:c.instructions+=4;goto B5da5f0;
case 0x5da5f3:c.instructions+=3;goto B5da5f3;
case 0x5da5f5:c.instructions+=2;goto B5da5f5;
case 0x5da5f8:c.instructions+=1;goto B5da5f8;
case 0x5da5fa:goto L5da5fa;
case 0x5da5fc:c.instructions+=8;goto B5da5fc;
case 0x5da5ff:c.instructions+=7;goto B5da5ff;
case 0x5da602:c.instructions+=6;goto B5da602;
case 0x5da605:c.instructions+=5;goto B5da605;
case 0x5da608:c.instructions+=4;goto B5da608;
case 0x5da60a:c.instructions+=3;goto B5da60a;
case 0x5da60d:c.instructions+=2;goto B5da60d;
case 0x5da610:c.instructions+=1;goto B5da610;
case 0x5da612:goto L5da612;
case 0x5da614:c.instructions+=2;goto B5da614;
case 0x5da618:c.instructions+=1;goto B5da618;
case 0x5da61a:goto L5da61a;
case 0x5da61c:c.instructions+=13;goto B5da61c;
case 0x5da61e:c.instructions+=12;goto B5da61e;
case 0x5da621:c.instructions+=11;goto B5da621;
case 0x5da624:c.instructions+=10;goto B5da624;
case 0x5da627:c.instructions+=9;goto B5da627;
case 0x5da62a:c.instructions+=8;goto B5da62a;
case 0x5da62d:c.instructions+=7;goto B5da62d;
case 0x5da630:c.instructions+=6;goto B5da630;
case 0x5da634:c.instructions+=5;goto B5da634;
case 0x5da636:c.instructions+=4;goto B5da636;
case 0x5da638:c.instructions+=3;goto B5da638;
case 0x5da63b:c.instructions+=2;goto B5da63b;
case 0x5da63e:c.instructions+=1;goto B5da63e;
case 0x5da640:goto L5da640;
case 0x5da644:c.instructions+=9;goto B5da644;
case 0x5da647:c.instructions+=8;goto B5da647;
case 0x5da64b:c.instructions+=7;goto B5da64b;
case 0x5da64d:c.instructions+=6;goto B5da64d;
case 0x5da651:c.instructions+=5;goto B5da651;
case 0x5da655:c.instructions+=4;goto B5da655;
case 0x5da659:c.instructions+=3;goto B5da659;
case 0x5da661:c.instructions+=2;goto B5da661;
case 0x5da666:c.instructions+=1;goto B5da666;
case 0x5da66a:goto L5da66a;
case 0x5da66c:goto L5da66c;
case 0x5da671:c.instructions+=1;goto B5da671;
case 0x5da675:goto L5da675;
case 0x5da677:goto L5da677;
case 0x5da67b:c.instructions+=2;goto B5da67b;
case 0x5da67d:c.instructions+=1;goto B5da67d;
case 0x5da67f:goto L5da67f;
case 0x5da681:c.instructions+=4;goto B5da681;
case 0x5da682:c.instructions+=3;goto B5da682;
case 0x5da686:c.instructions+=2;goto B5da686;
case 0x5da687:c.instructions+=1;goto B5da687;
case 0x5da68c:goto L5da68c;
case 0x5da68f:goto L5da68f;
case 0x5da693:c.instructions+=2;goto B5da693;
case 0x5da694:c.instructions+=1;goto B5da694;
case 0x5da699:goto L5da699;
case 0x5da69e:c.instructions+=9;goto B5da69e;
case 0x5da6a0:c.instructions+=8;goto B5da6a0;
case 0x5da6a5:c.instructions+=7;goto B5da6a5;
case 0x5da6a7:c.instructions+=6;goto B5da6a7;
case 0x5da6a8:c.instructions+=5;goto B5da6a8;
case 0x5da6ac:c.instructions+=4;goto B5da6ac;
case 0x5da6ad:c.instructions+=3;goto B5da6ad;
case 0x5da6af:c.instructions+=2;goto B5da6af;
case 0x5da6b4:c.instructions+=1;goto B5da6b4;
case 0x5da6b9:goto L5da6b9;
case 0x5da6bc:c.instructions+=10;goto B5da6bc;
case 0x5da6bf:c.instructions+=9;goto B5da6bf;
case 0x5da6c0:c.instructions+=8;goto B5da6c0;
case 0x5da6c1:c.instructions+=7;goto B5da6c1;
case 0x5da6c2:c.instructions+=6;goto B5da6c2;
case 0x5da6c5:c.instructions+=5;goto B5da6c5;
case 0x5da6c6:c.instructions+=4;goto B5da6c6;
case 0x5da6c8:c.instructions+=3;goto B5da6c8;
case 0x5da6c9:c.instructions+=2;goto B5da6c9;
case 0x5da6cc:c.instructions+=1;goto B5da6cc;
case 0x5da6d0:goto L5da6d0;
case 0x5da6d3:c.instructions+=5;goto B5da6d3;
case 0x5da6d6:c.instructions+=4;goto B5da6d6;
case 0x5da6d7:c.instructions+=3;goto B5da6d7;
case 0x5da6da:c.instructions+=2;goto B5da6da;
case 0x5da6dc:c.instructions+=1;goto B5da6dc;
case 0x5da6e2:goto L5da6e2;
case 0x5da6e3:goto L5da6e3;
case 0x5da6e6:c.instructions+=2;goto B5da6e6;
case 0x5da6ea:c.instructions+=1;goto B5da6ea;
case 0x5da6ec:goto L5da6ec;
case 0x5da6ee:c.instructions+=2;goto B5da6ee;
case 0x5da6f0:c.instructions+=1;goto B5da6f0;
case 0x5da6f2:goto L5da6f2;
case 0x5da6f3:c.instructions+=3;goto B5da6f3;
case 0x5da6f4:c.instructions+=2;goto B5da6f4;
case 0x5da6f7:c.instructions+=1;goto B5da6f7;
case 0x5da6fa:goto L5da6fa;
case 0x5da6fd:c.instructions+=6;goto B5da6fd;
case 0x5da6ff:c.instructions+=5;goto B5da6ff;
case 0x5da700:c.instructions+=4;goto B5da700;
case 0x5da703:c.instructions+=3;goto B5da703;
case 0x5da704:c.instructions+=2;goto B5da704;
case 0x5da708:c.instructions+=1;goto B5da708;
case 0x5da70a:goto L5da70a;
case 0x5da70e:c.instructions+=1;goto B5da70e;
case 0x5da710:goto L5da710;
case 0x5da713:c.instructions+=14;goto B5da713;
case 0x5da716:c.instructions+=13;goto B5da716;
case 0x5da719:c.instructions+=12;goto B5da719;
case 0x5da71b:c.instructions+=11;goto B5da71b;
case 0x5da71e:c.instructions+=10;goto B5da71e;
case 0x5da720:c.instructions+=9;goto B5da720;
case 0x5da723:c.instructions+=8;goto B5da723;
case 0x5da725:c.instructions+=7;goto B5da725;
case 0x5da728:c.instructions+=6;goto B5da728;
case 0x5da72b:c.instructions+=5;goto B5da72b;
case 0x5da72e:c.instructions+=4;goto B5da72e;
case 0x5da730:c.instructions+=3;goto B5da730;
case 0x5da733:c.instructions+=2;goto B5da733;
case 0x5da736:c.instructions+=1;goto B5da736;
case 0x5da738:goto L5da738;
case 0x5da73a:c.instructions+=2;goto B5da73a;
case 0x5da73c:c.instructions+=1;goto B5da73c;
case 0x5da73e:goto L5da73e;
case 0x5da741:c.instructions+=2;goto B5da741;
case 0x5da743:c.instructions+=1;goto B5da743;
case 0x5da745:goto L5da745;
case 0x5da748:c.instructions+=13;goto B5da748;
case 0x5da74b:c.instructions+=12;goto B5da74b;
case 0x5da74d:c.instructions+=11;goto B5da74d;
case 0x5da750:c.instructions+=10;goto B5da750;
case 0x5da752:c.instructions+=9;goto B5da752;
case 0x5da755:c.instructions+=8;goto B5da755;
case 0x5da757:c.instructions+=7;goto B5da757;
case 0x5da75a:c.instructions+=6;goto B5da75a;
case 0x5da75d:c.instructions+=5;goto B5da75d;
case 0x5da760:c.instructions+=4;goto B5da760;
case 0x5da762:c.instructions+=3;goto B5da762;
case 0x5da765:c.instructions+=2;goto B5da765;
case 0x5da768:c.instructions+=1;goto B5da768;
case 0x5da76a:goto L5da76a;
case 0x5da76c:c.instructions+=9;goto B5da76c;
case 0x5da770:c.instructions+=8;goto B5da770;
case 0x5da771:c.instructions+=7;goto B5da771;
case 0x5da775:c.instructions+=6;goto B5da775;
case 0x5da779:c.instructions+=5;goto B5da779;
case 0x5da77b:c.instructions+=4;goto B5da77b;
case 0x5da780:c.instructions+=3;goto B5da780;
case 0x5da784:c.instructions+=2;goto B5da784;
case 0x5da788:c.instructions+=1;goto B5da788;
case 0x5da78d:goto L5da78d;
case 0x5da790:c.instructions+=3;goto B5da790;
case 0x5da791:c.instructions+=2;goto B5da791;
case 0x5da792:c.instructions+=1;goto B5da792;
case 0x5da793:goto L5da793;
case 0x5da794:c.instructions+=2;goto B5da794;
case 0x5da797:c.instructions+=1;goto B5da797;
case 0x5da7a0:goto L5da7a0;
case 0x5da7a4:c.instructions+=3;goto B5da7a4;
case 0x5da7a6:c.instructions+=2;goto B5da7a6;
case 0x5da7ab:c.instructions+=1;goto B5da7ab;
case 0x5da7ad:goto L5da7ad;
case 0x5da7b0:c.instructions+=7;goto B5da7b0;
case 0x5da7b2:c.instructions+=6;goto B5da7b2;
case 0x5da7b7:c.instructions+=5;goto B5da7b7;
case 0x5da7ba:c.instructions+=4;goto B5da7ba;
case 0x5da7bd:c.instructions+=3;goto B5da7bd;
case 0x5da7c0:c.instructions+=2;goto B5da7c0;
case 0x5da7c5:c.instructions+=1;goto B5da7c5;
case 0x5da7c8:goto L5da7c8;
case 0x5da7cd:c.instructions+=1;goto B5da7cd;
case 0x5da7cf:goto L5da7cf;
case 0x5da7d2:c.instructions+=9;goto B5da7d2;
case 0x5da7d3:c.instructions+=8;goto B5da7d3;
case 0x5da7d4:c.instructions+=7;goto B5da7d4;
case 0x5da7d7:c.instructions+=6;goto B5da7d7;
case 0x5da7da:c.instructions+=5;goto B5da7da;
case 0x5da7de:c.instructions+=4;goto B5da7de;
case 0x5da7e0:c.instructions+=3;goto B5da7e0;
case 0x5da7e2:c.instructions+=2;goto B5da7e2;
case 0x5da7e5:c.instructions+=1;goto B5da7e5;
case 0x5da7e7:goto L5da7e7;
case 0x5da7e8:c.instructions+=2;goto B5da7e8;
case 0x5da7e9:c.instructions+=1;goto B5da7e9;
case 0x5da7f0:goto L5da7f0;
case 0x5da7f3:c.instructions+=3;goto B5da7f3;
case 0x5da7f5:c.instructions+=2;goto B5da7f5;
case 0x5da7f7:c.instructions+=1;goto B5da7f7;
case 0x5da7f9:goto L5da7f9;
case 0x5da7fc:c.instructions+=1;goto B5da7fc;
case 0x5da800:goto L5da800;
case 0x5da803:c.instructions+=3;goto B5da803;
case 0x5da805:c.instructions+=2;goto B5da805;
case 0x5da807:c.instructions+=1;goto B5da807;
case 0x5da809:goto L5da809;
case 0x5da80c:c.instructions+=2;goto B5da80c;
case 0x5da80e:c.instructions+=1;goto B5da80e;
case 0x5da810:goto L5da810;
case 0x5da814:c.instructions+=1;goto B5da814;
case 0x5da816:goto L5da816;
case 0x5da817:c.instructions+=3;goto B5da817;
case 0x5da81a:c.instructions+=2;goto B5da81a;
case 0x5da81d:c.instructions+=1;goto B5da81d;
case 0x5da81f:goto L5da81f;
case 0x5da821:goto L5da821;
case 0x5da824:c.instructions+=5;goto B5da824;
case 0x5da828:c.instructions+=4;goto B5da828;
case 0x5da829:c.instructions+=3;goto B5da829;
case 0x5da82c:c.instructions+=2;goto B5da82c;
case 0x5da82e:c.instructions+=1;goto B5da82e;
case 0x5da830:goto L5da830;
case 0x5da834:c.instructions+=3;goto B5da834;
case 0x5da838:c.instructions+=2;goto B5da838;
case 0x5da83b:c.instructions+=1;goto B5da83b;
case 0x5da83d:goto L5da83d;
case 0x5da83e:c.instructions+=1;goto B5da83e;
case 0x5da83f:goto L5da83f;
case 0x5da840:c.instructions+=3;goto B5da840;
case 0x5da845:c.instructions+=2;goto B5da845;
case 0x5da846:c.instructions+=1;goto B5da846;
case 0x5da849:goto L5da849;
case 0x5da84e:c.instructions+=1;goto B5da84e;
case 0x5da850:goto L5da850;
case 0x5da853:c.instructions+=3;goto B5da853;
case 0x5da856:c.instructions+=2;goto B5da856;
case 0x5da85b:c.instructions+=1;goto B5da85b;
case 0x5da85e:goto L5da85e;
case 0x5da863:c.instructions+=1;goto B5da863;
case 0x5da865:goto L5da865;
case 0x5da868:c.instructions+=6;goto B5da868;
case 0x5da86b:c.instructions+=5;goto B5da86b;
case 0x5da86e:c.instructions+=4;goto B5da86e;
case 0x5da871:c.instructions+=3;goto B5da871;
case 0x5da874:c.instructions+=2;goto B5da874;
case 0x5da879:c.instructions+=1;goto B5da879;
case 0x5da87c:goto L5da87c;
case 0x5da87e:c.instructions+=1;goto B5da87e;
case 0x5da890:goto L5da890;
case 0x5da892:c.instructions+=31;goto B5da892;
case 0x5da893:c.instructions+=30;goto B5da893;
case 0x5da895:c.instructions+=29;goto B5da895;
case 0x5da89c:c.instructions+=28;goto B5da89c;
case 0x5da8a2:c.instructions+=27;goto B5da8a2;
case 0x5da8a8:c.instructions+=26;goto B5da8a8;
case 0x5da8ae:c.instructions+=25;goto B5da8ae;
case 0x5da8b4:c.instructions+=24;goto B5da8b4;
case 0x5da8ba:c.instructions+=23;goto B5da8ba;
case 0x5da8c0:c.instructions+=22;goto B5da8c0;
case 0x5da8c6:c.instructions+=21;goto B5da8c6;
case 0x5da8cd:c.instructions+=20;goto B5da8cd;
case 0x5da8d3:c.instructions+=19;goto B5da8d3;
case 0x5da8d9:c.instructions+=18;goto B5da8d9;
case 0x5da8df:c.instructions+=17;goto B5da8df;
case 0x5da8e5:c.instructions+=16;goto B5da8e5;
case 0x5da8eb:c.instructions+=15;goto B5da8eb;
case 0x5da8f1:c.instructions+=14;goto B5da8f1;
case 0x5da8f7:c.instructions+=13;goto B5da8f7;
case 0x5da8f8:c.instructions+=12;goto B5da8f8;
case 0x5da8fa:c.instructions+=11;goto B5da8fa;
case 0x5da8ff:c.instructions+=10;goto B5da8ff;
case 0x5da905:c.instructions+=9;goto B5da905;
case 0x5da90b:c.instructions+=8;goto B5da90b;
case 0x5da911:c.instructions+=7;goto B5da911;
case 0x5da917:c.instructions+=6;goto B5da917;
case 0x5da91d:c.instructions+=5;goto B5da91d;
case 0x5da923:c.instructions+=4;goto B5da923;
case 0x5da929:c.instructions+=3;goto B5da929;
case 0x5da92f:c.instructions+=2;goto B5da92f;
case 0x5da935:c.instructions+=1;goto B5da935;
case 0x5da93b:goto L5da93b;
case 0x5da93d:goto L5da93d;
case 0x5da943:c.instructions+=1;goto B5da943;
case 0x5da945:goto L5da945;
case 0x5da94b:c.instructions+=2;goto B5da94b;
case 0x5da94c:c.instructions+=1;goto B5da94c;
case 0x5da950:goto L5da950;
case 0x5da952:c.instructions+=6;goto B5da952;
case 0x5da955:c.instructions+=5;goto B5da955;
case 0x5da95b:c.instructions+=4;goto B5da95b;
case 0x5da95c:c.instructions+=3;goto B5da95c;
case 0x5da95f:c.instructions+=2;goto B5da95f;
case 0x5da961:c.instructions+=1;goto B5da961;
case 0x5da963:goto L5da963;
case 0x5da964:goto L5da964;
case 0x5da965:c.instructions+=3;goto B5da965;
case 0x5da96b:c.instructions+=2;goto B5da96b;
case 0x5da96c:c.instructions+=1;goto B5da96c;
case 0x5da970:goto L5da970;
case 0x5da974:c.instructions+=6;goto B5da974;
case 0x5da975:c.instructions+=5;goto B5da975;
case 0x5da977:c.instructions+=4;goto B5da977;
case 0x5da978:c.instructions+=3;goto B5da978;
case 0x5da97b:c.instructions+=2;goto B5da97b;
case 0x5da97c:c.instructions+=1;goto B5da97c;
case 0x5da981:goto L5da981;
case 0x5da984:c.instructions+=2;goto B5da984;
case 0x5da986:c.instructions+=1;goto B5da986;
case 0x5da98b:goto L5da98b;
case 0x5da98d:c.instructions+=29;goto B5da98d;
case 0x5da993:c.instructions+=28;goto B5da993;
case 0x5da999:c.instructions+=27;goto B5da999;
case 0x5da99c:c.instructions+=26;goto B5da99c;
case 0x5da9a2:c.instructions+=25;goto B5da9a2;
case 0x5da9a8:c.instructions+=24;goto B5da9a8;
case 0x5da9af:c.instructions+=23;goto B5da9af;
case 0x5da9b5:c.instructions+=22;goto B5da9b5;
case 0x5da9bb:c.instructions+=21;goto B5da9bb;
case 0x5da9c1:c.instructions+=20;goto B5da9c1;
case 0x5da9c7:c.instructions+=19;goto B5da9c7;
case 0x5da9cd:c.instructions+=18;goto B5da9cd;
case 0x5da9d3:c.instructions+=17;goto B5da9d3;
case 0x5da9d9:c.instructions+=16;goto B5da9d9;
case 0x5da9df:c.instructions+=15;goto B5da9df;
case 0x5da9e5:c.instructions+=14;goto B5da9e5;
case 0x5da9eb:c.instructions+=13;goto B5da9eb;
case 0x5da9f2:c.instructions+=12;goto B5da9f2;
case 0x5da9f8:c.instructions+=11;goto B5da9f8;
case 0x5da9fe:c.instructions+=10;goto B5da9fe;
case 0x5daa04:c.instructions+=9;goto B5daa04;
case 0x5daa0a:c.instructions+=8;goto B5daa0a;
case 0x5daa10:c.instructions+=7;goto B5daa10;
case 0x5daa16:c.instructions+=6;goto B5daa16;
case 0x5daa1c:c.instructions+=5;goto B5daa1c;
case 0x5daa22:c.instructions+=4;goto B5daa22;
case 0x5daa28:c.instructions+=3;goto B5daa28;
case 0x5daa2e:c.instructions+=2;goto B5daa2e;
case 0x5daa2f:c.instructions+=1;goto B5daa2f;
case 0x5daa40:goto L5daa40;
case 0x5daa43:c.instructions+=7;goto B5daa43;
case 0x5daa46:c.instructions+=6;goto B5daa46;
case 0x5daa4c:c.instructions+=5;goto B5daa4c;
case 0x5daa4d:c.instructions+=4;goto B5daa4d;
case 0x5daa4e:c.instructions+=3;goto B5daa4e;
case 0x5daa50:c.instructions+=2;goto B5daa50;
case 0x5daa56:c.instructions+=1;goto B5daa56;
case 0x5daa5b:goto L5daa5b;
case 0x5daa5f:c.instructions+=11;goto B5daa5f;
case 0x5daa62:c.instructions+=10;goto B5daa62;
case 0x5daa65:c.instructions+=9;goto B5daa65;
case 0x5daa66:c.instructions+=8;goto B5daa66;
case 0x5daa6b:c.instructions+=7;goto B5daa6b;
case 0x5daa6f:c.instructions+=6;goto B5daa6f;
case 0x5daa73:c.instructions+=5;goto B5daa73;
case 0x5daa74:c.instructions+=4;goto B5daa74;
case 0x5daa78:c.instructions+=3;goto B5daa78;
case 0x5daa79:c.instructions+=2;goto B5daa79;
case 0x5daa7d:c.instructions+=1;goto B5daa7d;
case 0x5daa82:goto L5daa82;
case 0x5daa86:c.instructions+=10;goto B5daa86;
case 0x5daa8a:c.instructions+=9;goto B5daa8a;
case 0x5daa8d:c.instructions+=8;goto B5daa8d;
case 0x5daa90:c.instructions+=7;goto B5daa90;
case 0x5daa97:c.instructions+=6;goto B5daa97;
case 0x5daa9e:c.instructions+=5;goto B5daa9e;
case 0x5daaa4:c.instructions+=4;goto B5daaa4;
case 0x5daaa5:c.instructions+=3;goto B5daaa5;
case 0x5daaa7:c.instructions+=2;goto B5daaa7;
case 0x5daaad:c.instructions+=1;goto B5daaad;
case 0x5daab2:goto L5daab2;
case 0x5daab5:c.instructions+=3;goto B5daab5;
case 0x5daab6:c.instructions+=2;goto B5daab6;
case 0x5daab9:c.instructions+=1;goto B5daab9;
case 0x5daac0:goto L5daac0;
case 0x5daac1:c.instructions+=5;goto B5daac1;
case 0x5daac5:c.instructions+=4;goto B5daac5;
case 0x5daac9:c.instructions+=3;goto B5daac9;
case 0x5daaca:c.instructions+=2;goto B5daaca;
case 0x5daacc:c.instructions+=1;goto B5daacc;
case 0x5daace:goto L5daace;
case 0x5daacf:c.instructions+=1;goto B5daacf;
case 0x5daad4:goto L5daad4;
case 0x5daad8:c.instructions+=1;goto B5daad8;
case 0x5daada:goto L5daada;
case 0x5daadd:c.instructions+=4;goto B5daadd;
case 0x5daade:c.instructions+=3;goto B5daade;
case 0x5daae0:c.instructions+=2;goto B5daae0;
case 0x5daae2:c.instructions+=1;goto B5daae2;
case 0x5daae4:goto L5daae4;
case 0x5daaea:c.instructions+=2;goto B5daaea;
case 0x5daaec:c.instructions+=1;goto B5daaec;
case 0x5daaee:goto L5daaee;
case 0x5daaf4:c.instructions+=1;goto B5daaf4;
case 0x5daaf6:goto L5daaf6;
case 0x5daafd:c.instructions+=1;goto B5daafd;
case 0x5dab02:goto L5dab02;
case 0x5dab07:c.instructions+=2;goto B5dab07;
case 0x5dab0d:c.instructions+=1;goto B5dab0d;
case 0x5dab13:goto L5dab13;
case 0x5dab16:c.instructions+=3;goto B5dab16;
case 0x5dab17:c.instructions+=2;goto B5dab17;
case 0x5dab1a:c.instructions+=1;goto B5dab1a;
case 0x5dab1f:goto L5dab1f;
case 0x5dab22:c.instructions+=7;goto B5dab22;
case 0x5dab25:c.instructions+=6;goto B5dab25;
case 0x5dab28:c.instructions+=5;goto B5dab28;
case 0x5dab2b:c.instructions+=4;goto B5dab2b;
case 0x5dab2e:c.instructions+=3;goto B5dab2e;
case 0x5dab2f:c.instructions+=2;goto B5dab2f;
case 0x5dab32:c.instructions+=1;goto B5dab32;
case 0x5dab33:goto L5dab33;
case 0x5dab34:c.instructions+=2;goto B5dab34;
case 0x5dab35:c.instructions+=1;goto B5dab35;
case 0x5dab40:goto L5dab40;
case 0x5dab41:c.instructions+=10;goto B5dab41;
case 0x5dab45:c.instructions+=9;goto B5dab45;
case 0x5dab48:c.instructions+=8;goto B5dab48;
case 0x5dab49:c.instructions+=7;goto B5dab49;
case 0x5dab4a:c.instructions+=6;goto B5dab4a;
case 0x5dab4d:c.instructions+=5;goto B5dab4d;
case 0x5dab50:c.instructions+=4;goto B5dab50;
case 0x5dab51:c.instructions+=3;goto B5dab51;
case 0x5dab53:c.instructions+=2;goto B5dab53;
case 0x5dab5a:c.instructions+=1;goto B5dab5a;
case 0x5dab5f:goto L5dab5f;
case 0x5dab62:c.instructions+=11;goto B5dab62;
case 0x5dab65:c.instructions+=10;goto B5dab65;
case 0x5dab68:c.instructions+=9;goto B5dab68;
case 0x5dab69:c.instructions+=8;goto B5dab69;
case 0x5dab6a:c.instructions+=7;goto B5dab6a;
case 0x5dab6d:c.instructions+=6;goto B5dab6d;
case 0x5dab70:c.instructions+=5;goto B5dab70;
case 0x5dab73:c.instructions+=4;goto B5dab73;
case 0x5dab75:c.instructions+=3;goto B5dab75;
case 0x5dab7b:c.instructions+=2;goto B5dab7b;
case 0x5dab7e:c.instructions+=1;goto B5dab7e;
case 0x5dab80:goto L5dab80;
case 0x5dab84:c.instructions+=6;goto B5dab84;
case 0x5dab85:c.instructions+=5;goto B5dab85;
case 0x5dab8a:c.instructions+=4;goto B5dab8a;
case 0x5dab8c:c.instructions+=3;goto B5dab8c;
case 0x5dab8e:c.instructions+=2;goto B5dab8e;
case 0x5dab90:c.instructions+=1;goto B5dab90;
case 0x5dab92:goto L5dab92;
case 0x5dab94:c.instructions+=1;goto B5dab94;
case 0x5dab96:goto L5dab96;
case 0x5dab9b:c.instructions+=2;goto B5dab9b;
case 0x5dab9d:c.instructions+=1;goto B5dab9d;
case 0x5dab9f:goto L5dab9f;
case 0x5daba1:c.instructions+=2;goto B5daba1;
case 0x5daba3:c.instructions+=1;goto B5daba3;
case 0x5daba5:goto L5daba5;
case 0x5daba6:c.instructions+=2;goto B5daba6;
case 0x5daba8:c.instructions+=1;goto B5daba8;
case 0x5dabad:goto L5dabad;
case 0x5dabb1:c.instructions+=1;goto B5dabb1;
case 0x5dabb3:goto L5dabb3;
case 0x5dabb9:c.instructions+=6;goto B5dabb9;
case 0x5dabbf:c.instructions+=5;goto B5dabbf;
case 0x5dabc0:c.instructions+=4;goto B5dabc0;
case 0x5dabc6:c.instructions+=3;goto B5dabc6;
case 0x5dabc9:c.instructions+=2;goto B5dabc9;
case 0x5dabcb:c.instructions+=1;goto B5dabcb;
case 0x5dabd1:goto L5dabd1;
case 0x5dabd5:c.instructions+=1;goto B5dabd5;
case 0x5dabd7:goto L5dabd7;
case 0x5dabdd:c.instructions+=6;goto B5dabdd;
case 0x5dabe3:c.instructions+=5;goto B5dabe3;
case 0x5dabe4:c.instructions+=4;goto B5dabe4;
case 0x5dabea:c.instructions+=3;goto B5dabea;
case 0x5dabed:c.instructions+=2;goto B5dabed;
case 0x5dabef:c.instructions+=1;goto B5dabef;
case 0x5dabf5:goto L5dabf5;
case 0x5dabf6:c.instructions+=2;goto B5dabf6;
case 0x5dabf7:c.instructions+=1;goto B5dabf7;
case 0x5dac00:goto L5dac00;
case 0x5dac03:c.instructions+=4;goto B5dac03;
case 0x5dac04:c.instructions+=3;goto B5dac04;
case 0x5dac06:c.instructions+=2;goto B5dac06;
case 0x5dac08:c.instructions+=1;goto B5dac08;
case 0x5dac0a:goto L5dac0a;
case 0x5dac0c:c.instructions+=2;goto B5dac0c;
case 0x5dac0d:c.instructions+=1;goto B5dac0d;
case 0x5dac10:goto L5dac10;
case 0x5dac14:c.instructions+=1;goto B5dac14;
case 0x5dac16:goto L5dac16;
case 0x5dac19:c.instructions+=2;goto B5dac19;
case 0x5dac1b:c.instructions+=1;goto B5dac1b;
case 0x5dac1d:goto L5dac1d;
case 0x5dac1f:c.instructions+=1;goto B5dac1f;
case 0x5dac21:goto L5dac21;
case 0x5dac24:c.instructions+=2;goto B5dac24;
case 0x5dac27:c.instructions+=1;goto B5dac27;
case 0x5dac29:goto L5dac29;
case 0x5dac2b:goto L5dac2b;
case 0x5dac2e:c.instructions+=2;goto B5dac2e;
case 0x5dac2f:c.instructions+=1;goto B5dac2f;
case 0x5dac31:goto L5dac31;
case 0x5dac33:c.instructions+=2;goto B5dac33;
case 0x5dac34:c.instructions+=1;goto B5dac34;
case 0x5dac36:goto L5dac36;
case 0x5dac38:c.instructions+=2;goto B5dac38;
case 0x5dac39:c.instructions+=1;goto B5dac39;
case 0x5dac3a:goto L5dac3a;
case 0x5dac3b:c.instructions+=1;goto B5dac3b;
case 0x5dac40:goto L5dac40;
case 0x5dac43:c.instructions+=2;goto B5dac43;
case 0x5dac44:c.instructions+=1;goto B5dac44;
case 0x5dac50:goto L5dac50;
case 0x5dac56:c.instructions+=5;goto B5dac56;
case 0x5dac57:c.instructions+=4;goto B5dac57;
case 0x5dac59:c.instructions+=3;goto B5dac59;
case 0x5dac5b:c.instructions+=2;goto B5dac5b;
case 0x5dac5d:c.instructions+=1;goto B5dac5d;
case 0x5dac5f:goto L5dac5f;
case 0x5dac60:c.instructions+=3;goto B5dac60;
case 0x5dac61:c.instructions+=2;goto B5dac61;
case 0x5dac67:c.instructions+=1;goto B5dac67;
case 0x5dac70:goto L5dac70;
case 0x5dac72:c.instructions+=9;goto B5dac72;
case 0x5dac78:c.instructions+=8;goto B5dac78;
case 0x5dac7f:c.instructions+=7;goto B5dac7f;
case 0x5dac85:c.instructions+=6;goto B5dac85;
case 0x5dac89:c.instructions+=5;goto B5dac89;
case 0x5dac8f:c.instructions+=4;goto B5dac8f;
case 0x5dac90:c.instructions+=3;goto B5dac90;
case 0x5dac93:c.instructions+=2;goto B5dac93;
case 0x5dac95:c.instructions+=1;goto B5dac95;
case 0x5dac97:goto L5dac97;
case 0x5dac98:c.instructions+=1;goto B5dac98;
case 0x5dac99:goto L5dac99;
case 0x5dac9f:c.instructions+=3;goto B5dac9f;
case 0x5daca5:c.instructions+=2;goto B5daca5;
case 0x5daca6:c.instructions+=1;goto B5daca6;
case 0x5dacb0:goto L5dacb0;
case 0x5dacb4:c.instructions+=6;goto B5dacb4;
case 0x5dacb5:c.instructions+=5;goto B5dacb5;
case 0x5dacb7:c.instructions+=4;goto B5dacb7;
case 0x5dacb9:c.instructions+=3;goto B5dacb9;
case 0x5dacba:c.instructions+=2;goto B5dacba;
case 0x5dacbc:c.instructions+=1;goto B5dacbc;
case 0x5dacc2:goto L5dacc2;
case 0x5dacc3:c.instructions+=2;goto B5dacc3;
case 0x5dacc4:c.instructions+=1;goto B5dacc4;
case 0x5dacd0:goto L5dacd0;
case 0x5dacd7:c.instructions+=2;goto B5dacd7;
case 0x5dacdb:c.instructions+=1;goto B5dacdb;
case 0x5dacdd:goto L5dacdd;
case 0x5dace1:c.instructions+=7;goto B5dace1;
case 0x5dace3:c.instructions+=6;goto B5dace3;
case 0x5dace4:c.instructions+=5;goto B5dace4;
case 0x5dace9:c.instructions+=4;goto B5dace9;
case 0x5daceb:c.instructions+=3;goto B5daceb;
case 0x5daced:c.instructions+=2;goto B5daced;
case 0x5dacef:c.instructions+=1;goto B5dacef;
case 0x5dacf1:goto L5dacf1;
case 0x5dacf3:c.instructions+=1;goto B5dacf3;
case 0x5dacf5:goto L5dacf5;
case 0x5dacf8:c.instructions+=1;goto B5dacf8;
case 0x5dacfa:goto L5dacfa;
case 0x5dacfd:goto L5dacfd;
case 0x5dad01:goto L5dad01;
case 0x5dad04:c.instructions+=3;goto B5dad04;
case 0x5dad06:c.instructions+=2;goto B5dad06;
case 0x5dad08:c.instructions+=1;goto B5dad08;
case 0x5dad0e:goto L5dad0e;
case 0x5dad12:c.instructions+=1;goto B5dad12;
case 0x5dad14:goto L5dad14;
case 0x5dad18:c.instructions+=1;goto B5dad18;
case 0x5dad1a:goto L5dad1a;
case 0x5dad1d:c.instructions+=4;goto B5dad1d;
case 0x5dad1e:c.instructions+=3;goto B5dad1e;
case 0x5dad21:c.instructions+=2;goto B5dad21;
case 0x5dad23:c.instructions+=1;goto B5dad23;
case 0x5dad25:goto L5dad25;
case 0x5dad27:goto L5dad27;
case 0x5dad2d:c.instructions+=4;goto B5dad2d;
case 0x5dad30:c.instructions+=3;goto B5dad30;
case 0x5dad33:c.instructions+=2;goto B5dad33;
case 0x5dad35:c.instructions+=1;goto B5dad35;
case 0x5dad37:goto L5dad37;
case 0x5dad3d:c.instructions+=2;goto B5dad3d;
case 0x5dad44:c.instructions+=1;goto B5dad44;
case 0x5dad4a:goto L5dad4a;
case 0x5dad4e:c.instructions+=7;goto B5dad4e;
case 0x5dad51:c.instructions+=6;goto B5dad51;
case 0x5dad53:c.instructions+=5;goto B5dad53;
case 0x5dad58:c.instructions+=4;goto B5dad58;
case 0x5dad5a:c.instructions+=3;goto B5dad5a;
case 0x5dad5d:c.instructions+=2;goto B5dad5d;
case 0x5dad5f:c.instructions+=1;goto B5dad5f;
case 0x5dad61:goto L5dad61;
case 0x5dad63:c.instructions+=7;goto B5dad63;
case 0x5dad65:c.instructions+=6;goto B5dad65;
case 0x5dad67:c.instructions+=5;goto B5dad67;
case 0x5dad6a:c.instructions+=4;goto B5dad6a;
case 0x5dad6c:c.instructions+=3;goto B5dad6c;
case 0x5dad6f:c.instructions+=2;goto B5dad6f;
case 0x5dad72:c.instructions+=1;goto B5dad72;
case 0x5dad74:goto L5dad74;
case 0x5dad77:c.instructions+=6;goto B5dad77;
case 0x5dad7e:c.instructions+=5;goto B5dad7e;
case 0x5dad85:c.instructions+=4;goto B5dad85;
case 0x5dad88:c.instructions+=3;goto B5dad88;
case 0x5dad8b:c.instructions+=2;goto B5dad8b;
case 0x5dad8d:c.instructions+=1;goto B5dad8d;
case 0x5dad90:goto L5dad90;
case 0x5dad94:c.instructions+=3;goto B5dad94;
case 0x5dad95:c.instructions+=2;goto B5dad95;
case 0x5dad97:c.instructions+=1;goto B5dad97;
case 0x5dad9d:goto L5dad9d;
case 0x5dad9e:c.instructions+=1;goto B5dad9e;
case 0x5dad9f:goto L5dad9f;
case 0x5dada0:c.instructions+=2;goto B5dada0;
case 0x5dada1:c.instructions+=1;goto B5dada1;
case 0x5dadb0:goto L5dadb0;
case 0x5dadb3:c.instructions+=12;goto B5dadb3;
case 0x5dadb4:c.instructions+=11;goto B5dadb4;
case 0x5dadb6:c.instructions+=10;goto B5dadb6;
case 0x5dadb7:c.instructions+=9;goto B5dadb7;
case 0x5dadb8:c.instructions+=8;goto B5dadb8;
case 0x5dadba:c.instructions+=7;goto B5dadba;
case 0x5dadbe:c.instructions+=6;goto B5dadbe;
case 0x5dadc2:c.instructions+=5;goto B5dadc2;
case 0x5dadc6:c.instructions+=4;goto B5dadc6;
case 0x5dadcd:c.instructions+=3;goto B5dadcd;
case 0x5dadce:c.instructions+=2;goto B5dadce;
case 0x5dadd2:c.instructions+=1;goto B5dadd2;
case 0x5dadd8:goto L5dadd8;
case 0x5daddb:c.instructions+=2;goto B5daddb;
case 0x5dadde:c.instructions+=1;goto B5dadde;
case 0x5dade4:goto L5dade4;
case 0x5dade8:c.instructions+=3;goto B5dade8;
case 0x5dadea:c.instructions+=2;goto B5dadea;
case 0x5dadec:c.instructions+=1;goto B5dadec;
case 0x5dadee:goto L5dadee;
case 0x5dadf1:goto L5dadf1;
case 0x5dadf3:c.instructions+=2;goto B5dadf3;
case 0x5dadf7:c.instructions+=1;goto B5dadf7;
case 0x5dadf9:goto L5dadf9;
case 0x5dadfc:c.instructions+=2;goto B5dadfc;
case 0x5dadfe:c.instructions+=1;goto B5dadfe;
case 0x5dae00:goto L5dae00;
case 0x5dae01:c.instructions+=3;goto B5dae01;
case 0x5dae04:c.instructions+=2;goto B5dae04;
case 0x5dae06:c.instructions+=1;goto B5dae06;
case 0x5dae08:goto L5dae08;
case 0x5dae0a:c.instructions+=1;goto B5dae0a;
case 0x5dae10:goto L5dae10;
case 0x5dae16:c.instructions+=5;goto B5dae16;
case 0x5dae19:c.instructions+=4;goto B5dae19;
case 0x5dae1c:c.instructions+=3;goto B5dae1c;
case 0x5dae1e:c.instructions+=2;goto B5dae1e;
case 0x5dae20:c.instructions+=1;goto B5dae20;
case 0x5dae22:goto L5dae22;
case 0x5dae25:c.instructions+=2;goto B5dae25;
case 0x5dae27:c.instructions+=1;goto B5dae27;
case 0x5dae29:goto L5dae29;
case 0x5dae2c:c.instructions+=2;goto B5dae2c;
case 0x5dae2e:c.instructions+=1;goto B5dae2e;
case 0x5dae30:goto L5dae30;
case 0x5dae32:goto L5dae32;
case 0x5dae34:c.instructions+=2;goto B5dae34;
case 0x5dae36:c.instructions+=1;goto B5dae36;
case 0x5dae38:goto L5dae38;
case 0x5dae3b:c.instructions+=2;goto B5dae3b;
case 0x5dae3d:c.instructions+=1;goto B5dae3d;
case 0x5dae43:goto L5dae43;
case 0x5dae45:c.instructions+=6;goto B5dae45;
case 0x5dae47:c.instructions+=5;goto B5dae47;
case 0x5dae49:c.instructions+=4;goto B5dae49;
case 0x5dae4c:c.instructions+=3;goto B5dae4c;
case 0x5dae4d:c.instructions+=2;goto B5dae4d;
case 0x5dae4e:c.instructions+=1;goto B5dae4e;
case 0x5dae53:goto L5dae53;
case 0x5dae59:c.instructions+=3;goto B5dae59;
case 0x5dae5a:c.instructions+=2;goto B5dae5a;
case 0x5dae5e:c.instructions+=1;goto B5dae5e;
case 0x5dae63:goto L5dae63;
case 0x5dae66:c.instructions+=3;goto B5dae66;
case 0x5dae68:c.instructions+=2;goto B5dae68;
case 0x5dae6a:c.instructions+=1;goto B5dae6a;
case 0x5dae6c:goto L5dae6c;
case 0x5dae6f:c.instructions+=1;goto B5dae6f;
case 0x5dae70:goto L5dae70;
case 0x5dae73:c.instructions+=17;goto B5dae73;
case 0x5dae77:c.instructions+=16;goto B5dae77;
case 0x5dae7a:c.instructions+=15;goto B5dae7a;
case 0x5dae7d:c.instructions+=14;goto B5dae7d;
case 0x5dae80:c.instructions+=13;goto B5dae80;
case 0x5dae82:c.instructions+=12;goto B5dae82;
case 0x5dae84:c.instructions+=11;goto B5dae84;
case 0x5dae85:c.instructions+=10;goto B5dae85;
case 0x5dae87:c.instructions+=9;goto B5dae87;
case 0x5dae8a:c.instructions+=8;goto B5dae8a;
case 0x5dae8e:c.instructions+=7;goto B5dae8e;
case 0x5dae90:c.instructions+=6;goto B5dae90;
case 0x5dae97:c.instructions+=5;goto B5dae97;
case 0x5dae9a:c.instructions+=4;goto B5dae9a;
case 0x5daea0:c.instructions+=3;goto B5daea0;
case 0x5daea1:c.instructions+=2;goto B5daea1;
case 0x5daea2:c.instructions+=1;goto B5daea2;
case 0x5daea7:goto L5daea7;
case 0x5daeab:c.instructions+=7;goto B5daeab;
case 0x5daeaf:c.instructions+=6;goto B5daeaf;
case 0x5daeb0:c.instructions+=5;goto B5daeb0;
case 0x5daeb1:c.instructions+=4;goto B5daeb1;
case 0x5daeb4:c.instructions+=3;goto B5daeb4;
case 0x5daeb6:c.instructions+=2;goto B5daeb6;
case 0x5daeba:c.instructions+=1;goto B5daeba;
case 0x5daebc:goto L5daebc;
case 0x5daec0:goto L5daec0;
case 0x5daec4:c.instructions+=3;goto B5daec4;
case 0x5daec7:c.instructions+=2;goto B5daec7;
case 0x5daec9:c.instructions+=1;goto B5daec9;
case 0x5daecd:goto L5daecd;
case 0x5daed1:c.instructions+=4;goto B5daed1;
case 0x5daed4:c.instructions+=3;goto B5daed4;
case 0x5daed8:c.instructions+=2;goto B5daed8;
case 0x5daeda:c.instructions+=1;goto B5daeda;
case 0x5daee0:goto L5daee0;
case 0x5daee6:c.instructions+=3;goto B5daee6;
case 0x5daee8:c.instructions+=2;goto B5daee8;
case 0x5daef0:c.instructions+=1;goto B5daef0;
case 0x5daef6:goto L5daef6;
case 0x5daefc:c.instructions+=1;goto B5daefc;
case 0x5daf00:goto L5daf00;
case 0x5daf03:c.instructions+=3;goto B5daf03;
case 0x5daf06:c.instructions+=2;goto B5daf06;
case 0x5daf08:c.instructions+=1;goto B5daf08;
case 0x5daf0e:goto L5daf0e;
case 0x5daf12:c.instructions+=11;goto B5daf12;
case 0x5daf15:c.instructions+=10;goto B5daf15;
case 0x5daf1a:c.instructions+=9;goto B5daf1a;
case 0x5daf1c:c.instructions+=8;goto B5daf1c;
case 0x5daf1f:c.instructions+=7;goto B5daf1f;
case 0x5daf21:c.instructions+=6;goto B5daf21;
case 0x5daf24:c.instructions+=5;goto B5daf24;
case 0x5daf26:c.instructions+=4;goto B5daf26;
case 0x5daf2c:c.instructions+=3;goto B5daf2c;
case 0x5daf2f:c.instructions+=2;goto B5daf2f;
case 0x5daf32:c.instructions+=1;goto B5daf32;
case 0x5daf34:goto L5daf34;
case 0x5daf37:c.instructions+=1;goto B5daf37;
case 0x5daf39:goto L5daf39;
case 0x5daf3e:c.instructions+=1;goto B5daf3e;
case 0x5daf40:goto L5daf40;
case 0x5daf45:c.instructions+=1;goto B5daf45;
case 0x5daf47:goto L5daf47;
case 0x5daf4c:c.instructions+=1;goto B5daf4c;
case 0x5daf4e:goto L5daf4e;
case 0x5daf51:c.instructions+=1;goto B5daf51;
case 0x5daf53:goto L5daf53;
case 0x5daf56:goto L5daf56;
case 0x5daf5c:goto L5daf5c;
case 0x5daf5f:c.instructions+=6;goto B5daf5f;
case 0x5daf63:c.instructions+=5;goto B5daf63;
case 0x5daf65:c.instructions+=4;goto B5daf65;
case 0x5daf67:c.instructions+=3;goto B5daf67;
case 0x5daf6b:c.instructions+=2;goto B5daf6b;
case 0x5daf6d:c.instructions+=1;goto B5daf6d;
case 0x5daf72:goto L5daf72;
case 0x5daf75:c.instructions+=2;goto B5daf75;
case 0x5daf77:c.instructions+=1;goto B5daf77;
case 0x5daf79:goto L5daf79;
case 0x5daf7e:c.instructions+=2;goto B5daf7e;
case 0x5daf7f:c.instructions+=1;goto B5daf7f;
case 0x5daf84:goto L5daf84;
case 0x5daf86:c.instructions+=3;goto B5daf86;
case 0x5daf89:c.instructions+=2;goto B5daf89;
case 0x5daf8b:c.instructions+=1;goto B5daf8b;
case 0x5daf8d:goto L5daf8d;
case 0x5daf92:goto L5daf92;
case 0x5daf96:c.instructions+=6;goto B5daf96;
case 0x5daf97:c.instructions+=5;goto B5daf97;
case 0x5daf9a:c.instructions+=4;goto B5daf9a;
case 0x5daf9d:c.instructions+=3;goto B5daf9d;
case 0x5dafa4:c.instructions+=2;goto B5dafa4;
case 0x5dafa8:c.instructions+=1;goto B5dafa8;
case 0x5dafaa:goto L5dafaa;
case 0x5dafae:c.instructions+=7;goto B5dafae;
case 0x5dafaf:c.instructions+=6;goto B5dafaf;
case 0x5dafb6:c.instructions+=5;goto B5dafb6;
case 0x5dafb7:c.instructions+=4;goto B5dafb7;
case 0x5dafb8:c.instructions+=3;goto B5dafb8;
case 0x5dafb9:c.instructions+=2;goto B5dafb9;
case 0x5dafbc:c.instructions+=1;goto B5dafbc;
case 0x5dafbf:goto L5dafbf;
case 0x5dafc3:c.instructions+=5;goto B5dafc3;
case 0x5dafc6:c.instructions+=4;goto B5dafc6;
case 0x5dafc8:c.instructions+=3;goto B5dafc8;
case 0x5dafc9:c.instructions+=2;goto B5dafc9;
case 0x5dafcd:c.instructions+=1;goto B5dafcd;
case 0x5dafd0:goto L5dafd0;
case 0x5dafd4:c.instructions+=6;goto B5dafd4;
case 0x5dafda:c.instructions+=5;goto B5dafda;
case 0x5dafdb:c.instructions+=4;goto B5dafdb;
case 0x5dafde:c.instructions+=3;goto B5dafde;
case 0x5dafe0:c.instructions+=2;goto B5dafe0;
case 0x5dafe4:c.instructions+=1;goto B5dafe4;
case 0x5dafea:goto L5dafea;
case 0x5dafee:c.instructions+=7;goto B5dafee;
case 0x5daff2:c.instructions+=6;goto B5daff2;
case 0x5daff3:c.instructions+=5;goto B5daff3;
case 0x5daffa:c.instructions+=4;goto B5daffa;
case 0x5daffb:c.instructions+=3;goto B5daffb;
case 0x5daffc:c.instructions+=2;goto B5daffc;
case 0x5daffe:c.instructions+=1;goto B5daffe;
default:missing_instruction(c.pc);}
B5da002:L5da002:{c.instructions+=2;NFSU2_TR(0x5da002);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5da004:{NFSU2_TR(0x5da004);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5da00a;}}
}
B5da006:L5da006:{c.instructions+=2;NFSU2_TR(0x5da006);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5da008:{NFSU2_TR(0x5da008);
{goto L5da013;}
}
B5da00a:L5da00a:{c.instructions+=3;NFSU2_TR(0x5da00a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5da00d:{NFSU2_TR(0x5da00d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5da010:{NFSU2_TR(0x5da010);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5da013:L5da013:{c.instructions+=7;NFSU2_TR(0x5da013);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B5da017:{NFSU2_TR(0x5da017);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5da01a:{NFSU2_TR(0x5da01a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0xdcull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5da020:{NFSU2_TR(0x5da020);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da024:{NFSU2_TR(0x5da024);
u8 U[16];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5da02b:{NFSU2_TR(0x5da02b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5da02d:{NFSU2_TR(0x5da02d);
if(r1(R+518)){{goto L5da09f;}}
}
B5da02f:L5da02f:{c.instructions+=5;NFSU2_TR(0x5da02f);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5da033:{NFSU2_TR(0x5da033);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da034:{NFSU2_TR(0x5da034);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da035:{NFSU2_TR(0x5da035);
__builtin_memmove((R+4),(R+28),4);
}
B5da037:{NFSU2_TR(0x5da037);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5da03cull));
TAIL_STATIC(0x5d5a00u,5d5);
}
B5da03c:L5da03c:{c.instructions+=3;NFSU2_TR(0x5da03c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5da040:{NFSU2_TR(0x5da040);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0xffull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5da044:{NFSU2_TR(0x5da044);
if(r1(R+518)){{goto L5da09d;}}
}
B5da046:L5da046:{c.instructions+=9;NFSU2_TR(0x5da046);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5da049:{NFSU2_TR(0x5da049);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5da04f:{NFSU2_TR(0x5da04f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5da052:{NFSU2_TR(0x5da052);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da053:{NFSU2_TR(0x5da053);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5da056:{NFSU2_TR(0x5da056);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5da05a:{NFSU2_TR(0x5da05a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da05b:{NFSU2_TR(0x5da05b);
__builtin_memmove((R+4),(R+28),4);
}
B5da05d:{NFSU2_TR(0x5da05d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5da062ull));
TAIL_STATIC(0x5d5cd0u,5d5);
}
B5da062:L5da062:{c.instructions+=7;NFSU2_TR(0x5da062);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5da064:{NFSU2_TR(0x5da064);
{u32 ea_=u32(u32(7890136u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5da06a:{NFSU2_TR(0x5da06a);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5da070:{NFSU2_TR(0x5da070);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5da076:{NFSU2_TR(0x5da076);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5da078:{NFSU2_TR(0x5da078);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5da07b:{NFSU2_TR(0x5da07b);
if(r1(R+514)){{goto L5da085;}}
}
B5da07d:L5da07d:{c.instructions+=2;NFSU2_TR(0x5da07d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5da07f:{NFSU2_TR(0x5da07f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5da085:L5da085:{c.instructions+=5;NFSU2_TR(0x5da085);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5da089:{NFSU2_TR(0x5da089);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5da08d:{NFSU2_TR(0x5da08d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5da08f:{NFSU2_TR(0x5da08f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5da092:{NFSU2_TR(0x5da092);
if(r1(R+514)){{goto L5da09d;}}
}
B5da094:L5da094:{c.instructions+=3;NFSU2_TR(0x5da094);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5da098:{NFSU2_TR(0x5da098);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da09b:{NFSU2_TR(0x5da09b);
{goto L5da09f;}
}
B5da09d:L5da09d:{c.instructions+=1;NFSU2_TR(0x5da09d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5da09f:L5da09f:{c.instructions+=5;NFSU2_TR(0x5da09f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5da0a3:{NFSU2_TR(0x5da0a3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B5da0a6:{NFSU2_TR(0x5da0a6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x12ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x12ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5da0a9:{NFSU2_TR(0x5da0a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da0ad:{NFSU2_TR(0x5da0ad);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x5d9feeu,5d9);}
}
B5da0b3:L5da0b3:{c.instructions+=10;NFSU2_TR(0x5da0b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5da0b6:{NFSU2_TR(0x5da0b6);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B5da0ba:{NFSU2_TR(0x5da0ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5da0bd:{NFSU2_TR(0x5da0bd);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0xdcull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B5da0c3:{NFSU2_TR(0x5da0c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5da0c6:{NFSU2_TR(0x5da0c6);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B5da0c8:{NFSU2_TR(0x5da0c8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5da0ca:{NFSU2_TR(0x5da0ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5da0cd:{NFSU2_TR(0x5da0cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da0d1:{NFSU2_TR(0x5da0d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5da0e3;}}
}
B5da0d3:L5da0d3:{c.instructions+=5;NFSU2_TR(0x5da0d3);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5da0d6:{NFSU2_TR(0x5da0d6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5da0dc:{NFSU2_TR(0x5da0dc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5da0de:{NFSU2_TR(0x5da0de);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5da0e1:{NFSU2_TR(0x5da0e1);
if(r1(R+514)){{goto L5da110;}}
}
B5da0e3:L5da0e3:{c.instructions+=15;NFSU2_TR(0x5da0e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B5da0e6:{NFSU2_TR(0x5da0e6);
w4(R+0,u32(0x2aaaaaabull));
}
B5da0eb:{NFSU2_TR(0x5da0eb);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5da0ed:{NFSU2_TR(0x5da0ed);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5da0f1:{NFSU2_TR(0x5da0f1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B5da0f4:{NFSU2_TR(0x5da0f4);
__builtin_memmove((R+0),(R+8),4);
}
B5da0f6:{NFSU2_TR(0x5da0f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5da0f9:{NFSU2_TR(0x5da0f9);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B5da0fb:{NFSU2_TR(0x5da0fb);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B5da0fd:{NFSU2_TR(0x5da0fd);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5da0fe:{NFSU2_TR(0x5da0fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da102:{NFSU2_TR(0x5da102);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5da105:{NFSU2_TR(0x5da105);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5da109:{NFSU2_TR(0x5da109);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da10c:{NFSU2_TR(0x5da10c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5da110:L5da110:{c.instructions+=14;NFSU2_TR(0x5da110);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5da113:{NFSU2_TR(0x5da113);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5da115:{NFSU2_TR(0x5da115);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5da118:{NFSU2_TR(0x5da118);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5da11c:{NFSU2_TR(0x5da11c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da11e:{NFSU2_TR(0x5da11e);
u8 U[4];
w4(U+0,u32(0x3d4ccccdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da123:{NFSU2_TR(0x5da123);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da127:{NFSU2_TR(0x5da127);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da128:{NFSU2_TR(0x5da128);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5da12c:{NFSU2_TR(0x5da12c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da12d:{NFSU2_TR(0x5da12d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5da133:{NFSU2_TR(0x5da133);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da137:{NFSU2_TR(0x5da137);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5da13f:{NFSU2_TR(0x5da13f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5da144ull));
TAIL_STATIC(0x5774c0u,577);
}
B5da144:L5da144:{c.instructions+=8;NFSU2_TR(0x5da144);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5da148:{NFSU2_TR(0x5da148);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5da14c:{NFSU2_TR(0x5da14c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5da152:{NFSU2_TR(0x5da152);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da154:{NFSU2_TR(0x5da154);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da155:{NFSU2_TR(0x5da155);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5da159:{NFSU2_TR(0x5da159);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da15a:{NFSU2_TR(0x5da15a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5da15full));
TAIL_STATIC(0x570640u,570);
}
B5da15f:L5da15f:{c.instructions+=11;NFSU2_TR(0x5da15f);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5da163:{NFSU2_TR(0x5da163);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5da167:{NFSU2_TR(0x5da167);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5da16b:{NFSU2_TR(0x5da16b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da16d:{NFSU2_TR(0x5da16d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da171:{NFSU2_TR(0x5da171);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da172:{NFSU2_TR(0x5da172);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5da176:{NFSU2_TR(0x5da176);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da177:{NFSU2_TR(0x5da177);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5da17d:{NFSU2_TR(0x5da17d);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da181:{NFSU2_TR(0x5da181);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5da186ull));
TAIL_STATIC(0x570640u,570);
}
B5da186:L5da186:{c.instructions+=9;NFSU2_TR(0x5da186);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5da18a:{NFSU2_TR(0x5da18a);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5da18e:{NFSU2_TR(0x5da18e);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5da192:{NFSU2_TR(0x5da192);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da196:{NFSU2_TR(0x5da196);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da197:{NFSU2_TR(0x5da197);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5da19b:{NFSU2_TR(0x5da19b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da19c:{NFSU2_TR(0x5da19c);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da1a0:{NFSU2_TR(0x5da1a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5da1a5ull));
TAIL_STATIC(0x43ce50u,43c);
}
B5da1a5:L5da1a5:{c.instructions+=8;NFSU2_TR(0x5da1a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5da1a9:{NFSU2_TR(0x5da1a9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5da1ac:{NFSU2_TR(0x5da1ac);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da1ae:{NFSU2_TR(0x5da1ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da1af:{NFSU2_TR(0x5da1af);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5da1b3:{NFSU2_TR(0x5da1b3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da1b4:{NFSU2_TR(0x5da1b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5da1ba:{NFSU2_TR(0x5da1ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5da1bfull));
TAIL_STATIC(0x570640u,570);
}
B5da1bf:L5da1bf:{c.instructions+=9;NFSU2_TR(0x5da1bf);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5da1c3:{NFSU2_TR(0x5da1c3);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5da1c6:{NFSU2_TR(0x5da1c6);
{u32 ea_=u32(r4(R+24)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5da1c9:{NFSU2_TR(0x5da1c9);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5da1cc:{NFSU2_TR(0x5da1cc);
{u32 ea_=u32(r4(R+24)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5da1cf:{NFSU2_TR(0x5da1cf);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5da1d5:{NFSU2_TR(0x5da1d5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5da1d7:{NFSU2_TR(0x5da1d7);
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
B5da1da:{NFSU2_TR(0x5da1da);
if(r1(R+514)){{goto L5da1f0;}}
}
B5da1dc:L5da1dc:{c.instructions+=7;NFSU2_TR(0x5da1dc);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5da1e0:{NFSU2_TR(0x5da1e0);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5da1e2:{NFSU2_TR(0x5da1e2);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5da1e6:{NFSU2_TR(0x5da1e6);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5da1e8:{NFSU2_TR(0x5da1e8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5da1ea:{NFSU2_TR(0x5da1ea);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5da1ee:{NFSU2_TR(0x5da1ee);
{goto L5da1f4;}
}
B5da1f0:L5da1f0:{c.instructions+=1;NFSU2_TR(0x5da1f0);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5da1f4:L5da1f4:{c.instructions+=25;NFSU2_TR(0x5da1f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5da1f8:{NFSU2_TR(0x5da1f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5da1fb:{NFSU2_TR(0x5da1fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5da1ff:{NFSU2_TR(0x5da1ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da202:{NFSU2_TR(0x5da202);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5da205:{NFSU2_TR(0x5da205);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5da207:{NFSU2_TR(0x5da207);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5da20a:{NFSU2_TR(0x5da20a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da20d:{NFSU2_TR(0x5da20d);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5da210:{NFSU2_TR(0x5da210);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da213:{NFSU2_TR(0x5da213);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5da217:{NFSU2_TR(0x5da217);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5da21a:{NFSU2_TR(0x5da21a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5da21e:{NFSU2_TR(0x5da21e);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5da221:{NFSU2_TR(0x5da221);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5da222:{NFSU2_TR(0x5da222);
__asm__ volatile(".byte 0xd8,0xf9":::"memory");
}
B5da224:{NFSU2_TR(0x5da224);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5da225:{NFSU2_TR(0x5da225);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5da228:{NFSU2_TR(0x5da228);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da22b:{NFSU2_TR(0x5da22b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da22e:{NFSU2_TR(0x5da22e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5da230:{NFSU2_TR(0x5da230);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5da231:{NFSU2_TR(0x5da231);
__builtin_memmove((R+16),(R+20),4);
}
B5da233:{NFSU2_TR(0x5da233);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5da234:{NFSU2_TR(0x5da234);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5da240:L5da240:{c.instructions+=8;NFSU2_TR(0x5da240);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5da244:{NFSU2_TR(0x5da244);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da245:{NFSU2_TR(0x5da245);
__builtin_memmove((R+24),(R+4),4);
}
B5da247:{NFSU2_TR(0x5da247);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5da24b:{NFSU2_TR(0x5da24b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da24c:{NFSU2_TR(0x5da24c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da24d:{NFSU2_TR(0x5da24d);
__builtin_memmove((R+4),(R+24),4);
}
B5da24f:{NFSU2_TR(0x5da24f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5da254ull));
TAIL_STATIC(0x5d5af0u,5d5);
}
B5da254:L5da254:{c.instructions+=2;NFSU2_TR(0x5da254);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5da256:{NFSU2_TR(0x5da256);
if(r1(R+518)){{goto L5da2e4;}}
}
B5da25c:L5da25c:{c.instructions+=7;NFSU2_TR(0x5da25c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5da260:{NFSU2_TR(0x5da260);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5da264:{NFSU2_TR(0x5da264);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da265:{NFSU2_TR(0x5da265);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5da267:{NFSU2_TR(0x5da267);
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
B5da269:{NFSU2_TR(0x5da269);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da26d:{NFSU2_TR(0x5da26d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5da2dd;}}
}
B5da26f:L5da26f:{c.instructions+=8;NFSU2_TR(0x5da26f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5da272:{NFSU2_TR(0x5da272);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da273:{NFSU2_TR(0x5da273);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5da276:{NFSU2_TR(0x5da276);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5da279:{NFSU2_TR(0x5da279);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B5da27b:{NFSU2_TR(0x5da27b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da27c:{NFSU2_TR(0x5da27c);
__builtin_memmove((R+28),(R+0),4);
}
B5da27e:{NFSU2_TR(0x5da27e);
__builtin_memmove((R+28),(R+28),4);
}
B5da280:L5da280:{c.instructions+=2;NFSU2_TR(0x5da280);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5da282:{NFSU2_TR(0x5da282);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5da288;}}
}
B5da284:L5da284:{c.instructions+=2;NFSU2_TR(0x5da284);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5da286:{NFSU2_TR(0x5da286);
{goto L5da28d;}
}
B5da288:L5da288:{c.instructions+=2;NFSU2_TR(0x5da288);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5da28b:{NFSU2_TR(0x5da28b);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B5da28d:L5da28d:{c.instructions+=4;NFSU2_TR(0x5da28d);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5da28f:{NFSU2_TR(0x5da28f);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5da292:{NFSU2_TR(0x5da292);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5da296:{NFSU2_TR(0x5da296);
if(r1(R+518)){{goto L5da2ba;}}
}
B5da298:L5da298:{c.instructions+=7;NFSU2_TR(0x5da298);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5da29b:{NFSU2_TR(0x5da29b);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5da29d:{NFSU2_TR(0x5da29d);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5da29f:{NFSU2_TR(0x5da29f);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5da2a1:{NFSU2_TR(0x5da2a1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5da2a3:{NFSU2_TR(0x5da2a3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5da2a6:{NFSU2_TR(0x5da2a6);
if(r1(R+514)){{goto L5da2ad;}}
}
B5da2a8:L5da2a8:{c.instructions+=2;NFSU2_TR(0x5da2a8);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5da2ab:{NFSU2_TR(0x5da2ab);
{goto L5da2ba;}
}
B5da2ad:L5da2ad:{c.instructions+=4;NFSU2_TR(0x5da2ad);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5da2b0:{NFSU2_TR(0x5da2b0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5da2b2:{NFSU2_TR(0x5da2b2);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5da2b5:{NFSU2_TR(0x5da2b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5da2ba;}}
}
B5da2b7:L5da2b7:{c.instructions+=1;NFSU2_TR(0x5da2b7);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5da2ba:L5da2ba:{c.instructions+=3;NFSU2_TR(0x5da2ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5da2bc:{NFSU2_TR(0x5da2bc);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5da2be:{NFSU2_TR(0x5da2be);
if(r1(R+518)){{goto L5da2cb;}}
}
B5da2c0:L5da2c0:{c.instructions+=4;NFSU2_TR(0x5da2c0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5da2c4:{NFSU2_TR(0x5da2c4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5da2c6:{NFSU2_TR(0x5da2c6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5da2c9:{NFSU2_TR(0x5da2c9);
if(r1(R+514)){{goto L5da2d3;}}
}
B5da2cb:L5da2cb:{c.instructions+=3;NFSU2_TR(0x5da2cb);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5da2cf:{NFSU2_TR(0x5da2cf);
__builtin_memmove((R+20),(R+4),4);
}
B5da2d1:{NFSU2_TR(0x5da2d1);
{goto L5da2d5;}
}
B5da2d3:L5da2d3:{c.instructions+=1;NFSU2_TR(0x5da2d3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5da2d5:L5da2d5:{c.instructions+=3;NFSU2_TR(0x5da2d5);
w1(R+512,carry<u32>(r4(R+8),u32(0x18ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x18ull))));
}
B5da2d8:{NFSU2_TR(0x5da2d8);
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
B5da2d9:{NFSU2_TR(0x5da2d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5da280u);}goto L5da280;}}
}
B5da2db:L5da2db:{c.instructions+=2;NFSU2_TR(0x5da2db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5da2dc:{NFSU2_TR(0x5da2dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5da2dd:L5da2dd:{c.instructions+=4;NFSU2_TR(0x5da2dd);
__builtin_memmove((R+0),(R+20),4);
}
B5da2df:{NFSU2_TR(0x5da2df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5da2e0:{NFSU2_TR(0x5da2e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5da2e1:{NFSU2_TR(0x5da2e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5da2e4:L5da2e4:{c.instructions+=3;NFSU2_TR(0x5da2e4);
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
B5da2e6:{NFSU2_TR(0x5da2e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5da2e7:{NFSU2_TR(0x5da2e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5da2f0:L5da2f0:{c.instructions+=18;NFSU2_TR(0x5da2f0);
__builtin_memmove((R+0),(R+4),4);
}
B5da2f2:{NFSU2_TR(0x5da2f2);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5da2f4:{NFSU2_TR(0x5da2f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da2f7:{NFSU2_TR(0x5da2f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da2fa:{NFSU2_TR(0x5da2fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da2fd:{NFSU2_TR(0x5da2fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da300:{NFSU2_TR(0x5da300);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5da303:{NFSU2_TR(0x5da303);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5da306:{NFSU2_TR(0x5da306);
__builtin_memmove((R+8),(R+4),4);
}
B5da308:{NFSU2_TR(0x5da308);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da30b:{NFSU2_TR(0x5da30b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da30e:{NFSU2_TR(0x5da30e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da311:{NFSU2_TR(0x5da311);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5da318:{NFSU2_TR(0x5da318);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da31b:{NFSU2_TR(0x5da31b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da31e:{NFSU2_TR(0x5da31e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da321:{NFSU2_TR(0x5da321);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da324:{NFSU2_TR(0x5da324);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5da330:L5da330:{c.instructions+=14;NFSU2_TR(0x5da330);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5da334:{NFSU2_TR(0x5da334);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5da337:{NFSU2_TR(0x5da337);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5da33a:{NFSU2_TR(0x5da33a);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5da33c:{NFSU2_TR(0x5da33c);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5da33e:{NFSU2_TR(0x5da33e);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5da341:{NFSU2_TR(0x5da341);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5da343:{NFSU2_TR(0x5da343);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5da345:{NFSU2_TR(0x5da345);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5da347:{NFSU2_TR(0x5da347);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5da349:{NFSU2_TR(0x5da349);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5da34c:{NFSU2_TR(0x5da34c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5da34e:{NFSU2_TR(0x5da34e);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5da351:{NFSU2_TR(0x5da351);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5da361;}}
}
B5da353:L5da353:{c.instructions+=5;NFSU2_TR(0x5da353);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da355:{NFSU2_TR(0x5da355);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da356:{NFSU2_TR(0x5da356);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da357:{NFSU2_TR(0x5da357);
w4(R+4,u32(0x88f298ull));
}
B5da35c:{NFSU2_TR(0x5da35c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5da361ull));
TAIL_STATIC(0x5d9e30u,5d9);
}
B5da361:L5da361:{c.instructions+=1;NFSU2_TR(0x5da361);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5da370:L5da370:{c.instructions+=11;NFSU2_TR(0x5da370);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5da374:{NFSU2_TR(0x5da374);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5da377:{NFSU2_TR(0x5da377);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da378:{NFSU2_TR(0x5da378);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5da37c:{NFSU2_TR(0x5da37c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da37d:{NFSU2_TR(0x5da37d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da37e:{NFSU2_TR(0x5da37e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da37f:{NFSU2_TR(0x5da37f);
__builtin_memmove((R+28),(R+4),4);
}
B5da381:{NFSU2_TR(0x5da381);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da382:{NFSU2_TR(0x5da382);
w4(R+4,u32(0x88f298ull));
}
B5da387:{NFSU2_TR(0x5da387);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5da38cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5da240u);}goto L5da240;}
}
B5da38c:L5da38c:{c.instructions+=13;NFSU2_TR(0x5da38c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5da390:{NFSU2_TR(0x5da390);
__builtin_memmove((R+24),(R+0),4);
}
B5da392:{NFSU2_TR(0x5da392);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B5da396:{NFSU2_TR(0x5da396);
__builtin_memmove((R+0),gp(0x88f29c),4);
}
B5da39b:{NFSU2_TR(0x5da39b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0xdcull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5da3a1:{NFSU2_TR(0x5da3a1);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B5da3a3:{NFSU2_TR(0x5da3a3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da3a4:{NFSU2_TR(0x5da3a4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da3a5:{NFSU2_TR(0x5da3a5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da3a6:{NFSU2_TR(0x5da3a6);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5da3aa:{NFSU2_TR(0x5da3aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da3ab:{NFSU2_TR(0x5da3ab);
w4(R+4,u32(0x88f298ull));
}
B5da3b0:{NFSU2_TR(0x5da3b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5da3b5ull));
TAIL_STATIC(0x5d5c00u,5d5);
}
B5da3b5:L5da3b5:{c.instructions+=6;NFSU2_TR(0x5da3b5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da3b6:{NFSU2_TR(0x5da3b6);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5da3ba:{NFSU2_TR(0x5da3ba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da3bb:{NFSU2_TR(0x5da3bb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da3bc:{NFSU2_TR(0x5da3bc);
w4(R+4,u32(0x88f298ull));
}
B5da3c1:{NFSU2_TR(0x5da3c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5da3c6ull));
TAIL_STATIC(0x5d9e30u,5d9);
}
B5da3c6:L5da3c6:{c.instructions+=5;NFSU2_TR(0x5da3c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5da3c7:{NFSU2_TR(0x5da3c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5da3c8:{NFSU2_TR(0x5da3c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5da3c9:{NFSU2_TR(0x5da3c9);
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
B5da3cc:{NFSU2_TR(0x5da3cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5da3d0:L5da3d0:{c.instructions+=15;NFSU2_TR(0x5da3d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5da3d4:{NFSU2_TR(0x5da3d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5da3db:{NFSU2_TR(0x5da3db);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5da3de:{NFSU2_TR(0x5da3de);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5da3e1:{NFSU2_TR(0x5da3e1);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5da3e3:{NFSU2_TR(0x5da3e3);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5da3e5:{NFSU2_TR(0x5da3e5);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5da3e8:{NFSU2_TR(0x5da3e8);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5da3ea:{NFSU2_TR(0x5da3ea);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5da3ec:{NFSU2_TR(0x5da3ec);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5da3ee:{NFSU2_TR(0x5da3ee);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5da3f0:{NFSU2_TR(0x5da3f0);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5da3f3:{NFSU2_TR(0x5da3f3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5da3f5:{NFSU2_TR(0x5da3f5);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5da3f8:{NFSU2_TR(0x5da3f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5da408;}}
}
B5da3fa:L5da3fa:{c.instructions+=5;NFSU2_TR(0x5da3fa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da3fc:{NFSU2_TR(0x5da3fc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da3fd:{NFSU2_TR(0x5da3fd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da3fe:{NFSU2_TR(0x5da3fe);
w4(R+4,u32(0x88f298ull));
}
B5da403:{NFSU2_TR(0x5da403);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5da408ull));
TAIL_STATIC(0x5d9e30u,5d9);
}
B5da408:L5da408:{c.instructions+=1;NFSU2_TR(0x5da408);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5da410:L5da410:{c.instructions+=12;NFSU2_TR(0x5da410);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5da414:{NFSU2_TR(0x5da414);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da415:{NFSU2_TR(0x5da415);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da416:{NFSU2_TR(0x5da416);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5da41a:{NFSU2_TR(0x5da41a);
__builtin_memmove((R+24),(R+4),4);
}
B5da41c:{NFSU2_TR(0x5da41c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5da420:{NFSU2_TR(0x5da420);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da421:{NFSU2_TR(0x5da421);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da422:{NFSU2_TR(0x5da422);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da423:{NFSU2_TR(0x5da423);
w4(R+4,u32(0x88f298ull));
}
B5da428:{NFSU2_TR(0x5da428);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5da42f:{NFSU2_TR(0x5da42f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5da434ull));
TAIL_STATIC(0x5d9cc0u,5d9);
}
B5da434:L5da434:{c.instructions+=2;NFSU2_TR(0x5da434);
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
B5da436:{NFSU2_TR(0x5da436);
if(r1(R+518)){{goto L5da445;}}
}
B5da438:L5da438:{c.instructions+=5;NFSU2_TR(0x5da438);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da439:{NFSU2_TR(0x5da439);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da43a:{NFSU2_TR(0x5da43a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da43b:{NFSU2_TR(0x5da43b);
w4(R+4,u32(0x88f298ull));
}
B5da440:{NFSU2_TR(0x5da440);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5da445ull));
TAIL_STATIC(0x5d9e30u,5d9);
}
B5da445:L5da445:{c.instructions+=3;NFSU2_TR(0x5da445);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5da446:{NFSU2_TR(0x5da446);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5da447:{NFSU2_TR(0x5da447);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5da450:L5da450:{c.instructions+=10;NFSU2_TR(0x5da450);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5da454:{NFSU2_TR(0x5da454);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da455:{NFSU2_TR(0x5da455);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da456:{NFSU2_TR(0x5da456);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5da45a:{NFSU2_TR(0x5da45a);
__builtin_memmove((R+24),(R+4),4);
}
B5da45c:{NFSU2_TR(0x5da45c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da45d:{NFSU2_TR(0x5da45d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da45e:{NFSU2_TR(0x5da45e);
w4(R+4,u32(0x88f298ull));
}
B5da463:{NFSU2_TR(0x5da463);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5da46a:{NFSU2_TR(0x5da46a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5da46full));
TAIL_STATIC(0x5d5b80u,5d5);
}
B5da46f:L5da46f:{c.instructions+=5;NFSU2_TR(0x5da46f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da470:{NFSU2_TR(0x5da470);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da471:{NFSU2_TR(0x5da471);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da472:{NFSU2_TR(0x5da472);
w4(R+4,u32(0x88f298ull));
}
B5da477:{NFSU2_TR(0x5da477);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5da47cull));
TAIL_STATIC(0x5d9e30u,5d9);
}
B5da47c:L5da47c:{c.instructions+=3;NFSU2_TR(0x5da47c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5da47d:{NFSU2_TR(0x5da47d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5da47e:{NFSU2_TR(0x5da47e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5da490:L5da490:{c.instructions+=4;NFSU2_TR(0x5da490);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5da494:{NFSU2_TR(0x5da494);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da495:{NFSU2_TR(0x5da495);
w4(R+4,u32(0x88f298ull));
}
B5da49a:{NFSU2_TR(0x5da49a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5da49full));
TAIL_STATIC(0x5d9a90u,5d9);
}
B5da49f:L5da49f:{c.instructions+=1;NFSU2_TR(0x5da49f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5da4a0:L5da4a0:{c.instructions+=14;NFSU2_TR(0x5da4a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x48ull))));
}
B5da4a3:{NFSU2_TR(0x5da4a3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da4a4:{NFSU2_TR(0x5da4a4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da4a5:{NFSU2_TR(0x5da4a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5da4a9:{NFSU2_TR(0x5da4a9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da4aa:{NFSU2_TR(0x5da4aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5da4ae:{NFSU2_TR(0x5da4ae);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x7full))));
}
B5da4b1:{NFSU2_TR(0x5da4b1);
__builtin_memmove((R+12),(R+4),4);
}
B5da4b3:{NFSU2_TR(0x5da4b3);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xffffff80ull))));
}
B5da4b6:{NFSU2_TR(0x5da4b6);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5da4b8:{NFSU2_TR(0x5da4b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5da4ba:{NFSU2_TR(0x5da4ba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da4bb:{NFSU2_TR(0x5da4bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da4bf:{NFSU2_TR(0x5da4bf);
if(r1(R+518)){{goto L5da4fd;}}
}
B5da4c1:L5da4c1:{c.instructions+=4;NFSU2_TR(0x5da4c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5da4c4:{NFSU2_TR(0x5da4c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5da4c7:{NFSU2_TR(0x5da4c7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5da4c9:{NFSU2_TR(0x5da4c9);
if(r1(R+518)){{goto L5da53d;}}
}
B5da4cb:L5da4cb:{c.instructions+=1;NFSU2_TR(0x5da4cb);
{goto L5da4d0;}
}
B5da4d0:L5da4d0:{c.instructions+=3;NFSU2_TR(0x5da4d0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5da4d3:{NFSU2_TR(0x5da4d3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5da4d5:{NFSU2_TR(0x5da4d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5da4eb;}}
}
B5da4d7:L5da4d7:{c.instructions+=3;NFSU2_TR(0x5da4d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5da4da:{NFSU2_TR(0x5da4da);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5da4dc:{NFSU2_TR(0x5da4dc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5da4eb;}}
}
B5da4de:L5da4de:{c.instructions+=3;NFSU2_TR(0x5da4de);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5da4e1:{NFSU2_TR(0x5da4e1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5da4e3:{NFSU2_TR(0x5da4e3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5da4eb;}}
}
B5da4e5:L5da4e5:{c.instructions+=3;NFSU2_TR(0x5da4e5);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5da4e7:{NFSU2_TR(0x5da4e7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5da4e9:{NFSU2_TR(0x5da4e9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5da539;}}
}
B5da4eb:L5da4eb:{c.instructions+=3;NFSU2_TR(0x5da4eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5da4ed:{NFSU2_TR(0x5da4ed);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5da4ef:{NFSU2_TR(0x5da4ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5da4d0u);}goto L5da4d0;}}
}
B5da4f1:L5da4f1:{c.instructions+=7;NFSU2_TR(0x5da4f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5da4f2:{NFSU2_TR(0x5da4f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5da4f3:{NFSU2_TR(0x5da4f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5da4f4:{NFSU2_TR(0x5da4f4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5da4f6:{NFSU2_TR(0x5da4f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5da4f7:{NFSU2_TR(0x5da4f7);
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
B5da4fa:{NFSU2_TR(0x5da4fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5da4fd:L5da4fd:{c.instructions+=3;NFSU2_TR(0x5da4fd);
u8 U[5];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5da501:{NFSU2_TR(0x5da501);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5da503:{NFSU2_TR(0x5da503);
if(r1(R+518)){{goto L5da549;}}
}
B5da505:L5da505:{c.instructions+=4;NFSU2_TR(0x5da505);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5da508:{NFSU2_TR(0x5da508);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5da50b:{NFSU2_TR(0x5da50b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5da50d:{NFSU2_TR(0x5da50d);
if(r1(R+518)){{goto L5da53d;}}
}
B5da50f:L5da50f:{c.instructions+=1;NFSU2_TR(0x5da50f);
}
B5da510:L5da510:{c.instructions+=3;NFSU2_TR(0x5da510);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5da513:{NFSU2_TR(0x5da513);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5da515:{NFSU2_TR(0x5da515);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5da533;}}
}
B5da517:L5da517:{c.instructions+=3;NFSU2_TR(0x5da517);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5da51a:{NFSU2_TR(0x5da51a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5da51c:{NFSU2_TR(0x5da51c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5da533;}}
}
B5da51e:L5da51e:{c.instructions+=2;NFSU2_TR(0x5da51e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5da520:{NFSU2_TR(0x5da520);
if(r1(R+518)){{goto L5da531;}}
}
B5da522:L5da522:{c.instructions+=6;NFSU2_TR(0x5da522);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5da525:{NFSU2_TR(0x5da525);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+24))));
}
B5da527:{NFSU2_TR(0x5da527);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B5da529:{NFSU2_TR(0x5da529);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5da52b:{NFSU2_TR(0x5da52b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5da52f:{NFSU2_TR(0x5da52f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5da533;}}
}
B5da531:L5da531:{c.instructions+=1;NFSU2_TR(0x5da531);
__builtin_memmove((R+4),(R+8),4);
}
B5da533:L5da533:{c.instructions+=3;NFSU2_TR(0x5da533);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5da535:{NFSU2_TR(0x5da535);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5da537:{NFSU2_TR(0x5da537);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5da510u);}goto L5da510;}}
}
B5da539:L5da539:{c.instructions+=2;NFSU2_TR(0x5da539);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5da53b:{NFSU2_TR(0x5da53b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5da5a4;}}
}
B5da53d:L5da53d:{c.instructions+=7;NFSU2_TR(0x5da53d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5da53e:{NFSU2_TR(0x5da53e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5da53f:{NFSU2_TR(0x5da53f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5da540:{NFSU2_TR(0x5da540);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5da542:{NFSU2_TR(0x5da542);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5da543:{NFSU2_TR(0x5da543);
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
B5da546:{NFSU2_TR(0x5da546);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5da549:L5da549:{c.instructions+=4;NFSU2_TR(0x5da549);
u8 U[5];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5da54d:{NFSU2_TR(0x5da54d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5da54f:{NFSU2_TR(0x5da54f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5da552:{NFSU2_TR(0x5da552);
if(r1(R+518)){{goto L5da57e;}}
}
B5da554:L5da554:{c.instructions+=3;NFSU2_TR(0x5da554);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5da556:{NFSU2_TR(0x5da556);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5da558:{NFSU2_TR(0x5da558);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5da53du);}goto L5da53d;}}
}
B5da55a:L5da55a:{c.instructions+=1;NFSU2_TR(0x5da55a);
__builtin_memmove((R+12),(R+12),4);
}
B5da560:L5da560:{c.instructions+=3;NFSU2_TR(0x5da560);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5da563:{NFSU2_TR(0x5da563);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5da565:{NFSU2_TR(0x5da565);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5da56c;}}
}
B5da567:L5da567:{c.instructions+=2;NFSU2_TR(0x5da567);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+24)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5da56a:{NFSU2_TR(0x5da56a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5da539u);}goto L5da539;}}
}
B5da56c:L5da56c:{c.instructions+=3;NFSU2_TR(0x5da56c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5da56e:{NFSU2_TR(0x5da56e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5da570:{NFSU2_TR(0x5da570);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5da560u);}goto L5da560;}}
}
B5da572:L5da572:{c.instructions+=7;NFSU2_TR(0x5da572);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5da573:{NFSU2_TR(0x5da573);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5da574:{NFSU2_TR(0x5da574);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5da575:{NFSU2_TR(0x5da575);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5da577:{NFSU2_TR(0x5da577);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5da578:{NFSU2_TR(0x5da578);
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
B5da57b:{NFSU2_TR(0x5da57b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5da57e:L5da57e:{c.instructions+=3;NFSU2_TR(0x5da57e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5da581:{NFSU2_TR(0x5da581);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5da583:{NFSU2_TR(0x5da583);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5da53du);}goto L5da53d;}}
}
B5da585:L5da585:{c.instructions+=3;NFSU2_TR(0x5da585);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5da588:{NFSU2_TR(0x5da588);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5da58a:{NFSU2_TR(0x5da58a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5da591;}}
}
B5da58c:L5da58c:{c.instructions+=2;NFSU2_TR(0x5da58c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+24)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5da58f:{NFSU2_TR(0x5da58f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5da539u);}goto L5da539;}}
}
B5da591:L5da591:{c.instructions+=3;NFSU2_TR(0x5da591);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5da594:{NFSU2_TR(0x5da594);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5da596:{NFSU2_TR(0x5da596);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5da585u);}goto L5da585;}}
}
B5da598:L5da598:{c.instructions+=7;NFSU2_TR(0x5da598);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5da599:{NFSU2_TR(0x5da599);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5da59a:{NFSU2_TR(0x5da59a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5da59b:{NFSU2_TR(0x5da59b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5da59d:{NFSU2_TR(0x5da59d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5da59e:{NFSU2_TR(0x5da59e);
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
B5da5a1:{NFSU2_TR(0x5da5a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5da5a4:L5da5a4:{c.instructions+=2;NFSU2_TR(0x5da5a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5da5a6:{NFSU2_TR(0x5da5a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5da5c1;}}
}
B5da5a8:L5da5a8:{c.instructions+=3;NFSU2_TR(0x5da5a8);
u8 U[5];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5da5ac:{NFSU2_TR(0x5da5ac);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5da5ae:{NFSU2_TR(0x5da5ae);
if(r1(R+518)){{goto L5da5b5;}}
}
B5da5b0:L5da5b0:{c.instructions+=2;NFSU2_TR(0x5da5b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5da5b3:{NFSU2_TR(0x5da5b3);
{goto L5da5bd;}
}
B5da5b5:L5da5b5:{c.instructions+=3;NFSU2_TR(0x5da5b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5da5b8:{NFSU2_TR(0x5da5b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+20,u32(u32(r4(R+20))+u32(r4(U+4))));
}
B5da5bb:{NFSU2_TR(0x5da5bb);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+24))));
}
B5da5bd:L5da5bd:{c.instructions+=1;NFSU2_TR(0x5da5bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da5c1:L5da5c1:{c.instructions+=22;NFSU2_TR(0x5da5c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5da5c4:{NFSU2_TR(0x5da5c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5da5c6:{NFSU2_TR(0x5da5c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((R+28),(U+0),4);
}
B5da5c9:{NFSU2_TR(0x5da5c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5da5cc:{NFSU2_TR(0x5da5cc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+12)),r4(U+0));
}
B5da5ce:{NFSU2_TR(0x5da5ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da5d1:{NFSU2_TR(0x5da5d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da5d4:{NFSU2_TR(0x5da5d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da5d7:{NFSU2_TR(0x5da5d7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5da5db:{NFSU2_TR(0x5da5db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5da5dd:{NFSU2_TR(0x5da5dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5da5df:{NFSU2_TR(0x5da5df);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da5e2:{NFSU2_TR(0x5da5e2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5da5e4:{NFSU2_TR(0x5da5e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da5e7:{NFSU2_TR(0x5da5e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5da5ea:{NFSU2_TR(0x5da5ea);
__builtin_memmove((R+8),(R+12),4);
}
B5da5ec:{NFSU2_TR(0x5da5ec);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
}
B5da5ee:{NFSU2_TR(0x5da5ee);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+20))));
}
B5da5f0:{NFSU2_TR(0x5da5f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B5da5f3:{NFSU2_TR(0x5da5f3);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+12))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B5da5f5:{NFSU2_TR(0x5da5f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da5f8:{NFSU2_TR(0x5da5f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5da612;}}
}
B5da5fa:L5da5fa:{c.instructions+=9;NFSU2_TR(0x5da5fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B5da5fc:{NFSU2_TR(0x5da5fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5da5ff:{NFSU2_TR(0x5da5ff);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+20)),r4(U+0));
}
B5da602:{NFSU2_TR(0x5da602);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da605:{NFSU2_TR(0x5da605);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5da608:{NFSU2_TR(0x5da608);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+12)),r4(U+0));
}
B5da60a:{NFSU2_TR(0x5da60a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da60d:{NFSU2_TR(0x5da60d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da610:{NFSU2_TR(0x5da610);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5da612:L5da612:{c.instructions+=3;NFSU2_TR(0x5da612);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5da614:{NFSU2_TR(0x5da614);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5da618:{NFSU2_TR(0x5da618);
if(r1(R+518)){{goto L5da640;}}
}
B5da61a:L5da61a:{c.instructions+=14;NFSU2_TR(0x5da61a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5da61c:{NFSU2_TR(0x5da61c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5da61e:{NFSU2_TR(0x5da61e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5da621:{NFSU2_TR(0x5da621);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+20)),r4(U+0));
}
B5da624:{NFSU2_TR(0x5da624);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da627:{NFSU2_TR(0x5da627);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B5da62a:{NFSU2_TR(0x5da62a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da62d:{NFSU2_TR(0x5da62d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da630:{NFSU2_TR(0x5da630);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5da634:{NFSU2_TR(0x5da634);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5da636:{NFSU2_TR(0x5da636);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5da638:{NFSU2_TR(0x5da638);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da63b:{NFSU2_TR(0x5da63b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da63e:{NFSU2_TR(0x5da63e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5da640:L5da640:{c.instructions+=10;NFSU2_TR(0x5da640);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5da644:{NFSU2_TR(0x5da644);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5da647:{NFSU2_TR(0x5da647);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da64b:{NFSU2_TR(0x5da64b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5da64d:{NFSU2_TR(0x5da64d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da651:{NFSU2_TR(0x5da651);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da655:{NFSU2_TR(0x5da655);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da659:{NFSU2_TR(0x5da659);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5da661:{NFSU2_TR(0x5da661);
w4(R+4,u32(0xcull));
}
B5da666:{NFSU2_TR(0x5da666);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5da66a:L5da66a:{c.instructions+=1;NFSU2_TR(0x5da66a);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5da66c;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5da66au);}goto L5da66a;}
}
B5da66c:L5da66c:{c.instructions+=2;NFSU2_TR(0x5da66c);
w4(R+4,u32(0xcull));
}
B5da671:{NFSU2_TR(0x5da671);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5da675:L5da675:{c.instructions+=1;NFSU2_TR(0x5da675);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5da677;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5da675u);}goto L5da675;}
}
B5da677:L5da677:{c.instructions+=3;NFSU2_TR(0x5da677);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5da67b:{NFSU2_TR(0x5da67b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5da67d:{NFSU2_TR(0x5da67d);
if(r1(R+518)){{goto L5da68f;}}
}
B5da67f:L5da67f:{c.instructions+=5;NFSU2_TR(0x5da67f);
u8 U[4];
w4(U+0,u32(0x2full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da681:{NFSU2_TR(0x5da681);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da682:{NFSU2_TR(0x5da682);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5da686:{NFSU2_TR(0x5da686);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da687:{NFSU2_TR(0x5da687);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5da68cull));
TAIL_STATIC(0x43dc00u,43d);
}
B5da68c:L5da68c:{c.instructions+=1;NFSU2_TR(0x5da68c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5da68f:L5da68f:{c.instructions+=3;NFSU2_TR(0x5da68f);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5da693:{NFSU2_TR(0x5da693);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da694:{NFSU2_TR(0x5da694);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5da699ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B5da699:L5da699:{c.instructions+=10;NFSU2_TR(0x5da699);
w4(R+4,u32(0x2full));
}
B5da69e:{NFSU2_TR(0x5da69e);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B5da6a0:{NFSU2_TR(0x5da6a0);
w4(R+0,u32(0x44ull));
}
B5da6a5:{NFSU2_TR(0x5da6a5);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5da6a7:{NFSU2_TR(0x5da6a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da6a8:{NFSU2_TR(0x5da6a8);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5da6ac:{NFSU2_TR(0x5da6ac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da6ad:{NFSU2_TR(0x5da6ad);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da6af:{NFSU2_TR(0x5da6af);
u8 U[4];
w4(U+0,u32(0x7a0420ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da6b4:{NFSU2_TR(0x5da6b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5da6b9ull));
TAIL_STATIC(0x4022c0u,402);
}
B5da6b9:L5da6b9:{c.instructions+=11;NFSU2_TR(0x5da6b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5da6bc:{NFSU2_TR(0x5da6bc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B5da6bf:{NFSU2_TR(0x5da6bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5da6c0:{NFSU2_TR(0x5da6c0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5da6c1:{NFSU2_TR(0x5da6c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5da6c2:{NFSU2_TR(0x5da6c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da6c5:{NFSU2_TR(0x5da6c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5da6c6:{NFSU2_TR(0x5da6c6);
__builtin_memmove((R+0),(R+12),4);
}
B5da6c8:{NFSU2_TR(0x5da6c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5da6c9:{NFSU2_TR(0x5da6c9);
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
B5da6cc:{NFSU2_TR(0x5da6cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5da6d0:L5da6d0:{c.instructions+=6;NFSU2_TR(0x5da6d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5da6d3:{NFSU2_TR(0x5da6d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5da6d6:{NFSU2_TR(0x5da6d6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da6d7:{NFSU2_TR(0x5da6d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5da6da:{NFSU2_TR(0x5da6da);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5da6dc:{NFSU2_TR(0x5da6dc);
if(r1(R+518)){{goto L5da793;}}
}
B5da6e2:L5da6e2:{c.instructions+=1;NFSU2_TR(0x5da6e2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da6e3:L5da6e3:{c.instructions+=3;NFSU2_TR(0x5da6e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5da6e6:{NFSU2_TR(0x5da6e6);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5da6ea:{NFSU2_TR(0x5da6ea);
if(r1(R+518)){{goto L5da6fa;}}
}
B5da6ec:L5da6ec:{c.instructions+=3;NFSU2_TR(0x5da6ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5da6ee:{NFSU2_TR(0x5da6ee);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5da6f0:{NFSU2_TR(0x5da6f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5da6e3u);}goto L5da6e3;}}
}
B5da6f2:L5da6f2:{c.instructions+=4;NFSU2_TR(0x5da6f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5da6f3:{NFSU2_TR(0x5da6f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5da6f4:{NFSU2_TR(0x5da6f4);
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
B5da6f7:{NFSU2_TR(0x5da6f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5da6fa:L5da6fa:{c.instructions+=7;NFSU2_TR(0x5da6fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5da6fd:{NFSU2_TR(0x5da6fd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5da6ff:{NFSU2_TR(0x5da6ff);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da700:{NFSU2_TR(0x5da700);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5da703:{NFSU2_TR(0x5da703);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da704:{NFSU2_TR(0x5da704);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5da708:{NFSU2_TR(0x5da708);
if(r1(R+518)){{goto L5da738;}}
}
B5da70a:L5da70a:{c.instructions+=2;NFSU2_TR(0x5da70a);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5da70e:{NFSU2_TR(0x5da70e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5da738;}}
}
B5da710:L5da710:{c.instructions+=15;NFSU2_TR(0x5da710);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5da713:{NFSU2_TR(0x5da713);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B5da716:{NFSU2_TR(0x5da716);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5da719:{NFSU2_TR(0x5da719);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+20))));
}
B5da71b:{NFSU2_TR(0x5da71b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da71e:{NFSU2_TR(0x5da71e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5da720:{NFSU2_TR(0x5da720);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5da723:{NFSU2_TR(0x5da723);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5da725:{NFSU2_TR(0x5da725);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da728:{NFSU2_TR(0x5da728);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5da72b:{NFSU2_TR(0x5da72b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((R+24),(U+0),4);
}
B5da72e:{NFSU2_TR(0x5da72e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5da730:{NFSU2_TR(0x5da730);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da733:{NFSU2_TR(0x5da733);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da736:{NFSU2_TR(0x5da736);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5da738:L5da738:{c.instructions+=3;NFSU2_TR(0x5da738);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5da73a:{NFSU2_TR(0x5da73a);
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
B5da73c:{NFSU2_TR(0x5da73c);
if(r1(R+518)){{goto L5da76a;}}
}
B5da73e:L5da73e:{c.instructions+=3;NFSU2_TR(0x5da73e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5da741:{NFSU2_TR(0x5da741);
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
B5da743:{NFSU2_TR(0x5da743);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5da76a;}}
}
B5da745:L5da745:{c.instructions+=14;NFSU2_TR(0x5da745);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5da748:{NFSU2_TR(0x5da748);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5da74b:{NFSU2_TR(0x5da74b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),r4(R+24)));
w1(R+523,scarry<u32>(r4(R+28),r4(R+24)));
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5da74d:{NFSU2_TR(0x5da74d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da750:{NFSU2_TR(0x5da750);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5da752:{NFSU2_TR(0x5da752);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5da755:{NFSU2_TR(0x5da755);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5da757:{NFSU2_TR(0x5da757);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da75a:{NFSU2_TR(0x5da75a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5da75d:{NFSU2_TR(0x5da75d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B5da760:{NFSU2_TR(0x5da760);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5da762:{NFSU2_TR(0x5da762);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da765:{NFSU2_TR(0x5da765);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da768:{NFSU2_TR(0x5da768);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5da76a:L5da76a:{c.instructions+=10;NFSU2_TR(0x5da76a);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da76c:{NFSU2_TR(0x5da76c);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5da770:{NFSU2_TR(0x5da770);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da771:{NFSU2_TR(0x5da771);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da775:{NFSU2_TR(0x5da775);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5da779:{NFSU2_TR(0x5da779);
u8 U[4];
w4(U+0,u32(0x1bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da77b:{NFSU2_TR(0x5da77b);
u8 U[4];
w4(U+0,u32(0x7a0420ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da780:{NFSU2_TR(0x5da780);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da784:{NFSU2_TR(0x5da784);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da788:{NFSU2_TR(0x5da788);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5da78dull));
TAIL_STATIC(0x4022c0u,402);
}
B5da78d:L5da78d:{c.instructions+=4;NFSU2_TR(0x5da78d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5da790:{NFSU2_TR(0x5da790);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5da791:{NFSU2_TR(0x5da791);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5da792:{NFSU2_TR(0x5da792);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5da793:L5da793:{c.instructions+=3;NFSU2_TR(0x5da793);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5da794:{NFSU2_TR(0x5da794);
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
B5da797:{NFSU2_TR(0x5da797);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5da7a0:L5da7a0:{c.instructions+=4;NFSU2_TR(0x5da7a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5da7a4:{NFSU2_TR(0x5da7a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5da7a6:{NFSU2_TR(0x5da7a6);
u8 U[10];
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x34110ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5da7ab:{NFSU2_TR(0x5da7ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5da7c8;}}
}
B5da7ad:L5da7ad:{c.instructions+=8;NFSU2_TR(0x5da7ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5da7b0:{NFSU2_TR(0x5da7b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5da7b2:{NFSU2_TR(0x5da7b2);
w4(R+0,u32(0xcccccccdull));
}
B5da7b7:{NFSU2_TR(0x5da7b7);
u8 U[32];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
w8(U+8,u64(r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(r4(U+4)));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(u64(r8(U+24))>>32));
w1(R+512,u8((r4(R+8))!=(u32(0x0ull))));
w4(R+0,u32(r8(U+24)));
}
B5da7ba:{NFSU2_TR(0x5da7ba);
u8 U[48];
w4(U+40,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
__builtin_memmove((U+44),(R+8),4);
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+40))));
w1(U+24,u8((r4(U+40))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+40))-u32(u32(0x1ull))));
w4(U+29,shr<u32>(r4(U+44),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+40))==(u32(0x1ull))));
w1(U+39,u8(s32(r4(U+44))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+40))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+8))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B5da7bd:{NFSU2_TR(0x5da7bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da7c0:{NFSU2_TR(0x5da7c0);
w4(R+0,u32(0x1ull));
}
B5da7c5:{NFSU2_TR(0x5da7c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5da7c8:L5da7c8:{c.instructions+=2;NFSU2_TR(0x5da7c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34113ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5da7cd:{NFSU2_TR(0x5da7cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5da849;}}
}
B5da7cf:L5da7cf:{c.instructions+=10;NFSU2_TR(0x5da7cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5da7d2:{NFSU2_TR(0x5da7d2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da7d3:{NFSU2_TR(0x5da7d3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da7d4:{NFSU2_TR(0x5da7d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da7d7:{NFSU2_TR(0x5da7d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5da7da:{NFSU2_TR(0x5da7da);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5da7de:{NFSU2_TR(0x5da7de);
__builtin_memmove((R+12),(R+0),4);
}
B5da7e0:{NFSU2_TR(0x5da7e0);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B5da7e2:{NFSU2_TR(0x5da7e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da7e5:{NFSU2_TR(0x5da7e5);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5da83f;}}
}
B5da7e7:L5da7e7:{c.instructions+=3;NFSU2_TR(0x5da7e7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da7e8:{NFSU2_TR(0x5da7e8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da7e9:{NFSU2_TR(0x5da7e9);
__builtin_memmove((R+16),(R+16),4);
}
B5da7f0:L5da7f0:{c.instructions+=4;NFSU2_TR(0x5da7f0);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5da7f3:{NFSU2_TR(0x5da7f3);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5da7f5:{NFSU2_TR(0x5da7f5);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5da7f7:{NFSU2_TR(0x5da7f7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5da830;}}
}
B5da7f9:L5da7f9:{c.instructions+=2;NFSU2_TR(0x5da7f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5da7fc:{NFSU2_TR(0x5da7fc);
__builtin_memmove((R+16),(R+16),4);
}
B5da800:L5da800:{c.instructions+=4;NFSU2_TR(0x5da800);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5da803:{NFSU2_TR(0x5da803);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5da805:{NFSU2_TR(0x5da805);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5da807:{NFSU2_TR(0x5da807);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5da81f;}}
}
B5da809:L5da809:{c.instructions+=3;NFSU2_TR(0x5da809);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((R+28),(U+0),2);
}
B5da80c:{NFSU2_TR(0x5da80c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5da80e:{NFSU2_TR(0x5da80e);
__builtin_memmove((R+28),(R+28),4);
}
B5da810:L5da810:{c.instructions+=2;NFSU2_TR(0x5da810);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+28))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5da814:{NFSU2_TR(0x5da814);
if(r1(R+518)){{goto L5da821;}}
}
B5da816:L5da816:{c.instructions+=4;NFSU2_TR(0x5da816);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5da817:{NFSU2_TR(0x5da817);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
}
B5da81a:{NFSU2_TR(0x5da81a);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5da81d:{NFSU2_TR(0x5da81d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5da810u);}goto L5da810;}}
}
B5da81f:L5da81f:{c.instructions+=1;NFSU2_TR(0x5da81f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5da821:L5da821:{c.instructions+=6;NFSU2_TR(0x5da821);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da824:{NFSU2_TR(0x5da824);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B5da828:{NFSU2_TR(0x5da828);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5da829:{NFSU2_TR(0x5da829);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B5da82c:{NFSU2_TR(0x5da82c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5da82e:{NFSU2_TR(0x5da82e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5da800u);}goto L5da800;}}
}
B5da830:L5da830:{c.instructions+=4;NFSU2_TR(0x5da830);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5da834:{NFSU2_TR(0x5da834);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B5da838:{NFSU2_TR(0x5da838);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+14)));
w4(U+18,u32(u32(r4(R+12))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5da83b:{NFSU2_TR(0x5da83b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5da7f0u);}goto L5da7f0;}}
}
B5da83d:L5da83d:{c.instructions+=2;NFSU2_TR(0x5da83d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5da83e:{NFSU2_TR(0x5da83e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5da83f:L5da83f:{c.instructions+=4;NFSU2_TR(0x5da83f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5da840:{NFSU2_TR(0x5da840);
w4(R+0,u32(0x1ull));
}
B5da845:{NFSU2_TR(0x5da845);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5da846:{NFSU2_TR(0x5da846);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5da849:L5da849:{c.instructions+=2;NFSU2_TR(0x5da849);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34111ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5da84e:{NFSU2_TR(0x5da84e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5da85e;}}
}
B5da850:L5da850:{c.instructions+=4;NFSU2_TR(0x5da850);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+8),u32(0x8ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5da853:{NFSU2_TR(0x5da853);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da856:{NFSU2_TR(0x5da856);
w4(R+0,u32(0x1ull));
}
B5da85b:{NFSU2_TR(0x5da85b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5da85e:L5da85e:{c.instructions+=2;NFSU2_TR(0x5da85e);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x34112ull))));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x34112ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5da863:{NFSU2_TR(0x5da863);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5da87c;}}
}
B5da865:L5da865:{c.instructions+=7;NFSU2_TR(0x5da865);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5da868:{NFSU2_TR(0x5da868);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da86b:{NFSU2_TR(0x5da86b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5da86e:{NFSU2_TR(0x5da86e);
u8 U[48];
w4(U+40,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+44),(R+8),4);
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+40))));
w1(U+24,u8((r4(U+40))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+40))-u32(u32(0x1ull))));
w4(U+29,shr<u32>(r4(U+44),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+40))==(u32(0x1ull))));
w1(U+39,u8(s32(r4(U+44))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+40))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+8))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B5da871:{NFSU2_TR(0x5da871);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da874:{NFSU2_TR(0x5da874);
w4(R+0,u32(0x1ull));
}
B5da879:{NFSU2_TR(0x5da879);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5da87c:L5da87c:{c.instructions+=2;NFSU2_TR(0x5da87c);
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
B5da87e:{NFSU2_TR(0x5da87e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5da890:L5da890:{c.instructions+=32;NFSU2_TR(0x5da890);
__builtin_memmove((R+8),(R+4),4);
}
B5da892:{NFSU2_TR(0x5da892);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da893:{NFSU2_TR(0x5da893);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5da895:{NFSU2_TR(0x5da895);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc6ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5da89c:{NFSU2_TR(0x5da89c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da8a2:{NFSU2_TR(0x5da8a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da8a8:{NFSU2_TR(0x5da8a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da8ae:{NFSU2_TR(0x5da8ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da8b4:{NFSU2_TR(0x5da8b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da8ba:{NFSU2_TR(0x5da8ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da8c0:{NFSU2_TR(0x5da8c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da8c6:{NFSU2_TR(0x5da8c6);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x122ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5da8cd:{NFSU2_TR(0x5da8cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x134ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da8d3:{NFSU2_TR(0x5da8d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x12cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da8d9:{NFSU2_TR(0x5da8d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x130ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da8df:{NFSU2_TR(0x5da8df);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x138ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da8e5:{NFSU2_TR(0x5da8e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da8eb:{NFSU2_TR(0x5da8eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da8f1:{NFSU2_TR(0x5da8f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x144ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da8f7:{NFSU2_TR(0x5da8f7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da8f8:{NFSU2_TR(0x5da8f8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5da8fa:{NFSU2_TR(0x5da8fa);
w4(R+4,u32(0x40ull));
}
B5da8ff:{NFSU2_TR(0x5da8ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x188ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5da905:{NFSU2_TR(0x5da905);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x168ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da90b:{NFSU2_TR(0x5da90b);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x16dull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5da911:{NFSU2_TR(0x5da911);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x16cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5da917:{NFSU2_TR(0x5da917);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x16eull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5da91d:{NFSU2_TR(0x5da91d);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x16full))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5da923:{NFSU2_TR(0x5da923);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x178ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da929:{NFSU2_TR(0x5da929);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x17cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da92f:{NFSU2_TR(0x5da92f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x180ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da935:{NFSU2_TR(0x5da935);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x184ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da93b:L5da93b:{c.instructions+=1;NFSU2_TR(0x5da93b);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5da93d;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5da93bu);}goto L5da93b;}
}
B5da93d:L5da93d:{c.instructions+=2;NFSU2_TR(0x5da93d);
u8 U[22];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5da943:{NFSU2_TR(0x5da943);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5da964;}}
}
B5da945:L5da945:{c.instructions+=3;NFSU2_TR(0x5da945);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x29cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5da94b:{NFSU2_TR(0x5da94b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da94c:{NFSU2_TR(0x5da94c);
__builtin_memmove((R+16),(R+16),4);
}
B5da950:L5da950:{c.instructions+=7;NFSU2_TR(0x5da950);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5da952:{NFSU2_TR(0x5da952);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5da955:{NFSU2_TR(0x5da955);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5da95b:{NFSU2_TR(0x5da95b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5da95c:{NFSU2_TR(0x5da95c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5da95f:{NFSU2_TR(0x5da95f);
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
B5da961:{NFSU2_TR(0x5da961);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5da950u);}goto L5da950;}}
}
B5da963:L5da963:{c.instructions+=1;NFSU2_TR(0x5da963);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5da964:L5da964:{c.instructions+=4;NFSU2_TR(0x5da964);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5da965:{NFSU2_TR(0x5da965);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x298ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da96b:{NFSU2_TR(0x5da96b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5da96c:{NFSU2_TR(0x5da96c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5da970:L5da970:{c.instructions+=7;NFSU2_TR(0x5da970);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5da974:{NFSU2_TR(0x5da974);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da975:{NFSU2_TR(0x5da975);
__builtin_memmove((R+24),(R+4),4);
}
B5da977:{NFSU2_TR(0x5da977);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da978:{NFSU2_TR(0x5da978);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5da97b:{NFSU2_TR(0x5da97b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5da97c:{NFSU2_TR(0x5da97c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5da981ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5da981:L5da981:{c.instructions+=3;NFSU2_TR(0x5da981);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5da984:{NFSU2_TR(0x5da984);
__builtin_memmove((R+4),(R+24),4);
}
B5da986:{NFSU2_TR(0x5da986);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5da98bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5da890u);}goto L5da890;}
}
B5da98b:L5da98b:{c.instructions+=30;NFSU2_TR(0x5da98b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5da98d:{NFSU2_TR(0x5da98d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5da993:{NFSU2_TR(0x5da993);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5da999:{NFSU2_TR(0x5da999);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5da99c:{NFSU2_TR(0x5da99c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da9a2:{NFSU2_TR(0x5da9a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da9a8:{NFSU2_TR(0x5da9a8);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5da9af:{NFSU2_TR(0x5da9af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da9b5:{NFSU2_TR(0x5da9b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da9bb:{NFSU2_TR(0x5da9bb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5da9c1:{NFSU2_TR(0x5da9c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da9c7:{NFSU2_TR(0x5da9c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da9cd:{NFSU2_TR(0x5da9cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da9d3:{NFSU2_TR(0x5da9d3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5da9d9:{NFSU2_TR(0x5da9d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da9df:{NFSU2_TR(0x5da9df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da9e5:{NFSU2_TR(0x5da9e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da9eb:{NFSU2_TR(0x5da9eb);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5da9f2:{NFSU2_TR(0x5da9f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da9f8:{NFSU2_TR(0x5da9f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5da9fe:{NFSU2_TR(0x5da9fe);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5daa04:{NFSU2_TR(0x5daa04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5daa0a:{NFSU2_TR(0x5daa0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5daa10:{NFSU2_TR(0x5daa10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5daa16:{NFSU2_TR(0x5daa16);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5daa1c:{NFSU2_TR(0x5daa1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5daa22:{NFSU2_TR(0x5daa22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5daa28:{NFSU2_TR(0x5daa28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5daa2e:{NFSU2_TR(0x5daa2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5daa2f:{NFSU2_TR(0x5daa2f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5daa40:L5daa40:{c.instructions+=8;NFSU2_TR(0x5daa40);
w1(R+512,u8((r4(R+16))<(u32(0x8ull))));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5daa43:{NFSU2_TR(0x5daa43);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5daa46:{NFSU2_TR(0x5daa46);
__builtin_memmove((R+4),gp(0x82daa8),4);
}
B5daa4c:{NFSU2_TR(0x5daa4c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5daa4d:{NFSU2_TR(0x5daa4d);
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
B5daa4e:{NFSU2_TR(0x5daa4e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5daa50:{NFSU2_TR(0x5daa50);
__builtin_memmove(gp(0x82daa8),(R+4),4);
}
B5daa56:{NFSU2_TR(0x5daa56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5daa5bull));
TAIL_STATIC(0x48b210u,48b);
}
B5daa5b:L5daa5b:{c.instructions+=12;NFSU2_TR(0x5daa5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5daa5f:{NFSU2_TR(0x5daa5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5daa62:{NFSU2_TR(0x5daa62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5daa65:{NFSU2_TR(0x5daa65);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5daa66:{NFSU2_TR(0x5daa66);
u8 U[4];
w4(U+0,u32(0x2011ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5daa6b:{NFSU2_TR(0x5daa6b);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5daa6f:{NFSU2_TR(0x5daa6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5daa73:{NFSU2_TR(0x5daa73);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5daa74:{NFSU2_TR(0x5daa74);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5daa78:{NFSU2_TR(0x5daa78);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5daa79:{NFSU2_TR(0x5daa79);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5daa7d:{NFSU2_TR(0x5daa7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5daa82ull));
TAIL_STATIC(0x577c70u,577);
}
B5daa82:L5daa82:{c.instructions+=11;NFSU2_TR(0x5daa82);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5daa86:{NFSU2_TR(0x5daa86);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5daa8a:{NFSU2_TR(0x5daa8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5daa8d:{NFSU2_TR(0x5daa8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5daa90:{NFSU2_TR(0x5daa90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5daa97:{NFSU2_TR(0x5daa97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5daa9e:{NFSU2_TR(0x5daa9e);
__builtin_memmove((R+8),gp(0x82daa8),4);
}
B5daaa4:{NFSU2_TR(0x5daaa4);
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
B5daaa5:{NFSU2_TR(0x5daaa5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5daaa7:{NFSU2_TR(0x5daaa7);
__builtin_memmove(gp(0x82daa8),(R+8),4);
}
B5daaad:{NFSU2_TR(0x5daaad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5daab2ull));
TAIL_STATIC(0x48b210u,48b);
}
B5daab2:L5daab2:{c.instructions+=4;NFSU2_TR(0x5daab2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B5daab5:{NFSU2_TR(0x5daab5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5daab6:{NFSU2_TR(0x5daab6);
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
B5daab9:{NFSU2_TR(0x5daab9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5daac0:L5daac0:{c.instructions+=6;NFSU2_TR(0x5daac0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5daac1:{NFSU2_TR(0x5daac1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5daac5:{NFSU2_TR(0x5daac5);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5daac9:{NFSU2_TR(0x5daac9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5daaca:{NFSU2_TR(0x5daaca);
__builtin_memmove((R+28),(R+4),4);
}
B5daacc:{NFSU2_TR(0x5daacc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5daad4;}}
}
B5daace:L5daace:{c.instructions+=2;NFSU2_TR(0x5daace);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5daacf:{NFSU2_TR(0x5daacf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5daad4ull));
TAIL_STATIC(0x5df0b0u,5df);
}
B5daad4:L5daad4:{c.instructions+=2;NFSU2_TR(0x5daad4);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x3ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5daad8:{NFSU2_TR(0x5daad8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dab33;}}
}
B5daada:L5daada:{c.instructions+=5;NFSU2_TR(0x5daada);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5daadd:{NFSU2_TR(0x5daadd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5daade:{NFSU2_TR(0x5daade);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5daae0:{NFSU2_TR(0x5daae0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5daae2:{NFSU2_TR(0x5daae2);
if(r1(R+518)){{goto L5dab13;}}
}
B5daae4:L5daae4:{c.instructions+=3;NFSU2_TR(0x5daae4);
__builtin_memmove((R+4),gp(0x870818),4);
}
B5daaea:{NFSU2_TR(0x5daaea);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5daaec:{NFSU2_TR(0x5daaec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dab13;}}
}
B5daaee:L5daaee:{c.instructions+=2;NFSU2_TR(0x5daaee);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+4)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5daaf4:{NFSU2_TR(0x5daaf4);
if(r1(R+518)){{goto L5dab13;}}
}
B5daaf6:L5daaf6:{c.instructions+=2;NFSU2_TR(0x5daaf6);
s1(0x82da51,u8(0x1ull));
}
B5daafd:{NFSU2_TR(0x5daafd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dab02ull));
TAIL_STATIC(0x4022c0u,402);
}
B5dab02:L5dab02:{c.instructions+=3;NFSU2_TR(0x5dab02);
__builtin_memmove((R+0),gp(0x870818),4);
}
B5dab07:{NFSU2_TR(0x5dab07);
__builtin_memmove(gp(0x82da51),(R+12),1);
}
B5dab0d:{NFSU2_TR(0x5dab0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dab13:L5dab13:{c.instructions+=4;NFSU2_TR(0x5dab13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dab16:{NFSU2_TR(0x5dab16);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dab17:{NFSU2_TR(0x5dab17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dab1a:{NFSU2_TR(0x5dab1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dab1full));
TAIL_STATIC(0x440540u,440);
}
B5dab1f:L5dab1f:{c.instructions+=8;NFSU2_TR(0x5dab1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dab22:{NFSU2_TR(0x5dab22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dab25:{NFSU2_TR(0x5dab25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dab28:{NFSU2_TR(0x5dab28);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dab2b:{NFSU2_TR(0x5dab2b);
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5dab2e:{NFSU2_TR(0x5dab2e);
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
B5dab2f:{NFSU2_TR(0x5dab2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dab32:{NFSU2_TR(0x5dab32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5dab33:L5dab33:{c.instructions+=3;NFSU2_TR(0x5dab33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dab34:{NFSU2_TR(0x5dab34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dab35:{NFSU2_TR(0x5dab35);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dab40:L5dab40:{c.instructions+=11;NFSU2_TR(0x5dab40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dab41:{NFSU2_TR(0x5dab41);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5dab45:{NFSU2_TR(0x5dab45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dab48:{NFSU2_TR(0x5dab48);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dab49:{NFSU2_TR(0x5dab49);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dab4a:{NFSU2_TR(0x5dab4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dab4d:{NFSU2_TR(0x5dab4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dab50:{NFSU2_TR(0x5dab50);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dab51:{NFSU2_TR(0x5dab51);
__builtin_memmove((R+28),(R+4),4);
}
B5dab53:{NFSU2_TR(0x5dab53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5dab5a:{NFSU2_TR(0x5dab5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dab5full));
TAIL_STATIC(0x4022c0u,402);
}
B5dab5f:L5dab5f:{c.instructions+=12;NFSU2_TR(0x5dab5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dab62:{NFSU2_TR(0x5dab62);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dab65:{NFSU2_TR(0x5dab65);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5dab68:{NFSU2_TR(0x5dab68);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B5dab69:{NFSU2_TR(0x5dab69);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5dab6a:{NFSU2_TR(0x5dab6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dab6d:{NFSU2_TR(0x5dab6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dab70:{NFSU2_TR(0x5dab70);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5dab73:{NFSU2_TR(0x5dab73);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dab75:{NFSU2_TR(0x5dab75);
__builtin_memmove((R+4),gp(0x7fb708),4);
}
B5dab7b:{NFSU2_TR(0x5dab7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dab7e:{NFSU2_TR(0x5dab7e);
if(r1(R+518)){{goto L5dabad;}}
}
B5dab80:L5dab80:{c.instructions+=7;NFSU2_TR(0x5dab80);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5dab84:{NFSU2_TR(0x5dab84);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5dab85:{NFSU2_TR(0x5dab85);
w4(R+4,u32(0x64ull));
}
B5dab8a:{NFSU2_TR(0x5dab8a);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5dab8a);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5dab8a);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B5dab8c:{NFSU2_TR(0x5dab8c);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x40ull))));
}
B5dab8e:{NFSU2_TR(0x5dab8e);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x41ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B5dab90:{NFSU2_TR(0x5dab90);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5daba5;}}
}
B5dab92:L5dab92:{c.instructions+=2;NFSU2_TR(0x5dab92);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x54ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x54ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dab94:{NFSU2_TR(0x5dab94);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5daba5;}}
}
B5dab96:L5dab96:{c.instructions+=3;NFSU2_TR(0x5dab96);
__builtin_memmove((R+0),gp(0x800dfc),4);
}
B5dab9b:{NFSU2_TR(0x5dab9b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5dab9d:{NFSU2_TR(0x5dab9d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5daba5;}}
}
B5dab9f:L5dab9f:{c.instructions+=3;NFSU2_TR(0x5dab9f);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+0))));
}
B5daba1:{NFSU2_TR(0x5daba1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5daba3:{NFSU2_TR(0x5daba3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5dabad;}}
}
B5daba5:L5daba5:{c.instructions+=3;NFSU2_TR(0x5daba5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5daba6:{NFSU2_TR(0x5daba6);
__builtin_memmove((R+4),(R+28),4);
}
B5daba8:{NFSU2_TR(0x5daba8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dabadull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5daa40u);}goto L5daa40;}
}
B5dabad:L5dabad:{c.instructions+=2;NFSU2_TR(0x5dabad);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B5dabb1:{NFSU2_TR(0x5dabb1);
if(r1(R+518)){{goto L5dabd1;}}
}
B5dabb3:L5dabb3:{c.instructions+=7;NFSU2_TR(0x5dabb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dabb9:{NFSU2_TR(0x5dabb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dabbf:{NFSU2_TR(0x5dabbf);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5dabc0:{NFSU2_TR(0x5dabc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dabc6:{NFSU2_TR(0x5dabc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dabc9:{NFSU2_TR(0x5dabc9);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B5dabcb:{NFSU2_TR(0x5dabcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dabd1:L5dabd1:{c.instructions+=2;NFSU2_TR(0x5dabd1);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B5dabd5:{NFSU2_TR(0x5dabd5);
if(r1(R+518)){{goto L5dabf5;}}
}
B5dabd7:L5dabd7:{c.instructions+=7;NFSU2_TR(0x5dabd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dabdd:{NFSU2_TR(0x5dabdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x144ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dabe3:{NFSU2_TR(0x5dabe3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5dabe4:{NFSU2_TR(0x5dabe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dabea:{NFSU2_TR(0x5dabea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dabed:{NFSU2_TR(0x5dabed);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+8)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5dabef:{NFSU2_TR(0x5dabef);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x144ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dabf5:L5dabf5:{c.instructions+=3;NFSU2_TR(0x5dabf5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dabf6:{NFSU2_TR(0x5dabf6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dabf7:{NFSU2_TR(0x5dabf7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dac00:L5dac00:{c.instructions+=5;NFSU2_TR(0x5dac00);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dac03:{NFSU2_TR(0x5dac03);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dac04:{NFSU2_TR(0x5dac04);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5dac06:{NFSU2_TR(0x5dac06);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dac08:{NFSU2_TR(0x5dac08);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5dac36;}}
}
B5dac0a:L5dac0a:{c.instructions+=3;NFSU2_TR(0x5dac0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5dac0c:{NFSU2_TR(0x5dac0c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dac0d:{NFSU2_TR(0x5dac0d);
__builtin_memmove((R+4),(R+4),4);
}
B5dac10:L5dac10:{c.instructions+=2;NFSU2_TR(0x5dac10);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5dac14:{NFSU2_TR(0x5dac14);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dac2b;}}
}
B5dac16:L5dac16:{c.instructions+=3;NFSU2_TR(0x5dac16);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5dac19:{NFSU2_TR(0x5dac19);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dac1b:{NFSU2_TR(0x5dac1b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dac2b;}}
}
B5dac1d:L5dac1d:{c.instructions+=2;NFSU2_TR(0x5dac1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dac1f:{NFSU2_TR(0x5dac1f);
if(r1(R+518)){{goto L5dac29;}}
}
B5dac21:L5dac21:{c.instructions+=3;NFSU2_TR(0x5dac21);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5dac24:{NFSU2_TR(0x5dac24);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+8)));
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5dac27:{NFSU2_TR(0x5dac27);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5dac2b;}}
}
B5dac29:L5dac29:{c.instructions+=1;NFSU2_TR(0x5dac29);
__builtin_memmove((R+24),(R+0),4);
}
B5dac2b:L5dac2b:{c.instructions+=3;NFSU2_TR(0x5dac2b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
}
B5dac2e:{NFSU2_TR(0x5dac2e);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5dac2f:{NFSU2_TR(0x5dac2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dac10u);}goto L5dac10;}}
}
B5dac31:L5dac31:{c.instructions+=3;NFSU2_TR(0x5dac31);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dac33:{NFSU2_TR(0x5dac33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5dac34:{NFSU2_TR(0x5dac34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dac3a;}}
}
B5dac36:L5dac36:{c.instructions+=3;NFSU2_TR(0x5dac36);
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
B5dac38:{NFSU2_TR(0x5dac38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dac39:{NFSU2_TR(0x5dac39);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dac3a:L5dac3a:{c.instructions+=2;NFSU2_TR(0x5dac3a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dac3b:{NFSU2_TR(0x5dac3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dac40ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5daac0u);}goto L5daac0;}
}
B5dac40:L5dac40:{c.instructions+=3;NFSU2_TR(0x5dac40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dac43:{NFSU2_TR(0x5dac43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dac44:{NFSU2_TR(0x5dac44);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dac50:L5dac50:{c.instructions+=6;NFSU2_TR(0x5dac50);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x184ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dac56:{NFSU2_TR(0x5dac56);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dac57:{NFSU2_TR(0x5dac57);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5dac59:{NFSU2_TR(0x5dac59);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5dac5b:{NFSU2_TR(0x5dac5b);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B5dac5d:{NFSU2_TR(0x5dac5d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5dac99;}}
}
B5dac5f:L5dac5f:{c.instructions+=4;NFSU2_TR(0x5dac5f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dac60:{NFSU2_TR(0x5dac60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dac61:{NFSU2_TR(0x5dac61);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x188ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dac67:{NFSU2_TR(0x5dac67);
{goto L5dac70;}
}
B5dac70:L5dac70:{c.instructions+=10;NFSU2_TR(0x5dac70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5dac72:{NFSU2_TR(0x5dac72);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5dac78:{NFSU2_TR(0x5dac78);
u8 U[16];
w4(U+0,u32(u32(u32(0x29cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5dac7f:{NFSU2_TR(0x5dac7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5dac85:{NFSU2_TR(0x5dac85);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5dac89:{NFSU2_TR(0x5dac89);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x184ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dac8f:{NFSU2_TR(0x5dac8f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5dac90:{NFSU2_TR(0x5dac90);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5dac93:{NFSU2_TR(0x5dac93);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B5dac95:{NFSU2_TR(0x5dac95);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dac70u);}goto L5dac70;}}
}
B5dac97:L5dac97:{c.instructions+=2;NFSU2_TR(0x5dac97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dac98:{NFSU2_TR(0x5dac98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5dac99:L5dac99:{c.instructions+=4;NFSU2_TR(0x5dac99);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x184ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dac9f:{NFSU2_TR(0x5dac9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x180ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5daca5:{NFSU2_TR(0x5daca5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5daca6:{NFSU2_TR(0x5daca6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dacb0:L5dacb0:{c.instructions+=7;NFSU2_TR(0x5dacb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dacb4:{NFSU2_TR(0x5dacb4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dacb5:{NFSU2_TR(0x5dacb5);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5dacb7:{NFSU2_TR(0x5dacb7);
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
B5dacb9:{NFSU2_TR(0x5dacb9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dacba:{NFSU2_TR(0x5dacba);
__builtin_memmove((R+28),(R+4),4);
}
B5dacbc:{NFSU2_TR(0x5dacbc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5dad9f;}}
}
B5dacc2:L5dacc2:{c.instructions+=3;NFSU2_TR(0x5dacc2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dacc3:{NFSU2_TR(0x5dacc3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dacc4:{NFSU2_TR(0x5dacc4);
{goto L5dacd0;}
}
B5dacd0:L5dacd0:{c.instructions+=3;NFSU2_TR(0x5dacd0);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7c0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dacd7:{NFSU2_TR(0x5dacd7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dacdb:{NFSU2_TR(0x5dacdb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dad01;}}
}
B5dacdd:L5dacdd:{c.instructions+=8;NFSU2_TR(0x5dacdd);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+24,u32(s32(s16(r2(U+8)))));
}
B5dace1:{NFSU2_TR(0x5dace1);
__builtin_memmove((R+0),(R+24),4);
}
B5dace3:{NFSU2_TR(0x5dace3);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5dace4:{NFSU2_TR(0x5dace4);
w4(R+12,u32(0x64ull));
}
B5dace9:{NFSU2_TR(0x5dace9);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5dace9);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5dace9);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B5daceb:{NFSU2_TR(0x5daceb);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x40ull))));
}
B5daced:{NFSU2_TR(0x5daced);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x59ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dacef:{NFSU2_TR(0x5dacef);
if(r1(R+518)){{goto L5dacf5;}}
}
B5dacf1:L5dacf1:{c.instructions+=2;NFSU2_TR(0x5dacf1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x58ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dacf3:{NFSU2_TR(0x5dacf3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dacfd;}}
}
B5dacf5:L5dacf5:{c.instructions+=2;NFSU2_TR(0x5dacf5);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x32ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x32ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5dacf8:{NFSU2_TR(0x5dacf8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5dacfd;}}
}
B5dacfa:L5dacfa:{c.instructions+=1;NFSU2_TR(0x5dacfa);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x32ull))));
}
B5dacfd:L5dacfd:{c.instructions+=1;NFSU2_TR(0x5dacfd);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),2);
s2(u32(r4(U+4)),r2(U+8));
}
B5dad01:L5dad01:{c.instructions+=4;NFSU2_TR(0x5dad01);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dad04:{NFSU2_TR(0x5dad04);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5dad06:{NFSU2_TR(0x5dad06);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dad08:{NFSU2_TR(0x5dad08);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5dad90;}}
}
B5dad0e:L5dad0e:{c.instructions+=2;NFSU2_TR(0x5dad0e);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+4),(U+8),2);
}
B5dad12:{NFSU2_TR(0x5dad12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5dad14:L5dad14:{c.instructions+=2;NFSU2_TR(0x5dad14);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+4))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5dad18:{NFSU2_TR(0x5dad18);
if(r1(R+518)){{goto L5dad27;}}
}
B5dad1a:L5dad1a:{c.instructions+=5;NFSU2_TR(0x5dad1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5dad1d:{NFSU2_TR(0x5dad1d);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5dad1e:{NFSU2_TR(0x5dad1e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
}
B5dad21:{NFSU2_TR(0x5dad21);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5dad23:{NFSU2_TR(0x5dad23);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dad14u);}goto L5dad14;}}
}
B5dad25:L5dad25:{c.instructions+=1;NFSU2_TR(0x5dad25);
{goto L5dad90;}
}
B5dad27:L5dad27:{c.instructions+=5;NFSU2_TR(0x5dad27);
__builtin_memmove((R+4),gp(0x7fb708),4);
}
B5dad2d:{NFSU2_TR(0x5dad2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dad30:{NFSU2_TR(0x5dad30);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5dad33:{NFSU2_TR(0x5dad33);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dad35:{NFSU2_TR(0x5dad35);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dad4a;}}
}
B5dad37:L5dad37:{c.instructions+=3;NFSU2_TR(0x5dad37);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dad3d:{NFSU2_TR(0x5dad3d);
u8 U[16];
w4(U+0,u32(u32(u32(0x29cull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5dad44:{NFSU2_TR(0x5dad44);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5dad4a:L5dad4a:{c.instructions+=8;NFSU2_TR(0x5dad4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5dad4e:{NFSU2_TR(0x5dad4e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5dad51:{NFSU2_TR(0x5dad51);
__builtin_memmove((R+4),(R+24),4);
}
B5dad53:{NFSU2_TR(0x5dad53);
w4(R+12,u32(0x1ull));
}
B5dad58:{NFSU2_TR(0x5dad58);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B5dad5a:{NFSU2_TR(0x5dad5a);
w4(R+4,u32(s32(s8(r1(R+8)))));
}
B5dad5d:{NFSU2_TR(0x5dad5d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dad5f:{NFSU2_TR(0x5dad5f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dad90;}}
}
B5dad61:L5dad61:{c.instructions+=8;NFSU2_TR(0x5dad61);
__builtin_memmove((R+4),(R+24),4);
}
B5dad63:{NFSU2_TR(0x5dad63);
w1(R+12,u8(0x1ull));
}
B5dad65:{NFSU2_TR(0x5dad65);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w1(R+12,shl<u8>(r1(R+12),u64(r1(U+0))));
}
B5dad67:{NFSU2_TR(0x5dad67);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dad6a:{NFSU2_TR(0x5dad6a);
w1(R+12,u8(u32(r1(R+12))|u32(r1(R+8))));
}
B5dad6c:{NFSU2_TR(0x5dad6c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dad6f:{NFSU2_TR(0x5dad6f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5dad72:{NFSU2_TR(0x5dad72);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5dad90;}}
}
B5dad74:L5dad74:{c.instructions+=7;NFSU2_TR(0x5dad74);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x5cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B5dad77:{NFSU2_TR(0x5dad77);
u8 U[16];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5dad7e:{NFSU2_TR(0x5dad7e);
u8 U[12];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5dad85:{NFSU2_TR(0x5dad85);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5dad88:{NFSU2_TR(0x5dad88);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dad8b:{NFSU2_TR(0x5dad8b);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B5dad8d:{NFSU2_TR(0x5dad8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dad90:L5dad90:{c.instructions+=4;NFSU2_TR(0x5dad90);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dad94:{NFSU2_TR(0x5dad94);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5dad95:{NFSU2_TR(0x5dad95);
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
B5dad97:{NFSU2_TR(0x5dad97);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dacd0u);}goto L5dacd0;}}
}
B5dad9d:L5dad9d:{c.instructions+=2;NFSU2_TR(0x5dad9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dad9e:{NFSU2_TR(0x5dad9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5dad9f:L5dad9f:{c.instructions+=3;NFSU2_TR(0x5dad9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dada0:{NFSU2_TR(0x5dada0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5dada1:{NFSU2_TR(0x5dada1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dadb0:L5dadb0:{c.instructions+=13;NFSU2_TR(0x5dadb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B5dadb3:{NFSU2_TR(0x5dadb3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dadb4:{NFSU2_TR(0x5dadb4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5dadb6:{NFSU2_TR(0x5dadb6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dadb7:{NFSU2_TR(0x5dadb7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dadb8:{NFSU2_TR(0x5dadb8);
__builtin_memmove((R+24),(R+4),4);
}
B5dadba:{NFSU2_TR(0x5dadba);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dadbe:{NFSU2_TR(0x5dadbe);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dadc2:{NFSU2_TR(0x5dadc2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dadc6:{NFSU2_TR(0x5dadc6);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5dadcd:{NFSU2_TR(0x5dadcd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dadce:{NFSU2_TR(0x5dadce);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dadd2:{NFSU2_TR(0x5dadd2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5daee0;}}
}
B5dadd8:L5dadd8:{c.instructions+=3;NFSU2_TR(0x5dadd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5daddb:{NFSU2_TR(0x5daddb);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B5dadde:{NFSU2_TR(0x5dadde);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5daee0;}}
}
B5dade4:L5dade4:{c.instructions+=4;NFSU2_TR(0x5dade4);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(s32(s8(r1(U+4)))));
}
B5dade8:{NFSU2_TR(0x5dade8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5dadea:{NFSU2_TR(0x5dadea);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dadec:{NFSU2_TR(0x5dadec);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5dae08;}}
}
B5dadee:L5dadee:{c.instructions+=1;NFSU2_TR(0x5dadee);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5dadf1:L5dadf1:{c.instructions+=3;NFSU2_TR(0x5dadf1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5dadf3:{NFSU2_TR(0x5dadf3);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5dadf7:{NFSU2_TR(0x5dadf7);
if(r1(R+518)){{goto L5dae08;}}
}
B5dadf9:L5dadf9:{c.instructions+=3;NFSU2_TR(0x5dadf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5dadfc:{NFSU2_TR(0x5dadfc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dadfe:{NFSU2_TR(0x5dadfe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dae08;}}
}
B5dae00:L5dae00:{c.instructions+=4;NFSU2_TR(0x5dae00);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5dae01:{NFSU2_TR(0x5dae01);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B5dae04:{NFSU2_TR(0x5dae04);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5dae06:{NFSU2_TR(0x5dae06);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dadf1u);}goto L5dadf1;}}
}
B5dae08:L5dae08:{c.instructions+=2;NFSU2_TR(0x5dae08);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dae0a:{NFSU2_TR(0x5dae0a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5daecd;}}
}
B5dae10:L5dae10:{c.instructions+=6;NFSU2_TR(0x5dae10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dae16:{NFSU2_TR(0x5dae16);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dae19:{NFSU2_TR(0x5dae19);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5dae1c:{NFSU2_TR(0x5dae1c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5dae1e:{NFSU2_TR(0x5dae1e);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dae20:{NFSU2_TR(0x5dae20);
if(r1(R+518)){{goto L5dae38;}}
}
B5dae22:L5dae22:{c.instructions+=3;NFSU2_TR(0x5dae22);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5dae25:{NFSU2_TR(0x5dae25);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dae27:{NFSU2_TR(0x5dae27);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dae32;}}
}
B5dae29:L5dae29:{c.instructions+=3;NFSU2_TR(0x5dae29);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dae2c:{NFSU2_TR(0x5dae2c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dae2e:{NFSU2_TR(0x5dae2e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5dae32;}}
}
B5dae30:L5dae30:{c.instructions+=1;NFSU2_TR(0x5dae30);
__builtin_memmove((R+12),(R+8),4);
}
B5dae32:L5dae32:{c.instructions+=3;NFSU2_TR(0x5dae32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5dae34:{NFSU2_TR(0x5dae34);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dae36:{NFSU2_TR(0x5dae36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dae22u);}goto L5dae22;}}
}
B5dae38:L5dae38:{c.instructions+=3;NFSU2_TR(0x5dae38);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dae3b:{NFSU2_TR(0x5dae3b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dae3d:{NFSU2_TR(0x5dae3d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5daecd;}}
}
B5dae43:L5dae43:{c.instructions+=7;NFSU2_TR(0x5dae43);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dae45:{NFSU2_TR(0x5dae45);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dae47:{NFSU2_TR(0x5dae47);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dae49:{NFSU2_TR(0x5dae49);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5dae4c:{NFSU2_TR(0x5dae4c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dae4d:{NFSU2_TR(0x5dae4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dae4e:{NFSU2_TR(0x5dae4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dae53ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5da4a0u);}goto L5da4a0;}
}
B5dae53:L5dae53:{c.instructions+=4;NFSU2_TR(0x5dae53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dae59:{NFSU2_TR(0x5dae59);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dae5a:{NFSU2_TR(0x5dae5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dae5e:{NFSU2_TR(0x5dae5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dae63ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5da6d0u);}goto L5da6d0;}
}
B5dae63:L5dae63:{c.instructions+=4;NFSU2_TR(0x5dae63);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5dae66:{NFSU2_TR(0x5dae66);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5dae68:{NFSU2_TR(0x5dae68);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dae6a:{NFSU2_TR(0x5dae6a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5daec0;}}
}
B5dae6c:L5dae6c:{c.instructions+=2;NFSU2_TR(0x5dae6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x16ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dae6f:{NFSU2_TR(0x5dae6f);
}
B5dae70:L5dae70:{c.instructions+=18;NFSU2_TR(0x5dae70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dae73:{NFSU2_TR(0x5dae73);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dae77:{NFSU2_TR(0x5dae77);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dae7a:{NFSU2_TR(0x5dae7a);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+4,u32(s32(s16(r2(U+0)))));
}
B5dae7d:{NFSU2_TR(0x5dae7d);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5dae80:{NFSU2_TR(0x5dae80);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B5dae82:{NFSU2_TR(0x5dae82);
__builtin_memmove((R+8),(R+4),4);
}
B5dae84:{NFSU2_TR(0x5dae84);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dae85:{NFSU2_TR(0x5dae85);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dae87:{NFSU2_TR(0x5dae87);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dae8a:{NFSU2_TR(0x5dae8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dae8e:{NFSU2_TR(0x5dae8e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dae90:{NFSU2_TR(0x5dae90);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5dae97:{NFSU2_TR(0x5dae97);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dae9a:{NFSU2_TR(0x5dae9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5daea0:{NFSU2_TR(0x5daea0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5daea1:{NFSU2_TR(0x5daea1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5daea2:{NFSU2_TR(0x5daea2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5daea7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5da4a0u);}goto L5da4a0;}
}
B5daea7:L5daea7:{c.instructions+=8;NFSU2_TR(0x5daea7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5daeab:{NFSU2_TR(0x5daeab);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B5daeaf:{NFSU2_TR(0x5daeaf);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5daeb0:{NFSU2_TR(0x5daeb0);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5daeb1:{NFSU2_TR(0x5daeb1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B5daeb4:{NFSU2_TR(0x5daeb4);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5daeb6:{NFSU2_TR(0x5daeb6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5daeba:{NFSU2_TR(0x5daeba);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dae70u);}goto L5dae70;}}
}
B5daebc:L5daebc:{c.instructions+=1;NFSU2_TR(0x5daebc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5daec0:L5daec0:{c.instructions+=4;NFSU2_TR(0x5daec0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5daec4:{NFSU2_TR(0x5daec4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5daec7:{NFSU2_TR(0x5daec7);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B5daec9:{NFSU2_TR(0x5daec9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5daecd:L5daecd:{c.instructions+=5;NFSU2_TR(0x5daecd);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5daed1:{NFSU2_TR(0x5daed1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5daed4:{NFSU2_TR(0x5daed4);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B5daed8:{NFSU2_TR(0x5daed8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B5daeda:{NFSU2_TR(0x5daeda);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dade4u);}goto L5dade4;}}
}
B5daee0:L5daee0:{c.instructions+=4;NFSU2_TR(0x5daee0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5daee6:{NFSU2_TR(0x5daee6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5daee8:{NFSU2_TR(0x5daee8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5daef0:{NFSU2_TR(0x5daef0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5dafea;}}
}
B5daef6:L5daef6:{c.instructions+=2;NFSU2_TR(0x5daef6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x29cull))));
__builtin_memmove((R+20),(U+0),4);
}
B5daefc:{NFSU2_TR(0x5daefc);
__builtin_memmove((R+16),(R+16),4);
}
B5daf00:L5daf00:{c.instructions+=4;NFSU2_TR(0x5daf00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5daf03:{NFSU2_TR(0x5daf03);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5daf06:{NFSU2_TR(0x5daf06);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5daf08:{NFSU2_TR(0x5daf08);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dafd0;}}
}
B5daf0e:L5daf0e:{c.instructions+=12;NFSU2_TR(0x5daf0e);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B5daf12:{NFSU2_TR(0x5daf12);
w4(R+8,u32(s32(s16(r2(R+4)))));
}
B5daf15:{NFSU2_TR(0x5daf15);
w4(R+0,u32(0x51eb851full));
}
B5daf1a:{NFSU2_TR(0x5daf1a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5daf1c:{NFSU2_TR(0x5daf1c);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B5daf1f:{NFSU2_TR(0x5daf1f);
__builtin_memmove((R+0),(R+8),4);
}
B5daf21:{NFSU2_TR(0x5daf21);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5daf24:{NFSU2_TR(0x5daf24);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B5daf26:{NFSU2_TR(0x5daf26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5daf2c:{NFSU2_TR(0x5daf2c);
w1(R+8,u8(u32(r1(R+8))+u32(u8(0x40ull))));
}
B5daf2f:{NFSU2_TR(0x5daf2f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5daf32:{NFSU2_TR(0x5daf32);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5daf4e;}}
}
B5daf34:L5daf34:{c.instructions+=2;NFSU2_TR(0x5daf34);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x59ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5daf37:{NFSU2_TR(0x5daf37);
if(r1(R+518)){{goto L5daf4e;}}
}
B5daf39:L5daf39:{c.instructions+=2;NFSU2_TR(0x5daf39);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x9c4ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B5daf3e:{NFSU2_TR(0x5daf3e);
if(r1(R+518)){{goto L5daf5c;}}
}
B5daf40:L5daf40:{c.instructions+=2;NFSU2_TR(0x5daf40);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x960ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B5daf45:{NFSU2_TR(0x5daf45);
if(r1(R+518)){{goto L5daf5c;}}
}
B5daf47:L5daf47:{c.instructions+=2;NFSU2_TR(0x5daf47);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xa28ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B5daf4c:{NFSU2_TR(0x5daf4c);
{goto L5daf56;}
}
B5daf4e:L5daf4e:{c.instructions+=2;NFSU2_TR(0x5daf4e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5daf51:{NFSU2_TR(0x5daf51);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5daf5c;}}
}
B5daf53:L5daf53:{c.instructions+=1;NFSU2_TR(0x5daf53);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x58ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5daf56:L5daf56:{c.instructions+=1;NFSU2_TR(0x5daf56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dafd0;}}
}
B5daf5c:L5daf5c:{c.instructions+=7;NFSU2_TR(0x5daf5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5daf5f:{NFSU2_TR(0x5daf5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5daf63:{NFSU2_TR(0x5daf63);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B5daf65:{NFSU2_TR(0x5daf65);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5daf67:{NFSU2_TR(0x5daf67);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5daf6b:{NFSU2_TR(0x5daf6b);
__builtin_memmove((R+12),(R+4),4);
}
B5daf6d:{NFSU2_TR(0x5daf6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5daf72ull));
TAIL_STATIC(0x43e910u,43e);
}
B5daf72:L5daf72:{c.instructions+=3;NFSU2_TR(0x5daf72);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5daf75:{NFSU2_TR(0x5daf75);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5daf77:{NFSU2_TR(0x5daf77);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5dafbf;}}
}
B5daf79:L5daf79:{c.instructions+=3;NFSU2_TR(0x5daf79);
u8 U[4];
w4(U+0,u32(0x2011ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5daf7e:{NFSU2_TR(0x5daf7e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5daf7f:{NFSU2_TR(0x5daf7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5daf84ull));
TAIL_STATIC(0x440820u,440);
}
B5daf84:L5daf84:{c.instructions+=4;NFSU2_TR(0x5daf84);
__builtin_memmove((R+12),(R+0),4);
}
B5daf86:{NFSU2_TR(0x5daf86);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5daf89:{NFSU2_TR(0x5daf89);
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
B5daf8b:{NFSU2_TR(0x5daf8b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5daf92;}}
}
B5daf8d:L5daf8d:{c.instructions+=1;NFSU2_TR(0x5daf8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5daf92ull));
TAIL_STATIC(0x43bd50u,43b);
}
B5daf92:L5daf92:{c.instructions+=7;NFSU2_TR(0x5daf92);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5daf96:{NFSU2_TR(0x5daf96);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5daf97:{NFSU2_TR(0x5daf97);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5daf9a:{NFSU2_TR(0x5daf9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5daf9d:{NFSU2_TR(0x5daf9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5dafa4:{NFSU2_TR(0x5dafa4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dafa8:{NFSU2_TR(0x5dafa8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5dafd0;}}
}
B5dafaa:L5dafaa:{c.instructions+=8;NFSU2_TR(0x5dafaa);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dafae:{NFSU2_TR(0x5dafae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dafaf:{NFSU2_TR(0x5dafaf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5dafb6:{NFSU2_TR(0x5dafb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dafb7:{NFSU2_TR(0x5dafb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5dafb8:{NFSU2_TR(0x5dafb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5dafb9:{NFSU2_TR(0x5dafb9);
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
B5dafbc:{NFSU2_TR(0x5dafbc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dafbf:L5dafbf:{c.instructions+=6;NFSU2_TR(0x5dafbf);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dafc3:{NFSU2_TR(0x5dafc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dafc6:{NFSU2_TR(0x5dafc6);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B5dafc8:{NFSU2_TR(0x5dafc8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5dafc9:{NFSU2_TR(0x5dafc9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dafcd:{NFSU2_TR(0x5dafcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dafd0:L5dafd0:{c.instructions+=7;NFSU2_TR(0x5dafd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dafd4:{NFSU2_TR(0x5dafd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dafda:{NFSU2_TR(0x5dafda);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5dafdb:{NFSU2_TR(0x5dafdb);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B5dafde:{NFSU2_TR(0x5dafde);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5dafe0:{NFSU2_TR(0x5dafe0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dafe4:{NFSU2_TR(0x5dafe4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5daf00u);}goto L5daf00;}}
}
B5dafea:L5dafea:{c.instructions+=8;NFSU2_TR(0x5dafea);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dafee:{NFSU2_TR(0x5dafee);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5daff2:{NFSU2_TR(0x5daff2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5daff3:{NFSU2_TR(0x5daff3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5daffa:{NFSU2_TR(0x5daffa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5daffb:{NFSU2_TR(0x5daffb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5daffc:{NFSU2_TR(0x5daffc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5daffe:{NFSU2_TR(0x5daffe);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
TAIL_STATIC(0x5db002u,5db);
}
XIT:NFSU2_TR_EXIT(0x5da,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
