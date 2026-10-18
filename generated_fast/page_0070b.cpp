#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_70c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x70b,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x70b,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_70b(u8* __restrict R,Cpu& c);
u32 page_70b(Cpu& c){return body_70b(c.regs.data(),c);}
__attribute__((noinline)) u32 body_70b(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x70b004:goto L70b004;
case 0x70b007:c.instructions+=22;goto B70b007;
case 0x70b00a:c.instructions+=21;goto B70b00a;
case 0x70b00d:c.instructions+=20;goto B70b00d;
case 0x70b010:c.instructions+=19;goto B70b010;
case 0x70b013:c.instructions+=18;goto B70b013;
case 0x70b019:c.instructions+=17;goto B70b019;
case 0x70b01c:c.instructions+=16;goto B70b01c;
case 0x70b01f:c.instructions+=15;goto B70b01f;
case 0x70b022:c.instructions+=14;goto B70b022;
case 0x70b025:c.instructions+=13;goto B70b025;
case 0x70b028:c.instructions+=12;goto B70b028;
case 0x70b02b:c.instructions+=11;goto B70b02b;
case 0x70b02d:c.instructions+=10;goto B70b02d;
case 0x70b030:c.instructions+=9;goto B70b030;
case 0x70b033:c.instructions+=8;goto B70b033;
case 0x70b03a:c.instructions+=7;goto B70b03a;
case 0x70b03b:c.instructions+=6;goto B70b03b;
case 0x70b03d:c.instructions+=5;goto B70b03d;
case 0x70b03f:c.instructions+=4;goto B70b03f;
case 0x70b042:c.instructions+=3;goto B70b042;
case 0x70b045:c.instructions+=2;goto B70b045;
case 0x70b048:c.instructions+=1;goto B70b048;
case 0x70b04e:goto L70b04e;
case 0x70b04f:c.instructions+=2;goto B70b04f;
case 0x70b050:c.instructions+=1;goto B70b050;
case 0x70b056:goto L70b056;
case 0x70b057:c.instructions+=4;goto B70b057;
case 0x70b058:c.instructions+=3;goto B70b058;
case 0x70b05b:c.instructions+=2;goto B70b05b;
case 0x70b05e:c.instructions+=1;goto B70b05e;
case 0x70b060:goto L70b060;
case 0x70b062:goto L70b062;
case 0x70b065:c.instructions+=2;goto B70b065;
case 0x70b067:c.instructions+=1;goto B70b067;
case 0x70b069:goto L70b069;
case 0x70b06a:c.instructions+=1;goto B70b06a;
case 0x70b06c:goto L70b06c;
case 0x70b06d:c.instructions+=1;goto B70b06d;
case 0x70b073:goto L70b073;
case 0x70b079:c.instructions+=13;goto B70b079;
case 0x70b07f:c.instructions+=12;goto B70b07f;
case 0x70b085:c.instructions+=11;goto B70b085;
case 0x70b08b:c.instructions+=10;goto B70b08b;
case 0x70b08e:c.instructions+=9;goto B70b08e;
case 0x70b094:c.instructions+=8;goto B70b094;
case 0x70b096:c.instructions+=7;goto B70b096;
case 0x70b098:c.instructions+=6;goto B70b098;
case 0x70b09b:c.instructions+=5;goto B70b09b;
case 0x70b0a1:c.instructions+=4;goto B70b0a1;
case 0x70b0a4:c.instructions+=3;goto B70b0a4;
case 0x70b0a7:c.instructions+=2;goto B70b0a7;
case 0x70b0aa:c.instructions+=1;goto B70b0aa;
case 0x70b0ac:goto L70b0ac;
case 0x70b0b2:c.instructions+=12;goto B70b0b2;
case 0x70b0b8:c.instructions+=11;goto B70b0b8;
case 0x70b0bb:c.instructions+=10;goto B70b0bb;
case 0x70b0be:c.instructions+=9;goto B70b0be;
case 0x70b0c4:c.instructions+=8;goto B70b0c4;
case 0x70b0c6:c.instructions+=7;goto B70b0c6;
case 0x70b0c8:c.instructions+=6;goto B70b0c8;
case 0x70b0cb:c.instructions+=5;goto B70b0cb;
case 0x70b0d1:c.instructions+=4;goto B70b0d1;
case 0x70b0d4:c.instructions+=3;goto B70b0d4;
case 0x70b0d7:c.instructions+=2;goto B70b0d7;
case 0x70b0da:c.instructions+=1;goto B70b0da;
case 0x70b0dc:goto L70b0dc;
case 0x70b0e2:c.instructions+=8;goto B70b0e2;
case 0x70b0e8:c.instructions+=7;goto B70b0e8;
case 0x70b0eb:c.instructions+=6;goto B70b0eb;
case 0x70b0ee:c.instructions+=5;goto B70b0ee;
case 0x70b0f4:c.instructions+=4;goto B70b0f4;
case 0x70b0f7:c.instructions+=3;goto B70b0f7;
case 0x70b0fa:c.instructions+=2;goto B70b0fa;
case 0x70b0fd:c.instructions+=1;goto B70b0fd;
case 0x70b100:goto L70b100;
case 0x70b103:goto L70b103;
case 0x70b106:c.instructions+=6;goto B70b106;
case 0x70b109:c.instructions+=5;goto B70b109;
case 0x70b10c:c.instructions+=4;goto B70b10c;
case 0x70b10e:c.instructions+=3;goto B70b10e;
case 0x70b112:c.instructions+=2;goto B70b112;
case 0x70b115:c.instructions+=1;goto B70b115;
case 0x70b117:goto L70b117;
case 0x70b11a:c.instructions+=4;goto B70b11a;
case 0x70b11b:c.instructions+=3;goto B70b11b;
case 0x70b11e:c.instructions+=2;goto B70b11e;
case 0x70b121:c.instructions+=1;goto B70b121;
case 0x70b123:goto L70b123;
case 0x70b126:c.instructions+=5;goto B70b126;
case 0x70b129:c.instructions+=4;goto B70b129;
case 0x70b12c:c.instructions+=3;goto B70b12c;
case 0x70b12d:c.instructions+=2;goto B70b12d;
case 0x70b12e:c.instructions+=1;goto B70b12e;
case 0x70b134:goto L70b134;
case 0x70b137:goto L70b137;
case 0x70b13a:c.instructions+=7;goto B70b13a;
case 0x70b13d:c.instructions+=6;goto B70b13d;
case 0x70b13f:c.instructions+=5;goto B70b13f;
case 0x70b143:c.instructions+=4;goto B70b143;
case 0x70b146:c.instructions+=3;goto B70b146;
case 0x70b149:c.instructions+=2;goto B70b149;
case 0x70b14c:c.instructions+=1;goto B70b14c;
case 0x70b14e:goto L70b14e;
case 0x70b151:c.instructions+=7;goto B70b151;
case 0x70b154:c.instructions+=6;goto B70b154;
case 0x70b155:c.instructions+=5;goto B70b155;
case 0x70b158:c.instructions+=4;goto B70b158;
case 0x70b15a:c.instructions+=3;goto B70b15a;
case 0x70b15b:c.instructions+=2;goto B70b15b;
case 0x70b15c:c.instructions+=1;goto B70b15c;
case 0x70b162:goto L70b162;
case 0x70b165:goto L70b165;
case 0x70b168:c.instructions+=7;goto B70b168;
case 0x70b16b:c.instructions+=6;goto B70b16b;
case 0x70b16d:c.instructions+=5;goto B70b16d;
case 0x70b16e:c.instructions+=4;goto B70b16e;
case 0x70b16f:c.instructions+=3;goto B70b16f;
case 0x70b170:c.instructions+=2;goto B70b170;
case 0x70b172:c.instructions+=1;goto B70b172;
case 0x70b178:goto L70b178;
case 0x70b17b:c.instructions+=10;goto B70b17b;
case 0x70b182:c.instructions+=9;goto B70b182;
case 0x70b185:c.instructions+=8;goto B70b185;
case 0x70b188:c.instructions+=7;goto B70b188;
case 0x70b189:c.instructions+=6;goto B70b189;
case 0x70b18c:c.instructions+=5;goto B70b18c;
case 0x70b18f:c.instructions+=4;goto B70b18f;
case 0x70b192:c.instructions+=3;goto B70b192;
case 0x70b193:c.instructions+=2;goto B70b193;
case 0x70b196:c.instructions+=1;goto B70b196;
case 0x70b199:goto L70b199;
case 0x70b19c:c.instructions+=5;goto B70b19c;
case 0x70b19f:c.instructions+=4;goto B70b19f;
case 0x70b1a2:c.instructions+=3;goto B70b1a2;
case 0x70b1a5:c.instructions+=2;goto B70b1a5;
case 0x70b1a8:c.instructions+=1;goto B70b1a8;
case 0x70b1aa:goto L70b1aa;
case 0x70b1ad:c.instructions+=6;goto B70b1ad;
case 0x70b1b0:c.instructions+=5;goto B70b1b0;
case 0x70b1b3:c.instructions+=4;goto B70b1b3;
case 0x70b1b6:c.instructions+=3;goto B70b1b6;
case 0x70b1b7:c.instructions+=2;goto B70b1b7;
case 0x70b1b8:c.instructions+=1;goto B70b1b8;
case 0x70b1be:goto L70b1be;
case 0x70b1c1:c.instructions+=8;goto B70b1c1;
case 0x70b1c4:c.instructions+=7;goto B70b1c4;
case 0x70b1c6:c.instructions+=6;goto B70b1c6;
case 0x70b1ca:c.instructions+=5;goto B70b1ca;
case 0x70b1cd:c.instructions+=4;goto B70b1cd;
case 0x70b1d0:c.instructions+=3;goto B70b1d0;
case 0x70b1d3:c.instructions+=2;goto B70b1d3;
case 0x70b1d6:c.instructions+=1;goto B70b1d6;
case 0x70b1d8:goto L70b1d8;
case 0x70b1db:c.instructions+=4;goto B70b1db;
case 0x70b1de:c.instructions+=3;goto B70b1de;
case 0x70b1e1:c.instructions+=2;goto B70b1e1;
case 0x70b1e2:c.instructions+=1;goto B70b1e2;
case 0x70b1e8:goto L70b1e8;
case 0x70b1eb:goto L70b1eb;
case 0x70b1ee:c.instructions+=5;goto B70b1ee;
case 0x70b1f2:c.instructions+=4;goto B70b1f2;
case 0x70b1f5:c.instructions+=3;goto B70b1f5;
case 0x70b1f8:c.instructions+=2;goto B70b1f8;
case 0x70b1fb:c.instructions+=1;goto B70b1fb;
case 0x70b1fd:goto L70b1fd;
case 0x70b200:c.instructions+=8;goto B70b200;
case 0x70b203:c.instructions+=7;goto B70b203;
case 0x70b206:c.instructions+=6;goto B70b206;
case 0x70b207:c.instructions+=5;goto B70b207;
case 0x70b20a:c.instructions+=4;goto B70b20a;
case 0x70b20e:c.instructions+=3;goto B70b20e;
case 0x70b20f:c.instructions+=2;goto B70b20f;
case 0x70b210:c.instructions+=1;goto B70b210;
case 0x70b216:goto L70b216;
case 0x70b219:goto L70b219;
case 0x70b21d:c.instructions+=4;goto B70b21d;
case 0x70b21e:c.instructions+=3;goto B70b21e;
case 0x70b221:c.instructions+=2;goto B70b221;
case 0x70b224:c.instructions+=1;goto B70b224;
case 0x70b22a:goto L70b22a;
case 0x70b22d:goto L70b22d;
case 0x70b230:c.instructions+=5;goto B70b230;
case 0x70b233:c.instructions+=4;goto B70b233;
case 0x70b236:c.instructions+=3;goto B70b236;
case 0x70b239:c.instructions+=2;goto B70b239;
case 0x70b23c:c.instructions+=1;goto B70b23c;
case 0x70b23e:goto L70b23e;
case 0x70b241:c.instructions+=8;goto B70b241;
case 0x70b243:c.instructions+=7;goto B70b243;
case 0x70b246:c.instructions+=6;goto B70b246;
case 0x70b249:c.instructions+=5;goto B70b249;
case 0x70b24c:c.instructions+=4;goto B70b24c;
case 0x70b250:c.instructions+=3;goto B70b250;
case 0x70b251:c.instructions+=2;goto B70b251;
case 0x70b252:c.instructions+=1;goto B70b252;
case 0x70b258:goto L70b258;
case 0x70b25b:c.instructions+=7;goto B70b25b;
case 0x70b25e:c.instructions+=6;goto B70b25e;
case 0x70b260:c.instructions+=5;goto B70b260;
case 0x70b264:c.instructions+=4;goto B70b264;
case 0x70b267:c.instructions+=3;goto B70b267;
case 0x70b26a:c.instructions+=2;goto B70b26a;
case 0x70b26d:c.instructions+=1;goto B70b26d;
case 0x70b26f:goto L70b26f;
case 0x70b272:c.instructions+=9;goto B70b272;
case 0x70b275:c.instructions+=8;goto B70b275;
case 0x70b278:c.instructions+=7;goto B70b278;
case 0x70b279:c.instructions+=6;goto B70b279;
case 0x70b27c:c.instructions+=5;goto B70b27c;
case 0x70b27e:c.instructions+=4;goto B70b27e;
case 0x70b280:c.instructions+=3;goto B70b280;
case 0x70b281:c.instructions+=2;goto B70b281;
case 0x70b282:c.instructions+=1;goto B70b282;
case 0x70b288:goto L70b288;
case 0x70b28b:goto L70b28b;
case 0x70b28e:c.instructions+=7;goto B70b28e;
case 0x70b291:c.instructions+=6;goto B70b291;
case 0x70b293:c.instructions+=5;goto B70b293;
case 0x70b296:c.instructions+=4;goto B70b296;
case 0x70b297:c.instructions+=3;goto B70b297;
case 0x70b298:c.instructions+=2;goto B70b298;
case 0x70b29b:c.instructions+=1;goto B70b29b;
case 0x70b2a1:goto L70b2a1;
case 0x70b2a2:c.instructions+=1;goto B70b2a2;
case 0x70b2a5:goto L70b2a5;
case 0x70b2a8:c.instructions+=5;goto B70b2a8;
case 0x70b2ab:c.instructions+=4;goto B70b2ab;
case 0x70b2ae:c.instructions+=3;goto B70b2ae;
case 0x70b2b1:c.instructions+=2;goto B70b2b1;
case 0x70b2b4:c.instructions+=1;goto B70b2b4;
case 0x70b2b6:goto L70b2b6;
case 0x70b2b9:c.instructions+=4;goto B70b2b9;
case 0x70b2bc:c.instructions+=3;goto B70b2bc;
case 0x70b2bd:c.instructions+=2;goto B70b2bd;
case 0x70b2be:c.instructions+=1;goto B70b2be;
case 0x70b2c4:goto L70b2c4;
case 0x70b2c7:c.instructions+=6;goto B70b2c7;
case 0x70b2ca:c.instructions+=5;goto B70b2ca;
case 0x70b2ce:c.instructions+=4;goto B70b2ce;
case 0x70b2d1:c.instructions+=3;goto B70b2d1;
case 0x70b2d4:c.instructions+=2;goto B70b2d4;
case 0x70b2d7:c.instructions+=1;goto B70b2d7;
case 0x70b2d9:goto L70b2d9;
case 0x70b2dc:c.instructions+=5;goto B70b2dc;
case 0x70b2df:c.instructions+=4;goto B70b2df;
case 0x70b2e2:c.instructions+=3;goto B70b2e2;
case 0x70b2e3:c.instructions+=2;goto B70b2e3;
case 0x70b2e4:c.instructions+=1;goto B70b2e4;
case 0x70b2ea:goto L70b2ea;
case 0x70b2ed:goto L70b2ed;
case 0x70b2f0:c.instructions+=6;goto B70b2f0;
case 0x70b2f3:c.instructions+=5;goto B70b2f3;
case 0x70b2f5:c.instructions+=4;goto B70b2f5;
case 0x70b2f9:c.instructions+=3;goto B70b2f9;
case 0x70b2fc:c.instructions+=2;goto B70b2fc;
case 0x70b2ff:c.instructions+=1;goto B70b2ff;
case 0x70b301:goto L70b301;
case 0x70b304:c.instructions+=7;goto B70b304;
case 0x70b307:c.instructions+=6;goto B70b307;
case 0x70b308:c.instructions+=5;goto B70b308;
case 0x70b30b:c.instructions+=4;goto B70b30b;
case 0x70b30d:c.instructions+=3;goto B70b30d;
case 0x70b30e:c.instructions+=2;goto B70b30e;
case 0x70b30f:c.instructions+=1;goto B70b30f;
case 0x70b315:goto L70b315;
case 0x70b318:goto L70b318;
case 0x70b31b:c.instructions+=6;goto B70b31b;
case 0x70b31d:c.instructions+=5;goto B70b31d;
case 0x70b31e:c.instructions+=4;goto B70b31e;
case 0x70b31f:c.instructions+=3;goto B70b31f;
case 0x70b320:c.instructions+=2;goto B70b320;
case 0x70b322:c.instructions+=1;goto B70b322;
case 0x70b328:goto L70b328;
case 0x70b32b:c.instructions+=10;goto B70b32b;
case 0x70b332:c.instructions+=9;goto B70b332;
case 0x70b335:c.instructions+=8;goto B70b335;
case 0x70b338:c.instructions+=7;goto B70b338;
case 0x70b339:c.instructions+=6;goto B70b339;
case 0x70b33c:c.instructions+=5;goto B70b33c;
case 0x70b33f:c.instructions+=4;goto B70b33f;
case 0x70b342:c.instructions+=3;goto B70b342;
case 0x70b343:c.instructions+=2;goto B70b343;
case 0x70b346:c.instructions+=1;goto B70b346;
case 0x70b349:goto L70b349;
case 0x70b34c:c.instructions+=5;goto B70b34c;
case 0x70b34f:c.instructions+=4;goto B70b34f;
case 0x70b352:c.instructions+=3;goto B70b352;
case 0x70b355:c.instructions+=2;goto B70b355;
case 0x70b358:c.instructions+=1;goto B70b358;
case 0x70b35e:goto L70b35e;
case 0x70b361:c.instructions+=6;goto B70b361;
case 0x70b364:c.instructions+=5;goto B70b364;
case 0x70b367:c.instructions+=4;goto B70b367;
case 0x70b36a:c.instructions+=3;goto B70b36a;
case 0x70b36b:c.instructions+=2;goto B70b36b;
case 0x70b36c:c.instructions+=1;goto B70b36c;
case 0x70b372:goto L70b372;
case 0x70b375:c.instructions+=6;goto B70b375;
case 0x70b378:c.instructions+=5;goto B70b378;
case 0x70b37b:c.instructions+=4;goto B70b37b;
case 0x70b37e:c.instructions+=3;goto B70b37e;
case 0x70b37f:c.instructions+=2;goto B70b37f;
case 0x70b380:c.instructions+=1;goto B70b380;
case 0x70b386:goto L70b386;
case 0x70b389:c.instructions+=8;goto B70b389;
case 0x70b38c:c.instructions+=7;goto B70b38c;
case 0x70b38e:c.instructions+=6;goto B70b38e;
case 0x70b392:c.instructions+=5;goto B70b392;
case 0x70b395:c.instructions+=4;goto B70b395;
case 0x70b398:c.instructions+=3;goto B70b398;
case 0x70b39b:c.instructions+=2;goto B70b39b;
case 0x70b39e:c.instructions+=1;goto B70b39e;
case 0x70b3a0:goto L70b3a0;
case 0x70b3a3:c.instructions+=4;goto B70b3a3;
case 0x70b3a6:c.instructions+=3;goto B70b3a6;
case 0x70b3a9:c.instructions+=2;goto B70b3a9;
case 0x70b3aa:c.instructions+=1;goto B70b3aa;
case 0x70b3b0:goto L70b3b0;
case 0x70b3b3:goto L70b3b3;
case 0x70b3b6:c.instructions+=5;goto B70b3b6;
case 0x70b3ba:c.instructions+=4;goto B70b3ba;
case 0x70b3bd:c.instructions+=3;goto B70b3bd;
case 0x70b3c0:c.instructions+=2;goto B70b3c0;
case 0x70b3c3:c.instructions+=1;goto B70b3c3;
case 0x70b3c5:goto L70b3c5;
case 0x70b3c8:c.instructions+=8;goto B70b3c8;
case 0x70b3cb:c.instructions+=7;goto B70b3cb;
case 0x70b3ce:c.instructions+=6;goto B70b3ce;
case 0x70b3cf:c.instructions+=5;goto B70b3cf;
case 0x70b3d2:c.instructions+=4;goto B70b3d2;
case 0x70b3d6:c.instructions+=3;goto B70b3d6;
case 0x70b3d7:c.instructions+=2;goto B70b3d7;
case 0x70b3d8:c.instructions+=1;goto B70b3d8;
case 0x70b3de:goto L70b3de;
case 0x70b3e1:goto L70b3e1;
case 0x70b3e5:c.instructions+=4;goto B70b3e5;
case 0x70b3e6:c.instructions+=3;goto B70b3e6;
case 0x70b3e9:c.instructions+=2;goto B70b3e9;
case 0x70b3ec:c.instructions+=1;goto B70b3ec;
case 0x70b3f2:goto L70b3f2;
case 0x70b3f5:goto L70b3f5;
case 0x70b3f8:c.instructions+=5;goto B70b3f8;
case 0x70b3fb:c.instructions+=4;goto B70b3fb;
case 0x70b3fe:c.instructions+=3;goto B70b3fe;
case 0x70b401:c.instructions+=2;goto B70b401;
case 0x70b404:c.instructions+=1;goto B70b404;
case 0x70b406:goto L70b406;
case 0x70b409:c.instructions+=9;goto B70b409;
case 0x70b40b:c.instructions+=8;goto B70b40b;
case 0x70b40e:c.instructions+=7;goto B70b40e;
case 0x70b411:c.instructions+=6;goto B70b411;
case 0x70b414:c.instructions+=5;goto B70b414;
case 0x70b416:c.instructions+=4;goto B70b416;
case 0x70b419:c.instructions+=3;goto B70b419;
case 0x70b41a:c.instructions+=2;goto B70b41a;
case 0x70b41b:c.instructions+=1;goto B70b41b;
case 0x70b421:goto L70b421;
case 0x70b424:c.instructions+=6;goto B70b424;
case 0x70b427:c.instructions+=5;goto B70b427;
case 0x70b42a:c.instructions+=4;goto B70b42a;
case 0x70b42c:c.instructions+=3;goto B70b42c;
case 0x70b42d:c.instructions+=2;goto B70b42d;
case 0x70b42e:c.instructions+=1;goto B70b42e;
case 0x70b434:goto L70b434;
case 0x70b437:c.instructions+=7;goto B70b437;
case 0x70b43a:c.instructions+=6;goto B70b43a;
case 0x70b43c:c.instructions+=5;goto B70b43c;
case 0x70b440:c.instructions+=4;goto B70b440;
case 0x70b443:c.instructions+=3;goto B70b443;
case 0x70b446:c.instructions+=2;goto B70b446;
case 0x70b449:c.instructions+=1;goto B70b449;
case 0x70b44b:goto L70b44b;
case 0x70b44e:c.instructions+=9;goto B70b44e;
case 0x70b451:c.instructions+=8;goto B70b451;
case 0x70b454:c.instructions+=7;goto B70b454;
case 0x70b455:c.instructions+=6;goto B70b455;
case 0x70b458:c.instructions+=5;goto B70b458;
case 0x70b45a:c.instructions+=4;goto B70b45a;
case 0x70b45c:c.instructions+=3;goto B70b45c;
case 0x70b45d:c.instructions+=2;goto B70b45d;
case 0x70b45e:c.instructions+=1;goto B70b45e;
case 0x70b464:goto L70b464;
case 0x70b467:goto L70b467;
case 0x70b46a:c.instructions+=5;goto B70b46a;
case 0x70b46d:c.instructions+=4;goto B70b46d;
case 0x70b46e:c.instructions+=3;goto B70b46e;
case 0x70b470:c.instructions+=2;goto B70b470;
case 0x70b473:c.instructions+=1;goto B70b473;
case 0x70b479:goto L70b479;
case 0x70b47c:c.instructions+=5;goto B70b47c;
case 0x70b47f:c.instructions+=4;goto B70b47f;
case 0x70b482:c.instructions+=3;goto B70b482;
case 0x70b485:c.instructions+=2;goto B70b485;
case 0x70b488:c.instructions+=1;goto B70b488;
case 0x70b48a:goto L70b48a;
case 0x70b48d:c.instructions+=4;goto B70b48d;
case 0x70b490:c.instructions+=3;goto B70b490;
case 0x70b491:c.instructions+=2;goto B70b491;
case 0x70b492:c.instructions+=1;goto B70b492;
case 0x70b498:goto L70b498;
case 0x70b49b:c.instructions+=6;goto B70b49b;
case 0x70b49e:c.instructions+=5;goto B70b49e;
case 0x70b4a2:c.instructions+=4;goto B70b4a2;
case 0x70b4a5:c.instructions+=3;goto B70b4a5;
case 0x70b4a8:c.instructions+=2;goto B70b4a8;
case 0x70b4ab:c.instructions+=1;goto B70b4ab;
case 0x70b4ad:goto L70b4ad;
case 0x70b4b0:c.instructions+=5;goto B70b4b0;
case 0x70b4b3:c.instructions+=4;goto B70b4b3;
case 0x70b4b6:c.instructions+=3;goto B70b4b6;
case 0x70b4b7:c.instructions+=2;goto B70b4b7;
case 0x70b4b8:c.instructions+=1;goto B70b4b8;
case 0x70b4be:goto L70b4be;
case 0x70b4c1:goto L70b4c1;
case 0x70b4c4:c.instructions+=6;goto B70b4c4;
case 0x70b4c6:c.instructions+=5;goto B70b4c6;
case 0x70b4c7:c.instructions+=4;goto B70b4c7;
case 0x70b4c8:c.instructions+=3;goto B70b4c8;
case 0x70b4c9:c.instructions+=2;goto B70b4c9;
case 0x70b4cb:c.instructions+=1;goto B70b4cb;
case 0x70b4d1:goto L70b4d1;
case 0x70b4d4:c.instructions+=7;goto B70b4d4;
case 0x70b4d5:c.instructions+=6;goto B70b4d5;
case 0x70b4d8:c.instructions+=5;goto B70b4d8;
case 0x70b4db:c.instructions+=4;goto B70b4db;
case 0x70b4de:c.instructions+=3;goto B70b4de;
case 0x70b4df:c.instructions+=2;goto B70b4df;
case 0x70b4e2:c.instructions+=1;goto B70b4e2;
case 0x70b4e5:goto L70b4e5;
case 0x70b4e8:c.instructions+=5;goto B70b4e8;
case 0x70b4eb:c.instructions+=4;goto B70b4eb;
case 0x70b4ee:c.instructions+=3;goto B70b4ee;
case 0x70b4f1:c.instructions+=2;goto B70b4f1;
case 0x70b4f4:c.instructions+=1;goto B70b4f4;
case 0x70b4f6:goto L70b4f6;
case 0x70b4f9:c.instructions+=6;goto B70b4f9;
case 0x70b4fc:c.instructions+=5;goto B70b4fc;
case 0x70b4ff:c.instructions+=4;goto B70b4ff;
case 0x70b502:c.instructions+=3;goto B70b502;
case 0x70b503:c.instructions+=2;goto B70b503;
case 0x70b504:c.instructions+=1;goto B70b504;
case 0x70b50a:goto L70b50a;
case 0x70b50d:c.instructions+=6;goto B70b50d;
case 0x70b510:c.instructions+=5;goto B70b510;
case 0x70b513:c.instructions+=4;goto B70b513;
case 0x70b516:c.instructions+=3;goto B70b516;
case 0x70b517:c.instructions+=2;goto B70b517;
case 0x70b518:c.instructions+=1;goto B70b518;
case 0x70b51e:goto L70b51e;
case 0x70b521:c.instructions+=6;goto B70b521;
case 0x70b525:c.instructions+=5;goto B70b525;
case 0x70b528:c.instructions+=4;goto B70b528;
case 0x70b52b:c.instructions+=3;goto B70b52b;
case 0x70b52e:c.instructions+=2;goto B70b52e;
case 0x70b531:c.instructions+=1;goto B70b531;
case 0x70b533:goto L70b533;
case 0x70b536:c.instructions+=4;goto B70b536;
case 0x70b539:c.instructions+=3;goto B70b539;
case 0x70b53c:c.instructions+=2;goto B70b53c;
case 0x70b53d:c.instructions+=1;goto B70b53d;
case 0x70b543:goto L70b543;
case 0x70b546:goto L70b546;
case 0x70b54a:c.instructions+=4;goto B70b54a;
case 0x70b54b:c.instructions+=3;goto B70b54b;
case 0x70b54e:c.instructions+=2;goto B70b54e;
case 0x70b551:c.instructions+=1;goto B70b551;
case 0x70b553:goto L70b553;
case 0x70b556:goto L70b556;
case 0x70b559:c.instructions+=5;goto B70b559;
case 0x70b55c:c.instructions+=4;goto B70b55c;
case 0x70b55f:c.instructions+=3;goto B70b55f;
case 0x70b562:c.instructions+=2;goto B70b562;
case 0x70b565:c.instructions+=1;goto B70b565;
case 0x70b567:goto L70b567;
case 0x70b56a:c.instructions+=6;goto B70b56a;
case 0x70b56d:c.instructions+=5;goto B70b56d;
case 0x70b570:c.instructions+=4;goto B70b570;
case 0x70b573:c.instructions+=3;goto B70b573;
case 0x70b574:c.instructions+=2;goto B70b574;
case 0x70b575:c.instructions+=1;goto B70b575;
case 0x70b57b:goto L70b57b;
case 0x70b57e:c.instructions+=4;goto B70b57e;
case 0x70b581:c.instructions+=3;goto B70b581;
case 0x70b582:c.instructions+=2;goto B70b582;
case 0x70b583:c.instructions+=1;goto B70b583;
case 0x70b589:goto L70b589;
case 0x70b58c:goto L70b58c;
case 0x70b58f:c.instructions+=2;goto B70b58f;
case 0x70b593:c.instructions+=1;goto B70b593;
case 0x70b599:goto L70b599;
case 0x70b59a:c.instructions+=4;goto B70b59a;
case 0x70b59b:c.instructions+=3;goto B70b59b;
case 0x70b59c:c.instructions+=2;goto B70b59c;
case 0x70b59d:c.instructions+=1;goto B70b59d;
case 0x70b59e:goto L70b59e;
case 0x70b59f:c.instructions+=30;goto B70b59f;
case 0x70b5a1:c.instructions+=29;goto B70b5a1;
case 0x70b5a4:c.instructions+=28;goto B70b5a4;
case 0x70b5a5:c.instructions+=27;goto B70b5a5;
case 0x70b5a8:c.instructions+=26;goto B70b5a8;
case 0x70b5a9:c.instructions+=25;goto B70b5a9;
case 0x70b5ac:c.instructions+=24;goto B70b5ac;
case 0x70b5ae:c.instructions+=23;goto B70b5ae;
case 0x70b5b1:c.instructions+=22;goto B70b5b1;
case 0x70b5b3:c.instructions+=21;goto B70b5b3;
case 0x70b5b5:c.instructions+=20;goto B70b5b5;
case 0x70b5b8:c.instructions+=19;goto B70b5b8;
case 0x70b5ba:c.instructions+=18;goto B70b5ba;
case 0x70b5bd:c.instructions+=17;goto B70b5bd;
case 0x70b5be:c.instructions+=16;goto B70b5be;
case 0x70b5c1:c.instructions+=15;goto B70b5c1;
case 0x70b5c3:c.instructions+=14;goto B70b5c3;
case 0x70b5c5:c.instructions+=13;goto B70b5c5;
case 0x70b5c7:c.instructions+=12;goto B70b5c7;
case 0x70b5ca:c.instructions+=11;goto B70b5ca;
case 0x70b5cc:c.instructions+=10;goto B70b5cc;
case 0x70b5ce:c.instructions+=9;goto B70b5ce;
case 0x70b5d0:c.instructions+=8;goto B70b5d0;
case 0x70b5d2:c.instructions+=7;goto B70b5d2;
case 0x70b5d3:c.instructions+=6;goto B70b5d3;
case 0x70b5d5:c.instructions+=5;goto B70b5d5;
case 0x70b5d6:c.instructions+=4;goto B70b5d6;
case 0x70b5d8:c.instructions+=3;goto B70b5d8;
case 0x70b5d9:c.instructions+=2;goto B70b5d9;
case 0x70b5da:c.instructions+=1;goto B70b5da;
case 0x70b5db:goto L70b5db;
case 0x70b5dc:c.instructions+=24;goto B70b5dc;
case 0x70b5de:c.instructions+=23;goto B70b5de;
case 0x70b5e4:c.instructions+=22;goto B70b5e4;
case 0x70b5e7:c.instructions+=21;goto B70b5e7;
case 0x70b5ea:c.instructions+=20;goto B70b5ea;
case 0x70b5ed:c.instructions+=19;goto B70b5ed;
case 0x70b5ee:c.instructions+=18;goto B70b5ee;
case 0x70b5f1:c.instructions+=17;goto B70b5f1;
case 0x70b5f7:c.instructions+=16;goto B70b5f7;
case 0x70b5fa:c.instructions+=15;goto B70b5fa;
case 0x70b5fd:c.instructions+=14;goto B70b5fd;
case 0x70b600:c.instructions+=13;goto B70b600;
case 0x70b601:c.instructions+=12;goto B70b601;
case 0x70b604:c.instructions+=11;goto B70b604;
case 0x70b607:c.instructions+=10;goto B70b607;
case 0x70b608:c.instructions+=9;goto B70b608;
case 0x70b60b:c.instructions+=8;goto B70b60b;
case 0x70b60d:c.instructions+=7;goto B70b60d;
case 0x70b60f:c.instructions+=6;goto B70b60f;
case 0x70b612:c.instructions+=5;goto B70b612;
case 0x70b615:c.instructions+=4;goto B70b615;
case 0x70b616:c.instructions+=3;goto B70b616;
case 0x70b618:c.instructions+=2;goto B70b618;
case 0x70b61b:c.instructions+=1;goto B70b61b;
case 0x70b61d:goto L70b61d;
case 0x70b620:goto L70b620;
case 0x70b623:c.instructions+=3;goto B70b623;
case 0x70b626:c.instructions+=2;goto B70b626;
case 0x70b62c:c.instructions+=1;goto B70b62c;
case 0x70b633:goto L70b633;
case 0x70b636:c.instructions+=4;goto B70b636;
case 0x70b639:c.instructions+=3;goto B70b639;
case 0x70b63c:c.instructions+=2;goto B70b63c;
case 0x70b63e:c.instructions+=1;goto B70b63e;
case 0x70b645:goto L70b645;
case 0x70b648:c.instructions+=6;goto B70b648;
case 0x70b64b:c.instructions+=5;goto B70b64b;
case 0x70b64e:c.instructions+=4;goto B70b64e;
case 0x70b650:c.instructions+=3;goto B70b650;
case 0x70b652:c.instructions+=2;goto B70b652;
case 0x70b654:c.instructions+=1;goto B70b654;
case 0x70b656:goto L70b656;
case 0x70b658:c.instructions+=1;goto B70b658;
case 0x70b65a:goto L70b65a;
case 0x70b65c:c.instructions+=4;goto B70b65c;
case 0x70b65e:c.instructions+=3;goto B70b65e;
case 0x70b661:c.instructions+=2;goto B70b661;
case 0x70b664:c.instructions+=1;goto B70b664;
case 0x70b666:goto L70b666;
case 0x70b669:c.instructions+=1;goto B70b669;
case 0x70b66b:goto L70b66b;
case 0x70b66d:c.instructions+=1;goto B70b66d;
case 0x70b66f:goto L70b66f;
case 0x70b671:c.instructions+=1;goto B70b671;
case 0x70b673:goto L70b673;
case 0x70b676:c.instructions+=1;goto B70b676;
case 0x70b678:goto L70b678;
case 0x70b67b:goto L70b67b;
case 0x70b67e:c.instructions+=6;goto B70b67e;
case 0x70b67f:c.instructions+=5;goto B70b67f;
case 0x70b680:c.instructions+=4;goto B70b680;
case 0x70b681:c.instructions+=3;goto B70b681;
case 0x70b684:c.instructions+=2;goto B70b684;
case 0x70b687:c.instructions+=1;goto B70b687;
case 0x70b689:goto L70b689;
case 0x70b68c:c.instructions+=5;goto B70b68c;
case 0x70b68f:c.instructions+=4;goto B70b68f;
case 0x70b692:c.instructions+=3;goto B70b692;
case 0x70b695:c.instructions+=2;goto B70b695;
case 0x70b697:c.instructions+=1;goto B70b697;
case 0x70b699:goto L70b699;
case 0x70b69c:c.instructions+=2;goto B70b69c;
case 0x70b6a2:c.instructions+=1;goto B70b6a2;
case 0x70b6a9:goto L70b6a9;
case 0x70b6ab:c.instructions+=1;goto B70b6ab;
case 0x70b6ae:goto L70b6ae;
case 0x70b6b2:c.instructions+=5;goto B70b6b2;
case 0x70b6b7:c.instructions+=4;goto B70b6b7;
case 0x70b6b9:c.instructions+=3;goto B70b6b9;
case 0x70b6bb:c.instructions+=2;goto B70b6bb;
case 0x70b6bd:c.instructions+=1;goto B70b6bd;
case 0x70b6bf:goto L70b6bf;
case 0x70b6c1:c.instructions+=1;goto B70b6c1;
case 0x70b6c3:goto L70b6c3;
case 0x70b6c5:c.instructions+=4;goto B70b6c5;
case 0x70b6c7:c.instructions+=3;goto B70b6c7;
case 0x70b6ca:c.instructions+=2;goto B70b6ca;
case 0x70b6cd:c.instructions+=1;goto B70b6cd;
case 0x70b6cf:goto L70b6cf;
case 0x70b6d2:c.instructions+=1;goto B70b6d2;
case 0x70b6d4:goto L70b6d4;
case 0x70b6d6:c.instructions+=1;goto B70b6d6;
case 0x70b6d8:goto L70b6d8;
case 0x70b6da:c.instructions+=1;goto B70b6da;
case 0x70b6dc:goto L70b6dc;
case 0x70b6df:c.instructions+=1;goto B70b6df;
case 0x70b6e1:goto L70b6e1;
case 0x70b6e4:goto L70b6e4;
case 0x70b6e7:c.instructions+=5;goto B70b6e7;
case 0x70b6eb:c.instructions+=4;goto B70b6eb;
case 0x70b6ec:c.instructions+=3;goto B70b6ec;
case 0x70b6ef:c.instructions+=2;goto B70b6ef;
case 0x70b6f2:c.instructions+=1;goto B70b6f2;
case 0x70b6f4:goto L70b6f4;
case 0x70b6f7:c.instructions+=3;goto B70b6f7;
case 0x70b6fa:c.instructions+=2;goto B70b6fa;
case 0x70b6fd:c.instructions+=1;goto B70b6fd;
case 0x70b6ff:goto L70b6ff;
case 0x70b702:c.instructions+=28;goto B70b702;
case 0x70b705:c.instructions+=27;goto B70b705;
case 0x70b708:c.instructions+=26;goto B70b708;
case 0x70b70b:c.instructions+=25;goto B70b70b;
case 0x70b70e:c.instructions+=24;goto B70b70e;
case 0x70b711:c.instructions+=23;goto B70b711;
case 0x70b714:c.instructions+=22;goto B70b714;
case 0x70b717:c.instructions+=21;goto B70b717;
case 0x70b71a:c.instructions+=20;goto B70b71a;
case 0x70b71c:c.instructions+=19;goto B70b71c;
case 0x70b71f:c.instructions+=18;goto B70b71f;
case 0x70b722:c.instructions+=17;goto B70b722;
case 0x70b724:c.instructions+=16;goto B70b724;
case 0x70b727:c.instructions+=15;goto B70b727;
case 0x70b72a:c.instructions+=14;goto B70b72a;
case 0x70b72c:c.instructions+=13;goto B70b72c;
case 0x70b72f:c.instructions+=12;goto B70b72f;
case 0x70b732:c.instructions+=11;goto B70b732;
case 0x70b734:c.instructions+=10;goto B70b734;
case 0x70b737:c.instructions+=9;goto B70b737;
case 0x70b73a:c.instructions+=8;goto B70b73a;
case 0x70b73d:c.instructions+=7;goto B70b73d;
case 0x70b743:c.instructions+=6;goto B70b743;
case 0x70b746:c.instructions+=5;goto B70b746;
case 0x70b749:c.instructions+=4;goto B70b749;
case 0x70b74c:c.instructions+=3;goto B70b74c;
case 0x70b752:c.instructions+=2;goto B70b752;
case 0x70b755:c.instructions+=1;goto B70b755;
case 0x70b75c:goto L70b75c;
case 0x70b760:c.instructions+=39;goto B70b760;
case 0x70b763:c.instructions+=38;goto B70b763;
case 0x70b766:c.instructions+=37;goto B70b766;
case 0x70b769:c.instructions+=36;goto B70b769;
case 0x70b76c:c.instructions+=35;goto B70b76c;
case 0x70b770:c.instructions+=34;goto B70b770;
case 0x70b773:c.instructions+=33;goto B70b773;
case 0x70b776:c.instructions+=32;goto B70b776;
case 0x70b77b:c.instructions+=31;goto B70b77b;
case 0x70b77d:c.instructions+=30;goto B70b77d;
case 0x70b780:c.instructions+=29;goto B70b780;
case 0x70b782:c.instructions+=28;goto B70b782;
case 0x70b786:c.instructions+=27;goto B70b786;
case 0x70b788:c.instructions+=26;goto B70b788;
case 0x70b78b:c.instructions+=25;goto B70b78b;
case 0x70b78e:c.instructions+=24;goto B70b78e;
case 0x70b792:c.instructions+=23;goto B70b792;
case 0x70b794:c.instructions+=22;goto B70b794;
case 0x70b798:c.instructions+=21;goto B70b798;
case 0x70b79b:c.instructions+=20;goto B70b79b;
case 0x70b79e:c.instructions+=19;goto B70b79e;
case 0x70b7a1:c.instructions+=18;goto B70b7a1;
case 0x70b7a5:c.instructions+=17;goto B70b7a5;
case 0x70b7a7:c.instructions+=16;goto B70b7a7;
case 0x70b7ab:c.instructions+=15;goto B70b7ab;
case 0x70b7ae:c.instructions+=14;goto B70b7ae;
case 0x70b7b1:c.instructions+=13;goto B70b7b1;
case 0x70b7b3:c.instructions+=12;goto B70b7b3;
case 0x70b7b5:c.instructions+=11;goto B70b7b5;
case 0x70b7b8:c.instructions+=10;goto B70b7b8;
case 0x70b7bc:c.instructions+=9;goto B70b7bc;
case 0x70b7bf:c.instructions+=8;goto B70b7bf;
case 0x70b7c2:c.instructions+=7;goto B70b7c2;
case 0x70b7c4:c.instructions+=6;goto B70b7c4;
case 0x70b7c7:c.instructions+=5;goto B70b7c7;
case 0x70b7ca:c.instructions+=4;goto B70b7ca;
case 0x70b7cd:c.instructions+=3;goto B70b7cd;
case 0x70b7d1:c.instructions+=2;goto B70b7d1;
case 0x70b7d4:c.instructions+=1;goto B70b7d4;
case 0x70b7d6:goto L70b7d6;
case 0x70b7da:c.instructions+=1;goto B70b7da;
case 0x70b7dc:goto L70b7dc;
case 0x70b7e1:c.instructions+=3;goto B70b7e1;
case 0x70b7e3:c.instructions+=2;goto B70b7e3;
case 0x70b7e6:c.instructions+=1;goto B70b7e6;
case 0x70b7e8:goto L70b7e8;
case 0x70b7eb:goto L70b7eb;
case 0x70b7ef:c.instructions+=34;goto B70b7ef;
case 0x70b7f2:c.instructions+=33;goto B70b7f2;
case 0x70b7f6:c.instructions+=32;goto B70b7f6;
case 0x70b7f9:c.instructions+=31;goto B70b7f9;
case 0x70b7fe:c.instructions+=30;goto B70b7fe;
case 0x70b800:c.instructions+=29;goto B70b800;
case 0x70b804:c.instructions+=28;goto B70b804;
case 0x70b806:c.instructions+=27;goto B70b806;
case 0x70b80a:c.instructions+=26;goto B70b80a;
case 0x70b80c:c.instructions+=25;goto B70b80c;
case 0x70b810:c.instructions+=24;goto B70b810;
case 0x70b812:c.instructions+=23;goto B70b812;
case 0x70b816:c.instructions+=22;goto B70b816;
case 0x70b81a:c.instructions+=21;goto B70b81a;
case 0x70b81d:c.instructions+=20;goto B70b81d;
case 0x70b820:c.instructions+=19;goto B70b820;
case 0x70b822:c.instructions+=18;goto B70b822;
case 0x70b824:c.instructions+=17;goto B70b824;
case 0x70b828:c.instructions+=16;goto B70b828;
case 0x70b82c:c.instructions+=15;goto B70b82c;
case 0x70b82f:c.instructions+=14;goto B70b82f;
case 0x70b832:c.instructions+=13;goto B70b832;
case 0x70b834:c.instructions+=12;goto B70b834;
case 0x70b837:c.instructions+=11;goto B70b837;
case 0x70b83a:c.instructions+=10;goto B70b83a;
case 0x70b83d:c.instructions+=9;goto B70b83d;
case 0x70b840:c.instructions+=8;goto B70b840;
case 0x70b842:c.instructions+=7;goto B70b842;
case 0x70b845:c.instructions+=6;goto B70b845;
case 0x70b849:c.instructions+=5;goto B70b849;
case 0x70b84c:c.instructions+=4;goto B70b84c;
case 0x70b84f:c.instructions+=3;goto B70b84f;
case 0x70b853:c.instructions+=2;goto B70b853;
case 0x70b856:c.instructions+=1;goto B70b856;
case 0x70b858:goto L70b858;
case 0x70b85c:c.instructions+=1;goto B70b85c;
case 0x70b85e:goto L70b85e;
case 0x70b863:c.instructions+=3;goto B70b863;
case 0x70b865:c.instructions+=2;goto B70b865;
case 0x70b868:c.instructions+=1;goto B70b868;
case 0x70b86a:goto L70b86a;
case 0x70b86d:goto L70b86d;
case 0x70b871:c.instructions+=32;goto B70b871;
case 0x70b874:c.instructions+=31;goto B70b874;
case 0x70b878:c.instructions+=30;goto B70b878;
case 0x70b87c:c.instructions+=29;goto B70b87c;
case 0x70b87f:c.instructions+=28;goto B70b87f;
case 0x70b884:c.instructions+=27;goto B70b884;
case 0x70b886:c.instructions+=26;goto B70b886;
case 0x70b88a:c.instructions+=25;goto B70b88a;
case 0x70b88c:c.instructions+=24;goto B70b88c;
case 0x70b88f:c.instructions+=23;goto B70b88f;
case 0x70b893:c.instructions+=22;goto B70b893;
case 0x70b895:c.instructions+=21;goto B70b895;
case 0x70b898:c.instructions+=20;goto B70b898;
case 0x70b89b:c.instructions+=19;goto B70b89b;
case 0x70b89f:c.instructions+=18;goto B70b89f;
case 0x70b8a3:c.instructions+=17;goto B70b8a3;
case 0x70b8a5:c.instructions+=16;goto B70b8a5;
case 0x70b8a8:c.instructions+=15;goto B70b8a8;
case 0x70b8ab:c.instructions+=14;goto B70b8ab;
case 0x70b8ae:c.instructions+=13;goto B70b8ae;
case 0x70b8b0:c.instructions+=12;goto B70b8b0;
case 0x70b8b4:c.instructions+=11;goto B70b8b4;
case 0x70b8b7:c.instructions+=10;goto B70b8b7;
case 0x70b8ba:c.instructions+=9;goto B70b8ba;
case 0x70b8bd:c.instructions+=8;goto B70b8bd;
case 0x70b8bf:c.instructions+=7;goto B70b8bf;
case 0x70b8c2:c.instructions+=6;goto B70b8c2;
case 0x70b8c6:c.instructions+=5;goto B70b8c6;
case 0x70b8c9:c.instructions+=4;goto B70b8c9;
case 0x70b8cc:c.instructions+=3;goto B70b8cc;
case 0x70b8d0:c.instructions+=2;goto B70b8d0;
case 0x70b8d3:c.instructions+=1;goto B70b8d3;
case 0x70b8d5:goto L70b8d5;
case 0x70b8d9:c.instructions+=1;goto B70b8d9;
case 0x70b8db:goto L70b8db;
case 0x70b8e0:c.instructions+=3;goto B70b8e0;
case 0x70b8e2:c.instructions+=2;goto B70b8e2;
case 0x70b8e5:c.instructions+=1;goto B70b8e5;
case 0x70b8e7:goto L70b8e7;
case 0x70b8ea:goto L70b8ea;
case 0x70b8ee:c.instructions+=32;goto B70b8ee;
case 0x70b8f1:c.instructions+=31;goto B70b8f1;
case 0x70b8f5:c.instructions+=30;goto B70b8f5;
case 0x70b8f9:c.instructions+=29;goto B70b8f9;
case 0x70b8fc:c.instructions+=28;goto B70b8fc;
case 0x70b901:c.instructions+=27;goto B70b901;
case 0x70b903:c.instructions+=26;goto B70b903;
case 0x70b907:c.instructions+=25;goto B70b907;
case 0x70b909:c.instructions+=24;goto B70b909;
case 0x70b90b:c.instructions+=23;goto B70b90b;
case 0x70b90e:c.instructions+=22;goto B70b90e;
case 0x70b912:c.instructions+=21;goto B70b912;
case 0x70b916:c.instructions+=20;goto B70b916;
case 0x70b919:c.instructions+=19;goto B70b919;
case 0x70b91c:c.instructions+=18;goto B70b91c;
case 0x70b91e:c.instructions+=17;goto B70b91e;
case 0x70b922:c.instructions+=16;goto B70b922;
case 0x70b926:c.instructions+=15;goto B70b926;
case 0x70b929:c.instructions+=14;goto B70b929;
case 0x70b92c:c.instructions+=13;goto B70b92c;
case 0x70b92e:c.instructions+=12;goto B70b92e;
case 0x70b932:c.instructions+=11;goto B70b932;
case 0x70b935:c.instructions+=10;goto B70b935;
case 0x70b938:c.instructions+=9;goto B70b938;
case 0x70b93b:c.instructions+=8;goto B70b93b;
case 0x70b93d:c.instructions+=7;goto B70b93d;
case 0x70b940:c.instructions+=6;goto B70b940;
case 0x70b944:c.instructions+=5;goto B70b944;
case 0x70b947:c.instructions+=4;goto B70b947;
case 0x70b94a:c.instructions+=3;goto B70b94a;
case 0x70b94e:c.instructions+=2;goto B70b94e;
case 0x70b951:c.instructions+=1;goto B70b951;
case 0x70b953:goto L70b953;
case 0x70b957:c.instructions+=1;goto B70b957;
case 0x70b959:goto L70b959;
case 0x70b95e:c.instructions+=3;goto B70b95e;
case 0x70b960:c.instructions+=2;goto B70b960;
case 0x70b963:c.instructions+=1;goto B70b963;
case 0x70b965:goto L70b965;
case 0x70b968:goto L70b968;
case 0x70b96c:c.instructions+=32;goto B70b96c;
case 0x70b96f:c.instructions+=31;goto B70b96f;
case 0x70b973:c.instructions+=30;goto B70b973;
case 0x70b977:c.instructions+=29;goto B70b977;
case 0x70b97a:c.instructions+=28;goto B70b97a;
case 0x70b97f:c.instructions+=27;goto B70b97f;
case 0x70b981:c.instructions+=26;goto B70b981;
case 0x70b985:c.instructions+=25;goto B70b985;
case 0x70b987:c.instructions+=24;goto B70b987;
case 0x70b989:c.instructions+=23;goto B70b989;
case 0x70b98c:c.instructions+=22;goto B70b98c;
case 0x70b990:c.instructions+=21;goto B70b990;
case 0x70b994:c.instructions+=20;goto B70b994;
case 0x70b997:c.instructions+=19;goto B70b997;
case 0x70b99a:c.instructions+=18;goto B70b99a;
case 0x70b99c:c.instructions+=17;goto B70b99c;
case 0x70b99f:c.instructions+=16;goto B70b99f;
case 0x70b9a3:c.instructions+=15;goto B70b9a3;
case 0x70b9a6:c.instructions+=14;goto B70b9a6;
case 0x70b9a9:c.instructions+=13;goto B70b9a9;
case 0x70b9ab:c.instructions+=12;goto B70b9ab;
case 0x70b9af:c.instructions+=11;goto B70b9af;
case 0x70b9b2:c.instructions+=10;goto B70b9b2;
case 0x70b9b5:c.instructions+=9;goto B70b9b5;
case 0x70b9b8:c.instructions+=8;goto B70b9b8;
case 0x70b9ba:c.instructions+=7;goto B70b9ba;
case 0x70b9bd:c.instructions+=6;goto B70b9bd;
case 0x70b9c1:c.instructions+=5;goto B70b9c1;
case 0x70b9c4:c.instructions+=4;goto B70b9c4;
case 0x70b9c7:c.instructions+=3;goto B70b9c7;
case 0x70b9cb:c.instructions+=2;goto B70b9cb;
case 0x70b9ce:c.instructions+=1;goto B70b9ce;
case 0x70b9d0:goto L70b9d0;
case 0x70b9d4:c.instructions+=1;goto B70b9d4;
case 0x70b9d6:goto L70b9d6;
case 0x70b9db:c.instructions+=3;goto B70b9db;
case 0x70b9dd:c.instructions+=2;goto B70b9dd;
case 0x70b9e0:c.instructions+=1;goto B70b9e0;
case 0x70b9e2:goto L70b9e2;
case 0x70b9e5:goto L70b9e5;
case 0x70b9e9:c.instructions+=30;goto B70b9e9;
case 0x70b9ec:c.instructions+=29;goto B70b9ec;
case 0x70b9f0:c.instructions+=28;goto B70b9f0;
case 0x70b9f4:c.instructions+=27;goto B70b9f4;
case 0x70b9f7:c.instructions+=26;goto B70b9f7;
case 0x70b9fc:c.instructions+=25;goto B70b9fc;
case 0x70b9fe:c.instructions+=24;goto B70b9fe;
case 0x70ba02:c.instructions+=23;goto B70ba02;
case 0x70ba04:c.instructions+=22;goto B70ba04;
case 0x70ba06:c.instructions+=21;goto B70ba06;
case 0x70ba09:c.instructions+=20;goto B70ba09;
case 0x70ba0d:c.instructions+=19;goto B70ba0d;
case 0x70ba11:c.instructions+=18;goto B70ba11;
case 0x70ba14:c.instructions+=17;goto B70ba14;
case 0x70ba17:c.instructions+=16;goto B70ba17;
case 0x70ba19:c.instructions+=15;goto B70ba19;
case 0x70ba1d:c.instructions+=14;goto B70ba1d;
case 0x70ba21:c.instructions+=13;goto B70ba21;
case 0x70ba24:c.instructions+=12;goto B70ba24;
case 0x70ba27:c.instructions+=11;goto B70ba27;
case 0x70ba29:c.instructions+=10;goto B70ba29;
case 0x70ba2d:c.instructions+=9;goto B70ba2d;
case 0x70ba30:c.instructions+=8;goto B70ba30;
case 0x70ba33:c.instructions+=7;goto B70ba33;
case 0x70ba35:c.instructions+=6;goto B70ba35;
case 0x70ba38:c.instructions+=5;goto B70ba38;
case 0x70ba3c:c.instructions+=4;goto B70ba3c;
case 0x70ba40:c.instructions+=3;goto B70ba40;
case 0x70ba44:c.instructions+=2;goto B70ba44;
case 0x70ba47:c.instructions+=1;goto B70ba47;
case 0x70ba49:goto L70ba49;
case 0x70ba4d:c.instructions+=1;goto B70ba4d;
case 0x70ba4f:goto L70ba4f;
case 0x70ba54:c.instructions+=3;goto B70ba54;
case 0x70ba56:c.instructions+=2;goto B70ba56;
case 0x70ba59:c.instructions+=1;goto B70ba59;
case 0x70ba5b:goto L70ba5b;
case 0x70ba5e:goto L70ba5e;
case 0x70ba61:c.instructions+=32;goto B70ba61;
case 0x70ba65:c.instructions+=31;goto B70ba65;
case 0x70ba69:c.instructions+=30;goto B70ba69;
case 0x70ba6e:c.instructions+=29;goto B70ba6e;
case 0x70ba70:c.instructions+=28;goto B70ba70;
case 0x70ba74:c.instructions+=27;goto B70ba74;
case 0x70ba76:c.instructions+=26;goto B70ba76;
case 0x70ba7a:c.instructions+=25;goto B70ba7a;
case 0x70ba7c:c.instructions+=24;goto B70ba7c;
case 0x70ba80:c.instructions+=23;goto B70ba80;
case 0x70ba82:c.instructions+=22;goto B70ba82;
case 0x70ba86:c.instructions+=21;goto B70ba86;
case 0x70ba8a:c.instructions+=20;goto B70ba8a;
case 0x70ba8d:c.instructions+=19;goto B70ba8d;
case 0x70ba90:c.instructions+=18;goto B70ba90;
case 0x70ba92:c.instructions+=17;goto B70ba92;
case 0x70ba96:c.instructions+=16;goto B70ba96;
case 0x70ba9a:c.instructions+=15;goto B70ba9a;
case 0x70ba9d:c.instructions+=14;goto B70ba9d;
case 0x70baa0:c.instructions+=13;goto B70baa0;
case 0x70baa4:c.instructions+=12;goto B70baa4;
case 0x70baa6:c.instructions+=11;goto B70baa6;
case 0x70baa8:c.instructions+=10;goto B70baa8;
case 0x70baac:c.instructions+=9;goto B70baac;
case 0x70baaf:c.instructions+=8;goto B70baaf;
case 0x70bab2:c.instructions+=7;goto B70bab2;
case 0x70bab4:c.instructions+=6;goto B70bab4;
case 0x70bab8:c.instructions+=5;goto B70bab8;
case 0x70babb:c.instructions+=4;goto B70babb;
case 0x70babe:c.instructions+=3;goto B70babe;
case 0x70bac2:c.instructions+=2;goto B70bac2;
case 0x70bac5:c.instructions+=1;goto B70bac5;
case 0x70bac7:goto L70bac7;
case 0x70bacb:c.instructions+=1;goto B70bacb;
case 0x70bacd:goto L70bacd;
case 0x70bad2:c.instructions+=3;goto B70bad2;
case 0x70bad4:c.instructions+=2;goto B70bad4;
case 0x70bad7:c.instructions+=1;goto B70bad7;
case 0x70bad9:goto L70bad9;
case 0x70badc:goto L70badc;
case 0x70badf:c.instructions+=31;goto B70badf;
case 0x70bae3:c.instructions+=30;goto B70bae3;
case 0x70bae7:c.instructions+=29;goto B70bae7;
case 0x70baea:c.instructions+=28;goto B70baea;
case 0x70baef:c.instructions+=27;goto B70baef;
case 0x70baf1:c.instructions+=26;goto B70baf1;
case 0x70baf5:c.instructions+=25;goto B70baf5;
case 0x70baf7:c.instructions+=24;goto B70baf7;
case 0x70bafb:c.instructions+=23;goto B70bafb;
case 0x70bafd:c.instructions+=22;goto B70bafd;
case 0x70baff:c.instructions+=21;goto B70baff;
case 0x70bb03:c.instructions+=20;goto B70bb03;
case 0x70bb07:c.instructions+=19;goto B70bb07;
case 0x70bb0a:c.instructions+=18;goto B70bb0a;
case 0x70bb0e:c.instructions+=17;goto B70bb0e;
case 0x70bb12:c.instructions+=16;goto B70bb12;
case 0x70bb14:c.instructions+=15;goto B70bb14;
case 0x70bb18:c.instructions+=14;goto B70bb18;
case 0x70bb1b:c.instructions+=13;goto B70bb1b;
case 0x70bb1e:c.instructions+=12;goto B70bb1e;
case 0x70bb20:c.instructions+=11;goto B70bb20;
case 0x70bb24:c.instructions+=10;goto B70bb24;
case 0x70bb28:c.instructions+=9;goto B70bb28;
case 0x70bb2b:c.instructions+=8;goto B70bb2b;
case 0x70bb2e:c.instructions+=7;goto B70bb2e;
case 0x70bb30:c.instructions+=6;goto B70bb30;
case 0x70bb34:c.instructions+=5;goto B70bb34;
case 0x70bb37:c.instructions+=4;goto B70bb37;
case 0x70bb3a:c.instructions+=3;goto B70bb3a;
case 0x70bb3e:c.instructions+=2;goto B70bb3e;
case 0x70bb41:c.instructions+=1;goto B70bb41;
case 0x70bb43:goto L70bb43;
case 0x70bb47:c.instructions+=1;goto B70bb47;
case 0x70bb49:goto L70bb49;
case 0x70bb4e:c.instructions+=3;goto B70bb4e;
case 0x70bb50:c.instructions+=2;goto B70bb50;
case 0x70bb53:c.instructions+=1;goto B70bb53;
case 0x70bb55:goto L70bb55;
case 0x70bb58:goto L70bb58;
case 0x70bb5b:c.instructions+=33;goto B70bb5b;
case 0x70bb5e:c.instructions+=32;goto B70bb5e;
case 0x70bb61:c.instructions+=31;goto B70bb61;
case 0x70bb64:c.instructions+=30;goto B70bb64;
case 0x70bb67:c.instructions+=29;goto B70bb67;
case 0x70bb6a:c.instructions+=28;goto B70bb6a;
case 0x70bb6d:c.instructions+=27;goto B70bb6d;
case 0x70bb70:c.instructions+=26;goto B70bb70;
case 0x70bb73:c.instructions+=25;goto B70bb73;
case 0x70bb76:c.instructions+=24;goto B70bb76;
case 0x70bb79:c.instructions+=23;goto B70bb79;
case 0x70bb7b:c.instructions+=22;goto B70bb7b;
case 0x70bb7e:c.instructions+=21;goto B70bb7e;
case 0x70bb81:c.instructions+=20;goto B70bb81;
case 0x70bb84:c.instructions+=19;goto B70bb84;
case 0x70bb87:c.instructions+=18;goto B70bb87;
case 0x70bb8a:c.instructions+=17;goto B70bb8a;
case 0x70bb8d:c.instructions+=16;goto B70bb8d;
case 0x70bb90:c.instructions+=15;goto B70bb90;
case 0x70bb93:c.instructions+=14;goto B70bb93;
case 0x70bb96:c.instructions+=13;goto B70bb96;
case 0x70bb99:c.instructions+=12;goto B70bb99;
case 0x70bb9c:c.instructions+=11;goto B70bb9c;
case 0x70bb9f:c.instructions+=10;goto B70bb9f;
case 0x70bba1:c.instructions+=9;goto B70bba1;
case 0x70bba3:c.instructions+=8;goto B70bba3;
case 0x70bba5:c.instructions+=7;goto B70bba5;
case 0x70bba8:c.instructions+=6;goto B70bba8;
case 0x70bbab:c.instructions+=5;goto B70bbab;
case 0x70bbae:c.instructions+=4;goto B70bbae;
case 0x70bbb1:c.instructions+=3;goto B70bbb1;
case 0x70bbb4:c.instructions+=2;goto B70bbb4;
case 0x70bbb7:c.instructions+=1;goto B70bbb7;
case 0x70bbbd:goto L70bbbd;
case 0x70bbbe:c.instructions+=4;goto B70bbbe;
case 0x70bbbf:c.instructions+=3;goto B70bbbf;
case 0x70bbc0:c.instructions+=2;goto B70bbc0;
case 0x70bbc1:c.instructions+=1;goto B70bbc1;
case 0x70bbc2:goto L70bbc2;
case 0x70bbc3:c.instructions+=24;goto B70bbc3;
case 0x70bbc5:c.instructions+=23;goto B70bbc5;
case 0x70bbcb:c.instructions+=22;goto B70bbcb;
case 0x70bbce:c.instructions+=21;goto B70bbce;
case 0x70bbd1:c.instructions+=20;goto B70bbd1;
case 0x70bbd4:c.instructions+=19;goto B70bbd4;
case 0x70bbd5:c.instructions+=18;goto B70bbd5;
case 0x70bbd6:c.instructions+=17;goto B70bbd6;
case 0x70bbd9:c.instructions+=16;goto B70bbd9;
case 0x70bbdf:c.instructions+=15;goto B70bbdf;
case 0x70bbe2:c.instructions+=14;goto B70bbe2;
case 0x70bbe5:c.instructions+=13;goto B70bbe5;
case 0x70bbe8:c.instructions+=12;goto B70bbe8;
case 0x70bbeb:c.instructions+=11;goto B70bbeb;
case 0x70bbee:c.instructions+=10;goto B70bbee;
case 0x70bbef:c.instructions+=9;goto B70bbef;
case 0x70bbf2:c.instructions+=8;goto B70bbf2;
case 0x70bbf4:c.instructions+=7;goto B70bbf4;
case 0x70bbf6:c.instructions+=6;goto B70bbf6;
case 0x70bbf9:c.instructions+=5;goto B70bbf9;
case 0x70bbfc:c.instructions+=4;goto B70bbfc;
case 0x70bbfd:c.instructions+=3;goto B70bbfd;
case 0x70bbff:c.instructions+=2;goto B70bbff;
case 0x70bc02:c.instructions+=1;goto B70bc02;
case 0x70bc04:goto L70bc04;
case 0x70bc07:goto L70bc07;
case 0x70bc0a:c.instructions+=3;goto B70bc0a;
case 0x70bc0d:c.instructions+=2;goto B70bc0d;
case 0x70bc13:c.instructions+=1;goto B70bc13;
case 0x70bc1a:goto L70bc1a;
case 0x70bc1d:c.instructions+=4;goto B70bc1d;
case 0x70bc20:c.instructions+=3;goto B70bc20;
case 0x70bc23:c.instructions+=2;goto B70bc23;
case 0x70bc25:c.instructions+=1;goto B70bc25;
case 0x70bc2c:goto L70bc2c;
case 0x70bc2f:c.instructions+=6;goto B70bc2f;
case 0x70bc32:c.instructions+=5;goto B70bc32;
case 0x70bc35:c.instructions+=4;goto B70bc35;
case 0x70bc37:c.instructions+=3;goto B70bc37;
case 0x70bc39:c.instructions+=2;goto B70bc39;
case 0x70bc3b:c.instructions+=1;goto B70bc3b;
case 0x70bc3d:goto L70bc3d;
case 0x70bc3f:c.instructions+=1;goto B70bc3f;
case 0x70bc41:goto L70bc41;
case 0x70bc43:c.instructions+=5;goto B70bc43;
case 0x70bc44:c.instructions+=4;goto B70bc44;
case 0x70bc46:c.instructions+=3;goto B70bc46;
case 0x70bc49:c.instructions+=2;goto B70bc49;
case 0x70bc4c:c.instructions+=1;goto B70bc4c;
case 0x70bc4e:goto L70bc4e;
case 0x70bc51:c.instructions+=1;goto B70bc51;
case 0x70bc53:goto L70bc53;
case 0x70bc55:c.instructions+=1;goto B70bc55;
case 0x70bc57:goto L70bc57;
case 0x70bc59:c.instructions+=1;goto B70bc59;
case 0x70bc5b:goto L70bc5b;
case 0x70bc5e:c.instructions+=1;goto B70bc5e;
case 0x70bc60:goto L70bc60;
case 0x70bc63:goto L70bc63;
case 0x70bc66:c.instructions+=6;goto B70bc66;
case 0x70bc67:c.instructions+=5;goto B70bc67;
case 0x70bc68:c.instructions+=4;goto B70bc68;
case 0x70bc69:c.instructions+=3;goto B70bc69;
case 0x70bc6c:c.instructions+=2;goto B70bc6c;
case 0x70bc6f:c.instructions+=1;goto B70bc6f;
case 0x70bc71:goto L70bc71;
case 0x70bc74:c.instructions+=5;goto B70bc74;
case 0x70bc77:c.instructions+=4;goto B70bc77;
case 0x70bc7a:c.instructions+=3;goto B70bc7a;
case 0x70bc7d:c.instructions+=2;goto B70bc7d;
case 0x70bc7f:c.instructions+=1;goto B70bc7f;
case 0x70bc81:goto L70bc81;
case 0x70bc84:c.instructions+=2;goto B70bc84;
case 0x70bc8a:c.instructions+=1;goto B70bc8a;
case 0x70bc91:goto L70bc91;
case 0x70bc93:c.instructions+=1;goto B70bc93;
case 0x70bc96:goto L70bc96;
case 0x70bc9a:c.instructions+=5;goto B70bc9a;
case 0x70bc9f:c.instructions+=4;goto B70bc9f;
case 0x70bca1:c.instructions+=3;goto B70bca1;
case 0x70bca3:c.instructions+=2;goto B70bca3;
case 0x70bca5:c.instructions+=1;goto B70bca5;
case 0x70bca7:goto L70bca7;
case 0x70bca9:c.instructions+=1;goto B70bca9;
case 0x70bcab:goto L70bcab;
case 0x70bcad:c.instructions+=5;goto B70bcad;
case 0x70bcae:c.instructions+=4;goto B70bcae;
case 0x70bcb0:c.instructions+=3;goto B70bcb0;
case 0x70bcb3:c.instructions+=2;goto B70bcb3;
case 0x70bcb6:c.instructions+=1;goto B70bcb6;
case 0x70bcb8:goto L70bcb8;
case 0x70bcbb:c.instructions+=1;goto B70bcbb;
case 0x70bcbd:goto L70bcbd;
case 0x70bcbf:c.instructions+=1;goto B70bcbf;
case 0x70bcc1:goto L70bcc1;
case 0x70bcc3:c.instructions+=1;goto B70bcc3;
case 0x70bcc5:goto L70bcc5;
case 0x70bcc8:c.instructions+=1;goto B70bcc8;
case 0x70bcca:goto L70bcca;
case 0x70bccd:goto L70bccd;
case 0x70bcd0:c.instructions+=5;goto B70bcd0;
case 0x70bcd4:c.instructions+=4;goto B70bcd4;
case 0x70bcd5:c.instructions+=3;goto B70bcd5;
case 0x70bcd8:c.instructions+=2;goto B70bcd8;
case 0x70bcdb:c.instructions+=1;goto B70bcdb;
case 0x70bcdd:goto L70bcdd;
case 0x70bce0:c.instructions+=3;goto B70bce0;
case 0x70bce3:c.instructions+=2;goto B70bce3;
case 0x70bce6:c.instructions+=1;goto B70bce6;
case 0x70bce8:goto L70bce8;
case 0x70bceb:c.instructions+=13;goto B70bceb;
case 0x70bcee:c.instructions+=12;goto B70bcee;
case 0x70bcf0:c.instructions+=11;goto B70bcf0;
case 0x70bcf3:c.instructions+=10;goto B70bcf3;
case 0x70bcf6:c.instructions+=9;goto B70bcf6;
case 0x70bcf8:c.instructions+=8;goto B70bcf8;
case 0x70bcfb:c.instructions+=7;goto B70bcfb;
case 0x70bcfe:c.instructions+=6;goto B70bcfe;
case 0x70bd01:c.instructions+=5;goto B70bd01;
case 0x70bd07:c.instructions+=4;goto B70bd07;
case 0x70bd08:c.instructions+=3;goto B70bd08;
case 0x70bd0e:c.instructions+=2;goto B70bd0e;
case 0x70bd11:c.instructions+=1;goto B70bd11;
case 0x70bd18:goto L70bd18;
case 0x70bd1b:c.instructions+=4;goto B70bd1b;
case 0x70bd1e:c.instructions+=3;goto B70bd1e;
case 0x70bd20:c.instructions+=2;goto B70bd20;
case 0x70bd23:c.instructions+=1;goto B70bd23;
case 0x70bd26:goto L70bd26;
case 0x70bd29:c.instructions+=35;goto B70bd29;
case 0x70bd2d:c.instructions+=34;goto B70bd2d;
case 0x70bd30:c.instructions+=33;goto B70bd30;
case 0x70bd33:c.instructions+=32;goto B70bd33;
case 0x70bd37:c.instructions+=31;goto B70bd37;
case 0x70bd3a:c.instructions+=30;goto B70bd3a;
case 0x70bd3d:c.instructions+=29;goto B70bd3d;
case 0x70bd40:c.instructions+=28;goto B70bd40;
case 0x70bd45:c.instructions+=27;goto B70bd45;
case 0x70bd47:c.instructions+=26;goto B70bd47;
case 0x70bd49:c.instructions+=25;goto B70bd49;
case 0x70bd4c:c.instructions+=24;goto B70bd4c;
case 0x70bd51:c.instructions+=23;goto B70bd51;
case 0x70bd54:c.instructions+=22;goto B70bd54;
case 0x70bd57:c.instructions+=21;goto B70bd57;
case 0x70bd5c:c.instructions+=20;goto B70bd5c;
case 0x70bd5f:c.instructions+=19;goto B70bd5f;
case 0x70bd62:c.instructions+=18;goto B70bd62;
case 0x70bd64:c.instructions+=17;goto B70bd64;
case 0x70bd68:c.instructions+=16;goto B70bd68;
case 0x70bd6b:c.instructions+=15;goto B70bd6b;
case 0x70bd6e:c.instructions+=14;goto B70bd6e;
case 0x70bd71:c.instructions+=13;goto B70bd71;
case 0x70bd74:c.instructions+=12;goto B70bd74;
case 0x70bd78:c.instructions+=11;goto B70bd78;
case 0x70bd7a:c.instructions+=10;goto B70bd7a;
case 0x70bd7e:c.instructions+=9;goto B70bd7e;
case 0x70bd81:c.instructions+=8;goto B70bd81;
case 0x70bd84:c.instructions+=7;goto B70bd84;
case 0x70bd88:c.instructions+=6;goto B70bd88;
case 0x70bd8a:c.instructions+=5;goto B70bd8a;
case 0x70bd8d:c.instructions+=4;goto B70bd8d;
case 0x70bd90:c.instructions+=3;goto B70bd90;
case 0x70bd94:c.instructions+=2;goto B70bd94;
case 0x70bd97:c.instructions+=1;goto B70bd97;
case 0x70bd99:goto L70bd99;
case 0x70bd9b:c.instructions+=1;goto B70bd9b;
case 0x70bd9d:goto L70bd9d;
case 0x70bda2:c.instructions+=2;goto B70bda2;
case 0x70bda4:c.instructions+=1;goto B70bda4;
case 0x70bda6:goto L70bda6;
case 0x70bda8:goto L70bda8;
case 0x70bdab:c.instructions+=7;goto B70bdab;
case 0x70bdaf:c.instructions+=6;goto B70bdaf;
case 0x70bdb3:c.instructions+=5;goto B70bdb3;
case 0x70bdb4:c.instructions+=4;goto B70bdb4;
case 0x70bdb7:c.instructions+=3;goto B70bdb7;
case 0x70bdb8:c.instructions+=2;goto B70bdb8;
case 0x70bdbb:c.instructions+=1;goto B70bdbb;
case 0x70bdc1:goto L70bdc1;
case 0x70bdc4:c.instructions+=6;goto B70bdc4;
case 0x70bdc7:c.instructions+=5;goto B70bdc7;
case 0x70bdcb:c.instructions+=4;goto B70bdcb;
case 0x70bdce:c.instructions+=3;goto B70bdce;
case 0x70bdd0:c.instructions+=2;goto B70bdd0;
case 0x70bdd3:c.instructions+=1;goto B70bdd3;
case 0x70bdd9:goto L70bdd9;
case 0x70bdda:c.instructions+=4;goto B70bdda;
case 0x70bddb:c.instructions+=3;goto B70bddb;
case 0x70bddc:c.instructions+=2;goto B70bddc;
case 0x70bddd:c.instructions+=1;goto B70bddd;
case 0x70bdde:goto L70bdde;
case 0x70bddf:c.instructions+=16;goto B70bddf;
case 0x70bde1:c.instructions+=15;goto B70bde1;
case 0x70bde4:c.instructions+=14;goto B70bde4;
case 0x70bde7:c.instructions+=13;goto B70bde7;
case 0x70bdea:c.instructions+=12;goto B70bdea;
case 0x70bded:c.instructions+=11;goto B70bded;
case 0x70bdf0:c.instructions+=10;goto B70bdf0;
case 0x70bdf6:c.instructions+=9;goto B70bdf6;
case 0x70bdf9:c.instructions+=8;goto B70bdf9;
case 0x70bdfc:c.instructions+=7;goto B70bdfc;
case 0x70bdff:c.instructions+=6;goto B70bdff;
case 0x70be02:c.instructions+=5;goto B70be02;
case 0x70be04:c.instructions+=4;goto B70be04;
case 0x70be05:c.instructions+=3;goto B70be05;
case 0x70be08:c.instructions+=2;goto B70be08;
case 0x70be0b:c.instructions+=1;goto B70be0b;
case 0x70be0d:goto L70be0d;
case 0x70be10:c.instructions+=2;goto B70be10;
case 0x70be13:c.instructions+=1;goto B70be13;
case 0x70be15:goto L70be15;
case 0x70be1c:c.instructions+=1;goto B70be1c;
case 0x70be1e:goto L70be1e;
case 0x70be21:c.instructions+=1;goto B70be21;
case 0x70be23:goto L70be23;
case 0x70be2a:c.instructions+=1;goto B70be2a;
case 0x70be2c:goto L70be2c;
case 0x70be33:goto L70be33;
case 0x70be36:c.instructions+=5;goto B70be36;
case 0x70be38:c.instructions+=4;goto B70be38;
case 0x70be39:c.instructions+=3;goto B70be39;
case 0x70be3b:c.instructions+=2;goto B70be3b;
case 0x70be3e:c.instructions+=1;goto B70be3e;
case 0x70be40:goto L70be40;
case 0x70be43:goto L70be43;
case 0x70be46:c.instructions+=11;goto B70be46;
case 0x70be49:c.instructions+=10;goto B70be49;
case 0x70be4c:c.instructions+=9;goto B70be4c;
case 0x70be4f:c.instructions+=8;goto B70be4f;
case 0x70be50:c.instructions+=7;goto B70be50;
case 0x70be53:c.instructions+=6;goto B70be53;
case 0x70be55:c.instructions+=5;goto B70be55;
case 0x70be56:c.instructions+=4;goto B70be56;
case 0x70be57:c.instructions+=3;goto B70be57;
case 0x70be58:c.instructions+=2;goto B70be58;
case 0x70be5b:c.instructions+=1;goto B70be5b;
case 0x70be62:goto L70be62;
case 0x70be65:c.instructions+=1;goto B70be65;
case 0x70be67:goto L70be67;
case 0x70be6b:c.instructions+=20;goto B70be6b;
case 0x70be6e:c.instructions+=19;goto B70be6e;
case 0x70be72:c.instructions+=18;goto B70be72;
case 0x70be75:c.instructions+=17;goto B70be75;
case 0x70be78:c.instructions+=16;goto B70be78;
case 0x70be7b:c.instructions+=15;goto B70be7b;
case 0x70be80:c.instructions+=14;goto B70be80;
case 0x70be84:c.instructions+=13;goto B70be84;
case 0x70be87:c.instructions+=12;goto B70be87;
case 0x70be8b:c.instructions+=11;goto B70be8b;
case 0x70be8e:c.instructions+=10;goto B70be8e;
case 0x70be93:c.instructions+=9;goto B70be93;
case 0x70be96:c.instructions+=8;goto B70be96;
case 0x70be9a:c.instructions+=7;goto B70be9a;
case 0x70be9d:c.instructions+=6;goto B70be9d;
case 0x70bea2:c.instructions+=5;goto B70bea2;
case 0x70bea5:c.instructions+=4;goto B70bea5;
case 0x70beaa:c.instructions+=3;goto B70beaa;
case 0x70beb1:c.instructions+=2;goto B70beb1;
case 0x70beb8:c.instructions+=1;goto B70beb8;
case 0x70bebb:goto L70bebb;
case 0x70bebe:c.instructions+=6;goto B70bebe;
case 0x70bec2:c.instructions+=5;goto B70bec2;
case 0x70bec5:c.instructions+=4;goto B70bec5;
case 0x70bec7:c.instructions+=3;goto B70bec7;
case 0x70bec9:c.instructions+=2;goto B70bec9;
case 0x70becc:c.instructions+=1;goto B70becc;
case 0x70bece:goto L70bece;
case 0x70bed0:c.instructions+=1;goto B70bed0;
case 0x70bed3:goto L70bed3;
case 0x70bed7:c.instructions+=6;goto B70bed7;
case 0x70beda:c.instructions+=5;goto B70beda;
case 0x70bedd:c.instructions+=4;goto B70bedd;
case 0x70bedf:c.instructions+=3;goto B70bedf;
case 0x70bee2:c.instructions+=2;goto B70bee2;
case 0x70bee5:c.instructions+=1;goto B70bee5;
case 0x70bee7:goto L70bee7;
case 0x70beea:c.instructions+=1;goto B70beea;
case 0x70beec:goto L70beec;
case 0x70beee:c.instructions+=1;goto B70beee;
case 0x70bef0:goto L70bef0;
case 0x70bef2:c.instructions+=1;goto B70bef2;
case 0x70bef4:goto L70bef4;
case 0x70bef7:c.instructions+=1;goto B70bef7;
case 0x70bef9:goto L70bef9;
case 0x70befc:goto L70befc;
case 0x70beff:c.instructions+=6;goto B70beff;
case 0x70bf02:c.instructions+=5;goto B70bf02;
case 0x70bf05:c.instructions+=4;goto B70bf05;
case 0x70bf08:c.instructions+=3;goto B70bf08;
case 0x70bf0b:c.instructions+=2;goto B70bf0b;
case 0x70bf0f:c.instructions+=1;goto B70bf0f;
case 0x70bf11:goto L70bf11;
case 0x70bf14:c.instructions+=5;goto B70bf14;
case 0x70bf18:c.instructions+=4;goto B70bf18;
case 0x70bf1b:c.instructions+=3;goto B70bf1b;
case 0x70bf1e:c.instructions+=2;goto B70bf1e;
case 0x70bf20:c.instructions+=1;goto B70bf20;
case 0x70bf22:goto L70bf22;
case 0x70bf24:c.instructions+=1;goto B70bf24;
case 0x70bf26:goto L70bf26;
case 0x70bf2c:c.instructions+=2;goto B70bf2c;
case 0x70bf31:c.instructions+=1;goto B70bf31;
case 0x70bf33:goto L70bf33;
case 0x70bf35:goto L70bf35;
case 0x70bf38:c.instructions+=5;goto B70bf38;
case 0x70bf3b:c.instructions+=4;goto B70bf3b;
case 0x70bf3c:c.instructions+=3;goto B70bf3c;
case 0x70bf3d:c.instructions+=2;goto B70bf3d;
case 0x70bf40:c.instructions+=1;goto B70bf40;
case 0x70bf46:goto L70bf46;
case 0x70bf49:c.instructions+=4;goto B70bf49;
case 0x70bf4c:c.instructions+=3;goto B70bf4c;
case 0x70bf4e:c.instructions+=2;goto B70bf4e;
case 0x70bf51:c.instructions+=1;goto B70bf51;
case 0x70bf57:goto L70bf57;
case 0x70bf58:c.instructions+=4;goto B70bf58;
case 0x70bf59:c.instructions+=3;goto B70bf59;
case 0x70bf5a:c.instructions+=2;goto B70bf5a;
case 0x70bf5b:c.instructions+=1;goto B70bf5b;
case 0x70bf5c:goto L70bf5c;
case 0x70bf5d:c.instructions+=53;goto B70bf5d;
case 0x70bf5f:c.instructions+=52;goto B70bf5f;
case 0x70bf62:c.instructions+=51;goto B70bf62;
case 0x70bf65:c.instructions+=50;goto B70bf65;
case 0x70bf68:c.instructions+=49;goto B70bf68;
case 0x70bf6c:c.instructions+=48;goto B70bf6c;
case 0x70bf6f:c.instructions+=47;goto B70bf6f;
case 0x70bf72:c.instructions+=46;goto B70bf72;
case 0x70bf76:c.instructions+=45;goto B70bf76;
case 0x70bf79:c.instructions+=44;goto B70bf79;
case 0x70bf7b:c.instructions+=43;goto B70bf7b;
case 0x70bf82:c.instructions+=42;goto B70bf82;
case 0x70bf85:c.instructions+=41;goto B70bf85;
case 0x70bf8c:c.instructions+=40;goto B70bf8c;
case 0x70bf8f:c.instructions+=39;goto B70bf8f;
case 0x70bf91:c.instructions+=38;goto B70bf91;
case 0x70bf92:c.instructions+=37;goto B70bf92;
case 0x70bf93:c.instructions+=36;goto B70bf93;
case 0x70bf96:c.instructions+=35;goto B70bf96;
case 0x70bf99:c.instructions+=34;goto B70bf99;
case 0x70bf9a:c.instructions+=33;goto B70bf9a;
case 0x70bf9d:c.instructions+=32;goto B70bf9d;
case 0x70bfa4:c.instructions+=31;goto B70bfa4;
case 0x70bfa7:c.instructions+=30;goto B70bfa7;
case 0x70bfa8:c.instructions+=29;goto B70bfa8;
case 0x70bfab:c.instructions+=28;goto B70bfab;
case 0x70bfae:c.instructions+=27;goto B70bfae;
case 0x70bfb2:c.instructions+=26;goto B70bfb2;
case 0x70bfb4:c.instructions+=25;goto B70bfb4;
case 0x70bfb8:c.instructions+=24;goto B70bfb8;
case 0x70bfbd:c.instructions+=23;goto B70bfbd;
case 0x70bfc1:c.instructions+=22;goto B70bfc1;
case 0x70bfc5:c.instructions+=21;goto B70bfc5;
case 0x70bfc7:c.instructions+=20;goto B70bfc7;
case 0x70bfca:c.instructions+=19;goto B70bfca;
case 0x70bfcc:c.instructions+=18;goto B70bfcc;
case 0x70bfcf:c.instructions+=17;goto B70bfcf;
case 0x70bfd1:c.instructions+=16;goto B70bfd1;
case 0x70bfd4:c.instructions+=15;goto B70bfd4;
case 0x70bfd8:c.instructions+=14;goto B70bfd8;
case 0x70bfdb:c.instructions+=13;goto B70bfdb;
case 0x70bfde:c.instructions+=12;goto B70bfde;
case 0x70bfe1:c.instructions+=11;goto B70bfe1;
case 0x70bfe5:c.instructions+=10;goto B70bfe5;
case 0x70bfe7:c.instructions+=9;goto B70bfe7;
case 0x70bfec:c.instructions+=8;goto B70bfec;
case 0x70bfee:c.instructions+=7;goto B70bfee;
case 0x70bff1:c.instructions+=6;goto B70bff1;
case 0x70bff5:c.instructions+=5;goto B70bff5;
case 0x70bff7:c.instructions+=4;goto B70bff7;
case 0x70bffa:c.instructions+=3;goto B70bffa;
case 0x70bffc:c.instructions+=2;goto B70bffc;
case 0x70bfff:c.instructions+=1;goto B70bfff;
default:missing_instruction(c.pc);}
B70b004:L70b004:{c.instructions+=23;NFSU2_TR(0x70b004);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b007:{NFSU2_TR(0x70b007);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70b00a:{NFSU2_TR(0x70b00a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b00d:{NFSU2_TR(0x70b00d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70b010:{NFSU2_TR(0x70b010);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b013:{NFSU2_TR(0x70b013);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b019:{NFSU2_TR(0x70b019);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b01c:{NFSU2_TR(0x70b01c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70b01f:{NFSU2_TR(0x70b01f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b022:{NFSU2_TR(0x70b022);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b025:{NFSU2_TR(0x70b025);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b028:{NFSU2_TR(0x70b028);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70b02b:{NFSU2_TR(0x70b02b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B70b02d:{NFSU2_TR(0x70b02d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b030:{NFSU2_TR(0x70b030);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b033:{NFSU2_TR(0x70b033);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x816a48ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B70b03a:{NFSU2_TR(0x70b03a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b03b:{NFSU2_TR(0x70b03b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B70b03d:{NFSU2_TR(0x70b03d);
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
B70b03f:{NFSU2_TR(0x70b03f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b042:{NFSU2_TR(0x70b042);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b045:{NFSU2_TR(0x70b045);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b048:{NFSU2_TR(0x70b048);
if(r1(R+518)){{goto L70b599;}}
}
B70b04e:L70b04e:{c.instructions+=3;NFSU2_TR(0x70b04e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b04f:{NFSU2_TR(0x70b04f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b050:{NFSU2_TR(0x70b050);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ec0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70b056ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70b056:L70b056:{c.instructions+=5;NFSU2_TR(0x70b056);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70b057:{NFSU2_TR(0x70b057);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70b058:{NFSU2_TR(0x70b058);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b05b:{NFSU2_TR(0x70b05b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b05e:{NFSU2_TR(0x70b05e);
{goto L70b062;}
}
B70b060:L70b060:{c.instructions+=1;NFSU2_TR(0x70b060);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B70b062:L70b062:{c.instructions+=3;NFSU2_TR(0x70b062);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b065:{NFSU2_TR(0x70b065);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B70b067:{NFSU2_TR(0x70b067);
if(r1(R+518)){{goto L70b0dc;}}
}
B70b069:L70b069:{c.instructions+=2;NFSU2_TR(0x70b069);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B70b06a:{NFSU2_TR(0x70b06a);
if(r1(R+518)){{goto L70b0ac;}}
}
B70b06c:L70b06c:{c.instructions+=2;NFSU2_TR(0x70b06c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B70b06d:{NFSU2_TR(0x70b06d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70b103;}}
}
B70b073:L70b073:{c.instructions+=14;NFSU2_TR(0x70b073);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b079:{NFSU2_TR(0x70b079);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B70b07f:{NFSU2_TR(0x70b07f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70b085:{NFSU2_TR(0x70b085);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70b08b:{NFSU2_TR(0x70b08b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b08e:{NFSU2_TR(0x70b08e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b094:{NFSU2_TR(0x70b094);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B70b096:{NFSU2_TR(0x70b096);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70b098:{NFSU2_TR(0x70b098);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b09b:{NFSU2_TR(0x70b09b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b0a1:{NFSU2_TR(0x70b0a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b0a4:{NFSU2_TR(0x70b0a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b0a7:{NFSU2_TR(0x70b0a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b0aa:{NFSU2_TR(0x70b0aa);
{goto L70b100;}
}
B70b0ac:L70b0ac:{c.instructions+=13;NFSU2_TR(0x70b0ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b0b2:{NFSU2_TR(0x70b0b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70b0b8:{NFSU2_TR(0x70b0b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70b0bb:{NFSU2_TR(0x70b0bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b0be:{NFSU2_TR(0x70b0be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b0c4:{NFSU2_TR(0x70b0c4);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B70b0c6:{NFSU2_TR(0x70b0c6);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70b0c8:{NFSU2_TR(0x70b0c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b0cb:{NFSU2_TR(0x70b0cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b0d1:{NFSU2_TR(0x70b0d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b0d4:{NFSU2_TR(0x70b0d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b0d7:{NFSU2_TR(0x70b0d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b0da:{NFSU2_TR(0x70b0da);
{goto L70b100;}
}
B70b0dc:L70b0dc:{c.instructions+=9;NFSU2_TR(0x70b0dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70b0e2:{NFSU2_TR(0x70b0e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b0e8:{NFSU2_TR(0x70b0e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70b0eb:{NFSU2_TR(0x70b0eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b0ee:{NFSU2_TR(0x70b0ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70b0f4:{NFSU2_TR(0x70b0f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b0f7:{NFSU2_TR(0x70b0f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b0fa:{NFSU2_TR(0x70b0fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b0fd:{NFSU2_TR(0x70b0fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b100:L70b100:{c.instructions+=1;NFSU2_TR(0x70b100);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B70b103:L70b103:{c.instructions+=7;NFSU2_TR(0x70b103);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70b106:{NFSU2_TR(0x70b106);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b109:{NFSU2_TR(0x70b109);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70b10c:{NFSU2_TR(0x70b10c);
__builtin_memmove((R+12),(R+8),4);
}
B70b10e:{NFSU2_TR(0x70b10e);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w8(U+8,u64(s64(s32(r4(R+12)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+12,u32(r8(U+24)));
}
B70b112:{NFSU2_TR(0x70b112);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w1(U+9,u8(u32(r1(U+8))&u32(r1(R+4))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
}
B70b115:{NFSU2_TR(0x70b115);
if(r1(R+518)){{goto L70b165;}}
}
B70b117:L70b117:{c.instructions+=5;NFSU2_TR(0x70b117);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70b11a:{NFSU2_TR(0x70b11a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B70b11b:{NFSU2_TR(0x70b11b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B70b11e:{NFSU2_TR(0x70b11e);
u8 U[13];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w1(U+12,u8(u32(r1(U+8))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+12))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+12))==(u8(0x0ull))));
w1(U+9,u8(u32(r1(U+12))&u32(u8(0xffull))));
w1(U+10,u8(__builtin_popcountll(u64(r1(U+9)))));
w1(U+11,u8(u32(r1(U+10))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+11))==(u8(0x0ull))));
}
B70b121:{NFSU2_TR(0x70b121);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70b137;}}
}
B70b123:L70b123:{c.instructions+=6;NFSU2_TR(0x70b123);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70b126:{NFSU2_TR(0x70b126);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70b129:{NFSU2_TR(0x70b129);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70b12c:{NFSU2_TR(0x70b12c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b12d:{NFSU2_TR(0x70b12d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b12e:{NFSU2_TR(0x70b12e);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ef4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70b134ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70b134:L70b134:{c.instructions+=1;NFSU2_TR(0x70b134);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B70b137:L70b137:{c.instructions+=8;NFSU2_TR(0x70b137);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70b13a:{NFSU2_TR(0x70b13a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b13d:{NFSU2_TR(0x70b13d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B70b13f:{NFSU2_TR(0x70b13f);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B70b143:{NFSU2_TR(0x70b143);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70b146:{NFSU2_TR(0x70b146);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B70b149:{NFSU2_TR(0x70b149);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(r1(R+0))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B70b14c:{NFSU2_TR(0x70b14c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70b165;}}
}
B70b14e:L70b14e:{c.instructions+=8;NFSU2_TR(0x70b14e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70b151:{NFSU2_TR(0x70b151);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b154:{NFSU2_TR(0x70b154);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b155:{NFSU2_TR(0x70b155);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70b158:{NFSU2_TR(0x70b158);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+28)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70b15a:{NFSU2_TR(0x70b15a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b15b:{NFSU2_TR(0x70b15b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b15c:{NFSU2_TR(0x70b15c);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f14),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70b162ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70b162:L70b162:{c.instructions+=1;NFSU2_TR(0x70b162);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B70b165:L70b165:{c.instructions+=8;NFSU2_TR(0x70b165);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70b168:{NFSU2_TR(0x70b168);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b16b:{NFSU2_TR(0x70b16b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B70b16d:{NFSU2_TR(0x70b16d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B70b16e:{NFSU2_TR(0x70b16e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B70b16f:{NFSU2_TR(0x70b16f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B70b170:{NFSU2_TR(0x70b170);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70b172:{NFSU2_TR(0x70b172);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70b22d;}}
}
B70b178:L70b178:{c.instructions+=11;NFSU2_TR(0x70b178);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70b17b:{NFSU2_TR(0x70b17b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70b182:{NFSU2_TR(0x70b182);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B70b185:{NFSU2_TR(0x70b185);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B70b188:{NFSU2_TR(0x70b188);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B70b189:{NFSU2_TR(0x70b189);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b18c:{NFSU2_TR(0x70b18c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b18f:{NFSU2_TR(0x70b18f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((R+8),(U+0),4);
}
B70b192:{NFSU2_TR(0x70b192);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B70b193:{NFSU2_TR(0x70b193);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b196:{NFSU2_TR(0x70b196);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b199:L70b199:{c.instructions+=6;NFSU2_TR(0x70b199);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b19c:{NFSU2_TR(0x70b19c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70b19f:{NFSU2_TR(0x70b19f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B70b1a2:{NFSU2_TR(0x70b1a2);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B70b1a5:{NFSU2_TR(0x70b1a5);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(r1(R+0))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B70b1a8:{NFSU2_TR(0x70b1a8);
if(r1(R+518)){{goto L70b219;}}
}
B70b1aa:L70b1aa:{c.instructions+=7;NFSU2_TR(0x70b1aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70b1ad:{NFSU2_TR(0x70b1ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b1b0:{NFSU2_TR(0x70b1b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70b1b3:{NFSU2_TR(0x70b1b3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xfffffff8ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xfffffff8ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70b1b6:{NFSU2_TR(0x70b1b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b1b7:{NFSU2_TR(0x70b1b7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b1b8:{NFSU2_TR(0x70b1b8);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ef4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70b1beull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70b1be:L70b1be:{c.instructions+=9;NFSU2_TR(0x70b1be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70b1c1:{NFSU2_TR(0x70b1c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b1c4:{NFSU2_TR(0x70b1c4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B70b1c6:{NFSU2_TR(0x70b1c6);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B70b1ca:{NFSU2_TR(0x70b1ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70b1cd:{NFSU2_TR(0x70b1cd);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B70b1d0:{NFSU2_TR(0x70b1d0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B70b1d3:{NFSU2_TR(0x70b1d3);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B70b1d6:{NFSU2_TR(0x70b1d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70b1eb;}}
}
B70b1d8:L70b1d8:{c.instructions+=5;NFSU2_TR(0x70b1d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70b1db:{NFSU2_TR(0x70b1db);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70b1de:{NFSU2_TR(0x70b1de);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70b1e1:{NFSU2_TR(0x70b1e1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b1e2:{NFSU2_TR(0x70b1e2);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ef4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70b1e8ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70b1e8:L70b1e8:{c.instructions+=1;NFSU2_TR(0x70b1e8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B70b1eb:L70b1eb:{c.instructions+=6;NFSU2_TR(0x70b1eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b1ee:{NFSU2_TR(0x70b1ee);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B70b1f2:{NFSU2_TR(0x70b1f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70b1f5:{NFSU2_TR(0x70b1f5);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B70b1f8:{NFSU2_TR(0x70b1f8);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B70b1fb:{NFSU2_TR(0x70b1fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70b219;}}
}
B70b1fd:L70b1fd:{c.instructions+=9;NFSU2_TR(0x70b1fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70b200:{NFSU2_TR(0x70b200);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b203:{NFSU2_TR(0x70b203);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70b206:{NFSU2_TR(0x70b206);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b207:{NFSU2_TR(0x70b207);
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
B70b20a:{NFSU2_TR(0x70b20a);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffffaull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B70b20e:{NFSU2_TR(0x70b20e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b20f:{NFSU2_TR(0x70b20f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b210:{NFSU2_TR(0x70b210);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f14),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70b216ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70b216:L70b216:{c.instructions+=1;NFSU2_TR(0x70b216);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B70b219:L70b219:{c.instructions+=5;NFSU2_TR(0x70b219);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70b21d:{NFSU2_TR(0x70b21d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B70b21e:{NFSU2_TR(0x70b21e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70b221:{NFSU2_TR(0x70b221);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70b224:{NFSU2_TR(0x70b224);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70b199u);}goto L70b199;}}
}
B70b22a:L70b22a:{c.instructions+=1;NFSU2_TR(0x70b22a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70b22d:L70b22d:{c.instructions+=6;NFSU2_TR(0x70b22d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b230:{NFSU2_TR(0x70b230);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70b233:{NFSU2_TR(0x70b233);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B70b236:{NFSU2_TR(0x70b236);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B70b239:{NFSU2_TR(0x70b239);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B70b23c:{NFSU2_TR(0x70b23c);
if(r1(R+518)){{goto L70b28b;}}
}
B70b23e:L70b23e:{c.instructions+=9;NFSU2_TR(0x70b23e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70b241:{NFSU2_TR(0x70b241);
__builtin_memmove((R+0),(R+4),4);
}
B70b243:{NFSU2_TR(0x70b243);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70b246:{NFSU2_TR(0x70b246);
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
B70b249:{NFSU2_TR(0x70b249);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b24c:{NFSU2_TR(0x70b24c);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B70b250:{NFSU2_TR(0x70b250);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b251:{NFSU2_TR(0x70b251);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b252:{NFSU2_TR(0x70b252);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ef4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70b258ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70b258:L70b258:{c.instructions+=8;NFSU2_TR(0x70b258);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b25b:{NFSU2_TR(0x70b25b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70b25e:{NFSU2_TR(0x70b25e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B70b260:{NFSU2_TR(0x70b260);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B70b264:{NFSU2_TR(0x70b264);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B70b267:{NFSU2_TR(0x70b267);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B70b26a:{NFSU2_TR(0x70b26a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(r1(R+0))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B70b26d:{NFSU2_TR(0x70b26d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70b28b;}}
}
B70b26f:L70b26f:{c.instructions+=10;NFSU2_TR(0x70b26f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70b272:{NFSU2_TR(0x70b272);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b275:{NFSU2_TR(0x70b275);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70b278:{NFSU2_TR(0x70b278);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b279:{NFSU2_TR(0x70b279);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70b27c:{NFSU2_TR(0x70b27c);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B70b27e:{NFSU2_TR(0x70b27e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+4),r4(R+28)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70b280:{NFSU2_TR(0x70b280);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b281:{NFSU2_TR(0x70b281);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b282:{NFSU2_TR(0x70b282);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f14),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70b288ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70b288:L70b288:{c.instructions+=1;NFSU2_TR(0x70b288);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B70b28b:L70b28b:{c.instructions+=8;NFSU2_TR(0x70b28b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b28e:{NFSU2_TR(0x70b28e);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70b291:{NFSU2_TR(0x70b291);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B70b293:{NFSU2_TR(0x70b293);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b296:{NFSU2_TR(0x70b296);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B70b297:{NFSU2_TR(0x70b297);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B70b298:{NFSU2_TR(0x70b298);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70b29b:{NFSU2_TR(0x70b29b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70b479;}}
}
B70b2a1:L70b2a1:{c.instructions+=2;NFSU2_TR(0x70b2a1);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B70b2a2:{NFSU2_TR(0x70b2a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b2a5:L70b2a5:{c.instructions+=6;NFSU2_TR(0x70b2a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b2a8:{NFSU2_TR(0x70b2a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70b2ab:{NFSU2_TR(0x70b2ab);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B70b2ae:{NFSU2_TR(0x70b2ae);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B70b2b1:{NFSU2_TR(0x70b2b1);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B70b2b4:{NFSU2_TR(0x70b2b4);
if(r1(R+518)){{goto L70b318;}}
}
B70b2b6:L70b2b6:{c.instructions+=5;NFSU2_TR(0x70b2b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70b2b9:{NFSU2_TR(0x70b2b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70b2bc:{NFSU2_TR(0x70b2bc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b2bd:{NFSU2_TR(0x70b2bd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b2be:{NFSU2_TR(0x70b2be);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f14),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70b2c4ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70b2c4:L70b2c4:{c.instructions+=7;NFSU2_TR(0x70b2c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70b2c7:{NFSU2_TR(0x70b2c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70b2ca:{NFSU2_TR(0x70b2ca);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B70b2ce:{NFSU2_TR(0x70b2ce);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B70b2d1:{NFSU2_TR(0x70b2d1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B70b2d4:{NFSU2_TR(0x70b2d4);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B70b2d7:{NFSU2_TR(0x70b2d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70b2ed;}}
}
B70b2d9:L70b2d9:{c.instructions+=6;NFSU2_TR(0x70b2d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70b2dc:{NFSU2_TR(0x70b2dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70b2df:{NFSU2_TR(0x70b2df);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70b2e2:{NFSU2_TR(0x70b2e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b2e3:{NFSU2_TR(0x70b2e3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b2e4:{NFSU2_TR(0x70b2e4);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ef4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70b2eaull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70b2ea:L70b2ea:{c.instructions+=1;NFSU2_TR(0x70b2ea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B70b2ed:L70b2ed:{c.instructions+=7;NFSU2_TR(0x70b2ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b2f0:{NFSU2_TR(0x70b2f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70b2f3:{NFSU2_TR(0x70b2f3);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B70b2f5:{NFSU2_TR(0x70b2f5);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B70b2f9:{NFSU2_TR(0x70b2f9);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B70b2fc:{NFSU2_TR(0x70b2fc);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(r1(R+0))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B70b2ff:{NFSU2_TR(0x70b2ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70b318;}}
}
B70b301:L70b301:{c.instructions+=8;NFSU2_TR(0x70b301);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70b304:{NFSU2_TR(0x70b304);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b307:{NFSU2_TR(0x70b307);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b308:{NFSU2_TR(0x70b308);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70b30b:{NFSU2_TR(0x70b30b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+28)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70b30d:{NFSU2_TR(0x70b30d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b30e:{NFSU2_TR(0x70b30e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b30f:{NFSU2_TR(0x70b30f);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f14),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70b315ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70b315:L70b315:{c.instructions+=1;NFSU2_TR(0x70b315);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B70b318:L70b318:{c.instructions+=7;NFSU2_TR(0x70b318);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b31b:{NFSU2_TR(0x70b31b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B70b31d:{NFSU2_TR(0x70b31d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B70b31e:{NFSU2_TR(0x70b31e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B70b31f:{NFSU2_TR(0x70b31f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B70b320:{NFSU2_TR(0x70b320);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70b322:{NFSU2_TR(0x70b322);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70b3f5;}}
}
B70b328:L70b328:{c.instructions+=11;NFSU2_TR(0x70b328);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70b32b:{NFSU2_TR(0x70b32b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70b332:{NFSU2_TR(0x70b332);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B70b335:{NFSU2_TR(0x70b335);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B70b338:{NFSU2_TR(0x70b338);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B70b339:{NFSU2_TR(0x70b339);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b33c:{NFSU2_TR(0x70b33c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b33f:{NFSU2_TR(0x70b33f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((R+8),(U+0),4);
}
B70b342:{NFSU2_TR(0x70b342);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B70b343:{NFSU2_TR(0x70b343);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b346:{NFSU2_TR(0x70b346);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b349:L70b349:{c.instructions+=6;NFSU2_TR(0x70b349);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b34c:{NFSU2_TR(0x70b34c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70b34f:{NFSU2_TR(0x70b34f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B70b352:{NFSU2_TR(0x70b352);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B70b355:{NFSU2_TR(0x70b355);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(r1(R+0))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B70b358:{NFSU2_TR(0x70b358);
if(r1(R+518)){{goto L70b3e1;}}
}
B70b35e:L70b35e:{c.instructions+=7;NFSU2_TR(0x70b35e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70b361:{NFSU2_TR(0x70b361);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b364:{NFSU2_TR(0x70b364);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70b367:{NFSU2_TR(0x70b367);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xfffffff8ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xfffffff8ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70b36a:{NFSU2_TR(0x70b36a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b36b:{NFSU2_TR(0x70b36b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b36c:{NFSU2_TR(0x70b36c);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ef4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70b372ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70b372:L70b372:{c.instructions+=7;NFSU2_TR(0x70b372);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70b375:{NFSU2_TR(0x70b375);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b378:{NFSU2_TR(0x70b378);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70b37b:{NFSU2_TR(0x70b37b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xfffffffaull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xfffffffaull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffaull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70b37e:{NFSU2_TR(0x70b37e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b37f:{NFSU2_TR(0x70b37f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b380:{NFSU2_TR(0x70b380);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f14),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70b386ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70b386:L70b386:{c.instructions+=9;NFSU2_TR(0x70b386);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70b389:{NFSU2_TR(0x70b389);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b38c:{NFSU2_TR(0x70b38c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B70b38e:{NFSU2_TR(0x70b38e);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B70b392:{NFSU2_TR(0x70b392);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70b395:{NFSU2_TR(0x70b395);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B70b398:{NFSU2_TR(0x70b398);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B70b39b:{NFSU2_TR(0x70b39b);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B70b39e:{NFSU2_TR(0x70b39e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70b3b3;}}
}
B70b3a0:L70b3a0:{c.instructions+=5;NFSU2_TR(0x70b3a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70b3a3:{NFSU2_TR(0x70b3a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70b3a6:{NFSU2_TR(0x70b3a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70b3a9:{NFSU2_TR(0x70b3a9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b3aa:{NFSU2_TR(0x70b3aa);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ef4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70b3b0ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70b3b0:L70b3b0:{c.instructions+=1;NFSU2_TR(0x70b3b0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B70b3b3:L70b3b3:{c.instructions+=6;NFSU2_TR(0x70b3b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b3b6:{NFSU2_TR(0x70b3b6);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B70b3ba:{NFSU2_TR(0x70b3ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70b3bd:{NFSU2_TR(0x70b3bd);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B70b3c0:{NFSU2_TR(0x70b3c0);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B70b3c3:{NFSU2_TR(0x70b3c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70b3e1;}}
}
B70b3c5:L70b3c5:{c.instructions+=9;NFSU2_TR(0x70b3c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70b3c8:{NFSU2_TR(0x70b3c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b3cb:{NFSU2_TR(0x70b3cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70b3ce:{NFSU2_TR(0x70b3ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b3cf:{NFSU2_TR(0x70b3cf);
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
B70b3d2:{NFSU2_TR(0x70b3d2);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffffaull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B70b3d6:{NFSU2_TR(0x70b3d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b3d7:{NFSU2_TR(0x70b3d7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b3d8:{NFSU2_TR(0x70b3d8);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f14),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70b3deull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70b3de:L70b3de:{c.instructions+=1;NFSU2_TR(0x70b3de);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B70b3e1:L70b3e1:{c.instructions+=5;NFSU2_TR(0x70b3e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70b3e5:{NFSU2_TR(0x70b3e5);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B70b3e6:{NFSU2_TR(0x70b3e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70b3e9:{NFSU2_TR(0x70b3e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70b3ec:{NFSU2_TR(0x70b3ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70b349u);}goto L70b349;}}
}
B70b3f2:L70b3f2:{c.instructions+=1;NFSU2_TR(0x70b3f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70b3f5:L70b3f5:{c.instructions+=6;NFSU2_TR(0x70b3f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b3f8:{NFSU2_TR(0x70b3f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70b3fb:{NFSU2_TR(0x70b3fb);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B70b3fe:{NFSU2_TR(0x70b3fe);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B70b401:{NFSU2_TR(0x70b401);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(r1(R+0))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B70b404:{NFSU2_TR(0x70b404);
if(r1(R+518)){{goto L70b467;}}
}
B70b406:L70b406:{c.instructions+=10;NFSU2_TR(0x70b406);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70b409:{NFSU2_TR(0x70b409);
__builtin_memmove((R+0),(R+4),4);
}
B70b40b:{NFSU2_TR(0x70b40b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70b40e:{NFSU2_TR(0x70b40e);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70b411:{NFSU2_TR(0x70b411);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b414:{NFSU2_TR(0x70b414);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B70b416:{NFSU2_TR(0x70b416);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xfffffffeull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xfffffffeull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70b419:{NFSU2_TR(0x70b419);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b41a:{NFSU2_TR(0x70b41a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b41b:{NFSU2_TR(0x70b41b);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ef4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70b421ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70b421:L70b421:{c.instructions+=7;NFSU2_TR(0x70b421);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70b424:{NFSU2_TR(0x70b424);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b427:{NFSU2_TR(0x70b427);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70b42a:{NFSU2_TR(0x70b42a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+28)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70b42c:{NFSU2_TR(0x70b42c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b42d:{NFSU2_TR(0x70b42d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b42e:{NFSU2_TR(0x70b42e);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f14),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70b434ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70b434:L70b434:{c.instructions+=8;NFSU2_TR(0x70b434);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b437:{NFSU2_TR(0x70b437);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70b43a:{NFSU2_TR(0x70b43a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B70b43c:{NFSU2_TR(0x70b43c);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B70b440:{NFSU2_TR(0x70b440);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B70b443:{NFSU2_TR(0x70b443);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B70b446:{NFSU2_TR(0x70b446);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(r1(R+0))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B70b449:{NFSU2_TR(0x70b449);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70b467;}}
}
B70b44b:L70b44b:{c.instructions+=10;NFSU2_TR(0x70b44b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70b44e:{NFSU2_TR(0x70b44e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b451:{NFSU2_TR(0x70b451);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70b454:{NFSU2_TR(0x70b454);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b455:{NFSU2_TR(0x70b455);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70b458:{NFSU2_TR(0x70b458);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B70b45a:{NFSU2_TR(0x70b45a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+4),r4(R+28)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70b45c:{NFSU2_TR(0x70b45c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b45d:{NFSU2_TR(0x70b45d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b45e:{NFSU2_TR(0x70b45e);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f14),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70b464ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70b464:L70b464:{c.instructions+=1;NFSU2_TR(0x70b464);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B70b467:L70b467:{c.instructions+=6;NFSU2_TR(0x70b467);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b46a:{NFSU2_TR(0x70b46a);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70b46d:{NFSU2_TR(0x70b46d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B70b46e:{NFSU2_TR(0x70b46e);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B70b470:{NFSU2_TR(0x70b470);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70b473:{NFSU2_TR(0x70b473);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70b2a5u);}goto L70b2a5;}}
}
B70b479:L70b479:{c.instructions+=6;NFSU2_TR(0x70b479);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b47c:{NFSU2_TR(0x70b47c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70b47f:{NFSU2_TR(0x70b47f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B70b482:{NFSU2_TR(0x70b482);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B70b485:{NFSU2_TR(0x70b485);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B70b488:{NFSU2_TR(0x70b488);
if(r1(R+518)){{goto L70b4c1;}}
}
B70b48a:L70b48a:{c.instructions+=5;NFSU2_TR(0x70b48a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70b48d:{NFSU2_TR(0x70b48d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70b490:{NFSU2_TR(0x70b490);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b491:{NFSU2_TR(0x70b491);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b492:{NFSU2_TR(0x70b492);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f14),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70b498ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70b498:L70b498:{c.instructions+=7;NFSU2_TR(0x70b498);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70b49b:{NFSU2_TR(0x70b49b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70b49e:{NFSU2_TR(0x70b49e);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B70b4a2:{NFSU2_TR(0x70b4a2);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B70b4a5:{NFSU2_TR(0x70b4a5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B70b4a8:{NFSU2_TR(0x70b4a8);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B70b4ab:{NFSU2_TR(0x70b4ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70b4c1;}}
}
B70b4ad:L70b4ad:{c.instructions+=6;NFSU2_TR(0x70b4ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70b4b0:{NFSU2_TR(0x70b4b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70b4b3:{NFSU2_TR(0x70b4b3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70b4b6:{NFSU2_TR(0x70b4b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b4b7:{NFSU2_TR(0x70b4b7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b4b8:{NFSU2_TR(0x70b4b8);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ef4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70b4beull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70b4be:L70b4be:{c.instructions+=1;NFSU2_TR(0x70b4be);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B70b4c1:L70b4c1:{c.instructions+=7;NFSU2_TR(0x70b4c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b4c4:{NFSU2_TR(0x70b4c4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B70b4c6:{NFSU2_TR(0x70b4c6);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B70b4c7:{NFSU2_TR(0x70b4c7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B70b4c8:{NFSU2_TR(0x70b4c8);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B70b4c9:{NFSU2_TR(0x70b4c9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70b4cb:{NFSU2_TR(0x70b4cb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70b556;}}
}
B70b4d1:L70b4d1:{c.instructions+=8;NFSU2_TR(0x70b4d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70b4d4:{NFSU2_TR(0x70b4d4);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B70b4d5:{NFSU2_TR(0x70b4d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b4d8:{NFSU2_TR(0x70b4d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b4db:{NFSU2_TR(0x70b4db);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((R+4),(U+0),4);
}
B70b4de:{NFSU2_TR(0x70b4de);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B70b4df:{NFSU2_TR(0x70b4df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b4e2:{NFSU2_TR(0x70b4e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b4e5:L70b4e5:{c.instructions+=6;NFSU2_TR(0x70b4e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b4e8:{NFSU2_TR(0x70b4e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70b4eb:{NFSU2_TR(0x70b4eb);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B70b4ee:{NFSU2_TR(0x70b4ee);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B70b4f1:{NFSU2_TR(0x70b4f1);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(r1(R+0))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B70b4f4:{NFSU2_TR(0x70b4f4);
if(r1(R+518)){{goto L70b546;}}
}
B70b4f6:L70b4f6:{c.instructions+=7;NFSU2_TR(0x70b4f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70b4f9:{NFSU2_TR(0x70b4f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b4fc:{NFSU2_TR(0x70b4fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70b4ff:{NFSU2_TR(0x70b4ff);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xfffffff8ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xfffffff8ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70b502:{NFSU2_TR(0x70b502);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b503:{NFSU2_TR(0x70b503);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b504:{NFSU2_TR(0x70b504);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ef4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70b50aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70b50a:L70b50a:{c.instructions+=7;NFSU2_TR(0x70b50a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70b50d:{NFSU2_TR(0x70b50d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b510:{NFSU2_TR(0x70b510);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70b513:{NFSU2_TR(0x70b513);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xfffffffaull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xfffffffaull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffaull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70b516:{NFSU2_TR(0x70b516);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b517:{NFSU2_TR(0x70b517);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b518:{NFSU2_TR(0x70b518);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f14),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70b51eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70b51e:L70b51e:{c.instructions+=7;NFSU2_TR(0x70b51e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b521:{NFSU2_TR(0x70b521);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B70b525:{NFSU2_TR(0x70b525);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70b528:{NFSU2_TR(0x70b528);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B70b52b:{NFSU2_TR(0x70b52b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B70b52e:{NFSU2_TR(0x70b52e);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B70b531:{NFSU2_TR(0x70b531);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70b546;}}
}
B70b533:L70b533:{c.instructions+=5;NFSU2_TR(0x70b533);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70b536:{NFSU2_TR(0x70b536);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70b539:{NFSU2_TR(0x70b539);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70b53c:{NFSU2_TR(0x70b53c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b53d:{NFSU2_TR(0x70b53d);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ef4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70b543ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70b543:L70b543:{c.instructions+=1;NFSU2_TR(0x70b543);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B70b546:L70b546:{c.instructions+=5;NFSU2_TR(0x70b546);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70b54a:{NFSU2_TR(0x70b54a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B70b54b:{NFSU2_TR(0x70b54b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70b54e:{NFSU2_TR(0x70b54e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70b551:{NFSU2_TR(0x70b551);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70b4e5u);}goto L70b4e5;}}
}
B70b553:L70b553:{c.instructions+=1;NFSU2_TR(0x70b553);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70b556:L70b556:{c.instructions+=6;NFSU2_TR(0x70b556);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b559:{NFSU2_TR(0x70b559);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70b55c:{NFSU2_TR(0x70b55c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B70b55f:{NFSU2_TR(0x70b55f);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B70b562:{NFSU2_TR(0x70b562);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B70b565:{NFSU2_TR(0x70b565);
if(r1(R+518)){{goto L70b58c;}}
}
B70b567:L70b567:{c.instructions+=7;NFSU2_TR(0x70b567);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70b56a:{NFSU2_TR(0x70b56a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B70b56d:{NFSU2_TR(0x70b56d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70b570:{NFSU2_TR(0x70b570);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+0),(U+0),4);
}
B70b573:{NFSU2_TR(0x70b573);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b574:{NFSU2_TR(0x70b574);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b575:{NFSU2_TR(0x70b575);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ef4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70b57bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70b57b:L70b57b:{c.instructions+=5;NFSU2_TR(0x70b57b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70b57e:{NFSU2_TR(0x70b57e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70b581:{NFSU2_TR(0x70b581);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b582:{NFSU2_TR(0x70b582);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b583:{NFSU2_TR(0x70b583);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f14),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70b589ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70b589:L70b589:{c.instructions+=1;NFSU2_TR(0x70b589);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B70b58c:L70b58c:{c.instructions+=3;NFSU2_TR(0x70b58c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70b58f:{NFSU2_TR(0x70b58f);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
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
B70b593:{NFSU2_TR(0x70b593);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70b060u);}goto L70b060;}}
}
B70b599:L70b599:{c.instructions+=5;NFSU2_TR(0x70b599);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70b59a:{NFSU2_TR(0x70b59a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70b59b:{NFSU2_TR(0x70b59b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70b59c:{NFSU2_TR(0x70b59c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70b59d:{NFSU2_TR(0x70b59d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70b59e:L70b59e:{c.instructions+=31;NFSU2_TR(0x70b59e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b59f:{NFSU2_TR(0x70b59f);
__builtin_memmove((R+20),(R+16),4);
}
B70b5a1:{NFSU2_TR(0x70b5a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70b5a4:{NFSU2_TR(0x70b5a4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b5a5:{NFSU2_TR(0x70b5a5);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B70b5a8:{NFSU2_TR(0x70b5a8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b5a9:{NFSU2_TR(0x70b5a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70b5ac:{NFSU2_TR(0x70b5ac);
__builtin_memmove((R+0),(R+4),4);
}
B70b5ae:{NFSU2_TR(0x70b5ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B70b5b1:{NFSU2_TR(0x70b5b1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B70b5b3:{NFSU2_TR(0x70b5b3);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B70b5b5:{NFSU2_TR(0x70b5b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B70b5b8:{NFSU2_TR(0x70b5b8);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B70b5ba:{NFSU2_TR(0x70b5ba);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
__builtin_memmove((R+12),(U+0),1);
}
B70b5bd:{NFSU2_TR(0x70b5bd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b5be:{NFSU2_TR(0x70b5be);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B70b5c1:{NFSU2_TR(0x70b5c1);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+24))));
}
B70b5c3:{NFSU2_TR(0x70b5c3);
__builtin_memmove((R+8),(R+12),4);
}
B70b5c5:{NFSU2_TR(0x70b5c5);
__builtin_memmove((R+0),(R+8),4);
}
B70b5c7:{NFSU2_TR(0x70b5c7);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B70b5ca:{NFSU2_TR(0x70b5ca);
__builtin_memmove((R+28),(R+0),4);
}
B70b5cc:{NFSU2_TR(0x70b5cc);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+8))));
}
B70b5ce:{NFSU2_TR(0x70b5ce);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B70b5d0:{NFSU2_TR(0x70b5d0);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B70b5d2:{NFSU2_TR(0x70b5d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70b5d3:{NFSU2_TR(0x70b5d3);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B70b5d5:{NFSU2_TR(0x70b5d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70b5d6:{NFSU2_TR(0x70b5d6);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70b5d8:{NFSU2_TR(0x70b5d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70b5d9:{NFSU2_TR(0x70b5d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B70b5da:{NFSU2_TR(0x70b5da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70b5db:L70b5db:{c.instructions+=25;NFSU2_TR(0x70b5db);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b5dc:{NFSU2_TR(0x70b5dc);
__builtin_memmove((R+20),(R+16),4);
}
B70b5de:{NFSU2_TR(0x70b5de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x168ull))));
}
B70b5e4:{NFSU2_TR(0x70b5e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b5e7:{NFSU2_TR(0x70b5e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70b5ea:{NFSU2_TR(0x70b5ea);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70b5ed:{NFSU2_TR(0x70b5ed);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b5ee:{NFSU2_TR(0x70b5ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B70b5f1:{NFSU2_TR(0x70b5f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x817048ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b5f7:{NFSU2_TR(0x70b5f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70b5fa:{NFSU2_TR(0x70b5fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b5fd:{NFSU2_TR(0x70b5fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b600:{NFSU2_TR(0x70b600);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b601:{NFSU2_TR(0x70b601);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b604:{NFSU2_TR(0x70b604);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B70b607:{NFSU2_TR(0x70b607);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b608:{NFSU2_TR(0x70b608);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b60b:{NFSU2_TR(0x70b60b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B70b60d:{NFSU2_TR(0x70b60d);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70b60f:{NFSU2_TR(0x70b60f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b612:{NFSU2_TR(0x70b612);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70b615:{NFSU2_TR(0x70b615);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70b616:{NFSU2_TR(0x70b616);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70b618:{NFSU2_TR(0x70b618);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b61b:{NFSU2_TR(0x70b61b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70b620;}}
}
B70b61d:L70b61d:{c.instructions+=1;NFSU2_TR(0x70b61d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b620:L70b620:{c.instructions+=4;NFSU2_TR(0x70b620);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b623:{NFSU2_TR(0x70b623);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b626:{NFSU2_TR(0x70b626);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe98ull))));
__builtin_memmove((R+8),(U+0),4);
}
B70b62c:{NFSU2_TR(0x70b62c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70b633:L70b633:{c.instructions+=5;NFSU2_TR(0x70b633);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b636:{NFSU2_TR(0x70b636);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70b639:{NFSU2_TR(0x70b639);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b63c:{NFSU2_TR(0x70b63c);
__builtin_memmove((R+4),(R+8),4);
}
B70b63e:{NFSU2_TR(0x70b63e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70b645:L70b645:{c.instructions+=7;NFSU2_TR(0x70b645);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b648:{NFSU2_TR(0x70b648);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+24,u32(r1(U+0)));
}
B70b64b:{NFSU2_TR(0x70b64b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+8,u32(r1(U+0)));
}
B70b64e:{NFSU2_TR(0x70b64e);
__builtin_memmove((R+0),(R+24),4);
}
B70b650:{NFSU2_TR(0x70b650);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B70b652:{NFSU2_TR(0x70b652);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70b654:{NFSU2_TR(0x70b654);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L70b65a;}}
}
B70b656:L70b656:{c.instructions+=2;NFSU2_TR(0x70b656);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
}
B70b658:{NFSU2_TR(0x70b658);
__builtin_memmove((R+0),(R+8),4);
}
B70b65a:L70b65a:{c.instructions+=5;NFSU2_TR(0x70b65a);
__builtin_memmove((R+8),(R+12),4);
}
B70b65c:{NFSU2_TR(0x70b65c);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B70b65e:{NFSU2_TR(0x70b65e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x20ull))));
}
B70b661:{NFSU2_TR(0x70b661);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xffffffc0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffc0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B70b664:{NFSU2_TR(0x70b664);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L70b66b;}}
}
B70b666:L70b666:{c.instructions+=2;NFSU2_TR(0x70b666);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70b669:{NFSU2_TR(0x70b669);
{goto L70b67b;}
}
B70b66b:L70b66b:{c.instructions+=2;NFSU2_TR(0x70b66b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B70b66d:{NFSU2_TR(0x70b66d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L70b673;}}
}
B70b66f:L70b66f:{c.instructions+=2;NFSU2_TR(0x70b66f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B70b671:{NFSU2_TR(0x70b671);
{goto L70b67b;}
}
B70b673:L70b673:{c.instructions+=2;NFSU2_TR(0x70b673);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70b676:{NFSU2_TR(0x70b676);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70b67b;}}
}
B70b678:L70b678:{c.instructions+=1;NFSU2_TR(0x70b678);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70b67b:L70b67b:{c.instructions+=7;NFSU2_TR(0x70b67b);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
s2(u32(r4(R+4)),r2(U+0));
}
B70b67e:{NFSU2_TR(0x70b67e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B70b67f:{NFSU2_TR(0x70b67f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B70b680:{NFSU2_TR(0x70b680);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B70b681:{NFSU2_TR(0x70b681);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70b684:{NFSU2_TR(0x70b684);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70b687:{NFSU2_TR(0x70b687);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70b645u);}goto L70b645;}}
}
B70b689:L70b689:{c.instructions+=6;NFSU2_TR(0x70b689);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b68c:{NFSU2_TR(0x70b68c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B70b68f:{NFSU2_TR(0x70b68f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B70b692:{NFSU2_TR(0x70b692);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70b695:{NFSU2_TR(0x70b695);
__builtin_memmove((R+8),(R+4),4);
}
B70b697:{NFSU2_TR(0x70b697);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70b633u);}goto L70b633;}}
}
B70b699:L70b699:{c.instructions+=3;NFSU2_TR(0x70b699);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70b69c:{NFSU2_TR(0x70b69c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff28ull))));
__builtin_memmove((R+8),(U+0),4);
}
B70b6a2:{NFSU2_TR(0x70b6a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70b6a9:L70b6a9:{c.instructions+=2;NFSU2_TR(0x70b6a9);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B70b6ab:{NFSU2_TR(0x70b6ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b6ae:L70b6ae:{c.instructions+=6;NFSU2_TR(0x70b6ae);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+28,u32(r1(U+8)));
}
B70b6b2:{NFSU2_TR(0x70b6b2);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+8,u32(r1(U+12)));
}
B70b6b7:{NFSU2_TR(0x70b6b7);
__builtin_memmove((R+0),(R+28),4);
}
B70b6b9:{NFSU2_TR(0x70b6b9);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B70b6bb:{NFSU2_TR(0x70b6bb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70b6bd:{NFSU2_TR(0x70b6bd);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L70b6c3;}}
}
B70b6bf:L70b6bf:{c.instructions+=2;NFSU2_TR(0x70b6bf);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B70b6c1:{NFSU2_TR(0x70b6c1);
__builtin_memmove((R+0),(R+8),4);
}
B70b6c3:L70b6c3:{c.instructions+=5;NFSU2_TR(0x70b6c3);
__builtin_memmove((R+8),(R+12),4);
}
B70b6c5:{NFSU2_TR(0x70b6c5);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B70b6c7:{NFSU2_TR(0x70b6c7);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x20ull))));
}
B70b6ca:{NFSU2_TR(0x70b6ca);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xffffffc0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffc0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B70b6cd:{NFSU2_TR(0x70b6cd);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L70b6d4;}}
}
B70b6cf:L70b6cf:{c.instructions+=2;NFSU2_TR(0x70b6cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70b6d2:{NFSU2_TR(0x70b6d2);
{goto L70b6e4;}
}
B70b6d4:L70b6d4:{c.instructions+=2;NFSU2_TR(0x70b6d4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B70b6d6:{NFSU2_TR(0x70b6d6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L70b6dc;}}
}
B70b6d8:L70b6d8:{c.instructions+=2;NFSU2_TR(0x70b6d8);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B70b6da:{NFSU2_TR(0x70b6da);
{goto L70b6e4;}
}
B70b6dc:L70b6dc:{c.instructions+=2;NFSU2_TR(0x70b6dc);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70b6df:{NFSU2_TR(0x70b6df);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70b6e4;}}
}
B70b6e1:L70b6e1:{c.instructions+=1;NFSU2_TR(0x70b6e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70b6e4:L70b6e4:{c.instructions+=6;NFSU2_TR(0x70b6e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b6e7:{NFSU2_TR(0x70b6e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x2ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70b6eb:{NFSU2_TR(0x70b6eb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B70b6ec:{NFSU2_TR(0x70b6ec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x9ull))));
}
B70b6ef:{NFSU2_TR(0x70b6ef);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
s2(u32(r4(R+0)),r2(U+0));
}
B70b6f2:{NFSU2_TR(0x70b6f2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70b6aeu);}goto L70b6ae;}}
}
B70b6f4:L70b6f4:{c.instructions+=4;NFSU2_TR(0x70b6f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B70b6f7:{NFSU2_TR(0x70b6f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70b6fa:{NFSU2_TR(0x70b6fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70b6fd:{NFSU2_TR(0x70b6fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70b6a9u);}goto L70b6a9;}}
}
B70b6ff:L70b6ff:{c.instructions+=29;NFSU2_TR(0x70b6ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70b702:{NFSU2_TR(0x70b702);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70b705:{NFSU2_TR(0x70b705);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70b708:{NFSU2_TR(0x70b708);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70b70b:{NFSU2_TR(0x70b70b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B70b70e:{NFSU2_TR(0x70b70e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b711:{NFSU2_TR(0x70b711);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70b714:{NFSU2_TR(0x70b714);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b717:{NFSU2_TR(0x70b717);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B70b71a:{NFSU2_TR(0x70b71a);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
}
B70b71c:{NFSU2_TR(0x70b71c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b71f:{NFSU2_TR(0x70b71f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70b722:{NFSU2_TR(0x70b722);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
}
B70b724:{NFSU2_TR(0x70b724);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b727:{NFSU2_TR(0x70b727);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70b72a:{NFSU2_TR(0x70b72a);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+12))));
}
B70b72c:{NFSU2_TR(0x70b72c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b72f:{NFSU2_TR(0x70b72f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70b732:{NFSU2_TR(0x70b732);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+12))));
}
B70b734:{NFSU2_TR(0x70b734);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b737:{NFSU2_TR(0x70b737);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70b73a:{NFSU2_TR(0x70b73a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B70b73d:{NFSU2_TR(0x70b73d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff2aull))));
__builtin_memmove((R+8),(U+0),4);
}
B70b743:{NFSU2_TR(0x70b743);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b746:{NFSU2_TR(0x70b746);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70b749:{NFSU2_TR(0x70b749);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b74c:{NFSU2_TR(0x70b74c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffea8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70b752:{NFSU2_TR(0x70b752);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b755:{NFSU2_TR(0x70b755);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70b75c:L70b75c:{c.instructions+=40;NFSU2_TR(0x70b75c);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B70b760:{NFSU2_TR(0x70b760);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b763:{NFSU2_TR(0x70b763);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+28,u32(s32(s16(r2(U+0)))));
}
B70b766:{NFSU2_TR(0x70b766);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+8,u32(r1(U+0)));
}
B70b769:{NFSU2_TR(0x70b769);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b76c:{NFSU2_TR(0x70b76c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B70b770:{NFSU2_TR(0x70b770);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b773:{NFSU2_TR(0x70b773);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70b776:{NFSU2_TR(0x70b776);
w4(R+12,u32(0x80ull));
}
B70b77b:{NFSU2_TR(0x70b77b);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B70b77d:{NFSU2_TR(0x70b77d);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+28,u32(s32(s16(r2(U+0)))));
}
B70b780:{NFSU2_TR(0x70b780);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B70b782:{NFSU2_TR(0x70b782);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B70b786:{NFSU2_TR(0x70b786);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B70b788:{NFSU2_TR(0x70b788);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))-u32(r4(U+4))));
}
B70b78b:{NFSU2_TR(0x70b78b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70b78e:{NFSU2_TR(0x70b78e);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w8(U+8,u64(s64(s32(r4(R+12)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+12,u32(r8(U+24)));
}
B70b792:{NFSU2_TR(0x70b792);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B70b794:{NFSU2_TR(0x70b794);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+28,u32(r1(U+8)));
}
B70b798:{NFSU2_TR(0x70b798);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B70b79b:{NFSU2_TR(0x70b79b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B70b79e:{NFSU2_TR(0x70b79e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70b7a1:{NFSU2_TR(0x70b7a1);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B70b7a5:{NFSU2_TR(0x70b7a5);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B70b7a7:{NFSU2_TR(0x70b7a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B70b7ab:{NFSU2_TR(0x70b7ab);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B70b7ae:{NFSU2_TR(0x70b7ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70b7b1:{NFSU2_TR(0x70b7b1);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B70b7b3:{NFSU2_TR(0x70b7b3);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B70b7b5:{NFSU2_TR(0x70b7b5);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+28,u32(r1(U+0)));
}
B70b7b8:{NFSU2_TR(0x70b7b8);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B70b7bc:{NFSU2_TR(0x70b7bc);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B70b7bf:{NFSU2_TR(0x70b7bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70b7c2:{NFSU2_TR(0x70b7c2);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
}
B70b7c4:{NFSU2_TR(0x70b7c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70b7c7:{NFSU2_TR(0x70b7c7);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+28,u32(s32(s16(r2(U+0)))));
}
B70b7ca:{NFSU2_TR(0x70b7ca);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B70b7cd:{NFSU2_TR(0x70b7cd);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B70b7d1:{NFSU2_TR(0x70b7d1);
u8 U[9];
w4(U+5,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+519))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+519,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B70b7d4:{NFSU2_TR(0x70b7d4);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L70b7dc;}}
}
B70b7d6:L70b7d6:{c.instructions+=2;NFSU2_TR(0x70b7d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70b7da:{NFSU2_TR(0x70b7da);
{goto L70b7eb;}
}
B70b7dc:L70b7dc:{c.instructions+=4;NFSU2_TR(0x70b7dc);
w4(R+12,u32(0xffull));
}
B70b7e1:{NFSU2_TR(0x70b7e1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70b7e3:{NFSU2_TR(0x70b7e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b7e6:{NFSU2_TR(0x70b7e6);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L70b7eb;}}
}
B70b7e8:L70b7e8:{c.instructions+=1;NFSU2_TR(0x70b7e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b7eb:L70b7eb:{c.instructions+=35;NFSU2_TR(0x70b7eb);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B70b7ef:{NFSU2_TR(0x70b7ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70b7f2:{NFSU2_TR(0x70b7f2);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B70b7f6:{NFSU2_TR(0x70b7f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b7f9:{NFSU2_TR(0x70b7f9);
w4(R+12,u32(0x80ull));
}
B70b7fe:{NFSU2_TR(0x70b7fe);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+8))));
}
B70b800:{NFSU2_TR(0x70b800);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B70b804:{NFSU2_TR(0x70b804);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+8))));
}
B70b806:{NFSU2_TR(0x70b806);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B70b80a:{NFSU2_TR(0x70b80a);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+8))));
}
B70b80c:{NFSU2_TR(0x70b80c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B70b810:{NFSU2_TR(0x70b810);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B70b812:{NFSU2_TR(0x70b812);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B70b816:{NFSU2_TR(0x70b816);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w8(U+8,u64(s64(s32(r4(R+12)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+12,u32(r8(U+24)));
}
B70b81a:{NFSU2_TR(0x70b81a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B70b81d:{NFSU2_TR(0x70b81d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70b820:{NFSU2_TR(0x70b820);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B70b822:{NFSU2_TR(0x70b822);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B70b824:{NFSU2_TR(0x70b824);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B70b828:{NFSU2_TR(0x70b828);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B70b82c:{NFSU2_TR(0x70b82c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B70b82f:{NFSU2_TR(0x70b82f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70b832:{NFSU2_TR(0x70b832);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B70b834:{NFSU2_TR(0x70b834);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+28,u32(s32(s16(r2(U+0)))));
}
B70b837:{NFSU2_TR(0x70b837);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70b83a:{NFSU2_TR(0x70b83a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B70b83d:{NFSU2_TR(0x70b83d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70b840:{NFSU2_TR(0x70b840);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
}
B70b842:{NFSU2_TR(0x70b842);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70b845:{NFSU2_TR(0x70b845);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B70b849:{NFSU2_TR(0x70b849);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B70b84c:{NFSU2_TR(0x70b84c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b84f:{NFSU2_TR(0x70b84f);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B70b853:{NFSU2_TR(0x70b853);
u8 U[9];
w4(U+5,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+519))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+519,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B70b856:{NFSU2_TR(0x70b856);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L70b85e;}}
}
B70b858:L70b858:{c.instructions+=2;NFSU2_TR(0x70b858);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70b85c:{NFSU2_TR(0x70b85c);
{goto L70b86d;}
}
B70b85e:L70b85e:{c.instructions+=4;NFSU2_TR(0x70b85e);
w4(R+28,u32(0xffull));
}
B70b863:{NFSU2_TR(0x70b863);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70b865:{NFSU2_TR(0x70b865);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b868:{NFSU2_TR(0x70b868);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L70b86d;}}
}
B70b86a:L70b86a:{c.instructions+=1;NFSU2_TR(0x70b86a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b86d:L70b86d:{c.instructions+=33;NFSU2_TR(0x70b86d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B70b871:{NFSU2_TR(0x70b871);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70b874:{NFSU2_TR(0x70b874);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B70b878:{NFSU2_TR(0x70b878);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B70b87c:{NFSU2_TR(0x70b87c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b87f:{NFSU2_TR(0x70b87f);
w4(R+12,u32(0x80ull));
}
B70b884:{NFSU2_TR(0x70b884);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B70b886:{NFSU2_TR(0x70b886);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B70b88a:{NFSU2_TR(0x70b88a);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B70b88c:{NFSU2_TR(0x70b88c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70b88f:{NFSU2_TR(0x70b88f);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+28,u32(r1(U+8)));
}
B70b893:{NFSU2_TR(0x70b893);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+8))));
}
B70b895:{NFSU2_TR(0x70b895);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B70b898:{NFSU2_TR(0x70b898);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))-u32(r4(U+4))));
}
B70b89b:{NFSU2_TR(0x70b89b);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B70b89f:{NFSU2_TR(0x70b89f);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w8(U+8,u64(s64(s32(r4(R+12)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+12,u32(r8(U+24)));
}
B70b8a3:{NFSU2_TR(0x70b8a3);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B70b8a5:{NFSU2_TR(0x70b8a5);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+28,u32(r1(U+0)));
}
B70b8a8:{NFSU2_TR(0x70b8a8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B70b8ab:{NFSU2_TR(0x70b8ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70b8ae:{NFSU2_TR(0x70b8ae);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B70b8b0:{NFSU2_TR(0x70b8b0);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B70b8b4:{NFSU2_TR(0x70b8b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70b8b7:{NFSU2_TR(0x70b8b7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B70b8ba:{NFSU2_TR(0x70b8ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70b8bd:{NFSU2_TR(0x70b8bd);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
}
B70b8bf:{NFSU2_TR(0x70b8bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70b8c2:{NFSU2_TR(0x70b8c2);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B70b8c6:{NFSU2_TR(0x70b8c6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B70b8c9:{NFSU2_TR(0x70b8c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b8cc:{NFSU2_TR(0x70b8cc);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B70b8d0:{NFSU2_TR(0x70b8d0);
u8 U[9];
w4(U+5,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+519))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+519,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B70b8d3:{NFSU2_TR(0x70b8d3);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L70b8db;}}
}
B70b8d5:L70b8d5:{c.instructions+=2;NFSU2_TR(0x70b8d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70b8d9:{NFSU2_TR(0x70b8d9);
{goto L70b8ea;}
}
B70b8db:L70b8db:{c.instructions+=4;NFSU2_TR(0x70b8db);
w4(R+28,u32(0xffull));
}
B70b8e0:{NFSU2_TR(0x70b8e0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70b8e2:{NFSU2_TR(0x70b8e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b8e5:{NFSU2_TR(0x70b8e5);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L70b8ea;}}
}
B70b8e7:L70b8e7:{c.instructions+=1;NFSU2_TR(0x70b8e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b8ea:L70b8ea:{c.instructions+=33;NFSU2_TR(0x70b8ea);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B70b8ee:{NFSU2_TR(0x70b8ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70b8f1:{NFSU2_TR(0x70b8f1);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B70b8f5:{NFSU2_TR(0x70b8f5);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B70b8f9:{NFSU2_TR(0x70b8f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b8fc:{NFSU2_TR(0x70b8fc);
w4(R+12,u32(0x80ull));
}
B70b901:{NFSU2_TR(0x70b901);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B70b903:{NFSU2_TR(0x70b903);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B70b907:{NFSU2_TR(0x70b907);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+8))));
}
B70b909:{NFSU2_TR(0x70b909);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B70b90b:{NFSU2_TR(0x70b90b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))-u32(r4(U+4))));
}
B70b90e:{NFSU2_TR(0x70b90e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B70b912:{NFSU2_TR(0x70b912);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w8(U+8,u64(s64(s32(r4(R+12)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+12,u32(r8(U+24)));
}
B70b916:{NFSU2_TR(0x70b916);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B70b919:{NFSU2_TR(0x70b919);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70b91c:{NFSU2_TR(0x70b91c);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B70b91e:{NFSU2_TR(0x70b91e);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B70b922:{NFSU2_TR(0x70b922);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B70b926:{NFSU2_TR(0x70b926);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B70b929:{NFSU2_TR(0x70b929);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70b92c:{NFSU2_TR(0x70b92c);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B70b92e:{NFSU2_TR(0x70b92e);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B70b932:{NFSU2_TR(0x70b932);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70b935:{NFSU2_TR(0x70b935);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B70b938:{NFSU2_TR(0x70b938);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70b93b:{NFSU2_TR(0x70b93b);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
}
B70b93d:{NFSU2_TR(0x70b93d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70b940:{NFSU2_TR(0x70b940);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B70b944:{NFSU2_TR(0x70b944);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B70b947:{NFSU2_TR(0x70b947);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b94a:{NFSU2_TR(0x70b94a);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B70b94e:{NFSU2_TR(0x70b94e);
u8 U[9];
w4(U+5,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+519))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+519,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B70b951:{NFSU2_TR(0x70b951);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L70b959;}}
}
B70b953:L70b953:{c.instructions+=2;NFSU2_TR(0x70b953);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70b957:{NFSU2_TR(0x70b957);
{goto L70b968;}
}
B70b959:L70b959:{c.instructions+=4;NFSU2_TR(0x70b959);
w4(R+28,u32(0xffull));
}
B70b95e:{NFSU2_TR(0x70b95e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70b960:{NFSU2_TR(0x70b960);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b963:{NFSU2_TR(0x70b963);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L70b968;}}
}
B70b965:L70b965:{c.instructions+=1;NFSU2_TR(0x70b965);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b968:L70b968:{c.instructions+=33;NFSU2_TR(0x70b968);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B70b96c:{NFSU2_TR(0x70b96c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70b96f:{NFSU2_TR(0x70b96f);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B70b973:{NFSU2_TR(0x70b973);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B70b977:{NFSU2_TR(0x70b977);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b97a:{NFSU2_TR(0x70b97a);
w4(R+12,u32(0x80ull));
}
B70b97f:{NFSU2_TR(0x70b97f);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B70b981:{NFSU2_TR(0x70b981);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B70b985:{NFSU2_TR(0x70b985);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+8))));
}
B70b987:{NFSU2_TR(0x70b987);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B70b989:{NFSU2_TR(0x70b989);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))-u32(r4(U+4))));
}
B70b98c:{NFSU2_TR(0x70b98c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B70b990:{NFSU2_TR(0x70b990);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w8(U+8,u64(s64(s32(r4(R+12)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+12,u32(r8(U+24)));
}
B70b994:{NFSU2_TR(0x70b994);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B70b997:{NFSU2_TR(0x70b997);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70b99a:{NFSU2_TR(0x70b99a);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B70b99c:{NFSU2_TR(0x70b99c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+28,u32(r1(U+0)));
}
B70b99f:{NFSU2_TR(0x70b99f);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B70b9a3:{NFSU2_TR(0x70b9a3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B70b9a6:{NFSU2_TR(0x70b9a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70b9a9:{NFSU2_TR(0x70b9a9);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B70b9ab:{NFSU2_TR(0x70b9ab);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B70b9af:{NFSU2_TR(0x70b9af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70b9b2:{NFSU2_TR(0x70b9b2);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B70b9b5:{NFSU2_TR(0x70b9b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70b9b8:{NFSU2_TR(0x70b9b8);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
}
B70b9ba:{NFSU2_TR(0x70b9ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70b9bd:{NFSU2_TR(0x70b9bd);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B70b9c1:{NFSU2_TR(0x70b9c1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B70b9c4:{NFSU2_TR(0x70b9c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b9c7:{NFSU2_TR(0x70b9c7);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B70b9cb:{NFSU2_TR(0x70b9cb);
u8 U[9];
w4(U+5,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+519))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+519,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B70b9ce:{NFSU2_TR(0x70b9ce);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L70b9d6;}}
}
B70b9d0:L70b9d0:{c.instructions+=2;NFSU2_TR(0x70b9d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70b9d4:{NFSU2_TR(0x70b9d4);
{goto L70b9e5;}
}
B70b9d6:L70b9d6:{c.instructions+=4;NFSU2_TR(0x70b9d6);
w4(R+28,u32(0xffull));
}
B70b9db:{NFSU2_TR(0x70b9db);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70b9dd:{NFSU2_TR(0x70b9dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b9e0:{NFSU2_TR(0x70b9e0);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L70b9e5;}}
}
B70b9e2:L70b9e2:{c.instructions+=1;NFSU2_TR(0x70b9e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b9e5:L70b9e5:{c.instructions+=31;NFSU2_TR(0x70b9e5);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B70b9e9:{NFSU2_TR(0x70b9e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70b9ec:{NFSU2_TR(0x70b9ec);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B70b9f0:{NFSU2_TR(0x70b9f0);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B70b9f4:{NFSU2_TR(0x70b9f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70b9f7:{NFSU2_TR(0x70b9f7);
w4(R+12,u32(0x80ull));
}
B70b9fc:{NFSU2_TR(0x70b9fc);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B70b9fe:{NFSU2_TR(0x70b9fe);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B70ba02:{NFSU2_TR(0x70ba02);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+8))));
}
B70ba04:{NFSU2_TR(0x70ba04);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B70ba06:{NFSU2_TR(0x70ba06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))-u32(r4(U+4))));
}
B70ba09:{NFSU2_TR(0x70ba09);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B70ba0d:{NFSU2_TR(0x70ba0d);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w8(U+8,u64(s64(s32(r4(R+12)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+12,u32(r8(U+24)));
}
B70ba11:{NFSU2_TR(0x70ba11);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B70ba14:{NFSU2_TR(0x70ba14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70ba17:{NFSU2_TR(0x70ba17);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B70ba19:{NFSU2_TR(0x70ba19);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B70ba1d:{NFSU2_TR(0x70ba1d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B70ba21:{NFSU2_TR(0x70ba21);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B70ba24:{NFSU2_TR(0x70ba24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70ba27:{NFSU2_TR(0x70ba27);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B70ba29:{NFSU2_TR(0x70ba29);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B70ba2d:{NFSU2_TR(0x70ba2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70ba30:{NFSU2_TR(0x70ba30);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B70ba33:{NFSU2_TR(0x70ba33);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
}
B70ba35:{NFSU2_TR(0x70ba35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70ba38:{NFSU2_TR(0x70ba38);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B70ba3c:{NFSU2_TR(0x70ba3c);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w8(U+8,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
}
B70ba40:{NFSU2_TR(0x70ba40);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B70ba44:{NFSU2_TR(0x70ba44);
u8 U[9];
w4(U+5,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+519))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+519,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B70ba47:{NFSU2_TR(0x70ba47);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L70ba4f;}}
}
B70ba49:L70ba49:{c.instructions+=2;NFSU2_TR(0x70ba49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70ba4d:{NFSU2_TR(0x70ba4d);
{goto L70ba5e;}
}
B70ba4f:L70ba4f:{c.instructions+=4;NFSU2_TR(0x70ba4f);
w4(R+28,u32(0xffull));
}
B70ba54:{NFSU2_TR(0x70ba54);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70ba56:{NFSU2_TR(0x70ba56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70ba59:{NFSU2_TR(0x70ba59);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L70ba5e;}}
}
B70ba5b:L70ba5b:{c.instructions+=1;NFSU2_TR(0x70ba5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70ba5e:L70ba5e:{c.instructions+=33;NFSU2_TR(0x70ba5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70ba61:{NFSU2_TR(0x70ba61);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B70ba65:{NFSU2_TR(0x70ba65);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B70ba69:{NFSU2_TR(0x70ba69);
w4(R+12,u32(0x80ull));
}
B70ba6e:{NFSU2_TR(0x70ba6e);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B70ba70:{NFSU2_TR(0x70ba70);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B70ba74:{NFSU2_TR(0x70ba74);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B70ba76:{NFSU2_TR(0x70ba76);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B70ba7a:{NFSU2_TR(0x70ba7a);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B70ba7c:{NFSU2_TR(0x70ba7c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B70ba80:{NFSU2_TR(0x70ba80);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+8))));
}
B70ba82:{NFSU2_TR(0x70ba82);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B70ba86:{NFSU2_TR(0x70ba86);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w8(U+8,u64(s64(s32(r4(R+12)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+12,u32(r8(U+24)));
}
B70ba8a:{NFSU2_TR(0x70ba8a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B70ba8d:{NFSU2_TR(0x70ba8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70ba90:{NFSU2_TR(0x70ba90);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B70ba92:{NFSU2_TR(0x70ba92);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B70ba96:{NFSU2_TR(0x70ba96);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B70ba9a:{NFSU2_TR(0x70ba9a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B70ba9d:{NFSU2_TR(0x70ba9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70baa0:{NFSU2_TR(0x70baa0);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B70baa4:{NFSU2_TR(0x70baa4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B70baa6:{NFSU2_TR(0x70baa6);
__builtin_memmove((R+28),(R+8),4);
}
B70baa8:{NFSU2_TR(0x70baa8);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B70baac:{NFSU2_TR(0x70baac);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B70baaf:{NFSU2_TR(0x70baaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70bab2:{NFSU2_TR(0x70bab2);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
}
B70bab4:{NFSU2_TR(0x70bab4);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B70bab8:{NFSU2_TR(0x70bab8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70babb:{NFSU2_TR(0x70babb);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B70babe:{NFSU2_TR(0x70babe);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B70bac2:{NFSU2_TR(0x70bac2);
u8 U[9];
w4(U+5,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+519))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+519,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B70bac5:{NFSU2_TR(0x70bac5);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L70bacd;}}
}
B70bac7:L70bac7:{c.instructions+=2;NFSU2_TR(0x70bac7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70bacb:{NFSU2_TR(0x70bacb);
{goto L70badc;}
}
B70bacd:L70bacd:{c.instructions+=4;NFSU2_TR(0x70bacd);
w4(R+28,u32(0xffull));
}
B70bad2:{NFSU2_TR(0x70bad2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70bad4:{NFSU2_TR(0x70bad4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70bad7:{NFSU2_TR(0x70bad7);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L70badc;}}
}
B70bad9:L70bad9:{c.instructions+=1;NFSU2_TR(0x70bad9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70badc:L70badc:{c.instructions+=32;NFSU2_TR(0x70badc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70badf:{NFSU2_TR(0x70badf);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B70bae3:{NFSU2_TR(0x70bae3);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B70bae7:{NFSU2_TR(0x70bae7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70baea:{NFSU2_TR(0x70baea);
w4(R+12,u32(0x80ull));
}
B70baef:{NFSU2_TR(0x70baef);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B70baf1:{NFSU2_TR(0x70baf1);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B70baf5:{NFSU2_TR(0x70baf5);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B70baf7:{NFSU2_TR(0x70baf7);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B70bafb:{NFSU2_TR(0x70bafb);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B70bafd:{NFSU2_TR(0x70bafd);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+8))));
}
B70baff:{NFSU2_TR(0x70baff);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B70bb03:{NFSU2_TR(0x70bb03);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B70bb07:{NFSU2_TR(0x70bb07);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B70bb0a:{NFSU2_TR(0x70bb0a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B70bb0e:{NFSU2_TR(0x70bb0e);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w8(U+8,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
}
B70bb12:{NFSU2_TR(0x70bb12);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B70bb14:{NFSU2_TR(0x70bb14);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B70bb18:{NFSU2_TR(0x70bb18);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B70bb1b:{NFSU2_TR(0x70bb1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70bb1e:{NFSU2_TR(0x70bb1e);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B70bb20:{NFSU2_TR(0x70bb20);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B70bb24:{NFSU2_TR(0x70bb24);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B70bb28:{NFSU2_TR(0x70bb28);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B70bb2b:{NFSU2_TR(0x70bb2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70bb2e:{NFSU2_TR(0x70bb2e);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
}
B70bb30:{NFSU2_TR(0x70bb30);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B70bb34:{NFSU2_TR(0x70bb34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70bb37:{NFSU2_TR(0x70bb37);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B70bb3a:{NFSU2_TR(0x70bb3a);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B70bb3e:{NFSU2_TR(0x70bb3e);
u8 U[9];
w4(U+5,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+519))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+519,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B70bb41:{NFSU2_TR(0x70bb41);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L70bb49;}}
}
B70bb43:L70bb43:{c.instructions+=2;NFSU2_TR(0x70bb43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70bb47:{NFSU2_TR(0x70bb47);
{goto L70bb58;}
}
B70bb49:L70bb49:{c.instructions+=4;NFSU2_TR(0x70bb49);
w4(R+28,u32(0xffull));
}
B70bb4e:{NFSU2_TR(0x70bb4e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70bb50:{NFSU2_TR(0x70bb50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70bb53:{NFSU2_TR(0x70bb53);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L70bb58;}}
}
B70bb55:L70bb55:{c.instructions+=1;NFSU2_TR(0x70bb55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70bb58:L70bb58:{c.instructions+=34;NFSU2_TR(0x70bb58);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B70bb5b:{NFSU2_TR(0x70bb5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70bb5e:{NFSU2_TR(0x70bb5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70bb61:{NFSU2_TR(0x70bb61);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B70bb64:{NFSU2_TR(0x70bb64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70bb67:{NFSU2_TR(0x70bb67);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B70bb6a:{NFSU2_TR(0x70bb6a);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70bb6d:{NFSU2_TR(0x70bb6d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B70bb70:{NFSU2_TR(0x70bb70);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B70bb73:{NFSU2_TR(0x70bb73);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B70bb76:{NFSU2_TR(0x70bb76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70bb79:{NFSU2_TR(0x70bb79);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+28)),r1(U+0));
}
B70bb7b:{NFSU2_TR(0x70bb7b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B70bb7e:{NFSU2_TR(0x70bb7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70bb81:{NFSU2_TR(0x70bb81);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B70bb84:{NFSU2_TR(0x70bb84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70bb87:{NFSU2_TR(0x70bb87);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B70bb8a:{NFSU2_TR(0x70bb8a);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70bb8d:{NFSU2_TR(0x70bb8d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B70bb90:{NFSU2_TR(0x70bb90);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70bb93:{NFSU2_TR(0x70bb93);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B70bb96:{NFSU2_TR(0x70bb96);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70bb99:{NFSU2_TR(0x70bb99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70bb9c:{NFSU2_TR(0x70bb9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B70bb9f:{NFSU2_TR(0x70bb9f);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B70bba1:{NFSU2_TR(0x70bba1);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B70bba3:{NFSU2_TR(0x70bba3);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B70bba5:{NFSU2_TR(0x70bba5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70bba8:{NFSU2_TR(0x70bba8);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x12ull))));
}
B70bbab:{NFSU2_TR(0x70bbab);
w1(R+512,carry<u32>(r4(R+0),u32(0x10ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B70bbae:{NFSU2_TR(0x70bbae);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
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
B70bbb1:{NFSU2_TR(0x70bbb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70bbb4:{NFSU2_TR(0x70bbb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70bbb7:{NFSU2_TR(0x70bbb7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70b75cu);}goto L70b75c;}}
}
B70bbbd:L70bbbd:{c.instructions+=5;NFSU2_TR(0x70bbbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70bbbe:{NFSU2_TR(0x70bbbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70bbbf:{NFSU2_TR(0x70bbbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70bbc0:{NFSU2_TR(0x70bbc0);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70bbc1:{NFSU2_TR(0x70bbc1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70bbc2:L70bbc2:{c.instructions+=25;NFSU2_TR(0x70bbc2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70bbc3:{NFSU2_TR(0x70bbc3);
__builtin_memmove((R+20),(R+16),4);
}
B70bbc5:{NFSU2_TR(0x70bbc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x13cull))));
}
B70bbcb:{NFSU2_TR(0x70bbcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70bbce:{NFSU2_TR(0x70bbce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70bbd1:{NFSU2_TR(0x70bbd1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70bbd4:{NFSU2_TR(0x70bbd4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70bbd5:{NFSU2_TR(0x70bbd5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70bbd6:{NFSU2_TR(0x70bbd6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B70bbd9:{NFSU2_TR(0x70bbd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x817048ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70bbdf:{NFSU2_TR(0x70bbdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70bbe2:{NFSU2_TR(0x70bbe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70bbe5:{NFSU2_TR(0x70bbe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70bbe8:{NFSU2_TR(0x70bbe8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70bbeb:{NFSU2_TR(0x70bbeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B70bbee:{NFSU2_TR(0x70bbee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70bbef:{NFSU2_TR(0x70bbef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70bbf2:{NFSU2_TR(0x70bbf2);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B70bbf4:{NFSU2_TR(0x70bbf4);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70bbf6:{NFSU2_TR(0x70bbf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70bbf9:{NFSU2_TR(0x70bbf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B70bbfc:{NFSU2_TR(0x70bbfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70bbfd:{NFSU2_TR(0x70bbfd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70bbff:{NFSU2_TR(0x70bbff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70bc02:{NFSU2_TR(0x70bc02);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70bc07;}}
}
B70bc04:L70bc04:{c.instructions+=1;NFSU2_TR(0x70bc04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70bc07:L70bc07:{c.instructions+=4;NFSU2_TR(0x70bc07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70bc0a:{NFSU2_TR(0x70bc0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70bc0d:{NFSU2_TR(0x70bc0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70bc13:{NFSU2_TR(0x70bc13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70bc1a:L70bc1a:{c.instructions+=5;NFSU2_TR(0x70bc1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70bc1d:{NFSU2_TR(0x70bc1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70bc20:{NFSU2_TR(0x70bc20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70bc23:{NFSU2_TR(0x70bc23);
__builtin_memmove((R+12),(R+4),4);
}
B70bc25:{NFSU2_TR(0x70bc25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70bc2c:L70bc2c:{c.instructions+=7;NFSU2_TR(0x70bc2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70bc2f:{NFSU2_TR(0x70bc2f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+4,u32(r1(U+0)));
}
B70bc32:{NFSU2_TR(0x70bc32);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+8,u32(r1(U+0)));
}
B70bc35:{NFSU2_TR(0x70bc35);
__builtin_memmove((R+0),(R+4),4);
}
B70bc37:{NFSU2_TR(0x70bc37);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B70bc39:{NFSU2_TR(0x70bc39);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70bc3b:{NFSU2_TR(0x70bc3b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L70bc41;}}
}
B70bc3d:L70bc3d:{c.instructions+=2;NFSU2_TR(0x70bc3d);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B70bc3f:{NFSU2_TR(0x70bc3f);
__builtin_memmove((R+0),(R+8),4);
}
B70bc41:L70bc41:{c.instructions+=6;NFSU2_TR(0x70bc41);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70bc43:{NFSU2_TR(0x70bc43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70bc44:{NFSU2_TR(0x70bc44);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B70bc46:{NFSU2_TR(0x70bc46);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B70bc49:{NFSU2_TR(0x70bc49);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xffffffc0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffc0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B70bc4c:{NFSU2_TR(0x70bc4c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L70bc53;}}
}
B70bc4e:L70bc4e:{c.instructions+=2;NFSU2_TR(0x70bc4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70bc51:{NFSU2_TR(0x70bc51);
{goto L70bc63;}
}
B70bc53:L70bc53:{c.instructions+=2;NFSU2_TR(0x70bc53);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B70bc55:{NFSU2_TR(0x70bc55);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L70bc5b;}}
}
B70bc57:L70bc57:{c.instructions+=2;NFSU2_TR(0x70bc57);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B70bc59:{NFSU2_TR(0x70bc59);
{goto L70bc63;}
}
B70bc5b:L70bc5b:{c.instructions+=2;NFSU2_TR(0x70bc5b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70bc5e:{NFSU2_TR(0x70bc5e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70bc63;}}
}
B70bc60:L70bc60:{c.instructions+=1;NFSU2_TR(0x70bc60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70bc63:L70bc63:{c.instructions+=7;NFSU2_TR(0x70bc63);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
s2(u32(r4(R+12)),r2(U+0));
}
B70bc66:{NFSU2_TR(0x70bc66);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B70bc67:{NFSU2_TR(0x70bc67);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B70bc68:{NFSU2_TR(0x70bc68);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B70bc69:{NFSU2_TR(0x70bc69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70bc6c:{NFSU2_TR(0x70bc6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70bc6f:{NFSU2_TR(0x70bc6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70bc2cu);}goto L70bc2c;}}
}
B70bc71:L70bc71:{c.instructions+=6;NFSU2_TR(0x70bc71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70bc74:{NFSU2_TR(0x70bc74);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B70bc77:{NFSU2_TR(0x70bc77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B70bc7a:{NFSU2_TR(0x70bc7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70bc7d:{NFSU2_TR(0x70bc7d);
__builtin_memmove((R+4),(R+12),4);
}
B70bc7f:{NFSU2_TR(0x70bc7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70bc1au);}goto L70bc1a;}}
}
B70bc81:L70bc81:{c.instructions+=3;NFSU2_TR(0x70bc81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70bc84:{NFSU2_TR(0x70bc84);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffec4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70bc8a:{NFSU2_TR(0x70bc8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70bc91:L70bc91:{c.instructions+=2;NFSU2_TR(0x70bc91);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B70bc93:{NFSU2_TR(0x70bc93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70bc96:L70bc96:{c.instructions+=6;NFSU2_TR(0x70bc96);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B70bc9a:{NFSU2_TR(0x70bc9a);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+8,u32(r1(U+12)));
}
B70bc9f:{NFSU2_TR(0x70bc9f);
__builtin_memmove((R+0),(R+4),4);
}
B70bca1:{NFSU2_TR(0x70bca1);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B70bca3:{NFSU2_TR(0x70bca3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70bca5:{NFSU2_TR(0x70bca5);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L70bcab;}}
}
B70bca7:L70bca7:{c.instructions+=2;NFSU2_TR(0x70bca7);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B70bca9:{NFSU2_TR(0x70bca9);
__builtin_memmove((R+0),(R+8),4);
}
B70bcab:L70bcab:{c.instructions+=6;NFSU2_TR(0x70bcab);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70bcad:{NFSU2_TR(0x70bcad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70bcae:{NFSU2_TR(0x70bcae);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B70bcb0:{NFSU2_TR(0x70bcb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B70bcb3:{NFSU2_TR(0x70bcb3);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xffffffc0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffc0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B70bcb6:{NFSU2_TR(0x70bcb6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L70bcbd;}}
}
B70bcb8:L70bcb8:{c.instructions+=2;NFSU2_TR(0x70bcb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70bcbb:{NFSU2_TR(0x70bcbb);
{goto L70bccd;}
}
B70bcbd:L70bcbd:{c.instructions+=2;NFSU2_TR(0x70bcbd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B70bcbf:{NFSU2_TR(0x70bcbf);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L70bcc5;}}
}
B70bcc1:L70bcc1:{c.instructions+=2;NFSU2_TR(0x70bcc1);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B70bcc3:{NFSU2_TR(0x70bcc3);
{goto L70bccd;}
}
B70bcc5:L70bcc5:{c.instructions+=2;NFSU2_TR(0x70bcc5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70bcc8:{NFSU2_TR(0x70bcc8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70bccd;}}
}
B70bcca:L70bcca:{c.instructions+=1;NFSU2_TR(0x70bcca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70bccd:L70bccd:{c.instructions+=6;NFSU2_TR(0x70bccd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70bcd0:{NFSU2_TR(0x70bcd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x2ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70bcd4:{NFSU2_TR(0x70bcd4);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B70bcd5:{NFSU2_TR(0x70bcd5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x9ull))));
}
B70bcd8:{NFSU2_TR(0x70bcd8);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
s2(u32(r4(R+0)),r2(U+0));
}
B70bcdb:{NFSU2_TR(0x70bcdb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70bc96u);}goto L70bc96;}}
}
B70bcdd:L70bcdd:{c.instructions+=4;NFSU2_TR(0x70bcdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B70bce0:{NFSU2_TR(0x70bce0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70bce3:{NFSU2_TR(0x70bce3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70bce6:{NFSU2_TR(0x70bce6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70bc91u);}goto L70bc91;}}
}
B70bce8:L70bce8:{c.instructions+=14;NFSU2_TR(0x70bce8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70bceb:{NFSU2_TR(0x70bceb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70bcee:{NFSU2_TR(0x70bcee);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B70bcf0:{NFSU2_TR(0x70bcf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70bcf3:{NFSU2_TR(0x70bcf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70bcf6:{NFSU2_TR(0x70bcf6);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B70bcf8:{NFSU2_TR(0x70bcf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70bcfb:{NFSU2_TR(0x70bcfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70bcfe:{NFSU2_TR(0x70bcfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70bd01:{NFSU2_TR(0x70bd01);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffec6ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70bd07:{NFSU2_TR(0x70bd07);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B70bd08:{NFSU2_TR(0x70bd08);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff64ull))));
__builtin_memmove((R+8),(U+0),4);
}
B70bd0e:{NFSU2_TR(0x70bd0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70bd11:{NFSU2_TR(0x70bd11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70bd18:L70bd18:{c.instructions+=5;NFSU2_TR(0x70bd18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70bd1b:{NFSU2_TR(0x70bd1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70bd1e:{NFSU2_TR(0x70bd1e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B70bd20:{NFSU2_TR(0x70bd20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70bd23:{NFSU2_TR(0x70bd23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70bd26:L70bd26:{c.instructions+=36;NFSU2_TR(0x70bd26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70bd29:{NFSU2_TR(0x70bd29);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B70bd2d:{NFSU2_TR(0x70bd2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70bd30:{NFSU2_TR(0x70bd30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70bd33:{NFSU2_TR(0x70bd33);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B70bd37:{NFSU2_TR(0x70bd37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70bd3a:{NFSU2_TR(0x70bd3a);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+24,u32(s32(s16(r2(U+0)))));
}
B70bd3d:{NFSU2_TR(0x70bd3d);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B70bd40:{NFSU2_TR(0x70bd40);
w4(R+12,u32(0x80ull));
}
B70bd45:{NFSU2_TR(0x70bd45);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+8))));
}
B70bd47:{NFSU2_TR(0x70bd47);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+24))));
}
B70bd49:{NFSU2_TR(0x70bd49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))-u32(r4(U+4))));
}
B70bd4c:{NFSU2_TR(0x70bd4c);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+24,u32(r1(U+12)));
}
B70bd51:{NFSU2_TR(0x70bd51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))-u32(r4(U+4))));
}
B70bd54:{NFSU2_TR(0x70bd54);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B70bd57:{NFSU2_TR(0x70bd57);
u8 U[13];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+24,u32(r1(U+12)));
}
B70bd5c:{NFSU2_TR(0x70bd5c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B70bd5f:{NFSU2_TR(0x70bd5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70bd62:{NFSU2_TR(0x70bd62);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+24))));
}
B70bd64:{NFSU2_TR(0x70bd64);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+24,u32(r1(U+8)));
}
B70bd68:{NFSU2_TR(0x70bd68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70bd6b:{NFSU2_TR(0x70bd6b);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B70bd6e:{NFSU2_TR(0x70bd6e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B70bd71:{NFSU2_TR(0x70bd71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70bd74:{NFSU2_TR(0x70bd74);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B70bd78:{NFSU2_TR(0x70bd78);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+24))));
}
B70bd7a:{NFSU2_TR(0x70bd7a);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+24,u32(r1(U+8)));
}
B70bd7e:{NFSU2_TR(0x70bd7e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B70bd81:{NFSU2_TR(0x70bd81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70bd84:{NFSU2_TR(0x70bd84);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B70bd88:{NFSU2_TR(0x70bd88);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
}
B70bd8a:{NFSU2_TR(0x70bd8a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+24,u32(r1(U+0)));
}
B70bd8d:{NFSU2_TR(0x70bd8d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B70bd90:{NFSU2_TR(0x70bd90);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B70bd94:{NFSU2_TR(0x70bd94);
u8 U[9];
w4(U+5,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+519))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+519,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B70bd97:{NFSU2_TR(0x70bd97);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L70bd9d;}}
}
B70bd99:L70bd99:{c.instructions+=2;NFSU2_TR(0x70bd99);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B70bd9b:{NFSU2_TR(0x70bd9b);
{goto L70bda8;}
}
B70bd9d:L70bd9d:{c.instructions+=3;NFSU2_TR(0x70bd9d);
w4(R+8,u32(0xffull));
}
B70bda2:{NFSU2_TR(0x70bda2);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70bda4:{NFSU2_TR(0x70bda4);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L70bda8;}}
}
B70bda6:L70bda6:{c.instructions+=1;NFSU2_TR(0x70bda6);
__builtin_memmove((R+8),(R+24),4);
}
B70bda8:L70bda8:{c.instructions+=8;NFSU2_TR(0x70bda8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70bdab:{NFSU2_TR(0x70bdab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x2ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70bdaf:{NFSU2_TR(0x70bdaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x2ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70bdb3:{NFSU2_TR(0x70bdb3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B70bdb4:{NFSU2_TR(0x70bdb4);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B70bdb7:{NFSU2_TR(0x70bdb7);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B70bdb8:{NFSU2_TR(0x70bdb8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x8ull))));
}
B70bdbb:{NFSU2_TR(0x70bdbb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70bd26u);}goto L70bd26;}}
}
B70bdc1:L70bdc1:{c.instructions+=7;NFSU2_TR(0x70bdc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70bdc4:{NFSU2_TR(0x70bdc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B70bdc7:{NFSU2_TR(0x70bdc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x12ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70bdcb:{NFSU2_TR(0x70bdcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70bdce:{NFSU2_TR(0x70bdce);
w1(R+512,carry<u32>(r4(R+4),r4(R+0)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B70bdd0:{NFSU2_TR(0x70bdd0);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
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
B70bdd3:{NFSU2_TR(0x70bdd3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70bd18u);}goto L70bd18;}}
}
B70bdd9:L70bdd9:{c.instructions+=5;NFSU2_TR(0x70bdd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70bdda:{NFSU2_TR(0x70bdda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70bddb:{NFSU2_TR(0x70bddb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70bddc:{NFSU2_TR(0x70bddc);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70bddd:{NFSU2_TR(0x70bddd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70bdde:L70bdde:{c.instructions+=17;NFSU2_TR(0x70bdde);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70bddf:{NFSU2_TR(0x70bddf);
__builtin_memmove((R+20),(R+16),4);
}
B70bde1:{NFSU2_TR(0x70bde1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x38ull))));
}
B70bde4:{NFSU2_TR(0x70bde4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70bde7:{NFSU2_TR(0x70bde7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70bdea:{NFSU2_TR(0x70bdea);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70bded:{NFSU2_TR(0x70bded);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B70bdf0:{NFSU2_TR(0x70bdf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x817048ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70bdf6:{NFSU2_TR(0x70bdf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70bdf9:{NFSU2_TR(0x70bdf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70bdfc:{NFSU2_TR(0x70bdfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70bdff:{NFSU2_TR(0x70bdff);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x64ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70be02:{NFSU2_TR(0x70be02);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70be04:{NFSU2_TR(0x70be04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B70be05:{NFSU2_TR(0x70be05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70be08:{NFSU2_TR(0x70be08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70be0b:{NFSU2_TR(0x70be0b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70be15;}}
}
B70be0d:L70be0d:{c.instructions+=3;NFSU2_TR(0x70be0d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffffff9cull))));
}
B70be10:{NFSU2_TR(0x70be10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70be13:{NFSU2_TR(0x70be13);
__builtin_memmove((R+4),(R+0),4);
}
B70be15:L70be15:{c.instructions+=2;NFSU2_TR(0x70be15);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x8000ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x8000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70be1c:{NFSU2_TR(0x70be1c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L70be23;}}
}
B70be1e:L70be1e:{c.instructions+=2;NFSU2_TR(0x70be1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70be21:{NFSU2_TR(0x70be21);
{goto L70be33;}
}
B70be23:L70be23:{c.instructions+=2;NFSU2_TR(0x70be23);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x800ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x800ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70be2a:{NFSU2_TR(0x70be2a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L70be33;}}
}
B70be2c:L70be2c:{c.instructions+=1;NFSU2_TR(0x70be2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70be33:L70be33:{c.instructions+=6;NFSU2_TR(0x70be33);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70be36:{NFSU2_TR(0x70be36);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70be38:{NFSU2_TR(0x70be38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70be39:{NFSU2_TR(0x70be39);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70be3b:{NFSU2_TR(0x70be3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70be3e:{NFSU2_TR(0x70be3e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70be43;}}
}
B70be40:L70be40:{c.instructions+=1;NFSU2_TR(0x70be40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70be43:L70be43:{c.instructions+=12;NFSU2_TR(0x70be43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70be46:{NFSU2_TR(0x70be46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70be49:{NFSU2_TR(0x70be49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70be4c:{NFSU2_TR(0x70be4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70be4f:{NFSU2_TR(0x70be4f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70be50:{NFSU2_TR(0x70be50);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B70be53:{NFSU2_TR(0x70be53);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B70be55:{NFSU2_TR(0x70be55);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70be56:{NFSU2_TR(0x70be56);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B70be57:{NFSU2_TR(0x70be57);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70be58:{NFSU2_TR(0x70be58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70be5b:{NFSU2_TR(0x70be5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70be62:L70be62:{c.instructions+=2;NFSU2_TR(0x70be62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70be65:{NFSU2_TR(0x70be65);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B70be67:L70be67:{c.instructions+=21;NFSU2_TR(0x70be67);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B70be6b:{NFSU2_TR(0x70be6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70be6e:{NFSU2_TR(0x70be6e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B70be72:{NFSU2_TR(0x70be72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70be75:{NFSU2_TR(0x70be75);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+8,u32(r1(U+0)));
}
B70be78:{NFSU2_TR(0x70be78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70be7b:{NFSU2_TR(0x70be7b);
u8 U[13];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+8,u32(r1(U+12)));
}
B70be80:{NFSU2_TR(0x70be80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70be84:{NFSU2_TR(0x70be84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70be87:{NFSU2_TR(0x70be87);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+8,u32(r1(U+8)));
}
B70be8b:{NFSU2_TR(0x70be8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70be8e:{NFSU2_TR(0x70be8e);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+8,u32(r1(U+12)));
}
B70be93:{NFSU2_TR(0x70be93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70be96:{NFSU2_TR(0x70be96);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+8,u32(r1(U+8)));
}
B70be9a:{NFSU2_TR(0x70be9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70be9d:{NFSU2_TR(0x70be9d);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+8,u32(r1(U+12)));
}
B70bea2:{NFSU2_TR(0x70bea2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70bea5:{NFSU2_TR(0x70bea5);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+8,u32(r1(U+12)));
}
B70beaa:{NFSU2_TR(0x70beaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w4(U+4,u32(0x100ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70beb1:{NFSU2_TR(0x70beb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70beb8:{NFSU2_TR(0x70beb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70bebb:L70bebb:{c.instructions+=7;NFSU2_TR(0x70bebb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70bebe:{NFSU2_TR(0x70bebe);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B70bec2:{NFSU2_TR(0x70bec2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70bec5:{NFSU2_TR(0x70bec5);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+8))));
}
B70bec7:{NFSU2_TR(0x70bec7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70bec9:{NFSU2_TR(0x70bec9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70becc:{NFSU2_TR(0x70becc);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L70bed3;}}
}
B70bece:L70bece:{c.instructions+=2;NFSU2_TR(0x70bece);
__builtin_memmove((R+28),(R+8),4);
}
B70bed0:{NFSU2_TR(0x70bed0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B70bed3:L70bed3:{c.instructions+=7;NFSU2_TR(0x70bed3);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
w8(U+8,u64(s64(s32(r4(R+28)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+28,u32(r8(U+24)));
}
B70bed7:{NFSU2_TR(0x70bed7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70beda:{NFSU2_TR(0x70beda);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B70bedd:{NFSU2_TR(0x70bedd);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B70bedf:{NFSU2_TR(0x70bedf);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x20ull))));
}
B70bee2:{NFSU2_TR(0x70bee2);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xffffffc0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffc0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B70bee5:{NFSU2_TR(0x70bee5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L70beec;}}
}
B70bee7:L70bee7:{c.instructions+=2;NFSU2_TR(0x70bee7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70beea:{NFSU2_TR(0x70beea);
{goto L70befc;}
}
B70beec:L70beec:{c.instructions+=2;NFSU2_TR(0x70beec);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B70beee:{NFSU2_TR(0x70beee);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L70bef4;}}
}
B70bef0:L70bef0:{c.instructions+=2;NFSU2_TR(0x70bef0);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B70bef2:{NFSU2_TR(0x70bef2);
{goto L70befc;}
}
B70bef4:L70bef4:{c.instructions+=2;NFSU2_TR(0x70bef4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70bef7:{NFSU2_TR(0x70bef7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70befc;}}
}
B70bef9:L70bef9:{c.instructions+=1;NFSU2_TR(0x70bef9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70befc:L70befc:{c.instructions+=7;NFSU2_TR(0x70befc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70beff:{NFSU2_TR(0x70beff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B70bf02:{NFSU2_TR(0x70bf02);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B70bf05:{NFSU2_TR(0x70bf05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B70bf08:{NFSU2_TR(0x70bf08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70bf0b:{NFSU2_TR(0x70bf0b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x8ull))));
}
B70bf0f:{NFSU2_TR(0x70bf0f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70bebbu);}goto L70bebb;}}
}
B70bf11:L70bf11:{c.instructions+=6;NFSU2_TR(0x70bf11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70bf14:{NFSU2_TR(0x70bf14);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w8(U+8,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
}
B70bf18:{NFSU2_TR(0x70bf18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
}
B70bf1b:{NFSU2_TR(0x70bf1b);
u8 U[9];
w4(U+5,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+519))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+519,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B70bf1e:{NFSU2_TR(0x70bf1e);
__builtin_memmove((R+28),(R+8),4);
}
B70bf20:{NFSU2_TR(0x70bf20);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L70bf26;}}
}
B70bf22:L70bf22:{c.instructions+=2;NFSU2_TR(0x70bf22);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B70bf24:{NFSU2_TR(0x70bf24);
{goto L70bf35;}
}
B70bf26:L70bf26:{c.instructions+=3;NFSU2_TR(0x70bf26);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70bf2c:{NFSU2_TR(0x70bf2c);
w4(R+8,u32(0xffull));
}
B70bf31:{NFSU2_TR(0x70bf31);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L70bf35;}}
}
B70bf33:L70bf33:{c.instructions+=1;NFSU2_TR(0x70bf33);
__builtin_memmove((R+8),(R+28),4);
}
B70bf35:L70bf35:{c.instructions+=6;NFSU2_TR(0x70bf35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70bf38:{NFSU2_TR(0x70bf38);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B70bf3b:{NFSU2_TR(0x70bf3b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B70bf3c:{NFSU2_TR(0x70bf3c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B70bf3d:{NFSU2_TR(0x70bf3d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x8ull))));
}
B70bf40:{NFSU2_TR(0x70bf40);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70be67u);}goto L70be67;}}
}
B70bf46:L70bf46:{c.instructions+=5;NFSU2_TR(0x70bf46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B70bf49:{NFSU2_TR(0x70bf49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B70bf4c:{NFSU2_TR(0x70bf4c);
w1(R+512,carry<u32>(r4(R+12),r4(R+4)));
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B70bf4e:{NFSU2_TR(0x70bf4e);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
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
B70bf51:{NFSU2_TR(0x70bf51);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70be62u);}goto L70be62;}}
}
B70bf57:L70bf57:{c.instructions+=5;NFSU2_TR(0x70bf57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70bf58:{NFSU2_TR(0x70bf58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70bf59:{NFSU2_TR(0x70bf59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70bf5a:{NFSU2_TR(0x70bf5a);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70bf5b:{NFSU2_TR(0x70bf5b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70bf5c:L70bf5c:{c.instructions+=54;NFSU2_TR(0x70bf5c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70bf5d:{NFSU2_TR(0x70bf5d);
__builtin_memmove((R+20),(R+16),4);
}
B70bf5f:{NFSU2_TR(0x70bf5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B70bf62:{NFSU2_TR(0x70bf62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70bf65:{NFSU2_TR(0x70bf65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70bf68:{NFSU2_TR(0x70bf68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70bf6c:{NFSU2_TR(0x70bf6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70bf6f:{NFSU2_TR(0x70bf6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70bf72:{NFSU2_TR(0x70bf72);
u8 U[12];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B70bf76:{NFSU2_TR(0x70bf76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70bf79:{NFSU2_TR(0x70bf79);
__builtin_memmove((R+4),(R+8),4);
}
B70bf7b:{NFSU2_TR(0x70bf7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0xfffffffdull));
s4(u32(r4(U+0)),r4(U+4));
}
B70bf82:{NFSU2_TR(0x70bf82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B70bf85:{NFSU2_TR(0x70bf85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70bf8c:{NFSU2_TR(0x70bf8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B70bf8f:{NFSU2_TR(0x70bf8f);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B70bf91:{NFSU2_TR(0x70bf91);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70bf92:{NFSU2_TR(0x70bf92);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B70bf93:{NFSU2_TR(0x70bf93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B70bf96:{NFSU2_TR(0x70bf96);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B70bf99:{NFSU2_TR(0x70bf99);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70bf9a:{NFSU2_TR(0x70bf9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70bf9d:{NFSU2_TR(0x70bf9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70bfa4:{NFSU2_TR(0x70bfa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70bfa7:{NFSU2_TR(0x70bfa7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70bfa8:{NFSU2_TR(0x70bfa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70bfab:{NFSU2_TR(0x70bfab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70bfae:{NFSU2_TR(0x70bfae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70bfb2:{NFSU2_TR(0x70bfb2);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B70bfb4:{NFSU2_TR(0x70bfb4);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B70bfb8:{NFSU2_TR(0x70bfb8);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+8,u32(r1(U+12)));
}
B70bfbd:{NFSU2_TR(0x70bfbd);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B70bfc1:{NFSU2_TR(0x70bfc1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B70bfc5:{NFSU2_TR(0x70bfc5);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B70bfc7:{NFSU2_TR(0x70bfc7);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+28,u32(r1(U+0)));
}
B70bfca:{NFSU2_TR(0x70bfca);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B70bfcc:{NFSU2_TR(0x70bfcc);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+28,u32(r1(U+0)));
}
B70bfcf:{NFSU2_TR(0x70bfcf);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B70bfd1:{NFSU2_TR(0x70bfd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70bfd4:{NFSU2_TR(0x70bfd4);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+28,u32(r1(U+8)));
}
B70bfd8:{NFSU2_TR(0x70bfd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70bfdb:{NFSU2_TR(0x70bfdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B70bfde:{NFSU2_TR(0x70bfde);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70bfe1:{NFSU2_TR(0x70bfe1);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+28,u32(r1(U+8)));
}
B70bfe5:{NFSU2_TR(0x70bfe5);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B70bfe7:{NFSU2_TR(0x70bfe7);
u8 U[13];
w4(U+0,u32(u32(u32(0xfffffffdull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+28,u32(r1(U+12)));
}
B70bfec:{NFSU2_TR(0x70bfec);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B70bfee:{NFSU2_TR(0x70bfee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70bff1:{NFSU2_TR(0x70bff1);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+28,u32(r1(U+8)));
}
B70bff5:{NFSU2_TR(0x70bff5);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B70bff7:{NFSU2_TR(0x70bff7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70bffa:{NFSU2_TR(0x70bffa);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B70bffc:{NFSU2_TR(0x70bffc);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B70bfff:{NFSU2_TR(0x70bfff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x70c002u,70c);
}
XIT:NFSU2_TR_EXIT(0x70b,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
