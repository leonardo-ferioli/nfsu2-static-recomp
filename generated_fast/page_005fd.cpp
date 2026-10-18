#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_431(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_4fe(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_581(u8* __restrict R,Cpu& c);
u32 body_582(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_59f(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5ea(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_5ef(u8* __restrict R,Cpu& c);
u32 body_5f8(u8* __restrict R,Cpu& c);
u32 body_5f9(u8* __restrict R,Cpu& c);
u32 body_5fe(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5fd,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5fd,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5fd(u8* __restrict R,Cpu& c);
u32 page_5fd(Cpu& c){return body_5fd(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5fd(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5fd002:goto L5fd002;
case 0x5fd004:c.instructions+=3;goto B5fd004;
case 0x5fd005:c.instructions+=2;goto B5fd005;
case 0x5fd007:c.instructions+=1;goto B5fd007;
case 0x5fd00c:goto L5fd00c;
case 0x5fd00f:c.instructions+=4;goto B5fd00f;
case 0x5fd011:c.instructions+=3;goto B5fd011;
case 0x5fd012:c.instructions+=2;goto B5fd012;
case 0x5fd014:c.instructions+=1;goto B5fd014;
case 0x5fd019:goto L5fd019;
case 0x5fd01c:c.instructions+=6;goto B5fd01c;
case 0x5fd01f:c.instructions+=5;goto B5fd01f;
case 0x5fd026:c.instructions+=4;goto B5fd026;
case 0x5fd028:c.instructions+=3;goto B5fd028;
case 0x5fd029:c.instructions+=2;goto B5fd029;
case 0x5fd02b:c.instructions+=1;goto B5fd02b;
case 0x5fd030:goto L5fd030;
case 0x5fd032:c.instructions+=2;goto B5fd032;
case 0x5fd037:c.instructions+=1;goto B5fd037;
case 0x5fd039:goto L5fd039;
case 0x5fd03b:c.instructions+=1;goto B5fd03b;
case 0x5fd03d:goto L5fd03d;
case 0x5fd040:c.instructions+=3;goto B5fd040;
case 0x5fd043:c.instructions+=2;goto B5fd043;
case 0x5fd049:c.instructions+=1;goto B5fd049;
case 0x5fd04b:goto L5fd04b;
case 0x5fd04e:c.instructions+=5;goto B5fd04e;
case 0x5fd052:c.instructions+=4;goto B5fd052;
case 0x5fd059:c.instructions+=3;goto B5fd059;
case 0x5fd05b:c.instructions+=2;goto B5fd05b;
case 0x5fd05e:c.instructions+=1;goto B5fd05e;
case 0x5fd060:goto L5fd060;
case 0x5fd063:c.instructions+=1;goto B5fd063;
case 0x5fd065:goto L5fd065;
case 0x5fd067:c.instructions+=1;goto B5fd067;
case 0x5fd069:goto L5fd069;
case 0x5fd06c:c.instructions+=1;goto B5fd06c;
case 0x5fd06e:goto L5fd06e;
case 0x5fd071:c.instructions+=1;goto B5fd071;
case 0x5fd073:goto L5fd073;
case 0x5fd07a:c.instructions+=1;goto B5fd07a;
case 0x5fd07c:goto L5fd07c;
case 0x5fd07f:c.instructions+=1;goto B5fd07f;
case 0x5fd081:goto L5fd081;
case 0x5fd083:c.instructions+=1;goto B5fd083;
case 0x5fd088:goto L5fd088;
case 0x5fd08d:c.instructions+=2;goto B5fd08d;
case 0x5fd08f:c.instructions+=1;goto B5fd08f;
case 0x5fd091:goto L5fd091;
case 0x5fd096:c.instructions+=2;goto B5fd096;
case 0x5fd098:c.instructions+=1;goto B5fd098;
case 0x5fd09a:goto L5fd09a;
case 0x5fd09d:c.instructions+=2;goto B5fd09d;
case 0x5fd0a1:c.instructions+=1;goto B5fd0a1;
case 0x5fd0a3:goto L5fd0a3;
case 0x5fd0a6:c.instructions+=8;goto B5fd0a6;
case 0x5fd0a9:c.instructions+=7;goto B5fd0a9;
case 0x5fd0ac:c.instructions+=6;goto B5fd0ac;
case 0x5fd0b0:c.instructions+=5;goto B5fd0b0;
case 0x5fd0b4:c.instructions+=4;goto B5fd0b4;
case 0x5fd0ba:c.instructions+=3;goto B5fd0ba;
case 0x5fd0bc:c.instructions+=2;goto B5fd0bc;
case 0x5fd0bf:c.instructions+=1;goto B5fd0bf;
case 0x5fd0c1:goto L5fd0c1;
case 0x5fd0c5:c.instructions+=5;goto B5fd0c5;
case 0x5fd0cb:c.instructions+=4;goto B5fd0cb;
case 0x5fd0cf:c.instructions+=3;goto B5fd0cf;
case 0x5fd0d1:c.instructions+=2;goto B5fd0d1;
case 0x5fd0d4:c.instructions+=1;goto B5fd0d4;
case 0x5fd0d6:goto L5fd0d6;
case 0x5fd0d8:c.instructions+=2;goto B5fd0d8;
case 0x5fd0e0:c.instructions+=1;goto B5fd0e0;
case 0x5fd0e2:goto L5fd0e2;
case 0x5fd0e8:goto L5fd0e8;
case 0x5fd0ec:goto L5fd0ec;
case 0x5fd0f1:c.instructions+=5;goto B5fd0f1;
case 0x5fd0f5:c.instructions+=4;goto B5fd0f5;
case 0x5fd0f6:c.instructions+=3;goto B5fd0f6;
case 0x5fd0f7:c.instructions+=2;goto B5fd0f7;
case 0x5fd0fc:c.instructions+=1;goto B5fd0fc;
case 0x5fd101:goto L5fd101;
case 0x5fd102:c.instructions+=2;goto B5fd102;
case 0x5fd104:c.instructions+=1;goto B5fd104;
case 0x5fd109:goto L5fd109;
case 0x5fd10c:c.instructions+=2;goto B5fd10c;
case 0x5fd10f:c.instructions+=1;goto B5fd10f;
case 0x5fd115:goto L5fd115;
case 0x5fd118:c.instructions+=8;goto B5fd118;
case 0x5fd11b:c.instructions+=7;goto B5fd11b;
case 0x5fd121:c.instructions+=6;goto B5fd121;
case 0x5fd122:c.instructions+=5;goto B5fd122;
case 0x5fd124:c.instructions+=4;goto B5fd124;
case 0x5fd125:c.instructions+=3;goto B5fd125;
case 0x5fd12a:c.instructions+=2;goto B5fd12a;
case 0x5fd12e:c.instructions+=1;goto B5fd12e;
case 0x5fd133:goto L5fd133;
case 0x5fd134:c.instructions+=2;goto B5fd134;
case 0x5fd136:c.instructions+=1;goto B5fd136;
case 0x5fd13b:goto L5fd13b;
case 0x5fd13e:c.instructions+=8;goto B5fd13e;
case 0x5fd141:c.instructions+=7;goto B5fd141;
case 0x5fd147:c.instructions+=6;goto B5fd147;
case 0x5fd149:c.instructions+=5;goto B5fd149;
case 0x5fd14a:c.instructions+=4;goto B5fd14a;
case 0x5fd14e:c.instructions+=3;goto B5fd14e;
case 0x5fd14f:c.instructions+=2;goto B5fd14f;
case 0x5fd154:c.instructions+=1;goto B5fd154;
case 0x5fd159:goto L5fd159;
case 0x5fd15a:c.instructions+=2;goto B5fd15a;
case 0x5fd15c:c.instructions+=1;goto B5fd15c;
case 0x5fd161:goto L5fd161;
case 0x5fd164:c.instructions+=8;goto B5fd164;
case 0x5fd167:c.instructions+=7;goto B5fd167;
case 0x5fd16c:c.instructions+=6;goto B5fd16c;
case 0x5fd16e:c.instructions+=5;goto B5fd16e;
case 0x5fd16f:c.instructions+=4;goto B5fd16f;
case 0x5fd170:c.instructions+=3;goto B5fd170;
case 0x5fd175:c.instructions+=2;goto B5fd175;
case 0x5fd179:c.instructions+=1;goto B5fd179;
case 0x5fd17e:goto L5fd17e;
case 0x5fd17f:c.instructions+=2;goto B5fd17f;
case 0x5fd181:c.instructions+=1;goto B5fd181;
case 0x5fd186:goto L5fd186;
case 0x5fd189:c.instructions+=8;goto B5fd189;
case 0x5fd18f:c.instructions+=7;goto B5fd18f;
case 0x5fd195:c.instructions+=6;goto B5fd195;
case 0x5fd196:c.instructions+=5;goto B5fd196;
case 0x5fd198:c.instructions+=4;goto B5fd198;
case 0x5fd199:c.instructions+=3;goto B5fd199;
case 0x5fd19e:c.instructions+=2;goto B5fd19e;
case 0x5fd1a2:c.instructions+=1;goto B5fd1a2;
case 0x5fd1a7:goto L5fd1a7;
case 0x5fd1a8:c.instructions+=2;goto B5fd1a8;
case 0x5fd1aa:c.instructions+=1;goto B5fd1aa;
case 0x5fd1af:goto L5fd1af;
case 0x5fd1b2:c.instructions+=8;goto B5fd1b2;
case 0x5fd1b8:c.instructions+=7;goto B5fd1b8;
case 0x5fd1be:c.instructions+=6;goto B5fd1be;
case 0x5fd1c0:c.instructions+=5;goto B5fd1c0;
case 0x5fd1c1:c.instructions+=4;goto B5fd1c1;
case 0x5fd1c5:c.instructions+=3;goto B5fd1c5;
case 0x5fd1c6:c.instructions+=2;goto B5fd1c6;
case 0x5fd1cb:c.instructions+=1;goto B5fd1cb;
case 0x5fd1d0:goto L5fd1d0;
case 0x5fd1d1:c.instructions+=2;goto B5fd1d1;
case 0x5fd1d3:c.instructions+=1;goto B5fd1d3;
case 0x5fd1d8:goto L5fd1d8;
case 0x5fd1db:c.instructions+=8;goto B5fd1db;
case 0x5fd1e1:c.instructions+=7;goto B5fd1e1;
case 0x5fd1e6:c.instructions+=6;goto B5fd1e6;
case 0x5fd1e8:c.instructions+=5;goto B5fd1e8;
case 0x5fd1e9:c.instructions+=4;goto B5fd1e9;
case 0x5fd1ea:c.instructions+=3;goto B5fd1ea;
case 0x5fd1ef:c.instructions+=2;goto B5fd1ef;
case 0x5fd1f3:c.instructions+=1;goto B5fd1f3;
case 0x5fd1f8:goto L5fd1f8;
case 0x5fd1f9:c.instructions+=2;goto B5fd1f9;
case 0x5fd1fb:c.instructions+=1;goto B5fd1fb;
case 0x5fd200:goto L5fd200;
case 0x5fd206:c.instructions+=6;goto B5fd206;
case 0x5fd209:c.instructions+=5;goto B5fd209;
case 0x5fd20f:c.instructions+=4;goto B5fd20f;
case 0x5fd210:c.instructions+=3;goto B5fd210;
case 0x5fd211:c.instructions+=2;goto B5fd211;
case 0x5fd216:c.instructions+=1;goto B5fd216;
case 0x5fd21b:goto L5fd21b;
case 0x5fd21c:c.instructions+=2;goto B5fd21c;
case 0x5fd21e:c.instructions+=1;goto B5fd21e;
case 0x5fd223:goto L5fd223;
case 0x5fd226:c.instructions+=1;goto B5fd226;
case 0x5fd228:goto L5fd228;
case 0x5fd22d:c.instructions+=1;goto B5fd22d;
case 0x5fd230:goto L5fd230;
case 0x5fd233:c.instructions+=9;goto B5fd233;
case 0x5fd236:c.instructions+=8;goto B5fd236;
case 0x5fd239:c.instructions+=7;goto B5fd239;
case 0x5fd23f:c.instructions+=6;goto B5fd23f;
case 0x5fd243:c.instructions+=5;goto B5fd243;
case 0x5fd244:c.instructions+=4;goto B5fd244;
case 0x5fd248:c.instructions+=3;goto B5fd248;
case 0x5fd249:c.instructions+=2;goto B5fd249;
case 0x5fd24e:c.instructions+=1;goto B5fd24e;
case 0x5fd253:goto L5fd253;
case 0x5fd254:c.instructions+=2;goto B5fd254;
case 0x5fd256:c.instructions+=1;goto B5fd256;
case 0x5fd25b:goto L5fd25b;
case 0x5fd25e:c.instructions+=2;goto B5fd25e;
case 0x5fd264:c.instructions+=1;goto B5fd264;
case 0x5fd266:goto L5fd266;
case 0x5fd26a:c.instructions+=1;goto B5fd26a;
case 0x5fd270:goto L5fd270;
case 0x5fd273:c.instructions+=6;goto B5fd273;
case 0x5fd276:c.instructions+=5;goto B5fd276;
case 0x5fd27d:c.instructions+=4;goto B5fd27d;
case 0x5fd27f:c.instructions+=3;goto B5fd27f;
case 0x5fd280:c.instructions+=2;goto B5fd280;
case 0x5fd282:c.instructions+=1;goto B5fd282;
case 0x5fd287:goto L5fd287;
case 0x5fd28a:c.instructions+=9;goto B5fd28a;
case 0x5fd28d:c.instructions+=8;goto B5fd28d;
case 0x5fd293:c.instructions+=7;goto B5fd293;
case 0x5fd298:c.instructions+=6;goto B5fd298;
case 0x5fd29a:c.instructions+=5;goto B5fd29a;
case 0x5fd29b:c.instructions+=4;goto B5fd29b;
case 0x5fd29c:c.instructions+=3;goto B5fd29c;
case 0x5fd2a1:c.instructions+=2;goto B5fd2a1;
case 0x5fd2a5:c.instructions+=1;goto B5fd2a5;
case 0x5fd2aa:goto L5fd2aa;
case 0x5fd2ab:c.instructions+=2;goto B5fd2ab;
case 0x5fd2ad:c.instructions+=1;goto B5fd2ad;
case 0x5fd2b2:goto L5fd2b2;
case 0x5fd2b5:c.instructions+=9;goto B5fd2b5;
case 0x5fd2b8:c.instructions+=8;goto B5fd2b8;
case 0x5fd2be:c.instructions+=7;goto B5fd2be;
case 0x5fd2c4:c.instructions+=6;goto B5fd2c4;
case 0x5fd2c6:c.instructions+=5;goto B5fd2c6;
case 0x5fd2c7:c.instructions+=4;goto B5fd2c7;
case 0x5fd2cb:c.instructions+=3;goto B5fd2cb;
case 0x5fd2cc:c.instructions+=2;goto B5fd2cc;
case 0x5fd2d1:c.instructions+=1;goto B5fd2d1;
case 0x5fd2d6:goto L5fd2d6;
case 0x5fd2d7:c.instructions+=2;goto B5fd2d7;
case 0x5fd2d9:c.instructions+=1;goto B5fd2d9;
case 0x5fd2de:goto L5fd2de;
case 0x5fd2e1:c.instructions+=9;goto B5fd2e1;
case 0x5fd2e4:c.instructions+=8;goto B5fd2e4;
case 0x5fd2ea:c.instructions+=7;goto B5fd2ea;
case 0x5fd2f0:c.instructions+=6;goto B5fd2f0;
case 0x5fd2f1:c.instructions+=5;goto B5fd2f1;
case 0x5fd2f3:c.instructions+=4;goto B5fd2f3;
case 0x5fd2f4:c.instructions+=3;goto B5fd2f4;
case 0x5fd2f9:c.instructions+=2;goto B5fd2f9;
case 0x5fd2fd:c.instructions+=1;goto B5fd2fd;
case 0x5fd302:goto L5fd302;
case 0x5fd303:c.instructions+=2;goto B5fd303;
case 0x5fd305:c.instructions+=1;goto B5fd305;
case 0x5fd30a:goto L5fd30a;
case 0x5fd310:c.instructions+=4;goto B5fd310;
case 0x5fd316:c.instructions+=3;goto B5fd316;
case 0x5fd318:c.instructions+=2;goto B5fd318;
case 0x5fd31b:c.instructions+=1;goto B5fd31b;
case 0x5fd31d:goto L5fd31d;
case 0x5fd322:c.instructions+=2;goto B5fd322;
case 0x5fd326:c.instructions+=1;goto B5fd326;
case 0x5fd328:goto L5fd328;
case 0x5fd32b:c.instructions+=2;goto B5fd32b;
case 0x5fd331:c.instructions+=1;goto B5fd331;
case 0x5fd335:goto L5fd335;
case 0x5fd33a:c.instructions+=5;goto B5fd33a;
case 0x5fd33e:c.instructions+=4;goto B5fd33e;
case 0x5fd33f:c.instructions+=3;goto B5fd33f;
case 0x5fd340:c.instructions+=2;goto B5fd340;
case 0x5fd345:c.instructions+=1;goto B5fd345;
case 0x5fd34a:goto L5fd34a;
case 0x5fd34b:c.instructions+=2;goto B5fd34b;
case 0x5fd34d:c.instructions+=1;goto B5fd34d;
case 0x5fd352:goto L5fd352;
case 0x5fd353:c.instructions+=5;goto B5fd353;
case 0x5fd354:c.instructions+=4;goto B5fd354;
case 0x5fd355:c.instructions+=3;goto B5fd355;
case 0x5fd357:c.instructions+=2;goto B5fd357;
case 0x5fd358:c.instructions+=1;goto B5fd358;
case 0x5fd360:goto L5fd360;
case 0x5fd366:c.instructions+=8;goto B5fd366;
case 0x5fd367:c.instructions+=7;goto B5fd367;
case 0x5fd369:c.instructions+=6;goto B5fd369;
case 0x5fd36f:c.instructions+=5;goto B5fd36f;
case 0x5fd375:c.instructions+=4;goto B5fd375;
case 0x5fd379:c.instructions+=3;goto B5fd379;
case 0x5fd37b:c.instructions+=2;goto B5fd37b;
case 0x5fd37e:c.instructions+=1;goto B5fd37e;
case 0x5fd384:goto L5fd384;
case 0x5fd38a:c.instructions+=13;goto B5fd38a;
case 0x5fd38e:c.instructions+=12;goto B5fd38e;
case 0x5fd38f:c.instructions+=11;goto B5fd38f;
case 0x5fd395:c.instructions+=10;goto B5fd395;
case 0x5fd39b:c.instructions+=9;goto B5fd39b;
case 0x5fd3a1:c.instructions+=8;goto B5fd3a1;
case 0x5fd3a2:c.instructions+=7;goto B5fd3a2;
case 0x5fd3a3:c.instructions+=6;goto B5fd3a3;
case 0x5fd3a9:c.instructions+=5;goto B5fd3a9;
case 0x5fd3aa:c.instructions+=4;goto B5fd3aa;
case 0x5fd3ae:c.instructions+=3;goto B5fd3ae;
case 0x5fd3b4:c.instructions+=2;goto B5fd3b4;
case 0x5fd3ba:c.instructions+=1;goto B5fd3ba;
case 0x5fd3bf:goto L5fd3bf;
case 0x5fd3c3:c.instructions+=6;goto B5fd3c3;
case 0x5fd3c7:c.instructions+=5;goto B5fd3c7;
case 0x5fd3c8:c.instructions+=4;goto B5fd3c8;
case 0x5fd3ce:c.instructions+=3;goto B5fd3ce;
case 0x5fd3d1:c.instructions+=2;goto B5fd3d1;
case 0x5fd3d7:c.instructions+=1;goto B5fd3d7;
case 0x5fd3dc:goto L5fd3dc;
case 0x5fd3e0:c.instructions+=4;goto B5fd3e0;
case 0x5fd3e4:c.instructions+=3;goto B5fd3e4;
case 0x5fd3e6:c.instructions+=2;goto B5fd3e6;
case 0x5fd3e8:c.instructions+=1;goto B5fd3e8;
case 0x5fd3ee:goto L5fd3ee;
case 0x5fd3f4:c.instructions+=6;goto B5fd3f4;
case 0x5fd3f5:c.instructions+=5;goto B5fd3f5;
case 0x5fd3f9:c.instructions+=4;goto B5fd3f9;
case 0x5fd3fa:c.instructions+=3;goto B5fd3fa;
case 0x5fd3fc:c.instructions+=2;goto B5fd3fc;
case 0x5fd400:c.instructions+=1;goto B5fd400;
case 0x5fd405:goto L5fd405;
case 0x5fd409:c.instructions+=3;goto B5fd409;
case 0x5fd40a:c.instructions+=2;goto B5fd40a;
case 0x5fd40f:c.instructions+=1;goto B5fd40f;
case 0x5fd414:goto L5fd414;
case 0x5fd417:c.instructions+=7;goto B5fd417;
case 0x5fd41d:c.instructions+=6;goto B5fd41d;
case 0x5fd41e:c.instructions+=5;goto B5fd41e;
case 0x5fd422:c.instructions+=4;goto B5fd422;
case 0x5fd423:c.instructions+=3;goto B5fd423;
case 0x5fd425:c.instructions+=2;goto B5fd425;
case 0x5fd429:c.instructions+=1;goto B5fd429;
case 0x5fd42e:goto L5fd42e;
case 0x5fd432:c.instructions+=3;goto B5fd432;
case 0x5fd433:c.instructions+=2;goto B5fd433;
case 0x5fd438:c.instructions+=1;goto B5fd438;
case 0x5fd43d:goto L5fd43d;
case 0x5fd440:c.instructions+=7;goto B5fd440;
case 0x5fd446:c.instructions+=6;goto B5fd446;
case 0x5fd447:c.instructions+=5;goto B5fd447;
case 0x5fd44b:c.instructions+=4;goto B5fd44b;
case 0x5fd44c:c.instructions+=3;goto B5fd44c;
case 0x5fd44e:c.instructions+=2;goto B5fd44e;
case 0x5fd452:c.instructions+=1;goto B5fd452;
case 0x5fd457:goto L5fd457;
case 0x5fd45b:c.instructions+=3;goto B5fd45b;
case 0x5fd45c:c.instructions+=2;goto B5fd45c;
case 0x5fd461:c.instructions+=1;goto B5fd461;
case 0x5fd466:goto L5fd466;
case 0x5fd469:c.instructions+=7;goto B5fd469;
case 0x5fd46f:c.instructions+=6;goto B5fd46f;
case 0x5fd470:c.instructions+=5;goto B5fd470;
case 0x5fd474:c.instructions+=4;goto B5fd474;
case 0x5fd475:c.instructions+=3;goto B5fd475;
case 0x5fd477:c.instructions+=2;goto B5fd477;
case 0x5fd47b:c.instructions+=1;goto B5fd47b;
case 0x5fd480:goto L5fd480;
case 0x5fd484:c.instructions+=3;goto B5fd484;
case 0x5fd485:c.instructions+=2;goto B5fd485;
case 0x5fd48a:c.instructions+=1;goto B5fd48a;
case 0x5fd48f:goto L5fd48f;
case 0x5fd492:c.instructions+=7;goto B5fd492;
case 0x5fd498:c.instructions+=6;goto B5fd498;
case 0x5fd499:c.instructions+=5;goto B5fd499;
case 0x5fd49d:c.instructions+=4;goto B5fd49d;
case 0x5fd49e:c.instructions+=3;goto B5fd49e;
case 0x5fd4a0:c.instructions+=2;goto B5fd4a0;
case 0x5fd4a4:c.instructions+=1;goto B5fd4a4;
case 0x5fd4a9:goto L5fd4a9;
case 0x5fd4ad:c.instructions+=3;goto B5fd4ad;
case 0x5fd4ae:c.instructions+=2;goto B5fd4ae;
case 0x5fd4b3:c.instructions+=1;goto B5fd4b3;
case 0x5fd4b8:goto L5fd4b8;
case 0x5fd4bb:c.instructions+=7;goto B5fd4bb;
case 0x5fd4c1:c.instructions+=6;goto B5fd4c1;
case 0x5fd4c2:c.instructions+=5;goto B5fd4c2;
case 0x5fd4c6:c.instructions+=4;goto B5fd4c6;
case 0x5fd4c7:c.instructions+=3;goto B5fd4c7;
case 0x5fd4c9:c.instructions+=2;goto B5fd4c9;
case 0x5fd4cd:c.instructions+=1;goto B5fd4cd;
case 0x5fd4d2:goto L5fd4d2;
case 0x5fd4d6:c.instructions+=3;goto B5fd4d6;
case 0x5fd4d7:c.instructions+=2;goto B5fd4d7;
case 0x5fd4dc:c.instructions+=1;goto B5fd4dc;
case 0x5fd4e1:goto L5fd4e1;
case 0x5fd4e4:c.instructions+=7;goto B5fd4e4;
case 0x5fd4ea:c.instructions+=6;goto B5fd4ea;
case 0x5fd4eb:c.instructions+=5;goto B5fd4eb;
case 0x5fd4ef:c.instructions+=4;goto B5fd4ef;
case 0x5fd4f0:c.instructions+=3;goto B5fd4f0;
case 0x5fd4f2:c.instructions+=2;goto B5fd4f2;
case 0x5fd4f6:c.instructions+=1;goto B5fd4f6;
case 0x5fd4fb:goto L5fd4fb;
case 0x5fd4ff:c.instructions+=3;goto B5fd4ff;
case 0x5fd500:c.instructions+=2;goto B5fd500;
case 0x5fd505:c.instructions+=1;goto B5fd505;
case 0x5fd50a:goto L5fd50a;
case 0x5fd50d:c.instructions+=7;goto B5fd50d;
case 0x5fd513:c.instructions+=6;goto B5fd513;
case 0x5fd514:c.instructions+=5;goto B5fd514;
case 0x5fd518:c.instructions+=4;goto B5fd518;
case 0x5fd519:c.instructions+=3;goto B5fd519;
case 0x5fd51b:c.instructions+=2;goto B5fd51b;
case 0x5fd51f:c.instructions+=1;goto B5fd51f;
case 0x5fd524:goto L5fd524;
case 0x5fd528:c.instructions+=3;goto B5fd528;
case 0x5fd529:c.instructions+=2;goto B5fd529;
case 0x5fd52e:c.instructions+=1;goto B5fd52e;
case 0x5fd533:goto L5fd533;
case 0x5fd536:c.instructions+=7;goto B5fd536;
case 0x5fd53c:c.instructions+=6;goto B5fd53c;
case 0x5fd53d:c.instructions+=5;goto B5fd53d;
case 0x5fd541:c.instructions+=4;goto B5fd541;
case 0x5fd542:c.instructions+=3;goto B5fd542;
case 0x5fd544:c.instructions+=2;goto B5fd544;
case 0x5fd548:c.instructions+=1;goto B5fd548;
case 0x5fd54d:goto L5fd54d;
case 0x5fd551:c.instructions+=3;goto B5fd551;
case 0x5fd552:c.instructions+=2;goto B5fd552;
case 0x5fd557:c.instructions+=1;goto B5fd557;
case 0x5fd55c:goto L5fd55c;
case 0x5fd55f:c.instructions+=7;goto B5fd55f;
case 0x5fd565:c.instructions+=6;goto B5fd565;
case 0x5fd566:c.instructions+=5;goto B5fd566;
case 0x5fd56a:c.instructions+=4;goto B5fd56a;
case 0x5fd56b:c.instructions+=3;goto B5fd56b;
case 0x5fd56d:c.instructions+=2;goto B5fd56d;
case 0x5fd571:c.instructions+=1;goto B5fd571;
case 0x5fd576:goto L5fd576;
case 0x5fd57a:c.instructions+=3;goto B5fd57a;
case 0x5fd57b:c.instructions+=2;goto B5fd57b;
case 0x5fd580:c.instructions+=1;goto B5fd580;
case 0x5fd585:goto L5fd585;
case 0x5fd588:c.instructions+=7;goto B5fd588;
case 0x5fd58e:c.instructions+=6;goto B5fd58e;
case 0x5fd58f:c.instructions+=5;goto B5fd58f;
case 0x5fd593:c.instructions+=4;goto B5fd593;
case 0x5fd594:c.instructions+=3;goto B5fd594;
case 0x5fd596:c.instructions+=2;goto B5fd596;
case 0x5fd59a:c.instructions+=1;goto B5fd59a;
case 0x5fd59f:goto L5fd59f;
case 0x5fd5a3:c.instructions+=3;goto B5fd5a3;
case 0x5fd5a4:c.instructions+=2;goto B5fd5a4;
case 0x5fd5a9:c.instructions+=1;goto B5fd5a9;
case 0x5fd5ae:goto L5fd5ae;
case 0x5fd5b4:c.instructions+=7;goto B5fd5b4;
case 0x5fd5b9:c.instructions+=6;goto B5fd5b9;
case 0x5fd5ba:c.instructions+=5;goto B5fd5ba;
case 0x5fd5be:c.instructions+=4;goto B5fd5be;
case 0x5fd5bf:c.instructions+=3;goto B5fd5bf;
case 0x5fd5c1:c.instructions+=2;goto B5fd5c1;
case 0x5fd5c5:c.instructions+=1;goto B5fd5c5;
case 0x5fd5ca:goto L5fd5ca;
case 0x5fd5ce:c.instructions+=8;goto B5fd5ce;
case 0x5fd5cf:c.instructions+=7;goto B5fd5cf;
case 0x5fd5d3:c.instructions+=6;goto B5fd5d3;
case 0x5fd5d6:c.instructions+=5;goto B5fd5d6;
case 0x5fd5d7:c.instructions+=4;goto B5fd5d7;
case 0x5fd5d9:c.instructions+=3;goto B5fd5d9;
case 0x5fd5df:c.instructions+=2;goto B5fd5df;
case 0x5fd5e3:c.instructions+=1;goto B5fd5e3;
case 0x5fd5e8:goto L5fd5e8;
case 0x5fd5ec:c.instructions+=3;goto B5fd5ec;
case 0x5fd5ef:c.instructions+=2;goto B5fd5ef;
case 0x5fd5f1:c.instructions+=1;goto B5fd5f1;
case 0x5fd5f3:goto L5fd5f3;
case 0x5fd5f8:goto L5fd5f8;
case 0x5fd5fa:c.instructions+=1;goto B5fd5fa;
case 0x5fd5fc:goto L5fd5fc;
case 0x5fd5fd:c.instructions+=2;goto B5fd5fd;
case 0x5fd5ff:c.instructions+=1;goto B5fd5ff;
case 0x5fd604:goto L5fd604;
case 0x5fd60b:c.instructions+=1;goto B5fd60b;
case 0x5fd60d:goto L5fd60d;
case 0x5fd612:goto L5fd612;
case 0x5fd614:c.instructions+=1;goto B5fd614;
case 0x5fd616:goto L5fd616;
case 0x5fd61c:c.instructions+=1;goto B5fd61c;
case 0x5fd622:goto L5fd622;
case 0x5fd623:c.instructions+=5;goto B5fd623;
case 0x5fd627:c.instructions+=4;goto B5fd627;
case 0x5fd628:c.instructions+=3;goto B5fd628;
case 0x5fd62a:c.instructions+=2;goto B5fd62a;
case 0x5fd62e:c.instructions+=1;goto B5fd62e;
case 0x5fd633:goto L5fd633;
case 0x5fd637:c.instructions+=8;goto B5fd637;
case 0x5fd638:c.instructions+=7;goto B5fd638;
case 0x5fd63c:c.instructions+=6;goto B5fd63c;
case 0x5fd63f:c.instructions+=5;goto B5fd63f;
case 0x5fd640:c.instructions+=4;goto B5fd640;
case 0x5fd642:c.instructions+=3;goto B5fd642;
case 0x5fd648:c.instructions+=2;goto B5fd648;
case 0x5fd64c:c.instructions+=1;goto B5fd64c;
case 0x5fd651:goto L5fd651;
case 0x5fd655:c.instructions+=8;goto B5fd655;
case 0x5fd658:c.instructions+=7;goto B5fd658;
case 0x5fd659:c.instructions+=6;goto B5fd659;
case 0x5fd65d:c.instructions+=5;goto B5fd65d;
case 0x5fd663:c.instructions+=4;goto B5fd663;
case 0x5fd664:c.instructions+=3;goto B5fd664;
case 0x5fd666:c.instructions+=2;goto B5fd666;
case 0x5fd66a:c.instructions+=1;goto B5fd66a;
case 0x5fd66f:goto L5fd66f;
case 0x5fd673:c.instructions+=6;goto B5fd673;
case 0x5fd679:c.instructions+=5;goto B5fd679;
case 0x5fd67b:c.instructions+=4;goto B5fd67b;
case 0x5fd67e:c.instructions+=3;goto B5fd67e;
case 0x5fd680:c.instructions+=2;goto B5fd680;
case 0x5fd686:c.instructions+=1;goto B5fd686;
case 0x5fd688:goto L5fd688;
case 0x5fd68a:c.instructions+=1;goto B5fd68a;
case 0x5fd68c:goto L5fd68c;
case 0x5fd68e:c.instructions+=1;goto B5fd68e;
case 0x5fd690:goto L5fd690;
case 0x5fd693:c.instructions+=3;goto B5fd693;
case 0x5fd697:c.instructions+=2;goto B5fd697;
case 0x5fd69e:c.instructions+=1;goto B5fd69e;
case 0x5fd6a3:goto L5fd6a3;
case 0x5fd6a5:c.instructions+=1;goto B5fd6a5;
case 0x5fd6a7:goto L5fd6a7;
case 0x5fd6a9:c.instructions+=1;goto B5fd6a9;
case 0x5fd6ae:goto L5fd6ae;
case 0x5fd6b4:c.instructions+=1;goto B5fd6b4;
case 0x5fd6b6:goto L5fd6b6;
case 0x5fd6bc:c.instructions+=1;goto B5fd6bc;
case 0x5fd6be:goto L5fd6be;
case 0x5fd6c3:c.instructions+=4;goto B5fd6c3;
case 0x5fd6c9:c.instructions+=3;goto B5fd6c9;
case 0x5fd6ca:c.instructions+=2;goto B5fd6ca;
case 0x5fd6cc:c.instructions+=1;goto B5fd6cc;
case 0x5fd6d1:goto L5fd6d1;
case 0x5fd6d6:c.instructions+=1;goto B5fd6d6;
case 0x5fd6dc:goto L5fd6dc;
case 0x5fd6e2:c.instructions+=6;goto B5fd6e2;
case 0x5fd6e3:c.instructions+=5;goto B5fd6e3;
case 0x5fd6e7:c.instructions+=4;goto B5fd6e7;
case 0x5fd6e8:c.instructions+=3;goto B5fd6e8;
case 0x5fd6ea:c.instructions+=2;goto B5fd6ea;
case 0x5fd6ee:c.instructions+=1;goto B5fd6ee;
case 0x5fd6f3:goto L5fd6f3;
case 0x5fd6f7:c.instructions+=3;goto B5fd6f7;
case 0x5fd6f8:c.instructions+=2;goto B5fd6f8;
case 0x5fd6fd:c.instructions+=1;goto B5fd6fd;
case 0x5fd702:goto L5fd702;
case 0x5fd705:c.instructions+=7;goto B5fd705;
case 0x5fd70b:c.instructions+=6;goto B5fd70b;
case 0x5fd70c:c.instructions+=5;goto B5fd70c;
case 0x5fd710:c.instructions+=4;goto B5fd710;
case 0x5fd711:c.instructions+=3;goto B5fd711;
case 0x5fd713:c.instructions+=2;goto B5fd713;
case 0x5fd717:c.instructions+=1;goto B5fd717;
case 0x5fd71c:goto L5fd71c;
case 0x5fd720:c.instructions+=3;goto B5fd720;
case 0x5fd721:c.instructions+=2;goto B5fd721;
case 0x5fd726:c.instructions+=1;goto B5fd726;
case 0x5fd72b:goto L5fd72b;
case 0x5fd72e:c.instructions+=7;goto B5fd72e;
case 0x5fd734:c.instructions+=6;goto B5fd734;
case 0x5fd735:c.instructions+=5;goto B5fd735;
case 0x5fd739:c.instructions+=4;goto B5fd739;
case 0x5fd73a:c.instructions+=3;goto B5fd73a;
case 0x5fd73c:c.instructions+=2;goto B5fd73c;
case 0x5fd740:c.instructions+=1;goto B5fd740;
case 0x5fd745:goto L5fd745;
case 0x5fd749:c.instructions+=3;goto B5fd749;
case 0x5fd74a:c.instructions+=2;goto B5fd74a;
case 0x5fd74f:c.instructions+=1;goto B5fd74f;
case 0x5fd754:goto L5fd754;
case 0x5fd757:c.instructions+=7;goto B5fd757;
case 0x5fd75d:c.instructions+=6;goto B5fd75d;
case 0x5fd75e:c.instructions+=5;goto B5fd75e;
case 0x5fd762:c.instructions+=4;goto B5fd762;
case 0x5fd763:c.instructions+=3;goto B5fd763;
case 0x5fd765:c.instructions+=2;goto B5fd765;
case 0x5fd769:c.instructions+=1;goto B5fd769;
case 0x5fd76e:goto L5fd76e;
case 0x5fd772:c.instructions+=3;goto B5fd772;
case 0x5fd773:c.instructions+=2;goto B5fd773;
case 0x5fd778:c.instructions+=1;goto B5fd778;
case 0x5fd77d:goto L5fd77d;
case 0x5fd780:c.instructions+=7;goto B5fd780;
case 0x5fd786:c.instructions+=6;goto B5fd786;
case 0x5fd787:c.instructions+=5;goto B5fd787;
case 0x5fd78b:c.instructions+=4;goto B5fd78b;
case 0x5fd78c:c.instructions+=3;goto B5fd78c;
case 0x5fd78e:c.instructions+=2;goto B5fd78e;
case 0x5fd792:c.instructions+=1;goto B5fd792;
case 0x5fd797:goto L5fd797;
case 0x5fd79b:c.instructions+=3;goto B5fd79b;
case 0x5fd79c:c.instructions+=2;goto B5fd79c;
case 0x5fd7a1:c.instructions+=1;goto B5fd7a1;
case 0x5fd7a6:goto L5fd7a6;
case 0x5fd7a9:c.instructions+=7;goto B5fd7a9;
case 0x5fd7af:c.instructions+=6;goto B5fd7af;
case 0x5fd7b0:c.instructions+=5;goto B5fd7b0;
case 0x5fd7b4:c.instructions+=4;goto B5fd7b4;
case 0x5fd7b5:c.instructions+=3;goto B5fd7b5;
case 0x5fd7b7:c.instructions+=2;goto B5fd7b7;
case 0x5fd7bb:c.instructions+=1;goto B5fd7bb;
case 0x5fd7c0:goto L5fd7c0;
case 0x5fd7c4:c.instructions+=3;goto B5fd7c4;
case 0x5fd7c5:c.instructions+=2;goto B5fd7c5;
case 0x5fd7ca:c.instructions+=1;goto B5fd7ca;
case 0x5fd7cf:goto L5fd7cf;
case 0x5fd7d2:c.instructions+=7;goto B5fd7d2;
case 0x5fd7d8:c.instructions+=6;goto B5fd7d8;
case 0x5fd7d9:c.instructions+=5;goto B5fd7d9;
case 0x5fd7dd:c.instructions+=4;goto B5fd7dd;
case 0x5fd7de:c.instructions+=3;goto B5fd7de;
case 0x5fd7e0:c.instructions+=2;goto B5fd7e0;
case 0x5fd7e4:c.instructions+=1;goto B5fd7e4;
case 0x5fd7e9:goto L5fd7e9;
case 0x5fd7ed:c.instructions+=3;goto B5fd7ed;
case 0x5fd7ee:c.instructions+=2;goto B5fd7ee;
case 0x5fd7f3:c.instructions+=1;goto B5fd7f3;
case 0x5fd7f8:goto L5fd7f8;
case 0x5fd7fe:goto L5fd7fe;
case 0x5fd803:c.instructions+=1;goto B5fd803;
case 0x5fd805:goto L5fd805;
case 0x5fd80b:c.instructions+=1;goto B5fd80b;
case 0x5fd813:goto L5fd813;
case 0x5fd819:c.instructions+=6;goto B5fd819;
case 0x5fd81a:c.instructions+=5;goto B5fd81a;
case 0x5fd81e:c.instructions+=4;goto B5fd81e;
case 0x5fd81f:c.instructions+=3;goto B5fd81f;
case 0x5fd821:c.instructions+=2;goto B5fd821;
case 0x5fd825:c.instructions+=1;goto B5fd825;
case 0x5fd82a:goto L5fd82a;
case 0x5fd82e:c.instructions+=3;goto B5fd82e;
case 0x5fd82f:c.instructions+=2;goto B5fd82f;
case 0x5fd834:c.instructions+=1;goto B5fd834;
case 0x5fd839:goto L5fd839;
case 0x5fd83c:c.instructions+=5;goto B5fd83c;
case 0x5fd840:c.instructions+=4;goto B5fd840;
case 0x5fd843:c.instructions+=3;goto B5fd843;
case 0x5fd844:c.instructions+=2;goto B5fd844;
case 0x5fd848:c.instructions+=1;goto B5fd848;
case 0x5fd84a:goto L5fd84a;
case 0x5fd84f:c.instructions+=1;goto B5fd84f;
case 0x5fd855:goto L5fd855;
case 0x5fd857:c.instructions+=5;goto B5fd857;
case 0x5fd85b:c.instructions+=4;goto B5fd85b;
case 0x5fd85c:c.instructions+=3;goto B5fd85c;
case 0x5fd85e:c.instructions+=2;goto B5fd85e;
case 0x5fd862:c.instructions+=1;goto B5fd862;
case 0x5fd867:goto L5fd867;
case 0x5fd86c:c.instructions+=8;goto B5fd86c;
case 0x5fd873:c.instructions+=7;goto B5fd873;
case 0x5fd879:c.instructions+=6;goto B5fd879;
case 0x5fd87a:c.instructions+=5;goto B5fd87a;
case 0x5fd87e:c.instructions+=4;goto B5fd87e;
case 0x5fd87f:c.instructions+=3;goto B5fd87f;
case 0x5fd881:c.instructions+=2;goto B5fd881;
case 0x5fd885:c.instructions+=1;goto B5fd885;
case 0x5fd88a:goto L5fd88a;
case 0x5fd88e:c.instructions+=3;goto B5fd88e;
case 0x5fd88f:c.instructions+=2;goto B5fd88f;
case 0x5fd894:c.instructions+=1;goto B5fd894;
case 0x5fd899:goto L5fd899;
case 0x5fd89f:c.instructions+=7;goto B5fd89f;
case 0x5fd8a5:c.instructions+=6;goto B5fd8a5;
case 0x5fd8a6:c.instructions+=5;goto B5fd8a6;
case 0x5fd8aa:c.instructions+=4;goto B5fd8aa;
case 0x5fd8ab:c.instructions+=3;goto B5fd8ab;
case 0x5fd8ad:c.instructions+=2;goto B5fd8ad;
case 0x5fd8b1:c.instructions+=1;goto B5fd8b1;
case 0x5fd8b6:goto L5fd8b6;
case 0x5fd8ba:c.instructions+=3;goto B5fd8ba;
case 0x5fd8bb:c.instructions+=2;goto B5fd8bb;
case 0x5fd8c0:c.instructions+=1;goto B5fd8c0;
case 0x5fd8c5:goto L5fd8c5;
case 0x5fd8cb:c.instructions+=7;goto B5fd8cb;
case 0x5fd8d1:c.instructions+=6;goto B5fd8d1;
case 0x5fd8d2:c.instructions+=5;goto B5fd8d2;
case 0x5fd8d6:c.instructions+=4;goto B5fd8d6;
case 0x5fd8d7:c.instructions+=3;goto B5fd8d7;
case 0x5fd8d9:c.instructions+=2;goto B5fd8d9;
case 0x5fd8dd:c.instructions+=1;goto B5fd8dd;
case 0x5fd8e2:goto L5fd8e2;
case 0x5fd8e6:c.instructions+=3;goto B5fd8e6;
case 0x5fd8e7:c.instructions+=2;goto B5fd8e7;
case 0x5fd8ec:c.instructions+=1;goto B5fd8ec;
case 0x5fd8f1:goto L5fd8f1;
case 0x5fd8f7:c.instructions+=7;goto B5fd8f7;
case 0x5fd8fd:c.instructions+=6;goto B5fd8fd;
case 0x5fd8fe:c.instructions+=5;goto B5fd8fe;
case 0x5fd902:c.instructions+=4;goto B5fd902;
case 0x5fd903:c.instructions+=3;goto B5fd903;
case 0x5fd905:c.instructions+=2;goto B5fd905;
case 0x5fd909:c.instructions+=1;goto B5fd909;
case 0x5fd90e:goto L5fd90e;
case 0x5fd912:c.instructions+=3;goto B5fd912;
case 0x5fd913:c.instructions+=2;goto B5fd913;
case 0x5fd918:c.instructions+=1;goto B5fd918;
case 0x5fd91d:goto L5fd91d;
case 0x5fd923:goto L5fd923;
case 0x5fd926:c.instructions+=3;goto B5fd926;
case 0x5fd927:c.instructions+=2;goto B5fd927;
case 0x5fd929:c.instructions+=1;goto B5fd929;
case 0x5fd92e:goto L5fd92e;
case 0x5fd92f:c.instructions+=2;goto B5fd92f;
case 0x5fd930:c.instructions+=1;goto B5fd930;
case 0x5fd931:goto L5fd931;
case 0x5fd932:c.instructions+=1;goto B5fd932;
case 0x5fd940:goto L5fd940;
case 0x5fd941:c.instructions+=10;goto B5fd941;
case 0x5fd943:c.instructions+=9;goto B5fd943;
case 0x5fd946:c.instructions+=8;goto B5fd946;
case 0x5fd949:c.instructions+=7;goto B5fd949;
case 0x5fd94e:c.instructions+=6;goto B5fd94e;
case 0x5fd950:c.instructions+=5;goto B5fd950;
case 0x5fd951:c.instructions+=4;goto B5fd951;
case 0x5fd952:c.instructions+=3;goto B5fd952;
case 0x5fd953:c.instructions+=2;goto B5fd953;
case 0x5fd955:c.instructions+=1;goto B5fd955;
case 0x5fd957:goto L5fd957;
case 0x5fd95c:c.instructions+=2;goto B5fd95c;
case 0x5fd95e:c.instructions+=1;goto B5fd95e;
case 0x5fd964:goto L5fd964;
case 0x5fd969:c.instructions+=2;goto B5fd969;
case 0x5fd96b:c.instructions+=1;goto B5fd96b;
case 0x5fd971:goto L5fd971;
case 0x5fd97b:c.instructions+=1;goto B5fd97b;
case 0x5fd97d:goto L5fd97d;
case 0x5fd980:c.instructions+=2;goto B5fd980;
case 0x5fd983:c.instructions+=1;goto B5fd983;
case 0x5fd988:goto L5fd988;
case 0x5fd98e:c.instructions+=9;goto B5fd98e;
case 0x5fd991:c.instructions+=8;goto B5fd991;
case 0x5fd994:c.instructions+=7;goto B5fd994;
case 0x5fd997:c.instructions+=6;goto B5fd997;
case 0x5fd99a:c.instructions+=5;goto B5fd99a;
case 0x5fd99c:c.instructions+=4;goto B5fd99c;
case 0x5fd99e:c.instructions+=3;goto B5fd99e;
case 0x5fd9a4:c.instructions+=2;goto B5fd9a4;
case 0x5fd9aa:c.instructions+=1;goto B5fd9aa;
case 0x5fd9b0:goto L5fd9b0;
case 0x5fd9b3:c.instructions+=3;goto B5fd9b3;
case 0x5fd9b6:c.instructions+=2;goto B5fd9b6;
case 0x5fd9ba:c.instructions+=1;goto B5fd9ba;
case 0x5fd9bc:goto L5fd9bc;
case 0x5fd9c2:c.instructions+=2;goto B5fd9c2;
case 0x5fd9c4:c.instructions+=1;goto B5fd9c4;
case 0x5fd9c6:goto L5fd9c6;
case 0x5fd9c9:c.instructions+=1;goto B5fd9c9;
case 0x5fd9ce:goto L5fd9ce;
case 0x5fd9d0:c.instructions+=3;goto B5fd9d0;
case 0x5fd9d2:c.instructions+=2;goto B5fd9d2;
case 0x5fd9d8:c.instructions+=1;goto B5fd9d8;
case 0x5fd9da:goto L5fd9da;
case 0x5fd9dc:c.instructions+=1;goto B5fd9dc;
case 0x5fd9de:goto L5fd9de;
case 0x5fd9e3:c.instructions+=1;goto B5fd9e3;
case 0x5fd9e5:goto L5fd9e5;
case 0x5fd9eb:c.instructions+=2;goto B5fd9eb;
case 0x5fd9f1:c.instructions+=1;goto B5fd9f1;
case 0x5fd9f3:goto L5fd9f3;
case 0x5fd9f5:c.instructions+=1;goto B5fd9f5;
case 0x5fd9f7:goto L5fd9f7;
case 0x5fd9fc:c.instructions+=1;goto B5fd9fc;
case 0x5fd9fe:goto L5fd9fe;
case 0x5fda04:c.instructions+=1;goto B5fda04;
case 0x5fda06:goto L5fda06;
case 0x5fda08:goto L5fda08;
case 0x5fda0f:c.instructions+=1;goto B5fda0f;
case 0x5fda15:goto L5fda15;
case 0x5fda18:c.instructions+=8;goto B5fda18;
case 0x5fda1c:c.instructions+=7;goto B5fda1c;
case 0x5fda22:c.instructions+=6;goto B5fda22;
case 0x5fda29:c.instructions+=5;goto B5fda29;
case 0x5fda2c:c.instructions+=4;goto B5fda2c;
case 0x5fda2f:c.instructions+=3;goto B5fda2f;
case 0x5fda33:c.instructions+=2;goto B5fda33;
case 0x5fda37:c.instructions+=1;goto B5fda37;
case 0x5fda3c:goto L5fda3c;
case 0x5fda42:c.instructions+=4;goto B5fda42;
case 0x5fda46:c.instructions+=3;goto B5fda46;
case 0x5fda48:c.instructions+=2;goto B5fda48;
case 0x5fda4b:c.instructions+=1;goto B5fda4b;
case 0x5fda4d:goto L5fda4d;
case 0x5fda4f:c.instructions+=2;goto B5fda4f;
case 0x5fda51:c.instructions+=1;goto B5fda51;
case 0x5fda56:goto L5fda56;
case 0x5fda5c:c.instructions+=2;goto B5fda5c;
case 0x5fda5e:c.instructions+=1;goto B5fda5e;
case 0x5fda60:goto L5fda60;
case 0x5fda65:c.instructions+=1;goto B5fda65;
case 0x5fda67:goto L5fda67;
case 0x5fda6c:c.instructions+=10;goto B5fda6c;
case 0x5fda72:c.instructions+=9;goto B5fda72;
case 0x5fda76:c.instructions+=8;goto B5fda76;
case 0x5fda7a:c.instructions+=7;goto B5fda7a;
case 0x5fda80:c.instructions+=6;goto B5fda80;
case 0x5fda86:c.instructions+=5;goto B5fda86;
case 0x5fda8c:c.instructions+=4;goto B5fda8c;
case 0x5fda8e:c.instructions+=3;goto B5fda8e;
case 0x5fda90:c.instructions+=2;goto B5fda90;
case 0x5fda93:c.instructions+=1;goto B5fda93;
case 0x5fda95:goto L5fda95;
case 0x5fda97:c.instructions+=1;goto B5fda97;
case 0x5fda9d:goto L5fda9d;
case 0x5fdaa3:c.instructions+=2;goto B5fdaa3;
case 0x5fdaa9:c.instructions+=1;goto B5fdaa9;
case 0x5fdaaf:goto L5fdaaf;
case 0x5fdab2:c.instructions+=2;goto B5fdab2;
case 0x5fdab5:c.instructions+=1;goto B5fdab5;
case 0x5fdaba:goto L5fdaba;
case 0x5fdabc:c.instructions+=1;goto B5fdabc;
case 0x5fdabe:goto L5fdabe;
case 0x5fdac4:c.instructions+=2;goto B5fdac4;
case 0x5fdac6:c.instructions+=1;goto B5fdac6;
case 0x5fdac8:goto L5fdac8;
case 0x5fdacb:c.instructions+=2;goto B5fdacb;
case 0x5fdace:c.instructions+=1;goto B5fdace;
case 0x5fdad3:goto L5fdad3;
case 0x5fdad9:c.instructions+=5;goto B5fdad9;
case 0x5fdadf:c.instructions+=4;goto B5fdadf;
case 0x5fdae1:c.instructions+=3;goto B5fdae1;
case 0x5fdae3:c.instructions+=2;goto B5fdae3;
case 0x5fdae6:c.instructions+=1;goto B5fdae6;
case 0x5fdae8:goto L5fdae8;
case 0x5fdaea:c.instructions+=2;goto B5fdaea;
case 0x5fdaec:c.instructions+=1;goto B5fdaec;
case 0x5fdaf1:goto L5fdaf1;
case 0x5fdaf6:c.instructions+=2;goto B5fdaf6;
case 0x5fdaf8:c.instructions+=1;goto B5fdaf8;
case 0x5fdafa:goto L5fdafa;
case 0x5fdb00:c.instructions+=1;goto B5fdb00;
case 0x5fdb02:goto L5fdb02;
case 0x5fdb07:c.instructions+=1;goto B5fdb07;
case 0x5fdb0c:goto L5fdb0c;
case 0x5fdb0e:c.instructions+=1;goto B5fdb0e;
case 0x5fdb10:goto L5fdb10;
case 0x5fdb13:c.instructions+=2;goto B5fdb13;
case 0x5fdb16:c.instructions+=1;goto B5fdb16;
case 0x5fdb1b:goto L5fdb1b;
case 0x5fdb21:goto L5fdb21;
case 0x5fdb24:c.instructions+=3;goto B5fdb24;
case 0x5fdb2a:c.instructions+=2;goto B5fdb2a;
case 0x5fdb2c:c.instructions+=1;goto B5fdb2c;
case 0x5fdb2e:goto L5fdb2e;
case 0x5fdb33:c.instructions+=2;goto B5fdb33;
case 0x5fdb39:c.instructions+=1;goto B5fdb39;
case 0x5fdb3b:goto L5fdb3b;
case 0x5fdb3e:c.instructions+=1;goto B5fdb3e;
case 0x5fdb40:goto L5fdb40;
case 0x5fdb46:c.instructions+=1;goto B5fdb46;
case 0x5fdb4c:goto L5fdb4c;
case 0x5fdb4e:c.instructions+=1;goto B5fdb4e;
case 0x5fdb53:goto L5fdb53;
case 0x5fdb55:c.instructions+=1;goto B5fdb55;
case 0x5fdb57:goto L5fdb57;
case 0x5fdb5d:c.instructions+=1;goto B5fdb5d;
case 0x5fdb63:goto L5fdb63;
case 0x5fdb66:c.instructions+=12;goto B5fdb66;
case 0x5fdb69:c.instructions+=11;goto B5fdb69;
case 0x5fdb6c:c.instructions+=10;goto B5fdb6c;
case 0x5fdb70:c.instructions+=9;goto B5fdb70;
case 0x5fdb74:c.instructions+=8;goto B5fdb74;
case 0x5fdb7c:c.instructions+=7;goto B5fdb7c;
case 0x5fdb82:c.instructions+=6;goto B5fdb82;
case 0x5fdb86:c.instructions+=5;goto B5fdb86;
case 0x5fdb87:c.instructions+=4;goto B5fdb87;
case 0x5fdb8b:c.instructions+=3;goto B5fdb8b;
case 0x5fdb8c:c.instructions+=2;goto B5fdb8c;
case 0x5fdb90:c.instructions+=1;goto B5fdb90;
case 0x5fdb95:goto L5fdb95;
case 0x5fdb99:c.instructions+=9;goto B5fdb99;
case 0x5fdb9d:c.instructions+=8;goto B5fdb9d;
case 0x5fdba1:c.instructions+=7;goto B5fdba1;
case 0x5fdba5:c.instructions+=6;goto B5fdba5;
case 0x5fdba8:c.instructions+=5;goto B5fdba8;
case 0x5fdbac:c.instructions+=4;goto B5fdbac;
case 0x5fdbaf:c.instructions+=3;goto B5fdbaf;
case 0x5fdbb1:c.instructions+=2;goto B5fdbb1;
case 0x5fdbb5:c.instructions+=1;goto B5fdbb5;
case 0x5fdbba:goto L5fdbba;
case 0x5fdbbc:c.instructions+=1;goto B5fdbbc;
case 0x5fdbc2:goto L5fdbc2;
case 0x5fdbc8:c.instructions+=2;goto B5fdbc8;
case 0x5fdbca:c.instructions+=1;goto B5fdbca;
case 0x5fdbd0:goto L5fdbd0;
case 0x5fdbd4:c.instructions+=11;goto B5fdbd4;
case 0x5fdbda:c.instructions+=10;goto B5fdbda;
case 0x5fdbde:c.instructions+=9;goto B5fdbde;
case 0x5fdbe4:c.instructions+=8;goto B5fdbe4;
case 0x5fdbe6:c.instructions+=7;goto B5fdbe6;
case 0x5fdbea:c.instructions+=6;goto B5fdbea;
case 0x5fdbf0:c.instructions+=5;goto B5fdbf0;
case 0x5fdbf2:c.instructions+=4;goto B5fdbf2;
case 0x5fdbf8:c.instructions+=3;goto B5fdbf8;
case 0x5fdbfa:c.instructions+=2;goto B5fdbfa;
case 0x5fdbfd:c.instructions+=1;goto B5fdbfd;
case 0x5fdbff:goto L5fdbff;
case 0x5fdc05:c.instructions+=10;goto B5fdc05;
case 0x5fdc0b:c.instructions+=9;goto B5fdc0b;
case 0x5fdc0d:c.instructions+=8;goto B5fdc0d;
case 0x5fdc0f:c.instructions+=7;goto B5fdc0f;
case 0x5fdc13:c.instructions+=6;goto B5fdc13;
case 0x5fdc17:c.instructions+=5;goto B5fdc17;
case 0x5fdc1d:c.instructions+=4;goto B5fdc1d;
case 0x5fdc23:c.instructions+=3;goto B5fdc23;
case 0x5fdc25:c.instructions+=2;goto B5fdc25;
case 0x5fdc28:c.instructions+=1;goto B5fdc28;
case 0x5fdc2a:goto L5fdc2a;
case 0x5fdc30:c.instructions+=7;goto B5fdc30;
case 0x5fdc34:c.instructions+=6;goto B5fdc34;
case 0x5fdc38:c.instructions+=5;goto B5fdc38;
case 0x5fdc3e:c.instructions+=4;goto B5fdc3e;
case 0x5fdc44:c.instructions+=3;goto B5fdc44;
case 0x5fdc46:c.instructions+=2;goto B5fdc46;
case 0x5fdc49:c.instructions+=1;goto B5fdc49;
case 0x5fdc4b:goto L5fdc4b;
case 0x5fdc51:c.instructions+=10;goto B5fdc51;
case 0x5fdc57:c.instructions+=9;goto B5fdc57;
case 0x5fdc59:c.instructions+=8;goto B5fdc59;
case 0x5fdc5d:c.instructions+=7;goto B5fdc5d;
case 0x5fdc61:c.instructions+=6;goto B5fdc61;
case 0x5fdc66:c.instructions+=5;goto B5fdc66;
case 0x5fdc6c:c.instructions+=4;goto B5fdc6c;
case 0x5fdc72:c.instructions+=3;goto B5fdc72;
case 0x5fdc74:c.instructions+=2;goto B5fdc74;
case 0x5fdc77:c.instructions+=1;goto B5fdc77;
case 0x5fdc79:goto L5fdc79;
case 0x5fdc7e:goto L5fdc7e;
case 0x5fdc81:c.instructions+=1;goto B5fdc81;
case 0x5fdc86:goto L5fdc86;
case 0x5fdc88:c.instructions+=1;goto B5fdc88;
case 0x5fdc8e:goto L5fdc8e;
case 0x5fdc93:c.instructions+=2;goto B5fdc93;
case 0x5fdc95:c.instructions+=1;goto B5fdc95;
case 0x5fdc97:goto L5fdc97;
case 0x5fdc9d:c.instructions+=1;goto B5fdc9d;
case 0x5fdc9f:goto L5fdc9f;
case 0x5fdca2:c.instructions+=1;goto B5fdca2;
case 0x5fdca7:goto L5fdca7;
case 0x5fdca9:c.instructions+=1;goto B5fdca9;
case 0x5fdcab:goto L5fdcab;
case 0x5fdcb1:c.instructions+=4;goto B5fdcb1;
case 0x5fdcb7:c.instructions+=3;goto B5fdcb7;
case 0x5fdcb9:c.instructions+=2;goto B5fdcb9;
case 0x5fdcbc:c.instructions+=1;goto B5fdcbc;
case 0x5fdcbe:goto L5fdcbe;
case 0x5fdcc4:c.instructions+=2;goto B5fdcc4;
case 0x5fdcc6:c.instructions+=1;goto B5fdcc6;
case 0x5fdccc:goto L5fdccc;
case 0x5fdcd1:c.instructions+=1;goto B5fdcd1;
case 0x5fdcd7:goto L5fdcd7;
case 0x5fdcdd:c.instructions+=9;goto B5fdcdd;
case 0x5fdcdf:c.instructions+=8;goto B5fdcdf;
case 0x5fdce1:c.instructions+=7;goto B5fdce1;
case 0x5fdce5:c.instructions+=6;goto B5fdce5;
case 0x5fdce9:c.instructions+=5;goto B5fdce9;
case 0x5fdcef:c.instructions+=4;goto B5fdcef;
case 0x5fdcf5:c.instructions+=3;goto B5fdcf5;
case 0x5fdcf7:c.instructions+=2;goto B5fdcf7;
case 0x5fdcfa:c.instructions+=1;goto B5fdcfa;
case 0x5fdd00:goto L5fdd00;
case 0x5fdd06:c.instructions+=2;goto B5fdd06;
case 0x5fdd0c:c.instructions+=1;goto B5fdd0c;
case 0x5fdd11:goto L5fdd11;
case 0x5fdd17:c.instructions+=2;goto B5fdd17;
case 0x5fdd19:c.instructions+=1;goto B5fdd19;
case 0x5fdd1b:goto L5fdd1b;
case 0x5fdd20:c.instructions+=1;goto B5fdd20;
case 0x5fdd22:goto L5fdd22;
case 0x5fdd27:c.instructions+=1;goto B5fdd27;
case 0x5fdd29:goto L5fdd29;
case 0x5fdd2b:goto L5fdd2b;
case 0x5fdd2d:c.instructions+=6;goto B5fdd2d;
case 0x5fdd32:c.instructions+=5;goto B5fdd32;
case 0x5fdd38:c.instructions+=4;goto B5fdd38;
case 0x5fdd3d:c.instructions+=3;goto B5fdd3d;
case 0x5fdd40:c.instructions+=2;goto B5fdd40;
case 0x5fdd42:c.instructions+=1;goto B5fdd42;
case 0x5fdd44:goto L5fdd44;
case 0x5fdd49:c.instructions+=2;goto B5fdd49;
case 0x5fdd4b:c.instructions+=1;goto B5fdd4b;
case 0x5fdd4d:goto L5fdd4d;
case 0x5fdd53:c.instructions+=2;goto B5fdd53;
case 0x5fdd55:c.instructions+=1;goto B5fdd55;
case 0x5fdd57:goto L5fdd57;
case 0x5fdd5c:c.instructions+=1;goto B5fdd5c;
case 0x5fdd5e:goto L5fdd5e;
case 0x5fdd61:c.instructions+=2;goto B5fdd61;
case 0x5fdd63:c.instructions+=1;goto B5fdd63;
case 0x5fdd68:goto L5fdd68;
case 0x5fdd6a:c.instructions+=1;goto B5fdd6a;
case 0x5fdd6c:goto L5fdd6c;
case 0x5fdd6e:c.instructions+=1;goto B5fdd6e;
case 0x5fdd73:goto L5fdd73;
case 0x5fdd75:c.instructions+=1;goto B5fdd75;
case 0x5fdd77:goto L5fdd77;
case 0x5fdd79:c.instructions+=1;goto B5fdd79;
case 0x5fdd7e:goto L5fdd7e;
case 0x5fdd84:c.instructions+=1;goto B5fdd84;
case 0x5fdd86:goto L5fdd86;
case 0x5fdd8c:c.instructions+=1;goto B5fdd8c;
case 0x5fdd92:goto L5fdd92;
case 0x5fdd94:c.instructions+=1;goto B5fdd94;
case 0x5fdd96:goto L5fdd96;
case 0x5fdd98:c.instructions+=3;goto B5fdd98;
case 0x5fdd99:c.instructions+=2;goto B5fdd99;
case 0x5fdd9f:c.instructions+=1;goto B5fdd9f;
case 0x5fdda4:goto L5fdda4;
case 0x5fdda5:c.instructions+=2;goto B5fdda5;
case 0x5fddab:c.instructions+=1;goto B5fddab;
case 0x5fddb0:goto L5fddb0;
case 0x5fddb6:c.instructions+=1;goto B5fddb6;
case 0x5fddb8:goto L5fddb8;
case 0x5fddba:goto L5fddba;
case 0x5fddc0:goto L5fddc0;
case 0x5fddc6:c.instructions+=2;goto B5fddc6;
case 0x5fddc8:c.instructions+=1;goto B5fddc8;
case 0x5fddce:goto L5fddce;
case 0x5fddd3:c.instructions+=1;goto B5fddd3;
case 0x5fddd9:goto L5fddd9;
case 0x5fdddb:c.instructions+=7;goto B5fdddb;
case 0x5fdddf:c.instructions+=6;goto B5fdddf;
case 0x5fdde1:c.instructions+=5;goto B5fdde1;
case 0x5fdde3:c.instructions+=4;goto B5fdde3;
case 0x5fdde7:c.instructions+=3;goto B5fdde7;
case 0x5fddeb:c.instructions+=2;goto B5fddeb;
case 0x5fddf1:c.instructions+=1;goto B5fddf1;
case 0x5fddf3:goto L5fddf3;
case 0x5fddf9:c.instructions+=3;goto B5fddf9;
case 0x5fddfb:c.instructions+=2;goto B5fddfb;
case 0x5fddfe:c.instructions+=1;goto B5fddfe;
case 0x5fde00:goto L5fde00;
case 0x5fde02:c.instructions+=2;goto B5fde02;
case 0x5fde08:c.instructions+=1;goto B5fde08;
case 0x5fde0a:goto L5fde0a;
case 0x5fde0c:c.instructions+=2;goto B5fde0c;
case 0x5fde12:c.instructions+=1;goto B5fde12;
case 0x5fde14:goto L5fde14;
case 0x5fde1a:c.instructions+=3;goto B5fde1a;
case 0x5fde1c:c.instructions+=2;goto B5fde1c;
case 0x5fde1f:c.instructions+=1;goto B5fde1f;
case 0x5fde21:goto L5fde21;
case 0x5fde23:c.instructions+=1;goto B5fde23;
case 0x5fde25:goto L5fde25;
case 0x5fde27:goto L5fde27;
case 0x5fde2b:c.instructions+=1;goto B5fde2b;
case 0x5fde31:goto L5fde31;
case 0x5fde33:c.instructions+=1;goto B5fde33;
case 0x5fde39:goto L5fde39;
case 0x5fde3f:c.instructions+=13;goto B5fde3f;
case 0x5fde40:c.instructions+=12;goto B5fde40;
case 0x5fde46:c.instructions+=11;goto B5fde46;
case 0x5fde4c:c.instructions+=10;goto B5fde4c;
case 0x5fde4e:c.instructions+=9;goto B5fde4e;
case 0x5fde54:c.instructions+=8;goto B5fde54;
case 0x5fde5a:c.instructions+=7;goto B5fde5a;
case 0x5fde5e:c.instructions+=6;goto B5fde5e;
case 0x5fde64:c.instructions+=5;goto B5fde64;
case 0x5fde6a:c.instructions+=4;goto B5fde6a;
case 0x5fde6c:c.instructions+=3;goto B5fde6c;
case 0x5fde6f:c.instructions+=2;goto B5fde6f;
case 0x5fde71:c.instructions+=1;goto B5fde71;
case 0x5fde76:goto L5fde76;
case 0x5fde7a:c.instructions+=4;goto B5fde7a;
case 0x5fde80:c.instructions+=3;goto B5fde80;
case 0x5fde81:c.instructions+=2;goto B5fde81;
case 0x5fde83:c.instructions+=1;goto B5fde83;
case 0x5fde88:goto L5fde88;
case 0x5fde8e:c.instructions+=11;goto B5fde8e;
case 0x5fde94:c.instructions+=10;goto B5fde94;
case 0x5fde9a:c.instructions+=9;goto B5fde9a;
case 0x5fde9f:c.instructions+=8;goto B5fde9f;
case 0x5fdea0:c.instructions+=7;goto B5fdea0;
case 0x5fdea6:c.instructions+=6;goto B5fdea6;
case 0x5fdea7:c.instructions+=5;goto B5fdea7;
case 0x5fdea8:c.instructions+=4;goto B5fdea8;
case 0x5fdea9:c.instructions+=3;goto B5fdea9;
case 0x5fdeaa:c.instructions+=2;goto B5fdeaa;
case 0x5fdead:c.instructions+=1;goto B5fdead;
case 0x5fdeb2:goto L5fdeb2;
case 0x5fdeb6:c.instructions+=6;goto B5fdeb6;
case 0x5fdebc:c.instructions+=5;goto B5fdebc;
case 0x5fdebf:c.instructions+=4;goto B5fdebf;
case 0x5fdec5:c.instructions+=3;goto B5fdec5;
case 0x5fdec7:c.instructions+=2;goto B5fdec7;
case 0x5fdeca:c.instructions+=1;goto B5fdeca;
case 0x5fdecc:goto L5fdecc;
case 0x5fded2:c.instructions+=5;goto B5fded2;
case 0x5fded8:c.instructions+=4;goto B5fded8;
case 0x5fdedc:c.instructions+=3;goto B5fdedc;
case 0x5fdedd:c.instructions+=2;goto B5fdedd;
case 0x5fdedf:c.instructions+=1;goto B5fdedf;
case 0x5fdee4:goto L5fdee4;
case 0x5fdee8:c.instructions+=4;goto B5fdee8;
case 0x5fdeec:c.instructions+=3;goto B5fdeec;
case 0x5fdeee:c.instructions+=2;goto B5fdeee;
case 0x5fdef1:c.instructions+=1;goto B5fdef1;
case 0x5fdef3:goto L5fdef3;
case 0x5fdef7:c.instructions+=2;goto B5fdef7;
case 0x5fdef9:c.instructions+=1;goto B5fdef9;
case 0x5fdefe:goto L5fdefe;
case 0x5fdf00:c.instructions+=2;goto B5fdf00;
case 0x5fdf02:c.instructions+=1;goto B5fdf02;
case 0x5fdf07:goto L5fdf07;
case 0x5fdf09:c.instructions+=2;goto B5fdf09;
case 0x5fdf0b:c.instructions+=1;goto B5fdf0b;
case 0x5fdf10:goto L5fdf10;
case 0x5fdf12:goto L5fdf12;
case 0x5fdf14:goto L5fdf14;
case 0x5fdf18:c.instructions+=2;goto B5fdf18;
case 0x5fdf1a:c.instructions+=1;goto B5fdf1a;
case 0x5fdf1c:goto L5fdf1c;
case 0x5fdf22:c.instructions+=2;goto B5fdf22;
case 0x5fdf24:c.instructions+=1;goto B5fdf24;
case 0x5fdf26:goto L5fdf26;
case 0x5fdf2b:c.instructions+=1;goto B5fdf2b;
case 0x5fdf2d:goto L5fdf2d;
case 0x5fdf31:c.instructions+=11;goto B5fdf31;
case 0x5fdf33:c.instructions+=10;goto B5fdf33;
case 0x5fdf39:c.instructions+=9;goto B5fdf39;
case 0x5fdf3f:c.instructions+=8;goto B5fdf3f;
case 0x5fdf45:c.instructions+=7;goto B5fdf45;
case 0x5fdf4b:c.instructions+=6;goto B5fdf4b;
case 0x5fdf4c:c.instructions+=5;goto B5fdf4c;
case 0x5fdf4d:c.instructions+=4;goto B5fdf4d;
case 0x5fdf4e:c.instructions+=3;goto B5fdf4e;
case 0x5fdf50:c.instructions+=2;goto B5fdf50;
case 0x5fdf51:c.instructions+=1;goto B5fdf51;
case 0x5fdf54:goto L5fdf54;
case 0x5fdf56:c.instructions+=2;goto B5fdf56;
case 0x5fdf5c:c.instructions+=1;goto B5fdf5c;
case 0x5fdf61:goto L5fdf61;
case 0x5fdf63:c.instructions+=2;goto B5fdf63;
case 0x5fdf69:c.instructions+=1;goto B5fdf69;
case 0x5fdf6e:goto L5fdf6e;
case 0x5fdf6f:c.instructions+=5;goto B5fdf6f;
case 0x5fdf70:c.instructions+=4;goto B5fdf70;
case 0x5fdf71:c.instructions+=3;goto B5fdf71;
case 0x5fdf73:c.instructions+=2;goto B5fdf73;
case 0x5fdf74:c.instructions+=1;goto B5fdf74;
case 0x5fdf80:goto L5fdf80;
case 0x5fdf81:c.instructions+=6;goto B5fdf81;
case 0x5fdf82:c.instructions+=5;goto B5fdf82;
case 0x5fdf84:c.instructions+=4;goto B5fdf84;
case 0x5fdf87:c.instructions+=3;goto B5fdf87;
case 0x5fdf88:c.instructions+=2;goto B5fdf88;
case 0x5fdf8a:c.instructions+=1;goto B5fdf8a;
case 0x5fdf8f:goto L5fdf8f;
case 0x5fdf93:c.instructions+=23;goto B5fdf93;
case 0x5fdf97:c.instructions+=22;goto B5fdf97;
case 0x5fdf99:c.instructions+=21;goto B5fdf99;
case 0x5fdf9f:c.instructions+=20;goto B5fdf9f;
case 0x5fdfa5:c.instructions+=19;goto B5fdfa5;
case 0x5fdfab:c.instructions+=18;goto B5fdfab;
case 0x5fdfb0:c.instructions+=17;goto B5fdfb0;
case 0x5fdfb6:c.instructions+=16;goto B5fdfb6;
case 0x5fdfb9:c.instructions+=15;goto B5fdfb9;
case 0x5fdfbf:c.instructions+=14;goto B5fdfbf;
case 0x5fdfc2:c.instructions+=13;goto B5fdfc2;
case 0x5fdfc4:c.instructions+=12;goto B5fdfc4;
case 0x5fdfc8:c.instructions+=11;goto B5fdfc8;
case 0x5fdfcf:c.instructions+=10;goto B5fdfcf;
case 0x5fdfd2:c.instructions+=9;goto B5fdfd2;
case 0x5fdfd4:c.instructions+=8;goto B5fdfd4;
case 0x5fdfd7:c.instructions+=7;goto B5fdfd7;
case 0x5fdfdd:c.instructions+=6;goto B5fdfdd;
case 0x5fdfe3:c.instructions+=5;goto B5fdfe3;
case 0x5fdfe9:c.instructions+=4;goto B5fdfe9;
case 0x5fdfef:c.instructions+=3;goto B5fdfef;
case 0x5fdff5:c.instructions+=2;goto B5fdff5;
case 0x5fdffb:c.instructions+=1;goto B5fdffb;
default:missing_instruction(c.pc);}
B5fd002:L5fd002:{c.instructions+=4;NFSU2_TR(0x5fd002);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd004:{NFSU2_TR(0x5fd004);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd005:{NFSU2_TR(0x5fd005);
__builtin_memmove((R+4),(R+24),4);
}
B5fd007:{NFSU2_TR(0x5fd007);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd00cull));
TAIL_STATIC(0x581d00u,581);
}
B5fd00c:L5fd00c:{c.instructions+=5;NFSU2_TR(0x5fd00c);
w4(R+4,u32(r1(R+12)));
}
B5fd00f:{NFSU2_TR(0x5fd00f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd011:{NFSU2_TR(0x5fd011);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd012:{NFSU2_TR(0x5fd012);
__builtin_memmove((R+4),(R+24),4);
}
B5fd014:{NFSU2_TR(0x5fd014);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd019ull));
TAIL_STATIC(0x581d00u,581);
}
B5fd019:L5fd019:{c.instructions+=7;NFSU2_TR(0x5fd019);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fd01c:{NFSU2_TR(0x5fd01c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fd01f:{NFSU2_TR(0x5fd01f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x190ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B5fd026:{NFSU2_TR(0x5fd026);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd028:{NFSU2_TR(0x5fd028);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd029:{NFSU2_TR(0x5fd029);
__builtin_memmove((R+4),(R+24),4);
}
B5fd02b:{NFSU2_TR(0x5fd02b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd030ull));
TAIL_STATIC(0x581d00u,581);
}
B5fd030:L5fd030:{c.instructions+=3;NFSU2_TR(0x5fd030);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fd032:{NFSU2_TR(0x5fd032);
__builtin_memmove((R+0),gp(0x85009a),1);
}
B5fd037:{NFSU2_TR(0x5fd037);
if(r1(R+518)){{goto L5fd03d;}}
}
B5fd039:L5fd039:{c.instructions+=2;NFSU2_TR(0x5fd039);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fd03b:{NFSU2_TR(0x5fd03b);
if(r1(R+518)){{goto L5fd04b;}}
}
B5fd03d:L5fd03d:{c.instructions+=4;NFSU2_TR(0x5fd03d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fd040:{NFSU2_TR(0x5fd040);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fd043:{NFSU2_TR(0x5fd043);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x190ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+0))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5fd049:{NFSU2_TR(0x5fd049);
if(r1(R+518)){{goto L5fd088;}}
}
B5fd04b:L5fd04b:{c.instructions+=6;NFSU2_TR(0x5fd04b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fd04e:{NFSU2_TR(0x5fd04e);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5fd052:{NFSU2_TR(0x5fd052);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89cf50ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5fd059:{NFSU2_TR(0x5fd059);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5fd05b:{NFSU2_TR(0x5fd05b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fd05e:{NFSU2_TR(0x5fd05e);
if(r1(R+518)){{goto L5fd088;}}
}
B5fd060:L5fd060:{c.instructions+=2;NFSU2_TR(0x5fd060);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fd063:{NFSU2_TR(0x5fd063);
if(r1(R+518)){{goto L5fd088;}}
}
B5fd065:L5fd065:{c.instructions+=2;NFSU2_TR(0x5fd065);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fd067:{NFSU2_TR(0x5fd067);
if(r1(R+518)){{goto L5fd088;}}
}
B5fd069:L5fd069:{c.instructions+=2;NFSU2_TR(0x5fd069);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fd06c:{NFSU2_TR(0x5fd06c);
if(r1(R+518)){{goto L5fd088;}}
}
B5fd06e:L5fd06e:{c.instructions+=2;NFSU2_TR(0x5fd06e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fd071:{NFSU2_TR(0x5fd071);
if(r1(R+518)){{goto L5fd088;}}
}
B5fd073:L5fd073:{c.instructions+=2;NFSU2_TR(0x5fd073);
u8 U[8];
__builtin_memmove((U+0),gp(0x89cf48),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5fd07a:{NFSU2_TR(0x5fd07a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5fd081;}}
}
B5fd07c:L5fd07c:{c.instructions+=2;NFSU2_TR(0x5fd07c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5fd07f:{NFSU2_TR(0x5fd07f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5fd088;}}
}
B5fd081:L5fd081:{c.instructions+=2;NFSU2_TR(0x5fd081);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd083:{NFSU2_TR(0x5fd083);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd088ull));
TAIL_STATIC(0x5f9010u,5f9);
}
B5fd088:L5fd088:{c.instructions+=3;NFSU2_TR(0x5fd088);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B5fd08d:{NFSU2_TR(0x5fd08d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fd08f:{NFSU2_TR(0x5fd08f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fd09a;}}
}
B5fd091:L5fd091:{c.instructions+=3;NFSU2_TR(0x5fd091);
__builtin_memmove((R+0),gp(0x890108),4);
}
B5fd096:{NFSU2_TR(0x5fd096);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fd098:{NFSU2_TR(0x5fd098);
if(r1(R+518)){{goto L5fd109;}}
}
B5fd09a:L5fd09a:{c.instructions+=3;NFSU2_TR(0x5fd09a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fd09d:{NFSU2_TR(0x5fd09d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5fd0a1:{NFSU2_TR(0x5fd0a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fd0e2;}}
}
B5fd0a3:L5fd0a3:{c.instructions+=9;NFSU2_TR(0x5fd0a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fd0a6:{NFSU2_TR(0x5fd0a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fd0a9:{NFSU2_TR(0x5fd0a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fd0ac:{NFSU2_TR(0x5fd0ac);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd0b0:{NFSU2_TR(0x5fd0b0);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fd0b4:{NFSU2_TR(0x5fd0b4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fd0ba:{NFSU2_TR(0x5fd0ba);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fd0bc:{NFSU2_TR(0x5fd0bc);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fd0bf:{NFSU2_TR(0x5fd0bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fd0e2;}}
}
B5fd0c1:L5fd0c1:{c.instructions+=6;NFSU2_TR(0x5fd0c1);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fd0c5:{NFSU2_TR(0x5fd0c5);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fd0cb:{NFSU2_TR(0x5fd0cb);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fd0cf:{NFSU2_TR(0x5fd0cf);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fd0d1:{NFSU2_TR(0x5fd0d1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5fd0d4:{NFSU2_TR(0x5fd0d4);
if(r1(R+514)){{goto L5fd0e8;}}
}
B5fd0d6:L5fd0d6:{c.instructions+=3;NFSU2_TR(0x5fd0d6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5fd0d8:{NFSU2_TR(0x5fd0d8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fd0e0:{NFSU2_TR(0x5fd0e0);
{goto L5fd0ec;}
}
B5fd0e2:L5fd0e2:{c.instructions+=1;NFSU2_TR(0x5fd0e2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fd0e8:L5fd0e8:{c.instructions+=1;NFSU2_TR(0x5fd0e8);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fd0ec:L5fd0ec:{c.instructions+=6;NFSU2_TR(0x5fd0ec);
__builtin_memmove((R+0),gp(0x89e244),4);
}
B5fd0f1:{NFSU2_TR(0x5fd0f1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fd0f5:{NFSU2_TR(0x5fd0f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd0f6:{NFSU2_TR(0x5fd0f6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd0f7:{NFSU2_TR(0x5fd0f7);
w4(R+4,u32(0x89e118ull));
}
B5fd0fc:{NFSU2_TR(0x5fd0fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd101ull));
TAIL_STATIC(0x581fe0u,581);
}
B5fd101:L5fd101:{c.instructions+=3;NFSU2_TR(0x5fd101);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd102:{NFSU2_TR(0x5fd102);
__builtin_memmove((R+4),(R+24),4);
}
B5fd104:{NFSU2_TR(0x5fd104);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd109ull));
TAIL_STATIC(0x581d00u,581);
}
B5fd109:L5fd109:{c.instructions+=3;NFSU2_TR(0x5fd109);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5fd10c:{NFSU2_TR(0x5fd10c);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fd10f:{NFSU2_TR(0x5fd10f);
if(r1(R+518)){{goto L5fd223;}}
}
B5fd115:L5fd115:{c.instructions+=9;NFSU2_TR(0x5fd115);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fd118:{NFSU2_TR(0x5fd118);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fd11b:{NFSU2_TR(0x5fd11b);
__builtin_memmove((R+4),gp(0x89dd14),4);
}
B5fd121:{NFSU2_TR(0x5fd121);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd122:{NFSU2_TR(0x5fd122);
__builtin_memmove((R+8),(R+0),4);
}
B5fd124:{NFSU2_TR(0x5fd124);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd125:{NFSU2_TR(0x5fd125);
w4(R+4,u32(0x89dbe8ull));
}
B5fd12a:{NFSU2_TR(0x5fd12a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd12e:{NFSU2_TR(0x5fd12e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd133ull));
TAIL_STATIC(0x581fe0u,581);
}
B5fd133:L5fd133:{c.instructions+=3;NFSU2_TR(0x5fd133);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd134:{NFSU2_TR(0x5fd134);
__builtin_memmove((R+4),(R+24),4);
}
B5fd136:{NFSU2_TR(0x5fd136);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd13bull));
TAIL_STATIC(0x581d00u,581);
}
B5fd13b:L5fd13b:{c.instructions+=9;NFSU2_TR(0x5fd13b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fd13e:{NFSU2_TR(0x5fd13e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fd141:{NFSU2_TR(0x5fd141);
__builtin_memmove((R+8),gp(0x89dd14),4);
}
B5fd147:{NFSU2_TR(0x5fd147);
__builtin_memmove((R+0),(R+4),4);
}
B5fd149:{NFSU2_TR(0x5fd149);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd14a:{NFSU2_TR(0x5fd14a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd14e:{NFSU2_TR(0x5fd14e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd14f:{NFSU2_TR(0x5fd14f);
w4(R+4,u32(0x89dbe8ull));
}
B5fd154:{NFSU2_TR(0x5fd154);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd159ull));
TAIL_STATIC(0x581fe0u,581);
}
B5fd159:L5fd159:{c.instructions+=3;NFSU2_TR(0x5fd159);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd15a:{NFSU2_TR(0x5fd15a);
__builtin_memmove((R+4),(R+24),4);
}
B5fd15c:{NFSU2_TR(0x5fd15c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd161ull));
TAIL_STATIC(0x581d00u,581);
}
B5fd161:L5fd161:{c.instructions+=9;NFSU2_TR(0x5fd161);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fd164:{NFSU2_TR(0x5fd164);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fd167:{NFSU2_TR(0x5fd167);
__builtin_memmove((R+0),gp(0x89dd14),4);
}
B5fd16c:{NFSU2_TR(0x5fd16c);
__builtin_memmove((R+4),(R+8),4);
}
B5fd16e:{NFSU2_TR(0x5fd16e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd16f:{NFSU2_TR(0x5fd16f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd170:{NFSU2_TR(0x5fd170);
w4(R+4,u32(0x89dbe8ull));
}
B5fd175:{NFSU2_TR(0x5fd175);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd179:{NFSU2_TR(0x5fd179);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd17eull));
TAIL_STATIC(0x581fe0u,581);
}
B5fd17e:L5fd17e:{c.instructions+=3;NFSU2_TR(0x5fd17e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd17f:{NFSU2_TR(0x5fd17f);
__builtin_memmove((R+4),(R+24),4);
}
B5fd181:{NFSU2_TR(0x5fd181);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd186ull));
TAIL_STATIC(0x581d00u,581);
}
B5fd186:L5fd186:{c.instructions+=9;NFSU2_TR(0x5fd186);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fd189:{NFSU2_TR(0x5fd189);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fd18f:{NFSU2_TR(0x5fd18f);
__builtin_memmove((R+4),gp(0x89e0f8),4);
}
B5fd195:{NFSU2_TR(0x5fd195);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd196:{NFSU2_TR(0x5fd196);
__builtin_memmove((R+8),(R+0),4);
}
B5fd198:{NFSU2_TR(0x5fd198);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd199:{NFSU2_TR(0x5fd199);
w4(R+4,u32(0x89dfccull));
}
B5fd19e:{NFSU2_TR(0x5fd19e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd1a2:{NFSU2_TR(0x5fd1a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd1a7ull));
TAIL_STATIC(0x581fe0u,581);
}
B5fd1a7:L5fd1a7:{c.instructions+=3;NFSU2_TR(0x5fd1a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd1a8:{NFSU2_TR(0x5fd1a8);
__builtin_memmove((R+4),(R+24),4);
}
B5fd1aa:{NFSU2_TR(0x5fd1aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd1afull));
TAIL_STATIC(0x581d00u,581);
}
B5fd1af:L5fd1af:{c.instructions+=9;NFSU2_TR(0x5fd1af);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fd1b2:{NFSU2_TR(0x5fd1b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fd1b8:{NFSU2_TR(0x5fd1b8);
__builtin_memmove((R+8),gp(0x89e0f8),4);
}
B5fd1be:{NFSU2_TR(0x5fd1be);
__builtin_memmove((R+0),(R+4),4);
}
B5fd1c0:{NFSU2_TR(0x5fd1c0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd1c1:{NFSU2_TR(0x5fd1c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd1c5:{NFSU2_TR(0x5fd1c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd1c6:{NFSU2_TR(0x5fd1c6);
w4(R+4,u32(0x89dfccull));
}
B5fd1cb:{NFSU2_TR(0x5fd1cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd1d0ull));
TAIL_STATIC(0x581fe0u,581);
}
B5fd1d0:L5fd1d0:{c.instructions+=3;NFSU2_TR(0x5fd1d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd1d1:{NFSU2_TR(0x5fd1d1);
__builtin_memmove((R+4),(R+24),4);
}
B5fd1d3:{NFSU2_TR(0x5fd1d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd1d8ull));
TAIL_STATIC(0x581d00u,581);
}
B5fd1d8:L5fd1d8:{c.instructions+=9;NFSU2_TR(0x5fd1d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fd1db:{NFSU2_TR(0x5fd1db);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fd1e1:{NFSU2_TR(0x5fd1e1);
__builtin_memmove((R+0),gp(0x89e0f8),4);
}
B5fd1e6:{NFSU2_TR(0x5fd1e6);
__builtin_memmove((R+4),(R+8),4);
}
B5fd1e8:{NFSU2_TR(0x5fd1e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd1e9:{NFSU2_TR(0x5fd1e9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd1ea:{NFSU2_TR(0x5fd1ea);
w4(R+4,u32(0x89dfccull));
}
B5fd1ef:{NFSU2_TR(0x5fd1ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd1f3:{NFSU2_TR(0x5fd1f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd1f8ull));
TAIL_STATIC(0x581fe0u,581);
}
B5fd1f8:L5fd1f8:{c.instructions+=3;NFSU2_TR(0x5fd1f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd1f9:{NFSU2_TR(0x5fd1f9);
__builtin_memmove((R+4),(R+24),4);
}
B5fd1fb:{NFSU2_TR(0x5fd1fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd200ull));
TAIL_STATIC(0x581d00u,581);
}
B5fd200:L5fd200:{c.instructions+=7;NFSU2_TR(0x5fd200);
__builtin_memmove((R+4),gp(0x89e774),4);
}
B5fd206:{NFSU2_TR(0x5fd206);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fd209:{NFSU2_TR(0x5fd209);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fd20f:{NFSU2_TR(0x5fd20f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd210:{NFSU2_TR(0x5fd210);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd211:{NFSU2_TR(0x5fd211);
w4(R+4,u32(0x89e648ull));
}
B5fd216:{NFSU2_TR(0x5fd216);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd21bull));
TAIL_STATIC(0x582130u,582);
}
B5fd21b:L5fd21b:{c.instructions+=3;NFSU2_TR(0x5fd21b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd21c:{NFSU2_TR(0x5fd21c);
__builtin_memmove((R+4),(R+24),4);
}
B5fd21e:{NFSU2_TR(0x5fd21e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd223ull));
TAIL_STATIC(0x581d00u,581);
}
B5fd223:L5fd223:{c.instructions+=2;NFSU2_TR(0x5fd223);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fd226:{NFSU2_TR(0x5fd226);
if(r1(R+518)){{goto L5fd266;}}
}
B5fd228:L5fd228:{c.instructions+=2;NFSU2_TR(0x5fd228);
w4(R+12,u32(0x1fcull));
}
B5fd22d:{NFSU2_TR(0x5fd22d);
__builtin_memmove((R+4),(R+4),4);
}
B5fd230:L5fd230:{c.instructions+=10;NFSU2_TR(0x5fd230);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fd233:{NFSU2_TR(0x5fd233);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fd236:{NFSU2_TR(0x5fd236);
{u32 ea_=u32(r4(R+0)+r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fd239:{NFSU2_TR(0x5fd239);
__builtin_memmove((R+4),gp(0x89e4dc),4);
}
B5fd23f:{NFSU2_TR(0x5fd23f);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fd243:{NFSU2_TR(0x5fd243);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd244:{NFSU2_TR(0x5fd244);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fd248:{NFSU2_TR(0x5fd248);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd249:{NFSU2_TR(0x5fd249);
w4(R+4,u32(0x89e3b0ull));
}
B5fd24e:{NFSU2_TR(0x5fd24e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd253ull));
TAIL_STATIC(0x581fe0u,581);
}
B5fd253:L5fd253:{c.instructions+=3;NFSU2_TR(0x5fd253);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd254:{NFSU2_TR(0x5fd254);
__builtin_memmove((R+4),(R+24),4);
}
B5fd256:{NFSU2_TR(0x5fd256);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd25bull));
TAIL_STATIC(0x581d00u,581);
}
B5fd25b:L5fd25b:{c.instructions+=3;NFSU2_TR(0x5fd25b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B5fd25e:{NFSU2_TR(0x5fd25e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x20cull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20cull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5fd264:{NFSU2_TR(0x5fd264);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fd230u);}goto L5fd230;}}
}
B5fd266:L5fd266:{c.instructions+=2;NFSU2_TR(0x5fd266);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B5fd26a:{NFSU2_TR(0x5fd26a);
if(r1(R+518)){{goto L5fd352;}}
}
B5fd270:L5fd270:{c.instructions+=7;NFSU2_TR(0x5fd270);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fd273:{NFSU2_TR(0x5fd273);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fd276:{NFSU2_TR(0x5fd276);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B5fd27d:{NFSU2_TR(0x5fd27d);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd27f:{NFSU2_TR(0x5fd27f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd280:{NFSU2_TR(0x5fd280);
__builtin_memmove((R+4),(R+24),4);
}
B5fd282:{NFSU2_TR(0x5fd282);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd287ull));
TAIL_STATIC(0x581d00u,581);
}
B5fd287:L5fd287:{c.instructions+=10;NFSU2_TR(0x5fd287);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fd28a:{NFSU2_TR(0x5fd28a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fd28d:{NFSU2_TR(0x5fd28d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fd293:{NFSU2_TR(0x5fd293);
__builtin_memmove((R+0),gp(0x89e244),4);
}
B5fd298:{NFSU2_TR(0x5fd298);
__builtin_memmove((R+4),(R+8),4);
}
B5fd29a:{NFSU2_TR(0x5fd29a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd29b:{NFSU2_TR(0x5fd29b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd29c:{NFSU2_TR(0x5fd29c);
w4(R+4,u32(0x89e118ull));
}
B5fd2a1:{NFSU2_TR(0x5fd2a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd2a5:{NFSU2_TR(0x5fd2a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd2aaull));
TAIL_STATIC(0x581fe0u,581);
}
B5fd2aa:L5fd2aa:{c.instructions+=3;NFSU2_TR(0x5fd2aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd2ab:{NFSU2_TR(0x5fd2ab);
__builtin_memmove((R+4),(R+24),4);
}
B5fd2ad:{NFSU2_TR(0x5fd2ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd2b2ull));
TAIL_STATIC(0x581d00u,581);
}
B5fd2b2:L5fd2b2:{c.instructions+=10;NFSU2_TR(0x5fd2b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fd2b5:{NFSU2_TR(0x5fd2b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fd2b8:{NFSU2_TR(0x5fd2b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x214ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fd2be:{NFSU2_TR(0x5fd2be);
__builtin_memmove((R+8),gp(0x89e244),4);
}
B5fd2c4:{NFSU2_TR(0x5fd2c4);
__builtin_memmove((R+0),(R+4),4);
}
B5fd2c6:{NFSU2_TR(0x5fd2c6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd2c7:{NFSU2_TR(0x5fd2c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd2cb:{NFSU2_TR(0x5fd2cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd2cc:{NFSU2_TR(0x5fd2cc);
w4(R+4,u32(0x89e118ull));
}
B5fd2d1:{NFSU2_TR(0x5fd2d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd2d6ull));
TAIL_STATIC(0x581fe0u,581);
}
B5fd2d6:L5fd2d6:{c.instructions+=3;NFSU2_TR(0x5fd2d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd2d7:{NFSU2_TR(0x5fd2d7);
__builtin_memmove((R+4),(R+24),4);
}
B5fd2d9:{NFSU2_TR(0x5fd2d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd2deull));
TAIL_STATIC(0x581d00u,581);
}
B5fd2de:L5fd2de:{c.instructions+=10;NFSU2_TR(0x5fd2de);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fd2e1:{NFSU2_TR(0x5fd2e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fd2e4:{NFSU2_TR(0x5fd2e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x210ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fd2ea:{NFSU2_TR(0x5fd2ea);
__builtin_memmove((R+4),gp(0x89e244),4);
}
B5fd2f0:{NFSU2_TR(0x5fd2f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd2f1:{NFSU2_TR(0x5fd2f1);
__builtin_memmove((R+8),(R+0),4);
}
B5fd2f3:{NFSU2_TR(0x5fd2f3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd2f4:{NFSU2_TR(0x5fd2f4);
w4(R+4,u32(0x89e118ull));
}
B5fd2f9:{NFSU2_TR(0x5fd2f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd2fd:{NFSU2_TR(0x5fd2fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd302ull));
TAIL_STATIC(0x581fe0u,581);
}
B5fd302:L5fd302:{c.instructions+=3;NFSU2_TR(0x5fd302);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd303:{NFSU2_TR(0x5fd303);
__builtin_memmove((R+4),(R+24),4);
}
B5fd305:{NFSU2_TR(0x5fd305);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd30aull));
TAIL_STATIC(0x581d00u,581);
}
B5fd30a:L5fd30a:{c.instructions+=5;NFSU2_TR(0x5fd30a);
{u32 ea_=u32(u32(8371928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fd310:{NFSU2_TR(0x5fd310);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fd316:{NFSU2_TR(0x5fd316);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fd318:{NFSU2_TR(0x5fd318);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5fd31b:{NFSU2_TR(0x5fd31b);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5fd328;}}
}
B5fd31d:L5fd31d:{c.instructions+=3;NFSU2_TR(0x5fd31d);
__builtin_memmove((R+0),gp(0x7fbed8),4);
}
B5fd322:{NFSU2_TR(0x5fd322);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd326:{NFSU2_TR(0x5fd326);
{goto L5fd335;}
}
B5fd328:L5fd328:{c.instructions+=3;NFSU2_TR(0x5fd328);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fd32b:{NFSU2_TR(0x5fd32b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x440ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fd331:{NFSU2_TR(0x5fd331);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd335:L5fd335:{c.instructions+=6;NFSU2_TR(0x5fd335);
__builtin_memmove((R+0),gp(0x89e390),4);
}
B5fd33a:{NFSU2_TR(0x5fd33a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fd33e:{NFSU2_TR(0x5fd33e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd33f:{NFSU2_TR(0x5fd33f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd340:{NFSU2_TR(0x5fd340);
w4(R+4,u32(0x89e264ull));
}
B5fd345:{NFSU2_TR(0x5fd345);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd34aull));
TAIL_STATIC(0x581fe0u,581);
}
B5fd34a:L5fd34a:{c.instructions+=3;NFSU2_TR(0x5fd34a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd34b:{NFSU2_TR(0x5fd34b);
__builtin_memmove((R+4),(R+24),4);
}
B5fd34d:{NFSU2_TR(0x5fd34d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd352ull));
TAIL_STATIC(0x581d00u,581);
}
B5fd352:L5fd352:{c.instructions+=6;NFSU2_TR(0x5fd352);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fd353:{NFSU2_TR(0x5fd353);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fd354:{NFSU2_TR(0x5fd354);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fd355:{NFSU2_TR(0x5fd355);
__builtin_memmove((R+16),(R+20),4);
}
B5fd357:{NFSU2_TR(0x5fd357);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5fd358:{NFSU2_TR(0x5fd358);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fd360:L5fd360:{c.instructions+=9;NFSU2_TR(0x5fd360);
{u32 ea_=u32(u32(8802700u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5fd366:{NFSU2_TR(0x5fd366);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd367:{NFSU2_TR(0x5fd367);
__builtin_memmove((R+24),(R+4),4);
}
B5fd369:{NFSU2_TR(0x5fd369);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fd36f:{NFSU2_TR(0x5fd36f);
{u32 ea_=u32(u32(8017592u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5fd375:{NFSU2_TR(0x5fd375);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fd379:{NFSU2_TR(0x5fd379);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fd37b:{NFSU2_TR(0x5fd37b);
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
B5fd37e:{NFSU2_TR(0x5fd37e);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5fd931;}}
}
B5fd384:L5fd384:{c.instructions+=14;NFSU2_TR(0x5fd384);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fd38a:{NFSU2_TR(0x5fd38a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fd38e:{NFSU2_TR(0x5fd38e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5fd38f:{NFSU2_TR(0x5fd38f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd395:{NFSU2_TR(0x5fd395);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd39b:{NFSU2_TR(0x5fd39b);
{u32 ea_=u32(u32(8802700u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5fd3a1:{NFSU2_TR(0x5fd3a1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd3a2:{NFSU2_TR(0x5fd3a2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd3a3:{NFSU2_TR(0x5fd3a3);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fd3a9:{NFSU2_TR(0x5fd3a9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd3aa:{NFSU2_TR(0x5fd3aa);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5fd3ae:{NFSU2_TR(0x5fd3ae);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fd3b4:{NFSU2_TR(0x5fd3b4);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5fd3ba:{NFSU2_TR(0x5fd3ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd3bfull));
TAIL_STATIC(0x75bed4u,75b);
}
B5fd3bf:L5fd3bf:{c.instructions+=7;NFSU2_TR(0x5fd3bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd3c3:{NFSU2_TR(0x5fd3c3);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5fd3c7:{NFSU2_TR(0x5fd3c7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd3c8:{NFSU2_TR(0x5fd3c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x190ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fd3ce:{NFSU2_TR(0x5fd3ce);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fd3d1:{NFSU2_TR(0x5fd3d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd3d7:{NFSU2_TR(0x5fd3d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd3dcull));
TAIL_STATIC(0x576970u,576);
}
B5fd3dc:L5fd3dc:{c.instructions+=5;NFSU2_TR(0x5fd3dc);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5fd3e0:{NFSU2_TR(0x5fd3e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5fd3e4:{NFSU2_TR(0x5fd3e4);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5fd3e6:{NFSU2_TR(0x5fd3e6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fd3e8:{NFSU2_TR(0x5fd3e8);
if(r1(R+518)){{goto L5fd6d1;}}
}
B5fd3ee:L5fd3ee:{c.instructions+=7;NFSU2_TR(0x5fd3ee);
__builtin_memmove((R+4),gp(0x89d930),4);
}
B5fd3f4:{NFSU2_TR(0x5fd3f4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd3f5:{NFSU2_TR(0x5fd3f5);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5fd3f9:{NFSU2_TR(0x5fd3f9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd3fa:{NFSU2_TR(0x5fd3fa);
__builtin_memmove((R+4),(R+28),4);
}
B5fd3fc:{NFSU2_TR(0x5fd3fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd400:{NFSU2_TR(0x5fd400);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd405ull));
TAIL_STATIC(0x581d90u,581);
}
B5fd405:L5fd405:{c.instructions+=4;NFSU2_TR(0x5fd405);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fd409:{NFSU2_TR(0x5fd409);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd40a:{NFSU2_TR(0x5fd40a);
w4(R+4,u32(0x89d804ull));
}
B5fd40f:{NFSU2_TR(0x5fd40f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd414ull));
TAIL_STATIC(0x582030u,582);
}
B5fd414:L5fd414:{c.instructions+=8;NFSU2_TR(0x5fd414);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fd417:{NFSU2_TR(0x5fd417);
__builtin_memmove((R+4),gp(0x89da7c),4);
}
B5fd41d:{NFSU2_TR(0x5fd41d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd41e:{NFSU2_TR(0x5fd41e);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5fd422:{NFSU2_TR(0x5fd422);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd423:{NFSU2_TR(0x5fd423);
__builtin_memmove((R+4),(R+28),4);
}
B5fd425:{NFSU2_TR(0x5fd425);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd429:{NFSU2_TR(0x5fd429);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd42eull));
TAIL_STATIC(0x581d90u,581);
}
B5fd42e:L5fd42e:{c.instructions+=4;NFSU2_TR(0x5fd42e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fd432:{NFSU2_TR(0x5fd432);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd433:{NFSU2_TR(0x5fd433);
w4(R+4,u32(0x89d950ull));
}
B5fd438:{NFSU2_TR(0x5fd438);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd43dull));
TAIL_STATIC(0x582030u,582);
}
B5fd43d:L5fd43d:{c.instructions+=8;NFSU2_TR(0x5fd43d);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fd440:{NFSU2_TR(0x5fd440);
__builtin_memmove((R+4),gp(0x89dbc8),4);
}
B5fd446:{NFSU2_TR(0x5fd446);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd447:{NFSU2_TR(0x5fd447);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5fd44b:{NFSU2_TR(0x5fd44b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd44c:{NFSU2_TR(0x5fd44c);
__builtin_memmove((R+4),(R+28),4);
}
B5fd44e:{NFSU2_TR(0x5fd44e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd452:{NFSU2_TR(0x5fd452);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd457ull));
TAIL_STATIC(0x581d90u,581);
}
B5fd457:L5fd457:{c.instructions+=4;NFSU2_TR(0x5fd457);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fd45b:{NFSU2_TR(0x5fd45b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd45c:{NFSU2_TR(0x5fd45c);
w4(R+4,u32(0x89da9cull));
}
B5fd461:{NFSU2_TR(0x5fd461);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd466ull));
TAIL_STATIC(0x582030u,582);
}
B5fd466:L5fd466:{c.instructions+=8;NFSU2_TR(0x5fd466);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fd469:{NFSU2_TR(0x5fd469);
__builtin_memmove((R+4),gp(0x89de60),4);
}
B5fd46f:{NFSU2_TR(0x5fd46f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd470:{NFSU2_TR(0x5fd470);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5fd474:{NFSU2_TR(0x5fd474);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd475:{NFSU2_TR(0x5fd475);
__builtin_memmove((R+4),(R+28),4);
}
B5fd477:{NFSU2_TR(0x5fd477);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd47b:{NFSU2_TR(0x5fd47b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd480ull));
TAIL_STATIC(0x581d90u,581);
}
B5fd480:L5fd480:{c.instructions+=4;NFSU2_TR(0x5fd480);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fd484:{NFSU2_TR(0x5fd484);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd485:{NFSU2_TR(0x5fd485);
w4(R+4,u32(0x89dd34ull));
}
B5fd48a:{NFSU2_TR(0x5fd48a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd48full));
TAIL_STATIC(0x582030u,582);
}
B5fd48f:L5fd48f:{c.instructions+=8;NFSU2_TR(0x5fd48f);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fd492:{NFSU2_TR(0x5fd492);
__builtin_memmove((R+4),gp(0x89de60),4);
}
B5fd498:{NFSU2_TR(0x5fd498);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd499:{NFSU2_TR(0x5fd499);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5fd49d:{NFSU2_TR(0x5fd49d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd49e:{NFSU2_TR(0x5fd49e);
__builtin_memmove((R+4),(R+28),4);
}
B5fd4a0:{NFSU2_TR(0x5fd4a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd4a4:{NFSU2_TR(0x5fd4a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd4a9ull));
TAIL_STATIC(0x581d90u,581);
}
B5fd4a9:L5fd4a9:{c.instructions+=4;NFSU2_TR(0x5fd4a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fd4ad:{NFSU2_TR(0x5fd4ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd4ae:{NFSU2_TR(0x5fd4ae);
w4(R+4,u32(0x89dd34ull));
}
B5fd4b3:{NFSU2_TR(0x5fd4b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd4b8ull));
TAIL_STATIC(0x582030u,582);
}
B5fd4b8:L5fd4b8:{c.instructions+=8;NFSU2_TR(0x5fd4b8);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fd4bb:{NFSU2_TR(0x5fd4bb);
__builtin_memmove((R+4),gp(0x89de60),4);
}
B5fd4c1:{NFSU2_TR(0x5fd4c1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd4c2:{NFSU2_TR(0x5fd4c2);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5fd4c6:{NFSU2_TR(0x5fd4c6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd4c7:{NFSU2_TR(0x5fd4c7);
__builtin_memmove((R+4),(R+28),4);
}
B5fd4c9:{NFSU2_TR(0x5fd4c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd4cd:{NFSU2_TR(0x5fd4cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd4d2ull));
TAIL_STATIC(0x581d90u,581);
}
B5fd4d2:L5fd4d2:{c.instructions+=4;NFSU2_TR(0x5fd4d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fd4d6:{NFSU2_TR(0x5fd4d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd4d7:{NFSU2_TR(0x5fd4d7);
w4(R+4,u32(0x89dd34ull));
}
B5fd4dc:{NFSU2_TR(0x5fd4dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd4e1ull));
TAIL_STATIC(0x582030u,582);
}
B5fd4e1:L5fd4e1:{c.instructions+=8;NFSU2_TR(0x5fd4e1);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fd4e4:{NFSU2_TR(0x5fd4e4);
__builtin_memmove((R+4),gp(0x89de60),4);
}
B5fd4ea:{NFSU2_TR(0x5fd4ea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd4eb:{NFSU2_TR(0x5fd4eb);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5fd4ef:{NFSU2_TR(0x5fd4ef);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd4f0:{NFSU2_TR(0x5fd4f0);
__builtin_memmove((R+4),(R+28),4);
}
B5fd4f2:{NFSU2_TR(0x5fd4f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd4f6:{NFSU2_TR(0x5fd4f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd4fbull));
TAIL_STATIC(0x581d90u,581);
}
B5fd4fb:L5fd4fb:{c.instructions+=4;NFSU2_TR(0x5fd4fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fd4ff:{NFSU2_TR(0x5fd4ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd500:{NFSU2_TR(0x5fd500);
w4(R+4,u32(0x89dd34ull));
}
B5fd505:{NFSU2_TR(0x5fd505);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd50aull));
TAIL_STATIC(0x582030u,582);
}
B5fd50a:L5fd50a:{c.instructions+=8;NFSU2_TR(0x5fd50a);
{u32 ea_=u32(r4(R+24)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fd50d:{NFSU2_TR(0x5fd50d);
__builtin_memmove((R+4),gp(0x89dfac),4);
}
B5fd513:{NFSU2_TR(0x5fd513);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd514:{NFSU2_TR(0x5fd514);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5fd518:{NFSU2_TR(0x5fd518);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd519:{NFSU2_TR(0x5fd519);
__builtin_memmove((R+4),(R+28),4);
}
B5fd51b:{NFSU2_TR(0x5fd51b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd51f:{NFSU2_TR(0x5fd51f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd524ull));
TAIL_STATIC(0x581d90u,581);
}
B5fd524:L5fd524:{c.instructions+=4;NFSU2_TR(0x5fd524);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fd528:{NFSU2_TR(0x5fd528);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd529:{NFSU2_TR(0x5fd529);
w4(R+4,u32(0x89de80ull));
}
B5fd52e:{NFSU2_TR(0x5fd52e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd533ull));
TAIL_STATIC(0x582030u,582);
}
B5fd533:L5fd533:{c.instructions+=8;NFSU2_TR(0x5fd533);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fd536:{NFSU2_TR(0x5fd536);
__builtin_memmove((R+4),gp(0x89dfac),4);
}
B5fd53c:{NFSU2_TR(0x5fd53c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd53d:{NFSU2_TR(0x5fd53d);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5fd541:{NFSU2_TR(0x5fd541);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd542:{NFSU2_TR(0x5fd542);
__builtin_memmove((R+4),(R+28),4);
}
B5fd544:{NFSU2_TR(0x5fd544);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd548:{NFSU2_TR(0x5fd548);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd54dull));
TAIL_STATIC(0x581d90u,581);
}
B5fd54d:L5fd54d:{c.instructions+=4;NFSU2_TR(0x5fd54d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fd551:{NFSU2_TR(0x5fd551);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd552:{NFSU2_TR(0x5fd552);
w4(R+4,u32(0x89de80ull));
}
B5fd557:{NFSU2_TR(0x5fd557);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd55cull));
TAIL_STATIC(0x582030u,582);
}
B5fd55c:L5fd55c:{c.instructions+=8;NFSU2_TR(0x5fd55c);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fd55f:{NFSU2_TR(0x5fd55f);
__builtin_memmove((R+4),gp(0x89dfac),4);
}
B5fd565:{NFSU2_TR(0x5fd565);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd566:{NFSU2_TR(0x5fd566);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5fd56a:{NFSU2_TR(0x5fd56a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd56b:{NFSU2_TR(0x5fd56b);
__builtin_memmove((R+4),(R+28),4);
}
B5fd56d:{NFSU2_TR(0x5fd56d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd571:{NFSU2_TR(0x5fd571);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd576ull));
TAIL_STATIC(0x581d90u,581);
}
B5fd576:L5fd576:{c.instructions+=4;NFSU2_TR(0x5fd576);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fd57a:{NFSU2_TR(0x5fd57a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd57b:{NFSU2_TR(0x5fd57b);
w4(R+4,u32(0x89de80ull));
}
B5fd580:{NFSU2_TR(0x5fd580);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd585ull));
TAIL_STATIC(0x582030u,582);
}
B5fd585:L5fd585:{c.instructions+=8;NFSU2_TR(0x5fd585);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fd588:{NFSU2_TR(0x5fd588);
__builtin_memmove((R+4),gp(0x89e628),4);
}
B5fd58e:{NFSU2_TR(0x5fd58e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd58f:{NFSU2_TR(0x5fd58f);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5fd593:{NFSU2_TR(0x5fd593);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd594:{NFSU2_TR(0x5fd594);
__builtin_memmove((R+4),(R+28),4);
}
B5fd596:{NFSU2_TR(0x5fd596);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd59a:{NFSU2_TR(0x5fd59a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd59full));
TAIL_STATIC(0x581d90u,581);
}
B5fd59f:L5fd59f:{c.instructions+=4;NFSU2_TR(0x5fd59f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fd5a3:{NFSU2_TR(0x5fd5a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd5a4:{NFSU2_TR(0x5fd5a4);
w4(R+4,u32(0x89e4fcull));
}
B5fd5a9:{NFSU2_TR(0x5fd5a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd5aeull));
TAIL_STATIC(0x582030u,582);
}
B5fd5ae:L5fd5ae:{c.instructions+=8;NFSU2_TR(0x5fd5ae);
{u32 ea_=u32(r4(R+24)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fd5b4:{NFSU2_TR(0x5fd5b4);
w4(R+20,u32(0x1ull));
}
B5fd5b9:{NFSU2_TR(0x5fd5b9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd5ba:{NFSU2_TR(0x5fd5ba);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5fd5be:{NFSU2_TR(0x5fd5be);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd5bf:{NFSU2_TR(0x5fd5bf);
__builtin_memmove((R+4),(R+28),4);
}
B5fd5c1:{NFSU2_TR(0x5fd5c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd5c5:{NFSU2_TR(0x5fd5c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd5caull));
TAIL_STATIC(0x581d90u,581);
}
B5fd5ca:L5fd5ca:{c.instructions+=9;NFSU2_TR(0x5fd5ca);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5fd5ce:{NFSU2_TR(0x5fd5ce);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd5cf:{NFSU2_TR(0x5fd5cf);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5fd5d3:{NFSU2_TR(0x5fd5d3);
__builtin_memmove((R+8),(R+518),1);
}
B5fd5d6:{NFSU2_TR(0x5fd5d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd5d7:{NFSU2_TR(0x5fd5d7);
__builtin_memmove((R+4),(R+28),4);
}
B5fd5d9:{NFSU2_TR(0x5fd5d9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5fd5df:{NFSU2_TR(0x5fd5df);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd5e3:{NFSU2_TR(0x5fd5e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd5e8ull));
TAIL_STATIC(0x581d90u,581);
}
B5fd5e8:L5fd5e8:{c.instructions+=4;NFSU2_TR(0x5fd5e8);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5fd5ec:{NFSU2_TR(0x5fd5ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fd5ef:{NFSU2_TR(0x5fd5ef);
__builtin_memmove((R+4),(R+8),4);
}
B5fd5f1:{NFSU2_TR(0x5fd5f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fd60d;}}
}
B5fd5f3:L5fd5f3:{c.instructions+=1;NFSU2_TR(0x5fd5f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd5f8ull));
TAIL_STATIC(0x5ebfa0u,5eb);
}
B5fd5f8:L5fd5f8:{c.instructions+=2;NFSU2_TR(0x5fd5f8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fd5fa:{NFSU2_TR(0x5fd5fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fd622;}}
}
B5fd5fc:L5fd5fc:{c.instructions+=3;NFSU2_TR(0x5fd5fc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd5fd:{NFSU2_TR(0x5fd5fd);
__builtin_memmove((R+4),(R+8),4);
}
B5fd5ff:{NFSU2_TR(0x5fd5ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd604ull));
TAIL_STATIC(0x5ebf70u,5eb);
}
B5fd604:L5fd604:{c.instructions+=2;NFSU2_TR(0x5fd604);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5fd60b:{NFSU2_TR(0x5fd60b);
{goto L5fd622;}
}
B5fd60d:L5fd60d:{c.instructions+=1;NFSU2_TR(0x5fd60d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd612ull));
TAIL_STATIC(0x5ebfa0u,5eb);
}
B5fd612:L5fd612:{c.instructions+=2;NFSU2_TR(0x5fd612);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fd614:{NFSU2_TR(0x5fd614);
if(r1(R+518)){{goto L5fd622;}}
}
B5fd616:L5fd616:{c.instructions+=2;NFSU2_TR(0x5fd616);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5fd61c:{NFSU2_TR(0x5fd61c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x974ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd622:L5fd622:{c.instructions+=6;NFSU2_TR(0x5fd622);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd623:{NFSU2_TR(0x5fd623);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5fd627:{NFSU2_TR(0x5fd627);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd628:{NFSU2_TR(0x5fd628);
__builtin_memmove((R+4),(R+28),4);
}
B5fd62a:{NFSU2_TR(0x5fd62a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd62e:{NFSU2_TR(0x5fd62e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd633ull));
TAIL_STATIC(0x581d90u,581);
}
B5fd633:L5fd633:{c.instructions+=9;NFSU2_TR(0x5fd633);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5fd637:{NFSU2_TR(0x5fd637);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd638:{NFSU2_TR(0x5fd638);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5fd63c:{NFSU2_TR(0x5fd63c);
__builtin_memmove((R+8),(R+518),1);
}
B5fd63f:{NFSU2_TR(0x5fd63f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd640:{NFSU2_TR(0x5fd640);
__builtin_memmove((R+4),(R+28),4);
}
B5fd642:{NFSU2_TR(0x5fd642);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb6ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5fd648:{NFSU2_TR(0x5fd648);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd64c:{NFSU2_TR(0x5fd64c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd651ull));
TAIL_STATIC(0x581d90u,581);
}
B5fd651:L5fd651:{c.instructions+=9;NFSU2_TR(0x5fd651);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5fd655:{NFSU2_TR(0x5fd655);
__builtin_memmove((R+4),(R+518),1);
}
B5fd658:{NFSU2_TR(0x5fd658);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd659:{NFSU2_TR(0x5fd659);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5fd65d:{NFSU2_TR(0x5fd65d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb7ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5fd663:{NFSU2_TR(0x5fd663);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd664:{NFSU2_TR(0x5fd664);
__builtin_memmove((R+4),(R+28),4);
}
B5fd666:{NFSU2_TR(0x5fd666);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd66a:{NFSU2_TR(0x5fd66a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd66full));
TAIL_STATIC(0x581d90u,581);
}
B5fd66f:L5fd66f:{c.instructions+=7;NFSU2_TR(0x5fd66f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fd673:{NFSU2_TR(0x5fd673);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5fd679:{NFSU2_TR(0x5fd679);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fd67b:{NFSU2_TR(0x5fd67b);
__builtin_memmove((R+0),(R+518),1);
}
B5fd67e:{NFSU2_TR(0x5fd67e);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5fd680:{NFSU2_TR(0x5fd680);
__builtin_memmove((R+4),gp(0x85009a),1);
}
B5fd686:{NFSU2_TR(0x5fd686);
if(r1(R+518)){{goto L5fd68c;}}
}
B5fd688:L5fd688:{c.instructions+=2;NFSU2_TR(0x5fd688);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5fd68a:{NFSU2_TR(0x5fd68a);
if(r1(R+518)){{goto L5fd690;}}
}
B5fd68c:L5fd68c:{c.instructions+=2;NFSU2_TR(0x5fd68c);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5fd68e:{NFSU2_TR(0x5fd68e);
if(r1(R+518)){{goto L5fd6ae;}}
}
B5fd690:L5fd690:{c.instructions+=4;NFSU2_TR(0x5fd690);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fd693:{NFSU2_TR(0x5fd693);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5fd697:{NFSU2_TR(0x5fd697);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89cf50ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5fd69e:{NFSU2_TR(0x5fd69e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd6a3ull));
TAIL_STATIC(0x5efa00u,5ef);
}
B5fd6a3:L5fd6a3:{c.instructions+=2;NFSU2_TR(0x5fd6a3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fd6a5:{NFSU2_TR(0x5fd6a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fd6ae;}}
}
B5fd6a7:L5fd6a7:{c.instructions+=2;NFSU2_TR(0x5fd6a7);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd6a9:{NFSU2_TR(0x5fd6a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd6aeull));
TAIL_STATIC(0x5f9010u,5f9);
}
B5fd6ae:L5fd6ae:{c.instructions+=2;NFSU2_TR(0x5fd6ae);
u8 U[2];
__builtin_memmove((U+0),gp(0x89e7d8),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5fd6b4:{NFSU2_TR(0x5fd6b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fd6be;}}
}
B5fd6b6:L5fd6b6:{c.instructions+=2;NFSU2_TR(0x5fd6b6);
u8 U[8];
__builtin_memmove((U+0),gp(0x890108),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fd6bc:{NFSU2_TR(0x5fd6bc);
if(r1(R+518)){{goto L5fd6d1;}}
}
B5fd6be:L5fd6be:{c.instructions+=5;NFSU2_TR(0x5fd6be);
u8 U[4];
w4(U+0,u32(0x89e118ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd6c3:{NFSU2_TR(0x5fd6c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fd6c9:{NFSU2_TR(0x5fd6c9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd6ca:{NFSU2_TR(0x5fd6ca);
__builtin_memmove((R+4),(R+28),4);
}
B5fd6cc:{NFSU2_TR(0x5fd6cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd6d1ull));
TAIL_STATIC(0x5ea200u,5ea);
}
B5fd6d1:L5fd6d1:{c.instructions+=2;NFSU2_TR(0x5fd6d1);
u8 U[6];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B5fd6d6:{NFSU2_TR(0x5fd6d6);
if(r1(R+518)){{goto L5fd7fe;}}
}
B5fd6dc:L5fd6dc:{c.instructions+=7;NFSU2_TR(0x5fd6dc);
__builtin_memmove((R+8),gp(0x89dd14),4);
}
B5fd6e2:{NFSU2_TR(0x5fd6e2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd6e3:{NFSU2_TR(0x5fd6e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5fd6e7:{NFSU2_TR(0x5fd6e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd6e8:{NFSU2_TR(0x5fd6e8);
__builtin_memmove((R+4),(R+28),4);
}
B5fd6ea:{NFSU2_TR(0x5fd6ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd6ee:{NFSU2_TR(0x5fd6ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd6f3ull));
TAIL_STATIC(0x581d90u,581);
}
B5fd6f3:L5fd6f3:{c.instructions+=4;NFSU2_TR(0x5fd6f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fd6f7:{NFSU2_TR(0x5fd6f7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd6f8:{NFSU2_TR(0x5fd6f8);
w4(R+4,u32(0x89dbe8ull));
}
B5fd6fd:{NFSU2_TR(0x5fd6fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd702ull));
TAIL_STATIC(0x582030u,582);
}
B5fd702:L5fd702:{c.instructions+=8;NFSU2_TR(0x5fd702);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fd705:{NFSU2_TR(0x5fd705);
__builtin_memmove((R+8),gp(0x89dd14),4);
}
B5fd70b:{NFSU2_TR(0x5fd70b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd70c:{NFSU2_TR(0x5fd70c);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5fd710:{NFSU2_TR(0x5fd710);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd711:{NFSU2_TR(0x5fd711);
__builtin_memmove((R+4),(R+28),4);
}
B5fd713:{NFSU2_TR(0x5fd713);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd717:{NFSU2_TR(0x5fd717);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd71cull));
TAIL_STATIC(0x581d90u,581);
}
B5fd71c:L5fd71c:{c.instructions+=4;NFSU2_TR(0x5fd71c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fd720:{NFSU2_TR(0x5fd720);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd721:{NFSU2_TR(0x5fd721);
w4(R+4,u32(0x89dbe8ull));
}
B5fd726:{NFSU2_TR(0x5fd726);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd72bull));
TAIL_STATIC(0x582030u,582);
}
B5fd72b:L5fd72b:{c.instructions+=8;NFSU2_TR(0x5fd72b);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fd72e:{NFSU2_TR(0x5fd72e);
__builtin_memmove((R+8),gp(0x89dd14),4);
}
B5fd734:{NFSU2_TR(0x5fd734);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd735:{NFSU2_TR(0x5fd735);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5fd739:{NFSU2_TR(0x5fd739);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd73a:{NFSU2_TR(0x5fd73a);
__builtin_memmove((R+4),(R+28),4);
}
B5fd73c:{NFSU2_TR(0x5fd73c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd740:{NFSU2_TR(0x5fd740);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd745ull));
TAIL_STATIC(0x581d90u,581);
}
B5fd745:L5fd745:{c.instructions+=4;NFSU2_TR(0x5fd745);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fd749:{NFSU2_TR(0x5fd749);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd74a:{NFSU2_TR(0x5fd74a);
w4(R+4,u32(0x89dbe8ull));
}
B5fd74f:{NFSU2_TR(0x5fd74f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd754ull));
TAIL_STATIC(0x582030u,582);
}
B5fd754:L5fd754:{c.instructions+=8;NFSU2_TR(0x5fd754);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fd757:{NFSU2_TR(0x5fd757);
__builtin_memmove((R+8),gp(0x89e0f8),4);
}
B5fd75d:{NFSU2_TR(0x5fd75d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd75e:{NFSU2_TR(0x5fd75e);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5fd762:{NFSU2_TR(0x5fd762);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd763:{NFSU2_TR(0x5fd763);
__builtin_memmove((R+4),(R+28),4);
}
B5fd765:{NFSU2_TR(0x5fd765);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd769:{NFSU2_TR(0x5fd769);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd76eull));
TAIL_STATIC(0x581d90u,581);
}
B5fd76e:L5fd76e:{c.instructions+=4;NFSU2_TR(0x5fd76e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fd772:{NFSU2_TR(0x5fd772);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd773:{NFSU2_TR(0x5fd773);
w4(R+4,u32(0x89dfccull));
}
B5fd778:{NFSU2_TR(0x5fd778);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd77dull));
TAIL_STATIC(0x582030u,582);
}
B5fd77d:L5fd77d:{c.instructions+=8;NFSU2_TR(0x5fd77d);
{u32 ea_=u32(r4(R+24)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fd780:{NFSU2_TR(0x5fd780);
__builtin_memmove((R+8),gp(0x89e0f8),4);
}
B5fd786:{NFSU2_TR(0x5fd786);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd787:{NFSU2_TR(0x5fd787);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5fd78b:{NFSU2_TR(0x5fd78b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd78c:{NFSU2_TR(0x5fd78c);
__builtin_memmove((R+4),(R+28),4);
}
B5fd78e:{NFSU2_TR(0x5fd78e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd792:{NFSU2_TR(0x5fd792);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd797ull));
TAIL_STATIC(0x581d90u,581);
}
B5fd797:L5fd797:{c.instructions+=4;NFSU2_TR(0x5fd797);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fd79b:{NFSU2_TR(0x5fd79b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd79c:{NFSU2_TR(0x5fd79c);
w4(R+4,u32(0x89dfccull));
}
B5fd7a1:{NFSU2_TR(0x5fd7a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd7a6ull));
TAIL_STATIC(0x582030u,582);
}
B5fd7a6:L5fd7a6:{c.instructions+=8;NFSU2_TR(0x5fd7a6);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fd7a9:{NFSU2_TR(0x5fd7a9);
__builtin_memmove((R+8),gp(0x89e0f8),4);
}
B5fd7af:{NFSU2_TR(0x5fd7af);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd7b0:{NFSU2_TR(0x5fd7b0);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5fd7b4:{NFSU2_TR(0x5fd7b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd7b5:{NFSU2_TR(0x5fd7b5);
__builtin_memmove((R+4),(R+28),4);
}
B5fd7b7:{NFSU2_TR(0x5fd7b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd7bb:{NFSU2_TR(0x5fd7bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd7c0ull));
TAIL_STATIC(0x581d90u,581);
}
B5fd7c0:L5fd7c0:{c.instructions+=4;NFSU2_TR(0x5fd7c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fd7c4:{NFSU2_TR(0x5fd7c4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd7c5:{NFSU2_TR(0x5fd7c5);
w4(R+4,u32(0x89dfccull));
}
B5fd7ca:{NFSU2_TR(0x5fd7ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd7cfull));
TAIL_STATIC(0x582030u,582);
}
B5fd7cf:L5fd7cf:{c.instructions+=8;NFSU2_TR(0x5fd7cf);
{u32 ea_=u32(r4(R+24)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fd7d2:{NFSU2_TR(0x5fd7d2);
__builtin_memmove((R+8),gp(0x89e774),4);
}
B5fd7d8:{NFSU2_TR(0x5fd7d8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd7d9:{NFSU2_TR(0x5fd7d9);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5fd7dd:{NFSU2_TR(0x5fd7dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd7de:{NFSU2_TR(0x5fd7de);
__builtin_memmove((R+4),(R+28),4);
}
B5fd7e0:{NFSU2_TR(0x5fd7e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd7e4:{NFSU2_TR(0x5fd7e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd7e9ull));
TAIL_STATIC(0x581d90u,581);
}
B5fd7e9:L5fd7e9:{c.instructions+=4;NFSU2_TR(0x5fd7e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fd7ed:{NFSU2_TR(0x5fd7ed);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd7ee:{NFSU2_TR(0x5fd7ee);
w4(R+4,u32(0x89e648ull));
}
B5fd7f3:{NFSU2_TR(0x5fd7f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd7f8ull));
TAIL_STATIC(0x582160u,582);
}
B5fd7f8:L5fd7f8:{c.instructions+=1;NFSU2_TR(0x5fd7f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd7fe:L5fd7fe:{c.instructions+=2;NFSU2_TR(0x5fd7fe);
u8 U[6];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B5fd803:{NFSU2_TR(0x5fd803);
if(r1(R+518)){{goto L5fd84a;}}
}
B5fd805:L5fd805:{c.instructions+=2;NFSU2_TR(0x5fd805);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5fd80b:{NFSU2_TR(0x5fd80b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fd813:L5fd813:{c.instructions+=7;NFSU2_TR(0x5fd813);
__builtin_memmove((R+8),gp(0x89e4dc),4);
}
B5fd819:{NFSU2_TR(0x5fd819);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd81a:{NFSU2_TR(0x5fd81a);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5fd81e:{NFSU2_TR(0x5fd81e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd81f:{NFSU2_TR(0x5fd81f);
__builtin_memmove((R+4),(R+28),4);
}
B5fd821:{NFSU2_TR(0x5fd821);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd825:{NFSU2_TR(0x5fd825);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd82aull));
TAIL_STATIC(0x581d90u,581);
}
B5fd82a:L5fd82a:{c.instructions+=4;NFSU2_TR(0x5fd82a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fd82e:{NFSU2_TR(0x5fd82e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd82f:{NFSU2_TR(0x5fd82f);
w4(R+4,u32(0x89e3b0ull));
}
B5fd834:{NFSU2_TR(0x5fd834);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd839ull));
TAIL_STATIC(0x582030u,582);
}
B5fd839:L5fd839:{c.instructions+=6;NFSU2_TR(0x5fd839);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fd83c:{NFSU2_TR(0x5fd83c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fd840:{NFSU2_TR(0x5fd840);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B5fd843:{NFSU2_TR(0x5fd843);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5fd844:{NFSU2_TR(0x5fd844);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd848:{NFSU2_TR(0x5fd848);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fd813u);}goto L5fd813;}}
}
B5fd84a:L5fd84a:{c.instructions+=2;NFSU2_TR(0x5fd84a);
u8 U[6];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B5fd84f:{NFSU2_TR(0x5fd84f);
if(r1(R+518)){{goto L5fd923;}}
}
B5fd855:L5fd855:{c.instructions+=6;NFSU2_TR(0x5fd855);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd857:{NFSU2_TR(0x5fd857);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5fd85b:{NFSU2_TR(0x5fd85b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd85c:{NFSU2_TR(0x5fd85c);
__builtin_memmove((R+4),(R+28),4);
}
B5fd85e:{NFSU2_TR(0x5fd85e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd862:{NFSU2_TR(0x5fd862);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd867ull));
TAIL_STATIC(0x581d90u,581);
}
B5fd867:L5fd867:{c.instructions+=9;NFSU2_TR(0x5fd867);
u8 U[6];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5fd86c:{NFSU2_TR(0x5fd86c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5fd873:{NFSU2_TR(0x5fd873);
__builtin_memmove((R+4),gp(0x89e244),4);
}
B5fd879:{NFSU2_TR(0x5fd879);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd87a:{NFSU2_TR(0x5fd87a);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5fd87e:{NFSU2_TR(0x5fd87e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd87f:{NFSU2_TR(0x5fd87f);
__builtin_memmove((R+4),(R+28),4);
}
B5fd881:{NFSU2_TR(0x5fd881);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd885:{NFSU2_TR(0x5fd885);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd88aull));
TAIL_STATIC(0x581d90u,581);
}
B5fd88a:L5fd88a:{c.instructions+=4;NFSU2_TR(0x5fd88a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fd88e:{NFSU2_TR(0x5fd88e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd88f:{NFSU2_TR(0x5fd88f);
w4(R+4,u32(0x89e118ull));
}
B5fd894:{NFSU2_TR(0x5fd894);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd899ull));
TAIL_STATIC(0x582030u,582);
}
B5fd899:L5fd899:{c.instructions+=8;NFSU2_TR(0x5fd899);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fd89f:{NFSU2_TR(0x5fd89f);
__builtin_memmove((R+4),gp(0x89e244),4);
}
B5fd8a5:{NFSU2_TR(0x5fd8a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd8a6:{NFSU2_TR(0x5fd8a6);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5fd8aa:{NFSU2_TR(0x5fd8aa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd8ab:{NFSU2_TR(0x5fd8ab);
__builtin_memmove((R+4),(R+28),4);
}
B5fd8ad:{NFSU2_TR(0x5fd8ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd8b1:{NFSU2_TR(0x5fd8b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd8b6ull));
TAIL_STATIC(0x581d90u,581);
}
B5fd8b6:L5fd8b6:{c.instructions+=4;NFSU2_TR(0x5fd8b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fd8ba:{NFSU2_TR(0x5fd8ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd8bb:{NFSU2_TR(0x5fd8bb);
w4(R+4,u32(0x89e118ull));
}
B5fd8c0:{NFSU2_TR(0x5fd8c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd8c5ull));
TAIL_STATIC(0x582030u,582);
}
B5fd8c5:L5fd8c5:{c.instructions+=8;NFSU2_TR(0x5fd8c5);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fd8cb:{NFSU2_TR(0x5fd8cb);
__builtin_memmove((R+4),gp(0x89e244),4);
}
B5fd8d1:{NFSU2_TR(0x5fd8d1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd8d2:{NFSU2_TR(0x5fd8d2);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5fd8d6:{NFSU2_TR(0x5fd8d6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd8d7:{NFSU2_TR(0x5fd8d7);
__builtin_memmove((R+4),(R+28),4);
}
B5fd8d9:{NFSU2_TR(0x5fd8d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd8dd:{NFSU2_TR(0x5fd8dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd8e2ull));
TAIL_STATIC(0x581d90u,581);
}
B5fd8e2:L5fd8e2:{c.instructions+=4;NFSU2_TR(0x5fd8e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fd8e6:{NFSU2_TR(0x5fd8e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd8e7:{NFSU2_TR(0x5fd8e7);
w4(R+4,u32(0x89e118ull));
}
B5fd8ec:{NFSU2_TR(0x5fd8ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd8f1ull));
TAIL_STATIC(0x582030u,582);
}
B5fd8f1:L5fd8f1:{c.instructions+=8;NFSU2_TR(0x5fd8f1);
{u32 ea_=u32(r4(R+24)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fd8f7:{NFSU2_TR(0x5fd8f7);
__builtin_memmove((R+4),gp(0x89e390),4);
}
B5fd8fd:{NFSU2_TR(0x5fd8fd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd8fe:{NFSU2_TR(0x5fd8fe);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5fd902:{NFSU2_TR(0x5fd902);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd903:{NFSU2_TR(0x5fd903);
__builtin_memmove((R+4),(R+28),4);
}
B5fd905:{NFSU2_TR(0x5fd905);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd909:{NFSU2_TR(0x5fd909);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd90eull));
TAIL_STATIC(0x581d90u,581);
}
B5fd90e:L5fd90e:{c.instructions+=4;NFSU2_TR(0x5fd90e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fd912:{NFSU2_TR(0x5fd912);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd913:{NFSU2_TR(0x5fd913);
w4(R+4,u32(0x89e264ull));
}
B5fd918:{NFSU2_TR(0x5fd918);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd91dull));
TAIL_STATIC(0x582030u,582);
}
B5fd91d:L5fd91d:{c.instructions+=1;NFSU2_TR(0x5fd91d);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fd923:L5fd923:{c.instructions+=4;NFSU2_TR(0x5fd923);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fd926:{NFSU2_TR(0x5fd926);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd927:{NFSU2_TR(0x5fd927);
__builtin_memmove((R+4),(R+24),4);
}
B5fd929:{NFSU2_TR(0x5fd929);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd92eull));
TAIL_STATIC(0x5f8900u,5f8);
}
B5fd92e:L5fd92e:{c.instructions+=3;NFSU2_TR(0x5fd92e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fd92f:{NFSU2_TR(0x5fd92f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5fd930:{NFSU2_TR(0x5fd930);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fd931:L5fd931:{c.instructions+=2;NFSU2_TR(0x5fd931);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fd932:{NFSU2_TR(0x5fd932);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fd940:L5fd940:{c.instructions+=11;NFSU2_TR(0x5fd940);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd941:{NFSU2_TR(0x5fd941);
__builtin_memmove((R+20),(R+16),4);
}
B5fd943:{NFSU2_TR(0x5fd943);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5fd946:{NFSU2_TR(0x5fd946);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B5fd949:{NFSU2_TR(0x5fd949);
__builtin_memmove((R+0),gp(0x850098),1);
}
B5fd94e:{NFSU2_TR(0x5fd94e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fd950:{NFSU2_TR(0x5fd950);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd951:{NFSU2_TR(0x5fd951);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd952:{NFSU2_TR(0x5fd952);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fd953:{NFSU2_TR(0x5fd953);
__builtin_memmove((R+24),(R+4),4);
}
B5fd955:{NFSU2_TR(0x5fd955);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fd964;}}
}
B5fd957:L5fd957:{c.instructions+=3;NFSU2_TR(0x5fd957);
__builtin_memmove((R+0),gp(0x864fac),4);
}
B5fd95c:{NFSU2_TR(0x5fd95c);
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
B5fd95e:{NFSU2_TR(0x5fd95e);
if(r1(R+518)){{goto L5fdf6e;}}
}
B5fd964:L5fd964:{c.instructions+=3;NFSU2_TR(0x5fd964);
__builtin_memmove((R+0),gp(0x89d061),1);
}
B5fd969:{NFSU2_TR(0x5fd969);
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
B5fd96b:{NFSU2_TR(0x5fd96b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fdf6e;}}
}
B5fd971:L5fd971:{c.instructions+=2;NFSU2_TR(0x5fd971);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xbf800000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5fd97b:{NFSU2_TR(0x5fd97b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fd9b0;}}
}
B5fd97d:L5fd97d:{c.instructions+=3;NFSU2_TR(0x5fd97d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fd980:{NFSU2_TR(0x5fd980);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B5fd983:{NFSU2_TR(0x5fd983);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd988ull));
TAIL_STATIC(0x592480u,592);
}
B5fd988:L5fd988:{c.instructions+=10;NFSU2_TR(0x5fd988);
{u32 ea_=u32(r4(R+24)+u32(440u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fd98e:{NFSU2_TR(0x5fd98e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fd991:{NFSU2_TR(0x5fd991);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fd994:{NFSU2_TR(0x5fd994);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B5fd997:{NFSU2_TR(0x5fd997);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fd99a:{NFSU2_TR(0x5fd99a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5fd99c:{NFSU2_TR(0x5fd99c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5fd99e:{NFSU2_TR(0x5fd99e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd9a4:{NFSU2_TR(0x5fd9a4);
{u32 ea_=u32(r4(R+24)+u32(452u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fd9aa:{NFSU2_TR(0x5fd9aa);
{u32 ea_=u32(r4(R+24)+u32(456u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fd9b0:L5fd9b0:{c.instructions+=4;NFSU2_TR(0x5fd9b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fd9b3:{NFSU2_TR(0x5fd9b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fd9b6:{NFSU2_TR(0x5fd9b6);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5fd9ba:{NFSU2_TR(0x5fd9ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fda06;}}
}
B5fd9bc:L5fd9bc:{c.instructions+=3;NFSU2_TR(0x5fd9bc);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5fd9c2:{NFSU2_TR(0x5fd9c2);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fd9c4:{NFSU2_TR(0x5fd9c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fda06;}}
}
B5fd9c6:L5fd9c6:{c.instructions+=2;NFSU2_TR(0x5fd9c6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B5fd9c9:{NFSU2_TR(0x5fd9c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fd9ceull));
TAIL_STATIC(0x59fa30u,59f);
}
B5fd9ce:L5fd9ce:{c.instructions+=4;NFSU2_TR(0x5fd9ce);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5fd9d0:{NFSU2_TR(0x5fd9d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fd9d2:{NFSU2_TR(0x5fd9d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fd9d8:{NFSU2_TR(0x5fd9d8);
if(r1(R+518)){{goto L5fd9f3;}}
}
B5fd9da:L5fd9da:{c.instructions+=2;NFSU2_TR(0x5fd9da);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fd9dc:{NFSU2_TR(0x5fd9dc);
if(r1(R+518)){{goto L5fd9e5;}}
}
B5fd9de:L5fd9de:{c.instructions+=2;NFSU2_TR(0x5fd9de);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fd9e3:{NFSU2_TR(0x5fd9e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fda08;}}
}
B5fd9e5:L5fd9e5:{c.instructions+=3;NFSU2_TR(0x5fd9e5);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B5fd9eb:{NFSU2_TR(0x5fd9eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fd9f1:{NFSU2_TR(0x5fd9f1);
{goto L5fda08;}
}
B5fd9f3:L5fd9f3:{c.instructions+=2;NFSU2_TR(0x5fd9f3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fd9f5:{NFSU2_TR(0x5fd9f5);
if(r1(R+518)){{goto L5fda08;}}
}
B5fd9f7:L5fd9f7:{c.instructions+=2;NFSU2_TR(0x5fd9f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fd9fc:{NFSU2_TR(0x5fd9fc);
if(r1(R+518)){{goto L5fda08;}}
}
B5fd9fe:L5fd9fe:{c.instructions+=2;NFSU2_TR(0x5fd9fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fda04:{NFSU2_TR(0x5fda04);
{goto L5fda08;}
}
B5fda06:L5fda06:{c.instructions+=1;NFSU2_TR(0x5fda06);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5fda08:L5fda08:{c.instructions+=2;NFSU2_TR(0x5fda08);
u8 U[14];
__builtin_memmove((U+6),gp(0x89cf48),4);
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
B5fda0f:{NFSU2_TR(0x5fda0f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fdf6e;}}
}
B5fda15:L5fda15:{c.instructions+=9;NFSU2_TR(0x5fda15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fda18:{NFSU2_TR(0x5fda18);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5fda1c:{NFSU2_TR(0x5fda1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x42cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fda22:{NFSU2_TR(0x5fda22);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89cf50ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B5fda29:{NFSU2_TR(0x5fda29);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fda2c:{NFSU2_TR(0x5fda2c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fda2f:{NFSU2_TR(0x5fda2f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fda33:{NFSU2_TR(0x5fda33);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fda37:{NFSU2_TR(0x5fda37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fda3cull));
TAIL_STATIC(0x5b5930u,5b5);
}
B5fda3c:L5fda3c:{c.instructions+=5;NFSU2_TR(0x5fda3c);
{u32 ea_=u32(u32(8017624u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fda42:{NFSU2_TR(0x5fda42);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fda46:{NFSU2_TR(0x5fda46);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fda48:{NFSU2_TR(0x5fda48);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5fda4b:{NFSU2_TR(0x5fda4b);
if(r1(R+514)){{goto L5fda56;}}
}
B5fda4d:L5fda4d:{c.instructions+=3;NFSU2_TR(0x5fda4d);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fda4f:{NFSU2_TR(0x5fda4f);
__builtin_memmove((R+4),(R+28),4);
}
B5fda51:{NFSU2_TR(0x5fda51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fda56ull));
TAIL_STATIC(0x5f9010u,5f9);
}
B5fda56:L5fda56:{c.instructions+=3;NFSU2_TR(0x5fda56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fda5c:{NFSU2_TR(0x5fda5c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fda5e:{NFSU2_TR(0x5fda5e);
if(r1(R+518)){{goto L5fdaaf;}}
}
B5fda60:L5fda60:{c.instructions+=2;NFSU2_TR(0x5fda60);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fda65:{NFSU2_TR(0x5fda65);
if(r1(R+518)){{goto L5fdaaf;}}
}
B5fda67:L5fda67:{c.instructions+=11;NFSU2_TR(0x5fda67);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B5fda6c:{NFSU2_TR(0x5fda6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B5fda72:{NFSU2_TR(0x5fda72);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fda76:{NFSU2_TR(0x5fda76);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5fda7a:{NFSU2_TR(0x5fda7a);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fda80:{NFSU2_TR(0x5fda80);
{u32 ea_=u32(r4(R+24)+u32(440u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5fda86:{NFSU2_TR(0x5fda86);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fda8c:{NFSU2_TR(0x5fda8c);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5fda8e:{NFSU2_TR(0x5fda8e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fda90:{NFSU2_TR(0x5fda90);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fda93:{NFSU2_TR(0x5fda93);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fda9d;}}
}
B5fda95:L5fda95:{c.instructions+=2;NFSU2_TR(0x5fda95);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5fda97:{NFSU2_TR(0x5fda97);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fda9d:L5fda9d:{c.instructions+=3;NFSU2_TR(0x5fda9d);
{u32 ea_=u32(r4(R+24)+u32(440u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fdaa3:{NFSU2_TR(0x5fdaa3);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B5fdaa9:{NFSU2_TR(0x5fdaa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fdaaf:L5fdaaf:{c.instructions+=3;NFSU2_TR(0x5fdaaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fdab2:{NFSU2_TR(0x5fdab2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fdab5:{NFSU2_TR(0x5fdab5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fdabaull));
TAIL_STATIC(0x59fa30u,59f);
}
B5fdaba:L5fdaba:{c.instructions+=2;NFSU2_TR(0x5fdaba);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fdabc:{NFSU2_TR(0x5fdabc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fdac8;}}
}
B5fdabe:L5fdabe:{c.instructions+=3;NFSU2_TR(0x5fdabe);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5fdac4:{NFSU2_TR(0x5fdac4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fdac6:{NFSU2_TR(0x5fdac6);
if(r1(R+518)){{goto L5fdb21;}}
}
B5fdac8:L5fdac8:{c.instructions+=3;NFSU2_TR(0x5fdac8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fdacb:{NFSU2_TR(0x5fdacb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B5fdace:{NFSU2_TR(0x5fdace);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fdad3ull));
TAIL_STATIC(0x592480u,592);
}
B5fdad3:L5fdad3:{c.instructions+=6;NFSU2_TR(0x5fdad3);
{u32 ea_=u32(u32(8017620u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fdad9:{NFSU2_TR(0x5fdad9);
{u32 ea_=u32(r4(R+24)+u32(440u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5fdadf:{NFSU2_TR(0x5fdadf);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5fdae1:{NFSU2_TR(0x5fdae1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fdae3:{NFSU2_TR(0x5fdae3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5fdae6:{NFSU2_TR(0x5fdae6);
if(r1(R+514)){{goto L5fdb21;}}
}
B5fdae8:L5fdae8:{c.instructions+=3;NFSU2_TR(0x5fdae8);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fdaea:{NFSU2_TR(0x5fdaea);
__builtin_memmove((R+4),(R+28),4);
}
B5fdaec:{NFSU2_TR(0x5fdaec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fdaf1ull));
TAIL_STATIC(0x5f9010u,5f9);
}
B5fdaf1:L5fdaf1:{c.instructions+=3;NFSU2_TR(0x5fdaf1);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B5fdaf6:{NFSU2_TR(0x5fdaf6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fdaf8:{NFSU2_TR(0x5fdaf8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fdb21;}}
}
B5fdafa:L5fdafa:{c.instructions+=2;NFSU2_TR(0x5fdafa);
u8 U[8];
__builtin_memmove((U+0),gp(0x890104),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fdb00:{NFSU2_TR(0x5fdb00);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fdb21;}}
}
B5fdb02:L5fdb02:{c.instructions+=2;NFSU2_TR(0x5fdb02);
w4(R+4,u32(0x89e7a0ull));
}
B5fdb07:{NFSU2_TR(0x5fdb07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fdb0cull));
TAIL_STATIC(0x401930u,401);
}
B5fdb0c:L5fdb0c:{c.instructions+=2;NFSU2_TR(0x5fdb0c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fdb0e:{NFSU2_TR(0x5fdb0e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fdb21;}}
}
B5fdb10:L5fdb10:{c.instructions+=3;NFSU2_TR(0x5fdb10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fdb13:{NFSU2_TR(0x5fdb13);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B5fdb16:{NFSU2_TR(0x5fdb16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fdb1bull));
TAIL_STATIC(0x592480u,592);
}
B5fdb1b:L5fdb1b:{c.instructions+=1;NFSU2_TR(0x5fdb1b);
{u32 ea_=u32(r4(R+24)+u32(440u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fdb21:L5fdb21:{c.instructions+=4;NFSU2_TR(0x5fdb21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fdb24:{NFSU2_TR(0x5fdb24);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fdb2a:{NFSU2_TR(0x5fdb2a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fdb2c:{NFSU2_TR(0x5fdb2c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fdb3b;}}
}
B5fdb2e:L5fdb2e:{c.instructions+=3;NFSU2_TR(0x5fdb2e);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B5fdb33:{NFSU2_TR(0x5fdb33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fdb39:{NFSU2_TR(0x5fdb39);
{goto L5fdb4c;}
}
B5fdb3b:L5fdb3b:{c.instructions+=2;NFSU2_TR(0x5fdb3b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fdb3e:{NFSU2_TR(0x5fdb3e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fdb4c;}}
}
B5fdb40:L5fdb40:{c.instructions+=2;NFSU2_TR(0x5fdb40);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B5fdb46:{NFSU2_TR(0x5fdb46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fdb4c:L5fdb4c:{c.instructions+=2;NFSU2_TR(0x5fdb4c);
__builtin_memmove((R+4),(R+24),4);
}
B5fdb4e:{NFSU2_TR(0x5fdb4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fdb53ull));
TAIL_STATIC(0x5f8ac0u,5f8);
}
B5fdb53:L5fdb53:{c.instructions+=2;NFSU2_TR(0x5fdb53);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fdb55:{NFSU2_TR(0x5fdb55);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5fdb63;}}
}
B5fdb57:L5fdb57:{c.instructions+=2;NFSU2_TR(0x5fdb57);
__builtin_memmove((R+8),gp(0x8651ac),4);
}
B5fdb5d:{NFSU2_TR(0x5fdb5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x228ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fdb63:L5fdb63:{c.instructions+=13;NFSU2_TR(0x5fdb63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fdb66:{NFSU2_TR(0x5fdb66);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fdb69:{NFSU2_TR(0x5fdb69);
{u32 ea_=u32(r4(R+0)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fdb6c:{NFSU2_TR(0x5fdb6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fdb70:{NFSU2_TR(0x5fdb70);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fdb74:{NFSU2_TR(0x5fdb74);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fdb7c:{NFSU2_TR(0x5fdb7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fdb82:{NFSU2_TR(0x5fdb82);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5fdb86:{NFSU2_TR(0x5fdb86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fdb87:{NFSU2_TR(0x5fdb87);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5fdb8b:{NFSU2_TR(0x5fdb8b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fdb8c:{NFSU2_TR(0x5fdb8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fdb90:{NFSU2_TR(0x5fdb90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fdb95ull));
TAIL_STATIC(0x43cf10u,43c);
}
B5fdb95:L5fdb95:{c.instructions+=10;NFSU2_TR(0x5fdb95);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fdb99:{NFSU2_TR(0x5fdb99);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fdb9d:{NFSU2_TR(0x5fdb9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fdba1:{NFSU2_TR(0x5fdba1);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fdba5:{NFSU2_TR(0x5fdba5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fdba8:{NFSU2_TR(0x5fdba8);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fdbac:{NFSU2_TR(0x5fdbac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5fdbaf:{NFSU2_TR(0x5fdbaf);
__builtin_memmove((R+4),(R+8),4);
}
B5fdbb1:{NFSU2_TR(0x5fdbb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fdbb5:{NFSU2_TR(0x5fdbb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fdbbaull));
TAIL_STATIC(0x5ebfa0u,5eb);
}
B5fdbba:L5fdbba:{c.instructions+=2;NFSU2_TR(0x5fdbba);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fdbbc:{NFSU2_TR(0x5fdbbc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fdc79;}}
}
B5fdbc2:L5fdbc2:{c.instructions+=3;NFSU2_TR(0x5fdbc2);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x998ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5fdbc8:{NFSU2_TR(0x5fdbc8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fdbca:{NFSU2_TR(0x5fdbca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fdc79;}}
}
B5fdbd0:L5fdbd0:{c.instructions+=12;NFSU2_TR(0x5fdbd0);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fdbd4:{NFSU2_TR(0x5fdbd4);
{u32 ea_=u32(r4(R+8)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fdbda:{NFSU2_TR(0x5fdbda);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fdbde:{NFSU2_TR(0x5fdbde);
{u32 ea_=u32(r4(R+8)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fdbe4:{NFSU2_TR(0x5fdbe4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5fdbe6:{NFSU2_TR(0x5fdbe6);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fdbea:{NFSU2_TR(0x5fdbea);
{u32 ea_=u32(r4(R+8)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fdbf0:{NFSU2_TR(0x5fdbf0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5fdbf2:{NFSU2_TR(0x5fdbf2);
{u32 ea_=u32(u32(8017640u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fdbf8:{NFSU2_TR(0x5fdbf8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fdbfa:{NFSU2_TR(0x5fdbfa);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5fdbfd:{NFSU2_TR(0x5fdbfd);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5fdc79;}}
}
B5fdbff:L5fdbff:{c.instructions+=11;NFSU2_TR(0x5fdbff);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B5fdc05:{NFSU2_TR(0x5fdc05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5fdc0b:{NFSU2_TR(0x5fdc0b);
__builtin_memmove((R+0),(R+4),4);
}
B5fdc0d:{NFSU2_TR(0x5fdc0d);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B5fdc0f:{NFSU2_TR(0x5fdc0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fdc13:{NFSU2_TR(0x5fdc13);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5fdc17:{NFSU2_TR(0x5fdc17);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fdc1d:{NFSU2_TR(0x5fdc1d);
{u32 ea_=u32(u32(8017632u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fdc23:{NFSU2_TR(0x5fdc23);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fdc25:{NFSU2_TR(0x5fdc25);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5fdc28:{NFSU2_TR(0x5fdc28);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5fdc79;}}
}
B5fdc2a:L5fdc2a:{c.instructions+=8;NFSU2_TR(0x5fdc2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x228ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B5fdc30:{NFSU2_TR(0x5fdc30);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fdc34:{NFSU2_TR(0x5fdc34);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5fdc38:{NFSU2_TR(0x5fdc38);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fdc3e:{NFSU2_TR(0x5fdc3e);
{u32 ea_=u32(u32(8017632u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fdc44:{NFSU2_TR(0x5fdc44);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fdc46:{NFSU2_TR(0x5fdc46);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5fdc49:{NFSU2_TR(0x5fdc49);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5fdc79;}}
}
B5fdc4b:L5fdc4b:{c.instructions+=11;NFSU2_TR(0x5fdc4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fdc51:{NFSU2_TR(0x5fdc51);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B5fdc57:{NFSU2_TR(0x5fdc57);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B5fdc59:{NFSU2_TR(0x5fdc59);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fdc5d:{NFSU2_TR(0x5fdc5d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5fdc61:{NFSU2_TR(0x5fdc61);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5fdc66:{NFSU2_TR(0x5fdc66);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fdc6c:{NFSU2_TR(0x5fdc6c);
{u32 ea_=u32(u32(8017632u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fdc72:{NFSU2_TR(0x5fdc72);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fdc74:{NFSU2_TR(0x5fdc74);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5fdc77:{NFSU2_TR(0x5fdc77);
if(r1(R+514)){{goto L5fdc7e;}}
}
B5fdc79:L5fdc79:{c.instructions+=1;NFSU2_TR(0x5fdc79);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5fdc7e:L5fdc7e:{c.instructions+=2;NFSU2_TR(0x5fdc7e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fdc81:{NFSU2_TR(0x5fdc81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fdc86ull));
TAIL_STATIC(0x59fa30u,59f);
}
B5fdc86:L5fdc86:{c.instructions+=2;NFSU2_TR(0x5fdc86);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fdc88:{NFSU2_TR(0x5fdc88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fdd11;}}
}
B5fdc8e:L5fdc8e:{c.instructions+=3;NFSU2_TR(0x5fdc8e);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B5fdc93:{NFSU2_TR(0x5fdc93);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fdc95:{NFSU2_TR(0x5fdc95);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fdc9f;}}
}
B5fdc97:L5fdc97:{c.instructions+=2;NFSU2_TR(0x5fdc97);
u8 U[8];
__builtin_memmove((U+0),gp(0x890108),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fdc9d:{NFSU2_TR(0x5fdc9d);
if(r1(R+518)){{goto L5fdcbe;}}
}
B5fdc9f:L5fdc9f:{c.instructions+=2;NFSU2_TR(0x5fdc9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fdca2:{NFSU2_TR(0x5fdca2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fdca7ull));
TAIL_STATIC(0x5ece60u,5ec);
}
B5fdca7:L5fdca7:{c.instructions+=2;NFSU2_TR(0x5fdca7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fdca9:{NFSU2_TR(0x5fdca9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fdd11;}}
}
B5fdcab:L5fdcab:{c.instructions+=5;NFSU2_TR(0x5fdcab);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fdcb1:{NFSU2_TR(0x5fdcb1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fdcb7:{NFSU2_TR(0x5fdcb7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fdcb9:{NFSU2_TR(0x5fdcb9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5fdcbc:{NFSU2_TR(0x5fdcbc);
if(r1(R+514)){{goto L5fdd11;}}
}
B5fdcbe:L5fdcbe:{c.instructions+=3;NFSU2_TR(0x5fdcbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fdcc4:{NFSU2_TR(0x5fdcc4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fdcc6:{NFSU2_TR(0x5fdcc6);
if(r1(R+518)){{goto L5fddb8;}}
}
B5fdccc:L5fdccc:{c.instructions+=2;NFSU2_TR(0x5fdccc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fdcd1:{NFSU2_TR(0x5fdcd1);
if(r1(R+518)){{goto L5fddb8;}}
}
B5fdcd7:L5fdcd7:{c.instructions+=10;NFSU2_TR(0x5fdcd7);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B5fdcdd:{NFSU2_TR(0x5fdcdd);
__builtin_memmove((R+8),(R+4),4);
}
B5fdcdf:{NFSU2_TR(0x5fdcdf);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B5fdce1:{NFSU2_TR(0x5fdce1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fdce5:{NFSU2_TR(0x5fdce5);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5fdce9:{NFSU2_TR(0x5fdce9);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fdcef:{NFSU2_TR(0x5fdcef);
{u32 ea_=u32(u32(8017652u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fdcf5:{NFSU2_TR(0x5fdcf5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fdcf7:{NFSU2_TR(0x5fdcf7);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fdcfa:{NFSU2_TR(0x5fdcfa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fddc0;}}
}
B5fdd00:L5fdd00:{c.instructions+=3;NFSU2_TR(0x5fdd00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fdd06:{NFSU2_TR(0x5fdd06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fdd0c:{NFSU2_TR(0x5fdd0c);
{goto L5fdd96;}
}
B5fdd11:L5fdd11:{c.instructions+=3;NFSU2_TR(0x5fdd11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fdd17:{NFSU2_TR(0x5fdd17);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fdd19:{NFSU2_TR(0x5fdd19);
if(r1(R+518)){{goto L5fdd29;}}
}
B5fdd1b:L5fdd1b:{c.instructions+=2;NFSU2_TR(0x5fdd1b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fdd20:{NFSU2_TR(0x5fdd20);
if(r1(R+518)){{goto L5fdd29;}}
}
B5fdd22:L5fdd22:{c.instructions+=2;NFSU2_TR(0x5fdd22);
w4(R+0,u32(0x1ull));
}
B5fdd27:{NFSU2_TR(0x5fdd27);
{goto L5fdd2b;}
}
B5fdd29:L5fdd29:{c.instructions+=1;NFSU2_TR(0x5fdd29);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5fdd2b:L5fdd2b:{c.instructions+=7;NFSU2_TR(0x5fdd2b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fdd2d:{NFSU2_TR(0x5fdd2d);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B5fdd32:{NFSU2_TR(0x5fdd32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fdd38:{NFSU2_TR(0x5fdd38);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B5fdd3d:{NFSU2_TR(0x5fdd3d);
__builtin_memmove((R+12),(R+518),1);
}
B5fdd40:{NFSU2_TR(0x5fdd40);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fdd42:{NFSU2_TR(0x5fdd42);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fdd4d;}}
}
B5fdd44:L5fdd44:{c.instructions+=3;NFSU2_TR(0x5fdd44);
__builtin_memmove((R+0),gp(0x890108),4);
}
B5fdd49:{NFSU2_TR(0x5fdd49);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fdd4b:{NFSU2_TR(0x5fdd4b);
if(r1(R+518)){{goto L5fdd92;}}
}
B5fdd4d:L5fdd4d:{c.instructions+=3;NFSU2_TR(0x5fdd4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fdd53:{NFSU2_TR(0x5fdd53);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fdd55:{NFSU2_TR(0x5fdd55);
if(r1(R+518)){{goto L5fdd5e;}}
}
B5fdd57:L5fdd57:{c.instructions+=2;NFSU2_TR(0x5fdd57);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fdd5c:{NFSU2_TR(0x5fdd5c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fdd92;}}
}
B5fdd5e:L5fdd5e:{c.instructions+=3;NFSU2_TR(0x5fdd5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5fdd61:{NFSU2_TR(0x5fdd61);
__builtin_memmove((R+4),(R+28),4);
}
B5fdd63:{NFSU2_TR(0x5fdd63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fdd68ull));
TAIL_STATIC(0x431dd0u,431);
}
B5fdd68:L5fdd68:{c.instructions+=2;NFSU2_TR(0x5fdd68);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fdd6a:{NFSU2_TR(0x5fdd6a);
if(r1(R+518)){{goto L5fdd86;}}
}
B5fdd6c:L5fdd6c:{c.instructions+=2;NFSU2_TR(0x5fdd6c);
__builtin_memmove((R+4),(R+28),4);
}
B5fdd6e:{NFSU2_TR(0x5fdd6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fdd73ull));
TAIL_STATIC(0x5ece60u,5ec);
}
B5fdd73:L5fdd73:{c.instructions+=2;NFSU2_TR(0x5fdd73);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fdd75:{NFSU2_TR(0x5fdd75);
if(r1(R+518)){{goto L5fdd86;}}
}
B5fdd77:L5fdd77:{c.instructions+=2;NFSU2_TR(0x5fdd77);
__builtin_memmove((R+4),(R+28),4);
}
B5fdd79:{NFSU2_TR(0x5fdd79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fdd7eull));
TAIL_STATIC(0x5ecea0u,5ec);
}
B5fdd7e:L5fdd7e:{c.instructions+=2;NFSU2_TR(0x5fdd7e);
{u32 ea_=u32(r4(R+24)+u32(560u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fdd84:{NFSU2_TR(0x5fdd84);
{goto L5fdd92;}
}
B5fdd86:L5fdd86:{c.instructions+=2;NFSU2_TR(0x5fdd86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fdd8c:{NFSU2_TR(0x5fdd8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fdd92:L5fdd92:{c.instructions+=2;NFSU2_TR(0x5fdd92);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fdd94:{NFSU2_TR(0x5fdd94);
if(r1(R+518)){{goto L5fddb8;}}
}
B5fdd96:L5fdd96:{c.instructions+=4;NFSU2_TR(0x5fdd96);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5fdd98:{NFSU2_TR(0x5fdd98);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fdd99:{NFSU2_TR(0x5fdd99);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fdd9f:{NFSU2_TR(0x5fdd9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fdda4ull));
TAIL_STATIC(0x576a10u,576);
}
B5fdda4:L5fdda4:{c.instructions+=3;NFSU2_TR(0x5fdda4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fdda5:{NFSU2_TR(0x5fdda5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fddab:{NFSU2_TR(0x5fddab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fddb0ull));
TAIL_STATIC(0x576a10u,576);
}
B5fddb0:L5fddb0:{c.instructions+=2;NFSU2_TR(0x5fddb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fddb6:{NFSU2_TR(0x5fddb6);
{goto L5fddba;}
}
B5fddb8:L5fddb8:{c.instructions+=1;NFSU2_TR(0x5fddb8);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5fddba:L5fddba:{c.instructions+=1;NFSU2_TR(0x5fddba);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B5fddc0:L5fddc0:{c.instructions+=3;NFSU2_TR(0x5fddc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fddc6:{NFSU2_TR(0x5fddc6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fddc8:{NFSU2_TR(0x5fddc8);
if(r1(R+518)){{goto L5fdf14;}}
}
B5fddce:L5fddce:{c.instructions+=2;NFSU2_TR(0x5fddce);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fddd3:{NFSU2_TR(0x5fddd3);
if(r1(R+518)){{goto L5fdf14;}}
}
B5fddd9:L5fddd9:{c.instructions+=8;NFSU2_TR(0x5fddd9);
__builtin_memmove((R+8),(R+0),4);
}
B5fdddb:{NFSU2_TR(0x5fdddb);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5fdddf:{NFSU2_TR(0x5fdddf);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B5fdde1:{NFSU2_TR(0x5fdde1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fdde3:{NFSU2_TR(0x5fdde3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fdde7:{NFSU2_TR(0x5fdde7);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5fddeb:{NFSU2_TR(0x5fddeb);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fddf1:{NFSU2_TR(0x5fddf1);
if(r1(R+518)){{goto L5fde14;}}
}
B5fddf3:L5fddf3:{c.instructions+=4;NFSU2_TR(0x5fddf3);
{u32 ea_=u32(u32(8017648u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5fddf9:{NFSU2_TR(0x5fddf9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fddfb:{NFSU2_TR(0x5fddfb);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fddfe:{NFSU2_TR(0x5fddfe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fde0a;}}
}
B5fde00:L5fde00:{c.instructions+=3;NFSU2_TR(0x5fde00);
w1(R+0,u8(0x1ull));
}
B5fde02:{NFSU2_TR(0x5fde02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fde08:{NFSU2_TR(0x5fde08);
{goto L5fde31;}
}
B5fde0a:L5fde0a:{c.instructions+=3;NFSU2_TR(0x5fde0a);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B5fde0c:{NFSU2_TR(0x5fde0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fde12:{NFSU2_TR(0x5fde12);
{goto L5fde31;}
}
B5fde14:L5fde14:{c.instructions+=4;NFSU2_TR(0x5fde14);
{u32 ea_=u32(u32(8017644u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5fde1a:{NFSU2_TR(0x5fde1a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fde1c:{NFSU2_TR(0x5fde1c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fde1f:{NFSU2_TR(0x5fde1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fde25;}}
}
B5fde21:L5fde21:{c.instructions+=2;NFSU2_TR(0x5fde21);
w1(R+0,u8(0x1ull));
}
B5fde23:{NFSU2_TR(0x5fde23);
{goto L5fde27;}
}
B5fde25:L5fde25:{c.instructions+=1;NFSU2_TR(0x5fde25);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B5fde27:L5fde27:{c.instructions+=2;NFSU2_TR(0x5fde27);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fde2b:{NFSU2_TR(0x5fde2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fde31:L5fde31:{c.instructions+=2;NFSU2_TR(0x5fde31);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fde33:{NFSU2_TR(0x5fde33);
if(r1(R+518)){{goto L5fdf12;}}
}
B5fde39:L5fde39:{c.instructions+=14;NFSU2_TR(0x5fde39);
{u32 ea_=u32(r4(R+24)+u32(568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fde3f:{NFSU2_TR(0x5fde3f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fde40:{NFSU2_TR(0x5fde40);
{u32 ea_=u32(r4(R+24)+u32(564u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5fde46:{NFSU2_TR(0x5fde46);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fde4c:{NFSU2_TR(0x5fde4c);
__builtin_memmove((R+4),(R+28),4);
}
B5fde4e:{NFSU2_TR(0x5fde4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fde54:{NFSU2_TR(0x5fde54);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fde5a:{NFSU2_TR(0x5fde5a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fde5e:{NFSU2_TR(0x5fde5e);
{u32 ea_=u32(r4(R+24)+u32(568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fde64:{NFSU2_TR(0x5fde64);
{u32 ea_=u32(r4(R+24)+u32(564u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5fde6a:{NFSU2_TR(0x5fde6a);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B5fde6c:{NFSU2_TR(0x5fde6c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fde6f:{NFSU2_TR(0x5fde6f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5fde71:{NFSU2_TR(0x5fde71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fde76ull));
TAIL_STATIC(0x576970u,576);
}
B5fde76:L5fde76:{c.instructions+=5;NFSU2_TR(0x5fde76);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fde7a:{NFSU2_TR(0x5fde7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fde80:{NFSU2_TR(0x5fde80);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fde81:{NFSU2_TR(0x5fde81);
__builtin_memmove((R+4),(R+12),4);
}
B5fde83:{NFSU2_TR(0x5fde83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fde88ull));
TAIL_STATIC(0x576970u,576);
}
B5fde88:L5fde88:{c.instructions+=12;NFSU2_TR(0x5fde88);
{u32 ea_=u32(r4(R+24)+u32(412u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fde8e:{NFSU2_TR(0x5fde8e);
__builtin_memmove((R+4),gp(0x8025cc),4);
}
B5fde94:{NFSU2_TR(0x5fde94);
__builtin_memmove((R+8),gp(0x8025c8),4);
}
B5fde9a:{NFSU2_TR(0x5fde9a);
__builtin_memmove((R+0),gp(0x8025c4),4);
}
B5fde9f:{NFSU2_TR(0x5fde9f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fdea0:{NFSU2_TR(0x5fdea0);
__builtin_memmove((R+4),gp(0x8025c0),4);
}
B5fdea6:{NFSU2_TR(0x5fdea6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fdea7:{NFSU2_TR(0x5fdea7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fdea8:{NFSU2_TR(0x5fdea8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fdea9:{NFSU2_TR(0x5fdea9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fdeaa:{NFSU2_TR(0x5fdeaa);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fdead:{NFSU2_TR(0x5fdead);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fdeb2ull));
TAIL_STATIC(0x401790u,401);
}
B5fdeb2:L5fdeb2:{c.instructions+=7;NFSU2_TR(0x5fdeb2);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fdeb6:{NFSU2_TR(0x5fdeb6);
{u32 ea_=u32(r4(R+24)+u32(516u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fdebc:{NFSU2_TR(0x5fdebc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B5fdebf:{NFSU2_TR(0x5fdebf);
{u32 ea_=u32(u32(8017636u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fdec5:{NFSU2_TR(0x5fdec5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fdec7:{NFSU2_TR(0x5fdec7);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fdeca:{NFSU2_TR(0x5fdeca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fdf14;}}
}
B5fdecc:L5fdecc:{c.instructions+=6;NFSU2_TR(0x5fdecc);
{u32 ea_=u32(r4(R+24)+u32(476u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fded2:{NFSU2_TR(0x5fded2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x204ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fded8:{NFSU2_TR(0x5fded8);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fdedc:{NFSU2_TR(0x5fdedc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fdedd:{NFSU2_TR(0x5fdedd);
__builtin_memmove((R+4),(R+24),4);
}
B5fdedf:{NFSU2_TR(0x5fdedf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fdee4ull));
TAIL_STATIC(0x5f8e40u,5f8);
}
B5fdee4:L5fdee4:{c.instructions+=5;NFSU2_TR(0x5fdee4);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5fdee8:{NFSU2_TR(0x5fdee8);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fdeec:{NFSU2_TR(0x5fdeec);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fdeee:{NFSU2_TR(0x5fdeee);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fdef1:{NFSU2_TR(0x5fdef1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fdf14;}}
}
B5fdef3:L5fdef3:{c.instructions+=3;NFSU2_TR(0x5fdef3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fdef7:{NFSU2_TR(0x5fdef7);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fdef9:{NFSU2_TR(0x5fdef9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fdefeull));
TAIL_STATIC(0x5f9010u,5f9);
}
B5fdefe:L5fdefe:{c.instructions+=3;NFSU2_TR(0x5fdefe);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fdf00:{NFSU2_TR(0x5fdf00);
__builtin_memmove((R+4),(R+28),4);
}
B5fdf02:{NFSU2_TR(0x5fdf02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fdf07ull));
TAIL_STATIC(0x576a10u,576);
}
B5fdf07:L5fdf07:{c.instructions+=3;NFSU2_TR(0x5fdf07);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fdf09:{NFSU2_TR(0x5fdf09);
__builtin_memmove((R+4),(R+12),4);
}
B5fdf0b:{NFSU2_TR(0x5fdf0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fdf10ull));
TAIL_STATIC(0x576a10u,576);
}
B5fdf10:L5fdf10:{c.instructions+=1;NFSU2_TR(0x5fdf10);
{goto L5fdf14;}
}
B5fdf12:L5fdf12:{c.instructions+=1;NFSU2_TR(0x5fdf12);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5fdf14:L5fdf14:{c.instructions+=3;NFSU2_TR(0x5fdf14);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5fdf18:{NFSU2_TR(0x5fdf18);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fdf1a:{NFSU2_TR(0x5fdf1a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fdf54;}}
}
B5fdf1c:L5fdf1c:{c.instructions+=3;NFSU2_TR(0x5fdf1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fdf22:{NFSU2_TR(0x5fdf22);
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
B5fdf24:{NFSU2_TR(0x5fdf24);
if(r1(R+518)){{goto L5fdf2d;}}
}
B5fdf26:L5fdf26:{c.instructions+=2;NFSU2_TR(0x5fdf26);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7fffffffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffffffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5fdf2b:{NFSU2_TR(0x5fdf2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fdf6e;}}
}
B5fdf2d:L5fdf2d:{c.instructions+=12;NFSU2_TR(0x5fdf2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fdf31:{NFSU2_TR(0x5fdf31);
__builtin_memmove((R+4),(R+0),4);
}
B5fdf33:{NFSU2_TR(0x5fdf33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fdf39:{NFSU2_TR(0x5fdf39);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x234ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fdf3f:{NFSU2_TR(0x5fdf3f);
__builtin_memmove((R+8),gp(0x8651ac),4);
}
B5fdf45:{NFSU2_TR(0x5fdf45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fdf4b:{NFSU2_TR(0x5fdf4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fdf4c:{NFSU2_TR(0x5fdf4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fdf4d:{NFSU2_TR(0x5fdf4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fdf4e:{NFSU2_TR(0x5fdf4e);
__builtin_memmove((R+16),(R+20),4);
}
B5fdf50:{NFSU2_TR(0x5fdf50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5fdf51:{NFSU2_TR(0x5fdf51);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fdf54:L5fdf54:{c.instructions+=3;NFSU2_TR(0x5fdf54);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fdf56:{NFSU2_TR(0x5fdf56);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fdf5c:{NFSU2_TR(0x5fdf5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fdf61ull));
TAIL_STATIC(0x576a10u,576);
}
B5fdf61:L5fdf61:{c.instructions+=3;NFSU2_TR(0x5fdf61);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fdf63:{NFSU2_TR(0x5fdf63);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fdf69:{NFSU2_TR(0x5fdf69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fdf6eull));
TAIL_STATIC(0x576a10u,576);
}
B5fdf6e:L5fdf6e:{c.instructions+=6;NFSU2_TR(0x5fdf6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fdf6f:{NFSU2_TR(0x5fdf6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fdf70:{NFSU2_TR(0x5fdf70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fdf71:{NFSU2_TR(0x5fdf71);
__builtin_memmove((R+16),(R+20),4);
}
B5fdf73:{NFSU2_TR(0x5fdf73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5fdf74:{NFSU2_TR(0x5fdf74);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fdf80:L5fdf80:{c.instructions+=7;NFSU2_TR(0x5fdf80);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fdf81:{NFSU2_TR(0x5fdf81);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fdf82:{NFSU2_TR(0x5fdf82);
__builtin_memmove((R+24),(R+4),4);
}
B5fdf84:{NFSU2_TR(0x5fdf84);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fdf87:{NFSU2_TR(0x5fdf87);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fdf88:{NFSU2_TR(0x5fdf88);
__builtin_memmove((R+4),(R+12),4);
}
B5fdf8a:{NFSU2_TR(0x5fdf8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fdf8full));
TAIL_STATIC(0x4fe1c0u,4fe);
}
B5fdf8f:L5fdf8f:{c.instructions+=24;NFSU2_TR(0x5fdf8f);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5fdf93:{NFSU2_TR(0x5fdf93);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5fdf97:{NFSU2_TR(0x5fdf97);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5fdf99:{NFSU2_TR(0x5fdf99);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x274ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fdf9f:{NFSU2_TR(0x5fdf9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x278ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fdfa5:{NFSU2_TR(0x5fdfa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x27cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fdfab:{NFSU2_TR(0x5fdfab);
w4(R+28,u32(0xbf800000ull));
}
B5fdfb0:{NFSU2_TR(0x5fdfb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x26cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fdfb6:{NFSU2_TR(0x5fdfb6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5fdfb9:{NFSU2_TR(0x5fdfb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x284ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fdfbf:{NFSU2_TR(0x5fdfbf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5fdfc2:{NFSU2_TR(0x5fdfc2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5fdfc4:{NFSU2_TR(0x5fdfc4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
w1(U+4,u8(0xffull));
s1(u32(r4(U+0)),r1(U+4));
}
B5fdfc8:{NFSU2_TR(0x5fdfc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x64ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fdfcf:{NFSU2_TR(0x5fdfcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fdfd2:{NFSU2_TR(0x5fdfd2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5fdfd4:{NFSU2_TR(0x5fdfd4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5fdfd7:{NFSU2_TR(0x5fdfd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x248ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fdfdd:{NFSU2_TR(0x5fdfdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x280ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fdfe3:{NFSU2_TR(0x5fdfe3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x270ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fdfe9:{NFSU2_TR(0x5fdfe9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x278ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fdfef:{NFSU2_TR(0x5fdfef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x274ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fdff5:{NFSU2_TR(0x5fdff5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24cull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fdffb:{NFSU2_TR(0x5fdffb);
w4(R+4,u32(0x8ull));
TAIL_STATIC(0x5fe000u,5fe);
}
XIT:NFSU2_TR_EXIT(0x5fd,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
