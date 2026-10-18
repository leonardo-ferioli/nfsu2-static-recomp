#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_42f(u8* __restrict R,Cpu& c);
u32 body_63c(u8* __restrict R,Cpu& c);
u32 body_6e3(u8* __restrict R,Cpu& c);
u32 body_6e4(u8* __restrict R,Cpu& c);
u32 body_6e5(u8* __restrict R,Cpu& c);
u32 body_6ed(u8* __restrict R,Cpu& c);
u32 body_6ee(u8* __restrict R,Cpu& c);
u32 body_6f0(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6ef,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6ef,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6ef(u8* __restrict R,Cpu& c);
u32 page_6ef(Cpu& c){return body_6ef(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6ef(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6ef002:goto L6ef002;
case 0x6ef003:c.instructions+=5;goto B6ef003;
case 0x6ef004:c.instructions+=4;goto B6ef004;
case 0x6ef005:c.instructions+=3;goto B6ef005;
case 0x6ef006:c.instructions+=2;goto B6ef006;
case 0x6ef009:c.instructions+=1;goto B6ef009;
case 0x6ef00c:goto L6ef00c;
case 0x6ef010:c.instructions+=11;goto B6ef010;
case 0x6ef012:c.instructions+=10;goto B6ef012;
case 0x6ef016:c.instructions+=9;goto B6ef016;
case 0x6ef019:c.instructions+=8;goto B6ef019;
case 0x6ef01c:c.instructions+=7;goto B6ef01c;
case 0x6ef01f:c.instructions+=6;goto B6ef01f;
case 0x6ef020:c.instructions+=5;goto B6ef020;
case 0x6ef021:c.instructions+=4;goto B6ef021;
case 0x6ef022:c.instructions+=3;goto B6ef022;
case 0x6ef023:c.instructions+=2;goto B6ef023;
case 0x6ef026:c.instructions+=1;goto B6ef026;
case 0x6ef030:goto L6ef030;
case 0x6ef034:c.instructions+=4;goto B6ef034;
case 0x6ef035:c.instructions+=3;goto B6ef035;
case 0x6ef037:c.instructions+=2;goto B6ef037;
case 0x6ef039:c.instructions+=1;goto B6ef039;
case 0x6ef03e:goto L6ef03e;
case 0x6ef050:goto L6ef050;
case 0x6ef053:c.instructions+=18;goto B6ef053;
case 0x6ef056:c.instructions+=17;goto B6ef056;
case 0x6ef059:c.instructions+=16;goto B6ef059;
case 0x6ef05d:c.instructions+=15;goto B6ef05d;
case 0x6ef05e:c.instructions+=14;goto B6ef05e;
case 0x6ef061:c.instructions+=13;goto B6ef061;
case 0x6ef065:c.instructions+=12;goto B6ef065;
case 0x6ef067:c.instructions+=11;goto B6ef067;
case 0x6ef068:c.instructions+=10;goto B6ef068;
case 0x6ef06c:c.instructions+=9;goto B6ef06c;
case 0x6ef070:c.instructions+=8;goto B6ef070;
case 0x6ef074:c.instructions+=7;goto B6ef074;
case 0x6ef077:c.instructions+=6;goto B6ef077;
case 0x6ef078:c.instructions+=5;goto B6ef078;
case 0x6ef07c:c.instructions+=4;goto B6ef07c;
case 0x6ef080:c.instructions+=3;goto B6ef080;
case 0x6ef084:c.instructions+=2;goto B6ef084;
case 0x6ef087:c.instructions+=1;goto B6ef087;
case 0x6ef08c:goto L6ef08c;
case 0x6ef090:goto L6ef090;
case 0x6ef091:c.instructions+=2;goto B6ef091;
case 0x6ef093:c.instructions+=1;goto B6ef093;
case 0x6ef098:goto L6ef098;
case 0x6ef09d:c.instructions+=1;goto B6ef09d;
case 0x6ef09f:goto L6ef09f;
case 0x6ef0a4:c.instructions+=2;goto B6ef0a4;
case 0x6ef0a5:c.instructions+=1;goto B6ef0a5;
case 0x6ef0ab:goto L6ef0ab;
case 0x6ef0ae:goto L6ef0ae;
case 0x6ef0b0:c.instructions+=2;goto B6ef0b0;
case 0x6ef0b1:c.instructions+=1;goto B6ef0b1;
case 0x6ef0c0:goto L6ef0c0;
case 0x6ef0c3:c.instructions+=8;goto B6ef0c3;
case 0x6ef0c7:c.instructions+=7;goto B6ef0c7;
case 0x6ef0c8:c.instructions+=6;goto B6ef0c8;
case 0x6ef0ce:c.instructions+=5;goto B6ef0ce;
case 0x6ef0d2:c.instructions+=4;goto B6ef0d2;
case 0x6ef0d6:c.instructions+=3;goto B6ef0d6;
case 0x6ef0d8:c.instructions+=2;goto B6ef0d8;
case 0x6ef0db:c.instructions+=1;goto B6ef0db;
case 0x6ef0dd:goto L6ef0dd;
case 0x6ef0e3:c.instructions+=5;goto B6ef0e3;
case 0x6ef0e7:c.instructions+=4;goto B6ef0e7;
case 0x6ef0eb:c.instructions+=3;goto B6ef0eb;
case 0x6ef0ef:c.instructions+=2;goto B6ef0ef;
case 0x6ef0f3:c.instructions+=1;goto B6ef0f3;
case 0x6ef0f5:goto L6ef0f5;
case 0x6ef0fb:c.instructions+=4;goto B6ef0fb;
case 0x6ef0ff:c.instructions+=3;goto B6ef0ff;
case 0x6ef103:c.instructions+=2;goto B6ef103;
case 0x6ef107:c.instructions+=1;goto B6ef107;
case 0x6ef10b:goto L6ef10b;
case 0x6ef10d:c.instructions+=2;goto B6ef10d;
case 0x6ef111:c.instructions+=1;goto B6ef111;
case 0x6ef113:goto L6ef113;
case 0x6ef115:c.instructions+=1;goto B6ef115;
case 0x6ef119:goto L6ef119;
case 0x6ef11d:c.instructions+=4;goto B6ef11d;
case 0x6ef120:c.instructions+=3;goto B6ef120;
case 0x6ef123:c.instructions+=2;goto B6ef123;
case 0x6ef125:c.instructions+=1;goto B6ef125;
case 0x6ef127:goto L6ef127;
case 0x6ef12a:c.instructions+=1;goto B6ef12a;
case 0x6ef12e:goto L6ef12e;
case 0x6ef132:c.instructions+=6;goto B6ef132;
case 0x6ef136:c.instructions+=5;goto B6ef136;
case 0x6ef139:c.instructions+=4;goto B6ef139;
case 0x6ef13d:c.instructions+=3;goto B6ef13d;
case 0x6ef140:c.instructions+=2;goto B6ef140;
case 0x6ef142:c.instructions+=1;goto B6ef142;
case 0x6ef148:goto L6ef148;
case 0x6ef14b:c.instructions+=2;goto B6ef14b;
case 0x6ef14d:c.instructions+=1;goto B6ef14d;
case 0x6ef14f:goto L6ef14f;
case 0x6ef155:c.instructions+=4;goto B6ef155;
case 0x6ef158:c.instructions+=3;goto B6ef158;
case 0x6ef15a:c.instructions+=2;goto B6ef15a;
case 0x6ef15b:c.instructions+=1;goto B6ef15b;
case 0x6ef15e:goto L6ef15e;
case 0x6ef162:c.instructions+=3;goto B6ef162;
case 0x6ef165:c.instructions+=2;goto B6ef165;
case 0x6ef168:c.instructions+=1;goto B6ef168;
case 0x6ef16d:goto L6ef16d;
case 0x6ef16e:c.instructions+=2;goto B6ef16e;
case 0x6ef170:c.instructions+=1;goto B6ef170;
case 0x6ef172:goto L6ef172;
case 0x6ef178:c.instructions+=4;goto B6ef178;
case 0x6ef17b:c.instructions+=3;goto B6ef17b;
case 0x6ef17d:c.instructions+=2;goto B6ef17d;
case 0x6ef17e:c.instructions+=1;goto B6ef17e;
case 0x6ef181:goto L6ef181;
case 0x6ef185:c.instructions+=9;goto B6ef185;
case 0x6ef188:c.instructions+=8;goto B6ef188;
case 0x6ef18b:c.instructions+=7;goto B6ef18b;
case 0x6ef18f:c.instructions+=6;goto B6ef18f;
case 0x6ef192:c.instructions+=5;goto B6ef192;
case 0x6ef195:c.instructions+=4;goto B6ef195;
case 0x6ef19b:c.instructions+=3;goto B6ef19b;
case 0x6ef19d:c.instructions+=2;goto B6ef19d;
case 0x6ef19e:c.instructions+=1;goto B6ef19e;
case 0x6ef1a1:goto L6ef1a1;
case 0x6ef1a5:c.instructions+=2;goto B6ef1a5;
case 0x6ef1a8:c.instructions+=1;goto B6ef1a8;
case 0x6ef1aa:goto L6ef1aa;
case 0x6ef1ad:c.instructions+=2;goto B6ef1ad;
case 0x6ef1af:c.instructions+=1;goto B6ef1af;
case 0x6ef1b1:goto L6ef1b1;
case 0x6ef1b7:c.instructions+=3;goto B6ef1b7;
case 0x6ef1b9:c.instructions+=2;goto B6ef1b9;
case 0x6ef1ba:c.instructions+=1;goto B6ef1ba;
case 0x6ef1bd:goto L6ef1bd;
case 0x6ef1c1:goto L6ef1c1;
case 0x6ef1c4:c.instructions+=2;goto B6ef1c4;
case 0x6ef1c6:c.instructions+=1;goto B6ef1c6;
case 0x6ef1c8:goto L6ef1c8;
case 0x6ef1ce:c.instructions+=3;goto B6ef1ce;
case 0x6ef1d0:c.instructions+=2;goto B6ef1d0;
case 0x6ef1d1:c.instructions+=1;goto B6ef1d1;
case 0x6ef1d4:goto L6ef1d4;
case 0x6ef1d8:goto L6ef1d8;
case 0x6ef1db:c.instructions+=5;goto B6ef1db;
case 0x6ef1de:c.instructions+=4;goto B6ef1de;
case 0x6ef1e4:c.instructions+=3;goto B6ef1e4;
case 0x6ef1e6:c.instructions+=2;goto B6ef1e6;
case 0x6ef1e7:c.instructions+=1;goto B6ef1e7;
case 0x6ef1ea:goto L6ef1ea;
case 0x6ef1ee:c.instructions+=1;goto B6ef1ee;
case 0x6ef1f1:goto L6ef1f1;
case 0x6ef1f5:c.instructions+=6;goto B6ef1f5;
case 0x6ef1f8:c.instructions+=5;goto B6ef1f8;
case 0x6ef1fe:c.instructions+=4;goto B6ef1fe;
case 0x6ef202:c.instructions+=3;goto B6ef202;
case 0x6ef204:c.instructions+=2;goto B6ef204;
case 0x6ef205:c.instructions+=1;goto B6ef205;
case 0x6ef208:goto L6ef208;
case 0x6ef20c:c.instructions+=1;goto B6ef20c;
case 0x6ef20f:goto L6ef20f;
case 0x6ef213:c.instructions+=3;goto B6ef213;
case 0x6ef216:c.instructions+=2;goto B6ef216;
case 0x6ef218:c.instructions+=1;goto B6ef218;
case 0x6ef21e:goto L6ef21e;
case 0x6ef221:c.instructions+=3;goto B6ef221;
case 0x6ef224:c.instructions+=2;goto B6ef224;
case 0x6ef226:c.instructions+=1;goto B6ef226;
case 0x6ef228:goto L6ef228;
case 0x6ef22e:c.instructions+=4;goto B6ef22e;
case 0x6ef231:c.instructions+=3;goto B6ef231;
case 0x6ef233:c.instructions+=2;goto B6ef233;
case 0x6ef234:c.instructions+=1;goto B6ef234;
case 0x6ef237:goto L6ef237;
case 0x6ef23b:c.instructions+=3;goto B6ef23b;
case 0x6ef23e:c.instructions+=2;goto B6ef23e;
case 0x6ef241:c.instructions+=1;goto B6ef241;
case 0x6ef243:goto L6ef243;
case 0x6ef244:c.instructions+=2;goto B6ef244;
case 0x6ef246:c.instructions+=1;goto B6ef246;
case 0x6ef248:goto L6ef248;
case 0x6ef24e:c.instructions+=4;goto B6ef24e;
case 0x6ef251:c.instructions+=3;goto B6ef251;
case 0x6ef253:c.instructions+=2;goto B6ef253;
case 0x6ef254:c.instructions+=1;goto B6ef254;
case 0x6ef257:goto L6ef257;
case 0x6ef25b:c.instructions+=9;goto B6ef25b;
case 0x6ef25e:c.instructions+=8;goto B6ef25e;
case 0x6ef261:c.instructions+=7;goto B6ef261;
case 0x6ef265:c.instructions+=6;goto B6ef265;
case 0x6ef268:c.instructions+=5;goto B6ef268;
case 0x6ef26b:c.instructions+=4;goto B6ef26b;
case 0x6ef271:c.instructions+=3;goto B6ef271;
case 0x6ef273:c.instructions+=2;goto B6ef273;
case 0x6ef274:c.instructions+=1;goto B6ef274;
case 0x6ef277:goto L6ef277;
case 0x6ef27b:c.instructions+=2;goto B6ef27b;
case 0x6ef27e:c.instructions+=1;goto B6ef27e;
case 0x6ef280:goto L6ef280;
case 0x6ef283:c.instructions+=2;goto B6ef283;
case 0x6ef285:c.instructions+=1;goto B6ef285;
case 0x6ef287:goto L6ef287;
case 0x6ef288:c.instructions+=1;goto B6ef288;
case 0x6ef28d:goto L6ef28d;
case 0x6ef291:c.instructions+=1;goto B6ef291;
case 0x6ef294:goto L6ef294;
case 0x6ef297:c.instructions+=2;goto B6ef297;
case 0x6ef299:c.instructions+=1;goto B6ef299;
case 0x6ef29b:goto L6ef29b;
case 0x6ef29c:c.instructions+=1;goto B6ef29c;
case 0x6ef2a1:goto L6ef2a1;
case 0x6ef2a5:c.instructions+=1;goto B6ef2a5;
case 0x6ef2a8:goto L6ef2a8;
case 0x6ef2ab:c.instructions+=5;goto B6ef2ab;
case 0x6ef2ae:c.instructions+=4;goto B6ef2ae;
case 0x6ef2b4:c.instructions+=3;goto B6ef2b4;
case 0x6ef2b6:c.instructions+=2;goto B6ef2b6;
case 0x6ef2b7:c.instructions+=1;goto B6ef2b7;
case 0x6ef2ba:goto L6ef2ba;
case 0x6ef2be:c.instructions+=1;goto B6ef2be;
case 0x6ef2c1:goto L6ef2c1;
case 0x6ef2c5:c.instructions+=6;goto B6ef2c5;
case 0x6ef2c8:c.instructions+=5;goto B6ef2c8;
case 0x6ef2ce:c.instructions+=4;goto B6ef2ce;
case 0x6ef2d2:c.instructions+=3;goto B6ef2d2;
case 0x6ef2d4:c.instructions+=2;goto B6ef2d4;
case 0x6ef2d5:c.instructions+=1;goto B6ef2d5;
case 0x6ef2d8:goto L6ef2d8;
case 0x6ef2dc:c.instructions+=1;goto B6ef2dc;
case 0x6ef2df:goto L6ef2df;
case 0x6ef2e3:goto L6ef2e3;
case 0x6ef2e6:c.instructions+=6;goto B6ef2e6;
case 0x6ef2e9:c.instructions+=5;goto B6ef2e9;
case 0x6ef2ea:c.instructions+=4;goto B6ef2ea;
case 0x6ef2ed:c.instructions+=3;goto B6ef2ed;
case 0x6ef2ef:c.instructions+=2;goto B6ef2ef;
case 0x6ef2f1:c.instructions+=1;goto B6ef2f1;
case 0x6ef2f3:goto L6ef2f3;
case 0x6ef2f7:c.instructions+=3;goto B6ef2f7;
case 0x6ef2fb:c.instructions+=2;goto B6ef2fb;
case 0x6ef2ff:c.instructions+=1;goto B6ef2ff;
case 0x6ef301:goto L6ef301;
case 0x6ef302:c.instructions+=6;goto B6ef302;
case 0x6ef306:c.instructions+=5;goto B6ef306;
case 0x6ef30a:c.instructions+=4;goto B6ef30a;
case 0x6ef30c:c.instructions+=3;goto B6ef30c;
case 0x6ef310:c.instructions+=2;goto B6ef310;
case 0x6ef311:c.instructions+=1;goto B6ef311;
case 0x6ef315:goto L6ef315;
case 0x6ef318:c.instructions+=13;goto B6ef318;
case 0x6ef31c:c.instructions+=12;goto B6ef31c;
case 0x6ef31f:c.instructions+=11;goto B6ef31f;
case 0x6ef323:c.instructions+=10;goto B6ef323;
case 0x6ef327:c.instructions+=9;goto B6ef327;
case 0x6ef32b:c.instructions+=8;goto B6ef32b;
case 0x6ef32f:c.instructions+=7;goto B6ef32f;
case 0x6ef332:c.instructions+=6;goto B6ef332;
case 0x6ef336:c.instructions+=5;goto B6ef336;
case 0x6ef339:c.instructions+=4;goto B6ef339;
case 0x6ef33d:c.instructions+=3;goto B6ef33d;
case 0x6ef340:c.instructions+=2;goto B6ef340;
case 0x6ef341:c.instructions+=1;goto B6ef341;
case 0x6ef343:goto L6ef343;
case 0x6ef347:c.instructions+=5;goto B6ef347;
case 0x6ef34b:c.instructions+=4;goto B6ef34b;
case 0x6ef34f:c.instructions+=3;goto B6ef34f;
case 0x6ef352:c.instructions+=2;goto B6ef352;
case 0x6ef355:c.instructions+=1;goto B6ef355;
case 0x6ef359:goto L6ef359;
case 0x6ef35c:c.instructions+=23;goto B6ef35c;
case 0x6ef360:c.instructions+=22;goto B6ef360;
case 0x6ef363:c.instructions+=21;goto B6ef363;
case 0x6ef366:c.instructions+=20;goto B6ef366;
case 0x6ef369:c.instructions+=19;goto B6ef369;
case 0x6ef36d:c.instructions+=18;goto B6ef36d;
case 0x6ef371:c.instructions+=17;goto B6ef371;
case 0x6ef373:c.instructions+=16;goto B6ef373;
case 0x6ef377:c.instructions+=15;goto B6ef377;
case 0x6ef37b:c.instructions+=14;goto B6ef37b;
case 0x6ef381:c.instructions+=13;goto B6ef381;
case 0x6ef384:c.instructions+=12;goto B6ef384;
case 0x6ef388:c.instructions+=11;goto B6ef388;
case 0x6ef38b:c.instructions+=10;goto B6ef38b;
case 0x6ef38e:c.instructions+=9;goto B6ef38e;
case 0x6ef392:c.instructions+=8;goto B6ef392;
case 0x6ef396:c.instructions+=7;goto B6ef396;
case 0x6ef39a:c.instructions+=6;goto B6ef39a;
case 0x6ef39c:c.instructions+=5;goto B6ef39c;
case 0x6ef3a0:c.instructions+=4;goto B6ef3a0;
case 0x6ef3a4:c.instructions+=3;goto B6ef3a4;
case 0x6ef3aa:c.instructions+=2;goto B6ef3aa;
case 0x6ef3ad:c.instructions+=1;goto B6ef3ad;
case 0x6ef3b1:goto L6ef3b1;
case 0x6ef3b4:c.instructions+=18;goto B6ef3b4;
case 0x6ef3b5:c.instructions+=17;goto B6ef3b5;
case 0x6ef3bb:c.instructions+=16;goto B6ef3bb;
case 0x6ef3be:c.instructions+=15;goto B6ef3be;
case 0x6ef3c1:c.instructions+=14;goto B6ef3c1;
case 0x6ef3c4:c.instructions+=13;goto B6ef3c4;
case 0x6ef3c7:c.instructions+=12;goto B6ef3c7;
case 0x6ef3c9:c.instructions+=11;goto B6ef3c9;
case 0x6ef3cc:c.instructions+=10;goto B6ef3cc;
case 0x6ef3d0:c.instructions+=9;goto B6ef3d0;
case 0x6ef3d3:c.instructions+=8;goto B6ef3d3;
case 0x6ef3d6:c.instructions+=7;goto B6ef3d6;
case 0x6ef3d9:c.instructions+=6;goto B6ef3d9;
case 0x6ef3db:c.instructions+=5;goto B6ef3db;
case 0x6ef3de:c.instructions+=4;goto B6ef3de;
case 0x6ef3e1:c.instructions+=3;goto B6ef3e1;
case 0x6ef3e3:c.instructions+=2;goto B6ef3e3;
case 0x6ef3e6:c.instructions+=1;goto B6ef3e6;
case 0x6ef3f0:goto L6ef3f0;
case 0x6ef3f3:c.instructions+=15;goto B6ef3f3;
case 0x6ef3f7:c.instructions+=14;goto B6ef3f7;
case 0x6ef3ff:c.instructions+=13;goto B6ef3ff;
case 0x6ef402:c.instructions+=12;goto B6ef402;
case 0x6ef405:c.instructions+=11;goto B6ef405;
case 0x6ef406:c.instructions+=10;goto B6ef406;
case 0x6ef407:c.instructions+=9;goto B6ef407;
case 0x6ef408:c.instructions+=8;goto B6ef408;
case 0x6ef40b:c.instructions+=7;goto B6ef40b;
case 0x6ef40d:c.instructions+=6;goto B6ef40d;
case 0x6ef410:c.instructions+=5;goto B6ef410;
case 0x6ef412:c.instructions+=4;goto B6ef412;
case 0x6ef418:c.instructions+=3;goto B6ef418;
case 0x6ef41a:c.instructions+=2;goto B6ef41a;
case 0x6ef41d:c.instructions+=1;goto B6ef41d;
case 0x6ef41f:goto L6ef41f;
case 0x6ef425:c.instructions+=4;goto B6ef425;
case 0x6ef429:c.instructions+=3;goto B6ef429;
case 0x6ef42d:c.instructions+=2;goto B6ef42d;
case 0x6ef431:c.instructions+=1;goto B6ef431;
case 0x6ef433:goto L6ef433;
case 0x6ef439:c.instructions+=3;goto B6ef439;
case 0x6ef43d:c.instructions+=2;goto B6ef43d;
case 0x6ef441:c.instructions+=1;goto B6ef441;
case 0x6ef445:goto L6ef445;
case 0x6ef449:c.instructions+=11;goto B6ef449;
case 0x6ef44c:c.instructions+=10;goto B6ef44c;
case 0x6ef44e:c.instructions+=9;goto B6ef44e;
case 0x6ef454:c.instructions+=8;goto B6ef454;
case 0x6ef458:c.instructions+=7;goto B6ef458;
case 0x6ef45b:c.instructions+=6;goto B6ef45b;
case 0x6ef45f:c.instructions+=5;goto B6ef45f;
case 0x6ef463:c.instructions+=4;goto B6ef463;
case 0x6ef465:c.instructions+=3;goto B6ef465;
case 0x6ef469:c.instructions+=2;goto B6ef469;
case 0x6ef46c:c.instructions+=1;goto B6ef46c;
case 0x6ef46e:goto L6ef46e;
case 0x6ef472:c.instructions+=4;goto B6ef472;
case 0x6ef475:c.instructions+=3;goto B6ef475;
case 0x6ef477:c.instructions+=2;goto B6ef477;
case 0x6ef47a:c.instructions+=1;goto B6ef47a;
case 0x6ef47c:goto L6ef47c;
case 0x6ef47f:c.instructions+=2;goto B6ef47f;
case 0x6ef480:c.instructions+=1;goto B6ef480;
case 0x6ef485:goto L6ef485;
case 0x6ef487:c.instructions+=2;goto B6ef487;
case 0x6ef48a:c.instructions+=1;goto B6ef48a;
case 0x6ef48b:goto L6ef48b;
case 0x6ef48d:c.instructions+=5;goto B6ef48d;
case 0x6ef491:c.instructions+=4;goto B6ef491;
case 0x6ef492:c.instructions+=3;goto B6ef492;
case 0x6ef494:c.instructions+=2;goto B6ef494;
case 0x6ef496:c.instructions+=1;goto B6ef496;
case 0x6ef499:goto L6ef499;
case 0x6ef49d:c.instructions+=8;goto B6ef49d;
case 0x6ef4a1:c.instructions+=7;goto B6ef4a1;
case 0x6ef4a5:c.instructions+=6;goto B6ef4a5;
case 0x6ef4a9:c.instructions+=5;goto B6ef4a9;
case 0x6ef4ad:c.instructions+=4;goto B6ef4ad;
case 0x6ef4b3:c.instructions+=3;goto B6ef4b3;
case 0x6ef4b5:c.instructions+=2;goto B6ef4b5;
case 0x6ef4b8:c.instructions+=1;goto B6ef4b8;
case 0x6ef4ba:goto L6ef4ba;
case 0x6ef4be:c.instructions+=2;goto B6ef4be;
case 0x6ef4c4:c.instructions+=1;goto B6ef4c4;
case 0x6ef4c8:goto L6ef4c8;
case 0x6ef4cd:c.instructions+=4;goto B6ef4cd;
case 0x6ef4cf:c.instructions+=3;goto B6ef4cf;
case 0x6ef4d7:c.instructions+=2;goto B6ef4d7;
case 0x6ef4db:c.instructions+=1;goto B6ef4db;
case 0x6ef4e1:goto L6ef4e1;
case 0x6ef4e5:c.instructions+=7;goto B6ef4e5;
case 0x6ef4e7:c.instructions+=6;goto B6ef4e7;
case 0x6ef4eb:c.instructions+=5;goto B6ef4eb;
case 0x6ef4ec:c.instructions+=4;goto B6ef4ec;
case 0x6ef4ed:c.instructions+=3;goto B6ef4ed;
case 0x6ef4ef:c.instructions+=2;goto B6ef4ef;
case 0x6ef4f2:c.instructions+=1;goto B6ef4f2;
case 0x6ef4f5:goto L6ef4f5;
case 0x6ef4f9:c.instructions+=4;goto B6ef4f9;
case 0x6ef4fd:c.instructions+=3;goto B6ef4fd;
case 0x6ef4ff:c.instructions+=2;goto B6ef4ff;
case 0x6ef502:c.instructions+=1;goto B6ef502;
case 0x6ef504:goto L6ef504;
case 0x6ef508:c.instructions+=4;goto B6ef508;
case 0x6ef50c:c.instructions+=3;goto B6ef50c;
case 0x6ef50e:c.instructions+=2;goto B6ef50e;
case 0x6ef511:c.instructions+=1;goto B6ef511;
case 0x6ef513:goto L6ef513;
case 0x6ef517:c.instructions+=7;goto B6ef517;
case 0x6ef51b:c.instructions+=6;goto B6ef51b;
case 0x6ef51f:c.instructions+=5;goto B6ef51f;
case 0x6ef521:c.instructions+=4;goto B6ef521;
case 0x6ef527:c.instructions+=3;goto B6ef527;
case 0x6ef529:c.instructions+=2;goto B6ef529;
case 0x6ef52c:c.instructions+=1;goto B6ef52c;
case 0x6ef52e:goto L6ef52e;
case 0x6ef530:goto L6ef530;
case 0x6ef534:c.instructions+=5;goto B6ef534;
case 0x6ef538:c.instructions+=4;goto B6ef538;
case 0x6ef53e:c.instructions+=3;goto B6ef53e;
case 0x6ef540:c.instructions+=2;goto B6ef540;
case 0x6ef543:c.instructions+=1;goto B6ef543;
case 0x6ef545:goto L6ef545;
case 0x6ef54b:goto L6ef54b;
case 0x6ef54f:c.instructions+=3;goto B6ef54f;
case 0x6ef551:c.instructions+=2;goto B6ef551;
case 0x6ef554:c.instructions+=1;goto B6ef554;
case 0x6ef556:goto L6ef556;
case 0x6ef55a:c.instructions+=2;goto B6ef55a;
case 0x6ef55e:c.instructions+=1;goto B6ef55e;
case 0x6ef560:goto L6ef560;
case 0x6ef562:goto L6ef562;
case 0x6ef566:c.instructions+=5;goto B6ef566;
case 0x6ef567:c.instructions+=4;goto B6ef567;
case 0x6ef569:c.instructions+=3;goto B6ef569;
case 0x6ef56d:c.instructions+=2;goto B6ef56d;
case 0x6ef571:c.instructions+=1;goto B6ef571;
case 0x6ef577:goto L6ef577;
case 0x6ef57b:c.instructions+=8;goto B6ef57b;
case 0x6ef57f:c.instructions+=7;goto B6ef57f;
case 0x6ef580:c.instructions+=6;goto B6ef580;
case 0x6ef581:c.instructions+=5;goto B6ef581;
case 0x6ef583:c.instructions+=4;goto B6ef583;
case 0x6ef585:c.instructions+=3;goto B6ef585;
case 0x6ef586:c.instructions+=2;goto B6ef586;
case 0x6ef589:c.instructions+=1;goto B6ef589;
case 0x6ef58c:goto L6ef58c;
case 0x6ef592:c.instructions+=4;goto B6ef592;
case 0x6ef593:c.instructions+=3;goto B6ef593;
case 0x6ef595:c.instructions+=2;goto B6ef595;
case 0x6ef598:c.instructions+=1;goto B6ef598;
case 0x6ef59a:goto L6ef59a;
case 0x6ef59e:c.instructions+=13;goto B6ef59e;
case 0x6ef5a2:c.instructions+=12;goto B6ef5a2;
case 0x6ef5a6:c.instructions+=11;goto B6ef5a6;
case 0x6ef5aa:c.instructions+=10;goto B6ef5aa;
case 0x6ef5ab:c.instructions+=9;goto B6ef5ab;
case 0x6ef5ac:c.instructions+=8;goto B6ef5ac;
case 0x6ef5ae:c.instructions+=7;goto B6ef5ae;
case 0x6ef5b0:c.instructions+=6;goto B6ef5b0;
case 0x6ef5b1:c.instructions+=5;goto B6ef5b1;
case 0x6ef5b5:c.instructions+=4;goto B6ef5b5;
case 0x6ef5b7:c.instructions+=3;goto B6ef5b7;
case 0x6ef5b9:c.instructions+=2;goto B6ef5b9;
case 0x6ef5bc:c.instructions+=1;goto B6ef5bc;
case 0x6ef5bf:goto L6ef5bf;
case 0x6ef5c3:c.instructions+=11;goto B6ef5c3;
case 0x6ef5c5:c.instructions+=10;goto B6ef5c5;
case 0x6ef5c9:c.instructions+=9;goto B6ef5c9;
case 0x6ef5cd:c.instructions+=8;goto B6ef5cd;
case 0x6ef5ce:c.instructions+=7;goto B6ef5ce;
case 0x6ef5cf:c.instructions+=6;goto B6ef5cf;
case 0x6ef5d0:c.instructions+=5;goto B6ef5d0;
case 0x6ef5d6:c.instructions+=4;goto B6ef5d6;
case 0x6ef5d8:c.instructions+=3;goto B6ef5d8;
case 0x6ef5da:c.instructions+=2;goto B6ef5da;
case 0x6ef5dd:c.instructions+=1;goto B6ef5dd;
case 0x6ef5e0:goto L6ef5e0;
case 0x6ef5e3:c.instructions+=6;goto B6ef5e3;
case 0x6ef5e4:c.instructions+=5;goto B6ef5e4;
case 0x6ef5e6:c.instructions+=4;goto B6ef5e6;
case 0x6ef5e9:c.instructions+=3;goto B6ef5e9;
case 0x6ef5eb:c.instructions+=2;goto B6ef5eb;
case 0x6ef5ed:c.instructions+=1;goto B6ef5ed;
case 0x6ef5ef:goto L6ef5ef;
case 0x6ef5f6:c.instructions+=8;goto B6ef5f6;
case 0x6ef5f9:c.instructions+=7;goto B6ef5f9;
case 0x6ef5fc:c.instructions+=6;goto B6ef5fc;
case 0x6ef5ff:c.instructions+=5;goto B6ef5ff;
case 0x6ef606:c.instructions+=4;goto B6ef606;
case 0x6ef60a:c.instructions+=3;goto B6ef60a;
case 0x6ef60b:c.instructions+=2;goto B6ef60b;
case 0x6ef60e:c.instructions+=1;goto B6ef60e;
case 0x6ef611:goto L6ef611;
case 0x6ef614:c.instructions+=4;goto B6ef614;
case 0x6ef615:c.instructions+=3;goto B6ef615;
case 0x6ef619:c.instructions+=2;goto B6ef619;
case 0x6ef61b:c.instructions+=1;goto B6ef61b;
case 0x6ef621:goto L6ef621;
case 0x6ef625:c.instructions+=5;goto B6ef625;
case 0x6ef626:c.instructions+=4;goto B6ef626;
case 0x6ef627:c.instructions+=3;goto B6ef627;
case 0x6ef628:c.instructions+=2;goto B6ef628;
case 0x6ef62a:c.instructions+=1;goto B6ef62a;
case 0x6ef62f:goto L6ef62f;
case 0x6ef632:c.instructions+=19;goto B6ef632;
case 0x6ef635:c.instructions+=18;goto B6ef635;
case 0x6ef638:c.instructions+=17;goto B6ef638;
case 0x6ef63b:c.instructions+=16;goto B6ef63b;
case 0x6ef63f:c.instructions+=15;goto B6ef63f;
case 0x6ef640:c.instructions+=14;goto B6ef640;
case 0x6ef644:c.instructions+=13;goto B6ef644;
case 0x6ef646:c.instructions+=12;goto B6ef646;
case 0x6ef64a:c.instructions+=11;goto B6ef64a;
case 0x6ef64b:c.instructions+=10;goto B6ef64b;
case 0x6ef64f:c.instructions+=9;goto B6ef64f;
case 0x6ef652:c.instructions+=8;goto B6ef652;
case 0x6ef653:c.instructions+=7;goto B6ef653;
case 0x6ef657:c.instructions+=6;goto B6ef657;
case 0x6ef65b:c.instructions+=5;goto B6ef65b;
case 0x6ef65d:c.instructions+=4;goto B6ef65d;
case 0x6ef661:c.instructions+=3;goto B6ef661;
case 0x6ef665:c.instructions+=2;goto B6ef665;
case 0x6ef668:c.instructions+=1;goto B6ef668;
case 0x6ef66d:goto L6ef66d;
case 0x6ef671:c.instructions+=7;goto B6ef671;
case 0x6ef672:c.instructions+=6;goto B6ef672;
case 0x6ef676:c.instructions+=5;goto B6ef676;
case 0x6ef677:c.instructions+=4;goto B6ef677;
case 0x6ef67b:c.instructions+=3;goto B6ef67b;
case 0x6ef67c:c.instructions+=2;goto B6ef67c;
case 0x6ef67e:c.instructions+=1;goto B6ef67e;
case 0x6ef683:goto L6ef683;
case 0x6ef686:c.instructions+=3;goto B6ef686;
case 0x6ef687:c.instructions+=2;goto B6ef687;
case 0x6ef689:c.instructions+=1;goto B6ef689;
case 0x6ef68b:goto L6ef68b;
case 0x6ef68f:c.instructions+=2;goto B6ef68f;
case 0x6ef695:c.instructions+=1;goto B6ef695;
case 0x6ef699:goto L6ef699;
case 0x6ef69a:c.instructions+=7;goto B6ef69a;
case 0x6ef69e:c.instructions+=6;goto B6ef69e;
case 0x6ef69f:c.instructions+=5;goto B6ef69f;
case 0x6ef6a3:c.instructions+=4;goto B6ef6a3;
case 0x6ef6a4:c.instructions+=3;goto B6ef6a4;
case 0x6ef6a7:c.instructions+=2;goto B6ef6a7;
case 0x6ef6a8:c.instructions+=1;goto B6ef6a8;
case 0x6ef6ad:goto L6ef6ad;
case 0x6ef6b1:c.instructions+=10;goto B6ef6b1;
case 0x6ef6b5:c.instructions+=9;goto B6ef6b5;
case 0x6ef6b9:c.instructions+=8;goto B6ef6b9;
case 0x6ef6bb:c.instructions+=7;goto B6ef6bb;
case 0x6ef6bf:c.instructions+=6;goto B6ef6bf;
case 0x6ef6c2:c.instructions+=5;goto B6ef6c2;
case 0x6ef6c5:c.instructions+=4;goto B6ef6c5;
case 0x6ef6c8:c.instructions+=3;goto B6ef6c8;
case 0x6ef6cb:c.instructions+=2;goto B6ef6cb;
case 0x6ef6ce:c.instructions+=1;goto B6ef6ce;
case 0x6ef6cf:goto L6ef6cf;
case 0x6ef6d0:c.instructions+=3;goto B6ef6d0;
case 0x6ef6d1:c.instructions+=2;goto B6ef6d1;
case 0x6ef6d4:c.instructions+=1;goto B6ef6d4;
case 0x6ef6e0:goto L6ef6e0;
case 0x6ef6e4:c.instructions+=9;goto B6ef6e4;
case 0x6ef6e7:c.instructions+=8;goto B6ef6e7;
case 0x6ef6e8:c.instructions+=7;goto B6ef6e8;
case 0x6ef6e9:c.instructions+=6;goto B6ef6e9;
case 0x6ef6eb:c.instructions+=5;goto B6ef6eb;
case 0x6ef6ee:c.instructions+=4;goto B6ef6ee;
case 0x6ef6f1:c.instructions+=3;goto B6ef6f1;
case 0x6ef6f3:c.instructions+=2;goto B6ef6f3;
case 0x6ef6f4:c.instructions+=1;goto B6ef6f4;
case 0x6ef6f6:goto L6ef6f6;
case 0x6ef6f8:c.instructions+=1;goto B6ef6f8;
case 0x6ef6fd:goto L6ef6fd;
case 0x6ef701:c.instructions+=26;goto B6ef701;
case 0x6ef704:c.instructions+=25;goto B6ef704;
case 0x6ef707:c.instructions+=24;goto B6ef707;
case 0x6ef70a:c.instructions+=23;goto B6ef70a;
case 0x6ef70d:c.instructions+=22;goto B6ef70d;
case 0x6ef710:c.instructions+=21;goto B6ef710;
case 0x6ef713:c.instructions+=20;goto B6ef713;
case 0x6ef717:c.instructions+=19;goto B6ef717;
case 0x6ef718:c.instructions+=18;goto B6ef718;
case 0x6ef71c:c.instructions+=17;goto B6ef71c;
case 0x6ef71e:c.instructions+=16;goto B6ef71e;
case 0x6ef71f:c.instructions+=15;goto B6ef71f;
case 0x6ef721:c.instructions+=14;goto B6ef721;
case 0x6ef724:c.instructions+=13;goto B6ef724;
case 0x6ef728:c.instructions+=12;goto B6ef728;
case 0x6ef72b:c.instructions+=11;goto B6ef72b;
case 0x6ef72f:c.instructions+=10;goto B6ef72f;
case 0x6ef732:c.instructions+=9;goto B6ef732;
case 0x6ef734:c.instructions+=8;goto B6ef734;
case 0x6ef737:c.instructions+=7;goto B6ef737;
case 0x6ef73b:c.instructions+=6;goto B6ef73b;
case 0x6ef73d:c.instructions+=5;goto B6ef73d;
case 0x6ef741:c.instructions+=4;goto B6ef741;
case 0x6ef744:c.instructions+=3;goto B6ef744;
case 0x6ef746:c.instructions+=2;goto B6ef746;
case 0x6ef747:c.instructions+=1;goto B6ef747;
case 0x6ef74c:goto L6ef74c;
case 0x6ef74f:c.instructions+=13;goto B6ef74f;
case 0x6ef751:c.instructions+=12;goto B6ef751;
case 0x6ef754:c.instructions+=11;goto B6ef754;
case 0x6ef757:c.instructions+=10;goto B6ef757;
case 0x6ef75b:c.instructions+=9;goto B6ef75b;
case 0x6ef75c:c.instructions+=8;goto B6ef75c;
case 0x6ef760:c.instructions+=7;goto B6ef760;
case 0x6ef761:c.instructions+=6;goto B6ef761;
case 0x6ef763:c.instructions+=5;goto B6ef763;
case 0x6ef767:c.instructions+=4;goto B6ef767;
case 0x6ef76a:c.instructions+=3;goto B6ef76a;
case 0x6ef76c:c.instructions+=2;goto B6ef76c;
case 0x6ef76d:c.instructions+=1;goto B6ef76d;
case 0x6ef772:goto L6ef772;
case 0x6ef776:c.instructions+=14;goto B6ef776;
case 0x6ef779:c.instructions+=13;goto B6ef779;
case 0x6ef77c:c.instructions+=12;goto B6ef77c;
case 0x6ef780:c.instructions+=11;goto B6ef780;
case 0x6ef784:c.instructions+=10;goto B6ef784;
case 0x6ef785:c.instructions+=9;goto B6ef785;
case 0x6ef789:c.instructions+=8;goto B6ef789;
case 0x6ef78a:c.instructions+=7;goto B6ef78a;
case 0x6ef78e:c.instructions+=6;goto B6ef78e;
case 0x6ef792:c.instructions+=5;goto B6ef792;
case 0x6ef795:c.instructions+=4;goto B6ef795;
case 0x6ef797:c.instructions+=3;goto B6ef797;
case 0x6ef798:c.instructions+=2;goto B6ef798;
case 0x6ef79a:c.instructions+=1;goto B6ef79a;
case 0x6ef79f:goto L6ef79f;
case 0x6ef7a3:c.instructions+=5;goto B6ef7a3;
case 0x6ef7a7:c.instructions+=4;goto B6ef7a7;
case 0x6ef7aa:c.instructions+=3;goto B6ef7aa;
case 0x6ef7ac:c.instructions+=2;goto B6ef7ac;
case 0x6ef7ad:c.instructions+=1;goto B6ef7ad;
case 0x6ef7b2:goto L6ef7b2;
case 0x6ef7b5:c.instructions+=6;goto B6ef7b5;
case 0x6ef7b9:c.instructions+=5;goto B6ef7b9;
case 0x6ef7bb:c.instructions+=4;goto B6ef7bb;
case 0x6ef7bd:c.instructions+=3;goto B6ef7bd;
case 0x6ef7be:c.instructions+=2;goto B6ef7be;
case 0x6ef7bf:c.instructions+=1;goto B6ef7bf;
case 0x6ef7c2:goto L6ef7c2;
case 0x6ef7c4:c.instructions+=1;goto B6ef7c4;
case 0x6ef7c6:goto L6ef7c6;
case 0x6ef7c7:c.instructions+=4;goto B6ef7c7;
case 0x6ef7c8:c.instructions+=3;goto B6ef7c8;
case 0x6ef7c9:c.instructions+=2;goto B6ef7c9;
case 0x6ef7cc:c.instructions+=1;goto B6ef7cc;
case 0x6ef7cf:goto L6ef7cf;
case 0x6ef7d2:c.instructions+=5;goto B6ef7d2;
case 0x6ef7d3:c.instructions+=4;goto B6ef7d3;
case 0x6ef7d9:c.instructions+=3;goto B6ef7d9;
case 0x6ef7db:c.instructions+=2;goto B6ef7db;
case 0x6ef7de:c.instructions+=1;goto B6ef7de;
case 0x6ef7e0:goto L6ef7e0;
case 0x6ef7e2:c.instructions+=1;goto B6ef7e2;
case 0x6ef7e7:goto L6ef7e7;
case 0x6ef7e9:c.instructions+=5;goto B6ef7e9;
case 0x6ef7ec:c.instructions+=4;goto B6ef7ec;
case 0x6ef7ef:c.instructions+=3;goto B6ef7ef;
case 0x6ef7f1:c.instructions+=2;goto B6ef7f1;
case 0x6ef7f2:c.instructions+=1;goto B6ef7f2;
case 0x6ef7f7:goto L6ef7f7;
case 0x6ef7fa:c.instructions+=6;goto B6ef7fa;
case 0x6ef7fe:c.instructions+=5;goto B6ef7fe;
case 0x6ef800:c.instructions+=4;goto B6ef800;
case 0x6ef802:c.instructions+=3;goto B6ef802;
case 0x6ef803:c.instructions+=2;goto B6ef803;
case 0x6ef804:c.instructions+=1;goto B6ef804;
case 0x6ef807:goto L6ef807;
case 0x6ef809:c.instructions+=1;goto B6ef809;
case 0x6ef80b:goto L6ef80b;
case 0x6ef80c:c.instructions+=5;goto B6ef80c;
case 0x6ef80d:c.instructions+=4;goto B6ef80d;
case 0x6ef80e:c.instructions+=3;goto B6ef80e;
case 0x6ef80f:c.instructions+=2;goto B6ef80f;
case 0x6ef812:c.instructions+=1;goto B6ef812;
case 0x6ef815:goto L6ef815;
case 0x6ef818:c.instructions+=9;goto B6ef818;
case 0x6ef81b:c.instructions+=8;goto B6ef81b;
case 0x6ef81e:c.instructions+=7;goto B6ef81e;
case 0x6ef820:c.instructions+=6;goto B6ef820;
case 0x6ef821:c.instructions+=5;goto B6ef821;
case 0x6ef822:c.instructions+=4;goto B6ef822;
case 0x6ef823:c.instructions+=3;goto B6ef823;
case 0x6ef824:c.instructions+=2;goto B6ef824;
case 0x6ef825:c.instructions+=1;goto B6ef825;
case 0x6ef82a:goto L6ef82a;
case 0x6ef82d:goto L6ef82d;
case 0x6ef82e:c.instructions+=2;goto B6ef82e;
case 0x6ef830:c.instructions+=1;goto B6ef830;
case 0x6ef835:goto L6ef835;
case 0x6ef839:c.instructions+=6;goto B6ef839;
case 0x6ef83a:c.instructions+=5;goto B6ef83a;
case 0x6ef83d:c.instructions+=4;goto B6ef83d;
case 0x6ef840:c.instructions+=3;goto B6ef840;
case 0x6ef841:c.instructions+=2;goto B6ef841;
case 0x6ef842:c.instructions+=1;goto B6ef842;
case 0x6ef847:goto L6ef847;
case 0x6ef84b:c.instructions+=15;goto B6ef84b;
case 0x6ef84f:c.instructions+=14;goto B6ef84f;
case 0x6ef853:c.instructions+=13;goto B6ef853;
case 0x6ef855:c.instructions+=12;goto B6ef855;
case 0x6ef859:c.instructions+=11;goto B6ef859;
case 0x6ef85c:c.instructions+=10;goto B6ef85c;
case 0x6ef85f:c.instructions+=9;goto B6ef85f;
case 0x6ef860:c.instructions+=8;goto B6ef860;
case 0x6ef863:c.instructions+=7;goto B6ef863;
case 0x6ef866:c.instructions+=6;goto B6ef866;
case 0x6ef867:c.instructions+=5;goto B6ef867;
case 0x6ef868:c.instructions+=4;goto B6ef868;
case 0x6ef86a:c.instructions+=3;goto B6ef86a;
case 0x6ef86b:c.instructions+=2;goto B6ef86b;
case 0x6ef86e:c.instructions+=1;goto B6ef86e;
case 0x6ef880:goto L6ef880;
case 0x6ef884:c.instructions+=9;goto B6ef884;
case 0x6ef887:c.instructions+=8;goto B6ef887;
case 0x6ef888:c.instructions+=7;goto B6ef888;
case 0x6ef889:c.instructions+=6;goto B6ef889;
case 0x6ef88b:c.instructions+=5;goto B6ef88b;
case 0x6ef88e:c.instructions+=4;goto B6ef88e;
case 0x6ef891:c.instructions+=3;goto B6ef891;
case 0x6ef893:c.instructions+=2;goto B6ef893;
case 0x6ef894:c.instructions+=1;goto B6ef894;
case 0x6ef89a:goto L6ef89a;
case 0x6ef89d:c.instructions+=2;goto B6ef89d;
case 0x6ef89f:c.instructions+=1;goto B6ef89f;
case 0x6ef8a1:goto L6ef8a1;
case 0x6ef8a3:c.instructions+=1;goto B6ef8a3;
case 0x6ef8a8:goto L6ef8a8;
case 0x6ef8ac:c.instructions+=26;goto B6ef8ac;
case 0x6ef8af:c.instructions+=25;goto B6ef8af;
case 0x6ef8b2:c.instructions+=24;goto B6ef8b2;
case 0x6ef8b5:c.instructions+=23;goto B6ef8b5;
case 0x6ef8b8:c.instructions+=22;goto B6ef8b8;
case 0x6ef8bb:c.instructions+=21;goto B6ef8bb;
case 0x6ef8be:c.instructions+=20;goto B6ef8be;
case 0x6ef8c2:c.instructions+=19;goto B6ef8c2;
case 0x6ef8c3:c.instructions+=18;goto B6ef8c3;
case 0x6ef8c7:c.instructions+=17;goto B6ef8c7;
case 0x6ef8c9:c.instructions+=16;goto B6ef8c9;
case 0x6ef8ca:c.instructions+=15;goto B6ef8ca;
case 0x6ef8cc:c.instructions+=14;goto B6ef8cc;
case 0x6ef8cf:c.instructions+=13;goto B6ef8cf;
case 0x6ef8d3:c.instructions+=12;goto B6ef8d3;
case 0x6ef8d6:c.instructions+=11;goto B6ef8d6;
case 0x6ef8da:c.instructions+=10;goto B6ef8da;
case 0x6ef8dd:c.instructions+=9;goto B6ef8dd;
case 0x6ef8df:c.instructions+=8;goto B6ef8df;
case 0x6ef8e2:c.instructions+=7;goto B6ef8e2;
case 0x6ef8e6:c.instructions+=6;goto B6ef8e6;
case 0x6ef8e8:c.instructions+=5;goto B6ef8e8;
case 0x6ef8ec:c.instructions+=4;goto B6ef8ec;
case 0x6ef8ef:c.instructions+=3;goto B6ef8ef;
case 0x6ef8f1:c.instructions+=2;goto B6ef8f1;
case 0x6ef8f2:c.instructions+=1;goto B6ef8f2;
case 0x6ef8f7:goto L6ef8f7;
case 0x6ef8fa:c.instructions+=13;goto B6ef8fa;
case 0x6ef8fc:c.instructions+=12;goto B6ef8fc;
case 0x6ef8ff:c.instructions+=11;goto B6ef8ff;
case 0x6ef902:c.instructions+=10;goto B6ef902;
case 0x6ef906:c.instructions+=9;goto B6ef906;
case 0x6ef907:c.instructions+=8;goto B6ef907;
case 0x6ef90b:c.instructions+=7;goto B6ef90b;
case 0x6ef90c:c.instructions+=6;goto B6ef90c;
case 0x6ef90e:c.instructions+=5;goto B6ef90e;
case 0x6ef912:c.instructions+=4;goto B6ef912;
case 0x6ef915:c.instructions+=3;goto B6ef915;
case 0x6ef917:c.instructions+=2;goto B6ef917;
case 0x6ef918:c.instructions+=1;goto B6ef918;
case 0x6ef91d:goto L6ef91d;
case 0x6ef921:c.instructions+=14;goto B6ef921;
case 0x6ef924:c.instructions+=13;goto B6ef924;
case 0x6ef927:c.instructions+=12;goto B6ef927;
case 0x6ef92b:c.instructions+=11;goto B6ef92b;
case 0x6ef92f:c.instructions+=10;goto B6ef92f;
case 0x6ef930:c.instructions+=9;goto B6ef930;
case 0x6ef934:c.instructions+=8;goto B6ef934;
case 0x6ef935:c.instructions+=7;goto B6ef935;
case 0x6ef939:c.instructions+=6;goto B6ef939;
case 0x6ef93d:c.instructions+=5;goto B6ef93d;
case 0x6ef940:c.instructions+=4;goto B6ef940;
case 0x6ef942:c.instructions+=3;goto B6ef942;
case 0x6ef943:c.instructions+=2;goto B6ef943;
case 0x6ef945:c.instructions+=1;goto B6ef945;
case 0x6ef94a:goto L6ef94a;
case 0x6ef94e:c.instructions+=8;goto B6ef94e;
case 0x6ef952:c.instructions+=7;goto B6ef952;
case 0x6ef956:c.instructions+=6;goto B6ef956;
case 0x6ef95a:c.instructions+=5;goto B6ef95a;
case 0x6ef95b:c.instructions+=4;goto B6ef95b;
case 0x6ef95c:c.instructions+=3;goto B6ef95c;
case 0x6ef95d:c.instructions+=2;goto B6ef95d;
case 0x6ef95f:c.instructions+=1;goto B6ef95f;
case 0x6ef964:goto L6ef964;
case 0x6ef966:c.instructions+=1;goto B6ef966;
case 0x6ef968:goto L6ef968;
case 0x6ef969:c.instructions+=2;goto B6ef969;
case 0x6ef96b:c.instructions+=1;goto B6ef96b;
case 0x6ef970:goto L6ef970;
case 0x6ef971:c.instructions+=2;goto B6ef971;
case 0x6ef973:c.instructions+=1;goto B6ef973;
case 0x6ef978:goto L6ef978;
case 0x6ef979:c.instructions+=5;goto B6ef979;
case 0x6ef97a:c.instructions+=4;goto B6ef97a;
case 0x6ef97c:c.instructions+=3;goto B6ef97c;
case 0x6ef97d:c.instructions+=2;goto B6ef97d;
case 0x6ef980:c.instructions+=1;goto B6ef980;
case 0x6ef983:goto L6ef983;
case 0x6ef984:c.instructions+=5;goto B6ef984;
case 0x6ef985:c.instructions+=4;goto B6ef985;
case 0x6ef987:c.instructions+=3;goto B6ef987;
case 0x6ef988:c.instructions+=2;goto B6ef988;
case 0x6ef98b:c.instructions+=1;goto B6ef98b;
case 0x6ef990:goto L6ef990;
case 0x6ef994:c.instructions+=5;goto B6ef994;
case 0x6ef996:c.instructions+=4;goto B6ef996;
case 0x6ef997:c.instructions+=3;goto B6ef997;
case 0x6ef999:c.instructions+=2;goto B6ef999;
case 0x6ef99e:c.instructions+=1;goto B6ef99e;
case 0x6ef9a0:goto L6ef9a0;
case 0x6ef9a5:goto L6ef9a5;
case 0x6ef9a7:goto L6ef9a7;
case 0x6ef9a8:c.instructions+=1;goto B6ef9a8;
case 0x6ef9ab:goto L6ef9ab;
case 0x6ef9ad:goto L6ef9ad;
case 0x6ef9af:goto L6ef9af;
case 0x6ef9b0:c.instructions+=1;goto B6ef9b0;
case 0x6ef9c0:goto L6ef9c0;
case 0x6ef9c2:c.instructions+=5;goto B6ef9c2;
case 0x6ef9c6:c.instructions+=4;goto B6ef9c6;
case 0x6ef9c8:c.instructions+=3;goto B6ef9c8;
case 0x6ef9cc:c.instructions+=2;goto B6ef9cc;
case 0x6ef9ce:c.instructions+=1;goto B6ef9ce;
case 0x6ef9d0:goto L6ef9d0;
case 0x6ef9d3:c.instructions+=6;goto B6ef9d3;
case 0x6ef9d6:c.instructions+=5;goto B6ef9d6;
case 0x6ef9d9:c.instructions+=4;goto B6ef9d9;
case 0x6ef9de:c.instructions+=3;goto B6ef9de;
case 0x6ef9e0:c.instructions+=2;goto B6ef9e0;
case 0x6ef9e2:c.instructions+=1;goto B6ef9e2;
case 0x6ef9e5:goto L6ef9e5;
case 0x6ef9e8:c.instructions+=9;goto B6ef9e8;
case 0x6ef9eb:c.instructions+=8;goto B6ef9eb;
case 0x6ef9ee:c.instructions+=7;goto B6ef9ee;
case 0x6ef9f3:c.instructions+=6;goto B6ef9f3;
case 0x6ef9f5:c.instructions+=5;goto B6ef9f5;
case 0x6ef9f7:c.instructions+=4;goto B6ef9f7;
case 0x6ef9f9:c.instructions+=3;goto B6ef9f9;
case 0x6ef9fb:c.instructions+=2;goto B6ef9fb;
case 0x6ef9fd:c.instructions+=1;goto B6ef9fd;
case 0x6efa00:goto L6efa00;
case 0x6efa04:c.instructions+=6;goto B6efa04;
case 0x6efa08:c.instructions+=5;goto B6efa08;
case 0x6efa0c:c.instructions+=4;goto B6efa0c;
case 0x6efa0d:c.instructions+=3;goto B6efa0d;
case 0x6efa0e:c.instructions+=2;goto B6efa0e;
case 0x6efa0f:c.instructions+=1;goto B6efa0f;
case 0x6efa14:goto L6efa14;
case 0x6efa20:goto L6efa20;
case 0x6efa24:c.instructions+=5;goto B6efa24;
case 0x6efa28:c.instructions+=4;goto B6efa28;
case 0x6efa2a:c.instructions+=3;goto B6efa2a;
case 0x6efa2b:c.instructions+=2;goto B6efa2b;
case 0x6efa2d:c.instructions+=1;goto B6efa2d;
case 0x6efa33:goto L6efa33;
case 0x6efa37:c.instructions+=8;goto B6efa37;
case 0x6efa38:c.instructions+=7;goto B6efa38;
case 0x6efa3c:c.instructions+=6;goto B6efa3c;
case 0x6efa3d:c.instructions+=5;goto B6efa3d;
case 0x6efa40:c.instructions+=4;goto B6efa40;
case 0x6efa44:c.instructions+=3;goto B6efa44;
case 0x6efa45:c.instructions+=2;goto B6efa45;
case 0x6efa49:c.instructions+=1;goto B6efa49;
case 0x6efa4b:goto L6efa4b;
case 0x6efa4d:c.instructions+=1;goto B6efa4d;
case 0x6efa4f:goto L6efa4f;
case 0x6efa52:c.instructions+=1;goto B6efa52;
case 0x6efa54:goto L6efa54;
case 0x6efa58:c.instructions+=3;goto B6efa58;
case 0x6efa5c:c.instructions+=2;goto B6efa5c;
case 0x6efa5e:c.instructions+=1;goto B6efa5e;
case 0x6efa60:goto L6efa60;
case 0x6efa62:c.instructions+=1;goto B6efa62;
case 0x6efa64:goto L6efa64;
case 0x6efa66:goto L6efa66;
case 0x6efa68:goto L6efa68;
case 0x6efa6c:c.instructions+=3;goto B6efa6c;
case 0x6efa6e:c.instructions+=2;goto B6efa6e;
case 0x6efa70:c.instructions+=1;goto B6efa70;
case 0x6efa72:goto L6efa72;
case 0x6efa75:goto L6efa75;
case 0x6efa77:c.instructions+=5;goto B6efa77;
case 0x6efa7a:c.instructions+=4;goto B6efa7a;
case 0x6efa7d:c.instructions+=3;goto B6efa7d;
case 0x6efa7e:c.instructions+=2;goto B6efa7e;
case 0x6efa80:c.instructions+=1;goto B6efa80;
case 0x6efa82:goto L6efa82;
case 0x6efa8a:goto L6efa8a;
case 0x6efa8c:c.instructions+=1;goto B6efa8c;
case 0x6efa92:goto L6efa92;
case 0x6efa96:c.instructions+=5;goto B6efa96;
case 0x6efa99:c.instructions+=4;goto B6efa99;
case 0x6efa9d:c.instructions+=3;goto B6efa9d;
case 0x6efaa0:c.instructions+=2;goto B6efaa0;
case 0x6efaa3:c.instructions+=1;goto B6efaa3;
case 0x6efaa9:goto L6efaa9;
case 0x6efaac:c.instructions+=1;goto B6efaac;
case 0x6efab2:goto L6efab2;
case 0x6efab5:c.instructions+=1;goto B6efab5;
case 0x6efabb:goto L6efabb;
case 0x6efac0:c.instructions+=6;goto B6efac0;
case 0x6efac4:c.instructions+=5;goto B6efac4;
case 0x6efac8:c.instructions+=4;goto B6efac8;
case 0x6efaca:c.instructions+=3;goto B6efaca;
case 0x6efacc:c.instructions+=2;goto B6efacc;
case 0x6efacf:c.instructions+=1;goto B6efacf;
case 0x6efad5:goto L6efad5;
case 0x6efad7:c.instructions+=2;goto B6efad7;
case 0x6efadb:c.instructions+=1;goto B6efadb;
case 0x6efae0:goto L6efae0;
case 0x6efae4:c.instructions+=3;goto B6efae4;
case 0x6efae6:c.instructions+=2;goto B6efae6;
case 0x6efae9:c.instructions+=1;goto B6efae9;
case 0x6efaef:goto L6efaef;
case 0x6efaf4:c.instructions+=1;goto B6efaf4;
case 0x6efaf7:goto L6efaf7;
case 0x6efafa:c.instructions+=38;goto B6efafa;
case 0x6efafe:c.instructions+=37;goto B6efafe;
case 0x6efb01:c.instructions+=36;goto B6efb01;
case 0x6efb04:c.instructions+=35;goto B6efb04;
case 0x6efb08:c.instructions+=34;goto B6efb08;
case 0x6efb0b:c.instructions+=33;goto B6efb0b;
case 0x6efb0e:c.instructions+=32;goto B6efb0e;
case 0x6efb11:c.instructions+=31;goto B6efb11;
case 0x6efb14:c.instructions+=30;goto B6efb14;
case 0x6efb17:c.instructions+=29;goto B6efb17;
case 0x6efb1a:c.instructions+=28;goto B6efb1a;
case 0x6efb1d:c.instructions+=27;goto B6efb1d;
case 0x6efb20:c.instructions+=26;goto B6efb20;
case 0x6efb23:c.instructions+=25;goto B6efb23;
case 0x6efb26:c.instructions+=24;goto B6efb26;
case 0x6efb2a:c.instructions+=23;goto B6efb2a;
case 0x6efb2e:c.instructions+=22;goto B6efb2e;
case 0x6efb32:c.instructions+=21;goto B6efb32;
case 0x6efb35:c.instructions+=20;goto B6efb35;
case 0x6efb38:c.instructions+=19;goto B6efb38;
case 0x6efb3b:c.instructions+=18;goto B6efb3b;
case 0x6efb3e:c.instructions+=17;goto B6efb3e;
case 0x6efb42:c.instructions+=16;goto B6efb42;
case 0x6efb46:c.instructions+=15;goto B6efb46;
case 0x6efb4a:c.instructions+=14;goto B6efb4a;
case 0x6efb4d:c.instructions+=13;goto B6efb4d;
case 0x6efb50:c.instructions+=12;goto B6efb50;
case 0x6efb53:c.instructions+=11;goto B6efb53;
case 0x6efb56:c.instructions+=10;goto B6efb56;
case 0x6efb5a:c.instructions+=9;goto B6efb5a;
case 0x6efb5e:c.instructions+=8;goto B6efb5e;
case 0x6efb62:c.instructions+=7;goto B6efb62;
case 0x6efb64:c.instructions+=6;goto B6efb64;
case 0x6efb68:c.instructions+=5;goto B6efb68;
case 0x6efb6b:c.instructions+=4;goto B6efb6b;
case 0x6efb6e:c.instructions+=3;goto B6efb6e;
case 0x6efb71:c.instructions+=2;goto B6efb71;
case 0x6efb74:c.instructions+=1;goto B6efb74;
case 0x6efb76:goto L6efb76;
case 0x6efb78:goto L6efb78;
case 0x6efb7a:c.instructions+=1;goto B6efb7a;
case 0x6efb7c:goto L6efb7c;
case 0x6efb80:goto L6efb80;
case 0x6efb83:c.instructions+=11;goto B6efb83;
case 0x6efb87:c.instructions+=10;goto B6efb87;
case 0x6efb8a:c.instructions+=9;goto B6efb8a;
case 0x6efb8d:c.instructions+=8;goto B6efb8d;
case 0x6efb91:c.instructions+=7;goto B6efb91;
case 0x6efb92:c.instructions+=6;goto B6efb92;
case 0x6efb94:c.instructions+=5;goto B6efb94;
case 0x6efb97:c.instructions+=4;goto B6efb97;
case 0x6efb9b:c.instructions+=3;goto B6efb9b;
case 0x6efb9e:c.instructions+=2;goto B6efb9e;
case 0x6efba2:c.instructions+=1;goto B6efba2;
case 0x6efba4:goto L6efba4;
case 0x6efba8:c.instructions+=1;goto B6efba8;
case 0x6efbae:goto L6efbae;
case 0x6efbaf:c.instructions+=4;goto B6efbaf;
case 0x6efbb0:c.instructions+=3;goto B6efbb0;
case 0x6efbb1:c.instructions+=2;goto B6efbb1;
case 0x6efbb2:c.instructions+=1;goto B6efbb2;
case 0x6efbb5:goto L6efbb5;
case 0x6efbba:c.instructions+=7;goto B6efbba;
case 0x6efbbe:c.instructions+=6;goto B6efbbe;
case 0x6efbc2:c.instructions+=5;goto B6efbc2;
case 0x6efbc4:c.instructions+=4;goto B6efbc4;
case 0x6efbc6:c.instructions+=3;goto B6efbc6;
case 0x6efbc8:c.instructions+=2;goto B6efbc8;
case 0x6efbca:c.instructions+=1;goto B6efbca;
case 0x6efbd0:goto L6efbd0;
case 0x6efbd2:c.instructions+=1;goto B6efbd2;
case 0x6efbd6:goto L6efbd6;
case 0x6efbda:c.instructions+=3;goto B6efbda;
case 0x6efbdc:c.instructions+=2;goto B6efbdc;
case 0x6efbdf:c.instructions+=1;goto B6efbdf;
case 0x6efbe5:goto L6efbe5;
case 0x6efbea:c.instructions+=1;goto B6efbea;
case 0x6efbed:goto L6efbed;
case 0x6efbf0:c.instructions+=38;goto B6efbf0;
case 0x6efbf4:c.instructions+=37;goto B6efbf4;
case 0x6efbf5:c.instructions+=36;goto B6efbf5;
case 0x6efbf6:c.instructions+=35;goto B6efbf6;
case 0x6efbfa:c.instructions+=34;goto B6efbfa;
case 0x6efbfb:c.instructions+=33;goto B6efbfb;
case 0x6efbfe:c.instructions+=32;goto B6efbfe;
case 0x6efbff:c.instructions+=31;goto B6efbff;
case 0x6efc02:c.instructions+=30;goto B6efc02;
case 0x6efc05:c.instructions+=29;goto B6efc05;
case 0x6efc08:c.instructions+=28;goto B6efc08;
case 0x6efc0b:c.instructions+=27;goto B6efc0b;
case 0x6efc0e:c.instructions+=26;goto B6efc0e;
case 0x6efc11:c.instructions+=25;goto B6efc11;
case 0x6efc14:c.instructions+=24;goto B6efc14;
case 0x6efc18:c.instructions+=23;goto B6efc18;
case 0x6efc1c:c.instructions+=22;goto B6efc1c;
case 0x6efc20:c.instructions+=21;goto B6efc20;
case 0x6efc23:c.instructions+=20;goto B6efc23;
case 0x6efc26:c.instructions+=19;goto B6efc26;
case 0x6efc29:c.instructions+=18;goto B6efc29;
case 0x6efc2c:c.instructions+=17;goto B6efc2c;
case 0x6efc30:c.instructions+=16;goto B6efc30;
case 0x6efc34:c.instructions+=15;goto B6efc34;
case 0x6efc38:c.instructions+=14;goto B6efc38;
case 0x6efc3b:c.instructions+=13;goto B6efc3b;
case 0x6efc3e:c.instructions+=12;goto B6efc3e;
case 0x6efc41:c.instructions+=11;goto B6efc41;
case 0x6efc44:c.instructions+=10;goto B6efc44;
case 0x6efc48:c.instructions+=9;goto B6efc48;
case 0x6efc4c:c.instructions+=8;goto B6efc4c;
case 0x6efc50:c.instructions+=7;goto B6efc50;
case 0x6efc52:c.instructions+=6;goto B6efc52;
case 0x6efc56:c.instructions+=5;goto B6efc56;
case 0x6efc59:c.instructions+=4;goto B6efc59;
case 0x6efc5c:c.instructions+=3;goto B6efc5c;
case 0x6efc5f:c.instructions+=2;goto B6efc5f;
case 0x6efc62:c.instructions+=1;goto B6efc62;
case 0x6efc64:goto L6efc64;
case 0x6efc66:goto L6efc66;
case 0x6efc68:c.instructions+=1;goto B6efc68;
case 0x6efc6a:goto L6efc6a;
case 0x6efc70:goto L6efc70;
case 0x6efc73:c.instructions+=11;goto B6efc73;
case 0x6efc77:c.instructions+=10;goto B6efc77;
case 0x6efc78:c.instructions+=9;goto B6efc78;
case 0x6efc7b:c.instructions+=8;goto B6efc7b;
case 0x6efc7f:c.instructions+=7;goto B6efc7f;
case 0x6efc80:c.instructions+=6;goto B6efc80;
case 0x6efc82:c.instructions+=5;goto B6efc82;
case 0x6efc85:c.instructions+=4;goto B6efc85;
case 0x6efc89:c.instructions+=3;goto B6efc89;
case 0x6efc8c:c.instructions+=2;goto B6efc8c;
case 0x6efc90:c.instructions+=1;goto B6efc90;
case 0x6efc92:goto L6efc92;
case 0x6efc96:c.instructions+=1;goto B6efc96;
case 0x6efc9c:goto L6efc9c;
case 0x6efc9d:c.instructions+=4;goto B6efc9d;
case 0x6efc9e:c.instructions+=3;goto B6efc9e;
case 0x6efc9f:c.instructions+=2;goto B6efc9f;
case 0x6efca0:c.instructions+=1;goto B6efca0;
case 0x6efca3:goto L6efca3;
case 0x6efca7:c.instructions+=9;goto B6efca7;
case 0x6efca8:c.instructions+=8;goto B6efca8;
case 0x6efcaa:c.instructions+=7;goto B6efcaa;
case 0x6efcaf:c.instructions+=6;goto B6efcaf;
case 0x6efcb1:c.instructions+=5;goto B6efcb1;
case 0x6efcb5:c.instructions+=4;goto B6efcb5;
case 0x6efcb8:c.instructions+=3;goto B6efcb8;
case 0x6efcbc:c.instructions+=2;goto B6efcbc;
case 0x6efcbf:c.instructions+=1;goto B6efcbf;
case 0x6efcc5:goto L6efcc5;
case 0x6efcc7:c.instructions+=1;goto B6efcc7;
case 0x6efccd:goto L6efccd;
case 0x6efcd0:c.instructions+=4;goto B6efcd0;
case 0x6efcd2:c.instructions+=3;goto B6efcd2;
case 0x6efcd6:c.instructions+=2;goto B6efcd6;
case 0x6efcda:c.instructions+=1;goto B6efcda;
case 0x6efce0:goto L6efce0;
case 0x6efce4:c.instructions+=3;goto B6efce4;
case 0x6efce6:c.instructions+=2;goto B6efce6;
case 0x6efce8:c.instructions+=1;goto B6efce8;
case 0x6efcea:goto L6efcea;
case 0x6efcf0:goto L6efcf0;
case 0x6efcf2:c.instructions+=24;goto B6efcf2;
case 0x6efcf4:c.instructions+=23;goto B6efcf4;
case 0x6efcf7:c.instructions+=22;goto B6efcf7;
case 0x6efcfa:c.instructions+=21;goto B6efcfa;
case 0x6efcfe:c.instructions+=20;goto B6efcfe;
case 0x6efd01:c.instructions+=19;goto B6efd01;
case 0x6efd04:c.instructions+=18;goto B6efd04;
case 0x6efd08:c.instructions+=17;goto B6efd08;
case 0x6efd0b:c.instructions+=16;goto B6efd0b;
case 0x6efd0e:c.instructions+=15;goto B6efd0e;
case 0x6efd12:c.instructions+=14;goto B6efd12;
case 0x6efd13:c.instructions+=13;goto B6efd13;
case 0x6efd14:c.instructions+=12;goto B6efd14;
case 0x6efd18:c.instructions+=11;goto B6efd18;
case 0x6efd19:c.instructions+=10;goto B6efd19;
case 0x6efd1c:c.instructions+=9;goto B6efd1c;
case 0x6efd1e:c.instructions+=8;goto B6efd1e;
case 0x6efd21:c.instructions+=7;goto B6efd21;
case 0x6efd25:c.instructions+=6;goto B6efd25;
case 0x6efd29:c.instructions+=5;goto B6efd29;
case 0x6efd2c:c.instructions+=4;goto B6efd2c;
case 0x6efd30:c.instructions+=3;goto B6efd30;
case 0x6efd33:c.instructions+=2;goto B6efd33;
case 0x6efd37:c.instructions+=1;goto B6efd37;
case 0x6efd39:goto L6efd39;
case 0x6efd3d:goto L6efd3d;
case 0x6efd3f:c.instructions+=1;goto B6efd3f;
case 0x6efd41:goto L6efd41;
case 0x6efd43:c.instructions+=9;goto B6efd43;
case 0x6efd44:c.instructions+=8;goto B6efd44;
case 0x6efd47:c.instructions+=7;goto B6efd47;
case 0x6efd4a:c.instructions+=6;goto B6efd4a;
case 0x6efd4e:c.instructions+=5;goto B6efd4e;
case 0x6efd52:c.instructions+=4;goto B6efd52;
case 0x6efd55:c.instructions+=3;goto B6efd55;
case 0x6efd58:c.instructions+=2;goto B6efd58;
case 0x6efd5a:c.instructions+=1;goto B6efd5a;
case 0x6efd5d:goto L6efd5d;
case 0x6efd61:c.instructions+=1;goto B6efd61;
case 0x6efd67:goto L6efd67;
case 0x6efd68:c.instructions+=4;goto B6efd68;
case 0x6efd69:c.instructions+=3;goto B6efd69;
case 0x6efd6a:c.instructions+=2;goto B6efd6a;
case 0x6efd6b:c.instructions+=1;goto B6efd6b;
case 0x6efd6e:goto L6efd6e;
case 0x6efd70:c.instructions+=1;goto B6efd70;
case 0x6efd76:goto L6efd76;
case 0x6efd78:c.instructions+=4;goto B6efd78;
case 0x6efd7b:c.instructions+=3;goto B6efd7b;
case 0x6efd7d:c.instructions+=2;goto B6efd7d;
case 0x6efd81:c.instructions+=1;goto B6efd81;
case 0x6efd85:goto L6efd85;
case 0x6efd89:c.instructions+=3;goto B6efd89;
case 0x6efd8b:c.instructions+=2;goto B6efd8b;
case 0x6efd8d:c.instructions+=1;goto B6efd8d;
case 0x6efd8f:goto L6efd8f;
case 0x6efd91:c.instructions+=13;goto B6efd91;
case 0x6efd94:c.instructions+=12;goto B6efd94;
case 0x6efd97:c.instructions+=11;goto B6efd97;
case 0x6efd9b:c.instructions+=10;goto B6efd9b;
case 0x6efda0:c.instructions+=9;goto B6efda0;
case 0x6efda1:c.instructions+=8;goto B6efda1;
case 0x6efda5:c.instructions+=7;goto B6efda5;
case 0x6efda8:c.instructions+=6;goto B6efda8;
case 0x6efdaa:c.instructions+=5;goto B6efdaa;
case 0x6efdad:c.instructions+=4;goto B6efdad;
case 0x6efdaf:c.instructions+=3;goto B6efdaf;
case 0x6efdb2:c.instructions+=2;goto B6efdb2;
case 0x6efdb4:c.instructions+=1;goto B6efdb4;
case 0x6efdb6:goto L6efdb6;
case 0x6efdb8:c.instructions+=24;goto B6efdb8;
case 0x6efdba:c.instructions+=23;goto B6efdba;
case 0x6efdbd:c.instructions+=22;goto B6efdbd;
case 0x6efdc0:c.instructions+=21;goto B6efdc0;
case 0x6efdc4:c.instructions+=20;goto B6efdc4;
case 0x6efdc7:c.instructions+=19;goto B6efdc7;
case 0x6efdca:c.instructions+=18;goto B6efdca;
case 0x6efdce:c.instructions+=17;goto B6efdce;
case 0x6efdd1:c.instructions+=16;goto B6efdd1;
case 0x6efdd4:c.instructions+=15;goto B6efdd4;
case 0x6efdd8:c.instructions+=14;goto B6efdd8;
case 0x6efdd9:c.instructions+=13;goto B6efdd9;
case 0x6efdda:c.instructions+=12;goto B6efdda;
case 0x6efdde:c.instructions+=11;goto B6efdde;
case 0x6efddf:c.instructions+=10;goto B6efddf;
case 0x6efde2:c.instructions+=9;goto B6efde2;
case 0x6efde4:c.instructions+=8;goto B6efde4;
case 0x6efde7:c.instructions+=7;goto B6efde7;
case 0x6efdeb:c.instructions+=6;goto B6efdeb;
case 0x6efdef:c.instructions+=5;goto B6efdef;
case 0x6efdf2:c.instructions+=4;goto B6efdf2;
case 0x6efdf6:c.instructions+=3;goto B6efdf6;
case 0x6efdf9:c.instructions+=2;goto B6efdf9;
case 0x6efdfd:c.instructions+=1;goto B6efdfd;
case 0x6efdff:goto L6efdff;
case 0x6efe03:goto L6efe03;
case 0x6efe05:c.instructions+=1;goto B6efe05;
case 0x6efe07:goto L6efe07;
case 0x6efe09:c.instructions+=9;goto B6efe09;
case 0x6efe0a:c.instructions+=8;goto B6efe0a;
case 0x6efe0d:c.instructions+=7;goto B6efe0d;
case 0x6efe10:c.instructions+=6;goto B6efe10;
case 0x6efe14:c.instructions+=5;goto B6efe14;
case 0x6efe18:c.instructions+=4;goto B6efe18;
case 0x6efe1b:c.instructions+=3;goto B6efe1b;
case 0x6efe1e:c.instructions+=2;goto B6efe1e;
case 0x6efe20:c.instructions+=1;goto B6efe20;
case 0x6efe23:goto L6efe23;
case 0x6efe27:c.instructions+=1;goto B6efe27;
case 0x6efe2d:goto L6efe2d;
case 0x6efe2e:c.instructions+=2;goto B6efe2e;
case 0x6efe2f:c.instructions+=1;goto B6efe2f;
case 0x6efe30:goto L6efe30;
case 0x6efe31:c.instructions+=1;goto B6efe31;
case 0x6efe40:goto L6efe40;
case 0x6efe43:c.instructions+=8;goto B6efe43;
case 0x6efe44:c.instructions+=7;goto B6efe44;
case 0x6efe48:c.instructions+=6;goto B6efe48;
case 0x6efe49:c.instructions+=5;goto B6efe49;
case 0x6efe4b:c.instructions+=4;goto B6efe4b;
case 0x6efe4f:c.instructions+=3;goto B6efe4f;
case 0x6efe51:c.instructions+=2;goto B6efe51;
case 0x6efe55:c.instructions+=1;goto B6efe55;
case 0x6efe5b:goto L6efe5b;
case 0x6efe5f:c.instructions+=14;goto B6efe5f;
case 0x6efe62:c.instructions+=13;goto B6efe62;
case 0x6efe66:c.instructions+=12;goto B6efe66;
case 0x6efe6a:c.instructions+=11;goto B6efe6a;
case 0x6efe6b:c.instructions+=10;goto B6efe6b;
case 0x6efe6f:c.instructions+=9;goto B6efe6f;
case 0x6efe70:c.instructions+=8;goto B6efe70;
case 0x6efe72:c.instructions+=7;goto B6efe72;
case 0x6efe74:c.instructions+=6;goto B6efe74;
case 0x6efe75:c.instructions+=5;goto B6efe75;
case 0x6efe79:c.instructions+=4;goto B6efe79;
case 0x6efe7b:c.instructions+=3;goto B6efe7b;
case 0x6efe7f:c.instructions+=2;goto B6efe7f;
case 0x6efe83:c.instructions+=1;goto B6efe83;
case 0x6efe85:goto L6efe85;
case 0x6efe88:c.instructions+=1;goto B6efe88;
case 0x6efe8a:goto L6efe8a;
case 0x6efe8c:c.instructions+=1;goto B6efe8c;
case 0x6efe8e:goto L6efe8e;
case 0x6efe90:c.instructions+=4;goto B6efe90;
case 0x6efe92:c.instructions+=3;goto B6efe92;
case 0x6efe94:c.instructions+=2;goto B6efe94;
case 0x6efe98:c.instructions+=1;goto B6efe98;
case 0x6efe9a:goto L6efe9a;
case 0x6efe9e:c.instructions+=1;goto B6efe9e;
case 0x6efea0:goto L6efea0;
case 0x6efea2:c.instructions+=3;goto B6efea2;
case 0x6efea6:c.instructions+=2;goto B6efea6;
case 0x6efeaa:c.instructions+=1;goto B6efeaa;
case 0x6efeac:goto L6efeac;
case 0x6efeb0:c.instructions+=2;goto B6efeb0;
case 0x6efeb3:c.instructions+=1;goto B6efeb3;
case 0x6efeb5:goto L6efeb5;
case 0x6efeb8:c.instructions+=5;goto B6efeb8;
case 0x6efeba:c.instructions+=4;goto B6efeba;
case 0x6efebb:c.instructions+=3;goto B6efebb;
case 0x6efebe:c.instructions+=2;goto B6efebe;
case 0x6efebf:c.instructions+=1;goto B6efebf;
case 0x6efec1:goto L6efec1;
case 0x6efec5:c.instructions+=1;goto B6efec5;
case 0x6efec9:goto L6efec9;
case 0x6efecd:c.instructions+=4;goto B6efecd;
case 0x6efece:c.instructions+=3;goto B6efece;
case 0x6efed0:c.instructions+=2;goto B6efed0;
case 0x6efed4:c.instructions+=1;goto B6efed4;
case 0x6efed6:goto L6efed6;
case 0x6efed8:goto L6efed8;
case 0x6efeda:c.instructions+=3;goto B6efeda;
case 0x6efedc:c.instructions+=2;goto B6efedc;
case 0x6efede:c.instructions+=1;goto B6efede;
case 0x6efee0:goto L6efee0;
case 0x6efee2:c.instructions+=3;goto B6efee2;
case 0x6efee6:c.instructions+=2;goto B6efee6;
case 0x6efeea:c.instructions+=1;goto B6efeea;
case 0x6efeec:goto L6efeec;
case 0x6efef0:c.instructions+=2;goto B6efef0;
case 0x6efef3:c.instructions+=1;goto B6efef3;
case 0x6efef5:goto L6efef5;
case 0x6efef8:c.instructions+=5;goto B6efef8;
case 0x6efefa:c.instructions+=4;goto B6efefa;
case 0x6efefd:c.instructions+=3;goto B6efefd;
case 0x6eff00:c.instructions+=2;goto B6eff00;
case 0x6eff01:c.instructions+=1;goto B6eff01;
case 0x6eff03:goto L6eff03;
case 0x6eff07:goto L6eff07;
case 0x6eff08:c.instructions+=2;goto B6eff08;
case 0x6eff0a:c.instructions+=1;goto B6eff0a;
case 0x6eff0c:goto L6eff0c;
case 0x6eff0e:goto L6eff0e;
case 0x6eff10:c.instructions+=1;goto B6eff10;
case 0x6eff16:goto L6eff16;
case 0x6eff1a:c.instructions+=6;goto B6eff1a;
case 0x6eff1d:c.instructions+=5;goto B6eff1d;
case 0x6eff20:c.instructions+=4;goto B6eff20;
case 0x6eff24:c.instructions+=3;goto B6eff24;
case 0x6eff27:c.instructions+=2;goto B6eff27;
case 0x6eff29:c.instructions+=1;goto B6eff29;
case 0x6eff2f:goto L6eff2f;
case 0x6eff31:c.instructions+=1;goto B6eff31;
case 0x6eff37:goto L6eff37;
case 0x6eff39:c.instructions+=1;goto B6eff39;
case 0x6eff3f:goto L6eff3f;
case 0x6eff42:c.instructions+=3;goto B6eff42;
case 0x6eff44:c.instructions+=2;goto B6eff44;
case 0x6eff47:c.instructions+=1;goto B6eff47;
case 0x6eff4d:goto L6eff4d;
case 0x6eff4f:c.instructions+=7;goto B6eff4f;
case 0x6eff53:c.instructions+=6;goto B6eff53;
case 0x6eff57:c.instructions+=5;goto B6eff57;
case 0x6eff5b:c.instructions+=4;goto B6eff5b;
case 0x6eff5d:c.instructions+=3;goto B6eff5d;
case 0x6eff5f:c.instructions+=2;goto B6eff5f;
case 0x6eff63:c.instructions+=1;goto B6eff63;
case 0x6eff69:goto L6eff69;
case 0x6eff70:c.instructions+=6;goto B6eff70;
case 0x6eff74:c.instructions+=5;goto B6eff74;
case 0x6eff78:c.instructions+=4;goto B6eff78;
case 0x6eff7a:c.instructions+=3;goto B6eff7a;
case 0x6eff7d:c.instructions+=2;goto B6eff7d;
case 0x6eff81:c.instructions+=1;goto B6eff81;
case 0x6eff87:goto L6eff87;
case 0x6eff8b:c.instructions+=36;goto B6eff8b;
case 0x6eff90:c.instructions+=35;goto B6eff90;
case 0x6eff93:c.instructions+=34;goto B6eff93;
case 0x6eff96:c.instructions+=33;goto B6eff96;
case 0x6eff9a:c.instructions+=32;goto B6eff9a;
case 0x6eff9d:c.instructions+=31;goto B6eff9d;
case 0x6effa0:c.instructions+=30;goto B6effa0;
case 0x6effa4:c.instructions+=29;goto B6effa4;
case 0x6effa7:c.instructions+=28;goto B6effa7;
case 0x6effaa:c.instructions+=27;goto B6effaa;
case 0x6effad:c.instructions+=26;goto B6effad;
case 0x6effb0:c.instructions+=25;goto B6effb0;
case 0x6effb3:c.instructions+=24;goto B6effb3;
case 0x6effb6:c.instructions+=23;goto B6effb6;
case 0x6effb9:c.instructions+=22;goto B6effb9;
case 0x6effbc:c.instructions+=21;goto B6effbc;
case 0x6effbf:c.instructions+=20;goto B6effbf;
case 0x6effc2:c.instructions+=19;goto B6effc2;
case 0x6effc6:c.instructions+=18;goto B6effc6;
case 0x6effc9:c.instructions+=17;goto B6effc9;
case 0x6effcb:c.instructions+=16;goto B6effcb;
case 0x6effce:c.instructions+=15;goto B6effce;
case 0x6effd1:c.instructions+=14;goto B6effd1;
case 0x6effd5:c.instructions+=13;goto B6effd5;
case 0x6effd9:c.instructions+=12;goto B6effd9;
case 0x6effdd:c.instructions+=11;goto B6effdd;
case 0x6effe0:c.instructions+=10;goto B6effe0;
case 0x6effe3:c.instructions+=9;goto B6effe3;
case 0x6effe7:c.instructions+=8;goto B6effe7;
case 0x6effea:c.instructions+=7;goto B6effea;
case 0x6effed:c.instructions+=6;goto B6effed;
case 0x6efff1:c.instructions+=5;goto B6efff1;
case 0x6efff5:c.instructions+=4;goto B6efff5;
case 0x6efff9:c.instructions+=3;goto B6efff9;
case 0x6efffc:c.instructions+=2;goto B6efffc;
case 0x6effff:c.instructions+=1;goto B6effff;
default:missing_instruction(c.pc);}
B6ef002:L6ef002:{c.instructions+=6;NFSU2_TR(0x6ef002);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ef003:{NFSU2_TR(0x6ef003);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ef004:{NFSU2_TR(0x6ef004);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ef005:{NFSU2_TR(0x6ef005);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ef006:{NFSU2_TR(0x6ef006);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ef009:{NFSU2_TR(0x6ef009);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ef00c:L6ef00c:{c.instructions+=12;NFSU2_TR(0x6ef00c);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ef010:{NFSU2_TR(0x6ef010);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6ef012:{NFSU2_TR(0x6ef012);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ef016:{NFSU2_TR(0x6ef016);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef019:{NFSU2_TR(0x6ef019);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef01c:{NFSU2_TR(0x6ef01c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef01f:{NFSU2_TR(0x6ef01f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ef020:{NFSU2_TR(0x6ef020);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ef021:{NFSU2_TR(0x6ef021);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ef022:{NFSU2_TR(0x6ef022);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ef023:{NFSU2_TR(0x6ef023);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ef026:{NFSU2_TR(0x6ef026);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ef030:L6ef030:{c.instructions+=5;NFSU2_TR(0x6ef030);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ef034:{NFSU2_TR(0x6ef034);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef035:{NFSU2_TR(0x6ef035);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef037:{NFSU2_TR(0x6ef037);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef039:{NFSU2_TR(0x6ef039);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ef03eull));
TAIL_STATIC(0x6eef50u,6ee);
}
B6ef03e:L6ef03e:{c.instructions+=1;NFSU2_TR(0x6ef03e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ef050:L6ef050:{c.instructions+=19;NFSU2_TR(0x6ef050);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ef053:{NFSU2_TR(0x6ef053);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ef056:{NFSU2_TR(0x6ef056);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6ef059:{NFSU2_TR(0x6ef059);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ef05d:{NFSU2_TR(0x6ef05d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef05e:{NFSU2_TR(0x6ef05e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ef061:{NFSU2_TR(0x6ef061);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6ef065:{NFSU2_TR(0x6ef065);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ef067:{NFSU2_TR(0x6ef067);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B6ef068:{NFSU2_TR(0x6ef068);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef06c:{NFSU2_TR(0x6ef06c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6ef070:{NFSU2_TR(0x6ef070);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ef074:{NFSU2_TR(0x6ef074);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B6ef077:{NFSU2_TR(0x6ef077);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B6ef078:{NFSU2_TR(0x6ef078);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef07c:{NFSU2_TR(0x6ef07c);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ef080:{NFSU2_TR(0x6ef080);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ef084:{NFSU2_TR(0x6ef084);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ef087:{NFSU2_TR(0x6ef087);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ef08cull));
TAIL_STATIC(0x6eef50u,6ee);
}
B6ef08c:L6ef08c:{c.instructions+=1;NFSU2_TR(0x6ef08c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ef090:L6ef090:{c.instructions+=3;NFSU2_TR(0x6ef090);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef091:{NFSU2_TR(0x6ef091);
__builtin_memmove((R+24),(R+4),4);
}
B6ef093:{NFSU2_TR(0x6ef093);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ef098ull));
TAIL_STATIC(0x6eebd0u,6ee);
}
B6ef098:L6ef098:{c.instructions+=2;NFSU2_TR(0x6ef098);
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
B6ef09d:{NFSU2_TR(0x6ef09d);
if(r1(R+518)){{goto L6ef0ae;}}
}
B6ef09f:L6ef09f:{c.instructions+=3;NFSU2_TR(0x6ef09f);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef0a4:{NFSU2_TR(0x6ef0a4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef0a5:{NFSU2_TR(0x6ef0a5);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ef0abull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6ef0ab:L6ef0ab:{c.instructions+=1;NFSU2_TR(0x6ef0ab);
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
B6ef0ae:L6ef0ae:{c.instructions+=3;NFSU2_TR(0x6ef0ae);
__builtin_memmove((R+0),(R+24),4);
}
B6ef0b0:{NFSU2_TR(0x6ef0b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ef0b1:{NFSU2_TR(0x6ef0b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ef0c0:L6ef0c0:{c.instructions+=9;NFSU2_TR(0x6ef0c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B6ef0c3:{NFSU2_TR(0x6ef0c3);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ef0c7:{NFSU2_TR(0x6ef0c7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef0c8:{NFSU2_TR(0x6ef0c8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6ef0ce:{NFSU2_TR(0x6ef0ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef0d2:{NFSU2_TR(0x6ef0d2);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ef0d6:{NFSU2_TR(0x6ef0d6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6ef0d8:{NFSU2_TR(0x6ef0d8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ef0db:{NFSU2_TR(0x6ef0db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ef0f5;}}
}
B6ef0dd:L6ef0dd:{c.instructions+=6;NFSU2_TR(0x6ef0dd);
{u32 ea_=u32(u32(8133180u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ef0e3:{NFSU2_TR(0x6ef0e3);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ef0e7:{NFSU2_TR(0x6ef0e7);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ef0eb:{NFSU2_TR(0x6ef0eb);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B6ef0ef:{NFSU2_TR(0x6ef0ef);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ef0f3:{NFSU2_TR(0x6ef0f3);
{goto L6ef10b;}
}
B6ef0f5:L6ef0f5:{c.instructions+=5;NFSU2_TR(0x6ef0f5);
{u32 ea_=u32(u32(8133180u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ef0fb:{NFSU2_TR(0x6ef0fb);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ef0ff:{NFSU2_TR(0x6ef0ff);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ef103:{NFSU2_TR(0x6ef103);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B6ef107:{NFSU2_TR(0x6ef107);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ef10b:L6ef10b:{c.instructions+=3;NFSU2_TR(0x6ef10b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6ef10d:{NFSU2_TR(0x6ef10d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef111:{NFSU2_TR(0x6ef111);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ef119;}}
}
B6ef113:L6ef113:{c.instructions+=2;NFSU2_TR(0x6ef113);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6ef115:{NFSU2_TR(0x6ef115);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef119:L6ef119:{c.instructions+=5;NFSU2_TR(0x6ef119);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ef11d:{NFSU2_TR(0x6ef11d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ef120:{NFSU2_TR(0x6ef120);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B6ef123:{NFSU2_TR(0x6ef123);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ef125:{NFSU2_TR(0x6ef125);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ef12e;}}
}
B6ef127:L6ef127:{c.instructions+=2;NFSU2_TR(0x6ef127);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ef12a:{NFSU2_TR(0x6ef12a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef12e:L6ef12e:{c.instructions+=7;NFSU2_TR(0x6ef12e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ef132:{NFSU2_TR(0x6ef132);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B6ef136:{NFSU2_TR(0x6ef136);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ef139:{NFSU2_TR(0x6ef139);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ef13d:{NFSU2_TR(0x6ef13d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ef140:{NFSU2_TR(0x6ef140);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ef142:{NFSU2_TR(0x6ef142);
if(r1(R+518)){{goto L6ef3b1;}}
}
B6ef148:L6ef148:{c.instructions+=3;NFSU2_TR(0x6ef148);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6ef14b:{NFSU2_TR(0x6ef14b);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B6ef14d:{NFSU2_TR(0x6ef14d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ef16d;}}
}
B6ef14f:L6ef14f:{c.instructions+=5;NFSU2_TR(0x6ef14f);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6ef155:{NFSU2_TR(0x6ef155);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ef158:{NFSU2_TR(0x6ef158);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ef15a:{NFSU2_TR(0x6ef15a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef15b:{NFSU2_TR(0x6ef15b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ef15eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ef15e:L6ef15e:{c.instructions+=4;NFSU2_TR(0x6ef15e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ef162:{NFSU2_TR(0x6ef162);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ef165:{NFSU2_TR(0x6ef165);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef168:{NFSU2_TR(0x6ef168);
{goto L6ef1f1;}
}
B6ef16d:L6ef16d:{c.instructions+=3;NFSU2_TR(0x6ef16d);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6ef16e:{NFSU2_TR(0x6ef16e);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B6ef170:{NFSU2_TR(0x6ef170);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ef1aa;}}
}
B6ef172:L6ef172:{c.instructions+=5;NFSU2_TR(0x6ef172);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6ef178:{NFSU2_TR(0x6ef178);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ef17b:{NFSU2_TR(0x6ef17b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ef17d:{NFSU2_TR(0x6ef17d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef17e:{NFSU2_TR(0x6ef17e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ef181ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ef181:L6ef181:{c.instructions+=10;NFSU2_TR(0x6ef181);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ef185:{NFSU2_TR(0x6ef185);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ef188:{NFSU2_TR(0x6ef188);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef18b:{NFSU2_TR(0x6ef18b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ef18f:{NFSU2_TR(0x6ef18f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ef192:{NFSU2_TR(0x6ef192);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ef195:{NFSU2_TR(0x6ef195);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6ef19b:{NFSU2_TR(0x6ef19b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ef19d:{NFSU2_TR(0x6ef19d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef19e:{NFSU2_TR(0x6ef19e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ef1a1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ef1a1:L6ef1a1:{c.instructions+=3;NFSU2_TR(0x6ef1a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ef1a5:{NFSU2_TR(0x6ef1a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef1a8:{NFSU2_TR(0x6ef1a8);
{goto L6ef20f;}
}
B6ef1aa:L6ef1aa:{c.instructions+=3;NFSU2_TR(0x6ef1aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ef1ad:{NFSU2_TR(0x6ef1ad);
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
B6ef1af:{NFSU2_TR(0x6ef1af);
if(r1(R+518)){{goto L6ef1c1;}}
}
B6ef1b1:L6ef1b1:{c.instructions+=4;NFSU2_TR(0x6ef1b1);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6ef1b7:{NFSU2_TR(0x6ef1b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ef1b9:{NFSU2_TR(0x6ef1b9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef1ba:{NFSU2_TR(0x6ef1ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ef1bdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ef1bd:L6ef1bd:{c.instructions+=1;NFSU2_TR(0x6ef1bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ef1c1:L6ef1c1:{c.instructions+=3;NFSU2_TR(0x6ef1c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ef1c4:{NFSU2_TR(0x6ef1c4);
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
B6ef1c6:{NFSU2_TR(0x6ef1c6);
if(r1(R+518)){{goto L6ef1d8;}}
}
B6ef1c8:L6ef1c8:{c.instructions+=4;NFSU2_TR(0x6ef1c8);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6ef1ce:{NFSU2_TR(0x6ef1ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ef1d0:{NFSU2_TR(0x6ef1d0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef1d1:{NFSU2_TR(0x6ef1d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ef1d4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ef1d4:L6ef1d4:{c.instructions+=1;NFSU2_TR(0x6ef1d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ef1d8:L6ef1d8:{c.instructions+=6;NFSU2_TR(0x6ef1d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ef1db:{NFSU2_TR(0x6ef1db);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ef1de:{NFSU2_TR(0x6ef1de);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6ef1e4:{NFSU2_TR(0x6ef1e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ef1e6:{NFSU2_TR(0x6ef1e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef1e7:{NFSU2_TR(0x6ef1e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ef1eaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ef1ea:L6ef1ea:{c.instructions+=2;NFSU2_TR(0x6ef1ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ef1ee:{NFSU2_TR(0x6ef1ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef1f1:L6ef1f1:{c.instructions+=7;NFSU2_TR(0x6ef1f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ef1f5:{NFSU2_TR(0x6ef1f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ef1f8:{NFSU2_TR(0x6ef1f8);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6ef1fe:{NFSU2_TR(0x6ef1fe);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6ef202:{NFSU2_TR(0x6ef202);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ef204:{NFSU2_TR(0x6ef204);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef205:{NFSU2_TR(0x6ef205);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ef208ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ef208:L6ef208:{c.instructions+=2;NFSU2_TR(0x6ef208);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ef20c:{NFSU2_TR(0x6ef20c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef20f:L6ef20f:{c.instructions+=4;NFSU2_TR(0x6ef20f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ef213:{NFSU2_TR(0x6ef213);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ef216:{NFSU2_TR(0x6ef216);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ef218:{NFSU2_TR(0x6ef218);
if(r1(R+518)){{goto L6ef2e3;}}
}
B6ef21e:L6ef21e:{c.instructions+=4;NFSU2_TR(0x6ef21e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ef221:{NFSU2_TR(0x6ef221);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6ef224:{NFSU2_TR(0x6ef224);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B6ef226:{NFSU2_TR(0x6ef226);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ef243;}}
}
B6ef228:L6ef228:{c.instructions+=5;NFSU2_TR(0x6ef228);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6ef22e:{NFSU2_TR(0x6ef22e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ef231:{NFSU2_TR(0x6ef231);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ef233:{NFSU2_TR(0x6ef233);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef234:{NFSU2_TR(0x6ef234);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ef237ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ef237:L6ef237:{c.instructions+=4;NFSU2_TR(0x6ef237);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ef23b:{NFSU2_TR(0x6ef23b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ef23e:{NFSU2_TR(0x6ef23e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef241:{NFSU2_TR(0x6ef241);
{goto L6ef2c1;}
}
B6ef243:L6ef243:{c.instructions+=3;NFSU2_TR(0x6ef243);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6ef244:{NFSU2_TR(0x6ef244);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B6ef246:{NFSU2_TR(0x6ef246);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ef280;}}
}
B6ef248:L6ef248:{c.instructions+=5;NFSU2_TR(0x6ef248);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6ef24e:{NFSU2_TR(0x6ef24e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ef251:{NFSU2_TR(0x6ef251);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ef253:{NFSU2_TR(0x6ef253);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef254:{NFSU2_TR(0x6ef254);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ef257ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ef257:L6ef257:{c.instructions+=10;NFSU2_TR(0x6ef257);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ef25b:{NFSU2_TR(0x6ef25b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ef25e:{NFSU2_TR(0x6ef25e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef261:{NFSU2_TR(0x6ef261);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ef265:{NFSU2_TR(0x6ef265);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ef268:{NFSU2_TR(0x6ef268);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ef26b:{NFSU2_TR(0x6ef26b);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6ef271:{NFSU2_TR(0x6ef271);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ef273:{NFSU2_TR(0x6ef273);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef274:{NFSU2_TR(0x6ef274);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ef277ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ef277:L6ef277:{c.instructions+=3;NFSU2_TR(0x6ef277);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ef27b:{NFSU2_TR(0x6ef27b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef27e:{NFSU2_TR(0x6ef27e);
{goto L6ef2df;}
}
B6ef280:L6ef280:{c.instructions+=3;NFSU2_TR(0x6ef280);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ef283:{NFSU2_TR(0x6ef283);
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
B6ef285:{NFSU2_TR(0x6ef285);
if(r1(R+518)){{goto L6ef294;}}
}
B6ef287:L6ef287:{c.instructions+=2;NFSU2_TR(0x6ef287);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef288:{NFSU2_TR(0x6ef288);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ef28dull));
TAIL_STATIC(0x42fb20u,42f);
}
B6ef28d:L6ef28d:{c.instructions+=2;NFSU2_TR(0x6ef28d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ef291:{NFSU2_TR(0x6ef291);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6ef294:L6ef294:{c.instructions+=3;NFSU2_TR(0x6ef294);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ef297:{NFSU2_TR(0x6ef297);
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
B6ef299:{NFSU2_TR(0x6ef299);
if(r1(R+518)){{goto L6ef2a8;}}
}
B6ef29b:L6ef29b:{c.instructions+=2;NFSU2_TR(0x6ef29b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef29c:{NFSU2_TR(0x6ef29c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ef2a1ull));
TAIL_STATIC(0x42fb20u,42f);
}
B6ef2a1:L6ef2a1:{c.instructions+=2;NFSU2_TR(0x6ef2a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ef2a5:{NFSU2_TR(0x6ef2a5);
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
B6ef2a8:L6ef2a8:{c.instructions+=6;NFSU2_TR(0x6ef2a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ef2ab:{NFSU2_TR(0x6ef2ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ef2ae:{NFSU2_TR(0x6ef2ae);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6ef2b4:{NFSU2_TR(0x6ef2b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ef2b6:{NFSU2_TR(0x6ef2b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef2b7:{NFSU2_TR(0x6ef2b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ef2baull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ef2ba:L6ef2ba:{c.instructions+=2;NFSU2_TR(0x6ef2ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ef2be:{NFSU2_TR(0x6ef2be);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef2c1:L6ef2c1:{c.instructions+=7;NFSU2_TR(0x6ef2c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ef2c5:{NFSU2_TR(0x6ef2c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ef2c8:{NFSU2_TR(0x6ef2c8);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6ef2ce:{NFSU2_TR(0x6ef2ce);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6ef2d2:{NFSU2_TR(0x6ef2d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ef2d4:{NFSU2_TR(0x6ef2d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef2d5:{NFSU2_TR(0x6ef2d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ef2d8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ef2d8:L6ef2d8:{c.instructions+=2;NFSU2_TR(0x6ef2d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ef2dc:{NFSU2_TR(0x6ef2dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef2df:L6ef2df:{c.instructions+=1;NFSU2_TR(0x6ef2df);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ef2e3:L6ef2e3:{c.instructions+=7;NFSU2_TR(0x6ef2e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ef2e6:{NFSU2_TR(0x6ef2e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6ef2e9:{NFSU2_TR(0x6ef2e9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef2ea:{NFSU2_TR(0x6ef2ea);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B6ef2ed:{NFSU2_TR(0x6ef2ed);
w1(R+8,u8(0x1ull));
}
B6ef2ef:{NFSU2_TR(0x6ef2ef);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ef2f1:{NFSU2_TR(0x6ef2f1);
if(r1(R+518)){{goto L6ef301;}}
}
B6ef2f3:L6ef2f3:{c.instructions+=4;NFSU2_TR(0x6ef2f3);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6ef2f7:{NFSU2_TR(0x6ef2f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef2fb:{NFSU2_TR(0x6ef2fb);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ef2ff:{NFSU2_TR(0x6ef2ff);
{goto L6ef315;}
}
B6ef301:L6ef301:{c.instructions+=7;NFSU2_TR(0x6ef301);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef302:{NFSU2_TR(0x6ef302);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B6ef306:{NFSU2_TR(0x6ef306);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6ef30a:{NFSU2_TR(0x6ef30a);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B6ef30c:{NFSU2_TR(0x6ef30c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef310:{NFSU2_TR(0x6ef310);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ef311:{NFSU2_TR(0x6ef311);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ef315:L6ef315:{c.instructions+=14;NFSU2_TR(0x6ef315);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ef318:{NFSU2_TR(0x6ef318);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ef31c:{NFSU2_TR(0x6ef31c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ef31f:{NFSU2_TR(0x6ef31f);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6ef323:{NFSU2_TR(0x6ef323);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6ef327:{NFSU2_TR(0x6ef327);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef32b:{NFSU2_TR(0x6ef32b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ef32f:{NFSU2_TR(0x6ef32f);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ef332:{NFSU2_TR(0x6ef332);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ef336:{NFSU2_TR(0x6ef336);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ef339:{NFSU2_TR(0x6ef339);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6ef33d:{NFSU2_TR(0x6ef33d);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(r1(R+8))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6ef340:{NFSU2_TR(0x6ef340);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ef341:{NFSU2_TR(0x6ef341);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ef359;}}
}
B6ef343:L6ef343:{c.instructions+=6;NFSU2_TR(0x6ef343);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B6ef347:{NFSU2_TR(0x6ef347);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef34b:{NFSU2_TR(0x6ef34b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ef34f:{NFSU2_TR(0x6ef34f);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ef352:{NFSU2_TR(0x6ef352);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ef355:{NFSU2_TR(0x6ef355);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ef359:L6ef359:{c.instructions+=24;NFSU2_TR(0x6ef359);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef35c:{NFSU2_TR(0x6ef35c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ef360:{NFSU2_TR(0x6ef360);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ef363:{NFSU2_TR(0x6ef363);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ef366:{NFSU2_TR(0x6ef366);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6ef369:{NFSU2_TR(0x6ef369);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B6ef36d:{NFSU2_TR(0x6ef36d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6ef371:{NFSU2_TR(0x6ef371);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B6ef373:{NFSU2_TR(0x6ef373);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef377:{NFSU2_TR(0x6ef377);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ef37b:{NFSU2_TR(0x6ef37b);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ef381:{NFSU2_TR(0x6ef381);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ef384:{NFSU2_TR(0x6ef384);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ef388:{NFSU2_TR(0x6ef388);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ef38b:{NFSU2_TR(0x6ef38b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ef38e:{NFSU2_TR(0x6ef38e);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6ef392:{NFSU2_TR(0x6ef392);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B6ef396:{NFSU2_TR(0x6ef396);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6ef39a:{NFSU2_TR(0x6ef39a);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B6ef39c:{NFSU2_TR(0x6ef39c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef3a0:{NFSU2_TR(0x6ef3a0);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ef3a4:{NFSU2_TR(0x6ef3a4);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ef3aa:{NFSU2_TR(0x6ef3aa);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ef3ad:{NFSU2_TR(0x6ef3ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ef3b1:L6ef3b1:{c.instructions+=19;NFSU2_TR(0x6ef3b1);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ef3b4:{NFSU2_TR(0x6ef3b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ef3b5:{NFSU2_TR(0x6ef3b5);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ef3bb:{NFSU2_TR(0x6ef3bb);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ef3be:{NFSU2_TR(0x6ef3be);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B6ef3c1:{NFSU2_TR(0x6ef3c1);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ef3c4:{NFSU2_TR(0x6ef3c4);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B6ef3c7:{NFSU2_TR(0x6ef3c7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6ef3c9:{NFSU2_TR(0x6ef3c9);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ef3cc:{NFSU2_TR(0x6ef3cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ef3d0:{NFSU2_TR(0x6ef3d0);
{u32 ea_=u32(r4(R+0)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ef3d3:{NFSU2_TR(0x6ef3d3);
{u32 ea_=u32(r4(R+0)+u32(76u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ef3d6:{NFSU2_TR(0x6ef3d6);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B6ef3d9:{NFSU2_TR(0x6ef3d9);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6ef3db:{NFSU2_TR(0x6ef3db);
{u32 ea_=u32(r4(R+0)+u32(76u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ef3de:{NFSU2_TR(0x6ef3de);
{u32 ea_=u32(r4(R+0)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ef3e1:{NFSU2_TR(0x6ef3e1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6ef3e3:{NFSU2_TR(0x6ef3e3);
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
B6ef3e6:{NFSU2_TR(0x6ef3e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ef3f0:L6ef3f0:{c.instructions+=16;NFSU2_TR(0x6ef3f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B6ef3f3:{NFSU2_TR(0x6ef3f3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef3f7:{NFSU2_TR(0x6ef3f7);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef3ff:{NFSU2_TR(0x6ef3ff);
{u32 ea_=u32(r4(R+4)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ef402:{NFSU2_TR(0x6ef402);
{u32 ea_=u32(r4(R+4)+u32(64u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ef405:{NFSU2_TR(0x6ef405);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef406:{NFSU2_TR(0x6ef406);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef407:{NFSU2_TR(0x6ef407);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef408:{NFSU2_TR(0x6ef408);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ef40b:{NFSU2_TR(0x6ef40b);
__builtin_memmove((R+12),(R+4),4);
}
B6ef40d:{NFSU2_TR(0x6ef40d);
{u32 ea_=u32(r4(R+4)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ef410:{NFSU2_TR(0x6ef410);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B6ef412:{NFSU2_TR(0x6ef412);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B6ef418:{NFSU2_TR(0x6ef418);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6ef41a:{NFSU2_TR(0x6ef41a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ef41d:{NFSU2_TR(0x6ef41d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ef433;}}
}
B6ef41f:L6ef41f:{c.instructions+=5;NFSU2_TR(0x6ef41f);
{u32 ea_=u32(u32(8133180u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ef425:{NFSU2_TR(0x6ef425);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ef429:{NFSU2_TR(0x6ef429);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ef42d:{NFSU2_TR(0x6ef42d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B6ef431:{NFSU2_TR(0x6ef431);
{goto L6ef445;}
}
B6ef433:L6ef433:{c.instructions+=4;NFSU2_TR(0x6ef433);
{u32 ea_=u32(u32(8133180u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ef439:{NFSU2_TR(0x6ef439);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ef43d:{NFSU2_TR(0x6ef43d);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ef441:{NFSU2_TR(0x6ef441);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B6ef445:L6ef445:{c.instructions+=12;NFSU2_TR(0x6ef445);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ef449:{NFSU2_TR(0x6ef449);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ef44c:{NFSU2_TR(0x6ef44c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ef44e:{NFSU2_TR(0x6ef44e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6ef454:{NFSU2_TR(0x6ef454);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ef458:{NFSU2_TR(0x6ef458);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ef45b:{NFSU2_TR(0x6ef45b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef45f:{NFSU2_TR(0x6ef45f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef463:{NFSU2_TR(0x6ef463);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6ef465:{NFSU2_TR(0x6ef465);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef469:{NFSU2_TR(0x6ef469);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6ef46c:{NFSU2_TR(0x6ef46c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ef48b;}}
}
B6ef46e:L6ef46e:{c.instructions+=5;NFSU2_TR(0x6ef46e);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ef472:{NFSU2_TR(0x6ef472);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6ef475:{NFSU2_TR(0x6ef475);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6ef477:{NFSU2_TR(0x6ef477);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6ef47a:{NFSU2_TR(0x6ef47a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ef48b;}}
}
B6ef47c:L6ef47c:{c.instructions+=3;NFSU2_TR(0x6ef47c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ef47f:{NFSU2_TR(0x6ef47f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef480:{NFSU2_TR(0x6ef480);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ef485ull));
TAIL_STATIC(0x6e4900u,6e4);
}
B6ef485:L6ef485:{c.instructions+=3;NFSU2_TR(0x6ef485);
__builtin_memmove((R+28),(R+0),4);
}
B6ef487:{NFSU2_TR(0x6ef487);
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6ef48a:{NFSU2_TR(0x6ef48a);
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
B6ef48b:L6ef48b:{c.instructions+=6;NFSU2_TR(0x6ef48b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ef48d:{NFSU2_TR(0x6ef48d);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6ef491:{NFSU2_TR(0x6ef491);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef492:{NFSU2_TR(0x6ef492);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef494:{NFSU2_TR(0x6ef494);
__builtin_memmove((R+4),(R+12),4);
}
B6ef496:{NFSU2_TR(0x6ef496);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ef499ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ef499:L6ef499:{c.instructions+=9;NFSU2_TR(0x6ef499);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ef49d:{NFSU2_TR(0x6ef49d);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ef4a1:{NFSU2_TR(0x6ef4a1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ef4a5:{NFSU2_TR(0x6ef4a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef4a9:{NFSU2_TR(0x6ef4a9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6ef4ad:{NFSU2_TR(0x6ef4ad);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6ef4b3:{NFSU2_TR(0x6ef4b3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6ef4b5:{NFSU2_TR(0x6ef4b5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6ef4b8:{NFSU2_TR(0x6ef4b8);
if(r1(R+514)){{goto L6ef4c8;}}
}
B6ef4ba:L6ef4ba:{c.instructions+=3;NFSU2_TR(0x6ef4ba);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ef4be:{NFSU2_TR(0x6ef4be);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ef4c4:{NFSU2_TR(0x6ef4c4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ef4c8:L6ef4c8:{c.instructions+=5;NFSU2_TR(0x6ef4c8);
w4(R+24,u32(0x1ull));
}
B6ef4cd:{NFSU2_TR(0x6ef4cd);
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
B6ef4cf:{NFSU2_TR(0x6ef4cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ef4d7:{NFSU2_TR(0x6ef4d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef4db:{NFSU2_TR(0x6ef4db);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6ef577;}}
}
B6ef4e1:L6ef4e1:{c.instructions+=8;NFSU2_TR(0x6ef4e1);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ef4e5:{NFSU2_TR(0x6ef4e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ef4e7:{NFSU2_TR(0x6ef4e7);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6ef4eb:{NFSU2_TR(0x6ef4eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef4ec:{NFSU2_TR(0x6ef4ec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef4ed:{NFSU2_TR(0x6ef4ed);
__builtin_memmove((R+4),(R+12),4);
}
B6ef4ef:{NFSU2_TR(0x6ef4ef);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ef4f2:{NFSU2_TR(0x6ef4f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ef4f5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ef4f5:L6ef4f5:{c.instructions+=5;NFSU2_TR(0x6ef4f5);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ef4f9:{NFSU2_TR(0x6ef4f9);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6ef4fd:{NFSU2_TR(0x6ef4fd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6ef4ff:{NFSU2_TR(0x6ef4ff);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6ef502:{NFSU2_TR(0x6ef502);
if(r1(R+514)){{goto L6ef530;}}
}
B6ef504:L6ef504:{c.instructions+=5;NFSU2_TR(0x6ef504);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ef508:{NFSU2_TR(0x6ef508);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6ef50c:{NFSU2_TR(0x6ef50c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6ef50e:{NFSU2_TR(0x6ef50e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6ef511:{NFSU2_TR(0x6ef511);
if(r1(R+514)){{goto L6ef530;}}
}
B6ef513:L6ef513:{c.instructions+=8;NFSU2_TR(0x6ef513);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ef517:{NFSU2_TR(0x6ef517);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ef51b:{NFSU2_TR(0x6ef51b);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ef51f:{NFSU2_TR(0x6ef51f);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6ef521:{NFSU2_TR(0x6ef521);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6ef527:{NFSU2_TR(0x6ef527);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6ef529:{NFSU2_TR(0x6ef529);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ef52c:{NFSU2_TR(0x6ef52c);
if(r1(R+518)){{goto L6ef58c;}}
}
B6ef52e:L6ef52e:{c.instructions+=1;NFSU2_TR(0x6ef52e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6ef530:L6ef530:{c.instructions+=6;NFSU2_TR(0x6ef530);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ef534:{NFSU2_TR(0x6ef534);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ef538:{NFSU2_TR(0x6ef538);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B6ef53e:{NFSU2_TR(0x6ef53e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6ef540:{NFSU2_TR(0x6ef540);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6ef543:{NFSU2_TR(0x6ef543);
if(r1(R+514)){{goto L6ef54b;}}
}
B6ef545:L6ef545:{c.instructions+=1;NFSU2_TR(0x6ef545);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ef54b:L6ef54b:{c.instructions+=4;NFSU2_TR(0x6ef54b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B6ef54f:{NFSU2_TR(0x6ef54f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6ef551:{NFSU2_TR(0x6ef551);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6ef554:{NFSU2_TR(0x6ef554);
if(r1(R+514)){{goto L6ef560;}}
}
B6ef556:L6ef556:{c.instructions+=3;NFSU2_TR(0x6ef556);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ef55a:{NFSU2_TR(0x6ef55a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef55e:{NFSU2_TR(0x6ef55e);
{goto L6ef562;}
}
B6ef560:L6ef560:{c.instructions+=1;NFSU2_TR(0x6ef560);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6ef562:L6ef562:{c.instructions+=6;NFSU2_TR(0x6ef562);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ef566:{NFSU2_TR(0x6ef566);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6ef567:{NFSU2_TR(0x6ef567);
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
B6ef569:{NFSU2_TR(0x6ef569);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef56d:{NFSU2_TR(0x6ef56d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef571:{NFSU2_TR(0x6ef571);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ef4e1u);}goto L6ef4e1;}}
}
B6ef577:L6ef577:{c.instructions+=9;NFSU2_TR(0x6ef577);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ef57b:{NFSU2_TR(0x6ef57b);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ef57f:{NFSU2_TR(0x6ef57f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ef580:{NFSU2_TR(0x6ef580);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ef581:{NFSU2_TR(0x6ef581);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ef583:{NFSU2_TR(0x6ef583);
w1(R+0,u8(0x1ull));
}
B6ef585:{NFSU2_TR(0x6ef585);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ef586:{NFSU2_TR(0x6ef586);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ef589:{NFSU2_TR(0x6ef589);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ef58c:L6ef58c:{c.instructions+=5;NFSU2_TR(0x6ef58c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B6ef592:{NFSU2_TR(0x6ef592);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B6ef593:{NFSU2_TR(0x6ef593);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6ef595:{NFSU2_TR(0x6ef595);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6ef598:{NFSU2_TR(0x6ef598);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6ef5bf;}}
}
B6ef59a:L6ef59a:{c.instructions+=14;NFSU2_TR(0x6ef59a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ef59e:{NFSU2_TR(0x6ef59e);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ef5a2:{NFSU2_TR(0x6ef5a2);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ef5a6:{NFSU2_TR(0x6ef5a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef5aa:{NFSU2_TR(0x6ef5aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ef5ab:{NFSU2_TR(0x6ef5ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ef5ac:{NFSU2_TR(0x6ef5ac);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B6ef5ae:{NFSU2_TR(0x6ef5ae);
w1(R+0,u8(0x1ull));
}
B6ef5b0:{NFSU2_TR(0x6ef5b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ef5b1:{NFSU2_TR(0x6ef5b1);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xda,0x00"::"a"(ea_):"memory");}
}
B6ef5b5:{NFSU2_TR(0x6ef5b5);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ef5b7:{NFSU2_TR(0x6ef5b7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6ef5b9:{NFSU2_TR(0x6ef5b9);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ef5bc:{NFSU2_TR(0x6ef5bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ef5bf:L6ef5bf:{c.instructions+=12;NFSU2_TR(0x6ef5bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ef5c3:{NFSU2_TR(0x6ef5c3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6ef5c5:{NFSU2_TR(0x6ef5c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef5c9:{NFSU2_TR(0x6ef5c9);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ef5cd:{NFSU2_TR(0x6ef5cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ef5ce:{NFSU2_TR(0x6ef5ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ef5cf:{NFSU2_TR(0x6ef5cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ef5d0:{NFSU2_TR(0x6ef5d0);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ef5d6:{NFSU2_TR(0x6ef5d6);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ef5d8:{NFSU2_TR(0x6ef5d8);
w1(R+0,u8(0x1ull));
}
B6ef5da:{NFSU2_TR(0x6ef5da);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ef5dd:{NFSU2_TR(0x6ef5dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ef5e0:L6ef5e0:{c.instructions+=7;NFSU2_TR(0x6ef5e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B6ef5e3:{NFSU2_TR(0x6ef5e3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef5e4:{NFSU2_TR(0x6ef5e4);
__builtin_memmove((R+24),(R+4),4);
}
B6ef5e6:{NFSU2_TR(0x6ef5e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6ef5e9:{NFSU2_TR(0x6ef5e9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ef5eb:{NFSU2_TR(0x6ef5eb);
u8 U[2];
__builtin_memmove((U+0),(R+0),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6ef5ed:{NFSU2_TR(0x6ef5ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ef611;}}
}
B6ef5ef:L6ef5ef:{c.instructions+=9;NFSU2_TR(0x6ef5ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ef5f6:{NFSU2_TR(0x6ef5f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef5f9:{NFSU2_TR(0x6ef5f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef5fc:{NFSU2_TR(0x6ef5fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef5ff:{NFSU2_TR(0x6ef5ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ef606:{NFSU2_TR(0x6ef606);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6ef60a:{NFSU2_TR(0x6ef60a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ef60b:{NFSU2_TR(0x6ef60b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ef60e:{NFSU2_TR(0x6ef60e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ef611:L6ef611:{c.instructions+=5;NFSU2_TR(0x6ef611);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ef614:{NFSU2_TR(0x6ef614);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef615:{NFSU2_TR(0x6ef615);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ef619:{NFSU2_TR(0x6ef619);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ef61b:{NFSU2_TR(0x6ef61b);
if(r1(R+518)){{goto L6ef6cf;}}
}
B6ef621:L6ef621:{c.instructions+=6;NFSU2_TR(0x6ef621);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6ef625:{NFSU2_TR(0x6ef625);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef626:{NFSU2_TR(0x6ef626);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef627:{NFSU2_TR(0x6ef627);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef628:{NFSU2_TR(0x6ef628);
__builtin_memmove((R+4),(R+24),4);
}
B6ef62a:{NFSU2_TR(0x6ef62a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ef62full));
TAIL_STATIC(0x6eee10u,6ee);
}
B6ef62f:L6ef62f:{c.instructions+=20;NFSU2_TR(0x6ef62f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ef632:{NFSU2_TR(0x6ef632);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ef635:{NFSU2_TR(0x6ef635);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6ef638:{NFSU2_TR(0x6ef638);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ef63b:{NFSU2_TR(0x6ef63b);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6ef63f:{NFSU2_TR(0x6ef63f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef640:{NFSU2_TR(0x6ef640);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6ef644:{NFSU2_TR(0x6ef644);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ef646:{NFSU2_TR(0x6ef646);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6ef64a:{NFSU2_TR(0x6ef64a);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6ef64b:{NFSU2_TR(0x6ef64b);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef64f:{NFSU2_TR(0x6ef64f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B6ef652:{NFSU2_TR(0x6ef652);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6ef653:{NFSU2_TR(0x6ef653);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ef657:{NFSU2_TR(0x6ef657);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef65b:{NFSU2_TR(0x6ef65b);
__builtin_memmove((R+4),(R+24),4);
}
B6ef65d:{NFSU2_TR(0x6ef65d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ef661:{NFSU2_TR(0x6ef661);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ef665:{NFSU2_TR(0x6ef665);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ef668:{NFSU2_TR(0x6ef668);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ef66dull));
TAIL_STATIC(0x6eee10u,6ee);
}
B6ef66d:L6ef66d:{c.instructions+=8;NFSU2_TR(0x6ef66d);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6ef671:{NFSU2_TR(0x6ef671);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef672:{NFSU2_TR(0x6ef672);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6ef676:{NFSU2_TR(0x6ef676);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef677:{NFSU2_TR(0x6ef677);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6ef67b:{NFSU2_TR(0x6ef67b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef67c:{NFSU2_TR(0x6ef67c);
__builtin_memmove((R+4),(R+24),4);
}
B6ef67e:{NFSU2_TR(0x6ef67e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ef683ull));
TAIL_STATIC(0x6ee260u,6ee);
}
B6ef683:L6ef683:{c.instructions+=4;NFSU2_TR(0x6ef683);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ef686:{NFSU2_TR(0x6ef686);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6ef687:{NFSU2_TR(0x6ef687);
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
B6ef689:{NFSU2_TR(0x6ef689);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ef699;}}
}
B6ef68b:L6ef68b:{c.instructions+=3;NFSU2_TR(0x6ef68b);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ef68f:{NFSU2_TR(0x6ef68f);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ef695:{NFSU2_TR(0x6ef695);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ef699:L6ef699:{c.instructions+=8;NFSU2_TR(0x6ef699);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef69a:{NFSU2_TR(0x6ef69a);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6ef69e:{NFSU2_TR(0x6ef69e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef69f:{NFSU2_TR(0x6ef69f);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6ef6a3:{NFSU2_TR(0x6ef6a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef6a4:{NFSU2_TR(0x6ef6a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ef6a7:{NFSU2_TR(0x6ef6a7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef6a8:{NFSU2_TR(0x6ef6a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ef6adull));
TAIL_STATIC(0x6edf80u,6ed);
}
B6ef6ad:L6ef6ad:{c.instructions+=11;NFSU2_TR(0x6ef6ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ef6b1:{NFSU2_TR(0x6ef6b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ef6b5:{NFSU2_TR(0x6ef6b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ef6b9:{NFSU2_TR(0x6ef6b9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6ef6bb:{NFSU2_TR(0x6ef6bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ef6bf:{NFSU2_TR(0x6ef6bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef6c2:{NFSU2_TR(0x6ef6c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef6c5:{NFSU2_TR(0x6ef6c5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6ef6c8:{NFSU2_TR(0x6ef6c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef6cb:{NFSU2_TR(0x6ef6cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef6ce:{NFSU2_TR(0x6ef6ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ef6cf:L6ef6cf:{c.instructions+=4;NFSU2_TR(0x6ef6cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ef6d0:{NFSU2_TR(0x6ef6d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ef6d1:{NFSU2_TR(0x6ef6d1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ef6d4:{NFSU2_TR(0x6ef6d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ef6e0:L6ef6e0:{c.instructions+=10;NFSU2_TR(0x6ef6e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ef6e4:{NFSU2_TR(0x6ef6e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B6ef6e7:{NFSU2_TR(0x6ef6e7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef6e8:{NFSU2_TR(0x6ef6e8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef6e9:{NFSU2_TR(0x6ef6e9);
__builtin_memmove((R+24),(R+4),4);
}
B6ef6eb:{NFSU2_TR(0x6ef6eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef6ee:{NFSU2_TR(0x6ef6ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ef6f1:{NFSU2_TR(0x6ef6f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ef6f3:{NFSU2_TR(0x6ef6f3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef6f4:{NFSU2_TR(0x6ef6f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ef6fd;}}
}
B6ef6f6:L6ef6f6:{c.instructions+=2;NFSU2_TR(0x6ef6f6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef6f8:{NFSU2_TR(0x6ef6f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ef6fdull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ef0c0u);}goto L6ef0c0;}
}
B6ef6fd:L6ef6fd:{c.instructions+=27;NFSU2_TR(0x6ef6fd);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ef701:{NFSU2_TR(0x6ef701);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ef704:{NFSU2_TR(0x6ef704);
{u32 ea_=u32(r4(R+24)+u32(80u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ef707:{NFSU2_TR(0x6ef707);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ef70a:{NFSU2_TR(0x6ef70a);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ef70d:{NFSU2_TR(0x6ef70d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ef710:{NFSU2_TR(0x6ef710);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ef713:{NFSU2_TR(0x6ef713);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6ef717:{NFSU2_TR(0x6ef717);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6ef718:{NFSU2_TR(0x6ef718);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef71c:{NFSU2_TR(0x6ef71c);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6ef71e:{NFSU2_TR(0x6ef71e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef71f:{NFSU2_TR(0x6ef71f);
__builtin_memmove((R+4),(R+24),4);
}
B6ef721:{NFSU2_TR(0x6ef721);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ef724:{NFSU2_TR(0x6ef724);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ef728:{NFSU2_TR(0x6ef728);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ef72b:{NFSU2_TR(0x6ef72b);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ef72f:{NFSU2_TR(0x6ef72f);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ef732:{NFSU2_TR(0x6ef732);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6ef734:{NFSU2_TR(0x6ef734);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ef737:{NFSU2_TR(0x6ef737);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ef73b:{NFSU2_TR(0x6ef73b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6ef73d:{NFSU2_TR(0x6ef73d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ef741:{NFSU2_TR(0x6ef741);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ef744:{NFSU2_TR(0x6ef744);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef746:{NFSU2_TR(0x6ef746);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef747:{NFSU2_TR(0x6ef747);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ef74cull));
TAIL_STATIC(0x6ee6b0u,6ee);
}
B6ef74c:L6ef74c:{c.instructions+=14;NFSU2_TR(0x6ef74c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ef74f:{NFSU2_TR(0x6ef74f);
__builtin_memmove((R+20),(R+0),4);
}
B6ef751:{NFSU2_TR(0x6ef751);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ef754:{NFSU2_TR(0x6ef754);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6ef757:{NFSU2_TR(0x6ef757);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6ef75b:{NFSU2_TR(0x6ef75b);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B6ef75c:{NFSU2_TR(0x6ef75c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef760:{NFSU2_TR(0x6ef760);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef761:{NFSU2_TR(0x6ef761);
__builtin_memmove((R+4),(R+24),4);
}
B6ef763:{NFSU2_TR(0x6ef763);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ef767:{NFSU2_TR(0x6ef767);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ef76a:{NFSU2_TR(0x6ef76a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef76c:{NFSU2_TR(0x6ef76c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef76d:{NFSU2_TR(0x6ef76d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ef772ull));
TAIL_STATIC(0x6ee820u,6ee);
}
B6ef772:L6ef772:{c.instructions+=15;NFSU2_TR(0x6ef772);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ef776:{NFSU2_TR(0x6ef776);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ef779:{NFSU2_TR(0x6ef779);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ef77c:{NFSU2_TR(0x6ef77c);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6ef780:{NFSU2_TR(0x6ef780);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6ef784:{NFSU2_TR(0x6ef784);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6ef785:{NFSU2_TR(0x6ef785);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef789:{NFSU2_TR(0x6ef789);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef78a:{NFSU2_TR(0x6ef78a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ef78e:{NFSU2_TR(0x6ef78e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ef792:{NFSU2_TR(0x6ef792);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ef795:{NFSU2_TR(0x6ef795);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef797:{NFSU2_TR(0x6ef797);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef798:{NFSU2_TR(0x6ef798);
__builtin_memmove((R+4),(R+24),4);
}
B6ef79a:{NFSU2_TR(0x6ef79a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ef79full));
TAIL_STATIC(0x6ee820u,6ee);
}
B6ef79f:L6ef79f:{c.instructions+=6;NFSU2_TR(0x6ef79f);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ef7a3:{NFSU2_TR(0x6ef7a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ef7a7:{NFSU2_TR(0x6ef7a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ef7aa:{NFSU2_TR(0x6ef7aa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef7ac:{NFSU2_TR(0x6ef7ac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef7ad:{NFSU2_TR(0x6ef7ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ef7b2ull));
TAIL_STATIC(0x6e3c70u,6e3);
}
B6ef7b2:L6ef7b2:{c.instructions+=7;NFSU2_TR(0x6ef7b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ef7b5:{NFSU2_TR(0x6ef7b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ef7b9:{NFSU2_TR(0x6ef7b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ef7bb:{NFSU2_TR(0x6ef7bb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef7bd:{NFSU2_TR(0x6ef7bd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef7be:{NFSU2_TR(0x6ef7be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef7bf:{NFSU2_TR(0x6ef7bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ef7c2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ef7c2:L6ef7c2:{c.instructions+=2;NFSU2_TR(0x6ef7c2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ef7c4:{NFSU2_TR(0x6ef7c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ef7cf;}}
}
B6ef7c6:L6ef7c6:{c.instructions+=5;NFSU2_TR(0x6ef7c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ef7c7:{NFSU2_TR(0x6ef7c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ef7c8:{NFSU2_TR(0x6ef7c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ef7c9:{NFSU2_TR(0x6ef7c9);
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
B6ef7cc:{NFSU2_TR(0x6ef7cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ef7cf:L6ef7cf:{c.instructions+=6;NFSU2_TR(0x6ef7cf);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ef7d2:{NFSU2_TR(0x6ef7d2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef7d3:{NFSU2_TR(0x6ef7d3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6ef7d9:{NFSU2_TR(0x6ef7d9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6ef7db:{NFSU2_TR(0x6ef7db);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6ef7de:{NFSU2_TR(0x6ef7de);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6ef82d;}}
}
B6ef7e0:L6ef7e0:{c.instructions+=2;NFSU2_TR(0x6ef7e0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef7e2:{NFSU2_TR(0x6ef7e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ef7e7ull));
TAIL_STATIC(0x6e3ec0u,6e3);
}
B6ef7e7:L6ef7e7:{c.instructions+=6;NFSU2_TR(0x6ef7e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6ef7e9:{NFSU2_TR(0x6ef7e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ef7ec:{NFSU2_TR(0x6ef7ec);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6ef7ef:{NFSU2_TR(0x6ef7ef);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef7f1:{NFSU2_TR(0x6ef7f1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef7f2:{NFSU2_TR(0x6ef7f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ef7f7ull));
TAIL_STATIC(0x6e3c70u,6e3);
}
B6ef7f7:L6ef7f7:{c.instructions+=7;NFSU2_TR(0x6ef7f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ef7fa:{NFSU2_TR(0x6ef7fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ef7fe:{NFSU2_TR(0x6ef7fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ef800:{NFSU2_TR(0x6ef800);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef802:{NFSU2_TR(0x6ef802);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef803:{NFSU2_TR(0x6ef803);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef804:{NFSU2_TR(0x6ef804);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ef807ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ef807:L6ef807:{c.instructions+=2;NFSU2_TR(0x6ef807);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ef809:{NFSU2_TR(0x6ef809);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ef815;}}
}
B6ef80b:L6ef80b:{c.instructions+=6;NFSU2_TR(0x6ef80b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ef80c:{NFSU2_TR(0x6ef80c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ef80d:{NFSU2_TR(0x6ef80d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ef80e:{NFSU2_TR(0x6ef80e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ef80f:{NFSU2_TR(0x6ef80f);
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
B6ef812:{NFSU2_TR(0x6ef812);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ef815:L6ef815:{c.instructions+=10;NFSU2_TR(0x6ef815);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ef818:{NFSU2_TR(0x6ef818);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ef81b:{NFSU2_TR(0x6ef81b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ef81e:{NFSU2_TR(0x6ef81e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef820:{NFSU2_TR(0x6ef820);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef821:{NFSU2_TR(0x6ef821);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef822:{NFSU2_TR(0x6ef822);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef823:{NFSU2_TR(0x6ef823);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef824:{NFSU2_TR(0x6ef824);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef825:{NFSU2_TR(0x6ef825);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ef82aull));
TAIL_STATIC(0x6e5a60u,6e5);
}
B6ef82a:L6ef82a:{c.instructions+=1;NFSU2_TR(0x6ef82a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B6ef82d:L6ef82d:{c.instructions+=3;NFSU2_TR(0x6ef82d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef82e:{NFSU2_TR(0x6ef82e);
__builtin_memmove((R+4),(R+24),4);
}
B6ef830:{NFSU2_TR(0x6ef830);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ef835ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ef5e0u);}goto L6ef5e0;}
}
B6ef835:L6ef835:{c.instructions+=7;NFSU2_TR(0x6ef835);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6ef839:{NFSU2_TR(0x6ef839);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef83a:{NFSU2_TR(0x6ef83a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x58ull))));
}
B6ef83d:{NFSU2_TR(0x6ef83d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+28),u32(0x10ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ef840:{NFSU2_TR(0x6ef840);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef841:{NFSU2_TR(0x6ef841);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef842:{NFSU2_TR(0x6ef842);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ef847ull));
TAIL_STATIC(0x6edf80u,6ed);
}
B6ef847:L6ef847:{c.instructions+=16;NFSU2_TR(0x6ef847);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ef84b:{NFSU2_TR(0x6ef84b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ef84f:{NFSU2_TR(0x6ef84f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ef853:{NFSU2_TR(0x6ef853);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6ef855:{NFSU2_TR(0x6ef855);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ef859:{NFSU2_TR(0x6ef859);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6ef85c:{NFSU2_TR(0x6ef85c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef85f:{NFSU2_TR(0x6ef85f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ef860:{NFSU2_TR(0x6ef860);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef863:{NFSU2_TR(0x6ef863);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef866:{NFSU2_TR(0x6ef866);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ef867:{NFSU2_TR(0x6ef867);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ef868:{NFSU2_TR(0x6ef868);
w1(R+0,u8(0x1ull));
}
B6ef86a:{NFSU2_TR(0x6ef86a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ef86b:{NFSU2_TR(0x6ef86b);
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
B6ef86e:{NFSU2_TR(0x6ef86e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ef880:L6ef880:{c.instructions+=10;NFSU2_TR(0x6ef880);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ef884:{NFSU2_TR(0x6ef884);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B6ef887:{NFSU2_TR(0x6ef887);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef888:{NFSU2_TR(0x6ef888);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef889:{NFSU2_TR(0x6ef889);
__builtin_memmove((R+24),(R+4),4);
}
B6ef88b:{NFSU2_TR(0x6ef88b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef88e:{NFSU2_TR(0x6ef88e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ef891:{NFSU2_TR(0x6ef891);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ef893:{NFSU2_TR(0x6ef893);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef894:{NFSU2_TR(0x6ef894);
if(r1(R+518)){{goto L6ef983;}}
}
B6ef89a:L6ef89a:{c.instructions+=3;NFSU2_TR(0x6ef89a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ef89d:{NFSU2_TR(0x6ef89d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ef89f:{NFSU2_TR(0x6ef89f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ef8a8;}}
}
B6ef8a1:L6ef8a1:{c.instructions+=2;NFSU2_TR(0x6ef8a1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef8a3:{NFSU2_TR(0x6ef8a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ef8a8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ef0c0u);}goto L6ef0c0;}
}
B6ef8a8:L6ef8a8:{c.instructions+=27;NFSU2_TR(0x6ef8a8);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ef8ac:{NFSU2_TR(0x6ef8ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ef8af:{NFSU2_TR(0x6ef8af);
{u32 ea_=u32(r4(R+24)+u32(80u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ef8b2:{NFSU2_TR(0x6ef8b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ef8b5:{NFSU2_TR(0x6ef8b5);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ef8b8:{NFSU2_TR(0x6ef8b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ef8bb:{NFSU2_TR(0x6ef8bb);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ef8be:{NFSU2_TR(0x6ef8be);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6ef8c2:{NFSU2_TR(0x6ef8c2);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6ef8c3:{NFSU2_TR(0x6ef8c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef8c7:{NFSU2_TR(0x6ef8c7);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6ef8c9:{NFSU2_TR(0x6ef8c9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef8ca:{NFSU2_TR(0x6ef8ca);
__builtin_memmove((R+4),(R+24),4);
}
B6ef8cc:{NFSU2_TR(0x6ef8cc);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ef8cf:{NFSU2_TR(0x6ef8cf);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ef8d3:{NFSU2_TR(0x6ef8d3);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ef8d6:{NFSU2_TR(0x6ef8d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ef8da:{NFSU2_TR(0x6ef8da);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ef8dd:{NFSU2_TR(0x6ef8dd);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6ef8df:{NFSU2_TR(0x6ef8df);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ef8e2:{NFSU2_TR(0x6ef8e2);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ef8e6:{NFSU2_TR(0x6ef8e6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6ef8e8:{NFSU2_TR(0x6ef8e8);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ef8ec:{NFSU2_TR(0x6ef8ec);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ef8ef:{NFSU2_TR(0x6ef8ef);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef8f1:{NFSU2_TR(0x6ef8f1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef8f2:{NFSU2_TR(0x6ef8f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ef8f7ull));
TAIL_STATIC(0x6ee6b0u,6ee);
}
B6ef8f7:L6ef8f7:{c.instructions+=14;NFSU2_TR(0x6ef8f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ef8fa:{NFSU2_TR(0x6ef8fa);
__builtin_memmove((R+12),(R+0),4);
}
B6ef8fc:{NFSU2_TR(0x6ef8fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ef8ff:{NFSU2_TR(0x6ef8ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6ef902:{NFSU2_TR(0x6ef902);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6ef906:{NFSU2_TR(0x6ef906);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B6ef907:{NFSU2_TR(0x6ef907);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef90b:{NFSU2_TR(0x6ef90b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef90c:{NFSU2_TR(0x6ef90c);
__builtin_memmove((R+4),(R+24),4);
}
B6ef90e:{NFSU2_TR(0x6ef90e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ef912:{NFSU2_TR(0x6ef912);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ef915:{NFSU2_TR(0x6ef915);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef917:{NFSU2_TR(0x6ef917);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef918:{NFSU2_TR(0x6ef918);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ef91dull));
TAIL_STATIC(0x6ee820u,6ee);
}
B6ef91d:L6ef91d:{c.instructions+=15;NFSU2_TR(0x6ef91d);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ef921:{NFSU2_TR(0x6ef921);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ef924:{NFSU2_TR(0x6ef924);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ef927:{NFSU2_TR(0x6ef927);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6ef92b:{NFSU2_TR(0x6ef92b);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6ef92f:{NFSU2_TR(0x6ef92f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6ef930:{NFSU2_TR(0x6ef930);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ef934:{NFSU2_TR(0x6ef934);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef935:{NFSU2_TR(0x6ef935);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ef939:{NFSU2_TR(0x6ef939);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ef93d:{NFSU2_TR(0x6ef93d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ef940:{NFSU2_TR(0x6ef940);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef942:{NFSU2_TR(0x6ef942);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef943:{NFSU2_TR(0x6ef943);
__builtin_memmove((R+4),(R+24),4);
}
B6ef945:{NFSU2_TR(0x6ef945);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ef94aull));
TAIL_STATIC(0x6ee820u,6ee);
}
B6ef94a:L6ef94a:{c.instructions+=9;NFSU2_TR(0x6ef94a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ef94e:{NFSU2_TR(0x6ef94e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ef952:{NFSU2_TR(0x6ef952);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ef956:{NFSU2_TR(0x6ef956);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ef95a:{NFSU2_TR(0x6ef95a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef95b:{NFSU2_TR(0x6ef95b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef95c:{NFSU2_TR(0x6ef95c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef95d:{NFSU2_TR(0x6ef95d);
__builtin_memmove((R+4),(R+24),4);
}
B6ef95f:{NFSU2_TR(0x6ef95f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ef964ull));
TAIL_STATIC(0x6eecf0u,6ee);
}
B6ef964:L6ef964:{c.instructions+=2;NFSU2_TR(0x6ef964);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ef966:{NFSU2_TR(0x6ef966);
if(r1(R+518)){{goto L6ef983;}}
}
B6ef968:L6ef968:{c.instructions+=3;NFSU2_TR(0x6ef968);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef969:{NFSU2_TR(0x6ef969);
__builtin_memmove((R+4),(R+24),4);
}
B6ef96b:{NFSU2_TR(0x6ef96b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ef970ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ef5e0u);}goto L6ef5e0;}
}
B6ef970:L6ef970:{c.instructions+=3;NFSU2_TR(0x6ef970);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef971:{NFSU2_TR(0x6ef971);
__builtin_memmove((R+4),(R+24),4);
}
B6ef973:{NFSU2_TR(0x6ef973);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ef978ull));
TAIL_STATIC(0x6eeca0u,6ee);
}
B6ef978:L6ef978:{c.instructions+=6;NFSU2_TR(0x6ef978);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ef979:{NFSU2_TR(0x6ef979);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ef97a:{NFSU2_TR(0x6ef97a);
w1(R+0,u8(0x1ull));
}
B6ef97c:{NFSU2_TR(0x6ef97c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ef97d:{NFSU2_TR(0x6ef97d);
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
B6ef980:{NFSU2_TR(0x6ef980);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ef983:L6ef983:{c.instructions+=6;NFSU2_TR(0x6ef983);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ef984:{NFSU2_TR(0x6ef984);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ef985:{NFSU2_TR(0x6ef985);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B6ef987:{NFSU2_TR(0x6ef987);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ef988:{NFSU2_TR(0x6ef988);
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
B6ef98b:{NFSU2_TR(0x6ef98b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ef990:L6ef990:{c.instructions+=6;NFSU2_TR(0x6ef990);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6ef994:{NFSU2_TR(0x6ef994);
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
B6ef996:{NFSU2_TR(0x6ef996);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ef997:{NFSU2_TR(0x6ef997);
__builtin_memmove((R+28),(R+4),4);
}
B6ef999:{NFSU2_TR(0x6ef999);
w4(R+4,u32(0x8ull));
}
B6ef99e:{NFSU2_TR(0x6ef99e);
if(r1(R+518)){{goto L6ef9ab;}}
}
B6ef9a0:L6ef9a0:{c.instructions+=1;NFSU2_TR(0x6ef9a0);
w4(R+0,u32(0xffffffffull));
}
B6ef9a5:L6ef9a5:{c.instructions+=1;NFSU2_TR(0x6ef9a5);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6ef9a7;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ef9a5u);}goto L6ef9a5;}
}
B6ef9a7:L6ef9a7:{c.instructions+=2;NFSU2_TR(0x6ef9a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ef9a8:{NFSU2_TR(0x6ef9a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ef9ab:L6ef9ab:{c.instructions+=1;NFSU2_TR(0x6ef9ab);
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
B6ef9ad:L6ef9ad:{c.instructions+=1;NFSU2_TR(0x6ef9ad);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6ef9af;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ef9adu);}goto L6ef9ad;}
}
B6ef9af:L6ef9af:{c.instructions+=2;NFSU2_TR(0x6ef9af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ef9b0:{NFSU2_TR(0x6ef9b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ef9c0:L6ef9c0:{c.instructions+=6;NFSU2_TR(0x6ef9c0);
__builtin_memmove((R+0),(R+4),4);
}
B6ef9c2:{NFSU2_TR(0x6ef9c2);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6ef9c6:{NFSU2_TR(0x6ef9c6);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ef9c8:{NFSU2_TR(0x6ef9c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ef9cc:{NFSU2_TR(0x6ef9cc);
__builtin_memmove((R+8),(R+4),4);
}
B6ef9ce:{NFSU2_TR(0x6ef9ce);
if(r1(R+518)){{goto L6ef9e5;}}
}
B6ef9d0:L6ef9d0:{c.instructions+=7;NFSU2_TR(0x6ef9d0);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B6ef9d3:{NFSU2_TR(0x6ef9d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6ef9d6:{NFSU2_TR(0x6ef9d6);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6ef9d9:{NFSU2_TR(0x6ef9d9);
w4(R+8,u32(0x1ull));
}
B6ef9de:{NFSU2_TR(0x6ef9de);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B6ef9e0:{NFSU2_TR(0x6ef9e0);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))|u32(r4(R+8))));
s4(u32(r4(R+0)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6ef9e2:{NFSU2_TR(0x6ef9e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ef9e5:L6ef9e5:{c.instructions+=10;NFSU2_TR(0x6ef9e5);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B6ef9e8:{NFSU2_TR(0x6ef9e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6ef9eb:{NFSU2_TR(0x6ef9eb);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6ef9ee:{NFSU2_TR(0x6ef9ee);
w4(R+8,u32(0x1ull));
}
B6ef9f3:{NFSU2_TR(0x6ef9f3);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B6ef9f5:{NFSU2_TR(0x6ef9f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6ef9f7:{NFSU2_TR(0x6ef9f7);
w4(R+8,u32(~u32(r4(R+8))));
}
B6ef9f9:{NFSU2_TR(0x6ef9f9);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ef9fb:{NFSU2_TR(0x6ef9fb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6ef9fd:{NFSU2_TR(0x6ef9fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6efa00:L6efa00:{c.instructions+=7;NFSU2_TR(0x6efa00);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6efa04:{NFSU2_TR(0x6efa04);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6efa08:{NFSU2_TR(0x6efa08);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6efa0c:{NFSU2_TR(0x6efa0c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6efa0d:{NFSU2_TR(0x6efa0d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6efa0e:{NFSU2_TR(0x6efa0e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6efa0f:{NFSU2_TR(0x6efa0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6efa14ull));
TAIL_STATIC(0x63cedbu,63c);
}
B6efa14:L6efa14:{c.instructions+=1;NFSU2_TR(0x6efa14);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6efa20:L6efa20:{c.instructions+=6;NFSU2_TR(0x6efa20);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6efa24:{NFSU2_TR(0x6efa24);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6efa28:{NFSU2_TR(0x6efa28);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B6efa2a:{NFSU2_TR(0x6efa2a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6efa2b:{NFSU2_TR(0x6efa2b);
__builtin_memmove((R+20),(R+4),4);
}
B6efa2d:{NFSU2_TR(0x6efa2d);
if(r1(R+518)){{goto L6efe30;}}
}
B6efa33:L6efa33:{c.instructions+=9;NFSU2_TR(0x6efa33);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6efa37:{NFSU2_TR(0x6efa37);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6efa38:{NFSU2_TR(0x6efa38);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6efa3c:{NFSU2_TR(0x6efa3c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6efa3d:{NFSU2_TR(0x6efa3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6efa40:{NFSU2_TR(0x6efa40);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B6efa44:{NFSU2_TR(0x6efa44);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6efa45:{NFSU2_TR(0x6efa45);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6efa49:{NFSU2_TR(0x6efa49);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6efa68;}}
}
B6efa4b:L6efa4b:{c.instructions+=2;NFSU2_TR(0x6efa4b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6efa4d:{NFSU2_TR(0x6efa4d);
if(r1(R+518)){{goto L6efa68;}}
}
B6efa4f:L6efa4f:{c.instructions+=2;NFSU2_TR(0x6efa4f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6efa52:{NFSU2_TR(0x6efa52);
if(r1(R+518)){{goto L6efa68;}}
}
B6efa54:L6efa54:{c.instructions+=4;NFSU2_TR(0x6efa54);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6efa58:{NFSU2_TR(0x6efa58);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6efa5c:{NFSU2_TR(0x6efa5c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6efa5e:{NFSU2_TR(0x6efa5e);
if(r1(R+518)){{goto L6efa8a;}}
}
B6efa60:L6efa60:{c.instructions+=2;NFSU2_TR(0x6efa60);
__builtin_memmove((R+4),(R+12),4);
}
B6efa62:{NFSU2_TR(0x6efa62);
__builtin_memmove((R+28),(R+8),4);
}
B6efa64:L6efa64:{c.instructions+=1;NFSU2_TR(0x6efa64);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6efa66;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6efa64u);}goto L6efa64;}
}
B6efa66:L6efa66:{c.instructions+=1;NFSU2_TR(0x6efa66);
{goto L6efa8a;}
}
B6efa68:L6efa68:{c.instructions+=4;NFSU2_TR(0x6efa68);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6efa6c:{NFSU2_TR(0x6efa6c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6efa6e:{NFSU2_TR(0x6efa6e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6efa70:{NFSU2_TR(0x6efa70);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6efa82;}}
}
B6efa72:L6efa72:{c.instructions+=1;NFSU2_TR(0x6efa72);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B6efa75:L6efa75:{c.instructions+=6;NFSU2_TR(0x6efa75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6efa77:{NFSU2_TR(0x6efa77);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B6efa7a:{NFSU2_TR(0x6efa7a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6efa7d:{NFSU2_TR(0x6efa7d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6efa7e:{NFSU2_TR(0x6efa7e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6efa80:{NFSU2_TR(0x6efa80);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6efa75u);}goto L6efa75;}}
}
B6efa82:L6efa82:{c.instructions+=1;NFSU2_TR(0x6efa82);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6efa8a:L6efa8a:{c.instructions+=2;NFSU2_TR(0x6efa8a);
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
B6efa8c:{NFSU2_TR(0x6efa8c);
if(r1(R+518)){{goto L6efe2d;}}
}
B6efa92:L6efa92:{c.instructions+=6;NFSU2_TR(0x6efa92);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+20))),2);
w4(R+28,u32(r2(U+0)));
}
B6efa96:{NFSU2_TR(0x6efa96);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6efa99:{NFSU2_TR(0x6efa99);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B6efa9d:{NFSU2_TR(0x6efa9d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6efaa0:{NFSU2_TR(0x6efaa0);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x4ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6efaa3:{NFSU2_TR(0x6efaa3);
if(r1(R+518)){{goto L6efca3;}}
}
B6efaa9:L6efaa9:{c.instructions+=2;NFSU2_TR(0x6efaa9);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x8ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6efaac:{NFSU2_TR(0x6efaac);
if(r1(R+518)){{goto L6efbb5;}}
}
B6efab2:L6efab2:{c.instructions+=2;NFSU2_TR(0x6efab2);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+512,u8((r1(U+3))<(u8(0x10ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x10ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x10ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6efab5:{NFSU2_TR(0x6efab5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6efe2d;}}
}
B6efabb:L6efabb:{c.instructions+=7;NFSU2_TR(0x6efabb);
u8 U[32];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w8(U+8,u64(s64(s32(r4(R+28)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+28,u32(r8(U+24)));
}
B6efac0:{NFSU2_TR(0x6efac0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6efac4:{NFSU2_TR(0x6efac4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6efac8:{NFSU2_TR(0x6efac8);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B6efaca:{NFSU2_TR(0x6efaca);
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
B6efacc:{NFSU2_TR(0x6efacc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6efacf:{NFSU2_TR(0x6efacf);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6efe2d;}}
}
B6efad5:L6efad5:{c.instructions+=3;NFSU2_TR(0x6efad5);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B6efad7:{NFSU2_TR(0x6efad7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6efadb:{NFSU2_TR(0x6efadb);
{goto L6efae0;}
}
B6efae0:L6efae0:{c.instructions+=4;NFSU2_TR(0x6efae0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6efae4:{NFSU2_TR(0x6efae4);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6efae6:{NFSU2_TR(0x6efae6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6efae9:{NFSU2_TR(0x6efae9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6efb78;}}
}
B6efaef:L6efaef:{c.instructions+=2;NFSU2_TR(0x6efaef);
w4(R+12,u32(0x3ull));
}
B6efaf4:{NFSU2_TR(0x6efaf4);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6efaf7:L6efaf7:{c.instructions+=39;NFSU2_TR(0x6efaf7);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+20,u32(r2(U+0)));
}
B6efafa:{NFSU2_TR(0x6efafa);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6efafe:{NFSU2_TR(0x6efafe);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B6efb01:{NFSU2_TR(0x6efb01);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B6efb04:{NFSU2_TR(0x6efb04);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6efb08:{NFSU2_TR(0x6efb08);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B6efb0b:{NFSU2_TR(0x6efb0b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B6efb0e:{NFSU2_TR(0x6efb0e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B6efb11:{NFSU2_TR(0x6efb11);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6efb14:{NFSU2_TR(0x6efb14);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6efb17:{NFSU2_TR(0x6efb17);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B6efb1a:{NFSU2_TR(0x6efb1a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B6efb1d:{NFSU2_TR(0x6efb1d);
{u32 ea_=u32(r4(R+4)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6efb20:{NFSU2_TR(0x6efb20);
{u32 ea_=u32(r4(R+0)+u32(4294967248u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6efb23:{NFSU2_TR(0x6efb23);
{u32 ea_=u32(r4(R+4)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6efb26:{NFSU2_TR(0x6efb26);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(r2(U+4)));
}
B6efb2a:{NFSU2_TR(0x6efb2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6efb2e:{NFSU2_TR(0x6efb2e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6efb32:{NFSU2_TR(0x6efb32);
{u32 ea_=u32(r4(R+0)+u32(4294967264u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6efb35:{NFSU2_TR(0x6efb35);
{u32 ea_=u32(r4(R+0)+u32(4294967260u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6efb38:{NFSU2_TR(0x6efb38);
{u32 ea_=u32(r4(R+4)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6efb3b:{NFSU2_TR(0x6efb3b);
{u32 ea_=u32(r4(R+4)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6efb3e:{NFSU2_TR(0x6efb3e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(r2(U+4)));
}
B6efb42:{NFSU2_TR(0x6efb42);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6efb46:{NFSU2_TR(0x6efb46);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6efb4a:{NFSU2_TR(0x6efb4a);
{u32 ea_=u32(r4(R+0)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6efb4d:{NFSU2_TR(0x6efb4d);
{u32 ea_=u32(r4(R+0)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6efb50:{NFSU2_TR(0x6efb50);
{u32 ea_=u32(r4(R+4)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6efb53:{NFSU2_TR(0x6efb53);
{u32 ea_=u32(r4(R+4)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6efb56:{NFSU2_TR(0x6efb56);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(r2(U+4)));
}
B6efb5a:{NFSU2_TR(0x6efb5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6efb5e:{NFSU2_TR(0x6efb5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6efb62:{NFSU2_TR(0x6efb62);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6efb64:{NFSU2_TR(0x6efb64);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6efb68:{NFSU2_TR(0x6efb68);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6efb6b:{NFSU2_TR(0x6efb6b);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6efb6e:{NFSU2_TR(0x6efb6e);
{u32 ea_=u32(r4(R+4)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6efb71:{NFSU2_TR(0x6efb71);
{u32 ea_=u32(r4(R+4)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6efb74:{NFSU2_TR(0x6efb74);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6efaf7u);}goto L6efaf7;}}
}
B6efb76:L6efb76:{c.instructions+=1;NFSU2_TR(0x6efb76);
__builtin_memmove((R+12),(R+20),4);
}
B6efb78:L6efb78:{c.instructions+=2;NFSU2_TR(0x6efb78);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6efb7a:{NFSU2_TR(0x6efb7a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6efba4;}}
}
B6efb7c:L6efb7c:{c.instructions+=1;NFSU2_TR(0x6efb7c);
__builtin_memmove((R+16),(R+16),4);
}
B6efb80:L6efb80:{c.instructions+=12;NFSU2_TR(0x6efb80);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+4,u32(r2(U+0)));
}
B6efb83:{NFSU2_TR(0x6efb83);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6efb87:{NFSU2_TR(0x6efb87);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B6efb8a:{NFSU2_TR(0x6efb8a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B6efb8d:{NFSU2_TR(0x6efb8d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6efb91:{NFSU2_TR(0x6efb91);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6efb92:{NFSU2_TR(0x6efb92);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6efb94:{NFSU2_TR(0x6efb94);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6efb97:{NFSU2_TR(0x6efb97);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6efb9b:{NFSU2_TR(0x6efb9b);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6efb9e:{NFSU2_TR(0x6efb9e);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6efba2:{NFSU2_TR(0x6efba2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6efb80u);}goto L6efb80;}}
}
B6efba4:L6efba4:{c.instructions+=2;NFSU2_TR(0x6efba4);
u8 U[14];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
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
B6efba8:{NFSU2_TR(0x6efba8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6efae0u);}goto L6efae0;}}
}
B6efbae:L6efbae:{c.instructions+=5;NFSU2_TR(0x6efbae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6efbaf:{NFSU2_TR(0x6efbaf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6efbb0:{NFSU2_TR(0x6efbb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6efbb1:{NFSU2_TR(0x6efbb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6efbb2:{NFSU2_TR(0x6efbb2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6efbb5:L6efbb5:{c.instructions+=8;NFSU2_TR(0x6efbb5);
u8 U[32];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w8(U+8,u64(s64(s32(r4(R+28)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+28,u32(r8(U+24)));
}
B6efbba:{NFSU2_TR(0x6efbba);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6efbbe:{NFSU2_TR(0x6efbbe);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6efbc2:{NFSU2_TR(0x6efbc2);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B6efbc4:{NFSU2_TR(0x6efbc4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B6efbc6:{NFSU2_TR(0x6efbc6);
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
B6efbc8:{NFSU2_TR(0x6efbc8);
__builtin_memmove((R+24),(R+28),4);
}
B6efbca:{NFSU2_TR(0x6efbca);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6efe2d;}}
}
B6efbd0:L6efbd0:{c.instructions+=2;NFSU2_TR(0x6efbd0);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B6efbd2:{NFSU2_TR(0x6efbd2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6efbd6:L6efbd6:{c.instructions+=4;NFSU2_TR(0x6efbd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6efbda:{NFSU2_TR(0x6efbda);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6efbdc:{NFSU2_TR(0x6efbdc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6efbdf:{NFSU2_TR(0x6efbdf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6efc66;}}
}
B6efbe5:L6efbe5:{c.instructions+=2;NFSU2_TR(0x6efbe5);
w4(R+12,u32(0x3ull));
}
B6efbea:{NFSU2_TR(0x6efbea);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6efbed:L6efbed:{c.instructions+=39;NFSU2_TR(0x6efbed);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+20,u32(r1(U+0)));
}
B6efbf0:{NFSU2_TR(0x6efbf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6efbf4:{NFSU2_TR(0x6efbf4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6efbf5:{NFSU2_TR(0x6efbf5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6efbf6:{NFSU2_TR(0x6efbf6);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6efbfa:{NFSU2_TR(0x6efbfa);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6efbfb:{NFSU2_TR(0x6efbfb);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B6efbfe:{NFSU2_TR(0x6efbfe);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6efbff:{NFSU2_TR(0x6efbff);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6efc02:{NFSU2_TR(0x6efc02);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6efc05:{NFSU2_TR(0x6efc05);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B6efc08:{NFSU2_TR(0x6efc08);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B6efc0b:{NFSU2_TR(0x6efc0b);
{u32 ea_=u32(r4(R+4)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6efc0e:{NFSU2_TR(0x6efc0e);
{u32 ea_=u32(r4(R+0)+u32(4294967248u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6efc11:{NFSU2_TR(0x6efc11);
{u32 ea_=u32(r4(R+4)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6efc14:{NFSU2_TR(0x6efc14);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+20,u32(r1(U+4)));
}
B6efc18:{NFSU2_TR(0x6efc18);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6efc1c:{NFSU2_TR(0x6efc1c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6efc20:{NFSU2_TR(0x6efc20);
{u32 ea_=u32(r4(R+0)+u32(4294967264u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6efc23:{NFSU2_TR(0x6efc23);
{u32 ea_=u32(r4(R+0)+u32(4294967260u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6efc26:{NFSU2_TR(0x6efc26);
{u32 ea_=u32(r4(R+4)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6efc29:{NFSU2_TR(0x6efc29);
{u32 ea_=u32(r4(R+4)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6efc2c:{NFSU2_TR(0x6efc2c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+20,u32(r1(U+4)));
}
B6efc30:{NFSU2_TR(0x6efc30);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6efc34:{NFSU2_TR(0x6efc34);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6efc38:{NFSU2_TR(0x6efc38);
{u32 ea_=u32(r4(R+0)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6efc3b:{NFSU2_TR(0x6efc3b);
{u32 ea_=u32(r4(R+0)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6efc3e:{NFSU2_TR(0x6efc3e);
{u32 ea_=u32(r4(R+4)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6efc41:{NFSU2_TR(0x6efc41);
{u32 ea_=u32(r4(R+4)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6efc44:{NFSU2_TR(0x6efc44);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+20,u32(r1(U+4)));
}
B6efc48:{NFSU2_TR(0x6efc48);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6efc4c:{NFSU2_TR(0x6efc4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6efc50:{NFSU2_TR(0x6efc50);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6efc52:{NFSU2_TR(0x6efc52);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6efc56:{NFSU2_TR(0x6efc56);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6efc59:{NFSU2_TR(0x6efc59);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6efc5c:{NFSU2_TR(0x6efc5c);
{u32 ea_=u32(r4(R+4)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6efc5f:{NFSU2_TR(0x6efc5f);
{u32 ea_=u32(r4(R+4)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6efc62:{NFSU2_TR(0x6efc62);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6efbedu);}goto L6efbed;}}
}
B6efc64:L6efc64:{c.instructions+=1;NFSU2_TR(0x6efc64);
__builtin_memmove((R+12),(R+20),4);
}
B6efc66:L6efc66:{c.instructions+=2;NFSU2_TR(0x6efc66);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6efc68:{NFSU2_TR(0x6efc68);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6efc92;}}
}
B6efc6a:L6efc6a:{c.instructions+=1;NFSU2_TR(0x6efc6a);
__builtin_memmove((R+12),(R+12),4);
}
B6efc70:L6efc70:{c.instructions+=12;NFSU2_TR(0x6efc70);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+4,u32(r1(U+0)));
}
B6efc73:{NFSU2_TR(0x6efc73);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6efc77:{NFSU2_TR(0x6efc77);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6efc78:{NFSU2_TR(0x6efc78);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B6efc7b:{NFSU2_TR(0x6efc7b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6efc7f:{NFSU2_TR(0x6efc7f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6efc80:{NFSU2_TR(0x6efc80);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6efc82:{NFSU2_TR(0x6efc82);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6efc85:{NFSU2_TR(0x6efc85);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6efc89:{NFSU2_TR(0x6efc89);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6efc8c:{NFSU2_TR(0x6efc8c);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6efc90:{NFSU2_TR(0x6efc90);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6efc70u);}goto L6efc70;}}
}
B6efc92:L6efc92:{c.instructions+=2;NFSU2_TR(0x6efc92);
u8 U[14];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
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
B6efc96:{NFSU2_TR(0x6efc96);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6efbd6u);}goto L6efbd6;}}
}
B6efc9c:L6efc9c:{c.instructions+=5;NFSU2_TR(0x6efc9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6efc9d:{NFSU2_TR(0x6efc9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6efc9e:{NFSU2_TR(0x6efc9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6efc9f:{NFSU2_TR(0x6efc9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6efca0:{NFSU2_TR(0x6efca0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6efca3:L6efca3:{c.instructions+=10;NFSU2_TR(0x6efca3);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6efca7:{NFSU2_TR(0x6efca7);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6efca8:{NFSU2_TR(0x6efca8);
w4(R+28,sar<u32>(r4(R+28),u64(u32(0x1ull))));
}
B6efcaa:{NFSU2_TR(0x6efcaa);
u8 U[32];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w8(U+8,u64(s64(s32(r4(R+28)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+28,u32(r8(U+24)));
}
B6efcaf:{NFSU2_TR(0x6efcaf);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B6efcb1:{NFSU2_TR(0x6efcb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B6efcb5:{NFSU2_TR(0x6efcb5);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6efcb8:{NFSU2_TR(0x6efcb8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6efcbc:{NFSU2_TR(0x6efcbc);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffffull))));
__builtin_memmove((R+20),(U+0),4);
}
B6efcbf:{NFSU2_TR(0x6efcbf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6efd6e;}}
}
B6efcc5:L6efcc5:{c.instructions+=2;NFSU2_TR(0x6efcc5);
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
B6efcc7:{NFSU2_TR(0x6efcc7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6efe2d;}}
}
B6efccd:L6efccd:{c.instructions+=5;NFSU2_TR(0x6efccd);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x1ull))));
}
B6efcd0:{NFSU2_TR(0x6efcd0);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B6efcd2:{NFSU2_TR(0x6efcd2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6efcd6:{NFSU2_TR(0x6efcd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6efcda:{NFSU2_TR(0x6efcda);
__builtin_memmove((R+12),(R+12),4);
}
B6efce0:L6efce0:{c.instructions+=4;NFSU2_TR(0x6efce0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6efce4:{NFSU2_TR(0x6efce4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6efce6:{NFSU2_TR(0x6efce6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6efce8:{NFSU2_TR(0x6efce8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6efd3d;}}
}
B6efcea:L6efcea:{c.instructions+=1;NFSU2_TR(0x6efcea);
__builtin_memmove((R+12),(R+12),4);
}
B6efcf0:L6efcf0:{c.instructions+=25;NFSU2_TR(0x6efcf0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6efcf2:{NFSU2_TR(0x6efcf2);
__builtin_memmove((R+12),(R+4),1);
}
B6efcf4:{NFSU2_TR(0x6efcf4);
w1(R+12,u8(u32(r1(R+12))&u32(u8(0xfull))));
}
B6efcf7:{NFSU2_TR(0x6efcf7);
w4(R+12,u32(r1(R+12)));
}
B6efcfa:{NFSU2_TR(0x6efcfa);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6efcfe:{NFSU2_TR(0x6efcfe);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w1(R+4,shr<u8>(r1(R+4),u64(r4(U+0))));
}
B6efd01:{NFSU2_TR(0x6efd01);
w4(R+4,u32(r1(R+4)));
}
B6efd04:{NFSU2_TR(0x6efd04);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6efd08:{NFSU2_TR(0x6efd08);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B6efd0b:{NFSU2_TR(0x6efd0b);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6efd0e:{NFSU2_TR(0x6efd0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6efd12:{NFSU2_TR(0x6efd12);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6efd13:{NFSU2_TR(0x6efd13);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6efd14:{NFSU2_TR(0x6efd14);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6efd18:{NFSU2_TR(0x6efd18);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6efd19:{NFSU2_TR(0x6efd19);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B6efd1c:{NFSU2_TR(0x6efd1c);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6efd1e:{NFSU2_TR(0x6efd1e);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6efd21:{NFSU2_TR(0x6efd21);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6efd25:{NFSU2_TR(0x6efd25);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6efd29:{NFSU2_TR(0x6efd29);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6efd2c:{NFSU2_TR(0x6efd2c);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6efd30:{NFSU2_TR(0x6efd30);
{u32 ea_=u32(r4(R+24)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6efd33:{NFSU2_TR(0x6efd33);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6efd37:{NFSU2_TR(0x6efd37);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6efcf0u);}goto L6efcf0;}}
}
B6efd39:L6efd39:{c.instructions+=1;NFSU2_TR(0x6efd39);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6efd3d:L6efd3d:{c.instructions+=2;NFSU2_TR(0x6efd3d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6efd3f:{NFSU2_TR(0x6efd3f);
if(r1(R+518)){{goto L6efd5d;}}
}
B6efd41:L6efd41:{c.instructions+=10;NFSU2_TR(0x6efd41);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6efd43:{NFSU2_TR(0x6efd43);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6efd44:{NFSU2_TR(0x6efd44);
w1(R+512,u8(0x0ull));
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B6efd47:{NFSU2_TR(0x6efd47);
w4(R+4,u32(r1(R+4)));
}
B6efd4a:{NFSU2_TR(0x6efd4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6efd4e:{NFSU2_TR(0x6efd4e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6efd52:{NFSU2_TR(0x6efd52);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6efd55:{NFSU2_TR(0x6efd55);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6efd58:{NFSU2_TR(0x6efd58);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6efd5a:{NFSU2_TR(0x6efd5a);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6efd5d:L6efd5d:{c.instructions+=2;NFSU2_TR(0x6efd5d);
u8 U[14];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
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
B6efd61:{NFSU2_TR(0x6efd61);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6efce0u);}goto L6efce0;}}
}
B6efd67:L6efd67:{c.instructions+=5;NFSU2_TR(0x6efd67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6efd68:{NFSU2_TR(0x6efd68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6efd69:{NFSU2_TR(0x6efd69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6efd6a:{NFSU2_TR(0x6efd6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6efd6b:{NFSU2_TR(0x6efd6b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6efd6e:L6efd6e:{c.instructions+=2;NFSU2_TR(0x6efd6e);
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
B6efd70:{NFSU2_TR(0x6efd70);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6efe2d;}}
}
B6efd76:L6efd76:{c.instructions+=5;NFSU2_TR(0x6efd76);
__builtin_memmove((R+12),(R+20),4);
}
B6efd78:{NFSU2_TR(0x6efd78);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x1ull))));
}
B6efd7b:{NFSU2_TR(0x6efd7b);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B6efd7d:{NFSU2_TR(0x6efd7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6efd81:{NFSU2_TR(0x6efd81);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6efd85:L6efd85:{c.instructions+=4;NFSU2_TR(0x6efd85);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6efd89:{NFSU2_TR(0x6efd89);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6efd8b:{NFSU2_TR(0x6efd8b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6efd8d:{NFSU2_TR(0x6efd8d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6efe03;}}
}
B6efd8f:L6efd8f:{c.instructions+=14;NFSU2_TR(0x6efd8f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6efd91:{NFSU2_TR(0x6efd91);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w1(R+0,shr<u8>(r1(R+0),u64(r4(U+0))));
}
B6efd94:{NFSU2_TR(0x6efd94);
w4(R+0,u32(r1(R+0)));
}
B6efd97:{NFSU2_TR(0x6efd97);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6efd9b:{NFSU2_TR(0x6efd9b);
w4(R+0,u32(0x1ull));
}
B6efda0:{NFSU2_TR(0x6efda0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6efda1:{NFSU2_TR(0x6efda1);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6efda5:{NFSU2_TR(0x6efda5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B6efda8:{NFSU2_TR(0x6efda8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6efdaa:{NFSU2_TR(0x6efdaa);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6efdad:{NFSU2_TR(0x6efdad);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6efdaf:{NFSU2_TR(0x6efdaf);
{u32 ea_=u32(r4(R+24)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6efdb2:{NFSU2_TR(0x6efdb2);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6efdb4:{NFSU2_TR(0x6efdb4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6efe03;}}
}
B6efdb6:L6efdb6:{c.instructions+=25;NFSU2_TR(0x6efdb6);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6efdb8:{NFSU2_TR(0x6efdb8);
__builtin_memmove((R+12),(R+4),1);
}
B6efdba:{NFSU2_TR(0x6efdba);
w1(R+12,u8(u32(r1(R+12))&u32(u8(0xfull))));
}
B6efdbd:{NFSU2_TR(0x6efdbd);
w4(R+12,u32(r1(R+12)));
}
B6efdc0:{NFSU2_TR(0x6efdc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6efdc4:{NFSU2_TR(0x6efdc4);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w1(R+4,shr<u8>(r1(R+4),u64(r4(U+0))));
}
B6efdc7:{NFSU2_TR(0x6efdc7);
w4(R+4,u32(r1(R+4)));
}
B6efdca:{NFSU2_TR(0x6efdca);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6efdce:{NFSU2_TR(0x6efdce);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B6efdd1:{NFSU2_TR(0x6efdd1);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6efdd4:{NFSU2_TR(0x6efdd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6efdd8:{NFSU2_TR(0x6efdd8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6efdd9:{NFSU2_TR(0x6efdd9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6efdda:{NFSU2_TR(0x6efdda);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6efdde:{NFSU2_TR(0x6efdde);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6efddf:{NFSU2_TR(0x6efddf);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B6efde2:{NFSU2_TR(0x6efde2);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6efde4:{NFSU2_TR(0x6efde4);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6efde7:{NFSU2_TR(0x6efde7);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6efdeb:{NFSU2_TR(0x6efdeb);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6efdef:{NFSU2_TR(0x6efdef);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6efdf2:{NFSU2_TR(0x6efdf2);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6efdf6:{NFSU2_TR(0x6efdf6);
{u32 ea_=u32(r4(R+24)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6efdf9:{NFSU2_TR(0x6efdf9);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6efdfd:{NFSU2_TR(0x6efdfd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6efdb6u);}goto L6efdb6;}}
}
B6efdff:L6efdff:{c.instructions+=1;NFSU2_TR(0x6efdff);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6efe03:L6efe03:{c.instructions+=2;NFSU2_TR(0x6efe03);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6efe05:{NFSU2_TR(0x6efe05);
if(r1(R+518)){{goto L6efe23;}}
}
B6efe07:L6efe07:{c.instructions+=10;NFSU2_TR(0x6efe07);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6efe09:{NFSU2_TR(0x6efe09);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6efe0a:{NFSU2_TR(0x6efe0a);
w1(R+512,u8(0x0ull));
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B6efe0d:{NFSU2_TR(0x6efe0d);
w4(R+4,u32(r1(R+4)));
}
B6efe10:{NFSU2_TR(0x6efe10);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6efe14:{NFSU2_TR(0x6efe14);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6efe18:{NFSU2_TR(0x6efe18);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6efe1b:{NFSU2_TR(0x6efe1b);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6efe1e:{NFSU2_TR(0x6efe1e);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6efe20:{NFSU2_TR(0x6efe20);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6efe23:L6efe23:{c.instructions+=2;NFSU2_TR(0x6efe23);
u8 U[14];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
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
B6efe27:{NFSU2_TR(0x6efe27);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6efd85u);}goto L6efd85;}}
}
B6efe2d:L6efe2d:{c.instructions+=3;NFSU2_TR(0x6efe2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6efe2e:{NFSU2_TR(0x6efe2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6efe2f:{NFSU2_TR(0x6efe2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6efe30:L6efe30:{c.instructions+=2;NFSU2_TR(0x6efe30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6efe31:{NFSU2_TR(0x6efe31);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6efe40:L6efe40:{c.instructions+=9;NFSU2_TR(0x6efe40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B6efe43:{NFSU2_TR(0x6efe43);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6efe44:{NFSU2_TR(0x6efe44);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6efe48:{NFSU2_TR(0x6efe48);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6efe49:{NFSU2_TR(0x6efe49);
__builtin_memmove((R+24),(R+4),4);
}
B6efe4b:{NFSU2_TR(0x6efe4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6efe4f:{NFSU2_TR(0x6efe4f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6efe51:{NFSU2_TR(0x6efe51);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6efe55:{NFSU2_TR(0x6efe55);
if(r1(R+518)){TAIL_STATIC(0x6f03b0u,6f0);}
}
B6efe5b:L6efe5b:{c.instructions+=15;NFSU2_TR(0x6efe5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6efe5f:{NFSU2_TR(0x6efe5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6efe62:{NFSU2_TR(0x6efe62);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B6efe66:{NFSU2_TR(0x6efe66);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6efe6a:{NFSU2_TR(0x6efe6a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6efe6b:{NFSU2_TR(0x6efe6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6efe6f:{NFSU2_TR(0x6efe6f);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6efe70:{NFSU2_TR(0x6efe70);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6efe70);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6efe70);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B6efe72:{NFSU2_TR(0x6efe72);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6efe74:{NFSU2_TR(0x6efe74);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6efe75:{NFSU2_TR(0x6efe75);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6efe79:{NFSU2_TR(0x6efe79);
__builtin_memmove((R+28),(R+0),4);
}
B6efe7b:{NFSU2_TR(0x6efe7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6efe7f:{NFSU2_TR(0x6efe7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6efe83:{NFSU2_TR(0x6efe83);
if(r1(R+518)){{goto L6efed8;}}
}
B6efe85:L6efe85:{c.instructions+=2;NFSU2_TR(0x6efe85);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6efe88:{NFSU2_TR(0x6efe88);
if(r1(R+518)){{goto L6efed8;}}
}
B6efe8a:L6efe8a:{c.instructions+=2;NFSU2_TR(0x6efe8a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6efe8c:{NFSU2_TR(0x6efe8c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6efed8;}}
}
B6efe8e:L6efe8e:{c.instructions+=5;NFSU2_TR(0x6efe8e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6efe90:{NFSU2_TR(0x6efe90);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6efe92:{NFSU2_TR(0x6efe92);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6efe94:{NFSU2_TR(0x6efe94);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6efe98:{NFSU2_TR(0x6efe98);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6eff0e;}}
}
B6efe9a:L6efe9a:{c.instructions+=2;NFSU2_TR(0x6efe9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6efe9e:{NFSU2_TR(0x6efe9e);
__builtin_memmove((R+28),(R+28),4);
}
B6efea0:L6efea0:{c.instructions+=4;NFSU2_TR(0x6efea0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6efea2:{NFSU2_TR(0x6efea2);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6efea6:{NFSU2_TR(0x6efea6);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(r2(U+8)));
}
B6efeaa:{NFSU2_TR(0x6efeaa);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6efec9;}}
}
B6efeac:L6efeac:{c.instructions+=3;NFSU2_TR(0x6efeac);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6efeb0:{NFSU2_TR(0x6efeb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6efeb3:{NFSU2_TR(0x6efeb3);
__builtin_memmove((R+24),(R+20),4);
}
B6efeb5:L6efeb5:{c.instructions+=6;NFSU2_TR(0x6efeb5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6efeb8:{NFSU2_TR(0x6efeb8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6efeba:{NFSU2_TR(0x6efeba);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6efebb:{NFSU2_TR(0x6efebb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6efebe:{NFSU2_TR(0x6efebe);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B6efebf:{NFSU2_TR(0x6efebf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6efeb5u);}goto L6efeb5;}}
}
B6efec1:L6efec1:{c.instructions+=2;NFSU2_TR(0x6efec1);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6efec5:{NFSU2_TR(0x6efec5);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6efec9:L6efec9:{c.instructions+=5;NFSU2_TR(0x6efec9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6efecd:{NFSU2_TR(0x6efecd);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6efece:{NFSU2_TR(0x6efece);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6efed0:{NFSU2_TR(0x6efed0);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6efed4:{NFSU2_TR(0x6efed4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6efea0u);}goto L6efea0;}}
}
B6efed6:L6efed6:{c.instructions+=1;NFSU2_TR(0x6efed6);
{goto L6eff0e;}
}
B6efed8:L6efed8:{c.instructions+=4;NFSU2_TR(0x6efed8);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6efeda:{NFSU2_TR(0x6efeda);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6efedc:{NFSU2_TR(0x6efedc);
__builtin_memmove((R+8),(R+24),4);
}
B6efede:{NFSU2_TR(0x6efede);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6eff0c;}}
}
B6efee0:L6efee0:{c.instructions+=4;NFSU2_TR(0x6efee0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6efee2:{NFSU2_TR(0x6efee2);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6efee6:{NFSU2_TR(0x6efee6);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(r2(U+8)));
}
B6efeea:{NFSU2_TR(0x6efeea);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6eff07;}}
}
B6efeec:L6efeec:{c.instructions+=3;NFSU2_TR(0x6efeec);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6efef0:{NFSU2_TR(0x6efef0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6efef3:{NFSU2_TR(0x6efef3);
__builtin_memmove((R+24),(R+20),4);
}
B6efef5:L6efef5:{c.instructions+=6;NFSU2_TR(0x6efef5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6efef8:{NFSU2_TR(0x6efef8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6efefa:{NFSU2_TR(0x6efefa);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xcull))));
}
B6efefd:{NFSU2_TR(0x6efefd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6eff00:{NFSU2_TR(0x6eff00);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B6eff01:{NFSU2_TR(0x6eff01);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6efef5u);}goto L6efef5;}}
}
B6eff03:L6eff03:{c.instructions+=1;NFSU2_TR(0x6eff03);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6eff07:L6eff07:{c.instructions+=3;NFSU2_TR(0x6eff07);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6eff08:{NFSU2_TR(0x6eff08);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6eff0a:{NFSU2_TR(0x6eff0a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6efee0u);}goto L6efee0;}}
}
B6eff0c:L6eff0c:{c.instructions+=1;NFSU2_TR(0x6eff0c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6eff0e:L6eff0e:{c.instructions+=2;NFSU2_TR(0x6eff0e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6eff10:{NFSU2_TR(0x6eff10);
if(r1(R+518)){TAIL_STATIC(0x6f03aeu,6f0);}
}
B6eff16:L6eff16:{c.instructions+=7;NFSU2_TR(0x6eff16);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eff1a:{NFSU2_TR(0x6eff1a);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+8,u32(r2(U+0)));
}
B6eff1d:{NFSU2_TR(0x6eff1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6eff20:{NFSU2_TR(0x6eff20);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6eff24:{NFSU2_TR(0x6eff24);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6eff27:{NFSU2_TR(0x6eff27);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6eff29:{NFSU2_TR(0x6eff29);
if(r1(R+518)){TAIL_STATIC(0x6f01dau,6f0);}
}
B6eff2f:L6eff2f:{c.instructions+=2;NFSU2_TR(0x6eff2f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6eff31:{NFSU2_TR(0x6eff31);
if(r1(R+518)){TAIL_STATIC(0x6f0090u,6f0);}
}
B6eff37:L6eff37:{c.instructions+=2;NFSU2_TR(0x6eff37);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6eff39:{NFSU2_TR(0x6eff39);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6f03aeu,6f0);}
}
B6eff3f:L6eff3f:{c.instructions+=4;NFSU2_TR(0x6eff3f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B6eff42:{NFSU2_TR(0x6eff42);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6eff44:{NFSU2_TR(0x6eff44);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6eff47:{NFSU2_TR(0x6eff47);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6f03aeu,6f0);}
}
B6eff4d:L6eff4d:{c.instructions+=8;NFSU2_TR(0x6eff4d);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+4))));
}
B6eff4f:{NFSU2_TR(0x6eff4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eff53:{NFSU2_TR(0x6eff53);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eff57:{NFSU2_TR(0x6eff57);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eff5b:{NFSU2_TR(0x6eff5b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6eff5d:{NFSU2_TR(0x6eff5d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6eff5f:{NFSU2_TR(0x6eff5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eff63:{NFSU2_TR(0x6eff63);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x6f007cu,6f0);}
}
B6eff69:L6eff69:{c.instructions+=7;NFSU2_TR(0x6eff69);
__builtin_memmove((R+16),(R+16),4);
}
B6eff70:{NFSU2_TR(0x6eff70);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eff74:{NFSU2_TR(0x6eff74);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+4,u32(r2(U+8)));
}
B6eff78:{NFSU2_TR(0x6eff78);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6eff7a:{NFSU2_TR(0x6eff7a);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6eff7d:{NFSU2_TR(0x6eff7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eff81:{NFSU2_TR(0x6eff81);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6f0033u,6f0);}
}
B6eff87:L6eff87:{c.instructions+=37;NFSU2_TR(0x6eff87);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6eff8b:{NFSU2_TR(0x6eff8b);
w4(R+24,u32(0x3ull));
}
B6eff90:{NFSU2_TR(0x6eff90);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6eff93:{NFSU2_TR(0x6eff93);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+12,u32(r2(U+0)));
}
B6eff96:{NFSU2_TR(0x6eff96);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eff9a:{NFSU2_TR(0x6eff9a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B6eff9d:{NFSU2_TR(0x6eff9d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B6effa0:{NFSU2_TR(0x6effa0);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6effa4:{NFSU2_TR(0x6effa4);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B6effa7:{NFSU2_TR(0x6effa7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B6effaa:{NFSU2_TR(0x6effaa);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B6effad:{NFSU2_TR(0x6effad);
{u32 ea_=u32(r4(R+0)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6effb0:{NFSU2_TR(0x6effb0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B6effb3:{NFSU2_TR(0x6effb3);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6effb6:{NFSU2_TR(0x6effb6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B6effb9:{NFSU2_TR(0x6effb9);
{u32 ea_=u32(r4(R+0)+u32(4294967248u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6effbc:{NFSU2_TR(0x6effbc);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B6effbf:{NFSU2_TR(0x6effbf);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6effc2:{NFSU2_TR(0x6effc2);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6effc6:{NFSU2_TR(0x6effc6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B6effc9:{NFSU2_TR(0x6effc9);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6effcb:{NFSU2_TR(0x6effcb);
{u32 ea_=u32(r4(R+4)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6effce:{NFSU2_TR(0x6effce);
{u32 ea_=u32(r4(R+4)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6effd1:{NFSU2_TR(0x6effd1);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B6effd5:{NFSU2_TR(0x6effd5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6effd9:{NFSU2_TR(0x6effd9);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6effdd:{NFSU2_TR(0x6effdd);
{u32 ea_=u32(r4(R+0)+u32(4294967264u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6effe0:{NFSU2_TR(0x6effe0);
{u32 ea_=u32(r4(R+0)+u32(4294967260u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6effe3:{NFSU2_TR(0x6effe3);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6effe7:{NFSU2_TR(0x6effe7);
{u32 ea_=u32(r4(R+4)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6effea:{NFSU2_TR(0x6effea);
{u32 ea_=u32(r4(R+4)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6effed:{NFSU2_TR(0x6effed);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B6efff1:{NFSU2_TR(0x6efff1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6efff5:{NFSU2_TR(0x6efff5);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6efff9:{NFSU2_TR(0x6efff9);
{u32 ea_=u32(r4(R+0)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6efffc:{NFSU2_TR(0x6efffc);
{u32 ea_=u32(r4(R+0)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6effff:{NFSU2_TR(0x6effff);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
TAIL_STATIC(0x6f0003u,6f0);
}
XIT:NFSU2_TR_EXIT(0x6ef,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
