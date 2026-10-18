#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_40a(u8* __restrict R,Cpu& c);
u32 body_40b(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_410(u8* __restrict R,Cpu& c);
u32 body_411(u8* __restrict R,Cpu& c);
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_57e(u8* __restrict R,Cpu& c);
u32 body_5d8(u8* __restrict R,Cpu& c);
u32 body_5d9(u8* __restrict R,Cpu& c);
u32 body_5ea(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_61c(u8* __restrict R,Cpu& c);
u32 body_631(u8* __restrict R,Cpu& c);
u32 body_637(u8* __restrict R,Cpu& c);
u32 body_63a(u8* __restrict R,Cpu& c);
u32 body_63b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x412,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x412,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_412(u8* __restrict R,Cpu& c);
u32 page_412(Cpu& c){return body_412(c.regs.data(),c);}
__attribute__((noinline)) u32 body_412(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x412000:goto L412000;
case 0x412002:goto L412002;
case 0x412009:c.instructions+=1;goto B412009;
case 0x41200b:goto L41200b;
case 0x41200d:goto L41200d;
case 0x412010:c.instructions+=4;goto B412010;
case 0x412013:c.instructions+=3;goto B412013;
case 0x41201a:c.instructions+=2;goto B41201a;
case 0x41201c:c.instructions+=1;goto B41201c;
case 0x41201e:goto L41201e;
case 0x412020:c.instructions+=2;goto B412020;
case 0x412021:c.instructions+=1;goto B412021;
case 0x412024:goto L412024;
case 0x412028:c.instructions+=1;goto B412028;
case 0x41202a:goto L41202a;
case 0x412032:goto L412032;
case 0x412036:c.instructions+=2;goto B412036;
case 0x41203a:c.instructions+=1;goto B41203a;
case 0x41203c:goto L41203c;
case 0x412040:c.instructions+=2;goto B412040;
case 0x412044:c.instructions+=1;goto B412044;
case 0x412046:goto L412046;
case 0x412049:c.instructions+=2;goto B412049;
case 0x41204b:c.instructions+=1;goto B41204b;
case 0x41204d:goto L41204d;
case 0x412054:c.instructions+=1;goto B412054;
case 0x412056:goto L412056;
case 0x412058:goto L412058;
case 0x41205b:c.instructions+=4;goto B41205b;
case 0x41205e:c.instructions+=3;goto B41205e;
case 0x412065:c.instructions+=2;goto B412065;
case 0x412067:c.instructions+=1;goto B412067;
case 0x412069:goto L412069;
case 0x41206b:c.instructions+=3;goto B41206b;
case 0x41206c:c.instructions+=2;goto B41206c;
case 0x41206e:c.instructions+=1;goto B41206e;
case 0x412071:goto L412071;
case 0x412073:goto L412073;
case 0x412079:goto L412079;
case 0x41207d:c.instructions+=4;goto B41207d;
case 0x412081:c.instructions+=3;goto B412081;
case 0x412083:c.instructions+=2;goto B412083;
case 0x412086:c.instructions+=1;goto B412086;
case 0x412088:goto L412088;
case 0x41208b:c.instructions+=4;goto B41208b;
case 0x41208f:c.instructions+=3;goto B41208f;
case 0x412093:c.instructions+=2;goto B412093;
case 0x412095:c.instructions+=1;goto B412095;
case 0x412097:goto L412097;
case 0x412099:goto L412099;
case 0x41209c:c.instructions+=5;goto B41209c;
case 0x41209d:c.instructions+=4;goto B41209d;
case 0x4120a0:c.instructions+=3;goto B4120a0;
case 0x4120a1:c.instructions+=2;goto B4120a1;
case 0x4120a3:c.instructions+=1;goto B4120a3;
case 0x4120a9:goto L4120a9;
case 0x4120ad:c.instructions+=6;goto B4120ad;
case 0x4120ae:c.instructions+=5;goto B4120ae;
case 0x4120af:c.instructions+=4;goto B4120af;
case 0x4120b0:c.instructions+=3;goto B4120b0;
case 0x4120b1:c.instructions+=2;goto B4120b1;
case 0x4120b2:c.instructions+=1;goto B4120b2;
case 0x4120c0:goto L4120c0;
case 0x4120c1:c.instructions+=9;goto B4120c1;
case 0x4120c5:c.instructions+=8;goto B4120c5;
case 0x4120c6:c.instructions+=7;goto B4120c6;
case 0x4120c8:c.instructions+=6;goto B4120c8;
case 0x4120cb:c.instructions+=5;goto B4120cb;
case 0x4120d2:c.instructions+=4;goto B4120d2;
case 0x4120d5:c.instructions+=3;goto B4120d5;
case 0x4120d6:c.instructions+=2;goto B4120d6;
case 0x4120da:c.instructions+=1;goto B4120da;
case 0x4120dc:goto L4120dc;
case 0x4120df:goto L4120df;
case 0x4120e3:c.instructions+=3;goto B4120e3;
case 0x4120e5:c.instructions+=2;goto B4120e5;
case 0x4120e7:c.instructions+=1;goto B4120e7;
case 0x4120e9:goto L4120e9;
case 0x4120eb:goto L4120eb;
case 0x4120ec:c.instructions+=2;goto B4120ec;
case 0x4120ee:c.instructions+=1;goto B4120ee;
case 0x4120f0:goto L4120f0;
case 0x4120f2:goto L4120f2;
case 0x4120f5:c.instructions+=2;goto B4120f5;
case 0x4120f7:c.instructions+=1;goto B4120f7;
case 0x4120f9:goto L4120f9;
case 0x4120fb:c.instructions+=1;goto B4120fb;
case 0x4120fd:goto L4120fd;
case 0x4120ff:c.instructions+=1;goto B4120ff;
case 0x412101:goto L412101;
case 0x412102:c.instructions+=6;goto B412102;
case 0x412104:c.instructions+=5;goto B412104;
case 0x412105:c.instructions+=4;goto B412105;
case 0x412106:c.instructions+=3;goto B412106;
case 0x41210a:c.instructions+=2;goto B41210a;
case 0x41210c:c.instructions+=1;goto B41210c;
case 0x412110:goto L412110;
case 0x412112:c.instructions+=3;goto B412112;
case 0x412115:c.instructions+=2;goto B412115;
case 0x412117:c.instructions+=1;goto B412117;
case 0x412119:goto L412119;
case 0x41211d:c.instructions+=3;goto B41211d;
case 0x41211f:c.instructions+=2;goto B41211f;
case 0x412120:c.instructions+=1;goto B412120;
case 0x412123:goto L412123;
case 0x412126:c.instructions+=2;goto B412126;
case 0x412127:c.instructions+=1;goto B412127;
case 0x412129:goto L412129;
case 0x41212a:c.instructions+=1;goto B41212a;
case 0x41212b:goto L41212b;
case 0x412130:c.instructions+=2;goto B412130;
case 0x412132:c.instructions+=1;goto B412132;
case 0x412134:goto L412134;
case 0x412138:c.instructions+=3;goto B412138;
case 0x41213b:c.instructions+=2;goto B41213b;
case 0x41213f:c.instructions+=1;goto B41213f;
case 0x412141:goto L412141;
case 0x412145:c.instructions+=3;goto B412145;
case 0x412148:c.instructions+=2;goto B412148;
case 0x41214a:c.instructions+=1;goto B41214a;
case 0x41214c:goto L41214c;
case 0x412150:c.instructions+=3;goto B412150;
case 0x412154:c.instructions+=2;goto B412154;
case 0x412158:c.instructions+=1;goto B412158;
case 0x41215a:goto L41215a;
case 0x41215f:c.instructions+=1;goto B41215f;
case 0x412161:goto L412161;
case 0x412164:c.instructions+=1;goto B412164;
case 0x412168:goto L412168;
case 0x412169:c.instructions+=3;goto B412169;
case 0x41216a:c.instructions+=2;goto B41216a;
case 0x41216b:c.instructions+=1;goto B41216b;
case 0x412170:goto L412170;
case 0x412176:c.instructions+=6;goto B412176;
case 0x412179:c.instructions+=5;goto B412179;
case 0x41217c:c.instructions+=4;goto B41217c;
case 0x41217d:c.instructions+=3;goto B41217d;
case 0x41217e:c.instructions+=2;goto B41217e;
case 0x41217f:c.instructions+=1;goto B41217f;
case 0x412181:goto L412181;
case 0x412185:c.instructions+=1;goto B412185;
case 0x412187:goto L412187;
case 0x412189:goto L412189;
case 0x41218d:c.instructions+=2;goto B41218d;
case 0x412191:c.instructions+=1;goto B412191;
case 0x412193:goto L412193;
case 0x412197:c.instructions+=2;goto B412197;
case 0x41219b:c.instructions+=1;goto B41219b;
case 0x41219d:goto L41219d;
case 0x4121a0:c.instructions+=2;goto B4121a0;
case 0x4121a2:c.instructions+=1;goto B4121a2;
case 0x4121a4:goto L4121a4;
case 0x4121ab:c.instructions+=1;goto B4121ab;
case 0x4121ad:goto L4121ad;
case 0x4121af:goto L4121af;
case 0x4121b2:c.instructions+=3;goto B4121b2;
case 0x4121b5:c.instructions+=2;goto B4121b5;
case 0x4121bc:c.instructions+=1;goto B4121bc;
case 0x4121c1:goto L4121c1;
case 0x4121c3:c.instructions+=1;goto B4121c3;
case 0x4121c5:goto L4121c5;
case 0x4121c7:goto L4121c7;
case 0x4121cc:c.instructions+=12;goto B4121cc;
case 0x4121cf:c.instructions+=11;goto B4121cf;
case 0x4121d3:c.instructions+=10;goto B4121d3;
case 0x4121d7:c.instructions+=9;goto B4121d7;
case 0x4121db:c.instructions+=8;goto B4121db;
case 0x4121de:c.instructions+=7;goto B4121de;
case 0x4121e2:c.instructions+=6;goto B4121e2;
case 0x4121e5:c.instructions+=5;goto B4121e5;
case 0x4121e7:c.instructions+=4;goto B4121e7;
case 0x4121eb:c.instructions+=3;goto B4121eb;
case 0x4121ed:c.instructions+=2;goto B4121ed;
case 0x4121f1:c.instructions+=1;goto B4121f1;
case 0x4121f4:goto L4121f4;
case 0x4121f5:c.instructions+=3;goto B4121f5;
case 0x4121f6:c.instructions+=2;goto B4121f6;
case 0x4121f8:c.instructions+=1;goto B4121f8;
case 0x4121fd:goto L4121fd;
case 0x412201:c.instructions+=8;goto B412201;
case 0x412202:c.instructions+=7;goto B412202;
case 0x412203:c.instructions+=6;goto B412203;
case 0x412204:c.instructions+=5;goto B412204;
case 0x412208:c.instructions+=4;goto B412208;
case 0x41220c:c.instructions+=3;goto B41220c;
case 0x412210:c.instructions+=2;goto B412210;
case 0x412213:c.instructions+=1;goto B412213;
case 0x412220:goto L412220;
case 0x412224:c.instructions+=9;goto B412224;
case 0x412225:c.instructions+=8;goto B412225;
case 0x412226:c.instructions+=7;goto B412226;
case 0x412229:c.instructions+=6;goto B412229;
case 0x41222c:c.instructions+=5;goto B41222c;
case 0x41222e:c.instructions+=4;goto B41222e;
case 0x41222f:c.instructions+=3;goto B41222f;
case 0x412231:c.instructions+=2;goto B412231;
case 0x412233:c.instructions+=1;goto B412233;
case 0x412235:goto L412235;
case 0x412239:c.instructions+=2;goto B412239;
case 0x41223d:c.instructions+=1;goto B41223d;
case 0x412240:goto L412240;
case 0x412242:c.instructions+=1;goto B412242;
case 0x412244:goto L412244;
case 0x412246:c.instructions+=3;goto B412246;
case 0x412249:c.instructions+=2;goto B412249;
case 0x41224b:c.instructions+=1;goto B41224b;
case 0x41224d:goto L41224d;
case 0x412250:c.instructions+=1;goto B412250;
case 0x412252:goto L412252;
case 0x412255:c.instructions+=1;goto B412255;
case 0x412257:goto L412257;
case 0x41225a:c.instructions+=1;goto B41225a;
case 0x41225c:goto L41225c;
case 0x41225f:c.instructions+=1;goto B41225f;
case 0x412261:goto L412261;
case 0x412265:c.instructions+=1;goto B412265;
case 0x412267:goto L412267;
case 0x41226d:goto L41226d;
case 0x41226f:c.instructions+=1;goto B41226f;
case 0x412271:goto L412271;
case 0x412274:c.instructions+=1;goto B412274;
case 0x412276:goto L412276;
case 0x412279:c.instructions+=1;goto B412279;
case 0x41227b:goto L41227b;
case 0x41227e:c.instructions+=1;goto B41227e;
case 0x412280:goto L412280;
case 0x412283:c.instructions+=1;goto B412283;
case 0x412285:goto L412285;
case 0x412289:c.instructions+=1;goto B412289;
case 0x41228b:goto L41228b;
case 0x412291:goto L412291;
case 0x412293:c.instructions+=5;goto B412293;
case 0x412295:c.instructions+=4;goto B412295;
case 0x412297:c.instructions+=3;goto B412297;
case 0x412299:c.instructions+=2;goto B412299;
case 0x41229c:c.instructions+=1;goto B41229c;
case 0x41229e:goto L41229e;
case 0x4122a0:c.instructions+=1;goto B4122a0;
case 0x4122a2:goto L4122a2;
case 0x4122a4:goto L4122a4;
case 0x4122a5:c.instructions+=3;goto B4122a5;
case 0x4122a8:c.instructions+=2;goto B4122a8;
case 0x4122aa:c.instructions+=1;goto B4122aa;
case 0x4122ac:goto L4122ac;
case 0x4122ad:c.instructions+=3;goto B4122ad;
case 0x4122ae:c.instructions+=2;goto B4122ae;
case 0x4122af:c.instructions+=1;goto B4122af;
case 0x4122c0:goto L4122c0;
case 0x4122c3:c.instructions+=6;goto B4122c3;
case 0x4122c4:c.instructions+=5;goto B4122c4;
case 0x4122c5:c.instructions+=4;goto B4122c5;
case 0x4122c7:c.instructions+=3;goto B4122c7;
case 0x4122cb:c.instructions+=2;goto B4122cb;
case 0x4122cf:c.instructions+=1;goto B4122cf;
case 0x4122d5:goto L4122d5;
case 0x4122d9:c.instructions+=2;goto B4122d9;
case 0x4122dd:c.instructions+=1;goto B4122dd;
case 0x4122e3:goto L4122e3;
case 0x4122e6:c.instructions+=2;goto B4122e6;
case 0x4122e8:c.instructions+=1;goto B4122e8;
case 0x4122ea:goto L4122ea;
case 0x4122f1:c.instructions+=1;goto B4122f1;
case 0x4122f3:goto L4122f3;
case 0x4122f5:goto L4122f5;
case 0x4122f8:c.instructions+=4;goto B4122f8;
case 0x4122fb:c.instructions+=3;goto B4122fb;
case 0x412302:c.instructions+=2;goto B412302;
case 0x412304:c.instructions+=1;goto B412304;
case 0x41230a:goto L41230a;
case 0x41230e:c.instructions+=9;goto B41230e;
case 0x412312:c.instructions+=8;goto B412312;
case 0x412315:c.instructions+=7;goto B412315;
case 0x412316:c.instructions+=6;goto B412316;
case 0x41231a:c.instructions+=5;goto B41231a;
case 0x41231d:c.instructions+=4;goto B41231d;
case 0x412320:c.instructions+=3;goto B412320;
case 0x412324:c.instructions+=2;goto B412324;
case 0x412328:c.instructions+=1;goto B412328;
case 0x41232a:goto L41232a;
case 0x41232c:c.instructions+=3;goto B41232c;
case 0x41232d:c.instructions+=2;goto B41232d;
case 0x41232f:c.instructions+=1;goto B41232f;
case 0x412332:goto L412332;
case 0x412334:c.instructions+=1;goto B412334;
case 0x412336:goto L412336;
case 0x412339:c.instructions+=1;goto B412339;
case 0x41233b:goto L41233b;
case 0x41233e:c.instructions+=2;goto B41233e;
case 0x412342:c.instructions+=1;goto B412342;
case 0x412344:goto L412344;
case 0x412347:c.instructions+=1;goto B412347;
case 0x412349:goto L412349;
case 0x41234c:c.instructions+=1;goto B41234c;
case 0x41234e:goto L41234e;
case 0x412351:c.instructions+=2;goto B412351;
case 0x412355:c.instructions+=1;goto B412355;
case 0x412357:goto L412357;
case 0x41235f:goto L41235f;
case 0x412360:c.instructions+=2;goto B412360;
case 0x412362:c.instructions+=1;goto B412362;
case 0x412367:goto L412367;
case 0x41236b:c.instructions+=2;goto B41236b;
case 0x41236f:c.instructions+=1;goto B41236f;
case 0x412373:goto L412373;
case 0x412377:c.instructions+=9;goto B412377;
case 0x41237b:c.instructions+=8;goto B41237b;
case 0x41237d:c.instructions+=7;goto B41237d;
case 0x41237e:c.instructions+=6;goto B41237e;
case 0x412382:c.instructions+=5;goto B412382;
case 0x412383:c.instructions+=4;goto B412383;
case 0x412384:c.instructions+=3;goto B412384;
case 0x412385:c.instructions+=2;goto B412385;
case 0x412387:c.instructions+=1;goto B412387;
case 0x41238a:goto L41238a;
case 0x41238b:c.instructions+=4;goto B41238b;
case 0x41238c:c.instructions+=3;goto B41238c;
case 0x41238d:c.instructions+=2;goto B41238d;
case 0x412390:c.instructions+=1;goto B412390;
case 0x412393:goto L412393;
case 0x412397:c.instructions+=7;goto B412397;
case 0x412398:c.instructions+=6;goto B412398;
case 0x41239e:c.instructions+=5;goto B41239e;
case 0x4123a5:c.instructions+=4;goto B4123a5;
case 0x4123ac:c.instructions+=3;goto B4123ac;
case 0x4123ad:c.instructions+=2;goto B4123ad;
case 0x4123b0:c.instructions+=1;goto B4123b0;
case 0x4123c0:goto L4123c0;
case 0x4123c6:c.instructions+=5;goto B4123c6;
case 0x4123c7:c.instructions+=4;goto B4123c7;
case 0x4123c9:c.instructions+=3;goto B4123c9;
case 0x4123cd:c.instructions+=2;goto B4123cd;
case 0x4123d1:c.instructions+=1;goto B4123d1;
case 0x4123d7:goto L4123d7;
case 0x4123db:c.instructions+=2;goto B4123db;
case 0x4123df:c.instructions+=1;goto B4123df;
case 0x4123e5:goto L4123e5;
case 0x4123e8:c.instructions+=2;goto B4123e8;
case 0x4123ea:c.instructions+=1;goto B4123ea;
case 0x4123ec:goto L4123ec;
case 0x4123f3:c.instructions+=1;goto B4123f3;
case 0x4123f5:goto L4123f5;
case 0x4123f7:goto L4123f7;
case 0x4123fa:c.instructions+=5;goto B4123fa;
case 0x4123fd:c.instructions+=4;goto B4123fd;
case 0x4123fe:c.instructions+=3;goto B4123fe;
case 0x412405:c.instructions+=2;goto B412405;
case 0x412407:c.instructions+=1;goto B412407;
case 0x412409:goto L412409;
case 0x41240a:c.instructions+=4;goto B41240a;
case 0x41240c:c.instructions+=3;goto B41240c;
case 0x412410:c.instructions+=2;goto B412410;
case 0x412412:c.instructions+=1;goto B412412;
case 0x412414:goto L412414;
case 0x412417:c.instructions+=1;goto B412417;
case 0x412419:goto L412419;
case 0x41241c:c.instructions+=2;goto B41241c;
case 0x412420:c.instructions+=1;goto B412420;
case 0x412422:goto L412422;
case 0x412425:c.instructions+=1;goto B412425;
case 0x412427:goto L412427;
case 0x41242a:c.instructions+=1;goto B41242a;
case 0x41242c:goto L41242c;
case 0x41242f:c.instructions+=2;goto B41242f;
case 0x412433:c.instructions+=1;goto B412433;
case 0x412435:goto L412435;
case 0x41243d:goto L41243d;
case 0x412441:c.instructions+=5;goto B412441;
case 0x412443:c.instructions+=4;goto B412443;
case 0x412444:c.instructions+=3;goto B412444;
case 0x412445:c.instructions+=2;goto B412445;
case 0x412447:c.instructions+=1;goto B412447;
case 0x41244a:goto L41244a;
case 0x41244e:c.instructions+=4;goto B41244e;
case 0x412450:c.instructions+=3;goto B412450;
case 0x412451:c.instructions+=2;goto B412451;
case 0x412453:c.instructions+=1;goto B412453;
case 0x412456:goto L412456;
case 0x412457:c.instructions+=2;goto B412457;
case 0x412459:c.instructions+=1;goto B412459;
case 0x41245e:goto L41245e;
case 0x412462:c.instructions+=2;goto B412462;
case 0x412463:c.instructions+=1;goto B412463;
case 0x412467:goto L412467;
case 0x412468:goto L412468;
case 0x412469:c.instructions+=1;goto B412469;
case 0x412470:goto L412470;
case 0x412474:c.instructions+=3;goto B412474;
case 0x41247a:c.instructions+=2;goto B41247a;
case 0x41247e:c.instructions+=1;goto B41247e;
case 0x412480:goto L412480;
case 0x412484:c.instructions+=2;goto B412484;
case 0x412488:c.instructions+=1;goto B412488;
case 0x41248a:goto L41248a;
case 0x41248d:c.instructions+=2;goto B41248d;
case 0x41248f:c.instructions+=1;goto B41248f;
case 0x412491:goto L412491;
case 0x412498:c.instructions+=1;goto B412498;
case 0x41249a:goto L41249a;
case 0x41249c:goto L41249c;
case 0x41249f:c.instructions+=5;goto B41249f;
case 0x4124a2:c.instructions+=4;goto B4124a2;
case 0x4124a3:c.instructions+=3;goto B4124a3;
case 0x4124aa:c.instructions+=2;goto B4124aa;
case 0x4124ac:c.instructions+=1;goto B4124ac;
case 0x4124ae:goto L4124ae;
case 0x4124b2:c.instructions+=3;goto B4124b2;
case 0x4124b4:c.instructions+=2;goto B4124b4;
case 0x4124b6:c.instructions+=1;goto B4124b6;
case 0x4124b8:goto L4124b8;
case 0x4124bb:c.instructions+=1;goto B4124bb;
case 0x4124bd:goto L4124bd;
case 0x4124c0:c.instructions+=2;goto B4124c0;
case 0x4124c4:c.instructions+=1;goto B4124c4;
case 0x4124c6:goto L4124c6;
case 0x4124c9:c.instructions+=1;goto B4124c9;
case 0x4124cb:goto L4124cb;
case 0x4124ce:c.instructions+=1;goto B4124ce;
case 0x4124d0:goto L4124d0;
case 0x4124d3:c.instructions+=2;goto B4124d3;
case 0x4124d7:c.instructions+=1;goto B4124d7;
case 0x4124d9:goto L4124d9;
case 0x4124e1:goto L4124e1;
case 0x4124e3:c.instructions+=2;goto B4124e3;
case 0x4124e4:c.instructions+=1;goto B4124e4;
case 0x4124e7:goto L4124e7;
case 0x4124e8:c.instructions+=2;goto B4124e8;
case 0x4124ea:c.instructions+=1;goto B4124ea;
case 0x4124ef:goto L4124ef;
case 0x4124f3:c.instructions+=1;goto B4124f3;
case 0x4124f5:goto L4124f5;
case 0x4124f6:goto L4124f6;
case 0x412500:goto L412500;
case 0x412503:c.instructions+=7;goto B412503;
case 0x412504:c.instructions+=6;goto B412504;
case 0x412505:c.instructions+=5;goto B412505;
case 0x412509:c.instructions+=4;goto B412509;
case 0x41250b:c.instructions+=3;goto B41250b;
case 0x41250d:c.instructions+=2;goto B41250d;
case 0x412511:c.instructions+=1;goto B412511;
case 0x412513:goto L412513;
case 0x412516:c.instructions+=1;goto B412516;
case 0x412518:goto L412518;
case 0x41251b:c.instructions+=1;goto B41251b;
case 0x41251d:goto L41251d;
case 0x412520:c.instructions+=1;goto B412520;
case 0x412522:goto L412522;
case 0x412523:c.instructions+=4;goto B412523;
case 0x412525:c.instructions+=3;goto B412525;
case 0x412526:c.instructions+=2;goto B412526;
case 0x412529:c.instructions+=1;goto B412529;
case 0x41252c:goto L41252c;
case 0x41252d:c.instructions+=5;goto B41252d;
case 0x41252e:c.instructions+=4;goto B41252e;
case 0x412532:c.instructions+=3;goto B412532;
case 0x412533:c.instructions+=2;goto B412533;
case 0x412535:c.instructions+=1;goto B412535;
case 0x41253a:goto L41253a;
case 0x41253b:c.instructions+=3;goto B41253b;
case 0x41253d:c.instructions+=2;goto B41253d;
case 0x412541:c.instructions+=1;goto B412541;
case 0x412546:goto L412546;
case 0x412548:c.instructions+=1;goto B412548;
case 0x41254a:goto L41254a;
case 0x41254e:c.instructions+=2;goto B41254e;
case 0x412550:c.instructions+=1;goto B412550;
case 0x412552:goto L412552;
case 0x412556:c.instructions+=1;goto B412556;
case 0x412558:goto L412558;
case 0x41255b:c.instructions+=2;goto B41255b;
case 0x41255c:c.instructions+=1;goto B41255c;
case 0x412561:goto L412561;
case 0x412563:c.instructions+=1;goto B412563;
case 0x412565:goto L412565;
case 0x41256a:c.instructions+=5;goto B41256a;
case 0x41256b:c.instructions+=4;goto B41256b;
case 0x41256c:c.instructions+=3;goto B41256c;
case 0x41256d:c.instructions+=2;goto B41256d;
case 0x41256f:c.instructions+=1;goto B41256f;
case 0x412574:goto L412574;
case 0x412576:c.instructions+=1;goto B412576;
case 0x412578:goto L412578;
case 0x412579:c.instructions+=6;goto B412579;
case 0x41257a:c.instructions+=5;goto B41257a;
case 0x41257b:c.instructions+=4;goto B41257b;
case 0x41257d:c.instructions+=3;goto B41257d;
case 0x41257e:c.instructions+=2;goto B41257e;
case 0x412581:c.instructions+=1;goto B412581;
case 0x412584:goto L412584;
case 0x412587:c.instructions+=1;goto B412587;
case 0x412589:goto L412589;
case 0x41258c:c.instructions+=1;goto B41258c;
case 0x41258e:goto L41258e;
case 0x412590:c.instructions+=1;goto B412590;
case 0x412592:goto L412592;
case 0x412594:goto L412594;
case 0x412597:c.instructions+=1;goto B412597;
case 0x412599:goto L412599;
case 0x41259c:c.instructions+=1;goto B41259c;
case 0x41259e:goto L41259e;
case 0x4125a0:c.instructions+=1;goto B4125a0;
case 0x4125a2:goto L4125a2;
case 0x4125a4:goto L4125a4;
case 0x4125a6:c.instructions+=1;goto B4125a6;
case 0x4125ac:goto L4125ac;
case 0x4125ae:c.instructions+=1;goto B4125ae;
case 0x4125b4:goto L4125b4;
case 0x4125ba:c.instructions+=5;goto B4125ba;
case 0x4125c1:c.instructions+=4;goto B4125c1;
case 0x4125c6:c.instructions+=3;goto B4125c6;
case 0x4125c8:c.instructions+=2;goto B4125c8;
case 0x4125cc:c.instructions+=1;goto B4125cc;
case 0x4125ce:goto L4125ce;
case 0x4125d3:c.instructions+=2;goto B4125d3;
case 0x4125d5:c.instructions+=1;goto B4125d5;
case 0x4125db:goto L4125db;
case 0x4125df:c.instructions+=2;goto B4125df;
case 0x4125e1:c.instructions+=1;goto B4125e1;
case 0x4125e7:goto L4125e7;
case 0x4125e9:c.instructions+=4;goto B4125e9;
case 0x4125ef:c.instructions+=3;goto B4125ef;
case 0x4125f5:c.instructions+=2;goto B4125f5;
case 0x4125f9:c.instructions+=1;goto B4125f9;
case 0x4125ff:goto L4125ff;
case 0x412600:c.instructions+=3;goto B412600;
case 0x412602:c.instructions+=2;goto B412602;
case 0x412606:c.instructions+=1;goto B412606;
case 0x41260c:goto L41260c;
case 0x41260e:c.instructions+=1;goto B41260e;
case 0x412610:goto L412610;
case 0x412614:c.instructions+=3;goto B412614;
case 0x412617:c.instructions+=2;goto B412617;
case 0x412618:c.instructions+=1;goto B412618;
case 0x41261d:goto L41261d;
case 0x41261f:c.instructions+=1;goto B41261f;
case 0x412625:goto L412625;
case 0x412629:c.instructions+=4;goto B412629;
case 0x41262e:c.instructions+=3;goto B41262e;
case 0x41262f:c.instructions+=2;goto B41262f;
case 0x412630:c.instructions+=1;goto B412630;
case 0x412635:goto L412635;
case 0x412637:c.instructions+=1;goto B412637;
case 0x41263d:goto L41263d;
case 0x412641:c.instructions+=12;goto B412641;
case 0x412644:c.instructions+=11;goto B412644;
case 0x412647:c.instructions+=10;goto B412647;
case 0x41264b:c.instructions+=9;goto B41264b;
case 0x41264e:c.instructions+=8;goto B41264e;
case 0x412651:c.instructions+=7;goto B412651;
case 0x412652:c.instructions+=6;goto B412652;
case 0x412653:c.instructions+=5;goto B412653;
case 0x412654:c.instructions+=4;goto B412654;
case 0x412655:c.instructions+=3;goto B412655;
case 0x412656:c.instructions+=2;goto B412656;
case 0x412657:c.instructions+=1;goto B412657;
case 0x41265c:goto L41265c;
case 0x41265f:c.instructions+=2;goto B41265f;
case 0x412661:c.instructions+=1;goto B412661;
case 0x412667:goto L412667;
case 0x41266b:c.instructions+=3;goto B41266b;
case 0x41266d:c.instructions+=2;goto B41266d;
case 0x41266f:c.instructions+=1;goto B41266f;
case 0x412671:goto L412671;
case 0x412672:c.instructions+=6;goto B412672;
case 0x412673:c.instructions+=5;goto B412673;
case 0x412674:c.instructions+=4;goto B412674;
case 0x412676:c.instructions+=3;goto B412676;
case 0x412677:c.instructions+=2;goto B412677;
case 0x41267a:c.instructions+=1;goto B41267a;
case 0x41267d:goto L41267d;
case 0x41267e:c.instructions+=3;goto B41267e;
case 0x412680:c.instructions+=2;goto B412680;
case 0x412684:c.instructions+=1;goto B412684;
case 0x412686:goto L412686;
case 0x41268a:c.instructions+=1;goto B41268a;
case 0x412690:goto L412690;
case 0x412694:c.instructions+=3;goto B412694;
case 0x412697:c.instructions+=2;goto B412697;
case 0x412698:c.instructions+=1;goto B412698;
case 0x41269d:goto L41269d;
case 0x41269f:c.instructions+=1;goto B41269f;
case 0x4126a5:goto L4126a5;
case 0x4126a9:c.instructions+=4;goto B4126a9;
case 0x4126ae:c.instructions+=3;goto B4126ae;
case 0x4126af:c.instructions+=2;goto B4126af;
case 0x4126b0:c.instructions+=1;goto B4126b0;
case 0x4126b5:goto L4126b5;
case 0x4126b7:c.instructions+=1;goto B4126b7;
case 0x4126bd:goto L4126bd;
case 0x4126c1:c.instructions+=12;goto B4126c1;
case 0x4126c4:c.instructions+=11;goto B4126c4;
case 0x4126c7:c.instructions+=10;goto B4126c7;
case 0x4126cb:c.instructions+=9;goto B4126cb;
case 0x4126ce:c.instructions+=8;goto B4126ce;
case 0x4126d1:c.instructions+=7;goto B4126d1;
case 0x4126d2:c.instructions+=6;goto B4126d2;
case 0x4126d3:c.instructions+=5;goto B4126d3;
case 0x4126d4:c.instructions+=4;goto B4126d4;
case 0x4126d5:c.instructions+=3;goto B4126d5;
case 0x4126d6:c.instructions+=2;goto B4126d6;
case 0x4126d7:c.instructions+=1;goto B4126d7;
case 0x4126dc:goto L4126dc;
case 0x4126df:c.instructions+=2;goto B4126df;
case 0x4126e1:c.instructions+=1;goto B4126e1;
case 0x4126e7:goto L4126e7;
case 0x4126eb:c.instructions+=3;goto B4126eb;
case 0x4126ed:c.instructions+=2;goto B4126ed;
case 0x4126ef:c.instructions+=1;goto B4126ef;
case 0x4126f1:goto L4126f1;
case 0x4126f2:c.instructions+=6;goto B4126f2;
case 0x4126f3:c.instructions+=5;goto B4126f3;
case 0x4126f4:c.instructions+=4;goto B4126f4;
case 0x4126f6:c.instructions+=3;goto B4126f6;
case 0x4126f7:c.instructions+=2;goto B4126f7;
case 0x4126fa:c.instructions+=1;goto B4126fa;
case 0x412700:goto L412700;
case 0x412701:c.instructions+=3;goto B412701;
case 0x412703:c.instructions+=2;goto B412703;
case 0x412706:c.instructions+=1;goto B412706;
case 0x41270b:goto L41270b;
case 0x41270d:c.instructions+=5;goto B41270d;
case 0x412713:c.instructions+=4;goto B412713;
case 0x412719:c.instructions+=3;goto B412719;
case 0x41271b:c.instructions+=2;goto B41271b;
case 0x41271c:c.instructions+=1;goto B41271c;
case 0x412720:goto L412720;
case 0x412721:c.instructions+=8;goto B412721;
case 0x412725:c.instructions+=7;goto B412725;
case 0x412726:c.instructions+=6;goto B412726;
case 0x412727:c.instructions+=5;goto B412727;
case 0x41272c:c.instructions+=4;goto B41272c;
case 0x41272e:c.instructions+=3;goto B41272e;
case 0x412730:c.instructions+=2;goto B412730;
case 0x412732:c.instructions+=1;goto B412732;
case 0x412737:goto L412737;
case 0x41273a:c.instructions+=2;goto B41273a;
case 0x41273c:c.instructions+=1;goto B41273c;
case 0x41273e:goto L41273e;
case 0x412744:c.instructions+=4;goto B412744;
case 0x412745:c.instructions+=3;goto B412745;
case 0x41274b:c.instructions+=2;goto B41274b;
case 0x41274d:c.instructions+=1;goto B41274d;
case 0x41274f:goto L41274f;
case 0x412750:goto L412750;
case 0x412756:c.instructions+=2;goto B412756;
case 0x412758:c.instructions+=1;goto B412758;
case 0x41275a:goto L41275a;
case 0x41275f:c.instructions+=1;goto B41275f;
case 0x412761:goto L412761;
case 0x412767:c.instructions+=3;goto B412767;
case 0x412768:c.instructions+=2;goto B412768;
case 0x41276d:c.instructions+=1;goto B41276d;
case 0x412772:goto L412772;
case 0x41277c:goto L41277c;
case 0x41277e:c.instructions+=2;goto B41277e;
case 0x412780:c.instructions+=1;goto B412780;
case 0x412782:goto L412782;
case 0x412783:goto L412783;
case 0x412785:c.instructions+=5;goto B412785;
case 0x412787:c.instructions+=4;goto B412787;
case 0x412789:c.instructions+=3;goto B412789;
case 0x41278a:c.instructions+=2;goto B41278a;
case 0x41278c:c.instructions+=1;goto B41278c;
case 0x412791:goto L412791;
case 0x412792:c.instructions+=2;goto B412792;
case 0x412795:c.instructions+=1;goto B412795;
case 0x41279a:goto L41279a;
case 0x4127a0:c.instructions+=3;goto B4127a0;
case 0x4127a6:c.instructions+=2;goto B4127a6;
case 0x4127a8:c.instructions+=1;goto B4127a8;
case 0x4127aa:goto L4127aa;
case 0x4127b0:goto L4127b0;
case 0x4127b1:c.instructions+=2;goto B4127b1;
case 0x4127b3:c.instructions+=1;goto B4127b3;
case 0x4127b8:goto L4127b8;
case 0x4127ba:c.instructions+=2;goto B4127ba;
case 0x4127bc:c.instructions+=1;goto B4127bc;
case 0x4127be:goto L4127be;
case 0x4127c1:c.instructions+=2;goto B4127c1;
case 0x4127c3:c.instructions+=1;goto B4127c3;
case 0x4127c5:goto L4127c5;
case 0x4127c7:c.instructions+=2;goto B4127c7;
case 0x4127c9:c.instructions+=1;goto B4127c9;
case 0x4127cb:goto L4127cb;
case 0x4127d0:goto L4127d0;
case 0x4127d6:c.instructions+=2;goto B4127d6;
case 0x4127d8:c.instructions+=1;goto B4127d8;
case 0x4127da:goto L4127da;
case 0x4127df:c.instructions+=1;goto B4127df;
case 0x4127e1:goto L4127e1;
case 0x4127e3:c.instructions+=5;goto B4127e3;
case 0x4127e5:c.instructions+=4;goto B4127e5;
case 0x4127e8:c.instructions+=3;goto B4127e8;
case 0x4127e9:c.instructions+=2;goto B4127e9;
case 0x4127ee:c.instructions+=1;goto B4127ee;
case 0x4127f3:goto L4127f3;
case 0x4127f9:goto L4127f9;
case 0x4127fb:c.instructions+=2;goto B4127fb;
case 0x4127fd:c.instructions+=1;goto B4127fd;
case 0x4127ff:goto L4127ff;
case 0x412801:c.instructions+=3;goto B412801;
case 0x412803:c.instructions+=2;goto B412803;
case 0x412808:c.instructions+=1;goto B412808;
case 0x41280d:goto L41280d;
case 0x412812:c.instructions+=2;goto B412812;
case 0x412814:c.instructions+=1;goto B412814;
case 0x412816:goto L412816;
case 0x41281b:goto L41281b;
case 0x412820:c.instructions+=2;goto B412820;
case 0x412822:c.instructions+=1;goto B412822;
case 0x412824:goto L412824;
case 0x412826:c.instructions+=1;goto B412826;
case 0x41282b:goto L41282b;
case 0x41282c:c.instructions+=3;goto B41282c;
case 0x41282d:c.instructions+=2;goto B41282d;
case 0x41282e:c.instructions+=1;goto B41282e;
case 0x412840:goto L412840;
case 0x412843:c.instructions+=7;goto B412843;
case 0x412844:c.instructions+=6;goto B412844;
case 0x41284a:c.instructions+=5;goto B41284a;
case 0x41284b:c.instructions+=4;goto B41284b;
case 0x41284e:c.instructions+=3;goto B41284e;
case 0x412850:c.instructions+=2;goto B412850;
case 0x412854:c.instructions+=1;goto B412854;
case 0x41285a:goto L41285a;
case 0x41285b:c.instructions+=3;goto B41285b;
case 0x41285c:c.instructions+=2;goto B41285c;
case 0x41285e:c.instructions+=1;goto B41285e;
case 0x412860:goto L412860;
case 0x412863:c.instructions+=10;goto B412863;
case 0x412865:c.instructions+=9;goto B412865;
case 0x41286b:c.instructions+=8;goto B41286b;
case 0x41286e:c.instructions+=7;goto B41286e;
case 0x412874:c.instructions+=6;goto B412874;
case 0x41287a:c.instructions+=5;goto B41287a;
case 0x412880:c.instructions+=4;goto B412880;
case 0x412886:c.instructions+=3;goto B412886;
case 0x41288c:c.instructions+=2;goto B41288c;
case 0x412892:c.instructions+=1;goto B412892;
case 0x412897:goto L412897;
case 0x41289c:c.instructions+=1;goto B41289c;
case 0x4128a1:goto L4128a1;
case 0x4128a7:c.instructions+=4;goto B4128a7;
case 0x4128aa:c.instructions+=3;goto B4128aa;
case 0x4128ac:c.instructions+=2;goto B4128ac;
case 0x4128b0:c.instructions+=1;goto B4128b0;
case 0x4128b2:goto L4128b2;
case 0x4128b7:c.instructions+=1;goto B4128b7;
case 0x4128bc:goto L4128bc;
case 0x4128c0:goto L4128c0;
case 0x4128c2:c.instructions+=6;goto B4128c2;
case 0x4128c8:c.instructions+=5;goto B4128c8;
case 0x4128ce:c.instructions+=4;goto B4128ce;
case 0x4128d2:c.instructions+=3;goto B4128d2;
case 0x4128d3:c.instructions+=2;goto B4128d3;
case 0x4128d5:c.instructions+=1;goto B4128d5;
case 0x4128da:goto L4128da;
case 0x4128dd:c.instructions+=3;goto B4128dd;
case 0x4128df:c.instructions+=2;goto B4128df;
case 0x4128e1:c.instructions+=1;goto B4128e1;
case 0x4128e7:goto L4128e7;
case 0x4128eb:c.instructions+=7;goto B4128eb;
case 0x4128ec:c.instructions+=6;goto B4128ec;
case 0x4128ee:c.instructions+=5;goto B4128ee;
case 0x4128ef:c.instructions+=4;goto B4128ef;
case 0x4128f0:c.instructions+=3;goto B4128f0;
case 0x4128f1:c.instructions+=2;goto B4128f1;
case 0x4128f4:c.instructions+=1;goto B4128f4;
case 0x4128f5:goto L4128f5;
case 0x4128f6:c.instructions+=4;goto B4128f6;
case 0x4128fc:c.instructions+=3;goto B4128fc;
case 0x4128fd:c.instructions+=2;goto B4128fd;
case 0x412900:c.instructions+=1;goto B412900;
case 0x412910:goto L412910;
case 0x412916:c.instructions+=5;goto B412916;
case 0x412918:c.instructions+=4;goto B412918;
case 0x412919:c.instructions+=3;goto B412919;
case 0x41291b:c.instructions+=2;goto B41291b;
case 0x41291d:c.instructions+=1;goto B41291d;
case 0x41291f:goto L41291f;
case 0x412920:c.instructions+=3;goto B412920;
case 0x412924:c.instructions+=2;goto B412924;
case 0x412925:c.instructions+=1;goto B412925;
case 0x412927:goto L412927;
case 0x41292a:c.instructions+=1;goto B41292a;
case 0x41292c:goto L41292c;
case 0x41292f:c.instructions+=2;goto B41292f;
case 0x412932:c.instructions+=1;goto B412932;
case 0x412934:goto L412934;
case 0x412936:c.instructions+=2;goto B412936;
case 0x412938:c.instructions+=1;goto B412938;
case 0x41293a:goto L41293a;
case 0x41293b:c.instructions+=4;goto B41293b;
case 0x41293c:c.instructions+=3;goto B41293c;
case 0x41293e:c.instructions+=2;goto B41293e;
case 0x41293f:c.instructions+=1;goto B41293f;
case 0x412942:goto L412942;
case 0x412943:c.instructions+=4;goto B412943;
case 0x412944:c.instructions+=3;goto B412944;
case 0x412946:c.instructions+=2;goto B412946;
case 0x412947:c.instructions+=1;goto B412947;
case 0x41294a:goto L41294a;
case 0x41294c:c.instructions+=2;goto B41294c;
case 0x41294d:c.instructions+=1;goto B41294d;
case 0x412950:goto L412950;
case 0x412953:c.instructions+=10;goto B412953;
case 0x412958:c.instructions+=9;goto B412958;
case 0x412959:c.instructions+=8;goto B412959;
case 0x41295a:c.instructions+=7;goto B41295a;
case 0x41295c:c.instructions+=6;goto B41295c;
case 0x41295f:c.instructions+=5;goto B41295f;
case 0x412960:c.instructions+=4;goto B412960;
case 0x412961:c.instructions+=3;goto B412961;
case 0x412963:c.instructions+=2;goto B412963;
case 0x412967:c.instructions+=1;goto B412967;
case 0x412969:goto L412969;
case 0x41296e:c.instructions+=7;goto B41296e;
case 0x412971:c.instructions+=6;goto B412971;
case 0x412972:c.instructions+=5;goto B412972;
case 0x412974:c.instructions+=4;goto B412974;
case 0x412977:c.instructions+=3;goto B412977;
case 0x412978:c.instructions+=2;goto B412978;
case 0x41297d:c.instructions+=1;goto B41297d;
case 0x412982:goto L412982;
case 0x412984:c.instructions+=1;goto B412984;
case 0x412986:goto L412986;
case 0x412989:c.instructions+=1;goto B412989;
case 0x41298d:goto L41298d;
case 0x412993:c.instructions+=3;goto B412993;
case 0x412999:c.instructions+=2;goto B412999;
case 0x41299b:c.instructions+=1;goto B41299b;
case 0x4129a1:goto L4129a1;
case 0x4129a4:c.instructions+=8;goto B4129a4;
case 0x4129a9:c.instructions+=7;goto B4129a9;
case 0x4129af:c.instructions+=6;goto B4129af;
case 0x4129b1:c.instructions+=5;goto B4129b1;
case 0x4129b5:c.instructions+=4;goto B4129b5;
case 0x4129bd:c.instructions+=3;goto B4129bd;
case 0x4129c3:c.instructions+=2;goto B4129c3;
case 0x4129c5:c.instructions+=1;goto B4129c5;
case 0x4129c7:goto L4129c7;
case 0x4129cc:c.instructions+=1;goto B4129cc;
case 0x4129ce:goto L4129ce;
case 0x4129d3:c.instructions+=5;goto B4129d3;
case 0x4129d9:c.instructions+=4;goto B4129d9;
case 0x4129dd:c.instructions+=3;goto B4129dd;
case 0x4129e1:c.instructions+=2;goto B4129e1;
case 0x4129e7:c.instructions+=1;goto B4129e7;
case 0x4129e9:goto L4129e9;
case 0x4129ef:goto L4129ef;
case 0x4129f5:c.instructions+=3;goto B4129f5;
case 0x4129f7:c.instructions+=2;goto B4129f7;
case 0x4129fa:c.instructions+=1;goto B4129fa;
case 0x4129fc:goto L4129fc;
case 0x4129ff:c.instructions+=1;goto B4129ff;
case 0x412a01:goto L412a01;
case 0x412a06:goto L412a06;
case 0x412a0c:c.instructions+=1;goto B412a0c;
case 0x412a0e:goto L412a0e;
case 0x412a15:goto L412a15;
case 0x412a19:c.instructions+=2;goto B412a19;
case 0x412a20:c.instructions+=1;goto B412a20;
case 0x412a22:goto L412a22;
case 0x412a28:goto L412a28;
case 0x412a2a:c.instructions+=2;goto B412a2a;
case 0x412a2c:c.instructions+=1;goto B412a2c;
case 0x412a32:goto L412a32;
case 0x412a34:c.instructions+=2;goto B412a34;
case 0x412a36:c.instructions+=1;goto B412a36;
case 0x412a3c:goto L412a3c;
case 0x412a40:goto L412a40;
case 0x412a46:c.instructions+=2;goto B412a46;
case 0x412a48:c.instructions+=1;goto B412a48;
case 0x412a4a:goto L412a4a;
case 0x412a4f:c.instructions+=1;goto B412a4f;
case 0x412a51:goto L412a51;
case 0x412a57:c.instructions+=5;goto B412a57;
case 0x412a59:c.instructions+=4;goto B412a59;
case 0x412a5d:c.instructions+=3;goto B412a5d;
case 0x412a61:c.instructions+=2;goto B412a61;
case 0x412a67:c.instructions+=1;goto B412a67;
case 0x412a69:goto L412a69;
case 0x412a6f:goto L412a6f;
case 0x412a75:c.instructions+=3;goto B412a75;
case 0x412a77:c.instructions+=2;goto B412a77;
case 0x412a7a:c.instructions+=1;goto B412a7a;
case 0x412a7c:goto L412a7c;
case 0x412a82:c.instructions+=1;goto B412a82;
case 0x412a84:goto L412a84;
case 0x412a8a:c.instructions+=1;goto B412a8a;
case 0x412a8c:goto L412a8c;
case 0x412a92:c.instructions+=3;goto B412a92;
case 0x412a93:c.instructions+=2;goto B412a93;
case 0x412a98:c.instructions+=1;goto B412a98;
case 0x412a9d:goto L412a9d;
case 0x412aa3:c.instructions+=3;goto B412aa3;
case 0x412aa9:c.instructions+=2;goto B412aa9;
case 0x412aaf:c.instructions+=1;goto B412aaf;
case 0x412ab2:goto L412ab2;
case 0x412ab4:c.instructions+=2;goto B412ab4;
case 0x412ab6:c.instructions+=1;goto B412ab6;
case 0x412ab8:goto L412ab8;
case 0x412abb:c.instructions+=2;goto B412abb;
case 0x412abe:c.instructions+=1;goto B412abe;
case 0x412ac4:goto L412ac4;
case 0x412aca:c.instructions+=2;goto B412aca;
case 0x412acc:c.instructions+=1;goto B412acc;
case 0x412ad2:goto L412ad2;
case 0x412ad4:c.instructions+=3;goto B412ad4;
case 0x412ada:c.instructions+=2;goto B412ada;
case 0x412adb:c.instructions+=1;goto B412adb;
case 0x412ae0:goto L412ae0;
case 0x412ae2:c.instructions+=3;goto B412ae2;
case 0x412ae4:c.instructions+=2;goto B412ae4;
case 0x412ae6:c.instructions+=1;goto B412ae6;
case 0x412aec:goto L412aec;
case 0x412af0:goto L412af0;
case 0x412af6:c.instructions+=2;goto B412af6;
case 0x412af8:c.instructions+=1;goto B412af8;
case 0x412afa:goto L412afa;
case 0x412b00:c.instructions+=1;goto B412b00;
case 0x412b02:goto L412b02;
case 0x412b04:c.instructions+=1;goto B412b04;
case 0x412b06:goto L412b06;
case 0x412b07:goto L412b07;
case 0x412b09:c.instructions+=2;goto B412b09;
case 0x412b0b:c.instructions+=1;goto B412b0b;
case 0x412b0d:goto L412b0d;
case 0x412b0e:c.instructions+=5;goto B412b0e;
case 0x412b0f:c.instructions+=4;goto B412b0f;
case 0x412b10:c.instructions+=3;goto B412b10;
case 0x412b11:c.instructions+=2;goto B412b11;
case 0x412b14:c.instructions+=1;goto B412b14;
case 0x412b15:goto L412b15;
case 0x412b18:c.instructions+=7;goto B412b18;
case 0x412b1e:c.instructions+=6;goto B412b1e;
case 0x412b24:c.instructions+=5;goto B412b24;
case 0x412b27:c.instructions+=4;goto B412b27;
case 0x412b29:c.instructions+=3;goto B412b29;
case 0x412b2d:c.instructions+=2;goto B412b2d;
case 0x412b34:c.instructions+=1;goto B412b34;
case 0x412b3a:goto L412b3a;
case 0x412b3f:c.instructions+=1;goto B412b3f;
case 0x412b44:goto L412b44;
case 0x412b4a:c.instructions+=4;goto B412b4a;
case 0x412b4d:c.instructions+=3;goto B412b4d;
case 0x412b4f:c.instructions+=2;goto B412b4f;
case 0x412b53:c.instructions+=1;goto B412b53;
case 0x412b55:goto L412b55;
case 0x412b5a:c.instructions+=1;goto B412b5a;
case 0x412b5f:goto L412b5f;
case 0x412b63:goto L412b63;
case 0x412b65:c.instructions+=5;goto B412b65;
case 0x412b6b:c.instructions+=4;goto B412b6b;
case 0x412b6f:c.instructions+=3;goto B412b6f;
case 0x412b70:c.instructions+=2;goto B412b70;
case 0x412b76:c.instructions+=1;goto B412b76;
case 0x412b7b:goto L412b7b;
case 0x412b7e:c.instructions+=3;goto B412b7e;
case 0x412b84:c.instructions+=2;goto B412b84;
case 0x412b86:c.instructions+=1;goto B412b86;
case 0x412b88:goto L412b88;
case 0x412b8d:c.instructions+=1;goto B412b8d;
case 0x412b8f:goto L412b8f;
case 0x412b90:c.instructions+=4;goto B412b90;
case 0x412b91:c.instructions+=3;goto B412b91;
case 0x412b92:c.instructions+=2;goto B412b92;
case 0x412b97:c.instructions+=1;goto B412b97;
case 0x412b9c:goto L412b9c;
case 0x412ba2:c.instructions+=11;goto B412ba2;
case 0x412ba7:c.instructions+=10;goto B412ba7;
case 0x412bad:c.instructions+=9;goto B412bad;
case 0x412bb3:c.instructions+=8;goto B412bb3;
case 0x412bb9:c.instructions+=7;goto B412bb9;
case 0x412bbc:c.instructions+=6;goto B412bbc;
case 0x412bbd:c.instructions+=5;goto B412bbd;
case 0x412bbe:c.instructions+=4;goto B412bbe;
case 0x412bbf:c.instructions+=3;goto B412bbf;
case 0x412bc4:c.instructions+=2;goto B412bc4;
case 0x412bc7:c.instructions+=1;goto B412bc7;
case 0x412bcc:goto L412bcc;
case 0x412bcd:c.instructions+=5;goto B412bcd;
case 0x412bce:c.instructions+=4;goto B412bce;
case 0x412bcf:c.instructions+=3;goto B412bcf;
case 0x412bd0:c.instructions+=2;goto B412bd0;
case 0x412bd3:c.instructions+=1;goto B412bd3;
case 0x412be0:goto L412be0;
case 0x412be3:c.instructions+=11;goto B412be3;
case 0x412be9:c.instructions+=10;goto B412be9;
case 0x412bea:c.instructions+=9;goto B412bea;
case 0x412beb:c.instructions+=8;goto B412beb;
case 0x412bef:c.instructions+=7;goto B412bef;
case 0x412bf0:c.instructions+=6;goto B412bf0;
case 0x412bf6:c.instructions+=5;goto B412bf6;
case 0x412bf7:c.instructions+=4;goto B412bf7;
case 0x412bf9:c.instructions+=3;goto B412bf9;
case 0x412bfb:c.instructions+=2;goto B412bfb;
case 0x412bff:c.instructions+=1;goto B412bff;
case 0x412c01:goto L412c01;
case 0x412c07:c.instructions+=1;goto B412c07;
case 0x412c10:goto L412c10;
case 0x412c13:c.instructions+=5;goto B412c13;
case 0x412c19:c.instructions+=4;goto B412c19;
case 0x412c1b:c.instructions+=3;goto B412c1b;
case 0x412c22:c.instructions+=2;goto B412c22;
case 0x412c24:c.instructions+=1;goto B412c24;
case 0x412c26:goto L412c26;
case 0x412c27:goto L412c27;
case 0x412c29:c.instructions+=2;goto B412c29;
case 0x412c2b:c.instructions+=1;goto B412c2b;
case 0x412c2d:goto L412c2d;
case 0x412c31:goto L412c31;
case 0x412c33:c.instructions+=2;goto B412c33;
case 0x412c3b:c.instructions+=1;goto B412c3b;
case 0x412c41:goto L412c41;
case 0x412c47:c.instructions+=4;goto B412c47;
case 0x412c49:c.instructions+=3;goto B412c49;
case 0x412c4b:c.instructions+=2;goto B412c4b;
case 0x412c4f:c.instructions+=1;goto B412c4f;
case 0x412c55:goto L412c55;
case 0x412c57:goto L412c57;
case 0x412c5b:c.instructions+=1;goto B412c5b;
case 0x412c60:goto L412c60;
case 0x412c61:c.instructions+=2;goto B412c61;
case 0x412c66:c.instructions+=1;goto B412c66;
case 0x412c6b:goto L412c6b;
case 0x412c71:c.instructions+=6;goto B412c71;
case 0x412c73:c.instructions+=5;goto B412c73;
case 0x412c76:c.instructions+=4;goto B412c76;
case 0x412c7c:c.instructions+=3;goto B412c7c;
case 0x412c84:c.instructions+=2;goto B412c84;
case 0x412c88:c.instructions+=1;goto B412c88;
case 0x412c8e:goto L412c8e;
case 0x412c93:c.instructions+=1;goto B412c93;
case 0x412c99:goto L412c99;
case 0x412c9a:c.instructions+=1;goto B412c9a;
case 0x412c9f:goto L412c9f;
case 0x412ca1:c.instructions+=4;goto B412ca1;
case 0x412ca4:c.instructions+=3;goto B412ca4;
case 0x412ca6:c.instructions+=2;goto B412ca6;
case 0x412ca8:c.instructions+=1;goto B412ca8;
case 0x412cae:goto L412cae;
case 0x412cb4:goto L412cb4;
case 0x412cb7:c.instructions+=5;goto B412cb7;
case 0x412cbd:c.instructions+=4;goto B412cbd;
case 0x412cbf:c.instructions+=3;goto B412cbf;
case 0x412cc7:c.instructions+=2;goto B412cc7;
case 0x412ccd:c.instructions+=1;goto B412ccd;
case 0x412ccf:goto L412ccf;
case 0x412cd1:c.instructions+=1;goto B412cd1;
case 0x412cd3:goto L412cd3;
case 0x412cd4:goto L412cd4;
case 0x412cd6:c.instructions+=3;goto B412cd6;
case 0x412cd8:c.instructions+=2;goto B412cd8;
case 0x412cdc:c.instructions+=1;goto B412cdc;
case 0x412cde:goto L412cde;
case 0x412ce3:goto L412ce3;
case 0x412ce6:c.instructions+=5;goto B412ce6;
case 0x412cea:c.instructions+=4;goto B412cea;
case 0x412cf0:c.instructions+=3;goto B412cf0;
case 0x412cf6:c.instructions+=2;goto B412cf6;
case 0x412cf8:c.instructions+=1;goto B412cf8;
case 0x412cfa:goto L412cfa;
case 0x412cfe:goto L412cfe;
case 0x412d02:c.instructions+=5;goto B412d02;
case 0x412d03:c.instructions+=4;goto B412d03;
case 0x412d09:c.instructions+=3;goto B412d09;
case 0x412d11:c.instructions+=2;goto B412d11;
case 0x412d13:c.instructions+=1;goto B412d13;
case 0x412d15:goto L412d15;
case 0x412d19:c.instructions+=1;goto B412d19;
case 0x412d1b:goto L412d1b;
case 0x412d1d:c.instructions+=3;goto B412d1d;
case 0x412d1f:c.instructions+=2;goto B412d1f;
case 0x412d21:c.instructions+=1;goto B412d21;
case 0x412d23:goto L412d23;
case 0x412d29:c.instructions+=2;goto B412d29;
case 0x412d2b:c.instructions+=1;goto B412d2b;
case 0x412d2d:goto L412d2d;
case 0x412d30:c.instructions+=5;goto B412d30;
case 0x412d36:c.instructions+=4;goto B412d36;
case 0x412d38:c.instructions+=3;goto B412d38;
case 0x412d40:c.instructions+=2;goto B412d40;
case 0x412d42:c.instructions+=1;goto B412d42;
case 0x412d44:goto L412d44;
case 0x412d48:goto L412d48;
case 0x412d4a:c.instructions+=2;goto B412d4a;
case 0x412d4c:c.instructions+=1;goto B412d4c;
case 0x412d4e:goto L412d4e;
case 0x412d50:c.instructions+=2;goto B412d50;
case 0x412d52:c.instructions+=1;goto B412d52;
case 0x412d54:goto L412d54;
case 0x412d5a:c.instructions+=2;goto B412d5a;
case 0x412d5c:c.instructions+=1;goto B412d5c;
case 0x412d5e:goto L412d5e;
case 0x412d60:c.instructions+=2;goto B412d60;
case 0x412d62:c.instructions+=1;goto B412d62;
case 0x412d64:goto L412d64;
case 0x412d67:c.instructions+=2;goto B412d67;
case 0x412d6d:c.instructions+=1;goto B412d6d;
case 0x412d6f:goto L412d6f;
case 0x412d75:goto L412d75;
case 0x412d79:c.instructions+=5;goto B412d79;
case 0x412d7f:c.instructions+=4;goto B412d7f;
case 0x412d80:c.instructions+=3;goto B412d80;
case 0x412d82:c.instructions+=2;goto B412d82;
case 0x412d86:c.instructions+=1;goto B412d86;
case 0x412d8c:goto L412d8c;
case 0x412d8d:c.instructions+=5;goto B412d8d;
case 0x412d8e:c.instructions+=4;goto B412d8e;
case 0x412d8f:c.instructions+=3;goto B412d8f;
case 0x412d90:c.instructions+=2;goto B412d90;
case 0x412d93:c.instructions+=1;goto B412d93;
case 0x412d96:goto L412d96;
case 0x412d99:c.instructions+=3;goto B412d99;
case 0x412d9d:c.instructions+=2;goto B412d9d;
case 0x412da3:c.instructions+=1;goto B412da3;
case 0x412da5:goto L412da5;
case 0x412da8:c.instructions+=2;goto B412da8;
case 0x412dae:c.instructions+=1;goto B412dae;
case 0x412db0:goto L412db0;
case 0x412db1:c.instructions+=7;goto B412db1;
case 0x412db2:c.instructions+=6;goto B412db2;
case 0x412db3:c.instructions+=5;goto B412db3;
case 0x412db5:c.instructions+=4;goto B412db5;
case 0x412dbb:c.instructions+=3;goto B412dbb;
case 0x412dc1:c.instructions+=2;goto B412dc1;
case 0x412dc3:c.instructions+=1;goto B412dc3;
case 0x412dc5:goto L412dc5;
case 0x412dcb:c.instructions+=2;goto B412dcb;
case 0x412dcd:c.instructions+=1;goto B412dcd;
case 0x412dcf:goto L412dcf;
case 0x412dd6:c.instructions+=10;goto B412dd6;
case 0x412ddb:c.instructions+=9;goto B412ddb;
case 0x412de1:c.instructions+=8;goto B412de1;
case 0x412de7:c.instructions+=7;goto B412de7;
case 0x412de9:c.instructions+=6;goto B412de9;
case 0x412deb:c.instructions+=5;goto B412deb;
case 0x412dee:c.instructions+=4;goto B412dee;
case 0x412df4:c.instructions+=3;goto B412df4;
case 0x412df5:c.instructions+=2;goto B412df5;
case 0x412dfa:c.instructions+=1;goto B412dfa;
case 0x412dff:goto L412dff;
case 0x412e05:c.instructions+=1;goto B412e05;
case 0x412e07:goto L412e07;
case 0x412e09:c.instructions+=2;goto B412e09;
case 0x412e0b:c.instructions+=1;goto B412e0b;
case 0x412e0d:goto L412e0d;
case 0x412e0f:c.instructions+=3;goto B412e0f;
case 0x412e11:c.instructions+=2;goto B412e11;
case 0x412e16:c.instructions+=1;goto B412e16;
case 0x412e1b:goto L412e1b;
case 0x412e1c:c.instructions+=3;goto B412e1c;
case 0x412e1d:c.instructions+=2;goto B412e1d;
case 0x412e1e:c.instructions+=1;goto B412e1e;
case 0x412e20:goto L412e20;
case 0x412e21:c.instructions+=2;goto B412e21;
case 0x412e23:c.instructions+=1;goto B412e23;
case 0x412e28:goto L412e28;
case 0x412e32:c.instructions+=3;goto B412e32;
case 0x412e34:c.instructions+=2;goto B412e34;
case 0x412e35:c.instructions+=1;goto B412e35;
case 0x412e40:goto L412e40;
case 0x412e41:c.instructions+=9;goto B412e41;
case 0x412e42:c.instructions+=8;goto B412e42;
case 0x412e43:c.instructions+=7;goto B412e43;
case 0x412e47:c.instructions+=6;goto B412e47;
case 0x412e48:c.instructions+=5;goto B412e48;
case 0x412e4d:c.instructions+=4;goto B412e4d;
case 0x412e4f:c.instructions+=3;goto B412e4f;
case 0x412e51:c.instructions+=2;goto B412e51;
case 0x412e53:c.instructions+=1;goto B412e53;
case 0x412e58:goto L412e58;
case 0x412e5a:c.instructions+=5;goto B412e5a;
case 0x412e5c:c.instructions+=4;goto B412e5c;
case 0x412e5e:c.instructions+=3;goto B412e5e;
case 0x412e5f:c.instructions+=2;goto B412e5f;
case 0x412e61:c.instructions+=1;goto B412e61;
case 0x412e66:goto L412e66;
case 0x412e68:c.instructions+=6;goto B412e68;
case 0x412e6a:c.instructions+=5;goto B412e6a;
case 0x412e6c:c.instructions+=4;goto B412e6c;
case 0x412e6f:c.instructions+=3;goto B412e6f;
case 0x412e70:c.instructions+=2;goto B412e70;
case 0x412e72:c.instructions+=1;goto B412e72;
case 0x412e77:goto L412e77;
case 0x412e79:c.instructions+=6;goto B412e79;
case 0x412e7b:c.instructions+=5;goto B412e7b;
case 0x412e7d:c.instructions+=4;goto B412e7d;
case 0x412e80:c.instructions+=3;goto B412e80;
case 0x412e81:c.instructions+=2;goto B412e81;
case 0x412e83:c.instructions+=1;goto B412e83;
case 0x412e88:goto L412e88;
case 0x412e8e:c.instructions+=1;goto B412e8e;
case 0x412e93:goto L412e93;
case 0x412e95:c.instructions+=6;goto B412e95;
case 0x412e97:c.instructions+=5;goto B412e97;
case 0x412e99:c.instructions+=4;goto B412e99;
case 0x412e9c:c.instructions+=3;goto B412e9c;
case 0x412e9d:c.instructions+=2;goto B412e9d;
case 0x412e9f:c.instructions+=1;goto B412e9f;
case 0x412ea4:goto L412ea4;
case 0x412ea5:c.instructions+=2;goto B412ea5;
case 0x412ea7:c.instructions+=1;goto B412ea7;
case 0x412eac:goto L412eac;
case 0x412eae:c.instructions+=6;goto B412eae;
case 0x412eb0:c.instructions+=5;goto B412eb0;
case 0x412eb2:c.instructions+=4;goto B412eb2;
case 0x412eb5:c.instructions+=3;goto B412eb5;
case 0x412eb6:c.instructions+=2;goto B412eb6;
case 0x412eb8:c.instructions+=1;goto B412eb8;
case 0x412ebd:goto L412ebd;
case 0x412ec0:c.instructions+=4;goto B412ec0;
case 0x412ec1:c.instructions+=3;goto B412ec1;
case 0x412ec7:c.instructions+=2;goto B412ec7;
case 0x412ec8:c.instructions+=1;goto B412ec8;
case 0x412ecd:goto L412ecd;
case 0x412ed0:c.instructions+=2;goto B412ed0;
case 0x412ed1:c.instructions+=1;goto B412ed1;
case 0x412ed3:goto L412ed3;
case 0x412ed9:c.instructions+=2;goto B412ed9;
case 0x412ede:c.instructions+=1;goto B412ede;
case 0x412ee0:goto L412ee0;
case 0x412ee1:c.instructions+=2;goto B412ee1;
case 0x412ee7:c.instructions+=1;goto B412ee7;
case 0x412eec:goto L412eec;
case 0x412eed:c.instructions+=2;goto B412eed;
case 0x412eef:c.instructions+=1;goto B412eef;
case 0x412ef4:goto L412ef4;
case 0x412efa:c.instructions+=2;goto B412efa;
case 0x412efb:c.instructions+=1;goto B412efb;
case 0x412efd:goto L412efd;
case 0x412f00:c.instructions+=2;goto B412f00;
case 0x412f02:c.instructions+=1;goto B412f02;
case 0x412f04:goto L412f04;
case 0x412f06:c.instructions+=2;goto B412f06;
case 0x412f0c:c.instructions+=1;goto B412f0c;
case 0x412f11:goto L412f11;
case 0x412f13:c.instructions+=2;goto B412f13;
case 0x412f15:c.instructions+=1;goto B412f15;
case 0x412f17:goto L412f17;
case 0x412f1c:c.instructions+=1;goto B412f1c;
case 0x412f1e:goto L412f1e;
case 0x412f20:c.instructions+=5;goto B412f20;
case 0x412f22:c.instructions+=4;goto B412f22;
case 0x412f28:c.instructions+=3;goto B412f28;
case 0x412f29:c.instructions+=2;goto B412f29;
case 0x412f2e:c.instructions+=1;goto B412f2e;
case 0x412f33:goto L412f33;
case 0x412f36:c.instructions+=1;goto B412f36;
case 0x412f38:goto L412f38;
case 0x412f3e:c.instructions+=2;goto B412f3e;
case 0x412f3f:c.instructions+=1;goto B412f3f;
case 0x412f41:goto L412f41;
case 0x412f43:c.instructions+=1;goto B412f43;
case 0x412f45:goto L412f45;
case 0x412f47:c.instructions+=3;goto B412f47;
case 0x412f49:c.instructions+=2;goto B412f49;
case 0x412f4e:c.instructions+=1;goto B412f4e;
case 0x412f53:goto L412f53;
case 0x412f59:c.instructions+=2;goto B412f59;
case 0x412f5e:c.instructions+=1;goto B412f5e;
case 0x412f60:goto L412f60;
case 0x412f62:c.instructions+=3;goto B412f62;
case 0x412f63:c.instructions+=2;goto B412f63;
case 0x412f68:c.instructions+=1;goto B412f68;
case 0x412f6d:goto L412f6d;
case 0x412f73:c.instructions+=2;goto B412f73;
case 0x412f74:c.instructions+=1;goto B412f74;
case 0x412f76:goto L412f76;
case 0x412f78:c.instructions+=1;goto B412f78;
case 0x412f7d:goto L412f7d;
case 0x412f7e:c.instructions+=4;goto B412f7e;
case 0x412f7f:c.instructions+=3;goto B412f7f;
case 0x412f80:c.instructions+=2;goto B412f80;
case 0x412f81:c.instructions+=1;goto B412f81;
case 0x412f90:goto L412f90;
case 0x412f91:c.instructions+=9;goto B412f91;
case 0x412f92:c.instructions+=8;goto B412f92;
case 0x412f93:c.instructions+=7;goto B412f93;
case 0x412f94:c.instructions+=6;goto B412f94;
case 0x412f96:c.instructions+=5;goto B412f96;
case 0x412f9d:c.instructions+=4;goto B412f9d;
case 0x412fa3:c.instructions+=3;goto B412fa3;
case 0x412fab:c.instructions+=2;goto B412fab;
case 0x412fad:c.instructions+=1;goto B412fad;
case 0x412fb0:goto L412fb0;
case 0x412fb2:c.instructions+=2;goto B412fb2;
case 0x412fb4:c.instructions+=1;goto B412fb4;
case 0x412fb6:goto L412fb6;
case 0x412fb7:c.instructions+=2;goto B412fb7;
case 0x412fbc:c.instructions+=1;goto B412fbc;
case 0x412fc1:goto L412fc1;
case 0x412fc3:c.instructions+=1;goto B412fc3;
case 0x412fc6:goto L412fc6;
case 0x412fca:c.instructions+=4;goto B412fca;
case 0x412fd0:c.instructions+=3;goto B412fd0;
case 0x412fd1:c.instructions+=2;goto B412fd1;
case 0x412fd5:c.instructions+=1;goto B412fd5;
case 0x412fd7:goto L412fd7;
case 0x412fda:c.instructions+=5;goto B412fda;
case 0x412fdc:c.instructions+=4;goto B412fdc;
case 0x412fe2:c.instructions+=3;goto B412fe2;
case 0x412fe8:c.instructions+=2;goto B412fe8;
case 0x412fea:c.instructions+=1;goto B412fea;
case 0x412fec:goto L412fec;
case 0x412fef:c.instructions+=4;goto B412fef;
case 0x412ff2:c.instructions+=3;goto B412ff2;
case 0x412ff4:c.instructions+=2;goto B412ff4;
case 0x412ff6:c.instructions+=1;goto B412ff6;
case 0x412ff8:goto L412ff8;
case 0x412ffa:c.instructions+=2;goto B412ffa;
case 0x412ffe:c.instructions+=1;goto B412ffe;
default:missing_instruction(c.pc);}
B412000:L412000:{c.instructions+=1;NFSU2_TR(0x412000);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41200b;}}
}
B412002:L412002:{c.instructions+=2;NFSU2_TR(0x412002);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B412009:{NFSU2_TR(0x412009);
{goto L41200d;}
}
B41200b:L41200b:{c.instructions+=1;NFSU2_TR(0x41200b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B41200d:L41200d:{c.instructions+=5;NFSU2_TR(0x41200d);
w4(R+8,u32(s32(s16(r2(R+8)))));
}
B412010:{NFSU2_TR(0x412010);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B412013:{NFSU2_TR(0x412013);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B41201a:{NFSU2_TR(0x41201a);
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
B41201c:{NFSU2_TR(0x41201c);
if(r1(R+518)){{goto L41202a;}}
}
B41201e:L41201e:{c.instructions+=3;NFSU2_TR(0x41201e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B412020:{NFSU2_TR(0x412020);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412021:{NFSU2_TR(0x412021);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x412024ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B412024:L412024:{c.instructions+=2;NFSU2_TR(0x412024);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B412028:{NFSU2_TR(0x412028);
{goto L412032;}
}
B41202a:L41202a:{c.instructions+=1;NFSU2_TR(0x41202a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B412032:L412032:{c.instructions+=3;NFSU2_TR(0x412032);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B412036:{NFSU2_TR(0x412036);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B41203a:{NFSU2_TR(0x41203a);
if(r1(R+518)){{goto L412073;}}
}
B41203c:L41203c:{c.instructions+=3;NFSU2_TR(0x41203c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B412040:{NFSU2_TR(0x412040);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B412044:{NFSU2_TR(0x412044);
if(r1(R+518)){{goto L412073;}}
}
B412046:L412046:{c.instructions+=3;NFSU2_TR(0x412046);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B412049:{NFSU2_TR(0x412049);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B41204b:{NFSU2_TR(0x41204b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L412056;}}
}
B41204d:L41204d:{c.instructions+=2;NFSU2_TR(0x41204d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B412054:{NFSU2_TR(0x412054);
{goto L412058;}
}
B412056:L412056:{c.instructions+=1;NFSU2_TR(0x412056);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B412058:L412058:{c.instructions+=5;NFSU2_TR(0x412058);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B41205b:{NFSU2_TR(0x41205b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B41205e:{NFSU2_TR(0x41205e);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B412065:{NFSU2_TR(0x412065);
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
B412067:{NFSU2_TR(0x412067);
if(r1(R+518)){{goto L412073;}}
}
B412069:L412069:{c.instructions+=4;NFSU2_TR(0x412069);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41206b:{NFSU2_TR(0x41206b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41206c:{NFSU2_TR(0x41206c);
__builtin_memmove((R+4),(R+24),4);
}
B41206e:{NFSU2_TR(0x41206e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x412071ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B412071:L412071:{c.instructions+=1;NFSU2_TR(0x412071);
{goto L412079;}
}
B412073:L412073:{c.instructions+=1;NFSU2_TR(0x412073);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B412079:L412079:{c.instructions+=5;NFSU2_TR(0x412079);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B41207d:{NFSU2_TR(0x41207d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B412081:{NFSU2_TR(0x412081);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B412083:{NFSU2_TR(0x412083);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B412086:{NFSU2_TR(0x412086);
if(r1(R+514)){{goto L412097;}}
}
B412088:L412088:{c.instructions+=5;NFSU2_TR(0x412088);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41208b:{NFSU2_TR(0x41208b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41208f:{NFSU2_TR(0x41208f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B412093:{NFSU2_TR(0x412093);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B412095:{NFSU2_TR(0x412095);
{goto L412099;}
}
B412097:L412097:{c.instructions+=1;NFSU2_TR(0x412097);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B412099:L412099:{c.instructions+=6;NFSU2_TR(0x412099);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41209c:{NFSU2_TR(0x41209c);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B41209d:{NFSU2_TR(0x41209d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B4120a0:{NFSU2_TR(0x4120a0);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B4120a1:{NFSU2_TR(0x4120a1);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B4120a3:{NFSU2_TR(0x4120a3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x411fd0u,411);}
}
B4120a9:L4120a9:{c.instructions+=7;NFSU2_TR(0x4120a9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4120ad:{NFSU2_TR(0x4120ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4120ae:{NFSU2_TR(0x4120ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4120af:{NFSU2_TR(0x4120af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4120b0:{NFSU2_TR(0x4120b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4120b1:{NFSU2_TR(0x4120b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4120b2:{NFSU2_TR(0x4120b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4120c0:L4120c0:{c.instructions+=10;NFSU2_TR(0x4120c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4120c1:{NFSU2_TR(0x4120c1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4120c5:{NFSU2_TR(0x4120c5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4120c6:{NFSU2_TR(0x4120c6);
__builtin_memmove((R+12),(R+4),4);
}
B4120c8:{NFSU2_TR(0x4120c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4120cb:{NFSU2_TR(0x4120cb);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xaeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B4120d2:{NFSU2_TR(0x4120d2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xffffffffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4120d5:{NFSU2_TR(0x4120d5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4120d6:{NFSU2_TR(0x4120d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4120da:{NFSU2_TR(0x4120da);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4120df;}}
}
B4120dc:L4120dc:{c.instructions+=1;NFSU2_TR(0x4120dc);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4120df:L4120df:{c.instructions+=4;NFSU2_TR(0x4120df);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4120e3:{NFSU2_TR(0x4120e3);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4120e5:{NFSU2_TR(0x4120e5);
__builtin_memmove((R+4),(R+0),4);
}
B4120e7:{NFSU2_TR(0x4120e7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4120eb;}}
}
B4120e9:L4120e9:{c.instructions+=1;NFSU2_TR(0x4120e9);
__builtin_memmove((R+4),(R+20),4);
}
B4120eb:L4120eb:{c.instructions+=3;NFSU2_TR(0x4120eb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4120ec:{NFSU2_TR(0x4120ec);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4120ee:{NFSU2_TR(0x4120ee);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4120f2;}}
}
B4120f0:L4120f0:{c.instructions+=1;NFSU2_TR(0x4120f0);
__builtin_memmove((R+0),(R+20),4);
}
B4120f2:L4120f2:{c.instructions+=3;NFSU2_TR(0x4120f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4120f5:{NFSU2_TR(0x4120f5);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4120f7:{NFSU2_TR(0x4120f7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L41212b;}}
}
B4120f9:L4120f9:{c.instructions+=2;NFSU2_TR(0x4120f9);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4120fb:{NFSU2_TR(0x4120fb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L41212b;}}
}
B4120fd:L4120fd:{c.instructions+=2;NFSU2_TR(0x4120fd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4120ff:{NFSU2_TR(0x4120ff);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L41212b;}}
}
B412101:L412101:{c.instructions+=7;NFSU2_TR(0x412101);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412102:{NFSU2_TR(0x412102);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B412104:{NFSU2_TR(0x412104);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B412105:{NFSU2_TR(0x412105);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412106:{NFSU2_TR(0x412106);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B41210a:{NFSU2_TR(0x41210a);
__builtin_memmove((R+28),(R+0),4);
}
B41210c:{NFSU2_TR(0x41210c);
__builtin_memmove((R+16),(R+16),4);
}
B412110:L412110:{c.instructions+=4;NFSU2_TR(0x412110);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B412112:{NFSU2_TR(0x412112);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B412115:{NFSU2_TR(0x412115);
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
B412117:{NFSU2_TR(0x412117);
if(r1(R+518)){{goto L412123;}}
}
B412119:L412119:{c.instructions+=4;NFSU2_TR(0x412119);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41211d:{NFSU2_TR(0x41211d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41211f:{NFSU2_TR(0x41211f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412120:{NFSU2_TR(0x412120);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x412123ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B412123:L412123:{c.instructions+=3;NFSU2_TR(0x412123);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B412126:{NFSU2_TR(0x412126);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B412127:{NFSU2_TR(0x412127);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x412110u);}goto L412110;}}
}
B412129:L412129:{c.instructions+=2;NFSU2_TR(0x412129);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41212a:{NFSU2_TR(0x41212a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41212b:L41212b:{c.instructions+=3;NFSU2_TR(0x41212b);
__builtin_memmove((R+0),gp(0x88f2be),1);
}
B412130:{NFSU2_TR(0x412130);
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
B412132:{NFSU2_TR(0x412132);
if(r1(R+518)){{goto L412168;}}
}
B412134:L412134:{c.instructions+=4;NFSU2_TR(0x412134);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B412138:{NFSU2_TR(0x412138);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41213b:{NFSU2_TR(0x41213b);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x2ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B41213f:{NFSU2_TR(0x41213f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L412168;}}
}
B412141:L412141:{c.instructions+=4;NFSU2_TR(0x412141);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B412145:{NFSU2_TR(0x412145);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B412148:{NFSU2_TR(0x412148);
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
B41214a:{NFSU2_TR(0x41214a);
if(r1(R+518)){{goto L412168;}}
}
B41214c:L41214c:{c.instructions+=4;NFSU2_TR(0x41214c);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B412150:{NFSU2_TR(0x412150);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B412154:{NFSU2_TR(0x412154);
u8 U[8];
__builtin_memmove((U+4),(R+4),2);
w1(R+512,u8((r2(U+4))<(u16(0xffffull))));
w1(R+523,sborrow<u16>(r2(U+4),u16(0xffffull)));
w2(U+6,u16(u32(r2(U+4))-u32(u16(0xffffull))));
w1(R+519,u8(s16(r2(U+6))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+6))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B412158:{NFSU2_TR(0x412158);
if(r1(R+518)){{goto L412168;}}
}
B41215a:L41215a:{c.instructions+=2;NFSU2_TR(0x41215a);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(u16(0xffffull))));
w1(R+523,sborrow<u16>(r2(U+10),u16(0xffffull)));
w2(U+12,u16(u32(r2(U+10))-u32(u16(0xffffull))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B41215f:{NFSU2_TR(0x41215f);
if(r1(R+518)){{goto L412168;}}
}
B412161:L412161:{c.instructions+=2;NFSU2_TR(0x412161);
w4(R+0,u32(s32(s16(r2(R+4)))));
}
B412164:{NFSU2_TR(0x412164);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B412168:L412168:{c.instructions+=4;NFSU2_TR(0x412168);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B412169:{NFSU2_TR(0x412169);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41216a:{NFSU2_TR(0x41216a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B41216b:{NFSU2_TR(0x41216b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B412170:L412170:{c.instructions+=7;NFSU2_TR(0x412170);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B412176:{NFSU2_TR(0x412176);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B412179:{NFSU2_TR(0x412179);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41217c:{NFSU2_TR(0x41217c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41217d:{NFSU2_TR(0x41217d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41217e:{NFSU2_TR(0x41217e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41217f:{NFSU2_TR(0x41217f);
if(r1(R+518)){{goto L412187;}}
}
B412181:L412181:{c.instructions+=2;NFSU2_TR(0x412181);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B412185:{NFSU2_TR(0x412185);
{goto L412189;}
}
B412187:L412187:{c.instructions+=1;NFSU2_TR(0x412187);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B412189:L412189:{c.instructions+=3;NFSU2_TR(0x412189);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B41218d:{NFSU2_TR(0x41218d);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B412191:{NFSU2_TR(0x412191);
if(r1(R+518)){{goto L4121c5;}}
}
B412193:L412193:{c.instructions+=3;NFSU2_TR(0x412193);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B412197:{NFSU2_TR(0x412197);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B41219b:{NFSU2_TR(0x41219b);
if(r1(R+518)){{goto L4121c5;}}
}
B41219d:L41219d:{c.instructions+=3;NFSU2_TR(0x41219d);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B4121a0:{NFSU2_TR(0x4121a0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4121a2:{NFSU2_TR(0x4121a2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4121ad;}}
}
B4121a4:L4121a4:{c.instructions+=2;NFSU2_TR(0x4121a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4121ab:{NFSU2_TR(0x4121ab);
{goto L4121af;}
}
B4121ad:L4121ad:{c.instructions+=1;NFSU2_TR(0x4121ad);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4121af:L4121af:{c.instructions+=4;NFSU2_TR(0x4121af);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B4121b2:{NFSU2_TR(0x4121b2);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4121b5:{NFSU2_TR(0x4121b5);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B4121bc:{NFSU2_TR(0x4121bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4121c1ull));
TAIL_STATIC(0x5d8950u,5d8);
}
B4121c1:L4121c1:{c.instructions+=2;NFSU2_TR(0x4121c1);
__builtin_memmove((R+28),(R+0),4);
}
B4121c3:{NFSU2_TR(0x4121c3);
{goto L4121c7;}
}
B4121c5:L4121c5:{c.instructions+=1;NFSU2_TR(0x4121c5);
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
B4121c7:L4121c7:{c.instructions+=13;NFSU2_TR(0x4121c7);
__builtin_memmove((R+0),gp(0x783b94),4);
}
B4121cc:{NFSU2_TR(0x4121cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4121cf:{NFSU2_TR(0x4121cf);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(s32(s16(r2(U+4)))));
}
B4121d3:{NFSU2_TR(0x4121d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4121d7:{NFSU2_TR(0x4121d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4121db:{NFSU2_TR(0x4121db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4121de:{NFSU2_TR(0x4121de);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4121e2:{NFSU2_TR(0x4121e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4121e5:{NFSU2_TR(0x4121e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4121e7:{NFSU2_TR(0x4121e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4121eb:{NFSU2_TR(0x4121eb);
__builtin_memmove((R+4),(R+24),4);
}
B4121ed:{NFSU2_TR(0x4121ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4121f1:{NFSU2_TR(0x4121f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4121f4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4121f4:L4121f4:{c.instructions+=4;NFSU2_TR(0x4121f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4121f5:{NFSU2_TR(0x4121f5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4121f6:{NFSU2_TR(0x4121f6);
__builtin_memmove((R+4),(R+28),4);
}
B4121f8:{NFSU2_TR(0x4121f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4121fdull));
TAIL_STATIC(0x410800u,410);
}
B4121fd:L4121fd:{c.instructions+=9;NFSU2_TR(0x4121fd);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B412201:{NFSU2_TR(0x412201);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B412202:{NFSU2_TR(0x412202);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B412203:{NFSU2_TR(0x412203);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B412204:{NFSU2_TR(0x412204);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B412208:{NFSU2_TR(0x412208);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41220c:{NFSU2_TR(0x41220c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B412210:{NFSU2_TR(0x412210);
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
B412213:{NFSU2_TR(0x412213);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B412220:L412220:{c.instructions+=10;NFSU2_TR(0x412220);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B412224:{NFSU2_TR(0x412224);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412225:{NFSU2_TR(0x412225);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412226:{NFSU2_TR(0x412226);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B412229:{NFSU2_TR(0x412229);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+12),(U+0),4);
}
B41222c:{NFSU2_TR(0x41222c);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B41222e:{NFSU2_TR(0x41222e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41222f:{NFSU2_TR(0x41222f);
w1(R+0,u8(0x1ull));
}
B412231:{NFSU2_TR(0x412231);
__builtin_memmove((R+28),(R+8),4);
}
B412233:{NFSU2_TR(0x412233);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4122ac;}}
}
B412235:L412235:{c.instructions+=3;NFSU2_TR(0x412235);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B412239:{NFSU2_TR(0x412239);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41223d:{NFSU2_TR(0x41223d);
__builtin_memmove((R+4),(R+4),4);
}
B412240:L412240:{c.instructions+=2;NFSU2_TR(0x412240);
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
B412242:{NFSU2_TR(0x412242);
if(r1(R+518)){{goto L4122ac;}}
}
B412244:L412244:{c.instructions+=4;NFSU2_TR(0x412244);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B412246:{NFSU2_TR(0x412246);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B412249:{NFSU2_TR(0x412249);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41224b:{NFSU2_TR(0x41224b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L412257;}}
}
B41224d:L41224d:{c.instructions+=2;NFSU2_TR(0x41224d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B412250:{NFSU2_TR(0x412250);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L412257;}}
}
B412252:L412252:{c.instructions+=2;NFSU2_TR(0x412252);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B412255:{NFSU2_TR(0x412255);
{goto L41226d;}
}
B412257:L412257:{c.instructions+=2;NFSU2_TR(0x412257);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41225a:{NFSU2_TR(0x41225a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L412267;}}
}
B41225c:L41225c:{c.instructions+=2;NFSU2_TR(0x41225c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41225f:{NFSU2_TR(0x41225f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L412267;}}
}
B412261:L412261:{c.instructions+=2;NFSU2_TR(0x412261);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B412265:{NFSU2_TR(0x412265);
{goto L41226d;}
}
B412267:L412267:{c.instructions+=1;NFSU2_TR(0x412267);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41226d:L41226d:{c.instructions+=2;NFSU2_TR(0x41226d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B41226f:{NFSU2_TR(0x41226f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41227b;}}
}
B412271:L412271:{c.instructions+=2;NFSU2_TR(0x412271);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B412274:{NFSU2_TR(0x412274);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L41227b;}}
}
B412276:L412276:{c.instructions+=2;NFSU2_TR(0x412276);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B412279:{NFSU2_TR(0x412279);
{goto L412291;}
}
B41227b:L41227b:{c.instructions+=2;NFSU2_TR(0x41227b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41227e:{NFSU2_TR(0x41227e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41228b;}}
}
B412280:L412280:{c.instructions+=2;NFSU2_TR(0x412280);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B412283:{NFSU2_TR(0x412283);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L41228b;}}
}
B412285:L412285:{c.instructions+=2;NFSU2_TR(0x412285);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B412289:{NFSU2_TR(0x412289);
{goto L412291;}
}
B41228b:L41228b:{c.instructions+=1;NFSU2_TR(0x41228b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B412291:L412291:{c.instructions+=6;NFSU2_TR(0x412291);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B412293:{NFSU2_TR(0x412293);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B412295:{NFSU2_TR(0x412295);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B412297:{NFSU2_TR(0x412297);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B412299:{NFSU2_TR(0x412299);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41229c:{NFSU2_TR(0x41229c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4122a2;}}
}
B41229e:L41229e:{c.instructions+=2;NFSU2_TR(0x41229e);
w1(R+0,u8(0x1ull));
}
B4122a0:{NFSU2_TR(0x4122a0);
{goto L4122a4;}
}
B4122a2:L4122a2:{c.instructions+=1;NFSU2_TR(0x4122a2);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B4122a4:L4122a4:{c.instructions+=4;NFSU2_TR(0x4122a4);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4122a5:{NFSU2_TR(0x4122a5);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B4122a8:{NFSU2_TR(0x4122a8);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B4122aa:{NFSU2_TR(0x4122aa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x412240u);}goto L412240;}}
}
B4122ac:L4122ac:{c.instructions+=4;NFSU2_TR(0x4122ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4122ad:{NFSU2_TR(0x4122ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4122ae:{NFSU2_TR(0x4122ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4122af:{NFSU2_TR(0x4122af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4122c0:L4122c0:{c.instructions+=7;NFSU2_TR(0x4122c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4122c3:{NFSU2_TR(0x4122c3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4122c4:{NFSU2_TR(0x4122c4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4122c5:{NFSU2_TR(0x4122c5);
__builtin_memmove((R+24),(R+4),4);
}
B4122c7:{NFSU2_TR(0x4122c7);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B4122cb:{NFSU2_TR(0x4122cb);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B4122cf:{NFSU2_TR(0x4122cf);
if(r1(R+518)){{goto L412393;}}
}
B4122d5:L4122d5:{c.instructions+=3;NFSU2_TR(0x4122d5);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B4122d9:{NFSU2_TR(0x4122d9);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B4122dd:{NFSU2_TR(0x4122dd);
if(r1(R+518)){{goto L412393;}}
}
B4122e3:L4122e3:{c.instructions+=3;NFSU2_TR(0x4122e3);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B4122e6:{NFSU2_TR(0x4122e6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4122e8:{NFSU2_TR(0x4122e8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4122f3;}}
}
B4122ea:L4122ea:{c.instructions+=2;NFSU2_TR(0x4122ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4122f1:{NFSU2_TR(0x4122f1);
{goto L4122f5;}
}
B4122f3:L4122f3:{c.instructions+=1;NFSU2_TR(0x4122f3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4122f5:L4122f5:{c.instructions+=5;NFSU2_TR(0x4122f5);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B4122f8:{NFSU2_TR(0x4122f8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4122fb:{NFSU2_TR(0x4122fb);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B412302:{NFSU2_TR(0x412302);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B412304:{NFSU2_TR(0x412304);
if(r1(R+518)){{goto L412393;}}
}
B41230a:L41230a:{c.instructions+=10;NFSU2_TR(0x41230a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41230e:{NFSU2_TR(0x41230e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B412312:{NFSU2_TR(0x412312);
{u32 ea_=u32(r4(R+24)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B412315:{NFSU2_TR(0x412315);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412316:{NFSU2_TR(0x412316);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B41231a:{NFSU2_TR(0x41231a);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B41231d:{NFSU2_TR(0x41231d);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B412320:{NFSU2_TR(0x412320);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B412324:{NFSU2_TR(0x412324);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B412328:{NFSU2_TR(0x412328);
if(r1(R+518)){{goto L412373;}}
}
B41232a:L41232a:{c.instructions+=4;NFSU2_TR(0x41232a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41232c:{NFSU2_TR(0x41232c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41232d:{NFSU2_TR(0x41232d);
__builtin_memmove((R+4),(R+24),4);
}
B41232f:{NFSU2_TR(0x41232f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x412332ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B412332:L412332:{c.instructions+=2;NFSU2_TR(0x412332);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B412334:{NFSU2_TR(0x412334);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L412344;}}
}
B412336:L412336:{c.instructions+=2;NFSU2_TR(0x412336);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B412339:{NFSU2_TR(0x412339);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L412344;}}
}
B41233b:L41233b:{c.instructions+=3;NFSU2_TR(0x41233b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41233e:{NFSU2_TR(0x41233e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B412342:{NFSU2_TR(0x412342);
{goto L41235f;}
}
B412344:L412344:{c.instructions+=2;NFSU2_TR(0x412344);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B412347:{NFSU2_TR(0x412347);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L412357;}}
}
B412349:L412349:{c.instructions+=2;NFSU2_TR(0x412349);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41234c:{NFSU2_TR(0x41234c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L412357;}}
}
B41234e:L41234e:{c.instructions+=3;NFSU2_TR(0x41234e);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B412351:{NFSU2_TR(0x412351);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B412355:{NFSU2_TR(0x412355);
{goto L41235f;}
}
B412357:L412357:{c.instructions+=1;NFSU2_TR(0x412357);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41235f:L41235f:{c.instructions+=3;NFSU2_TR(0x41235f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412360:{NFSU2_TR(0x412360);
__builtin_memmove((R+4),(R+12),4);
}
B412362:{NFSU2_TR(0x412362);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x412367ull));
TAIL_STATIC(0x401c40u,401);
}
B412367:L412367:{c.instructions+=3;NFSU2_TR(0x412367);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41236b:{NFSU2_TR(0x41236b);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41236f:{NFSU2_TR(0x41236f);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B412373:L412373:{c.instructions+=10;NFSU2_TR(0x412373);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B412377:{NFSU2_TR(0x412377);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41237b:{NFSU2_TR(0x41237b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41237d:{NFSU2_TR(0x41237d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41237e:{NFSU2_TR(0x41237e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B412382:{NFSU2_TR(0x412382);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412383:{NFSU2_TR(0x412383);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412384:{NFSU2_TR(0x412384);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412385:{NFSU2_TR(0x412385);
__builtin_memmove((R+4),(R+24),4);
}
B412387:{NFSU2_TR(0x412387);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41238aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41238a:L41238a:{c.instructions+=5;NFSU2_TR(0x41238a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41238b:{NFSU2_TR(0x41238b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41238c:{NFSU2_TR(0x41238c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41238d:{NFSU2_TR(0x41238d);
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
B412390:{NFSU2_TR(0x412390);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B412393:L412393:{c.instructions+=8;NFSU2_TR(0x412393);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B412397:{NFSU2_TR(0x412397);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B412398:{NFSU2_TR(0x412398);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B41239e:{NFSU2_TR(0x41239e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4123a5:{NFSU2_TR(0x4123a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4123ac:{NFSU2_TR(0x4123ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4123ad:{NFSU2_TR(0x4123ad);
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
B4123b0:{NFSU2_TR(0x4123b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4123c0:L4123c0:{c.instructions+=6;NFSU2_TR(0x4123c0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4123c6:{NFSU2_TR(0x4123c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4123c7:{NFSU2_TR(0x4123c7);
__builtin_memmove((R+24),(R+4),4);
}
B4123c9:{NFSU2_TR(0x4123c9);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B4123cd:{NFSU2_TR(0x4123cd);
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
B4123d1:{NFSU2_TR(0x4123d1);
if(r1(R+518)){{goto L412468;}}
}
B4123d7:L4123d7:{c.instructions+=3;NFSU2_TR(0x4123d7);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B4123db:{NFSU2_TR(0x4123db);
u8 U[8];
__builtin_memmove((U+4),(R+4),2);
w1(R+512,u8((r2(U+4))<(u16(0xffffull))));
w1(R+523,sborrow<u16>(r2(U+4),u16(0xffffull)));
w2(U+6,u16(u32(r2(U+4))-u32(u16(0xffffull))));
w1(R+519,u8(s16(r2(U+6))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+6))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B4123df:{NFSU2_TR(0x4123df);
if(r1(R+518)){{goto L412468;}}
}
B4123e5:L4123e5:{c.instructions+=3;NFSU2_TR(0x4123e5);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B4123e8:{NFSU2_TR(0x4123e8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4123ea:{NFSU2_TR(0x4123ea);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4123f5;}}
}
B4123ec:L4123ec:{c.instructions+=2;NFSU2_TR(0x4123ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4123f3:{NFSU2_TR(0x4123f3);
{goto L4123f7;}
}
B4123f5:L4123f5:{c.instructions+=1;NFSU2_TR(0x4123f5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4123f7:L4123f7:{c.instructions+=6;NFSU2_TR(0x4123f7);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B4123fa:{NFSU2_TR(0x4123fa);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4123fd:{NFSU2_TR(0x4123fd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4123fe:{NFSU2_TR(0x4123fe);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B412405:{NFSU2_TR(0x412405);
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
B412407:{NFSU2_TR(0x412407);
if(r1(R+518)){{goto L412467;}}
}
B412409:L412409:{c.instructions+=5;NFSU2_TR(0x412409);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41240a:{NFSU2_TR(0x41240a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41240c:{NFSU2_TR(0x41240c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B412410:{NFSU2_TR(0x412410);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B412412:{NFSU2_TR(0x412412);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L412422;}}
}
B412414:L412414:{c.instructions+=2;NFSU2_TR(0x412414);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B412417:{NFSU2_TR(0x412417);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L412422;}}
}
B412419:L412419:{c.instructions+=3;NFSU2_TR(0x412419);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41241c:{NFSU2_TR(0x41241c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B412420:{NFSU2_TR(0x412420);
{goto L41243d;}
}
B412422:L412422:{c.instructions+=2;NFSU2_TR(0x412422);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B412425:{NFSU2_TR(0x412425);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L412435;}}
}
B412427:L412427:{c.instructions+=2;NFSU2_TR(0x412427);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B41242a:{NFSU2_TR(0x41242a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L412435;}}
}
B41242c:L41242c:{c.instructions+=3;NFSU2_TR(0x41242c);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41242f:{NFSU2_TR(0x41242f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B412433:{NFSU2_TR(0x412433);
{goto L41243d;}
}
B412435:L412435:{c.instructions+=1;NFSU2_TR(0x412435);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41243d:L41243d:{c.instructions+=6;NFSU2_TR(0x41243d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B412441:{NFSU2_TR(0x412441);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B412443:{NFSU2_TR(0x412443);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412444:{NFSU2_TR(0x412444);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412445:{NFSU2_TR(0x412445);
__builtin_memmove((R+4),(R+24),4);
}
B412447:{NFSU2_TR(0x412447);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41244aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41244a:L41244a:{c.instructions+=5;NFSU2_TR(0x41244a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41244e:{NFSU2_TR(0x41244e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B412450:{NFSU2_TR(0x412450);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412451:{NFSU2_TR(0x412451);
__builtin_memmove((R+4),(R+24),4);
}
B412453:{NFSU2_TR(0x412453);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x412456ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B412456:L412456:{c.instructions+=3;NFSU2_TR(0x412456);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412457:{NFSU2_TR(0x412457);
__builtin_memmove((R+4),(R+28),4);
}
B412459:{NFSU2_TR(0x412459);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41245eull));
TAIL_STATIC(0x401c40u,401);
}
B41245e:L41245e:{c.instructions+=3;NFSU2_TR(0x41245e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B412462:{NFSU2_TR(0x412462);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B412463:{NFSU2_TR(0x412463);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B412467:L412467:{c.instructions+=1;NFSU2_TR(0x412467);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B412468:L412468:{c.instructions+=2;NFSU2_TR(0x412468);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B412469:{NFSU2_TR(0x412469);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B412470:L412470:{c.instructions+=4;NFSU2_TR(0x412470);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B412474:{NFSU2_TR(0x412474);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41247a:{NFSU2_TR(0x41247a);
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
B41247e:{NFSU2_TR(0x41247e);
if(r1(R+518)){{goto L4124f6;}}
}
B412480:L412480:{c.instructions+=3;NFSU2_TR(0x412480);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B412484:{NFSU2_TR(0x412484);
u8 U[8];
__builtin_memmove((U+4),(R+8),2);
w1(R+512,u8((r2(U+4))<(u16(0xffffull))));
w1(R+523,sborrow<u16>(r2(U+4),u16(0xffffull)));
w2(U+6,u16(u32(r2(U+4))-u32(u16(0xffffull))));
w1(R+519,u8(s16(r2(U+6))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+6))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B412488:{NFSU2_TR(0x412488);
if(r1(R+518)){{goto L4124f6;}}
}
B41248a:L41248a:{c.instructions+=3;NFSU2_TR(0x41248a);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B41248d:{NFSU2_TR(0x41248d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B41248f:{NFSU2_TR(0x41248f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41249a;}}
}
B412491:L412491:{c.instructions+=2;NFSU2_TR(0x412491);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B412498:{NFSU2_TR(0x412498);
{goto L41249c;}
}
B41249a:L41249a:{c.instructions+=1;NFSU2_TR(0x41249a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B41249c:L41249c:{c.instructions+=6;NFSU2_TR(0x41249c);
w4(R+8,u32(s32(s16(r2(R+8)))));
}
B41249f:{NFSU2_TR(0x41249f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4124a2:{NFSU2_TR(0x4124a2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4124a3:{NFSU2_TR(0x4124a3);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B4124aa:{NFSU2_TR(0x4124aa);
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
B4124ac:{NFSU2_TR(0x4124ac);
if(r1(R+518)){{goto L4124f5;}}
}
B4124ae:L4124ae:{c.instructions+=4;NFSU2_TR(0x4124ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4124b2:{NFSU2_TR(0x4124b2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4124b4:{NFSU2_TR(0x4124b4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4124b6:{NFSU2_TR(0x4124b6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4124c6;}}
}
B4124b8:L4124b8:{c.instructions+=2;NFSU2_TR(0x4124b8);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4124bb:{NFSU2_TR(0x4124bb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4124c6;}}
}
B4124bd:L4124bd:{c.instructions+=3;NFSU2_TR(0x4124bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4124c0:{NFSU2_TR(0x4124c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4124c4:{NFSU2_TR(0x4124c4);
{goto L4124e1;}
}
B4124c6:L4124c6:{c.instructions+=2;NFSU2_TR(0x4124c6);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4124c9:{NFSU2_TR(0x4124c9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4124d9;}}
}
B4124cb:L4124cb:{c.instructions+=2;NFSU2_TR(0x4124cb);
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
B4124ce:{NFSU2_TR(0x4124ce);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4124d9;}}
}
B4124d0:L4124d0:{c.instructions+=3;NFSU2_TR(0x4124d0);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4124d3:{NFSU2_TR(0x4124d3);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4124d7:{NFSU2_TR(0x4124d7);
{goto L4124e1;}
}
B4124d9:L4124d9:{c.instructions+=1;NFSU2_TR(0x4124d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4124e1:L4124e1:{c.instructions+=3;NFSU2_TR(0x4124e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4124e3:{NFSU2_TR(0x4124e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4124e4:{NFSU2_TR(0x4124e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4124e7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4124e7:L4124e7:{c.instructions+=3;NFSU2_TR(0x4124e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4124e8:{NFSU2_TR(0x4124e8);
__builtin_memmove((R+4),(R+24),4);
}
B4124ea:{NFSU2_TR(0x4124ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4124efull));
TAIL_STATIC(0x401c40u,401);
}
B4124ef:L4124ef:{c.instructions+=2;NFSU2_TR(0x4124ef);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4124f3:{NFSU2_TR(0x4124f3);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B4124f5:L4124f5:{c.instructions+=1;NFSU2_TR(0x4124f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4124f6:L4124f6:{c.instructions+=1;NFSU2_TR(0x4124f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B412500:L412500:{c.instructions+=8;NFSU2_TR(0x412500);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B412503:{NFSU2_TR(0x412503);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412504:{NFSU2_TR(0x412504);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412505:{NFSU2_TR(0x412505);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B412509:{NFSU2_TR(0x412509);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B41250b:{NFSU2_TR(0x41250b);
__builtin_memmove((R+20),(R+4),4);
}
B41250d:{NFSU2_TR(0x41250d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B412511:{NFSU2_TR(0x412511);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L412518;}}
}
B412513:L412513:{c.instructions+=2;NFSU2_TR(0x412513);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B412516:{NFSU2_TR(0x412516);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41252c;}}
}
B412518:L412518:{c.instructions+=2;NFSU2_TR(0x412518);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41251b:{NFSU2_TR(0x41251b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L412522;}}
}
B41251d:L41251d:{c.instructions+=2;NFSU2_TR(0x41251d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B412520:{NFSU2_TR(0x412520);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41252c;}}
}
B412522:L412522:{c.instructions+=5;NFSU2_TR(0x412522);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B412523:{NFSU2_TR(0x412523);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B412525:{NFSU2_TR(0x412525);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B412526:{NFSU2_TR(0x412526);
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
B412529:{NFSU2_TR(0x412529);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41252c:L41252c:{c.instructions+=6;NFSU2_TR(0x41252c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41252d:{NFSU2_TR(0x41252d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41252e:{NFSU2_TR(0x41252e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B412532:{NFSU2_TR(0x412532);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412533:{NFSU2_TR(0x412533);
__builtin_memmove((R+4),(R+20),4);
}
B412535:{NFSU2_TR(0x412535);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41253aull));
TAIL_STATIC(0x40ae90u,40a);
}
B41253a:L41253a:{c.instructions+=4;NFSU2_TR(0x41253a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41253b:{NFSU2_TR(0x41253b);
__builtin_memmove((R+4),(R+20),4);
}
B41253d:{NFSU2_TR(0x41253d);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B412541:{NFSU2_TR(0x412541);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x412546ull));
TAIL_STATIC(0x40ae90u,40a);
}
B412546:L412546:{c.instructions+=2;NFSU2_TR(0x412546);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B412548:{NFSU2_TR(0x412548);
if(r1(R+518)){{goto L412578;}}
}
B41254a:L41254a:{c.instructions+=3;NFSU2_TR(0x41254a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B41254e:{NFSU2_TR(0x41254e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B412550:{NFSU2_TR(0x412550);
if(r1(R+518)){{goto L412584;}}
}
B412552:L412552:{c.instructions+=2;NFSU2_TR(0x412552);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B412556:{NFSU2_TR(0x412556);
if(r1(R+518)){{goto L412584;}}
}
B412558:L412558:{c.instructions+=3;NFSU2_TR(0x412558);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41255b:{NFSU2_TR(0x41255b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41255c:{NFSU2_TR(0x41255c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x412561ull));
TAIL_STATIC(0x40aa90u,40a);
}
B412561:L412561:{c.instructions+=2;NFSU2_TR(0x412561);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B412563:{NFSU2_TR(0x412563);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L412584;}}
}
B412565:L412565:{c.instructions+=6;NFSU2_TR(0x412565);
__builtin_memmove((R+0),gp(0x783cc8),4);
}
B41256a:{NFSU2_TR(0x41256a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41256b:{NFSU2_TR(0x41256b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41256c:{NFSU2_TR(0x41256c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41256d:{NFSU2_TR(0x41256d);
__builtin_memmove((R+4),(R+20),4);
}
B41256f:{NFSU2_TR(0x41256f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x412574ull));
TAIL_STATIC(0x40af30u,40a);
}
B412574:L412574:{c.instructions+=2;NFSU2_TR(0x412574);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B412576:{NFSU2_TR(0x412576);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L412584;}}
}
B412578:L412578:{c.instructions+=7;NFSU2_TR(0x412578);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B412579:{NFSU2_TR(0x412579);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41257a:{NFSU2_TR(0x41257a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41257b:{NFSU2_TR(0x41257b);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B41257d:{NFSU2_TR(0x41257d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41257e:{NFSU2_TR(0x41257e);
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
B412581:{NFSU2_TR(0x412581);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B412584:L412584:{c.instructions+=2;NFSU2_TR(0x412584);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B412587:{NFSU2_TR(0x412587);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L412592;}}
}
B412589:L412589:{c.instructions+=2;NFSU2_TR(0x412589);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41258c:{NFSU2_TR(0x41258c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L412592;}}
}
B41258e:L41258e:{c.instructions+=2;NFSU2_TR(0x41258e);
w1(R+4,u8(0x1ull));
}
B412590:{NFSU2_TR(0x412590);
{goto L412594;}
}
B412592:L412592:{c.instructions+=1;NFSU2_TR(0x412592);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B412594:L412594:{c.instructions+=2;NFSU2_TR(0x412594);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B412597:{NFSU2_TR(0x412597);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4125a2;}}
}
B412599:L412599:{c.instructions+=2;NFSU2_TR(0x412599);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41259c:{NFSU2_TR(0x41259c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4125a2;}}
}
B41259e:L41259e:{c.instructions+=2;NFSU2_TR(0x41259e);
w1(R+0,u8(0x1ull));
}
B4125a0:{NFSU2_TR(0x4125a0);
{goto L4125a4;}
}
B4125a2:L4125a2:{c.instructions+=1;NFSU2_TR(0x4125a2);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B4125a4:L4125a4:{c.instructions+=2;NFSU2_TR(0x4125a4);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4125a6:{NFSU2_TR(0x4125a6);
if(r1(R+518)){{goto L4126f1;}}
}
B4125ac:L4125ac:{c.instructions+=2;NFSU2_TR(0x4125ac);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4125ae:{NFSU2_TR(0x4125ae);
if(r1(R+518)){{goto L4126f1;}}
}
B4125b4:L4125b4:{c.instructions+=6;NFSU2_TR(0x4125b4);
__builtin_memmove((R+4),gp(0x883dac),4);
}
B4125ba:{NFSU2_TR(0x4125ba);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B4125c1:{NFSU2_TR(0x4125c1);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B4125c6:{NFSU2_TR(0x4125c6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4125c8:{NFSU2_TR(0x4125c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4125cc:{NFSU2_TR(0x4125cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4125db;}}
}
B4125ce:L4125ce:{c.instructions+=3;NFSU2_TR(0x4125ce);
__builtin_memmove((R+0),gp(0x890108),4);
}
B4125d3:{NFSU2_TR(0x4125d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4125d5:{NFSU2_TR(0x4125d5);
if(r1(R+518)){{goto L4126f1;}}
}
B4125db:L4125db:{c.instructions+=3;NFSU2_TR(0x4125db);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4125df:{NFSU2_TR(0x4125df);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4125e1:{NFSU2_TR(0x4125e1);
if(r1(R+518)){{goto L4126f1;}}
}
B4125e7:L4125e7:{c.instructions+=5;NFSU2_TR(0x4125e7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4125e9:{NFSU2_TR(0x4125e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4125ef:{NFSU2_TR(0x4125ef);
__builtin_memmove((R+12),gp(0x89e7a4),4);
}
B4125f5:{NFSU2_TR(0x4125f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4125f9:{NFSU2_TR(0x4125f9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L41267d;}}
}
B4125ff:L4125ff:{c.instructions+=4;NFSU2_TR(0x4125ff);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B412600:{NFSU2_TR(0x412600);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B412602:{NFSU2_TR(0x412602);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B412606:{NFSU2_TR(0x412606);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4126f1;}}
}
B41260c:L41260c:{c.instructions+=2;NFSU2_TR(0x41260c);
__builtin_memmove((R+20),(R+0),4);
}
B41260e:{NFSU2_TR(0x41260e);
__builtin_memmove((R+28),(R+28),4);
}
B412610:L412610:{c.instructions+=4;NFSU2_TR(0x412610);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B412614:{NFSU2_TR(0x412614);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+28),(U+0),4);
}
B412617:{NFSU2_TR(0x412617);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412618:{NFSU2_TR(0x412618);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41261dull));
TAIL_STATIC(0x40ae90u,40a);
}
B41261d:L41261d:{c.instructions+=2;NFSU2_TR(0x41261d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41261f:{NFSU2_TR(0x41261f);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x412578u);}goto L412578;}}
}
B412625:L412625:{c.instructions+=5;NFSU2_TR(0x412625);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B412629:{NFSU2_TR(0x412629);
u8 U[4];
w4(U+0,u32(0xbdcccccdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41262e:{NFSU2_TR(0x41262e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41262f:{NFSU2_TR(0x41262f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412630:{NFSU2_TR(0x412630);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x412635ull));
TAIL_STATIC(0x40af30u,40a);
}
B412635:L412635:{c.instructions+=2;NFSU2_TR(0x412635);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B412637:{NFSU2_TR(0x412637);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x412578u);}goto L412578;}}
}
B41263d:L41263d:{c.instructions+=13;NFSU2_TR(0x41263d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B412641:{NFSU2_TR(0x412641);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B412644:{NFSU2_TR(0x412644);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B412647:{NFSU2_TR(0x412647);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41264b:{NFSU2_TR(0x41264b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41264e:{NFSU2_TR(0x41264e);
__builtin_memmove((R+0),(R+518),1);
}
B412651:{NFSU2_TR(0x412651);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412652:{NFSU2_TR(0x412652);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412653:{NFSU2_TR(0x412653);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412654:{NFSU2_TR(0x412654);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412655:{NFSU2_TR(0x412655);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412656:{NFSU2_TR(0x412656);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412657:{NFSU2_TR(0x412657);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41265cull));
TAIL_STATIC(0x40b110u,40b);
}
B41265c:L41265c:{c.instructions+=3;NFSU2_TR(0x41265c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B41265f:{NFSU2_TR(0x41265f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B412661:{NFSU2_TR(0x412661);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x412578u);}goto L412578;}}
}
B412667:L412667:{c.instructions+=4;NFSU2_TR(0x412667);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41266b:{NFSU2_TR(0x41266b);
__builtin_memmove((R+24),(R+28),4);
}
B41266d:{NFSU2_TR(0x41266d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41266f:{NFSU2_TR(0x41266f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x412610u);}goto L412610;}}
}
B412671:L412671:{c.instructions+=7;NFSU2_TR(0x412671);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B412672:{NFSU2_TR(0x412672);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B412673:{NFSU2_TR(0x412673);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B412674:{NFSU2_TR(0x412674);
w1(R+0,u8(0x1ull));
}
B412676:{NFSU2_TR(0x412676);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B412677:{NFSU2_TR(0x412677);
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
B41267a:{NFSU2_TR(0x41267a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41267d:L41267d:{c.instructions+=4;NFSU2_TR(0x41267d);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B41267e:{NFSU2_TR(0x41267e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B412680:{NFSU2_TR(0x412680);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B412684:{NFSU2_TR(0x412684);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4126f1;}}
}
B412686:L412686:{c.instructions+=2;NFSU2_TR(0x412686);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B41268a:{NFSU2_TR(0x41268a);
__builtin_memmove((R+12),(R+12),4);
}
B412690:L412690:{c.instructions+=4;NFSU2_TR(0x412690);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B412694:{NFSU2_TR(0x412694);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B412697:{NFSU2_TR(0x412697);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412698:{NFSU2_TR(0x412698);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41269dull));
TAIL_STATIC(0x40ae90u,40a);
}
B41269d:L41269d:{c.instructions+=2;NFSU2_TR(0x41269d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41269f:{NFSU2_TR(0x41269f);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x412578u);}goto L412578;}}
}
B4126a5:L4126a5:{c.instructions+=5;NFSU2_TR(0x4126a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4126a9:{NFSU2_TR(0x4126a9);
u8 U[4];
w4(U+0,u32(0xbdcccccdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4126ae:{NFSU2_TR(0x4126ae);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4126af:{NFSU2_TR(0x4126af);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4126b0:{NFSU2_TR(0x4126b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4126b5ull));
TAIL_STATIC(0x40af30u,40a);
}
B4126b5:L4126b5:{c.instructions+=2;NFSU2_TR(0x4126b5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4126b7:{NFSU2_TR(0x4126b7);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x412578u);}goto L412578;}}
}
B4126bd:L4126bd:{c.instructions+=13;NFSU2_TR(0x4126bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4126c1:{NFSU2_TR(0x4126c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4126c4:{NFSU2_TR(0x4126c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4126c7:{NFSU2_TR(0x4126c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4126cb:{NFSU2_TR(0x4126cb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4126ce:{NFSU2_TR(0x4126ce);
__builtin_memmove((R+4),(R+518),1);
}
B4126d1:{NFSU2_TR(0x4126d1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4126d2:{NFSU2_TR(0x4126d2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4126d3:{NFSU2_TR(0x4126d3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4126d4:{NFSU2_TR(0x4126d4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4126d5:{NFSU2_TR(0x4126d5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4126d6:{NFSU2_TR(0x4126d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4126d7:{NFSU2_TR(0x4126d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4126dcull));
TAIL_STATIC(0x40b110u,40b);
}
B4126dc:L4126dc:{c.instructions+=3;NFSU2_TR(0x4126dc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4126df:{NFSU2_TR(0x4126df);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4126e1:{NFSU2_TR(0x4126e1);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x412578u);}goto L412578;}}
}
B4126e7:L4126e7:{c.instructions+=4;NFSU2_TR(0x4126e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4126eb:{NFSU2_TR(0x4126eb);
__builtin_memmove((R+24),(R+28),4);
}
B4126ed:{NFSU2_TR(0x4126ed);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4126ef:{NFSU2_TR(0x4126ef);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x412690u);}goto L412690;}}
}
B4126f1:L4126f1:{c.instructions+=7;NFSU2_TR(0x4126f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4126f2:{NFSU2_TR(0x4126f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4126f3:{NFSU2_TR(0x4126f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4126f4:{NFSU2_TR(0x4126f4);
w1(R+0,u8(0x1ull));
}
B4126f6:{NFSU2_TR(0x4126f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4126f7:{NFSU2_TR(0x4126f7);
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
B4126fa:{NFSU2_TR(0x4126fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B412700:L412700:{c.instructions+=4;NFSU2_TR(0x412700);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412701:{NFSU2_TR(0x412701);
__builtin_memmove((R+24),(R+4),4);
}
B412703:{NFSU2_TR(0x412703);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B412706:{NFSU2_TR(0x412706);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41270bull));
TAIL_STATIC(0x40c910u,40c);
}
B41270b:L41270b:{c.instructions+=6;NFSU2_TR(0x41270b);
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
B41270d:{NFSU2_TR(0x41270d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x900ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B412713:{NFSU2_TR(0x412713);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x904ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B412719:{NFSU2_TR(0x412719);
__builtin_memmove((R+0),(R+24),4);
}
B41271b:{NFSU2_TR(0x41271b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41271c:{NFSU2_TR(0x41271c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B412720:L412720:{c.instructions+=9;NFSU2_TR(0x412720);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412721:{NFSU2_TR(0x412721);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B412725:{NFSU2_TR(0x412725);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412726:{NFSU2_TR(0x412726);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412727:{NFSU2_TR(0x412727);
u8 U[4];
w4(U+0,u32(0x785080ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41272c:{NFSU2_TR(0x41272c);
__builtin_memmove((R+28),(R+4),4);
}
B41272e:{NFSU2_TR(0x41272e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412730:{NFSU2_TR(0x412730);
__builtin_memmove((R+4),(R+12),4);
}
B412732:{NFSU2_TR(0x412732);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x412737ull));
TAIL_STATIC(0x578ce0u,578);
}
B412737:L412737:{c.instructions+=3;NFSU2_TR(0x412737);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41273a:{NFSU2_TR(0x41273a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41273c:{NFSU2_TR(0x41273c);
if(r1(R+518)){{goto L412783;}}
}
B41273e:L41273e:{c.instructions+=5;NFSU2_TR(0x41273e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B412744:{NFSU2_TR(0x412744);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412745:{NFSU2_TR(0x412745);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x900ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41274b:{NFSU2_TR(0x41274b);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41274d:{NFSU2_TR(0x41274d);
if(r1(R+518)){{goto L412782;}}
}
B41274f:L41274f:{c.instructions+=1;NFSU2_TR(0x41274f);
}
B412750:L412750:{c.instructions+=3;NFSU2_TR(0x412750);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B412756:{NFSU2_TR(0x412756);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B412758:{NFSU2_TR(0x412758);
if(r1(R+518)){{goto L41277c;}}
}
B41275a:L41275a:{c.instructions+=2;NFSU2_TR(0x41275a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41275f:{NFSU2_TR(0x41275f);
if(r1(R+518)){{goto L41277c;}}
}
B412761:L412761:{c.instructions+=4;NFSU2_TR(0x412761);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B412767:{NFSU2_TR(0x412767);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412768:{NFSU2_TR(0x412768);
w4(R+4,u32(0x8a3288ull));
}
B41276d:{NFSU2_TR(0x41276d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x412772ull));
TAIL_STATIC(0x63ae00u,63a);
}
B412772:L412772:{c.instructions+=1;NFSU2_TR(0x412772);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8f8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41277c:L41277c:{c.instructions+=3;NFSU2_TR(0x41277c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B41277e:{NFSU2_TR(0x41277e);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B412780:{NFSU2_TR(0x412780);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x412750u);}goto L412750;}}
}
B412782:L412782:{c.instructions+=1;NFSU2_TR(0x412782);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B412783:L412783:{c.instructions+=6;NFSU2_TR(0x412783);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412785:{NFSU2_TR(0x412785);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412787:{NFSU2_TR(0x412787);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412789:{NFSU2_TR(0x412789);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41278a:{NFSU2_TR(0x41278a);
__builtin_memmove((R+4),(R+12),4);
}
B41278c:{NFSU2_TR(0x41278c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x412791ull));
TAIL_STATIC(0x571640u,571);
}
B412791:L412791:{c.instructions+=3;NFSU2_TR(0x412791);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412792:{NFSU2_TR(0x412792);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B412795:{NFSU2_TR(0x412795);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41279aull));
TAIL_STATIC(0x631a70u,631);
}
B41279a:L41279a:{c.instructions+=4;NFSU2_TR(0x41279a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4127a0:{NFSU2_TR(0x4127a0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x900ull))));
}
B4127a6:{NFSU2_TR(0x4127a6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4127a8:{NFSU2_TR(0x4127a8);
if(r1(R+518)){{goto L4127be;}}
}
B4127aa:L4127aa:{c.instructions+=1;NFSU2_TR(0x4127aa);
__builtin_memmove((R+12),(R+12),4);
}
B4127b0:L4127b0:{c.instructions+=3;NFSU2_TR(0x4127b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4127b1:{NFSU2_TR(0x4127b1);
__builtin_memmove((R+4),(R+24),4);
}
B4127b3:{NFSU2_TR(0x4127b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4127b8ull));
TAIL_STATIC(0x40bd40u,40b);
}
B4127b8:L4127b8:{c.instructions+=3;NFSU2_TR(0x4127b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4127ba:{NFSU2_TR(0x4127ba);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4127bc:{NFSU2_TR(0x4127bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4127b0u);}goto L4127b0;}}
}
B4127be:L4127be:{c.instructions+=3;NFSU2_TR(0x4127be);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4127c1:{NFSU2_TR(0x4127c1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4127c3:{NFSU2_TR(0x4127c3);
if(r1(R+518)){{goto L412824;}}
}
B4127c5:L4127c5:{c.instructions+=3;NFSU2_TR(0x4127c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4127c7:{NFSU2_TR(0x4127c7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4127c9:{NFSU2_TR(0x4127c9);
if(r1(R+518)){{goto L4127ff;}}
}
B4127cb:L4127cb:{c.instructions+=1;NFSU2_TR(0x4127cb);
{goto L4127d0;}
}
B4127d0:L4127d0:{c.instructions+=3;NFSU2_TR(0x4127d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4127d6:{NFSU2_TR(0x4127d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4127d8:{NFSU2_TR(0x4127d8);
if(r1(R+518)){{goto L4127f9;}}
}
B4127da:L4127da:{c.instructions+=2;NFSU2_TR(0x4127da);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4127df:{NFSU2_TR(0x4127df);
if(r1(R+518)){{goto L4127f9;}}
}
B4127e1:L4127e1:{c.instructions+=6;NFSU2_TR(0x4127e1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4127e3:{NFSU2_TR(0x4127e3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4127e5:{NFSU2_TR(0x4127e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4127e8:{NFSU2_TR(0x4127e8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4127e9:{NFSU2_TR(0x4127e9);
w4(R+4,u32(0x8a3288ull));
}
B4127ee:{NFSU2_TR(0x4127ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4127f3ull));
TAIL_STATIC(0x63bc70u,63b);
}
B4127f3:L4127f3:{c.instructions+=1;NFSU2_TR(0x4127f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8f8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4127f9:L4127f9:{c.instructions+=3;NFSU2_TR(0x4127f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4127fb:{NFSU2_TR(0x4127fb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4127fd:{NFSU2_TR(0x4127fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4127d0u);}goto L4127d0;}}
}
B4127ff:L4127ff:{c.instructions+=4;NFSU2_TR(0x4127ff);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412801:{NFSU2_TR(0x412801);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412803:{NFSU2_TR(0x412803);
w4(R+4,u32(0x8a3288ull));
}
B412808:{NFSU2_TR(0x412808);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41280dull));
TAIL_STATIC(0x63bcd0u,63b);
}
B41280d:L41280d:{c.instructions+=3;NFSU2_TR(0x41280d);
__builtin_memmove((R+0),gp(0x8a329c),4);
}
B412812:{NFSU2_TR(0x412812);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B412814:{NFSU2_TR(0x412814);
if(r1(R+518)){{goto L412824;}}
}
B412816:L412816:{c.instructions+=1;NFSU2_TR(0x412816);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41281bull));
TAIL_STATIC(0x57ef60u,57e);
}
B41281b:L41281b:{c.instructions+=3;NFSU2_TR(0x41281b);
__builtin_memmove((R+0),gp(0x8a329c),4);
}
B412820:{NFSU2_TR(0x412820);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B412822:{NFSU2_TR(0x412822);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x412816u);}goto L412816;}}
}
B412824:L412824:{c.instructions+=2;NFSU2_TR(0x412824);
__builtin_memmove((R+4),(R+12),4);
}
B412826:{NFSU2_TR(0x412826);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41282bull));
TAIL_STATIC(0x578d90u,578);
}
B41282b:L41282b:{c.instructions+=4;NFSU2_TR(0x41282b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41282c:{NFSU2_TR(0x41282c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41282d:{NFSU2_TR(0x41282d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41282e:{NFSU2_TR(0x41282e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B412840:L412840:{c.instructions+=8;NFSU2_TR(0x412840);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B412843:{NFSU2_TR(0x412843);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412844:{NFSU2_TR(0x412844);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x900ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41284a:{NFSU2_TR(0x41284a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41284b:{NFSU2_TR(0x41284b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+24),(U+0),4);
}
B41284e:{NFSU2_TR(0x41284e);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B412850:{NFSU2_TR(0x412850);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B412854:{NFSU2_TR(0x412854);
if(r1(R+518)){{goto L4128f5;}}
}
B41285a:L41285a:{c.instructions+=4;NFSU2_TR(0x41285a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41285b:{NFSU2_TR(0x41285b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41285c:{NFSU2_TR(0x41285c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B41285e:{NFSU2_TR(0x41285e);
__builtin_memmove((R+28),(R+28),4);
}
B412860:L412860:{c.instructions+=11;NFSU2_TR(0x412860);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B412863:{NFSU2_TR(0x412863);
__builtin_memmove((R+4),(R+28),4);
}
B412865:{NFSU2_TR(0x412865);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8f8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41286b:{NFSU2_TR(0x41286b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41286e:{NFSU2_TR(0x41286e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x908ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B412874:{NFSU2_TR(0x412874);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41287a:{NFSU2_TR(0x41287a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x910ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B412880:{NFSU2_TR(0x412880);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x914ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B412886:{NFSU2_TR(0x412886);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x904ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41288c:{NFSU2_TR(0x41288c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x900ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B412892:{NFSU2_TR(0x412892);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x412897ull));
TAIL_STATIC(0x6371e0u,637);
}
B412897:L412897:{c.instructions+=2;NFSU2_TR(0x412897);
u8 U[4];
w4(U+0,u32(0xffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41289c:{NFSU2_TR(0x41289c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4128a1ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B4128a1:L4128a1:{c.instructions+=5;NFSU2_TR(0x4128a1);
__builtin_memmove((R+4),gp(0x890080),4);
}
B4128a7:{NFSU2_TR(0x4128a7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4128aa:{NFSU2_TR(0x4128aa);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4128ac:{NFSU2_TR(0x4128ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4128b0:{NFSU2_TR(0x4128b0);
if(r1(R+518)){{goto L4128c0;}}
}
B4128b2:L4128b2:{c.instructions+=2;NFSU2_TR(0x4128b2);
u8 U[4];
w4(U+0,u32(0xffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4128b7:{NFSU2_TR(0x4128b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4128bcull));
TAIL_STATIC(0x5ea4e0u,5ea);
}
B4128bc:L4128bc:{c.instructions+=1;NFSU2_TR(0x4128bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4128c0:L4128c0:{c.instructions+=7;NFSU2_TR(0x4128c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4128c2:{NFSU2_TR(0x4128c2);
__builtin_memmove((R+8),gp(0x8a1ccc),4);
}
B4128c8:{NFSU2_TR(0x4128c8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4128ce:{NFSU2_TR(0x4128ce);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4128d2:{NFSU2_TR(0x4128d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4128d3:{NFSU2_TR(0x4128d3);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B4128d5:{NFSU2_TR(0x4128d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4128daull));
TAIL_STATIC(0x61bc20u,61b);
}
B4128da:L4128da:{c.instructions+=4;NFSU2_TR(0x4128da);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4128dd:{NFSU2_TR(0x4128dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4128df:{NFSU2_TR(0x4128df);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4128e1:{NFSU2_TR(0x4128e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x412860u);}goto L412860;}}
}
B4128e7:L4128e7:{c.instructions+=8;NFSU2_TR(0x4128e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4128eb:{NFSU2_TR(0x4128eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4128ec:{NFSU2_TR(0x4128ec);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4128ee:{NFSU2_TR(0x4128ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4128ef:{NFSU2_TR(0x4128ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4128f0:{NFSU2_TR(0x4128f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4128f1:{NFSU2_TR(0x4128f1);
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
B4128f4:{NFSU2_TR(0x4128f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4128f5:L4128f5:{c.instructions+=5;NFSU2_TR(0x4128f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4128f6:{NFSU2_TR(0x4128f6);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4128fc:{NFSU2_TR(0x4128fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4128fd:{NFSU2_TR(0x4128fd);
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
B412900:{NFSU2_TR(0x412900);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B412910:L412910:{c.instructions+=6;NFSU2_TR(0x412910);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x900ull))));
__builtin_memmove((R+8),(U+0),4);
}
B412916:{NFSU2_TR(0x412916);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B412918:{NFSU2_TR(0x412918);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412919:{NFSU2_TR(0x412919);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B41291b:{NFSU2_TR(0x41291b);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B41291d:{NFSU2_TR(0x41291d);
if(r1(R+518)){{goto L41294a;}}
}
B41291f:L41291f:{c.instructions+=4;NFSU2_TR(0x41291f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412920:{NFSU2_TR(0x412920);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B412924:{NFSU2_TR(0x412924);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412925:{NFSU2_TR(0x412925);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B412927:L412927:{c.instructions+=2;NFSU2_TR(0x412927);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B41292a:{NFSU2_TR(0x41292a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L412934;}}
}
B41292c:L41292c:{c.instructions+=3;NFSU2_TR(0x41292c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x17ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41292f:{NFSU2_TR(0x41292f);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(R+0))<(r1(U+8))));
w1(R+523,sborrow<u8>(r1(R+0),r1(U+8)));
w1(U+9,u8(u32(r1(R+0))-u32(r1(U+8))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B412932:{NFSU2_TR(0x412932);
if(r1(R+518)){{goto L412942;}}
}
B412934:L412934:{c.instructions+=3;NFSU2_TR(0x412934);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B412936:{NFSU2_TR(0x412936);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B412938:{NFSU2_TR(0x412938);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x412927u);}goto L412927;}}
}
B41293a:L41293a:{c.instructions+=5;NFSU2_TR(0x41293a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41293b:{NFSU2_TR(0x41293b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41293c:{NFSU2_TR(0x41293c);
__builtin_memmove((R+0),(R+20),4);
}
B41293e:{NFSU2_TR(0x41293e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41293f:{NFSU2_TR(0x41293f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B412942:L412942:{c.instructions+=5;NFSU2_TR(0x412942);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B412943:{NFSU2_TR(0x412943);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B412944:{NFSU2_TR(0x412944);
__builtin_memmove((R+0),(R+4),4);
}
B412946:{NFSU2_TR(0x412946);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B412947:{NFSU2_TR(0x412947);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41294a:L41294a:{c.instructions+=3;NFSU2_TR(0x41294a);
__builtin_memmove((R+0),(R+20),4);
}
B41294c:{NFSU2_TR(0x41294c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41294d:{NFSU2_TR(0x41294d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B412950:L412950:{c.instructions+=11;NFSU2_TR(0x412950);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B412953:{NFSU2_TR(0x412953);
__builtin_memmove((R+0),gp(0x8654a4),4);
}
B412958:{NFSU2_TR(0x412958);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412959:{NFSU2_TR(0x412959);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41295a:{NFSU2_TR(0x41295a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B41295c:{NFSU2_TR(0x41295c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41295f:{NFSU2_TR(0x41295f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412960:{NFSU2_TR(0x412960);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412961:{NFSU2_TR(0x412961);
__builtin_memmove((R+20),(R+4),4);
}
B412963:{NFSU2_TR(0x412963);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B412967:{NFSU2_TR(0x412967);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41298d;}}
}
B412969:L412969:{c.instructions+=8;NFSU2_TR(0x412969);
__builtin_memmove((R+0),gp(0x8900b4),4);
}
B41296e:{NFSU2_TR(0x41296e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B412971:{NFSU2_TR(0x412971);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412972:{NFSU2_TR(0x412972);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412974:{NFSU2_TR(0x412974);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B412977:{NFSU2_TR(0x412977);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412978:{NFSU2_TR(0x412978);
w4(R+4,u32(0x88f298ull));
}
B41297d:{NFSU2_TR(0x41297d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x412982ull));
TAIL_STATIC(0x5d9bf0u,5d9);
}
B412982:L412982:{c.instructions+=2;NFSU2_TR(0x412982);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B412984:{NFSU2_TR(0x412984);
if(r1(R+518)){{goto L41298d;}}
}
B412986:L412986:{c.instructions+=2;NFSU2_TR(0x412986);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B412989:{NFSU2_TR(0x412989);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41298d:L41298d:{c.instructions+=4;NFSU2_TR(0x41298d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B412993:{NFSU2_TR(0x412993);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x900ull))));
__builtin_memmove((R+28),(U+0),4);
}
B412999:{NFSU2_TR(0x412999);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41299b:{NFSU2_TR(0x41299b);
if(r1(R+518)){{goto L412a32;}}
}
B4129a1:L4129a1:{c.instructions+=9;NFSU2_TR(0x4129a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4129a4:{NFSU2_TR(0x4129a4);
__builtin_memmove((R+0),gp(0x8a1ccc),4);
}
B4129a9:{NFSU2_TR(0x4129a9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4129af:{NFSU2_TR(0x4129af);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B4129b1:{NFSU2_TR(0x4129b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4129b5:{NFSU2_TR(0x4129b5);
u8 U[13];
w4(U+0,u32(u32(u32(0x854ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+24,u32(s32(s8(r1(U+12)))));
}
B4129bd:{NFSU2_TR(0x4129bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4129c3:{NFSU2_TR(0x4129c3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4129c5:{NFSU2_TR(0x4129c5);
if(r1(R+518)){{goto L4129e9;}}
}
B4129c7:L4129c7:{c.instructions+=2;NFSU2_TR(0x4129c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4129cc:{NFSU2_TR(0x4129cc);
if(r1(R+518)){{goto L4129e9;}}
}
B4129ce:L4129ce:{c.instructions+=6;NFSU2_TR(0x4129ce);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B4129d3:{NFSU2_TR(0x4129d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B4129d9:{NFSU2_TR(0x4129d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4129dd:{NFSU2_TR(0x4129dd);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4129e1:{NFSU2_TR(0x4129e1);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4129e7:{NFSU2_TR(0x4129e7);
{goto L4129ef;}
}
B4129e9:L4129e9:{c.instructions+=1;NFSU2_TR(0x4129e9);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4129ef:L4129ef:{c.instructions+=4;NFSU2_TR(0x4129ef);
{u32 ea_=u32(u32(7879896u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4129f5:{NFSU2_TR(0x4129f5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4129f7:{NFSU2_TR(0x4129f7);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4129fa:{NFSU2_TR(0x4129fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L412a15;}}
}
B4129fc:L4129fc:{c.instructions+=2;NFSU2_TR(0x4129fc);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4129ff:{NFSU2_TR(0x4129ff);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L412a06;}}
}
B412a01:L412a01:{c.instructions+=1;NFSU2_TR(0x412a01);
w4(R+24,u32(0x4ull));
}
B412a06:L412a06:{c.instructions+=2;NFSU2_TR(0x412a06);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x90cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+24)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B412a0c:{NFSU2_TR(0x412a0c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L412a15;}}
}
B412a0e:L412a0e:{c.instructions+=1;NFSU2_TR(0x412a0e);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x914ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B412a15:L412a15:{c.instructions+=3;NFSU2_TR(0x412a15);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B412a19:{NFSU2_TR(0x412a19);
u8 U[15];
w4(U+0,u32(u32(u32(0x859ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+13),(U+12),1);
w1(U+14,u8(u32(r1(U+13))-u32(r1(R+12))));
w1(R+518,u8((r1(U+14))==(u8(0x0ull))));
}
B412a20:{NFSU2_TR(0x412a20);
if(r1(R+518)){{goto L412a28;}}
}
B412a22:L412a22:{c.instructions+=1;NFSU2_TR(0x412a22);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x914ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B412a28:L412a28:{c.instructions+=3;NFSU2_TR(0x412a28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B412a2a:{NFSU2_TR(0x412a2a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B412a2c:{NFSU2_TR(0x412a2c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4129a1u);}goto L4129a1;}}
}
B412a32:L412a32:{c.instructions+=3;NFSU2_TR(0x412a32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B412a34:{NFSU2_TR(0x412a34);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B412a36:{NFSU2_TR(0x412a36);
if(r1(R+518)){{goto L412ab8;}}
}
B412a3c:L412a3c:{c.instructions+=1;NFSU2_TR(0x412a3c);
__builtin_memmove((R+16),(R+16),4);
}
B412a40:L412a40:{c.instructions+=3;NFSU2_TR(0x412a40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B412a46:{NFSU2_TR(0x412a46);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B412a48:{NFSU2_TR(0x412a48);
if(r1(R+518)){{goto L412a69;}}
}
B412a4a:L412a4a:{c.instructions+=2;NFSU2_TR(0x412a4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B412a4f:{NFSU2_TR(0x412a4f);
if(r1(R+518)){{goto L412a69;}}
}
B412a51:L412a51:{c.instructions+=6;NFSU2_TR(0x412a51);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B412a57:{NFSU2_TR(0x412a57);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B412a59:{NFSU2_TR(0x412a59);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B412a5d:{NFSU2_TR(0x412a5d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B412a61:{NFSU2_TR(0x412a61);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B412a67:{NFSU2_TR(0x412a67);
{goto L412a6f;}
}
B412a69:L412a69:{c.instructions+=1;NFSU2_TR(0x412a69);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B412a6f:L412a6f:{c.instructions+=4;NFSU2_TR(0x412a6f);
{u32 ea_=u32(u32(7879896u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B412a75:{NFSU2_TR(0x412a75);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B412a77:{NFSU2_TR(0x412a77);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B412a7a:{NFSU2_TR(0x412a7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L412ab2;}}
}
B412a7c:L412a7c:{c.instructions+=2;NFSU2_TR(0x412a7c);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x914ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B412a82:{NFSU2_TR(0x412a82);
if(r1(R+518)){{goto L412ab2;}}
}
B412a84:L412a84:{c.instructions+=2;NFSU2_TR(0x412a84);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x908ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B412a8a:{NFSU2_TR(0x412a8a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L412ab2;}}
}
B412a8c:L412a8c:{c.instructions+=4;NFSU2_TR(0x412a8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B412a92:{NFSU2_TR(0x412a92);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412a93:{NFSU2_TR(0x412a93);
w4(R+4,u32(0x8a3288ull));
}
B412a98:{NFSU2_TR(0x412a98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x412a9dull));
TAIL_STATIC(0x63ae00u,63a);
}
B412a9d:L412a9d:{c.instructions+=4;NFSU2_TR(0x412a9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x900ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B412aa3:{NFSU2_TR(0x412aa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8f8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B412aa9:{NFSU2_TR(0x412aa9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x914ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B412aaf:{NFSU2_TR(0x412aaf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
w4(U+0,u32(u32(r4(U+0))-u32(u32(0x1ull))));
s4(u32(r4(R+20)),r4(U+0));
}
B412ab2:L412ab2:{c.instructions+=3;NFSU2_TR(0x412ab2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B412ab4:{NFSU2_TR(0x412ab4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B412ab6:{NFSU2_TR(0x412ab6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x412a40u);}goto L412a40;}}
}
B412ab8:L412ab8:{c.instructions+=3;NFSU2_TR(0x412ab8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+4),(U+0),4);
}
B412abb:{NFSU2_TR(0x412abb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B412abe:{NFSU2_TR(0x412abe);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L412bcc;}}
}
B412ac4:L412ac4:{c.instructions+=3;NFSU2_TR(0x412ac4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x908ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B412aca:{NFSU2_TR(0x412aca);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B412acc:{NFSU2_TR(0x412acc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L412bcc;}}
}
B412ad2:L412ad2:{c.instructions+=4;NFSU2_TR(0x412ad2);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B412ad4:{NFSU2_TR(0x412ad4);
__builtin_memmove((R+4),gp(0x890080),4);
}
B412ada:{NFSU2_TR(0x412ada);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412adb:{NFSU2_TR(0x412adb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x412ae0ull));
TAIL_STATIC(0x5ea4e0u,5ea);
}
B412ae0:L412ae0:{c.instructions+=4;NFSU2_TR(0x412ae0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B412ae2:{NFSU2_TR(0x412ae2);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B412ae4:{NFSU2_TR(0x412ae4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B412ae6:{NFSU2_TR(0x412ae6);
if(r1(R+518)){{goto L412bcc;}}
}
B412aec:L412aec:{c.instructions+=1;NFSU2_TR(0x412aec);
__builtin_memmove((R+16),(R+16),4);
}
B412af0:L412af0:{c.instructions+=3;NFSU2_TR(0x412af0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B412af6:{NFSU2_TR(0x412af6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B412af8:{NFSU2_TR(0x412af8);
if(r1(R+518)){{goto L412b02;}}
}
B412afa:L412afa:{c.instructions+=2;NFSU2_TR(0x412afa);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B412b00:{NFSU2_TR(0x412b00);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L412b07;}}
}
B412b02:L412b02:{c.instructions+=2;NFSU2_TR(0x412b02);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B412b04:{NFSU2_TR(0x412b04);
if(r1(R+518)){{goto L412b15;}}
}
B412b06:L412b06:{c.instructions+=1;NFSU2_TR(0x412b06);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B412b07:L412b07:{c.instructions+=3;NFSU2_TR(0x412b07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B412b09:{NFSU2_TR(0x412b09);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B412b0b:{NFSU2_TR(0x412b0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x412af0u);}goto L412af0;}}
}
B412b0d:L412b0d:{c.instructions+=6;NFSU2_TR(0x412b0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B412b0e:{NFSU2_TR(0x412b0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B412b0f:{NFSU2_TR(0x412b0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B412b10:{NFSU2_TR(0x412b10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B412b11:{NFSU2_TR(0x412b11);
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
B412b14:{NFSU2_TR(0x412b14);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B412b15:L412b15:{c.instructions+=8;NFSU2_TR(0x412b15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B412b18:{NFSU2_TR(0x412b18);
__builtin_memmove((R+4),gp(0x8a1ccc),4);
}
B412b1e:{NFSU2_TR(0x412b1e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B412b24:{NFSU2_TR(0x412b24);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B412b27:{NFSU2_TR(0x412b27);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B412b29:{NFSU2_TR(0x412b29);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B412b2d:{NFSU2_TR(0x412b2d);
u8 U[15];
w4(U+0,u32(u32(u32(0x854ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+13),(U+12),1);
w1(R+523,sborrow<u8>(r1(U+13),r1(R+12)));
w1(U+14,u8(u32(r1(U+13))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+14))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+14))==(u8(0x0ull))));
}
B412b34:{NFSU2_TR(0x412b34);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L412bcc;}}
}
B412b3a:L412b3a:{c.instructions+=2;NFSU2_TR(0x412b3a);
u8 U[4];
w4(U+0,u32(0xffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412b3f:{NFSU2_TR(0x412b3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x412b44ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B412b44:L412b44:{c.instructions+=5;NFSU2_TR(0x412b44);
__builtin_memmove((R+4),gp(0x890080),4);
}
B412b4a:{NFSU2_TR(0x412b4a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B412b4d:{NFSU2_TR(0x412b4d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B412b4f:{NFSU2_TR(0x412b4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B412b53:{NFSU2_TR(0x412b53);
if(r1(R+518)){{goto L412b63;}}
}
B412b55:L412b55:{c.instructions+=2;NFSU2_TR(0x412b55);
u8 U[4];
w4(U+0,u32(0xffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412b5a:{NFSU2_TR(0x412b5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x412b5full));
TAIL_STATIC(0x5ea4e0u,5ea);
}
B412b5f:L412b5f:{c.instructions+=1;NFSU2_TR(0x412b5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B412b63:L412b63:{c.instructions+=6;NFSU2_TR(0x412b63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B412b65:{NFSU2_TR(0x412b65);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B412b6b:{NFSU2_TR(0x412b6b);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B412b6f:{NFSU2_TR(0x412b6f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412b70:{NFSU2_TR(0x412b70);
w4(R+4,u32(u32(r4(R+4))+u32(m4(0x8a1ccc))));
}
B412b76:{NFSU2_TR(0x412b76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x412b7bull));
TAIL_STATIC(0x61bc20u,61b);
}
B412b7b:L412b7b:{c.instructions+=4;NFSU2_TR(0x412b7b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B412b7e:{NFSU2_TR(0x412b7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B412b84:{NFSU2_TR(0x412b84);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B412b86:{NFSU2_TR(0x412b86);
if(r1(R+518)){{goto L412b8f;}}
}
B412b88:L412b88:{c.instructions+=2;NFSU2_TR(0x412b88);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B412b8d:{NFSU2_TR(0x412b8d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L412bcc;}}
}
B412b8f:L412b8f:{c.instructions+=5;NFSU2_TR(0x412b8f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412b90:{NFSU2_TR(0x412b90);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412b91:{NFSU2_TR(0x412b91);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412b92:{NFSU2_TR(0x412b92);
w4(R+4,u32(0x8a3288ull));
}
B412b97:{NFSU2_TR(0x412b97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x412b9cull));
TAIL_STATIC(0x63bc70u,63b);
}
B412b9c:L412b9c:{c.instructions+=12;NFSU2_TR(0x412b9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8f8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B412ba2:{NFSU2_TR(0x412ba2);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B412ba7:{NFSU2_TR(0x412ba7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x900ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B412bad:{NFSU2_TR(0x412bad);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x914ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B412bb3:{NFSU2_TR(0x412bb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B412bb9:{NFSU2_TR(0x412bb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B412bbc:{NFSU2_TR(0x412bbc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412bbd:{NFSU2_TR(0x412bbd);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B412bbe:{NFSU2_TR(0x412bbe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412bbf:{NFSU2_TR(0x412bbf);
w4(R+4,u32(0x8a3288ull));
}
B412bc4:{NFSU2_TR(0x412bc4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+20)),r4(U+0));
}
B412bc7:{NFSU2_TR(0x412bc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x412bccull));
TAIL_STATIC(0x63bcd0u,63b);
}
B412bcc:L412bcc:{c.instructions+=6;NFSU2_TR(0x412bcc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B412bcd:{NFSU2_TR(0x412bcd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B412bce:{NFSU2_TR(0x412bce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B412bcf:{NFSU2_TR(0x412bcf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B412bd0:{NFSU2_TR(0x412bd0);
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
B412bd3:{NFSU2_TR(0x412bd3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B412be0:L412be0:{c.instructions+=12;NFSU2_TR(0x412be0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B412be3:{NFSU2_TR(0x412be3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B412be9:{NFSU2_TR(0x412be9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412bea:{NFSU2_TR(0x412bea);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412beb:{NFSU2_TR(0x412beb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B412bef:{NFSU2_TR(0x412bef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412bf0:{NFSU2_TR(0x412bf0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x900ull))));
__builtin_memmove((R+24),(U+0),4);
}
B412bf6:{NFSU2_TR(0x412bf6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412bf7:{NFSU2_TR(0x412bf7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B412bf9:{NFSU2_TR(0x412bf9);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B412bfb:{NFSU2_TR(0x412bfb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B412bff:{NFSU2_TR(0x412bff);
if(r1(R+518)){{goto L412c31;}}
}
B412c01:L412c01:{c.instructions+=2;NFSU2_TR(0x412c01);
__builtin_memmove((R+4),gp(0x8a1ccc),4);
}
B412c07:{NFSU2_TR(0x412c07);
{goto L412c10;}
}
B412c10:L412c10:{c.instructions+=6;NFSU2_TR(0x412c10);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B412c13:{NFSU2_TR(0x412c13);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B412c19:{NFSU2_TR(0x412c19);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B412c1b:{NFSU2_TR(0x412c1b);
u8 U[13];
w4(U+0,u32(u32(u32(0x854ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+12),(U+12),1);
}
B412c22:{NFSU2_TR(0x412c22);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B412c24:{NFSU2_TR(0x412c24);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L412c27;}}
}
B412c26:L412c26:{c.instructions+=1;NFSU2_TR(0x412c26);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B412c27:L412c27:{c.instructions+=3;NFSU2_TR(0x412c27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B412c29:{NFSU2_TR(0x412c29);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B412c2b:{NFSU2_TR(0x412c2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x412c10u);}goto L412c10;}}
}
B412c2d:L412c2d:{c.instructions+=1;NFSU2_TR(0x412c2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B412c31:L412c31:{c.instructions+=3;NFSU2_TR(0x412c31);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B412c33:{NFSU2_TR(0x412c33);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B412c3b:{NFSU2_TR(0x412c3b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L412d8c;}}
}
B412c41:L412c41:{c.instructions+=5;NFSU2_TR(0x412c41);
__builtin_memmove((R+4),gp(0x89e814),4);
}
B412c47:{NFSU2_TR(0x412c47);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B412c49:{NFSU2_TR(0x412c49);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B412c4b:{NFSU2_TR(0x412c4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B412c4f:{NFSU2_TR(0x412c4f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L412d8c;}}
}
B412c55:L412c55:{c.instructions+=1;NFSU2_TR(0x412c55);
{goto L412c60;}
}
B412c57:L412c57:{c.instructions+=2;NFSU2_TR(0x412c57);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B412c5b:{NFSU2_TR(0x412c5b);
{goto L412c60;}
}
B412c60:L412c60:{c.instructions+=3;NFSU2_TR(0x412c60);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412c61:{NFSU2_TR(0x412c61);
w4(R+4,u32(0x89e7a0ull));
}
B412c66:{NFSU2_TR(0x412c66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x412c6bull));
TAIL_STATIC(0x5ed900u,5ed);
}
B412c6b:L412c6b:{c.instructions+=7;NFSU2_TR(0x412c6b);
__builtin_memmove((R+8),gp(0x8a1ccc),4);
}
B412c71:{NFSU2_TR(0x412c71);
__builtin_memmove((R+12),(R+0),4);
}
B412c73:{NFSU2_TR(0x412c73);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B412c76:{NFSU2_TR(0x412c76);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B412c7c:{NFSU2_TR(0x412c7c);
u8 U[24];
w4(U+0,u32(u32(u32(0x844ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B412c84:{NFSU2_TR(0x412c84);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B412c88:{NFSU2_TR(0x412c88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L412d75;}}
}
B412c8e:L412c8e:{c.instructions+=2;NFSU2_TR(0x412c8e);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x7ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B412c93:{NFSU2_TR(0x412c93);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L412d1b;}}
}
B412c99:L412c99:{c.instructions+=2;NFSU2_TR(0x412c99);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412c9a:{NFSU2_TR(0x412c9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x412c9full));
TAIL_STATIC(0x43c1c0u,43c);
}
B412c9f:L412c9f:{c.instructions+=5;NFSU2_TR(0x412c9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B412ca1:{NFSU2_TR(0x412ca1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B412ca4:{NFSU2_TR(0x412ca4);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B412ca6:{NFSU2_TR(0x412ca6);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B412ca8:{NFSU2_TR(0x412ca8);
if(r1(R+518)){{goto L412d75;}}
}
B412cae:L412cae:{c.instructions+=1;NFSU2_TR(0x412cae);
__builtin_memmove((R+12),gp(0x8a1ccc),4);
}
B412cb4:L412cb4:{c.instructions+=6;NFSU2_TR(0x412cb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B412cb7:{NFSU2_TR(0x412cb7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B412cbd:{NFSU2_TR(0x412cbd);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B412cbf:{NFSU2_TR(0x412cbf);
u8 U[13];
w4(U+0,u32(u32(u32(0x854ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+20,u32(s32(s8(r1(U+12)))));
}
B412cc7:{NFSU2_TR(0x412cc7);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x910ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+20)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B412ccd:{NFSU2_TR(0x412ccd);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L412cd4;}}
}
B412ccf:L412ccf:{c.instructions+=2;NFSU2_TR(0x412ccf);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B412cd1:{NFSU2_TR(0x412cd1);
if(r1(R+518)){{goto L412ce3;}}
}
B412cd3:L412cd3:{c.instructions+=1;NFSU2_TR(0x412cd3);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B412cd4:L412cd4:{c.instructions+=4;NFSU2_TR(0x412cd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B412cd6:{NFSU2_TR(0x412cd6);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B412cd8:{NFSU2_TR(0x412cd8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B412cdc:{NFSU2_TR(0x412cdc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x412cb4u);}goto L412cb4;}}
}
B412cde:L412cde:{c.instructions+=1;NFSU2_TR(0x412cde);
{goto L412d75;}
}
B412ce3:L412ce3:{c.instructions+=6;NFSU2_TR(0x412ce3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B412ce6:{NFSU2_TR(0x412ce6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B412cea:{NFSU2_TR(0x412cea);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x908ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B412cf0:{NFSU2_TR(0x412cf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x910ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B412cf6:{NFSU2_TR(0x412cf6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B412cf8:{NFSU2_TR(0x412cf8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L412cfe;}}
}
B412cfa:L412cfa:{c.instructions+=1;NFSU2_TR(0x412cfa);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B412cfe:L412cfe:{c.instructions+=6;NFSU2_TR(0x412cfe);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B412d02:{NFSU2_TR(0x412d02);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B412d03:{NFSU2_TR(0x412d03);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x910ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B412d09:{NFSU2_TR(0x412d09);
u8 U[13];
w4(U+0,u32(u32(u32(0x854ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(s32(s8(r1(U+12)))));
}
B412d11:{NFSU2_TR(0x412d11);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B412d13:{NFSU2_TR(0x412d13);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L412d75;}}
}
B412d15:L412d15:{c.instructions+=2;NFSU2_TR(0x412d15);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B412d19:{NFSU2_TR(0x412d19);
{goto L412d75;}
}
B412d1b:L412d1b:{c.instructions+=4;NFSU2_TR(0x412d1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B412d1d:{NFSU2_TR(0x412d1d);
__builtin_memmove((R+0),(R+28),4);
}
B412d1f:{NFSU2_TR(0x412d1f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B412d21:{NFSU2_TR(0x412d21);
if(r1(R+518)){{goto L412d4e;}}
}
B412d23:L412d23:{c.instructions+=3;NFSU2_TR(0x412d23);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x910ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B412d29:{NFSU2_TR(0x412d29);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B412d2b:{NFSU2_TR(0x412d2b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L412d48;}}
}
B412d2d:L412d2d:{c.instructions+=6;NFSU2_TR(0x412d2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B412d30:{NFSU2_TR(0x412d30);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B412d36:{NFSU2_TR(0x412d36);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B412d38:{NFSU2_TR(0x412d38);
u8 U[13];
w4(U+0,u32(u32(u32(0x854ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+12,u32(s32(s8(r1(U+12)))));
}
B412d40:{NFSU2_TR(0x412d40);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B412d42:{NFSU2_TR(0x412d42);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L412d96;}}
}
B412d44:L412d44:{c.instructions+=1;NFSU2_TR(0x412d44);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B412d48:L412d48:{c.instructions+=3;NFSU2_TR(0x412d48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B412d4a:{NFSU2_TR(0x412d4a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B412d4c:{NFSU2_TR(0x412d4c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x412d23u);}goto L412d23;}}
}
B412d4e:L412d4e:{c.instructions+=3;NFSU2_TR(0x412d4e);
__builtin_memmove((R+0),(R+28),4);
}
B412d50:{NFSU2_TR(0x412d50);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B412d52:{NFSU2_TR(0x412d52);
if(r1(R+518)){{goto L412d64;}}
}
B412d54:L412d54:{c.instructions+=3;NFSU2_TR(0x412d54);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x910ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B412d5a:{NFSU2_TR(0x412d5a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B412d5c:{NFSU2_TR(0x412d5c);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L412da5;}}
}
B412d5e:L412d5e:{c.instructions+=3;NFSU2_TR(0x412d5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B412d60:{NFSU2_TR(0x412d60);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B412d62:{NFSU2_TR(0x412d62);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x412d54u);}goto L412d54;}}
}
B412d64:L412d64:{c.instructions+=3;NFSU2_TR(0x412d64);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B412d67:{NFSU2_TR(0x412d67);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x908ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B412d6d:{NFSU2_TR(0x412d6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B412d6f:L412d6f:{c.instructions+=1;NFSU2_TR(0x412d6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x910ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B412d75:L412d75:{c.instructions+=6;NFSU2_TR(0x412d75);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B412d79:{NFSU2_TR(0x412d79);
__builtin_memmove((R+4),gp(0x89e814),4);
}
B412d7f:{NFSU2_TR(0x412d7f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B412d80:{NFSU2_TR(0x412d80);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B412d82:{NFSU2_TR(0x412d82);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B412d86:{NFSU2_TR(0x412d86);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x412c57u);}goto L412c57;}}
}
B412d8c:L412d8c:{c.instructions+=6;NFSU2_TR(0x412d8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B412d8d:{NFSU2_TR(0x412d8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B412d8e:{NFSU2_TR(0x412d8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B412d8f:{NFSU2_TR(0x412d8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B412d90:{NFSU2_TR(0x412d90);
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
B412d93:{NFSU2_TR(0x412d93);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B412d96:L412d96:{c.instructions+=4;NFSU2_TR(0x412d96);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B412d99:{NFSU2_TR(0x412d99);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B412d9d:{NFSU2_TR(0x412d9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x908ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B412da3:{NFSU2_TR(0x412da3);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x412d6fu);}goto L412d6f;}
}
B412da5:L412da5:{c.instructions+=3;NFSU2_TR(0x412da5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B412da8:{NFSU2_TR(0x412da8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x908ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B412dae:{NFSU2_TR(0x412dae);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x412d6fu);}goto L412d6f;}
}
B412db0:L412db0:{c.instructions+=8;NFSU2_TR(0x412db0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412db1:{NFSU2_TR(0x412db1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412db2:{NFSU2_TR(0x412db2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412db3:{NFSU2_TR(0x412db3);
__builtin_memmove((R+28),(R+4),4);
}
B412db5:{NFSU2_TR(0x412db5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B412dbb:{NFSU2_TR(0x412dbb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x900ull))));
__builtin_memmove((R+20),(U+0),4);
}
B412dc1:{NFSU2_TR(0x412dc1);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B412dc3:{NFSU2_TR(0x412dc3);
if(r1(R+518)){{goto L412e0d;}}
}
B412dc5:L412dc5:{c.instructions+=3;NFSU2_TR(0x412dc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x910ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B412dcb:{NFSU2_TR(0x412dcb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B412dcd:{NFSU2_TR(0x412dcd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L412e07;}}
}
B412dcf:L412dcf:{c.instructions+=11;NFSU2_TR(0x412dcf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x914ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B412dd6:{NFSU2_TR(0x412dd6);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B412ddb:{NFSU2_TR(0x412ddb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x900ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B412de1:{NFSU2_TR(0x412de1);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B412de7:{NFSU2_TR(0x412de7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412de9:{NFSU2_TR(0x412de9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412deb:{NFSU2_TR(0x412deb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+8),(U+0),4);
}
B412dee:{NFSU2_TR(0x412dee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x904ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B412df4:{NFSU2_TR(0x412df4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412df5:{NFSU2_TR(0x412df5);
w4(R+4,u32(0x8a3288ull));
}
B412dfa:{NFSU2_TR(0x412dfa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x412dffull));
TAIL_STATIC(0x63bc70u,63b);
}
B412dff:L412dff:{c.instructions+=2;NFSU2_TR(0x412dff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8f8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B412e05:{NFSU2_TR(0x412e05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B412e07:L412e07:{c.instructions+=3;NFSU2_TR(0x412e07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B412e09:{NFSU2_TR(0x412e09);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B412e0b:{NFSU2_TR(0x412e0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x412dc5u);}goto L412dc5;}}
}
B412e0d:L412e0d:{c.instructions+=4;NFSU2_TR(0x412e0d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412e0f:{NFSU2_TR(0x412e0f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412e11:{NFSU2_TR(0x412e11);
w4(R+4,u32(0x8a3288ull));
}
B412e16:{NFSU2_TR(0x412e16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x412e1bull));
TAIL_STATIC(0x63bcd0u,63b);
}
B412e1b:L412e1b:{c.instructions+=4;NFSU2_TR(0x412e1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B412e1c:{NFSU2_TR(0x412e1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B412e1d:{NFSU2_TR(0x412e1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B412e1e:{NFSU2_TR(0x412e1e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B412e20:L412e20:{c.instructions+=3;NFSU2_TR(0x412e20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412e21:{NFSU2_TR(0x412e21);
__builtin_memmove((R+24),(R+4),4);
}
B412e23:{NFSU2_TR(0x412e23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x412e28ull));
TAIL_STATIC(0x40c910u,40c);
}
B412e28:L412e28:{c.instructions+=4;NFSU2_TR(0x412e28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8f0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B412e32:{NFSU2_TR(0x412e32);
__builtin_memmove((R+0),(R+24),4);
}
B412e34:{NFSU2_TR(0x412e34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B412e35:{NFSU2_TR(0x412e35);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B412e40:L412e40:{c.instructions+=10;NFSU2_TR(0x412e40);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412e41:{NFSU2_TR(0x412e41);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412e42:{NFSU2_TR(0x412e42);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412e43:{NFSU2_TR(0x412e43);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B412e47:{NFSU2_TR(0x412e47);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412e48:{NFSU2_TR(0x412e48);
u8 U[4];
w4(U+0,u32(0x78509cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412e4d:{NFSU2_TR(0x412e4d);
__builtin_memmove((R+20),(R+4),4);
}
B412e4f:{NFSU2_TR(0x412e4f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412e51:{NFSU2_TR(0x412e51);
__builtin_memmove((R+4),(R+24),4);
}
B412e53:{NFSU2_TR(0x412e53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x412e58ull));
TAIL_STATIC(0x578ce0u,578);
}
B412e58:L412e58:{c.instructions+=6;NFSU2_TR(0x412e58);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412e5a:{NFSU2_TR(0x412e5a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412e5c:{NFSU2_TR(0x412e5c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412e5e:{NFSU2_TR(0x412e5e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412e5f:{NFSU2_TR(0x412e5f);
__builtin_memmove((R+4),(R+24),4);
}
B412e61:{NFSU2_TR(0x412e61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x412e66ull));
TAIL_STATIC(0x571640u,571);
}
B412e66:L412e66:{c.instructions+=7;NFSU2_TR(0x412e66);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412e68:{NFSU2_TR(0x412e68);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412e6a:{NFSU2_TR(0x412e6a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412e6c:{NFSU2_TR(0x412e6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B412e6f:{NFSU2_TR(0x412e6f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412e70:{NFSU2_TR(0x412e70);
__builtin_memmove((R+4),(R+24),4);
}
B412e72:{NFSU2_TR(0x412e72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x412e77ull));
TAIL_STATIC(0x571640u,571);
}
B412e77:L412e77:{c.instructions+=7;NFSU2_TR(0x412e77);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412e79:{NFSU2_TR(0x412e79);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412e7b:{NFSU2_TR(0x412e7b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412e7d:{NFSU2_TR(0x412e7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B412e80:{NFSU2_TR(0x412e80);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412e81:{NFSU2_TR(0x412e81);
__builtin_memmove((R+4),(R+24),4);
}
B412e83:{NFSU2_TR(0x412e83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x412e88ull));
TAIL_STATIC(0x571640u,571);
}
B412e88:L412e88:{c.instructions+=2;NFSU2_TR(0x412e88);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1b10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B412e8e:{NFSU2_TR(0x412e8e);
w4(R+12,u32(0x3ull));
}
B412e93:L412e93:{c.instructions+=7;NFSU2_TR(0x412e93);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412e95:{NFSU2_TR(0x412e95);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412e97:{NFSU2_TR(0x412e97);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412e99:{NFSU2_TR(0x412e99);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B412e9c:{NFSU2_TR(0x412e9c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412e9d:{NFSU2_TR(0x412e9d);
__builtin_memmove((R+4),(R+24),4);
}
B412e9f:{NFSU2_TR(0x412e9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x412ea4ull));
TAIL_STATIC(0x571640u,571);
}
B412ea4:L412ea4:{c.instructions+=3;NFSU2_TR(0x412ea4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412ea5:{NFSU2_TR(0x412ea5);
__builtin_memmove((R+4),(R+24),4);
}
B412ea7:{NFSU2_TR(0x412ea7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x412eacull));
TAIL_STATIC(0x571770u,571);
}
B412eac:L412eac:{c.instructions+=7;NFSU2_TR(0x412eac);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412eae:{NFSU2_TR(0x412eae);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412eb0:{NFSU2_TR(0x412eb0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412eb2:{NFSU2_TR(0x412eb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B412eb5:{NFSU2_TR(0x412eb5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412eb6:{NFSU2_TR(0x412eb6);
__builtin_memmove((R+4),(R+24),4);
}
B412eb8:{NFSU2_TR(0x412eb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x412ebdull));
TAIL_STATIC(0x571640u,571);
}
B412ebd:L412ebd:{c.instructions+=5;NFSU2_TR(0x412ebd);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B412ec0:{NFSU2_TR(0x412ec0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412ec1:{NFSU2_TR(0x412ec1);
__builtin_memmove((R+4),gp(0x890080),4);
}
B412ec7:{NFSU2_TR(0x412ec7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412ec8:{NFSU2_TR(0x412ec8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x412ecdull));
TAIL_STATIC(0x5f0e60u,5f0);
}
B412ecd:L412ecd:{c.instructions+=3;NFSU2_TR(0x412ecd);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B412ed0:{NFSU2_TR(0x412ed0);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B412ed1:{NFSU2_TR(0x412ed1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x412e93u);}goto L412e93;}}
}
B412ed3:L412ed3:{c.instructions+=3;NFSU2_TR(0x412ed3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x900ull))));
__builtin_memmove((R+12),(U+0),4);
}
B412ed9:{NFSU2_TR(0x412ed9);
w4(R+28,u32(0x3ull));
}
B412ede:{NFSU2_TR(0x412ede);
__builtin_memmove((R+28),(R+28),4);
}
B412ee0:L412ee0:{c.instructions+=3;NFSU2_TR(0x412ee0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412ee1:{NFSU2_TR(0x412ee1);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffff710ull))));
__builtin_memmove((R+4),(U+0),4);
}
B412ee7:{NFSU2_TR(0x412ee7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x412eecull));
TAIL_STATIC(0x631a70u,631);
}
B412eec:L412eec:{c.instructions+=3;NFSU2_TR(0x412eec);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412eed:{NFSU2_TR(0x412eed);
__builtin_memmove((R+4),(R+24),4);
}
B412eef:{NFSU2_TR(0x412eef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x412ef4ull));
TAIL_STATIC(0x571770u,571);
}
B412ef4:L412ef4:{c.instructions+=3;NFSU2_TR(0x412ef4);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x900ull))));
}
B412efa:{NFSU2_TR(0x412efa);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B412efb:{NFSU2_TR(0x412efb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x412ee0u);}goto L412ee0;}}
}
B412efd:L412efd:{c.instructions+=3;NFSU2_TR(0x412efd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B412f00:{NFSU2_TR(0x412f00);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B412f02:{NFSU2_TR(0x412f02);
if(r1(R+518)){{goto L412f76;}}
}
B412f04:L412f04:{c.instructions+=3;NFSU2_TR(0x412f04);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B412f06:{NFSU2_TR(0x412f06);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x900ull))));
__builtin_memmove((R+28),(U+0),4);
}
B412f0c:{NFSU2_TR(0x412f0c);
w4(R+12,u32(0x3ull));
}
B412f11:L412f11:{c.instructions+=3;NFSU2_TR(0x412f11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B412f13:{NFSU2_TR(0x412f13);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B412f15:{NFSU2_TR(0x412f15);
if(r1(R+518)){{goto L412f38;}}
}
B412f17:L412f17:{c.instructions+=2;NFSU2_TR(0x412f17);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B412f1c:{NFSU2_TR(0x412f1c);
if(r1(R+518)){{goto L412f38;}}
}
B412f1e:L412f1e:{c.instructions+=6;NFSU2_TR(0x412f1e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412f20:{NFSU2_TR(0x412f20);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412f22:{NFSU2_TR(0x412f22);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffff710ull))));
__builtin_memmove((R+8),(U+0),4);
}
B412f28:{NFSU2_TR(0x412f28);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412f29:{NFSU2_TR(0x412f29);
w4(R+4,u32(0x8a3288ull));
}
B412f2e:{NFSU2_TR(0x412f2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x412f33ull));
TAIL_STATIC(0x63bc70u,63b);
}
B412f33:L412f33:{c.instructions+=2;NFSU2_TR(0x412f33);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B412f36:{NFSU2_TR(0x412f36);
w1(R+4,u8(0x1ull));
}
B412f38:L412f38:{c.instructions+=3;NFSU2_TR(0x412f38);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x900ull))));
}
B412f3e:{NFSU2_TR(0x412f3e);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B412f3f:{NFSU2_TR(0x412f3f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x412f11u);}goto L412f11;}}
}
B412f41:L412f41:{c.instructions+=2;NFSU2_TR(0x412f41);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B412f43:{NFSU2_TR(0x412f43);
if(r1(R+518)){{goto L412f76;}}
}
B412f45:L412f45:{c.instructions+=4;NFSU2_TR(0x412f45);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412f47:{NFSU2_TR(0x412f47);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412f49:{NFSU2_TR(0x412f49);
w4(R+4,u32(0x8a3288ull));
}
B412f4e:{NFSU2_TR(0x412f4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x412f53ull));
TAIL_STATIC(0x63bcd0u,63b);
}
B412f53:L412f53:{c.instructions+=3;NFSU2_TR(0x412f53);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8f8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B412f59:{NFSU2_TR(0x412f59);
w4(R+12,u32(0x3ull));
}
B412f5e:{NFSU2_TR(0x412f5e);
__builtin_memmove((R+28),(R+28),4);
}
B412f60:L412f60:{c.instructions+=4;NFSU2_TR(0x412f60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B412f62:{NFSU2_TR(0x412f62);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412f63:{NFSU2_TR(0x412f63);
w4(R+4,u32(0x8a3288ull));
}
B412f68:{NFSU2_TR(0x412f68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x412f6dull));
TAIL_STATIC(0x61ca50u,61c);
}
B412f6d:L412f6d:{c.instructions+=3;NFSU2_TR(0x412f6d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x900ull))));
}
B412f73:{NFSU2_TR(0x412f73);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B412f74:{NFSU2_TR(0x412f74);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x412f60u);}goto L412f60;}}
}
B412f76:L412f76:{c.instructions+=2;NFSU2_TR(0x412f76);
__builtin_memmove((R+4),(R+24),4);
}
B412f78:{NFSU2_TR(0x412f78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x412f7dull));
TAIL_STATIC(0x578d90u,578);
}
B412f7d:L412f7d:{c.instructions+=5;NFSU2_TR(0x412f7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B412f7e:{NFSU2_TR(0x412f7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B412f7f:{NFSU2_TR(0x412f7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B412f80:{NFSU2_TR(0x412f80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B412f81:{NFSU2_TR(0x412f81);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B412f90:L412f90:{c.instructions+=10;NFSU2_TR(0x412f90);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412f91:{NFSU2_TR(0x412f91);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412f92:{NFSU2_TR(0x412f92);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412f93:{NFSU2_TR(0x412f93);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412f94:{NFSU2_TR(0x412f94);
__builtin_memmove((R+28),(R+4),4);
}
B412f96:{NFSU2_TR(0x412f96);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B412f9d:{NFSU2_TR(0x412f9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8f8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B412fa3:{NFSU2_TR(0x412fa3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B412fab:{NFSU2_TR(0x412fab);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B412fad:{NFSU2_TR(0x412fad);
__builtin_memmove((R+4),(R+4),4);
}
B412fb0:L412fb0:{c.instructions+=3;NFSU2_TR(0x412fb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B412fb2:{NFSU2_TR(0x412fb2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B412fb4:{NFSU2_TR(0x412fb4);
if(r1(R+518)){{goto L412fc6;}}
}
B412fb6:L412fb6:{c.instructions+=3;NFSU2_TR(0x412fb6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B412fb7:{NFSU2_TR(0x412fb7);
w4(R+4,u32(0x8a3288ull));
}
B412fbc:{NFSU2_TR(0x412fbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x412fc1ull));
TAIL_STATIC(0x63ae00u,63a);
}
B412fc1:L412fc1:{c.instructions+=2;NFSU2_TR(0x412fc1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B412fc3:{NFSU2_TR(0x412fc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B412fc6:L412fc6:{c.instructions+=5;NFSU2_TR(0x412fc6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B412fca:{NFSU2_TR(0x412fca);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x900ull))));
}
B412fd0:{NFSU2_TR(0x412fd0);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B412fd1:{NFSU2_TR(0x412fd1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B412fd5:{NFSU2_TR(0x412fd5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x412fb0u);}goto L412fb0;}}
}
B412fd7:L412fd7:{c.instructions+=6;NFSU2_TR(0x412fd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B412fda:{NFSU2_TR(0x412fda);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B412fdc:{NFSU2_TR(0x412fdc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1b1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B412fe2:{NFSU2_TR(0x412fe2);
__builtin_memmove((R+8),gp(0x890080),4);
}
B412fe8:{NFSU2_TR(0x412fe8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B412fea:{NFSU2_TR(0x412fea);
if(r1(R+518)){TAIL_STATIC(0x413002u,413);}
}
B412fec:L412fec:{c.instructions+=5;NFSU2_TR(0x412fec);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B412fef:{NFSU2_TR(0x412fef);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B412ff2:{NFSU2_TR(0x412ff2);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+24))));
}
B412ff4:{NFSU2_TR(0x412ff4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B412ff6:{NFSU2_TR(0x412ff6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x413002u,413);}
}
B412ff8:L412ff8:{c.instructions+=3;NFSU2_TR(0x412ff8);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B412ffa:{NFSU2_TR(0x412ffa);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B412ffe:{NFSU2_TR(0x412ffe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
TAIL_STATIC(0x413000u,413);
}
XIT:NFSU2_TR_EXIT(0x412,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
