#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_501(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_504(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_511(u8* __restrict R,Cpu& c);
u32 body_512(u8* __restrict R,Cpu& c);
u32 body_514(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_534(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_544(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5b6(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x497,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x497,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_497(u8* __restrict R,Cpu& c);
u32 page_497(Cpu& c){return body_497(c.regs.data(),c);}
__attribute__((noinline)) u32 body_497(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x497003:goto L497003;
case 0x497006:c.instructions+=3;goto B497006;
case 0x497008:c.instructions+=2;goto B497008;
case 0x497010:c.instructions+=1;goto B497010;
case 0x497012:goto L497012;
case 0x497014:c.instructions+=2;goto B497014;
case 0x497016:c.instructions+=1;goto B497016;
case 0x497018:goto L497018;
case 0x49701a:c.instructions+=2;goto B49701a;
case 0x497022:c.instructions+=1;goto B497022;
case 0x497027:goto L497027;
case 0x49702b:c.instructions+=4;goto B49702b;
case 0x49702c:c.instructions+=3;goto B49702c;
case 0x497033:c.instructions+=2;goto B497033;
case 0x497036:c.instructions+=1;goto B497036;
case 0x497040:goto L497040;
case 0x497046:c.instructions+=11;goto B497046;
case 0x497048:c.instructions+=10;goto B497048;
case 0x49704d:c.instructions+=9;goto B49704d;
case 0x49704e:c.instructions+=8;goto B49704e;
case 0x497053:c.instructions+=7;goto B497053;
case 0x49705a:c.instructions+=6;goto B49705a;
case 0x49705d:c.instructions+=5;goto B49705d;
case 0x49705f:c.instructions+=4;goto B49705f;
case 0x497060:c.instructions+=3;goto B497060;
case 0x497061:c.instructions+=2;goto B497061;
case 0x497063:c.instructions+=1;goto B497063;
case 0x497069:goto L497069;
case 0x49706b:c.instructions+=2;goto B49706b;
case 0x497070:c.instructions+=1;goto B497070;
case 0x497074:goto L497074;
case 0x497076:goto L497076;
case 0x49707c:c.instructions+=13;goto B49707c;
case 0x497080:c.instructions+=12;goto B497080;
case 0x497083:c.instructions+=11;goto B497083;
case 0x497085:c.instructions+=10;goto B497085;
case 0x49708d:c.instructions+=9;goto B49708d;
case 0x497095:c.instructions+=8;goto B497095;
case 0x49709d:c.instructions+=7;goto B49709d;
case 0x4970a5:c.instructions+=6;goto B4970a5;
case 0x4970ad:c.instructions+=5;goto B4970ad;
case 0x4970b5:c.instructions+=4;goto B4970b5;
case 0x4970bd:c.instructions+=3;goto B4970bd;
case 0x4970c1:c.instructions+=2;goto B4970c1;
case 0x4970c5:c.instructions+=1;goto B4970c5;
case 0x4970ca:goto L4970ca;
case 0x4970cd:c.instructions+=4;goto B4970cd;
case 0x4970d1:c.instructions+=3;goto B4970d1;
case 0x4970d3:c.instructions+=2;goto B4970d3;
case 0x4970db:c.instructions+=1;goto B4970db;
case 0x4970dd:goto L4970dd;
case 0x4970df:c.instructions+=1;goto B4970df;
case 0x4970e4:goto L4970e4;
case 0x4970e6:goto L4970e6;
case 0x4970e8:goto L4970e8;
case 0x4970ea:c.instructions+=7;goto B4970ea;
case 0x4970ee:c.instructions+=6;goto B4970ee;
case 0x4970f1:c.instructions+=5;goto B4970f1;
case 0x4970f3:c.instructions+=4;goto B4970f3;
case 0x4970f4:c.instructions+=3;goto B4970f4;
case 0x4970f6:c.instructions+=2;goto B4970f6;
case 0x4970fe:c.instructions+=1;goto B4970fe;
case 0x497101:goto L497101;
case 0x497105:c.instructions+=3;goto B497105;
case 0x497108:c.instructions+=2;goto B497108;
case 0x497109:c.instructions+=1;goto B497109;
case 0x49710e:goto L49710e;
case 0x497111:c.instructions+=3;goto B497111;
case 0x497113:c.instructions+=2;goto B497113;
case 0x497115:c.instructions+=1;goto B497115;
case 0x497118:goto L497118;
case 0x49711b:c.instructions+=2;goto B49711b;
case 0x49711d:c.instructions+=1;goto B49711d;
case 0x497120:goto L497120;
case 0x497124:c.instructions+=8;goto B497124;
case 0x49712a:c.instructions+=7;goto B49712a;
case 0x49712d:c.instructions+=6;goto B49712d;
case 0x497130:c.instructions+=5;goto B497130;
case 0x497133:c.instructions+=4;goto B497133;
case 0x497138:c.instructions+=3;goto B497138;
case 0x49713d:c.instructions+=2;goto B49713d;
case 0x49713e:c.instructions+=1;goto B49713e;
case 0x497143:goto L497143;
case 0x497149:c.instructions+=8;goto B497149;
case 0x49714f:c.instructions+=7;goto B49714f;
case 0x497152:c.instructions+=6;goto B497152;
case 0x497153:c.instructions+=5;goto B497153;
case 0x497154:c.instructions+=4;goto B497154;
case 0x497159:c.instructions+=3;goto B497159;
case 0x49715e:c.instructions+=2;goto B49715e;
case 0x49715f:c.instructions+=1;goto B49715f;
case 0x497164:goto L497164;
case 0x497167:c.instructions+=3;goto B497167;
case 0x497169:c.instructions+=2;goto B497169;
case 0x49716e:c.instructions+=1;goto B49716e;
case 0x497173:goto L497173;
case 0x497175:c.instructions+=1;goto B497175;
case 0x49717b:goto L49717b;
case 0x497181:c.instructions+=8;goto B497181;
case 0x497187:c.instructions+=7;goto B497187;
case 0x49718a:c.instructions+=6;goto B49718a;
case 0x49718b:c.instructions+=5;goto B49718b;
case 0x49718c:c.instructions+=4;goto B49718c;
case 0x497191:c.instructions+=3;goto B497191;
case 0x497196:c.instructions+=2;goto B497196;
case 0x497197:c.instructions+=1;goto B497197;
case 0x49719c:goto L49719c;
case 0x4971a2:c.instructions+=8;goto B4971a2;
case 0x4971a8:c.instructions+=7;goto B4971a8;
case 0x4971ab:c.instructions+=6;goto B4971ab;
case 0x4971ac:c.instructions+=5;goto B4971ac;
case 0x4971ad:c.instructions+=4;goto B4971ad;
case 0x4971b2:c.instructions+=3;goto B4971b2;
case 0x4971b7:c.instructions+=2;goto B4971b7;
case 0x4971b8:c.instructions+=1;goto B4971b8;
case 0x4971bd:goto L4971bd;
case 0x4971c3:c.instructions+=8;goto B4971c3;
case 0x4971c9:c.instructions+=7;goto B4971c9;
case 0x4971cc:c.instructions+=6;goto B4971cc;
case 0x4971cd:c.instructions+=5;goto B4971cd;
case 0x4971ce:c.instructions+=4;goto B4971ce;
case 0x4971d3:c.instructions+=3;goto B4971d3;
case 0x4971d8:c.instructions+=2;goto B4971d8;
case 0x4971d9:c.instructions+=1;goto B4971d9;
case 0x4971de:goto L4971de;
case 0x4971e3:goto L4971e3;
case 0x4971e6:c.instructions+=4;goto B4971e6;
case 0x4971eb:c.instructions+=3;goto B4971eb;
case 0x4971f0:c.instructions+=2;goto B4971f0;
case 0x4971f1:c.instructions+=1;goto B4971f1;
case 0x4971f6:goto L4971f6;
case 0x4971f9:c.instructions+=2;goto B4971f9;
case 0x4971fa:c.instructions+=1;goto B4971fa;
case 0x4971ff:goto L4971ff;
case 0x497202:c.instructions+=5;goto B497202;
case 0x497205:c.instructions+=4;goto B497205;
case 0x49720a:c.instructions+=3;goto B49720a;
case 0x49720f:c.instructions+=2;goto B49720f;
case 0x497210:c.instructions+=1;goto B497210;
case 0x497215:goto L497215;
case 0x497218:c.instructions+=2;goto B497218;
case 0x497219:c.instructions+=1;goto B497219;
case 0x49721e:goto L49721e;
case 0x497221:c.instructions+=1;goto B497221;
case 0x497223:goto L497223;
case 0x497226:c.instructions+=4;goto B497226;
case 0x49722c:c.instructions+=3;goto B49722c;
case 0x49722d:c.instructions+=2;goto B49722d;
case 0x49722e:c.instructions+=1;goto B49722e;
case 0x497233:goto L497233;
case 0x497234:c.instructions+=1;goto B497234;
case 0x497239:goto L497239;
case 0x49723c:c.instructions+=3;goto B49723c;
case 0x49723d:c.instructions+=2;goto B49723d;
case 0x497240:c.instructions+=1;goto B497240;
case 0x497242:goto L497242;
case 0x497245:c.instructions+=3;goto B497245;
case 0x49724a:c.instructions+=2;goto B49724a;
case 0x49724b:c.instructions+=1;goto B49724b;
case 0x497250:goto L497250;
case 0x497251:c.instructions+=1;goto B497251;
case 0x497256:goto L497256;
case 0x497259:c.instructions+=3;goto B497259;
case 0x49725e:c.instructions+=2;goto B49725e;
case 0x49725f:c.instructions+=1;goto B49725f;
case 0x497264:goto L497264;
case 0x497265:c.instructions+=1;goto B497265;
case 0x49726a:goto L49726a;
case 0x49726d:c.instructions+=3;goto B49726d;
case 0x497272:c.instructions+=2;goto B497272;
case 0x497273:c.instructions+=1;goto B497273;
case 0x497278:goto L497278;
case 0x497279:c.instructions+=1;goto B497279;
case 0x49727e:goto L49727e;
case 0x497281:c.instructions+=3;goto B497281;
case 0x497286:c.instructions+=2;goto B497286;
case 0x497287:c.instructions+=1;goto B497287;
case 0x49728c:goto L49728c;
case 0x49728d:c.instructions+=1;goto B49728d;
case 0x497292:goto L497292;
case 0x497295:c.instructions+=3;goto B497295;
case 0x49729a:c.instructions+=2;goto B49729a;
case 0x49729b:c.instructions+=1;goto B49729b;
case 0x4972a0:goto L4972a0;
case 0x4972a1:c.instructions+=1;goto B4972a1;
case 0x4972a6:goto L4972a6;
case 0x4972a9:goto L4972a9;
case 0x4972ab:c.instructions+=2;goto B4972ab;
case 0x4972b0:c.instructions+=1;goto B4972b0;
case 0x4972b5:goto L4972b5;
case 0x4972b7:c.instructions+=1;goto B4972b7;
case 0x4972b9:goto L4972b9;
case 0x4972ba:c.instructions+=2;goto B4972ba;
case 0x4972bf:c.instructions+=1;goto B4972bf;
case 0x4972c4:goto L4972c4;
case 0x4972c7:c.instructions+=4;goto B4972c7;
case 0x4972cd:c.instructions+=3;goto B4972cd;
case 0x4972ce:c.instructions+=2;goto B4972ce;
case 0x4972cf:c.instructions+=1;goto B4972cf;
case 0x4972d4:goto L4972d4;
case 0x4972d5:c.instructions+=1;goto B4972d5;
case 0x4972da:goto L4972da;
case 0x4972dd:c.instructions+=3;goto B4972dd;
case 0x4972de:c.instructions+=2;goto B4972de;
case 0x4972df:c.instructions+=1;goto B4972df;
case 0x4972e4:goto L4972e4;
case 0x4972e5:c.instructions+=1;goto B4972e5;
case 0x4972ea:goto L4972ea;
case 0x4972ed:c.instructions+=3;goto B4972ed;
case 0x4972ee:c.instructions+=2;goto B4972ee;
case 0x4972ef:c.instructions+=1;goto B4972ef;
case 0x4972f1:goto L4972f1;
case 0x4972f6:c.instructions+=2;goto B4972f6;
case 0x4972f7:c.instructions+=1;goto B4972f7;
case 0x497300:goto L497300;
case 0x497303:c.instructions+=4;goto B497303;
case 0x497309:c.instructions+=3;goto B497309;
case 0x49730a:c.instructions+=2;goto B49730a;
case 0x49730b:c.instructions+=1;goto B49730b;
case 0x497310:goto L497310;
case 0x497311:c.instructions+=1;goto B497311;
case 0x497316:goto L497316;
case 0x497319:c.instructions+=3;goto B497319;
case 0x49731a:c.instructions+=2;goto B49731a;
case 0x49731d:c.instructions+=1;goto B49731d;
case 0x49731f:goto L49731f;
case 0x497323:c.instructions+=5;goto B497323;
case 0x497324:c.instructions+=4;goto B497324;
case 0x497325:c.instructions+=3;goto B497325;
case 0x49732c:c.instructions+=2;goto B49732c;
case 0x49732f:c.instructions+=1;goto B49732f;
case 0x497330:goto L497330;
case 0x497333:c.instructions+=11;goto B497333;
case 0x497338:c.instructions+=10;goto B497338;
case 0x497339:c.instructions+=9;goto B497339;
case 0x49733c:c.instructions+=8;goto B49733c;
case 0x49733f:c.instructions+=7;goto B49733f;
case 0x497345:c.instructions+=6;goto B497345;
case 0x497347:c.instructions+=5;goto B497347;
case 0x497348:c.instructions+=4;goto B497348;
case 0x497349:c.instructions+=3;goto B497349;
case 0x49734b:c.instructions+=2;goto B49734b;
case 0x49734f:c.instructions+=1;goto B49734f;
case 0x497355:goto L497355;
case 0x49735a:c.instructions+=2;goto B49735a;
case 0x497360:c.instructions+=1;goto B497360;
case 0x497364:goto L497364;
case 0x497367:c.instructions+=4;goto B497367;
case 0x49736d:c.instructions+=3;goto B49736d;
case 0x49736e:c.instructions+=2;goto B49736e;
case 0x49736f:c.instructions+=1;goto B49736f;
case 0x497374:goto L497374;
case 0x497375:c.instructions+=1;goto B497375;
case 0x49737a:goto L49737a;
case 0x49737d:c.instructions+=5;goto B49737d;
case 0x497380:c.instructions+=4;goto B497380;
case 0x497381:c.instructions+=3;goto B497381;
case 0x497382:c.instructions+=2;goto B497382;
case 0x497386:c.instructions+=1;goto B497386;
case 0x49738b:goto L49738b;
case 0x497391:c.instructions+=5;goto B497391;
case 0x497395:c.instructions+=4;goto B497395;
case 0x497398:c.instructions+=3;goto B497398;
case 0x497399:c.instructions+=2;goto B497399;
case 0x49739a:c.instructions+=1;goto B49739a;
case 0x49739f:goto L49739f;
case 0x4973a3:c.instructions+=7;goto B4973a3;
case 0x4973a6:c.instructions+=6;goto B4973a6;
case 0x4973ac:c.instructions+=5;goto B4973ac;
case 0x4973af:c.instructions+=4;goto B4973af;
case 0x4973b0:c.instructions+=3;goto B4973b0;
case 0x4973b5:c.instructions+=2;goto B4973b5;
case 0x4973b9:c.instructions+=1;goto B4973b9;
case 0x4973be:goto L4973be;
case 0x4973c1:c.instructions+=4;goto B4973c1;
case 0x4973c2:c.instructions+=3;goto B4973c2;
case 0x4973c6:c.instructions+=2;goto B4973c6;
case 0x4973c7:c.instructions+=1;goto B4973c7;
case 0x4973cc:goto L4973cc;
case 0x4973d0:c.instructions+=4;goto B4973d0;
case 0x4973d3:c.instructions+=3;goto B4973d3;
case 0x4973d6:c.instructions+=2;goto B4973d6;
case 0x4973db:c.instructions+=1;goto B4973db;
case 0x4973e0:goto L4973e0;
case 0x4973e4:c.instructions+=4;goto B4973e4;
case 0x4973e7:c.instructions+=3;goto B4973e7;
case 0x4973e8:c.instructions+=2;goto B4973e8;
case 0x4973e9:c.instructions+=1;goto B4973e9;
case 0x4973ee:goto L4973ee;
case 0x4973f1:c.instructions+=4;goto B4973f1;
case 0x4973f7:c.instructions+=3;goto B4973f7;
case 0x4973f8:c.instructions+=2;goto B4973f8;
case 0x4973f9:c.instructions+=1;goto B4973f9;
case 0x4973fe:goto L4973fe;
case 0x497400:c.instructions+=3;goto B497400;
case 0x497403:c.instructions+=2;goto B497403;
case 0x497405:c.instructions+=1;goto B497405;
case 0x497407:goto L497407;
case 0x49740c:c.instructions+=1;goto B49740c;
case 0x49740e:goto L49740e;
case 0x497413:goto L497413;
case 0x497414:c.instructions+=1;goto B497414;
case 0x497419:goto L497419;
case 0x49741d:c.instructions+=6;goto B49741d;
case 0x497420:c.instructions+=5;goto B497420;
case 0x497423:c.instructions+=4;goto B497423;
case 0x497424:c.instructions+=3;goto B497424;
case 0x497425:c.instructions+=2;goto B497425;
case 0x497429:c.instructions+=1;goto B497429;
case 0x49742f:goto L49742f;
case 0x497433:c.instructions+=2;goto B497433;
case 0x497435:c.instructions+=1;goto B497435;
case 0x497437:goto L497437;
case 0x49743a:c.instructions+=3;goto B49743a;
case 0x49743f:c.instructions+=2;goto B49743f;
case 0x497440:c.instructions+=1;goto B497440;
case 0x497445:goto L497445;
case 0x497446:c.instructions+=1;goto B497446;
case 0x49744b:goto L49744b;
case 0x49744d:goto L49744d;
case 0x497450:c.instructions+=3;goto B497450;
case 0x497455:c.instructions+=2;goto B497455;
case 0x497456:c.instructions+=1;goto B497456;
case 0x49745b:goto L49745b;
case 0x49745c:c.instructions+=1;goto B49745c;
case 0x497461:goto L497461;
case 0x497465:c.instructions+=3;goto B497465;
case 0x497468:c.instructions+=2;goto B497468;
case 0x49746b:c.instructions+=1;goto B49746b;
case 0x49746d:goto L49746d;
case 0x497470:goto L497470;
case 0x497473:c.instructions+=4;goto B497473;
case 0x497479:c.instructions+=3;goto B497479;
case 0x49747a:c.instructions+=2;goto B49747a;
case 0x49747b:c.instructions+=1;goto B49747b;
case 0x497480:goto L497480;
case 0x497481:c.instructions+=1;goto B497481;
case 0x497486:goto L497486;
case 0x497489:c.instructions+=3;goto B497489;
case 0x49748a:c.instructions+=2;goto B49748a;
case 0x49748d:c.instructions+=1;goto B49748d;
case 0x49748f:goto L49748f;
case 0x497490:c.instructions+=4;goto B497490;
case 0x497491:c.instructions+=3;goto B497491;
case 0x497492:c.instructions+=2;goto B497492;
case 0x497495:c.instructions+=1;goto B497495;
case 0x4974a0:goto L4974a0;
case 0x4974a6:c.instructions+=42;goto B4974a6;
case 0x4974ab:c.instructions+=41;goto B4974ab;
case 0x4974b0:c.instructions+=40;goto B4974b0;
case 0x4974b4:c.instructions+=39;goto B4974b4;
case 0x4974b8:c.instructions+=38;goto B4974b8;
case 0x4974bc:c.instructions+=37;goto B4974bc;
case 0x4974c0:c.instructions+=36;goto B4974c0;
case 0x4974c4:c.instructions+=35;goto B4974c4;
case 0x4974c8:c.instructions+=34;goto B4974c8;
case 0x4974cc:c.instructions+=33;goto B4974cc;
case 0x4974d0:c.instructions+=32;goto B4974d0;
case 0x4974d4:c.instructions+=31;goto B4974d4;
case 0x4974db:c.instructions+=30;goto B4974db;
case 0x4974e0:c.instructions+=29;goto B4974e0;
case 0x4974e1:c.instructions+=28;goto B4974e1;
case 0x4974e5:c.instructions+=27;goto B4974e5;
case 0x4974ea:c.instructions+=26;goto B4974ea;
case 0x4974ee:c.instructions+=25;goto B4974ee;
case 0x4974f2:c.instructions+=24;goto B4974f2;
case 0x4974f6:c.instructions+=23;goto B4974f6;
case 0x4974fb:c.instructions+=22;goto B4974fb;
case 0x4974fc:c.instructions+=21;goto B4974fc;
case 0x4974ff:c.instructions+=20;goto B4974ff;
case 0x497507:c.instructions+=19;goto B497507;
case 0x49750b:c.instructions+=18;goto B49750b;
case 0x49750f:c.instructions+=17;goto B49750f;
case 0x497517:c.instructions+=16;goto B497517;
case 0x49751f:c.instructions+=15;goto B49751f;
case 0x497527:c.instructions+=14;goto B497527;
case 0x49752f:c.instructions+=13;goto B49752f;
case 0x497537:c.instructions+=12;goto B497537;
case 0x49753b:c.instructions+=11;goto B49753b;
case 0x49753f:c.instructions+=10;goto B49753f;
case 0x497547:c.instructions+=9;goto B497547;
case 0x49754b:c.instructions+=8;goto B49754b;
case 0x497553:c.instructions+=7;goto B497553;
case 0x49755b:c.instructions+=6;goto B49755b;
case 0x497563:c.instructions+=5;goto B497563;
case 0x49756b:c.instructions+=4;goto B49756b;
case 0x49756f:c.instructions+=3;goto B49756f;
case 0x497577:c.instructions+=2;goto B497577;
case 0x49757b:c.instructions+=1;goto B49757b;
case 0x497581:goto L497581;
case 0x497588:goto L497588;
case 0x49758f:c.instructions+=4;goto B49758f;
case 0x497593:c.instructions+=3;goto B497593;
case 0x497594:c.instructions+=2;goto B497594;
case 0x497599:c.instructions+=1;goto B497599;
case 0x49759e:goto L49759e;
case 0x4975a0:c.instructions+=3;goto B4975a0;
case 0x4975a1:c.instructions+=2;goto B4975a1;
case 0x4975a7:c.instructions+=1;goto B4975a7;
case 0x4975a8:goto L4975a8;
case 0x4975ac:c.instructions+=4;goto B4975ac;
case 0x4975ad:c.instructions+=3;goto B4975ad;
case 0x4975b4:c.instructions+=2;goto B4975b4;
case 0x4975b9:c.instructions+=1;goto B4975b9;
case 0x4975be:goto L4975be;
case 0x4975c0:c.instructions+=3;goto B4975c0;
case 0x4975c1:c.instructions+=2;goto B4975c1;
case 0x4975c7:c.instructions+=1;goto B4975c7;
case 0x4975c8:goto L4975c8;
case 0x4975cf:c.instructions+=4;goto B4975cf;
case 0x4975d3:c.instructions+=3;goto B4975d3;
case 0x4975d4:c.instructions+=2;goto B4975d4;
case 0x4975d9:c.instructions+=1;goto B4975d9;
case 0x4975de:goto L4975de;
case 0x4975e0:c.instructions+=3;goto B4975e0;
case 0x4975e1:c.instructions+=2;goto B4975e1;
case 0x4975e7:c.instructions+=1;goto B4975e7;
case 0x4975e8:goto L4975e8;
case 0x4975ef:c.instructions+=4;goto B4975ef;
case 0x4975f3:c.instructions+=3;goto B4975f3;
case 0x4975f4:c.instructions+=2;goto B4975f4;
case 0x4975f9:c.instructions+=1;goto B4975f9;
case 0x4975fe:goto L4975fe;
case 0x497600:c.instructions+=3;goto B497600;
case 0x497601:c.instructions+=2;goto B497601;
case 0x497607:c.instructions+=1;goto B497607;
case 0x497608:goto L497608;
case 0x49760c:c.instructions+=4;goto B49760c;
case 0x49760d:c.instructions+=3;goto B49760d;
case 0x497614:c.instructions+=2;goto B497614;
case 0x497619:c.instructions+=1;goto B497619;
case 0x49761e:goto L49761e;
case 0x497620:c.instructions+=3;goto B497620;
case 0x497621:c.instructions+=2;goto B497621;
case 0x497627:c.instructions+=1;goto B497627;
case 0x497628:goto L497628;
case 0x49762f:c.instructions+=4;goto B49762f;
case 0x497633:c.instructions+=3;goto B497633;
case 0x497634:c.instructions+=2;goto B497634;
case 0x497639:c.instructions+=1;goto B497639;
case 0x49763e:goto L49763e;
case 0x497640:c.instructions+=3;goto B497640;
case 0x497641:c.instructions+=2;goto B497641;
case 0x497647:c.instructions+=1;goto B497647;
case 0x497648:goto L497648;
case 0x49764f:c.instructions+=4;goto B49764f;
case 0x497653:c.instructions+=3;goto B497653;
case 0x497654:c.instructions+=2;goto B497654;
case 0x497659:c.instructions+=1;goto B497659;
case 0x49765e:goto L49765e;
case 0x497660:c.instructions+=3;goto B497660;
case 0x497661:c.instructions+=2;goto B497661;
case 0x497667:c.instructions+=1;goto B497667;
case 0x497668:goto L497668;
case 0x49766c:c.instructions+=4;goto B49766c;
case 0x49766d:c.instructions+=3;goto B49766d;
case 0x497674:c.instructions+=2;goto B497674;
case 0x497679:c.instructions+=1;goto B497679;
case 0x49767e:goto L49767e;
case 0x497680:c.instructions+=3;goto B497680;
case 0x497681:c.instructions+=2;goto B497681;
case 0x497687:c.instructions+=1;goto B497687;
case 0x4976b0:goto L4976b0;
case 0x4976b2:c.instructions+=2;goto B4976b2;
case 0x4976b7:c.instructions+=1;goto B4976b7;
case 0x4976bc:goto L4976bc;
case 0x4976c1:c.instructions+=2;goto B4976c1;
case 0x4976c3:c.instructions+=1;goto B4976c3;
case 0x4976c5:goto L4976c5;
case 0x4976cb:c.instructions+=3;goto B4976cb;
case 0x4976d0:c.instructions+=2;goto B4976d0;
case 0x4976da:c.instructions+=1;goto B4976da;
case 0x4976df:goto L4976df;
case 0x4976e0:c.instructions+=4;goto B4976e0;
case 0x4976e5:c.instructions+=3;goto B4976e5;
case 0x4976ea:c.instructions+=2;goto B4976ea;
case 0x4976eb:c.instructions+=1;goto B4976eb;
case 0x4976f0:goto L4976f0;
case 0x4976f3:c.instructions+=1;goto B4976f3;
case 0x4976f4:goto L4976f4;
case 0x4976f6:c.instructions+=6;goto B4976f6;
case 0x4976fb:c.instructions+=5;goto B4976fb;
case 0x497705:c.instructions+=4;goto B497705;
case 0x49770f:c.instructions+=3;goto B49770f;
case 0x497715:c.instructions+=2;goto B497715;
case 0x49771f:c.instructions+=1;goto B49771f;
case 0x497724:goto L497724;
case 0x497727:c.instructions+=1;goto B497727;
case 0x497730:goto L497730;
case 0x497735:c.instructions+=1;goto B497735;
case 0x49773a:goto L49773a;
case 0x49773c:c.instructions+=1;goto B49773c;
case 0x49773e:goto L49773e;
case 0x497743:c.instructions+=1;goto B497743;
case 0x497748:goto L497748;
case 0x49774d:c.instructions+=1;goto B49774d;
case 0x497752:goto L497752;
case 0x497753:c.instructions+=1;goto B497753;
case 0x497760:goto L497760;
case 0x497766:c.instructions+=5;goto B497766;
case 0x49776b:c.instructions+=4;goto B49776b;
case 0x497772:c.instructions+=3;goto B497772;
case 0x497777:c.instructions+=2;goto B497777;
case 0x497778:c.instructions+=1;goto B497778;
case 0x49777d:goto L49777d;
case 0x497780:c.instructions+=5;goto B497780;
case 0x497785:c.instructions+=4;goto B497785;
case 0x497789:c.instructions+=3;goto B497789;
case 0x49778a:c.instructions+=2;goto B49778a;
case 0x497791:c.instructions+=1;goto B497791;
case 0x497796:goto L497796;
case 0x49779d:c.instructions+=8;goto B49779d;
case 0x4977a1:c.instructions+=7;goto B4977a1;
case 0x4977a2:c.instructions+=6;goto B4977a2;
case 0x4977a9:c.instructions+=5;goto B4977a9;
case 0x4977b0:c.instructions+=4;goto B4977b0;
case 0x4977b1:c.instructions+=3;goto B4977b1;
case 0x4977b2:c.instructions+=2;goto B4977b2;
case 0x4977b3:c.instructions+=1;goto B4977b3;
case 0x4977b8:goto L4977b8;
case 0x4977be:c.instructions+=1;goto B4977be;
case 0x4977c0:goto L4977c0;
case 0x4977c5:c.instructions+=2;goto B4977c5;
case 0x4977cf:c.instructions+=1;goto B4977cf;
case 0x4977d4:goto L4977d4;
case 0x4977da:c.instructions+=2;goto B4977da;
case 0x4977dc:c.instructions+=1;goto B4977dc;
case 0x4977e1:goto L4977e1;
case 0x4977e6:c.instructions+=1;goto B4977e6;
case 0x4977eb:goto L4977eb;
case 0x4977f0:c.instructions+=1;goto B4977f0;
case 0x4977f5:goto L4977f5;
case 0x4977fa:c.instructions+=2;goto B4977fa;
case 0x4977fb:c.instructions+=1;goto B4977fb;
case 0x497800:goto L497800;
case 0x497803:c.instructions+=1;goto B497803;
case 0x497810:goto L497810;
case 0x497813:c.instructions+=3;goto B497813;
case 0x497816:c.instructions+=2;goto B497816;
case 0x497818:c.instructions+=1;goto B497818;
case 0x49781a:goto L49781a;
case 0x49781d:c.instructions+=2;goto B49781d;
case 0x49781f:c.instructions+=1;goto B49781f;
case 0x497821:goto L497821;
case 0x497824:c.instructions+=2;goto B497824;
case 0x497826:c.instructions+=1;goto B497826;
case 0x497828:goto L497828;
case 0x49782e:c.instructions+=7;goto B49782e;
case 0x497831:c.instructions+=6;goto B497831;
case 0x497832:c.instructions+=5;goto B497832;
case 0x497837:c.instructions+=4;goto B497837;
case 0x49783c:c.instructions+=3;goto B49783c;
case 0x497842:c.instructions+=2;goto B497842;
case 0x497847:c.instructions+=1;goto B497847;
case 0x49784c:goto L49784c;
case 0x49784f:goto L49784f;
case 0x497850:goto L497850;
case 0x497851:c.instructions+=15;goto B497851;
case 0x497853:c.instructions+=14;goto B497853;
case 0x497855:c.instructions+=13;goto B497855;
case 0x49785a:c.instructions+=12;goto B49785a;
case 0x497860:c.instructions+=11;goto B497860;
case 0x497861:c.instructions+=10;goto B497861;
case 0x497868:c.instructions+=9;goto B497868;
case 0x49786e:c.instructions+=8;goto B49786e;
case 0x49786f:c.instructions+=7;goto B49786f;
case 0x497870:c.instructions+=6;goto B497870;
case 0x497871:c.instructions+=5;goto B497871;
case 0x497874:c.instructions+=4;goto B497874;
case 0x497876:c.instructions+=3;goto B497876;
case 0x497877:c.instructions+=2;goto B497877;
case 0x49787a:c.instructions+=1;goto B49787a;
case 0x49787f:goto L49787f;
case 0x497881:c.instructions+=6;goto B497881;
case 0x497884:c.instructions+=5;goto B497884;
case 0x49788a:c.instructions+=4;goto B49788a;
case 0x49788c:c.instructions+=3;goto B49788c;
case 0x49788f:c.instructions+=2;goto B49788f;
case 0x497892:c.instructions+=1;goto B497892;
case 0x497897:goto L497897;
case 0x49789a:c.instructions+=8;goto B49789a;
case 0x49789c:c.instructions+=7;goto B49789c;
case 0x49789e:c.instructions+=6;goto B49789e;
case 0x4978a0:c.instructions+=5;goto B4978a0;
case 0x4978a5:c.instructions+=4;goto B4978a5;
case 0x4978ab:c.instructions+=3;goto B4978ab;
case 0x4978ac:c.instructions+=2;goto B4978ac;
case 0x4978b0:c.instructions+=1;goto B4978b0;
case 0x4978b5:goto L4978b5;
case 0x4978bf:c.instructions+=3;goto B4978bf;
case 0x4978c2:c.instructions+=2;goto B4978c2;
case 0x4978c4:c.instructions+=1;goto B4978c4;
case 0x4978c9:goto L4978c9;
case 0x4978ce:goto L4978ce;
case 0x4978cf:c.instructions+=1;goto B4978cf;
case 0x4978d4:goto L4978d4;
case 0x4978d7:c.instructions+=2;goto B4978d7;
case 0x4978d9:c.instructions+=1;goto B4978d9;
case 0x4978db:goto L4978db;
case 0x4978de:c.instructions+=4;goto B4978de;
case 0x4978e0:c.instructions+=3;goto B4978e0;
case 0x4978e5:c.instructions+=2;goto B4978e5;
case 0x4978e6:c.instructions+=1;goto B4978e6;
case 0x4978eb:goto L4978eb;
case 0x4978ec:c.instructions+=1;goto B4978ec;
case 0x4978f1:goto L4978f1;
case 0x4978f4:goto L4978f4;
case 0x4978fa:c.instructions+=1;goto B4978fa;
case 0x4978ff:goto L4978ff;
case 0x497902:c.instructions+=5;goto B497902;
case 0x497905:c.instructions+=4;goto B497905;
case 0x497906:c.instructions+=3;goto B497906;
case 0x49790c:c.instructions+=2;goto B49790c;
case 0x49790d:c.instructions+=1;goto B49790d;
case 0x497912:goto L497912;
case 0x497917:c.instructions+=3;goto B497917;
case 0x49791a:c.instructions+=2;goto B49791a;
case 0x49791b:c.instructions+=1;goto B49791b;
case 0x497920:goto L497920;
case 0x497921:c.instructions+=2;goto B497921;
case 0x497922:c.instructions+=1;goto B497922;
case 0x497927:goto L497927;
case 0x49792a:c.instructions+=5;goto B49792a;
case 0x49792d:c.instructions+=4;goto B49792d;
case 0x497930:c.instructions+=3;goto B497930;
case 0x497935:c.instructions+=2;goto B497935;
case 0x49793b:c.instructions+=1;goto B49793b;
case 0x497940:goto L497940;
case 0x497941:c.instructions+=2;goto B497941;
case 0x497942:c.instructions+=1;goto B497942;
case 0x497947:goto L497947;
case 0x49794a:c.instructions+=4;goto B49794a;
case 0x49794f:c.instructions+=3;goto B49794f;
case 0x497951:c.instructions+=2;goto B497951;
case 0x497953:c.instructions+=1;goto B497953;
case 0x497958:goto L497958;
case 0x49795b:c.instructions+=2;goto B49795b;
case 0x49795c:c.instructions+=1;goto B49795c;
case 0x497961:goto L497961;
case 0x497964:c.instructions+=8;goto B497964;
case 0x497967:c.instructions+=7;goto B497967;
case 0x497968:c.instructions+=6;goto B497968;
case 0x49796d:c.instructions+=5;goto B49796d;
case 0x49796f:c.instructions+=4;goto B49796f;
case 0x497970:c.instructions+=3;goto B497970;
case 0x497971:c.instructions+=2;goto B497971;
case 0x497973:c.instructions+=1;goto B497973;
case 0x497978:goto L497978;
case 0x49797e:c.instructions+=5;goto B49797e;
case 0x497984:c.instructions+=4;goto B497984;
case 0x497985:c.instructions+=3;goto B497985;
case 0x49798a:c.instructions+=2;goto B49798a;
case 0x49798d:c.instructions+=1;goto B49798d;
case 0x497992:goto L497992;
case 0x497998:c.instructions+=5;goto B497998;
case 0x49799d:c.instructions+=4;goto B49799d;
case 0x4979a3:c.instructions+=3;goto B4979a3;
case 0x4979a4:c.instructions+=2;goto B4979a4;
case 0x4979a5:c.instructions+=1;goto B4979a5;
case 0x4979aa:goto L4979aa;
case 0x4979ad:c.instructions+=5;goto B4979ad;
case 0x4979b3:c.instructions+=4;goto B4979b3;
case 0x4979b4:c.instructions+=3;goto B4979b4;
case 0x4979b9:c.instructions+=2;goto B4979b9;
case 0x4979ba:c.instructions+=1;goto B4979ba;
case 0x4979bf:goto L4979bf;
case 0x4979c4:c.instructions+=4;goto B4979c4;
case 0x4979ca:c.instructions+=3;goto B4979ca;
case 0x4979cf:c.instructions+=2;goto B4979cf;
case 0x4979d0:c.instructions+=1;goto B4979d0;
case 0x4979d5:goto L4979d5;
case 0x4979db:c.instructions+=3;goto B4979db;
case 0x4979de:c.instructions+=2;goto B4979de;
case 0x4979e1:c.instructions+=1;goto B4979e1;
case 0x4979e6:goto L4979e6;
case 0x4979e7:c.instructions+=1;goto B4979e7;
case 0x4979ec:goto L4979ec;
case 0x4979ed:c.instructions+=5;goto B4979ed;
case 0x4979f3:c.instructions+=4;goto B4979f3;
case 0x4979f4:c.instructions+=3;goto B4979f4;
case 0x4979f9:c.instructions+=2;goto B4979f9;
case 0x4979fa:c.instructions+=1;goto B4979fa;
case 0x4979ff:goto L4979ff;
case 0x497a04:c.instructions+=1;goto B497a04;
case 0x497a09:goto L497a09;
case 0x497a0c:c.instructions+=5;goto B497a0c;
case 0x497a0e:c.instructions+=4;goto B497a0e;
case 0x497a13:c.instructions+=3;goto B497a13;
case 0x497a19:c.instructions+=2;goto B497a19;
case 0x497a1a:c.instructions+=1;goto B497a1a;
case 0x497a1f:goto L497a1f;
case 0x497a20:c.instructions+=4;goto B497a20;
case 0x497a26:c.instructions+=3;goto B497a26;
case 0x497a2b:c.instructions+=2;goto B497a2b;
case 0x497a2c:c.instructions+=1;goto B497a2c;
case 0x497a31:goto L497a31;
case 0x497a32:c.instructions+=1;goto B497a32;
case 0x497a37:goto L497a37;
case 0x497a3a:c.instructions+=4;goto B497a3a;
case 0x497a40:c.instructions+=3;goto B497a40;
case 0x497a41:c.instructions+=2;goto B497a41;
case 0x497a43:c.instructions+=1;goto B497a43;
case 0x497a48:goto L497a48;
case 0x497a4e:c.instructions+=8;goto B497a4e;
case 0x497a54:c.instructions+=7;goto B497a54;
case 0x497a5a:c.instructions+=6;goto B497a5a;
case 0x497a5b:c.instructions+=5;goto B497a5b;
case 0x497a5c:c.instructions+=4;goto B497a5c;
case 0x497a5d:c.instructions+=3;goto B497a5d;
case 0x497a5e:c.instructions+=2;goto B497a5e;
case 0x497a64:c.instructions+=1;goto B497a64;
case 0x497a69:goto L497a69;
case 0x497a6c:c.instructions+=8;goto B497a6c;
case 0x497a6d:c.instructions+=7;goto B497a6d;
case 0x497a6f:c.instructions+=6;goto B497a6f;
case 0x497a70:c.instructions+=5;goto B497a70;
case 0x497a71:c.instructions+=4;goto B497a71;
case 0x497a78:c.instructions+=3;goto B497a78;
case 0x497a7a:c.instructions+=2;goto B497a7a;
case 0x497a7b:c.instructions+=1;goto B497a7b;
case 0x497a80:goto L497a80;
case 0x497a82:c.instructions+=11;goto B497a82;
case 0x497a87:c.instructions+=10;goto B497a87;
case 0x497a8d:c.instructions+=9;goto B497a8d;
case 0x497a8e:c.instructions+=8;goto B497a8e;
case 0x497a95:c.instructions+=7;goto B497a95;
case 0x497a96:c.instructions+=6;goto B497a96;
case 0x497a97:c.instructions+=5;goto B497a97;
case 0x497a99:c.instructions+=4;goto B497a99;
case 0x497a9d:c.instructions+=3;goto B497a9d;
case 0x497aa3:c.instructions+=2;goto B497aa3;
case 0x497aab:c.instructions+=1;goto B497aab;
case 0x497ab0:goto L497ab0;
case 0x497ab1:c.instructions+=1;goto B497ab1;
case 0x497ab6:goto L497ab6;
case 0x497ab9:c.instructions+=2;goto B497ab9;
case 0x497abb:c.instructions+=1;goto B497abb;
case 0x497abd:goto L497abd;
case 0x497ac2:goto L497ac2;
case 0x497ac3:c.instructions+=1;goto B497ac3;
case 0x497ac8:goto L497ac8;
case 0x497acb:goto L497acb;
case 0x497ace:c.instructions+=2;goto B497ace;
case 0x497ad3:c.instructions+=1;goto B497ad3;
case 0x497ad8:goto L497ad8;
case 0x497ada:c.instructions+=2;goto B497ada;
case 0x497ae2:c.instructions+=1;goto B497ae2;
case 0x497ae7:goto L497ae7;
case 0x497aeb:c.instructions+=4;goto B497aeb;
case 0x497aec:c.instructions+=3;goto B497aec;
case 0x497af3:c.instructions+=2;goto B497af3;
case 0x497af6:c.instructions+=1;goto B497af6;
case 0x497b00:goto L497b00;
case 0x497b01:c.instructions+=8;goto B497b01;
case 0x497b03:c.instructions+=7;goto B497b03;
case 0x497b04:c.instructions+=6;goto B497b04;
case 0x497b05:c.instructions+=5;goto B497b05;
case 0x497b08:c.instructions+=4;goto B497b08;
case 0x497b0a:c.instructions+=3;goto B497b0a;
case 0x497b0b:c.instructions+=2;goto B497b0b;
case 0x497b0e:c.instructions+=1;goto B497b0e;
case 0x497b13:goto L497b13;
case 0x497b19:c.instructions+=1;goto B497b19;
case 0x497b1b:goto L497b1b;
case 0x497b1d:goto L497b1d;
case 0x497b23:c.instructions+=1;goto B497b23;
case 0x497b25:goto L497b25;
case 0x497b2b:c.instructions+=1;goto B497b2b;
case 0x497b31:goto L497b31;
case 0x497b34:c.instructions+=4;goto B497b34;
case 0x497b36:c.instructions+=3;goto B497b36;
case 0x497b37:c.instructions+=2;goto B497b37;
case 0x497b41:c.instructions+=1;goto B497b41;
case 0x497b46:goto L497b46;
case 0x497b49:c.instructions+=4;goto B497b49;
case 0x497b4a:c.instructions+=3;goto B497b4a;
case 0x497b4b:c.instructions+=2;goto B497b4b;
case 0x497b4c:c.instructions+=1;goto B497b4c;
case 0x497b4f:goto L497b4f;
case 0x497b51:c.instructions+=1;goto B497b51;
case 0x497b56:goto L497b56;
case 0x497b59:c.instructions+=4;goto B497b59;
case 0x497b5a:c.instructions+=3;goto B497b5a;
case 0x497b5b:c.instructions+=2;goto B497b5b;
case 0x497b5c:c.instructions+=1;goto B497b5c;
case 0x497b5f:goto L497b5f;
case 0x497b64:c.instructions+=3;goto B497b64;
case 0x497b69:c.instructions+=2;goto B497b69;
case 0x497b6b:c.instructions+=1;goto B497b6b;
case 0x497b6d:goto L497b6d;
case 0x497b72:c.instructions+=1;goto B497b72;
case 0x497b77:goto L497b77;
case 0x497b7d:c.instructions+=3;goto B497b7d;
case 0x497b7f:c.instructions+=2;goto B497b7f;
case 0x497b83:c.instructions+=1;goto B497b83;
case 0x497b88:goto L497b88;
case 0x497b8e:c.instructions+=4;goto B497b8e;
case 0x497b8f:c.instructions+=3;goto B497b8f;
case 0x497b90:c.instructions+=2;goto B497b90;
case 0x497b91:c.instructions+=1;goto B497b91;
case 0x497b94:goto L497b94;
case 0x497b9a:c.instructions+=1;goto B497b9a;
case 0x497b9c:goto L497b9c;
case 0x497ba2:c.instructions+=2;goto B497ba2;
case 0x497ba3:c.instructions+=1;goto B497ba3;
case 0x497ba5:goto L497ba5;
case 0x497ba6:c.instructions+=1;goto B497ba6;
case 0x497ba8:goto L497ba8;
case 0x497bb2:c.instructions+=1;goto B497bb2;
case 0x497bb7:goto L497bb7;
case 0x497bb8:c.instructions+=3;goto B497bb8;
case 0x497bb9:c.instructions+=2;goto B497bb9;
case 0x497bba:c.instructions+=1;goto B497bba;
case 0x497bbd:goto L497bbd;
case 0x497bbf:c.instructions+=4;goto B497bbf;
case 0x497bc4:c.instructions+=3;goto B497bc4;
case 0x497bc9:c.instructions+=2;goto B497bc9;
case 0x497bd3:c.instructions+=1;goto B497bd3;
case 0x497bd8:goto L497bd8;
case 0x497bdb:goto L497bdb;
case 0x497bdc:c.instructions+=3;goto B497bdc;
case 0x497bdd:c.instructions+=2;goto B497bdd;
case 0x497bde:c.instructions+=1;goto B497bde;
case 0x497bf0:goto L497bf0;
case 0x497bf3:c.instructions+=7;goto B497bf3;
case 0x497bf4:c.instructions+=6;goto B497bf4;
case 0x497bf5:c.instructions+=5;goto B497bf5;
case 0x497bf7:c.instructions+=4;goto B497bf7;
case 0x497bfd:c.instructions+=3;goto B497bfd;
case 0x497bff:c.instructions+=2;goto B497bff;
case 0x497c04:c.instructions+=1;goto B497c04;
case 0x497c08:goto L497c08;
case 0x497c0a:goto L497c0a;
case 0x497c0d:c.instructions+=14;goto B497c0d;
case 0x497c11:c.instructions+=13;goto B497c11;
case 0x497c17:c.instructions+=12;goto B497c17;
case 0x497c19:c.instructions+=11;goto B497c19;
case 0x497c1d:c.instructions+=10;goto B497c1d;
case 0x497c1e:c.instructions+=9;goto B497c1e;
case 0x497c26:c.instructions+=8;goto B497c26;
case 0x497c2e:c.instructions+=7;goto B497c2e;
case 0x497c36:c.instructions+=6;goto B497c36;
case 0x497c3e:c.instructions+=5;goto B497c3e;
case 0x497c46:c.instructions+=4;goto B497c46;
case 0x497c4e:c.instructions+=3;goto B497c4e;
case 0x497c56:c.instructions+=2;goto B497c56;
case 0x497c5e:c.instructions+=1;goto B497c5e;
case 0x497c61:goto L497c61;
case 0x497c67:c.instructions+=8;goto B497c67;
case 0x497c6d:c.instructions+=7;goto B497c6d;
case 0x497c6f:c.instructions+=6;goto B497c6f;
case 0x497c73:c.instructions+=5;goto B497c73;
case 0x497c74:c.instructions+=4;goto B497c74;
case 0x497c7c:c.instructions+=3;goto B497c7c;
case 0x497c84:c.instructions+=2;goto B497c84;
case 0x497c8c:c.instructions+=1;goto B497c8c;
case 0x497c8f:goto L497c8f;
case 0x497c95:c.instructions+=8;goto B497c95;
case 0x497c9b:c.instructions+=7;goto B497c9b;
case 0x497c9d:c.instructions+=6;goto B497c9d;
case 0x497ca1:c.instructions+=5;goto B497ca1;
case 0x497ca2:c.instructions+=4;goto B497ca2;
case 0x497caa:c.instructions+=3;goto B497caa;
case 0x497cb2:c.instructions+=2;goto B497cb2;
case 0x497cba:c.instructions+=1;goto B497cba;
case 0x497cbd:goto L497cbd;
case 0x497cbe:c.instructions+=3;goto B497cbe;
case 0x497cbf:c.instructions+=2;goto B497cbf;
case 0x497cc2:c.instructions+=1;goto B497cc2;
case 0x497cd0:goto L497cd0;
case 0x497cd1:c.instructions+=4;goto B497cd1;
case 0x497cd3:c.instructions+=3;goto B497cd3;
case 0x497cd6:c.instructions+=2;goto B497cd6;
case 0x497cd7:c.instructions+=1;goto B497cd7;
case 0x497cdc:goto L497cdc;
case 0x497cdf:c.instructions+=2;goto B497cdf;
case 0x497ce5:c.instructions+=1;goto B497ce5;
case 0x497cea:goto L497cea;
case 0x497ceb:c.instructions+=3;goto B497ceb;
case 0x497ced:c.instructions+=2;goto B497ced;
case 0x497cf0:c.instructions+=1;goto B497cf0;
case 0x497cf5:goto L497cf5;
case 0x497cf7:c.instructions+=2;goto B497cf7;
case 0x497cf9:c.instructions+=1;goto B497cf9;
case 0x497cfc:goto L497cfc;
case 0x497cff:c.instructions+=1;goto B497cff;
case 0x497d04:goto L497d04;
case 0x497d07:c.instructions+=2;goto B497d07;
case 0x497d0d:c.instructions+=1;goto B497d0d;
case 0x497d12:goto L497d12;
case 0x497d13:c.instructions+=3;goto B497d13;
case 0x497d15:c.instructions+=2;goto B497d15;
case 0x497d18:c.instructions+=1;goto B497d18;
case 0x497d1d:goto L497d1d;
case 0x497d1f:c.instructions+=2;goto B497d1f;
case 0x497d21:c.instructions+=1;goto B497d21;
case 0x497d24:goto L497d24;
case 0x497d27:c.instructions+=1;goto B497d27;
case 0x497d2c:goto L497d2c;
case 0x497d2f:c.instructions+=2;goto B497d2f;
case 0x497d35:c.instructions+=1;goto B497d35;
case 0x497d3a:goto L497d3a;
case 0x497d3b:c.instructions+=3;goto B497d3b;
case 0x497d3d:c.instructions+=2;goto B497d3d;
case 0x497d40:c.instructions+=1;goto B497d40;
case 0x497d45:goto L497d45;
case 0x497d47:c.instructions+=4;goto B497d47;
case 0x497d48:c.instructions+=3;goto B497d48;
case 0x497d4a:c.instructions+=2;goto B497d4a;
case 0x497d4b:c.instructions+=1;goto B497d4b;
case 0x497d50:goto L497d50;
case 0x497d51:c.instructions+=19;goto B497d51;
case 0x497d53:c.instructions+=18;goto B497d53;
case 0x497d56:c.instructions+=17;goto B497d56;
case 0x497d59:c.instructions+=16;goto B497d59;
case 0x497d60:c.instructions+=15;goto B497d60;
case 0x497d62:c.instructions+=14;goto B497d62;
case 0x497d64:c.instructions+=13;goto B497d64;
case 0x497d67:c.instructions+=12;goto B497d67;
case 0x497d6c:c.instructions+=11;goto B497d6c;
case 0x497d6e:c.instructions+=10;goto B497d6e;
case 0x497d71:c.instructions+=9;goto B497d71;
case 0x497d72:c.instructions+=8;goto B497d72;
case 0x497d77:c.instructions+=7;goto B497d77;
case 0x497d7c:c.instructions+=6;goto B497d7c;
case 0x497d81:c.instructions+=5;goto B497d81;
case 0x497d86:c.instructions+=4;goto B497d86;
case 0x497d8b:c.instructions+=3;goto B497d8b;
case 0x497d90:c.instructions+=2;goto B497d90;
case 0x497d91:c.instructions+=1;goto B497d91;
case 0x497d96:goto L497d96;
case 0x497d99:c.instructions+=3;goto B497d99;
case 0x497d9c:c.instructions+=2;goto B497d9c;
case 0x497d9d:c.instructions+=1;goto B497d9d;
case 0x497da0:goto L497da0;
case 0x497da6:c.instructions+=4;goto B497da6;
case 0x497da9:c.instructions+=3;goto B497da9;
case 0x497daf:c.instructions+=2;goto B497daf;
case 0x497db4:c.instructions+=1;goto B497db4;
case 0x497db6:goto L497db6;
case 0x497dbd:c.instructions+=1;goto B497dbd;
case 0x497dc4:goto L497dc4;
case 0x497dc9:c.instructions+=1;goto B497dc9;
case 0x497dca:goto L497dca;
case 0x497dcf:goto L497dcf;
case 0x497ee0:goto L497ee0;
case 0x497ee2:c.instructions+=1;goto B497ee2;
case 0x497ee7:goto L497ee7;
case 0x497eea:c.instructions+=2;goto B497eea;
case 0x497eec:c.instructions+=1;goto B497eec;
case 0x497eee:goto L497eee;
case 0x497ef1:c.instructions+=1;goto B497ef1;
case 0x497ef3:goto L497ef3;
case 0x497ef9:c.instructions+=5;goto B497ef9;
case 0x497efa:c.instructions+=4;goto B497efa;
case 0x497efe:c.instructions+=3;goto B497efe;
case 0x497f04:c.instructions+=2;goto B497f04;
case 0x497f05:c.instructions+=1;goto B497f05;
case 0x497f0a:goto L497f0a;
case 0x497f0d:goto L497f0d;
case 0x497f0e:c.instructions+=4;goto B497f0e;
case 0x497f12:c.instructions+=3;goto B497f12;
case 0x497f14:c.instructions+=2;goto B497f14;
case 0x497f15:c.instructions+=1;goto B497f15;
case 0x497f1a:goto L497f1a;
case 0x497f20:goto L497f20;
case 0x497f24:c.instructions+=3;goto B497f24;
case 0x497f2a:c.instructions+=2;goto B497f2a;
case 0x497f2d:c.instructions+=1;goto B497f2d;
case 0x497f2f:goto L497f2f;
case 0x497f30:c.instructions+=1;goto B497f30;
case 0x497f37:goto L497f37;
case 0x497f3c:c.instructions+=1;goto B497f3c;
case 0x497f3e:goto L497f3e;
case 0x497f43:c.instructions+=1;goto B497f43;
case 0x497f45:goto L497f45;
case 0x497f4a:c.instructions+=1;goto B497f4a;
case 0x497f4c:goto L497f4c;
case 0x497f51:c.instructions+=1;goto B497f51;
case 0x497f53:goto L497f53;
case 0x497f58:c.instructions+=1;goto B497f58;
case 0x497f5a:goto L497f5a;
case 0x497f5f:goto L497f5f;
case 0x497f62:c.instructions+=1;goto B497f62;
case 0x497f67:goto L497f67;
case 0x497f6a:c.instructions+=3;goto B497f6a;
case 0x497f6b:c.instructions+=2;goto B497f6b;
case 0x497f70:c.instructions+=1;goto B497f70;
case 0x497f75:goto L497f75;
case 0x497f78:c.instructions+=3;goto B497f78;
case 0x497f79:c.instructions+=2;goto B497f79;
case 0x497f7a:c.instructions+=1;goto B497f7a;
case 0x497f7f:goto L497f7f;
case 0x497f82:c.instructions+=1;goto B497f82;
case 0x497f83:goto L497f83;
case 0x497fc0:goto L497fc0;
case 0x497fc1:c.instructions+=3;goto B497fc1;
case 0x497fc4:c.instructions+=2;goto B497fc4;
case 0x497fc9:c.instructions+=1;goto B497fc9;
case 0x497fce:goto L497fce;
case 0x497fcf:c.instructions+=9;goto B497fcf;
case 0x497fd1:c.instructions+=8;goto B497fd1;
case 0x497fd3:c.instructions+=7;goto B497fd3;
case 0x497fd8:c.instructions+=6;goto B497fd8;
case 0x497fdd:c.instructions+=5;goto B497fdd;
case 0x497fe2:c.instructions+=4;goto B497fe2;
case 0x497fe7:c.instructions+=3;goto B497fe7;
case 0x497fec:c.instructions+=2;goto B497fec;
case 0x497fed:c.instructions+=1;goto B497fed;
case 0x497ff2:goto L497ff2;
case 0x497ff5:c.instructions+=2;goto B497ff5;
case 0x497ff6:c.instructions+=1;goto B497ff6;
default:missing_instruction(c.pc);}
B497003:L497003:{c.instructions+=4;NFSU2_TR(0x497003);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B497006:{NFSU2_TR(0x497006);
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
B497008:{NFSU2_TR(0x497008);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B497010:{NFSU2_TR(0x497010);
if(r1(R+518)){{goto L497018;}}
}
B497012:L497012:{c.instructions+=3;NFSU2_TR(0x497012);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B497014:{NFSU2_TR(0x497014);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497016:{NFSU2_TR(0x497016);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497018ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B497018:L497018:{c.instructions+=3;NFSU2_TR(0x497018);
__builtin_memmove((R+4),(R+24),4);
}
B49701a:{NFSU2_TR(0x49701a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B497022:{NFSU2_TR(0x497022);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497027ull));
TAIL_STATIC(0x510d40u,510);
}
B497027:L497027:{c.instructions+=5;NFSU2_TR(0x497027);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49702b:{NFSU2_TR(0x49702b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49702c:{NFSU2_TR(0x49702c);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B497033:{NFSU2_TR(0x497033);
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
B497036:{NFSU2_TR(0x497036);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B497040:L497040:{c.instructions+=12;NFSU2_TR(0x497040);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B497046:{NFSU2_TR(0x497046);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497048:{NFSU2_TR(0x497048);
u8 U[4];
w4(U+0,u32(0x7728ebull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49704d:{NFSU2_TR(0x49704d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49704e:{NFSU2_TR(0x49704e);
__builtin_memmove((R+0),gp(0x862838),4);
}
B497053:{NFSU2_TR(0x497053);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49705a:{NFSU2_TR(0x49705a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x38ull))));
}
B49705d:{NFSU2_TR(0x49705d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49705f:{NFSU2_TR(0x49705f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497060:{NFSU2_TR(0x497060);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497061:{NFSU2_TR(0x497061);
__builtin_memmove((R+24),(R+4),4);
}
B497063:{NFSU2_TR(0x497063);
if(r1(R+518)){{goto L4971e3;}}
}
B497069:L497069:{c.instructions+=3;NFSU2_TR(0x497069);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B49706b:{NFSU2_TR(0x49706b);
w4(R+4,u32(0xcull));
}
B497070:{NFSU2_TR(0x497070);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B497074:L497074:{c.instructions+=1;NFSU2_TR(0x497074);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L497076;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x497074u);}goto L497074;}
}
B497076:L497076:{c.instructions+=14;NFSU2_TR(0x497076);
__builtin_memmove((R+4),gp(0x835c98),4);
}
B49707c:{NFSU2_TR(0x49707c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B497080:{NFSU2_TR(0x497080);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B497083:{NFSU2_TR(0x497083);
u8 U[4];
w4(U+0,u32(0x44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497085:{NFSU2_TR(0x497085);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f7bcull));
s4(u32(r4(U+0)),r4(U+4));
}
B49708d:{NFSU2_TR(0x49708d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f7b0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B497095:{NFSU2_TR(0x497095);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x78f7a4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49709d:{NFSU2_TR(0x49709d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f794ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4970a5:{NFSU2_TR(0x4970a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4970ad:{NFSU2_TR(0x4970ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x42380000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4970b5:{NFSU2_TR(0x4970b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x78f784ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4970bd:{NFSU2_TR(0x4970bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4970c1:{NFSU2_TR(0x4970c1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4970c5:{NFSU2_TR(0x4970c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4970caull));
TAIL_STATIC(0x575620u,575);
}
B4970ca:L4970ca:{c.instructions+=5;NFSU2_TR(0x4970ca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4970cd:{NFSU2_TR(0x4970cd);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4970d1:{NFSU2_TR(0x4970d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4970d3:{NFSU2_TR(0x4970d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4970db:{NFSU2_TR(0x4970db);
if(r1(R+518)){{goto L4970e6;}}
}
B4970dd:L4970dd:{c.instructions+=2;NFSU2_TR(0x4970dd);
__builtin_memmove((R+4),(R+0),4);
}
B4970df:{NFSU2_TR(0x4970df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4970e4ull));
TAIL_STATIC(0x4ff430u,4ff);
}
B4970e4:L4970e4:{c.instructions+=1;NFSU2_TR(0x4970e4);
{goto L4970e8;}
}
B4970e6:L4970e6:{c.instructions+=1;NFSU2_TR(0x4970e6);
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
B4970e8:L4970e8:{c.instructions+=8;NFSU2_TR(0x4970e8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4970ea:{NFSU2_TR(0x4970ea);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4970ee:{NFSU2_TR(0x4970ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4970f1:{NFSU2_TR(0x4970f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4970f3:{NFSU2_TR(0x4970f3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4970f4:{NFSU2_TR(0x4970f4);
__builtin_memmove((R+4),(R+0),4);
}
B4970f6:{NFSU2_TR(0x4970f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4970fe:{NFSU2_TR(0x4970fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497101ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B497101:L497101:{c.instructions+=4;NFSU2_TR(0x497101);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B497105:{NFSU2_TR(0x497105);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B497108:{NFSU2_TR(0x497108);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497109:{NFSU2_TR(0x497109);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49710eull));
TAIL_STATIC(0x4ff550u,4ff);
}
B49710e:L49710e:{c.instructions+=4;NFSU2_TR(0x49710e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B497111:{NFSU2_TR(0x497111);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B497113:{NFSU2_TR(0x497113);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497115:{NFSU2_TR(0x497115);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497118ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B497118:L497118:{c.instructions+=3;NFSU2_TR(0x497118);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49711b:{NFSU2_TR(0x49711b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49711d:{NFSU2_TR(0x49711d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497120ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B497120:L497120:{c.instructions+=9;NFSU2_TR(0x497120);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B497124:{NFSU2_TR(0x497124);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B49712a:{NFSU2_TR(0x49712a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49712d:{NFSU2_TR(0x49712d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B497130:{NFSU2_TR(0x497130);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B497133:{NFSU2_TR(0x497133);
u8 U[4];
w4(U+0,u32(0x78f778ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497138:{NFSU2_TR(0x497138);
u8 U[4];
w4(U+0,u32(0x317ad6f2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49713d:{NFSU2_TR(0x49713d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49713e:{NFSU2_TR(0x49713e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497143ull));
TAIL_STATIC(0x537b80u,537);
}
B497143:L497143:{c.instructions+=9;NFSU2_TR(0x497143);
__builtin_memmove((R+4),gp(0x835c74),4);
}
B497149:{NFSU2_TR(0x497149);
__builtin_memmove((R+8),gp(0x835c70),4);
}
B49714f:{NFSU2_TR(0x49714f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B497152:{NFSU2_TR(0x497152);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497153:{NFSU2_TR(0x497153);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497154:{NFSU2_TR(0x497154);
u8 U[4];
w4(U+0,u32(0x78f770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497159:{NFSU2_TR(0x497159);
u8 U[4];
w4(U+0,u32(0x317ad6f3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49715e:{NFSU2_TR(0x49715e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49715f:{NFSU2_TR(0x49715f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497164ull));
TAIL_STATIC(0x537b80u,537);
}
B497164:L497164:{c.instructions+=4;NFSU2_TR(0x497164);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B497167:{NFSU2_TR(0x497167);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497169:{NFSU2_TR(0x497169);
w4(R+4,u32(0x85ad40ull));
}
B49716e:{NFSU2_TR(0x49716e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497173ull));
TAIL_STATIC(0x500c00u,500);
}
B497173:L497173:{c.instructions+=2;NFSU2_TR(0x497173);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B497175:{NFSU2_TR(0x497175);
if(r1(R+518)){{goto L4972a9;}}
}
B49717b:L49717b:{c.instructions+=9;NFSU2_TR(0x49717b);
__builtin_memmove((R+4),gp(0x835c7c),4);
}
B497181:{NFSU2_TR(0x497181);
__builtin_memmove((R+8),gp(0x835c78),4);
}
B497187:{NFSU2_TR(0x497187);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49718a:{NFSU2_TR(0x49718a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49718b:{NFSU2_TR(0x49718b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49718c:{NFSU2_TR(0x49718c);
u8 U[4];
w4(U+0,u32(0x78f770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497191:{NFSU2_TR(0x497191);
u8 U[4];
w4(U+0,u32(0x317ad6f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497196:{NFSU2_TR(0x497196);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497197:{NFSU2_TR(0x497197);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49719cull));
TAIL_STATIC(0x537b80u,537);
}
B49719c:L49719c:{c.instructions+=9;NFSU2_TR(0x49719c);
__builtin_memmove((R+4),gp(0x835c84),4);
}
B4971a2:{NFSU2_TR(0x4971a2);
__builtin_memmove((R+8),gp(0x835c80),4);
}
B4971a8:{NFSU2_TR(0x4971a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4971ab:{NFSU2_TR(0x4971ab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4971ac:{NFSU2_TR(0x4971ac);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4971ad:{NFSU2_TR(0x4971ad);
u8 U[4];
w4(U+0,u32(0x78f770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4971b2:{NFSU2_TR(0x4971b2);
u8 U[4];
w4(U+0,u32(0x317ad6f5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4971b7:{NFSU2_TR(0x4971b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4971b8:{NFSU2_TR(0x4971b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4971bdull));
TAIL_STATIC(0x537b80u,537);
}
B4971bd:L4971bd:{c.instructions+=9;NFSU2_TR(0x4971bd);
__builtin_memmove((R+4),gp(0x835c94),4);
}
B4971c3:{NFSU2_TR(0x4971c3);
__builtin_memmove((R+8),gp(0x835c90),4);
}
B4971c9:{NFSU2_TR(0x4971c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4971cc:{NFSU2_TR(0x4971cc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4971cd:{NFSU2_TR(0x4971cd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4971ce:{NFSU2_TR(0x4971ce);
u8 U[4];
w4(U+0,u32(0x78f770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4971d3:{NFSU2_TR(0x4971d3);
u8 U[4];
w4(U+0,u32(0x317ad6f6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4971d8:{NFSU2_TR(0x4971d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4971d9:{NFSU2_TR(0x4971d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4971deull));
TAIL_STATIC(0x537b80u,537);
}
B4971de:L4971de:{c.instructions+=1;NFSU2_TR(0x4971de);
{goto L4972a6;}
}
B4971e3:L4971e3:{c.instructions+=5;NFSU2_TR(0x4971e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4971e6:{NFSU2_TR(0x4971e6);
u8 U[4];
w4(U+0,u32(0x2eeeaa14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4971eb:{NFSU2_TR(0x4971eb);
u8 U[4];
w4(U+0,u32(0x4d2f5c61ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4971f0:{NFSU2_TR(0x4971f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4971f1:{NFSU2_TR(0x4971f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4971f6ull));
TAIL_STATIC(0x537a10u,537);
}
B4971f6:L4971f6:{c.instructions+=3;NFSU2_TR(0x4971f6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4971f9:{NFSU2_TR(0x4971f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4971fa:{NFSU2_TR(0x4971fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4971ffull));
TAIL_STATIC(0x50c900u,50c);
}
B4971ff:L4971ff:{c.instructions+=6;NFSU2_TR(0x4971ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B497202:{NFSU2_TR(0x497202);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B497205:{NFSU2_TR(0x497205);
u8 U[4];
w4(U+0,u32(0xfd123b59ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49720a:{NFSU2_TR(0x49720a);
u8 U[4];
w4(U+0,u32(0x4d2f5c62ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49720f:{NFSU2_TR(0x49720f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497210:{NFSU2_TR(0x497210);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497215ull));
TAIL_STATIC(0x537a10u,537);
}
B497215:L497215:{c.instructions+=3;NFSU2_TR(0x497215);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B497218:{NFSU2_TR(0x497218);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497219:{NFSU2_TR(0x497219);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49721eull));
TAIL_STATIC(0x50c900u,50c);
}
B49721e:L49721e:{c.instructions+=2;NFSU2_TR(0x49721e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B497221:{NFSU2_TR(0x497221);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B497223:L497223:{c.instructions+=5;NFSU2_TR(0x497223);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B497226:{NFSU2_TR(0x497226);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x317ad6f2ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49722c:{NFSU2_TR(0x49722c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49722d:{NFSU2_TR(0x49722d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49722e:{NFSU2_TR(0x49722e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497233ull));
TAIL_STATIC(0x5379c0u,537);
}
B497233:L497233:{c.instructions+=2;NFSU2_TR(0x497233);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497234:{NFSU2_TR(0x497234);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497239ull));
TAIL_STATIC(0x50ca00u,50c);
}
B497239:L497239:{c.instructions+=4;NFSU2_TR(0x497239);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B49723c:{NFSU2_TR(0x49723c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B49723d:{NFSU2_TR(0x49723d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B497240:{NFSU2_TR(0x497240);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x497223u);}goto L497223;}}
}
B497242:L497242:{c.instructions+=4;NFSU2_TR(0x497242);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B497245:{NFSU2_TR(0x497245);
u8 U[4];
w4(U+0,u32(0x7342982dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49724a:{NFSU2_TR(0x49724a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49724b:{NFSU2_TR(0x49724b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497250ull));
TAIL_STATIC(0x5379c0u,537);
}
B497250:L497250:{c.instructions+=2;NFSU2_TR(0x497250);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497251:{NFSU2_TR(0x497251);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497256ull));
TAIL_STATIC(0x50ca00u,50c);
}
B497256:L497256:{c.instructions+=4;NFSU2_TR(0x497256);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B497259:{NFSU2_TR(0x497259);
u8 U[4];
w4(U+0,u32(0xd734d0b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49725e:{NFSU2_TR(0x49725e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49725f:{NFSU2_TR(0x49725f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497264ull));
TAIL_STATIC(0x5379c0u,537);
}
B497264:L497264:{c.instructions+=2;NFSU2_TR(0x497264);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497265:{NFSU2_TR(0x497265);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49726aull));
TAIL_STATIC(0x50ca00u,50c);
}
B49726a:L49726a:{c.instructions+=4;NFSU2_TR(0x49726a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49726d:{NFSU2_TR(0x49726d);
u8 U[4];
w4(U+0,u32(0xbdcd0d7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497272:{NFSU2_TR(0x497272);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497273:{NFSU2_TR(0x497273);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497278ull));
TAIL_STATIC(0x5379c0u,537);
}
B497278:L497278:{c.instructions+=2;NFSU2_TR(0x497278);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497279:{NFSU2_TR(0x497279);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49727eull));
TAIL_STATIC(0x50ca00u,50c);
}
B49727e:L49727e:{c.instructions+=4;NFSU2_TR(0x49727e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B497281:{NFSU2_TR(0x497281);
u8 U[4];
w4(U+0,u32(0xd734c2cfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497286:{NFSU2_TR(0x497286);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497287:{NFSU2_TR(0x497287);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49728cull));
TAIL_STATIC(0x5379c0u,537);
}
B49728c:L49728c:{c.instructions+=2;NFSU2_TR(0x49728c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49728d:{NFSU2_TR(0x49728d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497292ull));
TAIL_STATIC(0x50ca00u,50c);
}
B497292:L497292:{c.instructions+=4;NFSU2_TR(0x497292);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B497295:{NFSU2_TR(0x497295);
u8 U[4];
w4(U+0,u32(0x8dafa5e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49729a:{NFSU2_TR(0x49729a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49729b:{NFSU2_TR(0x49729b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4972a0ull));
TAIL_STATIC(0x5379c0u,537);
}
B4972a0:L4972a0:{c.instructions+=2;NFSU2_TR(0x4972a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4972a1:{NFSU2_TR(0x4972a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4972a6ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4972a6:L4972a6:{c.instructions+=1;NFSU2_TR(0x4972a6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x3cull))));
}
B4972a9:L4972a9:{c.instructions+=3;NFSU2_TR(0x4972a9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4972ab:{NFSU2_TR(0x4972ab);
w4(R+4,u32(0x85ad40ull));
}
B4972b0:{NFSU2_TR(0x4972b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4972b5ull));
TAIL_STATIC(0x500c00u,500);
}
B4972b5:L4972b5:{c.instructions+=2;NFSU2_TR(0x4972b5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4972b7:{NFSU2_TR(0x4972b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49731f;}}
}
B4972b9:L4972b9:{c.instructions+=3;NFSU2_TR(0x4972b9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4972ba:{NFSU2_TR(0x4972ba);
w4(R+28,u32(0x4d2f5c63ull));
}
B4972bf:{NFSU2_TR(0x4972bf);
w4(R+12,u32(0x3ull));
}
B4972c4:L4972c4:{c.instructions+=5;NFSU2_TR(0x4972c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4972c7:{NFSU2_TR(0x4972c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x476fece6ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4972cd:{NFSU2_TR(0x4972cd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4972ce:{NFSU2_TR(0x4972ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4972cf:{NFSU2_TR(0x4972cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4972d4ull));
TAIL_STATIC(0x5379c0u,537);
}
B4972d4:L4972d4:{c.instructions+=2;NFSU2_TR(0x4972d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4972d5:{NFSU2_TR(0x4972d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4972daull));
TAIL_STATIC(0x50ca00u,50c);
}
B4972da:L4972da:{c.instructions+=4;NFSU2_TR(0x4972da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4972dd:{NFSU2_TR(0x4972dd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4972de:{NFSU2_TR(0x4972de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4972df:{NFSU2_TR(0x4972df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4972e4ull));
TAIL_STATIC(0x5379c0u,537);
}
B4972e4:L4972e4:{c.instructions+=2;NFSU2_TR(0x4972e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4972e5:{NFSU2_TR(0x4972e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4972eaull));
TAIL_STATIC(0x50ca00u,50c);
}
B4972ea:L4972ea:{c.instructions+=4;NFSU2_TR(0x4972ea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4972ed:{NFSU2_TR(0x4972ed);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4972ee:{NFSU2_TR(0x4972ee);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B4972ef:{NFSU2_TR(0x4972ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4972c4u);}goto L4972c4;}}
}
B4972f1:L4972f1:{c.instructions+=3;NFSU2_TR(0x4972f1);
w4(R+28,u32(0x2ull));
}
B4972f6:{NFSU2_TR(0x4972f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4972f7:{NFSU2_TR(0x4972f7);
{goto L497300;}
}
B497300:L497300:{c.instructions+=5;NFSU2_TR(0x497300);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B497303:{NFSU2_TR(0x497303);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x317ad6f2ull))));
__builtin_memmove((R+4),(U+0),4);
}
B497309:{NFSU2_TR(0x497309);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49730a:{NFSU2_TR(0x49730a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49730b:{NFSU2_TR(0x49730b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497310ull));
TAIL_STATIC(0x5379c0u,537);
}
B497310:L497310:{c.instructions+=2;NFSU2_TR(0x497310);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497311:{NFSU2_TR(0x497311);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497316ull));
TAIL_STATIC(0x50ca00u,50c);
}
B497316:L497316:{c.instructions+=4;NFSU2_TR(0x497316);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B497319:{NFSU2_TR(0x497319);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B49731a:{NFSU2_TR(0x49731a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B49731d:{NFSU2_TR(0x49731d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x497300u);}goto L497300;}}
}
B49731f:L49731f:{c.instructions+=6;NFSU2_TR(0x49731f);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B497323:{NFSU2_TR(0x497323);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B497324:{NFSU2_TR(0x497324);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B497325:{NFSU2_TR(0x497325);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49732c:{NFSU2_TR(0x49732c);
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
B49732f:{NFSU2_TR(0x49732f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B497330:L497330:{c.instructions+=12;NFSU2_TR(0x497330);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B497333:{NFSU2_TR(0x497333);
__builtin_memmove((R+0),gp(0x862838),4);
}
B497338:{NFSU2_TR(0x497338);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497339:{NFSU2_TR(0x497339);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B49733c:{NFSU2_TR(0x49733c);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B49733f:{NFSU2_TR(0x49733f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x835cbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B497345:{NFSU2_TR(0x497345);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B497347:{NFSU2_TR(0x497347);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497348:{NFSU2_TR(0x497348);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497349:{NFSU2_TR(0x497349);
__builtin_memmove((R+28),(R+4),4);
}
B49734b:{NFSU2_TR(0x49734b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49734f:{NFSU2_TR(0x49734f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L49744d;}}
}
B497355:L497355:{c.instructions+=3;NFSU2_TR(0x497355);
w4(R+24,u32(0x2734fb0eull));
}
B49735a:{NFSU2_TR(0x49735a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x835ca0ull))));
__builtin_memmove((R+12),(U+0),4);
}
B497360:{NFSU2_TR(0x497360);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B497364:L497364:{c.instructions+=5;NFSU2_TR(0x497364);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B497367:{NFSU2_TR(0x497367);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdb74b4dfull))));
__builtin_memmove((R+4),(U+0),4);
}
B49736d:{NFSU2_TR(0x49736d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49736e:{NFSU2_TR(0x49736e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49736f:{NFSU2_TR(0x49736f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497374ull));
TAIL_STATIC(0x5379c0u,537);
}
B497374:L497374:{c.instructions+=2;NFSU2_TR(0x497374);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497375:{NFSU2_TR(0x497375);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49737aull));
TAIL_STATIC(0x50ca50u,50c);
}
B49737a:L49737a:{c.instructions+=6;NFSU2_TR(0x49737a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49737d:{NFSU2_TR(0x49737d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B497380:{NFSU2_TR(0x497380);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497381:{NFSU2_TR(0x497381);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497382:{NFSU2_TR(0x497382);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B497386:{NFSU2_TR(0x497386);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49738bull));
TAIL_STATIC(0x537a10u,537);
}
B49738b:L49738b:{c.instructions+=6;NFSU2_TR(0x49738b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ef26ce4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B497391:{NFSU2_TR(0x497391);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B497395:{NFSU2_TR(0x497395);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B497398:{NFSU2_TR(0x497398);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497399:{NFSU2_TR(0x497399);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49739a:{NFSU2_TR(0x49739a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49739full));
TAIL_STATIC(0x537a10u,537);
}
B49739f:L49739f:{c.instructions+=8;NFSU2_TR(0x49739f);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4973a3:{NFSU2_TR(0x4973a3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4973a6:{NFSU2_TR(0x4973a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8cb04f3ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4973ac:{NFSU2_TR(0x4973ac);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B4973af:{NFSU2_TR(0x4973af);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4973b0:{NFSU2_TR(0x4973b0);
u8 U[4];
w4(U+0,u32(0x35ccc129ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4973b5:{NFSU2_TR(0x4973b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4973b9:{NFSU2_TR(0x4973b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4973beull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4973be:L4973be:{c.instructions+=5;NFSU2_TR(0x4973be);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4973c1:{NFSU2_TR(0x4973c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4973c2:{NFSU2_TR(0x4973c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4973c6:{NFSU2_TR(0x4973c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4973c7:{NFSU2_TR(0x4973c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4973ccull));
TAIL_STATIC(0x537be0u,537);
}
B4973cc:L4973cc:{c.instructions+=5;NFSU2_TR(0x4973cc);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4973d0:{NFSU2_TR(0x4973d0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4973d3:{NFSU2_TR(0x4973d3);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B4973d6:{NFSU2_TR(0x4973d6);
u8 U[4];
w4(U+0,u32(0x30353cdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4973db:{NFSU2_TR(0x4973db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4973e0ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4973e0:L4973e0:{c.instructions+=5;NFSU2_TR(0x4973e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4973e4:{NFSU2_TR(0x4973e4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4973e7:{NFSU2_TR(0x4973e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4973e8:{NFSU2_TR(0x4973e8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4973e9:{NFSU2_TR(0x4973e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4973eeull));
TAIL_STATIC(0x537be0u,537);
}
B4973ee:L4973ee:{c.instructions+=5;NFSU2_TR(0x4973ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4973f1:{NFSU2_TR(0x4973f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d658262ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4973f7:{NFSU2_TR(0x4973f7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4973f8:{NFSU2_TR(0x4973f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4973f9:{NFSU2_TR(0x4973f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4973feull));
TAIL_STATIC(0x537a60u,537);
}
B4973fe:L4973fe:{c.instructions+=4;NFSU2_TR(0x4973fe);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+4),(U+0),1);
}
B497400:{NFSU2_TR(0x497400);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B497403:{NFSU2_TR(0x497403);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B497405:{NFSU2_TR(0x497405);
if(r1(R+518)){{goto L49740e;}}
}
B497407:L497407:{c.instructions+=2;NFSU2_TR(0x497407);
u8 U[4];
w4(U+0,u32(0x62bc0dfcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49740c:{NFSU2_TR(0x49740c);
{goto L497413;}
}
B49740e:L49740e:{c.instructions+=1;NFSU2_TR(0x49740e);
u8 U[4];
w4(U+0,u32(0xb90f50bbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497413:L497413:{c.instructions+=2;NFSU2_TR(0x497413);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497414:{NFSU2_TR(0x497414);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497419ull));
TAIL_STATIC(0x50c990u,50c);
}
B497419:L497419:{c.instructions+=7;NFSU2_TR(0x497419);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49741d:{NFSU2_TR(0x49741d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B497420:{NFSU2_TR(0x497420);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x8ull))));
}
B497423:{NFSU2_TR(0x497423);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B497424:{NFSU2_TR(0x497424);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B497425:{NFSU2_TR(0x497425);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B497429:{NFSU2_TR(0x497429);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x497364u);}goto L497364;}}
}
B49742f:L49742f:{c.instructions+=3;NFSU2_TR(0x49742f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B497433:{NFSU2_TR(0x497433);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B497435:{NFSU2_TR(0x497435);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L49744d;}}
}
B497437:L497437:{c.instructions+=4;NFSU2_TR(0x497437);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49743a:{NFSU2_TR(0x49743a);
u8 U[4];
w4(U+0,u32(0x42e73d71ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49743f:{NFSU2_TR(0x49743f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497440:{NFSU2_TR(0x497440);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497445ull));
TAIL_STATIC(0x5379c0u,537);
}
B497445:L497445:{c.instructions+=2;NFSU2_TR(0x497445);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497446:{NFSU2_TR(0x497446);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49744bull));
TAIL_STATIC(0x50ca00u,50c);
}
B49744b:L49744b:{c.instructions+=1;NFSU2_TR(0x49744b);
{goto L497461;}
}
B49744d:L49744d:{c.instructions+=4;NFSU2_TR(0x49744d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B497450:{NFSU2_TR(0x497450);
u8 U[4];
w4(U+0,u32(0x42e73d71ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497455:{NFSU2_TR(0x497455);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497456:{NFSU2_TR(0x497456);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49745bull));
TAIL_STATIC(0x5379c0u,537);
}
B49745b:L49745b:{c.instructions+=2;NFSU2_TR(0x49745b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49745c:{NFSU2_TR(0x49745c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497461ull));
TAIL_STATIC(0x50ca50u,50c);
}
B497461:L497461:{c.instructions+=4;NFSU2_TR(0x497461);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B497465:{NFSU2_TR(0x497465);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B497468:{NFSU2_TR(0x497468);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B49746b:{NFSU2_TR(0x49746b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L49748f;}}
}
B49746d:L49746d:{c.instructions+=1;NFSU2_TR(0x49746d);
__builtin_memmove((R+4),(R+4),4);
}
B497470:L497470:{c.instructions+=5;NFSU2_TR(0x497470);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B497473:{NFSU2_TR(0x497473);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2a9afedull))));
__builtin_memmove((R+4),(U+0),4);
}
B497479:{NFSU2_TR(0x497479);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49747a:{NFSU2_TR(0x49747a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49747b:{NFSU2_TR(0x49747b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497480ull));
TAIL_STATIC(0x5379c0u,537);
}
B497480:L497480:{c.instructions+=2;NFSU2_TR(0x497480);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497481:{NFSU2_TR(0x497481);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497486ull));
TAIL_STATIC(0x50ca00u,50c);
}
B497486:L497486:{c.instructions+=4;NFSU2_TR(0x497486);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B497489:{NFSU2_TR(0x497489);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B49748a:{NFSU2_TR(0x49748a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B49748d:{NFSU2_TR(0x49748d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x497470u);}goto L497470;}}
}
B49748f:L49748f:{c.instructions+=5;NFSU2_TR(0x49748f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B497490:{NFSU2_TR(0x497490);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B497491:{NFSU2_TR(0x497491);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B497492:{NFSU2_TR(0x497492);
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
B497495:{NFSU2_TR(0x497495);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4974a0:L4974a0:{c.instructions+=43;NFSU2_TR(0x4974a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x80ull))));
}
B4974a6:{NFSU2_TR(0x4974a6);
w4(R+0,u32(0xffull));
}
B4974ab:{NFSU2_TR(0x4974ab);
w4(R+4,u32(0x80ull));
}
B4974b0:{NFSU2_TR(0x4974b0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4974b4:{NFSU2_TR(0x4974b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4974b8:{NFSU2_TR(0x4974b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4974bc:{NFSU2_TR(0x4974bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4974c0:{NFSU2_TR(0x4974c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4974c4:{NFSU2_TR(0x4974c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4974c8:{NFSU2_TR(0x4974c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4974cc:{NFSU2_TR(0x4974cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4974d0:{NFSU2_TR(0x4974d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4974d4:{NFSU2_TR(0x4974d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4974db:{NFSU2_TR(0x4974db);
w4(R+8,u32(0xc8ull));
}
B4974e0:{NFSU2_TR(0x4974e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4974e1:{NFSU2_TR(0x4974e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4974e5:{NFSU2_TR(0x4974e5);
w4(R+24,u32(0x30ull));
}
B4974ea:{NFSU2_TR(0x4974ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4974ee:{NFSU2_TR(0x4974ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4974f2:{NFSU2_TR(0x4974f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4974f6:{NFSU2_TR(0x4974f6);
w4(R+4,u32(0xeull));
}
B4974fb:{NFSU2_TR(0x4974fb);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4974fc:{NFSU2_TR(0x4974fc);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4974ff:{NFSU2_TR(0x4974ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x2dull));
s4(u32(r4(U+0)),r4(U+4));
}
B497507:{NFSU2_TR(0x497507);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49750b:{NFSU2_TR(0x49750b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49750f:{NFSU2_TR(0x49750f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x2bull));
s4(u32(r4(U+0)),r4(U+4));
}
B497517:{NFSU2_TR(0x497517);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xd5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49751f:{NFSU2_TR(0x49751f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x8aull));
s4(u32(r4(U+0)),r4(U+4));
}
B497527:{NFSU2_TR(0x497527);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xf4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49752f:{NFSU2_TR(0x49752f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0xcaull));
s4(u32(r4(U+0)),r4(U+4));
}
B497537:{NFSU2_TR(0x497537);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49753b:{NFSU2_TR(0x49753b);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49753f:{NFSU2_TR(0x49753f);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0xcfull));
s4(u32(r4(U+0)),r4(U+4));
}
B497547:{NFSU2_TR(0x497547);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49754b:{NFSU2_TR(0x49754b);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w4(U+4,u32(0x82ull));
s4(u32(r4(U+0)),r4(U+4));
}
B497553:{NFSU2_TR(0x497553);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
w4(U+4,u32(0x32ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49755b:{NFSU2_TR(0x49755b);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
w4(U+4,u32(0xb5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B497563:{NFSU2_TR(0x497563);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
w4(U+4,u32(0x4aull));
s4(u32(r4(U+0)),r4(U+4));
}
B49756b:{NFSU2_TR(0x49756b);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49756f:{NFSU2_TR(0x49756f);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
w4(U+4,u32(0x9cull));
s4(u32(r4(U+0)),r4(U+4));
}
B497577:{NFSU2_TR(0x497577);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49757b:{NFSU2_TR(0x49757b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L497668;}}
}
B497581:L497581:{c.instructions+=1;NFSU2_TR(0x497581);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x497688ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B497588:L497588:{c.instructions+=5;NFSU2_TR(0x497588);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49758f:{NFSU2_TR(0x49758f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B497593:{NFSU2_TR(0x497593);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497594:{NFSU2_TR(0x497594);
w4(R+24,u32(0x88c9990aull));
}
B497599:{NFSU2_TR(0x497599);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49759eull));
TAIL_STATIC(0x505560u,505);
}
B49759e:L49759e:{c.instructions+=4;NFSU2_TR(0x49759e);
__builtin_memmove((R+0),(R+24),4);
}
B4975a0:{NFSU2_TR(0x4975a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4975a1:{NFSU2_TR(0x4975a1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x80ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x80ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4975a7:{NFSU2_TR(0x4975a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4975a8:L4975a8:{c.instructions+=5;NFSU2_TR(0x4975a8);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4975ac:{NFSU2_TR(0x4975ac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4975ad:{NFSU2_TR(0x4975ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4975b4:{NFSU2_TR(0x4975b4);
w4(R+24,u32(0x8b2f36eeull));
}
B4975b9:{NFSU2_TR(0x4975b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4975beull));
TAIL_STATIC(0x505560u,505);
}
B4975be:L4975be:{c.instructions+=4;NFSU2_TR(0x4975be);
__builtin_memmove((R+0),(R+24),4);
}
B4975c0:{NFSU2_TR(0x4975c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4975c1:{NFSU2_TR(0x4975c1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x80ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x80ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4975c7:{NFSU2_TR(0x4975c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4975c8:L4975c8:{c.instructions+=5;NFSU2_TR(0x4975c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4975cf:{NFSU2_TR(0x4975cf);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4975d3:{NFSU2_TR(0x4975d3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4975d4:{NFSU2_TR(0x4975d4);
w4(R+24,u32(0x470222fdull));
}
B4975d9:{NFSU2_TR(0x4975d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4975deull));
TAIL_STATIC(0x505560u,505);
}
B4975de:L4975de:{c.instructions+=4;NFSU2_TR(0x4975de);
__builtin_memmove((R+0),(R+24),4);
}
B4975e0:{NFSU2_TR(0x4975e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4975e1:{NFSU2_TR(0x4975e1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x80ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x80ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4975e7:{NFSU2_TR(0x4975e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4975e8:L4975e8:{c.instructions+=5;NFSU2_TR(0x4975e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4975ef:{NFSU2_TR(0x4975ef);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4975f3:{NFSU2_TR(0x4975f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4975f4:{NFSU2_TR(0x4975f4);
w4(R+24,u32(0xa9dfe648ull));
}
B4975f9:{NFSU2_TR(0x4975f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4975feull));
TAIL_STATIC(0x505560u,505);
}
B4975fe:L4975fe:{c.instructions+=4;NFSU2_TR(0x4975fe);
__builtin_memmove((R+0),(R+24),4);
}
B497600:{NFSU2_TR(0x497600);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B497601:{NFSU2_TR(0x497601);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x80ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x80ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B497607:{NFSU2_TR(0x497607);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B497608:L497608:{c.instructions+=5;NFSU2_TR(0x497608);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B49760c:{NFSU2_TR(0x49760c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49760d:{NFSU2_TR(0x49760d);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B497614:{NFSU2_TR(0x497614);
w4(R+24,u32(0x5d9b6555ull));
}
B497619:{NFSU2_TR(0x497619);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49761eull));
TAIL_STATIC(0x505560u,505);
}
B49761e:L49761e:{c.instructions+=4;NFSU2_TR(0x49761e);
__builtin_memmove((R+0),(R+24),4);
}
B497620:{NFSU2_TR(0x497620);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B497621:{NFSU2_TR(0x497621);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x80ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x80ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B497627:{NFSU2_TR(0x497627);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B497628:L497628:{c.instructions+=5;NFSU2_TR(0x497628);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49762f:{NFSU2_TR(0x49762f);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B497633:{NFSU2_TR(0x497633);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497634:{NFSU2_TR(0x497634);
w4(R+24,u32(0x756b5c1bull));
}
B497639:{NFSU2_TR(0x497639);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49763eull));
TAIL_STATIC(0x505560u,505);
}
B49763e:L49763e:{c.instructions+=4;NFSU2_TR(0x49763e);
__builtin_memmove((R+0),(R+24),4);
}
B497640:{NFSU2_TR(0x497640);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B497641:{NFSU2_TR(0x497641);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x80ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x80ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B497647:{NFSU2_TR(0x497647);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B497648:L497648:{c.instructions+=5;NFSU2_TR(0x497648);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49764f:{NFSU2_TR(0x49764f);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B497653:{NFSU2_TR(0x497653);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497654:{NFSU2_TR(0x497654);
w4(R+24,u32(0x55476a96ull));
}
B497659:{NFSU2_TR(0x497659);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49765eull));
TAIL_STATIC(0x505560u,505);
}
B49765e:L49765e:{c.instructions+=4;NFSU2_TR(0x49765e);
__builtin_memmove((R+0),(R+24),4);
}
B497660:{NFSU2_TR(0x497660);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B497661:{NFSU2_TR(0x497661);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x80ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x80ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B497667:{NFSU2_TR(0x497667);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B497668:L497668:{c.instructions+=5;NFSU2_TR(0x497668);
u8 U[4];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B49766c:{NFSU2_TR(0x49766c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49766d:{NFSU2_TR(0x49766d);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B497674:{NFSU2_TR(0x497674);
w4(R+24,u32(0x4b9b8f5aull));
}
B497679:{NFSU2_TR(0x497679);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49767eull));
TAIL_STATIC(0x505560u,505);
}
B49767e:L49767e:{c.instructions+=4;NFSU2_TR(0x49767e);
__builtin_memmove((R+0),(R+24),4);
}
B497680:{NFSU2_TR(0x497680);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B497681:{NFSU2_TR(0x497681);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x80ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x80ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B497687:{NFSU2_TR(0x497687);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4976b0:L4976b0:{c.instructions+=3;NFSU2_TR(0x4976b0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4976b2:{NFSU2_TR(0x4976b2);
w4(R+4,u32(0x860a60ull));
}
B4976b7:{NFSU2_TR(0x4976b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4976bcull));
TAIL_STATIC(0x514d30u,514);
}
B4976bc:L4976bc:{c.instructions+=3;NFSU2_TR(0x4976bc);
w4(R+4,u32(0x1ull));
}
B4976c1:{NFSU2_TR(0x4976c1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4976c3:{NFSU2_TR(0x4976c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4976f4;}}
}
B4976c5:L4976c5:{c.instructions+=4;NFSU2_TR(0x4976c5);
__builtin_memmove(gp(0x83632c),(R+4),4);
}
B4976cb:{NFSU2_TR(0x4976cb);
w4(R+4,u32(0x860a60ull));
}
B4976d0:{NFSU2_TR(0x4976d0);
s4(0x836330,u32(0x78f7c8ull));
}
B4976da:{NFSU2_TR(0x4976da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4976dfull));
TAIL_STATIC(0x514cf0u,514);
}
B4976df:L4976df:{c.instructions+=5;NFSU2_TR(0x4976df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4976e0:{NFSU2_TR(0x4976e0);
__builtin_memmove(gp(0x836334),(R+0),4);
}
B4976e5:{NFSU2_TR(0x4976e5);
__builtin_memmove((R+0),gp(0x836330),4);
}
B4976ea:{NFSU2_TR(0x4976ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4976eb:{NFSU2_TR(0x4976eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4976f0ull));
TAIL_STATIC(0x555e80u,555);
}
B4976f0:L4976f0:{c.instructions+=2;NFSU2_TR(0x4976f0);
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
B4976f3:{NFSU2_TR(0x4976f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4976f4:L4976f4:{c.instructions+=7;NFSU2_TR(0x4976f4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4976f6:{NFSU2_TR(0x4976f6);
u8 U[4];
w4(U+0,u32(0x78f7e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4976fb:{NFSU2_TR(0x4976fb);
s4(0x83632c,u32(0x2ull));
}
B497705:{NFSU2_TR(0x497705);
s4(0x836330,u32(0x78f7e4ull));
}
B49770f:{NFSU2_TR(0x49770f);
__builtin_memmove(gp(0x7f4434),(R+4),4);
}
B497715:{NFSU2_TR(0x497715);
s4(0x836334,u32(0x0ull));
}
B49771f:{NFSU2_TR(0x49771f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497724ull));
TAIL_STATIC(0x555e80u,555);
}
B497724:L497724:{c.instructions+=2;NFSU2_TR(0x497724);
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
B497727:{NFSU2_TR(0x497727);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B497730:L497730:{c.instructions+=2;NFSU2_TR(0x497730);
w4(R+4,u32(0x861e7cull));
}
B497735:{NFSU2_TR(0x497735);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49773aull));
TAIL_STATIC(0x502420u,502);
}
B49773a:L49773a:{c.instructions+=2;NFSU2_TR(0x49773a);
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
B49773c:{NFSU2_TR(0x49773c);
if(r1(R+518)){{goto L497748;}}
}
B49773e:L49773e:{c.instructions+=2;NFSU2_TR(0x49773e);
w4(R+4,u32(0x861e7cull));
}
B497743:{NFSU2_TR(0x497743);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497748ull));
TAIL_STATIC(0x5024f0u,502);
}
B497748:L497748:{c.instructions+=2;NFSU2_TR(0x497748);
u8 U[4];
w4(U+0,u32(0x78f7e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49774d:{NFSU2_TR(0x49774d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497752ull));
TAIL_STATIC(0x558f00u,558);
}
B497752:L497752:{c.instructions+=2;NFSU2_TR(0x497752);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B497753:{NFSU2_TR(0x497753);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B497760:L497760:{c.instructions+=6;NFSU2_TR(0x497760);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x100ull))));
}
B497766:{NFSU2_TR(0x497766);
u8 U[4];
w4(U+0,u32(0x4b5de3e9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49776b:{NFSU2_TR(0x49776b);
u8 U[4];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B497772:{NFSU2_TR(0x497772);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497777:{NFSU2_TR(0x497777);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497778:{NFSU2_TR(0x497778);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49777dull));
TAIL_STATIC(0x4ffa50u,4ff);
}
B49777d:L49777d:{c.instructions+=6;NFSU2_TR(0x49777d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B497780:{NFSU2_TR(0x497780);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497785:{NFSU2_TR(0x497785);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B497789:{NFSU2_TR(0x497789);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49778a:{NFSU2_TR(0x49778a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B497791:{NFSU2_TR(0x497791);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497796ull));
TAIL_STATIC(0x5149c0u,514);
}
B497796:L497796:{c.instructions+=9;NFSU2_TR(0x497796);
u8 U[8];
w4(U+0,u32(u32(u32(0x10cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49779d:{NFSU2_TR(0x49779d);
__builtin_memmove((R+8),(R+16),4);
}
B4977a1:{NFSU2_TR(0x4977a1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4977a2:{NFSU2_TR(0x4977a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4977a9:{NFSU2_TR(0x4977a9);
u8 U[4];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4977b0:{NFSU2_TR(0x4977b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4977b1:{NFSU2_TR(0x4977b1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4977b2:{NFSU2_TR(0x4977b2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4977b3:{NFSU2_TR(0x4977b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4977b8ull));
TAIL_STATIC(0x50c960u,50c);
}
B4977b8:L4977b8:{c.instructions+=2;NFSU2_TR(0x4977b8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x110ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x110ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x110ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4977be:{NFSU2_TR(0x4977be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4977c0:L4977c0:{c.instructions+=3;NFSU2_TR(0x4977c0);
w4(R+4,u32(0x860a60ull));
}
B4977c5:{NFSU2_TR(0x4977c5);
s4(0x83632c,u32(0x0ull));
}
B4977cf:{NFSU2_TR(0x4977cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4977d4ull));
TAIL_STATIC(0x514d80u,514);
}
B4977d4:L4977d4:{c.instructions+=3;NFSU2_TR(0x4977d4);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4977da:{NFSU2_TR(0x4977da);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4977dc:{NFSU2_TR(0x4977dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4977e1ull));
TAIL_STATIC(0x5f4240u,5f4);
}
B4977e1:L4977e1:{c.instructions+=2;NFSU2_TR(0x4977e1);
u8 U[4];
w4(U+0,u32(0x78f7e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4977e6:{NFSU2_TR(0x4977e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4977ebull));
TAIL_STATIC(0x5379a0u,537);
}
B4977eb:L4977eb:{c.instructions+=2;NFSU2_TR(0x4977eb);
u8 U[4];
w4(U+0,u32(0x78f7c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4977f0:{NFSU2_TR(0x4977f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4977f5ull));
TAIL_STATIC(0x5379a0u,537);
}
B4977f5:L4977f5:{c.instructions+=3;NFSU2_TR(0x4977f5);
__builtin_memmove((R+0),gp(0x836330),4);
}
B4977fa:{NFSU2_TR(0x4977fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4977fb:{NFSU2_TR(0x4977fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497800ull));
TAIL_STATIC(0x558f00u,558);
}
B497800:L497800:{c.instructions+=2;NFSU2_TR(0x497800);
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
B497803:{NFSU2_TR(0x497803);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B497810:L497810:{c.instructions+=4;NFSU2_TR(0x497810);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B497813:{NFSU2_TR(0x497813);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B497816:{NFSU2_TR(0x497816);
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
B497818:{NFSU2_TR(0x497818);
if(r1(R+518)){{goto L49784f;}}
}
B49781a:L49781a:{c.instructions+=3;NFSU2_TR(0x49781a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49781d:{NFSU2_TR(0x49781d);
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
B49781f:{NFSU2_TR(0x49781f);
if(r1(R+518)){{goto L49784f;}}
}
B497821:L497821:{c.instructions+=3;NFSU2_TR(0x497821);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B497824:{NFSU2_TR(0x497824);
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
B497826:{NFSU2_TR(0x497826);
if(r1(R+518)){{goto L49784f;}}
}
B497828:L497828:{c.instructions+=8;NFSU2_TR(0x497828);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49782e:{NFSU2_TR(0x49782e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B497831:{NFSU2_TR(0x497831);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497832:{NFSU2_TR(0x497832);
u8 U[4];
w4(U+0,u32(0x78f7c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497837:{NFSU2_TR(0x497837);
u8 U[4];
w4(U+0,u32(0x78f7e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49783c:{NFSU2_TR(0x49783c);
__builtin_memmove(gp(0x7f4434),(R+8),4);
}
B497842:{NFSU2_TR(0x497842);
__builtin_memmove(gp(0x836334),(R+0),4);
}
B497847:{NFSU2_TR(0x497847);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49784cull));
TAIL_STATIC(0x537980u,537);
}
B49784c:L49784c:{c.instructions+=1;NFSU2_TR(0x49784c);
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
B49784f:L49784f:{c.instructions+=1;NFSU2_TR(0x49784f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B497850:L497850:{c.instructions+=16;NFSU2_TR(0x497850);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497851:{NFSU2_TR(0x497851);
__builtin_memmove((R+20),(R+16),4);
}
B497853:{NFSU2_TR(0x497853);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497855:{NFSU2_TR(0x497855);
u8 U[4];
w4(U+0,u32(0x772913ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49785a:{NFSU2_TR(0x49785a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B497860:{NFSU2_TR(0x497860);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497861:{NFSU2_TR(0x497861);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B497868:{NFSU2_TR(0x497868);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xd0cull))));
}
B49786e:{NFSU2_TR(0x49786e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49786f:{NFSU2_TR(0x49786f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497870:{NFSU2_TR(0x497870);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497871:{NFSU2_TR(0x497871);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B497874:{NFSU2_TR(0x497874);
__builtin_memmove((R+24),(R+4),4);
}
B497876:{NFSU2_TR(0x497876);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497877:{NFSU2_TR(0x497877);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49787a:{NFSU2_TR(0x49787a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49787full));
TAIL_STATIC(0x551de0u,551);
}
B49787f:L49787f:{c.instructions+=7;NFSU2_TR(0x49787f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B497881:{NFSU2_TR(0x497881);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+12),(U+0),4);
}
B497884:{NFSU2_TR(0x497884);
u8 U[4];
w4(U+0,u32(0x78f824ull));
s4(u32(r4(R+24)),r4(U+0));
}
B49788a:{NFSU2_TR(0x49788a);
__builtin_memmove((R+4),(R+12),4);
}
B49788c:{NFSU2_TR(0x49788c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49788f:{NFSU2_TR(0x49788f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B497892:{NFSU2_TR(0x497892);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497897ull));
TAIL_STATIC(0x50db40u,50d);
}
B497897:L497897:{c.instructions+=9;NFSU2_TR(0x497897);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49789a:{NFSU2_TR(0x49789a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49789c:{NFSU2_TR(0x49789c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49789e:{NFSU2_TR(0x49789e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4978a0:{NFSU2_TR(0x4978a0);
u8 U[4];
w4(U+0,u32(0x78f814ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4978a5:{NFSU2_TR(0x4978a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4978ab:{NFSU2_TR(0x4978ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4978ac:{NFSU2_TR(0x4978ac);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4978b0:{NFSU2_TR(0x4978b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4978b5ull));
TAIL_STATIC(0x542ac0u,542);
}
B4978b5:L4978b5:{c.instructions+=4;NFSU2_TR(0x4978b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4978bf:{NFSU2_TR(0x4978bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4978c2:{NFSU2_TR(0x4978c2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4978c4:{NFSU2_TR(0x4978c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4978c9ull));
TAIL_STATIC(0x504820u,504);
}
B4978c9:L4978c9:{c.instructions+=1;NFSU2_TR(0x4978c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4978ceull));
TAIL_STATIC(0x50cea0u,50c);
}
B4978ce:L4978ce:{c.instructions+=2;NFSU2_TR(0x4978ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4978cf:{NFSU2_TR(0x4978cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4978d4ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4978d4:L4978d4:{c.instructions+=3;NFSU2_TR(0x4978d4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4978d7:{NFSU2_TR(0x4978d7);
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
B4978d9:{NFSU2_TR(0x4978d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4978f4;}}
}
B4978db:L4978db:{c.instructions+=5;NFSU2_TR(0x4978db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4978de:{NFSU2_TR(0x4978de);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4978e0:{NFSU2_TR(0x4978e0);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4978e5:{NFSU2_TR(0x4978e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4978e6:{NFSU2_TR(0x4978e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4978ebull));
TAIL_STATIC(0x50cea0u,50c);
}
B4978eb:L4978eb:{c.instructions+=2;NFSU2_TR(0x4978eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4978ec:{NFSU2_TR(0x4978ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4978f1ull));
TAIL_STATIC(0x555f10u,555);
}
B4978f1:L4978f1:{c.instructions+=1;NFSU2_TR(0x4978f1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4978f4:L4978f4:{c.instructions+=2;NFSU2_TR(0x4978f4);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4978fa:{NFSU2_TR(0x4978fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4978ffull));
TAIL_STATIC(0x54e6a0u,54e);
}
B4978ff:L4978ff:{c.instructions+=6;NFSU2_TR(0x4978ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B497902:{NFSU2_TR(0x497902);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B497905:{NFSU2_TR(0x497905);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497906:{NFSU2_TR(0x497906);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B49790c:{NFSU2_TR(0x49790c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49790d:{NFSU2_TR(0x49790d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497912ull));
TAIL_STATIC(0x54e6e0u,54e);
}
B497912:L497912:{c.instructions+=4;NFSU2_TR(0x497912);
__builtin_memmove((R+0),gp(0x83a9d8),4);
}
B497917:{NFSU2_TR(0x497917);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49791a:{NFSU2_TR(0x49791a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49791b:{NFSU2_TR(0x49791b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497920ull));
TAIL_STATIC(0x50d2d0u,50d);
}
B497920:L497920:{c.instructions+=3;NFSU2_TR(0x497920);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497921:{NFSU2_TR(0x497921);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497922:{NFSU2_TR(0x497922);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497927ull));
TAIL_STATIC(0x537950u,537);
}
B497927:L497927:{c.instructions+=6;NFSU2_TR(0x497927);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49792a:{NFSU2_TR(0x49792a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49792d:{NFSU2_TR(0x49792d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B497930:{NFSU2_TR(0x497930);
u8 U[4];
w4(U+0,u32(0x78f808ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497935:{NFSU2_TR(0x497935);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49793b:{NFSU2_TR(0x49793b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497940ull));
TAIL_STATIC(0x505450u,505);
}
B497940:L497940:{c.instructions+=3;NFSU2_TR(0x497940);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497941:{NFSU2_TR(0x497941);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497942:{NFSU2_TR(0x497942);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497947ull));
TAIL_STATIC(0x537a10u,537);
}
B497947:L497947:{c.instructions+=5;NFSU2_TR(0x497947);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B49794a:{NFSU2_TR(0x49794a);
u8 U[4];
w4(U+0,u32(0xc00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49794f:{NFSU2_TR(0x49794f);
__builtin_memmove((R+4),(R+12),4);
}
B497951:{NFSU2_TR(0x497951);
__builtin_memmove((R+28),(R+0),4);
}
B497953:{NFSU2_TR(0x497953);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497958ull));
TAIL_STATIC(0x50db80u,50d);
}
B497958:L497958:{c.instructions+=3;NFSU2_TR(0x497958);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49795b:{NFSU2_TR(0x49795b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49795c:{NFSU2_TR(0x49795c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497961ull));
TAIL_STATIC(0x51bd70u,51b);
}
B497961:L497961:{c.instructions+=9;NFSU2_TR(0x497961);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B497964:{NFSU2_TR(0x497964);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B497967:{NFSU2_TR(0x497967);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497968:{NFSU2_TR(0x497968);
u8 U[4];
w4(U+0,u32(0x78f7f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49796d:{NFSU2_TR(0x49796d);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49796f:{NFSU2_TR(0x49796f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497970:{NFSU2_TR(0x497970);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497971:{NFSU2_TR(0x497971);
__builtin_memmove((R+4),(R+12),4);
}
B497973:{NFSU2_TR(0x497973);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497978ull));
TAIL_STATIC(0x50dbb0u,50d);
}
B497978:L497978:{c.instructions+=6;NFSU2_TR(0x497978);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49797e:{NFSU2_TR(0x49797e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B497984:{NFSU2_TR(0x497984);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497985:{NFSU2_TR(0x497985);
w4(R+4,u32(0x860a60ull));
}
B49798a:{NFSU2_TR(0x49798a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49798d:{NFSU2_TR(0x49798d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497992ull));
TAIL_STATIC(0x514dc0u,514);
}
B497992:L497992:{c.instructions+=6;NFSU2_TR(0x497992);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B497998:{NFSU2_TR(0x497998);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49799d:{NFSU2_TR(0x49799d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4979a3:{NFSU2_TR(0x4979a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4979a4:{NFSU2_TR(0x4979a4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4979a5:{NFSU2_TR(0x4979a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4979aaull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x497760u);}goto L497760;}
}
B4979aa:L4979aa:{c.instructions+=6;NFSU2_TR(0x4979aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4979ad:{NFSU2_TR(0x4979ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4979b3:{NFSU2_TR(0x4979b3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4979b4:{NFSU2_TR(0x4979b4);
u8 U[4];
w4(U+0,u32(0x2c167533ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4979b9:{NFSU2_TR(0x4979b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4979ba:{NFSU2_TR(0x4979ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4979bfull));
TAIL_STATIC(0x537b80u,537);
}
B4979bf:L4979bf:{c.instructions+=5;NFSU2_TR(0x4979bf);
u8 U[4];
w4(U+0,u32(0x9f29d70dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4979c4:{NFSU2_TR(0x4979c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4979ca:{NFSU2_TR(0x4979ca);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4979cf:{NFSU2_TR(0x4979cf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4979d0:{NFSU2_TR(0x4979d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4979d5ull));
TAIL_STATIC(0x4ffa50u,4ff);
}
B4979d5:L4979d5:{c.instructions+=4;NFSU2_TR(0x4979d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4979db:{NFSU2_TR(0x4979db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4979de:{NFSU2_TR(0x4979de);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4979e1:{NFSU2_TR(0x4979e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4979e6ull));
TAIL_STATIC(0x501470u,501);
}
B4979e6:L4979e6:{c.instructions+=2;NFSU2_TR(0x4979e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4979e7:{NFSU2_TR(0x4979e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4979ecull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4979ec:L4979ec:{c.instructions+=6;NFSU2_TR(0x4979ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4979ed:{NFSU2_TR(0x4979ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4979f3:{NFSU2_TR(0x4979f3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4979f4:{NFSU2_TR(0x4979f4);
u8 U[4];
w4(U+0,u32(0xfeced617ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4979f9:{NFSU2_TR(0x4979f9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4979fa:{NFSU2_TR(0x4979fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4979ffull));
TAIL_STATIC(0x537b80u,537);
}
B4979ff:L4979ff:{c.instructions+=2;NFSU2_TR(0x4979ff);
u8 U[4];
w4(U+0,u32(0x604ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497a04:{NFSU2_TR(0x497a04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497a09ull));
TAIL_STATIC(0x575620u,575);
}
B497a09:L497a09:{c.instructions+=6;NFSU2_TR(0x497a09);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B497a0c:{NFSU2_TR(0x497a0c);
__builtin_memmove((R+28),(R+0),4);
}
B497a0e:{NFSU2_TR(0x497a0e);
u8 U[4];
w4(U+0,u32(0x604ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497a13:{NFSU2_TR(0x497a13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B497a19:{NFSU2_TR(0x497a19);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497a1a:{NFSU2_TR(0x497a1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497a1full));
TAIL_STATIC(0x514b00u,514);
}
B497a1f:L497a1f:{c.instructions+=5;NFSU2_TR(0x497a1f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497a20:{NFSU2_TR(0x497a20);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff2e8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B497a26:{NFSU2_TR(0x497a26);
u8 U[4];
w4(U+0,u32(0x604ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497a2b:{NFSU2_TR(0x497a2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497a2c:{NFSU2_TR(0x497a2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497a31ull));
TAIL_STATIC(0x512530u,512);
}
B497a31:L497a31:{c.instructions+=2;NFSU2_TR(0x497a31);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497a32:{NFSU2_TR(0x497a32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497a37ull));
TAIL_STATIC(0x575630u,575);
}
B497a37:L497a37:{c.instructions+=5;NFSU2_TR(0x497a37);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B497a3a:{NFSU2_TR(0x497a3a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff2e8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B497a40:{NFSU2_TR(0x497a40);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497a41:{NFSU2_TR(0x497a41);
__builtin_memmove((R+4),(R+12),4);
}
B497a43:{NFSU2_TR(0x497a43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497a48ull));
TAIL_STATIC(0x5446f0u,544);
}
B497a48:L497a48:{c.instructions+=9;NFSU2_TR(0x497a48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B497a4e:{NFSU2_TR(0x497a4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B497a54:{NFSU2_TR(0x497a54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B497a5a:{NFSU2_TR(0x497a5a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B497a5b:{NFSU2_TR(0x497a5b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497a5c:{NFSU2_TR(0x497a5c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497a5d:{NFSU2_TR(0x497a5d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497a5e:{NFSU2_TR(0x497a5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B497a64:{NFSU2_TR(0x497a64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497a69ull));
TAIL_STATIC(0x538080u,538);
}
B497a69:L497a69:{c.instructions+=9;NFSU2_TR(0x497a69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B497a6c:{NFSU2_TR(0x497a6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B497a6d:{NFSU2_TR(0x497a6d);
__builtin_memmove((R+0),(R+24),4);
}
B497a6f:{NFSU2_TR(0x497a6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B497a70:{NFSU2_TR(0x497a70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B497a71:{NFSU2_TR(0x497a71);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B497a78:{NFSU2_TR(0x497a78);
__builtin_memmove((R+16),(R+20),4);
}
B497a7a:{NFSU2_TR(0x497a7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B497a7b:{NFSU2_TR(0x497a7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B497a80:L497a80:{c.instructions+=12;NFSU2_TR(0x497a80);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497a82:{NFSU2_TR(0x497a82);
u8 U[4];
w4(U+0,u32(0x772913ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497a87:{NFSU2_TR(0x497a87);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B497a8d:{NFSU2_TR(0x497a8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497a8e:{NFSU2_TR(0x497a8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B497a95:{NFSU2_TR(0x497a95);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497a96:{NFSU2_TR(0x497a96);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497a97:{NFSU2_TR(0x497a97);
__builtin_memmove((R+24),(R+4),4);
}
B497a99:{NFSU2_TR(0x497a99);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B497a9d:{NFSU2_TR(0x497a9d);
u8 U[4];
w4(U+0,u32(0x78f824ull));
s4(u32(r4(R+24)),r4(U+0));
}
B497aa3:{NFSU2_TR(0x497aa3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B497aab:{NFSU2_TR(0x497aab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497ab0ull));
TAIL_STATIC(0x50cea0u,50c);
}
B497ab0:L497ab0:{c.instructions+=2;NFSU2_TR(0x497ab0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497ab1:{NFSU2_TR(0x497ab1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497ab6ull));
TAIL_STATIC(0x52cf60u,52c);
}
B497ab6:L497ab6:{c.instructions+=3;NFSU2_TR(0x497ab6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B497ab9:{NFSU2_TR(0x497ab9);
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
B497abb:{NFSU2_TR(0x497abb);
if(r1(R+518)){{goto L497acb;}}
}
B497abd:L497abd:{c.instructions+=1;NFSU2_TR(0x497abd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497ac2ull));
TAIL_STATIC(0x50cea0u,50c);
}
B497ac2:L497ac2:{c.instructions+=2;NFSU2_TR(0x497ac2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497ac3:{NFSU2_TR(0x497ac3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497ac8ull));
TAIL_STATIC(0x5379a0u,537);
}
B497ac8:L497ac8:{c.instructions+=1;NFSU2_TR(0x497ac8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B497acb:L497acb:{c.instructions+=3;NFSU2_TR(0x497acb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B497ace:{NFSU2_TR(0x497ace);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B497ad3:{NFSU2_TR(0x497ad3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497ad8ull));
TAIL_STATIC(0x50db70u,50d);
}
B497ad8:L497ad8:{c.instructions+=3;NFSU2_TR(0x497ad8);
__builtin_memmove((R+4),(R+24),4);
}
B497ada:{NFSU2_TR(0x497ada);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B497ae2:{NFSU2_TR(0x497ae2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497ae7ull));
TAIL_STATIC(0x510d40u,510);
}
B497ae7:L497ae7:{c.instructions+=5;NFSU2_TR(0x497ae7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B497aeb:{NFSU2_TR(0x497aeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B497aec:{NFSU2_TR(0x497aec);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B497af3:{NFSU2_TR(0x497af3);
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
B497af6:{NFSU2_TR(0x497af6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B497b00:L497b00:{c.instructions+=9;NFSU2_TR(0x497b00);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497b01:{NFSU2_TR(0x497b01);
__builtin_memmove((R+20),(R+16),4);
}
B497b03:{NFSU2_TR(0x497b03);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497b04:{NFSU2_TR(0x497b04);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497b05:{NFSU2_TR(0x497b05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B497b08:{NFSU2_TR(0x497b08);
__builtin_memmove((R+24),(R+4),4);
}
B497b0a:{NFSU2_TR(0x497b0a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497b0b:{NFSU2_TR(0x497b0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B497b0e:{NFSU2_TR(0x497b0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497b13ull));
TAIL_STATIC(0x5448f0u,544);
}
B497b13:L497b13:{c.instructions+=2;NFSU2_TR(0x497b13);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x911ab364ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B497b19:{NFSU2_TR(0x497b19);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L497b94;}}
}
B497b1b:L497b1b:{c.instructions+=1;NFSU2_TR(0x497b1b);
if(r1(R+518)){{goto L497b5f;}}
}
B497b1d:L497b1d:{c.instructions+=2;NFSU2_TR(0x497b1d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x35f8620bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B497b23:{NFSU2_TR(0x497b23);
if(r1(R+518)){{goto L497b4f;}}
}
B497b25:L497b25:{c.instructions+=2;NFSU2_TR(0x497b25);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x406415e3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x406415e3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x406415e3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B497b2b:{NFSU2_TR(0x497b2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L497bdb;}}
}
B497b31:L497b31:{c.instructions+=5;NFSU2_TR(0x497b31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B497b34:{NFSU2_TR(0x497b34);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497b36:{NFSU2_TR(0x497b36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497b37:{NFSU2_TR(0x497b37);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B497b41:{NFSU2_TR(0x497b41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497b46ull));
TAIL_STATIC(0x51de60u,51d);
}
B497b46:L497b46:{c.instructions+=5;NFSU2_TR(0x497b46);
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
B497b49:{NFSU2_TR(0x497b49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B497b4a:{NFSU2_TR(0x497b4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B497b4b:{NFSU2_TR(0x497b4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B497b4c:{NFSU2_TR(0x497b4c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B497b4f:L497b4f:{c.instructions+=2;NFSU2_TR(0x497b4f);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497b51:{NFSU2_TR(0x497b51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497b56ull));
TAIL_STATIC(0x50d180u,50d);
}
B497b56:L497b56:{c.instructions+=5;NFSU2_TR(0x497b56);
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
B497b59:{NFSU2_TR(0x497b59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B497b5a:{NFSU2_TR(0x497b5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B497b5b:{NFSU2_TR(0x497b5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B497b5c:{NFSU2_TR(0x497b5c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B497b5f:L497b5f:{c.instructions+=4;NFSU2_TR(0x497b5f);
__builtin_memmove((R+0),gp(0x83632c),4);
}
B497b64:{NFSU2_TR(0x497b64);
w4(R+28,u32(0x1ull));
}
B497b69:{NFSU2_TR(0x497b69);
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
B497b6b:{NFSU2_TR(0x497b6b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L497b88;}}
}
B497b6d:L497b6d:{c.instructions+=2;NFSU2_TR(0x497b6d);
w4(R+4,u32(0x860a60ull));
}
B497b72:{NFSU2_TR(0x497b72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497b77ull));
TAIL_STATIC(0x514d80u,514);
}
B497b77:L497b77:{c.instructions+=4;NFSU2_TR(0x497b77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B497b7d:{NFSU2_TR(0x497b7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B497b7f:{NFSU2_TR(0x497b7f);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B497b83:{NFSU2_TR(0x497b83);
__builtin_memmove(gp(0x7f4434),(R+0),4);
}
B497b88:L497b88:{c.instructions+=5;NFSU2_TR(0x497b88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B497b8e:{NFSU2_TR(0x497b8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B497b8f:{NFSU2_TR(0x497b8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B497b90:{NFSU2_TR(0x497b90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B497b91:{NFSU2_TR(0x497b91);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B497b94:L497b94:{c.instructions+=2;NFSU2_TR(0x497b94);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xc98356baull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xc98356baull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xc98356baull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B497b9a:{NFSU2_TR(0x497b9a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L497bdb;}}
}
B497b9c:L497b9c:{c.instructions+=3;NFSU2_TR(0x497b9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B497ba2:{NFSU2_TR(0x497ba2);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B497ba3:{NFSU2_TR(0x497ba3);
if(r1(R+518)){{goto L497bbd;}}
}
B497ba5:L497ba5:{c.instructions+=2;NFSU2_TR(0x497ba5);
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
B497ba6:{NFSU2_TR(0x497ba6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L497bdb;}}
}
B497ba8:L497ba8:{c.instructions+=2;NFSU2_TR(0x497ba8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B497bb2:{NFSU2_TR(0x497bb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497bb7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4977c0u);}goto L4977c0;}
}
B497bb7:L497bb7:{c.instructions+=4;NFSU2_TR(0x497bb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B497bb8:{NFSU2_TR(0x497bb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B497bb9:{NFSU2_TR(0x497bb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B497bba:{NFSU2_TR(0x497bba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B497bbd:L497bbd:{c.instructions+=5;NFSU2_TR(0x497bbd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497bbf:{NFSU2_TR(0x497bbf);
u8 U[4];
w4(U+0,u32(0x78f7e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497bc4:{NFSU2_TR(0x497bc4);
u8 U[4];
w4(U+0,u32(0x78f7c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497bc9:{NFSU2_TR(0x497bc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B497bd3:{NFSU2_TR(0x497bd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497bd8ull));
TAIL_STATIC(0x537980u,537);
}
B497bd8:L497bd8:{c.instructions+=1;NFSU2_TR(0x497bd8);
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
B497bdb:L497bdb:{c.instructions+=4;NFSU2_TR(0x497bdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B497bdc:{NFSU2_TR(0x497bdc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B497bdd:{NFSU2_TR(0x497bdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B497bde:{NFSU2_TR(0x497bde);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B497bf0:L497bf0:{c.instructions+=8;NFSU2_TR(0x497bf0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x30ull))));
}
B497bf3:{NFSU2_TR(0x497bf3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497bf4:{NFSU2_TR(0x497bf4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497bf5:{NFSU2_TR(0x497bf5);
__builtin_memmove((R+24),(R+4),4);
}
B497bf7:{NFSU2_TR(0x497bf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B497bfd:{NFSU2_TR(0x497bfd);
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
B497bff:{NFSU2_TR(0x497bff);
w4(R+4,u32(0xcull));
}
B497c04:{NFSU2_TR(0x497c04);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B497c08:L497c08:{c.instructions+=1;NFSU2_TR(0x497c08);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L497c0a;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x497c08u);}goto L497c08;}
}
B497c0a:L497c0a:{c.instructions+=15;NFSU2_TR(0x497c0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B497c0d:{NFSU2_TR(0x497c0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B497c11:{NFSU2_TR(0x497c11);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B497c17:{NFSU2_TR(0x497c17);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497c19:{NFSU2_TR(0x497c19);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B497c1d:{NFSU2_TR(0x497c1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497c1e:{NFSU2_TR(0x497c1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f6a4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B497c26:{NFSU2_TR(0x497c26);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f694ull));
s4(u32(r4(U+0)),r4(U+4));
}
B497c2e:{NFSU2_TR(0x497c2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f688ull));
s4(u32(r4(U+0)),r4(U+4));
}
B497c36:{NFSU2_TR(0x497c36);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B497c3e:{NFSU2_TR(0x497c3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B497c46:{NFSU2_TR(0x497c46);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B497c4e:{NFSU2_TR(0x497c4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B497c56:{NFSU2_TR(0x497c56);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x42380000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B497c5e:{NFSU2_TR(0x497c5e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497c61ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B497c61:L497c61:{c.instructions+=9;NFSU2_TR(0x497c61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B497c67:{NFSU2_TR(0x497c67);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B497c6d:{NFSU2_TR(0x497c6d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497c6f:{NFSU2_TR(0x497c6f);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B497c73:{NFSU2_TR(0x497c73);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497c74:{NFSU2_TR(0x497c74);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f674ull));
s4(u32(r4(U+0)),r4(U+4));
}
B497c7c:{NFSU2_TR(0x497c7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f660ull));
s4(u32(r4(U+0)),r4(U+4));
}
B497c84:{NFSU2_TR(0x497c84);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f650ull));
s4(u32(r4(U+0)),r4(U+4));
}
B497c8c:{NFSU2_TR(0x497c8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497c8full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B497c8f:L497c8f:{c.instructions+=9;NFSU2_TR(0x497c8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B497c95:{NFSU2_TR(0x497c95);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((R+4),(U+0),4);
}
B497c9b:{NFSU2_TR(0x497c9b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497c9d:{NFSU2_TR(0x497c9d);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B497ca1:{NFSU2_TR(0x497ca1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497ca2:{NFSU2_TR(0x497ca2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f63cull));
s4(u32(r4(U+0)),r4(U+4));
}
B497caa:{NFSU2_TR(0x497caa);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f62cull));
s4(u32(r4(U+0)),r4(U+4));
}
B497cb2:{NFSU2_TR(0x497cb2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f61cull));
s4(u32(r4(U+0)),r4(U+4));
}
B497cba:{NFSU2_TR(0x497cba);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497cbdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B497cbd:L497cbd:{c.instructions+=4;NFSU2_TR(0x497cbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B497cbe:{NFSU2_TR(0x497cbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B497cbf:{NFSU2_TR(0x497cbf);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B497cc2:{NFSU2_TR(0x497cc2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B497cd0:L497cd0:{c.instructions+=5;NFSU2_TR(0x497cd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497cd1:{NFSU2_TR(0x497cd1);
__builtin_memmove((R+24),(R+4),4);
}
B497cd3:{NFSU2_TR(0x497cd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B497cd6:{NFSU2_TR(0x497cd6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497cd7:{NFSU2_TR(0x497cd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497cdcull));
TAIL_STATIC(0x511e00u,511);
}
B497cdc:L497cdc:{c.instructions+=3;NFSU2_TR(0x497cdc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B497cdf:{NFSU2_TR(0x497cdf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B497ce5:{NFSU2_TR(0x497ce5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497ceaull));
TAIL_STATIC(0x5b53a0u,5b5);
}
B497cea:L497cea:{c.instructions+=4;NFSU2_TR(0x497cea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497ceb:{NFSU2_TR(0x497ceb);
__builtin_memmove((R+4),(R+28),4);
}
B497ced:{NFSU2_TR(0x497ced);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B497cf0:{NFSU2_TR(0x497cf0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497cf5ull));
TAIL_STATIC(0x4ff550u,4ff);
}
B497cf5:L497cf5:{c.instructions+=3;NFSU2_TR(0x497cf5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B497cf7:{NFSU2_TR(0x497cf7);
__builtin_memmove((R+4),(R+28),4);
}
B497cf9:{NFSU2_TR(0x497cf9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497cfcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B497cfc:L497cfc:{c.instructions+=2;NFSU2_TR(0x497cfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B497cff:{NFSU2_TR(0x497cff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497d04ull));
TAIL_STATIC(0x511e00u,511);
}
B497d04:L497d04:{c.instructions+=3;NFSU2_TR(0x497d04);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B497d07:{NFSU2_TR(0x497d07);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+28),(U+0),4);
}
B497d0d:{NFSU2_TR(0x497d0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497d12ull));
TAIL_STATIC(0x5b6a20u,5b6);
}
B497d12:L497d12:{c.instructions+=4;NFSU2_TR(0x497d12);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497d13:{NFSU2_TR(0x497d13);
__builtin_memmove((R+4),(R+28),4);
}
B497d15:{NFSU2_TR(0x497d15);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B497d18:{NFSU2_TR(0x497d18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497d1dull));
TAIL_STATIC(0x4ff550u,4ff);
}
B497d1d:L497d1d:{c.instructions+=3;NFSU2_TR(0x497d1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B497d1f:{NFSU2_TR(0x497d1f);
__builtin_memmove((R+4),(R+28),4);
}
B497d21:{NFSU2_TR(0x497d21);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497d24ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B497d24:L497d24:{c.instructions+=2;NFSU2_TR(0x497d24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B497d27:{NFSU2_TR(0x497d27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497d2cull));
TAIL_STATIC(0x511e00u,511);
}
B497d2c:L497d2c:{c.instructions+=3;NFSU2_TR(0x497d2c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B497d2f:{NFSU2_TR(0x497d2f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x160ull))));
}
B497d35:{NFSU2_TR(0x497d35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497d3aull));
TAIL_STATIC(0x5b5490u,5b5);
}
B497d3a:L497d3a:{c.instructions+=4;NFSU2_TR(0x497d3a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497d3b:{NFSU2_TR(0x497d3b);
__builtin_memmove((R+4),(R+24),4);
}
B497d3d:{NFSU2_TR(0x497d3d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B497d40:{NFSU2_TR(0x497d40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497d45ull));
TAIL_STATIC(0x4ff550u,4ff);
}
B497d45:L497d45:{c.instructions+=5;NFSU2_TR(0x497d45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B497d47:{NFSU2_TR(0x497d47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B497d48:{NFSU2_TR(0x497d48);
__builtin_memmove((R+4),(R+24),4);
}
B497d4a:{NFSU2_TR(0x497d4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B497d4b:{NFSU2_TR(0x497d4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B497d50:L497d50:{c.instructions+=20;NFSU2_TR(0x497d50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497d51:{NFSU2_TR(0x497d51);
__builtin_memmove((R+24),(R+4),4);
}
B497d53:{NFSU2_TR(0x497d53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B497d56:{NFSU2_TR(0x497d56);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B497d59:{NFSU2_TR(0x497d59);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa79ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B497d60:{NFSU2_TR(0x497d60);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B497d62:{NFSU2_TR(0x497d62);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B497d64:{NFSU2_TR(0x497d64);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B497d67:{NFSU2_TR(0x497d67);
u8 U[4];
w4(U+0,u32(0x30003d27ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497d6c:{NFSU2_TR(0x497d6c);
__builtin_memmove((R+0),(R+4),4);
}
B497d6e:{NFSU2_TR(0x497d6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B497d71:{NFSU2_TR(0x497d71);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497d72:{NFSU2_TR(0x497d72);
u8 U[4];
w4(U+0,u32(0x1fab5998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497d77:{NFSU2_TR(0x497d77);
u8 U[4];
w4(U+0,u32(0x1a2826e1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497d7c:{NFSU2_TR(0x497d7c);
u8 U[4];
w4(U+0,u32(0x5f5e3886ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497d81:{NFSU2_TR(0x497d81);
u8 U[4];
w4(U+0,u32(0x61cb0720ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497d86:{NFSU2_TR(0x497d86);
u8 U[4];
w4(U+0,u32(0x1b3a2485ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497d8b:{NFSU2_TR(0x497d8b);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497d90:{NFSU2_TR(0x497d90);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497d91:{NFSU2_TR(0x497d91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497d96ull));
TAIL_STATIC(0x558790u,558);
}
B497d96:L497d96:{c.instructions+=4;NFSU2_TR(0x497d96);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B497d99:{NFSU2_TR(0x497d99);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B497d9c:{NFSU2_TR(0x497d9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B497d9d:{NFSU2_TR(0x497d9d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B497da0:L497da0:{c.instructions+=5;NFSU2_TR(0x497da0);
__builtin_memmove((R+4),gp(0x850078),4);
}
B497da6:{NFSU2_TR(0x497da6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffffeull))));
}
B497da9:{NFSU2_TR(0x497da9);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xfeull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xfeull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xfeull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B497daf:{NFSU2_TR(0x497daf);
w4(R+0,u32(0x1ull));
}
B497db4:{NFSU2_TR(0x497db4);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L497dcf;}}
}
B497db6:L497db6:{c.instructions+=2;NFSU2_TR(0x497db6);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x497ddcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B497dbd:{NFSU2_TR(0x497dbd);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x497dd0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B497dc4:L497dc4:{c.instructions+=2;NFSU2_TR(0x497dc4);
w4(R+0,u32(0x1ull));
}
B497dc9:{NFSU2_TR(0x497dc9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B497dca:L497dca:{c.instructions+=1;NFSU2_TR(0x497dca);
w4(R+0,u32(0x1f8ull));
}
B497dcf:L497dcf:{c.instructions+=1;NFSU2_TR(0x497dcf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B497ee0:L497ee0:{c.instructions+=2;NFSU2_TR(0x497ee0);
__builtin_memmove((R+8),(R+4),4);
}
B497ee2:{NFSU2_TR(0x497ee2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497ee7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x497da0u);}goto L497da0;}
}
B497ee7:L497ee7:{c.instructions+=3;NFSU2_TR(0x497ee7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B497eea:{NFSU2_TR(0x497eea);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B497eec:{NFSU2_TR(0x497eec);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L497f0d;}}
}
B497eee:L497eee:{c.instructions+=2;NFSU2_TR(0x497eee);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B497ef1:{NFSU2_TR(0x497ef1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L497f0d;}}
}
B497ef3:L497ef3:{c.instructions+=6;NFSU2_TR(0x497ef3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0xab4cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B497ef9:{NFSU2_TR(0x497ef9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497efa:{NFSU2_TR(0x497efa);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B497efe:{NFSU2_TR(0x497efe);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x83ad90ull))));
}
B497f04:{NFSU2_TR(0x497f04);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497f05:{NFSU2_TR(0x497f05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497f0aull));
TAIL_STATIC(0x534850u,534);
}
B497f0a:L497f0a:{c.instructions+=1;NFSU2_TR(0x497f0a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B497f0d:L497f0d:{c.instructions+=5;NFSU2_TR(0x497f0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497f0e:{NFSU2_TR(0x497f0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B497f12:{NFSU2_TR(0x497f12);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B497f14:{NFSU2_TR(0x497f14);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497f15:{NFSU2_TR(0x497f15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497f1aull));
TAIL_STATIC(0x534850u,534);
}
B497f1a:L497f1a:{c.instructions+=1;NFSU2_TR(0x497f1a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B497f20:L497f20:{c.instructions+=4;NFSU2_TR(0x497f20);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B497f24:{NFSU2_TR(0x497f24);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B497f2a:{NFSU2_TR(0x497f2a);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xaull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xaull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B497f2d:{NFSU2_TR(0x497f2d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L497f83;}}
}
B497f2f:L497f2f:{c.instructions+=2;NFSU2_TR(0x497f2f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497f30:{NFSU2_TR(0x497f30);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x497f88ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B497f37:L497f37:{c.instructions+=2;NFSU2_TR(0x497f37);
u8 U[4];
w4(U+0,u32(0x93fdee74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497f3c:{NFSU2_TR(0x497f3c);
{goto L497f5f;}
}
B497f3e:L497f3e:{c.instructions+=2;NFSU2_TR(0x497f3e);
u8 U[4];
w4(U+0,u32(0xdcb9f861ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497f43:{NFSU2_TR(0x497f43);
{goto L497f5f;}
}
B497f45:L497f45:{c.instructions+=2;NFSU2_TR(0x497f45);
u8 U[4];
w4(U+0,u32(0x35102edfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497f4a:{NFSU2_TR(0x497f4a);
{goto L497f5f;}
}
B497f4c:L497f4c:{c.instructions+=2;NFSU2_TR(0x497f4c);
u8 U[4];
w4(U+0,u32(0xd7162cfaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497f51:{NFSU2_TR(0x497f51);
{goto L497f5f;}
}
B497f53:L497f53:{c.instructions+=2;NFSU2_TR(0x497f53);
u8 U[4];
w4(U+0,u32(0xb46377bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497f58:{NFSU2_TR(0x497f58);
{goto L497f5f;}
}
B497f5a:L497f5a:{c.instructions+=1;NFSU2_TR(0x497f5a);
u8 U[4];
w4(U+0,u32(0x30da61e1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497f5f:L497f5f:{c.instructions+=2;NFSU2_TR(0x497f5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B497f62:{NFSU2_TR(0x497f62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497f67ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B497f67:L497f67:{c.instructions+=4;NFSU2_TR(0x497f67);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B497f6a:{NFSU2_TR(0x497f6a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497f6b:{NFSU2_TR(0x497f6b);
u8 U[4];
w4(U+0,u32(0x78f834ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497f70:{NFSU2_TR(0x497f70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497f75ull));
TAIL_STATIC(0x50b9c0u,50b);
}
B497f75:L497f75:{c.instructions+=4;NFSU2_TR(0x497f75);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B497f78:{NFSU2_TR(0x497f78);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497f79:{NFSU2_TR(0x497f79);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497f7a:{NFSU2_TR(0x497f7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497f7full));
TAIL_STATIC(0x537b80u,537);
}
B497f7f:L497f7f:{c.instructions+=2;NFSU2_TR(0x497f7f);
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
B497f82:{NFSU2_TR(0x497f82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B497f83:L497f83:{c.instructions+=1;NFSU2_TR(0x497f83);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B497fc0:L497fc0:{c.instructions+=4;NFSU2_TR(0x497fc0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497fc1:{NFSU2_TR(0x497fc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B497fc4:{NFSU2_TR(0x497fc4);
u8 U[4];
w4(U+0,u32(0xc4f4678eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497fc9:{NFSU2_TR(0x497fc9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497fceull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B497fce:L497fce:{c.instructions+=10;NFSU2_TR(0x497fce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497fcf:{NFSU2_TR(0x497fcf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497fd1:{NFSU2_TR(0x497fd1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497fd3:{NFSU2_TR(0x497fd3);
u8 U[4];
w4(U+0,u32(0x1190b316ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497fd8:{NFSU2_TR(0x497fd8);
u8 U[4];
w4(U+0,u32(0x43a743aaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497fdd:{NFSU2_TR(0x497fdd);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497fe2:{NFSU2_TR(0x497fe2);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497fe7:{NFSU2_TR(0x497fe7);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497fec:{NFSU2_TR(0x497fec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B497fed:{NFSU2_TR(0x497fed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x497ff2ull));
TAIL_STATIC(0x558750u,558);
}
B497ff2:L497ff2:{c.instructions+=3;NFSU2_TR(0x497ff2);
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
B497ff5:{NFSU2_TR(0x497ff5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B497ff6:{NFSU2_TR(0x497ff6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x497,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
