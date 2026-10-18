#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_4cb(u8* __restrict R,Cpu& c);
u32 body_4de(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_51e(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4dd,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4dd,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4dd(u8* __restrict R,Cpu& c);
u32 page_4dd(Cpu& c){return body_4dd(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4dd(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4dd000:goto L4dd000;
case 0x4dd005:goto L4dd005;
case 0x4dd007:c.instructions+=1;goto B4dd007;
case 0x4dd00c:goto L4dd00c;
case 0x4dd00e:c.instructions+=5;goto B4dd00e;
case 0x4dd011:c.instructions+=4;goto B4dd011;
case 0x4dd015:c.instructions+=3;goto B4dd015;
case 0x4dd017:c.instructions+=2;goto B4dd017;
case 0x4dd01f:c.instructions+=1;goto B4dd01f;
case 0x4dd021:goto L4dd021;
case 0x4dd026:c.instructions+=9;goto B4dd026;
case 0x4dd029:c.instructions+=8;goto B4dd029;
case 0x4dd030:c.instructions+=7;goto B4dd030;
case 0x4dd032:c.instructions+=6;goto B4dd032;
case 0x4dd038:c.instructions+=5;goto B4dd038;
case 0x4dd039:c.instructions+=4;goto B4dd039;
case 0x4dd03f:c.instructions+=3;goto B4dd03f;
case 0x4dd040:c.instructions+=2;goto B4dd040;
case 0x4dd042:c.instructions+=1;goto B4dd042;
case 0x4dd047:goto L4dd047;
case 0x4dd04d:c.instructions+=3;goto B4dd04d;
case 0x4dd050:c.instructions+=2;goto B4dd050;
case 0x4dd052:c.instructions+=1;goto B4dd052;
case 0x4dd054:goto L4dd054;
case 0x4dd056:goto L4dd056;
case 0x4dd058:c.instructions+=2;goto B4dd058;
case 0x4dd060:c.instructions+=1;goto B4dd060;
case 0x4dd065:goto L4dd065;
case 0x4dd067:c.instructions+=5;goto B4dd067;
case 0x4dd06a:c.instructions+=4;goto B4dd06a;
case 0x4dd06e:c.instructions+=3;goto B4dd06e;
case 0x4dd070:c.instructions+=2;goto B4dd070;
case 0x4dd078:c.instructions+=1;goto B4dd078;
case 0x4dd07a:goto L4dd07a;
case 0x4dd07f:c.instructions+=9;goto B4dd07f;
case 0x4dd082:c.instructions+=8;goto B4dd082;
case 0x4dd089:c.instructions+=7;goto B4dd089;
case 0x4dd08b:c.instructions+=6;goto B4dd08b;
case 0x4dd091:c.instructions+=5;goto B4dd091;
case 0x4dd092:c.instructions+=4;goto B4dd092;
case 0x4dd098:c.instructions+=3;goto B4dd098;
case 0x4dd099:c.instructions+=2;goto B4dd099;
case 0x4dd09b:c.instructions+=1;goto B4dd09b;
case 0x4dd0a0:goto L4dd0a0;
case 0x4dd0a6:c.instructions+=2;goto B4dd0a6;
case 0x4dd0a9:c.instructions+=1;goto B4dd0a9;
case 0x4dd0ab:goto L4dd0ab;
case 0x4dd0ad:goto L4dd0ad;
case 0x4dd0af:c.instructions+=2;goto B4dd0af;
case 0x4dd0b7:c.instructions+=1;goto B4dd0b7;
case 0x4dd0bc:goto L4dd0bc;
case 0x4dd0be:c.instructions+=5;goto B4dd0be;
case 0x4dd0c1:c.instructions+=4;goto B4dd0c1;
case 0x4dd0c5:c.instructions+=3;goto B4dd0c5;
case 0x4dd0c7:c.instructions+=2;goto B4dd0c7;
case 0x4dd0cf:c.instructions+=1;goto B4dd0cf;
case 0x4dd0d1:goto L4dd0d1;
case 0x4dd0d7:c.instructions+=5;goto B4dd0d7;
case 0x4dd0d8:c.instructions+=4;goto B4dd0d8;
case 0x4dd0de:c.instructions+=3;goto B4dd0de;
case 0x4dd0df:c.instructions+=2;goto B4dd0df;
case 0x4dd0e1:c.instructions+=1;goto B4dd0e1;
case 0x4dd0e6:goto L4dd0e6;
case 0x4dd0ec:c.instructions+=1;goto B4dd0ec;
case 0x4dd0ee:goto L4dd0ee;
case 0x4dd0f0:goto L4dd0f0;
case 0x4dd0f1:c.instructions+=5;goto B4dd0f1;
case 0x4dd0f2:c.instructions+=4;goto B4dd0f2;
case 0x4dd0f3:c.instructions+=3;goto B4dd0f3;
case 0x4dd0f5:c.instructions+=2;goto B4dd0f5;
case 0x4dd0fd:c.instructions+=1;goto B4dd0fd;
case 0x4dd102:goto L4dd102;
case 0x4dd104:c.instructions+=1;goto B4dd104;
case 0x4dd109:goto L4dd109;
case 0x4dd10b:c.instructions+=5;goto B4dd10b;
case 0x4dd10e:c.instructions+=4;goto B4dd10e;
case 0x4dd112:c.instructions+=3;goto B4dd112;
case 0x4dd114:c.instructions+=2;goto B4dd114;
case 0x4dd11c:c.instructions+=1;goto B4dd11c;
case 0x4dd11e:goto L4dd11e;
case 0x4dd123:c.instructions+=9;goto B4dd123;
case 0x4dd125:c.instructions+=8;goto B4dd125;
case 0x4dd12b:c.instructions+=7;goto B4dd12b;
case 0x4dd12c:c.instructions+=6;goto B4dd12c;
case 0x4dd132:c.instructions+=5;goto B4dd132;
case 0x4dd135:c.instructions+=4;goto B4dd135;
case 0x4dd13c:c.instructions+=3;goto B4dd13c;
case 0x4dd13d:c.instructions+=2;goto B4dd13d;
case 0x4dd13f:c.instructions+=1;goto B4dd13f;
case 0x4dd144:goto L4dd144;
case 0x4dd14a:c.instructions+=3;goto B4dd14a;
case 0x4dd14d:c.instructions+=2;goto B4dd14d;
case 0x4dd14f:c.instructions+=1;goto B4dd14f;
case 0x4dd151:goto L4dd151;
case 0x4dd153:goto L4dd153;
case 0x4dd155:c.instructions+=2;goto B4dd155;
case 0x4dd15d:c.instructions+=1;goto B4dd15d;
case 0x4dd162:goto L4dd162;
case 0x4dd164:c.instructions+=5;goto B4dd164;
case 0x4dd167:c.instructions+=4;goto B4dd167;
case 0x4dd16b:c.instructions+=3;goto B4dd16b;
case 0x4dd16d:c.instructions+=2;goto B4dd16d;
case 0x4dd175:c.instructions+=1;goto B4dd175;
case 0x4dd177:goto L4dd177;
case 0x4dd17c:c.instructions+=9;goto B4dd17c;
case 0x4dd17e:c.instructions+=8;goto B4dd17e;
case 0x4dd184:c.instructions+=7;goto B4dd184;
case 0x4dd185:c.instructions+=6;goto B4dd185;
case 0x4dd18b:c.instructions+=5;goto B4dd18b;
case 0x4dd18e:c.instructions+=4;goto B4dd18e;
case 0x4dd195:c.instructions+=3;goto B4dd195;
case 0x4dd196:c.instructions+=2;goto B4dd196;
case 0x4dd198:c.instructions+=1;goto B4dd198;
case 0x4dd19d:goto L4dd19d;
case 0x4dd1a3:c.instructions+=2;goto B4dd1a3;
case 0x4dd1a6:c.instructions+=1;goto B4dd1a6;
case 0x4dd1a8:goto L4dd1a8;
case 0x4dd1aa:goto L4dd1aa;
case 0x4dd1ac:c.instructions+=2;goto B4dd1ac;
case 0x4dd1b4:c.instructions+=1;goto B4dd1b4;
case 0x4dd1b9:goto L4dd1b9;
case 0x4dd1bb:c.instructions+=5;goto B4dd1bb;
case 0x4dd1be:c.instructions+=4;goto B4dd1be;
case 0x4dd1c2:c.instructions+=3;goto B4dd1c2;
case 0x4dd1c4:c.instructions+=2;goto B4dd1c4;
case 0x4dd1cc:c.instructions+=1;goto B4dd1cc;
case 0x4dd1ce:goto L4dd1ce;
case 0x4dd1d4:c.instructions+=5;goto B4dd1d4;
case 0x4dd1d5:c.instructions+=4;goto B4dd1d5;
case 0x4dd1db:c.instructions+=3;goto B4dd1db;
case 0x4dd1dc:c.instructions+=2;goto B4dd1dc;
case 0x4dd1de:c.instructions+=1;goto B4dd1de;
case 0x4dd1e3:goto L4dd1e3;
case 0x4dd1e9:c.instructions+=1;goto B4dd1e9;
case 0x4dd1eb:goto L4dd1eb;
case 0x4dd1ed:goto L4dd1ed;
case 0x4dd1ee:c.instructions+=5;goto B4dd1ee;
case 0x4dd1ef:c.instructions+=4;goto B4dd1ef;
case 0x4dd1f0:c.instructions+=3;goto B4dd1f0;
case 0x4dd1f2:c.instructions+=2;goto B4dd1f2;
case 0x4dd1fa:c.instructions+=1;goto B4dd1fa;
case 0x4dd1ff:goto L4dd1ff;
case 0x4dd201:c.instructions+=1;goto B4dd201;
case 0x4dd206:goto L4dd206;
case 0x4dd208:c.instructions+=5;goto B4dd208;
case 0x4dd20b:c.instructions+=4;goto B4dd20b;
case 0x4dd20f:c.instructions+=3;goto B4dd20f;
case 0x4dd211:c.instructions+=2;goto B4dd211;
case 0x4dd219:c.instructions+=1;goto B4dd219;
case 0x4dd21b:goto L4dd21b;
case 0x4dd220:c.instructions+=9;goto B4dd220;
case 0x4dd223:c.instructions+=8;goto B4dd223;
case 0x4dd22a:c.instructions+=7;goto B4dd22a;
case 0x4dd22c:c.instructions+=6;goto B4dd22c;
case 0x4dd232:c.instructions+=5;goto B4dd232;
case 0x4dd233:c.instructions+=4;goto B4dd233;
case 0x4dd239:c.instructions+=3;goto B4dd239;
case 0x4dd23a:c.instructions+=2;goto B4dd23a;
case 0x4dd23c:c.instructions+=1;goto B4dd23c;
case 0x4dd241:goto L4dd241;
case 0x4dd247:c.instructions+=3;goto B4dd247;
case 0x4dd24a:c.instructions+=2;goto B4dd24a;
case 0x4dd24c:c.instructions+=1;goto B4dd24c;
case 0x4dd24e:goto L4dd24e;
case 0x4dd250:goto L4dd250;
case 0x4dd252:c.instructions+=2;goto B4dd252;
case 0x4dd25a:c.instructions+=1;goto B4dd25a;
case 0x4dd25f:goto L4dd25f;
case 0x4dd261:c.instructions+=5;goto B4dd261;
case 0x4dd264:c.instructions+=4;goto B4dd264;
case 0x4dd268:c.instructions+=3;goto B4dd268;
case 0x4dd26a:c.instructions+=2;goto B4dd26a;
case 0x4dd272:c.instructions+=1;goto B4dd272;
case 0x4dd274:goto L4dd274;
case 0x4dd279:c.instructions+=9;goto B4dd279;
case 0x4dd27c:c.instructions+=8;goto B4dd27c;
case 0x4dd283:c.instructions+=7;goto B4dd283;
case 0x4dd285:c.instructions+=6;goto B4dd285;
case 0x4dd28b:c.instructions+=5;goto B4dd28b;
case 0x4dd28c:c.instructions+=4;goto B4dd28c;
case 0x4dd292:c.instructions+=3;goto B4dd292;
case 0x4dd293:c.instructions+=2;goto B4dd293;
case 0x4dd295:c.instructions+=1;goto B4dd295;
case 0x4dd29a:goto L4dd29a;
case 0x4dd2a0:c.instructions+=2;goto B4dd2a0;
case 0x4dd2a3:c.instructions+=1;goto B4dd2a3;
case 0x4dd2a5:goto L4dd2a5;
case 0x4dd2a7:goto L4dd2a7;
case 0x4dd2a9:c.instructions+=2;goto B4dd2a9;
case 0x4dd2b1:c.instructions+=1;goto B4dd2b1;
case 0x4dd2b6:goto L4dd2b6;
case 0x4dd2b8:c.instructions+=5;goto B4dd2b8;
case 0x4dd2bb:c.instructions+=4;goto B4dd2bb;
case 0x4dd2bf:c.instructions+=3;goto B4dd2bf;
case 0x4dd2c1:c.instructions+=2;goto B4dd2c1;
case 0x4dd2c9:c.instructions+=1;goto B4dd2c9;
case 0x4dd2cb:goto L4dd2cb;
case 0x4dd2d1:c.instructions+=5;goto B4dd2d1;
case 0x4dd2d2:c.instructions+=4;goto B4dd2d2;
case 0x4dd2d8:c.instructions+=3;goto B4dd2d8;
case 0x4dd2d9:c.instructions+=2;goto B4dd2d9;
case 0x4dd2db:c.instructions+=1;goto B4dd2db;
case 0x4dd2e0:goto L4dd2e0;
case 0x4dd2e6:c.instructions+=1;goto B4dd2e6;
case 0x4dd2e8:goto L4dd2e8;
case 0x4dd2ea:goto L4dd2ea;
case 0x4dd2eb:c.instructions+=5;goto B4dd2eb;
case 0x4dd2ec:c.instructions+=4;goto B4dd2ec;
case 0x4dd2ed:c.instructions+=3;goto B4dd2ed;
case 0x4dd2ef:c.instructions+=2;goto B4dd2ef;
case 0x4dd2f7:c.instructions+=1;goto B4dd2f7;
case 0x4dd2fc:goto L4dd2fc;
case 0x4dd2fe:c.instructions+=1;goto B4dd2fe;
case 0x4dd303:goto L4dd303;
case 0x4dd305:c.instructions+=5;goto B4dd305;
case 0x4dd308:c.instructions+=4;goto B4dd308;
case 0x4dd30c:c.instructions+=3;goto B4dd30c;
case 0x4dd30e:c.instructions+=2;goto B4dd30e;
case 0x4dd316:c.instructions+=1;goto B4dd316;
case 0x4dd318:goto L4dd318;
case 0x4dd31d:c.instructions+=9;goto B4dd31d;
case 0x4dd320:c.instructions+=8;goto B4dd320;
case 0x4dd327:c.instructions+=7;goto B4dd327;
case 0x4dd329:c.instructions+=6;goto B4dd329;
case 0x4dd32f:c.instructions+=5;goto B4dd32f;
case 0x4dd330:c.instructions+=4;goto B4dd330;
case 0x4dd336:c.instructions+=3;goto B4dd336;
case 0x4dd337:c.instructions+=2;goto B4dd337;
case 0x4dd339:c.instructions+=1;goto B4dd339;
case 0x4dd33e:goto L4dd33e;
case 0x4dd344:c.instructions+=3;goto B4dd344;
case 0x4dd347:c.instructions+=2;goto B4dd347;
case 0x4dd349:c.instructions+=1;goto B4dd349;
case 0x4dd34b:goto L4dd34b;
case 0x4dd34d:goto L4dd34d;
case 0x4dd34f:c.instructions+=2;goto B4dd34f;
case 0x4dd357:c.instructions+=1;goto B4dd357;
case 0x4dd35c:goto L4dd35c;
case 0x4dd35e:c.instructions+=5;goto B4dd35e;
case 0x4dd361:c.instructions+=4;goto B4dd361;
case 0x4dd365:c.instructions+=3;goto B4dd365;
case 0x4dd367:c.instructions+=2;goto B4dd367;
case 0x4dd36f:c.instructions+=1;goto B4dd36f;
case 0x4dd371:goto L4dd371;
case 0x4dd376:c.instructions+=9;goto B4dd376;
case 0x4dd379:c.instructions+=8;goto B4dd379;
case 0x4dd380:c.instructions+=7;goto B4dd380;
case 0x4dd382:c.instructions+=6;goto B4dd382;
case 0x4dd388:c.instructions+=5;goto B4dd388;
case 0x4dd389:c.instructions+=4;goto B4dd389;
case 0x4dd38f:c.instructions+=3;goto B4dd38f;
case 0x4dd390:c.instructions+=2;goto B4dd390;
case 0x4dd392:c.instructions+=1;goto B4dd392;
case 0x4dd397:goto L4dd397;
case 0x4dd39d:c.instructions+=2;goto B4dd39d;
case 0x4dd3a0:c.instructions+=1;goto B4dd3a0;
case 0x4dd3a2:goto L4dd3a2;
case 0x4dd3a4:goto L4dd3a4;
case 0x4dd3a6:c.instructions+=2;goto B4dd3a6;
case 0x4dd3ae:c.instructions+=1;goto B4dd3ae;
case 0x4dd3b3:goto L4dd3b3;
case 0x4dd3b5:c.instructions+=5;goto B4dd3b5;
case 0x4dd3b8:c.instructions+=4;goto B4dd3b8;
case 0x4dd3bc:c.instructions+=3;goto B4dd3bc;
case 0x4dd3be:c.instructions+=2;goto B4dd3be;
case 0x4dd3c6:c.instructions+=1;goto B4dd3c6;
case 0x4dd3c8:goto L4dd3c8;
case 0x4dd3ce:c.instructions+=5;goto B4dd3ce;
case 0x4dd3cf:c.instructions+=4;goto B4dd3cf;
case 0x4dd3d5:c.instructions+=3;goto B4dd3d5;
case 0x4dd3d6:c.instructions+=2;goto B4dd3d6;
case 0x4dd3d8:c.instructions+=1;goto B4dd3d8;
case 0x4dd3dd:goto L4dd3dd;
case 0x4dd3e3:c.instructions+=1;goto B4dd3e3;
case 0x4dd3e5:goto L4dd3e5;
case 0x4dd3e7:goto L4dd3e7;
case 0x4dd3e8:c.instructions+=5;goto B4dd3e8;
case 0x4dd3e9:c.instructions+=4;goto B4dd3e9;
case 0x4dd3ea:c.instructions+=3;goto B4dd3ea;
case 0x4dd3ec:c.instructions+=2;goto B4dd3ec;
case 0x4dd3f4:c.instructions+=1;goto B4dd3f4;
case 0x4dd3f9:goto L4dd3f9;
case 0x4dd3fb:c.instructions+=1;goto B4dd3fb;
case 0x4dd400:goto L4dd400;
case 0x4dd402:c.instructions+=5;goto B4dd402;
case 0x4dd405:c.instructions+=4;goto B4dd405;
case 0x4dd409:c.instructions+=3;goto B4dd409;
case 0x4dd40b:c.instructions+=2;goto B4dd40b;
case 0x4dd413:c.instructions+=1;goto B4dd413;
case 0x4dd415:goto L4dd415;
case 0x4dd41a:c.instructions+=9;goto B4dd41a;
case 0x4dd41c:c.instructions+=8;goto B4dd41c;
case 0x4dd422:c.instructions+=7;goto B4dd422;
case 0x4dd423:c.instructions+=6;goto B4dd423;
case 0x4dd429:c.instructions+=5;goto B4dd429;
case 0x4dd42c:c.instructions+=4;goto B4dd42c;
case 0x4dd433:c.instructions+=3;goto B4dd433;
case 0x4dd434:c.instructions+=2;goto B4dd434;
case 0x4dd436:c.instructions+=1;goto B4dd436;
case 0x4dd43b:goto L4dd43b;
case 0x4dd441:c.instructions+=3;goto B4dd441;
case 0x4dd444:c.instructions+=2;goto B4dd444;
case 0x4dd446:c.instructions+=1;goto B4dd446;
case 0x4dd448:goto L4dd448;
case 0x4dd44a:goto L4dd44a;
case 0x4dd44c:c.instructions+=2;goto B4dd44c;
case 0x4dd454:c.instructions+=1;goto B4dd454;
case 0x4dd459:goto L4dd459;
case 0x4dd45b:c.instructions+=5;goto B4dd45b;
case 0x4dd45e:c.instructions+=4;goto B4dd45e;
case 0x4dd462:c.instructions+=3;goto B4dd462;
case 0x4dd464:c.instructions+=2;goto B4dd464;
case 0x4dd46c:c.instructions+=1;goto B4dd46c;
case 0x4dd46e:goto L4dd46e;
case 0x4dd473:c.instructions+=9;goto B4dd473;
case 0x4dd475:c.instructions+=8;goto B4dd475;
case 0x4dd47b:c.instructions+=7;goto B4dd47b;
case 0x4dd47c:c.instructions+=6;goto B4dd47c;
case 0x4dd482:c.instructions+=5;goto B4dd482;
case 0x4dd485:c.instructions+=4;goto B4dd485;
case 0x4dd48c:c.instructions+=3;goto B4dd48c;
case 0x4dd48d:c.instructions+=2;goto B4dd48d;
case 0x4dd48f:c.instructions+=1;goto B4dd48f;
case 0x4dd494:goto L4dd494;
case 0x4dd49a:c.instructions+=2;goto B4dd49a;
case 0x4dd49d:c.instructions+=1;goto B4dd49d;
case 0x4dd49f:goto L4dd49f;
case 0x4dd4a1:goto L4dd4a1;
case 0x4dd4a3:c.instructions+=2;goto B4dd4a3;
case 0x4dd4ab:c.instructions+=1;goto B4dd4ab;
case 0x4dd4b0:goto L4dd4b0;
case 0x4dd4b2:c.instructions+=5;goto B4dd4b2;
case 0x4dd4b5:c.instructions+=4;goto B4dd4b5;
case 0x4dd4b9:c.instructions+=3;goto B4dd4b9;
case 0x4dd4bb:c.instructions+=2;goto B4dd4bb;
case 0x4dd4c3:c.instructions+=1;goto B4dd4c3;
case 0x4dd4c5:goto L4dd4c5;
case 0x4dd4cb:c.instructions+=5;goto B4dd4cb;
case 0x4dd4cc:c.instructions+=4;goto B4dd4cc;
case 0x4dd4d2:c.instructions+=3;goto B4dd4d2;
case 0x4dd4d3:c.instructions+=2;goto B4dd4d3;
case 0x4dd4d5:c.instructions+=1;goto B4dd4d5;
case 0x4dd4da:goto L4dd4da;
case 0x4dd4e0:c.instructions+=1;goto B4dd4e0;
case 0x4dd4e2:goto L4dd4e2;
case 0x4dd4e4:goto L4dd4e4;
case 0x4dd4e5:c.instructions+=5;goto B4dd4e5;
case 0x4dd4e6:c.instructions+=4;goto B4dd4e6;
case 0x4dd4e7:c.instructions+=3;goto B4dd4e7;
case 0x4dd4e9:c.instructions+=2;goto B4dd4e9;
case 0x4dd4f1:c.instructions+=1;goto B4dd4f1;
case 0x4dd4f6:goto L4dd4f6;
case 0x4dd4f8:c.instructions+=1;goto B4dd4f8;
case 0x4dd4fd:goto L4dd4fd;
case 0x4dd4ff:c.instructions+=5;goto B4dd4ff;
case 0x4dd502:c.instructions+=4;goto B4dd502;
case 0x4dd506:c.instructions+=3;goto B4dd506;
case 0x4dd508:c.instructions+=2;goto B4dd508;
case 0x4dd510:c.instructions+=1;goto B4dd510;
case 0x4dd512:goto L4dd512;
case 0x4dd517:c.instructions+=9;goto B4dd517;
case 0x4dd51a:c.instructions+=8;goto B4dd51a;
case 0x4dd521:c.instructions+=7;goto B4dd521;
case 0x4dd523:c.instructions+=6;goto B4dd523;
case 0x4dd529:c.instructions+=5;goto B4dd529;
case 0x4dd52a:c.instructions+=4;goto B4dd52a;
case 0x4dd530:c.instructions+=3;goto B4dd530;
case 0x4dd531:c.instructions+=2;goto B4dd531;
case 0x4dd533:c.instructions+=1;goto B4dd533;
case 0x4dd538:goto L4dd538;
case 0x4dd53e:c.instructions+=3;goto B4dd53e;
case 0x4dd541:c.instructions+=2;goto B4dd541;
case 0x4dd543:c.instructions+=1;goto B4dd543;
case 0x4dd545:goto L4dd545;
case 0x4dd547:goto L4dd547;
case 0x4dd549:c.instructions+=2;goto B4dd549;
case 0x4dd551:c.instructions+=1;goto B4dd551;
case 0x4dd556:goto L4dd556;
case 0x4dd558:c.instructions+=5;goto B4dd558;
case 0x4dd55b:c.instructions+=4;goto B4dd55b;
case 0x4dd55f:c.instructions+=3;goto B4dd55f;
case 0x4dd561:c.instructions+=2;goto B4dd561;
case 0x4dd569:c.instructions+=1;goto B4dd569;
case 0x4dd56b:goto L4dd56b;
case 0x4dd570:c.instructions+=9;goto B4dd570;
case 0x4dd573:c.instructions+=8;goto B4dd573;
case 0x4dd57a:c.instructions+=7;goto B4dd57a;
case 0x4dd57c:c.instructions+=6;goto B4dd57c;
case 0x4dd582:c.instructions+=5;goto B4dd582;
case 0x4dd583:c.instructions+=4;goto B4dd583;
case 0x4dd589:c.instructions+=3;goto B4dd589;
case 0x4dd58a:c.instructions+=2;goto B4dd58a;
case 0x4dd58c:c.instructions+=1;goto B4dd58c;
case 0x4dd591:goto L4dd591;
case 0x4dd597:c.instructions+=2;goto B4dd597;
case 0x4dd59a:c.instructions+=1;goto B4dd59a;
case 0x4dd59c:goto L4dd59c;
case 0x4dd59e:goto L4dd59e;
case 0x4dd5a0:c.instructions+=2;goto B4dd5a0;
case 0x4dd5a8:c.instructions+=1;goto B4dd5a8;
case 0x4dd5ad:goto L4dd5ad;
case 0x4dd5af:c.instructions+=5;goto B4dd5af;
case 0x4dd5b2:c.instructions+=4;goto B4dd5b2;
case 0x4dd5b6:c.instructions+=3;goto B4dd5b6;
case 0x4dd5b8:c.instructions+=2;goto B4dd5b8;
case 0x4dd5c0:c.instructions+=1;goto B4dd5c0;
case 0x4dd5c2:goto L4dd5c2;
case 0x4dd5c8:c.instructions+=5;goto B4dd5c8;
case 0x4dd5c9:c.instructions+=4;goto B4dd5c9;
case 0x4dd5cf:c.instructions+=3;goto B4dd5cf;
case 0x4dd5d0:c.instructions+=2;goto B4dd5d0;
case 0x4dd5d2:c.instructions+=1;goto B4dd5d2;
case 0x4dd5d7:goto L4dd5d7;
case 0x4dd5dd:c.instructions+=1;goto B4dd5dd;
case 0x4dd5df:goto L4dd5df;
case 0x4dd5e1:goto L4dd5e1;
case 0x4dd5e2:c.instructions+=5;goto B4dd5e2;
case 0x4dd5e3:c.instructions+=4;goto B4dd5e3;
case 0x4dd5e4:c.instructions+=3;goto B4dd5e4;
case 0x4dd5e6:c.instructions+=2;goto B4dd5e6;
case 0x4dd5ee:c.instructions+=1;goto B4dd5ee;
case 0x4dd5f3:goto L4dd5f3;
case 0x4dd5f5:c.instructions+=1;goto B4dd5f5;
case 0x4dd5fa:goto L4dd5fa;
case 0x4dd5fc:c.instructions+=5;goto B4dd5fc;
case 0x4dd5ff:c.instructions+=4;goto B4dd5ff;
case 0x4dd603:c.instructions+=3;goto B4dd603;
case 0x4dd605:c.instructions+=2;goto B4dd605;
case 0x4dd60d:c.instructions+=1;goto B4dd60d;
case 0x4dd60f:goto L4dd60f;
case 0x4dd614:c.instructions+=9;goto B4dd614;
case 0x4dd617:c.instructions+=8;goto B4dd617;
case 0x4dd61e:c.instructions+=7;goto B4dd61e;
case 0x4dd620:c.instructions+=6;goto B4dd620;
case 0x4dd626:c.instructions+=5;goto B4dd626;
case 0x4dd627:c.instructions+=4;goto B4dd627;
case 0x4dd62d:c.instructions+=3;goto B4dd62d;
case 0x4dd62e:c.instructions+=2;goto B4dd62e;
case 0x4dd630:c.instructions+=1;goto B4dd630;
case 0x4dd635:goto L4dd635;
case 0x4dd63b:c.instructions+=3;goto B4dd63b;
case 0x4dd63e:c.instructions+=2;goto B4dd63e;
case 0x4dd640:c.instructions+=1;goto B4dd640;
case 0x4dd642:goto L4dd642;
case 0x4dd644:goto L4dd644;
case 0x4dd646:c.instructions+=2;goto B4dd646;
case 0x4dd64e:c.instructions+=1;goto B4dd64e;
case 0x4dd653:goto L4dd653;
case 0x4dd655:c.instructions+=5;goto B4dd655;
case 0x4dd658:c.instructions+=4;goto B4dd658;
case 0x4dd65c:c.instructions+=3;goto B4dd65c;
case 0x4dd65e:c.instructions+=2;goto B4dd65e;
case 0x4dd666:c.instructions+=1;goto B4dd666;
case 0x4dd668:goto L4dd668;
case 0x4dd66d:c.instructions+=9;goto B4dd66d;
case 0x4dd670:c.instructions+=8;goto B4dd670;
case 0x4dd677:c.instructions+=7;goto B4dd677;
case 0x4dd679:c.instructions+=6;goto B4dd679;
case 0x4dd67f:c.instructions+=5;goto B4dd67f;
case 0x4dd680:c.instructions+=4;goto B4dd680;
case 0x4dd686:c.instructions+=3;goto B4dd686;
case 0x4dd687:c.instructions+=2;goto B4dd687;
case 0x4dd689:c.instructions+=1;goto B4dd689;
case 0x4dd68e:goto L4dd68e;
case 0x4dd694:c.instructions+=2;goto B4dd694;
case 0x4dd697:c.instructions+=1;goto B4dd697;
case 0x4dd699:goto L4dd699;
case 0x4dd69b:goto L4dd69b;
case 0x4dd69d:c.instructions+=2;goto B4dd69d;
case 0x4dd6a5:c.instructions+=1;goto B4dd6a5;
case 0x4dd6aa:goto L4dd6aa;
case 0x4dd6ac:c.instructions+=5;goto B4dd6ac;
case 0x4dd6af:c.instructions+=4;goto B4dd6af;
case 0x4dd6b3:c.instructions+=3;goto B4dd6b3;
case 0x4dd6b5:c.instructions+=2;goto B4dd6b5;
case 0x4dd6bd:c.instructions+=1;goto B4dd6bd;
case 0x4dd6bf:goto L4dd6bf;
case 0x4dd6c5:c.instructions+=5;goto B4dd6c5;
case 0x4dd6c6:c.instructions+=4;goto B4dd6c6;
case 0x4dd6cc:c.instructions+=3;goto B4dd6cc;
case 0x4dd6cd:c.instructions+=2;goto B4dd6cd;
case 0x4dd6cf:c.instructions+=1;goto B4dd6cf;
case 0x4dd6d4:goto L4dd6d4;
case 0x4dd6da:c.instructions+=1;goto B4dd6da;
case 0x4dd6dc:goto L4dd6dc;
case 0x4dd6de:goto L4dd6de;
case 0x4dd6df:c.instructions+=5;goto B4dd6df;
case 0x4dd6e0:c.instructions+=4;goto B4dd6e0;
case 0x4dd6e1:c.instructions+=3;goto B4dd6e1;
case 0x4dd6e3:c.instructions+=2;goto B4dd6e3;
case 0x4dd6eb:c.instructions+=1;goto B4dd6eb;
case 0x4dd6f0:goto L4dd6f0;
case 0x4dd6f2:c.instructions+=1;goto B4dd6f2;
case 0x4dd6f7:goto L4dd6f7;
case 0x4dd6f9:c.instructions+=5;goto B4dd6f9;
case 0x4dd6fc:c.instructions+=4;goto B4dd6fc;
case 0x4dd700:c.instructions+=3;goto B4dd700;
case 0x4dd702:c.instructions+=2;goto B4dd702;
case 0x4dd70a:c.instructions+=1;goto B4dd70a;
case 0x4dd70c:goto L4dd70c;
case 0x4dd711:c.instructions+=9;goto B4dd711;
case 0x4dd713:c.instructions+=8;goto B4dd713;
case 0x4dd719:c.instructions+=7;goto B4dd719;
case 0x4dd71a:c.instructions+=6;goto B4dd71a;
case 0x4dd720:c.instructions+=5;goto B4dd720;
case 0x4dd723:c.instructions+=4;goto B4dd723;
case 0x4dd72a:c.instructions+=3;goto B4dd72a;
case 0x4dd72b:c.instructions+=2;goto B4dd72b;
case 0x4dd72d:c.instructions+=1;goto B4dd72d;
case 0x4dd732:goto L4dd732;
case 0x4dd738:c.instructions+=3;goto B4dd738;
case 0x4dd73b:c.instructions+=2;goto B4dd73b;
case 0x4dd73d:c.instructions+=1;goto B4dd73d;
case 0x4dd73f:goto L4dd73f;
case 0x4dd741:goto L4dd741;
case 0x4dd743:c.instructions+=2;goto B4dd743;
case 0x4dd74b:c.instructions+=1;goto B4dd74b;
case 0x4dd750:goto L4dd750;
case 0x4dd752:c.instructions+=5;goto B4dd752;
case 0x4dd755:c.instructions+=4;goto B4dd755;
case 0x4dd759:c.instructions+=3;goto B4dd759;
case 0x4dd75b:c.instructions+=2;goto B4dd75b;
case 0x4dd763:c.instructions+=1;goto B4dd763;
case 0x4dd765:goto L4dd765;
case 0x4dd76a:c.instructions+=9;goto B4dd76a;
case 0x4dd76c:c.instructions+=8;goto B4dd76c;
case 0x4dd772:c.instructions+=7;goto B4dd772;
case 0x4dd773:c.instructions+=6;goto B4dd773;
case 0x4dd779:c.instructions+=5;goto B4dd779;
case 0x4dd77c:c.instructions+=4;goto B4dd77c;
case 0x4dd783:c.instructions+=3;goto B4dd783;
case 0x4dd784:c.instructions+=2;goto B4dd784;
case 0x4dd786:c.instructions+=1;goto B4dd786;
case 0x4dd78b:goto L4dd78b;
case 0x4dd791:c.instructions+=2;goto B4dd791;
case 0x4dd794:c.instructions+=1;goto B4dd794;
case 0x4dd796:goto L4dd796;
case 0x4dd798:goto L4dd798;
case 0x4dd79a:c.instructions+=2;goto B4dd79a;
case 0x4dd7a2:c.instructions+=1;goto B4dd7a2;
case 0x4dd7a7:goto L4dd7a7;
case 0x4dd7a9:c.instructions+=5;goto B4dd7a9;
case 0x4dd7ac:c.instructions+=4;goto B4dd7ac;
case 0x4dd7b0:c.instructions+=3;goto B4dd7b0;
case 0x4dd7b2:c.instructions+=2;goto B4dd7b2;
case 0x4dd7ba:c.instructions+=1;goto B4dd7ba;
case 0x4dd7bc:goto L4dd7bc;
case 0x4dd7c2:c.instructions+=5;goto B4dd7c2;
case 0x4dd7c3:c.instructions+=4;goto B4dd7c3;
case 0x4dd7c9:c.instructions+=3;goto B4dd7c9;
case 0x4dd7ca:c.instructions+=2;goto B4dd7ca;
case 0x4dd7cc:c.instructions+=1;goto B4dd7cc;
case 0x4dd7d1:goto L4dd7d1;
case 0x4dd7d7:c.instructions+=1;goto B4dd7d7;
case 0x4dd7d9:goto L4dd7d9;
case 0x4dd7db:goto L4dd7db;
case 0x4dd7dc:c.instructions+=5;goto B4dd7dc;
case 0x4dd7dd:c.instructions+=4;goto B4dd7dd;
case 0x4dd7de:c.instructions+=3;goto B4dd7de;
case 0x4dd7e0:c.instructions+=2;goto B4dd7e0;
case 0x4dd7e8:c.instructions+=1;goto B4dd7e8;
case 0x4dd7ed:goto L4dd7ed;
case 0x4dd7ef:c.instructions+=1;goto B4dd7ef;
case 0x4dd7f4:goto L4dd7f4;
case 0x4dd7f6:c.instructions+=5;goto B4dd7f6;
case 0x4dd7f9:c.instructions+=4;goto B4dd7f9;
case 0x4dd7fd:c.instructions+=3;goto B4dd7fd;
case 0x4dd7ff:c.instructions+=2;goto B4dd7ff;
case 0x4dd807:c.instructions+=1;goto B4dd807;
case 0x4dd809:goto L4dd809;
case 0x4dd80e:c.instructions+=9;goto B4dd80e;
case 0x4dd811:c.instructions+=8;goto B4dd811;
case 0x4dd818:c.instructions+=7;goto B4dd818;
case 0x4dd81a:c.instructions+=6;goto B4dd81a;
case 0x4dd820:c.instructions+=5;goto B4dd820;
case 0x4dd821:c.instructions+=4;goto B4dd821;
case 0x4dd827:c.instructions+=3;goto B4dd827;
case 0x4dd828:c.instructions+=2;goto B4dd828;
case 0x4dd82a:c.instructions+=1;goto B4dd82a;
case 0x4dd82f:goto L4dd82f;
case 0x4dd835:c.instructions+=3;goto B4dd835;
case 0x4dd838:c.instructions+=2;goto B4dd838;
case 0x4dd83a:c.instructions+=1;goto B4dd83a;
case 0x4dd83c:goto L4dd83c;
case 0x4dd83e:goto L4dd83e;
case 0x4dd840:c.instructions+=2;goto B4dd840;
case 0x4dd848:c.instructions+=1;goto B4dd848;
case 0x4dd84d:goto L4dd84d;
case 0x4dd84f:c.instructions+=5;goto B4dd84f;
case 0x4dd852:c.instructions+=4;goto B4dd852;
case 0x4dd856:c.instructions+=3;goto B4dd856;
case 0x4dd858:c.instructions+=2;goto B4dd858;
case 0x4dd860:c.instructions+=1;goto B4dd860;
case 0x4dd862:goto L4dd862;
case 0x4dd867:c.instructions+=9;goto B4dd867;
case 0x4dd86a:c.instructions+=8;goto B4dd86a;
case 0x4dd871:c.instructions+=7;goto B4dd871;
case 0x4dd873:c.instructions+=6;goto B4dd873;
case 0x4dd879:c.instructions+=5;goto B4dd879;
case 0x4dd87a:c.instructions+=4;goto B4dd87a;
case 0x4dd880:c.instructions+=3;goto B4dd880;
case 0x4dd881:c.instructions+=2;goto B4dd881;
case 0x4dd883:c.instructions+=1;goto B4dd883;
case 0x4dd888:goto L4dd888;
case 0x4dd88e:c.instructions+=2;goto B4dd88e;
case 0x4dd891:c.instructions+=1;goto B4dd891;
case 0x4dd893:goto L4dd893;
case 0x4dd895:goto L4dd895;
case 0x4dd897:c.instructions+=2;goto B4dd897;
case 0x4dd89f:c.instructions+=1;goto B4dd89f;
case 0x4dd8a4:goto L4dd8a4;
case 0x4dd8a6:c.instructions+=5;goto B4dd8a6;
case 0x4dd8a9:c.instructions+=4;goto B4dd8a9;
case 0x4dd8ad:c.instructions+=3;goto B4dd8ad;
case 0x4dd8af:c.instructions+=2;goto B4dd8af;
case 0x4dd8b7:c.instructions+=1;goto B4dd8b7;
case 0x4dd8b9:goto L4dd8b9;
case 0x4dd8bf:c.instructions+=5;goto B4dd8bf;
case 0x4dd8c0:c.instructions+=4;goto B4dd8c0;
case 0x4dd8c6:c.instructions+=3;goto B4dd8c6;
case 0x4dd8c7:c.instructions+=2;goto B4dd8c7;
case 0x4dd8c9:c.instructions+=1;goto B4dd8c9;
case 0x4dd8ce:goto L4dd8ce;
case 0x4dd8d4:c.instructions+=1;goto B4dd8d4;
case 0x4dd8d6:goto L4dd8d6;
case 0x4dd8d8:goto L4dd8d8;
case 0x4dd8d9:c.instructions+=5;goto B4dd8d9;
case 0x4dd8da:c.instructions+=4;goto B4dd8da;
case 0x4dd8db:c.instructions+=3;goto B4dd8db;
case 0x4dd8dd:c.instructions+=2;goto B4dd8dd;
case 0x4dd8e5:c.instructions+=1;goto B4dd8e5;
case 0x4dd8ea:goto L4dd8ea;
case 0x4dd8ec:c.instructions+=1;goto B4dd8ec;
case 0x4dd8f1:goto L4dd8f1;
case 0x4dd8f3:c.instructions+=5;goto B4dd8f3;
case 0x4dd8f6:c.instructions+=4;goto B4dd8f6;
case 0x4dd8fa:c.instructions+=3;goto B4dd8fa;
case 0x4dd8fc:c.instructions+=2;goto B4dd8fc;
case 0x4dd904:c.instructions+=1;goto B4dd904;
case 0x4dd906:goto L4dd906;
case 0x4dd90b:c.instructions+=9;goto B4dd90b;
case 0x4dd90e:c.instructions+=8;goto B4dd90e;
case 0x4dd915:c.instructions+=7;goto B4dd915;
case 0x4dd917:c.instructions+=6;goto B4dd917;
case 0x4dd91d:c.instructions+=5;goto B4dd91d;
case 0x4dd91e:c.instructions+=4;goto B4dd91e;
case 0x4dd924:c.instructions+=3;goto B4dd924;
case 0x4dd925:c.instructions+=2;goto B4dd925;
case 0x4dd927:c.instructions+=1;goto B4dd927;
case 0x4dd92c:goto L4dd92c;
case 0x4dd932:c.instructions+=3;goto B4dd932;
case 0x4dd935:c.instructions+=2;goto B4dd935;
case 0x4dd937:c.instructions+=1;goto B4dd937;
case 0x4dd939:goto L4dd939;
case 0x4dd93b:goto L4dd93b;
case 0x4dd93d:c.instructions+=2;goto B4dd93d;
case 0x4dd945:c.instructions+=1;goto B4dd945;
case 0x4dd94a:goto L4dd94a;
case 0x4dd94c:c.instructions+=5;goto B4dd94c;
case 0x4dd94f:c.instructions+=4;goto B4dd94f;
case 0x4dd953:c.instructions+=3;goto B4dd953;
case 0x4dd955:c.instructions+=2;goto B4dd955;
case 0x4dd95d:c.instructions+=1;goto B4dd95d;
case 0x4dd95f:goto L4dd95f;
case 0x4dd964:c.instructions+=9;goto B4dd964;
case 0x4dd967:c.instructions+=8;goto B4dd967;
case 0x4dd96e:c.instructions+=7;goto B4dd96e;
case 0x4dd970:c.instructions+=6;goto B4dd970;
case 0x4dd976:c.instructions+=5;goto B4dd976;
case 0x4dd977:c.instructions+=4;goto B4dd977;
case 0x4dd97d:c.instructions+=3;goto B4dd97d;
case 0x4dd97e:c.instructions+=2;goto B4dd97e;
case 0x4dd980:c.instructions+=1;goto B4dd980;
case 0x4dd985:goto L4dd985;
case 0x4dd98b:c.instructions+=2;goto B4dd98b;
case 0x4dd98e:c.instructions+=1;goto B4dd98e;
case 0x4dd990:goto L4dd990;
case 0x4dd992:goto L4dd992;
case 0x4dd994:c.instructions+=2;goto B4dd994;
case 0x4dd99c:c.instructions+=1;goto B4dd99c;
case 0x4dd9a1:goto L4dd9a1;
case 0x4dd9a3:c.instructions+=5;goto B4dd9a3;
case 0x4dd9a6:c.instructions+=4;goto B4dd9a6;
case 0x4dd9aa:c.instructions+=3;goto B4dd9aa;
case 0x4dd9ac:c.instructions+=2;goto B4dd9ac;
case 0x4dd9b4:c.instructions+=1;goto B4dd9b4;
case 0x4dd9b6:goto L4dd9b6;
case 0x4dd9bc:c.instructions+=5;goto B4dd9bc;
case 0x4dd9bd:c.instructions+=4;goto B4dd9bd;
case 0x4dd9c3:c.instructions+=3;goto B4dd9c3;
case 0x4dd9c4:c.instructions+=2;goto B4dd9c4;
case 0x4dd9c6:c.instructions+=1;goto B4dd9c6;
case 0x4dd9cb:goto L4dd9cb;
case 0x4dd9d1:c.instructions+=1;goto B4dd9d1;
case 0x4dd9d3:goto L4dd9d3;
case 0x4dd9d5:goto L4dd9d5;
case 0x4dd9d6:c.instructions+=5;goto B4dd9d6;
case 0x4dd9d7:c.instructions+=4;goto B4dd9d7;
case 0x4dd9d8:c.instructions+=3;goto B4dd9d8;
case 0x4dd9da:c.instructions+=2;goto B4dd9da;
case 0x4dd9e2:c.instructions+=1;goto B4dd9e2;
case 0x4dd9e7:goto L4dd9e7;
case 0x4dd9e9:c.instructions+=1;goto B4dd9e9;
case 0x4dd9ee:goto L4dd9ee;
case 0x4dd9f0:c.instructions+=5;goto B4dd9f0;
case 0x4dd9f3:c.instructions+=4;goto B4dd9f3;
case 0x4dd9f7:c.instructions+=3;goto B4dd9f7;
case 0x4dd9f9:c.instructions+=2;goto B4dd9f9;
case 0x4dda01:c.instructions+=1;goto B4dda01;
case 0x4dda03:goto L4dda03;
case 0x4dda08:c.instructions+=9;goto B4dda08;
case 0x4dda0a:c.instructions+=8;goto B4dda0a;
case 0x4dda10:c.instructions+=7;goto B4dda10;
case 0x4dda11:c.instructions+=6;goto B4dda11;
case 0x4dda17:c.instructions+=5;goto B4dda17;
case 0x4dda1a:c.instructions+=4;goto B4dda1a;
case 0x4dda21:c.instructions+=3;goto B4dda21;
case 0x4dda22:c.instructions+=2;goto B4dda22;
case 0x4dda24:c.instructions+=1;goto B4dda24;
case 0x4dda29:goto L4dda29;
case 0x4dda2f:c.instructions+=3;goto B4dda2f;
case 0x4dda32:c.instructions+=2;goto B4dda32;
case 0x4dda34:c.instructions+=1;goto B4dda34;
case 0x4dda36:goto L4dda36;
case 0x4dda38:goto L4dda38;
case 0x4dda3a:c.instructions+=2;goto B4dda3a;
case 0x4dda42:c.instructions+=1;goto B4dda42;
case 0x4dda47:goto L4dda47;
case 0x4dda49:c.instructions+=5;goto B4dda49;
case 0x4dda4c:c.instructions+=4;goto B4dda4c;
case 0x4dda50:c.instructions+=3;goto B4dda50;
case 0x4dda52:c.instructions+=2;goto B4dda52;
case 0x4dda5a:c.instructions+=1;goto B4dda5a;
case 0x4dda5c:goto L4dda5c;
case 0x4dda61:c.instructions+=9;goto B4dda61;
case 0x4dda63:c.instructions+=8;goto B4dda63;
case 0x4dda69:c.instructions+=7;goto B4dda69;
case 0x4dda6a:c.instructions+=6;goto B4dda6a;
case 0x4dda70:c.instructions+=5;goto B4dda70;
case 0x4dda73:c.instructions+=4;goto B4dda73;
case 0x4dda7a:c.instructions+=3;goto B4dda7a;
case 0x4dda7b:c.instructions+=2;goto B4dda7b;
case 0x4dda7d:c.instructions+=1;goto B4dda7d;
case 0x4dda82:goto L4dda82;
case 0x4dda88:c.instructions+=2;goto B4dda88;
case 0x4dda8b:c.instructions+=1;goto B4dda8b;
case 0x4dda8d:goto L4dda8d;
case 0x4dda8f:goto L4dda8f;
case 0x4dda91:c.instructions+=2;goto B4dda91;
case 0x4dda99:c.instructions+=1;goto B4dda99;
case 0x4dda9e:goto L4dda9e;
case 0x4ddaa0:c.instructions+=5;goto B4ddaa0;
case 0x4ddaa3:c.instructions+=4;goto B4ddaa3;
case 0x4ddaa7:c.instructions+=3;goto B4ddaa7;
case 0x4ddaa9:c.instructions+=2;goto B4ddaa9;
case 0x4ddab1:c.instructions+=1;goto B4ddab1;
case 0x4ddab3:goto L4ddab3;
case 0x4ddab9:c.instructions+=5;goto B4ddab9;
case 0x4ddaba:c.instructions+=4;goto B4ddaba;
case 0x4ddac0:c.instructions+=3;goto B4ddac0;
case 0x4ddac1:c.instructions+=2;goto B4ddac1;
case 0x4ddac3:c.instructions+=1;goto B4ddac3;
case 0x4ddac8:goto L4ddac8;
case 0x4ddace:c.instructions+=1;goto B4ddace;
case 0x4ddad0:goto L4ddad0;
case 0x4ddad2:goto L4ddad2;
case 0x4ddad3:c.instructions+=5;goto B4ddad3;
case 0x4ddad4:c.instructions+=4;goto B4ddad4;
case 0x4ddad5:c.instructions+=3;goto B4ddad5;
case 0x4ddad7:c.instructions+=2;goto B4ddad7;
case 0x4ddadf:c.instructions+=1;goto B4ddadf;
case 0x4ddae4:goto L4ddae4;
case 0x4ddae6:c.instructions+=1;goto B4ddae6;
case 0x4ddaeb:goto L4ddaeb;
case 0x4ddaed:c.instructions+=5;goto B4ddaed;
case 0x4ddaf0:c.instructions+=4;goto B4ddaf0;
case 0x4ddaf4:c.instructions+=3;goto B4ddaf4;
case 0x4ddaf6:c.instructions+=2;goto B4ddaf6;
case 0x4ddafe:c.instructions+=1;goto B4ddafe;
case 0x4ddb00:goto L4ddb00;
case 0x4ddb05:c.instructions+=9;goto B4ddb05;
case 0x4ddb08:c.instructions+=8;goto B4ddb08;
case 0x4ddb0f:c.instructions+=7;goto B4ddb0f;
case 0x4ddb11:c.instructions+=6;goto B4ddb11;
case 0x4ddb17:c.instructions+=5;goto B4ddb17;
case 0x4ddb18:c.instructions+=4;goto B4ddb18;
case 0x4ddb1e:c.instructions+=3;goto B4ddb1e;
case 0x4ddb1f:c.instructions+=2;goto B4ddb1f;
case 0x4ddb21:c.instructions+=1;goto B4ddb21;
case 0x4ddb26:goto L4ddb26;
case 0x4ddb2c:c.instructions+=3;goto B4ddb2c;
case 0x4ddb2f:c.instructions+=2;goto B4ddb2f;
case 0x4ddb31:c.instructions+=1;goto B4ddb31;
case 0x4ddb33:goto L4ddb33;
case 0x4ddb35:goto L4ddb35;
case 0x4ddb37:c.instructions+=2;goto B4ddb37;
case 0x4ddb3f:c.instructions+=1;goto B4ddb3f;
case 0x4ddb44:goto L4ddb44;
case 0x4ddb46:c.instructions+=5;goto B4ddb46;
case 0x4ddb49:c.instructions+=4;goto B4ddb49;
case 0x4ddb4d:c.instructions+=3;goto B4ddb4d;
case 0x4ddb4f:c.instructions+=2;goto B4ddb4f;
case 0x4ddb57:c.instructions+=1;goto B4ddb57;
case 0x4ddb59:goto L4ddb59;
case 0x4ddb5e:c.instructions+=9;goto B4ddb5e;
case 0x4ddb61:c.instructions+=8;goto B4ddb61;
case 0x4ddb68:c.instructions+=7;goto B4ddb68;
case 0x4ddb6a:c.instructions+=6;goto B4ddb6a;
case 0x4ddb70:c.instructions+=5;goto B4ddb70;
case 0x4ddb71:c.instructions+=4;goto B4ddb71;
case 0x4ddb77:c.instructions+=3;goto B4ddb77;
case 0x4ddb78:c.instructions+=2;goto B4ddb78;
case 0x4ddb7a:c.instructions+=1;goto B4ddb7a;
case 0x4ddb7f:goto L4ddb7f;
case 0x4ddb85:c.instructions+=2;goto B4ddb85;
case 0x4ddb88:c.instructions+=1;goto B4ddb88;
case 0x4ddb8a:goto L4ddb8a;
case 0x4ddb8c:goto L4ddb8c;
case 0x4ddb8e:c.instructions+=2;goto B4ddb8e;
case 0x4ddb96:c.instructions+=1;goto B4ddb96;
case 0x4ddb9b:goto L4ddb9b;
case 0x4ddb9d:c.instructions+=5;goto B4ddb9d;
case 0x4ddba0:c.instructions+=4;goto B4ddba0;
case 0x4ddba4:c.instructions+=3;goto B4ddba4;
case 0x4ddba6:c.instructions+=2;goto B4ddba6;
case 0x4ddbae:c.instructions+=1;goto B4ddbae;
case 0x4ddbb0:goto L4ddbb0;
case 0x4ddbb6:c.instructions+=5;goto B4ddbb6;
case 0x4ddbb7:c.instructions+=4;goto B4ddbb7;
case 0x4ddbbd:c.instructions+=3;goto B4ddbbd;
case 0x4ddbbe:c.instructions+=2;goto B4ddbbe;
case 0x4ddbc0:c.instructions+=1;goto B4ddbc0;
case 0x4ddbc5:goto L4ddbc5;
case 0x4ddbcb:c.instructions+=1;goto B4ddbcb;
case 0x4ddbcd:goto L4ddbcd;
case 0x4ddbcf:goto L4ddbcf;
case 0x4ddbd0:c.instructions+=5;goto B4ddbd0;
case 0x4ddbd1:c.instructions+=4;goto B4ddbd1;
case 0x4ddbd2:c.instructions+=3;goto B4ddbd2;
case 0x4ddbd4:c.instructions+=2;goto B4ddbd4;
case 0x4ddbdc:c.instructions+=1;goto B4ddbdc;
case 0x4ddbe1:goto L4ddbe1;
case 0x4ddbe4:c.instructions+=3;goto B4ddbe4;
case 0x4ddbe6:c.instructions+=2;goto B4ddbe6;
case 0x4ddbed:c.instructions+=1;goto B4ddbed;
case 0x4ddbef:goto L4ddbef;
case 0x4ddbf2:c.instructions+=1;goto B4ddbf2;
case 0x4ddbf4:goto L4ddbf4;
case 0x4ddbf6:goto L4ddbf6;
case 0x4ddbfa:c.instructions+=8;goto B4ddbfa;
case 0x4ddbfb:c.instructions+=7;goto B4ddbfb;
case 0x4ddbfe:c.instructions+=6;goto B4ddbfe;
case 0x4ddbff:c.instructions+=5;goto B4ddbff;
case 0x4ddc00:c.instructions+=4;goto B4ddc00;
case 0x4ddc01:c.instructions+=3;goto B4ddc01;
case 0x4ddc08:c.instructions+=2;goto B4ddc08;
case 0x4ddc0b:c.instructions+=1;goto B4ddc0b;
case 0x4ddc10:goto L4ddc10;
case 0x4ddc12:c.instructions+=14;goto B4ddc12;
case 0x4ddc17:c.instructions+=13;goto B4ddc17;
case 0x4ddc1d:c.instructions+=12;goto B4ddc1d;
case 0x4ddc1e:c.instructions+=11;goto B4ddc1e;
case 0x4ddc25:c.instructions+=10;goto B4ddc25;
case 0x4ddc26:c.instructions+=9;goto B4ddc26;
case 0x4ddc27:c.instructions+=8;goto B4ddc27;
case 0x4ddc28:c.instructions+=7;goto B4ddc28;
case 0x4ddc29:c.instructions+=6;goto B4ddc29;
case 0x4ddc2a:c.instructions+=5;goto B4ddc2a;
case 0x4ddc2c:c.instructions+=4;goto B4ddc2c;
case 0x4ddc32:c.instructions+=3;goto B4ddc32;
case 0x4ddc37:c.instructions+=2;goto B4ddc37;
case 0x4ddc38:c.instructions+=1;goto B4ddc38;
case 0x4ddc3d:goto L4ddc3d;
case 0x4ddc3f:c.instructions+=1;goto B4ddc3f;
case 0x4ddc44:goto L4ddc44;
case 0x4ddc46:c.instructions+=6;goto B4ddc46;
case 0x4ddc49:c.instructions+=5;goto B4ddc49;
case 0x4ddc4d:c.instructions+=4;goto B4ddc4d;
case 0x4ddc4f:c.instructions+=3;goto B4ddc4f;
case 0x4ddc51:c.instructions+=2;goto B4ddc51;
case 0x4ddc55:c.instructions+=1;goto B4ddc55;
case 0x4ddc57:goto L4ddc57;
case 0x4ddc5c:c.instructions+=9;goto B4ddc5c;
case 0x4ddc5f:c.instructions+=8;goto B4ddc5f;
case 0x4ddc66:c.instructions+=7;goto B4ddc66;
case 0x4ddc68:c.instructions+=6;goto B4ddc68;
case 0x4ddc6e:c.instructions+=5;goto B4ddc6e;
case 0x4ddc6f:c.instructions+=4;goto B4ddc6f;
case 0x4ddc75:c.instructions+=3;goto B4ddc75;
case 0x4ddc76:c.instructions+=2;goto B4ddc76;
case 0x4ddc78:c.instructions+=1;goto B4ddc78;
case 0x4ddc7d:goto L4ddc7d;
case 0x4ddc83:c.instructions+=2;goto B4ddc83;
case 0x4ddc86:c.instructions+=1;goto B4ddc86;
case 0x4ddc88:goto L4ddc88;
case 0x4ddc8a:c.instructions+=2;goto B4ddc8a;
case 0x4ddc92:c.instructions+=1;goto B4ddc92;
case 0x4ddc97:goto L4ddc97;
case 0x4ddc99:c.instructions+=5;goto B4ddc99;
case 0x4ddc9c:c.instructions+=4;goto B4ddc9c;
case 0x4ddca0:c.instructions+=3;goto B4ddca0;
case 0x4ddca2:c.instructions+=2;goto B4ddca2;
case 0x4ddcaa:c.instructions+=1;goto B4ddcaa;
case 0x4ddcac:goto L4ddcac;
case 0x4ddcb1:c.instructions+=9;goto B4ddcb1;
case 0x4ddcb4:c.instructions+=8;goto B4ddcb4;
case 0x4ddcbb:c.instructions+=7;goto B4ddcbb;
case 0x4ddcbd:c.instructions+=6;goto B4ddcbd;
case 0x4ddcc3:c.instructions+=5;goto B4ddcc3;
case 0x4ddcc4:c.instructions+=4;goto B4ddcc4;
case 0x4ddcca:c.instructions+=3;goto B4ddcca;
case 0x4ddccb:c.instructions+=2;goto B4ddccb;
case 0x4ddccd:c.instructions+=1;goto B4ddccd;
case 0x4ddcd2:goto L4ddcd2;
case 0x4ddcd8:c.instructions+=2;goto B4ddcd8;
case 0x4ddcdb:c.instructions+=1;goto B4ddcdb;
case 0x4ddcdd:goto L4ddcdd;
case 0x4ddcdf:goto L4ddcdf;
case 0x4ddce1:c.instructions+=2;goto B4ddce1;
case 0x4ddce9:c.instructions+=1;goto B4ddce9;
case 0x4ddcee:goto L4ddcee;
case 0x4ddcf0:c.instructions+=5;goto B4ddcf0;
case 0x4ddcf3:c.instructions+=4;goto B4ddcf3;
case 0x4ddcf7:c.instructions+=3;goto B4ddcf7;
case 0x4ddcf9:c.instructions+=2;goto B4ddcf9;
case 0x4ddd01:c.instructions+=1;goto B4ddd01;
case 0x4ddd03:goto L4ddd03;
case 0x4ddd09:c.instructions+=5;goto B4ddd09;
case 0x4ddd0a:c.instructions+=4;goto B4ddd0a;
case 0x4ddd10:c.instructions+=3;goto B4ddd10;
case 0x4ddd11:c.instructions+=2;goto B4ddd11;
case 0x4ddd13:c.instructions+=1;goto B4ddd13;
case 0x4ddd18:goto L4ddd18;
case 0x4ddd1e:c.instructions+=1;goto B4ddd1e;
case 0x4ddd20:goto L4ddd20;
case 0x4ddd22:goto L4ddd22;
case 0x4ddd23:c.instructions+=5;goto B4ddd23;
case 0x4ddd24:c.instructions+=4;goto B4ddd24;
case 0x4ddd25:c.instructions+=3;goto B4ddd25;
case 0x4ddd27:c.instructions+=2;goto B4ddd27;
case 0x4ddd2f:c.instructions+=1;goto B4ddd2f;
case 0x4ddd34:goto L4ddd34;
case 0x4ddd36:c.instructions+=1;goto B4ddd36;
case 0x4ddd3b:goto L4ddd3b;
case 0x4ddd3d:c.instructions+=5;goto B4ddd3d;
case 0x4ddd40:c.instructions+=4;goto B4ddd40;
case 0x4ddd44:c.instructions+=3;goto B4ddd44;
case 0x4ddd46:c.instructions+=2;goto B4ddd46;
case 0x4ddd4e:c.instructions+=1;goto B4ddd4e;
case 0x4ddd50:goto L4ddd50;
case 0x4ddd55:c.instructions+=9;goto B4ddd55;
case 0x4ddd57:c.instructions+=8;goto B4ddd57;
case 0x4ddd5d:c.instructions+=7;goto B4ddd5d;
case 0x4ddd5e:c.instructions+=6;goto B4ddd5e;
case 0x4ddd64:c.instructions+=5;goto B4ddd64;
case 0x4ddd67:c.instructions+=4;goto B4ddd67;
case 0x4ddd6e:c.instructions+=3;goto B4ddd6e;
case 0x4ddd6f:c.instructions+=2;goto B4ddd6f;
case 0x4ddd71:c.instructions+=1;goto B4ddd71;
case 0x4ddd76:goto L4ddd76;
case 0x4ddd7c:c.instructions+=3;goto B4ddd7c;
case 0x4ddd7f:c.instructions+=2;goto B4ddd7f;
case 0x4ddd81:c.instructions+=1;goto B4ddd81;
case 0x4ddd83:goto L4ddd83;
case 0x4ddd85:goto L4ddd85;
case 0x4ddd87:c.instructions+=2;goto B4ddd87;
case 0x4ddd8f:c.instructions+=1;goto B4ddd8f;
case 0x4ddd94:goto L4ddd94;
case 0x4ddd96:c.instructions+=5;goto B4ddd96;
case 0x4ddd99:c.instructions+=4;goto B4ddd99;
case 0x4ddd9d:c.instructions+=3;goto B4ddd9d;
case 0x4ddd9f:c.instructions+=2;goto B4ddd9f;
case 0x4ddda7:c.instructions+=1;goto B4ddda7;
case 0x4ddda9:goto L4ddda9;
case 0x4dddae:c.instructions+=9;goto B4dddae;
case 0x4dddb0:c.instructions+=8;goto B4dddb0;
case 0x4dddb6:c.instructions+=7;goto B4dddb6;
case 0x4dddb7:c.instructions+=6;goto B4dddb7;
case 0x4dddbd:c.instructions+=5;goto B4dddbd;
case 0x4dddc0:c.instructions+=4;goto B4dddc0;
case 0x4dddc7:c.instructions+=3;goto B4dddc7;
case 0x4dddc8:c.instructions+=2;goto B4dddc8;
case 0x4dddca:c.instructions+=1;goto B4dddca;
case 0x4dddcf:goto L4dddcf;
case 0x4dddd5:c.instructions+=2;goto B4dddd5;
case 0x4dddd8:c.instructions+=1;goto B4dddd8;
case 0x4dddda:goto L4dddda;
case 0x4ddddc:goto L4ddddc;
case 0x4dddde:c.instructions+=2;goto B4dddde;
case 0x4ddde6:c.instructions+=1;goto B4ddde6;
case 0x4dddeb:goto L4dddeb;
case 0x4ddded:c.instructions+=5;goto B4ddded;
case 0x4dddf0:c.instructions+=4;goto B4dddf0;
case 0x4dddf4:c.instructions+=3;goto B4dddf4;
case 0x4dddf6:c.instructions+=2;goto B4dddf6;
case 0x4dddfe:c.instructions+=1;goto B4dddfe;
case 0x4dde00:goto L4dde00;
case 0x4dde06:c.instructions+=5;goto B4dde06;
case 0x4dde07:c.instructions+=4;goto B4dde07;
case 0x4dde0d:c.instructions+=3;goto B4dde0d;
case 0x4dde0e:c.instructions+=2;goto B4dde0e;
case 0x4dde10:c.instructions+=1;goto B4dde10;
case 0x4dde15:goto L4dde15;
case 0x4dde1b:c.instructions+=1;goto B4dde1b;
case 0x4dde1d:goto L4dde1d;
case 0x4dde1f:goto L4dde1f;
case 0x4dde20:c.instructions+=5;goto B4dde20;
case 0x4dde21:c.instructions+=4;goto B4dde21;
case 0x4dde22:c.instructions+=3;goto B4dde22;
case 0x4dde24:c.instructions+=2;goto B4dde24;
case 0x4dde2c:c.instructions+=1;goto B4dde2c;
case 0x4dde31:goto L4dde31;
case 0x4dde33:c.instructions+=1;goto B4dde33;
case 0x4dde38:goto L4dde38;
case 0x4dde3a:c.instructions+=5;goto B4dde3a;
case 0x4dde3d:c.instructions+=4;goto B4dde3d;
case 0x4dde41:c.instructions+=3;goto B4dde41;
case 0x4dde43:c.instructions+=2;goto B4dde43;
case 0x4dde4b:c.instructions+=1;goto B4dde4b;
case 0x4dde4d:goto L4dde4d;
case 0x4dde52:c.instructions+=9;goto B4dde52;
case 0x4dde55:c.instructions+=8;goto B4dde55;
case 0x4dde5c:c.instructions+=7;goto B4dde5c;
case 0x4dde5e:c.instructions+=6;goto B4dde5e;
case 0x4dde64:c.instructions+=5;goto B4dde64;
case 0x4dde65:c.instructions+=4;goto B4dde65;
case 0x4dde6b:c.instructions+=3;goto B4dde6b;
case 0x4dde6c:c.instructions+=2;goto B4dde6c;
case 0x4dde6e:c.instructions+=1;goto B4dde6e;
case 0x4dde73:goto L4dde73;
case 0x4dde79:c.instructions+=3;goto B4dde79;
case 0x4dde7c:c.instructions+=2;goto B4dde7c;
case 0x4dde7e:c.instructions+=1;goto B4dde7e;
case 0x4dde80:goto L4dde80;
case 0x4dde82:goto L4dde82;
case 0x4dde84:c.instructions+=2;goto B4dde84;
case 0x4dde8c:c.instructions+=1;goto B4dde8c;
case 0x4dde91:goto L4dde91;
case 0x4dde93:c.instructions+=5;goto B4dde93;
case 0x4dde96:c.instructions+=4;goto B4dde96;
case 0x4dde9a:c.instructions+=3;goto B4dde9a;
case 0x4dde9c:c.instructions+=2;goto B4dde9c;
case 0x4ddea4:c.instructions+=1;goto B4ddea4;
case 0x4ddea6:goto L4ddea6;
case 0x4ddeab:c.instructions+=9;goto B4ddeab;
case 0x4ddeae:c.instructions+=8;goto B4ddeae;
case 0x4ddeb5:c.instructions+=7;goto B4ddeb5;
case 0x4ddeb7:c.instructions+=6;goto B4ddeb7;
case 0x4ddebd:c.instructions+=5;goto B4ddebd;
case 0x4ddebe:c.instructions+=4;goto B4ddebe;
case 0x4ddec4:c.instructions+=3;goto B4ddec4;
case 0x4ddec5:c.instructions+=2;goto B4ddec5;
case 0x4ddec7:c.instructions+=1;goto B4ddec7;
case 0x4ddecc:goto L4ddecc;
case 0x4dded2:c.instructions+=2;goto B4dded2;
case 0x4dded5:c.instructions+=1;goto B4dded5;
case 0x4dded7:goto L4dded7;
case 0x4dded9:goto L4dded9;
case 0x4ddedb:c.instructions+=2;goto B4ddedb;
case 0x4ddee3:c.instructions+=1;goto B4ddee3;
case 0x4ddee8:goto L4ddee8;
case 0x4ddeea:c.instructions+=5;goto B4ddeea;
case 0x4ddeed:c.instructions+=4;goto B4ddeed;
case 0x4ddef1:c.instructions+=3;goto B4ddef1;
case 0x4ddef3:c.instructions+=2;goto B4ddef3;
case 0x4ddefb:c.instructions+=1;goto B4ddefb;
case 0x4ddefd:goto L4ddefd;
case 0x4ddf03:c.instructions+=5;goto B4ddf03;
case 0x4ddf04:c.instructions+=4;goto B4ddf04;
case 0x4ddf0a:c.instructions+=3;goto B4ddf0a;
case 0x4ddf0b:c.instructions+=2;goto B4ddf0b;
case 0x4ddf0d:c.instructions+=1;goto B4ddf0d;
case 0x4ddf12:goto L4ddf12;
case 0x4ddf18:c.instructions+=1;goto B4ddf18;
case 0x4ddf1a:goto L4ddf1a;
case 0x4ddf1c:goto L4ddf1c;
case 0x4ddf1d:c.instructions+=5;goto B4ddf1d;
case 0x4ddf1e:c.instructions+=4;goto B4ddf1e;
case 0x4ddf1f:c.instructions+=3;goto B4ddf1f;
case 0x4ddf21:c.instructions+=2;goto B4ddf21;
case 0x4ddf29:c.instructions+=1;goto B4ddf29;
case 0x4ddf2e:goto L4ddf2e;
case 0x4ddf30:c.instructions+=1;goto B4ddf30;
case 0x4ddf35:goto L4ddf35;
case 0x4ddf37:c.instructions+=5;goto B4ddf37;
case 0x4ddf3a:c.instructions+=4;goto B4ddf3a;
case 0x4ddf3e:c.instructions+=3;goto B4ddf3e;
case 0x4ddf40:c.instructions+=2;goto B4ddf40;
case 0x4ddf48:c.instructions+=1;goto B4ddf48;
case 0x4ddf4a:goto L4ddf4a;
case 0x4ddf4f:c.instructions+=9;goto B4ddf4f;
case 0x4ddf52:c.instructions+=8;goto B4ddf52;
case 0x4ddf59:c.instructions+=7;goto B4ddf59;
case 0x4ddf5b:c.instructions+=6;goto B4ddf5b;
case 0x4ddf61:c.instructions+=5;goto B4ddf61;
case 0x4ddf62:c.instructions+=4;goto B4ddf62;
case 0x4ddf68:c.instructions+=3;goto B4ddf68;
case 0x4ddf69:c.instructions+=2;goto B4ddf69;
case 0x4ddf6b:c.instructions+=1;goto B4ddf6b;
case 0x4ddf70:goto L4ddf70;
case 0x4ddf76:c.instructions+=3;goto B4ddf76;
case 0x4ddf79:c.instructions+=2;goto B4ddf79;
case 0x4ddf7b:c.instructions+=1;goto B4ddf7b;
case 0x4ddf7d:goto L4ddf7d;
case 0x4ddf7f:goto L4ddf7f;
case 0x4ddf81:c.instructions+=2;goto B4ddf81;
case 0x4ddf89:c.instructions+=1;goto B4ddf89;
case 0x4ddf8e:goto L4ddf8e;
case 0x4ddf90:c.instructions+=5;goto B4ddf90;
case 0x4ddf93:c.instructions+=4;goto B4ddf93;
case 0x4ddf97:c.instructions+=3;goto B4ddf97;
case 0x4ddf99:c.instructions+=2;goto B4ddf99;
case 0x4ddfa1:c.instructions+=1;goto B4ddfa1;
case 0x4ddfa3:goto L4ddfa3;
case 0x4ddfa8:c.instructions+=9;goto B4ddfa8;
case 0x4ddfab:c.instructions+=8;goto B4ddfab;
case 0x4ddfb2:c.instructions+=7;goto B4ddfb2;
case 0x4ddfb4:c.instructions+=6;goto B4ddfb4;
case 0x4ddfba:c.instructions+=5;goto B4ddfba;
case 0x4ddfbb:c.instructions+=4;goto B4ddfbb;
case 0x4ddfc1:c.instructions+=3;goto B4ddfc1;
case 0x4ddfc2:c.instructions+=2;goto B4ddfc2;
case 0x4ddfc4:c.instructions+=1;goto B4ddfc4;
case 0x4ddfc9:goto L4ddfc9;
case 0x4ddfcf:c.instructions+=2;goto B4ddfcf;
case 0x4ddfd2:c.instructions+=1;goto B4ddfd2;
case 0x4ddfd4:goto L4ddfd4;
case 0x4ddfd6:goto L4ddfd6;
case 0x4ddfd8:c.instructions+=2;goto B4ddfd8;
case 0x4ddfe0:c.instructions+=1;goto B4ddfe0;
case 0x4ddfe5:goto L4ddfe5;
case 0x4ddfe7:c.instructions+=5;goto B4ddfe7;
case 0x4ddfea:c.instructions+=4;goto B4ddfea;
case 0x4ddfee:c.instructions+=3;goto B4ddfee;
case 0x4ddff0:c.instructions+=2;goto B4ddff0;
case 0x4ddff8:c.instructions+=1;goto B4ddff8;
case 0x4ddffa:goto L4ddffa;
default:missing_instruction(c.pc);}
B4dd000:L4dd000:{c.instructions+=1;NFSU2_TR(0x4dd000);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd005ull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4dd005:L4dd005:{c.instructions+=2;NFSU2_TR(0x4dd005);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd007:{NFSU2_TR(0x4dd007);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd00cull));
TAIL_STATIC(0x575620u,575);
}
B4dd00c:L4dd00c:{c.instructions+=6;NFSU2_TR(0x4dd00c);
__builtin_memmove((R+28),(R+0),4);
}
B4dd00e:{NFSU2_TR(0x4dd00e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dd011:{NFSU2_TR(0x4dd011);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd015:{NFSU2_TR(0x4dd015);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dd017:{NFSU2_TR(0x4dd017);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x12ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd01f:{NFSU2_TR(0x4dd01f);
if(r1(R+518)){{goto L4dd054;}}
}
B4dd021:L4dd021:{c.instructions+=10;NFSU2_TR(0x4dd021);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4dd026:{NFSU2_TR(0x4dd026);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4dd029:{NFSU2_TR(0x4dd029);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B4dd030:{NFSU2_TR(0x4dd030);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd032:{NFSU2_TR(0x4dd032);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dd038:{NFSU2_TR(0x4dd038);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd039:{NFSU2_TR(0x4dd039);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dd03f:{NFSU2_TR(0x4dd03f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd040:{NFSU2_TR(0x4dd040);
__builtin_memmove((R+4),(R+28),4);
}
B4dd042:{NFSU2_TR(0x4dd042);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd047ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dd047:L4dd047:{c.instructions+=4;NFSU2_TR(0x4dd047);
u8 U[4];
w4(U+0,u32(0x7934e8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dd04d:{NFSU2_TR(0x4dd04d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd050:{NFSU2_TR(0x4dd050);
__builtin_memmove((R+20),(R+28),4);
}
B4dd052:{NFSU2_TR(0x4dd052);
{goto L4dd056;}
}
B4dd054:L4dd054:{c.instructions+=1;NFSU2_TR(0x4dd054);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4dd056:L4dd056:{c.instructions+=3;NFSU2_TR(0x4dd056);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd058:{NFSU2_TR(0x4dd058);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd060:{NFSU2_TR(0x4dd060);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd065ull));
TAIL_STATIC(0x575620u,575);
}
B4dd065:L4dd065:{c.instructions+=6;NFSU2_TR(0x4dd065);
__builtin_memmove((R+12),(R+0),4);
}
B4dd067:{NFSU2_TR(0x4dd067);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dd06a:{NFSU2_TR(0x4dd06a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd06e:{NFSU2_TR(0x4dd06e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dd070:{NFSU2_TR(0x4dd070);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x13ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd078:{NFSU2_TR(0x4dd078);
if(r1(R+518)){{goto L4dd0ab;}}
}
B4dd07a:L4dd07a:{c.instructions+=10;NFSU2_TR(0x4dd07a);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4dd07f:{NFSU2_TR(0x4dd07f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4dd082:{NFSU2_TR(0x4dd082);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B4dd089:{NFSU2_TR(0x4dd089);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd08b:{NFSU2_TR(0x4dd08b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dd091:{NFSU2_TR(0x4dd091);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd092:{NFSU2_TR(0x4dd092);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dd098:{NFSU2_TR(0x4dd098);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd099:{NFSU2_TR(0x4dd099);
__builtin_memmove((R+4),(R+12),4);
}
B4dd09b:{NFSU2_TR(0x4dd09b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd0a0ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dd0a0:L4dd0a0:{c.instructions+=3;NFSU2_TR(0x4dd0a0);
u8 U[4];
w4(U+0,u32(0x7934a8ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4dd0a6:{NFSU2_TR(0x4dd0a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd0a9:{NFSU2_TR(0x4dd0a9);
{goto L4dd0ad;}
}
B4dd0ab:L4dd0ab:{c.instructions+=1;NFSU2_TR(0x4dd0ab);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4dd0ad:L4dd0ad:{c.instructions+=3;NFSU2_TR(0x4dd0ad);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd0af:{NFSU2_TR(0x4dd0af);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd0b7:{NFSU2_TR(0x4dd0b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd0bcull));
TAIL_STATIC(0x575620u,575);
}
B4dd0bc:L4dd0bc:{c.instructions+=6;NFSU2_TR(0x4dd0bc);
__builtin_memmove((R+28),(R+0),4);
}
B4dd0be:{NFSU2_TR(0x4dd0be);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dd0c1:{NFSU2_TR(0x4dd0c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd0c5:{NFSU2_TR(0x4dd0c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dd0c7:{NFSU2_TR(0x4dd0c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x14ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd0cf:{NFSU2_TR(0x4dd0cf);
if(r1(R+518)){{goto L4dd0ee;}}
}
B4dd0d1:L4dd0d1:{c.instructions+=6;NFSU2_TR(0x4dd0d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dd0d7:{NFSU2_TR(0x4dd0d7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd0d8:{NFSU2_TR(0x4dd0d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dd0de:{NFSU2_TR(0x4dd0de);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd0df:{NFSU2_TR(0x4dd0df);
__builtin_memmove((R+4),(R+28),4);
}
B4dd0e1:{NFSU2_TR(0x4dd0e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd0e6ull));
TAIL_STATIC(0x51e090u,51e);
}
B4dd0e6:L4dd0e6:{c.instructions+=2;NFSU2_TR(0x4dd0e6);
u8 U[4];
w4(U+0,u32(0x793468ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dd0ec:{NFSU2_TR(0x4dd0ec);
{goto L4dd0f0;}
}
B4dd0ee:L4dd0ee:{c.instructions+=1;NFSU2_TR(0x4dd0ee);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4dd0f0:L4dd0f0:{c.instructions+=6;NFSU2_TR(0x4dd0f0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd0f1:{NFSU2_TR(0x4dd0f1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd0f2:{NFSU2_TR(0x4dd0f2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd0f3:{NFSU2_TR(0x4dd0f3);
__builtin_memmove((R+4),(R+24),4);
}
B4dd0f5:{NFSU2_TR(0x4dd0f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd0fd:{NFSU2_TR(0x4dd0fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd102ull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4dd102:L4dd102:{c.instructions+=2;NFSU2_TR(0x4dd102);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd104:{NFSU2_TR(0x4dd104);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd109ull));
TAIL_STATIC(0x575620u,575);
}
B4dd109:L4dd109:{c.instructions+=6;NFSU2_TR(0x4dd109);
__builtin_memmove((R+28),(R+0),4);
}
B4dd10b:{NFSU2_TR(0x4dd10b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dd10e:{NFSU2_TR(0x4dd10e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd112:{NFSU2_TR(0x4dd112);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dd114:{NFSU2_TR(0x4dd114);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x15ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd11c:{NFSU2_TR(0x4dd11c);
if(r1(R+518)){{goto L4dd151;}}
}
B4dd11e:L4dd11e:{c.instructions+=10;NFSU2_TR(0x4dd11e);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4dd123:{NFSU2_TR(0x4dd123);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd125:{NFSU2_TR(0x4dd125);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dd12b:{NFSU2_TR(0x4dd12b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd12c:{NFSU2_TR(0x4dd12c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dd132:{NFSU2_TR(0x4dd132);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4dd135:{NFSU2_TR(0x4dd135);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B4dd13c:{NFSU2_TR(0x4dd13c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd13d:{NFSU2_TR(0x4dd13d);
__builtin_memmove((R+4),(R+28),4);
}
B4dd13f:{NFSU2_TR(0x4dd13f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd144ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dd144:L4dd144:{c.instructions+=4;NFSU2_TR(0x4dd144);
u8 U[4];
w4(U+0,u32(0x7935a8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dd14a:{NFSU2_TR(0x4dd14a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd14d:{NFSU2_TR(0x4dd14d);
__builtin_memmove((R+20),(R+28),4);
}
B4dd14f:{NFSU2_TR(0x4dd14f);
{goto L4dd153;}
}
B4dd151:L4dd151:{c.instructions+=1;NFSU2_TR(0x4dd151);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4dd153:L4dd153:{c.instructions+=3;NFSU2_TR(0x4dd153);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd155:{NFSU2_TR(0x4dd155);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd15d:{NFSU2_TR(0x4dd15d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd162ull));
TAIL_STATIC(0x575620u,575);
}
B4dd162:L4dd162:{c.instructions+=6;NFSU2_TR(0x4dd162);
__builtin_memmove((R+12),(R+0),4);
}
B4dd164:{NFSU2_TR(0x4dd164);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dd167:{NFSU2_TR(0x4dd167);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd16b:{NFSU2_TR(0x4dd16b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dd16d:{NFSU2_TR(0x4dd16d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x16ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd175:{NFSU2_TR(0x4dd175);
if(r1(R+518)){{goto L4dd1a8;}}
}
B4dd177:L4dd177:{c.instructions+=10;NFSU2_TR(0x4dd177);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4dd17c:{NFSU2_TR(0x4dd17c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd17e:{NFSU2_TR(0x4dd17e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dd184:{NFSU2_TR(0x4dd184);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd185:{NFSU2_TR(0x4dd185);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dd18b:{NFSU2_TR(0x4dd18b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4dd18e:{NFSU2_TR(0x4dd18e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B4dd195:{NFSU2_TR(0x4dd195);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd196:{NFSU2_TR(0x4dd196);
__builtin_memmove((R+4),(R+12),4);
}
B4dd198:{NFSU2_TR(0x4dd198);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd19dull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dd19d:L4dd19d:{c.instructions+=3;NFSU2_TR(0x4dd19d);
u8 U[4];
w4(U+0,u32(0x793568ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4dd1a3:{NFSU2_TR(0x4dd1a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd1a6:{NFSU2_TR(0x4dd1a6);
{goto L4dd1aa;}
}
B4dd1a8:L4dd1a8:{c.instructions+=1;NFSU2_TR(0x4dd1a8);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4dd1aa:L4dd1aa:{c.instructions+=3;NFSU2_TR(0x4dd1aa);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd1ac:{NFSU2_TR(0x4dd1ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd1b4:{NFSU2_TR(0x4dd1b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd1b9ull));
TAIL_STATIC(0x575620u,575);
}
B4dd1b9:L4dd1b9:{c.instructions+=6;NFSU2_TR(0x4dd1b9);
__builtin_memmove((R+28),(R+0),4);
}
B4dd1bb:{NFSU2_TR(0x4dd1bb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dd1be:{NFSU2_TR(0x4dd1be);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd1c2:{NFSU2_TR(0x4dd1c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dd1c4:{NFSU2_TR(0x4dd1c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x17ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd1cc:{NFSU2_TR(0x4dd1cc);
if(r1(R+518)){{goto L4dd1eb;}}
}
B4dd1ce:L4dd1ce:{c.instructions+=6;NFSU2_TR(0x4dd1ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dd1d4:{NFSU2_TR(0x4dd1d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd1d5:{NFSU2_TR(0x4dd1d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dd1db:{NFSU2_TR(0x4dd1db);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd1dc:{NFSU2_TR(0x4dd1dc);
__builtin_memmove((R+4),(R+28),4);
}
B4dd1de:{NFSU2_TR(0x4dd1de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd1e3ull));
TAIL_STATIC(0x51e090u,51e);
}
B4dd1e3:L4dd1e3:{c.instructions+=2;NFSU2_TR(0x4dd1e3);
u8 U[4];
w4(U+0,u32(0x793528ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dd1e9:{NFSU2_TR(0x4dd1e9);
{goto L4dd1ed;}
}
B4dd1eb:L4dd1eb:{c.instructions+=1;NFSU2_TR(0x4dd1eb);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4dd1ed:L4dd1ed:{c.instructions+=6;NFSU2_TR(0x4dd1ed);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd1ee:{NFSU2_TR(0x4dd1ee);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd1ef:{NFSU2_TR(0x4dd1ef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd1f0:{NFSU2_TR(0x4dd1f0);
__builtin_memmove((R+4),(R+24),4);
}
B4dd1f2:{NFSU2_TR(0x4dd1f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd1fa:{NFSU2_TR(0x4dd1fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd1ffull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4dd1ff:L4dd1ff:{c.instructions+=2;NFSU2_TR(0x4dd1ff);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd201:{NFSU2_TR(0x4dd201);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd206ull));
TAIL_STATIC(0x575620u,575);
}
B4dd206:L4dd206:{c.instructions+=6;NFSU2_TR(0x4dd206);
__builtin_memmove((R+28),(R+0),4);
}
B4dd208:{NFSU2_TR(0x4dd208);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dd20b:{NFSU2_TR(0x4dd20b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd20f:{NFSU2_TR(0x4dd20f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dd211:{NFSU2_TR(0x4dd211);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x18ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd219:{NFSU2_TR(0x4dd219);
if(r1(R+518)){{goto L4dd24e;}}
}
B4dd21b:L4dd21b:{c.instructions+=10;NFSU2_TR(0x4dd21b);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4dd220:{NFSU2_TR(0x4dd220);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B4dd223:{NFSU2_TR(0x4dd223);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B4dd22a:{NFSU2_TR(0x4dd22a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd22c:{NFSU2_TR(0x4dd22c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dd232:{NFSU2_TR(0x4dd232);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd233:{NFSU2_TR(0x4dd233);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dd239:{NFSU2_TR(0x4dd239);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd23a:{NFSU2_TR(0x4dd23a);
__builtin_memmove((R+4),(R+28),4);
}
B4dd23c:{NFSU2_TR(0x4dd23c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd241ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dd241:L4dd241:{c.instructions+=4;NFSU2_TR(0x4dd241);
u8 U[4];
w4(U+0,u32(0x793668ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dd247:{NFSU2_TR(0x4dd247);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd24a:{NFSU2_TR(0x4dd24a);
__builtin_memmove((R+20),(R+28),4);
}
B4dd24c:{NFSU2_TR(0x4dd24c);
{goto L4dd250;}
}
B4dd24e:L4dd24e:{c.instructions+=1;NFSU2_TR(0x4dd24e);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4dd250:L4dd250:{c.instructions+=3;NFSU2_TR(0x4dd250);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd252:{NFSU2_TR(0x4dd252);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd25a:{NFSU2_TR(0x4dd25a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd25full));
TAIL_STATIC(0x575620u,575);
}
B4dd25f:L4dd25f:{c.instructions+=6;NFSU2_TR(0x4dd25f);
__builtin_memmove((R+12),(R+0),4);
}
B4dd261:{NFSU2_TR(0x4dd261);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dd264:{NFSU2_TR(0x4dd264);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd268:{NFSU2_TR(0x4dd268);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dd26a:{NFSU2_TR(0x4dd26a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x19ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd272:{NFSU2_TR(0x4dd272);
if(r1(R+518)){{goto L4dd2a5;}}
}
B4dd274:L4dd274:{c.instructions+=10;NFSU2_TR(0x4dd274);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4dd279:{NFSU2_TR(0x4dd279);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B4dd27c:{NFSU2_TR(0x4dd27c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B4dd283:{NFSU2_TR(0x4dd283);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd285:{NFSU2_TR(0x4dd285);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dd28b:{NFSU2_TR(0x4dd28b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd28c:{NFSU2_TR(0x4dd28c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dd292:{NFSU2_TR(0x4dd292);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd293:{NFSU2_TR(0x4dd293);
__builtin_memmove((R+4),(R+12),4);
}
B4dd295:{NFSU2_TR(0x4dd295);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd29aull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dd29a:L4dd29a:{c.instructions+=3;NFSU2_TR(0x4dd29a);
u8 U[4];
w4(U+0,u32(0x793628ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4dd2a0:{NFSU2_TR(0x4dd2a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd2a3:{NFSU2_TR(0x4dd2a3);
{goto L4dd2a7;}
}
B4dd2a5:L4dd2a5:{c.instructions+=1;NFSU2_TR(0x4dd2a5);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4dd2a7:L4dd2a7:{c.instructions+=3;NFSU2_TR(0x4dd2a7);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd2a9:{NFSU2_TR(0x4dd2a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd2b1:{NFSU2_TR(0x4dd2b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd2b6ull));
TAIL_STATIC(0x575620u,575);
}
B4dd2b6:L4dd2b6:{c.instructions+=6;NFSU2_TR(0x4dd2b6);
__builtin_memmove((R+28),(R+0),4);
}
B4dd2b8:{NFSU2_TR(0x4dd2b8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dd2bb:{NFSU2_TR(0x4dd2bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd2bf:{NFSU2_TR(0x4dd2bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dd2c1:{NFSU2_TR(0x4dd2c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x1aull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd2c9:{NFSU2_TR(0x4dd2c9);
if(r1(R+518)){{goto L4dd2e8;}}
}
B4dd2cb:L4dd2cb:{c.instructions+=6;NFSU2_TR(0x4dd2cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dd2d1:{NFSU2_TR(0x4dd2d1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd2d2:{NFSU2_TR(0x4dd2d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dd2d8:{NFSU2_TR(0x4dd2d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd2d9:{NFSU2_TR(0x4dd2d9);
__builtin_memmove((R+4),(R+28),4);
}
B4dd2db:{NFSU2_TR(0x4dd2db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd2e0ull));
TAIL_STATIC(0x51e090u,51e);
}
B4dd2e0:L4dd2e0:{c.instructions+=2;NFSU2_TR(0x4dd2e0);
u8 U[4];
w4(U+0,u32(0x7935e8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dd2e6:{NFSU2_TR(0x4dd2e6);
{goto L4dd2ea;}
}
B4dd2e8:L4dd2e8:{c.instructions+=1;NFSU2_TR(0x4dd2e8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4dd2ea:L4dd2ea:{c.instructions+=6;NFSU2_TR(0x4dd2ea);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd2eb:{NFSU2_TR(0x4dd2eb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd2ec:{NFSU2_TR(0x4dd2ec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd2ed:{NFSU2_TR(0x4dd2ed);
__builtin_memmove((R+4),(R+24),4);
}
B4dd2ef:{NFSU2_TR(0x4dd2ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd2f7:{NFSU2_TR(0x4dd2f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd2fcull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4dd2fc:L4dd2fc:{c.instructions+=2;NFSU2_TR(0x4dd2fc);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd2fe:{NFSU2_TR(0x4dd2fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd303ull));
TAIL_STATIC(0x575620u,575);
}
B4dd303:L4dd303:{c.instructions+=6;NFSU2_TR(0x4dd303);
__builtin_memmove((R+28),(R+0),4);
}
B4dd305:{NFSU2_TR(0x4dd305);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dd308:{NFSU2_TR(0x4dd308);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd30c:{NFSU2_TR(0x4dd30c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dd30e:{NFSU2_TR(0x4dd30e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x1bull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd316:{NFSU2_TR(0x4dd316);
if(r1(R+518)){{goto L4dd34b;}}
}
B4dd318:L4dd318:{c.instructions+=10;NFSU2_TR(0x4dd318);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4dd31d:{NFSU2_TR(0x4dd31d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4dd320:{NFSU2_TR(0x4dd320);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B4dd327:{NFSU2_TR(0x4dd327);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd329:{NFSU2_TR(0x4dd329);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dd32f:{NFSU2_TR(0x4dd32f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd330:{NFSU2_TR(0x4dd330);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dd336:{NFSU2_TR(0x4dd336);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd337:{NFSU2_TR(0x4dd337);
__builtin_memmove((R+4),(R+28),4);
}
B4dd339:{NFSU2_TR(0x4dd339);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd33eull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dd33e:L4dd33e:{c.instructions+=4;NFSU2_TR(0x4dd33e);
u8 U[4];
w4(U+0,u32(0x793728ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dd344:{NFSU2_TR(0x4dd344);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd347:{NFSU2_TR(0x4dd347);
__builtin_memmove((R+20),(R+28),4);
}
B4dd349:{NFSU2_TR(0x4dd349);
{goto L4dd34d;}
}
B4dd34b:L4dd34b:{c.instructions+=1;NFSU2_TR(0x4dd34b);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4dd34d:L4dd34d:{c.instructions+=3;NFSU2_TR(0x4dd34d);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd34f:{NFSU2_TR(0x4dd34f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd357:{NFSU2_TR(0x4dd357);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd35cull));
TAIL_STATIC(0x575620u,575);
}
B4dd35c:L4dd35c:{c.instructions+=6;NFSU2_TR(0x4dd35c);
__builtin_memmove((R+12),(R+0),4);
}
B4dd35e:{NFSU2_TR(0x4dd35e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dd361:{NFSU2_TR(0x4dd361);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd365:{NFSU2_TR(0x4dd365);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dd367:{NFSU2_TR(0x4dd367);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x1cull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd36f:{NFSU2_TR(0x4dd36f);
if(r1(R+518)){{goto L4dd3a2;}}
}
B4dd371:L4dd371:{c.instructions+=10;NFSU2_TR(0x4dd371);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4dd376:{NFSU2_TR(0x4dd376);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4dd379:{NFSU2_TR(0x4dd379);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B4dd380:{NFSU2_TR(0x4dd380);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd382:{NFSU2_TR(0x4dd382);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dd388:{NFSU2_TR(0x4dd388);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd389:{NFSU2_TR(0x4dd389);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dd38f:{NFSU2_TR(0x4dd38f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd390:{NFSU2_TR(0x4dd390);
__builtin_memmove((R+4),(R+12),4);
}
B4dd392:{NFSU2_TR(0x4dd392);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd397ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dd397:L4dd397:{c.instructions+=3;NFSU2_TR(0x4dd397);
u8 U[4];
w4(U+0,u32(0x7936e8ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4dd39d:{NFSU2_TR(0x4dd39d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd3a0:{NFSU2_TR(0x4dd3a0);
{goto L4dd3a4;}
}
B4dd3a2:L4dd3a2:{c.instructions+=1;NFSU2_TR(0x4dd3a2);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4dd3a4:L4dd3a4:{c.instructions+=3;NFSU2_TR(0x4dd3a4);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd3a6:{NFSU2_TR(0x4dd3a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd3ae:{NFSU2_TR(0x4dd3ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd3b3ull));
TAIL_STATIC(0x575620u,575);
}
B4dd3b3:L4dd3b3:{c.instructions+=6;NFSU2_TR(0x4dd3b3);
__builtin_memmove((R+28),(R+0),4);
}
B4dd3b5:{NFSU2_TR(0x4dd3b5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dd3b8:{NFSU2_TR(0x4dd3b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd3bc:{NFSU2_TR(0x4dd3bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dd3be:{NFSU2_TR(0x4dd3be);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x1dull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd3c6:{NFSU2_TR(0x4dd3c6);
if(r1(R+518)){{goto L4dd3e5;}}
}
B4dd3c8:L4dd3c8:{c.instructions+=6;NFSU2_TR(0x4dd3c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dd3ce:{NFSU2_TR(0x4dd3ce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd3cf:{NFSU2_TR(0x4dd3cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dd3d5:{NFSU2_TR(0x4dd3d5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd3d6:{NFSU2_TR(0x4dd3d6);
__builtin_memmove((R+4),(R+28),4);
}
B4dd3d8:{NFSU2_TR(0x4dd3d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd3ddull));
TAIL_STATIC(0x51e090u,51e);
}
B4dd3dd:L4dd3dd:{c.instructions+=2;NFSU2_TR(0x4dd3dd);
u8 U[4];
w4(U+0,u32(0x7936a8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dd3e3:{NFSU2_TR(0x4dd3e3);
{goto L4dd3e7;}
}
B4dd3e5:L4dd3e5:{c.instructions+=1;NFSU2_TR(0x4dd3e5);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4dd3e7:L4dd3e7:{c.instructions+=6;NFSU2_TR(0x4dd3e7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd3e8:{NFSU2_TR(0x4dd3e8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd3e9:{NFSU2_TR(0x4dd3e9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd3ea:{NFSU2_TR(0x4dd3ea);
__builtin_memmove((R+4),(R+24),4);
}
B4dd3ec:{NFSU2_TR(0x4dd3ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd3f4:{NFSU2_TR(0x4dd3f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd3f9ull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4dd3f9:L4dd3f9:{c.instructions+=2;NFSU2_TR(0x4dd3f9);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd3fb:{NFSU2_TR(0x4dd3fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd400ull));
TAIL_STATIC(0x575620u,575);
}
B4dd400:L4dd400:{c.instructions+=6;NFSU2_TR(0x4dd400);
__builtin_memmove((R+28),(R+0),4);
}
B4dd402:{NFSU2_TR(0x4dd402);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dd405:{NFSU2_TR(0x4dd405);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd409:{NFSU2_TR(0x4dd409);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dd40b:{NFSU2_TR(0x4dd40b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x1eull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd413:{NFSU2_TR(0x4dd413);
if(r1(R+518)){{goto L4dd448;}}
}
B4dd415:L4dd415:{c.instructions+=10;NFSU2_TR(0x4dd415);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4dd41a:{NFSU2_TR(0x4dd41a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd41c:{NFSU2_TR(0x4dd41c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dd422:{NFSU2_TR(0x4dd422);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd423:{NFSU2_TR(0x4dd423);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dd429:{NFSU2_TR(0x4dd429);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4dd42c:{NFSU2_TR(0x4dd42c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B4dd433:{NFSU2_TR(0x4dd433);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd434:{NFSU2_TR(0x4dd434);
__builtin_memmove((R+4),(R+28),4);
}
B4dd436:{NFSU2_TR(0x4dd436);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd43bull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dd43b:L4dd43b:{c.instructions+=4;NFSU2_TR(0x4dd43b);
u8 U[4];
w4(U+0,u32(0x7937e8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dd441:{NFSU2_TR(0x4dd441);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd444:{NFSU2_TR(0x4dd444);
__builtin_memmove((R+20),(R+28),4);
}
B4dd446:{NFSU2_TR(0x4dd446);
{goto L4dd44a;}
}
B4dd448:L4dd448:{c.instructions+=1;NFSU2_TR(0x4dd448);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4dd44a:L4dd44a:{c.instructions+=3;NFSU2_TR(0x4dd44a);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd44c:{NFSU2_TR(0x4dd44c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd454:{NFSU2_TR(0x4dd454);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd459ull));
TAIL_STATIC(0x575620u,575);
}
B4dd459:L4dd459:{c.instructions+=6;NFSU2_TR(0x4dd459);
__builtin_memmove((R+12),(R+0),4);
}
B4dd45b:{NFSU2_TR(0x4dd45b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dd45e:{NFSU2_TR(0x4dd45e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd462:{NFSU2_TR(0x4dd462);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dd464:{NFSU2_TR(0x4dd464);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x1full));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd46c:{NFSU2_TR(0x4dd46c);
if(r1(R+518)){{goto L4dd49f;}}
}
B4dd46e:L4dd46e:{c.instructions+=10;NFSU2_TR(0x4dd46e);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4dd473:{NFSU2_TR(0x4dd473);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd475:{NFSU2_TR(0x4dd475);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dd47b:{NFSU2_TR(0x4dd47b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd47c:{NFSU2_TR(0x4dd47c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dd482:{NFSU2_TR(0x4dd482);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4dd485:{NFSU2_TR(0x4dd485);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B4dd48c:{NFSU2_TR(0x4dd48c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd48d:{NFSU2_TR(0x4dd48d);
__builtin_memmove((R+4),(R+12),4);
}
B4dd48f:{NFSU2_TR(0x4dd48f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd494ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dd494:L4dd494:{c.instructions+=3;NFSU2_TR(0x4dd494);
u8 U[4];
w4(U+0,u32(0x7937a8ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4dd49a:{NFSU2_TR(0x4dd49a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd49d:{NFSU2_TR(0x4dd49d);
{goto L4dd4a1;}
}
B4dd49f:L4dd49f:{c.instructions+=1;NFSU2_TR(0x4dd49f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4dd4a1:L4dd4a1:{c.instructions+=3;NFSU2_TR(0x4dd4a1);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd4a3:{NFSU2_TR(0x4dd4a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd4ab:{NFSU2_TR(0x4dd4ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd4b0ull));
TAIL_STATIC(0x575620u,575);
}
B4dd4b0:L4dd4b0:{c.instructions+=6;NFSU2_TR(0x4dd4b0);
__builtin_memmove((R+28),(R+0),4);
}
B4dd4b2:{NFSU2_TR(0x4dd4b2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dd4b5:{NFSU2_TR(0x4dd4b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd4b9:{NFSU2_TR(0x4dd4b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dd4bb:{NFSU2_TR(0x4dd4bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd4c3:{NFSU2_TR(0x4dd4c3);
if(r1(R+518)){{goto L4dd4e2;}}
}
B4dd4c5:L4dd4c5:{c.instructions+=6;NFSU2_TR(0x4dd4c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dd4cb:{NFSU2_TR(0x4dd4cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd4cc:{NFSU2_TR(0x4dd4cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dd4d2:{NFSU2_TR(0x4dd4d2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd4d3:{NFSU2_TR(0x4dd4d3);
__builtin_memmove((R+4),(R+28),4);
}
B4dd4d5:{NFSU2_TR(0x4dd4d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd4daull));
TAIL_STATIC(0x51e090u,51e);
}
B4dd4da:L4dd4da:{c.instructions+=2;NFSU2_TR(0x4dd4da);
u8 U[4];
w4(U+0,u32(0x793768ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dd4e0:{NFSU2_TR(0x4dd4e0);
{goto L4dd4e4;}
}
B4dd4e2:L4dd4e2:{c.instructions+=1;NFSU2_TR(0x4dd4e2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4dd4e4:L4dd4e4:{c.instructions+=6;NFSU2_TR(0x4dd4e4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd4e5:{NFSU2_TR(0x4dd4e5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd4e6:{NFSU2_TR(0x4dd4e6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd4e7:{NFSU2_TR(0x4dd4e7);
__builtin_memmove((R+4),(R+24),4);
}
B4dd4e9:{NFSU2_TR(0x4dd4e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd4f1:{NFSU2_TR(0x4dd4f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd4f6ull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4dd4f6:L4dd4f6:{c.instructions+=2;NFSU2_TR(0x4dd4f6);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd4f8:{NFSU2_TR(0x4dd4f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd4fdull));
TAIL_STATIC(0x575620u,575);
}
B4dd4fd:L4dd4fd:{c.instructions+=6;NFSU2_TR(0x4dd4fd);
__builtin_memmove((R+28),(R+0),4);
}
B4dd4ff:{NFSU2_TR(0x4dd4ff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dd502:{NFSU2_TR(0x4dd502);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd506:{NFSU2_TR(0x4dd506);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dd508:{NFSU2_TR(0x4dd508);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x21ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd510:{NFSU2_TR(0x4dd510);
if(r1(R+518)){{goto L4dd545;}}
}
B4dd512:L4dd512:{c.instructions+=10;NFSU2_TR(0x4dd512);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4dd517:{NFSU2_TR(0x4dd517);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B4dd51a:{NFSU2_TR(0x4dd51a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B4dd521:{NFSU2_TR(0x4dd521);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd523:{NFSU2_TR(0x4dd523);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dd529:{NFSU2_TR(0x4dd529);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd52a:{NFSU2_TR(0x4dd52a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dd530:{NFSU2_TR(0x4dd530);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd531:{NFSU2_TR(0x4dd531);
__builtin_memmove((R+4),(R+28),4);
}
B4dd533:{NFSU2_TR(0x4dd533);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd538ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dd538:L4dd538:{c.instructions+=4;NFSU2_TR(0x4dd538);
u8 U[4];
w4(U+0,u32(0x793968ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dd53e:{NFSU2_TR(0x4dd53e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd541:{NFSU2_TR(0x4dd541);
__builtin_memmove((R+20),(R+28),4);
}
B4dd543:{NFSU2_TR(0x4dd543);
{goto L4dd547;}
}
B4dd545:L4dd545:{c.instructions+=1;NFSU2_TR(0x4dd545);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4dd547:L4dd547:{c.instructions+=3;NFSU2_TR(0x4dd547);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd549:{NFSU2_TR(0x4dd549);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd551:{NFSU2_TR(0x4dd551);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd556ull));
TAIL_STATIC(0x575620u,575);
}
B4dd556:L4dd556:{c.instructions+=6;NFSU2_TR(0x4dd556);
__builtin_memmove((R+12),(R+0),4);
}
B4dd558:{NFSU2_TR(0x4dd558);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dd55b:{NFSU2_TR(0x4dd55b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd55f:{NFSU2_TR(0x4dd55f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dd561:{NFSU2_TR(0x4dd561);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x22ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd569:{NFSU2_TR(0x4dd569);
if(r1(R+518)){{goto L4dd59c;}}
}
B4dd56b:L4dd56b:{c.instructions+=10;NFSU2_TR(0x4dd56b);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4dd570:{NFSU2_TR(0x4dd570);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B4dd573:{NFSU2_TR(0x4dd573);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B4dd57a:{NFSU2_TR(0x4dd57a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd57c:{NFSU2_TR(0x4dd57c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dd582:{NFSU2_TR(0x4dd582);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd583:{NFSU2_TR(0x4dd583);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dd589:{NFSU2_TR(0x4dd589);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd58a:{NFSU2_TR(0x4dd58a);
__builtin_memmove((R+4),(R+12),4);
}
B4dd58c:{NFSU2_TR(0x4dd58c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd591ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dd591:L4dd591:{c.instructions+=3;NFSU2_TR(0x4dd591);
u8 U[4];
w4(U+0,u32(0x793928ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4dd597:{NFSU2_TR(0x4dd597);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd59a:{NFSU2_TR(0x4dd59a);
{goto L4dd59e;}
}
B4dd59c:L4dd59c:{c.instructions+=1;NFSU2_TR(0x4dd59c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4dd59e:L4dd59e:{c.instructions+=3;NFSU2_TR(0x4dd59e);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd5a0:{NFSU2_TR(0x4dd5a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd5a8:{NFSU2_TR(0x4dd5a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd5adull));
TAIL_STATIC(0x575620u,575);
}
B4dd5ad:L4dd5ad:{c.instructions+=6;NFSU2_TR(0x4dd5ad);
__builtin_memmove((R+28),(R+0),4);
}
B4dd5af:{NFSU2_TR(0x4dd5af);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dd5b2:{NFSU2_TR(0x4dd5b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd5b6:{NFSU2_TR(0x4dd5b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dd5b8:{NFSU2_TR(0x4dd5b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x23ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd5c0:{NFSU2_TR(0x4dd5c0);
if(r1(R+518)){{goto L4dd5df;}}
}
B4dd5c2:L4dd5c2:{c.instructions+=6;NFSU2_TR(0x4dd5c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dd5c8:{NFSU2_TR(0x4dd5c8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd5c9:{NFSU2_TR(0x4dd5c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dd5cf:{NFSU2_TR(0x4dd5cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd5d0:{NFSU2_TR(0x4dd5d0);
__builtin_memmove((R+4),(R+28),4);
}
B4dd5d2:{NFSU2_TR(0x4dd5d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd5d7ull));
TAIL_STATIC(0x51e090u,51e);
}
B4dd5d7:L4dd5d7:{c.instructions+=2;NFSU2_TR(0x4dd5d7);
u8 U[4];
w4(U+0,u32(0x7938e8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dd5dd:{NFSU2_TR(0x4dd5dd);
{goto L4dd5e1;}
}
B4dd5df:L4dd5df:{c.instructions+=1;NFSU2_TR(0x4dd5df);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4dd5e1:L4dd5e1:{c.instructions+=6;NFSU2_TR(0x4dd5e1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd5e2:{NFSU2_TR(0x4dd5e2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd5e3:{NFSU2_TR(0x4dd5e3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd5e4:{NFSU2_TR(0x4dd5e4);
__builtin_memmove((R+4),(R+24),4);
}
B4dd5e6:{NFSU2_TR(0x4dd5e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd5ee:{NFSU2_TR(0x4dd5ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd5f3ull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4dd5f3:L4dd5f3:{c.instructions+=2;NFSU2_TR(0x4dd5f3);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd5f5:{NFSU2_TR(0x4dd5f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd5faull));
TAIL_STATIC(0x575620u,575);
}
B4dd5fa:L4dd5fa:{c.instructions+=6;NFSU2_TR(0x4dd5fa);
__builtin_memmove((R+28),(R+0),4);
}
B4dd5fc:{NFSU2_TR(0x4dd5fc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dd5ff:{NFSU2_TR(0x4dd5ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd603:{NFSU2_TR(0x4dd603);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dd605:{NFSU2_TR(0x4dd605);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x24ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd60d:{NFSU2_TR(0x4dd60d);
if(r1(R+518)){{goto L4dd642;}}
}
B4dd60f:L4dd60f:{c.instructions+=10;NFSU2_TR(0x4dd60f);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4dd614:{NFSU2_TR(0x4dd614);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4dd617:{NFSU2_TR(0x4dd617);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B4dd61e:{NFSU2_TR(0x4dd61e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd620:{NFSU2_TR(0x4dd620);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dd626:{NFSU2_TR(0x4dd626);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd627:{NFSU2_TR(0x4dd627);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dd62d:{NFSU2_TR(0x4dd62d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd62e:{NFSU2_TR(0x4dd62e);
__builtin_memmove((R+4),(R+28),4);
}
B4dd630:{NFSU2_TR(0x4dd630);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd635ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dd635:L4dd635:{c.instructions+=4;NFSU2_TR(0x4dd635);
u8 U[4];
w4(U+0,u32(0x793a28ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dd63b:{NFSU2_TR(0x4dd63b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd63e:{NFSU2_TR(0x4dd63e);
__builtin_memmove((R+20),(R+28),4);
}
B4dd640:{NFSU2_TR(0x4dd640);
{goto L4dd644;}
}
B4dd642:L4dd642:{c.instructions+=1;NFSU2_TR(0x4dd642);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4dd644:L4dd644:{c.instructions+=3;NFSU2_TR(0x4dd644);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd646:{NFSU2_TR(0x4dd646);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd64e:{NFSU2_TR(0x4dd64e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd653ull));
TAIL_STATIC(0x575620u,575);
}
B4dd653:L4dd653:{c.instructions+=6;NFSU2_TR(0x4dd653);
__builtin_memmove((R+12),(R+0),4);
}
B4dd655:{NFSU2_TR(0x4dd655);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dd658:{NFSU2_TR(0x4dd658);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd65c:{NFSU2_TR(0x4dd65c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dd65e:{NFSU2_TR(0x4dd65e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x25ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd666:{NFSU2_TR(0x4dd666);
if(r1(R+518)){{goto L4dd699;}}
}
B4dd668:L4dd668:{c.instructions+=10;NFSU2_TR(0x4dd668);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4dd66d:{NFSU2_TR(0x4dd66d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4dd670:{NFSU2_TR(0x4dd670);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B4dd677:{NFSU2_TR(0x4dd677);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd679:{NFSU2_TR(0x4dd679);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dd67f:{NFSU2_TR(0x4dd67f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd680:{NFSU2_TR(0x4dd680);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dd686:{NFSU2_TR(0x4dd686);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd687:{NFSU2_TR(0x4dd687);
__builtin_memmove((R+4),(R+12),4);
}
B4dd689:{NFSU2_TR(0x4dd689);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd68eull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dd68e:L4dd68e:{c.instructions+=3;NFSU2_TR(0x4dd68e);
u8 U[4];
w4(U+0,u32(0x7939e8ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4dd694:{NFSU2_TR(0x4dd694);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd697:{NFSU2_TR(0x4dd697);
{goto L4dd69b;}
}
B4dd699:L4dd699:{c.instructions+=1;NFSU2_TR(0x4dd699);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4dd69b:L4dd69b:{c.instructions+=3;NFSU2_TR(0x4dd69b);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd69d:{NFSU2_TR(0x4dd69d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd6a5:{NFSU2_TR(0x4dd6a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd6aaull));
TAIL_STATIC(0x575620u,575);
}
B4dd6aa:L4dd6aa:{c.instructions+=6;NFSU2_TR(0x4dd6aa);
__builtin_memmove((R+28),(R+0),4);
}
B4dd6ac:{NFSU2_TR(0x4dd6ac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dd6af:{NFSU2_TR(0x4dd6af);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd6b3:{NFSU2_TR(0x4dd6b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dd6b5:{NFSU2_TR(0x4dd6b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x26ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd6bd:{NFSU2_TR(0x4dd6bd);
if(r1(R+518)){{goto L4dd6dc;}}
}
B4dd6bf:L4dd6bf:{c.instructions+=6;NFSU2_TR(0x4dd6bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dd6c5:{NFSU2_TR(0x4dd6c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd6c6:{NFSU2_TR(0x4dd6c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dd6cc:{NFSU2_TR(0x4dd6cc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd6cd:{NFSU2_TR(0x4dd6cd);
__builtin_memmove((R+4),(R+28),4);
}
B4dd6cf:{NFSU2_TR(0x4dd6cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd6d4ull));
TAIL_STATIC(0x51e090u,51e);
}
B4dd6d4:L4dd6d4:{c.instructions+=2;NFSU2_TR(0x4dd6d4);
u8 U[4];
w4(U+0,u32(0x7939a8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dd6da:{NFSU2_TR(0x4dd6da);
{goto L4dd6de;}
}
B4dd6dc:L4dd6dc:{c.instructions+=1;NFSU2_TR(0x4dd6dc);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4dd6de:L4dd6de:{c.instructions+=6;NFSU2_TR(0x4dd6de);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd6df:{NFSU2_TR(0x4dd6df);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd6e0:{NFSU2_TR(0x4dd6e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd6e1:{NFSU2_TR(0x4dd6e1);
__builtin_memmove((R+4),(R+24),4);
}
B4dd6e3:{NFSU2_TR(0x4dd6e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd6eb:{NFSU2_TR(0x4dd6eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd6f0ull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4dd6f0:L4dd6f0:{c.instructions+=2;NFSU2_TR(0x4dd6f0);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd6f2:{NFSU2_TR(0x4dd6f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd6f7ull));
TAIL_STATIC(0x575620u,575);
}
B4dd6f7:L4dd6f7:{c.instructions+=6;NFSU2_TR(0x4dd6f7);
__builtin_memmove((R+28),(R+0),4);
}
B4dd6f9:{NFSU2_TR(0x4dd6f9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dd6fc:{NFSU2_TR(0x4dd6fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd700:{NFSU2_TR(0x4dd700);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dd702:{NFSU2_TR(0x4dd702);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x27ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd70a:{NFSU2_TR(0x4dd70a);
if(r1(R+518)){{goto L4dd73f;}}
}
B4dd70c:L4dd70c:{c.instructions+=10;NFSU2_TR(0x4dd70c);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4dd711:{NFSU2_TR(0x4dd711);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd713:{NFSU2_TR(0x4dd713);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dd719:{NFSU2_TR(0x4dd719);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd71a:{NFSU2_TR(0x4dd71a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dd720:{NFSU2_TR(0x4dd720);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4dd723:{NFSU2_TR(0x4dd723);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B4dd72a:{NFSU2_TR(0x4dd72a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd72b:{NFSU2_TR(0x4dd72b);
__builtin_memmove((R+4),(R+28),4);
}
B4dd72d:{NFSU2_TR(0x4dd72d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd732ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dd732:L4dd732:{c.instructions+=4;NFSU2_TR(0x4dd732);
u8 U[4];
w4(U+0,u32(0x7938a8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dd738:{NFSU2_TR(0x4dd738);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd73b:{NFSU2_TR(0x4dd73b);
__builtin_memmove((R+20),(R+28),4);
}
B4dd73d:{NFSU2_TR(0x4dd73d);
{goto L4dd741;}
}
B4dd73f:L4dd73f:{c.instructions+=1;NFSU2_TR(0x4dd73f);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4dd741:L4dd741:{c.instructions+=3;NFSU2_TR(0x4dd741);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd743:{NFSU2_TR(0x4dd743);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd74b:{NFSU2_TR(0x4dd74b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd750ull));
TAIL_STATIC(0x575620u,575);
}
B4dd750:L4dd750:{c.instructions+=6;NFSU2_TR(0x4dd750);
__builtin_memmove((R+12),(R+0),4);
}
B4dd752:{NFSU2_TR(0x4dd752);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dd755:{NFSU2_TR(0x4dd755);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd759:{NFSU2_TR(0x4dd759);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dd75b:{NFSU2_TR(0x4dd75b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x28ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd763:{NFSU2_TR(0x4dd763);
if(r1(R+518)){{goto L4dd796;}}
}
B4dd765:L4dd765:{c.instructions+=10;NFSU2_TR(0x4dd765);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4dd76a:{NFSU2_TR(0x4dd76a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd76c:{NFSU2_TR(0x4dd76c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dd772:{NFSU2_TR(0x4dd772);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd773:{NFSU2_TR(0x4dd773);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dd779:{NFSU2_TR(0x4dd779);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4dd77c:{NFSU2_TR(0x4dd77c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B4dd783:{NFSU2_TR(0x4dd783);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd784:{NFSU2_TR(0x4dd784);
__builtin_memmove((R+4),(R+12),4);
}
B4dd786:{NFSU2_TR(0x4dd786);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd78bull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dd78b:L4dd78b:{c.instructions+=3;NFSU2_TR(0x4dd78b);
u8 U[4];
w4(U+0,u32(0x793868ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4dd791:{NFSU2_TR(0x4dd791);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd794:{NFSU2_TR(0x4dd794);
{goto L4dd798;}
}
B4dd796:L4dd796:{c.instructions+=1;NFSU2_TR(0x4dd796);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4dd798:L4dd798:{c.instructions+=3;NFSU2_TR(0x4dd798);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd79a:{NFSU2_TR(0x4dd79a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd7a2:{NFSU2_TR(0x4dd7a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd7a7ull));
TAIL_STATIC(0x575620u,575);
}
B4dd7a7:L4dd7a7:{c.instructions+=6;NFSU2_TR(0x4dd7a7);
__builtin_memmove((R+28),(R+0),4);
}
B4dd7a9:{NFSU2_TR(0x4dd7a9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dd7ac:{NFSU2_TR(0x4dd7ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd7b0:{NFSU2_TR(0x4dd7b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dd7b2:{NFSU2_TR(0x4dd7b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x29ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd7ba:{NFSU2_TR(0x4dd7ba);
if(r1(R+518)){{goto L4dd7d9;}}
}
B4dd7bc:L4dd7bc:{c.instructions+=6;NFSU2_TR(0x4dd7bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dd7c2:{NFSU2_TR(0x4dd7c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd7c3:{NFSU2_TR(0x4dd7c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dd7c9:{NFSU2_TR(0x4dd7c9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd7ca:{NFSU2_TR(0x4dd7ca);
__builtin_memmove((R+4),(R+28),4);
}
B4dd7cc:{NFSU2_TR(0x4dd7cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd7d1ull));
TAIL_STATIC(0x51e090u,51e);
}
B4dd7d1:L4dd7d1:{c.instructions+=2;NFSU2_TR(0x4dd7d1);
u8 U[4];
w4(U+0,u32(0x793828ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dd7d7:{NFSU2_TR(0x4dd7d7);
{goto L4dd7db;}
}
B4dd7d9:L4dd7d9:{c.instructions+=1;NFSU2_TR(0x4dd7d9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4dd7db:L4dd7db:{c.instructions+=6;NFSU2_TR(0x4dd7db);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd7dc:{NFSU2_TR(0x4dd7dc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd7dd:{NFSU2_TR(0x4dd7dd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd7de:{NFSU2_TR(0x4dd7de);
__builtin_memmove((R+4),(R+24),4);
}
B4dd7e0:{NFSU2_TR(0x4dd7e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd7e8:{NFSU2_TR(0x4dd7e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd7edull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4dd7ed:L4dd7ed:{c.instructions+=2;NFSU2_TR(0x4dd7ed);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd7ef:{NFSU2_TR(0x4dd7ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd7f4ull));
TAIL_STATIC(0x575620u,575);
}
B4dd7f4:L4dd7f4:{c.instructions+=6;NFSU2_TR(0x4dd7f4);
__builtin_memmove((R+28),(R+0),4);
}
B4dd7f6:{NFSU2_TR(0x4dd7f6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dd7f9:{NFSU2_TR(0x4dd7f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd7fd:{NFSU2_TR(0x4dd7fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dd7ff:{NFSU2_TR(0x4dd7ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x2aull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd807:{NFSU2_TR(0x4dd807);
if(r1(R+518)){{goto L4dd83c;}}
}
B4dd809:L4dd809:{c.instructions+=10;NFSU2_TR(0x4dd809);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4dd80e:{NFSU2_TR(0x4dd80e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B4dd811:{NFSU2_TR(0x4dd811);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B4dd818:{NFSU2_TR(0x4dd818);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd81a:{NFSU2_TR(0x4dd81a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dd820:{NFSU2_TR(0x4dd820);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd821:{NFSU2_TR(0x4dd821);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dd827:{NFSU2_TR(0x4dd827);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd828:{NFSU2_TR(0x4dd828);
__builtin_memmove((R+4),(R+28),4);
}
B4dd82a:{NFSU2_TR(0x4dd82a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd82full));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dd82f:L4dd82f:{c.instructions+=4;NFSU2_TR(0x4dd82f);
u8 U[4];
w4(U+0,u32(0x793ae8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dd835:{NFSU2_TR(0x4dd835);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd838:{NFSU2_TR(0x4dd838);
__builtin_memmove((R+20),(R+28),4);
}
B4dd83a:{NFSU2_TR(0x4dd83a);
{goto L4dd83e;}
}
B4dd83c:L4dd83c:{c.instructions+=1;NFSU2_TR(0x4dd83c);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4dd83e:L4dd83e:{c.instructions+=3;NFSU2_TR(0x4dd83e);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd840:{NFSU2_TR(0x4dd840);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd848:{NFSU2_TR(0x4dd848);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd84dull));
TAIL_STATIC(0x575620u,575);
}
B4dd84d:L4dd84d:{c.instructions+=6;NFSU2_TR(0x4dd84d);
__builtin_memmove((R+12),(R+0),4);
}
B4dd84f:{NFSU2_TR(0x4dd84f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dd852:{NFSU2_TR(0x4dd852);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd856:{NFSU2_TR(0x4dd856);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dd858:{NFSU2_TR(0x4dd858);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x2bull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd860:{NFSU2_TR(0x4dd860);
if(r1(R+518)){{goto L4dd893;}}
}
B4dd862:L4dd862:{c.instructions+=10;NFSU2_TR(0x4dd862);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4dd867:{NFSU2_TR(0x4dd867);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B4dd86a:{NFSU2_TR(0x4dd86a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B4dd871:{NFSU2_TR(0x4dd871);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd873:{NFSU2_TR(0x4dd873);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dd879:{NFSU2_TR(0x4dd879);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd87a:{NFSU2_TR(0x4dd87a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dd880:{NFSU2_TR(0x4dd880);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd881:{NFSU2_TR(0x4dd881);
__builtin_memmove((R+4),(R+12),4);
}
B4dd883:{NFSU2_TR(0x4dd883);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd888ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dd888:L4dd888:{c.instructions+=3;NFSU2_TR(0x4dd888);
u8 U[4];
w4(U+0,u32(0x793aa8ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4dd88e:{NFSU2_TR(0x4dd88e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd891:{NFSU2_TR(0x4dd891);
{goto L4dd895;}
}
B4dd893:L4dd893:{c.instructions+=1;NFSU2_TR(0x4dd893);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4dd895:L4dd895:{c.instructions+=3;NFSU2_TR(0x4dd895);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd897:{NFSU2_TR(0x4dd897);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd89f:{NFSU2_TR(0x4dd89f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd8a4ull));
TAIL_STATIC(0x575620u,575);
}
B4dd8a4:L4dd8a4:{c.instructions+=6;NFSU2_TR(0x4dd8a4);
__builtin_memmove((R+28),(R+0),4);
}
B4dd8a6:{NFSU2_TR(0x4dd8a6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dd8a9:{NFSU2_TR(0x4dd8a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd8ad:{NFSU2_TR(0x4dd8ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dd8af:{NFSU2_TR(0x4dd8af);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x2cull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd8b7:{NFSU2_TR(0x4dd8b7);
if(r1(R+518)){{goto L4dd8d6;}}
}
B4dd8b9:L4dd8b9:{c.instructions+=6;NFSU2_TR(0x4dd8b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dd8bf:{NFSU2_TR(0x4dd8bf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd8c0:{NFSU2_TR(0x4dd8c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dd8c6:{NFSU2_TR(0x4dd8c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd8c7:{NFSU2_TR(0x4dd8c7);
__builtin_memmove((R+4),(R+28),4);
}
B4dd8c9:{NFSU2_TR(0x4dd8c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd8ceull));
TAIL_STATIC(0x51e090u,51e);
}
B4dd8ce:L4dd8ce:{c.instructions+=2;NFSU2_TR(0x4dd8ce);
u8 U[4];
w4(U+0,u32(0x793a68ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dd8d4:{NFSU2_TR(0x4dd8d4);
{goto L4dd8d8;}
}
B4dd8d6:L4dd8d6:{c.instructions+=1;NFSU2_TR(0x4dd8d6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4dd8d8:L4dd8d8:{c.instructions+=6;NFSU2_TR(0x4dd8d8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd8d9:{NFSU2_TR(0x4dd8d9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd8da:{NFSU2_TR(0x4dd8da);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd8db:{NFSU2_TR(0x4dd8db);
__builtin_memmove((R+4),(R+24),4);
}
B4dd8dd:{NFSU2_TR(0x4dd8dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd8e5:{NFSU2_TR(0x4dd8e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd8eaull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4dd8ea:L4dd8ea:{c.instructions+=2;NFSU2_TR(0x4dd8ea);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd8ec:{NFSU2_TR(0x4dd8ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd8f1ull));
TAIL_STATIC(0x575620u,575);
}
B4dd8f1:L4dd8f1:{c.instructions+=6;NFSU2_TR(0x4dd8f1);
__builtin_memmove((R+28),(R+0),4);
}
B4dd8f3:{NFSU2_TR(0x4dd8f3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dd8f6:{NFSU2_TR(0x4dd8f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd8fa:{NFSU2_TR(0x4dd8fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dd8fc:{NFSU2_TR(0x4dd8fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x2dull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd904:{NFSU2_TR(0x4dd904);
if(r1(R+518)){{goto L4dd939;}}
}
B4dd906:L4dd906:{c.instructions+=10;NFSU2_TR(0x4dd906);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4dd90b:{NFSU2_TR(0x4dd90b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4dd90e:{NFSU2_TR(0x4dd90e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B4dd915:{NFSU2_TR(0x4dd915);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd917:{NFSU2_TR(0x4dd917);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dd91d:{NFSU2_TR(0x4dd91d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd91e:{NFSU2_TR(0x4dd91e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dd924:{NFSU2_TR(0x4dd924);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd925:{NFSU2_TR(0x4dd925);
__builtin_memmove((R+4),(R+28),4);
}
B4dd927:{NFSU2_TR(0x4dd927);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd92cull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dd92c:L4dd92c:{c.instructions+=4;NFSU2_TR(0x4dd92c);
u8 U[4];
w4(U+0,u32(0x793ba8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dd932:{NFSU2_TR(0x4dd932);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd935:{NFSU2_TR(0x4dd935);
__builtin_memmove((R+20),(R+28),4);
}
B4dd937:{NFSU2_TR(0x4dd937);
{goto L4dd93b;}
}
B4dd939:L4dd939:{c.instructions+=1;NFSU2_TR(0x4dd939);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4dd93b:L4dd93b:{c.instructions+=3;NFSU2_TR(0x4dd93b);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd93d:{NFSU2_TR(0x4dd93d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd945:{NFSU2_TR(0x4dd945);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd94aull));
TAIL_STATIC(0x575620u,575);
}
B4dd94a:L4dd94a:{c.instructions+=6;NFSU2_TR(0x4dd94a);
__builtin_memmove((R+12),(R+0),4);
}
B4dd94c:{NFSU2_TR(0x4dd94c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dd94f:{NFSU2_TR(0x4dd94f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd953:{NFSU2_TR(0x4dd953);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dd955:{NFSU2_TR(0x4dd955);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x2eull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd95d:{NFSU2_TR(0x4dd95d);
if(r1(R+518)){{goto L4dd990;}}
}
B4dd95f:L4dd95f:{c.instructions+=10;NFSU2_TR(0x4dd95f);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4dd964:{NFSU2_TR(0x4dd964);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4dd967:{NFSU2_TR(0x4dd967);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B4dd96e:{NFSU2_TR(0x4dd96e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd970:{NFSU2_TR(0x4dd970);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dd976:{NFSU2_TR(0x4dd976);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd977:{NFSU2_TR(0x4dd977);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dd97d:{NFSU2_TR(0x4dd97d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd97e:{NFSU2_TR(0x4dd97e);
__builtin_memmove((R+4),(R+12),4);
}
B4dd980:{NFSU2_TR(0x4dd980);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd985ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dd985:L4dd985:{c.instructions+=3;NFSU2_TR(0x4dd985);
u8 U[4];
w4(U+0,u32(0x793b68ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4dd98b:{NFSU2_TR(0x4dd98b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd98e:{NFSU2_TR(0x4dd98e);
{goto L4dd992;}
}
B4dd990:L4dd990:{c.instructions+=1;NFSU2_TR(0x4dd990);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4dd992:L4dd992:{c.instructions+=3;NFSU2_TR(0x4dd992);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd994:{NFSU2_TR(0x4dd994);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd99c:{NFSU2_TR(0x4dd99c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd9a1ull));
TAIL_STATIC(0x575620u,575);
}
B4dd9a1:L4dd9a1:{c.instructions+=6;NFSU2_TR(0x4dd9a1);
__builtin_memmove((R+28),(R+0),4);
}
B4dd9a3:{NFSU2_TR(0x4dd9a3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dd9a6:{NFSU2_TR(0x4dd9a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd9aa:{NFSU2_TR(0x4dd9aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dd9ac:{NFSU2_TR(0x4dd9ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x2full));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd9b4:{NFSU2_TR(0x4dd9b4);
if(r1(R+518)){{goto L4dd9d3;}}
}
B4dd9b6:L4dd9b6:{c.instructions+=6;NFSU2_TR(0x4dd9b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dd9bc:{NFSU2_TR(0x4dd9bc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd9bd:{NFSU2_TR(0x4dd9bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dd9c3:{NFSU2_TR(0x4dd9c3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd9c4:{NFSU2_TR(0x4dd9c4);
__builtin_memmove((R+4),(R+28),4);
}
B4dd9c6:{NFSU2_TR(0x4dd9c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd9cbull));
TAIL_STATIC(0x51e090u,51e);
}
B4dd9cb:L4dd9cb:{c.instructions+=2;NFSU2_TR(0x4dd9cb);
u8 U[4];
w4(U+0,u32(0x793b28ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dd9d1:{NFSU2_TR(0x4dd9d1);
{goto L4dd9d5;}
}
B4dd9d3:L4dd9d3:{c.instructions+=1;NFSU2_TR(0x4dd9d3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4dd9d5:L4dd9d5:{c.instructions+=6;NFSU2_TR(0x4dd9d5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd9d6:{NFSU2_TR(0x4dd9d6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd9d7:{NFSU2_TR(0x4dd9d7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd9d8:{NFSU2_TR(0x4dd9d8);
__builtin_memmove((R+4),(R+24),4);
}
B4dd9da:{NFSU2_TR(0x4dd9da);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dd9e2:{NFSU2_TR(0x4dd9e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd9e7ull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4dd9e7:L4dd9e7:{c.instructions+=2;NFSU2_TR(0x4dd9e7);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dd9e9:{NFSU2_TR(0x4dd9e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dd9eeull));
TAIL_STATIC(0x575620u,575);
}
B4dd9ee:L4dd9ee:{c.instructions+=6;NFSU2_TR(0x4dd9ee);
__builtin_memmove((R+28),(R+0),4);
}
B4dd9f0:{NFSU2_TR(0x4dd9f0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dd9f3:{NFSU2_TR(0x4dd9f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dd9f7:{NFSU2_TR(0x4dd9f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dd9f9:{NFSU2_TR(0x4dd9f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x30ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dda01:{NFSU2_TR(0x4dda01);
if(r1(R+518)){{goto L4dda36;}}
}
B4dda03:L4dda03:{c.instructions+=10;NFSU2_TR(0x4dda03);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4dda08:{NFSU2_TR(0x4dda08);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dda0a:{NFSU2_TR(0x4dda0a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dda10:{NFSU2_TR(0x4dda10);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dda11:{NFSU2_TR(0x4dda11);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dda17:{NFSU2_TR(0x4dda17);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4dda1a:{NFSU2_TR(0x4dda1a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B4dda21:{NFSU2_TR(0x4dda21);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dda22:{NFSU2_TR(0x4dda22);
__builtin_memmove((R+4),(R+28),4);
}
B4dda24:{NFSU2_TR(0x4dda24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dda29ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dda29:L4dda29:{c.instructions+=4;NFSU2_TR(0x4dda29);
u8 U[4];
w4(U+0,u32(0x793c68ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dda2f:{NFSU2_TR(0x4dda2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dda32:{NFSU2_TR(0x4dda32);
__builtin_memmove((R+20),(R+28),4);
}
B4dda34:{NFSU2_TR(0x4dda34);
{goto L4dda38;}
}
B4dda36:L4dda36:{c.instructions+=1;NFSU2_TR(0x4dda36);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4dda38:L4dda38:{c.instructions+=3;NFSU2_TR(0x4dda38);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dda3a:{NFSU2_TR(0x4dda3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dda42:{NFSU2_TR(0x4dda42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dda47ull));
TAIL_STATIC(0x575620u,575);
}
B4dda47:L4dda47:{c.instructions+=6;NFSU2_TR(0x4dda47);
__builtin_memmove((R+12),(R+0),4);
}
B4dda49:{NFSU2_TR(0x4dda49);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dda4c:{NFSU2_TR(0x4dda4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dda50:{NFSU2_TR(0x4dda50);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dda52:{NFSU2_TR(0x4dda52);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x31ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dda5a:{NFSU2_TR(0x4dda5a);
if(r1(R+518)){{goto L4dda8d;}}
}
B4dda5c:L4dda5c:{c.instructions+=10;NFSU2_TR(0x4dda5c);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4dda61:{NFSU2_TR(0x4dda61);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dda63:{NFSU2_TR(0x4dda63);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dda69:{NFSU2_TR(0x4dda69);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dda6a:{NFSU2_TR(0x4dda6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dda70:{NFSU2_TR(0x4dda70);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4dda73:{NFSU2_TR(0x4dda73);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B4dda7a:{NFSU2_TR(0x4dda7a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dda7b:{NFSU2_TR(0x4dda7b);
__builtin_memmove((R+4),(R+12),4);
}
B4dda7d:{NFSU2_TR(0x4dda7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dda82ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dda82:L4dda82:{c.instructions+=3;NFSU2_TR(0x4dda82);
u8 U[4];
w4(U+0,u32(0x793c28ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4dda88:{NFSU2_TR(0x4dda88);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dda8b:{NFSU2_TR(0x4dda8b);
{goto L4dda8f;}
}
B4dda8d:L4dda8d:{c.instructions+=1;NFSU2_TR(0x4dda8d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4dda8f:L4dda8f:{c.instructions+=3;NFSU2_TR(0x4dda8f);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dda91:{NFSU2_TR(0x4dda91);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dda99:{NFSU2_TR(0x4dda99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dda9eull));
TAIL_STATIC(0x575620u,575);
}
B4dda9e:L4dda9e:{c.instructions+=6;NFSU2_TR(0x4dda9e);
__builtin_memmove((R+28),(R+0),4);
}
B4ddaa0:{NFSU2_TR(0x4ddaa0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ddaa3:{NFSU2_TR(0x4ddaa3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ddaa7:{NFSU2_TR(0x4ddaa7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ddaa9:{NFSU2_TR(0x4ddaa9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x32ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ddab1:{NFSU2_TR(0x4ddab1);
if(r1(R+518)){{goto L4ddad0;}}
}
B4ddab3:L4ddab3:{c.instructions+=6;NFSU2_TR(0x4ddab3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4ddab9:{NFSU2_TR(0x4ddab9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddaba:{NFSU2_TR(0x4ddaba);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ddac0:{NFSU2_TR(0x4ddac0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddac1:{NFSU2_TR(0x4ddac1);
__builtin_memmove((R+4),(R+28),4);
}
B4ddac3:{NFSU2_TR(0x4ddac3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ddac8ull));
TAIL_STATIC(0x51e090u,51e);
}
B4ddac8:L4ddac8:{c.instructions+=2;NFSU2_TR(0x4ddac8);
u8 U[4];
w4(U+0,u32(0x793be8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4ddace:{NFSU2_TR(0x4ddace);
{goto L4ddad2;}
}
B4ddad0:L4ddad0:{c.instructions+=1;NFSU2_TR(0x4ddad0);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4ddad2:L4ddad2:{c.instructions+=6;NFSU2_TR(0x4ddad2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddad3:{NFSU2_TR(0x4ddad3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddad4:{NFSU2_TR(0x4ddad4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddad5:{NFSU2_TR(0x4ddad5);
__builtin_memmove((R+4),(R+24),4);
}
B4ddad7:{NFSU2_TR(0x4ddad7);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ddadf:{NFSU2_TR(0x4ddadf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ddae4ull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4ddae4:L4ddae4:{c.instructions+=2;NFSU2_TR(0x4ddae4);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddae6:{NFSU2_TR(0x4ddae6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ddaebull));
TAIL_STATIC(0x575620u,575);
}
B4ddaeb:L4ddaeb:{c.instructions+=6;NFSU2_TR(0x4ddaeb);
__builtin_memmove((R+28),(R+0),4);
}
B4ddaed:{NFSU2_TR(0x4ddaed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ddaf0:{NFSU2_TR(0x4ddaf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ddaf4:{NFSU2_TR(0x4ddaf4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ddaf6:{NFSU2_TR(0x4ddaf6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x33ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ddafe:{NFSU2_TR(0x4ddafe);
if(r1(R+518)){{goto L4ddb33;}}
}
B4ddb00:L4ddb00:{c.instructions+=10;NFSU2_TR(0x4ddb00);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4ddb05:{NFSU2_TR(0x4ddb05);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B4ddb08:{NFSU2_TR(0x4ddb08);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B4ddb0f:{NFSU2_TR(0x4ddb0f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddb11:{NFSU2_TR(0x4ddb11);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4ddb17:{NFSU2_TR(0x4ddb17);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddb18:{NFSU2_TR(0x4ddb18);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ddb1e:{NFSU2_TR(0x4ddb1e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddb1f:{NFSU2_TR(0x4ddb1f);
__builtin_memmove((R+4),(R+28),4);
}
B4ddb21:{NFSU2_TR(0x4ddb21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ddb26ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4ddb26:L4ddb26:{c.instructions+=4;NFSU2_TR(0x4ddb26);
u8 U[4];
w4(U+0,u32(0x793d28ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4ddb2c:{NFSU2_TR(0x4ddb2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ddb2f:{NFSU2_TR(0x4ddb2f);
__builtin_memmove((R+20),(R+28),4);
}
B4ddb31:{NFSU2_TR(0x4ddb31);
{goto L4ddb35;}
}
B4ddb33:L4ddb33:{c.instructions+=1;NFSU2_TR(0x4ddb33);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4ddb35:L4ddb35:{c.instructions+=3;NFSU2_TR(0x4ddb35);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddb37:{NFSU2_TR(0x4ddb37);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ddb3f:{NFSU2_TR(0x4ddb3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ddb44ull));
TAIL_STATIC(0x575620u,575);
}
B4ddb44:L4ddb44:{c.instructions+=6;NFSU2_TR(0x4ddb44);
__builtin_memmove((R+12),(R+0),4);
}
B4ddb46:{NFSU2_TR(0x4ddb46);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ddb49:{NFSU2_TR(0x4ddb49);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ddb4d:{NFSU2_TR(0x4ddb4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ddb4f:{NFSU2_TR(0x4ddb4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x34ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ddb57:{NFSU2_TR(0x4ddb57);
if(r1(R+518)){{goto L4ddb8a;}}
}
B4ddb59:L4ddb59:{c.instructions+=10;NFSU2_TR(0x4ddb59);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4ddb5e:{NFSU2_TR(0x4ddb5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B4ddb61:{NFSU2_TR(0x4ddb61);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B4ddb68:{NFSU2_TR(0x4ddb68);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddb6a:{NFSU2_TR(0x4ddb6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4ddb70:{NFSU2_TR(0x4ddb70);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddb71:{NFSU2_TR(0x4ddb71);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ddb77:{NFSU2_TR(0x4ddb77);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddb78:{NFSU2_TR(0x4ddb78);
__builtin_memmove((R+4),(R+12),4);
}
B4ddb7a:{NFSU2_TR(0x4ddb7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ddb7full));
TAIL_STATIC(0x51dfc0u,51d);
}
B4ddb7f:L4ddb7f:{c.instructions+=3;NFSU2_TR(0x4ddb7f);
u8 U[4];
w4(U+0,u32(0x793ce8ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4ddb85:{NFSU2_TR(0x4ddb85);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ddb88:{NFSU2_TR(0x4ddb88);
{goto L4ddb8c;}
}
B4ddb8a:L4ddb8a:{c.instructions+=1;NFSU2_TR(0x4ddb8a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4ddb8c:L4ddb8c:{c.instructions+=3;NFSU2_TR(0x4ddb8c);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddb8e:{NFSU2_TR(0x4ddb8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ddb96:{NFSU2_TR(0x4ddb96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ddb9bull));
TAIL_STATIC(0x575620u,575);
}
B4ddb9b:L4ddb9b:{c.instructions+=6;NFSU2_TR(0x4ddb9b);
__builtin_memmove((R+28),(R+0),4);
}
B4ddb9d:{NFSU2_TR(0x4ddb9d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ddba0:{NFSU2_TR(0x4ddba0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ddba4:{NFSU2_TR(0x4ddba4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ddba6:{NFSU2_TR(0x4ddba6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x35ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ddbae:{NFSU2_TR(0x4ddbae);
if(r1(R+518)){{goto L4ddbcd;}}
}
B4ddbb0:L4ddbb0:{c.instructions+=6;NFSU2_TR(0x4ddbb0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4ddbb6:{NFSU2_TR(0x4ddbb6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddbb7:{NFSU2_TR(0x4ddbb7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4ddbbd:{NFSU2_TR(0x4ddbbd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddbbe:{NFSU2_TR(0x4ddbbe);
__builtin_memmove((R+4),(R+28),4);
}
B4ddbc0:{NFSU2_TR(0x4ddbc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ddbc5ull));
TAIL_STATIC(0x51e090u,51e);
}
B4ddbc5:L4ddbc5:{c.instructions+=2;NFSU2_TR(0x4ddbc5);
u8 U[4];
w4(U+0,u32(0x793ca8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4ddbcb:{NFSU2_TR(0x4ddbcb);
{goto L4ddbcf;}
}
B4ddbcd:L4ddbcd:{c.instructions+=1;NFSU2_TR(0x4ddbcd);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4ddbcf:L4ddbcf:{c.instructions+=6;NFSU2_TR(0x4ddbcf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddbd0:{NFSU2_TR(0x4ddbd0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddbd1:{NFSU2_TR(0x4ddbd1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddbd2:{NFSU2_TR(0x4ddbd2);
__builtin_memmove((R+4),(R+24),4);
}
B4ddbd4:{NFSU2_TR(0x4ddbd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ddbdc:{NFSU2_TR(0x4ddbdc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ddbe1ull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4ddbe1:L4ddbe1:{c.instructions+=4;NFSU2_TR(0x4ddbe1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ddbe4:{NFSU2_TR(0x4ddbe4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ddbe6:{NFSU2_TR(0x4ddbe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ddbed:{NFSU2_TR(0x4ddbed);
if(r1(R+518)){{goto L4ddbf4;}}
}
B4ddbef:L4ddbef:{c.instructions+=2;NFSU2_TR(0x4ddbef);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4ddbf2:{NFSU2_TR(0x4ddbf2);
{goto L4ddbf6;}
}
B4ddbf4:L4ddbf4:{c.instructions+=1;NFSU2_TR(0x4ddbf4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ddbf6:L4ddbf6:{c.instructions+=9;NFSU2_TR(0x4ddbf6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ddbfa:{NFSU2_TR(0x4ddbfa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ddbfb:{NFSU2_TR(0x4ddbfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ddbfe:{NFSU2_TR(0x4ddbfe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ddbff:{NFSU2_TR(0x4ddbff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4ddc00:{NFSU2_TR(0x4ddc00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ddc01:{NFSU2_TR(0x4ddc01);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ddc08:{NFSU2_TR(0x4ddc08);
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
B4ddc0b:{NFSU2_TR(0x4ddc0b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ddc10:L4ddc10:{c.instructions+=15;NFSU2_TR(0x4ddc10);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddc12:{NFSU2_TR(0x4ddc12);
u8 U[4];
w4(U+0,u32(0x775870ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddc17:{NFSU2_TR(0x4ddc17);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ddc1d:{NFSU2_TR(0x4ddc1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddc1e:{NFSU2_TR(0x4ddc1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ddc25:{NFSU2_TR(0x4ddc25);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddc26:{NFSU2_TR(0x4ddc26);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddc27:{NFSU2_TR(0x4ddc27);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddc28:{NFSU2_TR(0x4ddc28);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddc29:{NFSU2_TR(0x4ddc29);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddc2a:{NFSU2_TR(0x4ddc2a);
__builtin_memmove((R+24),(R+4),4);
}
B4ddc2c:{NFSU2_TR(0x4ddc2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ddc32:{NFSU2_TR(0x4ddc32);
u8 U[4];
w4(U+0,u32(0x14d4bd3bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddc37:{NFSU2_TR(0x4ddc37);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddc38:{NFSU2_TR(0x4ddc38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ddc3dull));
TAIL_STATIC(0x50c900u,50c);
}
B4ddc3d:L4ddc3d:{c.instructions+=2;NFSU2_TR(0x4ddc3d);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddc3f:{NFSU2_TR(0x4ddc3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ddc44ull));
TAIL_STATIC(0x575620u,575);
}
B4ddc44:L4ddc44:{c.instructions+=7;NFSU2_TR(0x4ddc44);
__builtin_memmove((R+28),(R+0),4);
}
B4ddc46:{NFSU2_TR(0x4ddc46);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ddc49:{NFSU2_TR(0x4ddc49);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ddc4d:{NFSU2_TR(0x4ddc4d);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4ddc4f:{NFSU2_TR(0x4ddc4f);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ddc51:{NFSU2_TR(0x4ddc51);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ddc55:{NFSU2_TR(0x4ddc55);
if(r1(R+518)){{goto L4ddc88;}}
}
B4ddc57:L4ddc57:{c.instructions+=10;NFSU2_TR(0x4ddc57);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4ddc5c:{NFSU2_TR(0x4ddc5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4ddc5f:{NFSU2_TR(0x4ddc5f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B4ddc66:{NFSU2_TR(0x4ddc66);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddc68:{NFSU2_TR(0x4ddc68);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4ddc6e:{NFSU2_TR(0x4ddc6e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddc6f:{NFSU2_TR(0x4ddc6f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4ddc75:{NFSU2_TR(0x4ddc75);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddc76:{NFSU2_TR(0x4ddc76);
__builtin_memmove((R+4),(R+28),4);
}
B4ddc78:{NFSU2_TR(0x4ddc78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ddc7dull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4ddc7d:L4ddc7d:{c.instructions+=3;NFSU2_TR(0x4ddc7d);
u8 U[4];
w4(U+0,u32(0x793268ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4ddc83:{NFSU2_TR(0x4ddc83);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ddc86:{NFSU2_TR(0x4ddc86);
__builtin_memmove((R+20),(R+28),4);
}
B4ddc88:L4ddc88:{c.instructions+=3;NFSU2_TR(0x4ddc88);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddc8a:{NFSU2_TR(0x4ddc8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ddc92:{NFSU2_TR(0x4ddc92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ddc97ull));
TAIL_STATIC(0x575620u,575);
}
B4ddc97:L4ddc97:{c.instructions+=6;NFSU2_TR(0x4ddc97);
__builtin_memmove((R+28),(R+0),4);
}
B4ddc99:{NFSU2_TR(0x4ddc99);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ddc9c:{NFSU2_TR(0x4ddc9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ddca0:{NFSU2_TR(0x4ddca0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ddca2:{NFSU2_TR(0x4ddca2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ddcaa:{NFSU2_TR(0x4ddcaa);
if(r1(R+518)){{goto L4ddcdd;}}
}
B4ddcac:L4ddcac:{c.instructions+=10;NFSU2_TR(0x4ddcac);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4ddcb1:{NFSU2_TR(0x4ddcb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4ddcb4:{NFSU2_TR(0x4ddcb4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B4ddcbb:{NFSU2_TR(0x4ddcbb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddcbd:{NFSU2_TR(0x4ddcbd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4ddcc3:{NFSU2_TR(0x4ddcc3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddcc4:{NFSU2_TR(0x4ddcc4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4ddcca:{NFSU2_TR(0x4ddcca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddccb:{NFSU2_TR(0x4ddccb);
__builtin_memmove((R+4),(R+28),4);
}
B4ddccd:{NFSU2_TR(0x4ddccd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ddcd2ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4ddcd2:L4ddcd2:{c.instructions+=3;NFSU2_TR(0x4ddcd2);
u8 U[4];
w4(U+0,u32(0x793228ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4ddcd8:{NFSU2_TR(0x4ddcd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ddcdb:{NFSU2_TR(0x4ddcdb);
{goto L4ddcdf;}
}
B4ddcdd:L4ddcdd:{c.instructions+=1;NFSU2_TR(0x4ddcdd);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4ddcdf:L4ddcdf:{c.instructions+=3;NFSU2_TR(0x4ddcdf);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddce1:{NFSU2_TR(0x4ddce1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ddce9:{NFSU2_TR(0x4ddce9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ddceeull));
TAIL_STATIC(0x575620u,575);
}
B4ddcee:L4ddcee:{c.instructions+=6;NFSU2_TR(0x4ddcee);
__builtin_memmove((R+12),(R+0),4);
}
B4ddcf0:{NFSU2_TR(0x4ddcf0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ddcf3:{NFSU2_TR(0x4ddcf3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ddcf7:{NFSU2_TR(0x4ddcf7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ddcf9:{NFSU2_TR(0x4ddcf9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ddd01:{NFSU2_TR(0x4ddd01);
if(r1(R+518)){{goto L4ddd20;}}
}
B4ddd03:L4ddd03:{c.instructions+=6;NFSU2_TR(0x4ddd03);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ddd09:{NFSU2_TR(0x4ddd09);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddd0a:{NFSU2_TR(0x4ddd0a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4ddd10:{NFSU2_TR(0x4ddd10);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddd11:{NFSU2_TR(0x4ddd11);
__builtin_memmove((R+4),(R+12),4);
}
B4ddd13:{NFSU2_TR(0x4ddd13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ddd18ull));
TAIL_STATIC(0x51e090u,51e);
}
B4ddd18:L4ddd18:{c.instructions+=2;NFSU2_TR(0x4ddd18);
u8 U[4];
w4(U+0,u32(0x7927e8ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4ddd1e:{NFSU2_TR(0x4ddd1e);
{goto L4ddd22;}
}
B4ddd20:L4ddd20:{c.instructions+=1;NFSU2_TR(0x4ddd20);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4ddd22:L4ddd22:{c.instructions+=6;NFSU2_TR(0x4ddd22);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddd23:{NFSU2_TR(0x4ddd23);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddd24:{NFSU2_TR(0x4ddd24);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddd25:{NFSU2_TR(0x4ddd25);
__builtin_memmove((R+4),(R+24),4);
}
B4ddd27:{NFSU2_TR(0x4ddd27);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ddd2f:{NFSU2_TR(0x4ddd2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ddd34ull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4ddd34:L4ddd34:{c.instructions+=2;NFSU2_TR(0x4ddd34);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddd36:{NFSU2_TR(0x4ddd36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ddd3bull));
TAIL_STATIC(0x575620u,575);
}
B4ddd3b:L4ddd3b:{c.instructions+=6;NFSU2_TR(0x4ddd3b);
__builtin_memmove((R+28),(R+0),4);
}
B4ddd3d:{NFSU2_TR(0x4ddd3d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ddd40:{NFSU2_TR(0x4ddd40);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ddd44:{NFSU2_TR(0x4ddd44);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ddd46:{NFSU2_TR(0x4ddd46);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ddd4e:{NFSU2_TR(0x4ddd4e);
if(r1(R+518)){{goto L4ddd83;}}
}
B4ddd50:L4ddd50:{c.instructions+=10;NFSU2_TR(0x4ddd50);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4ddd55:{NFSU2_TR(0x4ddd55);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddd57:{NFSU2_TR(0x4ddd57);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ddd5d:{NFSU2_TR(0x4ddd5d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddd5e:{NFSU2_TR(0x4ddd5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4ddd64:{NFSU2_TR(0x4ddd64);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4ddd67:{NFSU2_TR(0x4ddd67);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B4ddd6e:{NFSU2_TR(0x4ddd6e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddd6f:{NFSU2_TR(0x4ddd6f);
__builtin_memmove((R+4),(R+28),4);
}
B4ddd71:{NFSU2_TR(0x4ddd71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ddd76ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4ddd76:L4ddd76:{c.instructions+=4;NFSU2_TR(0x4ddd76);
u8 U[4];
w4(U+0,u32(0x7932e8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4ddd7c:{NFSU2_TR(0x4ddd7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ddd7f:{NFSU2_TR(0x4ddd7f);
__builtin_memmove((R+20),(R+28),4);
}
B4ddd81:{NFSU2_TR(0x4ddd81);
{goto L4ddd85;}
}
B4ddd83:L4ddd83:{c.instructions+=1;NFSU2_TR(0x4ddd83);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4ddd85:L4ddd85:{c.instructions+=3;NFSU2_TR(0x4ddd85);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddd87:{NFSU2_TR(0x4ddd87);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ddd8f:{NFSU2_TR(0x4ddd8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ddd94ull));
TAIL_STATIC(0x575620u,575);
}
B4ddd94:L4ddd94:{c.instructions+=6;NFSU2_TR(0x4ddd94);
__builtin_memmove((R+12),(R+0),4);
}
B4ddd96:{NFSU2_TR(0x4ddd96);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ddd99:{NFSU2_TR(0x4ddd99);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ddd9d:{NFSU2_TR(0x4ddd9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ddd9f:{NFSU2_TR(0x4ddd9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ddda7:{NFSU2_TR(0x4ddda7);
if(r1(R+518)){{goto L4dddda;}}
}
B4ddda9:L4ddda9:{c.instructions+=10;NFSU2_TR(0x4ddda9);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4dddae:{NFSU2_TR(0x4dddae);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dddb0:{NFSU2_TR(0x4dddb0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dddb6:{NFSU2_TR(0x4dddb6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dddb7:{NFSU2_TR(0x4dddb7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dddbd:{NFSU2_TR(0x4dddbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4dddc0:{NFSU2_TR(0x4dddc0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B4dddc7:{NFSU2_TR(0x4dddc7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dddc8:{NFSU2_TR(0x4dddc8);
__builtin_memmove((R+4),(R+12),4);
}
B4dddca:{NFSU2_TR(0x4dddca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dddcfull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dddcf:L4dddcf:{c.instructions+=3;NFSU2_TR(0x4dddcf);
u8 U[4];
w4(U+0,u32(0x7932a8ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4dddd5:{NFSU2_TR(0x4dddd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dddd8:{NFSU2_TR(0x4dddd8);
{goto L4ddddc;}
}
B4dddda:L4dddda:{c.instructions+=1;NFSU2_TR(0x4dddda);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4ddddc:L4ddddc:{c.instructions+=3;NFSU2_TR(0x4ddddc);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dddde:{NFSU2_TR(0x4dddde);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ddde6:{NFSU2_TR(0x4ddde6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dddebull));
TAIL_STATIC(0x575620u,575);
}
B4dddeb:L4dddeb:{c.instructions+=6;NFSU2_TR(0x4dddeb);
__builtin_memmove((R+28),(R+0),4);
}
B4ddded:{NFSU2_TR(0x4ddded);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dddf0:{NFSU2_TR(0x4dddf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dddf4:{NFSU2_TR(0x4dddf4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dddf6:{NFSU2_TR(0x4dddf6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dddfe:{NFSU2_TR(0x4dddfe);
if(r1(R+518)){{goto L4dde1d;}}
}
B4dde00:L4dde00:{c.instructions+=6;NFSU2_TR(0x4dde00);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dde06:{NFSU2_TR(0x4dde06);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dde07:{NFSU2_TR(0x4dde07);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dde0d:{NFSU2_TR(0x4dde0d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dde0e:{NFSU2_TR(0x4dde0e);
__builtin_memmove((R+4),(R+28),4);
}
B4dde10:{NFSU2_TR(0x4dde10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dde15ull));
TAIL_STATIC(0x51e090u,51e);
}
B4dde15:L4dde15:{c.instructions+=2;NFSU2_TR(0x4dde15);
u8 U[4];
w4(U+0,u32(0x7928a8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dde1b:{NFSU2_TR(0x4dde1b);
{goto L4dde1f;}
}
B4dde1d:L4dde1d:{c.instructions+=1;NFSU2_TR(0x4dde1d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4dde1f:L4dde1f:{c.instructions+=6;NFSU2_TR(0x4dde1f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dde20:{NFSU2_TR(0x4dde20);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dde21:{NFSU2_TR(0x4dde21);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dde22:{NFSU2_TR(0x4dde22);
__builtin_memmove((R+4),(R+24),4);
}
B4dde24:{NFSU2_TR(0x4dde24);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dde2c:{NFSU2_TR(0x4dde2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dde31ull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4dde31:L4dde31:{c.instructions+=2;NFSU2_TR(0x4dde31);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dde33:{NFSU2_TR(0x4dde33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dde38ull));
TAIL_STATIC(0x575620u,575);
}
B4dde38:L4dde38:{c.instructions+=6;NFSU2_TR(0x4dde38);
__builtin_memmove((R+28),(R+0),4);
}
B4dde3a:{NFSU2_TR(0x4dde3a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dde3d:{NFSU2_TR(0x4dde3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dde41:{NFSU2_TR(0x4dde41);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dde43:{NFSU2_TR(0x4dde43);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dde4b:{NFSU2_TR(0x4dde4b);
if(r1(R+518)){{goto L4dde80;}}
}
B4dde4d:L4dde4d:{c.instructions+=10;NFSU2_TR(0x4dde4d);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4dde52:{NFSU2_TR(0x4dde52);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B4dde55:{NFSU2_TR(0x4dde55);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B4dde5c:{NFSU2_TR(0x4dde5c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dde5e:{NFSU2_TR(0x4dde5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dde64:{NFSU2_TR(0x4dde64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dde65:{NFSU2_TR(0x4dde65);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dde6b:{NFSU2_TR(0x4dde6b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dde6c:{NFSU2_TR(0x4dde6c);
__builtin_memmove((R+4),(R+28),4);
}
B4dde6e:{NFSU2_TR(0x4dde6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dde73ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dde73:L4dde73:{c.instructions+=4;NFSU2_TR(0x4dde73);
u8 U[4];
w4(U+0,u32(0x793368ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dde79:{NFSU2_TR(0x4dde79);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dde7c:{NFSU2_TR(0x4dde7c);
__builtin_memmove((R+20),(R+28),4);
}
B4dde7e:{NFSU2_TR(0x4dde7e);
{goto L4dde82;}
}
B4dde80:L4dde80:{c.instructions+=1;NFSU2_TR(0x4dde80);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4dde82:L4dde82:{c.instructions+=3;NFSU2_TR(0x4dde82);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dde84:{NFSU2_TR(0x4dde84);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dde8c:{NFSU2_TR(0x4dde8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dde91ull));
TAIL_STATIC(0x575620u,575);
}
B4dde91:L4dde91:{c.instructions+=6;NFSU2_TR(0x4dde91);
__builtin_memmove((R+12),(R+0),4);
}
B4dde93:{NFSU2_TR(0x4dde93);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dde96:{NFSU2_TR(0x4dde96);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dde9a:{NFSU2_TR(0x4dde9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dde9c:{NFSU2_TR(0x4dde9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ddea4:{NFSU2_TR(0x4ddea4);
if(r1(R+518)){{goto L4dded7;}}
}
B4ddea6:L4ddea6:{c.instructions+=10;NFSU2_TR(0x4ddea6);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4ddeab:{NFSU2_TR(0x4ddeab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B4ddeae:{NFSU2_TR(0x4ddeae);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B4ddeb5:{NFSU2_TR(0x4ddeb5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddeb7:{NFSU2_TR(0x4ddeb7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4ddebd:{NFSU2_TR(0x4ddebd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddebe:{NFSU2_TR(0x4ddebe);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ddec4:{NFSU2_TR(0x4ddec4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddec5:{NFSU2_TR(0x4ddec5);
__builtin_memmove((R+4),(R+12),4);
}
B4ddec7:{NFSU2_TR(0x4ddec7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ddeccull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4ddecc:L4ddecc:{c.instructions+=3;NFSU2_TR(0x4ddecc);
u8 U[4];
w4(U+0,u32(0x793328ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4dded2:{NFSU2_TR(0x4dded2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dded5:{NFSU2_TR(0x4dded5);
{goto L4dded9;}
}
B4dded7:L4dded7:{c.instructions+=1;NFSU2_TR(0x4dded7);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4dded9:L4dded9:{c.instructions+=3;NFSU2_TR(0x4dded9);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddedb:{NFSU2_TR(0x4ddedb);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ddee3:{NFSU2_TR(0x4ddee3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ddee8ull));
TAIL_STATIC(0x575620u,575);
}
B4ddee8:L4ddee8:{c.instructions+=6;NFSU2_TR(0x4ddee8);
__builtin_memmove((R+28),(R+0),4);
}
B4ddeea:{NFSU2_TR(0x4ddeea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ddeed:{NFSU2_TR(0x4ddeed);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ddef1:{NFSU2_TR(0x4ddef1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ddef3:{NFSU2_TR(0x4ddef3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ddefb:{NFSU2_TR(0x4ddefb);
if(r1(R+518)){{goto L4ddf1a;}}
}
B4ddefd:L4ddefd:{c.instructions+=6;NFSU2_TR(0x4ddefd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4ddf03:{NFSU2_TR(0x4ddf03);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddf04:{NFSU2_TR(0x4ddf04);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4ddf0a:{NFSU2_TR(0x4ddf0a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddf0b:{NFSU2_TR(0x4ddf0b);
__builtin_memmove((R+4),(R+28),4);
}
B4ddf0d:{NFSU2_TR(0x4ddf0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ddf12ull));
TAIL_STATIC(0x51e090u,51e);
}
B4ddf12:L4ddf12:{c.instructions+=2;NFSU2_TR(0x4ddf12);
u8 U[4];
w4(U+0,u32(0x792968ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4ddf18:{NFSU2_TR(0x4ddf18);
{goto L4ddf1c;}
}
B4ddf1a:L4ddf1a:{c.instructions+=1;NFSU2_TR(0x4ddf1a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4ddf1c:L4ddf1c:{c.instructions+=6;NFSU2_TR(0x4ddf1c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddf1d:{NFSU2_TR(0x4ddf1d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddf1e:{NFSU2_TR(0x4ddf1e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddf1f:{NFSU2_TR(0x4ddf1f);
__builtin_memmove((R+4),(R+24),4);
}
B4ddf21:{NFSU2_TR(0x4ddf21);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ddf29:{NFSU2_TR(0x4ddf29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ddf2eull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4ddf2e:L4ddf2e:{c.instructions+=2;NFSU2_TR(0x4ddf2e);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddf30:{NFSU2_TR(0x4ddf30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ddf35ull));
TAIL_STATIC(0x575620u,575);
}
B4ddf35:L4ddf35:{c.instructions+=6;NFSU2_TR(0x4ddf35);
__builtin_memmove((R+28),(R+0),4);
}
B4ddf37:{NFSU2_TR(0x4ddf37);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ddf3a:{NFSU2_TR(0x4ddf3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ddf3e:{NFSU2_TR(0x4ddf3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ddf40:{NFSU2_TR(0x4ddf40);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ddf48:{NFSU2_TR(0x4ddf48);
if(r1(R+518)){{goto L4ddf7d;}}
}
B4ddf4a:L4ddf4a:{c.instructions+=10;NFSU2_TR(0x4ddf4a);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4ddf4f:{NFSU2_TR(0x4ddf4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4ddf52:{NFSU2_TR(0x4ddf52);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B4ddf59:{NFSU2_TR(0x4ddf59);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddf5b:{NFSU2_TR(0x4ddf5b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4ddf61:{NFSU2_TR(0x4ddf61);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddf62:{NFSU2_TR(0x4ddf62);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4ddf68:{NFSU2_TR(0x4ddf68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddf69:{NFSU2_TR(0x4ddf69);
__builtin_memmove((R+4),(R+28),4);
}
B4ddf6b:{NFSU2_TR(0x4ddf6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ddf70ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4ddf70:L4ddf70:{c.instructions+=4;NFSU2_TR(0x4ddf70);
u8 U[4];
w4(U+0,u32(0x793428ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4ddf76:{NFSU2_TR(0x4ddf76);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ddf79:{NFSU2_TR(0x4ddf79);
__builtin_memmove((R+20),(R+28),4);
}
B4ddf7b:{NFSU2_TR(0x4ddf7b);
{goto L4ddf7f;}
}
B4ddf7d:L4ddf7d:{c.instructions+=1;NFSU2_TR(0x4ddf7d);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4ddf7f:L4ddf7f:{c.instructions+=3;NFSU2_TR(0x4ddf7f);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddf81:{NFSU2_TR(0x4ddf81);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ddf89:{NFSU2_TR(0x4ddf89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ddf8eull));
TAIL_STATIC(0x575620u,575);
}
B4ddf8e:L4ddf8e:{c.instructions+=6;NFSU2_TR(0x4ddf8e);
__builtin_memmove((R+12),(R+0),4);
}
B4ddf90:{NFSU2_TR(0x4ddf90);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ddf93:{NFSU2_TR(0x4ddf93);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ddf97:{NFSU2_TR(0x4ddf97);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ddf99:{NFSU2_TR(0x4ddf99);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xaull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ddfa1:{NFSU2_TR(0x4ddfa1);
if(r1(R+518)){{goto L4ddfd4;}}
}
B4ddfa3:L4ddfa3:{c.instructions+=10;NFSU2_TR(0x4ddfa3);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4ddfa8:{NFSU2_TR(0x4ddfa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4ddfab:{NFSU2_TR(0x4ddfab);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B4ddfb2:{NFSU2_TR(0x4ddfb2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddfb4:{NFSU2_TR(0x4ddfb4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4ddfba:{NFSU2_TR(0x4ddfba);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddfbb:{NFSU2_TR(0x4ddfbb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4ddfc1:{NFSU2_TR(0x4ddfc1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddfc2:{NFSU2_TR(0x4ddfc2);
__builtin_memmove((R+4),(R+12),4);
}
B4ddfc4:{NFSU2_TR(0x4ddfc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ddfc9ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4ddfc9:L4ddfc9:{c.instructions+=3;NFSU2_TR(0x4ddfc9);
u8 U[4];
w4(U+0,u32(0x7933e8ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4ddfcf:{NFSU2_TR(0x4ddfcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ddfd2:{NFSU2_TR(0x4ddfd2);
{goto L4ddfd6;}
}
B4ddfd4:L4ddfd4:{c.instructions+=1;NFSU2_TR(0x4ddfd4);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4ddfd6:L4ddfd6:{c.instructions+=3;NFSU2_TR(0x4ddfd6);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ddfd8:{NFSU2_TR(0x4ddfd8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ddfe0:{NFSU2_TR(0x4ddfe0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ddfe5ull));
TAIL_STATIC(0x575620u,575);
}
B4ddfe5:L4ddfe5:{c.instructions+=6;NFSU2_TR(0x4ddfe5);
__builtin_memmove((R+28),(R+0),4);
}
B4ddfe7:{NFSU2_TR(0x4ddfe7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ddfea:{NFSU2_TR(0x4ddfea);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ddfee:{NFSU2_TR(0x4ddfee);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ddff0:{NFSU2_TR(0x4ddff0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xbull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ddff8:{NFSU2_TR(0x4ddff8);
if(r1(R+518)){TAIL_STATIC(0x4de017u,4de);}
}
B4ddffa:L4ddffa:{c.instructions+=1;NFSU2_TR(0x4ddffa);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
TAIL_STATIC(0x4de000u,4de);
}
XIT:NFSU2_TR_EXIT(0x4dd,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
