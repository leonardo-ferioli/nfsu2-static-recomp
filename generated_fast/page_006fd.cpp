#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_4ae(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_6fc(u8* __restrict R,Cpu& c);
u32 body_6fe(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_75f(u8* __restrict R,Cpu& c);
u32 body_760(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6fd,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6fd,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6fd(u8* __restrict R,Cpu& c);
u32 page_6fd(Cpu& c){return body_6fd(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6fd(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6fd002:goto L6fd002;
case 0x6fd007:goto L6fd007;
case 0x6fd00d:c.instructions+=2;goto B6fd00d;
case 0x6fd013:c.instructions+=1;goto B6fd013;
case 0x6fd016:goto L6fd016;
case 0x6fd01b:goto L6fd01b;
case 0x6fd01f:c.instructions+=1;goto B6fd01f;
case 0x6fd025:goto L6fd025;
case 0x6fd02c:c.instructions+=1;goto B6fd02c;
case 0x6fd031:goto L6fd031;
case 0x6fd034:c.instructions+=1;goto B6fd034;
case 0x6fd039:goto L6fd039;
case 0x6fd03f:c.instructions+=2;goto B6fd03f;
case 0x6fd041:c.instructions+=1;goto B6fd041;
case 0x6fd043:goto L6fd043;
case 0x6fd045:c.instructions+=3;goto B6fd045;
case 0x6fd047:c.instructions+=2;goto B6fd047;
case 0x6fd04a:c.instructions+=1;goto B6fd04a;
case 0x6fd04f:goto L6fd04f;
case 0x6fd051:goto L6fd051;
case 0x6fd054:c.instructions+=1;goto B6fd054;
case 0x6fd056:goto L6fd056;
case 0x6fd058:c.instructions+=4;goto B6fd058;
case 0x6fd05e:c.instructions+=3;goto B6fd05e;
case 0x6fd061:c.instructions+=2;goto B6fd061;
case 0x6fd063:c.instructions+=1;goto B6fd063;
case 0x6fd068:goto L6fd068;
case 0x6fd06c:c.instructions+=4;goto B6fd06c;
case 0x6fd06f:c.instructions+=3;goto B6fd06f;
case 0x6fd070:c.instructions+=2;goto B6fd070;
case 0x6fd072:c.instructions+=1;goto B6fd072;
case 0x6fd077:goto L6fd077;
case 0x6fd07e:c.instructions+=1;goto B6fd07e;
case 0x6fd083:goto L6fd083;
case 0x6fd085:c.instructions+=2;goto B6fd085;
case 0x6fd08b:c.instructions+=1;goto B6fd08b;
case 0x6fd08d:goto L6fd08d;
case 0x6fd093:c.instructions+=2;goto B6fd093;
case 0x6fd099:c.instructions+=1;goto B6fd099;
case 0x6fd09b:goto L6fd09b;
case 0x6fd09d:c.instructions+=3;goto B6fd09d;
case 0x6fd09e:c.instructions+=2;goto B6fd09e;
case 0x6fd0a0:c.instructions+=1;goto B6fd0a0;
case 0x6fd0a6:goto L6fd0a6;
case 0x6fd0a8:goto L6fd0a8;
case 0x6fd0ae:c.instructions+=7;goto B6fd0ae;
case 0x6fd0af:c.instructions+=6;goto B6fd0af;
case 0x6fd0b5:c.instructions+=5;goto B6fd0b5;
case 0x6fd0b6:c.instructions+=4;goto B6fd0b6;
case 0x6fd0bc:c.instructions+=3;goto B6fd0bc;
case 0x6fd0c1:c.instructions+=2;goto B6fd0c1;
case 0x6fd0c2:c.instructions+=1;goto B6fd0c2;
case 0x6fd0c7:goto L6fd0c7;
case 0x6fd0cd:c.instructions+=2;goto B6fd0cd;
case 0x6fd0ce:c.instructions+=1;goto B6fd0ce;
case 0x6fd0d3:goto L6fd0d3;
case 0x6fd0d5:c.instructions+=4;goto B6fd0d5;
case 0x6fd0d6:c.instructions+=3;goto B6fd0d6;
case 0x6fd0d8:c.instructions+=2;goto B6fd0d8;
case 0x6fd0d9:c.instructions+=1;goto B6fd0d9;
case 0x6fd0df:goto L6fd0df;
case 0x6fd0e1:goto L6fd0e1;
case 0x6fd0e2:c.instructions+=6;goto B6fd0e2;
case 0x6fd0e8:c.instructions+=5;goto B6fd0e8;
case 0x6fd0e9:c.instructions+=4;goto B6fd0e9;
case 0x6fd0ef:c.instructions+=3;goto B6fd0ef;
case 0x6fd0f4:c.instructions+=2;goto B6fd0f4;
case 0x6fd0f5:c.instructions+=1;goto B6fd0f5;
case 0x6fd0fa:goto L6fd0fa;
case 0x6fd0ff:c.instructions+=5;goto B6fd0ff;
case 0x6fd105:c.instructions+=4;goto B6fd105;
case 0x6fd10a:c.instructions+=3;goto B6fd10a;
case 0x6fd10b:c.instructions+=2;goto B6fd10b;
case 0x6fd10f:c.instructions+=1;goto B6fd10f;
case 0x6fd114:goto L6fd114;
case 0x6fd117:c.instructions+=3;goto B6fd117;
case 0x6fd11a:c.instructions+=2;goto B6fd11a;
case 0x6fd120:c.instructions+=1;goto B6fd120;
case 0x6fd126:goto L6fd126;
case 0x6fd128:c.instructions+=4;goto B6fd128;
case 0x6fd12e:c.instructions+=3;goto B6fd12e;
case 0x6fd12f:c.instructions+=2;goto B6fd12f;
case 0x6fd130:c.instructions+=1;goto B6fd130;
case 0x6fd135:goto L6fd135;
case 0x6fd137:c.instructions+=4;goto B6fd137;
case 0x6fd13a:c.instructions+=3;goto B6fd13a;
case 0x6fd13b:c.instructions+=2;goto B6fd13b;
case 0x6fd13e:c.instructions+=1;goto B6fd13e;
case 0x6fd140:goto L6fd140;
case 0x6fd146:c.instructions+=1;goto B6fd146;
case 0x6fd150:goto L6fd150;
case 0x6fd156:c.instructions+=2;goto B6fd156;
case 0x6fd158:c.instructions+=1;goto B6fd158;
case 0x6fd15a:goto L6fd15a;
case 0x6fd160:c.instructions+=2;goto B6fd160;
case 0x6fd162:c.instructions+=1;goto B6fd162;
case 0x6fd164:goto L6fd164;
case 0x6fd16a:c.instructions+=2;goto B6fd16a;
case 0x6fd16c:c.instructions+=1;goto B6fd16c;
case 0x6fd16e:goto L6fd16e;
case 0x6fd16f:c.instructions+=3;goto B6fd16f;
case 0x6fd170:c.instructions+=2;goto B6fd170;
case 0x6fd176:c.instructions+=1;goto B6fd176;
case 0x6fd17b:goto L6fd17b;
case 0x6fd17e:c.instructions+=2;goto B6fd17e;
case 0x6fd184:c.instructions+=1;goto B6fd184;
case 0x6fd186:goto L6fd186;
case 0x6fd188:c.instructions+=1;goto B6fd188;
case 0x6fd192:goto L6fd192;
case 0x6fd198:c.instructions+=2;goto B6fd198;
case 0x6fd19a:c.instructions+=1;goto B6fd19a;
case 0x6fd19c:goto L6fd19c;
case 0x6fd1a3:c.instructions+=1;goto B6fd1a3;
case 0x6fd1a5:goto L6fd1a5;
case 0x6fd1ab:c.instructions+=2;goto B6fd1ab;
case 0x6fd1ad:c.instructions+=1;goto B6fd1ad;
case 0x6fd1af:goto L6fd1af;
case 0x6fd1b0:c.instructions+=3;goto B6fd1b0;
case 0x6fd1b6:c.instructions+=2;goto B6fd1b6;
case 0x6fd1bc:c.instructions+=1;goto B6fd1bc;
case 0x6fd1c1:goto L6fd1c1;
case 0x6fd1c4:c.instructions+=2;goto B6fd1c4;
case 0x6fd1ca:c.instructions+=1;goto B6fd1ca;
case 0x6fd1cc:goto L6fd1cc;
case 0x6fd1ce:c.instructions+=1;goto B6fd1ce;
case 0x6fd1d8:goto L6fd1d8;
case 0x6fd1de:c.instructions+=1;goto B6fd1de;
case 0x6fd1e3:goto L6fd1e3;
case 0x6fd1e5:c.instructions+=5;goto B6fd1e5;
case 0x6fd1e6:c.instructions+=4;goto B6fd1e6;
case 0x6fd1ec:c.instructions+=3;goto B6fd1ec;
case 0x6fd1f2:c.instructions+=2;goto B6fd1f2;
case 0x6fd1f8:c.instructions+=1;goto B6fd1f8;
case 0x6fd1fa:goto L6fd1fa;
case 0x6fd204:c.instructions+=1;goto B6fd204;
case 0x6fd20e:goto L6fd20e;
case 0x6fd212:c.instructions+=2;goto B6fd212;
case 0x6fd219:c.instructions+=1;goto B6fd219;
case 0x6fd21b:goto L6fd21b;
case 0x6fd21e:c.instructions+=2;goto B6fd21e;
case 0x6fd21f:c.instructions+=1;goto B6fd21f;
case 0x6fd221:goto L6fd221;
case 0x6fd222:c.instructions+=1;goto B6fd222;
case 0x6fd224:goto L6fd224;
case 0x6fd22b:goto L6fd22b;
case 0x6fd22c:c.instructions+=4;goto B6fd22c;
case 0x6fd22d:c.instructions+=3;goto B6fd22d;
case 0x6fd22e:c.instructions+=2;goto B6fd22e;
case 0x6fd22f:c.instructions+=1;goto B6fd22f;
case 0x6fd232:goto L6fd232;
case 0x6fd239:c.instructions+=2;goto B6fd239;
case 0x6fd243:c.instructions+=1;goto B6fd243;
case 0x6fd248:goto L6fd248;
case 0x6fd24a:c.instructions+=3;goto B6fd24a;
case 0x6fd24b:c.instructions+=2;goto B6fd24b;
case 0x6fd24d:c.instructions+=1;goto B6fd24d;
case 0x6fd253:goto L6fd253;
case 0x6fd255:goto L6fd255;
case 0x6fd25b:c.instructions+=7;goto B6fd25b;
case 0x6fd25c:c.instructions+=6;goto B6fd25c;
case 0x6fd262:c.instructions+=5;goto B6fd262;
case 0x6fd263:c.instructions+=4;goto B6fd263;
case 0x6fd269:c.instructions+=3;goto B6fd269;
case 0x6fd26e:c.instructions+=2;goto B6fd26e;
case 0x6fd26f:c.instructions+=1;goto B6fd26f;
case 0x6fd274:goto L6fd274;
case 0x6fd27a:c.instructions+=4;goto B6fd27a;
case 0x6fd27d:c.instructions+=3;goto B6fd27d;
case 0x6fd27f:c.instructions+=2;goto B6fd27f;
case 0x6fd283:c.instructions+=1;goto B6fd283;
case 0x6fd288:goto L6fd288;
case 0x6fd28e:c.instructions+=2;goto B6fd28e;
case 0x6fd28f:c.instructions+=1;goto B6fd28f;
case 0x6fd294:goto L6fd294;
case 0x6fd295:goto L6fd295;
case 0x6fd29c:c.instructions+=1;goto B6fd29c;
case 0x6fd29e:goto L6fd29e;
case 0x6fd2a5:c.instructions+=1;goto B6fd2a5;
case 0x6fd2a7:goto L6fd2a7;
case 0x6fd2ab:goto L6fd2ab;
case 0x6fd2b1:c.instructions+=2;goto B6fd2b1;
case 0x6fd2b2:c.instructions+=1;goto B6fd2b2;
case 0x6fd2b7:goto L6fd2b7;
case 0x6fd2bb:c.instructions+=2;goto B6fd2bb;
case 0x6fd2bc:c.instructions+=1;goto B6fd2bc;
case 0x6fd2be:goto L6fd2be;
case 0x6fd2c2:c.instructions+=1;goto B6fd2c2;
case 0x6fd2c8:goto L6fd2c8;
case 0x6fd2cb:c.instructions+=1;goto B6fd2cb;
case 0x6fd2d0:goto L6fd2d0;
case 0x6fd2d5:c.instructions+=3;goto B6fd2d5;
case 0x6fd2d7:c.instructions+=2;goto B6fd2d7;
case 0x6fd2da:c.instructions+=1;goto B6fd2da;
case 0x6fd2df:goto L6fd2df;
case 0x6fd2e2:c.instructions+=3;goto B6fd2e2;
case 0x6fd2e3:c.instructions+=2;goto B6fd2e3;
case 0x6fd2e5:c.instructions+=1;goto B6fd2e5;
case 0x6fd2ea:goto L6fd2ea;
case 0x6fd2f1:c.instructions+=1;goto B6fd2f1;
case 0x6fd2f6:goto L6fd2f6;
case 0x6fd2f7:c.instructions+=7;goto B6fd2f7;
case 0x6fd2f9:c.instructions+=6;goto B6fd2f9;
case 0x6fd2ff:c.instructions+=5;goto B6fd2ff;
case 0x6fd300:c.instructions+=4;goto B6fd300;
case 0x6fd302:c.instructions+=3;goto B6fd302;
case 0x6fd305:c.instructions+=2;goto B6fd305;
case 0x6fd308:c.instructions+=1;goto B6fd308;
case 0x6fd30e:goto L6fd30e;
case 0x6fd30f:c.instructions+=1;goto B6fd30f;
case 0x6fd311:goto L6fd311;
case 0x6fd312:c.instructions+=1;goto B6fd312;
case 0x6fd314:goto L6fd314;
case 0x6fd315:c.instructions+=1;goto B6fd315;
case 0x6fd31b:goto L6fd31b;
case 0x6fd31e:c.instructions+=7;goto B6fd31e;
case 0x6fd320:c.instructions+=6;goto B6fd320;
case 0x6fd326:c.instructions+=5;goto B6fd326;
case 0x6fd329:c.instructions+=4;goto B6fd329;
case 0x6fd32c:c.instructions+=3;goto B6fd32c;
case 0x6fd331:c.instructions+=2;goto B6fd331;
case 0x6fd333:c.instructions+=1;goto B6fd333;
case 0x6fd335:goto L6fd335;
case 0x6fd33b:c.instructions+=2;goto B6fd33b;
case 0x6fd33c:c.instructions+=1;goto B6fd33c;
case 0x6fd33f:goto L6fd33f;
case 0x6fd344:goto L6fd344;
case 0x6fd347:goto L6fd347;
case 0x6fd34d:c.instructions+=4;goto B6fd34d;
case 0x6fd350:c.instructions+=3;goto B6fd350;
case 0x6fd356:c.instructions+=2;goto B6fd356;
case 0x6fd358:c.instructions+=1;goto B6fd358;
case 0x6fd35b:goto L6fd35b;
case 0x6fd360:goto L6fd360;
case 0x6fd364:c.instructions+=1;goto B6fd364;
case 0x6fd36a:goto L6fd36a;
case 0x6fd371:c.instructions+=1;goto B6fd371;
case 0x6fd376:goto L6fd376;
case 0x6fd379:c.instructions+=1;goto B6fd379;
case 0x6fd37e:goto L6fd37e;
case 0x6fd384:c.instructions+=2;goto B6fd384;
case 0x6fd386:c.instructions+=1;goto B6fd386;
case 0x6fd388:goto L6fd388;
case 0x6fd38a:c.instructions+=3;goto B6fd38a;
case 0x6fd38c:c.instructions+=2;goto B6fd38c;
case 0x6fd38f:c.instructions+=1;goto B6fd38f;
case 0x6fd394:goto L6fd394;
case 0x6fd396:goto L6fd396;
case 0x6fd399:c.instructions+=1;goto B6fd399;
case 0x6fd39b:goto L6fd39b;
case 0x6fd39d:c.instructions+=4;goto B6fd39d;
case 0x6fd3a3:c.instructions+=3;goto B6fd3a3;
case 0x6fd3a6:c.instructions+=2;goto B6fd3a6;
case 0x6fd3a8:c.instructions+=1;goto B6fd3a8;
case 0x6fd3ad:goto L6fd3ad;
case 0x6fd3b1:c.instructions+=4;goto B6fd3b1;
case 0x6fd3b4:c.instructions+=3;goto B6fd3b4;
case 0x6fd3b5:c.instructions+=2;goto B6fd3b5;
case 0x6fd3b7:c.instructions+=1;goto B6fd3b7;
case 0x6fd3bc:goto L6fd3bc;
case 0x6fd3c3:c.instructions+=1;goto B6fd3c3;
case 0x6fd3c8:goto L6fd3c8;
case 0x6fd3c9:c.instructions+=11;goto B6fd3c9;
case 0x6fd3ca:c.instructions+=10;goto B6fd3ca;
case 0x6fd3d0:c.instructions+=9;goto B6fd3d0;
case 0x6fd3d1:c.instructions+=8;goto B6fd3d1;
case 0x6fd3d7:c.instructions+=7;goto B6fd3d7;
case 0x6fd3d8:c.instructions+=6;goto B6fd3d8;
case 0x6fd3de:c.instructions+=5;goto B6fd3de;
case 0x6fd3df:c.instructions+=4;goto B6fd3df;
case 0x6fd3e5:c.instructions+=3;goto B6fd3e5;
case 0x6fd3ea:c.instructions+=2;goto B6fd3ea;
case 0x6fd3eb:c.instructions+=1;goto B6fd3eb;
case 0x6fd3f0:goto L6fd3f0;
case 0x6fd3f5:c.instructions+=4;goto B6fd3f5;
case 0x6fd3fb:c.instructions+=3;goto B6fd3fb;
case 0x6fd400:c.instructions+=2;goto B6fd400;
case 0x6fd401:c.instructions+=1;goto B6fd401;
case 0x6fd406:goto L6fd406;
case 0x6fd409:c.instructions+=3;goto B6fd409;
case 0x6fd40c:c.instructions+=2;goto B6fd40c;
case 0x6fd412:c.instructions+=1;goto B6fd412;
case 0x6fd418:goto L6fd418;
case 0x6fd419:c.instructions+=1;goto B6fd419;
case 0x6fd41e:goto L6fd41e;
case 0x6fd420:c.instructions+=5;goto B6fd420;
case 0x6fd421:c.instructions+=4;goto B6fd421;
case 0x6fd424:c.instructions+=3;goto B6fd424;
case 0x6fd425:c.instructions+=2;goto B6fd425;
case 0x6fd42b:c.instructions+=1;goto B6fd42b;
case 0x6fd42d:goto L6fd42d;
case 0x6fd433:c.instructions+=1;goto B6fd433;
case 0x6fd43d:goto L6fd43d;
case 0x6fd444:c.instructions+=1;goto B6fd444;
case 0x6fd44a:goto L6fd44a;
case 0x6fd450:c.instructions+=1;goto B6fd450;
case 0x6fd452:goto L6fd452;
case 0x6fd454:c.instructions+=4;goto B6fd454;
case 0x6fd45a:c.instructions+=3;goto B6fd45a;
case 0x6fd45b:c.instructions+=2;goto B6fd45b;
case 0x6fd461:c.instructions+=1;goto B6fd461;
case 0x6fd466:goto L6fd466;
case 0x6fd469:c.instructions+=2;goto B6fd469;
case 0x6fd46c:c.instructions+=1;goto B6fd46c;
case 0x6fd46e:goto L6fd46e;
case 0x6fd478:c.instructions+=1;goto B6fd478;
case 0x6fd47a:goto L6fd47a;
case 0x6fd480:c.instructions+=2;goto B6fd480;
case 0x6fd486:c.instructions+=1;goto B6fd486;
case 0x6fd488:goto L6fd488;
case 0x6fd48e:c.instructions+=2;goto B6fd48e;
case 0x6fd494:c.instructions+=1;goto B6fd494;
case 0x6fd496:goto L6fd496;
case 0x6fd498:c.instructions+=3;goto B6fd498;
case 0x6fd499:c.instructions+=2;goto B6fd499;
case 0x6fd49b:c.instructions+=1;goto B6fd49b;
case 0x6fd4a0:goto L6fd4a0;
case 0x6fd4a6:c.instructions+=1;goto B6fd4a6;
case 0x6fd4a8:goto L6fd4a8;
case 0x6fd4b2:goto L6fd4b2;
case 0x6fd4b8:goto L6fd4b8;
case 0x6fd4be:c.instructions+=2;goto B6fd4be;
case 0x6fd4c1:c.instructions+=1;goto B6fd4c1;
case 0x6fd4c3:goto L6fd4c3;
case 0x6fd4c9:c.instructions+=2;goto B6fd4c9;
case 0x6fd4cc:c.instructions+=1;goto B6fd4cc;
case 0x6fd4ce:goto L6fd4ce;
case 0x6fd4d1:c.instructions+=6;goto B6fd4d1;
case 0x6fd4d3:c.instructions+=5;goto B6fd4d3;
case 0x6fd4d4:c.instructions+=4;goto B6fd4d4;
case 0x6fd4d5:c.instructions+=3;goto B6fd4d5;
case 0x6fd4db:c.instructions+=2;goto B6fd4db;
case 0x6fd4e1:c.instructions+=1;goto B6fd4e1;
case 0x6fd4e4:goto L6fd4e4;
case 0x6fd4ea:goto L6fd4ea;
case 0x6fd4f0:c.instructions+=1;goto B6fd4f0;
case 0x6fd4f2:goto L6fd4f2;
case 0x6fd4f8:c.instructions+=1;goto B6fd4f8;
case 0x6fd502:goto L6fd502;
case 0x6fd508:c.instructions+=1;goto B6fd508;
case 0x6fd50e:goto L6fd50e;
case 0x6fd514:c.instructions+=2;goto B6fd514;
case 0x6fd516:c.instructions+=1;goto B6fd516;
case 0x6fd518:goto L6fd518;
case 0x6fd51a:c.instructions+=2;goto B6fd51a;
case 0x6fd51c:c.instructions+=1;goto B6fd51c;
case 0x6fd51e:goto L6fd51e;
case 0x6fd51f:c.instructions+=3;goto B6fd51f;
case 0x6fd520:c.instructions+=2;goto B6fd520;
case 0x6fd526:c.instructions+=1;goto B6fd526;
case 0x6fd52b:goto L6fd52b;
case 0x6fd52e:c.instructions+=2;goto B6fd52e;
case 0x6fd534:c.instructions+=1;goto B6fd534;
case 0x6fd536:goto L6fd536;
case 0x6fd53c:c.instructions+=1;goto B6fd53c;
case 0x6fd546:goto L6fd546;
case 0x6fd54c:c.instructions+=1;goto B6fd54c;
case 0x6fd552:goto L6fd552;
case 0x6fd554:c.instructions+=2;goto B6fd554;
case 0x6fd55a:c.instructions+=1;goto B6fd55a;
case 0x6fd55c:goto L6fd55c;
case 0x6fd562:c.instructions+=1;goto B6fd562;
case 0x6fd564:goto L6fd564;
case 0x6fd566:c.instructions+=1;goto B6fd566;
case 0x6fd568:goto L6fd568;
case 0x6fd569:c.instructions+=4;goto B6fd569;
case 0x6fd56f:c.instructions+=3;goto B6fd56f;
case 0x6fd571:c.instructions+=2;goto B6fd571;
case 0x6fd577:c.instructions+=1;goto B6fd577;
case 0x6fd57c:goto L6fd57c;
case 0x6fd57e:c.instructions+=4;goto B6fd57e;
case 0x6fd581:c.instructions+=3;goto B6fd581;
case 0x6fd584:c.instructions+=2;goto B6fd584;
case 0x6fd586:c.instructions+=1;goto B6fd586;
case 0x6fd588:goto L6fd588;
case 0x6fd58e:c.instructions+=1;goto B6fd58e;
case 0x6fd598:goto L6fd598;
case 0x6fd59e:c.instructions+=1;goto B6fd59e;
case 0x6fd5a0:goto L6fd5a0;
case 0x6fd5a6:c.instructions+=3;goto B6fd5a6;
case 0x6fd5ac:c.instructions+=2;goto B6fd5ac;
case 0x6fd5b2:c.instructions+=1;goto B6fd5b2;
case 0x6fd5b7:goto L6fd5b7;
case 0x6fd5ba:c.instructions+=2;goto B6fd5ba;
case 0x6fd5c0:c.instructions+=1;goto B6fd5c0;
case 0x6fd5c2:goto L6fd5c2;
case 0x6fd5c8:c.instructions+=1;goto B6fd5c8;
case 0x6fd5d2:goto L6fd5d2;
case 0x6fd5d8:c.instructions+=1;goto B6fd5d8;
case 0x6fd5dd:goto L6fd5dd;
case 0x6fd5e4:c.instructions+=2;goto B6fd5e4;
case 0x6fd5e5:c.instructions+=1;goto B6fd5e5;
case 0x6fd5ea:goto L6fd5ea;
case 0x6fd5f0:c.instructions+=2;goto B6fd5f0;
case 0x6fd5f3:c.instructions+=1;goto B6fd5f3;
case 0x6fd5f5:goto L6fd5f5;
case 0x6fd5f8:c.instructions+=7;goto B6fd5f8;
case 0x6fd5fa:c.instructions+=6;goto B6fd5fa;
case 0x6fd5fb:c.instructions+=5;goto B6fd5fb;
case 0x6fd601:c.instructions+=4;goto B6fd601;
case 0x6fd602:c.instructions+=3;goto B6fd602;
case 0x6fd603:c.instructions+=2;goto B6fd603;
case 0x6fd605:c.instructions+=1;goto B6fd605;
case 0x6fd608:goto L6fd608;
case 0x6fd60e:goto L6fd60e;
case 0x6fd614:c.instructions+=1;goto B6fd614;
case 0x6fd616:goto L6fd616;
case 0x6fd61c:c.instructions+=1;goto B6fd61c;
case 0x6fd626:goto L6fd626;
case 0x6fd62c:c.instructions+=1;goto B6fd62c;
case 0x6fd632:goto L6fd632;
case 0x6fd638:c.instructions+=4;goto B6fd638;
case 0x6fd63e:c.instructions+=3;goto B6fd63e;
case 0x6fd63f:c.instructions+=2;goto B6fd63f;
case 0x6fd645:c.instructions+=1;goto B6fd645;
case 0x6fd64a:goto L6fd64a;
case 0x6fd64d:c.instructions+=2;goto B6fd64d;
case 0x6fd653:c.instructions+=1;goto B6fd653;
case 0x6fd655:goto L6fd655;
case 0x6fd65f:c.instructions+=1;goto B6fd65f;
case 0x6fd661:goto L6fd661;
case 0x6fd663:c.instructions+=2;goto B6fd663;
case 0x6fd664:c.instructions+=1;goto B6fd664;
case 0x6fd66e:goto L6fd66e;
case 0x6fd674:goto L6fd674;
case 0x6fd67a:c.instructions+=1;goto B6fd67a;
case 0x6fd680:goto L6fd680;
case 0x6fd682:c.instructions+=2;goto B6fd682;
case 0x6fd688:c.instructions+=1;goto B6fd688;
case 0x6fd68e:goto L6fd68e;
case 0x6fd694:c.instructions+=2;goto B6fd694;
case 0x6fd69a:c.instructions+=1;goto B6fd69a;
case 0x6fd6a0:goto L6fd6a0;
case 0x6fd6a6:c.instructions+=2;goto B6fd6a6;
case 0x6fd6ac:c.instructions+=1;goto B6fd6ac;
case 0x6fd6b2:goto L6fd6b2;
case 0x6fd6b4:c.instructions+=3;goto B6fd6b4;
case 0x6fd6b5:c.instructions+=2;goto B6fd6b5;
case 0x6fd6b7:c.instructions+=1;goto B6fd6b7;
case 0x6fd6bc:goto L6fd6bc;
case 0x6fd6c2:c.instructions+=1;goto B6fd6c2;
case 0x6fd6c8:goto L6fd6c8;
case 0x6fd6ce:c.instructions+=2;goto B6fd6ce;
case 0x6fd6d0:c.instructions+=1;goto B6fd6d0;
case 0x6fd6d2:goto L6fd6d2;
case 0x6fd6d8:c.instructions+=3;goto B6fd6d8;
case 0x6fd6da:c.instructions+=2;goto B6fd6da;
case 0x6fd6db:c.instructions+=1;goto B6fd6db;
case 0x6fd6e0:goto L6fd6e0;
case 0x6fd6e6:c.instructions+=1;goto B6fd6e6;
case 0x6fd6e8:goto L6fd6e8;
case 0x6fd6ee:c.instructions+=1;goto B6fd6ee;
case 0x6fd6f8:goto L6fd6f8;
case 0x6fd6fe:c.instructions+=2;goto B6fd6fe;
case 0x6fd700:c.instructions+=1;goto B6fd700;
case 0x6fd702:goto L6fd702;
case 0x6fd708:c.instructions+=3;goto B6fd708;
case 0x6fd70a:c.instructions+=2;goto B6fd70a;
case 0x6fd70b:c.instructions+=1;goto B6fd70b;
case 0x6fd710:goto L6fd710;
case 0x6fd716:c.instructions+=1;goto B6fd716;
case 0x6fd718:goto L6fd718;
case 0x6fd71e:c.instructions+=2;goto B6fd71e;
case 0x6fd728:c.instructions+=1;goto B6fd728;
case 0x6fd72a:goto L6fd72a;
case 0x6fd72d:c.instructions+=3;goto B6fd72d;
case 0x6fd733:c.instructions+=2;goto B6fd733;
case 0x6fd735:c.instructions+=1;goto B6fd735;
case 0x6fd738:goto L6fd738;
case 0x6fd73a:c.instructions+=1;goto B6fd73a;
case 0x6fd73c:goto L6fd73c;
case 0x6fd742:c.instructions+=2;goto B6fd742;
case 0x6fd748:c.instructions+=1;goto B6fd748;
case 0x6fd74a:goto L6fd74a;
case 0x6fd750:c.instructions+=1;goto B6fd750;
case 0x6fd75a:goto L6fd75a;
case 0x6fd75b:c.instructions+=2;goto B6fd75b;
case 0x6fd762:c.instructions+=1;goto B6fd762;
case 0x6fd763:goto L6fd763;
case 0x6fd764:c.instructions+=2;goto B6fd764;
case 0x6fd765:c.instructions+=1;goto B6fd765;
case 0x6fd768:goto L6fd768;
case 0x6fd769:c.instructions+=7;goto B6fd769;
case 0x6fd76b:c.instructions+=6;goto B6fd76b;
case 0x6fd771:c.instructions+=5;goto B6fd771;
case 0x6fd772:c.instructions+=4;goto B6fd772;
case 0x6fd774:c.instructions+=3;goto B6fd774;
case 0x6fd777:c.instructions+=2;goto B6fd777;
case 0x6fd77a:c.instructions+=1;goto B6fd77a;
case 0x6fd780:goto L6fd780;
case 0x6fd781:c.instructions+=1;goto B6fd781;
case 0x6fd787:goto L6fd787;
case 0x6fd788:c.instructions+=1;goto B6fd788;
case 0x6fd78e:goto L6fd78e;
case 0x6fd78f:c.instructions+=1;goto B6fd78f;
case 0x6fd791:goto L6fd791;
case 0x6fd792:c.instructions+=1;goto B6fd792;
case 0x6fd794:goto L6fd794;
case 0x6fd795:c.instructions+=1;goto B6fd795;
case 0x6fd79b:goto L6fd79b;
case 0x6fd79e:c.instructions+=7;goto B6fd79e;
case 0x6fd7a0:c.instructions+=6;goto B6fd7a0;
case 0x6fd7a6:c.instructions+=5;goto B6fd7a6;
case 0x6fd7a9:c.instructions+=4;goto B6fd7a9;
case 0x6fd7ac:c.instructions+=3;goto B6fd7ac;
case 0x6fd7b1:c.instructions+=2;goto B6fd7b1;
case 0x6fd7b3:c.instructions+=1;goto B6fd7b3;
case 0x6fd7b5:goto L6fd7b5;
case 0x6fd7bb:c.instructions+=2;goto B6fd7bb;
case 0x6fd7bc:c.instructions+=1;goto B6fd7bc;
case 0x6fd7bf:goto L6fd7bf;
case 0x6fd7c4:goto L6fd7c4;
case 0x6fd7c7:goto L6fd7c7;
case 0x6fd7cd:c.instructions+=4;goto B6fd7cd;
case 0x6fd7d0:c.instructions+=3;goto B6fd7d0;
case 0x6fd7d6:c.instructions+=2;goto B6fd7d6;
case 0x6fd7d8:c.instructions+=1;goto B6fd7d8;
case 0x6fd7db:goto L6fd7db;
case 0x6fd7e0:goto L6fd7e0;
case 0x6fd7e4:c.instructions+=1;goto B6fd7e4;
case 0x6fd7ea:goto L6fd7ea;
case 0x6fd7f1:c.instructions+=1;goto B6fd7f1;
case 0x6fd7f6:goto L6fd7f6;
case 0x6fd7f9:c.instructions+=1;goto B6fd7f9;
case 0x6fd7fe:goto L6fd7fe;
case 0x6fd804:c.instructions+=2;goto B6fd804;
case 0x6fd806:c.instructions+=1;goto B6fd806;
case 0x6fd808:goto L6fd808;
case 0x6fd80a:c.instructions+=3;goto B6fd80a;
case 0x6fd80c:c.instructions+=2;goto B6fd80c;
case 0x6fd80f:c.instructions+=1;goto B6fd80f;
case 0x6fd814:goto L6fd814;
case 0x6fd816:goto L6fd816;
case 0x6fd819:c.instructions+=1;goto B6fd819;
case 0x6fd81b:goto L6fd81b;
case 0x6fd81d:c.instructions+=4;goto B6fd81d;
case 0x6fd823:c.instructions+=3;goto B6fd823;
case 0x6fd826:c.instructions+=2;goto B6fd826;
case 0x6fd828:c.instructions+=1;goto B6fd828;
case 0x6fd82d:goto L6fd82d;
case 0x6fd831:c.instructions+=4;goto B6fd831;
case 0x6fd834:c.instructions+=3;goto B6fd834;
case 0x6fd835:c.instructions+=2;goto B6fd835;
case 0x6fd837:c.instructions+=1;goto B6fd837;
case 0x6fd83c:goto L6fd83c;
case 0x6fd843:c.instructions+=1;goto B6fd843;
case 0x6fd848:goto L6fd848;
case 0x6fd84e:c.instructions+=4;goto B6fd84e;
case 0x6fd854:c.instructions+=3;goto B6fd854;
case 0x6fd855:c.instructions+=2;goto B6fd855;
case 0x6fd859:c.instructions+=1;goto B6fd859;
case 0x6fd85f:goto L6fd85f;
case 0x6fd865:c.instructions+=1;goto B6fd865;
case 0x6fd866:goto L6fd866;
case 0x6fd86d:c.instructions+=1;goto B6fd86d;
case 0x6fd86f:goto L6fd86f;
case 0x6fd876:c.instructions+=1;goto B6fd876;
case 0x6fd878:goto L6fd878;
case 0x6fd87a:c.instructions+=3;goto B6fd87a;
case 0x6fd87b:c.instructions+=2;goto B6fd87b;
case 0x6fd87d:c.instructions+=1;goto B6fd87d;
case 0x6fd883:goto L6fd883;
case 0x6fd885:goto L6fd885;
case 0x6fd88b:c.instructions+=6;goto B6fd88b;
case 0x6fd891:c.instructions+=5;goto B6fd891;
case 0x6fd893:c.instructions+=4;goto B6fd893;
case 0x6fd896:c.instructions+=3;goto B6fd896;
case 0x6fd89c:c.instructions+=2;goto B6fd89c;
case 0x6fd89d:c.instructions+=1;goto B6fd89d;
case 0x6fd8a2:goto L6fd8a2;
case 0x6fd8a5:goto L6fd8a5;
case 0x6fd8ab:c.instructions+=10;goto B6fd8ab;
case 0x6fd8b1:c.instructions+=9;goto B6fd8b1;
case 0x6fd8b7:c.instructions+=8;goto B6fd8b7;
case 0x6fd8b8:c.instructions+=7;goto B6fd8b8;
case 0x6fd8be:c.instructions+=6;goto B6fd8be;
case 0x6fd8bf:c.instructions+=5;goto B6fd8bf;
case 0x6fd8c4:c.instructions+=4;goto B6fd8c4;
case 0x6fd8ca:c.instructions+=3;goto B6fd8ca;
case 0x6fd8cb:c.instructions+=2;goto B6fd8cb;
case 0x6fd8cc:c.instructions+=1;goto B6fd8cc;
case 0x6fd8d1:goto L6fd8d1;
case 0x6fd8d4:c.instructions+=3;goto B6fd8d4;
case 0x6fd8d6:c.instructions+=2;goto B6fd8d6;
case 0x6fd8da:c.instructions+=1;goto B6fd8da;
case 0x6fd8df:goto L6fd8df;
case 0x6fd8e5:c.instructions+=2;goto B6fd8e5;
case 0x6fd8e6:c.instructions+=1;goto B6fd8e6;
case 0x6fd8eb:goto L6fd8eb;
case 0x6fd8ec:c.instructions+=4;goto B6fd8ec;
case 0x6fd8ee:c.instructions+=3;goto B6fd8ee;
case 0x6fd8ef:c.instructions+=2;goto B6fd8ef;
case 0x6fd8f5:c.instructions+=1;goto B6fd8f5;
case 0x6fd8f7:goto L6fd8f7;
case 0x6fd8fd:c.instructions+=1;goto B6fd8fd;
case 0x6fd902:goto L6fd902;
case 0x6fd909:c.instructions+=1;goto B6fd909;
case 0x6fd90b:goto L6fd90b;
case 0x6fd912:c.instructions+=1;goto B6fd912;
case 0x6fd914:goto L6fd914;
case 0x6fd91a:c.instructions+=8;goto B6fd91a;
case 0x6fd920:c.instructions+=7;goto B6fd920;
case 0x6fd921:c.instructions+=6;goto B6fd921;
case 0x6fd927:c.instructions+=5;goto B6fd927;
case 0x6fd928:c.instructions+=4;goto B6fd928;
case 0x6fd92e:c.instructions+=3;goto B6fd92e;
case 0x6fd92f:c.instructions+=2;goto B6fd92f;
case 0x6fd930:c.instructions+=1;goto B6fd930;
case 0x6fd935:goto L6fd935;
case 0x6fd93b:c.instructions+=2;goto B6fd93b;
case 0x6fd93c:c.instructions+=1;goto B6fd93c;
case 0x6fd941:goto L6fd941;
case 0x6fd944:c.instructions+=2;goto B6fd944;
case 0x6fd946:c.instructions+=1;goto B6fd946;
case 0x6fd948:goto L6fd948;
case 0x6fd952:c.instructions+=2;goto B6fd952;
case 0x6fd95c:c.instructions+=1;goto B6fd95c;
case 0x6fd95e:goto L6fd95e;
case 0x6fd962:goto L6fd962;
case 0x6fd968:c.instructions+=2;goto B6fd968;
case 0x6fd969:c.instructions+=1;goto B6fd969;
case 0x6fd96e:goto L6fd96e;
case 0x6fd96f:goto L6fd96f;
case 0x6fd976:c.instructions+=1;goto B6fd976;
case 0x6fd978:goto L6fd978;
case 0x6fd97f:c.instructions+=1;goto B6fd97f;
case 0x6fd981:goto L6fd981;
case 0x6fd987:c.instructions+=7;goto B6fd987;
case 0x6fd988:c.instructions+=6;goto B6fd988;
case 0x6fd98e:c.instructions+=5;goto B6fd98e;
case 0x6fd98f:c.instructions+=4;goto B6fd98f;
case 0x6fd995:c.instructions+=3;goto B6fd995;
case 0x6fd99a:c.instructions+=2;goto B6fd99a;
case 0x6fd99b:c.instructions+=1;goto B6fd99b;
case 0x6fd9a0:goto L6fd9a0;
case 0x6fd9a6:c.instructions+=2;goto B6fd9a6;
case 0x6fd9a7:c.instructions+=1;goto B6fd9a7;
case 0x6fd9ac:goto L6fd9ac;
case 0x6fd9af:c.instructions+=2;goto B6fd9af;
case 0x6fd9b1:c.instructions+=1;goto B6fd9b1;
case 0x6fd9b3:goto L6fd9b3;
case 0x6fd9bd:c.instructions+=2;goto B6fd9bd;
case 0x6fd9c7:c.instructions+=1;goto B6fd9c7;
case 0x6fd9c9:goto L6fd9c9;
case 0x6fd9cd:goto L6fd9cd;
case 0x6fd9d1:goto L6fd9d1;
case 0x6fd9d7:c.instructions+=2;goto B6fd9d7;
case 0x6fd9dd:c.instructions+=1;goto B6fd9dd;
case 0x6fd9e3:goto L6fd9e3;
case 0x6fd9e4:goto L6fd9e4;
case 0x6fd9e6:c.instructions+=3;goto B6fd9e6;
case 0x6fd9e7:c.instructions+=2;goto B6fd9e7;
case 0x6fd9ed:c.instructions+=1;goto B6fd9ed;
case 0x6fd9ef:goto L6fd9ef;
case 0x6fd9f3:c.instructions+=1;goto B6fd9f3;
case 0x6fd9f5:goto L6fd9f5;
case 0x6fd9f7:c.instructions+=3;goto B6fd9f7;
case 0x6fd9f8:c.instructions+=2;goto B6fd9f8;
case 0x6fd9fe:c.instructions+=1;goto B6fd9fe;
case 0x6fda00:goto L6fda00;
case 0x6fda04:c.instructions+=1;goto B6fda04;
case 0x6fda06:goto L6fda06;
case 0x6fda0d:c.instructions+=2;goto B6fda0d;
case 0x6fda14:c.instructions+=1;goto B6fda14;
case 0x6fda16:goto L6fda16;
case 0x6fda1c:c.instructions+=1;goto B6fda1c;
case 0x6fda22:goto L6fda22;
case 0x6fda29:c.instructions+=2;goto B6fda29;
case 0x6fda2a:c.instructions+=1;goto B6fda2a;
case 0x6fda2c:goto L6fda2c;
case 0x6fda2f:c.instructions+=2;goto B6fda2f;
case 0x6fda30:c.instructions+=1;goto B6fda30;
case 0x6fda32:goto L6fda32;
case 0x6fda33:c.instructions+=1;goto B6fda33;
case 0x6fda35:goto L6fda35;
case 0x6fda3c:c.instructions+=1;goto B6fda3c;
case 0x6fda3e:goto L6fda3e;
case 0x6fda45:c.instructions+=2;goto B6fda45;
case 0x6fda4f:c.instructions+=1;goto B6fda4f;
case 0x6fda54:goto L6fda54;
case 0x6fda57:c.instructions+=1;goto B6fda57;
case 0x6fda5c:goto L6fda5c;
case 0x6fda61:c.instructions+=4;goto B6fda61;
case 0x6fda67:c.instructions+=3;goto B6fda67;
case 0x6fda6a:c.instructions+=2;goto B6fda6a;
case 0x6fda6c:c.instructions+=1;goto B6fda6c;
case 0x6fda71:goto L6fda71;
case 0x6fda74:c.instructions+=3;goto B6fda74;
case 0x6fda75:c.instructions+=2;goto B6fda75;
case 0x6fda77:c.instructions+=1;goto B6fda77;
case 0x6fda7c:goto L6fda7c;
case 0x6fda83:goto L6fda83;
case 0x6fda84:c.instructions+=2;goto B6fda84;
case 0x6fda85:c.instructions+=1;goto B6fda85;
case 0x6fda88:goto L6fda88;
case 0x6fda8a:c.instructions+=14;goto B6fda8a;
case 0x6fda8b:c.instructions+=13;goto B6fda8b;
case 0x6fda8d:c.instructions+=12;goto B6fda8d;
case 0x6fda90:c.instructions+=11;goto B6fda90;
case 0x6fda93:c.instructions+=10;goto B6fda93;
case 0x6fda96:c.instructions+=9;goto B6fda96;
case 0x6fda99:c.instructions+=8;goto B6fda99;
case 0x6fda9a:c.instructions+=7;goto B6fda9a;
case 0x6fda9d:c.instructions+=6;goto B6fda9d;
case 0x6fda9e:c.instructions+=5;goto B6fda9e;
case 0x6fdaa1:c.instructions+=4;goto B6fdaa1;
case 0x6fdaa2:c.instructions+=3;goto B6fdaa2;
case 0x6fdaa4:c.instructions+=2;goto B6fdaa4;
case 0x6fdaa5:c.instructions+=1;goto B6fdaa5;
case 0x6fdaa6:goto L6fdaa6;
case 0x6fdaa7:c.instructions+=3;goto B6fdaa7;
case 0x6fdaa9:c.instructions+=2;goto B6fdaa9;
case 0x6fdaac:c.instructions+=1;goto B6fdaac;
case 0x6fdab1:goto L6fdab1;
case 0x6fdab3:c.instructions+=1;goto B6fdab3;
case 0x6fdab8:goto L6fdab8;
case 0x6fdaba:c.instructions+=2;goto B6fdaba;
case 0x6fdabb:c.instructions+=1;goto B6fdabb;
case 0x6fdabc:goto L6fdabc;
case 0x6fdabd:c.instructions+=9;goto B6fdabd;
case 0x6fdabf:c.instructions+=8;goto B6fdabf;
case 0x6fdac0:c.instructions+=7;goto B6fdac0;
case 0x6fdac1:c.instructions+=6;goto B6fdac1;
case 0x6fdac3:c.instructions+=5;goto B6fdac3;
case 0x6fdac5:c.instructions+=4;goto B6fdac5;
case 0x6fdac6:c.instructions+=3;goto B6fdac6;
case 0x6fdac8:c.instructions+=2;goto B6fdac8;
case 0x6fdaca:c.instructions+=1;goto B6fdaca;
case 0x6fdacc:goto L6fdacc;
case 0x6fdace:goto L6fdace;
case 0x6fdad1:c.instructions+=5;goto B6fdad1;
case 0x6fdad3:c.instructions+=4;goto B6fdad3;
case 0x6fdad4:c.instructions+=3;goto B6fdad4;
case 0x6fdad7:c.instructions+=2;goto B6fdad7;
case 0x6fdada:c.instructions+=1;goto B6fdada;
case 0x6fdadf:goto L6fdadf;
case 0x6fdae0:c.instructions+=5;goto B6fdae0;
case 0x6fdae1:c.instructions+=4;goto B6fdae1;
case 0x6fdae4:c.instructions+=3;goto B6fdae4;
case 0x6fdae6:c.instructions+=2;goto B6fdae6;
case 0x6fdae9:c.instructions+=1;goto B6fdae9;
case 0x6fdaee:goto L6fdaee;
case 0x6fdaef:c.instructions+=3;goto B6fdaef;
case 0x6fdaf0:c.instructions+=2;goto B6fdaf0;
case 0x6fdaf1:c.instructions+=1;goto B6fdaf1;
case 0x6fdaf4:goto L6fdaf4;
case 0x6fdaf5:c.instructions+=10;goto B6fdaf5;
case 0x6fdaf7:c.instructions+=9;goto B6fdaf7;
case 0x6fdaf8:c.instructions+=8;goto B6fdaf8;
case 0x6fdaf9:c.instructions+=7;goto B6fdaf9;
case 0x6fdafb:c.instructions+=6;goto B6fdafb;
case 0x6fdafd:c.instructions+=5;goto B6fdafd;
case 0x6fdafe:c.instructions+=4;goto B6fdafe;
case 0x6fdb01:c.instructions+=3;goto B6fdb01;
case 0x6fdb03:c.instructions+=2;goto B6fdb03;
case 0x6fdb05:c.instructions+=1;goto B6fdb05;
case 0x6fdb07:goto L6fdb07;
case 0x6fdb09:goto L6fdb09;
case 0x6fdb0c:c.instructions+=5;goto B6fdb0c;
case 0x6fdb11:c.instructions+=4;goto B6fdb11;
case 0x6fdb12:c.instructions+=3;goto B6fdb12;
case 0x6fdb15:c.instructions+=2;goto B6fdb15;
case 0x6fdb18:c.instructions+=1;goto B6fdb18;
case 0x6fdb1d:goto L6fdb1d;
case 0x6fdb20:c.instructions+=4;goto B6fdb20;
case 0x6fdb23:c.instructions+=3;goto B6fdb23;
case 0x6fdb25:c.instructions+=2;goto B6fdb25;
case 0x6fdb28:c.instructions+=1;goto B6fdb28;
case 0x6fdb2d:goto L6fdb2d;
case 0x6fdb2e:c.instructions+=3;goto B6fdb2e;
case 0x6fdb2f:c.instructions+=2;goto B6fdb2f;
case 0x6fdb30:c.instructions+=1;goto B6fdb30;
case 0x6fdb33:goto L6fdb33;
case 0x6fdb35:c.instructions+=9;goto B6fdb35;
case 0x6fdb39:c.instructions+=8;goto B6fdb39;
case 0x6fdb3d:c.instructions+=7;goto B6fdb3d;
case 0x6fdb3e:c.instructions+=6;goto B6fdb3e;
case 0x6fdb40:c.instructions+=5;goto B6fdb40;
case 0x6fdb47:c.instructions+=4;goto B6fdb47;
case 0x6fdb48:c.instructions+=3;goto B6fdb48;
case 0x6fdb4a:c.instructions+=2;goto B6fdb4a;
case 0x6fdb4c:c.instructions+=1;goto B6fdb4c;
case 0x6fdb52:goto L6fdb52;
case 0x6fdb54:goto L6fdb54;
case 0x6fdb56:c.instructions+=2;goto B6fdb56;
case 0x6fdb57:c.instructions+=1;goto B6fdb57;
case 0x6fdb58:goto L6fdb58;
case 0x6fdb59:c.instructions+=6;goto B6fdb59;
case 0x6fdb5b:c.instructions+=5;goto B6fdb5b;
case 0x6fdb5e:c.instructions+=4;goto B6fdb5e;
case 0x6fdb61:c.instructions+=3;goto B6fdb61;
case 0x6fdb63:c.instructions+=2;goto B6fdb63;
case 0x6fdb64:c.instructions+=1;goto B6fdb64;
case 0x6fdb66:goto L6fdb66;
case 0x6fdb67:c.instructions+=1;goto B6fdb67;
case 0x6fdb69:goto L6fdb69;
case 0x6fdb6a:c.instructions+=1;goto B6fdb6a;
case 0x6fdb6c:goto L6fdb6c;
case 0x6fdb6d:c.instructions+=1;goto B6fdb6d;
case 0x6fdb6f:goto L6fdb6f;
case 0x6fdb71:c.instructions+=1;goto B6fdb71;
case 0x6fdb73:goto L6fdb73;
case 0x6fdb75:c.instructions+=1;goto B6fdb75;
case 0x6fdb77:goto L6fdb77;
case 0x6fdb79:c.instructions+=1;goto B6fdb79;
case 0x6fdb7b:goto L6fdb7b;
case 0x6fdb7d:goto L6fdb7d;
case 0x6fdb7e:goto L6fdb7e;
case 0x6fdb81:c.instructions+=4;goto B6fdb81;
case 0x6fdb83:c.instructions+=3;goto B6fdb83;
case 0x6fdb85:c.instructions+=2;goto B6fdb85;
case 0x6fdb86:c.instructions+=1;goto B6fdb86;
case 0x6fdb89:goto L6fdb89;
case 0x6fdb8a:c.instructions+=1;goto B6fdb8a;
case 0x6fdb8d:goto L6fdb8d;
case 0x6fdb8e:c.instructions+=5;goto B6fdb8e;
case 0x6fdb90:c.instructions+=4;goto B6fdb90;
case 0x6fdb91:c.instructions+=3;goto B6fdb91;
case 0x6fdb93:c.instructions+=2;goto B6fdb93;
case 0x6fdb97:c.instructions+=1;goto B6fdb97;
case 0x6fdb99:goto L6fdb99;
case 0x6fdb9d:c.instructions+=1;goto B6fdb9d;
case 0x6fdb9f:goto L6fdb9f;
case 0x6fdba4:goto L6fdba4;
case 0x6fdba6:c.instructions+=1;goto B6fdba6;
case 0x6fdba8:goto L6fdba8;
case 0x6fdbab:c.instructions+=3;goto B6fdbab;
case 0x6fdbae:c.instructions+=2;goto B6fdbae;
case 0x6fdbb0:c.instructions+=1;goto B6fdbb0;
case 0x6fdbb3:goto L6fdbb3;
case 0x6fdbb5:c.instructions+=1;goto B6fdbb5;
case 0x6fdbb7:goto L6fdbb7;
case 0x6fdbba:c.instructions+=2;goto B6fdbba;
case 0x6fdbbb:c.instructions+=1;goto B6fdbbb;
case 0x6fdbbd:goto L6fdbbd;
case 0x6fdbbe:c.instructions+=1;goto B6fdbbe;
case 0x6fdbc0:goto L6fdbc0;
case 0x6fdbc1:c.instructions+=1;goto B6fdbc1;
case 0x6fdbc3:goto L6fdbc3;
case 0x6fdbc4:c.instructions+=1;goto B6fdbc4;
case 0x6fdbc6:goto L6fdbc6;
case 0x6fdbc7:c.instructions+=1;goto B6fdbc7;
case 0x6fdbc9:goto L6fdbc9;
case 0x6fdbca:c.instructions+=1;goto B6fdbca;
case 0x6fdbcc:goto L6fdbcc;
case 0x6fdbcd:c.instructions+=1;goto B6fdbcd;
case 0x6fdbcf:goto L6fdbcf;
case 0x6fdbd0:c.instructions+=2;goto B6fdbd0;
case 0x6fdbd2:c.instructions+=1;goto B6fdbd2;
case 0x6fdbd7:goto L6fdbd7;
case 0x6fdbd9:goto L6fdbd9;
case 0x6fdbda:c.instructions+=2;goto B6fdbda;
case 0x6fdbdc:c.instructions+=1;goto B6fdbdc;
case 0x6fdbe1:goto L6fdbe1;
case 0x6fdbe3:goto L6fdbe3;
case 0x6fdbe4:c.instructions+=2;goto B6fdbe4;
case 0x6fdbe6:c.instructions+=1;goto B6fdbe6;
case 0x6fdbeb:goto L6fdbeb;
case 0x6fdbed:goto L6fdbed;
case 0x6fdbee:c.instructions+=2;goto B6fdbee;
case 0x6fdbf0:c.instructions+=1;goto B6fdbf0;
case 0x6fdbf5:goto L6fdbf5;
case 0x6fdbf7:goto L6fdbf7;
case 0x6fdbf8:c.instructions+=2;goto B6fdbf8;
case 0x6fdbfa:c.instructions+=1;goto B6fdbfa;
case 0x6fdbff:goto L6fdbff;
case 0x6fdc01:goto L6fdc01;
case 0x6fdc02:c.instructions+=2;goto B6fdc02;
case 0x6fdc04:c.instructions+=1;goto B6fdc04;
case 0x6fdc09:goto L6fdc09;
case 0x6fdc0b:goto L6fdc0b;
case 0x6fdc0c:c.instructions+=2;goto B6fdc0c;
case 0x6fdc0e:c.instructions+=1;goto B6fdc0e;
case 0x6fdc13:goto L6fdc13;
case 0x6fdc16:c.instructions+=3;goto B6fdc16;
case 0x6fdc18:c.instructions+=2;goto B6fdc18;
case 0x6fdc1a:c.instructions+=1;goto B6fdc1a;
case 0x6fdc1d:goto L6fdc1d;
case 0x6fdc1f:goto L6fdc1f;
case 0x6fdc20:c.instructions+=2;goto B6fdc20;
case 0x6fdc21:c.instructions+=1;goto B6fdc21;
case 0x6fdc24:goto L6fdc24;
case 0x6fdc25:c.instructions+=4;goto B6fdc25;
case 0x6fdc27:c.instructions+=3;goto B6fdc27;
case 0x6fdc2b:c.instructions+=2;goto B6fdc2b;
case 0x6fdc2e:c.instructions+=1;goto B6fdc2e;
case 0x6fdc30:goto L6fdc30;
case 0x6fdc33:c.instructions+=1;goto B6fdc33;
case 0x6fdc35:goto L6fdc35;
case 0x6fdc37:c.instructions+=1;goto B6fdc37;
case 0x6fdc3a:goto L6fdc3a;
case 0x6fdc3b:c.instructions+=1;goto B6fdc3b;
case 0x6fdc3e:goto L6fdc3e;
case 0x6fdc3f:c.instructions+=11;goto B6fdc3f;
case 0x6fdc41:c.instructions+=10;goto B6fdc41;
case 0x6fdc44:c.instructions+=9;goto B6fdc44;
case 0x6fdc45:c.instructions+=8;goto B6fdc45;
case 0x6fdc48:c.instructions+=7;goto B6fdc48;
case 0x6fdc49:c.instructions+=6;goto B6fdc49;
case 0x6fdc4b:c.instructions+=5;goto B6fdc4b;
case 0x6fdc4d:c.instructions+=4;goto B6fdc4d;
case 0x6fdc50:c.instructions+=3;goto B6fdc50;
case 0x6fdc53:c.instructions+=2;goto B6fdc53;
case 0x6fdc55:c.instructions+=1;goto B6fdc55;
case 0x6fdc57:goto L6fdc57;
case 0x6fdc5a:c.instructions+=1;goto B6fdc5a;
case 0x6fdc5b:goto L6fdc5b;
case 0x6fdc5d:c.instructions+=5;goto B6fdc5d;
case 0x6fdc61:c.instructions+=4;goto B6fdc61;
case 0x6fdc62:c.instructions+=3;goto B6fdc62;
case 0x6fdc65:c.instructions+=2;goto B6fdc65;
case 0x6fdc67:c.instructions+=1;goto B6fdc67;
case 0x6fdc69:goto L6fdc69;
case 0x6fdc6a:goto L6fdc6a;
case 0x6fdc6d:c.instructions+=2;goto B6fdc6d;
case 0x6fdc6f:c.instructions+=1;goto B6fdc6f;
case 0x6fdc72:goto L6fdc72;
case 0x6fdc75:c.instructions+=6;goto B6fdc75;
case 0x6fdc77:c.instructions+=5;goto B6fdc77;
case 0x6fdc7a:c.instructions+=4;goto B6fdc7a;
case 0x6fdc7b:c.instructions+=3;goto B6fdc7b;
case 0x6fdc7e:c.instructions+=2;goto B6fdc7e;
case 0x6fdc81:c.instructions+=1;goto B6fdc81;
case 0x6fdc83:goto L6fdc83;
case 0x6fdc84:c.instructions+=3;goto B6fdc84;
case 0x6fdc85:c.instructions+=2;goto B6fdc85;
case 0x6fdc86:c.instructions+=1;goto B6fdc86;
case 0x6fdc89:goto L6fdc89;
case 0x6fdc8a:c.instructions+=6;goto B6fdc8a;
case 0x6fdc8c:c.instructions+=5;goto B6fdc8c;
case 0x6fdc8f:c.instructions+=4;goto B6fdc8f;
case 0x6fdc92:c.instructions+=3;goto B6fdc92;
case 0x6fdc94:c.instructions+=2;goto B6fdc94;
case 0x6fdc95:c.instructions+=1;goto B6fdc95;
case 0x6fdc97:goto L6fdc97;
case 0x6fdc98:c.instructions+=1;goto B6fdc98;
case 0x6fdc9a:goto L6fdc9a;
case 0x6fdc9b:c.instructions+=1;goto B6fdc9b;
case 0x6fdc9d:goto L6fdc9d;
case 0x6fdc9f:c.instructions+=2;goto B6fdc9f;
case 0x6fdca0:c.instructions+=1;goto B6fdca0;
case 0x6fdca2:goto L6fdca2;
case 0x6fdca4:c.instructions+=2;goto B6fdca4;
case 0x6fdca5:c.instructions+=1;goto B6fdca5;
case 0x6fdca7:goto L6fdca7;
case 0x6fdca9:goto L6fdca9;
case 0x6fdcaa:c.instructions+=1;goto B6fdcaa;
case 0x6fdcad:goto L6fdcad;
case 0x6fdcae:c.instructions+=5;goto B6fdcae;
case 0x6fdcb0:c.instructions+=4;goto B6fdcb0;
case 0x6fdcb3:c.instructions+=3;goto B6fdcb3;
case 0x6fdcb6:c.instructions+=2;goto B6fdcb6;
case 0x6fdcb9:c.instructions+=1;goto B6fdcb9;
case 0x6fdcbb:goto L6fdcbb;
case 0x6fdcc2:c.instructions+=1;goto B6fdcc2;
case 0x6fdcc9:goto L6fdcc9;
case 0x6fdccb:c.instructions+=1;goto B6fdccb;
case 0x6fdccd:goto L6fdccd;
case 0x6fdccf:c.instructions+=1;goto B6fdccf;
case 0x6fdcd1:goto L6fdcd1;
case 0x6fdcd3:c.instructions+=2;goto B6fdcd3;
case 0x6fdcd4:c.instructions+=1;goto B6fdcd4;
case 0x6fdcd6:goto L6fdcd6;
case 0x6fdcd8:c.instructions+=1;goto B6fdcd8;
case 0x6fdcda:goto L6fdcda;
case 0x6fdcdc:c.instructions+=1;goto B6fdcdc;
case 0x6fdcde:goto L6fdcde;
case 0x6fdce0:c.instructions+=1;goto B6fdce0;
case 0x6fdce2:goto L6fdce2;
case 0x6fdce4:c.instructions+=1;goto B6fdce4;
case 0x6fdce6:goto L6fdce6;
case 0x6fdce8:c.instructions+=1;goto B6fdce8;
case 0x6fdcea:goto L6fdcea;
case 0x6fdcec:c.instructions+=1;goto B6fdcec;
case 0x6fdcee:goto L6fdcee;
case 0x6fdcf0:c.instructions+=1;goto B6fdcf0;
case 0x6fdcf2:goto L6fdcf2;
case 0x6fdcf4:c.instructions+=1;goto B6fdcf4;
case 0x6fdcf6:goto L6fdcf6;
case 0x6fdcf8:c.instructions+=1;goto B6fdcf8;
case 0x6fdcfa:goto L6fdcfa;
case 0x6fdcfc:c.instructions+=1;goto B6fdcfc;
case 0x6fdcfe:goto L6fdcfe;
case 0x6fdd00:goto L6fdd00;
case 0x6fdd01:goto L6fdd01;
case 0x6fdd02:c.instructions+=1;goto B6fdd02;
case 0x6fdd55:goto L6fdd55;
case 0x6fdd56:c.instructions+=5;goto B6fdd56;
case 0x6fdd58:c.instructions+=4;goto B6fdd58;
case 0x6fdd5b:c.instructions+=3;goto B6fdd5b;
case 0x6fdd60:c.instructions+=2;goto B6fdd60;
case 0x6fdd61:c.instructions+=1;goto B6fdd61;
case 0x6fdd62:goto L6fdd62;
case 0x6fdd63:c.instructions+=8;goto B6fdd63;
case 0x6fdd65:c.instructions+=7;goto B6fdd65;
case 0x6fdd68:c.instructions+=6;goto B6fdd68;
case 0x6fdd69:c.instructions+=5;goto B6fdd69;
case 0x6fdd6c:c.instructions+=4;goto B6fdd6c;
case 0x6fdd6e:c.instructions+=3;goto B6fdd6e;
case 0x6fdd6f:c.instructions+=2;goto B6fdd6f;
case 0x6fdd70:c.instructions+=1;goto B6fdd70;
case 0x6fdd72:goto L6fdd72;
case 0x6fdd74:c.instructions+=1;goto B6fdd74;
case 0x6fdd77:goto L6fdd77;
case 0x6fdd79:c.instructions+=3;goto B6fdd79;
case 0x6fdd7a:c.instructions+=2;goto B6fdd7a;
case 0x6fdd7c:c.instructions+=1;goto B6fdd7c;
case 0x6fdd7e:goto L6fdd7e;
case 0x6fdd80:c.instructions+=2;goto B6fdd80;
case 0x6fdd82:c.instructions+=1;goto B6fdd82;
case 0x6fdd84:goto L6fdd84;
case 0x6fdd86:goto L6fdd86;
case 0x6fdd88:c.instructions+=2;goto B6fdd88;
case 0x6fdd8a:c.instructions+=1;goto B6fdd8a;
case 0x6fdd8c:goto L6fdd8c;
case 0x6fdd8e:c.instructions+=2;goto B6fdd8e;
case 0x6fdd91:c.instructions+=1;goto B6fdd91;
case 0x6fdd92:goto L6fdd92;
case 0x6fdd96:c.instructions+=2;goto B6fdd96;
case 0x6fdd99:c.instructions+=1;goto B6fdd99;
case 0x6fdd9b:goto L6fdd9b;
case 0x6fdd9c:c.instructions+=1;goto B6fdd9c;
case 0x6fdd9e:goto L6fdd9e;
case 0x6fdda1:c.instructions+=1;goto B6fdda1;
case 0x6fdda3:goto L6fdda3;
case 0x6fdda6:c.instructions+=1;goto B6fdda6;
case 0x6fdda8:goto L6fdda8;
case 0x6fddaa:c.instructions+=2;goto B6fddaa;
case 0x6fddac:c.instructions+=1;goto B6fddac;
case 0x6fddae:goto L6fddae;
case 0x6fddb0:c.instructions+=1;goto B6fddb0;
case 0x6fddb3:goto L6fddb3;
case 0x6fddb7:goto L6fddb7;
case 0x6fddb8:c.instructions+=2;goto B6fddb8;
case 0x6fddba:c.instructions+=1;goto B6fddba;
case 0x6fddbc:goto L6fddbc;
case 0x6fddbf:c.instructions+=1;goto B6fddbf;
case 0x6fddc5:goto L6fddc5;
case 0x6fddc7:c.instructions+=2;goto B6fddc7;
case 0x6fddc8:c.instructions+=1;goto B6fddc8;
case 0x6fddce:goto L6fddce;
case 0x6fddd4:c.instructions+=5;goto B6fddd4;
case 0x6fddd7:c.instructions+=4;goto B6fddd7;
case 0x6fddda:c.instructions+=3;goto B6fddda;
case 0x6fdddd:c.instructions+=2;goto B6fdddd;
case 0x6fdde3:c.instructions+=1;goto B6fdde3;
case 0x6fdde5:goto L6fdde5;
case 0x6fdde7:c.instructions+=1;goto B6fdde7;
case 0x6fdded:goto L6fdded;
case 0x6fddee:c.instructions+=1;goto B6fddee;
case 0x6fddf3:goto L6fddf3;
case 0x6fddf4:c.instructions+=4;goto B6fddf4;
case 0x6fddf5:c.instructions+=3;goto B6fddf5;
case 0x6fddf8:c.instructions+=2;goto B6fddf8;
case 0x6fddfb:c.instructions+=1;goto B6fddfb;
case 0x6fddfd:goto L6fddfd;
case 0x6fde00:c.instructions+=1;goto B6fde00;
case 0x6fde02:goto L6fde02;
case 0x6fde06:c.instructions+=1;goto B6fde06;
case 0x6fde08:goto L6fde08;
case 0x6fde0b:c.instructions+=5;goto B6fde0b;
case 0x6fde0c:c.instructions+=4;goto B6fde0c;
case 0x6fde0d:c.instructions+=3;goto B6fde0d;
case 0x6fde0e:c.instructions+=2;goto B6fde0e;
case 0x6fde0f:c.instructions+=1;goto B6fde0f;
case 0x6fde11:goto L6fde11;
case 0x6fde14:c.instructions+=2;goto B6fde14;
case 0x6fde17:c.instructions+=1;goto B6fde17;
case 0x6fde19:goto L6fde19;
case 0x6fde1b:goto L6fde1b;
case 0x6fde1f:c.instructions+=2;goto B6fde1f;
case 0x6fde21:c.instructions+=1;goto B6fde21;
case 0x6fde23:goto L6fde23;
case 0x6fde25:c.instructions+=3;goto B6fde25;
case 0x6fde2a:c.instructions+=2;goto B6fde2a;
case 0x6fde2b:c.instructions+=1;goto B6fde2b;
case 0x6fde2c:goto L6fde2c;
case 0x6fde2e:c.instructions+=1;goto B6fde2e;
case 0x6fde30:goto L6fde30;
case 0x6fde32:c.instructions+=6;goto B6fde32;
case 0x6fde33:c.instructions+=5;goto B6fde33;
case 0x6fde34:c.instructions+=4;goto B6fde34;
case 0x6fde36:c.instructions+=3;goto B6fde36;
case 0x6fde37:c.instructions+=2;goto B6fde37;
case 0x6fde39:c.instructions+=1;goto B6fde39;
case 0x6fde3b:goto L6fde3b;
case 0x6fde3f:goto L6fde3f;
case 0x6fde41:c.instructions+=10;goto B6fde41;
case 0x6fde43:c.instructions+=9;goto B6fde43;
case 0x6fde44:c.instructions+=8;goto B6fde44;
case 0x6fde45:c.instructions+=7;goto B6fde45;
case 0x6fde47:c.instructions+=6;goto B6fde47;
case 0x6fde48:c.instructions+=5;goto B6fde48;
case 0x6fde4b:c.instructions+=4;goto B6fde4b;
case 0x6fde4d:c.instructions+=3;goto B6fde4d;
case 0x6fde51:c.instructions+=2;goto B6fde51;
case 0x6fde53:c.instructions+=1;goto B6fde53;
case 0x6fde55:goto L6fde55;
case 0x6fde58:c.instructions+=1;goto B6fde58;
case 0x6fde5b:goto L6fde5b;
case 0x6fde5d:c.instructions+=1;goto B6fde5d;
case 0x6fde5f:goto L6fde5f;
case 0x6fde63:c.instructions+=6;goto B6fde63;
case 0x6fde66:c.instructions+=5;goto B6fde66;
case 0x6fde67:c.instructions+=4;goto B6fde67;
case 0x6fde68:c.instructions+=3;goto B6fde68;
case 0x6fde69:c.instructions+=2;goto B6fde69;
case 0x6fde6b:c.instructions+=1;goto B6fde6b;
case 0x6fde6d:goto L6fde6d;
case 0x6fde70:goto L6fde70;
case 0x6fde73:c.instructions+=2;goto B6fde73;
case 0x6fde75:c.instructions+=1;goto B6fde75;
case 0x6fde77:goto L6fde77;
case 0x6fde7a:c.instructions+=2;goto B6fde7a;
case 0x6fde7e:c.instructions+=1;goto B6fde7e;
case 0x6fde80:goto L6fde80;
case 0x6fde82:c.instructions+=1;goto B6fde82;
case 0x6fde84:goto L6fde84;
case 0x6fde88:c.instructions+=1;goto B6fde88;
case 0x6fde8a:goto L6fde8a;
case 0x6fde8d:c.instructions+=2;goto B6fde8d;
case 0x6fde8e:c.instructions+=1;goto B6fde8e;
case 0x6fde8f:goto L6fde8f;
case 0x6fde92:c.instructions+=6;goto B6fde92;
case 0x6fde95:c.instructions+=5;goto B6fde95;
case 0x6fde96:c.instructions+=4;goto B6fde96;
case 0x6fde97:c.instructions+=3;goto B6fde97;
case 0x6fde9a:c.instructions+=2;goto B6fde9a;
case 0x6fde9d:c.instructions+=1;goto B6fde9d;
case 0x6fdea3:goto L6fdea3;
case 0x6fdea6:c.instructions+=8;goto B6fdea6;
case 0x6fdeab:c.instructions+=7;goto B6fdeab;
case 0x6fdeac:c.instructions+=6;goto B6fdeac;
case 0x6fdead:c.instructions+=5;goto B6fdead;
case 0x6fdeaf:c.instructions+=4;goto B6fdeaf;
case 0x6fdeb0:c.instructions+=3;goto B6fdeb0;
case 0x6fdeb2:c.instructions+=2;goto B6fdeb2;
case 0x6fdeb8:c.instructions+=1;goto B6fdeb8;
case 0x6fdebe:goto L6fdebe;
case 0x6fdebf:c.instructions+=4;goto B6fdebf;
case 0x6fdec0:c.instructions+=3;goto B6fdec0;
case 0x6fdec1:c.instructions+=2;goto B6fdec1;
case 0x6fdec2:c.instructions+=1;goto B6fdec2;
case 0x6fdec3:goto L6fdec3;
case 0x6fdec4:c.instructions+=6;goto B6fdec4;
case 0x6fdec6:c.instructions+=5;goto B6fdec6;
case 0x6fdec9:c.instructions+=4;goto B6fdec9;
case 0x6fdeca:c.instructions+=3;goto B6fdeca;
case 0x6fdecd:c.instructions+=2;goto B6fdecd;
case 0x6fded0:c.instructions+=1;goto B6fded0;
case 0x6fded2:goto L6fded2;
case 0x6fded3:c.instructions+=4;goto B6fded3;
case 0x6fded4:c.instructions+=3;goto B6fded4;
case 0x6fded6:c.instructions+=2;goto B6fded6;
case 0x6fded7:c.instructions+=1;goto B6fded7;
case 0x6fded9:goto L6fded9;
case 0x6fdedb:c.instructions+=2;goto B6fdedb;
case 0x6fdede:c.instructions+=1;goto B6fdede;
case 0x6fdee0:goto L6fdee0;
case 0x6fdee4:c.instructions+=1;goto B6fdee4;
case 0x6fdee6:goto L6fdee6;
case 0x6fdee9:goto L6fdee9;
case 0x6fdeeb:c.instructions+=2;goto B6fdeeb;
case 0x6fdeed:c.instructions+=1;goto B6fdeed;
case 0x6fdeef:goto L6fdeef;
case 0x6fdef1:c.instructions+=1;goto B6fdef1;
case 0x6fdef3:goto L6fdef3;
case 0x6fdef5:c.instructions+=1;goto B6fdef5;
case 0x6fdef7:goto L6fdef7;
case 0x6fdefa:c.instructions+=2;goto B6fdefa;
case 0x6fdefd:c.instructions+=1;goto B6fdefd;
case 0x6fdeff:goto L6fdeff;
case 0x6fdf01:c.instructions+=1;goto B6fdf01;
case 0x6fdf03:goto L6fdf03;
case 0x6fdf05:c.instructions+=1;goto B6fdf05;
case 0x6fdf07:goto L6fdf07;
case 0x6fdf0a:c.instructions+=1;goto B6fdf0a;
case 0x6fdf0d:goto L6fdf0d;
case 0x6fdf10:c.instructions+=5;goto B6fdf10;
case 0x6fdf12:c.instructions+=4;goto B6fdf12;
case 0x6fdf13:c.instructions+=3;goto B6fdf13;
case 0x6fdf16:c.instructions+=2;goto B6fdf16;
case 0x6fdf19:c.instructions+=1;goto B6fdf19;
case 0x6fdf1b:goto L6fdf1b;
case 0x6fdf1e:c.instructions+=5;goto B6fdf1e;
case 0x6fdf1f:c.instructions+=4;goto B6fdf1f;
case 0x6fdf20:c.instructions+=3;goto B6fdf20;
case 0x6fdf23:c.instructions+=2;goto B6fdf23;
case 0x6fdf26:c.instructions+=1;goto B6fdf26;
case 0x6fdf28:goto L6fdf28;
case 0x6fdf2c:c.instructions+=5;goto B6fdf2c;
case 0x6fdf2f:c.instructions+=4;goto B6fdf2f;
case 0x6fdf30:c.instructions+=3;goto B6fdf30;
case 0x6fdf31:c.instructions+=2;goto B6fdf31;
case 0x6fdf32:c.instructions+=1;goto B6fdf32;
case 0x6fdf33:goto L6fdf33;
case 0x6fdf36:c.instructions+=1;goto B6fdf36;
case 0x6fdf38:goto L6fdf38;
case 0x6fdf39:c.instructions+=1;goto B6fdf39;
case 0x6fdf3a:goto L6fdf3a;
case 0x6fdf3e:c.instructions+=3;goto B6fdf3e;
case 0x6fdf3f:c.instructions+=2;goto B6fdf3f;
case 0x6fdf40:c.instructions+=1;goto B6fdf40;
case 0x6fdf41:goto L6fdf41;
case 0x6fdf42:c.instructions+=5;goto B6fdf42;
case 0x6fdf44:c.instructions+=4;goto B6fdf44;
case 0x6fdf47:c.instructions+=3;goto B6fdf47;
case 0x6fdf49:c.instructions+=2;goto B6fdf49;
case 0x6fdf4b:c.instructions+=1;goto B6fdf4b;
case 0x6fdf4d:goto L6fdf4d;
case 0x6fdf4f:goto L6fdf4f;
case 0x6fdf50:c.instructions+=2;goto B6fdf50;
case 0x6fdf51:c.instructions+=1;goto B6fdf51;
case 0x6fdf52:goto L6fdf52;
case 0x6fdf56:c.instructions+=1;goto B6fdf56;
case 0x6fdf58:goto L6fdf58;
case 0x6fdf59:c.instructions+=1;goto B6fdf59;
case 0x6fdf5a:goto L6fdf5a;
case 0x6fdf5b:c.instructions+=6;goto B6fdf5b;
case 0x6fdf5d:c.instructions+=5;goto B6fdf5d;
case 0x6fdf61:c.instructions+=4;goto B6fdf61;
case 0x6fdf62:c.instructions+=3;goto B6fdf62;
case 0x6fdf64:c.instructions+=2;goto B6fdf64;
case 0x6fdf6a:c.instructions+=1;goto B6fdf6a;
case 0x6fdf6c:goto L6fdf6c;
case 0x6fdf6d:c.instructions+=1;goto B6fdf6d;
case 0x6fdf72:goto L6fdf72;
case 0x6fdf73:goto L6fdf73;
case 0x6fdf75:c.instructions+=3;goto B6fdf75;
case 0x6fdf76:c.instructions+=2;goto B6fdf76;
case 0x6fdf77:c.instructions+=1;goto B6fdf77;
case 0x6fdfb9:goto L6fdfb9;
case 0x6fdfba:c.instructions+=3;goto B6fdfba;
case 0x6fdfbc:c.instructions+=2;goto B6fdfbc;
case 0x6fdfbe:c.instructions+=1;goto B6fdfbe;
case 0x6fdfc1:goto L6fdfc1;
case 0x6fdfc3:c.instructions+=1;goto B6fdfc3;
case 0x6fdfc6:goto L6fdfc6;
case 0x6fdfc7:c.instructions+=3;goto B6fdfc7;
case 0x6fdfc8:c.instructions+=2;goto B6fdfc8;
case 0x6fdfc9:c.instructions+=1;goto B6fdfc9;
case 0x6fdfca:goto L6fdfca;
case 0x6fdfcb:c.instructions+=5;goto B6fdfcb;
case 0x6fdfcd:c.instructions+=4;goto B6fdfcd;
case 0x6fdfd0:c.instructions+=3;goto B6fdfd0;
case 0x6fdfd6:c.instructions+=2;goto B6fdfd6;
case 0x6fdfd8:c.instructions+=1;goto B6fdfd8;
case 0x6fdfdb:goto L6fdfdb;
case 0x6fdfde:c.instructions+=2;goto B6fdfde;
case 0x6fdfe0:c.instructions+=1;goto B6fdfe0;
case 0x6fdfe3:goto L6fdfe3;
case 0x6fdfe6:c.instructions+=2;goto B6fdfe6;
case 0x6fdfe8:c.instructions+=1;goto B6fdfe8;
case 0x6fdfeb:goto L6fdfeb;
case 0x6fdfee:c.instructions+=2;goto B6fdfee;
case 0x6fdff0:c.instructions+=1;goto B6fdff0;
case 0x6fdff3:goto L6fdff3;
case 0x6fdff9:c.instructions+=2;goto B6fdff9;
case 0x6fdffa:c.instructions+=1;goto B6fdffa;
case 0x6fdffb:goto L6fdffb;
case 0x6fdffe:c.instructions+=1;goto B6fdffe;
default:missing_instruction(c.pc);}
B6fd002:L6fd002:{c.instructions+=1;NFSU2_TR(0x6fd002);
{goto L6fd22b;}
}
B6fd007:L6fd007:{c.instructions+=3;NFSU2_TR(0x6fd007);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fd00d:{NFSU2_TR(0x6fd00d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fd013:{NFSU2_TR(0x6fd013);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd016ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fd016:L6fd016:{c.instructions+=1;NFSU2_TR(0x6fd016);
{goto L6fd22b;}
}
B6fd01b:L6fd01b:{c.instructions+=2;NFSU2_TR(0x6fd01b);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6fd01f:{NFSU2_TR(0x6fd01f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fd22b;}}
}
B6fd025:L6fd025:{c.instructions+=2;NFSU2_TR(0x6fd025);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
w4(U+4,u32(0xeull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fd02c:{NFSU2_TR(0x6fd02c);
{goto L6fd22b;}
}
B6fd031:L6fd031:{c.instructions+=2;NFSU2_TR(0x6fd031);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fd034:{NFSU2_TR(0x6fd034);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd039ull));
{goto L6fdb33;}
}
B6fd039:L6fd039:{c.instructions+=3;NFSU2_TR(0x6fd039);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fd03f:{NFSU2_TR(0x6fd03f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fd041:{NFSU2_TR(0x6fd041);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fd051;}}
}
B6fd043:L6fd043:{c.instructions+=4;NFSU2_TR(0x6fd043);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd045:{NFSU2_TR(0x6fd045);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd047:{NFSU2_TR(0x6fd047);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fd04a:{NFSU2_TR(0x6fd04a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd04full));
{goto L6fdabc;}
}
B6fd04f:L6fd04f:{c.instructions+=1;NFSU2_TR(0x6fd04f);
{goto L6fd068;}
}
B6fd051:L6fd051:{c.instructions+=2;NFSU2_TR(0x6fd051);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6fd054:{NFSU2_TR(0x6fd054);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fd068;}}
}
B6fd056:L6fd056:{c.instructions+=5;NFSU2_TR(0x6fd056);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd058:{NFSU2_TR(0x6fd058);
u8 U[4];
__builtin_memmove((U+0),gp(0x8ada40),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd05e:{NFSU2_TR(0x6fd05e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fd061:{NFSU2_TR(0x6fd061);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd063:{NFSU2_TR(0x6fd063);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd068ull));
{goto L6fdaf4;}
}
B6fd068:L6fd068:{c.instructions+=5;NFSU2_TR(0x6fd068);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6fd06c:{NFSU2_TR(0x6fd06c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fd06f:{NFSU2_TR(0x6fd06f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd070:{NFSU2_TR(0x6fd070);
__builtin_memmove((R+4),(R+12),4);
}
B6fd072:{NFSU2_TR(0x6fd072);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd077ull));
TAIL_STATIC(0x6fcc4bu,6fc);
}
B6fd077:L6fd077:{c.instructions+=2;NFSU2_TR(0x6fd077);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
w4(U+4,u32(0xdull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fd07e:{NFSU2_TR(0x6fd07e);
{goto L6fd22b;}
}
B6fd083:L6fd083:{c.instructions+=3;NFSU2_TR(0x6fd083);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fd085:{NFSU2_TR(0x6fd085);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6fd08b:{NFSU2_TR(0x6fd08b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fd09b;}}
}
B6fd08d:L6fd08d:{c.instructions+=3;NFSU2_TR(0x6fd08d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2dcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fd093:{NFSU2_TR(0x6fd093);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2e0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fd099:{NFSU2_TR(0x6fd099);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fd025u);}goto L6fd025;}
}
B6fd09b:L6fd09b:{c.instructions+=4;NFSU2_TR(0x6fd09b);
u8 U[4];
w4(U+0,u32(0x41ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd09d:{NFSU2_TR(0x6fd09d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fd09e:{NFSU2_TR(0x6fd09e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fd0a0:{NFSU2_TR(0x6fd0a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe90ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fd0a6:L6fd0a6:{c.instructions+=1;NFSU2_TR(0x6fd0a6);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6fd0a8;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fd0a6u);}goto L6fd0a6;}
}
B6fd0a8:L6fd0a8:{c.instructions+=8;NFSU2_TR(0x6fd0a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9cull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fd0ae:{NFSU2_TR(0x6fd0ae);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd0af:{NFSU2_TR(0x6fd0af);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x174ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fd0b5:{NFSU2_TR(0x6fd0b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd0b6:{NFSU2_TR(0x6fd0b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe90ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fd0bc:{NFSU2_TR(0x6fd0bc);
u8 U[4];
w4(U+0,u32(0x7c2fc4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd0c1:{NFSU2_TR(0x6fd0c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd0c2:{NFSU2_TR(0x6fd0c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd0c7ull));
TAIL_STATIC(0x75c784u,75c);
}
B6fd0c7:L6fd0c7:{c.instructions+=3;NFSU2_TR(0x6fd0c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe90ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fd0cd:{NFSU2_TR(0x6fd0cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd0ce:{NFSU2_TR(0x6fd0ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd0d3ull));
TAIL_STATIC(0x6fc496u,6fc);
}
B6fd0d3:L6fd0d3:{c.instructions+=5;NFSU2_TR(0x6fd0d3);
u8 U[4];
w4(U+0,u32(0x41ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd0d5:{NFSU2_TR(0x6fd0d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fd0d6:{NFSU2_TR(0x6fd0d6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fd0d8:{NFSU2_TR(0x6fd0d8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd0d9:{NFSU2_TR(0x6fd0d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe90ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fd0df:L6fd0df:{c.instructions+=1;NFSU2_TR(0x6fd0df);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6fd0e1;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fd0dfu);}goto L6fd0df;}
}
B6fd0e1:L6fd0e1:{c.instructions+=7;NFSU2_TR(0x6fd0e1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd0e2:{NFSU2_TR(0x6fd0e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x174ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fd0e8:{NFSU2_TR(0x6fd0e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd0e9:{NFSU2_TR(0x6fd0e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe90ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fd0ef:{NFSU2_TR(0x6fd0ef);
u8 U[4];
w4(U+0,u32(0x7c32e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd0f4:{NFSU2_TR(0x6fd0f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd0f5:{NFSU2_TR(0x6fd0f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd0faull));
TAIL_STATIC(0x75c784u,75c);
}
B6fd0fa:L6fd0fa:{c.instructions+=6;NFSU2_TR(0x6fd0fa);
u8 U[4];
w4(U+0,u32(0x180ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd0ff:{NFSU2_TR(0x6fd0ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe90ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fd105:{NFSU2_TR(0x6fd105);
u8 U[4];
w4(U+0,u32(0x8101ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd10a:{NFSU2_TR(0x6fd10a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd10b:{NFSU2_TR(0x6fd10b);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6fd10f:{NFSU2_TR(0x6fd10f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd114ull));
TAIL_STATIC(0x7605c9u,760);
}
B6fd114:L6fd114:{c.instructions+=4;NFSU2_TR(0x6fd114);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
}
B6fd117:{NFSU2_TR(0x6fd117);
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
B6fd11a:{NFSU2_TR(0x6fd11a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fd120:{NFSU2_TR(0x6fd120);
if(r1(R+518)){{goto L6fd1fa;}}
}
B6fd126:L6fd126:{c.instructions+=5;NFSU2_TR(0x6fd126);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd128:{NFSU2_TR(0x6fd128);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fd12e:{NFSU2_TR(0x6fd12e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd12f:{NFSU2_TR(0x6fd12f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd130:{NFSU2_TR(0x6fd130);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd135ull));
TAIL_STATIC(0x760237u,760);
}
B6fd135:L6fd135:{c.instructions+=5;NFSU2_TR(0x6fd135);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6fd137:{NFSU2_TR(0x6fd137);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6fd13a:{NFSU2_TR(0x6fd13a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6fd13b:{NFSU2_TR(0x6fd13b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1cull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6fd13e:{NFSU2_TR(0x6fd13e);
if(r1(R+518)){{goto L6fd150;}}
}
B6fd140:L6fd140:{c.instructions+=2;NFSU2_TR(0x6fd140);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2dcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fd146:{NFSU2_TR(0x6fd146);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2e0ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fd150:L6fd150:{c.instructions+=3;NFSU2_TR(0x6fd150);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fd156:{NFSU2_TR(0x6fd156);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fd158:{NFSU2_TR(0x6fd158);
if(r1(R+518)){{goto L6fd192;}}
}
B6fd15a:L6fd15a:{c.instructions+=3;NFSU2_TR(0x6fd15a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fd160:{NFSU2_TR(0x6fd160);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fd162:{NFSU2_TR(0x6fd162);
if(r1(R+518)){{goto L6fd192;}}
}
B6fd164:L6fd164:{c.instructions+=3;NFSU2_TR(0x6fd164);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2dcull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fd16a:{NFSU2_TR(0x6fd16a);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6fd16c:{NFSU2_TR(0x6fd16c);
if(r1(R+518)){{goto L6fd192;}}
}
B6fd16e:L6fd16e:{c.instructions+=4;NFSU2_TR(0x6fd16e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd16f:{NFSU2_TR(0x6fd16f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd170:{NFSU2_TR(0x6fd170);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fd176:{NFSU2_TR(0x6fd176);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd17bull));
TAIL_STATIC(0x760237u,760);
}
B6fd17b:L6fd17b:{c.instructions+=3;NFSU2_TR(0x6fd17b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6fd17e:{NFSU2_TR(0x6fd17e);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6fd184:{NFSU2_TR(0x6fd184);
if(r1(R+518)){{goto L6fd192;}}
}
B6fd186:L6fd186:{c.instructions+=2;NFSU2_TR(0x6fd186);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6fd188:{NFSU2_TR(0x6fd188);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2e0ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fd192:L6fd192:{c.instructions+=3;NFSU2_TR(0x6fd192);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fd198:{NFSU2_TR(0x6fd198);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fd19a:{NFSU2_TR(0x6fd19a);
if(r1(R+518)){{goto L6fd1d8;}}
}
B6fd19c:L6fd19c:{c.instructions+=2;NFSU2_TR(0x6fd19c);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6fd1a3:{NFSU2_TR(0x6fd1a3);
if(r1(R+518)){{goto L6fd1d8;}}
}
B6fd1a5:L6fd1a5:{c.instructions+=3;NFSU2_TR(0x6fd1a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2dcull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fd1ab:{NFSU2_TR(0x6fd1ab);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6fd1ad:{NFSU2_TR(0x6fd1ad);
if(r1(R+518)){{goto L6fd1d8;}}
}
B6fd1af:L6fd1af:{c.instructions+=4;NFSU2_TR(0x6fd1af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd1b0:{NFSU2_TR(0x6fd1b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fd1b6:{NFSU2_TR(0x6fd1b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fd1bc:{NFSU2_TR(0x6fd1bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd1c1ull));
TAIL_STATIC(0x760237u,760);
}
B6fd1c1:L6fd1c1:{c.instructions+=3;NFSU2_TR(0x6fd1c1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6fd1c4:{NFSU2_TR(0x6fd1c4);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6fd1ca:{NFSU2_TR(0x6fd1ca);
if(r1(R+518)){{goto L6fd1d8;}}
}
B6fd1cc:L6fd1cc:{c.instructions+=2;NFSU2_TR(0x6fd1cc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6fd1ce:{NFSU2_TR(0x6fd1ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2e0ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fd1d8:L6fd1d8:{c.instructions+=2;NFSU2_TR(0x6fd1d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fd1de:{NFSU2_TR(0x6fd1de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd1e3ull));
TAIL_STATIC(0x75fff7u,75f);
}
B6fd1e3:L6fd1e3:{c.instructions+=6;NFSU2_TR(0x6fd1e3);
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
B6fd1e5:{NFSU2_TR(0x6fd1e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fd1e6:{NFSU2_TR(0x6fd1e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fd1ec:{NFSU2_TR(0x6fd1ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2dcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fd1f2:{NFSU2_TR(0x6fd1f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2e0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fd1f8:{NFSU2_TR(0x6fd1f8);
{goto L6fd20e;}
}
B6fd1fa:L6fd1fa:{c.instructions+=2;NFSU2_TR(0x6fd1fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2dcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fd204:{NFSU2_TR(0x6fd204);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2e0ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fd20e:L6fd20e:{c.instructions+=3;NFSU2_TR(0x6fd20e);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6fd212:{NFSU2_TR(0x6fd212);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
w4(U+4,u32(0xcull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fd219:{NFSU2_TR(0x6fd219);
{goto L6fd22b;}
}
B6fd21b:L6fd21b:{c.instructions+=3;NFSU2_TR(0x6fd21b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fd21e:{NFSU2_TR(0x6fd21e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6fd21f:{NFSU2_TR(0x6fd21f);
if(r1(R+518)){{goto L6fd232;}}
}
B6fd221:L6fd221:{c.instructions+=2;NFSU2_TR(0x6fd221);
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
B6fd222:{NFSU2_TR(0x6fd222);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fd22b;}}
}
B6fd224:L6fd224:{c.instructions+=1;NFSU2_TR(0x6fd224);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
w4(U+4,u32(0xbull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fd22b:L6fd22b:{c.instructions+=5;NFSU2_TR(0x6fd22b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fd22c:{NFSU2_TR(0x6fd22c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fd22d:{NFSU2_TR(0x6fd22d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fd22e:{NFSU2_TR(0x6fd22e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6fd22f:{NFSU2_TR(0x6fd22f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fd232:L6fd232:{c.instructions+=3;NFSU2_TR(0x6fd232);
u8 U[14];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2e0ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
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
B6fd239:{NFSU2_TR(0x6fd239);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2dcull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fd243:{NFSU2_TR(0x6fd243);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fd025u);}goto L6fd025;}
}
B6fd248:L6fd248:{c.instructions+=4;NFSU2_TR(0x6fd248);
u8 U[4];
w4(U+0,u32(0x41ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd24a:{NFSU2_TR(0x6fd24a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fd24b:{NFSU2_TR(0x6fd24b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fd24d:{NFSU2_TR(0x6fd24d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe90ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fd253:L6fd253:{c.instructions+=1;NFSU2_TR(0x6fd253);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6fd255;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fd253u);}goto L6fd253;}
}
B6fd255:L6fd255:{c.instructions+=8;NFSU2_TR(0x6fd255);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fd25b:{NFSU2_TR(0x6fd25b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd25c:{NFSU2_TR(0x6fd25c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x174ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fd262:{NFSU2_TR(0x6fd262);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd263:{NFSU2_TR(0x6fd263);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe90ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fd269:{NFSU2_TR(0x6fd269);
u8 U[4];
w4(U+0,u32(0x7c2fc4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd26e:{NFSU2_TR(0x6fd26e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd26f:{NFSU2_TR(0x6fd26f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd274ull));
TAIL_STATIC(0x75c784u,75c);
}
B6fd274:L6fd274:{c.instructions+=5;NFSU2_TR(0x6fd274);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2a8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fd27a:{NFSU2_TR(0x6fd27a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6fd27d:{NFSU2_TR(0x6fd27d);
__builtin_memmove((R+4),(R+24),4);
}
B6fd27f:{NFSU2_TR(0x6fd27f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6fd283:{NFSU2_TR(0x6fd283);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd288ull));
TAIL_STATIC(0x6fc259u,6fc);
}
B6fd288:L6fd288:{c.instructions+=3;NFSU2_TR(0x6fd288);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe90ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fd28e:{NFSU2_TR(0x6fd28e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd28f:{NFSU2_TR(0x6fd28f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd294ull));
TAIL_STATIC(0x6fc327u,6fc);
}
B6fd294:L6fd294:{c.instructions+=1;NFSU2_TR(0x6fd294);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fd295:L6fd295:{c.instructions+=2;NFSU2_TR(0x6fd295);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6fd29c:{NFSU2_TR(0x6fd29c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fd2be;}}
}
B6fd29e:L6fd29e:{c.instructions+=2;NFSU2_TR(0x6fd29e);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6fd2a5:{NFSU2_TR(0x6fd2a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fd2ab;}}
}
B6fd2a7:L6fd2a7:{c.instructions+=1;NFSU2_TR(0x6fd2a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6fd2ab:L6fd2ab:{c.instructions+=3;NFSU2_TR(0x6fd2ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe90ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fd2b1:{NFSU2_TR(0x6fd2b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd2b2:{NFSU2_TR(0x6fd2b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd2b7ull));
TAIL_STATIC(0x6fc327u,6fc);
}
B6fd2b7:L6fd2b7:{c.instructions+=3;NFSU2_TR(0x6fd2b7);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6fd2bb:{NFSU2_TR(0x6fd2bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fd2bc:{NFSU2_TR(0x6fd2bc);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fd295u);}goto L6fd295;}}
}
B6fd2be:L6fd2be:{c.instructions+=2;NFSU2_TR(0x6fd2be);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x0ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B6fd2c2:{NFSU2_TR(0x6fd2c2);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fd224u);}goto L6fd224;}}
}
B6fd2c8:L6fd2c8:{c.instructions+=2;NFSU2_TR(0x6fd2c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fd2cb:{NFSU2_TR(0x6fd2cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd2d0ull));
{goto L6fdb33;}
}
B6fd2d0:L6fd2d0:{c.instructions+=4;NFSU2_TR(0x6fd2d0);
u8 U[4];
w4(U+0,u32(0x304ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd2d5:{NFSU2_TR(0x6fd2d5);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd2d7:{NFSU2_TR(0x6fd2d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fd2da:{NFSU2_TR(0x6fd2da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd2dfull));
{goto L6fdabc;}
}
B6fd2df:L6fd2df:{c.instructions+=4;NFSU2_TR(0x6fd2df);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fd2e2:{NFSU2_TR(0x6fd2e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd2e3:{NFSU2_TR(0x6fd2e3);
__builtin_memmove((R+4),(R+12),4);
}
B6fd2e5:{NFSU2_TR(0x6fd2e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd2eaull));
TAIL_STATIC(0x6fcc4bu,6fc);
}
B6fd2ea:L6fd2ea:{c.instructions+=2;NFSU2_TR(0x6fd2ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
w4(U+4,u32(0xaull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fd2f1:{NFSU2_TR(0x6fd2f1);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fd22bu);}goto L6fd22b;}
}
B6fd2f6:L6fd2f6:{c.instructions+=8;NFSU2_TR(0x6fd2f6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd2f7:{NFSU2_TR(0x6fd2f7);
__builtin_memmove((R+20),(R+16),4);
}
B6fd2f9:{NFSU2_TR(0x6fd2f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x16cull))));
}
B6fd2ff:{NFSU2_TR(0x6fd2ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd300:{NFSU2_TR(0x6fd300);
__builtin_memmove((R+24),(R+4),4);
}
B6fd302:{NFSU2_TR(0x6fd302);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fd305:{NFSU2_TR(0x6fd305);
w1(R+512,u8((r4(R+0))<(u32(0xfull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0xfull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6fd308:{NFSU2_TR(0x6fd308);
if(r1(R+518)){{goto L6fd3c8;}}
}
B6fd30e:L6fd30e:{c.instructions+=2;NFSU2_TR(0x6fd30e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6fd30f:{NFSU2_TR(0x6fd30f);
if(r1(R+518)){{goto L6fd376;}}
}
B6fd311:L6fd311:{c.instructions+=2;NFSU2_TR(0x6fd311);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6fd312:{NFSU2_TR(0x6fd312);
if(r1(R+518)){{goto L6fd360;}}
}
B6fd314:L6fd314:{c.instructions+=2;NFSU2_TR(0x6fd314);
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
B6fd315:{NFSU2_TR(0x6fd315);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fd763;}}
}
B6fd31b:L6fd31b:{c.instructions+=8;NFSU2_TR(0x6fd31b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fd31e:{NFSU2_TR(0x6fd31e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fd320:{NFSU2_TR(0x6fd320);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6fd326:{NFSU2_TR(0x6fd326);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fd329:{NFSU2_TR(0x6fd329);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fd32c:{NFSU2_TR(0x6fd32c);
__builtin_memmove(gp(0x8ada40),(R+0),4);
}
B6fd331:{NFSU2_TR(0x6fd331);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fd333:{NFSU2_TR(0x6fd333);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fd344;}}
}
B6fd335:L6fd335:{c.instructions+=3;NFSU2_TR(0x6fd335);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x9cull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x9cull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x9cull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fd33b:{NFSU2_TR(0x6fd33b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd33c:{NFSU2_TR(0x6fd33c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd33full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fd33f:L6fd33f:{c.instructions+=1;NFSU2_TR(0x6fd33f);
{goto L6fd763;}
}
B6fd344:L6fd344:{c.instructions+=1;NFSU2_TR(0x6fd344);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd347ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fd347:L6fd347:{c.instructions+=5;NFSU2_TR(0x6fd347);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fd34d:{NFSU2_TR(0x6fd34d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fd350:{NFSU2_TR(0x6fd350);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fd356:{NFSU2_TR(0x6fd356);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fd358:{NFSU2_TR(0x6fd358);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd35bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fd35b:L6fd35b:{c.instructions+=1;NFSU2_TR(0x6fd35b);
{goto L6fd763;}
}
B6fd360:L6fd360:{c.instructions+=2;NFSU2_TR(0x6fd360);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6fd364:{NFSU2_TR(0x6fd364);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fd763;}}
}
B6fd36a:L6fd36a:{c.instructions+=2;NFSU2_TR(0x6fd36a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
w4(U+4,u32(0x12ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fd371:{NFSU2_TR(0x6fd371);
{goto L6fd763;}
}
B6fd376:L6fd376:{c.instructions+=2;NFSU2_TR(0x6fd376);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fd379:{NFSU2_TR(0x6fd379);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd37eull));
{goto L6fdb33;}
}
B6fd37e:L6fd37e:{c.instructions+=3;NFSU2_TR(0x6fd37e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fd384:{NFSU2_TR(0x6fd384);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fd386:{NFSU2_TR(0x6fd386);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fd396;}}
}
B6fd388:L6fd388:{c.instructions+=4;NFSU2_TR(0x6fd388);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd38a:{NFSU2_TR(0x6fd38a);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd38c:{NFSU2_TR(0x6fd38c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fd38f:{NFSU2_TR(0x6fd38f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd394ull));
{goto L6fdabc;}
}
B6fd394:L6fd394:{c.instructions+=1;NFSU2_TR(0x6fd394);
{goto L6fd3ad;}
}
B6fd396:L6fd396:{c.instructions+=2;NFSU2_TR(0x6fd396);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6fd399:{NFSU2_TR(0x6fd399);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fd3ad;}}
}
B6fd39b:L6fd39b:{c.instructions+=5;NFSU2_TR(0x6fd39b);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd39d:{NFSU2_TR(0x6fd39d);
u8 U[4];
__builtin_memmove((U+0),gp(0x8ada40),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd3a3:{NFSU2_TR(0x6fd3a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fd3a6:{NFSU2_TR(0x6fd3a6);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd3a8:{NFSU2_TR(0x6fd3a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd3adull));
{goto L6fdaf4;}
}
B6fd3ad:L6fd3ad:{c.instructions+=5;NFSU2_TR(0x6fd3ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6fd3b1:{NFSU2_TR(0x6fd3b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fd3b4:{NFSU2_TR(0x6fd3b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd3b5:{NFSU2_TR(0x6fd3b5);
__builtin_memmove((R+4),(R+24),4);
}
B6fd3b7:{NFSU2_TR(0x6fd3b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd3bcull));
TAIL_STATIC(0x6fcc4bu,6fc);
}
B6fd3bc:L6fd3bc:{c.instructions+=2;NFSU2_TR(0x6fd3bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
w4(U+4,u32(0x11ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fd3c3:{NFSU2_TR(0x6fd3c3);
{goto L6fd763;}
}
B6fd3c8:L6fd3c8:{c.instructions+=12;NFSU2_TR(0x6fd3c8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd3c9:{NFSU2_TR(0x6fd3c9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd3ca:{NFSU2_TR(0x6fd3ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fd3d0:{NFSU2_TR(0x6fd3d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd3d1:{NFSU2_TR(0x6fd3d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fd3d7:{NFSU2_TR(0x6fd3d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd3d8:{NFSU2_TR(0x6fd3d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fd3de:{NFSU2_TR(0x6fd3de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd3df:{NFSU2_TR(0x6fd3df);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe94ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fd3e5:{NFSU2_TR(0x6fd3e5);
u8 U[4];
w4(U+0,u32(0x7c32e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd3ea:{NFSU2_TR(0x6fd3ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd3eb:{NFSU2_TR(0x6fd3eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd3f0ull));
TAIL_STATIC(0x75c784u,75c);
}
B6fd3f0:L6fd3f0:{c.instructions+=5;NFSU2_TR(0x6fd3f0);
u8 U[4];
w4(U+0,u32(0x180ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd3f5:{NFSU2_TR(0x6fd3f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe94ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fd3fb:{NFSU2_TR(0x6fd3fb);
u8 U[4];
w4(U+0,u32(0x8000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd400:{NFSU2_TR(0x6fd400);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd401:{NFSU2_TR(0x6fd401);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd406ull));
TAIL_STATIC(0x7605c9u,760);
}
B6fd406:L6fd406:{c.instructions+=4;NFSU2_TR(0x6fd406);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B6fd409:{NFSU2_TR(0x6fd409);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6fd40c:{NFSU2_TR(0x6fd40c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fd412:{NFSU2_TR(0x6fd412);
if(r1(R+518)){{goto L6fd661;}}
}
B6fd418:L6fd418:{c.instructions+=2;NFSU2_TR(0x6fd418);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd419:{NFSU2_TR(0x6fd419);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd41eull));
TAIL_STATIC(0x760a0au,760);
}
B6fd41e:L6fd41e:{c.instructions+=6;NFSU2_TR(0x6fd41e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6fd420:{NFSU2_TR(0x6fd420);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6fd421:{NFSU2_TR(0x6fd421);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6fd424:{NFSU2_TR(0x6fd424);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fd425:{NFSU2_TR(0x6fd425);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fd42b:{NFSU2_TR(0x6fd42b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fd43d;}}
}
B6fd42d:L6fd42d:{c.instructions+=2;NFSU2_TR(0x6fd42d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2dcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fd433:{NFSU2_TR(0x6fd433);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e0ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fd43d:L6fd43d:{c.instructions+=2;NFSU2_TR(0x6fd43d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6fd444:{NFSU2_TR(0x6fd444);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fd5ea;}}
}
B6fd44a:L6fd44a:{c.instructions+=2;NFSU2_TR(0x6fd44a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6fd450:{NFSU2_TR(0x6fd450);
if(r1(R+518)){{goto L6fd47a;}}
}
B6fd452:L6fd452:{c.instructions+=5;NFSU2_TR(0x6fd452);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd454:{NFSU2_TR(0x6fd454);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fd45a:{NFSU2_TR(0x6fd45a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd45b:{NFSU2_TR(0x6fd45b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fd461:{NFSU2_TR(0x6fd461);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd466ull));
TAIL_STATIC(0x76095fu,760);
}
B6fd466:L6fd466:{c.instructions+=3;NFSU2_TR(0x6fd466);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6fd469:{NFSU2_TR(0x6fd469);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1cull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6fd46c:{NFSU2_TR(0x6fd46c);
if(r1(R+518)){{goto L6fd47a;}}
}
B6fd46e:L6fd46e:{c.instructions+=2;NFSU2_TR(0x6fd46e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e0ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fd478:{NFSU2_TR(0x6fd478);
{goto L6fd4b2;}
}
B6fd47a:L6fd47a:{c.instructions+=3;NFSU2_TR(0x6fd47a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fd480:{NFSU2_TR(0x6fd480);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6fd486:{NFSU2_TR(0x6fd486);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fd4a8;}}
}
B6fd488:L6fd488:{c.instructions+=3;NFSU2_TR(0x6fd488);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fd48e:{NFSU2_TR(0x6fd48e);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4d433032ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6fd494:{NFSU2_TR(0x6fd494);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fd4a8;}}
}
B6fd496:L6fd496:{c.instructions+=4;NFSU2_TR(0x6fd496);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd498:{NFSU2_TR(0x6fd498);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd499:{NFSU2_TR(0x6fd499);
__builtin_memmove((R+4),(R+24),4);
}
B6fd49b:{NFSU2_TR(0x6fd49b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd4a0ull));
TAIL_STATIC(0x6fcd1cu,6fc);
}
B6fd4a0:L6fd4a0:{c.instructions+=2;NFSU2_TR(0x6fd4a0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6fd4a6:{NFSU2_TR(0x6fd4a6);
if(r1(R+518)){{goto L6fd4b8;}}
}
B6fd4a8:L6fd4a8:{c.instructions+=1;NFSU2_TR(0x6fd4a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e0ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fd4b2:L6fd4b2:{c.instructions+=1;NFSU2_TR(0x6fd4b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2dcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fd4b8:L6fd4b8:{c.instructions+=3;NFSU2_TR(0x6fd4b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fd4be:{NFSU2_TR(0x6fd4be);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6fd4c1:{NFSU2_TR(0x6fd4c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fd4ea;}}
}
B6fd4c3:L6fd4c3:{c.instructions+=3;NFSU2_TR(0x6fd4c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fd4c9:{NFSU2_TR(0x6fd4c9);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x0ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6fd4cc:{NFSU2_TR(0x6fd4cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fd4ea;}}
}
B6fd4ce:L6fd4ce:{c.instructions+=7;NFSU2_TR(0x6fd4ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fd4d1:{NFSU2_TR(0x6fd4d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6fd4d3:{NFSU2_TR(0x6fd4d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd4d4:{NFSU2_TR(0x6fd4d4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd4d5:{NFSU2_TR(0x6fd4d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fd4db:{NFSU2_TR(0x6fd4db);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fd4e1:{NFSU2_TR(0x6fd4e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd4e4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fd4e4:L6fd4e4:{c.instructions+=1;NFSU2_TR(0x6fd4e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fd4ea:L6fd4ea:{c.instructions+=2;NFSU2_TR(0x6fd4ea);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6fd4f0:{NFSU2_TR(0x6fd4f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fd502;}}
}
B6fd4f2:L6fd4f2:{c.instructions+=2;NFSU2_TR(0x6fd4f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2dcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fd4f8:{NFSU2_TR(0x6fd4f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e0ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fd502:L6fd502:{c.instructions+=2;NFSU2_TR(0x6fd502);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6fd508:{NFSU2_TR(0x6fd508);
if(r1(R+518)){{goto L6fd5d2;}}
}
B6fd50e:L6fd50e:{c.instructions+=3;NFSU2_TR(0x6fd50e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fd514:{NFSU2_TR(0x6fd514);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fd516:{NFSU2_TR(0x6fd516);
if(r1(R+518)){{goto L6fd546;}}
}
B6fd518:L6fd518:{c.instructions+=3;NFSU2_TR(0x6fd518);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fd51a:{NFSU2_TR(0x6fd51a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fd51c:{NFSU2_TR(0x6fd51c);
if(r1(R+518)){{goto L6fd546;}}
}
B6fd51e:L6fd51e:{c.instructions+=4;NFSU2_TR(0x6fd51e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd51f:{NFSU2_TR(0x6fd51f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd520:{NFSU2_TR(0x6fd520);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fd526:{NFSU2_TR(0x6fd526);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd52bull));
TAIL_STATIC(0x76095fu,760);
}
B6fd52b:L6fd52b:{c.instructions+=3;NFSU2_TR(0x6fd52b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6fd52e:{NFSU2_TR(0x6fd52e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6fd534:{NFSU2_TR(0x6fd534);
if(r1(R+518)){{goto L6fd546;}}
}
B6fd536:L6fd536:{c.instructions+=2;NFSU2_TR(0x6fd536);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2dcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fd53c:{NFSU2_TR(0x6fd53c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e0ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fd546:L6fd546:{c.instructions+=2;NFSU2_TR(0x6fd546);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6fd54c:{NFSU2_TR(0x6fd54c);
if(r1(R+518)){{goto L6fd5d2;}}
}
B6fd552:L6fd552:{c.instructions+=3;NFSU2_TR(0x6fd552);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fd554:{NFSU2_TR(0x6fd554);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6fd55a:{NFSU2_TR(0x6fd55a);
if(r1(R+518)){{goto L6fd5d2;}}
}
B6fd55c:L6fd55c:{c.instructions+=2;NFSU2_TR(0x6fd55c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6fd562:{NFSU2_TR(0x6fd562);
if(r1(R+518)){{goto L6fd5d2;}}
}
B6fd564:L6fd564:{c.instructions+=2;NFSU2_TR(0x6fd564);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6fd566:{NFSU2_TR(0x6fd566);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fd598;}}
}
B6fd568:L6fd568:{c.instructions+=5;NFSU2_TR(0x6fd568);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd569:{NFSU2_TR(0x6fd569);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fd56f:{NFSU2_TR(0x6fd56f);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6fd571:{NFSU2_TR(0x6fd571);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fd577:{NFSU2_TR(0x6fd577);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd57cull));
TAIL_STATIC(0x7606e7u,760);
}
B6fd57c:L6fd57c:{c.instructions+=5;NFSU2_TR(0x6fd57c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6fd57e:{NFSU2_TR(0x6fd57e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1cull))));
}
B6fd581:{NFSU2_TR(0x6fd581);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6fd584:{NFSU2_TR(0x6fd584);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6fd586:{NFSU2_TR(0x6fd586);
if(r1(R+518)){{goto L6fd598;}}
}
B6fd588:L6fd588:{c.instructions+=2;NFSU2_TR(0x6fd588);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2dcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fd58e:{NFSU2_TR(0x6fd58e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e0ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fd598:L6fd598:{c.instructions+=2;NFSU2_TR(0x6fd598);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6fd59e:{NFSU2_TR(0x6fd59e);
if(r1(R+518)){{goto L6fd5d2;}}
}
B6fd5a0:L6fd5a0:{c.instructions+=4;NFSU2_TR(0x6fd5a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fd5a6:{NFSU2_TR(0x6fd5a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fd5ac:{NFSU2_TR(0x6fd5ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fd5b2:{NFSU2_TR(0x6fd5b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd5b7ull));
TAIL_STATIC(0x76095fu,760);
}
B6fd5b7:L6fd5b7:{c.instructions+=3;NFSU2_TR(0x6fd5b7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6fd5ba:{NFSU2_TR(0x6fd5ba);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6fd5c0:{NFSU2_TR(0x6fd5c0);
if(r1(R+518)){{goto L6fd5d2;}}
}
B6fd5c2:L6fd5c2:{c.instructions+=2;NFSU2_TR(0x6fd5c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2dcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fd5c8:{NFSU2_TR(0x6fd5c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e0ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fd5d2:L6fd5d2:{c.instructions+=2;NFSU2_TR(0x6fd5d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fd5d8:{NFSU2_TR(0x6fd5d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd5ddull));
TAIL_STATIC(0x75fff7u,75f);
}
B6fd5dd:L6fd5dd:{c.instructions+=3;NFSU2_TR(0x6fd5dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6fd5e4:{NFSU2_TR(0x6fd5e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fd5e5:{NFSU2_TR(0x6fd5e5);
{goto L6fd674;}
}
B6fd5ea:L6fd5ea:{c.instructions+=3;NFSU2_TR(0x6fd5ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6fd5f0:{NFSU2_TR(0x6fd5f0);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x0ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6fd5f3:{NFSU2_TR(0x6fd5f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fd60e;}}
}
B6fd5f5:L6fd5f5:{c.instructions+=8;NFSU2_TR(0x6fd5f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fd5f8:{NFSU2_TR(0x6fd5f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6fd5fa:{NFSU2_TR(0x6fd5fa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd5fb:{NFSU2_TR(0x6fd5fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6fd601:{NFSU2_TR(0x6fd601);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd602:{NFSU2_TR(0x6fd602);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd603:{NFSU2_TR(0x6fd603);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd605:{NFSU2_TR(0x6fd605);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd608ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fd608:L6fd608:{c.instructions+=1;NFSU2_TR(0x6fd608);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fd60e:L6fd60e:{c.instructions+=2;NFSU2_TR(0x6fd60e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6fd614:{NFSU2_TR(0x6fd614);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fd626;}}
}
B6fd616:L6fd616:{c.instructions+=2;NFSU2_TR(0x6fd616);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2dcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fd61c:{NFSU2_TR(0x6fd61c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e0ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fd626:L6fd626:{c.instructions+=2;NFSU2_TR(0x6fd626);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2dcull))));
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
B6fd62c:{NFSU2_TR(0x6fd62c);
if(r1(R+518)){{goto L6fd75a;}}
}
B6fd632:L6fd632:{c.instructions+=5;NFSU2_TR(0x6fd632);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fd638:{NFSU2_TR(0x6fd638);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fd63e:{NFSU2_TR(0x6fd63e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd63f:{NFSU2_TR(0x6fd63f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fd645:{NFSU2_TR(0x6fd645);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd64aull));
TAIL_STATIC(0x76095fu,760);
}
B6fd64a:L6fd64a:{c.instructions+=3;NFSU2_TR(0x6fd64a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6fd64d:{NFSU2_TR(0x6fd64d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6fd653:{NFSU2_TR(0x6fd653);
if(r1(R+518)){{goto L6fd674;}}
}
B6fd655:L6fd655:{c.instructions+=2;NFSU2_TR(0x6fd655);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e0ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fd65f:{NFSU2_TR(0x6fd65f);
{goto L6fd66e;}
}
B6fd661:L6fd661:{c.instructions+=3;NFSU2_TR(0x6fd661);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6fd663:{NFSU2_TR(0x6fd663);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6fd664:{NFSU2_TR(0x6fd664);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e0ull))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fd66e:L6fd66e:{c.instructions+=1;NFSU2_TR(0x6fd66e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2dcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fd674:L6fd674:{c.instructions+=2;NFSU2_TR(0x6fd674);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2dcull))));
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
B6fd67a:{NFSU2_TR(0x6fd67a);
if(r1(R+518)){{goto L6fd75a;}}
}
B6fd680:L6fd680:{c.instructions+=3;NFSU2_TR(0x6fd680);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6fd682:{NFSU2_TR(0x6fd682);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
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
B6fd688:{NFSU2_TR(0x6fd688);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fd72a;}}
}
B6fd68e:L6fd68e:{c.instructions+=3;NFSU2_TR(0x6fd68e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fd694:{NFSU2_TR(0x6fd694);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
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
B6fd69a:{NFSU2_TR(0x6fd69a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fd74a;}}
}
B6fd6a0:L6fd6a0:{c.instructions+=3;NFSU2_TR(0x6fd6a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fd6a6:{NFSU2_TR(0x6fd6a6);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x4d433032ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x4d433032ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x4d433032ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6fd6ac:{NFSU2_TR(0x6fd6ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fd74a;}}
}
B6fd6b2:L6fd6b2:{c.instructions+=4;NFSU2_TR(0x6fd6b2);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd6b4:{NFSU2_TR(0x6fd6b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd6b5:{NFSU2_TR(0x6fd6b5);
__builtin_memmove((R+4),(R+24),4);
}
B6fd6b7:{NFSU2_TR(0x6fd6b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd6bcull));
TAIL_STATIC(0x6fcd1cu,6fc);
}
B6fd6bc:L6fd6bc:{c.instructions+=2;NFSU2_TR(0x6fd6bc);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6fd6c2:{NFSU2_TR(0x6fd6c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fd74a;}}
}
B6fd6c8:L6fd6c8:{c.instructions+=3;NFSU2_TR(0x6fd6c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fd6ce:{NFSU2_TR(0x6fd6ce);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6fd6d0:{NFSU2_TR(0x6fd6d0);
if(r1(R+518)){{goto L6fd6f8;}}
}
B6fd6d2:L6fd6d2:{c.instructions+=4;NFSU2_TR(0x6fd6d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fd6d8:{NFSU2_TR(0x6fd6d8);
__builtin_memmove((R+4),(R+24),4);
}
B6fd6da:{NFSU2_TR(0x6fd6da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd6db:{NFSU2_TR(0x6fd6db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd6e0ull));
TAIL_STATIC(0x6fcd1cu,6fc);
}
B6fd6e0:L6fd6e0:{c.instructions+=2;NFSU2_TR(0x6fd6e0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6fd6e6:{NFSU2_TR(0x6fd6e6);
if(r1(R+518)){{goto L6fd6f8;}}
}
B6fd6e8:L6fd6e8:{c.instructions+=2;NFSU2_TR(0x6fd6e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2dcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fd6ee:{NFSU2_TR(0x6fd6ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e0ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fd6f8:L6fd6f8:{c.instructions+=3;NFSU2_TR(0x6fd6f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fd6fe:{NFSU2_TR(0x6fd6fe);
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
B6fd700:{NFSU2_TR(0x6fd700);
if(r1(R+518)){{goto L6fd73c;}}
}
B6fd702:L6fd702:{c.instructions+=4;NFSU2_TR(0x6fd702);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fd708:{NFSU2_TR(0x6fd708);
__builtin_memmove((R+4),(R+24),4);
}
B6fd70a:{NFSU2_TR(0x6fd70a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd70b:{NFSU2_TR(0x6fd70b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd710ull));
TAIL_STATIC(0x6fcd1cu,6fc);
}
B6fd710:L6fd710:{c.instructions+=2;NFSU2_TR(0x6fd710);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6fd716:{NFSU2_TR(0x6fd716);
if(r1(R+518)){{goto L6fd73c;}}
}
B6fd718:L6fd718:{c.instructions+=3;NFSU2_TR(0x6fd718);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2dcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fd71e:{NFSU2_TR(0x6fd71e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e0ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fd728:{NFSU2_TR(0x6fd728);
{goto L6fd73c;}
}
B6fd72a:L6fd72a:{c.instructions+=4;NFSU2_TR(0x6fd72a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fd72d:{NFSU2_TR(0x6fd72d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fd733:{NFSU2_TR(0x6fd733);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fd735:{NFSU2_TR(0x6fd735);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd738ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fd738:L6fd738:{c.instructions+=2;NFSU2_TR(0x6fd738);
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
B6fd73a:{NFSU2_TR(0x6fd73a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fd74a;}}
}
B6fd73c:L6fd73c:{c.instructions+=3;NFSU2_TR(0x6fd73c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2dcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fd742:{NFSU2_TR(0x6fd742);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fd748:{NFSU2_TR(0x6fd748);
{goto L6fd75a;}
}
B6fd74a:L6fd74a:{c.instructions+=2;NFSU2_TR(0x6fd74a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2dcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fd750:{NFSU2_TR(0x6fd750);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e0ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fd75a:L6fd75a:{c.instructions+=3;NFSU2_TR(0x6fd75a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fd75b:{NFSU2_TR(0x6fd75b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fd762:{NFSU2_TR(0x6fd762);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fd763:L6fd763:{c.instructions+=3;NFSU2_TR(0x6fd763);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fd764:{NFSU2_TR(0x6fd764);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6fd765:{NFSU2_TR(0x6fd765);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fd768:L6fd768:{c.instructions+=8;NFSU2_TR(0x6fd768);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd769:{NFSU2_TR(0x6fd769);
__builtin_memmove((R+20),(R+16),4);
}
B6fd76b:{NFSU2_TR(0x6fd76b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x378ull))));
}
B6fd771:{NFSU2_TR(0x6fd771);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd772:{NFSU2_TR(0x6fd772);
__builtin_memmove((R+12),(R+4),4);
}
B6fd774:{NFSU2_TR(0x6fd774);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fd777:{NFSU2_TR(0x6fd777);
w1(R+512,u8((r4(R+0))<(u32(0x13ull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x13ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6fd77a:{NFSU2_TR(0x6fd77a);
if(r1(R+518)){{goto L6fda54;}}
}
B6fd780:L6fd780:{c.instructions+=2;NFSU2_TR(0x6fd780);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6fd781:{NFSU2_TR(0x6fd781);
if(r1(R+518)){{goto L6fda2c;}}
}
B6fd787:L6fd787:{c.instructions+=2;NFSU2_TR(0x6fd787);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6fd788:{NFSU2_TR(0x6fd788);
if(r1(R+518)){{goto L6fd848;}}
}
B6fd78e:L6fd78e:{c.instructions+=2;NFSU2_TR(0x6fd78e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6fd78f:{NFSU2_TR(0x6fd78f);
if(r1(R+518)){{goto L6fd7f6;}}
}
B6fd791:L6fd791:{c.instructions+=2;NFSU2_TR(0x6fd791);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6fd792:{NFSU2_TR(0x6fd792);
if(r1(R+518)){{goto L6fd7e0;}}
}
B6fd794:L6fd794:{c.instructions+=2;NFSU2_TR(0x6fd794);
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
B6fd795:{NFSU2_TR(0x6fd795);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fda83;}}
}
B6fd79b:L6fd79b:{c.instructions+=8;NFSU2_TR(0x6fd79b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fd79e:{NFSU2_TR(0x6fd79e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fd7a0:{NFSU2_TR(0x6fd7a0);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6fd7a6:{NFSU2_TR(0x6fd7a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fd7a9:{NFSU2_TR(0x6fd7a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fd7ac:{NFSU2_TR(0x6fd7ac);
__builtin_memmove(gp(0x8ada40),(R+0),4);
}
B6fd7b1:{NFSU2_TR(0x6fd7b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fd7b3:{NFSU2_TR(0x6fd7b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fd7c4;}}
}
B6fd7b5:L6fd7b5:{c.instructions+=3;NFSU2_TR(0x6fd7b5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+12),u32(0x9cull)));
w1(R+523,scarry<u32>(r4(R+12),u32(0x9cull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x9cull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fd7bb:{NFSU2_TR(0x6fd7bb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd7bc:{NFSU2_TR(0x6fd7bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd7bfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fd7bf:L6fd7bf:{c.instructions+=1;NFSU2_TR(0x6fd7bf);
{goto L6fda83;}
}
B6fd7c4:L6fd7c4:{c.instructions+=1;NFSU2_TR(0x6fd7c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd7c7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fd7c7:L6fd7c7:{c.instructions+=5;NFSU2_TR(0x6fd7c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fd7cd:{NFSU2_TR(0x6fd7cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fd7d0:{NFSU2_TR(0x6fd7d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fd7d6:{NFSU2_TR(0x6fd7d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fd7d8:{NFSU2_TR(0x6fd7d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd7dbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fd7db:L6fd7db:{c.instructions+=1;NFSU2_TR(0x6fd7db);
{goto L6fda83;}
}
B6fd7e0:L6fd7e0:{c.instructions+=2;NFSU2_TR(0x6fd7e0);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6fd7e4:{NFSU2_TR(0x6fd7e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fda83;}}
}
B6fd7ea:L6fd7ea:{c.instructions+=2;NFSU2_TR(0x6fd7ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
w4(U+4,u32(0x18ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fd7f1:{NFSU2_TR(0x6fd7f1);
{goto L6fda83;}
}
B6fd7f6:L6fd7f6:{c.instructions+=2;NFSU2_TR(0x6fd7f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fd7f9:{NFSU2_TR(0x6fd7f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd7feull));
{goto L6fdb33;}
}
B6fd7fe:L6fd7fe:{c.instructions+=3;NFSU2_TR(0x6fd7fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fd804:{NFSU2_TR(0x6fd804);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fd806:{NFSU2_TR(0x6fd806);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fd816;}}
}
B6fd808:L6fd808:{c.instructions+=4;NFSU2_TR(0x6fd808);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd80a:{NFSU2_TR(0x6fd80a);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd80c:{NFSU2_TR(0x6fd80c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fd80f:{NFSU2_TR(0x6fd80f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd814ull));
{goto L6fdabc;}
}
B6fd814:L6fd814:{c.instructions+=1;NFSU2_TR(0x6fd814);
{goto L6fd82d;}
}
B6fd816:L6fd816:{c.instructions+=2;NFSU2_TR(0x6fd816);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6fd819:{NFSU2_TR(0x6fd819);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fd82d;}}
}
B6fd81b:L6fd81b:{c.instructions+=5;NFSU2_TR(0x6fd81b);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd81d:{NFSU2_TR(0x6fd81d);
u8 U[4];
__builtin_memmove((U+0),gp(0x8ada40),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd823:{NFSU2_TR(0x6fd823);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fd826:{NFSU2_TR(0x6fd826);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd828:{NFSU2_TR(0x6fd828);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd82dull));
{goto L6fdaf4;}
}
B6fd82d:L6fd82d:{c.instructions+=5;NFSU2_TR(0x6fd82d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6fd831:{NFSU2_TR(0x6fd831);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fd834:{NFSU2_TR(0x6fd834);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd835:{NFSU2_TR(0x6fd835);
__builtin_memmove((R+4),(R+12),4);
}
B6fd837:{NFSU2_TR(0x6fd837);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd83cull));
TAIL_STATIC(0x6fcc4bu,6fc);
}
B6fd83c:L6fd83c:{c.instructions+=2;NFSU2_TR(0x6fd83c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
w4(U+4,u32(0x17ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fd843:{NFSU2_TR(0x6fd843);
{goto L6fda83;}
}
B6fd848:L6fd848:{c.instructions+=5;NFSU2_TR(0x6fd848);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fd84e:{NFSU2_TR(0x6fd84e);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6fd854:{NFSU2_TR(0x6fd854);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd855:{NFSU2_TR(0x6fd855);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6fd859:{NFSU2_TR(0x6fd859);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6fd9e4;}}
}
B6fd85f:L6fd85f:{c.instructions+=2;NFSU2_TR(0x6fd85f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2a8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fd865:{NFSU2_TR(0x6fd865);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd866:L6fd866:{c.instructions+=2;NFSU2_TR(0x6fd866);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
}
B6fd86d:{NFSU2_TR(0x6fd86d);
if(r1(R+512)){{goto L6fd8a5;}}
}
B6fd86f:L6fd86f:{c.instructions+=2;NFSU2_TR(0x6fd86f);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x1ull))));
}
B6fd876:{NFSU2_TR(0x6fd876);
if(r1(R+512)){{goto L6fd8a5;}}
}
B6fd878:L6fd878:{c.instructions+=4;NFSU2_TR(0x6fd878);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd87a:{NFSU2_TR(0x6fd87a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fd87b:{NFSU2_TR(0x6fd87b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fd87d:{NFSU2_TR(0x6fd87d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9cull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fd883:L6fd883:{c.instructions+=1;NFSU2_TR(0x6fd883);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6fd885;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fd883u);}goto L6fd883;}
}
B6fd885:L6fd885:{c.instructions+=7;NFSU2_TR(0x6fd885);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fd88b:{NFSU2_TR(0x6fd88b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fd891:{NFSU2_TR(0x6fd891);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd893:{NFSU2_TR(0x6fd893);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6fd896:{NFSU2_TR(0x6fd896);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fd89c:{NFSU2_TR(0x6fd89c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd89d:{NFSU2_TR(0x6fd89d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd8a2ull));
TAIL_STATIC(0x75c840u,75c);
}
B6fd8a2:L6fd8a2:{c.instructions+=1;NFSU2_TR(0x6fd8a2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6fd8a5:L6fd8a5:{c.instructions+=11;NFSU2_TR(0x6fd8a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6fd8ab:{NFSU2_TR(0x6fd8ab);
u8 U[4];
__builtin_memmove((U+0),gp(0x8145d8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd8b1:{NFSU2_TR(0x6fd8b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fd8b7:{NFSU2_TR(0x6fd8b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd8b8:{NFSU2_TR(0x6fd8b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x174ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fd8be:{NFSU2_TR(0x6fd8be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd8bf:{NFSU2_TR(0x6fd8bf);
w4(R+28,u32(0x7c32e4ull));
}
B6fd8c4:{NFSU2_TR(0x6fd8c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe90ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fd8ca:{NFSU2_TR(0x6fd8ca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd8cb:{NFSU2_TR(0x6fd8cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd8cc:{NFSU2_TR(0x6fd8cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd8d1ull));
TAIL_STATIC(0x75c784u,75c);
}
B6fd8d1:L6fd8d1:{c.instructions+=4;NFSU2_TR(0x6fd8d1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6fd8d4:{NFSU2_TR(0x6fd8d4);
__builtin_memmove((R+4),(R+24),4);
}
B6fd8d6:{NFSU2_TR(0x6fd8d6);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6fd8da:{NFSU2_TR(0x6fd8da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd8dfull));
TAIL_STATIC(0x6fc259u,6fc);
}
B6fd8df:L6fd8df:{c.instructions+=3;NFSU2_TR(0x6fd8df);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe90ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fd8e5:{NFSU2_TR(0x6fd8e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd8e6:{NFSU2_TR(0x6fd8e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd8ebull));
TAIL_STATIC(0x6fc327u,6fc);
}
B6fd8eb:L6fd8eb:{c.instructions+=5;NFSU2_TR(0x6fd8eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fd8ec:{NFSU2_TR(0x6fd8ec);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd8ee:{NFSU2_TR(0x6fd8ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fd8ef:{NFSU2_TR(0x6fd8ef);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6fd8f5:{NFSU2_TR(0x6fd8f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fd96f;}}
}
B6fd8f7:L6fd8f7:{c.instructions+=2;NFSU2_TR(0x6fd8f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2e0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fd8fd:{NFSU2_TR(0x6fd8fd);
{goto L6fd9d1;}
}
B6fd902:L6fd902:{c.instructions+=2;NFSU2_TR(0x6fd902);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6fd909:{NFSU2_TR(0x6fd909);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fd978;}}
}
B6fd90b:L6fd90b:{c.instructions+=2;NFSU2_TR(0x6fd90b);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6fd912:{NFSU2_TR(0x6fd912);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fd962;}}
}
B6fd914:L6fd914:{c.instructions+=9;NFSU2_TR(0x6fd914);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fd91a:{NFSU2_TR(0x6fd91a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fd920:{NFSU2_TR(0x6fd920);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd921:{NFSU2_TR(0x6fd921);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x174ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fd927:{NFSU2_TR(0x6fd927);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd928:{NFSU2_TR(0x6fd928);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd8cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fd92e:{NFSU2_TR(0x6fd92e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd92f:{NFSU2_TR(0x6fd92f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd930:{NFSU2_TR(0x6fd930);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd935ull));
TAIL_STATIC(0x75c784u,75c);
}
B6fd935:L6fd935:{c.instructions+=3;NFSU2_TR(0x6fd935);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd8cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fd93b:{NFSU2_TR(0x6fd93b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd93c:{NFSU2_TR(0x6fd93c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd941ull));
TAIL_STATIC(0x760b08u,760);
}
B6fd941:L6fd941:{c.instructions+=3;NFSU2_TR(0x6fd941);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B6fd944:{NFSU2_TR(0x6fd944);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fd946:{NFSU2_TR(0x6fd946);
if(r1(R+518)){{goto L6fd95e;}}
}
B6fd948:L6fd948:{c.instructions+=3;NFSU2_TR(0x6fd948);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2dcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fd952:{NFSU2_TR(0x6fd952);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2e0ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fd95c:{NFSU2_TR(0x6fd95c);
{goto L6fd962;}
}
B6fd95e:L6fd95e:{c.instructions+=1;NFSU2_TR(0x6fd95e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6fd962:L6fd962:{c.instructions+=3;NFSU2_TR(0x6fd962);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe90ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fd968:{NFSU2_TR(0x6fd968);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd969:{NFSU2_TR(0x6fd969);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd96eull));
TAIL_STATIC(0x6fc327u,6fc);
}
B6fd96e:L6fd96e:{c.instructions+=1;NFSU2_TR(0x6fd96e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fd96f:L6fd96f:{c.instructions+=2;NFSU2_TR(0x6fd96f);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6fd976:{NFSU2_TR(0x6fd976);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fd902u);}goto L6fd902;}}
}
B6fd978:L6fd978:{c.instructions+=2;NFSU2_TR(0x6fd978);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6fd97f:{NFSU2_TR(0x6fd97f);
if(r1(R+518)){{goto L6fd9cd;}}
}
B6fd981:L6fd981:{c.instructions+=8;NFSU2_TR(0x6fd981);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fd987:{NFSU2_TR(0x6fd987);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd988:{NFSU2_TR(0x6fd988);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x174ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fd98e:{NFSU2_TR(0x6fd98e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd98f:{NFSU2_TR(0x6fd98f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc88ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fd995:{NFSU2_TR(0x6fd995);
u8 U[4];
w4(U+0,u32(0x7c2fc4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd99a:{NFSU2_TR(0x6fd99a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd99b:{NFSU2_TR(0x6fd99b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd9a0ull));
TAIL_STATIC(0x75c784u,75c);
}
B6fd9a0:L6fd9a0:{c.instructions+=3;NFSU2_TR(0x6fd9a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc88ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fd9a6:{NFSU2_TR(0x6fd9a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd9a7:{NFSU2_TR(0x6fd9a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd9acull));
TAIL_STATIC(0x760adeu,760);
}
B6fd9ac:L6fd9ac:{c.instructions+=3;NFSU2_TR(0x6fd9ac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6fd9af:{NFSU2_TR(0x6fd9af);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fd9b1:{NFSU2_TR(0x6fd9b1);
if(r1(R+518)){{goto L6fd9c9;}}
}
B6fd9b3:L6fd9b3:{c.instructions+=3;NFSU2_TR(0x6fd9b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2dcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fd9bd:{NFSU2_TR(0x6fd9bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2e0ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fd9c7:{NFSU2_TR(0x6fd9c7);
{goto L6fd9cd;}
}
B6fd9c9:L6fd9c9:{c.instructions+=1;NFSU2_TR(0x6fd9c9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6fd9cd:L6fd9cd:{c.instructions+=1;NFSU2_TR(0x6fd9cd);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6fd9d1:L6fd9d1:{c.instructions+=3;NFSU2_TR(0x6fd9d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fd9d7:{NFSU2_TR(0x6fd9d7);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6fd9dd:{NFSU2_TR(0x6fd9dd);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fd866u);}goto L6fd866;}}
}
B6fd9e3:L6fd9e3:{c.instructions+=1;NFSU2_TR(0x6fd9e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fd9e4:L6fd9e4:{c.instructions+=4;NFSU2_TR(0x6fd9e4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6fd9e6:{NFSU2_TR(0x6fd9e6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6fd9e7:{NFSU2_TR(0x6fd9e7);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6fd9ed:{NFSU2_TR(0x6fd9ed);
if(r1(R+518)){{goto L6fd9f5;}}
}
B6fd9ef:L6fd9ef:{c.instructions+=2;NFSU2_TR(0x6fd9ef);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6fd9f3:{NFSU2_TR(0x6fd9f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fda06;}}
}
B6fd9f5:L6fd9f5:{c.instructions+=4;NFSU2_TR(0x6fd9f5);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fd9f7:{NFSU2_TR(0x6fd9f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fd9f8:{NFSU2_TR(0x6fd9f8);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6fd9fe:{NFSU2_TR(0x6fd9fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fda16;}}
}
B6fda00:L6fda00:{c.instructions+=2;NFSU2_TR(0x6fda00);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x0ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B6fda04:{NFSU2_TR(0x6fda04);
if(r1(R+518)){{goto L6fda16;}}
}
B6fda06:L6fda06:{c.instructions+=3;NFSU2_TR(0x6fda06);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6fda0d:{NFSU2_TR(0x6fda0d);
u8 U[14];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2e0ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
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
B6fda14:{NFSU2_TR(0x6fda14);
{goto L6fda22;}
}
B6fda16:L6fda16:{c.instructions+=2;NFSU2_TR(0x6fda16);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2dcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fda1c:{NFSU2_TR(0x6fda1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2e0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fda22:L6fda22:{c.instructions+=3;NFSU2_TR(0x6fda22);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
w4(U+4,u32(0x16ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fda29:{NFSU2_TR(0x6fda29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fda2a:{NFSU2_TR(0x6fda2a);
{goto L6fda83;}
}
B6fda2c:L6fda2c:{c.instructions+=3;NFSU2_TR(0x6fda2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fda2f:{NFSU2_TR(0x6fda2f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6fda30:{NFSU2_TR(0x6fda30);
if(r1(R+518)){{goto L6fda3e;}}
}
B6fda32:L6fda32:{c.instructions+=2;NFSU2_TR(0x6fda32);
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
B6fda33:{NFSU2_TR(0x6fda33);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fda83;}}
}
B6fda35:L6fda35:{c.instructions+=2;NFSU2_TR(0x6fda35);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
w4(U+4,u32(0x15ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fda3c:{NFSU2_TR(0x6fda3c);
{goto L6fda83;}
}
B6fda3e:L6fda3e:{c.instructions+=3;NFSU2_TR(0x6fda3e);
u8 U[14];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2e0ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
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
B6fda45:{NFSU2_TR(0x6fda45);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2dcull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fda4f:{NFSU2_TR(0x6fda4f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fd7eau);}goto L6fd7ea;}
}
B6fda54:L6fda54:{c.instructions+=2;NFSU2_TR(0x6fda54);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fda57:{NFSU2_TR(0x6fda57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fda5cull));
{goto L6fdb33;}
}
B6fda5c:L6fda5c:{c.instructions+=5;NFSU2_TR(0x6fda5c);
u8 U[4];
w4(U+0,u32(0x304ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fda61:{NFSU2_TR(0x6fda61);
u8 U[4];
__builtin_memmove((U+0),gp(0x8ada40),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fda67:{NFSU2_TR(0x6fda67);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fda6a:{NFSU2_TR(0x6fda6a);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fda6c:{NFSU2_TR(0x6fda6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fda71ull));
{goto L6fdaf4;}
}
B6fda71:L6fda71:{c.instructions+=4;NFSU2_TR(0x6fda71);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fda74:{NFSU2_TR(0x6fda74);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fda75:{NFSU2_TR(0x6fda75);
__builtin_memmove((R+4),(R+12),4);
}
B6fda77:{NFSU2_TR(0x6fda77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fda7cull));
TAIL_STATIC(0x6fcc4bu,6fc);
}
B6fda7c:L6fda7c:{c.instructions+=1;NFSU2_TR(0x6fda7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
w4(U+4,u32(0x14ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fda83:L6fda83:{c.instructions+=3;NFSU2_TR(0x6fda83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fda84:{NFSU2_TR(0x6fda84);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6fda85:{NFSU2_TR(0x6fda85);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fda88:L6fda88:{c.instructions+=15;NFSU2_TR(0x6fda88);
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
B6fda8a:{NFSU2_TR(0x6fda8a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fda8b:{NFSU2_TR(0x6fda8b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6fda8d:{NFSU2_TR(0x6fda8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fda90:{NFSU2_TR(0x6fda90);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fda93:{NFSU2_TR(0x6fda93);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fda96:{NFSU2_TR(0x6fda96);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fda99:{NFSU2_TR(0x6fda99);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6fda9a:{NFSU2_TR(0x6fda9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fda9d:{NFSU2_TR(0x6fda9d);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6fda9e:{NFSU2_TR(0x6fda9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fdaa1:{NFSU2_TR(0x6fdaa1);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6fdaa2:{NFSU2_TR(0x6fdaa2);
__builtin_memmove((R+0),(R+4),4);
}
B6fdaa4:{NFSU2_TR(0x6fdaa4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fdaa5:{NFSU2_TR(0x6fdaa5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fdaa6:L6fdaa6:{c.instructions+=4;NFSU2_TR(0x6fdaa6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdaa7:{NFSU2_TR(0x6fdaa7);
__builtin_memmove((R+24),(R+4),4);
}
B6fdaa9:{NFSU2_TR(0x6fdaa9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fdaac:{NFSU2_TR(0x6fdaac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fdab1ull));
TAIL_STATIC(0x4aec00u,4ae);
}
B6fdab1:L6fdab1:{c.instructions+=2;NFSU2_TR(0x6fdab1);
__builtin_memmove((R+4),(R+24),4);
}
B6fdab3:{NFSU2_TR(0x6fdab3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fdab8ull));
TAIL_STATIC(0x6fc259u,6fc);
}
B6fdab8:L6fdab8:{c.instructions+=3;NFSU2_TR(0x6fdab8);
__builtin_memmove((R+0),(R+24),4);
}
B6fdaba:{NFSU2_TR(0x6fdaba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fdabb:{NFSU2_TR(0x6fdabb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fdabc:L6fdabc:{c.instructions+=10;NFSU2_TR(0x6fdabc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdabd:{NFSU2_TR(0x6fdabd);
__builtin_memmove((R+20),(R+16),4);
}
B6fdabf:{NFSU2_TR(0x6fdabf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdac0:{NFSU2_TR(0x6fdac0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdac1:{NFSU2_TR(0x6fdac1);
__builtin_memmove((R+24),(R+4),4);
}
B6fdac3:{NFSU2_TR(0x6fdac3);
u8 U[4];
w4(U+0,u32(0x1aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdac5:{NFSU2_TR(0x6fdac5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6fdac6:{NFSU2_TR(0x6fdac6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fdac8:{NFSU2_TR(0x6fdac8);
__builtin_memmove((R+4),(R+8),4);
}
B6fdaca:{NFSU2_TR(0x6fdaca);
__builtin_memmove((R+28),(R+24),4);
}
B6fdacc:L6fdacc:{c.instructions+=1;NFSU2_TR(0x6fdacc);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6fdace;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fdaccu);}goto L6fdacc;}
}
B6fdace:L6fdace:{c.instructions+=6;NFSU2_TR(0x6fdace);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fdad1:{NFSU2_TR(0x6fdad1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdad3:{NFSU2_TR(0x6fdad3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdad4:{NFSU2_TR(0x6fdad4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fdad7:{NFSU2_TR(0x6fdad7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fdada:{NFSU2_TR(0x6fdada);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fdadfull));
{goto L6fdd62;}
}
B6fdadf:L6fdadf:{c.instructions+=6;NFSU2_TR(0x6fdadf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fdae0:{NFSU2_TR(0x6fdae0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fdae1:{NFSU2_TR(0x6fdae1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fdae4:{NFSU2_TR(0x6fdae4);
__builtin_memmove((R+4),(R+24),4);
}
B6fdae6:{NFSU2_TR(0x6fdae6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fdae9:{NFSU2_TR(0x6fdae9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fdaeeull));
TAIL_STATIC(0x6fc26fu,6fc);
}
B6fdaee:L6fdaee:{c.instructions+=4;NFSU2_TR(0x6fdaee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fdaef:{NFSU2_TR(0x6fdaef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fdaf0:{NFSU2_TR(0x6fdaf0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fdaf1:{NFSU2_TR(0x6fdaf1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fdaf4:L6fdaf4:{c.instructions+=11;NFSU2_TR(0x6fdaf4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdaf5:{NFSU2_TR(0x6fdaf5);
__builtin_memmove((R+20),(R+16),4);
}
B6fdaf7:{NFSU2_TR(0x6fdaf7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdaf8:{NFSU2_TR(0x6fdaf8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdaf9:{NFSU2_TR(0x6fdaf9);
__builtin_memmove((R+24),(R+4),4);
}
B6fdafb:{NFSU2_TR(0x6fdafb);
u8 U[4];
w4(U+0,u32(0x1aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdafd:{NFSU2_TR(0x6fdafd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6fdafe:{NFSU2_TR(0x6fdafe);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fdb01:{NFSU2_TR(0x6fdb01);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fdb03:{NFSU2_TR(0x6fdb03);
__builtin_memmove((R+4),(R+8),4);
}
B6fdb05:{NFSU2_TR(0x6fdb05);
__builtin_memmove((R+28),(R+24),4);
}
B6fdb07:L6fdb07:{c.instructions+=1;NFSU2_TR(0x6fdb07);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6fdb09;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fdb07u);}goto L6fdb07;}
}
B6fdb09:L6fdb09:{c.instructions+=6;NFSU2_TR(0x6fdb09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fdb0c:{NFSU2_TR(0x6fdb0c);
u8 U[4];
w4(U+0,u32(0x7b3b24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdb11:{NFSU2_TR(0x6fdb11);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdb12:{NFSU2_TR(0x6fdb12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fdb15:{NFSU2_TR(0x6fdb15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fdb18:{NFSU2_TR(0x6fdb18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fdb1dull));
{goto L6fdd62;}
}
B6fdb1d:L6fdb1d:{c.instructions+=5;NFSU2_TR(0x6fdb1d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6fdb20:{NFSU2_TR(0x6fdb20);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fdb23:{NFSU2_TR(0x6fdb23);
__builtin_memmove((R+4),(R+24),4);
}
B6fdb25:{NFSU2_TR(0x6fdb25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fdb28:{NFSU2_TR(0x6fdb28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fdb2dull));
TAIL_STATIC(0x6fc26fu,6fc);
}
B6fdb2d:L6fdb2d:{c.instructions+=4;NFSU2_TR(0x6fdb2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fdb2e:{NFSU2_TR(0x6fdb2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fdb2f:{NFSU2_TR(0x6fdb2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fdb30:{NFSU2_TR(0x6fdb30);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fdb33:L6fdb33:{c.instructions+=10;NFSU2_TR(0x6fdb33);
__builtin_memmove((R+8),(R+4),4);
}
B6fdb35:{NFSU2_TR(0x6fdb35);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6fdb39:{NFSU2_TR(0x6fdb39);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6fdb3d:{NFSU2_TR(0x6fdb3d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdb3e:{NFSU2_TR(0x6fdb3e);
u8 U[4];
w4(U+0,u32(0x1aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdb40:{NFSU2_TR(0x6fdb40);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fdb47:{NFSU2_TR(0x6fdb47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fdb48:{NFSU2_TR(0x6fdb48);
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
B6fdb4a:{NFSU2_TR(0x6fdb4a);
__builtin_memmove((R+28),(R+8),4);
}
B6fdb4c:{NFSU2_TR(0x6fdb4c);
u8 U[4];
w4(U+0,u32(0x7c32e0ull));
s4(u32(r4(R+8)),r4(U+0));
}
B6fdb52:L6fdb52:{c.instructions+=1;NFSU2_TR(0x6fdb52);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6fdb54;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fdb52u);}goto L6fdb52;}
}
B6fdb54:L6fdb54:{c.instructions+=3;NFSU2_TR(0x6fdb54);
__builtin_memmove((R+0),(R+8),4);
}
B6fdb56:{NFSU2_TR(0x6fdb56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fdb57:{NFSU2_TR(0x6fdb57);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fdb58:L6fdb58:{c.instructions+=7;NFSU2_TR(0x6fdb58);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdb59:{NFSU2_TR(0x6fdb59);
__builtin_memmove((R+20),(R+16),4);
}
B6fdb5b:{NFSU2_TR(0x6fdb5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fdb5e:{NFSU2_TR(0x6fdb5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fdb61:{NFSU2_TR(0x6fdb61);
w1(R+512,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6fdb63:{NFSU2_TR(0x6fdb63);
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
B6fdb64:{NFSU2_TR(0x6fdb64);
if(r1(R+518)){{goto L6fdb7b;}}
}
B6fdb66:L6fdb66:{c.instructions+=2;NFSU2_TR(0x6fdb66);
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
B6fdb67:{NFSU2_TR(0x6fdb67);
if(r1(R+518)){{goto L6fdb77;}}
}
B6fdb69:L6fdb69:{c.instructions+=2;NFSU2_TR(0x6fdb69);
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
B6fdb6a:{NFSU2_TR(0x6fdb6a);
if(r1(R+518)){{goto L6fdb73;}}
}
B6fdb6c:L6fdb6c:{c.instructions+=2;NFSU2_TR(0x6fdb6c);
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
B6fdb6d:{NFSU2_TR(0x6fdb6d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fdb7e;}}
}
B6fdb6f:L6fdb6f:{c.instructions+=2;NFSU2_TR(0x6fdb6f);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdb71:{NFSU2_TR(0x6fdb71);
{goto L6fdb7d;}
}
B6fdb73:L6fdb73:{c.instructions+=2;NFSU2_TR(0x6fdb73);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdb75:{NFSU2_TR(0x6fdb75);
{goto L6fdb7d;}
}
B6fdb77:L6fdb77:{c.instructions+=2;NFSU2_TR(0x6fdb77);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdb79:{NFSU2_TR(0x6fdb79);
{goto L6fdb7d;}
}
B6fdb7b:L6fdb7b:{c.instructions+=1;NFSU2_TR(0x6fdb7b);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdb7d:L6fdb7d:{c.instructions+=1;NFSU2_TR(0x6fdb7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6fdb7e:L6fdb7e:{c.instructions+=5;NFSU2_TR(0x6fdb7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fdb81:{NFSU2_TR(0x6fdb81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fdb83:{NFSU2_TR(0x6fdb83);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdb85:{NFSU2_TR(0x6fdb85);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdb86:{NFSU2_TR(0x6fdb86);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fdb89ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fdb89:L6fdb89:{c.instructions+=2;NFSU2_TR(0x6fdb89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fdb8a:{NFSU2_TR(0x6fdb8a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fdb8d:L6fdb8d:{c.instructions+=6;NFSU2_TR(0x6fdb8d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdb8e:{NFSU2_TR(0x6fdb8e);
__builtin_memmove((R+20),(R+16),4);
}
B6fdb90:{NFSU2_TR(0x6fdb90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdb91:{NFSU2_TR(0x6fdb91);
__builtin_memmove((R+24),(R+4),4);
}
B6fdb93:{NFSU2_TR(0x6fdb93);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
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
B6fdb97:{NFSU2_TR(0x6fdb97);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fdba8;}}
}
B6fdb99:L6fdb99:{c.instructions+=2;NFSU2_TR(0x6fdb99);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x0ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B6fdb9d:{NFSU2_TR(0x6fdb9d);
if(r1(R+518)){{goto L6fdba4;}}
}
B6fdb9f:L6fdb9f:{c.instructions+=1;NFSU2_TR(0x6fdb9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fdba4ull));
TAIL_STATIC(0x6fcd36u,6fc);
}
B6fdba4:L6fdba4:{c.instructions+=2;NFSU2_TR(0x6fdba4);
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
B6fdba6:{NFSU2_TR(0x6fdba6);
{goto L6fdc1f;}
}
B6fdba8:L6fdba8:{c.instructions+=4;NFSU2_TR(0x6fdba8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fdbab:{NFSU2_TR(0x6fdbab);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fdbae:{NFSU2_TR(0x6fdbae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fdbb0:{NFSU2_TR(0x6fdbb0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fdbb3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fdbb3:L6fdbb3:{c.instructions+=2;NFSU2_TR(0x6fdbb3);
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
B6fdbb5:{NFSU2_TR(0x6fdbb5);
if(r1(R+518)){{goto L6fdc13;}}
}
B6fdbb7:L6fdbb7:{c.instructions+=3;NFSU2_TR(0x6fdbb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fdbba:{NFSU2_TR(0x6fdbba);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6fdbbb:{NFSU2_TR(0x6fdbbb);
if(r1(R+518)){{goto L6fdc0b;}}
}
B6fdbbd:L6fdbbd:{c.instructions+=2;NFSU2_TR(0x6fdbbd);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6fdbbe:{NFSU2_TR(0x6fdbbe);
if(r1(R+518)){{goto L6fdc01;}}
}
B6fdbc0:L6fdbc0:{c.instructions+=2;NFSU2_TR(0x6fdbc0);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6fdbc1:{NFSU2_TR(0x6fdbc1);
if(r1(R+518)){{goto L6fdbf7;}}
}
B6fdbc3:L6fdbc3:{c.instructions+=2;NFSU2_TR(0x6fdbc3);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6fdbc4:{NFSU2_TR(0x6fdbc4);
if(r1(R+518)){{goto L6fdbed;}}
}
B6fdbc6:L6fdbc6:{c.instructions+=2;NFSU2_TR(0x6fdbc6);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6fdbc7:{NFSU2_TR(0x6fdbc7);
if(r1(R+518)){{goto L6fdbe3;}}
}
B6fdbc9:L6fdbc9:{c.instructions+=2;NFSU2_TR(0x6fdbc9);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6fdbca:{NFSU2_TR(0x6fdbca);
if(r1(R+518)){{goto L6fdbd9;}}
}
B6fdbcc:L6fdbcc:{c.instructions+=2;NFSU2_TR(0x6fdbcc);
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
B6fdbcd:{NFSU2_TR(0x6fdbcd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fdc13;}}
}
B6fdbcf:L6fdbcf:{c.instructions+=3;NFSU2_TR(0x6fdbcf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdbd0:{NFSU2_TR(0x6fdbd0);
__builtin_memmove((R+4),(R+24),4);
}
B6fdbd2:{NFSU2_TR(0x6fdbd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fdbd7ull));
TAIL_STATIC(0x6fcc0du,6fc);
}
B6fdbd7:L6fdbd7:{c.instructions+=1;NFSU2_TR(0x6fdbd7);
{goto L6fdc13;}
}
B6fdbd9:L6fdbd9:{c.instructions+=3;NFSU2_TR(0x6fdbd9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdbda:{NFSU2_TR(0x6fdbda);
__builtin_memmove((R+4),(R+24),4);
}
B6fdbdc:{NFSU2_TR(0x6fdbdc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fdbe1ull));
TAIL_STATIC(0x6fc9d2u,6fc);
}
B6fdbe1:L6fdbe1:{c.instructions+=1;NFSU2_TR(0x6fdbe1);
{goto L6fdc13;}
}
B6fdbe3:L6fdbe3:{c.instructions+=3;NFSU2_TR(0x6fdbe3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdbe4:{NFSU2_TR(0x6fdbe4);
__builtin_memmove((R+4),(R+24),4);
}
B6fdbe6:{NFSU2_TR(0x6fdbe6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fdbebull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fd768u);}goto L6fd768;}
}
B6fdbeb:L6fdbeb:{c.instructions+=1;NFSU2_TR(0x6fdbeb);
{goto L6fdc13;}
}
B6fdbed:L6fdbed:{c.instructions+=3;NFSU2_TR(0x6fdbed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdbee:{NFSU2_TR(0x6fdbee);
__builtin_memmove((R+4),(R+24),4);
}
B6fdbf0:{NFSU2_TR(0x6fdbf0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fdbf5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fd2f6u);}goto L6fd2f6;}
}
B6fdbf5:L6fdbf5:{c.instructions+=1;NFSU2_TR(0x6fdbf5);
{goto L6fdc13;}
}
B6fdbf7:L6fdbf7:{c.instructions+=3;NFSU2_TR(0x6fdbf7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdbf8:{NFSU2_TR(0x6fdbf8);
__builtin_memmove((R+4),(R+24),4);
}
B6fdbfa:{NFSU2_TR(0x6fdbfa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fdbffull));
TAIL_STATIC(0x6fcf77u,6fc);
}
B6fdbff:L6fdbff:{c.instructions+=1;NFSU2_TR(0x6fdbff);
{goto L6fdc13;}
}
B6fdc01:L6fdc01:{c.instructions+=3;NFSU2_TR(0x6fdc01);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdc02:{NFSU2_TR(0x6fdc02);
__builtin_memmove((R+4),(R+24),4);
}
B6fdc04:{NFSU2_TR(0x6fdc04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fdc09ull));
TAIL_STATIC(0x6fcf37u,6fc);
}
B6fdc09:L6fdc09:{c.instructions+=1;NFSU2_TR(0x6fdc09);
{goto L6fdc13;}
}
B6fdc0b:L6fdc0b:{c.instructions+=3;NFSU2_TR(0x6fdc0b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdc0c:{NFSU2_TR(0x6fdc0c);
__builtin_memmove((R+4),(R+24),4);
}
B6fdc0e:{NFSU2_TR(0x6fdc0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fdc13ull));
TAIL_STATIC(0x6fc94au,6fc);
}
B6fdc13:L6fdc13:{c.instructions+=4;NFSU2_TR(0x6fdc13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fdc16:{NFSU2_TR(0x6fdc16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fdc18:{NFSU2_TR(0x6fdc18);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdc1a:{NFSU2_TR(0x6fdc1a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fdc1dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fdc1d:L6fdc1d:{c.instructions+=1;NFSU2_TR(0x6fdc1d);
w1(R+0,u8(0x1ull));
}
B6fdc1f:L6fdc1f:{c.instructions+=3;NFSU2_TR(0x6fdc1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fdc20:{NFSU2_TR(0x6fdc20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fdc21:{NFSU2_TR(0x6fdc21);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fdc24:L6fdc24:{c.instructions+=5;NFSU2_TR(0x6fdc24);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdc25:{NFSU2_TR(0x6fdc25);
__builtin_memmove((R+20),(R+16),4);
}
B6fdc27:{NFSU2_TR(0x6fdc27);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6fdc2b:{NFSU2_TR(0x6fdc2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fdc2e:{NFSU2_TR(0x6fdc2e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fdc35;}}
}
B6fdc30:L6fdc30:{c.instructions+=2;NFSU2_TR(0x6fdc30);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+0))));
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
B6fdc33:{NFSU2_TR(0x6fdc33);
{goto L6fdc3a;}
}
B6fdc35:L6fdc35:{c.instructions+=2;NFSU2_TR(0x6fdc35);
w4(R+0,u32(~u32(r4(R+0))));
}
B6fdc37:{NFSU2_TR(0x6fdc37);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+0))));
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
B6fdc3a:L6fdc3a:{c.instructions+=2;NFSU2_TR(0x6fdc3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fdc3b:{NFSU2_TR(0x6fdc3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fdc3e:L6fdc3e:{c.instructions+=12;NFSU2_TR(0x6fdc3e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdc3f:{NFSU2_TR(0x6fdc3f);
__builtin_memmove((R+20),(R+16),4);
}
B6fdc41:{NFSU2_TR(0x6fdc41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B6fdc44:{NFSU2_TR(0x6fdc44);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdc45:{NFSU2_TR(0x6fdc45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6fdc48:{NFSU2_TR(0x6fdc48);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdc49:{NFSU2_TR(0x6fdc49);
__builtin_memmove((R+28),(R+4),4);
}
B6fdc4b:{NFSU2_TR(0x6fdc4b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6fdc4d:{NFSU2_TR(0x6fdc4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fdc50:{NFSU2_TR(0x6fdc50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fdc53:{NFSU2_TR(0x6fdc53);
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
B6fdc55:{NFSU2_TR(0x6fdc55);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6fdc6a;}}
}
B6fdc57:L6fdc57:{c.instructions+=2;NFSU2_TR(0x6fdc57);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6fdc5a:{NFSU2_TR(0x6fdc5a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdc5b:L6fdc5b:{c.instructions+=6;NFSU2_TR(0x6fdc5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6fdc5d:{NFSU2_TR(0x6fdc5d);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6fdc61:{NFSU2_TR(0x6fdc61);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6fdc62:{NFSU2_TR(0x6fdc62);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B6fdc65:{NFSU2_TR(0x6fdc65);
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
B6fdc67:{NFSU2_TR(0x6fdc67);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fdc5bu);}goto L6fdc5b;}}
}
B6fdc69:L6fdc69:{c.instructions+=1;NFSU2_TR(0x6fdc69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fdc6a:L6fdc6a:{c.instructions+=3;NFSU2_TR(0x6fdc6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fdc6d:{NFSU2_TR(0x6fdc6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fdc6f:{NFSU2_TR(0x6fdc6f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fdc72ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fdc72:L6fdc72:{c.instructions+=7;NFSU2_TR(0x6fdc72);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fdc75:{NFSU2_TR(0x6fdc75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fdc77:{NFSU2_TR(0x6fdc77);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6fdc7a:{NFSU2_TR(0x6fdc7a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdc7b:{NFSU2_TR(0x6fdc7b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fdc7e:{NFSU2_TR(0x6fdc7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fdc81:{NFSU2_TR(0x6fdc81);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fdc83ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B6fdc83:L6fdc83:{c.instructions+=4;NFSU2_TR(0x6fdc83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fdc84:{NFSU2_TR(0x6fdc84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fdc85:{NFSU2_TR(0x6fdc85);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6fdc86:{NFSU2_TR(0x6fdc86);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fdc89:L6fdc89:{c.instructions+=7;NFSU2_TR(0x6fdc89);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdc8a:{NFSU2_TR(0x6fdc8a);
__builtin_memmove((R+20),(R+16),4);
}
B6fdc8c:{NFSU2_TR(0x6fdc8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fdc8f:{NFSU2_TR(0x6fdc8f);
w1(R+512,u8((r4(R+4))<(u32(0x0ull))));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6fdc92:{NFSU2_TR(0x6fdc92);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdc94:{NFSU2_TR(0x6fdc94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fdc95:{NFSU2_TR(0x6fdc95);
if(r1(R+518)){{goto L6fdca7;}}
}
B6fdc97:L6fdc97:{c.instructions+=2;NFSU2_TR(0x6fdc97);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6fdc98:{NFSU2_TR(0x6fdc98);
if(r1(R+518)){{goto L6fdca2;}}
}
B6fdc9a:L6fdc9a:{c.instructions+=2;NFSU2_TR(0x6fdc9a);
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
B6fdc9b:{NFSU2_TR(0x6fdc9b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fdca9;}}
}
B6fdc9d:L6fdc9d:{c.instructions+=3;NFSU2_TR(0x6fdc9d);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdc9f:{NFSU2_TR(0x6fdc9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fdca0:{NFSU2_TR(0x6fdca0);
{goto L6fdca9;}
}
B6fdca2:L6fdca2:{c.instructions+=3;NFSU2_TR(0x6fdca2);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fdca4:{NFSU2_TR(0x6fdca4);
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
B6fdca5:{NFSU2_TR(0x6fdca5);
{goto L6fdca9;}
}
B6fdca7:L6fdca7:{c.instructions+=1;NFSU2_TR(0x6fdca7);
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
B6fdca9:L6fdca9:{c.instructions+=2;NFSU2_TR(0x6fdca9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fdcaa:{NFSU2_TR(0x6fdcaa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fdcad:L6fdcad:{c.instructions+=6;NFSU2_TR(0x6fdcad);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdcae:{NFSU2_TR(0x6fdcae);
__builtin_memmove((R+20),(R+16),4);
}
B6fdcb0:{NFSU2_TR(0x6fdcb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fdcb3:{NFSU2_TR(0x6fdcb3);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6fdcb6:{NFSU2_TR(0x6fdcb6);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x17ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x17ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x17ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fdcb9:{NFSU2_TR(0x6fdcb9);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6fdd01;}}
}
B6fdcbb:L6fdcbb:{c.instructions+=2;NFSU2_TR(0x6fdcbb);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6fdd3dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6fdcc2:{NFSU2_TR(0x6fdcc2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x6fdd05ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fdcc9:L6fdcc9:{c.instructions+=2;NFSU2_TR(0x6fdcc9);
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
B6fdccb:{NFSU2_TR(0x6fdccb);
{goto L6fdd01;}
}
B6fdccd:L6fdccd:{c.instructions+=2;NFSU2_TR(0x6fdccd);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdccf:{NFSU2_TR(0x6fdccf);
{goto L6fdd00;}
}
B6fdcd1:L6fdcd1:{c.instructions+=3;NFSU2_TR(0x6fdcd1);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fdcd3:{NFSU2_TR(0x6fdcd3);
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
B6fdcd4:{NFSU2_TR(0x6fdcd4);
{goto L6fdd01;}
}
B6fdcd6:L6fdcd6:{c.instructions+=2;NFSU2_TR(0x6fdcd6);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdcd8:{NFSU2_TR(0x6fdcd8);
{goto L6fdd00;}
}
B6fdcda:L6fdcda:{c.instructions+=2;NFSU2_TR(0x6fdcda);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdcdc:{NFSU2_TR(0x6fdcdc);
{goto L6fdd00;}
}
B6fdcde:L6fdcde:{c.instructions+=2;NFSU2_TR(0x6fdcde);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdce0:{NFSU2_TR(0x6fdce0);
{goto L6fdd00;}
}
B6fdce2:L6fdce2:{c.instructions+=2;NFSU2_TR(0x6fdce2);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdce4:{NFSU2_TR(0x6fdce4);
{goto L6fdd00;}
}
B6fdce6:L6fdce6:{c.instructions+=2;NFSU2_TR(0x6fdce6);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdce8:{NFSU2_TR(0x6fdce8);
{goto L6fdd00;}
}
B6fdcea:L6fdcea:{c.instructions+=2;NFSU2_TR(0x6fdcea);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdcec:{NFSU2_TR(0x6fdcec);
{goto L6fdd00;}
}
B6fdcee:L6fdcee:{c.instructions+=2;NFSU2_TR(0x6fdcee);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdcf0:{NFSU2_TR(0x6fdcf0);
{goto L6fdd00;}
}
B6fdcf2:L6fdcf2:{c.instructions+=2;NFSU2_TR(0x6fdcf2);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdcf4:{NFSU2_TR(0x6fdcf4);
{goto L6fdd00;}
}
B6fdcf6:L6fdcf6:{c.instructions+=2;NFSU2_TR(0x6fdcf6);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdcf8:{NFSU2_TR(0x6fdcf8);
{goto L6fdd00;}
}
B6fdcfa:L6fdcfa:{c.instructions+=2;NFSU2_TR(0x6fdcfa);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdcfc:{NFSU2_TR(0x6fdcfc);
{goto L6fdd00;}
}
B6fdcfe:L6fdcfe:{c.instructions+=1;NFSU2_TR(0x6fdcfe);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdd00:L6fdd00:{c.instructions+=1;NFSU2_TR(0x6fdd00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fdd01:L6fdd01:{c.instructions+=2;NFSU2_TR(0x6fdd01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fdd02:{NFSU2_TR(0x6fdd02);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fdd55:L6fdd55:{c.instructions+=6;NFSU2_TR(0x6fdd55);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdd56:{NFSU2_TR(0x6fdd56);
__builtin_memmove((R+20),(R+16),4);
}
B6fdd58:{NFSU2_TR(0x6fdd58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fdd5b:{NFSU2_TR(0x6fdd5b);
__builtin_memmove(gp(0x8b0254),(R+0),4);
}
B6fdd60:{NFSU2_TR(0x6fdd60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fdd61:{NFSU2_TR(0x6fdd61);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fdd62:L6fdd62:{c.instructions+=9;NFSU2_TR(0x6fdd62);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdd63:{NFSU2_TR(0x6fdd63);
__builtin_memmove((R+20),(R+16),4);
}
B6fdd65:{NFSU2_TR(0x6fdd65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x3cull))));
}
B6fdd68:{NFSU2_TR(0x6fdd68);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdd69:{NFSU2_TR(0x6fdd69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6fdd6c:{NFSU2_TR(0x6fdd6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fdd6e:{NFSU2_TR(0x6fdd6e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdd6f:{NFSU2_TR(0x6fdd6f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdd70:{NFSU2_TR(0x6fdd70);
if(r1(R+518)){{goto L6fdd84;}}
}
B6fdd72:L6fdd72:{c.instructions+=2;NFSU2_TR(0x6fdd72);
__builtin_memmove((R+0),(R+12),4);
}
B6fdd74:{NFSU2_TR(0x6fdd74);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6fdd77:L6fdd77:{c.instructions+=4;NFSU2_TR(0x6fdd77);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6fdd79:{NFSU2_TR(0x6fdd79);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fdd7a:{NFSU2_TR(0x6fdd7a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6fdd7c:{NFSU2_TR(0x6fdd7c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fdd77u);}goto L6fdd77;}}
}
B6fdd7e:L6fdd7e:{c.instructions+=3;NFSU2_TR(0x6fdd7e);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B6fdd80:{NFSU2_TR(0x6fdd80);
__builtin_memmove((R+28),(R+0),4);
}
B6fdd82:{NFSU2_TR(0x6fdd82);
{goto L6fdd86;}
}
B6fdd84:L6fdd84:{c.instructions+=1;NFSU2_TR(0x6fdd84);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6fdd86:L6fdd86:{c.instructions+=3;NFSU2_TR(0x6fdd86);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fdd88:{NFSU2_TR(0x6fdd88);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fdd8a:{NFSU2_TR(0x6fdd8a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6fddbc;}}
}
B6fdd8c:L6fdd8c:{c.instructions+=3;NFSU2_TR(0x6fdd8c);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdd8e:{NFSU2_TR(0x6fdd8e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fdd91:{NFSU2_TR(0x6fdd91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fdd92:L6fdd92:{c.instructions+=3;NFSU2_TR(0x6fdd92);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+8,u32(s32(s8(r1(U+8)))));
}
B6fdd96:{NFSU2_TR(0x6fdd96);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x63ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6fdd99:{NFSU2_TR(0x6fdd99);
if(r1(R+518)){{goto L6fddae;}}
}
B6fdd9b:L6fdd9b:{c.instructions+=2;NFSU2_TR(0x6fdd9b);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6fdd9c:{NFSU2_TR(0x6fdd9c);
if(r1(R+518)){{goto L6fdda8;}}
}
B6fdd9e:L6fdd9e:{c.instructions+=2;NFSU2_TR(0x6fdd9e);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0xcull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6fdda1:{NFSU2_TR(0x6fdda1);
if(r1(R+518)){{goto L6fdda8;}}
}
B6fdda3:L6fdda3:{c.instructions+=2;NFSU2_TR(0x6fdda3);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6fdda6:{NFSU2_TR(0x6fdda6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fddb7;}}
}
B6fdda8:L6fdda8:{c.instructions+=3;NFSU2_TR(0x6fdda8);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B6fddaa:{NFSU2_TR(0x6fddaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6fddac:{NFSU2_TR(0x6fddac);
{goto L6fddb3;}
}
B6fddae:L6fddae:{c.instructions+=2;NFSU2_TR(0x6fddae);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B6fddb0:{NFSU2_TR(0x6fddb0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+8,u32(s32(s8(r1(U+0)))));
}
B6fddb3:L6fddb3:{c.instructions+=1;NFSU2_TR(0x6fddb3);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6fddb7:L6fddb7:{c.instructions+=3;NFSU2_TR(0x6fddb7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fddb8:{NFSU2_TR(0x6fddb8);
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
B6fddba:{NFSU2_TR(0x6fddba);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fdd92u);}goto L6fdd92;}}
}
B6fddbc:L6fddbc:{c.instructions+=2;NFSU2_TR(0x6fddbc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fddbf:{NFSU2_TR(0x6fddbf);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b0254),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fddc5ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6fddc5:L6fddc5:{c.instructions+=3;NFSU2_TR(0x6fddc5);
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
B6fddc7:{NFSU2_TR(0x6fddc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fddc8:{NFSU2_TR(0x6fddc8);
if(r1(R+518)){{goto L6fdebe;}}
}
B6fddce:L6fddce:{c.instructions+=6;NFSU2_TR(0x6fddce);
__builtin_memmove((R+28),gp(0x8b0250),4);
}
B6fddd4:{NFSU2_TR(0x6fddd4);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6fddd7:{NFSU2_TR(0x6fddd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fddda:{NFSU2_TR(0x6fddda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fdddd:{NFSU2_TR(0x6fdddd);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ada50ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fdde3:{NFSU2_TR(0x6fdde3);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B6fdde5:L6fdde5:{c.instructions+=2;NFSU2_TR(0x6fdde5);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6fdde7:{NFSU2_TR(0x6fdde7);
if(r1(R+518)){{goto L6fde77;}}
}
B6fdded:L6fdded:{c.instructions+=2;NFSU2_TR(0x6fdded);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fddee:{NFSU2_TR(0x6fddee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fddf3ull));
TAIL_STATIC(0x75d65bu,75d);
}
B6fddf3:L6fddf3:{c.instructions+=5;NFSU2_TR(0x6fddf3);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6fddf4:{NFSU2_TR(0x6fddf4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fddf5:{NFSU2_TR(0x6fddf5);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+4),(U+8),1);
}
B6fddf8:{NFSU2_TR(0x6fddf8);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x64ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6fddfb:{NFSU2_TR(0x6fddfb);
if(r1(R+518)){{goto L6fde1b;}}
}
B6fddfd:L6fddfd:{c.instructions+=2;NFSU2_TR(0x6fddfd);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x73ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6fde00:{NFSU2_TR(0x6fde00);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fde70;}}
}
B6fde02:L6fde02:{c.instructions+=2;NFSU2_TR(0x6fde02);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6fde06:{NFSU2_TR(0x6fde06);
{goto L6fde11;}
}
B6fde08:L6fde08:{c.instructions+=6;NFSU2_TR(0x6fde08);
u8 U[2];
__builtin_memmove((U+0),(R+4),2);
s2(u32(r4(R+24)),r2(U+0));
}
B6fde0b:{NFSU2_TR(0x6fde0b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6fde0c:{NFSU2_TR(0x6fde0c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6fde0d:{NFSU2_TR(0x6fde0d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fde0e:{NFSU2_TR(0x6fde0e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fde0f:{NFSU2_TR(0x6fde0f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6fde11:L6fde11:{c.instructions+=3;NFSU2_TR(0x6fde11);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((R+4),(U+0),2);
}
B6fde14:{NFSU2_TR(0x6fde14);
u8 U[2];
w2(U+0,u16(u32(r2(R+4))&u32(r2(R+4))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B6fde17:{NFSU2_TR(0x6fde17);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fde08u);}goto L6fde08;}}
}
B6fde19:L6fde19:{c.instructions+=1;NFSU2_TR(0x6fde19);
{goto L6fde70;}
}
B6fde1b:L6fde1b:{c.instructions+=3;NFSU2_TR(0x6fde1b);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B6fde1f:{NFSU2_TR(0x6fde1f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6fde21:{NFSU2_TR(0x6fde21);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6fde2c;}}
}
B6fde23:L6fde23:{c.instructions+=4;NFSU2_TR(0x6fde23);
w4(R+28,u32(0-u32(r4(R+28))));
}
B6fde25:{NFSU2_TR(0x6fde25);
u8 U[2];
w2(U+0,u16(0x2dull));
s2(u32(r4(R+24)),r2(U+0));
}
B6fde2a:{NFSU2_TR(0x6fde2a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6fde2b:{NFSU2_TR(0x6fde2b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6fde2c:L6fde2c:{c.instructions+=2;NFSU2_TR(0x6fde2c);
__builtin_memmove((R+0),(R+28),4);
}
B6fde2e:{NFSU2_TR(0x6fde2e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6fde30:L6fde30:{c.instructions+=7;NFSU2_TR(0x6fde30);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fde32:{NFSU2_TR(0x6fde32);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6fde33:{NFSU2_TR(0x6fde33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fde34:{NFSU2_TR(0x6fde34);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6fde34);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6fde34);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B6fde36:{NFSU2_TR(0x6fde36);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6fde37:{NFSU2_TR(0x6fde37);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fde39:{NFSU2_TR(0x6fde39);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fde30u);}goto L6fde30;}}
}
B6fde3b:L6fde3b:{c.instructions+=1;NFSU2_TR(0x6fde3b);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffe4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B6fde3f:L6fde3f:{c.instructions+=11;NFSU2_TR(0x6fde3f);
__builtin_memmove((R+0),(R+28),4);
}
B6fde41:{NFSU2_TR(0x6fde41);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fde43:{NFSU2_TR(0x6fde43);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6fde44:{NFSU2_TR(0x6fde44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fde45:{NFSU2_TR(0x6fde45);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6fde45);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6fde45);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B6fde47:{NFSU2_TR(0x6fde47);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6fde48:{NFSU2_TR(0x6fde48);
w1(R+8,u8(u32(r1(R+8))+u32(u8(0x30ull))));
}
B6fde4b:{NFSU2_TR(0x6fde4b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fde4d:{NFSU2_TR(0x6fde4d);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffe4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B6fde51:{NFSU2_TR(0x6fde51);
__builtin_memmove((R+28),(R+0),4);
}
B6fde53:{NFSU2_TR(0x6fde53);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fde3fu);}goto L6fde3f;}}
}
B6fde55:L6fde55:{c.instructions+=2;NFSU2_TR(0x6fde55);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6fde58:{NFSU2_TR(0x6fde58);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fde5b:L6fde5b:{c.instructions+=2;NFSU2_TR(0x6fde5b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6fde5d:{NFSU2_TR(0x6fde5d);
if(r1(R+518)){{goto L6fde6d;}}
}
B6fde5f:L6fde5f:{c.instructions+=7;NFSU2_TR(0x6fde5f);
w2(R+4,u16(s16(s8(r1(R+4)))));
}
B6fde63:{NFSU2_TR(0x6fde63);
u8 U[2];
__builtin_memmove((U+0),(R+4),2);
s2(u32(r4(R+24)),r2(U+0));
}
B6fde66:{NFSU2_TR(0x6fde66);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6fde67:{NFSU2_TR(0x6fde67);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6fde68:{NFSU2_TR(0x6fde68);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fde69:{NFSU2_TR(0x6fde69);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6fde6b:{NFSU2_TR(0x6fde6b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fde5bu);}goto L6fde5b;}
}
B6fde6d:L6fde6d:{c.instructions+=1;NFSU2_TR(0x6fde6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6fde70:L6fde70:{c.instructions+=3;NFSU2_TR(0x6fde70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6fde73:{NFSU2_TR(0x6fde73);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B6fde75:{NFSU2_TR(0x6fde75);
{goto L6fde8f;}
}
B6fde77:L6fde77:{c.instructions+=3;NFSU2_TR(0x6fde77);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((R+0),(U+0),2);
}
B6fde7a:{NFSU2_TR(0x6fde7a);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x25ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B6fde7e:{NFSU2_TR(0x6fde7e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fde84;}}
}
B6fde80:L6fde80:{c.instructions+=2;NFSU2_TR(0x6fde80);
w1(R+4,u8(0x1ull));
}
B6fde82:{NFSU2_TR(0x6fde82);
{goto L6fde8f;}
}
B6fde84:L6fde84:{c.instructions+=2;NFSU2_TR(0x6fde84);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x22ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B6fde88:{NFSU2_TR(0x6fde88);
if(r1(R+518)){{goto L6fde8f;}}
}
B6fde8a:L6fde8a:{c.instructions+=3;NFSU2_TR(0x6fde8a);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+24)),r2(U+0));
}
B6fde8d:{NFSU2_TR(0x6fde8d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6fde8e:{NFSU2_TR(0x6fde8e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6fde8f:L6fde8f:{c.instructions+=7;NFSU2_TR(0x6fde8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fde92:{NFSU2_TR(0x6fde92);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((R+8),(U+0),2);
}
B6fde95:{NFSU2_TR(0x6fde95);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fde96:{NFSU2_TR(0x6fde96);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fde97:{NFSU2_TR(0x6fde97);
u8 U[2];
w2(U+0,u16(u32(r2(R+8))&u32(r2(R+8))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B6fde9a:{NFSU2_TR(0x6fde9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fde9d:{NFSU2_TR(0x6fde9d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fdde5u);}goto L6fdde5;}}
}
B6fdea3:L6fdea3:{c.instructions+=9;NFSU2_TR(0x6fdea3);
u8 U[2];
w1(R+512,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w2(U+0,u16(u32(r2(U+0))&u32(r2(R+8))));
s2(u32(r4(R+24)),r2(U+0));
}
B6fdea6:{NFSU2_TR(0x6fdea6);
__builtin_memmove((R+0),gp(0x8b0250),4);
}
B6fdeab:{NFSU2_TR(0x6fdeab);
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
B6fdeac:{NFSU2_TR(0x6fdeac);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6fdead:{NFSU2_TR(0x6fdead);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdeaf:{NFSU2_TR(0x6fdeaf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fdeb0:{NFSU2_TR(0x6fdeb0);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6fdeb0);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6fdeb0);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B6fdeb2:{NFSU2_TR(0x6fdeb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ada50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fdeb8:{NFSU2_TR(0x6fdeb8);
__builtin_memmove(gp(0x8b0250),(R+8),4);
}
B6fdebe:L6fdebe:{c.instructions+=5;NFSU2_TR(0x6fdebe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fdebf:{NFSU2_TR(0x6fdebf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fdec0:{NFSU2_TR(0x6fdec0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fdec1:{NFSU2_TR(0x6fdec1);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6fdec2:{NFSU2_TR(0x6fdec2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fdec3:L6fdec3:{c.instructions+=7;NFSU2_TR(0x6fdec3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdec4:{NFSU2_TR(0x6fdec4);
__builtin_memmove((R+20),(R+16),4);
}
B6fdec6:{NFSU2_TR(0x6fdec6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fdec9:{NFSU2_TR(0x6fdec9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdeca:{NFSU2_TR(0x6fdeca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6fdecd:{NFSU2_TR(0x6fdecd);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6fded0:{NFSU2_TR(0x6fded0);
if(r1(R+518)){{goto L6fdf3a;}}
}
B6fded2:L6fded2:{c.instructions+=5;NFSU2_TR(0x6fded2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fded3:{NFSU2_TR(0x6fded3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fded4:{NFSU2_TR(0x6fded4);
u8 U[4];
w4(U+0,u32(0xfffffffeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fded6:{NFSU2_TR(0x6fded6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fded7:{NFSU2_TR(0x6fded7);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+24))));
}
B6fded9:L6fded9:{c.instructions+=3;NFSU2_TR(0x6fded9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6fdedb:{NFSU2_TR(0x6fdedb);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x5cull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6fdede:{NFSU2_TR(0x6fdede);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fdf28;}}
}
B6fdee0:L6fdee0:{c.instructions+=2;NFSU2_TR(0x6fdee0);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x78ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6fdee4:{NFSU2_TR(0x6fdee4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fdf28;}}
}
B6fdee6:L6fdee6:{c.instructions+=1;NFSU2_TR(0x6fdee6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6fdee9:L6fdee9:{c.instructions+=3;NFSU2_TR(0x6fdee9);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6fdeeb:{NFSU2_TR(0x6fdeeb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6fdeed:{NFSU2_TR(0x6fdeed);
if(r1(R+518)){{goto L6fdf1b;}}
}
B6fdeef:L6fdeef:{c.instructions+=2;NFSU2_TR(0x6fdeef);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x30ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B6fdef1:{NFSU2_TR(0x6fdef1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6fdeff;}}
}
B6fdef3:L6fdef3:{c.instructions+=2;NFSU2_TR(0x6fdef3);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x39ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6fdef5:{NFSU2_TR(0x6fdef5);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6fdeff;}}
}
B6fdef7:L6fdef7:{c.instructions+=3;NFSU2_TR(0x6fdef7);
w4(R+0,u32(r1(R+0)));
}
B6fdefa:{NFSU2_TR(0x6fdefa);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x30ull))));
}
B6fdefd:{NFSU2_TR(0x6fdefd);
{goto L6fdf0d;}
}
B6fdeff:L6fdeff:{c.instructions+=2;NFSU2_TR(0x6fdeff);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B6fdf01:{NFSU2_TR(0x6fdf01);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6fdf28;}}
}
B6fdf03:L6fdf03:{c.instructions+=2;NFSU2_TR(0x6fdf03);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x66ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x66ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6fdf05:{NFSU2_TR(0x6fdf05);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6fdf28;}}
}
B6fdf07:L6fdf07:{c.instructions+=2;NFSU2_TR(0x6fdf07);
w4(R+0,u32(r1(R+0)));
}
B6fdf0a:{NFSU2_TR(0x6fdf0a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x57ull))));
}
B6fdf0d:L6fdf0d:{c.instructions+=6;NFSU2_TR(0x6fdf0d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6fdf10:{NFSU2_TR(0x6fdf10);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B6fdf12:{NFSU2_TR(0x6fdf12);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6fdf13:{NFSU2_TR(0x6fdf13);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6fdf16:{NFSU2_TR(0x6fdf16);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6fdf19:{NFSU2_TR(0x6fdf19);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fdee9u);}goto L6fdee9;}}
}
B6fdf1b:L6fdf1b:{c.instructions+=6;NFSU2_TR(0x6fdf1b);
u8 U[2];
__builtin_memmove((U+0),(R+28),2);
s2(u32(r4(R+4)),r2(U+0));
}
B6fdf1e:{NFSU2_TR(0x6fdf1e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6fdf1f:{NFSU2_TR(0x6fdf1f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6fdf20:{NFSU2_TR(0x6fdf20);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x6ull))));
}
B6fdf23:{NFSU2_TR(0x6fdf23);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x6ull))));
}
B6fdf26:{NFSU2_TR(0x6fdf26);
{goto L6fdf33;}
}
B6fdf28:L6fdf28:{c.instructions+=6;NFSU2_TR(0x6fdf28);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w2(R+0,u16(r1(U+0)));
}
B6fdf2c:{NFSU2_TR(0x6fdf2c);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+4)),r2(U+0));
}
B6fdf2f:{NFSU2_TR(0x6fdf2f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6fdf30:{NFSU2_TR(0x6fdf30);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6fdf31:{NFSU2_TR(0x6fdf31);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6fdf32:{NFSU2_TR(0x6fdf32);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B6fdf33:L6fdf33:{c.instructions+=2;NFSU2_TR(0x6fdf33);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6fdf36:{NFSU2_TR(0x6fdf36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fded9u);}goto L6fded9;}}
}
B6fdf38:L6fdf38:{c.instructions+=2;NFSU2_TR(0x6fdf38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fdf39:{NFSU2_TR(0x6fdf39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fdf3a:L6fdf3a:{c.instructions+=4;NFSU2_TR(0x6fdf3a);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w2(U+0,u16(u32(r2(U+0))&u32(u16(0x0ull))));
s2(u32(r4(R+4)),r2(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w1(R+519,u8(s16(r2(U+0))<s16(u16(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w2(U+2,u16(u32(r2(U+0))&u32(u16(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r2(U+2)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fdf3e:{NFSU2_TR(0x6fdf3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fdf3f:{NFSU2_TR(0x6fdf3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fdf40:{NFSU2_TR(0x6fdf40);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fdf41:L6fdf41:{c.instructions+=6;NFSU2_TR(0x6fdf41);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdf42:{NFSU2_TR(0x6fdf42);
__builtin_memmove((R+20),(R+16),4);
}
B6fdf44:{NFSU2_TR(0x6fdf44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fdf47:{NFSU2_TR(0x6fdf47);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fdf49:{NFSU2_TR(0x6fdf49);
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
B6fdf4b:{NFSU2_TR(0x6fdf4b);
if(r1(R+518)){{goto L6fdf58;}}
}
B6fdf4d:L6fdf4d:{c.instructions+=1;NFSU2_TR(0x6fdf4d);
{goto L6fdf52;}
}
B6fdf4f:L6fdf4f:{c.instructions+=3;NFSU2_TR(0x6fdf4f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6fdf50:{NFSU2_TR(0x6fdf50);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6fdf51:{NFSU2_TR(0x6fdf51);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fdf52:L6fdf52:{c.instructions+=2;NFSU2_TR(0x6fdf52);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((U+6),(U+0),2);
w1(R+512,u8((r2(U+6))<(u16(0x0ull))));
w1(R+523,sborrow<u16>(r2(U+6),u16(0x0ull)));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+519,u8(s16(r2(U+8))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
w2(U+2,u16(u32(r2(U+8))&u32(u16(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r2(U+2)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fdf56:{NFSU2_TR(0x6fdf56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fdf4fu);}goto L6fdf4f;}}
}
B6fdf58:L6fdf58:{c.instructions+=2;NFSU2_TR(0x6fdf58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fdf59:{NFSU2_TR(0x6fdf59);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fdf5a:L6fdf5a:{c.instructions+=7;NFSU2_TR(0x6fdf5a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdf5b:{NFSU2_TR(0x6fdf5b);
__builtin_memmove((R+20),(R+16),4);
}
B6fdf5d:{NFSU2_TR(0x6fdf5d);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B6fdf61:{NFSU2_TR(0x6fdf61);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdf62:{NFSU2_TR(0x6fdf62);
__builtin_memmove((R+24),(R+4),4);
}
B6fdf64:{NFSU2_TR(0x6fdf64);
u8 U[4];
w4(U+0,u32(0x7c32f8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6fdf6a:{NFSU2_TR(0x6fdf6a);
if(r1(R+518)){{goto L6fdf73;}}
}
B6fdf6c:L6fdf6c:{c.instructions+=2;NFSU2_TR(0x6fdf6c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdf6d:{NFSU2_TR(0x6fdf6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fdf72ull));
TAIL_STATIC(0x575630u,575);
}
B6fdf72:L6fdf72:{c.instructions+=1;NFSU2_TR(0x6fdf72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fdf73:L6fdf73:{c.instructions+=4;NFSU2_TR(0x6fdf73);
__builtin_memmove((R+0),(R+24),4);
}
B6fdf75:{NFSU2_TR(0x6fdf75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fdf76:{NFSU2_TR(0x6fdf76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fdf77:{NFSU2_TR(0x6fdf77);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fdfb9:L6fdfb9:{c.instructions+=4;NFSU2_TR(0x6fdfb9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdfba:{NFSU2_TR(0x6fdfba);
__builtin_memmove((R+24),(R+4),4);
}
B6fdfbc:{NFSU2_TR(0x6fdfbc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdfbe:{NFSU2_TR(0x6fdfbe);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fdfc1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fdfc1:L6fdfc1:{c.instructions+=2;NFSU2_TR(0x6fdfc1);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdfc3:{NFSU2_TR(0x6fdfc3);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fdfc6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fdfc6:L6fdfc6:{c.instructions+=4;NFSU2_TR(0x6fdfc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fdfc7:{NFSU2_TR(0x6fdfc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fdfc8:{NFSU2_TR(0x6fdfc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fdfc9:{NFSU2_TR(0x6fdfc9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fdfca:L6fdfca:{c.instructions+=6;NFSU2_TR(0x6fdfca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fdfcb:{NFSU2_TR(0x6fdfcb);
__builtin_memmove((R+24),(R+4),4);
}
B6fdfcd:{NFSU2_TR(0x6fdfcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fdfd0:{NFSU2_TR(0x6fdfd0);
u8 U[4];
w4(U+0,u32(0x7c3368ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6fdfd6:{NFSU2_TR(0x6fdfd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fdfd8:{NFSU2_TR(0x6fdfd8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fdfdbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fdfdb:L6fdfdb:{c.instructions+=3;NFSU2_TR(0x6fdfdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fdfde:{NFSU2_TR(0x6fdfde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fdfe0:{NFSU2_TR(0x6fdfe0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fdfe3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fdfe3:L6fdfe3:{c.instructions+=3;NFSU2_TR(0x6fdfe3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fdfe6:{NFSU2_TR(0x6fdfe6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fdfe8:{NFSU2_TR(0x6fdfe8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fdfebull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fdfeb:L6fdfeb:{c.instructions+=3;NFSU2_TR(0x6fdfeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fdfee:{NFSU2_TR(0x6fdfee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fdff0:{NFSU2_TR(0x6fdff0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fdff3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fdff3:L6fdff3:{c.instructions+=3;NFSU2_TR(0x6fdff3);
u8 U[4];
w4(U+0,u32(0x7c32f8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6fdff9:{NFSU2_TR(0x6fdff9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fdffa:{NFSU2_TR(0x6fdffa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fdffb:L6fdffb:{c.instructions+=2;NFSU2_TR(0x6fdffb);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
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
B6fdffe:{NFSU2_TR(0x6fdffe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
TAIL_STATIC(0x6fe001u,6fe);
}
XIT:NFSU2_TR_EXIT(0x6fd,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
