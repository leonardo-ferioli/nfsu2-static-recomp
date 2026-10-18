#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_4fe(u8* __restrict R,Cpu& c);
u32 body_504(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_511(u8* __restrict R,Cpu& c);
u32 body_516(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_518(u8* __restrict R,Cpu& c);
u32 body_519(u8* __restrict R,Cpu& c);
u32 body_51a(u8* __restrict R,Cpu& c);
u32 body_525(u8* __restrict R,Cpu& c);
u32 body_52a(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x52b,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x52b,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_52b(u8* __restrict R,Cpu& c);
u32 page_52b(Cpu& c){return body_52b(c.regs.data(),c);}
__attribute__((noinline)) u32 body_52b(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x52b003:goto L52b003;
case 0x52b009:c.instructions+=1;goto B52b009;
case 0x52b00e:goto L52b00e;
case 0x52b012:c.instructions+=5;goto B52b012;
case 0x52b018:c.instructions+=4;goto B52b018;
case 0x52b019:c.instructions+=3;goto B52b019;
case 0x52b020:c.instructions+=2;goto B52b020;
case 0x52b023:c.instructions+=1;goto B52b023;
case 0x52b030:goto L52b030;
case 0x52b031:c.instructions+=4;goto B52b031;
case 0x52b033:c.instructions+=3;goto B52b033;
case 0x52b036:c.instructions+=2;goto B52b036;
case 0x52b038:c.instructions+=1;goto B52b038;
case 0x52b03a:goto L52b03a;
case 0x52b03e:c.instructions+=1;goto B52b03e;
case 0x52b040:goto L52b040;
case 0x52b043:c.instructions+=1;goto B52b043;
case 0x52b045:goto L52b045;
case 0x52b048:c.instructions+=2;goto B52b048;
case 0x52b04a:c.instructions+=1;goto B52b04a;
case 0x52b04c:goto L52b04c;
case 0x52b050:c.instructions+=2;goto B52b050;
case 0x52b052:c.instructions+=1;goto B52b052;
case 0x52b054:goto L52b054;
case 0x52b057:c.instructions+=1;goto B52b057;
case 0x52b059:goto L52b059;
case 0x52b05b:c.instructions+=2;goto B52b05b;
case 0x52b05e:c.instructions+=1;goto B52b05e;
case 0x52b060:goto L52b060;
case 0x52b062:c.instructions+=1;goto B52b062;
case 0x52b067:goto L52b067;
case 0x52b06a:c.instructions+=1;goto B52b06a;
case 0x52b071:goto L52b071;
case 0x52b072:c.instructions+=1;goto B52b072;
case 0x52b080:goto L52b080;
case 0x52b081:c.instructions+=2;goto B52b081;
case 0x52b083:c.instructions+=1;goto B52b083;
case 0x52b088:goto L52b088;
case 0x52b08e:c.instructions+=9;goto B52b08e;
case 0x52b090:c.instructions+=8;goto B52b090;
case 0x52b093:c.instructions+=7;goto B52b093;
case 0x52b096:c.instructions+=6;goto B52b096;
case 0x52b099:c.instructions+=5;goto B52b099;
case 0x52b0a0:c.instructions+=4;goto B52b0a0;
case 0x52b0a7:c.instructions+=3;goto B52b0a7;
case 0x52b0a9:c.instructions+=2;goto B52b0a9;
case 0x52b0aa:c.instructions+=1;goto B52b0aa;
case 0x52b0b0:goto L52b0b0;
case 0x52b0b1:c.instructions+=2;goto B52b0b1;
case 0x52b0b3:c.instructions+=1;goto B52b0b3;
case 0x52b0b8:goto L52b0b8;
case 0x52b0be:c.instructions+=5;goto B52b0be;
case 0x52b0c5:c.instructions+=4;goto B52b0c5;
case 0x52b0cc:c.instructions+=3;goto B52b0cc;
case 0x52b0ce:c.instructions+=2;goto B52b0ce;
case 0x52b0cf:c.instructions+=1;goto B52b0cf;
case 0x52b0d0:goto L52b0d0;
case 0x52b0d1:c.instructions+=2;goto B52b0d1;
case 0x52b0d3:c.instructions+=1;goto B52b0d3;
case 0x52b0d8:goto L52b0d8;
case 0x52b0dd:c.instructions+=1;goto B52b0dd;
case 0x52b0df:goto L52b0df;
case 0x52b0e0:c.instructions+=1;goto B52b0e0;
case 0x52b0e5:goto L52b0e5;
case 0x52b0e8:goto L52b0e8;
case 0x52b0ea:c.instructions+=2;goto B52b0ea;
case 0x52b0eb:c.instructions+=1;goto B52b0eb;
case 0x52b0f0:goto L52b0f0;
case 0x52b0f6:c.instructions+=1;goto B52b0f6;
case 0x52b100:goto L52b100;
case 0x52b102:c.instructions+=53;goto B52b102;
case 0x52b108:c.instructions+=52;goto B52b108;
case 0x52b10d:c.instructions+=51;goto B52b10d;
case 0x52b110:c.instructions+=50;goto B52b110;
case 0x52b113:c.instructions+=49;goto B52b113;
case 0x52b115:c.instructions+=48;goto B52b115;
case 0x52b118:c.instructions+=47;goto B52b118;
case 0x52b11b:c.instructions+=46;goto B52b11b;
case 0x52b11e:c.instructions+=45;goto B52b11e;
case 0x52b121:c.instructions+=44;goto B52b121;
case 0x52b124:c.instructions+=43;goto B52b124;
case 0x52b129:c.instructions+=42;goto B52b129;
case 0x52b12c:c.instructions+=41;goto B52b12c;
case 0x52b12f:c.instructions+=40;goto B52b12f;
case 0x52b132:c.instructions+=39;goto B52b132;
case 0x52b135:c.instructions+=38;goto B52b135;
case 0x52b138:c.instructions+=37;goto B52b138;
case 0x52b13b:c.instructions+=36;goto B52b13b;
case 0x52b141:c.instructions+=35;goto B52b141;
case 0x52b144:c.instructions+=34;goto B52b144;
case 0x52b14b:c.instructions+=33;goto B52b14b;
case 0x52b151:c.instructions+=32;goto B52b151;
case 0x52b157:c.instructions+=31;goto B52b157;
case 0x52b15d:c.instructions+=30;goto B52b15d;
case 0x52b163:c.instructions+=29;goto B52b163;
case 0x52b169:c.instructions+=28;goto B52b169;
case 0x52b16f:c.instructions+=27;goto B52b16f;
case 0x52b174:c.instructions+=26;goto B52b174;
case 0x52b177:c.instructions+=25;goto B52b177;
case 0x52b17a:c.instructions+=24;goto B52b17a;
case 0x52b17d:c.instructions+=23;goto B52b17d;
case 0x52b180:c.instructions+=22;goto B52b180;
case 0x52b183:c.instructions+=21;goto B52b183;
case 0x52b186:c.instructions+=20;goto B52b186;
case 0x52b189:c.instructions+=19;goto B52b189;
case 0x52b18c:c.instructions+=18;goto B52b18c;
case 0x52b18f:c.instructions+=17;goto B52b18f;
case 0x52b192:c.instructions+=16;goto B52b192;
case 0x52b195:c.instructions+=15;goto B52b195;
case 0x52b198:c.instructions+=14;goto B52b198;
case 0x52b19e:c.instructions+=13;goto B52b19e;
case 0x52b1a4:c.instructions+=12;goto B52b1a4;
case 0x52b1aa:c.instructions+=11;goto B52b1aa;
case 0x52b1b0:c.instructions+=10;goto B52b1b0;
case 0x52b1b2:c.instructions+=9;goto B52b1b2;
case 0x52b1b5:c.instructions+=8;goto B52b1b5;
case 0x52b1b8:c.instructions+=7;goto B52b1b8;
case 0x52b1bb:c.instructions+=6;goto B52b1bb;
case 0x52b1be:c.instructions+=5;goto B52b1be;
case 0x52b1c4:c.instructions+=4;goto B52b1c4;
case 0x52b1ca:c.instructions+=3;goto B52b1ca;
case 0x52b1d0:c.instructions+=2;goto B52b1d0;
case 0x52b1d6:c.instructions+=1;goto B52b1d6;
case 0x52b1e0:goto L52b1e0;
case 0x52b1e2:c.instructions+=14;goto B52b1e2;
case 0x52b1e7:c.instructions+=13;goto B52b1e7;
case 0x52b1ed:c.instructions+=12;goto B52b1ed;
case 0x52b1ee:c.instructions+=11;goto B52b1ee;
case 0x52b1f5:c.instructions+=10;goto B52b1f5;
case 0x52b1f6:c.instructions+=9;goto B52b1f6;
case 0x52b1f7:c.instructions+=8;goto B52b1f7;
case 0x52b1f9:c.instructions+=7;goto B52b1f9;
case 0x52b1fa:c.instructions+=6;goto B52b1fa;
case 0x52b1fe:c.instructions+=5;goto B52b1fe;
case 0x52b204:c.instructions+=4;goto B52b204;
case 0x52b207:c.instructions+=3;goto B52b207;
case 0x52b208:c.instructions+=2;goto B52b208;
case 0x52b210:c.instructions+=1;goto B52b210;
case 0x52b215:goto L52b215;
case 0x52b218:c.instructions+=3;goto B52b218;
case 0x52b21b:c.instructions+=2;goto B52b21b;
case 0x52b21d:c.instructions+=1;goto B52b21d;
case 0x52b21f:goto L52b21f;
case 0x52b220:c.instructions+=1;goto B52b220;
case 0x52b225:goto L52b225;
case 0x52b228:goto L52b228;
case 0x52b22b:c.instructions+=2;goto B52b22b;
case 0x52b22d:c.instructions+=1;goto B52b22d;
case 0x52b22f:goto L52b22f;
case 0x52b232:c.instructions+=6;goto B52b232;
case 0x52b235:c.instructions+=5;goto B52b235;
case 0x52b23a:c.instructions+=4;goto B52b23a;
case 0x52b23b:c.instructions+=3;goto B52b23b;
case 0x52b23d:c.instructions+=2;goto B52b23d;
case 0x52b23e:c.instructions+=1;goto B52b23e;
case 0x52b243:goto L52b243;
case 0x52b244:c.instructions+=1;goto B52b244;
case 0x52b249:goto L52b249;
case 0x52b24c:goto L52b24c;
case 0x52b252:c.instructions+=2;goto B52b252;
case 0x52b254:c.instructions+=1;goto B52b254;
case 0x52b256:goto L52b256;
case 0x52b257:c.instructions+=1;goto B52b257;
case 0x52b25c:goto L52b25c;
case 0x52b25f:goto L52b25f;
case 0x52b265:c.instructions+=4;goto B52b265;
case 0x52b266:c.instructions+=3;goto B52b266;
case 0x52b269:c.instructions+=2;goto B52b269;
case 0x52b26b:c.instructions+=1;goto B52b26b;
case 0x52b26d:goto L52b26d;
case 0x52b26e:c.instructions+=2;goto B52b26e;
case 0x52b270:c.instructions+=1;goto B52b270;
case 0x52b275:goto L52b275;
case 0x52b277:c.instructions+=1;goto B52b277;
case 0x52b279:goto L52b279;
case 0x52b27a:c.instructions+=2;goto B52b27a;
case 0x52b27f:c.instructions+=1;goto B52b27f;
case 0x52b280:goto L52b280;
case 0x52b283:c.instructions+=2;goto B52b283;
case 0x52b284:c.instructions+=1;goto B52b284;
case 0x52b289:goto L52b289;
case 0x52b28b:c.instructions+=4;goto B52b28b;
case 0x52b28e:c.instructions+=3;goto B52b28e;
case 0x52b290:c.instructions+=2;goto B52b290;
case 0x52b292:c.instructions+=1;goto B52b292;
case 0x52b294:goto L52b294;
case 0x52b297:c.instructions+=2;goto B52b297;
case 0x52b299:c.instructions+=1;goto B52b299;
case 0x52b29b:goto L52b29b;
case 0x52b29e:c.instructions+=3;goto B52b29e;
case 0x52b2a1:c.instructions+=2;goto B52b2a1;
case 0x52b2a4:c.instructions+=1;goto B52b2a4;
case 0x52b2a6:goto L52b2a6;
case 0x52b2a9:c.instructions+=1;goto B52b2a9;
case 0x52b2ac:goto L52b2ac;
case 0x52b2af:c.instructions+=2;goto B52b2af;
case 0x52b2b1:c.instructions+=1;goto B52b2b1;
case 0x52b2b3:goto L52b2b3;
case 0x52b2b6:c.instructions+=1;goto B52b2b6;
case 0x52b2b9:goto L52b2b9;
case 0x52b2bc:c.instructions+=2;goto B52b2bc;
case 0x52b2be:c.instructions+=1;goto B52b2be;
case 0x52b2c0:goto L52b2c0;
case 0x52b2c3:c.instructions+=1;goto B52b2c3;
case 0x52b2c6:goto L52b2c6;
case 0x52b2c9:c.instructions+=2;goto B52b2c9;
case 0x52b2cc:c.instructions+=1;goto B52b2cc;
case 0x52b2cf:goto L52b2cf;
case 0x52b2d1:c.instructions+=2;goto B52b2d1;
case 0x52b2d3:c.instructions+=1;goto B52b2d3;
case 0x52b2d5:goto L52b2d5;
case 0x52b2d6:goto L52b2d6;
case 0x52b2dc:c.instructions+=3;goto B52b2dc;
case 0x52b2de:c.instructions+=2;goto B52b2de;
case 0x52b2df:c.instructions+=1;goto B52b2df;
case 0x52b2e1:goto L52b2e1;
case 0x52b2e2:c.instructions+=1;goto B52b2e2;
case 0x52b2e7:goto L52b2e7;
case 0x52b2ea:goto L52b2ea;
case 0x52b2ec:c.instructions+=3;goto B52b2ec;
case 0x52b2f1:c.instructions+=2;goto B52b2f1;
case 0x52b2f7:c.instructions+=1;goto B52b2f7;
case 0x52b2fc:goto L52b2fc;
case 0x52b302:c.instructions+=3;goto B52b302;
case 0x52b303:c.instructions+=2;goto B52b303;
case 0x52b308:c.instructions+=1;goto B52b308;
case 0x52b30d:goto L52b30d;
case 0x52b310:c.instructions+=4;goto B52b310;
case 0x52b313:c.instructions+=3;goto B52b313;
case 0x52b318:c.instructions+=2;goto B52b318;
case 0x52b31e:c.instructions+=1;goto B52b31e;
case 0x52b323:goto L52b323;
case 0x52b326:c.instructions+=3;goto B52b326;
case 0x52b32b:c.instructions+=2;goto B52b32b;
case 0x52b331:c.instructions+=1;goto B52b331;
case 0x52b336:goto L52b336;
case 0x52b339:c.instructions+=3;goto B52b339;
case 0x52b33e:c.instructions+=2;goto B52b33e;
case 0x52b344:c.instructions+=1;goto B52b344;
case 0x52b349:goto L52b349;
case 0x52b34b:c.instructions+=2;goto B52b34b;
case 0x52b353:c.instructions+=1;goto B52b353;
case 0x52b358:goto L52b358;
case 0x52b35c:c.instructions+=5;goto B52b35c;
case 0x52b35d:c.instructions+=4;goto B52b35d;
case 0x52b35e:c.instructions+=3;goto B52b35e;
case 0x52b365:c.instructions+=2;goto B52b365;
case 0x52b368:c.instructions+=1;goto B52b368;
case 0x52b370:goto L52b370;
case 0x52b371:c.instructions+=11;goto B52b371;
case 0x52b372:c.instructions+=10;goto B52b372;
case 0x52b374:c.instructions+=9;goto B52b374;
case 0x52b377:c.instructions+=8;goto B52b377;
case 0x52b37b:c.instructions+=7;goto B52b37b;
case 0x52b37d:c.instructions+=6;goto B52b37d;
case 0x52b37e:c.instructions+=5;goto B52b37e;
case 0x52b381:c.instructions+=4;goto B52b381;
case 0x52b382:c.instructions+=3;goto B52b382;
case 0x52b383:c.instructions+=2;goto B52b383;
case 0x52b385:c.instructions+=1;goto B52b385;
case 0x52b388:goto L52b388;
case 0x52b38a:c.instructions+=1;goto B52b38a;
case 0x52b38c:goto L52b38c;
case 0x52b38e:goto L52b38e;
case 0x52b390:c.instructions+=1;goto B52b390;
case 0x52b395:goto L52b395;
case 0x52b396:c.instructions+=3;goto B52b396;
case 0x52b398:c.instructions+=2;goto B52b398;
case 0x52b399:c.instructions+=1;goto B52b399;
case 0x52b3a0:goto L52b3a0;
case 0x52b3a4:c.instructions+=6;goto B52b3a4;
case 0x52b3a6:c.instructions+=5;goto B52b3a6;
case 0x52b3a7:c.instructions+=4;goto B52b3a7;
case 0x52b3a8:c.instructions+=3;goto B52b3a8;
case 0x52b3a9:c.instructions+=2;goto B52b3a9;
case 0x52b3ab:c.instructions+=1;goto B52b3ab;
case 0x52b3ad:goto L52b3ad;
case 0x52b3b3:c.instructions+=3;goto B52b3b3;
case 0x52b3b5:c.instructions+=2;goto B52b3b5;
case 0x52b3b9:c.instructions+=1;goto B52b3b9;
case 0x52b3bb:goto L52b3bb;
case 0x52b3bd:c.instructions+=6;goto B52b3bd;
case 0x52b3be:c.instructions+=5;goto B52b3be;
case 0x52b3bf:c.instructions+=4;goto B52b3bf;
case 0x52b3c1:c.instructions+=3;goto B52b3c1;
case 0x52b3c6:c.instructions+=2;goto B52b3c6;
case 0x52b3c8:c.instructions+=1;goto B52b3c8;
case 0x52b3cd:goto L52b3cd;
case 0x52b3d3:c.instructions+=7;goto B52b3d3;
case 0x52b3d5:c.instructions+=6;goto B52b3d5;
case 0x52b3d7:c.instructions+=5;goto B52b3d7;
case 0x52b3d8:c.instructions+=4;goto B52b3d8;
case 0x52b3d9:c.instructions+=3;goto B52b3d9;
case 0x52b3de:c.instructions+=2;goto B52b3de;
case 0x52b3e0:c.instructions+=1;goto B52b3e0;
case 0x52b3e5:goto L52b3e5;
case 0x52b3e9:c.instructions+=2;goto B52b3e9;
case 0x52b3eb:c.instructions+=1;goto B52b3eb;
case 0x52b3ed:goto L52b3ed;
case 0x52b3ef:c.instructions+=6;goto B52b3ef;
case 0x52b3f0:c.instructions+=5;goto B52b3f0;
case 0x52b3f1:c.instructions+=4;goto B52b3f1;
case 0x52b3f3:c.instructions+=3;goto B52b3f3;
case 0x52b3f8:c.instructions+=2;goto B52b3f8;
case 0x52b3fa:c.instructions+=1;goto B52b3fa;
case 0x52b3ff:goto L52b3ff;
case 0x52b401:c.instructions+=6;goto B52b401;
case 0x52b403:c.instructions+=5;goto B52b403;
case 0x52b404:c.instructions+=4;goto B52b404;
case 0x52b405:c.instructions+=3;goto B52b405;
case 0x52b40a:c.instructions+=2;goto B52b40a;
case 0x52b40c:c.instructions+=1;goto B52b40c;
case 0x52b411:goto L52b411;
case 0x52b412:c.instructions+=4;goto B52b412;
case 0x52b418:c.instructions+=3;goto B52b418;
case 0x52b419:c.instructions+=2;goto B52b419;
case 0x52b41a:c.instructions+=1;goto B52b41a;
case 0x52b41d:goto L52b41d;
case 0x52b421:c.instructions+=5;goto B52b421;
case 0x52b422:c.instructions+=4;goto B52b422;
case 0x52b428:c.instructions+=3;goto B52b428;
case 0x52b429:c.instructions+=2;goto B52b429;
case 0x52b42a:c.instructions+=1;goto B52b42a;
case 0x52b430:goto L52b430;
case 0x52b434:c.instructions+=3;goto B52b434;
case 0x52b437:c.instructions+=2;goto B52b437;
case 0x52b43a:c.instructions+=1;goto B52b43a;
case 0x52b43c:goto L52b43c;
case 0x52b43d:c.instructions+=1;goto B52b43d;
case 0x52b43f:goto L52b43f;
case 0x52b440:c.instructions+=1;goto B52b440;
case 0x52b442:goto L52b442;
case 0x52b446:c.instructions+=2;goto B52b446;
case 0x52b44a:c.instructions+=1;goto B52b44a;
case 0x52b44c:goto L52b44c;
case 0x52b44f:c.instructions+=14;goto B52b44f;
case 0x52b450:c.instructions+=13;goto B52b450;
case 0x52b453:c.instructions+=12;goto B52b453;
case 0x52b455:c.instructions+=11;goto B52b455;
case 0x52b458:c.instructions+=10;goto B52b458;
case 0x52b45b:c.instructions+=9;goto B52b45b;
case 0x52b45f:c.instructions+=8;goto B52b45f;
case 0x52b462:c.instructions+=7;goto B52b462;
case 0x52b465:c.instructions+=6;goto B52b465;
case 0x52b467:c.instructions+=5;goto B52b467;
case 0x52b46b:c.instructions+=4;goto B52b46b;
case 0x52b46e:c.instructions+=3;goto B52b46e;
case 0x52b46f:c.instructions+=2;goto B52b46f;
case 0x52b471:c.instructions+=1;goto B52b471;
case 0x52b474:goto L52b474;
case 0x52b475:c.instructions+=1;goto B52b475;
case 0x52b47a:goto L52b47a;
case 0x52b47c:c.instructions+=1;goto B52b47c;
case 0x52b480:goto L52b480;
case 0x52b481:c.instructions+=2;goto B52b481;
case 0x52b483:c.instructions+=1;goto B52b483;
case 0x52b488:goto L52b488;
case 0x52b48e:c.instructions+=4;goto B52b48e;
case 0x52b495:c.instructions+=3;goto B52b495;
case 0x52b497:c.instructions+=2;goto B52b497;
case 0x52b498:c.instructions+=1;goto B52b498;
case 0x52b4a0:goto L52b4a0;
case 0x52b4a1:c.instructions+=2;goto B52b4a1;
case 0x52b4a3:c.instructions+=1;goto B52b4a3;
case 0x52b4a8:goto L52b4a8;
case 0x52b4ad:c.instructions+=1;goto B52b4ad;
case 0x52b4af:goto L52b4af;
case 0x52b4b0:c.instructions+=1;goto B52b4b0;
case 0x52b4b5:goto L52b4b5;
case 0x52b4b8:goto L52b4b8;
case 0x52b4ba:c.instructions+=2;goto B52b4ba;
case 0x52b4bb:c.instructions+=1;goto B52b4bb;
case 0x52b4c0:goto L52b4c0;
case 0x52b4c6:c.instructions+=1;goto B52b4c6;
case 0x52b4d0:goto L52b4d0;
case 0x52b4d1:c.instructions+=5;goto B52b4d1;
case 0x52b4d3:c.instructions+=4;goto B52b4d3;
case 0x52b4d4:c.instructions+=3;goto B52b4d4;
case 0x52b4d7:c.instructions+=2;goto B52b4d7;
case 0x52b4dd:c.instructions+=1;goto B52b4dd;
case 0x52b4df:goto L52b4df;
case 0x52b4e6:c.instructions+=1;goto B52b4e6;
case 0x52b4e8:goto L52b4e8;
case 0x52b4ef:c.instructions+=1;goto B52b4ef;
case 0x52b4f1:goto L52b4f1;
case 0x52b4f2:c.instructions+=3;goto B52b4f2;
case 0x52b4f4:c.instructions+=2;goto B52b4f4;
case 0x52b4f5:c.instructions+=1;goto B52b4f5;
case 0x52b4f6:goto L52b4f6;
case 0x52b4fb:c.instructions+=1;goto B52b4fb;
case 0x52b500:goto L52b500;
case 0x52b503:c.instructions+=2;goto B52b503;
case 0x52b505:c.instructions+=1;goto B52b505;
case 0x52b507:goto L52b507;
case 0x52b509:c.instructions+=1;goto B52b509;
case 0x52b50e:goto L52b50e;
case 0x52b510:goto L52b510;
case 0x52b512:goto L52b512;
case 0x52b514:c.instructions+=11;goto B52b514;
case 0x52b51e:c.instructions+=10;goto B52b51e;
case 0x52b521:c.instructions+=9;goto B52b521;
case 0x52b524:c.instructions+=8;goto B52b524;
case 0x52b527:c.instructions+=7;goto B52b527;
case 0x52b52a:c.instructions+=6;goto B52b52a;
case 0x52b52d:c.instructions+=5;goto B52b52d;
case 0x52b530:c.instructions+=4;goto B52b530;
case 0x52b532:c.instructions+=3;goto B52b532;
case 0x52b533:c.instructions+=2;goto B52b533;
case 0x52b535:c.instructions+=1;goto B52b535;
case 0x52b53a:goto L52b53a;
case 0x52b53c:c.instructions+=2;goto B52b53c;
case 0x52b53d:c.instructions+=1;goto B52b53d;
case 0x52b542:goto L52b542;
case 0x52b543:c.instructions+=3;goto B52b543;
case 0x52b545:c.instructions+=2;goto B52b545;
case 0x52b546:c.instructions+=1;goto B52b546;
case 0x52b550:goto L52b550;
case 0x52b553:c.instructions+=9;goto B52b553;
case 0x52b554:c.instructions+=8;goto B52b554;
case 0x52b556:c.instructions+=7;goto B52b556;
case 0x52b559:c.instructions+=6;goto B52b559;
case 0x52b55c:c.instructions+=5;goto B52b55c;
case 0x52b55f:c.instructions+=4;goto B52b55f;
case 0x52b563:c.instructions+=3;goto B52b563;
case 0x52b566:c.instructions+=2;goto B52b566;
case 0x52b56c:c.instructions+=1;goto B52b56c;
case 0x52b56e:goto L52b56e;
case 0x52b570:goto L52b570;
case 0x52b572:c.instructions+=1;goto B52b572;
case 0x52b578:goto L52b578;
case 0x52b57b:c.instructions+=3;goto B52b57b;
case 0x52b57f:c.instructions+=2;goto B52b57f;
case 0x52b585:c.instructions+=1;goto B52b585;
case 0x52b587:goto L52b587;
case 0x52b588:c.instructions+=12;goto B52b588;
case 0x52b58b:c.instructions+=11;goto B52b58b;
case 0x52b58e:c.instructions+=10;goto B52b58e;
case 0x52b58f:c.instructions+=9;goto B52b58f;
case 0x52b590:c.instructions+=8;goto B52b590;
case 0x52b592:c.instructions+=7;goto B52b592;
case 0x52b596:c.instructions+=6;goto B52b596;
case 0x52b599:c.instructions+=5;goto B52b599;
case 0x52b59c:c.instructions+=4;goto B52b59c;
case 0x52b59e:c.instructions+=3;goto B52b59e;
case 0x52b5a2:c.instructions+=2;goto B52b5a2;
case 0x52b5aa:c.instructions+=1;goto B52b5aa;
case 0x52b5b0:goto L52b5b0;
case 0x52b5b2:c.instructions+=1;goto B52b5b2;
case 0x52b5b7:goto L52b5b7;
case 0x52b5b9:c.instructions+=3;goto B52b5b9;
case 0x52b5bc:c.instructions+=2;goto B52b5bc;
case 0x52b5be:c.instructions+=1;goto B52b5be;
case 0x52b5c0:goto L52b5c0;
case 0x52b5c5:c.instructions+=6;goto B52b5c5;
case 0x52b5c8:c.instructions+=5;goto B52b5c8;
case 0x52b5cb:c.instructions+=4;goto B52b5cb;
case 0x52b5ce:c.instructions+=3;goto B52b5ce;
case 0x52b5d1:c.instructions+=2;goto B52b5d1;
case 0x52b5d7:c.instructions+=1;goto B52b5d7;
case 0x52b5d9:goto L52b5d9;
case 0x52b5dd:c.instructions+=5;goto B52b5dd;
case 0x52b5e1:c.instructions+=4;goto B52b5e1;
case 0x52b5e5:c.instructions+=3;goto B52b5e5;
case 0x52b5e6:c.instructions+=2;goto B52b5e6;
case 0x52b5e8:c.instructions+=1;goto B52b5e8;
case 0x52b5ed:goto L52b5ed;
case 0x52b5ef:c.instructions+=2;goto B52b5ef;
case 0x52b5f2:c.instructions+=1;goto B52b5f2;
case 0x52b5f4:goto L52b5f4;
case 0x52b5f6:c.instructions+=1;goto B52b5f6;
case 0x52b5f8:goto L52b5f8;
case 0x52b5fb:c.instructions+=3;goto B52b5fb;
case 0x52b5fd:c.instructions+=2;goto B52b5fd;
case 0x52b600:c.instructions+=1;goto B52b600;
case 0x52b602:goto L52b602;
case 0x52b605:goto L52b605;
case 0x52b608:c.instructions+=2;goto B52b608;
case 0x52b60b:c.instructions+=1;goto B52b60b;
case 0x52b60d:goto L52b60d;
case 0x52b613:c.instructions+=1;goto B52b613;
case 0x52b619:goto L52b619;
case 0x52b61b:c.instructions+=3;goto B52b61b;
case 0x52b61c:c.instructions+=2;goto B52b61c;
case 0x52b61f:c.instructions+=1;goto B52b61f;
case 0x52b620:goto L52b620;
case 0x52b623:c.instructions+=3;goto B52b623;
case 0x52b625:c.instructions+=2;goto B52b625;
case 0x52b628:c.instructions+=1;goto B52b628;
case 0x52b62a:goto L52b62a;
case 0x52b62d:goto L52b62d;
case 0x52b634:c.instructions+=1;goto B52b634;
case 0x52b637:goto L52b637;
case 0x52b63a:c.instructions+=1;goto B52b63a;
case 0x52b63c:goto L52b63c;
case 0x52b63f:goto L52b63f;
case 0x52b642:goto L52b642;
case 0x52b646:c.instructions+=5;goto B52b646;
case 0x52b64a:c.instructions+=4;goto B52b64a;
case 0x52b64b:c.instructions+=3;goto B52b64b;
case 0x52b64d:c.instructions+=2;goto B52b64d;
case 0x52b651:c.instructions+=1;goto B52b651;
case 0x52b657:goto L52b657;
case 0x52b65a:c.instructions+=2;goto B52b65a;
case 0x52b65c:c.instructions+=1;goto B52b65c;
case 0x52b662:goto L52b662;
case 0x52b665:c.instructions+=3;goto B52b665;
case 0x52b668:c.instructions+=2;goto B52b668;
case 0x52b669:c.instructions+=1;goto B52b669;
case 0x52b66e:goto L52b66e;
case 0x52b670:c.instructions+=1;goto B52b670;
case 0x52b676:goto L52b676;
case 0x52b679:c.instructions+=8;goto B52b679;
case 0x52b67c:c.instructions+=7;goto B52b67c;
case 0x52b67e:c.instructions+=6;goto B52b67e;
case 0x52b682:c.instructions+=5;goto B52b682;
case 0x52b683:c.instructions+=4;goto B52b683;
case 0x52b687:c.instructions+=3;goto B52b687;
case 0x52b688:c.instructions+=2;goto B52b688;
case 0x52b689:c.instructions+=1;goto B52b689;
case 0x52b68b:goto L52b68b;
case 0x52b68d:c.instructions+=1;goto B52b68d;
case 0x52b693:goto L52b693;
case 0x52b696:c.instructions+=3;goto B52b696;
case 0x52b698:c.instructions+=2;goto B52b698;
case 0x52b699:c.instructions+=1;goto B52b699;
case 0x52b69e:goto L52b69e;
case 0x52b6a0:c.instructions+=3;goto B52b6a0;
case 0x52b6a4:c.instructions+=2;goto B52b6a4;
case 0x52b6a6:c.instructions+=1;goto B52b6a6;
case 0x52b6a8:goto L52b6a8;
case 0x52b6ac:c.instructions+=2;goto B52b6ac;
case 0x52b6ad:c.instructions+=1;goto B52b6ad;
case 0x52b6b2:goto L52b6b2;
case 0x52b6b5:goto L52b6b5;
case 0x52b6b7:c.instructions+=1;goto B52b6b7;
case 0x52b6b9:goto L52b6b9;
case 0x52b6bc:c.instructions+=3;goto B52b6bc;
case 0x52b6be:c.instructions+=2;goto B52b6be;
case 0x52b6bf:c.instructions+=1;goto B52b6bf;
case 0x52b6c2:goto L52b6c2;
case 0x52b6c9:c.instructions+=5;goto B52b6c9;
case 0x52b6cc:c.instructions+=4;goto B52b6cc;
case 0x52b6d2:c.instructions+=3;goto B52b6d2;
case 0x52b6d7:c.instructions+=2;goto B52b6d7;
case 0x52b6d9:c.instructions+=1;goto B52b6d9;
case 0x52b6db:goto L52b6db;
case 0x52b6de:c.instructions+=3;goto B52b6de;
case 0x52b6e0:c.instructions+=2;goto B52b6e0;
case 0x52b6e3:c.instructions+=1;goto B52b6e3;
case 0x52b6e5:goto L52b6e5;
case 0x52b6e8:goto L52b6e8;
case 0x52b6eb:c.instructions+=2;goto B52b6eb;
case 0x52b6ee:c.instructions+=1;goto B52b6ee;
case 0x52b6f0:goto L52b6f0;
case 0x52b6f3:c.instructions+=3;goto B52b6f3;
case 0x52b6f5:c.instructions+=2;goto B52b6f5;
case 0x52b6f8:c.instructions+=1;goto B52b6f8;
case 0x52b6fa:goto L52b6fa;
case 0x52b6fd:goto L52b6fd;
case 0x52b704:c.instructions+=1;goto B52b704;
case 0x52b707:goto L52b707;
case 0x52b70a:c.instructions+=1;goto B52b70a;
case 0x52b70c:goto L52b70c;
case 0x52b70f:goto L52b70f;
case 0x52b712:c.instructions+=1;goto B52b712;
case 0x52b714:goto L52b714;
case 0x52b717:goto L52b717;
case 0x52b71a:c.instructions+=2;goto B52b71a;
case 0x52b71c:c.instructions+=1;goto B52b71c;
case 0x52b722:goto L52b722;
case 0x52b723:c.instructions+=6;goto B52b723;
case 0x52b724:c.instructions+=5;goto B52b724;
case 0x52b725:c.instructions+=4;goto B52b725;
case 0x52b727:c.instructions+=3;goto B52b727;
case 0x52b728:c.instructions+=2;goto B52b728;
case 0x52b72b:c.instructions+=1;goto B52b72b;
case 0x52b72c:goto L52b72c;
case 0x52b72d:c.instructions+=6;goto B52b72d;
case 0x52b72e:c.instructions+=5;goto B52b72e;
case 0x52b72f:c.instructions+=4;goto B52b72f;
case 0x52b731:c.instructions+=3;goto B52b731;
case 0x52b732:c.instructions+=2;goto B52b732;
case 0x52b735:c.instructions+=1;goto B52b735;
case 0x52b740:goto L52b740;
case 0x52b743:c.instructions+=9;goto B52b743;
case 0x52b744:c.instructions+=8;goto B52b744;
case 0x52b745:c.instructions+=7;goto B52b745;
case 0x52b749:c.instructions+=6;goto B52b749;
case 0x52b74c:c.instructions+=5;goto B52b74c;
case 0x52b751:c.instructions+=4;goto B52b751;
case 0x52b752:c.instructions+=3;goto B52b752;
case 0x52b754:c.instructions+=2;goto B52b754;
case 0x52b757:c.instructions+=1;goto B52b757;
case 0x52b75d:goto L52b75d;
case 0x52b763:goto L52b763;
case 0x52b768:c.instructions+=1;goto B52b768;
case 0x52b76e:goto L52b76e;
case 0x52b770:goto L52b770;
case 0x52b775:c.instructions+=1;goto B52b775;
case 0x52b777:goto L52b777;
case 0x52b77c:c.instructions+=1;goto B52b77c;
case 0x52b77e:goto L52b77e;
case 0x52b781:c.instructions+=1;goto B52b781;
case 0x52b787:goto L52b787;
case 0x52b78a:c.instructions+=15;goto B52b78a;
case 0x52b78b:c.instructions+=14;goto B52b78b;
case 0x52b78e:c.instructions+=13;goto B52b78e;
case 0x52b791:c.instructions+=12;goto B52b791;
case 0x52b794:c.instructions+=11;goto B52b794;
case 0x52b796:c.instructions+=10;goto B52b796;
case 0x52b799:c.instructions+=9;goto B52b799;
case 0x52b79c:c.instructions+=8;goto B52b79c;
case 0x52b79d:c.instructions+=7;goto B52b79d;
case 0x52b79f:c.instructions+=6;goto B52b79f;
case 0x52b7a2:c.instructions+=5;goto B52b7a2;
case 0x52b7a3:c.instructions+=4;goto B52b7a3;
case 0x52b7a6:c.instructions+=3;goto B52b7a6;
case 0x52b7a7:c.instructions+=2;goto B52b7a7;
case 0x52b7aa:c.instructions+=1;goto B52b7aa;
case 0x52b7ad:goto L52b7ad;
case 0x52b7b0:c.instructions+=1;goto B52b7b0;
case 0x52b7b2:goto L52b7b2;
case 0x52b7b4:c.instructions+=1;goto B52b7b4;
case 0x52b7b9:goto L52b7b9;
case 0x52b7bc:c.instructions+=3;goto B52b7bc;
case 0x52b7bd:c.instructions+=2;goto B52b7bd;
case 0x52b7c1:c.instructions+=1;goto B52b7c1;
case 0x52b7c6:goto L52b7c6;
case 0x52b7ca:c.instructions+=3;goto B52b7ca;
case 0x52b7cb:c.instructions+=2;goto B52b7cb;
case 0x52b7cd:c.instructions+=1;goto B52b7cd;
case 0x52b7d2:goto L52b7d2;
case 0x52b7d3:c.instructions+=4;goto B52b7d3;
case 0x52b7d4:c.instructions+=3;goto B52b7d4;
case 0x52b7d5:c.instructions+=2;goto B52b7d5;
case 0x52b7d8:c.instructions+=1;goto B52b7d8;
case 0x52b7db:goto L52b7db;
case 0x52b7de:c.instructions+=3;goto B52b7de;
case 0x52b7df:c.instructions+=2;goto B52b7df;
case 0x52b7e1:c.instructions+=1;goto B52b7e1;
case 0x52b7e6:goto L52b7e6;
case 0x52b7e7:c.instructions+=4;goto B52b7e7;
case 0x52b7e8:c.instructions+=3;goto B52b7e8;
case 0x52b7e9:c.instructions+=2;goto B52b7e9;
case 0x52b7ec:c.instructions+=1;goto B52b7ec;
case 0x52b7ef:goto L52b7ef;
case 0x52b7f2:c.instructions+=3;goto B52b7f2;
case 0x52b7f3:c.instructions+=2;goto B52b7f3;
case 0x52b7f5:c.instructions+=1;goto B52b7f5;
case 0x52b7fa:goto L52b7fa;
case 0x52b7fd:c.instructions+=3;goto B52b7fd;
case 0x52b7fe:c.instructions+=2;goto B52b7fe;
case 0x52b800:c.instructions+=1;goto B52b800;
case 0x52b805:goto L52b805;
case 0x52b808:c.instructions+=6;goto B52b808;
case 0x52b80a:c.instructions+=5;goto B52b80a;
case 0x52b80c:c.instructions+=4;goto B52b80c;
case 0x52b80f:c.instructions+=3;goto B52b80f;
case 0x52b812:c.instructions+=2;goto B52b812;
case 0x52b815:c.instructions+=1;goto B52b815;
case 0x52b81a:goto L52b81a;
case 0x52b81c:c.instructions+=2;goto B52b81c;
case 0x52b81e:c.instructions+=1;goto B52b81e;
case 0x52b823:goto L52b823;
case 0x52b824:c.instructions+=4;goto B52b824;
case 0x52b825:c.instructions+=3;goto B52b825;
case 0x52b826:c.instructions+=2;goto B52b826;
case 0x52b829:c.instructions+=1;goto B52b829;
case 0x52b82c:goto L52b82c;
case 0x52b831:c.instructions+=1;goto B52b831;
case 0x52b833:goto L52b833;
case 0x52b838:c.instructions+=1;goto B52b838;
case 0x52b83e:goto L52b83e;
case 0x52b841:c.instructions+=5;goto B52b841;
case 0x52b842:c.instructions+=4;goto B52b842;
case 0x52b844:c.instructions+=3;goto B52b844;
case 0x52b846:c.instructions+=2;goto B52b846;
case 0x52b848:c.instructions+=1;goto B52b848;
case 0x52b84d:goto L52b84d;
case 0x52b84e:c.instructions+=4;goto B52b84e;
case 0x52b84f:c.instructions+=3;goto B52b84f;
case 0x52b850:c.instructions+=2;goto B52b850;
case 0x52b853:c.instructions+=1;goto B52b853;
case 0x52b856:goto L52b856;
case 0x52b859:c.instructions+=11;goto B52b859;
case 0x52b85c:c.instructions+=10;goto B52b85c;
case 0x52b85f:c.instructions+=9;goto B52b85f;
case 0x52b863:c.instructions+=8;goto B52b863;
case 0x52b867:c.instructions+=7;goto B52b867;
case 0x52b86a:c.instructions+=6;goto B52b86a;
case 0x52b86e:c.instructions+=5;goto B52b86e;
case 0x52b872:c.instructions+=4;goto B52b872;
case 0x52b873:c.instructions+=3;goto B52b873;
case 0x52b875:c.instructions+=2;goto B52b875;
case 0x52b879:c.instructions+=1;goto B52b879;
case 0x52b87e:goto L52b87e;
case 0x52b87f:c.instructions+=4;goto B52b87f;
case 0x52b880:c.instructions+=3;goto B52b880;
case 0x52b881:c.instructions+=2;goto B52b881;
case 0x52b884:c.instructions+=1;goto B52b884;
case 0x52b887:goto L52b887;
case 0x52b88a:c.instructions+=15;goto B52b88a;
case 0x52b88b:c.instructions+=14;goto B52b88b;
case 0x52b88e:c.instructions+=13;goto B52b88e;
case 0x52b891:c.instructions+=12;goto B52b891;
case 0x52b893:c.instructions+=11;goto B52b893;
case 0x52b896:c.instructions+=10;goto B52b896;
case 0x52b899:c.instructions+=9;goto B52b899;
case 0x52b89c:c.instructions+=8;goto B52b89c;
case 0x52b89d:c.instructions+=7;goto B52b89d;
case 0x52b89f:c.instructions+=6;goto B52b89f;
case 0x52b8a2:c.instructions+=5;goto B52b8a2;
case 0x52b8a3:c.instructions+=4;goto B52b8a3;
case 0x52b8a6:c.instructions+=3;goto B52b8a6;
case 0x52b8a7:c.instructions+=2;goto B52b8a7;
case 0x52b8aa:c.instructions+=1;goto B52b8aa;
case 0x52b8ad:goto L52b8ad;
case 0x52b8b2:c.instructions+=1;goto B52b8b2;
case 0x52b8b4:goto L52b8b4;
case 0x52b8b6:goto L52b8b6;
case 0x52b8bb:c.instructions+=1;goto B52b8bb;
case 0x52b8bd:goto L52b8bd;
case 0x52b8c0:c.instructions+=1;goto B52b8c0;
case 0x52b8c6:goto L52b8c6;
case 0x52b8c9:c.instructions+=8;goto B52b8c9;
case 0x52b8ca:c.instructions+=7;goto B52b8ca;
case 0x52b8cd:c.instructions+=6;goto B52b8cd;
case 0x52b8ce:c.instructions+=5;goto B52b8ce;
case 0x52b8d4:c.instructions+=4;goto B52b8d4;
case 0x52b8da:c.instructions+=3;goto B52b8da;
case 0x52b8db:c.instructions+=2;goto B52b8db;
case 0x52b8de:c.instructions+=1;goto B52b8de;
case 0x52b8e1:goto L52b8e1;
case 0x52b8e4:c.instructions+=7;goto B52b8e4;
case 0x52b8e7:c.instructions+=6;goto B52b8e7;
case 0x52b8eb:c.instructions+=5;goto B52b8eb;
case 0x52b8ef:c.instructions+=4;goto B52b8ef;
case 0x52b8f0:c.instructions+=3;goto B52b8f0;
case 0x52b8f2:c.instructions+=2;goto B52b8f2;
case 0x52b8f6:c.instructions+=1;goto B52b8f6;
case 0x52b8fb:goto L52b8fb;
case 0x52b8fc:c.instructions+=4;goto B52b8fc;
case 0x52b8fd:c.instructions+=3;goto B52b8fd;
case 0x52b8fe:c.instructions+=2;goto B52b8fe;
case 0x52b901:c.instructions+=1;goto B52b901;
case 0x52b904:goto L52b904;
case 0x52b907:c.instructions+=3;goto B52b907;
case 0x52b908:c.instructions+=2;goto B52b908;
case 0x52b90a:c.instructions+=1;goto B52b90a;
case 0x52b90f:goto L52b90f;
case 0x52b910:c.instructions+=4;goto B52b910;
case 0x52b911:c.instructions+=3;goto B52b911;
case 0x52b912:c.instructions+=2;goto B52b912;
case 0x52b915:c.instructions+=1;goto B52b915;
case 0x52b918:goto L52b918;
case 0x52b91d:c.instructions+=1;goto B52b91d;
case 0x52b91f:goto L52b91f;
case 0x52b924:c.instructions+=1;goto B52b924;
case 0x52b926:goto L52b926;
case 0x52b929:c.instructions+=5;goto B52b929;
case 0x52b92b:c.instructions+=4;goto B52b92b;
case 0x52b92e:c.instructions+=3;goto B52b92e;
case 0x52b930:c.instructions+=2;goto B52b930;
case 0x52b931:c.instructions+=1;goto B52b931;
case 0x52b936:goto L52b936;
case 0x52b937:c.instructions+=4;goto B52b937;
case 0x52b938:c.instructions+=3;goto B52b938;
case 0x52b939:c.instructions+=2;goto B52b939;
case 0x52b93c:c.instructions+=1;goto B52b93c;
case 0x52b93f:goto L52b93f;
case 0x52b942:c.instructions+=3;goto B52b942;
case 0x52b945:c.instructions+=2;goto B52b945;
case 0x52b948:c.instructions+=1;goto B52b948;
case 0x52b94b:goto L52b94b;
case 0x52b94c:c.instructions+=4;goto B52b94c;
case 0x52b94d:c.instructions+=3;goto B52b94d;
case 0x52b94e:c.instructions+=2;goto B52b94e;
case 0x52b951:c.instructions+=1;goto B52b951;
case 0x52b960:goto L52b960;
case 0x52b962:c.instructions+=14;goto B52b962;
case 0x52b967:c.instructions+=13;goto B52b967;
case 0x52b96d:c.instructions+=12;goto B52b96d;
case 0x52b96e:c.instructions+=11;goto B52b96e;
case 0x52b975:c.instructions+=10;goto B52b975;
case 0x52b976:c.instructions+=9;goto B52b976;
case 0x52b977:c.instructions+=8;goto B52b977;
case 0x52b979:c.instructions+=7;goto B52b979;
case 0x52b97d:c.instructions+=6;goto B52b97d;
case 0x52b980:c.instructions+=5;goto B52b980;
case 0x52b982:c.instructions+=4;goto B52b982;
case 0x52b985:c.instructions+=3;goto B52b985;
case 0x52b98d:c.instructions+=2;goto B52b98d;
case 0x52b993:c.instructions+=1;goto B52b993;
case 0x52b995:goto L52b995;
case 0x52b99a:goto L52b99a;
case 0x52b99e:c.instructions+=5;goto B52b99e;
case 0x52b9a5:c.instructions+=4;goto B52b9a5;
case 0x52b9a6:c.instructions+=3;goto B52b9a6;
case 0x52b9ad:c.instructions+=2;goto B52b9ad;
case 0x52b9b0:c.instructions+=1;goto B52b9b0;
case 0x52b9c0:goto L52b9c0;
case 0x52b9c1:c.instructions+=5;goto B52b9c1;
case 0x52b9c5:c.instructions+=4;goto B52b9c5;
case 0x52b9c7:c.instructions+=3;goto B52b9c7;
case 0x52b9c9:c.instructions+=2;goto B52b9c9;
case 0x52b9cb:c.instructions+=1;goto B52b9cb;
case 0x52b9cd:goto L52b9cd;
case 0x52b9ce:c.instructions+=2;goto B52b9ce;
case 0x52b9d3:c.instructions+=1;goto B52b9d3;
case 0x52b9d8:goto L52b9d8;
case 0x52b9d9:c.instructions+=1;goto B52b9d9;
case 0x52b9e0:goto L52b9e0;
case 0x52b9e1:c.instructions+=2;goto B52b9e1;
case 0x52b9e3:c.instructions+=1;goto B52b9e3;
case 0x52b9e8:goto L52b9e8;
case 0x52b9ea:c.instructions+=34;goto B52b9ea;
case 0x52b9ed:c.instructions+=33;goto B52b9ed;
case 0x52b9f0:c.instructions+=32;goto B52b9f0;
case 0x52b9f3:c.instructions+=31;goto B52b9f3;
case 0x52b9f6:c.instructions+=30;goto B52b9f6;
case 0x52b9f9:c.instructions+=29;goto B52b9f9;
case 0x52b9fc:c.instructions+=28;goto B52b9fc;
case 0x52b9ff:c.instructions+=27;goto B52b9ff;
case 0x52ba02:c.instructions+=26;goto B52ba02;
case 0x52ba08:c.instructions+=25;goto B52ba08;
case 0x52ba0e:c.instructions+=24;goto B52ba0e;
case 0x52ba15:c.instructions+=23;goto B52ba15;
case 0x52ba1b:c.instructions+=22;goto B52ba1b;
case 0x52ba21:c.instructions+=21;goto B52ba21;
case 0x52ba27:c.instructions+=20;goto B52ba27;
case 0x52ba2d:c.instructions+=19;goto B52ba2d;
case 0x52ba33:c.instructions+=18;goto B52ba33;
case 0x52ba39:c.instructions+=17;goto B52ba39;
case 0x52ba3f:c.instructions+=16;goto B52ba3f;
case 0x52ba45:c.instructions+=15;goto B52ba45;
case 0x52ba4f:c.instructions+=14;goto B52ba4f;
case 0x52ba59:c.instructions+=13;goto B52ba59;
case 0x52ba5e:c.instructions+=12;goto B52ba5e;
case 0x52ba64:c.instructions+=11;goto B52ba64;
case 0x52ba6a:c.instructions+=10;goto B52ba6a;
case 0x52ba70:c.instructions+=9;goto B52ba70;
case 0x52ba76:c.instructions+=8;goto B52ba76;
case 0x52ba7c:c.instructions+=7;goto B52ba7c;
case 0x52ba82:c.instructions+=6;goto B52ba82;
case 0x52ba88:c.instructions+=5;goto B52ba88;
case 0x52ba8e:c.instructions+=4;goto B52ba8e;
case 0x52ba95:c.instructions+=3;goto B52ba95;
case 0x52ba97:c.instructions+=2;goto B52ba97;
case 0x52ba98:c.instructions+=1;goto B52ba98;
case 0x52baa0:goto L52baa0;
case 0x52baa2:c.instructions+=13;goto B52baa2;
case 0x52baa7:c.instructions+=12;goto B52baa7;
case 0x52baad:c.instructions+=11;goto B52baad;
case 0x52baae:c.instructions+=10;goto B52baae;
case 0x52bab5:c.instructions+=9;goto B52bab5;
case 0x52bab6:c.instructions+=8;goto B52bab6;
case 0x52bab7:c.instructions+=7;goto B52bab7;
case 0x52bab9:c.instructions+=6;goto B52bab9;
case 0x52babd:c.instructions+=5;goto B52babd;
case 0x52bac3:c.instructions+=4;goto B52bac3;
case 0x52bac9:c.instructions+=3;goto B52bac9;
case 0x52bacb:c.instructions+=2;goto B52bacb;
case 0x52bad3:c.instructions+=1;goto B52bad3;
case 0x52bad5:goto L52bad5;
case 0x52bad6:c.instructions+=1;goto B52bad6;
case 0x52badb:goto L52badb;
case 0x52bade:goto L52bade;
case 0x52bae4:c.instructions+=2;goto B52bae4;
case 0x52bae6:c.instructions+=1;goto B52bae6;
case 0x52bae8:goto L52bae8;
case 0x52bae9:c.instructions+=1;goto B52bae9;
case 0x52baee:goto L52baee;
case 0x52baf1:goto L52baf1;
case 0x52baf7:c.instructions+=2;goto B52baf7;
case 0x52baf9:c.instructions+=1;goto B52baf9;
case 0x52bafb:goto L52bafb;
case 0x52bafc:c.instructions+=1;goto B52bafc;
case 0x52bb01:goto L52bb01;
case 0x52bb04:goto L52bb04;
case 0x52bb06:c.instructions+=2;goto B52bb06;
case 0x52bb0e:c.instructions+=1;goto B52bb0e;
case 0x52bb13:goto L52bb13;
case 0x52bb17:c.instructions+=4;goto B52bb17;
case 0x52bb18:c.instructions+=3;goto B52bb18;
case 0x52bb1f:c.instructions+=2;goto B52bb1f;
case 0x52bb22:c.instructions+=1;goto B52bb22;
case 0x52bb30:goto L52bb30;
case 0x52bb33:c.instructions+=20;goto B52bb33;
case 0x52bb34:c.instructions+=19;goto B52bb34;
case 0x52bb35:c.instructions+=18;goto B52bb35;
case 0x52bb37:c.instructions+=17;goto B52bb37;
case 0x52bb3d:c.instructions+=16;goto B52bb3d;
case 0x52bb41:c.instructions+=15;goto B52bb41;
case 0x52bb44:c.instructions+=14;goto B52bb44;
case 0x52bb48:c.instructions+=13;goto B52bb48;
case 0x52bb4c:c.instructions+=12;goto B52bb4c;
case 0x52bb4f:c.instructions+=11;goto B52bb4f;
case 0x52bb52:c.instructions+=10;goto B52bb52;
case 0x52bb53:c.instructions+=9;goto B52bb53;
case 0x52bb54:c.instructions+=8;goto B52bb54;
case 0x52bb57:c.instructions+=7;goto B52bb57;
case 0x52bb5a:c.instructions+=6;goto B52bb5a;
case 0x52bb5c:c.instructions+=5;goto B52bb5c;
case 0x52bb5f:c.instructions+=4;goto B52bb5f;
case 0x52bb62:c.instructions+=3;goto B52bb62;
case 0x52bb63:c.instructions+=2;goto B52bb63;
case 0x52bb67:c.instructions+=1;goto B52bb67;
case 0x52bb6c:goto L52bb6c;
case 0x52bb6e:c.instructions+=3;goto B52bb6e;
case 0x52bb71:c.instructions+=2;goto B52bb71;
case 0x52bb73:c.instructions+=1;goto B52bb73;
case 0x52bb75:goto L52bb75;
case 0x52bb76:c.instructions+=2;goto B52bb76;
case 0x52bb78:c.instructions+=1;goto B52bb78;
case 0x52bb7a:goto L52bb7a;
case 0x52bb7d:c.instructions+=2;goto B52bb7d;
case 0x52bb7e:c.instructions+=1;goto B52bb7e;
case 0x52bb80:goto L52bb80;
case 0x52bb83:c.instructions+=11;goto B52bb83;
case 0x52bb8a:c.instructions+=10;goto B52bb8a;
case 0x52bb91:c.instructions+=9;goto B52bb91;
case 0x52bb94:c.instructions+=8;goto B52bb94;
case 0x52bb96:c.instructions+=7;goto B52bb96;
case 0x52bb99:c.instructions+=6;goto B52bb99;
case 0x52bb9c:c.instructions+=5;goto B52bb9c;
case 0x52bb9f:c.instructions+=4;goto B52bb9f;
case 0x52bba6:c.instructions+=3;goto B52bba6;
case 0x52bba9:c.instructions+=2;goto B52bba9;
case 0x52bbaa:c.instructions+=1;goto B52bbaa;
case 0x52bbac:goto L52bbac;
case 0x52bbae:goto L52bbae;
case 0x52bbb0:goto L52bbb0;
case 0x52bbb3:c.instructions+=5;goto B52bbb3;
case 0x52bbb7:c.instructions+=4;goto B52bbb7;
case 0x52bbb8:c.instructions+=3;goto B52bbb8;
case 0x52bbb9:c.instructions+=2;goto B52bbb9;
case 0x52bbbf:c.instructions+=1;goto B52bbbf;
case 0x52bbc4:goto L52bbc4;
case 0x52bbc7:c.instructions+=4;goto B52bbc7;
case 0x52bbca:c.instructions+=3;goto B52bbca;
case 0x52bbcb:c.instructions+=2;goto B52bbcb;
case 0x52bbcd:c.instructions+=1;goto B52bbcd;
case 0x52bbd2:goto L52bbd2;
case 0x52bbd5:c.instructions+=3;goto B52bbd5;
case 0x52bbd6:c.instructions+=2;goto B52bbd6;
case 0x52bbd8:c.instructions+=1;goto B52bbd8;
case 0x52bbdd:goto L52bbdd;
case 0x52bbe1:c.instructions+=1;goto B52bbe1;
case 0x52bbe7:goto L52bbe7;
case 0x52bbea:c.instructions+=2;goto B52bbea;
case 0x52bbec:c.instructions+=1;goto B52bbec;
case 0x52bbee:goto L52bbee;
case 0x52bbf2:c.instructions+=1;goto B52bbf2;
case 0x52bbf4:goto L52bbf4;
case 0x52bbf8:c.instructions+=1;goto B52bbf8;
case 0x52bbfa:goto L52bbfa;
case 0x52bbfd:c.instructions+=2;goto B52bbfd;
case 0x52bbff:c.instructions+=1;goto B52bbff;
case 0x52bc01:goto L52bc01;
case 0x52bc05:c.instructions+=1;goto B52bc05;
case 0x52bc07:goto L52bc07;
case 0x52bc0b:c.instructions+=1;goto B52bc0b;
case 0x52bc0d:goto L52bc0d;
case 0x52bc11:c.instructions+=2;goto B52bc11;
case 0x52bc13:c.instructions+=1;goto B52bc13;
case 0x52bc19:goto L52bc19;
case 0x52bc1b:c.instructions+=2;goto B52bc1b;
case 0x52bc23:c.instructions+=1;goto B52bc23;
case 0x52bc29:goto L52bc29;
case 0x52bc2c:c.instructions+=7;goto B52bc2c;
case 0x52bc2f:c.instructions+=6;goto B52bc2f;
case 0x52bc33:c.instructions+=5;goto B52bc33;
case 0x52bc36:c.instructions+=4;goto B52bc36;
case 0x52bc39:c.instructions+=3;goto B52bc39;
case 0x52bc3d:c.instructions+=2;goto B52bc3d;
case 0x52bc41:c.instructions+=1;goto B52bc41;
case 0x52bc45:goto L52bc45;
case 0x52bc48:c.instructions+=10;goto B52bc48;
case 0x52bc4c:c.instructions+=9;goto B52bc4c;
case 0x52bc4f:c.instructions+=8;goto B52bc4f;
case 0x52bc54:c.instructions+=7;goto B52bc54;
case 0x52bc57:c.instructions+=6;goto B52bc57;
case 0x52bc5a:c.instructions+=5;goto B52bc5a;
case 0x52bc60:c.instructions+=4;goto B52bc60;
case 0x52bc63:c.instructions+=3;goto B52bc63;
case 0x52bc65:c.instructions+=2;goto B52bc65;
case 0x52bc67:c.instructions+=1;goto B52bc67;
case 0x52bc6a:goto L52bc6a;
case 0x52bc6c:goto L52bc6c;
case 0x52bc6e:c.instructions+=2;goto B52bc6e;
case 0x52bc71:c.instructions+=1;goto B52bc71;
case 0x52bc73:goto L52bc73;
case 0x52bc75:goto L52bc75;
case 0x52bc77:goto L52bc77;
case 0x52bc7b:c.instructions+=3;goto B52bc7b;
case 0x52bc7d:c.instructions+=2;goto B52bc7d;
case 0x52bc7f:c.instructions+=1;goto B52bc7f;
case 0x52bc80:goto L52bc80;
case 0x52bc84:c.instructions+=1;goto B52bc84;
case 0x52bc86:goto L52bc86;
case 0x52bc8c:c.instructions+=6;goto B52bc8c;
case 0x52bc8e:c.instructions+=5;goto B52bc8e;
case 0x52bc94:c.instructions+=4;goto B52bc94;
case 0x52bc95:c.instructions+=3;goto B52bc95;
case 0x52bc9b:c.instructions+=2;goto B52bc9b;
case 0x52bc9e:c.instructions+=1;goto B52bc9e;
case 0x52bca2:goto L52bca2;
case 0x52bca5:c.instructions+=2;goto B52bca5;
case 0x52bca6:c.instructions+=1;goto B52bca6;
case 0x52bca8:goto L52bca8;
case 0x52bcac:c.instructions+=12;goto B52bcac;
case 0x52bcb0:c.instructions+=11;goto B52bcb0;
case 0x52bcb4:c.instructions+=10;goto B52bcb4;
case 0x52bcb8:c.instructions+=9;goto B52bcb8;
case 0x52bcba:c.instructions+=8;goto B52bcba;
case 0x52bcbc:c.instructions+=7;goto B52bcbc;
case 0x52bcc0:c.instructions+=6;goto B52bcc0;
case 0x52bcc1:c.instructions+=5;goto B52bcc1;
case 0x52bcc3:c.instructions+=4;goto B52bcc3;
case 0x52bcc7:c.instructions+=3;goto B52bcc7;
case 0x52bccb:c.instructions+=2;goto B52bccb;
case 0x52bccf:c.instructions+=1;goto B52bccf;
case 0x52bcd5:goto L52bcd5;
case 0x52bcd9:goto L52bcd9;
case 0x52bcdb:c.instructions+=1;goto B52bcdb;
case 0x52bcdd:goto L52bcdd;
case 0x52bce1:c.instructions+=11;goto B52bce1;
case 0x52bce3:c.instructions+=10;goto B52bce3;
case 0x52bce6:c.instructions+=9;goto B52bce6;
case 0x52bce9:c.instructions+=8;goto B52bce9;
case 0x52bcec:c.instructions+=7;goto B52bcec;
case 0x52bcef:c.instructions+=6;goto B52bcef;
case 0x52bcf2:c.instructions+=5;goto B52bcf2;
case 0x52bcf6:c.instructions+=4;goto B52bcf6;
case 0x52bcf8:c.instructions+=3;goto B52bcf8;
case 0x52bcfc:c.instructions+=2;goto B52bcfc;
case 0x52bd00:c.instructions+=1;goto B52bd00;
case 0x52bd04:goto L52bd04;
case 0x52bd06:c.instructions+=1;goto B52bd06;
case 0x52bd08:goto L52bd08;
case 0x52bd0a:c.instructions+=1;goto B52bd0a;
case 0x52bd10:goto L52bd10;
case 0x52bd14:c.instructions+=1;goto B52bd14;
case 0x52bd16:goto L52bd16;
case 0x52bd1c:c.instructions+=5;goto B52bd1c;
case 0x52bd1e:c.instructions+=4;goto B52bd1e;
case 0x52bd24:c.instructions+=3;goto B52bd24;
case 0x52bd25:c.instructions+=2;goto B52bd25;
case 0x52bd2b:c.instructions+=1;goto B52bd2b;
case 0x52bd2e:goto L52bd2e;
case 0x52bd31:c.instructions+=2;goto B52bd31;
case 0x52bd32:c.instructions+=1;goto B52bd32;
case 0x52bd34:goto L52bd34;
case 0x52bd38:goto L52bd38;
case 0x52bd3c:c.instructions+=6;goto B52bd3c;
case 0x52bd40:c.instructions+=5;goto B52bd40;
case 0x52bd42:c.instructions+=4;goto B52bd42;
case 0x52bd43:c.instructions+=3;goto B52bd43;
case 0x52bd47:c.instructions+=2;goto B52bd47;
case 0x52bd4b:c.instructions+=1;goto B52bd4b;
case 0x52bd4d:goto L52bd4d;
case 0x52bd51:c.instructions+=2;goto B52bd51;
case 0x52bd52:c.instructions+=1;goto B52bd52;
case 0x52bd57:goto L52bd57;
case 0x52bd5a:goto L52bd5a;
case 0x52bd5d:c.instructions+=8;goto B52bd5d;
case 0x52bd5e:c.instructions+=7;goto B52bd5e;
case 0x52bd61:c.instructions+=6;goto B52bd61;
case 0x52bd62:c.instructions+=5;goto B52bd62;
case 0x52bd65:c.instructions+=4;goto B52bd65;
case 0x52bd66:c.instructions+=3;goto B52bd66;
case 0x52bd67:c.instructions+=2;goto B52bd67;
case 0x52bd6a:c.instructions+=1;goto B52bd6a;
case 0x52bd70:goto L52bd70;
case 0x52bd71:c.instructions+=14;goto B52bd71;
case 0x52bd73:c.instructions+=13;goto B52bd73;
case 0x52bd76:c.instructions+=12;goto B52bd76;
case 0x52bd79:c.instructions+=11;goto B52bd79;
case 0x52bd7b:c.instructions+=10;goto B52bd7b;
case 0x52bd7c:c.instructions+=9;goto B52bd7c;
case 0x52bd7d:c.instructions+=8;goto B52bd7d;
case 0x52bd81:c.instructions+=7;goto B52bd81;
case 0x52bd84:c.instructions+=6;goto B52bd84;
case 0x52bd85:c.instructions+=5;goto B52bd85;
case 0x52bd88:c.instructions+=4;goto B52bd88;
case 0x52bd89:c.instructions+=3;goto B52bd89;
case 0x52bd8a:c.instructions+=2;goto B52bd8a;
case 0x52bd8c:c.instructions+=1;goto B52bd8c;
case 0x52bd91:goto L52bd91;
case 0x52bd94:c.instructions+=12;goto B52bd94;
case 0x52bd97:c.instructions+=11;goto B52bd97;
case 0x52bd99:c.instructions+=10;goto B52bd99;
case 0x52bd9a:c.instructions+=9;goto B52bd9a;
case 0x52bd9b:c.instructions+=8;goto B52bd9b;
case 0x52bd9f:c.instructions+=7;goto B52bd9f;
case 0x52bda5:c.instructions+=6;goto B52bda5;
case 0x52bda6:c.instructions+=5;goto B52bda6;
case 0x52bda9:c.instructions+=4;goto B52bda9;
case 0x52bdaa:c.instructions+=3;goto B52bdaa;
case 0x52bdab:c.instructions+=2;goto B52bdab;
case 0x52bdad:c.instructions+=1;goto B52bdad;
case 0x52bdb2:goto L52bdb2;
case 0x52bdb3:c.instructions+=1;goto B52bdb3;
case 0x52bdc0:goto L52bdc0;
case 0x52bdc3:c.instructions+=12;goto B52bdc3;
case 0x52bdc4:c.instructions+=11;goto B52bdc4;
case 0x52bdc5:c.instructions+=10;goto B52bdc5;
case 0x52bdc9:c.instructions+=9;goto B52bdc9;
case 0x52bdcc:c.instructions+=8;goto B52bdcc;
case 0x52bdcd:c.instructions+=7;goto B52bdcd;
case 0x52bdcf:c.instructions+=6;goto B52bdcf;
case 0x52bdd1:c.instructions+=5;goto B52bdd1;
case 0x52bdd3:c.instructions+=4;goto B52bdd3;
case 0x52bdd4:c.instructions+=3;goto B52bdd4;
case 0x52bddc:c.instructions+=2;goto B52bddc;
case 0x52bddf:c.instructions+=1;goto B52bddf;
case 0x52bde1:goto L52bde1;
case 0x52bde4:c.instructions+=1;goto B52bde4;
case 0x52bde9:goto L52bde9;
case 0x52bdeb:goto L52bdeb;
case 0x52bdee:goto L52bdee;
case 0x52bdf0:c.instructions+=1;goto B52bdf0;
case 0x52bdf6:goto L52bdf6;
case 0x52bdf9:c.instructions+=3;goto B52bdf9;
case 0x52bdfa:c.instructions+=2;goto B52bdfa;
case 0x52bdfc:c.instructions+=1;goto B52bdfc;
case 0x52bdfe:goto L52bdfe;
case 0x52be00:c.instructions+=1;goto B52be00;
case 0x52be06:goto L52be06;
case 0x52be08:c.instructions+=4;goto B52be08;
case 0x52be0b:c.instructions+=3;goto B52be0b;
case 0x52be0e:c.instructions+=2;goto B52be0e;
case 0x52be11:c.instructions+=1;goto B52be11;
case 0x52be17:goto L52be17;
case 0x52be18:c.instructions+=1;goto B52be18;
case 0x52be1a:goto L52be1a;
case 0x52be1b:c.instructions+=1;goto B52be1b;
case 0x52be21:goto L52be21;
case 0x52be24:c.instructions+=5;goto B52be24;
case 0x52be28:c.instructions+=4;goto B52be28;
case 0x52be2b:c.instructions+=3;goto B52be2b;
case 0x52be2e:c.instructions+=2;goto B52be2e;
case 0x52be30:c.instructions+=1;goto B52be30;
case 0x52be32:goto L52be32;
case 0x52be34:c.instructions+=3;goto B52be34;
case 0x52be36:c.instructions+=2;goto B52be36;
case 0x52be38:c.instructions+=1;goto B52be38;
case 0x52be3a:goto L52be3a;
case 0x52be3b:c.instructions+=2;goto B52be3b;
case 0x52be3d:c.instructions+=1;goto B52be3d;
case 0x52be42:goto L52be42;
case 0x52be44:c.instructions+=1;goto B52be44;
case 0x52be49:goto L52be49;
case 0x52be4d:c.instructions+=3;goto B52be4d;
case 0x52be4e:c.instructions+=2;goto B52be4e;
case 0x52be50:c.instructions+=1;goto B52be50;
case 0x52be55:goto L52be55;
case 0x52be57:c.instructions+=2;goto B52be57;
case 0x52be59:c.instructions+=1;goto B52be59;
case 0x52be5f:goto L52be5f;
case 0x52be62:c.instructions+=3;goto B52be62;
case 0x52be64:c.instructions+=2;goto B52be64;
case 0x52be68:c.instructions+=1;goto B52be68;
case 0x52be6a:goto L52be6a;
case 0x52be6c:c.instructions+=2;goto B52be6c;
case 0x52be6e:c.instructions+=1;goto B52be6e;
case 0x52be73:goto L52be73;
case 0x52be76:c.instructions+=13;goto B52be76;
case 0x52be78:c.instructions+=12;goto B52be78;
case 0x52be7b:c.instructions+=11;goto B52be7b;
case 0x52be7e:c.instructions+=10;goto B52be7e;
case 0x52be81:c.instructions+=9;goto B52be81;
case 0x52be84:c.instructions+=8;goto B52be84;
case 0x52be86:c.instructions+=7;goto B52be86;
case 0x52be88:c.instructions+=6;goto B52be88;
case 0x52be8c:c.instructions+=5;goto B52be8c;
case 0x52be90:c.instructions+=4;goto B52be90;
case 0x52be96:c.instructions+=3;goto B52be96;
case 0x52be98:c.instructions+=2;goto B52be98;
case 0x52be9b:c.instructions+=1;goto B52be9b;
case 0x52bea1:goto L52bea1;
case 0x52bea5:c.instructions+=6;goto B52bea5;
case 0x52bea7:c.instructions+=5;goto B52bea7;
case 0x52beab:c.instructions+=4;goto B52beab;
case 0x52beaf:c.instructions+=3;goto B52beaf;
case 0x52beb1:c.instructions+=2;goto B52beb1;
case 0x52beb5:c.instructions+=1;goto B52beb5;
case 0x52beba:goto L52beba;
case 0x52bebc:goto L52bebc;
case 0x52bebe:c.instructions+=2;goto B52bebe;
case 0x52bec6:c.instructions+=1;goto B52bec6;
case 0x52becb:goto L52becb;
case 0x52bece:c.instructions+=2;goto B52bece;
case 0x52bed0:c.instructions+=1;goto B52bed0;
case 0x52bed2:goto L52bed2;
case 0x52bed5:c.instructions+=6;goto B52bed5;
case 0x52bed8:c.instructions+=5;goto B52bed8;
case 0x52bedb:c.instructions+=4;goto B52bedb;
case 0x52bedc:c.instructions+=3;goto B52bedc;
case 0x52bede:c.instructions+=2;goto B52bede;
case 0x52bee2:c.instructions+=1;goto B52bee2;
case 0x52bee7:goto L52bee7;
case 0x52beeb:c.instructions+=10;goto B52beeb;
case 0x52beef:c.instructions+=9;goto B52beef;
case 0x52bef1:c.instructions+=8;goto B52bef1;
case 0x52bef4:c.instructions+=7;goto B52bef4;
case 0x52bef7:c.instructions+=6;goto B52bef7;
case 0x52befb:c.instructions+=5;goto B52befb;
case 0x52beff:c.instructions+=4;goto B52beff;
case 0x52bf05:c.instructions+=3;goto B52bf05;
case 0x52bf07:c.instructions+=2;goto B52bf07;
case 0x52bf0a:c.instructions+=1;goto B52bf0a;
case 0x52bf10:goto L52bf10;
case 0x52bf14:c.instructions+=6;goto B52bf14;
case 0x52bf16:c.instructions+=5;goto B52bf16;
case 0x52bf1a:c.instructions+=4;goto B52bf1a;
case 0x52bf1e:c.instructions+=3;goto B52bf1e;
case 0x52bf20:c.instructions+=2;goto B52bf20;
case 0x52bf24:c.instructions+=1;goto B52bf24;
case 0x52bf29:goto L52bf29;
case 0x52bf2c:c.instructions+=7;goto B52bf2c;
case 0x52bf2e:c.instructions+=6;goto B52bf2e;
case 0x52bf32:c.instructions+=5;goto B52bf32;
case 0x52bf36:c.instructions+=4;goto B52bf36;
case 0x52bf3c:c.instructions+=3;goto B52bf3c;
case 0x52bf3e:c.instructions+=2;goto B52bf3e;
case 0x52bf41:c.instructions+=1;goto B52bf41;
case 0x52bf43:goto L52bf43;
case 0x52bf47:c.instructions+=6;goto B52bf47;
case 0x52bf49:c.instructions+=5;goto B52bf49;
case 0x52bf4d:c.instructions+=4;goto B52bf4d;
case 0x52bf51:c.instructions+=3;goto B52bf51;
case 0x52bf53:c.instructions+=2;goto B52bf53;
case 0x52bf57:c.instructions+=1;goto B52bf57;
case 0x52bf59:goto L52bf59;
case 0x52bf5d:c.instructions+=3;goto B52bf5d;
case 0x52bf5e:c.instructions+=2;goto B52bf5e;
case 0x52bf60:c.instructions+=1;goto B52bf60;
case 0x52bf65:goto L52bf65;
case 0x52bf67:c.instructions+=2;goto B52bf67;
case 0x52bf69:c.instructions+=1;goto B52bf69;
case 0x52bf6b:goto L52bf6b;
case 0x52bf6e:c.instructions+=2;goto B52bf6e;
case 0x52bf70:c.instructions+=1;goto B52bf70;
case 0x52bf72:goto L52bf72;
case 0x52bf7a:c.instructions+=1;goto B52bf7a;
case 0x52bf7c:goto L52bf7c;
case 0x52bf7f:c.instructions+=3;goto B52bf7f;
case 0x52bf83:c.instructions+=2;goto B52bf83;
case 0x52bf85:c.instructions+=1;goto B52bf85;
case 0x52bf87:goto L52bf87;
case 0x52bf8f:c.instructions+=1;goto B52bf8f;
case 0x52bf91:goto L52bf91;
case 0x52bf94:c.instructions+=7;goto B52bf94;
case 0x52bf96:c.instructions+=6;goto B52bf96;
case 0x52bf9a:c.instructions+=5;goto B52bf9a;
case 0x52bf9e:c.instructions+=4;goto B52bf9e;
case 0x52bfa4:c.instructions+=3;goto B52bfa4;
case 0x52bfa6:c.instructions+=2;goto B52bfa6;
case 0x52bfa9:c.instructions+=1;goto B52bfa9;
case 0x52bfab:goto L52bfab;
case 0x52bfad:c.instructions+=5;goto B52bfad;
case 0x52bfb1:c.instructions+=4;goto B52bfb1;
case 0x52bfb5:c.instructions+=3;goto B52bfb5;
case 0x52bfb7:c.instructions+=2;goto B52bfb7;
case 0x52bfbb:c.instructions+=1;goto B52bfbb;
case 0x52bfbd:goto L52bfbd;
case 0x52bfc5:goto L52bfc5;
case 0x52bfc7:goto L52bfc7;
case 0x52bfc9:c.instructions+=1;goto B52bfc9;
case 0x52bfcb:goto L52bfcb;
case 0x52bfcf:c.instructions+=3;goto B52bfcf;
case 0x52bfd0:c.instructions+=2;goto B52bfd0;
case 0x52bfd3:c.instructions+=1;goto B52bfd3;
case 0x52bfd9:goto L52bfd9;
case 0x52bfe0:goto L52bfe0;
case 0x52bfe2:c.instructions+=8;goto B52bfe2;
case 0x52bfe6:c.instructions+=7;goto B52bfe6;
case 0x52bfe7:c.instructions+=6;goto B52bfe7;
case 0x52bfe8:c.instructions+=5;goto B52bfe8;
case 0x52bfe9:c.instructions+=4;goto B52bfe9;
case 0x52bfeb:c.instructions+=3;goto B52bfeb;
case 0x52bfec:c.instructions+=2;goto B52bfec;
case 0x52bfef:c.instructions+=1;goto B52bfef;
case 0x52bff0:goto L52bff0;
case 0x52bff3:c.instructions+=7;goto B52bff3;
case 0x52bff5:c.instructions+=6;goto B52bff5;
case 0x52bff9:c.instructions+=5;goto B52bff9;
case 0x52bffa:c.instructions+=4;goto B52bffa;
case 0x52bffb:c.instructions+=3;goto B52bffb;
case 0x52bffc:c.instructions+=2;goto B52bffc;
case 0x52bffe:c.instructions+=1;goto B52bffe;
default:missing_instruction(c.pc);}
B52b003:L52b003:{c.instructions+=2;NFSU2_TR(0x52b003);
u8 U[4];
w4(U+0,u32(0x79a9ecull));
s4(u32(r4(R+4)),r4(U+0));
}
B52b009:{NFSU2_TR(0x52b009);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b00eull));
TAIL_STATIC(0x511670u,511);
}
B52b00e:L52b00e:{c.instructions+=6;NFSU2_TR(0x52b00e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52b012:{NFSU2_TR(0x52b012);
u8 U[4];
w4(U+0,u32(0x79a9e8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B52b018:{NFSU2_TR(0x52b018);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52b019:{NFSU2_TR(0x52b019);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b020:{NFSU2_TR(0x52b020);
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
B52b023:{NFSU2_TR(0x52b023);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52b030:L52b030:{c.instructions+=5;NFSU2_TR(0x52b030);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b031:{NFSU2_TR(0x52b031);
__builtin_memmove((R+24),(R+4),4);
}
B52b033:{NFSU2_TR(0x52b033);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52b036:{NFSU2_TR(0x52b036);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52b038:{NFSU2_TR(0x52b038);
if(r1(R+518)){{goto L52b04c;}}
}
B52b03a:L52b03a:{c.instructions+=2;NFSU2_TR(0x52b03a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52b03e:{NFSU2_TR(0x52b03e);
__builtin_memmove((R+28),(R+28),4);
}
B52b040:L52b040:{c.instructions+=2;NFSU2_TR(0x52b040);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52b043:{NFSU2_TR(0x52b043);
if(r1(R+518)){{goto L52b04c;}}
}
B52b045:L52b045:{c.instructions+=3;NFSU2_TR(0x52b045);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52b048:{NFSU2_TR(0x52b048);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52b04a:{NFSU2_TR(0x52b04a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52b040u);}goto L52b040;}}
}
B52b04c:L52b04c:{c.instructions+=3;NFSU2_TR(0x52b04c);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B52b050:{NFSU2_TR(0x52b050);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52b052:{NFSU2_TR(0x52b052);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52b059;}}
}
B52b054:L52b054:{c.instructions+=2;NFSU2_TR(0x52b054);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B52b057:{NFSU2_TR(0x52b057);
if(r1(R+518)){{goto L52b071;}}
}
B52b059:L52b059:{c.instructions+=3;NFSU2_TR(0x52b059);
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
B52b05b:{NFSU2_TR(0x52b05b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b05e:{NFSU2_TR(0x52b05e);
if(r1(R+518)){{goto L52b067;}}
}
B52b060:L52b060:{c.instructions+=2;NFSU2_TR(0x52b060);
__builtin_memmove((R+4),(R+24),4);
}
B52b062:{NFSU2_TR(0x52b062);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b067ull));
TAIL_STATIC(0x517720u,517);
}
B52b067:L52b067:{c.instructions+=2;NFSU2_TR(0x52b067);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52b06a:{NFSU2_TR(0x52b06a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52b071:L52b071:{c.instructions+=2;NFSU2_TR(0x52b071);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52b072:{NFSU2_TR(0x52b072);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52b080:L52b080:{c.instructions+=3;NFSU2_TR(0x52b080);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b081:{NFSU2_TR(0x52b081);
__builtin_memmove((R+24),(R+4),4);
}
B52b083:{NFSU2_TR(0x52b083);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b088ull));
TAIL_STATIC(0x52af20u,52a);
}
B52b088:L52b088:{c.instructions+=10;NFSU2_TR(0x52b088);
u8 U[4];
w4(U+0,u32(0x79b8e8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B52b08e:{NFSU2_TR(0x52b08e);
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
B52b090:{NFSU2_TR(0x52b090);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b093:{NFSU2_TR(0x52b093);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b096:{NFSU2_TR(0x52b096);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b099:{NFSU2_TR(0x52b099);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
w4(U+4,u32(0x79a9ecull));
s4(u32(r4(U+0)),r4(U+4));
}
B52b0a0:{NFSU2_TR(0x52b0a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52b0a7:{NFSU2_TR(0x52b0a7);
__builtin_memmove((R+0),(R+24),4);
}
B52b0a9:{NFSU2_TR(0x52b0a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52b0aa:{NFSU2_TR(0x52b0aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52b0b0:L52b0b0:{c.instructions+=3;NFSU2_TR(0x52b0b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b0b1:{NFSU2_TR(0x52b0b1);
__builtin_memmove((R+24),(R+4),4);
}
B52b0b3:{NFSU2_TR(0x52b0b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b0b8ull));
TAIL_STATIC(0x52af20u,52a);
}
B52b0b8:L52b0b8:{c.instructions+=6;NFSU2_TR(0x52b0b8);
u8 U[4];
w4(U+0,u32(0x79b8f0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B52b0be:{NFSU2_TR(0x52b0be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52b0c5:{NFSU2_TR(0x52b0c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52b0cc:{NFSU2_TR(0x52b0cc);
__builtin_memmove((R+0),(R+24),4);
}
B52b0ce:{NFSU2_TR(0x52b0ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52b0cf:{NFSU2_TR(0x52b0cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52b0d0:L52b0d0:{c.instructions+=3;NFSU2_TR(0x52b0d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b0d1:{NFSU2_TR(0x52b0d1);
__builtin_memmove((R+24),(R+4),4);
}
B52b0d3:{NFSU2_TR(0x52b0d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b0d8ull));
{goto L52b0f0;}
}
B52b0d8:L52b0d8:{c.instructions+=2;NFSU2_TR(0x52b0d8);
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
B52b0dd:{NFSU2_TR(0x52b0dd);
if(r1(R+518)){{goto L52b0e8;}}
}
B52b0df:L52b0df:{c.instructions+=2;NFSU2_TR(0x52b0df);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b0e0:{NFSU2_TR(0x52b0e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b0e5ull));
TAIL_STATIC(0x575630u,575);
}
B52b0e5:L52b0e5:{c.instructions+=1;NFSU2_TR(0x52b0e5);
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
B52b0e8:L52b0e8:{c.instructions+=3;NFSU2_TR(0x52b0e8);
__builtin_memmove((R+0),(R+24),4);
}
B52b0ea:{NFSU2_TR(0x52b0ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52b0eb:{NFSU2_TR(0x52b0eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52b0f0:L52b0f0:{c.instructions+=2;NFSU2_TR(0x52b0f0);
u8 U[4];
w4(U+0,u32(0x79b8f0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B52b0f6:{NFSU2_TR(0x52b0f6);
TAIL_STATIC(0x52af90u,52a);
}
B52b100:L52b100:{c.instructions+=54;NFSU2_TR(0x52b100);
__builtin_memmove((R+0),(R+4),4);
}
B52b102:{NFSU2_TR(0x52b102);
u8 U[4];
w4(U+0,u32(0x79b8f8ull));
s4(u32(r4(R+0)),r4(U+0));
}
B52b108:{NFSU2_TR(0x52b108);
w4(R+4,u32(0xabadcafeull));
}
B52b10d:{NFSU2_TR(0x52b10d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b110:{NFSU2_TR(0x52b110);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b113:{NFSU2_TR(0x52b113);
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
B52b115:{NFSU2_TR(0x52b115);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b118:{NFSU2_TR(0x52b118);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b11b:{NFSU2_TR(0x52b11b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b11e:{NFSU2_TR(0x52b11e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b121:{NFSU2_TR(0x52b121);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b124:{NFSU2_TR(0x52b124);
w4(R+8,u32(0x79a9ecull));
}
B52b129:{NFSU2_TR(0x52b129);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b12c:{NFSU2_TR(0x52b12c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b12f:{NFSU2_TR(0x52b12f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b132:{NFSU2_TR(0x52b132);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b135:{NFSU2_TR(0x52b135);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b138:{NFSU2_TR(0x52b138);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b13b:{NFSU2_TR(0x52b13b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b141:{NFSU2_TR(0x52b141);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b144:{NFSU2_TR(0x52b144);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
w4(U+4,u32(0x79b878ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52b14b:{NFSU2_TR(0x52b14b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b151:{NFSU2_TR(0x52b151);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b157:{NFSU2_TR(0x52b157);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b15d:{NFSU2_TR(0x52b15d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b163:{NFSU2_TR(0x52b163);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b169:{NFSU2_TR(0x52b169);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b16f:{NFSU2_TR(0x52b16f);
w4(R+8,u32(0xffull));
}
B52b174:{NFSU2_TR(0x52b174);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52b177:{NFSU2_TR(0x52b177);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x15ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52b17a:{NFSU2_TR(0x52b17a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52b17d:{NFSU2_TR(0x52b17d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52b180:{NFSU2_TR(0x52b180);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b183:{NFSU2_TR(0x52b183);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b186:{NFSU2_TR(0x52b186);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b189:{NFSU2_TR(0x52b189);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b18c:{NFSU2_TR(0x52b18c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b18f:{NFSU2_TR(0x52b18f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b192:{NFSU2_TR(0x52b192);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b195:{NFSU2_TR(0x52b195);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b198:{NFSU2_TR(0x52b198);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b19e:{NFSU2_TR(0x52b19e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b1a4:{NFSU2_TR(0x52b1a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b1aa:{NFSU2_TR(0x52b1aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b1b0:{NFSU2_TR(0x52b1b0);
w1(R+4,u8(0x1ull));
}
B52b1b2:{NFSU2_TR(0x52b1b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b1b5:{NFSU2_TR(0x52b1b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b1b8:{NFSU2_TR(0x52b1b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b1bb:{NFSU2_TR(0x52b1bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b1be:{NFSU2_TR(0x52b1be);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52b1c4:{NFSU2_TR(0x52b1c4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xadull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52b1ca:{NFSU2_TR(0x52b1ca);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaeull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52b1d0:{NFSU2_TR(0x52b1d0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xafull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52b1d6:{NFSU2_TR(0x52b1d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52b1e0:L52b1e0:{c.instructions+=15;NFSU2_TR(0x52b1e0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b1e2:{NFSU2_TR(0x52b1e2);
u8 U[4];
w4(U+0,u32(0x7774a5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b1e7:{NFSU2_TR(0x52b1e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52b1ed:{NFSU2_TR(0x52b1ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b1ee:{NFSU2_TR(0x52b1ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b1f5:{NFSU2_TR(0x52b1f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b1f6:{NFSU2_TR(0x52b1f6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b1f7:{NFSU2_TR(0x52b1f7);
__builtin_memmove((R+12),(R+4),4);
}
B52b1f9:{NFSU2_TR(0x52b1f9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b1fa:{NFSU2_TR(0x52b1fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b1fe:{NFSU2_TR(0x52b1fe);
u8 U[4];
w4(U+0,u32(0x79b8f8ull));
s4(u32(r4(R+12)),r4(U+0));
}
B52b204:{NFSU2_TR(0x52b204);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52b207:{NFSU2_TR(0x52b207);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b208:{NFSU2_TR(0x52b208);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52b210:{NFSU2_TR(0x52b210);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b215ull));
TAIL_STATIC(0x575630u,575);
}
B52b215:L52b215:{c.instructions+=4;NFSU2_TR(0x52b215);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52b218:{NFSU2_TR(0x52b218);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52b21b:{NFSU2_TR(0x52b21b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52b21d:{NFSU2_TR(0x52b21d);
if(r1(R+518)){{goto L52b228;}}
}
B52b21f:L52b21f:{c.instructions+=2;NFSU2_TR(0x52b21f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b220:{NFSU2_TR(0x52b220);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b225ull));
TAIL_STATIC(0x575630u,575);
}
B52b225:L52b225:{c.instructions+=1;NFSU2_TR(0x52b225);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52b228:L52b228:{c.instructions+=3;NFSU2_TR(0x52b228);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52b22b:{NFSU2_TR(0x52b22b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52b22d:{NFSU2_TR(0x52b22d);
if(r1(R+518)){{goto L52b24c;}}
}
B52b22f:L52b22f:{c.instructions+=7;NFSU2_TR(0x52b22f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52b232:{NFSU2_TR(0x52b232);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B52b235:{NFSU2_TR(0x52b235);
u8 U[4];
w4(U+0,u32(0x4ff200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b23a:{NFSU2_TR(0x52b23a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b23b:{NFSU2_TR(0x52b23b);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b23d:{NFSU2_TR(0x52b23d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b23e:{NFSU2_TR(0x52b23e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b243ull));
TAIL_STATIC(0x75c401u,75c);
}
B52b243:L52b243:{c.instructions+=2;NFSU2_TR(0x52b243);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b244:{NFSU2_TR(0x52b244);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b249ull));
TAIL_STATIC(0x575630u,575);
}
B52b249:L52b249:{c.instructions+=1;NFSU2_TR(0x52b249);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52b24c:L52b24c:{c.instructions+=3;NFSU2_TR(0x52b24c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52b252:{NFSU2_TR(0x52b252);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52b254:{NFSU2_TR(0x52b254);
if(r1(R+518)){{goto L52b25f;}}
}
B52b256:L52b256:{c.instructions+=2;NFSU2_TR(0x52b256);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b257:{NFSU2_TR(0x52b257);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b25cull));
TAIL_STATIC(0x575630u,575);
}
B52b25c:L52b25c:{c.instructions+=1;NFSU2_TR(0x52b25c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52b25f:L52b25f:{c.instructions+=5;NFSU2_TR(0x52b25f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9cull))));
__builtin_memmove((R+24),(U+0),4);
}
B52b265:{NFSU2_TR(0x52b265);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b266:{NFSU2_TR(0x52b266);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52b269:{NFSU2_TR(0x52b269);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52b26b:{NFSU2_TR(0x52b26b);
if(r1(R+518)){{goto L52b2d6;}}
}
B52b26d:L52b26d:{c.instructions+=3;NFSU2_TR(0x52b26d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b26e:{NFSU2_TR(0x52b26e);
__builtin_memmove((R+4),(R+24),4);
}
B52b270:{NFSU2_TR(0x52b270);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b275ull));
TAIL_STATIC(0x505400u,505);
}
B52b275:L52b275:{c.instructions+=2;NFSU2_TR(0x52b275);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52b277:{NFSU2_TR(0x52b277);
if(r1(R+518)){{goto L52b2d6;}}
}
B52b279:L52b279:{c.instructions+=3;NFSU2_TR(0x52b279);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b27a:{NFSU2_TR(0x52b27a);
w4(R+20,u32(0xabadcafeull));
}
B52b27f:{NFSU2_TR(0x52b27f);
}
B52b280:L52b280:{c.instructions+=3;NFSU2_TR(0x52b280);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52b283:{NFSU2_TR(0x52b283);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b284:{NFSU2_TR(0x52b284);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b289ull));
TAIL_STATIC(0x575630u,575);
}
B52b289:L52b289:{c.instructions+=5;NFSU2_TR(0x52b289);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B52b28b:{NFSU2_TR(0x52b28b);
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
B52b28e:{NFSU2_TR(0x52b28e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b290:{NFSU2_TR(0x52b290);
__builtin_memmove((R+4),(R+28),4);
}
B52b292:{NFSU2_TR(0x52b292);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b294ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B52b294:L52b294:{c.instructions+=3;NFSU2_TR(0x52b294);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52b297:{NFSU2_TR(0x52b297);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52b299:{NFSU2_TR(0x52b299);
if(r1(R+518)){{goto L52b2cf;}}
}
B52b29b:L52b29b:{c.instructions+=4;NFSU2_TR(0x52b29b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52b29e:{NFSU2_TR(0x52b29e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b2a1:{NFSU2_TR(0x52b2a1);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52b2a4:{NFSU2_TR(0x52b2a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52b2ac;}}
}
B52b2a6:L52b2a6:{c.instructions+=2;NFSU2_TR(0x52b2a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52b2a9:{NFSU2_TR(0x52b2a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b2ac:L52b2ac:{c.instructions+=3;NFSU2_TR(0x52b2ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52b2af:{NFSU2_TR(0x52b2af);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52b2b1:{NFSU2_TR(0x52b2b1);
if(r1(R+518)){{goto L52b2b9;}}
}
B52b2b3:L52b2b3:{c.instructions+=2;NFSU2_TR(0x52b2b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52b2b6:{NFSU2_TR(0x52b2b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b2b9:L52b2b9:{c.instructions+=3;NFSU2_TR(0x52b2b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52b2bc:{NFSU2_TR(0x52b2bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52b2be:{NFSU2_TR(0x52b2be);
if(r1(R+518)){{goto L52b2c6;}}
}
B52b2c0:L52b2c0:{c.instructions+=2;NFSU2_TR(0x52b2c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52b2c3:{NFSU2_TR(0x52b2c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b2c6:L52b2c6:{c.instructions+=3;NFSU2_TR(0x52b2c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b2c9:{NFSU2_TR(0x52b2c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b2cc:{NFSU2_TR(0x52b2cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B52b2cf:L52b2cf:{c.instructions+=3;NFSU2_TR(0x52b2cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52b2d1:{NFSU2_TR(0x52b2d1);
__builtin_memmove((R+28),(R+0),4);
}
B52b2d3:{NFSU2_TR(0x52b2d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52b280u);}goto L52b280;}}
}
B52b2d5:L52b2d5:{c.instructions+=1;NFSU2_TR(0x52b2d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52b2d6:L52b2d6:{c.instructions+=4;NFSU2_TR(0x52b2d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52b2dc:{NFSU2_TR(0x52b2dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52b2de:{NFSU2_TR(0x52b2de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52b2df:{NFSU2_TR(0x52b2df);
if(r1(R+518)){{goto L52b2ea;}}
}
B52b2e1:L52b2e1:{c.instructions+=2;NFSU2_TR(0x52b2e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b2e2:{NFSU2_TR(0x52b2e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b2e7ull));
TAIL_STATIC(0x575630u,575);
}
B52b2e7:L52b2e7:{c.instructions+=1;NFSU2_TR(0x52b2e7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52b2ea:L52b2ea:{c.instructions+=4;NFSU2_TR(0x52b2ea);
__builtin_memmove((R+4),(R+24),4);
}
B52b2ec:{NFSU2_TR(0x52b2ec);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B52b2f1:{NFSU2_TR(0x52b2f1);
u8 U[4];
w4(U+0,u32(0x79a9ecull));
s4(u32(r4(R+24)),r4(U+0));
}
B52b2f7:{NFSU2_TR(0x52b2f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b2fcull));
TAIL_STATIC(0x511670u,511);
}
B52b2fc:L52b2fc:{c.instructions+=4;NFSU2_TR(0x52b2fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52b302:{NFSU2_TR(0x52b302);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b303:{NFSU2_TR(0x52b303);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B52b308:{NFSU2_TR(0x52b308);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b30dull));
TAIL_STATIC(0x575630u,575);
}
B52b30d:L52b30d:{c.instructions+=5;NFSU2_TR(0x52b30d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x74ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52b310:{NFSU2_TR(0x52b310);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52b313:{NFSU2_TR(0x52b313);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B52b318:{NFSU2_TR(0x52b318);
u8 U[4];
w4(U+0,u32(0x79a9ecull));
s4(u32(r4(R+4)),r4(U+0));
}
B52b31e:{NFSU2_TR(0x52b31e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b323ull));
TAIL_STATIC(0x511670u,511);
}
B52b323:L52b323:{c.instructions+=4;NFSU2_TR(0x52b323);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52b326:{NFSU2_TR(0x52b326);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B52b32b:{NFSU2_TR(0x52b32b);
u8 U[4];
w4(U+0,u32(0x79a9ecull));
s4(u32(r4(R+4)),r4(U+0));
}
B52b331:{NFSU2_TR(0x52b331);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b336ull));
TAIL_STATIC(0x511670u,511);
}
B52b336:L52b336:{c.instructions+=4;NFSU2_TR(0x52b336);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52b339:{NFSU2_TR(0x52b339);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B52b33e:{NFSU2_TR(0x52b33e);
u8 U[4];
w4(U+0,u32(0x79a9ecull));
s4(u32(r4(R+4)),r4(U+0));
}
B52b344:{NFSU2_TR(0x52b344);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b349ull));
TAIL_STATIC(0x511670u,511);
}
B52b349:L52b349:{c.instructions+=3;NFSU2_TR(0x52b349);
__builtin_memmove((R+4),(R+12),4);
}
B52b34b:{NFSU2_TR(0x52b34b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B52b353:{NFSU2_TR(0x52b353);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b358ull));
TAIL_STATIC(0x505350u,505);
}
B52b358:L52b358:{c.instructions+=6;NFSU2_TR(0x52b358);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52b35c:{NFSU2_TR(0x52b35c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52b35d:{NFSU2_TR(0x52b35d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52b35e:{NFSU2_TR(0x52b35e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b365:{NFSU2_TR(0x52b365);
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
B52b368:{NFSU2_TR(0x52b368);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52b370:L52b370:{c.instructions+=12;NFSU2_TR(0x52b370);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b371:{NFSU2_TR(0x52b371);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b372:{NFSU2_TR(0x52b372);
__builtin_memmove((R+24),(R+4),4);
}
B52b374:{NFSU2_TR(0x52b374);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52b377:{NFSU2_TR(0x52b377);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52b37b:{NFSU2_TR(0x52b37b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B52b37d:{NFSU2_TR(0x52b37d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b37e:{NFSU2_TR(0x52b37e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52b381:{NFSU2_TR(0x52b381);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b382:{NFSU2_TR(0x52b382);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b383:{NFSU2_TR(0x52b383);
w1(R+12,u8(0x1ull));
}
B52b385:{NFSU2_TR(0x52b385);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b388ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B52b388:L52b388:{c.instructions+=2;NFSU2_TR(0x52b388);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52b38a:{NFSU2_TR(0x52b38a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52b38e;}}
}
B52b38c:L52b38c:{c.instructions+=1;NFSU2_TR(0x52b38c);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B52b38e:L52b38e:{c.instructions+=2;NFSU2_TR(0x52b38e);
__builtin_memmove((R+4),(R+24),4);
}
B52b390:{NFSU2_TR(0x52b390);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b395ull));
TAIL_STATIC(0x518140u,518);
}
B52b395:L52b395:{c.instructions+=4;NFSU2_TR(0x52b395);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52b396:{NFSU2_TR(0x52b396);
__builtin_memmove((R+0),(R+12),1);
}
B52b398:{NFSU2_TR(0x52b398);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52b399:{NFSU2_TR(0x52b399);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52b3a0:L52b3a0:{c.instructions+=7;NFSU2_TR(0x52b3a0);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52b3a4:{NFSU2_TR(0x52b3a4);
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
B52b3a6:{NFSU2_TR(0x52b3a6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b3a7:{NFSU2_TR(0x52b3a7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b3a8:{NFSU2_TR(0x52b3a8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b3a9:{NFSU2_TR(0x52b3a9);
__builtin_memmove((R+24),(R+4),4);
}
B52b3ab:{NFSU2_TR(0x52b3ab);
if(r1(R+518)){{goto L52b41d;}}
}
B52b3ad:L52b3ad:{c.instructions+=4;NFSU2_TR(0x52b3ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52b3b3:{NFSU2_TR(0x52b3b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52b3b5:{NFSU2_TR(0x52b3b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52b3b9:{NFSU2_TR(0x52b3b9);
if(r1(R+518)){{goto L52b3e5;}}
}
B52b3bb:L52b3bb:{c.instructions+=7;NFSU2_TR(0x52b3bb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b3bd:{NFSU2_TR(0x52b3bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b3be:{NFSU2_TR(0x52b3be);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b3bf:{NFSU2_TR(0x52b3bf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b3c1:{NFSU2_TR(0x52b3c1);
u8 U[4];
w4(U+0,u32(0x55d1e635ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b3c6:{NFSU2_TR(0x52b3c6);
__builtin_memmove((R+4),(R+28),4);
}
B52b3c8:{NFSU2_TR(0x52b3c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b3cdull));
TAIL_STATIC(0x51aa20u,51a);
}
B52b3cd:L52b3cd:{c.instructions+=8;NFSU2_TR(0x52b3cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52b3d3:{NFSU2_TR(0x52b3d3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b3d5:{NFSU2_TR(0x52b3d5);
u8 U[4];
w4(U+0,u32(0xfffffffbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b3d7:{NFSU2_TR(0x52b3d7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b3d8:{NFSU2_TR(0x52b3d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b3d9:{NFSU2_TR(0x52b3d9);
u8 U[4];
w4(U+0,u32(0x55d1e635ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b3de:{NFSU2_TR(0x52b3de);
__builtin_memmove((R+4),(R+28),4);
}
B52b3e0:{NFSU2_TR(0x52b3e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b3e5ull));
TAIL_STATIC(0x51aa20u,51a);
}
B52b3e5:L52b3e5:{c.instructions+=3;NFSU2_TR(0x52b3e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B52b3e9:{NFSU2_TR(0x52b3e9);
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
B52b3eb:{NFSU2_TR(0x52b3eb);
if(r1(R+518)){{goto L52b411;}}
}
B52b3ed:L52b3ed:{c.instructions+=7;NFSU2_TR(0x52b3ed);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b3ef:{NFSU2_TR(0x52b3ef);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b3f0:{NFSU2_TR(0x52b3f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b3f1:{NFSU2_TR(0x52b3f1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b3f3:{NFSU2_TR(0x52b3f3);
u8 U[4];
w4(U+0,u32(0xabc08912ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b3f8:{NFSU2_TR(0x52b3f8);
__builtin_memmove((R+4),(R+28),4);
}
B52b3fa:{NFSU2_TR(0x52b3fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b3ffull));
TAIL_STATIC(0x51aa20u,51a);
}
B52b3ff:L52b3ff:{c.instructions+=7;NFSU2_TR(0x52b3ff);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b401:{NFSU2_TR(0x52b401);
u8 U[4];
w4(U+0,u32(0xfffffffbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b403:{NFSU2_TR(0x52b403);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b404:{NFSU2_TR(0x52b404);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b405:{NFSU2_TR(0x52b405);
u8 U[4];
w4(U+0,u32(0xabc08912ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b40a:{NFSU2_TR(0x52b40a);
__builtin_memmove((R+4),(R+28),4);
}
B52b40c:{NFSU2_TR(0x52b40c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b411ull));
TAIL_STATIC(0x51aa20u,51a);
}
B52b411:L52b411:{c.instructions+=5;NFSU2_TR(0x52b411);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52b412:{NFSU2_TR(0x52b412);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b418:{NFSU2_TR(0x52b418);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52b419:{NFSU2_TR(0x52b419);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52b41a:{NFSU2_TR(0x52b41a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52b41d:L52b41d:{c.instructions+=6;NFSU2_TR(0x52b41d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52b421:{NFSU2_TR(0x52b421);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52b422:{NFSU2_TR(0x52b422);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b428:{NFSU2_TR(0x52b428);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52b429:{NFSU2_TR(0x52b429);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52b42a:{NFSU2_TR(0x52b42a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52b430:L52b430:{c.instructions+=4;NFSU2_TR(0x52b430);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52b434:{NFSU2_TR(0x52b434);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52b437:{NFSU2_TR(0x52b437);
w1(R+512,u8((r4(R+0))<(u32(0x4ull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B52b43a:{NFSU2_TR(0x52b43a);
if(r1(R+518)){{goto L52b474;}}
}
B52b43c:L52b43c:{c.instructions+=2;NFSU2_TR(0x52b43c);
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
B52b43d:{NFSU2_TR(0x52b43d);
if(r1(R+518)){{goto L52b47a;}}
}
B52b43f:L52b43f:{c.instructions+=2;NFSU2_TR(0x52b43f);
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
B52b440:{NFSU2_TR(0x52b440);
if(r1(R+518)){{goto L52b47a;}}
}
B52b442:L52b442:{c.instructions+=3;NFSU2_TR(0x52b442);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B52b446:{NFSU2_TR(0x52b446);
u8 U[6];
w1(R+512,u8((r2(R+0))<(u16(0xffffull))));
w1(R+523,sborrow<u16>(r2(R+0),u16(0xffffull)));
w2(U+4,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B52b44a:{NFSU2_TR(0x52b44a);
if(r1(R+518)){{goto L52b47a;}}
}
B52b44c:L52b44c:{c.instructions+=15;NFSU2_TR(0x52b44c);
w4(R+0,u32(r2(R+0)));
}
B52b44f:{NFSU2_TR(0x52b44f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b450:{NFSU2_TR(0x52b450);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52b453:{NFSU2_TR(0x52b453);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B52b455:{NFSU2_TR(0x52b455);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B52b458:{NFSU2_TR(0x52b458);
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
B52b45b:{NFSU2_TR(0x52b45b);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B52b45f:{NFSU2_TR(0x52b45f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b462:{NFSU2_TR(0x52b462);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52b465:{NFSU2_TR(0x52b465);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B52b467:{NFSU2_TR(0x52b467);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B52b46b:{NFSU2_TR(0x52b46b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b46e:{NFSU2_TR(0x52b46e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52b46f:{NFSU2_TR(0x52b46f);
w1(R+0,u8(0x1ull));
}
B52b471:{NFSU2_TR(0x52b471);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52b474:L52b474:{c.instructions+=2;NFSU2_TR(0x52b474);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b475:{NFSU2_TR(0x52b475);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b47aull));
TAIL_STATIC(0x518040u,518);
}
B52b47a:L52b47a:{c.instructions+=2;NFSU2_TR(0x52b47a);
w1(R+0,u8(0x1ull));
}
B52b47c:{NFSU2_TR(0x52b47c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52b480:L52b480:{c.instructions+=3;NFSU2_TR(0x52b480);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b481:{NFSU2_TR(0x52b481);
__builtin_memmove((R+24),(R+4),4);
}
B52b483:{NFSU2_TR(0x52b483);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b488ull));
TAIL_STATIC(0x52af20u,52a);
}
B52b488:L52b488:{c.instructions+=5;NFSU2_TR(0x52b488);
u8 U[4];
w4(U+0,u32(0x79b8fcull));
s4(u32(r4(R+24)),r4(U+0));
}
B52b48e:{NFSU2_TR(0x52b48e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0xbull));
s4(u32(r4(U+0)),r4(U+4));
}
B52b495:{NFSU2_TR(0x52b495);
__builtin_memmove((R+0),(R+24),4);
}
B52b497:{NFSU2_TR(0x52b497);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52b498:{NFSU2_TR(0x52b498);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52b4a0:L52b4a0:{c.instructions+=3;NFSU2_TR(0x52b4a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b4a1:{NFSU2_TR(0x52b4a1);
__builtin_memmove((R+24),(R+4),4);
}
B52b4a3:{NFSU2_TR(0x52b4a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b4a8ull));
{goto L52b4c0;}
}
B52b4a8:L52b4a8:{c.instructions+=2;NFSU2_TR(0x52b4a8);
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
B52b4ad:{NFSU2_TR(0x52b4ad);
if(r1(R+518)){{goto L52b4b8;}}
}
B52b4af:L52b4af:{c.instructions+=2;NFSU2_TR(0x52b4af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b4b0:{NFSU2_TR(0x52b4b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b4b5ull));
TAIL_STATIC(0x575630u,575);
}
B52b4b5:L52b4b5:{c.instructions+=1;NFSU2_TR(0x52b4b5);
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
B52b4b8:L52b4b8:{c.instructions+=3;NFSU2_TR(0x52b4b8);
__builtin_memmove((R+0),(R+24),4);
}
B52b4ba:{NFSU2_TR(0x52b4ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52b4bb:{NFSU2_TR(0x52b4bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52b4c0:L52b4c0:{c.instructions+=2;NFSU2_TR(0x52b4c0);
u8 U[4];
w4(U+0,u32(0x79b8fcull));
s4(u32(r4(R+4)),r4(U+0));
}
B52b4c6:{NFSU2_TR(0x52b4c6);
TAIL_STATIC(0x52af90u,52a);
}
B52b4d0:L52b4d0:{c.instructions+=6;NFSU2_TR(0x52b4d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b4d1:{NFSU2_TR(0x52b4d1);
__builtin_memmove((R+24),(R+4),4);
}
B52b4d3:{NFSU2_TR(0x52b4d3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b4d4:{NFSU2_TR(0x52b4d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52b4d7:{NFSU2_TR(0x52b4d7);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xe76e4546ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B52b4dd:{NFSU2_TR(0x52b4dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52b4f1;}}
}
B52b4df:L52b4df:{c.instructions+=2;NFSU2_TR(0x52b4df);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x64486b50ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52b4e6:{NFSU2_TR(0x52b4e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52b4f1;}}
}
B52b4e8:L52b4e8:{c.instructions+=2;NFSU2_TR(0x52b4e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x20000ull))));
}
B52b4ef:{NFSU2_TR(0x52b4ef);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L52b4f6;}}
}
B52b4f1:L52b4f1:{c.instructions+=4;NFSU2_TR(0x52b4f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52b4f2:{NFSU2_TR(0x52b4f2);
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
B52b4f4:{NFSU2_TR(0x52b4f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52b4f5:{NFSU2_TR(0x52b4f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52b4f6:L52b4f6:{c.instructions+=2;NFSU2_TR(0x52b4f6);
u8 U[4];
w4(U+0,u32(0xb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b4fb:{NFSU2_TR(0x52b4fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b500ull));
TAIL_STATIC(0x575620u,575);
}
B52b500:L52b500:{c.instructions+=3;NFSU2_TR(0x52b500);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52b503:{NFSU2_TR(0x52b503);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52b505:{NFSU2_TR(0x52b505);
if(r1(R+518)){{goto L52b510;}}
}
B52b507:L52b507:{c.instructions+=2;NFSU2_TR(0x52b507);
__builtin_memmove((R+4),(R+0),4);
}
B52b509:{NFSU2_TR(0x52b509);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b50eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52b100u);}goto L52b100;}
}
B52b50e:L52b50e:{c.instructions+=1;NFSU2_TR(0x52b50e);
{goto L52b512;}
}
B52b510:L52b510:{c.instructions+=1;NFSU2_TR(0x52b510);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52b512:L52b512:{c.instructions+=12;NFSU2_TR(0x52b512);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B52b514:{NFSU2_TR(0x52b514);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52b51e:{NFSU2_TR(0x52b51e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52b521:{NFSU2_TR(0x52b521);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b524:{NFSU2_TR(0x52b524);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52b527:{NFSU2_TR(0x52b527);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((R+0),(U+0),4);
}
B52b52a:{NFSU2_TR(0x52b52a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b52d:{NFSU2_TR(0x52b52d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52b530:{NFSU2_TR(0x52b530);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B52b532:{NFSU2_TR(0x52b532);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b533:{NFSU2_TR(0x52b533);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B52b535:{NFSU2_TR(0x52b535);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b53aull));
TAIL_STATIC(0x519de0u,519);
}
B52b53a:L52b53a:{c.instructions+=3;NFSU2_TR(0x52b53a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B52b53c:{NFSU2_TR(0x52b53c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b53d:{NFSU2_TR(0x52b53d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b542ull));
TAIL_STATIC(0x517f30u,517);
}
B52b542:L52b542:{c.instructions+=4;NFSU2_TR(0x52b542);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52b543:{NFSU2_TR(0x52b543);
w1(R+0,u8(0x1ull));
}
B52b545:{NFSU2_TR(0x52b545);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52b546:{NFSU2_TR(0x52b546);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52b550:L52b550:{c.instructions+=10;NFSU2_TR(0x52b550);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B52b553:{NFSU2_TR(0x52b553);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b554:{NFSU2_TR(0x52b554);
__builtin_memmove((R+12),(R+4),4);
}
B52b556:{NFSU2_TR(0x52b556);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52b559:{NFSU2_TR(0x52b559);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52b55c:{NFSU2_TR(0x52b55c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52b55f:{NFSU2_TR(0x52b55f);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B52b563:{NFSU2_TR(0x52b563);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B52b566:{NFSU2_TR(0x52b566);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4c62694cull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52b56c:{NFSU2_TR(0x52b56c);
if(r1(R+518)){{goto L52b587;}}
}
B52b56e:L52b56e:{c.instructions+=1;NFSU2_TR(0x52b56e);
__builtin_memmove((R+28),(R+28),4);
}
B52b570:L52b570:{c.instructions+=2;NFSU2_TR(0x52b570);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52b572:{NFSU2_TR(0x52b572);
if(r1(R+518)){{goto L52b60d;}}
}
B52b578:L52b578:{c.instructions+=4;NFSU2_TR(0x52b578);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52b57b:{NFSU2_TR(0x52b57b);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B52b57f:{NFSU2_TR(0x52b57f);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4c62694cull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B52b585:{NFSU2_TR(0x52b585);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52b570u);}goto L52b570;}}
}
B52b587:L52b587:{c.instructions+=13;NFSU2_TR(0x52b587);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b588:{NFSU2_TR(0x52b588);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52b58b:{NFSU2_TR(0x52b58b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B52b58e:{NFSU2_TR(0x52b58e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b58f:{NFSU2_TR(0x52b58f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b590:{NFSU2_TR(0x52b590);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+28),(U+0),4);
}
B52b592:{NFSU2_TR(0x52b592);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b596:{NFSU2_TR(0x52b596);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B52b599:{NFSU2_TR(0x52b599);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x74ull))));
}
B52b59c:{NFSU2_TR(0x52b59c);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52b59e:{NFSU2_TR(0x52b59e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b5a2:{NFSU2_TR(0x52b5a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52b5aa:{NFSU2_TR(0x52b5aa);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L52b657;}}
}
B52b5b0:L52b5b0:{c.instructions+=2;NFSU2_TR(0x52b5b0);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b5b2:{NFSU2_TR(0x52b5b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b5b7ull));
TAIL_STATIC(0x575620u,575);
}
B52b5b7:L52b5b7:{c.instructions+=4;NFSU2_TR(0x52b5b7);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B52b5b9:{NFSU2_TR(0x52b5b9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52b5bc:{NFSU2_TR(0x52b5bc);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52b5be:{NFSU2_TR(0x52b5be);
if(r1(R+518)){{goto L52b5d9;}}
}
B52b5c0:L52b5c0:{c.instructions+=7;NFSU2_TR(0x52b5c0);
w4(R+4,u32(0xabadcafeull));
}
B52b5c5:{NFSU2_TR(0x52b5c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b5c8:{NFSU2_TR(0x52b5c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b5cb:{NFSU2_TR(0x52b5cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b5ce:{NFSU2_TR(0x52b5ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b5d1:{NFSU2_TR(0x52b5d1);
u8 U[4];
w4(U+0,u32(0x79ab0cull));
s4(u32(r4(R+0)),r4(U+0));
}
B52b5d7:{NFSU2_TR(0x52b5d7);
__builtin_memmove((R+24),(R+0),4);
}
B52b5d9:L52b5d9:{c.instructions+=6;NFSU2_TR(0x52b5d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52b5dd:{NFSU2_TR(0x52b5dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B52b5e1:{NFSU2_TR(0x52b5e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B52b5e5:{NFSU2_TR(0x52b5e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b5e6:{NFSU2_TR(0x52b5e6);
__builtin_memmove((R+4),(R+24),4);
}
B52b5e8:{NFSU2_TR(0x52b5e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b5edull));
TAIL_STATIC(0x519de0u,519);
}
B52b5ed:L52b5ed:{c.instructions+=3;NFSU2_TR(0x52b5ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52b5ef:{NFSU2_TR(0x52b5ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52b5f2:{NFSU2_TR(0x52b5f2);
if(r1(R+518)){{goto L52b642;}}
}
B52b5f4:L52b5f4:{c.instructions+=2;NFSU2_TR(0x52b5f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52b5f6:{NFSU2_TR(0x52b5f6);
if(r1(R+518)){{goto L52b620;}}
}
B52b5f8:L52b5f8:{c.instructions+=4;NFSU2_TR(0x52b5f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52b5fb:{NFSU2_TR(0x52b5fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52b5fd:{NFSU2_TR(0x52b5fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b600:{NFSU2_TR(0x52b600);
if(r1(R+518)){{goto L52b605;}}
}
B52b602:L52b602:{c.instructions+=1;NFSU2_TR(0x52b602);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b605:L52b605:{c.instructions+=3;NFSU2_TR(0x52b605);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b608:{NFSU2_TR(0x52b608);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b60b:{NFSU2_TR(0x52b60b);
{goto L52b637;}
}
B52b60d:L52b60d:{c.instructions+=2;NFSU2_TR(0x52b60d);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4c62694cull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B52b613:{NFSU2_TR(0x52b613);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52b587u);}goto L52b587;}}
}
B52b619:L52b619:{c.instructions+=4;NFSU2_TR(0x52b619);
w1(R+0,u8(0x1ull));
}
B52b61b:{NFSU2_TR(0x52b61b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52b61c:{NFSU2_TR(0x52b61c);
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
B52b61f:{NFSU2_TR(0x52b61f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52b620:L52b620:{c.instructions+=4;NFSU2_TR(0x52b620);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52b623:{NFSU2_TR(0x52b623);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52b625:{NFSU2_TR(0x52b625);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b628:{NFSU2_TR(0x52b628);
if(r1(R+518)){{goto L52b62d;}}
}
B52b62a:L52b62a:{c.instructions+=1;NFSU2_TR(0x52b62a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b62d:L52b62d:{c.instructions+=2;NFSU2_TR(0x52b62d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52b634:{NFSU2_TR(0x52b634);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b637:L52b637:{c.instructions+=2;NFSU2_TR(0x52b637);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52b63a:{NFSU2_TR(0x52b63a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52b63f;}}
}
B52b63c:L52b63c:{c.instructions+=1;NFSU2_TR(0x52b63c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b63f:L52b63f:{c.instructions+=1;NFSU2_TR(0x52b63f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B52b642:L52b642:{c.instructions+=6;NFSU2_TR(0x52b642);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52b646:{NFSU2_TR(0x52b646);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52b64a:{NFSU2_TR(0x52b64a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B52b64b:{NFSU2_TR(0x52b64b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B52b64d:{NFSU2_TR(0x52b64d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b651:{NFSU2_TR(0x52b651);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52b5b0u);}goto L52b5b0;}}
}
B52b657:L52b657:{c.instructions+=3;NFSU2_TR(0x52b657);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52b65a:{NFSU2_TR(0x52b65a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52b65c:{NFSU2_TR(0x52b65c);
if(r1(R+518)){{goto L52b722;}}
}
B52b662:L52b662:{c.instructions+=4;NFSU2_TR(0x52b662);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52b665:{NFSU2_TR(0x52b665);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52b668:{NFSU2_TR(0x52b668);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b669:{NFSU2_TR(0x52b669);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b66eull));
TAIL_STATIC(0x50b240u,50b);
}
B52b66e:L52b66e:{c.instructions+=2;NFSU2_TR(0x52b66e);
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
B52b670:{NFSU2_TR(0x52b670);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52b714;}}
}
B52b676:L52b676:{c.instructions+=9;NFSU2_TR(0x52b676);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52b679:{NFSU2_TR(0x52b679);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52b67c:{NFSU2_TR(0x52b67c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B52b67e:{NFSU2_TR(0x52b67e);
u8 U[4];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B52b682:{NFSU2_TR(0x52b682);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b683:{NFSU2_TR(0x52b683);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B52b687:{NFSU2_TR(0x52b687);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b688:{NFSU2_TR(0x52b688);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b689:{NFSU2_TR(0x52b689);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b68bull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B52b68b:L52b68b:{c.instructions+=2;NFSU2_TR(0x52b68b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52b68d:{NFSU2_TR(0x52b68d);
if(r1(R+518)){{goto L52b72c;}}
}
B52b693:L52b693:{c.instructions+=4;NFSU2_TR(0x52b693);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52b696:{NFSU2_TR(0x52b696);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b698:{NFSU2_TR(0x52b698);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b699:{NFSU2_TR(0x52b699);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b69eull));
TAIL_STATIC(0x555800u,555);
}
B52b69e:L52b69e:{c.instructions+=4;NFSU2_TR(0x52b69e);
__builtin_memmove((R+24),(R+0),4);
}
B52b6a0:{NFSU2_TR(0x52b6a0);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52b6a4:{NFSU2_TR(0x52b6a4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52b6a6:{NFSU2_TR(0x52b6a6);
if(r1(R+518)){{goto L52b6b5;}}
}
B52b6a8:L52b6a8:{c.instructions+=3;NFSU2_TR(0x52b6a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52b6ac:{NFSU2_TR(0x52b6ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b6ad:{NFSU2_TR(0x52b6ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b6b2ull));
TAIL_STATIC(0x575630u,575);
}
B52b6b2:L52b6b2:{c.instructions+=1;NFSU2_TR(0x52b6b2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52b6b5:L52b6b5:{c.instructions+=2;NFSU2_TR(0x52b6b5);
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
B52b6b7:{NFSU2_TR(0x52b6b7);
if(r1(R+518)){{goto L52b72c;}}
}
B52b6b9:L52b6b9:{c.instructions+=4;NFSU2_TR(0x52b6b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52b6bc:{NFSU2_TR(0x52b6bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B52b6be:{NFSU2_TR(0x52b6be);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b6bf:{NFSU2_TR(0x52b6bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b6c2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B52b6c2:L52b6c2:{c.instructions+=6;NFSU2_TR(0x52b6c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52b6c9:{NFSU2_TR(0x52b6c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52b6cc:{NFSU2_TR(0x52b6cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52b6d2:{NFSU2_TR(0x52b6d2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfcull))));
}
B52b6d7:{NFSU2_TR(0x52b6d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52b6d9:{NFSU2_TR(0x52b6d9);
if(r1(R+518)){{goto L52b6f0;}}
}
B52b6db:L52b6db:{c.instructions+=4;NFSU2_TR(0x52b6db);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52b6de:{NFSU2_TR(0x52b6de);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52b6e0:{NFSU2_TR(0x52b6e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b6e3:{NFSU2_TR(0x52b6e3);
if(r1(R+518)){{goto L52b6e8;}}
}
B52b6e5:L52b6e5:{c.instructions+=1;NFSU2_TR(0x52b6e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b6e8:L52b6e8:{c.instructions+=3;NFSU2_TR(0x52b6e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b6eb:{NFSU2_TR(0x52b6eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b6ee:{NFSU2_TR(0x52b6ee);
{goto L52b707;}
}
B52b6f0:L52b6f0:{c.instructions+=4;NFSU2_TR(0x52b6f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52b6f3:{NFSU2_TR(0x52b6f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52b6f5:{NFSU2_TR(0x52b6f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b6f8:{NFSU2_TR(0x52b6f8);
if(r1(R+518)){{goto L52b6fd;}}
}
B52b6fa:L52b6fa:{c.instructions+=1;NFSU2_TR(0x52b6fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b6fd:L52b6fd:{c.instructions+=2;NFSU2_TR(0x52b6fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52b704:{NFSU2_TR(0x52b704);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b707:L52b707:{c.instructions+=2;NFSU2_TR(0x52b707);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52b70a:{NFSU2_TR(0x52b70a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52b70f;}}
}
B52b70c:L52b70c:{c.instructions+=1;NFSU2_TR(0x52b70c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b70f:L52b70f:{c.instructions+=2;NFSU2_TR(0x52b70f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B52b712:{NFSU2_TR(0x52b712);
{goto L52b717;}
}
B52b714:L52b714:{c.instructions+=1;NFSU2_TR(0x52b714);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B52b717:L52b717:{c.instructions+=3;NFSU2_TR(0x52b717);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52b71a:{NFSU2_TR(0x52b71a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52b71c:{NFSU2_TR(0x52b71c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52b662u);}goto L52b662;}}
}
B52b722:L52b722:{c.instructions+=7;NFSU2_TR(0x52b722);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52b723:{NFSU2_TR(0x52b723);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52b724:{NFSU2_TR(0x52b724);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52b725:{NFSU2_TR(0x52b725);
w1(R+0,u8(0x1ull));
}
B52b727:{NFSU2_TR(0x52b727);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52b728:{NFSU2_TR(0x52b728);
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
B52b72b:{NFSU2_TR(0x52b72b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52b72c:L52b72c:{c.instructions+=7;NFSU2_TR(0x52b72c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52b72d:{NFSU2_TR(0x52b72d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52b72e:{NFSU2_TR(0x52b72e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52b72f:{NFSU2_TR(0x52b72f);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B52b731:{NFSU2_TR(0x52b731);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52b732:{NFSU2_TR(0x52b732);
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
B52b735:{NFSU2_TR(0x52b735);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52b740:L52b740:{c.instructions+=10;NFSU2_TR(0x52b740);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B52b743:{NFSU2_TR(0x52b743);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b744:{NFSU2_TR(0x52b744);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b745:{NFSU2_TR(0x52b745);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52b749:{NFSU2_TR(0x52b749);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+0,u32(r2(U+0)));
}
B52b74c:{NFSU2_TR(0x52b74c);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x724cull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x724cull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52b751:{NFSU2_TR(0x52b751);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b752:{NFSU2_TR(0x52b752);
__builtin_memmove((R+28),(R+4),4);
}
B52b754:{NFSU2_TR(0x52b754);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B52b757:{NFSU2_TR(0x52b757);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L52b8ad;}}
}
B52b75d:L52b75d:{c.instructions+=1;NFSU2_TR(0x52b75d);
if(r1(R+518)){{goto L52b887;}}
}
B52b763:L52b763:{c.instructions+=2;NFSU2_TR(0x52b763);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x644cull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x644cull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52b768:{NFSU2_TR(0x52b768);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L52b82c;}}
}
B52b76e:L52b76e:{c.instructions+=1;NFSU2_TR(0x52b76e);
if(r1(R+518)){{goto L52b7ef;}}
}
B52b770:L52b770:{c.instructions+=2;NFSU2_TR(0x52b770);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x5443ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B52b775:{NFSU2_TR(0x52b775);
if(r1(R+518)){{goto L52b7db;}}
}
B52b777:L52b777:{c.instructions+=2;NFSU2_TR(0x52b777);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0xf00ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B52b77c:{NFSU2_TR(0x52b77c);
if(r1(R+518)){{goto L52b7ad;}}
}
B52b77e:L52b77e:{c.instructions+=2;NFSU2_TR(0x52b77e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B52b781:{NFSU2_TR(0x52b781);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52b94b;}}
}
B52b787:L52b787:{c.instructions+=16;NFSU2_TR(0x52b787);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52b78a:{NFSU2_TR(0x52b78a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B52b78b:{NFSU2_TR(0x52b78b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b78e:{NFSU2_TR(0x52b78e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52b791:{NFSU2_TR(0x52b791);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52b794:{NFSU2_TR(0x52b794);
__builtin_memmove((R+28),(R+0),4);
}
B52b796:{NFSU2_TR(0x52b796);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B52b799:{NFSU2_TR(0x52b799);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B52b79c:{NFSU2_TR(0x52b79c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52b79d:{NFSU2_TR(0x52b79d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B52b79f:{NFSU2_TR(0x52b79f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52b7a2:{NFSU2_TR(0x52b7a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52b7a3:{NFSU2_TR(0x52b7a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b7a6:{NFSU2_TR(0x52b7a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52b7a7:{NFSU2_TR(0x52b7a7);
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
B52b7aa:{NFSU2_TR(0x52b7aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52b7ad:L52b7ad:{c.instructions+=2;NFSU2_TR(0x52b7ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52b7b0:{NFSU2_TR(0x52b7b0);
if(r1(R+518)){{goto L52b7b9;}}
}
B52b7b2:L52b7b2:{c.instructions+=2;NFSU2_TR(0x52b7b2);
__builtin_memmove((R+4),(R+12),4);
}
B52b7b4:{NFSU2_TR(0x52b7b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b7b9ull));
TAIL_STATIC(0x504230u,504);
}
B52b7b9:L52b7b9:{c.instructions+=4;NFSU2_TR(0x52b7b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52b7bc:{NFSU2_TR(0x52b7bc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b7bd:{NFSU2_TR(0x52b7bd);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B52b7c1:{NFSU2_TR(0x52b7c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b7c6ull));
TAIL_STATIC(0x5054a0u,505);
}
B52b7c6:L52b7c6:{c.instructions+=4;NFSU2_TR(0x52b7c6);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B52b7ca:{NFSU2_TR(0x52b7ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b7cb:{NFSU2_TR(0x52b7cb);
__builtin_memmove((R+4),(R+12),4);
}
B52b7cd:{NFSU2_TR(0x52b7cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b7d2ull));
TAIL_STATIC(0x516cd0u,516);
}
B52b7d2:L52b7d2:{c.instructions+=5;NFSU2_TR(0x52b7d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52b7d3:{NFSU2_TR(0x52b7d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52b7d4:{NFSU2_TR(0x52b7d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52b7d5:{NFSU2_TR(0x52b7d5);
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
B52b7d8:{NFSU2_TR(0x52b7d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52b7db:L52b7db:{c.instructions+=4;NFSU2_TR(0x52b7db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52b7de:{NFSU2_TR(0x52b7de);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b7df:{NFSU2_TR(0x52b7df);
__builtin_memmove((R+4),(R+12),4);
}
B52b7e1:{NFSU2_TR(0x52b7e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b7e6ull));
TAIL_STATIC(0x5041e0u,504);
}
B52b7e6:L52b7e6:{c.instructions+=5;NFSU2_TR(0x52b7e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52b7e7:{NFSU2_TR(0x52b7e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52b7e8:{NFSU2_TR(0x52b7e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52b7e9:{NFSU2_TR(0x52b7e9);
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
B52b7ec:{NFSU2_TR(0x52b7ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52b7ef:L52b7ef:{c.instructions+=4;NFSU2_TR(0x52b7ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52b7f2:{NFSU2_TR(0x52b7f2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b7f3:{NFSU2_TR(0x52b7f3);
__builtin_memmove((R+4),(R+12),4);
}
B52b7f5:{NFSU2_TR(0x52b7f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b7faull));
TAIL_STATIC(0x52a910u,52a);
}
B52b7fa:L52b7fa:{c.instructions+=4;NFSU2_TR(0x52b7fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52b7fd:{NFSU2_TR(0x52b7fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b7fe:{NFSU2_TR(0x52b7fe);
__builtin_memmove((R+4),(R+12),4);
}
B52b800:{NFSU2_TR(0x52b800);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b805ull));
TAIL_STATIC(0x52ab30u,52a);
}
B52b805:L52b805:{c.instructions+=7;NFSU2_TR(0x52b805);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B52b808:{NFSU2_TR(0x52b808);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b80a:{NFSU2_TR(0x52b80a);
__builtin_memmove((R+4),(R+12),4);
}
B52b80c:{NFSU2_TR(0x52b80c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b80f:{NFSU2_TR(0x52b80f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b812:{NFSU2_TR(0x52b812);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b815:{NFSU2_TR(0x52b815);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b81aull));
TAIL_STATIC(0x504180u,504);
}
B52b81a:L52b81a:{c.instructions+=3;NFSU2_TR(0x52b81a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b81c:{NFSU2_TR(0x52b81c);
__builtin_memmove((R+4),(R+12),4);
}
B52b81e:{NFSU2_TR(0x52b81e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b823ull));
TAIL_STATIC(0x5041b0u,504);
}
B52b823:L52b823:{c.instructions+=5;NFSU2_TR(0x52b823);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52b824:{NFSU2_TR(0x52b824);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52b825:{NFSU2_TR(0x52b825);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52b826:{NFSU2_TR(0x52b826);
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
B52b829:{NFSU2_TR(0x52b829);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52b82c:L52b82c:{c.instructions+=2;NFSU2_TR(0x52b82c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x6943ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52b831:{NFSU2_TR(0x52b831);
if(r1(R+518)){{goto L52b856;}}
}
B52b833:L52b833:{c.instructions+=2;NFSU2_TR(0x52b833);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7243ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52b838:{NFSU2_TR(0x52b838);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52b94b;}}
}
B52b83e:L52b83e:{c.instructions+=6;NFSU2_TR(0x52b83e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52b841:{NFSU2_TR(0x52b841);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b842:{NFSU2_TR(0x52b842);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b844:{NFSU2_TR(0x52b844);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b846:{NFSU2_TR(0x52b846);
__builtin_memmove((R+4),(R+12),4);
}
B52b848:{NFSU2_TR(0x52b848);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b84dull));
TAIL_STATIC(0x516d40u,516);
}
B52b84d:L52b84d:{c.instructions+=5;NFSU2_TR(0x52b84d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52b84e:{NFSU2_TR(0x52b84e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52b84f:{NFSU2_TR(0x52b84f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52b850:{NFSU2_TR(0x52b850);
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
B52b853:{NFSU2_TR(0x52b853);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52b856:L52b856:{c.instructions+=12;NFSU2_TR(0x52b856);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52b859:{NFSU2_TR(0x52b859);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52b85c:{NFSU2_TR(0x52b85c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52b85f:{NFSU2_TR(0x52b85f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b863:{NFSU2_TR(0x52b863);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b867:{NFSU2_TR(0x52b867);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52b86a:{NFSU2_TR(0x52b86a);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B52b86e:{NFSU2_TR(0x52b86e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b872:{NFSU2_TR(0x52b872);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b873:{NFSU2_TR(0x52b873);
__builtin_memmove((R+4),(R+12),4);
}
B52b875:{NFSU2_TR(0x52b875);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b879:{NFSU2_TR(0x52b879);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b87eull));
TAIL_STATIC(0x516d80u,516);
}
B52b87e:L52b87e:{c.instructions+=5;NFSU2_TR(0x52b87e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52b87f:{NFSU2_TR(0x52b87f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52b880:{NFSU2_TR(0x52b880);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52b881:{NFSU2_TR(0x52b881);
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
B52b884:{NFSU2_TR(0x52b884);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52b887:L52b887:{c.instructions+=16;NFSU2_TR(0x52b887);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52b88a:{NFSU2_TR(0x52b88a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B52b88b:{NFSU2_TR(0x52b88b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b88e:{NFSU2_TR(0x52b88e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52b891:{NFSU2_TR(0x52b891);
__builtin_memmove((R+28),(R+0),4);
}
B52b893:{NFSU2_TR(0x52b893);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B52b896:{NFSU2_TR(0x52b896);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B52b899:{NFSU2_TR(0x52b899);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52b89c:{NFSU2_TR(0x52b89c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52b89d:{NFSU2_TR(0x52b89d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B52b89f:{NFSU2_TR(0x52b89f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52b8a2:{NFSU2_TR(0x52b8a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52b8a3:{NFSU2_TR(0x52b8a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b8a6:{NFSU2_TR(0x52b8a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52b8a7:{NFSU2_TR(0x52b8a7);
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
B52b8aa:{NFSU2_TR(0x52b8aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52b8ad:L52b8ad:{c.instructions+=2;NFSU2_TR(0x52b8ad);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7443ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7443ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52b8b2:{NFSU2_TR(0x52b8b2);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L52b918;}}
}
B52b8b4:L52b8b4:{c.instructions+=1;NFSU2_TR(0x52b8b4);
if(r1(R+518)){{goto L52b904;}}
}
B52b8b6:L52b8b6:{c.instructions+=2;NFSU2_TR(0x52b8b6);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x7343ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B52b8bb:{NFSU2_TR(0x52b8bb);
if(r1(R+518)){{goto L52b8e1;}}
}
B52b8bd:L52b8bd:{c.instructions+=2;NFSU2_TR(0x52b8bd);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B52b8c0:{NFSU2_TR(0x52b8c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52b94b;}}
}
B52b8c6:L52b8c6:{c.instructions+=9;NFSU2_TR(0x52b8c6);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52b8c9:{NFSU2_TR(0x52b8c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52b8ca:{NFSU2_TR(0x52b8ca);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52b8cd:{NFSU2_TR(0x52b8cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52b8ce:{NFSU2_TR(0x52b8ce);
{u32 ea_=u32(r4(R+12)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52b8d4:{NFSU2_TR(0x52b8d4);
{u32 ea_=u32(r4(R+12)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52b8da:{NFSU2_TR(0x52b8da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52b8db:{NFSU2_TR(0x52b8db);
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
B52b8de:{NFSU2_TR(0x52b8de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52b8e1:L52b8e1:{c.instructions+=8;NFSU2_TR(0x52b8e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52b8e4:{NFSU2_TR(0x52b8e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52b8e7:{NFSU2_TR(0x52b8e7);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B52b8eb:{NFSU2_TR(0x52b8eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b8ef:{NFSU2_TR(0x52b8ef);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b8f0:{NFSU2_TR(0x52b8f0);
__builtin_memmove((R+4),(R+12),4);
}
B52b8f2:{NFSU2_TR(0x52b8f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b8f6:{NFSU2_TR(0x52b8f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b8fbull));
TAIL_STATIC(0x516d00u,516);
}
B52b8fb:L52b8fb:{c.instructions+=5;NFSU2_TR(0x52b8fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52b8fc:{NFSU2_TR(0x52b8fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52b8fd:{NFSU2_TR(0x52b8fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52b8fe:{NFSU2_TR(0x52b8fe);
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
B52b901:{NFSU2_TR(0x52b901);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52b904:L52b904:{c.instructions+=4;NFSU2_TR(0x52b904);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B52b907:{NFSU2_TR(0x52b907);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b908:{NFSU2_TR(0x52b908);
__builtin_memmove((R+4),(R+12),4);
}
B52b90a:{NFSU2_TR(0x52b90a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b90full));
TAIL_STATIC(0x516e10u,516);
}
B52b90f:L52b90f:{c.instructions+=5;NFSU2_TR(0x52b90f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52b910:{NFSU2_TR(0x52b910);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52b911:{NFSU2_TR(0x52b911);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52b912:{NFSU2_TR(0x52b912);
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
B52b915:{NFSU2_TR(0x52b915);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52b918:L52b918:{c.instructions+=2;NFSU2_TR(0x52b918);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x764cull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52b91d:{NFSU2_TR(0x52b91d);
if(r1(R+518)){{goto L52b93f;}}
}
B52b91f:L52b91f:{c.instructions+=2;NFSU2_TR(0x52b91f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x774cull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52b924:{NFSU2_TR(0x52b924);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52b94b;}}
}
B52b926:L52b926:{c.instructions+=6;NFSU2_TR(0x52b926);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52b929:{NFSU2_TR(0x52b929);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52b92b:{NFSU2_TR(0x52b92b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B52b92e:{NFSU2_TR(0x52b92e);
__builtin_memmove((R+4),(R+12),4);
}
B52b930:{NFSU2_TR(0x52b930);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b931:{NFSU2_TR(0x52b931);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b936ull));
TAIL_STATIC(0x504270u,504);
}
B52b936:L52b936:{c.instructions+=5;NFSU2_TR(0x52b936);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52b937:{NFSU2_TR(0x52b937);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52b938:{NFSU2_TR(0x52b938);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52b939:{NFSU2_TR(0x52b939);
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
B52b93c:{NFSU2_TR(0x52b93c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52b93f:L52b93f:{c.instructions+=4;NFSU2_TR(0x52b93f);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52b942:{NFSU2_TR(0x52b942);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52b945:{NFSU2_TR(0x52b945);
{u32 ea_=u32(r4(R+12)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52b948:{NFSU2_TR(0x52b948);
{u32 ea_=u32(r4(R+12)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52b94b:L52b94b:{c.instructions+=5;NFSU2_TR(0x52b94b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52b94c:{NFSU2_TR(0x52b94c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52b94d:{NFSU2_TR(0x52b94d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52b94e:{NFSU2_TR(0x52b94e);
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
B52b951:{NFSU2_TR(0x52b951);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52b960:L52b960:{c.instructions+=15;NFSU2_TR(0x52b960);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b962:{NFSU2_TR(0x52b962);
u8 U[4];
w4(U+0,u32(0x7774bbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b967:{NFSU2_TR(0x52b967);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52b96d:{NFSU2_TR(0x52b96d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b96e:{NFSU2_TR(0x52b96e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b975:{NFSU2_TR(0x52b975);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b976:{NFSU2_TR(0x52b976);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b977:{NFSU2_TR(0x52b977);
__builtin_memmove((R+24),(R+4),4);
}
B52b979:{NFSU2_TR(0x52b979);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b97d:{NFSU2_TR(0x52b97d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52b980:{NFSU2_TR(0x52b980);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52b982:{NFSU2_TR(0x52b982);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52b985:{NFSU2_TR(0x52b985);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52b98d:{NFSU2_TR(0x52b98d);
u8 U[4];
w4(U+0,u32(0x79aa30ull));
s4(u32(r4(R+4)),r4(U+0));
}
B52b993:{NFSU2_TR(0x52b993);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52b99a;}}
}
B52b995:L52b995:{c.instructions+=1;NFSU2_TR(0x52b995);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b99aull));
TAIL_STATIC(0x511d00u,511);
}
B52b99a:L52b99a:{c.instructions+=6;NFSU2_TR(0x52b99a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52b99e:{NFSU2_TR(0x52b99e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x79a9e8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52b9a5:{NFSU2_TR(0x52b9a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52b9a6:{NFSU2_TR(0x52b9a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b9ad:{NFSU2_TR(0x52b9ad);
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
B52b9b0:{NFSU2_TR(0x52b9b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52b9c0:L52b9c0:{c.instructions+=6;NFSU2_TR(0x52b9c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b9c1:{NFSU2_TR(0x52b9c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52b9c5:{NFSU2_TR(0x52b9c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B52b9c7:{NFSU2_TR(0x52b9c7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b9c9:{NFSU2_TR(0x52b9c9);
__builtin_memmove((R+4),(R+24),4);
}
B52b9cb:{NFSU2_TR(0x52b9cb);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b9cdull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B52b9cd:L52b9cd:{c.instructions+=3;NFSU2_TR(0x52b9cd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b9ce:{NFSU2_TR(0x52b9ce);
w4(R+4,u32(0x839c30ull));
}
B52b9d3:{NFSU2_TR(0x52b9d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b9d8ull));
TAIL_STATIC(0x525b90u,525);
}
B52b9d8:L52b9d8:{c.instructions+=2;NFSU2_TR(0x52b9d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52b9d9:{NFSU2_TR(0x52b9d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52b9e0:L52b9e0:{c.instructions+=3;NFSU2_TR(0x52b9e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52b9e1:{NFSU2_TR(0x52b9e1);
__builtin_memmove((R+24),(R+4),4);
}
B52b9e3:{NFSU2_TR(0x52b9e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52b9e8ull));
TAIL_STATIC(0x52af20u,52a);
}
B52b9e8:L52b9e8:{c.instructions+=35;NFSU2_TR(0x52b9e8);
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
B52b9ea:{NFSU2_TR(0x52b9ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b9ed:{NFSU2_TR(0x52b9ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b9f0:{NFSU2_TR(0x52b9f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b9f3:{NFSU2_TR(0x52b9f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b9f6:{NFSU2_TR(0x52b9f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b9f9:{NFSU2_TR(0x52b9f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b9fc:{NFSU2_TR(0x52b9fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52b9ff:{NFSU2_TR(0x52b9ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ba02:{NFSU2_TR(0x52ba02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ba08:{NFSU2_TR(0x52ba08);
u8 U[4];
w4(U+0,u32(0x79b904ull));
s4(u32(r4(R+24)),r4(U+0));
}
B52ba0e:{NFSU2_TR(0x52ba0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52ba15:{NFSU2_TR(0x52ba15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ba1b:{NFSU2_TR(0x52ba1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ba21:{NFSU2_TR(0x52ba21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ba27:{NFSU2_TR(0x52ba27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ba2d:{NFSU2_TR(0x52ba2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ba33:{NFSU2_TR(0x52ba33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ba39:{NFSU2_TR(0x52ba39);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ba3f:{NFSU2_TR(0x52ba3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ba45:{NFSU2_TR(0x52ba45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52ba4f:{NFSU2_TR(0x52ba4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
w4(U+4,u32(0xbab60b61ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52ba59:{NFSU2_TR(0x52ba59);
w4(R+4,u32(0xffull));
}
B52ba5e:{NFSU2_TR(0x52ba5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ba64:{NFSU2_TR(0x52ba64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ba6a:{NFSU2_TR(0x52ba6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ba70:{NFSU2_TR(0x52ba70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ba76:{NFSU2_TR(0x52ba76);
__builtin_memmove((R+4),gp(0x7f7cc4),4);
}
B52ba7c:{NFSU2_TR(0x52ba7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ba82:{NFSU2_TR(0x52ba82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ba88:{NFSU2_TR(0x52ba88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ba8e:{NFSU2_TR(0x52ba8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52ba95:{NFSU2_TR(0x52ba95);
__builtin_memmove((R+0),(R+24),4);
}
B52ba97:{NFSU2_TR(0x52ba97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52ba98:{NFSU2_TR(0x52ba98);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52baa0:L52baa0:{c.instructions+=14;NFSU2_TR(0x52baa0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52baa2:{NFSU2_TR(0x52baa2);
u8 U[4];
w4(U+0,u32(0x7774d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52baa7:{NFSU2_TR(0x52baa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52baad:{NFSU2_TR(0x52baad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52baae:{NFSU2_TR(0x52baae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52bab5:{NFSU2_TR(0x52bab5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52bab6:{NFSU2_TR(0x52bab6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52bab7:{NFSU2_TR(0x52bab7);
__builtin_memmove((R+24),(R+4),4);
}
B52bab9:{NFSU2_TR(0x52bab9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52babd:{NFSU2_TR(0x52babd);
u8 U[4];
w4(U+0,u32(0x79b904ull));
s4(u32(r4(R+24)),r4(U+0));
}
B52bac3:{NFSU2_TR(0x52bac3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52bac9:{NFSU2_TR(0x52bac9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52bacb:{NFSU2_TR(0x52bacb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52bad3:{NFSU2_TR(0x52bad3);
if(r1(R+518)){{goto L52bade;}}
}
B52bad5:L52bad5:{c.instructions+=2;NFSU2_TR(0x52bad5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52bad6:{NFSU2_TR(0x52bad6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52badbull));
TAIL_STATIC(0x575630u,575);
}
B52badb:L52badb:{c.instructions+=1;NFSU2_TR(0x52badb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52bade:L52bade:{c.instructions+=3;NFSU2_TR(0x52bade);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52bae4:{NFSU2_TR(0x52bae4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52bae6:{NFSU2_TR(0x52bae6);
if(r1(R+518)){{goto L52baf1;}}
}
B52bae8:L52bae8:{c.instructions+=2;NFSU2_TR(0x52bae8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52bae9:{NFSU2_TR(0x52bae9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52baeeull));
TAIL_STATIC(0x575630u,575);
}
B52baee:L52baee:{c.instructions+=1;NFSU2_TR(0x52baee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52baf1:L52baf1:{c.instructions+=3;NFSU2_TR(0x52baf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52baf7:{NFSU2_TR(0x52baf7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52baf9:{NFSU2_TR(0x52baf9);
if(r1(R+518)){{goto L52bb04;}}
}
B52bafb:L52bafb:{c.instructions+=2;NFSU2_TR(0x52bafb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52bafc:{NFSU2_TR(0x52bafc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52bb01ull));
TAIL_STATIC(0x575630u,575);
}
B52bb01:L52bb01:{c.instructions+=1;NFSU2_TR(0x52bb01);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52bb04:L52bb04:{c.instructions+=3;NFSU2_TR(0x52bb04);
__builtin_memmove((R+4),(R+24),4);
}
B52bb06:{NFSU2_TR(0x52bb06);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B52bb0e:{NFSU2_TR(0x52bb0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52bb13ull));
TAIL_STATIC(0x52af90u,52a);
}
B52bb13:L52bb13:{c.instructions+=5;NFSU2_TR(0x52bb13);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52bb17:{NFSU2_TR(0x52bb17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52bb18:{NFSU2_TR(0x52bb18);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52bb1f:{NFSU2_TR(0x52bb1f);
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
B52bb22:{NFSU2_TR(0x52bb22);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52bb30:L52bb30:{c.instructions+=21;NFSU2_TR(0x52bb30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B52bb33:{NFSU2_TR(0x52bb33);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52bb34:{NFSU2_TR(0x52bb34);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52bb35:{NFSU2_TR(0x52bb35);
__builtin_memmove((R+20),(R+4),4);
}
B52bb37:{NFSU2_TR(0x52bb37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52bb3d:{NFSU2_TR(0x52bb3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52bb41:{NFSU2_TR(0x52bb41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B52bb44:{NFSU2_TR(0x52bb44);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52bb48:{NFSU2_TR(0x52bb48);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52bb4c:{NFSU2_TR(0x52bb4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52bb4f:{NFSU2_TR(0x52bb4f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B52bb52:{NFSU2_TR(0x52bb52);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52bb53:{NFSU2_TR(0x52bb53);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52bb54:{NFSU2_TR(0x52bb54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52bb57:{NFSU2_TR(0x52bb57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52bb5a:{NFSU2_TR(0x52bb5a);
__builtin_memmove((R+24),(R+0),4);
}
B52bb5c:{NFSU2_TR(0x52bb5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B52bb5f:{NFSU2_TR(0x52bb5f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B52bb62:{NFSU2_TR(0x52bb62);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52bb63:{NFSU2_TR(0x52bb63);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52bb67:{NFSU2_TR(0x52bb67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52bb6cull));
TAIL_STATIC(0x575620u,575);
}
B52bb6c:L52bb6c:{c.instructions+=4;NFSU2_TR(0x52bb6c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B52bb6e:{NFSU2_TR(0x52bb6e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52bb71:{NFSU2_TR(0x52bb71);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52bb73:{NFSU2_TR(0x52bb73);
if(r1(R+518)){{goto L52bbae;}}
}
B52bb75:L52bb75:{c.instructions+=3;NFSU2_TR(0x52bb75);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B52bb76:{NFSU2_TR(0x52bb76);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B52bb78:{NFSU2_TR(0x52bb78);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L52bbb0;}}
}
B52bb7a:L52bb7a:{c.instructions+=3;NFSU2_TR(0x52bb7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52bb7d:{NFSU2_TR(0x52bb7d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B52bb7e:{NFSU2_TR(0x52bb7e);
__builtin_memmove((R+28),(R+28),4);
}
B52bb80:L52bb80:{c.instructions+=12;NFSU2_TR(0x52bb80);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52bb83:{NFSU2_TR(0x52bb83);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52bb8a:{NFSU2_TR(0x52bb8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52bb91:{NFSU2_TR(0x52bb91);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52bb94:{NFSU2_TR(0x52bb94);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B52bb96:{NFSU2_TR(0x52bb96);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52bb99:{NFSU2_TR(0x52bb99);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52bb9c:{NFSU2_TR(0x52bb9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52bb9f:{NFSU2_TR(0x52bb9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B52bba6:{NFSU2_TR(0x52bba6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x30ull))));
}
B52bba9:{NFSU2_TR(0x52bba9);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B52bbaa:{NFSU2_TR(0x52bbaa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52bb80u);}goto L52bb80;}}
}
B52bbac:L52bbac:{c.instructions+=1;NFSU2_TR(0x52bbac);
{goto L52bbb0;}
}
B52bbae:L52bbae:{c.instructions+=1;NFSU2_TR(0x52bbae);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52bbb0:L52bbb0:{c.instructions+=6;NFSU2_TR(0x52bbb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52bbb3:{NFSU2_TR(0x52bbb3);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x64ull))));
w8(U+8,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
}
B52bbb7:{NFSU2_TR(0x52bbb7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52bbb8:{NFSU2_TR(0x52bbb8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52bbb9:{NFSU2_TR(0x52bbb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52bbbf:{NFSU2_TR(0x52bbbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52bbc4ull));
TAIL_STATIC(0x504290u,504);
}
B52bbc4:L52bbc4:{c.instructions+=5;NFSU2_TR(0x52bbc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52bbc7:{NFSU2_TR(0x52bbc7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B52bbca:{NFSU2_TR(0x52bbca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52bbcb:{NFSU2_TR(0x52bbcb);
__builtin_memmove((R+4),(R+20),4);
}
B52bbcd:{NFSU2_TR(0x52bbcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52bbd2ull));
TAIL_STATIC(0x518bb0u,518);
}
B52bbd2:L52bbd2:{c.instructions+=4;NFSU2_TR(0x52bbd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52bbd5:{NFSU2_TR(0x52bbd5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52bbd6:{NFSU2_TR(0x52bbd6);
__builtin_memmove((R+4),(R+20),4);
}
B52bbd8:{NFSU2_TR(0x52bbd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52bbddull));
TAIL_STATIC(0x518c00u,518);
}
B52bbdd:L52bbdd:{c.instructions+=2;NFSU2_TR(0x52bbdd);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B52bbe1:{NFSU2_TR(0x52bbe1);
if(r1(R+518)){{goto L52bd5a;}}
}
B52bbe7:L52bbe7:{c.instructions+=3;NFSU2_TR(0x52bbe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52bbea:{NFSU2_TR(0x52bbea);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52bbec:{NFSU2_TR(0x52bbec);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L52bbf4;}}
}
B52bbee:L52bbee:{c.instructions+=2;NFSU2_TR(0x52bbee);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52bbf2:{NFSU2_TR(0x52bbf2);
{goto L52bbfa;}
}
B52bbf4:L52bbf4:{c.instructions+=2;NFSU2_TR(0x52bbf4);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52bbf8:{NFSU2_TR(0x52bbf8);
__builtin_memmove((R+8),(R+12),4);
}
B52bbfa:L52bbfa:{c.instructions+=3;NFSU2_TR(0x52bbfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52bbfd:{NFSU2_TR(0x52bbfd);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52bbff:{NFSU2_TR(0x52bbff);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L52bc07;}}
}
B52bc01:L52bc01:{c.instructions+=2;NFSU2_TR(0x52bc01);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52bc05:{NFSU2_TR(0x52bc05);
{goto L52bc0d;}
}
B52bc07:L52bc07:{c.instructions+=2;NFSU2_TR(0x52bc07);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52bc0b:{NFSU2_TR(0x52bc0b);
__builtin_memmove((R+4),(R+28),4);
}
B52bc0d:L52bc0d:{c.instructions+=3;NFSU2_TR(0x52bc0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52bc11:{NFSU2_TR(0x52bc11);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52bc13:{NFSU2_TR(0x52bc13);
if(r1(R+518)){{goto L52bd5a;}}
}
B52bc19:L52bc19:{c.instructions+=3;NFSU2_TR(0x52bc19);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52bc1b:{NFSU2_TR(0x52bc1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52bc23:{NFSU2_TR(0x52bc23);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L52bcd9;}}
}
B52bc29:L52bc29:{c.instructions+=8;NFSU2_TR(0x52bc29);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B52bc2c:{NFSU2_TR(0x52bc2c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B52bc2f:{NFSU2_TR(0x52bc2f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52bc33:{NFSU2_TR(0x52bc33);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B52bc36:{NFSU2_TR(0x52bc36);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B52bc39:{NFSU2_TR(0x52bc39);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B52bc3d:{NFSU2_TR(0x52bc3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52bc41:{NFSU2_TR(0x52bc41);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52bc45:L52bc45:{c.instructions+=11;NFSU2_TR(0x52bc45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52bc48:{NFSU2_TR(0x52bc48);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52bc4c:{NFSU2_TR(0x52bc4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B52bc4f:{NFSU2_TR(0x52bc4f);
u8 U[32];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B52bc54:{NFSU2_TR(0x52bc54);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B52bc57:{NFSU2_TR(0x52bc57);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B52bc5a:{NFSU2_TR(0x52bc5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52bc60:{NFSU2_TR(0x52bc60);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B52bc63:{NFSU2_TR(0x52bc63);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B52bc65:{NFSU2_TR(0x52bc65);
__builtin_memmove((R+0),(R+4),4);
}
B52bc67:{NFSU2_TR(0x52bc67);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B52bc6a:L52bc6a:{c.instructions+=1;NFSU2_TR(0x52bc6a);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L52bc6c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52bc6au);}goto L52bc6a;}
}
B52bc6c:L52bc6c:{c.instructions+=3;NFSU2_TR(0x52bc6c);
__builtin_memmove((R+4),(R+0),4);
}
B52bc6e:{NFSU2_TR(0x52bc6e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B52bc71:{NFSU2_TR(0x52bc71);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B52bc73:L52bc73:{c.instructions+=1;NFSU2_TR(0x52bc73);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L52bc75;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52bc73u);}goto L52bc73;}
}
B52bc75:L52bc75:{c.instructions+=1;NFSU2_TR(0x52bc75);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L52bca8;}}
}
B52bc77:L52bc77:{c.instructions+=4;NFSU2_TR(0x52bc77);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52bc7b:{NFSU2_TR(0x52bc7b);
__builtin_memmove((R+24),(R+12),4);
}
B52bc7d:{NFSU2_TR(0x52bc7d);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
}
B52bc7f:{NFSU2_TR(0x52bc7f);
}
B52bc80:L52bc80:{c.instructions+=2;NFSU2_TR(0x52bc80);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52bc84:{NFSU2_TR(0x52bc84);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52bca2;}}
}
B52bc86:L52bc86:{c.instructions+=7;NFSU2_TR(0x52bc86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52bc8c:{NFSU2_TR(0x52bc8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B52bc8e:{NFSU2_TR(0x52bc8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52bc94:{NFSU2_TR(0x52bc94);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B52bc95:{NFSU2_TR(0x52bc95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52bc9b:{NFSU2_TR(0x52bc9b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B52bc9e:{NFSU2_TR(0x52bc9e);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52bca2:L52bca2:{c.instructions+=3;NFSU2_TR(0x52bca2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B52bca5:{NFSU2_TR(0x52bca5);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B52bca6:{NFSU2_TR(0x52bca6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52bc80u);}goto L52bc80;}}
}
B52bca8:L52bca8:{c.instructions+=13;NFSU2_TR(0x52bca8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52bcac:{NFSU2_TR(0x52bcac);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52bcb0:{NFSU2_TR(0x52bcb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52bcb4:{NFSU2_TR(0x52bcb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52bcb8:{NFSU2_TR(0x52bcb8);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B52bcba:{NFSU2_TR(0x52bcba);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B52bcbc:{NFSU2_TR(0x52bcbc);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52bcc0:{NFSU2_TR(0x52bcc0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B52bcc1:{NFSU2_TR(0x52bcc1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B52bcc3:{NFSU2_TR(0x52bcc3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52bcc7:{NFSU2_TR(0x52bcc7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52bccb:{NFSU2_TR(0x52bccb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52bccf:{NFSU2_TR(0x52bccf);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52bc45u);}goto L52bc45;}}
}
B52bcd5:L52bcd5:{c.instructions+=1;NFSU2_TR(0x52bcd5);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52bcd9:L52bcd9:{c.instructions+=2;NFSU2_TR(0x52bcd9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B52bcdb:{NFSU2_TR(0x52bcdb);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L52bd4d;}}
}
B52bcdd:L52bcdd:{c.instructions+=12;NFSU2_TR(0x52bcdd);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52bce1:{NFSU2_TR(0x52bce1);
__builtin_memmove((R+0),(R+4),4);
}
B52bce3:{NFSU2_TR(0x52bce3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B52bce6:{NFSU2_TR(0x52bce6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B52bce9:{NFSU2_TR(0x52bce9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B52bcec:{NFSU2_TR(0x52bcec);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B52bcef:{NFSU2_TR(0x52bcef);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B52bcf2:{NFSU2_TR(0x52bcf2);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B52bcf6:{NFSU2_TR(0x52bcf6);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
}
B52bcf8:{NFSU2_TR(0x52bcf8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52bcfc:{NFSU2_TR(0x52bcfc);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52bd00:{NFSU2_TR(0x52bd00);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52bd04:L52bd04:{c.instructions+=2;NFSU2_TR(0x52bd04);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52bd06:{NFSU2_TR(0x52bd06);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L52bd38;}}
}
B52bd08:L52bd08:{c.instructions+=2;NFSU2_TR(0x52bd08);
__builtin_memmove((R+28),(R+12),4);
}
B52bd0a:{NFSU2_TR(0x52bd0a);
__builtin_memmove((R+12),(R+12),4);
}
B52bd10:L52bd10:{c.instructions+=2;NFSU2_TR(0x52bd10);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52bd14:{NFSU2_TR(0x52bd14);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52bd2e;}}
}
B52bd16:L52bd16:{c.instructions+=6;NFSU2_TR(0x52bd16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52bd1c:{NFSU2_TR(0x52bd1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B52bd1e:{NFSU2_TR(0x52bd1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52bd24:{NFSU2_TR(0x52bd24);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B52bd25:{NFSU2_TR(0x52bd25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52bd2b:{NFSU2_TR(0x52bd2b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B52bd2e:L52bd2e:{c.instructions+=3;NFSU2_TR(0x52bd2e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B52bd31:{NFSU2_TR(0x52bd31);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B52bd32:{NFSU2_TR(0x52bd32);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52bd10u);}goto L52bd10;}}
}
B52bd34:L52bd34:{c.instructions+=1;NFSU2_TR(0x52bd34);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52bd38:L52bd38:{c.instructions+=7;NFSU2_TR(0x52bd38);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52bd3c:{NFSU2_TR(0x52bd3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52bd40:{NFSU2_TR(0x52bd40);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B52bd42:{NFSU2_TR(0x52bd42);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B52bd43:{NFSU2_TR(0x52bd43);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52bd47:{NFSU2_TR(0x52bd47);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52bd4b:{NFSU2_TR(0x52bd4b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52bd04u);}goto L52bd04;}}
}
B52bd4d:L52bd4d:{c.instructions+=3;NFSU2_TR(0x52bd4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52bd51:{NFSU2_TR(0x52bd51);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52bd52:{NFSU2_TR(0x52bd52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52bd57ull));
TAIL_STATIC(0x575630u,575);
}
B52bd57:L52bd57:{c.instructions+=1;NFSU2_TR(0x52bd57);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52bd5a:L52bd5a:{c.instructions+=9;NFSU2_TR(0x52bd5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52bd5d:{NFSU2_TR(0x52bd5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52bd5e:{NFSU2_TR(0x52bd5e);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x1ull))));
}
B52bd61:{NFSU2_TR(0x52bd61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52bd62:{NFSU2_TR(0x52bd62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52bd65:{NFSU2_TR(0x52bd65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52bd66:{NFSU2_TR(0x52bd66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52bd67:{NFSU2_TR(0x52bd67);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52bd6a:{NFSU2_TR(0x52bd6a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52bd70:L52bd70:{c.instructions+=15;NFSU2_TR(0x52bd70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52bd71:{NFSU2_TR(0x52bd71);
__builtin_memmove((R+24),(R+4),4);
}
B52bd73:{NFSU2_TR(0x52bd73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52bd76:{NFSU2_TR(0x52bd76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52bd79:{NFSU2_TR(0x52bd79);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52bd7b:{NFSU2_TR(0x52bd7b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52bd7c:{NFSU2_TR(0x52bd7c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52bd7d:{NFSU2_TR(0x52bd7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52bd81:{NFSU2_TR(0x52bd81);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((R+8),(U+0),4);
}
B52bd84:{NFSU2_TR(0x52bd84);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52bd85:{NFSU2_TR(0x52bd85);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((R+0),(U+0),4);
}
B52bd88:{NFSU2_TR(0x52bd88);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52bd89:{NFSU2_TR(0x52bd89);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52bd8a:{NFSU2_TR(0x52bd8a);
__builtin_memmove((R+4),(R+24),4);
}
B52bd8c:{NFSU2_TR(0x52bd8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52bd91ull));
TAIL_STATIC(0x518f20u,518);
}
B52bd91:L52bd91:{c.instructions+=13;NFSU2_TR(0x52bd91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52bd94:{NFSU2_TR(0x52bd94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52bd97:{NFSU2_TR(0x52bd97);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52bd99:{NFSU2_TR(0x52bd99);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52bd9a:{NFSU2_TR(0x52bd9a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52bd9b:{NFSU2_TR(0x52bd9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52bd9f:{NFSU2_TR(0x52bd9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52bda5:{NFSU2_TR(0x52bda5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52bda6:{NFSU2_TR(0x52bda6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((R+8),(U+0),4);
}
B52bda9:{NFSU2_TR(0x52bda9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52bdaa:{NFSU2_TR(0x52bdaa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52bdab:{NFSU2_TR(0x52bdab);
__builtin_memmove((R+4),(R+24),4);
}
B52bdad:{NFSU2_TR(0x52bdad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52bdb2ull));
TAIL_STATIC(0x518f20u,518);
}
B52bdb2:L52bdb2:{c.instructions+=2;NFSU2_TR(0x52bdb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52bdb3:{NFSU2_TR(0x52bdb3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52bdc0:L52bdc0:{c.instructions+=13;NFSU2_TR(0x52bdc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B52bdc3:{NFSU2_TR(0x52bdc3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52bdc4:{NFSU2_TR(0x52bdc4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52bdc5:{NFSU2_TR(0x52bdc5);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B52bdc9:{NFSU2_TR(0x52bdc9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52bdcc:{NFSU2_TR(0x52bdcc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52bdcd:{NFSU2_TR(0x52bdcd);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B52bdcf:{NFSU2_TR(0x52bdcf);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B52bdd1:{NFSU2_TR(0x52bdd1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52bdd3:{NFSU2_TR(0x52bdd3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52bdd4:{NFSU2_TR(0x52bdd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52bddc:{NFSU2_TR(0x52bddc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52bddf:{NFSU2_TR(0x52bddf);
if(r1(R+518)){{goto L52bdeb;}}
}
B52bde1:L52bde1:{c.instructions+=2;NFSU2_TR(0x52bde1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52bde4:{NFSU2_TR(0x52bde4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52bde9ull));
TAIL_STATIC(0x4fe890u,4fe);
}
B52bde9:L52bde9:{c.instructions+=1;NFSU2_TR(0x52bde9);
{goto L52bdee;}
}
B52bdeb:L52bdeb:{c.instructions+=1;NFSU2_TR(0x52bdeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52bdee:L52bdee:{c.instructions+=2;NFSU2_TR(0x52bdee);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52bdf0:{NFSU2_TR(0x52bdf0);
if(r1(R+518)){{goto L52bfcb;}}
}
B52bdf6:L52bdf6:{c.instructions+=4;NFSU2_TR(0x52bdf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52bdf9:{NFSU2_TR(0x52bdf9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B52bdfa:{NFSU2_TR(0x52bdfa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52bdfc:{NFSU2_TR(0x52bdfc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52bdf6u);}goto L52bdf6;}}
}
B52bdfe:L52bdfe:{c.instructions+=2;NFSU2_TR(0x52bdfe);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52be00:{NFSU2_TR(0x52be00);
if(r1(R+518)){{goto L52bfcb;}}
}
B52be06:L52be06:{c.instructions+=5;NFSU2_TR(0x52be06);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52be08:{NFSU2_TR(0x52be08);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52be0b:{NFSU2_TR(0x52be0b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7full))));
}
B52be0e:{NFSU2_TR(0x52be0e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B52be11:{NFSU2_TR(0x52be11);
if(r1(R+518)){{goto L52bf59;}}
}
B52be17:L52be17:{c.instructions+=2;NFSU2_TR(0x52be17);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B52be18:{NFSU2_TR(0x52be18);
if(r1(R+518)){{goto L52be49;}}
}
B52be1a:L52be1a:{c.instructions+=2;NFSU2_TR(0x52be1a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B52be1b:{NFSU2_TR(0x52be1b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52bfcb;}}
}
B52be21:L52be21:{c.instructions+=6;NFSU2_TR(0x52be21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52be24:{NFSU2_TR(0x52be24);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52be28:{NFSU2_TR(0x52be28);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B52be2b:{NFSU2_TR(0x52be2b);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B52be2e:{NFSU2_TR(0x52be2e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52be30:{NFSU2_TR(0x52be30);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L52be3a;}}
}
B52be32:L52be32:{c.instructions+=4;NFSU2_TR(0x52be32);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+0))));
}
B52be34:{NFSU2_TR(0x52be34);
__builtin_memmove((R+8),(R+0),4);
}
B52be36:{NFSU2_TR(0x52be36);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B52be38:{NFSU2_TR(0x52be38);
__builtin_memmove((R+4),(R+8),4);
}
B52be3a:L52be3a:{c.instructions+=3;NFSU2_TR(0x52be3a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52be3b:{NFSU2_TR(0x52be3b);
__builtin_memmove((R+4),(R+20),4);
}
B52be3d:{NFSU2_TR(0x52be3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52be42ull));
TAIL_STATIC(0x5052b0u,505);
}
B52be42:L52be42:{c.instructions+=2;NFSU2_TR(0x52be42);
__builtin_memmove((R+24),(R+0),4);
}
B52be44:{NFSU2_TR(0x52be44);
{goto L52bfc7;}
}
B52be49:L52be49:{c.instructions+=4;NFSU2_TR(0x52be49);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B52be4d:{NFSU2_TR(0x52be4d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52be4e:{NFSU2_TR(0x52be4e);
__builtin_memmove((R+4),(R+20),4);
}
B52be50:{NFSU2_TR(0x52be50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52be55ull));
TAIL_STATIC(0x5052b0u,505);
}
B52be55:L52be55:{c.instructions+=3;NFSU2_TR(0x52be55);
__builtin_memmove((R+24),(R+0),4);
}
B52be57:{NFSU2_TR(0x52be57);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52be59:{NFSU2_TR(0x52be59);
if(r1(R+518)){{goto L52bfcb;}}
}
B52be5f:L52be5f:{c.instructions+=4;NFSU2_TR(0x52be5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52be62:{NFSU2_TR(0x52be62);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52be64:{NFSU2_TR(0x52be64);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52be68:{NFSU2_TR(0x52be68);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L52beba;}}
}
B52be6a:L52be6a:{c.instructions+=3;NFSU2_TR(0x52be6a);
__builtin_memmove((R+4),(R+20),4);
}
B52be6c:{NFSU2_TR(0x52be6c);
__builtin_memmove((R+12),(R+24),4);
}
B52be6e:{NFSU2_TR(0x52be6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52be73ull));
TAIL_STATIC(0x4fe8d0u,4fe);
}
B52be73:L52be73:{c.instructions+=14;NFSU2_TR(0x52be73);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52be76:{NFSU2_TR(0x52be76);
__builtin_memmove((R+24),(R+0),4);
}
B52be78:{NFSU2_TR(0x52be78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52be7b:{NFSU2_TR(0x52be7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52be7e:{NFSU2_TR(0x52be7e);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B52be81:{NFSU2_TR(0x52be81);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B52be84:{NFSU2_TR(0x52be84);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B52be86:{NFSU2_TR(0x52be86);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B52be88:{NFSU2_TR(0x52be88);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52be8c:{NFSU2_TR(0x52be8c);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B52be90:{NFSU2_TR(0x52be90);
{u32 ea_=u32(u32(7882144u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B52be96:{NFSU2_TR(0x52be96);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B52be98:{NFSU2_TR(0x52be98);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52be9b:{NFSU2_TR(0x52be9b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52bfbd;}}
}
B52bea1:L52bea1:{c.instructions+=7;NFSU2_TR(0x52bea1);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52bea5:{NFSU2_TR(0x52bea5);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B52bea7:{NFSU2_TR(0x52bea7);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52beab:{NFSU2_TR(0x52beab);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B52beaf:{NFSU2_TR(0x52beaf);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B52beb1:{NFSU2_TR(0x52beb1);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52beb5:{NFSU2_TR(0x52beb5);
{goto L52bfc5;}
}
B52beba:L52beba:{c.instructions+=1;NFSU2_TR(0x52beba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52becb;}}
}
B52bebc:L52bebc:{c.instructions+=3;NFSU2_TR(0x52bebc);
__builtin_memmove((R+12),(R+24),4);
}
B52bebe:{NFSU2_TR(0x52bebe);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52bec6:{NFSU2_TR(0x52bec6);
{goto L52bfc7;}
}
B52becb:L52becb:{c.instructions+=3;NFSU2_TR(0x52becb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B52bece:{NFSU2_TR(0x52bece);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52bed0:{NFSU2_TR(0x52bed0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52bf29;}}
}
B52bed2:L52bed2:{c.instructions+=7;NFSU2_TR(0x52bed2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52bed5:{NFSU2_TR(0x52bed5);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B52bed8:{NFSU2_TR(0x52bed8);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B52bedb:{NFSU2_TR(0x52bedb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52bedc:{NFSU2_TR(0x52bedc);
__builtin_memmove((R+4),(R+20),4);
}
B52bede:{NFSU2_TR(0x52bede);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52bee2:{NFSU2_TR(0x52bee2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52bee7ull));
TAIL_STATIC(0x505260u,505);
}
B52bee7:L52bee7:{c.instructions+=11;NFSU2_TR(0x52bee7);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52beeb:{NFSU2_TR(0x52beeb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52beef:{NFSU2_TR(0x52beef);
__builtin_memmove((R+12),(R+0),4);
}
B52bef1:{NFSU2_TR(0x52bef1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B52bef4:{NFSU2_TR(0x52bef4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B52bef7:{NFSU2_TR(0x52bef7);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52befb:{NFSU2_TR(0x52befb);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B52beff:{NFSU2_TR(0x52beff);
{u32 ea_=u32(u32(7882144u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B52bf05:{NFSU2_TR(0x52bf05);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B52bf07:{NFSU2_TR(0x52bf07);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52bf0a:{NFSU2_TR(0x52bf0a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52bfbd;}}
}
B52bf10:L52bf10:{c.instructions+=7;NFSU2_TR(0x52bf10);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52bf14:{NFSU2_TR(0x52bf14);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B52bf16:{NFSU2_TR(0x52bf16);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52bf1a:{NFSU2_TR(0x52bf1a);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B52bf1e:{NFSU2_TR(0x52bf1e);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B52bf20:{NFSU2_TR(0x52bf20);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52bf24:{NFSU2_TR(0x52bf24);
{goto L52bfc5;}
}
B52bf29:L52bf29:{c.instructions+=8;NFSU2_TR(0x52bf29);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52bf2c:{NFSU2_TR(0x52bf2c);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B52bf2e:{NFSU2_TR(0x52bf2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52bf32:{NFSU2_TR(0x52bf32);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B52bf36:{NFSU2_TR(0x52bf36);
{u32 ea_=u32(u32(7882144u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B52bf3c:{NFSU2_TR(0x52bf3c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B52bf3e:{NFSU2_TR(0x52bf3e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52bf41:{NFSU2_TR(0x52bf41);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52bfbd;}}
}
B52bf43:L52bf43:{c.instructions+=7;NFSU2_TR(0x52bf43);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52bf47:{NFSU2_TR(0x52bf47);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B52bf49:{NFSU2_TR(0x52bf49);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52bf4d:{NFSU2_TR(0x52bf4d);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B52bf51:{NFSU2_TR(0x52bf51);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B52bf53:{NFSU2_TR(0x52bf53);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52bf57:{NFSU2_TR(0x52bf57);
{goto L52bfc5;}
}
B52bf59:L52bf59:{c.instructions+=4;NFSU2_TR(0x52bf59);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52bf5d:{NFSU2_TR(0x52bf5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52bf5e:{NFSU2_TR(0x52bf5e);
__builtin_memmove((R+4),(R+20),4);
}
B52bf60:{NFSU2_TR(0x52bf60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52bf65ull));
TAIL_STATIC(0x5052b0u,505);
}
B52bf65:L52bf65:{c.instructions+=3;NFSU2_TR(0x52bf65);
__builtin_memmove((R+24),(R+0),4);
}
B52bf67:{NFSU2_TR(0x52bf67);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52bf69:{NFSU2_TR(0x52bf69);
if(r1(R+518)){{goto L52bfcb;}}
}
B52bf6b:L52bf6b:{c.instructions+=3;NFSU2_TR(0x52bf6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B52bf6e:{NFSU2_TR(0x52bf6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52bf70:{NFSU2_TR(0x52bf70);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52bf7c;}}
}
B52bf72:L52bf72:{c.instructions+=2;NFSU2_TR(0x52bf72);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52bf7a:{NFSU2_TR(0x52bf7a);
{goto L52bfc7;}
}
B52bf7c:L52bf7c:{c.instructions+=4;NFSU2_TR(0x52bf7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52bf7f:{NFSU2_TR(0x52bf7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52bf83:{NFSU2_TR(0x52bf83);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B52bf85:{NFSU2_TR(0x52bf85);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L52bf91;}}
}
B52bf87:L52bf87:{c.instructions+=2;NFSU2_TR(0x52bf87);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52bf8f:{NFSU2_TR(0x52bf8f);
{goto L52bfc7;}
}
B52bf91:L52bf91:{c.instructions+=8;NFSU2_TR(0x52bf91);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52bf94:{NFSU2_TR(0x52bf94);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B52bf96:{NFSU2_TR(0x52bf96);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52bf9a:{NFSU2_TR(0x52bf9a);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B52bf9e:{NFSU2_TR(0x52bf9e);
{u32 ea_=u32(u32(7882144u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B52bfa4:{NFSU2_TR(0x52bfa4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B52bfa6:{NFSU2_TR(0x52bfa6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52bfa9:{NFSU2_TR(0x52bfa9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52bfbd;}}
}
B52bfab:L52bfab:{c.instructions+=6;NFSU2_TR(0x52bfab);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B52bfad:{NFSU2_TR(0x52bfad);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52bfb1:{NFSU2_TR(0x52bfb1);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B52bfb5:{NFSU2_TR(0x52bfb5);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B52bfb7:{NFSU2_TR(0x52bfb7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52bfbb:{NFSU2_TR(0x52bfbb);
{goto L52bfc5;}
}
B52bfbd:L52bfbd:{c.instructions+=1;NFSU2_TR(0x52bfbd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52bfc5:L52bfc5:{c.instructions+=1;NFSU2_TR(0x52bfc5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B52bfc7:L52bfc7:{c.instructions+=2;NFSU2_TR(0x52bfc7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52bfc9:{NFSU2_TR(0x52bfc9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x52c044u,52c);}
}
B52bfcb:L52bfcb:{c.instructions+=4;NFSU2_TR(0x52bfcb);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+20))),1);
w4(R+0,u32(r1(U+0)));
}
B52bfcf:{NFSU2_TR(0x52bfcf);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B52bfd0:{NFSU2_TR(0x52bfd0);
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
B52bfd3:{NFSU2_TR(0x52bfd3);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x52c21au,52c);}
}
B52bfd9:L52bfd9:{c.instructions+=1;NFSU2_TR(0x52bfd9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x52c224ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B52bfe0:L52bfe0:{c.instructions+=9;NFSU2_TR(0x52bfe0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B52bfe2:{NFSU2_TR(0x52bfe2);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52bfe6:{NFSU2_TR(0x52bfe6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52bfe7:{NFSU2_TR(0x52bfe7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52bfe8:{NFSU2_TR(0x52bfe8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52bfe9:{NFSU2_TR(0x52bfe9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B52bfeb:{NFSU2_TR(0x52bfeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52bfec:{NFSU2_TR(0x52bfec);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52bfef:{NFSU2_TR(0x52bfef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52bff0:L52bff0:{c.instructions+=8;NFSU2_TR(0x52bff0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52bff3:{NFSU2_TR(0x52bff3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B52bff5:{NFSU2_TR(0x52bff5);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52bff9:{NFSU2_TR(0x52bff9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52bffa:{NFSU2_TR(0x52bffa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52bffb:{NFSU2_TR(0x52bffb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52bffc:{NFSU2_TR(0x52bffc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B52bffe:{NFSU2_TR(0x52bffe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x52c001u,52c);
}
XIT:NFSU2_TR_EXIT(0x52b,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
