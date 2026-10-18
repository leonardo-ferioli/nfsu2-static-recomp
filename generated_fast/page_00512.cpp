#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_468(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4a9(u8* __restrict R,Cpu& c);
u32 body_4ec(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_501(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_513(u8* __restrict R,Cpu& c);
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_580(u8* __restrict R,Cpu& c);
u32 body_59a(u8* __restrict R,Cpu& c);
u32 body_5b7(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x512,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x512,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_512(u8* __restrict R,Cpu& c);
u32 page_512(Cpu& c){return body_512(c.regs.data(),c);}
__attribute__((noinline)) u32 body_512(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x512000:goto L512000;
case 0x512002:goto L512002;
case 0x512005:c.instructions+=1;goto B512005;
case 0x512007:goto L512007;
case 0x51200a:c.instructions+=1;goto B51200a;
case 0x51200c:goto L51200c;
case 0x512011:c.instructions+=1;goto B512011;
case 0x512013:goto L512013;
case 0x512016:c.instructions+=1;goto B512016;
case 0x512018:goto L512018;
case 0x51201d:c.instructions+=1;goto B51201d;
case 0x51201f:goto L51201f;
case 0x512022:c.instructions+=1;goto B512022;
case 0x512024:goto L512024;
case 0x512029:c.instructions+=1;goto B512029;
case 0x51202b:goto L51202b;
case 0x51202e:c.instructions+=1;goto B51202e;
case 0x512030:goto L512030;
case 0x512035:goto L512035;
case 0x51203a:c.instructions+=1;goto B51203a;
case 0x51203f:goto L51203f;
case 0x512042:c.instructions+=1;goto B512042;
case 0x512044:goto L512044;
case 0x512045:c.instructions+=4;goto B512045;
case 0x512047:c.instructions+=3;goto B512047;
case 0x512048:c.instructions+=2;goto B512048;
case 0x512049:c.instructions+=1;goto B512049;
case 0x512050:goto L512050;
case 0x512054:c.instructions+=5;goto B512054;
case 0x51205a:c.instructions+=4;goto B51205a;
case 0x512060:c.instructions+=3;goto B512060;
case 0x512061:c.instructions+=2;goto B512061;
case 0x512063:c.instructions+=1;goto B512063;
case 0x512068:goto L512068;
case 0x51206a:c.instructions+=1;goto B51206a;
case 0x51206f:goto L51206f;
case 0x512070:c.instructions+=2;goto B512070;
case 0x512075:c.instructions+=1;goto B512075;
case 0x51207a:goto L51207a;
case 0x51207d:c.instructions+=2;goto B51207d;
case 0x51207e:c.instructions+=1;goto B51207e;
case 0x512080:goto L512080;
case 0x512084:c.instructions+=7;goto B512084;
case 0x51208a:c.instructions+=6;goto B51208a;
case 0x512090:c.instructions+=5;goto B512090;
case 0x512092:c.instructions+=4;goto B512092;
case 0x512097:c.instructions+=3;goto B512097;
case 0x512098:c.instructions+=2;goto B512098;
case 0x51209d:c.instructions+=1;goto B51209d;
case 0x5120a2:goto L5120a2;
case 0x5120a5:c.instructions+=1;goto B5120a5;
case 0x5120b0:goto L5120b0;
case 0x5120b4:c.instructions+=7;goto B5120b4;
case 0x5120ba:c.instructions+=6;goto B5120ba;
case 0x5120c0:c.instructions+=5;goto B5120c0;
case 0x5120c2:c.instructions+=4;goto B5120c2;
case 0x5120c7:c.instructions+=3;goto B5120c7;
case 0x5120c8:c.instructions+=2;goto B5120c8;
case 0x5120cd:c.instructions+=1;goto B5120cd;
case 0x5120d2:goto L5120d2;
case 0x5120d5:c.instructions+=2;goto B5120d5;
case 0x5120d7:c.instructions+=1;goto B5120d7;
case 0x5120dc:goto L5120dc;
case 0x5120de:c.instructions+=1;goto B5120de;
case 0x5120e0:goto L5120e0;
case 0x5120e5:c.instructions+=1;goto B5120e5;
case 0x5120ea:goto L5120ea;
case 0x5120f0:goto L5120f0;
case 0x5120f6:c.instructions+=5;goto B5120f6;
case 0x5120f7:c.instructions+=4;goto B5120f7;
case 0x5120fb:c.instructions+=3;goto B5120fb;
case 0x512101:c.instructions+=2;goto B512101;
case 0x512103:c.instructions+=1;goto B512103;
case 0x512108:goto L512108;
case 0x51210d:c.instructions+=3;goto B51210d;
case 0x51210e:c.instructions+=2;goto B51210e;
case 0x512113:c.instructions+=1;goto B512113;
case 0x512118:goto L512118;
case 0x51211b:c.instructions+=2;goto B51211b;
case 0x51211c:c.instructions+=1;goto B51211c;
case 0x512120:goto L512120;
case 0x512124:c.instructions+=4;goto B512124;
case 0x512126:c.instructions+=3;goto B512126;
case 0x512127:c.instructions+=2;goto B512127;
case 0x51212a:c.instructions+=1;goto B51212a;
case 0x51212c:goto L51212c;
case 0x51212e:c.instructions+=1;goto B51212e;
case 0x512130:goto L512130;
case 0x512133:c.instructions+=3;goto B512133;
case 0x512135:c.instructions+=2;goto B512135;
case 0x512138:c.instructions+=1;goto B512138;
case 0x51213a:goto L51213a;
case 0x51213d:goto L51213d;
case 0x512140:c.instructions+=2;goto B512140;
case 0x512143:c.instructions+=1;goto B512143;
case 0x512145:goto L512145;
case 0x512148:c.instructions+=3;goto B512148;
case 0x51214a:c.instructions+=2;goto B51214a;
case 0x51214d:c.instructions+=1;goto B51214d;
case 0x51214f:goto L51214f;
case 0x512152:goto L512152;
case 0x512159:c.instructions+=1;goto B512159;
case 0x51215c:goto L51215c;
case 0x51215f:c.instructions+=1;goto B51215f;
case 0x512161:goto L512161;
case 0x512164:goto L512164;
case 0x512167:goto L512167;
case 0x512168:c.instructions+=1;goto B512168;
case 0x512170:goto L512170;
case 0x512174:c.instructions+=3;goto B512174;
case 0x512175:c.instructions+=2;goto B512175;
case 0x512176:c.instructions+=1;goto B512176;
case 0x51217b:goto L51217b;
case 0x51217e:c.instructions+=5;goto B51217e;
case 0x512180:c.instructions+=4;goto B512180;
case 0x512185:c.instructions+=3;goto B512185;
case 0x512188:c.instructions+=2;goto B512188;
case 0x51218a:c.instructions+=1;goto B51218a;
case 0x512190:goto L512190;
case 0x512193:c.instructions+=2;goto B512193;
case 0x512195:c.instructions+=1;goto B512195;
case 0x512197:goto L512197;
case 0x512199:c.instructions+=1;goto B512199;
case 0x51219b:goto L51219b;
case 0x51219d:goto L51219d;
case 0x5121a0:c.instructions+=5;goto B5121a0;
case 0x5121a2:c.instructions+=4;goto B5121a2;
case 0x5121a5:c.instructions+=3;goto B5121a5;
case 0x5121a6:c.instructions+=2;goto B5121a6;
case 0x5121a8:c.instructions+=1;goto B5121a8;
case 0x5121aa:goto L5121aa;
case 0x5121ac:c.instructions+=1;goto B5121ac;
case 0x5121ae:goto L5121ae;
case 0x5121b3:c.instructions+=1;goto B5121b3;
case 0x5121b8:goto L5121b8;
case 0x5121bb:c.instructions+=2;goto B5121bb;
case 0x5121bd:c.instructions+=1;goto B5121bd;
case 0x5121bf:goto L5121bf;
case 0x5121c4:c.instructions+=1;goto B5121c4;
case 0x5121c9:goto L5121c9;
case 0x5121cc:c.instructions+=2;goto B5121cc;
case 0x5121ce:c.instructions+=1;goto B5121ce;
case 0x5121d0:goto L5121d0;
case 0x5121d5:c.instructions+=1;goto B5121d5;
case 0x5121da:goto L5121da;
case 0x5121dd:c.instructions+=2;goto B5121dd;
case 0x5121df:c.instructions+=1;goto B5121df;
case 0x5121e1:goto L5121e1;
case 0x5121e6:c.instructions+=1;goto B5121e6;
case 0x5121eb:goto L5121eb;
case 0x5121ee:c.instructions+=2;goto B5121ee;
case 0x5121f0:c.instructions+=1;goto B5121f0;
case 0x5121f2:goto L5121f2;
case 0x5121f7:c.instructions+=1;goto B5121f7;
case 0x5121fc:goto L5121fc;
case 0x5121ff:c.instructions+=2;goto B5121ff;
case 0x512201:c.instructions+=1;goto B512201;
case 0x512203:goto L512203;
case 0x512208:c.instructions+=1;goto B512208;
case 0x51220d:goto L51220d;
case 0x512210:c.instructions+=2;goto B512210;
case 0x512212:c.instructions+=1;goto B512212;
case 0x512214:goto L512214;
case 0x512216:c.instructions+=2;goto B512216;
case 0x512217:c.instructions+=1;goto B512217;
case 0x512218:goto L512218;
case 0x51221d:c.instructions+=2;goto B51221d;
case 0x51221e:c.instructions+=1;goto B51221e;
case 0x512220:goto L512220;
case 0x512221:c.instructions+=2;goto B512221;
case 0x512223:c.instructions+=1;goto B512223;
case 0x512228:goto L512228;
case 0x51222d:c.instructions+=1;goto B51222d;
case 0x51222f:goto L51222f;
case 0x512230:c.instructions+=1;goto B512230;
case 0x512235:goto L512235;
case 0x512238:goto L512238;
case 0x51223a:c.instructions+=2;goto B51223a;
case 0x51223b:c.instructions+=1;goto B51223b;
case 0x512240:goto L512240;
case 0x512244:c.instructions+=3;goto B512244;
case 0x512246:c.instructions+=2;goto B512246;
case 0x512248:c.instructions+=1;goto B512248;
case 0x51224a:goto L51224a;
case 0x51224d:c.instructions+=2;goto B51224d;
case 0x51224e:c.instructions+=1;goto B51224e;
case 0x512253:goto L512253;
case 0x512256:c.instructions+=2;goto B512256;
case 0x512257:c.instructions+=1;goto B512257;
case 0x51225c:goto L51225c;
case 0x51225f:c.instructions+=2;goto B51225f;
case 0x512260:c.instructions+=1;goto B512260;
case 0x512265:goto L512265;
case 0x512268:c.instructions+=2;goto B512268;
case 0x512269:c.instructions+=1;goto B512269;
case 0x51226e:goto L51226e;
case 0x512271:c.instructions+=1;goto B512271;
case 0x512274:goto L512274;
case 0x512277:c.instructions+=2;goto B512277;
case 0x512278:c.instructions+=1;goto B512278;
case 0x51227d:goto L51227d;
case 0x512280:c.instructions+=2;goto B512280;
case 0x512281:c.instructions+=1;goto B512281;
case 0x512286:goto L512286;
case 0x512289:c.instructions+=2;goto B512289;
case 0x51228a:c.instructions+=1;goto B51228a;
case 0x51228f:goto L51228f;
case 0x512292:c.instructions+=2;goto B512292;
case 0x512293:c.instructions+=1;goto B512293;
case 0x512298:goto L512298;
case 0x51229b:c.instructions+=2;goto B51229b;
case 0x51229c:c.instructions+=1;goto B51229c;
case 0x5122a1:goto L5122a1;
case 0x5122a4:c.instructions+=2;goto B5122a4;
case 0x5122a5:c.instructions+=1;goto B5122a5;
case 0x5122aa:goto L5122aa;
case 0x5122ad:c.instructions+=1;goto B5122ad;
case 0x5122b0:goto L5122b0;
case 0x5122b4:c.instructions+=5;goto B5122b4;
case 0x5122b6:c.instructions+=4;goto B5122b6;
case 0x5122b8:c.instructions+=3;goto B5122b8;
case 0x5122bb:c.instructions+=2;goto B5122bb;
case 0x5122bc:c.instructions+=1;goto B5122bc;
case 0x5122be:goto L5122be;
case 0x5122c3:goto L5122c3;
case 0x5122c6:c.instructions+=2;goto B5122c6;
case 0x5122c7:c.instructions+=1;goto B5122c7;
case 0x5122cc:goto L5122cc;
case 0x5122cf:c.instructions+=2;goto B5122cf;
case 0x5122d0:c.instructions+=1;goto B5122d0;
case 0x5122d5:goto L5122d5;
case 0x5122d8:c.instructions+=2;goto B5122d8;
case 0x5122d9:c.instructions+=1;goto B5122d9;
case 0x5122de:goto L5122de;
case 0x5122e1:c.instructions+=2;goto B5122e1;
case 0x5122e2:c.instructions+=1;goto B5122e2;
case 0x5122e7:goto L5122e7;
case 0x5122ea:c.instructions+=2;goto B5122ea;
case 0x5122eb:c.instructions+=1;goto B5122eb;
case 0x5122f0:goto L5122f0;
case 0x5122f3:c.instructions+=2;goto B5122f3;
case 0x5122f4:c.instructions+=1;goto B5122f4;
case 0x5122f9:goto L5122f9;
case 0x5122fc:c.instructions+=2;goto B5122fc;
case 0x5122fd:c.instructions+=1;goto B5122fd;
case 0x512302:goto L512302;
case 0x512305:c.instructions+=1;goto B512305;
case 0x512308:goto L512308;
case 0x51230d:goto L51230d;
case 0x512310:c.instructions+=2;goto B512310;
case 0x512311:c.instructions+=1;goto B512311;
case 0x512316:goto L512316;
case 0x512319:c.instructions+=2;goto B512319;
case 0x51231a:c.instructions+=1;goto B51231a;
case 0x51231f:goto L51231f;
case 0x512322:c.instructions+=2;goto B512322;
case 0x512323:c.instructions+=1;goto B512323;
case 0x512328:goto L512328;
case 0x51232b:c.instructions+=2;goto B51232b;
case 0x51232c:c.instructions+=1;goto B51232c;
case 0x512331:goto L512331;
case 0x512334:c.instructions+=2;goto B512334;
case 0x512335:c.instructions+=1;goto B512335;
case 0x51233a:goto L51233a;
case 0x51233d:c.instructions+=2;goto B51233d;
case 0x51233e:c.instructions+=1;goto B51233e;
case 0x512343:goto L512343;
case 0x512346:c.instructions+=2;goto B512346;
case 0x512347:c.instructions+=1;goto B512347;
case 0x51234c:goto L51234c;
case 0x51234f:c.instructions+=1;goto B51234f;
case 0x512360:goto L512360;
case 0x512361:c.instructions+=5;goto B512361;
case 0x512367:c.instructions+=4;goto B512367;
case 0x512368:c.instructions+=3;goto B512368;
case 0x51236c:c.instructions+=2;goto B51236c;
case 0x51236e:c.instructions+=1;goto B51236e;
case 0x512374:goto L512374;
case 0x512375:c.instructions+=3;goto B512375;
case 0x512377:c.instructions+=2;goto B512377;
case 0x51237a:c.instructions+=1;goto B51237a;
case 0x512380:goto L512380;
case 0x512381:c.instructions+=2;goto B512381;
case 0x512383:c.instructions+=1;goto B512383;
case 0x512388:goto L512388;
case 0x51238a:c.instructions+=1;goto B51238a;
case 0x512390:goto L512390;
case 0x512393:c.instructions+=3;goto B512393;
case 0x512394:c.instructions+=2;goto B512394;
case 0x512399:c.instructions+=1;goto B512399;
case 0x51239b:goto L51239b;
case 0x51239d:goto L51239d;
case 0x5123a2:c.instructions+=2;goto B5123a2;
case 0x5123a3:c.instructions+=1;goto B5123a3;
case 0x5123a8:goto L5123a8;
case 0x5123ab:c.instructions+=5;goto B5123ab;
case 0x5123b1:c.instructions+=4;goto B5123b1;
case 0x5123b4:c.instructions+=3;goto B5123b4;
case 0x5123b7:c.instructions+=2;goto B5123b7;
case 0x5123b9:c.instructions+=1;goto B5123b9;
case 0x5123bb:goto L5123bb;
case 0x5123bd:c.instructions+=2;goto B5123bd;
case 0x5123be:c.instructions+=1;goto B5123be;
case 0x5123c3:goto L5123c3;
case 0x5123c6:c.instructions+=2;goto B5123c6;
case 0x5123c9:c.instructions+=1;goto B5123c9;
case 0x5123cc:goto L5123cc;
case 0x5123cf:c.instructions+=2;goto B5123cf;
case 0x5123d2:c.instructions+=1;goto B5123d2;
case 0x5123d4:goto L5123d4;
case 0x5123d7:c.instructions+=3;goto B5123d7;
case 0x5123d9:c.instructions+=2;goto B5123d9;
case 0x5123da:c.instructions+=1;goto B5123da;
case 0x5123df:goto L5123df;
case 0x5123e2:c.instructions+=2;goto B5123e2;
case 0x5123e5:c.instructions+=1;goto B5123e5;
case 0x5123e8:goto L5123e8;
case 0x5123eb:c.instructions+=2;goto B5123eb;
case 0x5123ee:c.instructions+=1;goto B5123ee;
case 0x5123f0:goto L5123f0;
case 0x5123f3:c.instructions+=3;goto B5123f3;
case 0x5123f5:c.instructions+=2;goto B5123f5;
case 0x5123f6:c.instructions+=1;goto B5123f6;
case 0x5123fb:goto L5123fb;
case 0x5123fe:c.instructions+=2;goto B5123fe;
case 0x512401:c.instructions+=1;goto B512401;
case 0x512404:goto L512404;
case 0x512405:goto L512405;
case 0x512408:c.instructions+=2;goto B512408;
case 0x51240e:c.instructions+=1;goto B51240e;
case 0x512410:goto L512410;
case 0x512415:c.instructions+=9;goto B512415;
case 0x512418:c.instructions+=8;goto B512418;
case 0x51241b:c.instructions+=7;goto B51241b;
case 0x51241e:c.instructions+=6;goto B51241e;
case 0x512421:c.instructions+=5;goto B512421;
case 0x512423:c.instructions+=4;goto B512423;
case 0x512424:c.instructions+=3;goto B512424;
case 0x512425:c.instructions+=2;goto B512425;
case 0x512427:c.instructions+=1;goto B512427;
case 0x51242c:goto L51242c;
case 0x512431:c.instructions+=4;goto B512431;
case 0x512437:c.instructions+=3;goto B512437;
case 0x51243a:c.instructions+=2;goto B51243a;
case 0x51243b:c.instructions+=1;goto B51243b;
case 0x512440:goto L512440;
case 0x512446:c.instructions+=5;goto B512446;
case 0x512449:c.instructions+=4;goto B512449;
case 0x51244f:c.instructions+=3;goto B51244f;
case 0x512455:c.instructions+=2;goto B512455;
case 0x512457:c.instructions+=1;goto B512457;
case 0x512459:goto L512459;
case 0x51245e:goto L51245e;
case 0x512461:c.instructions+=1;goto B512461;
case 0x512463:goto L512463;
case 0x512465:goto L512465;
case 0x512468:c.instructions+=1;goto B512468;
case 0x51246a:goto L51246a;
case 0x51246f:c.instructions+=1;goto B51246f;
case 0x512471:goto L512471;
case 0x512474:c.instructions+=2;goto B512474;
case 0x51247a:c.instructions+=1;goto B51247a;
case 0x51247f:goto L51247f;
case 0x512484:c.instructions+=2;goto B512484;
case 0x512489:c.instructions+=1;goto B512489;
case 0x51248b:goto L51248b;
case 0x512490:goto L512490;
case 0x512495:goto L512495;
case 0x512499:c.instructions+=5;goto B512499;
case 0x51249d:c.instructions+=4;goto B51249d;
case 0x51249f:c.instructions+=3;goto B51249f;
case 0x5124a0:c.instructions+=2;goto B5124a0;
case 0x5124a1:c.instructions+=1;goto B5124a1;
case 0x5124a6:goto L5124a6;
case 0x5124ab:c.instructions+=3;goto B5124ab;
case 0x5124ae:c.instructions+=2;goto B5124ae;
case 0x5124b0:c.instructions+=1;goto B5124b0;
case 0x5124b2:goto L5124b2;
case 0x5124b4:c.instructions+=3;goto B5124b4;
case 0x5124b9:c.instructions+=2;goto B5124b9;
case 0x5124be:c.instructions+=1;goto B5124be;
case 0x5124c3:goto L5124c3;
case 0x5124c5:goto L5124c5;
case 0x5124ca:goto L5124ca;
case 0x5124cc:c.instructions+=2;goto B5124cc;
case 0x5124ce:c.instructions+=1;goto B5124ce;
case 0x5124d0:goto L5124d0;
case 0x5124d5:c.instructions+=1;goto B5124d5;
case 0x5124da:goto L5124da;
case 0x5124dc:goto L5124dc;
case 0x5124dd:c.instructions+=4;goto B5124dd;
case 0x5124df:c.instructions+=3;goto B5124df;
case 0x5124e4:c.instructions+=2;goto B5124e4;
case 0x5124e9:c.instructions+=1;goto B5124e9;
case 0x5124ee:goto L5124ee;
case 0x5124f0:goto L5124f0;
case 0x5124f5:goto L5124f5;
case 0x5124f8:c.instructions+=1;goto B5124f8;
case 0x5124fe:goto L5124fe;
case 0x512504:c.instructions+=5;goto B512504;
case 0x512505:c.instructions+=4;goto B512505;
case 0x512506:c.instructions+=3;goto B512506;
case 0x512509:c.instructions+=2;goto B512509;
case 0x51250d:c.instructions+=1;goto B51250d;
case 0x512512:goto L512512;
case 0x512513:c.instructions+=2;goto B512513;
case 0x512514:c.instructions+=1;goto B512514;
case 0x512520:goto L512520;
case 0x512525:goto L512525;
case 0x512526:c.instructions+=1;goto B512526;
case 0x51252b:goto L51252b;
case 0x51252c:c.instructions+=1;goto B51252c;
case 0x512530:goto L512530;
case 0x512536:c.instructions+=2;goto B512536;
case 0x512538:c.instructions+=1;goto B512538;
case 0x51253a:goto L51253a;
case 0x51253e:c.instructions+=6;goto B51253e;
case 0x512542:c.instructions+=5;goto B512542;
case 0x512543:c.instructions+=4;goto B512543;
case 0x512547:c.instructions+=3;goto B512547;
case 0x512548:c.instructions+=2;goto B512548;
case 0x512549:c.instructions+=1;goto B512549;
case 0x51254e:goto L51254e;
case 0x51254f:goto L51254f;
case 0x512553:c.instructions+=4;goto B512553;
case 0x512557:c.instructions+=3;goto B512557;
case 0x512558:c.instructions+=2;goto B512558;
case 0x512559:c.instructions+=1;goto B512559;
case 0x51255e:goto L51255e;
case 0x512561:c.instructions+=1;goto B512561;
case 0x512570:goto L512570;
case 0x512574:c.instructions+=1;goto B512574;
case 0x512579:goto L512579;
case 0x51257b:c.instructions+=1;goto B51257b;
case 0x51257d:goto L51257d;
case 0x512583:c.instructions+=3;goto B512583;
case 0x512585:c.instructions+=2;goto B512585;
case 0x512586:c.instructions+=1;goto B512586;
case 0x512588:goto L512588;
case 0x51258c:c.instructions+=4;goto B51258c;
case 0x512590:c.instructions+=3;goto B512590;
case 0x512591:c.instructions+=2;goto B512591;
case 0x512592:c.instructions+=1;goto B512592;
case 0x512597:goto L512597;
case 0x512599:c.instructions+=1;goto B512599;
case 0x51259a:goto L51259a;
case 0x51259e:c.instructions+=2;goto B51259e;
case 0x51259f:c.instructions+=1;goto B51259f;
case 0x5125a4:goto L5125a4;
case 0x5125a7:c.instructions+=2;goto B5125a7;
case 0x5125a9:c.instructions+=1;goto B5125a9;
case 0x5125aa:goto L5125aa;
case 0x5125ac:c.instructions+=1;goto B5125ac;
case 0x5125b0:goto L5125b0;
case 0x5125b4:c.instructions+=2;goto B5125b4;
case 0x5125ba:c.instructions+=1;goto B5125ba;
case 0x5125bc:goto L5125bc;
case 0x5125bf:c.instructions+=15;goto B5125bf;
case 0x5125c0:c.instructions+=14;goto B5125c0;
case 0x5125c3:c.instructions+=13;goto B5125c3;
case 0x5125c9:c.instructions+=12;goto B5125c9;
case 0x5125cb:c.instructions+=11;goto B5125cb;
case 0x5125cd:c.instructions+=10;goto B5125cd;
case 0x5125d3:c.instructions+=9;goto B5125d3;
case 0x5125d6:c.instructions+=8;goto B5125d6;
case 0x5125d8:c.instructions+=7;goto B5125d8;
case 0x5125de:c.instructions+=6;goto B5125de;
case 0x5125e1:c.instructions+=5;goto B5125e1;
case 0x5125e3:c.instructions+=4;goto B5125e3;
case 0x5125e5:c.instructions+=3;goto B5125e5;
case 0x5125e7:c.instructions+=2;goto B5125e7;
case 0x5125ed:c.instructions+=1;goto B5125ed;
case 0x5125ef:goto L5125ef;
case 0x5125f1:goto L5125f1;
case 0x5125f7:c.instructions+=2;goto B5125f7;
case 0x5125fd:c.instructions+=1;goto B5125fd;
case 0x512600:goto L512600;
case 0x512604:c.instructions+=4;goto B512604;
case 0x51260a:c.instructions+=3;goto B51260a;
case 0x51260b:c.instructions+=2;goto B51260b;
case 0x51260d:c.instructions+=1;goto B51260d;
case 0x51260f:goto L51260f;
case 0x512614:c.instructions+=2;goto B512614;
case 0x512615:c.instructions+=1;goto B512615;
case 0x512616:goto L512616;
case 0x512618:c.instructions+=1;goto B512618;
case 0x512620:goto L512620;
case 0x512623:c.instructions+=2;goto B512623;
case 0x512625:c.instructions+=1;goto B512625;
case 0x512627:goto L512627;
case 0x51262a:c.instructions+=4;goto B51262a;
case 0x512630:c.instructions+=3;goto B512630;
case 0x512631:c.instructions+=2;goto B512631;
case 0x512636:c.instructions+=1;goto B512636;
case 0x51263b:goto L51263b;
case 0x51263e:c.instructions+=1;goto B51263e;
case 0x51263f:goto L51263f;
case 0x512642:c.instructions+=5;goto B512642;
case 0x512643:c.instructions+=4;goto B512643;
case 0x512645:c.instructions+=3;goto B512645;
case 0x512647:c.instructions+=2;goto B512647;
case 0x51264a:c.instructions+=1;goto B51264a;
case 0x51264c:goto L51264c;
case 0x512651:c.instructions+=3;goto B512651;
case 0x512652:c.instructions+=2;goto B512652;
case 0x512657:c.instructions+=1;goto B512657;
case 0x51265c:goto L51265c;
case 0x51265d:c.instructions+=3;goto B51265d;
case 0x51265e:c.instructions+=2;goto B51265e;
case 0x51265f:c.instructions+=1;goto B51265f;
case 0x512664:goto L512664;
case 0x512667:c.instructions+=2;goto B512667;
case 0x512668:c.instructions+=1;goto B512668;
case 0x512669:goto L512669;
case 0x51266c:c.instructions+=2;goto B51266c;
case 0x51266f:c.instructions+=1;goto B51266f;
case 0x512675:goto L512675;
case 0x512679:c.instructions+=2;goto B512679;
case 0x51267c:c.instructions+=1;goto B51267c;
case 0x512682:goto L512682;
case 0x512689:goto L512689;
case 0x51268e:c.instructions+=3;goto B51268e;
case 0x51268f:c.instructions+=2;goto B51268f;
case 0x512694:c.instructions+=1;goto B512694;
case 0x512699:goto L512699;
case 0x51269a:c.instructions+=3;goto B51269a;
case 0x51269b:c.instructions+=2;goto B51269b;
case 0x51269c:c.instructions+=1;goto B51269c;
case 0x5126a1:goto L5126a1;
case 0x5126a4:c.instructions+=2;goto B5126a4;
case 0x5126a5:c.instructions+=1;goto B5126a5;
case 0x5126a6:goto L5126a6;
case 0x5126ab:c.instructions+=3;goto B5126ab;
case 0x5126b0:c.instructions+=2;goto B5126b0;
case 0x5126b1:c.instructions+=1;goto B5126b1;
case 0x5126b6:goto L5126b6;
case 0x5126b7:c.instructions+=3;goto B5126b7;
case 0x5126b8:c.instructions+=2;goto B5126b8;
case 0x5126b9:c.instructions+=1;goto B5126b9;
case 0x5126be:goto L5126be;
case 0x5126c1:c.instructions+=2;goto B5126c1;
case 0x5126c2:c.instructions+=1;goto B5126c2;
case 0x5126c3:goto L5126c3;
case 0x5126c8:c.instructions+=3;goto B5126c8;
case 0x5126c9:c.instructions+=2;goto B5126c9;
case 0x5126ce:c.instructions+=1;goto B5126ce;
case 0x5126d3:goto L5126d3;
case 0x5126d4:c.instructions+=3;goto B5126d4;
case 0x5126d5:c.instructions+=2;goto B5126d5;
case 0x5126d6:c.instructions+=1;goto B5126d6;
case 0x5126db:goto L5126db;
case 0x5126de:c.instructions+=2;goto B5126de;
case 0x5126df:c.instructions+=1;goto B5126df;
case 0x5126e0:goto L5126e0;
case 0x5126e5:c.instructions+=3;goto B5126e5;
case 0x5126e6:c.instructions+=2;goto B5126e6;
case 0x5126eb:c.instructions+=1;goto B5126eb;
case 0x5126f0:goto L5126f0;
case 0x5126f1:c.instructions+=3;goto B5126f1;
case 0x5126f2:c.instructions+=2;goto B5126f2;
case 0x5126f3:c.instructions+=1;goto B5126f3;
case 0x5126f8:goto L5126f8;
case 0x5126fb:c.instructions+=2;goto B5126fb;
case 0x5126fc:c.instructions+=1;goto B5126fc;
case 0x5126fd:goto L5126fd;
case 0x512702:c.instructions+=3;goto B512702;
case 0x512703:c.instructions+=2;goto B512703;
case 0x512708:c.instructions+=1;goto B512708;
case 0x51270d:goto L51270d;
case 0x51270e:c.instructions+=3;goto B51270e;
case 0x51270f:c.instructions+=2;goto B51270f;
case 0x512710:c.instructions+=1;goto B512710;
case 0x512715:goto L512715;
case 0x512718:c.instructions+=2;goto B512718;
case 0x512719:c.instructions+=1;goto B512719;
case 0x51271a:goto L51271a;
case 0x51271d:c.instructions+=1;goto B51271d;
case 0x51271f:goto L51271f;
case 0x512724:c.instructions+=3;goto B512724;
case 0x512725:c.instructions+=2;goto B512725;
case 0x51272a:c.instructions+=1;goto B51272a;
case 0x51272f:goto L51272f;
case 0x512730:c.instructions+=3;goto B512730;
case 0x512731:c.instructions+=2;goto B512731;
case 0x512732:c.instructions+=1;goto B512732;
case 0x512737:goto L512737;
case 0x51273a:c.instructions+=2;goto B51273a;
case 0x51273b:c.instructions+=1;goto B51273b;
case 0x51273c:goto L51273c;
case 0x512740:c.instructions+=2;goto B512740;
case 0x512743:c.instructions+=1;goto B512743;
case 0x512749:goto L512749;
case 0x512750:goto L512750;
case 0x512755:c.instructions+=3;goto B512755;
case 0x512756:c.instructions+=2;goto B512756;
case 0x51275b:c.instructions+=1;goto B51275b;
case 0x512760:goto L512760;
case 0x512761:c.instructions+=3;goto B512761;
case 0x512762:c.instructions+=2;goto B512762;
case 0x512763:c.instructions+=1;goto B512763;
case 0x512768:goto L512768;
case 0x51276b:c.instructions+=2;goto B51276b;
case 0x51276c:c.instructions+=1;goto B51276c;
case 0x51276d:goto L51276d;
case 0x512772:c.instructions+=3;goto B512772;
case 0x512773:c.instructions+=2;goto B512773;
case 0x512778:c.instructions+=1;goto B512778;
case 0x51277d:goto L51277d;
case 0x51277e:c.instructions+=3;goto B51277e;
case 0x51277f:c.instructions+=2;goto B51277f;
case 0x512780:c.instructions+=1;goto B512780;
case 0x512785:goto L512785;
case 0x512788:c.instructions+=2;goto B512788;
case 0x512789:c.instructions+=1;goto B512789;
case 0x51278a:goto L51278a;
case 0x51278f:c.instructions+=3;goto B51278f;
case 0x512790:c.instructions+=2;goto B512790;
case 0x512795:c.instructions+=1;goto B512795;
case 0x51279a:goto L51279a;
case 0x51279b:c.instructions+=3;goto B51279b;
case 0x51279c:c.instructions+=2;goto B51279c;
case 0x51279d:c.instructions+=1;goto B51279d;
case 0x5127a2:goto L5127a2;
case 0x5127a5:c.instructions+=2;goto B5127a5;
case 0x5127a6:c.instructions+=1;goto B5127a6;
case 0x5127a7:goto L5127a7;
case 0x5127ac:c.instructions+=3;goto B5127ac;
case 0x5127ad:c.instructions+=2;goto B5127ad;
case 0x5127b2:c.instructions+=1;goto B5127b2;
case 0x5127b7:goto L5127b7;
case 0x5127b8:c.instructions+=3;goto B5127b8;
case 0x5127b9:c.instructions+=2;goto B5127b9;
case 0x5127ba:c.instructions+=1;goto B5127ba;
case 0x5127bf:goto L5127bf;
case 0x5127c2:c.instructions+=2;goto B5127c2;
case 0x5127c3:c.instructions+=1;goto B5127c3;
case 0x5127c4:goto L5127c4;
case 0x5127c9:c.instructions+=1;goto B5127c9;
case 0x5127ce:goto L5127ce;
case 0x5127cf:c.instructions+=1;goto B5127cf;
case 0x5127d4:goto L5127d4;
case 0x5127d5:c.instructions+=3;goto B5127d5;
case 0x5127d6:c.instructions+=2;goto B5127d6;
case 0x5127d7:c.instructions+=1;goto B5127d7;
case 0x5127dc:goto L5127dc;
case 0x5127df:c.instructions+=2;goto B5127df;
case 0x5127e0:c.instructions+=1;goto B5127e0;
case 0x512820:goto L512820;
case 0x512826:c.instructions+=2;goto B512826;
case 0x512828:c.instructions+=1;goto B512828;
case 0x51282a:goto L51282a;
case 0x51282f:goto L51282f;
case 0x512831:c.instructions+=1;goto B512831;
case 0x512833:goto L512833;
case 0x512838:c.instructions+=1;goto B512838;
case 0x51283d:goto L51283d;
case 0x51283e:c.instructions+=1;goto B51283e;
case 0x512840:goto L512840;
case 0x512844:c.instructions+=2;goto B512844;
case 0x51284a:c.instructions+=1;goto B51284a;
case 0x51284b:goto L51284b;
case 0x51284f:c.instructions+=5;goto B51284f;
case 0x512853:c.instructions+=4;goto B512853;
case 0x512858:c.instructions+=3;goto B512858;
case 0x512859:c.instructions+=2;goto B512859;
case 0x51285a:c.instructions+=1;goto B51285a;
case 0x51285f:goto L51285f;
case 0x512862:c.instructions+=1;goto B512862;
case 0x512870:goto L512870;
case 0x512871:c.instructions+=4;goto B512871;
case 0x512873:c.instructions+=3;goto B512873;
case 0x512879:c.instructions+=2;goto B512879;
case 0x51287b:c.instructions+=1;goto B51287b;
case 0x51287d:goto L51287d;
case 0x51287f:c.instructions+=2;goto B51287f;
case 0x512880:c.instructions+=1;goto B512880;
case 0x512881:goto L512881;
case 0x512883:c.instructions+=1;goto B512883;
case 0x512885:goto L512885;
case 0x512888:c.instructions+=3;goto B512888;
case 0x512889:c.instructions+=2;goto B512889;
case 0x51288e:c.instructions+=1;goto B51288e;
case 0x512893:goto L512893;
case 0x512894:c.instructions+=1;goto B512894;
case 0x512895:goto L512895;
case 0x512897:c.instructions+=1;goto B512897;
case 0x512899:goto L512899;
case 0x5128a0:c.instructions+=3;goto B5128a0;
case 0x5128a6:c.instructions+=2;goto B5128a6;
case 0x5128ac:c.instructions+=1;goto B5128ac;
case 0x5128b1:goto L5128b1;
case 0x5128b4:c.instructions+=6;goto B5128b4;
case 0x5128b6:c.instructions+=5;goto B5128b6;
case 0x5128b8:c.instructions+=4;goto B5128b8;
case 0x5128bb:c.instructions+=3;goto B5128bb;
case 0x5128bd:c.instructions+=2;goto B5128bd;
case 0x5128be:c.instructions+=1;goto B5128be;
case 0x5128bf:goto L5128bf;
case 0x5128c1:c.instructions+=1;goto B5128c1;
case 0x5128c3:goto L5128c3;
case 0x5128ca:c.instructions+=3;goto B5128ca;
case 0x5128d0:c.instructions+=2;goto B5128d0;
case 0x5128d6:c.instructions+=1;goto B5128d6;
case 0x5128db:goto L5128db;
case 0x5128de:c.instructions+=6;goto B5128de;
case 0x5128e0:c.instructions+=5;goto B5128e0;
case 0x5128e2:c.instructions+=4;goto B5128e2;
case 0x5128e5:c.instructions+=3;goto B5128e5;
case 0x5128e7:c.instructions+=2;goto B5128e7;
case 0x5128e8:c.instructions+=1;goto B5128e8;
case 0x5128e9:goto L5128e9;
case 0x5128eb:c.instructions+=1;goto B5128eb;
case 0x5128ed:goto L5128ed;
case 0x5128f4:c.instructions+=3;goto B5128f4;
case 0x5128fa:c.instructions+=2;goto B5128fa;
case 0x512900:c.instructions+=1;goto B512900;
case 0x512905:goto L512905;
case 0x512908:c.instructions+=6;goto B512908;
case 0x51290a:c.instructions+=5;goto B51290a;
case 0x51290c:c.instructions+=4;goto B51290c;
case 0x51290f:c.instructions+=3;goto B51290f;
case 0x512911:c.instructions+=2;goto B512911;
case 0x512912:c.instructions+=1;goto B512912;
case 0x512913:goto L512913;
case 0x512915:c.instructions+=2;goto B512915;
case 0x512916:c.instructions+=1;goto B512916;
case 0x512920:goto L512920;
case 0x512923:c.instructions+=2;goto B512923;
case 0x512925:c.instructions+=1;goto B512925;
case 0x512927:goto L512927;
case 0x51292c:c.instructions+=1;goto B51292c;
case 0x51292d:goto L51292d;
case 0x512930:c.instructions+=5;goto B512930;
case 0x512931:c.instructions+=4;goto B512931;
case 0x512937:c.instructions+=3;goto B512937;
case 0x512939:c.instructions+=2;goto B512939;
case 0x51293b:c.instructions+=1;goto B51293b;
case 0x51293d:goto L51293d;
case 0x512940:goto L512940;
case 0x512947:c.instructions+=1;goto B512947;
case 0x512949:goto L512949;
case 0x51294a:c.instructions+=2;goto B51294a;
case 0x51294c:c.instructions+=1;goto B51294c;
case 0x51294e:goto L51294e;
case 0x512950:goto L512950;
case 0x512957:c.instructions+=2;goto B512957;
case 0x512959:c.instructions+=1;goto B512959;
case 0x51295b:goto L51295b;
case 0x51295f:c.instructions+=1;goto B51295f;
case 0x512961:goto L512961;
case 0x512962:c.instructions+=2;goto B512962;
case 0x512967:c.instructions+=1;goto B512967;
case 0x51296c:goto L51296c;
case 0x51296f:c.instructions+=2;goto B51296f;
case 0x512971:c.instructions+=1;goto B512971;
case 0x512976:goto L512976;
case 0x512978:c.instructions+=2;goto B512978;
case 0x51297a:c.instructions+=1;goto B51297a;
case 0x51297c:goto L51297c;
case 0x512981:goto L512981;
case 0x512982:c.instructions+=1;goto B512982;
case 0x512990:goto L512990;
case 0x512995:c.instructions+=6;goto B512995;
case 0x512996:c.instructions+=5;goto B512996;
case 0x512997:c.instructions+=4;goto B512997;
case 0x512999:c.instructions+=3;goto B512999;
case 0x51299b:c.instructions+=2;goto B51299b;
case 0x51299c:c.instructions+=1;goto B51299c;
case 0x51299e:goto L51299e;
case 0x5129a2:c.instructions+=2;goto B5129a2;
case 0x5129a4:c.instructions+=1;goto B5129a4;
case 0x5129b0:goto L5129b0;
case 0x5129b5:c.instructions+=4;goto B5129b5;
case 0x5129b9:c.instructions+=3;goto B5129b9;
case 0x5129bf:c.instructions+=2;goto B5129bf;
case 0x5129c0:c.instructions+=1;goto B5129c0;
case 0x5129c5:goto L5129c5;
case 0x5129c8:c.instructions+=2;goto B5129c8;
case 0x5129ca:c.instructions+=1;goto B5129ca;
case 0x5129cc:goto L5129cc;
case 0x5129d1:c.instructions+=4;goto B5129d1;
case 0x5129d2:c.instructions+=3;goto B5129d2;
case 0x5129d5:c.instructions+=2;goto B5129d5;
case 0x5129d7:c.instructions+=1;goto B5129d7;
case 0x5129d9:goto L5129d9;
case 0x5129da:c.instructions+=4;goto B5129da;
case 0x5129db:c.instructions+=3;goto B5129db;
case 0x5129dd:c.instructions+=2;goto B5129dd;
case 0x5129de:c.instructions+=1;goto B5129de;
case 0x5129df:goto L5129df;
case 0x5129e5:c.instructions+=7;goto B5129e5;
case 0x5129e7:c.instructions+=6;goto B5129e7;
case 0x5129e8:c.instructions+=5;goto B5129e8;
case 0x5129eb:c.instructions+=4;goto B5129eb;
case 0x5129ec:c.instructions+=3;goto B5129ec;
case 0x5129ee:c.instructions+=2;goto B5129ee;
case 0x5129ef:c.instructions+=1;goto B5129ef;
case 0x5129f0:goto L5129f0;
case 0x5129f3:c.instructions+=4;goto B5129f3;
case 0x5129f9:c.instructions+=3;goto B5129f9;
case 0x5129fa:c.instructions+=2;goto B5129fa;
case 0x5129ff:c.instructions+=1;goto B5129ff;
case 0x512a04:goto L512a04;
case 0x512a07:c.instructions+=1;goto B512a07;
case 0x512a10:goto L512a10;
case 0x512a15:c.instructions+=7;goto B512a15;
case 0x512a16:c.instructions+=6;goto B512a16;
case 0x512a17:c.instructions+=5;goto B512a17;
case 0x512a18:c.instructions+=4;goto B512a18;
case 0x512a1a:c.instructions+=3;goto B512a1a;
case 0x512a1c:c.instructions+=2;goto B512a1c;
case 0x512a1d:c.instructions+=1;goto B512a1d;
case 0x512a1f:goto L512a1f;
case 0x512a23:c.instructions+=2;goto B512a23;
case 0x512a25:c.instructions+=1;goto B512a25;
case 0x512a30:goto L512a30;
case 0x512a35:c.instructions+=6;goto B512a35;
case 0x512a3a:c.instructions+=5;goto B512a3a;
case 0x512a40:c.instructions+=4;goto B512a40;
case 0x512a43:c.instructions+=3;goto B512a43;
case 0x512a45:c.instructions+=2;goto B512a45;
case 0x512a46:c.instructions+=1;goto B512a46;
case 0x512a4b:goto L512a4b;
case 0x512a4e:c.instructions+=2;goto B512a4e;
case 0x512a50:c.instructions+=1;goto B512a50;
case 0x512a52:goto L512a52;
case 0x512a57:c.instructions+=4;goto B512a57;
case 0x512a58:c.instructions+=3;goto B512a58;
case 0x512a5b:c.instructions+=2;goto B512a5b;
case 0x512a5d:c.instructions+=1;goto B512a5d;
case 0x512a5f:goto L512a5f;
case 0x512a60:c.instructions+=5;goto B512a60;
case 0x512a61:c.instructions+=4;goto B512a61;
case 0x512a62:c.instructions+=3;goto B512a62;
case 0x512a64:c.instructions+=2;goto B512a64;
case 0x512a65:c.instructions+=1;goto B512a65;
case 0x512a66:goto L512a66;
case 0x512a67:c.instructions+=5;goto B512a67;
case 0x512a69:c.instructions+=4;goto B512a69;
case 0x512a6a:c.instructions+=3;goto B512a6a;
case 0x512a6b:c.instructions+=2;goto B512a6b;
case 0x512a6c:c.instructions+=1;goto B512a6c;
case 0x512a70:goto L512a70;
case 0x512a74:c.instructions+=9;goto B512a74;
case 0x512a79:c.instructions+=8;goto B512a79;
case 0x512a7e:c.instructions+=7;goto B512a7e;
case 0x512a82:c.instructions+=6;goto B512a82;
case 0x512a85:c.instructions+=5;goto B512a85;
case 0x512a86:c.instructions+=4;goto B512a86;
case 0x512a88:c.instructions+=3;goto B512a88;
case 0x512a8a:c.instructions+=2;goto B512a8a;
case 0x512a90:c.instructions+=1;goto B512a90;
case 0x512a92:goto L512a92;
case 0x512a93:c.instructions+=4;goto B512a93;
case 0x512a94:c.instructions+=3;goto B512a94;
case 0x512a95:c.instructions+=2;goto B512a95;
case 0x512a97:c.instructions+=1;goto B512a97;
case 0x512aa0:goto L512aa0;
case 0x512aa6:c.instructions+=3;goto B512aa6;
case 0x512aaa:c.instructions+=2;goto B512aaa;
case 0x512aaf:c.instructions+=1;goto B512aaf;
case 0x512ab0:goto L512ab0;
case 0x512ab2:c.instructions+=2;goto B512ab2;
case 0x512ab3:c.instructions+=1;goto B512ab3;
case 0x512ab8:goto L512ab8;
case 0x512aba:c.instructions+=4;goto B512aba;
case 0x512abd:c.instructions+=3;goto B512abd;
case 0x512ac0:c.instructions+=2;goto B512ac0;
case 0x512ac1:c.instructions+=1;goto B512ac1;
case 0x512ac3:goto L512ac3;
case 0x512ac8:c.instructions+=4;goto B512ac8;
case 0x512ac9:c.instructions+=3;goto B512ac9;
case 0x512acc:c.instructions+=2;goto B512acc;
case 0x512ace:c.instructions+=1;goto B512ace;
case 0x512ad0:goto L512ad0;
case 0x512ad1:c.instructions+=2;goto B512ad1;
case 0x512ad2:c.instructions+=1;goto B512ad2;
case 0x512ad3:goto L512ad3;
case 0x512ad4:c.instructions+=1;goto B512ad4;
case 0x512ae0:goto L512ae0;
case 0x512ae4:c.instructions+=3;goto B512ae4;
case 0x512ae7:c.instructions+=2;goto B512ae7;
case 0x512aea:c.instructions+=1;goto B512aea;
case 0x512aec:goto L512aec;
case 0x512af1:c.instructions+=1;goto B512af1;
case 0x512af2:goto L512af2;
case 0x512af5:c.instructions+=2;goto B512af5;
case 0x512afa:c.instructions+=1;goto B512afa;
case 0x512afc:goto L512afc;
case 0x512aff:c.instructions+=1;goto B512aff;
case 0x512b01:goto L512b01;
case 0x512b03:c.instructions+=1;goto B512b03;
case 0x512b05:goto L512b05;
case 0x512b08:c.instructions+=1;goto B512b08;
case 0x512b0a:goto L512b0a;
case 0x512b0e:c.instructions+=2;goto B512b0e;
case 0x512b11:c.instructions+=1;goto B512b11;
case 0x512b13:goto L512b13;
case 0x512b1a:goto L512b1a;
case 0x512b1f:c.instructions+=1;goto B512b1f;
case 0x512b20:goto L512b20;
case 0x512b25:c.instructions+=1;goto B512b25;
case 0x512b26:goto L512b26;
case 0x512b2b:c.instructions+=1;goto B512b2b;
case 0x512b2c:goto L512b2c;
case 0x512b31:c.instructions+=1;goto B512b31;
case 0x512b32:goto L512b32;
case 0x512b34:c.instructions+=1;goto B512b34;
case 0x512b50:goto L512b50;
case 0x512b51:c.instructions+=6;goto B512b51;
case 0x512b55:c.instructions+=5;goto B512b55;
case 0x512b56:c.instructions+=4;goto B512b56;
case 0x512b57:c.instructions+=3;goto B512b57;
case 0x512b59:c.instructions+=2;goto B512b59;
case 0x512b5e:c.instructions+=1;goto B512b5e;
case 0x512b60:goto L512b60;
case 0x512b61:c.instructions+=1;goto B512b61;
case 0x512b66:goto L512b66;
case 0x512b68:c.instructions+=3;goto B512b68;
case 0x512b6b:c.instructions+=2;goto B512b6b;
case 0x512b6d:c.instructions+=1;goto B512b6d;
case 0x512b6f:goto L512b6f;
case 0x512b72:c.instructions+=3;goto B512b72;
case 0x512b73:c.instructions+=2;goto B512b73;
case 0x512b79:c.instructions+=1;goto B512b79;
case 0x512b7b:goto L512b7b;
case 0x512b81:c.instructions+=4;goto B512b81;
case 0x512b82:c.instructions+=3;goto B512b82;
case 0x512b83:c.instructions+=2;goto B512b83;
case 0x512b84:c.instructions+=1;goto B512b84;
case 0x512b85:goto L512b85;
case 0x512b88:c.instructions+=3;goto B512b88;
case 0x512b8e:c.instructions+=2;goto B512b8e;
case 0x512b90:c.instructions+=1;goto B512b90;
case 0x512b92:goto L512b92;
case 0x512b96:c.instructions+=4;goto B512b96;
case 0x512b99:c.instructions+=3;goto B512b99;
case 0x512b9b:c.instructions+=2;goto B512b9b;
case 0x512b9e:c.instructions+=1;goto B512b9e;
case 0x512ba0:goto L512ba0;
case 0x512ba4:c.instructions+=4;goto B512ba4;
case 0x512ba7:c.instructions+=3;goto B512ba7;
case 0x512ba9:c.instructions+=2;goto B512ba9;
case 0x512bac:c.instructions+=1;goto B512bac;
case 0x512bae:goto L512bae;
case 0x512bb2:c.instructions+=4;goto B512bb2;
case 0x512bb5:c.instructions+=3;goto B512bb5;
case 0x512bb7:c.instructions+=2;goto B512bb7;
case 0x512bba:c.instructions+=1;goto B512bba;
case 0x512bbc:goto L512bbc;
case 0x512bbf:c.instructions+=4;goto B512bbf;
case 0x512bc0:c.instructions+=3;goto B512bc0;
case 0x512bc1:c.instructions+=2;goto B512bc1;
case 0x512bc2:c.instructions+=1;goto B512bc2;
case 0x512bc3:goto L512bc3;
case 0x512bc7:c.instructions+=4;goto B512bc7;
case 0x512bca:c.instructions+=3;goto B512bca;
case 0x512bcc:c.instructions+=2;goto B512bcc;
case 0x512bcf:c.instructions+=1;goto B512bcf;
case 0x512bd1:goto L512bd1;
case 0x512bd5:c.instructions+=4;goto B512bd5;
case 0x512bd8:c.instructions+=3;goto B512bd8;
case 0x512bda:c.instructions+=2;goto B512bda;
case 0x512bdd:c.instructions+=1;goto B512bdd;
case 0x512bdf:goto L512bdf;
case 0x512be2:c.instructions+=4;goto B512be2;
case 0x512be3:c.instructions+=3;goto B512be3;
case 0x512be4:c.instructions+=2;goto B512be4;
case 0x512be5:c.instructions+=1;goto B512be5;
case 0x512be6:goto L512be6;
case 0x512bea:c.instructions+=4;goto B512bea;
case 0x512bed:c.instructions+=3;goto B512bed;
case 0x512bef:c.instructions+=2;goto B512bef;
case 0x512bf2:c.instructions+=1;goto B512bf2;
case 0x512bf4:goto L512bf4;
case 0x512bf7:c.instructions+=4;goto B512bf7;
case 0x512bf8:c.instructions+=3;goto B512bf8;
case 0x512bf9:c.instructions+=2;goto B512bf9;
case 0x512bfa:c.instructions+=1;goto B512bfa;
case 0x512c00:goto L512c00;
case 0x512c01:c.instructions+=3;goto B512c01;
case 0x512c05:c.instructions+=2;goto B512c05;
case 0x512c0b:c.instructions+=1;goto B512c0b;
case 0x512c11:goto L512c11;
case 0x512c16:c.instructions+=2;goto B512c16;
case 0x512c18:c.instructions+=1;goto B512c18;
case 0x512c1e:goto L512c1e;
case 0x512c1f:c.instructions+=2;goto B512c1f;
case 0x512c29:c.instructions+=1;goto B512c29;
case 0x512c2e:goto L512c2e;
case 0x512c31:c.instructions+=4;goto B512c31;
case 0x512c34:c.instructions+=3;goto B512c34;
case 0x512c38:c.instructions+=2;goto B512c38;
case 0x512c3a:c.instructions+=1;goto B512c3a;
case 0x512c40:goto L512c40;
case 0x512c42:c.instructions+=3;goto B512c42;
case 0x512c47:c.instructions+=2;goto B512c47;
case 0x512c4a:c.instructions+=1;goto B512c4a;
case 0x512c50:goto L512c50;
case 0x512c57:goto L512c57;
case 0x512c5a:c.instructions+=4;goto B512c5a;
case 0x512c5d:c.instructions+=3;goto B512c5d;
case 0x512c63:c.instructions+=2;goto B512c63;
case 0x512c69:c.instructions+=1;goto B512c69;
case 0x512c6e:goto L512c6e;
case 0x512c71:c.instructions+=6;goto B512c71;
case 0x512c76:c.instructions+=5;goto B512c76;
case 0x512c7b:c.instructions+=4;goto B512c7b;
case 0x512c7e:c.instructions+=3;goto B512c7e;
case 0x512c81:c.instructions+=2;goto B512c81;
case 0x512c87:c.instructions+=1;goto B512c87;
case 0x512c8c:goto L512c8c;
case 0x512c91:c.instructions+=6;goto B512c91;
case 0x512c94:c.instructions+=5;goto B512c94;
case 0x512c97:c.instructions+=4;goto B512c97;
case 0x512c9a:c.instructions+=3;goto B512c9a;
case 0x512ca0:c.instructions+=2;goto B512ca0;
case 0x512ca6:c.instructions+=1;goto B512ca6;
case 0x512cab:goto L512cab;
case 0x512cae:c.instructions+=6;goto B512cae;
case 0x512cb4:c.instructions+=5;goto B512cb4;
case 0x512cb9:c.instructions+=4;goto B512cb9;
case 0x512cbc:c.instructions+=3;goto B512cbc;
case 0x512cbf:c.instructions+=2;goto B512cbf;
case 0x512cc5:c.instructions+=1;goto B512cc5;
case 0x512cca:goto L512cca;
case 0x512ccd:c.instructions+=4;goto B512ccd;
case 0x512cce:c.instructions+=3;goto B512cce;
case 0x512cd1:c.instructions+=2;goto B512cd1;
case 0x512cd2:c.instructions+=1;goto B512cd2;
case 0x512cd7:goto L512cd7;
case 0x512cda:c.instructions+=1;goto B512cda;
case 0x512cdf:goto L512cdf;
case 0x512ce2:c.instructions+=5;goto B512ce2;
case 0x512ce5:c.instructions+=4;goto B512ce5;
case 0x512ce8:c.instructions+=3;goto B512ce8;
case 0x512cee:c.instructions+=2;goto B512cee;
case 0x512cf3:c.instructions+=1;goto B512cf3;
case 0x512cf8:goto L512cf8;
case 0x512cfb:c.instructions+=4;goto B512cfb;
case 0x512cfc:c.instructions+=3;goto B512cfc;
case 0x512cff:c.instructions+=2;goto B512cff;
case 0x512d00:c.instructions+=1;goto B512d00;
case 0x512d05:goto L512d05;
case 0x512d08:c.instructions+=1;goto B512d08;
case 0x512d0d:goto L512d0d;
case 0x512d10:c.instructions+=4;goto B512d10;
case 0x512d11:c.instructions+=3;goto B512d11;
case 0x512d14:c.instructions+=2;goto B512d14;
case 0x512d15:c.instructions+=1;goto B512d15;
case 0x512d1a:goto L512d1a;
case 0x512d1d:c.instructions+=1;goto B512d1d;
case 0x512d22:goto L512d22;
case 0x512d25:c.instructions+=5;goto B512d25;
case 0x512d28:c.instructions+=4;goto B512d28;
case 0x512d2b:c.instructions+=3;goto B512d2b;
case 0x512d31:c.instructions+=2;goto B512d31;
case 0x512d36:c.instructions+=1;goto B512d36;
case 0x512d38:goto L512d38;
case 0x512d3d:c.instructions+=6;goto B512d3d;
case 0x512d40:c.instructions+=5;goto B512d40;
case 0x512d43:c.instructions+=4;goto B512d43;
case 0x512d46:c.instructions+=3;goto B512d46;
case 0x512d4c:c.instructions+=2;goto B512d4c;
case 0x512d52:c.instructions+=1;goto B512d52;
case 0x512d54:goto L512d54;
case 0x512d57:c.instructions+=4;goto B512d57;
case 0x512d58:c.instructions+=3;goto B512d58;
case 0x512d5b:c.instructions+=2;goto B512d5b;
case 0x512d5c:c.instructions+=1;goto B512d5c;
case 0x512d61:goto L512d61;
case 0x512d64:c.instructions+=1;goto B512d64;
case 0x512d66:goto L512d66;
case 0x512d6b:c.instructions+=6;goto B512d6b;
case 0x512d6e:c.instructions+=5;goto B512d6e;
case 0x512d71:c.instructions+=4;goto B512d71;
case 0x512d74:c.instructions+=3;goto B512d74;
case 0x512d7a:c.instructions+=2;goto B512d7a;
case 0x512d80:c.instructions+=1;goto B512d80;
case 0x512d82:goto L512d82;
case 0x512d85:c.instructions+=6;goto B512d85;
case 0x512d8b:c.instructions+=5;goto B512d8b;
case 0x512d90:c.instructions+=4;goto B512d90;
case 0x512d93:c.instructions+=3;goto B512d93;
case 0x512d96:c.instructions+=2;goto B512d96;
case 0x512d9c:c.instructions+=1;goto B512d9c;
case 0x512d9e:goto L512d9e;
case 0x512da1:c.instructions+=5;goto B512da1;
case 0x512da6:c.instructions+=4;goto B512da6;
case 0x512dab:c.instructions+=3;goto B512dab;
case 0x512dae:c.instructions+=2;goto B512dae;
case 0x512db1:c.instructions+=1;goto B512db1;
case 0x512db7:goto L512db7;
case 0x512dba:c.instructions+=3;goto B512dba;
case 0x512dbe:c.instructions+=2;goto B512dbe;
case 0x512dc0:c.instructions+=1;goto B512dc0;
case 0x512dc6:goto L512dc6;
case 0x512dc7:c.instructions+=3;goto B512dc7;
case 0x512dcc:c.instructions+=2;goto B512dcc;
case 0x512dcd:c.instructions+=1;goto B512dcd;
case 0x512dce:goto L512dce;
case 0x512dd3:c.instructions+=2;goto B512dd3;
case 0x512dd4:c.instructions+=1;goto B512dd4;
case 0x512dd5:goto L512dd5;
case 0x512dd7:c.instructions+=2;goto B512dd7;
case 0x512dd8:c.instructions+=1;goto B512dd8;
case 0x512e20:goto L512e20;
case 0x512e24:c.instructions+=4;goto B512e24;
case 0x512e25:c.instructions+=3;goto B512e25;
case 0x512e26:c.instructions+=2;goto B512e26;
case 0x512e29:c.instructions+=1;goto B512e29;
case 0x512e2e:goto L512e2e;
case 0x512e30:c.instructions+=1;goto B512e30;
case 0x512e32:goto L512e32;
case 0x512e35:c.instructions+=1;goto B512e35;
case 0x512e38:goto L512e38;
case 0x512e3a:c.instructions+=1;goto B512e3a;
case 0x512e40:goto L512e40;
case 0x512e42:c.instructions+=15;goto B512e42;
case 0x512e47:c.instructions+=14;goto B512e47;
case 0x512e4d:c.instructions+=13;goto B512e4d;
case 0x512e4e:c.instructions+=12;goto B512e4e;
case 0x512e55:c.instructions+=11;goto B512e55;
case 0x512e56:c.instructions+=10;goto B512e56;
case 0x512e57:c.instructions+=9;goto B512e57;
case 0x512e59:c.instructions+=8;goto B512e59;
case 0x512e5d:c.instructions+=7;goto B512e5d;
case 0x512e62:c.instructions+=6;goto B512e62;
case 0x512e64:c.instructions+=5;goto B512e64;
case 0x512e69:c.instructions+=4;goto B512e69;
case 0x512e6f:c.instructions+=3;goto B512e6f;
case 0x512e70:c.instructions+=2;goto B512e70;
case 0x512e78:c.instructions+=1;goto B512e78;
case 0x512e7d:goto L512e7d;
case 0x512e82:c.instructions+=6;goto B512e82;
case 0x512e84:c.instructions+=5;goto B512e84;
case 0x512e86:c.instructions+=4;goto B512e86;
case 0x512e8c:c.instructions+=3;goto B512e8c;
case 0x512e8d:c.instructions+=2;goto B512e8d;
case 0x512e95:c.instructions+=1;goto B512e95;
case 0x512e9a:goto L512e9a;
case 0x512e9e:c.instructions+=4;goto B512e9e;
case 0x512e9f:c.instructions+=3;goto B512e9f;
case 0x512ea6:c.instructions+=2;goto B512ea6;
case 0x512ea9:c.instructions+=1;goto B512ea9;
case 0x512eb0:goto L512eb0;
case 0x512eb1:c.instructions+=6;goto B512eb1;
case 0x512eb3:c.instructions+=5;goto B512eb3;
case 0x512eb5:c.instructions+=4;goto B512eb5;
case 0x512eb6:c.instructions+=3;goto B512eb6;
case 0x512eb9:c.instructions+=2;goto B512eb9;
case 0x512ebf:c.instructions+=1;goto B512ebf;
case 0x512ec4:goto L512ec4;
case 0x512ec6:c.instructions+=3;goto B512ec6;
case 0x512ec9:c.instructions+=2;goto B512ec9;
case 0x512eca:c.instructions+=1;goto B512eca;
case 0x512ecc:goto L512ecc;
case 0x512ed2:c.instructions+=8;goto B512ed2;
case 0x512ed8:c.instructions+=7;goto B512ed8;
case 0x512ede:c.instructions+=6;goto B512ede;
case 0x512ee4:c.instructions+=5;goto B512ee4;
case 0x512eea:c.instructions+=4;goto B512eea;
case 0x512eec:c.instructions+=3;goto B512eec;
case 0x512ef2:c.instructions+=2;goto B512ef2;
case 0x512ef8:c.instructions+=1;goto B512ef8;
case 0x512efd:goto L512efd;
case 0x512eff:goto L512eff;
case 0x512f00:c.instructions+=3;goto B512f00;
case 0x512f02:c.instructions+=2;goto B512f02;
case 0x512f03:c.instructions+=1;goto B512f03;
case 0x512f10:goto L512f10;
case 0x512f11:c.instructions+=7;goto B512f11;
case 0x512f12:c.instructions+=6;goto B512f12;
case 0x512f18:c.instructions+=5;goto B512f18;
case 0x512f1a:c.instructions+=4;goto B512f1a;
case 0x512f1c:c.instructions+=3;goto B512f1c;
case 0x512f1d:c.instructions+=2;goto B512f1d;
case 0x512f21:c.instructions+=1;goto B512f21;
case 0x512f23:goto L512f23;
case 0x512f29:c.instructions+=1;goto B512f29;
case 0x512f30:goto L512f30;
case 0x512f32:c.instructions+=1;goto B512f32;
case 0x512f34:goto L512f34;
case 0x512f3a:c.instructions+=4;goto B512f3a;
case 0x512f3b:c.instructions+=3;goto B512f3b;
case 0x512f3e:c.instructions+=2;goto B512f3e;
case 0x512f40:c.instructions+=1;goto B512f40;
case 0x512f42:goto L512f42;
case 0x512f44:goto L512f44;
case 0x512f4b:c.instructions+=2;goto B512f4b;
case 0x512f4d:c.instructions+=1;goto B512f4d;
case 0x512f4f:goto L512f4f;
case 0x512f56:c.instructions+=3;goto B512f56;
case 0x512f57:c.instructions+=2;goto B512f57;
case 0x512f5d:c.instructions+=1;goto B512f5d;
case 0x512f5f:goto L512f5f;
case 0x512f60:c.instructions+=3;goto B512f60;
case 0x512f61:c.instructions+=2;goto B512f61;
case 0x512f62:c.instructions+=1;goto B512f62;
case 0x512f70:goto L512f70;
case 0x512f71:c.instructions+=7;goto B512f71;
case 0x512f72:c.instructions+=6;goto B512f72;
case 0x512f78:c.instructions+=5;goto B512f78;
case 0x512f7a:c.instructions+=4;goto B512f7a;
case 0x512f7c:c.instructions+=3;goto B512f7c;
case 0x512f7d:c.instructions+=2;goto B512f7d;
case 0x512f81:c.instructions+=1;goto B512f81;
case 0x512f83:goto L512f83;
case 0x512f86:c.instructions+=2;goto B512f86;
case 0x512f8c:c.instructions+=1;goto B512f8c;
case 0x512f90:goto L512f90;
case 0x512f92:c.instructions+=1;goto B512f92;
case 0x512f94:goto L512f94;
case 0x512f95:c.instructions+=3;goto B512f95;
case 0x512f98:c.instructions+=2;goto B512f98;
case 0x512f9a:c.instructions+=1;goto B512f9a;
case 0x512f9c:goto L512f9c;
case 0x512f9e:goto L512f9e;
case 0x512fa5:c.instructions+=2;goto B512fa5;
case 0x512fa7:c.instructions+=1;goto B512fa7;
case 0x512fa9:goto L512fa9;
case 0x512fac:c.instructions+=2;goto B512fac;
case 0x512fad:c.instructions+=1;goto B512fad;
case 0x512fb2:goto L512fb2;
case 0x512fb4:goto L512fb4;
case 0x512fb7:c.instructions+=2;goto B512fb7;
case 0x512fb9:c.instructions+=1;goto B512fb9;
case 0x512fbb:goto L512fbb;
case 0x512fbd:c.instructions+=4;goto B512fbd;
case 0x512fc0:c.instructions+=3;goto B512fc0;
case 0x512fc3:c.instructions+=2;goto B512fc3;
case 0x512fc5:c.instructions+=1;goto B512fc5;
case 0x512fc7:goto L512fc7;
case 0x512fcb:c.instructions+=3;goto B512fcb;
case 0x512fcc:c.instructions+=2;goto B512fcc;
case 0x512fcd:c.instructions+=1;goto B512fcd;
case 0x512fd2:goto L512fd2;
case 0x512fd3:c.instructions+=1;goto B512fd3;
case 0x512fd8:goto L512fd8;
case 0x512fdb:goto L512fdb;
case 0x512fdc:c.instructions+=4;goto B512fdc;
case 0x512fdf:c.instructions+=3;goto B512fdf;
case 0x512fe0:c.instructions+=2;goto B512fe0;
case 0x512fe1:c.instructions+=1;goto B512fe1;
case 0x512fe4:goto L512fe4;
case 0x512fe5:c.instructions+=4;goto B512fe5;
case 0x512fe9:c.instructions+=3;goto B512fe9;
case 0x512fea:c.instructions+=2;goto B512fea;
case 0x512feb:c.instructions+=1;goto B512feb;
case 0x512ff0:goto L512ff0;
case 0x512ff6:c.instructions+=3;goto B512ff6;
case 0x512ff7:c.instructions+=2;goto B512ff7;
case 0x512ffb:c.instructions+=1;goto B512ffb;
default:missing_instruction(c.pc);}
B512000:L512000:{c.instructions+=1;NFSU2_TR(0x512000);
{goto L512035;}
}
B512002:L512002:{c.instructions+=2;NFSU2_TR(0x512002);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B512005:{NFSU2_TR(0x512005);
if(r1(R+518)){{goto L512030;}}
}
B512007:L512007:{c.instructions+=2;NFSU2_TR(0x512007);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B51200a:{NFSU2_TR(0x51200a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L512044;}}
}
B51200c:L51200c:{c.instructions+=2;NFSU2_TR(0x51200c);
u8 U[4];
w4(U+0,u32(0x79ad44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512011:{NFSU2_TR(0x512011);
{goto L512035;}
}
B512013:L512013:{c.instructions+=2;NFSU2_TR(0x512013);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B512016:{NFSU2_TR(0x512016);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51201f;}}
}
B512018:L512018:{c.instructions+=2;NFSU2_TR(0x512018);
u8 U[4];
w4(U+0,u32(0x79ad40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51201d:{NFSU2_TR(0x51201d);
{goto L512035;}
}
B51201f:L51201f:{c.instructions+=2;NFSU2_TR(0x51201f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B512022:{NFSU2_TR(0x512022);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51202b;}}
}
B512024:L512024:{c.instructions+=2;NFSU2_TR(0x512024);
u8 U[4];
w4(U+0,u32(0x79ad38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512029:{NFSU2_TR(0x512029);
{goto L512035;}
}
B51202b:L51202b:{c.instructions+=2;NFSU2_TR(0x51202b);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x7ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B51202e:{NFSU2_TR(0x51202e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L512044;}}
}
B512030:L512030:{c.instructions+=1;NFSU2_TR(0x512030);
u8 U[4];
w4(U+0,u32(0x79ad2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512035:L512035:{c.instructions+=2;NFSU2_TR(0x512035);
u8 U[4];
w4(U+0,u32(0x79ada8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51203a:{NFSU2_TR(0x51203a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51203full));
TAIL_STATIC(0x50b990u,50b);
}
B51203f:L51203f:{c.instructions+=2;NFSU2_TR(0x51203f);
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
B512042:{NFSU2_TR(0x512042);
__builtin_memmove((R+24),(R+0),4);
}
B512044:L512044:{c.instructions+=5;NFSU2_TR(0x512044);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B512045:{NFSU2_TR(0x512045);
__builtin_memmove((R+0),(R+24),4);
}
B512047:{NFSU2_TR(0x512047);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B512048:{NFSU2_TR(0x512048);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B512049:{NFSU2_TR(0x512049);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B512050:L512050:{c.instructions+=6;NFSU2_TR(0x512050);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B512054:{NFSU2_TR(0x512054);
__builtin_memmove((R+8),gp(0x8a1ccc),4);
}
B51205a:{NFSU2_TR(0x51205a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B512060:{NFSU2_TR(0x512060);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512061:{NFSU2_TR(0x512061);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+8)));
w1(R+523,scarry<u32>(r4(R+4),r4(R+8)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B512063:{NFSU2_TR(0x512063);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x512068ull));
TAIL_STATIC(0x610170u,610);
}
B512068:L512068:{c.instructions+=2;NFSU2_TR(0x512068);
__builtin_memmove((R+24),(R+0),4);
}
B51206a:{NFSU2_TR(0x51206a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51206full));
TAIL_STATIC(0x570a30u,570);
}
B51206f:L51206f:{c.instructions+=3;NFSU2_TR(0x51206f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512070:{NFSU2_TR(0x512070);
u8 U[4];
w4(U+0,u32(0x79adfcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512075:{NFSU2_TR(0x512075);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51207aull));
TAIL_STATIC(0x50b990u,50b);
}
B51207a:L51207a:{c.instructions+=3;NFSU2_TR(0x51207a);
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
B51207d:{NFSU2_TR(0x51207d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51207e:{NFSU2_TR(0x51207e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B512080:L512080:{c.instructions+=8;NFSU2_TR(0x512080);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B512084:{NFSU2_TR(0x512084);
__builtin_memmove((R+4),gp(0x8a1ccc),4);
}
B51208a:{NFSU2_TR(0x51208a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B512090:{NFSU2_TR(0x512090);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B512092:{NFSU2_TR(0x512092);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512097:{NFSU2_TR(0x512097);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512098:{NFSU2_TR(0x512098);
u8 U[4];
w4(U+0,u32(0x79ae0cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51209d:{NFSU2_TR(0x51209d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5120a2ull));
TAIL_STATIC(0x50b990u,50b);
}
B5120a2:L5120a2:{c.instructions+=2;NFSU2_TR(0x5120a2);
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
B5120a5:{NFSU2_TR(0x5120a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5120b0:L5120b0:{c.instructions+=8;NFSU2_TR(0x5120b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5120b4:{NFSU2_TR(0x5120b4);
__builtin_memmove((R+4),gp(0x8a1ccc),4);
}
B5120ba:{NFSU2_TR(0x5120ba);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5120c0:{NFSU2_TR(0x5120c0);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B5120c2:{NFSU2_TR(0x5120c2);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5120c7:{NFSU2_TR(0x5120c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5120c8:{NFSU2_TR(0x5120c8);
u8 U[4];
w4(U+0,u32(0x79ae0cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5120cd:{NFSU2_TR(0x5120cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5120d2ull));
TAIL_STATIC(0x50b990u,50b);
}
B5120d2:L5120d2:{c.instructions+=3;NFSU2_TR(0x5120d2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5120d5:{NFSU2_TR(0x5120d5);
__builtin_memmove((R+8),(R+0),4);
}
B5120d7:{NFSU2_TR(0x5120d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5120dcull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B5120dc:L5120dc:{c.instructions+=2;NFSU2_TR(0x5120dc);
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
B5120de:{NFSU2_TR(0x5120de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5120ea;}}
}
B5120e0:L5120e0:{c.instructions+=2;NFSU2_TR(0x5120e0);
w4(R+8,u32(0xc01a6f63ull));
}
B5120e5:{NFSU2_TR(0x5120e5);
TAIL_STATIC(0x4ff9d0u,4ff);
}
B5120ea:L5120ea:{c.instructions+=1;NFSU2_TR(0x5120ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5120f0:L5120f0:{c.instructions+=6;NFSU2_TR(0x5120f0);
__builtin_memmove((R+8),gp(0x8a1ccc),4);
}
B5120f6:{NFSU2_TR(0x5120f6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5120f7:{NFSU2_TR(0x5120f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5120fb:{NFSU2_TR(0x5120fb);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B512101:{NFSU2_TR(0x512101);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),r4(R+8)));
w1(R+523,scarry<u32>(r4(R+24),r4(R+8)));
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B512103:{NFSU2_TR(0x512103);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x512108ull));
TAIL_STATIC(0x570a30u,570);
}
B512108:L512108:{c.instructions+=4;NFSU2_TR(0x512108);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51210d:{NFSU2_TR(0x51210d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51210e:{NFSU2_TR(0x51210e);
u8 U[4];
w4(U+0,u32(0x79ae1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512113:{NFSU2_TR(0x512113);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x512118ull));
TAIL_STATIC(0x50b990u,50b);
}
B512118:L512118:{c.instructions+=3;NFSU2_TR(0x512118);
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
B51211b:{NFSU2_TR(0x51211b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51211c:{NFSU2_TR(0x51211c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B512120:L512120:{c.instructions+=5;NFSU2_TR(0x512120);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B512124:{NFSU2_TR(0x512124);
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
B512126:{NFSU2_TR(0x512126);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512127:{NFSU2_TR(0x512127);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51212a:{NFSU2_TR(0x51212a);
if(r1(R+518)){{goto L512167;}}
}
B51212c:L51212c:{c.instructions+=2;NFSU2_TR(0x51212c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51212e:{NFSU2_TR(0x51212e);
if(r1(R+518)){{goto L512145;}}
}
B512130:L512130:{c.instructions+=4;NFSU2_TR(0x512130);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B512133:{NFSU2_TR(0x512133);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B512135:{NFSU2_TR(0x512135);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B512138:{NFSU2_TR(0x512138);
if(r1(R+518)){{goto L51213d;}}
}
B51213a:L51213a:{c.instructions+=1;NFSU2_TR(0x51213a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51213d:L51213d:{c.instructions+=3;NFSU2_TR(0x51213d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B512140:{NFSU2_TR(0x512140);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B512143:{NFSU2_TR(0x512143);
{goto L51215c;}
}
B512145:L512145:{c.instructions+=4;NFSU2_TR(0x512145);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B512148:{NFSU2_TR(0x512148);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51214a:{NFSU2_TR(0x51214a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51214d:{NFSU2_TR(0x51214d);
if(r1(R+518)){{goto L512152;}}
}
B51214f:L51214f:{c.instructions+=1;NFSU2_TR(0x51214f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B512152:L512152:{c.instructions+=2;NFSU2_TR(0x512152);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B512159:{NFSU2_TR(0x512159);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51215c:L51215c:{c.instructions+=2;NFSU2_TR(0x51215c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51215f:{NFSU2_TR(0x51215f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L512164;}}
}
B512161:L512161:{c.instructions+=1;NFSU2_TR(0x512161);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B512164:L512164:{c.instructions+=1;NFSU2_TR(0x512164);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
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
B512167:L512167:{c.instructions+=2;NFSU2_TR(0x512167);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B512168:{NFSU2_TR(0x512168);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B512170:L512170:{c.instructions+=4;NFSU2_TR(0x512170);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B512174:{NFSU2_TR(0x512174);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512175:{NFSU2_TR(0x512175);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512176:{NFSU2_TR(0x512176);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51217bull));
TAIL_STATIC(0x505450u,505);
}
B51217b:L51217b:{c.instructions+=6;NFSU2_TR(0x51217b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51217e:{NFSU2_TR(0x51217e);
__builtin_memmove((R+24),(R+0),4);
}
B512180:{NFSU2_TR(0x512180);
w4(R+8,u32(0x799e14ull));
}
B512185:{NFSU2_TR(0x512185);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B512188:{NFSU2_TR(0x512188);
w1(R+0,u8(0x47ull));
}
B51218a:{NFSU2_TR(0x51218a);
__builtin_memmove((R+12),(R+12),4);
}
B512190:L512190:{c.instructions+=3;NFSU2_TR(0x512190);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B512193:{NFSU2_TR(0x512193);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B512195:{NFSU2_TR(0x512195);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L51219d;}}
}
B512197:L512197:{c.instructions+=2;NFSU2_TR(0x512197);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B512199:{NFSU2_TR(0x512199);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L51219d;}}
}
B51219b:L51219b:{c.instructions+=1;NFSU2_TR(0x51219b);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B51219d:L51219d:{c.instructions+=6;NFSU2_TR(0x51219d);
w4(R+0,u32(r1(R+0)));
}
B5121a0:{NFSU2_TR(0x5121a0);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B5121a2:{NFSU2_TR(0x5121a2);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5121a5:{NFSU2_TR(0x5121a5);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5121a6:{NFSU2_TR(0x5121a6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5121a8:{NFSU2_TR(0x5121a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x512190u);}goto L512190;}}
}
B5121aa:L5121aa:{c.instructions+=2;NFSU2_TR(0x5121aa);
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
B5121ac:{NFSU2_TR(0x5121ac);
if(r1(R+518)){{goto L512218;}}
}
B5121ae:L5121ae:{c.instructions+=2;NFSU2_TR(0x5121ae);
u8 U[4];
w4(U+0,u32(0x799e34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5121b3:{NFSU2_TR(0x5121b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5121b8ull));
TAIL_STATIC(0x505450u,505);
}
B5121b8:L5121b8:{c.instructions+=3;NFSU2_TR(0x5121b8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5121bb:{NFSU2_TR(0x5121bb);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B5121bd:{NFSU2_TR(0x5121bd);
if(r1(R+518)){{goto L512218;}}
}
B5121bf:L5121bf:{c.instructions+=2;NFSU2_TR(0x5121bf);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5121c4:{NFSU2_TR(0x5121c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5121c9ull));
TAIL_STATIC(0x505450u,505);
}
B5121c9:L5121c9:{c.instructions+=3;NFSU2_TR(0x5121c9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5121cc:{NFSU2_TR(0x5121cc);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B5121ce:{NFSU2_TR(0x5121ce);
if(r1(R+518)){{goto L512218;}}
}
B5121d0:L5121d0:{c.instructions+=2;NFSU2_TR(0x5121d0);
u8 U[4];
w4(U+0,u32(0x799e54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5121d5:{NFSU2_TR(0x5121d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5121daull));
TAIL_STATIC(0x505450u,505);
}
B5121da:L5121da:{c.instructions+=3;NFSU2_TR(0x5121da);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5121dd:{NFSU2_TR(0x5121dd);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B5121df:{NFSU2_TR(0x5121df);
if(r1(R+518)){{goto L512218;}}
}
B5121e1:L5121e1:{c.instructions+=2;NFSU2_TR(0x5121e1);
u8 U[4];
w4(U+0,u32(0x78f2f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5121e6:{NFSU2_TR(0x5121e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5121ebull));
TAIL_STATIC(0x505450u,505);
}
B5121eb:L5121eb:{c.instructions+=3;NFSU2_TR(0x5121eb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5121ee:{NFSU2_TR(0x5121ee);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B5121f0:{NFSU2_TR(0x5121f0);
if(r1(R+518)){{goto L512218;}}
}
B5121f2:L5121f2:{c.instructions+=2;NFSU2_TR(0x5121f2);
u8 U[4];
w4(U+0,u32(0x799e74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5121f7:{NFSU2_TR(0x5121f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5121fcull));
TAIL_STATIC(0x505450u,505);
}
B5121fc:L5121fc:{c.instructions+=3;NFSU2_TR(0x5121fc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5121ff:{NFSU2_TR(0x5121ff);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B512201:{NFSU2_TR(0x512201);
if(r1(R+518)){{goto L512218;}}
}
B512203:L512203:{c.instructions+=2;NFSU2_TR(0x512203);
u8 U[4];
w4(U+0,u32(0x790038ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512208:{NFSU2_TR(0x512208);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51220dull));
TAIL_STATIC(0x505450u,505);
}
B51220d:L51220d:{c.instructions+=3;NFSU2_TR(0x51220d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B512210:{NFSU2_TR(0x512210);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B512212:{NFSU2_TR(0x512212);
if(r1(R+518)){{goto L512218;}}
}
B512214:L512214:{c.instructions+=3;NFSU2_TR(0x512214);
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
B512216:{NFSU2_TR(0x512216);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B512217:{NFSU2_TR(0x512217);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B512218:L512218:{c.instructions+=3;NFSU2_TR(0x512218);
w4(R+0,u32(0x1ull));
}
B51221d:{NFSU2_TR(0x51221d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51221e:{NFSU2_TR(0x51221e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B512220:L512220:{c.instructions+=3;NFSU2_TR(0x512220);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512221:{NFSU2_TR(0x512221);
__builtin_memmove((R+24),(R+4),4);
}
B512223:{NFSU2_TR(0x512223);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x512228ull));
TAIL_STATIC(0x4957a0u,495);
}
B512228:L512228:{c.instructions+=2;NFSU2_TR(0x512228);
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
B51222d:{NFSU2_TR(0x51222d);
if(r1(R+518)){{goto L512238;}}
}
B51222f:L51222f:{c.instructions+=2;NFSU2_TR(0x51222f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512230:{NFSU2_TR(0x512230);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x512235ull));
TAIL_STATIC(0x575630u,575);
}
B512235:L512235:{c.instructions+=1;NFSU2_TR(0x512235);
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
B512238:L512238:{c.instructions+=3;NFSU2_TR(0x512238);
__builtin_memmove((R+0),(R+24),4);
}
B51223a:{NFSU2_TR(0x51223a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51223b:{NFSU2_TR(0x51223b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B512240:L512240:{c.instructions+=4;NFSU2_TR(0x512240);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B512244:{NFSU2_TR(0x512244);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B512246:{NFSU2_TR(0x512246);
__builtin_memmove((R+8),(R+4),4);
}
B512248:{NFSU2_TR(0x512248);
if(r1(R+518)){{goto L512274;}}
}
B51224a:L51224a:{c.instructions+=3;NFSU2_TR(0x51224a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51224d:{NFSU2_TR(0x51224d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51224e:{NFSU2_TR(0x51224e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x512253ull));
TAIL_STATIC(0x50ca50u,50c);
}
B512253:L512253:{c.instructions+=3;NFSU2_TR(0x512253);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B512256:{NFSU2_TR(0x512256);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512257:{NFSU2_TR(0x512257);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51225cull));
TAIL_STATIC(0x50ca50u,50c);
}
B51225c:L51225c:{c.instructions+=3;NFSU2_TR(0x51225c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51225f:{NFSU2_TR(0x51225f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512260:{NFSU2_TR(0x512260);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x512265ull));
TAIL_STATIC(0x50ca50u,50c);
}
B512265:L512265:{c.instructions+=3;NFSU2_TR(0x512265);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B512268:{NFSU2_TR(0x512268);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512269:{NFSU2_TR(0x512269);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51226eull));
TAIL_STATIC(0x50ca50u,50c);
}
B51226e:L51226e:{c.instructions+=2;NFSU2_TR(0x51226e);
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
B512271:{NFSU2_TR(0x512271);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B512274:L512274:{c.instructions+=3;NFSU2_TR(0x512274);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B512277:{NFSU2_TR(0x512277);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512278:{NFSU2_TR(0x512278);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51227dull));
TAIL_STATIC(0x50ca00u,50c);
}
B51227d:L51227d:{c.instructions+=3;NFSU2_TR(0x51227d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B512280:{NFSU2_TR(0x512280);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512281:{NFSU2_TR(0x512281);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x512286ull));
TAIL_STATIC(0x50ca00u,50c);
}
B512286:L512286:{c.instructions+=3;NFSU2_TR(0x512286);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B512289:{NFSU2_TR(0x512289);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51228a:{NFSU2_TR(0x51228a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51228full));
TAIL_STATIC(0x50ca00u,50c);
}
B51228f:L51228f:{c.instructions+=3;NFSU2_TR(0x51228f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B512292:{NFSU2_TR(0x512292);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512293:{NFSU2_TR(0x512293);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x512298ull));
TAIL_STATIC(0x50ca00u,50c);
}
B512298:L512298:{c.instructions+=3;NFSU2_TR(0x512298);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51229b:{NFSU2_TR(0x51229b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51229c:{NFSU2_TR(0x51229c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5122a1ull));
TAIL_STATIC(0x50ca00u,50c);
}
B5122a1:L5122a1:{c.instructions+=3;NFSU2_TR(0x5122a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5122a4:{NFSU2_TR(0x5122a4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5122a5:{NFSU2_TR(0x5122a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5122aaull));
TAIL_STATIC(0x50ca00u,50c);
}
B5122aa:L5122aa:{c.instructions+=2;NFSU2_TR(0x5122aa);
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
B5122ad:{NFSU2_TR(0x5122ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5122b0:L5122b0:{c.instructions+=6;NFSU2_TR(0x5122b0);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5122b4:{NFSU2_TR(0x5122b4);
__builtin_memmove((R+8),(R+4),4);
}
B5122b6:{NFSU2_TR(0x5122b6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5122b8:{NFSU2_TR(0x5122b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5122bb:{NFSU2_TR(0x5122bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5122bc:{NFSU2_TR(0x5122bc);
if(r1(R+518)){{goto L512308;}}
}
B5122be:L5122be:{c.instructions+=1;NFSU2_TR(0x5122be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5122c3ull));
TAIL_STATIC(0x50ca50u,50c);
}
B5122c3:L5122c3:{c.instructions+=3;NFSU2_TR(0x5122c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5122c6:{NFSU2_TR(0x5122c6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5122c7:{NFSU2_TR(0x5122c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5122ccull));
TAIL_STATIC(0x50ca50u,50c);
}
B5122cc:L5122cc:{c.instructions+=3;NFSU2_TR(0x5122cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5122cf:{NFSU2_TR(0x5122cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5122d0:{NFSU2_TR(0x5122d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5122d5ull));
TAIL_STATIC(0x50ca50u,50c);
}
B5122d5:L5122d5:{c.instructions+=3;NFSU2_TR(0x5122d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5122d8:{NFSU2_TR(0x5122d8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5122d9:{NFSU2_TR(0x5122d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5122deull));
TAIL_STATIC(0x50ca50u,50c);
}
B5122de:L5122de:{c.instructions+=3;NFSU2_TR(0x5122de);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5122e1:{NFSU2_TR(0x5122e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5122e2:{NFSU2_TR(0x5122e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5122e7ull));
TAIL_STATIC(0x50ca50u,50c);
}
B5122e7:L5122e7:{c.instructions+=3;NFSU2_TR(0x5122e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5122ea:{NFSU2_TR(0x5122ea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5122eb:{NFSU2_TR(0x5122eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5122f0ull));
TAIL_STATIC(0x50ca50u,50c);
}
B5122f0:L5122f0:{c.instructions+=3;NFSU2_TR(0x5122f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5122f3:{NFSU2_TR(0x5122f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5122f4:{NFSU2_TR(0x5122f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5122f9ull));
TAIL_STATIC(0x50ca50u,50c);
}
B5122f9:L5122f9:{c.instructions+=3;NFSU2_TR(0x5122f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5122fc:{NFSU2_TR(0x5122fc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5122fd:{NFSU2_TR(0x5122fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x512302ull));
TAIL_STATIC(0x50ca50u,50c);
}
B512302:L512302:{c.instructions+=2;NFSU2_TR(0x512302);
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
B512305:{NFSU2_TR(0x512305);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B512308:L512308:{c.instructions+=1;NFSU2_TR(0x512308);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51230dull));
TAIL_STATIC(0x50ca00u,50c);
}
B51230d:L51230d:{c.instructions+=3;NFSU2_TR(0x51230d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B512310:{NFSU2_TR(0x512310);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512311:{NFSU2_TR(0x512311);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x512316ull));
TAIL_STATIC(0x50ca00u,50c);
}
B512316:L512316:{c.instructions+=3;NFSU2_TR(0x512316);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B512319:{NFSU2_TR(0x512319);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51231a:{NFSU2_TR(0x51231a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51231full));
TAIL_STATIC(0x50ca00u,50c);
}
B51231f:L51231f:{c.instructions+=3;NFSU2_TR(0x51231f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B512322:{NFSU2_TR(0x512322);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512323:{NFSU2_TR(0x512323);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x512328ull));
TAIL_STATIC(0x50ca00u,50c);
}
B512328:L512328:{c.instructions+=3;NFSU2_TR(0x512328);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51232b:{NFSU2_TR(0x51232b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51232c:{NFSU2_TR(0x51232c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x512331ull));
TAIL_STATIC(0x50ca00u,50c);
}
B512331:L512331:{c.instructions+=3;NFSU2_TR(0x512331);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B512334:{NFSU2_TR(0x512334);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512335:{NFSU2_TR(0x512335);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51233aull));
TAIL_STATIC(0x50ca00u,50c);
}
B51233a:L51233a:{c.instructions+=3;NFSU2_TR(0x51233a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51233d:{NFSU2_TR(0x51233d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51233e:{NFSU2_TR(0x51233e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x512343ull));
TAIL_STATIC(0x50ca00u,50c);
}
B512343:L512343:{c.instructions+=3;NFSU2_TR(0x512343);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B512346:{NFSU2_TR(0x512346);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512347:{NFSU2_TR(0x512347);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51234cull));
TAIL_STATIC(0x50ca00u,50c);
}
B51234c:L51234c:{c.instructions+=2;NFSU2_TR(0x51234c);
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
B51234f:{NFSU2_TR(0x51234f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B512360:L512360:{c.instructions+=6;NFSU2_TR(0x512360);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512361:{NFSU2_TR(0x512361);
__builtin_memmove((R+4),gp(0x7f70d0),4);
}
B512367:{NFSU2_TR(0x512367);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512368:{NFSU2_TR(0x512368);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51236c:{NFSU2_TR(0x51236c);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B51236e:{NFSU2_TR(0x51236e);
if(r1(R+518)){{goto L512512;}}
}
B512374:L512374:{c.instructions+=4;NFSU2_TR(0x512374);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512375:{NFSU2_TR(0x512375);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B512377:{NFSU2_TR(0x512377);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51237a:{NFSU2_TR(0x51237a);
if(r1(R+518)){{goto L512405;}}
}
B512380:L512380:{c.instructions+=3;NFSU2_TR(0x512380);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512381:{NFSU2_TR(0x512381);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B512383:{NFSU2_TR(0x512383);
w4(R+0,u32(0x7f7020ull));
}
B512388:L512388:{c.instructions+=2;NFSU2_TR(0x512388);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B51238a:{NFSU2_TR(0x51238a);
if(r1(R+518)){{goto L512471;}}
}
B512390:L512390:{c.instructions+=4;NFSU2_TR(0x512390);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B512393:{NFSU2_TR(0x512393);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B512394:{NFSU2_TR(0x512394);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7f70d0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7f70d0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B512399:{NFSU2_TR(0x512399);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x512388u);}goto L512388;}}
}
B51239b:L51239b:{c.instructions+=1;NFSU2_TR(0x51239b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B51239d:L51239d:{c.instructions+=3;NFSU2_TR(0x51239d);
__builtin_memmove((R+0),gp(0x8383cc),4);
}
B5123a2:{NFSU2_TR(0x5123a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5123a3:{NFSU2_TR(0x5123a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5123a8ull));
TAIL_STATIC(0x580e90u,580);
}
B5123a8:L5123a8:{c.instructions+=6;NFSU2_TR(0x5123a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5123ab:{NFSU2_TR(0x5123ab);
__builtin_memmove(gp(0x8383cc),(R+12),4);
}
B5123b1:{NFSU2_TR(0x5123b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5123b4:{NFSU2_TR(0x5123b4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5123b7:{NFSU2_TR(0x5123b7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5123b9:{NFSU2_TR(0x5123b9);
if(r1(R+518)){{goto L5123cc;}}
}
B5123bb:L5123bb:{c.instructions+=3;NFSU2_TR(0x5123bb);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5123bd:{NFSU2_TR(0x5123bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5123be:{NFSU2_TR(0x5123be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5123c3ull));
TAIL_STATIC(0x490150u,490);
}
B5123c3:L5123c3:{c.instructions+=3;NFSU2_TR(0x5123c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5123c6:{NFSU2_TR(0x5123c6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5123c9:{NFSU2_TR(0x5123c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5123cc:L5123cc:{c.instructions+=3;NFSU2_TR(0x5123cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5123cf:{NFSU2_TR(0x5123cf);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5123d2:{NFSU2_TR(0x5123d2);
if(r1(R+518)){{goto L5123e8;}}
}
B5123d4:L5123d4:{c.instructions+=4;NFSU2_TR(0x5123d4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B5123d7:{NFSU2_TR(0x5123d7);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5123d9:{NFSU2_TR(0x5123d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5123da:{NFSU2_TR(0x5123da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5123dfull));
TAIL_STATIC(0x490150u,490);
}
B5123df:L5123df:{c.instructions+=3;NFSU2_TR(0x5123df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5123e2:{NFSU2_TR(0x5123e2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5123e5:{NFSU2_TR(0x5123e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5123e8:L5123e8:{c.instructions+=3;NFSU2_TR(0x5123e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5123eb:{NFSU2_TR(0x5123eb);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5123ee:{NFSU2_TR(0x5123ee);
if(r1(R+518)){{goto L512404;}}
}
B5123f0:L5123f0:{c.instructions+=4;NFSU2_TR(0x5123f0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B5123f3:{NFSU2_TR(0x5123f3);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5123f5:{NFSU2_TR(0x5123f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5123f6:{NFSU2_TR(0x5123f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5123fbull));
TAIL_STATIC(0x490150u,490);
}
B5123fb:L5123fb:{c.instructions+=3;NFSU2_TR(0x5123fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5123fe:{NFSU2_TR(0x5123fe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B512401:{NFSU2_TR(0x512401);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B512404:L512404:{c.instructions+=1;NFSU2_TR(0x512404);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B512405:L512405:{c.instructions+=3;NFSU2_TR(0x512405);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B512408:{NFSU2_TR(0x512408);
__builtin_memmove(gp(0x7f70d0),(R+28),4);
}
B51240e:{NFSU2_TR(0x51240e);
if(r1(R+518)){{goto L51245e;}}
}
B512410:L512410:{c.instructions+=10;NFSU2_TR(0x512410);
__builtin_memmove((R+0),gp(0x8654a4),4);
}
B512415:{NFSU2_TR(0x512415);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B512418:{NFSU2_TR(0x512418);
__builtin_memmove((R+4),(R+518),1);
}
B51241b:{NFSU2_TR(0x51241b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51241e:{NFSU2_TR(0x51241e);
__builtin_memmove((R+8),(R+518),1);
}
B512421:{NFSU2_TR(0x512421);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512423:{NFSU2_TR(0x512423);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512424:{NFSU2_TR(0x512424);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512425:{NFSU2_TR(0x512425);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512427:{NFSU2_TR(0x512427);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51242cull));
TAIL_STATIC(0x4ff780u,4ff);
}
B51242c:L51242c:{c.instructions+=5;NFSU2_TR(0x51242c);
__builtin_memmove((R+0),gp(0x7f70d0),4);
}
B512431:{NFSU2_TR(0x512431);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B512437:{NFSU2_TR(0x512437);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B51243a:{NFSU2_TR(0x51243a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51243b:{NFSU2_TR(0x51243b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x512440ull));
TAIL_STATIC(0x468f30u,468);
}
B512440:L512440:{c.instructions+=6;NFSU2_TR(0x512440);
u8 U[8];
__builtin_memmove((U+0),gp(0x7f70d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B512446:{NFSU2_TR(0x512446);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B512449:{NFSU2_TR(0x512449);
__builtin_memmove(gp(0x83aa1a),(R+4),1);
}
B51244f:{NFSU2_TR(0x51244f);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B512455:{NFSU2_TR(0x512455);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B512457:{NFSU2_TR(0x512457);
if(r1(R+518)){{goto L51245e;}}
}
B512459:L512459:{c.instructions+=1;NFSU2_TR(0x512459);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51245eull));
TAIL_STATIC(0x50c7e0u,50c);
}
B51245e:L51245e:{c.instructions+=2;NFSU2_TR(0x51245e);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B512461:{NFSU2_TR(0x512461);
if(r1(R+518)){{goto L51248b;}}
}
B512463:L512463:{c.instructions+=1;NFSU2_TR(0x512463);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L51247f;}}
}
B512465:L512465:{c.instructions+=2;NFSU2_TR(0x512465);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x7ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B512468:{NFSU2_TR(0x512468);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L51247f;}}
}
B51246a:L51246a:{c.instructions+=2;NFSU2_TR(0x51246a);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x2eull));
s1(u32(r4(U+0)),r1(U+4));
}
B51246f:{NFSU2_TR(0x51246f);
{goto L512490;}
}
B512471:L512471:{c.instructions+=3;NFSU2_TR(0x512471);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B512474:{NFSU2_TR(0x512474);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x7f7020ull))));
}
B51247a:{NFSU2_TR(0x51247a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51239du);}goto L51239d;}
}
B51247f:L51247f:{c.instructions+=3;NFSU2_TR(0x51247f);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w1(U+4,u8(0x2eull));
s1(u32(r4(U+0)),r1(U+4));
}
B512484:{NFSU2_TR(0x512484);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x2cull));
s1(u32(r4(U+0)),r1(U+4));
}
B512489:{NFSU2_TR(0x512489);
{goto L512495;}
}
B51248b:L51248b:{c.instructions+=1;NFSU2_TR(0x51248b);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x20ull));
s1(u32(r4(U+0)),r1(U+4));
}
B512490:L512490:{c.instructions+=1;NFSU2_TR(0x512490);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w1(U+4,u8(0x2cull));
s1(u32(r4(U+0)),r1(U+4));
}
B512495:L512495:{c.instructions+=6;NFSU2_TR(0x512495);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B512499:{NFSU2_TR(0x512499);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51249d:{NFSU2_TR(0x51249d);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51249f:{NFSU2_TR(0x51249f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5124a0:{NFSU2_TR(0x5124a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5124a1:{NFSU2_TR(0x5124a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5124a6ull));
TAIL_STATIC(0x43cb20u,43c);
}
B5124a6:L5124a6:{c.instructions+=4;NFSU2_TR(0x5124a6);
__builtin_memmove((R+0),gp(0x83aa00),1);
}
B5124ab:{NFSU2_TR(0x5124ab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5124ae:{NFSU2_TR(0x5124ae);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5124b0:{NFSU2_TR(0x5124b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5124fe;}}
}
B5124b2:L5124b2:{c.instructions+=4;NFSU2_TR(0x5124b2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5124b4:{NFSU2_TR(0x5124b4);
w4(R+4,u32(0x8ull));
}
B5124b9:{NFSU2_TR(0x5124b9);
w4(R+28,u32(0x83a9e0ull));
}
B5124be:{NFSU2_TR(0x5124be);
w4(R+8,u32(0xcf4f80c2ull));
}
B5124c3:L5124c3:{c.instructions+=1;NFSU2_TR(0x5124c3);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5124c5;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5124c3u);}goto L5124c3;}
}
B5124c5:L5124c5:{c.instructions+=1;NFSU2_TR(0x5124c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5124caull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B5124ca:L5124ca:{c.instructions+=3;NFSU2_TR(0x5124ca);
__builtin_memmove((R+8),(R+0),4);
}
B5124cc:{NFSU2_TR(0x5124cc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5124ce:{NFSU2_TR(0x5124ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5124dc;}}
}
B5124d0:L5124d0:{c.instructions+=2;NFSU2_TR(0x5124d0);
w4(R+8,u32(0xc01a6f63ull));
}
B5124d5:{NFSU2_TR(0x5124d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5124daull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B5124da:L5124da:{c.instructions+=1;NFSU2_TR(0x5124da);
__builtin_memmove((R+8),(R+0),4);
}
B5124dc:L5124dc:{c.instructions+=5;NFSU2_TR(0x5124dc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5124dd:{NFSU2_TR(0x5124dd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5124df:{NFSU2_TR(0x5124df);
w4(R+4,u32(0x8ull));
}
B5124e4:{NFSU2_TR(0x5124e4);
w4(R+28,u32(0x83a9e0ull));
}
B5124e9:{NFSU2_TR(0x5124e9);
u8 U[4];
w4(U+0,u32(0x83a9e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5124ee:L5124ee:{c.instructions+=1;NFSU2_TR(0x5124ee);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5124f0;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5124eeu);}goto L5124ee;}
}
B5124f0:L5124f0:{c.instructions+=1;NFSU2_TR(0x5124f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5124f5ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5124f5:L5124f5:{c.instructions+=2;NFSU2_TR(0x5124f5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5124f8:{NFSU2_TR(0x5124f8);
__builtin_memmove(gp(0x83aa00),(R+12),1);
}
B5124fe:L5124fe:{c.instructions+=6;NFSU2_TR(0x5124fe);
__builtin_memmove((R+4),gp(0x7f70d0),4);
}
B512504:{NFSU2_TR(0x512504);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B512505:{NFSU2_TR(0x512505);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B512506:{NFSU2_TR(0x512506);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B512509:{NFSU2_TR(0x512509);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51250d:{NFSU2_TR(0x51250d);
TAIL_STATIC(0x4a95f0u,4a9);
}
B512512:L512512:{c.instructions+=3;NFSU2_TR(0x512512);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B512513:{NFSU2_TR(0x512513);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B512514:{NFSU2_TR(0x512514);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B512520:L512520:{c.instructions+=1;NFSU2_TR(0x512520);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x512525ull));
TAIL_STATIC(0x5b7af0u,5b7);
}
B512525:L512525:{c.instructions+=2;NFSU2_TR(0x512525);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512526:{NFSU2_TR(0x512526);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51252bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x512360u);}goto L512360;}
}
B51252b:L51252b:{c.instructions+=2;NFSU2_TR(0x51252b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B51252c:{NFSU2_TR(0x51252c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B512530:L512530:{c.instructions+=3;NFSU2_TR(0x512530);
__builtin_memmove((R+4),gp(0x8383dc),4);
}
B512536:{NFSU2_TR(0x512536);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B512538:{NFSU2_TR(0x512538);
if(r1(R+518)){{goto L51254f;}}
}
B51253a:L51253a:{c.instructions+=7;NFSU2_TR(0x51253a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51253e:{NFSU2_TR(0x51253e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B512542:{NFSU2_TR(0x512542);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512543:{NFSU2_TR(0x512543);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B512547:{NFSU2_TR(0x512547);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512548:{NFSU2_TR(0x512548);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512549:{NFSU2_TR(0x512549);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51254eull));
TAIL_STATIC(0x50d3c0u,50d);
}
B51254e:L51254e:{c.instructions+=1;NFSU2_TR(0x51254e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51254f:L51254f:{c.instructions+=5;NFSU2_TR(0x51254f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B512553:{NFSU2_TR(0x512553);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B512557:{NFSU2_TR(0x512557);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512558:{NFSU2_TR(0x512558);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512559:{NFSU2_TR(0x512559);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51255eull));
TAIL_STATIC(0x43e000u,43e);
}
B51255e:L51255e:{c.instructions+=2;NFSU2_TR(0x51255e);
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
B512561:{NFSU2_TR(0x512561);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B512570:L512570:{c.instructions+=2;NFSU2_TR(0x512570);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B512574:{NFSU2_TR(0x512574);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x512579ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B512579:L512579:{c.instructions+=2;NFSU2_TR(0x512579);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51257b:{NFSU2_TR(0x51257b);
if(r1(R+518)){{goto L5125aa;}}
}
B51257d:L51257d:{c.instructions+=4;NFSU2_TR(0x51257d);
if(mod_hook_table[17]){SPILL();c.pc=0x51257du;mod_hook_table[17](c);SPILL();if(c.pc!=0x51257du){TAIL_DYNAMIC(c.pc);}goto B512583;}
__builtin_memmove((R+4),gp(0x8383dc),4);
}
B512583:{NFSU2_TR(0x512583);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B512585:{NFSU2_TR(0x512585);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512586:{NFSU2_TR(0x512586);
if(r1(R+518)){{goto L51259a;}}
}
B512588:L512588:{c.instructions+=5;NFSU2_TR(0x512588);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51258c:{NFSU2_TR(0x51258c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B512590:{NFSU2_TR(0x512590);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512591:{NFSU2_TR(0x512591);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512592:{NFSU2_TR(0x512592);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x512597ull));
TAIL_STATIC(0x50d3c0u,50d);
}
B512597:L512597:{c.instructions+=2;NFSU2_TR(0x512597);
w1(R+0,u8(0x1ull));
}
B512599:{NFSU2_TR(0x512599);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51259a:L51259a:{c.instructions+=3;NFSU2_TR(0x51259a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51259e:{NFSU2_TR(0x51259e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51259f:{NFSU2_TR(0x51259f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5125a4ull));
TAIL_STATIC(0x43e000u,43e);
}
B5125a4:L5125a4:{c.instructions+=3;NFSU2_TR(0x5125a4);
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
B5125a7:{NFSU2_TR(0x5125a7);
w1(R+0,u8(0x1ull));
}
B5125a9:{NFSU2_TR(0x5125a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5125aa:L5125aa:{c.instructions+=2;NFSU2_TR(0x5125aa);
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
B5125ac:{NFSU2_TR(0x5125ac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5125b0:L5125b0:{c.instructions+=3;NFSU2_TR(0x5125b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5125b4:{NFSU2_TR(0x5125b4);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x39000ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5125ba:{NFSU2_TR(0x5125ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L512616;}}
}
B5125bc:L5125bc:{c.instructions+=16;NFSU2_TR(0x5125bc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B5125bf:{NFSU2_TR(0x5125bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5125c0:{NFSU2_TR(0x5125c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5125c3:{NFSU2_TR(0x5125c3);
__builtin_memmove(gp(0x8383d0),(R+24),4);
}
B5125c9:{NFSU2_TR(0x5125c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5125cb:{NFSU2_TR(0x5125cb);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B5125cd:{NFSU2_TR(0x5125cd);
__builtin_memmove(gp(0x8383dc),(R+4),4);
}
B5125d3:{NFSU2_TR(0x5125d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5125d6:{NFSU2_TR(0x5125d6);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B5125d8:{NFSU2_TR(0x5125d8);
__builtin_memmove(gp(0x8383d8),(R+4),4);
}
B5125de:{NFSU2_TR(0x5125de);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5125e1:{NFSU2_TR(0x5125e1);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B5125e3:{NFSU2_TR(0x5125e3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5125e5:{NFSU2_TR(0x5125e5);
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
B5125e7:{NFSU2_TR(0x5125e7);
__builtin_memmove(gp(0x8383d4),(R+8),4);
}
B5125ed:{NFSU2_TR(0x5125ed);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L51260f;}}
}
B5125ef:L5125ef:{c.instructions+=1;NFSU2_TR(0x5125ef);
{goto L512600;}
}
B5125f1:L5125f1:{c.instructions+=3;NFSU2_TR(0x5125f1);
__builtin_memmove((R+4),gp(0x8383d8),4);
}
B5125f7:{NFSU2_TR(0x5125f7);
__builtin_memmove((R+8),gp(0x8383d4),4);
}
B5125fd:{NFSU2_TR(0x5125fd);
__builtin_memmove((R+4),(R+4),4);
}
B512600:L512600:{c.instructions+=5;NFSU2_TR(0x512600);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))+u32(r4(R+8))));
s4(u32(r4(U+8)),r4(U+12));
}
B512604:{NFSU2_TR(0x512604);
__builtin_memmove((R+4),gp(0x8383d0),4);
}
B51260a:{NFSU2_TR(0x51260a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B51260b:{NFSU2_TR(0x51260b);
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
B51260d:{NFSU2_TR(0x51260d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5125f1u);}goto L5125f1;}}
}
B51260f:L51260f:{c.instructions+=3;NFSU2_TR(0x51260f);
w4(R+0,u32(0x1ull));
}
B512614:{NFSU2_TR(0x512614);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B512615:{NFSU2_TR(0x512615);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B512616:L512616:{c.instructions+=2;NFSU2_TR(0x512616);
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
B512618:{NFSU2_TR(0x512618);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B512620:L512620:{c.instructions+=3;NFSU2_TR(0x512620);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x37ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B512623:{NFSU2_TR(0x512623);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B512625:{NFSU2_TR(0x512625);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51263f;}}
}
B512627:L512627:{c.instructions+=5;NFSU2_TR(0x512627);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(r2(U+0)));
}
B51262a:{NFSU2_TR(0x51262a);
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x838428))));
}
B512630:{NFSU2_TR(0x512630);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512631:{NFSU2_TR(0x512631);
u8 U[4];
w4(U+0,u32(0x79afbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512636:{NFSU2_TR(0x512636);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51263bull));
TAIL_STATIC(0x50b990u,50b);
}
B51263b:L51263b:{c.instructions+=2;NFSU2_TR(0x51263b);
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
B51263e:{NFSU2_TR(0x51263e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51263f:L51263f:{c.instructions+=6;NFSU2_TR(0x51263f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B512642:{NFSU2_TR(0x512642);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512643:{NFSU2_TR(0x512643);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B512645:{NFSU2_TR(0x512645);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B512647:{NFSU2_TR(0x512647);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B51264a:{NFSU2_TR(0x51264a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L512669;}}
}
B51264c:L51264c:{c.instructions+=4;NFSU2_TR(0x51264c);
w4(R+0,u32(0x9ull));
}
B512651:{NFSU2_TR(0x512651);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512652:{NFSU2_TR(0x512652);
w4(R+24,u32(0x79afa4ull));
}
B512657:{NFSU2_TR(0x512657);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51265cull));
TAIL_STATIC(0x43c1c0u,43c);
}
B51265c:L51265c:{c.instructions+=4;NFSU2_TR(0x51265c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B51265d:{NFSU2_TR(0x51265d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51265e:{NFSU2_TR(0x51265e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51265f:{NFSU2_TR(0x51265f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x512664ull));
TAIL_STATIC(0x50b990u,50b);
}
B512664:L512664:{c.instructions+=3;NFSU2_TR(0x512664);
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
B512667:{NFSU2_TR(0x512667);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B512668:{NFSU2_TR(0x512668);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B512669:L512669:{c.instructions+=3;NFSU2_TR(0x512669);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B51266c:{NFSU2_TR(0x51266c);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B51266f:{NFSU2_TR(0x51266f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51271a;}}
}
B512675:L512675:{c.instructions+=3;NFSU2_TR(0x512675);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B512679:{NFSU2_TR(0x512679);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B51267c:{NFSU2_TR(0x51267c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5127ce;}}
}
B512682:L512682:{c.instructions+=1;NFSU2_TR(0x512682);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5127e4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B512689:L512689:{c.instructions+=4;NFSU2_TR(0x512689);
w4(R+0,u32(0xbull));
}
B51268e:{NFSU2_TR(0x51268e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51268f:{NFSU2_TR(0x51268f);
w4(R+24,u32(0x79af84ull));
}
B512694:{NFSU2_TR(0x512694);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x512699ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B512699:L512699:{c.instructions+=4;NFSU2_TR(0x512699);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B51269a:{NFSU2_TR(0x51269a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51269b:{NFSU2_TR(0x51269b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51269c:{NFSU2_TR(0x51269c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5126a1ull));
TAIL_STATIC(0x50b990u,50b);
}
B5126a1:L5126a1:{c.instructions+=3;NFSU2_TR(0x5126a1);
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
B5126a4:{NFSU2_TR(0x5126a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5126a5:{NFSU2_TR(0x5126a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5126a6:L5126a6:{c.instructions+=4;NFSU2_TR(0x5126a6);
w4(R+24,u32(0x79af64ull));
}
B5126ab:{NFSU2_TR(0x5126ab);
w4(R+0,u32(0xaull));
}
B5126b0:{NFSU2_TR(0x5126b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5126b1:{NFSU2_TR(0x5126b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5126b6ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B5126b6:L5126b6:{c.instructions+=4;NFSU2_TR(0x5126b6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5126b7:{NFSU2_TR(0x5126b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5126b8:{NFSU2_TR(0x5126b8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5126b9:{NFSU2_TR(0x5126b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5126beull));
TAIL_STATIC(0x50b990u,50b);
}
B5126be:L5126be:{c.instructions+=3;NFSU2_TR(0x5126be);
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
B5126c1:{NFSU2_TR(0x5126c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5126c2:{NFSU2_TR(0x5126c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5126c3:L5126c3:{c.instructions+=4;NFSU2_TR(0x5126c3);
w4(R+0,u32(0xaull));
}
B5126c8:{NFSU2_TR(0x5126c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5126c9:{NFSU2_TR(0x5126c9);
w4(R+24,u32(0x79af44ull));
}
B5126ce:{NFSU2_TR(0x5126ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5126d3ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B5126d3:L5126d3:{c.instructions+=4;NFSU2_TR(0x5126d3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5126d4:{NFSU2_TR(0x5126d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5126d5:{NFSU2_TR(0x5126d5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5126d6:{NFSU2_TR(0x5126d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5126dbull));
TAIL_STATIC(0x50b990u,50b);
}
B5126db:L5126db:{c.instructions+=3;NFSU2_TR(0x5126db);
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
B5126de:{NFSU2_TR(0x5126de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5126df:{NFSU2_TR(0x5126df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5126e0:L5126e0:{c.instructions+=4;NFSU2_TR(0x5126e0);
w4(R+0,u32(0x8ull));
}
B5126e5:{NFSU2_TR(0x5126e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5126e6:{NFSU2_TR(0x5126e6);
w4(R+24,u32(0x79af28ull));
}
B5126eb:{NFSU2_TR(0x5126eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5126f0ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B5126f0:L5126f0:{c.instructions+=4;NFSU2_TR(0x5126f0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5126f1:{NFSU2_TR(0x5126f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5126f2:{NFSU2_TR(0x5126f2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5126f3:{NFSU2_TR(0x5126f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5126f8ull));
TAIL_STATIC(0x50b990u,50b);
}
B5126f8:L5126f8:{c.instructions+=3;NFSU2_TR(0x5126f8);
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
B5126fb:{NFSU2_TR(0x5126fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5126fc:{NFSU2_TR(0x5126fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5126fd:L5126fd:{c.instructions+=4;NFSU2_TR(0x5126fd);
w4(R+0,u32(0xbull));
}
B512702:{NFSU2_TR(0x512702);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512703:{NFSU2_TR(0x512703);
w4(R+24,u32(0x79af0cull));
}
B512708:{NFSU2_TR(0x512708);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51270dull));
TAIL_STATIC(0x43c1c0u,43c);
}
B51270d:L51270d:{c.instructions+=4;NFSU2_TR(0x51270d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B51270e:{NFSU2_TR(0x51270e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51270f:{NFSU2_TR(0x51270f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512710:{NFSU2_TR(0x512710);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x512715ull));
TAIL_STATIC(0x50b990u,50b);
}
B512715:L512715:{c.instructions+=3;NFSU2_TR(0x512715);
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
B512718:{NFSU2_TR(0x512718);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B512719:{NFSU2_TR(0x512719);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51271a:L51271a:{c.instructions+=2;NFSU2_TR(0x51271a);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B51271d:{NFSU2_TR(0x51271d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51273c;}}
}
B51271f:L51271f:{c.instructions+=4;NFSU2_TR(0x51271f);
w4(R+0,u32(0xcull));
}
B512724:{NFSU2_TR(0x512724);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512725:{NFSU2_TR(0x512725);
w4(R+24,u32(0x79aef4ull));
}
B51272a:{NFSU2_TR(0x51272a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51272full));
TAIL_STATIC(0x43c1c0u,43c);
}
B51272f:L51272f:{c.instructions+=4;NFSU2_TR(0x51272f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B512730:{NFSU2_TR(0x512730);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512731:{NFSU2_TR(0x512731);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512732:{NFSU2_TR(0x512732);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x512737ull));
TAIL_STATIC(0x50b990u,50b);
}
B512737:L512737:{c.instructions+=3;NFSU2_TR(0x512737);
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
B51273a:{NFSU2_TR(0x51273a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51273b:{NFSU2_TR(0x51273b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51273c:L51273c:{c.instructions+=3;NFSU2_TR(0x51273c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B512740:{NFSU2_TR(0x512740);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B512743:{NFSU2_TR(0x512743);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5127ce;}}
}
B512749:L512749:{c.instructions+=1;NFSU2_TR(0x512749);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5127fcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B512750:L512750:{c.instructions+=4;NFSU2_TR(0x512750);
w4(R+0,u32(0x12ull));
}
B512755:{NFSU2_TR(0x512755);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512756:{NFSU2_TR(0x512756);
w4(R+24,u32(0x79aed8ull));
}
B51275b:{NFSU2_TR(0x51275b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x512760ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B512760:L512760:{c.instructions+=4;NFSU2_TR(0x512760);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B512761:{NFSU2_TR(0x512761);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512762:{NFSU2_TR(0x512762);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512763:{NFSU2_TR(0x512763);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x512768ull));
TAIL_STATIC(0x50b990u,50b);
}
B512768:L512768:{c.instructions+=3;NFSU2_TR(0x512768);
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
B51276b:{NFSU2_TR(0x51276b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51276c:{NFSU2_TR(0x51276c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51276d:L51276d:{c.instructions+=4;NFSU2_TR(0x51276d);
w4(R+0,u32(0xfull));
}
B512772:{NFSU2_TR(0x512772);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512773:{NFSU2_TR(0x512773);
w4(R+24,u32(0x79aec0ull));
}
B512778:{NFSU2_TR(0x512778);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51277dull));
TAIL_STATIC(0x43c1c0u,43c);
}
B51277d:L51277d:{c.instructions+=4;NFSU2_TR(0x51277d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B51277e:{NFSU2_TR(0x51277e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51277f:{NFSU2_TR(0x51277f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512780:{NFSU2_TR(0x512780);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x512785ull));
TAIL_STATIC(0x50b990u,50b);
}
B512785:L512785:{c.instructions+=3;NFSU2_TR(0x512785);
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
B512788:{NFSU2_TR(0x512788);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B512789:{NFSU2_TR(0x512789);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51278a:L51278a:{c.instructions+=4;NFSU2_TR(0x51278a);
w4(R+0,u32(0xeull));
}
B51278f:{NFSU2_TR(0x51278f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512790:{NFSU2_TR(0x512790);
w4(R+24,u32(0x79aea8ull));
}
B512795:{NFSU2_TR(0x512795);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51279aull));
TAIL_STATIC(0x43c1c0u,43c);
}
B51279a:L51279a:{c.instructions+=4;NFSU2_TR(0x51279a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B51279b:{NFSU2_TR(0x51279b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51279c:{NFSU2_TR(0x51279c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51279d:{NFSU2_TR(0x51279d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5127a2ull));
TAIL_STATIC(0x50b990u,50b);
}
B5127a2:L5127a2:{c.instructions+=3;NFSU2_TR(0x5127a2);
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
B5127a5:{NFSU2_TR(0x5127a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5127a6:{NFSU2_TR(0x5127a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5127a7:L5127a7:{c.instructions+=4;NFSU2_TR(0x5127a7);
w4(R+0,u32(0xcull));
}
B5127ac:{NFSU2_TR(0x5127ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5127ad:{NFSU2_TR(0x5127ad);
w4(R+24,u32(0x79ae90ull));
}
B5127b2:{NFSU2_TR(0x5127b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5127b7ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B5127b7:L5127b7:{c.instructions+=4;NFSU2_TR(0x5127b7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5127b8:{NFSU2_TR(0x5127b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5127b9:{NFSU2_TR(0x5127b9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5127ba:{NFSU2_TR(0x5127ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5127bfull));
TAIL_STATIC(0x50b990u,50b);
}
B5127bf:L5127bf:{c.instructions+=3;NFSU2_TR(0x5127bf);
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
B5127c2:{NFSU2_TR(0x5127c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5127c3:{NFSU2_TR(0x5127c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5127c4:L5127c4:{c.instructions+=2;NFSU2_TR(0x5127c4);
w4(R+24,u32(0x79ae78ull));
}
B5127c9:{NFSU2_TR(0x5127c9);
w4(R+0,u32(0xdull));
}
B5127ce:L5127ce:{c.instructions+=2;NFSU2_TR(0x5127ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5127cf:{NFSU2_TR(0x5127cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5127d4ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B5127d4:L5127d4:{c.instructions+=4;NFSU2_TR(0x5127d4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5127d5:{NFSU2_TR(0x5127d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5127d6:{NFSU2_TR(0x5127d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5127d7:{NFSU2_TR(0x5127d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5127dcull));
TAIL_STATIC(0x50b990u,50b);
}
B5127dc:L5127dc:{c.instructions+=3;NFSU2_TR(0x5127dc);
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
B5127df:{NFSU2_TR(0x5127df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5127e0:{NFSU2_TR(0x5127e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B512820:L512820:{c.instructions+=3;NFSU2_TR(0x512820);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B512826:{NFSU2_TR(0x512826);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B512828:{NFSU2_TR(0x512828);
if(r1(R+518)){{goto L512840;}}
}
B51282a:L51282a:{c.instructions+=1;NFSU2_TR(0x51282a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51282full));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B51282f:L51282f:{c.instructions+=2;NFSU2_TR(0x51282f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B512831:{NFSU2_TR(0x512831);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51283d;}}
}
B512833:L512833:{c.instructions+=2;NFSU2_TR(0x512833);
w4(R+8,u32(0xc01a6f63ull));
}
B512838:{NFSU2_TR(0x512838);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51283dull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B51283d:L51283d:{c.instructions+=2;NFSU2_TR(0x51283d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51283e:{NFSU2_TR(0x51283e);
{goto L51284b;}
}
B512840:L512840:{c.instructions+=3;NFSU2_TR(0x512840);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B512844:{NFSU2_TR(0x512844);
w4(R+8,u32(u32(r4(R+8))+u32(m4(0x838428))));
}
B51284a:{NFSU2_TR(0x51284a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51284b:L51284b:{c.instructions+=6;NFSU2_TR(0x51284b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51284f:{NFSU2_TR(0x51284f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B512853:{NFSU2_TR(0x512853);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512858:{NFSU2_TR(0x512858);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512859:{NFSU2_TR(0x512859);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51285a:{NFSU2_TR(0x51285a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51285full));
TAIL_STATIC(0x50c960u,50c);
}
B51285f:L51285f:{c.instructions+=2;NFSU2_TR(0x51285f);
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
B512862:{NFSU2_TR(0x512862);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B512870:L512870:{c.instructions+=5;NFSU2_TR(0x512870);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512871:{NFSU2_TR(0x512871);
__builtin_memmove((R+24),(R+4),4);
}
B512873:{NFSU2_TR(0x512873);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B512879:{NFSU2_TR(0x512879);
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
B51287b:{NFSU2_TR(0x51287b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L512881;}}
}
B51287d:L51287d:{c.instructions+=3;NFSU2_TR(0x51287d);
w1(R+0,u8(0x1ull));
}
B51287f:{NFSU2_TR(0x51287f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B512880:{NFSU2_TR(0x512880);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B512881:L512881:{c.instructions+=2;NFSU2_TR(0x512881);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B512883:{NFSU2_TR(0x512883);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L512895;}}
}
B512885:L512885:{c.instructions+=4;NFSU2_TR(0x512885);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B512888:{NFSU2_TR(0x512888);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512889:{NFSU2_TR(0x512889);
w4(R+4,u32(0x85ad40ull));
}
B51288e:{NFSU2_TR(0x51288e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x512893ull));
TAIL_STATIC(0x500b80u,500);
}
B512893:L512893:{c.instructions+=2;NFSU2_TR(0x512893);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B512894:{NFSU2_TR(0x512894);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B512895:L512895:{c.instructions+=2;NFSU2_TR(0x512895);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B512897:{NFSU2_TR(0x512897);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5128bf;}}
}
B512899:L512899:{c.instructions+=4;NFSU2_TR(0x512899);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5128a0:{NFSU2_TR(0x5128a0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5128a6:{NFSU2_TR(0x5128a6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x862018ull))));
}
B5128ac:{NFSU2_TR(0x5128ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5128b1ull));
TAIL_STATIC(0x500520u,500);
}
B5128b1:L5128b1:{c.instructions+=7;NFSU2_TR(0x5128b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5128b4:{NFSU2_TR(0x5128b4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5128b6:{NFSU2_TR(0x5128b6);
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
B5128b8:{NFSU2_TR(0x5128b8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+4),(U+1),1);
}
B5128bb:{NFSU2_TR(0x5128bb);
__builtin_memmove((R+0),(R+4),1);
}
B5128bd:{NFSU2_TR(0x5128bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5128be:{NFSU2_TR(0x5128be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5128bf:L5128bf:{c.instructions+=2;NFSU2_TR(0x5128bf);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5128c1:{NFSU2_TR(0x5128c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5128e9;}}
}
B5128c3:L5128c3:{c.instructions+=4;NFSU2_TR(0x5128c3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5128ca:{NFSU2_TR(0x5128ca);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5128d0:{NFSU2_TR(0x5128d0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x862018ull))));
}
B5128d6:{NFSU2_TR(0x5128d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5128dbull));
TAIL_STATIC(0x5004d0u,500);
}
B5128db:L5128db:{c.instructions+=7;NFSU2_TR(0x5128db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5128de:{NFSU2_TR(0x5128de);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5128e0:{NFSU2_TR(0x5128e0);
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
B5128e2:{NFSU2_TR(0x5128e2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+8),(U+1),1);
}
B5128e5:{NFSU2_TR(0x5128e5);
__builtin_memmove((R+0),(R+8),1);
}
B5128e7:{NFSU2_TR(0x5128e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5128e8:{NFSU2_TR(0x5128e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5128e9:L5128e9:{c.instructions+=2;NFSU2_TR(0x5128e9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5128eb:{NFSU2_TR(0x5128eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L512913;}}
}
B5128ed:L5128ed:{c.instructions+=4;NFSU2_TR(0x5128ed);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5128f4:{NFSU2_TR(0x5128f4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5128fa:{NFSU2_TR(0x5128fa);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x862018ull))));
}
B512900:{NFSU2_TR(0x512900);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x512905ull));
TAIL_STATIC(0x5005a0u,500);
}
B512905:L512905:{c.instructions+=7;NFSU2_TR(0x512905);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B512908:{NFSU2_TR(0x512908);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B51290a:{NFSU2_TR(0x51290a);
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
B51290c:{NFSU2_TR(0x51290c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+4),(U+1),1);
}
B51290f:{NFSU2_TR(0x51290f);
__builtin_memmove((R+0),(R+4),1);
}
B512911:{NFSU2_TR(0x512911);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B512912:{NFSU2_TR(0x512912);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B512913:L512913:{c.instructions+=3;NFSU2_TR(0x512913);
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
B512915:{NFSU2_TR(0x512915);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B512916:{NFSU2_TR(0x512916);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B512920:L512920:{c.instructions+=3;NFSU2_TR(0x512920);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B512923:{NFSU2_TR(0x512923);
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
B512925:{NFSU2_TR(0x512925);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51292d;}}
}
B512927:L512927:{c.instructions+=2;NFSU2_TR(0x512927);
w4(R+0,u32(0x987eecdaull));
}
B51292c:{NFSU2_TR(0x51292c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51292d:L51292d:{c.instructions+=6;NFSU2_TR(0x51292d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B512930:{NFSU2_TR(0x512930);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512931:{NFSU2_TR(0x512931);
__builtin_memmove((R+24),gp(0x86283c),4);
}
B512937:{NFSU2_TR(0x512937);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B512939:{NFSU2_TR(0x512939);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51293b:{NFSU2_TR(0x51293b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L512961;}}
}
B51293d:L51293d:{c.instructions+=1;NFSU2_TR(0x51293d);
__builtin_memmove((R+4),(R+4),4);
}
B512940:L512940:{c.instructions+=2;NFSU2_TR(0x512940);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x862840ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+8))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B512947:{NFSU2_TR(0x512947);
if(r1(R+518)){{goto L512950;}}
}
B512949:L512949:{c.instructions+=3;NFSU2_TR(0x512949);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B51294a:{NFSU2_TR(0x51294a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B51294c:{NFSU2_TR(0x51294c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x512940u);}goto L512940;}}
}
B51294e:L51294e:{c.instructions+=1;NFSU2_TR(0x51294e);
{goto L512961;}
}
B512950:L512950:{c.instructions+=3;NFSU2_TR(0x512950);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x862840ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B512957:{NFSU2_TR(0x512957);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B512959:{NFSU2_TR(0x512959);
if(r1(R+518)){{goto L512961;}}
}
B51295b:L51295b:{c.instructions+=2;NFSU2_TR(0x51295b);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x5ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x5ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B51295f:{NFSU2_TR(0x51295f);
if(r1(R+518)){{goto L51297c;}}
}
B512961:L512961:{c.instructions+=3;NFSU2_TR(0x512961);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512962:{NFSU2_TR(0x512962);
u8 U[4];
w4(U+0,u32(0x79afc8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512967:{NFSU2_TR(0x512967);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51296cull));
TAIL_STATIC(0x50b990u,50b);
}
B51296c:L51296c:{c.instructions+=3;NFSU2_TR(0x51296c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B51296f:{NFSU2_TR(0x51296f);
__builtin_memmove((R+8),(R+0),4);
}
B512971:{NFSU2_TR(0x512971);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x512976ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B512976:L512976:{c.instructions+=3;NFSU2_TR(0x512976);
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
B512978:{NFSU2_TR(0x512978);
__builtin_memmove((R+0),(R+8),4);
}
B51297a:{NFSU2_TR(0x51297a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L512981;}}
}
B51297c:L51297c:{c.instructions+=1;NFSU2_TR(0x51297c);
w4(R+0,u32(0x15d6b438ull));
}
B512981:L512981:{c.instructions+=2;NFSU2_TR(0x512981);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B512982:{NFSU2_TR(0x512982);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B512990:L512990:{c.instructions+=7;NFSU2_TR(0x512990);
__builtin_memmove((R+0),gp(0x838410),4);
}
B512995:{NFSU2_TR(0x512995);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512996:{NFSU2_TR(0x512996);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512997:{NFSU2_TR(0x512997);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B512999:{NFSU2_TR(0x512999);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51299b:{NFSU2_TR(0x51299b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51299c:{NFSU2_TR(0x51299c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5129d9;}}
}
B51299e:L51299e:{c.instructions+=3;NFSU2_TR(0x51299e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5129a2:{NFSU2_TR(0x5129a2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5129a4:{NFSU2_TR(0x5129a4);
{goto L5129b0;}
}
B5129b0:L5129b0:{c.instructions+=5;NFSU2_TR(0x5129b0);
__builtin_memmove((R+0),gp(0x838414),4);
}
B5129b5:{NFSU2_TR(0x5129b5);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+4,u32(r2(U+8)));
}
B5129b9:{NFSU2_TR(0x5129b9);
w4(R+4,u32(u32(r4(R+4))+u32(m4(0x838428))));
}
B5129bf:{NFSU2_TR(0x5129bf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5129c0:{NFSU2_TR(0x5129c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5129c5ull));
TAIL_STATIC(0x43db50u,43d);
}
B5129c5:L5129c5:{c.instructions+=3;NFSU2_TR(0x5129c5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5129c8:{NFSU2_TR(0x5129c8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5129ca:{NFSU2_TR(0x5129ca);
if(r1(R+518)){{goto L5129df;}}
}
B5129cc:L5129cc:{c.instructions+=5;NFSU2_TR(0x5129cc);
__builtin_memmove((R+0),gp(0x838410),4);
}
B5129d1:{NFSU2_TR(0x5129d1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5129d2:{NFSU2_TR(0x5129d2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B5129d5:{NFSU2_TR(0x5129d5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5129d7:{NFSU2_TR(0x5129d7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5129b0u);}goto L5129b0;}}
}
B5129d9:L5129d9:{c.instructions+=5;NFSU2_TR(0x5129d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5129da:{NFSU2_TR(0x5129da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5129db:{NFSU2_TR(0x5129db);
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
B5129dd:{NFSU2_TR(0x5129dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5129de:{NFSU2_TR(0x5129de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5129df:L5129df:{c.instructions+=8;NFSU2_TR(0x5129df);
__builtin_memmove((R+4),gp(0x838414),4);
}
B5129e5:{NFSU2_TR(0x5129e5);
__builtin_memmove((R+0),(R+24),4);
}
B5129e7:{NFSU2_TR(0x5129e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5129e8:{NFSU2_TR(0x5129e8);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5129eb:{NFSU2_TR(0x5129eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5129ec:{NFSU2_TR(0x5129ec);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+4)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5129ee:{NFSU2_TR(0x5129ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5129ef:{NFSU2_TR(0x5129ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5129f0:L5129f0:{c.instructions+=5;NFSU2_TR(0x5129f0);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(r2(U+0)));
}
B5129f3:{NFSU2_TR(0x5129f3);
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x838428))));
}
B5129f9:{NFSU2_TR(0x5129f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5129fa:{NFSU2_TR(0x5129fa);
u8 U[4];
w4(U+0,u32(0x79afd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5129ff:{NFSU2_TR(0x5129ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x512a04ull));
TAIL_STATIC(0x50b990u,50b);
}
B512a04:L512a04:{c.instructions+=2;NFSU2_TR(0x512a04);
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
B512a07:{NFSU2_TR(0x512a07);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B512a10:L512a10:{c.instructions+=8;NFSU2_TR(0x512a10);
__builtin_memmove((R+0),gp(0x838420),4);
}
B512a15:{NFSU2_TR(0x512a15);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512a16:{NFSU2_TR(0x512a16);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512a17:{NFSU2_TR(0x512a17);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512a18:{NFSU2_TR(0x512a18);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B512a1a:{NFSU2_TR(0x512a1a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B512a1c:{NFSU2_TR(0x512a1c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512a1d:{NFSU2_TR(0x512a1d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L512a5f;}}
}
B512a1f:L512a1f:{c.instructions+=3;NFSU2_TR(0x512a1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B512a23:{NFSU2_TR(0x512a23);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B512a25:{NFSU2_TR(0x512a25);
{goto L512a30;}
}
B512a30:L512a30:{c.instructions+=7;NFSU2_TR(0x512a30);
__builtin_memmove((R+0),gp(0x838424),4);
}
B512a35:{NFSU2_TR(0x512a35);
u8 U[14];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+4,u32(r2(U+12)));
}
B512a3a:{NFSU2_TR(0x512a3a);
__builtin_memmove((R+8),gp(0x838428),4);
}
B512a40:{NFSU2_TR(0x512a40);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B512a43:{NFSU2_TR(0x512a43);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B512a45:{NFSU2_TR(0x512a45);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512a46:{NFSU2_TR(0x512a46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x512a4bull));
TAIL_STATIC(0x43db50u,43d);
}
B512a4b:L512a4b:{c.instructions+=3;NFSU2_TR(0x512a4b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B512a4e:{NFSU2_TR(0x512a4e);
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
B512a50:{NFSU2_TR(0x512a50);
if(r1(R+518)){{goto L512a66;}}
}
B512a52:L512a52:{c.instructions+=5;NFSU2_TR(0x512a52);
__builtin_memmove((R+0),gp(0x838420),4);
}
B512a57:{NFSU2_TR(0x512a57);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B512a58:{NFSU2_TR(0x512a58);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x18ull))));
}
B512a5b:{NFSU2_TR(0x512a5b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B512a5d:{NFSU2_TR(0x512a5d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x512a30u);}goto L512a30;}}
}
B512a5f:L512a5f:{c.instructions+=6;NFSU2_TR(0x512a5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B512a60:{NFSU2_TR(0x512a60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B512a61:{NFSU2_TR(0x512a61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B512a62:{NFSU2_TR(0x512a62);
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
B512a64:{NFSU2_TR(0x512a64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B512a65:{NFSU2_TR(0x512a65);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B512a66:L512a66:{c.instructions+=6;NFSU2_TR(0x512a66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B512a67:{NFSU2_TR(0x512a67);
__builtin_memmove((R+0),(R+24),4);
}
B512a69:{NFSU2_TR(0x512a69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B512a6a:{NFSU2_TR(0x512a6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B512a6b:{NFSU2_TR(0x512a6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B512a6c:{NFSU2_TR(0x512a6c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B512a70:L512a70:{c.instructions+=10;NFSU2_TR(0x512a70);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B512a74:{NFSU2_TR(0x512a74);
__builtin_memmove(gp(0x83841c),(R+0),4);
}
B512a79:{NFSU2_TR(0x512a79);
w4(R+0,u32(0xcccccccdull));
}
B512a7e:{NFSU2_TR(0x512a7e);
u8 U[32];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w8(U+8,u64(r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(r4(U+4)));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(u64(r8(U+24))>>32));
w4(R+0,u32(r8(U+24)));
}
B512a82:{NFSU2_TR(0x512a82);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B512a85:{NFSU2_TR(0x512a85);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512a86:{NFSU2_TR(0x512a86);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B512a88:{NFSU2_TR(0x512a88);
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
B512a8a:{NFSU2_TR(0x512a8a);
__builtin_memmove(gp(0x838418),(R+8),4);
}
B512a90:{NFSU2_TR(0x512a90);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L512ad3;}}
}
B512a92:L512a92:{c.instructions+=5;NFSU2_TR(0x512a92);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512a93:{NFSU2_TR(0x512a93);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512a94:{NFSU2_TR(0x512a94);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512a95:{NFSU2_TR(0x512a95);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B512a97:{NFSU2_TR(0x512a97);
{goto L512aa0;}
}
B512aa0:L512aa0:{c.instructions+=4;NFSU2_TR(0x512aa0);
__builtin_memmove((R+4),gp(0x83841c),4);
}
B512aa6:{NFSU2_TR(0x512aa6);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B512aaa:{NFSU2_TR(0x512aaa);
w4(R+28,u32(0x5ull));
}
B512aaf:{NFSU2_TR(0x512aaf);
}
B512ab0:L512ab0:{c.instructions+=3;NFSU2_TR(0x512ab0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B512ab2:{NFSU2_TR(0x512ab2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512ab3:{NFSU2_TR(0x512ab3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x512ab8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x512990u);}goto L512990;}
}
B512ab8:L512ab8:{c.instructions+=5;NFSU2_TR(0x512ab8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B512aba:{NFSU2_TR(0x512aba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B512abd:{NFSU2_TR(0x512abd);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B512ac0:{NFSU2_TR(0x512ac0);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B512ac1:{NFSU2_TR(0x512ac1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x512ab0u);}goto L512ab0;}}
}
B512ac3:L512ac3:{c.instructions+=5;NFSU2_TR(0x512ac3);
__builtin_memmove((R+0),gp(0x838418),4);
}
B512ac8:{NFSU2_TR(0x512ac8);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B512ac9:{NFSU2_TR(0x512ac9);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x50ull))));
}
B512acc:{NFSU2_TR(0x512acc);
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
B512ace:{NFSU2_TR(0x512ace);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x512aa0u);}goto L512aa0;}}
}
B512ad0:L512ad0:{c.instructions+=3;NFSU2_TR(0x512ad0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B512ad1:{NFSU2_TR(0x512ad1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B512ad2:{NFSU2_TR(0x512ad2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B512ad3:L512ad3:{c.instructions+=2;NFSU2_TR(0x512ad3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B512ad4:{NFSU2_TR(0x512ad4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B512ae0:L512ae0:{c.instructions+=4;NFSU2_TR(0x512ae0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B512ae4:{NFSU2_TR(0x512ae4);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B512ae7:{NFSU2_TR(0x512ae7);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+512,u8((r1(U+3))<(u8(0x2ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x2ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B512aea:{NFSU2_TR(0x512aea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L512af2;}}
}
B512aec:L512aec:{c.instructions+=2;NFSU2_TR(0x512aec);
w4(R+0,u32(0x6ull));
}
B512af1:{NFSU2_TR(0x512af1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B512af2:L512af2:{c.instructions+=3;NFSU2_TR(0x512af2);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B512af5:{NFSU2_TR(0x512af5);
w4(R+0,u32(0x1ull));
}
B512afa:{NFSU2_TR(0x512afa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L512b01;}}
}
B512afc:L512afc:{c.instructions+=2;NFSU2_TR(0x512afc);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+0))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B512aff:{NFSU2_TR(0x512aff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L512b0a;}}
}
B512b01:L512b01:{c.instructions+=2;NFSU2_TR(0x512b01);
u8 U[2];
__builtin_memmove((U+0),(R+0),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B512b03:{NFSU2_TR(0x512b03);
if(r1(R+518)){{goto L512b0a;}}
}
B512b05:L512b05:{c.instructions+=2;NFSU2_TR(0x512b05);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+0))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B512b08:{NFSU2_TR(0x512b08);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L512b32;}}
}
B512b0a:L512b0a:{c.instructions+=3;NFSU2_TR(0x512b0a);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B512b0e:{NFSU2_TR(0x512b0e);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B512b11:{NFSU2_TR(0x512b11);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L512b32;}}
}
B512b13:L512b13:{c.instructions+=1;NFSU2_TR(0x512b13);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x512b38ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B512b1a:L512b1a:{c.instructions+=2;NFSU2_TR(0x512b1a);
w4(R+0,u32(0x2ull));
}
B512b1f:{NFSU2_TR(0x512b1f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B512b20:L512b20:{c.instructions+=2;NFSU2_TR(0x512b20);
w4(R+0,u32(0x3ull));
}
B512b25:{NFSU2_TR(0x512b25);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B512b26:L512b26:{c.instructions+=2;NFSU2_TR(0x512b26);
w4(R+0,u32(0x4ull));
}
B512b2b:{NFSU2_TR(0x512b2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B512b2c:L512b2c:{c.instructions+=2;NFSU2_TR(0x512b2c);
w4(R+0,u32(0x5ull));
}
B512b31:{NFSU2_TR(0x512b31);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B512b32:L512b32:{c.instructions+=2;NFSU2_TR(0x512b32);
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
B512b34:{NFSU2_TR(0x512b34);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B512b50:L512b50:{c.instructions+=7;NFSU2_TR(0x512b50);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512b51:{NFSU2_TR(0x512b51);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B512b55:{NFSU2_TR(0x512b55);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512b56:{NFSU2_TR(0x512b56);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512b57:{NFSU2_TR(0x512b57);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B512b59:{NFSU2_TR(0x512b59);
w4(R+28,u32(0x7f7ac8ull));
}
B512b5e:{NFSU2_TR(0x512b5e);
__builtin_memmove((R+28),(R+28),4);
}
B512b60:L512b60:{c.instructions+=2;NFSU2_TR(0x512b60);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512b61:{NFSU2_TR(0x512b61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x512b66ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x512ae0u);}goto L512ae0;}
}
B512b66:L512b66:{c.instructions+=4;NFSU2_TR(0x512b66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B512b68:{NFSU2_TR(0x512b68);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B512b6b:{NFSU2_TR(0x512b6b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B512b6d:{NFSU2_TR(0x512b6d);
if(r1(R+518)){{goto L512b85;}}
}
B512b6f:L512b6f:{c.instructions+=4;NFSU2_TR(0x512b6f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1cull))));
}
B512b72:{NFSU2_TR(0x512b72);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B512b73:{NFSU2_TR(0x512b73);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x7f7b8cull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7f7b8cull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7f7b8cull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B512b79:{NFSU2_TR(0x512b79);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x512b60u);}goto L512b60;}}
}
B512b7b:L512b7b:{c.instructions+=5;NFSU2_TR(0x512b7b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B512b81:{NFSU2_TR(0x512b81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B512b82:{NFSU2_TR(0x512b82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B512b83:{NFSU2_TR(0x512b83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B512b84:{NFSU2_TR(0x512b84);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B512b85:L512b85:{c.instructions+=4;NFSU2_TR(0x512b85);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B512b88:{NFSU2_TR(0x512b88);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x7f7ac8ull))));
}
B512b8e:{NFSU2_TR(0x512b8e);
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
B512b90:{NFSU2_TR(0x512b90);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x512b7bu);}goto L512b7b;}}
}
B512b92:L512b92:{c.instructions+=5;NFSU2_TR(0x512b92);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B512b96:{NFSU2_TR(0x512b96);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B512b99:{NFSU2_TR(0x512b99);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B512b9b:{NFSU2_TR(0x512b9b);
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
B512b9e:{NFSU2_TR(0x512b9e);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x512b7bu);}goto L512b7b;}}
}
B512ba0:L512ba0:{c.instructions+=5;NFSU2_TR(0x512ba0);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B512ba4:{NFSU2_TR(0x512ba4);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B512ba7:{NFSU2_TR(0x512ba7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B512ba9:{NFSU2_TR(0x512ba9);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B512bac:{NFSU2_TR(0x512bac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L512bc3;}}
}
B512bae:L512bae:{c.instructions+=5;NFSU2_TR(0x512bae);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B512bb2:{NFSU2_TR(0x512bb2);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B512bb5:{NFSU2_TR(0x512bb5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B512bb7:{NFSU2_TR(0x512bb7);
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
B512bba:{NFSU2_TR(0x512bba);
if(r1(R+514)){{goto L512bc3;}}
}
B512bbc:L512bbc:{c.instructions+=5;NFSU2_TR(0x512bbc);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B512bbf:{NFSU2_TR(0x512bbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B512bc0:{NFSU2_TR(0x512bc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B512bc1:{NFSU2_TR(0x512bc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B512bc2:{NFSU2_TR(0x512bc2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B512bc3:L512bc3:{c.instructions+=5;NFSU2_TR(0x512bc3);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B512bc7:{NFSU2_TR(0x512bc7);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B512bca:{NFSU2_TR(0x512bca);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B512bcc:{NFSU2_TR(0x512bcc);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B512bcf:{NFSU2_TR(0x512bcf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L512be6;}}
}
B512bd1:L512bd1:{c.instructions+=5;NFSU2_TR(0x512bd1);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B512bd5:{NFSU2_TR(0x512bd5);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B512bd8:{NFSU2_TR(0x512bd8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B512bda:{NFSU2_TR(0x512bda);
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
B512bdd:{NFSU2_TR(0x512bdd);
if(r1(R+514)){{goto L512be6;}}
}
B512bdf:L512bdf:{c.instructions+=5;NFSU2_TR(0x512bdf);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B512be2:{NFSU2_TR(0x512be2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B512be3:{NFSU2_TR(0x512be3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B512be4:{NFSU2_TR(0x512be4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B512be5:{NFSU2_TR(0x512be5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B512be6:L512be6:{c.instructions+=5;NFSU2_TR(0x512be6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B512bea:{NFSU2_TR(0x512bea);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B512bed:{NFSU2_TR(0x512bed);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B512bef:{NFSU2_TR(0x512bef);
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
B512bf2:{NFSU2_TR(0x512bf2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x512b7bu);}goto L512b7b;}}
}
B512bf4:L512bf4:{c.instructions+=5;NFSU2_TR(0x512bf4);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B512bf7:{NFSU2_TR(0x512bf7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B512bf8:{NFSU2_TR(0x512bf8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B512bf9:{NFSU2_TR(0x512bf9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B512bfa:{NFSU2_TR(0x512bfa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B512c00:L512c00:{c.instructions+=4;NFSU2_TR(0x512c00);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512c01:{NFSU2_TR(0x512c01);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B512c05:{NFSU2_TR(0x512c05);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x80034a10ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B512c0b:{NFSU2_TR(0x512c0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L512dd5;}}
}
B512c11:L512c11:{c.instructions+=3;NFSU2_TR(0x512c11);
__builtin_memmove((R+0),gp(0x8641f4),4);
}
B512c16:{NFSU2_TR(0x512c16);
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
B512c18:{NFSU2_TR(0x512c18);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L512dce;}}
}
B512c1e:L512c1e:{c.instructions+=3;NFSU2_TR(0x512c1e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512c1f:{NFSU2_TR(0x512c1f);
s4(0x8641f4,u32(0x1ull));
}
B512c29:{NFSU2_TR(0x512c29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x512c2eull));
TAIL_STATIC(0x501920u,501);
}
B512c2e:L512c2e:{c.instructions+=5;NFSU2_TR(0x512c2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B512c31:{NFSU2_TR(0x512c31);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B512c34:{NFSU2_TR(0x512c34);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B512c38:{NFSU2_TR(0x512c38);
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
B512c3a:{NFSU2_TR(0x512c3a);
if(r1(R+518)){{goto L512dc6;}}
}
B512c40:L512c40:{c.instructions+=4;NFSU2_TR(0x512c40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B512c42:{NFSU2_TR(0x512c42);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffcb5efull))));
}
B512c47:{NFSU2_TR(0x512c47);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xeull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xeull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xeull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B512c4a:{NFSU2_TR(0x512c4a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L512db7;}}
}
B512c50:L512c50:{c.instructions+=1;NFSU2_TR(0x512c50);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x512ddcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B512c57:L512c57:{c.instructions+=5;NFSU2_TR(0x512c57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B512c5a:{NFSU2_TR(0x512c5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B512c5d:{NFSU2_TR(0x512c5d);
__builtin_memmove(gp(0x838428),(R+4),4);
}
B512c63:{NFSU2_TR(0x512c63);
__builtin_memmove(gp(0x83842c),(R+8),4);
}
B512c69:{NFSU2_TR(0x512c69);
{goto L512db7;}
}
B512c6e:L512c6e:{c.instructions+=7;NFSU2_TR(0x512c6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B512c71:{NFSU2_TR(0x512c71);
__builtin_memmove(gp(0x8383f0),(R+0),4);
}
B512c76:{NFSU2_TR(0x512c76);
w4(R+0,u32(0xcccccccdull));
}
B512c7b:{NFSU2_TR(0x512c7b);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w8(U+8,u64(r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(r4(U+4)));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(u64(r8(U+24))>>32));
w4(R+0,u32(r8(U+24)));
}
B512c7e:{NFSU2_TR(0x512c7e);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B512c81:{NFSU2_TR(0x512c81);
__builtin_memmove(gp(0x8383f4),(R+8),4);
}
B512c87:{NFSU2_TR(0x512c87);
{goto L512db7;}
}
B512c8c:L512c8c:{c.instructions+=7;NFSU2_TR(0x512c8c);
w4(R+0,u32(0xf0f0f0f1ull));
}
B512c91:{NFSU2_TR(0x512c91);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w8(U+8,u64(r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(r4(U+4)));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(u64(r8(U+24))>>32));
w4(R+0,u32(r8(U+24)));
}
B512c94:{NFSU2_TR(0x512c94);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B512c97:{NFSU2_TR(0x512c97);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B512c9a:{NFSU2_TR(0x512c9a);
__builtin_memmove(gp(0x8383e0),(R+4),4);
}
B512ca0:{NFSU2_TR(0x512ca0);
__builtin_memmove(gp(0x8383e4),(R+8),4);
}
B512ca6:{NFSU2_TR(0x512ca6);
{goto L512db7;}
}
B512cab:L512cab:{c.instructions+=7;NFSU2_TR(0x512cab);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B512cae:{NFSU2_TR(0x512cae);
__builtin_memmove(gp(0x838400),(R+8),4);
}
B512cb4:{NFSU2_TR(0x512cb4);
w4(R+0,u32(0xf0f0f0f1ull));
}
B512cb9:{NFSU2_TR(0x512cb9);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w8(U+8,u64(r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(r4(U+4)));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(u64(r8(U+24))>>32));
w4(R+0,u32(r8(U+24)));
}
B512cbc:{NFSU2_TR(0x512cbc);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B512cbf:{NFSU2_TR(0x512cbf);
__builtin_memmove(gp(0x838404),(R+8),4);
}
B512cc5:{NFSU2_TR(0x512cc5);
{goto L512db7;}
}
B512cca:L512cca:{c.instructions+=5;NFSU2_TR(0x512cca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B512ccd:{NFSU2_TR(0x512ccd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512cce:{NFSU2_TR(0x512cce);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B512cd1:{NFSU2_TR(0x512cd1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512cd2:{NFSU2_TR(0x512cd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x512cd7ull));
TAIL_STATIC(0x500000u,500);
}
B512cd7:L512cd7:{c.instructions+=2;NFSU2_TR(0x512cd7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B512cda:{NFSU2_TR(0x512cda);
{goto L512db7;}
}
B512cdf:L512cdf:{c.instructions+=6;NFSU2_TR(0x512cdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B512ce2:{NFSU2_TR(0x512ce2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B512ce5:{NFSU2_TR(0x512ce5);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B512ce8:{NFSU2_TR(0x512ce8);
__builtin_memmove(gp(0x83840c),(R+8),4);
}
B512cee:{NFSU2_TR(0x512cee);
__builtin_memmove(gp(0x838408),(R+0),4);
}
B512cf3:{NFSU2_TR(0x512cf3);
{goto L512db7;}
}
B512cf8:L512cf8:{c.instructions+=5;NFSU2_TR(0x512cf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B512cfb:{NFSU2_TR(0x512cfb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512cfc:{NFSU2_TR(0x512cfc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B512cff:{NFSU2_TR(0x512cff);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512d00:{NFSU2_TR(0x512d00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x512d05ull));
TAIL_STATIC(0x5012f0u,501);
}
B512d05:L512d05:{c.instructions+=2;NFSU2_TR(0x512d05);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B512d08:{NFSU2_TR(0x512d08);
{goto L512db7;}
}
B512d0d:L512d0d:{c.instructions+=5;NFSU2_TR(0x512d0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B512d10:{NFSU2_TR(0x512d10);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512d11:{NFSU2_TR(0x512d11);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B512d14:{NFSU2_TR(0x512d14);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512d15:{NFSU2_TR(0x512d15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x512d1aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x512a70u);}goto L512a70;}
}
B512d1a:L512d1a:{c.instructions+=2;NFSU2_TR(0x512d1a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B512d1d:{NFSU2_TR(0x512d1d);
{goto L512db7;}
}
B512d22:L512d22:{c.instructions+=6;NFSU2_TR(0x512d22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B512d25:{NFSU2_TR(0x512d25);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B512d28:{NFSU2_TR(0x512d28);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B512d2b:{NFSU2_TR(0x512d2b);
__builtin_memmove(gp(0x838414),(R+8),4);
}
B512d31:{NFSU2_TR(0x512d31);
__builtin_memmove(gp(0x838410),(R+0),4);
}
B512d36:{NFSU2_TR(0x512d36);
{goto L512db7;}
}
B512d38:L512d38:{c.instructions+=7;NFSU2_TR(0x512d38);
w4(R+0,u32(0xaaaaaaabull));
}
B512d3d:{NFSU2_TR(0x512d3d);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w8(U+8,u64(r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(r4(U+4)));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(u64(r8(U+24))>>32));
w4(R+0,u32(r8(U+24)));
}
B512d40:{NFSU2_TR(0x512d40);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B512d43:{NFSU2_TR(0x512d43);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B512d46:{NFSU2_TR(0x512d46);
__builtin_memmove(gp(0x838424),(R+4),4);
}
B512d4c:{NFSU2_TR(0x512d4c);
__builtin_memmove(gp(0x838420),(R+8),4);
}
B512d52:{NFSU2_TR(0x512d52);
{goto L512db7;}
}
B512d54:L512d54:{c.instructions+=5;NFSU2_TR(0x512d54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B512d57:{NFSU2_TR(0x512d57);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512d58:{NFSU2_TR(0x512d58);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B512d5b:{NFSU2_TR(0x512d5b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512d5c:{NFSU2_TR(0x512d5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x512d61ull));
TAIL_STATIC(0x59ae20u,59a);
}
B512d61:L512d61:{c.instructions+=2;NFSU2_TR(0x512d61);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B512d64:{NFSU2_TR(0x512d64);
{goto L512db7;}
}
B512d66:L512d66:{c.instructions+=7;NFSU2_TR(0x512d66);
w4(R+0,u32(0xcccccccdull));
}
B512d6b:{NFSU2_TR(0x512d6b);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w8(U+8,u64(r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(r4(U+4)));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(u64(r8(U+24))>>32));
w4(R+0,u32(r8(U+24)));
}
B512d6e:{NFSU2_TR(0x512d6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B512d71:{NFSU2_TR(0x512d71);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B512d74:{NFSU2_TR(0x512d74);
__builtin_memmove(gp(0x83845c),(R+4),4);
}
B512d7a:{NFSU2_TR(0x512d7a);
__builtin_memmove(gp(0x838460),(R+8),4);
}
B512d80:{NFSU2_TR(0x512d80);
{goto L512db7;}
}
B512d82:L512d82:{c.instructions+=7;NFSU2_TR(0x512d82);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B512d85:{NFSU2_TR(0x512d85);
__builtin_memmove(gp(0x838430),(R+8),4);
}
B512d8b:{NFSU2_TR(0x512d8b);
w4(R+0,u32(0xaaaaaaabull));
}
B512d90:{NFSU2_TR(0x512d90);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w8(U+8,u64(r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(r4(U+4)));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(u64(r8(U+24))>>32));
w4(R+0,u32(r8(U+24)));
}
B512d93:{NFSU2_TR(0x512d93);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B512d96:{NFSU2_TR(0x512d96);
__builtin_memmove(gp(0x838434),(R+8),4);
}
B512d9c:{NFSU2_TR(0x512d9c);
{goto L512db7;}
}
B512d9e:L512d9e:{c.instructions+=6;NFSU2_TR(0x512d9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B512da1:{NFSU2_TR(0x512da1);
__builtin_memmove(gp(0x838438),(R+0),4);
}
B512da6:{NFSU2_TR(0x512da6);
w4(R+0,u32(0xaaaaaaabull));
}
B512dab:{NFSU2_TR(0x512dab);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w8(U+8,u64(r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(r4(U+4)));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(u64(r8(U+24))>>32));
w4(R+0,u32(r8(U+24)));
}
B512dae:{NFSU2_TR(0x512dae);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B512db1:{NFSU2_TR(0x512db1);
__builtin_memmove(gp(0x83843c),(R+8),4);
}
B512db7:L512db7:{c.instructions+=4;NFSU2_TR(0x512db7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B512dba:{NFSU2_TR(0x512dba);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B512dbe:{NFSU2_TR(0x512dbe);
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
B512dc0:{NFSU2_TR(0x512dc0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x512c40u);}goto L512c40;}}
}
B512dc6:L512dc6:{c.instructions+=4;NFSU2_TR(0x512dc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B512dc7:{NFSU2_TR(0x512dc7);
w4(R+0,u32(0x1ull));
}
B512dcc:{NFSU2_TR(0x512dcc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B512dcd:{NFSU2_TR(0x512dcd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B512dce:L512dce:{c.instructions+=3;NFSU2_TR(0x512dce);
w4(R+0,u32(0x1ull));
}
B512dd3:{NFSU2_TR(0x512dd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B512dd4:{NFSU2_TR(0x512dd4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B512dd5:L512dd5:{c.instructions+=3;NFSU2_TR(0x512dd5);
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
B512dd7:{NFSU2_TR(0x512dd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B512dd8:{NFSU2_TR(0x512dd8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B512e20:L512e20:{c.instructions+=5;NFSU2_TR(0x512e20);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B512e24:{NFSU2_TR(0x512e24);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B512e25:{NFSU2_TR(0x512e25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512e26:{NFSU2_TR(0x512e26);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B512e29:{NFSU2_TR(0x512e29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x512e2eull));
TAIL_STATIC(0x43be60u,43b);
}
B512e2e:L512e2e:{c.instructions+=2;NFSU2_TR(0x512e2e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B512e30:{NFSU2_TR(0x512e30);
if(r1(R+518)){{goto L512e38;}}
}
B512e32:L512e32:{c.instructions+=2;NFSU2_TR(0x512e32);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xfffffffcull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xfffffffcull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B512e35:{NFSU2_TR(0x512e35);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B512e38:L512e38:{c.instructions+=2;NFSU2_TR(0x512e38);
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
B512e3a:{NFSU2_TR(0x512e3a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B512e40:L512e40:{c.instructions+=16;NFSU2_TR(0x512e40);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512e42:{NFSU2_TR(0x512e42);
u8 U[4];
w4(U+0,u32(0x7775aeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512e47:{NFSU2_TR(0x512e47);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B512e4d:{NFSU2_TR(0x512e4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512e4e:{NFSU2_TR(0x512e4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B512e55:{NFSU2_TR(0x512e55);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512e56:{NFSU2_TR(0x512e56);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512e57:{NFSU2_TR(0x512e57);
__builtin_memmove((R+24),(R+4),4);
}
B512e59:{NFSU2_TR(0x512e59);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B512e5d:{NFSU2_TR(0x512e5d);
u8 U[4];
w4(U+0,u32(0x401800ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512e62:{NFSU2_TR(0x512e62);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512e64:{NFSU2_TR(0x512e64);
u8 U[4];
w4(U+0,u32(0x8f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512e69:{NFSU2_TR(0x512e69);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4240ull))));
__builtin_memmove((R+0),(U+0),4);
}
B512e6f:{NFSU2_TR(0x512e6f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512e70:{NFSU2_TR(0x512e70);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B512e78:{NFSU2_TR(0x512e78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x512e7dull));
TAIL_STATIC(0x75c401u,75c);
}
B512e7d:L512e7d:{c.instructions+=7;NFSU2_TR(0x512e7d);
u8 U[4];
w4(U+0,u32(0x4fe270ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512e82:{NFSU2_TR(0x512e82);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512e84:{NFSU2_TR(0x512e84);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512e86:{NFSU2_TR(0x512e86);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xd2cull))));
}
B512e8c:{NFSU2_TR(0x512e8c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512e8d:{NFSU2_TR(0x512e8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B512e95:{NFSU2_TR(0x512e95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x512e9aull));
TAIL_STATIC(0x75c401u,75c);
}
B512e9a:L512e9a:{c.instructions+=5;NFSU2_TR(0x512e9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B512e9e:{NFSU2_TR(0x512e9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B512e9f:{NFSU2_TR(0x512e9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B512ea6:{NFSU2_TR(0x512ea6);
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
B512ea9:{NFSU2_TR(0x512ea9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B512eb0:L512eb0:{c.instructions+=7;NFSU2_TR(0x512eb0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512eb1:{NFSU2_TR(0x512eb1);
__builtin_memmove((R+8),(R+4),4);
}
B512eb3:{NFSU2_TR(0x512eb3);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B512eb5:{NFSU2_TR(0x512eb5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512eb6:{NFSU2_TR(0x512eb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B512eb9:{NFSU2_TR(0x512eb9);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xa8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B512ebf:{NFSU2_TR(0x512ebf);
w4(R+4,u32(0x8ull));
}
B512ec4:L512ec4:{c.instructions+=4;NFSU2_TR(0x512ec4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B512ec6:{NFSU2_TR(0x512ec6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B512ec9:{NFSU2_TR(0x512ec9);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B512eca:{NFSU2_TR(0x512eca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x512ec4u);}goto L512ec4;}}
}
B512ecc:L512ecc:{c.instructions+=9;NFSU2_TR(0x512ecc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B512ed2:{NFSU2_TR(0x512ed2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B512ed8:{NFSU2_TR(0x512ed8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B512ede:{NFSU2_TR(0x512ede);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B512ee4:{NFSU2_TR(0x512ee4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B512eea:{NFSU2_TR(0x512eea);
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
B512eec:{NFSU2_TR(0x512eec);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B512ef2:{NFSU2_TR(0x512ef2);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x120ull))));
__builtin_memmove((R+28),(U+0),4);
}
B512ef8:{NFSU2_TR(0x512ef8);
w4(R+4,u32(0x1cull));
}
B512efd:L512efd:{c.instructions+=1;NFSU2_TR(0x512efd);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L512eff;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x512efdu);}goto L512efd;}
}
B512eff:L512eff:{c.instructions+=4;NFSU2_TR(0x512eff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B512f00:{NFSU2_TR(0x512f00);
__builtin_memmove((R+0),(R+8),4);
}
B512f02:{NFSU2_TR(0x512f02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B512f03:{NFSU2_TR(0x512f03);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B512f10:L512f10:{c.instructions+=8;NFSU2_TR(0x512f10);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512f11:{NFSU2_TR(0x512f11);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512f12:{NFSU2_TR(0x512f12);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7afcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B512f18:{NFSU2_TR(0x512f18);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B512f1a:{NFSU2_TR(0x512f1a);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B512f1c:{NFSU2_TR(0x512f1c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512f1d:{NFSU2_TR(0x512f1d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B512f21:{NFSU2_TR(0x512f21);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L512f4f;}}
}
B512f23:L512f23:{c.instructions+=2;NFSU2_TR(0x512f23);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7b00ull))));
__builtin_memmove((R+8),(U+0),4);
}
B512f29:{NFSU2_TR(0x512f29);
__builtin_memmove((R+16),(R+16),4);
}
B512f30:L512f30:{c.instructions+=2;NFSU2_TR(0x512f30);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B512f32:{NFSU2_TR(0x512f32);
if(r1(R+518)){{goto L512f44;}}
}
B512f34:L512f34:{c.instructions+=5;NFSU2_TR(0x512f34);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7afcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B512f3a:{NFSU2_TR(0x512f3a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B512f3b:{NFSU2_TR(0x512f3b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B512f3e:{NFSU2_TR(0x512f3e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B512f40:{NFSU2_TR(0x512f40);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x512f30u);}goto L512f30;}}
}
B512f42:L512f42:{c.instructions+=1;NFSU2_TR(0x512f42);
{goto L512f4f;}
}
B512f44:L512f44:{c.instructions+=3;NFSU2_TR(0x512f44);
u8 U[12];
w4(U+0,u32(u32(u32(0x7b00ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B512f4b:{NFSU2_TR(0x512f4b);
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
B512f4d:{NFSU2_TR(0x512f4d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L512f5f;}}
}
B512f4f:L512f4f:{c.instructions+=4;NFSU2_TR(0x512f4f);
u8 U[12];
w4(U+0,u32(u32(u32(0x7b00ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B512f56:{NFSU2_TR(0x512f56);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B512f57:{NFSU2_TR(0x512f57);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7afcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B512f5d:{NFSU2_TR(0x512f5d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B512f5f:L512f5f:{c.instructions+=4;NFSU2_TR(0x512f5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B512f60:{NFSU2_TR(0x512f60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B512f61:{NFSU2_TR(0x512f61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B512f62:{NFSU2_TR(0x512f62);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B512f70:L512f70:{c.instructions+=8;NFSU2_TR(0x512f70);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512f71:{NFSU2_TR(0x512f71);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512f72:{NFSU2_TR(0x512f72);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7afcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B512f78:{NFSU2_TR(0x512f78);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B512f7a:{NFSU2_TR(0x512f7a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B512f7c:{NFSU2_TR(0x512f7c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512f7d:{NFSU2_TR(0x512f7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B512f81:{NFSU2_TR(0x512f81);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L512fa9;}}
}
B512f83:L512f83:{c.instructions+=3;NFSU2_TR(0x512f83);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B512f86:{NFSU2_TR(0x512f86);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7b00ull))));
__builtin_memmove((R+8),(U+0),4);
}
B512f8c:{NFSU2_TR(0x512f8c);
__builtin_memmove((R+16),(R+16),4);
}
B512f90:L512f90:{c.instructions+=2;NFSU2_TR(0x512f90);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B512f92:{NFSU2_TR(0x512f92);
if(r1(R+518)){{goto L512f9e;}}
}
B512f94:L512f94:{c.instructions+=4;NFSU2_TR(0x512f94);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B512f95:{NFSU2_TR(0x512f95);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B512f98:{NFSU2_TR(0x512f98);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B512f9a:{NFSU2_TR(0x512f9a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x512f90u);}goto L512f90;}}
}
B512f9c:L512f9c:{c.instructions+=1;NFSU2_TR(0x512f9c);
{goto L512fa9;}
}
B512f9e:L512f9e:{c.instructions+=3;NFSU2_TR(0x512f9e);
u8 U[12];
w4(U+0,u32(u32(u32(0x7b00ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B512fa5:{NFSU2_TR(0x512fa5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B512fa7:{NFSU2_TR(0x512fa7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L512fb4;}}
}
B512fa9:L512fa9:{c.instructions+=3;NFSU2_TR(0x512fa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B512fac:{NFSU2_TR(0x512fac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512fad:{NFSU2_TR(0x512fad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x512fb2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x512f10u);}goto L512f10;}
}
B512fb2:L512fb2:{c.instructions+=1;NFSU2_TR(0x512fb2);
__builtin_memmove((R+24),(R+0),4);
}
B512fb4:L512fb4:{c.instructions+=3;NFSU2_TR(0x512fb4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B512fb7:{NFSU2_TR(0x512fb7);
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
B512fb9:{NFSU2_TR(0x512fb9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L512fe4;}}
}
B512fbb:L512fbb:{c.instructions+=5;NFSU2_TR(0x512fbb);
w1(R+12,u8(0x1ull));
}
B512fbd:{NFSU2_TR(0x512fbd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B512fc0:{NFSU2_TR(0x512fc0);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B512fc3:{NFSU2_TR(0x512fc3);
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
B512fc5:{NFSU2_TR(0x512fc5);
if(r1(R+518)){{goto L512fdb;}}
}
B512fc7:L512fc7:{c.instructions+=4;NFSU2_TR(0x512fc7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B512fcb:{NFSU2_TR(0x512fcb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512fcc:{NFSU2_TR(0x512fcc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512fcd:{NFSU2_TR(0x512fcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x512fd2ull));
TAIL_STATIC(0x500e60u,500);
}
B512fd2:L512fd2:{c.instructions+=2;NFSU2_TR(0x512fd2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512fd3:{NFSU2_TR(0x512fd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x512fd8ull));
TAIL_STATIC(0x4eccf0u,4ec);
}
B512fd8:L512fd8:{c.instructions+=1;NFSU2_TR(0x512fd8);
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
B512fdb:L512fdb:{c.instructions+=5;NFSU2_TR(0x512fdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B512fdc:{NFSU2_TR(0x512fdc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B512fdf:{NFSU2_TR(0x512fdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B512fe0:{NFSU2_TR(0x512fe0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B512fe1:{NFSU2_TR(0x512fe1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B512fe4:L512fe4:{c.instructions+=5;NFSU2_TR(0x512fe4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B512fe5:{NFSU2_TR(0x512fe5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B512fe9:{NFSU2_TR(0x512fe9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B512fea:{NFSU2_TR(0x512fea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B512feb:{NFSU2_TR(0x512feb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B512ff0:L512ff0:{c.instructions+=4;NFSU2_TR(0x512ff0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7af8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B512ff6:{NFSU2_TR(0x512ff6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B512ff7:{NFSU2_TR(0x512ff7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B512ffb:{NFSU2_TR(0x512ffb);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
TAIL_STATIC(0x513002u,513);
}
XIT:NFSU2_TR_EXIT(0x512,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
