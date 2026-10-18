#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_496(u8* __restrict R,Cpu& c);
u32 body_4a3(u8* __restrict R,Cpu& c);
u32 body_4a7(u8* __restrict R,Cpu& c);
u32 body_4b0(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_511(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_524(u8* __restrict R,Cpu& c);
u32 body_52a(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_53d(u8* __restrict R,Cpu& c);
u32 body_540(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_543(u8* __restrict R,Cpu& c);
u32 body_552(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4af,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4af,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4af(u8* __restrict R,Cpu& c);
u32 page_4af(Cpu& c){return body_4af(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4af(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4af004:goto L4af004;
case 0x4af006:c.instructions+=5;goto B4af006;
case 0x4af009:c.instructions+=4;goto B4af009;
case 0x4af00d:c.instructions+=3;goto B4af00d;
case 0x4af00f:c.instructions+=2;goto B4af00f;
case 0x4af017:c.instructions+=1;goto B4af017;
case 0x4af019:goto L4af019;
case 0x4af01b:c.instructions+=4;goto B4af01b;
case 0x4af020:c.instructions+=3;goto B4af020;
case 0x4af025:c.instructions+=2;goto B4af025;
case 0x4af027:c.instructions+=1;goto B4af027;
case 0x4af02c:goto L4af02c;
case 0x4af032:c.instructions+=1;goto B4af032;
case 0x4af034:goto L4af034;
case 0x4af036:goto L4af036;
case 0x4af038:c.instructions+=4;goto B4af038;
case 0x4af039:c.instructions+=3;goto B4af039;
case 0x4af03b:c.instructions+=2;goto B4af03b;
case 0x4af03f:c.instructions+=1;goto B4af03f;
case 0x4af042:goto L4af042;
case 0x4af045:c.instructions+=2;goto B4af045;
case 0x4af046:c.instructions+=1;goto B4af046;
case 0x4af04b:goto L4af04b;
case 0x4af04e:c.instructions+=3;goto B4af04e;
case 0x4af050:c.instructions+=2;goto B4af050;
case 0x4af051:c.instructions+=1;goto B4af051;
case 0x4af053:goto L4af053;
case 0x4af056:c.instructions+=3;goto B4af056;
case 0x4af058:c.instructions+=2;goto B4af058;
case 0x4af059:c.instructions+=1;goto B4af059;
case 0x4af05e:goto L4af05e;
case 0x4af061:goto L4af061;
case 0x4af064:c.instructions+=4;goto B4af064;
case 0x4af067:c.instructions+=3;goto B4af067;
case 0x4af06a:c.instructions+=2;goto B4af06a;
case 0x4af06b:c.instructions+=1;goto B4af06b;
case 0x4af070:goto L4af070;
case 0x4af073:c.instructions+=3;goto B4af073;
case 0x4af074:c.instructions+=2;goto B4af074;
case 0x4af076:c.instructions+=1;goto B4af076;
case 0x4af079:goto L4af079;
case 0x4af07d:c.instructions+=5;goto B4af07d;
case 0x4af07e:c.instructions+=4;goto B4af07e;
case 0x4af07f:c.instructions+=3;goto B4af07f;
case 0x4af086:c.instructions+=2;goto B4af086;
case 0x4af089:c.instructions+=1;goto B4af089;
case 0x4af090:goto L4af090;
case 0x4af098:c.instructions+=1;goto B4af098;
case 0x4af09a:goto L4af09a;
case 0x4af09e:c.instructions+=8;goto B4af09e;
case 0x4af0a0:c.instructions+=7;goto B4af0a0;
case 0x4af0a2:c.instructions+=6;goto B4af0a2;
case 0x4af0a4:c.instructions+=5;goto B4af0a4;
case 0x4af0a6:c.instructions+=4;goto B4af0a6;
case 0x4af0ab:c.instructions+=3;goto B4af0ab;
case 0x4af0ac:c.instructions+=2;goto B4af0ac;
case 0x4af0ad:c.instructions+=1;goto B4af0ad;
case 0x4af0b2:goto L4af0b2;
case 0x4af0b5:goto L4af0b5;
case 0x4af0c0:goto L4af0c0;
case 0x4af0c8:c.instructions+=1;goto B4af0c8;
case 0x4af0ca:goto L4af0ca;
case 0x4af0ce:c.instructions+=2;goto B4af0ce;
case 0x4af0cf:c.instructions+=1;goto B4af0cf;
case 0x4af0d4:goto L4af0d4;
case 0x4af0d5:goto L4af0d5;
case 0x4af0e0:goto L4af0e0;
case 0x4af0e8:c.instructions+=1;goto B4af0e8;
case 0x4af0ea:goto L4af0ea;
case 0x4af0ee:c.instructions+=8;goto B4af0ee;
case 0x4af0f3:c.instructions+=7;goto B4af0f3;
case 0x4af0f8:c.instructions+=6;goto B4af0f8;
case 0x4af0fa:c.instructions+=5;goto B4af0fa;
case 0x4af0fc:c.instructions+=4;goto B4af0fc;
case 0x4af101:c.instructions+=3;goto B4af101;
case 0x4af102:c.instructions+=2;goto B4af102;
case 0x4af103:c.instructions+=1;goto B4af103;
case 0x4af108:goto L4af108;
case 0x4af10b:goto L4af10b;
case 0x4af110:goto L4af110;
case 0x4af112:c.instructions+=12;goto B4af112;
case 0x4af117:c.instructions+=11;goto B4af117;
case 0x4af11d:c.instructions+=10;goto B4af11d;
case 0x4af11e:c.instructions+=9;goto B4af11e;
case 0x4af125:c.instructions+=8;goto B4af125;
case 0x4af126:c.instructions+=7;goto B4af126;
case 0x4af127:c.instructions+=6;goto B4af127;
case 0x4af128:c.instructions+=5;goto B4af128;
case 0x4af129:c.instructions+=4;goto B4af129;
case 0x4af12b:c.instructions+=3;goto B4af12b;
case 0x4af12e:c.instructions+=2;goto B4af12e;
case 0x4af133:c.instructions+=1;goto B4af133;
case 0x4af138:goto L4af138;
case 0x4af139:c.instructions+=3;goto B4af139;
case 0x4af13e:c.instructions+=2;goto B4af13e;
case 0x4af13f:c.instructions+=1;goto B4af13f;
case 0x4af144:goto L4af144;
case 0x4af147:c.instructions+=4;goto B4af147;
case 0x4af14c:c.instructions+=3;goto B4af14c;
case 0x4af14e:c.instructions+=2;goto B4af14e;
case 0x4af158:c.instructions+=1;goto B4af158;
case 0x4af15d:goto L4af15d;
case 0x4af15f:c.instructions+=1;goto B4af15f;
case 0x4af165:goto L4af165;
case 0x4af16a:c.instructions+=3;goto B4af16a;
case 0x4af16c:c.instructions+=2;goto B4af16c;
case 0x4af16e:c.instructions+=1;goto B4af16e;
case 0x4af170:goto L4af170;
case 0x4af175:goto L4af175;
case 0x4af177:c.instructions+=5;goto B4af177;
case 0x4af17a:c.instructions+=4;goto B4af17a;
case 0x4af17e:c.instructions+=3;goto B4af17e;
case 0x4af180:c.instructions+=2;goto B4af180;
case 0x4af188:c.instructions+=1;goto B4af188;
case 0x4af18a:goto L4af18a;
case 0x4af18c:c.instructions+=4;goto B4af18c;
case 0x4af191:c.instructions+=3;goto B4af191;
case 0x4af196:c.instructions+=2;goto B4af196;
case 0x4af198:c.instructions+=1;goto B4af198;
case 0x4af19d:goto L4af19d;
case 0x4af1a3:c.instructions+=1;goto B4af1a3;
case 0x4af1a5:goto L4af1a5;
case 0x4af1aa:c.instructions+=1;goto B4af1aa;
case 0x4af1af:goto L4af1af;
case 0x4af1b1:c.instructions+=5;goto B4af1b1;
case 0x4af1b4:c.instructions+=4;goto B4af1b4;
case 0x4af1b8:c.instructions+=3;goto B4af1b8;
case 0x4af1ba:c.instructions+=2;goto B4af1ba;
case 0x4af1be:c.instructions+=1;goto B4af1be;
case 0x4af1c0:goto L4af1c0;
case 0x4af1c2:c.instructions+=4;goto B4af1c2;
case 0x4af1c7:c.instructions+=3;goto B4af1c7;
case 0x4af1cc:c.instructions+=2;goto B4af1cc;
case 0x4af1ce:c.instructions+=1;goto B4af1ce;
case 0x4af1d3:goto L4af1d3;
case 0x4af1d9:c.instructions+=1;goto B4af1d9;
case 0x4af1db:goto L4af1db;
case 0x4af1dd:goto L4af1dd;
case 0x4af1df:c.instructions+=6;goto B4af1df;
case 0x4af1e1:c.instructions+=5;goto B4af1e1;
case 0x4af1e2:c.instructions+=4;goto B4af1e2;
case 0x4af1e4:c.instructions+=3;goto B4af1e4;
case 0x4af1ec:c.instructions+=2;goto B4af1ec;
case 0x4af1f2:c.instructions+=1;goto B4af1f2;
case 0x4af1f5:goto L4af1f5;
case 0x4af1f7:c.instructions+=1;goto B4af1f7;
case 0x4af1f9:goto L4af1f9;
case 0x4af1fb:c.instructions+=1;goto B4af1fb;
case 0x4af200:goto L4af200;
case 0x4af202:c.instructions+=5;goto B4af202;
case 0x4af205:c.instructions+=4;goto B4af205;
case 0x4af209:c.instructions+=3;goto B4af209;
case 0x4af20b:c.instructions+=2;goto B4af20b;
case 0x4af213:c.instructions+=1;goto B4af213;
case 0x4af215:goto L4af215;
case 0x4af217:c.instructions+=4;goto B4af217;
case 0x4af21c:c.instructions+=3;goto B4af21c;
case 0x4af221:c.instructions+=2;goto B4af221;
case 0x4af223:c.instructions+=1;goto B4af223;
case 0x4af228:goto L4af228;
case 0x4af22e:c.instructions+=1;goto B4af22e;
case 0x4af230:goto L4af230;
case 0x4af232:goto L4af232;
case 0x4af234:c.instructions+=4;goto B4af234;
case 0x4af235:c.instructions+=3;goto B4af235;
case 0x4af237:c.instructions+=2;goto B4af237;
case 0x4af23f:c.instructions+=1;goto B4af23f;
case 0x4af242:goto L4af242;
case 0x4af244:c.instructions+=1;goto B4af244;
case 0x4af249:goto L4af249;
case 0x4af24b:c.instructions+=5;goto B4af24b;
case 0x4af24e:c.instructions+=4;goto B4af24e;
case 0x4af252:c.instructions+=3;goto B4af252;
case 0x4af254:c.instructions+=2;goto B4af254;
case 0x4af25c:c.instructions+=1;goto B4af25c;
case 0x4af25e:goto L4af25e;
case 0x4af260:c.instructions+=4;goto B4af260;
case 0x4af265:c.instructions+=3;goto B4af265;
case 0x4af26a:c.instructions+=2;goto B4af26a;
case 0x4af26c:c.instructions+=1;goto B4af26c;
case 0x4af271:goto L4af271;
case 0x4af277:c.instructions+=1;goto B4af277;
case 0x4af279:goto L4af279;
case 0x4af27b:goto L4af27b;
case 0x4af27d:c.instructions+=4;goto B4af27d;
case 0x4af27e:c.instructions+=3;goto B4af27e;
case 0x4af280:c.instructions+=2;goto B4af280;
case 0x4af288:c.instructions+=1;goto B4af288;
case 0x4af28b:goto L4af28b;
case 0x4af28e:c.instructions+=4;goto B4af28e;
case 0x4af291:c.instructions+=3;goto B4af291;
case 0x4af294:c.instructions+=2;goto B4af294;
case 0x4af295:c.instructions+=1;goto B4af295;
case 0x4af29a:goto L4af29a;
case 0x4af29d:c.instructions+=3;goto B4af29d;
case 0x4af29e:c.instructions+=2;goto B4af29e;
case 0x4af2a0:c.instructions+=1;goto B4af2a0;
case 0x4af2a3:goto L4af2a3;
case 0x4af2a5:c.instructions+=2;goto B4af2a5;
case 0x4af2a7:c.instructions+=1;goto B4af2a7;
case 0x4af2aa:goto L4af2aa;
case 0x4af2ae:c.instructions+=6;goto B4af2ae;
case 0x4af2af:c.instructions+=5;goto B4af2af;
case 0x4af2b0:c.instructions+=4;goto B4af2b0;
case 0x4af2b1:c.instructions+=3;goto B4af2b1;
case 0x4af2b8:c.instructions+=2;goto B4af2b8;
case 0x4af2bb:c.instructions+=1;goto B4af2bb;
case 0x4af2c0:goto L4af2c0;
case 0x4af2c4:c.instructions+=12;goto B4af2c4;
case 0x4af2c8:c.instructions+=11;goto B4af2c8;
case 0x4af2c9:c.instructions+=10;goto B4af2c9;
case 0x4af2ca:c.instructions+=9;goto B4af2ca;
case 0x4af2ce:c.instructions+=8;goto B4af2ce;
case 0x4af2d0:c.instructions+=7;goto B4af2d0;
case 0x4af2d4:c.instructions+=6;goto B4af2d4;
case 0x4af2d5:c.instructions+=5;goto B4af2d5;
case 0x4af2d6:c.instructions+=4;goto B4af2d6;
case 0x4af2d7:c.instructions+=3;goto B4af2d7;
case 0x4af2d8:c.instructions+=2;goto B4af2d8;
case 0x4af2da:c.instructions+=1;goto B4af2da;
case 0x4af2df:goto L4af2df;
case 0x4af2e5:c.instructions+=1;goto B4af2e5;
case 0x4af2e7:goto L4af2e7;
case 0x4af2ed:c.instructions+=1;goto B4af2ed;
case 0x4af2ef:goto L4af2ef;
case 0x4af2f5:c.instructions+=1;goto B4af2f5;
case 0x4af2f7:goto L4af2f7;
case 0x4af2fc:c.instructions+=5;goto B4af2fc;
case 0x4af2ff:c.instructions+=4;goto B4af2ff;
case 0x4af301:c.instructions+=3;goto B4af301;
case 0x4af302:c.instructions+=2;goto B4af302;
case 0x4af303:c.instructions+=1;goto B4af303;
case 0x4af308:goto L4af308;
case 0x4af30b:c.instructions+=3;goto B4af30b;
case 0x4af30c:c.instructions+=2;goto B4af30c;
case 0x4af30d:c.instructions+=1;goto B4af30d;
case 0x4af310:goto L4af310;
case 0x4af315:c.instructions+=1;goto B4af315;
case 0x4af31a:goto L4af31a;
case 0x4af31c:c.instructions+=1;goto B4af31c;
case 0x4af31e:goto L4af31e;
case 0x4af324:c.instructions+=2;goto B4af324;
case 0x4af325:c.instructions+=1;goto B4af325;
case 0x4af32a:goto L4af32a;
case 0x4af32d:c.instructions+=3;goto B4af32d;
case 0x4af32e:c.instructions+=2;goto B4af32e;
case 0x4af32f:c.instructions+=1;goto B4af32f;
case 0x4af332:goto L4af332;
case 0x4af337:c.instructions+=1;goto B4af337;
case 0x4af33c:goto L4af33c;
case 0x4af33e:c.instructions+=1;goto B4af33e;
case 0x4af340:goto L4af340;
case 0x4af346:c.instructions+=2;goto B4af346;
case 0x4af348:c.instructions+=1;goto B4af348;
case 0x4af34a:goto L4af34a;
case 0x4af34e:goto L4af34e;
case 0x4af34f:c.instructions+=2;goto B4af34f;
case 0x4af350:c.instructions+=1;goto B4af350;
case 0x4af360:goto L4af360;
case 0x4af361:c.instructions+=3;goto B4af361;
case 0x4af363:c.instructions+=2;goto B4af363;
case 0x4af368:c.instructions+=1;goto B4af368;
case 0x4af36d:goto L4af36d;
case 0x4af36f:c.instructions+=2;goto B4af36f;
case 0x4af372:c.instructions+=1;goto B4af372;
case 0x4af374:goto L4af374;
case 0x4af376:c.instructions+=7;goto B4af376;
case 0x4af378:c.instructions+=6;goto B4af378;
case 0x4af37a:c.instructions+=5;goto B4af37a;
case 0x4af37c:c.instructions+=4;goto B4af37c;
case 0x4af381:c.instructions+=3;goto B4af381;
case 0x4af382:c.instructions+=2;goto B4af382;
case 0x4af383:c.instructions+=1;goto B4af383;
case 0x4af388:goto L4af388;
case 0x4af38b:c.instructions+=2;goto B4af38b;
case 0x4af38c:c.instructions+=1;goto B4af38c;
case 0x4af38d:goto L4af38d;
case 0x4af38e:c.instructions+=2;goto B4af38e;
case 0x4af393:c.instructions+=1;goto B4af393;
case 0x4af398:goto L4af398;
case 0x4af39b:c.instructions+=2;goto B4af39b;
case 0x4af39c:c.instructions+=1;goto B4af39c;
case 0x4af3a0:goto L4af3a0;
case 0x4af3a1:c.instructions+=15;goto B4af3a1;
case 0x4af3a3:c.instructions+=14;goto B4af3a3;
case 0x4af3a6:c.instructions+=13;goto B4af3a6;
case 0x4af3a7:c.instructions+=12;goto B4af3a7;
case 0x4af3aa:c.instructions+=11;goto B4af3aa;
case 0x4af3ab:c.instructions+=10;goto B4af3ab;
case 0x4af3ac:c.instructions+=9;goto B4af3ac;
case 0x4af3af:c.instructions+=8;goto B4af3af;
case 0x4af3b0:c.instructions+=7;goto B4af3b0;
case 0x4af3b2:c.instructions+=6;goto B4af3b2;
case 0x4af3b5:c.instructions+=5;goto B4af3b5;
case 0x4af3b6:c.instructions+=4;goto B4af3b6;
case 0x4af3b7:c.instructions+=3;goto B4af3b7;
case 0x4af3b8:c.instructions+=2;goto B4af3b8;
case 0x4af3ba:c.instructions+=1;goto B4af3ba;
case 0x4af3bf:goto L4af3bf;
case 0x4af3c5:c.instructions+=1;goto B4af3c5;
case 0x4af3cb:goto L4af3cb;
case 0x4af3d1:goto L4af3d1;
case 0x4af3d7:c.instructions+=1;goto B4af3d7;
case 0x4af3dd:goto L4af3dd;
case 0x4af3df:goto L4af3df;
case 0x4af3e5:c.instructions+=1;goto B4af3e5;
case 0x4af3e7:goto L4af3e7;
case 0x4af3ed:c.instructions+=1;goto B4af3ed;
case 0x4af3f3:goto L4af3f3;
case 0x4af3f9:c.instructions+=1;goto B4af3f9;
case 0x4af3ff:goto L4af3ff;
case 0x4af400:c.instructions+=4;goto B4af400;
case 0x4af401:c.instructions+=3;goto B4af401;
case 0x4af402:c.instructions+=2;goto B4af402;
case 0x4af403:c.instructions+=1;goto B4af403;
case 0x4af406:goto L4af406;
case 0x4af409:c.instructions+=3;goto B4af409;
case 0x4af40c:c.instructions+=2;goto B4af40c;
case 0x4af40e:c.instructions+=1;goto B4af40e;
case 0x4af414:goto L4af414;
case 0x4af417:c.instructions+=4;goto B4af417;
case 0x4af41c:c.instructions+=3;goto B4af41c;
case 0x4af421:c.instructions+=2;goto B4af421;
case 0x4af422:c.instructions+=1;goto B4af422;
case 0x4af427:goto L4af427;
case 0x4af42a:c.instructions+=2;goto B4af42a;
case 0x4af42c:c.instructions+=1;goto B4af42c;
case 0x4af432:goto L4af432;
case 0x4af435:c.instructions+=5;goto B4af435;
case 0x4af437:c.instructions+=4;goto B4af437;
case 0x4af43c:c.instructions+=3;goto B4af43c;
case 0x4af441:c.instructions+=2;goto B4af441;
case 0x4af442:c.instructions+=1;goto B4af442;
case 0x4af447:goto L4af447;
case 0x4af44a:c.instructions+=5;goto B4af44a;
case 0x4af44b:c.instructions+=4;goto B4af44b;
case 0x4af44c:c.instructions+=3;goto B4af44c;
case 0x4af44d:c.instructions+=2;goto B4af44d;
case 0x4af44e:c.instructions+=1;goto B4af44e;
case 0x4af451:goto L4af451;
case 0x4af456:c.instructions+=1;goto B4af456;
case 0x4af45b:goto L4af45b;
case 0x4af45e:c.instructions+=4;goto B4af45e;
case 0x4af460:c.instructions+=3;goto B4af460;
case 0x4af462:c.instructions+=2;goto B4af462;
case 0x4af464:c.instructions+=1;goto B4af464;
case 0x4af469:goto L4af469;
case 0x4af46e:c.instructions+=1;goto B4af46e;
case 0x4af473:goto L4af473;
case 0x4af475:c.instructions+=5;goto B4af475;
case 0x4af47c:c.instructions+=4;goto B4af47c;
case 0x4af47f:c.instructions+=3;goto B4af47f;
case 0x4af484:c.instructions+=2;goto B4af484;
case 0x4af485:c.instructions+=1;goto B4af485;
case 0x4af48a:goto L4af48a;
case 0x4af48d:c.instructions+=3;goto B4af48d;
case 0x4af48f:c.instructions+=2;goto B4af48f;
case 0x4af490:c.instructions+=1;goto B4af490;
case 0x4af495:goto L4af495;
case 0x4af498:c.instructions+=5;goto B4af498;
case 0x4af499:c.instructions+=4;goto B4af499;
case 0x4af49a:c.instructions+=3;goto B4af49a;
case 0x4af49b:c.instructions+=2;goto B4af49b;
case 0x4af49c:c.instructions+=1;goto B4af49c;
case 0x4af49f:goto L4af49f;
case 0x4af4a5:c.instructions+=1;goto B4af4a5;
case 0x4af4a7:goto L4af4a7;
case 0x4af4ad:c.instructions+=1;goto B4af4ad;
case 0x4af4af:goto L4af4af;
case 0x4af4b5:c.instructions+=1;goto B4af4b5;
case 0x4af4bb:goto L4af4bb;
case 0x4af4bd:c.instructions+=2;goto B4af4bd;
case 0x4af4c2:c.instructions+=1;goto B4af4c2;
case 0x4af4c7:goto L4af4c7;
case 0x4af4c9:c.instructions+=1;goto B4af4c9;
case 0x4af4ce:goto L4af4ce;
case 0x4af4d1:c.instructions+=5;goto B4af4d1;
case 0x4af4d3:c.instructions+=4;goto B4af4d3;
case 0x4af4d8:c.instructions+=3;goto B4af4d8;
case 0x4af4dd:c.instructions+=2;goto B4af4dd;
case 0x4af4de:c.instructions+=1;goto B4af4de;
case 0x4af4e3:goto L4af4e3;
case 0x4af4e6:c.instructions+=5;goto B4af4e6;
case 0x4af4e8:c.instructions+=4;goto B4af4e8;
case 0x4af4ed:c.instructions+=3;goto B4af4ed;
case 0x4af4f2:c.instructions+=2;goto B4af4f2;
case 0x4af4f3:c.instructions+=1;goto B4af4f3;
case 0x4af4f8:goto L4af4f8;
case 0x4af4fb:c.instructions+=5;goto B4af4fb;
case 0x4af4fc:c.instructions+=4;goto B4af4fc;
case 0x4af4fd:c.instructions+=3;goto B4af4fd;
case 0x4af4fe:c.instructions+=2;goto B4af4fe;
case 0x4af4ff:c.instructions+=1;goto B4af4ff;
case 0x4af502:goto L4af502;
case 0x4af504:c.instructions+=2;goto B4af504;
case 0x4af509:c.instructions+=1;goto B4af509;
case 0x4af50e:goto L4af50e;
case 0x4af510:c.instructions+=2;goto B4af510;
case 0x4af515:c.instructions+=1;goto B4af515;
case 0x4af51a:goto L4af51a;
case 0x4af51b:c.instructions+=4;goto B4af51b;
case 0x4af51c:c.instructions+=3;goto B4af51c;
case 0x4af51d:c.instructions+=2;goto B4af51d;
case 0x4af51e:c.instructions+=1;goto B4af51e;
case 0x4af521:goto L4af521;
case 0x4af526:c.instructions+=1;goto B4af526;
case 0x4af52b:goto L4af52b;
case 0x4af52d:c.instructions+=1;goto B4af52d;
case 0x4af532:goto L4af532;
case 0x4af533:c.instructions+=4;goto B4af533;
case 0x4af534:c.instructions+=3;goto B4af534;
case 0x4af535:c.instructions+=2;goto B4af535;
case 0x4af536:c.instructions+=1;goto B4af536;
case 0x4af539:goto L4af539;
case 0x4af53a:c.instructions+=1;goto B4af53a;
case 0x4af53f:goto L4af53f;
case 0x4af542:c.instructions+=3;goto B4af542;
case 0x4af544:c.instructions+=2;goto B4af544;
case 0x4af549:c.instructions+=1;goto B4af549;
case 0x4af54e:goto L4af54e;
case 0x4af553:c.instructions+=1;goto B4af553;
case 0x4af558:goto L4af558;
case 0x4af559:c.instructions+=4;goto B4af559;
case 0x4af55a:c.instructions+=3;goto B4af55a;
case 0x4af55b:c.instructions+=2;goto B4af55b;
case 0x4af55c:c.instructions+=1;goto B4af55c;
case 0x4af55f:goto L4af55f;
case 0x4af565:c.instructions+=1;goto B4af565;
case 0x4af56b:goto L4af56b;
case 0x4af56d:goto L4af56d;
case 0x4af573:c.instructions+=1;goto B4af573;
case 0x4af575:goto L4af575;
case 0x4af57b:c.instructions+=1;goto B4af57b;
case 0x4af57d:goto L4af57d;
case 0x4af583:c.instructions+=1;goto B4af583;
case 0x4af589:goto L4af589;
case 0x4af58f:c.instructions+=2;goto B4af58f;
case 0x4af590:c.instructions+=1;goto B4af590;
case 0x4af595:goto L4af595;
case 0x4af598:c.instructions+=2;goto B4af598;
case 0x4af59d:c.instructions+=1;goto B4af59d;
case 0x4af59f:goto L4af59f;
case 0x4af5a4:c.instructions+=2;goto B4af5a4;
case 0x4af5a6:c.instructions+=1;goto B4af5a6;
case 0x4af5a8:goto L4af5a8;
case 0x4af5ad:c.instructions+=2;goto B4af5ad;
case 0x4af5b2:c.instructions+=1;goto B4af5b2;
case 0x4af5b4:goto L4af5b4;
case 0x4af5b9:c.instructions+=1;goto B4af5b9;
case 0x4af5be:goto L4af5be;
case 0x4af5bf:c.instructions+=10;goto B4af5bf;
case 0x4af5c1:c.instructions+=9;goto B4af5c1;
case 0x4af5c6:c.instructions+=8;goto B4af5c6;
case 0x4af5cb:c.instructions+=7;goto B4af5cb;
case 0x4af5cc:c.instructions+=6;goto B4af5cc;
case 0x4af5cf:c.instructions+=5;goto B4af5cf;
case 0x4af5d4:c.instructions+=4;goto B4af5d4;
case 0x4af5d9:c.instructions+=3;goto B4af5d9;
case 0x4af5de:c.instructions+=2;goto B4af5de;
case 0x4af5df:c.instructions+=1;goto B4af5df;
case 0x4af5e4:goto L4af5e4;
case 0x4af5e7:c.instructions+=3;goto B4af5e7;
case 0x4af5e9:c.instructions+=2;goto B4af5e9;
case 0x4af5ea:c.instructions+=1;goto B4af5ea;
case 0x4af5ef:goto L4af5ef;
case 0x4af5f2:c.instructions+=3;goto B4af5f2;
case 0x4af5f3:c.instructions+=2;goto B4af5f3;
case 0x4af5f8:c.instructions+=1;goto B4af5f8;
case 0x4af5fd:goto L4af5fd;
case 0x4af600:c.instructions+=5;goto B4af600;
case 0x4af601:c.instructions+=4;goto B4af601;
case 0x4af602:c.instructions+=3;goto B4af602;
case 0x4af603:c.instructions+=2;goto B4af603;
case 0x4af604:c.instructions+=1;goto B4af604;
case 0x4af607:goto L4af607;
case 0x4af60d:c.instructions+=1;goto B4af60d;
case 0x4af60f:goto L4af60f;
case 0x4af616:c.instructions+=2;goto B4af616;
case 0x4af61d:c.instructions+=1;goto B4af61d;
case 0x4af622:goto L4af622;
case 0x4af623:c.instructions+=4;goto B4af623;
case 0x4af624:c.instructions+=3;goto B4af624;
case 0x4af625:c.instructions+=2;goto B4af625;
case 0x4af626:c.instructions+=1;goto B4af626;
case 0x4af630:goto L4af630;
case 0x4af638:c.instructions+=1;goto B4af638;
case 0x4af63a:goto L4af63a;
case 0x4af63b:c.instructions+=11;goto B4af63b;
case 0x4af63f:c.instructions+=10;goto B4af63f;
case 0x4af644:c.instructions+=9;goto B4af644;
case 0x4af646:c.instructions+=8;goto B4af646;
case 0x4af64b:c.instructions+=7;goto B4af64b;
case 0x4af650:c.instructions+=6;goto B4af650;
case 0x4af655:c.instructions+=5;goto B4af655;
case 0x4af65a:c.instructions+=4;goto B4af65a;
case 0x4af65f:c.instructions+=3;goto B4af65f;
case 0x4af664:c.instructions+=2;goto B4af664;
case 0x4af665:c.instructions+=1;goto B4af665;
case 0x4af66a:goto L4af66a;
case 0x4af66b:c.instructions+=2;goto B4af66b;
case 0x4af670:c.instructions+=1;goto B4af670;
case 0x4af675:goto L4af675;
case 0x4af678:c.instructions+=1;goto B4af678;
case 0x4af679:goto L4af679;
case 0x4af680:goto L4af680;
case 0x4af681:c.instructions+=3;goto B4af681;
case 0x4af683:c.instructions+=2;goto B4af683;
case 0x4af68a:c.instructions+=1;goto B4af68a;
case 0x4af68c:goto L4af68c;
case 0x4af691:c.instructions+=6;goto B4af691;
case 0x4af694:c.instructions+=5;goto B4af694;
case 0x4af695:c.instructions+=4;goto B4af695;
case 0x4af697:c.instructions+=3;goto B4af697;
case 0x4af698:c.instructions+=2;goto B4af698;
case 0x4af69a:c.instructions+=1;goto B4af69a;
case 0x4af69f:goto L4af69f;
case 0x4af6a2:goto L4af6a2;
case 0x4af6a3:c.instructions+=1;goto B4af6a3;
case 0x4af6b0:goto L4af6b0;
case 0x4af6b8:c.instructions+=1;goto B4af6b8;
case 0x4af6ba:goto L4af6ba;
case 0x4af6be:c.instructions+=4;goto B4af6be;
case 0x4af6c0:c.instructions+=3;goto B4af6c0;
case 0x4af6c5:c.instructions+=2;goto B4af6c5;
case 0x4af6c6:c.instructions+=1;goto B4af6c6;
case 0x4af6cb:goto L4af6cb;
case 0x4af6ce:goto L4af6ce;
case 0x4af6e0:goto L4af6e0;
case 0x4af6e8:c.instructions+=1;goto B4af6e8;
case 0x4af6ea:goto L4af6ea;
case 0x4af6ee:c.instructions+=4;goto B4af6ee;
case 0x4af6f0:c.instructions+=3;goto B4af6f0;
case 0x4af6f5:c.instructions+=2;goto B4af6f5;
case 0x4af6f6:c.instructions+=1;goto B4af6f6;
case 0x4af6fb:goto L4af6fb;
case 0x4af6fe:goto L4af6fe;
case 0x4af710:goto L4af710;
case 0x4af718:c.instructions+=1;goto B4af718;
case 0x4af71a:goto L4af71a;
case 0x4af71e:c.instructions+=4;goto B4af71e;
case 0x4af720:c.instructions+=3;goto B4af720;
case 0x4af725:c.instructions+=2;goto B4af725;
case 0x4af726:c.instructions+=1;goto B4af726;
case 0x4af72b:goto L4af72b;
case 0x4af72e:goto L4af72e;
case 0x4af740:goto L4af740;
case 0x4af748:c.instructions+=1;goto B4af748;
case 0x4af74a:goto L4af74a;
case 0x4af74f:c.instructions+=1;goto B4af74f;
case 0x4af754:goto L4af754;
case 0x4af758:c.instructions+=8;goto B4af758;
case 0x4af75d:c.instructions+=7;goto B4af75d;
case 0x4af762:c.instructions+=6;goto B4af762;
case 0x4af764:c.instructions+=5;goto B4af764;
case 0x4af766:c.instructions+=4;goto B4af766;
case 0x4af76b:c.instructions+=3;goto B4af76b;
case 0x4af76c:c.instructions+=2;goto B4af76c;
case 0x4af76d:c.instructions+=1;goto B4af76d;
case 0x4af772:goto L4af772;
case 0x4af775:goto L4af775;
case 0x4af780:goto L4af780;
case 0x4af788:c.instructions+=1;goto B4af788;
case 0x4af78a:goto L4af78a;
case 0x4af78b:c.instructions+=4;goto B4af78b;
case 0x4af78f:c.instructions+=3;goto B4af78f;
case 0x4af790:c.instructions+=2;goto B4af790;
case 0x4af795:c.instructions+=1;goto B4af795;
case 0x4af79a:goto L4af79a;
case 0x4af79f:c.instructions+=9;goto B4af79f;
case 0x4af7a1:c.instructions+=8;goto B4af7a1;
case 0x4af7a6:c.instructions+=7;goto B4af7a6;
case 0x4af7ab:c.instructions+=6;goto B4af7ab;
case 0x4af7b0:c.instructions+=5;goto B4af7b0;
case 0x4af7b5:c.instructions+=4;goto B4af7b5;
case 0x4af7ba:c.instructions+=3;goto B4af7ba;
case 0x4af7bf:c.instructions+=2;goto B4af7bf;
case 0x4af7c0:c.instructions+=1;goto B4af7c0;
case 0x4af7c5:goto L4af7c5;
case 0x4af7c8:c.instructions+=1;goto B4af7c8;
case 0x4af7c9:goto L4af7c9;
case 0x4af7d0:goto L4af7d0;
case 0x4af7d8:c.instructions+=1;goto B4af7d8;
case 0x4af7da:goto L4af7da;
case 0x4af7db:c.instructions+=11;goto B4af7db;
case 0x4af7df:c.instructions+=10;goto B4af7df;
case 0x4af7e4:c.instructions+=9;goto B4af7e4;
case 0x4af7e6:c.instructions+=8;goto B4af7e6;
case 0x4af7eb:c.instructions+=7;goto B4af7eb;
case 0x4af7f0:c.instructions+=6;goto B4af7f0;
case 0x4af7f5:c.instructions+=5;goto B4af7f5;
case 0x4af7fa:c.instructions+=4;goto B4af7fa;
case 0x4af7ff:c.instructions+=3;goto B4af7ff;
case 0x4af804:c.instructions+=2;goto B4af804;
case 0x4af805:c.instructions+=1;goto B4af805;
case 0x4af80a:goto L4af80a;
case 0x4af80b:c.instructions+=2;goto B4af80b;
case 0x4af810:c.instructions+=1;goto B4af810;
case 0x4af815:goto L4af815;
case 0x4af818:c.instructions+=1;goto B4af818;
case 0x4af819:goto L4af819;
case 0x4af820:goto L4af820;
case 0x4af822:c.instructions+=11;goto B4af822;
case 0x4af827:c.instructions+=10;goto B4af827;
case 0x4af82d:c.instructions+=9;goto B4af82d;
case 0x4af82e:c.instructions+=8;goto B4af82e;
case 0x4af835:c.instructions+=7;goto B4af835;
case 0x4af836:c.instructions+=6;goto B4af836;
case 0x4af837:c.instructions+=5;goto B4af837;
case 0x4af838:c.instructions+=4;goto B4af838;
case 0x4af839:c.instructions+=3;goto B4af839;
case 0x4af83b:c.instructions+=2;goto B4af83b;
case 0x4af83d:c.instructions+=1;goto B4af83d;
case 0x4af842:goto L4af842;
case 0x4af844:c.instructions+=5;goto B4af844;
case 0x4af847:c.instructions+=4;goto B4af847;
case 0x4af84b:c.instructions+=3;goto B4af84b;
case 0x4af84d:c.instructions+=2;goto B4af84d;
case 0x4af855:c.instructions+=1;goto B4af855;
case 0x4af857:goto L4af857;
case 0x4af859:c.instructions+=4;goto B4af859;
case 0x4af85e:c.instructions+=3;goto B4af85e;
case 0x4af863:c.instructions+=2;goto B4af863;
case 0x4af865:c.instructions+=1;goto B4af865;
case 0x4af86a:goto L4af86a;
case 0x4af870:c.instructions+=2;goto B4af870;
case 0x4af874:c.instructions+=1;goto B4af874;
case 0x4af876:goto L4af876;
case 0x4af878:goto L4af878;
case 0x4af87a:c.instructions+=5;goto B4af87a;
case 0x4af87d:c.instructions+=4;goto B4af87d;
case 0x4af87e:c.instructions+=3;goto B4af87e;
case 0x4af880:c.instructions+=2;goto B4af880;
case 0x4af884:c.instructions+=1;goto B4af884;
case 0x4af887:goto L4af887;
case 0x4af88e:c.instructions+=1;goto B4af88e;
case 0x4af890:goto L4af890;
case 0x4af892:c.instructions+=1;goto B4af892;
case 0x4af897:goto L4af897;
case 0x4af899:c.instructions+=5;goto B4af899;
case 0x4af89c:c.instructions+=4;goto B4af89c;
case 0x4af8a0:c.instructions+=3;goto B4af8a0;
case 0x4af8a2:c.instructions+=2;goto B4af8a2;
case 0x4af8aa:c.instructions+=1;goto B4af8aa;
case 0x4af8ac:goto L4af8ac;
case 0x4af8ae:c.instructions+=4;goto B4af8ae;
case 0x4af8b3:c.instructions+=3;goto B4af8b3;
case 0x4af8b8:c.instructions+=2;goto B4af8b8;
case 0x4af8ba:c.instructions+=1;goto B4af8ba;
case 0x4af8bf:goto L4af8bf;
case 0x4af8c5:c.instructions+=1;goto B4af8c5;
case 0x4af8c7:goto L4af8c7;
case 0x4af8c9:goto L4af8c9;
case 0x4af8cb:c.instructions+=4;goto B4af8cb;
case 0x4af8cc:c.instructions+=3;goto B4af8cc;
case 0x4af8ce:c.instructions+=2;goto B4af8ce;
case 0x4af8d2:c.instructions+=1;goto B4af8d2;
case 0x4af8d5:goto L4af8d5;
case 0x4af8d7:c.instructions+=1;goto B4af8d7;
case 0x4af8dc:goto L4af8dc;
case 0x4af8de:c.instructions+=5;goto B4af8de;
case 0x4af8e1:c.instructions+=4;goto B4af8e1;
case 0x4af8e5:c.instructions+=3;goto B4af8e5;
case 0x4af8e7:c.instructions+=2;goto B4af8e7;
case 0x4af8ef:c.instructions+=1;goto B4af8ef;
case 0x4af8f1:goto L4af8f1;
case 0x4af8f3:c.instructions+=4;goto B4af8f3;
case 0x4af8f8:c.instructions+=3;goto B4af8f8;
case 0x4af8fd:c.instructions+=2;goto B4af8fd;
case 0x4af8ff:c.instructions+=1;goto B4af8ff;
case 0x4af904:goto L4af904;
case 0x4af90a:c.instructions+=1;goto B4af90a;
case 0x4af90c:goto L4af90c;
case 0x4af90e:goto L4af90e;
case 0x4af910:c.instructions+=4;goto B4af910;
case 0x4af911:c.instructions+=3;goto B4af911;
case 0x4af913:c.instructions+=2;goto B4af913;
case 0x4af917:c.instructions+=1;goto B4af917;
case 0x4af91a:goto L4af91a;
case 0x4af91c:c.instructions+=1;goto B4af91c;
case 0x4af921:goto L4af921;
case 0x4af923:c.instructions+=5;goto B4af923;
case 0x4af926:c.instructions+=4;goto B4af926;
case 0x4af92a:c.instructions+=3;goto B4af92a;
case 0x4af92c:c.instructions+=2;goto B4af92c;
case 0x4af934:c.instructions+=1;goto B4af934;
case 0x4af936:goto L4af936;
case 0x4af938:c.instructions+=4;goto B4af938;
case 0x4af93d:c.instructions+=3;goto B4af93d;
case 0x4af942:c.instructions+=2;goto B4af942;
case 0x4af944:c.instructions+=1;goto B4af944;
case 0x4af949:goto L4af949;
case 0x4af94f:c.instructions+=1;goto B4af94f;
case 0x4af951:goto L4af951;
case 0x4af953:goto L4af953;
case 0x4af955:c.instructions+=4;goto B4af955;
case 0x4af956:c.instructions+=3;goto B4af956;
case 0x4af958:c.instructions+=2;goto B4af958;
case 0x4af95c:c.instructions+=1;goto B4af95c;
case 0x4af95f:goto L4af95f;
case 0x4af961:c.instructions+=1;goto B4af961;
case 0x4af966:goto L4af966;
case 0x4af968:c.instructions+=5;goto B4af968;
case 0x4af96b:c.instructions+=4;goto B4af96b;
case 0x4af96f:c.instructions+=3;goto B4af96f;
case 0x4af971:c.instructions+=2;goto B4af971;
case 0x4af979:c.instructions+=1;goto B4af979;
case 0x4af97b:goto L4af97b;
case 0x4af97d:c.instructions+=4;goto B4af97d;
case 0x4af982:c.instructions+=3;goto B4af982;
case 0x4af987:c.instructions+=2;goto B4af987;
case 0x4af989:c.instructions+=1;goto B4af989;
case 0x4af98e:goto L4af98e;
case 0x4af994:c.instructions+=2;goto B4af994;
case 0x4af998:c.instructions+=1;goto B4af998;
case 0x4af99a:goto L4af99a;
case 0x4af99c:goto L4af99c;
case 0x4af99e:c.instructions+=4;goto B4af99e;
case 0x4af99f:c.instructions+=3;goto B4af99f;
case 0x4af9a1:c.instructions+=2;goto B4af9a1;
case 0x4af9a5:c.instructions+=1;goto B4af9a5;
case 0x4af9a8:goto L4af9a8;
case 0x4af9aa:c.instructions+=1;goto B4af9aa;
case 0x4af9af:goto L4af9af;
case 0x4af9b1:c.instructions+=5;goto B4af9b1;
case 0x4af9b4:c.instructions+=4;goto B4af9b4;
case 0x4af9b8:c.instructions+=3;goto B4af9b8;
case 0x4af9ba:c.instructions+=2;goto B4af9ba;
case 0x4af9c2:c.instructions+=1;goto B4af9c2;
case 0x4af9c4:goto L4af9c4;
case 0x4af9c6:c.instructions+=4;goto B4af9c6;
case 0x4af9cb:c.instructions+=3;goto B4af9cb;
case 0x4af9d0:c.instructions+=2;goto B4af9d0;
case 0x4af9d2:c.instructions+=1;goto B4af9d2;
case 0x4af9d7:goto L4af9d7;
case 0x4af9dd:c.instructions+=1;goto B4af9dd;
case 0x4af9df:goto L4af9df;
case 0x4af9e1:goto L4af9e1;
case 0x4af9e3:c.instructions+=4;goto B4af9e3;
case 0x4af9e4:c.instructions+=3;goto B4af9e4;
case 0x4af9e6:c.instructions+=2;goto B4af9e6;
case 0x4af9ea:c.instructions+=1;goto B4af9ea;
case 0x4af9ed:goto L4af9ed;
case 0x4af9ef:c.instructions+=1;goto B4af9ef;
case 0x4af9f4:goto L4af9f4;
case 0x4af9f6:c.instructions+=5;goto B4af9f6;
case 0x4af9f9:c.instructions+=4;goto B4af9f9;
case 0x4af9fd:c.instructions+=3;goto B4af9fd;
case 0x4af9ff:c.instructions+=2;goto B4af9ff;
case 0x4afa07:c.instructions+=1;goto B4afa07;
case 0x4afa09:goto L4afa09;
case 0x4afa0b:c.instructions+=4;goto B4afa0b;
case 0x4afa10:c.instructions+=3;goto B4afa10;
case 0x4afa15:c.instructions+=2;goto B4afa15;
case 0x4afa17:c.instructions+=1;goto B4afa17;
case 0x4afa1c:goto L4afa1c;
case 0x4afa22:c.instructions+=1;goto B4afa22;
case 0x4afa24:goto L4afa24;
case 0x4afa26:goto L4afa26;
case 0x4afa28:c.instructions+=4;goto B4afa28;
case 0x4afa29:c.instructions+=3;goto B4afa29;
case 0x4afa2b:c.instructions+=2;goto B4afa2b;
case 0x4afa2f:c.instructions+=1;goto B4afa2f;
case 0x4afa32:goto L4afa32;
case 0x4afa34:c.instructions+=1;goto B4afa34;
case 0x4afa39:goto L4afa39;
case 0x4afa3b:c.instructions+=5;goto B4afa3b;
case 0x4afa3e:c.instructions+=4;goto B4afa3e;
case 0x4afa42:c.instructions+=3;goto B4afa42;
case 0x4afa44:c.instructions+=2;goto B4afa44;
case 0x4afa4c:c.instructions+=1;goto B4afa4c;
case 0x4afa4e:goto L4afa4e;
case 0x4afa50:c.instructions+=4;goto B4afa50;
case 0x4afa55:c.instructions+=3;goto B4afa55;
case 0x4afa5a:c.instructions+=2;goto B4afa5a;
case 0x4afa5c:c.instructions+=1;goto B4afa5c;
case 0x4afa61:goto L4afa61;
case 0x4afa67:c.instructions+=2;goto B4afa67;
case 0x4afa6b:c.instructions+=1;goto B4afa6b;
case 0x4afa6d:goto L4afa6d;
case 0x4afa6f:goto L4afa6f;
case 0x4afa71:c.instructions+=4;goto B4afa71;
case 0x4afa72:c.instructions+=3;goto B4afa72;
case 0x4afa74:c.instructions+=2;goto B4afa74;
case 0x4afa78:c.instructions+=1;goto B4afa78;
case 0x4afa7b:goto L4afa7b;
case 0x4afa7e:c.instructions+=2;goto B4afa7e;
case 0x4afa7f:c.instructions+=1;goto B4afa7f;
case 0x4afa84:goto L4afa84;
case 0x4afa87:c.instructions+=4;goto B4afa87;
case 0x4afa8a:c.instructions+=3;goto B4afa8a;
case 0x4afa8d:c.instructions+=2;goto B4afa8d;
case 0x4afa8e:c.instructions+=1;goto B4afa8e;
case 0x4afa91:goto L4afa91;
case 0x4afa93:c.instructions+=2;goto B4afa93;
case 0x4afa95:c.instructions+=1;goto B4afa95;
case 0x4afa98:goto L4afa98;
case 0x4afa9d:c.instructions+=1;goto B4afa9d;
case 0x4afaa2:goto L4afaa2;
case 0x4afaa5:c.instructions+=5;goto B4afaa5;
case 0x4afaa7:c.instructions+=4;goto B4afaa7;
case 0x4afaa8:c.instructions+=3;goto B4afaa8;
case 0x4afaa9:c.instructions+=2;goto B4afaa9;
case 0x4afaaa:c.instructions+=1;goto B4afaaa;
case 0x4afaac:goto L4afaac;
case 0x4afab1:c.instructions+=1;goto B4afab1;
case 0x4afab6:goto L4afab6;
case 0x4afab9:c.instructions+=2;goto B4afab9;
case 0x4afabb:c.instructions+=1;goto B4afabb;
case 0x4afabd:goto L4afabd;
case 0x4afac2:c.instructions+=1;goto B4afac2;
case 0x4afac7:goto L4afac7;
case 0x4afaca:c.instructions+=4;goto B4afaca;
case 0x4afacc:c.instructions+=3;goto B4afacc;
case 0x4aface:c.instructions+=2;goto B4aface;
case 0x4afad0:c.instructions+=1;goto B4afad0;
case 0x4afad5:goto L4afad5;
case 0x4afad9:c.instructions+=3;goto B4afad9;
case 0x4afae0:c.instructions+=2;goto B4afae0;
case 0x4afae3:c.instructions+=1;goto B4afae3;
case 0x4afaf0:goto L4afaf0;
case 0x4afaf2:c.instructions+=4;goto B4afaf2;
case 0x4afaf4:c.instructions+=3;goto B4afaf4;
case 0x4afaf7:c.instructions+=2;goto B4afaf7;
case 0x4afafa:c.instructions+=1;goto B4afafa;
case 0x4afb00:goto L4afb00;
case 0x4afb08:c.instructions+=1;goto B4afb08;
case 0x4afb0a:goto L4afb0a;
case 0x4afb0e:c.instructions+=2;goto B4afb0e;
case 0x4afb0f:c.instructions+=1;goto B4afb0f;
case 0x4afb14:goto L4afb14;
case 0x4afb15:goto L4afb15;
case 0x4afb20:goto L4afb20;
case 0x4afb28:c.instructions+=1;goto B4afb28;
case 0x4afb2a:goto L4afb2a;
case 0x4afb2e:c.instructions+=2;goto B4afb2e;
case 0x4afb2f:c.instructions+=1;goto B4afb2f;
case 0x4afb34:goto L4afb34;
case 0x4afb35:goto L4afb35;
case 0x4afb40:goto L4afb40;
case 0x4afb48:c.instructions+=1;goto B4afb48;
case 0x4afb4a:goto L4afb4a;
case 0x4afb4e:c.instructions+=4;goto B4afb4e;
case 0x4afb50:c.instructions+=3;goto B4afb50;
case 0x4afb55:c.instructions+=2;goto B4afb55;
case 0x4afb56:c.instructions+=1;goto B4afb56;
case 0x4afb5b:goto L4afb5b;
case 0x4afb5e:goto L4afb5e;
case 0x4afb70:goto L4afb70;
case 0x4afb72:c.instructions+=12;goto B4afb72;
case 0x4afb77:c.instructions+=11;goto B4afb77;
case 0x4afb7d:c.instructions+=10;goto B4afb7d;
case 0x4afb7e:c.instructions+=9;goto B4afb7e;
case 0x4afb85:c.instructions+=8;goto B4afb85;
case 0x4afb86:c.instructions+=7;goto B4afb86;
case 0x4afb8b:c.instructions+=6;goto B4afb8b;
case 0x4afb8d:c.instructions+=5;goto B4afb8d;
case 0x4afb8e:c.instructions+=4;goto B4afb8e;
case 0x4afb8f:c.instructions+=3;goto B4afb8f;
case 0x4afb90:c.instructions+=2;goto B4afb90;
case 0x4afb92:c.instructions+=1;goto B4afb92;
case 0x4afb94:goto L4afb94;
case 0x4afb97:c.instructions+=3;goto B4afb97;
case 0x4afb9a:c.instructions+=2;goto B4afb9a;
case 0x4afb9c:c.instructions+=1;goto B4afb9c;
case 0x4afb9f:goto L4afb9f;
case 0x4afba6:c.instructions+=1;goto B4afba6;
case 0x4afba8:goto L4afba8;
case 0x4afbab:c.instructions+=4;goto B4afbab;
case 0x4afbae:c.instructions+=3;goto B4afbae;
case 0x4afbb1:c.instructions+=2;goto B4afbb1;
case 0x4afbb2:c.instructions+=1;goto B4afbb2;
case 0x4afbb7:goto L4afbb7;
case 0x4afbba:c.instructions+=3;goto B4afbba;
case 0x4afbbb:c.instructions+=2;goto B4afbbb;
case 0x4afbbd:c.instructions+=1;goto B4afbbd;
case 0x4afbc0:goto L4afbc0;
case 0x4afbc2:c.instructions+=1;goto B4afbc2;
case 0x4afbc7:goto L4afbc7;
case 0x4afbc9:c.instructions+=5;goto B4afbc9;
case 0x4afbcb:c.instructions+=4;goto B4afbcb;
case 0x4afbcd:c.instructions+=3;goto B4afbcd;
case 0x4afbcf:c.instructions+=2;goto B4afbcf;
case 0x4afbd1:c.instructions+=1;goto B4afbd1;
case 0x4afbd6:goto L4afbd6;
case 0x4afbd8:c.instructions+=5;goto B4afbd8;
case 0x4afbdb:c.instructions+=4;goto B4afbdb;
case 0x4afbdf:c.instructions+=3;goto B4afbdf;
case 0x4afbe1:c.instructions+=2;goto B4afbe1;
case 0x4afbe9:c.instructions+=1;goto B4afbe9;
case 0x4afbeb:goto L4afbeb;
case 0x4afbed:c.instructions+=4;goto B4afbed;
case 0x4afbf2:c.instructions+=3;goto B4afbf2;
case 0x4afbf7:c.instructions+=2;goto B4afbf7;
case 0x4afbf9:c.instructions+=1;goto B4afbf9;
case 0x4afbfe:goto L4afbfe;
case 0x4afc04:c.instructions+=2;goto B4afc04;
case 0x4afc07:c.instructions+=1;goto B4afc07;
case 0x4afc09:goto L4afc09;
case 0x4afc0b:goto L4afc0b;
case 0x4afc0d:c.instructions+=4;goto B4afc0d;
case 0x4afc0e:c.instructions+=3;goto B4afc0e;
case 0x4afc10:c.instructions+=2;goto B4afc10;
case 0x4afc18:c.instructions+=1;goto B4afc18;
case 0x4afc1b:goto L4afc1b;
case 0x4afc1d:c.instructions+=1;goto B4afc1d;
case 0x4afc22:goto L4afc22;
case 0x4afc24:c.instructions+=5;goto B4afc24;
case 0x4afc26:c.instructions+=4;goto B4afc26;
case 0x4afc28:c.instructions+=3;goto B4afc28;
case 0x4afc2a:c.instructions+=2;goto B4afc2a;
case 0x4afc2c:c.instructions+=1;goto B4afc2c;
case 0x4afc31:goto L4afc31;
case 0x4afc33:c.instructions+=5;goto B4afc33;
case 0x4afc36:c.instructions+=4;goto B4afc36;
case 0x4afc3a:c.instructions+=3;goto B4afc3a;
case 0x4afc3c:c.instructions+=2;goto B4afc3c;
case 0x4afc44:c.instructions+=1;goto B4afc44;
case 0x4afc46:goto L4afc46;
case 0x4afc48:c.instructions+=4;goto B4afc48;
case 0x4afc4d:c.instructions+=3;goto B4afc4d;
case 0x4afc52:c.instructions+=2;goto B4afc52;
case 0x4afc54:c.instructions+=1;goto B4afc54;
case 0x4afc59:goto L4afc59;
case 0x4afc5f:c.instructions+=2;goto B4afc5f;
case 0x4afc62:c.instructions+=1;goto B4afc62;
case 0x4afc64:goto L4afc64;
case 0x4afc66:goto L4afc66;
case 0x4afc68:c.instructions+=4;goto B4afc68;
case 0x4afc69:c.instructions+=3;goto B4afc69;
case 0x4afc6b:c.instructions+=2;goto B4afc6b;
case 0x4afc73:c.instructions+=1;goto B4afc73;
case 0x4afc76:goto L4afc76;
case 0x4afc7b:c.instructions+=1;goto B4afc7b;
case 0x4afc80:goto L4afc80;
case 0x4afc82:c.instructions+=5;goto B4afc82;
case 0x4afc84:c.instructions+=4;goto B4afc84;
case 0x4afc86:c.instructions+=3;goto B4afc86;
case 0x4afc88:c.instructions+=2;goto B4afc88;
case 0x4afc8a:c.instructions+=1;goto B4afc8a;
case 0x4afc8f:goto L4afc8f;
case 0x4afc91:c.instructions+=5;goto B4afc91;
case 0x4afc94:c.instructions+=4;goto B4afc94;
case 0x4afc98:c.instructions+=3;goto B4afc98;
case 0x4afc9a:c.instructions+=2;goto B4afc9a;
case 0x4afca2:c.instructions+=1;goto B4afca2;
case 0x4afca4:goto L4afca4;
case 0x4afca6:c.instructions+=4;goto B4afca6;
case 0x4afcab:c.instructions+=3;goto B4afcab;
case 0x4afcb0:c.instructions+=2;goto B4afcb0;
case 0x4afcb2:c.instructions+=1;goto B4afcb2;
case 0x4afcb7:goto L4afcb7;
case 0x4afcbd:c.instructions+=2;goto B4afcbd;
case 0x4afcc0:c.instructions+=1;goto B4afcc0;
case 0x4afcc2:goto L4afcc2;
case 0x4afcc4:goto L4afcc4;
case 0x4afcc6:c.instructions+=4;goto B4afcc6;
case 0x4afcc7:c.instructions+=3;goto B4afcc7;
case 0x4afcc9:c.instructions+=2;goto B4afcc9;
case 0x4afcd1:c.instructions+=1;goto B4afcd1;
case 0x4afcd4:goto L4afcd4;
case 0x4afcd7:c.instructions+=3;goto B4afcd7;
case 0x4afcda:c.instructions+=2;goto B4afcda;
case 0x4afcdc:c.instructions+=1;goto B4afcdc;
case 0x4afcdf:goto L4afcdf;
case 0x4afce1:c.instructions+=2;goto B4afce1;
case 0x4afce3:c.instructions+=1;goto B4afce3;
case 0x4afce6:goto L4afce6;
case 0x4afcea:c.instructions+=6;goto B4afcea;
case 0x4afceb:c.instructions+=5;goto B4afceb;
case 0x4afcec:c.instructions+=4;goto B4afcec;
case 0x4afced:c.instructions+=3;goto B4afced;
case 0x4afcf4:c.instructions+=2;goto B4afcf4;
case 0x4afcf7:c.instructions+=1;goto B4afcf7;
case 0x4afd00:goto L4afd00;
case 0x4afd02:c.instructions+=11;goto B4afd02;
case 0x4afd07:c.instructions+=10;goto B4afd07;
case 0x4afd0d:c.instructions+=9;goto B4afd0d;
case 0x4afd0e:c.instructions+=8;goto B4afd0e;
case 0x4afd15:c.instructions+=7;goto B4afd15;
case 0x4afd18:c.instructions+=6;goto B4afd18;
case 0x4afd1d:c.instructions+=5;goto B4afd1d;
case 0x4afd1f:c.instructions+=4;goto B4afd1f;
case 0x4afd20:c.instructions+=3;goto B4afd20;
case 0x4afd22:c.instructions+=2;goto B4afd22;
case 0x4afd2a:c.instructions+=1;goto B4afd2a;
case 0x4afd30:goto L4afd30;
case 0x4afd31:c.instructions+=3;goto B4afd31;
case 0x4afd39:c.instructions+=2;goto B4afd39;
case 0x4afd3a:c.instructions+=1;goto B4afd3a;
case 0x4afd40:goto L4afd40;
case 0x4afd44:c.instructions+=3;goto B4afd44;
case 0x4afd46:c.instructions+=2;goto B4afd46;
case 0x4afd48:c.instructions+=1;goto B4afd48;
case 0x4afd4a:goto L4afd4a;
case 0x4afd4c:c.instructions+=1;goto B4afd4c;
case 0x4afd51:goto L4afd51;
case 0x4afd52:c.instructions+=5;goto B4afd52;
case 0x4afd57:c.instructions+=4;goto B4afd57;
case 0x4afd5b:c.instructions+=3;goto B4afd5b;
case 0x4afd5d:c.instructions+=2;goto B4afd5d;
case 0x4afd5e:c.instructions+=1;goto B4afd5e;
case 0x4afd63:goto L4afd63;
case 0x4afd65:c.instructions+=1;goto B4afd65;
case 0x4afd6a:goto L4afd6a;
case 0x4afd6c:c.instructions+=5;goto B4afd6c;
case 0x4afd6f:c.instructions+=4;goto B4afd6f;
case 0x4afd73:c.instructions+=3;goto B4afd73;
case 0x4afd75:c.instructions+=2;goto B4afd75;
case 0x4afd7d:c.instructions+=1;goto B4afd7d;
case 0x4afd7f:goto L4afd7f;
case 0x4afd83:c.instructions+=2;goto B4afd83;
case 0x4afd84:c.instructions+=1;goto B4afd84;
case 0x4afd89:goto L4afd89;
case 0x4afd8c:c.instructions+=5;goto B4afd8c;
case 0x4afd8e:c.instructions+=4;goto B4afd8e;
case 0x4afd90:c.instructions+=3;goto B4afd90;
case 0x4afd91:c.instructions+=2;goto B4afd91;
case 0x4afd93:c.instructions+=1;goto B4afd93;
case 0x4afd98:goto L4afd98;
case 0x4afd9e:c.instructions+=2;goto B4afd9e;
case 0x4afda1:c.instructions+=1;goto B4afda1;
case 0x4afda3:goto L4afda3;
case 0x4afda5:goto L4afda5;
case 0x4afda7:c.instructions+=4;goto B4afda7;
case 0x4afda8:c.instructions+=3;goto B4afda8;
case 0x4afdaa:c.instructions+=2;goto B4afdaa;
case 0x4afdb2:c.instructions+=1;goto B4afdb2;
case 0x4afdb5:goto L4afdb5;
case 0x4afdb9:c.instructions+=8;goto B4afdb9;
case 0x4afdbd:c.instructions+=7;goto B4afdbd;
case 0x4afdc3:c.instructions+=6;goto B4afdc3;
case 0x4afdc4:c.instructions+=5;goto B4afdc4;
case 0x4afdca:c.instructions+=4;goto B4afdca;
case 0x4afdcc:c.instructions+=3;goto B4afdcc;
case 0x4afdd0:c.instructions+=2;goto B4afdd0;
case 0x4afdd4:c.instructions+=1;goto B4afdd4;
case 0x4afdda:goto L4afdda;
case 0x4afddb:c.instructions+=1;goto B4afddb;
case 0x4afddc:goto L4afddc;
case 0x4afddf:c.instructions+=3;goto B4afddf;
case 0x4afde2:c.instructions+=2;goto B4afde2;
case 0x4afde4:c.instructions+=1;goto B4afde4;
case 0x4afde7:goto L4afde7;
case 0x4afdeb:c.instructions+=4;goto B4afdeb;
case 0x4afdec:c.instructions+=3;goto B4afdec;
case 0x4afdf3:c.instructions+=2;goto B4afdf3;
case 0x4afdf6:c.instructions+=1;goto B4afdf6;
case 0x4afe00:goto L4afe00;
case 0x4afe01:c.instructions+=8;goto B4afe01;
case 0x4afe03:c.instructions+=7;goto B4afe03;
case 0x4afe06:c.instructions+=6;goto B4afe06;
case 0x4afe0c:c.instructions+=5;goto B4afe0c;
case 0x4afe12:c.instructions+=4;goto B4afe12;
case 0x4afe13:c.instructions+=3;goto B4afe13;
case 0x4afe15:c.instructions+=2;goto B4afe15;
case 0x4afe16:c.instructions+=1;goto B4afe16;
case 0x4afe1b:goto L4afe1b;
case 0x4afe1d:c.instructions+=4;goto B4afe1d;
case 0x4afe1f:c.instructions+=3;goto B4afe1f;
case 0x4afe21:c.instructions+=2;goto B4afe21;
case 0x4afe22:c.instructions+=1;goto B4afe22;
case 0x4afe27:goto L4afe27;
case 0x4afe2a:c.instructions+=2;goto B4afe2a;
case 0x4afe2c:c.instructions+=1;goto B4afe2c;
case 0x4afe2e:goto L4afe2e;
case 0x4afe34:c.instructions+=3;goto B4afe34;
case 0x4afe35:c.instructions+=2;goto B4afe35;
case 0x4afe36:c.instructions+=1;goto B4afe36;
case 0x4afe3b:goto L4afe3b;
case 0x4afe3e:c.instructions+=1;goto B4afe3e;
case 0x4afe40:goto L4afe40;
case 0x4afe45:c.instructions+=1;goto B4afe45;
case 0x4afe4a:goto L4afe4a;
case 0x4afe4b:c.instructions+=3;goto B4afe4b;
case 0x4afe51:c.instructions+=2;goto B4afe51;
case 0x4afe52:c.instructions+=1;goto B4afe52;
case 0x4afe57:goto L4afe57;
case 0x4afe5a:goto L4afe5a;
case 0x4afe5d:c.instructions+=5;goto B4afe5d;
case 0x4afe63:c.instructions+=4;goto B4afe63;
case 0x4afe69:c.instructions+=3;goto B4afe69;
case 0x4afe6b:c.instructions+=2;goto B4afe6b;
case 0x4afe6c:c.instructions+=1;goto B4afe6c;
case 0x4afe71:goto L4afe71;
case 0x4afe73:c.instructions+=4;goto B4afe73;
case 0x4afe75:c.instructions+=3;goto B4afe75;
case 0x4afe77:c.instructions+=2;goto B4afe77;
case 0x4afe78:c.instructions+=1;goto B4afe78;
case 0x4afe7d:goto L4afe7d;
case 0x4afe80:c.instructions+=2;goto B4afe80;
case 0x4afe82:c.instructions+=1;goto B4afe82;
case 0x4afe84:goto L4afe84;
case 0x4afe8a:c.instructions+=3;goto B4afe8a;
case 0x4afe8b:c.instructions+=2;goto B4afe8b;
case 0x4afe8c:c.instructions+=1;goto B4afe8c;
case 0x4afe91:goto L4afe91;
case 0x4afe94:c.instructions+=1;goto B4afe94;
case 0x4afe96:goto L4afe96;
case 0x4afe9b:c.instructions+=1;goto B4afe9b;
case 0x4afea0:goto L4afea0;
case 0x4afea6:c.instructions+=3;goto B4afea6;
case 0x4afea7:c.instructions+=2;goto B4afea7;
case 0x4afea8:c.instructions+=1;goto B4afea8;
case 0x4afead:goto L4afead;
case 0x4afeb0:goto L4afeb0;
case 0x4afeb6:c.instructions+=7;goto B4afeb6;
case 0x4afebc:c.instructions+=6;goto B4afebc;
case 0x4afebd:c.instructions+=5;goto B4afebd;
case 0x4afebe:c.instructions+=4;goto B4afebe;
case 0x4afec4:c.instructions+=3;goto B4afec4;
case 0x4afec6:c.instructions+=2;goto B4afec6;
case 0x4afec8:c.instructions+=1;goto B4afec8;
case 0x4afecd:goto L4afecd;
case 0x4afed0:c.instructions+=3;goto B4afed0;
case 0x4afed2:c.instructions+=2;goto B4afed2;
case 0x4afed5:c.instructions+=1;goto B4afed5;
case 0x4afed7:goto L4afed7;
case 0x4afeda:c.instructions+=1;goto B4afeda;
case 0x4afedc:goto L4afedc;
case 0x4afede:goto L4afede;
case 0x4afee0:c.instructions+=1;goto B4afee0;
case 0x4afee2:goto L4afee2;
case 0x4afee4:c.instructions+=3;goto B4afee4;
case 0x4afee6:c.instructions+=2;goto B4afee6;
case 0x4afee8:c.instructions+=1;goto B4afee8;
case 0x4afeed:goto L4afeed;
case 0x4afeee:c.instructions+=3;goto B4afeee;
case 0x4afef0:c.instructions+=2;goto B4afef0;
case 0x4afef1:c.instructions+=1;goto B4afef1;
case 0x4afef6:goto L4afef6;
case 0x4afef9:c.instructions+=2;goto B4afef9;
case 0x4afefb:c.instructions+=1;goto B4afefb;
case 0x4afefd:goto L4afefd;
case 0x4aff00:c.instructions+=1;goto B4aff00;
case 0x4aff02:goto L4aff02;
case 0x4aff04:goto L4aff04;
case 0x4aff06:c.instructions+=2;goto B4aff06;
case 0x4aff08:c.instructions+=1;goto B4aff08;
case 0x4aff0a:goto L4aff0a;
case 0x4aff0c:c.instructions+=2;goto B4aff0c;
case 0x4aff0e:c.instructions+=1;goto B4aff0e;
case 0x4aff13:goto L4aff13;
case 0x4aff14:c.instructions+=3;goto B4aff14;
case 0x4aff16:c.instructions+=2;goto B4aff16;
case 0x4aff17:c.instructions+=1;goto B4aff17;
case 0x4aff1c:goto L4aff1c;
case 0x4aff1e:c.instructions+=2;goto B4aff1e;
case 0x4aff20:c.instructions+=1;goto B4aff20;
case 0x4aff25:goto L4aff25;
case 0x4aff27:c.instructions+=3;goto B4aff27;
case 0x4aff29:c.instructions+=2;goto B4aff29;
case 0x4aff2b:c.instructions+=1;goto B4aff2b;
case 0x4aff30:goto L4aff30;
case 0x4aff31:c.instructions+=3;goto B4aff31;
case 0x4aff33:c.instructions+=2;goto B4aff33;
case 0x4aff34:c.instructions+=1;goto B4aff34;
case 0x4aff40:goto L4aff40;
case 0x4aff41:c.instructions+=10;goto B4aff41;
case 0x4aff43:c.instructions+=9;goto B4aff43;
case 0x4aff46:c.instructions+=8;goto B4aff46;
case 0x4aff47:c.instructions+=7;goto B4aff47;
case 0x4aff4a:c.instructions+=6;goto B4aff4a;
case 0x4aff4b:c.instructions+=5;goto B4aff4b;
case 0x4aff4c:c.instructions+=4;goto B4aff4c;
case 0x4aff4d:c.instructions+=3;goto B4aff4d;
case 0x4aff4e:c.instructions+=2;goto B4aff4e;
case 0x4aff53:c.instructions+=1;goto B4aff53;
case 0x4aff58:goto L4aff58;
case 0x4aff5a:c.instructions+=1;goto B4aff5a;
case 0x4aff5c:goto L4aff5c;
case 0x4aff5f:c.instructions+=2;goto B4aff5f;
case 0x4aff61:c.instructions+=1;goto B4aff61;
case 0x4aff66:goto L4aff66;
case 0x4aff68:c.instructions+=2;goto B4aff68;
case 0x4aff6a:c.instructions+=1;goto B4aff6a;
case 0x4aff6c:goto L4aff6c;
case 0x4aff70:goto L4aff70;
case 0x4aff72:c.instructions+=2;goto B4aff72;
case 0x4aff74:c.instructions+=1;goto B4aff74;
case 0x4aff77:goto L4aff77;
case 0x4aff7a:c.instructions+=1;goto B4aff7a;
case 0x4aff7c:goto L4aff7c;
case 0x4aff7e:c.instructions+=2;goto B4aff7e;
case 0x4aff80:c.instructions+=1;goto B4aff80;
case 0x4aff82:goto L4aff82;
case 0x4aff83:c.instructions+=5;goto B4aff83;
case 0x4aff84:c.instructions+=4;goto B4aff84;
case 0x4aff86:c.instructions+=3;goto B4aff86;
case 0x4aff87:c.instructions+=2;goto B4aff87;
case 0x4aff88:c.instructions+=1;goto B4aff88;
case 0x4aff8b:goto L4aff8b;
case 0x4aff8c:c.instructions+=5;goto B4aff8c;
case 0x4aff8d:c.instructions+=4;goto B4aff8d;
case 0x4aff8f:c.instructions+=3;goto B4aff8f;
case 0x4aff90:c.instructions+=2;goto B4aff90;
case 0x4aff91:c.instructions+=1;goto B4aff91;
case 0x4affa0:goto L4affa0;
case 0x4affa4:c.instructions+=7;goto B4affa4;
case 0x4affa9:c.instructions+=6;goto B4affa9;
case 0x4affaa:c.instructions+=5;goto B4affaa;
case 0x4affac:c.instructions+=4;goto B4affac;
case 0x4affaf:c.instructions+=3;goto B4affaf;
case 0x4affb0:c.instructions+=2;goto B4affb0;
case 0x4affb2:c.instructions+=1;goto B4affb2;
case 0x4affb4:goto L4affb4;
case 0x4affb7:c.instructions+=2;goto B4affb7;
case 0x4affb9:c.instructions+=1;goto B4affb9;
case 0x4affbb:goto L4affbb;
case 0x4affbe:c.instructions+=1;goto B4affbe;
case 0x4affc0:goto L4affc0;
case 0x4affc2:goto L4affc2;
case 0x4affc4:c.instructions+=1;goto B4affc4;
case 0x4affca:goto L4affca;
case 0x4affcd:c.instructions+=5;goto B4affcd;
case 0x4affcf:c.instructions+=4;goto B4affcf;
case 0x4affd4:c.instructions+=3;goto B4affd4;
case 0x4affd9:c.instructions+=2;goto B4affd9;
case 0x4affda:c.instructions+=1;goto B4affda;
case 0x4affdf:goto L4affdf;
case 0x4affe2:c.instructions+=4;goto B4affe2;
case 0x4affe5:c.instructions+=3;goto B4affe5;
case 0x4affe8:c.instructions+=2;goto B4affe8;
case 0x4affea:c.instructions+=1;goto B4affea;
case 0x4affec:goto L4affec;
case 0x4affef:c.instructions+=1;goto B4affef;
case 0x4afff1:goto L4afff1;
case 0x4afff3:goto L4afff3;
case 0x4afff6:c.instructions+=3;goto B4afff6;
case 0x4afffc:c.instructions+=2;goto B4afffc;
case 0x4afffd:c.instructions+=1;goto B4afffd;
default:missing_instruction(c.pc);}
B4af004:L4af004:{c.instructions+=6;NFSU2_TR(0x4af004);
__builtin_memmove((R+28),(R+0),4);
}
B4af006:{NFSU2_TR(0x4af006);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4af009:{NFSU2_TR(0x4af009);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4af00d:{NFSU2_TR(0x4af00d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4af00f:{NFSU2_TR(0x4af00f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4af017:{NFSU2_TR(0x4af017);
if(r1(R+518)){{goto L4af034;}}
}
B4af019:L4af019:{c.instructions+=5;NFSU2_TR(0x4af019);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af01b:{NFSU2_TR(0x4af01b);
u8 U[4];
w4(U+0,u32(0xed1f0b2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af020:{NFSU2_TR(0x4af020);
u8 U[4];
w4(U+0,u32(0x3058fe37ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af025:{NFSU2_TR(0x4af025);
__builtin_memmove((R+4),(R+28),4);
}
B4af027:{NFSU2_TR(0x4af027);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af02cull));
TAIL_STATIC(0x51f670u,51f);
}
B4af02c:L4af02c:{c.instructions+=2;NFSU2_TR(0x4af02c);
u8 U[4];
w4(U+0,u32(0x790c40ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4af032:{NFSU2_TR(0x4af032);
{goto L4af036;}
}
B4af034:L4af034:{c.instructions+=1;NFSU2_TR(0x4af034);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4af036:L4af036:{c.instructions+=5;NFSU2_TR(0x4af036);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4af038:{NFSU2_TR(0x4af038);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af039:{NFSU2_TR(0x4af039);
__builtin_memmove((R+4),(R+24),4);
}
B4af03b:{NFSU2_TR(0x4af03b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4af03f:{NFSU2_TR(0x4af03f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af042ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4af042:L4af042:{c.instructions+=3;NFSU2_TR(0x4af042);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4af045:{NFSU2_TR(0x4af045);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af046:{NFSU2_TR(0x4af046);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af04bull));
TAIL_STATIC(0x50b8a0u,50b);
}
B4af04b:L4af04b:{c.instructions+=4;NFSU2_TR(0x4af04b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4af04e:{NFSU2_TR(0x4af04e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4af050:{NFSU2_TR(0x4af050);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4af051:{NFSU2_TR(0x4af051);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4af061;}}
}
B4af053:L4af053:{c.instructions+=4;NFSU2_TR(0x4af053);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4af056:{NFSU2_TR(0x4af056);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af058:{NFSU2_TR(0x4af058);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af059:{NFSU2_TR(0x4af059);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af05eull));
TAIL_STATIC(0x50b8c0u,50b);
}
B4af05e:L4af05e:{c.instructions+=1;NFSU2_TR(0x4af05e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4af061:L4af061:{c.instructions+=5;NFSU2_TR(0x4af061);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4af064:{NFSU2_TR(0x4af064);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4af067:{NFSU2_TR(0x4af067);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4cull))));
}
B4af06a:{NFSU2_TR(0x4af06a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af06b:{NFSU2_TR(0x4af06b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af070ull));
TAIL_STATIC(0x50b8a0u,50b);
}
B4af070:L4af070:{c.instructions+=4;NFSU2_TR(0x4af070);
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
B4af073:{NFSU2_TR(0x4af073);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af074:{NFSU2_TR(0x4af074);
__builtin_memmove((R+4),(R+24),4);
}
B4af076:{NFSU2_TR(0x4af076);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af079ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4af079:L4af079:{c.instructions+=6;NFSU2_TR(0x4af079);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4af07d:{NFSU2_TR(0x4af07d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4af07e:{NFSU2_TR(0x4af07e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4af07f:{NFSU2_TR(0x4af07f);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4af086:{NFSU2_TR(0x4af086);
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
B4af089:{NFSU2_TR(0x4af089);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4af090:L4af090:{c.instructions+=2;NFSU2_TR(0x4af090);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4af098:{NFSU2_TR(0x4af098);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4af0b5;}}
}
B4af09a:L4af09a:{c.instructions+=9;NFSU2_TR(0x4af09a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4af09e:{NFSU2_TR(0x4af09e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af0a0:{NFSU2_TR(0x4af0a0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af0a2:{NFSU2_TR(0x4af0a2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af0a4:{NFSU2_TR(0x4af0a4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af0a6:{NFSU2_TR(0x4af0a6);
u8 U[4];
w4(U+0,u32(0x21961ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af0ab:{NFSU2_TR(0x4af0ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af0ac:{NFSU2_TR(0x4af0ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af0ad:{NFSU2_TR(0x4af0ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af0b2ull));
TAIL_STATIC(0x4a3100u,4a3);
}
B4af0b2:L4af0b2:{c.instructions+=1;NFSU2_TR(0x4af0b2);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4af0b5:L4af0b5:{c.instructions+=1;NFSU2_TR(0x4af0b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4af0c0:L4af0c0:{c.instructions+=2;NFSU2_TR(0x4af0c0);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4af0c8:{NFSU2_TR(0x4af0c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4af0d5;}}
}
B4af0ca:L4af0ca:{c.instructions+=3;NFSU2_TR(0x4af0ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4af0ce:{NFSU2_TR(0x4af0ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af0cf:{NFSU2_TR(0x4af0cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af0d4ull));
TAIL_STATIC(0x495a30u,495);
}
B4af0d4:L4af0d4:{c.instructions+=1;NFSU2_TR(0x4af0d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4af0d5:L4af0d5:{c.instructions+=1;NFSU2_TR(0x4af0d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4af0e0:L4af0e0:{c.instructions+=2;NFSU2_TR(0x4af0e0);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4af0e8:{NFSU2_TR(0x4af0e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4af10b;}}
}
B4af0ea:L4af0ea:{c.instructions+=9;NFSU2_TR(0x4af0ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4af0ee:{NFSU2_TR(0x4af0ee);
u8 U[4];
w4(U+0,u32(0xf35d144eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af0f3:{NFSU2_TR(0x4af0f3);
u8 U[4];
w4(U+0,u32(0x461a18eeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af0f8:{NFSU2_TR(0x4af0f8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af0fa:{NFSU2_TR(0x4af0fa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af0fc:{NFSU2_TR(0x4af0fc);
u8 U[4];
w4(U+0,u32(0xc11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af101:{NFSU2_TR(0x4af101);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af102:{NFSU2_TR(0x4af102);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af103:{NFSU2_TR(0x4af103);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af108ull));
TAIL_STATIC(0x4a3100u,4a3);
}
B4af108:L4af108:{c.instructions+=1;NFSU2_TR(0x4af108);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4af10b:L4af10b:{c.instructions+=1;NFSU2_TR(0x4af10b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4af110:L4af110:{c.instructions+=13;NFSU2_TR(0x4af110);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af112:{NFSU2_TR(0x4af112);
u8 U[4];
w4(U+0,u32(0x772ce0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af117:{NFSU2_TR(0x4af117);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4af11d:{NFSU2_TR(0x4af11d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af11e:{NFSU2_TR(0x4af11e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4af125:{NFSU2_TR(0x4af125);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af126:{NFSU2_TR(0x4af126);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af127:{NFSU2_TR(0x4af127);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af128:{NFSU2_TR(0x4af128);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af129:{NFSU2_TR(0x4af129);
__builtin_memmove((R+24),(R+4),4);
}
B4af12b:{NFSU2_TR(0x4af12b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4af12e:{NFSU2_TR(0x4af12e);
u8 U[4];
w4(U+0,u32(0x5e7e1192ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af133:{NFSU2_TR(0x4af133);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af138ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4af138:L4af138:{c.instructions+=4;NFSU2_TR(0x4af138);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af139:{NFSU2_TR(0x4af139);
u8 U[4];
w4(U+0,u32(0x42adb44cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af13e:{NFSU2_TR(0x4af13e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af13f:{NFSU2_TR(0x4af13f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af144ull));
TAIL_STATIC(0x537b80u,537);
}
B4af144:L4af144:{c.instructions+=5;NFSU2_TR(0x4af144);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4af147:{NFSU2_TR(0x4af147);
w4(R+4,u32(0x83a9e0ull));
}
B4af14c:{NFSU2_TR(0x4af14c);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
w1(R+519,u8(s8(r1(R+12))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+12))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+12))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4af14e:{NFSU2_TR(0x4af14e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4af158:{NFSU2_TR(0x4af158);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af15dull));
TAIL_STATIC(0x502fe0u,502);
}
B4af15d:L4af15d:{c.instructions+=2;NFSU2_TR(0x4af15d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4af15f:{NFSU2_TR(0x4af15f);
if(r1(R+518)){{goto L4af1f9;}}
}
B4af165:L4af165:{c.instructions+=4;NFSU2_TR(0x4af165);
__builtin_memmove((R+0),gp(0x86347c),1);
}
B4af16a:{NFSU2_TR(0x4af16a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4af16c:{NFSU2_TR(0x4af16c);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af16e:{NFSU2_TR(0x4af16e);
if(r1(R+518)){{goto L4af1a5;}}
}
B4af170:L4af170:{c.instructions+=1;NFSU2_TR(0x4af170);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af175ull));
TAIL_STATIC(0x575620u,575);
}
B4af175:L4af175:{c.instructions+=6;NFSU2_TR(0x4af175);
__builtin_memmove((R+28),(R+0),4);
}
B4af177:{NFSU2_TR(0x4af177);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4af17a:{NFSU2_TR(0x4af17a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4af17e:{NFSU2_TR(0x4af17e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4af180:{NFSU2_TR(0x4af180);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4af188:{NFSU2_TR(0x4af188);
if(r1(R+518)){{goto L4af1db;}}
}
B4af18a:L4af18a:{c.instructions+=5;NFSU2_TR(0x4af18a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af18c:{NFSU2_TR(0x4af18c);
u8 U[4];
w4(U+0,u32(0xe072db21ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af191:{NFSU2_TR(0x4af191);
u8 U[4];
w4(U+0,u32(0xa230cd88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af196:{NFSU2_TR(0x4af196);
__builtin_memmove((R+4),(R+28),4);
}
B4af198:{NFSU2_TR(0x4af198);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af19dull));
TAIL_STATIC(0x51f670u,51f);
}
B4af19d:L4af19d:{c.instructions+=2;NFSU2_TR(0x4af19d);
u8 U[4];
w4(U+0,u32(0x790cc0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4af1a3:{NFSU2_TR(0x4af1a3);
{goto L4af1dd;}
}
B4af1a5:L4af1a5:{c.instructions+=2;NFSU2_TR(0x4af1a5);
w4(R+12,u32(0x1ull));
}
B4af1aa:{NFSU2_TR(0x4af1aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af1afull));
TAIL_STATIC(0x575620u,575);
}
B4af1af:L4af1af:{c.instructions+=6;NFSU2_TR(0x4af1af);
__builtin_memmove((R+28),(R+0),4);
}
B4af1b1:{NFSU2_TR(0x4af1b1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4af1b4:{NFSU2_TR(0x4af1b4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4af1b8:{NFSU2_TR(0x4af1b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4af1ba:{NFSU2_TR(0x4af1ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4af1be:{NFSU2_TR(0x4af1be);
if(r1(R+518)){{goto L4af1db;}}
}
B4af1c0:L4af1c0:{c.instructions+=5;NFSU2_TR(0x4af1c0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af1c2:{NFSU2_TR(0x4af1c2);
u8 U[4];
w4(U+0,u32(0x97b1dcdaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af1c7:{NFSU2_TR(0x4af1c7);
u8 U[4];
w4(U+0,u32(0x3cb92e26ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af1cc:{NFSU2_TR(0x4af1cc);
__builtin_memmove((R+4),(R+28),4);
}
B4af1ce:{NFSU2_TR(0x4af1ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af1d3ull));
TAIL_STATIC(0x51f670u,51f);
}
B4af1d3:L4af1d3:{c.instructions+=2;NFSU2_TR(0x4af1d3);
u8 U[4];
w4(U+0,u32(0x790cc0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4af1d9:{NFSU2_TR(0x4af1d9);
{goto L4af1dd;}
}
B4af1db:L4af1db:{c.instructions+=1;NFSU2_TR(0x4af1db);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4af1dd:L4af1dd:{c.instructions+=7;NFSU2_TR(0x4af1dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4af1df:{NFSU2_TR(0x4af1df);
__builtin_memmove((R+4),(R+28),4);
}
B4af1e1:{NFSU2_TR(0x4af1e1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af1e2:{NFSU2_TR(0x4af1e2);
__builtin_memmove((R+4),(R+24),4);
}
B4af1e4:{NFSU2_TR(0x4af1e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4af1ec:{NFSU2_TR(0x4af1ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4af1f2:{NFSU2_TR(0x4af1f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af1f5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4af1f5:L4af1f5:{c.instructions+=2;NFSU2_TR(0x4af1f5);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4af1f7:{NFSU2_TR(0x4af1f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4af242;}}
}
B4af1f9:L4af1f9:{c.instructions+=2;NFSU2_TR(0x4af1f9);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af1fb:{NFSU2_TR(0x4af1fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af200ull));
TAIL_STATIC(0x575620u,575);
}
B4af200:L4af200:{c.instructions+=6;NFSU2_TR(0x4af200);
__builtin_memmove((R+28),(R+0),4);
}
B4af202:{NFSU2_TR(0x4af202);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4af205:{NFSU2_TR(0x4af205);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4af209:{NFSU2_TR(0x4af209);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4af20b:{NFSU2_TR(0x4af20b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4af213:{NFSU2_TR(0x4af213);
if(r1(R+518)){{goto L4af230;}}
}
B4af215:L4af215:{c.instructions+=5;NFSU2_TR(0x4af215);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af217:{NFSU2_TR(0x4af217);
u8 U[4];
w4(U+0,u32(0x97b1dcdaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af21c:{NFSU2_TR(0x4af21c);
u8 U[4];
w4(U+0,u32(0x3cb92e26ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af221:{NFSU2_TR(0x4af221);
__builtin_memmove((R+4),(R+28),4);
}
B4af223:{NFSU2_TR(0x4af223);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af228ull));
TAIL_STATIC(0x51f670u,51f);
}
B4af228:L4af228:{c.instructions+=2;NFSU2_TR(0x4af228);
u8 U[4];
w4(U+0,u32(0x790cb8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4af22e:{NFSU2_TR(0x4af22e);
{goto L4af232;}
}
B4af230:L4af230:{c.instructions+=1;NFSU2_TR(0x4af230);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4af232:L4af232:{c.instructions+=5;NFSU2_TR(0x4af232);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4af234:{NFSU2_TR(0x4af234);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af235:{NFSU2_TR(0x4af235);
__builtin_memmove((R+4),(R+24),4);
}
B4af237:{NFSU2_TR(0x4af237);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4af23f:{NFSU2_TR(0x4af23f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af242ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4af242:L4af242:{c.instructions+=2;NFSU2_TR(0x4af242);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af244:{NFSU2_TR(0x4af244);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af249ull));
TAIL_STATIC(0x575620u,575);
}
B4af249:L4af249:{c.instructions+=6;NFSU2_TR(0x4af249);
__builtin_memmove((R+28),(R+0),4);
}
B4af24b:{NFSU2_TR(0x4af24b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4af24e:{NFSU2_TR(0x4af24e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4af252:{NFSU2_TR(0x4af252);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4af254:{NFSU2_TR(0x4af254);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4af25c:{NFSU2_TR(0x4af25c);
if(r1(R+518)){{goto L4af279;}}
}
B4af25e:L4af25e:{c.instructions+=5;NFSU2_TR(0x4af25e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af260:{NFSU2_TR(0x4af260);
u8 U[4];
w4(U+0,u32(0xaa3f09d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af265:{NFSU2_TR(0x4af265);
u8 U[4];
w4(U+0,u32(0x72c87f3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af26a:{NFSU2_TR(0x4af26a);
__builtin_memmove((R+4),(R+28),4);
}
B4af26c:{NFSU2_TR(0x4af26c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af271ull));
TAIL_STATIC(0x51f670u,51f);
}
B4af271:L4af271:{c.instructions+=2;NFSU2_TR(0x4af271);
u8 U[4];
w4(U+0,u32(0x790cc8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4af277:{NFSU2_TR(0x4af277);
{goto L4af27b;}
}
B4af279:L4af279:{c.instructions+=1;NFSU2_TR(0x4af279);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4af27b:L4af27b:{c.instructions+=5;NFSU2_TR(0x4af27b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4af27d:{NFSU2_TR(0x4af27d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af27e:{NFSU2_TR(0x4af27e);
__builtin_memmove((R+4),(R+24),4);
}
B4af280:{NFSU2_TR(0x4af280);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4af288:{NFSU2_TR(0x4af288);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af28bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4af28b:L4af28b:{c.instructions+=5;NFSU2_TR(0x4af28b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4af28e:{NFSU2_TR(0x4af28e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4af291:{NFSU2_TR(0x4af291);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B4af294:{NFSU2_TR(0x4af294);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af295:{NFSU2_TR(0x4af295);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af29aull));
TAIL_STATIC(0x50b8a0u,50b);
}
B4af29a:L4af29a:{c.instructions+=4;NFSU2_TR(0x4af29a);
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
B4af29d:{NFSU2_TR(0x4af29d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af29e:{NFSU2_TR(0x4af29e);
__builtin_memmove((R+4),(R+28),4);
}
B4af2a0:{NFSU2_TR(0x4af2a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af2a3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4af2a3:L4af2a3:{c.instructions+=3;NFSU2_TR(0x4af2a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4af2a5:{NFSU2_TR(0x4af2a5);
__builtin_memmove((R+4),(R+24),4);
}
B4af2a7:{NFSU2_TR(0x4af2a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af2aaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4af2aa:L4af2aa:{c.instructions+=7;NFSU2_TR(0x4af2aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4af2ae:{NFSU2_TR(0x4af2ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4af2af:{NFSU2_TR(0x4af2af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4af2b0:{NFSU2_TR(0x4af2b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4af2b1:{NFSU2_TR(0x4af2b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4af2b8:{NFSU2_TR(0x4af2b8);
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
B4af2bb:{NFSU2_TR(0x4af2bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4af2c0:L4af2c0:{c.instructions+=13;NFSU2_TR(0x4af2c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4af2c4:{NFSU2_TR(0x4af2c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4af2c8:{NFSU2_TR(0x4af2c8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af2c9:{NFSU2_TR(0x4af2c9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af2ca:{NFSU2_TR(0x4af2ca);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4af2ce:{NFSU2_TR(0x4af2ce);
__builtin_memmove((R+24),(R+4),4);
}
B4af2d0:{NFSU2_TR(0x4af2d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4af2d4:{NFSU2_TR(0x4af2d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af2d5:{NFSU2_TR(0x4af2d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af2d6:{NFSU2_TR(0x4af2d6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af2d7:{NFSU2_TR(0x4af2d7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af2d8:{NFSU2_TR(0x4af2d8);
__builtin_memmove((R+4),(R+24),4);
}
B4af2da:{NFSU2_TR(0x4af2da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af2dfull));
TAIL_STATIC(0x543d40u,543);
}
B4af2df:L4af2df:{c.instructions+=2;NFSU2_TR(0x4af2df);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x251bf83eull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x251bf83eull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x251bf83eull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4af2e5:{NFSU2_TR(0x4af2e5);
if(r1(R+518)){{goto L4af332;}}
}
B4af2e7:L4af2e7:{c.instructions+=2;NFSU2_TR(0x4af2e7);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x461a18eeull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x461a18eeull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x461a18eeull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4af2ed:{NFSU2_TR(0x4af2ed);
if(r1(R+518)){{goto L4af310;}}
}
B4af2ef:L4af2ef:{c.instructions+=2;NFSU2_TR(0x4af2ef);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x911ab364ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x911ab364ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4af2f5:{NFSU2_TR(0x4af2f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4af34e;}}
}
B4af2f7:L4af2f7:{c.instructions+=6;NFSU2_TR(0x4af2f7);
__builtin_memmove((R+0),gp(0x7f42c0),4);
}
B4af2fc:{NFSU2_TR(0x4af2fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4af2ff:{NFSU2_TR(0x4af2ff);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af301:{NFSU2_TR(0x4af301);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af302:{NFSU2_TR(0x4af302);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af303:{NFSU2_TR(0x4af303);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af308ull));
TAIL_STATIC(0x537980u,537);
}
B4af308:L4af308:{c.instructions+=4;NFSU2_TR(0x4af308);
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
B4af30b:{NFSU2_TR(0x4af30b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4af30c:{NFSU2_TR(0x4af30c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4af30d:{NFSU2_TR(0x4af30d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4af310:L4af310:{c.instructions+=2;NFSU2_TR(0x4af310);
w4(R+4,u32(0x83a9e0ull));
}
B4af315:{NFSU2_TR(0x4af315);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af31aull));
TAIL_STATIC(0x502fe0u,502);
}
B4af31a:L4af31a:{c.instructions+=2;NFSU2_TR(0x4af31a);
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
B4af31c:{NFSU2_TR(0x4af31c);
if(r1(R+518)){{goto L4af34e;}}
}
B4af31e:L4af31e:{c.instructions+=3;NFSU2_TR(0x4af31e);
__builtin_memmove((R+8),gp(0x836538),4);
}
B4af324:{NFSU2_TR(0x4af324);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af325:{NFSU2_TR(0x4af325);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af32aull));
TAIL_STATIC(0x495a30u,495);
}
B4af32a:L4af32a:{c.instructions+=4;NFSU2_TR(0x4af32a);
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
B4af32d:{NFSU2_TR(0x4af32d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4af32e:{NFSU2_TR(0x4af32e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4af32f:{NFSU2_TR(0x4af32f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4af332:L4af332:{c.instructions+=2;NFSU2_TR(0x4af332);
w4(R+4,u32(0x83a9e0ull));
}
B4af337:{NFSU2_TR(0x4af337);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af33cull));
TAIL_STATIC(0x502fe0u,502);
}
B4af33c:L4af33c:{c.instructions+=2;NFSU2_TR(0x4af33c);
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
B4af33e:{NFSU2_TR(0x4af33e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4af34e;}}
}
B4af340:L4af340:{c.instructions+=3;NFSU2_TR(0x4af340);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4af346:{NFSU2_TR(0x4af346);
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
B4af348:{NFSU2_TR(0x4af348);
if(r1(R+518)){{goto L4af34e;}}
}
B4af34a:L4af34a:{c.instructions+=1;NFSU2_TR(0x4af34a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4af34e:L4af34e:{c.instructions+=3;NFSU2_TR(0x4af34e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4af34f:{NFSU2_TR(0x4af34f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4af350:{NFSU2_TR(0x4af350);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4af360:L4af360:{c.instructions+=4;NFSU2_TR(0x4af360);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af361:{NFSU2_TR(0x4af361);
__builtin_memmove((R+24),(R+4),4);
}
B4af363:{NFSU2_TR(0x4af363);
w4(R+4,u32(0x83a9d0ull));
}
B4af368:{NFSU2_TR(0x4af368);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af36dull));
TAIL_STATIC(0x52a4c0u,52a);
}
B4af36d:L4af36d:{c.instructions+=3;NFSU2_TR(0x4af36d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4af36f:{NFSU2_TR(0x4af36f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4af372:{NFSU2_TR(0x4af372);
if(r1(R+518)){{goto L4af38d;}}
}
B4af374:L4af374:{c.instructions+=8;NFSU2_TR(0x4af374);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af376:{NFSU2_TR(0x4af376);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af378:{NFSU2_TR(0x4af378);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af37a:{NFSU2_TR(0x4af37a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af37c:{NFSU2_TR(0x4af37c);
u8 U[4];
w4(U+0,u32(0x151ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af381:{NFSU2_TR(0x4af381);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af382:{NFSU2_TR(0x4af382);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af383:{NFSU2_TR(0x4af383);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af388ull));
TAIL_STATIC(0x4a3100u,4a3);
}
B4af388:L4af388:{c.instructions+=3;NFSU2_TR(0x4af388);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4af38b:{NFSU2_TR(0x4af38b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4af38c:{NFSU2_TR(0x4af38c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4af38d:L4af38d:{c.instructions+=3;NFSU2_TR(0x4af38d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af38e:{NFSU2_TR(0x4af38e);
u8 U[4];
w4(U+0,u32(0x9a3b571dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af393:{NFSU2_TR(0x4af393);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af398ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4af398:L4af398:{c.instructions+=3;NFSU2_TR(0x4af398);
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
B4af39b:{NFSU2_TR(0x4af39b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4af39c:{NFSU2_TR(0x4af39c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4af3a0:L4af3a0:{c.instructions+=16;NFSU2_TR(0x4af3a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af3a1:{NFSU2_TR(0x4af3a1);
__builtin_memmove((R+20),(R+16),4);
}
B4af3a3:{NFSU2_TR(0x4af3a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4af3a6:{NFSU2_TR(0x4af3a6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af3a7:{NFSU2_TR(0x4af3a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4af3aa:{NFSU2_TR(0x4af3aa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af3ab:{NFSU2_TR(0x4af3ab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af3ac:{NFSU2_TR(0x4af3ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4af3af:{NFSU2_TR(0x4af3af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af3b0:{NFSU2_TR(0x4af3b0);
__builtin_memmove((R+24),(R+4),4);
}
B4af3b2:{NFSU2_TR(0x4af3b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4af3b5:{NFSU2_TR(0x4af3b5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af3b6:{NFSU2_TR(0x4af3b6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af3b7:{NFSU2_TR(0x4af3b7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af3b8:{NFSU2_TR(0x4af3b8);
__builtin_memmove((R+4),(R+24),4);
}
B4af3ba:{NFSU2_TR(0x4af3ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af3bfull));
TAIL_STATIC(0x543d40u,543);
}
B4af3bf:L4af3bf:{c.instructions+=2;NFSU2_TR(0x4af3bf);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x451e768eull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x451e768eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4af3c5:{NFSU2_TR(0x4af3c5);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4af55f;}}
}
B4af3cb:L4af3cb:{c.instructions+=1;NFSU2_TR(0x4af3cb);
if(r1(R+518)){{goto L4af539;}}
}
B4af3d1:L4af3d1:{c.instructions+=2;NFSU2_TR(0x4af3d1);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x30ed2368ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x30ed2368ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4af3d7:{NFSU2_TR(0x4af3d7);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4af49f;}}
}
B4af3dd:L4af3dd:{c.instructions+=1;NFSU2_TR(0x4af3dd);
if(r1(R+518)){{goto L4af451;}}
}
B4af3df:L4af3df:{c.instructions+=2;NFSU2_TR(0x4af3df);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4af3e5:{NFSU2_TR(0x4af3e5);
if(r1(R+518)){{goto L4af406;}}
}
B4af3e7:L4af3e7:{c.instructions+=2;NFSU2_TR(0x4af3e7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1fab5998ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4af3ed:{NFSU2_TR(0x4af3ed);
if(r1(R+518)){{goto L4af4bb;}}
}
B4af3f3:L4af3f3:{c.instructions+=2;NFSU2_TR(0x4af3f3);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x28c2c1b8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x28c2c1b8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x28c2c1b8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4af3f9:{NFSU2_TR(0x4af3f9);
if(r1(R+518)){{goto L4af50e;}}
}
B4af3ff:L4af3ff:{c.instructions+=5;NFSU2_TR(0x4af3ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4af400:{NFSU2_TR(0x4af400);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4af401:{NFSU2_TR(0x4af401);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4af402:{NFSU2_TR(0x4af402);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4af403:{NFSU2_TR(0x4af403);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4af406:L4af406:{c.instructions+=4;NFSU2_TR(0x4af406);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4af409:{NFSU2_TR(0x4af409);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4af40c:{NFSU2_TR(0x4af40c);
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
B4af40e:{NFSU2_TR(0x4af40e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4af622;}}
}
B4af414:L4af414:{c.instructions+=5;NFSU2_TR(0x4af414);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4af417:{NFSU2_TR(0x4af417);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af41c:{NFSU2_TR(0x4af41c);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af421:{NFSU2_TR(0x4af421);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af422:{NFSU2_TR(0x4af422);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af427ull));
TAIL_STATIC(0x537d40u,537);
}
B4af427:L4af427:{c.instructions+=3;NFSU2_TR(0x4af427);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4af42a:{NFSU2_TR(0x4af42a);
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
B4af42c:{NFSU2_TR(0x4af42c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4af622;}}
}
B4af432:L4af432:{c.instructions+=6;NFSU2_TR(0x4af432);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4af435:{NFSU2_TR(0x4af435);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af437:{NFSU2_TR(0x4af437);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af43c:{NFSU2_TR(0x4af43c);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af441:{NFSU2_TR(0x4af441);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af442:{NFSU2_TR(0x4af442);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af447ull));
TAIL_STATIC(0x537c60u,537);
}
B4af447:L4af447:{c.instructions+=6;NFSU2_TR(0x4af447);
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
B4af44a:{NFSU2_TR(0x4af44a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4af44b:{NFSU2_TR(0x4af44b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4af44c:{NFSU2_TR(0x4af44c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4af44d:{NFSU2_TR(0x4af44d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4af44e:{NFSU2_TR(0x4af44e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4af451:L4af451:{c.instructions+=2;NFSU2_TR(0x4af451);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af456:{NFSU2_TR(0x4af456);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af45bull));
TAIL_STATIC(0x51bd10u,51b);
}
B4af45b:L4af45b:{c.instructions+=5;NFSU2_TR(0x4af45b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4af45e:{NFSU2_TR(0x4af45e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af460:{NFSU2_TR(0x4af460);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af462:{NFSU2_TR(0x4af462);
__builtin_memmove((R+4),(R+0),4);
}
B4af464:{NFSU2_TR(0x4af464);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af469ull));
TAIL_STATIC(0x4a7180u,4a7);
}
B4af469:L4af469:{c.instructions+=2;NFSU2_TR(0x4af469);
w4(R+4,u32(0x83a9d0ull));
}
B4af46e:{NFSU2_TR(0x4af46e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af473ull));
TAIL_STATIC(0x5032c0u,503);
}
B4af473:L4af473:{c.instructions+=6;NFSU2_TR(0x4af473);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af475:{NFSU2_TR(0x4af475);
s1(0x836324,u8(0x0ull));
}
B4af47c:{NFSU2_TR(0x4af47c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4af47f:{NFSU2_TR(0x4af47f);
u8 U[4];
w4(U+0,u32(0x78f530ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af484:{NFSU2_TR(0x4af484);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af485:{NFSU2_TR(0x4af485);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af48aull));
TAIL_STATIC(0x537980u,537);
}
B4af48a:L4af48a:{c.instructions+=4;NFSU2_TR(0x4af48a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4af48d:{NFSU2_TR(0x4af48d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af48f:{NFSU2_TR(0x4af48f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af490:{NFSU2_TR(0x4af490);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af495ull));
TAIL_STATIC(0x50b8c0u,50b);
}
B4af495:L4af495:{c.instructions+=6;NFSU2_TR(0x4af495);
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
B4af498:{NFSU2_TR(0x4af498);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4af499:{NFSU2_TR(0x4af499);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4af49a:{NFSU2_TR(0x4af49a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4af49b:{NFSU2_TR(0x4af49b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4af49c:{NFSU2_TR(0x4af49c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4af49f:L4af49f:{c.instructions+=2;NFSU2_TR(0x4af49f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x34dc1becull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4af4a5:{NFSU2_TR(0x4af4a5);
if(r1(R+518)){{goto L4af521;}}
}
B4af4a7:L4af4a7:{c.instructions+=2;NFSU2_TR(0x4af4a7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x35f8620bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4af4ad:{NFSU2_TR(0x4af4ad);
if(r1(R+518)){{goto L4af502;}}
}
B4af4af:L4af4af:{c.instructions+=2;NFSU2_TR(0x4af4af);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x43da9fd0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x43da9fd0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x43da9fd0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4af4b5:{NFSU2_TR(0x4af4b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4af622;}}
}
B4af4bb:L4af4bb:{c.instructions+=3;NFSU2_TR(0x4af4bb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af4bd:{NFSU2_TR(0x4af4bd);
w4(R+4,u32(0x83a9d0ull));
}
B4af4c2:{NFSU2_TR(0x4af4c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af4c7ull));
TAIL_STATIC(0x52a460u,52a);
}
B4af4c7:L4af4c7:{c.instructions+=2;NFSU2_TR(0x4af4c7);
__builtin_memmove((R+4),(R+24),4);
}
B4af4c9:{NFSU2_TR(0x4af4c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af4ceull));
TAIL_STATIC(0x538ca0u,538);
}
B4af4ce:L4af4ce:{c.instructions+=6;NFSU2_TR(0x4af4ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4af4d1:{NFSU2_TR(0x4af4d1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af4d3:{NFSU2_TR(0x4af4d3);
u8 U[4];
w4(U+0,u32(0x790cecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af4d8:{NFSU2_TR(0x4af4d8);
u8 U[4];
w4(U+0,u32(0x444969fdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af4dd:{NFSU2_TR(0x4af4dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af4de:{NFSU2_TR(0x4af4de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af4e3ull));
TAIL_STATIC(0x537c00u,537);
}
B4af4e3:L4af4e3:{c.instructions+=6;NFSU2_TR(0x4af4e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4af4e6:{NFSU2_TR(0x4af4e6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af4e8:{NFSU2_TR(0x4af4e8);
u8 U[4];
w4(U+0,u32(0x790cecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af4ed:{NFSU2_TR(0x4af4ed);
u8 U[4];
w4(U+0,u32(0x444969feull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af4f2:{NFSU2_TR(0x4af4f2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af4f3:{NFSU2_TR(0x4af4f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af4f8ull));
TAIL_STATIC(0x537c00u,537);
}
B4af4f8:L4af4f8:{c.instructions+=6;NFSU2_TR(0x4af4f8);
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
B4af4fb:{NFSU2_TR(0x4af4fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4af4fc:{NFSU2_TR(0x4af4fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4af4fd:{NFSU2_TR(0x4af4fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4af4fe:{NFSU2_TR(0x4af4fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4af4ff:{NFSU2_TR(0x4af4ff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4af502:L4af502:{c.instructions+=3;NFSU2_TR(0x4af502);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af504:{NFSU2_TR(0x4af504);
w4(R+4,u32(0x8635bcull));
}
B4af509:{NFSU2_TR(0x4af509);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af50eull));
TAIL_STATIC(0x5243d0u,524);
}
B4af50e:L4af50e:{c.instructions+=3;NFSU2_TR(0x4af50e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af510:{NFSU2_TR(0x4af510);
w4(R+4,u32(0x83a9d0ull));
}
B4af515:{NFSU2_TR(0x4af515);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af51aull));
TAIL_STATIC(0x52a460u,52a);
}
B4af51a:L4af51a:{c.instructions+=5;NFSU2_TR(0x4af51a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4af51b:{NFSU2_TR(0x4af51b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4af51c:{NFSU2_TR(0x4af51c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4af51d:{NFSU2_TR(0x4af51d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4af51e:{NFSU2_TR(0x4af51e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4af521:L4af521:{c.instructions+=2;NFSU2_TR(0x4af521);
w4(R+4,u32(0x83a9d0ull));
}
B4af526:{NFSU2_TR(0x4af526);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af52bull));
TAIL_STATIC(0x5032c0u,503);
}
B4af52b:L4af52b:{c.instructions+=2;NFSU2_TR(0x4af52b);
__builtin_memmove((R+4),(R+24),4);
}
B4af52d:{NFSU2_TR(0x4af52d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af532ull));
TAIL_STATIC(0x495af0u,495);
}
B4af532:L4af532:{c.instructions+=5;NFSU2_TR(0x4af532);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4af533:{NFSU2_TR(0x4af533);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4af534:{NFSU2_TR(0x4af534);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4af535:{NFSU2_TR(0x4af535);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4af536:{NFSU2_TR(0x4af536);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4af539:L4af539:{c.instructions+=2;NFSU2_TR(0x4af539);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af53a:{NFSU2_TR(0x4af53a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af53full));
TAIL_STATIC(0x50d2a0u,50d);
}
B4af53f:L4af53f:{c.instructions+=4;NFSU2_TR(0x4af53f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4af542:{NFSU2_TR(0x4af542);
__builtin_memmove((R+4),(R+24),4);
}
B4af544:{NFSU2_TR(0x4af544);
__builtin_memmove(gp(0x83a9d8),(R+0),4);
}
B4af549:{NFSU2_TR(0x4af549);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af54eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4af360u);}goto L4af360;}
}
B4af54e:L4af54e:{c.instructions+=2;NFSU2_TR(0x4af54e);
w4(R+4,u32(0x83a9d0ull));
}
B4af553:{NFSU2_TR(0x4af553);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af558ull));
TAIL_STATIC(0x5032c0u,503);
}
B4af558:L4af558:{c.instructions+=5;NFSU2_TR(0x4af558);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4af559:{NFSU2_TR(0x4af559);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4af55a:{NFSU2_TR(0x4af55a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4af55b:{NFSU2_TR(0x4af55b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4af55c:{NFSU2_TR(0x4af55c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4af55f:L4af55f:{c.instructions+=2;NFSU2_TR(0x4af55f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x911ab364ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4af565:{NFSU2_TR(0x4af565);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4af607;}}
}
B4af56b:L4af56b:{c.instructions+=1;NFSU2_TR(0x4af56b);
if(r1(R+518)){{goto L4af59f;}}
}
B4af56d:L4af56d:{c.instructions+=2;NFSU2_TR(0x4af56d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x461a18eeull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4af573:{NFSU2_TR(0x4af573);
if(r1(R+518)){{goto L4af589;}}
}
B4af575:L4af575:{c.instructions+=2;NFSU2_TR(0x4af575);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7d1e4c8cull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4af57b:{NFSU2_TR(0x4af57b);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4af50eu);}goto L4af50e;}}
}
B4af57d:L4af57d:{c.instructions+=2;NFSU2_TR(0x4af57d);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x8867412dull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8867412dull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8867412dull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4af583:{NFSU2_TR(0x4af583);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4af622;}}
}
B4af589:L4af589:{c.instructions+=3;NFSU2_TR(0x4af589);
__builtin_memmove((R+8),gp(0x836538),4);
}
B4af58f:{NFSU2_TR(0x4af58f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af590:{NFSU2_TR(0x4af590);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af595ull));
TAIL_STATIC(0x50d2a0u,50d);
}
B4af595:L4af595:{c.instructions+=3;NFSU2_TR(0x4af595);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4af598:{NFSU2_TR(0x4af598);
__builtin_memmove(gp(0x83a9d8),(R+0),4);
}
B4af59d:{NFSU2_TR(0x4af59d);
{goto L4af60f;}
}
B4af59f:L4af59f:{c.instructions+=3;NFSU2_TR(0x4af59f);
__builtin_memmove((R+0),gp(0x836324),1);
}
B4af5a4:{NFSU2_TR(0x4af5a4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4af5a6:{NFSU2_TR(0x4af5a6);
if(r1(R+518)){{goto L4af5b4;}}
}
B4af5a8:L4af5a8:{c.instructions+=3;NFSU2_TR(0x4af5a8);
w4(R+0,u32(0x30ed2368ull));
}
B4af5ad:{NFSU2_TR(0x4af5ad);
w4(R+4,u32(0xcb5e3178ull));
}
B4af5b2:{NFSU2_TR(0x4af5b2);
{goto L4af5be;}
}
B4af5b4:L4af5b4:{c.instructions+=2;NFSU2_TR(0x4af5b4);
w4(R+0,u32(0x451e768eull));
}
B4af5b9:{NFSU2_TR(0x4af5b9);
w4(R+4,u32(0x60b42afbull));
}
B4af5be:L4af5be:{c.instructions+=11;NFSU2_TR(0x4af5be);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af5bf:{NFSU2_TR(0x4af5bf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af5c1:{NFSU2_TR(0x4af5c1);
u8 U[4];
w4(U+0,u32(0x43da9fd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af5c6:{NFSU2_TR(0x4af5c6);
u8 U[4];
w4(U+0,u32(0x43da9fd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af5cb:{NFSU2_TR(0x4af5cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af5cc:{NFSU2_TR(0x4af5cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4af5cf:{NFSU2_TR(0x4af5cf);
u8 U[4];
w4(U+0,u32(0xbe503981ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af5d4:{NFSU2_TR(0x4af5d4);
u8 U[4];
w4(U+0,u32(0x88579775ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af5d9:{NFSU2_TR(0x4af5d9);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af5de:{NFSU2_TR(0x4af5de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af5df:{NFSU2_TR(0x4af5df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af5e4ull));
TAIL_STATIC(0x558790u,558);
}
B4af5e4:L4af5e4:{c.instructions+=4;NFSU2_TR(0x4af5e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4af5e7:{NFSU2_TR(0x4af5e7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af5e9:{NFSU2_TR(0x4af5e9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af5ea:{NFSU2_TR(0x4af5ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af5efull));
TAIL_STATIC(0x537950u,537);
}
B4af5ef:L4af5ef:{c.instructions+=4;NFSU2_TR(0x4af5ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4af5f2:{NFSU2_TR(0x4af5f2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af5f3:{NFSU2_TR(0x4af5f3);
u8 U[4];
w4(U+0,u32(0x96dda9e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af5f8:{NFSU2_TR(0x4af5f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af5fdull));
TAIL_STATIC(0x55dda0u,55d);
}
B4af5fd:L4af5fd:{c.instructions+=6;NFSU2_TR(0x4af5fd);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x34ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x34ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4af600:{NFSU2_TR(0x4af600);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4af601:{NFSU2_TR(0x4af601);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4af602:{NFSU2_TR(0x4af602);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4af603:{NFSU2_TR(0x4af603);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4af604:{NFSU2_TR(0x4af604);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4af607:L4af607:{c.instructions+=2;NFSU2_TR(0x4af607);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x9a3b571dull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x9a3b571dull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x9a3b571dull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4af60d:{NFSU2_TR(0x4af60d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4af622;}}
}
B4af60f:L4af60f:{c.instructions+=3;NFSU2_TR(0x4af60f);
s1(0x836324,u8(0x0ull));
}
B4af616:{NFSU2_TR(0x4af616);
s1(0x863484,u8(0x1ull));
}
B4af61d:{NFSU2_TR(0x4af61d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af622ull));
TAIL_STATIC(0x5404a0u,540);
}
B4af622:L4af622:{c.instructions+=5;NFSU2_TR(0x4af622);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4af623:{NFSU2_TR(0x4af623);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4af624:{NFSU2_TR(0x4af624);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4af625:{NFSU2_TR(0x4af625);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4af626:{NFSU2_TR(0x4af626);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4af630:L4af630:{c.instructions+=2;NFSU2_TR(0x4af630);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4af638:{NFSU2_TR(0x4af638);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4af679;}}
}
B4af63a:L4af63a:{c.instructions+=12;NFSU2_TR(0x4af63a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af63b:{NFSU2_TR(0x4af63b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4af63f:{NFSU2_TR(0x4af63f);
u8 U[4];
w4(U+0,u32(0x60b42afbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af644:{NFSU2_TR(0x4af644);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af646:{NFSU2_TR(0x4af646);
u8 U[4];
w4(U+0,u32(0x43da9fd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af64b:{NFSU2_TR(0x4af64b);
u8 U[4];
w4(U+0,u32(0x43da9fd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af650:{NFSU2_TR(0x4af650);
u8 U[4];
w4(U+0,u32(0x451e768eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af655:{NFSU2_TR(0x4af655);
u8 U[4];
w4(U+0,u32(0xbe503981ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af65a:{NFSU2_TR(0x4af65a);
u8 U[4];
w4(U+0,u32(0x88579775ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af65f:{NFSU2_TR(0x4af65f);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af664:{NFSU2_TR(0x4af664);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af665:{NFSU2_TR(0x4af665);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af66aull));
TAIL_STATIC(0x558790u,558);
}
B4af66a:L4af66a:{c.instructions+=3;NFSU2_TR(0x4af66a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af66b:{NFSU2_TR(0x4af66b);
u8 U[4];
w4(U+0,u32(0x96dda9e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af670:{NFSU2_TR(0x4af670);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af675ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4af675:L4af675:{c.instructions+=2;NFSU2_TR(0x4af675);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4af678:{NFSU2_TR(0x4af678);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4af679:L4af679:{c.instructions+=1;NFSU2_TR(0x4af679);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4af680:L4af680:{c.instructions+=4;NFSU2_TR(0x4af680);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af681:{NFSU2_TR(0x4af681);
__builtin_memmove((R+20),(R+16),4);
}
B4af683:{NFSU2_TR(0x4af683);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4af68a:{NFSU2_TR(0x4af68a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4af6a2;}}
}
B4af68c:L4af68c:{c.instructions+=7;NFSU2_TR(0x4af68c);
__builtin_memmove((R+0),gp(0x863480),4);
}
B4af691:{NFSU2_TR(0x4af691);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4af694:{NFSU2_TR(0x4af694);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af695:{NFSU2_TR(0x4af695);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af697:{NFSU2_TR(0x4af697);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af698:{NFSU2_TR(0x4af698);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af69a:{NFSU2_TR(0x4af69a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af69full));
TAIL_STATIC(0x552cc0u,552);
}
B4af69f:L4af69f:{c.instructions+=1;NFSU2_TR(0x4af69f);
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
B4af6a2:L4af6a2:{c.instructions+=2;NFSU2_TR(0x4af6a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4af6a3:{NFSU2_TR(0x4af6a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4af6b0:L4af6b0:{c.instructions+=2;NFSU2_TR(0x4af6b0);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4af6b8:{NFSU2_TR(0x4af6b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4af6ce;}}
}
B4af6ba:L4af6ba:{c.instructions+=5;NFSU2_TR(0x4af6ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4af6be:{NFSU2_TR(0x4af6be);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af6c0:{NFSU2_TR(0x4af6c0);
u8 U[4];
w4(U+0,u32(0x790d0cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af6c5:{NFSU2_TR(0x4af6c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af6c6:{NFSU2_TR(0x4af6c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af6cbull));
TAIL_STATIC(0x537980u,537);
}
B4af6cb:L4af6cb:{c.instructions+=1;NFSU2_TR(0x4af6cb);
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
B4af6ce:L4af6ce:{c.instructions+=1;NFSU2_TR(0x4af6ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4af6e0:L4af6e0:{c.instructions+=2;NFSU2_TR(0x4af6e0);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4af6e8:{NFSU2_TR(0x4af6e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4af6fe;}}
}
B4af6ea:L4af6ea:{c.instructions+=5;NFSU2_TR(0x4af6ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4af6ee:{NFSU2_TR(0x4af6ee);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af6f0:{NFSU2_TR(0x4af6f0);
u8 U[4];
w4(U+0,u32(0x78f5d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af6f5:{NFSU2_TR(0x4af6f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af6f6:{NFSU2_TR(0x4af6f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af6fbull));
TAIL_STATIC(0x537980u,537);
}
B4af6fb:L4af6fb:{c.instructions+=1;NFSU2_TR(0x4af6fb);
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
B4af6fe:L4af6fe:{c.instructions+=1;NFSU2_TR(0x4af6fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4af710:L4af710:{c.instructions+=2;NFSU2_TR(0x4af710);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4af718:{NFSU2_TR(0x4af718);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4af72e;}}
}
B4af71a:L4af71a:{c.instructions+=5;NFSU2_TR(0x4af71a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4af71e:{NFSU2_TR(0x4af71e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af720:{NFSU2_TR(0x4af720);
u8 U[4];
w4(U+0,u32(0x790d4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af725:{NFSU2_TR(0x4af725);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af726:{NFSU2_TR(0x4af726);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af72bull));
TAIL_STATIC(0x537980u,537);
}
B4af72b:L4af72b:{c.instructions+=1;NFSU2_TR(0x4af72b);
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
B4af72e:L4af72e:{c.instructions+=1;NFSU2_TR(0x4af72e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4af740:L4af740:{c.instructions+=2;NFSU2_TR(0x4af740);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4af748:{NFSU2_TR(0x4af748);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4af775;}}
}
B4af74a:L4af74a:{c.instructions+=2;NFSU2_TR(0x4af74a);
w4(R+4,u32(0x83a9d0ull));
}
B4af74f:{NFSU2_TR(0x4af74f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af754ull));
TAIL_STATIC(0x5032c0u,503);
}
B4af754:L4af754:{c.instructions+=9;NFSU2_TR(0x4af754);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4af758:{NFSU2_TR(0x4af758);
u8 U[4];
w4(U+0,u32(0x7d1e4c8cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af75d:{NFSU2_TR(0x4af75d);
u8 U[4];
w4(U+0,u32(0x28c2c1b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af762:{NFSU2_TR(0x4af762);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af764:{NFSU2_TR(0x4af764);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af766:{NFSU2_TR(0x4af766);
u8 U[4];
w4(U+0,u32(0xc41ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af76b:{NFSU2_TR(0x4af76b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af76c:{NFSU2_TR(0x4af76c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af76d:{NFSU2_TR(0x4af76d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af772ull));
TAIL_STATIC(0x4a3100u,4a3);
}
B4af772:L4af772:{c.instructions+=1;NFSU2_TR(0x4af772);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4af775:L4af775:{c.instructions+=1;NFSU2_TR(0x4af775);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4af780:L4af780:{c.instructions+=2;NFSU2_TR(0x4af780);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4af788:{NFSU2_TR(0x4af788);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4af7c9;}}
}
B4af78a:L4af78a:{c.instructions+=5;NFSU2_TR(0x4af78a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af78b:{NFSU2_TR(0x4af78b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4af78f:{NFSU2_TR(0x4af78f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af790:{NFSU2_TR(0x4af790);
u8 U[4];
w4(U+0,u32(0x96dda9e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af795:{NFSU2_TR(0x4af795);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af79aull));
TAIL_STATIC(0x55dda0u,55d);
}
B4af79a:L4af79a:{c.instructions+=10;NFSU2_TR(0x4af79a);
u8 U[4];
w4(U+0,u32(0xb10ae56full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af79f:{NFSU2_TR(0x4af79f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af7a1:{NFSU2_TR(0x4af7a1);
u8 U[4];
w4(U+0,u32(0x1fab5998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af7a6:{NFSU2_TR(0x4af7a6);
u8 U[4];
w4(U+0,u32(0x1fab5998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af7ab:{NFSU2_TR(0x4af7ab);
u8 U[4];
w4(U+0,u32(0x34dc1becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af7b0:{NFSU2_TR(0x4af7b0);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af7b5:{NFSU2_TR(0x4af7b5);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af7ba:{NFSU2_TR(0x4af7ba);
u8 U[4];
w4(U+0,u32(0x790d74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af7bf:{NFSU2_TR(0x4af7bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af7c0:{NFSU2_TR(0x4af7c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af7c5ull));
TAIL_STATIC(0x558790u,558);
}
B4af7c5:L4af7c5:{c.instructions+=2;NFSU2_TR(0x4af7c5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4af7c8:{NFSU2_TR(0x4af7c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4af7c9:L4af7c9:{c.instructions+=1;NFSU2_TR(0x4af7c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4af7d0:L4af7d0:{c.instructions+=2;NFSU2_TR(0x4af7d0);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4af7d8:{NFSU2_TR(0x4af7d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4af819;}}
}
B4af7da:L4af7da:{c.instructions+=12;NFSU2_TR(0x4af7da);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af7db:{NFSU2_TR(0x4af7db);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4af7df:{NFSU2_TR(0x4af7df);
u8 U[4];
w4(U+0,u32(0xcb5e3178ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af7e4:{NFSU2_TR(0x4af7e4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af7e6:{NFSU2_TR(0x4af7e6);
u8 U[4];
w4(U+0,u32(0x43da9fd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af7eb:{NFSU2_TR(0x4af7eb);
u8 U[4];
w4(U+0,u32(0x43da9fd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af7f0:{NFSU2_TR(0x4af7f0);
u8 U[4];
w4(U+0,u32(0x30ed2368ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af7f5:{NFSU2_TR(0x4af7f5);
u8 U[4];
w4(U+0,u32(0xbe503981ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af7fa:{NFSU2_TR(0x4af7fa);
u8 U[4];
w4(U+0,u32(0x88579775ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af7ff:{NFSU2_TR(0x4af7ff);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af804:{NFSU2_TR(0x4af804);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af805:{NFSU2_TR(0x4af805);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af80aull));
TAIL_STATIC(0x558790u,558);
}
B4af80a:L4af80a:{c.instructions+=3;NFSU2_TR(0x4af80a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af80b:{NFSU2_TR(0x4af80b);
u8 U[4];
w4(U+0,u32(0x96dda9e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af810:{NFSU2_TR(0x4af810);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af815ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4af815:L4af815:{c.instructions+=2;NFSU2_TR(0x4af815);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4af818:{NFSU2_TR(0x4af818);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4af819:L4af819:{c.instructions+=1;NFSU2_TR(0x4af819);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4af820:L4af820:{c.instructions+=12;NFSU2_TR(0x4af820);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af822:{NFSU2_TR(0x4af822);
u8 U[4];
w4(U+0,u32(0x772d90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af827:{NFSU2_TR(0x4af827);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4af82d:{NFSU2_TR(0x4af82d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af82e:{NFSU2_TR(0x4af82e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4af835:{NFSU2_TR(0x4af835);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af836:{NFSU2_TR(0x4af836);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af837:{NFSU2_TR(0x4af837);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af838:{NFSU2_TR(0x4af838);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af839:{NFSU2_TR(0x4af839);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af83b:{NFSU2_TR(0x4af83b);
__builtin_memmove((R+24),(R+4),4);
}
B4af83d:{NFSU2_TR(0x4af83d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af842ull));
TAIL_STATIC(0x575620u,575);
}
B4af842:L4af842:{c.instructions+=6;NFSU2_TR(0x4af842);
__builtin_memmove((R+28),(R+0),4);
}
B4af844:{NFSU2_TR(0x4af844);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4af847:{NFSU2_TR(0x4af847);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4af84b:{NFSU2_TR(0x4af84b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4af84d:{NFSU2_TR(0x4af84d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4af855:{NFSU2_TR(0x4af855);
if(r1(R+518)){{goto L4af876;}}
}
B4af857:L4af857:{c.instructions+=5;NFSU2_TR(0x4af857);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af859:{NFSU2_TR(0x4af859);
u8 U[4];
w4(U+0,u32(0x194efa7aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af85e:{NFSU2_TR(0x4af85e);
u8 U[4];
w4(U+0,u32(0xa230cd88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af863:{NFSU2_TR(0x4af863);
__builtin_memmove((R+4),(R+28),4);
}
B4af865:{NFSU2_TR(0x4af865);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af86aull));
TAIL_STATIC(0x51f670u,51f);
}
B4af86a:L4af86a:{c.instructions+=3;NFSU2_TR(0x4af86a);
u8 U[4];
w4(U+0,u32(0x790cf4ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4af870:{NFSU2_TR(0x4af870);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x45ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4af874:{NFSU2_TR(0x4af874);
{goto L4af878;}
}
B4af876:L4af876:{c.instructions+=1;NFSU2_TR(0x4af876);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4af878:L4af878:{c.instructions+=6;NFSU2_TR(0x4af878);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4af87a:{NFSU2_TR(0x4af87a);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4af87d:{NFSU2_TR(0x4af87d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af87e:{NFSU2_TR(0x4af87e);
__builtin_memmove((R+4),(R+24),4);
}
B4af880:{NFSU2_TR(0x4af880);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4af884:{NFSU2_TR(0x4af884);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af887ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4af887:L4af887:{c.instructions+=2;NFSU2_TR(0x4af887);
u8 U[8];
__builtin_memmove((U+0),gp(0x862838),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4af88e:{NFSU2_TR(0x4af88e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4af8d5;}}
}
B4af890:L4af890:{c.instructions+=2;NFSU2_TR(0x4af890);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af892:{NFSU2_TR(0x4af892);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af897ull));
TAIL_STATIC(0x575620u,575);
}
B4af897:L4af897:{c.instructions+=6;NFSU2_TR(0x4af897);
__builtin_memmove((R+28),(R+0),4);
}
B4af899:{NFSU2_TR(0x4af899);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4af89c:{NFSU2_TR(0x4af89c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4af8a0:{NFSU2_TR(0x4af8a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4af8a2:{NFSU2_TR(0x4af8a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4af8aa:{NFSU2_TR(0x4af8aa);
if(r1(R+518)){{goto L4af8c7;}}
}
B4af8ac:L4af8ac:{c.instructions+=5;NFSU2_TR(0x4af8ac);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af8ae:{NFSU2_TR(0x4af8ae);
u8 U[4];
w4(U+0,u32(0x9c07ca52ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af8b3:{NFSU2_TR(0x4af8b3);
u8 U[4];
w4(U+0,u32(0x22f2ceabull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af8b8:{NFSU2_TR(0x4af8b8);
__builtin_memmove((R+4),(R+28),4);
}
B4af8ba:{NFSU2_TR(0x4af8ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af8bfull));
TAIL_STATIC(0x51f670u,51f);
}
B4af8bf:L4af8bf:{c.instructions+=2;NFSU2_TR(0x4af8bf);
u8 U[4];
w4(U+0,u32(0x790d44ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4af8c5:{NFSU2_TR(0x4af8c5);
{goto L4af8c9;}
}
B4af8c7:L4af8c7:{c.instructions+=1;NFSU2_TR(0x4af8c7);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4af8c9:L4af8c9:{c.instructions+=5;NFSU2_TR(0x4af8c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4af8cb:{NFSU2_TR(0x4af8cb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af8cc:{NFSU2_TR(0x4af8cc);
__builtin_memmove((R+4),(R+24),4);
}
B4af8ce:{NFSU2_TR(0x4af8ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4af8d2:{NFSU2_TR(0x4af8d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af8d5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4af8d5:L4af8d5:{c.instructions+=2;NFSU2_TR(0x4af8d5);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af8d7:{NFSU2_TR(0x4af8d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af8dcull));
TAIL_STATIC(0x575620u,575);
}
B4af8dc:L4af8dc:{c.instructions+=6;NFSU2_TR(0x4af8dc);
__builtin_memmove((R+28),(R+0),4);
}
B4af8de:{NFSU2_TR(0x4af8de);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4af8e1:{NFSU2_TR(0x4af8e1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4af8e5:{NFSU2_TR(0x4af8e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4af8e7:{NFSU2_TR(0x4af8e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4af8ef:{NFSU2_TR(0x4af8ef);
if(r1(R+518)){{goto L4af90c;}}
}
B4af8f1:L4af8f1:{c.instructions+=5;NFSU2_TR(0x4af8f1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af8f3:{NFSU2_TR(0x4af8f3);
u8 U[4];
w4(U+0,u32(0x451879e2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af8f8:{NFSU2_TR(0x4af8f8);
u8 U[4];
w4(U+0,u32(0xa964095bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af8fd:{NFSU2_TR(0x4af8fd);
__builtin_memmove((R+4),(R+28),4);
}
B4af8ff:{NFSU2_TR(0x4af8ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af904ull));
TAIL_STATIC(0x51f670u,51f);
}
B4af904:L4af904:{c.instructions+=2;NFSU2_TR(0x4af904);
u8 U[4];
w4(U+0,u32(0x790d04ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4af90a:{NFSU2_TR(0x4af90a);
{goto L4af90e;}
}
B4af90c:L4af90c:{c.instructions+=1;NFSU2_TR(0x4af90c);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4af90e:L4af90e:{c.instructions+=5;NFSU2_TR(0x4af90e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4af910:{NFSU2_TR(0x4af910);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af911:{NFSU2_TR(0x4af911);
__builtin_memmove((R+4),(R+24),4);
}
B4af913:{NFSU2_TR(0x4af913);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4af917:{NFSU2_TR(0x4af917);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af91aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4af91a:L4af91a:{c.instructions+=2;NFSU2_TR(0x4af91a);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af91c:{NFSU2_TR(0x4af91c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af921ull));
TAIL_STATIC(0x575620u,575);
}
B4af921:L4af921:{c.instructions+=6;NFSU2_TR(0x4af921);
__builtin_memmove((R+28),(R+0),4);
}
B4af923:{NFSU2_TR(0x4af923);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4af926:{NFSU2_TR(0x4af926);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4af92a:{NFSU2_TR(0x4af92a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4af92c:{NFSU2_TR(0x4af92c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4af934:{NFSU2_TR(0x4af934);
if(r1(R+518)){{goto L4af951;}}
}
B4af936:L4af936:{c.instructions+=5;NFSU2_TR(0x4af936);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af938:{NFSU2_TR(0x4af938);
u8 U[4];
w4(U+0,u32(0xabb24bbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af93d:{NFSU2_TR(0x4af93d);
u8 U[4];
w4(U+0,u32(0x511f9d75ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af942:{NFSU2_TR(0x4af942);
__builtin_memmove((R+4),(R+28),4);
}
B4af944:{NFSU2_TR(0x4af944);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af949ull));
TAIL_STATIC(0x51f670u,51f);
}
B4af949:L4af949:{c.instructions+=2;NFSU2_TR(0x4af949);
u8 U[4];
w4(U+0,u32(0x790cfcull));
s4(u32(r4(R+28)),r4(U+0));
}
B4af94f:{NFSU2_TR(0x4af94f);
{goto L4af953;}
}
B4af951:L4af951:{c.instructions+=1;NFSU2_TR(0x4af951);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4af953:L4af953:{c.instructions+=5;NFSU2_TR(0x4af953);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4af955:{NFSU2_TR(0x4af955);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af956:{NFSU2_TR(0x4af956);
__builtin_memmove((R+4),(R+24),4);
}
B4af958:{NFSU2_TR(0x4af958);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4af95c:{NFSU2_TR(0x4af95c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af95full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4af95f:L4af95f:{c.instructions+=2;NFSU2_TR(0x4af95f);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af961:{NFSU2_TR(0x4af961);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af966ull));
TAIL_STATIC(0x575620u,575);
}
B4af966:L4af966:{c.instructions+=6;NFSU2_TR(0x4af966);
__builtin_memmove((R+28),(R+0),4);
}
B4af968:{NFSU2_TR(0x4af968);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4af96b:{NFSU2_TR(0x4af96b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4af96f:{NFSU2_TR(0x4af96f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4af971:{NFSU2_TR(0x4af971);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4af979:{NFSU2_TR(0x4af979);
if(r1(R+518)){{goto L4af99a;}}
}
B4af97b:L4af97b:{c.instructions+=5;NFSU2_TR(0x4af97b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af97d:{NFSU2_TR(0x4af97d);
u8 U[4];
w4(U+0,u32(0x8513f2c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af982:{NFSU2_TR(0x4af982);
u8 U[4];
w4(U+0,u32(0x7a9b397aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af987:{NFSU2_TR(0x4af987);
__builtin_memmove((R+4),(R+28),4);
}
B4af989:{NFSU2_TR(0x4af989);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af98eull));
TAIL_STATIC(0x51f670u,51f);
}
B4af98e:L4af98e:{c.instructions+=3;NFSU2_TR(0x4af98e);
u8 U[4];
w4(U+0,u32(0x790d6cull));
s4(u32(r4(R+28)),r4(U+0));
}
B4af994:{NFSU2_TR(0x4af994);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x45ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4af998:{NFSU2_TR(0x4af998);
{goto L4af99c;}
}
B4af99a:L4af99a:{c.instructions+=1;NFSU2_TR(0x4af99a);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4af99c:L4af99c:{c.instructions+=5;NFSU2_TR(0x4af99c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4af99e:{NFSU2_TR(0x4af99e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af99f:{NFSU2_TR(0x4af99f);
__builtin_memmove((R+4),(R+24),4);
}
B4af9a1:{NFSU2_TR(0x4af9a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4af9a5:{NFSU2_TR(0x4af9a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af9a8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4af9a8:L4af9a8:{c.instructions+=2;NFSU2_TR(0x4af9a8);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af9aa:{NFSU2_TR(0x4af9aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af9afull));
TAIL_STATIC(0x575620u,575);
}
B4af9af:L4af9af:{c.instructions+=6;NFSU2_TR(0x4af9af);
__builtin_memmove((R+28),(R+0),4);
}
B4af9b1:{NFSU2_TR(0x4af9b1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4af9b4:{NFSU2_TR(0x4af9b4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4af9b8:{NFSU2_TR(0x4af9b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4af9ba:{NFSU2_TR(0x4af9ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4af9c2:{NFSU2_TR(0x4af9c2);
if(r1(R+518)){{goto L4af9df;}}
}
B4af9c4:L4af9c4:{c.instructions+=5;NFSU2_TR(0x4af9c4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af9c6:{NFSU2_TR(0x4af9c6);
u8 U[4];
w4(U+0,u32(0xce62c0bfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af9cb:{NFSU2_TR(0x4af9cb);
u8 U[4];
w4(U+0,u32(0x49d2e3deull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af9d0:{NFSU2_TR(0x4af9d0);
__builtin_memmove((R+4),(R+28),4);
}
B4af9d2:{NFSU2_TR(0x4af9d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af9d7ull));
TAIL_STATIC(0x51f670u,51f);
}
B4af9d7:L4af9d7:{c.instructions+=2;NFSU2_TR(0x4af9d7);
u8 U[4];
w4(U+0,u32(0x790d24ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4af9dd:{NFSU2_TR(0x4af9dd);
{goto L4af9e1;}
}
B4af9df:L4af9df:{c.instructions+=1;NFSU2_TR(0x4af9df);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4af9e1:L4af9e1:{c.instructions+=5;NFSU2_TR(0x4af9e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4af9e3:{NFSU2_TR(0x4af9e3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af9e4:{NFSU2_TR(0x4af9e4);
__builtin_memmove((R+4),(R+24),4);
}
B4af9e6:{NFSU2_TR(0x4af9e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4af9ea:{NFSU2_TR(0x4af9ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af9edull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4af9ed:L4af9ed:{c.instructions+=2;NFSU2_TR(0x4af9ed);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4af9ef:{NFSU2_TR(0x4af9ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af9f4ull));
TAIL_STATIC(0x575620u,575);
}
B4af9f4:L4af9f4:{c.instructions+=6;NFSU2_TR(0x4af9f4);
__builtin_memmove((R+28),(R+0),4);
}
B4af9f6:{NFSU2_TR(0x4af9f6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4af9f9:{NFSU2_TR(0x4af9f9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4af9fd:{NFSU2_TR(0x4af9fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4af9ff:{NFSU2_TR(0x4af9ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4afa07:{NFSU2_TR(0x4afa07);
if(r1(R+518)){{goto L4afa24;}}
}
B4afa09:L4afa09:{c.instructions+=5;NFSU2_TR(0x4afa09);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afa0b:{NFSU2_TR(0x4afa0b);
u8 U[4];
w4(U+0,u32(0x3ec7395ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afa10:{NFSU2_TR(0x4afa10);
u8 U[4];
w4(U+0,u32(0x8ada6fd4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afa15:{NFSU2_TR(0x4afa15);
__builtin_memmove((R+4),(R+28),4);
}
B4afa17:{NFSU2_TR(0x4afa17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afa1cull));
TAIL_STATIC(0x51f670u,51f);
}
B4afa1c:L4afa1c:{c.instructions+=2;NFSU2_TR(0x4afa1c);
u8 U[4];
w4(U+0,u32(0x790d64ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4afa22:{NFSU2_TR(0x4afa22);
{goto L4afa26;}
}
B4afa24:L4afa24:{c.instructions+=1;NFSU2_TR(0x4afa24);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4afa26:L4afa26:{c.instructions+=5;NFSU2_TR(0x4afa26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4afa28:{NFSU2_TR(0x4afa28);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afa29:{NFSU2_TR(0x4afa29);
__builtin_memmove((R+4),(R+24),4);
}
B4afa2b:{NFSU2_TR(0x4afa2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4afa2f:{NFSU2_TR(0x4afa2f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afa32ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4afa32:L4afa32:{c.instructions+=2;NFSU2_TR(0x4afa32);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afa34:{NFSU2_TR(0x4afa34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afa39ull));
TAIL_STATIC(0x575620u,575);
}
B4afa39:L4afa39:{c.instructions+=6;NFSU2_TR(0x4afa39);
__builtin_memmove((R+28),(R+0),4);
}
B4afa3b:{NFSU2_TR(0x4afa3b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4afa3e:{NFSU2_TR(0x4afa3e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4afa42:{NFSU2_TR(0x4afa42);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4afa44:{NFSU2_TR(0x4afa44);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4afa4c:{NFSU2_TR(0x4afa4c);
if(r1(R+518)){{goto L4afa6d;}}
}
B4afa4e:L4afa4e:{c.instructions+=5;NFSU2_TR(0x4afa4e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afa50:{NFSU2_TR(0x4afa50);
u8 U[4];
w4(U+0,u32(0x46e7d84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afa55:{NFSU2_TR(0x4afa55);
u8 U[4];
w4(U+0,u32(0xfc39853full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afa5a:{NFSU2_TR(0x4afa5a);
__builtin_memmove((R+4),(R+28),4);
}
B4afa5c:{NFSU2_TR(0x4afa5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afa61ull));
TAIL_STATIC(0x51f670u,51f);
}
B4afa61:L4afa61:{c.instructions+=3;NFSU2_TR(0x4afa61);
u8 U[4];
w4(U+0,u32(0x790d8cull));
s4(u32(r4(R+28)),r4(U+0));
}
B4afa67:{NFSU2_TR(0x4afa67);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x45ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4afa6b:{NFSU2_TR(0x4afa6b);
{goto L4afa6f;}
}
B4afa6d:L4afa6d:{c.instructions+=1;NFSU2_TR(0x4afa6d);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4afa6f:L4afa6f:{c.instructions+=5;NFSU2_TR(0x4afa6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4afa71:{NFSU2_TR(0x4afa71);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afa72:{NFSU2_TR(0x4afa72);
__builtin_memmove((R+4),(R+24),4);
}
B4afa74:{NFSU2_TR(0x4afa74);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4afa78:{NFSU2_TR(0x4afa78);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afa7bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4afa7b:L4afa7b:{c.instructions+=3;NFSU2_TR(0x4afa7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4afa7e:{NFSU2_TR(0x4afa7e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afa7f:{NFSU2_TR(0x4afa7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afa84ull));
TAIL_STATIC(0x50b8a0u,50b);
}
B4afa84:L4afa84:{c.instructions+=5;NFSU2_TR(0x4afa84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4afa87:{NFSU2_TR(0x4afa87);
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
B4afa8a:{NFSU2_TR(0x4afa8a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4afa8d:{NFSU2_TR(0x4afa8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afa8e:{NFSU2_TR(0x4afa8e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afa91ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4afa91:L4afa91:{c.instructions+=3;NFSU2_TR(0x4afa91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4afa93:{NFSU2_TR(0x4afa93);
__builtin_memmove((R+4),(R+24),4);
}
B4afa95:{NFSU2_TR(0x4afa95);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afa98ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4afa98:L4afa98:{c.instructions+=2;NFSU2_TR(0x4afa98);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afa9d:{NFSU2_TR(0x4afa9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afaa2ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4afaa2:L4afaa2:{c.instructions+=6;NFSU2_TR(0x4afaa2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4afaa5:{NFSU2_TR(0x4afaa5);
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
B4afaa7:{NFSU2_TR(0x4afaa7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4afaa8:{NFSU2_TR(0x4afaa8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4afaa9:{NFSU2_TR(0x4afaa9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4afaaa:{NFSU2_TR(0x4afaaa);
if(r1(R+518)){{goto L4afad5;}}
}
B4afaac:L4afaac:{c.instructions+=2;NFSU2_TR(0x4afaac);
u8 U[4];
w4(U+0,u32(0x790e08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afab1:{NFSU2_TR(0x4afab1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afab6ull));
TAIL_STATIC(0x577eb0u,577);
}
B4afab6:L4afab6:{c.instructions+=3;NFSU2_TR(0x4afab6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4afab9:{NFSU2_TR(0x4afab9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4afabb:{NFSU2_TR(0x4afabb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4afad5;}}
}
B4afabd:L4afabd:{c.instructions+=2;NFSU2_TR(0x4afabd);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afac2:{NFSU2_TR(0x4afac2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afac7ull));
TAIL_STATIC(0x51bd10u,51b);
}
B4afac7:L4afac7:{c.instructions+=5;NFSU2_TR(0x4afac7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4afaca:{NFSU2_TR(0x4afaca);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afacc:{NFSU2_TR(0x4afacc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aface:{NFSU2_TR(0x4aface);
__builtin_memmove((R+4),(R+0),4);
}
B4afad0:{NFSU2_TR(0x4afad0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afad5ull));
TAIL_STATIC(0x4a7180u,4a7);
}
B4afad5:L4afad5:{c.instructions+=4;NFSU2_TR(0x4afad5);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4afad9:{NFSU2_TR(0x4afad9);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4afae0:{NFSU2_TR(0x4afae0);
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
B4afae3:{NFSU2_TR(0x4afae3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4afaf0:L4afaf0:{c.instructions+=5;NFSU2_TR(0x4afaf0);
__builtin_memmove((R+0),(R+4),4);
}
B4afaf2:{NFSU2_TR(0x4afaf2);
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
B4afaf4:{NFSU2_TR(0x4afaf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4afaf7:{NFSU2_TR(0x4afaf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4afafa:{NFSU2_TR(0x4afafa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4afb00:L4afb00:{c.instructions+=2;NFSU2_TR(0x4afb00);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4afb08:{NFSU2_TR(0x4afb08);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4afb15;}}
}
B4afb0a:L4afb0a:{c.instructions+=3;NFSU2_TR(0x4afb0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4afb0e:{NFSU2_TR(0x4afb0e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afb0f:{NFSU2_TR(0x4afb0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afb14ull));
TAIL_STATIC(0x53ddb0u,53d);
}
B4afb14:L4afb14:{c.instructions+=1;NFSU2_TR(0x4afb14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4afb15:L4afb15:{c.instructions+=1;NFSU2_TR(0x4afb15);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4afb20:L4afb20:{c.instructions+=2;NFSU2_TR(0x4afb20);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4afb28:{NFSU2_TR(0x4afb28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4afb35;}}
}
B4afb2a:L4afb2a:{c.instructions+=3;NFSU2_TR(0x4afb2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4afb2e:{NFSU2_TR(0x4afb2e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afb2f:{NFSU2_TR(0x4afb2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afb34ull));
TAIL_STATIC(0x53ddf0u,53d);
}
B4afb34:L4afb34:{c.instructions+=1;NFSU2_TR(0x4afb34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4afb35:L4afb35:{c.instructions+=1;NFSU2_TR(0x4afb35);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4afb40:L4afb40:{c.instructions+=2;NFSU2_TR(0x4afb40);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4afb48:{NFSU2_TR(0x4afb48);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4afb5e;}}
}
B4afb4a:L4afb4a:{c.instructions+=5;NFSU2_TR(0x4afb4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4afb4e:{NFSU2_TR(0x4afb4e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afb50:{NFSU2_TR(0x4afb50);
u8 U[4];
w4(U+0,u32(0x790d2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afb55:{NFSU2_TR(0x4afb55);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afb56:{NFSU2_TR(0x4afb56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afb5bull));
TAIL_STATIC(0x537980u,537);
}
B4afb5b:L4afb5b:{c.instructions+=1;NFSU2_TR(0x4afb5b);
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
B4afb5e:L4afb5e:{c.instructions+=1;NFSU2_TR(0x4afb5e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4afb70:L4afb70:{c.instructions+=13;NFSU2_TR(0x4afb70);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afb72:{NFSU2_TR(0x4afb72);
u8 U[4];
w4(U+0,u32(0x772ddcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afb77:{NFSU2_TR(0x4afb77);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4afb7d:{NFSU2_TR(0x4afb7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afb7e:{NFSU2_TR(0x4afb7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4afb85:{NFSU2_TR(0x4afb85);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afb86:{NFSU2_TR(0x4afb86);
__builtin_memmove((R+0),gp(0x836327),1);
}
B4afb8b:{NFSU2_TR(0x4afb8b);
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
B4afb8d:{NFSU2_TR(0x4afb8d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afb8e:{NFSU2_TR(0x4afb8e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afb8f:{NFSU2_TR(0x4afb8f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afb90:{NFSU2_TR(0x4afb90);
__builtin_memmove((R+24),(R+4),4);
}
B4afb92:{NFSU2_TR(0x4afb92);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4afba8;}}
}
B4afb94:L4afb94:{c.instructions+=4;NFSU2_TR(0x4afb94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4afb97:{NFSU2_TR(0x4afb97);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4afb9a:{NFSU2_TR(0x4afb9a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afb9c:{NFSU2_TR(0x4afb9c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afb9full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4afb9f:L4afb9f:{c.instructions+=2;NFSU2_TR(0x4afb9f);
s1(0x836327,u8(0x1ull));
}
B4afba6:{NFSU2_TR(0x4afba6);
{goto L4afbc0;}
}
B4afba8:L4afba8:{c.instructions+=5;NFSU2_TR(0x4afba8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4afbab:{NFSU2_TR(0x4afbab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4afbae:{NFSU2_TR(0x4afbae);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B4afbb1:{NFSU2_TR(0x4afbb1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afbb2:{NFSU2_TR(0x4afbb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afbb7ull));
TAIL_STATIC(0x50b8a0u,50b);
}
B4afbb7:L4afbb7:{c.instructions+=4;NFSU2_TR(0x4afbb7);
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
B4afbba:{NFSU2_TR(0x4afbba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afbbb:{NFSU2_TR(0x4afbbb);
__builtin_memmove((R+4),(R+28),4);
}
B4afbbd:{NFSU2_TR(0x4afbbd);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afbc0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4afbc0:L4afbc0:{c.instructions+=2;NFSU2_TR(0x4afbc0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afbc2:{NFSU2_TR(0x4afbc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afbc7ull));
TAIL_STATIC(0x510d50u,510);
}
B4afbc7:L4afbc7:{c.instructions+=6;NFSU2_TR(0x4afbc7);
__builtin_memmove((R+12),(R+0),4);
}
B4afbc9:{NFSU2_TR(0x4afbc9);
w1(R+512,u8((r4(R+12))!=(u32(0x0ull))));
w4(R+12,u32(0-u32(r4(R+12))));
}
B4afbcb:{NFSU2_TR(0x4afbcb);
u8 U[2];
__builtin_memmove((U+0),(R+512),1);
w1(U+1,u8(u32(r1(R+12))-u32(r1(R+12))));
w1(R+12,u8(u32(r1(U+1))-u32(r1(U+0))));
}
B4afbcd:{NFSU2_TR(0x4afbcd);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afbcf:{NFSU2_TR(0x4afbcf);
w1(R+12,u8(u32(r1(R+12))+u32(u8(0x1ull))));
}
B4afbd1:{NFSU2_TR(0x4afbd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afbd6ull));
TAIL_STATIC(0x575620u,575);
}
B4afbd6:L4afbd6:{c.instructions+=6;NFSU2_TR(0x4afbd6);
__builtin_memmove((R+28),(R+0),4);
}
B4afbd8:{NFSU2_TR(0x4afbd8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4afbdb:{NFSU2_TR(0x4afbdb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4afbdf:{NFSU2_TR(0x4afbdf);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4afbe1:{NFSU2_TR(0x4afbe1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4afbe9:{NFSU2_TR(0x4afbe9);
if(r1(R+518)){{goto L4afc09;}}
}
B4afbeb:L4afbeb:{c.instructions+=5;NFSU2_TR(0x4afbeb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afbed:{NFSU2_TR(0x4afbed);
u8 U[4];
w4(U+0,u32(0xc7993f9aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afbf2:{NFSU2_TR(0x4afbf2);
u8 U[4];
w4(U+0,u32(0xff293517ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afbf7:{NFSU2_TR(0x4afbf7);
__builtin_memmove((R+4),(R+28),4);
}
B4afbf9:{NFSU2_TR(0x4afbf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afbfeull));
TAIL_STATIC(0x51f670u,51f);
}
B4afbfe:L4afbfe:{c.instructions+=3;NFSU2_TR(0x4afbfe);
u8 U[4];
w4(U+0,u32(0x790e28ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4afc04:{NFSU2_TR(0x4afc04);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4afc07:{NFSU2_TR(0x4afc07);
{goto L4afc0b;}
}
B4afc09:L4afc09:{c.instructions+=1;NFSU2_TR(0x4afc09);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4afc0b:L4afc0b:{c.instructions+=5;NFSU2_TR(0x4afc0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4afc0d:{NFSU2_TR(0x4afc0d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afc0e:{NFSU2_TR(0x4afc0e);
__builtin_memmove((R+4),(R+24),4);
}
B4afc10:{NFSU2_TR(0x4afc10);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4afc18:{NFSU2_TR(0x4afc18);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afc1bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4afc1b:L4afc1b:{c.instructions+=2;NFSU2_TR(0x4afc1b);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afc1d:{NFSU2_TR(0x4afc1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afc22ull));
TAIL_STATIC(0x510d50u,510);
}
B4afc22:L4afc22:{c.instructions+=6;NFSU2_TR(0x4afc22);
__builtin_memmove((R+12),(R+0),4);
}
B4afc24:{NFSU2_TR(0x4afc24);
w1(R+512,u8((r4(R+12))!=(u32(0x0ull))));
w4(R+12,u32(0-u32(r4(R+12))));
}
B4afc26:{NFSU2_TR(0x4afc26);
u8 U[2];
__builtin_memmove((U+0),(R+512),1);
w1(U+1,u8(u32(r1(R+12))-u32(r1(R+12))));
w1(R+12,u8(u32(r1(U+1))-u32(r1(U+0))));
}
B4afc28:{NFSU2_TR(0x4afc28);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afc2a:{NFSU2_TR(0x4afc2a);
w1(R+12,u8(u32(r1(R+12))+u32(u8(0x1ull))));
}
B4afc2c:{NFSU2_TR(0x4afc2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afc31ull));
TAIL_STATIC(0x575620u,575);
}
B4afc31:L4afc31:{c.instructions+=6;NFSU2_TR(0x4afc31);
__builtin_memmove((R+28),(R+0),4);
}
B4afc33:{NFSU2_TR(0x4afc33);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4afc36:{NFSU2_TR(0x4afc36);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4afc3a:{NFSU2_TR(0x4afc3a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4afc3c:{NFSU2_TR(0x4afc3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4afc44:{NFSU2_TR(0x4afc44);
if(r1(R+518)){{goto L4afc64;}}
}
B4afc46:L4afc46:{c.instructions+=5;NFSU2_TR(0x4afc46);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afc48:{NFSU2_TR(0x4afc48);
u8 U[4];
w4(U+0,u32(0x7647b08cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afc4d:{NFSU2_TR(0x4afc4d);
u8 U[4];
w4(U+0,u32(0x597df2a7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afc52:{NFSU2_TR(0x4afc52);
__builtin_memmove((R+4),(R+28),4);
}
B4afc54:{NFSU2_TR(0x4afc54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afc59ull));
TAIL_STATIC(0x51f670u,51f);
}
B4afc59:L4afc59:{c.instructions+=3;NFSU2_TR(0x4afc59);
u8 U[4];
w4(U+0,u32(0x790e30ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4afc5f:{NFSU2_TR(0x4afc5f);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4afc62:{NFSU2_TR(0x4afc62);
{goto L4afc66;}
}
B4afc64:L4afc64:{c.instructions+=1;NFSU2_TR(0x4afc64);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4afc66:L4afc66:{c.instructions+=5;NFSU2_TR(0x4afc66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4afc68:{NFSU2_TR(0x4afc68);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afc69:{NFSU2_TR(0x4afc69);
__builtin_memmove((R+4),(R+24),4);
}
B4afc6b:{NFSU2_TR(0x4afc6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4afc73:{NFSU2_TR(0x4afc73);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afc76ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4afc76:L4afc76:{c.instructions+=2;NFSU2_TR(0x4afc76);
w4(R+4,u32(0x85ad40ull));
}
B4afc7b:{NFSU2_TR(0x4afc7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afc80ull));
TAIL_STATIC(0x5009e0u,500);
}
B4afc80:L4afc80:{c.instructions+=6;NFSU2_TR(0x4afc80);
__builtin_memmove((R+12),(R+0),4);
}
B4afc82:{NFSU2_TR(0x4afc82);
w1(R+512,u8((r4(R+12))!=(u32(0x0ull))));
w4(R+12,u32(0-u32(r4(R+12))));
}
B4afc84:{NFSU2_TR(0x4afc84);
u8 U[2];
__builtin_memmove((U+0),(R+512),1);
w1(U+1,u8(u32(r1(R+12))-u32(r1(R+12))));
w1(R+12,u8(u32(r1(U+1))-u32(r1(U+0))));
}
B4afc86:{NFSU2_TR(0x4afc86);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afc88:{NFSU2_TR(0x4afc88);
w1(R+12,u8(u32(r1(R+12))+u32(u8(0x1ull))));
}
B4afc8a:{NFSU2_TR(0x4afc8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afc8full));
TAIL_STATIC(0x575620u,575);
}
B4afc8f:L4afc8f:{c.instructions+=6;NFSU2_TR(0x4afc8f);
__builtin_memmove((R+28),(R+0),4);
}
B4afc91:{NFSU2_TR(0x4afc91);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4afc94:{NFSU2_TR(0x4afc94);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4afc98:{NFSU2_TR(0x4afc98);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4afc9a:{NFSU2_TR(0x4afc9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4afca2:{NFSU2_TR(0x4afca2);
if(r1(R+518)){{goto L4afcc2;}}
}
B4afca4:L4afca4:{c.instructions+=5;NFSU2_TR(0x4afca4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afca6:{NFSU2_TR(0x4afca6);
u8 U[4];
w4(U+0,u32(0xe0004602ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afcab:{NFSU2_TR(0x4afcab);
u8 U[4];
w4(U+0,u32(0x878ffdfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afcb0:{NFSU2_TR(0x4afcb0);
__builtin_memmove((R+4),(R+28),4);
}
B4afcb2:{NFSU2_TR(0x4afcb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afcb7ull));
TAIL_STATIC(0x51f670u,51f);
}
B4afcb7:L4afcb7:{c.instructions+=3;NFSU2_TR(0x4afcb7);
u8 U[4];
w4(U+0,u32(0x790e38ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4afcbd:{NFSU2_TR(0x4afcbd);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4afcc0:{NFSU2_TR(0x4afcc0);
{goto L4afcc4;}
}
B4afcc2:L4afcc2:{c.instructions+=1;NFSU2_TR(0x4afcc2);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4afcc4:L4afcc4:{c.instructions+=5;NFSU2_TR(0x4afcc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4afcc6:{NFSU2_TR(0x4afcc6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afcc7:{NFSU2_TR(0x4afcc7);
__builtin_memmove((R+4),(R+24),4);
}
B4afcc9:{NFSU2_TR(0x4afcc9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4afcd1:{NFSU2_TR(0x4afcd1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afcd4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4afcd4:L4afcd4:{c.instructions+=4;NFSU2_TR(0x4afcd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4afcd7:{NFSU2_TR(0x4afcd7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4afcda:{NFSU2_TR(0x4afcda);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afcdc:{NFSU2_TR(0x4afcdc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afcdfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4afcdf:L4afcdf:{c.instructions+=3;NFSU2_TR(0x4afcdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4afce1:{NFSU2_TR(0x4afce1);
__builtin_memmove((R+4),(R+24),4);
}
B4afce3:{NFSU2_TR(0x4afce3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afce6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4afce6:L4afce6:{c.instructions+=7;NFSU2_TR(0x4afce6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4afcea:{NFSU2_TR(0x4afcea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4afceb:{NFSU2_TR(0x4afceb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4afcec:{NFSU2_TR(0x4afcec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4afced:{NFSU2_TR(0x4afced);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4afcf4:{NFSU2_TR(0x4afcf4);
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
B4afcf7:{NFSU2_TR(0x4afcf7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4afd00:L4afd00:{c.instructions+=12;NFSU2_TR(0x4afd00);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afd02:{NFSU2_TR(0x4afd02);
u8 U[4];
w4(U+0,u32(0x772e04ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afd07:{NFSU2_TR(0x4afd07);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4afd0d:{NFSU2_TR(0x4afd0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afd0e:{NFSU2_TR(0x4afd0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4afd15:{NFSU2_TR(0x4afd15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B4afd18:{NFSU2_TR(0x4afd18);
__builtin_memmove((R+0),gp(0x862838),4);
}
B4afd1d:{NFSU2_TR(0x4afd1d);
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
B4afd1f:{NFSU2_TR(0x4afd1f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afd20:{NFSU2_TR(0x4afd20);
__builtin_memmove((R+12),(R+4),4);
}
B4afd22:{NFSU2_TR(0x4afd22);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4afd2a:{NFSU2_TR(0x4afd2a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4afddc;}}
}
B4afd30:L4afd30:{c.instructions+=4;NFSU2_TR(0x4afd30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afd31:{NFSU2_TR(0x4afd31);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x862100ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4afd39:{NFSU2_TR(0x4afd39);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afd3a:{NFSU2_TR(0x4afd3a);
__builtin_memmove((R+12),(R+12),4);
}
B4afd40:L4afd40:{c.instructions+=4;NFSU2_TR(0x4afd40);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4afd44:{NFSU2_TR(0x4afd44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B4afd46:{NFSU2_TR(0x4afd46);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4afd48:{NFSU2_TR(0x4afd48);
if(r1(R+518)){{goto L4afdb5;}}
}
B4afd4a:L4afd4a:{c.instructions+=2;NFSU2_TR(0x4afd4a);
__builtin_memmove((R+4),(R+28),4);
}
B4afd4c:{NFSU2_TR(0x4afd4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afd51ull));
TAIL_STATIC(0x500180u,500);
}
B4afd51:L4afd51:{c.instructions+=6;NFSU2_TR(0x4afd51);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afd52:{NFSU2_TR(0x4afd52);
u8 U[4];
w4(U+0,u32(0x78f604ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afd57:{NFSU2_TR(0x4afd57);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4afd5b:{NFSU2_TR(0x4afd5b);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afd5d:{NFSU2_TR(0x4afd5d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afd5e:{NFSU2_TR(0x4afd5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afd63ull));
TAIL_STATIC(0x50c960u,50c);
}
B4afd63:L4afd63:{c.instructions+=2;NFSU2_TR(0x4afd63);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afd65:{NFSU2_TR(0x4afd65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afd6aull));
TAIL_STATIC(0x575620u,575);
}
B4afd6a:L4afd6a:{c.instructions+=6;NFSU2_TR(0x4afd6a);
__builtin_memmove((R+24),(R+0),4);
}
B4afd6c:{NFSU2_TR(0x4afd6c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4afd6f:{NFSU2_TR(0x4afd6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4afd73:{NFSU2_TR(0x4afd73);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4afd75:{NFSU2_TR(0x4afd75);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4afd7d:{NFSU2_TR(0x4afd7d);
if(r1(R+518)){{goto L4afda3;}}
}
B4afd7f:L4afd7f:{c.instructions+=3;NFSU2_TR(0x4afd7f);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4afd83:{NFSU2_TR(0x4afd83);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afd84:{NFSU2_TR(0x4afd84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afd89ull));
TAIL_STATIC(0x43db50u,43d);
}
B4afd89:L4afd89:{c.instructions+=6;NFSU2_TR(0x4afd89);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4afd8c:{NFSU2_TR(0x4afd8c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afd8e:{NFSU2_TR(0x4afd8e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afd90:{NFSU2_TR(0x4afd90);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afd91:{NFSU2_TR(0x4afd91);
__builtin_memmove((R+4),(R+24),4);
}
B4afd93:{NFSU2_TR(0x4afd93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afd98ull));
TAIL_STATIC(0x51f670u,51f);
}
B4afd98:L4afd98:{c.instructions+=3;NFSU2_TR(0x4afd98);
u8 U[4];
w4(U+0,u32(0x79b604ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4afd9e:{NFSU2_TR(0x4afd9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4afda1:{NFSU2_TR(0x4afda1);
{goto L4afda5;}
}
B4afda3:L4afda3:{c.instructions+=1;NFSU2_TR(0x4afda3);
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
B4afda5:L4afda5:{c.instructions+=5;NFSU2_TR(0x4afda5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4afda7:{NFSU2_TR(0x4afda7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afda8:{NFSU2_TR(0x4afda8);
__builtin_memmove((R+4),(R+12),4);
}
B4afdaa:{NFSU2_TR(0x4afdaa);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4afdb2:{NFSU2_TR(0x4afdb2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afdb5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4afdb5:L4afdb5:{c.instructions+=9;NFSU2_TR(0x4afdb5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4afdb9:{NFSU2_TR(0x4afdb9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4afdbd:{NFSU2_TR(0x4afdbd);
__builtin_memmove((R+4),gp(0x862838),4);
}
B4afdc3:{NFSU2_TR(0x4afdc3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4afdc4:{NFSU2_TR(0x4afdc4);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x104ull))));
}
B4afdca:{NFSU2_TR(0x4afdca);
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
B4afdcc:{NFSU2_TR(0x4afdcc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4afdd0:{NFSU2_TR(0x4afdd0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4afdd4:{NFSU2_TR(0x4afdd4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4afd40u);}goto L4afd40;}}
}
B4afdda:L4afdda:{c.instructions+=2;NFSU2_TR(0x4afdda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4afddb:{NFSU2_TR(0x4afddb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4afddc:L4afddc:{c.instructions+=4;NFSU2_TR(0x4afddc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4afddf:{NFSU2_TR(0x4afddf);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4afde2:{NFSU2_TR(0x4afde2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afde4:{NFSU2_TR(0x4afde4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afde7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4afde7:L4afde7:{c.instructions+=5;NFSU2_TR(0x4afde7);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4afdeb:{NFSU2_TR(0x4afdeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4afdec:{NFSU2_TR(0x4afdec);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4afdf3:{NFSU2_TR(0x4afdf3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x38ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x38ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x38ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4afdf6:{NFSU2_TR(0x4afdf6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4afe00:L4afe00:{c.instructions+=9;NFSU2_TR(0x4afe00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afe01:{NFSU2_TR(0x4afe01);
__builtin_memmove((R+24),(R+4),4);
}
B4afe03:{NFSU2_TR(0x4afe03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4afe06:{NFSU2_TR(0x4afe06);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x918ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4afe0c:{NFSU2_TR(0x4afe0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x840ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4afe12:{NFSU2_TR(0x4afe12);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afe13:{NFSU2_TR(0x4afe13);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afe15:{NFSU2_TR(0x4afe15);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afe16:{NFSU2_TR(0x4afe16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afe1bull));
TAIL_STATIC(0x511e60u,511);
}
B4afe1b:L4afe1b:{c.instructions+=5;NFSU2_TR(0x4afe1b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afe1d:{NFSU2_TR(0x4afe1d);
__builtin_memmove((R+28),(R+0),4);
}
B4afe1f:{NFSU2_TR(0x4afe1f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afe21:{NFSU2_TR(0x4afe21);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afe22:{NFSU2_TR(0x4afe22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afe27ull));
TAIL_STATIC(0x4901d0u,490);
}
B4afe27:L4afe27:{c.instructions+=3;NFSU2_TR(0x4afe27);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4afe2a:{NFSU2_TR(0x4afe2a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4afe2c:{NFSU2_TR(0x4afe2c);
if(r1(R+518)){{goto L4afe40;}}
}
B4afe2e:L4afe2e:{c.instructions+=4;NFSU2_TR(0x4afe2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4afe34:{NFSU2_TR(0x4afe34);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afe35:{NFSU2_TR(0x4afe35);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afe36:{NFSU2_TR(0x4afe36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afe3bull));
TAIL_STATIC(0x50c990u,50c);
}
B4afe3b:L4afe3b:{c.instructions+=2;NFSU2_TR(0x4afe3b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4afe3e:{NFSU2_TR(0x4afe3e);
{goto L4afe5a;}
}
B4afe40:L4afe40:{c.instructions+=2;NFSU2_TR(0x4afe40);
u8 U[4];
w4(U+0,u32(0x790324ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afe45:{NFSU2_TR(0x4afe45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afe4aull));
TAIL_STATIC(0x505450u,505);
}
B4afe4a:L4afe4a:{c.instructions+=4;NFSU2_TR(0x4afe4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afe4b:{NFSU2_TR(0x4afe4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4afe51:{NFSU2_TR(0x4afe51);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afe52:{NFSU2_TR(0x4afe52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afe57ull));
TAIL_STATIC(0x50c990u,50c);
}
B4afe57:L4afe57:{c.instructions+=1;NFSU2_TR(0x4afe57);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4afe5a:L4afe5a:{c.instructions+=6;NFSU2_TR(0x4afe5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4afe5d:{NFSU2_TR(0x4afe5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x918ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4afe63:{NFSU2_TR(0x4afe63);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x840ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4afe69:{NFSU2_TR(0x4afe69);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afe6b:{NFSU2_TR(0x4afe6b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afe6c:{NFSU2_TR(0x4afe6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afe71ull));
TAIL_STATIC(0x511e60u,511);
}
B4afe71:L4afe71:{c.instructions+=5;NFSU2_TR(0x4afe71);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afe73:{NFSU2_TR(0x4afe73);
__builtin_memmove((R+28),(R+0),4);
}
B4afe75:{NFSU2_TR(0x4afe75);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afe77:{NFSU2_TR(0x4afe77);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afe78:{NFSU2_TR(0x4afe78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afe7dull));
TAIL_STATIC(0x4901d0u,490);
}
B4afe7d:L4afe7d:{c.instructions+=3;NFSU2_TR(0x4afe7d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4afe80:{NFSU2_TR(0x4afe80);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4afe82:{NFSU2_TR(0x4afe82);
if(r1(R+518)){{goto L4afe96;}}
}
B4afe84:L4afe84:{c.instructions+=4;NFSU2_TR(0x4afe84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4afe8a:{NFSU2_TR(0x4afe8a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afe8b:{NFSU2_TR(0x4afe8b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afe8c:{NFSU2_TR(0x4afe8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afe91ull));
TAIL_STATIC(0x50c990u,50c);
}
B4afe91:L4afe91:{c.instructions+=2;NFSU2_TR(0x4afe91);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4afe94:{NFSU2_TR(0x4afe94);
{goto L4afeb0;}
}
B4afe96:L4afe96:{c.instructions+=2;NFSU2_TR(0x4afe96);
u8 U[4];
w4(U+0,u32(0x790324ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afe9b:{NFSU2_TR(0x4afe9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afea0ull));
TAIL_STATIC(0x505450u,505);
}
B4afea0:L4afea0:{c.instructions+=4;NFSU2_TR(0x4afea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4afea6:{NFSU2_TR(0x4afea6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afea7:{NFSU2_TR(0x4afea7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afea8:{NFSU2_TR(0x4afea8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afeadull));
TAIL_STATIC(0x50c990u,50c);
}
B4afead:L4afead:{c.instructions+=1;NFSU2_TR(0x4afead);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4afeb0:L4afeb0:{c.instructions+=8;NFSU2_TR(0x4afeb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4afeb6:{NFSU2_TR(0x4afeb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4afebc:{NFSU2_TR(0x4afebc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afebd:{NFSU2_TR(0x4afebd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afebe:{NFSU2_TR(0x4afebe);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4afec4:{NFSU2_TR(0x4afec4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afec6:{NFSU2_TR(0x4afec6);
__builtin_memmove((R+4),(R+28),4);
}
B4afec8:{NFSU2_TR(0x4afec8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afecdull));
TAIL_STATIC(0x538080u,538);
}
B4afecd:L4afecd:{c.instructions+=4;NFSU2_TR(0x4afecd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4afed0:{NFSU2_TR(0x4afed0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4afed2:{NFSU2_TR(0x4afed2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4afed5:{NFSU2_TR(0x4afed5);
if(r1(R+518)){{goto L4afedc;}}
}
B4afed7:L4afed7:{c.instructions+=2;NFSU2_TR(0x4afed7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
}
B4afeda:{NFSU2_TR(0x4afeda);
{goto L4afede;}
}
B4afedc:L4afedc:{c.instructions+=1;NFSU2_TR(0x4afedc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4afede:L4afede:{c.instructions+=2;NFSU2_TR(0x4afede);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4afee0:{NFSU2_TR(0x4afee0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4afef6;}}
}
B4afee2:L4afee2:{c.instructions+=4;NFSU2_TR(0x4afee2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afee4:{NFSU2_TR(0x4afee4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afee6:{NFSU2_TR(0x4afee6);
__builtin_memmove((R+4),(R+28),4);
}
B4afee8:{NFSU2_TR(0x4afee8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4afeedull));
TAIL_STATIC(0x50d820u,50d);
}
B4afeed:L4afeed:{c.instructions+=4;NFSU2_TR(0x4afeed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4afeee:{NFSU2_TR(0x4afeee);
__builtin_memmove((R+4),(R+24),4);
}
B4afef0:{NFSU2_TR(0x4afef0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4afef1:{NFSU2_TR(0x4afef1);
TAIL_STATIC(0x496160u,496);
}
B4afef6:L4afef6:{c.instructions+=3;NFSU2_TR(0x4afef6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4afef9:{NFSU2_TR(0x4afef9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4afefb:{NFSU2_TR(0x4afefb);
if(r1(R+518)){{goto L4aff02;}}
}
B4afefd:L4afefd:{c.instructions+=2;NFSU2_TR(0x4afefd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
}
B4aff00:{NFSU2_TR(0x4aff00);
{goto L4aff04;}
}
B4aff02:L4aff02:{c.instructions+=1;NFSU2_TR(0x4aff02);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4aff04:L4aff04:{c.instructions+=3;NFSU2_TR(0x4aff04);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4aff06:{NFSU2_TR(0x4aff06);
__builtin_memmove((R+4),(R+28),4);
}
B4aff08:{NFSU2_TR(0x4aff08);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4aff1c;}}
}
B4aff0a:L4aff0a:{c.instructions+=3;NFSU2_TR(0x4aff0a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aff0c:{NFSU2_TR(0x4aff0c);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aff0e:{NFSU2_TR(0x4aff0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aff13ull));
TAIL_STATIC(0x50d820u,50d);
}
B4aff13:L4aff13:{c.instructions+=4;NFSU2_TR(0x4aff13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4aff14:{NFSU2_TR(0x4aff14);
__builtin_memmove((R+4),(R+24),4);
}
B4aff16:{NFSU2_TR(0x4aff16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4aff17:{NFSU2_TR(0x4aff17);
TAIL_STATIC(0x496160u,496);
}
B4aff1c:L4aff1c:{c.instructions+=3;NFSU2_TR(0x4aff1c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aff1e:{NFSU2_TR(0x4aff1e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aff20:{NFSU2_TR(0x4aff20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aff25ull));
TAIL_STATIC(0x50d820u,50d);
}
B4aff25:L4aff25:{c.instructions+=4;NFSU2_TR(0x4aff25);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aff27:{NFSU2_TR(0x4aff27);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aff29:{NFSU2_TR(0x4aff29);
__builtin_memmove((R+4),(R+28),4);
}
B4aff2b:{NFSU2_TR(0x4aff2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aff30ull));
TAIL_STATIC(0x50d820u,50d);
}
B4aff30:L4aff30:{c.instructions+=4;NFSU2_TR(0x4aff30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4aff31:{NFSU2_TR(0x4aff31);
__builtin_memmove((R+4),(R+24),4);
}
B4aff33:{NFSU2_TR(0x4aff33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4aff34:{NFSU2_TR(0x4aff34);
TAIL_STATIC(0x496160u,496);
}
B4aff40:L4aff40:{c.instructions+=11;NFSU2_TR(0x4aff40);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aff41:{NFSU2_TR(0x4aff41);
__builtin_memmove((R+20),(R+16),4);
}
B4aff43:{NFSU2_TR(0x4aff43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aff46:{NFSU2_TR(0x4aff46);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aff47:{NFSU2_TR(0x4aff47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4aff4a:{NFSU2_TR(0x4aff4a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aff4b:{NFSU2_TR(0x4aff4b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aff4c:{NFSU2_TR(0x4aff4c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aff4d:{NFSU2_TR(0x4aff4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aff4e:{NFSU2_TR(0x4aff4e);
w4(R+4,u32(0x85ad40ull));
}
B4aff53:{NFSU2_TR(0x4aff53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aff58ull));
TAIL_STATIC(0x500bf0u,500);
}
B4aff58:L4aff58:{c.instructions+=2;NFSU2_TR(0x4aff58);
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
B4aff5a:{NFSU2_TR(0x4aff5a);
if(r1(R+518)){{goto L4aff82;}}
}
B4aff5c:L4aff5c:{c.instructions+=3;NFSU2_TR(0x4aff5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4aff5f:{NFSU2_TR(0x4aff5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4aff61:{NFSU2_TR(0x4aff61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aff66ull));
TAIL_STATIC(0x502fd0u,502);
}
B4aff66:L4aff66:{c.instructions+=3;NFSU2_TR(0x4aff66);
__builtin_memmove((R+28),(R+0),4);
}
B4aff68:{NFSU2_TR(0x4aff68);
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
B4aff6a:{NFSU2_TR(0x4aff6a);
if(r1(R+518)){{goto L4aff82;}}
}
B4aff6c:L4aff6c:{c.instructions+=1;NFSU2_TR(0x4aff6c);
__builtin_memmove((R+16),(R+16),4);
}
B4aff70:L4aff70:{c.instructions+=3;NFSU2_TR(0x4aff70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4aff72:{NFSU2_TR(0x4aff72);
__builtin_memmove((R+4),(R+12),4);
}
B4aff74:{NFSU2_TR(0x4aff74);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aff77ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4aff77:L4aff77:{c.instructions+=2;NFSU2_TR(0x4aff77);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
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
B4aff7a:{NFSU2_TR(0x4aff7a);
if(r1(R+518)){{goto L4aff8b;}}
}
B4aff7c:L4aff7c:{c.instructions+=3;NFSU2_TR(0x4aff7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4aff7e:{NFSU2_TR(0x4aff7e);
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
B4aff80:{NFSU2_TR(0x4aff80);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4aff70u);}goto L4aff70;}}
}
B4aff82:L4aff82:{c.instructions+=6;NFSU2_TR(0x4aff82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4aff83:{NFSU2_TR(0x4aff83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4aff84:{NFSU2_TR(0x4aff84);
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
B4aff86:{NFSU2_TR(0x4aff86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4aff87:{NFSU2_TR(0x4aff87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4aff88:{NFSU2_TR(0x4aff88);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4aff8b:L4aff8b:{c.instructions+=6;NFSU2_TR(0x4aff8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4aff8c:{NFSU2_TR(0x4aff8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4aff8d:{NFSU2_TR(0x4aff8d);
w1(R+0,u8(0x1ull));
}
B4aff8f:{NFSU2_TR(0x4aff8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4aff90:{NFSU2_TR(0x4aff90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4aff91:{NFSU2_TR(0x4aff91);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4affa0:L4affa0:{c.instructions+=8;NFSU2_TR(0x4affa0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4affa4:{NFSU2_TR(0x4affa4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4affa9:{NFSU2_TR(0x4affa9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4affaa:{NFSU2_TR(0x4affaa);
__builtin_memmove((R+24),(R+4),4);
}
B4affac:{NFSU2_TR(0x4affac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4affaf:{NFSU2_TR(0x4affaf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4affb0:{NFSU2_TR(0x4affb0);
__builtin_memmove((R+28),(R+4),4);
}
B4affb2:{NFSU2_TR(0x4affb2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4b000fu,4b0);}
}
B4affb4:L4affb4:{c.instructions+=3;NFSU2_TR(0x4affb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4affb7:{NFSU2_TR(0x4affb7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4affb9:{NFSU2_TR(0x4affb9);
if(r1(R+518)){{goto L4affc0;}}
}
B4affbb:L4affbb:{c.instructions+=2;NFSU2_TR(0x4affbb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
}
B4affbe:{NFSU2_TR(0x4affbe);
{goto L4affc2;}
}
B4affc0:L4affc0:{c.instructions+=1;NFSU2_TR(0x4affc0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4affc2:L4affc2:{c.instructions+=2;NFSU2_TR(0x4affc2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4affc4:{NFSU2_TR(0x4affc4);
if(r1(R+518)){TAIL_STATIC(0x4b0073u,4b0);}
}
B4affca:L4affca:{c.instructions+=6;NFSU2_TR(0x4affca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4affcd:{NFSU2_TR(0x4affcd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4affcf:{NFSU2_TR(0x4affcf);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4affd4:{NFSU2_TR(0x4affd4);
u8 U[4];
w4(U+0,u32(0x790e98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4affd9:{NFSU2_TR(0x4affd9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4affda:{NFSU2_TR(0x4affda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4affdfull));
TAIL_STATIC(0x5426c0u,542);
}
B4affdf:L4affdf:{c.instructions+=5;NFSU2_TR(0x4affdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4affe2:{NFSU2_TR(0x4affe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4affe5:{NFSU2_TR(0x4affe5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4affe8:{NFSU2_TR(0x4affe8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4affea:{NFSU2_TR(0x4affea);
if(r1(R+518)){{goto L4afff1;}}
}
B4affec:L4affec:{c.instructions+=2;NFSU2_TR(0x4affec);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
}
B4affef:{NFSU2_TR(0x4affef);
{goto L4afff3;}
}
B4afff1:L4afff1:{c.instructions+=1;NFSU2_TR(0x4afff1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4afff3:L4afff3:{c.instructions+=4;NFSU2_TR(0x4afff3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4afff6:{NFSU2_TR(0x4afff6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4afffc:{NFSU2_TR(0x4afffc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4afffd:{NFSU2_TR(0x4afffd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x4b0000u,4b0);
}
XIT:NFSU2_TR_EXIT(0x4af,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
